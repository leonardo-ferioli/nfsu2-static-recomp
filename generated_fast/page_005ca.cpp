#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_566(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5c1(u8* __restrict R,Cpu& c);
u32 body_5c2(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5cb(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_630(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ca,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ca,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ca(u8* __restrict R,Cpu& c);
u32 page_5ca(Cpu& c){return body_5ca(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ca(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ca001:goto L5ca001;
case 0x5ca008:c.instructions+=1;goto B5ca008;
case 0x5ca00e:goto L5ca00e;
case 0x5ca014:c.instructions+=2;goto B5ca014;
case 0x5ca016:c.instructions+=1;goto B5ca016;
case 0x5ca01c:goto L5ca01c;
case 0x5ca023:c.instructions+=2;goto B5ca023;
case 0x5ca025:c.instructions+=1;goto B5ca025;
case 0x5ca02b:goto L5ca02b;
case 0x5ca032:c.instructions+=2;goto B5ca032;
case 0x5ca034:c.instructions+=1;goto B5ca034;
case 0x5ca03a:goto L5ca03a;
case 0x5ca03e:c.instructions+=2;goto B5ca03e;
case 0x5ca041:c.instructions+=1;goto B5ca041;
case 0x5ca043:goto L5ca043;
case 0x5ca04a:goto L5ca04a;
case 0x5ca052:c.instructions+=1;goto B5ca052;
case 0x5ca054:goto L5ca054;
case 0x5ca05c:c.instructions+=1;goto B5ca05c;
case 0x5ca05e:goto L5ca05e;
case 0x5ca066:c.instructions+=1;goto B5ca066;
case 0x5ca068:goto L5ca068;
case 0x5ca070:c.instructions+=1;goto B5ca070;
case 0x5ca072:goto L5ca072;
case 0x5ca07a:goto L5ca07a;
case 0x5ca080:c.instructions+=4;goto B5ca080;
case 0x5ca082:c.instructions+=3;goto B5ca082;
case 0x5ca083:c.instructions+=2;goto B5ca083;
case 0x5ca085:c.instructions+=1;goto B5ca085;
case 0x5ca08a:goto L5ca08a;
case 0x5ca08c:c.instructions+=1;goto B5ca08c;
case 0x5ca092:goto L5ca092;
case 0x5ca096:c.instructions+=7;goto B5ca096;
case 0x5ca09a:c.instructions+=6;goto B5ca09a;
case 0x5ca09b:c.instructions+=5;goto B5ca09b;
case 0x5ca09c:c.instructions+=4;goto B5ca09c;
case 0x5ca09d:c.instructions+=3;goto B5ca09d;
case 0x5ca0a1:c.instructions+=2;goto B5ca0a1;
case 0x5ca0a2:c.instructions+=1;goto B5ca0a2;
case 0x5ca0a7:goto L5ca0a7;
case 0x5ca0a9:c.instructions+=1;goto B5ca0a9;
case 0x5ca0af:goto L5ca0af;
case 0x5ca0b3:c.instructions+=6;goto B5ca0b3;
case 0x5ca0b7:c.instructions+=5;goto B5ca0b7;
case 0x5ca0ba:c.instructions+=4;goto B5ca0ba;
case 0x5ca0bd:c.instructions+=3;goto B5ca0bd;
case 0x5ca0c3:c.instructions+=2;goto B5ca0c3;
case 0x5ca0c7:c.instructions+=1;goto B5ca0c7;
case 0x5ca0c9:goto L5ca0c9;
case 0x5ca0ca:c.instructions+=4;goto B5ca0ca;
case 0x5ca0cc:c.instructions+=3;goto B5ca0cc;
case 0x5ca0cd:c.instructions+=2;goto B5ca0cd;
case 0x5ca0cf:c.instructions+=1;goto B5ca0cf;
case 0x5ca0d4:goto L5ca0d4;
case 0x5ca0d8:c.instructions+=30;goto B5ca0d8;
case 0x5ca0d9:c.instructions+=29;goto B5ca0d9;
case 0x5ca0db:c.instructions+=28;goto B5ca0db;
case 0x5ca0dd:c.instructions+=27;goto B5ca0dd;
case 0x5ca0e1:c.instructions+=26;goto B5ca0e1;
case 0x5ca0e3:c.instructions+=25;goto B5ca0e3;
case 0x5ca0e5:c.instructions+=24;goto B5ca0e5;
case 0x5ca0e7:c.instructions+=23;goto B5ca0e7;
case 0x5ca0ee:c.instructions+=22;goto B5ca0ee;
case 0x5ca0f0:c.instructions+=21;goto B5ca0f0;
case 0x5ca0f6:c.instructions+=20;goto B5ca0f6;
case 0x5ca0f7:c.instructions+=19;goto B5ca0f7;
case 0x5ca0f9:c.instructions+=18;goto B5ca0f9;
case 0x5ca0fb:c.instructions+=17;goto B5ca0fb;
case 0x5ca0fc:c.instructions+=16;goto B5ca0fc;
case 0x5ca0fe:c.instructions+=15;goto B5ca0fe;
case 0x5ca100:c.instructions+=14;goto B5ca100;
case 0x5ca102:c.instructions+=13;goto B5ca102;
case 0x5ca104:c.instructions+=12;goto B5ca104;
case 0x5ca105:c.instructions+=11;goto B5ca105;
case 0x5ca107:c.instructions+=10;goto B5ca107;
case 0x5ca109:c.instructions+=9;goto B5ca109;
case 0x5ca10e:c.instructions+=8;goto B5ca10e;
case 0x5ca110:c.instructions+=7;goto B5ca110;
case 0x5ca112:c.instructions+=6;goto B5ca112;
case 0x5ca114:c.instructions+=5;goto B5ca114;
case 0x5ca115:c.instructions+=4;goto B5ca115;
case 0x5ca117:c.instructions+=3;goto B5ca117;
case 0x5ca118:c.instructions+=2;goto B5ca118;
case 0x5ca11a:c.instructions+=1;goto B5ca11a;
case 0x5ca11f:goto L5ca11f;
case 0x5ca120:c.instructions+=5;goto B5ca120;
case 0x5ca122:c.instructions+=4;goto B5ca122;
case 0x5ca123:c.instructions+=3;goto B5ca123;
case 0x5ca125:c.instructions+=2;goto B5ca125;
case 0x5ca129:c.instructions+=1;goto B5ca129;
case 0x5ca12e:goto L5ca12e;
case 0x5ca132:c.instructions+=1;goto B5ca132;
case 0x5ca134:goto L5ca134;
case 0x5ca136:c.instructions+=27;goto B5ca136;
case 0x5ca13a:c.instructions+=26;goto B5ca13a;
case 0x5ca13c:c.instructions+=25;goto B5ca13c;
case 0x5ca13e:c.instructions+=24;goto B5ca13e;
case 0x5ca140:c.instructions+=23;goto B5ca140;
case 0x5ca142:c.instructions+=22;goto B5ca142;
case 0x5ca149:c.instructions+=21;goto B5ca149;
case 0x5ca14b:c.instructions+=20;goto B5ca14b;
case 0x5ca151:c.instructions+=19;goto B5ca151;
case 0x5ca152:c.instructions+=18;goto B5ca152;
case 0x5ca154:c.instructions+=17;goto B5ca154;
case 0x5ca156:c.instructions+=16;goto B5ca156;
case 0x5ca157:c.instructions+=15;goto B5ca157;
case 0x5ca159:c.instructions+=14;goto B5ca159;
case 0x5ca15b:c.instructions+=13;goto B5ca15b;
case 0x5ca15d:c.instructions+=12;goto B5ca15d;
case 0x5ca15f:c.instructions+=11;goto B5ca15f;
case 0x5ca160:c.instructions+=10;goto B5ca160;
case 0x5ca162:c.instructions+=9;goto B5ca162;
case 0x5ca164:c.instructions+=8;goto B5ca164;
case 0x5ca169:c.instructions+=7;goto B5ca169;
case 0x5ca16b:c.instructions+=6;goto B5ca16b;
case 0x5ca16d:c.instructions+=5;goto B5ca16d;
case 0x5ca16f:c.instructions+=4;goto B5ca16f;
case 0x5ca171:c.instructions+=3;goto B5ca171;
case 0x5ca172:c.instructions+=2;goto B5ca172;
case 0x5ca174:c.instructions+=1;goto B5ca174;
case 0x5ca179:goto L5ca179;
case 0x5ca17b:c.instructions+=1;goto B5ca17b;
case 0x5ca181:goto L5ca181;
case 0x5ca185:c.instructions+=13;goto B5ca185;
case 0x5ca189:c.instructions+=12;goto B5ca189;
case 0x5ca190:c.instructions+=11;goto B5ca190;
case 0x5ca194:c.instructions+=10;goto B5ca194;
case 0x5ca19a:c.instructions+=9;goto B5ca19a;
case 0x5ca19e:c.instructions+=8;goto B5ca19e;
case 0x5ca19f:c.instructions+=7;goto B5ca19f;
case 0x5ca1a2:c.instructions+=6;goto B5ca1a2;
case 0x5ca1a3:c.instructions+=5;goto B5ca1a3;
case 0x5ca1a4:c.instructions+=4;goto B5ca1a4;
case 0x5ca1aa:c.instructions+=3;goto B5ca1aa;
case 0x5ca1ab:c.instructions+=2;goto B5ca1ab;
case 0x5ca1ae:c.instructions+=1;goto B5ca1ae;
case 0x5ca1b1:goto L5ca1b1;
case 0x5ca1b5:c.instructions+=6;goto B5ca1b5;
case 0x5ca1b7:c.instructions+=5;goto B5ca1b7;
case 0x5ca1ba:c.instructions+=4;goto B5ca1ba;
case 0x5ca1c1:c.instructions+=3;goto B5ca1c1;
case 0x5ca1c3:c.instructions+=2;goto B5ca1c3;
case 0x5ca1c7:c.instructions+=1;goto B5ca1c7;
case 0x5ca1cd:goto L5ca1cd;
case 0x5ca1d1:c.instructions+=29;goto B5ca1d1;
case 0x5ca1d2:c.instructions+=28;goto B5ca1d2;
case 0x5ca1d4:c.instructions+=27;goto B5ca1d4;
case 0x5ca1d6:c.instructions+=26;goto B5ca1d6;
case 0x5ca1d8:c.instructions+=25;goto B5ca1d8;
case 0x5ca1da:c.instructions+=24;goto B5ca1da;
case 0x5ca1dc:c.instructions+=23;goto B5ca1dc;
case 0x5ca1e3:c.instructions+=22;goto B5ca1e3;
case 0x5ca1e5:c.instructions+=21;goto B5ca1e5;
case 0x5ca1eb:c.instructions+=20;goto B5ca1eb;
case 0x5ca1ec:c.instructions+=19;goto B5ca1ec;
case 0x5ca1ee:c.instructions+=18;goto B5ca1ee;
case 0x5ca1f0:c.instructions+=17;goto B5ca1f0;
case 0x5ca1f1:c.instructions+=16;goto B5ca1f1;
case 0x5ca1f3:c.instructions+=15;goto B5ca1f3;
case 0x5ca1f5:c.instructions+=14;goto B5ca1f5;
case 0x5ca1f7:c.instructions+=13;goto B5ca1f7;
case 0x5ca1f9:c.instructions+=12;goto B5ca1f9;
case 0x5ca1fa:c.instructions+=11;goto B5ca1fa;
case 0x5ca1fc:c.instructions+=10;goto B5ca1fc;
case 0x5ca1fe:c.instructions+=9;goto B5ca1fe;
case 0x5ca203:c.instructions+=8;goto B5ca203;
case 0x5ca205:c.instructions+=7;goto B5ca205;
case 0x5ca207:c.instructions+=6;goto B5ca207;
case 0x5ca209:c.instructions+=5;goto B5ca209;
case 0x5ca20a:c.instructions+=4;goto B5ca20a;
case 0x5ca20c:c.instructions+=3;goto B5ca20c;
case 0x5ca20d:c.instructions+=2;goto B5ca20d;
case 0x5ca20f:c.instructions+=1;goto B5ca20f;
case 0x5ca214:goto L5ca214;
case 0x5ca216:c.instructions+=1;goto B5ca216;
case 0x5ca218:goto L5ca218;
case 0x5ca21c:c.instructions+=10;goto B5ca21c;
case 0x5ca21f:c.instructions+=9;goto B5ca21f;
case 0x5ca222:c.instructions+=8;goto B5ca222;
case 0x5ca226:c.instructions+=7;goto B5ca226;
case 0x5ca22c:c.instructions+=6;goto B5ca22c;
case 0x5ca230:c.instructions+=5;goto B5ca230;
case 0x5ca234:c.instructions+=4;goto B5ca234;
case 0x5ca23b:c.instructions+=3;goto B5ca23b;
case 0x5ca23e:c.instructions+=2;goto B5ca23e;
case 0x5ca242:c.instructions+=1;goto B5ca242;
case 0x5ca248:goto L5ca248;
case 0x5ca249:c.instructions+=4;goto B5ca249;
case 0x5ca24b:c.instructions+=3;goto B5ca24b;
case 0x5ca24c:c.instructions+=2;goto B5ca24c;
case 0x5ca24e:c.instructions+=1;goto B5ca24e;
case 0x5ca253:goto L5ca253;
case 0x5ca254:c.instructions+=5;goto B5ca254;
case 0x5ca255:c.instructions+=4;goto B5ca255;
case 0x5ca256:c.instructions+=3;goto B5ca256;
case 0x5ca257:c.instructions+=2;goto B5ca257;
case 0x5ca25a:c.instructions+=1;goto B5ca25a;
case 0x5ca25d:goto L5ca25d;
case 0x5ca261:c.instructions+=5;goto B5ca261;
case 0x5ca262:c.instructions+=4;goto B5ca262;
case 0x5ca263:c.instructions+=3;goto B5ca263;
case 0x5ca264:c.instructions+=2;goto B5ca264;
case 0x5ca265:c.instructions+=1;goto B5ca265;
case 0x5ca26a:goto L5ca26a;
case 0x5ca26c:c.instructions+=1;goto B5ca26c;
case 0x5ca26e:goto L5ca26e;
case 0x5ca272:c.instructions+=6;goto B5ca272;
case 0x5ca275:c.instructions+=5;goto B5ca275;
case 0x5ca278:c.instructions+=4;goto B5ca278;
case 0x5ca27c:c.instructions+=3;goto B5ca27c;
case 0x5ca282:c.instructions+=2;goto B5ca282;
case 0x5ca286:c.instructions+=1;goto B5ca286;
case 0x5ca288:goto L5ca288;
case 0x5ca289:c.instructions+=4;goto B5ca289;
case 0x5ca28b:c.instructions+=3;goto B5ca28b;
case 0x5ca28c:c.instructions+=2;goto B5ca28c;
case 0x5ca28e:c.instructions+=1;goto B5ca28e;
case 0x5ca293:goto L5ca293;
case 0x5ca297:c.instructions+=30;goto B5ca297;
case 0x5ca298:c.instructions+=29;goto B5ca298;
case 0x5ca29a:c.instructions+=28;goto B5ca29a;
case 0x5ca29c:c.instructions+=27;goto B5ca29c;
case 0x5ca2a0:c.instructions+=26;goto B5ca2a0;
case 0x5ca2a2:c.instructions+=25;goto B5ca2a2;
case 0x5ca2a4:c.instructions+=24;goto B5ca2a4;
case 0x5ca2a6:c.instructions+=23;goto B5ca2a6;
case 0x5ca2ad:c.instructions+=22;goto B5ca2ad;
case 0x5ca2af:c.instructions+=21;goto B5ca2af;
case 0x5ca2b5:c.instructions+=20;goto B5ca2b5;
case 0x5ca2b6:c.instructions+=19;goto B5ca2b6;
case 0x5ca2b8:c.instructions+=18;goto B5ca2b8;
case 0x5ca2ba:c.instructions+=17;goto B5ca2ba;
case 0x5ca2bb:c.instructions+=16;goto B5ca2bb;
case 0x5ca2bd:c.instructions+=15;goto B5ca2bd;
case 0x5ca2bf:c.instructions+=14;goto B5ca2bf;
case 0x5ca2c1:c.instructions+=13;goto B5ca2c1;
case 0x5ca2c3:c.instructions+=12;goto B5ca2c3;
case 0x5ca2c4:c.instructions+=11;goto B5ca2c4;
case 0x5ca2c6:c.instructions+=10;goto B5ca2c6;
case 0x5ca2c8:c.instructions+=9;goto B5ca2c8;
case 0x5ca2cd:c.instructions+=8;goto B5ca2cd;
case 0x5ca2cf:c.instructions+=7;goto B5ca2cf;
case 0x5ca2d1:c.instructions+=6;goto B5ca2d1;
case 0x5ca2d3:c.instructions+=5;goto B5ca2d3;
case 0x5ca2d4:c.instructions+=4;goto B5ca2d4;
case 0x5ca2d6:c.instructions+=3;goto B5ca2d6;
case 0x5ca2d7:c.instructions+=2;goto B5ca2d7;
case 0x5ca2d9:c.instructions+=1;goto B5ca2d9;
case 0x5ca2de:goto L5ca2de;
case 0x5ca2e0:goto L5ca2e0;
case 0x5ca2e2:c.instructions+=27;goto B5ca2e2;
case 0x5ca2e6:c.instructions+=26;goto B5ca2e6;
case 0x5ca2e8:c.instructions+=25;goto B5ca2e8;
case 0x5ca2ea:c.instructions+=24;goto B5ca2ea;
case 0x5ca2ec:c.instructions+=23;goto B5ca2ec;
case 0x5ca2ee:c.instructions+=22;goto B5ca2ee;
case 0x5ca2f5:c.instructions+=21;goto B5ca2f5;
case 0x5ca2f7:c.instructions+=20;goto B5ca2f7;
case 0x5ca2fd:c.instructions+=19;goto B5ca2fd;
case 0x5ca2fe:c.instructions+=18;goto B5ca2fe;
case 0x5ca300:c.instructions+=17;goto B5ca300;
case 0x5ca302:c.instructions+=16;goto B5ca302;
case 0x5ca303:c.instructions+=15;goto B5ca303;
case 0x5ca305:c.instructions+=14;goto B5ca305;
case 0x5ca307:c.instructions+=13;goto B5ca307;
case 0x5ca309:c.instructions+=12;goto B5ca309;
case 0x5ca30b:c.instructions+=11;goto B5ca30b;
case 0x5ca30c:c.instructions+=10;goto B5ca30c;
case 0x5ca30e:c.instructions+=9;goto B5ca30e;
case 0x5ca310:c.instructions+=8;goto B5ca310;
case 0x5ca315:c.instructions+=7;goto B5ca315;
case 0x5ca317:c.instructions+=6;goto B5ca317;
case 0x5ca319:c.instructions+=5;goto B5ca319;
case 0x5ca31b:c.instructions+=4;goto B5ca31b;
case 0x5ca31d:c.instructions+=3;goto B5ca31d;
case 0x5ca31e:c.instructions+=2;goto B5ca31e;
case 0x5ca320:c.instructions+=1;goto B5ca320;
case 0x5ca325:goto L5ca325;
case 0x5ca327:c.instructions+=1;goto B5ca327;
case 0x5ca329:goto L5ca329;
case 0x5ca32d:c.instructions+=8;goto B5ca32d;
case 0x5ca331:c.instructions+=7;goto B5ca331;
case 0x5ca337:c.instructions+=6;goto B5ca337;
case 0x5ca33b:c.instructions+=5;goto B5ca33b;
case 0x5ca33f:c.instructions+=4;goto B5ca33f;
case 0x5ca346:c.instructions+=3;goto B5ca346;
case 0x5ca349:c.instructions+=2;goto B5ca349;
case 0x5ca34d:c.instructions+=1;goto B5ca34d;
case 0x5ca353:goto L5ca353;
case 0x5ca354:c.instructions+=4;goto B5ca354;
case 0x5ca356:c.instructions+=3;goto B5ca356;
case 0x5ca357:c.instructions+=2;goto B5ca357;
case 0x5ca359:c.instructions+=1;goto B5ca359;
case 0x5ca35e:goto L5ca35e;
case 0x5ca35f:c.instructions+=5;goto B5ca35f;
case 0x5ca360:c.instructions+=4;goto B5ca360;
case 0x5ca361:c.instructions+=3;goto B5ca361;
case 0x5ca362:c.instructions+=2;goto B5ca362;
case 0x5ca365:c.instructions+=1;goto B5ca365;
case 0x5ca368:goto L5ca368;
case 0x5ca36d:c.instructions+=1;goto B5ca36d;
case 0x5ca372:goto L5ca372;
case 0x5ca373:c.instructions+=2;goto B5ca373;
case 0x5ca378:c.instructions+=1;goto B5ca378;
case 0x5ca37d:goto L5ca37d;
case 0x5ca380:goto L5ca380;
case 0x5ca381:c.instructions+=5;goto B5ca381;
case 0x5ca382:c.instructions+=4;goto B5ca382;
case 0x5ca383:c.instructions+=3;goto B5ca383;
case 0x5ca384:c.instructions+=2;goto B5ca384;
case 0x5ca387:c.instructions+=1;goto B5ca387;
case 0x5ca3a0:goto L5ca3a0;
case 0x5ca3a1:c.instructions+=6;goto B5ca3a1;
case 0x5ca3a2:c.instructions+=5;goto B5ca3a2;
case 0x5ca3a3:c.instructions+=4;goto B5ca3a3;
case 0x5ca3a5:c.instructions+=3;goto B5ca3a5;
case 0x5ca3a6:c.instructions+=2;goto B5ca3a6;
case 0x5ca3ac:c.instructions+=1;goto B5ca3ac;
case 0x5ca3b1:goto L5ca3b1;
case 0x5ca3b4:c.instructions+=1;goto B5ca3b4;
case 0x5ca3b6:goto L5ca3b6;
case 0x5ca3b7:c.instructions+=2;goto B5ca3b7;
case 0x5ca3b9:c.instructions+=1;goto B5ca3b9;
case 0x5ca3be:goto L5ca3be;
case 0x5ca3c1:c.instructions+=1;goto B5ca3c1;
case 0x5ca3c3:goto L5ca3c3;
case 0x5ca3c5:c.instructions+=3;goto B5ca3c5;
case 0x5ca3c6:c.instructions+=2;goto B5ca3c6;
case 0x5ca3c8:c.instructions+=1;goto B5ca3c8;
case 0x5ca3cd:goto L5ca3cd;
case 0x5ca3d0:c.instructions+=2;goto B5ca3d0;
case 0x5ca3d6:c.instructions+=1;goto B5ca3d6;
case 0x5ca3d8:goto L5ca3d8;
case 0x5ca3de:c.instructions+=1;goto B5ca3de;
case 0x5ca3e3:goto L5ca3e3;
case 0x5ca3e8:goto L5ca3e8;
case 0x5ca3ea:c.instructions+=2;goto B5ca3ea;
case 0x5ca3ec:c.instructions+=1;goto B5ca3ec;
case 0x5ca3ee:goto L5ca3ee;
case 0x5ca3f0:c.instructions+=2;goto B5ca3f0;
case 0x5ca3f1:c.instructions+=1;goto B5ca3f1;
case 0x5ca3f4:goto L5ca3f4;
case 0x5ca3fa:goto L5ca3fa;
case 0x5ca3fd:c.instructions+=2;goto B5ca3fd;
case 0x5ca3fe:c.instructions+=1;goto B5ca3fe;
case 0x5ca400:goto L5ca400;
case 0x5ca401:c.instructions+=1;goto B5ca401;
case 0x5ca403:goto L5ca403;
case 0x5ca409:c.instructions+=2;goto B5ca409;
case 0x5ca40e:c.instructions+=1;goto B5ca40e;
case 0x5ca410:goto L5ca410;
case 0x5ca415:goto L5ca415;
case 0x5ca417:c.instructions+=2;goto B5ca417;
case 0x5ca419:c.instructions+=1;goto B5ca419;
case 0x5ca41b:goto L5ca41b;
case 0x5ca41d:c.instructions+=2;goto B5ca41d;
case 0x5ca41e:c.instructions+=1;goto B5ca41e;
case 0x5ca421:goto L5ca421;
case 0x5ca427:goto L5ca427;
case 0x5ca42a:c.instructions+=2;goto B5ca42a;
case 0x5ca42b:c.instructions+=1;goto B5ca42b;
case 0x5ca42d:goto L5ca42d;
case 0x5ca42e:c.instructions+=1;goto B5ca42e;
case 0x5ca430:goto L5ca430;
case 0x5ca436:c.instructions+=2;goto B5ca436;
case 0x5ca43b:c.instructions+=1;goto B5ca43b;
case 0x5ca440:goto L5ca440;
case 0x5ca445:goto L5ca445;
case 0x5ca447:c.instructions+=2;goto B5ca447;
case 0x5ca449:c.instructions+=1;goto B5ca449;
case 0x5ca44b:goto L5ca44b;
case 0x5ca44d:c.instructions+=2;goto B5ca44d;
case 0x5ca44e:c.instructions+=1;goto B5ca44e;
case 0x5ca451:goto L5ca451;
case 0x5ca457:goto L5ca457;
case 0x5ca45a:c.instructions+=2;goto B5ca45a;
case 0x5ca45b:c.instructions+=1;goto B5ca45b;
case 0x5ca45d:goto L5ca45d;
case 0x5ca45e:c.instructions+=1;goto B5ca45e;
case 0x5ca460:goto L5ca460;
case 0x5ca466:c.instructions+=2;goto B5ca466;
case 0x5ca46b:c.instructions+=1;goto B5ca46b;
case 0x5ca470:goto L5ca470;
case 0x5ca475:goto L5ca475;
case 0x5ca477:c.instructions+=2;goto B5ca477;
case 0x5ca479:c.instructions+=1;goto B5ca479;
case 0x5ca47b:goto L5ca47b;
case 0x5ca47d:c.instructions+=2;goto B5ca47d;
case 0x5ca47e:c.instructions+=1;goto B5ca47e;
case 0x5ca481:goto L5ca481;
case 0x5ca487:goto L5ca487;
case 0x5ca48a:c.instructions+=2;goto B5ca48a;
case 0x5ca48b:c.instructions+=1;goto B5ca48b;
case 0x5ca48d:goto L5ca48d;
case 0x5ca48e:c.instructions+=1;goto B5ca48e;
case 0x5ca490:goto L5ca490;
case 0x5ca491:c.instructions+=5;goto B5ca491;
case 0x5ca492:c.instructions+=4;goto B5ca492;
case 0x5ca498:c.instructions+=3;goto B5ca498;
case 0x5ca499:c.instructions+=2;goto B5ca499;
case 0x5ca49a:c.instructions+=1;goto B5ca49a;
case 0x5ca4a0:goto L5ca4a0;
case 0x5ca4b0:goto L5ca4b0;
case 0x5ca4b1:c.instructions+=3;goto B5ca4b1;
case 0x5ca4b4:c.instructions+=2;goto B5ca4b4;
case 0x5ca4b9:c.instructions+=1;goto B5ca4b9;
case 0x5ca4c0:goto L5ca4c0;
case 0x5ca4c2:goto L5ca4c2;
case 0x5ca4c6:c.instructions+=5;goto B5ca4c6;
case 0x5ca4cc:c.instructions+=4;goto B5ca4cc;
case 0x5ca4cd:c.instructions+=3;goto B5ca4cd;
case 0x5ca4d0:c.instructions+=2;goto B5ca4d0;
case 0x5ca4d3:c.instructions+=1;goto B5ca4d3;
case 0x5ca4d5:goto L5ca4d5;
case 0x5ca4d8:c.instructions+=2;goto B5ca4d8;
case 0x5ca4d9:c.instructions+=1;goto B5ca4d9;
case 0x5ca4db:goto L5ca4db;
case 0x5ca4dc:c.instructions+=1;goto B5ca4dc;
case 0x5ca4e0:goto L5ca4e0;
case 0x5ca4e3:c.instructions+=14;goto B5ca4e3;
case 0x5ca4e4:c.instructions+=13;goto B5ca4e4;
case 0x5ca4e5:c.instructions+=12;goto B5ca4e5;
case 0x5ca4e6:c.instructions+=11;goto B5ca4e6;
case 0x5ca4e8:c.instructions+=10;goto B5ca4e8;
case 0x5ca4ed:c.instructions+=9;goto B5ca4ed;
case 0x5ca4ee:c.instructions+=8;goto B5ca4ee;
case 0x5ca4ef:c.instructions+=7;goto B5ca4ef;
case 0x5ca4f0:c.instructions+=6;goto B5ca4f0;
case 0x5ca4f1:c.instructions+=5;goto B5ca4f1;
case 0x5ca4f3:c.instructions+=4;goto B5ca4f3;
case 0x5ca4f7:c.instructions+=3;goto B5ca4f7;
case 0x5ca4fb:c.instructions+=2;goto B5ca4fb;
case 0x5ca4fd:c.instructions+=1;goto B5ca4fd;
case 0x5ca4ff:goto L5ca4ff;
case 0x5ca501:c.instructions+=3;goto B5ca501;
case 0x5ca502:c.instructions+=2;goto B5ca502;
case 0x5ca505:c.instructions+=1;goto B5ca505;
case 0x5ca506:goto L5ca506;
case 0x5ca50b:c.instructions+=8;goto B5ca50b;
case 0x5ca50d:c.instructions+=7;goto B5ca50d;
case 0x5ca511:c.instructions+=6;goto B5ca511;
case 0x5ca515:c.instructions+=5;goto B5ca515;
case 0x5ca519:c.instructions+=4;goto B5ca519;
case 0x5ca51d:c.instructions+=3;goto B5ca51d;
case 0x5ca520:c.instructions+=2;goto B5ca520;
case 0x5ca523:c.instructions+=1;goto B5ca523;
case 0x5ca525:goto L5ca525;
case 0x5ca52c:c.instructions+=1;goto B5ca52c;
case 0x5ca533:goto L5ca533;
case 0x5ca53d:c.instructions+=3;goto B5ca53d;
case 0x5ca53e:c.instructions+=2;goto B5ca53e;
case 0x5ca541:c.instructions+=1;goto B5ca541;
case 0x5ca542:goto L5ca542;
case 0x5ca54c:c.instructions+=3;goto B5ca54c;
case 0x5ca54d:c.instructions+=2;goto B5ca54d;
case 0x5ca550:c.instructions+=1;goto B5ca550;
case 0x5ca551:goto L5ca551;
case 0x5ca55b:c.instructions+=3;goto B5ca55b;
case 0x5ca55c:c.instructions+=2;goto B5ca55c;
case 0x5ca55f:c.instructions+=1;goto B5ca55f;
case 0x5ca560:goto L5ca560;
case 0x5ca56a:c.instructions+=3;goto B5ca56a;
case 0x5ca56b:c.instructions+=2;goto B5ca56b;
case 0x5ca56e:c.instructions+=1;goto B5ca56e;
case 0x5ca590:goto L5ca590;
case 0x5ca593:c.instructions+=14;goto B5ca593;
case 0x5ca594:c.instructions+=13;goto B5ca594;
case 0x5ca595:c.instructions+=12;goto B5ca595;
case 0x5ca596:c.instructions+=11;goto B5ca596;
case 0x5ca598:c.instructions+=10;goto B5ca598;
case 0x5ca59d:c.instructions+=9;goto B5ca59d;
case 0x5ca59e:c.instructions+=8;goto B5ca59e;
case 0x5ca59f:c.instructions+=7;goto B5ca59f;
case 0x5ca5a0:c.instructions+=6;goto B5ca5a0;
case 0x5ca5a1:c.instructions+=5;goto B5ca5a1;
case 0x5ca5a3:c.instructions+=4;goto B5ca5a3;
case 0x5ca5a7:c.instructions+=3;goto B5ca5a7;
case 0x5ca5ab:c.instructions+=2;goto B5ca5ab;
case 0x5ca5ad:c.instructions+=1;goto B5ca5ad;
case 0x5ca5af:goto L5ca5af;
case 0x5ca5b1:c.instructions+=3;goto B5ca5b1;
case 0x5ca5b2:c.instructions+=2;goto B5ca5b2;
case 0x5ca5b5:c.instructions+=1;goto B5ca5b5;
case 0x5ca5b6:goto L5ca5b6;
case 0x5ca5bb:c.instructions+=9;goto B5ca5bb;
case 0x5ca5bd:c.instructions+=8;goto B5ca5bd;
case 0x5ca5c1:c.instructions+=7;goto B5ca5c1;
case 0x5ca5c5:c.instructions+=6;goto B5ca5c5;
case 0x5ca5c9:c.instructions+=5;goto B5ca5c9;
case 0x5ca5cd:c.instructions+=4;goto B5ca5cd;
case 0x5ca5d0:c.instructions+=3;goto B5ca5d0;
case 0x5ca5d3:c.instructions+=2;goto B5ca5d3;
case 0x5ca5d6:c.instructions+=1;goto B5ca5d6;
case 0x5ca5d8:goto L5ca5d8;
case 0x5ca5db:c.instructions+=1;goto B5ca5db;
case 0x5ca5dd:goto L5ca5dd;
case 0x5ca5e0:c.instructions+=1;goto B5ca5e0;
case 0x5ca5e2:goto L5ca5e2;
case 0x5ca5ec:c.instructions+=3;goto B5ca5ec;
case 0x5ca5ed:c.instructions+=2;goto B5ca5ed;
case 0x5ca5f0:c.instructions+=1;goto B5ca5f0;
case 0x5ca5f1:goto L5ca5f1;
case 0x5ca5fb:c.instructions+=3;goto B5ca5fb;
case 0x5ca5fc:c.instructions+=2;goto B5ca5fc;
case 0x5ca5ff:c.instructions+=1;goto B5ca5ff;
case 0x5ca600:goto L5ca600;
case 0x5ca60a:c.instructions+=3;goto B5ca60a;
case 0x5ca60b:c.instructions+=2;goto B5ca60b;
case 0x5ca60e:c.instructions+=1;goto B5ca60e;
case 0x5ca610:goto L5ca610;
case 0x5ca614:c.instructions+=3;goto B5ca614;
case 0x5ca618:c.instructions+=2;goto B5ca618;
case 0x5ca61a:c.instructions+=1;goto B5ca61a;
case 0x5ca61c:goto L5ca61c;
case 0x5ca620:c.instructions+=1;goto B5ca620;
case 0x5ca621:goto L5ca621;
case 0x5ca623:c.instructions+=4;goto B5ca623;
case 0x5ca625:c.instructions+=3;goto B5ca625;
case 0x5ca628:c.instructions+=2;goto B5ca628;
case 0x5ca62a:c.instructions+=1;goto B5ca62a;
case 0x5ca62c:goto L5ca62c;
case 0x5ca62d:goto L5ca62d;
case 0x5ca630:goto L5ca630;
case 0x5ca634:c.instructions+=4;goto B5ca634;
case 0x5ca638:c.instructions+=3;goto B5ca638;
case 0x5ca63a:c.instructions+=2;goto B5ca63a;
case 0x5ca63e:c.instructions+=1;goto B5ca63e;
case 0x5ca640:goto L5ca640;
case 0x5ca641:goto L5ca641;
case 0x5ca643:c.instructions+=1;goto B5ca643;
case 0x5ca645:goto L5ca645;
case 0x5ca647:c.instructions+=1;goto B5ca647;
case 0x5ca649:goto L5ca649;
case 0x5ca64c:c.instructions+=3;goto B5ca64c;
case 0x5ca64f:c.instructions+=2;goto B5ca64f;
case 0x5ca651:c.instructions+=1;goto B5ca651;
case 0x5ca653:goto L5ca653;
case 0x5ca654:goto L5ca654;
case 0x5ca660:goto L5ca660;
case 0x5ca664:c.instructions+=2;goto B5ca664;
case 0x5ca668:c.instructions+=1;goto B5ca668;
case 0x5ca66a:goto L5ca66a;
case 0x5ca66e:c.instructions+=6;goto B5ca66e;
case 0x5ca66f:c.instructions+=5;goto B5ca66f;
case 0x5ca675:c.instructions+=4;goto B5ca675;
case 0x5ca67b:c.instructions+=3;goto B5ca67b;
case 0x5ca67c:c.instructions+=2;goto B5ca67c;
case 0x5ca682:c.instructions+=1;goto B5ca682;
case 0x5ca687:goto L5ca687;
case 0x5ca68c:c.instructions+=1;goto B5ca68c;
case 0x5ca690:goto L5ca690;
case 0x5ca691:c.instructions+=1;goto B5ca691;
case 0x5ca693:goto L5ca693;
case 0x5ca69a:c.instructions+=2;goto B5ca69a;
case 0x5ca69c:c.instructions+=1;goto B5ca69c;
case 0x5ca69e:goto L5ca69e;
case 0x5ca6a3:goto L5ca6a3;
case 0x5ca6a6:c.instructions+=1;goto B5ca6a6;
case 0x5ca6a8:goto L5ca6a8;
case 0x5ca6ab:c.instructions+=3;goto B5ca6ab;
case 0x5ca6ae:c.instructions+=2;goto B5ca6ae;
case 0x5ca6b1:c.instructions+=1;goto B5ca6b1;
case 0x5ca6b3:goto L5ca6b3;
case 0x5ca6ba:goto L5ca6ba;
case 0x5ca6bf:c.instructions+=2;goto B5ca6bf;
case 0x5ca6c4:c.instructions+=1;goto B5ca6c4;
case 0x5ca6c6:goto L5ca6c6;
case 0x5ca6c8:c.instructions+=2;goto B5ca6c8;
case 0x5ca6cd:c.instructions+=1;goto B5ca6cd;
case 0x5ca6d0:goto L5ca6d0;
case 0x5ca6d3:c.instructions+=1;goto B5ca6d3;
case 0x5ca6d5:goto L5ca6d5;
case 0x5ca6da:c.instructions+=3;goto B5ca6da;
case 0x5ca6db:c.instructions+=2;goto B5ca6db;
case 0x5ca6e0:c.instructions+=1;goto B5ca6e0;
case 0x5ca6e2:goto L5ca6e2;
case 0x5ca6e4:goto L5ca6e4;
case 0x5ca6e7:c.instructions+=1;goto B5ca6e7;
case 0x5ca6e9:goto L5ca6e9;
case 0x5ca6ef:c.instructions+=3;goto B5ca6ef;
case 0x5ca6f0:c.instructions+=2;goto B5ca6f0;
case 0x5ca6f6:c.instructions+=1;goto B5ca6f6;
case 0x5ca6fb:goto L5ca6fb;
case 0x5ca6fc:c.instructions+=2;goto B5ca6fc;
case 0x5ca6ff:c.instructions+=1;goto B5ca6ff;
case 0x5ca701:goto L5ca701;
case 0x5ca702:c.instructions+=1;goto B5ca702;
case 0x5ca720:goto L5ca720;
case 0x5ca725:c.instructions+=4;goto B5ca725;
case 0x5ca727:c.instructions+=3;goto B5ca727;
case 0x5ca728:c.instructions+=2;goto B5ca728;
case 0x5ca72a:c.instructions+=1;goto B5ca72a;
case 0x5ca72c:goto L5ca72c;
case 0x5ca736:c.instructions+=3;goto B5ca736;
case 0x5ca738:c.instructions+=2;goto B5ca738;
case 0x5ca73f:c.instructions+=1;goto B5ca73f;
case 0x5ca744:goto L5ca744;
case 0x5ca746:c.instructions+=2;goto B5ca746;
case 0x5ca748:c.instructions+=1;goto B5ca748;
case 0x5ca74d:goto L5ca74d;
case 0x5ca74f:c.instructions+=2;goto B5ca74f;
case 0x5ca751:c.instructions+=1;goto B5ca751;
case 0x5ca756:goto L5ca756;
case 0x5ca758:c.instructions+=2;goto B5ca758;
case 0x5ca75a:c.instructions+=1;goto B5ca75a;
case 0x5ca75f:goto L5ca75f;
case 0x5ca760:c.instructions+=1;goto B5ca760;
case 0x5ca761:goto L5ca761;
case 0x5ca767:c.instructions+=8;goto B5ca767;
case 0x5ca76d:c.instructions+=7;goto B5ca76d;
case 0x5ca76f:c.instructions+=6;goto B5ca76f;
case 0x5ca775:c.instructions+=5;goto B5ca775;
case 0x5ca776:c.instructions+=4;goto B5ca776;
case 0x5ca777:c.instructions+=3;goto B5ca777;
case 0x5ca77a:c.instructions+=2;goto B5ca77a;
case 0x5ca77c:c.instructions+=1;goto B5ca77c;
case 0x5ca780:goto L5ca780;
case 0x5ca787:c.instructions+=1;goto B5ca787;
case 0x5ca789:goto L5ca789;
case 0x5ca790:c.instructions+=1;goto B5ca790;
case 0x5ca792:goto L5ca792;
case 0x5ca793:c.instructions+=2;goto B5ca793;
case 0x5ca796:c.instructions+=1;goto B5ca796;
case 0x5ca798:goto L5ca798;
case 0x5ca79a:goto L5ca79a;
case 0x5ca79b:c.instructions+=2;goto B5ca79b;
case 0x5ca79d:c.instructions+=1;goto B5ca79d;
case 0x5ca7a2:goto L5ca7a2;
case 0x5ca7a8:goto L5ca7a8;
case 0x5ca7aa:c.instructions+=2;goto B5ca7aa;
case 0x5ca7af:c.instructions+=1;goto B5ca7af;
case 0x5ca7b0:goto L5ca7b0;
case 0x5ca7b6:c.instructions+=4;goto B5ca7b6;
case 0x5ca7b9:c.instructions+=3;goto B5ca7b9;
case 0x5ca7bb:c.instructions+=2;goto B5ca7bb;
case 0x5ca7c0:c.instructions+=1;goto B5ca7c0;
case 0x5ca7c2:goto L5ca7c2;
case 0x5ca7c3:c.instructions+=2;goto B5ca7c3;
case 0x5ca7c5:c.instructions+=1;goto B5ca7c5;
case 0x5ca7ca:goto L5ca7ca;
case 0x5ca7d0:goto L5ca7d0;
case 0x5ca7d1:c.instructions+=2;goto B5ca7d1;
case 0x5ca7d4:c.instructions+=1;goto B5ca7d4;
case 0x5ca7d6:goto L5ca7d6;
case 0x5ca7dc:c.instructions+=2;goto B5ca7dc;
case 0x5ca7df:c.instructions+=1;goto B5ca7df;
case 0x5ca7e1:goto L5ca7e1;
case 0x5ca7e4:c.instructions+=1;goto B5ca7e4;
case 0x5ca7e6:goto L5ca7e6;
case 0x5ca7e9:c.instructions+=1;goto B5ca7e9;
case 0x5ca7eb:goto L5ca7eb;
case 0x5ca7ee:c.instructions+=1;goto B5ca7ee;
case 0x5ca7f4:goto L5ca7f4;
case 0x5ca7fb:c.instructions+=2;goto B5ca7fb;
case 0x5ca800:c.instructions+=1;goto B5ca800;
case 0x5ca802:goto L5ca802;
case 0x5ca807:goto L5ca807;
case 0x5ca80d:c.instructions+=5;goto B5ca80d;
case 0x5ca813:c.instructions+=4;goto B5ca813;
case 0x5ca816:c.instructions+=3;goto B5ca816;
case 0x5ca81c:c.instructions+=2;goto B5ca81c;
case 0x5ca81e:c.instructions+=1;goto B5ca81e;
case 0x5ca820:goto L5ca820;
case 0x5ca822:goto L5ca822;
case 0x5ca824:c.instructions+=1;goto B5ca824;
case 0x5ca826:goto L5ca826;
case 0x5ca828:c.instructions+=7;goto B5ca828;
case 0x5ca82a:c.instructions+=6;goto B5ca82a;
case 0x5ca82d:c.instructions+=5;goto B5ca82d;
case 0x5ca82f:c.instructions+=4;goto B5ca82f;
case 0x5ca833:c.instructions+=3;goto B5ca833;
case 0x5ca834:c.instructions+=2;goto B5ca834;
case 0x5ca836:c.instructions+=1;goto B5ca836;
case 0x5ca83b:goto L5ca83b;
case 0x5ca841:goto L5ca841;
case 0x5ca847:c.instructions+=6;goto B5ca847;
case 0x5ca84d:c.instructions+=5;goto B5ca84d;
case 0x5ca853:c.instructions+=4;goto B5ca853;
case 0x5ca857:c.instructions+=3;goto B5ca857;
case 0x5ca859:c.instructions+=2;goto B5ca859;
case 0x5ca85b:c.instructions+=1;goto B5ca85b;
case 0x5ca85d:goto L5ca85d;
case 0x5ca85f:goto L5ca85f;
case 0x5ca861:c.instructions+=1;goto B5ca861;
case 0x5ca863:goto L5ca863;
case 0x5ca865:c.instructions+=7;goto B5ca865;
case 0x5ca867:c.instructions+=6;goto B5ca867;
case 0x5ca86a:c.instructions+=5;goto B5ca86a;
case 0x5ca86e:c.instructions+=4;goto B5ca86e;
case 0x5ca86f:c.instructions+=3;goto B5ca86f;
case 0x5ca871:c.instructions+=2;goto B5ca871;
case 0x5ca873:c.instructions+=1;goto B5ca873;
case 0x5ca878:goto L5ca878;
case 0x5ca87e:goto L5ca87e;
case 0x5ca884:c.instructions+=6;goto B5ca884;
case 0x5ca88a:c.instructions+=5;goto B5ca88a;
case 0x5ca890:c.instructions+=4;goto B5ca890;
case 0x5ca894:c.instructions+=3;goto B5ca894;
case 0x5ca896:c.instructions+=2;goto B5ca896;
case 0x5ca898:c.instructions+=1;goto B5ca898;
case 0x5ca89a:goto L5ca89a;
case 0x5ca89c:goto L5ca89c;
case 0x5ca89e:c.instructions+=1;goto B5ca89e;
case 0x5ca8a0:goto L5ca8a0;
case 0x5ca8a2:c.instructions+=7;goto B5ca8a2;
case 0x5ca8a4:c.instructions+=6;goto B5ca8a4;
case 0x5ca8a7:c.instructions+=5;goto B5ca8a7;
case 0x5ca8ab:c.instructions+=4;goto B5ca8ab;
case 0x5ca8ac:c.instructions+=3;goto B5ca8ac;
case 0x5ca8ae:c.instructions+=2;goto B5ca8ae;
case 0x5ca8b0:c.instructions+=1;goto B5ca8b0;
case 0x5ca8b5:goto L5ca8b5;
case 0x5ca8bb:goto L5ca8bb;
case 0x5ca8c1:c.instructions+=6;goto B5ca8c1;
case 0x5ca8c7:c.instructions+=5;goto B5ca8c7;
case 0x5ca8cd:c.instructions+=4;goto B5ca8cd;
case 0x5ca8d1:c.instructions+=3;goto B5ca8d1;
case 0x5ca8d3:c.instructions+=2;goto B5ca8d3;
case 0x5ca8d5:c.instructions+=1;goto B5ca8d5;
case 0x5ca8d7:goto L5ca8d7;
case 0x5ca8d9:goto L5ca8d9;
case 0x5ca8db:c.instructions+=1;goto B5ca8db;
case 0x5ca8dd:goto L5ca8dd;
case 0x5ca8df:c.instructions+=7;goto B5ca8df;
case 0x5ca8e1:c.instructions+=6;goto B5ca8e1;
case 0x5ca8e4:c.instructions+=5;goto B5ca8e4;
case 0x5ca8e8:c.instructions+=4;goto B5ca8e8;
case 0x5ca8e9:c.instructions+=3;goto B5ca8e9;
case 0x5ca8eb:c.instructions+=2;goto B5ca8eb;
case 0x5ca8ed:c.instructions+=1;goto B5ca8ed;
case 0x5ca8f2:goto L5ca8f2;
case 0x5ca8f8:goto L5ca8f8;
case 0x5ca8fe:c.instructions+=6;goto B5ca8fe;
case 0x5ca904:c.instructions+=5;goto B5ca904;
case 0x5ca90a:c.instructions+=4;goto B5ca90a;
case 0x5ca90e:c.instructions+=3;goto B5ca90e;
case 0x5ca910:c.instructions+=2;goto B5ca910;
case 0x5ca912:c.instructions+=1;goto B5ca912;
case 0x5ca914:goto L5ca914;
case 0x5ca916:goto L5ca916;
case 0x5ca918:c.instructions+=1;goto B5ca918;
case 0x5ca91a:goto L5ca91a;
case 0x5ca91c:c.instructions+=7;goto B5ca91c;
case 0x5ca91e:c.instructions+=6;goto B5ca91e;
case 0x5ca921:c.instructions+=5;goto B5ca921;
case 0x5ca925:c.instructions+=4;goto B5ca925;
case 0x5ca926:c.instructions+=3;goto B5ca926;
case 0x5ca928:c.instructions+=2;goto B5ca928;
case 0x5ca92a:c.instructions+=1;goto B5ca92a;
case 0x5ca92f:goto L5ca92f;
case 0x5ca935:goto L5ca935;
case 0x5ca93b:c.instructions+=6;goto B5ca93b;
case 0x5ca941:c.instructions+=5;goto B5ca941;
case 0x5ca947:c.instructions+=4;goto B5ca947;
case 0x5ca94b:c.instructions+=3;goto B5ca94b;
case 0x5ca94d:c.instructions+=2;goto B5ca94d;
case 0x5ca94f:c.instructions+=1;goto B5ca94f;
case 0x5ca951:goto L5ca951;
case 0x5ca953:goto L5ca953;
case 0x5ca955:c.instructions+=1;goto B5ca955;
case 0x5ca957:goto L5ca957;
case 0x5ca959:c.instructions+=7;goto B5ca959;
case 0x5ca95b:c.instructions+=6;goto B5ca95b;
case 0x5ca95e:c.instructions+=5;goto B5ca95e;
case 0x5ca962:c.instructions+=4;goto B5ca962;
case 0x5ca963:c.instructions+=3;goto B5ca963;
case 0x5ca965:c.instructions+=2;goto B5ca965;
case 0x5ca967:c.instructions+=1;goto B5ca967;
case 0x5ca96c:goto L5ca96c;
case 0x5ca972:goto L5ca972;
case 0x5ca978:c.instructions+=6;goto B5ca978;
case 0x5ca97e:c.instructions+=5;goto B5ca97e;
case 0x5ca984:c.instructions+=4;goto B5ca984;
case 0x5ca988:c.instructions+=3;goto B5ca988;
case 0x5ca98a:c.instructions+=2;goto B5ca98a;
case 0x5ca98c:c.instructions+=1;goto B5ca98c;
case 0x5ca98e:goto L5ca98e;
case 0x5ca990:goto L5ca990;
case 0x5ca992:c.instructions+=1;goto B5ca992;
case 0x5ca994:goto L5ca994;
case 0x5ca996:c.instructions+=7;goto B5ca996;
case 0x5ca998:c.instructions+=6;goto B5ca998;
case 0x5ca99b:c.instructions+=5;goto B5ca99b;
case 0x5ca99f:c.instructions+=4;goto B5ca99f;
case 0x5ca9a0:c.instructions+=3;goto B5ca9a0;
case 0x5ca9a2:c.instructions+=2;goto B5ca9a2;
case 0x5ca9a4:c.instructions+=1;goto B5ca9a4;
case 0x5ca9a9:goto L5ca9a9;
case 0x5ca9af:goto L5ca9af;
case 0x5ca9b5:c.instructions+=6;goto B5ca9b5;
case 0x5ca9bb:c.instructions+=5;goto B5ca9bb;
case 0x5ca9c1:c.instructions+=4;goto B5ca9c1;
case 0x5ca9c5:c.instructions+=3;goto B5ca9c5;
case 0x5ca9c7:c.instructions+=2;goto B5ca9c7;
case 0x5ca9c9:c.instructions+=1;goto B5ca9c9;
case 0x5ca9cb:goto L5ca9cb;
case 0x5ca9cd:goto L5ca9cd;
case 0x5ca9cf:c.instructions+=1;goto B5ca9cf;
case 0x5ca9d1:goto L5ca9d1;
case 0x5ca9d3:c.instructions+=7;goto B5ca9d3;
case 0x5ca9d5:c.instructions+=6;goto B5ca9d5;
case 0x5ca9d8:c.instructions+=5;goto B5ca9d8;
case 0x5ca9dc:c.instructions+=4;goto B5ca9dc;
case 0x5ca9dd:c.instructions+=3;goto B5ca9dd;
case 0x5ca9df:c.instructions+=2;goto B5ca9df;
case 0x5ca9e1:c.instructions+=1;goto B5ca9e1;
case 0x5ca9e6:goto L5ca9e6;
case 0x5ca9ec:goto L5ca9ec;
case 0x5ca9f2:c.instructions+=31;goto B5ca9f2;
case 0x5ca9f8:c.instructions+=30;goto B5ca9f8;
case 0x5ca9fb:c.instructions+=29;goto B5ca9fb;
case 0x5caa01:c.instructions+=28;goto B5caa01;
case 0x5caa07:c.instructions+=27;goto B5caa07;
case 0x5caa0d:c.instructions+=26;goto B5caa0d;
case 0x5caa11:c.instructions+=25;goto B5caa11;
case 0x5caa17:c.instructions+=24;goto B5caa17;
case 0x5caa1d:c.instructions+=23;goto B5caa1d;
case 0x5caa23:c.instructions+=22;goto B5caa23;
case 0x5caa27:c.instructions+=21;goto B5caa27;
case 0x5caa2d:c.instructions+=20;goto B5caa2d;
case 0x5caa33:c.instructions+=19;goto B5caa33;
case 0x5caa39:c.instructions+=18;goto B5caa39;
case 0x5caa3d:c.instructions+=17;goto B5caa3d;
case 0x5caa43:c.instructions+=16;goto B5caa43;
case 0x5caa49:c.instructions+=15;goto B5caa49;
case 0x5caa4f:c.instructions+=14;goto B5caa4f;
case 0x5caa53:c.instructions+=13;goto B5caa53;
case 0x5caa59:c.instructions+=12;goto B5caa59;
case 0x5caa5f:c.instructions+=11;goto B5caa5f;
case 0x5caa65:c.instructions+=10;goto B5caa65;
case 0x5caa69:c.instructions+=9;goto B5caa69;
case 0x5caa6f:c.instructions+=8;goto B5caa6f;
case 0x5caa75:c.instructions+=7;goto B5caa75;
case 0x5caa7b:c.instructions+=6;goto B5caa7b;
case 0x5caa7f:c.instructions+=5;goto B5caa7f;
case 0x5caa85:c.instructions+=4;goto B5caa85;
case 0x5caa8b:c.instructions+=3;goto B5caa8b;
case 0x5caa91:c.instructions+=2;goto B5caa91;
case 0x5caa95:c.instructions+=1;goto B5caa95;
case 0x5caa9b:goto L5caa9b;
case 0x5caa9c:c.instructions+=3;goto B5caa9c;
case 0x5caa9d:c.instructions+=2;goto B5caa9d;
case 0x5caa9e:c.instructions+=1;goto B5caa9e;
case 0x5caaa0:goto L5caaa0;
case 0x5caaa1:c.instructions+=4;goto B5caaa1;
case 0x5caaa3:c.instructions+=3;goto B5caaa3;
case 0x5caaa6:c.instructions+=2;goto B5caaa6;
case 0x5caaa8:c.instructions+=1;goto B5caaa8;
case 0x5caaaa:goto L5caaaa;
case 0x5caaab:c.instructions+=2;goto B5caaab;
case 0x5caab0:c.instructions+=1;goto B5caab0;
case 0x5caab5:goto L5caab5;
case 0x5caab7:c.instructions+=4;goto B5caab7;
case 0x5caabe:c.instructions+=3;goto B5caabe;
case 0x5caac1:c.instructions+=2;goto B5caac1;
case 0x5caac3:c.instructions+=1;goto B5caac3;
case 0x5caac6:goto L5caac6;
case 0x5caac7:c.instructions+=1;goto B5caac7;
case 0x5caad0:goto L5caad0;
case 0x5caad1:c.instructions+=12;goto B5caad1;
case 0x5caad3:c.instructions+=11;goto B5caad3;
case 0x5caad6:c.instructions+=10;goto B5caad6;
case 0x5caadc:c.instructions+=9;goto B5caadc;
case 0x5caadd:c.instructions+=8;goto B5caadd;
case 0x5caade:c.instructions+=7;goto B5caade;
case 0x5caae2:c.instructions+=6;goto B5caae2;
case 0x5caae3:c.instructions+=5;goto B5caae3;
case 0x5caae5:c.instructions+=4;goto B5caae5;
case 0x5caae6:c.instructions+=3;goto B5caae6;
case 0x5caaec:c.instructions+=2;goto B5caaec;
case 0x5caaf3:c.instructions+=1;goto B5caaf3;
case 0x5caaf8:goto L5caaf8;
case 0x5caafe:c.instructions+=9;goto B5caafe;
case 0x5cab01:c.instructions+=8;goto B5cab01;
case 0x5cab04:c.instructions+=7;goto B5cab04;
case 0x5cab0a:c.instructions+=6;goto B5cab0a;
case 0x5cab0c:c.instructions+=5;goto B5cab0c;
case 0x5cab0f:c.instructions+=4;goto B5cab0f;
case 0x5cab10:c.instructions+=3;goto B5cab10;
case 0x5cab11:c.instructions+=2;goto B5cab11;
case 0x5cab12:c.instructions+=1;goto B5cab12;
case 0x5cab15:goto L5cab15;
case 0x5cab1b:c.instructions+=1;goto B5cab1b;
case 0x5cab21:goto L5cab21;
case 0x5cab23:c.instructions+=1;goto B5cab23;
case 0x5cab28:goto L5cab28;
case 0x5cab2a:c.instructions+=5;goto B5cab2a;
case 0x5cab2d:c.instructions+=4;goto B5cab2d;
case 0x5cab30:c.instructions+=3;goto B5cab30;
case 0x5cab33:c.instructions+=2;goto B5cab33;
case 0x5cab35:c.instructions+=1;goto B5cab35;
case 0x5cab3b:goto L5cab3b;
case 0x5cab3e:c.instructions+=1;goto B5cab3e;
case 0x5cab44:goto L5cab44;
case 0x5cab46:c.instructions+=2;goto B5cab46;
case 0x5cab47:c.instructions+=1;goto B5cab47;
case 0x5cab4c:goto L5cab4c;
case 0x5cab51:c.instructions+=3;goto B5cab51;
case 0x5cab54:c.instructions+=2;goto B5cab54;
case 0x5cab57:c.instructions+=1;goto B5cab57;
case 0x5cab59:goto L5cab59;
case 0x5cab5b:c.instructions+=3;goto B5cab5b;
case 0x5cab5c:c.instructions+=2;goto B5cab5c;
case 0x5cab60:c.instructions+=1;goto B5cab60;
case 0x5cab65:goto L5cab65;
case 0x5cab66:c.instructions+=1;goto B5cab66;
case 0x5cab6b:goto L5cab6b;
case 0x5cab6c:c.instructions+=1;goto B5cab6c;
case 0x5cab71:goto L5cab71;
case 0x5cab77:c.instructions+=5;goto B5cab77;
case 0x5cab7d:c.instructions+=4;goto B5cab7d;
case 0x5cab7f:c.instructions+=3;goto B5cab7f;
case 0x5cab82:c.instructions+=2;goto B5cab82;
case 0x5cab84:c.instructions+=1;goto B5cab84;
case 0x5cab87:goto L5cab87;
case 0x5cab8a:c.instructions+=5;goto B5cab8a;
case 0x5cab8f:c.instructions+=4;goto B5cab8f;
case 0x5cab91:c.instructions+=3;goto B5cab91;
case 0x5cab92:c.instructions+=2;goto B5cab92;
case 0x5cab93:c.instructions+=1;goto B5cab93;
case 0x5cab99:goto L5cab99;
case 0x5cab9c:c.instructions+=6;goto B5cab9c;
case 0x5cab9e:c.instructions+=5;goto B5cab9e;
case 0x5cab9f:c.instructions+=4;goto B5cab9f;
case 0x5caba3:c.instructions+=3;goto B5caba3;
case 0x5caba4:c.instructions+=2;goto B5caba4;
case 0x5caba5:c.instructions+=1;goto B5caba5;
case 0x5cabab:goto L5cabab;
case 0x5cabad:c.instructions+=2;goto B5cabad;
case 0x5cabae:c.instructions+=1;goto B5cabae;
case 0x5cabb3:goto L5cabb3;
case 0x5cabb9:c.instructions+=4;goto B5cabb9;
case 0x5cabbb:c.instructions+=3;goto B5cabbb;
case 0x5cabbe:c.instructions+=2;goto B5cabbe;
case 0x5cabc0:c.instructions+=1;goto B5cabc0;
case 0x5cabc3:goto L5cabc3;
case 0x5cabc6:c.instructions+=3;goto B5cabc6;
case 0x5cabc8:c.instructions+=2;goto B5cabc8;
case 0x5cabc9:c.instructions+=1;goto B5cabc9;
case 0x5cabcf:goto L5cabcf;
case 0x5cabd5:c.instructions+=4;goto B5cabd5;
case 0x5cabdb:c.instructions+=3;goto B5cabdb;
case 0x5cabdd:c.instructions+=2;goto B5cabdd;
case 0x5cabdf:c.instructions+=1;goto B5cabdf;
case 0x5cabe2:goto L5cabe2;
case 0x5cabe5:c.instructions+=5;goto B5cabe5;
case 0x5cabea:c.instructions+=4;goto B5cabea;
case 0x5cabec:c.instructions+=3;goto B5cabec;
case 0x5cabed:c.instructions+=2;goto B5cabed;
case 0x5cabee:c.instructions+=1;goto B5cabee;
case 0x5cabf4:goto L5cabf4;
case 0x5cabf7:c.instructions+=6;goto B5cabf7;
case 0x5cabf9:c.instructions+=5;goto B5cabf9;
case 0x5cabfa:c.instructions+=4;goto B5cabfa;
case 0x5cabfe:c.instructions+=3;goto B5cabfe;
case 0x5cabff:c.instructions+=2;goto B5cabff;
case 0x5cac00:c.instructions+=1;goto B5cac00;
case 0x5cac06:goto L5cac06;
case 0x5cac07:c.instructions+=1;goto B5cac07;
case 0x5cac0c:goto L5cac0c;
case 0x5cac12:c.instructions+=4;goto B5cac12;
case 0x5cac14:c.instructions+=3;goto B5cac14;
case 0x5cac17:c.instructions+=2;goto B5cac17;
case 0x5cac19:c.instructions+=1;goto B5cac19;
case 0x5cac1c:goto L5cac1c;
case 0x5cac1f:c.instructions+=3;goto B5cac1f;
case 0x5cac21:c.instructions+=2;goto B5cac21;
case 0x5cac22:c.instructions+=1;goto B5cac22;
case 0x5cac28:goto L5cac28;
case 0x5cac2e:c.instructions+=1;goto B5cac2e;
case 0x5cac33:goto L5cac33;
case 0x5cac3a:c.instructions+=1;goto B5cac3a;
case 0x5cac3c:goto L5cac3c;
case 0x5cac43:c.instructions+=1;goto B5cac43;
case 0x5cac45:goto L5cac45;
case 0x5cac4a:goto L5cac4a;
case 0x5cac50:c.instructions+=4;goto B5cac50;
case 0x5cac56:c.instructions+=3;goto B5cac56;
case 0x5cac58:c.instructions+=2;goto B5cac58;
case 0x5cac5a:c.instructions+=1;goto B5cac5a;
case 0x5cac5d:goto L5cac5d;
case 0x5cac60:c.instructions+=5;goto B5cac60;
case 0x5cac65:c.instructions+=4;goto B5cac65;
case 0x5cac67:c.instructions+=3;goto B5cac67;
case 0x5cac68:c.instructions+=2;goto B5cac68;
case 0x5cac69:c.instructions+=1;goto B5cac69;
case 0x5cac6f:goto L5cac6f;
case 0x5cac72:c.instructions+=6;goto B5cac72;
case 0x5cac74:c.instructions+=5;goto B5cac74;
case 0x5cac75:c.instructions+=4;goto B5cac75;
case 0x5cac79:c.instructions+=3;goto B5cac79;
case 0x5cac7a:c.instructions+=2;goto B5cac7a;
case 0x5cac7b:c.instructions+=1;goto B5cac7b;
case 0x5cac81:goto L5cac81;
case 0x5cac87:c.instructions+=1;goto B5cac87;
case 0x5cac89:goto L5cac89;
case 0x5cac8b:c.instructions+=2;goto B5cac8b;
case 0x5cac8c:c.instructions+=1;goto B5cac8c;
case 0x5cac91:goto L5cac91;
case 0x5cac93:c.instructions+=2;goto B5cac93;
case 0x5cac94:c.instructions+=1;goto B5cac94;
case 0x5cac99:goto L5cac99;
case 0x5cac9b:c.instructions+=2;goto B5cac9b;
case 0x5cac9c:c.instructions+=1;goto B5cac9c;
case 0x5caca1:goto L5caca1;
case 0x5caca3:c.instructions+=3;goto B5caca3;
case 0x5caca4:c.instructions+=2;goto B5caca4;
case 0x5caca5:c.instructions+=1;goto B5caca5;
case 0x5cacaa:goto L5cacaa;
case 0x5cacad:goto L5cacad;
case 0x5cacb3:c.instructions+=3;goto B5cacb3;
case 0x5cacb5:c.instructions+=2;goto B5cacb5;
case 0x5cacb7:c.instructions+=1;goto B5cacb7;
case 0x5cacba:goto L5cacba;
case 0x5cacbd:c.instructions+=3;goto B5cacbd;
case 0x5cacbf:c.instructions+=2;goto B5cacbf;
case 0x5cacc0:c.instructions+=1;goto B5cacc0;
case 0x5cacc6:goto L5cacc6;
case 0x5caccc:goto L5caccc;
case 0x5cacd2:c.instructions+=1;goto B5cacd2;
case 0x5cacd8:goto L5cacd8;
case 0x5cacdf:c.instructions+=1;goto B5cacdf;
case 0x5cace5:goto L5cace5;
case 0x5cacea:c.instructions+=2;goto B5cacea;
case 0x5cacee:c.instructions+=1;goto B5cacee;
case 0x5cacf0:goto L5cacf0;
case 0x5cacf1:c.instructions+=1;goto B5cacf1;
case 0x5cacf6:goto L5cacf6;
case 0x5cacf8:c.instructions+=4;goto B5cacf8;
case 0x5cacfb:c.instructions+=3;goto B5cacfb;
case 0x5cacfe:c.instructions+=2;goto B5cacfe;
case 0x5cad00:c.instructions+=1;goto B5cad00;
case 0x5cad06:goto L5cad06;
case 0x5cad09:c.instructions+=2;goto B5cad09;
case 0x5cad0c:c.instructions+=1;goto B5cad0c;
case 0x5cad12:goto L5cad12;
case 0x5cad14:c.instructions+=2;goto B5cad14;
case 0x5cad15:c.instructions+=1;goto B5cad15;
case 0x5cad1a:goto L5cad1a;
case 0x5cad1f:c.instructions+=6;goto B5cad1f;
case 0x5cad21:c.instructions+=5;goto B5cad21;
case 0x5cad24:c.instructions+=4;goto B5cad24;
case 0x5cad25:c.instructions+=3;goto B5cad25;
case 0x5cad27:c.instructions+=2;goto B5cad27;
case 0x5cad28:c.instructions+=1;goto B5cad28;
case 0x5cad2e:goto L5cad2e;
case 0x5cad33:c.instructions+=5;goto B5cad33;
case 0x5cad35:c.instructions+=4;goto B5cad35;
case 0x5cad36:c.instructions+=3;goto B5cad36;
case 0x5cad38:c.instructions+=2;goto B5cad38;
case 0x5cad39:c.instructions+=1;goto B5cad39;
case 0x5cad3f:goto L5cad3f;
case 0x5cad40:c.instructions+=1;goto B5cad40;
case 0x5cad45:goto L5cad45;
case 0x5cad4a:c.instructions+=6;goto B5cad4a;
case 0x5cad4c:c.instructions+=5;goto B5cad4c;
case 0x5cad4f:c.instructions+=4;goto B5cad4f;
case 0x5cad51:c.instructions+=3;goto B5cad51;
case 0x5cad53:c.instructions+=2;goto B5cad53;
case 0x5cad54:c.instructions+=1;goto B5cad54;
case 0x5cad5a:goto L5cad5a;
case 0x5cad5f:c.instructions+=5;goto B5cad5f;
case 0x5cad61:c.instructions+=4;goto B5cad61;
case 0x5cad63:c.instructions+=3;goto B5cad63;
case 0x5cad65:c.instructions+=2;goto B5cad65;
case 0x5cad66:c.instructions+=1;goto B5cad66;
case 0x5cad6c:goto L5cad6c;
case 0x5cad71:goto L5cad71;
case 0x5cad76:goto L5cad76;
case 0x5cad7c:c.instructions+=1;goto B5cad7c;
case 0x5cad7e:goto L5cad7e;
case 0x5cad7f:c.instructions+=3;goto B5cad7f;
case 0x5cad80:c.instructions+=2;goto B5cad80;
case 0x5cad84:c.instructions+=1;goto B5cad84;
case 0x5cad89:goto L5cad89;
case 0x5cad8e:goto L5cad8e;
case 0x5cad94:c.instructions+=4;goto B5cad94;
case 0x5cad9a:c.instructions+=3;goto B5cad9a;
case 0x5cad9c:c.instructions+=2;goto B5cad9c;
case 0x5cad9e:c.instructions+=1;goto B5cad9e;
case 0x5cada1:goto L5cada1;
case 0x5cada4:c.instructions+=5;goto B5cada4;
case 0x5cada9:c.instructions+=4;goto B5cada9;
case 0x5cadab:c.instructions+=3;goto B5cadab;
case 0x5cadac:c.instructions+=2;goto B5cadac;
case 0x5cadad:c.instructions+=1;goto B5cadad;
case 0x5cadb3:goto L5cadb3;
case 0x5cadb6:c.instructions+=6;goto B5cadb6;
case 0x5cadb8:c.instructions+=5;goto B5cadb8;
case 0x5cadb9:c.instructions+=4;goto B5cadb9;
case 0x5cadbd:c.instructions+=3;goto B5cadbd;
case 0x5cadbe:c.instructions+=2;goto B5cadbe;
case 0x5cadbf:c.instructions+=1;goto B5cadbf;
case 0x5cadc5:goto L5cadc5;
case 0x5cadcb:c.instructions+=1;goto B5cadcb;
case 0x5cadcd:goto L5cadcd;
case 0x5cadcf:c.instructions+=2;goto B5cadcf;
case 0x5cadd0:c.instructions+=1;goto B5cadd0;
case 0x5cadd5:goto L5cadd5;
case 0x5cadd7:c.instructions+=3;goto B5cadd7;
case 0x5cadd8:c.instructions+=2;goto B5cadd8;
case 0x5cadd9:c.instructions+=1;goto B5cadd9;
case 0x5cadde:goto L5cadde;
case 0x5cade1:goto L5cade1;
case 0x5cade7:c.instructions+=3;goto B5cade7;
case 0x5cade9:c.instructions+=2;goto B5cade9;
case 0x5cadeb:c.instructions+=1;goto B5cadeb;
case 0x5cadee:goto L5cadee;
case 0x5cadf1:c.instructions+=3;goto B5cadf1;
case 0x5cadf3:c.instructions+=2;goto B5cadf3;
case 0x5cadf4:c.instructions+=1;goto B5cadf4;
case 0x5cadfa:goto L5cadfa;
case 0x5cadfe:c.instructions+=1;goto B5cadfe;
case 0x5cae04:goto L5cae04;
case 0x5cae05:c.instructions+=3;goto B5cae05;
case 0x5cae08:c.instructions+=2;goto B5cae08;
case 0x5cae0c:c.instructions+=1;goto B5cae0c;
case 0x5cae12:goto L5cae12;
case 0x5cae17:goto L5cae17;
case 0x5cae1c:c.instructions+=5;goto B5cae1c;
case 0x5cae1e:c.instructions+=4;goto B5cae1e;
case 0x5cae20:c.instructions+=3;goto B5cae20;
case 0x5cae22:c.instructions+=2;goto B5cae22;
case 0x5cae23:c.instructions+=1;goto B5cae23;
case 0x5cae29:goto L5cae29;
case 0x5cae2e:c.instructions+=5;goto B5cae2e;
case 0x5cae30:c.instructions+=4;goto B5cae30;
case 0x5cae32:c.instructions+=3;goto B5cae32;
case 0x5cae34:c.instructions+=2;goto B5cae34;
case 0x5cae35:c.instructions+=1;goto B5cae35;
case 0x5cae3b:goto L5cae3b;
case 0x5cae3d:c.instructions+=1;goto B5cae3d;
case 0x5cae42:goto L5cae42;
case 0x5cae44:c.instructions+=4;goto B5cae44;
case 0x5cae47:c.instructions+=3;goto B5cae47;
case 0x5cae4a:c.instructions+=2;goto B5cae4a;
case 0x5cae4c:c.instructions+=1;goto B5cae4c;
case 0x5cae52:goto L5cae52;
case 0x5cae54:c.instructions+=2;goto B5cae54;
case 0x5cae59:c.instructions+=1;goto B5cae59;
case 0x5cae5e:goto L5cae5e;
case 0x5cae61:c.instructions+=4;goto B5cae61;
case 0x5cae63:c.instructions+=3;goto B5cae63;
case 0x5cae64:c.instructions+=2;goto B5cae64;
case 0x5cae68:c.instructions+=1;goto B5cae68;
case 0x5cae6d:goto L5cae6d;
case 0x5cae6e:c.instructions+=1;goto B5cae6e;
case 0x5cae73:goto L5cae73;
case 0x5cae76:c.instructions+=1;goto B5cae76;
case 0x5cae7b:goto L5cae7b;
case 0x5cae81:c.instructions+=4;goto B5cae81;
case 0x5cae87:c.instructions+=3;goto B5cae87;
case 0x5cae89:c.instructions+=2;goto B5cae89;
case 0x5cae8b:c.instructions+=1;goto B5cae8b;
case 0x5cae8e:goto L5cae8e;
case 0x5cae91:c.instructions+=5;goto B5cae91;
case 0x5cae96:c.instructions+=4;goto B5cae96;
case 0x5cae98:c.instructions+=3;goto B5cae98;
case 0x5cae99:c.instructions+=2;goto B5cae99;
case 0x5cae9a:c.instructions+=1;goto B5cae9a;
case 0x5caea0:goto L5caea0;
case 0x5caea3:c.instructions+=6;goto B5caea3;
case 0x5caea5:c.instructions+=5;goto B5caea5;
case 0x5caea6:c.instructions+=4;goto B5caea6;
case 0x5caeaa:c.instructions+=3;goto B5caeaa;
case 0x5caeab:c.instructions+=2;goto B5caeab;
case 0x5caeac:c.instructions+=1;goto B5caeac;
case 0x5caeb2:goto L5caeb2;
case 0x5caeb3:c.instructions+=2;goto B5caeb3;
case 0x5caeb8:c.instructions+=1;goto B5caeb8;
case 0x5caebd:goto L5caebd;
case 0x5caebe:c.instructions+=2;goto B5caebe;
case 0x5caec3:c.instructions+=1;goto B5caec3;
case 0x5caec8:goto L5caec8;
case 0x5caece:c.instructions+=1;goto B5caece;
case 0x5caed0:goto L5caed0;
case 0x5caed1:c.instructions+=2;goto B5caed1;
case 0x5caed2:c.instructions+=1;goto B5caed2;
case 0x5caed7:goto L5caed7;
case 0x5caedc:c.instructions+=3;goto B5caedc;
case 0x5caedf:c.instructions+=2;goto B5caedf;
case 0x5caee1:c.instructions+=1;goto B5caee1;
case 0x5caee3:goto L5caee3;
case 0x5caee4:c.instructions+=2;goto B5caee4;
case 0x5caee5:c.instructions+=1;goto B5caee5;
case 0x5caeea:goto L5caeea;
case 0x5caeed:goto L5caeed;
case 0x5caef3:c.instructions+=3;goto B5caef3;
case 0x5caef5:c.instructions+=2;goto B5caef5;
case 0x5caef7:c.instructions+=1;goto B5caef7;
case 0x5caefa:goto L5caefa;
case 0x5caefd:c.instructions+=3;goto B5caefd;
case 0x5caeff:c.instructions+=2;goto B5caeff;
case 0x5caf00:c.instructions+=1;goto B5caf00;
case 0x5caf06:goto L5caf06;
case 0x5caf0c:c.instructions+=4;goto B5caf0c;
case 0x5caf12:c.instructions+=3;goto B5caf12;
case 0x5caf14:c.instructions+=2;goto B5caf14;
case 0x5caf16:c.instructions+=1;goto B5caf16;
case 0x5caf19:goto L5caf19;
case 0x5caf1c:c.instructions+=5;goto B5caf1c;
case 0x5caf21:c.instructions+=4;goto B5caf21;
case 0x5caf23:c.instructions+=3;goto B5caf23;
case 0x5caf24:c.instructions+=2;goto B5caf24;
case 0x5caf25:c.instructions+=1;goto B5caf25;
case 0x5caf2b:goto L5caf2b;
case 0x5caf2e:c.instructions+=6;goto B5caf2e;
case 0x5caf30:c.instructions+=5;goto B5caf30;
case 0x5caf31:c.instructions+=4;goto B5caf31;
case 0x5caf35:c.instructions+=3;goto B5caf35;
case 0x5caf36:c.instructions+=2;goto B5caf36;
case 0x5caf37:c.instructions+=1;goto B5caf37;
case 0x5caf3d:goto L5caf3d;
case 0x5caf43:c.instructions+=1;goto B5caf43;
case 0x5caf45:goto L5caf45;
case 0x5caf4b:c.instructions+=8;goto B5caf4b;
case 0x5caf4e:c.instructions+=7;goto B5caf4e;
case 0x5caf51:c.instructions+=6;goto B5caf51;
case 0x5caf57:c.instructions+=5;goto B5caf57;
case 0x5caf59:c.instructions+=4;goto B5caf59;
case 0x5caf5b:c.instructions+=3;goto B5caf5b;
case 0x5caf5c:c.instructions+=2;goto B5caf5c;
case 0x5caf5d:c.instructions+=1;goto B5caf5d;
case 0x5caf60:goto L5caf60;
case 0x5caf66:c.instructions+=7;goto B5caf66;
case 0x5caf68:c.instructions+=6;goto B5caf68;
case 0x5caf6b:c.instructions+=5;goto B5caf6b;
case 0x5caf6d:c.instructions+=4;goto B5caf6d;
case 0x5caf6f:c.instructions+=3;goto B5caf6f;
case 0x5caf71:c.instructions+=2;goto B5caf71;
case 0x5caf72:c.instructions+=1;goto B5caf72;
case 0x5caf77:goto L5caf77;
case 0x5caf7a:goto L5caf7a;
case 0x5caf80:c.instructions+=8;goto B5caf80;
case 0x5caf83:c.instructions+=7;goto B5caf83;
case 0x5caf86:c.instructions+=6;goto B5caf86;
case 0x5caf8c:c.instructions+=5;goto B5caf8c;
case 0x5caf8e:c.instructions+=4;goto B5caf8e;
case 0x5caf90:c.instructions+=3;goto B5caf90;
case 0x5caf91:c.instructions+=2;goto B5caf91;
case 0x5caf92:c.instructions+=1;goto B5caf92;
case 0x5caf95:goto L5caf95;
case 0x5caf9a:c.instructions+=2;goto B5caf9a;
case 0x5caf9c:c.instructions+=1;goto B5caf9c;
case 0x5caf9e:goto L5caf9e;
case 0x5cafa0:c.instructions+=6;goto B5cafa0;
case 0x5cafa3:c.instructions+=5;goto B5cafa3;
case 0x5cafa5:c.instructions+=4;goto B5cafa5;
case 0x5cafa7:c.instructions+=3;goto B5cafa7;
case 0x5cafa9:c.instructions+=2;goto B5cafa9;
case 0x5cafaa:c.instructions+=1;goto B5cafaa;
case 0x5cafaf:goto L5cafaf;
case 0x5cafb2:goto L5cafb2;
case 0x5cafb8:c.instructions+=3;goto B5cafb8;
case 0x5cafba:c.instructions+=2;goto B5cafba;
case 0x5cafbc:c.instructions+=1;goto B5cafbc;
case 0x5cafbf:goto L5cafbf;
case 0x5cafc2:c.instructions+=3;goto B5cafc2;
case 0x5cafc4:c.instructions+=2;goto B5cafc4;
case 0x5cafc5:c.instructions+=1;goto B5cafc5;
case 0x5cafcb:goto L5cafcb;
case 0x5cafd1:c.instructions+=9;goto B5cafd1;
case 0x5cafd7:c.instructions+=8;goto B5cafd7;
case 0x5cafda:c.instructions+=7;goto B5cafda;
case 0x5cafdd:c.instructions+=6;goto B5cafdd;
case 0x5cafe3:c.instructions+=5;goto B5cafe3;
case 0x5cafe5:c.instructions+=4;goto B5cafe5;
case 0x5cafe7:c.instructions+=3;goto B5cafe7;
case 0x5cafe8:c.instructions+=2;goto B5cafe8;
case 0x5cafe9:c.instructions+=1;goto B5cafe9;
case 0x5cafec:goto L5cafec;
case 0x5caff1:goto L5caff1;
case 0x5caff6:goto L5caff6;
case 0x5caffe:c.instructions+=1;goto B5caffe;
default:missing_instruction(c.pc);}
B5ca001:L5ca001:{c.instructions+=2;NFSU2_TR(0x5ca001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B5ca008:{NFSU2_TR(0x5ca008);
if(r1(R+518)){{goto L5ca368;}}
}
B5ca00e:L5ca00e:{c.instructions+=3;NFSU2_TR(0x5ca00e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ca014:{NFSU2_TR(0x5ca014);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ca016:{NFSU2_TR(0x5ca016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca368;}}
}
B5ca01c:L5ca01c:{c.instructions+=3;NFSU2_TR(0x5ca01c);
u8 U[13];
w4(U+0,u32(u32(u32(0x2220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5ca023:{NFSU2_TR(0x5ca023);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ca025:{NFSU2_TR(0x5ca025);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca380;}}
}
B5ca02b:L5ca02b:{c.instructions+=3;NFSU2_TR(0x5ca02b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ca032:{NFSU2_TR(0x5ca032);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ca034:{NFSU2_TR(0x5ca034);
if(r1(R+518)){{goto L5ca380;}}
}
B5ca03a:L5ca03a:{c.instructions+=3;NFSU2_TR(0x5ca03a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca03e:{NFSU2_TR(0x5ca03e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5ca041:{NFSU2_TR(0x5ca041);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ca07a;}}
}
B5ca043:L5ca043:{c.instructions+=1;NFSU2_TR(0x5ca043);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ca38cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca04a:L5ca04a:{c.instructions+=2;NFSU2_TR(0x5ca04a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7bfcd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ca052:{NFSU2_TR(0x5ca052);
{goto L5ca07a;}
}
B5ca054:L5ca054:{c.instructions+=2;NFSU2_TR(0x5ca054);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7bfce0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ca05c:{NFSU2_TR(0x5ca05c);
{goto L5ca07a;}
}
B5ca05e:L5ca05e:{c.instructions+=2;NFSU2_TR(0x5ca05e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7bfcc0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ca066:{NFSU2_TR(0x5ca066);
{goto L5ca07a;}
}
B5ca068:L5ca068:{c.instructions+=2;NFSU2_TR(0x5ca068);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7bfcb0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ca070:{NFSU2_TR(0x5ca070);
{goto L5ca07a;}
}
B5ca072:L5ca072:{c.instructions+=1;NFSU2_TR(0x5ca072);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x7bfca0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ca07a:L5ca07a:{c.instructions+=5;NFSU2_TR(0x5ca07a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2538ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca080:{NFSU2_TR(0x5ca080);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca082:{NFSU2_TR(0x5ca082);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca083:{NFSU2_TR(0x5ca083);
__builtin_memmove((R+4),(R+28),4);
}
B5ca085:{NFSU2_TR(0x5ca085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca08aull));
TAIL_STATIC(0x5c0070u,5c0);
}
B5ca08a:L5ca08a:{c.instructions+=2;NFSU2_TR(0x5ca08a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ca08c:{NFSU2_TR(0x5ca08c);
if(r1(R+518)){{goto L5ca1b1;}}
}
B5ca092:L5ca092:{c.instructions+=8;NFSU2_TR(0x5ca092);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca096:{NFSU2_TR(0x5ca096);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca09a:{NFSU2_TR(0x5ca09a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca09b:{NFSU2_TR(0x5ca09b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca09c:{NFSU2_TR(0x5ca09c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca09d:{NFSU2_TR(0x5ca09d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca0a1:{NFSU2_TR(0x5ca0a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0a2:{NFSU2_TR(0x5ca0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca0a7ull));
TAIL_STATIC(0x5bfe90u,5bf);
}
B5ca0a7:L5ca0a7:{c.instructions+=2;NFSU2_TR(0x5ca0a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ca0a9:{NFSU2_TR(0x5ca0a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca380;}}
}
B5ca0af:L5ca0af:{c.instructions+=7;NFSU2_TR(0x5ca0af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca0b3:{NFSU2_TR(0x5ca0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca0b7:{NFSU2_TR(0x5ca0b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5ca0ba:{NFSU2_TR(0x5ca0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ca0bd:{NFSU2_TR(0x5ca0bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ca0c3:{NFSU2_TR(0x5ca0c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca0c7:{NFSU2_TR(0x5ca0c7);
if(r1(R+518)){{goto L5ca134;}}
}
B5ca0c9:L5ca0c9:{c.instructions+=5;NFSU2_TR(0x5ca0c9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0ca:{NFSU2_TR(0x5ca0ca);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0cc:{NFSU2_TR(0x5ca0cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0cd:{NFSU2_TR(0x5ca0cd);
__builtin_memmove((R+4),(R+28),4);
}
B5ca0cf:{NFSU2_TR(0x5ca0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca0d4ull));
TAIL_STATIC(0x5bfff0u,5bf);
}
B5ca0d4:L5ca0d4:{c.instructions+=31;NFSU2_TR(0x5ca0d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca0d8:{NFSU2_TR(0x5ca0d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0d9:{NFSU2_TR(0x5ca0d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0db:{NFSU2_TR(0x5ca0db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0dd:{NFSU2_TR(0x5ca0dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca0e1:{NFSU2_TR(0x5ca0e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0e3:{NFSU2_TR(0x5ca0e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0e5:{NFSU2_TR(0x5ca0e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0e7:{NFSU2_TR(0x5ca0e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ca0ee:{NFSU2_TR(0x5ca0ee);
__builtin_memmove((R+0),(R+12),4);
}
B5ca0f0:{NFSU2_TR(0x5ca0f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca0f6:{NFSU2_TR(0x5ca0f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0f7:{NFSU2_TR(0x5ca0f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0f9:{NFSU2_TR(0x5ca0f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0fb:{NFSU2_TR(0x5ca0fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0fc:{NFSU2_TR(0x5ca0fc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca0fe:{NFSU2_TR(0x5ca0fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca100:{NFSU2_TR(0x5ca100);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca102:{NFSU2_TR(0x5ca102);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca104:{NFSU2_TR(0x5ca104);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca105:{NFSU2_TR(0x5ca105);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca107:{NFSU2_TR(0x5ca107);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca109:{NFSU2_TR(0x5ca109);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca10e:{NFSU2_TR(0x5ca10e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca110:{NFSU2_TR(0x5ca110);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca112:{NFSU2_TR(0x5ca112);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca114:{NFSU2_TR(0x5ca114);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca115:{NFSU2_TR(0x5ca115);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca117:{NFSU2_TR(0x5ca117);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca118:{NFSU2_TR(0x5ca118);
__builtin_memmove((R+4),(R+28),4);
}
B5ca11a:{NFSU2_TR(0x5ca11a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca11full));
TAIL_STATIC(0x5c8d20u,5c8);
}
B5ca11f:L5ca11f:{c.instructions+=6;NFSU2_TR(0x5ca11f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca120:{NFSU2_TR(0x5ca120);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca122:{NFSU2_TR(0x5ca122);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca123:{NFSU2_TR(0x5ca123);
__builtin_memmove((R+4),(R+28),4);
}
B5ca125:{NFSU2_TR(0x5ca125);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca129:{NFSU2_TR(0x5ca129);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca12eull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5ca12e:L5ca12e:{c.instructions+=2;NFSU2_TR(0x5ca12e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca132:{NFSU2_TR(0x5ca132);
{goto L5ca179;}
}
B5ca134:L5ca134:{c.instructions+=28;NFSU2_TR(0x5ca134);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca136:{NFSU2_TR(0x5ca136);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca13a:{NFSU2_TR(0x5ca13a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca13c:{NFSU2_TR(0x5ca13c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca13e:{NFSU2_TR(0x5ca13e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca140:{NFSU2_TR(0x5ca140);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca142:{NFSU2_TR(0x5ca142);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ca149:{NFSU2_TR(0x5ca149);
__builtin_memmove((R+0),(R+12),4);
}
B5ca14b:{NFSU2_TR(0x5ca14b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca151:{NFSU2_TR(0x5ca151);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca152:{NFSU2_TR(0x5ca152);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca154:{NFSU2_TR(0x5ca154);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca156:{NFSU2_TR(0x5ca156);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca157:{NFSU2_TR(0x5ca157);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca159:{NFSU2_TR(0x5ca159);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca15b:{NFSU2_TR(0x5ca15b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca15d:{NFSU2_TR(0x5ca15d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca15f:{NFSU2_TR(0x5ca15f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca160:{NFSU2_TR(0x5ca160);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca162:{NFSU2_TR(0x5ca162);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca164:{NFSU2_TR(0x5ca164);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca169:{NFSU2_TR(0x5ca169);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca16b:{NFSU2_TR(0x5ca16b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca16d:{NFSU2_TR(0x5ca16d);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca16f:{NFSU2_TR(0x5ca16f);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca171:{NFSU2_TR(0x5ca171);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca172:{NFSU2_TR(0x5ca172);
__builtin_memmove((R+4),(R+28),4);
}
B5ca174:{NFSU2_TR(0x5ca174);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca179ull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5ca179:L5ca179:{c.instructions+=2;NFSU2_TR(0x5ca179);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca17b:{NFSU2_TR(0x5ca17b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ca380;}}
}
B5ca181:L5ca181:{c.instructions+=14;NFSU2_TR(0x5ca181);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca185:{NFSU2_TR(0x5ca185);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca189:{NFSU2_TR(0x5ca189);
u8 U[12];
w4(U+0,u32(u32(u32(0xb01ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ca190:{NFSU2_TR(0x5ca190);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ca194:{NFSU2_TR(0x5ca194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca19a:{NFSU2_TR(0x5ca19a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca19e:{NFSU2_TR(0x5ca19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca19f:{NFSU2_TR(0x5ca19f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ca1a2:{NFSU2_TR(0x5ca1a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca1a3:{NFSU2_TR(0x5ca1a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ca1a4:{NFSU2_TR(0x5ca1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca1aa:{NFSU2_TR(0x5ca1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca1ab:{NFSU2_TR(0x5ca1ab);
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
B5ca1ae:{NFSU2_TR(0x5ca1ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca1b1:L5ca1b1:{c.instructions+=7;NFSU2_TR(0x5ca1b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca1b5:{NFSU2_TR(0x5ca1b5);
__builtin_memmove((R+8),(R+24),4);
}
B5ca1b7:{NFSU2_TR(0x5ca1b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5ca1ba:{NFSU2_TR(0x5ca1ba);
u8 U[16];
w4(U+0,u32(u32(u32(0x2554ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca1c1:{NFSU2_TR(0x5ca1c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ca1c3:{NFSU2_TR(0x5ca1c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca1c7:{NFSU2_TR(0x5ca1c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca25d;}}
}
B5ca1cd:L5ca1cd:{c.instructions+=30;NFSU2_TR(0x5ca1cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca1d1:{NFSU2_TR(0x5ca1d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1d2:{NFSU2_TR(0x5ca1d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1d4:{NFSU2_TR(0x5ca1d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1d6:{NFSU2_TR(0x5ca1d6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1d8:{NFSU2_TR(0x5ca1d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1da:{NFSU2_TR(0x5ca1da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1dc:{NFSU2_TR(0x5ca1dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ca1e3:{NFSU2_TR(0x5ca1e3);
__builtin_memmove((R+4),(R+12),4);
}
B5ca1e5:{NFSU2_TR(0x5ca1e5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ca1eb:{NFSU2_TR(0x5ca1eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1ec:{NFSU2_TR(0x5ca1ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1ee:{NFSU2_TR(0x5ca1ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1f0:{NFSU2_TR(0x5ca1f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1f1:{NFSU2_TR(0x5ca1f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1f3:{NFSU2_TR(0x5ca1f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1f5:{NFSU2_TR(0x5ca1f5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1f7:{NFSU2_TR(0x5ca1f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1f9:{NFSU2_TR(0x5ca1f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1fa:{NFSU2_TR(0x5ca1fa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1fc:{NFSU2_TR(0x5ca1fc);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca1fe:{NFSU2_TR(0x5ca1fe);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca203:{NFSU2_TR(0x5ca203);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca205:{NFSU2_TR(0x5ca205);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca207:{NFSU2_TR(0x5ca207);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca209:{NFSU2_TR(0x5ca209);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca20a:{NFSU2_TR(0x5ca20a);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca20c:{NFSU2_TR(0x5ca20c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca20d:{NFSU2_TR(0x5ca20d);
__builtin_memmove((R+4),(R+28),4);
}
B5ca20f:{NFSU2_TR(0x5ca20f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca214ull));
TAIL_STATIC(0x5c8d20u,5c8);
}
B5ca214:L5ca214:{c.instructions+=2;NFSU2_TR(0x5ca214);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca216:{NFSU2_TR(0x5ca216);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ca248;}}
}
B5ca218:L5ca218:{c.instructions+=11;NFSU2_TR(0x5ca218);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca21c:{NFSU2_TR(0x5ca21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5ca21f:{NFSU2_TR(0x5ca21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ca222:{NFSU2_TR(0x5ca222);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca226:{NFSU2_TR(0x5ca226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca22c:{NFSU2_TR(0x5ca22c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca230:{NFSU2_TR(0x5ca230);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca234:{NFSU2_TR(0x5ca234);
u8 U[12];
w4(U+0,u32(u32(u32(0xb01ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5ca23b:{NFSU2_TR(0x5ca23b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ca23e:{NFSU2_TR(0x5ca23e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca242:{NFSU2_TR(0x5ca242);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca248:L5ca248:{c.instructions+=5;NFSU2_TR(0x5ca248);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca249:{NFSU2_TR(0x5ca249);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca24b:{NFSU2_TR(0x5ca24b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca24c:{NFSU2_TR(0x5ca24c);
__builtin_memmove((R+4),(R+28),4);
}
B5ca24e:{NFSU2_TR(0x5ca24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca253ull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5ca253:L5ca253:{c.instructions+=6;NFSU2_TR(0x5ca253);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca254:{NFSU2_TR(0x5ca254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca255:{NFSU2_TR(0x5ca255);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ca256:{NFSU2_TR(0x5ca256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca257:{NFSU2_TR(0x5ca257);
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
B5ca25a:{NFSU2_TR(0x5ca25a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca25d:L5ca25d:{c.instructions+=6;NFSU2_TR(0x5ca25d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca261:{NFSU2_TR(0x5ca261);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca262:{NFSU2_TR(0x5ca262);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca263:{NFSU2_TR(0x5ca263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca264:{NFSU2_TR(0x5ca264);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca265:{NFSU2_TR(0x5ca265);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca26aull));
TAIL_STATIC(0x5bfe90u,5bf);
}
B5ca26a:L5ca26a:{c.instructions+=2;NFSU2_TR(0x5ca26a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ca26c:{NFSU2_TR(0x5ca26c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca248u);}goto L5ca248;}}
}
B5ca26e:L5ca26e:{c.instructions+=7;NFSU2_TR(0x5ca26e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca272:{NFSU2_TR(0x5ca272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5ca275:{NFSU2_TR(0x5ca275);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ca278:{NFSU2_TR(0x5ca278);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca27c:{NFSU2_TR(0x5ca27c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ca282:{NFSU2_TR(0x5ca282);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca286:{NFSU2_TR(0x5ca286);
if(r1(R+518)){{goto L5ca2e0;}}
}
B5ca288:L5ca288:{c.instructions+=5;NFSU2_TR(0x5ca288);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca289:{NFSU2_TR(0x5ca289);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca28b:{NFSU2_TR(0x5ca28b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca28c:{NFSU2_TR(0x5ca28c);
__builtin_memmove((R+4),(R+28),4);
}
B5ca28e:{NFSU2_TR(0x5ca28e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca293ull));
TAIL_STATIC(0x5bfff0u,5bf);
}
B5ca293:L5ca293:{c.instructions+=31;NFSU2_TR(0x5ca293);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca297:{NFSU2_TR(0x5ca297);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca298:{NFSU2_TR(0x5ca298);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca29a:{NFSU2_TR(0x5ca29a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca29c:{NFSU2_TR(0x5ca29c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca2a0:{NFSU2_TR(0x5ca2a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2a2:{NFSU2_TR(0x5ca2a2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2a4:{NFSU2_TR(0x5ca2a4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2a6:{NFSU2_TR(0x5ca2a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ca2ad:{NFSU2_TR(0x5ca2ad);
__builtin_memmove((R+0),(R+12),4);
}
B5ca2af:{NFSU2_TR(0x5ca2af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca2b5:{NFSU2_TR(0x5ca2b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2b6:{NFSU2_TR(0x5ca2b6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2b8:{NFSU2_TR(0x5ca2b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2ba:{NFSU2_TR(0x5ca2ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2bb:{NFSU2_TR(0x5ca2bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2bd:{NFSU2_TR(0x5ca2bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2bf:{NFSU2_TR(0x5ca2bf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2c1:{NFSU2_TR(0x5ca2c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2c3:{NFSU2_TR(0x5ca2c3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2c4:{NFSU2_TR(0x5ca2c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2c6:{NFSU2_TR(0x5ca2c6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2c8:{NFSU2_TR(0x5ca2c8);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2cd:{NFSU2_TR(0x5ca2cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2cf:{NFSU2_TR(0x5ca2cf);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2d1:{NFSU2_TR(0x5ca2d1);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2d3:{NFSU2_TR(0x5ca2d3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2d4:{NFSU2_TR(0x5ca2d4);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2d6:{NFSU2_TR(0x5ca2d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2d7:{NFSU2_TR(0x5ca2d7);
__builtin_memmove((R+4),(R+28),4);
}
B5ca2d9:{NFSU2_TR(0x5ca2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca2deull));
TAIL_STATIC(0x5c8d20u,5c8);
}
B5ca2de:L5ca2de:{c.instructions+=1;NFSU2_TR(0x5ca2de);
{goto L5ca325;}
}
B5ca2e0:L5ca2e0:{c.instructions+=28;NFSU2_TR(0x5ca2e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2e2:{NFSU2_TR(0x5ca2e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca2e6:{NFSU2_TR(0x5ca2e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2e8:{NFSU2_TR(0x5ca2e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2ea:{NFSU2_TR(0x5ca2ea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2ec:{NFSU2_TR(0x5ca2ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2ee:{NFSU2_TR(0x5ca2ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5ca2f5:{NFSU2_TR(0x5ca2f5);
__builtin_memmove((R+0),(R+12),4);
}
B5ca2f7:{NFSU2_TR(0x5ca2f7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x3e8ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca2fd:{NFSU2_TR(0x5ca2fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca2fe:{NFSU2_TR(0x5ca2fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca300:{NFSU2_TR(0x5ca300);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca302:{NFSU2_TR(0x5ca302);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca303:{NFSU2_TR(0x5ca303);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca305:{NFSU2_TR(0x5ca305);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca307:{NFSU2_TR(0x5ca307);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca309:{NFSU2_TR(0x5ca309);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca30b:{NFSU2_TR(0x5ca30b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca30c:{NFSU2_TR(0x5ca30c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca30e:{NFSU2_TR(0x5ca30e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca310:{NFSU2_TR(0x5ca310);
u8 U[4];
w4(U+0,u32(0x2710ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca315:{NFSU2_TR(0x5ca315);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca317:{NFSU2_TR(0x5ca317);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca319:{NFSU2_TR(0x5ca319);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca31b:{NFSU2_TR(0x5ca31b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca31d:{NFSU2_TR(0x5ca31d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca31e:{NFSU2_TR(0x5ca31e);
__builtin_memmove((R+4),(R+28),4);
}
B5ca320:{NFSU2_TR(0x5ca320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca325ull));
TAIL_STATIC(0x5c8ed0u,5c8);
}
B5ca325:L5ca325:{c.instructions+=2;NFSU2_TR(0x5ca325);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca327:{NFSU2_TR(0x5ca327);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ca353;}}
}
B5ca329:L5ca329:{c.instructions+=9;NFSU2_TR(0x5ca329);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca32d:{NFSU2_TR(0x5ca32d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca331:{NFSU2_TR(0x5ca331);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c00ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca337:{NFSU2_TR(0x5ca337);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca33b:{NFSU2_TR(0x5ca33b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca33f:{NFSU2_TR(0x5ca33f);
u8 U[12];
w4(U+0,u32(u32(u32(0xb01ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ca346:{NFSU2_TR(0x5ca346);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5ca349:{NFSU2_TR(0x5ca349);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca34d:{NFSU2_TR(0x5ca34d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca353:L5ca353:{c.instructions+=5;NFSU2_TR(0x5ca353);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca354:{NFSU2_TR(0x5ca354);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca356:{NFSU2_TR(0x5ca356);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca357:{NFSU2_TR(0x5ca357);
__builtin_memmove((R+4),(R+28),4);
}
B5ca359:{NFSU2_TR(0x5ca359);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca35eull));
TAIL_STATIC(0x5bfee0u,5bf);
}
B5ca35e:L5ca35e:{c.instructions+=6;NFSU2_TR(0x5ca35e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca35f:{NFSU2_TR(0x5ca35f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca360:{NFSU2_TR(0x5ca360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ca361:{NFSU2_TR(0x5ca361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca362:{NFSU2_TR(0x5ca362);
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
B5ca365:{NFSU2_TR(0x5ca365);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca368:L5ca368:{c.instructions+=2;NFSU2_TR(0x5ca368);
u8 U[4];
w4(U+0,u32(0x7a4028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca36d:{NFSU2_TR(0x5ca36d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca372ull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5ca372:L5ca372:{c.instructions+=3;NFSU2_TR(0x5ca372);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca373:{NFSU2_TR(0x5ca373);
u8 U[4];
w4(U+0,u32(0x7a4010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca378:{NFSU2_TR(0x5ca378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca37dull));
TAIL_STATIC(0x5bfc00u,5bf);
}
B5ca37d:L5ca37d:{c.instructions+=1;NFSU2_TR(0x5ca37d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5ca380:L5ca380:{c.instructions+=6;NFSU2_TR(0x5ca380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca381:{NFSU2_TR(0x5ca381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca382:{NFSU2_TR(0x5ca382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ca383:{NFSU2_TR(0x5ca383);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca384:{NFSU2_TR(0x5ca384);
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
B5ca387:{NFSU2_TR(0x5ca387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca3a0:L5ca3a0:{c.instructions+=7;NFSU2_TR(0x5ca3a0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3a1:{NFSU2_TR(0x5ca3a1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3a2:{NFSU2_TR(0x5ca3a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3a3:{NFSU2_TR(0x5ca3a3);
__builtin_memmove((R+20),(R+4),4);
}
B5ca3a5:{NFSU2_TR(0x5ca3a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3a6:{NFSU2_TR(0x5ca3a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2448ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca3ac:{NFSU2_TR(0x5ca3ac);
w4(R+24,u32(0x86ffb4ull));
}
B5ca3b1:L5ca3b1:{c.instructions+=2;NFSU2_TR(0x5ca3b1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ca3b4:{NFSU2_TR(0x5ca3b4);
if(r1(R+518)){{goto L5ca3cd;}}
}
B5ca3b6:L5ca3b6:{c.instructions+=3;NFSU2_TR(0x5ca3b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3b7:{NFSU2_TR(0x5ca3b7);
__builtin_memmove((R+4),(R+28),4);
}
B5ca3b9:{NFSU2_TR(0x5ca3b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca3beull));
TAIL_STATIC(0x5c0140u,5c0);
}
B5ca3be:L5ca3be:{c.instructions+=2;NFSU2_TR(0x5ca3be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x64ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca3c1:{NFSU2_TR(0x5ca3c1);
if(r1(R+518)){{goto L5ca3cd;}}
}
B5ca3c3:L5ca3c3:{c.instructions+=4;NFSU2_TR(0x5ca3c3);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3c5:{NFSU2_TR(0x5ca3c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3c6:{NFSU2_TR(0x5ca3c6);
__builtin_memmove((R+4),(R+28),4);
}
B5ca3c8:{NFSU2_TR(0x5ca3c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca3cdull));
TAIL_STATIC(0x5c00b0u,5c0);
}
B5ca3cd:L5ca3cd:{c.instructions+=3;NFSU2_TR(0x5ca3cd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ca3d0:{NFSU2_TR(0x5ca3d0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x86ffbcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x86ffbcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ca3d6:{NFSU2_TR(0x5ca3d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca3b1u);}goto L5ca3b1;}}
}
B5ca3d8:L5ca3d8:{c.instructions+=2;NFSU2_TR(0x5ca3d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24f8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca3de:{NFSU2_TR(0x5ca3de);
w4(R+12,u32(0x2ull));
}
B5ca3e3:L5ca3e3:{c.instructions+=1;NFSU2_TR(0x5ca3e3);
w4(R+28,u32(0x8ull));
}
B5ca3e8:L5ca3e8:{c.instructions+=3;NFSU2_TR(0x5ca3e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ca3ea:{NFSU2_TR(0x5ca3ea);
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
B5ca3ec:{NFSU2_TR(0x5ca3ec);
if(r1(R+518)){{goto L5ca3fa;}}
}
B5ca3ee:L5ca3ee:{c.instructions+=3;NFSU2_TR(0x5ca3ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ca3f0:{NFSU2_TR(0x5ca3f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca3f1:{NFSU2_TR(0x5ca3f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca3f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca3f4:L5ca3f4:{c.instructions+=1;NFSU2_TR(0x5ca3f4);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ca3fa:L5ca3fa:{c.instructions+=3;NFSU2_TR(0x5ca3fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ca3fd:{NFSU2_TR(0x5ca3fd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ca3fe:{NFSU2_TR(0x5ca3fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca3e8u);}goto L5ca3e8;}}
}
B5ca400:L5ca400:{c.instructions+=2;NFSU2_TR(0x5ca400);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5ca401:{NFSU2_TR(0x5ca401);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca3e3u);}goto L5ca3e3;}}
}
B5ca403:L5ca403:{c.instructions+=3;NFSU2_TR(0x5ca403);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2548ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca409:{NFSU2_TR(0x5ca409);
w4(R+12,u32(0x2ull));
}
B5ca40e:{NFSU2_TR(0x5ca40e);
__builtin_memmove((R+28),(R+28),4);
}
B5ca410:L5ca410:{c.instructions+=1;NFSU2_TR(0x5ca410);
w4(R+28,u32(0x8ull));
}
B5ca415:L5ca415:{c.instructions+=3;NFSU2_TR(0x5ca415);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ca417:{NFSU2_TR(0x5ca417);
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
B5ca419:{NFSU2_TR(0x5ca419);
if(r1(R+518)){{goto L5ca427;}}
}
B5ca41b:L5ca41b:{c.instructions+=3;NFSU2_TR(0x5ca41b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ca41d:{NFSU2_TR(0x5ca41d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca41e:{NFSU2_TR(0x5ca41e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca421ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca421:L5ca421:{c.instructions+=1;NFSU2_TR(0x5ca421);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ca427:L5ca427:{c.instructions+=3;NFSU2_TR(0x5ca427);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ca42a:{NFSU2_TR(0x5ca42a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ca42b:{NFSU2_TR(0x5ca42b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca415u);}goto L5ca415;}}
}
B5ca42d:L5ca42d:{c.instructions+=2;NFSU2_TR(0x5ca42d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5ca42e:{NFSU2_TR(0x5ca42e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca410u);}goto L5ca410;}}
}
B5ca430:L5ca430:{c.instructions+=3;NFSU2_TR(0x5ca430);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2598ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca436:{NFSU2_TR(0x5ca436);
w4(R+12,u32(0x2ull));
}
B5ca43b:{NFSU2_TR(0x5ca43b);
{goto L5ca440;}
}
B5ca440:L5ca440:{c.instructions+=1;NFSU2_TR(0x5ca440);
w4(R+28,u32(0x8ull));
}
B5ca445:L5ca445:{c.instructions+=3;NFSU2_TR(0x5ca445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ca447:{NFSU2_TR(0x5ca447);
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
B5ca449:{NFSU2_TR(0x5ca449);
if(r1(R+518)){{goto L5ca457;}}
}
B5ca44b:L5ca44b:{c.instructions+=3;NFSU2_TR(0x5ca44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ca44d:{NFSU2_TR(0x5ca44d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca44e:{NFSU2_TR(0x5ca44e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca451ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca451:L5ca451:{c.instructions+=1;NFSU2_TR(0x5ca451);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ca457:L5ca457:{c.instructions+=3;NFSU2_TR(0x5ca457);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ca45a:{NFSU2_TR(0x5ca45a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ca45b:{NFSU2_TR(0x5ca45b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca445u);}goto L5ca445;}}
}
B5ca45d:L5ca45d:{c.instructions+=2;NFSU2_TR(0x5ca45d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5ca45e:{NFSU2_TR(0x5ca45e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca440u);}goto L5ca440;}}
}
B5ca460:L5ca460:{c.instructions+=3;NFSU2_TR(0x5ca460);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24a8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca466:{NFSU2_TR(0x5ca466);
w4(R+12,u32(0x2ull));
}
B5ca46b:{NFSU2_TR(0x5ca46b);
{goto L5ca470;}
}
B5ca470:L5ca470:{c.instructions+=1;NFSU2_TR(0x5ca470);
w4(R+28,u32(0x8ull));
}
B5ca475:L5ca475:{c.instructions+=3;NFSU2_TR(0x5ca475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ca477:{NFSU2_TR(0x5ca477);
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
B5ca479:{NFSU2_TR(0x5ca479);
if(r1(R+518)){{goto L5ca487;}}
}
B5ca47b:L5ca47b:{c.instructions+=3;NFSU2_TR(0x5ca47b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ca47d:{NFSU2_TR(0x5ca47d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca47e:{NFSU2_TR(0x5ca47e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca481ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca481:L5ca481:{c.instructions+=1;NFSU2_TR(0x5ca481);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5ca487:L5ca487:{c.instructions+=3;NFSU2_TR(0x5ca487);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5ca48a:{NFSU2_TR(0x5ca48a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5ca48b:{NFSU2_TR(0x5ca48b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca475u);}goto L5ca475;}}
}
B5ca48d:L5ca48d:{c.instructions+=2;NFSU2_TR(0x5ca48d);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5ca48e:{NFSU2_TR(0x5ca48e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca470u);}goto L5ca470;}}
}
B5ca490:L5ca490:{c.instructions+=6;NFSU2_TR(0x5ca490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ca491:{NFSU2_TR(0x5ca491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca492:{NFSU2_TR(0x5ca492);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2224ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ca498:{NFSU2_TR(0x5ca498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ca499:{NFSU2_TR(0x5ca499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca49a:{NFSU2_TR(0x5ca49a);
TAIL_STATIC(0x5bfbb0u,5bf);
}
B5ca4a0:L5ca4a0:{c.instructions+=1;NFSU2_TR(0x5ca4a0);
TAIL_STATIC(0x5c01c0u,5c0);
}
B5ca4b0:L5ca4b0:{c.instructions+=4;NFSU2_TR(0x5ca4b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca4b1:{NFSU2_TR(0x5ca4b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ca4b4:{NFSU2_TR(0x5ca4b4);
w4(R+24,u32(0x2ull));
}
B5ca4b9:{NFSU2_TR(0x5ca4b9);
__builtin_memmove((R+16),(R+16),4);
}
B5ca4c0:L5ca4c0:{c.instructions+=1;NFSU2_TR(0x5ca4c0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ca4c2:L5ca4c2:{c.instructions+=6;NFSU2_TR(0x5ca4c2);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5ca4c6:{NFSU2_TR(0x5ca4c6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5ca4cc:{NFSU2_TR(0x5ca4cc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ca4cd:{NFSU2_TR(0x5ca4cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5ca4d0:{NFSU2_TR(0x5ca4d0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ca4d3:{NFSU2_TR(0x5ca4d3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca4c2u);}goto L5ca4c2;}}
}
B5ca4d5:L5ca4d5:{c.instructions+=3;NFSU2_TR(0x5ca4d5);
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5ca4d8:{NFSU2_TR(0x5ca4d8);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ca4d9:{NFSU2_TR(0x5ca4d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca4c0u);}goto L5ca4c0;}}
}
B5ca4db:L5ca4db:{c.instructions+=2;NFSU2_TR(0x5ca4db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca4dc:{NFSU2_TR(0x5ca4dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca4e0:L5ca4e0:{c.instructions+=15;NFSU2_TR(0x5ca4e0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ca4e3:{NFSU2_TR(0x5ca4e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca4e4:{NFSU2_TR(0x5ca4e4);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B5ca4e5:{NFSU2_TR(0x5ca4e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ca4e6:{NFSU2_TR(0x5ca4e6);
__builtin_memmove((R+12),(R+0),4);
}
B5ca4e8:{NFSU2_TR(0x5ca4e8);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B5ca4ed:{NFSU2_TR(0x5ca4ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca4ee:{NFSU2_TR(0x5ca4ee);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B5ca4ef:{NFSU2_TR(0x5ca4ef);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B5ca4f0:{NFSU2_TR(0x5ca4f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ca4f1:{NFSU2_TR(0x5ca4f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B5ca4f3:{NFSU2_TR(0x5ca4f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca4f7:{NFSU2_TR(0x5ca4f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca4fb:{NFSU2_TR(0x5ca4fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ca4fd:{NFSU2_TR(0x5ca4fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca506;}}
}
B5ca4ff:L5ca4ff:{c.instructions+=4;NFSU2_TR(0x5ca4ff);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5ca501:{NFSU2_TR(0x5ca501);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca502:{NFSU2_TR(0x5ca502);
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
B5ca505:{NFSU2_TR(0x5ca505);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca506:L5ca506:{c.instructions+=9;NFSU2_TR(0x5ca506);
w4(R+0,u32(0x1ull));
}
B5ca50b:{NFSU2_TR(0x5ca50b);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L5ca50b_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L5ca50b_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L5ca50b_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L5ca50b_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L5ca50b_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L5ca50b_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L5ca50b_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L5ca50b_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L5ca50b_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L5ca50b_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L5ca50b_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L5ca50b_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L5ca50b_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L5ca50b_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L5ca50b_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L5ca50b_65;}
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_35:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_37:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_39:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_41:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_43:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_45:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_47:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_49:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_51:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_53:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_55:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_57:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_59:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_61:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_63:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_65:;
{SPILL();c.pc=0x5ca50bu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca50b_67;
L5ca50b_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B5ca50d:{NFSU2_TR(0x5ca50d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca511:{NFSU2_TR(0x5ca511);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca515:{NFSU2_TR(0x5ca515);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca519:{NFSU2_TR(0x5ca519);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca51d:{NFSU2_TR(0x5ca51d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5ca520:{NFSU2_TR(0x5ca520);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ca523:{NFSU2_TR(0x5ca523);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ca560;}}
}
B5ca525:L5ca525:{c.instructions+=2;NFSU2_TR(0x5ca525);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ca580ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5ca52c:{NFSU2_TR(0x5ca52c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ca570ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca533:L5ca533:{c.instructions+=4;NFSU2_TR(0x5ca533);
s4(0x86ff20,u32(0x0ull));
}
B5ca53d:{NFSU2_TR(0x5ca53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca53e:{NFSU2_TR(0x5ca53e);
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
B5ca541:{NFSU2_TR(0x5ca541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca542:L5ca542:{c.instructions+=4;NFSU2_TR(0x5ca542);
s4(0x86ff20,u32(0x2ull));
}
B5ca54c:{NFSU2_TR(0x5ca54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca54d:{NFSU2_TR(0x5ca54d);
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
B5ca550:{NFSU2_TR(0x5ca550);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca551:L5ca551:{c.instructions+=4;NFSU2_TR(0x5ca551);
s4(0x86ff20,u32(0x3ull));
}
B5ca55b:{NFSU2_TR(0x5ca55b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca55c:{NFSU2_TR(0x5ca55c);
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
B5ca55f:{NFSU2_TR(0x5ca55f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca560:L5ca560:{c.instructions+=4;NFSU2_TR(0x5ca560);
s4(0x86ff20,u32(0x5ull));
}
B5ca56a:{NFSU2_TR(0x5ca56a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca56b:{NFSU2_TR(0x5ca56b);
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
B5ca56e:{NFSU2_TR(0x5ca56e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca590:L5ca590:{c.instructions+=15;NFSU2_TR(0x5ca590);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ca593:{NFSU2_TR(0x5ca593);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca594:{NFSU2_TR(0x5ca594);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B5ca595:{NFSU2_TR(0x5ca595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ca596:{NFSU2_TR(0x5ca596);
__builtin_memmove((R+12),(R+0),4);
}
B5ca598:{NFSU2_TR(0x5ca598);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0x200000ull))));
}
B5ca59d:{NFSU2_TR(0x5ca59d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca59e:{NFSU2_TR(0x5ca59e);
u8 U[48];
__builtin_memmove((R+640),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(U+0,u32(u32(r4(R+640))&u32(u32(0x4000ull))));
w1(R+525,u8((r4(U+0))!=(u32(0x0ull))));
w4(U+4,u32(u32(r4(R+640))&u32(u32(0x800ull))));
w1(R+523,u8((r4(U+4))!=(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+640))&u32(u32(0x400ull))));
w1(R+522,u8((r4(U+8))!=(u32(0x0ull))));
w4(U+12,u32(u32(r4(R+640))&u32(u32(0x200ull))));
w1(R+521,u8((r4(U+12))!=(u32(0x0ull))));
w4(U+16,u32(u32(r4(R+640))&u32(u32(0x100ull))));
w1(R+520,u8((r4(U+16))!=(u32(0x0ull))));
w4(U+20,u32(u32(r4(R+640))&u32(u32(0x80ull))));
w1(R+519,u8((r4(U+20))!=(u32(0x0ull))));
w4(U+24,u32(u32(r4(R+640))&u32(u32(0x40ull))));
w1(R+518,u8((r4(U+24))!=(u32(0x0ull))));
w4(U+28,u32(u32(r4(R+640))&u32(u32(0x10ull))));
w1(R+516,u8((r4(U+28))!=(u32(0x0ull))));
w4(U+32,u32(u32(r4(R+640))&u32(u32(0x4ull))));
w1(R+514,u8((r4(U+32))!=(u32(0x0ull))));
w4(U+36,u32(u32(r4(R+640))&u32(u32(0x1ull))));
w1(R+512,u8((r4(U+36))!=(u32(0x0ull))));
w4(U+40,u32(u32(r4(R+640))&u32(u32(0x200000ull))));
w1(R+532,u8((r4(U+40))!=(u32(0x0ull))));
w4(U+44,u32(u32(r4(R+640))&u32(u32(0x40000ull))));
w1(R+529,u8((r4(U+44))!=(u32(0x0ull))));
w1(R+531,u8(0x0ull));
w1(R+530,u8(0x0ull));
}
B5ca59f:{NFSU2_TR(0x5ca59f);
u8 U[170];
w1(U+0,u8(u32(r1(R+525))&u32(u8(0x1ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(u32(0x4000ull))*u32(r4(U+1))));
w1(U+9,u8(u32(r1(R+523))&u32(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(u32(0x800ull))*u32(r4(U+10))));
w4(U+18,u32(u32(r4(U+5))|u32(r4(U+14))));
w1(U+22,u8(u32(r1(R+522))&u32(u8(0x1ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(u32(0x400ull))*u32(r4(U+23))));
w4(U+31,u32(u32(r4(U+18))|u32(r4(U+27))));
w1(U+35,u8(u32(r1(R+521))&u32(u8(0x1ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(u32(0x200ull))*u32(r4(U+36))));
w4(U+44,u32(u32(r4(U+31))|u32(r4(U+40))));
w1(U+48,u8(u32(r1(R+520))&u32(u8(0x1ull))));
w4(U+49,u32(r1(U+48)));
w4(U+53,u32(u32(u32(0x100ull))*u32(r4(U+49))));
w4(U+57,u32(u32(r4(U+44))|u32(r4(U+53))));
w1(U+61,u8(u32(r1(R+519))&u32(u8(0x1ull))));
w4(U+62,u32(r1(U+61)));
w4(U+66,u32(u32(u32(0x80ull))*u32(r4(U+62))));
w4(U+70,u32(u32(r4(U+57))|u32(r4(U+66))));
w1(U+74,u8(u32(r1(R+518))&u32(u8(0x1ull))));
w4(U+75,u32(r1(U+74)));
w4(U+79,u32(u32(u32(0x40ull))*u32(r4(U+75))));
w4(U+83,u32(u32(r4(U+70))|u32(r4(U+79))));
w1(U+87,u8(u32(r1(R+516))&u32(u8(0x1ull))));
w4(U+88,u32(r1(U+87)));
w4(U+92,u32(u32(u32(0x10ull))*u32(r4(U+88))));
w4(U+96,u32(u32(r4(U+83))|u32(r4(U+92))));
w1(U+100,u8(u32(r1(R+514))&u32(u8(0x1ull))));
w4(U+101,u32(r1(U+100)));
w4(U+105,u32(u32(u32(0x4ull))*u32(r4(U+101))));
w4(U+109,u32(u32(r4(U+96))|u32(r4(U+105))));
w1(U+113,u8(u32(r1(R+512))&u32(u8(0x1ull))));
w4(U+114,u32(r1(U+113)));
w4(U+118,u32(u32(u32(0x1ull))*u32(r4(U+114))));
w4(R+640,u32(u32(r4(U+109))|u32(r4(U+118))));
w1(U+122,u8(u32(r1(R+532))&u32(u8(0x1ull))));
w4(U+123,u32(r1(U+122)));
w4(U+127,u32(u32(u32(0x200000ull))*u32(r4(U+123))));
w4(U+131,u32(u32(r4(R+640))|u32(r4(U+127))));
w1(U+135,u8(u32(r1(R+531))&u32(u8(0x1ull))));
w4(U+136,u32(r1(U+135)));
w4(U+140,u32(u32(u32(0x100000ull))*u32(r4(U+136))));
w4(U+144,u32(u32(r4(U+131))|u32(r4(U+140))));
w1(U+148,u8(u32(r1(R+530))&u32(u8(0x1ull))));
w4(U+149,u32(r1(U+148)));
w4(U+153,u32(u32(u32(0x80000ull))*u32(r4(U+149))));
w4(U+157,u32(u32(r4(U+144))|u32(r4(U+153))));
w1(U+161,u8(u32(r1(R+529))&u32(u8(0x1ull))));
w4(U+162,u32(r1(U+161)));
w4(U+166,u32(u32(u32(0x40000ull))*u32(r4(U+162))));
w4(R+640,u32(u32(r4(U+157))|u32(r4(U+166))));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(R+640));
}
B5ca5a0:{NFSU2_TR(0x5ca5a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ca5a1:{NFSU2_TR(0x5ca5a1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+12))));
}
B5ca5a3:{NFSU2_TR(0x5ca5a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca5a7:{NFSU2_TR(0x5ca5a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca5ab:{NFSU2_TR(0x5ca5ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ca5ad:{NFSU2_TR(0x5ca5ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca5b6;}}
}
B5ca5af:L5ca5af:{c.instructions+=4;NFSU2_TR(0x5ca5af);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5ca5b1:{NFSU2_TR(0x5ca5b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca5b2:{NFSU2_TR(0x5ca5b2);
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
B5ca5b5:{NFSU2_TR(0x5ca5b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca5b6:L5ca5b6:{c.instructions+=10;NFSU2_TR(0x5ca5b6);
w4(R+0,u32(0x1ull));
}
B5ca5bb:{NFSU2_TR(0x5ca5bb);
u8 U[32];
w4(U+0,u32(0x0ull));
w1(U+4,u8((r4(R+0))==(u32(0x0ull))));
if(r1(U+4)){goto L5ca5bb_35;}
w1(U+5,u8((r4(R+0))==(u32(0x1ull))));
if(r1(U+5)){goto L5ca5bb_37;}
w1(U+6,u8((r4(R+0))==(u32(0x2ull))));
if(r1(U+6)){goto L5ca5bb_39;}
w1(U+7,u8((r4(R+0))==(u32(0x3ull))));
if(r1(U+7)){goto L5ca5bb_41;}
w1(U+8,u8((r4(R+0))==(u32(0x4ull))));
if(r1(U+8)){goto L5ca5bb_43;}
w1(U+9,u8((r4(R+0))==(u32(0x5ull))));
if(r1(U+9)){goto L5ca5bb_45;}
w1(U+10,u8((r4(R+0))==(u32(0x6ull))));
if(r1(U+10)){goto L5ca5bb_47;}
w1(U+11,u8((r4(R+0))==(u32(0x7ull))));
if(r1(U+11)){goto L5ca5bb_49;}
w1(U+12,u8((r4(R+0))==(u32(0x9ull))));
if(r1(U+12)){goto L5ca5bb_51;}
w1(U+13,u8((r4(R+0))==(u32(0xaull))));
if(r1(U+13)){goto L5ca5bb_53;}
w1(U+14,u8((r4(R+0))==(u32(0xbull))));
if(r1(U+14)){goto L5ca5bb_55;}
w1(U+15,u8((r4(R+0))==(u32(0xdull))));
if(r1(U+15)){goto L5ca5bb_57;}
w1(U+16,u8((r4(R+0))==(u32(0xfull))));
if(r1(U+16)){goto L5ca5bb_59;}
w1(U+17,u8((r4(R+0))==(u32(0x80000002ull))));
if(r1(U+17)){goto L5ca5bb_61;}
w1(U+18,u8((r4(R+0))==(u32(0x80000003ull))));
if(r1(U+18)){goto L5ca5bb_63;}
w1(U+19,u8((r4(R+0))==(u32(0x80000004ull))));
if(r1(U+19)){goto L5ca5bb_65;}
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262189,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_35:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262190,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_37:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262191,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_39:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262192,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_41:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262193,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_43:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262194,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_45:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262195,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_47:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262196,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_49:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262197,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_51:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262198,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_53:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262199,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_55:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262200,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_57:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262201,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_59:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262202,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_61:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262203,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_63:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262204,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_65:;
{SPILL();c.pc=0x5ca5bbu;V r_=user_op(c,262205,{rv<4>((R+0))});SPILL();wv<4>((U+0),r_);}
goto L5ca5bb_67;
L5ca5bb_67:;
__builtin_memmove((R+0),gp(u32(r4(U+0))),4);
w4(U+20,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),gp(u32(r4(U+20))),4);
w4(U+24,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((R+8),gp(u32(r4(U+24))),4);
w4(U+28,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),gp(u32(r4(U+28))),4);
}
B5ca5bd:{NFSU2_TR(0x5ca5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca5c1:{NFSU2_TR(0x5ca5c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca5c5:{NFSU2_TR(0x5ca5c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ca5c9:{NFSU2_TR(0x5ca5c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca5cd:{NFSU2_TR(0x5ca5cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5ca5d0:{NFSU2_TR(0x5ca5d0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B5ca5d3:{NFSU2_TR(0x5ca5d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B5ca5d6:{NFSU2_TR(0x5ca5d6);
if(r1(R+512)){{goto L5ca600;}}
}
B5ca5d8:L5ca5d8:{c.instructions+=2;NFSU2_TR(0x5ca5d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca5db:{NFSU2_TR(0x5ca5db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5ca5f1;}}
}
B5ca5dd:L5ca5dd:{c.instructions+=2;NFSU2_TR(0x5ca5dd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca5e0:{NFSU2_TR(0x5ca5e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca600;}}
}
B5ca5e2:L5ca5e2:{c.instructions+=4;NFSU2_TR(0x5ca5e2);
s4(0x86ff20,u32(0x4ull));
}
B5ca5ec:{NFSU2_TR(0x5ca5ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca5ed:{NFSU2_TR(0x5ca5ed);
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
B5ca5f0:{NFSU2_TR(0x5ca5f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca5f1:L5ca5f1:{c.instructions+=4;NFSU2_TR(0x5ca5f1);
s4(0x86ff20,u32(0x0ull));
}
B5ca5fb:{NFSU2_TR(0x5ca5fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca5fc:{NFSU2_TR(0x5ca5fc);
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
B5ca5ff:{NFSU2_TR(0x5ca5ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca600:L5ca600:{c.instructions+=4;NFSU2_TR(0x5ca600);
s4(0x86ff20,u32(0x5ull));
}
B5ca60a:{NFSU2_TR(0x5ca60a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ca60b:{NFSU2_TR(0x5ca60b);
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
B5ca60e:{NFSU2_TR(0x5ca60e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca610:L5ca610:{c.instructions+=4;NFSU2_TR(0x5ca610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca614:{NFSU2_TR(0x5ca614);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca618:{NFSU2_TR(0x5ca618);
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
B5ca61a:{NFSU2_TR(0x5ca61a);
if(r1(R+518)){{goto L5ca62d;}}
}
B5ca61c:L5ca61c:{c.instructions+=2;NFSU2_TR(0x5ca61c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca620:{NFSU2_TR(0x5ca620);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca621:L5ca621:{c.instructions+=5;NFSU2_TR(0x5ca621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ca623:{NFSU2_TR(0x5ca623);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ca625:{NFSU2_TR(0x5ca625);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5ca628:{NFSU2_TR(0x5ca628);
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
B5ca62a:{NFSU2_TR(0x5ca62a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca621u);}goto L5ca621;}}
}
B5ca62c:L5ca62c:{c.instructions+=1;NFSU2_TR(0x5ca62c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca62d:L5ca62d:{c.instructions+=1;NFSU2_TR(0x5ca62d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca630:L5ca630:{c.instructions+=5;NFSU2_TR(0x5ca630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca634:{NFSU2_TR(0x5ca634);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ca638:{NFSU2_TR(0x5ca638);
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
B5ca63a:{NFSU2_TR(0x5ca63a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca63e:{NFSU2_TR(0x5ca63e);
if(r1(R+518)){{goto L5ca654;}}
}
B5ca640:L5ca640:{c.instructions+=1;NFSU2_TR(0x5ca640);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca641:L5ca641:{c.instructions+=2;NFSU2_TR(0x5ca641);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ca643:{NFSU2_TR(0x5ca643);
if(r1(R+518)){{goto L5ca649;}}
}
B5ca645:L5ca645:{c.instructions+=2;NFSU2_TR(0x5ca645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5ca647:{NFSU2_TR(0x5ca647);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ca649:L5ca649:{c.instructions+=4;NFSU2_TR(0x5ca649);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5ca64c:{NFSU2_TR(0x5ca64c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5ca64f:{NFSU2_TR(0x5ca64f);
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
B5ca651:{NFSU2_TR(0x5ca651);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca641u);}goto L5ca641;}}
}
B5ca653:L5ca653:{c.instructions+=1;NFSU2_TR(0x5ca653);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca654:L5ca654:{c.instructions+=1;NFSU2_TR(0x5ca654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca660:L5ca660:{c.instructions+=3;NFSU2_TR(0x5ca660);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca664:{NFSU2_TR(0x5ca664);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x13ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x13ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x13ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B5ca668:{NFSU2_TR(0x5ca668);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca687;}}
}
B5ca66a:L5ca66a:{c.instructions+=7;NFSU2_TR(0x5ca66a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca66e:{NFSU2_TR(0x5ca66e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca66f:{NFSU2_TR(0x5ca66f);
__builtin_memmove((R+4),gp(0x870764),4);
}
B5ca675:{NFSU2_TR(0x5ca675);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ca67b:{NFSU2_TR(0x5ca67b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca67c:{NFSU2_TR(0x5ca67c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x874c40ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x874c40ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ca682:{NFSU2_TR(0x5ca682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca687ull));
TAIL_STATIC(0x5c1080u,5c1);
}
B5ca687:L5ca687:{c.instructions+=2;NFSU2_TR(0x5ca687);
w4(R+0,u32(0x1ull));
}
B5ca68c:{NFSU2_TR(0x5ca68c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca690:L5ca690:{c.instructions+=2;NFSU2_TR(0x5ca690);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca691:{NFSU2_TR(0x5ca691);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ca693:L5ca693:{c.instructions+=3;NFSU2_TR(0x5ca693);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ca69a:{NFSU2_TR(0x5ca69a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ca69c:{NFSU2_TR(0x5ca69c);
if(r1(R+518)){{goto L5ca6fb;}}
}
B5ca69e:L5ca69e:{c.instructions+=1;NFSU2_TR(0x5ca69e);
w4(R+0,u32(0x874e74ull));
}
B5ca6a3:L5ca6a3:{c.instructions+=2;NFSU2_TR(0x5ca6a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ca6a6:{NFSU2_TR(0x5ca6a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca6ba;}}
}
B5ca6a8:L5ca6a8:{c.instructions+=4;NFSU2_TR(0x5ca6a8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B5ca6ab:{NFSU2_TR(0x5ca6ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xffffffedull))));
}
B5ca6ae:{NFSU2_TR(0x5ca6ae);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5ca6b1:{NFSU2_TR(0x5ca6b1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5ca6fb;}}
}
B5ca6b3:L5ca6b3:{c.instructions+=1;NFSU2_TR(0x5ca6b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5ca704ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ca6ba:L5ca6ba:{c.instructions+=3;NFSU2_TR(0x5ca6ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x370ull))));
}
B5ca6bf:{NFSU2_TR(0x5ca6bf);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x876314ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x876314ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca6c4:{NFSU2_TR(0x5ca6c4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca6a3u);}goto L5ca6a3;}}
}
B5ca6c6:L5ca6c6:{c.instructions+=3;NFSU2_TR(0x5ca6c6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca6c8:{NFSU2_TR(0x5ca6c8);
w4(R+0,u32(0x874e70ull));
}
B5ca6cd:{NFSU2_TR(0x5ca6cd);
__builtin_memmove((R+4),(R+4),4);
}
B5ca6d0:L5ca6d0:{c.instructions+=2;NFSU2_TR(0x5ca6d0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ca6d3:{NFSU2_TR(0x5ca6d3);
if(r1(R+518)){{goto L5ca6e4;}}
}
B5ca6d5:L5ca6d5:{c.instructions+=4;NFSU2_TR(0x5ca6d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x370ull))));
}
B5ca6da:{NFSU2_TR(0x5ca6da);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5ca6db:{NFSU2_TR(0x5ca6db);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x876310ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x876310ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca6e0:{NFSU2_TR(0x5ca6e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca6d0u);}goto L5ca6d0;}}
}
B5ca6e2:L5ca6e2:{c.instructions+=1;NFSU2_TR(0x5ca6e2);
{goto L5ca6fb;}
}
B5ca6e4:L5ca6e4:{c.instructions+=2;NFSU2_TR(0x5ca6e4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ca6e7:{NFSU2_TR(0x5ca6e7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ca6fb;}}
}
B5ca6e9:L5ca6e9:{c.instructions+=4;NFSU2_TR(0x5ca6e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x370ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ca6ef:{NFSU2_TR(0x5ca6ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca6f0:{NFSU2_TR(0x5ca6f0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x874c40ull))));
}
B5ca6f6:{NFSU2_TR(0x5ca6f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca6fbull));
TAIL_STATIC(0x5c14f0u,5c1);
}
B5ca6fb:L5ca6fb:{c.instructions+=3;NFSU2_TR(0x5ca6fb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ca6fc:{NFSU2_TR(0x5ca6fc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5ca6ff:{NFSU2_TR(0x5ca6ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca693u);}goto L5ca693;}}
}
B5ca701:L5ca701:{c.instructions+=2;NFSU2_TR(0x5ca701);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca702:{NFSU2_TR(0x5ca702);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca720:L5ca720:{c.instructions+=5;NFSU2_TR(0x5ca720);
__builtin_memmove((R+0),gp(0x87075c),1);
}
B5ca725:{NFSU2_TR(0x5ca725);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ca727:{NFSU2_TR(0x5ca727);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca728:{NFSU2_TR(0x5ca728);
__builtin_memmove((R+24),(R+4),4);
}
B5ca72a:{NFSU2_TR(0x5ca72a);
if(r1(R+518)){{goto L5ca761;}}
}
B5ca72c:L5ca72c:{c.instructions+=4;NFSU2_TR(0x5ca72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ca736:{NFSU2_TR(0x5ca736);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca738:{NFSU2_TR(0x5ca738);
s1(0x870768,u8(0x0ull));
}
B5ca73f:{NFSU2_TR(0x5ca73f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca744ull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5ca744:L5ca744:{c.instructions+=3;NFSU2_TR(0x5ca744);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca746:{NFSU2_TR(0x5ca746);
__builtin_memmove((R+4),(R+24),4);
}
B5ca748:{NFSU2_TR(0x5ca748);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca74dull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5ca74d:L5ca74d:{c.instructions+=3;NFSU2_TR(0x5ca74d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca74f:{NFSU2_TR(0x5ca74f);
__builtin_memmove((R+4),(R+24),4);
}
B5ca751:{NFSU2_TR(0x5ca751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca756ull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5ca756:L5ca756:{c.instructions+=3;NFSU2_TR(0x5ca756);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca758:{NFSU2_TR(0x5ca758);
__builtin_memmove((R+4),(R+24),4);
}
B5ca75a:{NFSU2_TR(0x5ca75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca75full));
TAIL_STATIC(0x5cf320u,5cf);
}
B5ca75f:L5ca75f:{c.instructions+=2;NFSU2_TR(0x5ca75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ca760:{NFSU2_TR(0x5ca760);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ca761:L5ca761:{c.instructions+=9;NFSU2_TR(0x5ca761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca767:{NFSU2_TR(0x5ca767);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca76d:{NFSU2_TR(0x5ca76d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ca76f:{NFSU2_TR(0x5ca76f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ca775:{NFSU2_TR(0x5ca775);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca776:{NFSU2_TR(0x5ca776);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca777:{NFSU2_TR(0x5ca777);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5ca77a:{NFSU2_TR(0x5ca77a);
w1(R+12,u8(0x80ull));
}
B5ca77c:{NFSU2_TR(0x5ca77c);
__builtin_memmove((R+16),(R+16),4);
}
B5ca780:L5ca780:{c.instructions+=2;NFSU2_TR(0x5ca780);
u8 U[14];
w4(U+0,u32(u32(u32(0x2254ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B5ca787:{NFSU2_TR(0x5ca787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca792;}}
}
B5ca789:L5ca789:{c.instructions+=2;NFSU2_TR(0x5ca789);
u8 U[14];
w4(U+0,u32(u32(u32(0x86fff0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w1(U+13,u8(u32(r1(U+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+13))==(u8(0x0ull))));
}
B5ca790:{NFSU2_TR(0x5ca790);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca79a;}}
}
B5ca792:L5ca792:{c.instructions+=3;NFSU2_TR(0x5ca792);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ca793:{NFSU2_TR(0x5ca793);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ca796:{NFSU2_TR(0x5ca796);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca780u);}goto L5ca780;}}
}
B5ca798:L5ca798:{c.instructions+=1;NFSU2_TR(0x5ca798);
{goto L5ca7a8;}
}
B5ca79a:L5ca79a:{c.instructions+=3;NFSU2_TR(0x5ca79a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca79b:{NFSU2_TR(0x5ca79b);
__builtin_memmove((R+4),(R+24),4);
}
B5ca79d:{NFSU2_TR(0x5ca79d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca7a2ull));
TAIL_STATIC(0x5b8460u,5b8);
}
B5ca7a2:L5ca7a2:{c.instructions+=1;NFSU2_TR(0x5ca7a2);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca7a8:L5ca7a8:{c.instructions+=3;NFSU2_TR(0x5ca7a8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ca7aa:{NFSU2_TR(0x5ca7aa);
w4(R+12,u32(0xffffull));
}
B5ca7af:{NFSU2_TR(0x5ca7af);
}
B5ca7b0:L5ca7b0:{c.instructions+=5;NFSU2_TR(0x5ca7b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca7b6:{NFSU2_TR(0x5ca7b6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca7b9:{NFSU2_TR(0x5ca7b9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5ca7bb:{NFSU2_TR(0x5ca7bb);
u8 U[18];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+12))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B5ca7c0:{NFSU2_TR(0x5ca7c0);
if(r1(R+518)){{goto L5ca7d0;}}
}
B5ca7c2:L5ca7c2:{c.instructions+=3;NFSU2_TR(0x5ca7c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca7c3:{NFSU2_TR(0x5ca7c3);
__builtin_memmove((R+4),(R+24),4);
}
B5ca7c5:{NFSU2_TR(0x5ca7c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca7caull));
TAIL_STATIC(0x5c1720u,5c1);
}
B5ca7ca:L5ca7ca:{c.instructions+=1;NFSU2_TR(0x5ca7ca);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca7d0:L5ca7d0:{c.instructions+=3;NFSU2_TR(0x5ca7d0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5ca7d1:{NFSU2_TR(0x5ca7d1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ca7d4:{NFSU2_TR(0x5ca7d4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ca7b0u);}goto L5ca7b0;}}
}
B5ca7d6:L5ca7d6:{c.instructions+=3;NFSU2_TR(0x5ca7d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca7dc:{NFSU2_TR(0x5ca7dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca7df:{NFSU2_TR(0x5ca7df);
if(r1(R+518)){{goto L5ca7f4;}}
}
B5ca7e1:L5ca7e1:{c.instructions+=2;NFSU2_TR(0x5ca7e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca7e4:{NFSU2_TR(0x5ca7e4);
if(r1(R+518)){{goto L5ca7f4;}}
}
B5ca7e6:L5ca7e6:{c.instructions+=2;NFSU2_TR(0x5ca7e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca7e9:{NFSU2_TR(0x5ca7e9);
if(r1(R+518)){{goto L5ca7f4;}}
}
B5ca7eb:L5ca7eb:{c.instructions+=2;NFSU2_TR(0x5ca7eb);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5ca7ee:{NFSU2_TR(0x5ca7ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5caa9b;}}
}
B5ca7f4:L5ca7f4:{c.instructions+=3;NFSU2_TR(0x5ca7f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ca7fb:{NFSU2_TR(0x5ca7fb);
w4(R+28,u32(0x3e8ull));
}
B5ca800:{NFSU2_TR(0x5ca800);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ca807;}}
}
B5ca802:L5ca802:{c.instructions+=1;NFSU2_TR(0x5ca802);
w4(R+28,u32(0x1f4ull));
}
B5ca807:L5ca807:{c.instructions+=6;NFSU2_TR(0x5ca807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ca80d:{NFSU2_TR(0x5ca80d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5ca813:{NFSU2_TR(0x5ca813);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5ca816:{NFSU2_TR(0x5ca816);
w4(R+0,u32(u32(r4(R+0))-u32(m4(0x86f8b0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca81c:{NFSU2_TR(0x5ca81c);
__builtin_memmove((R+4),(R+0),4);
}
B5ca81e:{NFSU2_TR(0x5ca81e);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca822;}}
}
B5ca820:L5ca820:{c.instructions+=1;NFSU2_TR(0x5ca820);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca822:L5ca822:{c.instructions+=2;NFSU2_TR(0x5ca822);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca824:{NFSU2_TR(0x5ca824);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca841;}}
}
B5ca826:L5ca826:{c.instructions+=8;NFSU2_TR(0x5ca826);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ca828:{NFSU2_TR(0x5ca828);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca82a:{NFSU2_TR(0x5ca82a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+8),(U+0),1);
}
B5ca82d:{NFSU2_TR(0x5ca82d);
__builtin_memmove((R+4),(R+24),4);
}
B5ca82f:{NFSU2_TR(0x5ca82f);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5ca833:{NFSU2_TR(0x5ca833);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca834:{NFSU2_TR(0x5ca834);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca836:{NFSU2_TR(0x5ca836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca83bull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca83b:L5ca83b:{c.instructions+=1;NFSU2_TR(0x5ca83b);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca841:L5ca841:{c.instructions+=7;NFSU2_TR(0x5ca841);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca847:{NFSU2_TR(0x5ca847);
__builtin_memmove((R+4),gp(0x86f8bc),4);
}
B5ca84d:{NFSU2_TR(0x5ca84d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca853:{NFSU2_TR(0x5ca853);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca857:{NFSU2_TR(0x5ca857);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca859:{NFSU2_TR(0x5ca859);
__builtin_memmove((R+4),(R+0),4);
}
B5ca85b:{NFSU2_TR(0x5ca85b);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca85f;}}
}
B5ca85d:L5ca85d:{c.instructions+=1;NFSU2_TR(0x5ca85d);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca85f:L5ca85f:{c.instructions+=2;NFSU2_TR(0x5ca85f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca861:{NFSU2_TR(0x5ca861);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca87e;}}
}
B5ca863:L5ca863:{c.instructions+=8;NFSU2_TR(0x5ca863);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca865:{NFSU2_TR(0x5ca865);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca867:{NFSU2_TR(0x5ca867);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca86a:{NFSU2_TR(0x5ca86a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca86e:{NFSU2_TR(0x5ca86e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca86f:{NFSU2_TR(0x5ca86f);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca871:{NFSU2_TR(0x5ca871);
__builtin_memmove((R+4),(R+24),4);
}
B5ca873:{NFSU2_TR(0x5ca873);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca878ull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca878:L5ca878:{c.instructions+=1;NFSU2_TR(0x5ca878);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca87e:L5ca87e:{c.instructions+=7;NFSU2_TR(0x5ca87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca884:{NFSU2_TR(0x5ca884);
__builtin_memmove((R+4),gp(0x86f8b4),4);
}
B5ca88a:{NFSU2_TR(0x5ca88a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca890:{NFSU2_TR(0x5ca890);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca894:{NFSU2_TR(0x5ca894);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca896:{NFSU2_TR(0x5ca896);
__builtin_memmove((R+4),(R+0),4);
}
B5ca898:{NFSU2_TR(0x5ca898);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca89c;}}
}
B5ca89a:L5ca89a:{c.instructions+=1;NFSU2_TR(0x5ca89a);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca89c:L5ca89c:{c.instructions+=2;NFSU2_TR(0x5ca89c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca89e:{NFSU2_TR(0x5ca89e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca8bb;}}
}
B5ca8a0:L5ca8a0:{c.instructions+=8;NFSU2_TR(0x5ca8a0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca8a2:{NFSU2_TR(0x5ca8a2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca8a4:{NFSU2_TR(0x5ca8a4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca8a7:{NFSU2_TR(0x5ca8a7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca8ab:{NFSU2_TR(0x5ca8ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca8ac:{NFSU2_TR(0x5ca8ac);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca8ae:{NFSU2_TR(0x5ca8ae);
__builtin_memmove((R+4),(R+24),4);
}
B5ca8b0:{NFSU2_TR(0x5ca8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca8b5ull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca8b5:L5ca8b5:{c.instructions+=1;NFSU2_TR(0x5ca8b5);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca8bb:L5ca8bb:{c.instructions+=7;NFSU2_TR(0x5ca8bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca8c1:{NFSU2_TR(0x5ca8c1);
__builtin_memmove((R+4),gp(0x86f8c0),4);
}
B5ca8c7:{NFSU2_TR(0x5ca8c7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca8cd:{NFSU2_TR(0x5ca8cd);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca8d1:{NFSU2_TR(0x5ca8d1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca8d3:{NFSU2_TR(0x5ca8d3);
__builtin_memmove((R+4),(R+0),4);
}
B5ca8d5:{NFSU2_TR(0x5ca8d5);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca8d9;}}
}
B5ca8d7:L5ca8d7:{c.instructions+=1;NFSU2_TR(0x5ca8d7);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca8d9:L5ca8d9:{c.instructions+=2;NFSU2_TR(0x5ca8d9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca8db:{NFSU2_TR(0x5ca8db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca8f8;}}
}
B5ca8dd:L5ca8dd:{c.instructions+=8;NFSU2_TR(0x5ca8dd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca8df:{NFSU2_TR(0x5ca8df);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca8e1:{NFSU2_TR(0x5ca8e1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca8e4:{NFSU2_TR(0x5ca8e4);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca8e8:{NFSU2_TR(0x5ca8e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca8e9:{NFSU2_TR(0x5ca8e9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca8eb:{NFSU2_TR(0x5ca8eb);
__builtin_memmove((R+4),(R+24),4);
}
B5ca8ed:{NFSU2_TR(0x5ca8ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca8f2ull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca8f2:L5ca8f2:{c.instructions+=1;NFSU2_TR(0x5ca8f2);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca8f8:L5ca8f8:{c.instructions+=7;NFSU2_TR(0x5ca8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca8fe:{NFSU2_TR(0x5ca8fe);
__builtin_memmove((R+4),gp(0x86f8b8),4);
}
B5ca904:{NFSU2_TR(0x5ca904);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca90a:{NFSU2_TR(0x5ca90a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca90e:{NFSU2_TR(0x5ca90e);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca910:{NFSU2_TR(0x5ca910);
__builtin_memmove((R+4),(R+0),4);
}
B5ca912:{NFSU2_TR(0x5ca912);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca916;}}
}
B5ca914:L5ca914:{c.instructions+=1;NFSU2_TR(0x5ca914);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca916:L5ca916:{c.instructions+=2;NFSU2_TR(0x5ca916);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca918:{NFSU2_TR(0x5ca918);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca935;}}
}
B5ca91a:L5ca91a:{c.instructions+=8;NFSU2_TR(0x5ca91a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca91c:{NFSU2_TR(0x5ca91c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca91e:{NFSU2_TR(0x5ca91e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca921:{NFSU2_TR(0x5ca921);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca925:{NFSU2_TR(0x5ca925);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca926:{NFSU2_TR(0x5ca926);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca928:{NFSU2_TR(0x5ca928);
__builtin_memmove((R+4),(R+24),4);
}
B5ca92a:{NFSU2_TR(0x5ca92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca92full));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca92f:L5ca92f:{c.instructions+=1;NFSU2_TR(0x5ca92f);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca935:L5ca935:{c.instructions+=7;NFSU2_TR(0x5ca935);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca93b:{NFSU2_TR(0x5ca93b);
__builtin_memmove((R+4),gp(0x86f8c4),4);
}
B5ca941:{NFSU2_TR(0x5ca941);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca947:{NFSU2_TR(0x5ca947);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca94b:{NFSU2_TR(0x5ca94b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca94d:{NFSU2_TR(0x5ca94d);
__builtin_memmove((R+4),(R+0),4);
}
B5ca94f:{NFSU2_TR(0x5ca94f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca953;}}
}
B5ca951:L5ca951:{c.instructions+=1;NFSU2_TR(0x5ca951);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca953:L5ca953:{c.instructions+=2;NFSU2_TR(0x5ca953);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca955:{NFSU2_TR(0x5ca955);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca972;}}
}
B5ca957:L5ca957:{c.instructions+=8;NFSU2_TR(0x5ca957);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca959:{NFSU2_TR(0x5ca959);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca95b:{NFSU2_TR(0x5ca95b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca95e:{NFSU2_TR(0x5ca95e);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca962:{NFSU2_TR(0x5ca962);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca963:{NFSU2_TR(0x5ca963);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca965:{NFSU2_TR(0x5ca965);
__builtin_memmove((R+4),(R+24),4);
}
B5ca967:{NFSU2_TR(0x5ca967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca96cull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca96c:L5ca96c:{c.instructions+=1;NFSU2_TR(0x5ca96c);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca972:L5ca972:{c.instructions+=7;NFSU2_TR(0x5ca972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca978:{NFSU2_TR(0x5ca978);
__builtin_memmove((R+4),gp(0x86f8c8),4);
}
B5ca97e:{NFSU2_TR(0x5ca97e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca984:{NFSU2_TR(0x5ca984);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca988:{NFSU2_TR(0x5ca988);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca98a:{NFSU2_TR(0x5ca98a);
__builtin_memmove((R+4),(R+0),4);
}
B5ca98c:{NFSU2_TR(0x5ca98c);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca990;}}
}
B5ca98e:L5ca98e:{c.instructions+=1;NFSU2_TR(0x5ca98e);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca990:L5ca990:{c.instructions+=2;NFSU2_TR(0x5ca990);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ca992:{NFSU2_TR(0x5ca992);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca9af;}}
}
B5ca994:L5ca994:{c.instructions+=8;NFSU2_TR(0x5ca994);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca996:{NFSU2_TR(0x5ca996);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca998:{NFSU2_TR(0x5ca998);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca99b:{NFSU2_TR(0x5ca99b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca99f:{NFSU2_TR(0x5ca99f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca9a0:{NFSU2_TR(0x5ca9a0);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca9a2:{NFSU2_TR(0x5ca9a2);
__builtin_memmove((R+4),(R+24),4);
}
B5ca9a4:{NFSU2_TR(0x5ca9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca9a9ull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca9a9:L5ca9a9:{c.instructions+=1;NFSU2_TR(0x5ca9a9);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca9af:L5ca9af:{c.instructions+=7;NFSU2_TR(0x5ca9af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca9b5:{NFSU2_TR(0x5ca9b5);
__builtin_memmove((R+4),gp(0x86f8cc),4);
}
B5ca9bb:{NFSU2_TR(0x5ca9bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca9c1:{NFSU2_TR(0x5ca9c1);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ca9c5:{NFSU2_TR(0x5ca9c5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B5ca9c7:{NFSU2_TR(0x5ca9c7);
__builtin_memmove((R+4),(R+0),4);
}
B5ca9c9:{NFSU2_TR(0x5ca9c9);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5ca9cd;}}
}
B5ca9cb:L5ca9cb:{c.instructions+=1;NFSU2_TR(0x5ca9cb);
w4(R+4,u32(0-u32(r4(R+4))));
}
B5ca9cd:L5ca9cd:{c.instructions+=2;NFSU2_TR(0x5ca9cd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+6)));
w4(U+10,u32(u32(r4(R+4))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ca9cf:{NFSU2_TR(0x5ca9cf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ca9ec;}}
}
B5ca9d1:L5ca9d1:{c.instructions+=8;NFSU2_TR(0x5ca9d1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ca9d3:{NFSU2_TR(0x5ca9d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5ca9d5:{NFSU2_TR(0x5ca9d5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B5ca9d8:{NFSU2_TR(0x5ca9d8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5ca9dc:{NFSU2_TR(0x5ca9dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca9dd:{NFSU2_TR(0x5ca9dd);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ca9df:{NFSU2_TR(0x5ca9df);
__builtin_memmove((R+4),(R+24),4);
}
B5ca9e1:{NFSU2_TR(0x5ca9e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ca9e6ull));
TAIL_STATIC(0x5b8250u,5b8);
}
B5ca9e6:L5ca9e6:{c.instructions+=1;NFSU2_TR(0x5ca9e6);
__builtin_memmove((R+8),gp(0x870760),4);
}
B5ca9ec:L5ca9ec:{c.instructions+=32;NFSU2_TR(0x5ca9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ca9f2:{NFSU2_TR(0x5ca9f2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ca9f8:{NFSU2_TR(0x5ca9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5ca9fb:{NFSU2_TR(0x5ca9fb);
__builtin_memmove(gp(0x86f8b0),(R+4),4);
}
B5caa01:{NFSU2_TR(0x5caa01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa07:{NFSU2_TR(0x5caa07);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5caa0d:{NFSU2_TR(0x5caa0d);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa11:{NFSU2_TR(0x5caa11);
__builtin_memmove(gp(0x86f8bc),(R+4),4);
}
B5caa17:{NFSU2_TR(0x5caa17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa1d:{NFSU2_TR(0x5caa1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5caa23:{NFSU2_TR(0x5caa23);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa27:{NFSU2_TR(0x5caa27);
__builtin_memmove(gp(0x86f8b4),(R+4),4);
}
B5caa2d:{NFSU2_TR(0x5caa2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa33:{NFSU2_TR(0x5caa33);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5caa39:{NFSU2_TR(0x5caa39);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa3d:{NFSU2_TR(0x5caa3d);
__builtin_memmove(gp(0x86f8c0),(R+4),4);
}
B5caa43:{NFSU2_TR(0x5caa43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa49:{NFSU2_TR(0x5caa49);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5caa4f:{NFSU2_TR(0x5caa4f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa53:{NFSU2_TR(0x5caa53);
__builtin_memmove(gp(0x86f8b8),(R+4),4);
}
B5caa59:{NFSU2_TR(0x5caa59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa5f:{NFSU2_TR(0x5caa5f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5caa65:{NFSU2_TR(0x5caa65);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa69:{NFSU2_TR(0x5caa69);
__builtin_memmove(gp(0x86f8c4),(R+4),4);
}
B5caa6f:{NFSU2_TR(0x5caa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa75:{NFSU2_TR(0x5caa75);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x110ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5caa7b:{NFSU2_TR(0x5caa7b);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa7f:{NFSU2_TR(0x5caa7f);
__builtin_memmove(gp(0x86f8c8),(R+4),4);
}
B5caa85:{NFSU2_TR(0x5caa85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caa8b:{NFSU2_TR(0x5caa8b);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x110ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5caa91:{NFSU2_TR(0x5caa91);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5caa95:{NFSU2_TR(0x5caa95);
__builtin_memmove(gp(0x86f8cc),(R+4),4);
}
B5caa9b:L5caa9b:{c.instructions+=4;NFSU2_TR(0x5caa9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5caa9c:{NFSU2_TR(0x5caa9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5caa9d:{NFSU2_TR(0x5caa9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5caa9e:{NFSU2_TR(0x5caa9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5caaa0:L5caaa0:{c.instructions+=5;NFSU2_TR(0x5caaa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caaa1:{NFSU2_TR(0x5caaa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5caaa3:{NFSU2_TR(0x5caaa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caaa6:{NFSU2_TR(0x5caaa6);
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
B5caaa8:{NFSU2_TR(0x5caaa8);
if(r1(R+518)){{goto L5caac6;}}
}
B5caaaa:L5caaaa:{c.instructions+=3;NFSU2_TR(0x5caaaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caaab:{NFSU2_TR(0x5caaab);
w4(R+4,u32(0x8763b0ull));
}
B5caab0:{NFSU2_TR(0x5caab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caab5ull));
TAIL_STATIC(0x479130u,479);
}
B5caab5:L5caab5:{c.instructions+=5;NFSU2_TR(0x5caab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5caab7:{NFSU2_TR(0x5caab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5caabe:{NFSU2_TR(0x5caabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5caac1:{NFSU2_TR(0x5caac1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5caac3:{NFSU2_TR(0x5caac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5caac6:L5caac6:{c.instructions+=2;NFSU2_TR(0x5caac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5caac7:{NFSU2_TR(0x5caac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5caad0:L5caad0:{c.instructions+=13;NFSU2_TR(0x5caad0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caad1:{NFSU2_TR(0x5caad1);
__builtin_memmove((R+20),(R+16),4);
}
B5caad3:{NFSU2_TR(0x5caad3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5caad6:{NFSU2_TR(0x5caad6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x734ull))));
}
B5caadc:{NFSU2_TR(0x5caadc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caadd:{NFSU2_TR(0x5caadd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caade:{NFSU2_TR(0x5caade);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5caae2:{NFSU2_TR(0x5caae2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caae3:{NFSU2_TR(0x5caae3);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5caae5:{NFSU2_TR(0x5caae5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caae6:{NFSU2_TR(0x5caae6);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5caaec:{NFSU2_TR(0x5caaec);
u8 U[8];
w4(U+0,u32(u32(u32(0x734ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5caaf3:{NFSU2_TR(0x5caaf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caaf8ull));
TAIL_STATIC(0x5b9c20u,5b9);
}
B5caaf8:L5caaf8:{c.instructions+=10;NFSU2_TR(0x5caaf8);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5caafe:{NFSU2_TR(0x5caafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cab01:{NFSU2_TR(0x5cab01);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cab04:{NFSU2_TR(0x5cab04);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x484ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cab0a:{NFSU2_TR(0x5cab0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cab0c:{NFSU2_TR(0x5cab0c);
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
B5cab0f:{NFSU2_TR(0x5cab0f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab10:{NFSU2_TR(0x5cab10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab11:{NFSU2_TR(0x5cab11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab12:{NFSU2_TR(0x5cab12);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cab15:L5cab15:{c.instructions+=2;NFSU2_TR(0x5cab15);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cd4),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cab1b:{NFSU2_TR(0x5cab1b);
if(r1(R+518)){{goto L5caccc;}}
}
B5cab21:L5cab21:{c.instructions+=2;NFSU2_TR(0x5cab21);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab23:{NFSU2_TR(0x5cab23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab28ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cab28:L5cab28:{c.instructions+=6;NFSU2_TR(0x5cab28);
__builtin_memmove((R+24),(R+0),4);
}
B5cab2a:{NFSU2_TR(0x5cab2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5cab2d:{NFSU2_TR(0x5cab2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cab30:{NFSU2_TR(0x5cab30);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cab33:{NFSU2_TR(0x5cab33);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+4))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+4),r1(U+3)));
w1(U+4,u8(u32(r1(R+4))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5cab35:{NFSU2_TR(0x5cab35);
if(r1(R+518)){TAIL_STATIC(0x5cbaebu,5cb);}
}
B5cab3b:L5cab3b:{c.instructions+=2;NFSU2_TR(0x5cab3b);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5cab3e:{NFSU2_TR(0x5cab3e);
if(r1(R+518)){TAIL_STATIC(0x5cbaebu,5cb);}
}
B5cab44:L5cab44:{c.instructions+=3;NFSU2_TR(0x5cab44);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab46:{NFSU2_TR(0x5cab46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab47:{NFSU2_TR(0x5cab47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab4cull));
TAIL_STATIC(0x5ba3c0u,5ba);
}
B5cab4c:L5cab4c:{c.instructions+=4;NFSU2_TR(0x5cab4c);
__builtin_memmove((R+0),gp(0x870cd4),4);
}
B5cab51:{NFSU2_TR(0x5cab51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cab54:{NFSU2_TR(0x5cab54);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cab57:{NFSU2_TR(0x5cab57);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5cabcf;}}
}
B5cab59:L5cab59:{c.instructions+=4;NFSU2_TR(0x5cab59);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab5b:{NFSU2_TR(0x5cab5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab5c:{NFSU2_TR(0x5cab5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cab60:{NFSU2_TR(0x5cab60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab65ull));
TAIL_STATIC(0x5d6ad0u,5d6);
}
B5cab65:L5cab65:{c.instructions+=2;NFSU2_TR(0x5cab65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab66:{NFSU2_TR(0x5cab66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab6bull));
TAIL_STATIC(0x566400u,566);
}
B5cab6b:L5cab6b:{c.instructions+=2;NFSU2_TR(0x5cab6b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab6c:{NFSU2_TR(0x5cab6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab71ull));
TAIL_STATIC(0x631250u,631);
}
B5cab71:L5cab71:{c.instructions+=6;NFSU2_TR(0x5cab71);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cab77:{NFSU2_TR(0x5cab77);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cab7d:{NFSU2_TR(0x5cab7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cab7f:{NFSU2_TR(0x5cab7f);
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
B5cab82:{NFSU2_TR(0x5cab82);
__builtin_memmove((R+28),(R+4),4);
}
B5cab84:{NFSU2_TR(0x5cab84);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab87ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cab87:L5cab87:{c.instructions+=6;NFSU2_TR(0x5cab87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cab8a:{NFSU2_TR(0x5cab8a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cab8f:{NFSU2_TR(0x5cab8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cab91:{NFSU2_TR(0x5cab91);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab92:{NFSU2_TR(0x5cab92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab93:{NFSU2_TR(0x5cab93);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cab99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cab99:L5cab99:{c.instructions+=7;NFSU2_TR(0x5cab99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cab9c:{NFSU2_TR(0x5cab9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cab9e:{NFSU2_TR(0x5cab9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cab9f:{NFSU2_TR(0x5cab9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5caba3:{NFSU2_TR(0x5caba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caba4:{NFSU2_TR(0x5caba4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caba5:{NFSU2_TR(0x5caba5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cababull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cabab:L5cabab:{c.instructions+=3;NFSU2_TR(0x5cabab);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabad:{NFSU2_TR(0x5cabad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabae:{NFSU2_TR(0x5cabae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cabb3ull));
TAIL_STATIC(0x630de0u,630);
}
B5cabb3:L5cabb3:{c.instructions+=5;NFSU2_TR(0x5cabb3);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cabb9:{NFSU2_TR(0x5cabb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cabbb:{NFSU2_TR(0x5cabbb);
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
B5cabbe:{NFSU2_TR(0x5cabbe);
__builtin_memmove((R+28),(R+4),4);
}
B5cabc0:{NFSU2_TR(0x5cabc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cabc3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cabc3:L5cabc3:{c.instructions+=4;NFSU2_TR(0x5cabc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cabc6:{NFSU2_TR(0x5cabc6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cabc8:{NFSU2_TR(0x5cabc8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabc9:{NFSU2_TR(0x5cabc9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cabcfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cabcf:L5cabcf:{c.instructions+=5;NFSU2_TR(0x5cabcf);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cabd5:{NFSU2_TR(0x5cabd5);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cabdb:{NFSU2_TR(0x5cabdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cabdd:{NFSU2_TR(0x5cabdd);
__builtin_memmove((R+28),(R+4),4);
}
B5cabdf:{NFSU2_TR(0x5cabdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cabe2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cabe2:L5cabe2:{c.instructions+=6;NFSU2_TR(0x5cabe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cabe5:{NFSU2_TR(0x5cabe5);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cabea:{NFSU2_TR(0x5cabea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cabec:{NFSU2_TR(0x5cabec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabed:{NFSU2_TR(0x5cabed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabee:{NFSU2_TR(0x5cabee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cabf4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cabf4:L5cabf4:{c.instructions+=7;NFSU2_TR(0x5cabf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cabf7:{NFSU2_TR(0x5cabf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cabf9:{NFSU2_TR(0x5cabf9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabfa:{NFSU2_TR(0x5cabfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cabfe:{NFSU2_TR(0x5cabfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cabff:{NFSU2_TR(0x5cabff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac00:{NFSU2_TR(0x5cac00);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac06ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cac06:L5cac06:{c.instructions+=2;NFSU2_TR(0x5cac06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac07:{NFSU2_TR(0x5cac07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac0cull));
TAIL_STATIC(0x615490u,615);
}
B5cac0c:L5cac0c:{c.instructions+=5;NFSU2_TR(0x5cac0c);
__builtin_memmove((R+4),gp(0x86eb28),4);
}
B5cac12:{NFSU2_TR(0x5cac12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cac14:{NFSU2_TR(0x5cac14);
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
B5cac17:{NFSU2_TR(0x5cac17);
__builtin_memmove((R+28),(R+4),4);
}
B5cac19:{NFSU2_TR(0x5cac19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cac1c:L5cac1c:{c.instructions+=4;NFSU2_TR(0x5cac1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cac1f:{NFSU2_TR(0x5cac1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cac21:{NFSU2_TR(0x5cac21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac22:{NFSU2_TR(0x5cac22);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac28ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cac28:L5cac28:{c.instructions+=2;NFSU2_TR(0x5cac28);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cac2e:{NFSU2_TR(0x5cac2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac33ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cac33:L5cac33:{c.instructions+=2;NFSU2_TR(0x5cac33);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cac3a:{NFSU2_TR(0x5cac3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cac4a;}}
}
B5cac3c:L5cac3c:{c.instructions+=2;NFSU2_TR(0x5cac3c);
u8 U[14];
__builtin_memmove((U+6),gp(0x870cd4),4);
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
B5cac43:{NFSU2_TR(0x5cac43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cac4a;}}
}
B5cac45:L5cac45:{c.instructions+=1;NFSU2_TR(0x5cac45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac4aull));
TAIL_STATIC(0x5c7e40u,5c7);
}
B5cac4a:L5cac4a:{c.instructions+=5;NFSU2_TR(0x5cac4a);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cac50:{NFSU2_TR(0x5cac50);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cac56:{NFSU2_TR(0x5cac56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cac58:{NFSU2_TR(0x5cac58);
__builtin_memmove((R+28),(R+4),4);
}
B5cac5a:{NFSU2_TR(0x5cac5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cac5d:L5cac5d:{c.instructions+=6;NFSU2_TR(0x5cac5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cac60:{NFSU2_TR(0x5cac60);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cac65:{NFSU2_TR(0x5cac65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cac67:{NFSU2_TR(0x5cac67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac68:{NFSU2_TR(0x5cac68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac69:{NFSU2_TR(0x5cac69);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cac6f:L5cac6f:{c.instructions+=7;NFSU2_TR(0x5cac6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cac72:{NFSU2_TR(0x5cac72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cac74:{NFSU2_TR(0x5cac74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac75:{NFSU2_TR(0x5cac75);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cac79:{NFSU2_TR(0x5cac79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac7a:{NFSU2_TR(0x5cac7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac7b:{NFSU2_TR(0x5cac7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cac81:L5cac81:{c.instructions+=2;NFSU2_TR(0x5cac81);
u8 U[14];
__builtin_memmove((U+6),gp(0x870ce4),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cac87:{NFSU2_TR(0x5cac87);
if(r1(R+518)){{goto L5cacad;}}
}
B5cac89:L5cac89:{c.instructions+=3;NFSU2_TR(0x5cac89);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac8b:{NFSU2_TR(0x5cac8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac8c:{NFSU2_TR(0x5cac8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac91ull));
TAIL_STATIC(0x491860u,491);
}
B5cac91:L5cac91:{c.instructions+=3;NFSU2_TR(0x5cac91);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac93:{NFSU2_TR(0x5cac93);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac94:{NFSU2_TR(0x5cac94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cac99ull));
TAIL_STATIC(0x61ae90u,61a);
}
B5cac99:L5cac99:{c.instructions+=3;NFSU2_TR(0x5cac99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac9b:{NFSU2_TR(0x5cac9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cac9c:{NFSU2_TR(0x5cac9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caca1ull));
TAIL_STATIC(0x61ace0u,61a);
}
B5caca1:L5caca1:{c.instructions+=4;NFSU2_TR(0x5caca1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caca3:{NFSU2_TR(0x5caca3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caca4:{NFSU2_TR(0x5caca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caca5:{NFSU2_TR(0x5caca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cacaaull));
TAIL_STATIC(0x494270u,494);
}
B5cacaa:L5cacaa:{c.instructions+=1;NFSU2_TR(0x5cacaa);
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
B5cacad:L5cacad:{c.instructions+=4;NFSU2_TR(0x5cacad);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cacb3:{NFSU2_TR(0x5cacb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cacb5:{NFSU2_TR(0x5cacb5);
__builtin_memmove((R+24),(R+4),4);
}
B5cacb7:{NFSU2_TR(0x5cacb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cacbaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cacba:L5cacba:{c.instructions+=4;NFSU2_TR(0x5cacba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cacbd:{NFSU2_TR(0x5cacbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cacbf:{NFSU2_TR(0x5cacbf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cacc0:{NFSU2_TR(0x5cacc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cacc6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cacc6:L5cacc6:{c.instructions+=1;NFSU2_TR(0x5cacc6);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5caccc:L5caccc:{c.instructions+=2;NFSU2_TR(0x5caccc);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cb8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cacd2:{NFSU2_TR(0x5cacd2);
if(r1(R+518)){{goto L5cae12;}}
}
B5cacd8:L5cacd8:{c.instructions+=2;NFSU2_TR(0x5cacd8);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cacdf:{NFSU2_TR(0x5cacdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5cae12;}}
}
B5cace5:L5cace5:{c.instructions+=3;NFSU2_TR(0x5cace5);
w4(R+28,u32(0x10ull));
}
B5cacea:{NFSU2_TR(0x5cacea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cacee:{NFSU2_TR(0x5cacee);
__builtin_memmove((R+28),(R+28),4);
}
B5cacf0:L5cacf0:{c.instructions+=2;NFSU2_TR(0x5cacf0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cacf1:{NFSU2_TR(0x5cacf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cacf6ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cacf6:L5cacf6:{c.instructions+=5;NFSU2_TR(0x5cacf6);
__builtin_memmove((R+24),(R+0),4);
}
B5cacf8:{NFSU2_TR(0x5cacf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cacfb:{NFSU2_TR(0x5cacfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cacfe:{NFSU2_TR(0x5cacfe);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cad00:{NFSU2_TR(0x5cad00);
if(r1(R+518)){{goto L5cae04;}}
}
B5cad06:L5cad06:{c.instructions+=3;NFSU2_TR(0x5cad06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cad09:{NFSU2_TR(0x5cad09);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5cad0c:{NFSU2_TR(0x5cad0c);
if(r1(R+518)){{goto L5cae04;}}
}
B5cad12:L5cad12:{c.instructions+=3;NFSU2_TR(0x5cad12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad14:{NFSU2_TR(0x5cad14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad15:{NFSU2_TR(0x5cad15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad1aull));
TAIL_STATIC(0x5ba3c0u,5ba);
}
B5cad1a:L5cad1a:{c.instructions+=7;NFSU2_TR(0x5cad1a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cad1f:{NFSU2_TR(0x5cad1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cad21:{NFSU2_TR(0x5cad21);
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
B5cad24:{NFSU2_TR(0x5cad24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad25:{NFSU2_TR(0x5cad25);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad27:{NFSU2_TR(0x5cad27);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad28:{NFSU2_TR(0x5cad28);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad2eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cad2e:L5cad2e:{c.instructions+=6;NFSU2_TR(0x5cad2e);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cad33:{NFSU2_TR(0x5cad33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cad35:{NFSU2_TR(0x5cad35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad36:{NFSU2_TR(0x5cad36);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad38:{NFSU2_TR(0x5cad38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad39:{NFSU2_TR(0x5cad39);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cad3f:L5cad3f:{c.instructions+=2;NFSU2_TR(0x5cad3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad40:{NFSU2_TR(0x5cad40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad45ull));
TAIL_STATIC(0x60f880u,60f);
}
B5cad45:L5cad45:{c.instructions+=7;NFSU2_TR(0x5cad45);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cad4a:{NFSU2_TR(0x5cad4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cad4c:{NFSU2_TR(0x5cad4c);
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
B5cad4f:{NFSU2_TR(0x5cad4f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad51:{NFSU2_TR(0x5cad51);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad53:{NFSU2_TR(0x5cad53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad54:{NFSU2_TR(0x5cad54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cad5a:L5cad5a:{c.instructions+=6;NFSU2_TR(0x5cad5a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cad5f:{NFSU2_TR(0x5cad5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cad61:{NFSU2_TR(0x5cad61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad63:{NFSU2_TR(0x5cad63);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad65:{NFSU2_TR(0x5cad65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad66:{NFSU2_TR(0x5cad66);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad6cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cad6c:L5cad6c:{c.instructions+=1;NFSU2_TR(0x5cad6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad71ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cad71:L5cad71:{c.instructions+=1;NFSU2_TR(0x5cad71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad76ull));
TAIL_STATIC(0x5b9d90u,5b9);
}
B5cad76:L5cad76:{c.instructions+=2;NFSU2_TR(0x5cad76);
u8 U[8];
__builtin_memmove((U+0),gp(0x870cbc),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cad7c:{NFSU2_TR(0x5cad7c);
if(r1(R+518)){{goto L5cad89;}}
}
B5cad7e:L5cad7e:{c.instructions+=4;NFSU2_TR(0x5cad7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad7f:{NFSU2_TR(0x5cad7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cad80:{NFSU2_TR(0x5cad80);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cad84:{NFSU2_TR(0x5cad84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad89ull));
TAIL_STATIC(0x5d6ad0u,5d6);
}
B5cad89:L5cad89:{c.instructions+=1;NFSU2_TR(0x5cad89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cad8eull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cad8e:L5cad8e:{c.instructions+=5;NFSU2_TR(0x5cad8e);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cad94:{NFSU2_TR(0x5cad94);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cad9a:{NFSU2_TR(0x5cad9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cad9c:{NFSU2_TR(0x5cad9c);
__builtin_memmove((R+28),(R+4),4);
}
B5cad9e:{NFSU2_TR(0x5cad9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cada1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cada1:L5cada1:{c.instructions+=6;NFSU2_TR(0x5cada1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cada4:{NFSU2_TR(0x5cada4);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cada9:{NFSU2_TR(0x5cada9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cadab:{NFSU2_TR(0x5cadab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadac:{NFSU2_TR(0x5cadac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadad:{NFSU2_TR(0x5cadad);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cadb3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cadb3:L5cadb3:{c.instructions+=7;NFSU2_TR(0x5cadb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cadb6:{NFSU2_TR(0x5cadb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5cadb8:{NFSU2_TR(0x5cadb8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadb9:{NFSU2_TR(0x5cadb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cadbd:{NFSU2_TR(0x5cadbd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadbe:{NFSU2_TR(0x5cadbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadbf:{NFSU2_TR(0x5cadbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cadc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cadc5:L5cadc5:{c.instructions+=2;NFSU2_TR(0x5cadc5);
u8 U[14];
__builtin_memmove((U+6),gp(0x870ce4),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5cadcb:{NFSU2_TR(0x5cadcb);
if(r1(R+518)){{goto L5cade1;}}
}
B5cadcd:L5cadcd:{c.instructions+=3;NFSU2_TR(0x5cadcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadcf:{NFSU2_TR(0x5cadcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadd0:{NFSU2_TR(0x5cadd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cadd5ull));
TAIL_STATIC(0x491860u,491);
}
B5cadd5:L5cadd5:{c.instructions+=4;NFSU2_TR(0x5cadd5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadd7:{NFSU2_TR(0x5cadd7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadd8:{NFSU2_TR(0x5cadd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadd9:{NFSU2_TR(0x5cadd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caddeull));
TAIL_STATIC(0x494270u,494);
}
B5cadde:L5cadde:{c.instructions+=1;NFSU2_TR(0x5cadde);
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
B5cade1:L5cade1:{c.instructions+=4;NFSU2_TR(0x5cade1);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cade7:{NFSU2_TR(0x5cade7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cade9:{NFSU2_TR(0x5cade9);
__builtin_memmove((R+24),(R+4),4);
}
B5cadeb:{NFSU2_TR(0x5cadeb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cadeeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cadee:L5cadee:{c.instructions+=4;NFSU2_TR(0x5cadee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cadf1:{NFSU2_TR(0x5cadf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cadf3:{NFSU2_TR(0x5cadf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cadf4:{NFSU2_TR(0x5cadf4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cadfaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cadfa:L5cadfa:{c.instructions+=2;NFSU2_TR(0x5cadfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5cadfe:{NFSU2_TR(0x5cadfe);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cae04:L5cae04:{c.instructions+=4;NFSU2_TR(0x5cae04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5cae05:{NFSU2_TR(0x5cae05);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x15ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x15ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5cae08:{NFSU2_TR(0x5cae08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5cae0c:{NFSU2_TR(0x5cae0c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5cacf0u);}goto L5cacf0;}}
}
B5cae12:L5cae12:{c.instructions+=1;NFSU2_TR(0x5cae12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae17ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cae17:L5cae17:{c.instructions+=6;NFSU2_TR(0x5cae17);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cae1c:{NFSU2_TR(0x5cae1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cae1e:{NFSU2_TR(0x5cae1e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae20:{NFSU2_TR(0x5cae20);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae22:{NFSU2_TR(0x5cae22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae23:{NFSU2_TR(0x5cae23);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae29ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cae29:L5cae29:{c.instructions+=6;NFSU2_TR(0x5cae29);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cae2e:{NFSU2_TR(0x5cae2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cae30:{NFSU2_TR(0x5cae30);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae32:{NFSU2_TR(0x5cae32);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae34:{NFSU2_TR(0x5cae34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae35:{NFSU2_TR(0x5cae35);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae3bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cae3b:L5cae3b:{c.instructions+=2;NFSU2_TR(0x5cae3b);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae3d:{NFSU2_TR(0x5cae3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae42ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5cae42:L5cae42:{c.instructions+=5;NFSU2_TR(0x5cae42);
__builtin_memmove((R+24),(R+0),4);
}
B5cae44:{NFSU2_TR(0x5cae44);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5cae47:{NFSU2_TR(0x5cae47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cae4a:{NFSU2_TR(0x5cae4a);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5cae4c:{NFSU2_TR(0x5cae4c);
if(r1(R+518)){{goto L5caff1;}}
}
B5cae52:L5cae52:{c.instructions+=3;NFSU2_TR(0x5cae52);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae54:{NFSU2_TR(0x5cae54);
u8 U[4];
w4(U+0,u32(0x86e7bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae59:{NFSU2_TR(0x5cae59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae5eull));
TAIL_STATIC(0x5ba3c0u,5ba);
}
B5cae5e:L5cae5e:{c.instructions+=5;NFSU2_TR(0x5cae5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5cae61:{NFSU2_TR(0x5cae61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae63:{NFSU2_TR(0x5cae63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae64:{NFSU2_TR(0x5cae64);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5cae68:{NFSU2_TR(0x5cae68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae6dull));
TAIL_STATIC(0x5d6ad0u,5d6);
}
B5cae6d:L5cae6d:{c.instructions+=2;NFSU2_TR(0x5cae6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae6e:{NFSU2_TR(0x5cae6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae73ull));
TAIL_STATIC(0x6316d0u,631);
}
B5cae73:L5cae73:{c.instructions+=2;NFSU2_TR(0x5cae73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5cae76:{NFSU2_TR(0x5cae76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae7bull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5cae7b:L5cae7b:{c.instructions+=5;NFSU2_TR(0x5cae7b);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5cae81:{NFSU2_TR(0x5cae81);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5cae87:{NFSU2_TR(0x5cae87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cae89:{NFSU2_TR(0x5cae89);
__builtin_memmove((R+28),(R+4),4);
}
B5cae8b:{NFSU2_TR(0x5cae8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cae8eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cae8e:L5cae8e:{c.instructions+=6;NFSU2_TR(0x5cae8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5cae91:{NFSU2_TR(0x5cae91);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5cae96:{NFSU2_TR(0x5cae96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cae98:{NFSU2_TR(0x5cae98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae99:{NFSU2_TR(0x5cae99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cae9a:{NFSU2_TR(0x5cae9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caea0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caea0:L5caea0:{c.instructions+=7;NFSU2_TR(0x5caea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5caea3:{NFSU2_TR(0x5caea3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5caea5:{NFSU2_TR(0x5caea5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caea6:{NFSU2_TR(0x5caea6);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5caeaa:{NFSU2_TR(0x5caeaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caeab:{NFSU2_TR(0x5caeab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caeac:{NFSU2_TR(0x5caeac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caeb2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caeb2:L5caeb2:{c.instructions+=3;NFSU2_TR(0x5caeb2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caeb3:{NFSU2_TR(0x5caeb3);
w4(R+4,u32(0x835860ull));
}
B5caeb8:{NFSU2_TR(0x5caeb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caebdull));
TAIL_STATIC(0x48bdf0u,48b);
}
B5caebd:L5caebd:{c.instructions+=3;NFSU2_TR(0x5caebd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caebe:{NFSU2_TR(0x5caebe);
w4(R+4,u32(0x8357e0ull));
}
B5caec3:{NFSU2_TR(0x5caec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caec8ull));
TAIL_STATIC(0x48bdf0u,48b);
}
B5caec8:L5caec8:{c.instructions+=2;NFSU2_TR(0x5caec8);
u8 U[14];
__builtin_memmove((U+6),gp(0x870ce4),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5caece:{NFSU2_TR(0x5caece);
if(r1(R+518)){{goto L5caeed;}}
}
B5caed0:L5caed0:{c.instructions+=3;NFSU2_TR(0x5caed0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caed1:{NFSU2_TR(0x5caed1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caed2:{NFSU2_TR(0x5caed2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caed7ull));
TAIL_STATIC(0x61ae90u,61a);
}
B5caed7:L5caed7:{c.instructions+=4;NFSU2_TR(0x5caed7);
__builtin_memmove((R+0),gp(0x870ce4),4);
}
B5caedc:{NFSU2_TR(0x5caedc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5caedf:{NFSU2_TR(0x5caedf);
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
B5caee1:{NFSU2_TR(0x5caee1);
if(r1(R+518)){{goto L5caeed;}}
}
B5caee3:L5caee3:{c.instructions+=3;NFSU2_TR(0x5caee3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caee4:{NFSU2_TR(0x5caee4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caee5:{NFSU2_TR(0x5caee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caeeaull));
TAIL_STATIC(0x491860u,491);
}
B5caeea:L5caeea:{c.instructions+=1;NFSU2_TR(0x5caeea);
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
B5caeed:L5caeed:{c.instructions+=4;NFSU2_TR(0x5caeed);
__builtin_memmove((R+4),gp(0x86eb5c),4);
}
B5caef3:{NFSU2_TR(0x5caef3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5caef5:{NFSU2_TR(0x5caef5);
__builtin_memmove((R+24),(R+4),4);
}
B5caef7:{NFSU2_TR(0x5caef7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caefaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caefa:L5caefa:{c.instructions+=4;NFSU2_TR(0x5caefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caefd:{NFSU2_TR(0x5caefd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5caeff:{NFSU2_TR(0x5caeff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf00:{NFSU2_TR(0x5caf00);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf06ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caf06:L5caf06:{c.instructions+=5;NFSU2_TR(0x5caf06);
__builtin_memmove((R+4),gp(0x86eb48),4);
}
B5caf0c:{NFSU2_TR(0x5caf0c);
__builtin_memmove(gp(0x870910),(R+4),4);
}
B5caf12:{NFSU2_TR(0x5caf12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5caf14:{NFSU2_TR(0x5caf14);
__builtin_memmove((R+24),(R+4),4);
}
B5caf16:{NFSU2_TR(0x5caf16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf19ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caf19:L5caf19:{c.instructions+=6;NFSU2_TR(0x5caf19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5caf1c:{NFSU2_TR(0x5caf1c);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5caf21:{NFSU2_TR(0x5caf21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5caf23:{NFSU2_TR(0x5caf23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf24:{NFSU2_TR(0x5caf24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf25:{NFSU2_TR(0x5caf25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf2bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caf2b:L5caf2b:{c.instructions+=7;NFSU2_TR(0x5caf2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5caf2e:{NFSU2_TR(0x5caf2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5caf30:{NFSU2_TR(0x5caf30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf31:{NFSU2_TR(0x5caf31);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5caf35:{NFSU2_TR(0x5caf35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf36:{NFSU2_TR(0x5caf36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf37:{NFSU2_TR(0x5caf37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf3dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caf3d:L5caf3d:{c.instructions+=2;NFSU2_TR(0x5caf3d);
u8 U[14];
__builtin_memmove((U+6),gp(0x8707e8),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5caf43:{NFSU2_TR(0x5caf43);
if(r1(R+518)){{goto L5caf7a;}}
}
B5caf45:L5caf45:{c.instructions+=9;NFSU2_TR(0x5caf45);
__builtin_memmove((R+4),gp(0x86eb48),4);
}
B5caf4b:{NFSU2_TR(0x5caf4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caf4e:{NFSU2_TR(0x5caf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5caf51:{NFSU2_TR(0x5caf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x31cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5caf57:{NFSU2_TR(0x5caf57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5caf59:{NFSU2_TR(0x5caf59);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf5b:{NFSU2_TR(0x5caf5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf5c:{NFSU2_TR(0x5caf5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf5d:{NFSU2_TR(0x5caf5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf60ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caf60:L5caf60:{c.instructions+=8;NFSU2_TR(0x5caf60);
__builtin_memmove((R+8),gp(0x8707e8),4);
}
B5caf66:{NFSU2_TR(0x5caf66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5caf68:{NFSU2_TR(0x5caf68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5caf6b:{NFSU2_TR(0x5caf6b);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf6d:{NFSU2_TR(0x5caf6d);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf6f:{NFSU2_TR(0x5caf6f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf71:{NFSU2_TR(0x5caf71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf72:{NFSU2_TR(0x5caf72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf77ull));
TAIL_STATIC(0x5c27b0u,5c2);
}
B5caf77:L5caf77:{c.instructions+=1;NFSU2_TR(0x5caf77);
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
B5caf7a:L5caf7a:{c.instructions+=9;NFSU2_TR(0x5caf7a);
__builtin_memmove((R+4),gp(0x86eb48),4);
}
B5caf80:{NFSU2_TR(0x5caf80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5caf83:{NFSU2_TR(0x5caf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5caf86:{NFSU2_TR(0x5caf86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x31cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5caf8c:{NFSU2_TR(0x5caf8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5caf8e:{NFSU2_TR(0x5caf8e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf90:{NFSU2_TR(0x5caf90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf91:{NFSU2_TR(0x5caf91);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5caf92:{NFSU2_TR(0x5caf92);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caf95ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5caf95:L5caf95:{c.instructions+=3;NFSU2_TR(0x5caf95);
__builtin_memmove((R+0),gp(0x8707ec),4);
}
B5caf9a:{NFSU2_TR(0x5caf9a);
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
B5caf9c:{NFSU2_TR(0x5caf9c);
if(r1(R+518)){{goto L5cafb2;}}
}
B5caf9e:L5caf9e:{c.instructions+=7;NFSU2_TR(0x5caf9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cafa0:{NFSU2_TR(0x5cafa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cafa3:{NFSU2_TR(0x5cafa3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafa5:{NFSU2_TR(0x5cafa5);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafa7:{NFSU2_TR(0x5cafa7);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafa9:{NFSU2_TR(0x5cafa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafaa:{NFSU2_TR(0x5cafaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cafafull));
TAIL_STATIC(0x5c27b0u,5c2);
}
B5cafaf:L5cafaf:{c.instructions+=1;NFSU2_TR(0x5cafaf);
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
B5cafb2:L5cafb2:{c.instructions+=4;NFSU2_TR(0x5cafb2);
__builtin_memmove((R+4),gp(0x86eb48),4);
}
B5cafb8:{NFSU2_TR(0x5cafb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cafba:{NFSU2_TR(0x5cafba);
__builtin_memmove((R+24),(R+4),4);
}
B5cafbc:{NFSU2_TR(0x5cafbc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cafbfull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cafbf:L5cafbf:{c.instructions+=4;NFSU2_TR(0x5cafbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cafc2:{NFSU2_TR(0x5cafc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5cafc4:{NFSU2_TR(0x5cafc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafc5:{NFSU2_TR(0x5cafc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cafcbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cafcb:L5cafcb:{c.instructions+=10;NFSU2_TR(0x5cafcb);
__builtin_memmove((R+4),gp(0x86eb48),4);
}
B5cafd1:{NFSU2_TR(0x5cafd1);
__builtin_memmove(gp(0x870910),(R+12),4);
}
B5cafd7:{NFSU2_TR(0x5cafd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5cafda:{NFSU2_TR(0x5cafda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cafdd:{NFSU2_TR(0x5cafdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x31cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5cafe3:{NFSU2_TR(0x5cafe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5cafe5:{NFSU2_TR(0x5cafe5);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafe7:{NFSU2_TR(0x5cafe7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafe8:{NFSU2_TR(0x5cafe8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5cafe9:{NFSU2_TR(0x5cafe9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5cafecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5cafec:L5cafec:{c.instructions+=1;NFSU2_TR(0x5cafec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caff1ull));
TAIL_STATIC(0x5c2430u,5c2);
}
B5caff1:L5caff1:{c.instructions+=1;NFSU2_TR(0x5caff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5caff6ull));
TAIL_STATIC(0x5cf420u,5cf);
}
B5caff6:L5caff6:{c.instructions+=2;NFSU2_TR(0x5caff6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5caffe:{NFSU2_TR(0x5caffe);
__builtin_memmove((R+28),(R+28),4);
TAIL_STATIC(0x5cb000u,5cb);
}
XIT:NFSU2_TR_EXIT(0x5ca,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
