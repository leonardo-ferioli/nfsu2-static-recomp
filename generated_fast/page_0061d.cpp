#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48a(u8* __restrict R,Cpu& c);
u32 body_48d(u8* __restrict R,Cpu& c);
u32 body_48f(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5c5(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_611(u8* __restrict R,Cpu& c);
u32 body_612(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61e(u8* __restrict R,Cpu& c);
u32 body_634(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x61d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x61d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_61d(u8* __restrict R,Cpu& c);
u32 page_61d(Cpu& c){return body_61d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_61d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x61d001:goto L61d001;
case 0x61d004:c.instructions+=13;goto B61d004;
case 0x61d00b:c.instructions+=12;goto B61d00b;
case 0x61d011:c.instructions+=11;goto B61d011;
case 0x61d014:c.instructions+=10;goto B61d014;
case 0x61d01b:c.instructions+=9;goto B61d01b;
case 0x61d021:c.instructions+=8;goto B61d021;
case 0x61d024:c.instructions+=7;goto B61d024;
case 0x61d02b:c.instructions+=6;goto B61d02b;
case 0x61d031:c.instructions+=5;goto B61d031;
case 0x61d034:c.instructions+=4;goto B61d034;
case 0x61d03b:c.instructions+=3;goto B61d03b;
case 0x61d041:c.instructions+=2;goto B61d041;
case 0x61d044:c.instructions+=1;goto B61d044;
case 0x61d049:goto L61d049;
case 0x61d050:goto L61d050;
case 0x61d052:c.instructions+=13;goto B61d052;
case 0x61d057:c.instructions+=12;goto B61d057;
case 0x61d05d:c.instructions+=11;goto B61d05d;
case 0x61d05e:c.instructions+=10;goto B61d05e;
case 0x61d065:c.instructions+=9;goto B61d065;
case 0x61d066:c.instructions+=8;goto B61d066;
case 0x61d06b:c.instructions+=7;goto B61d06b;
case 0x61d06c:c.instructions+=6;goto B61d06c;
case 0x61d06d:c.instructions+=5;goto B61d06d;
case 0x61d06e:c.instructions+=4;goto B61d06e;
case 0x61d06f:c.instructions+=3;goto B61d06f;
case 0x61d070:c.instructions+=2;goto B61d070;
case 0x61d072:c.instructions+=1;goto B61d072;
case 0x61d077:goto L61d077;
case 0x61d079:c.instructions+=7;goto B61d079;
case 0x61d07c:c.instructions+=6;goto B61d07c;
case 0x61d080:c.instructions+=5;goto B61d080;
case 0x61d084:c.instructions+=4;goto B61d084;
case 0x61d086:c.instructions+=3;goto B61d086;
case 0x61d088:c.instructions+=2;goto B61d088;
case 0x61d08c:c.instructions+=1;goto B61d08c;
case 0x61d08e:goto L61d08e;
case 0x61d091:c.instructions+=5;goto B61d091;
case 0x61d092:c.instructions+=4;goto B61d092;
case 0x61d094:c.instructions+=3;goto B61d094;
case 0x61d097:c.instructions+=2;goto B61d097;
case 0x61d09a:c.instructions+=1;goto B61d09a;
case 0x61d09f:goto L61d09f;
case 0x61d0a1:goto L61d0a1;
case 0x61d0a3:goto L61d0a3;
case 0x61d0a6:c.instructions+=4;goto B61d0a6;
case 0x61d0a9:c.instructions+=3;goto B61d0a9;
case 0x61d0ac:c.instructions+=2;goto B61d0ac;
case 0x61d0b4:c.instructions+=1;goto B61d0b4;
case 0x61d0b6:goto L61d0b6;
case 0x61d0bc:c.instructions+=2;goto B61d0bc;
case 0x61d0bd:c.instructions+=1;goto B61d0bd;
case 0x61d0c2:goto L61d0c2;
case 0x61d0c4:c.instructions+=5;goto B61d0c4;
case 0x61d0c7:c.instructions+=4;goto B61d0c7;
case 0x61d0cb:c.instructions+=3;goto B61d0cb;
case 0x61d0cd:c.instructions+=2;goto B61d0cd;
case 0x61d0d5:c.instructions+=1;goto B61d0d5;
case 0x61d0d7:goto L61d0d7;
case 0x61d0da:c.instructions+=5;goto B61d0da;
case 0x61d0db:c.instructions+=4;goto B61d0db;
case 0x61d0dd:c.instructions+=3;goto B61d0dd;
case 0x61d0e0:c.instructions+=2;goto B61d0e0;
case 0x61d0e3:c.instructions+=1;goto B61d0e3;
case 0x61d0e8:goto L61d0e8;
case 0x61d0ea:goto L61d0ea;
case 0x61d0ec:goto L61d0ec;
case 0x61d0f4:c.instructions+=1;goto B61d0f4;
case 0x61d0f7:goto L61d0f7;
case 0x61d0fc:c.instructions+=13;goto B61d0fc;
case 0x61d0ff:c.instructions+=12;goto B61d0ff;
case 0x61d102:c.instructions+=11;goto B61d102;
case 0x61d106:c.instructions+=10;goto B61d106;
case 0x61d109:c.instructions+=9;goto B61d109;
case 0x61d10c:c.instructions+=8;goto B61d10c;
case 0x61d112:c.instructions+=7;goto B61d112;
case 0x61d117:c.instructions+=6;goto B61d117;
case 0x61d119:c.instructions+=5;goto B61d119;
case 0x61d11f:c.instructions+=4;goto B61d11f;
case 0x61d122:c.instructions+=3;goto B61d122;
case 0x61d125:c.instructions+=2;goto B61d125;
case 0x61d12b:c.instructions+=1;goto B61d12b;
case 0x61d130:goto L61d130;
case 0x61d134:c.instructions+=11;goto B61d134;
case 0x61d136:c.instructions+=10;goto B61d136;
case 0x61d137:c.instructions+=9;goto B61d137;
case 0x61d13a:c.instructions+=8;goto B61d13a;
case 0x61d13d:c.instructions+=7;goto B61d13d;
case 0x61d13f:c.instructions+=6;goto B61d13f;
case 0x61d140:c.instructions+=5;goto B61d140;
case 0x61d141:c.instructions+=4;goto B61d141;
case 0x61d142:c.instructions+=3;goto B61d142;
case 0x61d149:c.instructions+=2;goto B61d149;
case 0x61d14c:c.instructions+=1;goto B61d14c;
case 0x61d150:goto L61d150;
case 0x61d151:c.instructions+=16;goto B61d151;
case 0x61d153:c.instructions+=15;goto B61d153;
case 0x61d156:c.instructions+=14;goto B61d156;
case 0x61d15c:c.instructions+=13;goto B61d15c;
case 0x61d15f:c.instructions+=12;goto B61d15f;
case 0x61d160:c.instructions+=11;goto B61d160;
case 0x61d161:c.instructions+=10;goto B61d161;
case 0x61d162:c.instructions+=9;goto B61d162;
case 0x61d164:c.instructions+=8;goto B61d164;
case 0x61d166:c.instructions+=7;goto B61d166;
case 0x61d169:c.instructions+=6;goto B61d169;
case 0x61d16e:c.instructions+=5;goto B61d16e;
case 0x61d172:c.instructions+=4;goto B61d172;
case 0x61d176:c.instructions+=3;goto B61d176;
case 0x61d17a:c.instructions+=2;goto B61d17a;
case 0x61d17e:c.instructions+=1;goto B61d17e;
case 0x61d180:goto L61d180;
case 0x61d183:c.instructions+=2;goto B61d183;
case 0x61d185:c.instructions+=1;goto B61d185;
case 0x61d18b:goto L61d18b;
case 0x61d18f:c.instructions+=1;goto B61d18f;
case 0x61d191:goto L61d191;
case 0x61d193:c.instructions+=1;goto B61d193;
case 0x61d199:goto L61d199;
case 0x61d19c:c.instructions+=1;goto B61d19c;
case 0x61d1a2:goto L61d1a2;
case 0x61d1a5:c.instructions+=2;goto B61d1a5;
case 0x61d1a7:c.instructions+=1;goto B61d1a7;
case 0x61d1a9:goto L61d1a9;
case 0x61d1af:c.instructions+=1;goto B61d1af;
case 0x61d1b1:goto L61d1b1;
case 0x61d1b3:c.instructions+=1;goto B61d1b3;
case 0x61d1b8:goto L61d1b8;
case 0x61d1bb:c.instructions+=6;goto B61d1bb;
case 0x61d1c1:c.instructions+=5;goto B61d1c1;
case 0x61d1c6:c.instructions+=4;goto B61d1c6;
case 0x61d1c9:c.instructions+=3;goto B61d1c9;
case 0x61d1cb:c.instructions+=2;goto B61d1cb;
case 0x61d1cf:c.instructions+=1;goto B61d1cf;
case 0x61d1d1:goto L61d1d1;
case 0x61d1d3:c.instructions+=1;goto B61d1d3;
case 0x61d1d9:goto L61d1d9;
case 0x61d1da:c.instructions+=3;goto B61d1da;
case 0x61d1de:c.instructions+=2;goto B61d1de;
case 0x61d1df:c.instructions+=1;goto B61d1df;
case 0x61d1e1:goto L61d1e1;
case 0x61d1e3:c.instructions+=1;goto B61d1e3;
case 0x61d1e5:goto L61d1e5;
case 0x61d1e8:c.instructions+=6;goto B61d1e8;
case 0x61d1e9:c.instructions+=5;goto B61d1e9;
case 0x61d1ed:c.instructions+=4;goto B61d1ed;
case 0x61d1ee:c.instructions+=3;goto B61d1ee;
case 0x61d1ef:c.instructions+=2;goto B61d1ef;
case 0x61d1f9:c.instructions+=1;goto B61d1f9;
case 0x61d1fe:goto L61d1fe;
case 0x61d201:c.instructions+=1;goto B61d201;
case 0x61d203:goto L61d203;
case 0x61d206:c.instructions+=4;goto B61d206;
case 0x61d207:c.instructions+=3;goto B61d207;
case 0x61d20b:c.instructions+=2;goto B61d20b;
case 0x61d20f:c.instructions+=1;goto B61d20f;
case 0x61d210:goto L61d210;
case 0x61d215:goto L61d215;
case 0x61d218:goto L61d218;
case 0x61d21d:c.instructions+=12;goto B61d21d;
case 0x61d220:c.instructions+=11;goto B61d220;
case 0x61d222:c.instructions+=10;goto B61d222;
case 0x61d224:c.instructions+=9;goto B61d224;
case 0x61d227:c.instructions+=8;goto B61d227;
case 0x61d228:c.instructions+=7;goto B61d228;
case 0x61d22f:c.instructions+=6;goto B61d22f;
case 0x61d230:c.instructions+=5;goto B61d230;
case 0x61d232:c.instructions+=4;goto B61d232;
case 0x61d233:c.instructions+=3;goto B61d233;
case 0x61d239:c.instructions+=2;goto B61d239;
case 0x61d23d:c.instructions+=1;goto B61d23d;
case 0x61d242:goto L61d242;
case 0x61d245:c.instructions+=1;goto B61d245;
case 0x61d24b:goto L61d24b;
case 0x61d24f:c.instructions+=5;goto B61d24f;
case 0x61d253:c.instructions+=4;goto B61d253;
case 0x61d254:c.instructions+=3;goto B61d254;
case 0x61d255:c.instructions+=2;goto B61d255;
case 0x61d257:c.instructions+=1;goto B61d257;
case 0x61d25c:goto L61d25c;
case 0x61d25e:c.instructions+=1;goto B61d25e;
case 0x61d264:goto L61d264;
case 0x61d266:c.instructions+=1;goto B61d266;
case 0x61d268:goto L61d268;
case 0x61d26c:c.instructions+=23;goto B61d26c;
case 0x61d26f:c.instructions+=22;goto B61d26f;
case 0x61d272:c.instructions+=21;goto B61d272;
case 0x61d275:c.instructions+=20;goto B61d275;
case 0x61d278:c.instructions+=19;goto B61d278;
case 0x61d27b:c.instructions+=18;goto B61d27b;
case 0x61d27f:c.instructions+=17;goto B61d27f;
case 0x61d283:c.instructions+=16;goto B61d283;
case 0x61d285:c.instructions+=15;goto B61d285;
case 0x61d287:c.instructions+=14;goto B61d287;
case 0x61d28a:c.instructions+=13;goto B61d28a;
case 0x61d28c:c.instructions+=12;goto B61d28c;
case 0x61d28f:c.instructions+=11;goto B61d28f;
case 0x61d292:c.instructions+=10;goto B61d292;
case 0x61d295:c.instructions+=9;goto B61d295;
case 0x61d298:c.instructions+=8;goto B61d298;
case 0x61d29b:c.instructions+=7;goto B61d29b;
case 0x61d29e:c.instructions+=6;goto B61d29e;
case 0x61d2a1:c.instructions+=5;goto B61d2a1;
case 0x61d2a4:c.instructions+=4;goto B61d2a4;
case 0x61d2a7:c.instructions+=3;goto B61d2a7;
case 0x61d2aa:c.instructions+=2;goto B61d2aa;
case 0x61d2ad:c.instructions+=1;goto B61d2ad;
case 0x61d2b0:goto L61d2b0;
case 0x61d2b2:c.instructions+=1;goto B61d2b2;
case 0x61d2b7:goto L61d2b7;
case 0x61d2b9:c.instructions+=3;goto B61d2b9;
case 0x61d2bc:c.instructions+=2;goto B61d2bc;
case 0x61d2be:c.instructions+=1;goto B61d2be;
case 0x61d2c4:goto L61d2c4;
case 0x61d2c8:c.instructions+=3;goto B61d2c8;
case 0x61d2c9:c.instructions+=2;goto B61d2c9;
case 0x61d2cb:c.instructions+=1;goto B61d2cb;
case 0x61d2d0:goto L61d2d0;
case 0x61d2d4:c.instructions+=2;goto B61d2d4;
case 0x61d2d6:c.instructions+=1;goto B61d2d6;
case 0x61d2d8:goto L61d2d8;
case 0x61d2db:c.instructions+=2;goto B61d2db;
case 0x61d2dd:c.instructions+=1;goto B61d2dd;
case 0x61d2e0:goto L61d2e0;
case 0x61d2e3:c.instructions+=2;goto B61d2e3;
case 0x61d2e5:c.instructions+=1;goto B61d2e5;
case 0x61d2eb:goto L61d2eb;
case 0x61d2f0:c.instructions+=1;goto B61d2f0;
case 0x61d2f5:goto L61d2f5;
case 0x61d2f8:c.instructions+=3;goto B61d2f8;
case 0x61d2fa:c.instructions+=2;goto B61d2fa;
case 0x61d2fe:c.instructions+=1;goto B61d2fe;
case 0x61d304:goto L61d304;
case 0x61d306:c.instructions+=10;goto B61d306;
case 0x61d309:c.instructions+=9;goto B61d309;
case 0x61d30c:c.instructions+=8;goto B61d30c;
case 0x61d30f:c.instructions+=7;goto B61d30f;
case 0x61d313:c.instructions+=6;goto B61d313;
case 0x61d316:c.instructions+=5;goto B61d316;
case 0x61d31a:c.instructions+=4;goto B61d31a;
case 0x61d31d:c.instructions+=3;goto B61d31d;
case 0x61d321:c.instructions+=2;goto B61d321;
case 0x61d329:c.instructions+=1;goto B61d329;
case 0x61d32f:goto L61d32f;
case 0x61d332:c.instructions+=3;goto B61d332;
case 0x61d333:c.instructions+=2;goto B61d333;
case 0x61d337:c.instructions+=1;goto B61d337;
case 0x61d33c:goto L61d33c;
case 0x61d340:c.instructions+=55;goto B61d340;
case 0x61d343:c.instructions+=54;goto B61d343;
case 0x61d344:c.instructions+=53;goto B61d344;
case 0x61d348:c.instructions+=52;goto B61d348;
case 0x61d34b:c.instructions+=51;goto B61d34b;
case 0x61d34d:c.instructions+=50;goto B61d34d;
case 0x61d351:c.instructions+=49;goto B61d351;
case 0x61d354:c.instructions+=48;goto B61d354;
case 0x61d356:c.instructions+=47;goto B61d356;
case 0x61d35a:c.instructions+=46;goto B61d35a;
case 0x61d35c:c.instructions+=45;goto B61d35c;
case 0x61d35e:c.instructions+=44;goto B61d35e;
case 0x61d362:c.instructions+=43;goto B61d362;
case 0x61d365:c.instructions+=42;goto B61d365;
case 0x61d369:c.instructions+=41;goto B61d369;
case 0x61d36c:c.instructions+=40;goto B61d36c;
case 0x61d36e:c.instructions+=39;goto B61d36e;
case 0x61d372:c.instructions+=38;goto B61d372;
case 0x61d375:c.instructions+=37;goto B61d375;
case 0x61d377:c.instructions+=36;goto B61d377;
case 0x61d37b:c.instructions+=35;goto B61d37b;
case 0x61d37e:c.instructions+=34;goto B61d37e;
case 0x61d380:c.instructions+=33;goto B61d380;
case 0x61d384:c.instructions+=32;goto B61d384;
case 0x61d387:c.instructions+=31;goto B61d387;
case 0x61d38b:c.instructions+=30;goto B61d38b;
case 0x61d38e:c.instructions+=29;goto B61d38e;
case 0x61d390:c.instructions+=28;goto B61d390;
case 0x61d394:c.instructions+=27;goto B61d394;
case 0x61d397:c.instructions+=26;goto B61d397;
case 0x61d399:c.instructions+=25;goto B61d399;
case 0x61d39d:c.instructions+=24;goto B61d39d;
case 0x61d3a0:c.instructions+=23;goto B61d3a0;
case 0x61d3a2:c.instructions+=22;goto B61d3a2;
case 0x61d3a6:c.instructions+=21;goto B61d3a6;
case 0x61d3aa:c.instructions+=20;goto B61d3aa;
case 0x61d3ae:c.instructions+=19;goto B61d3ae;
case 0x61d3b1:c.instructions+=18;goto B61d3b1;
case 0x61d3b5:c.instructions+=17;goto B61d3b5;
case 0x61d3b9:c.instructions+=16;goto B61d3b9;
case 0x61d3bc:c.instructions+=15;goto B61d3bc;
case 0x61d3c3:c.instructions+=14;goto B61d3c3;
case 0x61d3c5:c.instructions+=13;goto B61d3c5;
case 0x61d3c9:c.instructions+=12;goto B61d3c9;
case 0x61d3cc:c.instructions+=11;goto B61d3cc;
case 0x61d3ce:c.instructions+=10;goto B61d3ce;
case 0x61d3d2:c.instructions+=9;goto B61d3d2;
case 0x61d3d5:c.instructions+=8;goto B61d3d5;
case 0x61d3d7:c.instructions+=7;goto B61d3d7;
case 0x61d3db:c.instructions+=6;goto B61d3db;
case 0x61d3df:c.instructions+=5;goto B61d3df;
case 0x61d3e1:c.instructions+=4;goto B61d3e1;
case 0x61d3e5:c.instructions+=3;goto B61d3e5;
case 0x61d3e9:c.instructions+=2;goto B61d3e9;
case 0x61d3ed:c.instructions+=1;goto B61d3ed;
case 0x61d3f2:goto L61d3f2;
case 0x61d3f6:c.instructions+=3;goto B61d3f6;
case 0x61d3f7:c.instructions+=2;goto B61d3f7;
case 0x61d3fe:c.instructions+=1;goto B61d3fe;
case 0x61d403:goto L61d403;
case 0x61d406:c.instructions+=10;goto B61d406;
case 0x61d407:c.instructions+=9;goto B61d407;
case 0x61d40b:c.instructions+=8;goto B61d40b;
case 0x61d40f:c.instructions+=7;goto B61d40f;
case 0x61d410:c.instructions+=6;goto B61d410;
case 0x61d411:c.instructions+=5;goto B61d411;
case 0x61d418:c.instructions+=4;goto B61d418;
case 0x61d419:c.instructions+=3;goto B61d419;
case 0x61d41e:c.instructions+=2;goto B61d41e;
case 0x61d41f:c.instructions+=1;goto B61d41f;
case 0x61d421:goto L61d421;
case 0x61d424:c.instructions+=7;goto B61d424;
case 0x61d425:c.instructions+=6;goto B61d425;
case 0x61d429:c.instructions+=5;goto B61d429;
case 0x61d42a:c.instructions+=4;goto B61d42a;
case 0x61d42b:c.instructions+=3;goto B61d42b;
case 0x61d42c:c.instructions+=2;goto B61d42c;
case 0x61d431:c.instructions+=1;goto B61d431;
case 0x61d432:goto L61d432;
case 0x61d437:goto L61d437;
case 0x61d43b:c.instructions+=9;goto B61d43b;
case 0x61d43f:c.instructions+=8;goto B61d43f;
case 0x61d443:c.instructions+=7;goto B61d443;
case 0x61d446:c.instructions+=6;goto B61d446;
case 0x61d447:c.instructions+=5;goto B61d447;
case 0x61d448:c.instructions+=4;goto B61d448;
case 0x61d449:c.instructions+=3;goto B61d449;
case 0x61d44a:c.instructions+=2;goto B61d44a;
case 0x61d44b:c.instructions+=1;goto B61d44b;
case 0x61d44d:goto L61d44d;
case 0x61d451:c.instructions+=6;goto B61d451;
case 0x61d455:c.instructions+=5;goto B61d455;
case 0x61d456:c.instructions+=4;goto B61d456;
case 0x61d457:c.instructions+=3;goto B61d457;
case 0x61d459:c.instructions+=2;goto B61d459;
case 0x61d45a:c.instructions+=1;goto B61d45a;
case 0x61d45b:goto L61d45b;
case 0x61d45e:c.instructions+=1;goto B61d45e;
case 0x61d463:goto L61d463;
case 0x61d465:c.instructions+=1;goto B61d465;
case 0x61d467:goto L61d467;
case 0x61d46b:c.instructions+=19;goto B61d46b;
case 0x61d46d:c.instructions+=18;goto B61d46d;
case 0x61d471:c.instructions+=17;goto B61d471;
case 0x61d474:c.instructions+=16;goto B61d474;
case 0x61d476:c.instructions+=15;goto B61d476;
case 0x61d478:c.instructions+=14;goto B61d478;
case 0x61d47b:c.instructions+=13;goto B61d47b;
case 0x61d47d:c.instructions+=12;goto B61d47d;
case 0x61d480:c.instructions+=11;goto B61d480;
case 0x61d483:c.instructions+=10;goto B61d483;
case 0x61d486:c.instructions+=9;goto B61d486;
case 0x61d489:c.instructions+=8;goto B61d489;
case 0x61d48c:c.instructions+=7;goto B61d48c;
case 0x61d48f:c.instructions+=6;goto B61d48f;
case 0x61d492:c.instructions+=5;goto B61d492;
case 0x61d495:c.instructions+=4;goto B61d495;
case 0x61d498:c.instructions+=3;goto B61d498;
case 0x61d49b:c.instructions+=2;goto B61d49b;
case 0x61d49e:c.instructions+=1;goto B61d49e;
case 0x61d4a1:goto L61d4a1;
case 0x61d4a2:c.instructions+=5;goto B61d4a2;
case 0x61d4a3:c.instructions+=4;goto B61d4a3;
case 0x61d4a4:c.instructions+=3;goto B61d4a4;
case 0x61d4a6:c.instructions+=2;goto B61d4a6;
case 0x61d4a7:c.instructions+=1;goto B61d4a7;
case 0x61d4b0:goto L61d4b0;
case 0x61d4b1:c.instructions+=8;goto B61d4b1;
case 0x61d4b3:c.instructions+=7;goto B61d4b3;
case 0x61d4b6:c.instructions+=6;goto B61d4b6;
case 0x61d4bc:c.instructions+=5;goto B61d4bc;
case 0x61d4bd:c.instructions+=4;goto B61d4bd;
case 0x61d4be:c.instructions+=3;goto B61d4be;
case 0x61d4bf:c.instructions+=2;goto B61d4bf;
case 0x61d4c9:c.instructions+=1;goto B61d4c9;
case 0x61d4ce:goto L61d4ce;
case 0x61d4d4:c.instructions+=4;goto B61d4d4;
case 0x61d4d7:c.instructions+=3;goto B61d4d7;
case 0x61d4dc:c.instructions+=2;goto B61d4dc;
case 0x61d4e1:c.instructions+=1;goto B61d4e1;
case 0x61d4e6:goto L61d4e6;
case 0x61d4e8:c.instructions+=2;goto B61d4e8;
case 0x61d4ea:c.instructions+=1;goto B61d4ea;
case 0x61d4f0:goto L61d4f0;
case 0x61d4f3:goto L61d4f3;
case 0x61d4f6:c.instructions+=2;goto B61d4f6;
case 0x61d4f8:c.instructions+=1;goto B61d4f8;
case 0x61d4fe:goto L61d4fe;
case 0x61d502:c.instructions+=2;goto B61d502;
case 0x61d504:c.instructions+=1;goto B61d504;
case 0x61d506:goto L61d506;
case 0x61d509:c.instructions+=2;goto B61d509;
case 0x61d50b:c.instructions+=1;goto B61d50b;
case 0x61d511:goto L61d511;
case 0x61d514:c.instructions+=2;goto B61d514;
case 0x61d516:c.instructions+=1;goto B61d516;
case 0x61d51c:goto L61d51c;
case 0x61d51f:c.instructions+=3;goto B61d51f;
case 0x61d521:c.instructions+=2;goto B61d521;
case 0x61d527:c.instructions+=1;goto B61d527;
case 0x61d52d:goto L61d52d;
case 0x61d530:c.instructions+=1;goto B61d530;
case 0x61d533:goto L61d533;
case 0x61d534:c.instructions+=4;goto B61d534;
case 0x61d535:c.instructions+=3;goto B61d535;
case 0x61d539:c.instructions+=2;goto B61d539;
case 0x61d53a:c.instructions+=1;goto B61d53a;
case 0x61d53f:goto L61d53f;
case 0x61d543:c.instructions+=4;goto B61d543;
case 0x61d544:c.instructions+=3;goto B61d544;
case 0x61d548:c.instructions+=2;goto B61d548;
case 0x61d549:c.instructions+=1;goto B61d549;
case 0x61d54e:goto L61d54e;
case 0x61d551:c.instructions+=6;goto B61d551;
case 0x61d558:c.instructions+=5;goto B61d558;
case 0x61d559:c.instructions+=4;goto B61d559;
case 0x61d55d:c.instructions+=3;goto B61d55d;
case 0x61d55e:c.instructions+=2;goto B61d55e;
case 0x61d561:c.instructions+=1;goto B61d561;
case 0x61d566:goto L61d566;
case 0x61d56a:c.instructions+=42;goto B61d56a;
case 0x61d56d:c.instructions+=41;goto B61d56d;
case 0x61d570:c.instructions+=40;goto B61d570;
case 0x61d573:c.instructions+=39;goto B61d573;
case 0x61d577:c.instructions+=38;goto B61d577;
case 0x61d579:c.instructions+=37;goto B61d579;
case 0x61d57c:c.instructions+=36;goto B61d57c;
case 0x61d583:c.instructions+=35;goto B61d583;
case 0x61d585:c.instructions+=34;goto B61d585;
case 0x61d589:c.instructions+=33;goto B61d589;
case 0x61d58b:c.instructions+=32;goto B61d58b;
case 0x61d58d:c.instructions+=31;goto B61d58d;
case 0x61d591:c.instructions+=30;goto B61d591;
case 0x61d595:c.instructions+=29;goto B61d595;
case 0x61d598:c.instructions+=28;goto B61d598;
case 0x61d59c:c.instructions+=27;goto B61d59c;
case 0x61d59f:c.instructions+=26;goto B61d59f;
case 0x61d5a1:c.instructions+=25;goto B61d5a1;
case 0x61d5a5:c.instructions+=24;goto B61d5a5;
case 0x61d5a7:c.instructions+=23;goto B61d5a7;
case 0x61d5a9:c.instructions+=22;goto B61d5a9;
case 0x61d5ad:c.instructions+=21;goto B61d5ad;
case 0x61d5b1:c.instructions+=20;goto B61d5b1;
case 0x61d5b4:c.instructions+=19;goto B61d5b4;
case 0x61d5b8:c.instructions+=18;goto B61d5b8;
case 0x61d5bb:c.instructions+=17;goto B61d5bb;
case 0x61d5bd:c.instructions+=16;goto B61d5bd;
case 0x61d5c1:c.instructions+=15;goto B61d5c1;
case 0x61d5c3:c.instructions+=14;goto B61d5c3;
case 0x61d5c7:c.instructions+=13;goto B61d5c7;
case 0x61d5c8:c.instructions+=12;goto B61d5c8;
case 0x61d5c9:c.instructions+=11;goto B61d5c9;
case 0x61d5cb:c.instructions+=10;goto B61d5cb;
case 0x61d5cf:c.instructions+=9;goto B61d5cf;
case 0x61d5d3:c.instructions+=8;goto B61d5d3;
case 0x61d5d7:c.instructions+=7;goto B61d5d7;
case 0x61d5d9:c.instructions+=6;goto B61d5d9;
case 0x61d5dd:c.instructions+=5;goto B61d5dd;
case 0x61d5e1:c.instructions+=4;goto B61d5e1;
case 0x61d5e5:c.instructions+=3;goto B61d5e5;
case 0x61d5e6:c.instructions+=2;goto B61d5e6;
case 0x61d5ea:c.instructions+=1;goto B61d5ea;
case 0x61d5ef:goto L61d5ef;
case 0x61d5f2:c.instructions+=2;goto B61d5f2;
case 0x61d5f4:c.instructions+=1;goto B61d5f4;
case 0x61d5f6:goto L61d5f6;
case 0x61d5f9:c.instructions+=4;goto B61d5f9;
case 0x61d5fa:c.instructions+=3;goto B61d5fa;
case 0x61d5fb:c.instructions+=2;goto B61d5fb;
case 0x61d5fd:c.instructions+=1;goto B61d5fd;
case 0x61d602:goto L61d602;
case 0x61d604:c.instructions+=2;goto B61d604;
case 0x61d606:c.instructions+=1;goto B61d606;
case 0x61d60c:goto L61d60c;
case 0x61d60d:c.instructions+=5;goto B61d60d;
case 0x61d60e:c.instructions+=4;goto B61d60e;
case 0x61d60f:c.instructions+=3;goto B61d60f;
case 0x61d611:c.instructions+=2;goto B61d611;
case 0x61d612:c.instructions+=1;goto B61d612;
case 0x61d613:goto L61d613;
case 0x61d616:c.instructions+=1;goto B61d616;
case 0x61d620:goto L61d620;
case 0x61d624:c.instructions+=6;goto B61d624;
case 0x61d628:c.instructions+=5;goto B61d628;
case 0x61d62b:c.instructions+=4;goto B61d62b;
case 0x61d62c:c.instructions+=3;goto B61d62c;
case 0x61d633:c.instructions+=2;goto B61d633;
case 0x61d635:c.instructions+=1;goto B61d635;
case 0x61d637:goto L61d637;
case 0x61d639:c.instructions+=3;goto B61d639;
case 0x61d63a:c.instructions+=2;goto B61d63a;
case 0x61d63d:c.instructions+=1;goto B61d63d;
case 0x61d63e:goto L61d63e;
case 0x61d644:c.instructions+=6;goto B61d644;
case 0x61d645:c.instructions+=5;goto B61d645;
case 0x61d647:c.instructions+=4;goto B61d647;
case 0x61d64d:c.instructions+=3;goto B61d64d;
case 0x61d652:c.instructions+=2;goto B61d652;
case 0x61d654:c.instructions+=1;goto B61d654;
case 0x61d659:goto L61d659;
case 0x61d65c:c.instructions+=4;goto B61d65c;
case 0x61d65e:c.instructions+=3;goto B61d65e;
case 0x61d65f:c.instructions+=2;goto B61d65f;
case 0x61d661:c.instructions+=1;goto B61d661;
case 0x61d666:goto L61d666;
case 0x61d668:c.instructions+=1;goto B61d668;
case 0x61d66a:goto L61d66a;
case 0x61d66d:c.instructions+=4;goto B61d66d;
case 0x61d672:c.instructions+=3;goto B61d672;
case 0x61d675:c.instructions+=2;goto B61d675;
case 0x61d677:c.instructions+=1;goto B61d677;
case 0x61d679:goto L61d679;
case 0x61d67a:c.instructions+=4;goto B61d67a;
case 0x61d67c:c.instructions+=3;goto B61d67c;
case 0x61d67d:c.instructions+=2;goto B61d67d;
case 0x61d680:c.instructions+=1;goto B61d680;
case 0x61d681:goto L61d681;
case 0x61d684:c.instructions+=4;goto B61d684;
case 0x61d688:c.instructions+=3;goto B61d688;
case 0x61d689:c.instructions+=2;goto B61d689;
case 0x61d68a:c.instructions+=1;goto B61d68a;
case 0x61d68f:goto L61d68f;
case 0x61d694:c.instructions+=5;goto B61d694;
case 0x61d698:c.instructions+=4;goto B61d698;
case 0x61d699:c.instructions+=3;goto B61d699;
case 0x61d69d:c.instructions+=2;goto B61d69d;
case 0x61d69e:c.instructions+=1;goto B61d69e;
case 0x61d6a3:goto L61d6a3;
case 0x61d6a4:c.instructions+=5;goto B61d6a4;
case 0x61d6a8:c.instructions+=4;goto B61d6a8;
case 0x61d6a9:c.instructions+=3;goto B61d6a9;
case 0x61d6ad:c.instructions+=2;goto B61d6ad;
case 0x61d6ae:c.instructions+=1;goto B61d6ae;
case 0x61d6b3:goto L61d6b3;
case 0x61d6b7:c.instructions+=2;goto B61d6b7;
case 0x61d6b8:c.instructions+=1;goto B61d6b8;
case 0x61d6bd:goto L61d6bd;
case 0x61d6c0:c.instructions+=4;goto B61d6c0;
case 0x61d6c1:c.instructions+=3;goto B61d6c1;
case 0x61d6c2:c.instructions+=2;goto B61d6c2;
case 0x61d6c5:c.instructions+=1;goto B61d6c5;
case 0x61d6d0:goto L61d6d0;
case 0x61d6d4:c.instructions+=6;goto B61d6d4;
case 0x61d6d8:c.instructions+=5;goto B61d6d8;
case 0x61d6db:c.instructions+=4;goto B61d6db;
case 0x61d6dc:c.instructions+=3;goto B61d6dc;
case 0x61d6e3:c.instructions+=2;goto B61d6e3;
case 0x61d6e5:c.instructions+=1;goto B61d6e5;
case 0x61d6e7:goto L61d6e7;
case 0x61d6e9:c.instructions+=3;goto B61d6e9;
case 0x61d6ea:c.instructions+=2;goto B61d6ea;
case 0x61d6ed:c.instructions+=1;goto B61d6ed;
case 0x61d6ee:goto L61d6ee;
case 0x61d6f4:c.instructions+=6;goto B61d6f4;
case 0x61d6f5:c.instructions+=5;goto B61d6f5;
case 0x61d6f7:c.instructions+=4;goto B61d6f7;
case 0x61d6fd:c.instructions+=3;goto B61d6fd;
case 0x61d702:c.instructions+=2;goto B61d702;
case 0x61d704:c.instructions+=1;goto B61d704;
case 0x61d709:goto L61d709;
case 0x61d70c:c.instructions+=4;goto B61d70c;
case 0x61d70e:c.instructions+=3;goto B61d70e;
case 0x61d70f:c.instructions+=2;goto B61d70f;
case 0x61d711:c.instructions+=1;goto B61d711;
case 0x61d716:goto L61d716;
case 0x61d718:c.instructions+=1;goto B61d718;
case 0x61d71a:goto L61d71a;
case 0x61d71d:c.instructions+=4;goto B61d71d;
case 0x61d722:c.instructions+=3;goto B61d722;
case 0x61d725:c.instructions+=2;goto B61d725;
case 0x61d727:c.instructions+=1;goto B61d727;
case 0x61d729:goto L61d729;
case 0x61d72a:c.instructions+=4;goto B61d72a;
case 0x61d72c:c.instructions+=3;goto B61d72c;
case 0x61d72d:c.instructions+=2;goto B61d72d;
case 0x61d730:c.instructions+=1;goto B61d730;
case 0x61d731:goto L61d731;
case 0x61d734:c.instructions+=4;goto B61d734;
case 0x61d738:c.instructions+=3;goto B61d738;
case 0x61d739:c.instructions+=2;goto B61d739;
case 0x61d73a:c.instructions+=1;goto B61d73a;
case 0x61d73f:goto L61d73f;
case 0x61d744:c.instructions+=5;goto B61d744;
case 0x61d748:c.instructions+=4;goto B61d748;
case 0x61d749:c.instructions+=3;goto B61d749;
case 0x61d74d:c.instructions+=2;goto B61d74d;
case 0x61d74e:c.instructions+=1;goto B61d74e;
case 0x61d753:goto L61d753;
case 0x61d754:c.instructions+=5;goto B61d754;
case 0x61d758:c.instructions+=4;goto B61d758;
case 0x61d759:c.instructions+=3;goto B61d759;
case 0x61d75d:c.instructions+=2;goto B61d75d;
case 0x61d75e:c.instructions+=1;goto B61d75e;
case 0x61d763:goto L61d763;
case 0x61d768:c.instructions+=5;goto B61d768;
case 0x61d76c:c.instructions+=4;goto B61d76c;
case 0x61d76d:c.instructions+=3;goto B61d76d;
case 0x61d771:c.instructions+=2;goto B61d771;
case 0x61d772:c.instructions+=1;goto B61d772;
case 0x61d777:goto L61d777;
case 0x61d77b:c.instructions+=2;goto B61d77b;
case 0x61d77c:c.instructions+=1;goto B61d77c;
case 0x61d781:goto L61d781;
case 0x61d784:c.instructions+=4;goto B61d784;
case 0x61d785:c.instructions+=3;goto B61d785;
case 0x61d786:c.instructions+=2;goto B61d786;
case 0x61d789:c.instructions+=1;goto B61d789;
case 0x61d790:goto L61d790;
case 0x61d796:c.instructions+=5;goto B61d796;
case 0x61d797:c.instructions+=4;goto B61d797;
case 0x61d79e:c.instructions+=3;goto B61d79e;
case 0x61d7a4:c.instructions+=2;goto B61d7a4;
case 0x61d7a6:c.instructions+=1;goto B61d7a6;
case 0x61d7a8:goto L61d7a8;
case 0x61d7aa:c.instructions+=3;goto B61d7aa;
case 0x61d7ac:c.instructions+=2;goto B61d7ac;
case 0x61d7ad:c.instructions+=1;goto B61d7ad;
case 0x61d7b2:goto L61d7b2;
case 0x61d7b5:c.instructions+=3;goto B61d7b5;
case 0x61d7b7:c.instructions+=2;goto B61d7b7;
case 0x61d7bb:c.instructions+=1;goto B61d7bb;
case 0x61d7bd:goto L61d7bd;
case 0x61d7c0:c.instructions+=7;goto B61d7c0;
case 0x61d7c6:c.instructions+=6;goto B61d7c6;
case 0x61d7c8:c.instructions+=5;goto B61d7c8;
case 0x61d7cb:c.instructions+=4;goto B61d7cb;
case 0x61d7ce:c.instructions+=3;goto B61d7ce;
case 0x61d7d0:c.instructions+=2;goto B61d7d0;
case 0x61d7d4:c.instructions+=1;goto B61d7d4;
case 0x61d7d6:goto L61d7d6;
case 0x61d7db:c.instructions+=3;goto B61d7db;
case 0x61d7dc:c.instructions+=2;goto B61d7dc;
case 0x61d7e2:c.instructions+=1;goto B61d7e2;
case 0x61d7e3:goto L61d7e3;
case 0x61d7e4:c.instructions+=4;goto B61d7e4;
case 0x61d7e5:c.instructions+=3;goto B61d7e5;
case 0x61d7e6:c.instructions+=2;goto B61d7e6;
case 0x61d7eb:c.instructions+=1;goto B61d7eb;
case 0x61d7f0:goto L61d7f0;
case 0x61d7f3:c.instructions+=4;goto B61d7f3;
case 0x61d7f5:c.instructions+=3;goto B61d7f5;
case 0x61d7f6:c.instructions+=2;goto B61d7f6;
case 0x61d7f8:c.instructions+=1;goto B61d7f8;
case 0x61d7fd:goto L61d7fd;
case 0x61d7ff:c.instructions+=1;goto B61d7ff;
case 0x61d801:goto L61d801;
case 0x61d804:c.instructions+=1;goto B61d804;
case 0x61d806:goto L61d806;
case 0x61d808:goto L61d808;
case 0x61d80d:c.instructions+=1;goto B61d80d;
case 0x61d812:goto L61d812;
case 0x61d815:c.instructions+=4;goto B61d815;
case 0x61d817:c.instructions+=3;goto B61d817;
case 0x61d818:c.instructions+=2;goto B61d818;
case 0x61d81a:c.instructions+=1;goto B61d81a;
case 0x61d81f:goto L61d81f;
case 0x61d821:c.instructions+=1;goto B61d821;
case 0x61d823:goto L61d823;
case 0x61d826:c.instructions+=1;goto B61d826;
case 0x61d828:goto L61d828;
case 0x61d82a:goto L61d82a;
case 0x61d82f:c.instructions+=1;goto B61d82f;
case 0x61d834:goto L61d834;
case 0x61d837:c.instructions+=4;goto B61d837;
case 0x61d839:c.instructions+=3;goto B61d839;
case 0x61d83a:c.instructions+=2;goto B61d83a;
case 0x61d83c:c.instructions+=1;goto B61d83c;
case 0x61d841:goto L61d841;
case 0x61d843:c.instructions+=1;goto B61d843;
case 0x61d845:goto L61d845;
case 0x61d848:c.instructions+=1;goto B61d848;
case 0x61d84a:goto L61d84a;
case 0x61d84c:goto L61d84c;
case 0x61d851:c.instructions+=1;goto B61d851;
case 0x61d856:goto L61d856;
case 0x61d859:c.instructions+=4;goto B61d859;
case 0x61d85b:c.instructions+=3;goto B61d85b;
case 0x61d85c:c.instructions+=2;goto B61d85c;
case 0x61d85e:c.instructions+=1;goto B61d85e;
case 0x61d863:goto L61d863;
case 0x61d865:c.instructions+=1;goto B61d865;
case 0x61d867:goto L61d867;
case 0x61d86a:c.instructions+=1;goto B61d86a;
case 0x61d86c:goto L61d86c;
case 0x61d86e:goto L61d86e;
case 0x61d871:c.instructions+=15;goto B61d871;
case 0x61d873:c.instructions+=14;goto B61d873;
case 0x61d876:c.instructions+=13;goto B61d876;
case 0x61d878:c.instructions+=12;goto B61d878;
case 0x61d87b:c.instructions+=11;goto B61d87b;
case 0x61d87d:c.instructions+=10;goto B61d87d;
case 0x61d881:c.instructions+=9;goto B61d881;
case 0x61d889:c.instructions+=8;goto B61d889;
case 0x61d891:c.instructions+=7;goto B61d891;
case 0x61d899:c.instructions+=6;goto B61d899;
case 0x61d8a1:c.instructions+=5;goto B61d8a1;
case 0x61d8a9:c.instructions+=4;goto B61d8a9;
case 0x61d8b1:c.instructions+=3;goto B61d8b1;
case 0x61d8b9:c.instructions+=2;goto B61d8b9;
case 0x61d8bb:c.instructions+=1;goto B61d8bb;
case 0x61d8c0:goto L61d8c0;
case 0x61d8c4:c.instructions+=5;goto B61d8c4;
case 0x61d8cb:c.instructions+=4;goto B61d8cb;
case 0x61d8d2:c.instructions+=3;goto B61d8d2;
case 0x61d8d4:c.instructions+=2;goto B61d8d4;
case 0x61d8d6:c.instructions+=1;goto B61d8d6;
case 0x61d8dc:goto L61d8dc;
case 0x61d8e1:c.instructions+=1;goto B61d8e1;
case 0x61d8e6:goto L61d8e6;
case 0x61d8e9:c.instructions+=4;goto B61d8e9;
case 0x61d8ea:c.instructions+=3;goto B61d8ea;
case 0x61d8eb:c.instructions+=2;goto B61d8eb;
case 0x61d8ed:c.instructions+=1;goto B61d8ed;
case 0x61d8f2:goto L61d8f2;
case 0x61d8f4:c.instructions+=1;goto B61d8f4;
case 0x61d8f6:goto L61d8f6;
case 0x61d8f9:c.instructions+=2;goto B61d8f9;
case 0x61d8fd:c.instructions+=1;goto B61d8fd;
case 0x61d8ff:goto L61d8ff;
case 0x61d903:goto L61d903;
case 0x61d908:c.instructions+=1;goto B61d908;
case 0x61d90d:goto L61d90d;
case 0x61d910:c.instructions+=4;goto B61d910;
case 0x61d911:c.instructions+=3;goto B61d911;
case 0x61d912:c.instructions+=2;goto B61d912;
case 0x61d914:c.instructions+=1;goto B61d914;
case 0x61d919:goto L61d919;
case 0x61d91b:c.instructions+=1;goto B61d91b;
case 0x61d91d:goto L61d91d;
case 0x61d920:goto L61d920;
case 0x61d925:c.instructions+=1;goto B61d925;
case 0x61d92a:goto L61d92a;
case 0x61d92d:c.instructions+=4;goto B61d92d;
case 0x61d92f:c.instructions+=3;goto B61d92f;
case 0x61d930:c.instructions+=2;goto B61d930;
case 0x61d932:c.instructions+=1;goto B61d932;
case 0x61d937:goto L61d937;
case 0x61d939:c.instructions+=1;goto B61d939;
case 0x61d93b:goto L61d93b;
case 0x61d93e:c.instructions+=1;goto B61d93e;
case 0x61d940:goto L61d940;
case 0x61d942:goto L61d942;
case 0x61d947:c.instructions+=1;goto B61d947;
case 0x61d94c:goto L61d94c;
case 0x61d94f:c.instructions+=4;goto B61d94f;
case 0x61d951:c.instructions+=3;goto B61d951;
case 0x61d952:c.instructions+=2;goto B61d952;
case 0x61d954:c.instructions+=1;goto B61d954;
case 0x61d959:goto L61d959;
case 0x61d95b:c.instructions+=1;goto B61d95b;
case 0x61d95d:goto L61d95d;
case 0x61d960:c.instructions+=1;goto B61d960;
case 0x61d962:goto L61d962;
case 0x61d964:goto L61d964;
case 0x61d969:c.instructions+=1;goto B61d969;
case 0x61d96b:goto L61d96b;
case 0x61d972:c.instructions+=3;goto B61d972;
case 0x61d978:c.instructions+=2;goto B61d978;
case 0x61d97a:c.instructions+=1;goto B61d97a;
case 0x61d97c:goto L61d97c;
case 0x61d97f:c.instructions+=3;goto B61d97f;
case 0x61d982:c.instructions+=2;goto B61d982;
case 0x61d985:c.instructions+=1;goto B61d985;
case 0x61d987:goto L61d987;
case 0x61d98b:c.instructions+=8;goto B61d98b;
case 0x61d98e:c.instructions+=7;goto B61d98e;
case 0x61d990:c.instructions+=6;goto B61d990;
case 0x61d993:c.instructions+=5;goto B61d993;
case 0x61d995:c.instructions+=4;goto B61d995;
case 0x61d998:c.instructions+=3;goto B61d998;
case 0x61d99a:c.instructions+=2;goto B61d99a;
case 0x61d99e:c.instructions+=1;goto B61d99e;
case 0x61d9a0:goto L61d9a0;
case 0x61d9a4:c.instructions+=2;goto B61d9a4;
case 0x61d9a8:c.instructions+=1;goto B61d9a8;
case 0x61d9aa:goto L61d9aa;
case 0x61d9ae:c.instructions+=1;goto B61d9ae;
case 0x61d9b2:goto L61d9b2;
case 0x61d9b5:c.instructions+=2;goto B61d9b5;
case 0x61d9b8:c.instructions+=1;goto B61d9b8;
case 0x61d9be:goto L61d9be;
case 0x61d9c0:c.instructions+=5;goto B61d9c0;
case 0x61d9c5:c.instructions+=4;goto B61d9c5;
case 0x61d9c7:c.instructions+=3;goto B61d9c7;
case 0x61d9ce:c.instructions+=2;goto B61d9ce;
case 0x61d9d5:c.instructions+=1;goto B61d9d5;
case 0x61d9d9:goto L61d9d9;
case 0x61d9db:goto L61d9db;
case 0x61d9df:c.instructions+=1;goto B61d9df;
case 0x61d9e3:goto L61d9e3;
case 0x61d9e6:c.instructions+=1;goto B61d9e6;
case 0x61d9ec:goto L61d9ec;
case 0x61d9ef:c.instructions+=1;goto B61d9ef;
case 0x61d9f5:goto L61d9f5;
case 0x61d9f8:c.instructions+=3;goto B61d9f8;
case 0x61d9ff:c.instructions+=2;goto B61d9ff;
case 0x61da06:c.instructions+=1;goto B61da06;
case 0x61da08:goto L61da08;
case 0x61da0d:c.instructions+=1;goto B61da0d;
case 0x61da10:goto L61da10;
case 0x61da12:c.instructions+=1;goto B61da12;
case 0x61da14:goto L61da14;
case 0x61da16:goto L61da16;
case 0x61da19:c.instructions+=2;goto B61da19;
case 0x61da1a:c.instructions+=1;goto B61da1a;
case 0x61da1c:goto L61da1c;
case 0x61da1e:c.instructions+=1;goto B61da1e;
case 0x61da20:goto L61da20;
case 0x61da27:c.instructions+=4;goto B61da27;
case 0x61da28:c.instructions+=3;goto B61da28;
case 0x61da29:c.instructions+=2;goto B61da29;
case 0x61da2a:c.instructions+=1;goto B61da2a;
case 0x61da2f:goto L61da2f;
case 0x61da34:c.instructions+=2;goto B61da34;
case 0x61da36:c.instructions+=1;goto B61da36;
case 0x61da3b:goto L61da3b;
case 0x61da3f:c.instructions+=3;goto B61da3f;
case 0x61da42:c.instructions+=2;goto B61da42;
case 0x61da47:c.instructions+=1;goto B61da47;
case 0x61da49:goto L61da49;
case 0x61da4f:c.instructions+=7;goto B61da4f;
case 0x61da52:c.instructions+=6;goto B61da52;
case 0x61da55:c.instructions+=5;goto B61da55;
case 0x61da59:c.instructions+=4;goto B61da59;
case 0x61da5c:c.instructions+=3;goto B61da5c;
case 0x61da5e:c.instructions+=2;goto B61da5e;
case 0x61da60:c.instructions+=1;goto B61da60;
case 0x61da62:goto L61da62;
case 0x61da65:c.instructions+=2;goto B61da65;
case 0x61da68:c.instructions+=1;goto B61da68;
case 0x61da70:goto L61da70;
case 0x61da72:c.instructions+=3;goto B61da72;
case 0x61da75:c.instructions+=2;goto B61da75;
case 0x61da79:c.instructions+=1;goto B61da79;
case 0x61da7b:goto L61da7b;
case 0x61da7d:c.instructions+=1;goto B61da7d;
case 0x61da7f:goto L61da7f;
case 0x61da80:c.instructions+=3;goto B61da80;
case 0x61da83:c.instructions+=2;goto B61da83;
case 0x61da85:c.instructions+=1;goto B61da85;
case 0x61da87:goto L61da87;
case 0x61da89:goto L61da89;
case 0x61da8b:c.instructions+=2;goto B61da8b;
case 0x61da8e:c.instructions+=1;goto B61da8e;
case 0x61da94:goto L61da94;
case 0x61da98:goto L61da98;
case 0x61da9a:c.instructions+=2;goto B61da9a;
case 0x61da9c:c.instructions+=1;goto B61da9c;
case 0x61daa2:goto L61daa2;
case 0x61daa4:c.instructions+=3;goto B61daa4;
case 0x61daa6:c.instructions+=2;goto B61daa6;
case 0x61daa7:c.instructions+=1;goto B61daa7;
case 0x61daac:goto L61daac;
case 0x61daae:c.instructions+=4;goto B61daae;
case 0x61dab1:c.instructions+=3;goto B61dab1;
case 0x61dab3:c.instructions+=2;goto B61dab3;
case 0x61dab6:c.instructions+=1;goto B61dab6;
case 0x61dab8:goto L61dab8;
case 0x61daba:c.instructions+=1;goto B61daba;
case 0x61dabf:goto L61dabf;
case 0x61dac1:c.instructions+=1;goto B61dac1;
case 0x61dac3:goto L61dac3;
case 0x61dac6:c.instructions+=1;goto B61dac6;
case 0x61dac8:goto L61dac8;
case 0x61dacb:goto L61dacb;
case 0x61dacd:goto L61dacd;
case 0x61dad4:c.instructions+=2;goto B61dad4;
case 0x61dad5:c.instructions+=1;goto B61dad5;
case 0x61dada:goto L61dada;
case 0x61dadd:c.instructions+=3;goto B61dadd;
case 0x61dadf:c.instructions+=2;goto B61dadf;
case 0x61dae6:c.instructions+=1;goto B61dae6;
case 0x61dae8:goto L61dae8;
case 0x61daea:c.instructions+=1;goto B61daea;
case 0x61daec:goto L61daec;
case 0x61daee:c.instructions+=2;goto B61daee;
case 0x61daf5:c.instructions+=1;goto B61daf5;
case 0x61dafa:goto L61dafa;
case 0x61dafb:c.instructions+=2;goto B61dafb;
case 0x61db00:c.instructions+=1;goto B61db00;
case 0x61db05:goto L61db05;
case 0x61db07:c.instructions+=3;goto B61db07;
case 0x61db09:c.instructions+=2;goto B61db09;
case 0x61db0a:c.instructions+=1;goto B61db0a;
case 0x61db0f:goto L61db0f;
case 0x61db11:c.instructions+=4;goto B61db11;
case 0x61db14:c.instructions+=3;goto B61db14;
case 0x61db16:c.instructions+=2;goto B61db16;
case 0x61db19:c.instructions+=1;goto B61db19;
case 0x61db1b:goto L61db1b;
case 0x61db1d:c.instructions+=1;goto B61db1d;
case 0x61db22:goto L61db22;
case 0x61db24:c.instructions+=2;goto B61db24;
case 0x61db26:c.instructions+=1;goto B61db26;
case 0x61db2b:goto L61db2b;
case 0x61db2d:c.instructions+=4;goto B61db2d;
case 0x61db31:c.instructions+=3;goto B61db31;
case 0x61db33:c.instructions+=2;goto B61db33;
case 0x61db36:c.instructions+=1;goto B61db36;
case 0x61db38:goto L61db38;
case 0x61db3a:c.instructions+=2;goto B61db3a;
case 0x61db3c:c.instructions+=1;goto B61db3c;
case 0x61db41:goto L61db41;
case 0x61db44:goto L61db44;
case 0x61db46:c.instructions+=1;goto B61db46;
case 0x61db48:goto L61db48;
case 0x61db4a:c.instructions+=1;goto B61db4a;
case 0x61db4f:goto L61db4f;
case 0x61db51:c.instructions+=2;goto B61db51;
case 0x61db53:c.instructions+=1;goto B61db53;
case 0x61db58:goto L61db58;
case 0x61db5a:c.instructions+=4;goto B61db5a;
case 0x61db5e:c.instructions+=3;goto B61db5e;
case 0x61db60:c.instructions+=2;goto B61db60;
case 0x61db63:c.instructions+=1;goto B61db63;
case 0x61db65:goto L61db65;
case 0x61db67:c.instructions+=2;goto B61db67;
case 0x61db69:c.instructions+=1;goto B61db69;
case 0x61db6e:goto L61db6e;
case 0x61db71:goto L61db71;
case 0x61db73:c.instructions+=1;goto B61db73;
case 0x61db75:goto L61db75;
case 0x61db77:c.instructions+=1;goto B61db77;
case 0x61db7c:goto L61db7c;
case 0x61db80:c.instructions+=2;goto B61db80;
case 0x61db83:c.instructions+=1;goto B61db83;
case 0x61db89:goto L61db89;
case 0x61db8c:c.instructions+=1;goto B61db8c;
case 0x61db92:goto L61db92;
case 0x61db99:c.instructions+=3;goto B61db99;
case 0x61dba0:c.instructions+=2;goto B61dba0;
case 0x61dba2:c.instructions+=1;goto B61dba2;
case 0x61dba8:goto L61dba8;
case 0x61dbad:c.instructions+=1;goto B61dbad;
case 0x61dbb2:goto L61dbb2;
case 0x61dbb5:c.instructions+=3;goto B61dbb5;
case 0x61dbb6:c.instructions+=2;goto B61dbb6;
case 0x61dbb8:c.instructions+=1;goto B61dbb8;
case 0x61dbbd:goto L61dbbd;
case 0x61dbbf:c.instructions+=1;goto B61dbbf;
case 0x61dbc5:goto L61dbc5;
case 0x61dbc7:c.instructions+=2;goto B61dbc7;
case 0x61dbcc:c.instructions+=1;goto B61dbcc;
case 0x61dbd1:goto L61dbd1;
case 0x61dbd4:c.instructions+=3;goto B61dbd4;
case 0x61dbd5:c.instructions+=2;goto B61dbd5;
case 0x61dbd7:c.instructions+=1;goto B61dbd7;
case 0x61dbdc:goto L61dbdc;
case 0x61dbde:c.instructions+=2;goto B61dbde;
case 0x61dbe1:c.instructions+=1;goto B61dbe1;
case 0x61dbe7:goto L61dbe7;
case 0x61dbea:c.instructions+=6;goto B61dbea;
case 0x61dbec:c.instructions+=5;goto B61dbec;
case 0x61dbef:c.instructions+=4;goto B61dbef;
case 0x61dbf6:c.instructions+=3;goto B61dbf6;
case 0x61dbfa:c.instructions+=2;goto B61dbfa;
case 0x61dbfd:c.instructions+=1;goto B61dbfd;
case 0x61dc01:goto L61dc01;
case 0x61dc04:c.instructions+=2;goto B61dc04;
case 0x61dc06:c.instructions+=1;goto B61dc06;
case 0x61dc0c:goto L61dc0c;
case 0x61dc0e:c.instructions+=2;goto B61dc0e;
case 0x61dc13:c.instructions+=1;goto B61dc13;
case 0x61dc18:goto L61dc18;
case 0x61dc1b:c.instructions+=3;goto B61dc1b;
case 0x61dc1c:c.instructions+=2;goto B61dc1c;
case 0x61dc1e:c.instructions+=1;goto B61dc1e;
case 0x61dc23:goto L61dc23;
case 0x61dc25:c.instructions+=3;goto B61dc25;
case 0x61dc2a:c.instructions+=2;goto B61dc2a;
case 0x61dc2c:c.instructions+=1;goto B61dc2c;
case 0x61dc31:goto L61dc31;
case 0x61dc34:c.instructions+=3;goto B61dc34;
case 0x61dc35:c.instructions+=2;goto B61dc35;
case 0x61dc37:c.instructions+=1;goto B61dc37;
case 0x61dc3c:goto L61dc3c;
case 0x61dc3e:c.instructions+=3;goto B61dc3e;
case 0x61dc43:c.instructions+=2;goto B61dc43;
case 0x61dc45:c.instructions+=1;goto B61dc45;
case 0x61dc4a:goto L61dc4a;
case 0x61dc4d:c.instructions+=3;goto B61dc4d;
case 0x61dc4e:c.instructions+=2;goto B61dc4e;
case 0x61dc50:c.instructions+=1;goto B61dc50;
case 0x61dc55:goto L61dc55;
case 0x61dc57:c.instructions+=3;goto B61dc57;
case 0x61dc5c:c.instructions+=2;goto B61dc5c;
case 0x61dc60:c.instructions+=1;goto B61dc60;
case 0x61dc65:goto L61dc65;
case 0x61dc68:c.instructions+=3;goto B61dc68;
case 0x61dc69:c.instructions+=2;goto B61dc69;
case 0x61dc6b:c.instructions+=1;goto B61dc6b;
case 0x61dc70:goto L61dc70;
case 0x61dc74:c.instructions+=10;goto B61dc74;
case 0x61dc78:c.instructions+=9;goto B61dc78;
case 0x61dc7b:c.instructions+=8;goto B61dc7b;
case 0x61dc7d:c.instructions+=7;goto B61dc7d;
case 0x61dc80:c.instructions+=6;goto B61dc80;
case 0x61dc82:c.instructions+=5;goto B61dc82;
case 0x61dc85:c.instructions+=4;goto B61dc85;
case 0x61dc87:c.instructions+=3;goto B61dc87;
case 0x61dc8b:c.instructions+=2;goto B61dc8b;
case 0x61dc8d:c.instructions+=1;goto B61dc8d;
case 0x61dc8f:goto L61dc8f;
case 0x61dc94:c.instructions+=2;goto B61dc94;
case 0x61dc96:c.instructions+=1;goto B61dc96;
case 0x61dc98:goto L61dc98;
case 0x61dc9c:c.instructions+=7;goto B61dc9c;
case 0x61dc9f:c.instructions+=6;goto B61dc9f;
case 0x61dca2:c.instructions+=5;goto B61dca2;
case 0x61dca5:c.instructions+=4;goto B61dca5;
case 0x61dca8:c.instructions+=3;goto B61dca8;
case 0x61dcac:c.instructions+=2;goto B61dcac;
case 0x61dcb0:c.instructions+=1;goto B61dcb0;
case 0x61dcb6:goto L61dcb6;
case 0x61dcba:c.instructions+=4;goto B61dcba;
case 0x61dcbb:c.instructions+=3;goto B61dcbb;
case 0x61dcbe:c.instructions+=2;goto B61dcbe;
case 0x61dcc2:c.instructions+=1;goto B61dcc2;
case 0x61dcc6:goto L61dcc6;
case 0x61dcca:goto L61dcca;
case 0x61dccb:c.instructions+=3;goto B61dccb;
case 0x61dcce:c.instructions+=2;goto B61dcce;
case 0x61dcd2:c.instructions+=1;goto B61dcd2;
case 0x61dcd8:goto L61dcd8;
case 0x61dcdd:goto L61dcdd;
case 0x61dce4:c.instructions+=2;goto B61dce4;
case 0x61dce5:c.instructions+=1;goto B61dce5;
case 0x61dcea:goto L61dcea;
case 0x61dceb:c.instructions+=1;goto B61dceb;
case 0x61dcf0:goto L61dcf0;
case 0x61dcf4:c.instructions+=8;goto B61dcf4;
case 0x61dcf8:c.instructions+=7;goto B61dcf8;
case 0x61dcfc:c.instructions+=6;goto B61dcfc;
case 0x61dd03:c.instructions+=5;goto B61dd03;
case 0x61dd07:c.instructions+=4;goto B61dd07;
case 0x61dd0b:c.instructions+=3;goto B61dd0b;
case 0x61dd10:c.instructions+=2;goto B61dd10;
case 0x61dd14:c.instructions+=1;goto B61dd14;
case 0x61dd18:goto L61dd18;
case 0x61dd1a:goto L61dd1a;
case 0x61dd1f:c.instructions+=2;goto B61dd1f;
case 0x61dd26:c.instructions+=1;goto B61dd26;
case 0x61dd2d:goto L61dd2d;
case 0x61dd2f:goto L61dd2f;
case 0x61dd32:c.instructions+=5;goto B61dd32;
case 0x61dd38:c.instructions+=4;goto B61dd38;
case 0x61dd3b:c.instructions+=3;goto B61dd3b;
case 0x61dd3e:c.instructions+=2;goto B61dd3e;
case 0x61dd43:c.instructions+=1;goto B61dd43;
case 0x61dd49:goto L61dd49;
case 0x61dd50:goto L61dd50;
case 0x61dd51:c.instructions+=6;goto B61dd51;
case 0x61dd52:c.instructions+=5;goto B61dd52;
case 0x61dd53:c.instructions+=4;goto B61dd53;
case 0x61dd55:c.instructions+=3;goto B61dd55;
case 0x61dd56:c.instructions+=2;goto B61dd56;
case 0x61dd5c:c.instructions+=1;goto B61dd5c;
case 0x61dd5d:goto L61dd5d;
case 0x61dd62:c.instructions+=1;goto B61dd62;
case 0x61dd64:goto L61dd64;
case 0x61dd69:c.instructions+=1;goto B61dd69;
case 0x61dd6b:goto L61dd6b;
case 0x61dd70:c.instructions+=1;goto B61dd70;
case 0x61dd72:goto L61dd72;
case 0x61dd77:c.instructions+=1;goto B61dd77;
case 0x61dd79:goto L61dd79;
case 0x61dd7e:c.instructions+=1;goto B61dd7e;
case 0x61dd80:goto L61dd80;
case 0x61dd85:goto L61dd85;
case 0x61dd89:c.instructions+=3;goto B61dd89;
case 0x61dd8a:c.instructions+=2;goto B61dd8a;
case 0x61dd8b:c.instructions+=1;goto B61dd8b;
case 0x61dd90:goto L61dd90;
case 0x61dd93:c.instructions+=3;goto B61dd93;
case 0x61dd96:c.instructions+=2;goto B61dd96;
case 0x61dd98:c.instructions+=1;goto B61dd98;
case 0x61dd9a:goto L61dd9a;
case 0x61dd9d:c.instructions+=1;goto B61dd9d;
case 0x61dd9f:goto L61dd9f;
case 0x61dda6:goto L61dda6;
case 0x61ddab:c.instructions+=1;goto B61ddab;
case 0x61ddad:goto L61ddad;
case 0x61ddb2:c.instructions+=1;goto B61ddb2;
case 0x61ddb4:goto L61ddb4;
case 0x61ddb9:c.instructions+=1;goto B61ddb9;
case 0x61ddbb:goto L61ddbb;
case 0x61ddc0:c.instructions+=1;goto B61ddc0;
case 0x61ddc2:goto L61ddc2;
case 0x61ddc7:c.instructions+=1;goto B61ddc7;
case 0x61ddc9:goto L61ddc9;
case 0x61ddce:goto L61ddce;
case 0x61ddd3:c.instructions+=1;goto B61ddd3;
case 0x61ddd7:goto L61ddd7;
case 0x61ddd9:goto L61ddd9;
case 0x61dddd:c.instructions+=1;goto B61dddd;
case 0x61dddf:goto L61dddf;
case 0x61dde3:c.instructions+=2;goto B61dde3;
case 0x61dde4:c.instructions+=1;goto B61dde4;
case 0x61dde9:goto L61dde9;
case 0x61ddeb:goto L61ddeb;
case 0x61ddef:c.instructions+=2;goto B61ddef;
case 0x61ddf0:c.instructions+=1;goto B61ddf0;
case 0x61ddf5:goto L61ddf5;
case 0x61ddf8:c.instructions+=1;goto B61ddf8;
case 0x61ddfa:goto L61ddfa;
case 0x61de01:c.instructions+=1;goto B61de01;
case 0x61de06:goto L61de06;
case 0x61de09:c.instructions+=2;goto B61de09;
case 0x61de0b:c.instructions+=1;goto B61de0b;
case 0x61de0d:goto L61de0d;
case 0x61de10:c.instructions+=2;goto B61de10;
case 0x61de11:c.instructions+=1;goto B61de11;
case 0x61de16:goto L61de16;
case 0x61de18:c.instructions+=2;goto B61de18;
case 0x61de1a:c.instructions+=1;goto B61de1a;
case 0x61de1c:goto L61de1c;
case 0x61de1f:c.instructions+=2;goto B61de1f;
case 0x61de20:c.instructions+=1;goto B61de20;
case 0x61de25:goto L61de25;
case 0x61de28:c.instructions+=2;goto B61de28;
case 0x61de2a:c.instructions+=1;goto B61de2a;
case 0x61de2c:goto L61de2c;
case 0x61de2f:c.instructions+=2;goto B61de2f;
case 0x61de30:c.instructions+=1;goto B61de30;
case 0x61de35:goto L61de35;
case 0x61de38:c.instructions+=2;goto B61de38;
case 0x61de3a:c.instructions+=1;goto B61de3a;
case 0x61de3c:goto L61de3c;
case 0x61de3f:c.instructions+=2;goto B61de3f;
case 0x61de40:c.instructions+=1;goto B61de40;
case 0x61de45:goto L61de45;
case 0x61de48:c.instructions+=2;goto B61de48;
case 0x61de49:c.instructions+=1;goto B61de49;
case 0x61de4b:goto L61de4b;
case 0x61de4c:c.instructions+=6;goto B61de4c;
case 0x61de4e:c.instructions+=5;goto B61de4e;
case 0x61de4f:c.instructions+=4;goto B61de4f;
case 0x61de50:c.instructions+=3;goto B61de50;
case 0x61de51:c.instructions+=2;goto B61de51;
case 0x61de57:c.instructions+=1;goto B61de57;
case 0x61de90:goto L61de90;
case 0x61de93:c.instructions+=6;goto B61de93;
case 0x61de97:c.instructions+=5;goto B61de97;
case 0x61de98:c.instructions+=4;goto B61de98;
case 0x61de9a:c.instructions+=3;goto B61de9a;
case 0x61de9c:c.instructions+=2;goto B61de9c;
case 0x61de9d:c.instructions+=1;goto B61de9d;
case 0x61dea2:goto L61dea2;
case 0x61dea4:c.instructions+=4;goto B61dea4;
case 0x61dea7:c.instructions+=3;goto B61dea7;
case 0x61dea9:c.instructions+=2;goto B61dea9;
case 0x61dead:c.instructions+=1;goto B61dead;
case 0x61deaf:goto L61deaf;
case 0x61deb4:c.instructions+=3;goto B61deb4;
case 0x61deb5:c.instructions+=2;goto B61deb5;
case 0x61deb8:c.instructions+=1;goto B61deb8;
case 0x61deb9:goto L61deb9;
case 0x61debc:c.instructions+=11;goto B61debc;
case 0x61debd:c.instructions+=10;goto B61debd;
case 0x61debf:c.instructions+=9;goto B61debf;
case 0x61dec2:c.instructions+=8;goto B61dec2;
case 0x61dec6:c.instructions+=7;goto B61dec6;
case 0x61dec7:c.instructions+=6;goto B61dec7;
case 0x61deca:c.instructions+=5;goto B61deca;
case 0x61decc:c.instructions+=4;goto B61decc;
case 0x61dece:c.instructions+=3;goto B61dece;
case 0x61decf:c.instructions+=2;goto B61decf;
case 0x61ded3:c.instructions+=1;goto B61ded3;
case 0x61ded8:goto L61ded8;
case 0x61dedc:c.instructions+=5;goto B61dedc;
case 0x61dede:c.instructions+=4;goto B61dede;
case 0x61dee0:c.instructions+=3;goto B61dee0;
case 0x61dee1:c.instructions+=2;goto B61dee1;
case 0x61dee3:c.instructions+=1;goto B61dee3;
case 0x61dee8:goto L61dee8;
case 0x61deeb:c.instructions+=4;goto B61deeb;
case 0x61deed:c.instructions+=3;goto B61deed;
case 0x61deef:c.instructions+=2;goto B61deef;
case 0x61def3:c.instructions+=1;goto B61def3;
case 0x61def9:goto L61def9;
case 0x61defb:c.instructions+=1;goto B61defb;
case 0x61df01:goto L61df01;
case 0x61df05:c.instructions+=6;goto B61df05;
case 0x61df09:c.instructions+=5;goto B61df09;
case 0x61df0a:c.instructions+=4;goto B61df0a;
case 0x61df11:c.instructions+=3;goto B61df11;
case 0x61df14:c.instructions+=2;goto B61df14;
case 0x61df16:c.instructions+=1;goto B61df16;
case 0x61df1c:goto L61df1c;
case 0x61df21:c.instructions+=1;goto B61df21;
case 0x61df26:goto L61df26;
case 0x61df29:c.instructions+=5;goto B61df29;
case 0x61df2b:c.instructions+=4;goto B61df2b;
case 0x61df2c:c.instructions+=3;goto B61df2c;
case 0x61df2d:c.instructions+=2;goto B61df2d;
case 0x61df2f:c.instructions+=1;goto B61df2f;
case 0x61df34:goto L61df34;
case 0x61df36:c.instructions+=1;goto B61df36;
case 0x61df38:goto L61df38;
case 0x61df3b:c.instructions+=2;goto B61df3b;
case 0x61df3f:c.instructions+=1;goto B61df3f;
case 0x61df41:goto L61df41;
case 0x61df45:goto L61df45;
case 0x61df4a:c.instructions+=1;goto B61df4a;
case 0x61df4f:goto L61df4f;
case 0x61df52:c.instructions+=4;goto B61df52;
case 0x61df53:c.instructions+=3;goto B61df53;
case 0x61df54:c.instructions+=2;goto B61df54;
case 0x61df56:c.instructions+=1;goto B61df56;
case 0x61df5b:goto L61df5b;
case 0x61df5d:c.instructions+=1;goto B61df5d;
case 0x61df5f:goto L61df5f;
case 0x61df62:goto L61df62;
case 0x61df67:c.instructions+=1;goto B61df67;
case 0x61df6c:goto L61df6c;
case 0x61df6f:c.instructions+=4;goto B61df6f;
case 0x61df71:c.instructions+=3;goto B61df71;
case 0x61df72:c.instructions+=2;goto B61df72;
case 0x61df74:c.instructions+=1;goto B61df74;
case 0x61df79:goto L61df79;
case 0x61df7b:c.instructions+=1;goto B61df7b;
case 0x61df7d:goto L61df7d;
case 0x61df80:c.instructions+=1;goto B61df80;
case 0x61df82:goto L61df82;
case 0x61df84:goto L61df84;
case 0x61df89:c.instructions+=1;goto B61df89;
case 0x61df8e:goto L61df8e;
case 0x61df91:c.instructions+=4;goto B61df91;
case 0x61df93:c.instructions+=3;goto B61df93;
case 0x61df94:c.instructions+=2;goto B61df94;
case 0x61df96:c.instructions+=1;goto B61df96;
case 0x61df9b:goto L61df9b;
case 0x61df9d:c.instructions+=1;goto B61df9d;
case 0x61df9f:goto L61df9f;
case 0x61dfa2:c.instructions+=1;goto B61dfa2;
case 0x61dfa4:goto L61dfa4;
case 0x61dfa6:goto L61dfa6;
case 0x61dfaa:c.instructions+=9;goto B61dfaa;
case 0x61dfae:c.instructions+=8;goto B61dfae;
case 0x61dfb1:c.instructions+=7;goto B61dfb1;
case 0x61dfb3:c.instructions+=6;goto B61dfb3;
case 0x61dfb7:c.instructions+=5;goto B61dfb7;
case 0x61dfba:c.instructions+=4;goto B61dfba;
case 0x61dfbc:c.instructions+=3;goto B61dfbc;
case 0x61dfc0:c.instructions+=2;goto B61dfc0;
case 0x61dfc3:c.instructions+=1;goto B61dfc3;
case 0x61dfc5:goto L61dfc5;
case 0x61dfc7:c.instructions+=3;goto B61dfc7;
case 0x61dfca:c.instructions+=2;goto B61dfca;
case 0x61dfcb:c.instructions+=1;goto B61dfcb;
case 0x61dfcd:goto L61dfcd;
case 0x61dfd0:c.instructions+=1;goto B61dfd0;
case 0x61dfd2:goto L61dfd2;
case 0x61dfd6:c.instructions+=1;goto B61dfd6;
case 0x61dfd8:goto L61dfd8;
case 0x61dfd9:c.instructions+=5;goto B61dfd9;
case 0x61dfda:c.instructions+=4;goto B61dfda;
case 0x61dfdc:c.instructions+=3;goto B61dfdc;
case 0x61dfdd:c.instructions+=2;goto B61dfdd;
case 0x61dfe0:c.instructions+=1;goto B61dfe0;
case 0x61dfe1:goto L61dfe1;
case 0x61dfe4:c.instructions+=1;goto B61dfe4;
case 0x61dfe6:goto L61dfe6;
case 0x61dfea:c.instructions+=1;goto B61dfea;
case 0x61dfec:goto L61dfec;
case 0x61dff0:c.instructions+=2;goto B61dff0;
case 0x61dff4:c.instructions+=1;goto B61dff4;
case 0x61dff6:goto L61dff6;
case 0x61dffa:c.instructions+=1;goto B61dffa;
case 0x61dffc:goto L61dffc;
default:missing_instruction(c.pc);}
B61d001:L61d001:{c.instructions+=14;NFSU2_TR(0x61d001);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d004:{NFSU2_TR(0x61d004);
{u32 ea_=u32((r4(R+0)*4u)+u32(8403252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d00b:{NFSU2_TR(0x61d00b);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d011:{NFSU2_TR(0x61d011);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d014:{NFSU2_TR(0x61d014);
{u32 ea_=u32((r4(R+0)*4u)+u32(8403252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d01b:{NFSU2_TR(0x61d01b);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d021:{NFSU2_TR(0x61d021);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d024:{NFSU2_TR(0x61d024);
{u32 ea_=u32((r4(R+0)*4u)+u32(8403252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d02b:{NFSU2_TR(0x61d02b);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d031:{NFSU2_TR(0x61d031);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d034:{NFSU2_TR(0x61d034);
{u32 ea_=u32((r4(R+0)*4u)+u32(8403252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d03b:{NFSU2_TR(0x61d03b);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d041:{NFSU2_TR(0x61d041);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d044:{NFSU2_TR(0x61d044);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d049ull));
TAIL_STATIC(0x610cd0u,610);
}
B61d049:L61d049:{c.instructions+=1;NFSU2_TR(0x61d049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d050:L61d050:{c.instructions+=14;NFSU2_TR(0x61d050);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d052:{NFSU2_TR(0x61d052);
u8 U[4];
w4(U+0,u32(0x77a1a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d057:{NFSU2_TR(0x61d057);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d05d:{NFSU2_TR(0x61d05d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d05e:{NFSU2_TR(0x61d05e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d065:{NFSU2_TR(0x61d065);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d066:{NFSU2_TR(0x61d066);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B61d06b:{NFSU2_TR(0x61d06b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d06c:{NFSU2_TR(0x61d06c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d06d:{NFSU2_TR(0x61d06d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d06e:{NFSU2_TR(0x61d06e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d06f:{NFSU2_TR(0x61d06f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d070:{NFSU2_TR(0x61d070);
__builtin_memmove((R+24),(R+4),4);
}
B61d072:{NFSU2_TR(0x61d072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d077ull));
TAIL_STATIC(0x440e50u,440);
}
B61d077:L61d077:{c.instructions+=8;NFSU2_TR(0x61d077);
__builtin_memmove((R+28),(R+0),4);
}
B61d079:{NFSU2_TR(0x61d079);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d07c:{NFSU2_TR(0x61d07c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d080:{NFSU2_TR(0x61d080);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61d084:{NFSU2_TR(0x61d084);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61d086:{NFSU2_TR(0x61d086);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d088:{NFSU2_TR(0x61d088);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d08c:{NFSU2_TR(0x61d08c);
if(r1(R+518)){{goto L61d0a1;}}
}
B61d08e:L61d08e:{c.instructions+=6;NFSU2_TR(0x61d08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61d091:{NFSU2_TR(0x61d091);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d092:{NFSU2_TR(0x61d092);
__builtin_memmove((R+4),(R+28),4);
}
B61d094:{NFSU2_TR(0x61d094);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d097:{NFSU2_TR(0x61d097);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d09a:{NFSU2_TR(0x61d09a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d09full));
TAIL_STATIC(0x493600u,493);
}
B61d09f:L61d09f:{c.instructions+=1;NFSU2_TR(0x61d09f);
{goto L61d0a3;}
}
B61d0a1:L61d0a1:{c.instructions+=1;NFSU2_TR(0x61d0a1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61d0a3:L61d0a3:{c.instructions+=5;NFSU2_TR(0x61d0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0a6:{NFSU2_TR(0x61d0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0a9:{NFSU2_TR(0x61d0a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61d0ac:{NFSU2_TR(0x61d0ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d0b4:{NFSU2_TR(0x61d0b4);
if(r1(R+518)){{goto L61d0f7;}}
}
B61d0b6:L61d0b6:{c.instructions+=3;NFSU2_TR(0x61d0b6);
__builtin_memmove((R+4),gp(0x82da88),4);
}
B61d0bc:{NFSU2_TR(0x61d0bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d0bd:{NFSU2_TR(0x61d0bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d0c2ull));
TAIL_STATIC(0x440e50u,440);
}
B61d0c2:L61d0c2:{c.instructions+=6;NFSU2_TR(0x61d0c2);
__builtin_memmove((R+28),(R+0),4);
}
B61d0c4:{NFSU2_TR(0x61d0c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d0c7:{NFSU2_TR(0x61d0c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0cb:{NFSU2_TR(0x61d0cb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d0cd:{NFSU2_TR(0x61d0cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d0d5:{NFSU2_TR(0x61d0d5);
if(r1(R+518)){{goto L61d0ea;}}
}
B61d0d7:L61d0d7:{c.instructions+=6;NFSU2_TR(0x61d0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61d0da:{NFSU2_TR(0x61d0da);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d0db:{NFSU2_TR(0x61d0db);
__builtin_memmove((R+4),(R+28),4);
}
B61d0dd:{NFSU2_TR(0x61d0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0e0:{NFSU2_TR(0x61d0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0e3:{NFSU2_TR(0x61d0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d0e8ull));
TAIL_STATIC(0x493600u,493);
}
B61d0e8:L61d0e8:{c.instructions+=1;NFSU2_TR(0x61d0e8);
{goto L61d0ec;}
}
B61d0ea:L61d0ea:{c.instructions+=1;NFSU2_TR(0x61d0ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61d0ec:L61d0ec:{c.instructions+=2;NFSU2_TR(0x61d0ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d0f4:{NFSU2_TR(0x61d0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0f7:L61d0f7:{c.instructions+=14;NFSU2_TR(0x61d0f7);
w4(R+0,u32(0x1ull));
}
B61d0fc:{NFSU2_TR(0x61d0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d0ff:{NFSU2_TR(0x61d0ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d102:{NFSU2_TR(0x61d102);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d106:{NFSU2_TR(0x61d106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d109:{NFSU2_TR(0x61d109);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d10c:{NFSU2_TR(0x61d10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B61d112:{NFSU2_TR(0x61d112);
__builtin_memmove((R+0),gp(0x8a4264),4);
}
B61d117:{NFSU2_TR(0x61d117);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B61d119:{NFSU2_TR(0x61d119);
__builtin_memmove(gp(0x8a4264),(R+24),4);
}
B61d11f:{NFSU2_TR(0x61d11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d122:{NFSU2_TR(0x61d122);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d125:{NFSU2_TR(0x61d125);
u8 U[4];
w4(U+0,u32(0x8a4260ull));
s4(u32(r4(R+24)),r4(U+0));
}
B61d12b:{NFSU2_TR(0x61d12b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d130ull));
TAIL_STATIC(0x488ec0u,488);
}
B61d130:L61d130:{c.instructions+=12;NFSU2_TR(0x61d130);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d134:{NFSU2_TR(0x61d134);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d136:{NFSU2_TR(0x61d136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d137:{NFSU2_TR(0x61d137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B61d13a:{NFSU2_TR(0x61d13a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61d13d:{NFSU2_TR(0x61d13d);
__builtin_memmove((R+0),(R+24),4);
}
B61d13f:{NFSU2_TR(0x61d13f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d140:{NFSU2_TR(0x61d140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61d141:{NFSU2_TR(0x61d141);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61d142:{NFSU2_TR(0x61d142);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d149:{NFSU2_TR(0x61d149);
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
B61d14c:{NFSU2_TR(0x61d14c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d150:L61d150:{c.instructions+=17;NFSU2_TR(0x61d150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d151:{NFSU2_TR(0x61d151);
__builtin_memmove((R+20),(R+16),4);
}
B61d153:{NFSU2_TR(0x61d153);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61d156:{NFSU2_TR(0x61d156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B61d15c:{NFSU2_TR(0x61d15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d15f:{NFSU2_TR(0x61d15f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d160:{NFSU2_TR(0x61d160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d161:{NFSU2_TR(0x61d161);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d162:{NFSU2_TR(0x61d162);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61d164:{NFSU2_TR(0x61d164);
__builtin_memmove((R+12),(R+4),4);
}
B61d166:{NFSU2_TR(0x61d166);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d169:{NFSU2_TR(0x61d169);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B61d16e:{NFSU2_TR(0x61d16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d172:{NFSU2_TR(0x61d172);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d176:{NFSU2_TR(0x61d176);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d17a:{NFSU2_TR(0x61d17a);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d17e:{NFSU2_TR(0x61d17e);
if(r1(R+518)){{goto L61d191;}}
}
B61d180:L61d180:{c.instructions+=3;NFSU2_TR(0x61d180);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d183:{NFSU2_TR(0x61d183);
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
B61d185:{NFSU2_TR(0x61d185);
if(r1(R+518)){{goto L61d4a1;}}
}
B61d18b:L61d18b:{c.instructions+=2;NFSU2_TR(0x61d18b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d18f:{NFSU2_TR(0x61d18f);
__builtin_memmove((R+4),(R+0),4);
}
B61d191:L61d191:{c.instructions+=2;NFSU2_TR(0x61d191);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B61d193:{NFSU2_TR(0x61d193);
if(r1(R+518)){{goto L61d4a1;}}
}
B61d199:L61d199:{c.instructions+=2;NFSU2_TR(0x61d199);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B61d19c:{NFSU2_TR(0x61d19c);
if(r1(R+518)){{goto L61d4a1;}}
}
B61d1a2:L61d1a2:{c.instructions+=3;NFSU2_TR(0x61d1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61d1a5:{NFSU2_TR(0x61d1a5);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B61d1a7:{NFSU2_TR(0x61d1a7);
if(r1(R+518)){{goto L61d203;}}
}
B61d1a9:L61d1a9:{c.instructions+=2;NFSU2_TR(0x61d1a9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61d1af:{NFSU2_TR(0x61d1af);
if(r1(R+518)){{goto L61d1b8;}}
}
B61d1b1:L61d1b1:{c.instructions+=2;NFSU2_TR(0x61d1b1);
__builtin_memmove((R+4),(R+24),4);
}
B61d1b3:{NFSU2_TR(0x61d1b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d1b8ull));
TAIL_STATIC(0x60bb10u,60b);
}
B61d1b8:L61d1b8:{c.instructions+=7;NFSU2_TR(0x61d1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d1bb:{NFSU2_TR(0x61d1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61d1c1:{NFSU2_TR(0x61d1c1);
__builtin_memmove((R+0),gp(0x870cd0),4);
}
B61d1c6:{NFSU2_TR(0x61d1c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B61d1c9:{NFSU2_TR(0x61d1c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d1cb:{NFSU2_TR(0x61d1cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d1cf:{NFSU2_TR(0x61d1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d1e1;}}
}
B61d1d1:L61d1d1:{c.instructions+=2;NFSU2_TR(0x61d1d1);
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
B61d1d3:{NFSU2_TR(0x61d1d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d4a1;}}
}
B61d1d9:L61d1d9:{c.instructions+=4;NFSU2_TR(0x61d1d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d1da:{NFSU2_TR(0x61d1da);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d1de:{NFSU2_TR(0x61d1de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d1df:{NFSU2_TR(0x61d1df);
{goto L61d210;}
}
B61d1e1:L61d1e1:{c.instructions+=2;NFSU2_TR(0x61d1e1);
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
B61d1e3:{NFSU2_TR(0x61d1e3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d1d9u);}goto L61d1d9;}}
}
B61d1e5:L61d1e5:{c.instructions+=7;NFSU2_TR(0x61d1e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61d1e8:{NFSU2_TR(0x61d1e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d1e9:{NFSU2_TR(0x61d1e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d1ed:{NFSU2_TR(0x61d1ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d1ee:{NFSU2_TR(0x61d1ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d1ef:{NFSU2_TR(0x61d1ef);
s4(0x8a1d0c,u32(0x1ull));
}
B61d1f9:{NFSU2_TR(0x61d1f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d1feull));
TAIL_STATIC(0x43c990u,43c);
}
B61d1fe:L61d1fe:{c.instructions+=2;NFSU2_TR(0x61d1fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61d201:{NFSU2_TR(0x61d201);
{goto L61d218;}
}
B61d203:L61d203:{c.instructions+=5;NFSU2_TR(0x61d203);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61d206:{NFSU2_TR(0x61d206);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d207:{NFSU2_TR(0x61d207);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d20b:{NFSU2_TR(0x61d20b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d20f:{NFSU2_TR(0x61d20f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d210:L61d210:{c.instructions+=1;NFSU2_TR(0x61d210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d215ull));
TAIL_STATIC(0x4012b0u,401);
}
B61d215:L61d215:{c.instructions+=1;NFSU2_TR(0x61d215);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61d218:L61d218:{c.instructions+=13;NFSU2_TR(0x61d218);
__builtin_memmove((R+0),gp(0x7a6794),4);
}
B61d21d:{NFSU2_TR(0x61d21d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61d220:{NFSU2_TR(0x61d220);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61d222:{NFSU2_TR(0x61d222);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d224:{NFSU2_TR(0x61d224);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B61d227:{NFSU2_TR(0x61d227);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d228:{NFSU2_TR(0x61d228);
u8 U[4];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d22f:{NFSU2_TR(0x61d22f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d230:{NFSU2_TR(0x61d230);
__builtin_memmove((R+4),(R+24),4);
}
B61d232:{NFSU2_TR(0x61d232);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B61d233:{NFSU2_TR(0x61d233);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x200ull))));
}
B61d239:{NFSU2_TR(0x61d239);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d23d:{NFSU2_TR(0x61d23d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d242ull));
TAIL_STATIC(0x48acb0u,48a);
}
B61d242:L61d242:{c.instructions+=2;NFSU2_TR(0x61d242);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d245:{NFSU2_TR(0x61d245);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61d4a1;}}
}
B61d24b:L61d24b:{c.instructions+=6;NFSU2_TR(0x61d24b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d24f:{NFSU2_TR(0x61d24f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d253:{NFSU2_TR(0x61d253);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d254:{NFSU2_TR(0x61d254);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d255:{NFSU2_TR(0x61d255);
__builtin_memmove((R+4),(R+24),4);
}
B61d257:{NFSU2_TR(0x61d257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d25cull));
TAIL_STATIC(0x48f6f0u,48f);
}
B61d25c:L61d25c:{c.instructions+=2;NFSU2_TR(0x61d25c);
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
B61d25e:{NFSU2_TR(0x61d25e);
if(r1(R+518)){{goto L61d4a1;}}
}
B61d264:L61d264:{c.instructions+=2;NFSU2_TR(0x61d264);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d266:{NFSU2_TR(0x61d266);
if(r1(R+518)){{goto L61d2b0;}}
}
B61d268:L61d268:{c.instructions+=24;NFSU2_TR(0x61d268);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d26c:{NFSU2_TR(0x61d26c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d26f:{NFSU2_TR(0x61d26f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d272:{NFSU2_TR(0x61d272);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61d275:{NFSU2_TR(0x61d275);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d278:{NFSU2_TR(0x61d278);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B61d27b:{NFSU2_TR(0x61d27b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d27f:{NFSU2_TR(0x61d27f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d283:{NFSU2_TR(0x61d283);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d285:{NFSU2_TR(0x61d285);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d287:{NFSU2_TR(0x61d287);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d28a:{NFSU2_TR(0x61d28a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d28c:{NFSU2_TR(0x61d28c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d28f:{NFSU2_TR(0x61d28f);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d292:{NFSU2_TR(0x61d292);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d295:{NFSU2_TR(0x61d295);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d298:{NFSU2_TR(0x61d298);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d29b:{NFSU2_TR(0x61d29b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d29e:{NFSU2_TR(0x61d29e);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d2a1:{NFSU2_TR(0x61d2a1);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d2a4:{NFSU2_TR(0x61d2a4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d2a7:{NFSU2_TR(0x61d2a7);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d2aa:{NFSU2_TR(0x61d2aa);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d2ad:{NFSU2_TR(0x61d2ad);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d2b0:L61d2b0:{c.instructions+=2;NFSU2_TR(0x61d2b0);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d2b2:{NFSU2_TR(0x61d2b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d2b7ull));
TAIL_STATIC(0x401e30u,401);
}
B61d2b7:L61d2b7:{c.instructions+=4;NFSU2_TR(0x61d2b7);
__builtin_memmove((R+24),(R+0),4);
}
B61d2b9:{NFSU2_TR(0x61d2b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d2bc:{NFSU2_TR(0x61d2bc);
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
B61d2be:{NFSU2_TR(0x61d2be);
if(r1(R+518)){{goto L61d463;}}
}
B61d2c4:L61d2c4:{c.instructions+=4;NFSU2_TR(0x61d2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d2c8:{NFSU2_TR(0x61d2c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d2c9:{NFSU2_TR(0x61d2c9);
__builtin_memmove((R+4),(R+24),4);
}
B61d2cb:{NFSU2_TR(0x61d2cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d2d0ull));
TAIL_STATIC(0x4013d0u,401);
}
B61d2d0:L61d2d0:{c.instructions+=3;NFSU2_TR(0x61d2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d2d4:{NFSU2_TR(0x61d2d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d2d6:{NFSU2_TR(0x61d2d6);
if(r1(R+518)){{goto L61d2e0;}}
}
B61d2d8:L61d2d8:{c.instructions+=3;NFSU2_TR(0x61d2d8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d2db:{NFSU2_TR(0x61d2db);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B61d2dd:{NFSU2_TR(0x61d2dd);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d2e0:L61d2e0:{c.instructions+=3;NFSU2_TR(0x61d2e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61d2e3:{NFSU2_TR(0x61d2e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61d2e5:{NFSU2_TR(0x61d2e5);
if(r1(R+518)){{goto L61d44d;}}
}
B61d2eb:L61d2eb:{c.instructions+=2;NFSU2_TR(0x61d2eb);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d2f0:{NFSU2_TR(0x61d2f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d2f5ull));
TAIL_STATIC(0x401e30u,401);
}
B61d2f5:L61d2f5:{c.instructions+=4;NFSU2_TR(0x61d2f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d2f8:{NFSU2_TR(0x61d2f8);
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
B61d2fa:{NFSU2_TR(0x61d2fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d2fe:{NFSU2_TR(0x61d2fe);
if(r1(R+518)){{goto L61d4a1;}}
}
B61d304:L61d304:{c.instructions+=11;NFSU2_TR(0x61d304);
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
B61d306:{NFSU2_TR(0x61d306);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d309:{NFSU2_TR(0x61d309);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61d30c:{NFSU2_TR(0x61d30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d30f:{NFSU2_TR(0x61d30f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d313:{NFSU2_TR(0x61d313);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d316:{NFSU2_TR(0x61d316);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d31a:{NFSU2_TR(0x61d31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d31d:{NFSU2_TR(0x61d31d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d321:{NFSU2_TR(0x61d321);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d329:{NFSU2_TR(0x61d329);
if(r1(R+518)){{goto L61d421;}}
}
B61d32f:L61d32f:{c.instructions+=4;NFSU2_TR(0x61d32f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61d332:{NFSU2_TR(0x61d332);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d333:{NFSU2_TR(0x61d333);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d337:{NFSU2_TR(0x61d337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d33cull));
TAIL_STATIC(0x440fd0u,440);
}
B61d33c:L61d33c:{c.instructions+=56;NFSU2_TR(0x61d33c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d340:{NFSU2_TR(0x61d340);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d343:{NFSU2_TR(0x61d343);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d344:{NFSU2_TR(0x61d344);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d348:{NFSU2_TR(0x61d348);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d34b:{NFSU2_TR(0x61d34b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d34d:{NFSU2_TR(0x61d34d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d351:{NFSU2_TR(0x61d351);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d354:{NFSU2_TR(0x61d354);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d356:{NFSU2_TR(0x61d356);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d35a:{NFSU2_TR(0x61d35a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d35c:{NFSU2_TR(0x61d35c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d35e:{NFSU2_TR(0x61d35e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d362:{NFSU2_TR(0x61d362);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d365:{NFSU2_TR(0x61d365);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d369:{NFSU2_TR(0x61d369);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d36c:{NFSU2_TR(0x61d36c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d36e:{NFSU2_TR(0x61d36e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d372:{NFSU2_TR(0x61d372);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d375:{NFSU2_TR(0x61d375);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d377:{NFSU2_TR(0x61d377);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d37b:{NFSU2_TR(0x61d37b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d37e:{NFSU2_TR(0x61d37e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d380:{NFSU2_TR(0x61d380);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d384:{NFSU2_TR(0x61d384);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d387:{NFSU2_TR(0x61d387);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d38b:{NFSU2_TR(0x61d38b);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d38e:{NFSU2_TR(0x61d38e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d390:{NFSU2_TR(0x61d390);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d394:{NFSU2_TR(0x61d394);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d397:{NFSU2_TR(0x61d397);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d399:{NFSU2_TR(0x61d399);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d39d:{NFSU2_TR(0x61d39d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d3a0:{NFSU2_TR(0x61d3a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d3a2:{NFSU2_TR(0x61d3a2);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d3a6:{NFSU2_TR(0x61d3a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d3aa:{NFSU2_TR(0x61d3aa);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d3ae:{NFSU2_TR(0x61d3ae);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d3b1:{NFSU2_TR(0x61d3b1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d3b5:{NFSU2_TR(0x61d3b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d3b9:{NFSU2_TR(0x61d3b9);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d3bc:{NFSU2_TR(0x61d3bc);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d3c3:{NFSU2_TR(0x61d3c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d3c5:{NFSU2_TR(0x61d3c5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d3c9:{NFSU2_TR(0x61d3c9);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d3cc:{NFSU2_TR(0x61d3cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d3ce:{NFSU2_TR(0x61d3ce);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d3d2:{NFSU2_TR(0x61d3d2);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d3d5:{NFSU2_TR(0x61d3d5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d3d7:{NFSU2_TR(0x61d3d7);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d3db:{NFSU2_TR(0x61d3db);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d3df:{NFSU2_TR(0x61d3df);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61d3e1:{NFSU2_TR(0x61d3e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d3e5:{NFSU2_TR(0x61d3e5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d3e9:{NFSU2_TR(0x61d3e9);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d3ed:{NFSU2_TR(0x61d3ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d3f2ull));
TAIL_STATIC(0x4013d0u,401);
}
B61d3f2:L61d3f2:{c.instructions+=4;NFSU2_TR(0x61d3f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d3f6:{NFSU2_TR(0x61d3f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d3f7:{NFSU2_TR(0x61d3f7);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d3fe:{NFSU2_TR(0x61d3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d403ull));
TAIL_STATIC(0x440fd0u,440);
}
B61d403:L61d403:{c.instructions+=11;NFSU2_TR(0x61d403);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d406:{NFSU2_TR(0x61d406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d407:{NFSU2_TR(0x61d407);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d40b:{NFSU2_TR(0x61d40b);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d40f:{NFSU2_TR(0x61d40f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d410:{NFSU2_TR(0x61d410);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d411:{NFSU2_TR(0x61d411);
u8 U[4];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d418:{NFSU2_TR(0x61d418);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d419:{NFSU2_TR(0x61d419);
u8 U[4];
w4(U+0,u32(0x7f3f78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d41e:{NFSU2_TR(0x61d41e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d41f:{NFSU2_TR(0x61d41f);
{goto L61d432;}
}
B61d421:L61d421:{c.instructions+=8;NFSU2_TR(0x61d421);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d424:{NFSU2_TR(0x61d424);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d425:{NFSU2_TR(0x61d425);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d429:{NFSU2_TR(0x61d429);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d42a:{NFSU2_TR(0x61d42a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d42b:{NFSU2_TR(0x61d42b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d42c:{NFSU2_TR(0x61d42c);
u8 U[4];
w4(U+0,u32(0x7f4068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d431:{NFSU2_TR(0x61d431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d432:L61d432:{c.instructions+=1;NFSU2_TR(0x61d432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d437ull));
TAIL_STATIC(0x48f600u,48f);
}
B61d437:L61d437:{c.instructions+=10;NFSU2_TR(0x61d437);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d43b:{NFSU2_TR(0x61d43b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d43f:{NFSU2_TR(0x61d43f);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d443:{NFSU2_TR(0x61d443);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B61d446:{NFSU2_TR(0x61d446);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d447:{NFSU2_TR(0x61d447);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d448:{NFSU2_TR(0x61d448);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d449:{NFSU2_TR(0x61d449);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d44a:{NFSU2_TR(0x61d44a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d44b:{NFSU2_TR(0x61d44b);
{goto L61d45b;}
}
B61d44d:L61d44d:{c.instructions+=7;NFSU2_TR(0x61d44d);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d451:{NFSU2_TR(0x61d451);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d455:{NFSU2_TR(0x61d455);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d456:{NFSU2_TR(0x61d456);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d457:{NFSU2_TR(0x61d457);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d459:{NFSU2_TR(0x61d459);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d45a:{NFSU2_TR(0x61d45a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d45b:L61d45b:{c.instructions+=2;NFSU2_TR(0x61d45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d45e:{NFSU2_TR(0x61d45e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d463ull));
TAIL_STATIC(0x5c5930u,5c5);
}
B61d463:L61d463:{c.instructions+=2;NFSU2_TR(0x61d463);
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
B61d465:{NFSU2_TR(0x61d465);
if(r1(R+518)){{goto L61d4a1;}}
}
B61d467:L61d467:{c.instructions+=20;NFSU2_TR(0x61d467);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d46b:{NFSU2_TR(0x61d46b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d46d:{NFSU2_TR(0x61d46d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d471:{NFSU2_TR(0x61d471);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d474:{NFSU2_TR(0x61d474);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d476:{NFSU2_TR(0x61d476);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d478:{NFSU2_TR(0x61d478);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d47b:{NFSU2_TR(0x61d47b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d47d:{NFSU2_TR(0x61d47d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d480:{NFSU2_TR(0x61d480);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d483:{NFSU2_TR(0x61d483);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d486:{NFSU2_TR(0x61d486);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d489:{NFSU2_TR(0x61d489);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d48c:{NFSU2_TR(0x61d48c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d48f:{NFSU2_TR(0x61d48f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d492:{NFSU2_TR(0x61d492);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d495:{NFSU2_TR(0x61d495);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d498:{NFSU2_TR(0x61d498);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d49b:{NFSU2_TR(0x61d49b);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61d49e:{NFSU2_TR(0x61d49e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d4a1:L61d4a1:{c.instructions+=6;NFSU2_TR(0x61d4a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d4a2:{NFSU2_TR(0x61d4a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d4a3:{NFSU2_TR(0x61d4a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61d4a4:{NFSU2_TR(0x61d4a4);
__builtin_memmove((R+16),(R+20),4);
}
B61d4a6:{NFSU2_TR(0x61d4a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61d4a7:{NFSU2_TR(0x61d4a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d4b0:L61d4b0:{c.instructions+=9;NFSU2_TR(0x61d4b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d4b1:{NFSU2_TR(0x61d4b1);
__builtin_memmove((R+20),(R+16),4);
}
B61d4b3:{NFSU2_TR(0x61d4b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61d4b6:{NFSU2_TR(0x61d4b6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x84ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x84ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d4bc:{NFSU2_TR(0x61d4bc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d4bd:{NFSU2_TR(0x61d4bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d4be:{NFSU2_TR(0x61d4be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d4bf:{NFSU2_TR(0x61d4bf);
s4(0x8a1d0c,u32(0x0ull));
}
B61d4c9:{NFSU2_TR(0x61d4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d4ceull));
TAIL_STATIC(0x5b98a0u,5b9);
}
B61d4ce:L61d4ce:{c.instructions+=5;NFSU2_TR(0x61d4ce);
__builtin_memmove((R+24),gp(0x8a4260),4);
}
B61d4d4:{NFSU2_TR(0x61d4d4);
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
B61d4d7:{NFSU2_TR(0x61d4d7);
w4(R+4,u32(0x8a4260ull));
}
B61d4dc:{NFSU2_TR(0x61d4dc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+518),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61d4e1:{NFSU2_TR(0x61d4e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d4e6ull));
TAIL_STATIC(0x502fd0u,502);
}
B61d4e6:L61d4e6:{c.instructions+=3;NFSU2_TR(0x61d4e6);
__builtin_memmove((R+12),(R+0),4);
}
B61d4e8:{NFSU2_TR(0x61d4e8);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61d4ea:{NFSU2_TR(0x61d4ea);
if(r1(R+518)){{goto L61d60c;}}
}
B61d4f0:L61d4f0:{c.instructions+=1;NFSU2_TR(0x61d4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61d4f3:L61d4f3:{c.instructions+=3;NFSU2_TR(0x61d4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d4f6:{NFSU2_TR(0x61d4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d4f8:{NFSU2_TR(0x61d4f8);
if(r1(R+518)){{goto L61d602;}}
}
B61d4fe:L61d4fe:{c.instructions+=3;NFSU2_TR(0x61d4fe);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61d502:{NFSU2_TR(0x61d502);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61d504:{NFSU2_TR(0x61d504);
if(r1(R+518)){{goto L61d511;}}
}
B61d506:L61d506:{c.instructions+=3;NFSU2_TR(0x61d506);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d509:{NFSU2_TR(0x61d509);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d50b:{NFSU2_TR(0x61d50b);
if(r1(R+518)){{goto L61d602;}}
}
B61d511:L61d511:{c.instructions+=3;NFSU2_TR(0x61d511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d514:{NFSU2_TR(0x61d514);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d516:{NFSU2_TR(0x61d516);
if(r1(R+518)){{goto L61d5f6;}}
}
B61d51c:L61d51c:{c.instructions+=4;NFSU2_TR(0x61d51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d51f:{NFSU2_TR(0x61d51f);
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
B61d521:{NFSU2_TR(0x61d521);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61d527:{NFSU2_TR(0x61d527);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d613;}}
}
B61d52d:L61d52d:{c.instructions+=2;NFSU2_TR(0x61d52d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61d530:{NFSU2_TR(0x61d530);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61d533:L61d533:{c.instructions+=5;NFSU2_TR(0x61d533);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d534:{NFSU2_TR(0x61d534);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d535:{NFSU2_TR(0x61d535);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d539:{NFSU2_TR(0x61d539);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d53a:{NFSU2_TR(0x61d53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d53full));
TAIL_STATIC(0x401340u,401);
}
B61d53f:L61d53f:{c.instructions+=5;NFSU2_TR(0x61d53f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d543:{NFSU2_TR(0x61d543);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d544:{NFSU2_TR(0x61d544);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d548:{NFSU2_TR(0x61d548);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d549:{NFSU2_TR(0x61d549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d54eull));
TAIL_STATIC(0x5baf90u,5ba);
}
B61d54e:L61d54e:{c.instructions+=7;NFSU2_TR(0x61d54e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61d551:{NFSU2_TR(0x61d551);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d558:{NFSU2_TR(0x61d558);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d559:{NFSU2_TR(0x61d559);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d55d:{NFSU2_TR(0x61d55d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d55e:{NFSU2_TR(0x61d55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d561:{NFSU2_TR(0x61d561);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d566ull));
TAIL_STATIC(0x48d7e0u,48d);
}
B61d566:L61d566:{c.instructions+=43;NFSU2_TR(0x61d566);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d56a:{NFSU2_TR(0x61d56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d56d:{NFSU2_TR(0x61d56d);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d570:{NFSU2_TR(0x61d570);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B61d573:{NFSU2_TR(0x61d573);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d577:{NFSU2_TR(0x61d577);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d579:{NFSU2_TR(0x61d579);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d57c:{NFSU2_TR(0x61d57c);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d583:{NFSU2_TR(0x61d583);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d585:{NFSU2_TR(0x61d585);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d589:{NFSU2_TR(0x61d589);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d58b:{NFSU2_TR(0x61d58b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d58d:{NFSU2_TR(0x61d58d);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d591:{NFSU2_TR(0x61d591);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d595:{NFSU2_TR(0x61d595);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d598:{NFSU2_TR(0x61d598);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d59c:{NFSU2_TR(0x61d59c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d59f:{NFSU2_TR(0x61d59f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d5a1:{NFSU2_TR(0x61d5a1);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d5a5:{NFSU2_TR(0x61d5a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d5a7:{NFSU2_TR(0x61d5a7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d5a9:{NFSU2_TR(0x61d5a9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d5ad:{NFSU2_TR(0x61d5ad);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d5b1:{NFSU2_TR(0x61d5b1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d5b4:{NFSU2_TR(0x61d5b4);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d5b8:{NFSU2_TR(0x61d5b8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d5bb:{NFSU2_TR(0x61d5bb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d5bd:{NFSU2_TR(0x61d5bd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61d5c1:{NFSU2_TR(0x61d5c1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61d5c3:{NFSU2_TR(0x61d5c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d5c7:{NFSU2_TR(0x61d5c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d5c8:{NFSU2_TR(0x61d5c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d5c9:{NFSU2_TR(0x61d5c9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61d5cb:{NFSU2_TR(0x61d5cb);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61d5cf:{NFSU2_TR(0x61d5cf);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d5d3:{NFSU2_TR(0x61d5d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d5d7:{NFSU2_TR(0x61d5d7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61d5d9:{NFSU2_TR(0x61d5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d5dd:{NFSU2_TR(0x61d5dd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d5e1:{NFSU2_TR(0x61d5e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d5e5:{NFSU2_TR(0x61d5e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d5e6:{NFSU2_TR(0x61d5e6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61d5ea:{NFSU2_TR(0x61d5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d5efull));
TAIL_STATIC(0x43d7a0u,43d);
}
B61d5ef:L61d5ef:{c.instructions+=3;NFSU2_TR(0x61d5ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61d5f2:{NFSU2_TR(0x61d5f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d5f4:{NFSU2_TR(0x61d5f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d602;}}
}
B61d5f6:L61d5f6:{c.instructions+=5;NFSU2_TR(0x61d5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d5f9:{NFSU2_TR(0x61d5f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d5fa:{NFSU2_TR(0x61d5fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d5fb:{NFSU2_TR(0x61d5fb);
__builtin_memmove((R+4),(R+24),4);
}
B61d5fd:{NFSU2_TR(0x61d5fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d602ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d150u);}goto L61d150;}
}
B61d602:L61d602:{c.instructions+=3;NFSU2_TR(0x61d602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61d604:{NFSU2_TR(0x61d604);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61d606:{NFSU2_TR(0x61d606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d4f3u);}goto L61d4f3;}}
}
B61d60c:L61d60c:{c.instructions+=6;NFSU2_TR(0x61d60c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d60d:{NFSU2_TR(0x61d60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d60e:{NFSU2_TR(0x61d60e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61d60f:{NFSU2_TR(0x61d60f);
__builtin_memmove((R+16),(R+20),4);
}
B61d611:{NFSU2_TR(0x61d611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61d612:{NFSU2_TR(0x61d612);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d613:L61d613:{c.instructions+=2;NFSU2_TR(0x61d613);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d616:{NFSU2_TR(0x61d616);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d533u);}goto L61d533;}
}
B61d620:L61d620:{c.instructions+=7;NFSU2_TR(0x61d620);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d624:{NFSU2_TR(0x61d624);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d628:{NFSU2_TR(0x61d628);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B61d62b:{NFSU2_TR(0x61d62b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d62c:{NFSU2_TR(0x61d62c);
u8 U[16];
w4(U+0,u32(u32(u32(0x690ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B61d633:{NFSU2_TR(0x61d633);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d635:{NFSU2_TR(0x61d635);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d63e;}}
}
B61d637:L61d637:{c.instructions+=4;NFSU2_TR(0x61d637);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d639:{NFSU2_TR(0x61d639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d63a:{NFSU2_TR(0x61d63a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d63d:{NFSU2_TR(0x61d63d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d63e:L61d63e:{c.instructions+=7;NFSU2_TR(0x61d63e);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B61d644:{NFSU2_TR(0x61d644);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d645:{NFSU2_TR(0x61d645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61d647:{NFSU2_TR(0x61d647);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B61d64d:{NFSU2_TR(0x61d64d);
u8 U[4];
w4(U+0,u32(0x7a8720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d652:{NFSU2_TR(0x61d652);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B61d654:{NFSU2_TR(0x61d654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d659ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d659:L61d659:{c.instructions+=5;NFSU2_TR(0x61d659);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d65c:{NFSU2_TR(0x61d65c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d65e:{NFSU2_TR(0x61d65e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d65f:{NFSU2_TR(0x61d65f);
__builtin_memmove((R+4),(R+28),4);
}
B61d661:{NFSU2_TR(0x61d661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d666ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d666:L61d666:{c.instructions+=2;NFSU2_TR(0x61d666);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d668:{NFSU2_TR(0x61d668);
if(r1(R+518)){{goto L61d679;}}
}
B61d66a:L61d66a:{c.instructions+=5;NFSU2_TR(0x61d66a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d66d:{NFSU2_TR(0x61d66d);
__builtin_memmove((R+0),gp(0x8a1cb0),4);
}
B61d672:{NFSU2_TR(0x61d672);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B61d675:{NFSU2_TR(0x61d675);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d677:{NFSU2_TR(0x61d677);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d681;}}
}
B61d679:L61d679:{c.instructions+=5;NFSU2_TR(0x61d679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d67a:{NFSU2_TR(0x61d67a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d67c:{NFSU2_TR(0x61d67c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d67d:{NFSU2_TR(0x61d67d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d680:{NFSU2_TR(0x61d680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d681:L61d681:{c.instructions+=5;NFSU2_TR(0x61d681);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B61d684:{NFSU2_TR(0x61d684);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d688:{NFSU2_TR(0x61d688);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d689:{NFSU2_TR(0x61d689);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d68a:{NFSU2_TR(0x61d68a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d68full));
TAIL_STATIC(0x43dbd0u,43d);
}
B61d68f:L61d68f:{c.instructions+=6;NFSU2_TR(0x61d68f);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d694:{NFSU2_TR(0x61d694);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d698:{NFSU2_TR(0x61d698);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d699:{NFSU2_TR(0x61d699);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d69d:{NFSU2_TR(0x61d69d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d69e:{NFSU2_TR(0x61d69e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d6a3ull));
TAIL_STATIC(0x43dda0u,43d);
}
B61d6a3:L61d6a3:{c.instructions+=6;NFSU2_TR(0x61d6a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d6a4:{NFSU2_TR(0x61d6a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d6a8:{NFSU2_TR(0x61d6a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d6a9:{NFSU2_TR(0x61d6a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d6ad:{NFSU2_TR(0x61d6ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d6ae:{NFSU2_TR(0x61d6ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d6b3ull));
TAIL_STATIC(0x43dda0u,43d);
}
B61d6b3:L61d6b3:{c.instructions+=3;NFSU2_TR(0x61d6b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d6b7:{NFSU2_TR(0x61d6b7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d6b8:{NFSU2_TR(0x61d6b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d6bdull));
TAIL_STATIC(0x43db50u,43d);
}
B61d6bd:L61d6bd:{c.instructions+=5;NFSU2_TR(0x61d6bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B61d6c0:{NFSU2_TR(0x61d6c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d6c1:{NFSU2_TR(0x61d6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d6c2:{NFSU2_TR(0x61d6c2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d6c5:{NFSU2_TR(0x61d6c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d6d0:L61d6d0:{c.instructions+=7;NFSU2_TR(0x61d6d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d6d4:{NFSU2_TR(0x61d6d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d6d8:{NFSU2_TR(0x61d6d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B61d6db:{NFSU2_TR(0x61d6db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d6dc:{NFSU2_TR(0x61d6dc);
u8 U[16];
w4(U+0,u32(u32(u32(0x690ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B61d6e3:{NFSU2_TR(0x61d6e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d6e5:{NFSU2_TR(0x61d6e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d6ee;}}
}
B61d6e7:L61d6e7:{c.instructions+=4;NFSU2_TR(0x61d6e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d6e9:{NFSU2_TR(0x61d6e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d6ea:{NFSU2_TR(0x61d6ea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d6ed:{NFSU2_TR(0x61d6ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d6ee:L61d6ee:{c.instructions+=7;NFSU2_TR(0x61d6ee);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B61d6f4:{NFSU2_TR(0x61d6f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d6f5:{NFSU2_TR(0x61d6f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61d6f7:{NFSU2_TR(0x61d6f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B61d6fd:{NFSU2_TR(0x61d6fd);
u8 U[4];
w4(U+0,u32(0x7a8720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d702:{NFSU2_TR(0x61d702);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B61d704:{NFSU2_TR(0x61d704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d709ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d709:L61d709:{c.instructions+=5;NFSU2_TR(0x61d709);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d70c:{NFSU2_TR(0x61d70c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d70e:{NFSU2_TR(0x61d70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d70f:{NFSU2_TR(0x61d70f);
__builtin_memmove((R+4),(R+28),4);
}
B61d711:{NFSU2_TR(0x61d711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d716ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d716:L61d716:{c.instructions+=2;NFSU2_TR(0x61d716);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d718:{NFSU2_TR(0x61d718);
if(r1(R+518)){{goto L61d729;}}
}
B61d71a:L61d71a:{c.instructions+=5;NFSU2_TR(0x61d71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d71d:{NFSU2_TR(0x61d71d);
__builtin_memmove((R+0),gp(0x8a1cb0),4);
}
B61d722:{NFSU2_TR(0x61d722);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B61d725:{NFSU2_TR(0x61d725);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d727:{NFSU2_TR(0x61d727);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d731;}}
}
B61d729:L61d729:{c.instructions+=5;NFSU2_TR(0x61d729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d72a:{NFSU2_TR(0x61d72a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d72c:{NFSU2_TR(0x61d72c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d72d:{NFSU2_TR(0x61d72d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d730:{NFSU2_TR(0x61d730);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d731:L61d731:{c.instructions+=5;NFSU2_TR(0x61d731);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x20ull))));
}
B61d734:{NFSU2_TR(0x61d734);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d738:{NFSU2_TR(0x61d738);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d739:{NFSU2_TR(0x61d739);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d73a:{NFSU2_TR(0x61d73a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d73full));
TAIL_STATIC(0x43dbd0u,43d);
}
B61d73f:L61d73f:{c.instructions+=6;NFSU2_TR(0x61d73f);
u8 U[4];
w4(U+0,u32(0x7864b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d744:{NFSU2_TR(0x61d744);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d748:{NFSU2_TR(0x61d748);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d749:{NFSU2_TR(0x61d749);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d74d:{NFSU2_TR(0x61d74d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d74e:{NFSU2_TR(0x61d74e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d753ull));
TAIL_STATIC(0x43dda0u,43d);
}
B61d753:L61d753:{c.instructions+=6;NFSU2_TR(0x61d753);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d754:{NFSU2_TR(0x61d754);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d758:{NFSU2_TR(0x61d758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d759:{NFSU2_TR(0x61d759);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d75d:{NFSU2_TR(0x61d75d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d75e:{NFSU2_TR(0x61d75e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d763ull));
TAIL_STATIC(0x43dda0u,43d);
}
B61d763:L61d763:{c.instructions+=6;NFSU2_TR(0x61d763);
u8 U[4];
w4(U+0,u32(0x7a8718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d768:{NFSU2_TR(0x61d768);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61d76c:{NFSU2_TR(0x61d76c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d76d:{NFSU2_TR(0x61d76d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61d771:{NFSU2_TR(0x61d771);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d772:{NFSU2_TR(0x61d772);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d777ull));
TAIL_STATIC(0x43dda0u,43d);
}
B61d777:L61d777:{c.instructions+=3;NFSU2_TR(0x61d777);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61d77b:{NFSU2_TR(0x61d77b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d77c:{NFSU2_TR(0x61d77c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d781ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d781:L61d781:{c.instructions+=5;NFSU2_TR(0x61d781);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B61d784:{NFSU2_TR(0x61d784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d785:{NFSU2_TR(0x61d785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61d786:{NFSU2_TR(0x61d786);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d789:{NFSU2_TR(0x61d789);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d790:L61d790:{c.instructions+=6;NFSU2_TR(0x61d790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3c4ull))));
}
B61d796:{NFSU2_TR(0x61d796);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d797:{NFSU2_TR(0x61d797);
u8 U[8];
w4(U+0,u32(u32(u32(0x3ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61d79e:{NFSU2_TR(0x61d79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d7a4:{NFSU2_TR(0x61d7a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d7a6:{NFSU2_TR(0x61d7a6);
if(r1(R+518)){{goto L61d7d6;}}
}
B61d7a8:L61d7a8:{c.instructions+=4;NFSU2_TR(0x61d7a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7aa:{NFSU2_TR(0x61d7aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7ac:{NFSU2_TR(0x61d7ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7ad:{NFSU2_TR(0x61d7ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d7b2ull));
TAIL_STATIC(0x4901d0u,490);
}
B61d7b2:L61d7b2:{c.instructions+=4;NFSU2_TR(0x61d7b2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61d7b5:{NFSU2_TR(0x61d7b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d7b7:{NFSU2_TR(0x61d7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d7bb:{NFSU2_TR(0x61d7bb);
if(r1(R+518)){{goto L61d7d6;}}
}
B61d7bd:L61d7bd:{c.instructions+=8;NFSU2_TR(0x61d7bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61d7c0:{NFSU2_TR(0x61d7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61d7c6:{NFSU2_TR(0x61d7c6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61d7c8:{NFSU2_TR(0x61d7c8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B61d7cb:{NFSU2_TR(0x61d7cb);
__builtin_memmove((R+4),(R+518),1);
}
B61d7ce:{NFSU2_TR(0x61d7ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d7d0:{NFSU2_TR(0x61d7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d7d4:{NFSU2_TR(0x61d7d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d7e3;}}
}
B61d7d6:L61d7d6:{c.instructions+=4;NFSU2_TR(0x61d7d6);
w4(R+0,u32(0x1ull));
}
B61d7db:{NFSU2_TR(0x61d7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61d7dc:{NFSU2_TR(0x61d7dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3c4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3c4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3c4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61d7e2:{NFSU2_TR(0x61d7e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61d7e3:L61d7e3:{c.instructions+=5;NFSU2_TR(0x61d7e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7e4:{NFSU2_TR(0x61d7e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7e5:{NFSU2_TR(0x61d7e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7e6:{NFSU2_TR(0x61d7e6);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7eb:{NFSU2_TR(0x61d7eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d7f0ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d7f0:L61d7f0:{c.instructions+=5;NFSU2_TR(0x61d7f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d7f3:{NFSU2_TR(0x61d7f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7f5:{NFSU2_TR(0x61d7f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d7f6:{NFSU2_TR(0x61d7f6);
__builtin_memmove((R+4),(R+24),4);
}
B61d7f8:{NFSU2_TR(0x61d7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d7fdull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d7fd:L61d7fd:{c.instructions+=2;NFSU2_TR(0x61d7fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d7ff:{NFSU2_TR(0x61d7ff);
if(r1(R+518)){{goto L61d806;}}
}
B61d801:L61d801:{c.instructions+=2;NFSU2_TR(0x61d801);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61d804:{NFSU2_TR(0x61d804);
{goto L61d808;}
}
B61d806:L61d806:{c.instructions+=1;NFSU2_TR(0x61d806);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61d808:L61d808:{c.instructions+=2;NFSU2_TR(0x61d808);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d80d:{NFSU2_TR(0x61d80d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d812ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d812:L61d812:{c.instructions+=5;NFSU2_TR(0x61d812);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d815:{NFSU2_TR(0x61d815);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d817:{NFSU2_TR(0x61d817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d818:{NFSU2_TR(0x61d818);
__builtin_memmove((R+4),(R+24),4);
}
B61d81a:{NFSU2_TR(0x61d81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d81full));
TAIL_STATIC(0x60fef0u,60f);
}
B61d81f:L61d81f:{c.instructions+=2;NFSU2_TR(0x61d81f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d821:{NFSU2_TR(0x61d821);
if(r1(R+518)){{goto L61d828;}}
}
B61d823:L61d823:{c.instructions+=2;NFSU2_TR(0x61d823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61d826:{NFSU2_TR(0x61d826);
{goto L61d82a;}
}
B61d828:L61d828:{c.instructions+=1;NFSU2_TR(0x61d828);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61d82a:L61d82a:{c.instructions+=2;NFSU2_TR(0x61d82a);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d82f:{NFSU2_TR(0x61d82f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d834ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d834:L61d834:{c.instructions+=5;NFSU2_TR(0x61d834);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d837:{NFSU2_TR(0x61d837);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d839:{NFSU2_TR(0x61d839);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d83a:{NFSU2_TR(0x61d83a);
__builtin_memmove((R+4),(R+24),4);
}
B61d83c:{NFSU2_TR(0x61d83c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d841ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d841:L61d841:{c.instructions+=2;NFSU2_TR(0x61d841);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d843:{NFSU2_TR(0x61d843);
if(r1(R+518)){{goto L61d84a;}}
}
B61d845:L61d845:{c.instructions+=2;NFSU2_TR(0x61d845);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61d848:{NFSU2_TR(0x61d848);
{goto L61d84c;}
}
B61d84a:L61d84a:{c.instructions+=1;NFSU2_TR(0x61d84a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61d84c:L61d84c:{c.instructions+=2;NFSU2_TR(0x61d84c);
u8 U[4];
w4(U+0,u32(0x79aab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d851:{NFSU2_TR(0x61d851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d856ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d856:L61d856:{c.instructions+=5;NFSU2_TR(0x61d856);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d859:{NFSU2_TR(0x61d859);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d85b:{NFSU2_TR(0x61d85b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d85c:{NFSU2_TR(0x61d85c);
__builtin_memmove((R+4),(R+24),4);
}
B61d85e:{NFSU2_TR(0x61d85e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d863ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d863:L61d863:{c.instructions+=2;NFSU2_TR(0x61d863);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d865:{NFSU2_TR(0x61d865);
if(r1(R+518)){{goto L61d86c;}}
}
B61d867:L61d867:{c.instructions+=2;NFSU2_TR(0x61d867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d86a:{NFSU2_TR(0x61d86a);
{goto L61d86e;}
}
B61d86c:L61d86c:{c.instructions+=1;NFSU2_TR(0x61d86c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d86e:L61d86e:{c.instructions+=16;NFSU2_TR(0x61d86e);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61d871:{NFSU2_TR(0x61d871);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B61d873:{NFSU2_TR(0x61d873);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61d876:{NFSU2_TR(0x61d876);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B61d878:{NFSU2_TR(0x61d878);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61d87b:{NFSU2_TR(0x61d87b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B61d87d:{NFSU2_TR(0x61d87d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d881:{NFSU2_TR(0x61d881);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x44ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d889:{NFSU2_TR(0x61d889);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x45ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d891:{NFSU2_TR(0x61d891);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x46ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d899:{NFSU2_TR(0x61d899);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x47ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d8a1:{NFSU2_TR(0x61d8a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d8a9:{NFSU2_TR(0x61d8a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x4bull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d8b1:{NFSU2_TR(0x61d8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x4cull));
s4(u32(r4(U+0)),r4(U+4));
}
B61d8b9:{NFSU2_TR(0x61d8b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61d8bb:{NFSU2_TR(0x61d8bb);
{goto L61d8c0;}
}
B61d8c0:L61d8c0:{c.instructions+=6;NFSU2_TR(0x61d8c0);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B61d8c4:{NFSU2_TR(0x61d8c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61d8cb:{NFSU2_TR(0x61d8cb);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B61d8d2:{NFSU2_TR(0x61d8d2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61d8d4:{NFSU2_TR(0x61d8d4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d8d6:{NFSU2_TR(0x61d8d6);
if(r1(R+518)){{goto L61d9aa;}}
}
B61d8dc:L61d8dc:{c.instructions+=2;NFSU2_TR(0x61d8dc);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d8e1:{NFSU2_TR(0x61d8e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d8e6ull));
TAIL_STATIC(0x43db50u,43d);
}
B61d8e6:L61d8e6:{c.instructions+=5;NFSU2_TR(0x61d8e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d8e9:{NFSU2_TR(0x61d8e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d8ea:{NFSU2_TR(0x61d8ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d8eb:{NFSU2_TR(0x61d8eb);
__builtin_memmove((R+4),(R+24),4);
}
B61d8ed:{NFSU2_TR(0x61d8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d8f2ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d8f2:L61d8f2:{c.instructions+=2;NFSU2_TR(0x61d8f2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d8f4:{NFSU2_TR(0x61d8f4);
if(r1(R+518)){{goto L61d8ff;}}
}
B61d8f6:L61d8f6:{c.instructions+=3;NFSU2_TR(0x61d8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d8f9:{NFSU2_TR(0x61d8f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d8fd:{NFSU2_TR(0x61d8fd);
{goto L61d903;}
}
B61d8ff:L61d8ff:{c.instructions+=1;NFSU2_TR(0x61d8ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d903:L61d903:{c.instructions+=2;NFSU2_TR(0x61d903);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d908:{NFSU2_TR(0x61d908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d90dull));
TAIL_STATIC(0x43db50u,43d);
}
B61d90d:L61d90d:{c.instructions+=5;NFSU2_TR(0x61d90d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d910:{NFSU2_TR(0x61d910);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d911:{NFSU2_TR(0x61d911);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d912:{NFSU2_TR(0x61d912);
__builtin_memmove((R+4),(R+24),4);
}
B61d914:{NFSU2_TR(0x61d914);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d919ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d919:L61d919:{c.instructions+=2;NFSU2_TR(0x61d919);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d91b:{NFSU2_TR(0x61d91b);
if(r1(R+518)){{goto L61d920;}}
}
B61d91d:L61d91d:{c.instructions+=1;NFSU2_TR(0x61d91d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61d920:L61d920:{c.instructions+=2;NFSU2_TR(0x61d920);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d925:{NFSU2_TR(0x61d925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d92aull));
TAIL_STATIC(0x43db50u,43d);
}
B61d92a:L61d92a:{c.instructions+=5;NFSU2_TR(0x61d92a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d92d:{NFSU2_TR(0x61d92d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d92f:{NFSU2_TR(0x61d92f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d930:{NFSU2_TR(0x61d930);
__builtin_memmove((R+4),(R+24),4);
}
B61d932:{NFSU2_TR(0x61d932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d937ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d937:L61d937:{c.instructions+=2;NFSU2_TR(0x61d937);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d939:{NFSU2_TR(0x61d939);
if(r1(R+518)){{goto L61d940;}}
}
B61d93b:L61d93b:{c.instructions+=2;NFSU2_TR(0x61d93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61d93e:{NFSU2_TR(0x61d93e);
{goto L61d942;}
}
B61d940:L61d940:{c.instructions+=1;NFSU2_TR(0x61d940);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61d942:L61d942:{c.instructions+=2;NFSU2_TR(0x61d942);
u8 U[4];
w4(U+0,u32(0x79aab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d947:{NFSU2_TR(0x61d947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d94cull));
TAIL_STATIC(0x43db50u,43d);
}
B61d94c:L61d94c:{c.instructions+=5;NFSU2_TR(0x61d94c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61d94f:{NFSU2_TR(0x61d94f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d951:{NFSU2_TR(0x61d951);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61d952:{NFSU2_TR(0x61d952);
__builtin_memmove((R+4),(R+24),4);
}
B61d954:{NFSU2_TR(0x61d954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61d959ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61d959:L61d959:{c.instructions+=2;NFSU2_TR(0x61d959);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d95b:{NFSU2_TR(0x61d95b);
if(r1(R+518)){{goto L61d962;}}
}
B61d95d:L61d95d:{c.instructions+=2;NFSU2_TR(0x61d95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d960:{NFSU2_TR(0x61d960);
{goto L61d964;}
}
B61d962:L61d962:{c.instructions+=1;NFSU2_TR(0x61d962);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d964:L61d964:{c.instructions+=2;NFSU2_TR(0x61d964);
u8 U[24];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x48ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B61d969:{NFSU2_TR(0x61d969);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61d987;}}
}
B61d96b:L61d96b:{c.instructions+=4;NFSU2_TR(0x61d96b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d972:{NFSU2_TR(0x61d972);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x618ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d978:{NFSU2_TR(0x61d978);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61d97a:{NFSU2_TR(0x61d97a);
if(r1(R+518)){{goto L61d9a0;}}
}
B61d97c:L61d97c:{c.instructions+=4;NFSU2_TR(0x61d97c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B61d97f:{NFSU2_TR(0x61d97f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B61d982:{NFSU2_TR(0x61d982);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x3ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B61d985:{NFSU2_TR(0x61d985);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61d9a0;}}
}
B61d987:L61d987:{c.instructions+=9;NFSU2_TR(0x61d987);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d98b:{NFSU2_TR(0x61d98b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61d98e:{NFSU2_TR(0x61d98e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B61d990:{NFSU2_TR(0x61d990);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61d993:{NFSU2_TR(0x61d993);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B61d995:{NFSU2_TR(0x61d995);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61d998:{NFSU2_TR(0x61d998);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B61d99a:{NFSU2_TR(0x61d99a);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61d99e:{NFSU2_TR(0x61d99e);
{goto L61d9b2;}
}
B61d9a0:L61d9a0:{c.instructions+=3;NFSU2_TR(0x61d9a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d9a4:{NFSU2_TR(0x61d9a4);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61d9a8:{NFSU2_TR(0x61d9a8);
{goto L61d9b2;}
}
B61d9aa:L61d9aa:{c.instructions+=2;NFSU2_TR(0x61d9aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61d9ae:{NFSU2_TR(0x61d9ae);
u8 U[16];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61d9b2:L61d9b2:{c.instructions+=3;NFSU2_TR(0x61d9b2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B61d9b5:{NFSU2_TR(0x61d9b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61d9b8:{NFSU2_TR(0x61d9b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d8c0u);}goto L61d8c0;}}
}
B61d9be:L61d9be:{c.instructions+=6;NFSU2_TR(0x61d9be);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B61d9c0:{NFSU2_TR(0x61d9c0);
w4(R+4,u32(0x68ull));
}
B61d9c5:{NFSU2_TR(0x61d9c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61d9c7:{NFSU2_TR(0x61d9c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B61d9ce:{NFSU2_TR(0x61d9ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x234ull))+u32(r4(R+16))));
__builtin_memmove((R+12),(U+0),4);
}
B61d9d5:{NFSU2_TR(0x61d9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d9d9:L61d9d9:{c.instructions+=1;NFSU2_TR(0x61d9d9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61d9db;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d9d9u);}goto L61d9d9;}
}
B61d9db:L61d9db:{c.instructions+=2;NFSU2_TR(0x61d9db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d9df:{NFSU2_TR(0x61d9df);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61d9e3:L61d9e3:{c.instructions+=2;NFSU2_TR(0x61d9e3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61d9e6:{NFSU2_TR(0x61d9e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61dac8;}}
}
B61d9ec:L61d9ec:{c.instructions+=2;NFSU2_TR(0x61d9ec);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d9ef:{NFSU2_TR(0x61d9ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61dacb;}}
}
B61d9f5:L61d9f5:{c.instructions+=4;NFSU2_TR(0x61d9f5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61d9f8:{NFSU2_TR(0x61d9f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61d9ff:{NFSU2_TR(0x61d9ff);
u8 U[16];
w4(U+0,u32(u32(u32(0x68cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B61da06:{NFSU2_TR(0x61da06);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61da1c;}}
}
B61da08:L61da08:{c.instructions+=2;NFSU2_TR(0x61da08);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x690ull))));
}
B61da0d:{NFSU2_TR(0x61da0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B61da10:L61da10:{c.instructions+=2;NFSU2_TR(0x61da10);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61da12:{NFSU2_TR(0x61da12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61da16;}}
}
B61da14:L61da14:{c.instructions+=1;NFSU2_TR(0x61da14);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61da16:L61da16:{c.instructions+=3;NFSU2_TR(0x61da16);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B61da19:{NFSU2_TR(0x61da19);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B61da1a:{NFSU2_TR(0x61da1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61da10u);}goto L61da10;}}
}
B61da1c:L61da1c:{c.instructions+=2;NFSU2_TR(0x61da1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61da1e:{NFSU2_TR(0x61da1e);
if(r1(R+518)){{goto L61da98;}}
}
B61da20:L61da20:{c.instructions+=5;NFSU2_TR(0x61da20);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61da27:{NFSU2_TR(0x61da27);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B61da28:{NFSU2_TR(0x61da28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61da29:{NFSU2_TR(0x61da29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61da2a:{NFSU2_TR(0x61da2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61da2full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d620u);}goto L61d620;}
}
B61da2f:L61da2f:{c.instructions+=3;NFSU2_TR(0x61da2f);
u8 U[4];
w4(U+0,u32(0x7a8728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61da34:{NFSU2_TR(0x61da34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61da36:{NFSU2_TR(0x61da36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61da3bull));
TAIL_STATIC(0x43db50u,43d);
}
B61da3b:L61da3b:{c.instructions+=4;NFSU2_TR(0x61da3b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61da3f:{NFSU2_TR(0x61da3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61da42:{NFSU2_TR(0x61da42);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B61da47:{NFSU2_TR(0x61da47);
if(r1(R+518)){{goto L61da87;}}
}
B61da49:L61da49:{c.instructions+=8;NFSU2_TR(0x61da49);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B61da4f:{NFSU2_TR(0x61da4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61da52:{NFSU2_TR(0x61da52);
w4(R+4,u32(r2(R+4)));
}
B61da55:{NFSU2_TR(0x61da55);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B61da59:{NFSU2_TR(0x61da59);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61da5c:{NFSU2_TR(0x61da5c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61da5e:{NFSU2_TR(0x61da5e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61da60:{NFSU2_TR(0x61da60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61da87;}}
}
B61da62:L61da62:{c.instructions+=3;NFSU2_TR(0x61da62);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61da65:{NFSU2_TR(0x61da65);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61da68:{NFSU2_TR(0x61da68);
{goto L61da70;}
}
B61da70:L61da70:{c.instructions+=4;NFSU2_TR(0x61da70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61da72:{NFSU2_TR(0x61da72);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B61da75:{NFSU2_TR(0x61da75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B61da79:{NFSU2_TR(0x61da79);
if(r1(R+518)){{goto L61dabf;}}
}
B61da7b:L61da7b:{c.instructions+=2;NFSU2_TR(0x61da7b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61da7d:{NFSU2_TR(0x61da7d);
if(r1(R+518)){{goto L61dabf;}}
}
B61da7f:L61da7f:{c.instructions+=4;NFSU2_TR(0x61da7f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61da80:{NFSU2_TR(0x61da80);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61da83:{NFSU2_TR(0x61da83);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61da85:{NFSU2_TR(0x61da85);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61da70u);}goto L61da70;}}
}
B61da87:L61da87:{c.instructions+=1;NFSU2_TR(0x61da87);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61da89:L61da89:{c.instructions+=3;NFSU2_TR(0x61da89);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61da8b:{NFSU2_TR(0x61da8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61da8e:{NFSU2_TR(0x61da8e);
if(r1(R+518)){{goto L61dd50;}}
}
B61da94:L61da94:{c.instructions+=1;NFSU2_TR(0x61da94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61da98:L61da98:{c.instructions+=3;NFSU2_TR(0x61da98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61da9a:{NFSU2_TR(0x61da9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61da9c:{NFSU2_TR(0x61da9c);
if(r1(R+518)){{goto L61dcca;}}
}
B61daa2:L61daa2:{c.instructions+=4;NFSU2_TR(0x61daa2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61daa4:{NFSU2_TR(0x61daa4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61daa6:{NFSU2_TR(0x61daa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61daa7:{NFSU2_TR(0x61daa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61daacull));
TAIL_STATIC(0x4901d0u,490);
}
B61daac:L61daac:{c.instructions+=5;NFSU2_TR(0x61daac);
__builtin_memmove((R+28),(R+0),4);
}
B61daae:{NFSU2_TR(0x61daae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61dab1:{NFSU2_TR(0x61dab1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dab3:{NFSU2_TR(0x61dab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dab6:{NFSU2_TR(0x61dab6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61dafa;}}
}
B61dab8:L61dab8:{c.instructions+=2;NFSU2_TR(0x61dab8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61daba:{NFSU2_TR(0x61daba);
{goto L61dcca;}
}
B61dabf:L61dabf:{c.instructions+=2;NFSU2_TR(0x61dabf);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dac1:{NFSU2_TR(0x61dac1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61da87u);}goto L61da87;}}
}
B61dac3:L61dac3:{c.instructions+=2;NFSU2_TR(0x61dac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61dac6:{NFSU2_TR(0x61dac6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61da89u);}goto L61da89;}
}
B61dac8:L61dac8:{c.instructions+=1;NFSU2_TR(0x61dac8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61dacb:L61dacb:{c.instructions+=1;NFSU2_TR(0x61dacb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61dae8;}}
}
B61dacd:L61dacd:{c.instructions+=3;NFSU2_TR(0x61dacd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61dad4:{NFSU2_TR(0x61dad4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dad5:{NFSU2_TR(0x61dad5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dadaull));
TAIL_STATIC(0x612b70u,612);
}
B61dada:L61dada:{c.instructions+=4;NFSU2_TR(0x61dada);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dadd:{NFSU2_TR(0x61dadd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61dadf:{NFSU2_TR(0x61dadf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61dae6:{NFSU2_TR(0x61dae6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61da98u);}goto L61da98;}
}
B61dae8:L61dae8:{c.instructions+=2;NFSU2_TR(0x61dae8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61daea:{NFSU2_TR(0x61daea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61da98u);}goto L61da98;}}
}
B61daec:L61daec:{c.instructions+=3;NFSU2_TR(0x61daec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61daee:{NFSU2_TR(0x61daee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61daf5:{NFSU2_TR(0x61daf5);
{goto L61dcca;}
}
B61dafa:L61dafa:{c.instructions+=3;NFSU2_TR(0x61dafa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dafb:{NFSU2_TR(0x61dafb);
u8 U[4];
w4(U+0,u32(0x7a8718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db00:{NFSU2_TR(0x61db00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61db05ull));
TAIL_STATIC(0x43db80u,43d);
}
B61db05:L61db05:{c.instructions+=4;NFSU2_TR(0x61db05);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db07:{NFSU2_TR(0x61db07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db09:{NFSU2_TR(0x61db09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db0a:{NFSU2_TR(0x61db0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61db0full));
TAIL_STATIC(0x4901d0u,490);
}
B61db0f:L61db0f:{c.instructions+=5;NFSU2_TR(0x61db0f);
__builtin_memmove((R+24),(R+0),4);
}
B61db11:{NFSU2_TR(0x61db11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61db14:{NFSU2_TR(0x61db14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61db16:{NFSU2_TR(0x61db16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61db19:{NFSU2_TR(0x61db19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61db22;}}
}
B61db1b:L61db1b:{c.instructions+=2;NFSU2_TR(0x61db1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61db1d:{NFSU2_TR(0x61db1d);
{goto L61dcca;}
}
B61db22:L61db22:{c.instructions+=3;NFSU2_TR(0x61db22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db24:{NFSU2_TR(0x61db24);
__builtin_memmove((R+4),(R+28),4);
}
B61db26:{NFSU2_TR(0x61db26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61db2bull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B61db2b:L61db2b:{c.instructions+=5;NFSU2_TR(0x61db2b);
__builtin_memmove((R+20),(R+0),4);
}
B61db2d:{NFSU2_TR(0x61db2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61db31:{NFSU2_TR(0x61db31);
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
B61db33:{NFSU2_TR(0x61db33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61db36:{NFSU2_TR(0x61db36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61db44;}}
}
B61db38:L61db38:{c.instructions+=3;NFSU2_TR(0x61db38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db3a:{NFSU2_TR(0x61db3a);
__builtin_memmove((R+4),(R+28),4);
}
B61db3c:{NFSU2_TR(0x61db3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61db41ull));
TAIL_STATIC(0x5b96e0u,5b9);
}
B61db41:L61db41:{c.instructions+=1;NFSU2_TR(0x61db41);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61db44:L61db44:{c.instructions+=2;NFSU2_TR(0x61db44);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61db46:{NFSU2_TR(0x61db46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61db4f;}}
}
B61db48:L61db48:{c.instructions+=2;NFSU2_TR(0x61db48);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61db4a:{NFSU2_TR(0x61db4a);
{goto L61dcc6;}
}
B61db4f:L61db4f:{c.instructions+=3;NFSU2_TR(0x61db4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db51:{NFSU2_TR(0x61db51);
__builtin_memmove((R+4),(R+24),4);
}
B61db53:{NFSU2_TR(0x61db53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61db58ull));
TAIL_STATIC(0x5b96a0u,5b9);
}
B61db58:L61db58:{c.instructions+=5;NFSU2_TR(0x61db58);
__builtin_memmove((R+28),(R+0),4);
}
B61db5a:{NFSU2_TR(0x61db5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61db5e:{NFSU2_TR(0x61db5e);
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
B61db60:{NFSU2_TR(0x61db60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61db63:{NFSU2_TR(0x61db63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61db71;}}
}
B61db65:L61db65:{c.instructions+=3;NFSU2_TR(0x61db65);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61db67:{NFSU2_TR(0x61db67);
__builtin_memmove((R+4),(R+24),4);
}
B61db69:{NFSU2_TR(0x61db69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61db6eull));
TAIL_STATIC(0x5b96e0u,5b9);
}
B61db6e:L61db6e:{c.instructions+=1;NFSU2_TR(0x61db6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61db71:L61db71:{c.instructions+=2;NFSU2_TR(0x61db71);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61db73:{NFSU2_TR(0x61db73);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61db7c;}}
}
B61db75:L61db75:{c.instructions+=2;NFSU2_TR(0x61db75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B61db77:{NFSU2_TR(0x61db77);
{goto L61dcc6;}
}
B61db7c:L61db7c:{c.instructions+=3;NFSU2_TR(0x61db7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61db80:{NFSU2_TR(0x61db80);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61db83:{NFSU2_TR(0x61db83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61dcb6;}}
}
B61db89:L61db89:{c.instructions+=2;NFSU2_TR(0x61db89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61db8c:{NFSU2_TR(0x61db8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61dcb6;}}
}
B61db92:L61db92:{c.instructions+=4;NFSU2_TR(0x61db92);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61db99:{NFSU2_TR(0x61db99);
u8 U[16];
w4(U+0,u32(u32(u32(0x68cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B61dba0:{NFSU2_TR(0x61dba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dba2:{NFSU2_TR(0x61dba2);
if(r1(R+518)){{goto L61dcb6;}}
}
B61dba8:L61dba8:{c.instructions+=2;NFSU2_TR(0x61dba8);
u8 U[4];
w4(U+0,u32(0x7a60a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dbad:{NFSU2_TR(0x61dbad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dbb2ull));
TAIL_STATIC(0x43db50u,43d);
}
B61dbb2:L61dbb2:{c.instructions+=4;NFSU2_TR(0x61dbb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dbb5:{NFSU2_TR(0x61dbb5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dbb6:{NFSU2_TR(0x61dbb6);
__builtin_memmove((R+4),(R+24),4);
}
B61dbb8:{NFSU2_TR(0x61dbb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dbbdull));
TAIL_STATIC(0x61b4e0u,61b);
}
B61dbbd:L61dbbd:{c.instructions+=2;NFSU2_TR(0x61dbbd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dbbf:{NFSU2_TR(0x61dbbf);
if(r1(R+518)){{goto L61dcb6;}}
}
B61dbc5:L61dbc5:{c.instructions+=3;NFSU2_TR(0x61dbc5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dbc7:{NFSU2_TR(0x61dbc7);
u8 U[4];
w4(U+0,u32(0x7a60a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dbcc:{NFSU2_TR(0x61dbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dbd1ull));
TAIL_STATIC(0x43db50u,43d);
}
B61dbd1:L61dbd1:{c.instructions+=4;NFSU2_TR(0x61dbd1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dbd4:{NFSU2_TR(0x61dbd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dbd5:{NFSU2_TR(0x61dbd5);
__builtin_memmove((R+4),(R+24),4);
}
B61dbd7:{NFSU2_TR(0x61dbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dbdcull));
TAIL_STATIC(0x61b500u,61b);
}
B61dbdc:L61dbdc:{c.instructions+=3;NFSU2_TR(0x61dbdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dbde:{NFSU2_TR(0x61dbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dbe1:{NFSU2_TR(0x61dbe1);
if(r1(R+518)){{goto L61dcb6;}}
}
B61dbe7:L61dbe7:{c.instructions+=7;NFSU2_TR(0x61dbe7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B61dbea:{NFSU2_TR(0x61dbea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61dbec:{NFSU2_TR(0x61dbec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dbef:{NFSU2_TR(0x61dbef);
u8 U[12];
w4(U+0,u32(u32(u32(0x6c4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B61dbf6:{NFSU2_TR(0x61dbf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dbfa:{NFSU2_TR(0x61dbfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61dbfd:{NFSU2_TR(0x61dbfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dc01:L61dc01:{c.instructions+=3;NFSU2_TR(0x61dc01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61dc04:{NFSU2_TR(0x61dc04);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dc06:{NFSU2_TR(0x61dc06);
if(r1(R+518)){{goto L61dc8f;}}
}
B61dc0c:L61dc0c:{c.instructions+=3;NFSU2_TR(0x61dc0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc0e:{NFSU2_TR(0x61dc0e);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc13:{NFSU2_TR(0x61dc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc18ull));
TAIL_STATIC(0x43db50u,43d);
}
B61dc18:L61dc18:{c.instructions+=4;NFSU2_TR(0x61dc18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dc1b:{NFSU2_TR(0x61dc1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc1c:{NFSU2_TR(0x61dc1c);
__builtin_memmove((R+4),(R+24),4);
}
B61dc1e:{NFSU2_TR(0x61dc1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc23ull));
TAIL_STATIC(0x61b500u,61b);
}
B61dc23:L61dc23:{c.instructions+=4;NFSU2_TR(0x61dc23);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc25:{NFSU2_TR(0x61dc25);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc2a:{NFSU2_TR(0x61dc2a);
__builtin_memmove((R+12),(R+0),4);
}
B61dc2c:{NFSU2_TR(0x61dc2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc31ull));
TAIL_STATIC(0x43db50u,43d);
}
B61dc31:L61dc31:{c.instructions+=4;NFSU2_TR(0x61dc31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dc34:{NFSU2_TR(0x61dc34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc35:{NFSU2_TR(0x61dc35);
__builtin_memmove((R+4),(R+24),4);
}
B61dc37:{NFSU2_TR(0x61dc37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc3cull));
TAIL_STATIC(0x61b500u,61b);
}
B61dc3c:L61dc3c:{c.instructions+=4;NFSU2_TR(0x61dc3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc3e:{NFSU2_TR(0x61dc3e);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc43:{NFSU2_TR(0x61dc43);
__builtin_memmove((R+20),(R+0),4);
}
B61dc45:{NFSU2_TR(0x61dc45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc4aull));
TAIL_STATIC(0x43db50u,43d);
}
B61dc4a:L61dc4a:{c.instructions+=4;NFSU2_TR(0x61dc4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dc4d:{NFSU2_TR(0x61dc4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc4e:{NFSU2_TR(0x61dc4e);
__builtin_memmove((R+4),(R+24),4);
}
B61dc50:{NFSU2_TR(0x61dc50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc55ull));
TAIL_STATIC(0x61b500u,61b);
}
B61dc55:L61dc55:{c.instructions+=4;NFSU2_TR(0x61dc55);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc57:{NFSU2_TR(0x61dc57);
u8 U[4];
w4(U+0,u32(0x79aab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc5c:{NFSU2_TR(0x61dc5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dc60:{NFSU2_TR(0x61dc60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc65ull));
TAIL_STATIC(0x43db50u,43d);
}
B61dc65:L61dc65:{c.instructions+=4;NFSU2_TR(0x61dc65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61dc68:{NFSU2_TR(0x61dc68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dc69:{NFSU2_TR(0x61dc69);
__builtin_memmove((R+4),(R+24),4);
}
B61dc6b:{NFSU2_TR(0x61dc6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dc70ull));
TAIL_STATIC(0x61b500u,61b);
}
B61dc70:L61dc70:{c.instructions+=11;NFSU2_TR(0x61dc70);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61dc74:{NFSU2_TR(0x61dc74);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61dc78:{NFSU2_TR(0x61dc78);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dc7b:{NFSU2_TR(0x61dc7b);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B61dc7d:{NFSU2_TR(0x61dc7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dc80:{NFSU2_TR(0x61dc80);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B61dc82:{NFSU2_TR(0x61dc82);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dc85:{NFSU2_TR(0x61dc85);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B61dc87:{NFSU2_TR(0x61dc87);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61dc8b:{NFSU2_TR(0x61dc8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B61dc8d:{NFSU2_TR(0x61dc8d);
{goto L61dc98;}
}
B61dc8f:L61dc8f:{c.instructions+=3;NFSU2_TR(0x61dc8f);
w4(R+8,u32(0xffull));
}
B61dc94:{NFSU2_TR(0x61dc94);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B61dc96:{NFSU2_TR(0x61dc96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B61dc98:L61dc98:{c.instructions+=8;NFSU2_TR(0x61dc98);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61dc9c:{NFSU2_TR(0x61dc9c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B61dc9f:{NFSU2_TR(0x61dc9f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B61dca2:{NFSU2_TR(0x61dca2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B61dca5:{NFSU2_TR(0x61dca5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61dca8:{NFSU2_TR(0x61dca8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dcac:{NFSU2_TR(0x61dcac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dcb0:{NFSU2_TR(0x61dcb0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dc01u);}goto L61dc01;}}
}
B61dcb6:L61dcb6:{c.instructions+=5;NFSU2_TR(0x61dcb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61dcba:{NFSU2_TR(0x61dcba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61dcbb:{NFSU2_TR(0x61dcbb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x34ull))));
}
B61dcbe:{NFSU2_TR(0x61dcbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dcc2:{NFSU2_TR(0x61dcc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dcc6:L61dcc6:{c.instructions+=1;NFSU2_TR(0x61dcc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61dcca:L61dcca:{c.instructions+=4;NFSU2_TR(0x61dcca);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B61dccb:{NFSU2_TR(0x61dccb);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B61dcce:{NFSU2_TR(0x61dcce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dcd2:{NFSU2_TR(0x61dcd2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61d9e3u);}goto L61d9e3;}}
}
B61dcd8:L61dcd8:{c.instructions+=1;NFSU2_TR(0x61dcd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dcddull));
TAIL_STATIC(0x4022c0u,402);
}
B61dcdd:L61dcdd:{c.instructions+=3;NFSU2_TR(0x61dcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x3d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61dce4:{NFSU2_TR(0x61dce4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dce5:{NFSU2_TR(0x61dce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dceaull));
TAIL_STATIC(0x6343a0u,634);
}
B61dcea:L61dcea:{c.instructions+=2;NFSU2_TR(0x61dcea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dceb:{NFSU2_TR(0x61dceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dcf0ull));
TAIL_STATIC(0x61e040u,61e);
}
B61dcf0:L61dcf0:{c.instructions+=9;NFSU2_TR(0x61dcf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61dcf4:{NFSU2_TR(0x61dcf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61dcf8:{NFSU2_TR(0x61dcf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61dcfc:{NFSU2_TR(0x61dcfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dd03:{NFSU2_TR(0x61dd03);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dd07:{NFSU2_TR(0x61dd07);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dd0b:{NFSU2_TR(0x61dd0b);
w4(R+4,u32(0x7ull));
}
B61dd10:{NFSU2_TR(0x61dd10);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B61dd14:{NFSU2_TR(0x61dd14);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B61dd18:L61dd18:{c.instructions+=1;NFSU2_TR(0x61dd18);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L61dd1a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dd18u);}goto L61dd18;}
}
B61dd1a:L61dd1a:{c.instructions+=3;NFSU2_TR(0x61dd1a);
w4(R+4,u32(0x68ull));
}
B61dd1f:{NFSU2_TR(0x61dd1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B61dd26:{NFSU2_TR(0x61dd26);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B61dd2d:L61dd2d:{c.instructions+=1;NFSU2_TR(0x61dd2d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L61dd2f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dd2du);}goto L61dd2d;}
}
B61dd2f:L61dd2f:{c.instructions+=6;NFSU2_TR(0x61dd2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61dd32:{NFSU2_TR(0x61dd32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacf47d50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61dd38:{NFSU2_TR(0x61dd38);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61dd3b:{NFSU2_TR(0x61dd3b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61dd3e:{NFSU2_TR(0x61dd3e);
w4(R+20,u32(0x1ull));
}
B61dd43:{NFSU2_TR(0x61dd43);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L61ddd9;}}
}
B61dd49:L61dd49:{c.instructions+=1;NFSU2_TR(0x61dd49);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x61de58ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B61dd50:L61dd50:{c.instructions+=7;NFSU2_TR(0x61dd50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61dd51:{NFSU2_TR(0x61dd51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61dd52:{NFSU2_TR(0x61dd52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61dd53:{NFSU2_TR(0x61dd53);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61dd55:{NFSU2_TR(0x61dd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61dd56:{NFSU2_TR(0x61dd56);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3c4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3c4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3c4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61dd5c:{NFSU2_TR(0x61dd5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61dd5d:L61dd5d:{c.instructions+=2;NFSU2_TR(0x61dd5d);
w4(R+0,u32(0x89f050ull));
}
B61dd62:{NFSU2_TR(0x61dd62);
{goto L61dd85;}
}
B61dd64:L61dd64:{c.instructions+=2;NFSU2_TR(0x61dd64);
w4(R+0,u32(0x89f218ull));
}
B61dd69:{NFSU2_TR(0x61dd69);
{goto L61dd85;}
}
B61dd6b:L61dd6b:{c.instructions+=2;NFSU2_TR(0x61dd6b);
w4(R+0,u32(0x89f3e0ull));
}
B61dd70:{NFSU2_TR(0x61dd70);
{goto L61dd85;}
}
B61dd72:L61dd72:{c.instructions+=2;NFSU2_TR(0x61dd72);
w4(R+0,u32(0x89f5a8ull));
}
B61dd77:{NFSU2_TR(0x61dd77);
{goto L61dd85;}
}
B61dd79:L61dd79:{c.instructions+=2;NFSU2_TR(0x61dd79);
w4(R+0,u32(0x89f770ull));
}
B61dd7e:{NFSU2_TR(0x61dd7e);
{goto L61dd85;}
}
B61dd80:L61dd80:{c.instructions+=1;NFSU2_TR(0x61dd80);
w4(R+0,u32(0x89f938ull));
}
B61dd85:L61dd85:{c.instructions+=4;NFSU2_TR(0x61dd85);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61dd89:{NFSU2_TR(0x61dd89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dd8a:{NFSU2_TR(0x61dd8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dd8b:{NFSU2_TR(0x61dd8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dd90ull));
TAIL_STATIC(0x611970u,611);
}
B61dd90:L61dd90:{c.instructions+=4;NFSU2_TR(0x61dd90);
w4(R+0,u32(r1(R+0)));
}
B61dd93:{NFSU2_TR(0x61dd93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61dd96:{NFSU2_TR(0x61dd96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dd98:{NFSU2_TR(0x61dd98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ddfa;}}
}
B61dd9a:L61dd9a:{c.instructions+=2;NFSU2_TR(0x61dd9a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61dd9d:{NFSU2_TR(0x61dd9d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L61ddd9;}}
}
B61dd9f:L61dd9f:{c.instructions+=1;NFSU2_TR(0x61dd9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x61de70ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B61dda6:L61dda6:{c.instructions+=2;NFSU2_TR(0x61dda6);
w4(R+28,u32(0x89f050ull));
}
B61ddab:{NFSU2_TR(0x61ddab);
{goto L61ddce;}
}
B61ddad:L61ddad:{c.instructions+=2;NFSU2_TR(0x61ddad);
w4(R+28,u32(0x89f218ull));
}
B61ddb2:{NFSU2_TR(0x61ddb2);
{goto L61ddce;}
}
B61ddb4:L61ddb4:{c.instructions+=2;NFSU2_TR(0x61ddb4);
w4(R+28,u32(0x89f3e0ull));
}
B61ddb9:{NFSU2_TR(0x61ddb9);
{goto L61ddce;}
}
B61ddbb:L61ddbb:{c.instructions+=2;NFSU2_TR(0x61ddbb);
w4(R+28,u32(0x89f5a8ull));
}
B61ddc0:{NFSU2_TR(0x61ddc0);
{goto L61ddce;}
}
B61ddc2:L61ddc2:{c.instructions+=2;NFSU2_TR(0x61ddc2);
w4(R+28,u32(0x89f770ull));
}
B61ddc7:{NFSU2_TR(0x61ddc7);
{goto L61ddce;}
}
B61ddc9:L61ddc9:{c.instructions+=1;NFSU2_TR(0x61ddc9);
w4(R+28,u32(0x89f938ull));
}
B61ddce:L61ddce:{c.instructions+=2;NFSU2_TR(0x61ddce);
w4(R+4,u32(0x72ull));
}
B61ddd3:{NFSU2_TR(0x61ddd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B61ddd7:L61ddd7:{c.instructions+=1;NFSU2_TR(0x61ddd7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L61ddd9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ddd7u);}goto L61ddd7;}
}
B61ddd9:L61ddd9:{c.instructions+=2;NFSU2_TR(0x61ddd9);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61dddd:{NFSU2_TR(0x61dddd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ddeb;}}
}
B61dddf:L61dddf:{c.instructions+=3;NFSU2_TR(0x61dddf);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61dde3:{NFSU2_TR(0x61dde3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dde4:{NFSU2_TR(0x61dde4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dde9ull));
TAIL_STATIC(0x612280u,612);
}
B61dde9:L61dde9:{c.instructions+=1;NFSU2_TR(0x61dde9);
{goto L61ddf5;}
}
B61ddeb:L61ddeb:{c.instructions+=3;NFSU2_TR(0x61ddeb);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61ddef:{NFSU2_TR(0x61ddef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ddf0:{NFSU2_TR(0x61ddf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ddf5ull));
TAIL_STATIC(0x611f10u,611);
}
B61ddf5:L61ddf5:{c.instructions+=2;NFSU2_TR(0x61ddf5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61ddf8:{NFSU2_TR(0x61ddf8);
__builtin_memmove((R+20),(R+0),4);
}
B61ddfa:L61ddfa:{c.instructions+=2;NFSU2_TR(0x61ddfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x244ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B61de01:{NFSU2_TR(0x61de01);
w4(R+28,u32(0x8ull));
}
B61de06:L61de06:{c.instructions+=3;NFSU2_TR(0x61de06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61de09:{NFSU2_TR(0x61de09);
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
B61de0b:{NFSU2_TR(0x61de0b);
if(r1(R+518)){{goto L61de16;}}
}
B61de0d:L61de0d:{c.instructions+=3;NFSU2_TR(0x61de0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61de10:{NFSU2_TR(0x61de10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de11:{NFSU2_TR(0x61de11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61de16ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B61de16:L61de16:{c.instructions+=3;NFSU2_TR(0x61de16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61de18:{NFSU2_TR(0x61de18);
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
B61de1a:{NFSU2_TR(0x61de1a);
if(r1(R+518)){{goto L61de25;}}
}
B61de1c:L61de1c:{c.instructions+=3;NFSU2_TR(0x61de1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61de1f:{NFSU2_TR(0x61de1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de20:{NFSU2_TR(0x61de20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61de25ull));
TAIL_STATIC(0x4031c0u,403);
}
B61de25:L61de25:{c.instructions+=3;NFSU2_TR(0x61de25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61de28:{NFSU2_TR(0x61de28);
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
B61de2a:{NFSU2_TR(0x61de2a);
if(r1(R+518)){{goto L61de35;}}
}
B61de2c:L61de2c:{c.instructions+=3;NFSU2_TR(0x61de2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61de2f:{NFSU2_TR(0x61de2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de30:{NFSU2_TR(0x61de30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61de35ull));
TAIL_STATIC(0x5b96d0u,5b9);
}
B61de35:L61de35:{c.instructions+=3;NFSU2_TR(0x61de35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61de38:{NFSU2_TR(0x61de38);
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
B61de3a:{NFSU2_TR(0x61de3a);
if(r1(R+518)){{goto L61de45;}}
}
B61de3c:L61de3c:{c.instructions+=3;NFSU2_TR(0x61de3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61de3f:{NFSU2_TR(0x61de3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de40:{NFSU2_TR(0x61de40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61de45ull));
TAIL_STATIC(0x4031c0u,403);
}
B61de45:L61de45:{c.instructions+=3;NFSU2_TR(0x61de45);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x34ull))));
}
B61de48:{NFSU2_TR(0x61de48);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B61de49:{NFSU2_TR(0x61de49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61de06u);}goto L61de06;}}
}
B61de4b:L61de4b:{c.instructions+=7;NFSU2_TR(0x61de4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61de4c:{NFSU2_TR(0x61de4c);
__builtin_memmove((R+0),(R+20),4);
}
B61de4e:{NFSU2_TR(0x61de4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61de4f:{NFSU2_TR(0x61de4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61de50:{NFSU2_TR(0x61de50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61de51:{NFSU2_TR(0x61de51);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x3c4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x3c4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x3c4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61de57:{NFSU2_TR(0x61de57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61de90:L61de90:{c.instructions+=7;NFSU2_TR(0x61de90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B61de93:{NFSU2_TR(0x61de93);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61de97:{NFSU2_TR(0x61de97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de98:{NFSU2_TR(0x61de98);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de9a:{NFSU2_TR(0x61de9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de9c:{NFSU2_TR(0x61de9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61de9d:{NFSU2_TR(0x61de9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dea2ull));
TAIL_STATIC(0x4901d0u,490);
}
B61dea2:L61dea2:{c.instructions+=5;NFSU2_TR(0x61dea2);
__builtin_memmove((R+28),(R+0),4);
}
B61dea4:{NFSU2_TR(0x61dea4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61dea7:{NFSU2_TR(0x61dea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dea9:{NFSU2_TR(0x61dea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61dead:{NFSU2_TR(0x61dead);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61deb9;}}
}
B61deaf:L61deaf:{c.instructions+=4;NFSU2_TR(0x61deaf);
w4(R+0,u32(0x1ull));
}
B61deb4:{NFSU2_TR(0x61deb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61deb5:{NFSU2_TR(0x61deb5);
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
B61deb8:{NFSU2_TR(0x61deb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61deb9:L61deb9:{c.instructions+=12;NFSU2_TR(0x61deb9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61debc:{NFSU2_TR(0x61debc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61debd:{NFSU2_TR(0x61debd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61debf:{NFSU2_TR(0x61debf);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B61dec2:{NFSU2_TR(0x61dec2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61dec6:{NFSU2_TR(0x61dec6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dec7:{NFSU2_TR(0x61dec7);
__builtin_memmove((R+12),(R+518),1);
}
B61deca:{NFSU2_TR(0x61deca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61decc:{NFSU2_TR(0x61decc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dece:{NFSU2_TR(0x61dece);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61decf:{NFSU2_TR(0x61decf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ded3:{NFSU2_TR(0x61ded3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ded8ull));
TAIL_STATIC(0x4901d0u,490);
}
B61ded8:L61ded8:{c.instructions+=6;NFSU2_TR(0x61ded8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61dedc:{NFSU2_TR(0x61dedc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dede:{NFSU2_TR(0x61dede);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dee0:{NFSU2_TR(0x61dee0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61dee1:{NFSU2_TR(0x61dee1);
__builtin_memmove((R+20),(R+0),4);
}
B61dee3:{NFSU2_TR(0x61dee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61dee8ull));
TAIL_STATIC(0x4901d0u,490);
}
B61dee8:L61dee8:{c.instructions+=5;NFSU2_TR(0x61dee8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B61deeb:{NFSU2_TR(0x61deeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61deed:{NFSU2_TR(0x61deed);
__builtin_memmove((R+8),(R+0),4);
}
B61deef:{NFSU2_TR(0x61deef);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61def3:{NFSU2_TR(0x61def3);
if(r1(R+518)){{goto L61dfd8;}}
}
B61def9:L61def9:{c.instructions+=2;NFSU2_TR(0x61def9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61defb:{NFSU2_TR(0x61defb);
if(r1(R+518)){{goto L61dfd8;}}
}
B61df01:L61df01:{c.instructions+=7;NFSU2_TR(0x61df01);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61df05:{NFSU2_TR(0x61df05);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61df09:{NFSU2_TR(0x61df09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df0a:{NFSU2_TR(0x61df0a);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B61df11:{NFSU2_TR(0x61df11);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B61df14:{NFSU2_TR(0x61df14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61df16:{NFSU2_TR(0x61df16);
if(r1(R+518)){{goto L61dfc5;}}
}
B61df1c:L61df1c:{c.instructions+=2;NFSU2_TR(0x61df1c);
u8 U[4];
w4(U+0,u32(0x798534ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df21:{NFSU2_TR(0x61df21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df26ull));
TAIL_STATIC(0x43db50u,43d);
}
B61df26:L61df26:{c.instructions+=6;NFSU2_TR(0x61df26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61df29:{NFSU2_TR(0x61df29);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61df2b:{NFSU2_TR(0x61df2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df2c:{NFSU2_TR(0x61df2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df2d:{NFSU2_TR(0x61df2d);
__builtin_memmove((R+4),(R+24),4);
}
B61df2f:{NFSU2_TR(0x61df2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df34ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61df34:L61df34:{c.instructions+=2;NFSU2_TR(0x61df34);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61df36:{NFSU2_TR(0x61df36);
if(r1(R+518)){{goto L61df41;}}
}
B61df38:L61df38:{c.instructions+=3;NFSU2_TR(0x61df38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61df3b:{NFSU2_TR(0x61df3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61df3f:{NFSU2_TR(0x61df3f);
{goto L61df45;}
}
B61df41:L61df41:{c.instructions+=1;NFSU2_TR(0x61df41);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61df45:L61df45:{c.instructions+=2;NFSU2_TR(0x61df45);
u8 U[4];
w4(U+0,u32(0x798524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df4a:{NFSU2_TR(0x61df4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df4full));
TAIL_STATIC(0x43db50u,43d);
}
B61df4f:L61df4f:{c.instructions+=5;NFSU2_TR(0x61df4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61df52:{NFSU2_TR(0x61df52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df53:{NFSU2_TR(0x61df53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df54:{NFSU2_TR(0x61df54);
__builtin_memmove((R+4),(R+24),4);
}
B61df56:{NFSU2_TR(0x61df56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df5bull));
TAIL_STATIC(0x60fef0u,60f);
}
B61df5b:L61df5b:{c.instructions+=2;NFSU2_TR(0x61df5b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61df5d:{NFSU2_TR(0x61df5d);
if(r1(R+518)){{goto L61df62;}}
}
B61df5f:L61df5f:{c.instructions+=1;NFSU2_TR(0x61df5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61df62:L61df62:{c.instructions+=2;NFSU2_TR(0x61df62);
u8 U[4];
w4(U+0,u32(0x79852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df67:{NFSU2_TR(0x61df67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df6cull));
TAIL_STATIC(0x43db50u,43d);
}
B61df6c:L61df6c:{c.instructions+=5;NFSU2_TR(0x61df6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61df6f:{NFSU2_TR(0x61df6f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df71:{NFSU2_TR(0x61df71);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df72:{NFSU2_TR(0x61df72);
__builtin_memmove((R+4),(R+24),4);
}
B61df74:{NFSU2_TR(0x61df74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df79ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61df79:L61df79:{c.instructions+=2;NFSU2_TR(0x61df79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61df7b:{NFSU2_TR(0x61df7b);
if(r1(R+518)){{goto L61df82;}}
}
B61df7d:L61df7d:{c.instructions+=2;NFSU2_TR(0x61df7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61df80:{NFSU2_TR(0x61df80);
{goto L61df84;}
}
B61df82:L61df82:{c.instructions+=1;NFSU2_TR(0x61df82);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61df84:L61df84:{c.instructions+=2;NFSU2_TR(0x61df84);
u8 U[4];
w4(U+0,u32(0x79aab0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df89:{NFSU2_TR(0x61df89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df8eull));
TAIL_STATIC(0x43db50u,43d);
}
B61df8e:L61df8e:{c.instructions+=5;NFSU2_TR(0x61df8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61df91:{NFSU2_TR(0x61df91);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df93:{NFSU2_TR(0x61df93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61df94:{NFSU2_TR(0x61df94);
__builtin_memmove((R+4),(R+24),4);
}
B61df96:{NFSU2_TR(0x61df96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61df9bull));
TAIL_STATIC(0x60fef0u,60f);
}
B61df9b:L61df9b:{c.instructions+=2;NFSU2_TR(0x61df9b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61df9d:{NFSU2_TR(0x61df9d);
if(r1(R+518)){{goto L61dfa4;}}
}
B61df9f:L61df9f:{c.instructions+=2;NFSU2_TR(0x61df9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61dfa2:{NFSU2_TR(0x61dfa2);
{goto L61dfa6;}
}
B61dfa4:L61dfa4:{c.instructions+=1;NFSU2_TR(0x61dfa4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61dfa6:L61dfa6:{c.instructions+=10;NFSU2_TR(0x61dfa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61dfaa:{NFSU2_TR(0x61dfaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61dfae:{NFSU2_TR(0x61dfae);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dfb1:{NFSU2_TR(0x61dfb1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B61dfb3:{NFSU2_TR(0x61dfb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61dfb7:{NFSU2_TR(0x61dfb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dfba:{NFSU2_TR(0x61dfba);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B61dfbc:{NFSU2_TR(0x61dfbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61dfc0:{NFSU2_TR(0x61dfc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61dfc3:{NFSU2_TR(0x61dfc3);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B61dfc5:L61dfc5:{c.instructions+=4;NFSU2_TR(0x61dfc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61dfc7:{NFSU2_TR(0x61dfc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61dfca:{NFSU2_TR(0x61dfca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61dfcb:{NFSU2_TR(0x61dfcb);
if(r1(R+518)){{goto L61dfe1;}}
}
B61dfcd:L61dfcd:{c.instructions+=2;NFSU2_TR(0x61dfcd);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B61dfd0:{NFSU2_TR(0x61dfd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61dfd8;}}
}
B61dfd2:L61dfd2:{c.instructions+=2;NFSU2_TR(0x61dfd2);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61dfd6:{NFSU2_TR(0x61dfd6);
if(r1(R+518)){{goto L61dfec;}}
}
B61dfd8:L61dfd8:{c.instructions+=6;NFSU2_TR(0x61dfd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61dfd9:{NFSU2_TR(0x61dfd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61dfda:{NFSU2_TR(0x61dfda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61dfdc:{NFSU2_TR(0x61dfdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61dfdd:{NFSU2_TR(0x61dfdd);
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
B61dfe0:{NFSU2_TR(0x61dfe0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61dfe1:L61dfe1:{c.instructions+=2;NFSU2_TR(0x61dfe1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B61dfe4:{NFSU2_TR(0x61dfe4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dfd8u);}goto L61dfd8;}}
}
B61dfe6:L61dfe6:{c.instructions+=2;NFSU2_TR(0x61dfe6);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x20ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61dfea:{NFSU2_TR(0x61dfea);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dfd8u);}goto L61dfd8;}}
}
B61dfec:L61dfec:{c.instructions+=3;NFSU2_TR(0x61dfec);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61dff0:{NFSU2_TR(0x61dff0);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B61dff4:{NFSU2_TR(0x61dff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dfd8u);}goto L61dfd8;}}
}
B61dff6:L61dff6:{c.instructions+=2;NFSU2_TR(0x61dff6);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B61dffa:{NFSU2_TR(0x61dffa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61dfd8u);}goto L61dfd8;}}
}
B61dffc:L61dffc:{c.instructions+=1;NFSU2_TR(0x61dffc);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
TAIL_STATIC(0x61e000u,61e);
}
XIT:NFSU2_TR_EXIT(0x61d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
