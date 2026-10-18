#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x51d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x51d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_51d(u8* __restrict R,Cpu& c);
u32 page_51d(Cpu& c){return body_51d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_51d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x51d001:goto L51d001;
case 0x51d002:c.instructions+=2;goto B51d002;
case 0x51d003:c.instructions+=1;goto B51d003;
case 0x51d004:goto L51d004;
case 0x51d006:c.instructions+=1;goto B51d006;
case 0x51d008:goto L51d008;
case 0x51d00b:c.instructions+=1;goto B51d00b;
case 0x51d00d:goto L51d00d;
case 0x51d00f:c.instructions+=2;goto B51d00f;
case 0x51d012:c.instructions+=1;goto B51d012;
case 0x51d017:goto L51d017;
case 0x51d01a:c.instructions+=1;goto B51d01a;
case 0x51d021:goto L51d021;
case 0x51d025:c.instructions+=2;goto B51d025;
case 0x51d027:c.instructions+=1;goto B51d027;
case 0x51d029:goto L51d029;
case 0x51d030:goto L51d030;
case 0x51d031:c.instructions+=2;goto B51d031;
case 0x51d032:c.instructions+=1;goto B51d032;
case 0x51d040:goto L51d040;
case 0x51d044:c.instructions+=2;goto B51d044;
case 0x51d045:c.instructions+=1;goto B51d045;
case 0x51d04a:goto L51d04a;
case 0x51d04e:c.instructions+=3;goto B51d04e;
case 0x51d051:c.instructions+=2;goto B51d051;
case 0x51d053:c.instructions+=1;goto B51d053;
case 0x51d055:goto L51d055;
case 0x51d058:c.instructions+=2;goto B51d058;
case 0x51d05a:c.instructions+=1;goto B51d05a;
case 0x51d05c:goto L51d05c;
case 0x51d05f:c.instructions+=1;goto B51d05f;
case 0x51d061:goto L51d061;
case 0x51d064:c.instructions+=2;goto B51d064;
case 0x51d067:c.instructions+=1;goto B51d067;
case 0x51d069:goto L51d069;
case 0x51d06b:c.instructions+=1;goto B51d06b;
case 0x51d06c:goto L51d06c;
case 0x51d06e:c.instructions+=1;goto B51d06e;
case 0x51d070:goto L51d070;
case 0x51d071:c.instructions+=5;goto B51d071;
case 0x51d072:c.instructions+=4;goto B51d072;
case 0x51d073:c.instructions+=3;goto B51d073;
case 0x51d077:c.instructions+=2;goto B51d077;
case 0x51d079:c.instructions+=1;goto B51d079;
case 0x51d07f:goto L51d07f;
case 0x51d082:c.instructions+=5;goto B51d082;
case 0x51d083:c.instructions+=4;goto B51d083;
case 0x51d086:c.instructions+=3;goto B51d086;
case 0x51d087:c.instructions+=2;goto B51d087;
case 0x51d08a:c.instructions+=1;goto B51d08a;
case 0x51d090:goto L51d090;
case 0x51d097:c.instructions+=1;goto B51d097;
case 0x51d09e:goto L51d09e;
case 0x51d0a1:c.instructions+=14;goto B51d0a1;
case 0x51d0a5:c.instructions+=13;goto B51d0a5;
case 0x51d0ab:c.instructions+=12;goto B51d0ab;
case 0x51d0af:c.instructions+=11;goto B51d0af;
case 0x51d0b2:c.instructions+=10;goto B51d0b2;
case 0x51d0b4:c.instructions+=9;goto B51d0b4;
case 0x51d0b7:c.instructions+=8;goto B51d0b7;
case 0x51d0bd:c.instructions+=7;goto B51d0bd;
case 0x51d0c0:c.instructions+=6;goto B51d0c0;
case 0x51d0c1:c.instructions+=5;goto B51d0c1;
case 0x51d0c2:c.instructions+=4;goto B51d0c2;
case 0x51d0c4:c.instructions+=3;goto B51d0c4;
case 0x51d0c5:c.instructions+=2;goto B51d0c5;
case 0x51d0c6:c.instructions+=1;goto B51d0c6;
case 0x51d0c7:goto L51d0c7;
case 0x51d0ca:c.instructions+=2;goto B51d0ca;
case 0x51d0cb:c.instructions+=1;goto B51d0cb;
case 0x51d0d0:goto L51d0d0;
case 0x51d0d2:c.instructions+=3;goto B51d0d2;
case 0x51d0d5:c.instructions+=2;goto B51d0d5;
case 0x51d0d7:c.instructions+=1;goto B51d0d7;
case 0x51d0d9:goto L51d0d9;
case 0x51d0dc:c.instructions+=4;goto B51d0dc;
case 0x51d0de:c.instructions+=3;goto B51d0de;
case 0x51d0df:c.instructions+=2;goto B51d0df;
case 0x51d0e1:c.instructions+=1;goto B51d0e1;
case 0x51d0e6:goto L51d0e6;
case 0x51d0e9:c.instructions+=7;goto B51d0e9;
case 0x51d0ec:c.instructions+=6;goto B51d0ec;
case 0x51d0ef:c.instructions+=5;goto B51d0ef;
case 0x51d0f0:c.instructions+=4;goto B51d0f0;
case 0x51d0f4:c.instructions+=3;goto B51d0f4;
case 0x51d0f5:c.instructions+=2;goto B51d0f5;
case 0x51d0f7:c.instructions+=1;goto B51d0f7;
case 0x51d0fc:goto L51d0fc;
case 0x51d0ff:c.instructions+=7;goto B51d0ff;
case 0x51d103:c.instructions+=6;goto B51d103;
case 0x51d106:c.instructions+=5;goto B51d106;
case 0x51d107:c.instructions+=4;goto B51d107;
case 0x51d10b:c.instructions+=3;goto B51d10b;
case 0x51d10c:c.instructions+=2;goto B51d10c;
case 0x51d10e:c.instructions+=1;goto B51d10e;
case 0x51d113:goto L51d113;
case 0x51d116:c.instructions+=8;goto B51d116;
case 0x51d11a:c.instructions+=7;goto B51d11a;
case 0x51d11e:c.instructions+=6;goto B51d11e;
case 0x51d120:c.instructions+=5;goto B51d120;
case 0x51d123:c.instructions+=4;goto B51d123;
case 0x51d124:c.instructions+=3;goto B51d124;
case 0x51d125:c.instructions+=2;goto B51d125;
case 0x51d127:c.instructions+=1;goto B51d127;
case 0x51d12c:goto L51d12c;
case 0x51d12f:c.instructions+=7;goto B51d12f;
case 0x51d133:c.instructions+=6;goto B51d133;
case 0x51d134:c.instructions+=5;goto B51d134;
case 0x51d135:c.instructions+=4;goto B51d135;
case 0x51d137:c.instructions+=3;goto B51d137;
case 0x51d138:c.instructions+=2;goto B51d138;
case 0x51d139:c.instructions+=1;goto B51d139;
case 0x51d13a:goto L51d13a;
case 0x51d13d:c.instructions+=5;goto B51d13d;
case 0x51d141:c.instructions+=4;goto B51d141;
case 0x51d143:c.instructions+=3;goto B51d143;
case 0x51d146:c.instructions+=2;goto B51d146;
case 0x51d14a:c.instructions+=1;goto B51d14a;
case 0x51d14c:goto L51d14c;
case 0x51d14d:goto L51d14d;
case 0x51d14e:c.instructions+=3;goto B51d14e;
case 0x51d14f:c.instructions+=2;goto B51d14f;
case 0x51d150:c.instructions+=1;goto B51d150;
case 0x51d170:goto L51d170;
case 0x51d176:c.instructions+=5;goto B51d176;
case 0x51d177:c.instructions+=4;goto B51d177;
case 0x51d178:c.instructions+=3;goto B51d178;
case 0x51d17f:c.instructions+=2;goto B51d17f;
case 0x51d181:c.instructions+=1;goto B51d181;
case 0x51d187:goto L51d187;
case 0x51d18a:c.instructions+=5;goto B51d18a;
case 0x51d18b:c.instructions+=4;goto B51d18b;
case 0x51d18e:c.instructions+=3;goto B51d18e;
case 0x51d18f:c.instructions+=2;goto B51d18f;
case 0x51d192:c.instructions+=1;goto B51d192;
case 0x51d198:goto L51d198;
case 0x51d19f:c.instructions+=1;goto B51d19f;
case 0x51d1a6:goto L51d1a6;
case 0x51d1a9:c.instructions+=14;goto B51d1a9;
case 0x51d1b0:c.instructions+=13;goto B51d1b0;
case 0x51d1b6:c.instructions+=12;goto B51d1b6;
case 0x51d1bd:c.instructions+=11;goto B51d1bd;
case 0x51d1c0:c.instructions+=10;goto B51d1c0;
case 0x51d1c2:c.instructions+=9;goto B51d1c2;
case 0x51d1c5:c.instructions+=8;goto B51d1c5;
case 0x51d1cb:c.instructions+=7;goto B51d1cb;
case 0x51d1ce:c.instructions+=6;goto B51d1ce;
case 0x51d1cf:c.instructions+=5;goto B51d1cf;
case 0x51d1d0:c.instructions+=4;goto B51d1d0;
case 0x51d1d2:c.instructions+=3;goto B51d1d2;
case 0x51d1d3:c.instructions+=2;goto B51d1d3;
case 0x51d1d9:c.instructions+=1;goto B51d1d9;
case 0x51d1da:goto L51d1da;
case 0x51d1dd:c.instructions+=2;goto B51d1dd;
case 0x51d1de:c.instructions+=1;goto B51d1de;
case 0x51d1e3:goto L51d1e3;
case 0x51d1e5:c.instructions+=3;goto B51d1e5;
case 0x51d1e8:c.instructions+=2;goto B51d1e8;
case 0x51d1ea:c.instructions+=1;goto B51d1ea;
case 0x51d1f0:goto L51d1f0;
case 0x51d1f4:c.instructions+=3;goto B51d1f4;
case 0x51d1f7:c.instructions+=2;goto B51d1f7;
case 0x51d1f8:c.instructions+=1;goto B51d1f8;
case 0x51d1fa:goto L51d1fa;
case 0x51d1fb:c.instructions+=4;goto B51d1fb;
case 0x51d1ff:c.instructions+=3;goto B51d1ff;
case 0x51d204:c.instructions+=2;goto B51d204;
case 0x51d205:c.instructions+=1;goto B51d205;
case 0x51d20a:goto L51d20a;
case 0x51d20d:c.instructions+=3;goto B51d20d;
case 0x51d20f:c.instructions+=2;goto B51d20f;
case 0x51d213:c.instructions+=1;goto B51d213;
case 0x51d215:goto L51d215;
case 0x51d218:goto L51d218;
case 0x51d21a:c.instructions+=3;goto B51d21a;
case 0x51d21b:c.instructions+=2;goto B51d21b;
case 0x51d21d:c.instructions+=1;goto B51d21d;
case 0x51d222:goto L51d222;
case 0x51d225:c.instructions+=6;goto B51d225;
case 0x51d228:c.instructions+=5;goto B51d228;
case 0x51d229:c.instructions+=4;goto B51d229;
case 0x51d22a:c.instructions+=3;goto B51d22a;
case 0x51d22e:c.instructions+=2;goto B51d22e;
case 0x51d230:c.instructions+=1;goto B51d230;
case 0x51d235:goto L51d235;
case 0x51d238:c.instructions+=7;goto B51d238;
case 0x51d23c:c.instructions+=6;goto B51d23c;
case 0x51d23f:c.instructions+=5;goto B51d23f;
case 0x51d240:c.instructions+=4;goto B51d240;
case 0x51d244:c.instructions+=3;goto B51d244;
case 0x51d245:c.instructions+=2;goto B51d245;
case 0x51d247:c.instructions+=1;goto B51d247;
case 0x51d24c:goto L51d24c;
case 0x51d24f:c.instructions+=9;goto B51d24f;
case 0x51d256:c.instructions+=8;goto B51d256;
case 0x51d25a:c.instructions+=7;goto B51d25a;
case 0x51d25e:c.instructions+=6;goto B51d25e;
case 0x51d25f:c.instructions+=5;goto B51d25f;
case 0x51d261:c.instructions+=4;goto B51d261;
case 0x51d264:c.instructions+=3;goto B51d264;
case 0x51d265:c.instructions+=2;goto B51d265;
case 0x51d267:c.instructions+=1;goto B51d267;
case 0x51d26c:goto L51d26c;
case 0x51d26f:c.instructions+=9;goto B51d26f;
case 0x51d276:c.instructions+=8;goto B51d276;
case 0x51d277:c.instructions+=7;goto B51d277;
case 0x51d27b:c.instructions+=6;goto B51d27b;
case 0x51d27c:c.instructions+=5;goto B51d27c;
case 0x51d27d:c.instructions+=4;goto B51d27d;
case 0x51d27e:c.instructions+=3;goto B51d27e;
case 0x51d280:c.instructions+=2;goto B51d280;
case 0x51d286:c.instructions+=1;goto B51d286;
case 0x51d287:goto L51d287;
case 0x51d28a:c.instructions+=5;goto B51d28a;
case 0x51d291:c.instructions+=4;goto B51d291;
case 0x51d293:c.instructions+=3;goto B51d293;
case 0x51d296:c.instructions+=2;goto B51d296;
case 0x51d29d:c.instructions+=1;goto B51d29d;
case 0x51d29f:goto L51d29f;
case 0x51d2a0:goto L51d2a0;
case 0x51d2a1:c.instructions+=3;goto B51d2a1;
case 0x51d2a2:c.instructions+=2;goto B51d2a2;
case 0x51d2a8:c.instructions+=1;goto B51d2a8;
case 0x51d2d0:goto L51d2d0;
case 0x51d2d3:c.instructions+=4;goto B51d2d3;
case 0x51d2d4:c.instructions+=3;goto B51d2d4;
case 0x51d2d8:c.instructions+=2;goto B51d2d8;
case 0x51d2da:c.instructions+=1;goto B51d2da;
case 0x51d2e0:goto L51d2e0;
case 0x51d2e3:c.instructions+=9;goto B51d2e3;
case 0x51d2e6:c.instructions+=8;goto B51d2e6;
case 0x51d2e9:c.instructions+=7;goto B51d2e9;
case 0x51d2ec:c.instructions+=6;goto B51d2ec;
case 0x51d2f0:c.instructions+=5;goto B51d2f0;
case 0x51d2f3:c.instructions+=4;goto B51d2f3;
case 0x51d2f7:c.instructions+=3;goto B51d2f7;
case 0x51d2f9:c.instructions+=2;goto B51d2f9;
case 0x51d2fa:c.instructions+=1;goto B51d2fa;
case 0x51d2fc:goto L51d2fc;
case 0x51d2ff:c.instructions+=1;goto B51d2ff;
case 0x51d301:goto L51d301;
case 0x51d304:c.instructions+=1;goto B51d304;
case 0x51d306:goto L51d306;
case 0x51d30a:c.instructions+=5;goto B51d30a;
case 0x51d30c:c.instructions+=4;goto B51d30c;
case 0x51d310:c.instructions+=3;goto B51d310;
case 0x51d314:c.instructions+=2;goto B51d314;
case 0x51d318:c.instructions+=1;goto B51d318;
case 0x51d31a:goto L51d31a;
case 0x51d320:c.instructions+=6;goto B51d320;
case 0x51d324:c.instructions+=5;goto B51d324;
case 0x51d328:c.instructions+=4;goto B51d328;
case 0x51d32c:c.instructions+=3;goto B51d32c;
case 0x51d332:c.instructions+=2;goto B51d332;
case 0x51d336:c.instructions+=1;goto B51d336;
case 0x51d33a:goto L51d33a;
case 0x51d340:c.instructions+=1;goto B51d340;
case 0x51d342:goto L51d342;
case 0x51d345:c.instructions+=4;goto B51d345;
case 0x51d346:c.instructions+=3;goto B51d346;
case 0x51d34a:c.instructions+=2;goto B51d34a;
case 0x51d34b:c.instructions+=1;goto B51d34b;
case 0x51d350:goto L51d350;
case 0x51d353:c.instructions+=2;goto B51d353;
case 0x51d355:c.instructions+=1;goto B51d355;
case 0x51d357:goto L51d357;
case 0x51d35e:goto L51d35e;
case 0x51d360:c.instructions+=5;goto B51d360;
case 0x51d364:c.instructions+=4;goto B51d364;
case 0x51d365:c.instructions+=3;goto B51d365;
case 0x51d367:c.instructions+=2;goto B51d367;
case 0x51d369:c.instructions+=1;goto B51d369;
case 0x51d36e:goto L51d36e;
case 0x51d36f:c.instructions+=2;goto B51d36f;
case 0x51d372:c.instructions+=1;goto B51d372;
case 0x51d380:goto L51d380;
case 0x51d383:c.instructions+=4;goto B51d383;
case 0x51d384:c.instructions+=3;goto B51d384;
case 0x51d388:c.instructions+=2;goto B51d388;
case 0x51d38a:c.instructions+=1;goto B51d38a;
case 0x51d390:goto L51d390;
case 0x51d393:c.instructions+=15;goto B51d393;
case 0x51d396:c.instructions+=14;goto B51d396;
case 0x51d399:c.instructions+=13;goto B51d399;
case 0x51d39d:c.instructions+=12;goto B51d39d;
case 0x51d3a0:c.instructions+=11;goto B51d3a0;
case 0x51d3a4:c.instructions+=10;goto B51d3a4;
case 0x51d3a7:c.instructions+=9;goto B51d3a7;
case 0x51d3aa:c.instructions+=8;goto B51d3aa;
case 0x51d3ae:c.instructions+=7;goto B51d3ae;
case 0x51d3b1:c.instructions+=6;goto B51d3b1;
case 0x51d3b2:c.instructions+=5;goto B51d3b2;
case 0x51d3b5:c.instructions+=4;goto B51d3b5;
case 0x51d3b6:c.instructions+=3;goto B51d3b6;
case 0x51d3ba:c.instructions+=2;goto B51d3ba;
case 0x51d3be:c.instructions+=1;goto B51d3be;
case 0x51d3c4:goto L51d3c4;
case 0x51d3cb:c.instructions+=1;goto B51d3cb;
case 0x51d3d2:goto L51d3d2;
case 0x51d3d6:c.instructions+=8;goto B51d3d6;
case 0x51d3dc:c.instructions+=7;goto B51d3dc;
case 0x51d3e0:c.instructions+=6;goto B51d3e0;
case 0x51d3e4:c.instructions+=5;goto B51d3e4;
case 0x51d3e8:c.instructions+=4;goto B51d3e8;
case 0x51d3ee:c.instructions+=3;goto B51d3ee;
case 0x51d3f2:c.instructions+=2;goto B51d3f2;
case 0x51d3f6:c.instructions+=1;goto B51d3f6;
case 0x51d3f8:goto L51d3f8;
case 0x51d3fb:c.instructions+=2;goto B51d3fb;
case 0x51d3fc:c.instructions+=1;goto B51d3fc;
case 0x51d401:goto L51d401;
case 0x51d403:c.instructions+=3;goto B51d403;
case 0x51d406:c.instructions+=2;goto B51d406;
case 0x51d408:c.instructions+=1;goto B51d408;
case 0x51d40a:goto L51d40a;
case 0x51d40d:c.instructions+=4;goto B51d40d;
case 0x51d40f:c.instructions+=3;goto B51d40f;
case 0x51d410:c.instructions+=2;goto B51d410;
case 0x51d412:c.instructions+=1;goto B51d412;
case 0x51d417:goto L51d417;
case 0x51d41b:c.instructions+=7;goto B51d41b;
case 0x51d41e:c.instructions+=6;goto B51d41e;
case 0x51d421:c.instructions+=5;goto B51d421;
case 0x51d422:c.instructions+=4;goto B51d422;
case 0x51d426:c.instructions+=3;goto B51d426;
case 0x51d427:c.instructions+=2;goto B51d427;
case 0x51d429:c.instructions+=1;goto B51d429;
case 0x51d42e:goto L51d42e;
case 0x51d432:c.instructions+=7;goto B51d432;
case 0x51d436:c.instructions+=6;goto B51d436;
case 0x51d439:c.instructions+=5;goto B51d439;
case 0x51d43a:c.instructions+=4;goto B51d43a;
case 0x51d43e:c.instructions+=3;goto B51d43e;
case 0x51d43f:c.instructions+=2;goto B51d43f;
case 0x51d441:c.instructions+=1;goto B51d441;
case 0x51d446:goto L51d446;
case 0x51d44a:c.instructions+=6;goto B51d44a;
case 0x51d44e:c.instructions+=5;goto B51d44e;
case 0x51d44f:c.instructions+=4;goto B51d44f;
case 0x51d450:c.instructions+=3;goto B51d450;
case 0x51d454:c.instructions+=2;goto B51d454;
case 0x51d456:c.instructions+=1;goto B51d456;
case 0x51d45b:goto L51d45b;
case 0x51d45f:c.instructions+=2;goto B51d45f;
case 0x51d463:c.instructions+=1;goto B51d463;
case 0x51d465:goto L51d465;
case 0x51d469:c.instructions+=3;goto B51d469;
case 0x51d46d:c.instructions+=2;goto B51d46d;
case 0x51d471:c.instructions+=1;goto B51d471;
case 0x51d475:goto L51d475;
case 0x51d47c:c.instructions+=2;goto B51d47c;
case 0x51d47d:c.instructions+=1;goto B51d47d;
case 0x51d47f:goto L51d47f;
case 0x51d482:c.instructions+=5;goto B51d482;
case 0x51d485:c.instructions+=4;goto B51d485;
case 0x51d486:c.instructions+=3;goto B51d486;
case 0x51d48a:c.instructions+=2;goto B51d48a;
case 0x51d48b:c.instructions+=1;goto B51d48b;
case 0x51d490:goto L51d490;
case 0x51d493:c.instructions+=2;goto B51d493;
case 0x51d495:c.instructions+=1;goto B51d495;
case 0x51d497:goto L51d497;
case 0x51d49e:goto L51d49e;
case 0x51d4a0:c.instructions+=5;goto B51d4a0;
case 0x51d4a4:c.instructions+=4;goto B51d4a4;
case 0x51d4a5:c.instructions+=3;goto B51d4a5;
case 0x51d4a7:c.instructions+=2;goto B51d4a7;
case 0x51d4a9:c.instructions+=1;goto B51d4a9;
case 0x51d4ae:goto L51d4ae;
case 0x51d4af:c.instructions+=2;goto B51d4af;
case 0x51d4b2:c.instructions+=1;goto B51d4b2;
case 0x51d4d0:goto L51d4d0;
case 0x51d4d3:c.instructions+=4;goto B51d4d3;
case 0x51d4d4:c.instructions+=3;goto B51d4d4;
case 0x51d4d8:c.instructions+=2;goto B51d4d8;
case 0x51d4da:c.instructions+=1;goto B51d4da;
case 0x51d4e0:goto L51d4e0;
case 0x51d4e1:c.instructions+=12;goto B51d4e1;
case 0x51d4e4:c.instructions+=11;goto B51d4e4;
case 0x51d4e7:c.instructions+=10;goto B51d4e7;
case 0x51d4ea:c.instructions+=9;goto B51d4ea;
case 0x51d4ed:c.instructions+=8;goto B51d4ed;
case 0x51d4f1:c.instructions+=7;goto B51d4f1;
case 0x51d4f4:c.instructions+=6;goto B51d4f4;
case 0x51d4f5:c.instructions+=5;goto B51d4f5;
case 0x51d4f8:c.instructions+=4;goto B51d4f8;
case 0x51d4f9:c.instructions+=3;goto B51d4f9;
case 0x51d4fd:c.instructions+=2;goto B51d4fd;
case 0x51d501:c.instructions+=1;goto B51d501;
case 0x51d507:goto L51d507;
case 0x51d50e:c.instructions+=1;goto B51d50e;
case 0x51d515:goto L51d515;
case 0x51d519:c.instructions+=4;goto B51d519;
case 0x51d51d:c.instructions+=3;goto B51d51d;
case 0x51d521:c.instructions+=2;goto B51d521;
case 0x51d525:c.instructions+=1;goto B51d525;
case 0x51d52a:goto L51d52a;
case 0x51d52d:c.instructions+=2;goto B51d52d;
case 0x51d52e:c.instructions+=1;goto B51d52e;
case 0x51d533:goto L51d533;
case 0x51d535:c.instructions+=3;goto B51d535;
case 0x51d538:c.instructions+=2;goto B51d538;
case 0x51d53a:c.instructions+=1;goto B51d53a;
case 0x51d540:goto L51d540;
case 0x51d543:c.instructions+=4;goto B51d543;
case 0x51d545:c.instructions+=3;goto B51d545;
case 0x51d546:c.instructions+=2;goto B51d546;
case 0x51d548:c.instructions+=1;goto B51d548;
case 0x51d54d:goto L51d54d;
case 0x51d550:c.instructions+=7;goto B51d550;
case 0x51d553:c.instructions+=6;goto B51d553;
case 0x51d556:c.instructions+=5;goto B51d556;
case 0x51d557:c.instructions+=4;goto B51d557;
case 0x51d55b:c.instructions+=3;goto B51d55b;
case 0x51d55c:c.instructions+=2;goto B51d55c;
case 0x51d55e:c.instructions+=1;goto B51d55e;
case 0x51d563:goto L51d563;
case 0x51d566:c.instructions+=7;goto B51d566;
case 0x51d56a:c.instructions+=6;goto B51d56a;
case 0x51d56d:c.instructions+=5;goto B51d56d;
case 0x51d56e:c.instructions+=4;goto B51d56e;
case 0x51d572:c.instructions+=3;goto B51d572;
case 0x51d573:c.instructions+=2;goto B51d573;
case 0x51d575:c.instructions+=1;goto B51d575;
case 0x51d57a:goto L51d57a;
case 0x51d57e:c.instructions+=9;goto B51d57e;
case 0x51d584:c.instructions+=8;goto B51d584;
case 0x51d588:c.instructions+=7;goto B51d588;
case 0x51d589:c.instructions+=6;goto B51d589;
case 0x51d58a:c.instructions+=5;goto B51d58a;
case 0x51d58c:c.instructions+=4;goto B51d58c;
case 0x51d58e:c.instructions+=3;goto B51d58e;
case 0x51d592:c.instructions+=2;goto B51d592;
case 0x51d596:c.instructions+=1;goto B51d596;
case 0x51d59b:goto L51d59b;
case 0x51d59f:c.instructions+=5;goto B51d59f;
case 0x51d5a5:c.instructions+=4;goto B51d5a5;
case 0x51d5a7:c.instructions+=3;goto B51d5a7;
case 0x51d5ab:c.instructions+=2;goto B51d5ab;
case 0x51d5af:c.instructions+=1;goto B51d5af;
case 0x51d5b1:goto L51d5b1;
case 0x51d5b5:c.instructions+=3;goto B51d5b5;
case 0x51d5b9:c.instructions+=2;goto B51d5b9;
case 0x51d5bd:c.instructions+=1;goto B51d5bd;
case 0x51d5c1:goto L51d5c1;
case 0x51d5c8:c.instructions+=3;goto B51d5c8;
case 0x51d5c9:c.instructions+=2;goto B51d5c9;
case 0x51d5ca:c.instructions+=1;goto B51d5ca;
case 0x51d5cc:goto L51d5cc;
case 0x51d5cf:c.instructions+=5;goto B51d5cf;
case 0x51d5d2:c.instructions+=4;goto B51d5d2;
case 0x51d5d3:c.instructions+=3;goto B51d5d3;
case 0x51d5d7:c.instructions+=2;goto B51d5d7;
case 0x51d5d8:c.instructions+=1;goto B51d5d8;
case 0x51d5dd:goto L51d5dd;
case 0x51d5e0:c.instructions+=2;goto B51d5e0;
case 0x51d5e2:c.instructions+=1;goto B51d5e2;
case 0x51d5e4:goto L51d5e4;
case 0x51d5eb:goto L51d5eb;
case 0x51d5ed:c.instructions+=5;goto B51d5ed;
case 0x51d5f1:c.instructions+=4;goto B51d5f1;
case 0x51d5f2:c.instructions+=3;goto B51d5f2;
case 0x51d5f4:c.instructions+=2;goto B51d5f4;
case 0x51d5f6:c.instructions+=1;goto B51d5f6;
case 0x51d5fb:goto L51d5fb;
case 0x51d5fc:c.instructions+=2;goto B51d5fc;
case 0x51d5ff:c.instructions+=1;goto B51d5ff;
case 0x51d620:goto L51d620;
case 0x51d621:c.instructions+=5;goto B51d621;
case 0x51d622:c.instructions+=4;goto B51d622;
case 0x51d626:c.instructions+=3;goto B51d626;
case 0x51d628:c.instructions+=2;goto B51d628;
case 0x51d629:c.instructions+=1;goto B51d629;
case 0x51d62f:goto L51d62f;
case 0x51d632:c.instructions+=5;goto B51d632;
case 0x51d633:c.instructions+=4;goto B51d633;
case 0x51d636:c.instructions+=3;goto B51d636;
case 0x51d637:c.instructions+=2;goto B51d637;
case 0x51d63a:c.instructions+=1;goto B51d63a;
case 0x51d640:goto L51d640;
case 0x51d647:c.instructions+=1;goto B51d647;
case 0x51d64e:goto L51d64e;
case 0x51d651:c.instructions+=10;goto B51d651;
case 0x51d655:c.instructions+=9;goto B51d655;
case 0x51d657:c.instructions+=8;goto B51d657;
case 0x51d65a:c.instructions+=7;goto B51d65a;
case 0x51d65e:c.instructions+=6;goto B51d65e;
case 0x51d65f:c.instructions+=5;goto B51d65f;
case 0x51d660:c.instructions+=4;goto B51d660;
case 0x51d662:c.instructions+=3;goto B51d662;
case 0x51d663:c.instructions+=2;goto B51d663;
case 0x51d664:c.instructions+=1;goto B51d664;
case 0x51d665:goto L51d665;
case 0x51d668:c.instructions+=2;goto B51d668;
case 0x51d669:c.instructions+=1;goto B51d669;
case 0x51d66e:goto L51d66e;
case 0x51d670:c.instructions+=3;goto B51d670;
case 0x51d673:c.instructions+=2;goto B51d673;
case 0x51d675:c.instructions+=1;goto B51d675;
case 0x51d67b:goto L51d67b;
case 0x51d67e:c.instructions+=4;goto B51d67e;
case 0x51d680:c.instructions+=3;goto B51d680;
case 0x51d681:c.instructions+=2;goto B51d681;
case 0x51d683:c.instructions+=1;goto B51d683;
case 0x51d688:goto L51d688;
case 0x51d68b:c.instructions+=7;goto B51d68b;
case 0x51d68e:c.instructions+=6;goto B51d68e;
case 0x51d691:c.instructions+=5;goto B51d691;
case 0x51d692:c.instructions+=4;goto B51d692;
case 0x51d696:c.instructions+=3;goto B51d696;
case 0x51d697:c.instructions+=2;goto B51d697;
case 0x51d699:c.instructions+=1;goto B51d699;
case 0x51d69e:goto L51d69e;
case 0x51d6a1:c.instructions+=7;goto B51d6a1;
case 0x51d6a5:c.instructions+=6;goto B51d6a5;
case 0x51d6a8:c.instructions+=5;goto B51d6a8;
case 0x51d6a9:c.instructions+=4;goto B51d6a9;
case 0x51d6ad:c.instructions+=3;goto B51d6ad;
case 0x51d6ae:c.instructions+=2;goto B51d6ae;
case 0x51d6b0:c.instructions+=1;goto B51d6b0;
case 0x51d6b5:goto L51d6b5;
case 0x51d6b9:c.instructions+=11;goto B51d6b9;
case 0x51d6bf:c.instructions+=10;goto B51d6bf;
case 0x51d6c3:c.instructions+=9;goto B51d6c3;
case 0x51d6c7:c.instructions+=8;goto B51d6c7;
case 0x51d6c8:c.instructions+=7;goto B51d6c8;
case 0x51d6ca:c.instructions+=6;goto B51d6ca;
case 0x51d6cd:c.instructions+=5;goto B51d6cd;
case 0x51d6cf:c.instructions+=4;goto B51d6cf;
case 0x51d6d2:c.instructions+=3;goto B51d6d2;
case 0x51d6d3:c.instructions+=2;goto B51d6d3;
case 0x51d6d5:c.instructions+=1;goto B51d6d5;
case 0x51d6da:goto L51d6da;
case 0x51d6de:c.instructions+=10;goto B51d6de;
case 0x51d6e4:c.instructions+=9;goto B51d6e4;
case 0x51d6e8:c.instructions+=8;goto B51d6e8;
case 0x51d6ea:c.instructions+=7;goto B51d6ea;
case 0x51d6ed:c.instructions+=6;goto B51d6ed;
case 0x51d6ee:c.instructions+=5;goto B51d6ee;
case 0x51d6ef:c.instructions+=4;goto B51d6ef;
case 0x51d6f0:c.instructions+=3;goto B51d6f0;
case 0x51d6f2:c.instructions+=2;goto B51d6f2;
case 0x51d6f3:c.instructions+=1;goto B51d6f3;
case 0x51d6f4:goto L51d6f4;
case 0x51d6f7:c.instructions+=5;goto B51d6f7;
case 0x51d6fb:c.instructions+=4;goto B51d6fb;
case 0x51d6fd:c.instructions+=3;goto B51d6fd;
case 0x51d700:c.instructions+=2;goto B51d700;
case 0x51d704:c.instructions+=1;goto B51d704;
case 0x51d706:goto L51d706;
case 0x51d707:goto L51d707;
case 0x51d708:c.instructions+=3;goto B51d708;
case 0x51d709:c.instructions+=2;goto B51d709;
case 0x51d70a:c.instructions+=1;goto B51d70a;
case 0x51d730:goto L51d730;
case 0x51d731:c.instructions+=4;goto B51d731;
case 0x51d735:c.instructions+=3;goto B51d735;
case 0x51d737:c.instructions+=2;goto B51d737;
case 0x51d738:c.instructions+=1;goto B51d738;
case 0x51d73e:goto L51d73e;
case 0x51d741:c.instructions+=5;goto B51d741;
case 0x51d742:c.instructions+=4;goto B51d742;
case 0x51d745:c.instructions+=3;goto B51d745;
case 0x51d746:c.instructions+=2;goto B51d746;
case 0x51d749:c.instructions+=1;goto B51d749;
case 0x51d74b:goto L51d74b;
case 0x51d752:c.instructions+=1;goto B51d752;
case 0x51d759:goto L51d759;
case 0x51d75c:c.instructions+=9;goto B51d75c;
case 0x51d760:c.instructions+=8;goto B51d760;
case 0x51d762:c.instructions+=7;goto B51d762;
case 0x51d765:c.instructions+=6;goto B51d765;
case 0x51d769:c.instructions+=5;goto B51d769;
case 0x51d76a:c.instructions+=4;goto B51d76a;
case 0x51d76b:c.instructions+=3;goto B51d76b;
case 0x51d76d:c.instructions+=2;goto B51d76d;
case 0x51d76e:c.instructions+=1;goto B51d76e;
case 0x51d76f:goto L51d76f;
case 0x51d772:c.instructions+=2;goto B51d772;
case 0x51d773:c.instructions+=1;goto B51d773;
case 0x51d778:goto L51d778;
case 0x51d77a:c.instructions+=3;goto B51d77a;
case 0x51d77d:c.instructions+=2;goto B51d77d;
case 0x51d77f:c.instructions+=1;goto B51d77f;
case 0x51d781:goto L51d781;
case 0x51d784:c.instructions+=4;goto B51d784;
case 0x51d786:c.instructions+=3;goto B51d786;
case 0x51d787:c.instructions+=2;goto B51d787;
case 0x51d789:c.instructions+=1;goto B51d789;
case 0x51d78e:goto L51d78e;
case 0x51d791:c.instructions+=8;goto B51d791;
case 0x51d795:c.instructions+=7;goto B51d795;
case 0x51d797:c.instructions+=6;goto B51d797;
case 0x51d79a:c.instructions+=5;goto B51d79a;
case 0x51d79d:c.instructions+=4;goto B51d79d;
case 0x51d79e:c.instructions+=3;goto B51d79e;
case 0x51d79f:c.instructions+=2;goto B51d79f;
case 0x51d7a1:c.instructions+=1;goto B51d7a1;
case 0x51d7a6:goto L51d7a6;
case 0x51d7a9:c.instructions+=6;goto B51d7a9;
case 0x51d7ad:c.instructions+=5;goto B51d7ad;
case 0x51d7ae:c.instructions+=4;goto B51d7ae;
case 0x51d7af:c.instructions+=3;goto B51d7af;
case 0x51d7b1:c.instructions+=2;goto B51d7b1;
case 0x51d7b2:c.instructions+=1;goto B51d7b2;
case 0x51d7b3:goto L51d7b3;
case 0x51d7b7:c.instructions+=3;goto B51d7b7;
case 0x51d7bb:c.instructions+=2;goto B51d7bb;
case 0x51d7c1:c.instructions+=1;goto B51d7c1;
case 0x51d7c7:goto L51d7c7;
case 0x51d7c8:goto L51d7c8;
case 0x51d7c9:c.instructions+=2;goto B51d7c9;
case 0x51d7ca:c.instructions+=1;goto B51d7ca;
case 0x51d7f0:goto L51d7f0;
case 0x51d7f3:c.instructions+=4;goto B51d7f3;
case 0x51d7f4:c.instructions+=3;goto B51d7f4;
case 0x51d7f8:c.instructions+=2;goto B51d7f8;
case 0x51d7fa:c.instructions+=1;goto B51d7fa;
case 0x51d7fc:goto L51d7fc;
case 0x51d800:c.instructions+=13;goto B51d800;
case 0x51d802:c.instructions+=12;goto B51d802;
case 0x51d805:c.instructions+=11;goto B51d805;
case 0x51d807:c.instructions+=10;goto B51d807;
case 0x51d80b:c.instructions+=9;goto B51d80b;
case 0x51d80e:c.instructions+=8;goto B51d80e;
case 0x51d813:c.instructions+=7;goto B51d813;
case 0x51d816:c.instructions+=6;goto B51d816;
case 0x51d819:c.instructions+=5;goto B51d819;
case 0x51d81d:c.instructions+=4;goto B51d81d;
case 0x51d824:c.instructions+=3;goto B51d824;
case 0x51d828:c.instructions+=2;goto B51d828;
case 0x51d82c:c.instructions+=1;goto B51d82c;
case 0x51d82e:goto L51d82e;
case 0x51d831:c.instructions+=4;goto B51d831;
case 0x51d832:c.instructions+=3;goto B51d832;
case 0x51d836:c.instructions+=2;goto B51d836;
case 0x51d837:c.instructions+=1;goto B51d837;
case 0x51d83c:goto L51d83c;
case 0x51d83f:c.instructions+=2;goto B51d83f;
case 0x51d841:c.instructions+=1;goto B51d841;
case 0x51d843:goto L51d843;
case 0x51d84a:goto L51d84a;
case 0x51d84c:c.instructions+=5;goto B51d84c;
case 0x51d850:c.instructions+=4;goto B51d850;
case 0x51d851:c.instructions+=3;goto B51d851;
case 0x51d853:c.instructions+=2;goto B51d853;
case 0x51d855:c.instructions+=1;goto B51d855;
case 0x51d85a:goto L51d85a;
case 0x51d85b:c.instructions+=2;goto B51d85b;
case 0x51d85e:c.instructions+=1;goto B51d85e;
case 0x51d860:goto L51d860;
case 0x51d861:c.instructions+=3;goto B51d861;
case 0x51d865:c.instructions+=2;goto B51d865;
case 0x51d867:c.instructions+=1;goto B51d867;
case 0x51d869:goto L51d869;
case 0x51d870:c.instructions+=1;goto B51d870;
case 0x51d872:goto L51d872;
case 0x51d875:c.instructions+=5;goto B51d875;
case 0x51d876:c.instructions+=4;goto B51d876;
case 0x51d87a:c.instructions+=3;goto B51d87a;
case 0x51d87b:c.instructions+=2;goto B51d87b;
case 0x51d87c:c.instructions+=1;goto B51d87c;
case 0x51d881:goto L51d881;
case 0x51d884:c.instructions+=2;goto B51d884;
case 0x51d886:c.instructions+=1;goto B51d886;
case 0x51d888:goto L51d888;
case 0x51d88f:goto L51d88f;
case 0x51d891:c.instructions+=4;goto B51d891;
case 0x51d892:c.instructions+=3;goto B51d892;
case 0x51d894:c.instructions+=2;goto B51d894;
case 0x51d896:c.instructions+=1;goto B51d896;
case 0x51d89b:goto L51d89b;
case 0x51d89c:goto L51d89c;
case 0x51d89d:c.instructions+=1;goto B51d89d;
case 0x51d8a0:goto L51d8a0;
case 0x51d8a6:c.instructions+=16;goto B51d8a6;
case 0x51d8ad:c.instructions+=15;goto B51d8ad;
case 0x51d8ae:c.instructions+=14;goto B51d8ae;
case 0x51d8af:c.instructions+=13;goto B51d8af;
case 0x51d8b6:c.instructions+=12;goto B51d8b6;
case 0x51d8b7:c.instructions+=11;goto B51d8b7;
case 0x51d8be:c.instructions+=10;goto B51d8be;
case 0x51d8c5:c.instructions+=9;goto B51d8c5;
case 0x51d8cb:c.instructions+=8;goto B51d8cb;
case 0x51d8d1:c.instructions+=7;goto B51d8d1;
case 0x51d8d4:c.instructions+=6;goto B51d8d4;
case 0x51d8d7:c.instructions+=5;goto B51d8d7;
case 0x51d8da:c.instructions+=4;goto B51d8da;
case 0x51d8dd:c.instructions+=3;goto B51d8dd;
case 0x51d8de:c.instructions+=2;goto B51d8de;
case 0x51d8e2:c.instructions+=1;goto B51d8e2;
case 0x51d8e7:goto L51d8e7;
case 0x51d8e9:c.instructions+=3;goto B51d8e9;
case 0x51d8ec:c.instructions+=2;goto B51d8ec;
case 0x51d8ee:c.instructions+=1;goto B51d8ee;
case 0x51d8f4:goto L51d8f4;
case 0x51d8f8:c.instructions+=2;goto B51d8f8;
case 0x51d8f9:c.instructions+=1;goto B51d8f9;
case 0x51d8fb:goto L51d8fb;
case 0x51d8fe:c.instructions+=1;goto B51d8fe;
case 0x51d903:goto L51d903;
case 0x51d905:c.instructions+=1;goto B51d905;
case 0x51d907:goto L51d907;
case 0x51d90d:c.instructions+=3;goto B51d90d;
case 0x51d90f:c.instructions+=2;goto B51d90f;
case 0x51d910:c.instructions+=1;goto B51d910;
case 0x51d912:goto L51d912;
case 0x51d917:c.instructions+=3;goto B51d917;
case 0x51d91b:c.instructions+=2;goto B51d91b;
case 0x51d91c:c.instructions+=1;goto B51d91c;
case 0x51d921:goto L51d921;
case 0x51d925:c.instructions+=1;goto B51d925;
case 0x51d927:goto L51d927;
case 0x51d92b:c.instructions+=2;goto B51d92b;
case 0x51d92c:c.instructions+=1;goto B51d92c;
case 0x51d931:goto L51d931;
case 0x51d934:c.instructions+=2;goto B51d934;
case 0x51d938:c.instructions+=1;goto B51d938;
case 0x51d93a:goto L51d93a;
case 0x51d93d:goto L51d93d;
case 0x51d940:c.instructions+=4;goto B51d940;
case 0x51d941:c.instructions+=3;goto B51d941;
case 0x51d942:c.instructions+=2;goto B51d942;
case 0x51d944:c.instructions+=1;goto B51d944;
case 0x51d949:goto L51d949;
case 0x51d94d:c.instructions+=6;goto B51d94d;
case 0x51d950:c.instructions+=5;goto B51d950;
case 0x51d952:c.instructions+=4;goto B51d952;
case 0x51d953:c.instructions+=3;goto B51d953;
case 0x51d955:c.instructions+=2;goto B51d955;
case 0x51d959:c.instructions+=1;goto B51d959;
case 0x51d95e:goto L51d95e;
case 0x51d962:c.instructions+=11;goto B51d962;
case 0x51d965:c.instructions+=10;goto B51d965;
case 0x51d969:c.instructions+=9;goto B51d969;
case 0x51d96c:c.instructions+=8;goto B51d96c;
case 0x51d974:c.instructions+=7;goto B51d974;
case 0x51d978:c.instructions+=6;goto B51d978;
case 0x51d979:c.instructions+=5;goto B51d979;
case 0x51d97b:c.instructions+=4;goto B51d97b;
case 0x51d97e:c.instructions+=3;goto B51d97e;
case 0x51d980:c.instructions+=2;goto B51d980;
case 0x51d986:c.instructions+=1;goto B51d986;
case 0x51d988:goto L51d988;
case 0x51d990:c.instructions+=1;goto B51d990;
case 0x51d992:goto L51d992;
case 0x51d994:c.instructions+=1;goto B51d994;
case 0x51d996:goto L51d996;
case 0x51d99e:goto L51d99e;
case 0x51d9a0:c.instructions+=1;goto B51d9a0;
case 0x51d9a2:goto L51d9a2;
case 0x51d9a4:c.instructions+=2;goto B51d9a4;
case 0x51d9aa:c.instructions+=1;goto B51d9aa;
case 0x51d9ac:goto L51d9ac;
case 0x51d9ae:c.instructions+=1;goto B51d9ae;
case 0x51d9b0:goto L51d9b0;
case 0x51d9b2:c.instructions+=1;goto B51d9b2;
case 0x51d9b8:goto L51d9b8;
case 0x51d9bc:c.instructions+=9;goto B51d9bc;
case 0x51d9c3:c.instructions+=8;goto B51d9c3;
case 0x51d9c7:c.instructions+=7;goto B51d9c7;
case 0x51d9ca:c.instructions+=6;goto B51d9ca;
case 0x51d9ce:c.instructions+=5;goto B51d9ce;
case 0x51d9d2:c.instructions+=4;goto B51d9d2;
case 0x51d9d5:c.instructions+=3;goto B51d9d5;
case 0x51d9d9:c.instructions+=2;goto B51d9d9;
case 0x51d9dc:c.instructions+=1;goto B51d9dc;
case 0x51d9de:goto L51d9de;
case 0x51d9df:c.instructions+=4;goto B51d9df;
case 0x51d9e0:c.instructions+=3;goto B51d9e0;
case 0x51d9e1:c.instructions+=2;goto B51d9e1;
case 0x51d9e7:c.instructions+=1;goto B51d9e7;
case 0x51d9f0:goto L51d9f0;
case 0x51d9f3:c.instructions+=6;goto B51d9f3;
case 0x51d9f4:c.instructions+=5;goto B51d9f4;
case 0x51d9f5:c.instructions+=4;goto B51d9f5;
case 0x51d9f9:c.instructions+=3;goto B51d9f9;
case 0x51d9fb:c.instructions+=2;goto B51d9fb;
case 0x51d9fc:c.instructions+=1;goto B51d9fc;
case 0x51d9fe:goto L51d9fe;
case 0x51d9ff:c.instructions+=5;goto B51d9ff;
case 0x51da00:c.instructions+=4;goto B51da00;
case 0x51da02:c.instructions+=3;goto B51da02;
case 0x51da03:c.instructions+=2;goto B51da03;
case 0x51da06:c.instructions+=1;goto B51da06;
case 0x51da07:goto L51da07;
case 0x51da0a:c.instructions+=4;goto B51da0a;
case 0x51da0b:c.instructions+=3;goto B51da0b;
case 0x51da0e:c.instructions+=2;goto B51da0e;
case 0x51da0f:c.instructions+=1;goto B51da0f;
case 0x51da15:goto L51da15;
case 0x51da1c:c.instructions+=1;goto B51da1c;
case 0x51da23:goto L51da23;
case 0x51da27:c.instructions+=5;goto B51da27;
case 0x51da2a:c.instructions+=4;goto B51da2a;
case 0x51da2b:c.instructions+=3;goto B51da2b;
case 0x51da2c:c.instructions+=2;goto B51da2c;
case 0x51da2d:c.instructions+=1;goto B51da2d;
case 0x51da32:goto L51da32;
case 0x51da35:c.instructions+=5;goto B51da35;
case 0x51da36:c.instructions+=4;goto B51da36;
case 0x51da39:c.instructions+=3;goto B51da39;
case 0x51da3a:c.instructions+=2;goto B51da3a;
case 0x51da3b:c.instructions+=1;goto B51da3b;
case 0x51da40:goto L51da40;
case 0x51da43:c.instructions+=7;goto B51da43;
case 0x51da44:c.instructions+=6;goto B51da44;
case 0x51da45:c.instructions+=5;goto B51da45;
case 0x51da46:c.instructions+=4;goto B51da46;
case 0x51da48:c.instructions+=3;goto B51da48;
case 0x51da49:c.instructions+=2;goto B51da49;
case 0x51da4c:c.instructions+=1;goto B51da4c;
case 0x51da4d:goto L51da4d;
case 0x51da50:c.instructions+=3;goto B51da50;
case 0x51da52:c.instructions+=2;goto B51da52;
case 0x51da54:c.instructions+=1;goto B51da54;
case 0x51da5a:goto L51da5a;
case 0x51da5e:c.instructions+=1;goto B51da5e;
case 0x51da60:goto L51da60;
case 0x51da64:c.instructions+=3;goto B51da64;
case 0x51da65:c.instructions+=2;goto B51da65;
case 0x51da66:c.instructions+=1;goto B51da66;
case 0x51da6b:goto L51da6b;
case 0x51da6e:c.instructions+=2;goto B51da6e;
case 0x51da70:c.instructions+=1;goto B51da70;
case 0x51da72:goto L51da72;
case 0x51da74:c.instructions+=1;goto B51da74;
case 0x51da76:goto L51da76;
case 0x51da7a:c.instructions+=8;goto B51da7a;
case 0x51da7e:c.instructions+=7;goto B51da7e;
case 0x51da82:c.instructions+=6;goto B51da82;
case 0x51da84:c.instructions+=5;goto B51da84;
case 0x51da88:c.instructions+=4;goto B51da88;
case 0x51da8b:c.instructions+=3;goto B51da8b;
case 0x51da8e:c.instructions+=2;goto B51da8e;
case 0x51da91:c.instructions+=1;goto B51da91;
case 0x51da93:goto L51da93;
case 0x51da97:c.instructions+=4;goto B51da97;
case 0x51da99:c.instructions+=3;goto B51da99;
case 0x51da9b:c.instructions+=2;goto B51da9b;
case 0x51da9e:c.instructions+=1;goto B51da9e;
case 0x51daa0:goto L51daa0;
case 0x51daa4:c.instructions+=1;goto B51daa4;
case 0x51daa6:goto L51daa6;
case 0x51daaa:c.instructions+=4;goto B51daaa;
case 0x51daad:c.instructions+=3;goto B51daad;
case 0x51daaf:c.instructions+=2;goto B51daaf;
case 0x51dab2:c.instructions+=1;goto B51dab2;
case 0x51dab4:goto L51dab4;
case 0x51dab8:c.instructions+=1;goto B51dab8;
case 0x51dabb:goto L51dabb;
case 0x51dabf:c.instructions+=4;goto B51dabf;
case 0x51dac2:c.instructions+=3;goto B51dac2;
case 0x51dac4:c.instructions+=2;goto B51dac4;
case 0x51dac7:c.instructions+=1;goto B51dac7;
case 0x51dac9:goto L51dac9;
case 0x51dacd:c.instructions+=1;goto B51dacd;
case 0x51dad0:goto L51dad0;
case 0x51dad4:c.instructions+=4;goto B51dad4;
case 0x51dad7:c.instructions+=3;goto B51dad7;
case 0x51dad9:c.instructions+=2;goto B51dad9;
case 0x51dadc:c.instructions+=1;goto B51dadc;
case 0x51dade:goto L51dade;
case 0x51dae2:c.instructions+=1;goto B51dae2;
case 0x51dae5:goto L51dae5;
case 0x51dae7:goto L51dae7;
case 0x51daea:c.instructions+=2;goto B51daea;
case 0x51daec:c.instructions+=1;goto B51daec;
case 0x51daf2:goto L51daf2;
case 0x51daf4:c.instructions+=1;goto B51daf4;
case 0x51dafa:goto L51dafa;
case 0x51dafd:c.instructions+=8;goto B51dafd;
case 0x51db00:c.instructions+=7;goto B51db00;
case 0x51db03:c.instructions+=6;goto B51db03;
case 0x51db07:c.instructions+=5;goto B51db07;
case 0x51db0b:c.instructions+=4;goto B51db0b;
case 0x51db0f:c.instructions+=3;goto B51db0f;
case 0x51db10:c.instructions+=2;goto B51db10;
case 0x51db12:c.instructions+=1;goto B51db12;
case 0x51db17:goto L51db17;
case 0x51db18:c.instructions+=6;goto B51db18;
case 0x51db19:c.instructions+=5;goto B51db19;
case 0x51db1a:c.instructions+=4;goto B51db1a;
case 0x51db1c:c.instructions+=3;goto B51db1c;
case 0x51db1d:c.instructions+=2;goto B51db1d;
case 0x51db20:c.instructions+=1;goto B51db20;
case 0x51db21:goto L51db21;
case 0x51db25:c.instructions+=5;goto B51db25;
case 0x51db26:c.instructions+=4;goto B51db26;
case 0x51db2a:c.instructions+=3;goto B51db2a;
case 0x51db2b:c.instructions+=2;goto B51db2b;
case 0x51db2c:c.instructions+=1;goto B51db2c;
case 0x51db31:goto L51db31;
case 0x51db35:c.instructions+=5;goto B51db35;
case 0x51db3b:c.instructions+=4;goto B51db3b;
case 0x51db3e:c.instructions+=3;goto B51db3e;
case 0x51db40:c.instructions+=2;goto B51db40;
case 0x51db43:c.instructions+=1;goto B51db43;
case 0x51db45:goto L51db45;
case 0x51db49:c.instructions+=4;goto B51db49;
case 0x51db4f:c.instructions+=3;goto B51db4f;
case 0x51db51:c.instructions+=2;goto B51db51;
case 0x51db54:c.instructions+=1;goto B51db54;
case 0x51db56:goto L51db56;
case 0x51db5a:c.instructions+=17;goto B51db5a;
case 0x51db5e:c.instructions+=16;goto B51db5e;
case 0x51db62:c.instructions+=15;goto B51db62;
case 0x51db64:c.instructions+=14;goto B51db64;
case 0x51db68:c.instructions+=13;goto B51db68;
case 0x51db69:c.instructions+=12;goto B51db69;
case 0x51db6d:c.instructions+=11;goto B51db6d;
case 0x51db6e:c.instructions+=10;goto B51db6e;
case 0x51db6f:c.instructions+=9;goto B51db6f;
case 0x51db72:c.instructions+=8;goto B51db72;
case 0x51db75:c.instructions+=7;goto B51db75;
case 0x51db76:c.instructions+=6;goto B51db76;
case 0x51db7a:c.instructions+=5;goto B51db7a;
case 0x51db7e:c.instructions+=4;goto B51db7e;
case 0x51db81:c.instructions+=3;goto B51db81;
case 0x51db83:c.instructions+=2;goto B51db83;
case 0x51db86:c.instructions+=1;goto B51db86;
case 0x51db87:goto L51db87;
case 0x51db8b:c.instructions+=5;goto B51db8b;
case 0x51db8e:c.instructions+=4;goto B51db8e;
case 0x51db8f:c.instructions+=3;goto B51db8f;
case 0x51db90:c.instructions+=2;goto B51db90;
case 0x51db91:c.instructions+=1;goto B51db91;
case 0x51db96:goto L51db96;
case 0x51db99:c.instructions+=5;goto B51db99;
case 0x51db9a:c.instructions+=4;goto B51db9a;
case 0x51db9d:c.instructions+=3;goto B51db9d;
case 0x51db9e:c.instructions+=2;goto B51db9e;
case 0x51db9f:c.instructions+=1;goto B51db9f;
case 0x51dba4:goto L51dba4;
case 0x51dba7:c.instructions+=7;goto B51dba7;
case 0x51dba8:c.instructions+=6;goto B51dba8;
case 0x51dba9:c.instructions+=5;goto B51dba9;
case 0x51dbaa:c.instructions+=4;goto B51dbaa;
case 0x51dbac:c.instructions+=3;goto B51dbac;
case 0x51dbad:c.instructions+=2;goto B51dbad;
case 0x51dbb0:c.instructions+=1;goto B51dbb0;
case 0x51dbb1:goto L51dbb1;
case 0x51dbb2:c.instructions+=6;goto B51dbb2;
case 0x51dbb3:c.instructions+=5;goto B51dbb3;
case 0x51dbb4:c.instructions+=4;goto B51dbb4;
case 0x51dbb6:c.instructions+=3;goto B51dbb6;
case 0x51dbb7:c.instructions+=2;goto B51dbb7;
case 0x51dbba:c.instructions+=1;goto B51dbba;
case 0x51dbe0:goto L51dbe0;
case 0x51dbe1:c.instructions+=6;goto B51dbe1;
case 0x51dbe3:c.instructions+=5;goto B51dbe3;
case 0x51dbe6:c.instructions+=4;goto B51dbe6;
case 0x51dbe8:c.instructions+=3;goto B51dbe8;
case 0x51dbe9:c.instructions+=2;goto B51dbe9;
case 0x51dbed:c.instructions+=1;goto B51dbed;
case 0x51dbef:goto L51dbef;
case 0x51dbf1:c.instructions+=3;goto B51dbf1;
case 0x51dbf2:c.instructions+=2;goto B51dbf2;
case 0x51dbf3:c.instructions+=1;goto B51dbf3;
case 0x51dbf8:goto L51dbf8;
case 0x51dbfb:goto L51dbfb;
case 0x51dbfe:c.instructions+=2;goto B51dbfe;
case 0x51dc00:c.instructions+=1;goto B51dc00;
case 0x51dc02:goto L51dc02;
case 0x51dc04:c.instructions+=3;goto B51dc04;
case 0x51dc05:c.instructions+=2;goto B51dc05;
case 0x51dc06:c.instructions+=1;goto B51dc06;
case 0x51dc0b:goto L51dc0b;
case 0x51dc0e:goto L51dc0e;
case 0x51dc0f:c.instructions+=4;goto B51dc0f;
case 0x51dc14:c.instructions+=3;goto B51dc14;
case 0x51dc17:c.instructions+=2;goto B51dc17;
case 0x51dc18:c.instructions+=1;goto B51dc18;
case 0x51dc1d:goto L51dc1d;
case 0x51dc20:c.instructions+=3;goto B51dc20;
case 0x51dc21:c.instructions+=2;goto B51dc21;
case 0x51dc22:c.instructions+=1;goto B51dc22;
case 0x51dc30:goto L51dc30;
case 0x51dc31:c.instructions+=2;goto B51dc31;
case 0x51dc33:c.instructions+=1;goto B51dc33;
case 0x51dc38:goto L51dc38;
case 0x51dc3d:c.instructions+=1;goto B51dc3d;
case 0x51dc3f:goto L51dc3f;
case 0x51dc40:c.instructions+=1;goto B51dc40;
case 0x51dc45:goto L51dc45;
case 0x51dc48:goto L51dc48;
case 0x51dc4a:c.instructions+=2;goto B51dc4a;
case 0x51dc4b:c.instructions+=1;goto B51dc4b;
case 0x51dc50:goto L51dc50;
case 0x51dc56:c.instructions+=1;goto B51dc56;
case 0x51dc60:goto L51dc60;
case 0x51dc65:c.instructions+=4;goto B51dc65;
case 0x51dc66:c.instructions+=3;goto B51dc66;
case 0x51dc68:c.instructions+=2;goto B51dc68;
case 0x51dc6e:c.instructions+=1;goto B51dc6e;
case 0x51dc70:goto L51dc70;
case 0x51dc71:c.instructions+=1;goto B51dc71;
case 0x51dc76:goto L51dc76;
case 0x51dc79:goto L51dc79;
case 0x51dc7b:c.instructions+=2;goto B51dc7b;
case 0x51dc7c:c.instructions+=1;goto B51dc7c;
case 0x51dc80:goto L51dc80;
case 0x51dc81:c.instructions+=6;goto B51dc81;
case 0x51dc82:c.instructions+=5;goto B51dc82;
case 0x51dc84:c.instructions+=4;goto B51dc84;
case 0x51dc87:c.instructions+=3;goto B51dc87;
case 0x51dc89:c.instructions+=2;goto B51dc89;
case 0x51dc8b:c.instructions+=1;goto B51dc8b;
case 0x51dc8d:goto L51dc8d;
case 0x51dc8e:c.instructions+=5;goto B51dc8e;
case 0x51dc90:c.instructions+=4;goto B51dc90;
case 0x51dc96:c.instructions+=3;goto B51dc96;
case 0x51dc9c:c.instructions+=2;goto B51dc9c;
case 0x51dca1:c.instructions+=1;goto B51dca1;
case 0x51dca6:goto L51dca6;
case 0x51dca8:goto L51dca8;
case 0x51dcad:c.instructions+=2;goto B51dcad;
case 0x51dcb2:c.instructions+=1;goto B51dcb2;
case 0x51dcb3:goto L51dcb3;
case 0x51dcb5:goto L51dcb5;
case 0x51dcba:goto L51dcba;
case 0x51dcbd:c.instructions+=1;goto B51dcbd;
case 0x51dcbe:goto L51dcbe;
case 0x51dcc1:c.instructions+=4;goto B51dcc1;
case 0x51dcc4:c.instructions+=3;goto B51dcc4;
case 0x51dcc5:c.instructions+=2;goto B51dcc5;
case 0x51dcc6:c.instructions+=1;goto B51dcc6;
case 0x51dcd0:goto L51dcd0;
case 0x51dcd1:c.instructions+=4;goto B51dcd1;
case 0x51dcd3:c.instructions+=3;goto B51dcd3;
case 0x51dcd6:c.instructions+=2;goto B51dcd6;
case 0x51dcd8:c.instructions+=1;goto B51dcd8;
case 0x51dcde:goto L51dcde;
case 0x51dce2:c.instructions+=3;goto B51dce2;
case 0x51dce4:c.instructions+=2;goto B51dce4;
case 0x51dce9:c.instructions+=1;goto B51dce9;
case 0x51dceb:goto L51dceb;
case 0x51dced:goto L51dced;
case 0x51dcf2:c.instructions+=1;goto B51dcf2;
case 0x51dcf4:goto L51dcf4;
case 0x51dcf6:goto L51dcf6;
case 0x51dcfb:c.instructions+=1;goto B51dcfb;
case 0x51dcfd:goto L51dcfd;
case 0x51dd02:c.instructions+=1;goto B51dd02;
case 0x51dd04:goto L51dd04;
case 0x51dd09:c.instructions+=1;goto B51dd09;
case 0x51dd0b:goto L51dd0b;
case 0x51dd10:c.instructions+=1;goto B51dd10;
case 0x51dd12:goto L51dd12;
case 0x51dd17:c.instructions+=1;goto B51dd17;
case 0x51dd19:goto L51dd19;
case 0x51dd1e:c.instructions+=1;goto B51dd1e;
case 0x51dd20:goto L51dd20;
case 0x51dd25:c.instructions+=1;goto B51dd25;
case 0x51dd27:goto L51dd27;
case 0x51dd2c:c.instructions+=1;goto B51dd2c;
case 0x51dd2e:goto L51dd2e;
case 0x51dd33:c.instructions+=1;goto B51dd33;
case 0x51dd35:goto L51dd35;
case 0x51dd3a:c.instructions+=1;goto B51dd3a;
case 0x51dd3c:goto L51dd3c;
case 0x51dd41:c.instructions+=1;goto B51dd41;
case 0x51dd43:goto L51dd43;
case 0x51dd48:c.instructions+=1;goto B51dd48;
case 0x51dd4a:goto L51dd4a;
case 0x51dd4f:goto L51dd4f;
case 0x51dd51:c.instructions+=10;goto B51dd51;
case 0x51dd52:c.instructions+=9;goto B51dd52;
case 0x51dd56:c.instructions+=8;goto B51dd56;
case 0x51dd57:c.instructions+=7;goto B51dd57;
case 0x51dd5b:c.instructions+=6;goto B51dd5b;
case 0x51dd5c:c.instructions+=5;goto B51dd5c;
case 0x51dd60:c.instructions+=4;goto B51dd60;
case 0x51dd61:c.instructions+=3;goto B51dd61;
case 0x51dd62:c.instructions+=2;goto B51dd62;
case 0x51dd64:c.instructions+=1;goto B51dd64;
case 0x51dd67:goto L51dd67;
case 0x51dd6a:c.instructions+=4;goto B51dd6a;
case 0x51dd6d:c.instructions+=3;goto B51dd6d;
case 0x51dd75:c.instructions+=2;goto B51dd75;
case 0x51dd78:c.instructions+=1;goto B51dd78;
case 0x51dd7a:goto L51dd7a;
case 0x51dd80:c.instructions+=2;goto B51dd80;
case 0x51dd81:c.instructions+=1;goto B51dd81;
case 0x51dd86:goto L51dd86;
case 0x51dd87:c.instructions+=1;goto B51dd87;
case 0x51dd90:goto L51dd90;
case 0x51dd91:c.instructions+=4;goto B51dd91;
case 0x51dd93:c.instructions+=3;goto B51dd93;
case 0x51dd96:c.instructions+=2;goto B51dd96;
case 0x51dd98:c.instructions+=1;goto B51dd98;
case 0x51dd9e:goto L51dd9e;
case 0x51dda2:c.instructions+=6;goto B51dda2;
case 0x51dda3:c.instructions+=5;goto B51dda3;
case 0x51dda7:c.instructions+=4;goto B51dda7;
case 0x51dda9:c.instructions+=3;goto B51dda9;
case 0x51ddac:c.instructions+=2;goto B51ddac;
case 0x51ddaf:c.instructions+=1;goto B51ddaf;
case 0x51ddb1:goto L51ddb1;
case 0x51ddb3:c.instructions+=1;goto B51ddb3;
case 0x51ddb5:goto L51ddb5;
case 0x51ddb7:c.instructions+=1;goto B51ddb7;
case 0x51ddb9:goto L51ddb9;
case 0x51ddbb:goto L51ddbb;
case 0x51ddbf:c.instructions+=8;goto B51ddbf;
case 0x51ddc2:c.instructions+=7;goto B51ddc2;
case 0x51ddc6:c.instructions+=6;goto B51ddc6;
case 0x51ddc8:c.instructions+=5;goto B51ddc8;
case 0x51ddce:c.instructions+=4;goto B51ddce;
case 0x51ddd1:c.instructions+=3;goto B51ddd1;
case 0x51ddd3:c.instructions+=2;goto B51ddd3;
case 0x51ddd6:c.instructions+=1;goto B51ddd6;
case 0x51ddd8:goto L51ddd8;
case 0x51dddc:c.instructions+=2;goto B51dddc;
case 0x51dddf:c.instructions+=1;goto B51dddf;
case 0x51dde1:goto L51dde1;
case 0x51dde5:c.instructions+=1;goto B51dde5;
case 0x51dde8:goto L51dde8;
case 0x51ddec:c.instructions+=3;goto B51ddec;
case 0x51ddf2:c.instructions+=2;goto B51ddf2;
case 0x51ddf8:c.instructions+=1;goto B51ddf8;
case 0x51ddfd:goto L51ddfd;
case 0x51ddff:c.instructions+=4;goto B51ddff;
case 0x51de04:c.instructions+=3;goto B51de04;
case 0x51de05:c.instructions+=2;goto B51de05;
case 0x51de08:c.instructions+=1;goto B51de08;
case 0x51de0d:goto L51de0d;
case 0x51de10:c.instructions+=4;goto B51de10;
case 0x51de12:c.instructions+=3;goto B51de12;
case 0x51de17:c.instructions+=2;goto B51de17;
case 0x51de18:c.instructions+=1;goto B51de18;
case 0x51de1d:goto L51de1d;
case 0x51de20:c.instructions+=1;goto B51de20;
case 0x51de21:goto L51de21;
case 0x51de22:c.instructions+=1;goto B51de22;
case 0x51de30:goto L51de30;
case 0x51de34:c.instructions+=5;goto B51de34;
case 0x51de38:c.instructions+=4;goto B51de38;
case 0x51de3b:c.instructions+=3;goto B51de3b;
case 0x51de43:c.instructions+=2;goto B51de43;
case 0x51de46:c.instructions+=1;goto B51de46;
case 0x51de48:goto L51de48;
case 0x51de4e:c.instructions+=2;goto B51de4e;
case 0x51de4f:c.instructions+=1;goto B51de4f;
case 0x51de54:goto L51de54;
case 0x51de60:goto L51de60;
case 0x51de64:c.instructions+=4;goto B51de64;
case 0x51de67:c.instructions+=3;goto B51de67;
case 0x51de6e:c.instructions+=2;goto B51de6e;
case 0x51de71:c.instructions+=1;goto B51de71;
case 0x51de73:goto L51de73;
case 0x51de79:c.instructions+=2;goto B51de79;
case 0x51de7a:c.instructions+=1;goto B51de7a;
case 0x51de7f:goto L51de7f;
case 0x51de80:goto L51de80;
case 0x51de82:c.instructions+=3;goto B51de82;
case 0x51de88:c.instructions+=2;goto B51de88;
case 0x51de8f:c.instructions+=1;goto B51de8f;
case 0x51de90:goto L51de90;
case 0x51de91:c.instructions+=5;goto B51de91;
case 0x51de93:c.instructions+=4;goto B51de93;
case 0x51de95:c.instructions+=3;goto B51de95;
case 0x51de97:c.instructions+=2;goto B51de97;
case 0x51de99:c.instructions+=1;goto B51de99;
case 0x51de9b:goto L51de9b;
case 0x51de9e:c.instructions+=1;goto B51de9e;
case 0x51dea0:goto L51dea0;
case 0x51dea1:c.instructions+=2;goto B51dea1;
case 0x51dea6:c.instructions+=1;goto B51dea6;
case 0x51dea8:goto L51dea8;
case 0x51deac:c.instructions+=2;goto B51deac;
case 0x51deae:c.instructions+=1;goto B51deae;
case 0x51deb0:goto L51deb0;
case 0x51deb4:c.instructions+=4;goto B51deb4;
case 0x51deb5:c.instructions+=3;goto B51deb5;
case 0x51deb6:c.instructions+=2;goto B51deb6;
case 0x51deb9:c.instructions+=1;goto B51deb9;
case 0x51debe:goto L51debe;
case 0x51dec0:c.instructions+=4;goto B51dec0;
case 0x51dec2:c.instructions+=3;goto B51dec2;
case 0x51dec3:c.instructions+=2;goto B51dec3;
case 0x51dec4:c.instructions+=1;goto B51dec4;
case 0x51dec9:goto L51dec9;
case 0x51decb:c.instructions+=2;goto B51decb;
case 0x51decc:c.instructions+=1;goto B51decc;
case 0x51ded1:goto L51ded1;
case 0x51ded4:c.instructions+=2;goto B51ded4;
case 0x51ded6:c.instructions+=1;goto B51ded6;
case 0x51ded7:goto L51ded7;
case 0x51ded8:c.instructions+=1;goto B51ded8;
case 0x51dee0:goto L51dee0;
case 0x51dee4:c.instructions+=4;goto B51dee4;
case 0x51dee5:c.instructions+=3;goto B51dee5;
case 0x51dee7:c.instructions+=2;goto B51dee7;
case 0x51deea:c.instructions+=1;goto B51deea;
case 0x51deec:goto L51deec;
case 0x51deed:c.instructions+=2;goto B51deed;
case 0x51deef:c.instructions+=1;goto B51deef;
case 0x51def4:goto L51def4;
case 0x51def6:c.instructions+=2;goto B51def6;
case 0x51def7:c.instructions+=1;goto B51def7;
case 0x51df00:goto L51df00;
case 0x51df04:c.instructions+=5;goto B51df04;
case 0x51df07:c.instructions+=4;goto B51df07;
case 0x51df09:c.instructions+=3;goto B51df09;
case 0x51df0a:c.instructions+=2;goto B51df0a;
case 0x51df0c:c.instructions+=1;goto B51df0c;
case 0x51df0e:goto L51df0e;
case 0x51df12:c.instructions+=3;goto B51df12;
case 0x51df17:c.instructions+=2;goto B51df17;
case 0x51df18:c.instructions+=1;goto B51df18;
case 0x51df1d:goto L51df1d;
case 0x51df21:c.instructions+=4;goto B51df21;
case 0x51df23:c.instructions+=3;goto B51df23;
case 0x51df28:c.instructions+=2;goto B51df28;
case 0x51df29:c.instructions+=1;goto B51df29;
case 0x51df2e:goto L51df2e;
case 0x51df31:c.instructions+=2;goto B51df31;
case 0x51df32:c.instructions+=1;goto B51df32;
case 0x51df33:goto L51df33;
case 0x51df36:c.instructions+=3;goto B51df36;
case 0x51df38:c.instructions+=2;goto B51df38;
case 0x51df3d:c.instructions+=1;goto B51df3d;
case 0x51df3f:goto L51df3f;
case 0x51df43:c.instructions+=2;goto B51df43;
case 0x51df44:c.instructions+=1;goto B51df44;
case 0x51df49:goto L51df49;
case 0x51df4e:c.instructions+=1;goto B51df4e;
case 0x51df53:goto L51df53;
case 0x51df57:c.instructions+=3;goto B51df57;
case 0x51df5a:c.instructions+=2;goto B51df5a;
case 0x51df5c:c.instructions+=1;goto B51df5c;
case 0x51df5e:goto L51df5e;
case 0x51df61:c.instructions+=2;goto B51df61;
case 0x51df63:c.instructions+=1;goto B51df63;
case 0x51df65:goto L51df65;
case 0x51df68:c.instructions+=1;goto B51df68;
case 0x51df6a:goto L51df6a;
case 0x51df6d:c.instructions+=2;goto B51df6d;
case 0x51df70:c.instructions+=1;goto B51df70;
case 0x51df72:goto L51df72;
case 0x51df77:c.instructions+=2;goto B51df77;
case 0x51df78:c.instructions+=1;goto B51df78;
case 0x51df7d:goto L51df7d;
case 0x51df80:c.instructions+=2;goto B51df80;
case 0x51df82:c.instructions+=1;goto B51df82;
case 0x51df84:goto L51df84;
case 0x51df86:c.instructions+=3;goto B51df86;
case 0x51df8b:c.instructions+=2;goto B51df8b;
case 0x51df8c:c.instructions+=1;goto B51df8c;
case 0x51df91:goto L51df91;
case 0x51df94:c.instructions+=2;goto B51df94;
case 0x51df95:c.instructions+=1;goto B51df95;
case 0x51df96:goto L51df96;
case 0x51df9a:c.instructions+=2;goto B51df9a;
case 0x51df9b:c.instructions+=1;goto B51df9b;
case 0x51dfa0:goto L51dfa0;
case 0x51dfa4:c.instructions+=4;goto B51dfa4;
case 0x51dfa6:c.instructions+=3;goto B51dfa6;
case 0x51dfab:c.instructions+=2;goto B51dfab;
case 0x51dfac:c.instructions+=1;goto B51dfac;
case 0x51dfb1:goto L51dfb1;
case 0x51dfb4:goto L51dfb4;
case 0x51dfb5:c.instructions+=1;goto B51dfb5;
case 0x51dfc0:goto L51dfc0;
case 0x51dfc2:c.instructions+=18;goto B51dfc2;
case 0x51dfc6:c.instructions+=17;goto B51dfc6;
case 0x51dfcc:c.instructions+=16;goto B51dfcc;
case 0x51dfce:c.instructions+=15;goto B51dfce;
case 0x51dfd1:c.instructions+=14;goto B51dfd1;
case 0x51dfd4:c.instructions+=13;goto B51dfd4;
case 0x51dfd7:c.instructions+=12;goto B51dfd7;
case 0x51dfdb:c.instructions+=11;goto B51dfdb;
case 0x51dfdd:c.instructions+=10;goto B51dfdd;
case 0x51dfe0:c.instructions+=9;goto B51dfe0;
case 0x51dfe3:c.instructions+=8;goto B51dfe3;
case 0x51dfe6:c.instructions+=7;goto B51dfe6;
case 0x51dfed:c.instructions+=6;goto B51dfed;
case 0x51dff4:c.instructions+=5;goto B51dff4;
case 0x51dff5:c.instructions+=4;goto B51dff5;
case 0x51dff9:c.instructions+=3;goto B51dff9;
case 0x51dffb:c.instructions+=2;goto B51dffb;
case 0x51dffe:c.instructions+=1;goto B51dffe;
default:missing_instruction(c.pc);}
B51d001:L51d001:{c.instructions+=3;NFSU2_TR(0x51d001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d002:{NFSU2_TR(0x51d002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d003:{NFSU2_TR(0x51d003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d004:L51d004:{c.instructions+=2;NFSU2_TR(0x51d004);
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
B51d006:{NFSU2_TR(0x51d006);
if(r1(R+518)){{goto L51d030;}}
}
B51d008:L51d008:{c.instructions+=2;NFSU2_TR(0x51d008);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51d00b:{NFSU2_TR(0x51d00b);
if(r1(R+518)){{goto L51d021;}}
}
B51d00d:L51d00d:{c.instructions+=3;NFSU2_TR(0x51d00d);
__builtin_memmove((R+4),(R+28),4);
}
B51d00f:{NFSU2_TR(0x51d00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d012:{NFSU2_TR(0x51d012);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d017ull));
TAIL_STATIC(0x517720u,517);
}
B51d017:L51d017:{c.instructions+=2;NFSU2_TR(0x51d017);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d01a:{NFSU2_TR(0x51d01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51d021:L51d021:{c.instructions+=3;NFSU2_TR(0x51d021);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51d025:{NFSU2_TR(0x51d025);
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
B51d027:{NFSU2_TR(0x51d027);
if(r1(R+518)){{goto L51d030;}}
}
B51d029:L51d029:{c.instructions+=1;NFSU2_TR(0x51d029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51d030:L51d030:{c.instructions+=3;NFSU2_TR(0x51d030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d031:{NFSU2_TR(0x51d031);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d032:{NFSU2_TR(0x51d032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d040:L51d040:{c.instructions+=3;NFSU2_TR(0x51d040);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d044:{NFSU2_TR(0x51d044);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d045:{NFSU2_TR(0x51d045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d04aull));
TAIL_STATIC(0x50b9c0u,50b);
}
B51d04a:L51d04a:{c.instructions+=4;NFSU2_TR(0x51d04a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d04e:{NFSU2_TR(0x51d04e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d051:{NFSU2_TR(0x51d051);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d053:{NFSU2_TR(0x51d053);
if(r1(R+518)){{goto L51d06c;}}
}
B51d055:L51d055:{c.instructions+=3;NFSU2_TR(0x51d055);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d058:{NFSU2_TR(0x51d058);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d05a:{NFSU2_TR(0x51d05a);
if(r1(R+518)){{goto L51d06c;}}
}
B51d05c:L51d05c:{c.instructions+=2;NFSU2_TR(0x51d05c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51d05f:{NFSU2_TR(0x51d05f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d06c;}}
}
B51d061:L51d061:{c.instructions+=3;NFSU2_TR(0x51d061);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d064:{NFSU2_TR(0x51d064);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51d067:{NFSU2_TR(0x51d067);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L51d06c;}}
}
B51d069:L51d069:{c.instructions+=2;NFSU2_TR(0x51d069);
w1(R+0,u8(0x1ull));
}
B51d06b:{NFSU2_TR(0x51d06b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d06c:L51d06c:{c.instructions+=2;NFSU2_TR(0x51d06c);
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
B51d06e:{NFSU2_TR(0x51d06e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d070:L51d070:{c.instructions+=6;NFSU2_TR(0x51d070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d071:{NFSU2_TR(0x51d071);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d072:{NFSU2_TR(0x51d072);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d073:{NFSU2_TR(0x51d073);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d077:{NFSU2_TR(0x51d077);
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
B51d079:{NFSU2_TR(0x51d079);
if(r1(R+518)){{goto L51d14d;}}
}
B51d07f:L51d07f:{c.instructions+=6;NFSU2_TR(0x51d07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d082:{NFSU2_TR(0x51d082);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51d083:{NFSU2_TR(0x51d083);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51d086:{NFSU2_TR(0x51d086);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d087:{NFSU2_TR(0x51d087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51d08a:{NFSU2_TR(0x51d08a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51d13a;}}
}
B51d090:L51d090:{c.instructions+=2;NFSU2_TR(0x51d090);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51d164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51d097:{NFSU2_TR(0x51d097);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51d154ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51d09e:L51d09e:{c.instructions+=15;NFSU2_TR(0x51d09e);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d0a1:{NFSU2_TR(0x51d0a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d0a5:{NFSU2_TR(0x51d0a5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d0ab:{NFSU2_TR(0x51d0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d0af:{NFSU2_TR(0x51d0af);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d0b2:{NFSU2_TR(0x51d0b2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d0b4:{NFSU2_TR(0x51d0b4);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d0b7:{NFSU2_TR(0x51d0b7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d0bd:{NFSU2_TR(0x51d0bd);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d0c0:{NFSU2_TR(0x51d0c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d0c1:{NFSU2_TR(0x51d0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d0c2:{NFSU2_TR(0x51d0c2);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d0c4:{NFSU2_TR(0x51d0c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d0c5:{NFSU2_TR(0x51d0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51d0c6:{NFSU2_TR(0x51d0c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d0c7:L51d0c7:{c.instructions+=3;NFSU2_TR(0x51d0c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d0ca:{NFSU2_TR(0x51d0ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d0cb:{NFSU2_TR(0x51d0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d0d0ull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d0d0:L51d0d0:{c.instructions+=4;NFSU2_TR(0x51d0d0);
__builtin_memmove((R+12),(R+0),4);
}
B51d0d2:{NFSU2_TR(0x51d0d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d0d5:{NFSU2_TR(0x51d0d5);
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
B51d0d7:{NFSU2_TR(0x51d0d7);
if(r1(R+518)){{goto L51d14c;}}
}
B51d0d9:L51d0d9:{c.instructions+=5;NFSU2_TR(0x51d0d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d0dc:{NFSU2_TR(0x51d0dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d0de:{NFSU2_TR(0x51d0de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d0df:{NFSU2_TR(0x51d0df);
__builtin_memmove((R+4),(R+12),4);
}
B51d0e1:{NFSU2_TR(0x51d0e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d0e6ull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d0e6:L51d0e6:{c.instructions+=8;NFSU2_TR(0x51d0e6);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d0e9:{NFSU2_TR(0x51d0e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d0ec:{NFSU2_TR(0x51d0ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d0ef:{NFSU2_TR(0x51d0ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d0f0:{NFSU2_TR(0x51d0f0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d0f4:{NFSU2_TR(0x51d0f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d0f5:{NFSU2_TR(0x51d0f5);
__builtin_memmove((R+4),(R+12),4);
}
B51d0f7:{NFSU2_TR(0x51d0f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d0fcull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d0fc:L51d0fc:{c.instructions+=8;NFSU2_TR(0x51d0fc);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d0ff:{NFSU2_TR(0x51d0ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d103:{NFSU2_TR(0x51d103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d106:{NFSU2_TR(0x51d106);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d107:{NFSU2_TR(0x51d107);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d10b:{NFSU2_TR(0x51d10b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d10c:{NFSU2_TR(0x51d10c);
__builtin_memmove((R+4),(R+12),4);
}
B51d10e:{NFSU2_TR(0x51d10e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d113ull));
TAIL_STATIC(0x50c020u,50c);
}
B51d113:L51d113:{c.instructions+=9;NFSU2_TR(0x51d113);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d116:{NFSU2_TR(0x51d116);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d11a:{NFSU2_TR(0x51d11a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d11e:{NFSU2_TR(0x51d11e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d120:{NFSU2_TR(0x51d120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d123:{NFSU2_TR(0x51d123);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d124:{NFSU2_TR(0x51d124);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d125:{NFSU2_TR(0x51d125);
__builtin_memmove((R+4),(R+12),4);
}
B51d127:{NFSU2_TR(0x51d127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d12cull));
TAIL_STATIC(0x50c050u,50c);
}
B51d12c:L51d12c:{c.instructions+=8;NFSU2_TR(0x51d12c);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d12f:{NFSU2_TR(0x51d12f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d133:{NFSU2_TR(0x51d133);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d134:{NFSU2_TR(0x51d134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d135:{NFSU2_TR(0x51d135);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d137:{NFSU2_TR(0x51d137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d138:{NFSU2_TR(0x51d138);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51d139:{NFSU2_TR(0x51d139);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d13a:L51d13a:{c.instructions+=6;NFSU2_TR(0x51d13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d13d:{NFSU2_TR(0x51d13d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d141:{NFSU2_TR(0x51d141);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51d143:{NFSU2_TR(0x51d143);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d146:{NFSU2_TR(0x51d146);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d14a:{NFSU2_TR(0x51d14a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B51d14c:L51d14c:{c.instructions+=1;NFSU2_TR(0x51d14c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d14d:L51d14d:{c.instructions+=4;NFSU2_TR(0x51d14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d14e:{NFSU2_TR(0x51d14e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d14f:{NFSU2_TR(0x51d14f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51d150:{NFSU2_TR(0x51d150);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d170:L51d170:{c.instructions+=6;NFSU2_TR(0x51d170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x808ull))));
}
B51d176:{NFSU2_TR(0x51d176);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d177:{NFSU2_TR(0x51d177);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d178:{NFSU2_TR(0x51d178);
u8 U[8];
w4(U+0,u32(u32(u32(0x814ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d17f:{NFSU2_TR(0x51d17f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d181:{NFSU2_TR(0x51d181);
if(r1(R+518)){{goto L51d2a0;}}
}
B51d187:L51d187:{c.instructions+=6;NFSU2_TR(0x51d187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d18a:{NFSU2_TR(0x51d18a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51d18b:{NFSU2_TR(0x51d18b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51d18e:{NFSU2_TR(0x51d18e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d18f:{NFSU2_TR(0x51d18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51d192:{NFSU2_TR(0x51d192);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51d287;}}
}
B51d198:L51d198:{c.instructions+=2;NFSU2_TR(0x51d198);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51d2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51d19f:{NFSU2_TR(0x51d19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51d2acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51d1a6:L51d1a6:{c.instructions+=15;NFSU2_TR(0x51d1a6);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d1a9:{NFSU2_TR(0x51d1a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x81cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d1b0:{NFSU2_TR(0x51d1b0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d1b6:{NFSU2_TR(0x51d1b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x820ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d1bd:{NFSU2_TR(0x51d1bd);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d1c0:{NFSU2_TR(0x51d1c0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d1c2:{NFSU2_TR(0x51d1c2);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d1c5:{NFSU2_TR(0x51d1c5);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d1cb:{NFSU2_TR(0x51d1cb);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d1ce:{NFSU2_TR(0x51d1ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d1cf:{NFSU2_TR(0x51d1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d1d0:{NFSU2_TR(0x51d1d0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d1d2:{NFSU2_TR(0x51d1d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d1d3:{NFSU2_TR(0x51d1d3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x808ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x808ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x808ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51d1d9:{NFSU2_TR(0x51d1d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d1da:L51d1da:{c.instructions+=3;NFSU2_TR(0x51d1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d1dd:{NFSU2_TR(0x51d1dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d1de:{NFSU2_TR(0x51d1de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d1e3ull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d1e3:L51d1e3:{c.instructions+=4;NFSU2_TR(0x51d1e3);
__builtin_memmove((R+12),(R+0),4);
}
B51d1e5:{NFSU2_TR(0x51d1e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d1e8:{NFSU2_TR(0x51d1e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d1ea:{NFSU2_TR(0x51d1ea);
if(r1(R+518)){{goto L51d29f;}}
}
B51d1f0:L51d1f0:{c.instructions+=4;NFSU2_TR(0x51d1f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51d1f4:{NFSU2_TR(0x51d1f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d1f7:{NFSU2_TR(0x51d1f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d1f8:{NFSU2_TR(0x51d1f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d215;}}
}
B51d1fa:L51d1fa:{c.instructions+=5;NFSU2_TR(0x51d1fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d1fb:{NFSU2_TR(0x51d1fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51d1ff:{NFSU2_TR(0x51d1ff);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d204:{NFSU2_TR(0x51d204);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d205:{NFSU2_TR(0x51d205);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d20aull));
TAIL_STATIC(0x512570u,512);
}
B51d20a:L51d20a:{c.instructions+=4;NFSU2_TR(0x51d20a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51d20d:{NFSU2_TR(0x51d20d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d20f:{NFSU2_TR(0x51d20f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B51d213:{NFSU2_TR(0x51d213);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d218;}}
}
B51d215:L51d215:{c.instructions+=1;NFSU2_TR(0x51d215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51d218:L51d218:{c.instructions+=4;NFSU2_TR(0x51d218);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d21a:{NFSU2_TR(0x51d21a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d21b:{NFSU2_TR(0x51d21b);
__builtin_memmove((R+4),(R+12),4);
}
B51d21d:{NFSU2_TR(0x51d21d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d222ull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d222:L51d222:{c.instructions+=7;NFSU2_TR(0x51d222);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d225:{NFSU2_TR(0x51d225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d228:{NFSU2_TR(0x51d228);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d229:{NFSU2_TR(0x51d229);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d22a:{NFSU2_TR(0x51d22a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d22e:{NFSU2_TR(0x51d22e);
__builtin_memmove((R+4),(R+12),4);
}
B51d230:{NFSU2_TR(0x51d230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d235ull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d235:L51d235:{c.instructions+=8;NFSU2_TR(0x51d235);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d238:{NFSU2_TR(0x51d238);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d23c:{NFSU2_TR(0x51d23c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d23f:{NFSU2_TR(0x51d23f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d240:{NFSU2_TR(0x51d240);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d244:{NFSU2_TR(0x51d244);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d245:{NFSU2_TR(0x51d245);
__builtin_memmove((R+4),(R+12),4);
}
B51d247:{NFSU2_TR(0x51d247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d24cull));
TAIL_STATIC(0x50c020u,50c);
}
B51d24c:L51d24c:{c.instructions+=10;NFSU2_TR(0x51d24c);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d24f:{NFSU2_TR(0x51d24f);
u8 U[8];
w4(U+0,u32(u32(u32(0x820ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d256:{NFSU2_TR(0x51d256);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d25a:{NFSU2_TR(0x51d25a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d25e:{NFSU2_TR(0x51d25e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d25f:{NFSU2_TR(0x51d25f);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d261:{NFSU2_TR(0x51d261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d264:{NFSU2_TR(0x51d264);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d265:{NFSU2_TR(0x51d265);
__builtin_memmove((R+4),(R+12),4);
}
B51d267:{NFSU2_TR(0x51d267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d26cull));
TAIL_STATIC(0x50c050u,50c);
}
B51d26c:L51d26c:{c.instructions+=10;NFSU2_TR(0x51d26c);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d26f:{NFSU2_TR(0x51d26f);
u8 U[8];
w4(U+0,u32(u32(u32(0x824ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d276:{NFSU2_TR(0x51d276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51d277:{NFSU2_TR(0x51d277);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d27b:{NFSU2_TR(0x51d27b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d27c:{NFSU2_TR(0x51d27c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d27d:{NFSU2_TR(0x51d27d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d27e:{NFSU2_TR(0x51d27e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d280:{NFSU2_TR(0x51d280);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x808ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x808ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x808ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51d286:{NFSU2_TR(0x51d286);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d287:L51d287:{c.instructions+=6;NFSU2_TR(0x51d287);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d28a:{NFSU2_TR(0x51d28a);
u8 U[8];
w4(U+0,u32(u32(u32(0x81cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d291:{NFSU2_TR(0x51d291);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51d293:{NFSU2_TR(0x51d293);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d296:{NFSU2_TR(0x51d296);
u8 U[8];
w4(U+0,u32(u32(u32(0x820ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d29d:{NFSU2_TR(0x51d29d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51d29f:L51d29f:{c.instructions+=1;NFSU2_TR(0x51d29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d2a0:L51d2a0:{c.instructions+=4;NFSU2_TR(0x51d2a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d2a1:{NFSU2_TR(0x51d2a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d2a2:{NFSU2_TR(0x51d2a2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x808ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x808ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x808ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51d2a8:{NFSU2_TR(0x51d2a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d2d0:L51d2d0:{c.instructions+=5;NFSU2_TR(0x51d2d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B51d2d3:{NFSU2_TR(0x51d2d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d2d4:{NFSU2_TR(0x51d2d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d2d8:{NFSU2_TR(0x51d2d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d2da:{NFSU2_TR(0x51d2da);
if(r1(R+518)){{goto L51d36e;}}
}
B51d2e0:L51d2e0:{c.instructions+=10;NFSU2_TR(0x51d2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d2e3:{NFSU2_TR(0x51d2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d2e6:{NFSU2_TR(0x51d2e6);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d2e9:{NFSU2_TR(0x51d2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d2ec:{NFSU2_TR(0x51d2ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d2f0:{NFSU2_TR(0x51d2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d2f3:{NFSU2_TR(0x51d2f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d2f7:{NFSU2_TR(0x51d2f7);
__builtin_memmove((R+4),(R+8),4);
}
B51d2f9:{NFSU2_TR(0x51d2f9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51d2fa:{NFSU2_TR(0x51d2fa);
if(r1(R+518)){{goto L51d31a;}}
}
B51d2fc:L51d2fc:{c.instructions+=2;NFSU2_TR(0x51d2fc);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51d2ff:{NFSU2_TR(0x51d2ff);
if(r1(R+518)){{goto L51d31a;}}
}
B51d301:L51d301:{c.instructions+=2;NFSU2_TR(0x51d301);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B51d304:{NFSU2_TR(0x51d304);
if(r1(R+518)){{goto L51d31a;}}
}
B51d306:L51d306:{c.instructions+=6;NFSU2_TR(0x51d306);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d30a:{NFSU2_TR(0x51d30a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51d30c:{NFSU2_TR(0x51d30c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d310:{NFSU2_TR(0x51d310);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d314:{NFSU2_TR(0x51d314);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d318:{NFSU2_TR(0x51d318);
{goto L51d33a;}
}
B51d31a:L51d31a:{c.instructions+=7;NFSU2_TR(0x51d31a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d320:{NFSU2_TR(0x51d320);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d324:{NFSU2_TR(0x51d324);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d328:{NFSU2_TR(0x51d328);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d32c:{NFSU2_TR(0x51d32c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d332:{NFSU2_TR(0x51d332);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d336:{NFSU2_TR(0x51d336);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d33a:L51d33a:{c.instructions+=2;NFSU2_TR(0x51d33a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x100ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B51d340:{NFSU2_TR(0x51d340);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51d36e;}}
}
B51d342:L51d342:{c.instructions+=5;NFSU2_TR(0x51d342);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B51d345:{NFSU2_TR(0x51d345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d346:{NFSU2_TR(0x51d346);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51d34a:{NFSU2_TR(0x51d34a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d34b:{NFSU2_TR(0x51d34b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d350ull));
TAIL_STATIC(0x504500u,504);
}
B51d350:L51d350:{c.instructions+=3;NFSU2_TR(0x51d350);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51d353:{NFSU2_TR(0x51d353);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d355:{NFSU2_TR(0x51d355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d35e;}}
}
B51d357:L51d357:{c.instructions+=1;NFSU2_TR(0x51d357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51d35e:L51d35e:{c.instructions+=6;NFSU2_TR(0x51d35e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d360:{NFSU2_TR(0x51d360);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51d364:{NFSU2_TR(0x51d364);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d365:{NFSU2_TR(0x51d365);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d367:{NFSU2_TR(0x51d367);
__builtin_memmove((R+4),(R+24),4);
}
B51d369:{NFSU2_TR(0x51d369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d36eull));
TAIL_STATIC(0x5178d0u,517);
}
B51d36e:L51d36e:{c.instructions+=3;NFSU2_TR(0x51d36e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d36f:{NFSU2_TR(0x51d36f);
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
B51d372:{NFSU2_TR(0x51d372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d380:L51d380:{c.instructions+=5;NFSU2_TR(0x51d380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B51d383:{NFSU2_TR(0x51d383);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d384:{NFSU2_TR(0x51d384);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d388:{NFSU2_TR(0x51d388);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d38a:{NFSU2_TR(0x51d38a);
if(r1(R+518)){{goto L51d4ae;}}
}
B51d390:L51d390:{c.instructions+=16;NFSU2_TR(0x51d390);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d393:{NFSU2_TR(0x51d393);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d396:{NFSU2_TR(0x51d396);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d399:{NFSU2_TR(0x51d399);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d39d:{NFSU2_TR(0x51d39d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d3a0:{NFSU2_TR(0x51d3a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d3a4:{NFSU2_TR(0x51d3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d3a7:{NFSU2_TR(0x51d3a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d3aa:{NFSU2_TR(0x51d3aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d3ae:{NFSU2_TR(0x51d3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d3b1:{NFSU2_TR(0x51d3b1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51d3b2:{NFSU2_TR(0x51d3b2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51d3b5:{NFSU2_TR(0x51d3b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d3b6:{NFSU2_TR(0x51d3b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d3ba:{NFSU2_TR(0x51d3ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d3be:{NFSU2_TR(0x51d3be);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51d465;}}
}
B51d3c4:L51d3c4:{c.instructions+=2;NFSU2_TR(0x51d3c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51d4c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B51d3cb:{NFSU2_TR(0x51d3cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51d4b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51d3d2:L51d3d2:{c.instructions+=9;NFSU2_TR(0x51d3d2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d3d6:{NFSU2_TR(0x51d3d6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d3dc:{NFSU2_TR(0x51d3dc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d3e0:{NFSU2_TR(0x51d3e0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d3e4:{NFSU2_TR(0x51d3e4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d3e8:{NFSU2_TR(0x51d3e8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d3ee:{NFSU2_TR(0x51d3ee);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d3f2:{NFSU2_TR(0x51d3f2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d3f6:{NFSU2_TR(0x51d3f6);
{goto L51d475;}
}
B51d3f8:L51d3f8:{c.instructions+=3;NFSU2_TR(0x51d3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d3fb:{NFSU2_TR(0x51d3fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d3fc:{NFSU2_TR(0x51d3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d401ull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d401:L51d401:{c.instructions+=4;NFSU2_TR(0x51d401);
__builtin_memmove((R+28),(R+0),4);
}
B51d403:{NFSU2_TR(0x51d403);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d406:{NFSU2_TR(0x51d406);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d408:{NFSU2_TR(0x51d408);
if(r1(R+518)){{goto L51d475;}}
}
B51d40a:L51d40a:{c.instructions+=5;NFSU2_TR(0x51d40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d40d:{NFSU2_TR(0x51d40d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d40f:{NFSU2_TR(0x51d40f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d410:{NFSU2_TR(0x51d410);
__builtin_memmove((R+4),(R+28),4);
}
B51d412:{NFSU2_TR(0x51d412);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d417ull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d417:L51d417:{c.instructions+=8;NFSU2_TR(0x51d417);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d41b:{NFSU2_TR(0x51d41b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d41e:{NFSU2_TR(0x51d41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d421:{NFSU2_TR(0x51d421);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d422:{NFSU2_TR(0x51d422);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d426:{NFSU2_TR(0x51d426);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d427:{NFSU2_TR(0x51d427);
__builtin_memmove((R+4),(R+28),4);
}
B51d429:{NFSU2_TR(0x51d429);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d42eull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d42e:L51d42e:{c.instructions+=8;NFSU2_TR(0x51d42e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d432:{NFSU2_TR(0x51d432);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d436:{NFSU2_TR(0x51d436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d439:{NFSU2_TR(0x51d439);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d43a:{NFSU2_TR(0x51d43a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d43e:{NFSU2_TR(0x51d43e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d43f:{NFSU2_TR(0x51d43f);
__builtin_memmove((R+4),(R+28),4);
}
B51d441:{NFSU2_TR(0x51d441);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d446ull));
TAIL_STATIC(0x50c020u,50c);
}
B51d446:L51d446:{c.instructions+=7;NFSU2_TR(0x51d446);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d44a:{NFSU2_TR(0x51d44a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d44e:{NFSU2_TR(0x51d44e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d44f:{NFSU2_TR(0x51d44f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d450:{NFSU2_TR(0x51d450);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d454:{NFSU2_TR(0x51d454);
__builtin_memmove((R+4),(R+28),4);
}
B51d456:{NFSU2_TR(0x51d456);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d45bull));
TAIL_STATIC(0x50c050u,50c);
}
B51d45b:L51d45b:{c.instructions+=3;NFSU2_TR(0x51d45b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d45f:{NFSU2_TR(0x51d45f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d463:{NFSU2_TR(0x51d463);
{goto L51d475;}
}
B51d465:L51d465:{c.instructions+=4;NFSU2_TR(0x51d465);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d469:{NFSU2_TR(0x51d469);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d46d:{NFSU2_TR(0x51d46d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d471:{NFSU2_TR(0x51d471);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d475:L51d475:{c.instructions+=3;NFSU2_TR(0x51d475);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B51d47c:{NFSU2_TR(0x51d47c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d47d:{NFSU2_TR(0x51d47d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51d4ae;}}
}
B51d47f:L51d47f:{c.instructions+=6;NFSU2_TR(0x51d47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d482:{NFSU2_TR(0x51d482);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B51d485:{NFSU2_TR(0x51d485);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d486:{NFSU2_TR(0x51d486);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51d48a:{NFSU2_TR(0x51d48a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d48b:{NFSU2_TR(0x51d48b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d490ull));
TAIL_STATIC(0x504500u,504);
}
B51d490:L51d490:{c.instructions+=3;NFSU2_TR(0x51d490);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51d493:{NFSU2_TR(0x51d493);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d495:{NFSU2_TR(0x51d495);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d49e;}}
}
B51d497:L51d497:{c.instructions+=1;NFSU2_TR(0x51d497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51d49e:L51d49e:{c.instructions+=6;NFSU2_TR(0x51d49e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d4a0:{NFSU2_TR(0x51d4a0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51d4a4:{NFSU2_TR(0x51d4a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d4a5:{NFSU2_TR(0x51d4a5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d4a7:{NFSU2_TR(0x51d4a7);
__builtin_memmove((R+4),(R+24),4);
}
B51d4a9:{NFSU2_TR(0x51d4a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d4aeull));
TAIL_STATIC(0x5178d0u,517);
}
B51d4ae:L51d4ae:{c.instructions+=3;NFSU2_TR(0x51d4ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d4af:{NFSU2_TR(0x51d4af);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51d4b2:{NFSU2_TR(0x51d4b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d4d0:L51d4d0:{c.instructions+=5;NFSU2_TR(0x51d4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B51d4d3:{NFSU2_TR(0x51d4d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d4d4:{NFSU2_TR(0x51d4d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d4d8:{NFSU2_TR(0x51d4d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d4da:{NFSU2_TR(0x51d4da);
if(r1(R+518)){{goto L51d5fb;}}
}
B51d4e0:L51d4e0:{c.instructions+=13;NFSU2_TR(0x51d4e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d4e1:{NFSU2_TR(0x51d4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51d4e4:{NFSU2_TR(0x51d4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d4e7:{NFSU2_TR(0x51d4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d4ea:{NFSU2_TR(0x51d4ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d4ed:{NFSU2_TR(0x51d4ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d4f1:{NFSU2_TR(0x51d4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d4f4:{NFSU2_TR(0x51d4f4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51d4f5:{NFSU2_TR(0x51d4f5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51d4f8:{NFSU2_TR(0x51d4f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d4f9:{NFSU2_TR(0x51d4f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d4fd:{NFSU2_TR(0x51d4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d501:{NFSU2_TR(0x51d501);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51d5b1;}}
}
B51d507:L51d507:{c.instructions+=2;NFSU2_TR(0x51d507);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51d60cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51d50e:{NFSU2_TR(0x51d50e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51d600ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51d515:L51d515:{c.instructions+=5;NFSU2_TR(0x51d515);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d519:{NFSU2_TR(0x51d519);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d51d:{NFSU2_TR(0x51d51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d521:{NFSU2_TR(0x51d521);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d525:{NFSU2_TR(0x51d525);
{goto L51d5c1;}
}
B51d52a:L51d52a:{c.instructions+=3;NFSU2_TR(0x51d52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d52d:{NFSU2_TR(0x51d52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d52e:{NFSU2_TR(0x51d52e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d533ull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d533:L51d533:{c.instructions+=4;NFSU2_TR(0x51d533);
__builtin_memmove((R+28),(R+0),4);
}
B51d535:{NFSU2_TR(0x51d535);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d538:{NFSU2_TR(0x51d538);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d53a:{NFSU2_TR(0x51d53a);
if(r1(R+518)){{goto L51d5c1;}}
}
B51d540:L51d540:{c.instructions+=5;NFSU2_TR(0x51d540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d543:{NFSU2_TR(0x51d543);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d545:{NFSU2_TR(0x51d545);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d546:{NFSU2_TR(0x51d546);
__builtin_memmove((R+4),(R+28),4);
}
B51d548:{NFSU2_TR(0x51d548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d54dull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d54d:L51d54d:{c.instructions+=8;NFSU2_TR(0x51d54d);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d550:{NFSU2_TR(0x51d550);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d553:{NFSU2_TR(0x51d553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d556:{NFSU2_TR(0x51d556);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d557:{NFSU2_TR(0x51d557);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d55b:{NFSU2_TR(0x51d55b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d55c:{NFSU2_TR(0x51d55c);
__builtin_memmove((R+4),(R+28),4);
}
B51d55e:{NFSU2_TR(0x51d55e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d563ull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d563:L51d563:{c.instructions+=8;NFSU2_TR(0x51d563);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d566:{NFSU2_TR(0x51d566);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d56a:{NFSU2_TR(0x51d56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d56d:{NFSU2_TR(0x51d56d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d56e:{NFSU2_TR(0x51d56e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d572:{NFSU2_TR(0x51d572);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d573:{NFSU2_TR(0x51d573);
__builtin_memmove((R+4),(R+28),4);
}
B51d575:{NFSU2_TR(0x51d575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d57aull));
TAIL_STATIC(0x50c020u,50c);
}
B51d57a:L51d57a:{c.instructions+=10;NFSU2_TR(0x51d57a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d57e:{NFSU2_TR(0x51d57e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d584:{NFSU2_TR(0x51d584);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d588:{NFSU2_TR(0x51d588);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d589:{NFSU2_TR(0x51d589);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d58a:{NFSU2_TR(0x51d58a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51d58c:{NFSU2_TR(0x51d58c);
__builtin_memmove((R+4),(R+28),4);
}
B51d58e:{NFSU2_TR(0x51d58e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d592:{NFSU2_TR(0x51d592);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d596:{NFSU2_TR(0x51d596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d59bull));
TAIL_STATIC(0x50c050u,50c);
}
B51d59b:L51d59b:{c.instructions+=6;NFSU2_TR(0x51d59b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d59f:{NFSU2_TR(0x51d59f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d5a5:{NFSU2_TR(0x51d5a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51d5a7:{NFSU2_TR(0x51d5a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B51d5ab:{NFSU2_TR(0x51d5ab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d5af:{NFSU2_TR(0x51d5af);
{goto L51d5c1;}
}
B51d5b1:L51d5b1:{c.instructions+=4;NFSU2_TR(0x51d5b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d5b5:{NFSU2_TR(0x51d5b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d5b9:{NFSU2_TR(0x51d5b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d5bd:{NFSU2_TR(0x51d5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d5c1:L51d5c1:{c.instructions+=4;NFSU2_TR(0x51d5c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B51d5c8:{NFSU2_TR(0x51d5c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d5c9:{NFSU2_TR(0x51d5c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d5ca:{NFSU2_TR(0x51d5ca);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51d5fb;}}
}
B51d5cc:L51d5cc:{c.instructions+=6;NFSU2_TR(0x51d5cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d5cf:{NFSU2_TR(0x51d5cf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B51d5d2:{NFSU2_TR(0x51d5d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d5d3:{NFSU2_TR(0x51d5d3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51d5d7:{NFSU2_TR(0x51d5d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d5d8:{NFSU2_TR(0x51d5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d5ddull));
TAIL_STATIC(0x504500u,504);
}
B51d5dd:L51d5dd:{c.instructions+=3;NFSU2_TR(0x51d5dd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51d5e0:{NFSU2_TR(0x51d5e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d5e2:{NFSU2_TR(0x51d5e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d5eb;}}
}
B51d5e4:L51d5e4:{c.instructions+=1;NFSU2_TR(0x51d5e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51d5eb:L51d5eb:{c.instructions+=6;NFSU2_TR(0x51d5eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d5ed:{NFSU2_TR(0x51d5ed);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51d5f1:{NFSU2_TR(0x51d5f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d5f2:{NFSU2_TR(0x51d5f2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d5f4:{NFSU2_TR(0x51d5f4);
__builtin_memmove((R+4),(R+24),4);
}
B51d5f6:{NFSU2_TR(0x51d5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d5fbull));
TAIL_STATIC(0x5178d0u,517);
}
B51d5fb:L51d5fb:{c.instructions+=3;NFSU2_TR(0x51d5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d5fc:{NFSU2_TR(0x51d5fc);
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
B51d5ff:{NFSU2_TR(0x51d5ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d620:L51d620:{c.instructions+=6;NFSU2_TR(0x51d620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d621:{NFSU2_TR(0x51d621);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d622:{NFSU2_TR(0x51d622);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d626:{NFSU2_TR(0x51d626);
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
B51d628:{NFSU2_TR(0x51d628);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d629:{NFSU2_TR(0x51d629);
if(r1(R+518)){{goto L51d707;}}
}
B51d62f:L51d62f:{c.instructions+=6;NFSU2_TR(0x51d62f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d632:{NFSU2_TR(0x51d632);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51d633:{NFSU2_TR(0x51d633);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51d636:{NFSU2_TR(0x51d636);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d637:{NFSU2_TR(0x51d637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51d63a:{NFSU2_TR(0x51d63a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51d6f4;}}
}
B51d640:L51d640:{c.instructions+=2;NFSU2_TR(0x51d640);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51d718ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51d647:{NFSU2_TR(0x51d647);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51d70cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51d64e:L51d64e:{c.instructions+=11;NFSU2_TR(0x51d64e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d651:{NFSU2_TR(0x51d651);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d655:{NFSU2_TR(0x51d655);
if(mod_hook_table[45]){SPILL();c.pc=0x51d655u;mod_hook_table[45](c);SPILL();if(c.pc!=0x51d655u){TAIL_DYNAMIC(c.pc);}goto B51d65a;}
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B51d657:{NFSU2_TR(0x51d657);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d65a:{NFSU2_TR(0x51d65a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d65e:{NFSU2_TR(0x51d65e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d65f:{NFSU2_TR(0x51d65f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d660:{NFSU2_TR(0x51d660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51d662:{NFSU2_TR(0x51d662);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d663:{NFSU2_TR(0x51d663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51d664:{NFSU2_TR(0x51d664);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d665:L51d665:{c.instructions+=3;NFSU2_TR(0x51d665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d668:{NFSU2_TR(0x51d668);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d669:{NFSU2_TR(0x51d669);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d66eull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d66e:L51d66e:{c.instructions+=4;NFSU2_TR(0x51d66e);
__builtin_memmove((R+28),(R+0),4);
}
B51d670:{NFSU2_TR(0x51d670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d673:{NFSU2_TR(0x51d673);
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
B51d675:{NFSU2_TR(0x51d675);
if(r1(R+518)){{goto L51d706;}}
}
B51d67b:L51d67b:{c.instructions+=5;NFSU2_TR(0x51d67b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d67e:{NFSU2_TR(0x51d67e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d680:{NFSU2_TR(0x51d680);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d681:{NFSU2_TR(0x51d681);
__builtin_memmove((R+4),(R+28),4);
}
B51d683:{NFSU2_TR(0x51d683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d688ull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d688:L51d688:{c.instructions+=8;NFSU2_TR(0x51d688);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d68b:{NFSU2_TR(0x51d68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d68e:{NFSU2_TR(0x51d68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d691:{NFSU2_TR(0x51d691);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d692:{NFSU2_TR(0x51d692);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d696:{NFSU2_TR(0x51d696);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d697:{NFSU2_TR(0x51d697);
__builtin_memmove((R+4),(R+28),4);
}
B51d699:{NFSU2_TR(0x51d699);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d69eull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d69e:L51d69e:{c.instructions+=8;NFSU2_TR(0x51d69e);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d6a1:{NFSU2_TR(0x51d6a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d6a5:{NFSU2_TR(0x51d6a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d6a8:{NFSU2_TR(0x51d6a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d6a9:{NFSU2_TR(0x51d6a9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d6ad:{NFSU2_TR(0x51d6ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d6ae:{NFSU2_TR(0x51d6ae);
__builtin_memmove((R+4),(R+28),4);
}
B51d6b0:{NFSU2_TR(0x51d6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d6b5ull));
TAIL_STATIC(0x50c020u,50c);
}
B51d6b5:L51d6b5:{c.instructions+=12;NFSU2_TR(0x51d6b5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d6b9:{NFSU2_TR(0x51d6b9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d6bf:{NFSU2_TR(0x51d6bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d6c3:{NFSU2_TR(0x51d6c3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d6c7:{NFSU2_TR(0x51d6c7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d6c8:{NFSU2_TR(0x51d6c8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51d6ca:{NFSU2_TR(0x51d6ca);
{u32 ea_=u32(r4(R+12)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d6cd:{NFSU2_TR(0x51d6cd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d6cf:{NFSU2_TR(0x51d6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d6d2:{NFSU2_TR(0x51d6d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d6d3:{NFSU2_TR(0x51d6d3);
__builtin_memmove((R+4),(R+28),4);
}
B51d6d5:{NFSU2_TR(0x51d6d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d6daull));
TAIL_STATIC(0x50c050u,50c);
}
B51d6da:L51d6da:{c.instructions+=11;NFSU2_TR(0x51d6da);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d6de:{NFSU2_TR(0x51d6de);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d6e4:{NFSU2_TR(0x51d6e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d6e8:{NFSU2_TR(0x51d6e8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B51d6ea:{NFSU2_TR(0x51d6ea);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d6ed:{NFSU2_TR(0x51d6ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d6ee:{NFSU2_TR(0x51d6ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d6ef:{NFSU2_TR(0x51d6ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d6f0:{NFSU2_TR(0x51d6f0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d6f2:{NFSU2_TR(0x51d6f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51d6f3:{NFSU2_TR(0x51d6f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d6f4:L51d6f4:{c.instructions+=6;NFSU2_TR(0x51d6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d6f7:{NFSU2_TR(0x51d6f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d6fb:{NFSU2_TR(0x51d6fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51d6fd:{NFSU2_TR(0x51d6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d700:{NFSU2_TR(0x51d700);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d704:{NFSU2_TR(0x51d704);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B51d706:L51d706:{c.instructions+=1;NFSU2_TR(0x51d706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d707:L51d707:{c.instructions+=4;NFSU2_TR(0x51d707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d708:{NFSU2_TR(0x51d708);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d709:{NFSU2_TR(0x51d709);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51d70a:{NFSU2_TR(0x51d70a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d730:L51d730:{c.instructions+=5;NFSU2_TR(0x51d730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d731:{NFSU2_TR(0x51d731);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d735:{NFSU2_TR(0x51d735);
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
B51d737:{NFSU2_TR(0x51d737);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d738:{NFSU2_TR(0x51d738);
if(r1(R+518)){{goto L51d7c8;}}
}
B51d73e:L51d73e:{c.instructions+=6;NFSU2_TR(0x51d73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d741:{NFSU2_TR(0x51d741);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51d742:{NFSU2_TR(0x51d742);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B51d745:{NFSU2_TR(0x51d745);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d746:{NFSU2_TR(0x51d746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B51d749:{NFSU2_TR(0x51d749);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51d7b3;}}
}
B51d74b:L51d74b:{c.instructions+=2;NFSU2_TR(0x51d74b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51d7d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51d752:{NFSU2_TR(0x51d752);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51d7ccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51d759:L51d759:{c.instructions+=10;NFSU2_TR(0x51d759);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d75c:{NFSU2_TR(0x51d75c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d760:{NFSU2_TR(0x51d760);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B51d762:{NFSU2_TR(0x51d762);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d765:{NFSU2_TR(0x51d765);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d769:{NFSU2_TR(0x51d769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d76a:{NFSU2_TR(0x51d76a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d76b:{NFSU2_TR(0x51d76b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B51d76d:{NFSU2_TR(0x51d76d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d76e:{NFSU2_TR(0x51d76e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d76f:L51d76f:{c.instructions+=3;NFSU2_TR(0x51d76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d772:{NFSU2_TR(0x51d772);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d773:{NFSU2_TR(0x51d773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d778ull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d778:L51d778:{c.instructions+=4;NFSU2_TR(0x51d778);
__builtin_memmove((R+28),(R+0),4);
}
B51d77a:{NFSU2_TR(0x51d77a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d77d:{NFSU2_TR(0x51d77d);
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
B51d77f:{NFSU2_TR(0x51d77f);
if(r1(R+518)){{goto L51d7c7;}}
}
B51d781:L51d781:{c.instructions+=5;NFSU2_TR(0x51d781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d784:{NFSU2_TR(0x51d784);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d786:{NFSU2_TR(0x51d786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d787:{NFSU2_TR(0x51d787);
__builtin_memmove((R+4),(R+28),4);
}
B51d789:{NFSU2_TR(0x51d789);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d78eull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d78e:L51d78e:{c.instructions+=9;NFSU2_TR(0x51d78e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d791:{NFSU2_TR(0x51d791);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d795:{NFSU2_TR(0x51d795);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d797:{NFSU2_TR(0x51d797);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d79a:{NFSU2_TR(0x51d79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d79d:{NFSU2_TR(0x51d79d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d79e:{NFSU2_TR(0x51d79e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d79f:{NFSU2_TR(0x51d79f);
__builtin_memmove((R+4),(R+28),4);
}
B51d7a1:{NFSU2_TR(0x51d7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d7a6ull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d7a6:L51d7a6:{c.instructions+=7;NFSU2_TR(0x51d7a6);
{u32 ea_=u32(r4(R+12)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d7a9:{NFSU2_TR(0x51d7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d7ad:{NFSU2_TR(0x51d7ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d7ae:{NFSU2_TR(0x51d7ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d7af:{NFSU2_TR(0x51d7af);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d7b1:{NFSU2_TR(0x51d7b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d7b2:{NFSU2_TR(0x51d7b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d7b3:L51d7b3:{c.instructions+=4;NFSU2_TR(0x51d7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d7b7:{NFSU2_TR(0x51d7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d7bb:{NFSU2_TR(0x51d7bb);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51d7c1:{NFSU2_TR(0x51d7c1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B51d7c7:L51d7c7:{c.instructions+=1;NFSU2_TR(0x51d7c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d7c8:L51d7c8:{c.instructions+=3;NFSU2_TR(0x51d7c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d7c9:{NFSU2_TR(0x51d7c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d7ca:{NFSU2_TR(0x51d7ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d7f0:L51d7f0:{c.instructions+=5;NFSU2_TR(0x51d7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B51d7f3:{NFSU2_TR(0x51d7f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d7f4:{NFSU2_TR(0x51d7f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d7f8:{NFSU2_TR(0x51d7f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d7fa:{NFSU2_TR(0x51d7fa);
if(r1(R+518)){{goto L51d85a;}}
}
B51d7fc:L51d7fc:{c.instructions+=14;NFSU2_TR(0x51d7fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d800:{NFSU2_TR(0x51d800);
__builtin_memmove((R+4),(R+0),4);
}
B51d802:{NFSU2_TR(0x51d802);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B51d805:{NFSU2_TR(0x51d805);
__builtin_memmove((R+8),(R+0),4);
}
B51d807:{NFSU2_TR(0x51d807);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d80b:{NFSU2_TR(0x51d80b);
w4(R+4,u32(r1(R+1)));
}
B51d80e:{NFSU2_TR(0x51d80e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B51d813:{NFSU2_TR(0x51d813);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B51d816:{NFSU2_TR(0x51d816);
w4(R+8,u32(r1(R+8)));
}
B51d819:{NFSU2_TR(0x51d819);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d81d:{NFSU2_TR(0x51d81d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B51d824:{NFSU2_TR(0x51d824);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d828:{NFSU2_TR(0x51d828);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d82c:{NFSU2_TR(0x51d82c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51d85a;}}
}
B51d82e:L51d82e:{c.instructions+=5;NFSU2_TR(0x51d82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d831:{NFSU2_TR(0x51d831);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d832:{NFSU2_TR(0x51d832);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51d836:{NFSU2_TR(0x51d836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d837:{NFSU2_TR(0x51d837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d83cull));
TAIL_STATIC(0x504640u,504);
}
B51d83c:L51d83c:{c.instructions+=3;NFSU2_TR(0x51d83c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51d83f:{NFSU2_TR(0x51d83f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d841:{NFSU2_TR(0x51d841);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d84a;}}
}
B51d843:L51d843:{c.instructions+=1;NFSU2_TR(0x51d843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51d84a:L51d84a:{c.instructions+=6;NFSU2_TR(0x51d84a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d84c:{NFSU2_TR(0x51d84c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51d850:{NFSU2_TR(0x51d850);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d851:{NFSU2_TR(0x51d851);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d853:{NFSU2_TR(0x51d853);
__builtin_memmove((R+4),(R+24),4);
}
B51d855:{NFSU2_TR(0x51d855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d85aull));
TAIL_STATIC(0x517ad0u,517);
}
B51d85a:L51d85a:{c.instructions+=3;NFSU2_TR(0x51d85a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d85b:{NFSU2_TR(0x51d85b);
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
B51d85e:{NFSU2_TR(0x51d85e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d860:L51d860:{c.instructions+=4;NFSU2_TR(0x51d860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d861:{NFSU2_TR(0x51d861);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d865:{NFSU2_TR(0x51d865);
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
B51d867:{NFSU2_TR(0x51d867);
if(r1(R+518)){{goto L51d89c;}}
}
B51d869:L51d869:{c.instructions+=2;NFSU2_TR(0x51d869);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x100ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51d870:{NFSU2_TR(0x51d870);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L51d89c;}}
}
B51d872:L51d872:{c.instructions+=6;NFSU2_TR(0x51d872);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d875:{NFSU2_TR(0x51d875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d876:{NFSU2_TR(0x51d876);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51d87a:{NFSU2_TR(0x51d87a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d87b:{NFSU2_TR(0x51d87b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d87c:{NFSU2_TR(0x51d87c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d881ull));
TAIL_STATIC(0x504640u,504);
}
B51d881:L51d881:{c.instructions+=3;NFSU2_TR(0x51d881);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51d884:{NFSU2_TR(0x51d884);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d886:{NFSU2_TR(0x51d886);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d88f;}}
}
B51d888:L51d888:{c.instructions+=1;NFSU2_TR(0x51d888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B51d88f:L51d88f:{c.instructions+=5;NFSU2_TR(0x51d88f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d891:{NFSU2_TR(0x51d891);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d892:{NFSU2_TR(0x51d892);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d894:{NFSU2_TR(0x51d894);
__builtin_memmove((R+4),(R+24),4);
}
B51d896:{NFSU2_TR(0x51d896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d89bull));
TAIL_STATIC(0x517ad0u,517);
}
B51d89b:L51d89b:{c.instructions+=1;NFSU2_TR(0x51d89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d89c:L51d89c:{c.instructions+=2;NFSU2_TR(0x51d89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d89d:{NFSU2_TR(0x51d89d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d8a0:L51d8a0:{c.instructions+=17;NFSU2_TR(0x51d8a0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x810ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x810ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x810ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51d8a6:{NFSU2_TR(0x51d8a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x818ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d8ad:{NFSU2_TR(0x51d8ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d8ae:{NFSU2_TR(0x51d8ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d8af:{NFSU2_TR(0x51d8af);
u8 U[8];
w4(U+0,u32(u32(u32(0x81cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51d8b6:{NFSU2_TR(0x51d8b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d8b7:{NFSU2_TR(0x51d8b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x828ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51d8be:{NFSU2_TR(0x51d8be);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51d8c5:{NFSU2_TR(0x51d8c5);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B51d8cb:{NFSU2_TR(0x51d8cb);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51d8d1:{NFSU2_TR(0x51d8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d8d4:{NFSU2_TR(0x51d8d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d8d7:{NFSU2_TR(0x51d8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d8da:{NFSU2_TR(0x51d8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d8dd:{NFSU2_TR(0x51d8dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d8de:{NFSU2_TR(0x51d8de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d8e2:{NFSU2_TR(0x51d8e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d8e7ull));
TAIL_STATIC(0x51bd70u,51b);
}
B51d8e7:L51d8e7:{c.instructions+=4;NFSU2_TR(0x51d8e7);
__builtin_memmove((R+12),(R+0),4);
}
B51d8e9:{NFSU2_TR(0x51d8e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51d8ec:{NFSU2_TR(0x51d8ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d8ee:{NFSU2_TR(0x51d8ee);
if(r1(R+518)){{goto L51d9de;}}
}
B51d8f4:L51d8f4:{c.instructions+=3;NFSU2_TR(0x51d8f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B51d8f8:{NFSU2_TR(0x51d8f8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d8f9:{NFSU2_TR(0x51d8f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51d93a;}}
}
B51d8fb:L51d8fb:{c.instructions+=2;NFSU2_TR(0x51d8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d8fe:{NFSU2_TR(0x51d8fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d903ull));
TAIL_STATIC(0x4ff9d0u,4ff);
}
B51d903:L51d903:{c.instructions+=2;NFSU2_TR(0x51d903);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d905:{NFSU2_TR(0x51d905);
if(r1(R+518)){{goto L51d93a;}}
}
B51d907:L51d907:{c.instructions+=4;NFSU2_TR(0x51d907);
__builtin_memmove((R+4),gp(0x8383dc),4);
}
B51d90d:{NFSU2_TR(0x51d90d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d90f:{NFSU2_TR(0x51d90f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d910:{NFSU2_TR(0x51d910);
if(r1(R+518)){{goto L51d927;}}
}
B51d912:L51d912:{c.instructions+=4;NFSU2_TR(0x51d912);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d917:{NFSU2_TR(0x51d917);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51d91b:{NFSU2_TR(0x51d91b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d91c:{NFSU2_TR(0x51d91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d921ull));
TAIL_STATIC(0x50d3c0u,50d);
}
B51d921:L51d921:{c.instructions+=2;NFSU2_TR(0x51d921);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B51d925:{NFSU2_TR(0x51d925);
{goto L51d93d;}
}
B51d927:L51d927:{c.instructions+=3;NFSU2_TR(0x51d927);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51d92b:{NFSU2_TR(0x51d92b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d92c:{NFSU2_TR(0x51d92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d931ull));
TAIL_STATIC(0x43e000u,43e);
}
B51d931:L51d931:{c.instructions+=3;NFSU2_TR(0x51d931);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51d934:{NFSU2_TR(0x51d934);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B51d938:{NFSU2_TR(0x51d938);
{goto L51d93d;}
}
B51d93a:L51d93a:{c.instructions+=1;NFSU2_TR(0x51d93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51d93d:L51d93d:{c.instructions+=5;NFSU2_TR(0x51d93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d940:{NFSU2_TR(0x51d940);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d941:{NFSU2_TR(0x51d941);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d942:{NFSU2_TR(0x51d942);
__builtin_memmove((R+4),(R+12),4);
}
B51d944:{NFSU2_TR(0x51d944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d949ull));
TAIL_STATIC(0x50bf40u,50b);
}
B51d949:L51d949:{c.instructions+=7;NFSU2_TR(0x51d949);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51d94d:{NFSU2_TR(0x51d94d);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d950:{NFSU2_TR(0x51d950);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d952:{NFSU2_TR(0x51d952);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d953:{NFSU2_TR(0x51d953);
__builtin_memmove((R+4),(R+12),4);
}
B51d955:{NFSU2_TR(0x51d955);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d959:{NFSU2_TR(0x51d959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51d95eull));
TAIL_STATIC(0x50bec0u,50b);
}
B51d95e:L51d95e:{c.instructions+=12;NFSU2_TR(0x51d95e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d962:{NFSU2_TR(0x51d962);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d965:{NFSU2_TR(0x51d965);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d969:{NFSU2_TR(0x51d969);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51d96c:{NFSU2_TR(0x51d96c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51d974:{NFSU2_TR(0x51d974);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51d978:{NFSU2_TR(0x51d978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51d979:{NFSU2_TR(0x51d979);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d97b:{NFSU2_TR(0x51d97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d97e:{NFSU2_TR(0x51d97e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d980:{NFSU2_TR(0x51d980);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d986:{NFSU2_TR(0x51d986);
if(r1(R+518)){{goto L51d992;}}
}
B51d988:L51d988:{c.instructions+=2;NFSU2_TR(0x51d988);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbf000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51d990:{NFSU2_TR(0x51d990);
{goto L51d99e;}
}
B51d992:L51d992:{c.instructions+=2;NFSU2_TR(0x51d992);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d994:{NFSU2_TR(0x51d994);
if(r1(R+518)){{goto L51d99e;}}
}
B51d996:L51d996:{c.instructions+=1;NFSU2_TR(0x51d996);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51d99e:L51d99e:{c.instructions+=2;NFSU2_TR(0x51d99e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d9a0:{NFSU2_TR(0x51d9a0);
if(r1(R+518)){{goto L51d9ac;}}
}
B51d9a2:L51d9a2:{c.instructions+=3;NFSU2_TR(0x51d9a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51d9a4:{NFSU2_TR(0x51d9a4);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d9aa:{NFSU2_TR(0x51d9aa);
{goto L51d9b8;}
}
B51d9ac:L51d9ac:{c.instructions+=2;NFSU2_TR(0x51d9ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51d9ae:{NFSU2_TR(0x51d9ae);
if(r1(R+518)){{goto L51d9b8;}}
}
B51d9b0:L51d9b0:{c.instructions+=2;NFSU2_TR(0x51d9b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51d9b2:{NFSU2_TR(0x51d9b2);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d9b8:L51d9b8:{c.instructions+=10;NFSU2_TR(0x51d9b8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51d9bc:{NFSU2_TR(0x51d9bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x824ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51d9c3:{NFSU2_TR(0x51d9c3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d9c7:{NFSU2_TR(0x51d9c7);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d9ca:{NFSU2_TR(0x51d9ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d9ce:{NFSU2_TR(0x51d9ce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51d9d2:{NFSU2_TR(0x51d9d2);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51d9d5:{NFSU2_TR(0x51d9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51d9d9:{NFSU2_TR(0x51d9d9);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51d9dc:{NFSU2_TR(0x51d9dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B51d9de:L51d9de:{c.instructions+=5;NFSU2_TR(0x51d9de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d9df:{NFSU2_TR(0x51d9df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51d9e0:{NFSU2_TR(0x51d9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51d9e1:{NFSU2_TR(0x51d9e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x810ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x810ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x810ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51d9e7:{NFSU2_TR(0x51d9e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51d9f0:L51d9f0:{c.instructions+=7;NFSU2_TR(0x51d9f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B51d9f3:{NFSU2_TR(0x51d9f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d9f4:{NFSU2_TR(0x51d9f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d9f5:{NFSU2_TR(0x51d9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B51d9f9:{NFSU2_TR(0x51d9f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51d9fb:{NFSU2_TR(0x51d9fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51d9fc:{NFSU2_TR(0x51d9fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51da07;}}
}
B51d9fe:L51d9fe:{c.instructions+=6;NFSU2_TR(0x51d9fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51d9ff:{NFSU2_TR(0x51d9ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51da00:{NFSU2_TR(0x51da00);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B51da02:{NFSU2_TR(0x51da02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51da03:{NFSU2_TR(0x51da03);
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
B51da06:{NFSU2_TR(0x51da06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51da07:L51da07:{c.instructions+=5;NFSU2_TR(0x51da07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51da0a:{NFSU2_TR(0x51da0a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B51da0b:{NFSU2_TR(0x51da0b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51da0e:{NFSU2_TR(0x51da0e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da0f:{NFSU2_TR(0x51da0f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51dbb1;}}
}
B51da15:L51da15:{c.instructions+=2;NFSU2_TR(0x51da15);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x51dbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B51da1c:{NFSU2_TR(0x51da1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x51dbbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51da23:L51da23:{c.instructions+=6;NFSU2_TR(0x51da23);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51da27:{NFSU2_TR(0x51da27);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51da2a:{NFSU2_TR(0x51da2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da2b:{NFSU2_TR(0x51da2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da2c:{NFSU2_TR(0x51da2c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da2d:{NFSU2_TR(0x51da2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51da32ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d070u);}goto L51d070;}
}
B51da32:L51da32:{c.instructions+=6;NFSU2_TR(0x51da32);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B51da35:{NFSU2_TR(0x51da35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da36:{NFSU2_TR(0x51da36);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B51da39:{NFSU2_TR(0x51da39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da3a:{NFSU2_TR(0x51da3a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da3b:{NFSU2_TR(0x51da3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51da40ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d170u);}goto L51d170;}
}
B51da40:L51da40:{c.instructions+=8;NFSU2_TR(0x51da40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B51da43:{NFSU2_TR(0x51da43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51da44:{NFSU2_TR(0x51da44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51da45:{NFSU2_TR(0x51da45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51da46:{NFSU2_TR(0x51da46);
w1(R+0,u8(0x1ull));
}
B51da48:{NFSU2_TR(0x51da48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51da49:{NFSU2_TR(0x51da49);
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
B51da4c:{NFSU2_TR(0x51da4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51da4d:L51da4d:{c.instructions+=4;NFSU2_TR(0x51da4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51da50:{NFSU2_TR(0x51da50);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B51da52:{NFSU2_TR(0x51da52);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51da54:{NFSU2_TR(0x51da54);
if(r1(R+518)){{goto L51dbb1;}}
}
B51da5a:L51da5a:{c.instructions+=2;NFSU2_TR(0x51da5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51da5e:{NFSU2_TR(0x51da5e);
__builtin_memmove((R+28),(R+28),4);
}
B51da60:L51da60:{c.instructions+=4;NFSU2_TR(0x51da60);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51da64:{NFSU2_TR(0x51da64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da65:{NFSU2_TR(0x51da65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51da66:{NFSU2_TR(0x51da66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51da6bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d9f0u);}goto L51d9f0;}
}
B51da6b:L51da6b:{c.instructions+=3;NFSU2_TR(0x51da6b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51da6e:{NFSU2_TR(0x51da6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51da70:{NFSU2_TR(0x51da70);
if(r1(R+518)){{goto L51dae7;}}
}
B51da72:L51da72:{c.instructions+=2;NFSU2_TR(0x51da72);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51da74:{NFSU2_TR(0x51da74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51da93;}}
}
B51da76:L51da76:{c.instructions+=9;NFSU2_TR(0x51da76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51da7a:{NFSU2_TR(0x51da7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51da7e:{NFSU2_TR(0x51da7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51da82:{NFSU2_TR(0x51da82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51da84:{NFSU2_TR(0x51da84);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51da88:{NFSU2_TR(0x51da88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51da8b:{NFSU2_TR(0x51da8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51da8e:{NFSU2_TR(0x51da8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51da91:{NFSU2_TR(0x51da91);
{goto L51dae5;}
}
B51da93:L51da93:{c.instructions+=5;NFSU2_TR(0x51da93);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51da97:{NFSU2_TR(0x51da97);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51da99:{NFSU2_TR(0x51da99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51da9b:{NFSU2_TR(0x51da9b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51da9e:{NFSU2_TR(0x51da9e);
if(r1(R+514)){{goto L51daa6;}}
}
B51daa0:L51daa0:{c.instructions+=2;NFSU2_TR(0x51daa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51daa4:{NFSU2_TR(0x51daa4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51daa6:L51daa6:{c.instructions+=5;NFSU2_TR(0x51daa6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51daaa:{NFSU2_TR(0x51daaa);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51daad:{NFSU2_TR(0x51daad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51daaf:{NFSU2_TR(0x51daaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51dab2:{NFSU2_TR(0x51dab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51dabb;}}
}
B51dab4:L51dab4:{c.instructions+=2;NFSU2_TR(0x51dab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dab8:{NFSU2_TR(0x51dab8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dabb:L51dabb:{c.instructions+=5;NFSU2_TR(0x51dabb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51dabf:{NFSU2_TR(0x51dabf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51dac2:{NFSU2_TR(0x51dac2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51dac4:{NFSU2_TR(0x51dac4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51dac7:{NFSU2_TR(0x51dac7);
if(r1(R+514)){{goto L51dad0;}}
}
B51dac9:L51dac9:{c.instructions+=2;NFSU2_TR(0x51dac9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dacd:{NFSU2_TR(0x51dacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dad0:L51dad0:{c.instructions+=5;NFSU2_TR(0x51dad0);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51dad4:{NFSU2_TR(0x51dad4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51dad7:{NFSU2_TR(0x51dad7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51dad9:{NFSU2_TR(0x51dad9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51dadc:{NFSU2_TR(0x51dadc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51dae5;}}
}
B51dade:L51dade:{c.instructions+=2;NFSU2_TR(0x51dade);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51dae2:{NFSU2_TR(0x51dae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dae5:L51dae5:{c.instructions+=1;NFSU2_TR(0x51dae5);
w1(R+12,u8(0x1ull));
}
B51dae7:L51dae7:{c.instructions+=3;NFSU2_TR(0x51dae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51daea:{NFSU2_TR(0x51daea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51daec:{NFSU2_TR(0x51daec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51da60u);}goto L51da60;}}
}
B51daf2:L51daf2:{c.instructions+=2;NFSU2_TR(0x51daf2);
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
B51daf4:{NFSU2_TR(0x51daf4);
if(r1(R+518)){{goto L51dbb1;}}
}
B51dafa:L51dafa:{c.instructions+=9;NFSU2_TR(0x51dafa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dafd:{NFSU2_TR(0x51dafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51db00:{NFSU2_TR(0x51db00);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51db03:{NFSU2_TR(0x51db03);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B51db07:{NFSU2_TR(0x51db07);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51db0b:{NFSU2_TR(0x51db0b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51db0f:{NFSU2_TR(0x51db0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db10:{NFSU2_TR(0x51db10);
__builtin_memmove((R+4),(R+24),4);
}
B51db12:{NFSU2_TR(0x51db12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51db17ull));
TAIL_STATIC(0x4fdad0u,4fd);
}
B51db17:L51db17:{c.instructions+=7;NFSU2_TR(0x51db17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51db18:{NFSU2_TR(0x51db18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51db19:{NFSU2_TR(0x51db19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51db1a:{NFSU2_TR(0x51db1a);
w1(R+0,u8(0x1ull));
}
B51db1c:{NFSU2_TR(0x51db1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51db1d:{NFSU2_TR(0x51db1d);
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
B51db20:{NFSU2_TR(0x51db20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51db21:L51db21:{c.instructions+=6;NFSU2_TR(0x51db21);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B51db25:{NFSU2_TR(0x51db25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db26:{NFSU2_TR(0x51db26);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B51db2a:{NFSU2_TR(0x51db2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db2b:{NFSU2_TR(0x51db2b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db2c:{NFSU2_TR(0x51db2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51db31ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d8a0u);}goto L51d8a0;}
}
B51db31:L51db31:{c.instructions+=6;NFSU2_TR(0x51db31);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51db35:{NFSU2_TR(0x51db35);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51db3b:{NFSU2_TR(0x51db3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51db3e:{NFSU2_TR(0x51db3e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51db40:{NFSU2_TR(0x51db40);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51db43:{NFSU2_TR(0x51db43);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51dbb1;}}
}
B51db45:L51db45:{c.instructions+=5;NFSU2_TR(0x51db45);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51db49:{NFSU2_TR(0x51db49);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51db4f:{NFSU2_TR(0x51db4f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51db51:{NFSU2_TR(0x51db51);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51db54:{NFSU2_TR(0x51db54);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51dbb1;}}
}
B51db56:L51db56:{c.instructions+=18;NFSU2_TR(0x51db56);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51db5a:{NFSU2_TR(0x51db5a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51db5e:{NFSU2_TR(0x51db5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51db62:{NFSU2_TR(0x51db62);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51db64:{NFSU2_TR(0x51db64);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51db68:{NFSU2_TR(0x51db68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51db69:{NFSU2_TR(0x51db69);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51db6d:{NFSU2_TR(0x51db6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51db6e:{NFSU2_TR(0x51db6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51db6f:{NFSU2_TR(0x51db6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51db72:{NFSU2_TR(0x51db72);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51db75:{NFSU2_TR(0x51db75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51db76:{NFSU2_TR(0x51db76);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51db7a:{NFSU2_TR(0x51db7a);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51db7e:{NFSU2_TR(0x51db7e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B51db81:{NFSU2_TR(0x51db81);
w1(R+0,u8(0x1ull));
}
B51db83:{NFSU2_TR(0x51db83);
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
B51db86:{NFSU2_TR(0x51db86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51db87:L51db87:{c.instructions+=6;NFSU2_TR(0x51db87);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51db8b:{NFSU2_TR(0x51db8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B51db8e:{NFSU2_TR(0x51db8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db8f:{NFSU2_TR(0x51db8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db90:{NFSU2_TR(0x51db90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db91:{NFSU2_TR(0x51db91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51db96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d070u);}goto L51d070;}
}
B51db96:L51db96:{c.instructions+=6;NFSU2_TR(0x51db96);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B51db99:{NFSU2_TR(0x51db99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db9a:{NFSU2_TR(0x51db9a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B51db9d:{NFSU2_TR(0x51db9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db9e:{NFSU2_TR(0x51db9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51db9f:{NFSU2_TR(0x51db9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dba4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d170u);}goto L51d170;}
}
B51dba4:L51dba4:{c.instructions+=8;NFSU2_TR(0x51dba4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B51dba7:{NFSU2_TR(0x51dba7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dba8:{NFSU2_TR(0x51dba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51dba9:{NFSU2_TR(0x51dba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51dbaa:{NFSU2_TR(0x51dbaa);
w1(R+0,u8(0x1ull));
}
B51dbac:{NFSU2_TR(0x51dbac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51dbad:{NFSU2_TR(0x51dbad);
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
B51dbb0:{NFSU2_TR(0x51dbb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dbb1:L51dbb1:{c.instructions+=7;NFSU2_TR(0x51dbb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dbb2:{NFSU2_TR(0x51dbb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51dbb3:{NFSU2_TR(0x51dbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B51dbb4:{NFSU2_TR(0x51dbb4);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B51dbb6:{NFSU2_TR(0x51dbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51dbb7:{NFSU2_TR(0x51dbb7);
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
B51dbba:{NFSU2_TR(0x51dbba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dbe0:L51dbe0:{c.instructions+=7;NFSU2_TR(0x51dbe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dbe1:{NFSU2_TR(0x51dbe1);
__builtin_memmove((R+24),(R+4),4);
}
B51dbe3:{NFSU2_TR(0x51dbe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dbe6:{NFSU2_TR(0x51dbe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51dbe8:{NFSU2_TR(0x51dbe8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dbe9:{NFSU2_TR(0x51dbe9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51dbed:{NFSU2_TR(0x51dbed);
if(r1(R+518)){{goto L51dbfb;}}
}
B51dbef:L51dbef:{c.instructions+=4;NFSU2_TR(0x51dbef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dbf1:{NFSU2_TR(0x51dbf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dbf2:{NFSU2_TR(0x51dbf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dbf3:{NFSU2_TR(0x51dbf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dbf8ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51dbf8:L51dbf8:{c.instructions+=1;NFSU2_TR(0x51dbf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51dbfb:L51dbfb:{c.instructions+=3;NFSU2_TR(0x51dbfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dbfe:{NFSU2_TR(0x51dbfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51dc00:{NFSU2_TR(0x51dc00);
if(r1(R+518)){{goto L51dc0e;}}
}
B51dc02:L51dc02:{c.instructions+=4;NFSU2_TR(0x51dc02);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc04:{NFSU2_TR(0x51dc04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc05:{NFSU2_TR(0x51dc05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc06:{NFSU2_TR(0x51dc06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dc0bull));
TAIL_STATIC(0x51cf70u,51c);
}
B51dc0b:L51dc0b:{c.instructions+=1;NFSU2_TR(0x51dc0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B51dc0e:L51dc0e:{c.instructions+=5;NFSU2_TR(0x51dc0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc0f:{NFSU2_TR(0x51dc0f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc14:{NFSU2_TR(0x51dc14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B51dc17:{NFSU2_TR(0x51dc17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc18:{NFSU2_TR(0x51dc18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dc1dull));
TAIL_STATIC(0x50c960u,50c);
}
B51dc1d:L51dc1d:{c.instructions+=4;NFSU2_TR(0x51dc1d);
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
B51dc20:{NFSU2_TR(0x51dc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51dc21:{NFSU2_TR(0x51dc21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dc22:{NFSU2_TR(0x51dc22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dc30:L51dc30:{c.instructions+=3;NFSU2_TR(0x51dc30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc31:{NFSU2_TR(0x51dc31);
__builtin_memmove((R+24),(R+4),4);
}
B51dc33:{NFSU2_TR(0x51dc33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dc38ull));
{goto L51dc50;}
}
B51dc38:L51dc38:{c.instructions+=2;NFSU2_TR(0x51dc38);
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
B51dc3d:{NFSU2_TR(0x51dc3d);
if(r1(R+518)){{goto L51dc48;}}
}
B51dc3f:L51dc3f:{c.instructions+=2;NFSU2_TR(0x51dc3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc40:{NFSU2_TR(0x51dc40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dc45ull));
TAIL_STATIC(0x575630u,575);
}
B51dc45:L51dc45:{c.instructions+=1;NFSU2_TR(0x51dc45);
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
B51dc48:L51dc48:{c.instructions+=3;NFSU2_TR(0x51dc48);
__builtin_memmove((R+0),(R+24),4);
}
B51dc4a:{NFSU2_TR(0x51dc4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dc4b:{NFSU2_TR(0x51dc4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dc50:L51dc50:{c.instructions+=2;NFSU2_TR(0x51dc50);
u8 U[4];
w4(U+0,u32(0x79b2dcull));
s4(u32(r4(R+4)),r4(U+0));
}
B51dc56:{NFSU2_TR(0x51dc56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dc60:L51dc60:{c.instructions+=5;NFSU2_TR(0x51dc60);
u8 U[9];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
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
B51dc65:{NFSU2_TR(0x51dc65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc66:{NFSU2_TR(0x51dc66);
__builtin_memmove((R+24),(R+4),4);
}
B51dc68:{NFSU2_TR(0x51dc68);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B51dc6e:{NFSU2_TR(0x51dc6e);
if(r1(R+518)){{goto L51dc79;}}
}
B51dc70:L51dc70:{c.instructions+=2;NFSU2_TR(0x51dc70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc71:{NFSU2_TR(0x51dc71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dc76ull));
TAIL_STATIC(0x575630u,575);
}
B51dc76:L51dc76:{c.instructions+=1;NFSU2_TR(0x51dc76);
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
B51dc79:L51dc79:{c.instructions+=3;NFSU2_TR(0x51dc79);
__builtin_memmove((R+0),(R+24),4);
}
B51dc7b:{NFSU2_TR(0x51dc7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dc7c:{NFSU2_TR(0x51dc7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dc80:L51dc80:{c.instructions+=7;NFSU2_TR(0x51dc80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc81:{NFSU2_TR(0x51dc81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc82:{NFSU2_TR(0x51dc82);
__builtin_memmove((R+24),(R+4),4);
}
B51dc84:{NFSU2_TR(0x51dc84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51dc87:{NFSU2_TR(0x51dc87);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B51dc89:{NFSU2_TR(0x51dc89);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B51dc8b:{NFSU2_TR(0x51dc8b);
if(r1(R+518)){{goto L51dcbe;}}
}
B51dc8d:L51dc8d:{c.instructions+=6;NFSU2_TR(0x51dc8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dc8e:{NFSU2_TR(0x51dc8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51dc90:{NFSU2_TR(0x51dc90);
__builtin_memmove(gp(0x83a9c0),(R+12),1);
}
B51dc96:{NFSU2_TR(0x51dc96);
__builtin_memmove(gp(0x83a9c4),(R+12),4);
}
B51dc9c:{NFSU2_TR(0x51dc9c);
w4(R+4,u32(0x40ull));
}
B51dca1:{NFSU2_TR(0x51dca1);
w4(R+28,u32(0x83a8b0ull));
}
B51dca6:L51dca6:{c.instructions+=1;NFSU2_TR(0x51dca6);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51dca8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51dca6u);}goto L51dca6;}
}
B51dca8:L51dca8:{c.instructions+=3;NFSU2_TR(0x51dca8);
w4(R+4,u32(0x40ull));
}
B51dcad:{NFSU2_TR(0x51dcad);
w4(R+28,u32(0x83a7b0ull));
}
B51dcb2:{NFSU2_TR(0x51dcb2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dcb3:L51dcb3:{c.instructions+=1;NFSU2_TR(0x51dcb3);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L51dcb5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51dcb3u);}goto L51dcb3;}
}
B51dcb5:L51dcb5:{c.instructions+=1;NFSU2_TR(0x51dcb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dcbaull));
TAIL_STATIC(0x575630u,575);
}
B51dcba:L51dcba:{c.instructions+=2;NFSU2_TR(0x51dcba);
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
B51dcbd:{NFSU2_TR(0x51dcbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51dcbe:L51dcbe:{c.instructions+=5;NFSU2_TR(0x51dcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dcc1:{NFSU2_TR(0x51dcc1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51dcc4:{NFSU2_TR(0x51dcc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dcc5:{NFSU2_TR(0x51dcc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B51dcc6:{NFSU2_TR(0x51dcc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dcd0:L51dcd0:{c.instructions+=5;NFSU2_TR(0x51dcd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dcd1:{NFSU2_TR(0x51dcd1);
__builtin_memmove((R+24),(R+4),4);
}
B51dcd3:{NFSU2_TR(0x51dcd3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51dcd6:{NFSU2_TR(0x51dcd6);
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
B51dcd8:{NFSU2_TR(0x51dcd8);
if(r1(R+518)){{goto L51dd86;}}
}
B51dcde:L51dcde:{c.instructions+=4;NFSU2_TR(0x51dcde);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dce2:{NFSU2_TR(0x51dce2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B51dce4:{NFSU2_TR(0x51dce4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51dce9:{NFSU2_TR(0x51dce9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51dd27;}}
}
B51dceb:L51dceb:{c.instructions+=1;NFSU2_TR(0x51dceb);
if(r1(R+518)){{goto L51dd20;}}
}
B51dced:L51dced:{c.instructions+=2;NFSU2_TR(0x51dced);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51dcf2:{NFSU2_TR(0x51dcf2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L51dd12;}}
}
B51dcf4:L51dcf4:{c.instructions+=1;NFSU2_TR(0x51dcf4);
if(r1(R+518)){{goto L51dd0b;}}
}
B51dcf6:L51dcf6:{c.instructions+=2;NFSU2_TR(0x51dcf6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51dcfb:{NFSU2_TR(0x51dcfb);
if(r1(R+518)){{goto L51dd04;}}
}
B51dcfd:L51dcfd:{c.instructions+=2;NFSU2_TR(0x51dcfd);
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
B51dd02:{NFSU2_TR(0x51dd02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51dd4f;}}
}
B51dd04:L51dd04:{c.instructions+=2;NFSU2_TR(0x51dd04);
w4(R+4,u32(0x8ull));
}
B51dd09:{NFSU2_TR(0x51dd09);
{goto L51dd4f;}
}
B51dd0b:L51dd0b:{c.instructions+=2;NFSU2_TR(0x51dd0b);
w4(R+4,u32(0x6ull));
}
B51dd10:{NFSU2_TR(0x51dd10);
{goto L51dd4f;}
}
B51dd12:L51dd12:{c.instructions+=2;NFSU2_TR(0x51dd12);
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
B51dd17:{NFSU2_TR(0x51dd17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51dd4f;}}
}
B51dd19:L51dd19:{c.instructions+=2;NFSU2_TR(0x51dd19);
w4(R+4,u32(0xaull));
}
B51dd1e:{NFSU2_TR(0x51dd1e);
{goto L51dd4f;}
}
B51dd20:L51dd20:{c.instructions+=2;NFSU2_TR(0x51dd20);
w4(R+4,u32(0x7ull));
}
B51dd25:{NFSU2_TR(0x51dd25);
{goto L51dd4f;}
}
B51dd27:L51dd27:{c.instructions+=2;NFSU2_TR(0x51dd27);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51dd2c:{NFSU2_TR(0x51dd2c);
if(r1(R+518)){{goto L51dd4a;}}
}
B51dd2e:L51dd2e:{c.instructions+=2;NFSU2_TR(0x51dd2e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51dd33:{NFSU2_TR(0x51dd33);
if(r1(R+518)){{goto L51dd43;}}
}
B51dd35:L51dd35:{c.instructions+=2;NFSU2_TR(0x51dd35);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51dd3a:{NFSU2_TR(0x51dd3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51dd4f;}}
}
B51dd3c:L51dd3c:{c.instructions+=2;NFSU2_TR(0x51dd3c);
w4(R+4,u32(0x9ull));
}
B51dd41:{NFSU2_TR(0x51dd41);
{goto L51dd4f;}
}
B51dd43:L51dd43:{c.instructions+=2;NFSU2_TR(0x51dd43);
w4(R+4,u32(0x5ull));
}
B51dd48:{NFSU2_TR(0x51dd48);
{goto L51dd4f;}
}
B51dd4a:L51dd4a:{c.instructions+=1;NFSU2_TR(0x51dd4a);
w4(R+4,u32(0x4ull));
}
B51dd4f:L51dd4f:{c.instructions+=11;NFSU2_TR(0x51dd4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51dd51:{NFSU2_TR(0x51dd51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd52:{NFSU2_TR(0x51dd52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dd56:{NFSU2_TR(0x51dd56);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd57:{NFSU2_TR(0x51dd57);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dd5b:{NFSU2_TR(0x51dd5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd5c:{NFSU2_TR(0x51dd5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dd60:{NFSU2_TR(0x51dd60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd61:{NFSU2_TR(0x51dd61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd62:{NFSU2_TR(0x51dd62);
__builtin_memmove((R+4),(R+24),4);
}
B51dd64:{NFSU2_TR(0x51dd64);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dd67ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B51dd67:L51dd67:{c.instructions+=5;NFSU2_TR(0x51dd67);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51dd6a:{NFSU2_TR(0x51dd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51dd6d:{NFSU2_TR(0x51dd6d);
u8 U[13];
w4(U+0,u32(u32(u32(0x837fe0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B51dd75:{NFSU2_TR(0x51dd75);
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
B51dd78:{NFSU2_TR(0x51dd78);
if(r1(R+518)){{goto L51dd86;}}
}
B51dd7a:L51dd7a:{c.instructions+=3;NFSU2_TR(0x51dd7a);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B51dd80:{NFSU2_TR(0x51dd80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd81:{NFSU2_TR(0x51dd81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dd86ull));
TAIL_STATIC(0x458520u,458);
}
B51dd86:L51dd86:{c.instructions+=2;NFSU2_TR(0x51dd86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dd87:{NFSU2_TR(0x51dd87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dd90:L51dd90:{c.instructions+=5;NFSU2_TR(0x51dd90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dd91:{NFSU2_TR(0x51dd91);
__builtin_memmove((R+24),(R+4),4);
}
B51dd93:{NFSU2_TR(0x51dd93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dd96:{NFSU2_TR(0x51dd96);
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
B51dd98:{NFSU2_TR(0x51dd98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51de21;}}
}
B51dd9e:L51dd9e:{c.instructions+=7;NFSU2_TR(0x51dd9e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dda2:{NFSU2_TR(0x51dda2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dda3:{NFSU2_TR(0x51dda3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51dda7:{NFSU2_TR(0x51dda7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51dda9:{NFSU2_TR(0x51dda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ddac:{NFSU2_TR(0x51ddac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ddaf:{NFSU2_TR(0x51ddaf);
if(r1(R+518)){{goto L51ddb9;}}
}
B51ddb1:L51ddb1:{c.instructions+=2;NFSU2_TR(0x51ddb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51ddb3:{NFSU2_TR(0x51ddb3);
if(r1(R+518)){{goto L51ddb9;}}
}
B51ddb5:L51ddb5:{c.instructions+=2;NFSU2_TR(0x51ddb5);
__builtin_memmove((R+0),(R+28),4);
}
B51ddb7:{NFSU2_TR(0x51ddb7);
{goto L51ddbb;}
}
B51ddb9:L51ddb9:{c.instructions+=1;NFSU2_TR(0x51ddb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51ddbb:L51ddbb:{c.instructions+=9;NFSU2_TR(0x51ddbb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51ddbf:{NFSU2_TR(0x51ddbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ddc2:{NFSU2_TR(0x51ddc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51ddc6:{NFSU2_TR(0x51ddc6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B51ddc8:{NFSU2_TR(0x51ddc8);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51ddce:{NFSU2_TR(0x51ddce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51ddd1:{NFSU2_TR(0x51ddd1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51ddd3:{NFSU2_TR(0x51ddd3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B51ddd6:{NFSU2_TR(0x51ddd6);
if(r1(R+514)){{goto L51dde1;}}
}
B51ddd8:L51ddd8:{c.instructions+=3;NFSU2_TR(0x51ddd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dddc:{NFSU2_TR(0x51dddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dddf:{NFSU2_TR(0x51dddf);
{goto L51dde8;}
}
B51dde1:L51dde1:{c.instructions+=2;NFSU2_TR(0x51dde1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51dde5:{NFSU2_TR(0x51dde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dde8:L51dde8:{c.instructions+=4;NFSU2_TR(0x51dde8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51ddec:{NFSU2_TR(0x51ddec);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B51ddf2:{NFSU2_TR(0x51ddf2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B51ddf8:{NFSU2_TR(0x51ddf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ddfdull));
TAIL_STATIC(0x75bed4u,75b);
}
B51ddfd:L51ddfd:{c.instructions+=5;NFSU2_TR(0x51ddfd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51ddff:{NFSU2_TR(0x51ddff);
u8 U[4];
w4(U+0,u32(0x79b2ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de04:{NFSU2_TR(0x51de04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de05:{NFSU2_TR(0x51de05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51de08:{NFSU2_TR(0x51de08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51de0dull));
TAIL_STATIC(0x51cf70u,51c);
}
B51de0d:L51de0d:{c.instructions+=5;NFSU2_TR(0x51de0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51de10:{NFSU2_TR(0x51de10);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de12:{NFSU2_TR(0x51de12);
u8 U[4];
w4(U+0,u32(0x79b2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de17:{NFSU2_TR(0x51de17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de18:{NFSU2_TR(0x51de18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51de1dull));
TAIL_STATIC(0x51cf70u,51c);
}
B51de1d:L51de1d:{c.instructions+=2;NFSU2_TR(0x51de1d);
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
B51de20:{NFSU2_TR(0x51de20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51de21:L51de21:{c.instructions+=2;NFSU2_TR(0x51de21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51de22:{NFSU2_TR(0x51de22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51de30:L51de30:{c.instructions+=6;NFSU2_TR(0x51de30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51de34:{NFSU2_TR(0x51de34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51de38:{NFSU2_TR(0x51de38);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51de3b:{NFSU2_TR(0x51de3b);
u8 U[13];
w4(U+0,u32(u32(u32(0x837fe0ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B51de43:{NFSU2_TR(0x51de43);
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
B51de46:{NFSU2_TR(0x51de46);
if(r1(R+518)){{goto L51de54;}}
}
B51de48:L51de48:{c.instructions+=3;NFSU2_TR(0x51de48);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B51de4e:{NFSU2_TR(0x51de4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de4f:{NFSU2_TR(0x51de4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51de54ull));
TAIL_STATIC(0x458520u,458);
}
B51de54:L51de54:{c.instructions+=1;NFSU2_TR(0x51de54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51de60:L51de60:{c.instructions+=5;NFSU2_TR(0x51de60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51de64:{NFSU2_TR(0x51de64);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1bull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B51de67:{NFSU2_TR(0x51de67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837fe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B51de6e:{NFSU2_TR(0x51de6e);
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
B51de71:{NFSU2_TR(0x51de71);
if(r1(R+518)){{goto L51de7f;}}
}
B51de73:L51de73:{c.instructions+=3;NFSU2_TR(0x51de73);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B51de79:{NFSU2_TR(0x51de79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de7a:{NFSU2_TR(0x51de7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51de7full));
TAIL_STATIC(0x458520u,458);
}
B51de7f:L51de7f:{c.instructions+=1;NFSU2_TR(0x51de7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51de80:L51de80:{c.instructions+=4;NFSU2_TR(0x51de80);
__builtin_memmove((R+0),(R+4),4);
}
B51de82:{NFSU2_TR(0x51de82);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51de88:{NFSU2_TR(0x51de88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51de8f:{NFSU2_TR(0x51de8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51de90:L51de90:{c.instructions+=6;NFSU2_TR(0x51de90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51de91:{NFSU2_TR(0x51de91);
__builtin_memmove((R+24),(R+4),4);
}
B51de93:{NFSU2_TR(0x51de93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51de95:{NFSU2_TR(0x51de95);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51de97:{NFSU2_TR(0x51de97);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51de99:{NFSU2_TR(0x51de99);
if(r1(R+518)){{goto L51dea8;}}
}
B51de9b:L51de9b:{c.instructions+=2;NFSU2_TR(0x51de9b);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(r2(R+0))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B51de9e:{NFSU2_TR(0x51de9e);
if(r1(R+518)){{goto L51dea8;}}
}
B51dea0:L51dea0:{c.instructions+=3;NFSU2_TR(0x51dea0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51dea1:{NFSU2_TR(0x51dea1);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B51dea6:{NFSU2_TR(0x51dea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51dea0u);}goto L51dea0;}}
}
B51dea8:L51dea8:{c.instructions+=3;NFSU2_TR(0x51dea8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51deac:{NFSU2_TR(0x51deac);
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
B51deae:{NFSU2_TR(0x51deae);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51ded7;}}
}
B51deb0:L51deb0:{c.instructions+=5;NFSU2_TR(0x51deb0);
u8 U[12];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B51deb4:{NFSU2_TR(0x51deb4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51deb5:{NFSU2_TR(0x51deb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51deb6:{NFSU2_TR(0x51deb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51deb9:{NFSU2_TR(0x51deb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51debeull));
TAIL_STATIC(0x575620u,575);
}
B51debe:L51debe:{c.instructions+=5;NFSU2_TR(0x51debe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B51dec0:{NFSU2_TR(0x51dec0);
__builtin_memmove((R+28),(R+0),4);
}
B51dec2:{NFSU2_TR(0x51dec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dec3:{NFSU2_TR(0x51dec3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dec4:{NFSU2_TR(0x51dec4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dec9ull));
TAIL_STATIC(0x511630u,511);
}
B51dec9:L51dec9:{c.instructions+=3;NFSU2_TR(0x51dec9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51decb:{NFSU2_TR(0x51decb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51decc:{NFSU2_TR(0x51decc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51ded1ull));
TAIL_STATIC(0x575630u,575);
}
B51ded1:L51ded1:{c.instructions+=3;NFSU2_TR(0x51ded1);
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
B51ded4:{NFSU2_TR(0x51ded4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B51ded6:{NFSU2_TR(0x51ded6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51ded7:L51ded7:{c.instructions+=2;NFSU2_TR(0x51ded7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51ded8:{NFSU2_TR(0x51ded8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dee0:L51dee0:{c.instructions+=5;NFSU2_TR(0x51dee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51dee4:{NFSU2_TR(0x51dee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dee5:{NFSU2_TR(0x51dee5);
__builtin_memmove((R+24),(R+4),4);
}
B51dee7:{NFSU2_TR(0x51dee7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51deea:{NFSU2_TR(0x51deea);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51def4;}}
}
B51deec:L51deec:{c.instructions+=3;NFSU2_TR(0x51deec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51deed:{NFSU2_TR(0x51deed);
__builtin_memmove((R+4),(R+24),4);
}
B51deef:{NFSU2_TR(0x51deef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51def4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51de90u);}goto L51de90;}
}
B51def4:L51def4:{c.instructions+=3;NFSU2_TR(0x51def4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51def6:{NFSU2_TR(0x51def6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51def7:{NFSU2_TR(0x51def7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51df00:L51df00:{c.instructions+=6;NFSU2_TR(0x51df00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51df04:{NFSU2_TR(0x51df04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51df07:{NFSU2_TR(0x51df07);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51df09:{NFSU2_TR(0x51df09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df0a:{NFSU2_TR(0x51df0a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df0c:{NFSU2_TR(0x51df0c);
if(r1(R+518)){{goto L51df33;}}
}
B51df0e:L51df0e:{c.instructions+=4;NFSU2_TR(0x51df0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51df12:{NFSU2_TR(0x51df12);
u8 U[4];
w4(U+0,u32(0x78f614ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df17:{NFSU2_TR(0x51df17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df18:{NFSU2_TR(0x51df18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51df1dull));
TAIL_STATIC(0x51cf70u,51c);
}
B51df1d:L51df1d:{c.instructions+=5;NFSU2_TR(0x51df1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51df21:{NFSU2_TR(0x51df21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df23:{NFSU2_TR(0x51df23);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df28:{NFSU2_TR(0x51df28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df29:{NFSU2_TR(0x51df29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51df2eull));
TAIL_STATIC(0x51cf70u,51c);
}
B51df2e:L51df2e:{c.instructions+=3;NFSU2_TR(0x51df2e);
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
B51df31:{NFSU2_TR(0x51df31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51df32:{NFSU2_TR(0x51df32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51df33:L51df33:{c.instructions+=4;NFSU2_TR(0x51df33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B51df36:{NFSU2_TR(0x51df36);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51df38:{NFSU2_TR(0x51df38);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df3d:{NFSU2_TR(0x51df3d);
if(r1(R+518)){{goto L51df96;}}
}
B51df3f:L51df3f:{c.instructions+=3;NFSU2_TR(0x51df3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51df43:{NFSU2_TR(0x51df43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df44:{NFSU2_TR(0x51df44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51df49ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51df49:L51df49:{c.instructions+=2;NFSU2_TR(0x51df49);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df4e:{NFSU2_TR(0x51df4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51df53ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B51df53:L51df53:{c.instructions+=4;NFSU2_TR(0x51df53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B51df57:{NFSU2_TR(0x51df57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B51df5a:{NFSU2_TR(0x51df5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51df5c:{NFSU2_TR(0x51df5c);
if(r1(R+518)){{goto L51df72;}}
}
B51df5e:L51df5e:{c.instructions+=3;NFSU2_TR(0x51df5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51df61:{NFSU2_TR(0x51df61);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51df63:{NFSU2_TR(0x51df63);
if(r1(R+518)){{goto L51df72;}}
}
B51df65:L51df65:{c.instructions+=2;NFSU2_TR(0x51df65);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B51df68:{NFSU2_TR(0x51df68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51df72;}}
}
B51df6a:L51df6a:{c.instructions+=3;NFSU2_TR(0x51df6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51df6d:{NFSU2_TR(0x51df6d);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B51df70:{NFSU2_TR(0x51df70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L51dfb4;}}
}
B51df72:L51df72:{c.instructions+=3;NFSU2_TR(0x51df72);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df77:{NFSU2_TR(0x51df77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df78:{NFSU2_TR(0x51df78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51df7dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x51d040u);}goto L51d040;}
}
B51df7d:L51df7d:{c.instructions+=3;NFSU2_TR(0x51df7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B51df80:{NFSU2_TR(0x51df80);
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
B51df82:{NFSU2_TR(0x51df82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51dfb4;}}
}
B51df84:L51df84:{c.instructions+=4;NFSU2_TR(0x51df84);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df86:{NFSU2_TR(0x51df86);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df8b:{NFSU2_TR(0x51df8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df8c:{NFSU2_TR(0x51df8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51df91ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51df91:L51df91:{c.instructions+=3;NFSU2_TR(0x51df91);
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
B51df94:{NFSU2_TR(0x51df94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51df95:{NFSU2_TR(0x51df95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51df96:L51df96:{c.instructions+=3;NFSU2_TR(0x51df96);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51df9a:{NFSU2_TR(0x51df9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51df9b:{NFSU2_TR(0x51df9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dfa0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51dfa0:L51dfa0:{c.instructions+=5;NFSU2_TR(0x51dfa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51dfa4:{NFSU2_TR(0x51dfa4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dfa6:{NFSU2_TR(0x51dfa6);
u8 U[4];
w4(U+0,u32(0x79053cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dfab:{NFSU2_TR(0x51dfab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dfac:{NFSU2_TR(0x51dfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51dfb1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B51dfb1:L51dfb1:{c.instructions+=1;NFSU2_TR(0x51dfb1);
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
B51dfb4:L51dfb4:{c.instructions+=2;NFSU2_TR(0x51dfb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51dfb5:{NFSU2_TR(0x51dfb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51dfc0:L51dfc0:{c.instructions+=19;NFSU2_TR(0x51dfc0);
__builtin_memmove((R+0),(R+4),4);
}
B51dfc2:{NFSU2_TR(0x51dfc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dfc6:{NFSU2_TR(0x51dfc6);
u8 U[4];
w4(U+0,u32(0x790b98ull));
s4(u32(r4(R+0)),r4(U+0));
}
B51dfcc:{NFSU2_TR(0x51dfcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51dfce:{NFSU2_TR(0x51dfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dfd1:{NFSU2_TR(0x51dfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dfd4:{NFSU2_TR(0x51dfd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dfd7:{NFSU2_TR(0x51dfd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51dfdb:{NFSU2_TR(0x51dfdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51dfdd:{NFSU2_TR(0x51dfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dfe0:{NFSU2_TR(0x51dfe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B51dfe3:{NFSU2_TR(0x51dfe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51dfe6:{NFSU2_TR(0x51dfe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0xc38a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51dfed:{NFSU2_TR(0x51dfed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
w4(U+4,u32(0xc1200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51dff4:{NFSU2_TR(0x51dff4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51dff5:{NFSU2_TR(0x51dff5);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B51dff9:{NFSU2_TR(0x51dff9);
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
B51dffb:{NFSU2_TR(0x51dffb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B51dffe:{NFSU2_TR(0x51dffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x51e001u,51e);
}
XIT:NFSU2_TR_EXIT(0x51d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
