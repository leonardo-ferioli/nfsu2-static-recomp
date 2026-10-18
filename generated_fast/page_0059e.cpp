#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59c(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ad(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x59e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x59e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_59e(u8* __restrict R,Cpu& c);
u32 page_59e(Cpu& c){return body_59e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_59e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x59e001:goto L59e001;
case 0x59e004:c.instructions+=9;goto B59e004;
case 0x59e007:c.instructions+=8;goto B59e007;
case 0x59e009:c.instructions+=7;goto B59e009;
case 0x59e00b:c.instructions+=6;goto B59e00b;
case 0x59e00e:c.instructions+=5;goto B59e00e;
case 0x59e00f:c.instructions+=4;goto B59e00f;
case 0x59e012:c.instructions+=3;goto B59e012;
case 0x59e013:c.instructions+=2;goto B59e013;
case 0x59e016:c.instructions+=1;goto B59e016;
case 0x59e020:goto L59e020;
case 0x59e021:c.instructions+=9;goto B59e021;
case 0x59e025:c.instructions+=8;goto B59e025;
case 0x59e026:c.instructions+=7;goto B59e026;
case 0x59e027:c.instructions+=6;goto B59e027;
case 0x59e02c:c.instructions+=5;goto B59e02c;
case 0x59e02e:c.instructions+=4;goto B59e02e;
case 0x59e030:c.instructions+=3;goto B59e030;
case 0x59e031:c.instructions+=2;goto B59e031;
case 0x59e033:c.instructions+=1;goto B59e033;
case 0x59e038:goto L59e038;
case 0x59e03b:c.instructions+=3;goto B59e03b;
case 0x59e03c:c.instructions+=2;goto B59e03c;
case 0x59e03e:c.instructions+=1;goto B59e03e;
case 0x59e043:goto L59e043;
case 0x59e046:c.instructions+=3;goto B59e046;
case 0x59e047:c.instructions+=2;goto B59e047;
case 0x59e049:c.instructions+=1;goto B59e049;
case 0x59e04e:goto L59e04e;
case 0x59e051:c.instructions+=2;goto B59e051;
case 0x59e054:c.instructions+=1;goto B59e054;
case 0x59e056:goto L59e056;
case 0x59e059:c.instructions+=11;goto B59e059;
case 0x59e05b:c.instructions+=10;goto B59e05b;
case 0x59e05e:c.instructions+=9;goto B59e05e;
case 0x59e061:c.instructions+=8;goto B59e061;
case 0x59e063:c.instructions+=7;goto B59e063;
case 0x59e066:c.instructions+=6;goto B59e066;
case 0x59e069:c.instructions+=5;goto B59e069;
case 0x59e06c:c.instructions+=4;goto B59e06c;
case 0x59e06d:c.instructions+=3;goto B59e06d;
case 0x59e06f:c.instructions+=2;goto B59e06f;
case 0x59e074:c.instructions+=1;goto B59e074;
case 0x59e077:goto L59e077;
case 0x59e079:goto L59e079;
case 0x59e07f:c.instructions+=8;goto B59e07f;
case 0x59e085:c.instructions+=7;goto B59e085;
case 0x59e08b:c.instructions+=6;goto B59e08b;
case 0x59e091:c.instructions+=5;goto B59e091;
case 0x59e097:c.instructions+=4;goto B59e097;
case 0x59e09d:c.instructions+=3;goto B59e09d;
case 0x59e0a3:c.instructions+=2;goto B59e0a3;
case 0x59e0a9:c.instructions+=1;goto B59e0a9;
case 0x59e0aa:goto L59e0aa;
case 0x59e0ac:c.instructions+=1;goto B59e0ac;
case 0x59e0b1:goto L59e0b1;
case 0x59e0b2:c.instructions+=3;goto B59e0b2;
case 0x59e0b3:c.instructions+=2;goto B59e0b3;
case 0x59e0b4:c.instructions+=1;goto B59e0b4;
case 0x59e0c0:goto L59e0c0;
case 0x59e0c1:c.instructions+=27;goto B59e0c1;
case 0x59e0c3:c.instructions+=26;goto B59e0c3;
case 0x59e0c6:c.instructions+=25;goto B59e0c6;
case 0x59e0c9:c.instructions+=24;goto B59e0c9;
case 0x59e0cf:c.instructions+=23;goto B59e0cf;
case 0x59e0d2:c.instructions+=22;goto B59e0d2;
case 0x59e0d8:c.instructions+=21;goto B59e0d8;
case 0x59e0db:c.instructions+=20;goto B59e0db;
case 0x59e0e1:c.instructions+=19;goto B59e0e1;
case 0x59e0e3:c.instructions+=18;goto B59e0e3;
case 0x59e0e9:c.instructions+=17;goto B59e0e9;
case 0x59e0ee:c.instructions+=16;goto B59e0ee;
case 0x59e0f1:c.instructions+=15;goto B59e0f1;
case 0x59e0f4:c.instructions+=14;goto B59e0f4;
case 0x59e0f7:c.instructions+=13;goto B59e0f7;
case 0x59e0fa:c.instructions+=12;goto B59e0fa;
case 0x59e0fe:c.instructions+=11;goto B59e0fe;
case 0x59e102:c.instructions+=10;goto B59e102;
case 0x59e104:c.instructions+=9;goto B59e104;
case 0x59e10a:c.instructions+=8;goto B59e10a;
case 0x59e110:c.instructions+=7;goto B59e110;
case 0x59e116:c.instructions+=6;goto B59e116;
case 0x59e11c:c.instructions+=5;goto B59e11c;
case 0x59e11f:c.instructions+=4;goto B59e11f;
case 0x59e125:c.instructions+=3;goto B59e125;
case 0x59e127:c.instructions+=2;goto B59e127;
case 0x59e128:c.instructions+=1;goto B59e128;
case 0x59e130:goto L59e130;
case 0x59e134:c.instructions+=3;goto B59e134;
case 0x59e13a:c.instructions+=2;goto B59e13a;
case 0x59e141:c.instructions+=1;goto B59e141;
case 0x59e150:goto L59e150;
case 0x59e151:c.instructions+=10;goto B59e151;
case 0x59e153:c.instructions+=9;goto B59e153;
case 0x59e156:c.instructions+=8;goto B59e156;
case 0x59e159:c.instructions+=7;goto B59e159;
case 0x59e15c:c.instructions+=6;goto B59e15c;
case 0x59e15f:c.instructions+=5;goto B59e15f;
case 0x59e160:c.instructions+=4;goto B59e160;
case 0x59e161:c.instructions+=3;goto B59e161;
case 0x59e165:c.instructions+=2;goto B59e165;
case 0x59e166:c.instructions+=1;goto B59e166;
case 0x59e16b:goto L59e16b;
case 0x59e16f:c.instructions+=15;goto B59e16f;
case 0x59e172:c.instructions+=14;goto B59e172;
case 0x59e174:c.instructions+=13;goto B59e174;
case 0x59e177:c.instructions+=12;goto B59e177;
case 0x59e17a:c.instructions+=11;goto B59e17a;
case 0x59e17e:c.instructions+=10;goto B59e17e;
case 0x59e181:c.instructions+=9;goto B59e181;
case 0x59e184:c.instructions+=8;goto B59e184;
case 0x59e188:c.instructions+=7;goto B59e188;
case 0x59e18a:c.instructions+=6;goto B59e18a;
case 0x59e18c:c.instructions+=5;goto B59e18c;
case 0x59e18f:c.instructions+=4;goto B59e18f;
case 0x59e192:c.instructions+=3;goto B59e192;
case 0x59e194:c.instructions+=2;goto B59e194;
case 0x59e195:c.instructions+=1;goto B59e195;
case 0x59e1a0:goto L59e1a0;
case 0x59e1a1:c.instructions+=14;goto B59e1a1;
case 0x59e1a3:c.instructions+=13;goto B59e1a3;
case 0x59e1a6:c.instructions+=12;goto B59e1a6;
case 0x59e1a9:c.instructions+=11;goto B59e1a9;
case 0x59e1aa:c.instructions+=10;goto B59e1aa;
case 0x59e1ac:c.instructions+=9;goto B59e1ac;
case 0x59e1b2:c.instructions+=8;goto B59e1b2;
case 0x59e1b3:c.instructions+=7;goto B59e1b3;
case 0x59e1b6:c.instructions+=6;goto B59e1b6;
case 0x59e1b7:c.instructions+=5;goto B59e1b7;
case 0x59e1ba:c.instructions+=4;goto B59e1ba;
case 0x59e1bb:c.instructions+=3;goto B59e1bb;
case 0x59e1bf:c.instructions+=2;goto B59e1bf;
case 0x59e1c0:c.instructions+=1;goto B59e1c0;
case 0x59e1c5:goto L59e1c5;
case 0x59e1cb:c.instructions+=7;goto B59e1cb;
case 0x59e1cf:c.instructions+=6;goto B59e1cf;
case 0x59e1d0:c.instructions+=5;goto B59e1d0;
case 0x59e1d6:c.instructions+=4;goto B59e1d6;
case 0x59e1d7:c.instructions+=3;goto B59e1d7;
case 0x59e1db:c.instructions+=2;goto B59e1db;
case 0x59e1dc:c.instructions+=1;goto B59e1dc;
case 0x59e1e1:goto L59e1e1;
case 0x59e1e5:c.instructions+=32;goto B59e1e5;
case 0x59e1eb:c.instructions+=31;goto B59e1eb;
case 0x59e1f1:c.instructions+=30;goto B59e1f1;
case 0x59e1f7:c.instructions+=29;goto B59e1f7;
case 0x59e1fd:c.instructions+=28;goto B59e1fd;
case 0x59e201:c.instructions+=27;goto B59e201;
case 0x59e207:c.instructions+=26;goto B59e207;
case 0x59e20c:c.instructions+=25;goto B59e20c;
case 0x59e210:c.instructions+=24;goto B59e210;
case 0x59e214:c.instructions+=23;goto B59e214;
case 0x59e217:c.instructions+=22;goto B59e217;
case 0x59e21b:c.instructions+=21;goto B59e21b;
case 0x59e21d:c.instructions+=20;goto B59e21d;
case 0x59e221:c.instructions+=19;goto B59e221;
case 0x59e225:c.instructions+=18;goto B59e225;
case 0x59e228:c.instructions+=17;goto B59e228;
case 0x59e22c:c.instructions+=16;goto B59e22c;
case 0x59e22f:c.instructions+=15;goto B59e22f;
case 0x59e233:c.instructions+=14;goto B59e233;
case 0x59e235:c.instructions+=13;goto B59e235;
case 0x59e239:c.instructions+=12;goto B59e239;
case 0x59e23b:c.instructions+=11;goto B59e23b;
case 0x59e23d:c.instructions+=10;goto B59e23d;
case 0x59e241:c.instructions+=9;goto B59e241;
case 0x59e245:c.instructions+=8;goto B59e245;
case 0x59e247:c.instructions+=7;goto B59e247;
case 0x59e249:c.instructions+=6;goto B59e249;
case 0x59e24b:c.instructions+=5;goto B59e24b;
case 0x59e24d:c.instructions+=4;goto B59e24d;
case 0x59e253:c.instructions+=3;goto B59e253;
case 0x59e255:c.instructions+=2;goto B59e255;
case 0x59e258:c.instructions+=1;goto B59e258;
case 0x59e25a:goto L59e25a;
case 0x59e25c:c.instructions+=6;goto B59e25c;
case 0x59e262:c.instructions+=5;goto B59e262;
case 0x59e263:c.instructions+=4;goto B59e263;
case 0x59e264:c.instructions+=3;goto B59e264;
case 0x59e266:c.instructions+=2;goto B59e266;
case 0x59e267:c.instructions+=1;goto B59e267;
case 0x59e268:goto L59e268;
case 0x59e26e:c.instructions+=17;goto B59e26e;
case 0x59e274:c.instructions+=16;goto B59e274;
case 0x59e276:c.instructions+=15;goto B59e276;
case 0x59e27b:c.instructions+=14;goto B59e27b;
case 0x59e27d:c.instructions+=13;goto B59e27d;
case 0x59e283:c.instructions+=12;goto B59e283;
case 0x59e287:c.instructions+=11;goto B59e287;
case 0x59e289:c.instructions+=10;goto B59e289;
case 0x59e28d:c.instructions+=9;goto B59e28d;
case 0x59e291:c.instructions+=8;goto B59e291;
case 0x59e295:c.instructions+=7;goto B59e295;
case 0x59e299:c.instructions+=6;goto B59e299;
case 0x59e29d:c.instructions+=5;goto B59e29d;
case 0x59e2a1:c.instructions+=4;goto B59e2a1;
case 0x59e2a5:c.instructions+=3;goto B59e2a5;
case 0x59e2a9:c.instructions+=2;goto B59e2a9;
case 0x59e2ad:c.instructions+=1;goto B59e2ad;
case 0x59e2af:goto L59e2af;
case 0x59e2b3:c.instructions+=4;goto B59e2b3;
case 0x59e2b4:c.instructions+=3;goto B59e2b4;
case 0x59e2b8:c.instructions+=2;goto B59e2b8;
case 0x59e2b9:c.instructions+=1;goto B59e2b9;
case 0x59e2be:goto L59e2be;
case 0x59e2c2:c.instructions+=5;goto B59e2c2;
case 0x59e2c3:c.instructions+=4;goto B59e2c3;
case 0x59e2c4:c.instructions+=3;goto B59e2c4;
case 0x59e2c6:c.instructions+=2;goto B59e2c6;
case 0x59e2c7:c.instructions+=1;goto B59e2c7;
case 0x59e2d0:goto L59e2d0;
case 0x59e2d1:c.instructions+=5;goto B59e2d1;
case 0x59e2d2:c.instructions+=4;goto B59e2d2;
case 0x59e2d4:c.instructions+=3;goto B59e2d4;
case 0x59e2d6:c.instructions+=2;goto B59e2d6;
case 0x59e2da:c.instructions+=1;goto B59e2da;
case 0x59e2dc:goto L59e2dc;
case 0x59e2dd:c.instructions+=1;goto B59e2dd;
case 0x59e2e0:goto L59e2e0;
case 0x59e2e2:c.instructions+=2;goto B59e2e2;
case 0x59e2e4:c.instructions+=1;goto B59e2e4;
case 0x59e2e6:goto L59e2e6;
case 0x59e2e8:c.instructions+=2;goto B59e2e8;
case 0x59e2ea:c.instructions+=1;goto B59e2ea;
case 0x59e2ec:goto L59e2ec;
case 0x59e2f0:c.instructions+=4;goto B59e2f0;
case 0x59e2f1:c.instructions+=3;goto B59e2f1;
case 0x59e2f4:c.instructions+=2;goto B59e2f4;
case 0x59e2f6:c.instructions+=1;goto B59e2f6;
case 0x59e2f8:goto L59e2f8;
case 0x59e2f9:goto L59e2f9;
case 0x59e2fa:c.instructions+=2;goto B59e2fa;
case 0x59e2fb:c.instructions+=1;goto B59e2fb;
case 0x59e300:goto L59e300;
case 0x59e301:c.instructions+=3;goto B59e301;
case 0x59e303:c.instructions+=2;goto B59e303;
case 0x59e307:c.instructions+=1;goto B59e307;
case 0x59e309:goto L59e309;
case 0x59e30c:c.instructions+=2;goto B59e30c;
case 0x59e30d:c.instructions+=1;goto B59e30d;
case 0x59e310:goto L59e310;
case 0x59e312:c.instructions+=2;goto B59e312;
case 0x59e314:c.instructions+=1;goto B59e314;
case 0x59e316:goto L59e316;
case 0x59e319:c.instructions+=1;goto B59e319;
case 0x59e31c:goto L59e31c;
case 0x59e320:c.instructions+=4;goto B59e320;
case 0x59e321:c.instructions+=3;goto B59e321;
case 0x59e324:c.instructions+=2;goto B59e324;
case 0x59e326:c.instructions+=1;goto B59e326;
case 0x59e328:goto L59e328;
case 0x59e329:goto L59e329;
case 0x59e32a:c.instructions+=1;goto B59e32a;
case 0x59e330:goto L59e330;
case 0x59e334:c.instructions+=6;goto B59e334;
case 0x59e338:c.instructions+=5;goto B59e338;
case 0x59e33c:c.instructions+=4;goto B59e33c;
case 0x59e33e:c.instructions+=3;goto B59e33e;
case 0x59e342:c.instructions+=2;goto B59e342;
case 0x59e345:c.instructions+=1;goto B59e345;
case 0x59e350:goto L59e350;
case 0x59e355:c.instructions+=2;goto B59e355;
case 0x59e356:c.instructions+=1;goto B59e356;
case 0x59e35b:goto L59e35b;
case 0x59e35e:c.instructions+=2;goto B59e35e;
case 0x59e361:c.instructions+=1;goto B59e361;
case 0x59e363:goto L59e363;
case 0x59e365:c.instructions+=1;goto B59e365;
case 0x59e36a:goto L59e36a;
case 0x59e36d:c.instructions+=1;goto B59e36d;
case 0x59e36e:goto L59e36e;
case 0x59e374:c.instructions+=3;goto B59e374;
case 0x59e377:c.instructions+=2;goto B59e377;
case 0x59e37d:c.instructions+=1;goto B59e37d;
case 0x59e37f:goto L59e37f;
case 0x59e380:c.instructions+=2;goto B59e380;
case 0x59e383:c.instructions+=1;goto B59e383;
case 0x59e384:goto L59e384;
case 0x59e386:goto L59e386;
case 0x59e388:c.instructions+=1;goto B59e388;
case 0x59e38d:goto L59e38d;
case 0x59e38e:goto L59e38e;
case 0x59e390:goto L59e390;
case 0x59e391:c.instructions+=7;goto B59e391;
case 0x59e392:c.instructions+=6;goto B59e392;
case 0x59e396:c.instructions+=5;goto B59e396;
case 0x59e39b:c.instructions+=4;goto B59e39b;
case 0x59e39d:c.instructions+=3;goto B59e39d;
case 0x59e39f:c.instructions+=2;goto B59e39f;
case 0x59e3a1:c.instructions+=1;goto B59e3a1;
case 0x59e3a6:goto L59e3a6;
case 0x59e3a9:c.instructions+=3;goto B59e3a9;
case 0x59e3ab:c.instructions+=2;goto B59e3ab;
case 0x59e3ad:c.instructions+=1;goto B59e3ad;
case 0x59e3af:goto L59e3af;
case 0x59e3b3:c.instructions+=2;goto B59e3b3;
case 0x59e3b4:c.instructions+=1;goto B59e3b4;
case 0x59e3b9:goto L59e3b9;
case 0x59e3bd:c.instructions+=7;goto B59e3bd;
case 0x59e3bf:c.instructions+=6;goto B59e3bf;
case 0x59e3c2:c.instructions+=5;goto B59e3c2;
case 0x59e3c5:c.instructions+=4;goto B59e3c5;
case 0x59e3c7:c.instructions+=3;goto B59e3c7;
case 0x59e3c9:c.instructions+=2;goto B59e3c9;
case 0x59e3cc:c.instructions+=1;goto B59e3cc;
case 0x59e3d1:goto L59e3d1;
case 0x59e3d2:c.instructions+=2;goto B59e3d2;
case 0x59e3d3:c.instructions+=1;goto B59e3d3;
case 0x59e3d6:goto L59e3d6;
case 0x59e3d9:c.instructions+=7;goto B59e3d9;
case 0x59e3dc:c.instructions+=6;goto B59e3dc;
case 0x59e3df:c.instructions+=5;goto B59e3df;
case 0x59e3e1:c.instructions+=4;goto B59e3e1;
case 0x59e3e5:c.instructions+=3;goto B59e3e5;
case 0x59e3e6:c.instructions+=2;goto B59e3e6;
case 0x59e3ea:c.instructions+=1;goto B59e3ea;
case 0x59e3ef:goto L59e3ef;
case 0x59e3f1:c.instructions+=1;goto B59e3f1;
case 0x59e3f6:goto L59e3f6;
case 0x59e3f7:c.instructions+=2;goto B59e3f7;
case 0x59e3f8:c.instructions+=1;goto B59e3f8;
case 0x59e400:goto L59e400;
case 0x59e402:c.instructions+=7;goto B59e402;
case 0x59e408:c.instructions+=6;goto B59e408;
case 0x59e40b:c.instructions+=5;goto B59e40b;
case 0x59e410:c.instructions+=4;goto B59e410;
case 0x59e411:c.instructions+=3;goto B59e411;
case 0x59e417:c.instructions+=2;goto B59e417;
case 0x59e41c:c.instructions+=1;goto B59e41c;
case 0x59e421:goto L59e421;
case 0x59e430:goto L59e430;
case 0x59e433:c.instructions+=38;goto B59e433;
case 0x59e436:c.instructions+=37;goto B59e436;
case 0x59e43c:c.instructions+=36;goto B59e43c;
case 0x59e442:c.instructions+=35;goto B59e442;
case 0x59e448:c.instructions+=34;goto B59e448;
case 0x59e44a:c.instructions+=33;goto B59e44a;
case 0x59e44c:c.instructions+=32;goto B59e44c;
case 0x59e44e:c.instructions+=31;goto B59e44e;
case 0x59e450:c.instructions+=30;goto B59e450;
case 0x59e452:c.instructions+=29;goto B59e452;
case 0x59e454:c.instructions+=28;goto B59e454;
case 0x59e456:c.instructions+=27;goto B59e456;
case 0x59e458:c.instructions+=26;goto B59e458;
case 0x59e45a:c.instructions+=25;goto B59e45a;
case 0x59e45c:c.instructions+=24;goto B59e45c;
case 0x59e45e:c.instructions+=23;goto B59e45e;
case 0x59e460:c.instructions+=22;goto B59e460;
case 0x59e464:c.instructions+=21;goto B59e464;
case 0x59e46a:c.instructions+=20;goto B59e46a;
case 0x59e470:c.instructions+=19;goto B59e470;
case 0x59e476:c.instructions+=18;goto B59e476;
case 0x59e478:c.instructions+=17;goto B59e478;
case 0x59e47a:c.instructions+=16;goto B59e47a;
case 0x59e47c:c.instructions+=15;goto B59e47c;
case 0x59e47e:c.instructions+=14;goto B59e47e;
case 0x59e480:c.instructions+=13;goto B59e480;
case 0x59e482:c.instructions+=12;goto B59e482;
case 0x59e484:c.instructions+=11;goto B59e484;
case 0x59e486:c.instructions+=10;goto B59e486;
case 0x59e488:c.instructions+=9;goto B59e488;
case 0x59e48a:c.instructions+=8;goto B59e48a;
case 0x59e48c:c.instructions+=7;goto B59e48c;
case 0x59e48e:c.instructions+=6;goto B59e48e;
case 0x59e492:c.instructions+=5;goto B59e492;
case 0x59e496:c.instructions+=4;goto B59e496;
case 0x59e49c:c.instructions+=3;goto B59e49c;
case 0x59e49e:c.instructions+=2;goto B59e49e;
case 0x59e4a1:c.instructions+=1;goto B59e4a1;
case 0x59e4a3:goto L59e4a3;
case 0x59e4a7:c.instructions+=4;goto B59e4a7;
case 0x59e4ad:c.instructions+=3;goto B59e4ad;
case 0x59e4af:c.instructions+=2;goto B59e4af;
case 0x59e4b2:c.instructions+=1;goto B59e4b2;
case 0x59e4b4:goto L59e4b4;
case 0x59e4b7:c.instructions+=2;goto B59e4b7;
case 0x59e4b9:c.instructions+=1;goto B59e4b9;
case 0x59e4bb:goto L59e4bb;
case 0x59e4c2:c.instructions+=1;goto B59e4c2;
case 0x59e4c4:goto L59e4c4;
case 0x59e4c8:c.instructions+=4;goto B59e4c8;
case 0x59e4ce:c.instructions+=3;goto B59e4ce;
case 0x59e4d0:c.instructions+=2;goto B59e4d0;
case 0x59e4d3:c.instructions+=1;goto B59e4d3;
case 0x59e4d5:goto L59e4d5;
case 0x59e4d9:c.instructions+=4;goto B59e4d9;
case 0x59e4df:c.instructions+=3;goto B59e4df;
case 0x59e4e1:c.instructions+=2;goto B59e4e1;
case 0x59e4e4:c.instructions+=1;goto B59e4e4;
case 0x59e4e6:goto L59e4e6;
case 0x59e4eb:c.instructions+=8;goto B59e4eb;
case 0x59e4f1:c.instructions+=7;goto B59e4f1;
case 0x59e4f5:c.instructions+=6;goto B59e4f5;
case 0x59e4f9:c.instructions+=5;goto B59e4f9;
case 0x59e4ff:c.instructions+=4;goto B59e4ff;
case 0x59e505:c.instructions+=3;goto B59e505;
case 0x59e507:c.instructions+=2;goto B59e507;
case 0x59e50a:c.instructions+=1;goto B59e50a;
case 0x59e50c:goto L59e50c;
case 0x59e511:c.instructions+=2;goto B59e511;
case 0x59e514:c.instructions+=1;goto B59e514;
case 0x59e515:goto L59e515;
case 0x59e51a:c.instructions+=2;goto B59e51a;
case 0x59e51d:c.instructions+=1;goto B59e51d;
case 0x59e51e:goto L59e51e;
case 0x59e520:c.instructions+=2;goto B59e520;
case 0x59e523:c.instructions+=1;goto B59e523;
case 0x59e530:goto L59e530;
case 0x59e534:c.instructions+=10;goto B59e534;
case 0x59e537:c.instructions+=9;goto B59e537;
case 0x59e53d:c.instructions+=8;goto B59e53d;
case 0x59e53e:c.instructions+=7;goto B59e53e;
case 0x59e541:c.instructions+=6;goto B59e541;
case 0x59e542:c.instructions+=5;goto B59e542;
case 0x59e543:c.instructions+=4;goto B59e543;
case 0x59e545:c.instructions+=3;goto B59e545;
case 0x59e547:c.instructions+=2;goto B59e547;
case 0x59e549:c.instructions+=1;goto B59e549;
case 0x59e54b:goto L59e54b;
case 0x59e551:goto L59e551;
case 0x59e557:c.instructions+=3;goto B59e557;
case 0x59e55a:c.instructions+=2;goto B59e55a;
case 0x59e55c:c.instructions+=1;goto B59e55c;
case 0x59e55e:goto L59e55e;
case 0x59e564:goto L59e564;
case 0x59e566:c.instructions+=1;goto B59e566;
case 0x59e568:goto L59e568;
case 0x59e56a:c.instructions+=1;goto B59e56a;
case 0x59e56c:goto L59e56c;
case 0x59e572:c.instructions+=1;goto B59e572;
case 0x59e578:goto L59e578;
case 0x59e57b:c.instructions+=6;goto B59e57b;
case 0x59e57c:c.instructions+=5;goto B59e57c;
case 0x59e57e:c.instructions+=4;goto B59e57e;
case 0x59e57f:c.instructions+=3;goto B59e57f;
case 0x59e582:c.instructions+=2;goto B59e582;
case 0x59e583:c.instructions+=1;goto B59e583;
case 0x59e590:goto L59e590;
case 0x59e593:c.instructions+=1;goto B59e593;
case 0x59e5a0:goto L59e5a0;
case 0x59e5a6:c.instructions+=2;goto B59e5a6;
case 0x59e5a8:c.instructions+=1;goto B59e5a8;
case 0x59e5aa:goto L59e5aa;
case 0x59e5ad:c.instructions+=4;goto B59e5ad;
case 0x59e5af:c.instructions+=3;goto B59e5af;
case 0x59e5b1:c.instructions+=2;goto B59e5b1;
case 0x59e5b4:c.instructions+=1;goto B59e5b4;
case 0x59e5b7:goto L59e5b7;
case 0x59e5ba:c.instructions+=2;goto B59e5ba;
case 0x59e5bc:c.instructions+=1;goto B59e5bc;
case 0x59e5be:goto L59e5be;
case 0x59e5c1:c.instructions+=3;goto B59e5c1;
case 0x59e5c4:c.instructions+=2;goto B59e5c4;
case 0x59e5c6:c.instructions+=1;goto B59e5c6;
case 0x59e5c8:goto L59e5c8;
case 0x59e5cd:c.instructions+=1;goto B59e5cd;
case 0x59e5d0:goto L59e5d0;
case 0x59e5d2:c.instructions+=1;goto B59e5d2;
case 0x59e5e0:goto L59e5e0;
case 0x59e5e1:c.instructions+=12;goto B59e5e1;
case 0x59e5e3:c.instructions+=11;goto B59e5e3;
case 0x59e5e6:c.instructions+=10;goto B59e5e6;
case 0x59e5e9:c.instructions+=9;goto B59e5e9;
case 0x59e5ec:c.instructions+=8;goto B59e5ec;
case 0x59e5ef:c.instructions+=7;goto B59e5ef;
case 0x59e5f2:c.instructions+=6;goto B59e5f2;
case 0x59e5f3:c.instructions+=5;goto B59e5f3;
case 0x59e5f4:c.instructions+=4;goto B59e5f4;
case 0x59e5f5:c.instructions+=3;goto B59e5f5;
case 0x59e5f9:c.instructions+=2;goto B59e5f9;
case 0x59e5fa:c.instructions+=1;goto B59e5fa;
case 0x59e5ff:goto L59e5ff;
case 0x59e603:c.instructions+=10;goto B59e603;
case 0x59e606:c.instructions+=9;goto B59e606;
case 0x59e60a:c.instructions+=8;goto B59e60a;
case 0x59e60c:c.instructions+=7;goto B59e60c;
case 0x59e610:c.instructions+=6;goto B59e610;
case 0x59e613:c.instructions+=5;goto B59e613;
case 0x59e616:c.instructions+=4;goto B59e616;
case 0x59e619:c.instructions+=3;goto B59e619;
case 0x59e61b:c.instructions+=2;goto B59e61b;
case 0x59e61c:c.instructions+=1;goto B59e61c;
case 0x59e620:goto L59e620;
case 0x59e621:c.instructions+=60;goto B59e621;
case 0x59e623:c.instructions+=59;goto B59e623;
case 0x59e626:c.instructions+=58;goto B59e626;
case 0x59e629:c.instructions+=57;goto B59e629;
case 0x59e62a:c.instructions+=56;goto B59e62a;
case 0x59e62b:c.instructions+=55;goto B59e62b;
case 0x59e62d:c.instructions+=54;goto B59e62d;
case 0x59e630:c.instructions+=53;goto B59e630;
case 0x59e636:c.instructions+=52;goto B59e636;
case 0x59e638:c.instructions+=51;goto B59e638;
case 0x59e63e:c.instructions+=50;goto B59e63e;
case 0x59e644:c.instructions+=49;goto B59e644;
case 0x59e64a:c.instructions+=48;goto B59e64a;
case 0x59e64e:c.instructions+=47;goto B59e64e;
case 0x59e650:c.instructions+=46;goto B59e650;
case 0x59e651:c.instructions+=45;goto B59e651;
case 0x59e653:c.instructions+=44;goto B59e653;
case 0x59e655:c.instructions+=43;goto B59e655;
case 0x59e657:c.instructions+=42;goto B59e657;
case 0x59e659:c.instructions+=41;goto B59e659;
case 0x59e65b:c.instructions+=40;goto B59e65b;
case 0x59e65d:c.instructions+=39;goto B59e65d;
case 0x59e65f:c.instructions+=38;goto B59e65f;
case 0x59e661:c.instructions+=37;goto B59e661;
case 0x59e663:c.instructions+=36;goto B59e663;
case 0x59e665:c.instructions+=35;goto B59e665;
case 0x59e667:c.instructions+=34;goto B59e667;
case 0x59e66a:c.instructions+=33;goto B59e66a;
case 0x59e66e:c.instructions+=32;goto B59e66e;
case 0x59e671:c.instructions+=31;goto B59e671;
case 0x59e674:c.instructions+=30;goto B59e674;
case 0x59e676:c.instructions+=29;goto B59e676;
case 0x59e679:c.instructions+=28;goto B59e679;
case 0x59e67d:c.instructions+=27;goto B59e67d;
case 0x59e683:c.instructions+=26;goto B59e683;
case 0x59e686:c.instructions+=25;goto B59e686;
case 0x59e68c:c.instructions+=24;goto B59e68c;
case 0x59e692:c.instructions+=23;goto B59e692;
case 0x59e694:c.instructions+=22;goto B59e694;
case 0x59e69a:c.instructions+=21;goto B59e69a;
case 0x59e69c:c.instructions+=20;goto B59e69c;
case 0x59e69f:c.instructions+=19;goto B59e69f;
case 0x59e6a1:c.instructions+=18;goto B59e6a1;
case 0x59e6a7:c.instructions+=17;goto B59e6a7;
case 0x59e6a9:c.instructions+=16;goto B59e6a9;
case 0x59e6af:c.instructions+=15;goto B59e6af;
case 0x59e6b7:c.instructions+=14;goto B59e6b7;
case 0x59e6bf:c.instructions+=13;goto B59e6bf;
case 0x59e6c7:c.instructions+=12;goto B59e6c7;
case 0x59e6c9:c.instructions+=11;goto B59e6c9;
case 0x59e6cb:c.instructions+=10;goto B59e6cb;
case 0x59e6ce:c.instructions+=9;goto B59e6ce;
case 0x59e6d2:c.instructions+=8;goto B59e6d2;
case 0x59e6d4:c.instructions+=7;goto B59e6d4;
case 0x59e6d7:c.instructions+=6;goto B59e6d7;
case 0x59e6d9:c.instructions+=5;goto B59e6d9;
case 0x59e6dc:c.instructions+=4;goto B59e6dc;
case 0x59e6e2:c.instructions+=3;goto B59e6e2;
case 0x59e6e4:c.instructions+=2;goto B59e6e4;
case 0x59e6e7:c.instructions+=1;goto B59e6e7;
case 0x59e6e9:goto L59e6e9;
case 0x59e6ef:c.instructions+=3;goto B59e6ef;
case 0x59e6f2:c.instructions+=2;goto B59e6f2;
case 0x59e6f8:c.instructions+=1;goto B59e6f8;
case 0x59e6fc:goto L59e6fc;
case 0x59e700:c.instructions+=4;goto B59e700;
case 0x59e701:c.instructions+=3;goto B59e701;
case 0x59e702:c.instructions+=2;goto B59e702;
case 0x59e705:c.instructions+=1;goto B59e705;
case 0x59e70a:goto L59e70a;
case 0x59e70d:c.instructions+=5;goto B59e70d;
case 0x59e710:c.instructions+=4;goto B59e710;
case 0x59e716:c.instructions+=3;goto B59e716;
case 0x59e718:c.instructions+=2;goto B59e718;
case 0x59e71b:c.instructions+=1;goto B59e71b;
case 0x59e71d:goto L59e71d;
case 0x59e71f:c.instructions+=1;goto B59e71f;
case 0x59e725:goto L59e725;
case 0x59e728:c.instructions+=4;goto B59e728;
case 0x59e72e:c.instructions+=3;goto B59e72e;
case 0x59e730:c.instructions+=2;goto B59e730;
case 0x59e733:c.instructions+=1;goto B59e733;
case 0x59e735:goto L59e735;
case 0x59e737:c.instructions+=1;goto B59e737;
case 0x59e73d:goto L59e73d;
case 0x59e743:c.instructions+=7;goto B59e743;
case 0x59e749:c.instructions+=6;goto B59e749;
case 0x59e74f:c.instructions+=5;goto B59e74f;
case 0x59e753:c.instructions+=4;goto B59e753;
case 0x59e759:c.instructions+=3;goto B59e759;
case 0x59e75b:c.instructions+=2;goto B59e75b;
case 0x59e75e:c.instructions+=1;goto B59e75e;
case 0x59e760:goto L59e760;
case 0x59e762:c.instructions+=10;goto B59e762;
case 0x59e764:c.instructions+=9;goto B59e764;
case 0x59e766:c.instructions+=8;goto B59e766;
case 0x59e76c:c.instructions+=7;goto B59e76c;
case 0x59e770:c.instructions+=6;goto B59e770;
case 0x59e774:c.instructions+=5;goto B59e774;
case 0x59e77a:c.instructions+=4;goto B59e77a;
case 0x59e780:c.instructions+=3;goto B59e780;
case 0x59e784:c.instructions+=2;goto B59e784;
case 0x59e78a:c.instructions+=1;goto B59e78a;
case 0x59e78e:goto L59e78e;
case 0x59e791:c.instructions+=10;goto B59e791;
case 0x59e793:c.instructions+=9;goto B59e793;
case 0x59e796:c.instructions+=8;goto B59e796;
case 0x59e798:c.instructions+=7;goto B59e798;
case 0x59e79a:c.instructions+=6;goto B59e79a;
case 0x59e79d:c.instructions+=5;goto B59e79d;
case 0x59e79f:c.instructions+=4;goto B59e79f;
case 0x59e7a5:c.instructions+=3;goto B59e7a5;
case 0x59e7a7:c.instructions+=2;goto B59e7a7;
case 0x59e7aa:c.instructions+=1;goto B59e7aa;
case 0x59e7ac:goto L59e7ac;
case 0x59e7ae:c.instructions+=1;goto B59e7ae;
case 0x59e7b4:goto L59e7b4;
case 0x59e7b9:c.instructions+=2;goto B59e7b9;
case 0x59e7bb:c.instructions+=1;goto B59e7bb;
case 0x59e7bd:goto L59e7bd;
case 0x59e7c2:c.instructions+=2;goto B59e7c2;
case 0x59e7c4:c.instructions+=1;goto B59e7c4;
case 0x59e7c6:goto L59e7c6;
case 0x59e7cb:c.instructions+=2;goto B59e7cb;
case 0x59e7cd:c.instructions+=1;goto B59e7cd;
case 0x59e7cf:goto L59e7cf;
case 0x59e7d4:c.instructions+=2;goto B59e7d4;
case 0x59e7d6:c.instructions+=1;goto B59e7d6;
case 0x59e7d8:goto L59e7d8;
case 0x59e7dd:c.instructions+=2;goto B59e7dd;
case 0x59e7df:c.instructions+=1;goto B59e7df;
case 0x59e7e1:goto L59e7e1;
case 0x59e7e3:c.instructions+=4;goto B59e7e3;
case 0x59e7e5:c.instructions+=3;goto B59e7e5;
case 0x59e7e7:c.instructions+=2;goto B59e7e7;
case 0x59e7e9:c.instructions+=1;goto B59e7e9;
case 0x59e7eb:goto L59e7eb;
case 0x59e7ed:c.instructions+=6;goto B59e7ed;
case 0x59e7ef:c.instructions+=5;goto B59e7ef;
case 0x59e7f5:c.instructions+=4;goto B59e7f5;
case 0x59e7f7:c.instructions+=3;goto B59e7f7;
case 0x59e7f9:c.instructions+=2;goto B59e7f9;
case 0x59e7fc:c.instructions+=1;goto B59e7fc;
case 0x59e7fe:goto L59e7fe;
case 0x59e800:c.instructions+=1;goto B59e800;
case 0x59e806:goto L59e806;
case 0x59e809:c.instructions+=5;goto B59e809;
case 0x59e80f:c.instructions+=4;goto B59e80f;
case 0x59e811:c.instructions+=3;goto B59e811;
case 0x59e814:c.instructions+=2;goto B59e814;
case 0x59e816:c.instructions+=1;goto B59e816;
case 0x59e818:goto L59e818;
case 0x59e81b:c.instructions+=12;goto B59e81b;
case 0x59e81e:c.instructions+=11;goto B59e81e;
case 0x59e820:c.instructions+=10;goto B59e820;
case 0x59e822:c.instructions+=9;goto B59e822;
case 0x59e824:c.instructions+=8;goto B59e824;
case 0x59e828:c.instructions+=7;goto B59e828;
case 0x59e82a:c.instructions+=6;goto B59e82a;
case 0x59e830:c.instructions+=5;goto B59e830;
case 0x59e832:c.instructions+=4;goto B59e832;
case 0x59e836:c.instructions+=3;goto B59e836;
case 0x59e83c:c.instructions+=2;goto B59e83c;
case 0x59e840:c.instructions+=1;goto B59e840;
case 0x59e842:goto L59e842;
case 0x59e844:c.instructions+=9;goto B59e844;
case 0x59e847:c.instructions+=8;goto B59e847;
case 0x59e849:c.instructions+=7;goto B59e849;
case 0x59e84d:c.instructions+=6;goto B59e84d;
case 0x59e851:c.instructions+=5;goto B59e851;
case 0x59e854:c.instructions+=4;goto B59e854;
case 0x59e856:c.instructions+=3;goto B59e856;
case 0x59e85a:c.instructions+=2;goto B59e85a;
case 0x59e85e:c.instructions+=1;goto B59e85e;
case 0x59e860:goto L59e860;
case 0x59e864:c.instructions+=18;goto B59e864;
case 0x59e868:c.instructions+=17;goto B59e868;
case 0x59e86b:c.instructions+=16;goto B59e86b;
case 0x59e86c:c.instructions+=15;goto B59e86c;
case 0x59e86f:c.instructions+=14;goto B59e86f;
case 0x59e873:c.instructions+=13;goto B59e873;
case 0x59e875:c.instructions+=12;goto B59e875;
case 0x59e876:c.instructions+=11;goto B59e876;
case 0x59e87a:c.instructions+=10;goto B59e87a;
case 0x59e87e:c.instructions+=9;goto B59e87e;
case 0x59e87f:c.instructions+=8;goto B59e87f;
case 0x59e882:c.instructions+=7;goto B59e882;
case 0x59e88a:c.instructions+=6;goto B59e88a;
case 0x59e892:c.instructions+=5;goto B59e892;
case 0x59e89a:c.instructions+=4;goto B59e89a;
case 0x59e89c:c.instructions+=3;goto B59e89c;
case 0x59e8a4:c.instructions+=2;goto B59e8a4;
case 0x59e8a8:c.instructions+=1;goto B59e8a8;
case 0x59e8ad:goto L59e8ad;
case 0x59e8b2:c.instructions+=4;goto B59e8b2;
case 0x59e8b6:c.instructions+=3;goto B59e8b6;
case 0x59e8b7:c.instructions+=2;goto B59e8b7;
case 0x59e8b8:c.instructions+=1;goto B59e8b8;
case 0x59e8bd:goto L59e8bd;
case 0x59e8c0:c.instructions+=6;goto B59e8c0;
case 0x59e8c4:c.instructions+=5;goto B59e8c4;
case 0x59e8c5:c.instructions+=4;goto B59e8c5;
case 0x59e8c9:c.instructions+=3;goto B59e8c9;
case 0x59e8ca:c.instructions+=2;goto B59e8ca;
case 0x59e8cc:c.instructions+=1;goto B59e8cc;
case 0x59e8d1:goto L59e8d1;
case 0x59e8d4:c.instructions+=7;goto B59e8d4;
case 0x59e8d8:c.instructions+=6;goto B59e8d8;
case 0x59e8d9:c.instructions+=5;goto B59e8d9;
case 0x59e8dc:c.instructions+=4;goto B59e8dc;
case 0x59e8e0:c.instructions+=3;goto B59e8e0;
case 0x59e8e1:c.instructions+=2;goto B59e8e1;
case 0x59e8e2:c.instructions+=1;goto B59e8e2;
case 0x59e8e7:goto L59e8e7;
case 0x59e8ec:c.instructions+=4;goto B59e8ec;
case 0x59e8f0:c.instructions+=3;goto B59e8f0;
case 0x59e8f1:c.instructions+=2;goto B59e8f1;
case 0x59e8f2:c.instructions+=1;goto B59e8f2;
case 0x59e8f7:goto L59e8f7;
case 0x59e8fa:c.instructions+=6;goto B59e8fa;
case 0x59e8fe:c.instructions+=5;goto B59e8fe;
case 0x59e8ff:c.instructions+=4;goto B59e8ff;
case 0x59e903:c.instructions+=3;goto B59e903;
case 0x59e904:c.instructions+=2;goto B59e904;
case 0x59e906:c.instructions+=1;goto B59e906;
case 0x59e90b:goto L59e90b;
case 0x59e90e:c.instructions+=2;goto B59e90e;
case 0x59e910:c.instructions+=1;goto B59e910;
case 0x59e912:goto L59e912;
case 0x59e916:c.instructions+=2;goto B59e916;
case 0x59e91a:c.instructions+=1;goto B59e91a;
case 0x59e91c:goto L59e91c;
case 0x59e91d:c.instructions+=5;goto B59e91d;
case 0x59e91e:c.instructions+=4;goto B59e91e;
case 0x59e91f:c.instructions+=3;goto B59e91f;
case 0x59e921:c.instructions+=2;goto B59e921;
case 0x59e922:c.instructions+=1;goto B59e922;
case 0x59e930:goto L59e930;
case 0x59e931:c.instructions+=8;goto B59e931;
case 0x59e932:c.instructions+=7;goto B59e932;
case 0x59e933:c.instructions+=6;goto B59e933;
case 0x59e937:c.instructions+=5;goto B59e937;
case 0x59e93c:c.instructions+=4;goto B59e93c;
case 0x59e93e:c.instructions+=3;goto B59e93e;
case 0x59e940:c.instructions+=2;goto B59e940;
case 0x59e942:c.instructions+=1;goto B59e942;
case 0x59e947:goto L59e947;
case 0x59e948:c.instructions+=2;goto B59e948;
case 0x59e94a:c.instructions+=1;goto B59e94a;
case 0x59e94f:goto L59e94f;
case 0x59e952:c.instructions+=3;goto B59e952;
case 0x59e953:c.instructions+=2;goto B59e953;
case 0x59e955:c.instructions+=1;goto B59e955;
case 0x59e95a:goto L59e95a;
case 0x59e95d:c.instructions+=3;goto B59e95d;
case 0x59e95e:c.instructions+=2;goto B59e95e;
case 0x59e960:c.instructions+=1;goto B59e960;
case 0x59e965:goto L59e965;
case 0x59e968:c.instructions+=3;goto B59e968;
case 0x59e969:c.instructions+=2;goto B59e969;
case 0x59e96b:c.instructions+=1;goto B59e96b;
case 0x59e970:goto L59e970;
case 0x59e973:c.instructions+=3;goto B59e973;
case 0x59e974:c.instructions+=2;goto B59e974;
case 0x59e976:c.instructions+=1;goto B59e976;
case 0x59e97b:goto L59e97b;
case 0x59e97e:c.instructions+=3;goto B59e97e;
case 0x59e97f:c.instructions+=2;goto B59e97f;
case 0x59e981:c.instructions+=1;goto B59e981;
case 0x59e986:goto L59e986;
case 0x59e988:c.instructions+=6;goto B59e988;
case 0x59e98a:c.instructions+=5;goto B59e98a;
case 0x59e98c:c.instructions+=4;goto B59e98c;
case 0x59e98f:c.instructions+=3;goto B59e98f;
case 0x59e990:c.instructions+=2;goto B59e990;
case 0x59e992:c.instructions+=1;goto B59e992;
case 0x59e997:goto L59e997;
case 0x59e99a:c.instructions+=6;goto B59e99a;
case 0x59e99c:c.instructions+=5;goto B59e99c;
case 0x59e99e:c.instructions+=4;goto B59e99e;
case 0x59e9a0:c.instructions+=3;goto B59e9a0;
case 0x59e9a1:c.instructions+=2;goto B59e9a1;
case 0x59e9a3:c.instructions+=1;goto B59e9a3;
case 0x59e9a8:goto L59e9a8;
case 0x59e9ab:c.instructions+=6;goto B59e9ab;
case 0x59e9ad:c.instructions+=5;goto B59e9ad;
case 0x59e9af:c.instructions+=4;goto B59e9af;
case 0x59e9b1:c.instructions+=3;goto B59e9b1;
case 0x59e9b2:c.instructions+=2;goto B59e9b2;
case 0x59e9b4:c.instructions+=1;goto B59e9b4;
case 0x59e9b9:goto L59e9b9;
case 0x59e9bc:c.instructions+=6;goto B59e9bc;
case 0x59e9be:c.instructions+=5;goto B59e9be;
case 0x59e9c0:c.instructions+=4;goto B59e9c0;
case 0x59e9c2:c.instructions+=3;goto B59e9c2;
case 0x59e9c3:c.instructions+=2;goto B59e9c3;
case 0x59e9c5:c.instructions+=1;goto B59e9c5;
case 0x59e9ca:goto L59e9ca;
case 0x59e9cd:c.instructions+=3;goto B59e9cd;
case 0x59e9cf:c.instructions+=2;goto B59e9cf;
case 0x59e9d0:c.instructions+=1;goto B59e9d0;
case 0x59e9d5:goto L59e9d5;
case 0x59e9d8:c.instructions+=4;goto B59e9d8;
case 0x59e9db:c.instructions+=3;goto B59e9db;
case 0x59e9dc:c.instructions+=2;goto B59e9dc;
case 0x59e9dd:c.instructions+=1;goto B59e9dd;
case 0x59e9e2:goto L59e9e2;
case 0x59e9e4:c.instructions+=6;goto B59e9e4;
case 0x59e9e6:c.instructions+=5;goto B59e9e6;
case 0x59e9e8:c.instructions+=4;goto B59e9e8;
case 0x59e9eb:c.instructions+=3;goto B59e9eb;
case 0x59e9ec:c.instructions+=2;goto B59e9ec;
case 0x59e9ee:c.instructions+=1;goto B59e9ee;
case 0x59e9f3:goto L59e9f3;
case 0x59e9f6:c.instructions+=2;goto B59e9f6;
case 0x59e9fb:c.instructions+=1;goto B59e9fb;
case 0x59ea00:goto L59ea00;
case 0x59ea02:c.instructions+=2;goto B59ea02;
case 0x59ea03:c.instructions+=1;goto B59ea03;
case 0x59ea08:goto L59ea08;
case 0x59ea0b:c.instructions+=2;goto B59ea0b;
case 0x59ea0c:c.instructions+=1;goto B59ea0c;
case 0x59ea0e:goto L59ea0e;
case 0x59ea10:c.instructions+=1;goto B59ea10;
case 0x59ea15:goto L59ea15;
case 0x59ea16:c.instructions+=3;goto B59ea16;
case 0x59ea17:c.instructions+=2;goto B59ea17;
case 0x59ea18:c.instructions+=1;goto B59ea18;
case 0x59ea20:goto L59ea20;
case 0x59ea21:c.instructions+=23;goto B59ea21;
case 0x59ea23:c.instructions+=22;goto B59ea23;
case 0x59ea26:c.instructions+=21;goto B59ea26;
case 0x59ea29:c.instructions+=20;goto B59ea29;
case 0x59ea2a:c.instructions+=19;goto B59ea2a;
case 0x59ea2c:c.instructions+=18;goto B59ea2c;
case 0x59ea2f:c.instructions+=17;goto B59ea2f;
case 0x59ea32:c.instructions+=16;goto B59ea32;
case 0x59ea38:c.instructions+=15;goto B59ea38;
case 0x59ea3b:c.instructions+=14;goto B59ea3b;
case 0x59ea41:c.instructions+=13;goto B59ea41;
case 0x59ea42:c.instructions+=12;goto B59ea42;
case 0x59ea45:c.instructions+=11;goto B59ea45;
case 0x59ea46:c.instructions+=10;goto B59ea46;
case 0x59ea49:c.instructions+=9;goto B59ea49;
case 0x59ea4d:c.instructions+=8;goto B59ea4d;
case 0x59ea4e:c.instructions+=7;goto B59ea4e;
case 0x59ea50:c.instructions+=6;goto B59ea50;
case 0x59ea52:c.instructions+=5;goto B59ea52;
case 0x59ea58:c.instructions+=4;goto B59ea58;
case 0x59ea5e:c.instructions+=3;goto B59ea5e;
case 0x59ea64:c.instructions+=2;goto B59ea64;
case 0x59ea68:c.instructions+=1;goto B59ea68;
case 0x59ea6d:goto L59ea6d;
case 0x59ea70:c.instructions+=5;goto B59ea70;
case 0x59ea71:c.instructions+=4;goto B59ea71;
case 0x59ea75:c.instructions+=3;goto B59ea75;
case 0x59ea76:c.instructions+=2;goto B59ea76;
case 0x59ea78:c.instructions+=1;goto B59ea78;
case 0x59ea7d:goto L59ea7d;
case 0x59ea81:c.instructions+=9;goto B59ea81;
case 0x59ea85:c.instructions+=8;goto B59ea85;
case 0x59ea87:c.instructions+=7;goto B59ea87;
case 0x59ea8c:c.instructions+=6;goto B59ea8c;
case 0x59ea90:c.instructions+=5;goto B59ea90;
case 0x59ea94:c.instructions+=4;goto B59ea94;
case 0x59ea9c:c.instructions+=3;goto B59ea9c;
case 0x59eaa4:c.instructions+=2;goto B59eaa4;
case 0x59eaa8:c.instructions+=1;goto B59eaa8;
case 0x59eab0:goto L59eab0;
case 0x59eab4:c.instructions+=14;goto B59eab4;
case 0x59eab8:c.instructions+=13;goto B59eab8;
case 0x59eabb:c.instructions+=12;goto B59eabb;
case 0x59eac1:c.instructions+=11;goto B59eac1;
case 0x59eac5:c.instructions+=10;goto B59eac5;
case 0x59eac9:c.instructions+=9;goto B59eac9;
case 0x59eacd:c.instructions+=8;goto B59eacd;
case 0x59ead1:c.instructions+=7;goto B59ead1;
case 0x59ead4:c.instructions+=6;goto B59ead4;
case 0x59ead8:c.instructions+=5;goto B59ead8;
case 0x59eadc:c.instructions+=4;goto B59eadc;
case 0x59eadd:c.instructions+=3;goto B59eadd;
case 0x59eade:c.instructions+=2;goto B59eade;
case 0x59eae0:c.instructions+=1;goto B59eae0;
case 0x59eae5:goto L59eae5;
case 0x59eae9:c.instructions+=9;goto B59eae9;
case 0x59eaed:c.instructions+=8;goto B59eaed;
case 0x59eaf1:c.instructions+=7;goto B59eaf1;
case 0x59eaf5:c.instructions+=6;goto B59eaf5;
case 0x59eaf9:c.instructions+=5;goto B59eaf9;
case 0x59eafd:c.instructions+=4;goto B59eafd;
case 0x59eb03:c.instructions+=3;goto B59eb03;
case 0x59eb05:c.instructions+=2;goto B59eb05;
case 0x59eb08:c.instructions+=1;goto B59eb08;
case 0x59eb0a:goto L59eb0a;
case 0x59eb0e:c.instructions+=4;goto B59eb0e;
case 0x59eb10:c.instructions+=3;goto B59eb10;
case 0x59eb12:c.instructions+=2;goto B59eb12;
case 0x59eb15:c.instructions+=1;goto B59eb15;
case 0x59eb17:goto L59eb17;
case 0x59eb1b:c.instructions+=1;goto B59eb1b;
case 0x59eb1d:goto L59eb1d;
case 0x59eb1f:c.instructions+=18;goto B59eb1f;
case 0x59eb23:c.instructions+=17;goto B59eb23;
case 0x59eb27:c.instructions+=16;goto B59eb27;
case 0x59eb29:c.instructions+=15;goto B59eb29;
case 0x59eb2c:c.instructions+=14;goto B59eb2c;
case 0x59eb2d:c.instructions+=13;goto B59eb2d;
case 0x59eb30:c.instructions+=12;goto B59eb30;
case 0x59eb34:c.instructions+=11;goto B59eb34;
case 0x59eb36:c.instructions+=10;goto B59eb36;
case 0x59eb3a:c.instructions+=9;goto B59eb3a;
case 0x59eb3d:c.instructions+=8;goto B59eb3d;
case 0x59eb41:c.instructions+=7;goto B59eb41;
case 0x59eb47:c.instructions+=6;goto B59eb47;
case 0x59eb4a:c.instructions+=5;goto B59eb4a;
case 0x59eb4e:c.instructions+=4;goto B59eb4e;
case 0x59eb51:c.instructions+=3;goto B59eb51;
case 0x59eb54:c.instructions+=2;goto B59eb54;
case 0x59eb55:c.instructions+=1;goto B59eb55;
case 0x59eb5a:goto L59eb5a;
case 0x59eb5e:c.instructions+=5;goto B59eb5e;
case 0x59eb62:c.instructions+=4;goto B59eb62;
case 0x59eb66:c.instructions+=3;goto B59eb66;
case 0x59eb6a:c.instructions+=2;goto B59eb6a;
case 0x59eb6e:c.instructions+=1;goto B59eb6e;
case 0x59eb70:goto L59eb70;
case 0x59eb72:goto L59eb72;
case 0x59eb73:c.instructions+=3;goto B59eb73;
case 0x59eb76:c.instructions+=2;goto B59eb76;
case 0x59eb7a:c.instructions+=1;goto B59eb7a;
case 0x59eb80:goto L59eb80;
case 0x59eb84:c.instructions+=5;goto B59eb84;
case 0x59eb85:c.instructions+=4;goto B59eb85;
case 0x59eb86:c.instructions+=3;goto B59eb86;
case 0x59eb88:c.instructions+=2;goto B59eb88;
case 0x59eb89:c.instructions+=1;goto B59eb89;
case 0x59eb90:goto L59eb90;
case 0x59eb91:c.instructions+=8;goto B59eb91;
case 0x59eb93:c.instructions+=7;goto B59eb93;
case 0x59eb96:c.instructions+=6;goto B59eb96;
case 0x59eb99:c.instructions+=5;goto B59eb99;
case 0x59eb9a:c.instructions+=4;goto B59eb9a;
case 0x59eb9c:c.instructions+=3;goto B59eb9c;
case 0x59eb9f:c.instructions+=2;goto B59eb9f;
case 0x59eba1:c.instructions+=1;goto B59eba1;
case 0x59eba7:goto L59eba7;
case 0x59ebaa:c.instructions+=5;goto B59ebaa;
case 0x59ebab:c.instructions+=4;goto B59ebab;
case 0x59ebaf:c.instructions+=3;goto B59ebaf;
case 0x59ebb0:c.instructions+=2;goto B59ebb0;
case 0x59ebb2:c.instructions+=1;goto B59ebb2;
case 0x59ebb7:goto L59ebb7;
case 0x59ebba:c.instructions+=6;goto B59ebba;
case 0x59ebbc:c.instructions+=5;goto B59ebbc;
case 0x59ebc4:c.instructions+=4;goto B59ebc4;
case 0x59ebca:c.instructions+=3;goto B59ebca;
case 0x59ebcc:c.instructions+=2;goto B59ebcc;
case 0x59ebcf:c.instructions+=1;goto B59ebcf;
case 0x59ebd1:goto L59ebd1;
case 0x59ebd4:c.instructions+=8;goto B59ebd4;
case 0x59ebd7:c.instructions+=7;goto B59ebd7;
case 0x59ebda:c.instructions+=6;goto B59ebda;
case 0x59ebdd:c.instructions+=5;goto B59ebdd;
case 0x59ebe1:c.instructions+=4;goto B59ebe1;
case 0x59ebe7:c.instructions+=3;goto B59ebe7;
case 0x59ebe9:c.instructions+=2;goto B59ebe9;
case 0x59ebec:c.instructions+=1;goto B59ebec;
case 0x59ebee:goto L59ebee;
case 0x59ebf6:c.instructions+=3;goto B59ebf6;
case 0x59ebfe:c.instructions+=2;goto B59ebfe;
case 0x59ec06:c.instructions+=1;goto B59ec06;
case 0x59ec08:goto L59ec08;
case 0x59ec0c:c.instructions+=6;goto B59ec0c;
case 0x59ec0d:c.instructions+=5;goto B59ec0d;
case 0x59ec11:c.instructions+=4;goto B59ec11;
case 0x59ec12:c.instructions+=3;goto B59ec12;
case 0x59ec16:c.instructions+=2;goto B59ec16;
case 0x59ec17:c.instructions+=1;goto B59ec17;
case 0x59ec1c:goto L59ec1c;
case 0x59ec1f:goto L59ec1f;
case 0x59ec22:c.instructions+=21;goto B59ec22;
case 0x59ec26:c.instructions+=20;goto B59ec26;
case 0x59ec2a:c.instructions+=19;goto B59ec2a;
case 0x59ec2e:c.instructions+=18;goto B59ec2e;
case 0x59ec31:c.instructions+=17;goto B59ec31;
case 0x59ec33:c.instructions+=16;goto B59ec33;
case 0x59ec36:c.instructions+=15;goto B59ec36;
case 0x59ec39:c.instructions+=14;goto B59ec39;
case 0x59ec3d:c.instructions+=13;goto B59ec3d;
case 0x59ec40:c.instructions+=12;goto B59ec40;
case 0x59ec44:c.instructions+=11;goto B59ec44;
case 0x59ec48:c.instructions+=10;goto B59ec48;
case 0x59ec4c:c.instructions+=9;goto B59ec4c;
case 0x59ec50:c.instructions+=8;goto B59ec50;
case 0x59ec52:c.instructions+=7;goto B59ec52;
case 0x59ec56:c.instructions+=6;goto B59ec56;
case 0x59ec5a:c.instructions+=5;goto B59ec5a;
case 0x59ec61:c.instructions+=4;goto B59ec61;
case 0x59ec67:c.instructions+=3;goto B59ec67;
case 0x59ec69:c.instructions+=2;goto B59ec69;
case 0x59ec6b:c.instructions+=1;goto B59ec6b;
case 0x59ec71:goto L59ec71;
case 0x59ec72:c.instructions+=3;goto B59ec72;
case 0x59ec74:c.instructions+=2;goto B59ec74;
case 0x59ec75:c.instructions+=1;goto B59ec75;
case 0x59ec80:goto L59ec80;
case 0x59ec81:c.instructions+=17;goto B59ec81;
case 0x59ec83:c.instructions+=16;goto B59ec83;
case 0x59ec86:c.instructions+=15;goto B59ec86;
case 0x59ec8c:c.instructions+=14;goto B59ec8c;
case 0x59ec8d:c.instructions+=13;goto B59ec8d;
case 0x59ec8e:c.instructions+=12;goto B59ec8e;
case 0x59ec90:c.instructions+=11;goto B59ec90;
case 0x59ec93:c.instructions+=10;goto B59ec93;
case 0x59ec96:c.instructions+=9;goto B59ec96;
case 0x59ec9c:c.instructions+=8;goto B59ec9c;
case 0x59eca0:c.instructions+=7;goto B59eca0;
case 0x59eca4:c.instructions+=6;goto B59eca4;
case 0x59eca7:c.instructions+=5;goto B59eca7;
case 0x59eca9:c.instructions+=4;goto B59eca9;
case 0x59ecab:c.instructions+=3;goto B59ecab;
case 0x59ecac:c.instructions+=2;goto B59ecac;
case 0x59ecaf:c.instructions+=1;goto B59ecaf;
case 0x59ecb1:goto L59ecb1;
case 0x59ecb7:c.instructions+=8;goto B59ecb7;
case 0x59ecba:c.instructions+=7;goto B59ecba;
case 0x59ecbc:c.instructions+=6;goto B59ecbc;
case 0x59ecbf:c.instructions+=5;goto B59ecbf;
case 0x59ecc1:c.instructions+=4;goto B59ecc1;
case 0x59ecc7:c.instructions+=3;goto B59ecc7;
case 0x59ecc9:c.instructions+=2;goto B59ecc9;
case 0x59eccc:c.instructions+=1;goto B59eccc;
case 0x59ecce:goto L59ecce;
case 0x59ecd1:c.instructions+=5;goto B59ecd1;
case 0x59ecd3:c.instructions+=4;goto B59ecd3;
case 0x59ecd9:c.instructions+=3;goto B59ecd9;
case 0x59ecdb:c.instructions+=2;goto B59ecdb;
case 0x59ecde:c.instructions+=1;goto B59ecde;
case 0x59ece0:goto L59ece0;
case 0x59ece2:c.instructions+=1;goto B59ece2;
case 0x59ece4:goto L59ece4;
case 0x59ece6:goto L59ece6;
case 0x59ece8:goto L59ece8;
case 0x59eceb:c.instructions+=6;goto B59eceb;
case 0x59ecef:c.instructions+=5;goto B59ecef;
case 0x59ecf3:c.instructions+=4;goto B59ecf3;
case 0x59ecf6:c.instructions+=3;goto B59ecf6;
case 0x59ecf8:c.instructions+=2;goto B59ecf8;
case 0x59ecfb:c.instructions+=1;goto B59ecfb;
case 0x59ecfd:goto L59ecfd;
case 0x59ecff:c.instructions+=1;goto B59ecff;
case 0x59ed01:goto L59ed01;
case 0x59ed03:goto L59ed03;
case 0x59ed05:c.instructions+=3;goto B59ed05;
case 0x59ed08:c.instructions+=2;goto B59ed08;
case 0x59ed0b:c.instructions+=1;goto B59ed0b;
case 0x59ed11:goto L59ed11;
case 0x59ed13:c.instructions+=1;goto B59ed13;
case 0x59ed19:goto L59ed19;
case 0x59ed1b:c.instructions+=1;goto B59ed1b;
case 0x59ed21:goto L59ed21;
case 0x59ed24:c.instructions+=11;goto B59ed24;
case 0x59ed27:c.instructions+=10;goto B59ed27;
case 0x59ed2e:c.instructions+=9;goto B59ed2e;
case 0x59ed34:c.instructions+=8;goto B59ed34;
case 0x59ed3b:c.instructions+=7;goto B59ed3b;
case 0x59ed3e:c.instructions+=6;goto B59ed3e;
case 0x59ed40:c.instructions+=5;goto B59ed40;
case 0x59ed43:c.instructions+=4;goto B59ed43;
case 0x59ed45:c.instructions+=3;goto B59ed45;
case 0x59ed4c:c.instructions+=2;goto B59ed4c;
case 0x59ed50:c.instructions+=1;goto B59ed50;
case 0x59ed52:goto L59ed52;
case 0x59ed57:c.instructions+=3;goto B59ed57;
case 0x59ed58:c.instructions+=2;goto B59ed58;
case 0x59ed5a:c.instructions+=1;goto B59ed5a;
case 0x59ed5f:goto L59ed5f;
case 0x59ed65:c.instructions+=3;goto B59ed65;
case 0x59ed67:c.instructions+=2;goto B59ed67;
case 0x59ed6a:c.instructions+=1;goto B59ed6a;
case 0x59ed6c:goto L59ed6c;
case 0x59ed72:c.instructions+=4;goto B59ed72;
case 0x59ed75:c.instructions+=3;goto B59ed75;
case 0x59ed76:c.instructions+=2;goto B59ed76;
case 0x59ed79:c.instructions+=1;goto B59ed79;
case 0x59ed7e:goto L59ed7e;
case 0x59ed81:c.instructions+=14;goto B59ed81;
case 0x59ed82:c.instructions+=13;goto B59ed82;
case 0x59ed85:c.instructions+=12;goto B59ed85;
case 0x59ed89:c.instructions+=11;goto B59ed89;
case 0x59ed8b:c.instructions+=10;goto B59ed8b;
case 0x59ed8e:c.instructions+=9;goto B59ed8e;
case 0x59ed90:c.instructions+=8;goto B59ed90;
case 0x59ed93:c.instructions+=7;goto B59ed93;
case 0x59ed96:c.instructions+=6;goto B59ed96;
case 0x59ed99:c.instructions+=5;goto B59ed99;
case 0x59ed9d:c.instructions+=4;goto B59ed9d;
case 0x59eda3:c.instructions+=3;goto B59eda3;
case 0x59eda6:c.instructions+=2;goto B59eda6;
case 0x59eda7:c.instructions+=1;goto B59eda7;
case 0x59edac:goto L59edac;
case 0x59edb0:c.instructions+=7;goto B59edb0;
case 0x59edb4:c.instructions+=6;goto B59edb4;
case 0x59edbb:c.instructions+=5;goto B59edbb;
case 0x59edc2:c.instructions+=4;goto B59edc2;
case 0x59edc5:c.instructions+=3;goto B59edc5;
case 0x59edc6:c.instructions+=2;goto B59edc6;
case 0x59edcd:c.instructions+=1;goto B59edcd;
case 0x59edd2:goto L59edd2;
case 0x59edd5:c.instructions+=4;goto B59edd5;
case 0x59edd8:c.instructions+=3;goto B59edd8;
case 0x59edd9:c.instructions+=2;goto B59edd9;
case 0x59edda:c.instructions+=1;goto B59edda;
case 0x59eddf:goto L59eddf;
case 0x59ede2:c.instructions+=4;goto B59ede2;
case 0x59ede5:c.instructions+=3;goto B59ede5;
case 0x59ede9:c.instructions+=2;goto B59ede9;
case 0x59edea:c.instructions+=1;goto B59edea;
case 0x59edef:goto L59edef;
case 0x59edf5:c.instructions+=11;goto B59edf5;
case 0x59edf8:c.instructions+=10;goto B59edf8;
case 0x59edff:c.instructions+=9;goto B59edff;
case 0x59ee0a:c.instructions+=8;goto B59ee0a;
case 0x59ee15:c.instructions+=7;goto B59ee15;
case 0x59ee19:c.instructions+=6;goto B59ee19;
case 0x59ee24:c.instructions+=5;goto B59ee24;
case 0x59ee28:c.instructions+=4;goto B59ee28;
case 0x59ee29:c.instructions+=3;goto B59ee29;
case 0x59ee2a:c.instructions+=2;goto B59ee2a;
case 0x59ee2c:c.instructions+=1;goto B59ee2c;
case 0x59ee31:goto L59ee31;
case 0x59ee38:c.instructions+=6;goto B59ee38;
case 0x59ee39:c.instructions+=5;goto B59ee39;
case 0x59ee40:c.instructions+=4;goto B59ee40;
case 0x59ee41:c.instructions+=3;goto B59ee41;
case 0x59ee48:c.instructions+=2;goto B59ee48;
case 0x59ee49:c.instructions+=1;goto B59ee49;
case 0x59ee4e:goto L59ee4e;
case 0x59ee55:c.instructions+=4;goto B59ee55;
case 0x59ee56:c.instructions+=3;goto B59ee56;
case 0x59ee5d:c.instructions+=2;goto B59ee5d;
case 0x59ee5e:c.instructions+=1;goto B59ee5e;
case 0x59ee63:goto L59ee63;
case 0x59ee67:c.instructions+=6;goto B59ee67;
case 0x59ee6a:c.instructions+=5;goto B59ee6a;
case 0x59ee6b:c.instructions+=4;goto B59ee6b;
case 0x59ee6f:c.instructions+=3;goto B59ee6f;
case 0x59ee70:c.instructions+=2;goto B59ee70;
case 0x59ee72:c.instructions+=1;goto B59ee72;
case 0x59ee77:goto L59ee77;
case 0x59ee7b:c.instructions+=11;goto B59ee7b;
case 0x59ee82:c.instructions+=10;goto B59ee82;
case 0x59ee83:c.instructions+=9;goto B59ee83;
case 0x59ee87:c.instructions+=8;goto B59ee87;
case 0x59ee8a:c.instructions+=7;goto B59ee8a;
case 0x59ee91:c.instructions+=6;goto B59ee91;
case 0x59ee93:c.instructions+=5;goto B59ee93;
case 0x59ee97:c.instructions+=4;goto B59ee97;
case 0x59ee9e:c.instructions+=3;goto B59ee9e;
case 0x59eea0:c.instructions+=2;goto B59eea0;
case 0x59eea3:c.instructions+=1;goto B59eea3;
case 0x59eea8:goto L59eea8;
case 0x59eeab:c.instructions+=8;goto B59eeab;
case 0x59eeae:c.instructions+=7;goto B59eeae;
case 0x59eeb1:c.instructions+=6;goto B59eeb1;
case 0x59eeb5:c.instructions+=5;goto B59eeb5;
case 0x59eeb8:c.instructions+=4;goto B59eeb8;
case 0x59eeb9:c.instructions+=3;goto B59eeb9;
case 0x59eebc:c.instructions+=2;goto B59eebc;
case 0x59eebf:c.instructions+=1;goto B59eebf;
case 0x59eec4:goto L59eec4;
case 0x59eeca:c.instructions+=8;goto B59eeca;
case 0x59eece:c.instructions+=7;goto B59eece;
case 0x59eed4:c.instructions+=6;goto B59eed4;
case 0x59eed6:c.instructions+=5;goto B59eed6;
case 0x59eeda:c.instructions+=4;goto B59eeda;
case 0x59eede:c.instructions+=3;goto B59eede;
case 0x59eedf:c.instructions+=2;goto B59eedf;
case 0x59eee1:c.instructions+=1;goto B59eee1;
case 0x59eee6:goto L59eee6;
case 0x59eeea:c.instructions+=16;goto B59eeea;
case 0x59eef0:c.instructions+=15;goto B59eef0;
case 0x59eef3:c.instructions+=14;goto B59eef3;
case 0x59eefa:c.instructions+=13;goto B59eefa;
case 0x59eefb:c.instructions+=12;goto B59eefb;
case 0x59eeff:c.instructions+=11;goto B59eeff;
case 0x59ef06:c.instructions+=10;goto B59ef06;
case 0x59ef08:c.instructions+=9;goto B59ef08;
case 0x59ef0f:c.instructions+=8;goto B59ef0f;
case 0x59ef16:c.instructions+=7;goto B59ef16;
case 0x59ef18:c.instructions+=6;goto B59ef18;
case 0x59ef1f:c.instructions+=5;goto B59ef1f;
case 0x59ef26:c.instructions+=4;goto B59ef26;
case 0x59ef28:c.instructions+=3;goto B59ef28;
case 0x59ef2f:c.instructions+=2;goto B59ef2f;
case 0x59ef31:c.instructions+=1;goto B59ef31;
case 0x59ef36:goto L59ef36;
case 0x59ef39:c.instructions+=3;goto B59ef39;
case 0x59ef3a:c.instructions+=2;goto B59ef3a;
case 0x59ef3b:c.instructions+=1;goto B59ef3b;
case 0x59ef40:goto L59ef40;
case 0x59ef43:c.instructions+=4;goto B59ef43;
case 0x59ef4a:c.instructions+=3;goto B59ef4a;
case 0x59ef4b:c.instructions+=2;goto B59ef4b;
case 0x59ef4e:c.instructions+=1;goto B59ef4e;
case 0x59ef53:goto L59ef53;
case 0x59ef5a:c.instructions+=13;goto B59ef5a;
case 0x59ef5e:c.instructions+=12;goto B59ef5e;
case 0x59ef62:c.instructions+=11;goto B59ef62;
case 0x59ef66:c.instructions+=10;goto B59ef66;
case 0x59ef6d:c.instructions+=9;goto B59ef6d;
case 0x59ef71:c.instructions+=8;goto B59ef71;
case 0x59ef75:c.instructions+=7;goto B59ef75;
case 0x59ef79:c.instructions+=6;goto B59ef79;
case 0x59ef80:c.instructions+=5;goto B59ef80;
case 0x59ef81:c.instructions+=4;goto B59ef81;
case 0x59ef85:c.instructions+=3;goto B59ef85;
case 0x59ef86:c.instructions+=2;goto B59ef86;
case 0x59ef8a:c.instructions+=1;goto B59ef8a;
case 0x59ef8f:goto L59ef8f;
case 0x59ef96:c.instructions+=10;goto B59ef96;
case 0x59ef99:c.instructions+=9;goto B59ef99;
case 0x59ef9e:c.instructions+=8;goto B59ef9e;
case 0x59efa0:c.instructions+=7;goto B59efa0;
case 0x59efa2:c.instructions+=6;goto B59efa2;
case 0x59efa9:c.instructions+=5;goto B59efa9;
case 0x59efac:c.instructions+=4;goto B59efac;
case 0x59efad:c.instructions+=3;goto B59efad;
case 0x59efb4:c.instructions+=2;goto B59efb4;
case 0x59efb5:c.instructions+=1;goto B59efb5;
case 0x59efba:goto L59efba;
case 0x59efc1:c.instructions+=6;goto B59efc1;
case 0x59efc2:c.instructions+=5;goto B59efc2;
case 0x59efc9:c.instructions+=4;goto B59efc9;
case 0x59efca:c.instructions+=3;goto B59efca;
case 0x59efd1:c.instructions+=2;goto B59efd1;
case 0x59efd2:c.instructions+=1;goto B59efd2;
case 0x59efd7:goto L59efd7;
case 0x59efde:c.instructions+=4;goto B59efde;
case 0x59efdf:c.instructions+=3;goto B59efdf;
case 0x59efe6:c.instructions+=2;goto B59efe6;
case 0x59efe7:c.instructions+=1;goto B59efe7;
case 0x59efec:goto L59efec;
case 0x59efef:c.instructions+=4;goto B59efef;
case 0x59eff3:c.instructions+=3;goto B59eff3;
case 0x59eff6:c.instructions+=2;goto B59eff6;
case 0x59effc:c.instructions+=1;goto B59effc;
default:missing_instruction(c.pc);}
B59e001:L59e001:{c.instructions+=10;NFSU2_TR(0x59e001);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e004:{NFSU2_TR(0x59e004);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59e007:{NFSU2_TR(0x59e007);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59e009:{NFSU2_TR(0x59e009);
__builtin_memmove((R+4),(R+0),4);
}
B59e00b:{NFSU2_TR(0x59e00b);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e00e:{NFSU2_TR(0x59e00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e00f:{NFSU2_TR(0x59e00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e012:{NFSU2_TR(0x59e012);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e013:{NFSU2_TR(0x59e013);
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
B59e016:{NFSU2_TR(0x59e016);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e020:L59e020:{c.instructions+=10;NFSU2_TR(0x59e020);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e021:{NFSU2_TR(0x59e021);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59e025:{NFSU2_TR(0x59e025);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e026:{NFSU2_TR(0x59e026);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e027:{NFSU2_TR(0x59e027);
u8 U[4];
w4(U+0,u32(0x7a1ed0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e02c:{NFSU2_TR(0x59e02c);
__builtin_memmove((R+24),(R+4),4);
}
B59e02e:{NFSU2_TR(0x59e02e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B59e030:{NFSU2_TR(0x59e030);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e031:{NFSU2_TR(0x59e031);
__builtin_memmove((R+4),(R+12),4);
}
B59e033:{NFSU2_TR(0x59e033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e038ull));
TAIL_STATIC(0x578ce0u,578);
}
B59e038:L59e038:{c.instructions+=4;NFSU2_TR(0x59e038);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e03b:{NFSU2_TR(0x59e03b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e03c:{NFSU2_TR(0x59e03c);
__builtin_memmove((R+4),(R+12),4);
}
B59e03e:{NFSU2_TR(0x59e03e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e043ull));
TAIL_STATIC(0x571770u,571);
}
B59e043:L59e043:{c.instructions+=4;NFSU2_TR(0x59e043);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e046:{NFSU2_TR(0x59e046);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e047:{NFSU2_TR(0x59e047);
__builtin_memmove((R+4),(R+12),4);
}
B59e049:{NFSU2_TR(0x59e049);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e04eull));
TAIL_STATIC(0x571770u,571);
}
B59e04e:L59e04e:{c.instructions+=3;NFSU2_TR(0x59e04e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59e051:{NFSU2_TR(0x59e051);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B59e054:{NFSU2_TR(0x59e054);
if(r1(R+518)){{goto L59e0aa;}}
}
B59e056:L59e056:{c.instructions+=12;NFSU2_TR(0x59e056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e059:{NFSU2_TR(0x59e059);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B59e05b:{NFSU2_TR(0x59e05b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e05e:{NFSU2_TR(0x59e05e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59e061:{NFSU2_TR(0x59e061);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59e063:{NFSU2_TR(0x59e063);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e066:{NFSU2_TR(0x59e066);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e069:{NFSU2_TR(0x59e069);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e06c:{NFSU2_TR(0x59e06c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e06d:{NFSU2_TR(0x59e06d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59e06f:{NFSU2_TR(0x59e06f);
w4(R+4,u32(0x10ull));
}
B59e074:{NFSU2_TR(0x59e074);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e077:L59e077:{c.instructions+=1;NFSU2_TR(0x59e077);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L59e079;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59e077u);}goto L59e077;}
}
B59e079:L59e079:{c.instructions+=9;NFSU2_TR(0x59e079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e07f:{NFSU2_TR(0x59e07f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e085:{NFSU2_TR(0x59e085);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e08b:{NFSU2_TR(0x59e08b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e091:{NFSU2_TR(0x59e091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e097:{NFSU2_TR(0x59e097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e09d:{NFSU2_TR(0x59e09d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e0a3:{NFSU2_TR(0x59e0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e0a9:{NFSU2_TR(0x59e0a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e0aa:L59e0aa:{c.instructions+=2;NFSU2_TR(0x59e0aa);
__builtin_memmove((R+4),(R+12),4);
}
B59e0ac:{NFSU2_TR(0x59e0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e0b1ull));
TAIL_STATIC(0x578d90u,578);
}
B59e0b1:L59e0b1:{c.instructions+=4;NFSU2_TR(0x59e0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e0b2:{NFSU2_TR(0x59e0b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e0b3:{NFSU2_TR(0x59e0b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59e0b4:{NFSU2_TR(0x59e0b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e0c0:L59e0c0:{c.instructions+=28;NFSU2_TR(0x59e0c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e0c1:{NFSU2_TR(0x59e0c1);
__builtin_memmove((R+20),(R+16),4);
}
B59e0c3:{NFSU2_TR(0x59e0c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59e0c6:{NFSU2_TR(0x59e0c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B59e0c9:{NFSU2_TR(0x59e0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e0cf:{NFSU2_TR(0x59e0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e0d2:{NFSU2_TR(0x59e0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e0d8:{NFSU2_TR(0x59e0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e0db:{NFSU2_TR(0x59e0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e0e1:{NFSU2_TR(0x59e0e1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e0e3:{NFSU2_TR(0x59e0e3);
{u32 ea_=u32(r4(R+0)+u32(496u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e0e9:{NFSU2_TR(0x59e0e9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1f0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59e0ee:{NFSU2_TR(0x59e0ee);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e0f1:{NFSU2_TR(0x59e0f1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e0f4:{NFSU2_TR(0x59e0f4);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e0f7:{NFSU2_TR(0x59e0f7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e0fa:{NFSU2_TR(0x59e0fa);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e0fe:{NFSU2_TR(0x59e0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e102:{NFSU2_TR(0x59e102);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59e104:{NFSU2_TR(0x59e104);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e10a:{NFSU2_TR(0x59e10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e110:{NFSU2_TR(0x59e110);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e116:{NFSU2_TR(0x59e116);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e11c:{NFSU2_TR(0x59e11c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e11f:{NFSU2_TR(0x59e11f);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e125:{NFSU2_TR(0x59e125);
__builtin_memmove((R+16),(R+20),4);
}
B59e127:{NFSU2_TR(0x59e127);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e128:{NFSU2_TR(0x59e128);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e130:L59e130:{c.instructions+=4;NFSU2_TR(0x59e130);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e134:{NFSU2_TR(0x59e134);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B59e13a:{NFSU2_TR(0x59e13a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e141:{NFSU2_TR(0x59e141);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e150:L59e150:{c.instructions+=11;NFSU2_TR(0x59e150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e151:{NFSU2_TR(0x59e151);
__builtin_memmove((R+20),(R+16),4);
}
B59e153:{NFSU2_TR(0x59e153);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59e156:{NFSU2_TR(0x59e156);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59e159:{NFSU2_TR(0x59e159);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e15c:{NFSU2_TR(0x59e15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e15f:{NFSU2_TR(0x59e15f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e160:{NFSU2_TR(0x59e160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e161:{NFSU2_TR(0x59e161);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e165:{NFSU2_TR(0x59e165);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e166:{NFSU2_TR(0x59e166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e16bull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59e16b:L59e16b:{c.instructions+=16;NFSU2_TR(0x59e16b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e16f:{NFSU2_TR(0x59e16f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e172:{NFSU2_TR(0x59e172);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e174:{NFSU2_TR(0x59e174);
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
B59e177:{NFSU2_TR(0x59e177);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e17a:{NFSU2_TR(0x59e17a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e17e:{NFSU2_TR(0x59e17e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e181:{NFSU2_TR(0x59e181);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e184:{NFSU2_TR(0x59e184);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e188:{NFSU2_TR(0x59e188);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59e18a:{NFSU2_TR(0x59e18a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e18c:{NFSU2_TR(0x59e18c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e18f:{NFSU2_TR(0x59e18f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e192:{NFSU2_TR(0x59e192);
__builtin_memmove((R+16),(R+20),4);
}
B59e194:{NFSU2_TR(0x59e194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e195:{NFSU2_TR(0x59e195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e1a0:L59e1a0:{c.instructions+=15;NFSU2_TR(0x59e1a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1a1:{NFSU2_TR(0x59e1a1);
__builtin_memmove((R+20),(R+16),4);
}
B59e1a3:{NFSU2_TR(0x59e1a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59e1a6:{NFSU2_TR(0x59e1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x48ull))));
}
B59e1a9:{NFSU2_TR(0x59e1a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1aa:{NFSU2_TR(0x59e1aa);
__builtin_memmove((R+24),(R+4),4);
}
B59e1ac:{NFSU2_TR(0x59e1ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e1b2:{NFSU2_TR(0x59e1b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1b3:{NFSU2_TR(0x59e1b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e1b6:{NFSU2_TR(0x59e1b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1b7:{NFSU2_TR(0x59e1b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B59e1ba:{NFSU2_TR(0x59e1ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1bb:{NFSU2_TR(0x59e1bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e1bf:{NFSU2_TR(0x59e1bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1c0:{NFSU2_TR(0x59e1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e1c5ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59e1c5:L59e1c5:{c.instructions+=8;NFSU2_TR(0x59e1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59e1cb:{NFSU2_TR(0x59e1cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e1cf:{NFSU2_TR(0x59e1cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1d0:{NFSU2_TR(0x59e1d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e1d6:{NFSU2_TR(0x59e1d6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1d7:{NFSU2_TR(0x59e1d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e1db:{NFSU2_TR(0x59e1db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e1dc:{NFSU2_TR(0x59e1dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e1e1ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59e1e1:L59e1e1:{c.instructions+=33;NFSU2_TR(0x59e1e1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e1e5:{NFSU2_TR(0x59e1e5);
{u32 ea_=u32(r4(R+28)+u32(160u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e1eb:{NFSU2_TR(0x59e1eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e1f1:{NFSU2_TR(0x59e1f1);
{u32 ea_=u32(r4(R+28)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e1f7:{NFSU2_TR(0x59e1f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e1fd:{NFSU2_TR(0x59e1fd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e201:{NFSU2_TR(0x59e201);
{u32 ea_=u32(r4(R+28)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e207:{NFSU2_TR(0x59e207);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x150ull))));
}
B59e20c:{NFSU2_TR(0x59e20c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e210:{NFSU2_TR(0x59e210);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e214:{NFSU2_TR(0x59e214);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B59e217:{NFSU2_TR(0x59e217);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e21b:{NFSU2_TR(0x59e21b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59e21d:{NFSU2_TR(0x59e21d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e221:{NFSU2_TR(0x59e221);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e225:{NFSU2_TR(0x59e225);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e228:{NFSU2_TR(0x59e228);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e22c:{NFSU2_TR(0x59e22c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e22f:{NFSU2_TR(0x59e22f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59e233:{NFSU2_TR(0x59e233);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e235:{NFSU2_TR(0x59e235);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e239:{NFSU2_TR(0x59e239);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59e23b:{NFSU2_TR(0x59e23b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e23d:{NFSU2_TR(0x59e23d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e241:{NFSU2_TR(0x59e241);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e245:{NFSU2_TR(0x59e245);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e247:{NFSU2_TR(0x59e247);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59e249:{NFSU2_TR(0x59e249);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59e24b:{NFSU2_TR(0x59e24b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e24d:{NFSU2_TR(0x59e24d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59e253:{NFSU2_TR(0x59e253);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e255:{NFSU2_TR(0x59e255);
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
B59e258:{NFSU2_TR(0x59e258);
if(r1(R+514)){{goto L59e268;}}
}
B59e25a:L59e25a:{c.instructions+=7;NFSU2_TR(0x59e25a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e25c:{NFSU2_TR(0x59e25c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e262:{NFSU2_TR(0x59e262);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e263:{NFSU2_TR(0x59e263);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e264:{NFSU2_TR(0x59e264);
__builtin_memmove((R+16),(R+20),4);
}
B59e266:{NFSU2_TR(0x59e266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e267:{NFSU2_TR(0x59e267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e268:L59e268:{c.instructions+=18;NFSU2_TR(0x59e268);
{u32 ea_=u32(u32(8002352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e26e:{NFSU2_TR(0x59e26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e274:{NFSU2_TR(0x59e274);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e276:{NFSU2_TR(0x59e276);
__builtin_memmove((R+0),gp(0x86b36c),4);
}
B59e27b:{NFSU2_TR(0x59e27b);
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
B59e27d:{NFSU2_TR(0x59e27d);
{u32 ea_=u32(r4(R+4)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e283:{NFSU2_TR(0x59e283);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e287:{NFSU2_TR(0x59e287);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e289:{NFSU2_TR(0x59e289);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e28d:{NFSU2_TR(0x59e28d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e291:{NFSU2_TR(0x59e291);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e295:{NFSU2_TR(0x59e295);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e299:{NFSU2_TR(0x59e299);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e29d:{NFSU2_TR(0x59e29d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e2a1:{NFSU2_TR(0x59e2a1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e2a5:{NFSU2_TR(0x59e2a5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e2a9:{NFSU2_TR(0x59e2a9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e2ad:{NFSU2_TR(0x59e2ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e2be;}}
}
B59e2af:L59e2af:{c.instructions+=5;NFSU2_TR(0x59e2af);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e2b3:{NFSU2_TR(0x59e2b3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e2b4:{NFSU2_TR(0x59e2b4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e2b8:{NFSU2_TR(0x59e2b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e2b9:{NFSU2_TR(0x59e2b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e2beull));
TAIL_STATIC(0x59bc60u,59b);
}
B59e2be:L59e2be:{c.instructions+=6;NFSU2_TR(0x59e2be);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e2c2:{NFSU2_TR(0x59e2c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e2c3:{NFSU2_TR(0x59e2c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e2c4:{NFSU2_TR(0x59e2c4);
__builtin_memmove((R+16),(R+20),4);
}
B59e2c6:{NFSU2_TR(0x59e2c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e2c7:{NFSU2_TR(0x59e2c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e2d0:L59e2d0:{c.instructions+=6;NFSU2_TR(0x59e2d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e2d1:{NFSU2_TR(0x59e2d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e2d2:{NFSU2_TR(0x59e2d2);
__builtin_memmove((R+12),(R+4),4);
}
B59e2d4:{NFSU2_TR(0x59e2d4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B59e2d6:{NFSU2_TR(0x59e2d6);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+28))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+28)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+28))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B59e2da:{NFSU2_TR(0x59e2da);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59e2f9;}}
}
B59e2dc:L59e2dc:{c.instructions+=2;NFSU2_TR(0x59e2dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e2dd:{NFSU2_TR(0x59e2dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e2e0:L59e2e0:{c.instructions+=3;NFSU2_TR(0x59e2e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59e2e2:{NFSU2_TR(0x59e2e2);
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
B59e2e4:{NFSU2_TR(0x59e2e4);
if(r1(R+518)){{goto L59e2ec;}}
}
B59e2e6:L59e2e6:{c.instructions+=3;NFSU2_TR(0x59e2e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59e2e8:{NFSU2_TR(0x59e2e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e2ea:{NFSU2_TR(0x59e2ea);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e2ecull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B59e2ec:L59e2ec:{c.instructions+=5;NFSU2_TR(0x59e2ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B59e2f0:{NFSU2_TR(0x59e2f0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59e2f1:{NFSU2_TR(0x59e2f1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B59e2f4:{NFSU2_TR(0x59e2f4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B59e2f6:{NFSU2_TR(0x59e2f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59e2e0u);}goto L59e2e0;}}
}
B59e2f8:L59e2f8:{c.instructions+=1;NFSU2_TR(0x59e2f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e2f9:L59e2f9:{c.instructions+=3;NFSU2_TR(0x59e2f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e2fa:{NFSU2_TR(0x59e2fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59e2fb:{NFSU2_TR(0x59e2fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e300:L59e300:{c.instructions+=4;NFSU2_TR(0x59e300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e301:{NFSU2_TR(0x59e301);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B59e303:{NFSU2_TR(0x59e303);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+24))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+24)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+24))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B59e307:{NFSU2_TR(0x59e307);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59e329;}}
}
B59e309:L59e309:{c.instructions+=3;NFSU2_TR(0x59e309);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e30c:{NFSU2_TR(0x59e30c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e30d:{NFSU2_TR(0x59e30d);
__builtin_memmove((R+4),(R+4),4);
}
B59e310:L59e310:{c.instructions+=3;NFSU2_TR(0x59e310);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59e312:{NFSU2_TR(0x59e312);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59e314:{NFSU2_TR(0x59e314);
if(r1(R+518)){{goto L59e31c;}}
}
B59e316:L59e316:{c.instructions+=2;NFSU2_TR(0x59e316);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e319:{NFSU2_TR(0x59e319);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e31c:L59e31c:{c.instructions+=5;NFSU2_TR(0x59e31c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B59e320:{NFSU2_TR(0x59e320);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B59e321:{NFSU2_TR(0x59e321);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
}
B59e324:{NFSU2_TR(0x59e324);
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
B59e326:{NFSU2_TR(0x59e326);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59e310u);}goto L59e310;}}
}
B59e328:L59e328:{c.instructions+=1;NFSU2_TR(0x59e328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e329:L59e329:{c.instructions+=2;NFSU2_TR(0x59e329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e32a:{NFSU2_TR(0x59e32a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e330:L59e330:{c.instructions+=7;NFSU2_TR(0x59e330);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e334:{NFSU2_TR(0x59e334);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B59e338:{NFSU2_TR(0x59e338);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e33c:{NFSU2_TR(0x59e33c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59e33e:{NFSU2_TR(0x59e33e);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(R+4))<(r2(U+10))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+10)));
w2(U+12,u16(u32(r2(R+4))-u32(r2(U+10))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B59e342:{NFSU2_TR(0x59e342);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+0),(U+0),1);
}
B59e345:{NFSU2_TR(0x59e345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e350:L59e350:{c.instructions+=3;NFSU2_TR(0x59e350);
__builtin_memmove((R+0),gp(0x86b374),4);
}
B59e355:{NFSU2_TR(0x59e355);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e356:{NFSU2_TR(0x59e356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e35bull));
TAIL_STATIC(0x43cd20u,43c);
}
B59e35b:L59e35b:{c.instructions+=3;NFSU2_TR(0x59e35b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B59e35e:{NFSU2_TR(0x59e35e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59e361:{NFSU2_TR(0x59e361);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59e36e;}}
}
B59e363:L59e363:{c.instructions+=2;NFSU2_TR(0x59e363);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e365:{NFSU2_TR(0x59e365);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e36aull));
TAIL_STATIC(0x5ad420u,5ad);
}
B59e36a:L59e36a:{c.instructions+=2;NFSU2_TR(0x59e36a);
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
B59e36d:{NFSU2_TR(0x59e36d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e36e:L59e36e:{c.instructions+=4;NFSU2_TR(0x59e36e);
__builtin_memmove((R+4),gp(0x7fb724),4);
}
B59e374:{NFSU2_TR(0x59e374);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4dull))));
}
B59e377:{NFSU2_TR(0x59e377);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x8000007full))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59e37d:{NFSU2_TR(0x59e37d);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L59e384;}}
}
B59e37f:L59e37f:{c.instructions+=3;NFSU2_TR(0x59e37f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B59e380:{NFSU2_TR(0x59e380);
w1(R+512,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffff80ull))));
}
B59e383:{NFSU2_TR(0x59e383);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59e384:L59e384:{c.instructions+=1;NFSU2_TR(0x59e384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e38e;}}
}
B59e386:L59e386:{c.instructions+=2;NFSU2_TR(0x59e386);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e388:{NFSU2_TR(0x59e388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e38dull));
TAIL_STATIC(0x5ad420u,5ad);
}
B59e38d:L59e38d:{c.instructions+=1;NFSU2_TR(0x59e38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e38e:L59e38e:{c.instructions+=1;NFSU2_TR(0x59e38e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e390:L59e390:{c.instructions+=8;NFSU2_TR(0x59e390);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e391:{NFSU2_TR(0x59e391);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e392:{NFSU2_TR(0x59e392);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59e396:{NFSU2_TR(0x59e396);
u8 U[4];
w4(U+0,u32(0x7a1edcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e39b:{NFSU2_TR(0x59e39b);
__builtin_memmove((R+24),(R+4),4);
}
B59e39d:{NFSU2_TR(0x59e39d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e39f:{NFSU2_TR(0x59e39f);
__builtin_memmove((R+4),(R+28),4);
}
B59e3a1:{NFSU2_TR(0x59e3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e3a6ull));
TAIL_STATIC(0x578ce0u,578);
}
B59e3a6:L59e3a6:{c.instructions+=4;NFSU2_TR(0x59e3a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e3a9:{NFSU2_TR(0x59e3a9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e3ab:{NFSU2_TR(0x59e3ab);
__builtin_memmove((R+4),(R+28),4);
}
B59e3ad:{NFSU2_TR(0x59e3ad);
if(r1(R+518)){{goto L59e3d6;}}
}
B59e3af:L59e3af:{c.instructions+=3;NFSU2_TR(0x59e3af);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e3b3:{NFSU2_TR(0x59e3b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e3b4:{NFSU2_TR(0x59e3b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e3b9ull));
TAIL_STATIC(0x5716c0u,571);
}
B59e3b9:L59e3b9:{c.instructions+=8;NFSU2_TR(0x59e3b9);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e3bd:{NFSU2_TR(0x59e3bd);
__builtin_memmove((R+4),(R+0),1);
}
B59e3bf:{NFSU2_TR(0x59e3bf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B59e3c2:{NFSU2_TR(0x59e3c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59e3c5:{NFSU2_TR(0x59e3c5);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B59e3c7:{NFSU2_TR(0x59e3c7);
__builtin_memmove((R+4),(R+28),4);
}
B59e3c9:{NFSU2_TR(0x59e3c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59e3cc:{NFSU2_TR(0x59e3cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e3d1ull));
TAIL_STATIC(0x578d90u,578);
}
B59e3d1:L59e3d1:{c.instructions+=3;NFSU2_TR(0x59e3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e3d2:{NFSU2_TR(0x59e3d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e3d3:{NFSU2_TR(0x59e3d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e3d6:L59e3d6:{c.instructions+=8;NFSU2_TR(0x59e3d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59e3d9:{NFSU2_TR(0x59e3d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e3dc:{NFSU2_TR(0x59e3dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B59e3df:{NFSU2_TR(0x59e3df);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+0))));
}
B59e3e1:{NFSU2_TR(0x59e3e1);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e3e5:{NFSU2_TR(0x59e3e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e3e6:{NFSU2_TR(0x59e3e6);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59e3ea:{NFSU2_TR(0x59e3ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e3efull));
TAIL_STATIC(0x5716c0u,571);
}
B59e3ef:L59e3ef:{c.instructions+=2;NFSU2_TR(0x59e3ef);
__builtin_memmove((R+4),(R+28),4);
}
B59e3f1:{NFSU2_TR(0x59e3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e3f6ull));
TAIL_STATIC(0x578d90u,578);
}
B59e3f6:L59e3f6:{c.instructions+=3;NFSU2_TR(0x59e3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e3f7:{NFSU2_TR(0x59e3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e3f8:{NFSU2_TR(0x59e3f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e400:L59e400:{c.instructions+=8;NFSU2_TR(0x59e400);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B59e402:{NFSU2_TR(0x59e402);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x506ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59e408:{NFSU2_TR(0x59e408);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59e40b:{NFSU2_TR(0x59e40b);
__builtin_memmove((R+0),gp(0x86b378),4);
}
B59e410:{NFSU2_TR(0x59e410);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B59e411:{NFSU2_TR(0x59e411);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x16cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x16cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x16cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59e417:{NFSU2_TR(0x59e417);
__builtin_memmove(gp(0x86b378),(R+0),4);
}
B59e41c:{NFSU2_TR(0x59e41c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e421ull));
TAIL_STATIC(0x5dca30u,5dc);
}
B59e421:L59e421:{c.instructions+=1;NFSU2_TR(0x59e421);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e430:L59e430:{c.instructions+=39;NFSU2_TR(0x59e430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B59e433:{NFSU2_TR(0x59e433);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e436:{NFSU2_TR(0x59e436);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e43c:{NFSU2_TR(0x59e43c);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e442:{NFSU2_TR(0x59e442);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e448:{NFSU2_TR(0x59e448);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59e44a:{NFSU2_TR(0x59e44a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e44c:{NFSU2_TR(0x59e44c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59e44e:{NFSU2_TR(0x59e44e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59e450:{NFSU2_TR(0x59e450);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e452:{NFSU2_TR(0x59e452);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59e454:{NFSU2_TR(0x59e454);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59e456:{NFSU2_TR(0x59e456);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e458:{NFSU2_TR(0x59e458);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59e45a:{NFSU2_TR(0x59e45a);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59e45c:{NFSU2_TR(0x59e45c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e45e:{NFSU2_TR(0x59e45e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e460:{NFSU2_TR(0x59e460);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e464:{NFSU2_TR(0x59e464);
{u32 ea_=u32(r4(R+0)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e46a:{NFSU2_TR(0x59e46a);
{u32 ea_=u32(r4(R+0)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e470:{NFSU2_TR(0x59e470);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e476:{NFSU2_TR(0x59e476);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59e478:{NFSU2_TR(0x59e478);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e47a:{NFSU2_TR(0x59e47a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59e47c:{NFSU2_TR(0x59e47c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59e47e:{NFSU2_TR(0x59e47e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e480:{NFSU2_TR(0x59e480);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59e482:{NFSU2_TR(0x59e482);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59e484:{NFSU2_TR(0x59e484);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e486:{NFSU2_TR(0x59e486);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59e488:{NFSU2_TR(0x59e488);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59e48a:{NFSU2_TR(0x59e48a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e48c:{NFSU2_TR(0x59e48c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e48e:{NFSU2_TR(0x59e48e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e492:{NFSU2_TR(0x59e492);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e496:{NFSU2_TR(0x59e496);
{u32 ea_=u32(u32(8002384u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e49c:{NFSU2_TR(0x59e49c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e49e:{NFSU2_TR(0x59e49e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e4a1:{NFSU2_TR(0x59e4a1);
if(r1(R+518)){{goto L59e51e;}}
}
B59e4a3:L59e4a3:{c.instructions+=5;NFSU2_TR(0x59e4a3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e4a7:{NFSU2_TR(0x59e4a7);
{u32 ea_=u32(u32(8002388u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e4ad:{NFSU2_TR(0x59e4ad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e4af:{NFSU2_TR(0x59e4af);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e4b2:{NFSU2_TR(0x59e4b2);
if(r1(R+518)){{goto L59e51e;}}
}
B59e4b4:L59e4b4:{c.instructions+=3;NFSU2_TR(0x59e4b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e4b7:{NFSU2_TR(0x59e4b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e4b9:{NFSU2_TR(0x59e4b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e4c4;}}
}
B59e4bb:L59e4bb:{c.instructions+=2;NFSU2_TR(0x59e4bb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x508ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B59e4c2:{NFSU2_TR(0x59e4c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e51e;}}
}
B59e4c4:L59e4c4:{c.instructions+=5;NFSU2_TR(0x59e4c4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e4c8:{NFSU2_TR(0x59e4c8);
{u32 ea_=u32(u32(8002392u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e4ce:{NFSU2_TR(0x59e4ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e4d0:{NFSU2_TR(0x59e4d0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e4d3:{NFSU2_TR(0x59e4d3);
if(r1(R+518)){{goto L59e50c;}}
}
B59e4d5:L59e4d5:{c.instructions+=5;NFSU2_TR(0x59e4d5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e4d9:{NFSU2_TR(0x59e4d9);
{u32 ea_=u32(u32(8002396u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e4df:{NFSU2_TR(0x59e4df);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e4e1:{NFSU2_TR(0x59e4e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e4e4:{NFSU2_TR(0x59e4e4);
if(r1(R+518)){{goto L59e50c;}}
}
B59e4e6:L59e4e6:{c.instructions+=9;NFSU2_TR(0x59e4e6);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B59e4eb:{NFSU2_TR(0x59e4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B59e4f1:{NFSU2_TR(0x59e4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e4f5:{NFSU2_TR(0x59e4f5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59e4f9:{NFSU2_TR(0x59e4f9);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e4ff:{NFSU2_TR(0x59e4ff);
{u32 ea_=u32(u32(8002376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e505:{NFSU2_TR(0x59e505);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e507:{NFSU2_TR(0x59e507);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59e50a:{NFSU2_TR(0x59e50a);
if(r1(R+514)){{goto L59e515;}}
}
B59e50c:L59e50c:{c.instructions+=3;NFSU2_TR(0x59e50c);
w4(R+0,u32(0x1ull));
}
B59e511:{NFSU2_TR(0x59e511);
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
B59e514:{NFSU2_TR(0x59e514);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e515:L59e515:{c.instructions+=3;NFSU2_TR(0x59e515);
w4(R+0,u32(0x2ull));
}
B59e51a:{NFSU2_TR(0x59e51a);
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
B59e51d:{NFSU2_TR(0x59e51d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e51e:L59e51e:{c.instructions+=3;NFSU2_TR(0x59e51e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59e520:{NFSU2_TR(0x59e520);
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
B59e523:{NFSU2_TR(0x59e523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e530:L59e530:{c.instructions+=11;NFSU2_TR(0x59e530);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e534:{NFSU2_TR(0x59e534);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e537:{NFSU2_TR(0x59e537);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e53d:{NFSU2_TR(0x59e53d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e53e:{NFSU2_TR(0x59e53e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B59e541:{NFSU2_TR(0x59e541);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e542:{NFSU2_TR(0x59e542);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e543:{NFSU2_TR(0x59e543);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B59e545:{NFSU2_TR(0x59e545);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B59e547:{NFSU2_TR(0x59e547);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e549:{NFSU2_TR(0x59e549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e551;}}
}
B59e54b:L59e54b:{c.instructions+=1;NFSU2_TR(0x59e54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59e551:L59e551:{c.instructions+=4;NFSU2_TR(0x59e551);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x23cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e557:{NFSU2_TR(0x59e557);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59e55a:{NFSU2_TR(0x59e55a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e55c:{NFSU2_TR(0x59e55c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e564;}}
}
B59e55e:L59e55e:{c.instructions+=1;NFSU2_TR(0x59e55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59e564:L59e564:{c.instructions+=2;NFSU2_TR(0x59e564);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59e566:{NFSU2_TR(0x59e566);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e56c;}}
}
B59e568:L59e568:{c.instructions+=2;NFSU2_TR(0x59e568);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59e56a:{NFSU2_TR(0x59e56a);
if(r1(R+518)){{goto L59e578;}}
}
B59e56c:L59e56c:{c.instructions+=2;NFSU2_TR(0x59e56c);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B59e572:{NFSU2_TR(0x59e572);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e578:L59e578:{c.instructions+=7;NFSU2_TR(0x59e578);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e57b:{NFSU2_TR(0x59e57b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e57c:{NFSU2_TR(0x59e57c);
u8 U[3];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59e57e:{NFSU2_TR(0x59e57e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e57f:{NFSU2_TR(0x59e57f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59e582:{NFSU2_TR(0x59e582);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59e583:{NFSU2_TR(0x59e583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e590:L59e590:{c.instructions+=2;NFSU2_TR(0x59e590);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e593:{NFSU2_TR(0x59e593);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e5a0:L59e5a0:{c.instructions+=3;NFSU2_TR(0x59e5a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x506ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e5a6:{NFSU2_TR(0x59e5a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e5a8:{NFSU2_TR(0x59e5a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e5b7;}}
}
B59e5aa:L59e5aa:{c.instructions+=5;NFSU2_TR(0x59e5aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59e5ad:{NFSU2_TR(0x59e5ad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59e5af:{NFSU2_TR(0x59e5af);
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
B59e5b1:{NFSU2_TR(0x59e5b1);
__builtin_memmove((R+0),(R+518),1);
}
B59e5b4:{NFSU2_TR(0x59e5b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e5b7:L59e5b7:{c.instructions+=3;NFSU2_TR(0x59e5b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59e5ba:{NFSU2_TR(0x59e5ba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e5bc:{NFSU2_TR(0x59e5bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e5d0;}}
}
B59e5be:L59e5be:{c.instructions+=4;NFSU2_TR(0x59e5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e5c1:{NFSU2_TR(0x59e5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e5c4:{NFSU2_TR(0x59e5c4);
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
B59e5c6:{NFSU2_TR(0x59e5c6);
if(r1(R+518)){{goto L59e5d0;}}
}
B59e5c8:L59e5c8:{c.instructions+=2;NFSU2_TR(0x59e5c8);
w4(R+0,u32(0x1ull));
}
B59e5cd:{NFSU2_TR(0x59e5cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e5d0:L59e5d0:{c.instructions+=2;NFSU2_TR(0x59e5d0);
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
B59e5d2:{NFSU2_TR(0x59e5d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e5e0:L59e5e0:{c.instructions+=13;NFSU2_TR(0x59e5e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e5e1:{NFSU2_TR(0x59e5e1);
__builtin_memmove((R+20),(R+16),4);
}
B59e5e3:{NFSU2_TR(0x59e5e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59e5e6:{NFSU2_TR(0x59e5e6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59e5e9:{NFSU2_TR(0x59e5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e5ec:{NFSU2_TR(0x59e5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e5ef:{NFSU2_TR(0x59e5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e5f2:{NFSU2_TR(0x59e5f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e5f3:{NFSU2_TR(0x59e5f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e5f4:{NFSU2_TR(0x59e5f4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e5f5:{NFSU2_TR(0x59e5f5);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e5f9:{NFSU2_TR(0x59e5f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e5fa:{NFSU2_TR(0x59e5fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e5ffull));
TAIL_STATIC(0x43d0c0u,43d);
}
B59e5ff:L59e5ff:{c.instructions+=11;NFSU2_TR(0x59e5ff);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e603:{NFSU2_TR(0x59e603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e606:{NFSU2_TR(0x59e606);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e60a:{NFSU2_TR(0x59e60a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e60c:{NFSU2_TR(0x59e60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e610:{NFSU2_TR(0x59e610);
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
B59e613:{NFSU2_TR(0x59e613);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e616:{NFSU2_TR(0x59e616);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e619:{NFSU2_TR(0x59e619);
__builtin_memmove((R+16),(R+20),4);
}
B59e61b:{NFSU2_TR(0x59e61b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e61c:{NFSU2_TR(0x59e61c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e620:L59e620:{c.instructions+=61;NFSU2_TR(0x59e620);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e621:{NFSU2_TR(0x59e621);
__builtin_memmove((R+20),(R+16),4);
}
B59e623:{NFSU2_TR(0x59e623);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59e626:{NFSU2_TR(0x59e626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B59e629:{NFSU2_TR(0x59e629);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e62a:{NFSU2_TR(0x59e62a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e62b:{NFSU2_TR(0x59e62b);
__builtin_memmove((R+24),(R+4),4);
}
B59e62d:{NFSU2_TR(0x59e62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e630:{NFSU2_TR(0x59e630);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e636:{NFSU2_TR(0x59e636);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59e638:{NFSU2_TR(0x59e638);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e63e:{NFSU2_TR(0x59e63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e644:{NFSU2_TR(0x59e644);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e64a:{NFSU2_TR(0x59e64a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59e64e:{NFSU2_TR(0x59e64e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59e650:{NFSU2_TR(0x59e650);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e651:{NFSU2_TR(0x59e651);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e653:{NFSU2_TR(0x59e653);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59e655:{NFSU2_TR(0x59e655);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59e657:{NFSU2_TR(0x59e657);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e659:{NFSU2_TR(0x59e659);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59e65b:{NFSU2_TR(0x59e65b);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59e65d:{NFSU2_TR(0x59e65d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e65f:{NFSU2_TR(0x59e65f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59e661:{NFSU2_TR(0x59e661);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59e663:{NFSU2_TR(0x59e663);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e665:{NFSU2_TR(0x59e665);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e667:{NFSU2_TR(0x59e667);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59e66a:{NFSU2_TR(0x59e66a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e66e:{NFSU2_TR(0x59e66e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e671:{NFSU2_TR(0x59e671);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e674:{NFSU2_TR(0x59e674);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e676:{NFSU2_TR(0x59e676);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e679:{NFSU2_TR(0x59e679);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e67d:{NFSU2_TR(0x59e67d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e683:{NFSU2_TR(0x59e683);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e686:{NFSU2_TR(0x59e686);
{u32 ea_=u32(u32(8371920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e68c:{NFSU2_TR(0x59e68c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e692:{NFSU2_TR(0x59e692);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59e694:{NFSU2_TR(0x59e694);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e69a:{NFSU2_TR(0x59e69a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59e69c:{NFSU2_TR(0x59e69c);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e69f:{NFSU2_TR(0x59e69f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59e6a1:{NFSU2_TR(0x59e6a1);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e6a7:{NFSU2_TR(0x59e6a7);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59e6a9:{NFSU2_TR(0x59e6a9);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e6af:{NFSU2_TR(0x59e6af);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e6b7:{NFSU2_TR(0x59e6b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e6bf:{NFSU2_TR(0x59e6bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e6c7:{NFSU2_TR(0x59e6c7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e6c9:{NFSU2_TR(0x59e6c9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e6cb:{NFSU2_TR(0x59e6cb);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e6ce:{NFSU2_TR(0x59e6ce);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e6d2:{NFSU2_TR(0x59e6d2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e6d4:{NFSU2_TR(0x59e6d4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e6d7:{NFSU2_TR(0x59e6d7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e6d9:{NFSU2_TR(0x59e6d9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e6dc:{NFSU2_TR(0x59e6dc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e6e2:{NFSU2_TR(0x59e6e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e6e4:{NFSU2_TR(0x59e6e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e6e7:{NFSU2_TR(0x59e6e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e6fc;}}
}
B59e6e9:L59e6e9:{c.instructions+=4;NFSU2_TR(0x59e6e9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e6ef:{NFSU2_TR(0x59e6ef);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59e6f2:{NFSU2_TR(0x59e6f2);
{u32 ea_=u32(u32(8371924u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e6f8:{NFSU2_TR(0x59e6f8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e6fc:L59e6fc:{c.instructions+=5;NFSU2_TR(0x59e6fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e700:{NFSU2_TR(0x59e700);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e701:{NFSU2_TR(0x59e701);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e702:{NFSU2_TR(0x59e702);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e705:{NFSU2_TR(0x59e705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e70aull));
TAIL_STATIC(0x59bb00u,59b);
}
B59e70a:L59e70a:{c.instructions+=6;NFSU2_TR(0x59e70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59e70d:{NFSU2_TR(0x59e70d);
{u32 ea_=u32(r4(R+12)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e710:{NFSU2_TR(0x59e710);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59e716:{NFSU2_TR(0x59e716);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e718:{NFSU2_TR(0x59e718);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59e71b:{NFSU2_TR(0x59e71b);
if(r1(R+514)){{goto L59e725;}}
}
B59e71d:L59e71d:{c.instructions+=2;NFSU2_TR(0x59e71d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e71f:{NFSU2_TR(0x59e71f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e725:L59e725:{c.instructions+=5;NFSU2_TR(0x59e725);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e728:{NFSU2_TR(0x59e728);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e72e:{NFSU2_TR(0x59e72e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e730:{NFSU2_TR(0x59e730);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e733:{NFSU2_TR(0x59e733);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e73d;}}
}
B59e735:L59e735:{c.instructions+=2;NFSU2_TR(0x59e735);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e737:{NFSU2_TR(0x59e737);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e73d:L59e73d:{c.instructions+=8;NFSU2_TR(0x59e73d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e743:{NFSU2_TR(0x59e743);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e749:{NFSU2_TR(0x59e749);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e74f:{NFSU2_TR(0x59e74f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e753:{NFSU2_TR(0x59e753);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e759:{NFSU2_TR(0x59e759);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e75b:{NFSU2_TR(0x59e75b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e75e:{NFSU2_TR(0x59e75e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e78e;}}
}
B59e760:L59e760:{c.instructions+=11;NFSU2_TR(0x59e760);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e762:{NFSU2_TR(0x59e762);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e764:{NFSU2_TR(0x59e764);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e766:{NFSU2_TR(0x59e766);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e76c:{NFSU2_TR(0x59e76c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59e770:{NFSU2_TR(0x59e770);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59e774:{NFSU2_TR(0x59e774);
{u32 ea_=u32(r4(R+12)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e77a:{NFSU2_TR(0x59e77a);
{u32 ea_=u32(r4(R+12)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e780:{NFSU2_TR(0x59e780);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e784:{NFSU2_TR(0x59e784);
{u32 ea_=u32(r4(R+12)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e78a:{NFSU2_TR(0x59e78a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e78e:L59e78e:{c.instructions+=11;NFSU2_TR(0x59e78e);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e791:{NFSU2_TR(0x59e791);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59e793:{NFSU2_TR(0x59e793);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e796:{NFSU2_TR(0x59e796);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e798:{NFSU2_TR(0x59e798);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59e79a:{NFSU2_TR(0x59e79a);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e79d:{NFSU2_TR(0x59e79d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59e79f:{NFSU2_TR(0x59e79f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59e7a5:{NFSU2_TR(0x59e7a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e7a7:{NFSU2_TR(0x59e7a7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59e7aa:{NFSU2_TR(0x59e7aa);
if(r1(R+514)){{goto L59e7b4;}}
}
B59e7ac:L59e7ac:{c.instructions+=2;NFSU2_TR(0x59e7ac);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e7ae:{NFSU2_TR(0x59e7ae);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e7b4:L59e7b4:{c.instructions+=3;NFSU2_TR(0x59e7b4);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B59e7b9:{NFSU2_TR(0x59e7b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e7bb:{NFSU2_TR(0x59e7bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e7eb;}}
}
B59e7bd:L59e7bd:{c.instructions+=3;NFSU2_TR(0x59e7bd);
__builtin_memmove((R+0),gp(0x890108),4);
}
B59e7c2:{NFSU2_TR(0x59e7c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59e7c4:{NFSU2_TR(0x59e7c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e7eb;}}
}
B59e7c6:L59e7c6:{c.instructions+=3;NFSU2_TR(0x59e7c6);
__builtin_memmove((R+0),gp(0x890114),4);
}
B59e7cb:{NFSU2_TR(0x59e7cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59e7cd:{NFSU2_TR(0x59e7cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e7e1;}}
}
B59e7cf:L59e7cf:{c.instructions+=3;NFSU2_TR(0x59e7cf);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B59e7d4:{NFSU2_TR(0x59e7d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e7d6:{NFSU2_TR(0x59e7d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e7e1;}}
}
B59e7d8:L59e7d8:{c.instructions+=3;NFSU2_TR(0x59e7d8);
__builtin_memmove((R+0),gp(0x890104),4);
}
B59e7dd:{NFSU2_TR(0x59e7dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59e7df:{NFSU2_TR(0x59e7df);
if(r1(R+518)){{goto L59e7eb;}}
}
B59e7e1:L59e7e1:{c.instructions+=5;NFSU2_TR(0x59e7e1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59e7e3:{NFSU2_TR(0x59e7e3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e7e5:{NFSU2_TR(0x59e7e5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e7e7:{NFSU2_TR(0x59e7e7);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59e7e9:{NFSU2_TR(0x59e7e9);
{goto L59e806;}
}
B59e7eb:L59e7eb:{c.instructions+=7;NFSU2_TR(0x59e7eb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59e7ed:{NFSU2_TR(0x59e7ed);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59e7ef:{NFSU2_TR(0x59e7ef);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e7f5:{NFSU2_TR(0x59e7f5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59e7f7:{NFSU2_TR(0x59e7f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e7f9:{NFSU2_TR(0x59e7f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59e7fc:{NFSU2_TR(0x59e7fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59e806;}}
}
B59e7fe:L59e7fe:{c.instructions+=2;NFSU2_TR(0x59e7fe);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e800:{NFSU2_TR(0x59e800);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e806:L59e806:{c.instructions+=6;NFSU2_TR(0x59e806);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e809:{NFSU2_TR(0x59e809);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59e80f:{NFSU2_TR(0x59e80f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59e811:{NFSU2_TR(0x59e811);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59e814:{NFSU2_TR(0x59e814);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59e816:{NFSU2_TR(0x59e816);
if(r1(R+514)){{goto L59e842;}}
}
B59e818:L59e818:{c.instructions+=13;NFSU2_TR(0x59e818);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e81b:{NFSU2_TR(0x59e81b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e81e:{NFSU2_TR(0x59e81e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e820:{NFSU2_TR(0x59e820);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B59e822:{NFSU2_TR(0x59e822);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59e824:{NFSU2_TR(0x59e824);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e828:{NFSU2_TR(0x59e828);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B59e82a:{NFSU2_TR(0x59e82a);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e830:{NFSU2_TR(0x59e830);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e832:{NFSU2_TR(0x59e832);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e836:{NFSU2_TR(0x59e836);
{u32 ea_=u32(u32(8003352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e83c:{NFSU2_TR(0x59e83c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e840:{NFSU2_TR(0x59e840);
{goto L59e860;}
}
B59e842:L59e842:{c.instructions+=10;NFSU2_TR(0x59e842);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59e844:{NFSU2_TR(0x59e844);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e847:{NFSU2_TR(0x59e847);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59e849:{NFSU2_TR(0x59e849);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e84d:{NFSU2_TR(0x59e84d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e851:{NFSU2_TR(0x59e851);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e854:{NFSU2_TR(0x59e854);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59e856:{NFSU2_TR(0x59e856);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e85a:{NFSU2_TR(0x59e85a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e85e:{NFSU2_TR(0x59e85e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59e860:L59e860:{c.instructions+=19;NFSU2_TR(0x59e860);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e864:{NFSU2_TR(0x59e864);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59e868:{NFSU2_TR(0x59e868);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e86b:{NFSU2_TR(0x59e86b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e86c:{NFSU2_TR(0x59e86c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e86f:{NFSU2_TR(0x59e86f);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e873:{NFSU2_TR(0x59e873);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59e875:{NFSU2_TR(0x59e875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e876:{NFSU2_TR(0x59e876);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e87a:{NFSU2_TR(0x59e87a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e87e:{NFSU2_TR(0x59e87e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e87f:{NFSU2_TR(0x59e87f);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59e882:{NFSU2_TR(0x59e882);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e88a:{NFSU2_TR(0x59e88a);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e892:{NFSU2_TR(0x59e892);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e89a:{NFSU2_TR(0x59e89a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59e89c:{NFSU2_TR(0x59e89c);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59e8a4:{NFSU2_TR(0x59e8a4);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e8a8:{NFSU2_TR(0x59e8a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e8adull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59e8ad:L59e8ad:{c.instructions+=5;NFSU2_TR(0x59e8ad);
u8 U[4];
w4(U+0,u32(0x7fc860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8b2:{NFSU2_TR(0x59e8b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e8b6:{NFSU2_TR(0x59e8b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8b7:{NFSU2_TR(0x59e8b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8b8:{NFSU2_TR(0x59e8b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e8bdull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59e8bd:L59e8bd:{c.instructions+=7;NFSU2_TR(0x59e8bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B59e8c0:{NFSU2_TR(0x59e8c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59e8c4:{NFSU2_TR(0x59e8c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8c5:{NFSU2_TR(0x59e8c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e8c9:{NFSU2_TR(0x59e8c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8ca:{NFSU2_TR(0x59e8ca);
__builtin_memmove((R+4),(R+12),4);
}
B59e8cc:{NFSU2_TR(0x59e8cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e8d1ull));
TAIL_STATIC(0x59bb00u,59b);
}
B59e8d1:L59e8d1:{c.instructions+=8;NFSU2_TR(0x59e8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59e8d4:{NFSU2_TR(0x59e8d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e8d8:{NFSU2_TR(0x59e8d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8d9:{NFSU2_TR(0x59e8d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e8dc:{NFSU2_TR(0x59e8dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59e8e0:{NFSU2_TR(0x59e8e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8e1:{NFSU2_TR(0x59e8e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8e2:{NFSU2_TR(0x59e8e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e8e7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59e8e7:L59e8e7:{c.instructions+=5;NFSU2_TR(0x59e8e7);
u8 U[4];
w4(U+0,u32(0x7fc870ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8ec:{NFSU2_TR(0x59e8ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59e8f0:{NFSU2_TR(0x59e8f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8f1:{NFSU2_TR(0x59e8f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8f2:{NFSU2_TR(0x59e8f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e8f7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59e8f7:L59e8f7:{c.instructions+=7;NFSU2_TR(0x59e8f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B59e8fa:{NFSU2_TR(0x59e8fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59e8fe:{NFSU2_TR(0x59e8fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e8ff:{NFSU2_TR(0x59e8ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59e903:{NFSU2_TR(0x59e903);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e904:{NFSU2_TR(0x59e904);
__builtin_memmove((R+4),(R+24),4);
}
B59e906:{NFSU2_TR(0x59e906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e90bull));
TAIL_STATIC(0x59bb00u,59b);
}
B59e90b:L59e90b:{c.instructions+=3;NFSU2_TR(0x59e90b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e90e:{NFSU2_TR(0x59e90e);
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
B59e910:{NFSU2_TR(0x59e910);
if(r1(R+518)){{goto L59e91c;}}
}
B59e912:L59e912:{c.instructions+=3;NFSU2_TR(0x59e912);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59e916:{NFSU2_TR(0x59e916);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59e91a:{NFSU2_TR(0x59e91a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59e91c:L59e91c:{c.instructions+=6;NFSU2_TR(0x59e91c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59e91d:{NFSU2_TR(0x59e91d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59e91e:{NFSU2_TR(0x59e91e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59e91f:{NFSU2_TR(0x59e91f);
__builtin_memmove((R+16),(R+20),4);
}
B59e921:{NFSU2_TR(0x59e921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59e922:{NFSU2_TR(0x59e922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59e930:L59e930:{c.instructions+=9;NFSU2_TR(0x59e930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e931:{NFSU2_TR(0x59e931);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e932:{NFSU2_TR(0x59e932);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e933:{NFSU2_TR(0x59e933);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59e937:{NFSU2_TR(0x59e937);
u8 U[4];
w4(U+0,u32(0x7a1f1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e93c:{NFSU2_TR(0x59e93c);
__builtin_memmove((R+24),(R+4),4);
}
B59e93e:{NFSU2_TR(0x59e93e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e940:{NFSU2_TR(0x59e940);
__builtin_memmove((R+4),(R+28),4);
}
B59e942:{NFSU2_TR(0x59e942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e947ull));
TAIL_STATIC(0x578ce0u,578);
}
B59e947:L59e947:{c.instructions+=3;NFSU2_TR(0x59e947);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e948:{NFSU2_TR(0x59e948);
__builtin_memmove((R+4),(R+24),4);
}
B59e94a:{NFSU2_TR(0x59e94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e94full));
TAIL_STATIC(0x4031c0u,403);
}
B59e94f:L59e94f:{c.instructions+=4;NFSU2_TR(0x59e94f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e952:{NFSU2_TR(0x59e952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e953:{NFSU2_TR(0x59e953);
__builtin_memmove((R+4),(R+28),4);
}
B59e955:{NFSU2_TR(0x59e955);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e95aull));
TAIL_STATIC(0x571770u,571);
}
B59e95a:L59e95a:{c.instructions+=4;NFSU2_TR(0x59e95a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e95d:{NFSU2_TR(0x59e95d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e95e:{NFSU2_TR(0x59e95e);
__builtin_memmove((R+4),(R+28),4);
}
B59e960:{NFSU2_TR(0x59e960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e965ull));
TAIL_STATIC(0x571770u,571);
}
B59e965:L59e965:{c.instructions+=4;NFSU2_TR(0x59e965);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59e968:{NFSU2_TR(0x59e968);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e969:{NFSU2_TR(0x59e969);
__builtin_memmove((R+4),(R+28),4);
}
B59e96b:{NFSU2_TR(0x59e96b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e970ull));
TAIL_STATIC(0x571770u,571);
}
B59e970:L59e970:{c.instructions+=4;NFSU2_TR(0x59e970);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B59e973:{NFSU2_TR(0x59e973);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e974:{NFSU2_TR(0x59e974);
__builtin_memmove((R+4),(R+28),4);
}
B59e976:{NFSU2_TR(0x59e976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e97bull));
TAIL_STATIC(0x571770u,571);
}
B59e97b:L59e97b:{c.instructions+=4;NFSU2_TR(0x59e97b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e97e:{NFSU2_TR(0x59e97e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e97f:{NFSU2_TR(0x59e97f);
__builtin_memmove((R+4),(R+28),4);
}
B59e981:{NFSU2_TR(0x59e981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e986ull));
TAIL_STATIC(0x571770u,571);
}
B59e986:L59e986:{c.instructions+=7;NFSU2_TR(0x59e986);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e988:{NFSU2_TR(0x59e988);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e98a:{NFSU2_TR(0x59e98a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e98c:{NFSU2_TR(0x59e98c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59e98f:{NFSU2_TR(0x59e98f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e990:{NFSU2_TR(0x59e990);
__builtin_memmove((R+4),(R+28),4);
}
B59e992:{NFSU2_TR(0x59e992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e997ull));
TAIL_STATIC(0x571640u,571);
}
B59e997:L59e997:{c.instructions+=7;NFSU2_TR(0x59e997);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e99a:{NFSU2_TR(0x59e99a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e99c:{NFSU2_TR(0x59e99c);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e99e:{NFSU2_TR(0x59e99e);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9a0:{NFSU2_TR(0x59e9a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9a1:{NFSU2_TR(0x59e9a1);
__builtin_memmove((R+4),(R+28),4);
}
B59e9a3:{NFSU2_TR(0x59e9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e9a8ull));
TAIL_STATIC(0x571640u,571);
}
B59e9a8:L59e9a8:{c.instructions+=7;NFSU2_TR(0x59e9a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e9ab:{NFSU2_TR(0x59e9ab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9ad:{NFSU2_TR(0x59e9ad);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9af:{NFSU2_TR(0x59e9af);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9b1:{NFSU2_TR(0x59e9b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9b2:{NFSU2_TR(0x59e9b2);
__builtin_memmove((R+4),(R+28),4);
}
B59e9b4:{NFSU2_TR(0x59e9b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e9b9ull));
TAIL_STATIC(0x571640u,571);
}
B59e9b9:L59e9b9:{c.instructions+=7;NFSU2_TR(0x59e9b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59e9bc:{NFSU2_TR(0x59e9bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9be:{NFSU2_TR(0x59e9be);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9c0:{NFSU2_TR(0x59e9c0);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9c2:{NFSU2_TR(0x59e9c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9c3:{NFSU2_TR(0x59e9c3);
__builtin_memmove((R+4),(R+28),4);
}
B59e9c5:{NFSU2_TR(0x59e9c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e9caull));
TAIL_STATIC(0x571640u,571);
}
B59e9ca:L59e9ca:{c.instructions+=4;NFSU2_TR(0x59e9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e9cd:{NFSU2_TR(0x59e9cd);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9cf:{NFSU2_TR(0x59e9cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9d0:{NFSU2_TR(0x59e9d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e9d5ull));
TAIL_STATIC(0x57a380u,57a);
}
B59e9d5:L59e9d5:{c.instructions+=5;NFSU2_TR(0x59e9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59e9d8:{NFSU2_TR(0x59e9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59e9db:{NFSU2_TR(0x59e9db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9dc:{NFSU2_TR(0x59e9dc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9dd:{NFSU2_TR(0x59e9dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e9e2ull));
TAIL_STATIC(0x57b980u,57b);
}
B59e9e2:L59e9e2:{c.instructions+=7;NFSU2_TR(0x59e9e2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9e4:{NFSU2_TR(0x59e9e4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9e6:{NFSU2_TR(0x59e9e6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9e8:{NFSU2_TR(0x59e9e8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59e9eb:{NFSU2_TR(0x59e9eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59e9ec:{NFSU2_TR(0x59e9ec);
__builtin_memmove((R+4),(R+28),4);
}
B59e9ee:{NFSU2_TR(0x59e9ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59e9f3ull));
TAIL_STATIC(0x571640u,571);
}
B59e9f3:L59e9f3:{c.instructions+=3;NFSU2_TR(0x59e9f3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B59e9f6:{NFSU2_TR(0x59e9f6);
w4(R+12,u32(0x4ull));
}
B59e9fb:{NFSU2_TR(0x59e9fb);
{goto L59ea00;}
}
B59ea00:L59ea00:{c.instructions+=3;NFSU2_TR(0x59ea00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59ea02:{NFSU2_TR(0x59ea02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea03:{NFSU2_TR(0x59ea03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ea08ull));
TAIL_STATIC(0x59c980u,59c);
}
B59ea08:L59ea08:{c.instructions+=3;NFSU2_TR(0x59ea08);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B59ea0b:{NFSU2_TR(0x59ea0b);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B59ea0c:{NFSU2_TR(0x59ea0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ea00u);}goto L59ea00;}}
}
B59ea0e:L59ea0e:{c.instructions+=2;NFSU2_TR(0x59ea0e);
__builtin_memmove((R+4),(R+28),4);
}
B59ea10:{NFSU2_TR(0x59ea10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ea15ull));
TAIL_STATIC(0x578d90u,578);
}
B59ea15:L59ea15:{c.instructions+=4;NFSU2_TR(0x59ea15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ea16:{NFSU2_TR(0x59ea16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59ea17:{NFSU2_TR(0x59ea17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59ea18:{NFSU2_TR(0x59ea18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59ea20:L59ea20:{c.instructions+=24;NFSU2_TR(0x59ea20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea21:{NFSU2_TR(0x59ea21);
__builtin_memmove((R+20),(R+16),4);
}
B59ea23:{NFSU2_TR(0x59ea23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59ea26:{NFSU2_TR(0x59ea26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x58ull))));
}
B59ea29:{NFSU2_TR(0x59ea29);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea2a:{NFSU2_TR(0x59ea2a);
__builtin_memmove((R+24),(R+4),4);
}
B59ea2c:{NFSU2_TR(0x59ea2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ea2f:{NFSU2_TR(0x59ea2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ea32:{NFSU2_TR(0x59ea32);
{u32 ea_=u32(r4(R+0)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ea38:{NFSU2_TR(0x59ea38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ea3b:{NFSU2_TR(0x59ea3b);
{u32 ea_=u32(r4(R+0)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ea41:{NFSU2_TR(0x59ea41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea42:{NFSU2_TR(0x59ea42);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ea45:{NFSU2_TR(0x59ea45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea46:{NFSU2_TR(0x59ea46);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ea49:{NFSU2_TR(0x59ea49);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ea4d:{NFSU2_TR(0x59ea4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea4e:{NFSU2_TR(0x59ea4e);
__builtin_memmove((R+4),(R+24),4);
}
B59ea50:{NFSU2_TR(0x59ea50);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59ea52:{NFSU2_TR(0x59ea52);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ea58:{NFSU2_TR(0x59ea58);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ea5e:{NFSU2_TR(0x59ea5e);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ea64:{NFSU2_TR(0x59ea64);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ea68:{NFSU2_TR(0x59ea68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ea6dull));
TAIL_STATIC(0x591ad0u,591);
}
B59ea6d:L59ea6d:{c.instructions+=6;NFSU2_TR(0x59ea6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ea70:{NFSU2_TR(0x59ea70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea71:{NFSU2_TR(0x59ea71);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ea75:{NFSU2_TR(0x59ea75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ea76:{NFSU2_TR(0x59ea76);
__builtin_memmove((R+4),(R+24),4);
}
B59ea78:{NFSU2_TR(0x59ea78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ea7dull));
TAIL_STATIC(0x591b70u,591);
}
B59ea7d:L59ea7d:{c.instructions+=10;NFSU2_TR(0x59ea7d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ea81:{NFSU2_TR(0x59ea81);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ea85:{NFSU2_TR(0x59ea85);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59ea87:{NFSU2_TR(0x59ea87);
w4(R+28,u32(0x1ull));
}
B59ea8c:{NFSU2_TR(0x59ea8c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ea90:{NFSU2_TR(0x59ea90);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ea94:{NFSU2_TR(0x59ea94);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ea9c:{NFSU2_TR(0x59ea9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59eaa4:{NFSU2_TR(0x59eaa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59eaa8:{NFSU2_TR(0x59eaa8);
{goto L59eab0;}
}
B59eab0:L59eab0:{c.instructions+=15;NFSU2_TR(0x59eab0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59eab4:{NFSU2_TR(0x59eab4);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59eab8:{NFSU2_TR(0x59eab8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eabb:{NFSU2_TR(0x59eabb);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eac1:{NFSU2_TR(0x59eac1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59eac5:{NFSU2_TR(0x59eac5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59eac9:{NFSU2_TR(0x59eac9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eacd:{NFSU2_TR(0x59eacd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ead1:{NFSU2_TR(0x59ead1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ead4:{NFSU2_TR(0x59ead4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ead8:{NFSU2_TR(0x59ead8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59eadc:{NFSU2_TR(0x59eadc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eadd:{NFSU2_TR(0x59eadd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eade:{NFSU2_TR(0x59eade);
__builtin_memmove((R+4),(R+24),4);
}
B59eae0:{NFSU2_TR(0x59eae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59eae5ull));
TAIL_STATIC(0x591ad0u,591);
}
B59eae5:L59eae5:{c.instructions+=10;NFSU2_TR(0x59eae5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eae9:{NFSU2_TR(0x59eae9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eaed:{NFSU2_TR(0x59eaed);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59eaf1:{NFSU2_TR(0x59eaf1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eaf5:{NFSU2_TR(0x59eaf5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59eaf9:{NFSU2_TR(0x59eaf9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59eafd:{NFSU2_TR(0x59eafd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59eb03:{NFSU2_TR(0x59eb03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59eb05:{NFSU2_TR(0x59eb05);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59eb08:{NFSU2_TR(0x59eb08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59eb1d;}}
}
B59eb0a:L59eb0a:{c.instructions+=5;NFSU2_TR(0x59eb0a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eb0e:{NFSU2_TR(0x59eb0e);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59eb10:{NFSU2_TR(0x59eb10);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59eb12:{NFSU2_TR(0x59eb12);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59eb15:{NFSU2_TR(0x59eb15);
if(r1(R+518)){{goto L59eb70;}}
}
B59eb17:L59eb17:{c.instructions+=2;NFSU2_TR(0x59eb17);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eb1b:{NFSU2_TR(0x59eb1b);
{goto L59eb72;}
}
B59eb1d:L59eb1d:{c.instructions+=19;NFSU2_TR(0x59eb1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59eb1f:{NFSU2_TR(0x59eb1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59eb23:{NFSU2_TR(0x59eb23);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eb27:{NFSU2_TR(0x59eb27);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eb29:{NFSU2_TR(0x59eb29);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eb2c:{NFSU2_TR(0x59eb2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eb2d:{NFSU2_TR(0x59eb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59eb30:{NFSU2_TR(0x59eb30);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59eb34:{NFSU2_TR(0x59eb34);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59eb36:{NFSU2_TR(0x59eb36);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59eb3a:{NFSU2_TR(0x59eb3a);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59eb3d:{NFSU2_TR(0x59eb3d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eb41:{NFSU2_TR(0x59eb41);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eb47:{NFSU2_TR(0x59eb47);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59eb4a:{NFSU2_TR(0x59eb4a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eb4e:{NFSU2_TR(0x59eb4e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59eb51:{NFSU2_TR(0x59eb51);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eb54:{NFSU2_TR(0x59eb54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eb55:{NFSU2_TR(0x59eb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59eb5aull));
TAIL_STATIC(0x570640u,570);
}
B59eb5a:L59eb5a:{c.instructions+=6;NFSU2_TR(0x59eb5a);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eb5e:{NFSU2_TR(0x59eb5e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eb62:{NFSU2_TR(0x59eb62);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59eb66:{NFSU2_TR(0x59eb66);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59eb6a:{NFSU2_TR(0x59eb6a);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eb6e:{NFSU2_TR(0x59eb6e);
{goto L59eb72;}
}
B59eb70:L59eb70:{c.instructions+=1;NFSU2_TR(0x59eb70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59eb72:L59eb72:{c.instructions+=4;NFSU2_TR(0x59eb72);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B59eb73:{NFSU2_TR(0x59eb73);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B59eb76:{NFSU2_TR(0x59eb76);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59eb7a:{NFSU2_TR(0x59eb7a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59eab0u);}goto L59eab0;}}
}
B59eb80:L59eb80:{c.instructions+=6;NFSU2_TR(0x59eb80);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eb84:{NFSU2_TR(0x59eb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59eb85:{NFSU2_TR(0x59eb85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59eb86:{NFSU2_TR(0x59eb86);
__builtin_memmove((R+16),(R+20),4);
}
B59eb88:{NFSU2_TR(0x59eb88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59eb89:{NFSU2_TR(0x59eb89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59eb90:L59eb90:{c.instructions+=9;NFSU2_TR(0x59eb90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eb91:{NFSU2_TR(0x59eb91);
__builtin_memmove((R+20),(R+16),4);
}
B59eb93:{NFSU2_TR(0x59eb93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59eb96:{NFSU2_TR(0x59eb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B59eb99:{NFSU2_TR(0x59eb99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eb9a:{NFSU2_TR(0x59eb9a);
__builtin_memmove((R+24),(R+4),4);
}
B59eb9c:{NFSU2_TR(0x59eb9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59eb9f:{NFSU2_TR(0x59eb9f);
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
B59eba1:{NFSU2_TR(0x59eba1);
if(r1(R+518)){{goto L59ec71;}}
}
B59eba7:L59eba7:{c.instructions+=6;NFSU2_TR(0x59eba7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ebaa:{NFSU2_TR(0x59ebaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ebab:{NFSU2_TR(0x59ebab);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ebaf:{NFSU2_TR(0x59ebaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ebb0:{NFSU2_TR(0x59ebb0);
__builtin_memmove((R+4),(R+24),4);
}
B59ebb2:{NFSU2_TR(0x59ebb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ebb7ull));
TAIL_STATIC(0x591b70u,591);
}
B59ebb7:L59ebb7:{c.instructions+=7;NFSU2_TR(0x59ebb7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ebba:{NFSU2_TR(0x59ebba);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59ebbc:{NFSU2_TR(0x59ebbc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ebc4:{NFSU2_TR(0x59ebc4);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ebca:{NFSU2_TR(0x59ebca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ebcc:{NFSU2_TR(0x59ebcc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59ebcf:{NFSU2_TR(0x59ebcf);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59ebee;}}
}
B59ebd1:L59ebd1:{c.instructions+=9;NFSU2_TR(0x59ebd1);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ebd4:{NFSU2_TR(0x59ebd4);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ebd7:{NFSU2_TR(0x59ebd7);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ebda:{NFSU2_TR(0x59ebda);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ebdd:{NFSU2_TR(0x59ebdd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59ebe1:{NFSU2_TR(0x59ebe1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ebe7:{NFSU2_TR(0x59ebe7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ebe9:{NFSU2_TR(0x59ebe9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59ebec:{NFSU2_TR(0x59ebec);
if(r1(R+514)){{goto L59ec08;}}
}
B59ebee:L59ebee:{c.instructions+=4;NFSU2_TR(0x59ebee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ebf6:{NFSU2_TR(0x59ebf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ebfe:{NFSU2_TR(0x59ebfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ec06:{NFSU2_TR(0x59ec06);
{goto L59ec1f;}
}
B59ec08:L59ec08:{c.instructions+=7;NFSU2_TR(0x59ec08);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ec0c:{NFSU2_TR(0x59ec0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ec0d:{NFSU2_TR(0x59ec0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ec11:{NFSU2_TR(0x59ec11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ec12:{NFSU2_TR(0x59ec12);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ec16:{NFSU2_TR(0x59ec16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ec17:{NFSU2_TR(0x59ec17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ec1cull));
TAIL_STATIC(0x43cf90u,43c);
}
B59ec1c:L59ec1c:{c.instructions+=1;NFSU2_TR(0x59ec1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59ec1f:L59ec1f:{c.instructions+=22;NFSU2_TR(0x59ec1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ec22:{NFSU2_TR(0x59ec22);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ec26:{NFSU2_TR(0x59ec26);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ec2a:{NFSU2_TR(0x59ec2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ec2e:{NFSU2_TR(0x59ec2e);
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
B59ec31:{NFSU2_TR(0x59ec31);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59ec33:{NFSU2_TR(0x59ec33);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ec36:{NFSU2_TR(0x59ec36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ec39:{NFSU2_TR(0x59ec39);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ec3d:{NFSU2_TR(0x59ec3d);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ec40:{NFSU2_TR(0x59ec40);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ec44:{NFSU2_TR(0x59ec44);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ec48:{NFSU2_TR(0x59ec48);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ec4c:{NFSU2_TR(0x59ec4c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ec50:{NFSU2_TR(0x59ec50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ec52:{NFSU2_TR(0x59ec52);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ec56:{NFSU2_TR(0x59ec56);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ec5a:{NFSU2_TR(0x59ec5a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x480ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59ec61:{NFSU2_TR(0x59ec61);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ec67:{NFSU2_TR(0x59ec67);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ec69:{NFSU2_TR(0x59ec69);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59ec6b:{NFSU2_TR(0x59ec6b);
{u32 ea_=u32(r4(R+0)+u32(1008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ec71:L59ec71:{c.instructions+=4;NFSU2_TR(0x59ec71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59ec72:{NFSU2_TR(0x59ec72);
__builtin_memmove((R+16),(R+20),4);
}
B59ec74:{NFSU2_TR(0x59ec74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59ec75:{NFSU2_TR(0x59ec75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59ec80:L59ec80:{c.instructions+=18;NFSU2_TR(0x59ec80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ec81:{NFSU2_TR(0x59ec81);
__builtin_memmove((R+20),(R+16),4);
}
B59ec83:{NFSU2_TR(0x59ec83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59ec86:{NFSU2_TR(0x59ec86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x144ull))));
}
B59ec8c:{NFSU2_TR(0x59ec8c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ec8d:{NFSU2_TR(0x59ec8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ec8e:{NFSU2_TR(0x59ec8e);
__builtin_memmove((R+24),(R+4),4);
}
B59ec90:{NFSU2_TR(0x59ec90);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ec93:{NFSU2_TR(0x59ec93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ec96:{NFSU2_TR(0x59ec96);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ec9c:{NFSU2_TR(0x59ec9c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B59eca0:{NFSU2_TR(0x59eca0);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
w1(R+512,u8((r2(U+0))<(u16(0x2ull))));
}
B59eca4:{NFSU2_TR(0x59eca4);
__builtin_memmove((R+12),(R+512),1);
}
B59eca7:{NFSU2_TR(0x59eca7);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B59eca9:{NFSU2_TR(0x59eca9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ecab:{NFSU2_TR(0x59ecab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ecac:{NFSU2_TR(0x59ecac);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ecaf:{NFSU2_TR(0x59ecaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59ece8;}}
}
B59ecb1:L59ecb1:{c.instructions+=9;NFSU2_TR(0x59ecb1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ecb7:{NFSU2_TR(0x59ecb7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ecba:{NFSU2_TR(0x59ecba);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59ecbc:{NFSU2_TR(0x59ecbc);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ecbf:{NFSU2_TR(0x59ecbf);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59ecc1:{NFSU2_TR(0x59ecc1);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ecc7:{NFSU2_TR(0x59ecc7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ecc9:{NFSU2_TR(0x59ecc9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59eccc:{NFSU2_TR(0x59eccc);
if(r1(R+514)){{goto L59ece4;}}
}
B59ecce:L59ecce:{c.instructions+=6;NFSU2_TR(0x59ecce);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ecd1:{NFSU2_TR(0x59ecd1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B59ecd3:{NFSU2_TR(0x59ecd3);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ecd9:{NFSU2_TR(0x59ecd9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ecdb:{NFSU2_TR(0x59ecdb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59ecde:{NFSU2_TR(0x59ecde);
if(r1(R+514)){{goto L59ece6;}}
}
B59ece0:L59ece0:{c.instructions+=2;NFSU2_TR(0x59ece0);
w1(R+8,u8(0x1ull));
}
B59ece2:{NFSU2_TR(0x59ece2);
{goto L59ece8;}
}
B59ece4:L59ece4:{c.instructions+=1;NFSU2_TR(0x59ece4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59ece6:L59ece6:{c.instructions+=1;NFSU2_TR(0x59ece6);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B59ece8:L59ece8:{c.instructions+=7;NFSU2_TR(0x59ece8);
w4(R+4,u32(r2(R+4)));
}
B59eceb:{NFSU2_TR(0x59eceb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ecef:{NFSU2_TR(0x59ecef);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B59ecf3:{NFSU2_TR(0x59ecf3);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ecf6:{NFSU2_TR(0x59ecf6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ecf8:{NFSU2_TR(0x59ecf8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59ecfb:{NFSU2_TR(0x59ecfb);
if(r1(R+514)){{goto L59ed01;}}
}
B59ecfd:L59ecfd:{c.instructions+=2;NFSU2_TR(0x59ecfd);
w1(R+4,u8(0x1ull));
}
B59ecff:{NFSU2_TR(0x59ecff);
{goto L59ed03;}
}
B59ed01:L59ed01:{c.instructions+=1;NFSU2_TR(0x59ed01);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B59ed03:L59ed03:{c.instructions+=4;NFSU2_TR(0x59ed03);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ed05:{NFSU2_TR(0x59ed05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ed08:{NFSU2_TR(0x59ed08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ed0b:{NFSU2_TR(0x59ed0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x59f4dau,59f);}
}
B59ed11:L59ed11:{c.instructions+=2;NFSU2_TR(0x59ed11);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ed13:{NFSU2_TR(0x59ed13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x59f4dau,59f);}
}
B59ed19:L59ed19:{c.instructions+=2;NFSU2_TR(0x59ed19);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ed1b:{NFSU2_TR(0x59ed1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x59f4dau,59f);}
}
B59ed21:L59ed21:{c.instructions+=12;NFSU2_TR(0x59ed21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ed24:{NFSU2_TR(0x59ed24);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ed27:{NFSU2_TR(0x59ed27);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ed2e:{NFSU2_TR(0x59ed2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ed34:{NFSU2_TR(0x59ed34);
{u32 ea_=u32(r4(R+16)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ed3b:{NFSU2_TR(0x59ed3b);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ed3e:{NFSU2_TR(0x59ed3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59ed40:{NFSU2_TR(0x59ed40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B59ed43:{NFSU2_TR(0x59ed43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ed45:{NFSU2_TR(0x59ed45);
{u32 ea_=u32(r4(R+16)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ed4c:{NFSU2_TR(0x59ed4c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59ed50:{NFSU2_TR(0x59ed50);
if(r1(R+518)){{goto L59ed7e;}}
}
B59ed52:L59ed52:{c.instructions+=4;NFSU2_TR(0x59ed52);
__builtin_memmove((R+0),gp(0x7a17d8),4);
}
B59ed57:{NFSU2_TR(0x59ed57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ed58:{NFSU2_TR(0x59ed58);
__builtin_memmove((R+4),(R+24),4);
}
B59ed5a:{NFSU2_TR(0x59ed5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ed5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ea20u);}goto L59ea20;}
}
B59ed5f:L59ed5f:{c.instructions+=4;NFSU2_TR(0x59ed5f);
{u32 ea_=u32(u32(8001504u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59ed65:{NFSU2_TR(0x59ed65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59ed67:{NFSU2_TR(0x59ed67);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59ed6a:{NFSU2_TR(0x59ed6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59ed7e;}}
}
B59ed6c:L59ed6c:{c.instructions+=5;NFSU2_TR(0x59ed6c);
__builtin_memmove((R+4),gp(0x7a17d4),4);
}
B59ed72:{NFSU2_TR(0x59ed72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ed75:{NFSU2_TR(0x59ed75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ed76:{NFSU2_TR(0x59ed76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ed79:{NFSU2_TR(0x59ed79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ed7eull));
TAIL_STATIC(0x591540u,591);
}
B59ed7e:L59ed7e:{c.instructions+=15;NFSU2_TR(0x59ed7e);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ed81:{NFSU2_TR(0x59ed81);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ed82:{NFSU2_TR(0x59ed82);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ed85:{NFSU2_TR(0x59ed85);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ed89:{NFSU2_TR(0x59ed89);
__builtin_memmove((R+4),(R+24),4);
}
B59ed8b:{NFSU2_TR(0x59ed8b);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59ed8e:{NFSU2_TR(0x59ed8e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59ed90:{NFSU2_TR(0x59ed90);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ed93:{NFSU2_TR(0x59ed93);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ed96:{NFSU2_TR(0x59ed96);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ed99:{NFSU2_TR(0x59ed99);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ed9d:{NFSU2_TR(0x59ed9d);
{u32 ea_=u32(u32(8001512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59eda3:{NFSU2_TR(0x59eda3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eda6:{NFSU2_TR(0x59eda6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eda7:{NFSU2_TR(0x59eda7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59edacull));
TAIL_STATIC(0x591b70u,591);
}
B59edac:L59edac:{c.instructions+=8;NFSU2_TR(0x59edac);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59edb0:{NFSU2_TR(0x59edb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59edb4:{NFSU2_TR(0x59edb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59edbb:{NFSU2_TR(0x59edbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59edc2:{NFSU2_TR(0x59edc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59edc5:{NFSU2_TR(0x59edc5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59edc6:{NFSU2_TR(0x59edc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59edcd:{NFSU2_TR(0x59edcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59edd2ull));
TAIL_STATIC(0x574b90u,574);
}
B59edd2:L59edd2:{c.instructions+=5;NFSU2_TR(0x59edd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59edd5:{NFSU2_TR(0x59edd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59edd8:{NFSU2_TR(0x59edd8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59edd9:{NFSU2_TR(0x59edd9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59edda:{NFSU2_TR(0x59edda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59eddfull));
TAIL_STATIC(0x574f40u,574);
}
B59eddf:L59eddf:{c.instructions+=5;NFSU2_TR(0x59eddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ede2:{NFSU2_TR(0x59ede2);
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
B59ede5:{NFSU2_TR(0x59ede5);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ede9:{NFSU2_TR(0x59ede9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59edea:{NFSU2_TR(0x59edea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59edefull));
TAIL_STATIC(0x574bf0u,574);
}
B59edef:L59edef:{c.instructions+=12;NFSU2_TR(0x59edef);
{u32 ea_=u32(u32(8001524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59edf5:{NFSU2_TR(0x59edf5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59edf8:{NFSU2_TR(0x59edf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59edff:{NFSU2_TR(0x59edff);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ee0a:{NFSU2_TR(0x59ee0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ee15:{NFSU2_TR(0x59ee15);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ee19:{NFSU2_TR(0x59ee19);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ee24:{NFSU2_TR(0x59ee24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ee28:{NFSU2_TR(0x59ee28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee29:{NFSU2_TR(0x59ee29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee2a:{NFSU2_TR(0x59ee2a);
__builtin_memmove((R+4),(R+24),4);
}
B59ee2c:{NFSU2_TR(0x59ee2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ee31ull));
TAIL_STATIC(0x591b70u,591);
}
B59ee31:L59ee31:{c.instructions+=7;NFSU2_TR(0x59ee31);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ee38:{NFSU2_TR(0x59ee38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee39:{NFSU2_TR(0x59ee39);
u8 U[4];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ee40:{NFSU2_TR(0x59ee40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee41:{NFSU2_TR(0x59ee41);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ee48:{NFSU2_TR(0x59ee48);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee49:{NFSU2_TR(0x59ee49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ee4eull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59ee4e:L59ee4e:{c.instructions+=5;NFSU2_TR(0x59ee4e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ee55:{NFSU2_TR(0x59ee55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee56:{NFSU2_TR(0x59ee56);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ee5d:{NFSU2_TR(0x59ee5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee5e:{NFSU2_TR(0x59ee5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ee63ull));
TAIL_STATIC(0x43cf10u,43c);
}
B59ee63:L59ee63:{c.instructions+=7;NFSU2_TR(0x59ee63);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ee67:{NFSU2_TR(0x59ee67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59ee6a:{NFSU2_TR(0x59ee6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee6b:{NFSU2_TR(0x59ee6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ee6f:{NFSU2_TR(0x59ee6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee70:{NFSU2_TR(0x59ee70);
__builtin_memmove((R+4),(R+24),4);
}
B59ee72:{NFSU2_TR(0x59ee72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ee77ull));
TAIL_STATIC(0x591be0u,591);
}
B59ee77:L59ee77:{c.instructions+=12;NFSU2_TR(0x59ee77);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ee7b:{NFSU2_TR(0x59ee7b);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ee82:{NFSU2_TR(0x59ee82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ee83:{NFSU2_TR(0x59ee83);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ee87:{NFSU2_TR(0x59ee87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ee8a:{NFSU2_TR(0x59ee8a);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ee91:{NFSU2_TR(0x59ee91);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ee93:{NFSU2_TR(0x59ee93);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ee97:{NFSU2_TR(0x59ee97);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ee9e:{NFSU2_TR(0x59ee9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59eea0:{NFSU2_TR(0x59eea0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eea3:{NFSU2_TR(0x59eea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59eea8ull));
TAIL_STATIC(0x576970u,576);
}
B59eea8:L59eea8:{c.instructions+=9;NFSU2_TR(0x59eea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59eeab:{NFSU2_TR(0x59eeab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59eeae:{NFSU2_TR(0x59eeae);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eeb1:{NFSU2_TR(0x59eeb1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eeb5:{NFSU2_TR(0x59eeb5);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eeb8:{NFSU2_TR(0x59eeb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eeb9:{NFSU2_TR(0x59eeb9);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59eebc:{NFSU2_TR(0x59eebc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eebf:{NFSU2_TR(0x59eebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59eec4ull));
TAIL_STATIC(0x574890u,574);
}
B59eec4:L59eec4:{c.instructions+=9;NFSU2_TR(0x59eec4);
{u32 ea_=u32(u32(8001520u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eeca:{NFSU2_TR(0x59eeca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eece:{NFSU2_TR(0x59eece);
{u32 ea_=u32(u32(8001536u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eed4:{NFSU2_TR(0x59eed4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59eed6:{NFSU2_TR(0x59eed6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59eeda:{NFSU2_TR(0x59eeda);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59eede:{NFSU2_TR(0x59eede);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eedf:{NFSU2_TR(0x59eedf);
__builtin_memmove((R+4),(R+24),4);
}
B59eee1:{NFSU2_TR(0x59eee1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59eee6ull));
TAIL_STATIC(0x591950u,591);
}
B59eee6:L59eee6:{c.instructions+=17;NFSU2_TR(0x59eee6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59eeea:{NFSU2_TR(0x59eeea);
{u32 ea_=u32(u32(8001532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eef0:{NFSU2_TR(0x59eef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59eef3:{NFSU2_TR(0x59eef3);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59eefa:{NFSU2_TR(0x59eefa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59eefb:{NFSU2_TR(0x59eefb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59eeff:{NFSU2_TR(0x59eeff);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ef06:{NFSU2_TR(0x59ef06);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59ef08:{NFSU2_TR(0x59ef08);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ef0f:{NFSU2_TR(0x59ef0f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ef16:{NFSU2_TR(0x59ef16);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59ef18:{NFSU2_TR(0x59ef18);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ef1f:{NFSU2_TR(0x59ef1f);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ef26:{NFSU2_TR(0x59ef26);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59ef28:{NFSU2_TR(0x59ef28);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ef2f:{NFSU2_TR(0x59ef2f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59ef31:{NFSU2_TR(0x59ef31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ef36ull));
TAIL_STATIC(0x574b90u,574);
}
B59ef36:L59ef36:{c.instructions+=4;NFSU2_TR(0x59ef36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ef39:{NFSU2_TR(0x59ef39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ef3a:{NFSU2_TR(0x59ef3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ef3b:{NFSU2_TR(0x59ef3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ef40ull));
TAIL_STATIC(0x574f40u,574);
}
B59ef40:L59ef40:{c.instructions+=5;NFSU2_TR(0x59ef40);
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
B59ef43:{NFSU2_TR(0x59ef43);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ef4a:{NFSU2_TR(0x59ef4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ef4b:{NFSU2_TR(0x59ef4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59ef4e:{NFSU2_TR(0x59ef4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ef53ull));
TAIL_STATIC(0x574bf0u,574);
}
B59ef53:L59ef53:{c.instructions+=14;NFSU2_TR(0x59ef53);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ef5a:{NFSU2_TR(0x59ef5a);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ef5e:{NFSU2_TR(0x59ef5e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ef62:{NFSU2_TR(0x59ef62);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ef66:{NFSU2_TR(0x59ef66);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ef6d:{NFSU2_TR(0x59ef6d);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ef71:{NFSU2_TR(0x59ef71);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ef75:{NFSU2_TR(0x59ef75);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59ef79:{NFSU2_TR(0x59ef79);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ef80:{NFSU2_TR(0x59ef80);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ef81:{NFSU2_TR(0x59ef81);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ef85:{NFSU2_TR(0x59ef85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ef86:{NFSU2_TR(0x59ef86);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ef8a:{NFSU2_TR(0x59ef8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ef8full));
TAIL_STATIC(0x43c570u,43c);
}
B59ef8f:L59ef8f:{c.instructions+=11;NFSU2_TR(0x59ef8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B59ef96:{NFSU2_TR(0x59ef96);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59ef99:{NFSU2_TR(0x59ef99);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59ef9e:{NFSU2_TR(0x59ef9e);
__builtin_memmove((R+4),(R+24),4);
}
B59efa0:{NFSU2_TR(0x59efa0);
__builtin_memmove((R+12),(R+0),4);
}
B59efa2:{NFSU2_TR(0x59efa2);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ccull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59efa9:{NFSU2_TR(0x59efa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59efac:{NFSU2_TR(0x59efac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efad:{NFSU2_TR(0x59efad);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59efb4:{NFSU2_TR(0x59efb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efb5:{NFSU2_TR(0x59efb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59efbaull));
TAIL_STATIC(0x591b70u,591);
}
B59efba:L59efba:{c.instructions+=7;NFSU2_TR(0x59efba);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59efc1:{NFSU2_TR(0x59efc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efc2:{NFSU2_TR(0x59efc2);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59efc9:{NFSU2_TR(0x59efc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efca:{NFSU2_TR(0x59efca);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59efd1:{NFSU2_TR(0x59efd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efd2:{NFSU2_TR(0x59efd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59efd7ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59efd7:L59efd7:{c.instructions+=5;NFSU2_TR(0x59efd7);
u8 U[4];
w4(U+0,u32(u32(u32(0x13cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59efde:{NFSU2_TR(0x59efde);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efdf:{NFSU2_TR(0x59efdf);
u8 U[4];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59efe6:{NFSU2_TR(0x59efe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59efe7:{NFSU2_TR(0x59efe7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59efecull));
TAIL_STATIC(0x43cf10u,43c);
}
B59efec:L59efec:{c.instructions+=5;NFSU2_TR(0x59efec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59efef:{NFSU2_TR(0x59efef);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59eff3:{NFSU2_TR(0x59eff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59eff6:{NFSU2_TR(0x59eff6);
{u32 ea_=u32(u32(8001528u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59effc:{NFSU2_TR(0x59effc);
{u32 ea_=u32(u32(8001556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x59f002u,59f);
}
XIT:NFSU2_TR_EXIT(0x59e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
