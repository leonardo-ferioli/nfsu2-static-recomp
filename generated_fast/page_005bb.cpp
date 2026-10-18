#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5bb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5bb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 page_5bb(Cpu& c){return body_5bb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5bb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5bb001:goto L5bb001;
case 0x5bb003:c.instructions+=28;goto B5bb003;
case 0x5bb00a:c.instructions+=27;goto B5bb00a;
case 0x5bb012:c.instructions+=26;goto B5bb012;
case 0x5bb015:c.instructions+=25;goto B5bb015;
case 0x5bb01d:c.instructions+=24;goto B5bb01d;
case 0x5bb01f:c.instructions+=23;goto B5bb01f;
case 0x5bb026:c.instructions+=22;goto B5bb026;
case 0x5bb02e:c.instructions+=21;goto B5bb02e;
case 0x5bb031:c.instructions+=20;goto B5bb031;
case 0x5bb035:c.instructions+=19;goto B5bb035;
case 0x5bb036:c.instructions+=18;goto B5bb036;
case 0x5bb038:c.instructions+=17;goto B5bb038;
case 0x5bb039:c.instructions+=16;goto B5bb039;
case 0x5bb040:c.instructions+=15;goto B5bb040;
case 0x5bb048:c.instructions+=14;goto B5bb048;
case 0x5bb050:c.instructions+=13;goto B5bb050;
case 0x5bb058:c.instructions+=12;goto B5bb058;
case 0x5bb060:c.instructions+=11;goto B5bb060;
case 0x5bb068:c.instructions+=10;goto B5bb068;
case 0x5bb070:c.instructions+=9;goto B5bb070;
case 0x5bb078:c.instructions+=8;goto B5bb078;
case 0x5bb080:c.instructions+=7;goto B5bb080;
case 0x5bb088:c.instructions+=6;goto B5bb088;
case 0x5bb090:c.instructions+=5;goto B5bb090;
case 0x5bb09b:c.instructions+=4;goto B5bb09b;
case 0x5bb0a6:c.instructions+=3;goto B5bb0a6;
case 0x5bb0b1:c.instructions+=2;goto B5bb0b1;
case 0x5bb0bc:c.instructions+=1;goto B5bb0bc;
case 0x5bb0c1:goto L5bb0c1;
case 0x5bb0c3:c.instructions+=4;goto B5bb0c3;
case 0x5bb0c4:c.instructions+=3;goto B5bb0c4;
case 0x5bb0c6:c.instructions+=2;goto B5bb0c6;
case 0x5bb0c7:c.instructions+=1;goto B5bb0c7;
case 0x5bb0d0:goto L5bb0d0;
case 0x5bb0d1:c.instructions+=9;goto B5bb0d1;
case 0x5bb0d3:c.instructions+=8;goto B5bb0d3;
case 0x5bb0d6:c.instructions+=7;goto B5bb0d6;
case 0x5bb0d9:c.instructions+=6;goto B5bb0d9;
case 0x5bb0da:c.instructions+=5;goto B5bb0da;
case 0x5bb0dd:c.instructions+=4;goto B5bb0dd;
case 0x5bb0e1:c.instructions+=3;goto B5bb0e1;
case 0x5bb0e2:c.instructions+=2;goto B5bb0e2;
case 0x5bb0e3:c.instructions+=1;goto B5bb0e3;
case 0x5bb0e8:goto L5bb0e8;
case 0x5bb0eb:c.instructions+=6;goto B5bb0eb;
case 0x5bb0ec:c.instructions+=5;goto B5bb0ec;
case 0x5bb0f0:c.instructions+=4;goto B5bb0f0;
case 0x5bb0f1:c.instructions+=3;goto B5bb0f1;
case 0x5bb0f5:c.instructions+=2;goto B5bb0f5;
case 0x5bb0f6:c.instructions+=1;goto B5bb0f6;
case 0x5bb0fb:goto L5bb0fb;
case 0x5bb0ff:c.instructions+=4;goto B5bb0ff;
case 0x5bb100:c.instructions+=3;goto B5bb100;
case 0x5bb104:c.instructions+=2;goto B5bb104;
case 0x5bb105:c.instructions+=1;goto B5bb105;
case 0x5bb10a:goto L5bb10a;
case 0x5bb10e:c.instructions+=6;goto B5bb10e;
case 0x5bb10f:c.instructions+=5;goto B5bb10f;
case 0x5bb113:c.instructions+=4;goto B5bb113;
case 0x5bb114:c.instructions+=3;goto B5bb114;
case 0x5bb118:c.instructions+=2;goto B5bb118;
case 0x5bb119:c.instructions+=1;goto B5bb119;
case 0x5bb11e:goto L5bb11e;
case 0x5bb122:c.instructions+=35;goto B5bb122;
case 0x5bb125:c.instructions+=34;goto B5bb125;
case 0x5bb129:c.instructions+=33;goto B5bb129;
case 0x5bb12b:c.instructions+=32;goto B5bb12b;
case 0x5bb12f:c.instructions+=31;goto B5bb12f;
case 0x5bb132:c.instructions+=30;goto B5bb132;
case 0x5bb136:c.instructions+=29;goto B5bb136;
case 0x5bb139:c.instructions+=28;goto B5bb139;
case 0x5bb13d:c.instructions+=27;goto B5bb13d;
case 0x5bb140:c.instructions+=26;goto B5bb140;
case 0x5bb144:c.instructions+=25;goto B5bb144;
case 0x5bb147:c.instructions+=24;goto B5bb147;
case 0x5bb14b:c.instructions+=23;goto B5bb14b;
case 0x5bb14e:c.instructions+=22;goto B5bb14e;
case 0x5bb152:c.instructions+=21;goto B5bb152;
case 0x5bb155:c.instructions+=20;goto B5bb155;
case 0x5bb159:c.instructions+=19;goto B5bb159;
case 0x5bb15c:c.instructions+=18;goto B5bb15c;
case 0x5bb160:c.instructions+=17;goto B5bb160;
case 0x5bb163:c.instructions+=16;goto B5bb163;
case 0x5bb167:c.instructions+=15;goto B5bb167;
case 0x5bb16a:c.instructions+=14;goto B5bb16a;
case 0x5bb16d:c.instructions+=13;goto B5bb16d;
case 0x5bb170:c.instructions+=12;goto B5bb170;
case 0x5bb172:c.instructions+=11;goto B5bb172;
case 0x5bb175:c.instructions+=10;goto B5bb175;
case 0x5bb178:c.instructions+=9;goto B5bb178;
case 0x5bb17b:c.instructions+=8;goto B5bb17b;
case 0x5bb17e:c.instructions+=7;goto B5bb17e;
case 0x5bb181:c.instructions+=6;goto B5bb181;
case 0x5bb184:c.instructions+=5;goto B5bb184;
case 0x5bb18b:c.instructions+=4;goto B5bb18b;
case 0x5bb18c:c.instructions+=3;goto B5bb18c;
case 0x5bb18e:c.instructions+=2;goto B5bb18e;
case 0x5bb18f:c.instructions+=1;goto B5bb18f;
case 0x5bb190:goto L5bb190;
case 0x5bb194:c.instructions+=5;goto B5bb194;
case 0x5bb195:c.instructions+=4;goto B5bb195;
case 0x5bb199:c.instructions+=3;goto B5bb199;
case 0x5bb19a:c.instructions+=2;goto B5bb19a;
case 0x5bb19b:c.instructions+=1;goto B5bb19b;
case 0x5bb1a0:goto L5bb1a0;
case 0x5bb1a2:c.instructions+=10;goto B5bb1a2;
case 0x5bb1a5:c.instructions+=9;goto B5bb1a5;
case 0x5bb1a8:c.instructions+=8;goto B5bb1a8;
case 0x5bb1ab:c.instructions+=7;goto B5bb1ab;
case 0x5bb1ae:c.instructions+=6;goto B5bb1ae;
case 0x5bb1b1:c.instructions+=5;goto B5bb1b1;
case 0x5bb1b4:c.instructions+=4;goto B5bb1b4;
case 0x5bb1b7:c.instructions+=3;goto B5bb1b7;
case 0x5bb1b9:c.instructions+=2;goto B5bb1b9;
case 0x5bb1ba:c.instructions+=1;goto B5bb1ba;
case 0x5bb1c0:goto L5bb1c0;
case 0x5bb1c2:c.instructions+=30;goto B5bb1c2;
case 0x5bb1c4:c.instructions+=29;goto B5bb1c4;
case 0x5bb1c9:c.instructions+=28;goto B5bb1c9;
case 0x5bb1cc:c.instructions+=27;goto B5bb1cc;
case 0x5bb1cf:c.instructions+=26;goto B5bb1cf;
case 0x5bb1d2:c.instructions+=25;goto B5bb1d2;
case 0x5bb1d5:c.instructions+=24;goto B5bb1d5;
case 0x5bb1da:c.instructions+=23;goto B5bb1da;
case 0x5bb1dd:c.instructions+=22;goto B5bb1dd;
case 0x5bb1e0:c.instructions+=21;goto B5bb1e0;
case 0x5bb1e3:c.instructions+=20;goto B5bb1e3;
case 0x5bb1e6:c.instructions+=19;goto B5bb1e6;
case 0x5bb1eb:c.instructions+=18;goto B5bb1eb;
case 0x5bb1ed:c.instructions+=17;goto B5bb1ed;
case 0x5bb1f0:c.instructions+=16;goto B5bb1f0;
case 0x5bb1f3:c.instructions+=15;goto B5bb1f3;
case 0x5bb1f6:c.instructions+=14;goto B5bb1f6;
case 0x5bb1f9:c.instructions+=13;goto B5bb1f9;
case 0x5bb1fc:c.instructions+=12;goto B5bb1fc;
case 0x5bb1ff:c.instructions+=11;goto B5bb1ff;
case 0x5bb202:c.instructions+=10;goto B5bb202;
case 0x5bb205:c.instructions+=9;goto B5bb205;
case 0x5bb208:c.instructions+=8;goto B5bb208;
case 0x5bb20b:c.instructions+=7;goto B5bb20b;
case 0x5bb20e:c.instructions+=6;goto B5bb20e;
case 0x5bb211:c.instructions+=5;goto B5bb211;
case 0x5bb214:c.instructions+=4;goto B5bb214;
case 0x5bb217:c.instructions+=3;goto B5bb217;
case 0x5bb21a:c.instructions+=2;goto B5bb21a;
case 0x5bb21d:c.instructions+=1;goto B5bb21d;
case 0x5bb220:goto L5bb220;
case 0x5bb221:c.instructions+=35;goto B5bb221;
case 0x5bb222:c.instructions+=34;goto B5bb222;
case 0x5bb228:c.instructions+=33;goto B5bb228;
case 0x5bb229:c.instructions+=32;goto B5bb229;
case 0x5bb22b:c.instructions+=31;goto B5bb22b;
case 0x5bb22c:c.instructions+=30;goto B5bb22c;
case 0x5bb230:c.instructions+=29;goto B5bb230;
case 0x5bb232:c.instructions+=28;goto B5bb232;
case 0x5bb234:c.instructions+=27;goto B5bb234;
case 0x5bb237:c.instructions+=26;goto B5bb237;
case 0x5bb23b:c.instructions+=25;goto B5bb23b;
case 0x5bb23d:c.instructions+=24;goto B5bb23d;
case 0x5bb240:c.instructions+=23;goto B5bb240;
case 0x5bb244:c.instructions+=22;goto B5bb244;
case 0x5bb247:c.instructions+=21;goto B5bb247;
case 0x5bb249:c.instructions+=20;goto B5bb249;
case 0x5bb24a:c.instructions+=19;goto B5bb24a;
case 0x5bb24d:c.instructions+=18;goto B5bb24d;
case 0x5bb250:c.instructions+=17;goto B5bb250;
case 0x5bb251:c.instructions+=16;goto B5bb251;
case 0x5bb258:c.instructions+=15;goto B5bb258;
case 0x5bb25b:c.instructions+=14;goto B5bb25b;
case 0x5bb25e:c.instructions+=13;goto B5bb25e;
case 0x5bb261:c.instructions+=12;goto B5bb261;
case 0x5bb263:c.instructions+=11;goto B5bb263;
case 0x5bb266:c.instructions+=10;goto B5bb266;
case 0x5bb269:c.instructions+=9;goto B5bb269;
case 0x5bb26a:c.instructions+=8;goto B5bb26a;
case 0x5bb26d:c.instructions+=7;goto B5bb26d;
case 0x5bb26e:c.instructions+=6;goto B5bb26e;
case 0x5bb271:c.instructions+=5;goto B5bb271;
case 0x5bb276:c.instructions+=4;goto B5bb276;
case 0x5bb279:c.instructions+=3;goto B5bb279;
case 0x5bb27a:c.instructions+=2;goto B5bb27a;
case 0x5bb27b:c.instructions+=1;goto B5bb27b;
case 0x5bb27e:goto L5bb27e;
case 0x5bb280:c.instructions+=12;goto B5bb280;
case 0x5bb283:c.instructions+=11;goto B5bb283;
case 0x5bb284:c.instructions+=10;goto B5bb284;
case 0x5bb287:c.instructions+=9;goto B5bb287;
case 0x5bb288:c.instructions+=8;goto B5bb288;
case 0x5bb28a:c.instructions+=7;goto B5bb28a;
case 0x5bb28c:c.instructions+=6;goto B5bb28c;
case 0x5bb28f:c.instructions+=5;goto B5bb28f;
case 0x5bb290:c.instructions+=4;goto B5bb290;
case 0x5bb293:c.instructions+=3;goto B5bb293;
case 0x5bb294:c.instructions+=2;goto B5bb294;
case 0x5bb295:c.instructions+=1;goto B5bb295;
case 0x5bb298:goto L5bb298;
case 0x5bb29a:c.instructions+=9;goto B5bb29a;
case 0x5bb29b:c.instructions+=8;goto B5bb29b;
case 0x5bb29f:c.instructions+=7;goto B5bb29f;
case 0x5bb2a0:c.instructions+=6;goto B5bb2a0;
case 0x5bb2a1:c.instructions+=5;goto B5bb2a1;
case 0x5bb2a2:c.instructions+=4;goto B5bb2a2;
case 0x5bb2a6:c.instructions+=3;goto B5bb2a6;
case 0x5bb2a8:c.instructions+=2;goto B5bb2a8;
case 0x5bb2a9:c.instructions+=1;goto B5bb2a9;
case 0x5bb2ac:goto L5bb2ac;
case 0x5bb2ae:c.instructions+=3;goto B5bb2ae;
case 0x5bb2b0:c.instructions+=2;goto B5bb2b0;
case 0x5bb2b2:c.instructions+=1;goto B5bb2b2;
case 0x5bb2b4:goto L5bb2b4;
case 0x5bb2b9:c.instructions+=1;goto B5bb2b9;
case 0x5bb2c0:goto L5bb2c0;
case 0x5bb2c4:c.instructions+=22;goto B5bb2c4;
case 0x5bb2c7:c.instructions+=21;goto B5bb2c7;
case 0x5bb2ca:c.instructions+=20;goto B5bb2ca;
case 0x5bb2ce:c.instructions+=19;goto B5bb2ce;
case 0x5bb2d1:c.instructions+=18;goto B5bb2d1;
case 0x5bb2d5:c.instructions+=17;goto B5bb2d5;
case 0x5bb2d9:c.instructions+=16;goto B5bb2d9;
case 0x5bb2dd:c.instructions+=15;goto B5bb2dd;
case 0x5bb2e1:c.instructions+=14;goto B5bb2e1;
case 0x5bb2e5:c.instructions+=13;goto B5bb2e5;
case 0x5bb2e9:c.instructions+=12;goto B5bb2e9;
case 0x5bb2ec:c.instructions+=11;goto B5bb2ec;
case 0x5bb2f0:c.instructions+=10;goto B5bb2f0;
case 0x5bb2f4:c.instructions+=9;goto B5bb2f4;
case 0x5bb2f8:c.instructions+=8;goto B5bb2f8;
case 0x5bb2fc:c.instructions+=7;goto B5bb2fc;
case 0x5bb2ff:c.instructions+=6;goto B5bb2ff;
case 0x5bb302:c.instructions+=5;goto B5bb302;
case 0x5bb306:c.instructions+=4;goto B5bb306;
case 0x5bb308:c.instructions+=3;goto B5bb308;
case 0x5bb309:c.instructions+=2;goto B5bb309;
case 0x5bb30b:c.instructions+=1;goto B5bb30b;
case 0x5bb30d:goto L5bb30d;
case 0x5bb30f:c.instructions+=3;goto B5bb30f;
case 0x5bb311:c.instructions+=2;goto B5bb311;
case 0x5bb312:c.instructions+=1;goto B5bb312;
case 0x5bb315:goto L5bb315;
case 0x5bb316:c.instructions+=4;goto B5bb316;
case 0x5bb317:c.instructions+=3;goto B5bb317;
case 0x5bb318:c.instructions+=2;goto B5bb318;
case 0x5bb319:c.instructions+=1;goto B5bb319;
case 0x5bb320:goto L5bb320;
case 0x5bb324:c.instructions+=12;goto B5bb324;
case 0x5bb325:c.instructions+=11;goto B5bb325;
case 0x5bb326:c.instructions+=10;goto B5bb326;
case 0x5bb328:c.instructions+=9;goto B5bb328;
case 0x5bb32a:c.instructions+=8;goto B5bb32a;
case 0x5bb32b:c.instructions+=7;goto B5bb32b;
case 0x5bb32e:c.instructions+=6;goto B5bb32e;
case 0x5bb330:c.instructions+=5;goto B5bb330;
case 0x5bb333:c.instructions+=4;goto B5bb333;
case 0x5bb336:c.instructions+=3;goto B5bb336;
case 0x5bb338:c.instructions+=2;goto B5bb338;
case 0x5bb33a:c.instructions+=1;goto B5bb33a;
case 0x5bb33c:goto L5bb33c;
case 0x5bb33f:c.instructions+=1;goto B5bb33f;
case 0x5bb341:goto L5bb341;
case 0x5bb344:goto L5bb344;
case 0x5bb346:goto L5bb346;
case 0x5bb348:c.instructions+=6;goto B5bb348;
case 0x5bb34a:c.instructions+=5;goto B5bb34a;
case 0x5bb34c:c.instructions+=4;goto B5bb34c;
case 0x5bb34f:c.instructions+=3;goto B5bb34f;
case 0x5bb352:c.instructions+=2;goto B5bb352;
case 0x5bb355:c.instructions+=1;goto B5bb355;
case 0x5bb357:goto L5bb357;
case 0x5bb358:c.instructions+=13;goto B5bb358;
case 0x5bb35d:c.instructions+=12;goto B5bb35d;
case 0x5bb361:c.instructions+=11;goto B5bb361;
case 0x5bb362:c.instructions+=10;goto B5bb362;
case 0x5bb365:c.instructions+=9;goto B5bb365;
case 0x5bb368:c.instructions+=8;goto B5bb368;
case 0x5bb369:c.instructions+=7;goto B5bb369;
case 0x5bb36a:c.instructions+=6;goto B5bb36a;
case 0x5bb36d:c.instructions+=5;goto B5bb36d;
case 0x5bb370:c.instructions+=4;goto B5bb370;
case 0x5bb374:c.instructions+=3;goto B5bb374;
case 0x5bb376:c.instructions+=2;goto B5bb376;
case 0x5bb377:c.instructions+=1;goto B5bb377;
case 0x5bb37a:goto L5bb37a;
case 0x5bb37c:c.instructions+=2;goto B5bb37c;
case 0x5bb37d:c.instructions+=1;goto B5bb37d;
case 0x5bb37f:goto L5bb37f;
case 0x5bb382:c.instructions+=14;goto B5bb382;
case 0x5bb385:c.instructions+=13;goto B5bb385;
case 0x5bb387:c.instructions+=12;goto B5bb387;
case 0x5bb38a:c.instructions+=11;goto B5bb38a;
case 0x5bb38e:c.instructions+=10;goto B5bb38e;
case 0x5bb391:c.instructions+=9;goto B5bb391;
case 0x5bb394:c.instructions+=8;goto B5bb394;
case 0x5bb395:c.instructions+=7;goto B5bb395;
case 0x5bb398:c.instructions+=6;goto B5bb398;
case 0x5bb39b:c.instructions+=5;goto B5bb39b;
case 0x5bb39e:c.instructions+=4;goto B5bb39e;
case 0x5bb3a1:c.instructions+=3;goto B5bb3a1;
case 0x5bb3a2:c.instructions+=2;goto B5bb3a2;
case 0x5bb3a3:c.instructions+=1;goto B5bb3a3;
case 0x5bb3a6:goto L5bb3a6;
case 0x5bb3aa:goto L5bb3aa;
case 0x5bb3ab:c.instructions+=3;goto B5bb3ab;
case 0x5bb3ac:c.instructions+=2;goto B5bb3ac;
case 0x5bb3ad:c.instructions+=1;goto B5bb3ad;
case 0x5bb3b0:goto L5bb3b0;
case 0x5bb3b2:c.instructions+=17;goto B5bb3b2;
case 0x5bb3b4:c.instructions+=16;goto B5bb3b4;
case 0x5bb3b6:c.instructions+=15;goto B5bb3b6;
case 0x5bb3b9:c.instructions+=14;goto B5bb3b9;
case 0x5bb3bc:c.instructions+=13;goto B5bb3bc;
case 0x5bb3c3:c.instructions+=12;goto B5bb3c3;
case 0x5bb3c6:c.instructions+=11;goto B5bb3c6;
case 0x5bb3c9:c.instructions+=10;goto B5bb3c9;
case 0x5bb3ce:c.instructions+=9;goto B5bb3ce;
case 0x5bb3d1:c.instructions+=8;goto B5bb3d1;
case 0x5bb3d4:c.instructions+=7;goto B5bb3d4;
case 0x5bb3d7:c.instructions+=6;goto B5bb3d7;
case 0x5bb3da:c.instructions+=5;goto B5bb3da;
case 0x5bb3dd:c.instructions+=4;goto B5bb3dd;
case 0x5bb3e0:c.instructions+=3;goto B5bb3e0;
case 0x5bb3e3:c.instructions+=2;goto B5bb3e3;
case 0x5bb3e6:c.instructions+=1;goto B5bb3e6;
case 0x5bb3f0:goto L5bb3f0;
case 0x5bb3f4:c.instructions+=6;goto B5bb3f4;
case 0x5bb3f8:c.instructions+=5;goto B5bb3f8;
case 0x5bb3fb:c.instructions+=4;goto B5bb3fb;
case 0x5bb3fe:c.instructions+=3;goto B5bb3fe;
case 0x5bb3ff:c.instructions+=2;goto B5bb3ff;
case 0x5bb400:c.instructions+=1;goto B5bb400;
case 0x5bb405:goto L5bb405;
case 0x5bb409:c.instructions+=2;goto B5bb409;
case 0x5bb40a:c.instructions+=1;goto B5bb40a;
case 0x5bb40f:goto L5bb40f;
case 0x5bb413:c.instructions+=6;goto B5bb413;
case 0x5bb416:c.instructions+=5;goto B5bb416;
case 0x5bb41a:c.instructions+=4;goto B5bb41a;
case 0x5bb41e:c.instructions+=3;goto B5bb41e;
case 0x5bb41f:c.instructions+=2;goto B5bb41f;
case 0x5bb424:c.instructions+=1;goto B5bb424;
case 0x5bb429:goto L5bb429;
case 0x5bb42b:c.instructions+=1;goto B5bb42b;
case 0x5bb430:goto L5bb430;
case 0x5bb432:c.instructions+=3;goto B5bb432;
case 0x5bb434:c.instructions+=2;goto B5bb434;
case 0x5bb436:c.instructions+=1;goto B5bb436;
case 0x5bb43c:goto L5bb43c;
case 0x5bb442:c.instructions+=2;goto B5bb442;
case 0x5bb444:c.instructions+=1;goto B5bb444;
case 0x5bb44a:goto L5bb44a;
case 0x5bb450:c.instructions+=1;goto B5bb450;
case 0x5bb456:goto L5bb456;
case 0x5bb45a:c.instructions+=6;goto B5bb45a;
case 0x5bb45b:c.instructions+=5;goto B5bb45b;
case 0x5bb45e:c.instructions+=4;goto B5bb45e;
case 0x5bb464:c.instructions+=3;goto B5bb464;
case 0x5bb46a:c.instructions+=2;goto B5bb46a;
case 0x5bb46b:c.instructions+=1;goto B5bb46b;
case 0x5bb471:goto L5bb471;
case 0x5bb474:c.instructions+=77;goto B5bb474;
case 0x5bb477:c.instructions+=76;goto B5bb477;
case 0x5bb47a:c.instructions+=75;goto B5bb47a;
case 0x5bb47d:c.instructions+=74;goto B5bb47d;
case 0x5bb480:c.instructions+=73;goto B5bb480;
case 0x5bb483:c.instructions+=72;goto B5bb483;
case 0x5bb485:c.instructions+=71;goto B5bb485;
case 0x5bb488:c.instructions+=70;goto B5bb488;
case 0x5bb48b:c.instructions+=69;goto B5bb48b;
case 0x5bb48e:c.instructions+=68;goto B5bb48e;
case 0x5bb491:c.instructions+=67;goto B5bb491;
case 0x5bb494:c.instructions+=66;goto B5bb494;
case 0x5bb497:c.instructions+=65;goto B5bb497;
case 0x5bb49a:c.instructions+=64;goto B5bb49a;
case 0x5bb49d:c.instructions+=63;goto B5bb49d;
case 0x5bb4a0:c.instructions+=62;goto B5bb4a0;
case 0x5bb4a3:c.instructions+=61;goto B5bb4a3;
case 0x5bb4a6:c.instructions+=60;goto B5bb4a6;
case 0x5bb4a9:c.instructions+=59;goto B5bb4a9;
case 0x5bb4ac:c.instructions+=58;goto B5bb4ac;
case 0x5bb4af:c.instructions+=57;goto B5bb4af;
case 0x5bb4b2:c.instructions+=56;goto B5bb4b2;
case 0x5bb4b4:c.instructions+=55;goto B5bb4b4;
case 0x5bb4b7:c.instructions+=54;goto B5bb4b7;
case 0x5bb4ba:c.instructions+=53;goto B5bb4ba;
case 0x5bb4bd:c.instructions+=52;goto B5bb4bd;
case 0x5bb4c0:c.instructions+=51;goto B5bb4c0;
case 0x5bb4c3:c.instructions+=50;goto B5bb4c3;
case 0x5bb4c6:c.instructions+=49;goto B5bb4c6;
case 0x5bb4c9:c.instructions+=48;goto B5bb4c9;
case 0x5bb4cc:c.instructions+=47;goto B5bb4cc;
case 0x5bb4cf:c.instructions+=46;goto B5bb4cf;
case 0x5bb4d2:c.instructions+=45;goto B5bb4d2;
case 0x5bb4d5:c.instructions+=44;goto B5bb4d5;
case 0x5bb4d8:c.instructions+=43;goto B5bb4d8;
case 0x5bb4db:c.instructions+=42;goto B5bb4db;
case 0x5bb4de:c.instructions+=41;goto B5bb4de;
case 0x5bb4e1:c.instructions+=40;goto B5bb4e1;
case 0x5bb4e4:c.instructions+=39;goto B5bb4e4;
case 0x5bb4e7:c.instructions+=38;goto B5bb4e7;
case 0x5bb4e9:c.instructions+=37;goto B5bb4e9;
case 0x5bb4ec:c.instructions+=36;goto B5bb4ec;
case 0x5bb4ef:c.instructions+=35;goto B5bb4ef;
case 0x5bb4f2:c.instructions+=34;goto B5bb4f2;
case 0x5bb4f5:c.instructions+=33;goto B5bb4f5;
case 0x5bb4f8:c.instructions+=32;goto B5bb4f8;
case 0x5bb4fb:c.instructions+=31;goto B5bb4fb;
case 0x5bb4fe:c.instructions+=30;goto B5bb4fe;
case 0x5bb501:c.instructions+=29;goto B5bb501;
case 0x5bb504:c.instructions+=28;goto B5bb504;
case 0x5bb507:c.instructions+=27;goto B5bb507;
case 0x5bb50a:c.instructions+=26;goto B5bb50a;
case 0x5bb50d:c.instructions+=25;goto B5bb50d;
case 0x5bb510:c.instructions+=24;goto B5bb510;
case 0x5bb513:c.instructions+=23;goto B5bb513;
case 0x5bb516:c.instructions+=22;goto B5bb516;
case 0x5bb519:c.instructions+=21;goto B5bb519;
case 0x5bb51c:c.instructions+=20;goto B5bb51c;
case 0x5bb51f:c.instructions+=19;goto B5bb51f;
case 0x5bb521:c.instructions+=18;goto B5bb521;
case 0x5bb524:c.instructions+=17;goto B5bb524;
case 0x5bb527:c.instructions+=16;goto B5bb527;
case 0x5bb52a:c.instructions+=15;goto B5bb52a;
case 0x5bb52d:c.instructions+=14;goto B5bb52d;
case 0x5bb530:c.instructions+=13;goto B5bb530;
case 0x5bb533:c.instructions+=12;goto B5bb533;
case 0x5bb536:c.instructions+=11;goto B5bb536;
case 0x5bb539:c.instructions+=10;goto B5bb539;
case 0x5bb53c:c.instructions+=9;goto B5bb53c;
case 0x5bb53f:c.instructions+=8;goto B5bb53f;
case 0x5bb542:c.instructions+=7;goto B5bb542;
case 0x5bb545:c.instructions+=6;goto B5bb545;
case 0x5bb548:c.instructions+=5;goto B5bb548;
case 0x5bb54b:c.instructions+=4;goto B5bb54b;
case 0x5bb54e:c.instructions+=3;goto B5bb54e;
case 0x5bb551:c.instructions+=2;goto B5bb551;
case 0x5bb557:c.instructions+=1;goto B5bb557;
case 0x5bb55a:goto L5bb55a;
case 0x5bb55c:c.instructions+=16;goto B5bb55c;
case 0x5bb55f:c.instructions+=15;goto B5bb55f;
case 0x5bb562:c.instructions+=14;goto B5bb562;
case 0x5bb565:c.instructions+=13;goto B5bb565;
case 0x5bb568:c.instructions+=12;goto B5bb568;
case 0x5bb56b:c.instructions+=11;goto B5bb56b;
case 0x5bb56e:c.instructions+=10;goto B5bb56e;
case 0x5bb571:c.instructions+=9;goto B5bb571;
case 0x5bb573:c.instructions+=8;goto B5bb573;
case 0x5bb576:c.instructions+=7;goto B5bb576;
case 0x5bb579:c.instructions+=6;goto B5bb579;
case 0x5bb57c:c.instructions+=5;goto B5bb57c;
case 0x5bb57e:c.instructions+=4;goto B5bb57e;
case 0x5bb581:c.instructions+=3;goto B5bb581;
case 0x5bb584:c.instructions+=2;goto B5bb584;
case 0x5bb587:c.instructions+=1;goto B5bb587;
case 0x5bb58d:goto L5bb58d;
case 0x5bb590:goto L5bb590;
case 0x5bb595:c.instructions+=4;goto B5bb595;
case 0x5bb596:c.instructions+=3;goto B5bb596;
case 0x5bb597:c.instructions+=2;goto B5bb597;
case 0x5bb599:c.instructions+=1;goto B5bb599;
case 0x5bb59e:goto L5bb59e;
case 0x5bb5a1:c.instructions+=3;goto B5bb5a1;
case 0x5bb5a3:c.instructions+=2;goto B5bb5a3;
case 0x5bb5a4:c.instructions+=1;goto B5bb5a4;
case 0x5bb5b0:goto L5bb5b0;
case 0x5bb5b3:c.instructions+=2;goto B5bb5b3;
case 0x5bb5b8:c.instructions+=1;goto B5bb5b8;
case 0x5bb5be:goto L5bb5be;
case 0x5bb5c4:goto L5bb5c4;
case 0x5bb5c9:c.instructions+=1;goto B5bb5c9;
case 0x5bb5cb:goto L5bb5cb;
case 0x5bb5cd:goto L5bb5cd;
case 0x5bb5d2:c.instructions+=1;goto B5bb5d2;
case 0x5bb5d4:goto L5bb5d4;
case 0x5bb5d6:goto L5bb5d6;
case 0x5bb5db:c.instructions+=1;goto B5bb5db;
case 0x5bb5dd:goto L5bb5dd;
case 0x5bb5e2:c.instructions+=1;goto B5bb5e2;
case 0x5bb5e8:goto L5bb5e8;
case 0x5bb5ed:c.instructions+=4;goto B5bb5ed;
case 0x5bb5f0:c.instructions+=3;goto B5bb5f0;
case 0x5bb5f6:c.instructions+=2;goto B5bb5f6;
case 0x5bb5f9:c.instructions+=1;goto B5bb5f9;
case 0x5bb5fa:goto L5bb5fa;
case 0x5bb5ff:c.instructions+=1;goto B5bb5ff;
case 0x5bb601:goto L5bb601;
case 0x5bb606:c.instructions+=1;goto B5bb606;
case 0x5bb60c:goto L5bb60c;
case 0x5bb611:c.instructions+=4;goto B5bb611;
case 0x5bb614:c.instructions+=3;goto B5bb614;
case 0x5bb61a:c.instructions+=2;goto B5bb61a;
case 0x5bb61d:c.instructions+=1;goto B5bb61d;
case 0x5bb61e:goto L5bb61e;
case 0x5bb623:c.instructions+=1;goto B5bb623;
case 0x5bb625:goto L5bb625;
case 0x5bb62b:goto L5bb62b;
case 0x5bb630:c.instructions+=1;goto B5bb630;
case 0x5bb632:goto L5bb632;
case 0x5bb637:c.instructions+=1;goto B5bb637;
case 0x5bb639:goto L5bb639;
case 0x5bb63a:goto L5bb63a;
case 0x5bb63f:c.instructions+=4;goto B5bb63f;
case 0x5bb642:c.instructions+=3;goto B5bb642;
case 0x5bb648:c.instructions+=2;goto B5bb648;
case 0x5bb64b:c.instructions+=1;goto B5bb64b;
case 0x5bb64c:goto L5bb64c;
case 0x5bb651:c.instructions+=1;goto B5bb651;
case 0x5bb653:goto L5bb653;
case 0x5bb658:c.instructions+=1;goto B5bb658;
case 0x5bb65e:goto L5bb65e;
case 0x5bb663:c.instructions+=4;goto B5bb663;
case 0x5bb666:c.instructions+=3;goto B5bb666;
case 0x5bb66c:c.instructions+=2;goto B5bb66c;
case 0x5bb66f:c.instructions+=1;goto B5bb66f;
case 0x5bb670:goto L5bb670;
case 0x5bb675:c.instructions+=1;goto B5bb675;
case 0x5bb677:goto L5bb677;
case 0x5bb67d:goto L5bb67d;
case 0x5bb682:c.instructions+=1;goto B5bb682;
case 0x5bb684:goto L5bb684;
case 0x5bb68a:goto L5bb68a;
case 0x5bb68f:c.instructions+=1;goto B5bb68f;
case 0x5bb691:goto L5bb691;
case 0x5bb696:c.instructions+=1;goto B5bb696;
case 0x5bb69c:goto L5bb69c;
case 0x5bb69d:goto L5bb69d;
case 0x5bb6a2:c.instructions+=1;goto B5bb6a2;
case 0x5bb6a8:goto L5bb6a8;
case 0x5bb6ad:c.instructions+=1;goto B5bb6ad;
case 0x5bb6b3:goto L5bb6b3;
case 0x5bb6b4:goto L5bb6b4;
case 0x5bb6b9:c.instructions+=1;goto B5bb6b9;
case 0x5bb6bb:goto L5bb6bb;
case 0x5bb6c1:goto L5bb6c1;
case 0x5bb6c6:c.instructions+=1;goto B5bb6c6;
case 0x5bb6cc:goto L5bb6cc;
case 0x5bb6d1:c.instructions+=1;goto B5bb6d1;
case 0x5bb6d7:goto L5bb6d7;
case 0x5bb6d8:goto L5bb6d8;
case 0x5bb6dd:c.instructions+=1;goto B5bb6dd;
case 0x5bb6df:goto L5bb6df;
case 0x5bb6e4:c.instructions+=1;goto B5bb6e4;
case 0x5bb6e6:goto L5bb6e6;
case 0x5bb6eb:c.instructions+=3;goto B5bb6eb;
case 0x5bb6ee:c.instructions+=2;goto B5bb6ee;
case 0x5bb6f4:c.instructions+=1;goto B5bb6f4;
case 0x5bb6f7:goto L5bb6f7;
case 0x5bb700:goto L5bb700;
case 0x5bb702:c.instructions+=4;goto B5bb702;
case 0x5bb707:c.instructions+=3;goto B5bb707;
case 0x5bb70c:c.instructions+=2;goto B5bb70c;
case 0x5bb711:c.instructions+=1;goto B5bb711;
case 0x5bb716:goto L5bb716;
case 0x5bb719:c.instructions+=2;goto B5bb719;
case 0x5bb71e:c.instructions+=1;goto B5bb71e;
case 0x5bb720:goto L5bb720;
case 0x5bb724:c.instructions+=5;goto B5bb724;
case 0x5bb727:c.instructions+=4;goto B5bb727;
case 0x5bb72a:c.instructions+=3;goto B5bb72a;
case 0x5bb72e:c.instructions+=2;goto B5bb72e;
case 0x5bb730:c.instructions+=1;goto B5bb730;
case 0x5bb732:goto L5bb732;
case 0x5bb735:c.instructions+=3;goto B5bb735;
case 0x5bb739:c.instructions+=2;goto B5bb739;
case 0x5bb73b:c.instructions+=1;goto B5bb73b;
case 0x5bb73d:goto L5bb73d;
case 0x5bb742:c.instructions+=1;goto B5bb742;
case 0x5bb750:goto L5bb750;
case 0x5bb751:c.instructions+=15;goto B5bb751;
case 0x5bb756:c.instructions+=14;goto B5bb756;
case 0x5bb758:c.instructions+=13;goto B5bb758;
case 0x5bb759:c.instructions+=12;goto B5bb759;
case 0x5bb75a:c.instructions+=11;goto B5bb75a;
case 0x5bb75b:c.instructions+=10;goto B5bb75b;
case 0x5bb75c:c.instructions+=9;goto B5bb75c;
case 0x5bb75e:c.instructions+=8;goto B5bb75e;
case 0x5bb75f:c.instructions+=7;goto B5bb75f;
case 0x5bb764:c.instructions+=6;goto B5bb764;
case 0x5bb765:c.instructions+=5;goto B5bb765;
case 0x5bb766:c.instructions+=4;goto B5bb766;
case 0x5bb76b:c.instructions+=3;goto B5bb76b;
case 0x5bb770:c.instructions+=2;goto B5bb770;
case 0x5bb771:c.instructions+=1;goto B5bb771;
case 0x5bb774:goto L5bb774;
case 0x5bb779:c.instructions+=9;goto B5bb779;
case 0x5bb77b:c.instructions+=8;goto B5bb77b;
case 0x5bb77c:c.instructions+=7;goto B5bb77c;
case 0x5bb781:c.instructions+=6;goto B5bb781;
case 0x5bb783:c.instructions+=5;goto B5bb783;
case 0x5bb785:c.instructions+=4;goto B5bb785;
case 0x5bb786:c.instructions+=3;goto B5bb786;
case 0x5bb78b:c.instructions+=2;goto B5bb78b;
case 0x5bb78c:c.instructions+=1;goto B5bb78c;
case 0x5bb78f:goto L5bb78f;
case 0x5bb794:c.instructions+=9;goto B5bb794;
case 0x5bb795:c.instructions+=8;goto B5bb795;
case 0x5bb799:c.instructions+=7;goto B5bb799;
case 0x5bb79a:c.instructions+=6;goto B5bb79a;
case 0x5bb79b:c.instructions+=5;goto B5bb79b;
case 0x5bb79c:c.instructions+=4;goto B5bb79c;
case 0x5bb7a0:c.instructions+=3;goto B5bb7a0;
case 0x5bb7a2:c.instructions+=2;goto B5bb7a2;
case 0x5bb7a3:c.instructions+=1;goto B5bb7a3;
case 0x5bb7a6:goto L5bb7a6;
case 0x5bb7ab:c.instructions+=1;goto B5bb7ab;
case 0x5bb7b0:goto L5bb7b0;
case 0x5bb7b3:c.instructions+=3;goto B5bb7b3;
case 0x5bb7b5:c.instructions+=2;goto B5bb7b5;
case 0x5bb7b7:c.instructions+=1;goto B5bb7b7;
case 0x5bb7c0:goto L5bb7c0;
case 0x5bb7c4:c.instructions+=31;goto B5bb7c4;
case 0x5bb7c7:c.instructions+=30;goto B5bb7c7;
case 0x5bb7ca:c.instructions+=29;goto B5bb7ca;
case 0x5bb7ce:c.instructions+=28;goto B5bb7ce;
case 0x5bb7d0:c.instructions+=27;goto B5bb7d0;
case 0x5bb7d4:c.instructions+=26;goto B5bb7d4;
case 0x5bb7d8:c.instructions+=25;goto B5bb7d8;
case 0x5bb7db:c.instructions+=24;goto B5bb7db;
case 0x5bb7df:c.instructions+=23;goto B5bb7df;
case 0x5bb7e1:c.instructions+=22;goto B5bb7e1;
case 0x5bb7e5:c.instructions+=21;goto B5bb7e5;
case 0x5bb7e9:c.instructions+=20;goto B5bb7e9;
case 0x5bb7ec:c.instructions+=19;goto B5bb7ec;
case 0x5bb7f0:c.instructions+=18;goto B5bb7f0;
case 0x5bb7f2:c.instructions+=17;goto B5bb7f2;
case 0x5bb7f6:c.instructions+=16;goto B5bb7f6;
case 0x5bb7f9:c.instructions+=15;goto B5bb7f9;
case 0x5bb7fd:c.instructions+=14;goto B5bb7fd;
case 0x5bb7ff:c.instructions+=13;goto B5bb7ff;
case 0x5bb803:c.instructions+=12;goto B5bb803;
case 0x5bb807:c.instructions+=11;goto B5bb807;
case 0x5bb80a:c.instructions+=10;goto B5bb80a;
case 0x5bb80e:c.instructions+=9;goto B5bb80e;
case 0x5bb810:c.instructions+=8;goto B5bb810;
case 0x5bb814:c.instructions+=7;goto B5bb814;
case 0x5bb817:c.instructions+=6;goto B5bb817;
case 0x5bb81b:c.instructions+=5;goto B5bb81b;
case 0x5bb81d:c.instructions+=4;goto B5bb81d;
case 0x5bb81e:c.instructions+=3;goto B5bb81e;
case 0x5bb821:c.instructions+=2;goto B5bb821;
case 0x5bb825:c.instructions+=1;goto B5bb825;
case 0x5bb827:goto L5bb827;
case 0x5bb828:c.instructions+=2;goto B5bb828;
case 0x5bb82b:c.instructions+=1;goto B5bb82b;
case 0x5bb82d:goto L5bb82d;
case 0x5bb832:c.instructions+=3;goto B5bb832;
case 0x5bb834:c.instructions+=2;goto B5bb834;
case 0x5bb835:c.instructions+=1;goto B5bb835;
case 0x5bb838:goto L5bb838;
case 0x5bb839:c.instructions+=5;goto B5bb839;
case 0x5bb83a:c.instructions+=4;goto B5bb83a;
case 0x5bb83b:c.instructions+=3;goto B5bb83b;
case 0x5bb83c:c.instructions+=2;goto B5bb83c;
case 0x5bb83d:c.instructions+=1;goto B5bb83d;
case 0x5bb840:goto L5bb840;
case 0x5bb841:c.instructions+=10;goto B5bb841;
case 0x5bb846:c.instructions+=9;goto B5bb846;
case 0x5bb84c:c.instructions+=8;goto B5bb84c;
case 0x5bb84d:c.instructions+=7;goto B5bb84d;
case 0x5bb852:c.instructions+=6;goto B5bb852;
case 0x5bb857:c.instructions+=5;goto B5bb857;
case 0x5bb859:c.instructions+=4;goto B5bb859;
case 0x5bb85b:c.instructions+=3;goto B5bb85b;
case 0x5bb861:c.instructions+=2;goto B5bb861;
case 0x5bb867:c.instructions+=1;goto B5bb867;
case 0x5bb869:goto L5bb869;
case 0x5bb86f:c.instructions+=1;goto B5bb86f;
case 0x5bb871:goto L5bb871;
case 0x5bb873:c.instructions+=1;goto B5bb873;
case 0x5bb875:goto L5bb875;
case 0x5bb87b:c.instructions+=1;goto B5bb87b;
case 0x5bb87d:goto L5bb87d;
case 0x5bb87f:c.instructions+=1;goto B5bb87f;
case 0x5bb881:goto L5bb881;
case 0x5bb883:goto L5bb883;
case 0x5bb888:c.instructions+=2;goto B5bb888;
case 0x5bb88a:c.instructions+=1;goto B5bb88a;
case 0x5bb88c:goto L5bb88c;
case 0x5bb88e:c.instructions+=2;goto B5bb88e;
case 0x5bb892:c.instructions+=1;goto B5bb892;
case 0x5bb894:goto L5bb894;
case 0x5bb899:goto L5bb899;
case 0x5bb89f:c.instructions+=1;goto B5bb89f;
case 0x5bb8a1:goto L5bb8a1;
case 0x5bb8a3:c.instructions+=2;goto B5bb8a3;
case 0x5bb8a7:c.instructions+=1;goto B5bb8a7;
case 0x5bb8a9:goto L5bb8a9;
case 0x5bb8ae:goto L5bb8ae;
case 0x5bb8af:c.instructions+=10;goto B5bb8af;
case 0x5bb8b1:c.instructions+=9;goto B5bb8b1;
case 0x5bb8b3:c.instructions+=8;goto B5bb8b3;
case 0x5bb8b5:c.instructions+=7;goto B5bb8b5;
case 0x5bb8b6:c.instructions+=6;goto B5bb8b6;
case 0x5bb8bb:c.instructions+=5;goto B5bb8bb;
case 0x5bb8c1:c.instructions+=4;goto B5bb8c1;
case 0x5bb8c2:c.instructions+=3;goto B5bb8c2;
case 0x5bb8c7:c.instructions+=2;goto B5bb8c7;
case 0x5bb8cd:c.instructions+=1;goto B5bb8cd;
case 0x5bb8d3:goto L5bb8d3;
case 0x5bb8d5:c.instructions+=1;goto B5bb8d5;
case 0x5bb8e0:goto L5bb8e0;
case 0x5bb8e6:c.instructions+=15;goto B5bb8e6;
case 0x5bb8eb:c.instructions+=14;goto B5bb8eb;
case 0x5bb8ed:c.instructions+=13;goto B5bb8ed;
case 0x5bb8ee:c.instructions+=12;goto B5bb8ee;
case 0x5bb8f4:c.instructions+=11;goto B5bb8f4;
case 0x5bb8f5:c.instructions+=10;goto B5bb8f5;
case 0x5bb8f6:c.instructions+=9;goto B5bb8f6;
case 0x5bb8f7:c.instructions+=8;goto B5bb8f7;
case 0x5bb8fd:c.instructions+=7;goto B5bb8fd;
case 0x5bb8ff:c.instructions+=6;goto B5bb8ff;
case 0x5bb901:c.instructions+=5;goto B5bb901;
case 0x5bb902:c.instructions+=4;goto B5bb902;
case 0x5bb908:c.instructions+=3;goto B5bb908;
case 0x5bb909:c.instructions+=2;goto B5bb909;
case 0x5bb90a:c.instructions+=1;goto B5bb90a;
case 0x5bb90d:goto L5bb90d;
case 0x5bb90f:c.instructions+=1;goto B5bb90f;
case 0x5bb911:goto L5bb911;
case 0x5bb913:c.instructions+=6;goto B5bb913;
case 0x5bb915:c.instructions+=5;goto B5bb915;
case 0x5bb91b:c.instructions+=4;goto B5bb91b;
case 0x5bb91c:c.instructions+=3;goto B5bb91c;
case 0x5bb91d:c.instructions+=2;goto B5bb91d;
case 0x5bb91e:c.instructions+=1;goto B5bb91e;
case 0x5bb921:goto L5bb921;
case 0x5bb923:c.instructions+=1;goto B5bb923;
case 0x5bb925:goto L5bb925;
case 0x5bb928:c.instructions+=6;goto B5bb928;
case 0x5bb92d:c.instructions+=5;goto B5bb92d;
case 0x5bb92f:c.instructions+=4;goto B5bb92f;
case 0x5bb930:c.instructions+=3;goto B5bb930;
case 0x5bb931:c.instructions+=2;goto B5bb931;
case 0x5bb932:c.instructions+=1;goto B5bb932;
case 0x5bb938:goto L5bb938;
case 0x5bb93d:c.instructions+=4;goto B5bb93d;
case 0x5bb93f:c.instructions+=3;goto B5bb93f;
case 0x5bb940:c.instructions+=2;goto B5bb940;
case 0x5bb941:c.instructions+=1;goto B5bb941;
case 0x5bb947:goto L5bb947;
case 0x5bb94c:c.instructions+=9;goto B5bb94c;
case 0x5bb94e:c.instructions+=8;goto B5bb94e;
case 0x5bb94f:c.instructions+=7;goto B5bb94f;
case 0x5bb950:c.instructions+=6;goto B5bb950;
case 0x5bb951:c.instructions+=5;goto B5bb951;
case 0x5bb953:c.instructions+=4;goto B5bb953;
case 0x5bb954:c.instructions+=3;goto B5bb954;
case 0x5bb955:c.instructions+=2;goto B5bb955;
case 0x5bb956:c.instructions+=1;goto B5bb956;
case 0x5bb95c:goto L5bb95c;
case 0x5bb95f:c.instructions+=2;goto B5bb95f;
case 0x5bb962:c.instructions+=1;goto B5bb962;
case 0x5bb968:goto L5bb968;
case 0x5bb96a:goto L5bb96a;
case 0x5bb96c:c.instructions+=1;goto B5bb96c;
case 0x5bb970:goto L5bb970;
case 0x5bb976:c.instructions+=2;goto B5bb976;
case 0x5bb978:c.instructions+=1;goto B5bb978;
case 0x5bb97a:goto L5bb97a;
case 0x5bb97c:c.instructions+=2;goto B5bb97c;
case 0x5bb97d:c.instructions+=1;goto B5bb97d;
case 0x5bb980:goto L5bb980;
case 0x5bb986:goto L5bb986;
case 0x5bb98c:c.instructions+=2;goto B5bb98c;
case 0x5bb98e:c.instructions+=1;goto B5bb98e;
case 0x5bb990:goto L5bb990;
case 0x5bb992:c.instructions+=2;goto B5bb992;
case 0x5bb993:c.instructions+=1;goto B5bb993;
case 0x5bb996:goto L5bb996;
case 0x5bb99c:goto L5bb99c;
case 0x5bb99f:c.instructions+=2;goto B5bb99f;
case 0x5bb9a2:c.instructions+=1;goto B5bb9a2;
case 0x5bb9a4:goto L5bb9a4;
case 0x5bb9aa:c.instructions+=7;goto B5bb9aa;
case 0x5bb9b0:c.instructions+=6;goto B5bb9b0;
case 0x5bb9b6:c.instructions+=5;goto B5bb9b6;
case 0x5bb9bc:c.instructions+=4;goto B5bb9bc;
case 0x5bb9c2:c.instructions+=3;goto B5bb9c2;
case 0x5bb9c8:c.instructions+=2;goto B5bb9c8;
case 0x5bb9ce:c.instructions+=1;goto B5bb9ce;
case 0x5bb9d4:goto L5bb9d4;
case 0x5bb9d8:c.instructions+=4;goto B5bb9d8;
case 0x5bb9de:c.instructions+=3;goto B5bb9de;
case 0x5bb9e4:c.instructions+=2;goto B5bb9e4;
case 0x5bb9ea:c.instructions+=1;goto B5bb9ea;
case 0x5bb9f0:goto L5bb9f0;
case 0x5bb9f6:c.instructions+=14;goto B5bb9f6;
case 0x5bb9fb:c.instructions+=13;goto B5bb9fb;
case 0x5bb9fd:c.instructions+=12;goto B5bb9fd;
case 0x5bb9fe:c.instructions+=11;goto B5bb9fe;
case 0x5bba03:c.instructions+=10;goto B5bba03;
case 0x5bba04:c.instructions+=9;goto B5bba04;
case 0x5bba05:c.instructions+=8;goto B5bba05;
case 0x5bba0b:c.instructions+=7;goto B5bba0b;
case 0x5bba0d:c.instructions+=6;goto B5bba0d;
case 0x5bba0f:c.instructions+=5;goto B5bba0f;
case 0x5bba10:c.instructions+=4;goto B5bba10;
case 0x5bba16:c.instructions+=3;goto B5bba16;
case 0x5bba17:c.instructions+=2;goto B5bba17;
case 0x5bba18:c.instructions+=1;goto B5bba18;
case 0x5bba1b:goto L5bba1b;
case 0x5bba1d:c.instructions+=1;goto B5bba1d;
case 0x5bba23:goto L5bba23;
case 0x5bba28:c.instructions+=5;goto B5bba28;
case 0x5bba2a:c.instructions+=4;goto B5bba2a;
case 0x5bba2f:c.instructions+=3;goto B5bba2f;
case 0x5bba30:c.instructions+=2;goto B5bba30;
case 0x5bba31:c.instructions+=1;goto B5bba31;
case 0x5bba34:goto L5bba34;
case 0x5bba36:c.instructions+=2;goto B5bba36;
case 0x5bba38:c.instructions+=1;goto B5bba38;
case 0x5bba3a:goto L5bba3a;
case 0x5bba40:c.instructions+=6;goto B5bba40;
case 0x5bba45:c.instructions+=5;goto B5bba45;
case 0x5bba47:c.instructions+=4;goto B5bba47;
case 0x5bba48:c.instructions+=3;goto B5bba48;
case 0x5bba49:c.instructions+=2;goto B5bba49;
case 0x5bba4a:c.instructions+=1;goto B5bba4a;
case 0x5bba50:goto L5bba50;
case 0x5bba55:c.instructions+=4;goto B5bba55;
case 0x5bba57:c.instructions+=3;goto B5bba57;
case 0x5bba58:c.instructions+=2;goto B5bba58;
case 0x5bba59:c.instructions+=1;goto B5bba59;
case 0x5bba5f:goto L5bba5f;
case 0x5bba64:c.instructions+=9;goto B5bba64;
case 0x5bba66:c.instructions+=8;goto B5bba66;
case 0x5bba67:c.instructions+=7;goto B5bba67;
case 0x5bba68:c.instructions+=6;goto B5bba68;
case 0x5bba69:c.instructions+=5;goto B5bba69;
case 0x5bba6b:c.instructions+=4;goto B5bba6b;
case 0x5bba6c:c.instructions+=3;goto B5bba6c;
case 0x5bba6d:c.instructions+=2;goto B5bba6d;
case 0x5bba6e:c.instructions+=1;goto B5bba6e;
case 0x5bba74:goto L5bba74;
case 0x5bba7a:c.instructions+=2;goto B5bba7a;
case 0x5bba7c:c.instructions+=1;goto B5bba7c;
case 0x5bba7e:goto L5bba7e;
case 0x5bba83:c.instructions+=14;goto B5bba83;
case 0x5bba85:c.instructions+=13;goto B5bba85;
case 0x5bba86:c.instructions+=12;goto B5bba86;
case 0x5bba8b:c.instructions+=11;goto B5bba8b;
case 0x5bba8c:c.instructions+=10;goto B5bba8c;
case 0x5bba8d:c.instructions+=9;goto B5bba8d;
case 0x5bba93:c.instructions+=8;goto B5bba93;
case 0x5bba95:c.instructions+=7;goto B5bba95;
case 0x5bba96:c.instructions+=6;goto B5bba96;
case 0x5bba9c:c.instructions+=5;goto B5bba9c;
case 0x5bba9d:c.instructions+=4;goto B5bba9d;
case 0x5bbaa3:c.instructions+=3;goto B5bbaa3;
case 0x5bbaa4:c.instructions+=2;goto B5bbaa4;
case 0x5bbaa5:c.instructions+=1;goto B5bbaa5;
case 0x5bbaa8:goto L5bbaa8;
case 0x5bbaaa:c.instructions+=1;goto B5bbaaa;
case 0x5bbaac:goto L5bbaac;
case 0x5bbab2:goto L5bbab2;
case 0x5bbab4:c.instructions+=1;goto B5bbab4;
case 0x5bbab6:goto L5bbab6;
case 0x5bbabb:c.instructions+=2;goto B5bbabb;
case 0x5bbabd:c.instructions+=1;goto B5bbabd;
case 0x5bbabf:goto L5bbabf;
case 0x5bbac1:c.instructions+=2;goto B5bbac1;
case 0x5bbac2:c.instructions+=1;goto B5bbac2;
case 0x5bbac5:goto L5bbac5;
case 0x5bbacb:goto L5bbacb;
case 0x5bbad0:c.instructions+=2;goto B5bbad0;
case 0x5bbad2:c.instructions+=1;goto B5bbad2;
case 0x5bbad4:goto L5bbad4;
case 0x5bbad6:c.instructions+=2;goto B5bbad6;
case 0x5bbad7:c.instructions+=1;goto B5bbad7;
case 0x5bbada:goto L5bbada;
case 0x5bbae0:goto L5bbae0;
case 0x5bbae5:c.instructions+=2;goto B5bbae5;
case 0x5bbae7:c.instructions+=1;goto B5bbae7;
case 0x5bbae9:goto L5bbae9;
case 0x5bbaeb:c.instructions+=2;goto B5bbaeb;
case 0x5bbaec:c.instructions+=1;goto B5bbaec;
case 0x5bbaef:goto L5bbaef;
case 0x5bbaf5:goto L5bbaf5;
case 0x5bbafb:c.instructions+=3;goto B5bbafb;
case 0x5bbb01:c.instructions+=2;goto B5bbb01;
case 0x5bbb07:c.instructions+=1;goto B5bbb07;
case 0x5bbb0d:goto L5bbb0d;
case 0x5bbb12:c.instructions+=20;goto B5bbb12;
case 0x5bbb13:c.instructions+=19;goto B5bbb13;
case 0x5bbb15:c.instructions+=18;goto B5bbb15;
case 0x5bbb17:c.instructions+=17;goto B5bbb17;
case 0x5bbb1c:c.instructions+=16;goto B5bbb1c;
case 0x5bbb1d:c.instructions+=15;goto B5bbb1d;
case 0x5bbb1f:c.instructions+=14;goto B5bbb1f;
case 0x5bbb21:c.instructions+=13;goto B5bbb21;
case 0x5bbb27:c.instructions+=12;goto B5bbb27;
case 0x5bbb2d:c.instructions+=11;goto B5bbb2d;
case 0x5bbb33:c.instructions+=10;goto B5bbb33;
case 0x5bbb39:c.instructions+=9;goto B5bbb39;
case 0x5bbb3f:c.instructions+=8;goto B5bbb3f;
case 0x5bbb45:c.instructions+=7;goto B5bbb45;
case 0x5bbb49:c.instructions+=6;goto B5bbb49;
case 0x5bbb4b:c.instructions+=5;goto B5bbb4b;
case 0x5bbb4d:c.instructions+=4;goto B5bbb4d;
case 0x5bbb4f:c.instructions+=3;goto B5bbb4f;
case 0x5bbb55:c.instructions+=2;goto B5bbb55;
case 0x5bbb5a:c.instructions+=1;goto B5bbb5a;
case 0x5bbb60:goto L5bbb60;
case 0x5bbb62:c.instructions+=1;goto B5bbb62;
case 0x5bbb64:goto L5bbb64;
case 0x5bbb6a:c.instructions+=2;goto B5bbb6a;
case 0x5bbb6f:c.instructions+=1;goto B5bbb6f;
case 0x5bbb70:goto L5bbb70;
case 0x5bbb76:c.instructions+=13;goto B5bbb76;
case 0x5bbb78:c.instructions+=12;goto B5bbb78;
case 0x5bbb79:c.instructions+=11;goto B5bbb79;
case 0x5bbb7f:c.instructions+=10;goto B5bbb7f;
case 0x5bbb80:c.instructions+=9;goto B5bbb80;
case 0x5bbb81:c.instructions+=8;goto B5bbb81;
case 0x5bbb87:c.instructions+=7;goto B5bbb87;
case 0x5bbb88:c.instructions+=6;goto B5bbb88;
case 0x5bbb8a:c.instructions+=5;goto B5bbb8a;
case 0x5bbb8c:c.instructions+=4;goto B5bbb8c;
case 0x5bbb8d:c.instructions+=3;goto B5bbb8d;
case 0x5bbb8e:c.instructions+=2;goto B5bbb8e;
case 0x5bbb8f:c.instructions+=1;goto B5bbb8f;
case 0x5bbb92:goto L5bbb92;
case 0x5bbb94:c.instructions+=2;goto B5bbb94;
case 0x5bbb96:c.instructions+=1;goto B5bbb96;
case 0x5bbb98:goto L5bbb98;
case 0x5bbb9a:c.instructions+=6;goto B5bbb9a;
case 0x5bbb9c:c.instructions+=5;goto B5bbb9c;
case 0x5bbba2:c.instructions+=4;goto B5bbba2;
case 0x5bbba3:c.instructions+=3;goto B5bbba3;
case 0x5bbba4:c.instructions+=2;goto B5bbba4;
case 0x5bbba5:c.instructions+=1;goto B5bbba5;
case 0x5bbba8:goto L5bbba8;
case 0x5bbbaa:c.instructions+=1;goto B5bbbaa;
case 0x5bbbac:goto L5bbbac;
case 0x5bbbaf:c.instructions+=6;goto B5bbbaf;
case 0x5bbbb4:c.instructions+=5;goto B5bbbb4;
case 0x5bbbb6:c.instructions+=4;goto B5bbbb6;
case 0x5bbbb7:c.instructions+=3;goto B5bbbb7;
case 0x5bbbb8:c.instructions+=2;goto B5bbbb8;
case 0x5bbbb9:c.instructions+=1;goto B5bbbb9;
case 0x5bbbbf:goto L5bbbbf;
case 0x5bbbc4:c.instructions+=4;goto B5bbbc4;
case 0x5bbbc6:c.instructions+=3;goto B5bbbc6;
case 0x5bbbc7:c.instructions+=2;goto B5bbbc7;
case 0x5bbbc8:c.instructions+=1;goto B5bbbc8;
case 0x5bbbce:goto L5bbbce;
case 0x5bbbd3:c.instructions+=9;goto B5bbbd3;
case 0x5bbbd5:c.instructions+=8;goto B5bbbd5;
case 0x5bbbd6:c.instructions+=7;goto B5bbbd6;
case 0x5bbbd7:c.instructions+=6;goto B5bbbd7;
case 0x5bbbd8:c.instructions+=5;goto B5bbbd8;
case 0x5bbbda:c.instructions+=4;goto B5bbbda;
case 0x5bbbdb:c.instructions+=3;goto B5bbbdb;
case 0x5bbbdc:c.instructions+=2;goto B5bbbdc;
case 0x5bbbdd:c.instructions+=1;goto B5bbbdd;
case 0x5bbbe3:goto L5bbbe3;
case 0x5bbbe6:c.instructions+=2;goto B5bbbe6;
case 0x5bbbe9:c.instructions+=1;goto B5bbbe9;
case 0x5bbbef:goto L5bbbef;
case 0x5bbbf1:goto L5bbbf1;
case 0x5bbbf3:goto L5bbbf3;
case 0x5bbbf9:c.instructions+=2;goto B5bbbf9;
case 0x5bbbfb:c.instructions+=1;goto B5bbbfb;
case 0x5bbbfd:goto L5bbbfd;
case 0x5bbbff:c.instructions+=2;goto B5bbbff;
case 0x5bbc00:c.instructions+=1;goto B5bbc00;
case 0x5bbc03:goto L5bbc03;
case 0x5bbc09:goto L5bbc09;
case 0x5bbc0f:c.instructions+=2;goto B5bbc0f;
case 0x5bbc11:c.instructions+=1;goto B5bbc11;
case 0x5bbc13:goto L5bbc13;
case 0x5bbc15:c.instructions+=2;goto B5bbc15;
case 0x5bbc16:c.instructions+=1;goto B5bbc16;
case 0x5bbc19:goto L5bbc19;
case 0x5bbc1f:goto L5bbc1f;
case 0x5bbc22:c.instructions+=2;goto B5bbc22;
case 0x5bbc25:c.instructions+=1;goto B5bbc25;
case 0x5bbc27:goto L5bbc27;
case 0x5bbc2d:c.instructions+=3;goto B5bbc2d;
case 0x5bbc33:c.instructions+=2;goto B5bbc33;
case 0x5bbc39:c.instructions+=1;goto B5bbc39;
case 0x5bbc3f:goto L5bbc3f;
case 0x5bbc44:goto L5bbc44;
case 0x5bbc4a:c.instructions+=4;goto B5bbc4a;
case 0x5bbc4b:c.instructions+=3;goto B5bbc4b;
case 0x5bbc4c:c.instructions+=2;goto B5bbc4c;
case 0x5bbc4d:c.instructions+=1;goto B5bbc4d;
case 0x5bbc4f:goto L5bbc4f;
case 0x5bbc55:c.instructions+=14;goto B5bbc55;
case 0x5bbc5a:c.instructions+=13;goto B5bbc5a;
case 0x5bbc5c:c.instructions+=12;goto B5bbc5c;
case 0x5bbc5d:c.instructions+=11;goto B5bbc5d;
case 0x5bbc62:c.instructions+=10;goto B5bbc62;
case 0x5bbc64:c.instructions+=9;goto B5bbc64;
case 0x5bbc65:c.instructions+=8;goto B5bbc65;
case 0x5bbc6b:c.instructions+=7;goto B5bbc6b;
case 0x5bbc6c:c.instructions+=6;goto B5bbc6c;
case 0x5bbc6e:c.instructions+=5;goto B5bbc6e;
case 0x5bbc6f:c.instructions+=4;goto B5bbc6f;
case 0x5bbc70:c.instructions+=3;goto B5bbc70;
case 0x5bbc71:c.instructions+=2;goto B5bbc71;
case 0x5bbc78:c.instructions+=1;goto B5bbc78;
case 0x5bbc7b:goto L5bbc7b;
case 0x5bbc81:c.instructions+=13;goto B5bbc81;
case 0x5bbc86:c.instructions+=12;goto B5bbc86;
case 0x5bbc88:c.instructions+=11;goto B5bbc88;
case 0x5bbc89:c.instructions+=10;goto B5bbc89;
case 0x5bbc8e:c.instructions+=9;goto B5bbc8e;
case 0x5bbc90:c.instructions+=8;goto B5bbc90;
case 0x5bbc91:c.instructions+=7;goto B5bbc91;
case 0x5bbc97:c.instructions+=6;goto B5bbc97;
case 0x5bbc98:c.instructions+=5;goto B5bbc98;
case 0x5bbc9a:c.instructions+=4;goto B5bbc9a;
case 0x5bbc9b:c.instructions+=3;goto B5bbc9b;
case 0x5bbc9d:c.instructions+=2;goto B5bbc9d;
case 0x5bbc9e:c.instructions+=1;goto B5bbc9e;
case 0x5bbca1:goto L5bbca1;
case 0x5bbca7:c.instructions+=13;goto B5bbca7;
case 0x5bbcac:c.instructions+=12;goto B5bbcac;
case 0x5bbcae:c.instructions+=11;goto B5bbcae;
case 0x5bbcaf:c.instructions+=10;goto B5bbcaf;
case 0x5bbcb4:c.instructions+=9;goto B5bbcb4;
case 0x5bbcb6:c.instructions+=8;goto B5bbcb6;
case 0x5bbcb7:c.instructions+=7;goto B5bbcb7;
case 0x5bbcbd:c.instructions+=6;goto B5bbcbd;
case 0x5bbcbe:c.instructions+=5;goto B5bbcbe;
case 0x5bbcc0:c.instructions+=4;goto B5bbcc0;
case 0x5bbcc2:c.instructions+=3;goto B5bbcc2;
case 0x5bbcc3:c.instructions+=2;goto B5bbcc3;
case 0x5bbcc4:c.instructions+=1;goto B5bbcc4;
case 0x5bbcc7:goto L5bbcc7;
case 0x5bbcc8:c.instructions+=2;goto B5bbcc8;
case 0x5bbcc9:c.instructions+=1;goto B5bbcc9;
case 0x5bbcd0:goto L5bbcd0;
case 0x5bbcd1:c.instructions+=3;goto B5bbcd1;
case 0x5bbcd2:c.instructions+=2;goto B5bbcd2;
case 0x5bbcd4:c.instructions+=1;goto B5bbcd4;
case 0x5bbcd6:goto L5bbcd6;
case 0x5bbcdc:c.instructions+=2;goto B5bbcdc;
case 0x5bbcde:c.instructions+=1;goto B5bbcde;
case 0x5bbce0:goto L5bbce0;
case 0x5bbce2:c.instructions+=2;goto B5bbce2;
case 0x5bbce3:c.instructions+=1;goto B5bbce3;
case 0x5bbce6:goto L5bbce6;
case 0x5bbcec:goto L5bbcec;
case 0x5bbcf2:c.instructions+=2;goto B5bbcf2;
case 0x5bbcf4:c.instructions+=1;goto B5bbcf4;
case 0x5bbcf6:goto L5bbcf6;
case 0x5bbcf8:c.instructions+=2;goto B5bbcf8;
case 0x5bbcf9:c.instructions+=1;goto B5bbcf9;
case 0x5bbcfc:goto L5bbcfc;
case 0x5bbd02:goto L5bbd02;
case 0x5bbd05:c.instructions+=2;goto B5bbd05;
case 0x5bbd08:c.instructions+=1;goto B5bbd08;
case 0x5bbd0a:goto L5bbd0a;
case 0x5bbd0c:c.instructions+=1;goto B5bbd0c;
case 0x5bbd10:goto L5bbd10;
case 0x5bbd16:c.instructions+=2;goto B5bbd16;
case 0x5bbd18:c.instructions+=1;goto B5bbd18;
case 0x5bbd1a:goto L5bbd1a;
case 0x5bbd1c:c.instructions+=2;goto B5bbd1c;
case 0x5bbd1d:c.instructions+=1;goto B5bbd1d;
case 0x5bbd20:goto L5bbd20;
case 0x5bbd26:goto L5bbd26;
case 0x5bbd2c:c.instructions+=2;goto B5bbd2c;
case 0x5bbd2e:c.instructions+=1;goto B5bbd2e;
case 0x5bbd30:goto L5bbd30;
case 0x5bbd32:c.instructions+=2;goto B5bbd32;
case 0x5bbd33:c.instructions+=1;goto B5bbd33;
case 0x5bbd36:goto L5bbd36;
case 0x5bbd3c:goto L5bbd3c;
case 0x5bbd3f:c.instructions+=2;goto B5bbd3f;
case 0x5bbd42:c.instructions+=1;goto B5bbd42;
case 0x5bbd44:goto L5bbd44;
case 0x5bbd49:c.instructions+=2;goto B5bbd49;
case 0x5bbd4b:c.instructions+=1;goto B5bbd4b;
case 0x5bbd4d:goto L5bbd4d;
case 0x5bbd4f:c.instructions+=2;goto B5bbd4f;
case 0x5bbd50:c.instructions+=1;goto B5bbd50;
case 0x5bbd53:goto L5bbd53;
case 0x5bbd59:goto L5bbd59;
case 0x5bbd5e:c.instructions+=2;goto B5bbd5e;
case 0x5bbd60:c.instructions+=1;goto B5bbd60;
case 0x5bbd62:goto L5bbd62;
case 0x5bbd64:c.instructions+=2;goto B5bbd64;
case 0x5bbd65:c.instructions+=1;goto B5bbd65;
case 0x5bbd68:goto L5bbd68;
case 0x5bbd6e:goto L5bbd6e;
case 0x5bbd73:c.instructions+=2;goto B5bbd73;
case 0x5bbd75:c.instructions+=1;goto B5bbd75;
case 0x5bbd77:goto L5bbd77;
case 0x5bbd79:c.instructions+=2;goto B5bbd79;
case 0x5bbd7a:c.instructions+=1;goto B5bbd7a;
case 0x5bbd7d:goto L5bbd7d;
case 0x5bbd83:goto L5bbd83;
case 0x5bbd88:c.instructions+=2;goto B5bbd88;
case 0x5bbd8a:c.instructions+=1;goto B5bbd8a;
case 0x5bbd8c:goto L5bbd8c;
case 0x5bbd8e:c.instructions+=2;goto B5bbd8e;
case 0x5bbd8f:c.instructions+=1;goto B5bbd8f;
case 0x5bbd92:goto L5bbd92;
case 0x5bbd97:c.instructions+=4;goto B5bbd97;
case 0x5bbd9d:c.instructions+=3;goto B5bbd9d;
case 0x5bbd9f:c.instructions+=2;goto B5bbd9f;
case 0x5bbda0:c.instructions+=1;goto B5bbda0;
case 0x5bbda3:goto L5bbda3;
case 0x5bbda9:goto L5bbda9;
case 0x5bbdaa:c.instructions+=2;goto B5bbdaa;
case 0x5bbdab:c.instructions+=1;goto B5bbdab;
case 0x5bbdb0:goto L5bbdb0;
case 0x5bbdb1:c.instructions+=5;goto B5bbdb1;
case 0x5bbdb5:c.instructions+=4;goto B5bbdb5;
case 0x5bbdbb:c.instructions+=3;goto B5bbdbb;
case 0x5bbdbd:c.instructions+=2;goto B5bbdbd;
case 0x5bbdc0:c.instructions+=1;goto B5bbdc0;
case 0x5bbdc2:goto L5bbdc2;
case 0x5bbdc8:c.instructions+=2;goto B5bbdc8;
case 0x5bbdc9:c.instructions+=1;goto B5bbdc9;
case 0x5bbdca:goto L5bbdca;
case 0x5bbdce:c.instructions+=4;goto B5bbdce;
case 0x5bbdd4:c.instructions+=3;goto B5bbdd4;
case 0x5bbdd6:c.instructions+=2;goto B5bbdd6;
case 0x5bbdd9:c.instructions+=1;goto B5bbdd9;
case 0x5bbddb:goto L5bbddb;
case 0x5bbde1:c.instructions+=2;goto B5bbde1;
case 0x5bbde2:c.instructions+=1;goto B5bbde2;
case 0x5bbde3:goto L5bbde3;
case 0x5bbde9:c.instructions+=4;goto B5bbde9;
case 0x5bbdef:c.instructions+=3;goto B5bbdef;
case 0x5bbdf1:c.instructions+=2;goto B5bbdf1;
case 0x5bbdf4:c.instructions+=1;goto B5bbdf4;
case 0x5bbdf6:goto L5bbdf6;
case 0x5bbe00:goto L5bbe00;
case 0x5bbe06:c.instructions+=13;goto B5bbe06;
case 0x5bbe0c:c.instructions+=12;goto B5bbe0c;
case 0x5bbe10:c.instructions+=11;goto B5bbe10;
case 0x5bbe16:c.instructions+=10;goto B5bbe16;
case 0x5bbe1c:c.instructions+=9;goto B5bbe1c;
case 0x5bbe20:c.instructions+=8;goto B5bbe20;
case 0x5bbe26:c.instructions+=7;goto B5bbe26;
case 0x5bbe28:c.instructions+=6;goto B5bbe28;
case 0x5bbe2c:c.instructions+=5;goto B5bbe2c;
case 0x5bbe30:c.instructions+=4;goto B5bbe30;
case 0x5bbe36:c.instructions+=3;goto B5bbe36;
case 0x5bbe38:c.instructions+=2;goto B5bbe38;
case 0x5bbe3b:c.instructions+=1;goto B5bbe3b;
case 0x5bbe3d:goto L5bbe3d;
case 0x5bbe41:c.instructions+=8;goto B5bbe41;
case 0x5bbe45:c.instructions+=7;goto B5bbe45;
case 0x5bbe4b:c.instructions+=6;goto B5bbe4b;
case 0x5bbe4d:c.instructions+=5;goto B5bbe4d;
case 0x5bbe4f:c.instructions+=4;goto B5bbe4f;
case 0x5bbe51:c.instructions+=3;goto B5bbe51;
case 0x5bbe53:c.instructions+=2;goto B5bbe53;
case 0x5bbe54:c.instructions+=1;goto B5bbe54;
case 0x5bbe55:goto L5bbe55;
case 0x5bbe59:c.instructions+=9;goto B5bbe59;
case 0x5bbe5d:c.instructions+=8;goto B5bbe5d;
case 0x5bbe61:c.instructions+=7;goto B5bbe61;
case 0x5bbe67:c.instructions+=6;goto B5bbe67;
case 0x5bbe69:c.instructions+=5;goto B5bbe69;
case 0x5bbe6b:c.instructions+=4;goto B5bbe6b;
case 0x5bbe6d:c.instructions+=3;goto B5bbe6d;
case 0x5bbe6f:c.instructions+=2;goto B5bbe6f;
case 0x5bbe70:c.instructions+=1;goto B5bbe70;
case 0x5bbe80:goto L5bbe80;
case 0x5bbe83:c.instructions+=13;goto B5bbe83;
case 0x5bbe88:c.instructions+=12;goto B5bbe88;
case 0x5bbe8a:c.instructions+=11;goto B5bbe8a;
case 0x5bbe8b:c.instructions+=10;goto B5bbe8b;
case 0x5bbe8c:c.instructions+=9;goto B5bbe8c;
case 0x5bbe8d:c.instructions+=8;goto B5bbe8d;
case 0x5bbe8e:c.instructions+=7;goto B5bbe8e;
case 0x5bbe90:c.instructions+=6;goto B5bbe90;
case 0x5bbe92:c.instructions+=5;goto B5bbe92;
case 0x5bbe96:c.instructions+=4;goto B5bbe96;
case 0x5bbe97:c.instructions+=3;goto B5bbe97;
case 0x5bbe99:c.instructions+=2;goto B5bbe99;
case 0x5bbe9a:c.instructions+=1;goto B5bbe9a;
case 0x5bbe9d:goto L5bbe9d;
case 0x5bbea3:c.instructions+=6;goto B5bbea3;
case 0x5bbea7:c.instructions+=5;goto B5bbea7;
case 0x5bbea9:c.instructions+=4;goto B5bbea9;
case 0x5bbeab:c.instructions+=3;goto B5bbeab;
case 0x5bbeaf:c.instructions+=2;goto B5bbeaf;
case 0x5bbeb3:c.instructions+=1;goto B5bbeb3;
case 0x5bbeb9:goto L5bbeb9;
case 0x5bbec0:goto L5bbec0;
case 0x5bbec2:c.instructions+=3;goto B5bbec2;
case 0x5bbec4:c.instructions+=2;goto B5bbec4;
case 0x5bbec8:c.instructions+=1;goto B5bbec8;
case 0x5bbece:goto L5bbece;
case 0x5bbed2:c.instructions+=2;goto B5bbed2;
case 0x5bbed6:c.instructions+=1;goto B5bbed6;
case 0x5bbee0:goto L5bbee0;
case 0x5bbee6:c.instructions+=10;goto B5bbee6;
case 0x5bbeec:c.instructions+=9;goto B5bbeec;
case 0x5bbeed:c.instructions+=8;goto B5bbeed;
case 0x5bbef3:c.instructions+=7;goto B5bbef3;
case 0x5bbef7:c.instructions+=6;goto B5bbef7;
case 0x5bbefb:c.instructions+=5;goto B5bbefb;
case 0x5bbeff:c.instructions+=4;goto B5bbeff;
case 0x5bbf03:c.instructions+=3;goto B5bbf03;
case 0x5bbf07:c.instructions+=2;goto B5bbf07;
case 0x5bbf08:c.instructions+=1;goto B5bbf08;
case 0x5bbf0d:goto L5bbf0d;
case 0x5bbf11:c.instructions+=8;goto B5bbf11;
case 0x5bbf15:c.instructions+=7;goto B5bbf15;
case 0x5bbf1a:c.instructions+=6;goto B5bbf1a;
case 0x5bbf1e:c.instructions+=5;goto B5bbf1e;
case 0x5bbf1f:c.instructions+=4;goto B5bbf1f;
case 0x5bbf23:c.instructions+=3;goto B5bbf23;
case 0x5bbf27:c.instructions+=2;goto B5bbf27;
case 0x5bbf28:c.instructions+=1;goto B5bbf28;
case 0x5bbf2d:goto L5bbf2d;
case 0x5bbf31:c.instructions+=4;goto B5bbf31;
case 0x5bbf37:c.instructions+=3;goto B5bbf37;
case 0x5bbf38:c.instructions+=2;goto B5bbf38;
case 0x5bbf39:c.instructions+=1;goto B5bbf39;
case 0x5bbf3e:goto L5bbf3e;
case 0x5bbf42:c.instructions+=4;goto B5bbf42;
case 0x5bbf48:c.instructions+=3;goto B5bbf48;
case 0x5bbf49:c.instructions+=2;goto B5bbf49;
case 0x5bbf4a:c.instructions+=1;goto B5bbf4a;
case 0x5bbf4f:goto L5bbf4f;
case 0x5bbf55:c.instructions+=2;goto B5bbf55;
case 0x5bbf58:c.instructions+=1;goto B5bbf58;
case 0x5bbf5d:goto L5bbf5d;
case 0x5bbf61:c.instructions+=4;goto B5bbf61;
case 0x5bbf67:c.instructions+=3;goto B5bbf67;
case 0x5bbf69:c.instructions+=2;goto B5bbf69;
case 0x5bbf6b:c.instructions+=1;goto B5bbf6b;
case 0x5bbf70:goto L5bbf70;
case 0x5bbf74:c.instructions+=4;goto B5bbf74;
case 0x5bbf7a:c.instructions+=3;goto B5bbf7a;
case 0x5bbf7c:c.instructions+=2;goto B5bbf7c;
case 0x5bbf7f:c.instructions+=1;goto B5bbf7f;
case 0x5bbf84:goto L5bbf84;
case 0x5bbf88:c.instructions+=5;goto B5bbf88;
case 0x5bbf8e:c.instructions+=4;goto B5bbf8e;
case 0x5bbf91:c.instructions+=3;goto B5bbf91;
case 0x5bbf93:c.instructions+=2;goto B5bbf93;
case 0x5bbf96:c.instructions+=1;goto B5bbf96;
case 0x5bbf9b:goto L5bbf9b;
case 0x5bbf9e:c.instructions+=10;goto B5bbf9e;
case 0x5bbfa2:c.instructions+=9;goto B5bbfa2;
case 0x5bbfa5:c.instructions+=8;goto B5bbfa5;
case 0x5bbfa7:c.instructions+=7;goto B5bbfa7;
case 0x5bbfa9:c.instructions+=6;goto B5bbfa9;
case 0x5bbfac:c.instructions+=5;goto B5bbfac;
case 0x5bbfb2:c.instructions+=4;goto B5bbfb2;
case 0x5bbfb3:c.instructions+=3;goto B5bbfb3;
case 0x5bbfb5:c.instructions+=2;goto B5bbfb5;
case 0x5bbfb9:c.instructions+=1;goto B5bbfb9;
case 0x5bbfbf:goto L5bbfbf;
case 0x5bbfc0:c.instructions+=3;goto B5bbfc0;
case 0x5bbfc2:c.instructions+=2;goto B5bbfc2;
case 0x5bbfc6:c.instructions+=1;goto B5bbfc6;
case 0x5bbfcc:goto L5bbfcc;
case 0x5bbfd1:c.instructions+=4;goto B5bbfd1;
case 0x5bbfd3:c.instructions+=3;goto B5bbfd3;
case 0x5bbfd5:c.instructions+=2;goto B5bbfd5;
case 0x5bbfd6:c.instructions+=1;goto B5bbfd6;
case 0x5bbfd9:goto L5bbfd9;
case 0x5bbfdf:c.instructions+=7;goto B5bbfdf;
case 0x5bbfe4:c.instructions+=6;goto B5bbfe4;
case 0x5bbfea:c.instructions+=5;goto B5bbfea;
case 0x5bbff0:c.instructions+=4;goto B5bbff0;
case 0x5bbff6:c.instructions+=3;goto B5bbff6;
case 0x5bbff8:c.instructions+=2;goto B5bbff8;
case 0x5bbffe:c.instructions+=1;goto B5bbffe;
default:missing_instruction(c.pc);}
B5bb001:L5bb001:{c.instructions+=29;NFSU2_TR(0x5bb001);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bb003:{NFSU2_TR(0x5bb003);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb00a:{NFSU2_TR(0x5bb00a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb012:{NFSU2_TR(0x5bb012);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb015:{NFSU2_TR(0x5bb015);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb01d:{NFSU2_TR(0x5bb01d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bb01f:{NFSU2_TR(0x5bb01f);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb026:{NFSU2_TR(0x5bb026);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb02e:{NFSU2_TR(0x5bb02e);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb031:{NFSU2_TR(0x5bb031);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bb035:{NFSU2_TR(0x5bb035);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb036:{NFSU2_TR(0x5bb036);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bb038:{NFSU2_TR(0x5bb038);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb039:{NFSU2_TR(0x5bb039);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb040:{NFSU2_TR(0x5bb040);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb048:{NFSU2_TR(0x5bb048);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb050:{NFSU2_TR(0x5bb050);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb058:{NFSU2_TR(0x5bb058);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb060:{NFSU2_TR(0x5bb060);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb068:{NFSU2_TR(0x5bb068);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb070:{NFSU2_TR(0x5bb070);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb078:{NFSU2_TR(0x5bb078);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb080:{NFSU2_TR(0x5bb080);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb088:{NFSU2_TR(0x5bb088);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb090:{NFSU2_TR(0x5bb090);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb09b:{NFSU2_TR(0x5bb09b);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb0a6:{NFSU2_TR(0x5bb0a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb0b1:{NFSU2_TR(0x5bb0b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb0bc:{NFSU2_TR(0x5bb0bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb0c1ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bb0c1:L5bb0c1:{c.instructions+=5;NFSU2_TR(0x5bb0c1);
__builtin_memmove((R+0),(R+24),4);
}
B5bb0c3:{NFSU2_TR(0x5bb0c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb0c4:{NFSU2_TR(0x5bb0c4);
__builtin_memmove((R+16),(R+20),4);
}
B5bb0c6:{NFSU2_TR(0x5bb0c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb0c7:{NFSU2_TR(0x5bb0c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb0d0:L5bb0d0:{c.instructions+=10;NFSU2_TR(0x5bb0d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0d1:{NFSU2_TR(0x5bb0d1);
__builtin_memmove((R+20),(R+16),4);
}
B5bb0d3:{NFSU2_TR(0x5bb0d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bb0d6:{NFSU2_TR(0x5bb0d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B5bb0d9:{NFSU2_TR(0x5bb0d9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0da:{NFSU2_TR(0x5bb0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb0dd:{NFSU2_TR(0x5bb0dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bb0e1:{NFSU2_TR(0x5bb0e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0e2:{NFSU2_TR(0x5bb0e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0e3:{NFSU2_TR(0x5bb0e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb0e8ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5bb0e8:L5bb0e8:{c.instructions+=7;NFSU2_TR(0x5bb0e8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb0eb:{NFSU2_TR(0x5bb0eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0ec:{NFSU2_TR(0x5bb0ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bb0f0:{NFSU2_TR(0x5bb0f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0f1:{NFSU2_TR(0x5bb0f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bb0f5:{NFSU2_TR(0x5bb0f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb0f6:{NFSU2_TR(0x5bb0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb0fbull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5bb0fb:L5bb0fb:{c.instructions+=5;NFSU2_TR(0x5bb0fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bb0ff:{NFSU2_TR(0x5bb0ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb100:{NFSU2_TR(0x5bb100);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bb104:{NFSU2_TR(0x5bb104);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb105:{NFSU2_TR(0x5bb105);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb10aull));
TAIL_STATIC(0x43cf10u,43c);
}
B5bb10a:L5bb10a:{c.instructions+=7;NFSU2_TR(0x5bb10a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bb10e:{NFSU2_TR(0x5bb10e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb10f:{NFSU2_TR(0x5bb10f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bb113:{NFSU2_TR(0x5bb113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb114:{NFSU2_TR(0x5bb114);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bb118:{NFSU2_TR(0x5bb118);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb119:{NFSU2_TR(0x5bb119);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb11eull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5bb11e:L5bb11e:{c.instructions+=36;NFSU2_TR(0x5bb11e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb122:{NFSU2_TR(0x5bb122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb125:{NFSU2_TR(0x5bb125);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb129:{NFSU2_TR(0x5bb129);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb12b:{NFSU2_TR(0x5bb12b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb12f:{NFSU2_TR(0x5bb12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb132:{NFSU2_TR(0x5bb132);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb136:{NFSU2_TR(0x5bb136);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb139:{NFSU2_TR(0x5bb139);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb13d:{NFSU2_TR(0x5bb13d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb140:{NFSU2_TR(0x5bb140);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb144:{NFSU2_TR(0x5bb144);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb147:{NFSU2_TR(0x5bb147);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb14b:{NFSU2_TR(0x5bb14b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb14e:{NFSU2_TR(0x5bb14e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb152:{NFSU2_TR(0x5bb152);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb155:{NFSU2_TR(0x5bb155);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb159:{NFSU2_TR(0x5bb159);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb15c:{NFSU2_TR(0x5bb15c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb160:{NFSU2_TR(0x5bb160);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb163:{NFSU2_TR(0x5bb163);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb167:{NFSU2_TR(0x5bb167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb16a:{NFSU2_TR(0x5bb16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb16d:{NFSU2_TR(0x5bb16d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5bb170:{NFSU2_TR(0x5bb170);
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
B5bb172:{NFSU2_TR(0x5bb172);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb175:{NFSU2_TR(0x5bb175);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb178:{NFSU2_TR(0x5bb178);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb17b:{NFSU2_TR(0x5bb17b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb17e:{NFSU2_TR(0x5bb17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb181:{NFSU2_TR(0x5bb181);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb184:{NFSU2_TR(0x5bb184);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb18b:{NFSU2_TR(0x5bb18b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb18c:{NFSU2_TR(0x5bb18c);
__builtin_memmove((R+16),(R+20),4);
}
B5bb18e:{NFSU2_TR(0x5bb18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb18f:{NFSU2_TR(0x5bb18f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb190:L5bb190:{c.instructions+=6;NFSU2_TR(0x5bb190);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb194:{NFSU2_TR(0x5bb194);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb195:{NFSU2_TR(0x5bb195);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb199:{NFSU2_TR(0x5bb199);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb19a:{NFSU2_TR(0x5bb19a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb19b:{NFSU2_TR(0x5bb19b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb1a0ull));
TAIL_STATIC(0x63d12cu,63d);
}
B5bb1a0:L5bb1a0:{c.instructions+=11;NFSU2_TR(0x5bb1a0);
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
B5bb1a2:{NFSU2_TR(0x5bb1a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1a5:{NFSU2_TR(0x5bb1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1a8:{NFSU2_TR(0x5bb1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1ab:{NFSU2_TR(0x5bb1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1ae:{NFSU2_TR(0x5bb1ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1b1:{NFSU2_TR(0x5bb1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1b4:{NFSU2_TR(0x5bb1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1b7:{NFSU2_TR(0x5bb1b7);
__builtin_memmove((R+0),(R+24),4);
}
B5bb1b9:{NFSU2_TR(0x5bb1b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb1ba:{NFSU2_TR(0x5bb1ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb1c0:L5bb1c0:{c.instructions+=31;NFSU2_TR(0x5bb1c0);
__builtin_memmove((R+0),(R+4),4);
}
B5bb1c2:{NFSU2_TR(0x5bb1c2);
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
B5bb1c4:{NFSU2_TR(0x5bb1c4);
w4(R+8,u32(0x42800000ull));
}
B5bb1c9:{NFSU2_TR(0x5bb1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1cc:{NFSU2_TR(0x5bb1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1cf:{NFSU2_TR(0x5bb1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1d2:{NFSU2_TR(0x5bb1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1d5:{NFSU2_TR(0x5bb1d5);
w4(R+8,u32(0x80808080ull));
}
B5bb1da:{NFSU2_TR(0x5bb1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1dd:{NFSU2_TR(0x5bb1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1e0:{NFSU2_TR(0x5bb1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1e3:{NFSU2_TR(0x5bb1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1e6:{NFSU2_TR(0x5bb1e6);
w4(R+8,u32(0x3f800000ull));
}
B5bb1eb:{NFSU2_TR(0x5bb1eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5bb1ed:{NFSU2_TR(0x5bb1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1f0:{NFSU2_TR(0x5bb1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1f3:{NFSU2_TR(0x5bb1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1f6:{NFSU2_TR(0x5bb1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1f9:{NFSU2_TR(0x5bb1f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1fc:{NFSU2_TR(0x5bb1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb1ff:{NFSU2_TR(0x5bb1ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb202:{NFSU2_TR(0x5bb202);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb205:{NFSU2_TR(0x5bb205);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb208:{NFSU2_TR(0x5bb208);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb20b:{NFSU2_TR(0x5bb20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb20e:{NFSU2_TR(0x5bb20e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb211:{NFSU2_TR(0x5bb211);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb214:{NFSU2_TR(0x5bb214);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb217:{NFSU2_TR(0x5bb217);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb21a:{NFSU2_TR(0x5bb21a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb21d:{NFSU2_TR(0x5bb21d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb220:L5bb220:{c.instructions+=36;NFSU2_TR(0x5bb220);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb221:{NFSU2_TR(0x5bb221);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb222:{NFSU2_TR(0x5bb222);
__builtin_memmove((R+20),gp(0x870974),4);
}
B5bb228:{NFSU2_TR(0x5bb228);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb229:{NFSU2_TR(0x5bb229);
__builtin_memmove((R+24),(R+4),4);
}
B5bb22b:{NFSU2_TR(0x5bb22b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb22c:{NFSU2_TR(0x5bb22c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bb230:{NFSU2_TR(0x5bb230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bb232:{NFSU2_TR(0x5bb232);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bb234:{NFSU2_TR(0x5bb234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb237:{NFSU2_TR(0x5bb237);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb23b:{NFSU2_TR(0x5bb23b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5bb23d:{NFSU2_TR(0x5bb23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb240:{NFSU2_TR(0x5bb240);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bb244:{NFSU2_TR(0x5bb244);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb247:{NFSU2_TR(0x5bb247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb249:{NFSU2_TR(0x5bb249);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb24a:{NFSU2_TR(0x5bb24a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5bb24d:{NFSU2_TR(0x5bb24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb250:{NFSU2_TR(0x5bb250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb251:{NFSU2_TR(0x5bb251);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x18ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb258:{NFSU2_TR(0x5bb258);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb25b:{NFSU2_TR(0x5bb25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb25e:{NFSU2_TR(0x5bb25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb261:{NFSU2_TR(0x5bb261);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb263:{NFSU2_TR(0x5bb263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb266:{NFSU2_TR(0x5bb266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb269:{NFSU2_TR(0x5bb269);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb26a:{NFSU2_TR(0x5bb26a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xaull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xaull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb26d:{NFSU2_TR(0x5bb26d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb26e:{NFSU2_TR(0x5bb26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5bb271:{NFSU2_TR(0x5bb271);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb276:{NFSU2_TR(0x5bb276);
u8 U[45];
w4(U+37,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5bb279:{NFSU2_TR(0x5bb279);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb27a:{NFSU2_TR(0x5bb27a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb27b:{NFSU2_TR(0x5bb27b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb27eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb27e:L5bb27e:{c.instructions+=13;NFSU2_TR(0x5bb27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bb280:{NFSU2_TR(0x5bb280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb283:{NFSU2_TR(0x5bb283);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb284:{NFSU2_TR(0x5bb284);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb287:{NFSU2_TR(0x5bb287);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb288:{NFSU2_TR(0x5bb288);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb28a:{NFSU2_TR(0x5bb28a);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb28c:{NFSU2_TR(0x5bb28c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bb28f:{NFSU2_TR(0x5bb28f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb290:{NFSU2_TR(0x5bb290);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
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
B5bb293:{NFSU2_TR(0x5bb293);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb294:{NFSU2_TR(0x5bb294);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb295:{NFSU2_TR(0x5bb295);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb298ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb298:L5bb298:{c.instructions+=10;NFSU2_TR(0x5bb298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bb29a:{NFSU2_TR(0x5bb29a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb29b:{NFSU2_TR(0x5bb29b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bb29f:{NFSU2_TR(0x5bb29f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb2a0:{NFSU2_TR(0x5bb2a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb2a1:{NFSU2_TR(0x5bb2a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb2a2:{NFSU2_TR(0x5bb2a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb2a6:{NFSU2_TR(0x5bb2a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb2a8:{NFSU2_TR(0x5bb2a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb2a9:{NFSU2_TR(0x5bb2a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb2acull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb2ac:L5bb2ac:{c.instructions+=4;NFSU2_TR(0x5bb2ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bb2ae:{NFSU2_TR(0x5bb2ae);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bb2b0:{NFSU2_TR(0x5bb2b0);
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
B5bb2b2:{NFSU2_TR(0x5bb2b2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5bb30d;}}
}
B5bb2b4:L5bb2b4:{c.instructions+=2;NFSU2_TR(0x5bb2b4);
w4(R+0,u32(0x1ull));
}
B5bb2b9:{NFSU2_TR(0x5bb2b9);
__builtin_memmove((R+16),(R+16),4);
}
B5bb2c0:L5bb2c0:{c.instructions+=23;NFSU2_TR(0x5bb2c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bb2c4:{NFSU2_TR(0x5bb2c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bb2c7:{NFSU2_TR(0x5bb2c7);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+12)),r2(U+0));
}
B5bb2ca:{NFSU2_TR(0x5bb2ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bb2ce:{NFSU2_TR(0x5bb2ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bb2d1:{NFSU2_TR(0x5bb2d1);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5bb2d5:{NFSU2_TR(0x5bb2d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bb2d9:{NFSU2_TR(0x5bb2d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5bb2dd:{NFSU2_TR(0x5bb2dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bb2e1:{NFSU2_TR(0x5bb2e1);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5bb2e5:{NFSU2_TR(0x5bb2e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bb2e9:{NFSU2_TR(0x5bb2e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bb2ec:{NFSU2_TR(0x5bb2ec);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5bb2f0:{NFSU2_TR(0x5bb2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bb2f4:{NFSU2_TR(0x5bb2f4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5bb2f8:{NFSU2_TR(0x5bb2f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb2fc:{NFSU2_TR(0x5bb2fc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B5bb2ff:{NFSU2_TR(0x5bb2ff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5bb302:{NFSU2_TR(0x5bb302);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb306:{NFSU2_TR(0x5bb306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb308:{NFSU2_TR(0x5bb308);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5bb309:{NFSU2_TR(0x5bb309);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5bb30b:{NFSU2_TR(0x5bb30b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb2c0u);}goto L5bb2c0;}}
}
B5bb30d:L5bb30d:{c.instructions+=4;NFSU2_TR(0x5bb30d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5bb30f:{NFSU2_TR(0x5bb30f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bb311:{NFSU2_TR(0x5bb311);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb312:{NFSU2_TR(0x5bb312);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb315ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb315:L5bb315:{c.instructions+=5;NFSU2_TR(0x5bb315);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bb316:{NFSU2_TR(0x5bb316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb317:{NFSU2_TR(0x5bb317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb318:{NFSU2_TR(0x5bb318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bb319:{NFSU2_TR(0x5bb319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb320:L5bb320:{c.instructions+=13;NFSU2_TR(0x5bb320);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb324:{NFSU2_TR(0x5bb324);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb325:{NFSU2_TR(0x5bb325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb326:{NFSU2_TR(0x5bb326);
__builtin_memmove((R+24),(R+4),4);
}
B5bb328:{NFSU2_TR(0x5bb328);
w1(R+12,u8(0x1ull));
}
B5bb32a:{NFSU2_TR(0x5bb32a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb32b:{NFSU2_TR(0x5bb32b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb32e:{NFSU2_TR(0x5bb32e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bb330:{NFSU2_TR(0x5bb330);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb333:{NFSU2_TR(0x5bb333);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B5bb336:{NFSU2_TR(0x5bb336);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bb338:{NFSU2_TR(0x5bb338);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb33a:{NFSU2_TR(0x5bb33a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5bb346;}}
}
B5bb33c:L5bb33c:{c.instructions+=2;NFSU2_TR(0x5bb33c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5bb33f:{NFSU2_TR(0x5bb33f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5bb344;}}
}
B5bb341:L5bb341:{c.instructions+=1;NFSU2_TR(0x5bb341);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb344:L5bb344:{c.instructions+=1;NFSU2_TR(0x5bb344);
__builtin_memmove((R+28),(R+0),4);
}
B5bb346:L5bb346:{c.instructions+=7;NFSU2_TR(0x5bb346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb348:{NFSU2_TR(0x5bb348);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bb34a:{NFSU2_TR(0x5bb34a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5bb34c:{NFSU2_TR(0x5bb34c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb34f:{NFSU2_TR(0x5bb34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb352:{NFSU2_TR(0x5bb352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb355:{NFSU2_TR(0x5bb355);
if(r1(R+518)){{goto L5bb3aa;}}
}
B5bb357:L5bb357:{c.instructions+=14;NFSU2_TR(0x5bb357);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb358:{NFSU2_TR(0x5bb358);
u8 U[4];
w4(U+0,u32(0x2800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb35d:{NFSU2_TR(0x5bb35d);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb361:{NFSU2_TR(0x5bb361);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb362:{NFSU2_TR(0x5bb362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bb365:{NFSU2_TR(0x5bb365);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(s64(s32(r4(R+28)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+20,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+20)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5bb368:{NFSU2_TR(0x5bb368);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb369:{NFSU2_TR(0x5bb369);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb36a:{NFSU2_TR(0x5bb36a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb36d:{NFSU2_TR(0x5bb36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb370:{NFSU2_TR(0x5bb370);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb374:{NFSU2_TR(0x5bb374);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bb376:{NFSU2_TR(0x5bb376);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb377:{NFSU2_TR(0x5bb377);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb37aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb37a:L5bb37a:{c.instructions+=3;NFSU2_TR(0x5bb37a);
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
B5bb37c:{NFSU2_TR(0x5bb37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb37d:{NFSU2_TR(0x5bb37d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb3a6;}}
}
B5bb37f:L5bb37f:{c.instructions+=15;NFSU2_TR(0x5bb37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb382:{NFSU2_TR(0x5bb382);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb385:{NFSU2_TR(0x5bb385);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb387:{NFSU2_TR(0x5bb387);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb38a:{NFSU2_TR(0x5bb38a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb38e:{NFSU2_TR(0x5bb38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5bb391:{NFSU2_TR(0x5bb391);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bb394:{NFSU2_TR(0x5bb394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bb395:{NFSU2_TR(0x5bb395);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb398:{NFSU2_TR(0x5bb398);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb39b:{NFSU2_TR(0x5bb39b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb39e:{NFSU2_TR(0x5bb39e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3a1:{NFSU2_TR(0x5bb3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb3a2:{NFSU2_TR(0x5bb3a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bb3a3:{NFSU2_TR(0x5bb3a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb3a6:L5bb3a6:{c.instructions+=1;NFSU2_TR(0x5bb3a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb3aa:L5bb3aa:{c.instructions+=4;NFSU2_TR(0x5bb3aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bb3ab:{NFSU2_TR(0x5bb3ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb3ac:{NFSU2_TR(0x5bb3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bb3ad:{NFSU2_TR(0x5bb3ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb3b0:L5bb3b0:{c.instructions+=18;NFSU2_TR(0x5bb3b0);
__builtin_memmove((R+0),(R+4),4);
}
B5bb3b2:{NFSU2_TR(0x5bb3b2);
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
B5bb3b4:{NFSU2_TR(0x5bb3b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5bb3b6:{NFSU2_TR(0x5bb3b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3b9:{NFSU2_TR(0x5bb3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3bc:{NFSU2_TR(0x5bb3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x80808080ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3c3:{NFSU2_TR(0x5bb3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3c6:{NFSU2_TR(0x5bb3c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3c9:{NFSU2_TR(0x5bb3c9);
w4(R+8,u32(0x3f800000ull));
}
B5bb3ce:{NFSU2_TR(0x5bb3ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3d1:{NFSU2_TR(0x5bb3d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3d4:{NFSU2_TR(0x5bb3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3d7:{NFSU2_TR(0x5bb3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3da:{NFSU2_TR(0x5bb3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3dd:{NFSU2_TR(0x5bb3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3e0:{NFSU2_TR(0x5bb3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3e3:{NFSU2_TR(0x5bb3e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb3e6:{NFSU2_TR(0x5bb3e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb3f0:L5bb3f0:{c.instructions+=7;NFSU2_TR(0x5bb3f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb3f4:{NFSU2_TR(0x5bb3f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb3f8:{NFSU2_TR(0x5bb3f8);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B5bb3fb:{NFSU2_TR(0x5bb3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb3fe:{NFSU2_TR(0x5bb3fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb3ff:{NFSU2_TR(0x5bb3ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb400:{NFSU2_TR(0x5bb400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb405ull));
TAIL_STATIC(0x5bdde0u,5bd);
}
B5bb405:L5bb405:{c.instructions+=3;NFSU2_TR(0x5bb405);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb409:{NFSU2_TR(0x5bb409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb40a:{NFSU2_TR(0x5bb40a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb40full));
TAIL_STATIC(0x5bcc30u,5bc);
}
B5bb40f:L5bb40f:{c.instructions+=7;NFSU2_TR(0x5bb40f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb413:{NFSU2_TR(0x5bb413);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5bb416:{NFSU2_TR(0x5bb416);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bb41a:{NFSU2_TR(0x5bb41a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb41e:{NFSU2_TR(0x5bb41e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb41f:{NFSU2_TR(0x5bb41f);
w4(R+4,u32(0x86b7a4ull));
}
B5bb424:{NFSU2_TR(0x5bb424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb429ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb320u);}goto L5bb320;}
}
B5bb429:L5bb429:{c.instructions+=2;NFSU2_TR(0x5bb429);
w1(R+0,u8(0x1ull));
}
B5bb42b:{NFSU2_TR(0x5bb42b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb430:L5bb430:{c.instructions+=4;NFSU2_TR(0x5bb430);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B5bb432:{NFSU2_TR(0x5bb432);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bb434:{NFSU2_TR(0x5bb434);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bb436:{NFSU2_TR(0x5bb436);
if(r1(R+518)){{goto L5bb58d;}}
}
B5bb43c:L5bb43c:{c.instructions+=3;NFSU2_TR(0x5bb43c);
__builtin_memmove((R+4),gp(0x86b7c8),4);
}
B5bb442:{NFSU2_TR(0x5bb442);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5bb444:{NFSU2_TR(0x5bb444);
if(r1(R+518)){{goto L5bb58d;}}
}
B5bb44a:L5bb44a:{c.instructions+=2;NFSU2_TR(0x5bb44a);
u8 U[14];
__builtin_memmove((U+6),gp(0x86b7cc),4);
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
B5bb450:{NFSU2_TR(0x5bb450);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5bb58d;}}
}
B5bb456:L5bb456:{c.instructions+=7;NFSU2_TR(0x5bb456);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb45a:{NFSU2_TR(0x5bb45a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb45b:{NFSU2_TR(0x5bb45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb45e:{NFSU2_TR(0x5bb45e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xff000000ull))));
}
B5bb464:{NFSU2_TR(0x5bb464);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x14000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb46a:{NFSU2_TR(0x5bb46a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb46b:{NFSU2_TR(0x5bb46b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5bb55a;}}
}
B5bb471:L5bb471:{c.instructions+=78;NFSU2_TR(0x5bb471);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb474:{NFSU2_TR(0x5bb474);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5bb477:{NFSU2_TR(0x5bb477);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb47a:{NFSU2_TR(0x5bb47a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5bb47d:{NFSU2_TR(0x5bb47d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5bb480:{NFSU2_TR(0x5bb480);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x18ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb483:{NFSU2_TR(0x5bb483);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb485:{NFSU2_TR(0x5bb485);
{u32 ea_=u32(r4(R+4)+u32(4294967200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb488:{NFSU2_TR(0x5bb488);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb48b:{NFSU2_TR(0x5bb48b);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb48e:{NFSU2_TR(0x5bb48e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb491:{NFSU2_TR(0x5bb491);
{u32 ea_=u32(r4(R+4)+u32(4294967204u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb494:{NFSU2_TR(0x5bb494);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb497:{NFSU2_TR(0x5bb497);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb49a:{NFSU2_TR(0x5bb49a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb49d:{NFSU2_TR(0x5bb49d);
{u32 ea_=u32(r4(R+4)+u32(4294967208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb4a0:{NFSU2_TR(0x5bb4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb4a3:{NFSU2_TR(0x5bb4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb4a6:{NFSU2_TR(0x5bb4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb4a9:{NFSU2_TR(0x5bb4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb4ac:{NFSU2_TR(0x5bb4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb4af:{NFSU2_TR(0x5bb4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb4b2:{NFSU2_TR(0x5bb4b2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb4b4:{NFSU2_TR(0x5bb4b4);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4b7:{NFSU2_TR(0x5bb4b7);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb4ba:{NFSU2_TR(0x5bb4ba);
{u32 ea_=u32(r4(R+4)+u32(4294967224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb4bd:{NFSU2_TR(0x5bb4bd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb4c0:{NFSU2_TR(0x5bb4c0);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4c3:{NFSU2_TR(0x5bb4c3);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb4c6:{NFSU2_TR(0x5bb4c6);
{u32 ea_=u32(r4(R+4)+u32(4294967228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb4c9:{NFSU2_TR(0x5bb4c9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb4cc:{NFSU2_TR(0x5bb4cc);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4cf:{NFSU2_TR(0x5bb4cf);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb4d2:{NFSU2_TR(0x5bb4d2);
{u32 ea_=u32(r4(R+4)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb4d5:{NFSU2_TR(0x5bb4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb4d8:{NFSU2_TR(0x5bb4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb4db:{NFSU2_TR(0x5bb4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb4de:{NFSU2_TR(0x5bb4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb4e1:{NFSU2_TR(0x5bb4e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb4e4:{NFSU2_TR(0x5bb4e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb4e7:{NFSU2_TR(0x5bb4e7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb4e9:{NFSU2_TR(0x5bb4e9);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4ec:{NFSU2_TR(0x5bb4ec);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4ef:{NFSU2_TR(0x5bb4ef);
{u32 ea_=u32(r4(R+4)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb4f2:{NFSU2_TR(0x5bb4f2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb4f5:{NFSU2_TR(0x5bb4f5);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4f8:{NFSU2_TR(0x5bb4f8);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb4fb:{NFSU2_TR(0x5bb4fb);
{u32 ea_=u32(r4(R+4)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb4fe:{NFSU2_TR(0x5bb4fe);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb501:{NFSU2_TR(0x5bb501);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb504:{NFSU2_TR(0x5bb504);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb507:{NFSU2_TR(0x5bb507);
{u32 ea_=u32(r4(R+4)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb50a:{NFSU2_TR(0x5bb50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb50d:{NFSU2_TR(0x5bb50d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb510:{NFSU2_TR(0x5bb510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb513:{NFSU2_TR(0x5bb513);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb516:{NFSU2_TR(0x5bb516);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb519:{NFSU2_TR(0x5bb519);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb51c:{NFSU2_TR(0x5bb51c);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb51f:{NFSU2_TR(0x5bb51f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb521:{NFSU2_TR(0x5bb521);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb524:{NFSU2_TR(0x5bb524);
{u32 ea_=u32(r4(R+4)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb527:{NFSU2_TR(0x5bb527);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb52a:{NFSU2_TR(0x5bb52a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb52d:{NFSU2_TR(0x5bb52d);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb530:{NFSU2_TR(0x5bb530);
{u32 ea_=u32(r4(R+4)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb533:{NFSU2_TR(0x5bb533);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bb536:{NFSU2_TR(0x5bb536);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bb539:{NFSU2_TR(0x5bb539);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bb53c:{NFSU2_TR(0x5bb53c);
{u32 ea_=u32(r4(R+4)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bb53f:{NFSU2_TR(0x5bb53f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb542:{NFSU2_TR(0x5bb542);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb545:{NFSU2_TR(0x5bb545);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb548:{NFSU2_TR(0x5bb548);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb54b:{NFSU2_TR(0x5bb54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb54e:{NFSU2_TR(0x5bb54e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb551:{NFSU2_TR(0x5bb551);
__builtin_memmove(gp(0x86b7c8),(R+4),4);
}
B5bb557:{NFSU2_TR(0x5bb557);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb55a:L5bb55a:{c.instructions+=17;NFSU2_TR(0x5bb55a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5bb55c:{NFSU2_TR(0x5bb55c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb55f:{NFSU2_TR(0x5bb55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb562:{NFSU2_TR(0x5bb562);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb565:{NFSU2_TR(0x5bb565);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb568:{NFSU2_TR(0x5bb568);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb56b:{NFSU2_TR(0x5bb56b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5bb56e:{NFSU2_TR(0x5bb56e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5bb571:{NFSU2_TR(0x5bb571);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5bb573:{NFSU2_TR(0x5bb573);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb576:{NFSU2_TR(0x5bb576);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb579:{NFSU2_TR(0x5bb579);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5bb57c:{NFSU2_TR(0x5bb57c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5bb57e:{NFSU2_TR(0x5bb57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb581:{NFSU2_TR(0x5bb581);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb584:{NFSU2_TR(0x5bb584);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x18ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb587:{NFSU2_TR(0x5bb587);
__builtin_memmove(gp(0x86b7c8),(R+4),4);
}
B5bb58d:L5bb58d:{c.instructions+=1;NFSU2_TR(0x5bb58d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb590:L5bb590:{c.instructions+=5;NFSU2_TR(0x5bb590);
__builtin_memmove((R+0),gp(0x8708b8),4);
}
B5bb595:{NFSU2_TR(0x5bb595);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb596:{NFSU2_TR(0x5bb596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb597:{NFSU2_TR(0x5bb597);
__builtin_memmove((R+24),(R+4),4);
}
B5bb599:{NFSU2_TR(0x5bb599);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb59eull));
TAIL_STATIC(0x440e50u,440);
}
B5bb59e:L5bb59e:{c.instructions+=4;NFSU2_TR(0x5bb59e);
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
B5bb5a1:{NFSU2_TR(0x5bb5a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5bb5a3:{NFSU2_TR(0x5bb5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb5a4:{NFSU2_TR(0x5bb5a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb5b0:L5bb5b0:{c.instructions+=3;NFSU2_TR(0x5bb5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb5b3:{NFSU2_TR(0x5bb5b3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x89f23a14ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x89f23a14ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x89f23a14ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb5b8:{NFSU2_TR(0x5bb5b8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb670;}}
}
B5bb5be:L5bb5be:{c.instructions+=1;NFSU2_TR(0x5bb5be);
if(r1(R+518)){{goto L5bb65e;}}
}
B5bb5c4:L5bb5c4:{c.instructions+=2;NFSU2_TR(0x5bb5c4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x3ed70c43ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ed70c43ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x3ed70c43ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb5c9:{NFSU2_TR(0x5bb5c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb61e;}}
}
B5bb5cb:L5bb5cb:{c.instructions+=1;NFSU2_TR(0x5bb5cb);
if(r1(R+518)){{goto L5bb63a;}}
}
B5bb5cd:L5bb5cd:{c.instructions+=2;NFSU2_TR(0x5bb5cd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x23e6a3f4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x23e6a3f4ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x23e6a3f4ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb5d2:{NFSU2_TR(0x5bb5d2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb5fa;}}
}
B5bb5d4:L5bb5d4:{c.instructions+=1;NFSU2_TR(0x5bb5d4);
if(r1(R+518)){{goto L5bb5e8;}}
}
B5bb5d6:L5bb5d6:{c.instructions+=2;NFSU2_TR(0x5bb5d6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x12c9453cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x12c9453cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x12c9453cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb5db:{NFSU2_TR(0x5bb5db);
if(r1(R+518)){{goto L5bb63a;}}
}
B5bb5dd:L5bb5dd:{c.instructions+=2;NFSU2_TR(0x5bb5dd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x2388dd82ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2388dd82ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x2388dd82ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb5e2:{NFSU2_TR(0x5bb5e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb6f7;}}
}
B5bb5e8:L5bb5e8:{c.instructions+=5;NFSU2_TR(0x5bb5e8);
__builtin_memmove((R+0),gp(0x7ff06c),4);
}
B5bb5ed:{NFSU2_TR(0x5bb5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb5f0:{NFSU2_TR(0x5bb5f0);
__builtin_memmove((R+8),gp(0x7ff07c),4);
}
B5bb5f6:{NFSU2_TR(0x5bb5f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb5f9:{NFSU2_TR(0x5bb5f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb5fa:L5bb5fa:{c.instructions+=2;NFSU2_TR(0x5bb5fa);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x23e6b396ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x23e6b396ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x23e6b396ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb5ff:{NFSU2_TR(0x5bb5ff);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb601:L5bb601:{c.instructions+=2;NFSU2_TR(0x5bb601);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x33a26cb6ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x33a26cb6ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x33a26cb6ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb606:{NFSU2_TR(0x5bb606);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb6f7;}}
}
B5bb60c:L5bb60c:{c.instructions+=5;NFSU2_TR(0x5bb60c);
__builtin_memmove((R+0),gp(0x7ff080),4);
}
B5bb611:{NFSU2_TR(0x5bb611);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb614:{NFSU2_TR(0x5bb614);
__builtin_memmove((R+8),gp(0x7ff084),4);
}
B5bb61a:{NFSU2_TR(0x5bb61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb61d:{NFSU2_TR(0x5bb61d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb61e:L5bb61e:{c.instructions+=2;NFSU2_TR(0x5bb61e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8050ca3full))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8050ca3full)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8050ca3full))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb623:{NFSU2_TR(0x5bb623);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb64c;}}
}
B5bb625:L5bb625:{c.instructions+=1;NFSU2_TR(0x5bb625);
if(r1(R+518)){{goto L5bb6e6;}}
}
B5bb62b:L5bb62b:{c.instructions+=2;NFSU2_TR(0x5bb62b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x471a1dcaull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x471a1dcaull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x471a1dcaull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb630:{NFSU2_TR(0x5bb630);
if(r1(R+518)){{goto L5bb63a;}}
}
B5bb632:L5bb632:{c.instructions+=2;NFSU2_TR(0x5bb632);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x6cf41096ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x6cf41096ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x6cf41096ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb637:{NFSU2_TR(0x5bb637);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb639:L5bb639:{c.instructions+=1;NFSU2_TR(0x5bb639);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb63a:L5bb63a:{c.instructions+=5;NFSU2_TR(0x5bb63a);
__builtin_memmove((R+0),gp(0x7ff060),4);
}
B5bb63f:{NFSU2_TR(0x5bb63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb642:{NFSU2_TR(0x5bb642);
__builtin_memmove((R+8),gp(0x7ff070),4);
}
B5bb648:{NFSU2_TR(0x5bb648);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb64b:{NFSU2_TR(0x5bb64b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb64c:L5bb64c:{c.instructions+=2;NFSU2_TR(0x5bb64c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8062e2c0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8062e2c0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8062e2c0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb651:{NFSU2_TR(0x5bb651);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb653:L5bb653:{c.instructions+=2;NFSU2_TR(0x5bb653);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x89946400ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x89946400ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x89946400ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb658:{NFSU2_TR(0x5bb658);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb6f7;}}
}
B5bb65e:L5bb65e:{c.instructions+=5;NFSU2_TR(0x5bb65e);
__builtin_memmove((R+0),gp(0x7ff064),4);
}
B5bb663:{NFSU2_TR(0x5bb663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb666:{NFSU2_TR(0x5bb666);
__builtin_memmove((R+8),gp(0x7ff074),4);
}
B5bb66c:{NFSU2_TR(0x5bb66c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb66f:{NFSU2_TR(0x5bb66f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb670:L5bb670:{c.instructions+=2;NFSU2_TR(0x5bb670);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8cbe3497ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8cbe3497ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8cbe3497ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb675:{NFSU2_TR(0x5bb675);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb6b4;}}
}
B5bb677:L5bb677:{c.instructions+=1;NFSU2_TR(0x5bb677);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb67d:L5bb67d:{c.instructions+=2;NFSU2_TR(0x5bb67d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8cb694edull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8cb694edull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8cb694edull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb682:{NFSU2_TR(0x5bb682);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb69d;}}
}
B5bb684:L5bb684:{c.instructions+=1;NFSU2_TR(0x5bb684);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb68a:L5bb68a:{c.instructions+=2;NFSU2_TR(0x5bb68a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8a616c4cull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8a616c4cull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8a616c4cull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb68f:{NFSU2_TR(0x5bb68f);
if(r1(R+518)){{goto L5bb6e6;}}
}
B5bb691:L5bb691:{c.instructions+=2;NFSU2_TR(0x5bb691);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8cb61dcdull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8cb61dcdull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8cb61dcdull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb696:{NFSU2_TR(0x5bb696);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb69c:L5bb69c:{c.instructions+=1;NFSU2_TR(0x5bb69c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb69d:L5bb69d:{c.instructions+=2;NFSU2_TR(0x5bb69d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8cb95e6bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8cb95e6bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8cb95e6bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6a2:{NFSU2_TR(0x5bb6a2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb6a8:L5bb6a8:{c.instructions+=2;NFSU2_TR(0x5bb6a8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8cbc02ecull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8cbc02ecull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8cbc02ecull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6ad:{NFSU2_TR(0x5bb6ad);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb6b3:L5bb6b3:{c.instructions+=1;NFSU2_TR(0x5bb6b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb6b4:L5bb6b4:{c.instructions+=2;NFSU2_TR(0x5bb6b4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc9d2b801ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc9d2b801ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc9d2b801ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6b9:{NFSU2_TR(0x5bb6b9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bb6d8;}}
}
B5bb6bb:L5bb6bb:{c.instructions+=1;NFSU2_TR(0x5bb6bb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb6c1:L5bb6c1:{c.instructions+=2;NFSU2_TR(0x5bb6c1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xa6348ee3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xa6348ee3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xa6348ee3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6c6:{NFSU2_TR(0x5bb6c6);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb60cu);}goto L5bb60c;}}
}
B5bb6cc:L5bb6cc:{c.instructions+=2;NFSU2_TR(0x5bb6cc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb3645f81ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb3645f81ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb3645f81ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6d1:{NFSU2_TR(0x5bb6d1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb5e8u);}goto L5bb5e8;}}
}
B5bb6d7:L5bb6d7:{c.instructions+=1;NFSU2_TR(0x5bb6d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb6d8:L5bb6d8:{c.instructions+=2;NFSU2_TR(0x5bb6d8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd68ea0c1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd68ea0c1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd68ea0c1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6dd:{NFSU2_TR(0x5bb6dd);
if(r1(R+518)){{goto L5bb6e6;}}
}
B5bb6df:L5bb6df:{c.instructions+=2;NFSU2_TR(0x5bb6df);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd6ec76d5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd6ec76d5ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd6ec76d5ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb6e4:{NFSU2_TR(0x5bb6e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb6f7;}}
}
B5bb6e6:L5bb6e6:{c.instructions+=4;NFSU2_TR(0x5bb6e6);
__builtin_memmove((R+0),gp(0x7ff068),4);
}
B5bb6eb:{NFSU2_TR(0x5bb6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb6ee:{NFSU2_TR(0x5bb6ee);
__builtin_memmove((R+8),gp(0x7ff078),4);
}
B5bb6f4:{NFSU2_TR(0x5bb6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb6f7:L5bb6f7:{c.instructions+=1;NFSU2_TR(0x5bb6f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb700:L5bb700:{c.instructions+=5;NFSU2_TR(0x5bb700);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb702:{NFSU2_TR(0x5bb702);
u8 U[4];
w4(U+0,u32(0x7a3638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb707:{NFSU2_TR(0x5bb707);
u8 U[4];
w4(U+0,u32(0xdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb70c:{NFSU2_TR(0x5bb70c);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb711:{NFSU2_TR(0x5bb711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb716ull));
TAIL_STATIC(0x440df0u,440);
}
B5bb716:L5bb716:{c.instructions+=3;NFSU2_TR(0x5bb716);
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
B5bb719:{NFSU2_TR(0x5bb719);
__builtin_memmove(gp(0x8708b8),(R+0),4);
}
B5bb71e:{NFSU2_TR(0x5bb71e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb720:L5bb720:{c.instructions+=6;NFSU2_TR(0x5bb720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bb724:{NFSU2_TR(0x5bb724);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb727:{NFSU2_TR(0x5bb727);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5bb72a:{NFSU2_TR(0x5bb72a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5bb72e:{NFSU2_TR(0x5bb72e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5bb730:{NFSU2_TR(0x5bb730);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5bb73d;}}
}
B5bb732:L5bb732:{c.instructions+=4;NFSU2_TR(0x5bb732);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bb735:{NFSU2_TR(0x5bb735);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5bb739:{NFSU2_TR(0x5bb739);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5bb73b:{NFSU2_TR(0x5bb73b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb732u);}goto L5bb732;}}
}
B5bb73d:L5bb73d:{c.instructions+=2;NFSU2_TR(0x5bb73d);
w4(R+0,u32(0x1ull));
}
B5bb742:{NFSU2_TR(0x5bb742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb750:L5bb750:{c.instructions+=16;NFSU2_TR(0x5bb750);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb751:{NFSU2_TR(0x5bb751);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb756:{NFSU2_TR(0x5bb756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb758:{NFSU2_TR(0x5bb758);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb759:{NFSU2_TR(0x5bb759);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb75a:{NFSU2_TR(0x5bb75a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb75b:{NFSU2_TR(0x5bb75b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb75c:{NFSU2_TR(0x5bb75c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb75e:{NFSU2_TR(0x5bb75e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb75f:{NFSU2_TR(0x5bb75f);
u8 U[4];
w4(U+0,u32(0x8708f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb764:{NFSU2_TR(0x5bb764);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb765:{NFSU2_TR(0x5bb765);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb766:{NFSU2_TR(0x5bb766);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb76b:{NFSU2_TR(0x5bb76b);
u8 U[4];
w4(U+0,u32(0x960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb770:{NFSU2_TR(0x5bb770);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb771:{NFSU2_TR(0x5bb771);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb774ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb774:L5bb774:{c.instructions+=10;NFSU2_TR(0x5bb774);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb779:{NFSU2_TR(0x5bb779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb77b:{NFSU2_TR(0x5bb77b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb77c:{NFSU2_TR(0x5bb77c);
u8 U[4];
w4(U+0,u32(0x8708fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb781:{NFSU2_TR(0x5bb781);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb783:{NFSU2_TR(0x5bb783);
u8 U[4];
w4(U+0,u32(0x65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb785:{NFSU2_TR(0x5bb785);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb786:{NFSU2_TR(0x5bb786);
u8 U[4];
w4(U+0,u32(0x3ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb78b:{NFSU2_TR(0x5bb78b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb78c:{NFSU2_TR(0x5bb78c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb78full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb78f:L5bb78f:{c.instructions+=10;NFSU2_TR(0x5bb78f);
__builtin_memmove((R+0),gp(0x8708fc),4);
}
B5bb794:{NFSU2_TR(0x5bb794);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb795:{NFSU2_TR(0x5bb795);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bb799:{NFSU2_TR(0x5bb799);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb79a:{NFSU2_TR(0x5bb79a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb79b:{NFSU2_TR(0x5bb79b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb79c:{NFSU2_TR(0x5bb79c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb7a0:{NFSU2_TR(0x5bb7a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb7a2:{NFSU2_TR(0x5bb7a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb7a3:{NFSU2_TR(0x5bb7a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb7a6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb7a6:L5bb7a6:{c.instructions+=2;NFSU2_TR(0x5bb7a6);
w4(R+20,u32(0x2ull));
}
B5bb7ab:{NFSU2_TR(0x5bb7ab);
{goto L5bb7b0;}
}
B5bb7b0:L5bb7b0:{c.instructions+=4;NFSU2_TR(0x5bb7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5bb7b3:{NFSU2_TR(0x5bb7b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bb7b5:{NFSU2_TR(0x5bb7b5);
w4(R+4,shl<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5bb7b7:{NFSU2_TR(0x5bb7b7);
{goto L5bb7c0;}
}
B5bb7c0:L5bb7c0:{c.instructions+=32;NFSU2_TR(0x5bb7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb7c4:{NFSU2_TR(0x5bb7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bb7c7:{NFSU2_TR(0x5bb7c7);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+24)),r2(U+0));
}
B5bb7ca:{NFSU2_TR(0x5bb7ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb7ce:{NFSU2_TR(0x5bb7ce);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5bb7d0:{NFSU2_TR(0x5bb7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb7d4:{NFSU2_TR(0x5bb7d4);
u8 U[12];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5bb7d8:{NFSU2_TR(0x5bb7d8);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+24)),r2(U+0));
}
B5bb7db:{NFSU2_TR(0x5bb7db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bb7df:{NFSU2_TR(0x5bb7df);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5bb7e1:{NFSU2_TR(0x5bb7e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb7e5:{NFSU2_TR(0x5bb7e5);
u8 U[12];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5bb7e9:{NFSU2_TR(0x5bb7e9);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+28)),r2(U+0));
}
B5bb7ec:{NFSU2_TR(0x5bb7ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bb7f0:{NFSU2_TR(0x5bb7f0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5bb7f2:{NFSU2_TR(0x5bb7f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb7f6:{NFSU2_TR(0x5bb7f6);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+28)),r2(U+0));
}
B5bb7f9:{NFSU2_TR(0x5bb7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb7fd:{NFSU2_TR(0x5bb7fd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5bb7ff:{NFSU2_TR(0x5bb7ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb803:{NFSU2_TR(0x5bb803);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5bb807:{NFSU2_TR(0x5bb807);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+24)),r2(U+0));
}
B5bb80a:{NFSU2_TR(0x5bb80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bb80e:{NFSU2_TR(0x5bb80e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B5bb810:{NFSU2_TR(0x5bb810);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb814:{NFSU2_TR(0x5bb814);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+24)),r2(U+0));
}
B5bb817:{NFSU2_TR(0x5bb817);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bb81b:{NFSU2_TR(0x5bb81b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5bb81d:{NFSU2_TR(0x5bb81d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5bb81e:{NFSU2_TR(0x5bb81e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bb821:{NFSU2_TR(0x5bb821);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb825:{NFSU2_TR(0x5bb825);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb7c0u);}goto L5bb7c0;}}
}
B5bb827:L5bb827:{c.instructions+=3;NFSU2_TR(0x5bb827);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5bb828:{NFSU2_TR(0x5bb828);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bb82b:{NFSU2_TR(0x5bb82b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb7b0u);}goto L5bb7b0;}}
}
B5bb82d:L5bb82d:{c.instructions+=4;NFSU2_TR(0x5bb82d);
__builtin_memmove((R+0),gp(0x8708fc),4);
}
B5bb832:{NFSU2_TR(0x5bb832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb834:{NFSU2_TR(0x5bb834);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb835:{NFSU2_TR(0x5bb835);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb838ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb838:L5bb838:{c.instructions+=6;NFSU2_TR(0x5bb838);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bb839:{NFSU2_TR(0x5bb839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bb83a:{NFSU2_TR(0x5bb83a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb83b:{NFSU2_TR(0x5bb83b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bb83c:{NFSU2_TR(0x5bb83c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bb83d:{NFSU2_TR(0x5bb83d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bb840:L5bb840:{c.instructions+=11;NFSU2_TR(0x5bb840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb841:{NFSU2_TR(0x5bb841);
__builtin_memmove((R+0),gp(0x870980),4);
}
B5bb846:{NFSU2_TR(0x5bb846);
__builtin_memmove((R+4),gp(0x870984),4);
}
B5bb84c:{NFSU2_TR(0x5bb84c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb84d:{NFSU2_TR(0x5bb84d);
__builtin_memmove(gp(0x7ff77c),(R+0),4);
}
B5bb852:{NFSU2_TR(0x5bb852);
__builtin_memmove((R+0),gp(0x870cdc),4);
}
B5bb857:{NFSU2_TR(0x5bb857);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bb859:{NFSU2_TR(0x5bb859);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb85b:{NFSU2_TR(0x5bb85b);
__builtin_memmove(gp(0x7ff780),(R+4),4);
}
B5bb861:{NFSU2_TR(0x5bb861);
__builtin_memmove((R+4),gp(0x870cf0),4);
}
B5bb867:{NFSU2_TR(0x5bb867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb881;}}
}
B5bb869:L5bb869:{c.instructions+=2;NFSU2_TR(0x5bb869);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d00),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb86f:{NFSU2_TR(0x5bb86f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb881;}}
}
B5bb871:L5bb871:{c.instructions+=2;NFSU2_TR(0x5bb871);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb873:{NFSU2_TR(0x5bb873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb881;}}
}
B5bb875:L5bb875:{c.instructions+=2;NFSU2_TR(0x5bb875);
u8 U[8];
__builtin_memmove((U+0),gp(0x870d10),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb87b:{NFSU2_TR(0x5bb87b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb881;}}
}
B5bb87d:L5bb87d:{c.instructions+=2;NFSU2_TR(0x5bb87d);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5bb87f:{NFSU2_TR(0x5bb87f);
{goto L5bb883;}
}
B5bb881:L5bb881:{c.instructions+=1;NFSU2_TR(0x5bb881);
w1(R+8,u8(0x1ull));
}
B5bb883:L5bb883:{c.instructions+=3;NFSU2_TR(0x5bb883);
__builtin_memmove((R+0),gp(0x870cfc),4);
}
B5bb888:{NFSU2_TR(0x5bb888);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb88a:{NFSU2_TR(0x5bb88a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb894;}}
}
B5bb88c:L5bb88c:{c.instructions+=3;NFSU2_TR(0x5bb88c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb88e:{NFSU2_TR(0x5bb88e);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb892:{NFSU2_TR(0x5bb892);
if(r1(R+518)){{goto L5bb899;}}
}
B5bb894:L5bb894:{c.instructions+=1;NFSU2_TR(0x5bb894);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bb899:L5bb899:{c.instructions+=2;NFSU2_TR(0x5bb899);
u8 U[8];
__builtin_memmove((U+0),gp(0x870ce0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb89f:{NFSU2_TR(0x5bb89f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb8a9;}}
}
B5bb8a1:L5bb8a1:{c.instructions+=3;NFSU2_TR(0x5bb8a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bb8a3:{NFSU2_TR(0x5bb8a3);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bb8a7:{NFSU2_TR(0x5bb8a7);
if(r1(R+518)){{goto L5bb8ae;}}
}
B5bb8a9:L5bb8a9:{c.instructions+=1;NFSU2_TR(0x5bb8a9);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bb8ae:L5bb8ae:{c.instructions+=11;NFSU2_TR(0x5bb8ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8af:{NFSU2_TR(0x5bb8af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bb8b1:{NFSU2_TR(0x5bb8b1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5bb8b3:{NFSU2_TR(0x5bb8b3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5bb8b5:{NFSU2_TR(0x5bb8b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8b6:{NFSU2_TR(0x5bb8b6);
__builtin_memmove(gp(0x86eb88),(R+0),4);
}
B5bb8bb:{NFSU2_TR(0x5bb8bb);
__builtin_memmove(gp(0x86eb0c),(R+4),4);
}
B5bb8c1:{NFSU2_TR(0x5bb8c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8c2:{NFSU2_TR(0x5bb8c2);
__builtin_memmove(gp(0x86eb8c),(R+0),4);
}
B5bb8c7:{NFSU2_TR(0x5bb8c7);
__builtin_memmove(gp(0x86eb10),(R+4),4);
}
B5bb8cd:{NFSU2_TR(0x5bb8cd);
if(r1(R+518)){{goto L5bb9d4;}}
}
B5bb8d3:L5bb8d3:{c.instructions+=2;NFSU2_TR(0x5bb8d3);
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
B5bb8d5:{NFSU2_TR(0x5bb8d5);
{goto L5bb8e0;}
}
B5bb8e0:L5bb8e0:{c.instructions+=16;NFSU2_TR(0x5bb8e0);
__builtin_memmove((R+4),gp(0x7ff778),4);
}
B5bb8e6:{NFSU2_TR(0x5bb8e6);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb8eb:{NFSU2_TR(0x5bb8eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb8ed:{NFSU2_TR(0x5bb8ed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8ee:{NFSU2_TR(0x5bb8ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bb8f4:{NFSU2_TR(0x5bb8f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8f5:{NFSU2_TR(0x5bb8f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8f6:{NFSU2_TR(0x5bb8f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8f7:{NFSU2_TR(0x5bb8f7);
__builtin_memmove((R+4),gp(0x7ff780),4);
}
B5bb8fd:{NFSU2_TR(0x5bb8fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb8ff:{NFSU2_TR(0x5bb8ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb901:{NFSU2_TR(0x5bb901);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb902:{NFSU2_TR(0x5bb902);
__builtin_memmove((R+4),gp(0x7ff77c),4);
}
B5bb908:{NFSU2_TR(0x5bb908);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb909:{NFSU2_TR(0x5bb909);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb90a:{NFSU2_TR(0x5bb90a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb90dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb90d:L5bb90d:{c.instructions+=2;NFSU2_TR(0x5bb90d);
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
B5bb90f:{NFSU2_TR(0x5bb90f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb96a;}}
}
B5bb911:L5bb911:{c.instructions+=7;NFSU2_TR(0x5bb911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bb913:{NFSU2_TR(0x5bb913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb915:{NFSU2_TR(0x5bb915);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb0cull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bb91b:{NFSU2_TR(0x5bb91b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb91c:{NFSU2_TR(0x5bb91c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb91d:{NFSU2_TR(0x5bb91d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb91e:{NFSU2_TR(0x5bb91e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb921ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb921:L5bb921:{c.instructions+=2;NFSU2_TR(0x5bb921);
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
B5bb923:{NFSU2_TR(0x5bb923);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bb96a;}}
}
B5bb925:L5bb925:{c.instructions+=7;NFSU2_TR(0x5bb925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb928:{NFSU2_TR(0x5bb928);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb92d:{NFSU2_TR(0x5bb92d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb92f:{NFSU2_TR(0x5bb92f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb930:{NFSU2_TR(0x5bb930);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb931:{NFSU2_TR(0x5bb931);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb932:{NFSU2_TR(0x5bb932);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb938ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb938:L5bb938:{c.instructions+=5;NFSU2_TR(0x5bb938);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb93d:{NFSU2_TR(0x5bb93d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb93f:{NFSU2_TR(0x5bb93f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb940:{NFSU2_TR(0x5bb940);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb941:{NFSU2_TR(0x5bb941);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb947ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb947:L5bb947:{c.instructions+=10;NFSU2_TR(0x5bb947);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb94c:{NFSU2_TR(0x5bb94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb94e:{NFSU2_TR(0x5bb94e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb94f:{NFSU2_TR(0x5bb94f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb950:{NFSU2_TR(0x5bb950);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb951:{NFSU2_TR(0x5bb951);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb953:{NFSU2_TR(0x5bb953);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb954:{NFSU2_TR(0x5bb954);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb955:{NFSU2_TR(0x5bb955);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb956:{NFSU2_TR(0x5bb956);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb95cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb95c:L5bb95c:{c.instructions+=3;NFSU2_TR(0x5bb95c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bb95f:{NFSU2_TR(0x5bb95f);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5bb962:{NFSU2_TR(0x5bb962);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb8e0u);}goto L5bb8e0;}}
}
B5bb968:L5bb968:{c.instructions+=1;NFSU2_TR(0x5bb968);
{goto L5bb9d4;}
}
B5bb96a:L5bb96a:{c.instructions+=2;NFSU2_TR(0x5bb96a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bb96c:{NFSU2_TR(0x5bb96c);
__builtin_memmove((R+16),(R+16),4);
}
B5bb970:L5bb970:{c.instructions+=3;NFSU2_TR(0x5bb970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb976:{NFSU2_TR(0x5bb976);
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
B5bb978:{NFSU2_TR(0x5bb978);
if(r1(R+518)){{goto L5bb986;}}
}
B5bb97a:L5bb97a:{c.instructions+=3;NFSU2_TR(0x5bb97a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb97c:{NFSU2_TR(0x5bb97c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb97d:{NFSU2_TR(0x5bb97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb980ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb980:L5bb980:{c.instructions+=1;NFSU2_TR(0x5bb980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb0cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb986:L5bb986:{c.instructions+=3;NFSU2_TR(0x5bb986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bb98c:{NFSU2_TR(0x5bb98c);
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
B5bb98e:{NFSU2_TR(0x5bb98e);
if(r1(R+518)){{goto L5bb99c;}}
}
B5bb990:L5bb990:{c.instructions+=3;NFSU2_TR(0x5bb990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bb992:{NFSU2_TR(0x5bb992);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb993:{NFSU2_TR(0x5bb993);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bb996ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bb996:L5bb996:{c.instructions+=1;NFSU2_TR(0x5bb996);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bb99c:L5bb99c:{c.instructions+=3;NFSU2_TR(0x5bb99c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bb99f:{NFSU2_TR(0x5bb99f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bb9a2:{NFSU2_TR(0x5bb9a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb970u);}goto L5bb970;}}
}
B5bb9a4:L5bb9a4:{c.instructions+=8;NFSU2_TR(0x5bb9a4);
__builtin_memmove(gp(0x870d10),(R+12),4);
}
B5bb9aa:{NFSU2_TR(0x5bb9aa);
__builtin_memmove(gp(0x870cf0),(R+12),4);
}
B5bb9b0:{NFSU2_TR(0x5bb9b0);
__builtin_memmove(gp(0x870d00),(R+12),4);
}
B5bb9b6:{NFSU2_TR(0x5bb9b6);
__builtin_memmove(gp(0x870cdc),(R+12),4);
}
B5bb9bc:{NFSU2_TR(0x5bb9bc);
__builtin_memmove(gp(0x876528),(R+12),4);
}
B5bb9c2:{NFSU2_TR(0x5bb9c2);
__builtin_memmove(gp(0x876508),(R+12),4);
}
B5bb9c8:{NFSU2_TR(0x5bb9c8);
__builtin_memmove(gp(0x876518),(R+12),4);
}
B5bb9ce:{NFSU2_TR(0x5bb9ce);
__builtin_memmove(gp(0x8764f4),(R+12),4);
}
B5bb9d4:L5bb9d4:{c.instructions+=5;NFSU2_TR(0x5bb9d4);
u8 U[10];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5bb9d8:{NFSU2_TR(0x5bb9d8);
__builtin_memmove(gp(0x86f2e4),(R+12),4);
}
B5bb9de:{NFSU2_TR(0x5bb9de);
__builtin_memmove(gp(0x86ff70),(R+12),4);
}
B5bb9e4:{NFSU2_TR(0x5bb9e4);
__builtin_memmove(gp(0x86f2e0),(R+12),4);
}
B5bb9ea:{NFSU2_TR(0x5bb9ea);
if(r1(R+518)){{goto L5bbb0d;}}
}
B5bb9f0:L5bb9f0:{c.instructions+=15;NFSU2_TR(0x5bb9f0);
__builtin_memmove((R+8),gp(0x7ff790),4);
}
B5bb9f6:{NFSU2_TR(0x5bb9f6);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bb9fb:{NFSU2_TR(0x5bb9fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bb9fd:{NFSU2_TR(0x5bb9fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bb9fe:{NFSU2_TR(0x5bb9fe);
u8 U[4];
w4(U+0,u32(0x86f2e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba03:{NFSU2_TR(0x5bba03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba04:{NFSU2_TR(0x5bba04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba05:{NFSU2_TR(0x5bba05);
__builtin_memmove((R+8),gp(0x870984),4);
}
B5bba0b:{NFSU2_TR(0x5bba0b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba0d:{NFSU2_TR(0x5bba0d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba0f:{NFSU2_TR(0x5bba0f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba10:{NFSU2_TR(0x5bba10);
__builtin_memmove((R+8),gp(0x870980),4);
}
B5bba16:{NFSU2_TR(0x5bba16);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba17:{NFSU2_TR(0x5bba17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba18:{NFSU2_TR(0x5bba18);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bba1bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bba1b:L5bba1b:{c.instructions+=2;NFSU2_TR(0x5bba1b);
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
B5bba1d:{NFSU2_TR(0x5bba1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bbab6;}}
}
B5bba23:L5bba23:{c.instructions+=6;NFSU2_TR(0x5bba23);
__builtin_memmove((R+0),gp(0x86f2e4),4);
}
B5bba28:{NFSU2_TR(0x5bba28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bba2a:{NFSU2_TR(0x5bba2a);
u8 U[4];
w4(U+0,u32(0x86ff70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba2f:{NFSU2_TR(0x5bba2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba30:{NFSU2_TR(0x5bba30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba31:{NFSU2_TR(0x5bba31);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bba34ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bba34:L5bba34:{c.instructions+=3;NFSU2_TR(0x5bba34);
__builtin_memmove((R+24),(R+0),4);
}
B5bba36:{NFSU2_TR(0x5bba36);
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
B5bba38:{NFSU2_TR(0x5bba38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bba74;}}
}
B5bba3a:L5bba3a:{c.instructions+=7;NFSU2_TR(0x5bba3a);
__builtin_memmove((R+4),gp(0x86ff70),4);
}
B5bba40:{NFSU2_TR(0x5bba40);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bba45:{NFSU2_TR(0x5bba45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bba47:{NFSU2_TR(0x5bba47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba48:{NFSU2_TR(0x5bba48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba49:{NFSU2_TR(0x5bba49);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba4a:{NFSU2_TR(0x5bba4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bba50ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bba50:L5bba50:{c.instructions+=5;NFSU2_TR(0x5bba50);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bba55:{NFSU2_TR(0x5bba55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bba57:{NFSU2_TR(0x5bba57);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba58:{NFSU2_TR(0x5bba58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba59:{NFSU2_TR(0x5bba59);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bba5full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bba5f:L5bba5f:{c.instructions+=10;NFSU2_TR(0x5bba5f);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bba64:{NFSU2_TR(0x5bba64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bba66:{NFSU2_TR(0x5bba66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba67:{NFSU2_TR(0x5bba67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba68:{NFSU2_TR(0x5bba68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba69:{NFSU2_TR(0x5bba69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba6b:{NFSU2_TR(0x5bba6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba6c:{NFSU2_TR(0x5bba6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba6d:{NFSU2_TR(0x5bba6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba6e:{NFSU2_TR(0x5bba6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bba74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bba74:L5bba74:{c.instructions+=3;NFSU2_TR(0x5bba74);
__builtin_memmove((R+4),gp(0x870d08),4);
}
B5bba7a:{NFSU2_TR(0x5bba7a);
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
B5bba7c:{NFSU2_TR(0x5bba7c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5bbaac;}}
}
B5bba7e:L5bba7e:{c.instructions+=15;NFSU2_TR(0x5bba7e);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bba83:{NFSU2_TR(0x5bba83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bba85:{NFSU2_TR(0x5bba85);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba86:{NFSU2_TR(0x5bba86);
u8 U[4];
w4(U+0,u32(0x86f2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba8b:{NFSU2_TR(0x5bba8b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba8c:{NFSU2_TR(0x5bba8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba8d:{NFSU2_TR(0x5bba8d);
__builtin_memmove((R+4),gp(0x7ff790),4);
}
B5bba93:{NFSU2_TR(0x5bba93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba95:{NFSU2_TR(0x5bba95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba96:{NFSU2_TR(0x5bba96);
__builtin_memmove((R+4),gp(0x870984),4);
}
B5bba9c:{NFSU2_TR(0x5bba9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bba9d:{NFSU2_TR(0x5bba9d);
__builtin_memmove((R+4),gp(0x870980),4);
}
B5bbaa3:{NFSU2_TR(0x5bbaa3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbaa4:{NFSU2_TR(0x5bbaa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbaa5:{NFSU2_TR(0x5bbaa5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbaa8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbaa8:L5bbaa8:{c.instructions+=2;NFSU2_TR(0x5bbaa8);
__builtin_memmove((R+24),(R+0),4);
}
B5bbaaa:{NFSU2_TR(0x5bbaaa);
{goto L5bbab2;}
}
B5bbaac:L5bbaac:{c.instructions+=1;NFSU2_TR(0x5bbaac);
__builtin_memmove(gp(0x86f2e0),(R+12),4);
}
B5bbab2:L5bbab2:{c.instructions+=2;NFSU2_TR(0x5bbab2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bbab4:{NFSU2_TR(0x5bbab4);
if(r1(R+518)){{goto L5bbb0d;}}
}
B5bbab6:L5bbab6:{c.instructions+=3;NFSU2_TR(0x5bbab6);
__builtin_memmove((R+0),gp(0x86ff70),4);
}
B5bbabb:{NFSU2_TR(0x5bbabb);
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
B5bbabd:{NFSU2_TR(0x5bbabd);
if(r1(R+518)){{goto L5bbacb;}}
}
B5bbabf:L5bbabf:{c.instructions+=3;NFSU2_TR(0x5bbabf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbac1:{NFSU2_TR(0x5bbac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbac2:{NFSU2_TR(0x5bbac2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbac5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbac5:L5bbac5:{c.instructions+=1;NFSU2_TR(0x5bbac5);
__builtin_memmove(gp(0x86ff70),(R+12),4);
}
B5bbacb:L5bbacb:{c.instructions+=3;NFSU2_TR(0x5bbacb);
__builtin_memmove((R+0),gp(0x86f2e4),4);
}
B5bbad0:{NFSU2_TR(0x5bbad0);
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
B5bbad2:{NFSU2_TR(0x5bbad2);
if(r1(R+518)){{goto L5bbae0;}}
}
B5bbad4:L5bbad4:{c.instructions+=3;NFSU2_TR(0x5bbad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbad6:{NFSU2_TR(0x5bbad6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbad7:{NFSU2_TR(0x5bbad7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbadaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbada:L5bbada:{c.instructions+=1;NFSU2_TR(0x5bbada);
__builtin_memmove(gp(0x86f2e4),(R+12),4);
}
B5bbae0:L5bbae0:{c.instructions+=3;NFSU2_TR(0x5bbae0);
__builtin_memmove((R+0),gp(0x86f2e0),4);
}
B5bbae5:{NFSU2_TR(0x5bbae5);
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
B5bbae7:{NFSU2_TR(0x5bbae7);
if(r1(R+518)){{goto L5bbaf5;}}
}
B5bbae9:L5bbae9:{c.instructions+=3;NFSU2_TR(0x5bbae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbaeb:{NFSU2_TR(0x5bbaeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbaec:{NFSU2_TR(0x5bbaec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbaefull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbaef:L5bbaef:{c.instructions+=1;NFSU2_TR(0x5bbaef);
__builtin_memmove(gp(0x86f2e0),(R+12),4);
}
B5bbaf5:L5bbaf5:{c.instructions+=4;NFSU2_TR(0x5bbaf5);
__builtin_memmove(gp(0x870cfc),(R+12),4);
}
B5bbafb:{NFSU2_TR(0x5bbafb);
__builtin_memmove(gp(0x870ce0),(R+12),4);
}
B5bbb01:{NFSU2_TR(0x5bbb01);
__builtin_memmove(gp(0x876514),(R+12),4);
}
B5bbb07:{NFSU2_TR(0x5bbb07);
__builtin_memmove(gp(0x8764f8),(R+12),4);
}
B5bbb0d:L5bbb0d:{c.instructions+=21;NFSU2_TR(0x5bbb0d);
__builtin_memmove((R+0),gp(0x870980),4);
}
B5bbb12:{NFSU2_TR(0x5bbb12);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5bbb13:{NFSU2_TR(0x5bbb13);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5bbb15:{NFSU2_TR(0x5bbb15);
__builtin_memmove((R+4),(R+0),4);
}
B5bbb17:{NFSU2_TR(0x5bbb17);
__builtin_memmove((R+0),gp(0x870984),4);
}
B5bbb1c:{NFSU2_TR(0x5bbb1c);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5bbb1d:{NFSU2_TR(0x5bbb1d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5bbb1f:{NFSU2_TR(0x5bbb1f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bbb21:{NFSU2_TR(0x5bbb21);
__builtin_memmove(gp(0x86ff74),(R+8),4);
}
B5bbb27:{NFSU2_TR(0x5bbb27);
__builtin_memmove(gp(0x86ff78),(R+8),4);
}
B5bbb2d:{NFSU2_TR(0x5bbb2d);
__builtin_memmove(gp(0x86ff7c),(R+8),4);
}
B5bbb33:{NFSU2_TR(0x5bbb33);
__builtin_memmove(gp(0x86ffa8),(R+8),4);
}
B5bbb39:{NFSU2_TR(0x5bbb39);
__builtin_memmove(gp(0x86ffac),(R+8),4);
}
B5bbb3f:{NFSU2_TR(0x5bbb3f);
__builtin_memmove(gp(0x86ffb0),(R+8),4);
}
B5bbb45:{NFSU2_TR(0x5bbb45);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5bbb49:{NFSU2_TR(0x5bbb49);
w4(R+4,sar<u32>(r4(R+4),u64(u32(0x1ull))));
}
B5bbb4b:{NFSU2_TR(0x5bbb4b);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5bbb4d:{NFSU2_TR(0x5bbb4d);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5bbb4f:{NFSU2_TR(0x5bbb4f);
__builtin_memmove(gp(0x7ff788),(R+4),4);
}
B5bbb55:{NFSU2_TR(0x5bbb55);
__builtin_memmove(gp(0x7ff78c),(R+0),4);
}
B5bbb5a:{NFSU2_TR(0x5bbb5a);
if(r1(R+518)){{goto L5bbc3f;}}
}
B5bbb60:L5bbb60:{c.instructions+=2;NFSU2_TR(0x5bbb60);
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
B5bbb62:{NFSU2_TR(0x5bbb62);
{goto L5bbb70;}
}
B5bbb64:L5bbb64:{c.instructions+=3;NFSU2_TR(0x5bbb64);
__builtin_memmove((R+4),gp(0x7ff788),4);
}
B5bbb6a:{NFSU2_TR(0x5bbb6a);
__builtin_memmove((R+0),gp(0x7ff78c),4);
}
B5bbb6f:{NFSU2_TR(0x5bbb6f);
}
B5bbb70:L5bbb70:{c.instructions+=14;NFSU2_TR(0x5bbb70);
__builtin_memmove((R+8),gp(0x870974),4);
}
B5bbb76:{NFSU2_TR(0x5bbb76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+20),(U+0),4);
}
B5bbb78:{NFSU2_TR(0x5bbb78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb79:{NFSU2_TR(0x5bbb79);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff74ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bbb7f:{NFSU2_TR(0x5bbb7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb80:{NFSU2_TR(0x5bbb80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb81:{NFSU2_TR(0x5bbb81);
__builtin_memmove((R+12),gp(0x7ff778),4);
}
B5bbb87:{NFSU2_TR(0x5bbb87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb88:{NFSU2_TR(0x5bbb88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb8a:{NFSU2_TR(0x5bbb8a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb8c:{NFSU2_TR(0x5bbb8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb8d:{NFSU2_TR(0x5bbb8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb8e:{NFSU2_TR(0x5bbb8e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbb8f:{NFSU2_TR(0x5bbb8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbb92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbb92:L5bbb92:{c.instructions+=3;NFSU2_TR(0x5bbb92);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bbb94:{NFSU2_TR(0x5bbb94);
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
B5bbb96:{NFSU2_TR(0x5bbb96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bbbf1;}}
}
B5bbb98:L5bbb98:{c.instructions+=7;NFSU2_TR(0x5bbb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bbb9a:{NFSU2_TR(0x5bbb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bbb9c:{NFSU2_TR(0x5bbb9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ffa8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bbba2:{NFSU2_TR(0x5bbba2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbba3:{NFSU2_TR(0x5bbba3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbba4:{NFSU2_TR(0x5bbba4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbba5:{NFSU2_TR(0x5bbba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbba8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbba8:L5bbba8:{c.instructions+=2;NFSU2_TR(0x5bbba8);
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
B5bbbaa:{NFSU2_TR(0x5bbbaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bbbf1;}}
}
B5bbbac:L5bbbac:{c.instructions+=7;NFSU2_TR(0x5bbbac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbbaf:{NFSU2_TR(0x5bbbaf);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bbbb4:{NFSU2_TR(0x5bbbb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbbb6:{NFSU2_TR(0x5bbbb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbb7:{NFSU2_TR(0x5bbbb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbb8:{NFSU2_TR(0x5bbbb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbb9:{NFSU2_TR(0x5bbbb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbbbfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbbbf:L5bbbbf:{c.instructions+=5;NFSU2_TR(0x5bbbbf);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bbbc4:{NFSU2_TR(0x5bbbc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbbc6:{NFSU2_TR(0x5bbbc6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbc7:{NFSU2_TR(0x5bbbc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbc8:{NFSU2_TR(0x5bbbc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbbceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbbce:L5bbbce:{c.instructions+=10;NFSU2_TR(0x5bbbce);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bbbd3:{NFSU2_TR(0x5bbbd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbbd5:{NFSU2_TR(0x5bbbd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbd6:{NFSU2_TR(0x5bbbd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbd7:{NFSU2_TR(0x5bbbd7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbd8:{NFSU2_TR(0x5bbbd8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbda:{NFSU2_TR(0x5bbbda);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbdb:{NFSU2_TR(0x5bbbdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbdc:{NFSU2_TR(0x5bbbdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbbdd:{NFSU2_TR(0x5bbbdd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbbe3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbbe3:L5bbbe3:{c.instructions+=3;NFSU2_TR(0x5bbbe3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bbbe6:{NFSU2_TR(0x5bbbe6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bbbe9:{NFSU2_TR(0x5bbbe9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbb64u);}goto L5bbb64;}}
}
B5bbbef:L5bbbef:{c.instructions+=1;NFSU2_TR(0x5bbbef);
{goto L5bbc3f;}
}
B5bbbf1:L5bbbf1:{c.instructions+=1;NFSU2_TR(0x5bbbf1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bbbf3:L5bbbf3:{c.instructions+=3;NFSU2_TR(0x5bbbf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbbf9:{NFSU2_TR(0x5bbbf9);
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
B5bbbfb:{NFSU2_TR(0x5bbbfb);
if(r1(R+518)){{goto L5bbc09;}}
}
B5bbbfd:L5bbbfd:{c.instructions+=3;NFSU2_TR(0x5bbbfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbbff:{NFSU2_TR(0x5bbbff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc00:{NFSU2_TR(0x5bbc00);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbc03ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbc03:L5bbc03:{c.instructions+=1;NFSU2_TR(0x5bbc03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ffa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbc09:L5bbc09:{c.instructions+=3;NFSU2_TR(0x5bbc09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbc0f:{NFSU2_TR(0x5bbc0f);
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
B5bbc11:{NFSU2_TR(0x5bbc11);
if(r1(R+518)){{goto L5bbc1f;}}
}
B5bbc13:L5bbc13:{c.instructions+=3;NFSU2_TR(0x5bbc13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbc15:{NFSU2_TR(0x5bbc15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc16:{NFSU2_TR(0x5bbc16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbc19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbc19:L5bbc19:{c.instructions+=1;NFSU2_TR(0x5bbc19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbc1f:L5bbc1f:{c.instructions+=3;NFSU2_TR(0x5bbc1f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bbc22:{NFSU2_TR(0x5bbc22);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bbc25:{NFSU2_TR(0x5bbc25);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbbf3u);}goto L5bbbf3;}}
}
B5bbc27:L5bbc27:{c.instructions+=4;NFSU2_TR(0x5bbc27);
__builtin_memmove(gp(0x870cf0),(R+12),4);
}
B5bbc2d:{NFSU2_TR(0x5bbc2d);
__builtin_memmove(gp(0x870cfc),(R+12),4);
}
B5bbc33:{NFSU2_TR(0x5bbc33);
__builtin_memmove(gp(0x876508),(R+12),4);
}
B5bbc39:{NFSU2_TR(0x5bbc39);
__builtin_memmove(gp(0x876514),(R+12),4);
}
B5bbc3f:L5bbc3f:{c.instructions+=1;NFSU2_TR(0x5bbc3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbc44ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bb750u);}goto L5bb750;}
}
B5bbc44:L5bbc44:{c.instructions+=5;NFSU2_TR(0x5bbc44);
u8 U[5];
__builtin_memmove((U+3),gp(0x876844),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bbc4a:{NFSU2_TR(0x5bbc4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bbc4b:{NFSU2_TR(0x5bbc4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bbc4c:{NFSU2_TR(0x5bbc4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bbc4d:{NFSU2_TR(0x5bbc4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bbcc7;}}
}
B5bbc4f:L5bbc4f:{c.instructions+=15;NFSU2_TR(0x5bbc4f);
__builtin_memmove((R+4),gp(0x7ff794),4);
}
B5bbc55:{NFSU2_TR(0x5bbc55);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bbc5a:{NFSU2_TR(0x5bbc5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbc5c:{NFSU2_TR(0x5bbc5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc5d:{NFSU2_TR(0x5bbc5d);
u8 U[4];
w4(U+0,u32(0x86ffa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc62:{NFSU2_TR(0x5bbc62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc64:{NFSU2_TR(0x5bbc64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc65:{NFSU2_TR(0x5bbc65);
__builtin_memmove((R+4),gp(0x7ff798),4);
}
B5bbc6b:{NFSU2_TR(0x5bbc6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc6c:{NFSU2_TR(0x5bbc6c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc6e:{NFSU2_TR(0x5bbc6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc6f:{NFSU2_TR(0x5bbc6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc70:{NFSU2_TR(0x5bbc70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc71:{NFSU2_TR(0x5bbc71);
s1(0x876844,u8(0x1ull));
}
B5bbc78:{NFSU2_TR(0x5bbc78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbc7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbc7b:L5bbc7b:{c.instructions+=14;NFSU2_TR(0x5bbc7b);
__builtin_memmove((R+4),gp(0x7ff794),4);
}
B5bbc81:{NFSU2_TR(0x5bbc81);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bbc86:{NFSU2_TR(0x5bbc86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbc88:{NFSU2_TR(0x5bbc88);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc89:{NFSU2_TR(0x5bbc89);
u8 U[4];
w4(U+0,u32(0x86f8acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc8e:{NFSU2_TR(0x5bbc8e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc90:{NFSU2_TR(0x5bbc90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc91:{NFSU2_TR(0x5bbc91);
__builtin_memmove((R+4),gp(0x7ff7a0),4);
}
B5bbc97:{NFSU2_TR(0x5bbc97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc98:{NFSU2_TR(0x5bbc98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc9a:{NFSU2_TR(0x5bbc9a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc9b:{NFSU2_TR(0x5bbc9b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc9d:{NFSU2_TR(0x5bbc9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbc9e:{NFSU2_TR(0x5bbc9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbca1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbca1:L5bbca1:{c.instructions+=14;NFSU2_TR(0x5bbca1);
__builtin_memmove((R+4),gp(0x7ff7a4),4);
}
B5bbca7:{NFSU2_TR(0x5bbca7);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bbcac:{NFSU2_TR(0x5bbcac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbcae:{NFSU2_TR(0x5bbcae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcaf:{NFSU2_TR(0x5bbcaf);
u8 U[4];
w4(U+0,u32(0x86bd1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcb4:{NFSU2_TR(0x5bbcb4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcb6:{NFSU2_TR(0x5bbcb6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcb7:{NFSU2_TR(0x5bbcb7);
__builtin_memmove((R+4),gp(0x7ff7a8),4);
}
B5bbcbd:{NFSU2_TR(0x5bbcbd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcbe:{NFSU2_TR(0x5bbcbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcc0:{NFSU2_TR(0x5bbcc0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcc2:{NFSU2_TR(0x5bbcc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcc3:{NFSU2_TR(0x5bbcc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcc4:{NFSU2_TR(0x5bbcc4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbcc7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbcc7:L5bbcc7:{c.instructions+=3;NFSU2_TR(0x5bbcc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bbcc8:{NFSU2_TR(0x5bbcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bbcc9:{NFSU2_TR(0x5bbcc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bbcd0:L5bbcd0:{c.instructions+=4;NFSU2_TR(0x5bbcd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcd1:{NFSU2_TR(0x5bbcd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcd2:{NFSU2_TR(0x5bbcd2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5bbcd4:{NFSU2_TR(0x5bbcd4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bbcd6:L5bbcd6:{c.instructions+=3;NFSU2_TR(0x5bbcd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb0cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbcdc:{NFSU2_TR(0x5bbcdc);
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
B5bbcde:{NFSU2_TR(0x5bbcde);
if(r1(R+518)){{goto L5bbcec;}}
}
B5bbce0:L5bbce0:{c.instructions+=3;NFSU2_TR(0x5bbce0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbce2:{NFSU2_TR(0x5bbce2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbce3:{NFSU2_TR(0x5bbce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbce6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbce6:L5bbce6:{c.instructions+=1;NFSU2_TR(0x5bbce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb0cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbcec:L5bbcec:{c.instructions+=3;NFSU2_TR(0x5bbcec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbcf2:{NFSU2_TR(0x5bbcf2);
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
B5bbcf4:{NFSU2_TR(0x5bbcf4);
if(r1(R+518)){{goto L5bbd02;}}
}
B5bbcf6:L5bbcf6:{c.instructions+=3;NFSU2_TR(0x5bbcf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbcf8:{NFSU2_TR(0x5bbcf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbcf9:{NFSU2_TR(0x5bbcf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbcfcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbcfc:L5bbcfc:{c.instructions+=1;NFSU2_TR(0x5bbcfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86eb88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbd02:L5bbd02:{c.instructions+=3;NFSU2_TR(0x5bbd02);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bbd05:{NFSU2_TR(0x5bbd05);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bbd08:{NFSU2_TR(0x5bbd08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbcd6u);}goto L5bbcd6;}}
}
B5bbd0a:L5bbd0a:{c.instructions+=2;NFSU2_TR(0x5bbd0a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bbd0c:{NFSU2_TR(0x5bbd0c);
__builtin_memmove((R+16),(R+16),4);
}
B5bbd10:L5bbd10:{c.instructions+=3;NFSU2_TR(0x5bbd10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbd16:{NFSU2_TR(0x5bbd16);
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
B5bbd18:{NFSU2_TR(0x5bbd18);
if(r1(R+518)){{goto L5bbd26;}}
}
B5bbd1a:L5bbd1a:{c.instructions+=3;NFSU2_TR(0x5bbd1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbd1c:{NFSU2_TR(0x5bbd1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbd1d:{NFSU2_TR(0x5bbd1d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbd20ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbd20:L5bbd20:{c.instructions+=1;NFSU2_TR(0x5bbd20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ffa8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbd26:L5bbd26:{c.instructions+=3;NFSU2_TR(0x5bbd26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbd2c:{NFSU2_TR(0x5bbd2c);
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
B5bbd2e:{NFSU2_TR(0x5bbd2e);
if(r1(R+518)){{goto L5bbd3c;}}
}
B5bbd30:L5bbd30:{c.instructions+=3;NFSU2_TR(0x5bbd30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbd32:{NFSU2_TR(0x5bbd32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbd33:{NFSU2_TR(0x5bbd33);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbd36ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbd36:L5bbd36:{c.instructions+=1;NFSU2_TR(0x5bbd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86ff74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbd3c:L5bbd3c:{c.instructions+=3;NFSU2_TR(0x5bbd3c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bbd3f:{NFSU2_TR(0x5bbd3f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bbd42:{NFSU2_TR(0x5bbd42);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbd10u);}goto L5bbd10;}}
}
B5bbd44:L5bbd44:{c.instructions+=3;NFSU2_TR(0x5bbd44);
__builtin_memmove((R+0),gp(0x86ff70),4);
}
B5bbd49:{NFSU2_TR(0x5bbd49);
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
B5bbd4b:{NFSU2_TR(0x5bbd4b);
if(r1(R+518)){{goto L5bbd59;}}
}
B5bbd4d:L5bbd4d:{c.instructions+=3;NFSU2_TR(0x5bbd4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbd4f:{NFSU2_TR(0x5bbd4f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbd50:{NFSU2_TR(0x5bbd50);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbd53ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbd53:L5bbd53:{c.instructions+=1;NFSU2_TR(0x5bbd53);
__builtin_memmove(gp(0x86ff70),(R+28),4);
}
B5bbd59:L5bbd59:{c.instructions+=3;NFSU2_TR(0x5bbd59);
__builtin_memmove((R+0),gp(0x86f2e4),4);
}
B5bbd5e:{NFSU2_TR(0x5bbd5e);
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
B5bbd60:{NFSU2_TR(0x5bbd60);
if(r1(R+518)){{goto L5bbd6e;}}
}
B5bbd62:L5bbd62:{c.instructions+=3;NFSU2_TR(0x5bbd62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbd64:{NFSU2_TR(0x5bbd64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbd65:{NFSU2_TR(0x5bbd65);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbd68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbd68:L5bbd68:{c.instructions+=1;NFSU2_TR(0x5bbd68);
__builtin_memmove(gp(0x86f2e4),(R+28),4);
}
B5bbd6e:L5bbd6e:{c.instructions+=3;NFSU2_TR(0x5bbd6e);
__builtin_memmove((R+0),gp(0x86f2e0),4);
}
B5bbd73:{NFSU2_TR(0x5bbd73);
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
B5bbd75:{NFSU2_TR(0x5bbd75);
if(r1(R+518)){{goto L5bbd83;}}
}
B5bbd77:L5bbd77:{c.instructions+=3;NFSU2_TR(0x5bbd77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbd79:{NFSU2_TR(0x5bbd79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbd7a:{NFSU2_TR(0x5bbd7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbd7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbd7d:L5bbd7d:{c.instructions+=1;NFSU2_TR(0x5bbd7d);
__builtin_memmove(gp(0x86f2e0),(R+28),4);
}
B5bbd83:L5bbd83:{c.instructions+=3;NFSU2_TR(0x5bbd83);
__builtin_memmove((R+0),gp(0x8708f8),4);
}
B5bbd88:{NFSU2_TR(0x5bbd88);
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
B5bbd8a:{NFSU2_TR(0x5bbd8a);
if(r1(R+518)){{goto L5bbda9;}}
}
B5bbd8c:L5bbd8c:{c.instructions+=3;NFSU2_TR(0x5bbd8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bbd8e:{NFSU2_TR(0x5bbd8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbd8f:{NFSU2_TR(0x5bbd8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbd92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbd92:L5bbd92:{c.instructions+=5;NFSU2_TR(0x5bbd92);
__builtin_memmove((R+0),gp(0x8708fc),4);
}
B5bbd97:{NFSU2_TR(0x5bbd97);
__builtin_memmove(gp(0x8708f8),(R+28),4);
}
B5bbd9d:{NFSU2_TR(0x5bbd9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbd9f:{NFSU2_TR(0x5bbd9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbda0:{NFSU2_TR(0x5bbda0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbda3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbda3:L5bbda3:{c.instructions+=1;NFSU2_TR(0x5bbda3);
__builtin_memmove(gp(0x8708fc),(R+28),4);
}
B5bbda9:L5bbda9:{c.instructions+=3;NFSU2_TR(0x5bbda9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bbdaa:{NFSU2_TR(0x5bbdaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bbdab:{NFSU2_TR(0x5bbdab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bbdb0:L5bbdb0:{c.instructions+=6;NFSU2_TR(0x5bbdb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbdb1:{NFSU2_TR(0x5bbdb1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbdb5:{NFSU2_TR(0x5bbdb5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bbdbb:{NFSU2_TR(0x5bbdbb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bbdbd:{NFSU2_TR(0x5bbdbd);
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
B5bbdc0:{NFSU2_TR(0x5bbdc0);
if(r1(R+514)){{goto L5bbdca;}}
}
B5bbdc2:L5bbdc2:{c.instructions+=3;NFSU2_TR(0x5bbdc2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbdc8:{NFSU2_TR(0x5bbdc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bbdc9:{NFSU2_TR(0x5bbdc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bbdca:L5bbdca:{c.instructions+=5;NFSU2_TR(0x5bbdca);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbdce:{NFSU2_TR(0x5bbdce);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bbdd4:{NFSU2_TR(0x5bbdd4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bbdd6:{NFSU2_TR(0x5bbdd6);
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
B5bbdd9:{NFSU2_TR(0x5bbdd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bbde3;}}
}
B5bbddb:L5bbddb:{c.instructions+=3;NFSU2_TR(0x5bbddb);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbde1:{NFSU2_TR(0x5bbde1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bbde2:{NFSU2_TR(0x5bbde2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bbde3:L5bbde3:{c.instructions+=5;NFSU2_TR(0x5bbde3);
{u32 ea_=u32(u32(8386476u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbde9:{NFSU2_TR(0x5bbde9);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bbdef:{NFSU2_TR(0x5bbdef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bbdf1:{NFSU2_TR(0x5bbdf1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bbdf4:{NFSU2_TR(0x5bbdf4);
if(r1(R+514)){{goto L5bbe00;}}
}
B5bbdf6:L5bbdf6:{c.instructions+=1;NFSU2_TR(0x5bbdf6);
s4(0x7ff7ac,u32(0x3dcccccdull));
}
B5bbe00:L5bbe00:{c.instructions+=14;NFSU2_TR(0x5bbe00);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe06:{NFSU2_TR(0x5bbe06);
{u32 ea_=u32(u32(8386476u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5bbe0c:{NFSU2_TR(0x5bbe0c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bbe10:{NFSU2_TR(0x5bbe10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5bbe16:{NFSU2_TR(0x5bbe16);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe1c:{NFSU2_TR(0x5bbe1c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5bbe20:{NFSU2_TR(0x5bbe20);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bbe26:{NFSU2_TR(0x5bbe26);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5bbe28:{NFSU2_TR(0x5bbe28);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbe2c:{NFSU2_TR(0x5bbe2c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe30:{NFSU2_TR(0x5bbe30);
{u32 ea_=u32(u32(8386476u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bbe36:{NFSU2_TR(0x5bbe36);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bbe38:{NFSU2_TR(0x5bbe38);
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
B5bbe3b:{NFSU2_TR(0x5bbe3b);
if(r1(R+514)){{goto L5bbe55;}}
}
B5bbe3d:L5bbe3d:{c.instructions+=9;NFSU2_TR(0x5bbe3d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe41:{NFSU2_TR(0x5bbe41);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe45:{NFSU2_TR(0x5bbe45);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bbe4b:{NFSU2_TR(0x5bbe4b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bbe4d:{NFSU2_TR(0x5bbe4d);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5bbe4f:{NFSU2_TR(0x5bbe4f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bbe51:{NFSU2_TR(0x5bbe51);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bbe53:{NFSU2_TR(0x5bbe53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bbe54:{NFSU2_TR(0x5bbe54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bbe55:L5bbe55:{c.instructions+=10;NFSU2_TR(0x5bbe55);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe59:{NFSU2_TR(0x5bbe59);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bbe5d:{NFSU2_TR(0x5bbe5d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbe61:{NFSU2_TR(0x5bbe61);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bbe67:{NFSU2_TR(0x5bbe67);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bbe69:{NFSU2_TR(0x5bbe69);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5bbe6b:{NFSU2_TR(0x5bbe6b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bbe6d:{NFSU2_TR(0x5bbe6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bbe6f:{NFSU2_TR(0x5bbe6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bbe70:{NFSU2_TR(0x5bbe70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bbe80:L5bbe80:{c.instructions+=14;NFSU2_TR(0x5bbe80);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bbe83:{NFSU2_TR(0x5bbe83);
__builtin_memmove((R+0),gp(0x86ffa4),4);
}
B5bbe88:{NFSU2_TR(0x5bbe88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbe8a:{NFSU2_TR(0x5bbe8a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe8b:{NFSU2_TR(0x5bbe8b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe8c:{NFSU2_TR(0x5bbe8c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe8d:{NFSU2_TR(0x5bbe8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe8e:{NFSU2_TR(0x5bbe8e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe90:{NFSU2_TR(0x5bbe90);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe92:{NFSU2_TR(0x5bbe92);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bbe96:{NFSU2_TR(0x5bbe96);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe97:{NFSU2_TR(0x5bbe97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe99:{NFSU2_TR(0x5bbe99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbe9a:{NFSU2_TR(0x5bbe9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbe9dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbe9d:L5bbe9d:{c.instructions+=7;NFSU2_TR(0x5bbe9d);
__builtin_memmove((R+28),gp(0x7ff798),4);
}
B5bbea3:{NFSU2_TR(0x5bbea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bbea7:{NFSU2_TR(0x5bbea7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5bbea9:{NFSU2_TR(0x5bbea9);
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
B5bbeab:{NFSU2_TR(0x5bbeab);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbeaf:{NFSU2_TR(0x5bbeaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbeb3:{NFSU2_TR(0x5bbeb3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5bbfcc;}}
}
B5bbeb9:L5bbeb9:{c.instructions+=1;NFSU2_TR(0x5bbeb9);
__builtin_memmove((R+16),(R+16),4);
}
B5bbec0:L5bbec0:{c.instructions+=4;NFSU2_TR(0x5bbec0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bbec2:{NFSU2_TR(0x5bbec2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bbec4:{NFSU2_TR(0x5bbec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbec8:{NFSU2_TR(0x5bbec8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5bbfbf;}}
}
B5bbece:L5bbece:{c.instructions+=3;NFSU2_TR(0x5bbece);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bbed2:{NFSU2_TR(0x5bbed2);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbed6:{NFSU2_TR(0x5bbed6);
{goto L5bbee0;}
}
B5bbee0:L5bbee0:{c.instructions+=11;NFSU2_TR(0x5bbee0);
{u32 ea_=u32(u32(8386456u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bbee6:{NFSU2_TR(0x5bbee6);
__builtin_memmove((R+4),gp(0x7ff14c),4);
}
B5bbeec:{NFSU2_TR(0x5bbeec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbeed:{NFSU2_TR(0x5bbeed);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bbef3:{NFSU2_TR(0x5bbef3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbef7:{NFSU2_TR(0x5bbef7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bbefb:{NFSU2_TR(0x5bbefb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5bbeff:{NFSU2_TR(0x5bbeff);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbf03:{NFSU2_TR(0x5bbf03);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bbf07:{NFSU2_TR(0x5bbf07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf08:{NFSU2_TR(0x5bbf08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf0dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbdb0u);}goto L5bbdb0;}
}
B5bbf0d:L5bbf0d:{c.instructions+=9;NFSU2_TR(0x5bbf0d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbf11:{NFSU2_TR(0x5bbf11);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbf15:{NFSU2_TR(0x5bbf15);
__builtin_memmove((R+0),gp(0x7ff150),4);
}
B5bbf1a:{NFSU2_TR(0x5bbf1a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5bbf1e:{NFSU2_TR(0x5bbf1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf1f:{NFSU2_TR(0x5bbf1f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbf23:{NFSU2_TR(0x5bbf23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bbf27:{NFSU2_TR(0x5bbf27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf28:{NFSU2_TR(0x5bbf28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbdb0u);}goto L5bbdb0;}
}
B5bbf2d:L5bbf2d:{c.instructions+=5;NFSU2_TR(0x5bbf2d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbf31:{NFSU2_TR(0x5bbf31);
__builtin_memmove((R+4),gp(0x7ff154),4);
}
B5bbf37:{NFSU2_TR(0x5bbf37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf38:{NFSU2_TR(0x5bbf38);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf39:{NFSU2_TR(0x5bbf39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf3eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbdb0u);}goto L5bbdb0;}
}
B5bbf3e:L5bbf3e:{c.instructions+=5;NFSU2_TR(0x5bbf3e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bbf42:{NFSU2_TR(0x5bbf42);
__builtin_memmove((R+8),gp(0x7ff158),4);
}
B5bbf48:{NFSU2_TR(0x5bbf48);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf49:{NFSU2_TR(0x5bbf49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbf4a:{NFSU2_TR(0x5bbf4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf4full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbdb0u);}goto L5bbdb0;}
}
B5bbf4f:L5bbf4f:{c.instructions+=3;NFSU2_TR(0x5bbf4f);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bbf55:{NFSU2_TR(0x5bbf55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5bbf58:{NFSU2_TR(0x5bbf58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf5dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bbf5d:L5bbf5d:{c.instructions+=5;NFSU2_TR(0x5bbf5d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbf61:{NFSU2_TR(0x5bbf61);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bbf67:{NFSU2_TR(0x5bbf67);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bbf69:{NFSU2_TR(0x5bbf69);
__builtin_memmove((R+13),(R+0),1);
}
B5bbf6b:{NFSU2_TR(0x5bbf6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf70ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bbf70:L5bbf70:{c.instructions+=5;NFSU2_TR(0x5bbf70);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbf74:{NFSU2_TR(0x5bbf74);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bbf7a:{NFSU2_TR(0x5bbf7a);
__builtin_memmove((R+12),(R+0),1);
}
B5bbf7c:{NFSU2_TR(0x5bbf7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bbf7f:{NFSU2_TR(0x5bbf7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf84ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bbf84:L5bbf84:{c.instructions+=6;NFSU2_TR(0x5bbf84);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bbf88:{NFSU2_TR(0x5bbf88);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bbf8e:{NFSU2_TR(0x5bbf8e);
w4(R+0,u32(r1(R+0)));
}
B5bbf91:{NFSU2_TR(0x5bbf91);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bbf93:{NFSU2_TR(0x5bbf93);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bbf96:{NFSU2_TR(0x5bbf96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbf9bull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bbf9b:L5bbf9b:{c.instructions+=11;NFSU2_TR(0x5bbf9b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5bbf9e:{NFSU2_TR(0x5bbf9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bbfa2:{NFSU2_TR(0x5bbfa2);
w4(R+4,u32(r1(R+0)));
}
B5bbfa5:{NFSU2_TR(0x5bbfa5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B5bbfa7:{NFSU2_TR(0x5bbfa7);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+4))));
}
B5bbfa9:{NFSU2_TR(0x5bbfa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bbfac:{NFSU2_TR(0x5bbfac);
__builtin_memmove((R+28),gp(0x7ff798),4);
}
B5bbfb2:{NFSU2_TR(0x5bbfb2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5bbfb3:{NFSU2_TR(0x5bbfb3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bbfb5:{NFSU2_TR(0x5bbfb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbfb9:{NFSU2_TR(0x5bbfb9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbee0u);}goto L5bbee0;}}
}
B5bbfbf:L5bbfbf:{c.instructions+=4;NFSU2_TR(0x5bbfbf);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5bbfc0:{NFSU2_TR(0x5bbfc0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bbfc2:{NFSU2_TR(0x5bbfc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bbfc6:{NFSU2_TR(0x5bbfc6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bbec0u);}goto L5bbec0;}}
}
B5bbfcc:L5bbfcc:{c.instructions+=5;NFSU2_TR(0x5bbfcc);
__builtin_memmove((R+0),gp(0x86ffa4),4);
}
B5bbfd1:{NFSU2_TR(0x5bbfd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bbfd3:{NFSU2_TR(0x5bbfd3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbfd5:{NFSU2_TR(0x5bbfd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbfd6:{NFSU2_TR(0x5bbfd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bbfd9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bbfd9:L5bbfd9:{c.instructions+=8;NFSU2_TR(0x5bbfd9);
__builtin_memmove((R+8),gp(0x7ff14c),4);
}
B5bbfdf:{NFSU2_TR(0x5bbfdf);
__builtin_memmove((R+0),gp(0x7ff150),4);
}
B5bbfe4:{NFSU2_TR(0x5bbfe4);
__builtin_memmove((R+4),gp(0x7ff154),4);
}
B5bbfea:{NFSU2_TR(0x5bbfea);
__builtin_memmove(gp(0x86eb14),(R+8),4);
}
B5bbff0:{NFSU2_TR(0x5bbff0);
__builtin_memmove((R+8),gp(0x7ff158),4);
}
B5bbff6:{NFSU2_TR(0x5bbff6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bbff8:{NFSU2_TR(0x5bbff8);
__builtin_memmove(gp(0x86eb20),(R+8),4);
}
B5bbffe:{NFSU2_TR(0x5bbffe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x5bc000u,5bc);
}
XIT:NFSU2_TR_EXIT(0x5bb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
