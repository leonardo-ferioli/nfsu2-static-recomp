#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_59c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x59b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x59b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_59b(u8* __restrict R,Cpu& c);
u32 page_59b(Cpu& c){return body_59b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_59b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x59b002:goto L59b002;
case 0x59b005:c.instructions+=9;goto B59b005;
case 0x59b008:c.instructions+=8;goto B59b008;
case 0x59b00b:c.instructions+=7;goto B59b00b;
case 0x59b00d:c.instructions+=6;goto B59b00d;
case 0x59b010:c.instructions+=5;goto B59b010;
case 0x59b013:c.instructions+=4;goto B59b013;
case 0x59b015:c.instructions+=3;goto B59b015;
case 0x59b018:c.instructions+=2;goto B59b018;
case 0x59b01b:c.instructions+=1;goto B59b01b;
case 0x59b01e:goto L59b01e;
case 0x59b021:c.instructions+=1;goto B59b021;
case 0x59b023:goto L59b023;
case 0x59b025:c.instructions+=3;goto B59b025;
case 0x59b026:c.instructions+=2;goto B59b026;
case 0x59b028:c.instructions+=1;goto B59b028;
case 0x59b02d:goto L59b02d;
case 0x59b030:goto L59b030;
case 0x59b031:c.instructions+=2;goto B59b031;
case 0x59b033:c.instructions+=1;goto B59b033;
case 0x59b035:goto L59b035;
case 0x59b038:c.instructions+=1;goto B59b038;
case 0x59b03a:goto L59b03a;
case 0x59b03e:c.instructions+=1;goto B59b03e;
case 0x59b040:goto L59b040;
case 0x59b043:c.instructions+=1;goto B59b043;
case 0x59b045:goto L59b045;
case 0x59b049:goto L59b049;
case 0x59b04a:c.instructions+=2;goto B59b04a;
case 0x59b04d:c.instructions+=1;goto B59b04d;
case 0x59b04f:goto L59b04f;
case 0x59b050:c.instructions+=1;goto B59b050;
case 0x59b060:goto L59b060;
case 0x59b064:c.instructions+=6;goto B59b064;
case 0x59b068:c.instructions+=5;goto B59b068;
case 0x59b06a:c.instructions+=4;goto B59b06a;
case 0x59b06e:c.instructions+=3;goto B59b06e;
case 0x59b071:c.instructions+=2;goto B59b071;
case 0x59b074:c.instructions+=1;goto B59b074;
case 0x59b080:goto L59b080;
case 0x59b081:c.instructions+=5;goto B59b081;
case 0x59b085:c.instructions+=4;goto B59b085;
case 0x59b088:c.instructions+=3;goto B59b088;
case 0x59b089:c.instructions+=2;goto B59b089;
case 0x59b08b:c.instructions+=1;goto B59b08b;
case 0x59b08d:goto L59b08d;
case 0x59b090:c.instructions+=3;goto B59b090;
case 0x59b091:c.instructions+=2;goto B59b091;
case 0x59b092:c.instructions+=1;goto B59b092;
case 0x59b097:goto L59b097;
case 0x59b09a:c.instructions+=2;goto B59b09a;
case 0x59b09c:c.instructions+=1;goto B59b09c;
case 0x59b09e:goto L59b09e;
case 0x59b0a0:c.instructions+=1;goto B59b0a0;
case 0x59b0a2:goto L59b0a2;
case 0x59b0a4:goto L59b0a4;
case 0x59b0a7:c.instructions+=1;goto B59b0a7;
case 0x59b0a9:goto L59b0a9;
case 0x59b0ac:c.instructions+=1;goto B59b0ac;
case 0x59b0ae:goto L59b0ae;
case 0x59b0b0:c.instructions+=1;goto B59b0b0;
case 0x59b0b2:goto L59b0b2;
case 0x59b0b5:c.instructions+=5;goto B59b0b5;
case 0x59b0bb:c.instructions+=4;goto B59b0bb;
case 0x59b0be:c.instructions+=3;goto B59b0be;
case 0x59b0c1:c.instructions+=2;goto B59b0c1;
case 0x59b0c3:c.instructions+=1;goto B59b0c3;
case 0x59b0c5:goto L59b0c5;
case 0x59b0c6:c.instructions+=3;goto B59b0c6;
case 0x59b0c8:c.instructions+=2;goto B59b0c8;
case 0x59b0c9:c.instructions+=1;goto B59b0c9;
case 0x59b0cc:goto L59b0cc;
case 0x59b0ce:goto L59b0ce;
case 0x59b0cf:c.instructions+=2;goto B59b0cf;
case 0x59b0d0:c.instructions+=1;goto B59b0d0;
case 0x59b0e0:goto L59b0e0;
case 0x59b0e1:c.instructions+=5;goto B59b0e1;
case 0x59b0e2:c.instructions+=4;goto B59b0e2;
case 0x59b0e4:c.instructions+=3;goto B59b0e4;
case 0x59b0eb:c.instructions+=2;goto B59b0eb;
case 0x59b0ed:c.instructions+=1;goto B59b0ed;
case 0x59b0f0:goto L59b0f0;
case 0x59b0f3:c.instructions+=1;goto B59b0f3;
case 0x59b0f5:goto L59b0f5;
case 0x59b0f8:c.instructions+=3;goto B59b0f8;
case 0x59b0f9:c.instructions+=2;goto B59b0f9;
case 0x59b0fa:c.instructions+=1;goto B59b0fa;
case 0x59b0ff:goto L59b0ff;
case 0x59b102:c.instructions+=2;goto B59b102;
case 0x59b104:c.instructions+=1;goto B59b104;
case 0x59b106:goto L59b106;
case 0x59b108:c.instructions+=1;goto B59b108;
case 0x59b10a:goto L59b10a;
case 0x59b10c:goto L59b10c;
case 0x59b10f:c.instructions+=1;goto B59b10f;
case 0x59b111:goto L59b111;
case 0x59b114:c.instructions+=1;goto B59b114;
case 0x59b116:goto L59b116;
case 0x59b118:c.instructions+=1;goto B59b118;
case 0x59b11a:goto L59b11a;
case 0x59b11d:c.instructions+=5;goto B59b11d;
case 0x59b123:c.instructions+=4;goto B59b123;
case 0x59b126:c.instructions+=3;goto B59b126;
case 0x59b129:c.instructions+=2;goto B59b129;
case 0x59b12b:c.instructions+=1;goto B59b12b;
case 0x59b12d:goto L59b12d;
case 0x59b12f:goto L59b12f;
case 0x59b131:c.instructions+=1;goto B59b131;
case 0x59b133:goto L59b133;
case 0x59b136:goto L59b136;
case 0x59b137:c.instructions+=2;goto B59b137;
case 0x59b13a:c.instructions+=1;goto B59b13a;
case 0x59b13c:goto L59b13c;
case 0x59b13f:c.instructions+=3;goto B59b13f;
case 0x59b140:c.instructions+=2;goto B59b140;
case 0x59b141:c.instructions+=1;goto B59b141;
case 0x59b150:goto L59b150;
case 0x59b153:c.instructions+=1;goto B59b153;
case 0x59b160:goto L59b160;
case 0x59b163:c.instructions+=5;goto B59b163;
case 0x59b167:c.instructions+=4;goto B59b167;
case 0x59b168:c.instructions+=3;goto B59b168;
case 0x59b169:c.instructions+=2;goto B59b169;
case 0x59b16a:c.instructions+=1;goto B59b16a;
case 0x59b16f:goto L59b16f;
case 0x59b171:c.instructions+=3;goto B59b171;
case 0x59b174:c.instructions+=2;goto B59b174;
case 0x59b176:c.instructions+=1;goto B59b176;
case 0x59b178:goto L59b178;
case 0x59b17b:c.instructions+=8;goto B59b17b;
case 0x59b17d:c.instructions+=7;goto B59b17d;
case 0x59b17e:c.instructions+=6;goto B59b17e;
case 0x59b182:c.instructions+=5;goto B59b182;
case 0x59b183:c.instructions+=4;goto B59b183;
case 0x59b187:c.instructions+=3;goto B59b187;
case 0x59b189:c.instructions+=2;goto B59b189;
case 0x59b18b:c.instructions+=1;goto B59b18b;
case 0x59b18d:goto L59b18d;
case 0x59b18f:c.instructions+=1;goto B59b18f;
case 0x59b191:goto L59b191;
case 0x59b193:c.instructions+=3;goto B59b193;
case 0x59b195:c.instructions+=2;goto B59b195;
case 0x59b197:c.instructions+=1;goto B59b197;
case 0x59b199:goto L59b199;
case 0x59b19b:c.instructions+=1;goto B59b19b;
case 0x59b19d:goto L59b19d;
case 0x59b19f:c.instructions+=1;goto B59b19f;
case 0x59b1a1:goto L59b1a1;
case 0x59b1a4:c.instructions+=4;goto B59b1a4;
case 0x59b1a6:c.instructions+=3;goto B59b1a6;
case 0x59b1a7:c.instructions+=2;goto B59b1a7;
case 0x59b1a8:c.instructions+=1;goto B59b1a8;
case 0x59b1ad:goto L59b1ad;
case 0x59b1af:c.instructions+=5;goto B59b1af;
case 0x59b1b2:c.instructions+=4;goto B59b1b2;
case 0x59b1b4:c.instructions+=3;goto B59b1b4;
case 0x59b1b5:c.instructions+=2;goto B59b1b5;
case 0x59b1b6:c.instructions+=1;goto B59b1b6;
case 0x59b1bb:goto L59b1bb;
case 0x59b1bd:c.instructions+=5;goto B59b1bd;
case 0x59b1c0:c.instructions+=4;goto B59b1c0;
case 0x59b1c1:c.instructions+=3;goto B59b1c1;
case 0x59b1c2:c.instructions+=2;goto B59b1c2;
case 0x59b1c3:c.instructions+=1;goto B59b1c3;
case 0x59b1c6:goto L59b1c6;
case 0x59b1c9:c.instructions+=9;goto B59b1c9;
case 0x59b1cb:c.instructions+=8;goto B59b1cb;
case 0x59b1cd:c.instructions+=7;goto B59b1cd;
case 0x59b1ce:c.instructions+=6;goto B59b1ce;
case 0x59b1d1:c.instructions+=5;goto B59b1d1;
case 0x59b1d3:c.instructions+=4;goto B59b1d3;
case 0x59b1d5:c.instructions+=3;goto B59b1d5;
case 0x59b1d6:c.instructions+=2;goto B59b1d6;
case 0x59b1d7:c.instructions+=1;goto B59b1d7;
case 0x59b1da:goto L59b1da;
case 0x59b1dc:c.instructions+=7;goto B59b1dc;
case 0x59b1de:c.instructions+=6;goto B59b1de;
case 0x59b1e1:c.instructions+=5;goto B59b1e1;
case 0x59b1e3:c.instructions+=4;goto B59b1e3;
case 0x59b1e5:c.instructions+=3;goto B59b1e5;
case 0x59b1e8:c.instructions+=2;goto B59b1e8;
case 0x59b1ea:c.instructions+=1;goto B59b1ea;
case 0x59b1ec:goto L59b1ec;
case 0x59b1ed:c.instructions+=1;goto B59b1ed;
case 0x59b1ee:goto L59b1ee;
case 0x59b1ef:c.instructions+=1;goto B59b1ef;
case 0x59b200:goto L59b200;
case 0x59b204:c.instructions+=3;goto B59b204;
case 0x59b206:c.instructions+=2;goto B59b206;
case 0x59b209:c.instructions+=1;goto B59b209;
case 0x59b20f:goto L59b20f;
case 0x59b216:goto L59b216;
case 0x59b21a:c.instructions+=2;goto B59b21a;
case 0x59b21f:c.instructions+=1;goto B59b21f;
case 0x59b222:goto L59b222;
case 0x59b226:c.instructions+=3;goto B59b226;
case 0x59b22a:c.instructions+=2;goto B59b22a;
case 0x59b231:c.instructions+=1;goto B59b231;
case 0x59b234:goto L59b234;
case 0x59b238:c.instructions+=2;goto B59b238;
case 0x59b23d:c.instructions+=1;goto B59b23d;
case 0x59b240:goto L59b240;
case 0x59b244:c.instructions+=2;goto B59b244;
case 0x59b249:c.instructions+=1;goto B59b249;
case 0x59b24c:goto L59b24c;
case 0x59b250:c.instructions+=3;goto B59b250;
case 0x59b254:c.instructions+=2;goto B59b254;
case 0x59b25b:c.instructions+=1;goto B59b25b;
case 0x59b25e:goto L59b25e;
case 0x59b262:c.instructions+=2;goto B59b262;
case 0x59b267:c.instructions+=1;goto B59b267;
case 0x59b26a:goto L59b26a;
case 0x59b26e:c.instructions+=5;goto B59b26e;
case 0x59b272:c.instructions+=4;goto B59b272;
case 0x59b275:c.instructions+=3;goto B59b275;
case 0x59b278:c.instructions+=2;goto B59b278;
case 0x59b27c:c.instructions+=1;goto B59b27c;
case 0x59b27f:goto L59b27f;
case 0x59b283:c.instructions+=5;goto B59b283;
case 0x59b287:c.instructions+=4;goto B59b287;
case 0x59b28a:c.instructions+=3;goto B59b28a;
case 0x59b28d:c.instructions+=2;goto B59b28d;
case 0x59b291:c.instructions+=1;goto B59b291;
case 0x59b294:goto L59b294;
case 0x59b298:c.instructions+=2;goto B59b298;
case 0x59b29d:c.instructions+=1;goto B59b29d;
case 0x59b2a0:goto L59b2a0;
case 0x59b2a4:c.instructions+=3;goto B59b2a4;
case 0x59b2a8:c.instructions+=2;goto B59b2a8;
case 0x59b2af:c.instructions+=1;goto B59b2af;
case 0x59b2b2:goto L59b2b2;
case 0x59b2b6:c.instructions+=3;goto B59b2b6;
case 0x59b2ba:c.instructions+=2;goto B59b2ba;
case 0x59b2c1:c.instructions+=1;goto B59b2c1;
case 0x59b2c4:goto L59b2c4;
case 0x59b2c8:c.instructions+=2;goto B59b2c8;
case 0x59b2cd:c.instructions+=1;goto B59b2cd;
case 0x59b2d0:goto L59b2d0;
case 0x59b2d4:c.instructions+=2;goto B59b2d4;
case 0x59b2d9:c.instructions+=1;goto B59b2d9;
case 0x59b2dc:goto L59b2dc;
case 0x59b2e0:c.instructions+=2;goto B59b2e0;
case 0x59b2e5:c.instructions+=1;goto B59b2e5;
case 0x59b2e8:goto L59b2e8;
case 0x59b2ec:c.instructions+=2;goto B59b2ec;
case 0x59b2f1:c.instructions+=1;goto B59b2f1;
case 0x59b2f4:goto L59b2f4;
case 0x59b2f8:c.instructions+=2;goto B59b2f8;
case 0x59b2fd:c.instructions+=1;goto B59b2fd;
case 0x59b300:goto L59b300;
case 0x59b304:c.instructions+=3;goto B59b304;
case 0x59b308:c.instructions+=2;goto B59b308;
case 0x59b30f:c.instructions+=1;goto B59b30f;
case 0x59b312:goto L59b312;
case 0x59b316:c.instructions+=2;goto B59b316;
case 0x59b31d:c.instructions+=1;goto B59b31d;
case 0x59b320:goto L59b320;
case 0x59b324:c.instructions+=3;goto B59b324;
case 0x59b326:c.instructions+=2;goto B59b326;
case 0x59b32a:c.instructions+=1;goto B59b32a;
case 0x59b32c:goto L59b32c;
case 0x59b331:c.instructions+=1;goto B59b331;
case 0x59b334:goto L59b334;
case 0x59b339:c.instructions+=1;goto B59b339;
case 0x59b33c:goto L59b33c;
case 0x59b340:c.instructions+=3;goto B59b340;
case 0x59b342:c.instructions+=2;goto B59b342;
case 0x59b346:c.instructions+=1;goto B59b346;
case 0x59b348:goto L59b348;
case 0x59b34d:c.instructions+=1;goto B59b34d;
case 0x59b350:goto L59b350;
case 0x59b355:goto L59b355;
case 0x59b3c0:goto L59b3c0;
case 0x59b3c3:c.instructions+=46;goto B59b3c3;
case 0x59b3c9:c.instructions+=45;goto B59b3c9;
case 0x59b3cf:c.instructions+=44;goto B59b3cf;
case 0x59b3d5:c.instructions+=43;goto B59b3d5;
case 0x59b3db:c.instructions+=42;goto B59b3db;
case 0x59b3e1:c.instructions+=41;goto B59b3e1;
case 0x59b3e7:c.instructions+=40;goto B59b3e7;
case 0x59b3ed:c.instructions+=39;goto B59b3ed;
case 0x59b3f3:c.instructions+=38;goto B59b3f3;
case 0x59b3f9:c.instructions+=37;goto B59b3f9;
case 0x59b3fd:c.instructions+=36;goto B59b3fd;
case 0x59b403:c.instructions+=35;goto B59b403;
case 0x59b405:c.instructions+=34;goto B59b405;
case 0x59b40b:c.instructions+=33;goto B59b40b;
case 0x59b411:c.instructions+=32;goto B59b411;
case 0x59b414:c.instructions+=31;goto B59b414;
case 0x59b416:c.instructions+=30;goto B59b416;
case 0x59b41c:c.instructions+=29;goto B59b41c;
case 0x59b422:c.instructions+=28;goto B59b422;
case 0x59b425:c.instructions+=27;goto B59b425;
case 0x59b427:c.instructions+=26;goto B59b427;
case 0x59b42d:c.instructions+=25;goto B59b42d;
case 0x59b433:c.instructions+=24;goto B59b433;
case 0x59b436:c.instructions+=23;goto B59b436;
case 0x59b438:c.instructions+=22;goto B59b438;
case 0x59b43e:c.instructions+=21;goto B59b43e;
case 0x59b444:c.instructions+=20;goto B59b444;
case 0x59b447:c.instructions+=19;goto B59b447;
case 0x59b449:c.instructions+=18;goto B59b449;
case 0x59b44f:c.instructions+=17;goto B59b44f;
case 0x59b455:c.instructions+=16;goto B59b455;
case 0x59b458:c.instructions+=15;goto B59b458;
case 0x59b45a:c.instructions+=14;goto B59b45a;
case 0x59b460:c.instructions+=13;goto B59b460;
case 0x59b466:c.instructions+=12;goto B59b466;
case 0x59b469:c.instructions+=11;goto B59b469;
case 0x59b46b:c.instructions+=10;goto B59b46b;
case 0x59b471:c.instructions+=9;goto B59b471;
case 0x59b477:c.instructions+=8;goto B59b477;
case 0x59b47a:c.instructions+=7;goto B59b47a;
case 0x59b47c:c.instructions+=6;goto B59b47c;
case 0x59b482:c.instructions+=5;goto B59b482;
case 0x59b488:c.instructions+=4;goto B59b488;
case 0x59b48b:c.instructions+=3;goto B59b48b;
case 0x59b491:c.instructions+=2;goto B59b491;
case 0x59b497:c.instructions+=1;goto B59b497;
case 0x59b4a0:goto L59b4a0;
case 0x59b4a4:c.instructions+=4;goto B59b4a4;
case 0x59b4a8:c.instructions+=3;goto B59b4a8;
case 0x59b4ab:c.instructions+=2;goto B59b4ab;
case 0x59b4ae:c.instructions+=1;goto B59b4ae;
case 0x59b4b4:goto L59b4b4;
case 0x59b4bb:c.instructions+=1;goto B59b4bb;
case 0x59b4c2:goto L59b4c2;
case 0x59b4c5:c.instructions+=5;goto B59b4c5;
case 0x59b4c7:c.instructions+=4;goto B59b4c7;
case 0x59b4cb:c.instructions+=3;goto B59b4cb;
case 0x59b4ce:c.instructions+=2;goto B59b4ce;
case 0x59b4d2:c.instructions+=1;goto B59b4d2;
case 0x59b4d4:goto L59b4d4;
case 0x59b4d6:c.instructions+=1;goto B59b4d6;
case 0x59b4d8:goto L59b4d8;
case 0x59b4de:c.instructions+=1;goto B59b4de;
case 0x59b4e1:goto L59b4e1;
case 0x59b4e7:c.instructions+=1;goto B59b4e7;
case 0x59b4ea:goto L59b4ea;
case 0x59b4ec:c.instructions+=1;goto B59b4ec;
case 0x59b4ee:goto L59b4ee;
case 0x59b4f4:c.instructions+=1;goto B59b4f4;
case 0x59b4f7:goto L59b4f7;
case 0x59b4fd:c.instructions+=1;goto B59b4fd;
case 0x59b500:goto L59b500;
case 0x59b503:c.instructions+=4;goto B59b503;
case 0x59b505:c.instructions+=3;goto B59b505;
case 0x59b508:c.instructions+=2;goto B59b508;
case 0x59b50c:c.instructions+=1;goto B59b50c;
case 0x59b50e:goto L59b50e;
case 0x59b510:c.instructions+=2;goto B59b510;
case 0x59b514:c.instructions+=1;goto B59b514;
case 0x59b516:goto L59b516;
case 0x59b51c:c.instructions+=1;goto B59b51c;
case 0x59b51f:goto L59b51f;
case 0x59b525:c.instructions+=1;goto B59b525;
case 0x59b528:goto L59b528;
case 0x59b52a:c.instructions+=1;goto B59b52a;
case 0x59b52c:goto L59b52c;
case 0x59b530:c.instructions+=3;goto B59b530;
case 0x59b536:c.instructions+=2;goto B59b536;
case 0x59b53c:c.instructions+=1;goto B59b53c;
case 0x59b53f:goto L59b53f;
case 0x59b543:c.instructions+=3;goto B59b543;
case 0x59b549:c.instructions+=2;goto B59b549;
case 0x59b54f:c.instructions+=1;goto B59b54f;
case 0x59b552:goto L59b552;
case 0x59b555:c.instructions+=5;goto B59b555;
case 0x59b557:c.instructions+=4;goto B59b557;
case 0x59b55b:c.instructions+=3;goto B59b55b;
case 0x59b55e:c.instructions+=2;goto B59b55e;
case 0x59b562:c.instructions+=1;goto B59b562;
case 0x59b564:goto L59b564;
case 0x59b566:c.instructions+=1;goto B59b566;
case 0x59b568:goto L59b568;
case 0x59b56e:c.instructions+=1;goto B59b56e;
case 0x59b571:goto L59b571;
case 0x59b577:c.instructions+=1;goto B59b577;
case 0x59b57a:goto L59b57a;
case 0x59b57c:c.instructions+=1;goto B59b57c;
case 0x59b57e:goto L59b57e;
case 0x59b584:c.instructions+=1;goto B59b584;
case 0x59b587:goto L59b587;
case 0x59b58d:goto L59b58d;
case 0x59b5c0:goto L59b5c0;
case 0x59b5c3:c.instructions+=12;goto B59b5c3;
case 0x59b5c6:c.instructions+=11;goto B59b5c6;
case 0x59b5cc:c.instructions+=10;goto B59b5cc;
case 0x59b5d2:c.instructions+=9;goto B59b5d2;
case 0x59b5d8:c.instructions+=8;goto B59b5d8;
case 0x59b5de:c.instructions+=7;goto B59b5de;
case 0x59b5e2:c.instructions+=6;goto B59b5e2;
case 0x59b5e6:c.instructions+=5;goto B59b5e6;
case 0x59b5ec:c.instructions+=4;goto B59b5ec;
case 0x59b5f2:c.instructions+=3;goto B59b5f2;
case 0x59b5f4:c.instructions+=2;goto B59b5f4;
case 0x59b5f7:c.instructions+=1;goto B59b5f7;
case 0x59b5f9:goto L59b5f9;
case 0x59b5fb:c.instructions+=2;goto B59b5fb;
case 0x59b5fe:c.instructions+=1;goto B59b5fe;
case 0x59b600:goto L59b600;
case 0x59b606:c.instructions+=4;goto B59b606;
case 0x59b60c:c.instructions+=3;goto B59b60c;
case 0x59b60e:c.instructions+=2;goto B59b60e;
case 0x59b611:c.instructions+=1;goto B59b611;
case 0x59b613:goto L59b613;
case 0x59b615:c.instructions+=2;goto B59b615;
case 0x59b61b:c.instructions+=1;goto B59b61b;
case 0x59b61d:goto L59b61d;
case 0x59b623:c.instructions+=4;goto B59b623;
case 0x59b629:c.instructions+=3;goto B59b629;
case 0x59b62b:c.instructions+=2;goto B59b62b;
case 0x59b62e:c.instructions+=1;goto B59b62e;
case 0x59b630:goto L59b630;
case 0x59b636:c.instructions+=4;goto B59b636;
case 0x59b63c:c.instructions+=3;goto B59b63c;
case 0x59b63e:c.instructions+=2;goto B59b63e;
case 0x59b641:c.instructions+=1;goto B59b641;
case 0x59b643:goto L59b643;
case 0x59b645:c.instructions+=6;goto B59b645;
case 0x59b64b:c.instructions+=5;goto B59b64b;
case 0x59b651:c.instructions+=4;goto B59b651;
case 0x59b654:c.instructions+=3;goto B59b654;
case 0x59b65a:c.instructions+=2;goto B59b65a;
case 0x59b660:c.instructions+=1;goto B59b660;
case 0x59b662:goto L59b662;
case 0x59b666:c.instructions+=5;goto B59b666;
case 0x59b66a:c.instructions+=4;goto B59b66a;
case 0x59b670:c.instructions+=3;goto B59b670;
case 0x59b672:c.instructions+=2;goto B59b672;
case 0x59b674:c.instructions+=1;goto B59b674;
case 0x59b676:goto L59b676;
case 0x59b679:c.instructions+=1;goto B59b679;
case 0x59b67b:goto L59b67b;
case 0x59b67d:c.instructions+=3;goto B59b67d;
case 0x59b683:c.instructions+=2;goto B59b683;
case 0x59b686:c.instructions+=1;goto B59b686;
case 0x59b689:goto L59b689;
case 0x59b68d:c.instructions+=5;goto B59b68d;
case 0x59b691:c.instructions+=4;goto B59b691;
case 0x59b695:c.instructions+=3;goto B59b695;
case 0x59b697:c.instructions+=2;goto B59b697;
case 0x59b69a:c.instructions+=1;goto B59b69a;
case 0x59b69d:goto L59b69d;
case 0x59b6a0:c.instructions+=1;goto B59b6a0;
case 0x59b6a2:goto L59b6a2;
case 0x59b6a6:c.instructions+=6;goto B59b6a6;
case 0x59b6aa:c.instructions+=5;goto B59b6aa;
case 0x59b6ac:c.instructions+=4;goto B59b6ac;
case 0x59b6b0:c.instructions+=3;goto B59b6b0;
case 0x59b6b2:c.instructions+=2;goto B59b6b2;
case 0x59b6b5:c.instructions+=1;goto B59b6b5;
case 0x59b6c0:goto L59b6c0;
case 0x59b6c1:c.instructions+=4;goto B59b6c1;
case 0x59b6c5:c.instructions+=3;goto B59b6c5;
case 0x59b6c8:c.instructions+=2;goto B59b6c8;
case 0x59b6d0:c.instructions+=1;goto B59b6d0;
case 0x59b6d2:goto L59b6d2;
case 0x59b6d5:c.instructions+=1;goto B59b6d5;
case 0x59b6d7:goto L59b6d7;
case 0x59b6da:c.instructions+=1;goto B59b6da;
case 0x59b6dc:goto L59b6dc;
case 0x59b6e2:c.instructions+=2;goto B59b6e2;
case 0x59b6e3:c.instructions+=1;goto B59b6e3;
case 0x59b6e6:goto L59b6e6;
case 0x59b6ea:c.instructions+=2;goto B59b6ea;
case 0x59b6eb:c.instructions+=1;goto B59b6eb;
case 0x59b6f0:goto L59b6f0;
case 0x59b6f1:c.instructions+=10;goto B59b6f1;
case 0x59b6f2:c.instructions+=9;goto B59b6f2;
case 0x59b6f3:c.instructions+=8;goto B59b6f3;
case 0x59b6f4:c.instructions+=7;goto B59b6f4;
case 0x59b6f8:c.instructions+=6;goto B59b6f8;
case 0x59b6fd:c.instructions+=5;goto B59b6fd;
case 0x59b6ff:c.instructions+=4;goto B59b6ff;
case 0x59b701:c.instructions+=3;goto B59b701;
case 0x59b702:c.instructions+=2;goto B59b702;
case 0x59b704:c.instructions+=1;goto B59b704;
case 0x59b709:goto L59b709;
case 0x59b70a:c.instructions+=6;goto B59b70a;
case 0x59b70c:c.instructions+=5;goto B59b70c;
case 0x59b70e:c.instructions+=4;goto B59b70e;
case 0x59b711:c.instructions+=3;goto B59b711;
case 0x59b712:c.instructions+=2;goto B59b712;
case 0x59b714:c.instructions+=1;goto B59b714;
case 0x59b719:goto L59b719;
case 0x59b71a:c.instructions+=6;goto B59b71a;
case 0x59b71c:c.instructions+=5;goto B59b71c;
case 0x59b71e:c.instructions+=4;goto B59b71e;
case 0x59b721:c.instructions+=3;goto B59b721;
case 0x59b722:c.instructions+=2;goto B59b722;
case 0x59b724:c.instructions+=1;goto B59b724;
case 0x59b729:goto L59b729;
case 0x59b72a:c.instructions+=6;goto B59b72a;
case 0x59b72c:c.instructions+=5;goto B59b72c;
case 0x59b72e:c.instructions+=4;goto B59b72e;
case 0x59b731:c.instructions+=3;goto B59b731;
case 0x59b732:c.instructions+=2;goto B59b732;
case 0x59b734:c.instructions+=1;goto B59b734;
case 0x59b739:goto L59b739;
case 0x59b73a:c.instructions+=6;goto B59b73a;
case 0x59b73c:c.instructions+=5;goto B59b73c;
case 0x59b73e:c.instructions+=4;goto B59b73e;
case 0x59b741:c.instructions+=3;goto B59b741;
case 0x59b742:c.instructions+=2;goto B59b742;
case 0x59b744:c.instructions+=1;goto B59b744;
case 0x59b749:goto L59b749;
case 0x59b74e:c.instructions+=7;goto B59b74e;
case 0x59b74f:c.instructions+=6;goto B59b74f;
case 0x59b751:c.instructions+=5;goto B59b751;
case 0x59b752:c.instructions+=4;goto B59b752;
case 0x59b758:c.instructions+=3;goto B59b758;
case 0x59b759:c.instructions+=2;goto B59b759;
case 0x59b75b:c.instructions+=1;goto B59b75b;
case 0x59b760:goto L59b760;
case 0x59b763:c.instructions+=2;goto B59b763;
case 0x59b766:c.instructions+=1;goto B59b766;
case 0x59b768:goto L59b768;
case 0x59b76b:c.instructions+=11;goto B59b76b;
case 0x59b76e:c.instructions+=10;goto B59b76e;
case 0x59b771:c.instructions+=9;goto B59b771;
case 0x59b774:c.instructions+=8;goto B59b774;
case 0x59b777:c.instructions+=7;goto B59b777;
case 0x59b77a:c.instructions+=6;goto B59b77a;
case 0x59b781:c.instructions+=5;goto B59b781;
case 0x59b787:c.instructions+=4;goto B59b787;
case 0x59b78d:c.instructions+=3;goto B59b78d;
case 0x59b793:c.instructions+=2;goto B59b793;
case 0x59b798:c.instructions+=1;goto B59b798;
case 0x59b79e:goto L59b79e;
case 0x59b7a4:c.instructions+=3;goto B59b7a4;
case 0x59b7a5:c.instructions+=2;goto B59b7a5;
case 0x59b7a7:c.instructions+=1;goto B59b7a7;
case 0x59b7ac:goto L59b7ac;
case 0x59b7af:c.instructions+=5;goto B59b7af;
case 0x59b7b5:c.instructions+=4;goto B59b7b5;
case 0x59b7b8:c.instructions+=3;goto B59b7b8;
case 0x59b7ba:c.instructions+=2;goto B59b7ba;
case 0x59b7bd:c.instructions+=1;goto B59b7bd;
case 0x59b7bf:goto L59b7bf;
case 0x59b7c2:c.instructions+=4;goto B59b7c2;
case 0x59b7c8:c.instructions+=3;goto B59b7c8;
case 0x59b7ca:c.instructions+=2;goto B59b7ca;
case 0x59b7cd:c.instructions+=1;goto B59b7cd;
case 0x59b7cf:goto L59b7cf;
case 0x59b7d2:c.instructions+=4;goto B59b7d2;
case 0x59b7d8:c.instructions+=3;goto B59b7d8;
case 0x59b7da:c.instructions+=2;goto B59b7da;
case 0x59b7dd:c.instructions+=1;goto B59b7dd;
case 0x59b7df:goto L59b7df;
case 0x59b7e5:c.instructions+=4;goto B59b7e5;
case 0x59b7eb:c.instructions+=3;goto B59b7eb;
case 0x59b7ed:c.instructions+=2;goto B59b7ed;
case 0x59b7f0:c.instructions+=1;goto B59b7f0;
case 0x59b7f2:goto L59b7f2;
case 0x59b7f8:c.instructions+=4;goto B59b7f8;
case 0x59b7fe:c.instructions+=3;goto B59b7fe;
case 0x59b800:c.instructions+=2;goto B59b800;
case 0x59b803:c.instructions+=1;goto B59b803;
case 0x59b805:goto L59b805;
case 0x59b80b:c.instructions+=5;goto B59b80b;
case 0x59b810:c.instructions+=4;goto B59b810;
case 0x59b816:c.instructions+=3;goto B59b816;
case 0x59b818:c.instructions+=2;goto B59b818;
case 0x59b81b:c.instructions+=1;goto B59b81b;
case 0x59b81d:goto L59b81d;
case 0x59b821:goto L59b821;
case 0x59b822:c.instructions+=6;goto B59b822;
case 0x59b824:c.instructions+=5;goto B59b824;
case 0x59b826:c.instructions+=4;goto B59b826;
case 0x59b82a:c.instructions+=3;goto B59b82a;
case 0x59b82b:c.instructions+=2;goto B59b82b;
case 0x59b82d:c.instructions+=1;goto B59b82d;
case 0x59b832:goto L59b832;
case 0x59b836:c.instructions+=1;goto B59b836;
case 0x59b838:goto L59b838;
case 0x59b839:c.instructions+=5;goto B59b839;
case 0x59b83b:c.instructions+=4;goto B59b83b;
case 0x59b83d:c.instructions+=3;goto B59b83d;
case 0x59b83e:c.instructions+=2;goto B59b83e;
case 0x59b840:c.instructions+=1;goto B59b840;
case 0x59b845:goto L59b845;
case 0x59b846:c.instructions+=6;goto B59b846;
case 0x59b848:c.instructions+=5;goto B59b848;
case 0x59b84a:c.instructions+=4;goto B59b84a;
case 0x59b850:c.instructions+=3;goto B59b850;
case 0x59b851:c.instructions+=2;goto B59b851;
case 0x59b853:c.instructions+=1;goto B59b853;
case 0x59b858:goto L59b858;
case 0x59b85a:goto L59b85a;
case 0x59b85d:c.instructions+=2;goto B59b85d;
case 0x59b860:c.instructions+=1;goto B59b860;
case 0x59b862:goto L59b862;
case 0x59b865:c.instructions+=5;goto B59b865;
case 0x59b868:c.instructions+=4;goto B59b868;
case 0x59b86b:c.instructions+=3;goto B59b86b;
case 0x59b871:c.instructions+=2;goto B59b871;
case 0x59b877:c.instructions+=1;goto B59b877;
case 0x59b87d:goto L59b87d;
case 0x59b880:c.instructions+=2;goto B59b880;
case 0x59b883:c.instructions+=1;goto B59b883;
case 0x59b885:goto L59b885;
case 0x59b887:c.instructions+=2;goto B59b887;
case 0x59b889:c.instructions+=1;goto B59b889;
case 0x59b88c:goto L59b88c;
case 0x59b88d:c.instructions+=6;goto B59b88d;
case 0x59b88f:c.instructions+=5;goto B59b88f;
case 0x59b891:c.instructions+=4;goto B59b891;
case 0x59b897:c.instructions+=3;goto B59b897;
case 0x59b898:c.instructions+=2;goto B59b898;
case 0x59b89a:c.instructions+=1;goto B59b89a;
case 0x59b89f:goto L59b89f;
case 0x59b8a1:c.instructions+=1;goto B59b8a1;
case 0x59b8a6:goto L59b8a6;
case 0x59b8a7:c.instructions+=4;goto B59b8a7;
case 0x59b8a8:c.instructions+=3;goto B59b8a8;
case 0x59b8a9:c.instructions+=2;goto B59b8a9;
case 0x59b8aa:c.instructions+=1;goto B59b8aa;
case 0x59b8b0:goto L59b8b0;
case 0x59b8b1:c.instructions+=14;goto B59b8b1;
case 0x59b8b3:c.instructions+=13;goto B59b8b3;
case 0x59b8b6:c.instructions+=12;goto B59b8b6;
case 0x59b8b9:c.instructions+=11;goto B59b8b9;
case 0x59b8ba:c.instructions+=10;goto B59b8ba;
case 0x59b8bd:c.instructions+=9;goto B59b8bd;
case 0x59b8be:c.instructions+=8;goto B59b8be;
case 0x59b8bf:c.instructions+=7;goto B59b8bf;
case 0x59b8c1:c.instructions+=6;goto B59b8c1;
case 0x59b8c4:c.instructions+=5;goto B59b8c4;
case 0x59b8c5:c.instructions+=4;goto B59b8c5;
case 0x59b8c6:c.instructions+=3;goto B59b8c6;
case 0x59b8ca:c.instructions+=2;goto B59b8ca;
case 0x59b8cb:c.instructions+=1;goto B59b8cb;
case 0x59b8d0:goto L59b8d0;
case 0x59b8d6:c.instructions+=6;goto B59b8d6;
case 0x59b8d7:c.instructions+=5;goto B59b8d7;
case 0x59b8da:c.instructions+=4;goto B59b8da;
case 0x59b8db:c.instructions+=3;goto B59b8db;
case 0x59b8df:c.instructions+=2;goto B59b8df;
case 0x59b8e0:c.instructions+=1;goto B59b8e0;
case 0x59b8e5:goto L59b8e5;
case 0x59b8e8:c.instructions+=28;goto B59b8e8;
case 0x59b8eb:c.instructions+=27;goto B59b8eb;
case 0x59b8ed:c.instructions+=26;goto B59b8ed;
case 0x59b8ef:c.instructions+=25;goto B59b8ef;
case 0x59b8f1:c.instructions+=24;goto B59b8f1;
case 0x59b8f4:c.instructions+=23;goto B59b8f4;
case 0x59b8f7:c.instructions+=22;goto B59b8f7;
case 0x59b8fa:c.instructions+=21;goto B59b8fa;
case 0x59b8fb:c.instructions+=20;goto B59b8fb;
case 0x59b8ff:c.instructions+=19;goto B59b8ff;
case 0x59b903:c.instructions+=18;goto B59b903;
case 0x59b907:c.instructions+=17;goto B59b907;
case 0x59b90b:c.instructions+=16;goto B59b90b;
case 0x59b90f:c.instructions+=15;goto B59b90f;
case 0x59b913:c.instructions+=14;goto B59b913;
case 0x59b917:c.instructions+=13;goto B59b917;
case 0x59b919:c.instructions+=12;goto B59b919;
case 0x59b91c:c.instructions+=11;goto B59b91c;
case 0x59b91f:c.instructions+=10;goto B59b91f;
case 0x59b922:c.instructions+=9;goto B59b922;
case 0x59b925:c.instructions+=8;goto B59b925;
case 0x59b929:c.instructions+=7;goto B59b929;
case 0x59b92c:c.instructions+=6;goto B59b92c;
case 0x59b92f:c.instructions+=5;goto B59b92f;
case 0x59b930:c.instructions+=4;goto B59b930;
case 0x59b931:c.instructions+=3;goto B59b931;
case 0x59b933:c.instructions+=2;goto B59b933;
case 0x59b934:c.instructions+=1;goto B59b934;
case 0x59b940:goto L59b940;
case 0x59b941:c.instructions+=17;goto B59b941;
case 0x59b943:c.instructions+=16;goto B59b943;
case 0x59b946:c.instructions+=15;goto B59b946;
case 0x59b949:c.instructions+=14;goto B59b949;
case 0x59b94a:c.instructions+=13;goto B59b94a;
case 0x59b94c:c.instructions+=12;goto B59b94c;
case 0x59b94f:c.instructions+=11;goto B59b94f;
case 0x59b951:c.instructions+=10;goto B59b951;
case 0x59b954:c.instructions+=9;goto B59b954;
case 0x59b95a:c.instructions+=8;goto B59b95a;
case 0x59b95b:c.instructions+=7;goto B59b95b;
case 0x59b961:c.instructions+=6;goto B59b961;
case 0x59b967:c.instructions+=5;goto B59b967;
case 0x59b969:c.instructions+=4;goto B59b969;
case 0x59b96a:c.instructions+=3;goto B59b96a;
case 0x59b970:c.instructions+=2;goto B59b970;
case 0x59b972:c.instructions+=1;goto B59b972;
case 0x59b977:goto L59b977;
case 0x59b97a:c.instructions+=5;goto B59b97a;
case 0x59b97d:c.instructions+=4;goto B59b97d;
case 0x59b97e:c.instructions+=3;goto B59b97e;
case 0x59b982:c.instructions+=2;goto B59b982;
case 0x59b983:c.instructions+=1;goto B59b983;
case 0x59b988:goto L59b988;
case 0x59b98c:c.instructions+=8;goto B59b98c;
case 0x59b98f:c.instructions+=7;goto B59b98f;
case 0x59b992:c.instructions+=6;goto B59b992;
case 0x59b996:c.instructions+=5;goto B59b996;
case 0x59b997:c.instructions+=4;goto B59b997;
case 0x59b99d:c.instructions+=3;goto B59b99d;
case 0x59b99e:c.instructions+=2;goto B59b99e;
case 0x59b9a2:c.instructions+=1;goto B59b9a2;
case 0x59b9a7:goto L59b9a7;
case 0x59b9aa:c.instructions+=4;goto B59b9aa;
case 0x59b9ab:c.instructions+=3;goto B59b9ab;
case 0x59b9ad:c.instructions+=2;goto B59b9ad;
case 0x59b9ae:c.instructions+=1;goto B59b9ae;
case 0x59b9b0:goto L59b9b0;
case 0x59b9b1:c.instructions+=20;goto B59b9b1;
case 0x59b9b3:c.instructions+=19;goto B59b9b3;
case 0x59b9b6:c.instructions+=18;goto B59b9b6;
case 0x59b9bc:c.instructions+=17;goto B59b9bc;
case 0x59b9bf:c.instructions+=16;goto B59b9bf;
case 0x59b9c2:c.instructions+=15;goto B59b9c2;
case 0x59b9c3:c.instructions+=14;goto B59b9c3;
case 0x59b9c6:c.instructions+=13;goto B59b9c6;
case 0x59b9c8:c.instructions+=12;goto B59b9c8;
case 0x59b9c9:c.instructions+=11;goto B59b9c9;
case 0x59b9cb:c.instructions+=10;goto B59b9cb;
case 0x59b9cd:c.instructions+=9;goto B59b9cd;
case 0x59b9d0:c.instructions+=8;goto B59b9d0;
case 0x59b9d3:c.instructions+=7;goto B59b9d3;
case 0x59b9d4:c.instructions+=6;goto B59b9d4;
case 0x59b9d5:c.instructions+=5;goto B59b9d5;
case 0x59b9d8:c.instructions+=4;goto B59b9d8;
case 0x59b9db:c.instructions+=3;goto B59b9db;
case 0x59b9dc:c.instructions+=2;goto B59b9dc;
case 0x59b9df:c.instructions+=1;goto B59b9df;
case 0x59b9e4:goto L59b9e4;
case 0x59b9ea:c.instructions+=16;goto B59b9ea;
case 0x59b9ed:c.instructions+=15;goto B59b9ed;
case 0x59b9f0:c.instructions+=14;goto B59b9f0;
case 0x59b9f3:c.instructions+=13;goto B59b9f3;
case 0x59b9f5:c.instructions+=12;goto B59b9f5;
case 0x59b9f9:c.instructions+=11;goto B59b9f9;
case 0x59b9fb:c.instructions+=10;goto B59b9fb;
case 0x59b9ff:c.instructions+=9;goto B59b9ff;
case 0x59ba00:c.instructions+=8;goto B59ba00;
case 0x59ba03:c.instructions+=7;goto B59ba03;
case 0x59ba05:c.instructions+=6;goto B59ba05;
case 0x59ba08:c.instructions+=5;goto B59ba08;
case 0x59ba0c:c.instructions+=4;goto B59ba0c;
case 0x59ba0e:c.instructions+=3;goto B59ba0e;
case 0x59ba11:c.instructions+=2;goto B59ba11;
case 0x59ba13:c.instructions+=1;goto B59ba13;
case 0x59ba18:goto L59ba18;
case 0x59ba1e:c.instructions+=12;goto B59ba1e;
case 0x59ba25:c.instructions+=11;goto B59ba25;
case 0x59ba2b:c.instructions+=10;goto B59ba2b;
case 0x59ba2c:c.instructions+=9;goto B59ba2c;
case 0x59ba2d:c.instructions+=8;goto B59ba2d;
case 0x59ba31:c.instructions+=7;goto B59ba31;
case 0x59ba37:c.instructions+=6;goto B59ba37;
case 0x59ba3d:c.instructions+=5;goto B59ba3d;
case 0x59ba41:c.instructions+=4;goto B59ba41;
case 0x59ba47:c.instructions+=3;goto B59ba47;
case 0x59ba4d:c.instructions+=2;goto B59ba4d;
case 0x59ba51:c.instructions+=1;goto B59ba51;
case 0x59ba56:goto L59ba56;
case 0x59ba5a:c.instructions+=5;goto B59ba5a;
case 0x59ba5b:c.instructions+=4;goto B59ba5b;
case 0x59ba62:c.instructions+=3;goto B59ba62;
case 0x59ba63:c.instructions+=2;goto B59ba63;
case 0x59ba64:c.instructions+=1;goto B59ba64;
case 0x59ba69:goto L59ba69;
case 0x59ba70:c.instructions+=6;goto B59ba70;
case 0x59ba71:c.instructions+=5;goto B59ba71;
case 0x59ba78:c.instructions+=4;goto B59ba78;
case 0x59ba79:c.instructions+=3;goto B59ba79;
case 0x59ba7d:c.instructions+=2;goto B59ba7d;
case 0x59ba7e:c.instructions+=1;goto B59ba7e;
case 0x59ba83:goto L59ba83;
case 0x59ba86:c.instructions+=6;goto B59ba86;
case 0x59ba87:c.instructions+=5;goto B59ba87;
case 0x59ba8e:c.instructions+=4;goto B59ba8e;
case 0x59ba8f:c.instructions+=3;goto B59ba8f;
case 0x59ba95:c.instructions+=2;goto B59ba95;
case 0x59ba96:c.instructions+=1;goto B59ba96;
case 0x59ba9b:goto L59ba9b;
case 0x59ba9e:c.instructions+=3;goto B59ba9e;
case 0x59baa1:c.instructions+=2;goto B59baa1;
case 0x59baa3:c.instructions+=1;goto B59baa3;
case 0x59baa5:goto L59baa5;
case 0x59baa9:c.instructions+=3;goto B59baa9;
case 0x59baaa:c.instructions+=2;goto B59baaa;
case 0x59baab:c.instructions+=1;goto B59baab;
case 0x59bab0:goto L59bab0;
case 0x59bab3:goto L59bab3;
case 0x59bab6:c.instructions+=19;goto B59bab6;
case 0x59bab8:c.instructions+=18;goto B59bab8;
case 0x59babb:c.instructions+=17;goto B59babb;
case 0x59bac1:c.instructions+=16;goto B59bac1;
case 0x59bac3:c.instructions+=15;goto B59bac3;
case 0x59bac9:c.instructions+=14;goto B59bac9;
case 0x59bacf:c.instructions+=13;goto B59bacf;
case 0x59bad1:c.instructions+=12;goto B59bad1;
case 0x59bad4:c.instructions+=11;goto B59bad4;
case 0x59bad7:c.instructions+=10;goto B59bad7;
case 0x59bad8:c.instructions+=9;goto B59bad8;
case 0x59bada:c.instructions+=8;goto B59bada;
case 0x59bae0:c.instructions+=7;goto B59bae0;
case 0x59bae6:c.instructions+=6;goto B59bae6;
case 0x59baec:c.instructions+=5;goto B59baec;
case 0x59baed:c.instructions+=4;goto B59baed;
case 0x59baee:c.instructions+=3;goto B59baee;
case 0x59baf0:c.instructions+=2;goto B59baf0;
case 0x59baf1:c.instructions+=1;goto B59baf1;
case 0x59bb00:goto L59bb00;
case 0x59bb01:c.instructions+=29;goto B59bb01;
case 0x59bb03:c.instructions+=28;goto B59bb03;
case 0x59bb06:c.instructions+=27;goto B59bb06;
case 0x59bb09:c.instructions+=26;goto B59bb09;
case 0x59bb0a:c.instructions+=25;goto B59bb0a;
case 0x59bb0c:c.instructions+=24;goto B59bb0c;
case 0x59bb0f:c.instructions+=23;goto B59bb0f;
case 0x59bb11:c.instructions+=22;goto B59bb11;
case 0x59bb14:c.instructions+=21;goto B59bb14;
case 0x59bb17:c.instructions+=20;goto B59bb17;
case 0x59bb1b:c.instructions+=19;goto B59bb1b;
case 0x59bb1e:c.instructions+=18;goto B59bb1e;
case 0x59bb21:c.instructions+=17;goto B59bb21;
case 0x59bb23:c.instructions+=16;goto B59bb23;
case 0x59bb25:c.instructions+=15;goto B59bb25;
case 0x59bb27:c.instructions+=14;goto B59bb27;
case 0x59bb29:c.instructions+=13;goto B59bb29;
case 0x59bb2b:c.instructions+=12;goto B59bb2b;
case 0x59bb2d:c.instructions+=11;goto B59bb2d;
case 0x59bb2f:c.instructions+=10;goto B59bb2f;
case 0x59bb31:c.instructions+=9;goto B59bb31;
case 0x59bb33:c.instructions+=8;goto B59bb33;
case 0x59bb35:c.instructions+=7;goto B59bb35;
case 0x59bb37:c.instructions+=6;goto B59bb37;
case 0x59bb39:c.instructions+=5;goto B59bb39;
case 0x59bb3b:c.instructions+=4;goto B59bb3b;
case 0x59bb41:c.instructions+=3;goto B59bb41;
case 0x59bb43:c.instructions+=2;goto B59bb43;
case 0x59bb46:c.instructions+=1;goto B59bb46;
case 0x59bb48:goto L59bb48;
case 0x59bb4e:c.instructions+=9;goto B59bb4e;
case 0x59bb50:c.instructions+=8;goto B59bb50;
case 0x59bb52:c.instructions+=7;goto B59bb52;
case 0x59bb54:c.instructions+=6;goto B59bb54;
case 0x59bb56:c.instructions+=5;goto B59bb56;
case 0x59bb58:c.instructions+=4;goto B59bb58;
case 0x59bb5a:c.instructions+=3;goto B59bb5a;
case 0x59bb5e:c.instructions+=2;goto B59bb5e;
case 0x59bb60:c.instructions+=1;goto B59bb60;
case 0x59bb64:goto L59bb64;
case 0x59bb66:c.instructions+=14;goto B59bb66;
case 0x59bb67:c.instructions+=13;goto B59bb67;
case 0x59bb6a:c.instructions+=12;goto B59bb6a;
case 0x59bb6c:c.instructions+=11;goto B59bb6c;
case 0x59bb72:c.instructions+=10;goto B59bb72;
case 0x59bb73:c.instructions+=9;goto B59bb73;
case 0x59bb77:c.instructions+=8;goto B59bb77;
case 0x59bb78:c.instructions+=7;goto B59bb78;
case 0x59bb7e:c.instructions+=6;goto B59bb7e;
case 0x59bb84:c.instructions+=5;goto B59bb84;
case 0x59bb8a:c.instructions+=4;goto B59bb8a;
case 0x59bb8e:c.instructions+=3;goto B59bb8e;
case 0x59bb94:c.instructions+=2;goto B59bb94;
case 0x59bb9a:c.instructions+=1;goto B59bb9a;
case 0x59bb9f:goto L59bb9f;
case 0x59bba3:c.instructions+=16;goto B59bba3;
case 0x59bba6:c.instructions+=15;goto B59bba6;
case 0x59bbaa:c.instructions+=14;goto B59bbaa;
case 0x59bbae:c.instructions+=13;goto B59bbae;
case 0x59bbb0:c.instructions+=12;goto B59bbb0;
case 0x59bbb2:c.instructions+=11;goto B59bbb2;
case 0x59bbb4:c.instructions+=10;goto B59bbb4;
case 0x59bbb6:c.instructions+=9;goto B59bbb6;
case 0x59bbb8:c.instructions+=8;goto B59bbb8;
case 0x59bbba:c.instructions+=7;goto B59bbba;
case 0x59bbbc:c.instructions+=6;goto B59bbbc;
case 0x59bbbe:c.instructions+=5;goto B59bbbe;
case 0x59bbc0:c.instructions+=4;goto B59bbc0;
case 0x59bbc6:c.instructions+=3;goto B59bbc6;
case 0x59bbc8:c.instructions+=2;goto B59bbc8;
case 0x59bbcb:c.instructions+=1;goto B59bbcb;
case 0x59bbcd:goto L59bbcd;
case 0x59bbd3:c.instructions+=7;goto B59bbd3;
case 0x59bbd5:c.instructions+=6;goto B59bbd5;
case 0x59bbd7:c.instructions+=5;goto B59bbd7;
case 0x59bbd9:c.instructions+=4;goto B59bbd9;
case 0x59bbdb:c.instructions+=3;goto B59bbdb;
case 0x59bbdd:c.instructions+=2;goto B59bbdd;
case 0x59bbdf:c.instructions+=1;goto B59bbdf;
case 0x59bbe1:goto L59bbe1;
case 0x59bbe3:goto L59bbe3;
case 0x59bbe5:c.instructions+=11;goto B59bbe5;
case 0x59bbeb:c.instructions+=10;goto B59bbeb;
case 0x59bbf1:c.instructions+=9;goto B59bbf1;
case 0x59bbf3:c.instructions+=8;goto B59bbf3;
case 0x59bbf9:c.instructions+=7;goto B59bbf9;
case 0x59bbff:c.instructions+=6;goto B59bbff;
case 0x59bc05:c.instructions+=5;goto B59bc05;
case 0x59bc0b:c.instructions+=4;goto B59bc0b;
case 0x59bc0c:c.instructions+=3;goto B59bc0c;
case 0x59bc0e:c.instructions+=2;goto B59bc0e;
case 0x59bc0f:c.instructions+=1;goto B59bc0f;
case 0x59bc20:goto L59bc20;
case 0x59bc24:c.instructions+=11;goto B59bc24;
case 0x59bc27:c.instructions+=10;goto B59bc27;
case 0x59bc2a:c.instructions+=9;goto B59bc2a;
case 0x59bc30:c.instructions+=8;goto B59bc30;
case 0x59bc32:c.instructions+=7;goto B59bc32;
case 0x59bc38:c.instructions+=6;goto B59bc38;
case 0x59bc3a:c.instructions+=5;goto B59bc3a;
case 0x59bc40:c.instructions+=4;goto B59bc40;
case 0x59bc46:c.instructions+=3;goto B59bc46;
case 0x59bc4c:c.instructions+=2;goto B59bc4c;
case 0x59bc52:c.instructions+=1;goto B59bc52;
case 0x59bc60:goto L59bc60;
case 0x59bc61:c.instructions+=25;goto B59bc61;
case 0x59bc63:c.instructions+=24;goto B59bc63;
case 0x59bc66:c.instructions+=23;goto B59bc66;
case 0x59bc69:c.instructions+=22;goto B59bc69;
case 0x59bc6c:c.instructions+=21;goto B59bc6c;
case 0x59bc6f:c.instructions+=20;goto B59bc6f;
case 0x59bc70:c.instructions+=19;goto B59bc70;
case 0x59bc74:c.instructions+=18;goto B59bc74;
case 0x59bc77:c.instructions+=17;goto B59bc77;
case 0x59bc79:c.instructions+=16;goto B59bc79;
case 0x59bc7b:c.instructions+=15;goto B59bc7b;
case 0x59bc7f:c.instructions+=14;goto B59bc7f;
case 0x59bc83:c.instructions+=13;goto B59bc83;
case 0x59bc87:c.instructions+=12;goto B59bc87;
case 0x59bc8b:c.instructions+=11;goto B59bc8b;
case 0x59bc8f:c.instructions+=10;goto B59bc8f;
case 0x59bc93:c.instructions+=9;goto B59bc93;
case 0x59bc95:c.instructions+=8;goto B59bc95;
case 0x59bc99:c.instructions+=7;goto B59bc99;
case 0x59bc9d:c.instructions+=6;goto B59bc9d;
case 0x59bc9f:c.instructions+=5;goto B59bc9f;
case 0x59bca1:c.instructions+=4;goto B59bca1;
case 0x59bca7:c.instructions+=3;goto B59bca7;
case 0x59bca9:c.instructions+=2;goto B59bca9;
case 0x59bcac:c.instructions+=1;goto B59bcac;
case 0x59bcae:goto L59bcae;
case 0x59bcb4:c.instructions+=9;goto B59bcb4;
case 0x59bcb8:c.instructions+=8;goto B59bcb8;
case 0x59bcba:c.instructions+=7;goto B59bcba;
case 0x59bcbe:c.instructions+=6;goto B59bcbe;
case 0x59bcc2:c.instructions+=5;goto B59bcc2;
case 0x59bcc4:c.instructions+=4;goto B59bcc4;
case 0x59bcc8:c.instructions+=3;goto B59bcc8;
case 0x59bccc:c.instructions+=2;goto B59bccc;
case 0x59bcce:c.instructions+=1;goto B59bcce;
case 0x59bcd2:goto L59bcd2;
case 0x59bcd5:c.instructions+=16;goto B59bcd5;
case 0x59bcd7:c.instructions+=15;goto B59bcd7;
case 0x59bcdb:c.instructions+=14;goto B59bcdb;
case 0x59bcdf:c.instructions+=13;goto B59bcdf;
case 0x59bce2:c.instructions+=12;goto B59bce2;
case 0x59bce3:c.instructions+=11;goto B59bce3;
case 0x59bce4:c.instructions+=10;goto B59bce4;
case 0x59bce8:c.instructions+=9;goto B59bce8;
case 0x59bceb:c.instructions+=8;goto B59bceb;
case 0x59bcec:c.instructions+=7;goto B59bcec;
case 0x59bcf0:c.instructions+=6;goto B59bcf0;
case 0x59bcf3:c.instructions+=5;goto B59bcf3;
case 0x59bcf6:c.instructions+=4;goto B59bcf6;
case 0x59bcfa:c.instructions+=3;goto B59bcfa;
case 0x59bcfd:c.instructions+=2;goto B59bcfd;
case 0x59bd00:c.instructions+=1;goto B59bd00;
case 0x59bd05:goto L59bd05;
case 0x59bd09:c.instructions+=16;goto B59bd09;
case 0x59bd0c:c.instructions+=15;goto B59bd0c;
case 0x59bd10:c.instructions+=14;goto B59bd10;
case 0x59bd14:c.instructions+=13;goto B59bd14;
case 0x59bd16:c.instructions+=12;goto B59bd16;
case 0x59bd18:c.instructions+=11;goto B59bd18;
case 0x59bd1a:c.instructions+=10;goto B59bd1a;
case 0x59bd1c:c.instructions+=9;goto B59bd1c;
case 0x59bd1e:c.instructions+=8;goto B59bd1e;
case 0x59bd20:c.instructions+=7;goto B59bd20;
case 0x59bd22:c.instructions+=6;goto B59bd22;
case 0x59bd24:c.instructions+=5;goto B59bd24;
case 0x59bd26:c.instructions+=4;goto B59bd26;
case 0x59bd2c:c.instructions+=3;goto B59bd2c;
case 0x59bd2e:c.instructions+=2;goto B59bd2e;
case 0x59bd31:c.instructions+=1;goto B59bd31;
case 0x59bd33:goto L59bd33;
case 0x59bd39:c.instructions+=7;goto B59bd39;
case 0x59bd3b:c.instructions+=6;goto B59bd3b;
case 0x59bd3d:c.instructions+=5;goto B59bd3d;
case 0x59bd3f:c.instructions+=4;goto B59bd3f;
case 0x59bd41:c.instructions+=3;goto B59bd41;
case 0x59bd43:c.instructions+=2;goto B59bd43;
case 0x59bd45:c.instructions+=1;goto B59bd45;
case 0x59bd47:goto L59bd47;
case 0x59bd49:goto L59bd49;
case 0x59bd4b:c.instructions+=11;goto B59bd4b;
case 0x59bd51:c.instructions+=10;goto B59bd51;
case 0x59bd57:c.instructions+=9;goto B59bd57;
case 0x59bd59:c.instructions+=8;goto B59bd59;
case 0x59bd5f:c.instructions+=7;goto B59bd5f;
case 0x59bd65:c.instructions+=6;goto B59bd65;
case 0x59bd6b:c.instructions+=5;goto B59bd6b;
case 0x59bd71:c.instructions+=4;goto B59bd71;
case 0x59bd72:c.instructions+=3;goto B59bd72;
case 0x59bd74:c.instructions+=2;goto B59bd74;
case 0x59bd75:c.instructions+=1;goto B59bd75;
case 0x59bd80:goto L59bd80;
case 0x59bd81:c.instructions+=24;goto B59bd81;
case 0x59bd83:c.instructions+=23;goto B59bd83;
case 0x59bd86:c.instructions+=22;goto B59bd86;
case 0x59bd89:c.instructions+=21;goto B59bd89;
case 0x59bd8c:c.instructions+=20;goto B59bd8c;
case 0x59bd8f:c.instructions+=19;goto B59bd8f;
case 0x59bd90:c.instructions+=18;goto B59bd90;
case 0x59bd94:c.instructions+=17;goto B59bd94;
case 0x59bd97:c.instructions+=16;goto B59bd97;
case 0x59bd99:c.instructions+=15;goto B59bd99;
case 0x59bd9b:c.instructions+=14;goto B59bd9b;
case 0x59bd9f:c.instructions+=13;goto B59bd9f;
case 0x59bda3:c.instructions+=12;goto B59bda3;
case 0x59bda7:c.instructions+=11;goto B59bda7;
case 0x59bdab:c.instructions+=10;goto B59bdab;
case 0x59bdaf:c.instructions+=9;goto B59bdaf;
case 0x59bdb1:c.instructions+=8;goto B59bdb1;
case 0x59bdb5:c.instructions+=7;goto B59bdb5;
case 0x59bdb9:c.instructions+=6;goto B59bdb9;
case 0x59bdbb:c.instructions+=5;goto B59bdbb;
case 0x59bdbd:c.instructions+=4;goto B59bdbd;
case 0x59bdc3:c.instructions+=3;goto B59bdc3;
case 0x59bdc5:c.instructions+=2;goto B59bdc5;
case 0x59bdc8:c.instructions+=1;goto B59bdc8;
case 0x59bdca:goto L59bdca;
case 0x59bdd0:c.instructions+=9;goto B59bdd0;
case 0x59bdd4:c.instructions+=8;goto B59bdd4;
case 0x59bdd6:c.instructions+=7;goto B59bdd6;
case 0x59bdda:c.instructions+=6;goto B59bdda;
case 0x59bdde:c.instructions+=5;goto B59bdde;
case 0x59bde0:c.instructions+=4;goto B59bde0;
case 0x59bde4:c.instructions+=3;goto B59bde4;
case 0x59bde8:c.instructions+=2;goto B59bde8;
case 0x59bdea:c.instructions+=1;goto B59bdea;
case 0x59bdee:goto L59bdee;
case 0x59bdf1:c.instructions+=16;goto B59bdf1;
case 0x59bdf3:c.instructions+=15;goto B59bdf3;
case 0x59bdf7:c.instructions+=14;goto B59bdf7;
case 0x59bdfb:c.instructions+=13;goto B59bdfb;
case 0x59bdfe:c.instructions+=12;goto B59bdfe;
case 0x59bdff:c.instructions+=11;goto B59bdff;
case 0x59be00:c.instructions+=10;goto B59be00;
case 0x59be04:c.instructions+=9;goto B59be04;
case 0x59be07:c.instructions+=8;goto B59be07;
case 0x59be08:c.instructions+=7;goto B59be08;
case 0x59be0c:c.instructions+=6;goto B59be0c;
case 0x59be0f:c.instructions+=5;goto B59be0f;
case 0x59be12:c.instructions+=4;goto B59be12;
case 0x59be16:c.instructions+=3;goto B59be16;
case 0x59be19:c.instructions+=2;goto B59be19;
case 0x59be1c:c.instructions+=1;goto B59be1c;
case 0x59be21:goto L59be21;
case 0x59be25:c.instructions+=14;goto B59be25;
case 0x59be28:c.instructions+=13;goto B59be28;
case 0x59be2c:c.instructions+=12;goto B59be2c;
case 0x59be30:c.instructions+=11;goto B59be30;
case 0x59be34:c.instructions+=10;goto B59be34;
case 0x59be38:c.instructions+=9;goto B59be38;
case 0x59be3a:c.instructions+=8;goto B59be3a;
case 0x59be3c:c.instructions+=7;goto B59be3c;
case 0x59be3e:c.instructions+=6;goto B59be3e;
case 0x59be40:c.instructions+=5;goto B59be40;
case 0x59be42:c.instructions+=4;goto B59be42;
case 0x59be48:c.instructions+=3;goto B59be48;
case 0x59be4a:c.instructions+=2;goto B59be4a;
case 0x59be4d:c.instructions+=1;goto B59be4d;
case 0x59be4f:goto L59be4f;
case 0x59be55:c.instructions+=8;goto B59be55;
case 0x59be57:c.instructions+=7;goto B59be57;
case 0x59be59:c.instructions+=6;goto B59be59;
case 0x59be5d:c.instructions+=5;goto B59be5d;
case 0x59be5f:c.instructions+=4;goto B59be5f;
case 0x59be63:c.instructions+=3;goto B59be63;
case 0x59be67:c.instructions+=2;goto B59be67;
case 0x59be69:c.instructions+=1;goto B59be69;
case 0x59be6d:goto L59be6d;
case 0x59be6f:c.instructions+=18;goto B59be6f;
case 0x59be72:c.instructions+=17;goto B59be72;
case 0x59be76:c.instructions+=16;goto B59be76;
case 0x59be79:c.instructions+=15;goto B59be79;
case 0x59be7d:c.instructions+=14;goto B59be7d;
case 0x59be80:c.instructions+=13;goto B59be80;
case 0x59be84:c.instructions+=12;goto B59be84;
case 0x59be86:c.instructions+=11;goto B59be86;
case 0x59be8c:c.instructions+=10;goto B59be8c;
case 0x59be92:c.instructions+=9;goto B59be92;
case 0x59be98:c.instructions+=8;goto B59be98;
case 0x59be9e:c.instructions+=7;goto B59be9e;
case 0x59bea2:c.instructions+=6;goto B59bea2;
case 0x59bea8:c.instructions+=5;goto B59bea8;
case 0x59beae:c.instructions+=4;goto B59beae;
case 0x59beaf:c.instructions+=3;goto B59beaf;
case 0x59beb1:c.instructions+=2;goto B59beb1;
case 0x59beb2:c.instructions+=1;goto B59beb2;
case 0x59bec0:goto L59bec0;
case 0x59bec1:c.instructions+=22;goto B59bec1;
case 0x59bec3:c.instructions+=21;goto B59bec3;
case 0x59bec6:c.instructions+=20;goto B59bec6;
case 0x59becc:c.instructions+=19;goto B59becc;
case 0x59becf:c.instructions+=18;goto B59becf;
case 0x59bed0:c.instructions+=17;goto B59bed0;
case 0x59bed2:c.instructions+=16;goto B59bed2;
case 0x59bed5:c.instructions+=15;goto B59bed5;
case 0x59bed6:c.instructions+=14;goto B59bed6;
case 0x59bed8:c.instructions+=13;goto B59bed8;
case 0x59bed9:c.instructions+=12;goto B59bed9;
case 0x59bedd:c.instructions+=11;goto B59bedd;
case 0x59bee1:c.instructions+=10;goto B59bee1;
case 0x59bee4:c.instructions+=9;goto B59bee4;
case 0x59bee7:c.instructions+=8;goto B59bee7;
case 0x59beeb:c.instructions+=7;goto B59beeb;
case 0x59beee:c.instructions+=6;goto B59beee;
case 0x59bef1:c.instructions+=5;goto B59bef1;
case 0x59bef4:c.instructions+=4;goto B59bef4;
case 0x59bef5:c.instructions+=3;goto B59bef5;
case 0x59bef9:c.instructions+=2;goto B59bef9;
case 0x59befa:c.instructions+=1;goto B59befa;
case 0x59beff:goto L59beff;
case 0x59bf03:c.instructions+=23;goto B59bf03;
case 0x59bf09:c.instructions+=22;goto B59bf09;
case 0x59bf0c:c.instructions+=21;goto B59bf0c;
case 0x59bf0f:c.instructions+=20;goto B59bf0f;
case 0x59bf13:c.instructions+=19;goto B59bf13;
case 0x59bf17:c.instructions+=18;goto B59bf17;
case 0x59bf1d:c.instructions+=17;goto B59bf1d;
case 0x59bf1e:c.instructions+=16;goto B59bf1e;
case 0x59bf22:c.instructions+=15;goto B59bf22;
case 0x59bf23:c.instructions+=14;goto B59bf23;
case 0x59bf27:c.instructions+=13;goto B59bf27;
case 0x59bf2d:c.instructions+=12;goto B59bf2d;
case 0x59bf31:c.instructions+=11;goto B59bf31;
case 0x59bf35:c.instructions+=10;goto B59bf35;
case 0x59bf39:c.instructions+=9;goto B59bf39;
case 0x59bf3f:c.instructions+=8;goto B59bf3f;
case 0x59bf41:c.instructions+=7;goto B59bf41;
case 0x59bf45:c.instructions+=6;goto B59bf45;
case 0x59bf4b:c.instructions+=5;goto B59bf4b;
case 0x59bf4e:c.instructions+=4;goto B59bf4e;
case 0x59bf52:c.instructions+=3;goto B59bf52;
case 0x59bf58:c.instructions+=2;goto B59bf58;
case 0x59bf5b:c.instructions+=1;goto B59bf5b;
case 0x59bf60:goto L59bf60;
case 0x59bf66:c.instructions+=4;goto B59bf66;
case 0x59bf69:c.instructions+=3;goto B59bf69;
case 0x59bf6b:c.instructions+=2;goto B59bf6b;
case 0x59bf71:c.instructions+=1;goto B59bf71;
case 0x59bf73:goto L59bf73;
case 0x59bf79:goto L59bf79;
case 0x59bf7a:c.instructions+=4;goto B59bf7a;
case 0x59bf81:c.instructions+=3;goto B59bf81;
case 0x59bf82:c.instructions+=2;goto B59bf82;
case 0x59bf83:c.instructions+=1;goto B59bf83;
case 0x59bf88:goto L59bf88;
case 0x59bf8c:c.instructions+=6;goto B59bf8c;
case 0x59bf8d:c.instructions+=5;goto B59bf8d;
case 0x59bf94:c.instructions+=4;goto B59bf94;
case 0x59bf95:c.instructions+=3;goto B59bf95;
case 0x59bf9c:c.instructions+=2;goto B59bf9c;
case 0x59bf9d:c.instructions+=1;goto B59bf9d;
case 0x59bfa2:goto L59bfa2;
case 0x59bfa5:c.instructions+=6;goto B59bfa5;
case 0x59bfa9:c.instructions+=5;goto B59bfa9;
case 0x59bfaa:c.instructions+=4;goto B59bfaa;
case 0x59bfb1:c.instructions+=3;goto B59bfb1;
case 0x59bfb2:c.instructions+=2;goto B59bfb2;
case 0x59bfb3:c.instructions+=1;goto B59bfb3;
case 0x59bfb8:goto L59bfb8;
case 0x59bfbb:c.instructions+=5;goto B59bfbb;
case 0x59bfbc:c.instructions+=4;goto B59bfbc;
case 0x59bfbd:c.instructions+=3;goto B59bfbd;
case 0x59bfbf:c.instructions+=2;goto B59bfbf;
case 0x59bfc0:c.instructions+=1;goto B59bfc0;
case 0x59bfd0:goto L59bfd0;
case 0x59bfd1:c.instructions+=17;goto B59bfd1;
case 0x59bfd3:c.instructions+=16;goto B59bfd3;
case 0x59bfd6:c.instructions+=15;goto B59bfd6;
case 0x59bfdc:c.instructions+=14;goto B59bfdc;
case 0x59bfdf:c.instructions+=13;goto B59bfdf;
case 0x59bfe1:c.instructions+=12;goto B59bfe1;
case 0x59bfe2:c.instructions+=11;goto B59bfe2;
case 0x59bfe4:c.instructions+=10;goto B59bfe4;
case 0x59bfe7:c.instructions+=9;goto B59bfe7;
case 0x59bfe8:c.instructions+=8;goto B59bfe8;
case 0x59bfe9:c.instructions+=7;goto B59bfe9;
case 0x59bfed:c.instructions+=6;goto B59bfed;
case 0x59bff1:c.instructions+=5;goto B59bff1;
case 0x59bff4:c.instructions+=4;goto B59bff4;
case 0x59bff7:c.instructions+=3;goto B59bff7;
case 0x59bffb:c.instructions+=2;goto B59bffb;
case 0x59bffe:c.instructions+=1;goto B59bffe;
default:missing_instruction(c.pc);}
B59b002:L59b002:{c.instructions+=10;NFSU2_TR(0x59b002);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59b005:{NFSU2_TR(0x59b005);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59b008:{NFSU2_TR(0x59b008);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b00b:{NFSU2_TR(0x59b00b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59b00d:{NFSU2_TR(0x59b00d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b010:{NFSU2_TR(0x59b010);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59b013:{NFSU2_TR(0x59b013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B59b015:{NFSU2_TR(0x59b015);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b018:{NFSU2_TR(0x59b018);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59b01b:{NFSU2_TR(0x59b01b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b01e:L59b01e:{c.instructions+=2;NFSU2_TR(0x59b01e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x17ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59b021:{NFSU2_TR(0x59b021);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59b030;}}
}
B59b023:L59b023:{c.instructions+=4;NFSU2_TR(0x59b023);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b025:{NFSU2_TR(0x59b025);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b026:{NFSU2_TR(0x59b026);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b028:{NFSU2_TR(0x59b028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b02dull));
TAIL_STATIC(0x59af80u,59a);
}
B59b02d:L59b02d:{c.instructions+=1;NFSU2_TR(0x59b02d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b030:L59b030:{c.instructions+=3;NFSU2_TR(0x59b030);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b031:{NFSU2_TR(0x59b031);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59b033:{NFSU2_TR(0x59b033);
w1(R+12,u8(0x64ull));
}
B59b035:L59b035:{c.instructions+=2;NFSU2_TR(0x59b035);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x17ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b038:{NFSU2_TR(0x59b038);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b040;}}
}
B59b03a:L59b03a:{c.instructions+=2;NFSU2_TR(0x59b03a);
u8 U[13];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B59b03e:{NFSU2_TR(0x59b03e);
{goto L59b049;}
}
B59b040:L59b040:{c.instructions+=2;NFSU2_TR(0x59b040);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b043:{NFSU2_TR(0x59b043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b049;}}
}
B59b045:L59b045:{c.instructions+=1;NFSU2_TR(0x59b045);
u8 U[13];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B59b049:L59b049:{c.instructions+=3;NFSU2_TR(0x59b049);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59b04a:{NFSU2_TR(0x59b04a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B59b04d:{NFSU2_TR(0x59b04d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59b035u);}goto L59b035;}}
}
B59b04f:L59b04f:{c.instructions+=2;NFSU2_TR(0x59b04f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b050:{NFSU2_TR(0x59b050);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b060:L59b060:{c.instructions+=7;NFSU2_TR(0x59b060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b064:{NFSU2_TR(0x59b064);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b068:{NFSU2_TR(0x59b068);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B59b06a:{NFSU2_TR(0x59b06a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b06e:{NFSU2_TR(0x59b06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b071:{NFSU2_TR(0x59b071);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b074:{NFSU2_TR(0x59b074);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b080:L59b080:{c.instructions+=6;NFSU2_TR(0x59b080);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b081:{NFSU2_TR(0x59b081);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B59b085:{NFSU2_TR(0x59b085);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b088:{NFSU2_TR(0x59b088);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b089:{NFSU2_TR(0x59b089);
__builtin_memmove((R+28),(R+4),4);
}
B59b08b:{NFSU2_TR(0x59b08b);
if(r1(R+518)){{goto L59b0a2;}}
}
B59b08d:L59b08d:{c.instructions+=4;NFSU2_TR(0x59b08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b090:{NFSU2_TR(0x59b090);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b091:{NFSU2_TR(0x59b091);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b092:{NFSU2_TR(0x59b092);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b097ull));
TAIL_STATIC(0x59ae40u,59a);
}
B59b097:L59b097:{c.instructions+=3;NFSU2_TR(0x59b097);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59b09a:{NFSU2_TR(0x59b09a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59b09c:{NFSU2_TR(0x59b09c);
if(r1(R+518)){{goto L59b0a2;}}
}
B59b09e:L59b09e:{c.instructions+=2;NFSU2_TR(0x59b09e);
w1(R+0,u8(0x1ull));
}
B59b0a0:{NFSU2_TR(0x59b0a0);
{goto L59b0a4;}
}
B59b0a2:L59b0a2:{c.instructions+=1;NFSU2_TR(0x59b0a2);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B59b0a4:L59b0a4:{c.instructions+=2;NFSU2_TR(0x59b0a4);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B59b0a7:{NFSU2_TR(0x59b0a7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L59b0ce;}}
}
B59b0a9:L59b0a9:{c.instructions+=2;NFSU2_TR(0x59b0a9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b0ac:{NFSU2_TR(0x59b0ac);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L59b0ce;}}
}
B59b0ae:L59b0ae:{c.instructions+=2;NFSU2_TR(0x59b0ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59b0b0:{NFSU2_TR(0x59b0b0);
if(r1(R+518)){{goto L59b0cc;}}
}
B59b0b2:L59b0b2:{c.instructions+=6;NFSU2_TR(0x59b0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b0b5:{NFSU2_TR(0x59b0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b0bb:{NFSU2_TR(0x59b0bb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B59b0be:{NFSU2_TR(0x59b0be);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
}
B59b0c1:{NFSU2_TR(0x59b0c1);
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
B59b0c3:{NFSU2_TR(0x59b0c3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59b0cc;}}
}
B59b0c5:L59b0c5:{c.instructions+=4;NFSU2_TR(0x59b0c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b0c6:{NFSU2_TR(0x59b0c6);
w1(R+0,u8(0x1ull));
}
B59b0c8:{NFSU2_TR(0x59b0c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b0c9:{NFSU2_TR(0x59b0c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b0cc:L59b0cc:{c.instructions+=1;NFSU2_TR(0x59b0cc);
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
B59b0ce:L59b0ce:{c.instructions+=3;NFSU2_TR(0x59b0ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b0cf:{NFSU2_TR(0x59b0cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b0d0:{NFSU2_TR(0x59b0d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b0e0:L59b0e0:{c.instructions+=6;NFSU2_TR(0x59b0e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b0e1:{NFSU2_TR(0x59b0e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b0e2:{NFSU2_TR(0x59b0e2);
__builtin_memmove((R+28),(R+4),4);
}
B59b0e4:{NFSU2_TR(0x59b0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59b0eb:{NFSU2_TR(0x59b0eb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B59b0ed:{NFSU2_TR(0x59b0ed);
__builtin_memmove((R+4),(R+4),4);
}
B59b0f0:L59b0f0:{c.instructions+=2;NFSU2_TR(0x59b0f0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b0f3:{NFSU2_TR(0x59b0f3);
if(r1(R+518)){{goto L59b10a;}}
}
B59b0f5:L59b0f5:{c.instructions+=4;NFSU2_TR(0x59b0f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b0f8:{NFSU2_TR(0x59b0f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b0f9:{NFSU2_TR(0x59b0f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b0fa:{NFSU2_TR(0x59b0fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b0ffull));
TAIL_STATIC(0x59ae40u,59a);
}
B59b0ff:L59b0ff:{c.instructions+=3;NFSU2_TR(0x59b0ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59b102:{NFSU2_TR(0x59b102);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59b104:{NFSU2_TR(0x59b104);
if(r1(R+518)){{goto L59b10a;}}
}
B59b106:L59b106:{c.instructions+=2;NFSU2_TR(0x59b106);
w1(R+0,u8(0x1ull));
}
B59b108:{NFSU2_TR(0x59b108);
{goto L59b10c;}
}
B59b10a:L59b10a:{c.instructions+=1;NFSU2_TR(0x59b10a);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B59b10c:L59b10c:{c.instructions+=2;NFSU2_TR(0x59b10c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59b10f:{NFSU2_TR(0x59b10f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L59b12f;}}
}
B59b111:L59b111:{c.instructions+=2;NFSU2_TR(0x59b111);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b114:{NFSU2_TR(0x59b114);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L59b12f;}}
}
B59b116:L59b116:{c.instructions+=2;NFSU2_TR(0x59b116);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59b118:{NFSU2_TR(0x59b118);
if(r1(R+518)){{goto L59b136;}}
}
B59b11a:L59b11a:{c.instructions+=6;NFSU2_TR(0x59b11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b11d:{NFSU2_TR(0x59b11d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b123:{NFSU2_TR(0x59b123);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B59b126:{NFSU2_TR(0x59b126);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b129:{NFSU2_TR(0x59b129);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B59b12b:{NFSU2_TR(0x59b12b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L59b133;}}
}
B59b12d:L59b12d:{c.instructions+=1;NFSU2_TR(0x59b12d);
{goto L59b136;}
}
B59b12f:L59b12f:{c.instructions+=2;NFSU2_TR(0x59b12f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59b131:{NFSU2_TR(0x59b131);
if(r1(R+518)){{goto L59b136;}}
}
B59b133:L59b133:{c.instructions+=1;NFSU2_TR(0x59b133);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B59b136:L59b136:{c.instructions+=3;NFSU2_TR(0x59b136);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B59b137:{NFSU2_TR(0x59b137);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b13a:{NFSU2_TR(0x59b13a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59b0f0u);}goto L59b0f0;}}
}
B59b13c:L59b13c:{c.instructions+=4;NFSU2_TR(0x59b13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b13f:{NFSU2_TR(0x59b13f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b140:{NFSU2_TR(0x59b140);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b141:{NFSU2_TR(0x59b141);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b150:L59b150:{c.instructions+=2;NFSU2_TR(0x59b150);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B59b153:{NFSU2_TR(0x59b153);
TAIL_STATIC(0x59afe0u,59a);
}
B59b160:L59b160:{c.instructions+=6;NFSU2_TR(0x59b160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b163:{NFSU2_TR(0x59b163);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b167:{NFSU2_TR(0x59b167);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b168:{NFSU2_TR(0x59b168);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b169:{NFSU2_TR(0x59b169);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b16a:{NFSU2_TR(0x59b16a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b16full));
TAIL_STATIC(0x59ae40u,59a);
}
B59b16f:L59b16f:{c.instructions+=4;NFSU2_TR(0x59b16f);
__builtin_memmove((R+24),(R+0),4);
}
B59b171:{NFSU2_TR(0x59b171);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B59b174:{NFSU2_TR(0x59b174);
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
B59b176:{NFSU2_TR(0x59b176);
if(r1(R+518)){{goto L59b1ee;}}
}
B59b178:L59b178:{c.instructions+=9;NFSU2_TR(0x59b178);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59b17b:{NFSU2_TR(0x59b17b);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x2ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b17d:{NFSU2_TR(0x59b17d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b17e:{NFSU2_TR(0x59b17e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59b182:{NFSU2_TR(0x59b182);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b183:{NFSU2_TR(0x59b183);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59b187:{NFSU2_TR(0x59b187);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b189:{NFSU2_TR(0x59b189);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b18b:{NFSU2_TR(0x59b18b);
if(r1(R+518)){{goto L59b1da;}}
}
B59b18d:L59b18d:{c.instructions+=2;NFSU2_TR(0x59b18d);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x3ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x3ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b18f:{NFSU2_TR(0x59b18f);
if(r1(R+518)){{goto L59b1da;}}
}
B59b191:L59b191:{c.instructions+=4;NFSU2_TR(0x59b191);
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
B59b193:{NFSU2_TR(0x59b193);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b195:{NFSU2_TR(0x59b195);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b197:{NFSU2_TR(0x59b197);
if(r1(R+518)){{goto L59b1c6;}}
}
B59b199:L59b199:{c.instructions+=2;NFSU2_TR(0x59b199);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x1ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b19b:{NFSU2_TR(0x59b19b);
if(r1(R+518)){{goto L59b1c6;}}
}
B59b19d:L59b19d:{c.instructions+=2;NFSU2_TR(0x59b19d);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b19f:{NFSU2_TR(0x59b19f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b1ec;}}
}
B59b1a1:L59b1a1:{c.instructions+=5;NFSU2_TR(0x59b1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b1a4:{NFSU2_TR(0x59b1a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59b1a6:{NFSU2_TR(0x59b1a6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b1a7:{NFSU2_TR(0x59b1a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b1a8:{NFSU2_TR(0x59b1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b1adull));
TAIL_STATIC(0x401070u,401);
}
B59b1ad:L59b1ad:{c.instructions+=6;NFSU2_TR(0x59b1ad);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b1af:{NFSU2_TR(0x59b1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b1b2:{NFSU2_TR(0x59b1b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59b1b4:{NFSU2_TR(0x59b1b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b1b5:{NFSU2_TR(0x59b1b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b1b6:{NFSU2_TR(0x59b1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b1bbull));
TAIL_STATIC(0x401050u,401);
}
B59b1bb:L59b1bb:{c.instructions+=6;NFSU2_TR(0x59b1bb);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b1bd:{NFSU2_TR(0x59b1bd);
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
B59b1c0:{NFSU2_TR(0x59b1c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b1c1:{NFSU2_TR(0x59b1c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b1c2:{NFSU2_TR(0x59b1c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b1c3:{NFSU2_TR(0x59b1c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b1c6:L59b1c6:{c.instructions+=10;NFSU2_TR(0x59b1c6);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b1c9:{NFSU2_TR(0x59b1c9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b1cb:{NFSU2_TR(0x59b1cb);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b1cd:{NFSU2_TR(0x59b1cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b1ce:{NFSU2_TR(0x59b1ce);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b1d1:{NFSU2_TR(0x59b1d1);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b1d3:{NFSU2_TR(0x59b1d3);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b1d5:{NFSU2_TR(0x59b1d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b1d6:{NFSU2_TR(0x59b1d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b1d7:{NFSU2_TR(0x59b1d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b1da:L59b1da:{c.instructions+=8;NFSU2_TR(0x59b1da);
__asm__ volatile(".byte 0xde,0xe1":::"memory");
}
B59b1dc:{NFSU2_TR(0x59b1dc);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b1de:{NFSU2_TR(0x59b1de);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b1e1:{NFSU2_TR(0x59b1e1);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b1e3:{NFSU2_TR(0x59b1e3);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b1e5:{NFSU2_TR(0x59b1e5);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b1e8:{NFSU2_TR(0x59b1e8);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b1ea:{NFSU2_TR(0x59b1ea);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b1ec:L59b1ec:{c.instructions+=2;NFSU2_TR(0x59b1ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b1ed:{NFSU2_TR(0x59b1ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b1ee:L59b1ee:{c.instructions+=2;NFSU2_TR(0x59b1ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b1ef:{NFSU2_TR(0x59b1ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b200:L59b200:{c.instructions+=4;NFSU2_TR(0x59b200);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b204:{NFSU2_TR(0x59b204);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59b206:{NFSU2_TR(0x59b206);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b209:{NFSU2_TR(0x59b209);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L59b355;}}
}
B59b20f:L59b20f:{c.instructions+=1;NFSU2_TR(0x59b20f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x59b358ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59b216:L59b216:{c.instructions+=3;NFSU2_TR(0x59b216);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b21a:{NFSU2_TR(0x59b21a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x174ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x174ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x174ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b21f:{NFSU2_TR(0x59b21f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b222:L59b222:{c.instructions+=4;NFSU2_TR(0x59b222);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b226:{NFSU2_TR(0x59b226);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b22a:{NFSU2_TR(0x59b22a);
u8 U[12];
w4(U+0,u32(u32(u32(0x178ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b231:{NFSU2_TR(0x59b231);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b234:L59b234:{c.instructions+=3;NFSU2_TR(0x59b234);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b238:{NFSU2_TR(0x59b238);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x180ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x180ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b23d:{NFSU2_TR(0x59b23d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b240:L59b240:{c.instructions+=3;NFSU2_TR(0x59b240);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b244:{NFSU2_TR(0x59b244);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x194ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x194ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x194ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b249:{NFSU2_TR(0x59b249);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b24c:L59b24c:{c.instructions+=4;NFSU2_TR(0x59b24c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b250:{NFSU2_TR(0x59b250);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b254:{NFSU2_TR(0x59b254);
u8 U[12];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b25b:{NFSU2_TR(0x59b25b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b25e:L59b25e:{c.instructions+=3;NFSU2_TR(0x59b25e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b262:{NFSU2_TR(0x59b262);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1a0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1a0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1a0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b267:{NFSU2_TR(0x59b267);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b26a:L59b26a:{c.instructions+=6;NFSU2_TR(0x59b26a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b26e:{NFSU2_TR(0x59b26e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b272:{NFSU2_TR(0x59b272);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B59b275:{NFSU2_TR(0x59b275);
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
B59b278:{NFSU2_TR(0x59b278);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b27c:{NFSU2_TR(0x59b27c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b27f:L59b27f:{c.instructions+=6;NFSU2_TR(0x59b27f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b283:{NFSU2_TR(0x59b283);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b287:{NFSU2_TR(0x59b287);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B59b28a:{NFSU2_TR(0x59b28a);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
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
B59b28d:{NFSU2_TR(0x59b28d);
u8 U[12];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b291:{NFSU2_TR(0x59b291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b294:L59b294:{c.instructions+=3;NFSU2_TR(0x59b294);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b298:{NFSU2_TR(0x59b298);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x270ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x270ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x270ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b29d:{NFSU2_TR(0x59b29d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2a0:L59b2a0:{c.instructions+=4;NFSU2_TR(0x59b2a0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b2a4:{NFSU2_TR(0x59b2a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b2a8:{NFSU2_TR(0x59b2a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b2af:{NFSU2_TR(0x59b2af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2b2:L59b2b2:{c.instructions+=4;NFSU2_TR(0x59b2b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b2b6:{NFSU2_TR(0x59b2b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b2ba:{NFSU2_TR(0x59b2ba);
u8 U[12];
w4(U+0,u32(u32(u32(0x224ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b2c1:{NFSU2_TR(0x59b2c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2c4:L59b2c4:{c.instructions+=3;NFSU2_TR(0x59b2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b2c8:{NFSU2_TR(0x59b2c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x264ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x264ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x264ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b2cd:{NFSU2_TR(0x59b2cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2d0:L59b2d0:{c.instructions+=3;NFSU2_TR(0x59b2d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b2d4:{NFSU2_TR(0x59b2d4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x268ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x268ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x268ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b2d9:{NFSU2_TR(0x59b2d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2dc:L59b2dc:{c.instructions+=3;NFSU2_TR(0x59b2dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b2e0:{NFSU2_TR(0x59b2e0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x27cull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x27cull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x27cull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b2e5:{NFSU2_TR(0x59b2e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2e8:L59b2e8:{c.instructions+=3;NFSU2_TR(0x59b2e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b2ec:{NFSU2_TR(0x59b2ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2acull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2acull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2acull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b2f1:{NFSU2_TR(0x59b2f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b2f4:L59b2f4:{c.instructions+=3;NFSU2_TR(0x59b2f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b2f8:{NFSU2_TR(0x59b2f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2a0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2a0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2a0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b2fd:{NFSU2_TR(0x59b2fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b300:L59b300:{c.instructions+=4;NFSU2_TR(0x59b300);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b304:{NFSU2_TR(0x59b304);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b308:{NFSU2_TR(0x59b308);
u8 U[12];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b30f:{NFSU2_TR(0x59b30f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b312:L59b312:{c.instructions+=3;NFSU2_TR(0x59b312);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b316:{NFSU2_TR(0x59b316);
u8 U[12];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B59b31d:{NFSU2_TR(0x59b31d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b320:L59b320:{c.instructions+=4;NFSU2_TR(0x59b320);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b324:{NFSU2_TR(0x59b324);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59b326:{NFSU2_TR(0x59b326);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b32a:{NFSU2_TR(0x59b32a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b334;}}
}
B59b32c:L59b32c:{c.instructions+=2;NFSU2_TR(0x59b32c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xdcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xdcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b331:{NFSU2_TR(0x59b331);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b334:L59b334:{c.instructions+=2;NFSU2_TR(0x59b334);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xe0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xe0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b339:{NFSU2_TR(0x59b339);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b33c:L59b33c:{c.instructions+=4;NFSU2_TR(0x59b33c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b340:{NFSU2_TR(0x59b340);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59b342:{NFSU2_TR(0x59b342);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b346:{NFSU2_TR(0x59b346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b350;}}
}
B59b348:L59b348:{c.instructions+=2;NFSU2_TR(0x59b348);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b34d:{NFSU2_TR(0x59b34d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b350:L59b350:{c.instructions+=1;NFSU2_TR(0x59b350);
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
B59b355:L59b355:{c.instructions+=1;NFSU2_TR(0x59b355);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b3c0:L59b3c0:{c.instructions+=47;NFSU2_TR(0x59b3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b3c3:{NFSU2_TR(0x59b3c3);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b3c9:{NFSU2_TR(0x59b3c9);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3cf:{NFSU2_TR(0x59b3cf);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3d5:{NFSU2_TR(0x59b3d5);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3db:{NFSU2_TR(0x59b3db);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3e1:{NFSU2_TR(0x59b3e1);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3e7:{NFSU2_TR(0x59b3e7);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3ed:{NFSU2_TR(0x59b3ed);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3f3:{NFSU2_TR(0x59b3f3);
{u32 ea_=u32(r4(R+0)+u32(544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b3f9:{NFSU2_TR(0x59b3f9);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B59b3fd:{NFSU2_TR(0x59b3fd);
{u32 ea_=u32(u32(7985716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b403:{NFSU2_TR(0x59b403);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b405:{NFSU2_TR(0x59b405);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b40b:{NFSU2_TR(0x59b40b);
{u32 ea_=u32(r4(R+0)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b411:{NFSU2_TR(0x59b411);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b414:{NFSU2_TR(0x59b414);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b416:{NFSU2_TR(0x59b416);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b41c:{NFSU2_TR(0x59b41c);
{u32 ea_=u32(r4(R+0)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b422:{NFSU2_TR(0x59b422);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b425:{NFSU2_TR(0x59b425);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b427:{NFSU2_TR(0x59b427);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b42d:{NFSU2_TR(0x59b42d);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b433:{NFSU2_TR(0x59b433);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b436:{NFSU2_TR(0x59b436);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b438:{NFSU2_TR(0x59b438);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b43e:{NFSU2_TR(0x59b43e);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b444:{NFSU2_TR(0x59b444);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b447:{NFSU2_TR(0x59b447);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b449:{NFSU2_TR(0x59b449);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b44f:{NFSU2_TR(0x59b44f);
{u32 ea_=u32(r4(R+0)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b455:{NFSU2_TR(0x59b455);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b458:{NFSU2_TR(0x59b458);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b45a:{NFSU2_TR(0x59b45a);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b460:{NFSU2_TR(0x59b460);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b466:{NFSU2_TR(0x59b466);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b469:{NFSU2_TR(0x59b469);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b46b:{NFSU2_TR(0x59b46b);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b471:{NFSU2_TR(0x59b471);
{u32 ea_=u32(r4(R+0)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b477:{NFSU2_TR(0x59b477);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b47a:{NFSU2_TR(0x59b47a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59b47c:{NFSU2_TR(0x59b47c);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b482:{NFSU2_TR(0x59b482);
{u32 ea_=u32(r4(R+0)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b488:{NFSU2_TR(0x59b488);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b48b:{NFSU2_TR(0x59b48b);
{u32 ea_=u32(r4(R+4)+u32(544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b491:{NFSU2_TR(0x59b491);
{u32 ea_=u32(r4(R+4)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b497:{NFSU2_TR(0x59b497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b4a0:L59b4a0:{c.instructions+=5;NFSU2_TR(0x59b4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b4a4:{NFSU2_TR(0x59b4a4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b4a8:{NFSU2_TR(0x59b4a8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffdull))));
}
B59b4ab:{NFSU2_TR(0x59b4ab);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x15ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x15ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b4ae:{NFSU2_TR(0x59b4ae);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L59b58d;}}
}
B59b4b4:L59b4b4:{c.instructions+=2;NFSU2_TR(0x59b4b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x59b5a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B59b4bb:{NFSU2_TR(0x59b4bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x59b590ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59b4c2:L59b4c2:{c.instructions+=6;NFSU2_TR(0x59b4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b4c5:{NFSU2_TR(0x59b4c5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b4c7:{NFSU2_TR(0x59b4c7);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b4cb:{NFSU2_TR(0x59b4cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b4ce:{NFSU2_TR(0x59b4ce);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59b4d2:{NFSU2_TR(0x59b4d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b4ea;}}
}
B59b4d4:L59b4d4:{c.instructions+=2;NFSU2_TR(0x59b4d4);
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
B59b4d6:{NFSU2_TR(0x59b4d6);
if(r1(R+518)){{goto L59b4e1;}}
}
B59b4d8:L59b4d8:{c.instructions+=2;NFSU2_TR(0x59b4d8);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b4de:{NFSU2_TR(0x59b4de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b4e1:L59b4e1:{c.instructions+=2;NFSU2_TR(0x59b4e1);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b4e7:{NFSU2_TR(0x59b4e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b4ea:L59b4ea:{c.instructions+=2;NFSU2_TR(0x59b4ea);
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
B59b4ec:{NFSU2_TR(0x59b4ec);
if(r1(R+518)){{goto L59b4f7;}}
}
B59b4ee:L59b4ee:{c.instructions+=2;NFSU2_TR(0x59b4ee);
{u32 ea_=u32(u32(8003180u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b4f4:{NFSU2_TR(0x59b4f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b4f7:L59b4f7:{c.instructions+=2;NFSU2_TR(0x59b4f7);
{u32 ea_=u32(u32(8003176u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b4fd:{NFSU2_TR(0x59b4fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b500:L59b500:{c.instructions+=5;NFSU2_TR(0x59b500);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b503:{NFSU2_TR(0x59b503);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b505:{NFSU2_TR(0x59b505);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b508:{NFSU2_TR(0x59b508);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59b50c:{NFSU2_TR(0x59b50c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b528;}}
}
B59b50e:L59b50e:{c.instructions+=3;NFSU2_TR(0x59b50e);
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
B59b510:{NFSU2_TR(0x59b510);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b514:{NFSU2_TR(0x59b514);
if(r1(R+518)){{goto L59b51f;}}
}
B59b516:L59b516:{c.instructions+=2;NFSU2_TR(0x59b516);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b51c:{NFSU2_TR(0x59b51c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b51f:L59b51f:{c.instructions+=2;NFSU2_TR(0x59b51f);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b525:{NFSU2_TR(0x59b525);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b528:L59b528:{c.instructions+=2;NFSU2_TR(0x59b528);
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
B59b52a:{NFSU2_TR(0x59b52a);
if(r1(R+518)){{goto L59b53f;}}
}
B59b52c:L59b52c:{c.instructions+=4;NFSU2_TR(0x59b52c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b530:{NFSU2_TR(0x59b530);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b536:{NFSU2_TR(0x59b536);
{u32 ea_=u32(u32(7978748u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b53c:{NFSU2_TR(0x59b53c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b53f:L59b53f:{c.instructions+=4;NFSU2_TR(0x59b53f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b543:{NFSU2_TR(0x59b543);
{u32 ea_=u32(u32(8003168u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B59b549:{NFSU2_TR(0x59b549);
{u32 ea_=u32(u32(8003160u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B59b54f:{NFSU2_TR(0x59b54f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b552:L59b552:{c.instructions+=6;NFSU2_TR(0x59b552);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b555:{NFSU2_TR(0x59b555);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b557:{NFSU2_TR(0x59b557);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b55b:{NFSU2_TR(0x59b55b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59b55e:{NFSU2_TR(0x59b55e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59b562:{NFSU2_TR(0x59b562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b57a;}}
}
B59b564:L59b564:{c.instructions+=2;NFSU2_TR(0x59b564);
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
B59b566:{NFSU2_TR(0x59b566);
if(r1(R+518)){{goto L59b571;}}
}
B59b568:L59b568:{c.instructions+=2;NFSU2_TR(0x59b568);
{u32 ea_=u32(u32(7931132u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b56e:{NFSU2_TR(0x59b56e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b571:L59b571:{c.instructions+=2;NFSU2_TR(0x59b571);
{u32 ea_=u32(u32(8003156u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b577:{NFSU2_TR(0x59b577);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b57a:L59b57a:{c.instructions+=2;NFSU2_TR(0x59b57a);
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
B59b57c:{NFSU2_TR(0x59b57c);
if(r1(R+518)){{goto L59b587;}}
}
B59b57e:L59b57e:{c.instructions+=2;NFSU2_TR(0x59b57e);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b584:{NFSU2_TR(0x59b584);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b587:L59b587:{c.instructions+=1;NFSU2_TR(0x59b587);
{u32 ea_=u32(u32(7881384u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b58d:L59b58d:{c.instructions+=1;NFSU2_TR(0x59b58d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b5c0:L59b5c0:{c.instructions+=13;NFSU2_TR(0x59b5c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B59b5c3:{NFSU2_TR(0x59b5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b5c6:{NFSU2_TR(0x59b5c6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b5cc:{NFSU2_TR(0x59b5cc);
{u32 ea_=u32(r4(R+4)+u32(500u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b5d2:{NFSU2_TR(0x59b5d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b5d8:{NFSU2_TR(0x59b5d8);
{u32 ea_=u32(u32(8002872u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b5de:{NFSU2_TR(0x59b5de);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b5e2:{NFSU2_TR(0x59b5e2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b5e6:{NFSU2_TR(0x59b5e6);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b5ec:{NFSU2_TR(0x59b5ec);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b5f2:{NFSU2_TR(0x59b5f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b5f4:{NFSU2_TR(0x59b5f4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b5f7:{NFSU2_TR(0x59b5f7);
if(r1(R+514)){{goto L59b600;}}
}
B59b5f9:L59b5f9:{c.instructions+=3;NFSU2_TR(0x59b5f9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b5fb:{NFSU2_TR(0x59b5fb);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b5fe:{NFSU2_TR(0x59b5fe);
{goto L59b662;}
}
B59b600:L59b600:{c.instructions+=5;NFSU2_TR(0x59b600);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b606:{NFSU2_TR(0x59b606);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b60c:{NFSU2_TR(0x59b60c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b60e:{NFSU2_TR(0x59b60e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59b611:{NFSU2_TR(0x59b611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b61d;}}
}
B59b613:L59b613:{c.instructions+=3;NFSU2_TR(0x59b613);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b615:{NFSU2_TR(0x59b615);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b61b:{NFSU2_TR(0x59b61b);
{goto L59b662;}
}
B59b61d:L59b61d:{c.instructions+=5;NFSU2_TR(0x59b61d);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b623:{NFSU2_TR(0x59b623);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b629:{NFSU2_TR(0x59b629);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b62b:{NFSU2_TR(0x59b62b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59b62e:{NFSU2_TR(0x59b62e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b662;}}
}
B59b630:L59b630:{c.instructions+=5;NFSU2_TR(0x59b630);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b636:{NFSU2_TR(0x59b636);
{u32 ea_=u32(u32(7885036u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b63c:{NFSU2_TR(0x59b63c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b63e:{NFSU2_TR(0x59b63e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b641:{NFSU2_TR(0x59b641);
if(r1(R+514)){{goto L59b662;}}
}
B59b643:L59b643:{c.instructions+=7;NFSU2_TR(0x59b643);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b645:{NFSU2_TR(0x59b645);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b64b:{NFSU2_TR(0x59b64b);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59b651:{NFSU2_TR(0x59b651);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b654:{NFSU2_TR(0x59b654);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b65a:{NFSU2_TR(0x59b65a);
{u32 ea_=u32(r4(R+4)+u32(448u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b660:{NFSU2_TR(0x59b660);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59b662:L59b662:{c.instructions+=6;NFSU2_TR(0x59b662);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b666:{NFSU2_TR(0x59b666);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B59b66a:{NFSU2_TR(0x59b66a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b670:{NFSU2_TR(0x59b670);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59b672:{NFSU2_TR(0x59b672);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b674:{NFSU2_TR(0x59b674);
if(r1(R+518)){{goto L59b69d;}}
}
B59b676:L59b676:{c.instructions+=2;NFSU2_TR(0x59b676);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b679:{NFSU2_TR(0x59b679);
if(r1(R+514)){{goto L59b689;}}
}
B59b67b:L59b67b:{c.instructions+=4;NFSU2_TR(0x59b67b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b67d:{NFSU2_TR(0x59b67d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b683:{NFSU2_TR(0x59b683);
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
B59b686:{NFSU2_TR(0x59b686);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b689:L59b689:{c.instructions+=6;NFSU2_TR(0x59b689);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b68d:{NFSU2_TR(0x59b68d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b691:{NFSU2_TR(0x59b691);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59b695:{NFSU2_TR(0x59b695);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59b697:{NFSU2_TR(0x59b697);
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
B59b69a:{NFSU2_TR(0x59b69a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b69d:L59b69d:{c.instructions+=2;NFSU2_TR(0x59b69d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b6a0:{NFSU2_TR(0x59b6a0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x59b67bu);}goto L59b67b;}}
}
B59b6a2:L59b6a2:{c.instructions+=7;NFSU2_TR(0x59b6a2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b6a6:{NFSU2_TR(0x59b6a6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59b6aa:{NFSU2_TR(0x59b6aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59b6ac:{NFSU2_TR(0x59b6ac);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59b6b0:{NFSU2_TR(0x59b6b0);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B59b6b2:{NFSU2_TR(0x59b6b2);
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
B59b6b5:{NFSU2_TR(0x59b6b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b6c0:L59b6c0:{c.instructions+=5;NFSU2_TR(0x59b6c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6c1:{NFSU2_TR(0x59b6c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b6c5:{NFSU2_TR(0x59b6c5);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x3ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b6c8:{NFSU2_TR(0x59b6c8);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6d0:{NFSU2_TR(0x59b6d0);
if(r1(R+518)){{goto L59b6dc;}}
}
B59b6d2:L59b6d2:{c.instructions+=2;NFSU2_TR(0x59b6d2);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b6d5:{NFSU2_TR(0x59b6d5);
if(r1(R+518)){{goto L59b6dc;}}
}
B59b6d7:L59b6d7:{c.instructions+=2;NFSU2_TR(0x59b6d7);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b6da:{NFSU2_TR(0x59b6da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b6e6;}}
}
B59b6dc:L59b6dc:{c.instructions+=3;NFSU2_TR(0x59b6dc);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b6e2:{NFSU2_TR(0x59b6e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59b6e3:{NFSU2_TR(0x59b6e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b6e6:L59b6e6:{c.instructions+=3;NFSU2_TR(0x59b6e6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b6ea:{NFSU2_TR(0x59b6ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59b6eb:{NFSU2_TR(0x59b6eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b6f0:L59b6f0:{c.instructions+=11;NFSU2_TR(0x59b6f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6f1:{NFSU2_TR(0x59b6f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6f2:{NFSU2_TR(0x59b6f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6f3:{NFSU2_TR(0x59b6f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6f4:{NFSU2_TR(0x59b6f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59b6f8:{NFSU2_TR(0x59b6f8);
u8 U[4];
w4(U+0,u32(0x7a1e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b6fd:{NFSU2_TR(0x59b6fd);
__builtin_memmove((R+24),(R+4),4);
}
B59b6ff:{NFSU2_TR(0x59b6ff);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B59b701:{NFSU2_TR(0x59b701);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b702:{NFSU2_TR(0x59b702);
__builtin_memmove((R+4),(R+28),4);
}
B59b704:{NFSU2_TR(0x59b704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b709ull));
TAIL_STATIC(0x578ce0u,578);
}
B59b709:L59b709:{c.instructions+=7;NFSU2_TR(0x59b709);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b70a:{NFSU2_TR(0x59b70a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b70c:{NFSU2_TR(0x59b70c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b70e:{NFSU2_TR(0x59b70e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b711:{NFSU2_TR(0x59b711);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b712:{NFSU2_TR(0x59b712);
__builtin_memmove((R+4),(R+28),4);
}
B59b714:{NFSU2_TR(0x59b714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b719ull));
TAIL_STATIC(0x571640u,571);
}
B59b719:L59b719:{c.instructions+=7;NFSU2_TR(0x59b719);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b71a:{NFSU2_TR(0x59b71a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b71c:{NFSU2_TR(0x59b71c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b71e:{NFSU2_TR(0x59b71e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59b721:{NFSU2_TR(0x59b721);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b722:{NFSU2_TR(0x59b722);
__builtin_memmove((R+4),(R+28),4);
}
B59b724:{NFSU2_TR(0x59b724);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b729ull));
TAIL_STATIC(0x571640u,571);
}
B59b729:L59b729:{c.instructions+=7;NFSU2_TR(0x59b729);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b72a:{NFSU2_TR(0x59b72a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b72c:{NFSU2_TR(0x59b72c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b72e:{NFSU2_TR(0x59b72e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59b731:{NFSU2_TR(0x59b731);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b732:{NFSU2_TR(0x59b732);
__builtin_memmove((R+4),(R+28),4);
}
B59b734:{NFSU2_TR(0x59b734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b739ull));
TAIL_STATIC(0x571640u,571);
}
B59b739:L59b739:{c.instructions+=7;NFSU2_TR(0x59b739);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b73a:{NFSU2_TR(0x59b73a);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b73c:{NFSU2_TR(0x59b73c);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b73e:{NFSU2_TR(0x59b73e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b741:{NFSU2_TR(0x59b741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b742:{NFSU2_TR(0x59b742);
__builtin_memmove((R+4),(R+28),4);
}
B59b744:{NFSU2_TR(0x59b744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b749ull));
TAIL_STATIC(0x571640u,571);
}
B59b749:L59b749:{c.instructions+=8;NFSU2_TR(0x59b749);
w4(R+20,u32(0x1ull));
}
B59b74e:{NFSU2_TR(0x59b74e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b74f:{NFSU2_TR(0x59b74f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b751:{NFSU2_TR(0x59b751);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b752:{NFSU2_TR(0x59b752);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59b758:{NFSU2_TR(0x59b758);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b759:{NFSU2_TR(0x59b759);
__builtin_memmove((R+4),(R+28),4);
}
B59b75b:{NFSU2_TR(0x59b75b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b760ull));
TAIL_STATIC(0x571640u,571);
}
B59b760:L59b760:{c.instructions+=3;NFSU2_TR(0x59b760);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59b763:{NFSU2_TR(0x59b763);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
}
B59b766:{NFSU2_TR(0x59b766);
if(r1(R+518)){{goto L59b79e;}}
}
B59b768:L59b768:{c.instructions+=12;NFSU2_TR(0x59b768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b76b:{NFSU2_TR(0x59b76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b76e:{NFSU2_TR(0x59b76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b771:{NFSU2_TR(0x59b771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b774:{NFSU2_TR(0x59b774);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b777:{NFSU2_TR(0x59b777);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b77a:{NFSU2_TR(0x59b77a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B59b781:{NFSU2_TR(0x59b781);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b787:{NFSU2_TR(0x59b787);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b78d:{NFSU2_TR(0x59b78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b793:{NFSU2_TR(0x59b793);
__builtin_memmove((R+0),gp(0x7fbef0),4);
}
B59b798:{NFSU2_TR(0x59b798);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b79e:L59b79e:{c.instructions+=4;NFSU2_TR(0x59b79e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59b7a4:{NFSU2_TR(0x59b7a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b7a5:{NFSU2_TR(0x59b7a5);
__builtin_memmove((R+4),(R+28),4);
}
B59b7a7:{NFSU2_TR(0x59b7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b7acull));
TAIL_STATIC(0x571770u,571);
}
B59b7ac:L59b7ac:{c.instructions+=6;NFSU2_TR(0x59b7ac);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b7af:{NFSU2_TR(0x59b7af);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b7b5:{NFSU2_TR(0x59b7b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59b7b8:{NFSU2_TR(0x59b7b8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b7ba:{NFSU2_TR(0x59b7ba);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b7bd:{NFSU2_TR(0x59b7bd);
if(r1(R+514)){{goto L59b81d;}}
}
B59b7bf:L59b7bf:{c.instructions+=5;NFSU2_TR(0x59b7bf);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b7c2:{NFSU2_TR(0x59b7c2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b7c8:{NFSU2_TR(0x59b7c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b7ca:{NFSU2_TR(0x59b7ca);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b7cd:{NFSU2_TR(0x59b7cd);
if(r1(R+514)){{goto L59b81d;}}
}
B59b7cf:L59b7cf:{c.instructions+=5;NFSU2_TR(0x59b7cf);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b7d2:{NFSU2_TR(0x59b7d2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b7d8:{NFSU2_TR(0x59b7d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b7da:{NFSU2_TR(0x59b7da);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b7dd:{NFSU2_TR(0x59b7dd);
if(r1(R+514)){{goto L59b81d;}}
}
B59b7df:L59b7df:{c.instructions+=5;NFSU2_TR(0x59b7df);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b7e5:{NFSU2_TR(0x59b7e5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b7eb:{NFSU2_TR(0x59b7eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b7ed:{NFSU2_TR(0x59b7ed);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b7f0:{NFSU2_TR(0x59b7f0);
if(r1(R+514)){{goto L59b81d;}}
}
B59b7f2:L59b7f2:{c.instructions+=5;NFSU2_TR(0x59b7f2);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b7f8:{NFSU2_TR(0x59b7f8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b7fe:{NFSU2_TR(0x59b7fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b800:{NFSU2_TR(0x59b800);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b803:{NFSU2_TR(0x59b803);
if(r1(R+514)){{goto L59b81d;}}
}
B59b805:L59b805:{c.instructions+=6;NFSU2_TR(0x59b805);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b80b:{NFSU2_TR(0x59b80b);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B59b810:{NFSU2_TR(0x59b810);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59b816:{NFSU2_TR(0x59b816);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59b818:{NFSU2_TR(0x59b818);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B59b81b:{NFSU2_TR(0x59b81b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L59b821;}}
}
B59b81d:L59b81d:{c.instructions+=1;NFSU2_TR(0x59b81d);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B59b821:L59b821:{c.instructions+=7;NFSU2_TR(0x59b821);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b822:{NFSU2_TR(0x59b822);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b824:{NFSU2_TR(0x59b824);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b826:{NFSU2_TR(0x59b826);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59b82a:{NFSU2_TR(0x59b82a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b82b:{NFSU2_TR(0x59b82b);
__builtin_memmove((R+4),(R+28),4);
}
B59b82d:{NFSU2_TR(0x59b82d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b832ull));
TAIL_STATIC(0x571640u,571);
}
B59b832:L59b832:{c.instructions+=2;NFSU2_TR(0x59b832);
u8 U[7];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B59b836:{NFSU2_TR(0x59b836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59b85a;}}
}
B59b838:L59b838:{c.instructions+=6;NFSU2_TR(0x59b838);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b839:{NFSU2_TR(0x59b839);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b83b:{NFSU2_TR(0x59b83b);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b83d:{NFSU2_TR(0x59b83d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b83e:{NFSU2_TR(0x59b83e);
__builtin_memmove((R+4),(R+28),4);
}
B59b840:{NFSU2_TR(0x59b840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b845ull));
TAIL_STATIC(0x571640u,571);
}
B59b845:L59b845:{c.instructions+=7;NFSU2_TR(0x59b845);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b846:{NFSU2_TR(0x59b846);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b848:{NFSU2_TR(0x59b848);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b84a:{NFSU2_TR(0x59b84a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b850:{NFSU2_TR(0x59b850);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b851:{NFSU2_TR(0x59b851);
__builtin_memmove((R+4),(R+28),4);
}
B59b853:{NFSU2_TR(0x59b853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b858ull));
TAIL_STATIC(0x571640u,571);
}
B59b858:L59b858:{c.instructions+=1;NFSU2_TR(0x59b858);
{goto L59b87d;}
}
B59b85a:L59b85a:{c.instructions+=3;NFSU2_TR(0x59b85a);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B59b85d:{NFSU2_TR(0x59b85d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+4,u8(u32(r1(R+4))|u32(r1(U+4))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B59b860:{NFSU2_TR(0x59b860);
if(r1(R+518)){{goto L59b87d;}}
}
B59b862:L59b862:{c.instructions+=6;NFSU2_TR(0x59b862);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B59b865:{NFSU2_TR(0x59b865);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b868:{NFSU2_TR(0x59b868);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b86b:{NFSU2_TR(0x59b86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b871:{NFSU2_TR(0x59b871);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b877:{NFSU2_TR(0x59b877);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b87d:L59b87d:{c.instructions+=3;NFSU2_TR(0x59b87d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59b880:{NFSU2_TR(0x59b880);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))|u32(r1(U+4))));
w1(R+519,u8(s8(r1(R+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(R+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B59b883:{NFSU2_TR(0x59b883);
if(r1(R+518)){{goto L59b88c;}}
}
B59b885:L59b885:{c.instructions+=3;NFSU2_TR(0x59b885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59b887:{NFSU2_TR(0x59b887);
__builtin_memmove((R+4),(R+24),4);
}
B59b889:{NFSU2_TR(0x59b889);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b88cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B59b88c:L59b88c:{c.instructions+=7;NFSU2_TR(0x59b88c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b88d:{NFSU2_TR(0x59b88d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b88f:{NFSU2_TR(0x59b88f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b891:{NFSU2_TR(0x59b891);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
}
B59b897:{NFSU2_TR(0x59b897);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b898:{NFSU2_TR(0x59b898);
__builtin_memmove((R+4),(R+28),4);
}
B59b89a:{NFSU2_TR(0x59b89a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b89full));
TAIL_STATIC(0x571640u,571);
}
B59b89f:L59b89f:{c.instructions+=2;NFSU2_TR(0x59b89f);
__builtin_memmove((R+4),(R+28),4);
}
B59b8a1:{NFSU2_TR(0x59b8a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b8a6ull));
TAIL_STATIC(0x578d90u,578);
}
B59b8a6:L59b8a6:{c.instructions+=5;NFSU2_TR(0x59b8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b8a7:{NFSU2_TR(0x59b8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b8a8:{NFSU2_TR(0x59b8a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59b8a9:{NFSU2_TR(0x59b8a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b8aa:{NFSU2_TR(0x59b8aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b8b0:L59b8b0:{c.instructions+=15;NFSU2_TR(0x59b8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8b1:{NFSU2_TR(0x59b8b1);
__builtin_memmove((R+20),(R+16),4);
}
B59b8b3:{NFSU2_TR(0x59b8b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59b8b6:{NFSU2_TR(0x59b8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B59b8b9:{NFSU2_TR(0x59b8b9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8ba:{NFSU2_TR(0x59b8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59b8bd:{NFSU2_TR(0x59b8bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8be:{NFSU2_TR(0x59b8be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8bf:{NFSU2_TR(0x59b8bf);
__builtin_memmove((R+24),(R+4),4);
}
B59b8c1:{NFSU2_TR(0x59b8c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b8c4:{NFSU2_TR(0x59b8c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8c5:{NFSU2_TR(0x59b8c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8c6:{NFSU2_TR(0x59b8c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59b8ca:{NFSU2_TR(0x59b8ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8cb:{NFSU2_TR(0x59b8cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b8d0ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59b8d0:L59b8d0:{c.instructions+=7;NFSU2_TR(0x59b8d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b8d6:{NFSU2_TR(0x59b8d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8d7:{NFSU2_TR(0x59b8d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b8da:{NFSU2_TR(0x59b8da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8db:{NFSU2_TR(0x59b8db);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59b8df:{NFSU2_TR(0x59b8df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b8e0:{NFSU2_TR(0x59b8e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b8e5ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59b8e5:L59b8e5:{c.instructions+=29;NFSU2_TR(0x59b8e5);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b8e8:{NFSU2_TR(0x59b8e8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b8eb:{NFSU2_TR(0x59b8eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59b8ed:{NFSU2_TR(0x59b8ed);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59b8ef:{NFSU2_TR(0x59b8ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B59b8f1:{NFSU2_TR(0x59b8f1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b8f4:{NFSU2_TR(0x59b8f4);
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
B59b8f7:{NFSU2_TR(0x59b8f7);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b8fa:{NFSU2_TR(0x59b8fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59b8fb:{NFSU2_TR(0x59b8fb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b8ff:{NFSU2_TR(0x59b8ff);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59b903:{NFSU2_TR(0x59b903);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b907:{NFSU2_TR(0x59b907);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59b90b:{NFSU2_TR(0x59b90b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b90f:{NFSU2_TR(0x59b90f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59b913:{NFSU2_TR(0x59b913);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b917:{NFSU2_TR(0x59b917);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59b919:{NFSU2_TR(0x59b919);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b91c:{NFSU2_TR(0x59b91c);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b91f:{NFSU2_TR(0x59b91f);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b922:{NFSU2_TR(0x59b922);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b925:{NFSU2_TR(0x59b925);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b929:{NFSU2_TR(0x59b929);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59b92c:{NFSU2_TR(0x59b92c);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b92f:{NFSU2_TR(0x59b92f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b930:{NFSU2_TR(0x59b930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b931:{NFSU2_TR(0x59b931);
__builtin_memmove((R+16),(R+20),4);
}
B59b933:{NFSU2_TR(0x59b933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59b934:{NFSU2_TR(0x59b934);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b940:L59b940:{c.instructions+=18;NFSU2_TR(0x59b940);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b941:{NFSU2_TR(0x59b941);
__builtin_memmove((R+20),(R+16),4);
}
B59b943:{NFSU2_TR(0x59b943);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59b946:{NFSU2_TR(0x59b946);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
}
B59b949:{NFSU2_TR(0x59b949);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b94a:{NFSU2_TR(0x59b94a);
__builtin_memmove((R+24),(R+4),4);
}
B59b94c:{NFSU2_TR(0x59b94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b94f:{NFSU2_TR(0x59b94f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b951:{NFSU2_TR(0x59b951);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B59b954:{NFSU2_TR(0x59b954);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59b95a:{NFSU2_TR(0x59b95a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b95b:{NFSU2_TR(0x59b95b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b961:{NFSU2_TR(0x59b961);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59b967:{NFSU2_TR(0x59b967);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B59b969:{NFSU2_TR(0x59b969);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b96a:{NFSU2_TR(0x59b96a);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b970:{NFSU2_TR(0x59b970);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59b972:{NFSU2_TR(0x59b972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b977ull));
TAIL_STATIC(0x43c7c0u,43c);
}
B59b977:L59b977:{c.instructions+=6;NFSU2_TR(0x59b977);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b97a:{NFSU2_TR(0x59b97a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b97d:{NFSU2_TR(0x59b97d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b97e:{NFSU2_TR(0x59b97e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59b982:{NFSU2_TR(0x59b982);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b983:{NFSU2_TR(0x59b983);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b988ull));
TAIL_STATIC(0x4012b0u,401);
}
B59b988:L59b988:{c.instructions+=9;NFSU2_TR(0x59b988);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b98c:{NFSU2_TR(0x59b98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b98f:{NFSU2_TR(0x59b98f);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b992:{NFSU2_TR(0x59b992);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59b996:{NFSU2_TR(0x59b996);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b997:{NFSU2_TR(0x59b997);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
}
B59b99d:{NFSU2_TR(0x59b99d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b99e:{NFSU2_TR(0x59b99e);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b9a2:{NFSU2_TR(0x59b9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b9a7ull));
TAIL_STATIC(0x43c7c0u,43c);
}
B59b9a7:L59b9a7:{c.instructions+=5;NFSU2_TR(0x59b9a7);
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
B59b9aa:{NFSU2_TR(0x59b9aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59b9ab:{NFSU2_TR(0x59b9ab);
__builtin_memmove((R+16),(R+20),4);
}
B59b9ad:{NFSU2_TR(0x59b9ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59b9ae:{NFSU2_TR(0x59b9ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59b9b0:L59b9b0:{c.instructions+=21;NFSU2_TR(0x59b9b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b9b1:{NFSU2_TR(0x59b9b1);
__builtin_memmove((R+20),(R+16),4);
}
B59b9b3:{NFSU2_TR(0x59b9b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59b9b6:{NFSU2_TR(0x59b9b6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x104ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x104ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59b9bc:{NFSU2_TR(0x59b9bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59b9bf:{NFSU2_TR(0x59b9bf);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b9c2:{NFSU2_TR(0x59b9c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b9c3:{NFSU2_TR(0x59b9c3);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b9c6:{NFSU2_TR(0x59b9c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59b9c8:{NFSU2_TR(0x59b9c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b9c9:{NFSU2_TR(0x59b9c9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59b9cb:{NFSU2_TR(0x59b9cb);
__builtin_memmove((R+24),(R+4),4);
}
B59b9cd:{NFSU2_TR(0x59b9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59b9d0:{NFSU2_TR(0x59b9d0);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b9d3:{NFSU2_TR(0x59b9d3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b9d4:{NFSU2_TR(0x59b9d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b9d5:{NFSU2_TR(0x59b9d5);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59b9d8:{NFSU2_TR(0x59b9d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59b9db:{NFSU2_TR(0x59b9db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59b9dc:{NFSU2_TR(0x59b9dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b9df:{NFSU2_TR(0x59b9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59b9e4ull));
TAIL_STATIC(0x4012b0u,401);
}
B59b9e4:L59b9e4:{c.instructions+=17;NFSU2_TR(0x59b9e4);
{u32 ea_=u32(r4(R+24)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b9ea:{NFSU2_TR(0x59b9ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59b9ed:{NFSU2_TR(0x59b9ed);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59b9f0:{NFSU2_TR(0x59b9f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59b9f3:{NFSU2_TR(0x59b9f3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59b9f5:{NFSU2_TR(0x59b9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59b9f9:{NFSU2_TR(0x59b9f9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59b9fb:{NFSU2_TR(0x59b9fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59b9ff:{NFSU2_TR(0x59b9ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba00:{NFSU2_TR(0x59ba00);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ba03:{NFSU2_TR(0x59ba03);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59ba05:{NFSU2_TR(0x59ba05);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ba08:{NFSU2_TR(0x59ba08);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ba0c:{NFSU2_TR(0x59ba0c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59ba0e:{NFSU2_TR(0x59ba0e);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ba11:{NFSU2_TR(0x59ba11);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59ba13:{NFSU2_TR(0x59ba13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ba18ull));
TAIL_STATIC(0x43c780u,43c);
}
B59ba18:L59ba18:{c.instructions+=13;NFSU2_TR(0x59ba18);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ba1e:{NFSU2_TR(0x59ba1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ba25:{NFSU2_TR(0x59ba25);
{u32 ea_=u32(r4(R+24)+u32(368u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ba2b:{NFSU2_TR(0x59ba2b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba2c:{NFSU2_TR(0x59ba2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba2d:{NFSU2_TR(0x59ba2d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ba31:{NFSU2_TR(0x59ba31);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ba37:{NFSU2_TR(0x59ba37);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ba3d:{NFSU2_TR(0x59ba3d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ba41:{NFSU2_TR(0x59ba41);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59ba47:{NFSU2_TR(0x59ba47);
{u32 ea_=u32(r4(R+24)+u32(408u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B59ba4d:{NFSU2_TR(0x59ba4d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59ba51:{NFSU2_TR(0x59ba51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ba56ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B59ba56:L59ba56:{c.instructions+=6;NFSU2_TR(0x59ba56);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ba5a:{NFSU2_TR(0x59ba5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba5b:{NFSU2_TR(0x59ba5b);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ba62:{NFSU2_TR(0x59ba62);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba63:{NFSU2_TR(0x59ba63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba64:{NFSU2_TR(0x59ba64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ba69ull));
TAIL_STATIC(0x43c990u,43c);
}
B59ba69:L59ba69:{c.instructions+=7;NFSU2_TR(0x59ba69);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ba70:{NFSU2_TR(0x59ba70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba71:{NFSU2_TR(0x59ba71);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59ba78:{NFSU2_TR(0x59ba78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba79:{NFSU2_TR(0x59ba79);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59ba7d:{NFSU2_TR(0x59ba7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba7e:{NFSU2_TR(0x59ba7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ba83ull));
TAIL_STATIC(0x43c990u,43c);
}
B59ba83:L59ba83:{c.instructions+=7;NFSU2_TR(0x59ba83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B59ba86:{NFSU2_TR(0x59ba86);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba87:{NFSU2_TR(0x59ba87);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59ba8e:{NFSU2_TR(0x59ba8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba8f:{NFSU2_TR(0x59ba8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+8),(U+0),4);
}
B59ba95:{NFSU2_TR(0x59ba95);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59ba96:{NFSU2_TR(0x59ba96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59ba9bull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59ba9b:L59ba9b:{c.instructions+=4;NFSU2_TR(0x59ba9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59ba9e:{NFSU2_TR(0x59ba9e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B59baa1:{NFSU2_TR(0x59baa1);
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
B59baa3:{NFSU2_TR(0x59baa3);
if(r1(R+518)){{goto L59bab3;}}
}
B59baa5:L59baa5:{c.instructions+=4;NFSU2_TR(0x59baa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59baa9:{NFSU2_TR(0x59baa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59baaa:{NFSU2_TR(0x59baaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59baab:{NFSU2_TR(0x59baab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bab0ull));
TAIL_STATIC(0x4012b0u,401);
}
B59bab0:L59bab0:{c.instructions+=1;NFSU2_TR(0x59bab0);
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
B59bab3:L59bab3:{c.instructions+=20;NFSU2_TR(0x59bab3);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bab6:{NFSU2_TR(0x59bab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B59bab8:{NFSU2_TR(0x59bab8);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59babb:{NFSU2_TR(0x59babb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59bac1:{NFSU2_TR(0x59bac1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bac3:{NFSU2_TR(0x59bac3);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bac9:{NFSU2_TR(0x59bac9);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bacf:{NFSU2_TR(0x59bacf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59bad1:{NFSU2_TR(0x59bad1);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bad4:{NFSU2_TR(0x59bad4);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bad7:{NFSU2_TR(0x59bad7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59bad8:{NFSU2_TR(0x59bad8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bada:{NFSU2_TR(0x59bada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59bae0:{NFSU2_TR(0x59bae0);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bae6:{NFSU2_TR(0x59bae6);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59baec:{NFSU2_TR(0x59baec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59baed:{NFSU2_TR(0x59baed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59baee:{NFSU2_TR(0x59baee);
__builtin_memmove((R+16),(R+20),4);
}
B59baf0:{NFSU2_TR(0x59baf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59baf1:{NFSU2_TR(0x59baf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59bb00:L59bb00:{c.instructions+=30;NFSU2_TR(0x59bb00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bb01:{NFSU2_TR(0x59bb01);
__builtin_memmove((R+20),(R+16),4);
}
B59bb03:{NFSU2_TR(0x59bb03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59bb06:{NFSU2_TR(0x59bb06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B59bb09:{NFSU2_TR(0x59bb09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bb0a:{NFSU2_TR(0x59bb0a);
__builtin_memmove((R+24),(R+4),4);
}
B59bb0c:{NFSU2_TR(0x59bb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59bb0f:{NFSU2_TR(0x59bb0f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb11:{NFSU2_TR(0x59bb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bb14:{NFSU2_TR(0x59bb14);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb17:{NFSU2_TR(0x59bb17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59bb1b:{NFSU2_TR(0x59bb1b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb1e:{NFSU2_TR(0x59bb1e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb21:{NFSU2_TR(0x59bb21);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb23:{NFSU2_TR(0x59bb23);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59bb25:{NFSU2_TR(0x59bb25);
__asm__ volatile(".byte 0xde,0xcb":::"memory");
}
B59bb27:{NFSU2_TR(0x59bb27);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59bb29:{NFSU2_TR(0x59bb29);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59bb2b:{NFSU2_TR(0x59bb2b);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B59bb2d:{NFSU2_TR(0x59bb2d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59bb2f:{NFSU2_TR(0x59bb2f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bb31:{NFSU2_TR(0x59bb31);
__asm__ volatile(".byte 0xde,0xc3":::"memory");
}
B59bb33:{NFSU2_TR(0x59bb33);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59bb35:{NFSU2_TR(0x59bb35);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59bb37:{NFSU2_TR(0x59bb37);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B59bb39:{NFSU2_TR(0x59bb39);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59bb3b:{NFSU2_TR(0x59bb3b);
{u32 ea_=u32(u32(8002264u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59bb41:{NFSU2_TR(0x59bb41);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59bb43:{NFSU2_TR(0x59bb43);
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
B59bb46:{NFSU2_TR(0x59bb46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59bb64;}}
}
B59bb48:L59bb48:{c.instructions+=10;NFSU2_TR(0x59bb48);
{u32 ea_=u32(u32(8002264u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59bb4e:{NFSU2_TR(0x59bb4e);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59bb50:{NFSU2_TR(0x59bb50);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59bb52:{NFSU2_TR(0x59bb52);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59bb54:{NFSU2_TR(0x59bb54);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bb56:{NFSU2_TR(0x59bb56);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bb58:{NFSU2_TR(0x59bb58);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bb5a:{NFSU2_TR(0x59bb5a);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb5e:{NFSU2_TR(0x59bb5e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bb60:{NFSU2_TR(0x59bb60);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bb64:L59bb64:{c.instructions+=15;NFSU2_TR(0x59bb64);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59bb66:{NFSU2_TR(0x59bb66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bb67:{NFSU2_TR(0x59bb67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59bb6a:{NFSU2_TR(0x59bb6a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bb6c:{NFSU2_TR(0x59bb6c);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bb72:{NFSU2_TR(0x59bb72);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bb73:{NFSU2_TR(0x59bb73);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59bb77:{NFSU2_TR(0x59bb77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bb78:{NFSU2_TR(0x59bb78);
{u32 ea_=u32(r4(R+24)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bb7e:{NFSU2_TR(0x59bb7e);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bb84:{NFSU2_TR(0x59bb84);
{u32 ea_=u32(r4(R+24)+u32(276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bb8a:{NFSU2_TR(0x59bb8a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bb8e:{NFSU2_TR(0x59bb8e);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bb94:{NFSU2_TR(0x59bb94);
{u32 ea_=u32(r4(R+24)+u32(280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bb9a:{NFSU2_TR(0x59bb9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bb9full));
TAIL_STATIC(0x43d1e0u,43d);
}
B59bb9f:L59bb9f:{c.instructions+=17;NFSU2_TR(0x59bb9f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bba3:{NFSU2_TR(0x59bba3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59bba6:{NFSU2_TR(0x59bba6);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bbaa:{NFSU2_TR(0x59bbaa);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bbae:{NFSU2_TR(0x59bbae);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59bbb0:{NFSU2_TR(0x59bbb0);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bbb2:{NFSU2_TR(0x59bbb2);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59bbb4:{NFSU2_TR(0x59bbb4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59bbb6:{NFSU2_TR(0x59bbb6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bbb8:{NFSU2_TR(0x59bbb8);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59bbba:{NFSU2_TR(0x59bbba);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59bbbc:{NFSU2_TR(0x59bbbc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bbbe:{NFSU2_TR(0x59bbbe);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59bbc0:{NFSU2_TR(0x59bbc0);
{u32 ea_=u32(u32(8002268u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59bbc6:{NFSU2_TR(0x59bbc6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59bbc8:{NFSU2_TR(0x59bbc8);
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
B59bbcb:{NFSU2_TR(0x59bbcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59bbe1;}}
}
B59bbcd:L59bbcd:{c.instructions+=8;NFSU2_TR(0x59bbcd);
{u32 ea_=u32(u32(8002268u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59bbd3:{NFSU2_TR(0x59bbd3);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59bbd5:{NFSU2_TR(0x59bbd5);
__asm__ volatile(".byte 0xde,0xcc":::"memory");
}
B59bbd7:{NFSU2_TR(0x59bbd7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bbd9:{NFSU2_TR(0x59bbd9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bbdb:{NFSU2_TR(0x59bbdb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bbdd:{NFSU2_TR(0x59bbdd);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B59bbdf:{NFSU2_TR(0x59bbdf);
{goto L59bbe3;}
}
B59bbe1:L59bbe1:{c.instructions+=1;NFSU2_TR(0x59bbe1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59bbe3:L59bbe3:{c.instructions+=12;NFSU2_TR(0x59bbe3);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59bbe5:{NFSU2_TR(0x59bbe5);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bbeb:{NFSU2_TR(0x59bbeb);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bbf1:{NFSU2_TR(0x59bbf1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bbf3:{NFSU2_TR(0x59bbf3);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bbf9:{NFSU2_TR(0x59bbf9);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bbff:{NFSU2_TR(0x59bbff);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bc05:{NFSU2_TR(0x59bc05);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bc0b:{NFSU2_TR(0x59bc0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59bc0c:{NFSU2_TR(0x59bc0c);
__builtin_memmove((R+16),(R+20),4);
}
B59bc0e:{NFSU2_TR(0x59bc0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59bc0f:{NFSU2_TR(0x59bc0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59bc20:L59bc20:{c.instructions+=12;NFSU2_TR(0x59bc20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bc24:{NFSU2_TR(0x59bc24);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc27:{NFSU2_TR(0x59bc27);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc2a:{NFSU2_TR(0x59bc2a);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc30:{NFSU2_TR(0x59bc30);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bc32:{NFSU2_TR(0x59bc32);
{u32 ea_=u32(r4(R+4)+u32(288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bc38:{NFSU2_TR(0x59bc38);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bc3a:{NFSU2_TR(0x59bc3a);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bc40:{NFSU2_TR(0x59bc40);
{u32 ea_=u32(r4(R+4)+u32(292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bc46:{NFSU2_TR(0x59bc46);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bc4c:{NFSU2_TR(0x59bc4c);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bc52:{NFSU2_TR(0x59bc52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59bc60:L59bc60:{c.instructions+=26;NFSU2_TR(0x59bc60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bc61:{NFSU2_TR(0x59bc61);
__builtin_memmove((R+20),(R+16),4);
}
B59bc63:{NFSU2_TR(0x59bc63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59bc66:{NFSU2_TR(0x59bc66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B59bc69:{NFSU2_TR(0x59bc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bc6c:{NFSU2_TR(0x59bc6c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc6f:{NFSU2_TR(0x59bc6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bc70:{NFSU2_TR(0x59bc70);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bc74:{NFSU2_TR(0x59bc74);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc77:{NFSU2_TR(0x59bc77);
__builtin_memmove((R+24),(R+4),4);
}
B59bc79:{NFSU2_TR(0x59bc79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59bc7b:{NFSU2_TR(0x59bc7b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bc7f:{NFSU2_TR(0x59bc7f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc83:{NFSU2_TR(0x59bc83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59bc87:{NFSU2_TR(0x59bc87);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bc8b:{NFSU2_TR(0x59bc8b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc8f:{NFSU2_TR(0x59bc8f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bc93:{NFSU2_TR(0x59bc93);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bc95:{NFSU2_TR(0x59bc95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bc99:{NFSU2_TR(0x59bc99);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bc9d:{NFSU2_TR(0x59bc9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bc9f:{NFSU2_TR(0x59bc9f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59bca1:{NFSU2_TR(0x59bca1);
{u32 ea_=u32(u32(8002272u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59bca7:{NFSU2_TR(0x59bca7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59bca9:{NFSU2_TR(0x59bca9);
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
B59bcac:{NFSU2_TR(0x59bcac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59bcd2;}}
}
B59bcae:L59bcae:{c.instructions+=10;NFSU2_TR(0x59bcae);
{u32 ea_=u32(u32(8002272u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59bcb4:{NFSU2_TR(0x59bcb4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bcb8:{NFSU2_TR(0x59bcb8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bcba:{NFSU2_TR(0x59bcba);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bcbe:{NFSU2_TR(0x59bcbe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bcc2:{NFSU2_TR(0x59bcc2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bcc4:{NFSU2_TR(0x59bcc4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bcc8:{NFSU2_TR(0x59bcc8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bccc:{NFSU2_TR(0x59bccc);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bcce:{NFSU2_TR(0x59bcce);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bcd2:L59bcd2:{c.instructions+=17;NFSU2_TR(0x59bcd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bcd5:{NFSU2_TR(0x59bcd5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59bcd7:{NFSU2_TR(0x59bcd7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bcdb:{NFSU2_TR(0x59bcdb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59bcdf:{NFSU2_TR(0x59bcdf);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bce2:{NFSU2_TR(0x59bce2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bce3:{NFSU2_TR(0x59bce3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bce4:{NFSU2_TR(0x59bce4);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59bce8:{NFSU2_TR(0x59bce8);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bceb:{NFSU2_TR(0x59bceb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bcec:{NFSU2_TR(0x59bcec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bcf0:{NFSU2_TR(0x59bcf0);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bcf3:{NFSU2_TR(0x59bcf3);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bcf6:{NFSU2_TR(0x59bcf6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bcfa:{NFSU2_TR(0x59bcfa);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bcfd:{NFSU2_TR(0x59bcfd);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bd00:{NFSU2_TR(0x59bd00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bd05ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59bd05:L59bd05:{c.instructions+=17;NFSU2_TR(0x59bd05);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bd09:{NFSU2_TR(0x59bd09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59bd0c:{NFSU2_TR(0x59bd0c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bd10:{NFSU2_TR(0x59bd10);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bd14:{NFSU2_TR(0x59bd14);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59bd16:{NFSU2_TR(0x59bd16);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bd18:{NFSU2_TR(0x59bd18);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59bd1a:{NFSU2_TR(0x59bd1a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59bd1c:{NFSU2_TR(0x59bd1c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bd1e:{NFSU2_TR(0x59bd1e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59bd20:{NFSU2_TR(0x59bd20);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B59bd22:{NFSU2_TR(0x59bd22);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bd24:{NFSU2_TR(0x59bd24);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59bd26:{NFSU2_TR(0x59bd26);
{u32 ea_=u32(u32(8002276u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59bd2c:{NFSU2_TR(0x59bd2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59bd2e:{NFSU2_TR(0x59bd2e);
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
B59bd31:{NFSU2_TR(0x59bd31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59bd47;}}
}
B59bd33:L59bd33:{c.instructions+=8;NFSU2_TR(0x59bd33);
{u32 ea_=u32(u32(8002276u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59bd39:{NFSU2_TR(0x59bd39);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59bd3b:{NFSU2_TR(0x59bd3b);
__asm__ volatile(".byte 0xde,0xcc":::"memory");
}
B59bd3d:{NFSU2_TR(0x59bd3d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bd3f:{NFSU2_TR(0x59bd3f);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bd41:{NFSU2_TR(0x59bd41);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bd43:{NFSU2_TR(0x59bd43);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B59bd45:{NFSU2_TR(0x59bd45);
{goto L59bd49;}
}
B59bd47:L59bd47:{c.instructions+=1;NFSU2_TR(0x59bd47);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59bd49:L59bd49:{c.instructions+=12;NFSU2_TR(0x59bd49);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B59bd4b:{NFSU2_TR(0x59bd4b);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bd51:{NFSU2_TR(0x59bd51);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bd57:{NFSU2_TR(0x59bd57);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59bd59:{NFSU2_TR(0x59bd59);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bd5f:{NFSU2_TR(0x59bd5f);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bd65:{NFSU2_TR(0x59bd65);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bd6b:{NFSU2_TR(0x59bd6b);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bd71:{NFSU2_TR(0x59bd71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59bd72:{NFSU2_TR(0x59bd72);
__builtin_memmove((R+16),(R+20),4);
}
B59bd74:{NFSU2_TR(0x59bd74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59bd75:{NFSU2_TR(0x59bd75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59bd80:L59bd80:{c.instructions+=25;NFSU2_TR(0x59bd80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bd81:{NFSU2_TR(0x59bd81);
__builtin_memmove((R+20),(R+16),4);
}
B59bd83:{NFSU2_TR(0x59bd83);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59bd86:{NFSU2_TR(0x59bd86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B59bd89:{NFSU2_TR(0x59bd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bd8c:{NFSU2_TR(0x59bd8c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bd8f:{NFSU2_TR(0x59bd8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bd90:{NFSU2_TR(0x59bd90);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bd94:{NFSU2_TR(0x59bd94);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bd97:{NFSU2_TR(0x59bd97);
__builtin_memmove((R+24),(R+4),4);
}
B59bd99:{NFSU2_TR(0x59bd99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B59bd9b:{NFSU2_TR(0x59bd9b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59bd9f:{NFSU2_TR(0x59bd9f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bda3:{NFSU2_TR(0x59bda3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59bda7:{NFSU2_TR(0x59bda7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bdab:{NFSU2_TR(0x59bdab);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bdaf:{NFSU2_TR(0x59bdaf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bdb1:{NFSU2_TR(0x59bdb1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bdb5:{NFSU2_TR(0x59bdb5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bdb9:{NFSU2_TR(0x59bdb9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59bdbb:{NFSU2_TR(0x59bdbb);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59bdbd:{NFSU2_TR(0x59bdbd);
{u32 ea_=u32(u32(8002272u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59bdc3:{NFSU2_TR(0x59bdc3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59bdc5:{NFSU2_TR(0x59bdc5);
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
B59bdc8:{NFSU2_TR(0x59bdc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59bdee;}}
}
B59bdca:L59bdca:{c.instructions+=10;NFSU2_TR(0x59bdca);
{u32 ea_=u32(u32(8002272u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59bdd0:{NFSU2_TR(0x59bdd0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bdd4:{NFSU2_TR(0x59bdd4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bdd6:{NFSU2_TR(0x59bdd6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bdda:{NFSU2_TR(0x59bdda);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bdde:{NFSU2_TR(0x59bdde);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bde0:{NFSU2_TR(0x59bde0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bde4:{NFSU2_TR(0x59bde4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bde8:{NFSU2_TR(0x59bde8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59bdea:{NFSU2_TR(0x59bdea);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bdee:L59bdee:{c.instructions+=17;NFSU2_TR(0x59bdee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bdf1:{NFSU2_TR(0x59bdf1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59bdf3:{NFSU2_TR(0x59bdf3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bdf7:{NFSU2_TR(0x59bdf7);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59bdfb:{NFSU2_TR(0x59bdfb);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bdfe:{NFSU2_TR(0x59bdfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bdff:{NFSU2_TR(0x59bdff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59be00:{NFSU2_TR(0x59be00);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59be04:{NFSU2_TR(0x59be04);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be07:{NFSU2_TR(0x59be07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59be08:{NFSU2_TR(0x59be08);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be0c:{NFSU2_TR(0x59be0c);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59be0f:{NFSU2_TR(0x59be0f);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be12:{NFSU2_TR(0x59be12);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be16:{NFSU2_TR(0x59be16);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59be19:{NFSU2_TR(0x59be19);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be1c:{NFSU2_TR(0x59be1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59be21ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59be21:L59be21:{c.instructions+=15;NFSU2_TR(0x59be21);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be25:{NFSU2_TR(0x59be25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B59be28:{NFSU2_TR(0x59be28);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be2c:{NFSU2_TR(0x59be2c);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59be30:{NFSU2_TR(0x59be30);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be34:{NFSU2_TR(0x59be34);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59be38:{NFSU2_TR(0x59be38);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59be3a:{NFSU2_TR(0x59be3a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B59be3c:{NFSU2_TR(0x59be3c);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B59be3e:{NFSU2_TR(0x59be3e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59be40:{NFSU2_TR(0x59be40);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B59be42:{NFSU2_TR(0x59be42);
{u32 ea_=u32(u32(8002276u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59be48:{NFSU2_TR(0x59be48);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59be4a:{NFSU2_TR(0x59be4a);
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
B59be4d:{NFSU2_TR(0x59be4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59be6d;}}
}
B59be4f:L59be4f:{c.instructions+=9;NFSU2_TR(0x59be4f);
{u32 ea_=u32(u32(8002276u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B59be55:{NFSU2_TR(0x59be55);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59be57:{NFSU2_TR(0x59be57);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B59be59:{NFSU2_TR(0x59be59);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be5d:{NFSU2_TR(0x59be5d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59be5f:{NFSU2_TR(0x59be5f);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be63:{NFSU2_TR(0x59be63);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be67:{NFSU2_TR(0x59be67);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B59be69:{NFSU2_TR(0x59be69);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be6d:L59be6d:{c.instructions+=19;NFSU2_TR(0x59be6d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59be6f:{NFSU2_TR(0x59be6f);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59be72:{NFSU2_TR(0x59be72);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be76:{NFSU2_TR(0x59be76);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59be79:{NFSU2_TR(0x59be79);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59be7d:{NFSU2_TR(0x59be7d);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59be80:{NFSU2_TR(0x59be80);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be84:{NFSU2_TR(0x59be84);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59be86:{NFSU2_TR(0x59be86);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59be8c:{NFSU2_TR(0x59be8c);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be92:{NFSU2_TR(0x59be92);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59be98:{NFSU2_TR(0x59be98);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59be9e:{NFSU2_TR(0x59be9e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bea2:{NFSU2_TR(0x59bea2);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bea8:{NFSU2_TR(0x59bea8);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59beae:{NFSU2_TR(0x59beae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59beaf:{NFSU2_TR(0x59beaf);
__builtin_memmove((R+16),(R+20),4);
}
B59beb1:{NFSU2_TR(0x59beb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59beb2:{NFSU2_TR(0x59beb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59bec0:L59bec0:{c.instructions+=23;NFSU2_TR(0x59bec0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bec1:{NFSU2_TR(0x59bec1);
__builtin_memmove((R+20),(R+16),4);
}
B59bec3:{NFSU2_TR(0x59bec3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59bec6:{NFSU2_TR(0x59bec6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xf8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xf8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59becc:{NFSU2_TR(0x59becc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59becf:{NFSU2_TR(0x59becf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bed0:{NFSU2_TR(0x59bed0);
__builtin_memmove((R+24),(R+4),4);
}
B59bed2:{NFSU2_TR(0x59bed2);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bed5:{NFSU2_TR(0x59bed5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bed6:{NFSU2_TR(0x59bed6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bed8:{NFSU2_TR(0x59bed8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bed9:{NFSU2_TR(0x59bed9);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59bedd:{NFSU2_TR(0x59bedd);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bee1:{NFSU2_TR(0x59bee1);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bee4:{NFSU2_TR(0x59bee4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bee7:{NFSU2_TR(0x59bee7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59beeb:{NFSU2_TR(0x59beeb);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59beee:{NFSU2_TR(0x59beee);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bef1:{NFSU2_TR(0x59bef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bef4:{NFSU2_TR(0x59bef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bef5:{NFSU2_TR(0x59bef5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bef9:{NFSU2_TR(0x59bef9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59befa:{NFSU2_TR(0x59befa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59beffull));
TAIL_STATIC(0x43d1e0u,43d);
}
B59beff:L59beff:{c.instructions+=24;NFSU2_TR(0x59beff);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bf03:{NFSU2_TR(0x59bf03);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bf09:{NFSU2_TR(0x59bf09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bf0c:{NFSU2_TR(0x59bf0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59bf0f:{NFSU2_TR(0x59bf0f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59bf13:{NFSU2_TR(0x59bf13);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bf17:{NFSU2_TR(0x59bf17);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bf1d:{NFSU2_TR(0x59bf1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf1e:{NFSU2_TR(0x59bf1e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bf22:{NFSU2_TR(0x59bf22);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf23:{NFSU2_TR(0x59bf23);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bf27:{NFSU2_TR(0x59bf27);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bf2d:{NFSU2_TR(0x59bf2d);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bf31:{NFSU2_TR(0x59bf31);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bf35:{NFSU2_TR(0x59bf35);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bf39:{NFSU2_TR(0x59bf39);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bf3f:{NFSU2_TR(0x59bf3f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bf41:{NFSU2_TR(0x59bf41);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bf45:{NFSU2_TR(0x59bf45);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bf4b:{NFSU2_TR(0x59bf4b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bf4e:{NFSU2_TR(0x59bf4e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bf52:{NFSU2_TR(0x59bf52);
{u32 ea_=u32(r4(R+24)+u32(360u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59bf58:{NFSU2_TR(0x59bf58);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bf5b:{NFSU2_TR(0x59bf5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bf60ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B59bf60:L59bf60:{c.instructions+=5;NFSU2_TR(0x59bf60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bf66:{NFSU2_TR(0x59bf66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B59bf69:{NFSU2_TR(0x59bf69);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59bf6b:{NFSU2_TR(0x59bf6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59bf71:{NFSU2_TR(0x59bf71);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59bf79;}}
}
B59bf73:L59bf73:{c.instructions+=1;NFSU2_TR(0x59bf73);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((R+0),(U+0),4);
}
B59bf79:L59bf79:{c.instructions+=5;NFSU2_TR(0x59bf79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf7a:{NFSU2_TR(0x59bf7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59bf81:{NFSU2_TR(0x59bf81);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf82:{NFSU2_TR(0x59bf82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf83:{NFSU2_TR(0x59bf83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bf88ull));
TAIL_STATIC(0x43c990u,43c);
}
B59bf88:L59bf88:{c.instructions+=7;NFSU2_TR(0x59bf88);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59bf8c:{NFSU2_TR(0x59bf8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf8d:{NFSU2_TR(0x59bf8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59bf94:{NFSU2_TR(0x59bf94);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf95:{NFSU2_TR(0x59bf95);
u8 U[4];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B59bf9c:{NFSU2_TR(0x59bf9c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bf9d:{NFSU2_TR(0x59bf9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bfa2ull));
TAIL_STATIC(0x43c990u,43c);
}
B59bfa2:L59bfa2:{c.instructions+=7;NFSU2_TR(0x59bfa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bfa5:{NFSU2_TR(0x59bfa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59bfa9:{NFSU2_TR(0x59bfa9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfaa:{NFSU2_TR(0x59bfaa);
u8 U[4];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B59bfb1:{NFSU2_TR(0x59bfb1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfb2:{NFSU2_TR(0x59bfb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfb3:{NFSU2_TR(0x59bfb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59bfb8ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B59bfb8:L59bfb8:{c.instructions+=6;NFSU2_TR(0x59bfb8);
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
B59bfbb:{NFSU2_TR(0x59bfbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59bfbc:{NFSU2_TR(0x59bfbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59bfbd:{NFSU2_TR(0x59bfbd);
__builtin_memmove((R+16),(R+20),4);
}
B59bfbf:{NFSU2_TR(0x59bfbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B59bfc0:{NFSU2_TR(0x59bfc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B59bfd0:L59bfd0:{c.instructions+=18;NFSU2_TR(0x59bfd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfd1:{NFSU2_TR(0x59bfd1);
__builtin_memmove((R+20),(R+16),4);
}
B59bfd3:{NFSU2_TR(0x59bfd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B59bfd6:{NFSU2_TR(0x59bfd6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x118ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x118ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x118ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59bfdc:{NFSU2_TR(0x59bfdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59bfdf:{NFSU2_TR(0x59bfdf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bfe1:{NFSU2_TR(0x59bfe1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfe2:{NFSU2_TR(0x59bfe2);
__builtin_memmove((R+24),(R+4),4);
}
B59bfe4:{NFSU2_TR(0x59bfe4);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bfe7:{NFSU2_TR(0x59bfe7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfe8:{NFSU2_TR(0x59bfe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59bfe9:{NFSU2_TR(0x59bfe9);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B59bfed:{NFSU2_TR(0x59bfed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bff1:{NFSU2_TR(0x59bff1);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bff4:{NFSU2_TR(0x59bff4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59bff7:{NFSU2_TR(0x59bff7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59bffb:{NFSU2_TR(0x59bffb);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59bffe:{NFSU2_TR(0x59bffe);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x59c001u,59c);
}
XIT:NFSU2_TR_EXIT(0x59b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
