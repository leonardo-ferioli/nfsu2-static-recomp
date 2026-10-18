#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f7(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_700(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4fe,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4fe,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 page_4fe(Cpu& c){return body_4fe(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4fe(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4fe002:goto L4fe002;
case 0x4fe004:goto L4fe004;
case 0x4fe00a:c.instructions+=2;goto B4fe00a;
case 0x4fe010:c.instructions+=1;goto B4fe010;
case 0x4fe012:goto L4fe012;
case 0x4fe018:c.instructions+=4;goto B4fe018;
case 0x4fe01e:c.instructions+=3;goto B4fe01e;
case 0x4fe020:c.instructions+=2;goto B4fe020;
case 0x4fe023:c.instructions+=1;goto B4fe023;
case 0x4fe025:goto L4fe025;
case 0x4fe026:c.instructions+=6;goto B4fe026;
case 0x4fe027:c.instructions+=5;goto B4fe027;
case 0x4fe028:c.instructions+=4;goto B4fe028;
case 0x4fe02d:c.instructions+=3;goto B4fe02d;
case 0x4fe02e:c.instructions+=2;goto B4fe02e;
case 0x4fe02f:c.instructions+=1;goto B4fe02f;
case 0x4fe032:goto L4fe032;
case 0x4fe033:c.instructions+=6;goto B4fe033;
case 0x4fe034:c.instructions+=5;goto B4fe034;
case 0x4fe035:c.instructions+=4;goto B4fe035;
case 0x4fe037:c.instructions+=3;goto B4fe037;
case 0x4fe038:c.instructions+=2;goto B4fe038;
case 0x4fe039:c.instructions+=1;goto B4fe039;
case 0x4fe03c:goto L4fe03c;
case 0x4fe03d:c.instructions+=6;goto B4fe03d;
case 0x4fe03e:c.instructions+=5;goto B4fe03e;
case 0x4fe03f:c.instructions+=4;goto B4fe03f;
case 0x4fe041:c.instructions+=3;goto B4fe041;
case 0x4fe042:c.instructions+=2;goto B4fe042;
case 0x4fe043:c.instructions+=1;goto B4fe043;
case 0x4fe050:goto L4fe050;
case 0x4fe054:c.instructions+=15;goto B4fe054;
case 0x4fe058:c.instructions+=14;goto B4fe058;
case 0x4fe05a:c.instructions+=13;goto B4fe05a;
case 0x4fe05c:c.instructions+=12;goto B4fe05c;
case 0x4fe05f:c.instructions+=11;goto B4fe05f;
case 0x4fe060:c.instructions+=10;goto B4fe060;
case 0x4fe061:c.instructions+=9;goto B4fe061;
case 0x4fe065:c.instructions+=8;goto B4fe065;
case 0x4fe067:c.instructions+=7;goto B4fe067;
case 0x4fe068:c.instructions+=6;goto B4fe068;
case 0x4fe06c:c.instructions+=5;goto B4fe06c;
case 0x4fe06e:c.instructions+=4;goto B4fe06e;
case 0x4fe070:c.instructions+=3;goto B4fe070;
case 0x4fe072:c.instructions+=2;goto B4fe072;
case 0x4fe075:c.instructions+=1;goto B4fe075;
case 0x4fe077:goto L4fe077;
case 0x4fe079:c.instructions+=1;goto B4fe079;
case 0x4fe07b:goto L4fe07b;
case 0x4fe07d:c.instructions+=4;goto B4fe07d;
case 0x4fe07f:c.instructions+=3;goto B4fe07f;
case 0x4fe081:c.instructions+=2;goto B4fe081;
case 0x4fe084:c.instructions+=1;goto B4fe084;
case 0x4fe086:goto L4fe086;
case 0x4fe088:c.instructions+=1;goto B4fe088;
case 0x4fe08a:goto L4fe08a;
case 0x4fe08c:c.instructions+=20;goto B4fe08c;
case 0x4fe090:c.instructions+=19;goto B4fe090;
case 0x4fe092:c.instructions+=18;goto B4fe092;
case 0x4fe094:c.instructions+=17;goto B4fe094;
case 0x4fe096:c.instructions+=16;goto B4fe096;
case 0x4fe098:c.instructions+=15;goto B4fe098;
case 0x4fe09a:c.instructions+=14;goto B4fe09a;
case 0x4fe09c:c.instructions+=13;goto B4fe09c;
case 0x4fe09e:c.instructions+=12;goto B4fe09e;
case 0x4fe0a0:c.instructions+=11;goto B4fe0a0;
case 0x4fe0a4:c.instructions+=10;goto B4fe0a4;
case 0x4fe0a6:c.instructions+=9;goto B4fe0a6;
case 0x4fe0a8:c.instructions+=8;goto B4fe0a8;
case 0x4fe0ab:c.instructions+=7;goto B4fe0ab;
case 0x4fe0ae:c.instructions+=6;goto B4fe0ae;
case 0x4fe0b1:c.instructions+=5;goto B4fe0b1;
case 0x4fe0b4:c.instructions+=4;goto B4fe0b4;
case 0x4fe0b6:c.instructions+=3;goto B4fe0b6;
case 0x4fe0b8:c.instructions+=2;goto B4fe0b8;
case 0x4fe0bb:c.instructions+=1;goto B4fe0bb;
case 0x4fe0bd:goto L4fe0bd;
case 0x4fe0bf:c.instructions+=1;goto B4fe0bf;
case 0x4fe0c1:goto L4fe0c1;
case 0x4fe0c3:c.instructions+=4;goto B4fe0c3;
case 0x4fe0c5:c.instructions+=3;goto B4fe0c5;
case 0x4fe0c7:c.instructions+=2;goto B4fe0c7;
case 0x4fe0ca:c.instructions+=1;goto B4fe0ca;
case 0x4fe0cc:goto L4fe0cc;
case 0x4fe0ce:c.instructions+=1;goto B4fe0ce;
case 0x4fe0d0:goto L4fe0d0;
case 0x4fe0d2:c.instructions+=21;goto B4fe0d2;
case 0x4fe0d6:c.instructions+=20;goto B4fe0d6;
case 0x4fe0d8:c.instructions+=19;goto B4fe0d8;
case 0x4fe0dc:c.instructions+=18;goto B4fe0dc;
case 0x4fe0de:c.instructions+=17;goto B4fe0de;
case 0x4fe0df:c.instructions+=16;goto B4fe0df;
case 0x4fe0e0:c.instructions+=15;goto B4fe0e0;
case 0x4fe0e2:c.instructions+=14;goto B4fe0e2;
case 0x4fe0e5:c.instructions+=13;goto B4fe0e5;
case 0x4fe0e7:c.instructions+=12;goto B4fe0e7;
case 0x4fe0e9:c.instructions+=11;goto B4fe0e9;
case 0x4fe0ea:c.instructions+=10;goto B4fe0ea;
case 0x4fe0ec:c.instructions+=9;goto B4fe0ec;
case 0x4fe0ee:c.instructions+=8;goto B4fe0ee;
case 0x4fe0f0:c.instructions+=7;goto B4fe0f0;
case 0x4fe0f4:c.instructions+=6;goto B4fe0f4;
case 0x4fe0f8:c.instructions+=5;goto B4fe0f8;
case 0x4fe0fb:c.instructions+=4;goto B4fe0fb;
case 0x4fe0fd:c.instructions+=3;goto B4fe0fd;
case 0x4fe0ff:c.instructions+=2;goto B4fe0ff;
case 0x4fe102:c.instructions+=1;goto B4fe102;
case 0x4fe110:goto L4fe110;
case 0x4fe112:c.instructions+=2;goto B4fe112;
case 0x4fe117:c.instructions+=1;goto B4fe117;
case 0x4fe11c:goto L4fe11c;
case 0x4fe120:goto L4fe120;
case 0x4fe122:c.instructions+=2;goto B4fe122;
case 0x4fe127:c.instructions+=1;goto B4fe127;
case 0x4fe12c:goto L4fe12c;
case 0x4fe130:goto L4fe130;
case 0x4fe132:c.instructions+=2;goto B4fe132;
case 0x4fe137:c.instructions+=1;goto B4fe137;
case 0x4fe13c:goto L4fe13c;
case 0x4fe140:goto L4fe140;
case 0x4fe146:c.instructions+=1;goto B4fe146;
case 0x4fe150:goto L4fe150;
case 0x4fe155:c.instructions+=4;goto B4fe155;
case 0x4fe156:c.instructions+=3;goto B4fe156;
case 0x4fe158:c.instructions+=2;goto B4fe158;
case 0x4fe15e:c.instructions+=1;goto B4fe15e;
case 0x4fe160:goto L4fe160;
case 0x4fe161:c.instructions+=1;goto B4fe161;
case 0x4fe166:goto L4fe166;
case 0x4fe169:goto L4fe169;
case 0x4fe16b:c.instructions+=2;goto B4fe16b;
case 0x4fe16c:c.instructions+=1;goto B4fe16c;
case 0x4fe170:goto L4fe170;
case 0x4fe173:c.instructions+=6;goto B4fe173;
case 0x4fe174:c.instructions+=5;goto B4fe174;
case 0x4fe176:c.instructions+=4;goto B4fe176;
case 0x4fe17c:c.instructions+=3;goto B4fe17c;
case 0x4fe180:c.instructions+=2;goto B4fe180;
case 0x4fe184:c.instructions+=1;goto B4fe184;
case 0x4fe189:goto L4fe189;
case 0x4fe18d:c.instructions+=5;goto B4fe18d;
case 0x4fe191:c.instructions+=4;goto B4fe191;
case 0x4fe195:c.instructions+=3;goto B4fe195;
case 0x4fe197:c.instructions+=2;goto B4fe197;
case 0x4fe19a:c.instructions+=1;goto B4fe19a;
case 0x4fe19c:goto L4fe19c;
case 0x4fe1a2:goto L4fe1a2;
case 0x4fe1a8:c.instructions+=1;goto B4fe1a8;
case 0x4fe1ad:goto L4fe1ad;
case 0x4fe1b1:c.instructions+=4;goto B4fe1b1;
case 0x4fe1b5:c.instructions+=3;goto B4fe1b5;
case 0x4fe1b6:c.instructions+=2;goto B4fe1b6;
case 0x4fe1b9:c.instructions+=1;goto B4fe1b9;
case 0x4fe1c0:goto L4fe1c0;
case 0x4fe1c2:c.instructions+=8;goto B4fe1c2;
case 0x4fe1c3:c.instructions+=7;goto B4fe1c3;
case 0x4fe1c5:c.instructions+=6;goto B4fe1c5;
case 0x4fe1c6:c.instructions+=5;goto B4fe1c6;
case 0x4fe1c9:c.instructions+=4;goto B4fe1c9;
case 0x4fe1cc:c.instructions+=3;goto B4fe1cc;
case 0x4fe1cf:c.instructions+=2;goto B4fe1cf;
case 0x4fe1d2:c.instructions+=1;goto B4fe1d2;
case 0x4fe1d7:goto L4fe1d7;
case 0x4fe1d9:goto L4fe1d9;
case 0x4fe1dc:c.instructions+=1;goto B4fe1dc;
case 0x4fe1e1:goto L4fe1e1;
case 0x4fe1e3:goto L4fe1e3;
case 0x4fe1e9:c.instructions+=1;goto B4fe1e9;
case 0x4fe1ee:goto L4fe1ee;
case 0x4fe1ef:c.instructions+=3;goto B4fe1ef;
case 0x4fe1f1:c.instructions+=2;goto B4fe1f1;
case 0x4fe1f2:c.instructions+=1;goto B4fe1f2;
case 0x4fe200:goto L4fe200;
case 0x4fe202:c.instructions+=28;goto B4fe202;
case 0x4fe206:c.instructions+=27;goto B4fe206;
case 0x4fe208:c.instructions+=26;goto B4fe208;
case 0x4fe20a:c.instructions+=25;goto B4fe20a;
case 0x4fe20d:c.instructions+=24;goto B4fe20d;
case 0x4fe210:c.instructions+=23;goto B4fe210;
case 0x4fe213:c.instructions+=22;goto B4fe213;
case 0x4fe216:c.instructions+=21;goto B4fe216;
case 0x4fe219:c.instructions+=20;goto B4fe219;
case 0x4fe21c:c.instructions+=19;goto B4fe21c;
case 0x4fe21f:c.instructions+=18;goto B4fe21f;
case 0x4fe222:c.instructions+=17;goto B4fe222;
case 0x4fe225:c.instructions+=16;goto B4fe225;
case 0x4fe228:c.instructions+=15;goto B4fe228;
case 0x4fe22b:c.instructions+=14;goto B4fe22b;
case 0x4fe22e:c.instructions+=13;goto B4fe22e;
case 0x4fe231:c.instructions+=12;goto B4fe231;
case 0x4fe234:c.instructions+=11;goto B4fe234;
case 0x4fe237:c.instructions+=10;goto B4fe237;
case 0x4fe23a:c.instructions+=9;goto B4fe23a;
case 0x4fe23d:c.instructions+=8;goto B4fe23d;
case 0x4fe240:c.instructions+=7;goto B4fe240;
case 0x4fe243:c.instructions+=6;goto B4fe243;
case 0x4fe246:c.instructions+=5;goto B4fe246;
case 0x4fe249:c.instructions+=4;goto B4fe249;
case 0x4fe24c:c.instructions+=3;goto B4fe24c;
case 0x4fe24f:c.instructions+=2;goto B4fe24f;
case 0x4fe252:c.instructions+=1;goto B4fe252;
case 0x4fe260:goto L4fe260;
case 0x4fe262:c.instructions+=2;goto B4fe262;
case 0x4fe268:c.instructions+=1;goto B4fe268;
case 0x4fe270:goto L4fe270;
case 0x4fe276:c.instructions+=1;goto B4fe276;
case 0x4fe280:goto L4fe280;
case 0x4fe285:c.instructions+=4;goto B4fe285;
case 0x4fe286:c.instructions+=3;goto B4fe286;
case 0x4fe288:c.instructions+=2;goto B4fe288;
case 0x4fe28e:c.instructions+=1;goto B4fe28e;
case 0x4fe290:goto L4fe290;
case 0x4fe291:c.instructions+=1;goto B4fe291;
case 0x4fe296:goto L4fe296;
case 0x4fe299:goto L4fe299;
case 0x4fe29b:c.instructions+=2;goto B4fe29b;
case 0x4fe29c:c.instructions+=1;goto B4fe29c;
case 0x4fe2a0:goto L4fe2a0;
case 0x4fe2a7:c.instructions+=1;goto B4fe2a7;
case 0x4fe2b0:goto L4fe2b0;
case 0x4fe2b4:c.instructions+=2;goto B4fe2b4;
case 0x4fe2b6:c.instructions+=1;goto B4fe2b6;
case 0x4fe2b8:goto L4fe2b8;
case 0x4fe2bb:c.instructions+=1;goto B4fe2bb;
case 0x4fe2bd:goto L4fe2bd;
case 0x4fe2c2:goto L4fe2c2;
case 0x4fe2c6:c.instructions+=7;goto B4fe2c6;
case 0x4fe2ca:c.instructions+=6;goto B4fe2ca;
case 0x4fe2cb:c.instructions+=5;goto B4fe2cb;
case 0x4fe2d1:c.instructions+=4;goto B4fe2d1;
case 0x4fe2d3:c.instructions+=3;goto B4fe2d3;
case 0x4fe2d5:c.instructions+=2;goto B4fe2d5;
case 0x4fe2d6:c.instructions+=1;goto B4fe2d6;
case 0x4fe2d8:goto L4fe2d8;
case 0x4fe2d9:c.instructions+=4;goto B4fe2d9;
case 0x4fe2da:c.instructions+=3;goto B4fe2da;
case 0x4fe2db:c.instructions+=2;goto B4fe2db;
case 0x4fe2e0:c.instructions+=1;goto B4fe2e0;
case 0x4fe2e5:goto L4fe2e5;
case 0x4fe2e6:goto L4fe2e6;
case 0x4fe2ea:c.instructions+=2;goto B4fe2ea;
case 0x4fe2ec:c.instructions+=1;goto B4fe2ec;
case 0x4fe2ee:goto L4fe2ee;
case 0x4fe2f3:goto L4fe2f3;
case 0x4fe2f8:c.instructions+=8;goto B4fe2f8;
case 0x4fe2fb:c.instructions+=7;goto B4fe2fb;
case 0x4fe301:c.instructions+=6;goto B4fe301;
case 0x4fe303:c.instructions+=5;goto B4fe303;
case 0x4fe306:c.instructions+=4;goto B4fe306;
case 0x4fe309:c.instructions+=3;goto B4fe309;
case 0x4fe30a:c.instructions+=2;goto B4fe30a;
case 0x4fe30b:c.instructions+=1;goto B4fe30b;
case 0x4fe310:goto L4fe310;
case 0x4fe313:c.instructions+=1;goto B4fe313;
case 0x4fe320:goto L4fe320;
case 0x4fe325:c.instructions+=2;goto B4fe325;
case 0x4fe327:c.instructions+=1;goto B4fe327;
case 0x4fe329:goto L4fe329;
case 0x4fe32e:goto L4fe32e;
case 0x4fe332:c.instructions+=2;goto B4fe332;
case 0x4fe334:c.instructions+=1;goto B4fe334;
case 0x4fe336:goto L4fe336;
case 0x4fe337:c.instructions+=2;goto B4fe337;
case 0x4fe33c:c.instructions+=1;goto B4fe33c;
case 0x4fe341:goto L4fe341;
case 0x4fe350:goto L4fe350;
case 0x4fe352:c.instructions+=3;goto B4fe352;
case 0x4fe358:c.instructions+=2;goto B4fe358;
case 0x4fe35f:c.instructions+=1;goto B4fe35f;
case 0x4fe360:goto L4fe360;
case 0x4fe364:c.instructions+=5;goto B4fe364;
case 0x4fe366:c.instructions+=4;goto B4fe366;
case 0x4fe368:c.instructions+=3;goto B4fe368;
case 0x4fe369:c.instructions+=2;goto B4fe369;
case 0x4fe36e:c.instructions+=1;goto B4fe36e;
case 0x4fe370:goto L4fe370;
case 0x4fe372:c.instructions+=3;goto B4fe372;
case 0x4fe373:c.instructions+=2;goto B4fe373;
case 0x4fe376:c.instructions+=1;goto B4fe376;
case 0x4fe378:goto L4fe378;
case 0x4fe37f:goto L4fe37f;
case 0x4fe382:c.instructions+=4;goto B4fe382;
case 0x4fe388:c.instructions+=3;goto B4fe388;
case 0x4fe38b:c.instructions+=2;goto B4fe38b;
case 0x4fe38d:c.instructions+=1;goto B4fe38d;
case 0x4fe38f:goto L4fe38f;
case 0x4fe392:c.instructions+=5;goto B4fe392;
case 0x4fe394:c.instructions+=4;goto B4fe394;
case 0x4fe39a:c.instructions+=3;goto B4fe39a;
case 0x4fe39d:c.instructions+=2;goto B4fe39d;
case 0x4fe39f:c.instructions+=1;goto B4fe39f;
case 0x4fe3a1:goto L4fe3a1;
case 0x4fe3a4:goto L4fe3a4;
case 0x4fe3a7:c.instructions+=2;goto B4fe3a7;
case 0x4fe3a9:c.instructions+=1;goto B4fe3a9;
case 0x4fe3ab:goto L4fe3ab;
case 0x4fe3b0:c.instructions+=2;goto B4fe3b0;
case 0x4fe3b2:c.instructions+=1;goto B4fe3b2;
case 0x4fe3b4:goto L4fe3b4;
case 0x4fe3b8:c.instructions+=3;goto B4fe3b8;
case 0x4fe3b9:c.instructions+=2;goto B4fe3b9;
case 0x4fe3ba:c.instructions+=1;goto B4fe3ba;
case 0x4fe3bf:goto L4fe3bf;
case 0x4fe3c2:c.instructions+=2;goto B4fe3c2;
case 0x4fe3c3:c.instructions+=1;goto B4fe3c3;
case 0x4fe3c6:goto L4fe3c6;
case 0x4fe3c7:c.instructions+=5;goto B4fe3c7;
case 0x4fe3cb:c.instructions+=4;goto B4fe3cb;
case 0x4fe3d0:c.instructions+=3;goto B4fe3d0;
case 0x4fe3d1:c.instructions+=2;goto B4fe3d1;
case 0x4fe3d6:c.instructions+=1;goto B4fe3d6;
case 0x4fe3db:goto L4fe3db;
case 0x4fe3dc:c.instructions+=1;goto B4fe3dc;
case 0x4fe3f0:goto L4fe3f0;
case 0x4fe3f5:c.instructions+=2;goto B4fe3f5;
case 0x4fe3f7:c.instructions+=1;goto B4fe3f7;
case 0x4fe3f9:goto L4fe3f9;
case 0x4fe3fd:c.instructions+=2;goto B4fe3fd;
case 0x4fe3fe:c.instructions+=1;goto B4fe3fe;
case 0x4fe403:goto L4fe403;
case 0x4fe406:c.instructions+=1;goto B4fe406;
case 0x4fe409:goto L4fe409;
case 0x4fe40d:c.instructions+=3;goto B4fe40d;
case 0x4fe40e:c.instructions+=2;goto B4fe40e;
case 0x4fe413:c.instructions+=1;goto B4fe413;
case 0x4fe418:goto L4fe418;
case 0x4fe420:goto L4fe420;
case 0x4fe423:c.instructions+=3;goto B4fe423;
case 0x4fe424:c.instructions+=2;goto B4fe424;
case 0x4fe427:c.instructions+=1;goto B4fe427;
case 0x4fe430:goto L4fe430;
case 0x4fe433:c.instructions+=4;goto B4fe433;
case 0x4fe434:c.instructions+=3;goto B4fe434;
case 0x4fe436:c.instructions+=2;goto B4fe436;
case 0x4fe439:c.instructions+=1;goto B4fe439;
case 0x4fe43b:goto L4fe43b;
case 0x4fe43d:c.instructions+=2;goto B4fe43d;
case 0x4fe43f:c.instructions+=1;goto B4fe43f;
case 0x4fe442:goto L4fe442;
case 0x4fe444:goto L4fe444;
case 0x4fe450:goto L4fe450;
case 0x4fe452:c.instructions+=24;goto B4fe452;
case 0x4fe454:c.instructions+=23;goto B4fe454;
case 0x4fe457:c.instructions+=22;goto B4fe457;
case 0x4fe45a:c.instructions+=21;goto B4fe45a;
case 0x4fe45d:c.instructions+=20;goto B4fe45d;
case 0x4fe460:c.instructions+=19;goto B4fe460;
case 0x4fe463:c.instructions+=18;goto B4fe463;
case 0x4fe466:c.instructions+=17;goto B4fe466;
case 0x4fe469:c.instructions+=16;goto B4fe469;
case 0x4fe46c:c.instructions+=15;goto B4fe46c;
case 0x4fe46f:c.instructions+=14;goto B4fe46f;
case 0x4fe472:c.instructions+=13;goto B4fe472;
case 0x4fe475:c.instructions+=12;goto B4fe475;
case 0x4fe478:c.instructions+=11;goto B4fe478;
case 0x4fe47b:c.instructions+=10;goto B4fe47b;
case 0x4fe47e:c.instructions+=9;goto B4fe47e;
case 0x4fe480:c.instructions+=8;goto B4fe480;
case 0x4fe483:c.instructions+=7;goto B4fe483;
case 0x4fe486:c.instructions+=6;goto B4fe486;
case 0x4fe489:c.instructions+=5;goto B4fe489;
case 0x4fe48c:c.instructions+=4;goto B4fe48c;
case 0x4fe48f:c.instructions+=3;goto B4fe48f;
case 0x4fe492:c.instructions+=2;goto B4fe492;
case 0x4fe495:c.instructions+=1;goto B4fe495;
case 0x4fe4a0:goto L4fe4a0;
case 0x4fe4a5:c.instructions+=3;goto B4fe4a5;
case 0x4fe4a7:c.instructions+=2;goto B4fe4a7;
case 0x4fe4aa:c.instructions+=1;goto B4fe4aa;
case 0x4fe4b0:goto L4fe4b0;
case 0x4fe4b5:goto L4fe4b5;
case 0x4fe4b7:c.instructions+=4;goto B4fe4b7;
case 0x4fe4b9:c.instructions+=3;goto B4fe4b9;
case 0x4fe4bc:c.instructions+=2;goto B4fe4bc;
case 0x4fe4bf:c.instructions+=1;goto B4fe4bf;
case 0x4fe4c0:goto L4fe4c0;
case 0x4fe4c3:c.instructions+=8;goto B4fe4c3;
case 0x4fe4c4:c.instructions+=7;goto B4fe4c4;
case 0x4fe4c5:c.instructions+=6;goto B4fe4c5;
case 0x4fe4c6:c.instructions+=5;goto B4fe4c6;
case 0x4fe4ca:c.instructions+=4;goto B4fe4ca;
case 0x4fe4cd:c.instructions+=3;goto B4fe4cd;
case 0x4fe4cf:c.instructions+=2;goto B4fe4cf;
case 0x4fe4d0:c.instructions+=1;goto B4fe4d0;
case 0x4fe4d2:goto L4fe4d2;
case 0x4fe4d4:c.instructions+=1;goto B4fe4d4;
case 0x4fe4d6:goto L4fe4d6;
case 0x4fe4d9:goto L4fe4d9;
case 0x4fe4dc:c.instructions+=3;goto B4fe4dc;
case 0x4fe4de:c.instructions+=2;goto B4fe4de;
case 0x4fe4e0:c.instructions+=1;goto B4fe4e0;
case 0x4fe4e6:goto L4fe4e6;
case 0x4fe4eb:goto L4fe4eb;
case 0x4fe4ee:c.instructions+=2;goto B4fe4ee;
case 0x4fe4f0:c.instructions+=1;goto B4fe4f0;
case 0x4fe4f5:goto L4fe4f5;
case 0x4fe4f8:c.instructions+=6;goto B4fe4f8;
case 0x4fe4fb:c.instructions+=5;goto B4fe4fb;
case 0x4fe4fe:c.instructions+=4;goto B4fe4fe;
case 0x4fe501:c.instructions+=3;goto B4fe501;
case 0x4fe503:c.instructions+=2;goto B4fe503;
case 0x4fe505:c.instructions+=1;goto B4fe505;
case 0x4fe50a:goto L4fe50a;
case 0x4fe50d:c.instructions+=3;goto B4fe50d;
case 0x4fe50f:c.instructions+=2;goto B4fe50f;
case 0x4fe513:c.instructions+=1;goto B4fe513;
case 0x4fe518:goto L4fe518;
case 0x4fe51b:c.instructions+=14;goto B4fe51b;
case 0x4fe51e:c.instructions+=13;goto B4fe51e;
case 0x4fe51f:c.instructions+=12;goto B4fe51f;
case 0x4fe521:c.instructions+=11;goto B4fe521;
case 0x4fe523:c.instructions+=10;goto B4fe523;
case 0x4fe527:c.instructions+=9;goto B4fe527;
case 0x4fe52a:c.instructions+=8;goto B4fe52a;
case 0x4fe52b:c.instructions+=7;goto B4fe52b;
case 0x4fe52d:c.instructions+=6;goto B4fe52d;
case 0x4fe52f:c.instructions+=5;goto B4fe52f;
case 0x4fe531:c.instructions+=4;goto B4fe531;
case 0x4fe534:c.instructions+=3;goto B4fe534;
case 0x4fe536:c.instructions+=2;goto B4fe536;
case 0x4fe538:c.instructions+=1;goto B4fe538;
case 0x4fe53d:goto L4fe53d;
case 0x4fe540:c.instructions+=6;goto B4fe540;
case 0x4fe543:c.instructions+=5;goto B4fe543;
case 0x4fe546:c.instructions+=4;goto B4fe546;
case 0x4fe549:c.instructions+=3;goto B4fe549;
case 0x4fe54b:c.instructions+=2;goto B4fe54b;
case 0x4fe54d:c.instructions+=1;goto B4fe54d;
case 0x4fe552:goto L4fe552;
case 0x4fe555:c.instructions+=10;goto B4fe555;
case 0x4fe559:c.instructions+=9;goto B4fe559;
case 0x4fe55a:c.instructions+=8;goto B4fe55a;
case 0x4fe55c:c.instructions+=7;goto B4fe55c;
case 0x4fe55e:c.instructions+=6;goto B4fe55e;
case 0x4fe561:c.instructions+=5;goto B4fe561;
case 0x4fe564:c.instructions+=4;goto B4fe564;
case 0x4fe567:c.instructions+=3;goto B4fe567;
case 0x4fe569:c.instructions+=2;goto B4fe569;
case 0x4fe56b:c.instructions+=1;goto B4fe56b;
case 0x4fe570:goto L4fe570;
case 0x4fe573:c.instructions+=5;goto B4fe573;
case 0x4fe577:c.instructions+=4;goto B4fe577;
case 0x4fe57a:c.instructions+=3;goto B4fe57a;
case 0x4fe57c:c.instructions+=2;goto B4fe57c;
case 0x4fe580:c.instructions+=1;goto B4fe580;
case 0x4fe582:goto L4fe582;
case 0x4fe586:c.instructions+=1;goto B4fe586;
case 0x4fe588:goto L4fe588;
case 0x4fe58a:c.instructions+=1;goto B4fe58a;
case 0x4fe58e:goto L4fe58e;
case 0x4fe590:c.instructions+=1;goto B4fe590;
case 0x4fe595:goto L4fe595;
case 0x4fe598:c.instructions+=3;goto B4fe598;
case 0x4fe59a:c.instructions+=2;goto B4fe59a;
case 0x4fe59e:c.instructions+=1;goto B4fe59e;
case 0x4fe5a3:goto L4fe5a3;
case 0x4fe5a6:c.instructions+=3;goto B4fe5a6;
case 0x4fe5aa:c.instructions+=2;goto B4fe5aa;
case 0x4fe5ac:c.instructions+=1;goto B4fe5ac;
case 0x4fe5b1:goto L4fe5b1;
case 0x4fe5b5:c.instructions+=14;goto B4fe5b5;
case 0x4fe5b9:c.instructions+=13;goto B4fe5b9;
case 0x4fe5ba:c.instructions+=12;goto B4fe5ba;
case 0x4fe5c1:c.instructions+=11;goto B4fe5c1;
case 0x4fe5c5:c.instructions+=10;goto B4fe5c5;
case 0x4fe5c6:c.instructions+=9;goto B4fe5c6;
case 0x4fe5ca:c.instructions+=8;goto B4fe5ca;
case 0x4fe5cb:c.instructions+=7;goto B4fe5cb;
case 0x4fe5cf:c.instructions+=6;goto B4fe5cf;
case 0x4fe5d0:c.instructions+=5;goto B4fe5d0;
case 0x4fe5d3:c.instructions+=4;goto B4fe5d3;
case 0x4fe5d4:c.instructions+=3;goto B4fe5d4;
case 0x4fe5d7:c.instructions+=2;goto B4fe5d7;
case 0x4fe5d8:c.instructions+=1;goto B4fe5d8;
case 0x4fe5dd:goto L4fe5dd;
case 0x4fe5e2:goto L4fe5e2;
case 0x4fe5e5:c.instructions+=2;goto B4fe5e5;
case 0x4fe5e7:c.instructions+=1;goto B4fe5e7;
case 0x4fe5ec:goto L4fe5ec;
case 0x4fe5ef:c.instructions+=4;goto B4fe5ef;
case 0x4fe5f2:c.instructions+=3;goto B4fe5f2;
case 0x4fe5f4:c.instructions+=2;goto B4fe5f4;
case 0x4fe5f6:c.instructions+=1;goto B4fe5f6;
case 0x4fe5fb:goto L4fe5fb;
case 0x4fe5fe:c.instructions+=3;goto B4fe5fe;
case 0x4fe600:c.instructions+=2;goto B4fe600;
case 0x4fe604:c.instructions+=1;goto B4fe604;
case 0x4fe609:goto L4fe609;
case 0x4fe60c:c.instructions+=12;goto B4fe60c;
case 0x4fe610:c.instructions+=11;goto B4fe610;
case 0x4fe611:c.instructions+=10;goto B4fe611;
case 0x4fe613:c.instructions+=9;goto B4fe613;
case 0x4fe615:c.instructions+=8;goto B4fe615;
case 0x4fe619:c.instructions+=7;goto B4fe619;
case 0x4fe61a:c.instructions+=6;goto B4fe61a;
case 0x4fe61c:c.instructions+=5;goto B4fe61c;
case 0x4fe61e:c.instructions+=4;goto B4fe61e;
case 0x4fe620:c.instructions+=3;goto B4fe620;
case 0x4fe623:c.instructions+=2;goto B4fe623;
case 0x4fe625:c.instructions+=1;goto B4fe625;
case 0x4fe62a:goto L4fe62a;
case 0x4fe62d:c.instructions+=5;goto B4fe62d;
case 0x4fe631:c.instructions+=4;goto B4fe631;
case 0x4fe635:c.instructions+=3;goto B4fe635;
case 0x4fe638:c.instructions+=2;goto B4fe638;
case 0x4fe63a:c.instructions+=1;goto B4fe63a;
case 0x4fe63c:goto L4fe63c;
case 0x4fe640:c.instructions+=1;goto B4fe640;
case 0x4fe642:goto L4fe642;
case 0x4fe644:c.instructions+=1;goto B4fe644;
case 0x4fe648:goto L4fe648;
case 0x4fe64a:c.instructions+=1;goto B4fe64a;
case 0x4fe64f:goto L4fe64f;
case 0x4fe652:c.instructions+=3;goto B4fe652;
case 0x4fe654:c.instructions+=2;goto B4fe654;
case 0x4fe658:c.instructions+=1;goto B4fe658;
case 0x4fe65d:goto L4fe65d;
case 0x4fe660:c.instructions+=3;goto B4fe660;
case 0x4fe662:c.instructions+=2;goto B4fe662;
case 0x4fe666:c.instructions+=1;goto B4fe666;
case 0x4fe66b:goto L4fe66b;
case 0x4fe66f:c.instructions+=12;goto B4fe66f;
case 0x4fe673:c.instructions+=11;goto B4fe673;
case 0x4fe676:c.instructions+=10;goto B4fe676;
case 0x4fe677:c.instructions+=9;goto B4fe677;
case 0x4fe67e:c.instructions+=8;goto B4fe67e;
case 0x4fe682:c.instructions+=7;goto B4fe682;
case 0x4fe683:c.instructions+=6;goto B4fe683;
case 0x4fe687:c.instructions+=5;goto B4fe687;
case 0x4fe688:c.instructions+=4;goto B4fe688;
case 0x4fe68c:c.instructions+=3;goto B4fe68c;
case 0x4fe68d:c.instructions+=2;goto B4fe68d;
case 0x4fe68e:c.instructions+=1;goto B4fe68e;
case 0x4fe68f:goto L4fe68f;
case 0x4fe690:c.instructions+=3;goto B4fe690;
case 0x4fe691:c.instructions+=2;goto B4fe691;
case 0x4fe692:c.instructions+=1;goto B4fe692;
case 0x4fe697:goto L4fe697;
case 0x4fe69a:c.instructions+=6;goto B4fe69a;
case 0x4fe69b:c.instructions+=5;goto B4fe69b;
case 0x4fe69c:c.instructions+=4;goto B4fe69c;
case 0x4fe69d:c.instructions+=3;goto B4fe69d;
case 0x4fe69e:c.instructions+=2;goto B4fe69e;
case 0x4fe6a1:c.instructions+=1;goto B4fe6a1;
case 0x4fe6b0:goto L4fe6b0;
case 0x4fe6b3:c.instructions+=64;goto B4fe6b3;
case 0x4fe6b7:c.instructions+=63;goto B4fe6b7;
case 0x4fe6ba:c.instructions+=62;goto B4fe6ba;
case 0x4fe6bd:c.instructions+=61;goto B4fe6bd;
case 0x4fe6c0:c.instructions+=60;goto B4fe6c0;
case 0x4fe6c3:c.instructions+=59;goto B4fe6c3;
case 0x4fe6c5:c.instructions+=58;goto B4fe6c5;
case 0x4fe6c7:c.instructions+=57;goto B4fe6c7;
case 0x4fe6ca:c.instructions+=56;goto B4fe6ca;
case 0x4fe6cc:c.instructions+=55;goto B4fe6cc;
case 0x4fe6cf:c.instructions+=54;goto B4fe6cf;
case 0x4fe6d1:c.instructions+=53;goto B4fe6d1;
case 0x4fe6d4:c.instructions+=52;goto B4fe6d4;
case 0x4fe6d6:c.instructions+=51;goto B4fe6d6;
case 0x4fe6d9:c.instructions+=50;goto B4fe6d9;
case 0x4fe6db:c.instructions+=49;goto B4fe6db;
case 0x4fe6dd:c.instructions+=48;goto B4fe6dd;
case 0x4fe6e1:c.instructions+=47;goto B4fe6e1;
case 0x4fe6e4:c.instructions+=46;goto B4fe6e4;
case 0x4fe6e6:c.instructions+=45;goto B4fe6e6;
case 0x4fe6e9:c.instructions+=44;goto B4fe6e9;
case 0x4fe6eb:c.instructions+=43;goto B4fe6eb;
case 0x4fe6ed:c.instructions+=42;goto B4fe6ed;
case 0x4fe6ef:c.instructions+=41;goto B4fe6ef;
case 0x4fe6f3:c.instructions+=40;goto B4fe6f3;
case 0x4fe6f7:c.instructions+=39;goto B4fe6f7;
case 0x4fe6fa:c.instructions+=38;goto B4fe6fa;
case 0x4fe6fd:c.instructions+=37;goto B4fe6fd;
case 0x4fe700:c.instructions+=36;goto B4fe700;
case 0x4fe703:c.instructions+=35;goto B4fe703;
case 0x4fe705:c.instructions+=34;goto B4fe705;
case 0x4fe707:c.instructions+=33;goto B4fe707;
case 0x4fe70b:c.instructions+=32;goto B4fe70b;
case 0x4fe70d:c.instructions+=31;goto B4fe70d;
case 0x4fe70f:c.instructions+=30;goto B4fe70f;
case 0x4fe712:c.instructions+=29;goto B4fe712;
case 0x4fe715:c.instructions+=28;goto B4fe715;
case 0x4fe718:c.instructions+=27;goto B4fe718;
case 0x4fe71b:c.instructions+=26;goto B4fe71b;
case 0x4fe71d:c.instructions+=25;goto B4fe71d;
case 0x4fe721:c.instructions+=24;goto B4fe721;
case 0x4fe725:c.instructions+=23;goto B4fe725;
case 0x4fe728:c.instructions+=22;goto B4fe728;
case 0x4fe72b:c.instructions+=21;goto B4fe72b;
case 0x4fe72d:c.instructions+=20;goto B4fe72d;
case 0x4fe72f:c.instructions+=19;goto B4fe72f;
case 0x4fe732:c.instructions+=18;goto B4fe732;
case 0x4fe735:c.instructions+=17;goto B4fe735;
case 0x4fe737:c.instructions+=16;goto B4fe737;
case 0x4fe73a:c.instructions+=15;goto B4fe73a;
case 0x4fe73e:c.instructions+=14;goto B4fe73e;
case 0x4fe741:c.instructions+=13;goto B4fe741;
case 0x4fe743:c.instructions+=12;goto B4fe743;
case 0x4fe745:c.instructions+=11;goto B4fe745;
case 0x4fe749:c.instructions+=10;goto B4fe749;
case 0x4fe74b:c.instructions+=9;goto B4fe74b;
case 0x4fe74e:c.instructions+=8;goto B4fe74e;
case 0x4fe752:c.instructions+=7;goto B4fe752;
case 0x4fe755:c.instructions+=6;goto B4fe755;
case 0x4fe757:c.instructions+=5;goto B4fe757;
case 0x4fe75b:c.instructions+=4;goto B4fe75b;
case 0x4fe75f:c.instructions+=3;goto B4fe75f;
case 0x4fe762:c.instructions+=2;goto B4fe762;
case 0x4fe765:c.instructions+=1;goto B4fe765;
case 0x4fe770:goto L4fe770;
case 0x4fe773:c.instructions+=25;goto B4fe773;
case 0x4fe777:c.instructions+=24;goto B4fe777;
case 0x4fe77b:c.instructions+=23;goto B4fe77b;
case 0x4fe77d:c.instructions+=22;goto B4fe77d;
case 0x4fe781:c.instructions+=21;goto B4fe781;
case 0x4fe785:c.instructions+=20;goto B4fe785;
case 0x4fe789:c.instructions+=19;goto B4fe789;
case 0x4fe78c:c.instructions+=18;goto B4fe78c;
case 0x4fe790:c.instructions+=17;goto B4fe790;
case 0x4fe794:c.instructions+=16;goto B4fe794;
case 0x4fe797:c.instructions+=15;goto B4fe797;
case 0x4fe79b:c.instructions+=14;goto B4fe79b;
case 0x4fe79f:c.instructions+=13;goto B4fe79f;
case 0x4fe7a2:c.instructions+=12;goto B4fe7a2;
case 0x4fe7a6:c.instructions+=11;goto B4fe7a6;
case 0x4fe7a8:c.instructions+=10;goto B4fe7a8;
case 0x4fe7aa:c.instructions+=9;goto B4fe7aa;
case 0x4fe7ae:c.instructions+=8;goto B4fe7ae;
case 0x4fe7b2:c.instructions+=7;goto B4fe7b2;
case 0x4fe7b5:c.instructions+=6;goto B4fe7b5;
case 0x4fe7b9:c.instructions+=5;goto B4fe7b9;
case 0x4fe7bc:c.instructions+=4;goto B4fe7bc;
case 0x4fe7c0:c.instructions+=3;goto B4fe7c0;
case 0x4fe7c3:c.instructions+=2;goto B4fe7c3;
case 0x4fe7c6:c.instructions+=1;goto B4fe7c6;
case 0x4fe7d0:goto L4fe7d0;
case 0x4fe7d3:c.instructions+=26;goto B4fe7d3;
case 0x4fe7d7:c.instructions+=25;goto B4fe7d7;
case 0x4fe7d9:c.instructions+=24;goto B4fe7d9;
case 0x4fe7dd:c.instructions+=23;goto B4fe7dd;
case 0x4fe7df:c.instructions+=22;goto B4fe7df;
case 0x4fe7e3:c.instructions+=21;goto B4fe7e3;
case 0x4fe7e7:c.instructions+=20;goto B4fe7e7;
case 0x4fe7ea:c.instructions+=19;goto B4fe7ea;
case 0x4fe7ed:c.instructions+=18;goto B4fe7ed;
case 0x4fe7f1:c.instructions+=17;goto B4fe7f1;
case 0x4fe7f4:c.instructions+=16;goto B4fe7f4;
case 0x4fe7f7:c.instructions+=15;goto B4fe7f7;
case 0x4fe7fb:c.instructions+=14;goto B4fe7fb;
case 0x4fe7fe:c.instructions+=13;goto B4fe7fe;
case 0x4fe802:c.instructions+=12;goto B4fe802;
case 0x4fe805:c.instructions+=11;goto B4fe805;
case 0x4fe807:c.instructions+=10;goto B4fe807;
case 0x4fe809:c.instructions+=9;goto B4fe809;
case 0x4fe80d:c.instructions+=8;goto B4fe80d;
case 0x4fe810:c.instructions+=7;goto B4fe810;
case 0x4fe814:c.instructions+=6;goto B4fe814;
case 0x4fe818:c.instructions+=5;goto B4fe818;
case 0x4fe81b:c.instructions+=4;goto B4fe81b;
case 0x4fe81f:c.instructions+=3;goto B4fe81f;
case 0x4fe822:c.instructions+=2;goto B4fe822;
case 0x4fe825:c.instructions+=1;goto B4fe825;
case 0x4fe830:goto L4fe830;
case 0x4fe833:c.instructions+=26;goto B4fe833;
case 0x4fe837:c.instructions+=25;goto B4fe837;
case 0x4fe839:c.instructions+=24;goto B4fe839;
case 0x4fe83d:c.instructions+=23;goto B4fe83d;
case 0x4fe83f:c.instructions+=22;goto B4fe83f;
case 0x4fe843:c.instructions+=21;goto B4fe843;
case 0x4fe847:c.instructions+=20;goto B4fe847;
case 0x4fe84a:c.instructions+=19;goto B4fe84a;
case 0x4fe84d:c.instructions+=18;goto B4fe84d;
case 0x4fe851:c.instructions+=17;goto B4fe851;
case 0x4fe854:c.instructions+=16;goto B4fe854;
case 0x4fe857:c.instructions+=15;goto B4fe857;
case 0x4fe85b:c.instructions+=14;goto B4fe85b;
case 0x4fe85e:c.instructions+=13;goto B4fe85e;
case 0x4fe862:c.instructions+=12;goto B4fe862;
case 0x4fe865:c.instructions+=11;goto B4fe865;
case 0x4fe867:c.instructions+=10;goto B4fe867;
case 0x4fe869:c.instructions+=9;goto B4fe869;
case 0x4fe86d:c.instructions+=8;goto B4fe86d;
case 0x4fe870:c.instructions+=7;goto B4fe870;
case 0x4fe874:c.instructions+=6;goto B4fe874;
case 0x4fe878:c.instructions+=5;goto B4fe878;
case 0x4fe87b:c.instructions+=4;goto B4fe87b;
case 0x4fe87f:c.instructions+=3;goto B4fe87f;
case 0x4fe882:c.instructions+=2;goto B4fe882;
case 0x4fe885:c.instructions+=1;goto B4fe885;
case 0x4fe890:goto L4fe890;
case 0x4fe893:c.instructions+=2;goto B4fe893;
case 0x4fe895:c.instructions+=1;goto B4fe895;
case 0x4fe897:goto L4fe897;
case 0x4fe89a:c.instructions+=3;goto B4fe89a;
case 0x4fe89d:c.instructions+=2;goto B4fe89d;
case 0x4fe89f:c.instructions+=1;goto B4fe89f;
case 0x4fe8a1:goto L4fe8a1;
case 0x4fe8a4:c.instructions+=1;goto B4fe8a4;
case 0x4fe8b0:goto L4fe8b0;
case 0x4fe8b2:c.instructions+=5;goto B4fe8b2;
case 0x4fe8b7:c.instructions+=4;goto B4fe8b7;
case 0x4fe8ba:c.instructions+=3;goto B4fe8ba;
case 0x4fe8bd:c.instructions+=2;goto B4fe8bd;
case 0x4fe8c3:c.instructions+=1;goto B4fe8c3;
case 0x4fe8d0:goto L4fe8d0;
case 0x4fe8d3:c.instructions+=2;goto B4fe8d3;
case 0x4fe8d5:c.instructions+=1;goto B4fe8d5;
case 0x4fe8d7:goto L4fe8d7;
case 0x4fe8da:c.instructions+=1;goto B4fe8da;
case 0x4fe8df:goto L4fe8df;
case 0x4fe8e2:c.instructions+=1;goto B4fe8e2;
case 0x4fe8f0:goto L4fe8f0;
case 0x4fe8f1:c.instructions+=4;goto B4fe8f1;
case 0x4fe8f3:c.instructions+=3;goto B4fe8f3;
case 0x4fe8f6:c.instructions+=2;goto B4fe8f6;
case 0x4fe8f7:c.instructions+=1;goto B4fe8f7;
case 0x4fe8fc:goto L4fe8fc;
case 0x4fe8ff:c.instructions+=3;goto B4fe8ff;
case 0x4fe906:c.instructions+=2;goto B4fe906;
case 0x4fe907:c.instructions+=1;goto B4fe907;
case 0x4fe910:goto L4fe910;
case 0x4fe912:c.instructions+=5;goto B4fe912;
case 0x4fe914:c.instructions+=4;goto B4fe914;
case 0x4fe916:c.instructions+=3;goto B4fe916;
case 0x4fe919:c.instructions+=2;goto B4fe919;
case 0x4fe91c:c.instructions+=1;goto B4fe91c;
case 0x4fe920:goto L4fe920;
case 0x4fe922:c.instructions+=9;goto B4fe922;
case 0x4fe927:c.instructions+=8;goto B4fe927;
case 0x4fe92a:c.instructions+=7;goto B4fe92a;
case 0x4fe92d:c.instructions+=6;goto B4fe92d;
case 0x4fe92f:c.instructions+=5;goto B4fe92f;
case 0x4fe935:c.instructions+=4;goto B4fe935;
case 0x4fe938:c.instructions+=3;goto B4fe938;
case 0x4fe93b:c.instructions+=2;goto B4fe93b;
case 0x4fe93e:c.instructions+=1;goto B4fe93e;
case 0x4fe940:goto L4fe940;
case 0x4fe942:c.instructions+=3;goto B4fe942;
case 0x4fe946:c.instructions+=2;goto B4fe946;
case 0x4fe949:c.instructions+=1;goto B4fe949;
case 0x4fe94b:goto L4fe94b;
case 0x4fe952:c.instructions+=1;goto B4fe952;
case 0x4fe955:goto L4fe955;
case 0x4fe95b:c.instructions+=2;goto B4fe95b;
case 0x4fe95d:c.instructions+=1;goto B4fe95d;
case 0x4fe95f:goto L4fe95f;
case 0x4fe961:c.instructions+=2;goto B4fe961;
case 0x4fe965:c.instructions+=1;goto B4fe965;
case 0x4fe967:goto L4fe967;
case 0x4fe970:goto L4fe970;
case 0x4fe971:c.instructions+=4;goto B4fe971;
case 0x4fe972:c.instructions+=3;goto B4fe972;
case 0x4fe973:c.instructions+=2;goto B4fe973;
case 0x4fe978:c.instructions+=1;goto B4fe978;
case 0x4fe97d:goto L4fe97d;
case 0x4fe97f:c.instructions+=3;goto B4fe97f;
case 0x4fe981:c.instructions+=2;goto B4fe981;
case 0x4fe986:c.instructions+=1;goto B4fe986;
case 0x4fe988:goto L4fe988;
case 0x4fe98a:goto L4fe98a;
case 0x4fe98e:c.instructions+=4;goto B4fe98e;
case 0x4fe991:c.instructions+=3;goto B4fe991;
case 0x4fe993:c.instructions+=2;goto B4fe993;
case 0x4fe995:c.instructions+=1;goto B4fe995;
case 0x4fe997:goto L4fe997;
case 0x4fe998:c.instructions+=2;goto B4fe998;
case 0x4fe99c:c.instructions+=1;goto B4fe99c;
case 0x4fe9a0:goto L4fe9a0;
case 0x4fe9a2:goto L4fe9a2;
case 0x4fe9a4:c.instructions+=1;goto B4fe9a4;
case 0x4fe9a9:goto L4fe9a9;
case 0x4fe9ac:c.instructions+=3;goto B4fe9ac;
case 0x4fe9af:c.instructions+=2;goto B4fe9af;
case 0x4fe9b1:c.instructions+=1;goto B4fe9b1;
case 0x4fe9b3:goto L4fe9b3;
case 0x4fe9b4:c.instructions+=2;goto B4fe9b4;
case 0x4fe9b7:c.instructions+=1;goto B4fe9b7;
case 0x4fe9b9:goto L4fe9b9;
case 0x4fe9bb:goto L4fe9bb;
case 0x4fe9c2:c.instructions+=2;goto B4fe9c2;
case 0x4fe9c6:c.instructions+=1;goto B4fe9c6;
case 0x4fe9cd:goto L4fe9cd;
case 0x4fe9d1:c.instructions+=3;goto B4fe9d1;
case 0x4fe9d2:c.instructions+=2;goto B4fe9d2;
case 0x4fe9d4:c.instructions+=1;goto B4fe9d4;
case 0x4fe9d6:goto L4fe9d6;
case 0x4fe9d7:goto L4fe9d7;
case 0x4fe9d8:c.instructions+=1;goto B4fe9d8;
case 0x4fe9dd:goto L4fe9dd;
case 0x4fe9e0:c.instructions+=4;goto B4fe9e0;
case 0x4fe9e1:c.instructions+=3;goto B4fe9e1;
case 0x4fe9e2:c.instructions+=2;goto B4fe9e2;
case 0x4fe9e3:c.instructions+=1;goto B4fe9e3;
case 0x4fe9f0:goto L4fe9f0;
case 0x4fe9f1:c.instructions+=13;goto B4fe9f1;
case 0x4fe9f3:c.instructions+=12;goto B4fe9f3;
case 0x4fe9f6:c.instructions+=11;goto B4fe9f6;
case 0x4fe9f8:c.instructions+=10;goto B4fe9f8;
case 0x4fe9fd:c.instructions+=9;goto B4fe9fd;
case 0x4fea03:c.instructions+=8;goto B4fea03;
case 0x4fea04:c.instructions+=7;goto B4fea04;
case 0x4fea0b:c.instructions+=6;goto B4fea0b;
case 0x4fea11:c.instructions+=5;goto B4fea11;
case 0x4fea16:c.instructions+=4;goto B4fea16;
case 0x4fea18:c.instructions+=3;goto B4fea18;
case 0x4fea19:c.instructions+=2;goto B4fea19;
case 0x4fea1a:c.instructions+=1;goto B4fea1a;
case 0x4fea20:goto L4fea20;
case 0x4fea25:c.instructions+=2;goto B4fea25;
case 0x4fea27:c.instructions+=1;goto B4fea27;
case 0x4fea29:goto L4fea29;
case 0x4fea2b:c.instructions+=1;goto B4fea2b;
case 0x4fea2d:goto L4fea2d;
case 0x4fea32:c.instructions+=2;goto B4fea32;
case 0x4fea33:c.instructions+=1;goto B4fea33;
case 0x4fea38:goto L4fea38;
case 0x4fea3e:c.instructions+=6;goto B4fea3e;
case 0x4fea44:c.instructions+=5;goto B4fea44;
case 0x4fea46:c.instructions+=4;goto B4fea46;
case 0x4fea4e:c.instructions+=3;goto B4fea4e;
case 0x4fea51:c.instructions+=2;goto B4fea51;
case 0x4fea54:c.instructions+=1;goto B4fea54;
case 0x4fea56:goto L4fea56;
case 0x4fea5b:goto L4fea5b;
case 0x4fea60:c.instructions+=1;goto B4fea60;
case 0x4fea65:goto L4fea65;
case 0x4fea67:c.instructions+=2;goto B4fea67;
case 0x4fea69:c.instructions+=1;goto B4fea69;
case 0x4fea6b:goto L4fea6b;
case 0x4fea70:goto L4fea70;
case 0x4fea75:c.instructions+=1;goto B4fea75;
case 0x4fea7a:goto L4fea7a;
case 0x4fea7c:c.instructions+=1;goto B4fea7c;
case 0x4fea7e:goto L4fea7e;
case 0x4fea80:c.instructions+=8;goto B4fea80;
case 0x4fea82:c.instructions+=7;goto B4fea82;
case 0x4fea87:c.instructions+=6;goto B4fea87;
case 0x4fea88:c.instructions+=5;goto B4fea88;
case 0x4fea8a:c.instructions+=4;goto B4fea8a;
case 0x4fea8d:c.instructions+=3;goto B4fea8d;
case 0x4fea8e:c.instructions+=2;goto B4fea8e;
case 0x4fea92:c.instructions+=1;goto B4fea92;
case 0x4fea97:goto L4fea97;
case 0x4fea9b:c.instructions+=4;goto B4fea9b;
case 0x4fea9c:c.instructions+=3;goto B4fea9c;
case 0x4feaa1:c.instructions+=2;goto B4feaa1;
case 0x4feaac:c.instructions+=1;goto B4feaac;
case 0x4feab1:goto L4feab1;
case 0x4feab8:c.instructions+=2;goto B4feab8;
case 0x4feac3:c.instructions+=1;goto B4feac3;
case 0x4feac8:goto L4feac8;
case 0x4feac9:c.instructions+=2;goto B4feac9;
case 0x4feacb:c.instructions+=1;goto B4feacb;
case 0x4feacd:goto L4feacd;
case 0x4fead4:c.instructions+=6;goto B4fead4;
case 0x4fead5:c.instructions+=5;goto B4fead5;
case 0x4feadc:c.instructions+=4;goto B4feadc;
case 0x4feadd:c.instructions+=3;goto B4feadd;
case 0x4feadf:c.instructions+=2;goto B4feadf;
case 0x4feae0:c.instructions+=1;goto B4feae0;
case 0x4feaf0:goto L4feaf0;
case 0x4feaf4:c.instructions+=3;goto B4feaf4;
case 0x4feaf7:c.instructions+=2;goto B4feaf7;
case 0x4feaf9:c.instructions+=1;goto B4feaf9;
case 0x4feafb:goto L4feafb;
case 0x4feafd:c.instructions+=2;goto B4feafd;
case 0x4feb02:c.instructions+=1;goto B4feb02;
case 0x4feb07:goto L4feb07;
case 0x4feb0a:c.instructions+=1;goto B4feb0a;
case 0x4feb0e:goto L4feb0e;
case 0x4feb0f:c.instructions+=4;goto B4feb0f;
case 0x4feb10:c.instructions+=3;goto B4feb10;
case 0x4feb16:c.instructions+=2;goto B4feb16;
case 0x4feb19:c.instructions+=1;goto B4feb19;
case 0x4feb1b:goto L4feb1b;
case 0x4feb1f:c.instructions+=2;goto B4feb1f;
case 0x4feb22:c.instructions+=1;goto B4feb22;
case 0x4feb24:goto L4feb24;
case 0x4feb2a:goto L4feb2a;
case 0x4feb2d:c.instructions+=1;goto B4feb2d;
case 0x4feb2f:goto L4feb2f;
case 0x4feb33:goto L4feb33;
case 0x4feb35:c.instructions+=5;goto B4feb35;
case 0x4feb37:c.instructions+=4;goto B4feb37;
case 0x4feb39:c.instructions+=3;goto B4feb39;
case 0x4feb3a:c.instructions+=2;goto B4feb3a;
case 0x4feb3c:c.instructions+=1;goto B4feb3c;
case 0x4feb41:goto L4feb41;
case 0x4feb43:c.instructions+=2;goto B4feb43;
case 0x4feb45:c.instructions+=1;goto B4feb45;
case 0x4feb4a:goto L4feb4a;
case 0x4feb4e:c.instructions+=3;goto B4feb4e;
case 0x4feb4f:c.instructions+=2;goto B4feb4f;
case 0x4feb51:c.instructions+=1;goto B4feb51;
case 0x4feb56:goto L4feb56;
case 0x4feb57:c.instructions+=3;goto B4feb57;
case 0x4feb58:c.instructions+=2;goto B4feb58;
case 0x4feb5b:c.instructions+=1;goto B4feb5b;
case 0x4feb5c:goto L4feb5c;
case 0x4feb5f:c.instructions+=1;goto B4feb5f;
case 0x4feb61:goto L4feb61;
case 0x4feb67:c.instructions+=1;goto B4feb67;
case 0x4feb69:goto L4feb69;
case 0x4feb6c:c.instructions+=1;goto B4feb6c;
case 0x4feb6e:goto L4feb6e;
case 0x4feb74:c.instructions+=1;goto B4feb74;
case 0x4feb76:goto L4feb76;
case 0x4feb79:c.instructions+=1;goto B4feb79;
case 0x4feb7b:goto L4feb7b;
case 0x4feb81:c.instructions+=1;goto B4feb81;
case 0x4feb83:goto L4feb83;
case 0x4feb86:c.instructions+=1;goto B4feb86;
case 0x4feb88:goto L4feb88;
case 0x4feb8e:c.instructions+=2;goto B4feb8e;
case 0x4feb91:c.instructions+=1;goto B4feb91;
case 0x4feb93:goto L4feb93;
case 0x4feb94:c.instructions+=2;goto B4feb94;
case 0x4feb95:c.instructions+=1;goto B4feb95;
case 0x4feb9a:goto L4feb9a;
case 0x4feb9c:c.instructions+=3;goto B4feb9c;
case 0x4feba1:c.instructions+=2;goto B4feba1;
case 0x4feba6:c.instructions+=1;goto B4feba6;
case 0x4feba8:goto L4feba8;
case 0x4febad:goto L4febad;
case 0x4febb1:c.instructions+=2;goto B4febb1;
case 0x4febb3:c.instructions+=1;goto B4febb3;
case 0x4febb5:goto L4febb5;
case 0x4febb9:c.instructions+=6;goto B4febb9;
case 0x4febbb:c.instructions+=5;goto B4febbb;
case 0x4febc1:c.instructions+=4;goto B4febc1;
case 0x4febc7:c.instructions+=3;goto B4febc7;
case 0x4febce:c.instructions+=2;goto B4febce;
case 0x4febd0:c.instructions+=1;goto B4febd0;
case 0x4febd2:goto L4febd2;
case 0x4febd4:goto L4febd4;
case 0x4febd8:c.instructions+=1;goto B4febd8;
case 0x4febda:goto L4febda;
case 0x4febdf:c.instructions+=1;goto B4febdf;
case 0x4febe4:goto L4febe4;
case 0x4febeb:c.instructions+=2;goto B4febeb;
case 0x4febec:c.instructions+=1;goto B4febec;
case 0x4febf1:goto L4febf1;
case 0x4febf3:c.instructions+=4;goto B4febf3;
case 0x4febf6:c.instructions+=3;goto B4febf6;
case 0x4febf8:c.instructions+=2;goto B4febf8;
case 0x4febfa:c.instructions+=1;goto B4febfa;
case 0x4febfc:goto L4febfc;
case 0x4fec00:goto L4fec00;
case 0x4fec03:c.instructions+=4;goto B4fec03;
case 0x4fec06:c.instructions+=3;goto B4fec06;
case 0x4fec07:c.instructions+=2;goto B4fec07;
case 0x4fec09:c.instructions+=1;goto B4fec09;
case 0x4fec0b:goto L4fec0b;
case 0x4fec0d:c.instructions+=2;goto B4fec0d;
case 0x4fec0f:c.instructions+=1;goto B4fec0f;
case 0x4fec11:goto L4fec11;
case 0x4fec14:c.instructions+=2;goto B4fec14;
case 0x4fec15:c.instructions+=1;goto B4fec15;
case 0x4fec1a:goto L4fec1a;
case 0x4fec1d:c.instructions+=6;goto B4fec1d;
case 0x4fec20:c.instructions+=5;goto B4fec20;
case 0x4fec23:c.instructions+=4;goto B4fec23;
case 0x4fec24:c.instructions+=3;goto B4fec24;
case 0x4fec26:c.instructions+=2;goto B4fec26;
case 0x4fec29:c.instructions+=1;goto B4fec29;
case 0x4fec2b:goto L4fec2b;
case 0x4fec33:goto L4fec33;
case 0x4fec35:c.instructions+=5;goto B4fec35;
case 0x4fec39:c.instructions+=4;goto B4fec39;
case 0x4fec3b:c.instructions+=3;goto B4fec3b;
case 0x4fec43:c.instructions+=2;goto B4fec43;
case 0x4fec47:c.instructions+=1;goto B4fec47;
case 0x4fec49:goto L4fec49;
case 0x4fec50:goto L4fec50;
case 0x4fec54:c.instructions+=5;goto B4fec54;
case 0x4fec57:c.instructions+=4;goto B4fec57;
case 0x4fec5b:c.instructions+=3;goto B4fec5b;
case 0x4fec5d:c.instructions+=2;goto B4fec5d;
case 0x4fec60:c.instructions+=1;goto B4fec60;
case 0x4fec62:goto L4fec62;
case 0x4fec66:c.instructions+=2;goto B4fec66;
case 0x4fec68:c.instructions+=1;goto B4fec68;
case 0x4fec6a:goto L4fec6a;
case 0x4fec6e:c.instructions+=6;goto B4fec6e;
case 0x4fec70:c.instructions+=5;goto B4fec70;
case 0x4fec72:c.instructions+=4;goto B4fec72;
case 0x4fec74:c.instructions+=3;goto B4fec74;
case 0x4fec75:c.instructions+=2;goto B4fec75;
case 0x4fec77:c.instructions+=1;goto B4fec77;
case 0x4fec7c:goto L4fec7c;
case 0x4fec80:c.instructions+=4;goto B4fec80;
case 0x4fec86:c.instructions+=3;goto B4fec86;
case 0x4fec88:c.instructions+=2;goto B4fec88;
case 0x4fec8b:c.instructions+=1;goto B4fec8b;
case 0x4fec8d:goto L4fec8d;
case 0x4fec91:c.instructions+=2;goto B4fec91;
case 0x4fec95:c.instructions+=1;goto B4fec95;
case 0x4fec97:goto L4fec97;
case 0x4fec9b:c.instructions+=4;goto B4fec9b;
case 0x4feca0:c.instructions+=3;goto B4feca0;
case 0x4feca2:c.instructions+=2;goto B4feca2;
case 0x4feca5:c.instructions+=1;goto B4feca5;
case 0x4fecaa:goto L4fecaa;
case 0x4fecae:goto L4fecae;
case 0x4fecb3:c.instructions+=3;goto B4fecb3;
case 0x4fecb5:c.instructions+=2;goto B4fecb5;
case 0x4fecb8:c.instructions+=1;goto B4fecb8;
case 0x4fecbd:goto L4fecbd;
case 0x4fecc1:c.instructions+=5;goto B4fecc1;
case 0x4fecc5:c.instructions+=4;goto B4fecc5;
case 0x4fecc7:c.instructions+=3;goto B4fecc7;
case 0x4fecc9:c.instructions+=2;goto B4fecc9;
case 0x4feccc:c.instructions+=1;goto B4feccc;
case 0x4fecce:goto L4fecce;
case 0x4fecd2:c.instructions+=4;goto B4fecd2;
case 0x4fecd3:c.instructions+=3;goto B4fecd3;
case 0x4fecd5:c.instructions+=2;goto B4fecd5;
case 0x4fecd9:c.instructions+=1;goto B4fecd9;
case 0x4fecdf:goto L4fecdf;
case 0x4fece4:goto L4fece4;
case 0x4fece5:c.instructions+=1;goto B4fece5;
case 0x4fecea:goto L4fecea;
case 0x4feced:c.instructions+=3;goto B4feced;
case 0x4fecee:c.instructions+=2;goto B4fecee;
case 0x4fecef:c.instructions+=1;goto B4fecef;
case 0x4fed00:goto L4fed00;
case 0x4fed01:c.instructions+=2;goto B4fed01;
case 0x4fed06:c.instructions+=1;goto B4fed06;
case 0x4fed0b:goto L4fed0b;
case 0x4fed0f:c.instructions+=6;goto B4fed0f;
case 0x4fed13:c.instructions+=5;goto B4fed13;
case 0x4fed19:c.instructions+=4;goto B4fed19;
case 0x4fed1c:c.instructions+=3;goto B4fed1c;
case 0x4fed1f:c.instructions+=2;goto B4fed1f;
case 0x4fed21:c.instructions+=1;goto B4fed21;
case 0x4fed28:goto L4fed28;
case 0x4fed2c:c.instructions+=4;goto B4fed2c;
case 0x4fed2e:c.instructions+=3;goto B4fed2e;
case 0x4fed30:c.instructions+=2;goto B4fed30;
case 0x4fed33:c.instructions+=1;goto B4fed33;
case 0x4fed35:goto L4fed35;
case 0x4fed36:c.instructions+=3;goto B4fed36;
case 0x4fed39:c.instructions+=2;goto B4fed39;
case 0x4fed3c:c.instructions+=1;goto B4fed3c;
case 0x4fed3e:goto L4fed3e;
case 0x4fed40:c.instructions+=2;goto B4fed40;
case 0x4fed41:c.instructions+=1;goto B4fed41;
case 0x4fed42:goto L4fed42;
case 0x4fed45:c.instructions+=1;goto B4fed45;
case 0x4fed47:goto L4fed47;
case 0x4fed49:c.instructions+=2;goto B4fed49;
case 0x4fed4a:c.instructions+=1;goto B4fed4a;
case 0x4fed4b:goto L4fed4b;
case 0x4fed4d:c.instructions+=2;goto B4fed4d;
case 0x4fed4e:c.instructions+=1;goto B4fed4e;
case 0x4fed50:goto L4fed50;
case 0x4fed51:c.instructions+=4;goto B4fed51;
case 0x4fed52:c.instructions+=3;goto B4fed52;
case 0x4fed58:c.instructions+=2;goto B4fed58;
case 0x4fed5a:c.instructions+=1;goto B4fed5a;
case 0x4fed5c:goto L4fed5c;
case 0x4fed5d:c.instructions+=7;goto B4fed5d;
case 0x4fed61:c.instructions+=6;goto B4fed61;
case 0x4fed62:c.instructions+=5;goto B4fed62;
case 0x4fed68:c.instructions+=4;goto B4fed68;
case 0x4fed69:c.instructions+=3;goto B4fed69;
case 0x4fed6b:c.instructions+=2;goto B4fed6b;
case 0x4fed6f:c.instructions+=1;goto B4fed6f;
case 0x4fed70:goto L4fed70;
case 0x4fed75:c.instructions+=1;goto B4fed75;
case 0x4fed77:goto L4fed77;
case 0x4fed7c:c.instructions+=2;goto B4fed7c;
case 0x4fed80:c.instructions+=1;goto B4fed80;
case 0x4fed82:goto L4fed82;
case 0x4fed86:c.instructions+=2;goto B4fed86;
case 0x4fed88:c.instructions+=1;goto B4fed88;
case 0x4fed8a:goto L4fed8a;
case 0x4fed8c:c.instructions+=2;goto B4fed8c;
case 0x4fed8f:c.instructions+=1;goto B4fed8f;
case 0x4fed90:goto L4fed90;
case 0x4fed92:c.instructions+=1;goto B4fed92;
case 0x4fed94:goto L4fed94;
case 0x4fed95:c.instructions+=3;goto B4fed95;
case 0x4fed9b:c.instructions+=2;goto B4fed9b;
case 0x4fed9d:c.instructions+=1;goto B4fed9d;
case 0x4fed9f:goto L4fed9f;
case 0x4feda1:goto L4feda1;
case 0x4feda3:c.instructions+=1;goto B4feda3;
case 0x4feda5:goto L4feda5;
case 0x4fedab:c.instructions+=6;goto B4fedab;
case 0x4fedaf:c.instructions+=5;goto B4fedaf;
case 0x4fedb3:c.instructions+=4;goto B4fedb3;
case 0x4fedb5:c.instructions+=3;goto B4fedb5;
case 0x4fedbb:c.instructions+=2;goto B4fedbb;
case 0x4fedbf:c.instructions+=1;goto B4fedbf;
case 0x4fedc5:goto L4fedc5;
case 0x4fedc9:c.instructions+=4;goto B4fedc9;
case 0x4fedcf:c.instructions+=3;goto B4fedcf;
case 0x4fedd0:c.instructions+=2;goto B4fedd0;
case 0x4fedd4:c.instructions+=1;goto B4fedd4;
case 0x4fedd6:goto L4fedd6;
case 0x4fedd7:c.instructions+=2;goto B4fedd7;
case 0x4fedd8:c.instructions+=1;goto B4fedd8;
case 0x4fedd9:goto L4fedd9;
case 0x4fedda:c.instructions+=2;goto B4fedda;
case 0x4feddb:c.instructions+=1;goto B4feddb;
case 0x4fede0:goto L4fede0;
case 0x4fede5:c.instructions+=6;goto B4fede5;
case 0x4fede8:c.instructions+=5;goto B4fede8;
case 0x4fede9:c.instructions+=4;goto B4fede9;
case 0x4fedee:c.instructions+=3;goto B4fedee;
case 0x4fedf0:c.instructions+=2;goto B4fedf0;
case 0x4fedf1:c.instructions+=1;goto B4fedf1;
case 0x4fedf3:goto L4fedf3;
case 0x4fedf8:c.instructions+=2;goto B4fedf8;
case 0x4fedfa:c.instructions+=1;goto B4fedfa;
case 0x4fee00:goto L4fee00;
case 0x4fee02:c.instructions+=2;goto B4fee02;
case 0x4fee07:c.instructions+=1;goto B4fee07;
case 0x4fee0c:goto L4fee0c;
case 0x4fee12:c.instructions+=5;goto B4fee12;
case 0x4fee14:c.instructions+=4;goto B4fee14;
case 0x4fee19:c.instructions+=3;goto B4fee19;
case 0x4fee1b:c.instructions+=2;goto B4fee1b;
case 0x4fee1c:c.instructions+=1;goto B4fee1c;
case 0x4fee21:goto L4fee21;
case 0x4fee24:c.instructions+=3;goto B4fee24;
case 0x4fee25:c.instructions+=2;goto B4fee25;
case 0x4fee2a:c.instructions+=1;goto B4fee2a;
case 0x4fee2f:goto L4fee2f;
case 0x4fee33:c.instructions+=7;goto B4fee33;
case 0x4fee36:c.instructions+=6;goto B4fee36;
case 0x4fee39:c.instructions+=5;goto B4fee39;
case 0x4fee3a:c.instructions+=4;goto B4fee3a;
case 0x4fee3d:c.instructions+=3;goto B4fee3d;
case 0x4fee3e:c.instructions+=2;goto B4fee3e;
case 0x4fee41:c.instructions+=1;goto B4fee41;
case 0x4fee42:goto L4fee42;
case 0x4fee45:c.instructions+=1;goto B4fee45;
case 0x4fee4b:goto L4fee4b;
case 0x4fee4c:c.instructions+=5;goto B4fee4c;
case 0x4fee4d:c.instructions+=4;goto B4fee4d;
case 0x4fee4e:c.instructions+=3;goto B4fee4e;
case 0x4fee50:c.instructions+=2;goto B4fee50;
case 0x4fee52:c.instructions+=1;goto B4fee52;
case 0x4fee57:goto L4fee57;
case 0x4fee5a:c.instructions+=2;goto B4fee5a;
case 0x4fee5c:c.instructions+=1;goto B4fee5c;
case 0x4fee5e:goto L4fee5e;
case 0x4fee60:c.instructions+=1;goto B4fee60;
case 0x4fee62:goto L4fee62;
case 0x4fee67:c.instructions+=5;goto B4fee67;
case 0x4fee69:c.instructions+=4;goto B4fee69;
case 0x4fee6a:c.instructions+=3;goto B4fee6a;
case 0x4fee6b:c.instructions+=2;goto B4fee6b;
case 0x4fee6f:c.instructions+=1;goto B4fee6f;
case 0x4fee74:goto L4fee74;
case 0x4fee77:c.instructions+=2;goto B4fee77;
case 0x4fee79:c.instructions+=1;goto B4fee79;
case 0x4fee7b:goto L4fee7b;
case 0x4fee7c:c.instructions+=1;goto B4fee7c;
case 0x4fee7e:goto L4fee7e;
case 0x4fee7f:c.instructions+=1;goto B4fee7f;
case 0x4fee81:goto L4fee81;
case 0x4fee86:c.instructions+=2;goto B4fee86;
case 0x4fee8e:c.instructions+=1;goto B4fee8e;
case 0x4fee90:goto L4fee90;
case 0x4fee95:c.instructions+=2;goto B4fee95;
case 0x4fee99:c.instructions+=1;goto B4fee99;
case 0x4fee9b:goto L4fee9b;
case 0x4fee9d:c.instructions+=1;goto B4fee9d;
case 0x4feea5:goto L4feea5;
case 0x4feea6:c.instructions+=2;goto B4feea6;
case 0x4feeab:c.instructions+=1;goto B4feeab;
case 0x4feeb0:goto L4feeb0;
case 0x4feeb1:c.instructions+=3;goto B4feeb1;
case 0x4feeb6:c.instructions+=2;goto B4feeb6;
case 0x4feeba:c.instructions+=1;goto B4feeba;
case 0x4feebf:goto L4feebf;
case 0x4feec5:c.instructions+=8;goto B4feec5;
case 0x4feecb:c.instructions+=7;goto B4feecb;
case 0x4feecd:c.instructions+=6;goto B4feecd;
case 0x4feecf:c.instructions+=5;goto B4feecf;
case 0x4feed1:c.instructions+=4;goto B4feed1;
case 0x4feed3:c.instructions+=3;goto B4feed3;
case 0x4feed5:c.instructions+=2;goto B4feed5;
case 0x4feed9:c.instructions+=1;goto B4feed9;
case 0x4feedb:goto L4feedb;
case 0x4feee0:goto L4feee0;
case 0x4feee1:c.instructions+=2;goto B4feee1;
case 0x4feee6:c.instructions+=1;goto B4feee6;
case 0x4feeeb:goto L4feeeb;
case 0x4feeef:c.instructions+=2;goto B4feeef;
case 0x4feef1:c.instructions+=1;goto B4feef1;
case 0x4feef3:goto L4feef3;
case 0x4feef5:goto L4feef5;
case 0x4feef9:c.instructions+=1;goto B4feef9;
case 0x4feefb:goto L4feefb;
case 0x4feefd:goto L4feefd;
case 0x4fef02:c.instructions+=5;goto B4fef02;
case 0x4fef08:c.instructions+=4;goto B4fef08;
case 0x4fef09:c.instructions+=3;goto B4fef09;
case 0x4fef0b:c.instructions+=2;goto B4fef0b;
case 0x4fef0d:c.instructions+=1;goto B4fef0d;
case 0x4fef0f:goto L4fef0f;
case 0x4fef11:c.instructions+=1;goto B4fef11;
case 0x4fef13:goto L4fef13;
case 0x4fef15:c.instructions+=1;goto B4fef15;
case 0x4fef17:goto L4fef17;
case 0x4fef1a:c.instructions+=9;goto B4fef1a;
case 0x4fef1e:c.instructions+=8;goto B4fef1e;
case 0x4fef22:c.instructions+=7;goto B4fef22;
case 0x4fef26:c.instructions+=6;goto B4fef26;
case 0x4fef2a:c.instructions+=5;goto B4fef2a;
case 0x4fef2d:c.instructions+=4;goto B4fef2d;
case 0x4fef30:c.instructions+=3;goto B4fef30;
case 0x4fef33:c.instructions+=2;goto B4fef33;
case 0x4fef36:c.instructions+=1;goto B4fef36;
case 0x4fef39:goto L4fef39;
case 0x4fef3a:c.instructions+=1;goto B4fef3a;
case 0x4fef3b:goto L4fef3b;
case 0x4fef3c:c.instructions+=3;goto B4fef3c;
case 0x4fef3d:c.instructions+=2;goto B4fef3d;
case 0x4fef40:c.instructions+=1;goto B4fef40;
case 0x4fef50:goto L4fef50;
case 0x4fef54:c.instructions+=3;goto B4fef54;
case 0x4fef57:c.instructions+=2;goto B4fef57;
case 0x4fef5e:c.instructions+=1;goto B4fef5e;
case 0x4fef60:goto L4fef60;
case 0x4fef65:goto L4fef65;
case 0x4fef6f:c.instructions+=2;goto B4fef6f;
case 0x4fef74:c.instructions+=1;goto B4fef74;
case 0x4fef80:goto L4fef80;
case 0x4fef82:c.instructions+=16;goto B4fef82;
case 0x4fef87:c.instructions+=15;goto B4fef87;
case 0x4fef8c:c.instructions+=14;goto B4fef8c;
case 0x4fef91:c.instructions+=13;goto B4fef91;
case 0x4fef96:c.instructions+=12;goto B4fef96;
case 0x4fef9b:c.instructions+=11;goto B4fef9b;
case 0x4fefa0:c.instructions+=10;goto B4fefa0;
case 0x4fefa7:c.instructions+=9;goto B4fefa7;
case 0x4fefac:c.instructions+=8;goto B4fefac;
case 0x4fefb1:c.instructions+=7;goto B4fefb1;
case 0x4fefb8:c.instructions+=6;goto B4fefb8;
case 0x4fefbe:c.instructions+=5;goto B4fefbe;
case 0x4fefc4:c.instructions+=4;goto B4fefc4;
case 0x4fefca:c.instructions+=3;goto B4fefca;
case 0x4fefd4:c.instructions+=2;goto B4fefd4;
case 0x4fefde:c.instructions+=1;goto B4fefde;
case 0x4fefe0:goto L4fefe0;
case 0x4fefea:goto L4fefea;
case 0x4feff0:goto L4feff0;
case 0x4feff5:c.instructions+=3;goto B4feff5;
case 0x4feff7:c.instructions+=2;goto B4feff7;
case 0x4feffc:c.instructions+=1;goto B4feffc;
default:missing_instruction(c.pc);}
B4fe002:L4fe002:{c.instructions+=1;NFSU2_TR(0x4fe002);
if(r1(R+514)){{goto L4fe03c;}}
}
B4fe004:L4fe004:{c.instructions+=3;NFSU2_TR(0x4fe004);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe00a:{NFSU2_TR(0x4fe00a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fe010:{NFSU2_TR(0x4fe010);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe03c;}}
}
B4fe012:L4fe012:{c.instructions+=5;NFSU2_TR(0x4fe012);
{u32 ea_=u32(r4(R+12)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe018:{NFSU2_TR(0x4fe018);
{u32 ea_=u32(r4(R+20)+u32(684u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fe01e:{NFSU2_TR(0x4fe01e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fe020:{NFSU2_TR(0x4fe020);
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
B4fe023:{NFSU2_TR(0x4fe023);
if(r1(R+514)){{goto L4fe03c;}}
}
B4fe025:L4fe025:{c.instructions+=7;NFSU2_TR(0x4fe025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe026:{NFSU2_TR(0x4fe026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe027:{NFSU2_TR(0x4fe027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fe028:{NFSU2_TR(0x4fe028);
w4(R+0,u32(0x1ull));
}
B4fe02d:{NFSU2_TR(0x4fe02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fe02e:{NFSU2_TR(0x4fe02e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fe02f:{NFSU2_TR(0x4fe02f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe032:L4fe032:{c.instructions+=7;NFSU2_TR(0x4fe032);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe033:{NFSU2_TR(0x4fe033);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe034:{NFSU2_TR(0x4fe034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fe035:{NFSU2_TR(0x4fe035);
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
B4fe037:{NFSU2_TR(0x4fe037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fe038:{NFSU2_TR(0x4fe038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fe039:{NFSU2_TR(0x4fe039);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe03c:L4fe03c:{c.instructions+=7;NFSU2_TR(0x4fe03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe03d:{NFSU2_TR(0x4fe03d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe03e:{NFSU2_TR(0x4fe03e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fe03f:{NFSU2_TR(0x4fe03f);
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
B4fe041:{NFSU2_TR(0x4fe041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fe042:{NFSU2_TR(0x4fe042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fe043:{NFSU2_TR(0x4fe043);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe050:L4fe050:{c.instructions+=16;NFSU2_TR(0x4fe050);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe054:{NFSU2_TR(0x4fe054);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe058:{NFSU2_TR(0x4fe058);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe05a:{NFSU2_TR(0x4fe05a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe05c:{NFSU2_TR(0x4fe05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4fe05f:{NFSU2_TR(0x4fe05f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe060:{NFSU2_TR(0x4fe060);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe061:{NFSU2_TR(0x4fe061);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fe065:{NFSU2_TR(0x4fe065);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe067:{NFSU2_TR(0x4fe067);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe068:{NFSU2_TR(0x4fe068);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fe06c:{NFSU2_TR(0x4fe06c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe06e:{NFSU2_TR(0x4fe06e);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B4fe070:{NFSU2_TR(0x4fe070);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fe072:{NFSU2_TR(0x4fe072);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fe075:{NFSU2_TR(0x4fe075);
if(r1(R+518)){{goto L4fe07b;}}
}
B4fe077:L4fe077:{c.instructions+=2;NFSU2_TR(0x4fe077);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe079:{NFSU2_TR(0x4fe079);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4fe07b:L4fe07b:{c.instructions+=5;NFSU2_TR(0x4fe07b);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4fe07d:{NFSU2_TR(0x4fe07d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4fe07f:{NFSU2_TR(0x4fe07f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fe081:{NFSU2_TR(0x4fe081);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fe084:{NFSU2_TR(0x4fe084);
if(r1(R+514)){{goto L4fe08a;}}
}
B4fe086:L4fe086:{c.instructions+=2;NFSU2_TR(0x4fe086);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe088:{NFSU2_TR(0x4fe088);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4fe08a:L4fe08a:{c.instructions+=21;NFSU2_TR(0x4fe08a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4fe08c:{NFSU2_TR(0x4fe08c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fe090:{NFSU2_TR(0x4fe090);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4fe092:{NFSU2_TR(0x4fe092);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4fe094:{NFSU2_TR(0x4fe094);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B4fe096:{NFSU2_TR(0x4fe096);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe098:{NFSU2_TR(0x4fe098);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B4fe09a:{NFSU2_TR(0x4fe09a);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B4fe09c:{NFSU2_TR(0x4fe09c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4fe09e:{NFSU2_TR(0x4fe09e);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4fe0a0:{NFSU2_TR(0x4fe0a0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe0a4:{NFSU2_TR(0x4fe0a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe0a6:{NFSU2_TR(0x4fe0a6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe0a8:{NFSU2_TR(0x4fe0a8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe0ab:{NFSU2_TR(0x4fe0ab);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe0ae:{NFSU2_TR(0x4fe0ae);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe0b1:{NFSU2_TR(0x4fe0b1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe0b4:{NFSU2_TR(0x4fe0b4);
__asm__ volatile(".byte 0xd8,0xd1":::"memory");
}
B4fe0b6:{NFSU2_TR(0x4fe0b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fe0b8:{NFSU2_TR(0x4fe0b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fe0bb:{NFSU2_TR(0x4fe0bb);
if(r1(R+518)){{goto L4fe0c1;}}
}
B4fe0bd:L4fe0bd:{c.instructions+=2;NFSU2_TR(0x4fe0bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe0bf:{NFSU2_TR(0x4fe0bf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B4fe0c1:L4fe0c1:{c.instructions+=5;NFSU2_TR(0x4fe0c1);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B4fe0c3:{NFSU2_TR(0x4fe0c3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4fe0c5:{NFSU2_TR(0x4fe0c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fe0c7:{NFSU2_TR(0x4fe0c7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fe0ca:{NFSU2_TR(0x4fe0ca);
if(r1(R+514)){{goto L4fe0d0;}}
}
B4fe0cc:L4fe0cc:{c.instructions+=2;NFSU2_TR(0x4fe0cc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe0ce:{NFSU2_TR(0x4fe0ce);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4fe0d0:L4fe0d0:{c.instructions+=22;NFSU2_TR(0x4fe0d0);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4fe0d2:{NFSU2_TR(0x4fe0d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe0d6:{NFSU2_TR(0x4fe0d6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4fe0d8:{NFSU2_TR(0x4fe0d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe0dc:{NFSU2_TR(0x4fe0dc);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4fe0de:{NFSU2_TR(0x4fe0de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe0df:{NFSU2_TR(0x4fe0df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe0e0:{NFSU2_TR(0x4fe0e0);
__asm__ volatile(".byte 0xde,0xfa":::"memory");
}
B4fe0e2:{NFSU2_TR(0x4fe0e2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe0e5:{NFSU2_TR(0x4fe0e5);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B4fe0e7:{NFSU2_TR(0x4fe0e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4fe0e9:{NFSU2_TR(0x4fe0e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fe0ea:{NFSU2_TR(0x4fe0ea);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B4fe0ec:{NFSU2_TR(0x4fe0ec);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4fe0ee:{NFSU2_TR(0x4fe0ee);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4fe0f0:{NFSU2_TR(0x4fe0f0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe0f4:{NFSU2_TR(0x4fe0f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe0f8:{NFSU2_TR(0x4fe0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe0fb:{NFSU2_TR(0x4fe0fb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe0fd:{NFSU2_TR(0x4fe0fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe0ff:{NFSU2_TR(0x4fe0ff);
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
B4fe102:{NFSU2_TR(0x4fe102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe110:L4fe110:{c.instructions+=3;NFSU2_TR(0x4fe110);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe112:{NFSU2_TR(0x4fe112);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe117:{NFSU2_TR(0x4fe117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe11cull));
TAIL_STATIC(0x61b500u,61b);
}
B4fe11c:L4fe11c:{c.instructions+=1;NFSU2_TR(0x4fe11c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe120:L4fe120:{c.instructions+=3;NFSU2_TR(0x4fe120);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe122:{NFSU2_TR(0x4fe122);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe127:{NFSU2_TR(0x4fe127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe12cull));
TAIL_STATIC(0x61b500u,61b);
}
B4fe12c:L4fe12c:{c.instructions+=1;NFSU2_TR(0x4fe12c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe130:L4fe130:{c.instructions+=3;NFSU2_TR(0x4fe130);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe132:{NFSU2_TR(0x4fe132);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe137:{NFSU2_TR(0x4fe137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe13cull));
TAIL_STATIC(0x61b500u,61b);
}
B4fe13c:L4fe13c:{c.instructions+=1;NFSU2_TR(0x4fe13c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe140:L4fe140:{c.instructions+=2;NFSU2_TR(0x4fe140);
u8 U[4];
w4(U+0,u32(0x79a9f0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4fe146:{NFSU2_TR(0x4fe146);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe150:L4fe150:{c.instructions+=5;NFSU2_TR(0x4fe150);
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
B4fe155:{NFSU2_TR(0x4fe155);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe156:{NFSU2_TR(0x4fe156);
__builtin_memmove((R+24),(R+4),4);
}
B4fe158:{NFSU2_TR(0x4fe158);
u8 U[4];
w4(U+0,u32(0x79a9f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fe15e:{NFSU2_TR(0x4fe15e);
if(r1(R+518)){{goto L4fe169;}}
}
B4fe160:L4fe160:{c.instructions+=2;NFSU2_TR(0x4fe160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe161:{NFSU2_TR(0x4fe161);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe166ull));
TAIL_STATIC(0x575630u,575);
}
B4fe166:L4fe166:{c.instructions+=1;NFSU2_TR(0x4fe166);
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
B4fe169:L4fe169:{c.instructions+=3;NFSU2_TR(0x4fe169);
__builtin_memmove((R+0),(R+24),4);
}
B4fe16b:{NFSU2_TR(0x4fe16b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe16c:{NFSU2_TR(0x4fe16c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe170:L4fe170:{c.instructions+=7;NFSU2_TR(0x4fe170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4fe173:{NFSU2_TR(0x4fe173);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe174:{NFSU2_TR(0x4fe174);
__builtin_memmove((R+24),(R+4),4);
}
B4fe176:{NFSU2_TR(0x4fe176);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe17c:{NFSU2_TR(0x4fe17c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe180:{NFSU2_TR(0x4fe180);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe184:{NFSU2_TR(0x4fe184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe189ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4fe189:L4fe189:{c.instructions+=6;NFSU2_TR(0x4fe189);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe18d:{NFSU2_TR(0x4fe18d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4fe191:{NFSU2_TR(0x4fe191);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4fe195:{NFSU2_TR(0x4fe195);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fe197:{NFSU2_TR(0x4fe197);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fe19a:{NFSU2_TR(0x4fe19a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe1a2;}}
}
B4fe19c:L4fe19c:{c.instructions+=1;NFSU2_TR(0x4fe19c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fe1a2:L4fe1a2:{c.instructions+=2;NFSU2_TR(0x4fe1a2);
{u32 ea_=u32(r4(R+24)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe1a8:{NFSU2_TR(0x4fe1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe1adull));
TAIL_STATIC(0x75bed4u,75b);
}
B4fe1ad:L4fe1ad:{c.instructions+=5;NFSU2_TR(0x4fe1ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe1b1:{NFSU2_TR(0x4fe1b1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B4fe1b5:{NFSU2_TR(0x4fe1b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe1b6:{NFSU2_TR(0x4fe1b6);
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
B4fe1b9:{NFSU2_TR(0x4fe1b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe1c0:L4fe1c0:{c.instructions+=9;NFSU2_TR(0x4fe1c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fe1c2:{NFSU2_TR(0x4fe1c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe1c3:{NFSU2_TR(0x4fe1c3);
__builtin_memmove((R+24),(R+4),4);
}
B4fe1c5:{NFSU2_TR(0x4fe1c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe1c6:{NFSU2_TR(0x4fe1c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe1c9:{NFSU2_TR(0x4fe1c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe1cc:{NFSU2_TR(0x4fe1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe1cf:{NFSU2_TR(0x4fe1cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe1d2:{NFSU2_TR(0x4fe1d2);
w4(R+4,u32(0x15ull));
}
B4fe1d7:L4fe1d7:{c.instructions+=1;NFSU2_TR(0x4fe1d7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4fe1d9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe1d7u);}goto L4fe1d7;}
}
B4fe1d9:L4fe1d9:{c.instructions+=2;NFSU2_TR(0x4fe1d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe1dc:{NFSU2_TR(0x4fe1dc);
w4(R+4,u32(0x15ull));
}
B4fe1e1:L4fe1e1:{c.instructions+=1;NFSU2_TR(0x4fe1e1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4fe1e3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe1e1u);}goto L4fe1e1;}
}
B4fe1e3:L4fe1e3:{c.instructions+=2;NFSU2_TR(0x4fe1e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fe1e9:{NFSU2_TR(0x4fe1e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe1eeull));
TAIL_STATIC(0x5f73d0u,5f7);
}
B4fe1ee:L4fe1ee:{c.instructions+=4;NFSU2_TR(0x4fe1ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe1ef:{NFSU2_TR(0x4fe1ef);
__builtin_memmove((R+0),(R+24),4);
}
B4fe1f1:{NFSU2_TR(0x4fe1f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe1f2:{NFSU2_TR(0x4fe1f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe200:L4fe200:{c.instructions+=29;NFSU2_TR(0x4fe200);
__builtin_memmove((R+0),(R+4),4);
}
B4fe202:{NFSU2_TR(0x4fe202);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe206:{NFSU2_TR(0x4fe206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe208:{NFSU2_TR(0x4fe208);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4fe20a:{NFSU2_TR(0x4fe20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe20d:{NFSU2_TR(0x4fe20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe210:{NFSU2_TR(0x4fe210);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe213:{NFSU2_TR(0x4fe213);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe216:{NFSU2_TR(0x4fe216);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe219:{NFSU2_TR(0x4fe219);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe21c:{NFSU2_TR(0x4fe21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe21f:{NFSU2_TR(0x4fe21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe222:{NFSU2_TR(0x4fe222);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe225:{NFSU2_TR(0x4fe225);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe228:{NFSU2_TR(0x4fe228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe22b:{NFSU2_TR(0x4fe22b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe22e:{NFSU2_TR(0x4fe22e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe231:{NFSU2_TR(0x4fe231);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe234:{NFSU2_TR(0x4fe234);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe237:{NFSU2_TR(0x4fe237);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe23a:{NFSU2_TR(0x4fe23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe23d:{NFSU2_TR(0x4fe23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe240:{NFSU2_TR(0x4fe240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe243:{NFSU2_TR(0x4fe243);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe246:{NFSU2_TR(0x4fe246);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe249:{NFSU2_TR(0x4fe249);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe24c:{NFSU2_TR(0x4fe24c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe24f:{NFSU2_TR(0x4fe24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe252:{NFSU2_TR(0x4fe252);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe260:L4fe260:{c.instructions+=3;NFSU2_TR(0x4fe260);
__builtin_memmove((R+0),(R+4),4);
}
B4fe262:{NFSU2_TR(0x4fe262);
u8 U[4];
w4(U+0,u32(0x79aa00ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4fe268:{NFSU2_TR(0x4fe268);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe270:L4fe270:{c.instructions+=2;NFSU2_TR(0x4fe270);
u8 U[4];
w4(U+0,u32(0x79aa00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4fe276:{NFSU2_TR(0x4fe276);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe280:L4fe280:{c.instructions+=5;NFSU2_TR(0x4fe280);
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
B4fe285:{NFSU2_TR(0x4fe285);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe286:{NFSU2_TR(0x4fe286);
__builtin_memmove((R+24),(R+4),4);
}
B4fe288:{NFSU2_TR(0x4fe288);
u8 U[4];
w4(U+0,u32(0x79aa00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4fe28e:{NFSU2_TR(0x4fe28e);
if(r1(R+518)){{goto L4fe299;}}
}
B4fe290:L4fe290:{c.instructions+=2;NFSU2_TR(0x4fe290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe291:{NFSU2_TR(0x4fe291);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe296ull));
TAIL_STATIC(0x575630u,575);
}
B4fe296:L4fe296:{c.instructions+=1;NFSU2_TR(0x4fe296);
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
B4fe299:L4fe299:{c.instructions+=3;NFSU2_TR(0x4fe299);
__builtin_memmove((R+0),(R+24),4);
}
B4fe29b:{NFSU2_TR(0x4fe29b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe29c:{NFSU2_TR(0x4fe29c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe2a0:L4fe2a0:{c.instructions+=2;NFSU2_TR(0x4fe2a0);
s1(0x8384dc,u8(0x0ull));
}
B4fe2a7:{NFSU2_TR(0x4fe2a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe2b0:L4fe2b0:{c.instructions+=3;NFSU2_TR(0x4fe2b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe2b4:{NFSU2_TR(0x4fe2b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe2b6:{NFSU2_TR(0x4fe2b6);
if(r1(R+518)){{goto L4fe2bd;}}
}
B4fe2b8:L4fe2b8:{c.instructions+=2;NFSU2_TR(0x4fe2b8);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4fe2bb:{NFSU2_TR(0x4fe2bb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe2c2;}}
}
B4fe2bd:L4fe2bd:{c.instructions+=1;NFSU2_TR(0x4fe2bd);
w4(R+4,u32(0x79aa04ull));
}
B4fe2c2:L4fe2c2:{c.instructions+=8;NFSU2_TR(0x4fe2c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe2c6:{NFSU2_TR(0x4fe2c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe2ca:{NFSU2_TR(0x4fe2ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe2cb:{NFSU2_TR(0x4fe2cb);
__builtin_memmove((R+24),gp(0x88f19c),4);
}
B4fe2d1:{NFSU2_TR(0x4fe2d1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4fe2d3:{NFSU2_TR(0x4fe2d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe2d5:{NFSU2_TR(0x4fe2d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe2d6:{NFSU2_TR(0x4fe2d6);
if(r1(R+518)){{goto L4fe2e6;}}
}
B4fe2d8:L4fe2d8:{c.instructions+=5;NFSU2_TR(0x4fe2d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe2d9:{NFSU2_TR(0x4fe2d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe2da:{NFSU2_TR(0x4fe2da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe2db:{NFSU2_TR(0x4fe2db);
w4(R+4,u32(0x88eb00ull));
}
B4fe2e0:{NFSU2_TR(0x4fe2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe2e5ull));
TAIL_STATIC(0x5e8670u,5e8);
}
B4fe2e5:L4fe2e5:{c.instructions+=1;NFSU2_TR(0x4fe2e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe2e6:L4fe2e6:{c.instructions+=3;NFSU2_TR(0x4fe2e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe2ea:{NFSU2_TR(0x4fe2ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe2ec:{NFSU2_TR(0x4fe2ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe2f3;}}
}
B4fe2ee:L4fe2ee:{c.instructions+=1;NFSU2_TR(0x4fe2ee);
w4(R+4,u32(0x80ull));
}
B4fe2f3:L4fe2f3:{c.instructions+=9;NFSU2_TR(0x4fe2f3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ffcull))));
}
B4fe2f8:{NFSU2_TR(0x4fe2f8);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4fe2fb:{NFSU2_TR(0x4fe2fb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ffcull))));
}
B4fe301:{NFSU2_TR(0x4fe301);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B4fe303:{NFSU2_TR(0x4fe303);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4fe306:{NFSU2_TR(0x4fe306);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x8ull))));
}
B4fe309:{NFSU2_TR(0x4fe309);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe30a:{NFSU2_TR(0x4fe30a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe30b:{NFSU2_TR(0x4fe30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe310ull));
TAIL_STATIC(0x440820u,440);
}
B4fe310:L4fe310:{c.instructions+=2;NFSU2_TR(0x4fe310);
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
B4fe313:{NFSU2_TR(0x4fe313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe320:L4fe320:{c.instructions+=3;NFSU2_TR(0x4fe320);
__builtin_memmove((R+0),gp(0x88f19c),4);
}
B4fe325:{NFSU2_TR(0x4fe325);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe327:{NFSU2_TR(0x4fe327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe32e;}}
}
B4fe329:L4fe329:{c.instructions+=1;NFSU2_TR(0x4fe329);
TAIL_STATIC(0x440540u,440);
}
B4fe32e:L4fe32e:{c.instructions+=3;NFSU2_TR(0x4fe32e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe332:{NFSU2_TR(0x4fe332);
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
B4fe334:{NFSU2_TR(0x4fe334);
if(r1(R+518)){{goto L4fe341;}}
}
B4fe336:L4fe336:{c.instructions+=3;NFSU2_TR(0x4fe336);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe337:{NFSU2_TR(0x4fe337);
w4(R+4,u32(0x88eb00ull));
}
B4fe33c:{NFSU2_TR(0x4fe33c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe341ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B4fe341:L4fe341:{c.instructions+=1;NFSU2_TR(0x4fe341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe350:L4fe350:{c.instructions+=4;NFSU2_TR(0x4fe350);
__builtin_memmove((R+0),(R+4),4);
}
B4fe352:{NFSU2_TR(0x4fe352);
u8 U[4];
w4(U+0,u32(0x79aa10ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4fe358:{NFSU2_TR(0x4fe358);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fe35f:{NFSU2_TR(0x4fe35f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe360:L4fe360:{c.instructions+=6;NFSU2_TR(0x4fe360);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe364:{NFSU2_TR(0x4fe364);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4fe366:{NFSU2_TR(0x4fe366);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe368:{NFSU2_TR(0x4fe368);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe369:{NFSU2_TR(0x4fe369);
w4(R+24,u32(0x8ull));
}
B4fe36e:{NFSU2_TR(0x4fe36e);
if(r1(R+518)){{goto L4fe3ab;}}
}
B4fe370:L4fe370:{c.instructions+=4;NFSU2_TR(0x4fe370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe372:{NFSU2_TR(0x4fe372);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4fe373:{NFSU2_TR(0x4fe373);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4fe376:{NFSU2_TR(0x4fe376);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4fe3a4;}}
}
B4fe378:L4fe378:{c.instructions+=1;NFSU2_TR(0x4fe378);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4fe3e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4fe37f:L4fe37f:{c.instructions+=5;NFSU2_TR(0x4fe37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe382:{NFSU2_TR(0x4fe382);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ffcull))));
}
B4fe388:{NFSU2_TR(0x4fe388);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4fe38b:{NFSU2_TR(0x4fe38b);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
}
B4fe38d:{NFSU2_TR(0x4fe38d);
{goto L4fe3a4;}
}
B4fe38f:L4fe38f:{c.instructions+=6;NFSU2_TR(0x4fe38f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe392:{NFSU2_TR(0x4fe392);
__builtin_memmove((R+8),(R+4),4);
}
B4fe394:{NFSU2_TR(0x4fe394);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ffcull))));
}
B4fe39a:{NFSU2_TR(0x4fe39a);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4fe39d:{NFSU2_TR(0x4fe39d);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+8))));
}
B4fe39f:{NFSU2_TR(0x4fe39f);
{goto L4fe3a4;}
}
B4fe3a1:L4fe3a1:{c.instructions+=1;NFSU2_TR(0x4fe3a1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff7ull))));
}
B4fe3a4:L4fe3a4:{c.instructions+=3;NFSU2_TR(0x4fe3a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe3a7:{NFSU2_TR(0x4fe3a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe3a9:{NFSU2_TR(0x4fe3a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe370u);}goto L4fe370;}}
}
B4fe3ab:L4fe3ab:{c.instructions+=3;NFSU2_TR(0x4fe3ab);
__builtin_memmove((R+0),gp(0x88f19c),4);
}
B4fe3b0:{NFSU2_TR(0x4fe3b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe3b2:{NFSU2_TR(0x4fe3b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe3c6;}}
}
B4fe3b4:L4fe3b4:{c.instructions+=4;NFSU2_TR(0x4fe3b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe3b8:{NFSU2_TR(0x4fe3b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe3b9:{NFSU2_TR(0x4fe3b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe3ba:{NFSU2_TR(0x4fe3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe3bfull));
TAIL_STATIC(0x440820u,440);
}
B4fe3bf:L4fe3bf:{c.instructions+=3;NFSU2_TR(0x4fe3bf);
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
B4fe3c2:{NFSU2_TR(0x4fe3c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe3c3:{NFSU2_TR(0x4fe3c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe3c6:L4fe3c6:{c.instructions+=6;NFSU2_TR(0x4fe3c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe3c7:{NFSU2_TR(0x4fe3c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe3cb:{NFSU2_TR(0x4fe3cb);
u8 U[4];
w4(U+0,u32(0x79aa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe3d0:{NFSU2_TR(0x4fe3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe3d1:{NFSU2_TR(0x4fe3d1);
w4(R+4,u32(0x88eb00ull));
}
B4fe3d6:{NFSU2_TR(0x4fe3d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe3dbull));
TAIL_STATIC(0x5e8670u,5e8);
}
B4fe3db:L4fe3db:{c.instructions+=2;NFSU2_TR(0x4fe3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe3dc:{NFSU2_TR(0x4fe3dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe3f0:L4fe3f0:{c.instructions+=3;NFSU2_TR(0x4fe3f0);
__builtin_memmove((R+0),gp(0x88f19c),4);
}
B4fe3f5:{NFSU2_TR(0x4fe3f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe3f7:{NFSU2_TR(0x4fe3f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe409;}}
}
B4fe3f9:L4fe3f9:{c.instructions+=3;NFSU2_TR(0x4fe3f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe3fd:{NFSU2_TR(0x4fe3fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe3fe:{NFSU2_TR(0x4fe3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe403ull));
TAIL_STATIC(0x440540u,440);
}
B4fe403:L4fe403:{c.instructions+=2;NFSU2_TR(0x4fe403);
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
B4fe406:{NFSU2_TR(0x4fe406);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe409:L4fe409:{c.instructions+=4;NFSU2_TR(0x4fe409);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe40d:{NFSU2_TR(0x4fe40d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe40e:{NFSU2_TR(0x4fe40e);
w4(R+4,u32(0x88eb00ull));
}
B4fe413:{NFSU2_TR(0x4fe413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe418ull));
TAIL_STATIC(0x5d6130u,5d6);
}
B4fe418:L4fe418:{c.instructions+=1;NFSU2_TR(0x4fe418);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe420:L4fe420:{c.instructions+=4;NFSU2_TR(0x4fe420);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe423:{NFSU2_TR(0x4fe423);
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
B4fe424:{NFSU2_TR(0x4fe424);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe427:{NFSU2_TR(0x4fe427);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe430:L4fe430:{c.instructions+=5;NFSU2_TR(0x4fe430);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe433:{NFSU2_TR(0x4fe433);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4fe434:{NFSU2_TR(0x4fe434);
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
B4fe436:{NFSU2_TR(0x4fe436);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe439:{NFSU2_TR(0x4fe439);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4fe444;}}
}
B4fe43b:L4fe43b:{c.instructions+=3;NFSU2_TR(0x4fe43b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4fe43d:{NFSU2_TR(0x4fe43d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe43f:{NFSU2_TR(0x4fe43f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe442ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4fe442:L4fe442:{c.instructions+=1;NFSU2_TR(0x4fe442);
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
B4fe444:L4fe444:{c.instructions+=1;NFSU2_TR(0x4fe444);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe450:L4fe450:{c.instructions+=25;NFSU2_TR(0x4fe450);
__builtin_memmove((R+0),(R+4),4);
}
B4fe452:{NFSU2_TR(0x4fe452);
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
B4fe454:{NFSU2_TR(0x4fe454);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe457:{NFSU2_TR(0x4fe457);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x15ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe45a:{NFSU2_TR(0x4fe45a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe45d:{NFSU2_TR(0x4fe45d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe460:{NFSU2_TR(0x4fe460);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe463:{NFSU2_TR(0x4fe463);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe466:{NFSU2_TR(0x4fe466);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1dull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe469:{NFSU2_TR(0x4fe469);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe46c:{NFSU2_TR(0x4fe46c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe46f:{NFSU2_TR(0x4fe46f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe472:{NFSU2_TR(0x4fe472);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe475:{NFSU2_TR(0x4fe475);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe478:{NFSU2_TR(0x4fe478);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe47b:{NFSU2_TR(0x4fe47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe47e:{NFSU2_TR(0x4fe47e);
w1(R+8,u8(0x1ull));
}
B4fe480:{NFSU2_TR(0x4fe480);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x19ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe483:{NFSU2_TR(0x4fe483);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe486:{NFSU2_TR(0x4fe486);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe489:{NFSU2_TR(0x4fe489);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe48c:{NFSU2_TR(0x4fe48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe48f:{NFSU2_TR(0x4fe48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe492:{NFSU2_TR(0x4fe492);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fe495:{NFSU2_TR(0x4fe495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe4a0:L4fe4a0:{c.instructions+=4;NFSU2_TR(0x4fe4a0);
__builtin_memmove((R+0),gp(0x8383ac),4);
}
B4fe4a5:{NFSU2_TR(0x4fe4a5);
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
B4fe4a7:{NFSU2_TR(0x4fe4a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4fe4aa:{NFSU2_TR(0x4fe4aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe4b0:L4fe4b0:{c.instructions+=1;NFSU2_TR(0x4fe4b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe4b5ull));
TAIL_STATIC(0x576ca0u,576);
}
B4fe4b5:L4fe4b5:{c.instructions+=5;NFSU2_TR(0x4fe4b5);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4fe4b7:{NFSU2_TR(0x4fe4b7);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4fe4b9:{NFSU2_TR(0x4fe4b9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B4fe4bc:{NFSU2_TR(0x4fe4bc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fe4bf:{NFSU2_TR(0x4fe4bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe4c0:L4fe4c0:{c.instructions+=9;NFSU2_TR(0x4fe4c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4fe4c3:{NFSU2_TR(0x4fe4c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe4c4:{NFSU2_TR(0x4fe4c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe4c5:{NFSU2_TR(0x4fe4c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe4c6:{NFSU2_TR(0x4fe4c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fe4ca:{NFSU2_TR(0x4fe4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe4cd:{NFSU2_TR(0x4fe4cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe4cf:{NFSU2_TR(0x4fe4cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe4d0:{NFSU2_TR(0x4fe4d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe4d6;}}
}
B4fe4d2:L4fe4d2:{c.instructions+=2;NFSU2_TR(0x4fe4d2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4fe4d4:{NFSU2_TR(0x4fe4d4);
{goto L4fe4d9;}
}
B4fe4d6:L4fe4d6:{c.instructions+=1;NFSU2_TR(0x4fe4d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B4fe4d9:L4fe4d9:{c.instructions+=4;NFSU2_TR(0x4fe4d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fe4dc:{NFSU2_TR(0x4fe4dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fe4de:{NFSU2_TR(0x4fe4de);
__builtin_memmove((R+4),(R+24),4);
}
B4fe4e0:{NFSU2_TR(0x4fe4e0);
if(r1(R+518)){{goto L4fe5dd;}}
}
B4fe4e6:L4fe4e6:{c.instructions+=1;NFSU2_TR(0x4fe4e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe4ebull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe4eb:L4fe4eb:{c.instructions+=3;NFSU2_TR(0x4fe4eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fe4ee:{NFSU2_TR(0x4fe4ee);
__builtin_memmove((R+4),(R+24),4);
}
B4fe4f0:{NFSU2_TR(0x4fe4f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe4f5ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe4f5:L4fe4f5:{c.instructions+=7;NFSU2_TR(0x4fe4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fe4f8:{NFSU2_TR(0x4fe4f8);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x60ull))));
}
B4fe4fb:{NFSU2_TR(0x4fe4fb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x60ull))));
}
B4fe4fe:{NFSU2_TR(0x4fe4fe);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4fe501:{NFSU2_TR(0x4fe501);
__builtin_memmove((R+4),(R+24),4);
}
B4fe503:{NFSU2_TR(0x4fe503);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B4fe505:{NFSU2_TR(0x4fe505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe50aull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe50a:L4fe50a:{c.instructions+=4;NFSU2_TR(0x4fe50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe50d:{NFSU2_TR(0x4fe50d);
__builtin_memmove((R+4),(R+24),4);
}
B4fe50f:{NFSU2_TR(0x4fe50f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe513:{NFSU2_TR(0x4fe513);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe518ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe518:L4fe518:{c.instructions+=15;NFSU2_TR(0x4fe518);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe51b:{NFSU2_TR(0x4fe51b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4fe51e:{NFSU2_TR(0x4fe51e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4fe51f:{NFSU2_TR(0x4fe51f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4fe521:{NFSU2_TR(0x4fe521);
__builtin_memmove((R+12),(R+0),4);
}
B4fe523:{NFSU2_TR(0x4fe523);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe527:{NFSU2_TR(0x4fe527);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B4fe52a:{NFSU2_TR(0x4fe52a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4fe52b:{NFSU2_TR(0x4fe52b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4fe52d:{NFSU2_TR(0x4fe52d);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B4fe52f:{NFSU2_TR(0x4fe52f);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4fe531:{NFSU2_TR(0x4fe531);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B4fe534:{NFSU2_TR(0x4fe534);
__builtin_memmove((R+4),(R+24),4);
}
B4fe536:{NFSU2_TR(0x4fe536);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B4fe538:{NFSU2_TR(0x4fe538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe53dull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe53d:L4fe53d:{c.instructions+=7;NFSU2_TR(0x4fe53d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe540:{NFSU2_TR(0x4fe540);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x61ull))));
}
B4fe543:{NFSU2_TR(0x4fe543);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4fe546:{NFSU2_TR(0x4fe546);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B4fe549:{NFSU2_TR(0x4fe549);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B4fe54b:{NFSU2_TR(0x4fe54b);
__builtin_memmove((R+4),(R+24),4);
}
B4fe54d:{NFSU2_TR(0x4fe54d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe552ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe552:L4fe552:{c.instructions+=11;NFSU2_TR(0x4fe552);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe555:{NFSU2_TR(0x4fe555);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe559:{NFSU2_TR(0x4fe559);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4fe55a:{NFSU2_TR(0x4fe55a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4fe55c:{NFSU2_TR(0x4fe55c);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4fe55e:{NFSU2_TR(0x4fe55e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x31ull))));
}
B4fe561:{NFSU2_TR(0x4fe561);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4fe564:{NFSU2_TR(0x4fe564);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4fe567:{NFSU2_TR(0x4fe567);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B4fe569:{NFSU2_TR(0x4fe569);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B4fe56b:{NFSU2_TR(0x4fe56b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe570ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe570:L4fe570:{c.instructions+=6;NFSU2_TR(0x4fe570);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe573:{NFSU2_TR(0x4fe573);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe577:{NFSU2_TR(0x4fe577);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe57a:{NFSU2_TR(0x4fe57a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe57c:{NFSU2_TR(0x4fe57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe580:{NFSU2_TR(0x4fe580);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe588;}}
}
B4fe582:L4fe582:{c.instructions+=2;NFSU2_TR(0x4fe582);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe586:{NFSU2_TR(0x4fe586);
{goto L4fe58e;}
}
B4fe588:L4fe588:{c.instructions+=2;NFSU2_TR(0x4fe588);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4fe58a:{NFSU2_TR(0x4fe58a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe58e:L4fe58e:{c.instructions+=2;NFSU2_TR(0x4fe58e);
__builtin_memmove((R+4),(R+24),4);
}
B4fe590:{NFSU2_TR(0x4fe590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe595ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe595:L4fe595:{c.instructions+=4;NFSU2_TR(0x4fe595);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe598:{NFSU2_TR(0x4fe598);
__builtin_memmove((R+4),(R+24),4);
}
B4fe59a:{NFSU2_TR(0x4fe59a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe59e:{NFSU2_TR(0x4fe59e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe5a3ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe5a3:L4fe5a3:{c.instructions+=4;NFSU2_TR(0x4fe5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe5a6:{NFSU2_TR(0x4fe5a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe5aa:{NFSU2_TR(0x4fe5aa);
__builtin_memmove((R+4),(R+24),4);
}
B4fe5ac:{NFSU2_TR(0x4fe5ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe5b1ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe5b1:L4fe5b1:{c.instructions+=15;NFSU2_TR(0x4fe5b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe5b5:{NFSU2_TR(0x4fe5b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe5b9:{NFSU2_TR(0x4fe5b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe5ba:{NFSU2_TR(0x4fe5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B4fe5c1:{NFSU2_TR(0x4fe5c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe5c5:{NFSU2_TR(0x4fe5c5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe5c6:{NFSU2_TR(0x4fe5c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe5ca:{NFSU2_TR(0x4fe5ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe5cb:{NFSU2_TR(0x4fe5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe5cf:{NFSU2_TR(0x4fe5cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe5d0:{NFSU2_TR(0x4fe5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe5d3:{NFSU2_TR(0x4fe5d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe5d4:{NFSU2_TR(0x4fe5d4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B4fe5d7:{NFSU2_TR(0x4fe5d7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe5d8:{NFSU2_TR(0x4fe5d8);
{goto L4fe68f;}
}
B4fe5dd:L4fe5dd:{c.instructions+=1;NFSU2_TR(0x4fe5dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe5e2ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe5e2:L4fe5e2:{c.instructions+=3;NFSU2_TR(0x4fe5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fe5e5:{NFSU2_TR(0x4fe5e5);
__builtin_memmove((R+4),(R+24),4);
}
B4fe5e7:{NFSU2_TR(0x4fe5e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe5ecull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe5ec:L4fe5ec:{c.instructions+=5;NFSU2_TR(0x4fe5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4fe5ef:{NFSU2_TR(0x4fe5ef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B4fe5f2:{NFSU2_TR(0x4fe5f2);
__builtin_memmove((R+4),(R+24),4);
}
B4fe5f4:{NFSU2_TR(0x4fe5f4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+20))));
}
B4fe5f6:{NFSU2_TR(0x4fe5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe5fbull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe5fb:L4fe5fb:{c.instructions+=4;NFSU2_TR(0x4fe5fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe5fe:{NFSU2_TR(0x4fe5fe);
__builtin_memmove((R+4),(R+24),4);
}
B4fe600:{NFSU2_TR(0x4fe600);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe604:{NFSU2_TR(0x4fe604);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe609ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe609:L4fe609:{c.instructions+=13;NFSU2_TR(0x4fe609);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe60c:{NFSU2_TR(0x4fe60c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe610:{NFSU2_TR(0x4fe610);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4fe611:{NFSU2_TR(0x4fe611);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4fe613:{NFSU2_TR(0x4fe613);
__builtin_memmove((R+12),(R+0),4);
}
B4fe615:{NFSU2_TR(0x4fe615);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe619:{NFSU2_TR(0x4fe619);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B4fe61a:{NFSU2_TR(0x4fe61a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B4fe61c:{NFSU2_TR(0x4fe61c);
w4(R+12,sar<u32>(r4(R+12),u64(u32(0x1ull))));
}
B4fe61e:{NFSU2_TR(0x4fe61e);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4fe620:{NFSU2_TR(0x4fe620);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B4fe623:{NFSU2_TR(0x4fe623);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B4fe625:{NFSU2_TR(0x4fe625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe62aull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe62a:L4fe62a:{c.instructions+=6;NFSU2_TR(0x4fe62a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe62d:{NFSU2_TR(0x4fe62d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe631:{NFSU2_TR(0x4fe631);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe635:{NFSU2_TR(0x4fe635);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe638:{NFSU2_TR(0x4fe638);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe63a:{NFSU2_TR(0x4fe63a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fe642;}}
}
B4fe63c:L4fe63c:{c.instructions+=2;NFSU2_TR(0x4fe63c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe640:{NFSU2_TR(0x4fe640);
{goto L4fe648;}
}
B4fe642:L4fe642:{c.instructions+=2;NFSU2_TR(0x4fe642);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B4fe644:{NFSU2_TR(0x4fe644);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe648:L4fe648:{c.instructions+=2;NFSU2_TR(0x4fe648);
__builtin_memmove((R+4),(R+24),4);
}
B4fe64a:{NFSU2_TR(0x4fe64a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe64full));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe64f:L4fe64f:{c.instructions+=4;NFSU2_TR(0x4fe64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe652:{NFSU2_TR(0x4fe652);
__builtin_memmove((R+4),(R+24),4);
}
B4fe654:{NFSU2_TR(0x4fe654);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe658:{NFSU2_TR(0x4fe658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe65dull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe65d:L4fe65d:{c.instructions+=4;NFSU2_TR(0x4fe65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe660:{NFSU2_TR(0x4fe660);
__builtin_memmove((R+4),(R+24),4);
}
B4fe662:{NFSU2_TR(0x4fe662);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe666:{NFSU2_TR(0x4fe666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe66bull));
TAIL_STATIC(0x6f4820u,6f4);
}
B4fe66b:L4fe66b:{c.instructions+=13;NFSU2_TR(0x4fe66b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe66f:{NFSU2_TR(0x4fe66f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe673:{NFSU2_TR(0x4fe673);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe676:{NFSU2_TR(0x4fe676);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe677:{NFSU2_TR(0x4fe677);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4fe67e:{NFSU2_TR(0x4fe67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe682:{NFSU2_TR(0x4fe682);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe683:{NFSU2_TR(0x4fe683);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe687:{NFSU2_TR(0x4fe687);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe688:{NFSU2_TR(0x4fe688);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe68c:{NFSU2_TR(0x4fe68c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe68d:{NFSU2_TR(0x4fe68d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe68e:{NFSU2_TR(0x4fe68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe68f:L4fe68f:{c.instructions+=4;NFSU2_TR(0x4fe68f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe690:{NFSU2_TR(0x4fe690);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe691:{NFSU2_TR(0x4fe691);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe692:{NFSU2_TR(0x4fe692);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe697ull));
TAIL_STATIC(0x700150u,700);
}
B4fe697:L4fe697:{c.instructions+=7;NFSU2_TR(0x4fe697);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4fe69a:{NFSU2_TR(0x4fe69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe69b:{NFSU2_TR(0x4fe69b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe69c:{NFSU2_TR(0x4fe69c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fe69d:{NFSU2_TR(0x4fe69d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fe69e:{NFSU2_TR(0x4fe69e);
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
B4fe6a1:{NFSU2_TR(0x4fe6a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe6b0:L4fe6b0:{c.instructions+=65;NFSU2_TR(0x4fe6b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4fe6b3:{NFSU2_TR(0x4fe6b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe6b7:{NFSU2_TR(0x4fe6b7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6ba:{NFSU2_TR(0x4fe6ba);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6bd:{NFSU2_TR(0x4fe6bd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6c0:{NFSU2_TR(0x4fe6c0);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6c3:{NFSU2_TR(0x4fe6c3);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4fe6c5:{NFSU2_TR(0x4fe6c5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6c7:{NFSU2_TR(0x4fe6c7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6ca:{NFSU2_TR(0x4fe6ca);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6cc:{NFSU2_TR(0x4fe6cc);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6cf:{NFSU2_TR(0x4fe6cf);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4fe6d1:{NFSU2_TR(0x4fe6d1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6d4:{NFSU2_TR(0x4fe6d4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6d6:{NFSU2_TR(0x4fe6d6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6d9:{NFSU2_TR(0x4fe6d9);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6db:{NFSU2_TR(0x4fe6db);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4fe6dd:{NFSU2_TR(0x4fe6dd);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe6e1:{NFSU2_TR(0x4fe6e1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6e4:{NFSU2_TR(0x4fe6e4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6e6:{NFSU2_TR(0x4fe6e6);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6e9:{NFSU2_TR(0x4fe6e9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6eb:{NFSU2_TR(0x4fe6eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4fe6ed:{NFSU2_TR(0x4fe6ed);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B4fe6ef:{NFSU2_TR(0x4fe6ef);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe6f3:{NFSU2_TR(0x4fe6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe6f7:{NFSU2_TR(0x4fe6f7);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe6fa:{NFSU2_TR(0x4fe6fa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe6fd:{NFSU2_TR(0x4fe6fd);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe700:{NFSU2_TR(0x4fe700);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe703:{NFSU2_TR(0x4fe703);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4fe705:{NFSU2_TR(0x4fe705);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4fe707:{NFSU2_TR(0x4fe707);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe70b:{NFSU2_TR(0x4fe70b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe70d:{NFSU2_TR(0x4fe70d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4fe70f:{NFSU2_TR(0x4fe70f);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe712:{NFSU2_TR(0x4fe712);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe715:{NFSU2_TR(0x4fe715);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe718:{NFSU2_TR(0x4fe718);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe71b:{NFSU2_TR(0x4fe71b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4fe71d:{NFSU2_TR(0x4fe71d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fe721:{NFSU2_TR(0x4fe721);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe725:{NFSU2_TR(0x4fe725);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe728:{NFSU2_TR(0x4fe728);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe72b:{NFSU2_TR(0x4fe72b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe72d:{NFSU2_TR(0x4fe72d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe72f:{NFSU2_TR(0x4fe72f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe732:{NFSU2_TR(0x4fe732);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe735:{NFSU2_TR(0x4fe735);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4fe737:{NFSU2_TR(0x4fe737);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe73a:{NFSU2_TR(0x4fe73a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe73e:{NFSU2_TR(0x4fe73e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe741:{NFSU2_TR(0x4fe741);
__builtin_memmove((R+4),(R+0),4);
}
B4fe743:{NFSU2_TR(0x4fe743);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4fe745:{NFSU2_TR(0x4fe745);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe749:{NFSU2_TR(0x4fe749);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4fe74b:{NFSU2_TR(0x4fe74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe74e:{NFSU2_TR(0x4fe74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe752:{NFSU2_TR(0x4fe752);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe755:{NFSU2_TR(0x4fe755);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4fe757:{NFSU2_TR(0x4fe757);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe75b:{NFSU2_TR(0x4fe75b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe75f:{NFSU2_TR(0x4fe75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe762:{NFSU2_TR(0x4fe762);
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
B4fe765:{NFSU2_TR(0x4fe765);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe770:L4fe770:{c.instructions+=26;NFSU2_TR(0x4fe770);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4fe773:{NFSU2_TR(0x4fe773);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe777:{NFSU2_TR(0x4fe777);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe77b:{NFSU2_TR(0x4fe77b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe77d:{NFSU2_TR(0x4fe77d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe781:{NFSU2_TR(0x4fe781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe785:{NFSU2_TR(0x4fe785);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe789:{NFSU2_TR(0x4fe789);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe78c:{NFSU2_TR(0x4fe78c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe790:{NFSU2_TR(0x4fe790);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe794:{NFSU2_TR(0x4fe794);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe797:{NFSU2_TR(0x4fe797);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe79b:{NFSU2_TR(0x4fe79b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe79f:{NFSU2_TR(0x4fe79f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4fe7a2:{NFSU2_TR(0x4fe7a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe7a6:{NFSU2_TR(0x4fe7a6);
__builtin_memmove((R+4),(R+0),4);
}
B4fe7a8:{NFSU2_TR(0x4fe7a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4fe7aa:{NFSU2_TR(0x4fe7aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe7ae:{NFSU2_TR(0x4fe7ae);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe7b2:{NFSU2_TR(0x4fe7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe7b5:{NFSU2_TR(0x4fe7b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe7b9:{NFSU2_TR(0x4fe7b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe7bc:{NFSU2_TR(0x4fe7bc);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe7c0:{NFSU2_TR(0x4fe7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe7c3:{NFSU2_TR(0x4fe7c3);
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
B4fe7c6:{NFSU2_TR(0x4fe7c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe7d0:L4fe7d0:{c.instructions+=27;NFSU2_TR(0x4fe7d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4fe7d3:{NFSU2_TR(0x4fe7d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe7d7:{NFSU2_TR(0x4fe7d7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe7d9:{NFSU2_TR(0x4fe7d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe7dd:{NFSU2_TR(0x4fe7dd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fe7df:{NFSU2_TR(0x4fe7df);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe7e3:{NFSU2_TR(0x4fe7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe7e7:{NFSU2_TR(0x4fe7e7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe7ea:{NFSU2_TR(0x4fe7ea);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fe7ed:{NFSU2_TR(0x4fe7ed);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe7f1:{NFSU2_TR(0x4fe7f1);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe7f4:{NFSU2_TR(0x4fe7f4);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fe7f7:{NFSU2_TR(0x4fe7f7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe7fb:{NFSU2_TR(0x4fe7fb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe7fe:{NFSU2_TR(0x4fe7fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe802:{NFSU2_TR(0x4fe802);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fe805:{NFSU2_TR(0x4fe805);
__builtin_memmove((R+4),(R+0),4);
}
B4fe807:{NFSU2_TR(0x4fe807);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4fe809:{NFSU2_TR(0x4fe809);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe80d:{NFSU2_TR(0x4fe80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe810:{NFSU2_TR(0x4fe810);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe814:{NFSU2_TR(0x4fe814);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe818:{NFSU2_TR(0x4fe818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe81b:{NFSU2_TR(0x4fe81b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe81f:{NFSU2_TR(0x4fe81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe822:{NFSU2_TR(0x4fe822);
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
B4fe825:{NFSU2_TR(0x4fe825);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe830:L4fe830:{c.instructions+=27;NFSU2_TR(0x4fe830);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4fe833:{NFSU2_TR(0x4fe833);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe837:{NFSU2_TR(0x4fe837);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe839:{NFSU2_TR(0x4fe839);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe83d:{NFSU2_TR(0x4fe83d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fe83f:{NFSU2_TR(0x4fe83f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe843:{NFSU2_TR(0x4fe843);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe847:{NFSU2_TR(0x4fe847);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe84a:{NFSU2_TR(0x4fe84a);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fe84d:{NFSU2_TR(0x4fe84d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe851:{NFSU2_TR(0x4fe851);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe854:{NFSU2_TR(0x4fe854);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fe857:{NFSU2_TR(0x4fe857);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe85b:{NFSU2_TR(0x4fe85b);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fe85e:{NFSU2_TR(0x4fe85e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe862:{NFSU2_TR(0x4fe862);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4fe865:{NFSU2_TR(0x4fe865);
__builtin_memmove((R+4),(R+0),4);
}
B4fe867:{NFSU2_TR(0x4fe867);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4fe869:{NFSU2_TR(0x4fe869);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe86d:{NFSU2_TR(0x4fe86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe870:{NFSU2_TR(0x4fe870);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fe874:{NFSU2_TR(0x4fe874);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe878:{NFSU2_TR(0x4fe878);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe87b:{NFSU2_TR(0x4fe87b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fe87f:{NFSU2_TR(0x4fe87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe882:{NFSU2_TR(0x4fe882);
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
B4fe885:{NFSU2_TR(0x4fe885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe890:L4fe890:{c.instructions+=3;NFSU2_TR(0x4fe890);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fe893:{NFSU2_TR(0x4fe893);
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
B4fe895:{NFSU2_TR(0x4fe895);
if(r1(R+518)){{goto L4fe8a1;}}
}
B4fe897:L4fe897:{c.instructions+=4;NFSU2_TR(0x4fe897);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe89a:{NFSU2_TR(0x4fe89a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fe89d:{NFSU2_TR(0x4fe89d);
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
B4fe89f:{NFSU2_TR(0x4fe89f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe897u);}goto L4fe897;}}
}
B4fe8a1:L4fe8a1:{c.instructions+=2;NFSU2_TR(0x4fe8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe8a4:{NFSU2_TR(0x4fe8a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe8b0:L4fe8b0:{c.instructions+=6;NFSU2_TR(0x4fe8b0);
__builtin_memmove((R+0),(R+4),4);
}
B4fe8b2:{NFSU2_TR(0x4fe8b2);
w4(R+4,u32(0xabadcafeull));
}
B4fe8b7:{NFSU2_TR(0x4fe8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe8ba:{NFSU2_TR(0x4fe8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe8bd:{NFSU2_TR(0x4fe8bd);
u8 U[4];
w4(U+0,u32(0x79aa34ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4fe8c3:{NFSU2_TR(0x4fe8c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe8d0:L4fe8d0:{c.instructions+=3;NFSU2_TR(0x4fe8d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fe8d3:{NFSU2_TR(0x4fe8d3);
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
B4fe8d5:{NFSU2_TR(0x4fe8d5);
if(r1(R+518)){{goto L4fe8df;}}
}
B4fe8d7:L4fe8d7:{c.instructions+=2;NFSU2_TR(0x4fe8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe8da:{NFSU2_TR(0x4fe8da);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe890u);}goto L4fe890;}
}
B4fe8df:L4fe8df:{c.instructions+=2;NFSU2_TR(0x4fe8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe8e2:{NFSU2_TR(0x4fe8e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe8f0:L4fe8f0:{c.instructions+=5;NFSU2_TR(0x4fe8f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe8f1:{NFSU2_TR(0x4fe8f1);
__builtin_memmove((R+24),(R+4),4);
}
B4fe8f3:{NFSU2_TR(0x4fe8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe8f6:{NFSU2_TR(0x4fe8f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe8f7:{NFSU2_TR(0x4fe8f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe8fcull));
TAIL_STATIC(0x575630u,575);
}
B4fe8fc:L4fe8fc:{c.instructions+=4;NFSU2_TR(0x4fe8fc);
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
B4fe8ff:{NFSU2_TR(0x4fe8ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fe906:{NFSU2_TR(0x4fe906);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe907:{NFSU2_TR(0x4fe907);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe910:L4fe910:{c.instructions+=6;NFSU2_TR(0x4fe910);
__builtin_memmove((R+0),(R+4),4);
}
B4fe912:{NFSU2_TR(0x4fe912);
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
B4fe914:{NFSU2_TR(0x4fe914);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4fe916:{NFSU2_TR(0x4fe916);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe919:{NFSU2_TR(0x4fe919);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe91c:{NFSU2_TR(0x4fe91c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe920:L4fe920:{c.instructions+=10;NFSU2_TR(0x4fe920);
__builtin_memmove((R+0),(R+4),4);
}
B4fe922:{NFSU2_TR(0x4fe922);
w4(R+4,u32(0xabadcafeull));
}
B4fe927:{NFSU2_TR(0x4fe927);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe92a:{NFSU2_TR(0x4fe92a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe92d:{NFSU2_TR(0x4fe92d);
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
B4fe92f:{NFSU2_TR(0x4fe92f);
u8 U[4];
w4(U+0,u32(0x79aa38ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4fe935:{NFSU2_TR(0x4fe935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe938:{NFSU2_TR(0x4fe938);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe93b:{NFSU2_TR(0x4fe93b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe93e:{NFSU2_TR(0x4fe93e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe940:L4fe940:{c.instructions+=4;NFSU2_TR(0x4fe940);
__builtin_memmove((R+0),(R+4),4);
}
B4fe942:{NFSU2_TR(0x4fe942);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fe946:{NFSU2_TR(0x4fe946);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fe949:{NFSU2_TR(0x4fe949);
if(r1(R+518)){{goto L4fe955;}}
}
B4fe94b:L4fe94b:{c.instructions+=2;NFSU2_TR(0x4fe94b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4fe952:{NFSU2_TR(0x4fe952);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe955:L4fe955:{c.instructions+=3;NFSU2_TR(0x4fe955);
__builtin_memmove((R+4),gp(0x838478),4);
}
B4fe95b:{NFSU2_TR(0x4fe95b);
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
B4fe95d:{NFSU2_TR(0x4fe95d);
if(r1(R+518)){{goto L4fe967;}}
}
B4fe95f:L4fe95f:{c.instructions+=3;NFSU2_TR(0x4fe95f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4fe961:{NFSU2_TR(0x4fe961);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fe965:{NFSU2_TR(0x4fe965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4fe967:L4fe967:{c.instructions+=1;NFSU2_TR(0x4fe967);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe970:L4fe970:{c.instructions+=5;NFSU2_TR(0x4fe970);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe971:{NFSU2_TR(0x4fe971);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe972:{NFSU2_TR(0x4fe972);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe973:{NFSU2_TR(0x4fe973);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe978:{NFSU2_TR(0x4fe978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe97dull));
TAIL_STATIC(0x575620u,575);
}
B4fe97d:L4fe97d:{c.instructions+=4;NFSU2_TR(0x4fe97d);
__builtin_memmove((R+24),(R+0),4);
}
B4fe97f:{NFSU2_TR(0x4fe97f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fe981:{NFSU2_TR(0x4fe981);
w4(R+4,u32(0x35ull));
}
B4fe986:{NFSU2_TR(0x4fe986);
__builtin_memmove((R+28),(R+24),4);
}
B4fe988:L4fe988:{c.instructions+=1;NFSU2_TR(0x4fe988);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4fe98a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe988u);}goto L4fe988;}
}
B4fe98a:L4fe98a:{c.instructions+=5;NFSU2_TR(0x4fe98a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe98e:{NFSU2_TR(0x4fe98e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fe991:{NFSU2_TR(0x4fe991);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4fe993:{NFSU2_TR(0x4fe993);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe995:{NFSU2_TR(0x4fe995);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fe9d7;}}
}
B4fe997:L4fe997:{c.instructions+=3;NFSU2_TR(0x4fe997);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe998:{NFSU2_TR(0x4fe998);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fe99c:{NFSU2_TR(0x4fe99c);
__builtin_memmove((R+16),(R+16),4);
}
B4fe9a0:L4fe9a0:{c.instructions+=1;NFSU2_TR(0x4fe9a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fe9a2:L4fe9a2:{c.instructions+=2;NFSU2_TR(0x4fe9a2);
u8 U[4];
w4(U+0,u32(0x35ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe9a4:{NFSU2_TR(0x4fe9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe9a9ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4fe9a9:L4fe9a9:{c.instructions+=4;NFSU2_TR(0x4fe9a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4fe9ac:{NFSU2_TR(0x4fe9ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fe9af:{NFSU2_TR(0x4fe9af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fe9b1:{NFSU2_TR(0x4fe9b1);
if(r1(R+518)){{goto L4fe9bb;}}
}
B4fe9b3:L4fe9b3:{c.instructions+=3;NFSU2_TR(0x4fe9b3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4fe9b4:{NFSU2_TR(0x4fe9b4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x64ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fe9b7:{NFSU2_TR(0x4fe9b7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe9a2u);}goto L4fe9a2;}}
}
B4fe9b9:L4fe9b9:{c.instructions+=1;NFSU2_TR(0x4fe9b9);
{goto L4fe9cd;}
}
B4fe9bb:L4fe9bb:{c.instructions+=3;NFSU2_TR(0x4fe9bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f6cd0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4fe9c2:{NFSU2_TR(0x4fe9c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fe9c6:{NFSU2_TR(0x4fe9c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w4(U+8,u32(0x1ull));
s4(u32(r4(U+4)),r4(U+8));
}
B4fe9cd:L4fe9cd:{c.instructions+=4;NFSU2_TR(0x4fe9cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fe9d1:{NFSU2_TR(0x4fe9d1);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B4fe9d2:{NFSU2_TR(0x4fe9d2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fe9d4:{NFSU2_TR(0x4fe9d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fe9a0u);}goto L4fe9a0;}}
}
B4fe9d6:L4fe9d6:{c.instructions+=1;NFSU2_TR(0x4fe9d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fe9d7:L4fe9d7:{c.instructions+=2;NFSU2_TR(0x4fe9d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe9d8:{NFSU2_TR(0x4fe9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fe9ddull));
TAIL_STATIC(0x575630u,575);
}
B4fe9dd:L4fe9dd:{c.instructions+=5;NFSU2_TR(0x4fe9dd);
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
B4fe9e0:{NFSU2_TR(0x4fe9e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fe9e1:{NFSU2_TR(0x4fe9e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fe9e2:{NFSU2_TR(0x4fe9e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fe9e3:{NFSU2_TR(0x4fe9e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fe9f0:L4fe9f0:{c.instructions+=14;NFSU2_TR(0x4fe9f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe9f1:{NFSU2_TR(0x4fe9f1);
__builtin_memmove((R+20),(R+16),4);
}
B4fe9f3:{NFSU2_TR(0x4fe9f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4fe9f6:{NFSU2_TR(0x4fe9f6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe9f8:{NFSU2_TR(0x4fe9f8);
u8 U[4];
w4(U+0,u32(0x776f4bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fe9fd:{NFSU2_TR(0x4fe9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fea03:{NFSU2_TR(0x4fea03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea04:{NFSU2_TR(0x4fea04);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fea0b:{NFSU2_TR(0x4fea0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x94cull))));
}
B4fea11:{NFSU2_TR(0x4fea11);
__builtin_memmove((R+0),gp(0x89e7e4),1);
}
B4fea16:{NFSU2_TR(0x4fea16);
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
B4fea18:{NFSU2_TR(0x4fea18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea19:{NFSU2_TR(0x4fea19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea1a:{NFSU2_TR(0x4fea1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feacd;}}
}
B4fea20:L4fea20:{c.instructions+=3;NFSU2_TR(0x4fea20);
__builtin_memmove((R+0),gp(0x89e7a8),4);
}
B4fea25:{NFSU2_TR(0x4fea25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fea27:{NFSU2_TR(0x4fea27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fea2d;}}
}
B4fea29:L4fea29:{c.instructions+=2;NFSU2_TR(0x4fea29);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fea2b:{NFSU2_TR(0x4fea2b);
{goto L4fea5b;}
}
B4fea2d:L4fea2d:{c.instructions+=3;NFSU2_TR(0x4fea2d);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4fea32:{NFSU2_TR(0x4fea32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea33:{NFSU2_TR(0x4fea33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fea38ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4fea38:L4fea38:{c.instructions+=7;NFSU2_TR(0x4fea38);
__builtin_memmove((R+4),gp(0x89e7a4),4);
}
B4fea3e:{NFSU2_TR(0x4fea3e);
__builtin_memmove((R+8),gp(0x89e7a8),4);
}
B4fea44:{NFSU2_TR(0x4fea44);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4fea46:{NFSU2_TR(0x4fea46);
u8 U[13];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(s32(s8(r1(U+12)))));
}
B4fea4e:{NFSU2_TR(0x4fea4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fea51:{NFSU2_TR(0x4fea51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fea54:{NFSU2_TR(0x4fea54);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fea5b;}}
}
B4fea56:L4fea56:{c.instructions+=1;NFSU2_TR(0x4fea56);
w4(R+28,u32(0x10ull));
}
B4fea5b:L4fea5b:{c.instructions+=2;NFSU2_TR(0x4fea5b);
w4(R+4,u32(0x81e810ull));
}
B4fea60:{NFSU2_TR(0x4fea60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fea65ull));
TAIL_STATIC(0x41aaf0u,41a);
}
B4fea65:L4fea65:{c.instructions+=3;NFSU2_TR(0x4fea65);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4fea67:{NFSU2_TR(0x4fea67);
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
B4fea69:{NFSU2_TR(0x4fea69);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4feacd;}}
}
B4fea6b:L4fea6b:{c.instructions+=1;NFSU2_TR(0x4fea6b);
{goto L4fea70;}
}
B4fea70:L4fea70:{c.instructions+=2;NFSU2_TR(0x4fea70);
w4(R+4,u32(0x81e810ull));
}
B4fea75:{NFSU2_TR(0x4fea75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fea7aull));
TAIL_STATIC(0x40bde0u,40b);
}
B4fea7a:L4fea7a:{c.instructions+=2;NFSU2_TR(0x4fea7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fea7c:{NFSU2_TR(0x4fea7c);
if(r1(R+518)){{goto L4feac8;}}
}
B4fea7e:L4fea7e:{c.instructions+=9;NFSU2_TR(0x4fea7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea80:{NFSU2_TR(0x4fea80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea82:{NFSU2_TR(0x4fea82);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea87:{NFSU2_TR(0x4fea87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea88:{NFSU2_TR(0x4fea88);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea8a:{NFSU2_TR(0x4fea8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4fea8d:{NFSU2_TR(0x4fea8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea8e:{NFSU2_TR(0x4fea8e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4fea92:{NFSU2_TR(0x4fea92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fea97ull));
TAIL_STATIC(0x6373e0u,637);
}
B4fea97:L4fea97:{c.instructions+=5;NFSU2_TR(0x4fea97);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4fea9b:{NFSU2_TR(0x4fea9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fea9c:{NFSU2_TR(0x4fea9c);
w4(R+4,u32(0x89e7a0ull));
}
B4feaa1:{NFSU2_TR(0x4feaa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x960ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4feaac:{NFSU2_TR(0x4feaac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feab1ull));
TAIL_STATIC(0x601600u,601);
}
B4feab1:L4feab1:{c.instructions+=3;NFSU2_TR(0x4feab1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4feab8:{NFSU2_TR(0x4feab8);
u8 U[8];
w4(U+0,u32(u32(u32(0x95cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4feac3:{NFSU2_TR(0x4feac3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feac8ull));
TAIL_STATIC(0x4022c0u,402);
}
B4feac8:L4feac8:{c.instructions+=3;NFSU2_TR(0x4feac8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4feac9:{NFSU2_TR(0x4feac9);
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
B4feacb:{NFSU2_TR(0x4feacb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fea70u);}goto L4fea70;}}
}
B4feacd:L4feacd:{c.instructions+=7;NFSU2_TR(0x4feacd);
u8 U[8];
w4(U+0,u32(u32(u32(0x954ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fead4:{NFSU2_TR(0x4fead4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fead5:{NFSU2_TR(0x4fead5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4feadc:{NFSU2_TR(0x4feadc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4feadd:{NFSU2_TR(0x4feadd);
__builtin_memmove((R+16),(R+20),4);
}
B4feadf:{NFSU2_TR(0x4feadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4feae0:{NFSU2_TR(0x4feae0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4feaf0:L4feaf0:{c.instructions+=4;NFSU2_TR(0x4feaf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4feaf4:{NFSU2_TR(0x4feaf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4feaf7:{NFSU2_TR(0x4feaf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4feaf9:{NFSU2_TR(0x4feaf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb0e;}}
}
B4feafb:L4feafb:{c.instructions+=3;NFSU2_TR(0x4feafb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feafd:{NFSU2_TR(0x4feafd);
w4(R+4,u32(0x89e7a0ull));
}
B4feb02:{NFSU2_TR(0x4feb02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feb07ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B4feb07:L4feb07:{c.instructions+=2;NFSU2_TR(0x4feb07);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4feb0a:{NFSU2_TR(0x4feb0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4feb0e:L4feb0e:{c.instructions+=5;NFSU2_TR(0x4feb0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb0f:{NFSU2_TR(0x4feb0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb10:{NFSU2_TR(0x4feb10);
__builtin_memmove((R+24),gp(0x7faa78),4);
}
B4feb16:{NFSU2_TR(0x4feb16);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4feb19:{NFSU2_TR(0x4feb19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb2f;}}
}
B4feb1b:L4feb1b:{c.instructions+=3;NFSU2_TR(0x4feb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4feb1f:{NFSU2_TR(0x4feb1f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4feb22:{NFSU2_TR(0x4feb22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb5c;}}
}
B4feb24:L4feb24:{c.instructions+=1;NFSU2_TR(0x4feb24);
__builtin_memmove((R+24),gp(0x7faa7c),4);
}
B4feb2a:L4feb2a:{c.instructions+=2;NFSU2_TR(0x4feb2a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4feb2d:{NFSU2_TR(0x4feb2d);
if(r1(R+518)){{goto L4feb93;}}
}
B4feb2f:L4feb2f:{c.instructions+=1;NFSU2_TR(0x4feb2f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4feb33:L4feb33:{c.instructions+=6;NFSU2_TR(0x4feb33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb35:{NFSU2_TR(0x4feb35);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb37:{NFSU2_TR(0x4feb37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb39:{NFSU2_TR(0x4feb39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb3a:{NFSU2_TR(0x4feb3a);
__builtin_memmove((R+4),(R+12),4);
}
B4feb3c:{NFSU2_TR(0x4feb3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feb41ull));
TAIL_STATIC(0x610270u,610);
}
B4feb41:L4feb41:{c.instructions+=3;NFSU2_TR(0x4feb41);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb43:{NFSU2_TR(0x4feb43);
__builtin_memmove((R+4),(R+12),4);
}
B4feb45:{NFSU2_TR(0x4feb45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feb4aull));
TAIL_STATIC(0x637040u,637);
}
B4feb4a:L4feb4a:{c.instructions+=4;NFSU2_TR(0x4feb4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4feb4e:{NFSU2_TR(0x4feb4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb4f:{NFSU2_TR(0x4feb4f);
__builtin_memmove((R+4),(R+12),4);
}
B4feb51:{NFSU2_TR(0x4feb51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feb56ull));
TAIL_STATIC(0x61c280u,61c);
}
B4feb56:L4feb56:{c.instructions+=4;NFSU2_TR(0x4feb56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4feb57:{NFSU2_TR(0x4feb57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4feb58:{NFSU2_TR(0x4feb58);
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
B4feb5b:{NFSU2_TR(0x4feb5b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4feb5c:L4feb5c:{c.instructions+=2;NFSU2_TR(0x4feb5c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x65ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4feb5f:{NFSU2_TR(0x4feb5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb69;}}
}
B4feb61:L4feb61:{c.instructions+=2;NFSU2_TR(0x4feb61);
__builtin_memmove((R+24),gp(0x7faa80),4);
}
B4feb67:{NFSU2_TR(0x4feb67);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4feb2au);}goto L4feb2a;}
}
B4feb69:L4feb69:{c.instructions+=2;NFSU2_TR(0x4feb69);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x66ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4feb6c:{NFSU2_TR(0x4feb6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb76;}}
}
B4feb6e:L4feb6e:{c.instructions+=2;NFSU2_TR(0x4feb6e);
__builtin_memmove((R+24),gp(0x7faa84),4);
}
B4feb74:{NFSU2_TR(0x4feb74);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4feb2au);}goto L4feb2a;}
}
B4feb76:L4feb76:{c.instructions+=2;NFSU2_TR(0x4feb76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x67ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4feb79:{NFSU2_TR(0x4feb79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb83;}}
}
B4feb7b:L4feb7b:{c.instructions+=2;NFSU2_TR(0x4feb7b);
__builtin_memmove((R+24),gp(0x7faa88),4);
}
B4feb81:{NFSU2_TR(0x4feb81);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4feb2au);}goto L4feb2a;}
}
B4feb83:L4feb83:{c.instructions+=2;NFSU2_TR(0x4feb83);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x68ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x68ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4feb86:{NFSU2_TR(0x4feb86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feb93;}}
}
B4feb88:L4feb88:{c.instructions+=3;NFSU2_TR(0x4feb88);
__builtin_memmove((R+24),gp(0x7faa8c),4);
}
B4feb8e:{NFSU2_TR(0x4feb8e);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4feb91:{NFSU2_TR(0x4feb91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4feb2fu);}goto L4feb2f;}}
}
B4feb93:L4feb93:{c.instructions+=3;NFSU2_TR(0x4feb93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb94:{NFSU2_TR(0x4feb94);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feb95:{NFSU2_TR(0x4feb95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feb9aull));
TAIL_STATIC(0x570a30u,570);
}
B4feb9a:L4feb9a:{c.instructions+=4;NFSU2_TR(0x4feb9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4feb9c:{NFSU2_TR(0x4feb9c);
w4(R+20,u32(0x1aull));
}
B4feba1:{NFSU2_TR(0x4feba1);
w4(R+24,u32(0x7f6da4ull));
}
B4feba6:{NFSU2_TR(0x4feba6);
if(r1(R+518)){{goto L4febad;}}
}
B4feba8:L4feba8:{c.instructions+=1;NFSU2_TR(0x4feba8);
w4(R+24,u32(0x7f6dc0ull));
}
B4febad:L4febad:{c.instructions+=3;NFSU2_TR(0x4febad);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4febb1:{NFSU2_TR(0x4febb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4febb3:{NFSU2_TR(0x4febb3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4febd4;}}
}
B4febb5:L4febb5:{c.instructions+=7;NFSU2_TR(0x4febb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4febb9:{NFSU2_TR(0x4febb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4febbb:{NFSU2_TR(0x4febbb);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B4febc1:{NFSU2_TR(0x4febc1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4febc7:{NFSU2_TR(0x4febc7);
u8 U[13];
w4(U+0,u32(u32(u32(0x88aull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B4febce:{NFSU2_TR(0x4febce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4febd0:{NFSU2_TR(0x4febd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4febda;}}
}
B4febd2:L4febd2:{c.instructions+=1;NFSU2_TR(0x4febd2);
{goto L4febe4;}
}
B4febd4:L4febd4:{c.instructions+=2;NFSU2_TR(0x4febd4);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4febd8:{NFSU2_TR(0x4febd8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4febe4;}}
}
B4febda:L4febda:{c.instructions+=2;NFSU2_TR(0x4febda);
w4(R+20,u32(0x3ull));
}
B4febdf:{NFSU2_TR(0x4febdf);
w4(R+24,u32(0x7f6ddcull));
}
B4febe4:L4febe4:{c.instructions+=3;NFSU2_TR(0x4febe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4febeb:{NFSU2_TR(0x4febeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4febec:{NFSU2_TR(0x4febec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4febf1ull));
TAIL_STATIC(0x575620u,575);
}
B4febf1:L4febf1:{c.instructions+=5;NFSU2_TR(0x4febf1);
__builtin_memmove((R+28),(R+0),4);
}
B4febf3:{NFSU2_TR(0x4febf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4febf6:{NFSU2_TR(0x4febf6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4febf8:{NFSU2_TR(0x4febf8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4febfa:{NFSU2_TR(0x4febfa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fec0b;}}
}
B4febfc:L4febfc:{c.instructions+=1;NFSU2_TR(0x4febfc);
__builtin_memmove((R+16),(R+16),4);
}
B4fec00:L4fec00:{c.instructions+=5;NFSU2_TR(0x4fec00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B4fec03:{NFSU2_TR(0x4fec03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fec06:{NFSU2_TR(0x4fec06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fec07:{NFSU2_TR(0x4fec07);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fec09:{NFSU2_TR(0x4fec09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fec00u);}goto L4fec00;}}
}
B4fec0b:L4fec0b:{c.instructions+=3;NFSU2_TR(0x4fec0b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4fec0d:{NFSU2_TR(0x4fec0d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fec0f:{NFSU2_TR(0x4fec0f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fec2b;}}
}
B4fec11:L4fec11:{c.instructions+=3;NFSU2_TR(0x4fec11);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4fec14:{NFSU2_TR(0x4fec14);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fec15:{NFSU2_TR(0x4fec15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fec1aull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4fec1a:L4fec1a:{c.instructions+=7;NFSU2_TR(0x4fec1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B4fec1d:{NFSU2_TR(0x4fec1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fec20:{NFSU2_TR(0x4fec20);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fec23:{NFSU2_TR(0x4fec23);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4fec24:{NFSU2_TR(0x4fec24);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fec26:{NFSU2_TR(0x4fec26);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B4fec29:{NFSU2_TR(0x4fec29);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fec11u);}goto L4fec11;}}
}
B4fec2b:L4fec2b:{c.instructions+=1;NFSU2_TR(0x4fec2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3cf5c28full));
s4(u32(r4(U+0)),r4(U+4));
}
B4fec33:L4fec33:{c.instructions+=6;NFSU2_TR(0x4fec33);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fec35:{NFSU2_TR(0x4fec35);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fec39:{NFSU2_TR(0x4fec39);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B4fec3b:{NFSU2_TR(0x4fec3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fec43:{NFSU2_TR(0x4fec43);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fec47:{NFSU2_TR(0x4fec47);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fec33u);}goto L4fec33;}}
}
B4fec49:L4fec49:{c.instructions+=1;NFSU2_TR(0x4fec49);
__builtin_memmove((R+16),(R+16),4);
}
B4fec50:L4fec50:{c.instructions+=6;NFSU2_TR(0x4fec50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fec54:{NFSU2_TR(0x4fec54);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4fec57:{NFSU2_TR(0x4fec57);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4fec5b:{NFSU2_TR(0x4fec5b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fec5d:{NFSU2_TR(0x4fec5d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+24,u32(s32(s8(r1(U+0)))));
}
B4fec60:{NFSU2_TR(0x4fec60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fec6a;}}
}
B4fec62:L4fec62:{c.instructions+=3;NFSU2_TR(0x4fec62);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4fec66:{NFSU2_TR(0x4fec66);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4fec68:{NFSU2_TR(0x4fec68);
if(r1(R+518)){{goto L4fecce;}}
}
B4fec6a:L4fec6a:{c.instructions+=7;NFSU2_TR(0x4fec6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4fec6e:{NFSU2_TR(0x4fec6e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fec70:{NFSU2_TR(0x4fec70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fec72:{NFSU2_TR(0x4fec72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fec74:{NFSU2_TR(0x4fec74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fec75:{NFSU2_TR(0x4fec75);
__builtin_memmove((R+4),(R+12),4);
}
B4fec77:{NFSU2_TR(0x4fec77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fec7cull));
TAIL_STATIC(0x610270u,610);
}
B4fec7c:L4fec7c:{c.instructions+=5;NFSU2_TR(0x4fec7c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fec80:{NFSU2_TR(0x4fec80);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fec86:{NFSU2_TR(0x4fec86);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fec88:{NFSU2_TR(0x4fec88);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4fec8b:{NFSU2_TR(0x4fec8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fec97;}}
}
B4fec8d:L4fec8d:{c.instructions+=3;NFSU2_TR(0x4fec8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fec91:{NFSU2_TR(0x4fec91);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fec95:{NFSU2_TR(0x4fec95);
{goto L4fecae;}
}
B4fec97:L4fec97:{c.instructions+=5;NFSU2_TR(0x4fec97);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4fec9b:{NFSU2_TR(0x4fec9b);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feca0:{NFSU2_TR(0x4feca0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feca2:{NFSU2_TR(0x4feca2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4feca5:{NFSU2_TR(0x4feca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fecaaull));
TAIL_STATIC(0x5b6990u,5b6);
}
B4fecaa:L4fecaa:{c.instructions+=1;NFSU2_TR(0x4fecaa);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fecae:L4fecae:{c.instructions+=4;NFSU2_TR(0x4fecae);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fecb3:{NFSU2_TR(0x4fecb3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fecb5:{NFSU2_TR(0x4fecb5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fecb8:{NFSU2_TR(0x4fecb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fecbdull));
TAIL_STATIC(0x5b6990u,5b6);
}
B4fecbd:L4fecbd:{c.instructions+=6;NFSU2_TR(0x4fecbd);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fecc1:{NFSU2_TR(0x4fecc1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4fecc5:{NFSU2_TR(0x4fecc5);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B4fecc7:{NFSU2_TR(0x4fecc7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fecc9:{NFSU2_TR(0x4fecc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4feccc:{NFSU2_TR(0x4feccc);
if(r1(R+518)){{goto L4fece4;}}
}
B4fecce:L4fecce:{c.instructions+=5;NFSU2_TR(0x4fecce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fecd2:{NFSU2_TR(0x4fecd2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fecd3:{NFSU2_TR(0x4fecd3);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fecd5:{NFSU2_TR(0x4fecd5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fecd9:{NFSU2_TR(0x4fecd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fec50u);}goto L4fec50;}}
}
B4fecdf:L4fecdf:{c.instructions+=1;NFSU2_TR(0x4fecdf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fec33u);}goto L4fec33;}
}
B4fece4:L4fece4:{c.instructions+=2;NFSU2_TR(0x4fece4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fece5:{NFSU2_TR(0x4fece5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feceaull));
TAIL_STATIC(0x575630u,575);
}
B4fecea:L4fecea:{c.instructions+=4;NFSU2_TR(0x4fecea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4feced:{NFSU2_TR(0x4feced);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fecee:{NFSU2_TR(0x4fecee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fecef:{NFSU2_TR(0x4fecef);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4feb33u);}goto L4feb33;}
}
B4fed00:L4fed00:{c.instructions+=3;NFSU2_TR(0x4fed00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed01:{NFSU2_TR(0x4fed01);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed06:{NFSU2_TR(0x4fed06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fed0bull));
TAIL_STATIC(0x43c1f0u,43c);
}
B4fed0b:L4fed0b:{c.instructions+=7;NFSU2_TR(0x4fed0b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4fed0f:{NFSU2_TR(0x4fed0f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fed13:{NFSU2_TR(0x4fed13);
__builtin_memmove((R+8),gp(0x81cb60),4);
}
B4fed19:{NFSU2_TR(0x4fed19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B4fed1c:{NFSU2_TR(0x4fed1c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fed1f:{NFSU2_TR(0x4fed1f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4fed21:{NFSU2_TR(0x4fed21);
u8 U[12];
w4(U+0,u32(u32(u32(0x9f4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4fed28:L4fed28:{c.instructions+=5;NFSU2_TR(0x4fed28);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4fed2c:{NFSU2_TR(0x4fed2c);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4fed2e:{NFSU2_TR(0x4fed2e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4fed30:{NFSU2_TR(0x4fed30);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4fed33:{NFSU2_TR(0x4fed33);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4fed42;}}
}
B4fed35:L4fed35:{c.instructions+=4;NFSU2_TR(0x4fed35);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4fed36:{NFSU2_TR(0x4fed36);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4fed39:{NFSU2_TR(0x4fed39);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fed3c:{NFSU2_TR(0x4fed3c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fed28u);}goto L4fed28;}}
}
B4fed3e:L4fed3e:{c.instructions+=3;NFSU2_TR(0x4fed3e);
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
B4fed40:{NFSU2_TR(0x4fed40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fed41:{NFSU2_TR(0x4fed41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fed42:L4fed42:{c.instructions+=2;NFSU2_TR(0x4fed42);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4fed45:{NFSU2_TR(0x4fed45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fed4b;}}
}
B4fed47:L4fed47:{c.instructions+=3;NFSU2_TR(0x4fed47);
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
B4fed49:{NFSU2_TR(0x4fed49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fed4a:{NFSU2_TR(0x4fed4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fed4b:L4fed4b:{c.instructions+=3;NFSU2_TR(0x4fed4b);
__builtin_memmove((R+0),(R+4),4);
}
B4fed4d:{NFSU2_TR(0x4fed4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fed4e:{NFSU2_TR(0x4fed4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fed50:L4fed50:{c.instructions+=5;NFSU2_TR(0x4fed50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed51:{NFSU2_TR(0x4fed51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed52:{NFSU2_TR(0x4fed52);
__builtin_memmove((R+20),gp(0x89e814),4);
}
B4fed58:{NFSU2_TR(0x4fed58);
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
B4fed5a:{NFSU2_TR(0x4fed5a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fedd9;}}
}
B4fed5c:L4fed5c:{c.instructions+=8;NFSU2_TR(0x4fed5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed5d:{NFSU2_TR(0x4fed5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4fed61:{NFSU2_TR(0x4fed61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed62:{NFSU2_TR(0x4fed62);
__builtin_memmove((R+24),gp(0x89e810),4);
}
B4fed68:{NFSU2_TR(0x4fed68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fed69:{NFSU2_TR(0x4fed69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fed6b:{NFSU2_TR(0x4fed6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fed6f:{NFSU2_TR(0x4fed6f);
}
B4fed70:L4fed70:{c.instructions+=2;NFSU2_TR(0x4fed70);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B4fed75:{NFSU2_TR(0x4fed75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fedc5;}}
}
B4fed77:L4fed77:{c.instructions+=3;NFSU2_TR(0x4fed77);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B4fed7c:{NFSU2_TR(0x4fed7c);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4fed80:{NFSU2_TR(0x4fed80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fedc5;}}
}
B4fed82:L4fed82:{c.instructions+=3;NFSU2_TR(0x4fed82);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B4fed86:{NFSU2_TR(0x4fed86);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4fed88:{NFSU2_TR(0x4fed88);
if(r1(R+518)){{goto L4fedc5;}}
}
B4fed8a:L4fed8a:{c.instructions+=3;NFSU2_TR(0x4fed8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fed8c:{NFSU2_TR(0x4fed8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4fed8f:{NFSU2_TR(0x4fed8f);
}
B4fed90:L4fed90:{c.instructions+=2;NFSU2_TR(0x4fed90);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+12))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4fed92:{NFSU2_TR(0x4fed92);
if(r1(R+518)){{goto L4feda1;}}
}
B4fed94:L4fed94:{c.instructions+=4;NFSU2_TR(0x4fed94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fed95:{NFSU2_TR(0x4fed95);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
}
B4fed9b:{NFSU2_TR(0x4fed9b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fed9d:{NFSU2_TR(0x4fed9d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fed90u);}goto L4fed90;}}
}
B4fed9f:L4fed9f:{c.instructions+=1;NFSU2_TR(0x4fed9f);
{goto L4fedc5;}
}
B4feda1:L4feda1:{c.instructions+=2;NFSU2_TR(0x4feda1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4feda3:{NFSU2_TR(0x4feda3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4fedc5;}}
}
B4feda5:L4feda5:{c.instructions+=7;NFSU2_TR(0x4feda5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x940ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4fedab:{NFSU2_TR(0x4fedab);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B4fedaf:{NFSU2_TR(0x4fedaf);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4fedb3:{NFSU2_TR(0x4fedb3);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B4fedb5:{NFSU2_TR(0x4fedb5);
__builtin_memmove((R+8),gp(0x89e810),4);
}
B4fedbb:{NFSU2_TR(0x4fedbb);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4fedbf:{NFSU2_TR(0x4fedbf);
__builtin_memmove((R+24),gp(0x89e810),4);
}
B4fedc5:L4fedc5:{c.instructions+=5;NFSU2_TR(0x4fedc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fedc9:{NFSU2_TR(0x4fedc9);
w1(R+512,carry<u32>(r4(R+28),u32(0x940ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x940ull))));
}
B4fedcf:{NFSU2_TR(0x4fedcf);
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
B4fedd0:{NFSU2_TR(0x4fedd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fedd4:{NFSU2_TR(0x4fedd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4fed70u);}goto L4fed70;}}
}
B4fedd6:L4fedd6:{c.instructions+=3;NFSU2_TR(0x4fedd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fedd7:{NFSU2_TR(0x4fedd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fedd8:{NFSU2_TR(0x4fedd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fedd9:L4fedd9:{c.instructions+=3;NFSU2_TR(0x4fedd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fedda:{NFSU2_TR(0x4fedda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4feddb:{NFSU2_TR(0x4feddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fede0:L4fede0:{c.instructions+=7;NFSU2_TR(0x4fede0);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B4fede5:{NFSU2_TR(0x4fede5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4fede8:{NFSU2_TR(0x4fede8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fede9:{NFSU2_TR(0x4fede9);
w4(R+12,u32(0x1ull));
}
B4fedee:{NFSU2_TR(0x4fedee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fedf0:{NFSU2_TR(0x4fedf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fedf1:{NFSU2_TR(0x4fedf1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fee42;}}
}
B4fedf3:L4fedf3:{c.instructions+=3;NFSU2_TR(0x4fedf3);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B4fedf8:{NFSU2_TR(0x4fedf8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fedfa:{NFSU2_TR(0x4fedfa);
if(r1(R+518)){{goto L4fef3b;}}
}
B4fee00:L4fee00:{c.instructions+=3;NFSU2_TR(0x4fee00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee02:{NFSU2_TR(0x4fee02);
w4(R+4,u32(0x89e7a0ull));
}
B4fee07:{NFSU2_TR(0x4fee07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fee0cull));
TAIL_STATIC(0x5ed900u,5ed);
}
B4fee0c:L4fee0c:{c.instructions+=6;NFSU2_TR(0x4fee0c);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B4fee12:{NFSU2_TR(0x4fee12);
__builtin_memmove((R+24),(R+0),4);
}
B4fee14:{NFSU2_TR(0x4fee14);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B4fee19:{NFSU2_TR(0x4fee19);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4fee1b:{NFSU2_TR(0x4fee1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee1c:{NFSU2_TR(0x4fee1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fee21ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4fee21:L4fee21:{c.instructions+=4;NFSU2_TR(0x4fee21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fee24:{NFSU2_TR(0x4fee24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee25:{NFSU2_TR(0x4fee25);
w4(R+4,u32(0x89e7a0ull));
}
B4fee2a:{NFSU2_TR(0x4fee2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fee2full));
TAIL_STATIC(0x5ed900u,5ed);
}
B4fee2f:L4fee2f:{c.instructions+=8;NFSU2_TR(0x4fee2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4fee33:{NFSU2_TR(0x4fee33);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4fee36:{NFSU2_TR(0x4fee36);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fee39:{NFSU2_TR(0x4fee39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fee3a:{NFSU2_TR(0x4fee3a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fee3d:{NFSU2_TR(0x4fee3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fee3e:{NFSU2_TR(0x4fee3e);
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
B4fee41:{NFSU2_TR(0x4fee41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fee42:L4fee42:{c.instructions+=2;NFSU2_TR(0x4fee42);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4fee45:{NFSU2_TR(0x4fee45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fef3b;}}
}
B4fee4b:L4fee4b:{c.instructions+=6;NFSU2_TR(0x4fee4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee4c:{NFSU2_TR(0x4fee4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee4d:{NFSU2_TR(0x4fee4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee4e:{NFSU2_TR(0x4fee4e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4fee50:{NFSU2_TR(0x4fee50);
__builtin_memmove((R+28),(R+12),4);
}
B4fee52:{NFSU2_TR(0x4fee52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fee57ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4fee57:L4fee57:{c.instructions+=3;NFSU2_TR(0x4fee57);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fee5a:{NFSU2_TR(0x4fee5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fee5c:{NFSU2_TR(0x4fee5c);
if(r1(R+518)){{goto L4fee62;}}
}
B4fee5e:L4fee5e:{c.instructions+=2;NFSU2_TR(0x4fee5e);
__builtin_memmove((R+24),(R+12),4);
}
B4fee60:{NFSU2_TR(0x4fee60);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4fee62:L4fee62:{c.instructions+=6;NFSU2_TR(0x4fee62);
__builtin_memmove((R+0),gp(0x89e7c4),4);
}
B4fee67:{NFSU2_TR(0x4fee67);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4fee69:{NFSU2_TR(0x4fee69);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4fee6a:{NFSU2_TR(0x4fee6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4fee6b:{NFSU2_TR(0x4fee6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fee6f:{NFSU2_TR(0x4fee6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fee74ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4fee74:L4fee74:{c.instructions+=3;NFSU2_TR(0x4fee74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4fee77:{NFSU2_TR(0x4fee77);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4fee79:{NFSU2_TR(0x4fee79);
if(r1(R+518)){{goto L4fee9b;}}
}
B4fee7b:L4fee7b:{c.instructions+=2;NFSU2_TR(0x4fee7b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4fee7c:{NFSU2_TR(0x4fee7c);
if(r1(R+518)){{goto L4fee90;}}
}
B4fee7e:L4fee7e:{c.instructions+=2;NFSU2_TR(0x4fee7e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4fee7f:{NFSU2_TR(0x4fee7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feea5;}}
}
B4fee81:L4fee81:{c.instructions+=3;NFSU2_TR(0x4fee81);
w4(R+20,u32(0x2ull));
}
B4fee86:{NFSU2_TR(0x4fee86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4fee8e:{NFSU2_TR(0x4fee8e);
{goto L4feea5;}
}
B4fee90:L4fee90:{c.instructions+=3;NFSU2_TR(0x4fee90);
w4(R+20,u32(0x3ull));
}
B4fee95:{NFSU2_TR(0x4fee95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4fee99:{NFSU2_TR(0x4fee99);
{goto L4feea5;}
}
B4fee9b:L4fee9b:{c.instructions+=2;NFSU2_TR(0x4fee9b);
__builtin_memmove((R+20),(R+12),4);
}
B4fee9d:{NFSU2_TR(0x4fee9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4feea5:L4feea5:{c.instructions+=3;NFSU2_TR(0x4feea5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feea6:{NFSU2_TR(0x4feea6);
w4(R+4,u32(0x89e7a0ull));
}
B4feeab:{NFSU2_TR(0x4feeab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feeb0ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B4feeb0:L4feeb0:{c.instructions+=4;NFSU2_TR(0x4feeb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feeb1:{NFSU2_TR(0x4feeb1);
w4(R+4,u32(0x89e7a0ull));
}
B4feeb6:{NFSU2_TR(0x4feeb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4feeba:{NFSU2_TR(0x4feeba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feebfull));
TAIL_STATIC(0x5ed900u,5ed);
}
B4feebf:L4feebf:{c.instructions+=9;NFSU2_TR(0x4feebf);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B4feec5:{NFSU2_TR(0x4feec5);
__builtin_memmove((R+8),gp(0x89e7c4),4);
}
B4feecb:{NFSU2_TR(0x4feecb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4feecd:{NFSU2_TR(0x4feecd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4feecf:{NFSU2_TR(0x4feecf);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4feed1:{NFSU2_TR(0x4feed1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4feed3:{NFSU2_TR(0x4feed3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4feed5:{NFSU2_TR(0x4feed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4feed9:{NFSU2_TR(0x4feed9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4fef39;}}
}
B4feedb:L4feedb:{c.instructions+=1;NFSU2_TR(0x4feedb);
{goto L4feee0;}
}
B4feee0:L4feee0:{c.instructions+=3;NFSU2_TR(0x4feee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4feee1:{NFSU2_TR(0x4feee1);
w4(R+4,u32(0x89e7a0ull));
}
B4feee6:{NFSU2_TR(0x4feee6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4feeebull));
TAIL_STATIC(0x5ed900u,5ed);
}
B4feeeb:L4feeeb:{c.instructions+=3;NFSU2_TR(0x4feeeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4feeef:{NFSU2_TR(0x4feeef);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4feef1:{NFSU2_TR(0x4feef1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feef5;}}
}
B4feef3:L4feef3:{c.instructions+=1;NFSU2_TR(0x4feef3);
__builtin_memmove((R+12),(R+0),4);
}
B4feef5:L4feef5:{c.instructions+=2;NFSU2_TR(0x4feef5);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4feef9:{NFSU2_TR(0x4feef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4feefd;}}
}
B4feefb:L4feefb:{c.instructions+=1;NFSU2_TR(0x4feefb);
__builtin_memmove((R+28),(R+0),4);
}
B4feefd:L4feefd:{c.instructions+=6;NFSU2_TR(0x4feefd);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B4fef02:{NFSU2_TR(0x4fef02);
__builtin_memmove((R+4),gp(0x89e7c4),4);
}
B4fef08:{NFSU2_TR(0x4fef08);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4fef09:{NFSU2_TR(0x4fef09);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4fef0b:{NFSU2_TR(0x4fef0b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4fef0d:{NFSU2_TR(0x4fef0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4feee0u);}goto L4feee0;}}
}
B4fef0f:L4fef0f:{c.instructions+=2;NFSU2_TR(0x4fef0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fef11:{NFSU2_TR(0x4fef11);
if(r1(R+518)){{goto L4fef39;}}
}
B4fef13:L4fef13:{c.instructions+=2;NFSU2_TR(0x4fef13);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4fef15:{NFSU2_TR(0x4fef15);
if(r1(R+518)){{goto L4fef39;}}
}
B4fef17:L4fef17:{c.instructions+=10;NFSU2_TR(0x4fef17);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4fef1a:{NFSU2_TR(0x4fef1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4fef1e:{NFSU2_TR(0x4fef1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4fef22:{NFSU2_TR(0x4fef22);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4fef26:{NFSU2_TR(0x4fef26);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4fef2a:{NFSU2_TR(0x4fef2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fef2d:{NFSU2_TR(0x4fef2d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4fef30:{NFSU2_TR(0x4fef30);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fef33:{NFSU2_TR(0x4fef33);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fef36:{NFSU2_TR(0x4fef36);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4fef39:L4fef39:{c.instructions+=2;NFSU2_TR(0x4fef39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4fef3a:{NFSU2_TR(0x4fef3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4fef3b:L4fef3b:{c.instructions+=4;NFSU2_TR(0x4fef3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4fef3c:{NFSU2_TR(0x4fef3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4fef3d:{NFSU2_TR(0x4fef3d);
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
B4fef40:{NFSU2_TR(0x4fef40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fef50:L4fef50:{c.instructions+=4;NFSU2_TR(0x4fef50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4fef54:{NFSU2_TR(0x4fef54);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4fef57:{NFSU2_TR(0x4fef57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79aa3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4fef5e:{NFSU2_TR(0x4fef5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4fef60:L4fef60:{c.instructions+=1;NFSU2_TR(0x4fef60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4fef65ull));
TAIL_STATIC(0x579190u,579);
}
B4fef65:L4fef65:{c.instructions+=3;NFSU2_TR(0x4fef65);
s4(0x864fac,u32(0x1ull));
}
B4fef6f:{NFSU2_TR(0x4fef6f);
w4(R+4,u32(0x865480ull));
}
B4fef74:{NFSU2_TR(0x4fef74);
TAIL_STATIC(0x581020u,581);
}
B4fef80:L4fef80:{c.instructions+=17;NFSU2_TR(0x4fef80);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4fef82:{NFSU2_TR(0x4fef82);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B4fef87:{NFSU2_TR(0x4fef87);
__builtin_memmove(gp(0x89e7a8),(R+0),4);
}
B4fef8c:{NFSU2_TR(0x4fef8c);
__builtin_memmove(gp(0x89e7f8),(R+0),4);
}
B4fef91:{NFSU2_TR(0x4fef91);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B4fef96:{NFSU2_TR(0x4fef96);
__builtin_memmove(gp(0x89e7a4),(R+0),4);
}
B4fef9b:{NFSU2_TR(0x4fef9b);
__builtin_memmove(gp(0x89e7b4),(R+0),4);
}
B4fefa0:{NFSU2_TR(0x4fefa0);
w4(R+0,u32(m1(0x83aa1b)));
}
B4fefa7:{NFSU2_TR(0x4fefa7);
w4(R+4,u32(0x1ull));
}
B4fefac:{NFSU2_TR(0x4fefac);
__builtin_memmove(gp(0x7f68b0),(R+0),4);
}
B4fefb1:{NFSU2_TR(0x4fefb1);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa74),4);
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
B4fefb8:{NFSU2_TR(0x4fefb8);
__builtin_memmove(gp(0x89e7c0),(R+4),4);
}
B4fefbe:{NFSU2_TR(0x4fefbe);
__builtin_memmove(gp(0x89e7b0),(R+4),4);
}
B4fefc4:{NFSU2_TR(0x4fefc4);
__builtin_memmove(gp(0x89e7d2),(R+4),1);
}
B4fefca:{NFSU2_TR(0x4fefca);
s4(0x89e7bc,u32(0xaull));
}
B4fefd4:{NFSU2_TR(0x4fefd4);
s4(0x89e7a0,u32(0x1261ull));
}
B4fefde:{NFSU2_TR(0x4fefde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4fefea;}}
}
B4fefe0:L4fefe0:{c.instructions+=1;NFSU2_TR(0x4fefe0);
s4(0x83aa74,u32(0x3ull));
}
B4fefea:L4fefea:{c.instructions+=1;NFSU2_TR(0x4fefea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4feff0:L4feff0:{c.instructions+=4;NFSU2_TR(0x4feff0);
w4(R+0,u32(0x1ull));
}
B4feff5:{NFSU2_TR(0x4feff5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4feff7:{NFSU2_TR(0x4feff7);
__builtin_memmove(gp(0x89e7d8),(R+0),1);
}
B4feffc:{NFSU2_TR(0x4feffc);
__builtin_memmove(gp(0x89e7c0),(R+0),4);
TAIL_STATIC(0x4ff001u,4ff);
}
XIT:NFSU2_TR_EXIT(0x4fe,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
