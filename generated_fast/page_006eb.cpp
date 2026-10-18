#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6ea(u8* __restrict R,Cpu& c);
u32 body_6ec(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6eb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6eb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6eb(u8* __restrict R,Cpu& c);
u32 page_6eb(Cpu& c){return body_6eb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6eb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6eb000:goto L6eb000;
case 0x6eb003:c.instructions+=2;goto B6eb003;
case 0x6eb005:c.instructions+=1;goto B6eb005;
case 0x6eb007:goto L6eb007;
case 0x6eb009:c.instructions+=2;goto B6eb009;
case 0x6eb00d:c.instructions+=1;goto B6eb00d;
case 0x6eb013:goto L6eb013;
case 0x6eb017:c.instructions+=8;goto B6eb017;
case 0x6eb01b:c.instructions+=7;goto B6eb01b;
case 0x6eb01f:c.instructions+=6;goto B6eb01f;
case 0x6eb022:c.instructions+=5;goto B6eb022;
case 0x6eb025:c.instructions+=4;goto B6eb025;
case 0x6eb027:c.instructions+=3;goto B6eb027;
case 0x6eb029:c.instructions+=2;goto B6eb029;
case 0x6eb02d:c.instructions+=1;goto B6eb02d;
case 0x6eb030:goto L6eb030;
case 0x6eb032:c.instructions+=2;goto B6eb032;
case 0x6eb034:c.instructions+=1;goto B6eb034;
case 0x6eb03a:goto L6eb03a;
case 0x6eb03c:c.instructions+=2;goto B6eb03c;
case 0x6eb03e:c.instructions+=1;goto B6eb03e;
case 0x6eb040:goto L6eb040;
case 0x6eb044:c.instructions+=9;goto B6eb044;
case 0x6eb048:c.instructions+=8;goto B6eb048;
case 0x6eb04a:c.instructions+=7;goto B6eb04a;
case 0x6eb04d:c.instructions+=6;goto B6eb04d;
case 0x6eb052:c.instructions+=5;goto B6eb052;
case 0x6eb054:c.instructions+=4;goto B6eb054;
case 0x6eb05b:c.instructions+=3;goto B6eb05b;
case 0x6eb05e:c.instructions+=2;goto B6eb05e;
case 0x6eb061:c.instructions+=1;goto B6eb061;
case 0x6eb063:goto L6eb063;
case 0x6eb067:c.instructions+=5;goto B6eb067;
case 0x6eb06a:c.instructions+=4;goto B6eb06a;
case 0x6eb06e:c.instructions+=3;goto B6eb06e;
case 0x6eb06f:c.instructions+=2;goto B6eb06f;
case 0x6eb071:c.instructions+=1;goto B6eb071;
case 0x6eb076:goto L6eb076;
case 0x6eb07a:c.instructions+=5;goto B6eb07a;
case 0x6eb07b:c.instructions+=4;goto B6eb07b;
case 0x6eb07f:c.instructions+=3;goto B6eb07f;
case 0x6eb080:c.instructions+=2;goto B6eb080;
case 0x6eb082:c.instructions+=1;goto B6eb082;
case 0x6eb087:goto L6eb087;
case 0x6eb08b:c.instructions+=23;goto B6eb08b;
case 0x6eb08f:c.instructions+=22;goto B6eb08f;
case 0x6eb092:c.instructions+=21;goto B6eb092;
case 0x6eb095:c.instructions+=20;goto B6eb095;
case 0x6eb098:c.instructions+=19;goto B6eb098;
case 0x6eb09a:c.instructions+=18;goto B6eb09a;
case 0x6eb09e:c.instructions+=17;goto B6eb09e;
case 0x6eb0a1:c.instructions+=16;goto B6eb0a1;
case 0x6eb0a5:c.instructions+=15;goto B6eb0a5;
case 0x6eb0a9:c.instructions+=14;goto B6eb0a9;
case 0x6eb0ad:c.instructions+=13;goto B6eb0ad;
case 0x6eb0af:c.instructions+=12;goto B6eb0af;
case 0x6eb0b3:c.instructions+=11;goto B6eb0b3;
case 0x6eb0b6:c.instructions+=10;goto B6eb0b6;
case 0x6eb0ba:c.instructions+=9;goto B6eb0ba;
case 0x6eb0be:c.instructions+=8;goto B6eb0be;
case 0x6eb0c2:c.instructions+=7;goto B6eb0c2;
case 0x6eb0c4:c.instructions+=6;goto B6eb0c4;
case 0x6eb0c8:c.instructions+=5;goto B6eb0c8;
case 0x6eb0cb:c.instructions+=4;goto B6eb0cb;
case 0x6eb0cf:c.instructions+=3;goto B6eb0cf;
case 0x6eb0d3:c.instructions+=2;goto B6eb0d3;
case 0x6eb0d7:c.instructions+=1;goto B6eb0d7;
case 0x6eb0d9:goto L6eb0d9;
case 0x6eb0dd:c.instructions+=7;goto B6eb0dd;
case 0x6eb0e1:c.instructions+=6;goto B6eb0e1;
case 0x6eb0e2:c.instructions+=5;goto B6eb0e2;
case 0x6eb0e3:c.instructions+=4;goto B6eb0e3;
case 0x6eb0e6:c.instructions+=3;goto B6eb0e6;
case 0x6eb0e9:c.instructions+=2;goto B6eb0e9;
case 0x6eb0eb:c.instructions+=1;goto B6eb0eb;
case 0x6eb0f1:goto L6eb0f1;
case 0x6eb0f5:c.instructions+=1;goto B6eb0f5;
case 0x6eb0fb:goto L6eb0fb;
case 0x6eb0ff:c.instructions+=8;goto B6eb0ff;
case 0x6eb103:c.instructions+=7;goto B6eb103;
case 0x6eb107:c.instructions+=6;goto B6eb107;
case 0x6eb10a:c.instructions+=5;goto B6eb10a;
case 0x6eb10d:c.instructions+=4;goto B6eb10d;
case 0x6eb10f:c.instructions+=3;goto B6eb10f;
case 0x6eb111:c.instructions+=2;goto B6eb111;
case 0x6eb114:c.instructions+=1;goto B6eb114;
case 0x6eb116:goto L6eb116;
case 0x6eb11a:c.instructions+=5;goto B6eb11a;
case 0x6eb121:c.instructions+=4;goto B6eb121;
case 0x6eb123:c.instructions+=3;goto B6eb123;
case 0x6eb125:c.instructions+=2;goto B6eb125;
case 0x6eb128:c.instructions+=1;goto B6eb128;
case 0x6eb12e:goto L6eb12e;
case 0x6eb135:c.instructions+=2;goto B6eb135;
case 0x6eb137:c.instructions+=1;goto B6eb137;
case 0x6eb139:goto L6eb139;
case 0x6eb13b:c.instructions+=1;goto B6eb13b;
case 0x6eb13d:goto L6eb13d;
case 0x6eb144:c.instructions+=4;goto B6eb144;
case 0x6eb14a:c.instructions+=3;goto B6eb14a;
case 0x6eb14c:c.instructions+=2;goto B6eb14c;
case 0x6eb14f:c.instructions+=1;goto B6eb14f;
case 0x6eb155:goto L6eb155;
case 0x6eb158:c.instructions+=5;goto B6eb158;
case 0x6eb15c:c.instructions+=4;goto B6eb15c;
case 0x6eb160:c.instructions+=3;goto B6eb160;
case 0x6eb167:c.instructions+=2;goto B6eb167;
case 0x6eb16b:c.instructions+=1;goto B6eb16b;
case 0x6eb16d:goto L6eb16d;
case 0x6eb172:c.instructions+=7;goto B6eb172;
case 0x6eb176:c.instructions+=6;goto B6eb176;
case 0x6eb17a:c.instructions+=5;goto B6eb17a;
case 0x6eb181:c.instructions+=4;goto B6eb181;
case 0x6eb183:c.instructions+=3;goto B6eb183;
case 0x6eb185:c.instructions+=2;goto B6eb185;
case 0x6eb188:c.instructions+=1;goto B6eb188;
case 0x6eb18e:goto L6eb18e;
case 0x6eb192:c.instructions+=6;goto B6eb192;
case 0x6eb199:c.instructions+=5;goto B6eb199;
case 0x6eb19b:c.instructions+=4;goto B6eb19b;
case 0x6eb19f:c.instructions+=3;goto B6eb19f;
case 0x6eb1a3:c.instructions+=2;goto B6eb1a3;
case 0x6eb1a5:c.instructions+=1;goto B6eb1a5;
case 0x6eb1a7:goto L6eb1a7;
case 0x6eb1ab:c.instructions+=1;goto B6eb1ab;
case 0x6eb1ad:goto L6eb1ad;
case 0x6eb1b1:c.instructions+=3;goto B6eb1b1;
case 0x6eb1b2:c.instructions+=2;goto B6eb1b2;
case 0x6eb1b4:c.instructions+=1;goto B6eb1b4;
case 0x6eb1ba:goto L6eb1ba;
case 0x6eb1be:c.instructions+=9;goto B6eb1be;
case 0x6eb1c2:c.instructions+=8;goto B6eb1c2;
case 0x6eb1c5:c.instructions+=7;goto B6eb1c5;
case 0x6eb1c8:c.instructions+=6;goto B6eb1c8;
case 0x6eb1ca:c.instructions+=5;goto B6eb1ca;
case 0x6eb1ce:c.instructions+=4;goto B6eb1ce;
case 0x6eb1d1:c.instructions+=3;goto B6eb1d1;
case 0x6eb1d3:c.instructions+=2;goto B6eb1d3;
case 0x6eb1d5:c.instructions+=1;goto B6eb1d5;
case 0x6eb1db:goto L6eb1db;
case 0x6eb1de:c.instructions+=3;goto B6eb1de;
case 0x6eb1e0:c.instructions+=2;goto B6eb1e0;
case 0x6eb1e4:c.instructions+=1;goto B6eb1e4;
case 0x6eb1ea:goto L6eb1ea;
case 0x6eb1ee:c.instructions+=1;goto B6eb1ee;
case 0x6eb1f2:goto L6eb1f2;
case 0x6eb1f6:c.instructions+=11;goto B6eb1f6;
case 0x6eb1fa:c.instructions+=10;goto B6eb1fa;
case 0x6eb1fe:c.instructions+=9;goto B6eb1fe;
case 0x6eb205:c.instructions+=8;goto B6eb205;
case 0x6eb207:c.instructions+=7;goto B6eb207;
case 0x6eb20a:c.instructions+=6;goto B6eb20a;
case 0x6eb20f:c.instructions+=5;goto B6eb20f;
case 0x6eb211:c.instructions+=4;goto B6eb211;
case 0x6eb213:c.instructions+=3;goto B6eb213;
case 0x6eb216:c.instructions+=2;goto B6eb216;
case 0x6eb219:c.instructions+=1;goto B6eb219;
case 0x6eb21f:goto L6eb21f;
case 0x6eb222:c.instructions+=7;goto B6eb222;
case 0x6eb226:c.instructions+=6;goto B6eb226;
case 0x6eb22b:c.instructions+=5;goto B6eb22b;
case 0x6eb22f:c.instructions+=4;goto B6eb22f;
case 0x6eb233:c.instructions+=3;goto B6eb233;
case 0x6eb234:c.instructions+=2;goto B6eb234;
case 0x6eb235:c.instructions+=1;goto B6eb235;
case 0x6eb23a:goto L6eb23a;
case 0x6eb23e:c.instructions+=6;goto B6eb23e;
case 0x6eb241:c.instructions+=5;goto B6eb241;
case 0x6eb242:c.instructions+=4;goto B6eb242;
case 0x6eb244:c.instructions+=3;goto B6eb244;
case 0x6eb248:c.instructions+=2;goto B6eb248;
case 0x6eb24c:c.instructions+=1;goto B6eb24c;
case 0x6eb251:goto L6eb251;
case 0x6eb254:c.instructions+=2;goto B6eb254;
case 0x6eb257:c.instructions+=1;goto B6eb257;
case 0x6eb25d:goto L6eb25d;
case 0x6eb25e:c.instructions+=1;goto B6eb25e;
case 0x6eb260:goto L6eb260;
case 0x6eb267:c.instructions+=28;goto B6eb267;
case 0x6eb26b:c.instructions+=27;goto B6eb26b;
case 0x6eb26e:c.instructions+=26;goto B6eb26e;
case 0x6eb271:c.instructions+=25;goto B6eb271;
case 0x6eb275:c.instructions+=24;goto B6eb275;
case 0x6eb278:c.instructions+=23;goto B6eb278;
case 0x6eb27b:c.instructions+=22;goto B6eb27b;
case 0x6eb27d:c.instructions+=21;goto B6eb27d;
case 0x6eb281:c.instructions+=20;goto B6eb281;
case 0x6eb284:c.instructions+=19;goto B6eb284;
case 0x6eb286:c.instructions+=18;goto B6eb286;
case 0x6eb288:c.instructions+=17;goto B6eb288;
case 0x6eb28c:c.instructions+=16;goto B6eb28c;
case 0x6eb28e:c.instructions+=15;goto B6eb28e;
case 0x6eb292:c.instructions+=14;goto B6eb292;
case 0x6eb295:c.instructions+=13;goto B6eb295;
case 0x6eb297:c.instructions+=12;goto B6eb297;
case 0x6eb29a:c.instructions+=11;goto B6eb29a;
case 0x6eb29e:c.instructions+=10;goto B6eb29e;
case 0x6eb2a1:c.instructions+=9;goto B6eb2a1;
case 0x6eb2a5:c.instructions+=8;goto B6eb2a5;
case 0x6eb2a8:c.instructions+=7;goto B6eb2a8;
case 0x6eb2aa:c.instructions+=6;goto B6eb2aa;
case 0x6eb2ad:c.instructions+=5;goto B6eb2ad;
case 0x6eb2b1:c.instructions+=4;goto B6eb2b1;
case 0x6eb2b4:c.instructions+=3;goto B6eb2b4;
case 0x6eb2b8:c.instructions+=2;goto B6eb2b8;
case 0x6eb2bb:c.instructions+=1;goto B6eb2bb;
case 0x6eb2c0:goto L6eb2c0;
case 0x6eb2c3:c.instructions+=9;goto B6eb2c3;
case 0x6eb2ca:c.instructions+=8;goto B6eb2ca;
case 0x6eb2cd:c.instructions+=7;goto B6eb2cd;
case 0x6eb2d0:c.instructions+=6;goto B6eb2d0;
case 0x6eb2d3:c.instructions+=5;goto B6eb2d3;
case 0x6eb2d7:c.instructions+=4;goto B6eb2d7;
case 0x6eb2d9:c.instructions+=3;goto B6eb2d9;
case 0x6eb2db:c.instructions+=2;goto B6eb2db;
case 0x6eb2df:c.instructions+=1;goto B6eb2df;
case 0x6eb2e4:goto L6eb2e4;
case 0x6eb2e6:goto L6eb2e6;
case 0x6eb2ed:c.instructions+=27;goto B6eb2ed;
case 0x6eb2f1:c.instructions+=26;goto B6eb2f1;
case 0x6eb2f4:c.instructions+=25;goto B6eb2f4;
case 0x6eb2f7:c.instructions+=24;goto B6eb2f7;
case 0x6eb2fb:c.instructions+=23;goto B6eb2fb;
case 0x6eb2fe:c.instructions+=22;goto B6eb2fe;
case 0x6eb302:c.instructions+=21;goto B6eb302;
case 0x6eb304:c.instructions+=20;goto B6eb304;
case 0x6eb308:c.instructions+=19;goto B6eb308;
case 0x6eb30a:c.instructions+=18;goto B6eb30a;
case 0x6eb30c:c.instructions+=17;goto B6eb30c;
case 0x6eb30e:c.instructions+=16;goto B6eb30e;
case 0x6eb312:c.instructions+=15;goto B6eb312;
case 0x6eb315:c.instructions+=14;goto B6eb315;
case 0x6eb319:c.instructions+=13;goto B6eb319;
case 0x6eb31c:c.instructions+=12;goto B6eb31c;
case 0x6eb31e:c.instructions+=11;goto B6eb31e;
case 0x6eb321:c.instructions+=10;goto B6eb321;
case 0x6eb325:c.instructions+=9;goto B6eb325;
case 0x6eb328:c.instructions+=8;goto B6eb328;
case 0x6eb32c:c.instructions+=7;goto B6eb32c;
case 0x6eb32f:c.instructions+=6;goto B6eb32f;
case 0x6eb331:c.instructions+=5;goto B6eb331;
case 0x6eb334:c.instructions+=4;goto B6eb334;
case 0x6eb338:c.instructions+=3;goto B6eb338;
case 0x6eb33b:c.instructions+=2;goto B6eb33b;
case 0x6eb33f:c.instructions+=1;goto B6eb33f;
case 0x6eb341:goto L6eb341;
case 0x6eb343:c.instructions+=1;goto B6eb343;
case 0x6eb346:goto L6eb346;
case 0x6eb34a:goto L6eb34a;
case 0x6eb34e:c.instructions+=13;goto B6eb34e;
case 0x6eb352:c.instructions+=12;goto B6eb352;
case 0x6eb356:c.instructions+=11;goto B6eb356;
case 0x6eb35a:c.instructions+=10;goto B6eb35a;
case 0x6eb35d:c.instructions+=9;goto B6eb35d;
case 0x6eb361:c.instructions+=8;goto B6eb361;
case 0x6eb365:c.instructions+=7;goto B6eb365;
case 0x6eb366:c.instructions+=6;goto B6eb366;
case 0x6eb369:c.instructions+=5;goto B6eb369;
case 0x6eb36c:c.instructions+=4;goto B6eb36c;
case 0x6eb36e:c.instructions+=3;goto B6eb36e;
case 0x6eb372:c.instructions+=2;goto B6eb372;
case 0x6eb376:c.instructions+=1;goto B6eb376;
case 0x6eb37c:goto L6eb37c;
case 0x6eb37d:c.instructions+=6;goto B6eb37d;
case 0x6eb37e:c.instructions+=5;goto B6eb37e;
case 0x6eb37f:c.instructions+=4;goto B6eb37f;
case 0x6eb381:c.instructions+=3;goto B6eb381;
case 0x6eb382:c.instructions+=2;goto B6eb382;
case 0x6eb385:c.instructions+=1;goto B6eb385;
case 0x6eb388:goto L6eb388;
case 0x6eb38c:c.instructions+=8;goto B6eb38c;
case 0x6eb390:c.instructions+=7;goto B6eb390;
case 0x6eb393:c.instructions+=6;goto B6eb393;
case 0x6eb396:c.instructions+=5;goto B6eb396;
case 0x6eb398:c.instructions+=4;goto B6eb398;
case 0x6eb39a:c.instructions+=3;goto B6eb39a;
case 0x6eb39e:c.instructions+=2;goto B6eb39e;
case 0x6eb3a2:c.instructions+=1;goto B6eb3a2;
case 0x6eb3a8:goto L6eb3a8;
case 0x6eb3ac:c.instructions+=1;goto B6eb3ac;
case 0x6eb3b0:goto L6eb3b0;
case 0x6eb3b4:c.instructions+=11;goto B6eb3b4;
case 0x6eb3b8:c.instructions+=10;goto B6eb3b8;
case 0x6eb3bc:c.instructions+=9;goto B6eb3bc;
case 0x6eb3be:c.instructions+=8;goto B6eb3be;
case 0x6eb3c1:c.instructions+=7;goto B6eb3c1;
case 0x6eb3c6:c.instructions+=6;goto B6eb3c6;
case 0x6eb3c8:c.instructions+=5;goto B6eb3c8;
case 0x6eb3cf:c.instructions+=4;goto B6eb3cf;
case 0x6eb3d1:c.instructions+=3;goto B6eb3d1;
case 0x6eb3d4:c.instructions+=2;goto B6eb3d4;
case 0x6eb3d7:c.instructions+=1;goto B6eb3d7;
case 0x6eb3dd:goto L6eb3dd;
case 0x6eb3e0:c.instructions+=6;goto B6eb3e0;
case 0x6eb3e4:c.instructions+=5;goto B6eb3e4;
case 0x6eb3e8:c.instructions+=4;goto B6eb3e8;
case 0x6eb3eb:c.instructions+=3;goto B6eb3eb;
case 0x6eb3ec:c.instructions+=2;goto B6eb3ec;
case 0x6eb3ee:c.instructions+=1;goto B6eb3ee;
case 0x6eb3f3:goto L6eb3f3;
case 0x6eb3f7:c.instructions+=5;goto B6eb3f7;
case 0x6eb3fb:c.instructions+=4;goto B6eb3fb;
case 0x6eb3fc:c.instructions+=3;goto B6eb3fc;
case 0x6eb400:c.instructions+=2;goto B6eb400;
case 0x6eb401:c.instructions+=1;goto B6eb401;
case 0x6eb406:goto L6eb406;
case 0x6eb40a:c.instructions+=18;goto B6eb40a;
case 0x6eb40d:c.instructions+=17;goto B6eb40d;
case 0x6eb410:c.instructions+=16;goto B6eb410;
case 0x6eb414:c.instructions+=15;goto B6eb414;
case 0x6eb417:c.instructions+=14;goto B6eb417;
case 0x6eb418:c.instructions+=13;goto B6eb418;
case 0x6eb41c:c.instructions+=12;goto B6eb41c;
case 0x6eb420:c.instructions+=11;goto B6eb420;
case 0x6eb424:c.instructions+=10;goto B6eb424;
case 0x6eb428:c.instructions+=9;goto B6eb428;
case 0x6eb42b:c.instructions+=8;goto B6eb42b;
case 0x6eb42f:c.instructions+=7;goto B6eb42f;
case 0x6eb433:c.instructions+=6;goto B6eb433;
case 0x6eb436:c.instructions+=5;goto B6eb436;
case 0x6eb43a:c.instructions+=4;goto B6eb43a;
case 0x6eb43e:c.instructions+=3;goto B6eb43e;
case 0x6eb441:c.instructions+=2;goto B6eb441;
case 0x6eb445:c.instructions+=1;goto B6eb445;
case 0x6eb44a:goto L6eb44a;
case 0x6eb44e:c.instructions+=3;goto B6eb44e;
case 0x6eb451:c.instructions+=2;goto B6eb451;
case 0x6eb454:c.instructions+=1;goto B6eb454;
case 0x6eb45a:goto L6eb45a;
case 0x6eb45b:c.instructions+=1;goto B6eb45b;
case 0x6eb45d:goto L6eb45d;
case 0x6eb464:c.instructions+=28;goto B6eb464;
case 0x6eb468:c.instructions+=27;goto B6eb468;
case 0x6eb46b:c.instructions+=26;goto B6eb46b;
case 0x6eb46e:c.instructions+=25;goto B6eb46e;
case 0x6eb472:c.instructions+=24;goto B6eb472;
case 0x6eb475:c.instructions+=23;goto B6eb475;
case 0x6eb478:c.instructions+=22;goto B6eb478;
case 0x6eb47a:c.instructions+=21;goto B6eb47a;
case 0x6eb47e:c.instructions+=20;goto B6eb47e;
case 0x6eb481:c.instructions+=19;goto B6eb481;
case 0x6eb483:c.instructions+=18;goto B6eb483;
case 0x6eb485:c.instructions+=17;goto B6eb485;
case 0x6eb489:c.instructions+=16;goto B6eb489;
case 0x6eb48b:c.instructions+=15;goto B6eb48b;
case 0x6eb48f:c.instructions+=14;goto B6eb48f;
case 0x6eb492:c.instructions+=13;goto B6eb492;
case 0x6eb494:c.instructions+=12;goto B6eb494;
case 0x6eb497:c.instructions+=11;goto B6eb497;
case 0x6eb49b:c.instructions+=10;goto B6eb49b;
case 0x6eb49e:c.instructions+=9;goto B6eb49e;
case 0x6eb4a2:c.instructions+=8;goto B6eb4a2;
case 0x6eb4a5:c.instructions+=7;goto B6eb4a5;
case 0x6eb4a7:c.instructions+=6;goto B6eb4a7;
case 0x6eb4aa:c.instructions+=5;goto B6eb4aa;
case 0x6eb4ae:c.instructions+=4;goto B6eb4ae;
case 0x6eb4b1:c.instructions+=3;goto B6eb4b1;
case 0x6eb4b5:c.instructions+=2;goto B6eb4b5;
case 0x6eb4b8:c.instructions+=1;goto B6eb4b8;
case 0x6eb4bd:goto L6eb4bd;
case 0x6eb4c4:c.instructions+=9;goto B6eb4c4;
case 0x6eb4c7:c.instructions+=8;goto B6eb4c7;
case 0x6eb4ca:c.instructions+=7;goto B6eb4ca;
case 0x6eb4ce:c.instructions+=6;goto B6eb4ce;
case 0x6eb4d1:c.instructions+=5;goto B6eb4d1;
case 0x6eb4d4:c.instructions+=4;goto B6eb4d4;
case 0x6eb4d6:c.instructions+=3;goto B6eb4d6;
case 0x6eb4d8:c.instructions+=2;goto B6eb4d8;
case 0x6eb4dc:c.instructions+=1;goto B6eb4dc;
case 0x6eb4e1:goto L6eb4e1;
case 0x6eb4e3:goto L6eb4e3;
case 0x6eb4e6:c.instructions+=27;goto B6eb4e6;
case 0x6eb4ea:c.instructions+=26;goto B6eb4ea;
case 0x6eb4ee:c.instructions+=25;goto B6eb4ee;
case 0x6eb4f5:c.instructions+=24;goto B6eb4f5;
case 0x6eb4f9:c.instructions+=23;goto B6eb4f9;
case 0x6eb4fc:c.instructions+=22;goto B6eb4fc;
case 0x6eb4ff:c.instructions+=21;goto B6eb4ff;
case 0x6eb502:c.instructions+=20;goto B6eb502;
case 0x6eb504:c.instructions+=19;goto B6eb504;
case 0x6eb508:c.instructions+=18;goto B6eb508;
case 0x6eb50a:c.instructions+=17;goto B6eb50a;
case 0x6eb50c:c.instructions+=16;goto B6eb50c;
case 0x6eb510:c.instructions+=15;goto B6eb510;
case 0x6eb513:c.instructions+=14;goto B6eb513;
case 0x6eb517:c.instructions+=13;goto B6eb517;
case 0x6eb51a:c.instructions+=12;goto B6eb51a;
case 0x6eb51c:c.instructions+=11;goto B6eb51c;
case 0x6eb51f:c.instructions+=10;goto B6eb51f;
case 0x6eb523:c.instructions+=9;goto B6eb523;
case 0x6eb526:c.instructions+=8;goto B6eb526;
case 0x6eb52a:c.instructions+=7;goto B6eb52a;
case 0x6eb52d:c.instructions+=6;goto B6eb52d;
case 0x6eb52f:c.instructions+=5;goto B6eb52f;
case 0x6eb532:c.instructions+=4;goto B6eb532;
case 0x6eb536:c.instructions+=3;goto B6eb536;
case 0x6eb539:c.instructions+=2;goto B6eb539;
case 0x6eb53d:c.instructions+=1;goto B6eb53d;
case 0x6eb53f:goto L6eb53f;
case 0x6eb541:c.instructions+=1;goto B6eb541;
case 0x6eb544:goto L6eb544;
case 0x6eb548:goto L6eb548;
case 0x6eb54c:c.instructions+=13;goto B6eb54c;
case 0x6eb550:c.instructions+=12;goto B6eb550;
case 0x6eb554:c.instructions+=11;goto B6eb554;
case 0x6eb558:c.instructions+=10;goto B6eb558;
case 0x6eb559:c.instructions+=9;goto B6eb559;
case 0x6eb55d:c.instructions+=8;goto B6eb55d;
case 0x6eb561:c.instructions+=7;goto B6eb561;
case 0x6eb562:c.instructions+=6;goto B6eb562;
case 0x6eb565:c.instructions+=5;goto B6eb565;
case 0x6eb568:c.instructions+=4;goto B6eb568;
case 0x6eb56a:c.instructions+=3;goto B6eb56a;
case 0x6eb56e:c.instructions+=2;goto B6eb56e;
case 0x6eb572:c.instructions+=1;goto B6eb572;
case 0x6eb578:goto L6eb578;
case 0x6eb579:c.instructions+=6;goto B6eb579;
case 0x6eb57a:c.instructions+=5;goto B6eb57a;
case 0x6eb57b:c.instructions+=4;goto B6eb57b;
case 0x6eb57d:c.instructions+=3;goto B6eb57d;
case 0x6eb57e:c.instructions+=2;goto B6eb57e;
case 0x6eb581:c.instructions+=1;goto B6eb581;
case 0x6eb584:goto L6eb584;
case 0x6eb586:goto L6eb586;
case 0x6eb589:c.instructions+=2;goto B6eb589;
case 0x6eb58b:c.instructions+=1;goto B6eb58b;
case 0x6eb591:goto L6eb591;
case 0x6eb593:c.instructions+=2;goto B6eb593;
case 0x6eb595:c.instructions+=1;goto B6eb595;
case 0x6eb5a0:goto L6eb5a0;
case 0x6eb5a4:c.instructions+=10;goto B6eb5a4;
case 0x6eb5a8:c.instructions+=9;goto B6eb5a8;
case 0x6eb5af:c.instructions+=8;goto B6eb5af;
case 0x6eb5b1:c.instructions+=7;goto B6eb5b1;
case 0x6eb5b4:c.instructions+=6;goto B6eb5b4;
case 0x6eb5b9:c.instructions+=5;goto B6eb5b9;
case 0x6eb5bb:c.instructions+=4;goto B6eb5bb;
case 0x6eb5bd:c.instructions+=3;goto B6eb5bd;
case 0x6eb5c0:c.instructions+=2;goto B6eb5c0;
case 0x6eb5c3:c.instructions+=1;goto B6eb5c3;
case 0x6eb5c9:goto L6eb5c9;
case 0x6eb5cd:c.instructions+=6;goto B6eb5cd;
case 0x6eb5d0:c.instructions+=5;goto B6eb5d0;
case 0x6eb5d5:c.instructions+=4;goto B6eb5d5;
case 0x6eb5d8:c.instructions+=3;goto B6eb5d8;
case 0x6eb5db:c.instructions+=2;goto B6eb5db;
case 0x6eb5de:c.instructions+=1;goto B6eb5de;
case 0x6eb5e4:goto L6eb5e4;
case 0x6eb5e5:c.instructions+=3;goto B6eb5e5;
case 0x6eb5ec:c.instructions+=2;goto B6eb5ec;
case 0x6eb5f0:c.instructions+=1;goto B6eb5f0;
case 0x6eb5f2:goto L6eb5f2;
case 0x6eb5f5:c.instructions+=26;goto B6eb5f5;
case 0x6eb5f8:c.instructions+=25;goto B6eb5f8;
case 0x6eb5fc:c.instructions+=24;goto B6eb5fc;
case 0x6eb5ff:c.instructions+=23;goto B6eb5ff;
case 0x6eb601:c.instructions+=22;goto B6eb601;
case 0x6eb604:c.instructions+=21;goto B6eb604;
case 0x6eb606:c.instructions+=20;goto B6eb606;
case 0x6eb609:c.instructions+=19;goto B6eb609;
case 0x6eb60b:c.instructions+=18;goto B6eb60b;
case 0x6eb60d:c.instructions+=17;goto B6eb60d;
case 0x6eb610:c.instructions+=16;goto B6eb610;
case 0x6eb612:c.instructions+=15;goto B6eb612;
case 0x6eb615:c.instructions+=14;goto B6eb615;
case 0x6eb618:c.instructions+=13;goto B6eb618;
case 0x6eb61a:c.instructions+=12;goto B6eb61a;
case 0x6eb61d:c.instructions+=11;goto B6eb61d;
case 0x6eb620:c.instructions+=10;goto B6eb620;
case 0x6eb623:c.instructions+=9;goto B6eb623;
case 0x6eb626:c.instructions+=8;goto B6eb626;
case 0x6eb629:c.instructions+=7;goto B6eb629;
case 0x6eb62b:c.instructions+=6;goto B6eb62b;
case 0x6eb62e:c.instructions+=5;goto B6eb62e;
case 0x6eb631:c.instructions+=4;goto B6eb631;
case 0x6eb634:c.instructions+=3;goto B6eb634;
case 0x6eb637:c.instructions+=2;goto B6eb637;
case 0x6eb63a:c.instructions+=1;goto B6eb63a;
case 0x6eb63f:goto L6eb63f;
case 0x6eb642:c.instructions+=38;goto B6eb642;
case 0x6eb645:c.instructions+=37;goto B6eb645;
case 0x6eb648:c.instructions+=36;goto B6eb648;
case 0x6eb64b:c.instructions+=35;goto B6eb64b;
case 0x6eb64d:c.instructions+=34;goto B6eb64d;
case 0x6eb651:c.instructions+=33;goto B6eb651;
case 0x6eb653:c.instructions+=32;goto B6eb653;
case 0x6eb656:c.instructions+=31;goto B6eb656;
case 0x6eb658:c.instructions+=30;goto B6eb658;
case 0x6eb65b:c.instructions+=29;goto B6eb65b;
case 0x6eb65e:c.instructions+=28;goto B6eb65e;
case 0x6eb660:c.instructions+=27;goto B6eb660;
case 0x6eb662:c.instructions+=26;goto B6eb662;
case 0x6eb666:c.instructions+=25;goto B6eb666;
case 0x6eb669:c.instructions+=24;goto B6eb669;
case 0x6eb66c:c.instructions+=23;goto B6eb66c;
case 0x6eb670:c.instructions+=22;goto B6eb670;
case 0x6eb672:c.instructions+=21;goto B6eb672;
case 0x6eb675:c.instructions+=20;goto B6eb675;
case 0x6eb677:c.instructions+=19;goto B6eb677;
case 0x6eb67a:c.instructions+=18;goto B6eb67a;
case 0x6eb67c:c.instructions+=17;goto B6eb67c;
case 0x6eb67e:c.instructions+=16;goto B6eb67e;
case 0x6eb681:c.instructions+=15;goto B6eb681;
case 0x6eb683:c.instructions+=14;goto B6eb683;
case 0x6eb686:c.instructions+=13;goto B6eb686;
case 0x6eb688:c.instructions+=12;goto B6eb688;
case 0x6eb68b:c.instructions+=11;goto B6eb68b;
case 0x6eb68f:c.instructions+=10;goto B6eb68f;
case 0x6eb692:c.instructions+=9;goto B6eb692;
case 0x6eb696:c.instructions+=8;goto B6eb696;
case 0x6eb699:c.instructions+=7;goto B6eb699;
case 0x6eb69b:c.instructions+=6;goto B6eb69b;
case 0x6eb69e:c.instructions+=5;goto B6eb69e;
case 0x6eb6a2:c.instructions+=4;goto B6eb6a2;
case 0x6eb6a5:c.instructions+=3;goto B6eb6a5;
case 0x6eb6a9:c.instructions+=2;goto B6eb6a9;
case 0x6eb6ac:c.instructions+=1;goto B6eb6ac;
case 0x6eb6ae:goto L6eb6ae;
case 0x6eb6b5:c.instructions+=27;goto B6eb6b5;
case 0x6eb6b9:c.instructions+=26;goto B6eb6b9;
case 0x6eb6bc:c.instructions+=25;goto B6eb6bc;
case 0x6eb6bf:c.instructions+=24;goto B6eb6bf;
case 0x6eb6c3:c.instructions+=23;goto B6eb6c3;
case 0x6eb6c6:c.instructions+=22;goto B6eb6c6;
case 0x6eb6c8:c.instructions+=21;goto B6eb6c8;
case 0x6eb6cc:c.instructions+=20;goto B6eb6cc;
case 0x6eb6ce:c.instructions+=19;goto B6eb6ce;
case 0x6eb6d0:c.instructions+=18;goto B6eb6d0;
case 0x6eb6d2:c.instructions+=17;goto B6eb6d2;
case 0x6eb6d4:c.instructions+=16;goto B6eb6d4;
case 0x6eb6d7:c.instructions+=15;goto B6eb6d7;
case 0x6eb6da:c.instructions+=14;goto B6eb6da;
case 0x6eb6dd:c.instructions+=13;goto B6eb6dd;
case 0x6eb6df:c.instructions+=12;goto B6eb6df;
case 0x6eb6e1:c.instructions+=11;goto B6eb6e1;
case 0x6eb6e4:c.instructions+=10;goto B6eb6e4;
case 0x6eb6e7:c.instructions+=9;goto B6eb6e7;
case 0x6eb6ea:c.instructions+=8;goto B6eb6ea;
case 0x6eb6ed:c.instructions+=7;goto B6eb6ed;
case 0x6eb6ef:c.instructions+=6;goto B6eb6ef;
case 0x6eb6f1:c.instructions+=5;goto B6eb6f1;
case 0x6eb6f4:c.instructions+=4;goto B6eb6f4;
case 0x6eb6f7:c.instructions+=3;goto B6eb6f7;
case 0x6eb6fa:c.instructions+=2;goto B6eb6fa;
case 0x6eb6fc:c.instructions+=1;goto B6eb6fc;
case 0x6eb6fe:goto L6eb6fe;
case 0x6eb700:c.instructions+=1;goto B6eb700;
case 0x6eb703:goto L6eb703;
case 0x6eb707:c.instructions+=6;goto B6eb707;
case 0x6eb70b:c.instructions+=5;goto B6eb70b;
case 0x6eb70c:c.instructions+=4;goto B6eb70c;
case 0x6eb70f:c.instructions+=3;goto B6eb70f;
case 0x6eb712:c.instructions+=2;goto B6eb712;
case 0x6eb714:c.instructions+=1;goto B6eb714;
case 0x6eb71a:goto L6eb71a;
case 0x6eb71b:c.instructions+=6;goto B6eb71b;
case 0x6eb71c:c.instructions+=5;goto B6eb71c;
case 0x6eb71d:c.instructions+=4;goto B6eb71d;
case 0x6eb71f:c.instructions+=3;goto B6eb71f;
case 0x6eb720:c.instructions+=2;goto B6eb720;
case 0x6eb723:c.instructions+=1;goto B6eb723;
case 0x6eb730:goto L6eb730;
case 0x6eb731:c.instructions+=47;goto B6eb731;
case 0x6eb734:c.instructions+=46;goto B6eb734;
case 0x6eb738:c.instructions+=45;goto B6eb738;
case 0x6eb73c:c.instructions+=44;goto B6eb73c;
case 0x6eb740:c.instructions+=43;goto B6eb740;
case 0x6eb746:c.instructions+=42;goto B6eb746;
case 0x6eb74c:c.instructions+=41;goto B6eb74c;
case 0x6eb74e:c.instructions+=40;goto B6eb74e;
case 0x6eb752:c.instructions+=39;goto B6eb752;
case 0x6eb756:c.instructions+=38;goto B6eb756;
case 0x6eb75a:c.instructions+=37;goto B6eb75a;
case 0x6eb760:c.instructions+=36;goto B6eb760;
case 0x6eb766:c.instructions+=35;goto B6eb766;
case 0x6eb769:c.instructions+=34;goto B6eb769;
case 0x6eb76d:c.instructions+=33;goto B6eb76d;
case 0x6eb771:c.instructions+=32;goto B6eb771;
case 0x6eb775:c.instructions+=31;goto B6eb775;
case 0x6eb77b:c.instructions+=30;goto B6eb77b;
case 0x6eb781:c.instructions+=29;goto B6eb781;
case 0x6eb784:c.instructions+=28;goto B6eb784;
case 0x6eb788:c.instructions+=27;goto B6eb788;
case 0x6eb78c:c.instructions+=26;goto B6eb78c;
case 0x6eb790:c.instructions+=25;goto B6eb790;
case 0x6eb796:c.instructions+=24;goto B6eb796;
case 0x6eb79c:c.instructions+=23;goto B6eb79c;
case 0x6eb79f:c.instructions+=22;goto B6eb79f;
case 0x6eb7a3:c.instructions+=21;goto B6eb7a3;
case 0x6eb7a7:c.instructions+=20;goto B6eb7a7;
case 0x6eb7ab:c.instructions+=19;goto B6eb7ab;
case 0x6eb7b1:c.instructions+=18;goto B6eb7b1;
case 0x6eb7b4:c.instructions+=17;goto B6eb7b4;
case 0x6eb7b8:c.instructions+=16;goto B6eb7b8;
case 0x6eb7bc:c.instructions+=15;goto B6eb7bc;
case 0x6eb7c0:c.instructions+=14;goto B6eb7c0;
case 0x6eb7c6:c.instructions+=13;goto B6eb7c6;
case 0x6eb7c9:c.instructions+=12;goto B6eb7c9;
case 0x6eb7cd:c.instructions+=11;goto B6eb7cd;
case 0x6eb7d1:c.instructions+=10;goto B6eb7d1;
case 0x6eb7d5:c.instructions+=9;goto B6eb7d5;
case 0x6eb7db:c.instructions+=8;goto B6eb7db;
case 0x6eb7de:c.instructions+=7;goto B6eb7de;
case 0x6eb7e2:c.instructions+=6;goto B6eb7e2;
case 0x6eb7e6:c.instructions+=5;goto B6eb7e6;
case 0x6eb7ea:c.instructions+=4;goto B6eb7ea;
case 0x6eb7f0:c.instructions+=3;goto B6eb7f0;
case 0x6eb7f3:c.instructions+=2;goto B6eb7f3;
case 0x6eb7f4:c.instructions+=1;goto B6eb7f4;
case 0x6eb800:goto L6eb800;
case 0x6eb801:c.instructions+=47;goto B6eb801;
case 0x6eb804:c.instructions+=46;goto B6eb804;
case 0x6eb808:c.instructions+=45;goto B6eb808;
case 0x6eb80b:c.instructions+=44;goto B6eb80b;
case 0x6eb80f:c.instructions+=43;goto B6eb80f;
case 0x6eb810:c.instructions+=42;goto B6eb810;
case 0x6eb814:c.instructions+=41;goto B6eb814;
case 0x6eb818:c.instructions+=40;goto B6eb818;
case 0x6eb81e:c.instructions+=39;goto B6eb81e;
case 0x6eb824:c.instructions+=38;goto B6eb824;
case 0x6eb826:c.instructions+=37;goto B6eb826;
case 0x6eb82a:c.instructions+=36;goto B6eb82a;
case 0x6eb82e:c.instructions+=35;goto B6eb82e;
case 0x6eb831:c.instructions+=34;goto B6eb831;
case 0x6eb835:c.instructions+=33;goto B6eb835;
case 0x6eb839:c.instructions+=32;goto B6eb839;
case 0x6eb83f:c.instructions+=31;goto B6eb83f;
case 0x6eb845:c.instructions+=30;goto B6eb845;
case 0x6eb848:c.instructions+=29;goto B6eb848;
case 0x6eb84c:c.instructions+=28;goto B6eb84c;
case 0x6eb850:c.instructions+=27;goto B6eb850;
case 0x6eb853:c.instructions+=26;goto B6eb853;
case 0x6eb857:c.instructions+=25;goto B6eb857;
case 0x6eb859:c.instructions+=24;goto B6eb859;
case 0x6eb85b:c.instructions+=23;goto B6eb85b;
case 0x6eb85f:c.instructions+=22;goto B6eb85f;
case 0x6eb865:c.instructions+=21;goto B6eb865;
case 0x6eb86b:c.instructions+=20;goto B6eb86b;
case 0x6eb86e:c.instructions+=19;goto B6eb86e;
case 0x6eb870:c.instructions+=18;goto B6eb870;
case 0x6eb873:c.instructions+=17;goto B6eb873;
case 0x6eb877:c.instructions+=16;goto B6eb877;
case 0x6eb87a:c.instructions+=15;goto B6eb87a;
case 0x6eb87d:c.instructions+=14;goto B6eb87d;
case 0x6eb880:c.instructions+=13;goto B6eb880;
case 0x6eb883:c.instructions+=12;goto B6eb883;
case 0x6eb885:c.instructions+=11;goto B6eb885;
case 0x6eb888:c.instructions+=10;goto B6eb888;
case 0x6eb88a:c.instructions+=9;goto B6eb88a;
case 0x6eb88d:c.instructions+=8;goto B6eb88d;
case 0x6eb891:c.instructions+=7;goto B6eb891;
case 0x6eb895:c.instructions+=6;goto B6eb895;
case 0x6eb89b:c.instructions+=5;goto B6eb89b;
case 0x6eb8a1:c.instructions+=4;goto B6eb8a1;
case 0x6eb8a4:c.instructions+=3;goto B6eb8a4;
case 0x6eb8a5:c.instructions+=2;goto B6eb8a5;
case 0x6eb8a6:c.instructions+=1;goto B6eb8a6;
case 0x6eb8b0:goto L6eb8b0;
case 0x6eb8b1:c.instructions+=53;goto B6eb8b1;
case 0x6eb8b2:c.instructions+=52;goto B6eb8b2;
case 0x6eb8b4:c.instructions+=51;goto B6eb8b4;
case 0x6eb8b6:c.instructions+=50;goto B6eb8b6;
case 0x6eb8b9:c.instructions+=49;goto B6eb8b9;
case 0x6eb8bc:c.instructions+=48;goto B6eb8bc;
case 0x6eb8c0:c.instructions+=47;goto B6eb8c0;
case 0x6eb8c4:c.instructions+=46;goto B6eb8c4;
case 0x6eb8c5:c.instructions+=45;goto B6eb8c5;
case 0x6eb8c9:c.instructions+=44;goto B6eb8c9;
case 0x6eb8cd:c.instructions+=43;goto B6eb8cd;
case 0x6eb8d0:c.instructions+=42;goto B6eb8d0;
case 0x6eb8d6:c.instructions+=41;goto B6eb8d6;
case 0x6eb8d8:c.instructions+=40;goto B6eb8d8;
case 0x6eb8da:c.instructions+=39;goto B6eb8da;
case 0x6eb8dd:c.instructions+=38;goto B6eb8dd;
case 0x6eb8e0:c.instructions+=37;goto B6eb8e0;
case 0x6eb8e3:c.instructions+=36;goto B6eb8e3;
case 0x6eb8e7:c.instructions+=35;goto B6eb8e7;
case 0x6eb8eb:c.instructions+=34;goto B6eb8eb;
case 0x6eb8ee:c.instructions+=33;goto B6eb8ee;
case 0x6eb8f4:c.instructions+=32;goto B6eb8f4;
case 0x6eb8f7:c.instructions+=31;goto B6eb8f7;
case 0x6eb8fa:c.instructions+=30;goto B6eb8fa;
case 0x6eb8fd:c.instructions+=29;goto B6eb8fd;
case 0x6eb900:c.instructions+=28;goto B6eb900;
case 0x6eb903:c.instructions+=27;goto B6eb903;
case 0x6eb907:c.instructions+=26;goto B6eb907;
case 0x6eb90b:c.instructions+=25;goto B6eb90b;
case 0x6eb90e:c.instructions+=24;goto B6eb90e;
case 0x6eb914:c.instructions+=23;goto B6eb914;
case 0x6eb917:c.instructions+=22;goto B6eb917;
case 0x6eb91a:c.instructions+=21;goto B6eb91a;
case 0x6eb91c:c.instructions+=20;goto B6eb91c;
case 0x6eb91f:c.instructions+=19;goto B6eb91f;
case 0x6eb922:c.instructions+=18;goto B6eb922;
case 0x6eb925:c.instructions+=17;goto B6eb925;
case 0x6eb928:c.instructions+=16;goto B6eb928;
case 0x6eb92a:c.instructions+=15;goto B6eb92a;
case 0x6eb92d:c.instructions+=14;goto B6eb92d;
case 0x6eb930:c.instructions+=13;goto B6eb930;
case 0x6eb933:c.instructions+=12;goto B6eb933;
case 0x6eb935:c.instructions+=11;goto B6eb935;
case 0x6eb938:c.instructions+=10;goto B6eb938;
case 0x6eb93c:c.instructions+=9;goto B6eb93c;
case 0x6eb940:c.instructions+=8;goto B6eb940;
case 0x6eb943:c.instructions+=7;goto B6eb943;
case 0x6eb949:c.instructions+=6;goto B6eb949;
case 0x6eb94c:c.instructions+=5;goto B6eb94c;
case 0x6eb94f:c.instructions+=4;goto B6eb94f;
case 0x6eb950:c.instructions+=3;goto B6eb950;
case 0x6eb951:c.instructions+=2;goto B6eb951;
case 0x6eb952:c.instructions+=1;goto B6eb952;
case 0x6eb960:goto L6eb960;
case 0x6eb961:c.instructions+=22;goto B6eb961;
case 0x6eb962:c.instructions+=21;goto B6eb962;
case 0x6eb964:c.instructions+=20;goto B6eb964;
case 0x6eb967:c.instructions+=19;goto B6eb967;
case 0x6eb96b:c.instructions+=18;goto B6eb96b;
case 0x6eb96c:c.instructions+=17;goto B6eb96c;
case 0x6eb970:c.instructions+=16;goto B6eb970;
case 0x6eb975:c.instructions+=15;goto B6eb975;
case 0x6eb977:c.instructions+=14;goto B6eb977;
case 0x6eb979:c.instructions+=13;goto B6eb979;
case 0x6eb97b:c.instructions+=12;goto B6eb97b;
case 0x6eb97e:c.instructions+=11;goto B6eb97e;
case 0x6eb981:c.instructions+=10;goto B6eb981;
case 0x6eb985:c.instructions+=9;goto B6eb985;
case 0x6eb988:c.instructions+=8;goto B6eb988;
case 0x6eb98a:c.instructions+=7;goto B6eb98a;
case 0x6eb98d:c.instructions+=6;goto B6eb98d;
case 0x6eb98f:c.instructions+=5;goto B6eb98f;
case 0x6eb992:c.instructions+=4;goto B6eb992;
case 0x6eb994:c.instructions+=3;goto B6eb994;
case 0x6eb996:c.instructions+=2;goto B6eb996;
case 0x6eb99a:c.instructions+=1;goto B6eb99a;
case 0x6eb99c:goto L6eb99c;
case 0x6eb99f:c.instructions+=3;goto B6eb99f;
case 0x6eb9a2:c.instructions+=2;goto B6eb9a2;
case 0x6eb9a4:c.instructions+=1;goto B6eb9a4;
case 0x6eb9a7:goto L6eb9a7;
case 0x6eb9ab:c.instructions+=6;goto B6eb9ab;
case 0x6eb9ac:c.instructions+=5;goto B6eb9ac;
case 0x6eb9b0:c.instructions+=4;goto B6eb9b0;
case 0x6eb9b1:c.instructions+=3;goto B6eb9b1;
case 0x6eb9b4:c.instructions+=2;goto B6eb9b4;
case 0x6eb9b5:c.instructions+=1;goto B6eb9b5;
case 0x6eb9c0:goto L6eb9c0;
case 0x6eb9c1:c.instructions+=2;goto B6eb9c1;
case 0x6eb9c3:c.instructions+=1;goto B6eb9c3;
case 0x6eb9c8:goto L6eb9c8;
case 0x6eb9ca:c.instructions+=18;goto B6eb9ca;
case 0x6eb9cd:c.instructions+=17;goto B6eb9cd;
case 0x6eb9d0:c.instructions+=16;goto B6eb9d0;
case 0x6eb9d3:c.instructions+=15;goto B6eb9d3;
case 0x6eb9d6:c.instructions+=14;goto B6eb9d6;
case 0x6eb9d9:c.instructions+=13;goto B6eb9d9;
case 0x6eb9dc:c.instructions+=12;goto B6eb9dc;
case 0x6eb9df:c.instructions+=11;goto B6eb9df;
case 0x6eb9e2:c.instructions+=10;goto B6eb9e2;
case 0x6eb9e5:c.instructions+=9;goto B6eb9e5;
case 0x6eb9e8:c.instructions+=8;goto B6eb9e8;
case 0x6eb9ee:c.instructions+=7;goto B6eb9ee;
case 0x6eb9f1:c.instructions+=6;goto B6eb9f1;
case 0x6eb9f4:c.instructions+=5;goto B6eb9f4;
case 0x6eb9f7:c.instructions+=4;goto B6eb9f7;
case 0x6eb9fe:c.instructions+=3;goto B6eb9fe;
case 0x6eba00:c.instructions+=2;goto B6eba00;
case 0x6eba01:c.instructions+=1;goto B6eba01;
case 0x6eba10:goto L6eba10;
case 0x6eba13:c.instructions+=13;goto B6eba13;
case 0x6eba17:c.instructions+=12;goto B6eba17;
case 0x6eba1b:c.instructions+=11;goto B6eba1b;
case 0x6eba1f:c.instructions+=10;goto B6eba1f;
case 0x6eba20:c.instructions+=9;goto B6eba20;
case 0x6eba24:c.instructions+=8;goto B6eba24;
case 0x6eba28:c.instructions+=7;goto B6eba28;
case 0x6eba2b:c.instructions+=6;goto B6eba2b;
case 0x6eba2e:c.instructions+=5;goto B6eba2e;
case 0x6eba31:c.instructions+=4;goto B6eba31;
case 0x6eba33:c.instructions+=3;goto B6eba33;
case 0x6eba37:c.instructions+=2;goto B6eba37;
case 0x6eba39:c.instructions+=1;goto B6eba39;
case 0x6eba3b:goto L6eba3b;
case 0x6eba3c:c.instructions+=4;goto B6eba3c;
case 0x6eba3e:c.instructions+=3;goto B6eba3e;
case 0x6eba3f:c.instructions+=2;goto B6eba3f;
case 0x6eba43:c.instructions+=1;goto B6eba43;
case 0x6eba44:goto L6eba44;
case 0x6eba46:c.instructions+=2;goto B6eba46;
case 0x6eba48:c.instructions+=1;goto B6eba48;
case 0x6eba4a:goto L6eba4a;
case 0x6eba4e:c.instructions+=2;goto B6eba4e;
case 0x6eba50:c.instructions+=1;goto B6eba50;
case 0x6eba53:goto L6eba53;
case 0x6eba57:c.instructions+=7;goto B6eba57;
case 0x6eba5a:c.instructions+=6;goto B6eba5a;
case 0x6eba5e:c.instructions+=5;goto B6eba5e;
case 0x6eba5f:c.instructions+=4;goto B6eba5f;
case 0x6eba61:c.instructions+=3;goto B6eba61;
case 0x6eba62:c.instructions+=2;goto B6eba62;
case 0x6eba64:c.instructions+=1;goto B6eba64;
case 0x6eba69:goto L6eba69;
case 0x6eba6d:c.instructions+=19;goto B6eba6d;
case 0x6eba70:c.instructions+=18;goto B6eba70;
case 0x6eba74:c.instructions+=17;goto B6eba74;
case 0x6eba77:c.instructions+=16;goto B6eba77;
case 0x6eba78:c.instructions+=15;goto B6eba78;
case 0x6eba7b:c.instructions+=14;goto B6eba7b;
case 0x6eba7e:c.instructions+=13;goto B6eba7e;
case 0x6eba82:c.instructions+=12;goto B6eba82;
case 0x6eba85:c.instructions+=11;goto B6eba85;
case 0x6eba88:c.instructions+=10;goto B6eba88;
case 0x6eba8b:c.instructions+=9;goto B6eba8b;
case 0x6eba8f:c.instructions+=8;goto B6eba8f;
case 0x6eba92:c.instructions+=7;goto B6eba92;
case 0x6eba95:c.instructions+=6;goto B6eba95;
case 0x6eba99:c.instructions+=5;goto B6eba99;
case 0x6eba9c:c.instructions+=4;goto B6eba9c;
case 0x6eba9f:c.instructions+=3;goto B6eba9f;
case 0x6ebaa3:c.instructions+=2;goto B6ebaa3;
case 0x6ebaa5:c.instructions+=1;goto B6ebaa5;
case 0x6ebaa7:goto L6ebaa7;
case 0x6ebaab:c.instructions+=1;goto B6ebaab;
case 0x6ebaad:goto L6ebaad;
case 0x6ebaae:c.instructions+=2;goto B6ebaae;
case 0x6ebaaf:c.instructions+=1;goto B6ebaaf;
case 0x6ebab0:goto L6ebab0;
case 0x6ebab1:c.instructions+=2;goto B6ebab1;
case 0x6ebab4:c.instructions+=1;goto B6ebab4;
case 0x6ebac0:goto L6ebac0;
case 0x6ebac3:c.instructions+=14;goto B6ebac3;
case 0x6ebac7:c.instructions+=13;goto B6ebac7;
case 0x6ebacb:c.instructions+=12;goto B6ebacb;
case 0x6ebacf:c.instructions+=11;goto B6ebacf;
case 0x6ebad3:c.instructions+=10;goto B6ebad3;
case 0x6ebad7:c.instructions+=9;goto B6ebad7;
case 0x6ebad8:c.instructions+=8;goto B6ebad8;
case 0x6ebadb:c.instructions+=7;goto B6ebadb;
case 0x6ebade:c.instructions+=6;goto B6ebade;
case 0x6ebae1:c.instructions+=5;goto B6ebae1;
case 0x6ebae5:c.instructions+=4;goto B6ebae5;
case 0x6ebae6:c.instructions+=3;goto B6ebae6;
case 0x6ebae8:c.instructions+=2;goto B6ebae8;
case 0x6ebaec:c.instructions+=1;goto B6ebaec;
case 0x6ebaf2:goto L6ebaf2;
case 0x6ebaf3:c.instructions+=6;goto B6ebaf3;
case 0x6ebaf5:c.instructions+=5;goto B6ebaf5;
case 0x6ebaf6:c.instructions+=4;goto B6ebaf6;
case 0x6ebaf7:c.instructions+=3;goto B6ebaf7;
case 0x6ebafb:c.instructions+=2;goto B6ebafb;
case 0x6ebafc:c.instructions+=1;goto B6ebafc;
case 0x6ebb00:goto L6ebb00;
case 0x6ebb04:c.instructions+=3;goto B6ebb04;
case 0x6ebb08:c.instructions+=2;goto B6ebb08;
case 0x6ebb09:c.instructions+=1;goto B6ebb09;
case 0x6ebb0b:goto L6ebb0b;
case 0x6ebb0f:c.instructions+=7;goto B6ebb0f;
case 0x6ebb11:c.instructions+=6;goto B6ebb11;
case 0x6ebb13:c.instructions+=5;goto B6ebb13;
case 0x6ebb16:c.instructions+=4;goto B6ebb16;
case 0x6ebb19:c.instructions+=3;goto B6ebb19;
case 0x6ebb1d:c.instructions+=2;goto B6ebb1d;
case 0x6ebb1e:c.instructions+=1;goto B6ebb1e;
case 0x6ebb20:goto L6ebb20;
case 0x6ebb24:c.instructions+=7;goto B6ebb24;
case 0x6ebb27:c.instructions+=6;goto B6ebb27;
case 0x6ebb2b:c.instructions+=5;goto B6ebb2b;
case 0x6ebb2c:c.instructions+=4;goto B6ebb2c;
case 0x6ebb2e:c.instructions+=3;goto B6ebb2e;
case 0x6ebb2f:c.instructions+=2;goto B6ebb2f;
case 0x6ebb31:c.instructions+=1;goto B6ebb31;
case 0x6ebb36:goto L6ebb36;
case 0x6ebb39:c.instructions+=16;goto B6ebb39;
case 0x6ebb3d:c.instructions+=15;goto B6ebb3d;
case 0x6ebb40:c.instructions+=14;goto B6ebb40;
case 0x6ebb43:c.instructions+=13;goto B6ebb43;
case 0x6ebb46:c.instructions+=12;goto B6ebb46;
case 0x6ebb47:c.instructions+=11;goto B6ebb47;
case 0x6ebb4a:c.instructions+=10;goto B6ebb4a;
case 0x6ebb4d:c.instructions+=9;goto B6ebb4d;
case 0x6ebb51:c.instructions+=8;goto B6ebb51;
case 0x6ebb54:c.instructions+=7;goto B6ebb54;
case 0x6ebb57:c.instructions+=6;goto B6ebb57;
case 0x6ebb5b:c.instructions+=5;goto B6ebb5b;
case 0x6ebb5e:c.instructions+=4;goto B6ebb5e;
case 0x6ebb61:c.instructions+=3;goto B6ebb61;
case 0x6ebb65:c.instructions+=2;goto B6ebb65;
case 0x6ebb68:c.instructions+=1;goto B6ebb68;
case 0x6ebb6a:goto L6ebb6a;
case 0x6ebb6e:c.instructions+=1;goto B6ebb6e;
case 0x6ebb70:goto L6ebb70;
case 0x6ebb71:c.instructions+=2;goto B6ebb71;
case 0x6ebb72:c.instructions+=1;goto B6ebb72;
case 0x6ebb73:goto L6ebb73;
case 0x6ebb74:c.instructions+=2;goto B6ebb74;
case 0x6ebb77:c.instructions+=1;goto B6ebb77;
case 0x6ebb80:goto L6ebb80;
case 0x6ebb84:c.instructions+=5;goto B6ebb84;
case 0x6ebb87:c.instructions+=4;goto B6ebb87;
case 0x6ebb88:c.instructions+=3;goto B6ebb88;
case 0x6ebb8a:c.instructions+=2;goto B6ebb8a;
case 0x6ebb8d:c.instructions+=1;goto B6ebb8d;
case 0x6ebb93:goto L6ebb93;
case 0x6ebb97:c.instructions+=12;goto B6ebb97;
case 0x6ebb98:c.instructions+=11;goto B6ebb98;
case 0x6ebb9c:c.instructions+=10;goto B6ebb9c;
case 0x6ebb9f:c.instructions+=9;goto B6ebb9f;
case 0x6ebba1:c.instructions+=8;goto B6ebba1;
case 0x6ebba4:c.instructions+=7;goto B6ebba4;
case 0x6ebba5:c.instructions+=6;goto B6ebba5;
case 0x6ebba6:c.instructions+=5;goto B6ebba6;
case 0x6ebba9:c.instructions+=4;goto B6ebba9;
case 0x6ebbac:c.instructions+=3;goto B6ebbac;
case 0x6ebbae:c.instructions+=2;goto B6ebbae;
case 0x6ebbb0:c.instructions+=1;goto B6ebbb0;
case 0x6ebbb2:goto L6ebbb2;
case 0x6ebbb5:c.instructions+=4;goto B6ebbb5;
case 0x6ebbb7:c.instructions+=3;goto B6ebbb7;
case 0x6ebbb9:c.instructions+=2;goto B6ebbb9;
case 0x6ebbbd:c.instructions+=1;goto B6ebbbd;
case 0x6ebbc3:goto L6ebbc3;
case 0x6ebbc5:c.instructions+=1;goto B6ebbc5;
case 0x6ebbc7:goto L6ebbc7;
case 0x6ebbca:c.instructions+=4;goto B6ebbca;
case 0x6ebbcc:c.instructions+=3;goto B6ebbcc;
case 0x6ebbcd:c.instructions+=2;goto B6ebbcd;
case 0x6ebbcf:c.instructions+=1;goto B6ebbcf;
case 0x6ebbd4:goto L6ebbd4;
case 0x6ebbd8:c.instructions+=7;goto B6ebbd8;
case 0x6ebbdc:c.instructions+=6;goto B6ebbdc;
case 0x6ebbdd:c.instructions+=5;goto B6ebbdd;
case 0x6ebbe0:c.instructions+=4;goto B6ebbe0;
case 0x6ebbe3:c.instructions+=3;goto B6ebbe3;
case 0x6ebbe5:c.instructions+=2;goto B6ebbe5;
case 0x6ebbe9:c.instructions+=1;goto B6ebbe9;
case 0x6ebbeb:goto L6ebbeb;
case 0x6ebbef:c.instructions+=7;goto B6ebbef;
case 0x6ebbf0:c.instructions+=6;goto B6ebbf0;
case 0x6ebbf1:c.instructions+=5;goto B6ebbf1;
case 0x6ebbf2:c.instructions+=4;goto B6ebbf2;
case 0x6ebbf5:c.instructions+=3;goto B6ebbf5;
case 0x6ebbf6:c.instructions+=2;goto B6ebbf6;
case 0x6ebbf9:c.instructions+=1;goto B6ebbf9;
case 0x6ebbfc:goto L6ebbfc;
case 0x6ebc00:c.instructions+=10;goto B6ebc00;
case 0x6ebc04:c.instructions+=9;goto B6ebc04;
case 0x6ebc07:c.instructions+=8;goto B6ebc07;
case 0x6ebc0a:c.instructions+=7;goto B6ebc0a;
case 0x6ebc0d:c.instructions+=6;goto B6ebc0d;
case 0x6ebc0f:c.instructions+=5;goto B6ebc0f;
case 0x6ebc11:c.instructions+=4;goto B6ebc11;
case 0x6ebc13:c.instructions+=3;goto B6ebc13;
case 0x6ebc15:c.instructions+=2;goto B6ebc15;
case 0x6ebc19:c.instructions+=1;goto B6ebc19;
case 0x6ebc1f:goto L6ebc1f;
case 0x6ebc21:c.instructions+=1;goto B6ebc21;
case 0x6ebc25:goto L6ebc25;
case 0x6ebc28:c.instructions+=6;goto B6ebc28;
case 0x6ebc2c:c.instructions+=5;goto B6ebc2c;
case 0x6ebc2d:c.instructions+=4;goto B6ebc2d;
case 0x6ebc31:c.instructions+=3;goto B6ebc31;
case 0x6ebc32:c.instructions+=2;goto B6ebc32;
case 0x6ebc34:c.instructions+=1;goto B6ebc34;
case 0x6ebc39:goto L6ebc39;
case 0x6ebc3d:c.instructions+=30;goto B6ebc3d;
case 0x6ebc40:c.instructions+=29;goto B6ebc40;
case 0x6ebc43:c.instructions+=28;goto B6ebc43;
case 0x6ebc46:c.instructions+=27;goto B6ebc46;
case 0x6ebc49:c.instructions+=26;goto B6ebc49;
case 0x6ebc4c:c.instructions+=25;goto B6ebc4c;
case 0x6ebc50:c.instructions+=24;goto B6ebc50;
case 0x6ebc53:c.instructions+=23;goto B6ebc53;
case 0x6ebc57:c.instructions+=22;goto B6ebc57;
case 0x6ebc5a:c.instructions+=21;goto B6ebc5a;
case 0x6ebc5e:c.instructions+=20;goto B6ebc5e;
case 0x6ebc62:c.instructions+=19;goto B6ebc62;
case 0x6ebc65:c.instructions+=18;goto B6ebc65;
case 0x6ebc69:c.instructions+=17;goto B6ebc69;
case 0x6ebc6c:c.instructions+=16;goto B6ebc6c;
case 0x6ebc70:c.instructions+=15;goto B6ebc70;
case 0x6ebc74:c.instructions+=14;goto B6ebc74;
case 0x6ebc77:c.instructions+=13;goto B6ebc77;
case 0x6ebc7b:c.instructions+=12;goto B6ebc7b;
case 0x6ebc7e:c.instructions+=11;goto B6ebc7e;
case 0x6ebc82:c.instructions+=10;goto B6ebc82;
case 0x6ebc86:c.instructions+=9;goto B6ebc86;
case 0x6ebc87:c.instructions+=8;goto B6ebc87;
case 0x6ebc8b:c.instructions+=7;goto B6ebc8b;
case 0x6ebc8f:c.instructions+=6;goto B6ebc8f;
case 0x6ebc93:c.instructions+=5;goto B6ebc93;
case 0x6ebc97:c.instructions+=4;goto B6ebc97;
case 0x6ebc9a:c.instructions+=3;goto B6ebc9a;
case 0x6ebc9c:c.instructions+=2;goto B6ebc9c;
case 0x6ebca0:c.instructions+=1;goto B6ebca0;
case 0x6ebca2:goto L6ebca2;
case 0x6ebca6:c.instructions+=4;goto B6ebca6;
case 0x6ebca7:c.instructions+=3;goto B6ebca7;
case 0x6ebca8:c.instructions+=2;goto B6ebca8;
case 0x6ebcab:c.instructions+=1;goto B6ebcab;
case 0x6ebcac:goto L6ebcac;
case 0x6ebcad:c.instructions+=2;goto B6ebcad;
case 0x6ebcb0:c.instructions+=1;goto B6ebcb0;
case 0x6ebcc0:goto L6ebcc0;
case 0x6ebcc3:c.instructions+=17;goto B6ebcc3;
case 0x6ebcc7:c.instructions+=16;goto B6ebcc7;
case 0x6ebccb:c.instructions+=15;goto B6ebccb;
case 0x6ebccf:c.instructions+=14;goto B6ebccf;
case 0x6ebcd2:c.instructions+=13;goto B6ebcd2;
case 0x6ebcd6:c.instructions+=12;goto B6ebcd6;
case 0x6ebcda:c.instructions+=11;goto B6ebcda;
case 0x6ebcdd:c.instructions+=10;goto B6ebcdd;
case 0x6ebce0:c.instructions+=9;goto B6ebce0;
case 0x6ebce1:c.instructions+=8;goto B6ebce1;
case 0x6ebce2:c.instructions+=7;goto B6ebce2;
case 0x6ebce6:c.instructions+=6;goto B6ebce6;
case 0x6ebce9:c.instructions+=5;goto B6ebce9;
case 0x6ebceb:c.instructions+=4;goto B6ebceb;
case 0x6ebced:c.instructions+=3;goto B6ebced;
case 0x6ebcf1:c.instructions+=2;goto B6ebcf1;
case 0x6ebcf3:c.instructions+=1;goto B6ebcf3;
case 0x6ebcf9:goto L6ebcf9;
case 0x6ebcfb:c.instructions+=3;goto B6ebcfb;
case 0x6ebcfc:c.instructions+=2;goto B6ebcfc;
case 0x6ebd00:c.instructions+=1;goto B6ebd00;
case 0x6ebd01:goto L6ebd01;
case 0x6ebd03:c.instructions+=2;goto B6ebd03;
case 0x6ebd05:c.instructions+=1;goto B6ebd05;
case 0x6ebd07:goto L6ebd07;
case 0x6ebd0b:c.instructions+=2;goto B6ebd0b;
case 0x6ebd0d:c.instructions+=1;goto B6ebd0d;
case 0x6ebd10:goto L6ebd10;
case 0x6ebd14:c.instructions+=9;goto B6ebd14;
case 0x6ebd18:c.instructions+=8;goto B6ebd18;
case 0x6ebd1a:c.instructions+=7;goto B6ebd1a;
case 0x6ebd1d:c.instructions+=6;goto B6ebd1d;
case 0x6ebd22:c.instructions+=5;goto B6ebd22;
case 0x6ebd24:c.instructions+=4;goto B6ebd24;
case 0x6ebd28:c.instructions+=3;goto B6ebd28;
case 0x6ebd2b:c.instructions+=2;goto B6ebd2b;
case 0x6ebd2e:c.instructions+=1;goto B6ebd2e;
case 0x6ebd30:goto L6ebd30;
case 0x6ebd34:c.instructions+=7;goto B6ebd34;
case 0x6ebd37:c.instructions+=6;goto B6ebd37;
case 0x6ebd3b:c.instructions+=5;goto B6ebd3b;
case 0x6ebd3d:c.instructions+=4;goto B6ebd3d;
case 0x6ebd3e:c.instructions+=3;goto B6ebd3e;
case 0x6ebd3f:c.instructions+=2;goto B6ebd3f;
case 0x6ebd41:c.instructions+=1;goto B6ebd41;
case 0x6ebd46:goto L6ebd46;
case 0x6ebd4a:c.instructions+=11;goto B6ebd4a;
case 0x6ebd4d:c.instructions+=10;goto B6ebd4d;
case 0x6ebd50:c.instructions+=9;goto B6ebd50;
case 0x6ebd54:c.instructions+=8;goto B6ebd54;
case 0x6ebd57:c.instructions+=7;goto B6ebd57;
case 0x6ebd5a:c.instructions+=6;goto B6ebd5a;
case 0x6ebd5e:c.instructions+=5;goto B6ebd5e;
case 0x6ebd60:c.instructions+=4;goto B6ebd60;
case 0x6ebd62:c.instructions+=3;goto B6ebd62;
case 0x6ebd66:c.instructions+=2;goto B6ebd66;
case 0x6ebd69:c.instructions+=1;goto B6ebd69;
case 0x6ebd6c:goto L6ebd6c;
case 0x6ebd70:c.instructions+=7;goto B6ebd70;
case 0x6ebd74:c.instructions+=6;goto B6ebd74;
case 0x6ebd77:c.instructions+=5;goto B6ebd77;
case 0x6ebd78:c.instructions+=4;goto B6ebd78;
case 0x6ebd7b:c.instructions+=3;goto B6ebd7b;
case 0x6ebd7e:c.instructions+=2;goto B6ebd7e;
case 0x6ebd80:c.instructions+=1;goto B6ebd80;
case 0x6ebd82:goto L6ebd82;
case 0x6ebd86:c.instructions+=1;goto B6ebd86;
case 0x6ebd8c:goto L6ebd8c;
case 0x6ebd8d:c.instructions+=1;goto B6ebd8d;
case 0x6ebd8e:goto L6ebd8e;
case 0x6ebd8f:c.instructions+=3;goto B6ebd8f;
case 0x6ebd90:c.instructions+=2;goto B6ebd90;
case 0x6ebd93:c.instructions+=1;goto B6ebd93;
case 0x6ebda0:goto L6ebda0;
case 0x6ebda3:c.instructions+=17;goto B6ebda3;
case 0x6ebda7:c.instructions+=16;goto B6ebda7;
case 0x6ebdaa:c.instructions+=15;goto B6ebdaa;
case 0x6ebdab:c.instructions+=14;goto B6ebdab;
case 0x6ebdac:c.instructions+=13;goto B6ebdac;
case 0x6ebdb0:c.instructions+=12;goto B6ebdb0;
case 0x6ebdb4:c.instructions+=11;goto B6ebdb4;
case 0x6ebdb8:c.instructions+=10;goto B6ebdb8;
case 0x6ebdbc:c.instructions+=9;goto B6ebdbc;
case 0x6ebdbf:c.instructions+=8;goto B6ebdbf;
case 0x6ebdc2:c.instructions+=7;goto B6ebdc2;
case 0x6ebdc6:c.instructions+=6;goto B6ebdc6;
case 0x6ebdc9:c.instructions+=5;goto B6ebdc9;
case 0x6ebdcd:c.instructions+=4;goto B6ebdcd;
case 0x6ebdd0:c.instructions+=3;goto B6ebdd0;
case 0x6ebdd4:c.instructions+=2;goto B6ebdd4;
case 0x6ebdd6:c.instructions+=1;goto B6ebdd6;
case 0x6ebddc:goto L6ebddc;
case 0x6ebdde:c.instructions+=4;goto B6ebdde;
case 0x6ebddf:c.instructions+=3;goto B6ebddf;
case 0x6ebde0:c.instructions+=2;goto B6ebde0;
case 0x6ebde4:c.instructions+=1;goto B6ebde4;
case 0x6ebde5:goto L6ebde5;
case 0x6ebde9:c.instructions+=2;goto B6ebde9;
case 0x6ebdea:c.instructions+=1;goto B6ebdea;
case 0x6ebdf0:goto L6ebdf0;
case 0x6ebdf4:c.instructions+=5;goto B6ebdf4;
case 0x6ebdf6:c.instructions+=4;goto B6ebdf6;
case 0x6ebdf8:c.instructions+=3;goto B6ebdf8;
case 0x6ebdfb:c.instructions+=2;goto B6ebdfb;
case 0x6ebdfe:c.instructions+=1;goto B6ebdfe;
case 0x6ebe02:goto L6ebe02;
case 0x6ebe06:c.instructions+=9;goto B6ebe06;
case 0x6ebe0a:c.instructions+=8;goto B6ebe0a;
case 0x6ebe0c:c.instructions+=7;goto B6ebe0c;
case 0x6ebe0f:c.instructions+=6;goto B6ebe0f;
case 0x6ebe14:c.instructions+=5;goto B6ebe14;
case 0x6ebe16:c.instructions+=4;goto B6ebe16;
case 0x6ebe1a:c.instructions+=3;goto B6ebe1a;
case 0x6ebe1d:c.instructions+=2;goto B6ebe1d;
case 0x6ebe20:c.instructions+=1;goto B6ebe20;
case 0x6ebe22:goto L6ebe22;
case 0x6ebe26:c.instructions+=7;goto B6ebe26;
case 0x6ebe29:c.instructions+=6;goto B6ebe29;
case 0x6ebe2d:c.instructions+=5;goto B6ebe2d;
case 0x6ebe2f:c.instructions+=4;goto B6ebe2f;
case 0x6ebe30:c.instructions+=3;goto B6ebe30;
case 0x6ebe31:c.instructions+=2;goto B6ebe31;
case 0x6ebe33:c.instructions+=1;goto B6ebe33;
case 0x6ebe38:goto L6ebe38;
case 0x6ebe3b:c.instructions+=11;goto B6ebe3b;
case 0x6ebe3f:c.instructions+=10;goto B6ebe3f;
case 0x6ebe42:c.instructions+=9;goto B6ebe42;
case 0x6ebe45:c.instructions+=8;goto B6ebe45;
case 0x6ebe49:c.instructions+=7;goto B6ebe49;
case 0x6ebe4c:c.instructions+=6;goto B6ebe4c;
case 0x6ebe4e:c.instructions+=5;goto B6ebe4e;
case 0x6ebe52:c.instructions+=4;goto B6ebe52;
case 0x6ebe54:c.instructions+=3;goto B6ebe54;
case 0x6ebe57:c.instructions+=2;goto B6ebe57;
case 0x6ebe5b:c.instructions+=1;goto B6ebe5b;
case 0x6ebe5e:goto L6ebe5e;
case 0x6ebe61:c.instructions+=5;goto B6ebe61;
case 0x6ebe62:c.instructions+=4;goto B6ebe62;
case 0x6ebe65:c.instructions+=3;goto B6ebe65;
case 0x6ebe68:c.instructions+=2;goto B6ebe68;
case 0x6ebe6a:c.instructions+=1;goto B6ebe6a;
case 0x6ebe6c:goto L6ebe6c;
case 0x6ebe70:goto L6ebe70;
case 0x6ebe74:c.instructions+=1;goto B6ebe74;
case 0x6ebe7a:goto L6ebe7a;
case 0x6ebe7b:c.instructions+=1;goto B6ebe7b;
case 0x6ebe7c:goto L6ebe7c;
case 0x6ebe7d:c.instructions+=3;goto B6ebe7d;
case 0x6ebe7e:c.instructions+=2;goto B6ebe7e;
case 0x6ebe81:c.instructions+=1;goto B6ebe81;
case 0x6ebe90:goto L6ebe90;
case 0x6ebe94:c.instructions+=5;goto B6ebe94;
case 0x6ebe97:c.instructions+=4;goto B6ebe97;
case 0x6ebe98:c.instructions+=3;goto B6ebe98;
case 0x6ebe9a:c.instructions+=2;goto B6ebe9a;
case 0x6ebe9d:c.instructions+=1;goto B6ebe9d;
case 0x6ebea3:goto L6ebea3;
case 0x6ebea7:c.instructions+=14;goto B6ebea7;
case 0x6ebea8:c.instructions+=13;goto B6ebea8;
case 0x6ebea9:c.instructions+=12;goto B6ebea9;
case 0x6ebead:c.instructions+=11;goto B6ebead;
case 0x6ebeb0:c.instructions+=10;goto B6ebeb0;
case 0x6ebeb4:c.instructions+=9;goto B6ebeb4;
case 0x6ebeb7:c.instructions+=8;goto B6ebeb7;
case 0x6ebeb9:c.instructions+=7;goto B6ebeb9;
case 0x6ebebc:c.instructions+=6;goto B6ebebc;
case 0x6ebebd:c.instructions+=5;goto B6ebebd;
case 0x6ebec0:c.instructions+=4;goto B6ebec0;
case 0x6ebec3:c.instructions+=3;goto B6ebec3;
case 0x6ebec5:c.instructions+=2;goto B6ebec5;
case 0x6ebec7:c.instructions+=1;goto B6ebec7;
case 0x6ebec9:goto L6ebec9;
case 0x6ebecc:c.instructions+=3;goto B6ebecc;
case 0x6ebece:c.instructions+=2;goto B6ebece;
case 0x6ebed0:c.instructions+=1;goto B6ebed0;
case 0x6ebed6:goto L6ebed6;
case 0x6ebed8:c.instructions+=2;goto B6ebed8;
case 0x6ebedc:c.instructions+=1;goto B6ebedc;
case 0x6ebee0:goto L6ebee0;
case 0x6ebee4:c.instructions+=9;goto B6ebee4;
case 0x6ebee8:c.instructions+=8;goto B6ebee8;
case 0x6ebeea:c.instructions+=7;goto B6ebeea;
case 0x6ebeed:c.instructions+=6;goto B6ebeed;
case 0x6ebef2:c.instructions+=5;goto B6ebef2;
case 0x6ebef4:c.instructions+=4;goto B6ebef4;
case 0x6ebef8:c.instructions+=3;goto B6ebef8;
case 0x6ebefb:c.instructions+=2;goto B6ebefb;
case 0x6ebefe:c.instructions+=1;goto B6ebefe;
case 0x6ebf00:goto L6ebf00;
case 0x6ebf03:c.instructions+=4;goto B6ebf03;
case 0x6ebf07:c.instructions+=3;goto B6ebf07;
case 0x6ebf09:c.instructions+=2;goto B6ebf09;
case 0x6ebf0a:c.instructions+=1;goto B6ebf0a;
case 0x6ebf0f:goto L6ebf0f;
case 0x6ebf13:c.instructions+=7;goto B6ebf13;
case 0x6ebf17:c.instructions+=6;goto B6ebf17;
case 0x6ebf18:c.instructions+=5;goto B6ebf18;
case 0x6ebf1b:c.instructions+=4;goto B6ebf1b;
case 0x6ebf1e:c.instructions+=3;goto B6ebf1e;
case 0x6ebf20:c.instructions+=2;goto B6ebf20;
case 0x6ebf24:c.instructions+=1;goto B6ebf24;
case 0x6ebf26:goto L6ebf26;
case 0x6ebf2a:c.instructions+=7;goto B6ebf2a;
case 0x6ebf2b:c.instructions+=6;goto B6ebf2b;
case 0x6ebf2c:c.instructions+=5;goto B6ebf2c;
case 0x6ebf2d:c.instructions+=4;goto B6ebf2d;
case 0x6ebf30:c.instructions+=3;goto B6ebf30;
case 0x6ebf31:c.instructions+=2;goto B6ebf31;
case 0x6ebf34:c.instructions+=1;goto B6ebf34;
case 0x6ebf37:goto L6ebf37;
case 0x6ebf3b:c.instructions+=9;goto B6ebf3b;
case 0x6ebf3f:c.instructions+=8;goto B6ebf3f;
case 0x6ebf42:c.instructions+=7;goto B6ebf42;
case 0x6ebf45:c.instructions+=6;goto B6ebf45;
case 0x6ebf48:c.instructions+=5;goto B6ebf48;
case 0x6ebf4a:c.instructions+=4;goto B6ebf4a;
case 0x6ebf4c:c.instructions+=3;goto B6ebf4c;
case 0x6ebf4e:c.instructions+=2;goto B6ebf4e;
case 0x6ebf52:c.instructions+=1;goto B6ebf52;
case 0x6ebf58:goto L6ebf58;
case 0x6ebf5a:c.instructions+=2;goto B6ebf5a;
case 0x6ebf5e:c.instructions+=1;goto B6ebf5e;
case 0x6ebf60:goto L6ebf60;
case 0x6ebf64:c.instructions+=9;goto B6ebf64;
case 0x6ebf68:c.instructions+=8;goto B6ebf68;
case 0x6ebf6a:c.instructions+=7;goto B6ebf6a;
case 0x6ebf6d:c.instructions+=6;goto B6ebf6d;
case 0x6ebf72:c.instructions+=5;goto B6ebf72;
case 0x6ebf74:c.instructions+=4;goto B6ebf74;
case 0x6ebf78:c.instructions+=3;goto B6ebf78;
case 0x6ebf7b:c.instructions+=2;goto B6ebf7b;
case 0x6ebf7e:c.instructions+=1;goto B6ebf7e;
case 0x6ebf80:goto L6ebf80;
case 0x6ebf83:c.instructions+=6;goto B6ebf83;
case 0x6ebf87:c.instructions+=5;goto B6ebf87;
case 0x6ebf8b:c.instructions+=4;goto B6ebf8b;
case 0x6ebf8c:c.instructions+=3;goto B6ebf8c;
case 0x6ebf90:c.instructions+=2;goto B6ebf90;
case 0x6ebf91:c.instructions+=1;goto B6ebf91;
case 0x6ebf96:goto L6ebf96;
case 0x6ebf9a:c.instructions+=19;goto B6ebf9a;
case 0x6ebf9d:c.instructions+=18;goto B6ebf9d;
case 0x6ebfa0:c.instructions+=17;goto B6ebfa0;
case 0x6ebfa3:c.instructions+=16;goto B6ebfa3;
case 0x6ebfa6:c.instructions+=15;goto B6ebfa6;
case 0x6ebfa9:c.instructions+=14;goto B6ebfa9;
case 0x6ebfad:c.instructions+=13;goto B6ebfad;
case 0x6ebfb0:c.instructions+=12;goto B6ebfb0;
case 0x6ebfb4:c.instructions+=11;goto B6ebfb4;
case 0x6ebfb8:c.instructions+=10;goto B6ebfb8;
case 0x6ebfbb:c.instructions+=9;goto B6ebfbb;
case 0x6ebfbf:c.instructions+=8;goto B6ebfbf;
case 0x6ebfc2:c.instructions+=7;goto B6ebfc2;
case 0x6ebfc6:c.instructions+=6;goto B6ebfc6;
case 0x6ebfca:c.instructions+=5;goto B6ebfca;
case 0x6ebfcd:c.instructions+=4;goto B6ebfcd;
case 0x6ebfd1:c.instructions+=3;goto B6ebfd1;
case 0x6ebfd4:c.instructions+=2;goto B6ebfd4;
case 0x6ebfd8:c.instructions+=1;goto B6ebfd8;
case 0x6ebfdc:goto L6ebfdc;
case 0x6ebfe0:c.instructions+=10;goto B6ebfe0;
case 0x6ebfe4:c.instructions+=9;goto B6ebfe4;
case 0x6ebfe7:c.instructions+=8;goto B6ebfe7;
case 0x6ebfea:c.instructions+=7;goto B6ebfea;
case 0x6ebfee:c.instructions+=6;goto B6ebfee;
case 0x6ebff2:c.instructions+=5;goto B6ebff2;
case 0x6ebff3:c.instructions+=4;goto B6ebff3;
case 0x6ebff6:c.instructions+=3;goto B6ebff6;
case 0x6ebff8:c.instructions+=2;goto B6ebff8;
case 0x6ebffc:c.instructions+=1;goto B6ebffc;
default:missing_instruction(c.pc);}
B6eb000:L6eb000:{c.instructions+=3;NFSU2_TR(0x6eb000);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xeull))));
}
B6eb003:{NFSU2_TR(0x6eb003);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eb005:{NFSU2_TR(0x6eb005);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6eafb0u,6ea);}
}
B6eb007:L6eb007:{c.instructions+=3;NFSU2_TR(0x6eb007);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6eb009:{NFSU2_TR(0x6eb009);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6eb00d:{NFSU2_TR(0x6eb00d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eb0fb;}}
}
B6eb013:L6eb013:{c.instructions+=9;NFSU2_TR(0x6eb013);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb017:{NFSU2_TR(0x6eb017);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6eb01b:{NFSU2_TR(0x6eb01b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb01f:{NFSU2_TR(0x6eb01f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eb022:{NFSU2_TR(0x6eb022);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6eb025:{NFSU2_TR(0x6eb025);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B6eb027:{NFSU2_TR(0x6eb027);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6eb029:{NFSU2_TR(0x6eb029);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb02d:{NFSU2_TR(0x6eb02d);
__builtin_memmove((R+4),(R+4),4);
}
B6eb030:L6eb030:{c.instructions+=3;NFSU2_TR(0x6eb030);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6eb032:{NFSU2_TR(0x6eb032);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eb034:{NFSU2_TR(0x6eb034);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eb0f1;}}
}
B6eb03a:L6eb03a:{c.instructions+=3;NFSU2_TR(0x6eb03a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6eb03c:{NFSU2_TR(0x6eb03c);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eb03e:{NFSU2_TR(0x6eb03e);
__builtin_memmove((R+28),(R+28),4);
}
B6eb040:L6eb040:{c.instructions+=10;NFSU2_TR(0x6eb040);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb044:{NFSU2_TR(0x6eb044);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eb048:{NFSU2_TR(0x6eb048);
__builtin_memmove((R+4),(R+0),4);
}
B6eb04a:{NFSU2_TR(0x6eb04a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6eb04d:{NFSU2_TR(0x6eb04d);
w4(R+8,u32(0x1ull));
}
B6eb052:{NFSU2_TR(0x6eb052);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6eb054:{NFSU2_TR(0x6eb054);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb05b:{NFSU2_TR(0x6eb05b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb05e:{NFSU2_TR(0x6eb05e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6eb061:{NFSU2_TR(0x6eb061);
if(r1(R+518)){{goto L6eb0d9;}}
}
B6eb063:L6eb063:{c.instructions+=6;NFSU2_TR(0x6eb063);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb067:{NFSU2_TR(0x6eb067);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb06a:{NFSU2_TR(0x6eb06a);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb06e:{NFSU2_TR(0x6eb06e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb06f:{NFSU2_TR(0x6eb06f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+20)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+20)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb071:{NFSU2_TR(0x6eb071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb076ull));
TAIL_STATIC(0x6ea030u,6ea);
}
B6eb076:L6eb076:{c.instructions+=6;NFSU2_TR(0x6eb076);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb07a:{NFSU2_TR(0x6eb07a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb07b:{NFSU2_TR(0x6eb07b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb07f:{NFSU2_TR(0x6eb07f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb080:{NFSU2_TR(0x6eb080);
__builtin_memmove((R+4),(R+28),4);
}
B6eb082:{NFSU2_TR(0x6eb082);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb087ull));
TAIL_STATIC(0x6ea170u,6ea);
}
B6eb087:L6eb087:{c.instructions+=24;NFSU2_TR(0x6eb087);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb08b:{NFSU2_TR(0x6eb08b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb08f:{NFSU2_TR(0x6eb08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb092:{NFSU2_TR(0x6eb092);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb095:{NFSU2_TR(0x6eb095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eb098:{NFSU2_TR(0x6eb098);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb09a:{NFSU2_TR(0x6eb09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb09e:{NFSU2_TR(0x6eb09e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb0a1:{NFSU2_TR(0x6eb0a1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb0a5:{NFSU2_TR(0x6eb0a5);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb0a9:{NFSU2_TR(0x6eb0a9);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6eb0ad:{NFSU2_TR(0x6eb0ad);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb0af:{NFSU2_TR(0x6eb0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb0b3:{NFSU2_TR(0x6eb0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb0b6:{NFSU2_TR(0x6eb0b6);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb0ba:{NFSU2_TR(0x6eb0ba);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb0be:{NFSU2_TR(0x6eb0be);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6eb0c2:{NFSU2_TR(0x6eb0c2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb0c4:{NFSU2_TR(0x6eb0c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb0c8:{NFSU2_TR(0x6eb0c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb0cb:{NFSU2_TR(0x6eb0cb);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb0cf:{NFSU2_TR(0x6eb0cf);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb0d3:{NFSU2_TR(0x6eb0d3);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6eb0d7:{NFSU2_TR(0x6eb0d7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb0d9:L6eb0d9:{c.instructions+=8;NFSU2_TR(0x6eb0d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb0dd:{NFSU2_TR(0x6eb0dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6eb0e1:{NFSU2_TR(0x6eb0e1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6eb0e2:{NFSU2_TR(0x6eb0e2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6eb0e3:{NFSU2_TR(0x6eb0e3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xeull))));
}
B6eb0e6:{NFSU2_TR(0x6eb0e6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6eb0e9:{NFSU2_TR(0x6eb0e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eb0eb:{NFSU2_TR(0x6eb0eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb040u);}goto L6eb040;}}
}
B6eb0f1:L6eb0f1:{c.instructions+=2;NFSU2_TR(0x6eb0f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eb0f5:{NFSU2_TR(0x6eb0f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb030u);}goto L6eb030;}}
}
B6eb0fb:L6eb0fb:{c.instructions+=9;NFSU2_TR(0x6eb0fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb0ff:{NFSU2_TR(0x6eb0ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb103:{NFSU2_TR(0x6eb103);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eb107:{NFSU2_TR(0x6eb107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb10a:{NFSU2_TR(0x6eb10a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb10d:{NFSU2_TR(0x6eb10d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6eb10f:{NFSU2_TR(0x6eb10f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eb111:{NFSU2_TR(0x6eb111);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb114:{NFSU2_TR(0x6eb114);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eb139;}}
}
B6eb116:L6eb116:{c.instructions+=6;NFSU2_TR(0x6eb116);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb11a:{NFSU2_TR(0x6eb11a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb121:{NFSU2_TR(0x6eb121);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6eb123:{NFSU2_TR(0x6eb123);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eb125:{NFSU2_TR(0x6eb125);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eb128:{NFSU2_TR(0x6eb128);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eb584;}}
}
B6eb12e:L6eb12e:{c.instructions+=3;NFSU2_TR(0x6eb12e);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb135:{NFSU2_TR(0x6eb135);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6eb137:{NFSU2_TR(0x6eb137);
{goto L6eb1a7;}
}
B6eb139:L6eb139:{c.instructions+=2;NFSU2_TR(0x6eb139);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eb13b:{NFSU2_TR(0x6eb13b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6eb16d;}}
}
B6eb13d:L6eb13d:{c.instructions+=5;NFSU2_TR(0x6eb13d);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb144:{NFSU2_TR(0x6eb144);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6eb14a:{NFSU2_TR(0x6eb14a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eb14c:{NFSU2_TR(0x6eb14c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eb14f:{NFSU2_TR(0x6eb14f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eb586;}}
}
B6eb155:L6eb155:{c.instructions+=6;NFSU2_TR(0x6eb155);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B6eb158:{NFSU2_TR(0x6eb158);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb15c:{NFSU2_TR(0x6eb15c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb160:{NFSU2_TR(0x6eb160);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6eb167:{NFSU2_TR(0x6eb167);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb16b:{NFSU2_TR(0x6eb16b);
{goto L6eb1ad;}
}
B6eb16d:L6eb16d:{c.instructions+=8;NFSU2_TR(0x6eb16d);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6eb172:{NFSU2_TR(0x6eb172);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb176:{NFSU2_TR(0x6eb176);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb17a:{NFSU2_TR(0x6eb17a);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb181:{NFSU2_TR(0x6eb181);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6eb183:{NFSU2_TR(0x6eb183);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eb185:{NFSU2_TR(0x6eb185);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eb188:{NFSU2_TR(0x6eb188);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6eb584;}}
}
B6eb18e:L6eb18e:{c.instructions+=7;NFSU2_TR(0x6eb18e);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6eb192:{NFSU2_TR(0x6eb192);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb199:{NFSU2_TR(0x6eb199);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6eb19b:{NFSU2_TR(0x6eb19b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb19f:{NFSU2_TR(0x6eb19f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb1a3:{NFSU2_TR(0x6eb1a3);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6eb1a5:{NFSU2_TR(0x6eb1a5);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6eb1a7:L6eb1a7:{c.instructions+=2;NFSU2_TR(0x6eb1a7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb1ab:{NFSU2_TR(0x6eb1ab);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6eb1ad:L6eb1ad:{c.instructions+=4;NFSU2_TR(0x6eb1ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6eb1b1:{NFSU2_TR(0x6eb1b1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6eb1b2:{NFSU2_TR(0x6eb1b2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eb1b4:{NFSU2_TR(0x6eb1b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eb586;}}
}
B6eb1ba:L6eb1ba:{c.instructions+=10;NFSU2_TR(0x6eb1ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb1be:{NFSU2_TR(0x6eb1be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb1c2:{NFSU2_TR(0x6eb1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb1c5:{NFSU2_TR(0x6eb1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6eb1c8:{NFSU2_TR(0x6eb1c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6eb1ca:{NFSU2_TR(0x6eb1ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb1ce:{NFSU2_TR(0x6eb1ce);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6eb1d1:{NFSU2_TR(0x6eb1d1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6eb1d3:{NFSU2_TR(0x6eb1d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eb1d5:{NFSU2_TR(0x6eb1d5);
if(r1(R+518)){{goto L6eb388;}}
}
B6eb1db:L6eb1db:{c.instructions+=4;NFSU2_TR(0x6eb1db);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6eb1de:{NFSU2_TR(0x6eb1de);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eb1e0:{NFSU2_TR(0x6eb1e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb1e4:{NFSU2_TR(0x6eb1e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6eb71a;}}
}
B6eb1ea:L6eb1ea:{c.instructions+=2;NFSU2_TR(0x6eb1ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb1ee:{NFSU2_TR(0x6eb1ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb1f2:L6eb1f2:{c.instructions+=12;NFSU2_TR(0x6eb1f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb1f6:{NFSU2_TR(0x6eb1f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb1fa:{NFSU2_TR(0x6eb1fa);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B6eb1fe:{NFSU2_TR(0x6eb1fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb205:{NFSU2_TR(0x6eb205);
__builtin_memmove((R+4),(R+28),4);
}
B6eb207:{NFSU2_TR(0x6eb207);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6eb20a:{NFSU2_TR(0x6eb20a);
w4(R+0,u32(0x1ull));
}
B6eb20f:{NFSU2_TR(0x6eb20f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6eb211:{NFSU2_TR(0x6eb211);
__builtin_memmove((R+4),(R+28),4);
}
B6eb213:{NFSU2_TR(0x6eb213);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6eb216:{NFSU2_TR(0x6eb216);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6eb219:{NFSU2_TR(0x6eb219);
if(r1(R+518)){{goto L6eb34a;}}
}
B6eb21f:L6eb21f:{c.instructions+=8;NFSU2_TR(0x6eb21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb222:{NFSU2_TR(0x6eb222);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb226:{NFSU2_TR(0x6eb226);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+20,u32(r2(U+12)));
}
B6eb22b:{NFSU2_TR(0x6eb22b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb22f:{NFSU2_TR(0x6eb22f);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb233:{NFSU2_TR(0x6eb233);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb234:{NFSU2_TR(0x6eb234);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb235:{NFSU2_TR(0x6eb235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb23aull));
TAIL_STATIC(0x6ea0e0u,6ea);
}
B6eb23a:L6eb23a:{c.instructions+=7;NFSU2_TR(0x6eb23a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb23e:{NFSU2_TR(0x6eb23e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb241:{NFSU2_TR(0x6eb241);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb242:{NFSU2_TR(0x6eb242);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb244:{NFSU2_TR(0x6eb244);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb248:{NFSU2_TR(0x6eb248);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb24c:{NFSU2_TR(0x6eb24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb251ull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6eb251:L6eb251:{c.instructions+=3;NFSU2_TR(0x6eb251);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eb254:{NFSU2_TR(0x6eb254);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B6eb257:{NFSU2_TR(0x6eb257);
if(r1(R+518)){{goto L6eb2e6;}}
}
B6eb25d:L6eb25d:{c.instructions+=2;NFSU2_TR(0x6eb25d);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B6eb25e:{NFSU2_TR(0x6eb25e);
if(r1(R+518)){{goto L6eb2c0;}}
}
B6eb260:L6eb260:{c.instructions+=29;NFSU2_TR(0x6eb260);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb267:{NFSU2_TR(0x6eb267);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb26b:{NFSU2_TR(0x6eb26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6eb26e:{NFSU2_TR(0x6eb26e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6eb271:{NFSU2_TR(0x6eb271);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb275:{NFSU2_TR(0x6eb275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb278:{NFSU2_TR(0x6eb278);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb27b:{NFSU2_TR(0x6eb27b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb27d:{NFSU2_TR(0x6eb27d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb281:{NFSU2_TR(0x6eb281);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb284:{NFSU2_TR(0x6eb284);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb286:{NFSU2_TR(0x6eb286);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb288:{NFSU2_TR(0x6eb288);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb28c:{NFSU2_TR(0x6eb28c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb28e:{NFSU2_TR(0x6eb28e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb292:{NFSU2_TR(0x6eb292);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb295:{NFSU2_TR(0x6eb295);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb297:{NFSU2_TR(0x6eb297);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb29a:{NFSU2_TR(0x6eb29a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb29e:{NFSU2_TR(0x6eb29e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb2a1:{NFSU2_TR(0x6eb2a1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb2a5:{NFSU2_TR(0x6eb2a5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb2a8:{NFSU2_TR(0x6eb2a8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb2aa:{NFSU2_TR(0x6eb2aa);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb2ad:{NFSU2_TR(0x6eb2ad);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb2b1:{NFSU2_TR(0x6eb2b1);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb2b4:{NFSU2_TR(0x6eb2b4);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb2b8:{NFSU2_TR(0x6eb2b8);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb2bb:{NFSU2_TR(0x6eb2bb);
{goto L6eb341;}
}
B6eb2c0:L6eb2c0:{c.instructions+=10;NFSU2_TR(0x6eb2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb2c3:{NFSU2_TR(0x6eb2c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb2ca:{NFSU2_TR(0x6eb2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb2cd:{NFSU2_TR(0x6eb2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eb2d0:{NFSU2_TR(0x6eb2d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6eb2d3:{NFSU2_TR(0x6eb2d3);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb2d7:{NFSU2_TR(0x6eb2d7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb2d9:{NFSU2_TR(0x6eb2d9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6eb2db:{NFSU2_TR(0x6eb2db);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb2df:{NFSU2_TR(0x6eb2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb2e4ull));
TAIL_STATIC(0x6ea470u,6ea);
}
B6eb2e4:L6eb2e4:{c.instructions+=1;NFSU2_TR(0x6eb2e4);
{goto L6eb346;}
}
B6eb2e6:L6eb2e6:{c.instructions+=28;NFSU2_TR(0x6eb2e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb2ed:{NFSU2_TR(0x6eb2ed);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb2f1:{NFSU2_TR(0x6eb2f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eb2f4:{NFSU2_TR(0x6eb2f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb2f7:{NFSU2_TR(0x6eb2f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb2fb:{NFSU2_TR(0x6eb2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb2fe:{NFSU2_TR(0x6eb2fe);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb302:{NFSU2_TR(0x6eb302);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb304:{NFSU2_TR(0x6eb304);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb308:{NFSU2_TR(0x6eb308);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb30a:{NFSU2_TR(0x6eb30a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb30c:{NFSU2_TR(0x6eb30c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb30e:{NFSU2_TR(0x6eb30e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb312:{NFSU2_TR(0x6eb312);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb315:{NFSU2_TR(0x6eb315);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb319:{NFSU2_TR(0x6eb319);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb31c:{NFSU2_TR(0x6eb31c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb31e:{NFSU2_TR(0x6eb31e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb321:{NFSU2_TR(0x6eb321);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb325:{NFSU2_TR(0x6eb325);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb328:{NFSU2_TR(0x6eb328);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb32c:{NFSU2_TR(0x6eb32c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb32f:{NFSU2_TR(0x6eb32f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb331:{NFSU2_TR(0x6eb331);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb334:{NFSU2_TR(0x6eb334);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb338:{NFSU2_TR(0x6eb338);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb33b:{NFSU2_TR(0x6eb33b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb33f:{NFSU2_TR(0x6eb33f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb341:L6eb341:{c.instructions+=2;NFSU2_TR(0x6eb341);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb343:{NFSU2_TR(0x6eb343);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb346:L6eb346:{c.instructions+=1;NFSU2_TR(0x6eb346);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb34a:L6eb34a:{c.instructions+=14;NFSU2_TR(0x6eb34a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb34e:{NFSU2_TR(0x6eb34e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb352:{NFSU2_TR(0x6eb352);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb356:{NFSU2_TR(0x6eb356);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6eb35a:{NFSU2_TR(0x6eb35a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6eb35d:{NFSU2_TR(0x6eb35d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb361:{NFSU2_TR(0x6eb361);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6eb365:{NFSU2_TR(0x6eb365);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6eb366:{NFSU2_TR(0x6eb366);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xeull))));
}
B6eb369:{NFSU2_TR(0x6eb369);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6eb36c:{NFSU2_TR(0x6eb36c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eb36e:{NFSU2_TR(0x6eb36e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb372:{NFSU2_TR(0x6eb372);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb376:{NFSU2_TR(0x6eb376);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb1f2u);}goto L6eb1f2;}}
}
B6eb37c:L6eb37c:{c.instructions+=7;NFSU2_TR(0x6eb37c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eb37d:{NFSU2_TR(0x6eb37d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eb37e:{NFSU2_TR(0x6eb37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eb37f:{NFSU2_TR(0x6eb37f);
w1(R+0,u8(0x1ull));
}
B6eb381:{NFSU2_TR(0x6eb381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eb382:{NFSU2_TR(0x6eb382);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x70ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb385:{NFSU2_TR(0x6eb385);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb388:L6eb388:{c.instructions+=9;NFSU2_TR(0x6eb388);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6eb38c:{NFSU2_TR(0x6eb38c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb390:{NFSU2_TR(0x6eb390);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6eb393:{NFSU2_TR(0x6eb393);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6eb396:{NFSU2_TR(0x6eb396);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6eb398:{NFSU2_TR(0x6eb398);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6eb39a:{NFSU2_TR(0x6eb39a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb39e:{NFSU2_TR(0x6eb39e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb3a2:{NFSU2_TR(0x6eb3a2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eb71a;}}
}
B6eb3a8:L6eb3a8:{c.instructions+=2;NFSU2_TR(0x6eb3a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb3ac:{NFSU2_TR(0x6eb3ac);
__builtin_memmove((R+16),(R+16),4);
}
B6eb3b0:L6eb3b0:{c.instructions+=12;NFSU2_TR(0x6eb3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb3b4:{NFSU2_TR(0x6eb3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb3b8:{NFSU2_TR(0x6eb3b8);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B6eb3bc:{NFSU2_TR(0x6eb3bc);
__builtin_memmove((R+4),(R+28),4);
}
B6eb3be:{NFSU2_TR(0x6eb3be);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6eb3c1:{NFSU2_TR(0x6eb3c1);
w4(R+8,u32(0x1ull));
}
B6eb3c6:{NFSU2_TR(0x6eb3c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6eb3c8:{NFSU2_TR(0x6eb3c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb3cf:{NFSU2_TR(0x6eb3cf);
__builtin_memmove((R+0),(R+28),4);
}
B6eb3d1:{NFSU2_TR(0x6eb3d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb3d4:{NFSU2_TR(0x6eb3d4);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+18,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6eb3d7:{NFSU2_TR(0x6eb3d7);
if(r1(R+518)){{goto L6eb548;}}
}
B6eb3dd:L6eb3dd:{c.instructions+=7;NFSU2_TR(0x6eb3dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb3e0:{NFSU2_TR(0x6eb3e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb3e4:{NFSU2_TR(0x6eb3e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb3e8:{NFSU2_TR(0x6eb3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6eb3eb:{NFSU2_TR(0x6eb3eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb3ec:{NFSU2_TR(0x6eb3ec);
__builtin_memmove((R+4),(R+20),4);
}
B6eb3ee:{NFSU2_TR(0x6eb3ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb3f3ull));
TAIL_STATIC(0x6ea030u,6ea);
}
B6eb3f3:L6eb3f3:{c.instructions+=6;NFSU2_TR(0x6eb3f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb3f7:{NFSU2_TR(0x6eb3f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb3fb:{NFSU2_TR(0x6eb3fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb3fc:{NFSU2_TR(0x6eb3fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eb400:{NFSU2_TR(0x6eb400);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb401:{NFSU2_TR(0x6eb401);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb406ull));
TAIL_STATIC(0x6ea170u,6ea);
}
B6eb406:L6eb406:{c.instructions+=19;NFSU2_TR(0x6eb406);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb40a:{NFSU2_TR(0x6eb40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb40d:{NFSU2_TR(0x6eb40d);
{u32 ea_=u32(r4(R+12)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb410:{NFSU2_TR(0x6eb410);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb414:{NFSU2_TR(0x6eb414);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eb417:{NFSU2_TR(0x6eb417);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb418:{NFSU2_TR(0x6eb418);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb41c:{NFSU2_TR(0x6eb41c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb420:{NFSU2_TR(0x6eb420);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb424:{NFSU2_TR(0x6eb424);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb428:{NFSU2_TR(0x6eb428);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb42b:{NFSU2_TR(0x6eb42b);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb42f:{NFSU2_TR(0x6eb42f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb433:{NFSU2_TR(0x6eb433);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb436:{NFSU2_TR(0x6eb436);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb43a:{NFSU2_TR(0x6eb43a);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb43e:{NFSU2_TR(0x6eb43e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb441:{NFSU2_TR(0x6eb441);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb445:{NFSU2_TR(0x6eb445);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb44aull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6eb44a:L6eb44a:{c.instructions+=4;NFSU2_TR(0x6eb44a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6eb44e:{NFSU2_TR(0x6eb44e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6eb451:{NFSU2_TR(0x6eb451);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6eb454:{NFSU2_TR(0x6eb454);
if(r1(R+518)){{goto L6eb4e3;}}
}
B6eb45a:L6eb45a:{c.instructions+=2;NFSU2_TR(0x6eb45a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6eb45b:{NFSU2_TR(0x6eb45b);
if(r1(R+518)){{goto L6eb4bd;}}
}
B6eb45d:L6eb45d:{c.instructions+=29;NFSU2_TR(0x6eb45d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb464:{NFSU2_TR(0x6eb464);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb468:{NFSU2_TR(0x6eb468);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eb46b:{NFSU2_TR(0x6eb46b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb46e:{NFSU2_TR(0x6eb46e);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb472:{NFSU2_TR(0x6eb472);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb475:{NFSU2_TR(0x6eb475);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb478:{NFSU2_TR(0x6eb478);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb47a:{NFSU2_TR(0x6eb47a);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb47e:{NFSU2_TR(0x6eb47e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb481:{NFSU2_TR(0x6eb481);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb483:{NFSU2_TR(0x6eb483);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb485:{NFSU2_TR(0x6eb485);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb489:{NFSU2_TR(0x6eb489);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb48b:{NFSU2_TR(0x6eb48b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb48f:{NFSU2_TR(0x6eb48f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb492:{NFSU2_TR(0x6eb492);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb494:{NFSU2_TR(0x6eb494);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb497:{NFSU2_TR(0x6eb497);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb49b:{NFSU2_TR(0x6eb49b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb49e:{NFSU2_TR(0x6eb49e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb4a2:{NFSU2_TR(0x6eb4a2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb4a5:{NFSU2_TR(0x6eb4a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb4a7:{NFSU2_TR(0x6eb4a7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb4aa:{NFSU2_TR(0x6eb4aa);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb4ae:{NFSU2_TR(0x6eb4ae);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb4b1:{NFSU2_TR(0x6eb4b1);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb4b5:{NFSU2_TR(0x6eb4b5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb4b8:{NFSU2_TR(0x6eb4b8);
{goto L6eb53f;}
}
B6eb4bd:L6eb4bd:{c.instructions+=10;NFSU2_TR(0x6eb4bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb4c4:{NFSU2_TR(0x6eb4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6eb4c7:{NFSU2_TR(0x6eb4c7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6eb4ca:{NFSU2_TR(0x6eb4ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb4ce:{NFSU2_TR(0x6eb4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb4d1:{NFSU2_TR(0x6eb4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb4d4:{NFSU2_TR(0x6eb4d4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb4d6:{NFSU2_TR(0x6eb4d6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B6eb4d8:{NFSU2_TR(0x6eb4d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eb4dc:{NFSU2_TR(0x6eb4dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb4e1ull));
TAIL_STATIC(0x6ea470u,6ea);
}
B6eb4e1:L6eb4e1:{c.instructions+=1;NFSU2_TR(0x6eb4e1);
{goto L6eb544;}
}
B6eb4e3:L6eb4e3:{c.instructions+=28;NFSU2_TR(0x6eb4e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb4e6:{NFSU2_TR(0x6eb4e6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb4ea:{NFSU2_TR(0x6eb4ea);
{u32 ea_=u32(r4(R+12)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb4ee:{NFSU2_TR(0x6eb4ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb4f5:{NFSU2_TR(0x6eb4f5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb4f9:{NFSU2_TR(0x6eb4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eb4fc:{NFSU2_TR(0x6eb4fc);
{u32 ea_=u32(r4(R+12)+r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb4ff:{NFSU2_TR(0x6eb4ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6eb502:{NFSU2_TR(0x6eb502);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6eb504:{NFSU2_TR(0x6eb504);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb508:{NFSU2_TR(0x6eb508);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb50a:{NFSU2_TR(0x6eb50a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb50c:{NFSU2_TR(0x6eb50c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb510:{NFSU2_TR(0x6eb510);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb513:{NFSU2_TR(0x6eb513);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb517:{NFSU2_TR(0x6eb517);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb51a:{NFSU2_TR(0x6eb51a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb51c:{NFSU2_TR(0x6eb51c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb51f:{NFSU2_TR(0x6eb51f);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb523:{NFSU2_TR(0x6eb523);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb526:{NFSU2_TR(0x6eb526);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb52a:{NFSU2_TR(0x6eb52a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb52d:{NFSU2_TR(0x6eb52d);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb52f:{NFSU2_TR(0x6eb52f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb532:{NFSU2_TR(0x6eb532);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb536:{NFSU2_TR(0x6eb536);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb539:{NFSU2_TR(0x6eb539);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb53d:{NFSU2_TR(0x6eb53d);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb53f:L6eb53f:{c.instructions+=2;NFSU2_TR(0x6eb53f);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb541:{NFSU2_TR(0x6eb541);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb544:L6eb544:{c.instructions+=1;NFSU2_TR(0x6eb544);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb548:L6eb548:{c.instructions+=14;NFSU2_TR(0x6eb548);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb54c:{NFSU2_TR(0x6eb54c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb550:{NFSU2_TR(0x6eb550);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eb554:{NFSU2_TR(0x6eb554);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6eb558:{NFSU2_TR(0x6eb558);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6eb559:{NFSU2_TR(0x6eb559);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb55d:{NFSU2_TR(0x6eb55d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb561:{NFSU2_TR(0x6eb561);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6eb562:{NFSU2_TR(0x6eb562);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xeull))));
}
B6eb565:{NFSU2_TR(0x6eb565);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6eb568:{NFSU2_TR(0x6eb568);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eb56a:{NFSU2_TR(0x6eb56a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb56e:{NFSU2_TR(0x6eb56e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb572:{NFSU2_TR(0x6eb572);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb3b0u);}goto L6eb3b0;}}
}
B6eb578:L6eb578:{c.instructions+=7;NFSU2_TR(0x6eb578);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eb579:{NFSU2_TR(0x6eb579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eb57a:{NFSU2_TR(0x6eb57a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eb57b:{NFSU2_TR(0x6eb57b);
w1(R+0,u8(0x1ull));
}
B6eb57d:{NFSU2_TR(0x6eb57d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eb57e:{NFSU2_TR(0x6eb57e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x70ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb581:{NFSU2_TR(0x6eb581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb584:L6eb584:{c.instructions+=1;NFSU2_TR(0x6eb584);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6eb586:L6eb586:{c.instructions+=3;NFSU2_TR(0x6eb586);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6eb589:{NFSU2_TR(0x6eb589);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eb58b:{NFSU2_TR(0x6eb58b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6eb71a;}}
}
B6eb591:L6eb591:{c.instructions+=3;NFSU2_TR(0x6eb591);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6eb593:{NFSU2_TR(0x6eb593);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6eb595:{NFSU2_TR(0x6eb595);
{goto L6eb5a0;}
}
B6eb5a0:L6eb5a0:{c.instructions+=11;NFSU2_TR(0x6eb5a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb5a4:{NFSU2_TR(0x6eb5a4);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eb5a8:{NFSU2_TR(0x6eb5a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eb5af:{NFSU2_TR(0x6eb5af);
__builtin_memmove((R+4),(R+0),4);
}
B6eb5b1:{NFSU2_TR(0x6eb5b1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6eb5b4:{NFSU2_TR(0x6eb5b4);
w4(R+8,u32(0x1ull));
}
B6eb5b9:{NFSU2_TR(0x6eb5b9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6eb5bb:{NFSU2_TR(0x6eb5bb);
__builtin_memmove((R+4),(R+0),4);
}
B6eb5bd:{NFSU2_TR(0x6eb5bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6eb5c0:{NFSU2_TR(0x6eb5c0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6eb5c3:{NFSU2_TR(0x6eb5c3);
if(r1(R+518)){{goto L6eb703;}}
}
B6eb5c9:L6eb5c9:{c.instructions+=7;NFSU2_TR(0x6eb5c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb5cd:{NFSU2_TR(0x6eb5cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb5d0:{NFSU2_TR(0x6eb5d0);
u8 U[14];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B6eb5d5:{NFSU2_TR(0x6eb5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eb5d8:{NFSU2_TR(0x6eb5d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb5db:{NFSU2_TR(0x6eb5db);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6eb5de:{NFSU2_TR(0x6eb5de);
if(r1(R+518)){{goto L6eb6ae;}}
}
B6eb5e4:L6eb5e4:{c.instructions+=4;NFSU2_TR(0x6eb5e4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6eb5e5:{NFSU2_TR(0x6eb5e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb5ec:{NFSU2_TR(0x6eb5ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6eb5f0:{NFSU2_TR(0x6eb5f0);
if(r1(R+518)){{goto L6eb63f;}}
}
B6eb5f2:L6eb5f2:{c.instructions+=27;NFSU2_TR(0x6eb5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb5f5:{NFSU2_TR(0x6eb5f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb5f8:{NFSU2_TR(0x6eb5f8);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb5fc:{NFSU2_TR(0x6eb5fc);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb5ff:{NFSU2_TR(0x6eb5ff);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6eb601:{NFSU2_TR(0x6eb601);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb604:{NFSU2_TR(0x6eb604);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6eb606:{NFSU2_TR(0x6eb606);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb609:{NFSU2_TR(0x6eb609);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb60b:{NFSU2_TR(0x6eb60b);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb60d:{NFSU2_TR(0x6eb60d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb610:{NFSU2_TR(0x6eb610);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb612:{NFSU2_TR(0x6eb612);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb615:{NFSU2_TR(0x6eb615);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb618:{NFSU2_TR(0x6eb618);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb61a:{NFSU2_TR(0x6eb61a);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb61d:{NFSU2_TR(0x6eb61d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb620:{NFSU2_TR(0x6eb620);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb623:{NFSU2_TR(0x6eb623);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb626:{NFSU2_TR(0x6eb626);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb629:{NFSU2_TR(0x6eb629);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb62b:{NFSU2_TR(0x6eb62b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb62e:{NFSU2_TR(0x6eb62e);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb631:{NFSU2_TR(0x6eb631);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb634:{NFSU2_TR(0x6eb634);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb637:{NFSU2_TR(0x6eb637);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb63a:{NFSU2_TR(0x6eb63a);
{goto L6eb6fe;}
}
B6eb63f:L6eb63f:{c.instructions+=39;NFSU2_TR(0x6eb63f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb642:{NFSU2_TR(0x6eb642);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb645:{NFSU2_TR(0x6eb645);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb648:{NFSU2_TR(0x6eb648);
{u32 ea_=u32(r4(R+24)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb64b:{NFSU2_TR(0x6eb64b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6eb64d:{NFSU2_TR(0x6eb64d);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb651:{NFSU2_TR(0x6eb651);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6eb653:{NFSU2_TR(0x6eb653);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb656:{NFSU2_TR(0x6eb656);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6eb658:{NFSU2_TR(0x6eb658);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb65b:{NFSU2_TR(0x6eb65b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb65e:{NFSU2_TR(0x6eb65e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb660:{NFSU2_TR(0x6eb660);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6eb662:{NFSU2_TR(0x6eb662);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb666:{NFSU2_TR(0x6eb666);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb669:{NFSU2_TR(0x6eb669);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb66c:{NFSU2_TR(0x6eb66c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb670:{NFSU2_TR(0x6eb670);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6eb672:{NFSU2_TR(0x6eb672);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb675:{NFSU2_TR(0x6eb675);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B6eb677:{NFSU2_TR(0x6eb677);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb67a:{NFSU2_TR(0x6eb67a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb67c:{NFSU2_TR(0x6eb67c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb67e:{NFSU2_TR(0x6eb67e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb681:{NFSU2_TR(0x6eb681);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6eb683:{NFSU2_TR(0x6eb683);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb686:{NFSU2_TR(0x6eb686);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb688:{NFSU2_TR(0x6eb688);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb68b:{NFSU2_TR(0x6eb68b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb68f:{NFSU2_TR(0x6eb68f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb692:{NFSU2_TR(0x6eb692);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb696:{NFSU2_TR(0x6eb696);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb699:{NFSU2_TR(0x6eb699);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb69b:{NFSU2_TR(0x6eb69b);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb69e:{NFSU2_TR(0x6eb69e);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6a2:{NFSU2_TR(0x6eb6a2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6a5:{NFSU2_TR(0x6eb6a5);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6a9:{NFSU2_TR(0x6eb6a9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6ac:{NFSU2_TR(0x6eb6ac);
{goto L6eb6fe;}
}
B6eb6ae:L6eb6ae:{c.instructions+=28;NFSU2_TR(0x6eb6ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb6b5:{NFSU2_TR(0x6eb6b5);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6eb6b9:{NFSU2_TR(0x6eb6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb6bc:{NFSU2_TR(0x6eb6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eb6bf:{NFSU2_TR(0x6eb6bf);
{u32 ea_=u32(r4(R+24)+r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6c3:{NFSU2_TR(0x6eb6c3);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6c6:{NFSU2_TR(0x6eb6c6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6eb6c8:{NFSU2_TR(0x6eb6c8);
{u32 ea_=u32(r4(R+24)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6cc:{NFSU2_TR(0x6eb6cc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6eb6ce:{NFSU2_TR(0x6eb6ce);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6d0:{NFSU2_TR(0x6eb6d0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb6d2:{NFSU2_TR(0x6eb6d2);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb6d4:{NFSU2_TR(0x6eb6d4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6d7:{NFSU2_TR(0x6eb6d7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6da:{NFSU2_TR(0x6eb6da);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6dd:{NFSU2_TR(0x6eb6dd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6df:{NFSU2_TR(0x6eb6df);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eb6e1:{NFSU2_TR(0x6eb6e1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb6e4:{NFSU2_TR(0x6eb6e4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6e7:{NFSU2_TR(0x6eb6e7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6ea:{NFSU2_TR(0x6eb6ea);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6ed:{NFSU2_TR(0x6eb6ed);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6ef:{NFSU2_TR(0x6eb6ef);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb6f1:{NFSU2_TR(0x6eb6f1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb6f4:{NFSU2_TR(0x6eb6f4);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6f7:{NFSU2_TR(0x6eb6f7);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6fa:{NFSU2_TR(0x6eb6fa);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eb6fc:{NFSU2_TR(0x6eb6fc);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb6fe:L6eb6fe:{c.instructions+=2;NFSU2_TR(0x6eb6fe);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6eb700:{NFSU2_TR(0x6eb700);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb703:L6eb703:{c.instructions+=7;NFSU2_TR(0x6eb703);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eb707:{NFSU2_TR(0x6eb707);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6eb70b:{NFSU2_TR(0x6eb70b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6eb70c:{NFSU2_TR(0x6eb70c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xeull))));
}
B6eb70f:{NFSU2_TR(0x6eb70f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6eb712:{NFSU2_TR(0x6eb712);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eb714:{NFSU2_TR(0x6eb714);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb5a0u);}goto L6eb5a0;}}
}
B6eb71a:L6eb71a:{c.instructions+=7;NFSU2_TR(0x6eb71a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eb71b:{NFSU2_TR(0x6eb71b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eb71c:{NFSU2_TR(0x6eb71c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eb71d:{NFSU2_TR(0x6eb71d);
w1(R+0,u8(0x1ull));
}
B6eb71f:{NFSU2_TR(0x6eb71f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eb720:{NFSU2_TR(0x6eb720);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x70ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x70ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x70ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb723:{NFSU2_TR(0x6eb723);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb730:L6eb730:{c.instructions+=48;NFSU2_TR(0x6eb730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb731:{NFSU2_TR(0x6eb731);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(r2(U+0)));
}
B6eb734:{NFSU2_TR(0x6eb734);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6eb738:{NFSU2_TR(0x6eb738);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb73c:{NFSU2_TR(0x6eb73c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb740:{NFSU2_TR(0x6eb740);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb746:{NFSU2_TR(0x6eb746);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb74c:{NFSU2_TR(0x6eb74c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb74e:{NFSU2_TR(0x6eb74e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eb752:{NFSU2_TR(0x6eb752);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb756:{NFSU2_TR(0x6eb756);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb75a:{NFSU2_TR(0x6eb75a);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb760:{NFSU2_TR(0x6eb760);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb766:{NFSU2_TR(0x6eb766);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb769:{NFSU2_TR(0x6eb769);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eb76d:{NFSU2_TR(0x6eb76d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb771:{NFSU2_TR(0x6eb771);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb775:{NFSU2_TR(0x6eb775);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb77b:{NFSU2_TR(0x6eb77b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb781:{NFSU2_TR(0x6eb781);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb784:{NFSU2_TR(0x6eb784);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eb788:{NFSU2_TR(0x6eb788);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb78c:{NFSU2_TR(0x6eb78c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb790:{NFSU2_TR(0x6eb790);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb796:{NFSU2_TR(0x6eb796);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb79c:{NFSU2_TR(0x6eb79c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb79f:{NFSU2_TR(0x6eb79f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eb7a3:{NFSU2_TR(0x6eb7a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb7a7:{NFSU2_TR(0x6eb7a7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb7ab:{NFSU2_TR(0x6eb7ab);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb7b1:{NFSU2_TR(0x6eb7b1);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb7b4:{NFSU2_TR(0x6eb7b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eb7b8:{NFSU2_TR(0x6eb7b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb7bc:{NFSU2_TR(0x6eb7bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb7c0:{NFSU2_TR(0x6eb7c0);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb7c6:{NFSU2_TR(0x6eb7c6);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb7c9:{NFSU2_TR(0x6eb7c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6eb7cd:{NFSU2_TR(0x6eb7cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb7d1:{NFSU2_TR(0x6eb7d1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb7d5:{NFSU2_TR(0x6eb7d5);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb7db:{NFSU2_TR(0x6eb7db);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb7de:{NFSU2_TR(0x6eb7de);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6eb7e2:{NFSU2_TR(0x6eb7e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb7e6:{NFSU2_TR(0x6eb7e6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb7ea:{NFSU2_TR(0x6eb7ea);
{u32 ea_=u32(u32(8134340u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb7f0:{NFSU2_TR(0x6eb7f0);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb7f3:{NFSU2_TR(0x6eb7f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb7f4:{NFSU2_TR(0x6eb7f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb800:L6eb800:{c.instructions+=48;NFSU2_TR(0x6eb800);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb801:{NFSU2_TR(0x6eb801);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6eb804:{NFSU2_TR(0x6eb804);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w2(R+0,shr<u16>(r2(R+0),u64(r4(U+0))));
}
B6eb808:{NFSU2_TR(0x6eb808);
w4(R+8,u32(r2(R+0)));
}
B6eb80b:{NFSU2_TR(0x6eb80b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6eb80f:{NFSU2_TR(0x6eb80f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb810:{NFSU2_TR(0x6eb810);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eb814:{NFSU2_TR(0x6eb814);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb818:{NFSU2_TR(0x6eb818);
{u32 ea_=u32(u32(8134344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb81e:{NFSU2_TR(0x6eb81e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb824:{NFSU2_TR(0x6eb824);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb826:{NFSU2_TR(0x6eb826);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6eb82a:{NFSU2_TR(0x6eb82a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w2(R+0,shr<u16>(r2(R+0),u64(r4(U+0))));
}
B6eb82e:{NFSU2_TR(0x6eb82e);
w4(R+8,u32(r2(R+0)));
}
B6eb831:{NFSU2_TR(0x6eb831);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb835:{NFSU2_TR(0x6eb835);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb839:{NFSU2_TR(0x6eb839);
{u32 ea_=u32(u32(8134344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb83f:{NFSU2_TR(0x6eb83f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb845:{NFSU2_TR(0x6eb845);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb848:{NFSU2_TR(0x6eb848);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6eb84c:{NFSU2_TR(0x6eb84c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w2(R+0,shr<u16>(r2(R+0),u64(r4(U+0))));
}
B6eb850:{NFSU2_TR(0x6eb850);
w4(R+8,u32(r2(R+0)));
}
B6eb853:{NFSU2_TR(0x6eb853);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb857:{NFSU2_TR(0x6eb857);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6eb859:{NFSU2_TR(0x6eb859);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6eb85b:{NFSU2_TR(0x6eb85b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb85f:{NFSU2_TR(0x6eb85f);
{u32 ea_=u32(u32(8134344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb865:{NFSU2_TR(0x6eb865);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb86b:{NFSU2_TR(0x6eb86b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb86e:{NFSU2_TR(0x6eb86e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6eb870:{NFSU2_TR(0x6eb870);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6eb873:{NFSU2_TR(0x6eb873);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6eb877:{NFSU2_TR(0x6eb877);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B6eb87a:{NFSU2_TR(0x6eb87a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B6eb87d:{NFSU2_TR(0x6eb87d);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb880:{NFSU2_TR(0x6eb880);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B6eb883:{NFSU2_TR(0x6eb883);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6eb885:{NFSU2_TR(0x6eb885);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb888:{NFSU2_TR(0x6eb888);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb88a:{NFSU2_TR(0x6eb88a);
w4(R+8,u32(r2(R+0)));
}
B6eb88d:{NFSU2_TR(0x6eb88d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb891:{NFSU2_TR(0x6eb891);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb895:{NFSU2_TR(0x6eb895);
{u32 ea_=u32(u32(8134344u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb89b:{NFSU2_TR(0x6eb89b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6eb8a1:{NFSU2_TR(0x6eb8a1);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb8a4:{NFSU2_TR(0x6eb8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eb8a5:{NFSU2_TR(0x6eb8a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb8a6:{NFSU2_TR(0x6eb8a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb8b0:L6eb8b0:{c.instructions+=54;NFSU2_TR(0x6eb8b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb8b1:{NFSU2_TR(0x6eb8b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb8b2:{NFSU2_TR(0x6eb8b2);
__builtin_memmove((R+24),(R+4),4);
}
B6eb8b4:{NFSU2_TR(0x6eb8b4);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6eb8b6:{NFSU2_TR(0x6eb8b6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B6eb8b9:{NFSU2_TR(0x6eb8b9);
w4(R+4,u32(r1(R+0)));
}
B6eb8bc:{NFSU2_TR(0x6eb8bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eb8c0:{NFSU2_TR(0x6eb8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb8c4:{NFSU2_TR(0x6eb8c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb8c5:{NFSU2_TR(0x6eb8c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eb8c9:{NFSU2_TR(0x6eb8c9);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb8cd:{NFSU2_TR(0x6eb8cd);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb8d0:{NFSU2_TR(0x6eb8d0);
{u32 ea_=u32(u32(8134336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb8d6:{NFSU2_TR(0x6eb8d6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb8d8:{NFSU2_TR(0x6eb8d8);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb8da:{NFSU2_TR(0x6eb8da);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6eb8dd:{NFSU2_TR(0x6eb8dd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B6eb8e0:{NFSU2_TR(0x6eb8e0);
w4(R+4,u32(r1(R+8)));
}
B6eb8e3:{NFSU2_TR(0x6eb8e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb8e7:{NFSU2_TR(0x6eb8e7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb8eb:{NFSU2_TR(0x6eb8eb);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb8ee:{NFSU2_TR(0x6eb8ee);
{u32 ea_=u32(u32(8134336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb8f4:{NFSU2_TR(0x6eb8f4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb8f7:{NFSU2_TR(0x6eb8f7);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb8fa:{NFSU2_TR(0x6eb8fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6eb8fd:{NFSU2_TR(0x6eb8fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B6eb900:{NFSU2_TR(0x6eb900);
w4(R+4,u32(r1(R+8)));
}
B6eb903:{NFSU2_TR(0x6eb903);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb907:{NFSU2_TR(0x6eb907);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb90b:{NFSU2_TR(0x6eb90b);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb90e:{NFSU2_TR(0x6eb90e);
{u32 ea_=u32(u32(8134336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb914:{NFSU2_TR(0x6eb914);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb917:{NFSU2_TR(0x6eb917);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb91a:{NFSU2_TR(0x6eb91a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6eb91c:{NFSU2_TR(0x6eb91c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6eb91f:{NFSU2_TR(0x6eb91f);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x3ull))));
}
B6eb922:{NFSU2_TR(0x6eb922);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B6eb925:{NFSU2_TR(0x6eb925);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x3ull))));
}
B6eb928:{NFSU2_TR(0x6eb928);
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+4))));
}
B6eb92a:{NFSU2_TR(0x6eb92a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6eb92d:{NFSU2_TR(0x6eb92d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r4(U+0))));
}
B6eb930:{NFSU2_TR(0x6eb930);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x3ull))));
}
B6eb933:{NFSU2_TR(0x6eb933);
u8 U[3];
w1(R+512,carry<u8>(r1(R+8),r1(R+4)));
w1(R+523,scarry<u8>(r1(R+8),r1(R+4)));
w1(R+8,u8(u32(r1(R+8))+u32(r1(R+4))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6eb935:{NFSU2_TR(0x6eb935);
w4(R+8,u32(r1(R+8)));
}
B6eb938:{NFSU2_TR(0x6eb938);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb93c:{NFSU2_TR(0x6eb93c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eb940:{NFSU2_TR(0x6eb940);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb943:{NFSU2_TR(0x6eb943);
{u32 ea_=u32(u32(8134336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eb949:{NFSU2_TR(0x6eb949);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eb94c:{NFSU2_TR(0x6eb94c);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eb94f:{NFSU2_TR(0x6eb94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eb950:{NFSU2_TR(0x6eb950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eb951:{NFSU2_TR(0x6eb951);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb952:{NFSU2_TR(0x6eb952);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb960:L6eb960:{c.instructions+=23;NFSU2_TR(0x6eb960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb961:{NFSU2_TR(0x6eb961);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb962:{NFSU2_TR(0x6eb962);
__builtin_memmove((R+24),(R+4),4);
}
B6eb964:{NFSU2_TR(0x6eb964);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6eb967:{NFSU2_TR(0x6eb967);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6eb96b:{NFSU2_TR(0x6eb96b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb96c:{NFSU2_TR(0x6eb96c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6eb970:{NFSU2_TR(0x6eb970);
w4(R+28,u32(0x1ull));
}
B6eb975:{NFSU2_TR(0x6eb975);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6eb977:{NFSU2_TR(0x6eb977);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6eb979:{NFSU2_TR(0x6eb979);
u8 U[56];
w8(U+0,u64(r4(R+28)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6eb979);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6eb979);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6eb97b:{NFSU2_TR(0x6eb97b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6eb97e:{NFSU2_TR(0x6eb97e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6eb981:{NFSU2_TR(0x6eb981);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb985:{NFSU2_TR(0x6eb985);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B6eb988:{NFSU2_TR(0x6eb988);
__builtin_memmove((R+28),(R+24),4);
}
B6eb98a:{NFSU2_TR(0x6eb98a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6eb98d:{NFSU2_TR(0x6eb98d);
__builtin_memmove((R+0),(R+12),4);
}
B6eb98f:{NFSU2_TR(0x6eb98f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eb992:{NFSU2_TR(0x6eb992);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6eb994:{NFSU2_TR(0x6eb994);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eb996:{NFSU2_TR(0x6eb996);
u8 U[12];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6eb99a:{NFSU2_TR(0x6eb99a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6eb9a7;}}
}
B6eb99c:L6eb99c:{c.instructions+=4;NFSU2_TR(0x6eb99c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6eb99f:{NFSU2_TR(0x6eb99f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6eb9a2:{NFSU2_TR(0x6eb9a2);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6eb9a4:{NFSU2_TR(0x6eb9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6eb9a7:L6eb9a7:{c.instructions+=7;NFSU2_TR(0x6eb9a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6eb9ab:{NFSU2_TR(0x6eb9ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6eb9ac:{NFSU2_TR(0x6eb9ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6eb9b0:{NFSU2_TR(0x6eb9b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eb9b1:{NFSU2_TR(0x6eb9b1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb9b4:{NFSU2_TR(0x6eb9b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eb9b5:{NFSU2_TR(0x6eb9b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eb9c0:L6eb9c0:{c.instructions+=3;NFSU2_TR(0x6eb9c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eb9c1:{NFSU2_TR(0x6eb9c1);
__builtin_memmove((R+24),(R+4),4);
}
B6eb9c3:{NFSU2_TR(0x6eb9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eb9c8ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6eb9c8:L6eb9c8:{c.instructions+=19;NFSU2_TR(0x6eb9c8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6eb9ca:{NFSU2_TR(0x6eb9ca);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6eb9cd:{NFSU2_TR(0x6eb9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9d0:{NFSU2_TR(0x6eb9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9d3:{NFSU2_TR(0x6eb9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9d6:{NFSU2_TR(0x6eb9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9d9:{NFSU2_TR(0x6eb9d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9dc:{NFSU2_TR(0x6eb9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9df:{NFSU2_TR(0x6eb9df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9e2:{NFSU2_TR(0x6eb9e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9e5:{NFSU2_TR(0x6eb9e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9e8:{NFSU2_TR(0x6eb9e8);
u8 U[4];
w4(U+0,u32(0x7c1ed0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6eb9ee:{NFSU2_TR(0x6eb9ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9f1:{NFSU2_TR(0x6eb9f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9f4:{NFSU2_TR(0x6eb9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9f7:{NFSU2_TR(0x6eb9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x12ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6eb9fe:{NFSU2_TR(0x6eb9fe);
__builtin_memmove((R+0),(R+24),4);
}
B6eba00:{NFSU2_TR(0x6eba00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6eba01:{NFSU2_TR(0x6eba01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6eba10:L6eba10:{c.instructions+=14;NFSU2_TR(0x6eba10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6eba13:{NFSU2_TR(0x6eba13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eba17:{NFSU2_TR(0x6eba17);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6eba1b:{NFSU2_TR(0x6eba1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eba1f:{NFSU2_TR(0x6eba1f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eba20:{NFSU2_TR(0x6eba20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eba24:{NFSU2_TR(0x6eba24);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eba28:{NFSU2_TR(0x6eba28);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6eba2b:{NFSU2_TR(0x6eba2b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6eba2e:{NFSU2_TR(0x6eba2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6eba31:{NFSU2_TR(0x6eba31);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B6eba33:{NFSU2_TR(0x6eba33);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eba37:{NFSU2_TR(0x6eba37);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eba39:{NFSU2_TR(0x6eba39);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ebab0;}}
}
B6eba3b:L6eba3b:{c.instructions+=5;NFSU2_TR(0x6eba3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eba3c:{NFSU2_TR(0x6eba3c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6eba3e:{NFSU2_TR(0x6eba3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eba3f:{NFSU2_TR(0x6eba3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eba43:{NFSU2_TR(0x6eba43);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eba44:L6eba44:{c.instructions+=3;NFSU2_TR(0x6eba44);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6eba46:{NFSU2_TR(0x6eba46);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6eba48:{NFSU2_TR(0x6eba48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ebaa7;}}
}
B6eba4a:L6eba4a:{c.instructions+=3;NFSU2_TR(0x6eba4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6eba4e:{NFSU2_TR(0x6eba4e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6eba50:{NFSU2_TR(0x6eba50);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6eba53:L6eba53:{c.instructions+=8;NFSU2_TR(0x6eba53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eba57:{NFSU2_TR(0x6eba57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eba5a:{NFSU2_TR(0x6eba5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6eba5e:{NFSU2_TR(0x6eba5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eba5f:{NFSU2_TR(0x6eba5f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6eba61:{NFSU2_TR(0x6eba61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eba62:{NFSU2_TR(0x6eba62);
__builtin_memmove((R+4),(R+20),4);
}
B6eba64:{NFSU2_TR(0x6eba64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eba69ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb8b0u);}goto L6eb8b0;}
}
B6eba69:L6eba69:{c.instructions+=20;NFSU2_TR(0x6eba69);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eba6d:{NFSU2_TR(0x6eba6d);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eba70:{NFSU2_TR(0x6eba70);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eba74:{NFSU2_TR(0x6eba74);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B6eba77:{NFSU2_TR(0x6eba77);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6eba78:{NFSU2_TR(0x6eba78);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eba7b:{NFSU2_TR(0x6eba7b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B6eba7e:{NFSU2_TR(0x6eba7e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eba82:{NFSU2_TR(0x6eba82);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6eba85:{NFSU2_TR(0x6eba85);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eba88:{NFSU2_TR(0x6eba88);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eba8b:{NFSU2_TR(0x6eba8b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eba8f:{NFSU2_TR(0x6eba8f);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eba92:{NFSU2_TR(0x6eba92);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eba95:{NFSU2_TR(0x6eba95);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eba99:{NFSU2_TR(0x6eba99);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eba9c:{NFSU2_TR(0x6eba9c);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eba9f:{NFSU2_TR(0x6eba9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ebaa3:{NFSU2_TR(0x6ebaa3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebaa5:{NFSU2_TR(0x6ebaa5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eba53u);}goto L6eba53;}}
}
B6ebaa7:L6ebaa7:{c.instructions+=2;NFSU2_TR(0x6ebaa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebaab:{NFSU2_TR(0x6ebaab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eba44u);}goto L6eba44;}}
}
B6ebaad:L6ebaad:{c.instructions+=3;NFSU2_TR(0x6ebaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebaae:{NFSU2_TR(0x6ebaae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebaaf:{NFSU2_TR(0x6ebaaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebab0:L6ebab0:{c.instructions+=3;NFSU2_TR(0x6ebab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebab1:{NFSU2_TR(0x6ebab1);
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
B6ebab4:{NFSU2_TR(0x6ebab4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebac0:L6ebac0:{c.instructions+=15;NFSU2_TR(0x6ebac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ebac3:{NFSU2_TR(0x6ebac3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebac7:{NFSU2_TR(0x6ebac7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ebacb:{NFSU2_TR(0x6ebacb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebacf:{NFSU2_TR(0x6ebacf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ebad3:{NFSU2_TR(0x6ebad3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebad7:{NFSU2_TR(0x6ebad7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebad8:{NFSU2_TR(0x6ebad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebadb:{NFSU2_TR(0x6ebadb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6ebade:{NFSU2_TR(0x6ebade);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ebae1:{NFSU2_TR(0x6ebae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebae5:{NFSU2_TR(0x6ebae5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ebae6:{NFSU2_TR(0x6ebae6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebae8:{NFSU2_TR(0x6ebae8);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6ebaec:{NFSU2_TR(0x6ebaec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ebb73;}}
}
B6ebaf2:L6ebaf2:{c.instructions+=7;NFSU2_TR(0x6ebaf2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebaf3:{NFSU2_TR(0x6ebaf3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6ebaf5:{NFSU2_TR(0x6ebaf5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ebaf6:{NFSU2_TR(0x6ebaf6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebaf7:{NFSU2_TR(0x6ebaf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebafb:{NFSU2_TR(0x6ebafb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebafc:{NFSU2_TR(0x6ebafc);
__builtin_memmove((R+16),(R+16),4);
}
B6ebb00:L6ebb00:{c.instructions+=4;NFSU2_TR(0x6ebb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebb04:{NFSU2_TR(0x6ebb04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6ebb08:{NFSU2_TR(0x6ebb08);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B6ebb09:{NFSU2_TR(0x6ebb09);
if(r1(R+519)){{goto L6ebb6a;}}
}
B6ebb0b:L6ebb0b:{c.instructions+=8;NFSU2_TR(0x6ebb0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebb0f:{NFSU2_TR(0x6ebb0f);
__builtin_memmove((R+4),(R+20),4);
}
B6ebb11:{NFSU2_TR(0x6ebb11);
__builtin_memmove((R+28),(R+20),4);
}
B6ebb13:{NFSU2_TR(0x6ebb13);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ebb16:{NFSU2_TR(0x6ebb16);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6ebb19:{NFSU2_TR(0x6ebb19);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6ebb1d:{NFSU2_TR(0x6ebb1d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6ebb1e:{NFSU2_TR(0x6ebb1e);
__builtin_memmove((R+28),(R+28),4);
}
B6ebb20:L6ebb20:{c.instructions+=8;NFSU2_TR(0x6ebb20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebb24:{NFSU2_TR(0x6ebb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebb27:{NFSU2_TR(0x6ebb27);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ebb2b:{NFSU2_TR(0x6ebb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebb2c:{NFSU2_TR(0x6ebb2c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B6ebb2e:{NFSU2_TR(0x6ebb2e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebb2f:{NFSU2_TR(0x6ebb2f);
__builtin_memmove((R+4),(R+12),4);
}
B6ebb31:{NFSU2_TR(0x6ebb31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebb36ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb8b0u);}goto L6eb8b0;}
}
B6ebb36:L6ebb36:{c.instructions+=17;NFSU2_TR(0x6ebb36);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebb39:{NFSU2_TR(0x6ebb39);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebb3d:{NFSU2_TR(0x6ebb3d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x3ull))));
}
B6ebb40:{NFSU2_TR(0x6ebb40);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x20ull))));
}
B6ebb43:{NFSU2_TR(0x6ebb43);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x10ull))));
}
B6ebb46:{NFSU2_TR(0x6ebb46);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B6ebb47:{NFSU2_TR(0x6ebb47);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebb4a:{NFSU2_TR(0x6ebb4a);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebb4d:{NFSU2_TR(0x6ebb4d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebb51:{NFSU2_TR(0x6ebb51);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebb54:{NFSU2_TR(0x6ebb54);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebb57:{NFSU2_TR(0x6ebb57);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebb5b:{NFSU2_TR(0x6ebb5b);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebb5e:{NFSU2_TR(0x6ebb5e);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebb61:{NFSU2_TR(0x6ebb61);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebb65:{NFSU2_TR(0x6ebb65);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebb68:{NFSU2_TR(0x6ebb68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebb20u);}goto L6ebb20;}}
}
B6ebb6a:L6ebb6a:{c.instructions+=2;NFSU2_TR(0x6ebb6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebb6e:{NFSU2_TR(0x6ebb6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebb00u);}goto L6ebb00;}}
}
B6ebb70:L6ebb70:{c.instructions+=3;NFSU2_TR(0x6ebb70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebb71:{NFSU2_TR(0x6ebb71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebb72:{NFSU2_TR(0x6ebb72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebb73:L6ebb73:{c.instructions+=3;NFSU2_TR(0x6ebb73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebb74:{NFSU2_TR(0x6ebb74);
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
B6ebb77:{NFSU2_TR(0x6ebb77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebb80:L6ebb80:{c.instructions+=6;NFSU2_TR(0x6ebb80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebb84:{NFSU2_TR(0x6ebb84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6ebb87:{NFSU2_TR(0x6ebb87);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebb88:{NFSU2_TR(0x6ebb88);
__builtin_memmove((R+24),(R+4),4);
}
B6ebb8a:{NFSU2_TR(0x6ebb8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ebb8d:{NFSU2_TR(0x6ebb8d);
if(r1(R+518)){{goto L6ebcac;}}
}
B6ebb93:L6ebb93:{c.instructions+=13;NFSU2_TR(0x6ebb93);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebb97:{NFSU2_TR(0x6ebb97);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebb98:{NFSU2_TR(0x6ebb98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ebb9c:{NFSU2_TR(0x6ebb9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ebb9f:{NFSU2_TR(0x6ebb9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6ebba1:{NFSU2_TR(0x6ebba1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebba4:{NFSU2_TR(0x6ebba4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebba5:{NFSU2_TR(0x6ebba5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebba6:{NFSU2_TR(0x6ebba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ebba9:{NFSU2_TR(0x6ebba9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ebbac:{NFSU2_TR(0x6ebbac);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6ebbae:{NFSU2_TR(0x6ebbae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebbb0:{NFSU2_TR(0x6ebbb0);
if(r1(R+518)){{goto L6ebbfc;}}
}
B6ebbb2:L6ebbb2:{c.instructions+=5;NFSU2_TR(0x6ebbb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6ebbb5:{NFSU2_TR(0x6ebbb5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ebbb7:{NFSU2_TR(0x6ebbb7);
u8 U[2];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
w1(U+1,u8(u32(r1(R+8))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6ebbb9:{NFSU2_TR(0x6ebbb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebbbd:{NFSU2_TR(0x6ebbbd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ebca2;}}
}
B6ebbc3:L6ebbc3:{c.instructions+=2;NFSU2_TR(0x6ebbc3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ebbc5:{NFSU2_TR(0x6ebbc5);
__builtin_memmove((R+20),(R+4),4);
}
B6ebbc7:L6ebbc7:{c.instructions+=5;NFSU2_TR(0x6ebbc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebbca:{NFSU2_TR(0x6ebbca);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B6ebbcc:{NFSU2_TR(0x6ebbcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebbcd:{NFSU2_TR(0x6ebbcd);
__builtin_memmove((R+4),(R+20),4);
}
B6ebbcf:{NFSU2_TR(0x6ebbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebbd4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb800u);}goto L6eb800;}
}
B6ebbd4:L6ebbd4:{c.instructions+=8;NFSU2_TR(0x6ebbd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebbd8:{NFSU2_TR(0x6ebbd8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ebbdc:{NFSU2_TR(0x6ebbdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ebbdd:{NFSU2_TR(0x6ebbdd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6ebbe0:{NFSU2_TR(0x6ebbe0);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x6ull))));
}
B6ebbe3:{NFSU2_TR(0x6ebbe3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebbe5:{NFSU2_TR(0x6ebbe5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebbe9:{NFSU2_TR(0x6ebbe9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebbc7u);}goto L6ebbc7;}}
}
B6ebbeb:L6ebbeb:{c.instructions+=8;NFSU2_TR(0x6ebbeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebbef:{NFSU2_TR(0x6ebbef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebbf0:{NFSU2_TR(0x6ebbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebbf1:{NFSU2_TR(0x6ebbf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebbf2:{NFSU2_TR(0x6ebbf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebbf5:{NFSU2_TR(0x6ebbf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebbf6:{NFSU2_TR(0x6ebbf6);
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
B6ebbf9:{NFSU2_TR(0x6ebbf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebbfc:L6ebbfc:{c.instructions+=11;NFSU2_TR(0x6ebbfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ebc00:{NFSU2_TR(0x6ebc00);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebc04:{NFSU2_TR(0x6ebc04);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6ebc07:{NFSU2_TR(0x6ebc07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ebc0a:{NFSU2_TR(0x6ebc0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ebc0d:{NFSU2_TR(0x6ebc0d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6ebc0f:{NFSU2_TR(0x6ebc0f);
__builtin_memmove((R+20),(R+0),4);
}
B6ebc11:{NFSU2_TR(0x6ebc11);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ebc13:{NFSU2_TR(0x6ebc13);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebc15:{NFSU2_TR(0x6ebc15);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebc19:{NFSU2_TR(0x6ebc19);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ebca2;}}
}
B6ebc1f:L6ebc1f:{c.instructions+=2;NFSU2_TR(0x6ebc1f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ebc21:{NFSU2_TR(0x6ebc21);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebc25:L6ebc25:{c.instructions+=7;NFSU2_TR(0x6ebc25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebc28:{NFSU2_TR(0x6ebc28);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ebc2c:{NFSU2_TR(0x6ebc2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebc2d:{NFSU2_TR(0x6ebc2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6ebc31:{NFSU2_TR(0x6ebc31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebc32:{NFSU2_TR(0x6ebc32);
__builtin_memmove((R+4),(R+20),4);
}
B6ebc34:{NFSU2_TR(0x6ebc34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebc39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb8b0u);}goto L6eb8b0;}
}
B6ebc39:L6ebc39:{c.instructions+=31;NFSU2_TR(0x6ebc39);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebc3d:{NFSU2_TR(0x6ebc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebc40:{NFSU2_TR(0x6ebc40);
{u32 ea_=u32(r4(R+28)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebc43:{NFSU2_TR(0x6ebc43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebc46:{NFSU2_TR(0x6ebc46);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B6ebc49:{NFSU2_TR(0x6ebc49);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6ebc4c:{NFSU2_TR(0x6ebc4c);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebc50:{NFSU2_TR(0x6ebc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebc53:{NFSU2_TR(0x6ebc53);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebc57:{NFSU2_TR(0x6ebc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebc5a:{NFSU2_TR(0x6ebc5a);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebc5e:{NFSU2_TR(0x6ebc5e);
{u32 ea_=u32(r4(R+4)+r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebc62:{NFSU2_TR(0x6ebc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebc65:{NFSU2_TR(0x6ebc65);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebc69:{NFSU2_TR(0x6ebc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebc6c:{NFSU2_TR(0x6ebc6c);
{u32 ea_=u32(r4(R+28)+r4(R+8)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebc70:{NFSU2_TR(0x6ebc70);
{u32 ea_=u32(r4(R+0)+r4(R+28)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebc74:{NFSU2_TR(0x6ebc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebc77:{NFSU2_TR(0x6ebc77);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebc7b:{NFSU2_TR(0x6ebc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebc7e:{NFSU2_TR(0x6ebc7e);
{u32 ea_=u32(r4(R+28)+r4(R+4)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebc82:{NFSU2_TR(0x6ebc82);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebc86:{NFSU2_TR(0x6ebc86);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ebc87:{NFSU2_TR(0x6ebc87);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebc8b:{NFSU2_TR(0x6ebc8b);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebc8f:{NFSU2_TR(0x6ebc8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebc93:{NFSU2_TR(0x6ebc93);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ebc97:{NFSU2_TR(0x6ebc97);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B6ebc9a:{NFSU2_TR(0x6ebc9a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebc9c:{NFSU2_TR(0x6ebc9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebca0:{NFSU2_TR(0x6ebca0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebc25u);}goto L6ebc25;}}
}
B6ebca2:L6ebca2:{c.instructions+=5;NFSU2_TR(0x6ebca2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebca6:{NFSU2_TR(0x6ebca6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebca7:{NFSU2_TR(0x6ebca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebca8:{NFSU2_TR(0x6ebca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebcab:{NFSU2_TR(0x6ebcab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebcac:L6ebcac:{c.instructions+=3;NFSU2_TR(0x6ebcac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebcad:{NFSU2_TR(0x6ebcad);
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
B6ebcb0:{NFSU2_TR(0x6ebcb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebcc0:L6ebcc0:{c.instructions+=18;NFSU2_TR(0x6ebcc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6ebcc3:{NFSU2_TR(0x6ebcc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebcc7:{NFSU2_TR(0x6ebcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebccb:{NFSU2_TR(0x6ebccb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebccf:{NFSU2_TR(0x6ebccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebcd2:{NFSU2_TR(0x6ebcd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ebcd6:{NFSU2_TR(0x6ebcd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B6ebcda:{NFSU2_TR(0x6ebcda);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ebcdd:{NFSU2_TR(0x6ebcdd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ebce0:{NFSU2_TR(0x6ebce0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebce1:{NFSU2_TR(0x6ebce1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebce2:{NFSU2_TR(0x6ebce2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ebce6:{NFSU2_TR(0x6ebce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ebce9:{NFSU2_TR(0x6ebce9);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6ebceb:{NFSU2_TR(0x6ebceb);
__builtin_memmove((R+20),(R+4),4);
}
B6ebced:{NFSU2_TR(0x6ebced);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebcf1:{NFSU2_TR(0x6ebcf1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebcf3:{NFSU2_TR(0x6ebcf3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ebd8e;}}
}
B6ebcf9:L6ebcf9:{c.instructions+=4;NFSU2_TR(0x6ebcf9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6ebcfb:{NFSU2_TR(0x6ebcfb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebcfc:{NFSU2_TR(0x6ebcfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebd00:{NFSU2_TR(0x6ebd00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebd01:L6ebd01:{c.instructions+=3;NFSU2_TR(0x6ebd01);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ebd03:{NFSU2_TR(0x6ebd03);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ebd05:{NFSU2_TR(0x6ebd05);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ebd82;}}
}
B6ebd07:L6ebd07:{c.instructions+=3;NFSU2_TR(0x6ebd07);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ebd0b:{NFSU2_TR(0x6ebd0b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ebd0d:{NFSU2_TR(0x6ebd0d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6ebd10:L6ebd10:{c.instructions+=10;NFSU2_TR(0x6ebd10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebd14:{NFSU2_TR(0x6ebd14);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ebd18:{NFSU2_TR(0x6ebd18);
__builtin_memmove((R+4),(R+0),4);
}
B6ebd1a:{NFSU2_TR(0x6ebd1a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ebd1d:{NFSU2_TR(0x6ebd1d);
w4(R+8,u32(0x1ull));
}
B6ebd22:{NFSU2_TR(0x6ebd22);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ebd24:{NFSU2_TR(0x6ebd24);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebd28:{NFSU2_TR(0x6ebd28);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ebd2b:{NFSU2_TR(0x6ebd2b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ebd2e:{NFSU2_TR(0x6ebd2e);
if(r1(R+518)){{goto L6ebd6c;}}
}
B6ebd30:L6ebd30:{c.instructions+=8;NFSU2_TR(0x6ebd30);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebd34:{NFSU2_TR(0x6ebd34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebd37:{NFSU2_TR(0x6ebd37);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ebd3b:{NFSU2_TR(0x6ebd3b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6ebd3d:{NFSU2_TR(0x6ebd3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebd3e:{NFSU2_TR(0x6ebd3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebd3f:{NFSU2_TR(0x6ebd3f);
__builtin_memmove((R+4),(R+20),4);
}
B6ebd41:{NFSU2_TR(0x6ebd41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebd46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb8b0u);}goto L6eb8b0;}
}
B6ebd46:L6ebd46:{c.instructions+=12;NFSU2_TR(0x6ebd46);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebd4a:{NFSU2_TR(0x6ebd4a);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebd4d:{NFSU2_TR(0x6ebd4d);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebd50:{NFSU2_TR(0x6ebd50);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebd54:{NFSU2_TR(0x6ebd54);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebd57:{NFSU2_TR(0x6ebd57);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebd5a:{NFSU2_TR(0x6ebd5a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebd5e:{NFSU2_TR(0x6ebd5e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebd60:{NFSU2_TR(0x6ebd60);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebd62:{NFSU2_TR(0x6ebd62);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebd66:{NFSU2_TR(0x6ebd66);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebd69:{NFSU2_TR(0x6ebd69);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebd6c:L6ebd6c:{c.instructions+=8;NFSU2_TR(0x6ebd6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebd70:{NFSU2_TR(0x6ebd70);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ebd74:{NFSU2_TR(0x6ebd74);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B6ebd77:{NFSU2_TR(0x6ebd77);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ebd78:{NFSU2_TR(0x6ebd78);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x20ull))));
}
B6ebd7b:{NFSU2_TR(0x6ebd7b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6ebd7e:{NFSU2_TR(0x6ebd7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebd80:{NFSU2_TR(0x6ebd80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebd10u);}goto L6ebd10;}}
}
B6ebd82:L6ebd82:{c.instructions+=2;NFSU2_TR(0x6ebd82);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebd86:{NFSU2_TR(0x6ebd86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebd01u);}goto L6ebd01;}}
}
B6ebd8c:L6ebd8c:{c.instructions+=2;NFSU2_TR(0x6ebd8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebd8d:{NFSU2_TR(0x6ebd8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebd8e:L6ebd8e:{c.instructions+=4;NFSU2_TR(0x6ebd8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebd8f:{NFSU2_TR(0x6ebd8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebd90:{NFSU2_TR(0x6ebd90);
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
B6ebd93:{NFSU2_TR(0x6ebd93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebda0:L6ebda0:{c.instructions+=18;NFSU2_TR(0x6ebda0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6ebda3:{NFSU2_TR(0x6ebda3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebda7:{NFSU2_TR(0x6ebda7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebdaa:{NFSU2_TR(0x6ebdaa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebdab:{NFSU2_TR(0x6ebdab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebdac:{NFSU2_TR(0x6ebdac);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6ebdb0:{NFSU2_TR(0x6ebdb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebdb4:{NFSU2_TR(0x6ebdb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebdb8:{NFSU2_TR(0x6ebdb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebdbc:{NFSU2_TR(0x6ebdbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ebdbf:{NFSU2_TR(0x6ebdbf);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ebdc2:{NFSU2_TR(0x6ebdc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ebdc6:{NFSU2_TR(0x6ebdc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ebdc9:{NFSU2_TR(0x6ebdc9);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6ebdcd:{NFSU2_TR(0x6ebdcd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ebdd0:{NFSU2_TR(0x6ebdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebdd4:{NFSU2_TR(0x6ebdd4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebdd6:{NFSU2_TR(0x6ebdd6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ebe7c;}}
}
B6ebddc:L6ebddc:{c.instructions+=5;NFSU2_TR(0x6ebddc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B6ebdde:{NFSU2_TR(0x6ebdde);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ebddf:{NFSU2_TR(0x6ebddf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebde0:{NFSU2_TR(0x6ebde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebde4:{NFSU2_TR(0x6ebde4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebde5:L6ebde5:{c.instructions+=3;NFSU2_TR(0x6ebde5);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6ebde9:{NFSU2_TR(0x6ebde9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
}
B6ebdea:{NFSU2_TR(0x6ebdea);
if(r1(R+519)){{goto L6ebe70;}}
}
B6ebdf0:L6ebdf0:{c.instructions+=6;NFSU2_TR(0x6ebdf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebdf4:{NFSU2_TR(0x6ebdf4);
__builtin_memmove((R+12),(R+28),4);
}
B6ebdf6:{NFSU2_TR(0x6ebdf6);
__builtin_memmove((R+4),(R+28),4);
}
B6ebdf8:{NFSU2_TR(0x6ebdf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6ebdfb:{NFSU2_TR(0x6ebdfb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ebdfe:{NFSU2_TR(0x6ebdfe);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6ebe02:L6ebe02:{c.instructions+=10;NFSU2_TR(0x6ebe02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebe06:{NFSU2_TR(0x6ebe06);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ebe0a:{NFSU2_TR(0x6ebe0a);
__builtin_memmove((R+4),(R+0),4);
}
B6ebe0c:{NFSU2_TR(0x6ebe0c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ebe0f:{NFSU2_TR(0x6ebe0f);
w4(R+8,u32(0x1ull));
}
B6ebe14:{NFSU2_TR(0x6ebe14);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ebe16:{NFSU2_TR(0x6ebe16);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebe1a:{NFSU2_TR(0x6ebe1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ebe1d:{NFSU2_TR(0x6ebe1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ebe20:{NFSU2_TR(0x6ebe20);
if(r1(R+518)){{goto L6ebe5e;}}
}
B6ebe22:L6ebe22:{c.instructions+=8;NFSU2_TR(0x6ebe22);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebe26:{NFSU2_TR(0x6ebe26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebe29:{NFSU2_TR(0x6ebe29);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ebe2d:{NFSU2_TR(0x6ebe2d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6ebe2f:{NFSU2_TR(0x6ebe2f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebe30:{NFSU2_TR(0x6ebe30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebe31:{NFSU2_TR(0x6ebe31);
__builtin_memmove((R+4),(R+20),4);
}
B6ebe33:{NFSU2_TR(0x6ebe33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebe38ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb8b0u);}goto L6eb8b0;}
}
B6ebe38:L6ebe38:{c.instructions+=12;NFSU2_TR(0x6ebe38);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebe3b:{NFSU2_TR(0x6ebe3b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebe3f:{NFSU2_TR(0x6ebe3f);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebe42:{NFSU2_TR(0x6ebe42);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebe45:{NFSU2_TR(0x6ebe45);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebe49:{NFSU2_TR(0x6ebe49);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebe4c:{NFSU2_TR(0x6ebe4c);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebe4e:{NFSU2_TR(0x6ebe4e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebe52:{NFSU2_TR(0x6ebe52);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebe54:{NFSU2_TR(0x6ebe54);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebe57:{NFSU2_TR(0x6ebe57);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ebe5b:{NFSU2_TR(0x6ebe5b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebe5e:L6ebe5e:{c.instructions+=6;NFSU2_TR(0x6ebe5e);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x3ull))));
}
B6ebe61:{NFSU2_TR(0x6ebe61);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6ebe62:{NFSU2_TR(0x6ebe62);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x20ull))));
}
B6ebe65:{NFSU2_TR(0x6ebe65);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x10ull))));
}
B6ebe68:{NFSU2_TR(0x6ebe68);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ebe6a:{NFSU2_TR(0x6ebe6a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebe02u);}goto L6ebe02;}}
}
B6ebe6c:L6ebe6c:{c.instructions+=1;NFSU2_TR(0x6ebe6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebe70:L6ebe70:{c.instructions+=2;NFSU2_TR(0x6ebe70);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebe74:{NFSU2_TR(0x6ebe74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebde5u);}goto L6ebde5;}}
}
B6ebe7a:L6ebe7a:{c.instructions+=2;NFSU2_TR(0x6ebe7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebe7b:{NFSU2_TR(0x6ebe7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebe7c:L6ebe7c:{c.instructions+=4;NFSU2_TR(0x6ebe7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebe7d:{NFSU2_TR(0x6ebe7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebe7e:{NFSU2_TR(0x6ebe7e);
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
B6ebe81:{NFSU2_TR(0x6ebe81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebe90:L6ebe90:{c.instructions+=6;NFSU2_TR(0x6ebe90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebe94:{NFSU2_TR(0x6ebe94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ebe97:{NFSU2_TR(0x6ebe97);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebe98:{NFSU2_TR(0x6ebe98);
__builtin_memmove((R+28),(R+4),4);
}
B6ebe9a:{NFSU2_TR(0x6ebe9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ebe9d:{NFSU2_TR(0x6ebe9d);
if(r1(R+518)){TAIL_STATIC(0x6ec00cu,6ec);}
}
B6ebea3:L6ebea3:{c.instructions+=15;NFSU2_TR(0x6ebea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebea7:{NFSU2_TR(0x6ebea7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebea8:{NFSU2_TR(0x6ebea8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebea9:{NFSU2_TR(0x6ebea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ebead:{NFSU2_TR(0x6ebead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebeb0:{NFSU2_TR(0x6ebeb0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebeb4:{NFSU2_TR(0x6ebeb4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ebeb7:{NFSU2_TR(0x6ebeb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6ebeb9:{NFSU2_TR(0x6ebeb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebebc:{NFSU2_TR(0x6ebebc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebebd:{NFSU2_TR(0x6ebebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ebec0:{NFSU2_TR(0x6ebec0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ebec3:{NFSU2_TR(0x6ebec3);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6ebec5:{NFSU2_TR(0x6ebec5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ebec7:{NFSU2_TR(0x6ebec7);
if(r1(R+518)){{goto L6ebf37;}}
}
B6ebec9:L6ebec9:{c.instructions+=4;NFSU2_TR(0x6ebec9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ebecc:{NFSU2_TR(0x6ebecc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ebece:{NFSU2_TR(0x6ebece);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ebed0:{NFSU2_TR(0x6ebed0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ec002u,6ec);}
}
B6ebed6:L6ebed6:{c.instructions+=3;NFSU2_TR(0x6ebed6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ebed8:{NFSU2_TR(0x6ebed8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebedc:{NFSU2_TR(0x6ebedc);
__builtin_memmove((R+16),(R+16),4);
}
B6ebee0:L6ebee0:{c.instructions+=10;NFSU2_TR(0x6ebee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebee4:{NFSU2_TR(0x6ebee4);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ebee8:{NFSU2_TR(0x6ebee8);
__builtin_memmove((R+4),(R+0),4);
}
B6ebeea:{NFSU2_TR(0x6ebeea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ebeed:{NFSU2_TR(0x6ebeed);
w4(R+8,u32(0x1ull));
}
B6ebef2:{NFSU2_TR(0x6ebef2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ebef4:{NFSU2_TR(0x6ebef4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebef8:{NFSU2_TR(0x6ebef8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ebefb:{NFSU2_TR(0x6ebefb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ebefe:{NFSU2_TR(0x6ebefe);
if(r1(R+518)){{goto L6ebf0f;}}
}
B6ebf00:L6ebf00:{c.instructions+=5;NFSU2_TR(0x6ebf00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebf03:{NFSU2_TR(0x6ebf03);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebf07:{NFSU2_TR(0x6ebf07);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6ebf09:{NFSU2_TR(0x6ebf09);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebf0a:{NFSU2_TR(0x6ebf0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebf0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb800u);}goto L6eb800;}
}
B6ebf0f:L6ebf0f:{c.instructions+=8;NFSU2_TR(0x6ebf0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebf13:{NFSU2_TR(0x6ebf13);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ebf17:{NFSU2_TR(0x6ebf17);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ebf18:{NFSU2_TR(0x6ebf18);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6ebf1b:{NFSU2_TR(0x6ebf1b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6ebf1e:{NFSU2_TR(0x6ebf1e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebf20:{NFSU2_TR(0x6ebf20);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebf24:{NFSU2_TR(0x6ebf24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebee0u);}goto L6ebee0;}}
}
B6ebf26:L6ebf26:{c.instructions+=8;NFSU2_TR(0x6ebf26);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebf2a:{NFSU2_TR(0x6ebf2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ebf2b:{NFSU2_TR(0x6ebf2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ebf2c:{NFSU2_TR(0x6ebf2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ebf2d:{NFSU2_TR(0x6ebf2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebf30:{NFSU2_TR(0x6ebf30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ebf31:{NFSU2_TR(0x6ebf31);
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
B6ebf34:{NFSU2_TR(0x6ebf34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ebf37:L6ebf37:{c.instructions+=10;NFSU2_TR(0x6ebf37);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ebf3b:{NFSU2_TR(0x6ebf3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebf3f:{NFSU2_TR(0x6ebf3f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6ebf42:{NFSU2_TR(0x6ebf42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ebf45:{NFSU2_TR(0x6ebf45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ebf48:{NFSU2_TR(0x6ebf48);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6ebf4a:{NFSU2_TR(0x6ebf4a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ebf4c:{NFSU2_TR(0x6ebf4c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ebf4e:{NFSU2_TR(0x6ebf4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebf52:{NFSU2_TR(0x6ebf52);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6ec002u,6ec);}
}
B6ebf58:L6ebf58:{c.instructions+=3;NFSU2_TR(0x6ebf58);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ebf5a:{NFSU2_TR(0x6ebf5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebf5e:{NFSU2_TR(0x6ebf5e);
__builtin_memmove((R+28),(R+28),4);
}
B6ebf60:L6ebf60:{c.instructions+=10;NFSU2_TR(0x6ebf60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebf64:{NFSU2_TR(0x6ebf64);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ebf68:{NFSU2_TR(0x6ebf68);
__builtin_memmove((R+4),(R+0),4);
}
B6ebf6a:{NFSU2_TR(0x6ebf6a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ebf6d:{NFSU2_TR(0x6ebf6d);
w4(R+8,u32(0x1ull));
}
B6ebf72:{NFSU2_TR(0x6ebf72);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ebf74:{NFSU2_TR(0x6ebf74);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebf78:{NFSU2_TR(0x6ebf78);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ebf7b:{NFSU2_TR(0x6ebf7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ebf7e:{NFSU2_TR(0x6ebf7e);
if(r1(R+518)){{goto L6ebfdc;}}
}
B6ebf80:L6ebf80:{c.instructions+=7;NFSU2_TR(0x6ebf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebf83:{NFSU2_TR(0x6ebf83);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebf87:{NFSU2_TR(0x6ebf87);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ebf8b:{NFSU2_TR(0x6ebf8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebf8c:{NFSU2_TR(0x6ebf8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6ebf90:{NFSU2_TR(0x6ebf90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ebf91:{NFSU2_TR(0x6ebf91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ebf96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eb8b0u);}goto L6eb8b0;}
}
B6ebf96:L6ebf96:{c.instructions+=20;NFSU2_TR(0x6ebf96);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebf9a:{NFSU2_TR(0x6ebf9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebf9d:{NFSU2_TR(0x6ebf9d);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebfa0:{NFSU2_TR(0x6ebfa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebfa3:{NFSU2_TR(0x6ebfa3);
{u32 ea_=u32(r4(R+8)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebfa6:{NFSU2_TR(0x6ebfa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebfa9:{NFSU2_TR(0x6ebfa9);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebfad:{NFSU2_TR(0x6ebfad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebfb0:{NFSU2_TR(0x6ebfb0);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebfb4:{NFSU2_TR(0x6ebfb4);
{u32 ea_=u32(r4(R+4)+r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebfb8:{NFSU2_TR(0x6ebfb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebfbb:{NFSU2_TR(0x6ebfbb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebfbf:{NFSU2_TR(0x6ebfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebfc2:{NFSU2_TR(0x6ebfc2);
{u32 ea_=u32(r4(R+8)+r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebfc6:{NFSU2_TR(0x6ebfc6);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebfca:{NFSU2_TR(0x6ebfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ebfcd:{NFSU2_TR(0x6ebfcd);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ebfd1:{NFSU2_TR(0x6ebfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebfd4:{NFSU2_TR(0x6ebfd4);
{u32 ea_=u32(r4(R+4)+r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ebfd8:{NFSU2_TR(0x6ebfd8);
{u32 ea_=u32(r4(R+8)+r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ebfdc:L6ebfdc:{c.instructions+=11;NFSU2_TR(0x6ebfdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ebfe0:{NFSU2_TR(0x6ebfe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ebfe4:{NFSU2_TR(0x6ebfe4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B6ebfe7:{NFSU2_TR(0x6ebfe7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3ull))));
}
B6ebfea:{NFSU2_TR(0x6ebfea);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebfee:{NFSU2_TR(0x6ebfee);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ebff2:{NFSU2_TR(0x6ebff2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ebff3:{NFSU2_TR(0x6ebff3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6ebff6:{NFSU2_TR(0x6ebff6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ebff8:{NFSU2_TR(0x6ebff8);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ebffc:{NFSU2_TR(0x6ebffc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ebf60u);}goto L6ebf60;}}
TAIL_STATIC(0x6ec002u,6ec);
}
XIT:NFSU2_TR_EXIT(0x6eb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
