#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_41c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x41b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x41b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_41b(u8* __restrict R,Cpu& c);
u32 page_41b(Cpu& c){return body_41b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_41b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x41b002:goto L41b002;
case 0x41b005:c.instructions+=9;goto B41b005;
case 0x41b007:c.instructions+=8;goto B41b007;
case 0x41b009:c.instructions+=7;goto B41b009;
case 0x41b00b:c.instructions+=6;goto B41b00b;
case 0x41b00d:c.instructions+=5;goto B41b00d;
case 0x41b00f:c.instructions+=4;goto B41b00f;
case 0x41b012:c.instructions+=3;goto B41b012;
case 0x41b014:c.instructions+=2;goto B41b014;
case 0x41b016:c.instructions+=1;goto B41b016;
case 0x41b01b:goto L41b01b;
case 0x41b021:c.instructions+=3;goto B41b021;
case 0x41b023:c.instructions+=2;goto B41b023;
case 0x41b026:c.instructions+=1;goto B41b026;
case 0x41b02c:goto L41b02c;
case 0x41b030:c.instructions+=3;goto B41b030;
case 0x41b031:c.instructions+=2;goto B41b031;
case 0x41b033:c.instructions+=1;goto B41b033;
case 0x41b038:goto L41b038;
case 0x41b03e:c.instructions+=3;goto B41b03e;
case 0x41b040:c.instructions+=2;goto B41b040;
case 0x41b043:c.instructions+=1;goto B41b043;
case 0x41b045:goto L41b045;
case 0x41b049:c.instructions+=20;goto B41b049;
case 0x41b04d:c.instructions+=19;goto B41b04d;
case 0x41b051:c.instructions+=18;goto B41b051;
case 0x41b052:c.instructions+=17;goto B41b052;
case 0x41b054:c.instructions+=16;goto B41b054;
case 0x41b058:c.instructions+=15;goto B41b058;
case 0x41b05c:c.instructions+=14;goto B41b05c;
case 0x41b062:c.instructions+=13;goto B41b062;
case 0x41b066:c.instructions+=12;goto B41b066;
case 0x41b06c:c.instructions+=11;goto B41b06c;
case 0x41b06f:c.instructions+=10;goto B41b06f;
case 0x41b072:c.instructions+=9;goto B41b072;
case 0x41b074:c.instructions+=8;goto B41b074;
case 0x41b076:c.instructions+=7;goto B41b076;
case 0x41b078:c.instructions+=6;goto B41b078;
case 0x41b07a:c.instructions+=5;goto B41b07a;
case 0x41b07c:c.instructions+=4;goto B41b07c;
case 0x41b07f:c.instructions+=3;goto B41b07f;
case 0x41b081:c.instructions+=2;goto B41b081;
case 0x41b083:c.instructions+=1;goto B41b083;
case 0x41b088:goto L41b088;
case 0x41b08e:c.instructions+=3;goto B41b08e;
case 0x41b090:c.instructions+=2;goto B41b090;
case 0x41b093:c.instructions+=1;goto B41b093;
case 0x41b099:goto L41b099;
case 0x41b09d:c.instructions+=6;goto B41b09d;
case 0x41b0a1:c.instructions+=5;goto B41b0a1;
case 0x41b0a5:c.instructions+=4;goto B41b0a5;
case 0x41b0a7:c.instructions+=3;goto B41b0a7;
case 0x41b0a9:c.instructions+=2;goto B41b0a9;
case 0x41b0ad:c.instructions+=1;goto B41b0ad;
case 0x41b0b0:goto L41b0b0;
case 0x41b0b2:c.instructions+=1;goto B41b0b2;
case 0x41b0b7:goto L41b0b7;
case 0x41b0b9:c.instructions+=1;goto B41b0b9;
case 0x41b0bf:goto L41b0bf;
case 0x41b0c0:c.instructions+=2;goto B41b0c0;
case 0x41b0c2:c.instructions+=1;goto B41b0c2;
case 0x41b0c7:goto L41b0c7;
case 0x41b0cb:c.instructions+=7;goto B41b0cb;
case 0x41b0cd:c.instructions+=6;goto B41b0cd;
case 0x41b0d0:c.instructions+=5;goto B41b0d0;
case 0x41b0d2:c.instructions+=4;goto B41b0d2;
case 0x41b0d5:c.instructions+=3;goto B41b0d5;
case 0x41b0d7:c.instructions+=2;goto B41b0d7;
case 0x41b0d9:c.instructions+=1;goto B41b0d9;
case 0x41b0db:goto L41b0db;
case 0x41b0de:c.instructions+=2;goto B41b0de;
case 0x41b0e1:c.instructions+=1;goto B41b0e1;
case 0x41b0e7:goto L41b0e7;
case 0x41b0e9:c.instructions+=1;goto B41b0e9;
case 0x41b0ef:goto L41b0ef;
case 0x41b0f3:c.instructions+=3;goto B41b0f3;
case 0x41b0f4:c.instructions+=2;goto B41b0f4;
case 0x41b0f6:c.instructions+=1;goto B41b0f6;
case 0x41b0fb:goto L41b0fb;
case 0x41b0fd:c.instructions+=1;goto B41b0fd;
case 0x41b0ff:goto L41b0ff;
case 0x41b103:c.instructions+=3;goto B41b103;
case 0x41b104:c.instructions+=2;goto B41b104;
case 0x41b106:c.instructions+=1;goto B41b106;
case 0x41b10b:goto L41b10b;
case 0x41b10d:c.instructions+=1;goto B41b10d;
case 0x41b10f:goto L41b10f;
case 0x41b113:c.instructions+=3;goto B41b113;
case 0x41b114:c.instructions+=2;goto B41b114;
case 0x41b116:c.instructions+=1;goto B41b116;
case 0x41b11b:goto L41b11b;
case 0x41b11d:c.instructions+=1;goto B41b11d;
case 0x41b11f:goto L41b11f;
case 0x41b121:c.instructions+=1;goto B41b121;
case 0x41b123:goto L41b123;
case 0x41b127:c.instructions+=3;goto B41b127;
case 0x41b12e:c.instructions+=2;goto B41b12e;
case 0x41b132:c.instructions+=1;goto B41b132;
case 0x41b134:goto L41b134;
case 0x41b138:c.instructions+=9;goto B41b138;
case 0x41b13b:c.instructions+=8;goto B41b13b;
case 0x41b141:c.instructions+=7;goto B41b141;
case 0x41b143:c.instructions+=6;goto B41b143;
case 0x41b145:c.instructions+=5;goto B41b145;
case 0x41b147:c.instructions+=4;goto B41b147;
case 0x41b14a:c.instructions+=3;goto B41b14a;
case 0x41b150:c.instructions+=2;goto B41b150;
case 0x41b153:c.instructions+=1;goto B41b153;
case 0x41b155:goto L41b155;
case 0x41b158:c.instructions+=2;goto B41b158;
case 0x41b15a:c.instructions+=1;goto B41b15a;
case 0x41b15c:goto L41b15c;
case 0x41b15e:goto L41b15e;
case 0x41b162:c.instructions+=5;goto B41b162;
case 0x41b166:c.instructions+=4;goto B41b166;
case 0x41b167:c.instructions+=3;goto B41b167;
case 0x41b16a:c.instructions+=2;goto B41b16a;
case 0x41b16e:c.instructions+=1;goto B41b16e;
case 0x41b172:goto L41b172;
case 0x41b173:c.instructions+=2;goto B41b173;
case 0x41b175:c.instructions+=1;goto B41b175;
case 0x41b17b:goto L41b17b;
case 0x41b17d:goto L41b17d;
case 0x41b17f:c.instructions+=1;goto B41b17f;
case 0x41b181:goto L41b181;
case 0x41b183:c.instructions+=1;goto B41b183;
case 0x41b188:goto L41b188;
case 0x41b18c:c.instructions+=7;goto B41b18c;
case 0x41b18e:c.instructions+=6;goto B41b18e;
case 0x41b191:c.instructions+=5;goto B41b191;
case 0x41b194:c.instructions+=4;goto B41b194;
case 0x41b196:c.instructions+=3;goto B41b196;
case 0x41b198:c.instructions+=2;goto B41b198;
case 0x41b19c:c.instructions+=1;goto B41b19c;
case 0x41b19e:goto L41b19e;
case 0x41b1a0:c.instructions+=1;goto B41b1a0;
case 0x41b1a5:goto L41b1a5;
case 0x41b1a7:c.instructions+=6;goto B41b1a7;
case 0x41b1ab:c.instructions+=5;goto B41b1ab;
case 0x41b1ad:c.instructions+=4;goto B41b1ad;
case 0x41b1b3:c.instructions+=3;goto B41b1b3;
case 0x41b1b5:c.instructions+=2;goto B41b1b5;
case 0x41b1ba:c.instructions+=1;goto B41b1ba;
case 0x41b1bc:goto L41b1bc;
case 0x41b1be:c.instructions+=9;goto B41b1be;
case 0x41b1c0:c.instructions+=8;goto B41b1c0;
case 0x41b1c3:c.instructions+=7;goto B41b1c3;
case 0x41b1c5:c.instructions+=6;goto B41b1c5;
case 0x41b1c8:c.instructions+=5;goto B41b1c8;
case 0x41b1ca:c.instructions+=4;goto B41b1ca;
case 0x41b1ce:c.instructions+=3;goto B41b1ce;
case 0x41b1d1:c.instructions+=2;goto B41b1d1;
case 0x41b1d3:c.instructions+=1;goto B41b1d3;
case 0x41b1d5:goto L41b1d5;
case 0x41b1d8:c.instructions+=2;goto B41b1d8;
case 0x41b1df:c.instructions+=1;goto B41b1df;
case 0x41b1e1:goto L41b1e1;
case 0x41b1e3:c.instructions+=6;goto B41b1e3;
case 0x41b1e5:c.instructions+=5;goto B41b1e5;
case 0x41b1e8:c.instructions+=4;goto B41b1e8;
case 0x41b1ea:c.instructions+=3;goto B41b1ea;
case 0x41b1ed:c.instructions+=2;goto B41b1ed;
case 0x41b1ef:c.instructions+=1;goto B41b1ef;
case 0x41b1f1:goto L41b1f1;
case 0x41b1f4:c.instructions+=1;goto B41b1f4;
case 0x41b1f8:goto L41b1f8;
case 0x41b1fa:c.instructions+=1;goto B41b1fa;
case 0x41b1fc:goto L41b1fc;
case 0x41b200:c.instructions+=1;goto B41b200;
case 0x41b205:goto L41b205;
case 0x41b209:goto L41b209;
case 0x41b20a:c.instructions+=12;goto B41b20a;
case 0x41b20b:c.instructions+=11;goto B41b20b;
case 0x41b20f:c.instructions+=10;goto B41b20f;
case 0x41b213:c.instructions+=9;goto B41b213;
case 0x41b215:c.instructions+=8;goto B41b215;
case 0x41b217:c.instructions+=7;goto B41b217;
case 0x41b21b:c.instructions+=6;goto B41b21b;
case 0x41b21e:c.instructions+=5;goto B41b21e;
case 0x41b21f:c.instructions+=4;goto B41b21f;
case 0x41b220:c.instructions+=3;goto B41b220;
case 0x41b222:c.instructions+=2;goto B41b222;
case 0x41b225:c.instructions+=1;goto B41b225;
case 0x41b230:goto L41b230;
case 0x41b235:c.instructions+=1;goto B41b235;
case 0x41b23a:goto L41b23a;
case 0x41b241:c.instructions+=2;goto B41b241;
case 0x41b246:c.instructions+=1;goto B41b246;
case 0x41b250:goto L41b250;
case 0x41b257:c.instructions+=5;goto B41b257;
case 0x41b25b:c.instructions+=4;goto B41b25b;
case 0x41b261:c.instructions+=3;goto B41b261;
case 0x41b264:c.instructions+=2;goto B41b264;
case 0x41b265:c.instructions+=1;goto B41b265;
case 0x41b267:goto L41b267;
case 0x41b26c:c.instructions+=14;goto B41b26c;
case 0x41b26d:c.instructions+=13;goto B41b26d;
case 0x41b274:c.instructions+=12;goto B41b274;
case 0x41b275:c.instructions+=11;goto B41b275;
case 0x41b277:c.instructions+=10;goto B41b277;
case 0x41b279:c.instructions+=9;goto B41b279;
case 0x41b280:c.instructions+=8;goto B41b280;
case 0x41b287:c.instructions+=7;goto B41b287;
case 0x41b28f:c.instructions+=6;goto B41b28f;
case 0x41b293:c.instructions+=5;goto B41b293;
case 0x41b298:c.instructions+=4;goto B41b298;
case 0x41b29c:c.instructions+=3;goto B41b29c;
case 0x41b2a0:c.instructions+=2;goto B41b2a0;
case 0x41b2a4:c.instructions+=1;goto B41b2a4;
case 0x41b2a6:goto L41b2a6;
case 0x41b2a7:c.instructions+=4;goto B41b2a7;
case 0x41b2a9:c.instructions+=3;goto B41b2a9;
case 0x41b2aa:c.instructions+=2;goto B41b2aa;
case 0x41b2b0:c.instructions+=1;goto B41b2b0;
case 0x41b2b1:goto L41b2b1;
case 0x41b2b8:c.instructions+=9;goto B41b2b8;
case 0x41b2ba:c.instructions+=8;goto B41b2ba;
case 0x41b2c1:c.instructions+=7;goto B41b2c1;
case 0x41b2c2:c.instructions+=6;goto B41b2c2;
case 0x41b2c4:c.instructions+=5;goto B41b2c4;
case 0x41b2c5:c.instructions+=4;goto B41b2c5;
case 0x41b2c9:c.instructions+=3;goto B41b2c9;
case 0x41b2cd:c.instructions+=2;goto B41b2cd;
case 0x41b2d1:c.instructions+=1;goto B41b2d1;
case 0x41b2d3:goto L41b2d3;
case 0x41b2d7:c.instructions+=6;goto B41b2d7;
case 0x41b2da:c.instructions+=5;goto B41b2da;
case 0x41b2de:c.instructions+=4;goto B41b2de;
case 0x41b2e2:c.instructions+=3;goto B41b2e2;
case 0x41b2e8:c.instructions+=2;goto B41b2e8;
case 0x41b2ef:c.instructions+=1;goto B41b2ef;
case 0x41b2f3:goto L41b2f3;
case 0x41b2f8:c.instructions+=4;goto B41b2f8;
case 0x41b2fb:c.instructions+=3;goto B41b2fb;
case 0x41b2fe:c.instructions+=2;goto B41b2fe;
case 0x41b306:c.instructions+=1;goto B41b306;
case 0x41b308:goto L41b308;
case 0x41b309:c.instructions+=6;goto B41b309;
case 0x41b30a:c.instructions+=5;goto B41b30a;
case 0x41b30b:c.instructions+=4;goto B41b30b;
case 0x41b30d:c.instructions+=3;goto B41b30d;
case 0x41b30e:c.instructions+=2;goto B41b30e;
case 0x41b314:c.instructions+=1;goto B41b314;
case 0x41b315:goto L41b315;
case 0x41b31c:c.instructions+=2;goto B41b31c;
case 0x41b31e:c.instructions+=1;goto B41b31e;
case 0x41b320:goto L41b320;
case 0x41b324:c.instructions+=10;goto B41b324;
case 0x41b32b:c.instructions+=9;goto B41b32b;
case 0x41b32e:c.instructions+=8;goto B41b32e;
case 0x41b332:c.instructions+=7;goto B41b332;
case 0x41b333:c.instructions+=6;goto B41b333;
case 0x41b335:c.instructions+=5;goto B41b335;
case 0x41b339:c.instructions+=4;goto B41b339;
case 0x41b33f:c.instructions+=3;goto B41b33f;
case 0x41b343:c.instructions+=2;goto B41b343;
case 0x41b347:c.instructions+=1;goto B41b347;
case 0x41b34c:goto L41b34c;
case 0x41b352:c.instructions+=3;goto B41b352;
case 0x41b354:c.instructions+=2;goto B41b354;
case 0x41b357:c.instructions+=1;goto B41b357;
case 0x41b359:goto L41b359;
case 0x41b35d:c.instructions+=20;goto B41b35d;
case 0x41b361:c.instructions+=19;goto B41b361;
case 0x41b365:c.instructions+=18;goto B41b365;
case 0x41b366:c.instructions+=17;goto B41b366;
case 0x41b368:c.instructions+=16;goto B41b368;
case 0x41b36c:c.instructions+=15;goto B41b36c;
case 0x41b370:c.instructions+=14;goto B41b370;
case 0x41b376:c.instructions+=13;goto B41b376;
case 0x41b37a:c.instructions+=12;goto B41b37a;
case 0x41b380:c.instructions+=11;goto B41b380;
case 0x41b383:c.instructions+=10;goto B41b383;
case 0x41b386:c.instructions+=9;goto B41b386;
case 0x41b388:c.instructions+=8;goto B41b388;
case 0x41b38a:c.instructions+=7;goto B41b38a;
case 0x41b38c:c.instructions+=6;goto B41b38c;
case 0x41b38e:c.instructions+=5;goto B41b38e;
case 0x41b390:c.instructions+=4;goto B41b390;
case 0x41b393:c.instructions+=3;goto B41b393;
case 0x41b395:c.instructions+=2;goto B41b395;
case 0x41b397:c.instructions+=1;goto B41b397;
case 0x41b39c:goto L41b39c;
case 0x41b3a2:c.instructions+=3;goto B41b3a2;
case 0x41b3a4:c.instructions+=2;goto B41b3a4;
case 0x41b3a7:c.instructions+=1;goto B41b3a7;
case 0x41b3a9:goto L41b3a9;
case 0x41b3ad:c.instructions+=10;goto B41b3ad;
case 0x41b3b0:c.instructions+=9;goto B41b3b0;
case 0x41b3b4:c.instructions+=8;goto B41b3b4;
case 0x41b3b8:c.instructions+=7;goto B41b3b8;
case 0x41b3be:c.instructions+=6;goto B41b3be;
case 0x41b3c1:c.instructions+=5;goto B41b3c1;
case 0x41b3c3:c.instructions+=4;goto B41b3c3;
case 0x41b3c9:c.instructions+=3;goto B41b3c9;
case 0x41b3cb:c.instructions+=2;goto B41b3cb;
case 0x41b3ce:c.instructions+=1;goto B41b3ce;
case 0x41b3d4:goto L41b3d4;
case 0x41b3d8:c.instructions+=4;goto B41b3d8;
case 0x41b3de:c.instructions+=3;goto B41b3de;
case 0x41b3e0:c.instructions+=2;goto B41b3e0;
case 0x41b3e3:c.instructions+=1;goto B41b3e3;
case 0x41b3e9:goto L41b3e9;
case 0x41b3eb:c.instructions+=3;goto B41b3eb;
case 0x41b3f0:c.instructions+=2;goto B41b3f0;
case 0x41b3f5:c.instructions+=1;goto B41b3f5;
case 0x41b3fa:goto L41b3fa;
case 0x41b3fc:c.instructions+=3;goto B41b3fc;
case 0x41b400:c.instructions+=2;goto B41b400;
case 0x41b404:c.instructions+=1;goto B41b404;
case 0x41b40a:goto L41b40a;
case 0x41b410:goto L41b410;
case 0x41b411:c.instructions+=2;goto B41b411;
case 0x41b413:c.instructions+=1;goto B41b413;
case 0x41b418:goto L41b418;
case 0x41b41c:c.instructions+=7;goto B41b41c;
case 0x41b41e:c.instructions+=6;goto B41b41e;
case 0x41b421:c.instructions+=5;goto B41b421;
case 0x41b423:c.instructions+=4;goto B41b423;
case 0x41b426:c.instructions+=3;goto B41b426;
case 0x41b429:c.instructions+=2;goto B41b429;
case 0x41b42b:c.instructions+=1;goto B41b42b;
case 0x41b431:goto L41b431;
case 0x41b433:c.instructions+=5;goto B41b433;
case 0x41b436:c.instructions+=4;goto B41b436;
case 0x41b439:c.instructions+=3;goto B41b439;
case 0x41b43e:c.instructions+=2;goto B41b43e;
case 0x41b442:c.instructions+=1;goto B41b442;
case 0x41b448:goto L41b448;
case 0x41b44b:c.instructions+=8;goto B41b44b;
case 0x41b44d:c.instructions+=7;goto B41b44d;
case 0x41b44f:c.instructions+=6;goto B41b44f;
case 0x41b452:c.instructions+=5;goto B41b452;
case 0x41b455:c.instructions+=4;goto B41b455;
case 0x41b458:c.instructions+=3;goto B41b458;
case 0x41b45b:c.instructions+=2;goto B41b45b;
case 0x41b463:c.instructions+=1;goto B41b463;
case 0x41b465:goto L41b465;
case 0x41b467:c.instructions+=1;goto B41b467;
case 0x41b469:goto L41b469;
case 0x41b46d:c.instructions+=2;goto B41b46d;
case 0x41b470:c.instructions+=1;goto B41b470;
case 0x41b472:goto L41b472;
case 0x41b475:c.instructions+=2;goto B41b475;
case 0x41b478:c.instructions+=1;goto B41b478;
case 0x41b47a:goto L41b47a;
case 0x41b47d:c.instructions+=1;goto B41b47d;
case 0x41b483:goto L41b483;
case 0x41b488:c.instructions+=1;goto B41b488;
case 0x41b48d:goto L41b48d;
case 0x41b48f:c.instructions+=1;goto B41b48f;
case 0x41b491:goto L41b491;
case 0x41b493:c.instructions+=5;goto B41b493;
case 0x41b496:c.instructions+=4;goto B41b496;
case 0x41b49a:c.instructions+=3;goto B41b49a;
case 0x41b49d:c.instructions+=2;goto B41b49d;
case 0x41b4a0:c.instructions+=1;goto B41b4a0;
case 0x41b4a2:goto L41b4a2;
case 0x41b4a6:c.instructions+=4;goto B41b4a6;
case 0x41b4a9:c.instructions+=3;goto B41b4a9;
case 0x41b4ab:c.instructions+=2;goto B41b4ab;
case 0x41b4ae:c.instructions+=1;goto B41b4ae;
case 0x41b4b0:goto L41b4b0;
case 0x41b4b3:c.instructions+=1;goto B41b4b3;
case 0x41b4b5:goto L41b4b5;
case 0x41b4b7:c.instructions+=1;goto B41b4b7;
case 0x41b4b9:goto L41b4b9;
case 0x41b4bc:c.instructions+=2;goto B41b4bc;
case 0x41b4be:c.instructions+=1;goto B41b4be;
case 0x41b4c0:goto L41b4c0;
case 0x41b4c6:goto L41b4c6;
case 0x41b4cb:c.instructions+=2;goto B41b4cb;
case 0x41b4cf:c.instructions+=1;goto B41b4cf;
case 0x41b4d3:goto L41b4d3;
case 0x41b4d5:goto L41b4d5;
case 0x41b4d7:c.instructions+=1;goto B41b4d7;
case 0x41b4dc:goto L41b4dc;
case 0x41b4e0:c.instructions+=36;goto B41b4e0;
case 0x41b4e4:c.instructions+=35;goto B41b4e4;
case 0x41b4e8:c.instructions+=34;goto B41b4e8;
case 0x41b4ec:c.instructions+=33;goto B41b4ec;
case 0x41b4f0:c.instructions+=32;goto B41b4f0;
case 0x41b4f4:c.instructions+=31;goto B41b4f4;
case 0x41b4f7:c.instructions+=30;goto B41b4f7;
case 0x41b4fd:c.instructions+=29;goto B41b4fd;
case 0x41b500:c.instructions+=28;goto B41b500;
case 0x41b504:c.instructions+=27;goto B41b504;
case 0x41b508:c.instructions+=26;goto B41b508;
case 0x41b50c:c.instructions+=25;goto B41b50c;
case 0x41b512:c.instructions+=24;goto B41b512;
case 0x41b519:c.instructions+=23;goto B41b519;
case 0x41b51d:c.instructions+=22;goto B41b51d;
case 0x41b523:c.instructions+=21;goto B41b523;
case 0x41b527:c.instructions+=20;goto B41b527;
case 0x41b52a:c.instructions+=19;goto B41b52a;
case 0x41b52d:c.instructions+=18;goto B41b52d;
case 0x41b52f:c.instructions+=17;goto B41b52f;
case 0x41b531:c.instructions+=16;goto B41b531;
case 0x41b533:c.instructions+=15;goto B41b533;
case 0x41b535:c.instructions+=14;goto B41b535;
case 0x41b538:c.instructions+=13;goto B41b538;
case 0x41b53a:c.instructions+=12;goto B41b53a;
case 0x41b53c:c.instructions+=11;goto B41b53c;
case 0x41b542:c.instructions+=10;goto B41b542;
case 0x41b544:c.instructions+=9;goto B41b544;
case 0x41b54b:c.instructions+=8;goto B41b54b;
case 0x41b552:c.instructions+=7;goto B41b552;
case 0x41b555:c.instructions+=6;goto B41b555;
case 0x41b557:c.instructions+=5;goto B41b557;
case 0x41b559:c.instructions+=4;goto B41b559;
case 0x41b560:c.instructions+=3;goto B41b560;
case 0x41b562:c.instructions+=2;goto B41b562;
case 0x41b564:c.instructions+=1;goto B41b564;
case 0x41b566:goto L41b566;
case 0x41b56a:c.instructions+=10;goto B41b56a;
case 0x41b56c:c.instructions+=9;goto B41b56c;
case 0x41b56e:c.instructions+=8;goto B41b56e;
case 0x41b571:c.instructions+=7;goto B41b571;
case 0x41b574:c.instructions+=6;goto B41b574;
case 0x41b57a:c.instructions+=5;goto B41b57a;
case 0x41b57d:c.instructions+=4;goto B41b57d;
case 0x41b584:c.instructions+=3;goto B41b584;
case 0x41b589:c.instructions+=2;goto B41b589;
case 0x41b58d:c.instructions+=1;goto B41b58d;
case 0x41b594:goto L41b594;
case 0x41b598:c.instructions+=2;goto B41b598;
case 0x41b59b:c.instructions+=1;goto B41b59b;
case 0x41b59d:goto L41b59d;
case 0x41b5a1:c.instructions+=10;goto B41b5a1;
case 0x41b5a3:c.instructions+=9;goto B41b5a3;
case 0x41b5a6:c.instructions+=8;goto B41b5a6;
case 0x41b5a9:c.instructions+=7;goto B41b5a9;
case 0x41b5af:c.instructions+=6;goto B41b5af;
case 0x41b5b2:c.instructions+=5;goto B41b5b2;
case 0x41b5b6:c.instructions+=4;goto B41b5b6;
case 0x41b5bb:c.instructions+=3;goto B41b5bb;
case 0x41b5bf:c.instructions+=2;goto B41b5bf;
case 0x41b5c3:c.instructions+=1;goto B41b5c3;
case 0x41b5c7:goto L41b5c7;
case 0x41b5cb:c.instructions+=2;goto B41b5cb;
case 0x41b5cd:c.instructions+=1;goto B41b5cd;
case 0x41b5cf:goto L41b5cf;
case 0x41b5d2:c.instructions+=1;goto B41b5d2;
case 0x41b5d4:goto L41b5d4;
case 0x41b5d8:c.instructions+=2;goto B41b5d8;
case 0x41b5d9:c.instructions+=1;goto B41b5d9;
case 0x41b5db:goto L41b5db;
case 0x41b5de:c.instructions+=1;goto B41b5de;
case 0x41b5e3:goto L41b5e3;
case 0x41b5e7:c.instructions+=3;goto B41b5e7;
case 0x41b5e8:c.instructions+=2;goto B41b5e8;
case 0x41b5ef:c.instructions+=1;goto B41b5ef;
case 0x41b5f4:goto L41b5f4;
case 0x41b5f6:goto L41b5f6;
case 0x41b5fa:c.instructions+=1;goto B41b5fa;
case 0x41b5fb:goto L41b5fb;
case 0x41b602:c.instructions+=1;goto B41b602;
case 0x41b607:goto L41b607;
case 0x41b60b:c.instructions+=4;goto B41b60b;
case 0x41b60f:c.instructions+=3;goto B41b60f;
case 0x41b610:c.instructions+=2;goto B41b610;
case 0x41b612:c.instructions+=1;goto B41b612;
case 0x41b614:goto L41b614;
case 0x41b618:c.instructions+=4;goto B41b618;
case 0x41b61d:c.instructions+=3;goto B41b61d;
case 0x41b621:c.instructions+=2;goto B41b621;
case 0x41b628:c.instructions+=1;goto B41b628;
case 0x41b629:goto L41b629;
case 0x41b62b:goto L41b62b;
case 0x41b62c:c.instructions+=2;goto B41b62c;
case 0x41b62e:c.instructions+=1;goto B41b62e;
case 0x41b633:goto L41b633;
case 0x41b635:c.instructions+=1;goto B41b635;
case 0x41b63a:goto L41b63a;
case 0x41b63c:c.instructions+=2;goto B41b63c;
case 0x41b643:c.instructions+=1;goto B41b643;
case 0x41b645:goto L41b645;
case 0x41b64c:c.instructions+=3;goto B41b64c;
case 0x41b64d:c.instructions+=2;goto B41b64d;
case 0x41b654:c.instructions+=1;goto B41b654;
case 0x41b659:goto L41b659;
case 0x41b65d:c.instructions+=1;goto B41b65d;
case 0x41b662:goto L41b662;
case 0x41b666:c.instructions+=4;goto B41b666;
case 0x41b667:c.instructions+=3;goto B41b667;
case 0x41b669:c.instructions+=2;goto B41b669;
case 0x41b66d:c.instructions+=1;goto B41b66d;
case 0x41b673:goto L41b673;
case 0x41b678:goto L41b678;
case 0x41b680:c.instructions+=1;goto B41b680;
case 0x41b682:goto L41b682;
case 0x41b684:c.instructions+=1;goto B41b684;
case 0x41b689:goto L41b689;
case 0x41b68d:c.instructions+=33;goto B41b68d;
case 0x41b691:c.instructions+=32;goto B41b691;
case 0x41b694:c.instructions+=31;goto B41b694;
case 0x41b698:c.instructions+=30;goto B41b698;
case 0x41b69c:c.instructions+=29;goto B41b69c;
case 0x41b6a0:c.instructions+=28;goto B41b6a0;
case 0x41b6a4:c.instructions+=27;goto B41b6a4;
case 0x41b6aa:c.instructions+=26;goto B41b6aa;
case 0x41b6ad:c.instructions+=25;goto B41b6ad;
case 0x41b6b0:c.instructions+=24;goto B41b6b0;
case 0x41b6b4:c.instructions+=23;goto B41b6b4;
case 0x41b6b8:c.instructions+=22;goto B41b6b8;
case 0x41b6bc:c.instructions+=21;goto B41b6bc;
case 0x41b6bf:c.instructions+=20;goto B41b6bf;
case 0x41b6c5:c.instructions+=19;goto B41b6c5;
case 0x41b6c9:c.instructions+=18;goto B41b6c9;
case 0x41b6cf:c.instructions+=17;goto B41b6cf;
case 0x41b6d2:c.instructions+=16;goto B41b6d2;
case 0x41b6d5:c.instructions+=15;goto B41b6d5;
case 0x41b6d7:c.instructions+=14;goto B41b6d7;
case 0x41b6d9:c.instructions+=13;goto B41b6d9;
case 0x41b6db:c.instructions+=12;goto B41b6db;
case 0x41b6dd:c.instructions+=11;goto B41b6dd;
case 0x41b6e1:c.instructions+=10;goto B41b6e1;
case 0x41b6e3:c.instructions+=9;goto B41b6e3;
case 0x41b6e5:c.instructions+=8;goto B41b6e5;
case 0x41b6e9:c.instructions+=7;goto B41b6e9;
case 0x41b6ed:c.instructions+=6;goto B41b6ed;
case 0x41b6ef:c.instructions+=5;goto B41b6ef;
case 0x41b6f1:c.instructions+=4;goto B41b6f1;
case 0x41b6f5:c.instructions+=3;goto B41b6f5;
case 0x41b6f7:c.instructions+=2;goto B41b6f7;
case 0x41b6f9:c.instructions+=1;goto B41b6f9;
case 0x41b6fb:goto L41b6fb;
case 0x41b6ff:c.instructions+=2;goto B41b6ff;
case 0x41b701:c.instructions+=1;goto B41b701;
case 0x41b703:goto L41b703;
case 0x41b705:c.instructions+=1;goto B41b705;
case 0x41b709:goto L41b709;
case 0x41b70d:c.instructions+=2;goto B41b70d;
case 0x41b70f:c.instructions+=1;goto B41b70f;
case 0x41b711:goto L41b711;
case 0x41b713:c.instructions+=1;goto B41b713;
case 0x41b715:goto L41b715;
case 0x41b719:c.instructions+=4;goto B41b719;
case 0x41b71a:c.instructions+=3;goto B41b71a;
case 0x41b71b:c.instructions+=2;goto B41b71b;
case 0x41b71d:c.instructions+=1;goto B41b71d;
case 0x41b722:goto L41b722;
case 0x41b724:c.instructions+=1;goto B41b724;
case 0x41b729:goto L41b729;
case 0x41b72b:c.instructions+=1;goto B41b72b;
case 0x41b72f:goto L41b72f;
case 0x41b731:c.instructions+=1;goto B41b731;
case 0x41b733:goto L41b733;
case 0x41b73a:c.instructions+=3;goto B41b73a;
case 0x41b73c:c.instructions+=2;goto B41b73c;
case 0x41b73e:c.instructions+=1;goto B41b73e;
case 0x41b740:goto L41b740;
case 0x41b745:goto L41b745;
case 0x41b747:goto L41b747;
case 0x41b74c:goto L41b74c;
case 0x41b74e:c.instructions+=1;goto B41b74e;
case 0x41b750:goto L41b750;
case 0x41b757:c.instructions+=3;goto B41b757;
case 0x41b759:c.instructions+=2;goto B41b759;
case 0x41b760:c.instructions+=1;goto B41b760;
case 0x41b762:goto L41b762;
case 0x41b769:c.instructions+=1;goto B41b769;
case 0x41b76f:goto L41b76f;
case 0x41b771:c.instructions+=6;goto B41b771;
case 0x41b774:c.instructions+=5;goto B41b774;
case 0x41b77b:c.instructions+=4;goto B41b77b;
case 0x41b77c:c.instructions+=3;goto B41b77c;
case 0x41b77f:c.instructions+=2;goto B41b77f;
case 0x41b784:c.instructions+=1;goto B41b784;
case 0x41b788:goto L41b788;
case 0x41b78a:goto L41b78a;
case 0x41b791:c.instructions+=1;goto B41b791;
case 0x41b793:goto L41b793;
case 0x41b79e:goto L41b79e;
case 0x41b7a2:c.instructions+=6;goto B41b7a2;
case 0x41b7a8:c.instructions+=5;goto B41b7a8;
case 0x41b7a9:c.instructions+=4;goto B41b7a9;
case 0x41b7ab:c.instructions+=3;goto B41b7ab;
case 0x41b7b3:c.instructions+=2;goto B41b7b3;
case 0x41b7b7:c.instructions+=1;goto B41b7b7;
case 0x41b7bd:goto L41b7bd;
case 0x41b7c1:goto L41b7c1;
case 0x41b7c5:c.instructions+=6;goto B41b7c5;
case 0x41b7cb:c.instructions+=5;goto B41b7cb;
case 0x41b7cc:c.instructions+=4;goto B41b7cc;
case 0x41b7cf:c.instructions+=3;goto B41b7cf;
case 0x41b7d1:c.instructions+=2;goto B41b7d1;
case 0x41b7d5:c.instructions+=1;goto B41b7d5;
case 0x41b7db:goto L41b7db;
case 0x41b7dc:c.instructions+=6;goto B41b7dc;
case 0x41b7dd:c.instructions+=5;goto B41b7dd;
case 0x41b7de:c.instructions+=4;goto B41b7de;
case 0x41b7e0:c.instructions+=3;goto B41b7e0;
case 0x41b7e1:c.instructions+=2;goto B41b7e1;
case 0x41b7e7:c.instructions+=1;goto B41b7e7;
case 0x41b7e8:goto L41b7e8;
case 0x41b7ef:c.instructions+=3;goto B41b7ef;
case 0x41b7f1:c.instructions+=2;goto B41b7f1;
case 0x41b7f6:c.instructions+=1;goto B41b7f6;
case 0x41b7fa:goto L41b7fa;
case 0x41b7fc:goto L41b7fc;
case 0x41b803:c.instructions+=9;goto B41b803;
case 0x41b804:c.instructions+=8;goto B41b804;
case 0x41b805:c.instructions+=7;goto B41b805;
case 0x41b807:c.instructions+=6;goto B41b807;
case 0x41b808:c.instructions+=5;goto B41b808;
case 0x41b80b:c.instructions+=4;goto B41b80b;
case 0x41b80d:c.instructions+=3;goto B41b80d;
case 0x41b80e:c.instructions+=2;goto B41b80e;
case 0x41b814:c.instructions+=1;goto B41b814;
case 0x41b820:goto L41b820;
case 0x41b821:c.instructions+=18;goto B41b821;
case 0x41b823:c.instructions+=17;goto B41b823;
case 0x41b826:c.instructions+=16;goto B41b826;
case 0x41b828:c.instructions+=15;goto B41b828;
case 0x41b82d:c.instructions+=14;goto B41b82d;
case 0x41b833:c.instructions+=13;goto B41b833;
case 0x41b834:c.instructions+=12;goto B41b834;
case 0x41b83b:c.instructions+=11;goto B41b83b;
case 0x41b841:c.instructions+=10;goto B41b841;
case 0x41b842:c.instructions+=9;goto B41b842;
case 0x41b843:c.instructions+=8;goto B41b843;
case 0x41b844:c.instructions+=7;goto B41b844;
case 0x41b849:c.instructions+=6;goto B41b849;
case 0x41b84e:c.instructions+=5;goto B41b84e;
case 0x41b850:c.instructions+=4;goto B41b850;
case 0x41b855:c.instructions+=3;goto B41b855;
case 0x41b85c:c.instructions+=2;goto B41b85c;
case 0x41b85d:c.instructions+=1;goto B41b85d;
case 0x41b862:goto L41b862;
case 0x41b868:c.instructions+=7;goto B41b868;
case 0x41b86a:c.instructions+=6;goto B41b86a;
case 0x41b86c:c.instructions+=5;goto B41b86c;
case 0x41b86e:c.instructions+=4;goto B41b86e;
case 0x41b875:c.instructions+=3;goto B41b875;
case 0x41b879:c.instructions+=2;goto B41b879;
case 0x41b87d:c.instructions+=1;goto B41b87d;
case 0x41b883:goto L41b883;
case 0x41b886:c.instructions+=1;goto B41b886;
case 0x41b888:goto L41b888;
case 0x41b88c:c.instructions+=1;goto B41b88c;
case 0x41b890:goto L41b890;
case 0x41b897:c.instructions+=8;goto B41b897;
case 0x41b899:c.instructions+=7;goto B41b899;
case 0x41b89a:c.instructions+=6;goto B41b89a;
case 0x41b89d:c.instructions+=5;goto B41b89d;
case 0x41b89e:c.instructions+=4;goto B41b89e;
case 0x41b8a1:c.instructions+=3;goto B41b8a1;
case 0x41b8a2:c.instructions+=2;goto B41b8a2;
case 0x41b8a6:c.instructions+=1;goto B41b8a6;
case 0x41b8ab:goto L41b8ab;
case 0x41b8ae:c.instructions+=2;goto B41b8ae;
case 0x41b8b0:c.instructions+=1;goto B41b8b0;
case 0x41b8b6:goto L41b8b6;
case 0x41b8bb:c.instructions+=3;goto B41b8bb;
case 0x41b8c0:c.instructions+=2;goto B41b8c0;
case 0x41b8c8:c.instructions+=1;goto B41b8c8;
case 0x41b8ce:goto L41b8ce;
case 0x41b8d1:c.instructions+=4;goto B41b8d1;
case 0x41b8d4:c.instructions+=3;goto B41b8d4;
case 0x41b8d8:c.instructions+=2;goto B41b8d8;
case 0x41b8dc:c.instructions+=1;goto B41b8dc;
case 0x41b8e0:goto L41b8e0;
case 0x41b8e4:c.instructions+=2;goto B41b8e4;
case 0x41b8e6:c.instructions+=1;goto B41b8e6;
case 0x41b8ec:goto L41b8ec;
case 0x41b8f0:c.instructions+=30;goto B41b8f0;
case 0x41b8f3:c.instructions+=29;goto B41b8f3;
case 0x41b8fb:c.instructions+=28;goto B41b8fb;
case 0x41b903:c.instructions+=27;goto B41b903;
case 0x41b90a:c.instructions+=26;goto B41b90a;
case 0x41b90e:c.instructions+=25;goto B41b90e;
case 0x41b912:c.instructions+=24;goto B41b912;
case 0x41b915:c.instructions+=23;goto B41b915;
case 0x41b918:c.instructions+=22;goto B41b918;
case 0x41b91c:c.instructions+=21;goto B41b91c;
case 0x41b920:c.instructions+=20;goto B41b920;
case 0x41b926:c.instructions+=19;goto B41b926;
case 0x41b92a:c.instructions+=18;goto B41b92a;
case 0x41b92e:c.instructions+=17;goto B41b92e;
case 0x41b932:c.instructions+=16;goto B41b932;
case 0x41b938:c.instructions+=15;goto B41b938;
case 0x41b93c:c.instructions+=14;goto B41b93c;
case 0x41b93e:c.instructions+=13;goto B41b93e;
case 0x41b941:c.instructions+=12;goto B41b941;
case 0x41b943:c.instructions+=11;goto B41b943;
case 0x41b945:c.instructions+=10;goto B41b945;
case 0x41b947:c.instructions+=9;goto B41b947;
case 0x41b94b:c.instructions+=8;goto B41b94b;
case 0x41b94f:c.instructions+=7;goto B41b94f;
case 0x41b955:c.instructions+=6;goto B41b955;
case 0x41b958:c.instructions+=5;goto B41b958;
case 0x41b95a:c.instructions+=4;goto B41b95a;
case 0x41b960:c.instructions+=3;goto B41b960;
case 0x41b962:c.instructions+=2;goto B41b962;
case 0x41b965:c.instructions+=1;goto B41b965;
case 0x41b96b:goto L41b96b;
case 0x41b96c:c.instructions+=2;goto B41b96c;
case 0x41b96e:c.instructions+=1;goto B41b96e;
case 0x41b973:goto L41b973;
case 0x41b979:c.instructions+=3;goto B41b979;
case 0x41b97b:c.instructions+=2;goto B41b97b;
case 0x41b97e:c.instructions+=1;goto B41b97e;
case 0x41b984:goto L41b984;
case 0x41b988:c.instructions+=14;goto B41b988;
case 0x41b989:c.instructions+=13;goto B41b989;
case 0x41b98d:c.instructions+=12;goto B41b98d;
case 0x41b98f:c.instructions+=11;goto B41b98f;
case 0x41b992:c.instructions+=10;goto B41b992;
case 0x41b995:c.instructions+=9;goto B41b995;
case 0x41b997:c.instructions+=8;goto B41b997;
case 0x41b999:c.instructions+=7;goto B41b999;
case 0x41b99b:c.instructions+=6;goto B41b99b;
case 0x41b99d:c.instructions+=5;goto B41b99d;
case 0x41b99f:c.instructions+=4;goto B41b99f;
case 0x41b9a2:c.instructions+=3;goto B41b9a2;
case 0x41b9a4:c.instructions+=2;goto B41b9a4;
case 0x41b9a6:c.instructions+=1;goto B41b9a6;
case 0x41b9ab:goto L41b9ab;
case 0x41b9b1:c.instructions+=3;goto B41b9b1;
case 0x41b9b3:c.instructions+=2;goto B41b9b3;
case 0x41b9b6:c.instructions+=1;goto B41b9b6;
case 0x41b9bc:goto L41b9bc;
case 0x41b9bf:c.instructions+=3;goto B41b9bf;
case 0x41b9c1:c.instructions+=2;goto B41b9c1;
case 0x41b9c3:c.instructions+=1;goto B41b9c3;
case 0x41b9c9:goto L41b9c9;
case 0x41b9cd:c.instructions+=7;goto B41b9cd;
case 0x41b9d1:c.instructions+=6;goto B41b9d1;
case 0x41b9d7:c.instructions+=5;goto B41b9d7;
case 0x41b9dc:c.instructions+=4;goto B41b9dc;
case 0x41b9e0:c.instructions+=3;goto B41b9e0;
case 0x41b9e2:c.instructions+=2;goto B41b9e2;
case 0x41b9e5:c.instructions+=1;goto B41b9e5;
case 0x41b9e7:goto L41b9e7;
case 0x41b9e9:c.instructions+=1;goto B41b9e9;
case 0x41b9eb:goto L41b9eb;
case 0x41b9ed:goto L41b9ed;
case 0x41b9f0:c.instructions+=10;goto B41b9f0;
case 0x41b9f3:c.instructions+=9;goto B41b9f3;
case 0x41b9f4:c.instructions+=8;goto B41b9f4;
case 0x41b9f5:c.instructions+=7;goto B41b9f5;
case 0x41b9f8:c.instructions+=6;goto B41b9f8;
case 0x41b9f9:c.instructions+=5;goto B41b9f9;
case 0x41b9fa:c.instructions+=4;goto B41b9fa;
case 0x41b9fe:c.instructions+=3;goto B41b9fe;
case 0x41b9ff:c.instructions+=2;goto B41b9ff;
case 0x41ba00:c.instructions+=1;goto B41ba00;
case 0x41ba05:goto L41ba05;
case 0x41ba08:c.instructions+=11;goto B41ba08;
case 0x41ba0b:c.instructions+=10;goto B41ba0b;
case 0x41ba12:c.instructions+=9;goto B41ba12;
case 0x41ba15:c.instructions+=8;goto B41ba15;
case 0x41ba16:c.instructions+=7;goto B41ba16;
case 0x41ba17:c.instructions+=6;goto B41ba17;
case 0x41ba1a:c.instructions+=5;goto B41ba1a;
case 0x41ba1d:c.instructions+=4;goto B41ba1d;
case 0x41ba1f:c.instructions+=3;goto B41ba1f;
case 0x41ba23:c.instructions+=2;goto B41ba23;
case 0x41ba24:c.instructions+=1;goto B41ba24;
case 0x41ba29:goto L41ba29;
case 0x41ba2b:c.instructions+=2;goto B41ba2b;
case 0x41ba30:c.instructions+=1;goto B41ba30;
case 0x41ba32:goto L41ba32;
case 0x41ba36:c.instructions+=3;goto B41ba36;
case 0x41ba37:c.instructions+=2;goto B41ba37;
case 0x41ba39:c.instructions+=1;goto B41ba39;
case 0x41ba3e:goto L41ba3e;
case 0x41ba42:c.instructions+=6;goto B41ba42;
case 0x41ba43:c.instructions+=5;goto B41ba43;
case 0x41ba49:c.instructions+=4;goto B41ba49;
case 0x41ba4c:c.instructions+=3;goto B41ba4c;
case 0x41ba50:c.instructions+=2;goto B41ba50;
case 0x41ba54:c.instructions+=1;goto B41ba54;
case 0x41ba56:goto L41ba56;
case 0x41ba5a:goto L41ba5a;
case 0x41ba5c:c.instructions+=13;goto B41ba5c;
case 0x41ba5e:c.instructions+=12;goto B41ba5e;
case 0x41ba61:c.instructions+=11;goto B41ba61;
case 0x41ba64:c.instructions+=10;goto B41ba64;
case 0x41ba66:c.instructions+=9;goto B41ba66;
case 0x41ba68:c.instructions+=8;goto B41ba68;
case 0x41ba6a:c.instructions+=7;goto B41ba6a;
case 0x41ba6c:c.instructions+=6;goto B41ba6c;
case 0x41ba6e:c.instructions+=5;goto B41ba6e;
case 0x41ba70:c.instructions+=4;goto B41ba70;
case 0x41ba72:c.instructions+=3;goto B41ba72;
case 0x41ba74:c.instructions+=2;goto B41ba74;
case 0x41ba7a:c.instructions+=1;goto B41ba7a;
case 0x41ba7f:goto L41ba7f;
case 0x41ba82:c.instructions+=1;goto B41ba82;
case 0x41ba84:goto L41ba84;
case 0x41ba89:goto L41ba89;
case 0x41ba8d:c.instructions+=5;goto B41ba8d;
case 0x41ba91:c.instructions+=4;goto B41ba91;
case 0x41ba93:c.instructions+=3;goto B41ba93;
case 0x41ba95:c.instructions+=2;goto B41ba95;
case 0x41ba99:c.instructions+=1;goto B41ba99;
case 0x41ba9f:goto L41ba9f;
case 0x41baa3:c.instructions+=5;goto B41baa3;
case 0x41baa9:c.instructions+=4;goto B41baa9;
case 0x41baaa:c.instructions+=3;goto B41baaa;
case 0x41baac:c.instructions+=2;goto B41baac;
case 0x41bab0:c.instructions+=1;goto B41bab0;
case 0x41bab6:goto L41bab6;
case 0x41baba:goto L41baba;
case 0x41babd:c.instructions+=5;goto B41babd;
case 0x41babf:c.instructions+=4;goto B41babf;
case 0x41bac2:c.instructions+=3;goto B41bac2;
case 0x41baca:c.instructions+=2;goto B41baca;
case 0x41bacc:c.instructions+=1;goto B41bacc;
case 0x41bad2:goto L41bad2;
case 0x41bad7:c.instructions+=1;goto B41bad7;
case 0x41bade:goto L41bade;
case 0x41bae0:c.instructions+=1;goto B41bae0;
case 0x41bae2:goto L41bae2;
case 0x41bae8:c.instructions+=4;goto B41bae8;
case 0x41baec:c.instructions+=3;goto B41baec;
case 0x41baee:c.instructions+=2;goto B41baee;
case 0x41baf1:c.instructions+=1;goto B41baf1;
case 0x41baf3:goto L41baf3;
case 0x41baf9:c.instructions+=2;goto B41baf9;
case 0x41bafb:c.instructions+=1;goto B41bafb;
case 0x41baff:goto L41baff;
case 0x41bb01:c.instructions+=1;goto B41bb01;
case 0x41bb03:goto L41bb03;
case 0x41bb05:c.instructions+=4;goto B41bb05;
case 0x41bb09:c.instructions+=3;goto B41bb09;
case 0x41bb0b:c.instructions+=2;goto B41bb0b;
case 0x41bb0e:c.instructions+=1;goto B41bb0e;
case 0x41bb10:goto L41bb10;
case 0x41bb12:c.instructions+=2;goto B41bb12;
case 0x41bb15:c.instructions+=1;goto B41bb15;
case 0x41bb19:goto L41bb19;
case 0x41bb1b:c.instructions+=1;goto B41bb1b;
case 0x41bb1d:goto L41bb1d;
case 0x41bb23:c.instructions+=4;goto B41bb23;
case 0x41bb27:c.instructions+=3;goto B41bb27;
case 0x41bb29:c.instructions+=2;goto B41bb29;
case 0x41bb2c:c.instructions+=1;goto B41bb2c;
case 0x41bb2e:goto L41bb2e;
case 0x41bb34:c.instructions+=2;goto B41bb34;
case 0x41bb37:c.instructions+=1;goto B41bb37;
case 0x41bb3b:goto L41bb3b;
case 0x41bb3d:c.instructions+=1;goto B41bb3d;
case 0x41bb3f:goto L41bb3f;
case 0x41bb45:c.instructions+=4;goto B41bb45;
case 0x41bb49:c.instructions+=3;goto B41bb49;
case 0x41bb4b:c.instructions+=2;goto B41bb4b;
case 0x41bb4e:c.instructions+=1;goto B41bb4e;
case 0x41bb50:goto L41bb50;
case 0x41bb56:c.instructions+=2;goto B41bb56;
case 0x41bb58:c.instructions+=1;goto B41bb58;
case 0x41bb5c:goto L41bb5c;
case 0x41bb60:c.instructions+=5;goto B41bb60;
case 0x41bb63:c.instructions+=4;goto B41bb63;
case 0x41bb66:c.instructions+=3;goto B41bb66;
case 0x41bb6c:c.instructions+=2;goto B41bb6c;
case 0x41bb6e:c.instructions+=1;goto B41bb6e;
case 0x41bb74:goto L41bb74;
case 0x41bb78:c.instructions+=2;goto B41bb78;
case 0x41bb7a:c.instructions+=1;goto B41bb7a;
case 0x41bb7c:goto L41bb7c;
case 0x41bb7f:c.instructions+=2;goto B41bb7f;
case 0x41bb82:c.instructions+=1;goto B41bb82;
case 0x41bb86:goto L41bb86;
case 0x41bb88:c.instructions+=1;goto B41bb88;
case 0x41bb8a:goto L41bb8a;
case 0x41bb8c:c.instructions+=4;goto B41bb8c;
case 0x41bb90:c.instructions+=3;goto B41bb90;
case 0x41bb92:c.instructions+=2;goto B41bb92;
case 0x41bb95:c.instructions+=1;goto B41bb95;
case 0x41bb97:goto L41bb97;
case 0x41bb99:c.instructions+=2;goto B41bb99;
case 0x41bb9b:c.instructions+=1;goto B41bb9b;
case 0x41bb9f:goto L41bb9f;
case 0x41bba0:c.instructions+=3;goto B41bba0;
case 0x41bba6:c.instructions+=2;goto B41bba6;
case 0x41bba8:c.instructions+=1;goto B41bba8;
case 0x41bbaa:goto L41bbaa;
case 0x41bbac:c.instructions+=1;goto B41bbac;
case 0x41bbae:goto L41bbae;
case 0x41bbb1:c.instructions+=5;goto B41bbb1;
case 0x41bbb4:c.instructions+=4;goto B41bbb4;
case 0x41bbb8:c.instructions+=3;goto B41bbb8;
case 0x41bbbb:c.instructions+=2;goto B41bbbb;
case 0x41bbbc:c.instructions+=1;goto B41bbbc;
case 0x41bbc1:goto L41bbc1;
case 0x41bbc6:c.instructions+=6;goto B41bbc6;
case 0x41bbc8:c.instructions+=5;goto B41bbc8;
case 0x41bbcd:c.instructions+=4;goto B41bbcd;
case 0x41bbd1:c.instructions+=3;goto B41bbd1;
case 0x41bbd2:c.instructions+=2;goto B41bbd2;
case 0x41bbd9:c.instructions+=1;goto B41bbd9;
case 0x41bbde:goto L41bbde;
case 0x41bbe0:c.instructions+=8;goto B41bbe0;
case 0x41bbe7:c.instructions+=7;goto B41bbe7;
case 0x41bbee:c.instructions+=6;goto B41bbee;
case 0x41bbef:c.instructions+=5;goto B41bbef;
case 0x41bbf0:c.instructions+=4;goto B41bbf0;
case 0x41bbf1:c.instructions+=3;goto B41bbf1;
case 0x41bbf3:c.instructions+=2;goto B41bbf3;
case 0x41bbf4:c.instructions+=1;goto B41bbf4;
case 0x41bbf5:goto L41bbf5;
case 0x41bbfa:c.instructions+=6;goto B41bbfa;
case 0x41bbfc:c.instructions+=5;goto B41bbfc;
case 0x41bc01:c.instructions+=4;goto B41bc01;
case 0x41bc05:c.instructions+=3;goto B41bc05;
case 0x41bc06:c.instructions+=2;goto B41bc06;
case 0x41bc0d:c.instructions+=1;goto B41bc0d;
case 0x41bc12:goto L41bc12;
case 0x41bc19:c.instructions+=8;goto B41bc19;
case 0x41bc1a:c.instructions+=7;goto B41bc1a;
case 0x41bc1b:c.instructions+=6;goto B41bc1b;
case 0x41bc1d:c.instructions+=5;goto B41bc1d;
case 0x41bc24:c.instructions+=4;goto B41bc24;
case 0x41bc25:c.instructions+=3;goto B41bc25;
case 0x41bc27:c.instructions+=2;goto B41bc27;
case 0x41bc28:c.instructions+=1;goto B41bc28;
case 0x41bc30:goto L41bc30;
case 0x41bc31:c.instructions+=4;goto B41bc31;
case 0x41bc33:c.instructions+=3;goto B41bc33;
case 0x41bc36:c.instructions+=2;goto B41bc36;
case 0x41bc38:c.instructions+=1;goto B41bc38;
case 0x41bc3a:goto L41bc3a;
case 0x41bc3f:goto L41bc3f;
case 0x41bc41:c.instructions+=3;goto B41bc41;
case 0x41bc44:c.instructions+=2;goto B41bc44;
case 0x41bc46:c.instructions+=1;goto B41bc46;
case 0x41bc49:goto L41bc49;
case 0x41bc50:c.instructions+=2;goto B41bc50;
case 0x41bc51:c.instructions+=1;goto B41bc51;
case 0x41bc60:goto L41bc60;
case 0x41bc61:c.instructions+=4;goto B41bc61;
case 0x41bc63:c.instructions+=3;goto B41bc63;
case 0x41bc66:c.instructions+=2;goto B41bc66;
case 0x41bc68:c.instructions+=1;goto B41bc68;
case 0x41bc6a:goto L41bc6a;
case 0x41bc6f:goto L41bc6f;
case 0x41bc71:c.instructions+=3;goto B41bc71;
case 0x41bc74:c.instructions+=2;goto B41bc74;
case 0x41bc76:c.instructions+=1;goto B41bc76;
case 0x41bc79:goto L41bc79;
case 0x41bc7d:c.instructions+=3;goto B41bc7d;
case 0x41bc7f:c.instructions+=2;goto B41bc7f;
case 0x41bc82:c.instructions+=1;goto B41bc82;
case 0x41bc84:goto L41bc84;
case 0x41bc86:c.instructions+=1;goto B41bc86;
case 0x41bc8b:goto L41bc8b;
case 0x41bc8e:c.instructions+=4;goto B41bc8e;
case 0x41bc90:c.instructions+=3;goto B41bc90;
case 0x41bc93:c.instructions+=2;goto B41bc93;
case 0x41bc96:c.instructions+=1;goto B41bc96;
case 0x41bc98:goto L41bc98;
case 0x41bc9a:c.instructions+=2;goto B41bc9a;
case 0x41bc9b:c.instructions+=1;goto B41bc9b;
case 0x41bca0:goto L41bca0;
case 0x41bcb0:goto L41bcb0;
case 0x41bcb4:c.instructions+=5;goto B41bcb4;
case 0x41bcb7:c.instructions+=4;goto B41bcb7;
case 0x41bcb9:c.instructions+=3;goto B41bcb9;
case 0x41bcbc:c.instructions+=2;goto B41bcbc;
case 0x41bcbf:c.instructions+=1;goto B41bcbf;
case 0x41bcc1:goto L41bcc1;
case 0x41bcc4:c.instructions+=1;goto B41bcc4;
case 0x41bcc6:goto L41bcc6;
case 0x41bcc9:c.instructions+=2;goto B41bcc9;
case 0x41bccc:c.instructions+=1;goto B41bccc;
case 0x41bcce:goto L41bcce;
case 0x41bcd1:c.instructions+=1;goto B41bcd1;
case 0x41bcd3:goto L41bcd3;
case 0x41bcd6:c.instructions+=1;goto B41bcd6;
case 0x41bcd8:goto L41bcd8;
case 0x41bcda:c.instructions+=1;goto B41bcda;
case 0x41bcdd:goto L41bcdd;
case 0x41bce0:c.instructions+=2;goto B41bce0;
case 0x41bce3:c.instructions+=1;goto B41bce3;
case 0x41bcf0:goto L41bcf0;
case 0x41bd00:goto L41bd00;
case 0x41bd03:c.instructions+=6;goto B41bd03;
case 0x41bd07:c.instructions+=5;goto B41bd07;
case 0x41bd08:c.instructions+=4;goto B41bd08;
case 0x41bd0c:c.instructions+=3;goto B41bd0c;
case 0x41bd0d:c.instructions+=2;goto B41bd0d;
case 0x41bd0e:c.instructions+=1;goto B41bd0e;
case 0x41bd13:goto L41bd13;
case 0x41bd20:goto L41bd20;
case 0x41bd24:c.instructions+=5;goto B41bd24;
case 0x41bd27:c.instructions+=4;goto B41bd27;
case 0x41bd29:c.instructions+=3;goto B41bd29;
case 0x41bd2c:c.instructions+=2;goto B41bd2c;
case 0x41bd2f:c.instructions+=1;goto B41bd2f;
case 0x41bd31:goto L41bd31;
case 0x41bd33:c.instructions+=1;goto B41bd33;
case 0x41bd36:goto L41bd36;
case 0x41bd39:c.instructions+=2;goto B41bd39;
case 0x41bd3c:c.instructions+=1;goto B41bd3c;
case 0x41bd3e:goto L41bd3e;
case 0x41bd41:c.instructions+=1;goto B41bd41;
case 0x41bd43:goto L41bd43;
case 0x41bd46:c.instructions+=1;goto B41bd46;
case 0x41bd48:goto L41bd48;
case 0x41bd4b:c.instructions+=2;goto B41bd4b;
case 0x41bd4e:c.instructions+=1;goto B41bd4e;
case 0x41bd60:goto L41bd60;
case 0x41bd70:goto L41bd70;
case 0x41bd74:c.instructions+=6;goto B41bd74;
case 0x41bd77:c.instructions+=5;goto B41bd77;
case 0x41bd7a:c.instructions+=4;goto B41bd7a;
case 0x41bd7c:c.instructions+=3;goto B41bd7c;
case 0x41bd7f:c.instructions+=2;goto B41bd7f;
case 0x41bd82:c.instructions+=1;goto B41bd82;
case 0x41bd84:goto L41bd84;
case 0x41bd86:c.instructions+=1;goto B41bd86;
case 0x41bd89:goto L41bd89;
case 0x41bd8c:c.instructions+=2;goto B41bd8c;
case 0x41bd8f:c.instructions+=1;goto B41bd8f;
case 0x41bd91:goto L41bd91;
case 0x41bd94:c.instructions+=1;goto B41bd94;
case 0x41bd96:goto L41bd96;
case 0x41bd99:c.instructions+=2;goto B41bd99;
case 0x41bd9c:c.instructions+=1;goto B41bd9c;
case 0x41bda0:goto L41bda0;
case 0x41bda1:c.instructions+=4;goto B41bda1;
case 0x41bda5:c.instructions+=3;goto B41bda5;
case 0x41bda7:c.instructions+=2;goto B41bda7;
case 0x41bda9:c.instructions+=1;goto B41bda9;
case 0x41bdae:goto L41bdae;
case 0x41bdb0:c.instructions+=1;goto B41bdb0;
case 0x41bdb2:goto L41bdb2;
case 0x41bdb4:c.instructions+=2;goto B41bdb4;
case 0x41bdb5:c.instructions+=1;goto B41bdb5;
case 0x41bdb8:goto L41bdb8;
case 0x41bdba:c.instructions+=5;goto B41bdba;
case 0x41bdbd:c.instructions+=4;goto B41bdbd;
case 0x41bdbe:c.instructions+=3;goto B41bdbe;
case 0x41bdc1:c.instructions+=2;goto B41bdc1;
case 0x41bdc3:c.instructions+=1;goto B41bdc3;
case 0x41bdd0:goto L41bdd0;
case 0x41bdd4:c.instructions+=5;goto B41bdd4;
case 0x41bdd7:c.instructions+=4;goto B41bdd7;
case 0x41bdd9:c.instructions+=3;goto B41bdd9;
case 0x41bddc:c.instructions+=2;goto B41bddc;
case 0x41bddf:c.instructions+=1;goto B41bddf;
case 0x41bde1:goto L41bde1;
case 0x41bde3:c.instructions+=1;goto B41bde3;
case 0x41bde6:goto L41bde6;
case 0x41bde9:c.instructions+=2;goto B41bde9;
case 0x41bdec:c.instructions+=1;goto B41bdec;
case 0x41bdee:goto L41bdee;
case 0x41bdf1:c.instructions+=1;goto B41bdf1;
case 0x41bdf3:goto L41bdf3;
case 0x41bdf6:c.instructions+=2;goto B41bdf6;
case 0x41bdf9:c.instructions+=1;goto B41bdf9;
case 0x41be00:goto L41be00;
case 0x41be02:c.instructions+=13;goto B41be02;
case 0x41be07:c.instructions+=12;goto B41be07;
case 0x41be0d:c.instructions+=11;goto B41be0d;
case 0x41be0e:c.instructions+=10;goto B41be0e;
case 0x41be15:c.instructions+=9;goto B41be15;
case 0x41be16:c.instructions+=8;goto B41be16;
case 0x41be17:c.instructions+=7;goto B41be17;
case 0x41be19:c.instructions+=6;goto B41be19;
case 0x41be1d:c.instructions+=5;goto B41be1d;
case 0x41be23:c.instructions+=4;goto B41be23;
case 0x41be29:c.instructions+=3;goto B41be29;
case 0x41be2b:c.instructions+=2;goto B41be2b;
case 0x41be33:c.instructions+=1;goto B41be33;
case 0x41be35:goto L41be35;
case 0x41be37:c.instructions+=2;goto B41be37;
case 0x41be39:c.instructions+=1;goto B41be39;
case 0x41be3b:goto L41be3b;
case 0x41be41:c.instructions+=2;goto B41be41;
case 0x41be43:c.instructions+=1;goto B41be43;
case 0x41be45:goto L41be45;
case 0x41be47:c.instructions+=2;goto B41be47;
case 0x41be49:c.instructions+=1;goto B41be49;
case 0x41be4b:goto L41be4b;
case 0x41be51:c.instructions+=2;goto B41be51;
case 0x41be53:c.instructions+=1;goto B41be53;
case 0x41be55:goto L41be55;
case 0x41be57:c.instructions+=2;goto B41be57;
case 0x41be59:c.instructions+=1;goto B41be59;
case 0x41be5b:goto L41be5b;
case 0x41be61:c.instructions+=2;goto B41be61;
case 0x41be63:c.instructions+=1;goto B41be63;
case 0x41be65:goto L41be65;
case 0x41be67:c.instructions+=2;goto B41be67;
case 0x41be69:c.instructions+=1;goto B41be69;
case 0x41be6b:goto L41be6b;
case 0x41be6e:c.instructions+=2;goto B41be6e;
case 0x41be73:c.instructions+=1;goto B41be73;
case 0x41be78:goto L41be78;
case 0x41be7c:c.instructions+=5;goto B41be7c;
case 0x41be82:c.instructions+=4;goto B41be82;
case 0x41be83:c.instructions+=3;goto B41be83;
case 0x41be8a:c.instructions+=2;goto B41be8a;
case 0x41be8d:c.instructions+=1;goto B41be8d;
case 0x41be90:goto L41be90;
case 0x41be96:c.instructions+=1;goto B41be96;
case 0x41bea0:goto L41bea0;
case 0x41bea6:c.instructions+=2;goto B41bea6;
case 0x41bea8:c.instructions+=1;goto B41bea8;
case 0x41beaa:goto L41beaa;
case 0x41beac:c.instructions+=1;goto B41beac;
case 0x41beaf:goto L41beaf;
case 0x41beb3:c.instructions+=4;goto B41beb3;
case 0x41beb5:c.instructions+=3;goto B41beb5;
case 0x41beb7:c.instructions+=2;goto B41beb7;
case 0x41beb8:c.instructions+=1;goto B41beb8;
case 0x41bebb:goto L41bebb;
case 0x41bebd:c.instructions+=1;goto B41bebd;
case 0x41bec0:goto L41bec0;
case 0x41bec6:c.instructions+=2;goto B41bec6;
case 0x41bec8:c.instructions+=1;goto B41bec8;
case 0x41beca:goto L41beca;
case 0x41becd:c.instructions+=6;goto B41becd;
case 0x41becf:c.instructions+=5;goto B41becf;
case 0x41bed0:c.instructions+=4;goto B41bed0;
case 0x41bed4:c.instructions+=3;goto B41bed4;
case 0x41bed5:c.instructions+=2;goto B41bed5;
case 0x41bed7:c.instructions+=1;goto B41bed7;
case 0x41beda:goto L41beda;
case 0x41bedd:goto L41bedd;
case 0x41bedf:c.instructions+=1;goto B41bedf;
case 0x41bef0:goto L41bef0;
case 0x41bef6:c.instructions+=2;goto B41bef6;
case 0x41bef8:c.instructions+=1;goto B41bef8;
case 0x41befa:goto L41befa;
case 0x41befc:c.instructions+=1;goto B41befc;
case 0x41beff:goto L41beff;
case 0x41bf01:c.instructions+=1;goto B41bf01;
case 0x41bf10:goto L41bf10;
case 0x41bf13:c.instructions+=6;goto B41bf13;
case 0x41bf14:c.instructions+=5;goto B41bf14;
case 0x41bf16:c.instructions+=4;goto B41bf16;
case 0x41bf19:c.instructions+=3;goto B41bf19;
case 0x41bf1f:c.instructions+=2;goto B41bf1f;
case 0x41bf20:c.instructions+=1;goto B41bf20;
case 0x41bf25:goto L41bf25;
case 0x41bf27:c.instructions+=1;goto B41bf27;
case 0x41bf29:goto L41bf29;
case 0x41bf2f:c.instructions+=7;goto B41bf2f;
case 0x41bf31:c.instructions+=6;goto B41bf31;
case 0x41bf37:c.instructions+=5;goto B41bf37;
case 0x41bf38:c.instructions+=4;goto B41bf38;
case 0x41bf39:c.instructions+=3;goto B41bf39;
case 0x41bf3d:c.instructions+=2;goto B41bf3d;
case 0x41bf3e:c.instructions+=1;goto B41bf3e;
case 0x41bf43:goto L41bf43;
case 0x41bf49:c.instructions+=3;goto B41bf49;
case 0x41bf4c:c.instructions+=2;goto B41bf4c;
case 0x41bf4e:c.instructions+=1;goto B41bf4e;
case 0x41bf50:goto L41bf50;
case 0x41bf53:c.instructions+=7;goto B41bf53;
case 0x41bf59:c.instructions+=6;goto B41bf59;
case 0x41bf5e:c.instructions+=5;goto B41bf5e;
case 0x41bf61:c.instructions+=4;goto B41bf61;
case 0x41bf62:c.instructions+=3;goto B41bf62;
case 0x41bf64:c.instructions+=2;goto B41bf64;
case 0x41bf65:c.instructions+=1;goto B41bf65;
case 0x41bf6a:goto L41bf6a;
case 0x41bf6c:goto L41bf6c;
case 0x41bf70:c.instructions+=4;goto B41bf70;
case 0x41bf72:c.instructions+=3;goto B41bf72;
case 0x41bf75:c.instructions+=2;goto B41bf75;
case 0x41bf76:c.instructions+=1;goto B41bf76;
case 0x41bf79:goto L41bf79;
case 0x41bf7a:c.instructions+=2;goto B41bf7a;
case 0x41bf7d:c.instructions+=1;goto B41bf7d;
case 0x41bf80:goto L41bf80;
case 0x41bf81:c.instructions+=4;goto B41bf81;
case 0x41bf83:c.instructions+=3;goto B41bf83;
case 0x41bf86:c.instructions+=2;goto B41bf86;
case 0x41bf8b:c.instructions+=1;goto B41bf8b;
case 0x41bf8d:goto L41bf8d;
case 0x41bf90:c.instructions+=4;goto B41bf90;
case 0x41bf93:c.instructions+=3;goto B41bf93;
case 0x41bf94:c.instructions+=2;goto B41bf94;
case 0x41bf99:c.instructions+=1;goto B41bf99;
case 0x41bf9e:goto L41bf9e;
case 0x41bfa4:c.instructions+=4;goto B41bfa4;
case 0x41bfa6:c.instructions+=3;goto B41bfa6;
case 0x41bfa9:c.instructions+=2;goto B41bfa9;
case 0x41bfae:c.instructions+=1;goto B41bfae;
case 0x41bfb0:goto L41bfb0;
case 0x41bfb1:c.instructions+=3;goto B41bfb1;
case 0x41bfb7:c.instructions+=2;goto B41bfb7;
case 0x41bfb8:c.instructions+=1;goto B41bfb8;
case 0x41bfbd:goto L41bfbd;
case 0x41bfbf:goto L41bfbf;
case 0x41bfc4:goto L41bfc4;
case 0x41bfca:c.instructions+=6;goto B41bfca;
case 0x41bfcc:c.instructions+=5;goto B41bfcc;
case 0x41bfcf:c.instructions+=4;goto B41bfcf;
case 0x41bfd6:c.instructions+=3;goto B41bfd6;
case 0x41bfdc:c.instructions+=2;goto B41bfdc;
case 0x41bfdd:c.instructions+=1;goto B41bfdd;
case 0x41bfe0:goto L41bfe0;
case 0x41bfe3:c.instructions+=11;goto B41bfe3;
case 0x41bfe7:c.instructions+=10;goto B41bfe7;
case 0x41bfe8:c.instructions+=9;goto B41bfe8;
case 0x41bfea:c.instructions+=8;goto B41bfea;
case 0x41bfeb:c.instructions+=7;goto B41bfeb;
case 0x41bfec:c.instructions+=6;goto B41bfec;
case 0x41bfee:c.instructions+=5;goto B41bfee;
case 0x41bff4:c.instructions+=4;goto B41bff4;
case 0x41bffb:c.instructions+=3;goto B41bffb;
case 0x41bffc:c.instructions+=2;goto B41bffc;
case 0x41bfff:c.instructions+=1;goto B41bfff;
default:missing_instruction(c.pc);}
B41b002:L41b002:{c.instructions+=10;NFSU2_TR(0x41b002);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b005:{NFSU2_TR(0x41b005);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41b007:{NFSU2_TR(0x41b007);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b009:{NFSU2_TR(0x41b009);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b00b:{NFSU2_TR(0x41b00b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41b00d:{NFSU2_TR(0x41b00d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b00f:{NFSU2_TR(0x41b00f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b012:{NFSU2_TR(0x41b012);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b014:{NFSU2_TR(0x41b014);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b016:{NFSU2_TR(0x41b016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b01bull));
TAIL_STATIC(0x40ce10u,40c);
}
B41b01b:L41b01b:{c.instructions+=4;NFSU2_TR(0x41b01b);
{u32 ea_=u32(u32(7880000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b021:{NFSU2_TR(0x41b021);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b023:{NFSU2_TR(0x41b023);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b026:{NFSU2_TR(0x41b026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b209;}}
}
B41b02c:L41b02c:{c.instructions+=4;NFSU2_TR(0x41b02c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41b030:{NFSU2_TR(0x41b030);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b031:{NFSU2_TR(0x41b031);
__builtin_memmove((R+4),(R+24),4);
}
B41b033:{NFSU2_TR(0x41b033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b038ull));
TAIL_STATIC(0x40cd00u,40c);
}
B41b038:L41b038:{c.instructions+=4;NFSU2_TR(0x41b038);
{u32 ea_=u32(u32(7879996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b03e:{NFSU2_TR(0x41b03e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b040:{NFSU2_TR(0x41b040);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b043:{NFSU2_TR(0x41b043);
if(r1(R+514)){{goto L41b099;}}
}
B41b045:L41b045:{c.instructions+=21;NFSU2_TR(0x41b045);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41b049:{NFSU2_TR(0x41b049);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41b04d:{NFSU2_TR(0x41b04d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b051:{NFSU2_TR(0x41b051);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b052:{NFSU2_TR(0x41b052);
__builtin_memmove((R+4),(R+24),4);
}
B41b054:{NFSU2_TR(0x41b054);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b058:{NFSU2_TR(0x41b058);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b05c:{NFSU2_TR(0x41b05c);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b062:{NFSU2_TR(0x41b062);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b066:{NFSU2_TR(0x41b066);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b06c:{NFSU2_TR(0x41b06c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b06f:{NFSU2_TR(0x41b06f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b072:{NFSU2_TR(0x41b072);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41b074:{NFSU2_TR(0x41b074);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b076:{NFSU2_TR(0x41b076);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b078:{NFSU2_TR(0x41b078);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41b07a:{NFSU2_TR(0x41b07a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b07c:{NFSU2_TR(0x41b07c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b07f:{NFSU2_TR(0x41b07f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b081:{NFSU2_TR(0x41b081);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b083:{NFSU2_TR(0x41b083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b088ull));
TAIL_STATIC(0x40ce10u,40c);
}
B41b088:L41b088:{c.instructions+=4;NFSU2_TR(0x41b088);
{u32 ea_=u32(u32(7879996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b08e:{NFSU2_TR(0x41b08e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b090:{NFSU2_TR(0x41b090);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b093:{NFSU2_TR(0x41b093);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41b205;}}
}
B41b099:L41b099:{c.instructions+=7;NFSU2_TR(0x41b099);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b09d:{NFSU2_TR(0x41b09d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b0a1:{NFSU2_TR(0x41b0a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41b0a5:{NFSU2_TR(0x41b0a5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41b0a7:{NFSU2_TR(0x41b0a7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B41b0a9:{NFSU2_TR(0x41b0a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b0ad:{NFSU2_TR(0x41b0ad);
__builtin_memmove((R+4),(R+4),4);
}
B41b0b0:L41b0b0:{c.instructions+=2;NFSU2_TR(0x41b0b0);
__builtin_memmove((R+4),(R+24),4);
}
B41b0b2:{NFSU2_TR(0x41b0b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b0b7ull));
TAIL_STATIC(0x5d4380u,5d4);
}
B41b0b7:L41b0b7:{c.instructions+=2;NFSU2_TR(0x41b0b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41b0b9:{NFSU2_TR(0x41b0b9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41b17d;}}
}
B41b0bf:L41b0bf:{c.instructions+=3;NFSU2_TR(0x41b0bf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b0c0:{NFSU2_TR(0x41b0c0);
__builtin_memmove((R+4),(R+24),4);
}
B41b0c2:{NFSU2_TR(0x41b0c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b0c7ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B41b0c7:L41b0c7:{c.instructions+=8;NFSU2_TR(0x41b0c7);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B41b0cb:{NFSU2_TR(0x41b0cb);
__builtin_memmove((R+28),(R+0),4);
}
B41b0cd:{NFSU2_TR(0x41b0cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b0d0:{NFSU2_TR(0x41b0d0);
__builtin_memmove((R+0),(R+4),4);
}
B41b0d2:{NFSU2_TR(0x41b0d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b0d5:{NFSU2_TR(0x41b0d5);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B41b0d7:{NFSU2_TR(0x41b0d7);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41b0d9:{NFSU2_TR(0x41b0d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b0e7;}}
}
B41b0db:L41b0db:{c.instructions+=3;NFSU2_TR(0x41b0db);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41b0de:{NFSU2_TR(0x41b0de);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41b0e1:{NFSU2_TR(0x41b0e1);
if(r1(R+518)){{goto L41b17d;}}
}
B41b0e7:L41b0e7:{c.instructions+=2;NFSU2_TR(0x41b0e7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+8))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B41b0e9:{NFSU2_TR(0x41b0e9);
if(r1(R+518)){{goto L41b172;}}
}
B41b0ef:L41b0ef:{c.instructions+=4;NFSU2_TR(0x41b0ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b0f3:{NFSU2_TR(0x41b0f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b0f4:{NFSU2_TR(0x41b0f4);
__builtin_memmove((R+4),(R+28),4);
}
B41b0f6:{NFSU2_TR(0x41b0f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b0fbull));
TAIL_STATIC(0x5dcb90u,5dc);
}
B41b0fb:L41b0fb:{c.instructions+=2;NFSU2_TR(0x41b0fb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b0fd:{NFSU2_TR(0x41b0fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b172;}}
}
B41b0ff:L41b0ff:{c.instructions+=4;NFSU2_TR(0x41b0ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b103:{NFSU2_TR(0x41b103);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b104:{NFSU2_TR(0x41b104);
__builtin_memmove((R+4),(R+28),4);
}
B41b106:{NFSU2_TR(0x41b106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b10bull));
TAIL_STATIC(0x5dcc30u,5dc);
}
B41b10b:L41b10b:{c.instructions+=2;NFSU2_TR(0x41b10b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b10d:{NFSU2_TR(0x41b10d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b172;}}
}
B41b10f:L41b10f:{c.instructions+=4;NFSU2_TR(0x41b10f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b113:{NFSU2_TR(0x41b113);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b114:{NFSU2_TR(0x41b114);
__builtin_memmove((R+4),(R+28),4);
}
B41b116:{NFSU2_TR(0x41b116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b11bull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B41b11b:L41b11b:{c.instructions+=2;NFSU2_TR(0x41b11b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b11d:{NFSU2_TR(0x41b11d);
if(r1(R+518)){{goto L41b123;}}
}
B41b11f:L41b11f:{c.instructions+=2;NFSU2_TR(0x41b11f);
__builtin_memmove((R+12),(R+28),4);
}
B41b121:{NFSU2_TR(0x41b121);
{goto L41b172;}
}
B41b123:L41b123:{c.instructions+=4;NFSU2_TR(0x41b123);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b127:{NFSU2_TR(0x41b127);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B41b12e:{NFSU2_TR(0x41b12e);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B41b132:{NFSU2_TR(0x41b132);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41b172;}}
}
B41b134:L41b134:{c.instructions+=10;NFSU2_TR(0x41b134);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b138:{NFSU2_TR(0x41b138);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B41b13b:{NFSU2_TR(0x41b13b);
__builtin_memmove((R+8),gp(0x883db0),4);
}
B41b141:{NFSU2_TR(0x41b141);
__builtin_memmove((R+4),(R+28),4);
}
B41b143:{NFSU2_TR(0x41b143);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B41b145:{NFSU2_TR(0x41b145);
__builtin_memmove((R+8),(R+0),4);
}
B41b147:{NFSU2_TR(0x41b147);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B41b14a:{NFSU2_TR(0x41b14a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1fffull))));
}
B41b150:{NFSU2_TR(0x41b150);
u8 U[4];
__builtin_memmove((U+0),(R+8),2);
w2(U+2,u16(u32(r2(R+4))-u32(r2(U+0))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B41b153:{NFSU2_TR(0x41b153);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b172;}}
}
B41b155:L41b155:{c.instructions+=3;NFSU2_TR(0x41b155);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b158:{NFSU2_TR(0x41b158);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b15a:{NFSU2_TR(0x41b15a);
if(r1(R+518)){{goto L41b15e;}}
}
B41b15c:L41b15c:{c.instructions+=1;NFSU2_TR(0x41b15c);
__builtin_memmove((R+12),(R+28),4);
}
B41b15e:L41b15e:{c.instructions+=6;NFSU2_TR(0x41b15e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b162:{NFSU2_TR(0x41b162);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b166:{NFSU2_TR(0x41b166);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B41b167:{NFSU2_TR(0x41b167);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B41b16a:{NFSU2_TR(0x41b16a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b16e:{NFSU2_TR(0x41b16e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b172:L41b172:{c.instructions+=3;NFSU2_TR(0x41b172);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41b173:{NFSU2_TR(0x41b173);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b175:{NFSU2_TR(0x41b175);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b0b0u);}goto L41b0b0;}}
}
B41b17b:L41b17b:{c.instructions+=1;NFSU2_TR(0x41b17b);
{goto L41b181;}
}
B41b17d:L41b17d:{c.instructions+=2;NFSU2_TR(0x41b17d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b17f:{NFSU2_TR(0x41b17f);
if(r1(R+518)){{goto L41b19e;}}
}
B41b181:L41b181:{c.instructions+=2;NFSU2_TR(0x41b181);
__builtin_memmove((R+4),(R+12),4);
}
B41b183:{NFSU2_TR(0x41b183);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b188ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41b188:L41b188:{c.instructions+=8;NFSU2_TR(0x41b188);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41b18c:{NFSU2_TR(0x41b18c);
__builtin_memmove((R+24),(R+0),4);
}
B41b18e:{NFSU2_TR(0x41b18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b191:{NFSU2_TR(0x41b191);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b194:{NFSU2_TR(0x41b194);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B41b196:{NFSU2_TR(0x41b196);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+0))));
}
B41b198:{NFSU2_TR(0x41b198);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b19c:{NFSU2_TR(0x41b19c);
{goto L41b1f8;}
}
B41b19e:L41b19e:{c.instructions+=2;NFSU2_TR(0x41b19e);
__builtin_memmove((R+4),(R+24),4);
}
B41b1a0:{NFSU2_TR(0x41b1a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b1a5ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B41b1a5:L41b1a5:{c.instructions+=7;NFSU2_TR(0x41b1a5);
__builtin_memmove((R+4),(R+0),4);
}
B41b1a7:{NFSU2_TR(0x41b1a7);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b1ab:{NFSU2_TR(0x41b1ab);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B41b1ad:{NFSU2_TR(0x41b1ad);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x8cull))));
}
B41b1b3:{NFSU2_TR(0x41b1b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b1b5:{NFSU2_TR(0x41b1b5);
w4(R+0,u32(0x92492493ull));
}
B41b1ba:{NFSU2_TR(0x41b1ba);
if(r1(R+518)){{goto L41b1e1;}}
}
B41b1bc:L41b1bc:{c.instructions+=10;NFSU2_TR(0x41b1bc);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B41b1be:{NFSU2_TR(0x41b1be);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B41b1c0:{NFSU2_TR(0x41b1c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B41b1c3:{NFSU2_TR(0x41b1c3);
__builtin_memmove((R+0),(R+8),4);
}
B41b1c5:{NFSU2_TR(0x41b1c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b1c8:{NFSU2_TR(0x41b1c8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B41b1ca:{NFSU2_TR(0x41b1ca);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41b1ce:{NFSU2_TR(0x41b1ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41b1d1:{NFSU2_TR(0x41b1d1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41b1d3:{NFSU2_TR(0x41b1d3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41b209;}}
}
B41b1d5:L41b1d5:{c.instructions+=3;NFSU2_TR(0x41b1d5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41b1d8:{NFSU2_TR(0x41b1d8);
u8 U[12];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41b1df:{NFSU2_TR(0x41b1df);
{goto L41b1f8;}
}
B41b1e1:L41b1e1:{c.instructions+=7;NFSU2_TR(0x41b1e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B41b1e3:{NFSU2_TR(0x41b1e3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B41b1e5:{NFSU2_TR(0x41b1e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B41b1e8:{NFSU2_TR(0x41b1e8);
__builtin_memmove((R+0),(R+8),4);
}
B41b1ea:{NFSU2_TR(0x41b1ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b1ed:{NFSU2_TR(0x41b1ed);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B41b1ef:{NFSU2_TR(0x41b1ef);
if(r1(R+518)){{goto L41b209;}}
}
B41b1f1:L41b1f1:{c.instructions+=2;NFSU2_TR(0x41b1f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41b1f4:{NFSU2_TR(0x41b1f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41b1f8:L41b1f8:{c.instructions+=2;NFSU2_TR(0x41b1f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b1fa:{NFSU2_TR(0x41b1fa);
if(r1(R+518)){{goto L41b209;}}
}
B41b1fc:L41b1fc:{c.instructions+=2;NFSU2_TR(0x41b1fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b200:{NFSU2_TR(0x41b200);
TAIL_STATIC(0x41afc0u,41a);
}
B41b205:L41b205:{c.instructions+=1;NFSU2_TR(0x41b205);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b209:L41b209:{c.instructions+=13;NFSU2_TR(0x41b209);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41b20a:{NFSU2_TR(0x41b20a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41b20b:{NFSU2_TR(0x41b20b);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b20f:{NFSU2_TR(0x41b20f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b213:{NFSU2_TR(0x41b213);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41b215:{NFSU2_TR(0x41b215);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b217:{NFSU2_TR(0x41b217);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b21b:{NFSU2_TR(0x41b21b);
__builtin_memmove((R+4),(R+518),1);
}
B41b21e:{NFSU2_TR(0x41b21e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41b21f:{NFSU2_TR(0x41b21f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41b220:{NFSU2_TR(0x41b220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B41b222:{NFSU2_TR(0x41b222);
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
B41b225:{NFSU2_TR(0x41b225);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41b230:L41b230:{c.instructions+=2;NFSU2_TR(0x41b230);
w4(R+0,u32(0x16b4ull));
}
B41b235:{NFSU2_TR(0x41b235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b23aull));
TAIL_STATIC(0x75c4d0u,75c);
}
B41b23a:L41b23a:{c.instructions+=3;NFSU2_TR(0x41b23a);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41b241:{NFSU2_TR(0x41b241);
w4(R+4,u32(0x64ull));
}
B41b246:{NFSU2_TR(0x41b246);
{goto L41b250;}
}
B41b250:L41b250:{c.instructions+=6;NFSU2_TR(0x41b250);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffd8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41b257:{NFSU2_TR(0x41b257);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffdcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b25b:{NFSU2_TR(0x41b25b);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B41b261:{NFSU2_TR(0x41b261);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
}
B41b264:{NFSU2_TR(0x41b264);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B41b265:{NFSU2_TR(0x41b265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b250u);}goto L41b250;}}
}
B41b267:L41b267:{c.instructions+=15;NFSU2_TR(0x41b267);
__builtin_memmove((R+0),gp(0x88f2be),1);
}
B41b26c:{NFSU2_TR(0x41b26c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b26d:{NFSU2_TR(0x41b26d);
u8 U[8];
w4(U+0,u32(u32(u32(0x16c0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41b274:{NFSU2_TR(0x41b274);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b275:{NFSU2_TR(0x41b275);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41b277:{NFSU2_TR(0x41b277);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b279:{NFSU2_TR(0x41b279);
u8 U[8];
w4(U+0,u32(u32(u32(0x16b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b280:{NFSU2_TR(0x41b280);
u8 U[8];
w4(U+0,u32(u32(u32(0x16b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b287:{NFSU2_TR(0x41b287);
u8 U[5];
w4(U+0,u32(u32(u32(0x16b8ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b28f:{NFSU2_TR(0x41b28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b293:{NFSU2_TR(0x41b293);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b298:{NFSU2_TR(0x41b298);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b29c:{NFSU2_TR(0x41b29c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b2a0:{NFSU2_TR(0x41b2a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b2a4:{NFSU2_TR(0x41b2a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b2b1;}}
}
B41b2a6:L41b2a6:{c.instructions+=5;NFSU2_TR(0x41b2a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41b2a7:{NFSU2_TR(0x41b2a7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41b2a9:{NFSU2_TR(0x41b2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41b2aa:{NFSU2_TR(0x41b2aa);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x16b4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x16b4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x16b4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41b2b0:{NFSU2_TR(0x41b2b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41b2b1:L41b2b1:{c.instructions+=10;NFSU2_TR(0x41b2b1);
u8 U[5];
w4(U+0,u32(u32(u32(0x16d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b2b8:{NFSU2_TR(0x41b2b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b2ba:{NFSU2_TR(0x41b2ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x16ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b2c1:{NFSU2_TR(0x41b2c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b2c2:{NFSU2_TR(0x41b2c2);
__builtin_memmove((R+12),(R+20),4);
}
B41b2c4:{NFSU2_TR(0x41b2c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b2c5:{NFSU2_TR(0x41b2c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b2c9:{NFSU2_TR(0x41b2c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b2cd:{NFSU2_TR(0x41b2cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b2d1:{NFSU2_TR(0x41b2d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b2f3;}}
}
B41b2d3:L41b2d3:{c.instructions+=7;NFSU2_TR(0x41b2d3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B41b2d7:{NFSU2_TR(0x41b2d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41b2da:{NFSU2_TR(0x41b2da);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b2de:{NFSU2_TR(0x41b2de);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b2e2:{NFSU2_TR(0x41b2e2);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b2e8:{NFSU2_TR(0x41b2e8);
{u32 ea_=u32(r4(R+16)+u32(5844u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41b2ef:{NFSU2_TR(0x41b2ef);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b2f3:L41b2f3:{c.instructions+=5;NFSU2_TR(0x41b2f3);
__builtin_memmove((R+0),gp(0x88d218),4);
}
B41b2f8:{NFSU2_TR(0x41b2f8);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41b2fb:{NFSU2_TR(0x41b2fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41b2fe:{NFSU2_TR(0x41b2fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41b306:{NFSU2_TR(0x41b306);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41b320;}}
}
B41b308:L41b308:{c.instructions+=7;NFSU2_TR(0x41b308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41b309:{NFSU2_TR(0x41b309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41b30a:{NFSU2_TR(0x41b30a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41b30b:{NFSU2_TR(0x41b30b);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41b30d:{NFSU2_TR(0x41b30d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41b30e:{NFSU2_TR(0x41b30e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x16b4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x16b4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x16b4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41b314:{NFSU2_TR(0x41b314);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41b315:L41b315:{c.instructions+=3;NFSU2_TR(0x41b315);
u8 U[8];
w4(U+0,u32(u32(u32(0x16ccull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B41b31c:{NFSU2_TR(0x41b31c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41b31e:{NFSU2_TR(0x41b31e);
__builtin_memmove((R+28),(R+28),4);
}
B41b320:L41b320:{c.instructions+=11;NFSU2_TR(0x41b320);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B41b324:{NFSU2_TR(0x41b324);
u8 U[8];
w4(U+0,u32(u32(u32(0x16d0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41b32b:{NFSU2_TR(0x41b32b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41b32e:{NFSU2_TR(0x41b32e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b332:{NFSU2_TR(0x41b332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b333:{NFSU2_TR(0x41b333);
__builtin_memmove((R+4),(R+12),4);
}
B41b335:{NFSU2_TR(0x41b335);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b339:{NFSU2_TR(0x41b339);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b33f:{NFSU2_TR(0x41b33f);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41b343:{NFSU2_TR(0x41b343);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b347:{NFSU2_TR(0x41b347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b34cull));
TAIL_STATIC(0x40cd00u,40c);
}
B41b34c:L41b34c:{c.instructions+=4;NFSU2_TR(0x41b34c);
{u32 ea_=u32(u32(7880000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b352:{NFSU2_TR(0x41b352);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b354:{NFSU2_TR(0x41b354);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b357:{NFSU2_TR(0x41b357);
if(r1(R+514)){{goto L41b3d4;}}
}
B41b359:L41b359:{c.instructions+=21;NFSU2_TR(0x41b359);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41b35d:{NFSU2_TR(0x41b35d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41b361:{NFSU2_TR(0x41b361);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b365:{NFSU2_TR(0x41b365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b366:{NFSU2_TR(0x41b366);
__builtin_memmove((R+4),(R+12),4);
}
B41b368:{NFSU2_TR(0x41b368);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b36c:{NFSU2_TR(0x41b36c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b370:{NFSU2_TR(0x41b370);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b376:{NFSU2_TR(0x41b376);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b37a:{NFSU2_TR(0x41b37a);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b380:{NFSU2_TR(0x41b380);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b383:{NFSU2_TR(0x41b383);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b386:{NFSU2_TR(0x41b386);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41b388:{NFSU2_TR(0x41b388);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b38a:{NFSU2_TR(0x41b38a);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b38c:{NFSU2_TR(0x41b38c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41b38e:{NFSU2_TR(0x41b38e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b390:{NFSU2_TR(0x41b390);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b393:{NFSU2_TR(0x41b393);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b395:{NFSU2_TR(0x41b395);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b397:{NFSU2_TR(0x41b397);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b39cull));
TAIL_STATIC(0x40ce10u,40c);
}
B41b39c:L41b39c:{c.instructions+=4;NFSU2_TR(0x41b39c);
{u32 ea_=u32(u32(7880000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b3a2:{NFSU2_TR(0x41b3a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b3a4:{NFSU2_TR(0x41b3a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b3a7:{NFSU2_TR(0x41b3a7);
if(r1(R+514)){{goto L41b3d4;}}
}
B41b3a9:L41b3a9:{c.instructions+=11;NFSU2_TR(0x41b3a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41b3ad:{NFSU2_TR(0x41b3ad);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41b3b0:{NFSU2_TR(0x41b3b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b3b4:{NFSU2_TR(0x41b3b4);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b3b8:{NFSU2_TR(0x41b3b8);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b3be:{NFSU2_TR(0x41b3be);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b3c1:{NFSU2_TR(0x41b3c1);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41b3c3:{NFSU2_TR(0x41b3c3);
{u32 ea_=u32(u32(7880004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b3c9:{NFSU2_TR(0x41b3c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b3cb:{NFSU2_TR(0x41b3cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b3ce:{NFSU2_TR(0x41b3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41b7e8;}}
}
B41b3d4:L41b3d4:{c.instructions+=5;NFSU2_TR(0x41b3d4);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b3d8:{NFSU2_TR(0x41b3d8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b3de:{NFSU2_TR(0x41b3de);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b3e0:{NFSU2_TR(0x41b3e0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b3e3:{NFSU2_TR(0x41b3e3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L41b750;}}
}
B41b3e9:L41b3e9:{c.instructions+=4;NFSU2_TR(0x41b3e9);
__builtin_memmove((R+4),(R+12),4);
}
B41b3eb:{NFSU2_TR(0x41b3eb);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b3f0:{NFSU2_TR(0x41b3f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b3f5:{NFSU2_TR(0x41b3f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b3faull));
TAIL_STATIC(0x5d4380u,5d4);
}
B41b3fa:L41b3fa:{c.instructions+=4;NFSU2_TR(0x41b3fa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b3fc:{NFSU2_TR(0x41b3fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b400:{NFSU2_TR(0x41b400);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b404:{NFSU2_TR(0x41b404);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41b711;}}
}
B41b40a:L41b40a:{c.instructions+=1;NFSU2_TR(0x41b40a);
__builtin_memmove((R+12),(R+12),4);
}
B41b410:L41b410:{c.instructions+=3;NFSU2_TR(0x41b410);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b411:{NFSU2_TR(0x41b411);
__builtin_memmove((R+4),(R+12),4);
}
B41b413:{NFSU2_TR(0x41b413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b418ull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B41b418:L41b418:{c.instructions+=8;NFSU2_TR(0x41b418);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41b41c:{NFSU2_TR(0x41b41c);
__builtin_memmove((R+20),(R+0),4);
}
B41b41e:{NFSU2_TR(0x41b41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b421:{NFSU2_TR(0x41b421);
__builtin_memmove((R+8),(R+0),4);
}
B41b423:{NFSU2_TR(0x41b423);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41b426:{NFSU2_TR(0x41b426);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B41b429:{NFSU2_TR(0x41b429);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B41b42b:{NFSU2_TR(0x41b42b);
if(r1(R+518)){{goto L41b662;}}
}
B41b431:L41b431:{c.instructions+=6;NFSU2_TR(0x41b431);
__builtin_memmove((R+4),(R+0),1);
}
B41b433:{NFSU2_TR(0x41b433);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41b436:{NFSU2_TR(0x41b436);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41b439:{NFSU2_TR(0x41b439);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b43e:{NFSU2_TR(0x41b43e);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b442:{NFSU2_TR(0x41b442);
if(r1(R+518)){{goto L41b678;}}
}
B41b448:L41b448:{c.instructions+=9;NFSU2_TR(0x41b448);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41b44b:{NFSU2_TR(0x41b44b);
__builtin_memmove((R+4),(R+24),4);
}
B41b44d:{NFSU2_TR(0x41b44d);
__builtin_memmove((R+8),(R+24),4);
}
B41b44f:{NFSU2_TR(0x41b44f);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B41b452:{NFSU2_TR(0x41b452);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41b455:{NFSU2_TR(0x41b455);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0x1ull))));
}
B41b458:{NFSU2_TR(0x41b458);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B41b45b:{NFSU2_TR(0x41b45b);
u8 U[7];
w4(U+0,u32(u32(u32(0x16dcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B41b463:{NFSU2_TR(0x41b463);
if(r1(R+518)){{goto L41b48d;}}
}
B41b465:L41b465:{c.instructions+=2;NFSU2_TR(0x41b465);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b467:{NFSU2_TR(0x41b467);
if(r1(R+518)){{goto L41b4c6;}}
}
B41b469:L41b469:{c.instructions+=3;NFSU2_TR(0x41b469);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41b46d:{NFSU2_TR(0x41b46d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41b470:{NFSU2_TR(0x41b470);
if(r1(R+518)){{goto L41b483;}}
}
B41b472:L41b472:{c.instructions+=3;NFSU2_TR(0x41b472);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B41b475:{NFSU2_TR(0x41b475);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b478:{NFSU2_TR(0x41b478);
if(r1(R+518)){{goto L41b483;}}
}
B41b47a:L41b47a:{c.instructions+=2;NFSU2_TR(0x41b47a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b47d:{NFSU2_TR(0x41b47d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b5db;}}
}
B41b483:L41b483:{c.instructions+=2;NFSU2_TR(0x41b483);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b488:{NFSU2_TR(0x41b488);
{goto L41b662;}
}
B41b48d:L41b48d:{c.instructions+=2;NFSU2_TR(0x41b48d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b48f:{NFSU2_TR(0x41b48f);
if(r1(R+518)){{goto L41b4c6;}}
}
B41b491:L41b491:{c.instructions+=6;NFSU2_TR(0x41b491);
__builtin_memmove((R+4),(R+0),4);
}
B41b493:{NFSU2_TR(0x41b493);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B41b496:{NFSU2_TR(0x41b496);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b49a:{NFSU2_TR(0x41b49a);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41b49d:{NFSU2_TR(0x41b49d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41b4a0:{NFSU2_TR(0x41b4a0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b483u);}goto L41b483;}}
}
B41b4a2:L41b4a2:{c.instructions+=5;NFSU2_TR(0x41b4a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41b4a6:{NFSU2_TR(0x41b4a6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B41b4a9:{NFSU2_TR(0x41b4a9);
__builtin_memmove((R+4),(R+24),4);
}
B41b4ab:{NFSU2_TR(0x41b4ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b4ae:{NFSU2_TR(0x41b4ae);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b483u);}goto L41b483;}}
}
B41b4b0:L41b4b0:{c.instructions+=2;NFSU2_TR(0x41b4b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b4b3:{NFSU2_TR(0x41b4b3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b483u);}goto L41b483;}}
}
B41b4b5:L41b4b5:{c.instructions+=2;NFSU2_TR(0x41b4b5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b4b7:{NFSU2_TR(0x41b4b7);
if(r1(R+518)){{goto L41b4c6;}}
}
B41b4b9:L41b4b9:{c.instructions+=3;NFSU2_TR(0x41b4b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b4bc:{NFSU2_TR(0x41b4bc);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B41b4be:{NFSU2_TR(0x41b4be);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b4c0:L41b4c0:{c.instructions+=1;NFSU2_TR(0x41b4c0);
if(r1(R+518)){{goto L41b682;}}
}
B41b4c6:L41b4c6:{c.instructions+=3;NFSU2_TR(0x41b4c6);
w4(R+4,u32(0xeull));
}
B41b4cb:{NFSU2_TR(0x41b4cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B41b4cf:{NFSU2_TR(0x41b4cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B41b4d3:L41b4d3:{c.instructions+=1;NFSU2_TR(0x41b4d3);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41b4d5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b4d3u);}goto L41b4d3;}
}
B41b4d5:L41b4d5:{c.instructions+=2;NFSU2_TR(0x41b4d5);
__builtin_memmove((R+4),(R+20),4);
}
B41b4d7:{NFSU2_TR(0x41b4d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b4dcull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41b4dc:L41b4dc:{c.instructions+=37;NFSU2_TR(0x41b4dc);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41b4e0:{NFSU2_TR(0x41b4e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41b4e4:{NFSU2_TR(0x41b4e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b4e8:{NFSU2_TR(0x41b4e8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B41b4ec:{NFSU2_TR(0x41b4ec);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b4f0:{NFSU2_TR(0x41b4f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b4f4:{NFSU2_TR(0x41b4f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41b4f7:{NFSU2_TR(0x41b4f7);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b4fd:{NFSU2_TR(0x41b4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b500:{NFSU2_TR(0x41b500);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b504:{NFSU2_TR(0x41b504);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b508:{NFSU2_TR(0x41b508);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41b50c:{NFSU2_TR(0x41b50c);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b512:{NFSU2_TR(0x41b512);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b519:{NFSU2_TR(0x41b519);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b51d:{NFSU2_TR(0x41b51d);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b523:{NFSU2_TR(0x41b523);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41b527:{NFSU2_TR(0x41b527);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b52a:{NFSU2_TR(0x41b52a);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b52d:{NFSU2_TR(0x41b52d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B41b52f:{NFSU2_TR(0x41b52f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b531:{NFSU2_TR(0x41b531);
__builtin_memmove((R+0),(R+8),4);
}
B41b533:{NFSU2_TR(0x41b533);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b535:{NFSU2_TR(0x41b535);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41b538:{NFSU2_TR(0x41b538);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B41b53a:{NFSU2_TR(0x41b53a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+4))));
}
B41b53c:{NFSU2_TR(0x41b53c);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B41b542:{NFSU2_TR(0x41b542);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B41b544:{NFSU2_TR(0x41b544);
u8 U[5];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b54b:{NFSU2_TR(0x41b54b);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b552:{NFSU2_TR(0x41b552);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41b555:{NFSU2_TR(0x41b555);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b557:{NFSU2_TR(0x41b557);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B41b559:{NFSU2_TR(0x41b559);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b560:{NFSU2_TR(0x41b560);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b562:{NFSU2_TR(0x41b562);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b564:{NFSU2_TR(0x41b564);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41b594;}}
}
B41b566:L41b566:{c.instructions+=11;NFSU2_TR(0x41b566);
u8 U[12];
w4(U+0,u32(u32(u32(0x6eull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41b56a:{NFSU2_TR(0x41b56a);
__builtin_memmove((R+24),(R+20),4);
}
B41b56c:{NFSU2_TR(0x41b56c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B41b56e:{NFSU2_TR(0x41b56e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B41b571:{NFSU2_TR(0x41b571);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(R+24,u16(u32(r2(R+24))^u32(r2(U+0))));
}
B41b574:{NFSU2_TR(0x41b574);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1fffull))));
}
B41b57a:{NFSU2_TR(0x41b57a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))^u32(r2(R+24))));
s2(u32(r4(R+0)),r2(U+0));
}
B41b57d:{NFSU2_TR(0x41b57d);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b584:{NFSU2_TR(0x41b584);
u8 U[13];
w4(U+0,u32(u32(u32(0x6full))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))|u32(u8(0x20ull))));
s1(u32(r4(U+8)),r1(U+12));
}
B41b589:{NFSU2_TR(0x41b589);
u8 U[12];
w4(U+0,u32(u32(u32(0x6eull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41b58d:{NFSU2_TR(0x41b58d);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B41b594:L41b594:{c.instructions+=3;NFSU2_TR(0x41b594);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b598:{NFSU2_TR(0x41b598);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41b59b:{NFSU2_TR(0x41b59b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41b5c7;}}
}
B41b59d:L41b59d:{c.instructions+=11;NFSU2_TR(0x41b59d);
u8 U[12];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41b5a1:{NFSU2_TR(0x41b5a1);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B41b5a3:{NFSU2_TR(0x41b5a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r4(U+0))));
}
B41b5a6:{NFSU2_TR(0x41b5a6);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(R+20,u16(u32(r2(R+20))^u32(r2(U+0))));
}
B41b5a9:{NFSU2_TR(0x41b5a9);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x1fffull))));
}
B41b5af:{NFSU2_TR(0x41b5af);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))^u32(r2(R+20))));
s2(u32(r4(R+0)),r2(U+0));
}
B41b5b2:{NFSU2_TR(0x41b5b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b5b6:{NFSU2_TR(0x41b5b6);
u8 U[13];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+12,u8(u32(r1(U+12))&u32(u8(0xdfull))));
s1(u32(r4(U+8)),r1(U+12));
}
B41b5bb:{NFSU2_TR(0x41b5bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41b5bf:{NFSU2_TR(0x41b5bf);
u8 U[12];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41b5c3:{NFSU2_TR(0x41b5c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B41b5c7:L41b5c7:{c.instructions+=3;NFSU2_TR(0x41b5c7);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b5cb:{NFSU2_TR(0x41b5cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b5cd:{NFSU2_TR(0x41b5cd);
if(r1(R+518)){{goto L41b5f6;}}
}
B41b5cf:L41b5cf:{c.instructions+=2;NFSU2_TR(0x41b5cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0xfull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b5d2:{NFSU2_TR(0x41b5d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b5e3;}}
}
B41b5d4:L41b5d4:{c.instructions+=3;NFSU2_TR(0x41b5d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41b5d8:{NFSU2_TR(0x41b5d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b5d9:{NFSU2_TR(0x41b5d9);
{goto L41b5fb;}
}
B41b5db:L41b5db:{c.instructions+=2;NFSU2_TR(0x41b5db);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41b5de:{NFSU2_TR(0x41b5de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b4c0u);}goto L41b4c0;}
}
B41b5e3:L41b5e3:{c.instructions+=4;NFSU2_TR(0x41b5e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41b5e7:{NFSU2_TR(0x41b5e7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b5e8:{NFSU2_TR(0x41b5e8);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41b5ef:{NFSU2_TR(0x41b5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b5f4ull));
TAIL_STATIC(0x40c780u,40c);
}
B41b5f4:L41b5f4:{c.instructions+=1;NFSU2_TR(0x41b5f4);
{goto L41b607;}
}
B41b5f6:L41b5f6:{c.instructions+=2;NFSU2_TR(0x41b5f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41b5fa:{NFSU2_TR(0x41b5fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b5fb:L41b5fb:{c.instructions+=2;NFSU2_TR(0x41b5fb);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41b602:{NFSU2_TR(0x41b602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b607ull));
TAIL_STATIC(0x40c7e0u,40c);
}
B41b607:L41b607:{c.instructions+=5;NFSU2_TR(0x41b607);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b60b:{NFSU2_TR(0x41b60b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b60f:{NFSU2_TR(0x41b60f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B41b610:{NFSU2_TR(0x41b610);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b612:{NFSU2_TR(0x41b612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b659;}}
}
B41b614:L41b614:{c.instructions+=5;NFSU2_TR(0x41b614);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b618:{NFSU2_TR(0x41b618);
w4(R+4,u32(0xeull));
}
B41b61d:{NFSU2_TR(0x41b61d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B41b621:{NFSU2_TR(0x41b621);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B41b628:{NFSU2_TR(0x41b628);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b629:L41b629:{c.instructions+=1;NFSU2_TR(0x41b629);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41b62b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b629u);}goto L41b629;}
}
B41b62b:L41b62b:{c.instructions+=3;NFSU2_TR(0x41b62b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b62c:{NFSU2_TR(0x41b62c);
__builtin_memmove((R+4),(R+12),4);
}
B41b62e:{NFSU2_TR(0x41b62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b633ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B41b633:L41b633:{c.instructions+=2;NFSU2_TR(0x41b633);
__builtin_memmove((R+4),(R+0),4);
}
B41b635:{NFSU2_TR(0x41b635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b63aull));
TAIL_STATIC(0x401cc0u,401);
}
B41b63a:L41b63a:{c.instructions+=3;NFSU2_TR(0x41b63a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b63c:{NFSU2_TR(0x41b63c);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b643:{NFSU2_TR(0x41b643);
if(r1(R+518)){{goto L41b659;}}
}
B41b645:L41b645:{c.instructions+=4;NFSU2_TR(0x41b645);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41b64c:{NFSU2_TR(0x41b64c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b64d:{NFSU2_TR(0x41b64d);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41b654:{NFSU2_TR(0x41b654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b659ull));
TAIL_STATIC(0x40c7e0u,40c);
}
B41b659:L41b659:{c.instructions+=2;NFSU2_TR(0x41b659);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41b65d:{NFSU2_TR(0x41b65d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b662:L41b662:{c.instructions+=5;NFSU2_TR(0x41b662);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b666:{NFSU2_TR(0x41b666);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B41b667:{NFSU2_TR(0x41b667);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41b669:{NFSU2_TR(0x41b669);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b66d:{NFSU2_TR(0x41b66d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b410u);}goto L41b410;}}
}
B41b673:L41b673:{c.instructions+=1;NFSU2_TR(0x41b673);
{goto L41b6fb;}
}
B41b678:L41b678:{c.instructions+=2;NFSU2_TR(0x41b678);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41b680:{NFSU2_TR(0x41b680);
{goto L41b6fb;}
}
B41b682:L41b682:{c.instructions+=2;NFSU2_TR(0x41b682);
__builtin_memmove((R+4),(R+20),4);
}
B41b684:{NFSU2_TR(0x41b684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b689ull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B41b689:L41b689:{c.instructions+=34;NFSU2_TR(0x41b689);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B41b68d:{NFSU2_TR(0x41b68d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41b691:{NFSU2_TR(0x41b691);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41b694:{NFSU2_TR(0x41b694);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b698:{NFSU2_TR(0x41b698);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B41b69c:{NFSU2_TR(0x41b69c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b6a0:{NFSU2_TR(0x41b6a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b6a4:{NFSU2_TR(0x41b6a4);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b6aa:{NFSU2_TR(0x41b6aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b6ad:{NFSU2_TR(0x41b6ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B41b6b0:{NFSU2_TR(0x41b6b0);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41b6b4:{NFSU2_TR(0x41b6b4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b6b8:{NFSU2_TR(0x41b6b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b6bc:{NFSU2_TR(0x41b6bc);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B41b6bf:{NFSU2_TR(0x41b6bf);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b6c5:{NFSU2_TR(0x41b6c5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b6c9:{NFSU2_TR(0x41b6c9);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b6cf:{NFSU2_TR(0x41b6cf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b6d2:{NFSU2_TR(0x41b6d2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b6d5:{NFSU2_TR(0x41b6d5);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41b6d7:{NFSU2_TR(0x41b6d7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b6d9:{NFSU2_TR(0x41b6d9);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b6db:{NFSU2_TR(0x41b6db);
__builtin_memmove((R+12),(R+0),4);
}
B41b6dd:{NFSU2_TR(0x41b6dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b6e1:{NFSU2_TR(0x41b6e1);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+8))));
}
B41b6e3:{NFSU2_TR(0x41b6e3);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41b6e5:{NFSU2_TR(0x41b6e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b6e9:{NFSU2_TR(0x41b6e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b6ed:{NFSU2_TR(0x41b6ed);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b6ef:{NFSU2_TR(0x41b6ef);
__asm__ volatile(".byte 0xd8,0xeb":::"memory");
}
B41b6f1:{NFSU2_TR(0x41b6f1);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b6f5:{NFSU2_TR(0x41b6f5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b6f7:{NFSU2_TR(0x41b6f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b6f9:{NFSU2_TR(0x41b6f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b6fb:L41b6fb:{c.instructions+=3;NFSU2_TR(0x41b6fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b6ff:{NFSU2_TR(0x41b6ff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b701:{NFSU2_TR(0x41b701);
if(r1(R+518)){{goto L41b709;}}
}
B41b703:L41b703:{c.instructions+=2;NFSU2_TR(0x41b703);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41b705:{NFSU2_TR(0x41b705);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b709:L41b709:{c.instructions+=3;NFSU2_TR(0x41b709);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b70d:{NFSU2_TR(0x41b70d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b70f:{NFSU2_TR(0x41b70f);
if(r1(R+518)){{goto L41b72f;}}
}
B41b711:L41b711:{c.instructions+=2;NFSU2_TR(0x41b711);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b713:{NFSU2_TR(0x41b713);
if(r1(R+518)){{goto L41b750;}}
}
B41b715:L41b715:{c.instructions+=5;NFSU2_TR(0x41b715);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b719:{NFSU2_TR(0x41b719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b71a:{NFSU2_TR(0x41b71a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b71b:{NFSU2_TR(0x41b71b);
__builtin_memmove((R+4),(R+12),4);
}
B41b71d:{NFSU2_TR(0x41b71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b722ull));
TAIL_STATIC(0x5d8990u,5d8);
}
B41b722:L41b722:{c.instructions+=2;NFSU2_TR(0x41b722);
__builtin_memmove((R+4),(R+0),4);
}
B41b724:{NFSU2_TR(0x41b724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b729ull));
TAIL_STATIC(0x401cc0u,401);
}
B41b729:L41b729:{c.instructions+=2;NFSU2_TR(0x41b729);
__builtin_memmove((R+12),(R+0),4);
}
B41b72b:{NFSU2_TR(0x41b72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b72f:L41b72f:{c.instructions+=2;NFSU2_TR(0x41b72f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b731:{NFSU2_TR(0x41b731);
if(r1(R+518)){{goto L41b750;}}
}
B41b733:L41b733:{c.instructions+=4;NFSU2_TR(0x41b733);
u8 U[5];
w4(U+0,u32(u32(u32(0x16d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b73a:{NFSU2_TR(0x41b73a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b73c:{NFSU2_TR(0x41b73c);
__builtin_memmove((R+4),(R+12),4);
}
B41b73e:{NFSU2_TR(0x41b73e);
if(r1(R+518)){{goto L41b747;}}
}
B41b740:L41b740:{c.instructions+=1;NFSU2_TR(0x41b740);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b745ull));
TAIL_STATIC(0x5d8bf0u,5d8);
}
B41b745:L41b745:{c.instructions+=1;NFSU2_TR(0x41b745);
{goto L41b74c;}
}
B41b747:L41b747:{c.instructions+=1;NFSU2_TR(0x41b747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b74cull));
TAIL_STATIC(0x5d8c40u,5d8);
}
B41b74c:L41b74c:{c.instructions+=2;NFSU2_TR(0x41b74c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b74e:{NFSU2_TR(0x41b74e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b7c1;}}
}
B41b750:L41b750:{c.instructions+=4;NFSU2_TR(0x41b750);
u8 U[5];
w4(U+0,u32(u32(u32(0x16c0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b757:{NFSU2_TR(0x41b757);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b759:{NFSU2_TR(0x41b759);
u8 U[8];
w4(U+0,u32(u32(u32(0x16b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b760:{NFSU2_TR(0x41b760);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b76f;}}
}
B41b762:L41b762:{c.instructions+=2;NFSU2_TR(0x41b762);
u8 U[16];
w4(U+0,u32(u32(u32(0x16bcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41b769:{NFSU2_TR(0x41b769);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b308u);}goto L41b308;}}
}
B41b76f:L41b76f:{c.instructions+=7;NFSU2_TR(0x41b76f);
__builtin_memmove((R+4),(R+0),4);
}
B41b771:{NFSU2_TR(0x41b771);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41b774:{NFSU2_TR(0x41b774);
u8 U[12];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41b77b:{NFSU2_TR(0x41b77b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41b77c:{NFSU2_TR(0x41b77c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b77f:{NFSU2_TR(0x41b77f);
w4(R+4,u32(0xeull));
}
B41b784:{NFSU2_TR(0x41b784);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B41b788:L41b788:{c.instructions+=1;NFSU2_TR(0x41b788);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41b78a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b788u);}goto L41b788;}
}
B41b78a:L41b78a:{c.instructions+=2;NFSU2_TR(0x41b78a);
u8 U[8];
w4(U+0,u32(u32(u32(0x16b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b791:{NFSU2_TR(0x41b791);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b79e;}}
}
B41b793:L41b793:{c.instructions+=1;NFSU2_TR(0x41b793);
u8 U[8];
w4(U+0,u32(u32(u32(0x16b8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41b79e:L41b79e:{c.instructions+=7;NFSU2_TR(0x41b79e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b7a2:{NFSU2_TR(0x41b7a2);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B41b7a8:{NFSU2_TR(0x41b7a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41b7a9:{NFSU2_TR(0x41b7a9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b7ab:{NFSU2_TR(0x41b7ab);
u8 U[5];
w4(U+0,u32(u32(u32(0x16c0ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b7b3:{NFSU2_TR(0x41b7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b7b7:{NFSU2_TR(0x41b7b7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b308u);}goto L41b308;}}
}
B41b7bd:L41b7bd:{c.instructions+=1;NFSU2_TR(0x41b7bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41b7c1:L41b7c1:{c.instructions+=7;NFSU2_TR(0x41b7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b7c5:{NFSU2_TR(0x41b7c5);
__builtin_memmove((R+8),gp(0x88d218),4);
}
B41b7cb:{NFSU2_TR(0x41b7cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41b7cc:{NFSU2_TR(0x41b7cc);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41b7cf:{NFSU2_TR(0x41b7cf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b7d1:{NFSU2_TR(0x41b7d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b7d5:{NFSU2_TR(0x41b7d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b315u);}goto L41b315;}}
}
B41b7db:L41b7db:{c.instructions+=7;NFSU2_TR(0x41b7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41b7dc:{NFSU2_TR(0x41b7dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41b7dd:{NFSU2_TR(0x41b7dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41b7de:{NFSU2_TR(0x41b7de);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41b7e0:{NFSU2_TR(0x41b7e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41b7e1:{NFSU2_TR(0x41b7e1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x16b4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x16b4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x16b4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41b7e7:{NFSU2_TR(0x41b7e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41b7e8:L41b7e8:{c.instructions+=4;NFSU2_TR(0x41b7e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x16c8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b7ef:{NFSU2_TR(0x41b7ef);
__builtin_memmove((R+28),(R+0),4);
}
B41b7f1:{NFSU2_TR(0x41b7f1);
w4(R+4,u32(0xeull));
}
B41b7f6:{NFSU2_TR(0x41b7f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B41b7fa:L41b7fa:{c.instructions+=1;NFSU2_TR(0x41b7fa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41b7fc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b7fau);}goto L41b7fa;}
}
B41b7fc:L41b7fc:{c.instructions+=10;NFSU2_TR(0x41b7fc);
u8 U[5];
w4(U+0,u32(u32(u32(0x16d8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B41b803:{NFSU2_TR(0x41b803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41b804:{NFSU2_TR(0x41b804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41b805:{NFSU2_TR(0x41b805);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B41b807:{NFSU2_TR(0x41b807);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41b808:{NFSU2_TR(0x41b808);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41b80b:{NFSU2_TR(0x41b80b);
w1(R+0,u8(0x1ull));
}
B41b80d:{NFSU2_TR(0x41b80d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41b80e:{NFSU2_TR(0x41b80e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x16b4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x16b4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x16b4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41b814:{NFSU2_TR(0x41b814);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41b820:L41b820:{c.instructions+=19;NFSU2_TR(0x41b820);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b821:{NFSU2_TR(0x41b821);
__builtin_memmove((R+20),(R+16),4);
}
B41b823:{NFSU2_TR(0x41b823);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B41b826:{NFSU2_TR(0x41b826);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b828:{NFSU2_TR(0x41b828);
u8 U[4];
w4(U+0,u32(0x771599ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b82d:{NFSU2_TR(0x41b82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b833:{NFSU2_TR(0x41b833);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b834:{NFSU2_TR(0x41b834);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b83b:{NFSU2_TR(0x41b83b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4e8ull))));
}
B41b841:{NFSU2_TR(0x41b841);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b842:{NFSU2_TR(0x41b842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b843:{NFSU2_TR(0x41b843);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b844:{NFSU2_TR(0x41b844);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b849:{NFSU2_TR(0x41b849);
u8 U[4];
w4(U+0,u32(0x40c550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b84e:{NFSU2_TR(0x41b84e);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b850:{NFSU2_TR(0x41b850);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b855:{NFSU2_TR(0x41b855);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41b85c:{NFSU2_TR(0x41b85c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b85d:{NFSU2_TR(0x41b85d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b862ull));
TAIL_STATIC(0x75c461u,75c);
}
B41b862:L41b862:{c.instructions+=8;NFSU2_TR(0x41b862);
__builtin_memmove((R+4),gp(0x88d218),4);
}
B41b868:{NFSU2_TR(0x41b868);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41b86a:{NFSU2_TR(0x41b86a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41b86c:{NFSU2_TR(0x41b86c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41b86e:{NFSU2_TR(0x41b86e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4fcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b875:{NFSU2_TR(0x41b875);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b879:{NFSU2_TR(0x41b879);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b87d:{NFSU2_TR(0x41b87d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41baba;}}
}
B41b883:L41b883:{c.instructions+=2;NFSU2_TR(0x41b883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41b886:{NFSU2_TR(0x41b886);
{goto L41b890;}
}
B41b888:L41b888:{c.instructions+=2;NFSU2_TR(0x41b888);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41b88c:{NFSU2_TR(0x41b88c);
__builtin_memmove((R+16),(R+16),4);
}
B41b890:L41b890:{c.instructions+=9;NFSU2_TR(0x41b890);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88d21cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B41b897:{NFSU2_TR(0x41b897);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b899:{NFSU2_TR(0x41b899);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b89a:{NFSU2_TR(0x41b89a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41b89d:{NFSU2_TR(0x41b89d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b89e:{NFSU2_TR(0x41b89e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41b8a1:{NFSU2_TR(0x41b8a1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b8a2:{NFSU2_TR(0x41b8a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b8a6:{NFSU2_TR(0x41b8a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b8abull));
TAIL_STATIC(0x43d410u,43d);
}
B41b8ab:L41b8ab:{c.instructions+=3;NFSU2_TR(0x41b8ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B41b8ae:{NFSU2_TR(0x41b8ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41b8b0:{NFSU2_TR(0x41b8b0);
if(r1(R+518)){{goto L41ba9f;}}
}
B41b8b6:L41b8b6:{c.instructions+=4;NFSU2_TR(0x41b8b6);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),u16(0x0ull)));
w2(U+8,u16(u32(r2(U+6))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B41b8bb:{NFSU2_TR(0x41b8bb);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b8c0:{NFSU2_TR(0x41b8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41b8c8:{NFSU2_TR(0x41b8c8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L41ba9f;}}
}
B41b8ce:L41b8ce:{c.instructions+=5;NFSU2_TR(0x41b8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41b8d1:{NFSU2_TR(0x41b8d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41b8d4:{NFSU2_TR(0x41b8d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41b8d8:{NFSU2_TR(0x41b8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b8dc:{NFSU2_TR(0x41b8dc);
__builtin_memmove((R+16),(R+16),4);
}
B41b8e0:L41b8e0:{c.instructions+=3;NFSU2_TR(0x41b8e0);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41b8e4:{NFSU2_TR(0x41b8e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b8e6:{NFSU2_TR(0x41b8e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ba9f;}}
}
B41b8ec:L41b8ec:{c.instructions+=31;NFSU2_TR(0x41b8ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b8f0:{NFSU2_TR(0x41b8f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41b8f3:{NFSU2_TR(0x41b8f3);
u8 U[14];
w4(U+0,u32(u32(u32(0xa6ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B41b8fb:{NFSU2_TR(0x41b8fb);
u8 U[14];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(s32(s16(r2(U+12)))));
}
B41b903:{NFSU2_TR(0x41b903);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B41b90a:{NFSU2_TR(0x41b90a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41b90e:{NFSU2_TR(0x41b90e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b912:{NFSU2_TR(0x41b912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b915:{NFSU2_TR(0x41b915);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41b918:{NFSU2_TR(0x41b918);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b91c:{NFSU2_TR(0x41b91c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b920:{NFSU2_TR(0x41b920);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b926:{NFSU2_TR(0x41b926);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41b92a:{NFSU2_TR(0x41b92a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b92e:{NFSU2_TR(0x41b92e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b932:{NFSU2_TR(0x41b932);
{u32 ea_=u32(u32(8513532u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b938:{NFSU2_TR(0x41b938);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41b93c:{NFSU2_TR(0x41b93c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41b93e:{NFSU2_TR(0x41b93e);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b941:{NFSU2_TR(0x41b941);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41b943:{NFSU2_TR(0x41b943);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b945:{NFSU2_TR(0x41b945);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b947:{NFSU2_TR(0x41b947);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b94b:{NFSU2_TR(0x41b94b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B41b94f:{NFSU2_TR(0x41b94f);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41b955:{NFSU2_TR(0x41b955);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41b958:{NFSU2_TR(0x41b958);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B41b95a:{NFSU2_TR(0x41b95a);
{u32 ea_=u32(u32(7880004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b960:{NFSU2_TR(0x41b960);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b962:{NFSU2_TR(0x41b962);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b965:{NFSU2_TR(0x41b965);
if(r1(R+514)){{goto L41ba5a;}}
}
B41b96b:L41b96b:{c.instructions+=3;NFSU2_TR(0x41b96b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b96c:{NFSU2_TR(0x41b96c);
__builtin_memmove((R+4),(R+24),4);
}
B41b96e:{NFSU2_TR(0x41b96e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b973ull));
TAIL_STATIC(0x40cd00u,40c);
}
B41b973:L41b973:{c.instructions+=4;NFSU2_TR(0x41b973);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b979:{NFSU2_TR(0x41b979);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b97b:{NFSU2_TR(0x41b97b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b97e:{NFSU2_TR(0x41b97e);
if(r1(R+514)){{goto L41ba5a;}}
}
B41b984:L41b984:{c.instructions+=15;NFSU2_TR(0x41b984);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b988:{NFSU2_TR(0x41b988);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b989:{NFSU2_TR(0x41b989);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b98d:{NFSU2_TR(0x41b98d);
__builtin_memmove((R+4),(R+24),4);
}
B41b98f:{NFSU2_TR(0x41b98f);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b992:{NFSU2_TR(0x41b992);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b995:{NFSU2_TR(0x41b995);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B41b997:{NFSU2_TR(0x41b997);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b999:{NFSU2_TR(0x41b999);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41b99b:{NFSU2_TR(0x41b99b);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B41b99d:{NFSU2_TR(0x41b99d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41b99f:{NFSU2_TR(0x41b99f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41b9a2:{NFSU2_TR(0x41b9a2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b9a4:{NFSU2_TR(0x41b9a4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41b9a6:{NFSU2_TR(0x41b9a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41b9abull));
TAIL_STATIC(0x40ce10u,40c);
}
B41b9ab:L41b9ab:{c.instructions+=4;NFSU2_TR(0x41b9ab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b9b1:{NFSU2_TR(0x41b9b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b9b3:{NFSU2_TR(0x41b9b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41b9b6:{NFSU2_TR(0x41b9b6);
if(r1(R+514)){{goto L41ba5a;}}
}
B41b9bc:L41b9bc:{c.instructions+=4;NFSU2_TR(0x41b9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b9bf:{NFSU2_TR(0x41b9bf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41b9c1:{NFSU2_TR(0x41b9c1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B41b9c3:{NFSU2_TR(0x41b9c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41ba5a;}}
}
B41b9c9:L41b9c9:{c.instructions+=8;NFSU2_TR(0x41b9c9);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41b9cd:{NFSU2_TR(0x41b9cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b9d1:{NFSU2_TR(0x41b9d1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41b9d7:{NFSU2_TR(0x41b9d7);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41b9dc:{NFSU2_TR(0x41b9dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41b9e0:{NFSU2_TR(0x41b9e0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41b9e2:{NFSU2_TR(0x41b9e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41b9e5:{NFSU2_TR(0x41b9e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41b9eb;}}
}
B41b9e7:L41b9e7:{c.instructions+=2;NFSU2_TR(0x41b9e7);
w1(R+0,u8(0x1ull));
}
B41b9e9:{NFSU2_TR(0x41b9e9);
{goto L41b9ed;}
}
B41b9eb:L41b9eb:{c.instructions+=1;NFSU2_TR(0x41b9eb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B41b9ed:L41b9ed:{c.instructions+=11;NFSU2_TR(0x41b9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41b9f0:{NFSU2_TR(0x41b9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41b9f3:{NFSU2_TR(0x41b9f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b9f4:{NFSU2_TR(0x41b9f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b9f5:{NFSU2_TR(0x41b9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41b9f8:{NFSU2_TR(0x41b9f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b9f9:{NFSU2_TR(0x41b9f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b9fa:{NFSU2_TR(0x41b9fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41b9fe:{NFSU2_TR(0x41b9fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41b9ff:{NFSU2_TR(0x41b9ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ba00:{NFSU2_TR(0x41ba00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ba05ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b230u);}goto L41b230;}
}
B41ba05:L41ba05:{c.instructions+=12;NFSU2_TR(0x41ba05);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ba08:{NFSU2_TR(0x41ba08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41ba0b:{NFSU2_TR(0x41ba0b);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41ba12:{NFSU2_TR(0x41ba12);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B41ba15:{NFSU2_TR(0x41ba15);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ba16:{NFSU2_TR(0x41ba16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ba17:{NFSU2_TR(0x41ba17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ba1a:{NFSU2_TR(0x41ba1a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41ba1d:{NFSU2_TR(0x41ba1d);
__builtin_memmove((R+12),(R+0),1);
}
B41ba1f:{NFSU2_TR(0x41ba1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41ba23:{NFSU2_TR(0x41ba23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ba24:{NFSU2_TR(0x41ba24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ba29ull));
TAIL_STATIC(0x40c610u,40c);
}
B41ba29:L41ba29:{c.instructions+=3;NFSU2_TR(0x41ba29);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41ba2b:{NFSU2_TR(0x41ba2b);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41ba30:{NFSU2_TR(0x41ba30);
if(r1(R+518)){{goto L41ba56;}}
}
B41ba32:L41ba32:{c.instructions+=4;NFSU2_TR(0x41ba32);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41ba36:{NFSU2_TR(0x41ba36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41ba37:{NFSU2_TR(0x41ba37);
__builtin_memmove((R+4),(R+12),4);
}
B41ba39:{NFSU2_TR(0x41ba39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ba3eull));
TAIL_STATIC(0x40a2d0u,40a);
}
B41ba3e:L41ba3e:{c.instructions+=7;NFSU2_TR(0x41ba3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41ba42:{NFSU2_TR(0x41ba42);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41ba43:{NFSU2_TR(0x41ba43);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
}
B41ba49:{NFSU2_TR(0x41ba49);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ba4c:{NFSU2_TR(0x41ba4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ba50:{NFSU2_TR(0x41ba50);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ba54:{NFSU2_TR(0x41ba54);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41bab6;}}
}
B41ba56:L41ba56:{c.instructions+=1;NFSU2_TR(0x41ba56);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41ba5a:L41ba5a:{c.instructions+=14;NFSU2_TR(0x41ba5a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ba5c:{NFSU2_TR(0x41ba5c);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41ba5e:{NFSU2_TR(0x41ba5e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41ba61:{NFSU2_TR(0x41ba61);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41ba64:{NFSU2_TR(0x41ba64);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B41ba66:{NFSU2_TR(0x41ba66);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B41ba68:{NFSU2_TR(0x41ba68);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B41ba6a:{NFSU2_TR(0x41ba6a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B41ba6c:{NFSU2_TR(0x41ba6c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B41ba6e:{NFSU2_TR(0x41ba6e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B41ba70:{NFSU2_TR(0x41ba70);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B41ba72:{NFSU2_TR(0x41ba72);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41ba74:{NFSU2_TR(0x41ba74);
{u32 ea_=u32(u32(7885248u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41ba7a:{NFSU2_TR(0x41ba7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41ba7full));
TAIL_STATIC(0x75bed4u,75b);
}
B41ba7f:L41ba7f:{c.instructions+=2;NFSU2_TR(0x41ba7f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ba82:{NFSU2_TR(0x41ba82);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41ba89;}}
}
B41ba84:L41ba84:{c.instructions+=1;NFSU2_TR(0x41ba84);
w4(R+0,u32(0x1ull));
}
B41ba89:L41ba89:{c.instructions+=6;NFSU2_TR(0x41ba89);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41ba8d:{NFSU2_TR(0x41ba8d);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41ba91:{NFSU2_TR(0x41ba91);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B41ba93:{NFSU2_TR(0x41ba93);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41ba95:{NFSU2_TR(0x41ba95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41ba99:{NFSU2_TR(0x41ba99);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b8e0u);}goto L41b8e0;}}
}
B41ba9f:L41ba9f:{c.instructions+=6;NFSU2_TR(0x41ba9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41baa3:{NFSU2_TR(0x41baa3);
__builtin_memmove((R+4),gp(0x88d218),4);
}
B41baa9:{NFSU2_TR(0x41baa9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41baaa:{NFSU2_TR(0x41baaa);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41baac:{NFSU2_TR(0x41baac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bab0:{NFSU2_TR(0x41bab0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41b888u);}goto L41b888;}}
}
B41bab6:L41bab6:{c.instructions+=1;NFSU2_TR(0x41bab6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41baba:L41baba:{c.instructions+=6;NFSU2_TR(0x41baba);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B41babd:{NFSU2_TR(0x41babd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B41babf:{NFSU2_TR(0x41babf);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41bac2:{NFSU2_TR(0x41bac2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41baca:{NFSU2_TR(0x41baca);
__builtin_memmove((R+4),(R+28),4);
}
B41bacc:{NFSU2_TR(0x41bacc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41bb74;}}
}
B41bad2:L41bad2:{c.instructions+=2;NFSU2_TR(0x41bad2);
w4(R+24,u32(0x3ull));
}
B41bad7:{NFSU2_TR(0x41bad7);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B41bade:L41bade:{c.instructions+=2;NFSU2_TR(0x41bade);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41bae0:{NFSU2_TR(0x41bae0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41baf3;}}
}
B41bae2:L41bae2:{c.instructions+=5;NFSU2_TR(0x41bae2);
{u32 ea_=u32(r4(R+8)+u32(4294967104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41bae8:{NFSU2_TR(0x41bae8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41baec:{NFSU2_TR(0x41baec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41baee:{NFSU2_TR(0x41baee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41baf1:{NFSU2_TR(0x41baf1);
if(r1(R+514)){{goto L41baff;}}
}
B41baf3:L41baf3:{c.instructions+=3;NFSU2_TR(0x41baf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41baf9:{NFSU2_TR(0x41baf9);
__builtin_memmove((R+4),(R+12),4);
}
B41bafb:{NFSU2_TR(0x41bafb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41baff:L41baff:{c.instructions+=2;NFSU2_TR(0x41baff);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41bb01:{NFSU2_TR(0x41bb01);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41bb10;}}
}
B41bb03:L41bb03:{c.instructions+=5;NFSU2_TR(0x41bb03);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41bb05:{NFSU2_TR(0x41bb05);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41bb09:{NFSU2_TR(0x41bb09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41bb0b:{NFSU2_TR(0x41bb0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bb0e:{NFSU2_TR(0x41bb0e);
if(r1(R+514)){{goto L41bb19;}}
}
B41bb10:L41bb10:{c.instructions+=3;NFSU2_TR(0x41bb10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41bb12:{NFSU2_TR(0x41bb12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B41bb15:{NFSU2_TR(0x41bb15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bb19:L41bb19:{c.instructions+=2;NFSU2_TR(0x41bb19);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41bb1b:{NFSU2_TR(0x41bb1b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41bb2e;}}
}
B41bb1d:L41bb1d:{c.instructions+=5;NFSU2_TR(0x41bb1d);
{u32 ea_=u32(r4(R+8)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41bb23:{NFSU2_TR(0x41bb23);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41bb27:{NFSU2_TR(0x41bb27);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41bb29:{NFSU2_TR(0x41bb29);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bb2c:{NFSU2_TR(0x41bb2c);
if(r1(R+514)){{goto L41bb3b;}}
}
B41bb2e:L41bb2e:{c.instructions+=3;NFSU2_TR(0x41bb2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bb34:{NFSU2_TR(0x41bb34);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B41bb37:{NFSU2_TR(0x41bb37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bb3b:L41bb3b:{c.instructions+=2;NFSU2_TR(0x41bb3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41bb3d:{NFSU2_TR(0x41bb3d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41bb50;}}
}
B41bb3f:L41bb3f:{c.instructions+=5;NFSU2_TR(0x41bb3f);
{u32 ea_=u32(r4(R+8)+u32(384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41bb45:{NFSU2_TR(0x41bb45);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41bb49:{NFSU2_TR(0x41bb49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41bb4b:{NFSU2_TR(0x41bb4b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bb4e:{NFSU2_TR(0x41bb4e);
if(r1(R+514)){{goto L41bb5c;}}
}
B41bb50:L41bb50:{c.instructions+=3;NFSU2_TR(0x41bb50);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bb56:{NFSU2_TR(0x41bb56);
__builtin_memmove((R+4),(R+24),4);
}
B41bb58:{NFSU2_TR(0x41bb58);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bb5c:L41bb5c:{c.instructions+=6;NFSU2_TR(0x41bb5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bb60:{NFSU2_TR(0x41bb60);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B41bb63:{NFSU2_TR(0x41bb63);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B41bb66:{NFSU2_TR(0x41bb66);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x300ull))));
}
B41bb6c:{NFSU2_TR(0x41bb6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41bb6e:{NFSU2_TR(0x41bb6e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41badeu);}goto L41bade;}}
}
B41bb74:L41bb74:{c.instructions+=3;NFSU2_TR(0x41bb74);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41bb78:{NFSU2_TR(0x41bb78);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41bb7a:{NFSU2_TR(0x41bb7a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41bbaa;}}
}
B41bb7c:L41bb7c:{c.instructions+=3;NFSU2_TR(0x41bb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B41bb7f:{NFSU2_TR(0x41bb7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41bb82:{NFSU2_TR(0x41bb82);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41bb86:L41bb86:{c.instructions+=2;NFSU2_TR(0x41bb86);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41bb88:{NFSU2_TR(0x41bb88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41bb97;}}
}
B41bb8a:L41bb8a:{c.instructions+=5;NFSU2_TR(0x41bb8a);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41bb8c:{NFSU2_TR(0x41bb8c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41bb90:{NFSU2_TR(0x41bb90);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41bb92:{NFSU2_TR(0x41bb92);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bb95:{NFSU2_TR(0x41bb95);
if(r1(R+514)){{goto L41bb9f;}}
}
B41bb97:L41bb97:{c.instructions+=3;NFSU2_TR(0x41bb97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41bb99:{NFSU2_TR(0x41bb99);
__builtin_memmove((R+4),(R+12),4);
}
B41bb9b:{NFSU2_TR(0x41bb9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bb9f:L41bb9f:{c.instructions+=4;NFSU2_TR(0x41bb9f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41bba0:{NFSU2_TR(0x41bba0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
}
B41bba6:{NFSU2_TR(0x41bba6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41bba8:{NFSU2_TR(0x41bba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bb86u);}goto L41bb86;}}
}
B41bbaa:L41bbaa:{c.instructions+=2;NFSU2_TR(0x41bbaa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41bbac:{NFSU2_TR(0x41bbac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L41bbf5;}}
}
B41bbae:L41bbae:{c.instructions+=6;NFSU2_TR(0x41bbae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B41bbb1:{NFSU2_TR(0x41bbb1);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41bbb4:{NFSU2_TR(0x41bbb4);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B41bbb8:{NFSU2_TR(0x41bbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bbbb:{NFSU2_TR(0x41bbbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbbc:{NFSU2_TR(0x41bbbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bbc1ull));
TAIL_STATIC(0x40a2d0u,40a);
}
B41bbc1:L41bbc1:{c.instructions+=7;NFSU2_TR(0x41bbc1);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbc6:{NFSU2_TR(0x41bbc6);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbc8:{NFSU2_TR(0x41bbc8);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbcd:{NFSU2_TR(0x41bbcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41bbd1:{NFSU2_TR(0x41bbd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbd2:{NFSU2_TR(0x41bbd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x50cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bbd9:{NFSU2_TR(0x41bbd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bbdeull));
TAIL_STATIC(0x75c401u,75c);
}
B41bbde:L41bbde:{c.instructions+=9;NFSU2_TR(0x41bbde);
w1(R+0,u8(0x1ull));
}
B41bbe0:{NFSU2_TR(0x41bbe0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bbe7:{NFSU2_TR(0x41bbe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bbee:{NFSU2_TR(0x41bbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41bbef:{NFSU2_TR(0x41bbef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bbf0:{NFSU2_TR(0x41bbf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41bbf1:{NFSU2_TR(0x41bbf1);
__builtin_memmove((R+16),(R+20),4);
}
B41bbf3:{NFSU2_TR(0x41bbf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41bbf4:{NFSU2_TR(0x41bbf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bbf5:L41bbf5:{c.instructions+=7;NFSU2_TR(0x41bbf5);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbfa:{NFSU2_TR(0x41bbfa);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bbfc:{NFSU2_TR(0x41bbfc);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bc01:{NFSU2_TR(0x41bc01);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41bc05:{NFSU2_TR(0x41bc05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bc06:{NFSU2_TR(0x41bc06);
u8 U[8];
w4(U+0,u32(u32(u32(0x50cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc0d:{NFSU2_TR(0x41bc0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bc12ull));
TAIL_STATIC(0x75c401u,75c);
}
B41bc12:L41bc12:{c.instructions+=9;NFSU2_TR(0x41bc12);
u8 U[8];
w4(U+0,u32(u32(u32(0x4f4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bc19:{NFSU2_TR(0x41bc19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41bc1a:{NFSU2_TR(0x41bc1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bc1b:{NFSU2_TR(0x41bc1b);
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
B41bc1d:{NFSU2_TR(0x41bc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc24:{NFSU2_TR(0x41bc24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41bc25:{NFSU2_TR(0x41bc25);
__builtin_memmove((R+16),(R+20),4);
}
B41bc27:{NFSU2_TR(0x41bc27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41bc28:{NFSU2_TR(0x41bc28);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bc30:L41bc30:{c.instructions+=5;NFSU2_TR(0x41bc30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bc31:{NFSU2_TR(0x41bc31);
__builtin_memmove((R+24),(R+4),4);
}
B41bc33:{NFSU2_TR(0x41bc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bc36:{NFSU2_TR(0x41bc36);
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
B41bc38:{NFSU2_TR(0x41bc38);
if(r1(R+518)){{goto L41bc49;}}
}
B41bc3a:L41bc3a:{c.instructions+=1;NFSU2_TR(0x41bc3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bc3full));
TAIL_STATIC(0x614810u,614);
}
B41bc3f:L41bc3f:{c.instructions+=4;NFSU2_TR(0x41bc3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41bc41:{NFSU2_TR(0x41bc41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bc44:{NFSU2_TR(0x41bc44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41bc46:{NFSU2_TR(0x41bc46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc49:L41bc49:{c.instructions+=3;NFSU2_TR(0x41bc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41bc50:{NFSU2_TR(0x41bc50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bc51:{NFSU2_TR(0x41bc51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bc60:L41bc60:{c.instructions+=5;NFSU2_TR(0x41bc60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bc61:{NFSU2_TR(0x41bc61);
__builtin_memmove((R+24),(R+4),4);
}
B41bc63:{NFSU2_TR(0x41bc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bc66:{NFSU2_TR(0x41bc66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41bc68:{NFSU2_TR(0x41bc68);
if(r1(R+518)){{goto L41bc79;}}
}
B41bc6a:L41bc6a:{c.instructions+=1;NFSU2_TR(0x41bc6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bc6full));
TAIL_STATIC(0x614810u,614);
}
B41bc6f:L41bc6f:{c.instructions+=4;NFSU2_TR(0x41bc6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41bc71:{NFSU2_TR(0x41bc71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bc74:{NFSU2_TR(0x41bc74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41bc76:{NFSU2_TR(0x41bc76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc79:L41bc79:{c.instructions+=4;NFSU2_TR(0x41bc79);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bc7d:{NFSU2_TR(0x41bc7d);
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
B41bc7f:{NFSU2_TR(0x41bc7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc82:{NFSU2_TR(0x41bc82);
if(r1(R+518)){{goto L41bc98;}}
}
B41bc84:L41bc84:{c.instructions+=2;NFSU2_TR(0x41bc84);
__builtin_memmove((R+4),(R+24),4);
}
B41bc86:{NFSU2_TR(0x41bc86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bc8bull));
TAIL_STATIC(0x614810u,614);
}
B41bc8b:L41bc8b:{c.instructions+=5;NFSU2_TR(0x41bc8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bc8e:{NFSU2_TR(0x41bc8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B41bc90:{NFSU2_TR(0x41bc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc93:{NFSU2_TR(0x41bc93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bc96:{NFSU2_TR(0x41bc96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B41bc98:L41bc98:{c.instructions+=3;NFSU2_TR(0x41bc98);
__builtin_memmove((R+0),(R+24),4);
}
B41bc9a:{NFSU2_TR(0x41bc9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bc9b:{NFSU2_TR(0x41bc9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bca0:L41bca0:{c.instructions+=1;NFSU2_TR(0x41bca0);
TAIL_STATIC(0x414070u,414);
}
B41bcb0:L41bcb0:{c.instructions+=6;NFSU2_TR(0x41bcb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bcb4:{NFSU2_TR(0x41bcb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bcb7:{NFSU2_TR(0x41bcb7);
__builtin_memmove((R+4),(R+0),1);
}
B41bcb9:{NFSU2_TR(0x41bcb9);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41bcbc:{NFSU2_TR(0x41bcbc);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bcbf:{NFSU2_TR(0x41bcbf);
if(r1(R+518)){{goto L41bcd8;}}
}
B41bcc1:L41bcc1:{c.instructions+=2;NFSU2_TR(0x41bcc1);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bcc4:{NFSU2_TR(0x41bcc4);
if(r1(R+518)){{goto L41bcd8;}}
}
B41bcc6:L41bcc6:{c.instructions+=3;NFSU2_TR(0x41bcc6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B41bcc9:{NFSU2_TR(0x41bcc9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bccc:{NFSU2_TR(0x41bccc);
if(r1(R+518)){{goto L41bcd8;}}
}
B41bcce:L41bcce:{c.instructions+=2;NFSU2_TR(0x41bcce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bcd1:{NFSU2_TR(0x41bcd1);
if(r1(R+518)){{goto L41bcd8;}}
}
B41bcd3:L41bcd3:{c.instructions+=2;NFSU2_TR(0x41bcd3);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bcd6:{NFSU2_TR(0x41bcd6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41bcdd;}}
}
B41bcd8:L41bcd8:{c.instructions+=2;NFSU2_TR(0x41bcd8);
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
B41bcda:{NFSU2_TR(0x41bcda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bcdd:L41bcdd:{c.instructions+=3;NFSU2_TR(0x41bcdd);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x9ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x9ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bce0:{NFSU2_TR(0x41bce0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41bce3:{NFSU2_TR(0x41bce3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bcf0:L41bcf0:{c.instructions+=1;NFSU2_TR(0x41bcf0);
TAIL_STATIC(0x413cc0u,413);
}
B41bd00:L41bd00:{c.instructions+=7;NFSU2_TR(0x41bd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bd03:{NFSU2_TR(0x41bd03);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41bd07:{NFSU2_TR(0x41bd07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bd08:{NFSU2_TR(0x41bd08);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bd0c:{NFSU2_TR(0x41bd0c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bd0d:{NFSU2_TR(0x41bd0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bd0e:{NFSU2_TR(0x41bd0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bd13ull));
TAIL_STATIC(0x413f50u,413);
}
B41bd13:L41bd13:{c.instructions+=1;NFSU2_TR(0x41bd13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bd20:L41bd20:{c.instructions+=6;NFSU2_TR(0x41bd20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bd24:{NFSU2_TR(0x41bd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bd27:{NFSU2_TR(0x41bd27);
__builtin_memmove((R+4),(R+0),1);
}
B41bd29:{NFSU2_TR(0x41bd29);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41bd2c:{NFSU2_TR(0x41bd2c);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bd2f:{NFSU2_TR(0x41bd2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41bd36;}}
}
B41bd31:L41bd31:{c.instructions+=2;NFSU2_TR(0x41bd31);
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
B41bd33:{NFSU2_TR(0x41bd33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bd36:L41bd36:{c.instructions+=3;NFSU2_TR(0x41bd36);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B41bd39:{NFSU2_TR(0x41bd39);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bd3c:{NFSU2_TR(0x41bd3c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bd31u);}goto L41bd31;}}
}
B41bd3e:L41bd3e:{c.instructions+=2;NFSU2_TR(0x41bd3e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bd41:{NFSU2_TR(0x41bd41);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bd31u);}goto L41bd31;}}
}
B41bd43:L41bd43:{c.instructions+=2;NFSU2_TR(0x41bd43);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bd46:{NFSU2_TR(0x41bd46);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bd31u);}goto L41bd31;}}
}
B41bd48:L41bd48:{c.instructions+=3;NFSU2_TR(0x41bd48);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x9ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x9ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x9ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bd4b:{NFSU2_TR(0x41bd4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41bd4e:{NFSU2_TR(0x41bd4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bd60:L41bd60:{c.instructions+=1;NFSU2_TR(0x41bd60);
TAIL_STATIC(0x413bb0u,413);
}
B41bd70:L41bd70:{c.instructions+=7;NFSU2_TR(0x41bd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bd74:{NFSU2_TR(0x41bd74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bd77:{NFSU2_TR(0x41bd77);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B41bd7a:{NFSU2_TR(0x41bd7a);
__builtin_memmove((R+4),(R+0),1);
}
B41bd7c:{NFSU2_TR(0x41bd7c);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41bd7f:{NFSU2_TR(0x41bd7f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bd82:{NFSU2_TR(0x41bd82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41bd89;}}
}
B41bd84:L41bd84:{c.instructions+=2;NFSU2_TR(0x41bd84);
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
B41bd86:{NFSU2_TR(0x41bd86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bd89:L41bd89:{c.instructions+=3;NFSU2_TR(0x41bd89);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B41bd8c:{NFSU2_TR(0x41bd8c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bd8f:{NFSU2_TR(0x41bd8f);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bd84u);}goto L41bd84;}}
}
B41bd91:L41bd91:{c.instructions+=2;NFSU2_TR(0x41bd91);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bd94:{NFSU2_TR(0x41bd94);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bd84u);}goto L41bd84;}}
}
B41bd96:L41bd96:{c.instructions+=3;NFSU2_TR(0x41bd96);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bd99:{NFSU2_TR(0x41bd99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41bd9c:{NFSU2_TR(0x41bd9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bda0:L41bda0:{c.instructions+=5;NFSU2_TR(0x41bda0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bda1:{NFSU2_TR(0x41bda1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41bda5:{NFSU2_TR(0x41bda5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bda7:{NFSU2_TR(0x41bda7);
__builtin_memmove((R+4),(R+24),4);
}
B41bda9:{NFSU2_TR(0x41bda9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bdaeull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B41bdae:L41bdae:{c.instructions+=2;NFSU2_TR(0x41bdae);
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
B41bdb0:{NFSU2_TR(0x41bdb0);
if(r1(R+518)){{goto L41bdb8;}}
}
B41bdb2:L41bdb2:{c.instructions+=3;NFSU2_TR(0x41bdb2);
w1(R+0,u8(0x1ull));
}
B41bdb4:{NFSU2_TR(0x41bdb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bdb5:{NFSU2_TR(0x41bdb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bdb8:L41bdb8:{c.instructions+=6;NFSU2_TR(0x41bdb8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41bdba:{NFSU2_TR(0x41bdba);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41bdbd:{NFSU2_TR(0x41bdbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bdbe:{NFSU2_TR(0x41bdbe);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B41bdc1:{NFSU2_TR(0x41bdc1);
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
B41bdc3:{NFSU2_TR(0x41bdc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bdd0:L41bdd0:{c.instructions+=6;NFSU2_TR(0x41bdd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bdd4:{NFSU2_TR(0x41bdd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bdd7:{NFSU2_TR(0x41bdd7);
__builtin_memmove((R+4),(R+0),1);
}
B41bdd9:{NFSU2_TR(0x41bdd9);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B41bddc:{NFSU2_TR(0x41bddc);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B41bddf:{NFSU2_TR(0x41bddf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41bde6;}}
}
B41bde1:L41bde1:{c.instructions+=2;NFSU2_TR(0x41bde1);
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
B41bde3:{NFSU2_TR(0x41bde3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bde6:L41bde6:{c.instructions+=3;NFSU2_TR(0x41bde6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B41bde9:{NFSU2_TR(0x41bde9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bdec:{NFSU2_TR(0x41bdec);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bde1u);}goto L41bde1;}}
}
B41bdee:L41bdee:{c.instructions+=2;NFSU2_TR(0x41bdee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bdf1:{NFSU2_TR(0x41bdf1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41bde1u);}goto L41bde1;}}
}
B41bdf3:L41bdf3:{c.instructions+=3;NFSU2_TR(0x41bdf3);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
w1(R+512,u8((r1(U+3))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x2ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41bdf6:{NFSU2_TR(0x41bdf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B41bdf9:{NFSU2_TR(0x41bdf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41be00:L41be00:{c.instructions+=14;NFSU2_TR(0x41be00);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be02:{NFSU2_TR(0x41be02);
u8 U[4];
w4(U+0,u32(0x7715c3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be07:{NFSU2_TR(0x41be07);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41be0d:{NFSU2_TR(0x41be0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be0e:{NFSU2_TR(0x41be0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41be15:{NFSU2_TR(0x41be15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be16:{NFSU2_TR(0x41be16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be17:{NFSU2_TR(0x41be17);
__builtin_memmove((R+24),(R+4),4);
}
B41be19:{NFSU2_TR(0x41be19);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41be1d:{NFSU2_TR(0x41be1d);
u8 U[4];
w4(U+0,u32(0x7852b0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41be23:{NFSU2_TR(0x41be23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41be29:{NFSU2_TR(0x41be29);
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
B41be2b:{NFSU2_TR(0x41be2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41be33:{NFSU2_TR(0x41be33);
if(r1(R+518)){{goto L41be3b;}}
}
B41be35:L41be35:{c.instructions+=3;NFSU2_TR(0x41be35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41be37:{NFSU2_TR(0x41be37);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be39:{NFSU2_TR(0x41be39);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41be3bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41be3b:L41be3b:{c.instructions+=3;NFSU2_TR(0x41be3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41be41:{NFSU2_TR(0x41be41);
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
B41be43:{NFSU2_TR(0x41be43);
if(r1(R+518)){{goto L41be4b;}}
}
B41be45:L41be45:{c.instructions+=3;NFSU2_TR(0x41be45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41be47:{NFSU2_TR(0x41be47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be49:{NFSU2_TR(0x41be49);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41be4bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41be4b:L41be4b:{c.instructions+=3;NFSU2_TR(0x41be4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x73cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41be51:{NFSU2_TR(0x41be51);
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
B41be53:{NFSU2_TR(0x41be53);
if(r1(R+518)){{goto L41be5b;}}
}
B41be55:L41be55:{c.instructions+=3;NFSU2_TR(0x41be55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41be57:{NFSU2_TR(0x41be57);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be59:{NFSU2_TR(0x41be59);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41be5bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41be5b:L41be5b:{c.instructions+=3;NFSU2_TR(0x41be5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41be61:{NFSU2_TR(0x41be61);
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
B41be63:{NFSU2_TR(0x41be63);
if(r1(R+518)){{goto L41be6b;}}
}
B41be65:L41be65:{c.instructions+=3;NFSU2_TR(0x41be65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41be67:{NFSU2_TR(0x41be67);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41be69:{NFSU2_TR(0x41be69);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41be6bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41be6b:L41be6b:{c.instructions+=3;NFSU2_TR(0x41be6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41be6e:{NFSU2_TR(0x41be6e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B41be73:{NFSU2_TR(0x41be73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41be78ull));
TAIL_STATIC(0x4138b0u,413);
}
B41be78:L41be78:{c.instructions+=6;NFSU2_TR(0x41be78);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41be7c:{NFSU2_TR(0x41be7c);
u8 U[4];
w4(U+0,u32(0x7843f0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B41be82:{NFSU2_TR(0x41be82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41be83:{NFSU2_TR(0x41be83);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41be8a:{NFSU2_TR(0x41be8a);
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
B41be8d:{NFSU2_TR(0x41be8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41be90:L41be90:{c.instructions+=2;NFSU2_TR(0x41be90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41be96:{NFSU2_TR(0x41be96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bea0:L41bea0:{c.instructions+=3;NFSU2_TR(0x41bea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bea6:{NFSU2_TR(0x41bea6);
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
B41bea8:{NFSU2_TR(0x41bea8);
if(r1(R+518)){{goto L41bebb;}}
}
B41beaa:L41beaa:{c.instructions+=2;NFSU2_TR(0x41beaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41beac:{NFSU2_TR(0x41beac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41beafull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41beaf:L41beaf:{c.instructions+=5;NFSU2_TR(0x41beaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B41beb3:{NFSU2_TR(0x41beb3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B41beb5:{NFSU2_TR(0x41beb5);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B41beb7:{NFSU2_TR(0x41beb7);
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
B41beb8:{NFSU2_TR(0x41beb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bebb:L41bebb:{c.instructions+=2;NFSU2_TR(0x41bebb);
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
B41bebd:{NFSU2_TR(0x41bebd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bec0:L41bec0:{c.instructions+=3;NFSU2_TR(0x41bec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bec6:{NFSU2_TR(0x41bec6);
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
B41bec8:{NFSU2_TR(0x41bec8);
if(r1(R+518)){{goto L41bedd;}}
}
B41beca:L41beca:{c.instructions+=7;NFSU2_TR(0x41beca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41becd:{NFSU2_TR(0x41becd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41becf:{NFSU2_TR(0x41becf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bed0:{NFSU2_TR(0x41bed0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bed4:{NFSU2_TR(0x41bed4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bed5:{NFSU2_TR(0x41bed5);
__builtin_memmove((R+4),(R+0),4);
}
B41bed7:{NFSU2_TR(0x41bed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bedaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41beda:L41beda:{c.instructions+=1;NFSU2_TR(0x41beda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bedd:L41bedd:{c.instructions+=2;NFSU2_TR(0x41bedd);
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
B41bedf:{NFSU2_TR(0x41bedf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bef0:L41bef0:{c.instructions+=3;NFSU2_TR(0x41bef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bef6:{NFSU2_TR(0x41bef6);
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
B41bef8:{NFSU2_TR(0x41bef8);
if(r1(R+518)){{goto L41beff;}}
}
B41befa:L41befa:{c.instructions+=2;NFSU2_TR(0x41befa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41befc:{NFSU2_TR(0x41befc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B41beff:L41beff:{c.instructions+=2;NFSU2_TR(0x41beff);
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
B41bf01:{NFSU2_TR(0x41bf01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bf10:L41bf10:{c.instructions+=7;NFSU2_TR(0x41bf10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B41bf13:{NFSU2_TR(0x41bf13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf14:{NFSU2_TR(0x41bf14);
__builtin_memmove((R+24),(R+4),4);
}
B41bf16:{NFSU2_TR(0x41bf16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bf19:{NFSU2_TR(0x41bf19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bf1f:{NFSU2_TR(0x41bf1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf20:{NFSU2_TR(0x41bf20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bf25ull));
TAIL_STATIC(0x60c170u,60c);
}
B41bf25:L41bf25:{c.instructions+=2;NFSU2_TR(0x41bf25);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41bf27:{NFSU2_TR(0x41bf27);
if(r1(R+518)){{goto L41bf43;}}
}
B41bf29:L41bf29:{c.instructions+=8;NFSU2_TR(0x41bf29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bf2f:{NFSU2_TR(0x41bf2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41bf31:{NFSU2_TR(0x41bf31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bf37:{NFSU2_TR(0x41bf37);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf38:{NFSU2_TR(0x41bf38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf39:{NFSU2_TR(0x41bf39);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41bf3d:{NFSU2_TR(0x41bf3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf3e:{NFSU2_TR(0x41bf3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bf43ull));
TAIL_STATIC(0x60c050u,60c);
}
B41bf43:L41bf43:{c.instructions+=4;NFSU2_TR(0x41bf43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bf49:{NFSU2_TR(0x41bf49);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bf4c:{NFSU2_TR(0x41bf4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41bf4e:{NFSU2_TR(0x41bf4e);
if(r1(R+518)){{goto L41bf6c;}}
}
B41bf50:L41bf50:{c.instructions+=8;NFSU2_TR(0x41bf50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41bf53:{NFSU2_TR(0x41bf53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bf59:{NFSU2_TR(0x41bf59);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf5e:{NFSU2_TR(0x41bf5e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B41bf61:{NFSU2_TR(0x41bf61);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf62:{NFSU2_TR(0x41bf62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41bf64:{NFSU2_TR(0x41bf64);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf65:{NFSU2_TR(0x41bf65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bf6aull));
TAIL_STATIC(0x41a030u,41a);
}
B41bf6a:L41bf6a:{c.instructions+=1;NFSU2_TR(0x41bf6a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B41bf6c:L41bf6c:{c.instructions+=5;NFSU2_TR(0x41bf6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bf70:{NFSU2_TR(0x41bf70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41bf72:{NFSU2_TR(0x41bf72);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x54ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41bf75:{NFSU2_TR(0x41bf75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf76:{NFSU2_TR(0x41bf76);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bf79ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41bf79:L41bf79:{c.instructions+=3;NFSU2_TR(0x41bf79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bf7a:{NFSU2_TR(0x41bf7a);
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
B41bf7d:{NFSU2_TR(0x41bf7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bf80:L41bf80:{c.instructions+=5;NFSU2_TR(0x41bf80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf81:{NFSU2_TR(0x41bf81);
__builtin_memmove((R+24),(R+4),4);
}
B41bf83:{NFSU2_TR(0x41bf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bf86:{NFSU2_TR(0x41bf86);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B41bf8b:{NFSU2_TR(0x41bf8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41bfc4;}}
}
B41bf8d:L41bf8d:{c.instructions+=5;NFSU2_TR(0x41bf8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41bf90:{NFSU2_TR(0x41bf90);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41bf93:{NFSU2_TR(0x41bf93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bf94:{NFSU2_TR(0x41bf94);
w4(R+4,u32(0x81e5b8ull));
}
B41bf99:{NFSU2_TR(0x41bf99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bf9eull));
TAIL_STATIC(0x414bf0u,414);
}
B41bf9e:L41bf9e:{c.instructions+=5;NFSU2_TR(0x41bf9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41bfa4:{NFSU2_TR(0x41bfa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41bfa6:{NFSU2_TR(0x41bfa6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41bfa9:{NFSU2_TR(0x41bfa9);
w4(R+4,u32(0x81e388ull));
}
B41bfae:{NFSU2_TR(0x41bfae);
if(r1(R+518)){{goto L41bfbf;}}
}
B41bfb0:L41bfb0:{c.instructions+=4;NFSU2_TR(0x41bfb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bfb1:{NFSU2_TR(0x41bfb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bfb7:{NFSU2_TR(0x41bfb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bfb8:{NFSU2_TR(0x41bfb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bfbdull));
TAIL_STATIC(0x414d20u,414);
}
B41bfbd:L41bfbd:{c.instructions+=1;NFSU2_TR(0x41bfbd);
{goto L41bfc4;}
}
B41bfbf:L41bfbf:{c.instructions+=1;NFSU2_TR(0x41bfbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41bfc4ull));
TAIL_STATIC(0x40f150u,40f);
}
B41bfc4:L41bfc4:{c.instructions+=7;NFSU2_TR(0x41bfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bfca:{NFSU2_TR(0x41bfca);
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
B41bfcc:{NFSU2_TR(0x41bfcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41bfcf:{NFSU2_TR(0x41bfcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B41bfd6:{NFSU2_TR(0x41bfd6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x774ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41bfdc:{NFSU2_TR(0x41bfdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41bfdd:{NFSU2_TR(0x41bfdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41bfe0:L41bfe0:{c.instructions+=12;NFSU2_TR(0x41bfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B41bfe3:{NFSU2_TR(0x41bfe3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bfe7:{NFSU2_TR(0x41bfe7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bfe8:{NFSU2_TR(0x41bfe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B41bfea:{NFSU2_TR(0x41bfea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bfeb:{NFSU2_TR(0x41bfeb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bfec:{NFSU2_TR(0x41bfec);
__builtin_memmove((R+24),(R+4),4);
}
B41bfee:{NFSU2_TR(0x41bfee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41bff4:{NFSU2_TR(0x41bff4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41bffb:{NFSU2_TR(0x41bffb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41bffc:{NFSU2_TR(0x41bffc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41bfff:{NFSU2_TR(0x41bfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x41c002u,41c);
}
XIT:NFSU2_TR_EXIT(0x41b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
