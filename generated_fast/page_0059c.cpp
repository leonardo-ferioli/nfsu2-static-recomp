#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_59d(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x59c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x59c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_59c(u8* __restrict R,Cpu& c);
u32 page_59c(Cpu& c){return body_59c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_59c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x59c001:goto L59c001;
case 0x59c004:c.instructions+=4;goto B59c004;
case 0x59c005:c.instructions+=3;goto B59c005;
case 0x59c009:c.instructions+=2;goto B59c009;
case 0x59c00a:c.instructions+=1;goto B59c00a;
case 0x59c00f:goto L59c00f;
case 0x59c013:c.instructions+=24;goto B59c013;
case 0x59c019:c.instructions+=23;goto B59c019;
case 0x59c01c:c.instructions+=22;goto B59c01c;
case 0x59c020:c.instructions+=21;goto B59c020;
case 0x59c021:c.instructions+=20;goto B59c021;
case 0x59c025:c.instructions+=19;goto B59c025;
case 0x59c02b:c.instructions+=18;goto B59c02b;
case 0x59c02c:c.instructions+=17;goto B59c02c;
case 0x59c030:c.instructions+=16;goto B59c030;
case 0x59c034:c.instructions+=15;goto B59c034;
case 0x59c03a:c.instructions+=14;goto B59c03a;
case 0x59c03e:c.instructions+=13;goto B59c03e;
case 0x59c042:c.instructions+=12;goto B59c042;
case 0x59c048:c.instructions+=11;goto B59c048;
case 0x59c04c:c.instructions+=10;goto B59c04c;
case 0x59c04e:c.instructions+=9;goto B59c04e;
case 0x59c052:c.instructions+=8;goto B59c052;
case 0x59c056:c.instructions+=7;goto B59c056;
case 0x59c058:c.instructions+=6;goto B59c058;
case 0x59c05c:c.instructions+=5;goto B59c05c;
case 0x59c060:c.instructions+=4;goto B59c060;
case 0x59c062:c.instructions+=3;goto B59c062;
case 0x59c066:c.instructions+=2;goto B59c066;
case 0x59c068:c.instructions+=1;goto B59c068;
case 0x59c06d:goto L59c06d;
case 0x59c073:c.instructions+=4;goto B59c073;
case 0x59c076:c.instructions+=3;goto B59c076;
case 0x59c078:c.instructions+=2;goto B59c078;
case 0x59c07e:c.instructions+=1;goto B59c07e;
case 0x59c080:goto L59c080;
case 0x59c086:goto L59c086;
case 0x59c087:c.instructions+=4;goto B59c087;
case 0x59c08e:c.instructions+=3;goto B59c08e;
case 0x59c08f:c.instructions+=2;goto B59c08f;
case 0x59c090:c.instructions+=1;goto B59c090;
case 0x59c095:goto L59c095;
case 0x59c099:c.instructions+=6;goto B59c099;
case 0x59c09a:c.instructions+=5;goto B59c09a;
case 0x59c0a1:c.instructions+=4;goto B59c0a1;
case 0x59c0a2:c.instructions+=3;goto B59c0a2;
case 0x59c0a9:c.instructions+=2;goto B59c0a9;
case 0x59c0aa:c.instructions+=1;goto B59c0aa;
case 0x59c0af:goto L59c0af;
case 0x59c0b3:c.instructions+=6;goto B59c0b3;
case 0x59c0b4:c.instructions+=5;goto B59c0b4;
case 0x59c0bb:c.instructions+=4;goto B59c0bb;
case 0x59c0bc:c.instructions+=3;goto B59c0bc;
case 0x59c0c0:c.instructions+=2;goto B59c0c0;
case 0x59c0c1:c.instructions+=1;goto B59c0c1;
case 0x59c0c6:goto L59c0c6;
case 0x59c0ca:c.instructions+=24;goto B59c0ca;
case 0x59c0ce:c.instructions+=23;goto B59c0ce;
case 0x59c0d1:c.instructions+=22;goto B59c0d1;
case 0x59c0d5:c.instructions+=21;goto B59c0d5;
case 0x59c0d6:c.instructions+=20;goto B59c0d6;
case 0x59c0da:c.instructions+=19;goto B59c0da;
case 0x59c0db:c.instructions+=18;goto B59c0db;
case 0x59c0dd:c.instructions+=17;goto B59c0dd;
case 0x59c0e1:c.instructions+=16;goto B59c0e1;
case 0x59c0e5:c.instructions+=15;goto B59c0e5;
case 0x59c0e7:c.instructions+=14;goto B59c0e7;
case 0x59c0ed:c.instructions+=13;goto B59c0ed;
case 0x59c0f1:c.instructions+=12;goto B59c0f1;
case 0x59c0f5:c.instructions+=11;goto B59c0f5;
case 0x59c0f9:c.instructions+=10;goto B59c0f9;
case 0x59c0fd:c.instructions+=9;goto B59c0fd;
case 0x59c0ff:c.instructions+=8;goto B59c0ff;
case 0x59c103:c.instructions+=7;goto B59c103;
case 0x59c107:c.instructions+=6;goto B59c107;
case 0x59c109:c.instructions+=5;goto B59c109;
case 0x59c10f:c.instructions+=4;goto B59c10f;
case 0x59c111:c.instructions+=3;goto B59c111;
case 0x59c113:c.instructions+=2;goto B59c113;
case 0x59c114:c.instructions+=1;goto B59c114;
case 0x59c120:goto L59c120;
case 0x59c124:c.instructions+=67;goto B59c124;
case 0x59c128:c.instructions+=66;goto B59c128;
case 0x59c12b:c.instructions+=65;goto B59c12b;
case 0x59c12e:c.instructions+=64;goto B59c12e;
case 0x59c132:c.instructions+=63;goto B59c132;
case 0x59c135:c.instructions+=62;goto B59c135;
case 0x59c136:c.instructions+=61;goto B59c136;
case 0x59c139:c.instructions+=60;goto B59c139;
case 0x59c13b:c.instructions+=59;goto B59c13b;
case 0x59c13d:c.instructions+=58;goto B59c13d;
case 0x59c13f:c.instructions+=57;goto B59c13f;
case 0x59c142:c.instructions+=56;goto B59c142;
case 0x59c145:c.instructions+=55;goto B59c145;
case 0x59c148:c.instructions+=54;goto B59c148;
case 0x59c14b:c.instructions+=53;goto B59c14b;
case 0x59c14d:c.instructions+=52;goto B59c14d;
case 0x59c150:c.instructions+=51;goto B59c150;
case 0x59c153:c.instructions+=50;goto B59c153;
case 0x59c156:c.instructions+=49;goto B59c156;
case 0x59c159:c.instructions+=48;goto B59c159;
case 0x59c15c:c.instructions+=47;goto B59c15c;
case 0x59c15f:c.instructions+=46;goto B59c15f;
case 0x59c161:c.instructions+=45;goto B59c161;
case 0x59c164:c.instructions+=44;goto B59c164;
case 0x59c167:c.instructions+=43;goto B59c167;
case 0x59c169:c.instructions+=42;goto B59c169;
case 0x59c16c:c.instructions+=41;goto B59c16c;
case 0x59c16e:c.instructions+=40;goto B59c16e;
case 0x59c170:c.instructions+=39;goto B59c170;
case 0x59c173:c.instructions+=38;goto B59c173;
case 0x59c176:c.instructions+=37;goto B59c176;
case 0x59c179:c.instructions+=36;goto B59c179;
case 0x59c17b:c.instructions+=35;goto B59c17b;
case 0x59c17e:c.instructions+=34;goto B59c17e;
case 0x59c180:c.instructions+=33;goto B59c180;
case 0x59c183:c.instructions+=32;goto B59c183;
case 0x59c186:c.instructions+=31;goto B59c186;
case 0x59c189:c.instructions+=30;goto B59c189;
case 0x59c18c:c.instructions+=29;goto B59c18c;
case 0x59c18e:c.instructions+=28;goto B59c18e;
case 0x59c191:c.instructions+=27;goto B59c191;
case 0x59c193:c.instructions+=26;goto B59c193;
case 0x59c196:c.instructions+=25;goto B59c196;
case 0x59c198:c.instructions+=24;goto B59c198;
case 0x59c19b:c.instructions+=23;goto B59c19b;
case 0x59c19d:c.instructions+=22;goto B59c19d;
case 0x59c1a0:c.instructions+=21;goto B59c1a0;
case 0x59c1a2:c.instructions+=20;goto B59c1a2;
case 0x59c1a5:c.instructions+=19;goto B59c1a5;
case 0x59c1a7:c.instructions+=18;goto B59c1a7;
case 0x59c1aa:c.instructions+=17;goto B59c1aa;
case 0x59c1ad:c.instructions+=16;goto B59c1ad;
case 0x59c1b0:c.instructions+=15;goto B59c1b0;
case 0x59c1b2:c.instructions+=14;goto B59c1b2;
case 0x59c1b5:c.instructions+=13;goto B59c1b5;
case 0x59c1b8:c.instructions+=12;goto B59c1b8;
case 0x59c1ba:c.instructions+=11;goto B59c1ba;
case 0x59c1bd:c.instructions+=10;goto B59c1bd;
case 0x59c1c0:c.instructions+=9;goto B59c1c0;
case 0x59c1c3:c.instructions+=8;goto B59c1c3;
case 0x59c1c6:c.instructions+=7;goto B59c1c6;
case 0x59c1c9:c.instructions+=6;goto B59c1c9;
case 0x59c1cb:c.instructions+=5;goto B59c1cb;
case 0x59c1ce:c.instructions+=4;goto B59c1ce;
case 0x59c1d5:c.instructions+=3;goto B59c1d5;
case 0x59c1d6:c.instructions+=2;goto B59c1d6;
case 0x59c1d9:c.instructions+=1;goto B59c1d9;
case 0x59c1e0:goto L59c1e0;
case 0x59c1e1:c.instructions+=12;goto B59c1e1;
case 0x59c1e3:c.instructions+=11;goto B59c1e3;
case 0x59c1e6:c.instructions+=10;goto B59c1e6;
case 0x59c1e9:c.instructions+=9;goto B59c1e9;
case 0x59c1ea:c.instructions+=8;goto B59c1ea;
case 0x59c1eb:c.instructions+=7;goto B59c1eb;
case 0x59c1ed:c.instructions+=6;goto B59c1ed;
case 0x59c1f3:c.instructions+=5;goto B59c1f3;
case 0x59c1f4:c.instructions+=4;goto B59c1f4;
case 0x59c1fa:c.instructions+=3;goto B59c1fa;
case 0x59c1fc:c.instructions+=2;goto B59c1fc;
case 0x59c1ff:c.instructions+=1;goto B59c1ff;
case 0x59c205:goto L59c205;
case 0x59c20b:c.instructions+=5;goto B59c20b;
case 0x59c211:c.instructions+=4;goto B59c211;
case 0x59c213:c.instructions+=3;goto B59c213;
case 0x59c219:c.instructions+=2;goto B59c219;
case 0x59c21f:c.instructions+=1;goto B59c21f;
case 0x59c221:goto L59c221;
case 0x59c227:goto L59c227;
case 0x59c22a:c.instructions+=7;goto B59c22a;
case 0x59c22e:c.instructions+=6;goto B59c22e;
case 0x59c232:c.instructions+=5;goto B59c232;
case 0x59c238:c.instructions+=4;goto B59c238;
case 0x59c23c:c.instructions+=3;goto B59c23c;
case 0x59c23e:c.instructions+=2;goto B59c23e;
case 0x59c241:c.instructions+=1;goto B59c241;
case 0x59c243:goto L59c243;
case 0x59c249:c.instructions+=3;goto B59c249;
case 0x59c24b:c.instructions+=2;goto B59c24b;
case 0x59c24e:c.instructions+=1;goto B59c24e;
case 0x59c250:goto L59c250;
case 0x59c256:c.instructions+=1;goto B59c256;
case 0x59c25a:goto L59c25a;
case 0x59c260:c.instructions+=5;goto B59c260;
case 0x59c266:c.instructions+=4;goto B59c266;
case 0x59c26c:c.instructions+=3;goto B59c26c;
case 0x59c270:c.instructions+=2;goto B59c270;
case 0x59c276:c.instructions+=1;goto B59c276;
case 0x59c278:goto L59c278;
case 0x59c27a:c.instructions+=5;goto B59c27a;
case 0x59c27e:c.instructions+=4;goto B59c27e;
case 0x59c284:c.instructions+=3;goto B59c284;
case 0x59c286:c.instructions+=2;goto B59c286;
case 0x59c289:c.instructions+=1;goto B59c289;
case 0x59c28b:goto L59c28b;
case 0x59c291:c.instructions+=1;goto B59c291;
case 0x59c295:goto L59c295;
case 0x59c29b:c.instructions+=4;goto B59c29b;
case 0x59c2a1:c.instructions+=3;goto B59c2a1;
case 0x59c2a7:c.instructions+=2;goto B59c2a7;
case 0x59c2ab:c.instructions+=1;goto B59c2ab;
case 0x59c2b1:goto L59c2b1;
case 0x59c2b3:c.instructions+=16;goto B59c2b3;
case 0x59c2b9:c.instructions+=15;goto B59c2b9;
case 0x59c2bf:c.instructions+=14;goto B59c2bf;
case 0x59c2c1:c.instructions+=13;goto B59c2c1;
case 0x59c2c3:c.instructions+=12;goto B59c2c3;
case 0x59c2c5:c.instructions+=11;goto B59c2c5;
case 0x59c2c7:c.instructions+=10;goto B59c2c7;
case 0x59c2c9:c.instructions+=9;goto B59c2c9;
case 0x59c2cb:c.instructions+=8;goto B59c2cb;
case 0x59c2cd:c.instructions+=7;goto B59c2cd;
case 0x59c2cf:c.instructions+=6;goto B59c2cf;
case 0x59c2d5:c.instructions+=5;goto B59c2d5;
case 0x59c2d7:c.instructions+=4;goto B59c2d7;
case 0x59c2d9:c.instructions+=3;goto B59c2d9;
case 0x59c2db:c.instructions+=2;goto B59c2db;
case 0x59c2de:c.instructions+=1;goto B59c2de;
case 0x59c2e4:goto L59c2e4;
case 0x59c2e7:c.instructions+=13;goto B59c2e7;
case 0x59c2ea:c.instructions+=12;goto B59c2ea;
case 0x59c2f0:c.instructions+=11;goto B59c2f0;
case 0x59c2f6:c.instructions+=10;goto B59c2f6;
case 0x59c2f9:c.instructions+=9;goto B59c2f9;
case 0x59c2fc:c.instructions+=8;goto B59c2fc;
case 0x59c2fe:c.instructions+=7;goto B59c2fe;
case 0x59c300:c.instructions+=6;goto B59c300;
case 0x59c302:c.instructions+=5;goto B59c302;
case 0x59c304:c.instructions+=4;goto B59c304;
case 0x59c30a:c.instructions+=3;goto B59c30a;
case 0x59c30c:c.instructions+=2;goto B59c30c;
case 0x59c30f:c.instructions+=1;goto B59c30f;
case 0x59c311:goto L59c311;
case 0x59c315:c.instructions+=3;goto B59c315;
case 0x59c316:c.instructions+=2;goto B59c316;
case 0x59c317:c.instructions+=1;goto B59c317;
case 0x59c31c:goto L59c31c;
case 0x59c31d:c.instructions+=5;goto B59c31d;
case 0x59c321:c.instructions+=4;goto B59c321;
case 0x59c322:c.instructions+=3;goto B59c322;
case 0x59c326:c.instructions+=2;goto B59c326;
case 0x59c327:c.instructions+=1;goto B59c327;
case 0x59c32c:goto L59c32c;
case 0x59c332:c.instructions+=7;goto B59c332;
case 0x59c336:c.instructions+=6;goto B59c336;
case 0x59c339:c.instructions+=5;goto B59c339;
case 0x59c33b:c.instructions+=4;goto B59c33b;
case 0x59c341:c.instructions+=3;goto B59c341;
case 0x59c343:c.instructions+=2;goto B59c343;
case 0x59c346:c.instructions+=1;goto B59c346;
case 0x59c348:goto L59c348;
case 0x59c34a:c.instructions+=1;goto B59c34a;
case 0x59c350:goto L59c350;
case 0x59c354:c.instructions+=6;goto B59c354;
case 0x59c358:c.instructions+=5;goto B59c358;
case 0x59c359:c.instructions+=4;goto B59c359;
case 0x59c35d:c.instructions+=3;goto B59c35d;
case 0x59c35e:c.instructions+=2;goto B59c35e;
case 0x59c35f:c.instructions+=1;goto B59c35f;
case 0x59c364:goto L59c364;
case 0x59c368:c.instructions+=6;goto B59c368;
case 0x59c36c:c.instructions+=5;goto B59c36c;
case 0x59c370:c.instructions+=4;goto B59c370;
case 0x59c373:c.instructions+=3;goto B59c373;
case 0x59c375:c.instructions+=2;goto B59c375;
case 0x59c378:c.instructions+=1;goto B59c378;
case 0x59c37b:goto L59c37b;
case 0x59c381:c.instructions+=14;goto B59c381;
case 0x59c384:c.instructions+=13;goto B59c384;
case 0x59c38a:c.instructions+=12;goto B59c38a;
case 0x59c390:c.instructions+=11;goto B59c390;
case 0x59c393:c.instructions+=10;goto B59c393;
case 0x59c395:c.instructions+=9;goto B59c395;
case 0x59c396:c.instructions+=8;goto B59c396;
case 0x59c399:c.instructions+=7;goto B59c399;
case 0x59c39f:c.instructions+=6;goto B59c39f;
case 0x59c3a2:c.instructions+=5;goto B59c3a2;
case 0x59c3a5:c.instructions+=4;goto B59c3a5;
case 0x59c3a6:c.instructions+=3;goto B59c3a6;
case 0x59c3a7:c.instructions+=2;goto B59c3a7;
case 0x59c3a9:c.instructions+=1;goto B59c3a9;
case 0x59c3ae:goto L59c3ae;
case 0x59c3b4:c.instructions+=33;goto B59c3b4;
case 0x59c3ba:c.instructions+=32;goto B59c3ba;
case 0x59c3c0:c.instructions+=31;goto B59c3c0;
case 0x59c3c3:c.instructions+=30;goto B59c3c3;
case 0x59c3c5:c.instructions+=29;goto B59c3c5;
case 0x59c3c8:c.instructions+=28;goto B59c3c8;
case 0x59c3cb:c.instructions+=27;goto B59c3cb;
case 0x59c3ce:c.instructions+=26;goto B59c3ce;
case 0x59c3d4:c.instructions+=25;goto B59c3d4;
case 0x59c3da:c.instructions+=24;goto B59c3da;
case 0x59c3e0:c.instructions+=23;goto B59c3e0;
case 0x59c3e3:c.instructions+=22;goto B59c3e3;
case 0x59c3e5:c.instructions+=21;goto B59c3e5;
case 0x59c3e8:c.instructions+=20;goto B59c3e8;
case 0x59c3eb:c.instructions+=19;goto B59c3eb;
case 0x59c3f1:c.instructions+=18;goto B59c3f1;
case 0x59c3f3:c.instructions+=17;goto B59c3f3;
case 0x59c3f6:c.instructions+=16;goto B59c3f6;
case 0x59c3f9:c.instructions+=15;goto B59c3f9;
case 0x59c3fb:c.instructions+=14;goto B59c3fb;
case 0x59c3fd:c.instructions+=13;goto B59c3fd;
case 0x59c3ff:c.instructions+=12;goto B59c3ff;
case 0x59c401:c.instructions+=11;goto B59c401;
case 0x59c403:c.instructions+=10;goto B59c403;
case 0x59c405:c.instructions+=9;goto B59c405;
case 0x59c407:c.instructions+=8;goto B59c407;
case 0x59c409:c.instructions+=7;goto B59c409;
case 0x59c40b:c.instructions+=6;goto B59c40b;
case 0x59c40d:c.instructions+=5;goto B59c40d;
case 0x59c40f:c.instructions+=4;goto B59c40f;
case 0x59c411:c.instructions+=3;goto B59c411;
case 0x59c413:c.instructions+=2;goto B59c413;
case 0x59c417:c.instructions+=1;goto B59c417;
case 0x59c419:goto L59c419;
case 0x59c41d:c.instructions+=3;goto B59c41d;
case 0x59c41e:c.instructions+=2;goto B59c41e;
case 0x59c423:c.instructions+=1;goto B59c423;
case 0x59c428:goto L59c428;
case 0x59c42a:c.instructions+=17;goto B59c42a;
case 0x59c42c:c.instructions+=16;goto B59c42c;
case 0x59c432:c.instructions+=15;goto B59c432;
case 0x59c438:c.instructions+=14;goto B59c438;
case 0x59c43a:c.instructions+=13;goto B59c43a;
case 0x59c43e:c.instructions+=12;goto B59c43e;
case 0x59c444:c.instructions+=11;goto B59c444;
case 0x59c446:c.instructions+=10;goto B59c446;
case 0x59c44a:c.instructions+=9;goto B59c44a;
case 0x59c44d:c.instructions+=8;goto B59c44d;
case 0x59c450:c.instructions+=7;goto B59c450;
case 0x59c452:c.instructions+=6;goto B59c452;
case 0x59c456:c.instructions+=5;goto B59c456;
case 0x59c459:c.instructions+=4;goto B59c459;
case 0x59c45c:c.instructions+=3;goto B59c45c;
case 0x59c460:c.instructions+=2;goto B59c460;
case 0x59c463:c.instructions+=1;goto B59c463;
case 0x59c466:goto L59c466;
case 0x59c46c:c.instructions+=22;goto B59c46c;
case 0x59c472:c.instructions+=21;goto B59c472;
case 0x59c478:c.instructions+=20;goto B59c478;
case 0x59c47a:c.instructions+=19;goto B59c47a;
case 0x59c47c:c.instructions+=18;goto B59c47c;
case 0x59c47e:c.instructions+=17;goto B59c47e;
case 0x59c480:c.instructions+=16;goto B59c480;
case 0x59c482:c.instructions+=15;goto B59c482;
case 0x59c484:c.instructions+=14;goto B59c484;
case 0x59c486:c.instructions+=13;goto B59c486;
case 0x59c488:c.instructions+=12;goto B59c488;
case 0x59c48a:c.instructions+=11;goto B59c48a;
case 0x59c48c:c.instructions+=10;goto B59c48c;
case 0x59c48e:c.instructions+=9;goto B59c48e;
case 0x59c490:c.instructions+=8;goto B59c490;
case 0x59c496:c.instructions+=7;goto B59c496;
case 0x59c49a:c.instructions+=6;goto B59c49a;
case 0x59c49e:c.instructions+=5;goto B59c49e;
case 0x59c4a4:c.instructions+=4;goto B59c4a4;
case 0x59c4a8:c.instructions+=3;goto B59c4a8;
case 0x59c4aa:c.instructions+=2;goto B59c4aa;
case 0x59c4ad:c.instructions+=1;goto B59c4ad;
case 0x59c4af:goto L59c4af;
case 0x59c4b3:c.instructions+=1;goto B59c4b3;
case 0x59c4b5:goto L59c4b5;
case 0x59c4b7:goto L59c4b7;
case 0x59c4bb:c.instructions+=3;goto B59c4bb;
case 0x59c4bc:c.instructions+=2;goto B59c4bc;
case 0x59c4c1:c.instructions+=1;goto B59c4c1;
case 0x59c4c6:goto L59c4c6;
case 0x59c4cc:c.instructions+=3;goto B59c4cc;
case 0x59c4ce:c.instructions+=2;goto B59c4ce;
case 0x59c4d1:c.instructions+=1;goto B59c4d1;
case 0x59c4d3:goto L59c4d3;
case 0x59c4d8:c.instructions+=2;goto B59c4d8;
case 0x59c4db:c.instructions+=1;goto B59c4db;
case 0x59c4dd:goto L59c4dd;
case 0x59c4e3:c.instructions+=2;goto B59c4e3;
case 0x59c4e5:c.instructions+=1;goto B59c4e5;
case 0x59c4e8:goto L59c4e8;
case 0x59c4ee:c.instructions+=2;goto B59c4ee;
case 0x59c4f0:c.instructions+=1;goto B59c4f0;
case 0x59c4f6:goto L59c4f6;
case 0x59c4fc:c.instructions+=39;goto B59c4fc;
case 0x59c502:c.instructions+=38;goto B59c502;
case 0x59c504:c.instructions+=37;goto B59c504;
case 0x59c506:c.instructions+=36;goto B59c506;
case 0x59c50c:c.instructions+=35;goto B59c50c;
case 0x59c512:c.instructions+=34;goto B59c512;
case 0x59c514:c.instructions+=33;goto B59c514;
case 0x59c518:c.instructions+=32;goto B59c518;
case 0x59c51e:c.instructions+=31;goto B59c51e;
case 0x59c520:c.instructions+=30;goto B59c520;
case 0x59c524:c.instructions+=29;goto B59c524;
case 0x59c527:c.instructions+=28;goto B59c527;
case 0x59c52a:c.instructions+=27;goto B59c52a;
case 0x59c52c:c.instructions+=26;goto B59c52c;
case 0x59c530:c.instructions+=25;goto B59c530;
case 0x59c533:c.instructions+=24;goto B59c533;
case 0x59c536:c.instructions+=23;goto B59c536;
case 0x59c53a:c.instructions+=22;goto B59c53a;
case 0x59c53d:c.instructions+=21;goto B59c53d;
case 0x59c540:c.instructions+=20;goto B59c540;
case 0x59c546:c.instructions+=19;goto B59c546;
case 0x59c54c:c.instructions+=18;goto B59c54c;
case 0x59c54e:c.instructions+=17;goto B59c54e;
case 0x59c550:c.instructions+=16;goto B59c550;
case 0x59c553:c.instructions+=15;goto B59c553;
case 0x59c556:c.instructions+=14;goto B59c556;
case 0x59c558:c.instructions+=13;goto B59c558;
case 0x59c55c:c.instructions+=12;goto B59c55c;
case 0x59c55f:c.instructions+=11;goto B59c55f;
case 0x59c561:c.instructions+=10;goto B59c561;
case 0x59c565:c.instructions+=9;goto B59c565;
case 0x59c568:c.instructions+=8;goto B59c568;
case 0x59c56b:c.instructions+=7;goto B59c56b;
case 0x59c56d:c.instructions+=6;goto B59c56d;
case 0x59c571:c.instructions+=5;goto B59c571;
case 0x59c574:c.instructions+=4;goto B59c574;
case 0x59c577:c.instructions+=3;goto B59c577;
case 0x59c57b:c.instructions+=2;goto B59c57b;
case 0x59c57e:c.instructions+=1;goto B59c57e;
case 0x59c581:goto L59c581;
case 0x59c587:c.instructions+=4;goto B59c587;
case 0x59c58d:c.instructions+=3;goto B59c58d;
case 0x59c58f:c.instructions+=2;goto B59c58f;
case 0x59c592:c.instructions+=1;goto B59c592;
case 0x59c594:goto L59c594;
case 0x59c59a:c.instructions+=4;goto B59c59a;
case 0x59c5a0:c.instructions+=3;goto B59c5a0;
case 0x59c5a2:c.instructions+=2;goto B59c5a2;
case 0x59c5a5:c.instructions+=1;goto B59c5a5;
case 0x59c5a7:goto L59c5a7;
case 0x59c5ad:c.instructions+=1;goto B59c5ad;
case 0x59c5b0:goto L59c5b0;
case 0x59c5b2:c.instructions+=6;goto B59c5b2;
case 0x59c5b3:c.instructions+=5;goto B59c5b3;
case 0x59c5b4:c.instructions+=4;goto B59c5b4;
case 0x59c5b5:c.instructions+=3;goto B59c5b5;
case 0x59c5b7:c.instructions+=2;goto B59c5b7;
case 0x59c5b8:c.instructions+=1;goto B59c5b8;
case 0x59c5bb:goto L59c5bb;
case 0x59c5c1:c.instructions+=6;goto B59c5c1;
case 0x59c5c3:c.instructions+=5;goto B59c5c3;
case 0x59c5c9:c.instructions+=4;goto B59c5c9;
case 0x59c5cb:c.instructions+=3;goto B59c5cb;
case 0x59c5ce:c.instructions+=2;goto B59c5ce;
case 0x59c5d0:c.instructions+=1;goto B59c5d0;
case 0x59c5d2:goto L59c5d2;
case 0x59c5d5:c.instructions+=6;goto B59c5d5;
case 0x59c5d6:c.instructions+=5;goto B59c5d6;
case 0x59c5d7:c.instructions+=4;goto B59c5d7;
case 0x59c5d8:c.instructions+=3;goto B59c5d8;
case 0x59c5da:c.instructions+=2;goto B59c5da;
case 0x59c5db:c.instructions+=1;goto B59c5db;
case 0x59c5de:goto L59c5de;
case 0x59c5df:c.instructions+=6;goto B59c5df;
case 0x59c5e1:c.instructions+=5;goto B59c5e1;
case 0x59c5e2:c.instructions+=4;goto B59c5e2;
case 0x59c5e3:c.instructions+=3;goto B59c5e3;
case 0x59c5e5:c.instructions+=2;goto B59c5e5;
case 0x59c5e6:c.instructions+=1;goto B59c5e6;
case 0x59c5f0:goto L59c5f0;
case 0x59c5f1:c.instructions+=40;goto B59c5f1;
case 0x59c5f3:c.instructions+=39;goto B59c5f3;
case 0x59c5f6:c.instructions+=38;goto B59c5f6;
case 0x59c5fc:c.instructions+=37;goto B59c5fc;
case 0x59c5fd:c.instructions+=36;goto B59c5fd;
case 0x59c5fe:c.instructions+=35;goto B59c5fe;
case 0x59c600:c.instructions+=34;goto B59c600;
case 0x59c606:c.instructions+=33;goto B59c606;
case 0x59c609:c.instructions+=32;goto B59c609;
case 0x59c60c:c.instructions+=31;goto B59c60c;
case 0x59c610:c.instructions+=30;goto B59c610;
case 0x59c612:c.instructions+=29;goto B59c612;
case 0x59c613:c.instructions+=28;goto B59c613;
case 0x59c616:c.instructions+=27;goto B59c616;
case 0x59c61c:c.instructions+=26;goto B59c61c;
case 0x59c61e:c.instructions+=25;goto B59c61e;
case 0x59c624:c.instructions+=24;goto B59c624;
case 0x59c628:c.instructions+=23;goto B59c628;
case 0x59c62a:c.instructions+=22;goto B59c62a;
case 0x59c630:c.instructions+=21;goto B59c630;
case 0x59c632:c.instructions+=20;goto B59c632;
case 0x59c638:c.instructions+=19;goto B59c638;
case 0x59c63e:c.instructions+=18;goto B59c63e;
case 0x59c644:c.instructions+=17;goto B59c644;
case 0x59c646:c.instructions+=16;goto B59c646;
case 0x59c648:c.instructions+=15;goto B59c648;
case 0x59c64a:c.instructions+=14;goto B59c64a;
case 0x59c64c:c.instructions+=13;goto B59c64c;
case 0x59c64e:c.instructions+=12;goto B59c64e;
case 0x59c650:c.instructions+=11;goto B59c650;
case 0x59c652:c.instructions+=10;goto B59c652;
case 0x59c654:c.instructions+=9;goto B59c654;
case 0x59c656:c.instructions+=8;goto B59c656;
case 0x59c658:c.instructions+=7;goto B59c658;
case 0x59c65a:c.instructions+=6;goto B59c65a;
case 0x59c65c:c.instructions+=5;goto B59c65c;
case 0x59c660:c.instructions+=4;goto B59c660;
case 0x59c666:c.instructions+=3;goto B59c666;
case 0x59c668:c.instructions+=2;goto B59c668;
case 0x59c66b:c.instructions+=1;goto B59c66b;
case 0x59c66d:goto L59c66d;
case 0x59c673:c.instructions+=4;goto B59c673;
case 0x59c679:c.instructions+=3;goto B59c679;
case 0x59c67b:c.instructions+=2;goto B59c67b;
case 0x59c67e:c.instructions+=1;goto B59c67e;
case 0x59c680:goto L59c680;
case 0x59c686:c.instructions+=22;goto B59c686;
case 0x59c68a:c.instructions+=21;goto B59c68a;
case 0x59c68c:c.instructions+=20;goto B59c68c;
case 0x59c68f:c.instructions+=19;goto B59c68f;
case 0x59c692:c.instructions+=18;goto B59c692;
case 0x59c694:c.instructions+=17;goto B59c694;
case 0x59c697:c.instructions+=16;goto B59c697;
case 0x59c69a:c.instructions+=15;goto B59c69a;
case 0x59c69d:c.instructions+=14;goto B59c69d;
case 0x59c6a0:c.instructions+=13;goto B59c6a0;
case 0x59c6a3:c.instructions+=12;goto B59c6a3;
case 0x59c6a9:c.instructions+=11;goto B59c6a9;
case 0x59c6ad:c.instructions+=10;goto B59c6ad;
case 0x59c6b0:c.instructions+=9;goto B59c6b0;
case 0x59c6b2:c.instructions+=8;goto B59c6b2;
case 0x59c6b5:c.instructions+=7;goto B59c6b5;
case 0x59c6bb:c.instructions+=6;goto B59c6bb;
case 0x59c6bd:c.instructions+=5;goto B59c6bd;
case 0x59c6c3:c.instructions+=4;goto B59c6c3;
case 0x59c6c7:c.instructions+=3;goto B59c6c7;
case 0x59c6c9:c.instructions+=2;goto B59c6c9;
case 0x59c6cf:c.instructions+=1;goto B59c6cf;
case 0x59c6d1:goto L59c6d1;
case 0x59c6d7:c.instructions+=18;goto B59c6d7;
case 0x59c6dd:c.instructions+=17;goto B59c6dd;
case 0x59c6e3:c.instructions+=16;goto B59c6e3;
case 0x59c6e7:c.instructions+=15;goto B59c6e7;
case 0x59c6ed:c.instructions+=14;goto B59c6ed;
case 0x59c6f0:c.instructions+=13;goto B59c6f0;
case 0x59c6f4:c.instructions+=12;goto B59c6f4;
case 0x59c6f6:c.instructions+=11;goto B59c6f6;
case 0x59c6f7:c.instructions+=10;goto B59c6f7;
case 0x59c6fd:c.instructions+=9;goto B59c6fd;
case 0x59c6fe:c.instructions+=8;goto B59c6fe;
case 0x59c704:c.instructions+=7;goto B59c704;
case 0x59c706:c.instructions+=6;goto B59c706;
case 0x59c70c:c.instructions+=5;goto B59c70c;
case 0x59c710:c.instructions+=4;goto B59c710;
case 0x59c712:c.instructions+=3;goto B59c712;
case 0x59c718:c.instructions+=2;goto B59c718;
case 0x59c71a:c.instructions+=1;goto B59c71a;
case 0x59c71f:goto L59c71f;
case 0x59c725:c.instructions+=4;goto B59c725;
case 0x59c728:c.instructions+=3;goto B59c728;
case 0x59c72a:c.instructions+=2;goto B59c72a;
case 0x59c730:c.instructions+=1;goto B59c730;
case 0x59c732:goto L59c732;
case 0x59c738:goto L59c738;
case 0x59c739:c.instructions+=4;goto B59c739;
case 0x59c73d:c.instructions+=3;goto B59c73d;
case 0x59c73e:c.instructions+=2;goto B59c73e;
case 0x59c73f:c.instructions+=1;goto B59c73f;
case 0x59c744:goto L59c744;
case 0x59c748:c.instructions+=6;goto B59c748;
case 0x59c749:c.instructions+=5;goto B59c749;
case 0x59c750:c.instructions+=4;goto B59c750;
case 0x59c751:c.instructions+=3;goto B59c751;
case 0x59c758:c.instructions+=2;goto B59c758;
case 0x59c759:c.instructions+=1;goto B59c759;
case 0x59c75e:goto L59c75e;
case 0x59c764:c.instructions+=6;goto B59c764;
case 0x59c765:c.instructions+=5;goto B59c765;
case 0x59c76c:c.instructions+=4;goto B59c76c;
case 0x59c76d:c.instructions+=3;goto B59c76d;
case 0x59c773:c.instructions+=2;goto B59c773;
case 0x59c774:c.instructions+=1;goto B59c774;
case 0x59c779:goto L59c779;
case 0x59c77c:c.instructions+=19;goto B59c77c;
case 0x59c77f:c.instructions+=18;goto B59c77f;
case 0x59c782:c.instructions+=17;goto B59c782;
case 0x59c784:c.instructions+=16;goto B59c784;
case 0x59c786:c.instructions+=15;goto B59c786;
case 0x59c788:c.instructions+=14;goto B59c788;
case 0x59c78a:c.instructions+=13;goto B59c78a;
case 0x59c78c:c.instructions+=12;goto B59c78c;
case 0x59c78e:c.instructions+=11;goto B59c78e;
case 0x59c790:c.instructions+=10;goto B59c790;
case 0x59c792:c.instructions+=9;goto B59c792;
case 0x59c794:c.instructions+=8;goto B59c794;
case 0x59c796:c.instructions+=7;goto B59c796;
case 0x59c798:c.instructions+=6;goto B59c798;
case 0x59c79a:c.instructions+=5;goto B59c79a;
case 0x59c79c:c.instructions+=4;goto B59c79c;
case 0x59c7a2:c.instructions+=3;goto B59c7a2;
case 0x59c7a4:c.instructions+=2;goto B59c7a4;
case 0x59c7a7:c.instructions+=1;goto B59c7a7;
case 0x59c7a9:goto L59c7a9;
case 0x59c7af:c.instructions+=11;goto B59c7af;
case 0x59c7b2:c.instructions+=10;goto B59c7b2;
case 0x59c7b6:c.instructions+=9;goto B59c7b6;
case 0x59c7b9:c.instructions+=8;goto B59c7b9;
case 0x59c7bb:c.instructions+=7;goto B59c7bb;
case 0x59c7bd:c.instructions+=6;goto B59c7bd;
case 0x59c7bf:c.instructions+=5;goto B59c7bf;
case 0x59c7c1:c.instructions+=4;goto B59c7c1;
case 0x59c7c4:c.instructions+=3;goto B59c7c4;
case 0x59c7c8:c.instructions+=2;goto B59c7c8;
case 0x59c7ca:c.instructions+=1;goto B59c7ca;
case 0x59c7cd:goto L59c7cd;
case 0x59c7cf:c.instructions+=5;goto B59c7cf;
case 0x59c7d5:c.instructions+=4;goto B59c7d5;
case 0x59c7db:c.instructions+=3;goto B59c7db;
case 0x59c7dd:c.instructions+=2;goto B59c7dd;
case 0x59c7e0:c.instructions+=1;goto B59c7e0;
case 0x59c7e2:goto L59c7e2;
case 0x59c7e4:c.instructions+=2;goto B59c7e4;
case 0x59c7ea:c.instructions+=1;goto B59c7ea;
case 0x59c7ec:goto L59c7ec;
case 0x59c7ee:goto L59c7ee;
case 0x59c7f1:c.instructions+=66;goto B59c7f1;
case 0x59c7f4:c.instructions+=65;goto B59c7f4;
case 0x59c7f7:c.instructions+=64;goto B59c7f7;
case 0x59c7f9:c.instructions+=63;goto B59c7f9;
case 0x59c7ff:c.instructions+=62;goto B59c7ff;
case 0x59c801:c.instructions+=61;goto B59c801;
case 0x59c807:c.instructions+=60;goto B59c807;
case 0x59c80d:c.instructions+=59;goto B59c80d;
case 0x59c811:c.instructions+=58;goto B59c811;
case 0x59c817:c.instructions+=57;goto B59c817;
case 0x59c81a:c.instructions+=56;goto B59c81a;
case 0x59c81d:c.instructions+=55;goto B59c81d;
case 0x59c820:c.instructions+=54;goto B59c820;
case 0x59c823:c.instructions+=53;goto B59c823;
case 0x59c829:c.instructions+=52;goto B59c829;
case 0x59c82f:c.instructions+=51;goto B59c82f;
case 0x59c831:c.instructions+=50;goto B59c831;
case 0x59c837:c.instructions+=49;goto B59c837;
case 0x59c83b:c.instructions+=48;goto B59c83b;
case 0x59c841:c.instructions+=47;goto B59c841;
case 0x59c844:c.instructions+=46;goto B59c844;
case 0x59c847:c.instructions+=45;goto B59c847;
case 0x59c84a:c.instructions+=44;goto B59c84a;
case 0x59c84d:c.instructions+=43;goto B59c84d;
case 0x59c853:c.instructions+=42;goto B59c853;
case 0x59c859:c.instructions+=41;goto B59c859;
case 0x59c85b:c.instructions+=40;goto B59c85b;
case 0x59c861:c.instructions+=39;goto B59c861;
case 0x59c865:c.instructions+=38;goto B59c865;
case 0x59c86b:c.instructions+=37;goto B59c86b;
case 0x59c86e:c.instructions+=36;goto B59c86e;
case 0x59c871:c.instructions+=35;goto B59c871;
case 0x59c874:c.instructions+=34;goto B59c874;
case 0x59c87a:c.instructions+=33;goto B59c87a;
case 0x59c87c:c.instructions+=32;goto B59c87c;
case 0x59c882:c.instructions+=31;goto B59c882;
case 0x59c888:c.instructions+=30;goto B59c888;
case 0x59c892:c.instructions+=29;goto B59c892;
case 0x59c898:c.instructions+=28;goto B59c898;
case 0x59c89e:c.instructions+=27;goto B59c89e;
case 0x59c8a4:c.instructions+=26;goto B59c8a4;
case 0x59c8aa:c.instructions+=25;goto B59c8aa;
case 0x59c8ac:c.instructions+=24;goto B59c8ac;
case 0x59c8ae:c.instructions+=23;goto B59c8ae;
case 0x59c8b4:c.instructions+=22;goto B59c8b4;
case 0x59c8ba:c.instructions+=21;goto B59c8ba;
case 0x59c8c0:c.instructions+=20;goto B59c8c0;
case 0x59c8c6:c.instructions+=19;goto B59c8c6;
case 0x59c8cc:c.instructions+=18;goto B59c8cc;
case 0x59c8d2:c.instructions+=17;goto B59c8d2;
case 0x59c8d4:c.instructions+=16;goto B59c8d4;
case 0x59c8da:c.instructions+=15;goto B59c8da;
case 0x59c8e0:c.instructions+=14;goto B59c8e0;
case 0x59c8e6:c.instructions+=13;goto B59c8e6;
case 0x59c8ec:c.instructions+=12;goto B59c8ec;
case 0x59c8f2:c.instructions+=11;goto B59c8f2;
case 0x59c8f8:c.instructions+=10;goto B59c8f8;
case 0x59c8fe:c.instructions+=9;goto B59c8fe;
case 0x59c904:c.instructions+=8;goto B59c904;
case 0x59c906:c.instructions+=7;goto B59c906;
case 0x59c90c:c.instructions+=6;goto B59c90c;
case 0x59c912:c.instructions+=5;goto B59c912;
case 0x59c918:c.instructions+=4;goto B59c918;
case 0x59c91e:c.instructions+=3;goto B59c91e;
case 0x59c920:c.instructions+=2;goto B59c920;
case 0x59c923:c.instructions+=1;goto B59c923;
case 0x59c925:goto L59c925;
case 0x59c92b:c.instructions+=14;goto B59c92b;
case 0x59c92f:c.instructions+=13;goto B59c92f;
case 0x59c935:c.instructions+=12;goto B59c935;
case 0x59c936:c.instructions+=11;goto B59c936;
case 0x59c93a:c.instructions+=10;goto B59c93a;
case 0x59c93b:c.instructions+=9;goto B59c93b;
case 0x59c93d:c.instructions+=8;goto B59c93d;
case 0x59c93f:c.instructions+=7;goto B59c93f;
case 0x59c943:c.instructions+=6;goto B59c943;
case 0x59c94b:c.instructions+=5;goto B59c94b;
case 0x59c953:c.instructions+=4;goto B59c953;
case 0x59c95b:c.instructions+=3;goto B59c95b;
case 0x59c963:c.instructions+=2;goto B59c963;
case 0x59c96b:c.instructions+=1;goto B59c96b;
case 0x59c970:goto L59c970;
case 0x59c971:c.instructions+=5;goto B59c971;
case 0x59c972:c.instructions+=4;goto B59c972;
case 0x59c973:c.instructions+=3;goto B59c973;
case 0x59c975:c.instructions+=2;goto B59c975;
case 0x59c976:c.instructions+=1;goto B59c976;
case 0x59c980:goto L59c980;
case 0x59c981:c.instructions+=7;goto B59c981;
case 0x59c985:c.instructions+=6;goto B59c985;
case 0x59c986:c.instructions+=5;goto B59c986;
case 0x59c98b:c.instructions+=4;goto B59c98b;
case 0x59c98d:c.instructions+=3;goto B59c98d;
case 0x59c98f:c.instructions+=2;goto B59c98f;
case 0x59c991:c.instructions+=1;goto B59c991;
case 0x59c996:goto L59c996;
case 0x59c999:c.instructions+=3;goto B59c999;
case 0x59c99a:c.instructions+=2;goto B59c99a;
case 0x59c99c:c.instructions+=1;goto B59c99c;
case 0x59c9a1:goto L59c9a1;
case 0x59c9a4:c.instructions+=3;goto B59c9a4;
case 0x59c9a5:c.instructions+=2;goto B59c9a5;
case 0x59c9a7:c.instructions+=1;goto B59c9a7;
case 0x59c9ac:goto L59c9ac;
case 0x59c9b2:c.instructions+=3;goto B59c9b2;
case 0x59c9b3:c.instructions+=2;goto B59c9b3;
case 0x59c9b5:c.instructions+=1;goto B59c9b5;
case 0x59c9ba:goto L59c9ba;
case 0x59c9c0:c.instructions+=3;goto B59c9c0;
case 0x59c9c1:c.instructions+=2;goto B59c9c1;
case 0x59c9c3:c.instructions+=1;goto B59c9c3;
case 0x59c9c8:goto L59c9c8;
case 0x59c9ce:c.instructions+=3;goto B59c9ce;
case 0x59c9cf:c.instructions+=2;goto B59c9cf;
case 0x59c9d1:c.instructions+=1;goto B59c9d1;
case 0x59c9d6:goto L59c9d6;
case 0x59c9dc:c.instructions+=3;goto B59c9dc;
case 0x59c9dd:c.instructions+=2;goto B59c9dd;
case 0x59c9df:c.instructions+=1;goto B59c9df;
case 0x59c9e4:goto L59c9e4;
case 0x59c9ea:c.instructions+=3;goto B59c9ea;
case 0x59c9eb:c.instructions+=2;goto B59c9eb;
case 0x59c9ed:c.instructions+=1;goto B59c9ed;
case 0x59c9f2:goto L59c9f2;
case 0x59c9f4:c.instructions+=6;goto B59c9f4;
case 0x59c9f6:c.instructions+=5;goto B59c9f6;
case 0x59c9f8:c.instructions+=4;goto B59c9f8;
case 0x59c9fe:c.instructions+=3;goto B59c9fe;
case 0x59c9ff:c.instructions+=2;goto B59c9ff;
case 0x59ca01:c.instructions+=1;goto B59ca01;
case 0x59ca06:goto L59ca06;
case 0x59ca09:c.instructions+=2;goto B59ca09;
case 0x59ca0c:c.instructions+=1;goto B59ca0c;
case 0x59ca12:goto L59ca12;
case 0x59ca14:c.instructions+=3;goto B59ca14;
case 0x59ca15:c.instructions+=2;goto B59ca15;
case 0x59ca1a:c.instructions+=1;goto B59ca1a;
case 0x59ca1d:goto L59ca1d;
case 0x59ca1f:goto L59ca1f;
case 0x59ca24:c.instructions+=1;goto B59ca24;
case 0x59ca27:goto L59ca27;
case 0x59ca29:goto L59ca29;
case 0x59ca2b:c.instructions+=2;goto B59ca2b;
case 0x59ca30:c.instructions+=1;goto B59ca30;
case 0x59ca36:goto L59ca36;
case 0x59ca38:goto L59ca38;
case 0x59ca3e:c.instructions+=60;goto B59ca3e;
case 0x59ca40:c.instructions+=59;goto B59ca40;
case 0x59ca43:c.instructions+=58;goto B59ca43;
case 0x59ca46:c.instructions+=57;goto B59ca46;
case 0x59ca49:c.instructions+=56;goto B59ca49;
case 0x59ca4f:c.instructions+=55;goto B59ca4f;
case 0x59ca51:c.instructions+=54;goto B59ca51;
case 0x59ca54:c.instructions+=53;goto B59ca54;
case 0x59ca5a:c.instructions+=52;goto B59ca5a;
case 0x59ca64:c.instructions+=51;goto B59ca64;
case 0x59ca66:c.instructions+=50;goto B59ca66;
case 0x59ca6c:c.instructions+=49;goto B59ca6c;
case 0x59ca72:c.instructions+=48;goto B59ca72;
case 0x59ca74:c.instructions+=47;goto B59ca74;
case 0x59ca7a:c.instructions+=46;goto B59ca7a;
case 0x59ca7c:c.instructions+=45;goto B59ca7c;
case 0x59ca7f:c.instructions+=44;goto B59ca7f;
case 0x59ca85:c.instructions+=43;goto B59ca85;
case 0x59ca87:c.instructions+=42;goto B59ca87;
case 0x59ca8a:c.instructions+=41;goto B59ca8a;
case 0x59ca8d:c.instructions+=40;goto B59ca8d;
case 0x59ca90:c.instructions+=39;goto B59ca90;
case 0x59ca92:c.instructions+=38;goto B59ca92;
case 0x59ca98:c.instructions+=37;goto B59ca98;
case 0x59ca9a:c.instructions+=36;goto B59ca9a;
case 0x59ca9d:c.instructions+=35;goto B59ca9d;
case 0x59caa0:c.instructions+=34;goto B59caa0;
case 0x59caa3:c.instructions+=33;goto B59caa3;
case 0x59caa5:c.instructions+=32;goto B59caa5;
case 0x59caab:c.instructions+=31;goto B59caab;
case 0x59caad:c.instructions+=30;goto B59caad;
case 0x59cab0:c.instructions+=29;goto B59cab0;
case 0x59cab3:c.instructions+=28;goto B59cab3;
case 0x59cab6:c.instructions+=27;goto B59cab6;
case 0x59cabc:c.instructions+=26;goto B59cabc;
case 0x59cac3:c.instructions+=25;goto B59cac3;
case 0x59cacc:c.instructions+=24;goto B59cacc;
case 0x59cad6:c.instructions+=23;goto B59cad6;
case 0x59cae0:c.instructions+=22;goto B59cae0;
case 0x59cae6:c.instructions+=21;goto B59cae6;
case 0x59caf0:c.instructions+=20;goto B59caf0;
case 0x59caf6:c.instructions+=19;goto B59caf6;
case 0x59cafc:c.instructions+=18;goto B59cafc;
case 0x59cb06:c.instructions+=17;goto B59cb06;
case 0x59cb0c:c.instructions+=16;goto B59cb0c;
case 0x59cb16:c.instructions+=15;goto B59cb16;
case 0x59cb1c:c.instructions+=14;goto B59cb1c;
case 0x59cb22:c.instructions+=13;goto B59cb22;
case 0x59cb28:c.instructions+=12;goto B59cb28;
case 0x59cb2e:c.instructions+=11;goto B59cb2e;
case 0x59cb38:c.instructions+=10;goto B59cb38;
case 0x59cb3e:c.instructions+=9;goto B59cb3e;
case 0x59cb48:c.instructions+=8;goto B59cb48;
case 0x59cb4e:c.instructions+=7;goto B59cb4e;
case 0x59cb54:c.instructions+=6;goto B59cb54;
case 0x59cb5a:c.instructions+=5;goto B59cb5a;
case 0x59cb5f:c.instructions+=4;goto B59cb5f;
case 0x59cb65:c.instructions+=3;goto B59cb65;
case 0x59cb6b:c.instructions+=2;goto B59cb6b;
case 0x59cb75:c.instructions+=1;goto B59cb75;
case 0x59cb76:goto L59cb76;
case 0x59cb78:c.instructions+=1;goto B59cb78;
case 0x59cb7d:goto L59cb7d;
case 0x59cb7e:c.instructions+=2;goto B59cb7e;
case 0x59cb7f:c.instructions+=1;goto B59cb7f;
case 0x59cb90:goto L59cb90;
case 0x59cb91:c.instructions+=26;goto B59cb91;
case 0x59cb93:c.instructions+=25;goto B59cb93;
case 0x59cb96:c.instructions+=24;goto B59cb96;
case 0x59cb9c:c.instructions+=23;goto B59cb9c;
case 0x59cb9f:c.instructions+=22;goto B59cb9f;
case 0x59cba2:c.instructions+=21;goto B59cba2;
case 0x59cba3:c.instructions+=20;goto B59cba3;
case 0x59cba5:c.instructions+=19;goto B59cba5;
case 0x59cba8:c.instructions+=18;goto B59cba8;
case 0x59cbab:c.instructions+=17;goto B59cbab;
case 0x59cbac:c.instructions+=16;goto B59cbac;
case 0x59cbaf:c.instructions+=15;goto B59cbaf;
case 0x59cbb3:c.instructions+=14;goto B59cbb3;
case 0x59cbb6:c.instructions+=13;goto B59cbb6;
case 0x59cbb7:c.instructions+=12;goto B59cbb7;
case 0x59cbba:c.instructions+=11;goto B59cbba;
case 0x59cbbd:c.instructions+=10;goto B59cbbd;
case 0x59cbc4:c.instructions+=9;goto B59cbc4;
case 0x59cbcb:c.instructions+=8;goto B59cbcb;
case 0x59cbce:c.instructions+=7;goto B59cbce;
case 0x59cbcf:c.instructions+=6;goto B59cbcf;
case 0x59cbd6:c.instructions+=5;goto B59cbd6;
case 0x59cbd8:c.instructions+=4;goto B59cbd8;
case 0x59cbdb:c.instructions+=3;goto B59cbdb;
case 0x59cbdf:c.instructions+=2;goto B59cbdf;
case 0x59cbe6:c.instructions+=1;goto B59cbe6;
case 0x59cbeb:goto L59cbeb;
case 0x59cbee:c.instructions+=4;goto B59cbee;
case 0x59cbef:c.instructions+=3;goto B59cbef;
case 0x59cbf3:c.instructions+=2;goto B59cbf3;
case 0x59cbf4:c.instructions+=1;goto B59cbf4;
case 0x59cbf9:goto L59cbf9;
case 0x59cbfc:c.instructions+=195;goto B59cbfc;
case 0x59cbff:c.instructions+=194;goto B59cbff;
case 0x59cc02:c.instructions+=193;goto B59cc02;
case 0x59cc05:c.instructions+=192;goto B59cc05;
case 0x59cc0c:c.instructions+=191;goto B59cc0c;
case 0x59cc10:c.instructions+=190;goto B59cc10;
case 0x59cc12:c.instructions+=189;goto B59cc12;
case 0x59cc15:c.instructions+=188;goto B59cc15;
case 0x59cc19:c.instructions+=187;goto B59cc19;
case 0x59cc1c:c.instructions+=186;goto B59cc1c;
case 0x59cc1e:c.instructions+=185;goto B59cc1e;
case 0x59cc22:c.instructions+=184;goto B59cc22;
case 0x59cc24:c.instructions+=183;goto B59cc24;
case 0x59cc26:c.instructions+=182;goto B59cc26;
case 0x59cc2a:c.instructions+=181;goto B59cc2a;
case 0x59cc2d:c.instructions+=180;goto B59cc2d;
case 0x59cc2f:c.instructions+=179;goto B59cc2f;
case 0x59cc33:c.instructions+=178;goto B59cc33;
case 0x59cc35:c.instructions+=177;goto B59cc35;
case 0x59cc38:c.instructions+=176;goto B59cc38;
case 0x59cc3c:c.instructions+=175;goto B59cc3c;
case 0x59cc3f:c.instructions+=174;goto B59cc3f;
case 0x59cc41:c.instructions+=173;goto B59cc41;
case 0x59cc45:c.instructions+=172;goto B59cc45;
case 0x59cc47:c.instructions+=171;goto B59cc47;
case 0x59cc49:c.instructions+=170;goto B59cc49;
case 0x59cc4d:c.instructions+=169;goto B59cc4d;
case 0x59cc50:c.instructions+=168;goto B59cc50;
case 0x59cc52:c.instructions+=167;goto B59cc52;
case 0x59cc56:c.instructions+=166;goto B59cc56;
case 0x59cc5a:c.instructions+=165;goto B59cc5a;
case 0x59cc5d:c.instructions+=164;goto B59cc5d;
case 0x59cc61:c.instructions+=163;goto B59cc61;
case 0x59cc63:c.instructions+=162;goto B59cc63;
case 0x59cc65:c.instructions+=161;goto B59cc65;
case 0x59cc69:c.instructions+=160;goto B59cc69;
case 0x59cc6c:c.instructions+=159;goto B59cc6c;
case 0x59cc6e:c.instructions+=158;goto B59cc6e;
case 0x59cc72:c.instructions+=157;goto B59cc72;
case 0x59cc75:c.instructions+=156;goto B59cc75;
case 0x59cc77:c.instructions+=155;goto B59cc77;
case 0x59cc7e:c.instructions+=154;goto B59cc7e;
case 0x59cc82:c.instructions+=153;goto B59cc82;
case 0x59cc85:c.instructions+=152;goto B59cc85;
case 0x59cc89:c.instructions+=151;goto B59cc89;
case 0x59cc8b:c.instructions+=150;goto B59cc8b;
case 0x59cc8d:c.instructions+=149;goto B59cc8d;
case 0x59cc91:c.instructions+=148;goto B59cc91;
case 0x59cc94:c.instructions+=147;goto B59cc94;
case 0x59cc96:c.instructions+=146;goto B59cc96;
case 0x59cc99:c.instructions+=145;goto B59cc99;
case 0x59cca0:c.instructions+=144;goto B59cca0;
case 0x59cca4:c.instructions+=143;goto B59cca4;
case 0x59cca7:c.instructions+=142;goto B59cca7;
case 0x59ccab:c.instructions+=141;goto B59ccab;
case 0x59ccae:c.instructions+=140;goto B59ccae;
case 0x59ccb0:c.instructions+=139;goto B59ccb0;
case 0x59ccb2:c.instructions+=138;goto B59ccb2;
case 0x59ccb5:c.instructions+=137;goto B59ccb5;
case 0x59ccb7:c.instructions+=136;goto B59ccb7;
case 0x59ccbb:c.instructions+=135;goto B59ccbb;
case 0x59ccbe:c.instructions+=134;goto B59ccbe;
case 0x59ccc0:c.instructions+=133;goto B59ccc0;
case 0x59ccc7:c.instructions+=132;goto B59ccc7;
case 0x59cccb:c.instructions+=131;goto B59cccb;
case 0x59ccce:c.instructions+=130;goto B59ccce;
case 0x59ccd2:c.instructions+=129;goto B59ccd2;
case 0x59ccd5:c.instructions+=128;goto B59ccd5;
case 0x59ccd7:c.instructions+=127;goto B59ccd7;
case 0x59ccdb:c.instructions+=126;goto B59ccdb;
case 0x59ccde:c.instructions+=125;goto B59ccde;
case 0x59cce0:c.instructions+=124;goto B59cce0;
case 0x59cce2:c.instructions+=123;goto B59cce2;
case 0x59cce5:c.instructions+=122;goto B59cce5;
case 0x59cce7:c.instructions+=121;goto B59cce7;
case 0x59ccee:c.instructions+=120;goto B59ccee;
case 0x59ccf2:c.instructions+=119;goto B59ccf2;
case 0x59ccf5:c.instructions+=118;goto B59ccf5;
case 0x59ccf9:c.instructions+=117;goto B59ccf9;
case 0x59ccfc:c.instructions+=116;goto B59ccfc;
case 0x59ccfe:c.instructions+=115;goto B59ccfe;
case 0x59cd02:c.instructions+=114;goto B59cd02;
case 0x59cd05:c.instructions+=113;goto B59cd05;
case 0x59cd07:c.instructions+=112;goto B59cd07;
case 0x59cd0b:c.instructions+=111;goto B59cd0b;
case 0x59cd0e:c.instructions+=110;goto B59cd0e;
case 0x59cd10:c.instructions+=109;goto B59cd10;
case 0x59cd17:c.instructions+=108;goto B59cd17;
case 0x59cd1b:c.instructions+=107;goto B59cd1b;
case 0x59cd1e:c.instructions+=106;goto B59cd1e;
case 0x59cd22:c.instructions+=105;goto B59cd22;
case 0x59cd25:c.instructions+=104;goto B59cd25;
case 0x59cd27:c.instructions+=103;goto B59cd27;
case 0x59cd2b:c.instructions+=102;goto B59cd2b;
case 0x59cd2e:c.instructions+=101;goto B59cd2e;
case 0x59cd30:c.instructions+=100;goto B59cd30;
case 0x59cd33:c.instructions+=99;goto B59cd33;
case 0x59cd3a:c.instructions+=98;goto B59cd3a;
case 0x59cd3e:c.instructions+=97;goto B59cd3e;
case 0x59cd41:c.instructions+=96;goto B59cd41;
case 0x59cd45:c.instructions+=95;goto B59cd45;
case 0x59cd48:c.instructions+=94;goto B59cd48;
case 0x59cd4a:c.instructions+=93;goto B59cd4a;
case 0x59cd4c:c.instructions+=92;goto B59cd4c;
case 0x59cd4f:c.instructions+=91;goto B59cd4f;
case 0x59cd51:c.instructions+=90;goto B59cd51;
case 0x59cd55:c.instructions+=89;goto B59cd55;
case 0x59cd58:c.instructions+=88;goto B59cd58;
case 0x59cd5a:c.instructions+=87;goto B59cd5a;
case 0x59cd61:c.instructions+=86;goto B59cd61;
case 0x59cd65:c.instructions+=85;goto B59cd65;
case 0x59cd68:c.instructions+=84;goto B59cd68;
case 0x59cd6c:c.instructions+=83;goto B59cd6c;
case 0x59cd6f:c.instructions+=82;goto B59cd6f;
case 0x59cd71:c.instructions+=81;goto B59cd71;
case 0x59cd75:c.instructions+=80;goto B59cd75;
case 0x59cd78:c.instructions+=79;goto B59cd78;
case 0x59cd7a:c.instructions+=78;goto B59cd7a;
case 0x59cd7c:c.instructions+=77;goto B59cd7c;
case 0x59cd7f:c.instructions+=76;goto B59cd7f;
case 0x59cd81:c.instructions+=75;goto B59cd81;
case 0x59cd88:c.instructions+=74;goto B59cd88;
case 0x59cd8c:c.instructions+=73;goto B59cd8c;
case 0x59cd8f:c.instructions+=72;goto B59cd8f;
case 0x59cd93:c.instructions+=71;goto B59cd93;
case 0x59cd96:c.instructions+=70;goto B59cd96;
case 0x59cd98:c.instructions+=69;goto B59cd98;
case 0x59cd9c:c.instructions+=68;goto B59cd9c;
case 0x59cd9f:c.instructions+=67;goto B59cd9f;
case 0x59cda1:c.instructions+=66;goto B59cda1;
case 0x59cda5:c.instructions+=65;goto B59cda5;
case 0x59cda8:c.instructions+=64;goto B59cda8;
case 0x59cdaa:c.instructions+=63;goto B59cdaa;
case 0x59cdb1:c.instructions+=62;goto B59cdb1;
case 0x59cdb5:c.instructions+=61;goto B59cdb5;
case 0x59cdb8:c.instructions+=60;goto B59cdb8;
case 0x59cdbc:c.instructions+=59;goto B59cdbc;
case 0x59cdbf:c.instructions+=58;goto B59cdbf;
case 0x59cdc1:c.instructions+=57;goto B59cdc1;
case 0x59cdc5:c.instructions+=56;goto B59cdc5;
case 0x59cdc8:c.instructions+=55;goto B59cdc8;
case 0x59cdca:c.instructions+=54;goto B59cdca;
case 0x59cdcd:c.instructions+=53;goto B59cdcd;
case 0x59cdd4:c.instructions+=52;goto B59cdd4;
case 0x59cdd8:c.instructions+=51;goto B59cdd8;
case 0x59cddb:c.instructions+=50;goto B59cddb;
case 0x59cddf:c.instructions+=49;goto B59cddf;
case 0x59cde2:c.instructions+=48;goto B59cde2;
case 0x59cde4:c.instructions+=47;goto B59cde4;
case 0x59cde6:c.instructions+=46;goto B59cde6;
case 0x59cde9:c.instructions+=45;goto B59cde9;
case 0x59cdeb:c.instructions+=44;goto B59cdeb;
case 0x59cdef:c.instructions+=43;goto B59cdef;
case 0x59cdf2:c.instructions+=42;goto B59cdf2;
case 0x59cdf4:c.instructions+=41;goto B59cdf4;
case 0x59cdf6:c.instructions+=40;goto B59cdf6;
case 0x59cdfd:c.instructions+=39;goto B59cdfd;
case 0x59ce01:c.instructions+=38;goto B59ce01;
case 0x59ce04:c.instructions+=37;goto B59ce04;
case 0x59ce08:c.instructions+=36;goto B59ce08;
case 0x59ce0b:c.instructions+=35;goto B59ce0b;
case 0x59ce0f:c.instructions+=34;goto B59ce0f;
case 0x59ce10:c.instructions+=33;goto B59ce10;
case 0x59ce17:c.instructions+=32;goto B59ce17;
case 0x59ce19:c.instructions+=31;goto B59ce19;
case 0x59ce1d:c.instructions+=30;goto B59ce1d;
case 0x59ce1e:c.instructions+=29;goto B59ce1e;
case 0x59ce21:c.instructions+=28;goto B59ce21;
case 0x59ce23:c.instructions+=27;goto B59ce23;
case 0x59ce25:c.instructions+=26;goto B59ce25;
case 0x59ce28:c.instructions+=25;goto B59ce28;
case 0x59ce2a:c.instructions+=24;goto B59ce2a;
case 0x59ce31:c.instructions+=23;goto B59ce31;
case 0x59ce35:c.instructions+=22;goto B59ce35;
case 0x59ce38:c.instructions+=21;goto B59ce38;
case 0x59ce3c:c.instructions+=20;goto B59ce3c;
case 0x59ce3f:c.instructions+=19;goto B59ce3f;
case 0x59ce41:c.instructions+=18;goto B59ce41;
case 0x59ce45:c.instructions+=17;goto B59ce45;
case 0x59ce48:c.instructions+=16;goto B59ce48;
case 0x59ce4a:c.instructions+=15;goto B59ce4a;
case 0x59ce4e:c.instructions+=14;goto B59ce4e;
case 0x59ce51:c.instructions+=13;goto B59ce51;
case 0x59ce53:c.instructions+=12;goto B59ce53;
case 0x59ce5a:c.instructions+=11;goto B59ce5a;
case 0x59ce5e:c.instructions+=10;goto B59ce5e;
case 0x59ce61:c.instructions+=9;goto B59ce61;
case 0x59ce65:c.instructions+=8;goto B59ce65;
case 0x59ce68:c.instructions+=7;goto B59ce68;
case 0x59ce6a:c.instructions+=6;goto B59ce6a;
case 0x59ce6e:c.instructions+=5;goto B59ce6e;
case 0x59ce71:c.instructions+=4;goto B59ce71;
case 0x59ce73:c.instructions+=3;goto B59ce73;
case 0x59ce76:c.instructions+=2;goto B59ce76;
case 0x59ce7d:c.instructions+=1;goto B59ce7d;
case 0x59ce82:goto L59ce82;
case 0x59ce85:c.instructions+=3;goto B59ce85;
case 0x59ce86:c.instructions+=2;goto B59ce86;
case 0x59ce88:c.instructions+=1;goto B59ce88;
case 0x59ce8d:goto L59ce8d;
case 0x59ce94:c.instructions+=3;goto B59ce94;
case 0x59ce95:c.instructions+=2;goto B59ce95;
case 0x59ce97:c.instructions+=1;goto B59ce97;
case 0x59ce9c:goto L59ce9c;
case 0x59cea3:c.instructions+=15;goto B59cea3;
case 0x59cea6:c.instructions+=14;goto B59cea6;
case 0x59ceac:c.instructions+=13;goto B59ceac;
case 0x59cead:c.instructions+=12;goto B59cead;
case 0x59ceb4:c.instructions+=11;goto B59ceb4;
case 0x59cebb:c.instructions+=10;goto B59cebb;
case 0x59cebe:c.instructions+=9;goto B59cebe;
case 0x59cebf:c.instructions+=8;goto B59cebf;
case 0x59cec6:c.instructions+=7;goto B59cec6;
case 0x59ceca:c.instructions+=6;goto B59ceca;
case 0x59cecb:c.instructions+=5;goto B59cecb;
case 0x59ced2:c.instructions+=4;goto B59ced2;
case 0x59ced5:c.instructions+=3;goto B59ced5;
case 0x59cedc:c.instructions+=2;goto B59cedc;
case 0x59cee3:c.instructions+=1;goto B59cee3;
case 0x59cee8:goto L59cee8;
case 0x59ceec:c.instructions+=27;goto B59ceec;
case 0x59ceef:c.instructions+=26;goto B59ceef;
case 0x59cef2:c.instructions+=25;goto B59cef2;
case 0x59cef6:c.instructions+=24;goto B59cef6;
case 0x59cef9:c.instructions+=23;goto B59cef9;
case 0x59cf00:c.instructions+=22;goto B59cf00;
case 0x59cf07:c.instructions+=21;goto B59cf07;
case 0x59cf0b:c.instructions+=20;goto B59cf0b;
case 0x59cf0d:c.instructions+=19;goto B59cf0d;
case 0x59cf14:c.instructions+=18;goto B59cf14;
case 0x59cf18:c.instructions+=17;goto B59cf18;
case 0x59cf1c:c.instructions+=16;goto B59cf1c;
case 0x59cf1f:c.instructions+=15;goto B59cf1f;
case 0x59cf26:c.instructions+=14;goto B59cf26;
case 0x59cf2a:c.instructions+=13;goto B59cf2a;
case 0x59cf2e:c.instructions+=12;goto B59cf2e;
case 0x59cf32:c.instructions+=11;goto B59cf32;
case 0x59cf38:c.instructions+=10;goto B59cf38;
case 0x59cf3a:c.instructions+=9;goto B59cf3a;
case 0x59cf41:c.instructions+=8;goto B59cf41;
case 0x59cf47:c.instructions+=7;goto B59cf47;
case 0x59cf48:c.instructions+=6;goto B59cf48;
case 0x59cf49:c.instructions+=5;goto B59cf49;
case 0x59cf4f:c.instructions+=4;goto B59cf4f;
case 0x59cf52:c.instructions+=3;goto B59cf52;
case 0x59cf59:c.instructions+=2;goto B59cf59;
case 0x59cf5a:c.instructions+=1;goto B59cf5a;
case 0x59cf5f:goto L59cf5f;
case 0x59cf65:c.instructions+=4;goto B59cf65;
case 0x59cf6a:c.instructions+=3;goto B59cf6a;
case 0x59cf6c:c.instructions+=2;goto B59cf6c;
case 0x59cf71:c.instructions+=1;goto B59cf71;
case 0x59cf73:goto L59cf73;
case 0x59cf78:c.instructions+=2;goto B59cf78;
case 0x59cf7a:c.instructions+=1;goto B59cf7a;
case 0x59cf7c:goto L59cf7c;
case 0x59cf81:c.instructions+=2;goto B59cf81;
case 0x59cf83:c.instructions+=1;goto B59cf83;
case 0x59cf85:goto L59cf85;
case 0x59cf8a:c.instructions+=2;goto B59cf8a;
case 0x59cf8c:c.instructions+=1;goto B59cf8c;
case 0x59cf8e:goto L59cf8e;
case 0x59cf92:goto L59cf92;
case 0x59cf96:c.instructions+=4;goto B59cf96;
case 0x59cf9d:c.instructions+=3;goto B59cf9d;
case 0x59cf9f:c.instructions+=2;goto B59cf9f;
case 0x59cfa6:c.instructions+=1;goto B59cfa6;
case 0x59cfa8:goto L59cfa8;
case 0x59cfae:goto L59cfae;
case 0x59cfb2:c.instructions+=3;goto B59cfb2;
case 0x59cfb9:c.instructions+=2;goto B59cfb9;
case 0x59cfc0:c.instructions+=1;goto B59cfc0;
case 0x59cfc2:goto L59cfc2;
case 0x59cfc9:goto L59cfc9;
case 0x59cfd0:c.instructions+=8;goto B59cfd0;
case 0x59cfd6:c.instructions+=7;goto B59cfd6;
case 0x59cfdd:c.instructions+=6;goto B59cfdd;
case 0x59cfe3:c.instructions+=5;goto B59cfe3;
case 0x59cfea:c.instructions+=4;goto B59cfea;
case 0x59cff0:c.instructions+=3;goto B59cff0;
case 0x59cff7:c.instructions+=2;goto B59cff7;
case 0x59cffd:c.instructions+=1;goto B59cffd;
default:missing_instruction(c.pc);}
B59c001:L59c001:{c.instructions+=5;NFSU2_TR(0x59c001);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c004:{NFSU2_TR(0x59c004);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c005:{NFSU2_TR(0x59c005);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c009:{NFSU2_TR(0x59c009);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c00a:{NFSU2_TR(0x59c00a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c00full));
TAIL_STATIC(0x43d1e0u,43d);
}
B59c00f:L59c00f:{c.instructions+=25;NFSU2_TR(0x59c00f);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c013:{NFSU2_TR(0x59c013);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c019:{NFSU2_TR(0x59c019);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c01c:{NFSU2_TR(0x59c01c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c020:{NFSU2_TR(0x59c020);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c021:{NFSU2_TR(0x59c021);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c025:{NFSU2_TR(0x59c025);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c02b:{NFSU2_TR(0x59c02b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c02c:{NFSU2_TR(0x59c02c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c030:{NFSU2_TR(0x59c030);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c034:{NFSU2_TR(0x59c034);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c03a:{NFSU2_TR(0x59c03a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c03e:{NFSU2_TR(0x59c03e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c042:{NFSU2_TR(0x59c042);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c048:{NFSU2_TR(0x59c048);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c04c:{NFSU2_TR(0x59c04c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c04e:{NFSU2_TR(0x59c04e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c052:{NFSU2_TR(0x59c052);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c056:{NFSU2_TR(0x59c056);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c058:{NFSU2_TR(0x59c058);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c05c:{NFSU2_TR(0x59c05c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c060:{NFSU2_TR(0x59c060);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c062:{NFSU2_TR(0x59c062);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c066:{NFSU2_TR(0x59c066);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c068:{NFSU2_TR(0x59c068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c06dull));
TAIL_STATIC(0x43c9d0u,43c);
}
B59c06d:L59c06d:{c.instructions+=5;NFSU2_TR(0x59c06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c073:{NFSU2_TR(0x59c073);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59c076:{NFSU2_TR(0x59c076);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59c078:{NFSU2_TR(0x59c078);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c07e:{NFSU2_TR(0x59c07e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c086;}}
}
B59c080:L59c080:{c.instructions+=1;NFSU2_TR(0x59c080);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c086:L59c086:{c.instructions+=5;NFSU2_TR(0x59c086);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c087:{NFSU2_TR(0x59c087);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c08e:{NFSU2_TR(0x59c08e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c08f:{NFSU2_TR(0x59c08f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c090:{NFSU2_TR(0x59c090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c095ull));
TAIL_STATIC(0x43c990u,43c);
}
B59c095:L59c095:{c.instructions+=7;NFSU2_TR(0x59c095);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c099:{NFSU2_TR(0x59c099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c09a:{NFSU2_TR(0x59c09a);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c0a1:{NFSU2_TR(0x59c0a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c0a2:{NFSU2_TR(0x59c0a2);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c0a9:{NFSU2_TR(0x59c0a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c0aa:{NFSU2_TR(0x59c0aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c0afull));
TAIL_STATIC(0x43c990u,43c);
}
B59c0af:L59c0af:{c.instructions+=7;NFSU2_TR(0x59c0af);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c0b3:{NFSU2_TR(0x59c0b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c0b4:{NFSU2_TR(0x59c0b4);
u8 U[4];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c0bb:{NFSU2_TR(0x59c0bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c0bc:{NFSU2_TR(0x59c0bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c0c0:{NFSU2_TR(0x59c0c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c0c1:{NFSU2_TR(0x59c0c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c0c6ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59c0c6:L59c0c6:{c.instructions+=25;NFSU2_TR(0x59c0c6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0ca:{NFSU2_TR(0x59c0ca);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0ce:{NFSU2_TR(0x59c0ce);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59c0d1:{NFSU2_TR(0x59c0d1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0d5:{NFSU2_TR(0x59c0d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c0d6:{NFSU2_TR(0x59c0d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0da:{NFSU2_TR(0x59c0da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c0db:{NFSU2_TR(0x59c0db);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c0dd:{NFSU2_TR(0x59c0dd);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0e1:{NFSU2_TR(0x59c0e1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0e5:{NFSU2_TR(0x59c0e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c0e7:{NFSU2_TR(0x59c0e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0ed:{NFSU2_TR(0x59c0ed);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0f1:{NFSU2_TR(0x59c0f1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0f5:{NFSU2_TR(0x59c0f5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c0f9:{NFSU2_TR(0x59c0f9);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c0fd:{NFSU2_TR(0x59c0fd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c0ff:{NFSU2_TR(0x59c0ff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c103:{NFSU2_TR(0x59c103);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c107:{NFSU2_TR(0x59c107);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c109:{NFSU2_TR(0x59c109);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c10f:{NFSU2_TR(0x59c10f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c111:{NFSU2_TR(0x59c111);
__builtin_memmove((R+16),(R+20),4);
}
B59c113:{NFSU2_TR(0x59c113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c114:{NFSU2_TR(0x59c114);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59c120:L59c120:{c.instructions+=68;NFSU2_TR(0x59c120);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c124:{NFSU2_TR(0x59c124);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c128:{NFSU2_TR(0x59c128);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c12b:{NFSU2_TR(0x59c12b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c12e:{NFSU2_TR(0x59c12e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c132:{NFSU2_TR(0x59c132);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c135:{NFSU2_TR(0x59c135);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c136:{NFSU2_TR(0x59c136);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c139:{NFSU2_TR(0x59c139);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59c13b:{NFSU2_TR(0x59c13b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c13d:{NFSU2_TR(0x59c13d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c13f:{NFSU2_TR(0x59c13f);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c142:{NFSU2_TR(0x59c142);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c145:{NFSU2_TR(0x59c145);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c148:{NFSU2_TR(0x59c148);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c14b:{NFSU2_TR(0x59c14b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c14d:{NFSU2_TR(0x59c14d);
{u32 ea_=u32(r4(R+8)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c150:{NFSU2_TR(0x59c150);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c153:{NFSU2_TR(0x59c153);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c156:{NFSU2_TR(0x59c156);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c159:{NFSU2_TR(0x59c159);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c15c:{NFSU2_TR(0x59c15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c15f:{NFSU2_TR(0x59c15f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c161:{NFSU2_TR(0x59c161);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c164:{NFSU2_TR(0x59c164);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c167:{NFSU2_TR(0x59c167);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c169:{NFSU2_TR(0x59c169);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c16c:{NFSU2_TR(0x59c16c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c16e:{NFSU2_TR(0x59c16e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c170:{NFSU2_TR(0x59c170);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c173:{NFSU2_TR(0x59c173);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c176:{NFSU2_TR(0x59c176);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c179:{NFSU2_TR(0x59c179);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c17b:{NFSU2_TR(0x59c17b);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c17e:{NFSU2_TR(0x59c17e);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c180:{NFSU2_TR(0x59c180);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c183:{NFSU2_TR(0x59c183);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c186:{NFSU2_TR(0x59c186);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c189:{NFSU2_TR(0x59c189);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c18c:{NFSU2_TR(0x59c18c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c18e:{NFSU2_TR(0x59c18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c191:{NFSU2_TR(0x59c191);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c193:{NFSU2_TR(0x59c193);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c196:{NFSU2_TR(0x59c196);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c198:{NFSU2_TR(0x59c198);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c19b:{NFSU2_TR(0x59c19b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c19d:{NFSU2_TR(0x59c19d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1a0:{NFSU2_TR(0x59c1a0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c1a2:{NFSU2_TR(0x59c1a2);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c1a5:{NFSU2_TR(0x59c1a5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1a7:{NFSU2_TR(0x59c1a7);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1aa:{NFSU2_TR(0x59c1aa);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1ad:{NFSU2_TR(0x59c1ad);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1b0:{NFSU2_TR(0x59c1b0);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c1b2:{NFSU2_TR(0x59c1b2);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c1b5:{NFSU2_TR(0x59c1b5);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1b8:{NFSU2_TR(0x59c1b8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1ba:{NFSU2_TR(0x59c1ba);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1bd:{NFSU2_TR(0x59c1bd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c1c0:{NFSU2_TR(0x59c1c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1c3:{NFSU2_TR(0x59c1c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1c6:{NFSU2_TR(0x59c1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1c9:{NFSU2_TR(0x59c1c9);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B59c1cb:{NFSU2_TR(0x59c1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c1ce:{NFSU2_TR(0x59c1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c1d5:{NFSU2_TR(0x59c1d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c1d6:{NFSU2_TR(0x59c1d6);
{u32 ea_=u32(r4(R+8)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c1d9:{NFSU2_TR(0x59c1d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59c1e0:L59c1e0:{c.instructions+=13;NFSU2_TR(0x59c1e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c1e1:{NFSU2_TR(0x59c1e1);
__builtin_memmove((R+20),(R+16),4);
}
B59c1e3:{NFSU2_TR(0x59c1e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59c1e6:{NFSU2_TR(0x59c1e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B59c1e9:{NFSU2_TR(0x59c1e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c1ea:{NFSU2_TR(0x59c1ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c1eb:{NFSU2_TR(0x59c1eb);
__builtin_memmove((R+24),(R+4),4);
}
B59c1ed:{NFSU2_TR(0x59c1ed);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c1f3:{NFSU2_TR(0x59c1f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c1f4:{NFSU2_TR(0x59c1f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c1fa:{NFSU2_TR(0x59c1fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c1fc:{NFSU2_TR(0x59c1fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59c1ff:{NFSU2_TR(0x59c1ff);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59c37b;}}
}
B59c205:L59c205:{c.instructions+=6;NFSU2_TR(0x59c205);
{u32 ea_=u32(r4(R+24)+u32(520u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c20b:{NFSU2_TR(0x59c20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c211:{NFSU2_TR(0x59c211);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59c213:{NFSU2_TR(0x59c213);
{u32 ea_=u32(r4(R+24)+u32(516u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c219:{NFSU2_TR(0x59c219);
{u32 ea_=u32(u32(8003200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c21f:{NFSU2_TR(0x59c21f);
if(r1(R+518)){{goto L59c227;}}
}
B59c221:L59c221:{c.instructions+=1;NFSU2_TR(0x59c221);
{u32 ea_=u32(u32(8002328u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c227:L59c227:{c.instructions+=8;NFSU2_TR(0x59c227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c22a:{NFSU2_TR(0x59c22a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c22e:{NFSU2_TR(0x59c22e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c232:{NFSU2_TR(0x59c232);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c238:{NFSU2_TR(0x59c238);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c23c:{NFSU2_TR(0x59c23c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c23e:{NFSU2_TR(0x59c23e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c241:{NFSU2_TR(0x59c241);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c278;}}
}
B59c243:L59c243:{c.instructions+=4;NFSU2_TR(0x59c243);
{u32 ea_=u32(u32(8002292u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c249:{NFSU2_TR(0x59c249);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c24b:{NFSU2_TR(0x59c24b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c24e:{NFSU2_TR(0x59c24e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c25a;}}
}
B59c250:L59c250:{c.instructions+=2;NFSU2_TR(0x59c250);
__builtin_memmove((R+4),gp(0x7a1af4),4);
}
B59c256:{NFSU2_TR(0x59c256);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c25a:L59c25a:{c.instructions+=6;NFSU2_TR(0x59c25a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c260:{NFSU2_TR(0x59c260);
{u32 ea_=u32(u32(8002288u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59c266:{NFSU2_TR(0x59c266);
{u32 ea_=u32(u32(8002292u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c26c:{NFSU2_TR(0x59c26c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c270:{NFSU2_TR(0x59c270);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59c276:{NFSU2_TR(0x59c276);
{goto L59c2b1;}
}
B59c278:L59c278:{c.instructions+=6;NFSU2_TR(0x59c278);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c27a:{NFSU2_TR(0x59c27a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59c27e:{NFSU2_TR(0x59c27e);
{u32 ea_=u32(u32(8002284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c284:{NFSU2_TR(0x59c284);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c286:{NFSU2_TR(0x59c286);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c289:{NFSU2_TR(0x59c289);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c295;}}
}
B59c28b:L59c28b:{c.instructions+=2;NFSU2_TR(0x59c28b);
__builtin_memmove((R+8),gp(0x7a1aec),4);
}
B59c291:{NFSU2_TR(0x59c291);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c295:L59c295:{c.instructions+=5;NFSU2_TR(0x59c295);
{u32 ea_=u32(u32(8002280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c29b:{NFSU2_TR(0x59c29b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59c2a1:{NFSU2_TR(0x59c2a1);
{u32 ea_=u32(u32(8002284u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c2a7:{NFSU2_TR(0x59c2a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2ab:{NFSU2_TR(0x59c2ab);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c2b1:L59c2b1:{c.instructions+=17;NFSU2_TR(0x59c2b1);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59c2b3:{NFSU2_TR(0x59c2b3);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2b9:{NFSU2_TR(0x59c2b9);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2bf:{NFSU2_TR(0x59c2bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c2c1:{NFSU2_TR(0x59c2c1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c2c3:{NFSU2_TR(0x59c2c3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c2c5:{NFSU2_TR(0x59c2c5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c2c7:{NFSU2_TR(0x59c2c7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c2c9:{NFSU2_TR(0x59c2c9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c2cb:{NFSU2_TR(0x59c2cb);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59c2cd:{NFSU2_TR(0x59c2cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c2cf:{NFSU2_TR(0x59c2cf);
{u32 ea_=u32(u32(8003196u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2d5:{NFSU2_TR(0x59c2d5);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B59c2d7:{NFSU2_TR(0x59c2d7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c2d9:{NFSU2_TR(0x59c2d9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c2db:{NFSU2_TR(0x59c2db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c2de:{NFSU2_TR(0x59c2de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c37b;}}
}
B59c2e4:L59c2e4:{c.instructions+=14;NFSU2_TR(0x59c2e4);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2e7:{NFSU2_TR(0x59c2e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c2ea:{NFSU2_TR(0x59c2ea);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2f0:{NFSU2_TR(0x59c2f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c2f6:{NFSU2_TR(0x59c2f6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c2f9:{NFSU2_TR(0x59c2f9);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c2fc:{NFSU2_TR(0x59c2fc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c2fe:{NFSU2_TR(0x59c2fe);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c300:{NFSU2_TR(0x59c300);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c302:{NFSU2_TR(0x59c302);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c304:{NFSU2_TR(0x59c304);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c30a:{NFSU2_TR(0x59c30a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c30c:{NFSU2_TR(0x59c30c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c30f:{NFSU2_TR(0x59c30f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c37b;}}
}
B59c311:L59c311:{c.instructions+=4;NFSU2_TR(0x59c311);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c315:{NFSU2_TR(0x59c315);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c316:{NFSU2_TR(0x59c316);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c317:{NFSU2_TR(0x59c317);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c31cull));
TAIL_STATIC(0x43c9d0u,43c);
}
B59c31c:L59c31c:{c.instructions+=6;NFSU2_TR(0x59c31c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c31d:{NFSU2_TR(0x59c31d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c321:{NFSU2_TR(0x59c321);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c322:{NFSU2_TR(0x59c322);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c326:{NFSU2_TR(0x59c326);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c327:{NFSU2_TR(0x59c327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c32cull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59c32c:L59c32c:{c.instructions+=8;NFSU2_TR(0x59c32c);
{u32 ea_=u32(u32(8002300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c332:{NFSU2_TR(0x59c332);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c336:{NFSU2_TR(0x59c336);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59c339:{NFSU2_TR(0x59c339);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c33b:{NFSU2_TR(0x59c33b);
{u32 ea_=u32(u32(8002296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c341:{NFSU2_TR(0x59c341);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c343:{NFSU2_TR(0x59c343);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c346:{NFSU2_TR(0x59c346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c350;}}
}
B59c348:L59c348:{c.instructions+=2;NFSU2_TR(0x59c348);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c34a:{NFSU2_TR(0x59c34a);
{u32 ea_=u32(u32(8002296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c350:L59c350:{c.instructions+=7;NFSU2_TR(0x59c350);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c354:{NFSU2_TR(0x59c354);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c358:{NFSU2_TR(0x59c358);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c359:{NFSU2_TR(0x59c359);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c35d:{NFSU2_TR(0x59c35d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c35e:{NFSU2_TR(0x59c35e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c35f:{NFSU2_TR(0x59c35f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c364ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59c364:L59c364:{c.instructions+=7;NFSU2_TR(0x59c364);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c368:{NFSU2_TR(0x59c368);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c36c:{NFSU2_TR(0x59c36c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c370:{NFSU2_TR(0x59c370);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59c373:{NFSU2_TR(0x59c373);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59c375:{NFSU2_TR(0x59c375);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c378:{NFSU2_TR(0x59c378);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c37b:L59c37b:{c.instructions+=15;NFSU2_TR(0x59c37b);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c381:{NFSU2_TR(0x59c381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59c384:{NFSU2_TR(0x59c384);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c38a:{NFSU2_TR(0x59c38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c390:{NFSU2_TR(0x59c390);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c393:{NFSU2_TR(0x59c393);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c395:{NFSU2_TR(0x59c395);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c396:{NFSU2_TR(0x59c396);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c399:{NFSU2_TR(0x59c399);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c39f:{NFSU2_TR(0x59c39f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59c3a2:{NFSU2_TR(0x59c3a2);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3a5:{NFSU2_TR(0x59c3a5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c3a6:{NFSU2_TR(0x59c3a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c3a7:{NFSU2_TR(0x59c3a7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59c3a9:{NFSU2_TR(0x59c3a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c3aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59c120u);}goto L59c120;}
}
B59c3ae:L59c3ae:{c.instructions+=34;NFSU2_TR(0x59c3ae);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3b4:{NFSU2_TR(0x59c3b4);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3ba:{NFSU2_TR(0x59c3ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c3c0:{NFSU2_TR(0x59c3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c3c3:{NFSU2_TR(0x59c3c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c3c5:{NFSU2_TR(0x59c3c5);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3c8:{NFSU2_TR(0x59c3c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59c3cb:{NFSU2_TR(0x59c3cb);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3ce:{NFSU2_TR(0x59c3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c3d4:{NFSU2_TR(0x59c3d4);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3da:{NFSU2_TR(0x59c3da);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3e0:{NFSU2_TR(0x59c3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c3e3:{NFSU2_TR(0x59c3e3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c3e5:{NFSU2_TR(0x59c3e5);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3e8:{NFSU2_TR(0x59c3e8);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c3eb:{NFSU2_TR(0x59c3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c3f1:{NFSU2_TR(0x59c3f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59c3f3:{NFSU2_TR(0x59c3f3);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3f6:{NFSU2_TR(0x59c3f6);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3f9:{NFSU2_TR(0x59c3f9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c3fb:{NFSU2_TR(0x59c3fb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c3fd:{NFSU2_TR(0x59c3fd);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c3ff:{NFSU2_TR(0x59c3ff);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c401:{NFSU2_TR(0x59c401);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c403:{NFSU2_TR(0x59c403);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c405:{NFSU2_TR(0x59c405);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c407:{NFSU2_TR(0x59c407);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c409:{NFSU2_TR(0x59c409);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c40b:{NFSU2_TR(0x59c40b);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c40d:{NFSU2_TR(0x59c40d);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c40f:{NFSU2_TR(0x59c40f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c411:{NFSU2_TR(0x59c411);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c413:{NFSU2_TR(0x59c413);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c417:{NFSU2_TR(0x59c417);
if(r1(R+518)){{goto L59c466;}}
}
B59c419:L59c419:{c.instructions+=4;NFSU2_TR(0x59c419);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c41d:{NFSU2_TR(0x59c41d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c41e:{NFSU2_TR(0x59c41e);
w4(R+4,u32(0x7fc92cull));
}
B59c423:{NFSU2_TR(0x59c423);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c428ull));
TAIL_STATIC(0x5764d0u,576);
}
B59c428:L59c428:{c.instructions+=18;NFSU2_TR(0x59c428);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c42a:{NFSU2_TR(0x59c42a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c42c:{NFSU2_TR(0x59c42c);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c432:{NFSU2_TR(0x59c432);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c438:{NFSU2_TR(0x59c438);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c43a:{NFSU2_TR(0x59c43a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c43e:{NFSU2_TR(0x59c43e);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c444:{NFSU2_TR(0x59c444);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c446:{NFSU2_TR(0x59c446);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c44a:{NFSU2_TR(0x59c44a);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c44d:{NFSU2_TR(0x59c44d);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c450:{NFSU2_TR(0x59c450);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c452:{NFSU2_TR(0x59c452);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c456:{NFSU2_TR(0x59c456);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c459:{NFSU2_TR(0x59c459);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c45c:{NFSU2_TR(0x59c45c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c460:{NFSU2_TR(0x59c460);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c463:{NFSU2_TR(0x59c463);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c466:L59c466:{c.instructions+=23;NFSU2_TR(0x59c466);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c46c:{NFSU2_TR(0x59c46c);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c472:{NFSU2_TR(0x59c472);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c478:{NFSU2_TR(0x59c478);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c47a:{NFSU2_TR(0x59c47a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c47c:{NFSU2_TR(0x59c47c);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c47e:{NFSU2_TR(0x59c47e);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c480:{NFSU2_TR(0x59c480);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c482:{NFSU2_TR(0x59c482);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c484:{NFSU2_TR(0x59c484);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c486:{NFSU2_TR(0x59c486);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c488:{NFSU2_TR(0x59c488);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c48a:{NFSU2_TR(0x59c48a);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c48c:{NFSU2_TR(0x59c48c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c48e:{NFSU2_TR(0x59c48e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c490:{NFSU2_TR(0x59c490);
{u32 ea_=u32(u32(8002304u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c496:{NFSU2_TR(0x59c496);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c49a:{NFSU2_TR(0x59c49a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c49e:{NFSU2_TR(0x59c49e);
{u32 ea_=u32(u32(8002308u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c4a4:{NFSU2_TR(0x59c4a4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c4a8:{NFSU2_TR(0x59c4a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c4aa:{NFSU2_TR(0x59c4aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c4ad:{NFSU2_TR(0x59c4ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c4b5;}}
}
B59c4af:L59c4af:{c.instructions+=2;NFSU2_TR(0x59c4af);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c4b3:{NFSU2_TR(0x59c4b3);
{goto L59c4b7;}
}
B59c4b5:L59c4b5:{c.instructions+=1;NFSU2_TR(0x59c4b5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c4b7:L59c4b7:{c.instructions+=4;NFSU2_TR(0x59c4b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c4bb:{NFSU2_TR(0x59c4bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c4bc:{NFSU2_TR(0x59c4bc);
w4(R+4,u32(0x7fc940ull));
}
B59c4c1:{NFSU2_TR(0x59c4c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c4c6ull));
TAIL_STATIC(0x5764d0u,576);
}
B59c4c6:L59c4c6:{c.instructions+=4;NFSU2_TR(0x59c4c6);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c4cc:{NFSU2_TR(0x59c4cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c4ce:{NFSU2_TR(0x59c4ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c4d1:{NFSU2_TR(0x59c4d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c4dd;}}
}
B59c4d3:L59c4d3:{c.instructions+=3;NFSU2_TR(0x59c4d3);
__builtin_memmove((R+0),gp(0x7a1b10),4);
}
B59c4d8:{NFSU2_TR(0x59c4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c4db:{NFSU2_TR(0x59c4db);
{goto L59c4e8;}
}
B59c4dd:L59c4dd:{c.instructions+=3;NFSU2_TR(0x59c4dd);
{u32 ea_=u32(u32(8002324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c4e3:{NFSU2_TR(0x59c4e3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c4e5:{NFSU2_TR(0x59c4e5);
{u32 ea_=u32(r4(R+28)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c4e8:L59c4e8:{c.instructions+=3;NFSU2_TR(0x59c4e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c4ee:{NFSU2_TR(0x59c4ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59c4f0:{NFSU2_TR(0x59c4f0);
if(r1(R+518)){{goto L59c581;}}
}
B59c4f6:L59c4f6:{c.instructions+=40;NFSU2_TR(0x59c4f6);
{u32 ea_=u32(u32(8002316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c4fc:{NFSU2_TR(0x59c4fc);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c502:{NFSU2_TR(0x59c502);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c504:{NFSU2_TR(0x59c504);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c506:{NFSU2_TR(0x59c506);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c50c:{NFSU2_TR(0x59c50c);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c512:{NFSU2_TR(0x59c512);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c514:{NFSU2_TR(0x59c514);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c518:{NFSU2_TR(0x59c518);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c51e:{NFSU2_TR(0x59c51e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c520:{NFSU2_TR(0x59c520);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c524:{NFSU2_TR(0x59c524);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c527:{NFSU2_TR(0x59c527);
{u32 ea_=u32(r4(R+28)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c52a:{NFSU2_TR(0x59c52a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c52c:{NFSU2_TR(0x59c52c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c530:{NFSU2_TR(0x59c530);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c533:{NFSU2_TR(0x59c533);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c536:{NFSU2_TR(0x59c536);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c53a:{NFSU2_TR(0x59c53a);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c53d:{NFSU2_TR(0x59c53d);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c540:{NFSU2_TR(0x59c540);
{u32 ea_=u32(u32(8002312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c546:{NFSU2_TR(0x59c546);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c54c:{NFSU2_TR(0x59c54c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c54e:{NFSU2_TR(0x59c54e);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c550:{NFSU2_TR(0x59c550);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c553:{NFSU2_TR(0x59c553);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c556:{NFSU2_TR(0x59c556);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c558:{NFSU2_TR(0x59c558);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c55c:{NFSU2_TR(0x59c55c);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c55f:{NFSU2_TR(0x59c55f);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59c561:{NFSU2_TR(0x59c561);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c565:{NFSU2_TR(0x59c565);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c568:{NFSU2_TR(0x59c568);
{u32 ea_=u32(r4(R+28)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c56b:{NFSU2_TR(0x59c56b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c56d:{NFSU2_TR(0x59c56d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c571:{NFSU2_TR(0x59c571);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c574:{NFSU2_TR(0x59c574);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c577:{NFSU2_TR(0x59c577);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c57b:{NFSU2_TR(0x59c57b);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59c57e:{NFSU2_TR(0x59c57e);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c581:L59c581:{c.instructions+=5;NFSU2_TR(0x59c581);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c587:{NFSU2_TR(0x59c587);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c58d:{NFSU2_TR(0x59c58d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c58f:{NFSU2_TR(0x59c58f);
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
B59c592:{NFSU2_TR(0x59c592);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59c5b0;}}
}
B59c594:L59c594:{c.instructions+=5;NFSU2_TR(0x59c594);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c59a:{NFSU2_TR(0x59c59a);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c5a0:{NFSU2_TR(0x59c5a0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c5a2:{NFSU2_TR(0x59c5a2);
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
B59c5a5:{NFSU2_TR(0x59c5a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c5bb;}}
}
B59c5a7:L59c5a7:{c.instructions+=2;NFSU2_TR(0x59c5a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c5ad:{NFSU2_TR(0x59c5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c5b0:L59c5b0:{c.instructions+=7;NFSU2_TR(0x59c5b0);
__builtin_memmove((R+0),(R+28),4);
}
B59c5b2:{NFSU2_TR(0x59c5b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c5b3:{NFSU2_TR(0x59c5b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c5b4:{NFSU2_TR(0x59c5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c5b5:{NFSU2_TR(0x59c5b5);
__builtin_memmove((R+16),(R+20),4);
}
B59c5b7:{NFSU2_TR(0x59c5b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c5b8:{NFSU2_TR(0x59c5b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59c5bb:L59c5bb:{c.instructions+=7;NFSU2_TR(0x59c5bb);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c5c1:{NFSU2_TR(0x59c5c1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c5c3:{NFSU2_TR(0x59c5c3);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c5c9:{NFSU2_TR(0x59c5c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c5cb:{NFSU2_TR(0x59c5cb);
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
B59c5ce:{NFSU2_TR(0x59c5ce);
__builtin_memmove((R+0),(R+28),4);
}
B59c5d0:{NFSU2_TR(0x59c5d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c5de;}}
}
B59c5d2:L59c5d2:{c.instructions+=7;NFSU2_TR(0x59c5d2);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c5d5:{NFSU2_TR(0x59c5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c5d6:{NFSU2_TR(0x59c5d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c5d7:{NFSU2_TR(0x59c5d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c5d8:{NFSU2_TR(0x59c5d8);
__builtin_memmove((R+16),(R+20),4);
}
B59c5da:{NFSU2_TR(0x59c5da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c5db:{NFSU2_TR(0x59c5db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59c5de:L59c5de:{c.instructions+=7;NFSU2_TR(0x59c5de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c5df:{NFSU2_TR(0x59c5df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c5e1:{NFSU2_TR(0x59c5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c5e2:{NFSU2_TR(0x59c5e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c5e3:{NFSU2_TR(0x59c5e3);
__builtin_memmove((R+16),(R+20),4);
}
B59c5e5:{NFSU2_TR(0x59c5e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c5e6:{NFSU2_TR(0x59c5e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59c5f0:L59c5f0:{c.instructions+=41;NFSU2_TR(0x59c5f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c5f1:{NFSU2_TR(0x59c5f1);
__builtin_memmove((R+20),(R+16),4);
}
B59c5f3:{NFSU2_TR(0x59c5f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59c5f6:{NFSU2_TR(0x59c5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xe4ull))));
}
B59c5fc:{NFSU2_TR(0x59c5fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c5fd:{NFSU2_TR(0x59c5fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c5fe:{NFSU2_TR(0x59c5fe);
__builtin_memmove((R+24),(R+4),4);
}
B59c600:{NFSU2_TR(0x59c600);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c606:{NFSU2_TR(0x59c606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c609:{NFSU2_TR(0x59c609);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c60c:{NFSU2_TR(0x59c60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c610:{NFSU2_TR(0x59c610);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c612:{NFSU2_TR(0x59c612);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c613:{NFSU2_TR(0x59c613);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c616:{NFSU2_TR(0x59c616);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c61c:{NFSU2_TR(0x59c61c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c61e:{NFSU2_TR(0x59c61e);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c624:{NFSU2_TR(0x59c624);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c628:{NFSU2_TR(0x59c628);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c62a:{NFSU2_TR(0x59c62a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c630:{NFSU2_TR(0x59c630);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c632:{NFSU2_TR(0x59c632);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c638:{NFSU2_TR(0x59c638);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c63e:{NFSU2_TR(0x59c63e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c644:{NFSU2_TR(0x59c644);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c646:{NFSU2_TR(0x59c646);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c648:{NFSU2_TR(0x59c648);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c64a:{NFSU2_TR(0x59c64a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c64c:{NFSU2_TR(0x59c64c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c64e:{NFSU2_TR(0x59c64e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c650:{NFSU2_TR(0x59c650);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c652:{NFSU2_TR(0x59c652);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c654:{NFSU2_TR(0x59c654);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c656:{NFSU2_TR(0x59c656);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c658:{NFSU2_TR(0x59c658);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c65a:{NFSU2_TR(0x59c65a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c65c:{NFSU2_TR(0x59c65c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59c660:{NFSU2_TR(0x59c660);
{u32 ea_=u32(u32(8373996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c666:{NFSU2_TR(0x59c666);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c668:{NFSU2_TR(0x59c668);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c66b:{NFSU2_TR(0x59c66b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c6d1;}}
}
B59c66d:L59c66d:{c.instructions+=5;NFSU2_TR(0x59c66d);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c673:{NFSU2_TR(0x59c673);
{u32 ea_=u32(u32(8003208u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B59c679:{NFSU2_TR(0x59c679);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c67b:{NFSU2_TR(0x59c67b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c67e:{NFSU2_TR(0x59c67e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c6d1;}}
}
B59c680:L59c680:{c.instructions+=23;NFSU2_TR(0x59c680);
{u32 ea_=u32(u32(8373996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c686:{NFSU2_TR(0x59c686);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59c68a:{NFSU2_TR(0x59c68a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c68c:{NFSU2_TR(0x59c68c);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c68f:{NFSU2_TR(0x59c68f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c692:{NFSU2_TR(0x59c692);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c694:{NFSU2_TR(0x59c694);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c697:{NFSU2_TR(0x59c697);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c69a:{NFSU2_TR(0x59c69a);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c69d:{NFSU2_TR(0x59c69d);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6a0:{NFSU2_TR(0x59c6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c6a3:{NFSU2_TR(0x59c6a3);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6a9:{NFSU2_TR(0x59c6a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c6ad:{NFSU2_TR(0x59c6ad);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6b0:{NFSU2_TR(0x59c6b0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c6b2:{NFSU2_TR(0x59c6b2);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c6b5:{NFSU2_TR(0x59c6b5);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6bb:{NFSU2_TR(0x59c6bb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c6bd:{NFSU2_TR(0x59c6bd);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6c3:{NFSU2_TR(0x59c6c3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6c7:{NFSU2_TR(0x59c6c7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c6c9:{NFSU2_TR(0x59c6c9);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c6cf:{NFSU2_TR(0x59c6cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c6d1:L59c6d1:{c.instructions+=19;NFSU2_TR(0x59c6d1);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6d7:{NFSU2_TR(0x59c6d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c6dd:{NFSU2_TR(0x59c6dd);
{u32 ea_=u32(u32(8003204u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c6e3:{NFSU2_TR(0x59c6e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c6e7:{NFSU2_TR(0x59c6e7);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c6ed:{NFSU2_TR(0x59c6ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c6f0:{NFSU2_TR(0x59c6f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c6f4:{NFSU2_TR(0x59c6f4);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c6f6:{NFSU2_TR(0x59c6f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c6f7:{NFSU2_TR(0x59c6f7);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c6fd:{NFSU2_TR(0x59c6fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c6fe:{NFSU2_TR(0x59c6fe);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c704:{NFSU2_TR(0x59c704);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c706:{NFSU2_TR(0x59c706);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c70c:{NFSU2_TR(0x59c70c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c710:{NFSU2_TR(0x59c710);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c712:{NFSU2_TR(0x59c712);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c718:{NFSU2_TR(0x59c718);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c71a:{NFSU2_TR(0x59c71a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c71full));
TAIL_STATIC(0x43c9d0u,43c);
}
B59c71f:L59c71f:{c.instructions+=5;NFSU2_TR(0x59c71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59c725:{NFSU2_TR(0x59c725);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59c728:{NFSU2_TR(0x59c728);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59c72a:{NFSU2_TR(0x59c72a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c730:{NFSU2_TR(0x59c730);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c738;}}
}
B59c732:L59c732:{c.instructions+=1;NFSU2_TR(0x59c732);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c738:L59c738:{c.instructions+=5;NFSU2_TR(0x59c738);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c739:{NFSU2_TR(0x59c739);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c73d:{NFSU2_TR(0x59c73d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c73e:{NFSU2_TR(0x59c73e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c73f:{NFSU2_TR(0x59c73f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c744ull));
TAIL_STATIC(0x43c990u,43c);
}
B59c744:L59c744:{c.instructions+=7;NFSU2_TR(0x59c744);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59c748:{NFSU2_TR(0x59c748);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c749:{NFSU2_TR(0x59c749);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c750:{NFSU2_TR(0x59c750);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c751:{NFSU2_TR(0x59c751);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c758:{NFSU2_TR(0x59c758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c759:{NFSU2_TR(0x59c759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c75eull));
TAIL_STATIC(0x43c990u,43c);
}
B59c75e:L59c75e:{c.instructions+=7;NFSU2_TR(0x59c75e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59c764:{NFSU2_TR(0x59c764);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c765:{NFSU2_TR(0x59c765);
u8 U[4];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c76c:{NFSU2_TR(0x59c76c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c76d:{NFSU2_TR(0x59c76d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c773:{NFSU2_TR(0x59c773);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c774:{NFSU2_TR(0x59c774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c779ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59c779:L59c779:{c.instructions+=20;NFSU2_TR(0x59c779);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c77c:{NFSU2_TR(0x59c77c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c77f:{NFSU2_TR(0x59c77f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B59c782:{NFSU2_TR(0x59c782);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c784:{NFSU2_TR(0x59c784);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59c786:{NFSU2_TR(0x59c786);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c788:{NFSU2_TR(0x59c788);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59c78a:{NFSU2_TR(0x59c78a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59c78c:{NFSU2_TR(0x59c78c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c78e:{NFSU2_TR(0x59c78e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59c790:{NFSU2_TR(0x59c790);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59c792:{NFSU2_TR(0x59c792);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59c794:{NFSU2_TR(0x59c794);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59c796:{NFSU2_TR(0x59c796);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B59c798:{NFSU2_TR(0x59c798);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c79a:{NFSU2_TR(0x59c79a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c79c:{NFSU2_TR(0x59c79c);
{u32 ea_=u32(u32(8002332u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59c7a2:{NFSU2_TR(0x59c7a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c7a4:{NFSU2_TR(0x59c7a4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59c7a7:{NFSU2_TR(0x59c7a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c7cd;}}
}
B59c7a9:L59c7a9:{c.instructions+=12;NFSU2_TR(0x59c7a9);
{u32 ea_=u32(u32(8002332u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59c7af:{NFSU2_TR(0x59c7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c7b2:{NFSU2_TR(0x59c7b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c7b6:{NFSU2_TR(0x59c7b6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7b9:{NFSU2_TR(0x59c7b9);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59c7bb:{NFSU2_TR(0x59c7bb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c7bd:{NFSU2_TR(0x59c7bd);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c7bf:{NFSU2_TR(0x59c7bf);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c7c1:{NFSU2_TR(0x59c7c1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c7c4:{NFSU2_TR(0x59c7c4);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7c8:{NFSU2_TR(0x59c7c8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59c7ca:{NFSU2_TR(0x59c7ca);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c7cd:L59c7cd:{c.instructions+=6;NFSU2_TR(0x59c7cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59c7cf:{NFSU2_TR(0x59c7cf);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7d5:{NFSU2_TR(0x59c7d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c7db:{NFSU2_TR(0x59c7db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c7dd:{NFSU2_TR(0x59c7dd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59c7e0:{NFSU2_TR(0x59c7e0);
if(r1(R+514)){{goto L59c7ec;}}
}
B59c7e2:L59c7e2:{c.instructions+=3;NFSU2_TR(0x59c7e2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59c7e4:{NFSU2_TR(0x59c7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c7ea:{NFSU2_TR(0x59c7ea);
{goto L59c7ee;}
}
B59c7ec:L59c7ec:{c.instructions+=1;NFSU2_TR(0x59c7ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59c7ee:L59c7ee:{c.instructions+=67;NFSU2_TR(0x59c7ee);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7f1:{NFSU2_TR(0x59c7f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c7f4:{NFSU2_TR(0x59c7f4);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c7f7:{NFSU2_TR(0x59c7f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59c7f9:{NFSU2_TR(0x59c7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c7ff:{NFSU2_TR(0x59c7ff);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c801:{NFSU2_TR(0x59c801);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c807:{NFSU2_TR(0x59c807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c80d:{NFSU2_TR(0x59c80d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c811:{NFSU2_TR(0x59c811);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c817:{NFSU2_TR(0x59c817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c81a:{NFSU2_TR(0x59c81a);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c81d:{NFSU2_TR(0x59c81d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c820:{NFSU2_TR(0x59c820);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c823:{NFSU2_TR(0x59c823);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c829:{NFSU2_TR(0x59c829);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c82f:{NFSU2_TR(0x59c82f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c831:{NFSU2_TR(0x59c831);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c837:{NFSU2_TR(0x59c837);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c83b:{NFSU2_TR(0x59c83b);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c841:{NFSU2_TR(0x59c841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c844:{NFSU2_TR(0x59c844);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c847:{NFSU2_TR(0x59c847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c84a:{NFSU2_TR(0x59c84a);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c84d:{NFSU2_TR(0x59c84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c853:{NFSU2_TR(0x59c853);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c859:{NFSU2_TR(0x59c859);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c85b:{NFSU2_TR(0x59c85b);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c861:{NFSU2_TR(0x59c861);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c865:{NFSU2_TR(0x59c865);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c86b:{NFSU2_TR(0x59c86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c86e:{NFSU2_TR(0x59c86e);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c871:{NFSU2_TR(0x59c871);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c874:{NFSU2_TR(0x59c874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c87a:{NFSU2_TR(0x59c87a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c87c:{NFSU2_TR(0x59c87c);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c882:{NFSU2_TR(0x59c882);
{u32 ea_=u32(r4(R+24)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c888:{NFSU2_TR(0x59c888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c892:{NFSU2_TR(0x59c892);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c898:{NFSU2_TR(0x59c898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59c89e:{NFSU2_TR(0x59c89e);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8a4:{NFSU2_TR(0x59c8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8aa:{NFSU2_TR(0x59c8aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c8ac:{NFSU2_TR(0x59c8ac);
__builtin_memmove((R+8),(R+0),4);
}
B59c8ae:{NFSU2_TR(0x59c8ae);
{u32 ea_=u32(r4(R+24)+u32(308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8b4:{NFSU2_TR(0x59c8b4);
{u32 ea_=u32(r4(R+24)+u32(312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8ba:{NFSU2_TR(0x59c8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59c8c0:{NFSU2_TR(0x59c8c0);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8c6:{NFSU2_TR(0x59c8c6);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8cc:{NFSU2_TR(0x59c8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8d2:{NFSU2_TR(0x59c8d2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c8d4:{NFSU2_TR(0x59c8d4);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8da:{NFSU2_TR(0x59c8da);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c8e0:{NFSU2_TR(0x59c8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8e6:{NFSU2_TR(0x59c8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8ec:{NFSU2_TR(0x59c8ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c8f2:{NFSU2_TR(0x59c8f2);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8f8:{NFSU2_TR(0x59c8f8);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c8fe:{NFSU2_TR(0x59c8fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59c904:{NFSU2_TR(0x59c904);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59c906:{NFSU2_TR(0x59c906);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c90c:{NFSU2_TR(0x59c90c);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c912:{NFSU2_TR(0x59c912);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c918:{NFSU2_TR(0x59c918);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59c91e:{NFSU2_TR(0x59c91e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59c920:{NFSU2_TR(0x59c920);
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
B59c923:{NFSU2_TR(0x59c923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59c970;}}
}
B59c925:L59c925:{c.instructions+=15;NFSU2_TR(0x59c925);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59c92b:{NFSU2_TR(0x59c92b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59c92f:{NFSU2_TR(0x59c92f);
{u32 ea_=u32(r4(R+24)+u32(352u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59c935:{NFSU2_TR(0x59c935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c936:{NFSU2_TR(0x59c936);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59c93a:{NFSU2_TR(0x59c93a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c93b:{NFSU2_TR(0x59c93b);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B59c93d:{NFSU2_TR(0x59c93d);
__builtin_memmove((R+4),(R+24),4);
}
B59c93f:{NFSU2_TR(0x59c93f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59c943:{NFSU2_TR(0x59c943);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c94b:{NFSU2_TR(0x59c94b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c953:{NFSU2_TR(0x59c953);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c95b:{NFSU2_TR(0x59c95b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c963:{NFSU2_TR(0x59c963);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59c96b:{NFSU2_TR(0x59c96b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c970ull));
TAIL_STATIC(0x59bb00u,59b);
}
B59c970:L59c970:{c.instructions+=6;NFSU2_TR(0x59c970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59c971:{NFSU2_TR(0x59c971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59c972:{NFSU2_TR(0x59c972);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59c973:{NFSU2_TR(0x59c973);
__builtin_memmove((R+16),(R+20),4);
}
B59c975:{NFSU2_TR(0x59c975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59c976:{NFSU2_TR(0x59c976);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59c980:L59c980:{c.instructions+=8;NFSU2_TR(0x59c980);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c981:{NFSU2_TR(0x59c981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59c985:{NFSU2_TR(0x59c985);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c986:{NFSU2_TR(0x59c986);
u8 U[4];
w4(U+0,u32(0x7a1e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c98b:{NFSU2_TR(0x59c98b);
__builtin_memmove((R+24),(R+4),4);
}
B59c98d:{NFSU2_TR(0x59c98d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c98f:{NFSU2_TR(0x59c98f);
__builtin_memmove((R+4),(R+12),4);
}
B59c991:{NFSU2_TR(0x59c991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c996ull));
TAIL_STATIC(0x578ce0u,578);
}
B59c996:L59c996:{c.instructions+=4;NFSU2_TR(0x59c996);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c999:{NFSU2_TR(0x59c999);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c99a:{NFSU2_TR(0x59c99a);
__builtin_memmove((R+4),(R+12),4);
}
B59c99c:{NFSU2_TR(0x59c99c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9a1ull));
TAIL_STATIC(0x571770u,571);
}
B59c9a1:L59c9a1:{c.instructions+=4;NFSU2_TR(0x59c9a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59c9a4:{NFSU2_TR(0x59c9a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9a5:{NFSU2_TR(0x59c9a5);
__builtin_memmove((R+4),(R+12),4);
}
B59c9a7:{NFSU2_TR(0x59c9a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9acull));
TAIL_STATIC(0x571770u,571);
}
B59c9ac:L59c9ac:{c.instructions+=4;NFSU2_TR(0x59c9ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59c9b2:{NFSU2_TR(0x59c9b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9b3:{NFSU2_TR(0x59c9b3);
__builtin_memmove((R+4),(R+12),4);
}
B59c9b5:{NFSU2_TR(0x59c9b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9baull));
TAIL_STATIC(0x571770u,571);
}
B59c9ba:L59c9ba:{c.instructions+=4;NFSU2_TR(0x59c9ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c9c0:{NFSU2_TR(0x59c9c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9c1:{NFSU2_TR(0x59c9c1);
__builtin_memmove((R+4),(R+12),4);
}
B59c9c3:{NFSU2_TR(0x59c9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9c8ull));
TAIL_STATIC(0x571770u,571);
}
B59c9c8:L59c9c8:{c.instructions+=4;NFSU2_TR(0x59c9c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59c9ce:{NFSU2_TR(0x59c9ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9cf:{NFSU2_TR(0x59c9cf);
__builtin_memmove((R+4),(R+12),4);
}
B59c9d1:{NFSU2_TR(0x59c9d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9d6ull));
TAIL_STATIC(0x571770u,571);
}
B59c9d6:L59c9d6:{c.instructions+=4;NFSU2_TR(0x59c9d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59c9dc:{NFSU2_TR(0x59c9dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9dd:{NFSU2_TR(0x59c9dd);
__builtin_memmove((R+4),(R+12),4);
}
B59c9df:{NFSU2_TR(0x59c9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9e4ull));
TAIL_STATIC(0x5716c0u,571);
}
B59c9e4:L59c9e4:{c.instructions+=4;NFSU2_TR(0x59c9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59c9ea:{NFSU2_TR(0x59c9ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9eb:{NFSU2_TR(0x59c9eb);
__builtin_memmove((R+4),(R+12),4);
}
B59c9ed:{NFSU2_TR(0x59c9ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59c9f2ull));
TAIL_STATIC(0x571770u,571);
}
B59c9f2:L59c9f2:{c.instructions+=7;NFSU2_TR(0x59c9f2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9f4:{NFSU2_TR(0x59c9f4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9f6:{NFSU2_TR(0x59c9f6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9f8:{NFSU2_TR(0x59c9f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59c9fe:{NFSU2_TR(0x59c9fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59c9ff:{NFSU2_TR(0x59c9ff);
__builtin_memmove((R+4),(R+12),4);
}
B59ca01:{NFSU2_TR(0x59ca01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ca06ull));
TAIL_STATIC(0x571640u,571);
}
B59ca06:L59ca06:{c.instructions+=3;NFSU2_TR(0x59ca06);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59ca09:{NFSU2_TR(0x59ca09);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B59ca0c:{NFSU2_TR(0x59ca0c);
if(r1(R+518)){{goto L59cb76;}}
}
B59ca12:L59ca12:{c.instructions+=4;NFSU2_TR(0x59ca12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59ca14:{NFSU2_TR(0x59ca14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ca15:{NFSU2_TR(0x59ca15);
w4(R+4,u32(0x10ull));
}
B59ca1a:{NFSU2_TR(0x59ca1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ca1d:L59ca1d:{c.instructions+=1;NFSU2_TR(0x59ca1d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L59ca1f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ca1du);}goto L59ca1d;}
}
B59ca1f:L59ca1f:{c.instructions+=2;NFSU2_TR(0x59ca1f);
w4(R+4,u32(0x10ull));
}
B59ca24:{NFSU2_TR(0x59ca24);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ca27:L59ca27:{c.instructions+=1;NFSU2_TR(0x59ca27);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L59ca29;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ca27u);}goto L59ca27;}
}
B59ca29:L59ca29:{c.instructions+=3;NFSU2_TR(0x59ca29);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59ca2b:{NFSU2_TR(0x59ca2b);
w4(R+4,u32(0x10ull));
}
B59ca30:{NFSU2_TR(0x59ca30);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59ca36:L59ca36:{c.instructions+=1;NFSU2_TR(0x59ca36);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L59ca38;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59ca36u);}goto L59ca36;}
}
B59ca38:L59ca38:{c.instructions+=61;NFSU2_TR(0x59ca38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59ca3e:{NFSU2_TR(0x59ca3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B59ca40:{NFSU2_TR(0x59ca40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca43:{NFSU2_TR(0x59ca43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca46:{NFSU2_TR(0x59ca46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca49:{NFSU2_TR(0x59ca49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59ca4f:{NFSU2_TR(0x59ca4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B59ca51:{NFSU2_TR(0x59ca51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca54:{NFSU2_TR(0x59ca54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca5a:{NFSU2_TR(0x59ca5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59ca64:{NFSU2_TR(0x59ca64);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59ca66:{NFSU2_TR(0x59ca66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59ca6c:{NFSU2_TR(0x59ca6c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B59ca72:{NFSU2_TR(0x59ca72);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B59ca74:{NFSU2_TR(0x59ca74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59ca7a:{NFSU2_TR(0x59ca7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B59ca7c:{NFSU2_TR(0x59ca7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca7f:{NFSU2_TR(0x59ca7f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59ca85:{NFSU2_TR(0x59ca85);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B59ca87:{NFSU2_TR(0x59ca87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca8a:{NFSU2_TR(0x59ca8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca8d:{NFSU2_TR(0x59ca8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca90:{NFSU2_TR(0x59ca90);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B59ca92:{NFSU2_TR(0x59ca92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59ca98:{NFSU2_TR(0x59ca98);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59ca9a:{NFSU2_TR(0x59ca9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59ca9d:{NFSU2_TR(0x59ca9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59caa0:{NFSU2_TR(0x59caa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59caa3:{NFSU2_TR(0x59caa3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59caa5:{NFSU2_TR(0x59caa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59caab:{NFSU2_TR(0x59caab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B59caad:{NFSU2_TR(0x59caad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cab0:{NFSU2_TR(0x59cab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cab3:{NFSU2_TR(0x59cab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cab6:{NFSU2_TR(0x59cab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59cabc:{NFSU2_TR(0x59cabc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59cac3:{NFSU2_TR(0x59cac3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B59cacc:{NFSU2_TR(0x59cacc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cad6:{NFSU2_TR(0x59cad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cae0:{NFSU2_TR(0x59cae0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cae6:{NFSU2_TR(0x59cae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59caf0:{NFSU2_TR(0x59caf0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x161ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59caf6:{NFSU2_TR(0x59caf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x162ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59cafc:{NFSU2_TR(0x59cafc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb06:{NFSU2_TR(0x59cb06);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x164ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cb0c:{NFSU2_TR(0x59cb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb16:{NFSU2_TR(0x59cb16);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+0),(U+0),4);
}
B59cb1c:{NFSU2_TR(0x59cb1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59cb22:{NFSU2_TR(0x59cb22);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cb28:{NFSU2_TR(0x59cb28);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((R+0),(U+0),4);
}
B59cb2e:{NFSU2_TR(0x59cb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb38:{NFSU2_TR(0x59cb38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59cb3e:{NFSU2_TR(0x59cb3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb48:{NFSU2_TR(0x59cb48);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59cb4e:{NFSU2_TR(0x59cb4e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x174ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59cb54:{NFSU2_TR(0x59cb54);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B59cb5a:{NFSU2_TR(0x59cb5a);
w4(R+0,u32(0x3f800000ull));
}
B59cb5f:{NFSU2_TR(0x59cb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cb65:{NFSU2_TR(0x59cb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cb6b:{NFSU2_TR(0x59cb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59cb75:{NFSU2_TR(0x59cb75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59cb76:L59cb76:{c.instructions+=2;NFSU2_TR(0x59cb76);
__builtin_memmove((R+4),(R+12),4);
}
B59cb78:{NFSU2_TR(0x59cb78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59cb7dull));
TAIL_STATIC(0x578d90u,578);
}
B59cb7d:L59cb7d:{c.instructions+=3;NFSU2_TR(0x59cb7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59cb7e:{NFSU2_TR(0x59cb7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59cb7f:{NFSU2_TR(0x59cb7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59cb90:L59cb90:{c.instructions+=27;NFSU2_TR(0x59cb90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cb91:{NFSU2_TR(0x59cb91);
__builtin_memmove((R+20),(R+16),4);
}
B59cb93:{NFSU2_TR(0x59cb93);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59cb96:{NFSU2_TR(0x59cb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B59cb9c:{NFSU2_TR(0x59cb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59cb9f:{NFSU2_TR(0x59cb9f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cba2:{NFSU2_TR(0x59cba2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cba3:{NFSU2_TR(0x59cba3);
__builtin_memmove((R+12),(R+4),4);
}
B59cba5:{NFSU2_TR(0x59cba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59cba8:{NFSU2_TR(0x59cba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59cbab:{NFSU2_TR(0x59cbab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cbac:{NFSU2_TR(0x59cbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59cbaf:{NFSU2_TR(0x59cbaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B59cbb3:{NFSU2_TR(0x59cbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cbb6:{NFSU2_TR(0x59cbb6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cbb7:{NFSU2_TR(0x59cbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59cbba:{NFSU2_TR(0x59cbba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cbbd:{NFSU2_TR(0x59cbbd);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ceull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B59cbc4:{NFSU2_TR(0x59cbc4);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cbcb:{NFSU2_TR(0x59cbcb);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbce:{NFSU2_TR(0x59cbce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cbcf:{NFSU2_TR(0x59cbcf);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cbd6:{NFSU2_TR(0x59cbd6);
__builtin_memmove((R+4),(R+28),4);
}
B59cbd8:{NFSU2_TR(0x59cbd8);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbdb:{NFSU2_TR(0x59cbdb);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cbdf:{NFSU2_TR(0x59cbdf);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+28)+u32(832u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cbe6:{NFSU2_TR(0x59cbe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59cbebull));
TAIL_STATIC(0x5921b0u,592);
}
B59cbeb:L59cbeb:{c.instructions+=5;NFSU2_TR(0x59cbeb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59cbee:{NFSU2_TR(0x59cbee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cbef:{NFSU2_TR(0x59cbef);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59cbf3:{NFSU2_TR(0x59cbf3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cbf4:{NFSU2_TR(0x59cbf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59cbf9ull));
TAIL_STATIC(0x4012b0u,401);
}
B59cbf9:L59cbf9:{c.instructions+=196;NFSU2_TR(0x59cbf9);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbfc:{NFSU2_TR(0x59cbfc);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cbff:{NFSU2_TR(0x59cbff);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+24),4);
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+24))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B59cc02:{NFSU2_TR(0x59cc02);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc05:{NFSU2_TR(0x59cc05);
u8 U[12];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B59cc0c:{NFSU2_TR(0x59cc0c);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc10:{NFSU2_TR(0x59cc10);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59cc12:{NFSU2_TR(0x59cc12);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc15:{NFSU2_TR(0x59cc15);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc19:{NFSU2_TR(0x59cc19);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc1c:{NFSU2_TR(0x59cc1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc1e:{NFSU2_TR(0x59cc1e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc22:{NFSU2_TR(0x59cc22);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc24:{NFSU2_TR(0x59cc24);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc26:{NFSU2_TR(0x59cc26);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc2a:{NFSU2_TR(0x59cc2a);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc2d:{NFSU2_TR(0x59cc2d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc2f:{NFSU2_TR(0x59cc2f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc33:{NFSU2_TR(0x59cc33);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59cc35:{NFSU2_TR(0x59cc35);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc38:{NFSU2_TR(0x59cc38);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc3c:{NFSU2_TR(0x59cc3c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc3f:{NFSU2_TR(0x59cc3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc41:{NFSU2_TR(0x59cc41);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc45:{NFSU2_TR(0x59cc45);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc47:{NFSU2_TR(0x59cc47);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc49:{NFSU2_TR(0x59cc49);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc4d:{NFSU2_TR(0x59cc4d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc50:{NFSU2_TR(0x59cc50);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc52:{NFSU2_TR(0x59cc52);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc56:{NFSU2_TR(0x59cc56);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc5a:{NFSU2_TR(0x59cc5a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc5d:{NFSU2_TR(0x59cc5d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc61:{NFSU2_TR(0x59cc61);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc63:{NFSU2_TR(0x59cc63);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc65:{NFSU2_TR(0x59cc65);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc69:{NFSU2_TR(0x59cc69);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc6c:{NFSU2_TR(0x59cc6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc6e:{NFSU2_TR(0x59cc6e);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc72:{NFSU2_TR(0x59cc72);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc75:{NFSU2_TR(0x59cc75);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc77:{NFSU2_TR(0x59cc77);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cc7e:{NFSU2_TR(0x59cc7e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc82:{NFSU2_TR(0x59cc82);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc85:{NFSU2_TR(0x59cc85);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc89:{NFSU2_TR(0x59cc89);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc8b:{NFSU2_TR(0x59cc8b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc8d:{NFSU2_TR(0x59cc8d);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cc91:{NFSU2_TR(0x59cc91);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cc94:{NFSU2_TR(0x59cc94);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cc96:{NFSU2_TR(0x59cc96);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cc99:{NFSU2_TR(0x59cc99);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cca0:{NFSU2_TR(0x59cca0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cca4:{NFSU2_TR(0x59cca4);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cca7:{NFSU2_TR(0x59cca7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccab:{NFSU2_TR(0x59ccab);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccae:{NFSU2_TR(0x59ccae);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccb0:{NFSU2_TR(0x59ccb0);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59ccb2:{NFSU2_TR(0x59ccb2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccb5:{NFSU2_TR(0x59ccb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccb7:{NFSU2_TR(0x59ccb7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccbb:{NFSU2_TR(0x59ccbb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccbe:{NFSU2_TR(0x59ccbe);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccc0:{NFSU2_TR(0x59ccc0);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ccc7:{NFSU2_TR(0x59ccc7);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cccb:{NFSU2_TR(0x59cccb);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccce:{NFSU2_TR(0x59ccce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccd2:{NFSU2_TR(0x59ccd2);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccd5:{NFSU2_TR(0x59ccd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccd7:{NFSU2_TR(0x59ccd7);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccdb:{NFSU2_TR(0x59ccdb);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccde:{NFSU2_TR(0x59ccde);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cce0:{NFSU2_TR(0x59cce0);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59cce2:{NFSU2_TR(0x59cce2);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cce5:{NFSU2_TR(0x59cce5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cce7:{NFSU2_TR(0x59cce7);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ccee:{NFSU2_TR(0x59ccee);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccf2:{NFSU2_TR(0x59ccf2);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccf5:{NFSU2_TR(0x59ccf5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ccf9:{NFSU2_TR(0x59ccf9);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ccfc:{NFSU2_TR(0x59ccfc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ccfe:{NFSU2_TR(0x59ccfe);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd02:{NFSU2_TR(0x59cd02);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd05:{NFSU2_TR(0x59cd05);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd07:{NFSU2_TR(0x59cd07);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd0b:{NFSU2_TR(0x59cd0b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd0e:{NFSU2_TR(0x59cd0e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd10:{NFSU2_TR(0x59cd10);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd17:{NFSU2_TR(0x59cd17);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd1b:{NFSU2_TR(0x59cd1b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd1e:{NFSU2_TR(0x59cd1e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd22:{NFSU2_TR(0x59cd22);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd25:{NFSU2_TR(0x59cd25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd27:{NFSU2_TR(0x59cd27);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd2b:{NFSU2_TR(0x59cd2b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd2e:{NFSU2_TR(0x59cd2e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd30:{NFSU2_TR(0x59cd30);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cd33:{NFSU2_TR(0x59cd33);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd3a:{NFSU2_TR(0x59cd3a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd3e:{NFSU2_TR(0x59cd3e);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd41:{NFSU2_TR(0x59cd41);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd45:{NFSU2_TR(0x59cd45);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd48:{NFSU2_TR(0x59cd48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd4a:{NFSU2_TR(0x59cd4a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59cd4c:{NFSU2_TR(0x59cd4c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd4f:{NFSU2_TR(0x59cd4f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd51:{NFSU2_TR(0x59cd51);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd55:{NFSU2_TR(0x59cd55);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd58:{NFSU2_TR(0x59cd58);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd5a:{NFSU2_TR(0x59cd5a);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd61:{NFSU2_TR(0x59cd61);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd65:{NFSU2_TR(0x59cd65);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd68:{NFSU2_TR(0x59cd68);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd6c:{NFSU2_TR(0x59cd6c);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd6f:{NFSU2_TR(0x59cd6f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd71:{NFSU2_TR(0x59cd71);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd75:{NFSU2_TR(0x59cd75);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd78:{NFSU2_TR(0x59cd78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd7a:{NFSU2_TR(0x59cd7a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59cd7c:{NFSU2_TR(0x59cd7c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd7f:{NFSU2_TR(0x59cd7f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd81:{NFSU2_TR(0x59cd81);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cd88:{NFSU2_TR(0x59cd88);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd8c:{NFSU2_TR(0x59cd8c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd8f:{NFSU2_TR(0x59cd8f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd93:{NFSU2_TR(0x59cd93);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd96:{NFSU2_TR(0x59cd96);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cd98:{NFSU2_TR(0x59cd98);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cd9c:{NFSU2_TR(0x59cd9c);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cd9f:{NFSU2_TR(0x59cd9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cda1:{NFSU2_TR(0x59cda1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cda5:{NFSU2_TR(0x59cda5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cda8:{NFSU2_TR(0x59cda8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cdaa:{NFSU2_TR(0x59cdaa);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cdb1:{NFSU2_TR(0x59cdb1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdb5:{NFSU2_TR(0x59cdb5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdb8:{NFSU2_TR(0x59cdb8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdbc:{NFSU2_TR(0x59cdbc);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdbf:{NFSU2_TR(0x59cdbf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cdc1:{NFSU2_TR(0x59cdc1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdc5:{NFSU2_TR(0x59cdc5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdc8:{NFSU2_TR(0x59cdc8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cdca:{NFSU2_TR(0x59cdca);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cdcd:{NFSU2_TR(0x59cdcd);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cdd4:{NFSU2_TR(0x59cdd4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdd8:{NFSU2_TR(0x59cdd8);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cddb:{NFSU2_TR(0x59cddb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cddf:{NFSU2_TR(0x59cddf);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cde2:{NFSU2_TR(0x59cde2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59cde4:{NFSU2_TR(0x59cde4);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59cde6:{NFSU2_TR(0x59cde6);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cde9:{NFSU2_TR(0x59cde9);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B59cdeb:{NFSU2_TR(0x59cdeb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cdef:{NFSU2_TR(0x59cdef);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59cdf2:{NFSU2_TR(0x59cdf2);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B59cdf4:{NFSU2_TR(0x59cdf4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59cdf6:{NFSU2_TR(0x59cdf6);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cdfd:{NFSU2_TR(0x59cdfd);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce01:{NFSU2_TR(0x59ce01);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce04:{NFSU2_TR(0x59ce04);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce08:{NFSU2_TR(0x59ce08);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce0b:{NFSU2_TR(0x59ce0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ce0f:{NFSU2_TR(0x59ce0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ce10:{NFSU2_TR(0x59ce10);
u8 U[4];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ce17:{NFSU2_TR(0x59ce17);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce19:{NFSU2_TR(0x59ce19);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce1d:{NFSU2_TR(0x59ce1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ce1e:{NFSU2_TR(0x59ce1e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce21:{NFSU2_TR(0x59ce21);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce23:{NFSU2_TR(0x59ce23);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59ce25:{NFSU2_TR(0x59ce25);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce28:{NFSU2_TR(0x59ce28);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce2a:{NFSU2_TR(0x59ce2a);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ce31:{NFSU2_TR(0x59ce31);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce35:{NFSU2_TR(0x59ce35);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce38:{NFSU2_TR(0x59ce38);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce3c:{NFSU2_TR(0x59ce3c);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce3f:{NFSU2_TR(0x59ce3f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce41:{NFSU2_TR(0x59ce41);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce45:{NFSU2_TR(0x59ce45);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce48:{NFSU2_TR(0x59ce48);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce4a:{NFSU2_TR(0x59ce4a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce4e:{NFSU2_TR(0x59ce4e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce51:{NFSU2_TR(0x59ce51);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce53:{NFSU2_TR(0x59ce53);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ce5a:{NFSU2_TR(0x59ce5a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce5e:{NFSU2_TR(0x59ce5e);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce61:{NFSU2_TR(0x59ce61);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce65:{NFSU2_TR(0x59ce65);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce68:{NFSU2_TR(0x59ce68);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce6a:{NFSU2_TR(0x59ce6a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ce6e:{NFSU2_TR(0x59ce6e);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59ce71:{NFSU2_TR(0x59ce71);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59ce73:{NFSU2_TR(0x59ce73);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ce76:{NFSU2_TR(0x59ce76);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ce7d:{NFSU2_TR(0x59ce7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ce82ull));
TAIL_STATIC(0x4012b0u,401);
}
B59ce82:L59ce82:{c.instructions+=4;NFSU2_TR(0x59ce82);
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
B59ce85:{NFSU2_TR(0x59ce85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ce86:{NFSU2_TR(0x59ce86);
__builtin_memmove((R+4),(R+12),4);
}
B59ce88:{NFSU2_TR(0x59ce88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ce8dull));
TAIL_STATIC(0x591480u,591);
}
B59ce8d:L59ce8d:{c.instructions+=4;NFSU2_TR(0x59ce8d);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ce94:{NFSU2_TR(0x59ce94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ce95:{NFSU2_TR(0x59ce95);
__builtin_memmove((R+4),(R+12),4);
}
B59ce97:{NFSU2_TR(0x59ce97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ce9cull));
TAIL_STATIC(0x5913d0u,591);
}
B59ce9c:L59ce9c:{c.instructions+=16;NFSU2_TR(0x59ce9c);
{u32 ea_=u32(r4(R+16)+u32(272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cea3:{NFSU2_TR(0x59cea3);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59cea6:{NFSU2_TR(0x59cea6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59ceac:{NFSU2_TR(0x59ceac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cead:{NFSU2_TR(0x59cead);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ceb4:{NFSU2_TR(0x59ceb4);
{u32 ea_=u32(r4(R+16)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cebb:{NFSU2_TR(0x59cebb);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cebe:{NFSU2_TR(0x59cebe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cebf:{NFSU2_TR(0x59cebf);
{u32 ea_=u32(r4(R+16)+u32(284u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59cec6:{NFSU2_TR(0x59cec6);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ceca:{NFSU2_TR(0x59ceca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cecb:{NFSU2_TR(0x59cecb);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ced2:{NFSU2_TR(0x59ced2);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ced5:{NFSU2_TR(0x59ced5);
{u32 ea_=u32(r4(R+16)+u32(292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59cedc:{NFSU2_TR(0x59cedc);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cee3:{NFSU2_TR(0x59cee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59cee8ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59cee8:L59cee8:{c.instructions+=28;NFSU2_TR(0x59cee8);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ceec:{NFSU2_TR(0x59ceec);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59ceef:{NFSU2_TR(0x59ceef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59cef2:{NFSU2_TR(0x59cef2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59cef6:{NFSU2_TR(0x59cef6);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cef9:{NFSU2_TR(0x59cef9);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59cf00:{NFSU2_TR(0x59cf00);
u8 U[8];
w4(U+0,u32(u32(u32(0x110ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59cf07:{NFSU2_TR(0x59cf07);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cf0b:{NFSU2_TR(0x59cf0b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cf0d:{NFSU2_TR(0x59cf0d);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf14:{NFSU2_TR(0x59cf14);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59cf18:{NFSU2_TR(0x59cf18);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59cf1c:{NFSU2_TR(0x59cf1c);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59cf1f:{NFSU2_TR(0x59cf1f);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf26:{NFSU2_TR(0x59cf26);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cf2a:{NFSU2_TR(0x59cf2a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cf2e:{NFSU2_TR(0x59cf2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59cf32:{NFSU2_TR(0x59cf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf38:{NFSU2_TR(0x59cf38);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59cf3a:{NFSU2_TR(0x59cf3a);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59cf41:{NFSU2_TR(0x59cf41);
{u32 ea_=u32(r4(R+12)+u32(240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cf47:{NFSU2_TR(0x59cf47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cf48:{NFSU2_TR(0x59cf48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cf49:{NFSU2_TR(0x59cf49);
{u32 ea_=u32(r4(R+12)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cf4f:{NFSU2_TR(0x59cf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59cf52:{NFSU2_TR(0x59cf52);
u8 U[4];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59cf59:{NFSU2_TR(0x59cf59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59cf5a:{NFSU2_TR(0x59cf5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59cf5full));
TAIL_STATIC(0x5e7e70u,5e7);
}
B59cf5f:L59cf5f:{c.instructions+=5;NFSU2_TR(0x59cf5f);
{u32 ea_=u32(r4(R+12)+u32(396u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59cf65:{NFSU2_TR(0x59cf65);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B59cf6a:{NFSU2_TR(0x59cf6a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59cf6c:{NFSU2_TR(0x59cf6c);
w4(R+8,u32(0x1ull));
}
B59cf71:{NFSU2_TR(0x59cf71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59cf8e;}}
}
B59cf73:L59cf73:{c.instructions+=3;NFSU2_TR(0x59cf73);
__builtin_memmove((R+0),gp(0x890108),4);
}
B59cf78:{NFSU2_TR(0x59cf78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59cf7a:{NFSU2_TR(0x59cf7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59cf8e;}}
}
B59cf7c:L59cf7c:{c.instructions+=3;NFSU2_TR(0x59cf7c);
__builtin_memmove((R+0),gp(0x89e7e3),1);
}
B59cf81:{NFSU2_TR(0x59cf81);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59cf83:{NFSU2_TR(0x59cf83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59cf8e;}}
}
B59cf85:L59cf85:{c.instructions+=3;NFSU2_TR(0x59cf85);
__builtin_memmove((R+0),gp(0x89010c),4);
}
B59cf8a:{NFSU2_TR(0x59cf8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59cf8c:{NFSU2_TR(0x59cf8c);
if(r1(R+518)){{goto L59cf92;}}
}
B59cf8e:L59cf8e:{c.instructions+=1;NFSU2_TR(0x59cf8e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cf92:L59cf92:{c.instructions+=5;NFSU2_TR(0x59cf92);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59cf96:{NFSU2_TR(0x59cf96);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B59cf9d:{NFSU2_TR(0x59cf9d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59cf9f:{NFSU2_TR(0x59cf9f);
u8 U[13];
w4(U+0,u32(u32(u32(0x350ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B59cfa6:{NFSU2_TR(0x59cfa6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59cfae;}}
}
B59cfa8:L59cfa8:{c.instructions+=1;NFSU2_TR(0x59cfa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B59cfae:L59cfae:{c.instructions+=4;NFSU2_TR(0x59cfae);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59cfb2:{NFSU2_TR(0x59cfb2);
u8 U[30];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+22)));
w4(U+26,u32(u32(r4(R+4))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B59cfb9:{NFSU2_TR(0x59cfb9);
u8 U[16];
w4(U+0,u32(u32(u32(0x354ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59cfc0:{NFSU2_TR(0x59cfc0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59cfc9;}}
}
B59cfc2:L59cfc2:{c.instructions+=1;NFSU2_TR(0x59cfc2);
u8 U[16];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B59cfc9:L59cfc9:{c.instructions+=9;NFSU2_TR(0x59cfc9);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59cfd0:{NFSU2_TR(0x59cfd0);
{u32 ea_=u32(r4(R+12)+u32(328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59cfd6:{NFSU2_TR(0x59cfd6);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59cfdd:{NFSU2_TR(0x59cfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cfe3:{NFSU2_TR(0x59cfe3);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59cfea:{NFSU2_TR(0x59cfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cff0:{NFSU2_TR(0x59cff0);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59cff7:{NFSU2_TR(0x59cff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59cffd:{NFSU2_TR(0x59cffd);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x59d004u,59d);
}
XIT:NFSU2_TR_EXIT(0x59c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
