#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c6(u8* __restrict R,Cpu& c);
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ca,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ca,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ca(u8* __restrict R,Cpu& c);
u32 page_4ca(Cpu& c){return body_4ca(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ca(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ca003:goto L4ca003;
case 0x4ca004:c.instructions+=1;goto B4ca004;
case 0x4ca009:goto L4ca009;
case 0x4ca00c:c.instructions+=6;goto B4ca00c;
case 0x4ca00d:c.instructions+=5;goto B4ca00d;
case 0x4ca00e:c.instructions+=4;goto B4ca00e;
case 0x4ca00f:c.instructions+=3;goto B4ca00f;
case 0x4ca010:c.instructions+=2;goto B4ca010;
case 0x4ca013:c.instructions+=1;goto B4ca013;
case 0x4ca020:goto L4ca020;
case 0x4ca024:c.instructions+=3;goto B4ca024;
case 0x4ca026:c.instructions+=2;goto B4ca026;
case 0x4ca029:c.instructions+=1;goto B4ca029;
case 0x4ca02b:goto L4ca02b;
case 0x4ca02e:c.instructions+=2;goto B4ca02e;
case 0x4ca030:c.instructions+=1;goto B4ca030;
case 0x4ca032:goto L4ca032;
case 0x4ca034:c.instructions+=1;goto B4ca034;
case 0x4ca039:goto L4ca039;
case 0x4ca03c:c.instructions+=2;goto B4ca03c;
case 0x4ca03d:c.instructions+=1;goto B4ca03d;
case 0x4ca042:goto L4ca042;
case 0x4ca045:goto L4ca045;
case 0x4ca048:c.instructions+=2;goto B4ca048;
case 0x4ca04a:c.instructions+=1;goto B4ca04a;
case 0x4ca04c:goto L4ca04c;
case 0x4ca04e:c.instructions+=1;goto B4ca04e;
case 0x4ca053:goto L4ca053;
case 0x4ca056:c.instructions+=2;goto B4ca056;
case 0x4ca057:c.instructions+=1;goto B4ca057;
case 0x4ca05c:goto L4ca05c;
case 0x4ca05f:goto L4ca05f;
case 0x4ca062:c.instructions+=2;goto B4ca062;
case 0x4ca064:c.instructions+=1;goto B4ca064;
case 0x4ca066:goto L4ca066;
case 0x4ca069:c.instructions+=3;goto B4ca069;
case 0x4ca06b:c.instructions+=2;goto B4ca06b;
case 0x4ca06d:c.instructions+=1;goto B4ca06d;
case 0x4ca072:goto L4ca072;
case 0x4ca075:goto L4ca075;
case 0x4ca078:c.instructions+=2;goto B4ca078;
case 0x4ca07a:c.instructions+=1;goto B4ca07a;
case 0x4ca07c:goto L4ca07c;
case 0x4ca07f:c.instructions+=3;goto B4ca07f;
case 0x4ca081:c.instructions+=2;goto B4ca081;
case 0x4ca083:c.instructions+=1;goto B4ca083;
case 0x4ca088:goto L4ca088;
case 0x4ca090:goto L4ca090;
case 0x4ca093:c.instructions+=18;goto B4ca093;
case 0x4ca094:c.instructions+=17;goto B4ca094;
case 0x4ca098:c.instructions+=16;goto B4ca098;
case 0x4ca099:c.instructions+=15;goto B4ca099;
case 0x4ca09d:c.instructions+=14;goto B4ca09d;
case 0x4ca09e:c.instructions+=13;goto B4ca09e;
case 0x4ca0a0:c.instructions+=12;goto B4ca0a0;
case 0x4ca0a3:c.instructions+=11;goto B4ca0a3;
case 0x4ca0a7:c.instructions+=10;goto B4ca0a7;
case 0x4ca0a8:c.instructions+=9;goto B4ca0a8;
case 0x4ca0ab:c.instructions+=8;goto B4ca0ab;
case 0x4ca0b1:c.instructions+=7;goto B4ca0b1;
case 0x4ca0b3:c.instructions+=6;goto B4ca0b3;
case 0x4ca0b5:c.instructions+=5;goto B4ca0b5;
case 0x4ca0b7:c.instructions+=4;goto B4ca0b7;
case 0x4ca0bb:c.instructions+=3;goto B4ca0bb;
case 0x4ca0bf:c.instructions+=2;goto B4ca0bf;
case 0x4ca0c3:c.instructions+=1;goto B4ca0c3;
case 0x4ca0c5:goto L4ca0c5;
case 0x4ca0c7:c.instructions+=4;goto B4ca0c7;
case 0x4ca0cc:c.instructions+=3;goto B4ca0cc;
case 0x4ca0ce:c.instructions+=2;goto B4ca0ce;
case 0x4ca0d0:c.instructions+=1;goto B4ca0d0;
case 0x4ca0d2:goto L4ca0d2;
case 0x4ca0d4:c.instructions+=3;goto B4ca0d4;
case 0x4ca0d9:c.instructions+=2;goto B4ca0d9;
case 0x4ca0da:c.instructions+=1;goto B4ca0da;
case 0x4ca0df:goto L4ca0df;
case 0x4ca0e2:c.instructions+=2;goto B4ca0e2;
case 0x4ca0e4:c.instructions+=1;goto B4ca0e4;
case 0x4ca0e6:goto L4ca0e6;
case 0x4ca0e8:c.instructions+=4;goto B4ca0e8;
case 0x4ca0eb:c.instructions+=3;goto B4ca0eb;
case 0x4ca0ed:c.instructions+=2;goto B4ca0ed;
case 0x4ca0ef:c.instructions+=1;goto B4ca0ef;
case 0x4ca0f1:goto L4ca0f1;
case 0x4ca0f2:c.instructions+=2;goto B4ca0f2;
case 0x4ca0f3:c.instructions+=1;goto B4ca0f3;
case 0x4ca0f8:goto L4ca0f8;
case 0x4ca0fb:c.instructions+=2;goto B4ca0fb;
case 0x4ca0fd:c.instructions+=1;goto B4ca0fd;
case 0x4ca0ff:goto L4ca0ff;
case 0x4ca101:c.instructions+=4;goto B4ca101;
case 0x4ca104:c.instructions+=3;goto B4ca104;
case 0x4ca106:c.instructions+=2;goto B4ca106;
case 0x4ca108:c.instructions+=1;goto B4ca108;
case 0x4ca10a:goto L4ca10a;
case 0x4ca10b:c.instructions+=2;goto B4ca10b;
case 0x4ca10c:c.instructions+=1;goto B4ca10c;
case 0x4ca111:goto L4ca111;
case 0x4ca114:c.instructions+=2;goto B4ca114;
case 0x4ca116:c.instructions+=1;goto B4ca116;
case 0x4ca118:goto L4ca118;
case 0x4ca11a:c.instructions+=4;goto B4ca11a;
case 0x4ca11d:c.instructions+=3;goto B4ca11d;
case 0x4ca11f:c.instructions+=2;goto B4ca11f;
case 0x4ca121:c.instructions+=1;goto B4ca121;
case 0x4ca123:goto L4ca123;
case 0x4ca124:c.instructions+=2;goto B4ca124;
case 0x4ca125:c.instructions+=1;goto B4ca125;
case 0x4ca12a:goto L4ca12a;
case 0x4ca12d:c.instructions+=2;goto B4ca12d;
case 0x4ca12f:c.instructions+=1;goto B4ca12f;
case 0x4ca131:goto L4ca131;
case 0x4ca133:c.instructions+=4;goto B4ca133;
case 0x4ca138:c.instructions+=3;goto B4ca138;
case 0x4ca13a:c.instructions+=2;goto B4ca13a;
case 0x4ca13c:c.instructions+=1;goto B4ca13c;
case 0x4ca13e:goto L4ca13e;
case 0x4ca13f:c.instructions+=2;goto B4ca13f;
case 0x4ca140:c.instructions+=1;goto B4ca140;
case 0x4ca145:goto L4ca145;
case 0x4ca148:c.instructions+=2;goto B4ca148;
case 0x4ca14a:c.instructions+=1;goto B4ca14a;
case 0x4ca14c:goto L4ca14c;
case 0x4ca14e:c.instructions+=4;goto B4ca14e;
case 0x4ca153:c.instructions+=3;goto B4ca153;
case 0x4ca155:c.instructions+=2;goto B4ca155;
case 0x4ca157:c.instructions+=1;goto B4ca157;
case 0x4ca159:goto L4ca159;
case 0x4ca15a:c.instructions+=2;goto B4ca15a;
case 0x4ca15b:c.instructions+=1;goto B4ca15b;
case 0x4ca160:goto L4ca160;
case 0x4ca163:c.instructions+=2;goto B4ca163;
case 0x4ca165:c.instructions+=1;goto B4ca165;
case 0x4ca167:goto L4ca167;
case 0x4ca16b:c.instructions+=4;goto B4ca16b;
case 0x4ca171:c.instructions+=3;goto B4ca171;
case 0x4ca173:c.instructions+=2;goto B4ca173;
case 0x4ca175:c.instructions+=1;goto B4ca175;
case 0x4ca177:goto L4ca177;
case 0x4ca178:c.instructions+=2;goto B4ca178;
case 0x4ca179:c.instructions+=1;goto B4ca179;
case 0x4ca17e:goto L4ca17e;
case 0x4ca181:c.instructions+=2;goto B4ca181;
case 0x4ca183:c.instructions+=1;goto B4ca183;
case 0x4ca185:goto L4ca185;
case 0x4ca187:c.instructions+=4;goto B4ca187;
case 0x4ca18c:c.instructions+=3;goto B4ca18c;
case 0x4ca18e:c.instructions+=2;goto B4ca18e;
case 0x4ca190:c.instructions+=1;goto B4ca190;
case 0x4ca192:goto L4ca192;
case 0x4ca193:c.instructions+=2;goto B4ca193;
case 0x4ca194:c.instructions+=1;goto B4ca194;
case 0x4ca199:goto L4ca199;
case 0x4ca19c:c.instructions+=2;goto B4ca19c;
case 0x4ca19e:c.instructions+=1;goto B4ca19e;
case 0x4ca1a0:goto L4ca1a0;
case 0x4ca1a2:c.instructions+=4;goto B4ca1a2;
case 0x4ca1a5:c.instructions+=3;goto B4ca1a5;
case 0x4ca1a7:c.instructions+=2;goto B4ca1a7;
case 0x4ca1a9:c.instructions+=1;goto B4ca1a9;
case 0x4ca1ab:goto L4ca1ab;
case 0x4ca1ac:c.instructions+=2;goto B4ca1ac;
case 0x4ca1ad:c.instructions+=1;goto B4ca1ad;
case 0x4ca1b2:goto L4ca1b2;
case 0x4ca1b5:c.instructions+=2;goto B4ca1b5;
case 0x4ca1b7:c.instructions+=1;goto B4ca1b7;
case 0x4ca1b9:goto L4ca1b9;
case 0x4ca1bb:c.instructions+=4;goto B4ca1bb;
case 0x4ca1be:c.instructions+=3;goto B4ca1be;
case 0x4ca1c0:c.instructions+=2;goto B4ca1c0;
case 0x4ca1c2:c.instructions+=1;goto B4ca1c2;
case 0x4ca1c4:goto L4ca1c4;
case 0x4ca1c5:c.instructions+=2;goto B4ca1c5;
case 0x4ca1c6:c.instructions+=1;goto B4ca1c6;
case 0x4ca1cb:goto L4ca1cb;
case 0x4ca1ce:c.instructions+=2;goto B4ca1ce;
case 0x4ca1d0:c.instructions+=1;goto B4ca1d0;
case 0x4ca1d2:goto L4ca1d2;
case 0x4ca1d4:c.instructions+=4;goto B4ca1d4;
case 0x4ca1d9:c.instructions+=3;goto B4ca1d9;
case 0x4ca1db:c.instructions+=2;goto B4ca1db;
case 0x4ca1dd:c.instructions+=1;goto B4ca1dd;
case 0x4ca1df:goto L4ca1df;
case 0x4ca1e0:c.instructions+=2;goto B4ca1e0;
case 0x4ca1e1:c.instructions+=1;goto B4ca1e1;
case 0x4ca1e6:goto L4ca1e6;
case 0x4ca1e9:c.instructions+=2;goto B4ca1e9;
case 0x4ca1eb:c.instructions+=1;goto B4ca1eb;
case 0x4ca1ed:goto L4ca1ed;
case 0x4ca1ef:c.instructions+=4;goto B4ca1ef;
case 0x4ca1f4:c.instructions+=3;goto B4ca1f4;
case 0x4ca1f6:c.instructions+=2;goto B4ca1f6;
case 0x4ca1f8:c.instructions+=1;goto B4ca1f8;
case 0x4ca1fa:goto L4ca1fa;
case 0x4ca1fb:c.instructions+=2;goto B4ca1fb;
case 0x4ca1fc:c.instructions+=1;goto B4ca1fc;
case 0x4ca201:goto L4ca201;
case 0x4ca206:c.instructions+=2;goto B4ca206;
case 0x4ca208:c.instructions+=1;goto B4ca208;
case 0x4ca20a:goto L4ca20a;
case 0x4ca20f:c.instructions+=2;goto B4ca20f;
case 0x4ca211:c.instructions+=1;goto B4ca211;
case 0x4ca213:goto L4ca213;
case 0x4ca216:c.instructions+=6;goto B4ca216;
case 0x4ca218:c.instructions+=5;goto B4ca218;
case 0x4ca21d:c.instructions+=4;goto B4ca21d;
case 0x4ca21f:c.instructions+=3;goto B4ca21f;
case 0x4ca221:c.instructions+=2;goto B4ca221;
case 0x4ca226:c.instructions+=1;goto B4ca226;
case 0x4ca228:goto L4ca228;
case 0x4ca22d:goto L4ca22d;
case 0x4ca22e:c.instructions+=2;goto B4ca22e;
case 0x4ca22f:c.instructions+=1;goto B4ca22f;
case 0x4ca234:goto L4ca234;
case 0x4ca235:c.instructions+=1;goto B4ca235;
case 0x4ca23a:goto L4ca23a;
case 0x4ca23c:goto L4ca23c;
case 0x4ca241:goto L4ca241;
case 0x4ca242:c.instructions+=2;goto B4ca242;
case 0x4ca243:c.instructions+=1;goto B4ca243;
case 0x4ca248:goto L4ca248;
case 0x4ca249:c.instructions+=1;goto B4ca249;
case 0x4ca24e:goto L4ca24e;
case 0x4ca251:goto L4ca251;
case 0x4ca255:c.instructions+=6;goto B4ca255;
case 0x4ca258:c.instructions+=5;goto B4ca258;
case 0x4ca25e:c.instructions+=4;goto B4ca25e;
case 0x4ca260:c.instructions+=3;goto B4ca260;
case 0x4ca262:c.instructions+=2;goto B4ca262;
case 0x4ca264:c.instructions+=1;goto B4ca264;
case 0x4ca266:goto L4ca266;
case 0x4ca26b:c.instructions+=2;goto B4ca26b;
case 0x4ca270:c.instructions+=1;goto B4ca270;
case 0x4ca275:goto L4ca275;
case 0x4ca278:c.instructions+=3;goto B4ca278;
case 0x4ca279:c.instructions+=2;goto B4ca279;
case 0x4ca27a:c.instructions+=1;goto B4ca27a;
case 0x4ca27f:goto L4ca27f;
case 0x4ca282:c.instructions+=2;goto B4ca282;
case 0x4ca284:c.instructions+=1;goto B4ca284;
case 0x4ca286:goto L4ca286;
case 0x4ca289:c.instructions+=4;goto B4ca289;
case 0x4ca28b:c.instructions+=3;goto B4ca28b;
case 0x4ca290:c.instructions+=2;goto B4ca290;
case 0x4ca295:c.instructions+=1;goto B4ca295;
case 0x4ca29a:goto L4ca29a;
case 0x4ca29d:c.instructions+=3;goto B4ca29d;
case 0x4ca29e:c.instructions+=2;goto B4ca29e;
case 0x4ca29f:c.instructions+=1;goto B4ca29f;
case 0x4ca2a4:goto L4ca2a4;
case 0x4ca2a7:goto L4ca2a7;
case 0x4ca2aa:c.instructions+=3;goto B4ca2aa;
case 0x4ca2af:c.instructions+=2;goto B4ca2af;
case 0x4ca2b4:c.instructions+=1;goto B4ca2b4;
case 0x4ca2b9:goto L4ca2b9;
case 0x4ca2bc:c.instructions+=3;goto B4ca2bc;
case 0x4ca2bd:c.instructions+=2;goto B4ca2bd;
case 0x4ca2be:c.instructions+=1;goto B4ca2be;
case 0x4ca2c3:goto L4ca2c3;
case 0x4ca2c6:c.instructions+=2;goto B4ca2c6;
case 0x4ca2c8:c.instructions+=1;goto B4ca2c8;
case 0x4ca2ce:goto L4ca2ce;
case 0x4ca2d0:c.instructions+=2;goto B4ca2d0;
case 0x4ca2d5:c.instructions+=1;goto B4ca2d5;
case 0x4ca2d7:goto L4ca2d7;
case 0x4ca2dc:c.instructions+=2;goto B4ca2dc;
case 0x4ca2e1:c.instructions+=1;goto B4ca2e1;
case 0x4ca2e6:goto L4ca2e6;
case 0x4ca2e9:c.instructions+=3;goto B4ca2e9;
case 0x4ca2ea:c.instructions+=2;goto B4ca2ea;
case 0x4ca2eb:c.instructions+=1;goto B4ca2eb;
case 0x4ca2f0:goto L4ca2f0;
case 0x4ca2f3:c.instructions+=2;goto B4ca2f3;
case 0x4ca2f5:c.instructions+=1;goto B4ca2f5;
case 0x4ca2f7:goto L4ca2f7;
case 0x4ca2fa:c.instructions+=4;goto B4ca2fa;
case 0x4ca2fc:c.instructions+=3;goto B4ca2fc;
case 0x4ca301:c.instructions+=2;goto B4ca301;
case 0x4ca306:c.instructions+=1;goto B4ca306;
case 0x4ca30b:goto L4ca30b;
case 0x4ca30e:c.instructions+=3;goto B4ca30e;
case 0x4ca30f:c.instructions+=2;goto B4ca30f;
case 0x4ca310:c.instructions+=1;goto B4ca310;
case 0x4ca315:goto L4ca315;
case 0x4ca318:goto L4ca318;
case 0x4ca31b:c.instructions+=3;goto B4ca31b;
case 0x4ca320:c.instructions+=2;goto B4ca320;
case 0x4ca325:c.instructions+=1;goto B4ca325;
case 0x4ca32a:goto L4ca32a;
case 0x4ca32d:c.instructions+=3;goto B4ca32d;
case 0x4ca32e:c.instructions+=2;goto B4ca32e;
case 0x4ca32f:c.instructions+=1;goto B4ca32f;
case 0x4ca334:goto L4ca334;
case 0x4ca337:c.instructions+=2;goto B4ca337;
case 0x4ca339:c.instructions+=1;goto B4ca339;
case 0x4ca33b:goto L4ca33b;
case 0x4ca33d:c.instructions+=1;goto B4ca33d;
case 0x4ca342:goto L4ca342;
case 0x4ca345:c.instructions+=2;goto B4ca345;
case 0x4ca34a:c.instructions+=1;goto B4ca34a;
case 0x4ca34f:goto L4ca34f;
case 0x4ca352:c.instructions+=3;goto B4ca352;
case 0x4ca353:c.instructions+=2;goto B4ca353;
case 0x4ca354:c.instructions+=1;goto B4ca354;
case 0x4ca359:goto L4ca359;
case 0x4ca35c:goto L4ca35c;
case 0x4ca360:c.instructions+=5;goto B4ca360;
case 0x4ca363:c.instructions+=4;goto B4ca363;
case 0x4ca368:c.instructions+=3;goto B4ca368;
case 0x4ca36a:c.instructions+=2;goto B4ca36a;
case 0x4ca36c:c.instructions+=1;goto B4ca36c;
case 0x4ca372:goto L4ca372;
case 0x4ca377:c.instructions+=2;goto B4ca377;
case 0x4ca37c:c.instructions+=1;goto B4ca37c;
case 0x4ca381:goto L4ca381;
case 0x4ca384:c.instructions+=3;goto B4ca384;
case 0x4ca385:c.instructions+=2;goto B4ca385;
case 0x4ca386:c.instructions+=1;goto B4ca386;
case 0x4ca38b:goto L4ca38b;
case 0x4ca38e:c.instructions+=2;goto B4ca38e;
case 0x4ca390:c.instructions+=1;goto B4ca390;
case 0x4ca392:goto L4ca392;
case 0x4ca395:c.instructions+=4;goto B4ca395;
case 0x4ca397:c.instructions+=3;goto B4ca397;
case 0x4ca39c:c.instructions+=2;goto B4ca39c;
case 0x4ca3a1:c.instructions+=1;goto B4ca3a1;
case 0x4ca3a6:goto L4ca3a6;
case 0x4ca3a9:c.instructions+=3;goto B4ca3a9;
case 0x4ca3aa:c.instructions+=2;goto B4ca3aa;
case 0x4ca3ab:c.instructions+=1;goto B4ca3ab;
case 0x4ca3b0:goto L4ca3b0;
case 0x4ca3b3:goto L4ca3b3;
case 0x4ca3b5:c.instructions+=2;goto B4ca3b5;
case 0x4ca3b8:c.instructions+=1;goto B4ca3b8;
case 0x4ca3ba:goto L4ca3ba;
case 0x4ca3bf:c.instructions+=2;goto B4ca3bf;
case 0x4ca3c4:c.instructions+=1;goto B4ca3c4;
case 0x4ca3c9:goto L4ca3c9;
case 0x4ca3cc:c.instructions+=3;goto B4ca3cc;
case 0x4ca3cd:c.instructions+=2;goto B4ca3cd;
case 0x4ca3ce:c.instructions+=1;goto B4ca3ce;
case 0x4ca3d3:goto L4ca3d3;
case 0x4ca3d6:c.instructions+=2;goto B4ca3d6;
case 0x4ca3d8:c.instructions+=1;goto B4ca3d8;
case 0x4ca3de:goto L4ca3de;
case 0x4ca3e0:c.instructions+=2;goto B4ca3e0;
case 0x4ca3e5:c.instructions+=1;goto B4ca3e5;
case 0x4ca3ea:goto L4ca3ea;
case 0x4ca3ef:c.instructions+=2;goto B4ca3ef;
case 0x4ca3f4:c.instructions+=1;goto B4ca3f4;
case 0x4ca3f9:goto L4ca3f9;
case 0x4ca3fc:c.instructions+=3;goto B4ca3fc;
case 0x4ca3fd:c.instructions+=2;goto B4ca3fd;
case 0x4ca3fe:c.instructions+=1;goto B4ca3fe;
case 0x4ca403:goto L4ca403;
case 0x4ca406:c.instructions+=2;goto B4ca406;
case 0x4ca408:c.instructions+=1;goto B4ca408;
case 0x4ca40e:goto L4ca40e;
case 0x4ca410:c.instructions+=2;goto B4ca410;
case 0x4ca415:c.instructions+=1;goto B4ca415;
case 0x4ca41a:goto L4ca41a;
case 0x4ca41f:c.instructions+=2;goto B4ca41f;
case 0x4ca424:c.instructions+=1;goto B4ca424;
case 0x4ca429:goto L4ca429;
case 0x4ca42c:c.instructions+=3;goto B4ca42c;
case 0x4ca42d:c.instructions+=2;goto B4ca42d;
case 0x4ca42e:c.instructions+=1;goto B4ca42e;
case 0x4ca433:goto L4ca433;
case 0x4ca436:c.instructions+=2;goto B4ca436;
case 0x4ca438:c.instructions+=1;goto B4ca438;
case 0x4ca43a:goto L4ca43a;
case 0x4ca43d:c.instructions+=4;goto B4ca43d;
case 0x4ca43f:c.instructions+=3;goto B4ca43f;
case 0x4ca444:c.instructions+=2;goto B4ca444;
case 0x4ca449:c.instructions+=1;goto B4ca449;
case 0x4ca44e:goto L4ca44e;
case 0x4ca451:c.instructions+=3;goto B4ca451;
case 0x4ca452:c.instructions+=2;goto B4ca452;
case 0x4ca453:c.instructions+=1;goto B4ca453;
case 0x4ca458:goto L4ca458;
case 0x4ca45b:goto L4ca45b;
case 0x4ca462:c.instructions+=1;goto B4ca462;
case 0x4ca464:goto L4ca464;
case 0x4ca467:c.instructions+=4;goto B4ca467;
case 0x4ca469:c.instructions+=3;goto B4ca469;
case 0x4ca46e:c.instructions+=2;goto B4ca46e;
case 0x4ca473:c.instructions+=1;goto B4ca473;
case 0x4ca478:goto L4ca478;
case 0x4ca47b:c.instructions+=3;goto B4ca47b;
case 0x4ca47c:c.instructions+=2;goto B4ca47c;
case 0x4ca47d:c.instructions+=1;goto B4ca47d;
case 0x4ca482:goto L4ca482;
case 0x4ca485:goto L4ca485;
case 0x4ca487:c.instructions+=2;goto B4ca487;
case 0x4ca48a:c.instructions+=1;goto B4ca48a;
case 0x4ca48c:goto L4ca48c;
case 0x4ca491:c.instructions+=2;goto B4ca491;
case 0x4ca496:c.instructions+=1;goto B4ca496;
case 0x4ca49b:goto L4ca49b;
case 0x4ca49e:c.instructions+=3;goto B4ca49e;
case 0x4ca49f:c.instructions+=2;goto B4ca49f;
case 0x4ca4a0:c.instructions+=1;goto B4ca4a0;
case 0x4ca4a5:goto L4ca4a5;
case 0x4ca4a8:c.instructions+=2;goto B4ca4a8;
case 0x4ca4aa:c.instructions+=1;goto B4ca4aa;
case 0x4ca4ac:goto L4ca4ac;
case 0x4ca4ae:c.instructions+=2;goto B4ca4ae;
case 0x4ca4b3:c.instructions+=1;goto B4ca4b3;
case 0x4ca4b5:goto L4ca4b5;
case 0x4ca4ba:c.instructions+=2;goto B4ca4ba;
case 0x4ca4bf:c.instructions+=1;goto B4ca4bf;
case 0x4ca4c4:goto L4ca4c4;
case 0x4ca4c7:c.instructions+=3;goto B4ca4c7;
case 0x4ca4c8:c.instructions+=2;goto B4ca4c8;
case 0x4ca4c9:c.instructions+=1;goto B4ca4c9;
case 0x4ca4ce:goto L4ca4ce;
case 0x4ca4d1:c.instructions+=2;goto B4ca4d1;
case 0x4ca4d3:c.instructions+=1;goto B4ca4d3;
case 0x4ca4d5:goto L4ca4d5;
case 0x4ca4d7:c.instructions+=1;goto B4ca4d7;
case 0x4ca4dc:goto L4ca4dc;
case 0x4ca4df:c.instructions+=2;goto B4ca4df;
case 0x4ca4e4:c.instructions+=1;goto B4ca4e4;
case 0x4ca4e9:goto L4ca4e9;
case 0x4ca4ec:c.instructions+=3;goto B4ca4ec;
case 0x4ca4ed:c.instructions+=2;goto B4ca4ed;
case 0x4ca4ee:c.instructions+=1;goto B4ca4ee;
case 0x4ca4f3:goto L4ca4f3;
case 0x4ca4f6:goto L4ca4f6;
case 0x4ca4f9:c.instructions+=4;goto B4ca4f9;
case 0x4ca4fb:c.instructions+=3;goto B4ca4fb;
case 0x4ca4ff:c.instructions+=2;goto B4ca4ff;
case 0x4ca503:c.instructions+=1;goto B4ca503;
case 0x4ca505:goto L4ca505;
case 0x4ca507:c.instructions+=4;goto B4ca507;
case 0x4ca50c:c.instructions+=3;goto B4ca50c;
case 0x4ca50e:c.instructions+=2;goto B4ca50e;
case 0x4ca510:c.instructions+=1;goto B4ca510;
case 0x4ca512:goto L4ca512;
case 0x4ca516:c.instructions+=3;goto B4ca516;
case 0x4ca517:c.instructions+=2;goto B4ca517;
case 0x4ca518:c.instructions+=1;goto B4ca518;
case 0x4ca51d:goto L4ca51d;
case 0x4ca520:c.instructions+=2;goto B4ca520;
case 0x4ca522:c.instructions+=1;goto B4ca522;
case 0x4ca524:goto L4ca524;
case 0x4ca526:c.instructions+=4;goto B4ca526;
case 0x4ca52b:c.instructions+=3;goto B4ca52b;
case 0x4ca52d:c.instructions+=2;goto B4ca52d;
case 0x4ca52f:c.instructions+=1;goto B4ca52f;
case 0x4ca531:goto L4ca531;
case 0x4ca535:c.instructions+=3;goto B4ca535;
case 0x4ca536:c.instructions+=2;goto B4ca536;
case 0x4ca537:c.instructions+=1;goto B4ca537;
case 0x4ca53c:goto L4ca53c;
case 0x4ca53f:c.instructions+=2;goto B4ca53f;
case 0x4ca541:c.instructions+=1;goto B4ca541;
case 0x4ca543:goto L4ca543;
case 0x4ca545:c.instructions+=4;goto B4ca545;
case 0x4ca54a:c.instructions+=3;goto B4ca54a;
case 0x4ca54c:c.instructions+=2;goto B4ca54c;
case 0x4ca54e:c.instructions+=1;goto B4ca54e;
case 0x4ca550:goto L4ca550;
case 0x4ca554:c.instructions+=3;goto B4ca554;
case 0x4ca555:c.instructions+=2;goto B4ca555;
case 0x4ca556:c.instructions+=1;goto B4ca556;
case 0x4ca55b:goto L4ca55b;
case 0x4ca55e:c.instructions+=3;goto B4ca55e;
case 0x4ca560:c.instructions+=2;goto B4ca560;
case 0x4ca564:c.instructions+=1;goto B4ca564;
case 0x4ca566:goto L4ca566;
case 0x4ca568:c.instructions+=4;goto B4ca568;
case 0x4ca56e:c.instructions+=3;goto B4ca56e;
case 0x4ca570:c.instructions+=2;goto B4ca570;
case 0x4ca572:c.instructions+=1;goto B4ca572;
case 0x4ca574:goto L4ca574;
case 0x4ca578:c.instructions+=3;goto B4ca578;
case 0x4ca579:c.instructions+=2;goto B4ca579;
case 0x4ca57a:c.instructions+=1;goto B4ca57a;
case 0x4ca57f:goto L4ca57f;
case 0x4ca582:c.instructions+=2;goto B4ca582;
case 0x4ca584:c.instructions+=1;goto B4ca584;
case 0x4ca586:goto L4ca586;
case 0x4ca588:c.instructions+=4;goto B4ca588;
case 0x4ca58b:c.instructions+=3;goto B4ca58b;
case 0x4ca58d:c.instructions+=2;goto B4ca58d;
case 0x4ca58f:c.instructions+=1;goto B4ca58f;
case 0x4ca591:goto L4ca591;
case 0x4ca595:c.instructions+=3;goto B4ca595;
case 0x4ca596:c.instructions+=2;goto B4ca596;
case 0x4ca597:c.instructions+=1;goto B4ca597;
case 0x4ca59c:goto L4ca59c;
case 0x4ca59f:c.instructions+=2;goto B4ca59f;
case 0x4ca5a1:c.instructions+=1;goto B4ca5a1;
case 0x4ca5a3:goto L4ca5a3;
case 0x4ca5a5:c.instructions+=4;goto B4ca5a5;
case 0x4ca5a8:c.instructions+=3;goto B4ca5a8;
case 0x4ca5aa:c.instructions+=2;goto B4ca5aa;
case 0x4ca5ac:c.instructions+=1;goto B4ca5ac;
case 0x4ca5ae:goto L4ca5ae;
case 0x4ca5b2:c.instructions+=3;goto B4ca5b2;
case 0x4ca5b3:c.instructions+=2;goto B4ca5b3;
case 0x4ca5b4:c.instructions+=1;goto B4ca5b4;
case 0x4ca5b9:goto L4ca5b9;
case 0x4ca5bc:c.instructions+=2;goto B4ca5bc;
case 0x4ca5be:c.instructions+=1;goto B4ca5be;
case 0x4ca5c0:goto L4ca5c0;
case 0x4ca5c2:c.instructions+=4;goto B4ca5c2;
case 0x4ca5c5:c.instructions+=3;goto B4ca5c5;
case 0x4ca5c7:c.instructions+=2;goto B4ca5c7;
case 0x4ca5c9:c.instructions+=1;goto B4ca5c9;
case 0x4ca5cb:goto L4ca5cb;
case 0x4ca5cf:c.instructions+=3;goto B4ca5cf;
case 0x4ca5d0:c.instructions+=2;goto B4ca5d0;
case 0x4ca5d1:c.instructions+=1;goto B4ca5d1;
case 0x4ca5d6:goto L4ca5d6;
case 0x4ca5d9:c.instructions+=2;goto B4ca5d9;
case 0x4ca5db:c.instructions+=1;goto B4ca5db;
case 0x4ca5dd:goto L4ca5dd;
case 0x4ca5df:c.instructions+=4;goto B4ca5df;
case 0x4ca5e4:c.instructions+=3;goto B4ca5e4;
case 0x4ca5e6:c.instructions+=2;goto B4ca5e6;
case 0x4ca5e8:c.instructions+=1;goto B4ca5e8;
case 0x4ca5ea:goto L4ca5ea;
case 0x4ca5ee:c.instructions+=4;goto B4ca5ee;
case 0x4ca5ef:c.instructions+=3;goto B4ca5ef;
case 0x4ca5f0:c.instructions+=2;goto B4ca5f0;
case 0x4ca5f3:c.instructions+=1;goto B4ca5f3;
case 0x4ca5f8:goto L4ca5f8;
case 0x4ca5fb:c.instructions+=2;goto B4ca5fb;
case 0x4ca5fd:c.instructions+=1;goto B4ca5fd;
case 0x4ca5ff:goto L4ca5ff;
case 0x4ca601:c.instructions+=4;goto B4ca601;
case 0x4ca607:c.instructions+=3;goto B4ca607;
case 0x4ca609:c.instructions+=2;goto B4ca609;
case 0x4ca60b:c.instructions+=1;goto B4ca60b;
case 0x4ca60d:goto L4ca60d;
case 0x4ca611:c.instructions+=3;goto B4ca611;
case 0x4ca612:c.instructions+=2;goto B4ca612;
case 0x4ca613:c.instructions+=1;goto B4ca613;
case 0x4ca618:goto L4ca618;
case 0x4ca61b:c.instructions+=2;goto B4ca61b;
case 0x4ca61d:c.instructions+=1;goto B4ca61d;
case 0x4ca61f:goto L4ca61f;
case 0x4ca622:c.instructions+=4;goto B4ca622;
case 0x4ca624:c.instructions+=3;goto B4ca624;
case 0x4ca626:c.instructions+=2;goto B4ca626;
case 0x4ca628:c.instructions+=1;goto B4ca628;
case 0x4ca62a:goto L4ca62a;
case 0x4ca62e:c.instructions+=3;goto B4ca62e;
case 0x4ca62f:c.instructions+=2;goto B4ca62f;
case 0x4ca630:c.instructions+=1;goto B4ca630;
case 0x4ca635:goto L4ca635;
case 0x4ca63b:c.instructions+=2;goto B4ca63b;
case 0x4ca63d:c.instructions+=1;goto B4ca63d;
case 0x4ca63f:goto L4ca63f;
case 0x4ca645:c.instructions+=4;goto B4ca645;
case 0x4ca647:c.instructions+=3;goto B4ca647;
case 0x4ca649:c.instructions+=2;goto B4ca649;
case 0x4ca64b:c.instructions+=1;goto B4ca64b;
case 0x4ca64d:goto L4ca64d;
case 0x4ca651:c.instructions+=3;goto B4ca651;
case 0x4ca652:c.instructions+=2;goto B4ca652;
case 0x4ca653:c.instructions+=1;goto B4ca653;
case 0x4ca658:goto L4ca658;
case 0x4ca65c:c.instructions+=8;goto B4ca65c;
case 0x4ca65d:c.instructions+=7;goto B4ca65d;
case 0x4ca660:c.instructions+=6;goto B4ca660;
case 0x4ca663:c.instructions+=5;goto B4ca663;
case 0x4ca664:c.instructions+=4;goto B4ca664;
case 0x4ca665:c.instructions+=3;goto B4ca665;
case 0x4ca666:c.instructions+=2;goto B4ca666;
case 0x4ca669:c.instructions+=1;goto B4ca669;
case 0x4ca670:goto L4ca670;
case 0x4ca674:c.instructions+=4;goto B4ca674;
case 0x4ca677:c.instructions+=3;goto B4ca677;
case 0x4ca678:c.instructions+=2;goto B4ca678;
case 0x4ca67a:c.instructions+=1;goto B4ca67a;
case 0x4ca67f:goto L4ca67f;
case 0x4ca690:goto L4ca690;
case 0x4ca691:c.instructions+=3;goto B4ca691;
case 0x4ca697:c.instructions+=2;goto B4ca697;
case 0x4ca69c:c.instructions+=1;goto B4ca69c;
case 0x4ca6a1:goto L4ca6a1;
case 0x4ca6a3:c.instructions+=1;goto B4ca6a3;
case 0x4ca6a5:goto L4ca6a5;
case 0x4ca6a9:c.instructions+=1;goto B4ca6a9;
case 0x4ca6b0:goto L4ca6b0;
case 0x4ca6b3:c.instructions+=1;goto B4ca6b3;
case 0x4ca6b5:goto L4ca6b5;
case 0x4ca6b7:c.instructions+=2;goto B4ca6b7;
case 0x4ca6b9:c.instructions+=1;goto B4ca6b9;
case 0x4ca6bb:goto L4ca6bb;
case 0x4ca6bd:c.instructions+=2;goto B4ca6bd;
case 0x4ca6be:c.instructions+=1;goto B4ca6be;
case 0x4ca6bf:goto L4ca6bf;
case 0x4ca6c1:c.instructions+=2;goto B4ca6c1;
case 0x4ca6c2:c.instructions+=1;goto B4ca6c2;
case 0x4ca6d0:goto L4ca6d0;
case 0x4ca6d1:c.instructions+=5;goto B4ca6d1;
case 0x4ca6d3:c.instructions+=4;goto B4ca6d3;
case 0x4ca6d6:c.instructions+=3;goto B4ca6d6;
case 0x4ca6d8:c.instructions+=2;goto B4ca6d8;
case 0x4ca6d9:c.instructions+=1;goto B4ca6d9;
case 0x4ca6db:goto L4ca6db;
case 0x4ca6de:c.instructions+=2;goto B4ca6de;
case 0x4ca6e1:c.instructions+=1;goto B4ca6e1;
case 0x4ca6e7:goto L4ca6e7;
case 0x4ca6ee:c.instructions+=1;goto B4ca6ee;
case 0x4ca6f5:goto L4ca6f5;
case 0x4ca6f7:c.instructions+=1;goto B4ca6f7;
case 0x4ca6f9:goto L4ca6f9;
case 0x4ca6fc:c.instructions+=3;goto B4ca6fc;
case 0x4ca6fd:c.instructions+=2;goto B4ca6fd;
case 0x4ca703:c.instructions+=1;goto B4ca703;
case 0x4ca708:goto L4ca708;
case 0x4ca70a:c.instructions+=1;goto B4ca70a;
case 0x4ca70c:goto L4ca70c;
case 0x4ca712:c.instructions+=2;goto B4ca712;
case 0x4ca714:c.instructions+=1;goto B4ca714;
case 0x4ca716:goto L4ca716;
case 0x4ca718:c.instructions+=1;goto B4ca718;
case 0x4ca71d:goto L4ca71d;
case 0x4ca71f:c.instructions+=1;goto B4ca71f;
case 0x4ca721:goto L4ca721;
case 0x4ca728:c.instructions+=1;goto B4ca728;
case 0x4ca72e:goto L4ca72e;
case 0x4ca733:c.instructions+=1;goto B4ca733;
case 0x4ca738:goto L4ca738;
case 0x4ca73a:c.instructions+=1;goto B4ca73a;
case 0x4ca73c:goto L4ca73c;
case 0x4ca741:c.instructions+=1;goto B4ca741;
case 0x4ca746:goto L4ca746;
case 0x4ca748:c.instructions+=1;goto B4ca748;
case 0x4ca74a:goto L4ca74a;
case 0x4ca74d:c.instructions+=2;goto B4ca74d;
case 0x4ca752:c.instructions+=1;goto B4ca752;
case 0x4ca757:goto L4ca757;
case 0x4ca759:c.instructions+=1;goto B4ca759;
case 0x4ca75b:goto L4ca75b;
case 0x4ca760:c.instructions+=1;goto B4ca760;
case 0x4ca765:goto L4ca765;
case 0x4ca767:c.instructions+=1;goto B4ca767;
case 0x4ca769:goto L4ca769;
case 0x4ca76c:c.instructions+=2;goto B4ca76c;
case 0x4ca76e:c.instructions+=1;goto B4ca76e;
case 0x4ca770:goto L4ca770;
case 0x4ca774:goto L4ca774;
case 0x4ca776:goto L4ca776;
case 0x4ca777:c.instructions+=3;goto B4ca777;
case 0x4ca779:c.instructions+=2;goto B4ca779;
case 0x4ca77a:c.instructions+=1;goto B4ca77a;
case 0x4ca77b:goto L4ca77b;
case 0x4ca780:c.instructions+=1;goto B4ca780;
case 0x4ca785:goto L4ca785;
case 0x4ca787:c.instructions+=1;goto B4ca787;
case 0x4ca789:goto L4ca789;
case 0x4ca78e:c.instructions+=2;goto B4ca78e;
case 0x4ca790:c.instructions+=1;goto B4ca790;
case 0x4ca792:goto L4ca792;
case 0x4ca793:c.instructions+=2;goto B4ca793;
case 0x4ca798:c.instructions+=1;goto B4ca798;
case 0x4ca79d:goto L4ca79d;
case 0x4ca79e:c.instructions+=2;goto B4ca79e;
case 0x4ca79f:c.instructions+=1;goto B4ca79f;
case 0x4ca7a0:goto L4ca7a0;
case 0x4ca7a5:c.instructions+=1;goto B4ca7a5;
case 0x4ca7aa:goto L4ca7aa;
case 0x4ca7ac:c.instructions+=1;goto B4ca7ac;
case 0x4ca7ae:goto L4ca7ae;
case 0x4ca7b0:c.instructions+=1;goto B4ca7b0;
case 0x4ca7b5:goto L4ca7b5;
case 0x4ca7bc:c.instructions+=1;goto B4ca7bc;
case 0x4ca7be:goto L4ca7be;
case 0x4ca7c0:c.instructions+=1;goto B4ca7c0;
case 0x4ca7c5:goto L4ca7c5;
case 0x4ca7c7:c.instructions+=4;goto B4ca7c7;
case 0x4ca7c8:c.instructions+=3;goto B4ca7c8;
case 0x4ca7cb:c.instructions+=2;goto B4ca7cb;
case 0x4ca7cc:c.instructions+=1;goto B4ca7cc;
case 0x4ca7cd:goto L4ca7cd;
case 0x4ca7ce:c.instructions+=3;goto B4ca7ce;
case 0x4ca7d0:c.instructions+=2;goto B4ca7d0;
case 0x4ca7d1:c.instructions+=1;goto B4ca7d1;
case 0x4ca800:goto L4ca800;
case 0x4ca801:c.instructions+=3;goto B4ca801;
case 0x4ca803:c.instructions+=2;goto B4ca803;
case 0x4ca804:c.instructions+=1;goto B4ca804;
case 0x4ca809:goto L4ca809;
case 0x4ca80b:c.instructions+=1;goto B4ca80b;
case 0x4ca80d:goto L4ca80d;
case 0x4ca811:c.instructions+=1;goto B4ca811;
case 0x4ca815:goto L4ca815;
case 0x4ca818:c.instructions+=2;goto B4ca818;
case 0x4ca81a:c.instructions+=1;goto B4ca81a;
case 0x4ca81c:goto L4ca81c;
case 0x4ca81f:c.instructions+=1;goto B4ca81f;
case 0x4ca821:goto L4ca821;
case 0x4ca823:goto L4ca823;
case 0x4ca825:c.instructions+=1;goto B4ca825;
case 0x4ca827:goto L4ca827;
case 0x4ca82a:c.instructions+=1;goto B4ca82a;
case 0x4ca82c:goto L4ca82c;
case 0x4ca82e:c.instructions+=2;goto B4ca82e;
case 0x4ca830:c.instructions+=1;goto B4ca830;
case 0x4ca832:goto L4ca832;
case 0x4ca833:c.instructions+=3;goto B4ca833;
case 0x4ca835:c.instructions+=2;goto B4ca835;
case 0x4ca836:c.instructions+=1;goto B4ca836;
case 0x4ca839:goto L4ca839;
case 0x4ca83a:c.instructions+=3;goto B4ca83a;
case 0x4ca83c:c.instructions+=2;goto B4ca83c;
case 0x4ca83d:c.instructions+=1;goto B4ca83d;
case 0x4ca840:goto L4ca840;
case 0x4ca845:c.instructions+=7;goto B4ca845;
case 0x4ca848:c.instructions+=6;goto B4ca848;
case 0x4ca84a:c.instructions+=5;goto B4ca84a;
case 0x4ca84b:c.instructions+=4;goto B4ca84b;
case 0x4ca84c:c.instructions+=3;goto B4ca84c;
case 0x4ca84d:c.instructions+=2;goto B4ca84d;
case 0x4ca84f:c.instructions+=1;goto B4ca84f;
case 0x4ca851:goto L4ca851;
case 0x4ca853:c.instructions+=1;goto B4ca853;
case 0x4ca858:goto L4ca858;
case 0x4ca85a:c.instructions+=1;goto B4ca85a;
case 0x4ca85c:goto L4ca85c;
case 0x4ca860:goto L4ca860;
case 0x4ca862:c.instructions+=2;goto B4ca862;
case 0x4ca864:c.instructions+=1;goto B4ca864;
case 0x4ca866:goto L4ca866;
case 0x4ca870:goto L4ca870;
case 0x4ca873:c.instructions+=3;goto B4ca873;
case 0x4ca875:c.instructions+=2;goto B4ca875;
case 0x4ca87b:c.instructions+=1;goto B4ca87b;
case 0x4ca87d:goto L4ca87d;
case 0x4ca884:c.instructions+=2;goto B4ca884;
case 0x4ca886:c.instructions+=1;goto B4ca886;
case 0x4ca888:goto L4ca888;
case 0x4ca889:c.instructions+=1;goto B4ca889;
case 0x4ca88e:goto L4ca88e;
case 0x4ca891:c.instructions+=1;goto B4ca891;
case 0x4ca894:goto L4ca894;
case 0x4ca897:c.instructions+=17;goto B4ca897;
case 0x4ca89d:c.instructions+=16;goto B4ca89d;
case 0x4ca8a3:c.instructions+=15;goto B4ca8a3;
case 0x4ca8a9:c.instructions+=14;goto B4ca8a9;
case 0x4ca8ab:c.instructions+=13;goto B4ca8ab;
case 0x4ca8af:c.instructions+=12;goto B4ca8af;
case 0x4ca8b5:c.instructions+=11;goto B4ca8b5;
case 0x4ca8b9:c.instructions+=10;goto B4ca8b9;
case 0x4ca8bf:c.instructions+=9;goto B4ca8bf;
case 0x4ca8c3:c.instructions+=8;goto B4ca8c3;
case 0x4ca8c7:c.instructions+=7;goto B4ca8c7;
case 0x4ca8cb:c.instructions+=6;goto B4ca8cb;
case 0x4ca8cf:c.instructions+=5;goto B4ca8cf;
case 0x4ca8d5:c.instructions+=4;goto B4ca8d5;
case 0x4ca8db:c.instructions+=3;goto B4ca8db;
case 0x4ca8dd:c.instructions+=2;goto B4ca8dd;
case 0x4ca8e0:c.instructions+=1;goto B4ca8e0;
case 0x4ca8e2:goto L4ca8e2;
case 0x4ca8e8:c.instructions+=3;goto B4ca8e8;
case 0x4ca8ee:c.instructions+=2;goto B4ca8ee;
case 0x4ca8f2:c.instructions+=1;goto B4ca8f2;
case 0x4ca8f6:goto L4ca8f6;
case 0x4ca8fa:c.instructions+=7;goto B4ca8fa;
case 0x4ca8fb:c.instructions+=6;goto B4ca8fb;
case 0x4ca8ff:c.instructions+=5;goto B4ca8ff;
case 0x4ca900:c.instructions+=4;goto B4ca900;
case 0x4ca902:c.instructions+=3;goto B4ca902;
case 0x4ca904:c.instructions+=2;goto B4ca904;
case 0x4ca906:c.instructions+=1;goto B4ca906;
case 0x4ca90b:goto L4ca90b;
case 0x4ca90d:c.instructions+=1;goto B4ca90d;
case 0x4ca912:goto L4ca912;
case 0x4ca918:c.instructions+=37;goto B4ca918;
case 0x4ca91c:c.instructions+=36;goto B4ca91c;
case 0x4ca921:c.instructions+=35;goto B4ca921;
case 0x4ca923:c.instructions+=34;goto B4ca923;
case 0x4ca928:c.instructions+=33;goto B4ca928;
case 0x4ca932:c.instructions+=32;goto B4ca932;
case 0x4ca936:c.instructions+=31;goto B4ca936;
case 0x4ca93a:c.instructions+=30;goto B4ca93a;
case 0x4ca93e:c.instructions+=29;goto B4ca93e;
case 0x4ca942:c.instructions+=28;goto B4ca942;
case 0x4ca946:c.instructions+=27;goto B4ca946;
case 0x4ca94c:c.instructions+=26;goto B4ca94c;
case 0x4ca950:c.instructions+=25;goto B4ca950;
case 0x4ca954:c.instructions+=24;goto B4ca954;
case 0x4ca958:c.instructions+=23;goto B4ca958;
case 0x4ca95c:c.instructions+=22;goto B4ca95c;
case 0x4ca960:c.instructions+=21;goto B4ca960;
case 0x4ca964:c.instructions+=20;goto B4ca964;
case 0x4ca968:c.instructions+=19;goto B4ca968;
case 0x4ca96e:c.instructions+=18;goto B4ca96e;
case 0x4ca972:c.instructions+=17;goto B4ca972;
case 0x4ca974:c.instructions+=16;goto B4ca974;
case 0x4ca978:c.instructions+=15;goto B4ca978;
case 0x4ca97c:c.instructions+=14;goto B4ca97c;
case 0x4ca982:c.instructions+=13;goto B4ca982;
case 0x4ca986:c.instructions+=12;goto B4ca986;
case 0x4ca988:c.instructions+=11;goto B4ca988;
case 0x4ca98c:c.instructions+=10;goto B4ca98c;
case 0x4ca990:c.instructions+=9;goto B4ca990;
case 0x4ca992:c.instructions+=8;goto B4ca992;
case 0x4ca996:c.instructions+=7;goto B4ca996;
case 0x4ca99c:c.instructions+=6;goto B4ca99c;
case 0x4ca9a0:c.instructions+=5;goto B4ca9a0;
case 0x4ca9a2:c.instructions+=4;goto B4ca9a2;
case 0x4ca9a6:c.instructions+=3;goto B4ca9a6;
case 0x4ca9aa:c.instructions+=2;goto B4ca9aa;
case 0x4ca9b0:c.instructions+=1;goto B4ca9b0;
case 0x4ca9b2:goto L4ca9b2;
case 0x4ca9bc:c.instructions+=1;goto B4ca9bc;
case 0x4ca9be:goto L4ca9be;
case 0x4ca9c4:c.instructions+=2;goto B4ca9c4;
case 0x4ca9c6:c.instructions+=1;goto B4ca9c6;
case 0x4ca9c8:goto L4ca9c8;
case 0x4ca9ce:c.instructions+=2;goto B4ca9ce;
case 0x4ca9d0:c.instructions+=1;goto B4ca9d0;
case 0x4ca9d2:goto L4ca9d2;
case 0x4ca9d8:c.instructions+=2;goto B4ca9d8;
case 0x4ca9da:c.instructions+=1;goto B4ca9da;
case 0x4ca9dc:goto L4ca9dc;
case 0x4ca9e2:c.instructions+=2;goto B4ca9e2;
case 0x4ca9e4:c.instructions+=1;goto B4ca9e4;
case 0x4ca9e6:goto L4ca9e6;
case 0x4ca9ec:c.instructions+=2;goto B4ca9ec;
case 0x4ca9ee:c.instructions+=1;goto B4ca9ee;
case 0x4ca9f0:goto L4ca9f0;
case 0x4ca9f6:c.instructions+=2;goto B4ca9f6;
case 0x4ca9f8:c.instructions+=1;goto B4ca9f8;
case 0x4ca9fa:goto L4ca9fa;
case 0x4caa04:c.instructions+=1;goto B4caa04;
case 0x4caa06:goto L4caa06;
case 0x4caa10:c.instructions+=1;goto B4caa10;
case 0x4caa12:goto L4caa12;
case 0x4caa17:c.instructions+=1;goto B4caa17;
case 0x4caa19:goto L4caa19;
case 0x4caa1e:c.instructions+=2;goto B4caa1e;
case 0x4caa28:c.instructions+=1;goto B4caa28;
case 0x4caa2a:goto L4caa2a;
case 0x4caa34:goto L4caa34;
case 0x4caa35:c.instructions+=2;goto B4caa35;
case 0x4caa3a:c.instructions+=1;goto B4caa3a;
case 0x4caa3f:goto L4caa3f;
case 0x4caa40:c.instructions+=3;goto B4caa40;
case 0x4caa43:c.instructions+=2;goto B4caa43;
case 0x4caa44:c.instructions+=1;goto B4caa44;
case 0x4caa49:goto L4caa49;
case 0x4caa4d:c.instructions+=11;goto B4caa4d;
case 0x4caa50:c.instructions+=10;goto B4caa50;
case 0x4caa54:c.instructions+=9;goto B4caa54;
case 0x4caa57:c.instructions+=8;goto B4caa57;
case 0x4caa59:c.instructions+=7;goto B4caa59;
case 0x4caa5d:c.instructions+=6;goto B4caa5d;
case 0x4caa5e:c.instructions+=5;goto B4caa5e;
case 0x4caa62:c.instructions+=4;goto B4caa62;
case 0x4caa64:c.instructions+=3;goto B4caa64;
case 0x4caa66:c.instructions+=2;goto B4caa66;
case 0x4caa6a:c.instructions+=1;goto B4caa6a;
case 0x4caa6f:goto L4caa6f;
case 0x4caa72:c.instructions+=14;goto B4caa72;
case 0x4caa76:c.instructions+=13;goto B4caa76;
case 0x4caa7b:c.instructions+=12;goto B4caa7b;
case 0x4caa7d:c.instructions+=11;goto B4caa7d;
case 0x4caa80:c.instructions+=10;goto B4caa80;
case 0x4caa84:c.instructions+=9;goto B4caa84;
case 0x4caa87:c.instructions+=8;goto B4caa87;
case 0x4caa89:c.instructions+=7;goto B4caa89;
case 0x4caa8d:c.instructions+=6;goto B4caa8d;
case 0x4caa8e:c.instructions+=5;goto B4caa8e;
case 0x4caa92:c.instructions+=4;goto B4caa92;
case 0x4caa94:c.instructions+=3;goto B4caa94;
case 0x4caa96:c.instructions+=2;goto B4caa96;
case 0x4caa9a:c.instructions+=1;goto B4caa9a;
case 0x4caa9f:goto L4caa9f;
case 0x4caaa2:c.instructions+=9;goto B4caaa2;
case 0x4caaa4:c.instructions+=8;goto B4caaa4;
case 0x4caaa8:c.instructions+=7;goto B4caaa8;
case 0x4caaa9:c.instructions+=6;goto B4caaa9;
case 0x4caaad:c.instructions+=5;goto B4caaad;
case 0x4caab0:c.instructions+=4;goto B4caab0;
case 0x4caab3:c.instructions+=3;goto B4caab3;
case 0x4caab4:c.instructions+=2;goto B4caab4;
case 0x4caab5:c.instructions+=1;goto B4caab5;
case 0x4caaba:goto L4caaba;
case 0x4caabd:c.instructions+=6;goto B4caabd;
case 0x4caac1:c.instructions+=5;goto B4caac1;
case 0x4caac2:c.instructions+=4;goto B4caac2;
case 0x4caac6:c.instructions+=3;goto B4caac6;
case 0x4caac7:c.instructions+=2;goto B4caac7;
case 0x4caac8:c.instructions+=1;goto B4caac8;
case 0x4caacd:goto L4caacd;
case 0x4caad0:c.instructions+=6;goto B4caad0;
case 0x4caad4:c.instructions+=5;goto B4caad4;
case 0x4caad5:c.instructions+=4;goto B4caad5;
case 0x4caad9:c.instructions+=3;goto B4caad9;
case 0x4caada:c.instructions+=2;goto B4caada;
case 0x4caadb:c.instructions+=1;goto B4caadb;
case 0x4caae0:goto L4caae0;
case 0x4caae3:c.instructions+=6;goto B4caae3;
case 0x4caae7:c.instructions+=5;goto B4caae7;
case 0x4caae8:c.instructions+=4;goto B4caae8;
case 0x4caaec:c.instructions+=3;goto B4caaec;
case 0x4caaed:c.instructions+=2;goto B4caaed;
case 0x4caaee:c.instructions+=1;goto B4caaee;
case 0x4caaf3:goto L4caaf3;
case 0x4caaf8:c.instructions+=4;goto B4caaf8;
case 0x4caafb:c.instructions+=3;goto B4caafb;
case 0x4caafd:c.instructions+=2;goto B4caafd;
case 0x4cab05:c.instructions+=1;goto B4cab05;
case 0x4cab07:goto L4cab07;
case 0x4cab0e:c.instructions+=1;goto B4cab0e;
case 0x4cab10:goto L4cab10;
case 0x4cab14:c.instructions+=4;goto B4cab14;
case 0x4cab18:c.instructions+=3;goto B4cab18;
case 0x4cab19:c.instructions+=2;goto B4cab19;
case 0x4cab1a:c.instructions+=1;goto B4cab1a;
case 0x4cab1f:goto L4cab1f;
case 0x4cab22:c.instructions+=3;goto B4cab22;
case 0x4cab26:c.instructions+=2;goto B4cab26;
case 0x4cab2a:c.instructions+=1;goto B4cab2a;
case 0x4cab2c:goto L4cab2c;
case 0x4cab33:c.instructions+=1;goto B4cab33;
case 0x4cab35:goto L4cab35;
case 0x4cab39:c.instructions+=4;goto B4cab39;
case 0x4cab3d:c.instructions+=3;goto B4cab3d;
case 0x4cab3e:c.instructions+=2;goto B4cab3e;
case 0x4cab3f:c.instructions+=1;goto B4cab3f;
case 0x4cab44:goto L4cab44;
case 0x4cab47:c.instructions+=2;goto B4cab47;
case 0x4cab4b:c.instructions+=1;goto B4cab4b;
case 0x4cab4f:goto L4cab4f;
case 0x4cab55:c.instructions+=2;goto B4cab55;
case 0x4cab58:c.instructions+=1;goto B4cab58;
case 0x4cab5c:goto L4cab5c;
case 0x4cab60:c.instructions+=7;goto B4cab60;
case 0x4cab63:c.instructions+=6;goto B4cab63;
case 0x4cab65:c.instructions+=5;goto B4cab65;
case 0x4cab69:c.instructions+=4;goto B4cab69;
case 0x4cab6d:c.instructions+=3;goto B4cab6d;
case 0x4cab6e:c.instructions+=2;goto B4cab6e;
case 0x4cab6f:c.instructions+=1;goto B4cab6f;
case 0x4cab74:goto L4cab74;
case 0x4cab77:c.instructions+=3;goto B4cab77;
case 0x4cab78:c.instructions+=2;goto B4cab78;
case 0x4cab79:c.instructions+=1;goto B4cab79;
case 0x4cab7e:goto L4cab7e;
case 0x4cab83:c.instructions+=2;goto B4cab83;
case 0x4cab85:c.instructions+=1;goto B4cab85;
case 0x4cab8a:goto L4cab8a;
case 0x4cab8d:c.instructions+=10;goto B4cab8d;
case 0x4cab90:c.instructions+=9;goto B4cab90;
case 0x4cab94:c.instructions+=8;goto B4cab94;
case 0x4cab97:c.instructions+=7;goto B4cab97;
case 0x4cab9b:c.instructions+=6;goto B4cab9b;
case 0x4caba1:c.instructions+=5;goto B4caba1;
case 0x4caba5:c.instructions+=4;goto B4caba5;
case 0x4cabab:c.instructions+=3;goto B4cabab;
case 0x4cabae:c.instructions+=2;goto B4cabae;
case 0x4cabaf:c.instructions+=1;goto B4cabaf;
case 0x4cabb4:goto L4cabb4;
case 0x4cabb6:c.instructions+=3;goto B4cabb6;
case 0x4cabb9:c.instructions+=2;goto B4cabb9;
case 0x4cabbb:c.instructions+=1;goto B4cabbb;
case 0x4cabc0:goto L4cabc0;
case 0x4cabc2:c.instructions+=2;goto B4cabc2;
case 0x4cabc4:c.instructions+=1;goto B4cabc4;
case 0x4cabca:goto L4cabca;
case 0x4cabd0:c.instructions+=11;goto B4cabd0;
case 0x4cabd4:c.instructions+=10;goto B4cabd4;
case 0x4cabd8:c.instructions+=9;goto B4cabd8;
case 0x4cabde:c.instructions+=8;goto B4cabde;
case 0x4cabe2:c.instructions+=7;goto B4cabe2;
case 0x4cabe6:c.instructions+=6;goto B4cabe6;
case 0x4cabea:c.instructions+=5;goto B4cabea;
case 0x4cabf0:c.instructions+=4;goto B4cabf0;
case 0x4cabf4:c.instructions+=3;goto B4cabf4;
case 0x4cabfa:c.instructions+=2;goto B4cabfa;
case 0x4cabfe:c.instructions+=1;goto B4cabfe;
case 0x4cac02:goto L4cac02;
case 0x4cac06:c.instructions+=5;goto B4cac06;
case 0x4cac07:c.instructions+=4;goto B4cac07;
case 0x4cac0b:c.instructions+=3;goto B4cac0b;
case 0x4cac0c:c.instructions+=2;goto B4cac0c;
case 0x4cac0e:c.instructions+=1;goto B4cac0e;
case 0x4cac13:goto L4cac13;
case 0x4cac17:c.instructions+=13;goto B4cac17;
case 0x4cac1b:c.instructions+=12;goto B4cac1b;
case 0x4cac1c:c.instructions+=11;goto B4cac1c;
case 0x4cac20:c.instructions+=10;goto B4cac20;
case 0x4cac24:c.instructions+=9;goto B4cac24;
case 0x4cac28:c.instructions+=8;goto B4cac28;
case 0x4cac2c:c.instructions+=7;goto B4cac2c;
case 0x4cac30:c.instructions+=6;goto B4cac30;
case 0x4cac34:c.instructions+=5;goto B4cac34;
case 0x4cac38:c.instructions+=4;goto B4cac38;
case 0x4cac3c:c.instructions+=3;goto B4cac3c;
case 0x4cac40:c.instructions+=2;goto B4cac40;
case 0x4cac44:c.instructions+=1;goto B4cac44;
case 0x4cac49:goto L4cac49;
case 0x4cac4d:c.instructions+=3;goto B4cac4d;
case 0x4cac51:c.instructions+=2;goto B4cac51;
case 0x4cac52:c.instructions+=1;goto B4cac52;
case 0x4cac57:goto L4cac57;
case 0x4cac5b:c.instructions+=22;goto B4cac5b;
case 0x4cac5f:c.instructions+=21;goto B4cac5f;
case 0x4cac64:c.instructions+=20;goto B4cac64;
case 0x4cac66:c.instructions+=19;goto B4cac66;
case 0x4cac6c:c.instructions+=18;goto B4cac6c;
case 0x4cac70:c.instructions+=17;goto B4cac70;
case 0x4cac73:c.instructions+=16;goto B4cac73;
case 0x4cac75:c.instructions+=15;goto B4cac75;
case 0x4cac79:c.instructions+=14;goto B4cac79;
case 0x4cac7b:c.instructions+=13;goto B4cac7b;
case 0x4cac7f:c.instructions+=12;goto B4cac7f;
case 0x4cac83:c.instructions+=11;goto B4cac83;
case 0x4cac87:c.instructions+=10;goto B4cac87;
case 0x4cac8b:c.instructions+=9;goto B4cac8b;
case 0x4cac8d:c.instructions+=8;goto B4cac8d;
case 0x4cac91:c.instructions+=7;goto B4cac91;
case 0x4cac95:c.instructions+=6;goto B4cac95;
case 0x4cac99:c.instructions+=5;goto B4cac99;
case 0x4cac9d:c.instructions+=4;goto B4cac9d;
case 0x4cac9f:c.instructions+=3;goto B4cac9f;
case 0x4caca1:c.instructions+=2;goto B4caca1;
case 0x4caca5:c.instructions+=1;goto B4caca5;
case 0x4caca7:goto L4caca7;
case 0x4cacac:c.instructions+=1;goto B4cacac;
case 0x4cacb1:goto L4cacb1;
case 0x4cacb4:c.instructions+=1;goto B4cacb4;
case 0x4cacb6:goto L4cacb6;
case 0x4cacbb:c.instructions+=1;goto B4cacbb;
case 0x4cacc0:goto L4cacc0;
case 0x4cacc2:c.instructions+=1;goto B4cacc2;
case 0x4cacc4:goto L4cacc4;
case 0x4cacc9:c.instructions+=1;goto B4cacc9;
case 0x4cacce:goto L4cacce;
case 0x4cacd1:c.instructions+=1;goto B4cacd1;
case 0x4cacd3:goto L4cacd3;
case 0x4cacd8:c.instructions+=1;goto B4cacd8;
case 0x4cacdd:goto L4cacdd;
case 0x4cace0:c.instructions+=1;goto B4cace0;
case 0x4cace2:goto L4cace2;
case 0x4cace7:c.instructions+=2;goto B4cace7;
case 0x4cace9:c.instructions+=1;goto B4cace9;
case 0x4caceb:goto L4caceb;
case 0x4cacf0:c.instructions+=1;goto B4cacf0;
case 0x4cacf5:goto L4cacf5;
case 0x4cacf7:c.instructions+=1;goto B4cacf7;
case 0x4cacf9:goto L4cacf9;
case 0x4cad01:goto L4cad01;
case 0x4cad05:c.instructions+=4;goto B4cad05;
case 0x4cad09:c.instructions+=3;goto B4cad09;
case 0x4cad0b:c.instructions+=2;goto B4cad0b;
case 0x4cad0e:c.instructions+=1;goto B4cad0e;
case 0x4cad14:goto L4cad14;
case 0x4cad16:c.instructions+=1;goto B4cad16;
case 0x4cad1b:goto L4cad1b;
case 0x4cad1d:c.instructions+=1;goto B4cad1d;
case 0x4cad23:goto L4cad23;
case 0x4cad27:c.instructions+=4;goto B4cad27;
case 0x4cad2d:c.instructions+=3;goto B4cad2d;
case 0x4cad2f:c.instructions+=2;goto B4cad2f;
case 0x4cad32:c.instructions+=1;goto B4cad32;
case 0x4cad34:goto L4cad34;
case 0x4cad38:c.instructions+=1;goto B4cad38;
case 0x4cad3e:goto L4cad3e;
case 0x4cad41:c.instructions+=3;goto B4cad41;
case 0x4cad43:c.instructions+=2;goto B4cad43;
case 0x4cad45:c.instructions+=1;goto B4cad45;
case 0x4cad4b:goto L4cad4b;
case 0x4cad4f:c.instructions+=4;goto B4cad4f;
case 0x4cad55:c.instructions+=3;goto B4cad55;
case 0x4cad57:c.instructions+=2;goto B4cad57;
case 0x4cad5a:c.instructions+=1;goto B4cad5a;
case 0x4cad5c:goto L4cad5c;
case 0x4cad62:c.instructions+=8;goto B4cad62;
case 0x4cad66:c.instructions+=7;goto B4cad66;
case 0x4cad6a:c.instructions+=6;goto B4cad6a;
case 0x4cad6c:c.instructions+=5;goto B4cad6c;
case 0x4cad72:c.instructions+=4;goto B4cad72;
case 0x4cad76:c.instructions+=3;goto B4cad76;
case 0x4cad7a:c.instructions+=2;goto B4cad7a;
case 0x4cad80:c.instructions+=1;goto B4cad80;
case 0x4cad82:goto L4cad82;
case 0x4cad86:goto L4cad86;
case 0x4cad8a:c.instructions+=13;goto B4cad8a;
case 0x4cad8e:c.instructions+=12;goto B4cad8e;
case 0x4cad92:c.instructions+=11;goto B4cad92;
case 0x4cad96:c.instructions+=10;goto B4cad96;
case 0x4cad97:c.instructions+=9;goto B4cad97;
case 0x4cad98:c.instructions+=8;goto B4cad98;
case 0x4cad9c:c.instructions+=7;goto B4cad9c;
case 0x4cada0:c.instructions+=6;goto B4cada0;
case 0x4cada4:c.instructions+=5;goto B4cada4;
case 0x4cada6:c.instructions+=4;goto B4cada6;
case 0x4cadaa:c.instructions+=3;goto B4cadaa;
case 0x4cadae:c.instructions+=2;goto B4cadae;
case 0x4cadb0:c.instructions+=1;goto B4cadb0;
case 0x4cadb5:goto L4cadb5;
case 0x4cadb8:c.instructions+=9;goto B4cadb8;
case 0x4cadbc:c.instructions+=8;goto B4cadbc;
case 0x4cadbf:c.instructions+=7;goto B4cadbf;
case 0x4cadc2:c.instructions+=6;goto B4cadc2;
case 0x4cadc4:c.instructions+=5;goto B4cadc4;
case 0x4cadc8:c.instructions+=4;goto B4cadc8;
case 0x4cadce:c.instructions+=3;goto B4cadce;
case 0x4cadd2:c.instructions+=2;goto B4cadd2;
case 0x4cadd6:c.instructions+=1;goto B4cadd6;
case 0x4cadd8:goto L4cadd8;
case 0x4cadda:c.instructions+=1;goto B4cadda;
case 0x4caddc:goto L4caddc;
case 0x4cadde:goto L4cadde;
case 0x4cade2:c.instructions+=5;goto B4cade2;
case 0x4cade6:c.instructions+=4;goto B4cade6;
case 0x4cade7:c.instructions+=3;goto B4cade7;
case 0x4cade8:c.instructions+=2;goto B4cade8;
case 0x4cade9:c.instructions+=1;goto B4cade9;
case 0x4cadee:goto L4cadee;
case 0x4cadf1:c.instructions+=3;goto B4cadf1;
case 0x4cadf4:c.instructions+=2;goto B4cadf4;
case 0x4cadf6:c.instructions+=1;goto B4cadf6;
case 0x4cadf8:goto L4cadf8;
case 0x4cadfc:c.instructions+=4;goto B4cadfc;
case 0x4cadfe:c.instructions+=3;goto B4cadfe;
case 0x4cadff:c.instructions+=2;goto B4cadff;
case 0x4cae00:c.instructions+=1;goto B4cae00;
case 0x4cae05:goto L4cae05;
case 0x4cae08:c.instructions+=1;goto B4cae08;
case 0x4cae0a:goto L4cae0a;
case 0x4cae0e:c.instructions+=4;goto B4cae0e;
case 0x4cae10:c.instructions+=3;goto B4cae10;
case 0x4cae11:c.instructions+=2;goto B4cae11;
case 0x4cae12:c.instructions+=1;goto B4cae12;
case 0x4cae17:goto L4cae17;
case 0x4cae1a:c.instructions+=1;goto B4cae1a;
case 0x4cae1c:goto L4cae1c;
case 0x4cae1f:c.instructions+=2;goto B4cae1f;
case 0x4cae21:c.instructions+=1;goto B4cae21;
case 0x4cae23:goto L4cae23;
case 0x4cae25:c.instructions+=1;goto B4cae25;
case 0x4cae27:goto L4cae27;
case 0x4cae29:goto L4cae29;
case 0x4cae2e:c.instructions+=3;goto B4cae2e;
case 0x4cae30:c.instructions+=2;goto B4cae30;
case 0x4cae31:c.instructions+=1;goto B4cae31;
case 0x4cae36:goto L4cae36;
case 0x4cae39:goto L4cae39;
case 0x4cae3b:c.instructions+=1;goto B4cae3b;
case 0x4cae40:goto L4cae40;
case 0x4cae42:c.instructions+=2;goto B4cae42;
case 0x4cae44:c.instructions+=1;goto B4cae44;
case 0x4cae4a:goto L4cae4a;
case 0x4cae4b:c.instructions+=4;goto B4cae4b;
case 0x4cae4c:c.instructions+=3;goto B4cae4c;
case 0x4cae4d:c.instructions+=2;goto B4cae4d;
case 0x4cae50:c.instructions+=1;goto B4cae50;
case 0x4cae60:goto L4cae60;
case 0x4cae61:c.instructions+=22;goto B4cae61;
case 0x4cae63:c.instructions+=21;goto B4cae63;
case 0x4cae66:c.instructions+=20;goto B4cae66;
case 0x4cae6c:c.instructions+=19;goto B4cae6c;
case 0x4cae6d:c.instructions+=18;goto B4cae6d;
case 0x4cae6f:c.instructions+=17;goto B4cae6f;
case 0x4cae72:c.instructions+=16;goto B4cae72;
case 0x4cae78:c.instructions+=15;goto B4cae78;
case 0x4cae7e:c.instructions+=14;goto B4cae7e;
case 0x4cae80:c.instructions+=13;goto B4cae80;
case 0x4cae83:c.instructions+=12;goto B4cae83;
case 0x4cae89:c.instructions+=11;goto B4cae89;
case 0x4cae8c:c.instructions+=10;goto B4cae8c;
case 0x4cae92:c.instructions+=9;goto B4cae92;
case 0x4cae95:c.instructions+=8;goto B4cae95;
case 0x4cae98:c.instructions+=7;goto B4cae98;
case 0x4cae9b:c.instructions+=6;goto B4cae9b;
case 0x4cae9e:c.instructions+=5;goto B4cae9e;
case 0x4caea4:c.instructions+=4;goto B4caea4;
case 0x4caeaa:c.instructions+=3;goto B4caeaa;
case 0x4caeac:c.instructions+=2;goto B4caeac;
case 0x4caeaf:c.instructions+=1;goto B4caeaf;
case 0x4caeb1:goto L4caeb1;
case 0x4caeb7:c.instructions+=3;goto B4caeb7;
case 0x4caebd:c.instructions+=2;goto B4caebd;
case 0x4caec0:c.instructions+=1;goto B4caec0;
case 0x4caec3:goto L4caec3;
case 0x4caec6:c.instructions+=7;goto B4caec6;
case 0x4caec7:c.instructions+=6;goto B4caec7;
case 0x4caeca:c.instructions+=5;goto B4caeca;
case 0x4caecb:c.instructions+=4;goto B4caecb;
case 0x4caecd:c.instructions+=3;goto B4caecd;
case 0x4caecf:c.instructions+=2;goto B4caecf;
case 0x4caed1:c.instructions+=1;goto B4caed1;
case 0x4caed6:goto L4caed6;
case 0x4caed8:c.instructions+=1;goto B4caed8;
case 0x4caedd:goto L4caedd;
case 0x4caee3:c.instructions+=20;goto B4caee3;
case 0x4caee6:c.instructions+=19;goto B4caee6;
case 0x4caee9:c.instructions+=18;goto B4caee9;
case 0x4caeec:c.instructions+=17;goto B4caeec;
case 0x4caeed:c.instructions+=16;goto B4caeed;
case 0x4caef0:c.instructions+=15;goto B4caef0;
case 0x4caef1:c.instructions+=14;goto B4caef1;
case 0x4caef2:c.instructions+=13;goto B4caef2;
case 0x4caef5:c.instructions+=12;goto B4caef5;
case 0x4caef8:c.instructions+=11;goto B4caef8;
case 0x4caefb:c.instructions+=10;goto B4caefb;
case 0x4caefe:c.instructions+=9;goto B4caefe;
case 0x4caf01:c.instructions+=8;goto B4caf01;
case 0x4caf07:c.instructions+=7;goto B4caf07;
case 0x4caf0a:c.instructions+=6;goto B4caf0a;
case 0x4caf0d:c.instructions+=5;goto B4caf0d;
case 0x4caf10:c.instructions+=4;goto B4caf10;
case 0x4caf13:c.instructions+=3;goto B4caf13;
case 0x4caf16:c.instructions+=2;goto B4caf16;
case 0x4caf19:c.instructions+=1;goto B4caf19;
case 0x4caf1e:goto L4caf1e;
case 0x4caf21:c.instructions+=6;goto B4caf21;
case 0x4caf24:c.instructions+=5;goto B4caf24;
case 0x4caf25:c.instructions+=4;goto B4caf25;
case 0x4caf28:c.instructions+=3;goto B4caf28;
case 0x4caf29:c.instructions+=2;goto B4caf29;
case 0x4caf2a:c.instructions+=1;goto B4caf2a;
case 0x4caf2f:goto L4caf2f;
case 0x4caf32:c.instructions+=6;goto B4caf32;
case 0x4caf35:c.instructions+=5;goto B4caf35;
case 0x4caf36:c.instructions+=4;goto B4caf36;
case 0x4caf39:c.instructions+=3;goto B4caf39;
case 0x4caf3a:c.instructions+=2;goto B4caf3a;
case 0x4caf3b:c.instructions+=1;goto B4caf3b;
case 0x4caf40:goto L4caf40;
case 0x4caf43:c.instructions+=6;goto B4caf43;
case 0x4caf46:c.instructions+=5;goto B4caf46;
case 0x4caf47:c.instructions+=4;goto B4caf47;
case 0x4caf4a:c.instructions+=3;goto B4caf4a;
case 0x4caf4b:c.instructions+=2;goto B4caf4b;
case 0x4caf4c:c.instructions+=1;goto B4caf4c;
case 0x4caf51:goto L4caf51;
case 0x4caf57:c.instructions+=5;goto B4caf57;
case 0x4caf5c:c.instructions+=4;goto B4caf5c;
case 0x4caf5f:c.instructions+=3;goto B4caf5f;
case 0x4caf61:c.instructions+=2;goto B4caf61;
case 0x4caf62:c.instructions+=1;goto B4caf62;
case 0x4caf64:goto L4caf64;
case 0x4caf6b:c.instructions+=1;goto B4caf6b;
case 0x4caf6d:goto L4caf6d;
case 0x4caf70:c.instructions+=5;goto B4caf70;
case 0x4caf72:c.instructions+=4;goto B4caf72;
case 0x4caf75:c.instructions+=3;goto B4caf75;
case 0x4caf76:c.instructions+=2;goto B4caf76;
case 0x4caf77:c.instructions+=1;goto B4caf77;
case 0x4caf7c:goto L4caf7c;
case 0x4caf7f:c.instructions+=3;goto B4caf7f;
case 0x4caf82:c.instructions+=2;goto B4caf82;
case 0x4caf85:c.instructions+=1;goto B4caf85;
case 0x4caf87:goto L4caf87;
case 0x4caf8e:c.instructions+=1;goto B4caf8e;
case 0x4caf90:goto L4caf90;
case 0x4caf93:c.instructions+=5;goto B4caf93;
case 0x4caf95:c.instructions+=4;goto B4caf95;
case 0x4caf98:c.instructions+=3;goto B4caf98;
case 0x4caf99:c.instructions+=2;goto B4caf99;
case 0x4caf9a:c.instructions+=1;goto B4caf9a;
case 0x4caf9f:goto L4caf9f;
case 0x4cafa2:c.instructions+=2;goto B4cafa2;
case 0x4cafa5:c.instructions+=1;goto B4cafa5;
case 0x4cafa8:goto L4cafa8;
case 0x4cafae:c.instructions+=1;goto B4cafae;
case 0x4cafb1:goto L4cafb1;
case 0x4cafb4:c.instructions+=16;goto B4cafb4;
case 0x4cafb7:c.instructions+=15;goto B4cafb7;
case 0x4cafba:c.instructions+=14;goto B4cafba;
case 0x4cafbd:c.instructions+=13;goto B4cafbd;
case 0x4cafc0:c.instructions+=12;goto B4cafc0;
case 0x4cafc3:c.instructions+=11;goto B4cafc3;
case 0x4cafc6:c.instructions+=10;goto B4cafc6;
case 0x4cafc9:c.instructions+=9;goto B4cafc9;
case 0x4cafcc:c.instructions+=8;goto B4cafcc;
case 0x4cafcf:c.instructions+=7;goto B4cafcf;
case 0x4cafd2:c.instructions+=6;goto B4cafd2;
case 0x4cafd5:c.instructions+=5;goto B4cafd5;
case 0x4cafdb:c.instructions+=4;goto B4cafdb;
case 0x4cafde:c.instructions+=3;goto B4cafde;
case 0x4cafe1:c.instructions+=2;goto B4cafe1;
case 0x4cafe2:c.instructions+=1;goto B4cafe2;
case 0x4cafe7:goto L4cafe7;
case 0x4cafea:c.instructions+=4;goto B4cafea;
case 0x4cafed:c.instructions+=3;goto B4cafed;
case 0x4caff3:c.instructions+=2;goto B4caff3;
case 0x4caff6:c.instructions+=1;goto B4caff6;
case 0x4caffb:goto L4caffb;
case 0x4caffe:c.instructions+=1;goto B4caffe;
default:missing_instruction(c.pc);}
B4ca003:L4ca003:{c.instructions+=2;NFSU2_TR(0x4ca003);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca004:{NFSU2_TR(0x4ca004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca009ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ca009:L4ca009:{c.instructions+=7;NFSU2_TR(0x4ca009);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca00c:{NFSU2_TR(0x4ca00c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca00d:{NFSU2_TR(0x4ca00d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca00e:{NFSU2_TR(0x4ca00e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ca00f:{NFSU2_TR(0x4ca00f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ca010:{NFSU2_TR(0x4ca010);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ca013:{NFSU2_TR(0x4ca013);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca020:L4ca020:{c.instructions+=4;NFSU2_TR(0x4ca020);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca024:{NFSU2_TR(0x4ca024);
__builtin_memmove((R+8),(R+4),4);
}
B4ca026:{NFSU2_TR(0x4ca026);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B4ca029:{NFSU2_TR(0x4ca029);
if(r1(R+518)){{goto L4ca088;}}
}
B4ca02b:L4ca02b:{c.instructions+=3;NFSU2_TR(0x4ca02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca02e:{NFSU2_TR(0x4ca02e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca030:{NFSU2_TR(0x4ca030);
if(r1(R+518)){{goto L4ca045;}}
}
B4ca032:L4ca032:{c.instructions+=2;NFSU2_TR(0x4ca032);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca034:{NFSU2_TR(0x4ca034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca039ull));
TAIL_STATIC(0x4abfe0u,4ab);
}
B4ca039:L4ca039:{c.instructions+=3;NFSU2_TR(0x4ca039);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca03c:{NFSU2_TR(0x4ca03c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca03d:{NFSU2_TR(0x4ca03d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca042ull));
TAIL_STATIC(0x4c9170u,4c9);
}
B4ca042:L4ca042:{c.instructions+=1;NFSU2_TR(0x4ca042);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca045:L4ca045:{c.instructions+=3;NFSU2_TR(0x4ca045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca048:{NFSU2_TR(0x4ca048);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca04a:{NFSU2_TR(0x4ca04a);
if(r1(R+518)){{goto L4ca05f;}}
}
B4ca04c:L4ca04c:{c.instructions+=2;NFSU2_TR(0x4ca04c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca04e:{NFSU2_TR(0x4ca04e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca053ull));
TAIL_STATIC(0x4abf70u,4ab);
}
B4ca053:L4ca053:{c.instructions+=3;NFSU2_TR(0x4ca053);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca056:{NFSU2_TR(0x4ca056);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca057:{NFSU2_TR(0x4ca057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca05cull));
TAIL_STATIC(0x4c9170u,4c9);
}
B4ca05c:L4ca05c:{c.instructions+=1;NFSU2_TR(0x4ca05c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca05f:L4ca05f:{c.instructions+=3;NFSU2_TR(0x4ca05f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca062:{NFSU2_TR(0x4ca062);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca064:{NFSU2_TR(0x4ca064);
if(r1(R+518)){{goto L4ca075;}}
}
B4ca066:L4ca066:{c.instructions+=4;NFSU2_TR(0x4ca066);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca069:{NFSU2_TR(0x4ca069);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca06b:{NFSU2_TR(0x4ca06b);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca06d:{NFSU2_TR(0x4ca06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca072ull));
TAIL_STATIC(0x4c9170u,4c9);
}
B4ca072:L4ca072:{c.instructions+=1;NFSU2_TR(0x4ca072);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca075:L4ca075:{c.instructions+=3;NFSU2_TR(0x4ca075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca078:{NFSU2_TR(0x4ca078);
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
B4ca07a:{NFSU2_TR(0x4ca07a);
if(r1(R+518)){{goto L4ca088;}}
}
B4ca07c:L4ca07c:{c.instructions+=4;NFSU2_TR(0x4ca07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca07f:{NFSU2_TR(0x4ca07f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca081:{NFSU2_TR(0x4ca081);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca083:{NFSU2_TR(0x4ca083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca088ull));
TAIL_STATIC(0x4c9170u,4c9);
}
B4ca088:L4ca088:{c.instructions+=1;NFSU2_TR(0x4ca088);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca090:L4ca090:{c.instructions+=19;NFSU2_TR(0x4ca090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ca093:{NFSU2_TR(0x4ca093);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca094:{NFSU2_TR(0x4ca094);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ca098:{NFSU2_TR(0x4ca098);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca099:{NFSU2_TR(0x4ca099);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ca09d:{NFSU2_TR(0x4ca09d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca09e:{NFSU2_TR(0x4ca09e);
__builtin_memmove((R+24),(R+4),4);
}
B4ca0a0:{NFSU2_TR(0x4ca0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca0a3:{NFSU2_TR(0x4ca0a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca0a7:{NFSU2_TR(0x4ca0a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca0a8:{NFSU2_TR(0x4ca0a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca0ab:{NFSU2_TR(0x4ca0ab);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfdfbffffull))));
}
B4ca0b1:{NFSU2_TR(0x4ca0b1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+12))));
}
B4ca0b3:{NFSU2_TR(0x4ca0b3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+20))));
}
B4ca0b5:{NFSU2_TR(0x4ca0b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca0b7:{NFSU2_TR(0x4ca0b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca0bb:{NFSU2_TR(0x4ca0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca0bf:{NFSU2_TR(0x4ca0bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca0c3:{NFSU2_TR(0x4ca0c3);
if(r1(R+518)){{goto L4ca0df;}}
}
B4ca0c5:L4ca0c5:{c.instructions+=5;NFSU2_TR(0x4ca0c5);
__builtin_memmove((R+0),(R+28),4);
}
B4ca0c7:{NFSU2_TR(0x4ca0c7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1000ull))));
}
B4ca0cc:{NFSU2_TR(0x4ca0cc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca0ce:{NFSU2_TR(0x4ca0ce);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca0d0:{NFSU2_TR(0x4ca0d0);
if(r1(R+518)){{goto L4ca0df;}}
}
B4ca0d2:L4ca0d2:{c.instructions+=4;NFSU2_TR(0x4ca0d2);
__builtin_memmove((R+0),(R+12),4);
}
B4ca0d4:{NFSU2_TR(0x4ca0d4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1000ull))));
}
B4ca0d9:{NFSU2_TR(0x4ca0d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca0da:{NFSU2_TR(0x4ca0da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca0dfull));
TAIL_STATIC(0x5f1e10u,5f1);
}
B4ca0df:L4ca0df:{c.instructions+=3;NFSU2_TR(0x4ca0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca0e2:{NFSU2_TR(0x4ca0e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca0e4:{NFSU2_TR(0x4ca0e4);
if(r1(R+518)){{goto L4ca0f8;}}
}
B4ca0e6:L4ca0e6:{c.instructions+=5;NFSU2_TR(0x4ca0e6);
__builtin_memmove((R+0),(R+28),4);
}
B4ca0e8:{NFSU2_TR(0x4ca0e8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
}
B4ca0eb:{NFSU2_TR(0x4ca0eb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca0ed:{NFSU2_TR(0x4ca0ed);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca0ef:{NFSU2_TR(0x4ca0ef);
if(r1(R+518)){{goto L4ca0f8;}}
}
B4ca0f1:L4ca0f1:{c.instructions+=3;NFSU2_TR(0x4ca0f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca0f2:{NFSU2_TR(0x4ca0f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca0f3:{NFSU2_TR(0x4ca0f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca0f8ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca0f8:L4ca0f8:{c.instructions+=3;NFSU2_TR(0x4ca0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca0fb:{NFSU2_TR(0x4ca0fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca0fd:{NFSU2_TR(0x4ca0fd);
if(r1(R+518)){{goto L4ca111;}}
}
B4ca0ff:L4ca0ff:{c.instructions+=5;NFSU2_TR(0x4ca0ff);
__builtin_memmove((R+0),(R+28),4);
}
B4ca101:{NFSU2_TR(0x4ca101);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
}
B4ca104:{NFSU2_TR(0x4ca104);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca106:{NFSU2_TR(0x4ca106);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca108:{NFSU2_TR(0x4ca108);
if(r1(R+518)){{goto L4ca111;}}
}
B4ca10a:L4ca10a:{c.instructions+=3;NFSU2_TR(0x4ca10a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca10b:{NFSU2_TR(0x4ca10b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca10c:{NFSU2_TR(0x4ca10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca111ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca111:L4ca111:{c.instructions+=3;NFSU2_TR(0x4ca111);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca114:{NFSU2_TR(0x4ca114);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca116:{NFSU2_TR(0x4ca116);
if(r1(R+518)){{goto L4ca12a;}}
}
B4ca118:L4ca118:{c.instructions+=5;NFSU2_TR(0x4ca118);
__builtin_memmove((R+0),(R+28),4);
}
B4ca11a:{NFSU2_TR(0x4ca11a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x40ull))));
}
B4ca11d:{NFSU2_TR(0x4ca11d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca11f:{NFSU2_TR(0x4ca11f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca121:{NFSU2_TR(0x4ca121);
if(r1(R+518)){{goto L4ca12a;}}
}
B4ca123:L4ca123:{c.instructions+=3;NFSU2_TR(0x4ca123);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca124:{NFSU2_TR(0x4ca124);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca125:{NFSU2_TR(0x4ca125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca12aull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca12a:L4ca12a:{c.instructions+=3;NFSU2_TR(0x4ca12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca12d:{NFSU2_TR(0x4ca12d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca12f:{NFSU2_TR(0x4ca12f);
if(r1(R+518)){{goto L4ca145;}}
}
B4ca131:L4ca131:{c.instructions+=5;NFSU2_TR(0x4ca131);
__builtin_memmove((R+0),(R+28),4);
}
B4ca133:{NFSU2_TR(0x4ca133);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x200ull))));
}
B4ca138:{NFSU2_TR(0x4ca138);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca13a:{NFSU2_TR(0x4ca13a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca13c:{NFSU2_TR(0x4ca13c);
if(r1(R+518)){{goto L4ca145;}}
}
B4ca13e:L4ca13e:{c.instructions+=3;NFSU2_TR(0x4ca13e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca13f:{NFSU2_TR(0x4ca13f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca140:{NFSU2_TR(0x4ca140);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca145ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca145:L4ca145:{c.instructions+=3;NFSU2_TR(0x4ca145);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca148:{NFSU2_TR(0x4ca148);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca14a:{NFSU2_TR(0x4ca14a);
if(r1(R+518)){{goto L4ca160;}}
}
B4ca14c:L4ca14c:{c.instructions+=5;NFSU2_TR(0x4ca14c);
__builtin_memmove((R+0),(R+28),4);
}
B4ca14e:{NFSU2_TR(0x4ca14e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x20000000ull))));
}
B4ca153:{NFSU2_TR(0x4ca153);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca155:{NFSU2_TR(0x4ca155);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca157:{NFSU2_TR(0x4ca157);
if(r1(R+518)){{goto L4ca160;}}
}
B4ca159:L4ca159:{c.instructions+=3;NFSU2_TR(0x4ca159);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca15a:{NFSU2_TR(0x4ca15a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca15b:{NFSU2_TR(0x4ca15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca160ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca160:L4ca160:{c.instructions+=3;NFSU2_TR(0x4ca160);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca163:{NFSU2_TR(0x4ca163);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca165:{NFSU2_TR(0x4ca165);
if(r1(R+518)){{goto L4ca17e;}}
}
B4ca167:L4ca167:{c.instructions+=5;NFSU2_TR(0x4ca167);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ca16b:{NFSU2_TR(0x4ca16b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x40000ull))));
}
B4ca171:{NFSU2_TR(0x4ca171);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca173:{NFSU2_TR(0x4ca173);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca175:{NFSU2_TR(0x4ca175);
if(r1(R+518)){{goto L4ca17e;}}
}
B4ca177:L4ca177:{c.instructions+=3;NFSU2_TR(0x4ca177);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca178:{NFSU2_TR(0x4ca178);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca179:{NFSU2_TR(0x4ca179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca17eull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca17e:L4ca17e:{c.instructions+=3;NFSU2_TR(0x4ca17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca181:{NFSU2_TR(0x4ca181);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca183:{NFSU2_TR(0x4ca183);
if(r1(R+518)){{goto L4ca199;}}
}
B4ca185:L4ca185:{c.instructions+=5;NFSU2_TR(0x4ca185);
__builtin_memmove((R+0),(R+28),4);
}
B4ca187:{NFSU2_TR(0x4ca187);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80000000ull))));
}
B4ca18c:{NFSU2_TR(0x4ca18c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca18e:{NFSU2_TR(0x4ca18e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca190:{NFSU2_TR(0x4ca190);
if(r1(R+518)){{goto L4ca199;}}
}
B4ca192:L4ca192:{c.instructions+=3;NFSU2_TR(0x4ca192);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca193:{NFSU2_TR(0x4ca193);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca194:{NFSU2_TR(0x4ca194);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca199ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca199:L4ca199:{c.instructions+=3;NFSU2_TR(0x4ca199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca19c:{NFSU2_TR(0x4ca19c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca19e:{NFSU2_TR(0x4ca19e);
if(r1(R+518)){{goto L4ca1b2;}}
}
B4ca1a0:L4ca1a0:{c.instructions+=5;NFSU2_TR(0x4ca1a0);
__builtin_memmove((R+0),(R+28),4);
}
B4ca1a2:{NFSU2_TR(0x4ca1a2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4ull))));
}
B4ca1a5:{NFSU2_TR(0x4ca1a5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca1a7:{NFSU2_TR(0x4ca1a7);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca1a9:{NFSU2_TR(0x4ca1a9);
if(r1(R+518)){{goto L4ca1b2;}}
}
B4ca1ab:L4ca1ab:{c.instructions+=3;NFSU2_TR(0x4ca1ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1ac:{NFSU2_TR(0x4ca1ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1ad:{NFSU2_TR(0x4ca1ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca1b2ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca1b2:L4ca1b2:{c.instructions+=3;NFSU2_TR(0x4ca1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca1b5:{NFSU2_TR(0x4ca1b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca1b7:{NFSU2_TR(0x4ca1b7);
if(r1(R+518)){{goto L4ca1cb;}}
}
B4ca1b9:L4ca1b9:{c.instructions+=5;NFSU2_TR(0x4ca1b9);
__builtin_memmove((R+0),(R+28),4);
}
B4ca1bb:{NFSU2_TR(0x4ca1bb);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B4ca1be:{NFSU2_TR(0x4ca1be);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca1c0:{NFSU2_TR(0x4ca1c0);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca1c2:{NFSU2_TR(0x4ca1c2);
if(r1(R+518)){{goto L4ca1cb;}}
}
B4ca1c4:L4ca1c4:{c.instructions+=3;NFSU2_TR(0x4ca1c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1c5:{NFSU2_TR(0x4ca1c5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1c6:{NFSU2_TR(0x4ca1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca1cbull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca1cb:L4ca1cb:{c.instructions+=3;NFSU2_TR(0x4ca1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca1ce:{NFSU2_TR(0x4ca1ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca1d0:{NFSU2_TR(0x4ca1d0);
if(r1(R+518)){{goto L4ca1e6;}}
}
B4ca1d2:L4ca1d2:{c.instructions+=5;NFSU2_TR(0x4ca1d2);
__builtin_memmove((R+0),(R+28),4);
}
B4ca1d4:{NFSU2_TR(0x4ca1d4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x400ull))));
}
B4ca1d9:{NFSU2_TR(0x4ca1d9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca1db:{NFSU2_TR(0x4ca1db);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca1dd:{NFSU2_TR(0x4ca1dd);
if(r1(R+518)){{goto L4ca1e6;}}
}
B4ca1df:L4ca1df:{c.instructions+=3;NFSU2_TR(0x4ca1df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1e0:{NFSU2_TR(0x4ca1e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1e1:{NFSU2_TR(0x4ca1e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca1e6ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca1e6:L4ca1e6:{c.instructions+=3;NFSU2_TR(0x4ca1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca1e9:{NFSU2_TR(0x4ca1e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca1eb:{NFSU2_TR(0x4ca1eb);
if(r1(R+518)){{goto L4ca201;}}
}
B4ca1ed:L4ca1ed:{c.instructions+=5;NFSU2_TR(0x4ca1ed);
__builtin_memmove((R+0),(R+28),4);
}
B4ca1ef:{NFSU2_TR(0x4ca1ef);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800000ull))));
}
B4ca1f4:{NFSU2_TR(0x4ca1f4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca1f6:{NFSU2_TR(0x4ca1f6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca1f8:{NFSU2_TR(0x4ca1f8);
if(r1(R+518)){{goto L4ca201;}}
}
B4ca1fa:L4ca1fa:{c.instructions+=3;NFSU2_TR(0x4ca1fa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1fb:{NFSU2_TR(0x4ca1fb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca1fc:{NFSU2_TR(0x4ca1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca201ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca201:L4ca201:{c.instructions+=3;NFSU2_TR(0x4ca201);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4ca206:{NFSU2_TR(0x4ca206);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca208:{NFSU2_TR(0x4ca208);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca251;}}
}
B4ca20a:L4ca20a:{c.instructions+=3;NFSU2_TR(0x4ca20a);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4ca20f:{NFSU2_TR(0x4ca20f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca211:{NFSU2_TR(0x4ca211);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca251;}}
}
B4ca213:L4ca213:{c.instructions+=7;NFSU2_TR(0x4ca213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca216:{NFSU2_TR(0x4ca216);
__builtin_memmove((R+0),(R+12),4);
}
B4ca218:{NFSU2_TR(0x4ca218);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x400ull))));
}
B4ca21d:{NFSU2_TR(0x4ca21d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ca21f:{NFSU2_TR(0x4ca21f);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca221:{NFSU2_TR(0x4ca221);
u8 U[4];
w4(U+0,u32(0x795c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca226:{NFSU2_TR(0x4ca226);
if(r1(R+518)){{goto L4ca23c;}}
}
B4ca228:L4ca228:{c.instructions+=1;NFSU2_TR(0x4ca228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca22dull));
TAIL_STATIC(0x505450u,505);
}
B4ca22d:L4ca22d:{c.instructions+=3;NFSU2_TR(0x4ca22d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca22e:{NFSU2_TR(0x4ca22e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca22f:{NFSU2_TR(0x4ca22f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca234ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ca234:L4ca234:{c.instructions+=2;NFSU2_TR(0x4ca234);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca235:{NFSU2_TR(0x4ca235);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca23aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ca23a:L4ca23a:{c.instructions+=1;NFSU2_TR(0x4ca23a);
{goto L4ca24e;}
}
B4ca23c:L4ca23c:{c.instructions+=1;NFSU2_TR(0x4ca23c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca241ull));
TAIL_STATIC(0x505450u,505);
}
B4ca241:L4ca241:{c.instructions+=3;NFSU2_TR(0x4ca241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca242:{NFSU2_TR(0x4ca242);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca243:{NFSU2_TR(0x4ca243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca248ull));
TAIL_STATIC(0x5379c0u,537);
}
B4ca248:L4ca248:{c.instructions+=2;NFSU2_TR(0x4ca248);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca249:{NFSU2_TR(0x4ca249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca24eull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ca24e:L4ca24e:{c.instructions+=1;NFSU2_TR(0x4ca24e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca251:L4ca251:{c.instructions+=7;NFSU2_TR(0x4ca251);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ca255:{NFSU2_TR(0x4ca255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca258:{NFSU2_TR(0x4ca258);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x400ull))));
}
B4ca25e:{NFSU2_TR(0x4ca25e);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4ca260:{NFSU2_TR(0x4ca260);
__builtin_memmove((R+4),(R+12),4);
}
B4ca262:{NFSU2_TR(0x4ca262);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+20))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4ca264:{NFSU2_TR(0x4ca264);
if(r1(R+518)){{goto L4ca2d7;}}
}
B4ca266:L4ca266:{c.instructions+=3;NFSU2_TR(0x4ca266);
u8 U[4];
w4(U+0,u32(0x795c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca26b:{NFSU2_TR(0x4ca26b);
u8 U[4];
w4(U+0,u32(0x795c48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca270:{NFSU2_TR(0x4ca270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca275ull));
TAIL_STATIC(0x505450u,505);
}
B4ca275:L4ca275:{c.instructions+=4;NFSU2_TR(0x4ca275);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca278:{NFSU2_TR(0x4ca278);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca279:{NFSU2_TR(0x4ca279);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca27a:{NFSU2_TR(0x4ca27a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca27full));
TAIL_STATIC(0x537cc0u,537);
}
B4ca27f:L4ca27f:{c.instructions+=3;NFSU2_TR(0x4ca27f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca282:{NFSU2_TR(0x4ca282);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca284:{NFSU2_TR(0x4ca284);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca2a7;}}
}
B4ca286:L4ca286:{c.instructions+=5;NFSU2_TR(0x4ca286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca289:{NFSU2_TR(0x4ca289);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca28b:{NFSU2_TR(0x4ca28b);
u8 U[4];
w4(U+0,u32(0x795c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca290:{NFSU2_TR(0x4ca290);
u8 U[4];
w4(U+0,u32(0x795c48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca295:{NFSU2_TR(0x4ca295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca29aull));
TAIL_STATIC(0x505450u,505);
}
B4ca29a:L4ca29a:{c.instructions+=4;NFSU2_TR(0x4ca29a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca29d:{NFSU2_TR(0x4ca29d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca29e:{NFSU2_TR(0x4ca29e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca29f:{NFSU2_TR(0x4ca29f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca2a4ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca2a4:L4ca2a4:{c.instructions+=1;NFSU2_TR(0x4ca2a4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca2a7:L4ca2a7:{c.instructions+=4;NFSU2_TR(0x4ca2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca2aa:{NFSU2_TR(0x4ca2aa);
u8 U[4];
w4(U+0,u32(0x795c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2af:{NFSU2_TR(0x4ca2af);
u8 U[4];
w4(U+0,u32(0x795c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2b4:{NFSU2_TR(0x4ca2b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca2b9ull));
TAIL_STATIC(0x505450u,505);
}
B4ca2b9:L4ca2b9:{c.instructions+=4;NFSU2_TR(0x4ca2b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca2bc:{NFSU2_TR(0x4ca2bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2bd:{NFSU2_TR(0x4ca2bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2be:{NFSU2_TR(0x4ca2be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca2c3ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca2c3:L4ca2c3:{c.instructions+=3;NFSU2_TR(0x4ca2c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca2c6:{NFSU2_TR(0x4ca2c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca2c8:{NFSU2_TR(0x4ca2c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca35c;}}
}
B4ca2ce:L4ca2ce:{c.instructions+=3;NFSU2_TR(0x4ca2ce);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2d0:{NFSU2_TR(0x4ca2d0);
u8 U[4];
w4(U+0,u32(0x795c5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2d5:{NFSU2_TR(0x4ca2d5);
{goto L4ca342;}
}
B4ca2d7:L4ca2d7:{c.instructions+=3;NFSU2_TR(0x4ca2d7);
u8 U[4];
w4(U+0,u32(0x795c3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2dc:{NFSU2_TR(0x4ca2dc);
u8 U[4];
w4(U+0,u32(0x795c48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2e1:{NFSU2_TR(0x4ca2e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca2e6ull));
TAIL_STATIC(0x505450u,505);
}
B4ca2e6:L4ca2e6:{c.instructions+=4;NFSU2_TR(0x4ca2e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca2e9:{NFSU2_TR(0x4ca2e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2ea:{NFSU2_TR(0x4ca2ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2eb:{NFSU2_TR(0x4ca2eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca2f0ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca2f0:L4ca2f0:{c.instructions+=3;NFSU2_TR(0x4ca2f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca2f3:{NFSU2_TR(0x4ca2f3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca2f5:{NFSU2_TR(0x4ca2f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca318;}}
}
B4ca2f7:L4ca2f7:{c.instructions+=5;NFSU2_TR(0x4ca2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca2fa:{NFSU2_TR(0x4ca2fa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca2fc:{NFSU2_TR(0x4ca2fc);
u8 U[4];
w4(U+0,u32(0x795c3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca301:{NFSU2_TR(0x4ca301);
u8 U[4];
w4(U+0,u32(0x795c48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca306:{NFSU2_TR(0x4ca306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca30bull));
TAIL_STATIC(0x505450u,505);
}
B4ca30b:L4ca30b:{c.instructions+=4;NFSU2_TR(0x4ca30b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca30e:{NFSU2_TR(0x4ca30e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca30f:{NFSU2_TR(0x4ca30f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca310:{NFSU2_TR(0x4ca310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca315ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca315:L4ca315:{c.instructions+=1;NFSU2_TR(0x4ca315);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca318:L4ca318:{c.instructions+=4;NFSU2_TR(0x4ca318);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca31b:{NFSU2_TR(0x4ca31b);
u8 U[4];
w4(U+0,u32(0x795c3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca320:{NFSU2_TR(0x4ca320);
u8 U[4];
w4(U+0,u32(0x795c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca325:{NFSU2_TR(0x4ca325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca32aull));
TAIL_STATIC(0x505450u,505);
}
B4ca32a:L4ca32a:{c.instructions+=4;NFSU2_TR(0x4ca32a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca32d:{NFSU2_TR(0x4ca32d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca32e:{NFSU2_TR(0x4ca32e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca32f:{NFSU2_TR(0x4ca32f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca334ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca334:L4ca334:{c.instructions+=3;NFSU2_TR(0x4ca334);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca337:{NFSU2_TR(0x4ca337);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca339:{NFSU2_TR(0x4ca339);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca35c;}}
}
B4ca33b:L4ca33b:{c.instructions+=2;NFSU2_TR(0x4ca33b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca33d:{NFSU2_TR(0x4ca33d);
u8 U[4];
w4(U+0,u32(0x795c3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca342:L4ca342:{c.instructions+=3;NFSU2_TR(0x4ca342);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca345:{NFSU2_TR(0x4ca345);
u8 U[4];
w4(U+0,u32(0x795c68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca34a:{NFSU2_TR(0x4ca34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca34full));
TAIL_STATIC(0x505450u,505);
}
B4ca34f:L4ca34f:{c.instructions+=4;NFSU2_TR(0x4ca34f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca352:{NFSU2_TR(0x4ca352);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca353:{NFSU2_TR(0x4ca353);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca354:{NFSU2_TR(0x4ca354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca359ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca359:L4ca359:{c.instructions+=1;NFSU2_TR(0x4ca359);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca35c:L4ca35c:{c.instructions+=6;NFSU2_TR(0x4ca35c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca360:{NFSU2_TR(0x4ca360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca363:{NFSU2_TR(0x4ca363);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800000ull))));
}
B4ca368:{NFSU2_TR(0x4ca368);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ca36a:{NFSU2_TR(0x4ca36a);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca36c:{NFSU2_TR(0x4ca36c);
if(r1(R+518)){{goto L4ca41a;}}
}
B4ca372:L4ca372:{c.instructions+=3;NFSU2_TR(0x4ca372);
u8 U[4];
w4(U+0,u32(0x795c30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca377:{NFSU2_TR(0x4ca377);
u8 U[4];
w4(U+0,u32(0x795c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca37c:{NFSU2_TR(0x4ca37c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca381ull));
TAIL_STATIC(0x505450u,505);
}
B4ca381:L4ca381:{c.instructions+=4;NFSU2_TR(0x4ca381);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca384:{NFSU2_TR(0x4ca384);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca385:{NFSU2_TR(0x4ca385);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca386:{NFSU2_TR(0x4ca386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca38bull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca38b:L4ca38b:{c.instructions+=3;NFSU2_TR(0x4ca38b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca38e:{NFSU2_TR(0x4ca38e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca390:{NFSU2_TR(0x4ca390);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca3b3;}}
}
B4ca392:L4ca392:{c.instructions+=5;NFSU2_TR(0x4ca392);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca395:{NFSU2_TR(0x4ca395);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca397:{NFSU2_TR(0x4ca397);
u8 U[4];
w4(U+0,u32(0x795c30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca39c:{NFSU2_TR(0x4ca39c);
u8 U[4];
w4(U+0,u32(0x795c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3a1:{NFSU2_TR(0x4ca3a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca3a6ull));
TAIL_STATIC(0x505450u,505);
}
B4ca3a6:L4ca3a6:{c.instructions+=4;NFSU2_TR(0x4ca3a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca3a9:{NFSU2_TR(0x4ca3a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3aa:{NFSU2_TR(0x4ca3aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3ab:{NFSU2_TR(0x4ca3ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca3b0ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca3b0:L4ca3b0:{c.instructions+=1;NFSU2_TR(0x4ca3b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca3b3:L4ca3b3:{c.instructions+=3;NFSU2_TR(0x4ca3b3);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+20))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4ca3b5:{NFSU2_TR(0x4ca3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca3b8:{NFSU2_TR(0x4ca3b8);
if(r1(R+518)){{goto L4ca3ea;}}
}
B4ca3ba:L4ca3ba:{c.instructions+=3;NFSU2_TR(0x4ca3ba);
u8 U[4];
w4(U+0,u32(0x795c0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3bf:{NFSU2_TR(0x4ca3bf);
u8 U[4];
w4(U+0,u32(0x795bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3c4:{NFSU2_TR(0x4ca3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca3c9ull));
TAIL_STATIC(0x505450u,505);
}
B4ca3c9:L4ca3c9:{c.instructions+=4;NFSU2_TR(0x4ca3c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca3cc:{NFSU2_TR(0x4ca3cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3cd:{NFSU2_TR(0x4ca3cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3ce:{NFSU2_TR(0x4ca3ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca3d3ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca3d3:L4ca3d3:{c.instructions+=3;NFSU2_TR(0x4ca3d3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca3d6:{NFSU2_TR(0x4ca3d6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca3d8:{NFSU2_TR(0x4ca3d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca4f6;}}
}
B4ca3de:L4ca3de:{c.instructions+=3;NFSU2_TR(0x4ca3de);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3e0:{NFSU2_TR(0x4ca3e0);
u8 U[4];
w4(U+0,u32(0x795c0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3e5:{NFSU2_TR(0x4ca3e5);
{goto L4ca4dc;}
}
B4ca3ea:L4ca3ea:{c.instructions+=3;NFSU2_TR(0x4ca3ea);
u8 U[4];
w4(U+0,u32(0x795be4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3ef:{NFSU2_TR(0x4ca3ef);
u8 U[4];
w4(U+0,u32(0x795bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3f4:{NFSU2_TR(0x4ca3f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca3f9ull));
TAIL_STATIC(0x505450u,505);
}
B4ca3f9:L4ca3f9:{c.instructions+=4;NFSU2_TR(0x4ca3f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca3fc:{NFSU2_TR(0x4ca3fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3fd:{NFSU2_TR(0x4ca3fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca3fe:{NFSU2_TR(0x4ca3fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca403ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca403:L4ca403:{c.instructions+=3;NFSU2_TR(0x4ca403);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca406:{NFSU2_TR(0x4ca406);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca408:{NFSU2_TR(0x4ca408);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca4f6;}}
}
B4ca40e:L4ca40e:{c.instructions+=3;NFSU2_TR(0x4ca40e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca410:{NFSU2_TR(0x4ca410);
u8 U[4];
w4(U+0,u32(0x795be4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca415:{NFSU2_TR(0x4ca415);
{goto L4ca4dc;}
}
B4ca41a:L4ca41a:{c.instructions+=3;NFSU2_TR(0x4ca41a);
u8 U[4];
w4(U+0,u32(0x795bd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca41f:{NFSU2_TR(0x4ca41f);
u8 U[4];
w4(U+0,u32(0x795c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca424:{NFSU2_TR(0x4ca424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca429ull));
TAIL_STATIC(0x505450u,505);
}
B4ca429:L4ca429:{c.instructions+=4;NFSU2_TR(0x4ca429);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca42c:{NFSU2_TR(0x4ca42c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca42d:{NFSU2_TR(0x4ca42d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca42e:{NFSU2_TR(0x4ca42e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca433ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca433:L4ca433:{c.instructions+=3;NFSU2_TR(0x4ca433);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca436:{NFSU2_TR(0x4ca436);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca438:{NFSU2_TR(0x4ca438);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca45b;}}
}
B4ca43a:L4ca43a:{c.instructions+=5;NFSU2_TR(0x4ca43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca43d:{NFSU2_TR(0x4ca43d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca43f:{NFSU2_TR(0x4ca43f);
u8 U[4];
w4(U+0,u32(0x795bd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca444:{NFSU2_TR(0x4ca444);
u8 U[4];
w4(U+0,u32(0x795c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca449:{NFSU2_TR(0x4ca449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca44eull));
TAIL_STATIC(0x505450u,505);
}
B4ca44e:L4ca44e:{c.instructions+=4;NFSU2_TR(0x4ca44e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca451:{NFSU2_TR(0x4ca451);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca452:{NFSU2_TR(0x4ca452);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca453:{NFSU2_TR(0x4ca453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca458ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca458:L4ca458:{c.instructions+=1;NFSU2_TR(0x4ca458);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca45b:L4ca45b:{c.instructions+=2;NFSU2_TR(0x4ca45b);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7b0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca462:{NFSU2_TR(0x4ca462);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca485;}}
}
B4ca464:L4ca464:{c.instructions+=5;NFSU2_TR(0x4ca464);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca467:{NFSU2_TR(0x4ca467);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca469:{NFSU2_TR(0x4ca469);
u8 U[4];
w4(U+0,u32(0x795bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca46e:{NFSU2_TR(0x4ca46e);
u8 U[4];
w4(U+0,u32(0x795c20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca473:{NFSU2_TR(0x4ca473);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca478ull));
TAIL_STATIC(0x505450u,505);
}
B4ca478:L4ca478:{c.instructions+=4;NFSU2_TR(0x4ca478);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca47b:{NFSU2_TR(0x4ca47b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca47c:{NFSU2_TR(0x4ca47c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca47d:{NFSU2_TR(0x4ca47d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca482ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca482:L4ca482:{c.instructions+=1;NFSU2_TR(0x4ca482);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca485:L4ca485:{c.instructions+=3;NFSU2_TR(0x4ca485);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+20))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B4ca487:{NFSU2_TR(0x4ca487);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca48a:{NFSU2_TR(0x4ca48a);
if(r1(R+518)){{goto L4ca4b5;}}
}
B4ca48c:L4ca48c:{c.instructions+=3;NFSU2_TR(0x4ca48c);
u8 U[4];
w4(U+0,u32(0x795bbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca491:{NFSU2_TR(0x4ca491);
u8 U[4];
w4(U+0,u32(0x795bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca496:{NFSU2_TR(0x4ca496);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca49bull));
TAIL_STATIC(0x505450u,505);
}
B4ca49b:L4ca49b:{c.instructions+=4;NFSU2_TR(0x4ca49b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca49e:{NFSU2_TR(0x4ca49e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca49f:{NFSU2_TR(0x4ca49f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4a0:{NFSU2_TR(0x4ca4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca4a5ull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca4a5:L4ca4a5:{c.instructions+=3;NFSU2_TR(0x4ca4a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca4a8:{NFSU2_TR(0x4ca4a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca4aa:{NFSU2_TR(0x4ca4aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca4f6;}}
}
B4ca4ac:L4ca4ac:{c.instructions+=3;NFSU2_TR(0x4ca4ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4ae:{NFSU2_TR(0x4ca4ae);
u8 U[4];
w4(U+0,u32(0x795bbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4b3:{NFSU2_TR(0x4ca4b3);
{goto L4ca4dc;}
}
B4ca4b5:L4ca4b5:{c.instructions+=3;NFSU2_TR(0x4ca4b5);
u8 U[4];
w4(U+0,u32(0x795ba8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4ba:{NFSU2_TR(0x4ca4ba);
u8 U[4];
w4(U+0,u32(0x795bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4bf:{NFSU2_TR(0x4ca4bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca4c4ull));
TAIL_STATIC(0x505450u,505);
}
B4ca4c4:L4ca4c4:{c.instructions+=4;NFSU2_TR(0x4ca4c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca4c7:{NFSU2_TR(0x4ca4c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4c8:{NFSU2_TR(0x4ca4c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4c9:{NFSU2_TR(0x4ca4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca4ceull));
TAIL_STATIC(0x537cc0u,537);
}
B4ca4ce:L4ca4ce:{c.instructions+=3;NFSU2_TR(0x4ca4ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ca4d1:{NFSU2_TR(0x4ca4d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca4d3:{NFSU2_TR(0x4ca4d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca4f6;}}
}
B4ca4d5:L4ca4d5:{c.instructions+=2;NFSU2_TR(0x4ca4d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4d7:{NFSU2_TR(0x4ca4d7);
u8 U[4];
w4(U+0,u32(0x795ba8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4dc:L4ca4dc:{c.instructions+=3;NFSU2_TR(0x4ca4dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca4df:{NFSU2_TR(0x4ca4df);
u8 U[4];
w4(U+0,u32(0x795bf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4e4:{NFSU2_TR(0x4ca4e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca4e9ull));
TAIL_STATIC(0x505450u,505);
}
B4ca4e9:L4ca4e9:{c.instructions+=4;NFSU2_TR(0x4ca4e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca4ec:{NFSU2_TR(0x4ca4ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4ed:{NFSU2_TR(0x4ca4ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca4ee:{NFSU2_TR(0x4ca4ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca4f3ull));
TAIL_STATIC(0x537c00u,537);
}
B4ca4f3:L4ca4f3:{c.instructions+=1;NFSU2_TR(0x4ca4f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ca4f6:L4ca4f6:{c.instructions+=5;NFSU2_TR(0x4ca4f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca4f9:{NFSU2_TR(0x4ca4f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca4fb:{NFSU2_TR(0x4ca4fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4ca4ff:{NFSU2_TR(0x4ca4ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ca503:{NFSU2_TR(0x4ca503);
if(r1(R+518)){{goto L4ca51d;}}
}
B4ca505:L4ca505:{c.instructions+=5;NFSU2_TR(0x4ca505);
__builtin_memmove((R+0),(R+20),4);
}
B4ca507:{NFSU2_TR(0x4ca507);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80ull))));
}
B4ca50c:{NFSU2_TR(0x4ca50c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca50e:{NFSU2_TR(0x4ca50e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca510:{NFSU2_TR(0x4ca510);
if(r1(R+518)){{goto L4ca51d;}}
}
B4ca512:L4ca512:{c.instructions+=4;NFSU2_TR(0x4ca512);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca516:{NFSU2_TR(0x4ca516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca517:{NFSU2_TR(0x4ca517);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca518:{NFSU2_TR(0x4ca518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca51dull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca51d:L4ca51d:{c.instructions+=3;NFSU2_TR(0x4ca51d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca520:{NFSU2_TR(0x4ca520);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca522:{NFSU2_TR(0x4ca522);
if(r1(R+518)){{goto L4ca53c;}}
}
B4ca524:L4ca524:{c.instructions+=5;NFSU2_TR(0x4ca524);
__builtin_memmove((R+0),(R+20),4);
}
B4ca526:{NFSU2_TR(0x4ca526);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x20000ull))));
}
B4ca52b:{NFSU2_TR(0x4ca52b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca52d:{NFSU2_TR(0x4ca52d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca52f:{NFSU2_TR(0x4ca52f);
if(r1(R+518)){{goto L4ca53c;}}
}
B4ca531:L4ca531:{c.instructions+=4;NFSU2_TR(0x4ca531);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca535:{NFSU2_TR(0x4ca535);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca536:{NFSU2_TR(0x4ca536);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca537:{NFSU2_TR(0x4ca537);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca53cull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca53c:L4ca53c:{c.instructions+=3;NFSU2_TR(0x4ca53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca53f:{NFSU2_TR(0x4ca53f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca541:{NFSU2_TR(0x4ca541);
if(r1(R+518)){{goto L4ca55b;}}
}
B4ca543:L4ca543:{c.instructions+=5;NFSU2_TR(0x4ca543);
__builtin_memmove((R+0),(R+20),4);
}
B4ca545:{NFSU2_TR(0x4ca545);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x4000ull))));
}
B4ca54a:{NFSU2_TR(0x4ca54a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca54c:{NFSU2_TR(0x4ca54c);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca54e:{NFSU2_TR(0x4ca54e);
if(r1(R+518)){{goto L4ca55b;}}
}
B4ca550:L4ca550:{c.instructions+=4;NFSU2_TR(0x4ca550);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca554:{NFSU2_TR(0x4ca554);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca555:{NFSU2_TR(0x4ca555);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca556:{NFSU2_TR(0x4ca556);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca55bull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca55b:L4ca55b:{c.instructions+=4;NFSU2_TR(0x4ca55b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca55e:{NFSU2_TR(0x4ca55e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca560:{NFSU2_TR(0x4ca560);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca564:{NFSU2_TR(0x4ca564);
if(r1(R+518)){{goto L4ca57f;}}
}
B4ca566:L4ca566:{c.instructions+=5;NFSU2_TR(0x4ca566);
__builtin_memmove((R+8),(R+28),4);
}
B4ca568:{NFSU2_TR(0x4ca568);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x20000ull))));
}
B4ca56e:{NFSU2_TR(0x4ca56e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca570:{NFSU2_TR(0x4ca570);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca572:{NFSU2_TR(0x4ca572);
if(r1(R+518)){{goto L4ca57f;}}
}
B4ca574:L4ca574:{c.instructions+=4;NFSU2_TR(0x4ca574);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca578:{NFSU2_TR(0x4ca578);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca579:{NFSU2_TR(0x4ca579);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca57a:{NFSU2_TR(0x4ca57a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca57full));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca57f:L4ca57f:{c.instructions+=3;NFSU2_TR(0x4ca57f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca582:{NFSU2_TR(0x4ca582);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca584:{NFSU2_TR(0x4ca584);
if(r1(R+518)){{goto L4ca59c;}}
}
B4ca586:L4ca586:{c.instructions+=5;NFSU2_TR(0x4ca586);
__builtin_memmove((R+8),(R+28),4);
}
B4ca588:{NFSU2_TR(0x4ca588);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x2ull))));
}
B4ca58b:{NFSU2_TR(0x4ca58b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca58d:{NFSU2_TR(0x4ca58d);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca58f:{NFSU2_TR(0x4ca58f);
if(r1(R+518)){{goto L4ca59c;}}
}
B4ca591:L4ca591:{c.instructions+=4;NFSU2_TR(0x4ca591);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca595:{NFSU2_TR(0x4ca595);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca596:{NFSU2_TR(0x4ca596);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca597:{NFSU2_TR(0x4ca597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca59cull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca59c:L4ca59c:{c.instructions+=3;NFSU2_TR(0x4ca59c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca59f:{NFSU2_TR(0x4ca59f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca5a1:{NFSU2_TR(0x4ca5a1);
if(r1(R+518)){{goto L4ca5b9;}}
}
B4ca5a3:L4ca5a3:{c.instructions+=5;NFSU2_TR(0x4ca5a3);
__builtin_memmove((R+8),(R+28),4);
}
B4ca5a5:{NFSU2_TR(0x4ca5a5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4ull))));
}
B4ca5a8:{NFSU2_TR(0x4ca5a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca5aa:{NFSU2_TR(0x4ca5aa);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca5ac:{NFSU2_TR(0x4ca5ac);
if(r1(R+518)){{goto L4ca5b9;}}
}
B4ca5ae:L4ca5ae:{c.instructions+=4;NFSU2_TR(0x4ca5ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca5b2:{NFSU2_TR(0x4ca5b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca5b3:{NFSU2_TR(0x4ca5b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca5b4:{NFSU2_TR(0x4ca5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca5b9ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca5b9:L4ca5b9:{c.instructions+=3;NFSU2_TR(0x4ca5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca5bc:{NFSU2_TR(0x4ca5bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca5be:{NFSU2_TR(0x4ca5be);
if(r1(R+518)){{goto L4ca5d6;}}
}
B4ca5c0:L4ca5c0:{c.instructions+=5;NFSU2_TR(0x4ca5c0);
__builtin_memmove((R+8),(R+28),4);
}
B4ca5c2:{NFSU2_TR(0x4ca5c2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x40ull))));
}
B4ca5c5:{NFSU2_TR(0x4ca5c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca5c7:{NFSU2_TR(0x4ca5c7);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca5c9:{NFSU2_TR(0x4ca5c9);
if(r1(R+518)){{goto L4ca5d6;}}
}
B4ca5cb:L4ca5cb:{c.instructions+=4;NFSU2_TR(0x4ca5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca5cf:{NFSU2_TR(0x4ca5cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca5d0:{NFSU2_TR(0x4ca5d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca5d1:{NFSU2_TR(0x4ca5d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca5d6ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca5d6:L4ca5d6:{c.instructions+=3;NFSU2_TR(0x4ca5d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ca5d9:{NFSU2_TR(0x4ca5d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca5db:{NFSU2_TR(0x4ca5db);
if(r1(R+518)){{goto L4ca5f8;}}
}
B4ca5dd:L4ca5dd:{c.instructions+=5;NFSU2_TR(0x4ca5dd);
__builtin_memmove((R+0),(R+20),4);
}
B4ca5df:{NFSU2_TR(0x4ca5df);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x800ull))));
}
B4ca5e4:{NFSU2_TR(0x4ca5e4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ca5e6:{NFSU2_TR(0x4ca5e6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca5e8:{NFSU2_TR(0x4ca5e8);
if(r1(R+518)){{goto L4ca5f8;}}
}
B4ca5ea:L4ca5ea:{c.instructions+=5;NFSU2_TR(0x4ca5ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca5ee:{NFSU2_TR(0x4ca5ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca5ef:{NFSU2_TR(0x4ca5ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca5f0:{NFSU2_TR(0x4ca5f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ca5f3:{NFSU2_TR(0x4ca5f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca5f8ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca5f8:L4ca5f8:{c.instructions+=3;NFSU2_TR(0x4ca5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca5fb:{NFSU2_TR(0x4ca5fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca5fd:{NFSU2_TR(0x4ca5fd);
if(r1(R+518)){{goto L4ca618;}}
}
B4ca5ff:L4ca5ff:{c.instructions+=5;NFSU2_TR(0x4ca5ff);
__builtin_memmove((R+8),(R+28),4);
}
B4ca601:{NFSU2_TR(0x4ca601);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80ull))));
}
B4ca607:{NFSU2_TR(0x4ca607);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca609:{NFSU2_TR(0x4ca609);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca60b:{NFSU2_TR(0x4ca60b);
if(r1(R+518)){{goto L4ca618;}}
}
B4ca60d:L4ca60d:{c.instructions+=4;NFSU2_TR(0x4ca60d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca611:{NFSU2_TR(0x4ca611);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca612:{NFSU2_TR(0x4ca612);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca613:{NFSU2_TR(0x4ca613);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca618ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca618:L4ca618:{c.instructions+=3;NFSU2_TR(0x4ca618);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca61b:{NFSU2_TR(0x4ca61b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca61d:{NFSU2_TR(0x4ca61d);
if(r1(R+518)){{goto L4ca635;}}
}
B4ca61f:L4ca61f:{c.instructions+=5;NFSU2_TR(0x4ca61f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0x1ull))));
}
B4ca622:{NFSU2_TR(0x4ca622);
__builtin_memmove((R+0),(R+20),4);
}
B4ca624:{NFSU2_TR(0x4ca624);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4ca626:{NFSU2_TR(0x4ca626);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca628:{NFSU2_TR(0x4ca628);
if(r1(R+518)){{goto L4ca635;}}
}
B4ca62a:L4ca62a:{c.instructions+=4;NFSU2_TR(0x4ca62a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca62e:{NFSU2_TR(0x4ca62e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca62f:{NFSU2_TR(0x4ca62f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca630:{NFSU2_TR(0x4ca630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca635ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca635:L4ca635:{c.instructions+=3;NFSU2_TR(0x4ca635);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca63b:{NFSU2_TR(0x4ca63b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca63d:{NFSU2_TR(0x4ca63d);
if(r1(R+518)){{goto L4ca658;}}
}
B4ca63f:L4ca63f:{c.instructions+=5;NFSU2_TR(0x4ca63f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x80000ull))));
}
B4ca645:{NFSU2_TR(0x4ca645);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4ca647:{NFSU2_TR(0x4ca647);
__builtin_memmove((R+8),(R+28),4);
}
B4ca649:{NFSU2_TR(0x4ca649);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ca64b:{NFSU2_TR(0x4ca64b);
if(r1(R+518)){{goto L4ca658;}}
}
B4ca64d:L4ca64d:{c.instructions+=4;NFSU2_TR(0x4ca64d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca651:{NFSU2_TR(0x4ca651);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca652:{NFSU2_TR(0x4ca652);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca653:{NFSU2_TR(0x4ca653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca658ull));
TAIL_STATIC(0x4c6690u,4c6);
}
B4ca658:L4ca658:{c.instructions+=9;NFSU2_TR(0x4ca658);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca65c:{NFSU2_TR(0x4ca65c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca65d:{NFSU2_TR(0x4ca65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca660:{NFSU2_TR(0x4ca660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca663:{NFSU2_TR(0x4ca663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca664:{NFSU2_TR(0x4ca664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ca665:{NFSU2_TR(0x4ca665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ca666:{NFSU2_TR(0x4ca666);
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
B4ca669:{NFSU2_TR(0x4ca669);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca670:L4ca670:{c.instructions+=5;NFSU2_TR(0x4ca670);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca674:{NFSU2_TR(0x4ca674);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca677:{NFSU2_TR(0x4ca677);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca678:{NFSU2_TR(0x4ca678);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca67a:{NFSU2_TR(0x4ca67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca67full));
TAIL_STATIC(0x4c9170u,4c9);
}
B4ca67f:L4ca67f:{c.instructions+=1;NFSU2_TR(0x4ca67f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca690:L4ca690:{c.instructions+=4;NFSU2_TR(0x4ca690);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca691:{NFSU2_TR(0x4ca691);
__builtin_memmove((R+24),gp(0x836560),4);
}
B4ca697:{NFSU2_TR(0x4ca697);
w4(R+4,u32(0x836560ull));
}
B4ca69c:{NFSU2_TR(0x4ca69c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca6a1ull));
TAIL_STATIC(0x502fd0u,502);
}
B4ca6a1:L4ca6a1:{c.instructions+=2;NFSU2_TR(0x4ca6a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca6a3:{NFSU2_TR(0x4ca6a3);
if(r1(R+518)){{goto L4ca6bb;}}
}
B4ca6a5:L4ca6a5:{c.instructions+=2;NFSU2_TR(0x4ca6a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca6a9:{NFSU2_TR(0x4ca6a9);
__builtin_memmove((R+16),(R+16),4);
}
B4ca6b0:L4ca6b0:{c.instructions+=2;NFSU2_TR(0x4ca6b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ca6b3:{NFSU2_TR(0x4ca6b3);
if(r1(R+518)){{goto L4ca6bf;}}
}
B4ca6b5:L4ca6b5:{c.instructions+=3;NFSU2_TR(0x4ca6b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ca6b7:{NFSU2_TR(0x4ca6b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca6b9:{NFSU2_TR(0x4ca6b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca6b0u);}goto L4ca6b0;}}
}
B4ca6bb:L4ca6bb:{c.instructions+=3;NFSU2_TR(0x4ca6bb);
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
B4ca6bd:{NFSU2_TR(0x4ca6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca6be:{NFSU2_TR(0x4ca6be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca6bf:L4ca6bf:{c.instructions+=3;NFSU2_TR(0x4ca6bf);
w1(R+0,u8(0x1ull));
}
B4ca6c1:{NFSU2_TR(0x4ca6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca6c2:{NFSU2_TR(0x4ca6c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca6d0:L4ca6d0:{c.instructions+=6;NFSU2_TR(0x4ca6d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca6d1:{NFSU2_TR(0x4ca6d1);
__builtin_memmove((R+24),(R+4),4);
}
B4ca6d3:{NFSU2_TR(0x4ca6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca6d6:{NFSU2_TR(0x4ca6d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca6d8:{NFSU2_TR(0x4ca6d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca6d9:{NFSU2_TR(0x4ca6d9);
if(r1(R+518)){{goto L4ca6f5;}}
}
B4ca6db:L4ca6db:{c.instructions+=3;NFSU2_TR(0x4ca6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca6de:{NFSU2_TR(0x4ca6de);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ca6e1:{NFSU2_TR(0x4ca6e1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4ca7cd;}}
}
B4ca6e7:L4ca6e7:{c.instructions+=2;NFSU2_TR(0x4ca6e7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ca7e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4ca6ee:{NFSU2_TR(0x4ca6ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ca7d4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4ca6f5:L4ca6f5:{c.instructions+=2;NFSU2_TR(0x4ca6f5);
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
B4ca6f7:{NFSU2_TR(0x4ca6f7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca6e7u);}goto L4ca6e7;}
}
B4ca6f9:L4ca6f9:{c.instructions+=4;NFSU2_TR(0x4ca6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca6fc:{NFSU2_TR(0x4ca6fc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca6fd:{NFSU2_TR(0x4ca6fd);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4ca703:{NFSU2_TR(0x4ca703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca708ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4ca708:L4ca708:{c.instructions+=2;NFSU2_TR(0x4ca708);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca70a:{NFSU2_TR(0x4ca70a);
if(r1(R+518)){{goto L4ca776;}}
}
B4ca70c:L4ca70c:{c.instructions+=3;NFSU2_TR(0x4ca70c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ca712:{NFSU2_TR(0x4ca712);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ca714:{NFSU2_TR(0x4ca714);
if(r1(R+518)){{goto L4ca776;}}
}
B4ca716:L4ca716:{c.instructions+=2;NFSU2_TR(0x4ca716);
__builtin_memmove((R+4),(R+0),4);
}
B4ca718:{NFSU2_TR(0x4ca718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca71dull));
TAIL_STATIC(0x5ec060u,5ec);
}
B4ca71d:L4ca71d:{c.instructions+=2;NFSU2_TR(0x4ca71d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca71f:{NFSU2_TR(0x4ca71f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca776;}}
}
B4ca721:L4ca721:{c.instructions+=2;NFSU2_TR(0x4ca721);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B4ca728:{NFSU2_TR(0x4ca728);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca7cd;}}
}
B4ca72e:L4ca72e:{c.instructions+=2;NFSU2_TR(0x4ca72e);
w4(R+4,u32(0x85b940ull));
}
B4ca733:{NFSU2_TR(0x4ca733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca738ull));
TAIL_STATIC(0x501690u,501);
}
B4ca738:L4ca738:{c.instructions+=2;NFSU2_TR(0x4ca738);
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
B4ca73a:{NFSU2_TR(0x4ca73a);
{goto L4ca774;}
}
B4ca73c:L4ca73c:{c.instructions+=2;NFSU2_TR(0x4ca73c);
w4(R+4,u32(0x85ad40ull));
}
B4ca741:{NFSU2_TR(0x4ca741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca746ull));
TAIL_STATIC(0x500b60u,500);
}
B4ca746:L4ca746:{c.instructions+=2;NFSU2_TR(0x4ca746);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca748:{NFSU2_TR(0x4ca748);
if(r1(R+518)){{goto L4ca776;}}
}
B4ca74a:L4ca74a:{c.instructions+=3;NFSU2_TR(0x4ca74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca74d:{NFSU2_TR(0x4ca74d);
w4(R+4,u32(0x861e7cull));
}
B4ca752:{NFSU2_TR(0x4ca752);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca757ull));
TAIL_STATIC(0x502420u,502);
}
B4ca757:L4ca757:{c.instructions+=2;NFSU2_TR(0x4ca757);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca759:{NFSU2_TR(0x4ca759);
if(r1(R+518)){{goto L4ca77b;}}
}
B4ca75b:L4ca75b:{c.instructions+=2;NFSU2_TR(0x4ca75b);
w4(R+4,u32(0x861e7cull));
}
B4ca760:{NFSU2_TR(0x4ca760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca765ull));
TAIL_STATIC(0x5024d0u,502);
}
B4ca765:L4ca765:{c.instructions+=2;NFSU2_TR(0x4ca765);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca767:{NFSU2_TR(0x4ca767);
if(r1(R+518)){{goto L4ca776;}}
}
B4ca769:L4ca769:{c.instructions+=3;NFSU2_TR(0x4ca769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ca76c:{NFSU2_TR(0x4ca76c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca76e:{NFSU2_TR(0x4ca76e);
if(r1(R+518)){{goto L4ca776;}}
}
B4ca770:L4ca770:{c.instructions+=1;NFSU2_TR(0x4ca770);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ca774:L4ca774:{c.instructions+=1;NFSU2_TR(0x4ca774);
if(r1(R+518)){{goto L4ca7cd;}}
}
B4ca776:L4ca776:{c.instructions+=4;NFSU2_TR(0x4ca776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca777:{NFSU2_TR(0x4ca777);
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
B4ca779:{NFSU2_TR(0x4ca779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca77a:{NFSU2_TR(0x4ca77a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca77b:L4ca77b:{c.instructions+=2;NFSU2_TR(0x4ca77b);
w4(R+4,u32(0x838590ull));
}
B4ca780:{NFSU2_TR(0x4ca780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca785ull));
TAIL_STATIC(0x4ae930u,4ae);
}
B4ca785:L4ca785:{c.instructions+=2;NFSU2_TR(0x4ca785);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca787:{NFSU2_TR(0x4ca787);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca7a0;}}
}
B4ca789:L4ca789:{c.instructions+=3;NFSU2_TR(0x4ca789);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4ca78e:{NFSU2_TR(0x4ca78e);
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
B4ca790:{NFSU2_TR(0x4ca790);
if(r1(R+518)){{goto L4ca7cd;}}
}
B4ca792:L4ca792:{c.instructions+=3;NFSU2_TR(0x4ca792);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca793:{NFSU2_TR(0x4ca793);
w4(R+4,u32(0x838590ull));
}
B4ca798:{NFSU2_TR(0x4ca798);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca79dull));
TAIL_STATIC(0x529410u,529);
}
B4ca79d:L4ca79d:{c.instructions+=3;NFSU2_TR(0x4ca79d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca79e:{NFSU2_TR(0x4ca79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca79f:{NFSU2_TR(0x4ca79f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca7a0:L4ca7a0:{c.instructions+=2;NFSU2_TR(0x4ca7a0);
w4(R+4,u32(0x85b940ull));
}
B4ca7a5:{NFSU2_TR(0x4ca7a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca7aaull));
TAIL_STATIC(0x501690u,501);
}
B4ca7aa:L4ca7aa:{c.instructions+=2;NFSU2_TR(0x4ca7aa);
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
B4ca7ac:{NFSU2_TR(0x4ca7ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca7cd;}}
}
B4ca7ae:L4ca7ae:{c.instructions+=2;NFSU2_TR(0x4ca7ae);
__builtin_memmove((R+4),(R+28),4);
}
B4ca7b0:{NFSU2_TR(0x4ca7b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca7b5ull));
TAIL_STATIC(0x500de0u,500);
}
B4ca7b5:L4ca7b5:{c.instructions+=2;NFSU2_TR(0x4ca7b5);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8635a9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ca7bc:{NFSU2_TR(0x4ca7bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca776u);}goto L4ca776;}}
}
B4ca7be:L4ca7be:{c.instructions+=2;NFSU2_TR(0x4ca7be);
__builtin_memmove((R+4),(R+28),4);
}
B4ca7c0:{NFSU2_TR(0x4ca7c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca7c5ull));
TAIL_STATIC(0x533110u,533);
}
B4ca7c5:L4ca7c5:{c.instructions+=5;NFSU2_TR(0x4ca7c5);
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
B4ca7c7:{NFSU2_TR(0x4ca7c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca7c8:{NFSU2_TR(0x4ca7c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4ca7cb:{NFSU2_TR(0x4ca7cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca7cc:{NFSU2_TR(0x4ca7cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca7cd:L4ca7cd:{c.instructions+=4;NFSU2_TR(0x4ca7cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca7ce:{NFSU2_TR(0x4ca7ce);
w1(R+0,u8(0x1ull));
}
B4ca7d0:{NFSU2_TR(0x4ca7d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca7d1:{NFSU2_TR(0x4ca7d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca800:L4ca800:{c.instructions+=4;NFSU2_TR(0x4ca800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca801:{NFSU2_TR(0x4ca801);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ca803:{NFSU2_TR(0x4ca803);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca804:{NFSU2_TR(0x4ca804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca809ull));
TAIL_STATIC(0x502fd0u,502);
}
B4ca809:L4ca809:{c.instructions+=2;NFSU2_TR(0x4ca809);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca80b:{NFSU2_TR(0x4ca80b);
if(r1(R+518)){{goto L4ca832;}}
}
B4ca80d:L4ca80d:{c.instructions+=2;NFSU2_TR(0x4ca80d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ca811:{NFSU2_TR(0x4ca811);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ca815:L4ca815:{c.instructions+=3;NFSU2_TR(0x4ca815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca818:{NFSU2_TR(0x4ca818);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca81a:{NFSU2_TR(0x4ca81a);
if(r1(R+518)){{goto L4ca821;}}
}
B4ca81c:L4ca81c:{c.instructions+=2;NFSU2_TR(0x4ca81c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca81f:{NFSU2_TR(0x4ca81f);
{goto L4ca823;}
}
B4ca821:L4ca821:{c.instructions+=1;NFSU2_TR(0x4ca821);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4ca823:L4ca823:{c.instructions+=2;NFSU2_TR(0x4ca823);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca825:{NFSU2_TR(0x4ca825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca82c;}}
}
B4ca827:L4ca827:{c.instructions+=2;NFSU2_TR(0x4ca827);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ca82a:{NFSU2_TR(0x4ca82a);
if(r1(R+518)){{goto L4ca839;}}
}
B4ca82c:L4ca82c:{c.instructions+=3;NFSU2_TR(0x4ca82c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4ca82e:{NFSU2_TR(0x4ca82e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca830:{NFSU2_TR(0x4ca830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca815u);}goto L4ca815;}}
}
B4ca832:L4ca832:{c.instructions+=4;NFSU2_TR(0x4ca832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca833:{NFSU2_TR(0x4ca833);
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
B4ca835:{NFSU2_TR(0x4ca835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca836:{NFSU2_TR(0x4ca836);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca839:L4ca839:{c.instructions+=4;NFSU2_TR(0x4ca839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ca83a:{NFSU2_TR(0x4ca83a);
__builtin_memmove((R+0),(R+24),4);
}
B4ca83c:{NFSU2_TR(0x4ca83c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ca83d:{NFSU2_TR(0x4ca83d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ca840:L4ca840:{c.instructions+=8;NFSU2_TR(0x4ca840);
__builtin_memmove((R+0),gp(0x8364c0),4);
}
B4ca845:{NFSU2_TR(0x4ca845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B4ca848:{NFSU2_TR(0x4ca848);
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
B4ca84a:{NFSU2_TR(0x4ca84a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca84b:{NFSU2_TR(0x4ca84b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca84c:{NFSU2_TR(0x4ca84c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca84d:{NFSU2_TR(0x4ca84d);
__builtin_memmove((R+24),(R+4),4);
}
B4ca84f:{NFSU2_TR(0x4ca84f);
if(r1(R+518)){{goto L4ca870;}}
}
B4ca851:L4ca851:{c.instructions+=2;NFSU2_TR(0x4ca851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4ca853:{NFSU2_TR(0x4ca853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca858ull));
TAIL_STATIC(0x502fd0u,502);
}
B4ca858:L4ca858:{c.instructions+=2;NFSU2_TR(0x4ca858);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca85a:{NFSU2_TR(0x4ca85a);
if(r1(R+518)){{goto L4ca866;}}
}
B4ca85c:L4ca85c:{c.instructions+=1;NFSU2_TR(0x4ca85c);
__builtin_memmove((R+16),(R+16),4);
}
B4ca860:L4ca860:{c.instructions+=3;NFSU2_TR(0x4ca860);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4ca862:{NFSU2_TR(0x4ca862);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca864:{NFSU2_TR(0x4ca864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca860u);}goto L4ca860;}}
}
B4ca866:L4ca866:{c.instructions+=1;NFSU2_TR(0x4ca866);
s4(0x8364c0,u32(0x0ull));
}
B4ca870:L4ca870:{c.instructions+=4;NFSU2_TR(0x4ca870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca873:{NFSU2_TR(0x4ca873);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca875:{NFSU2_TR(0x4ca875);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B4ca87b:{NFSU2_TR(0x4ca87b);
if(r1(R+518)){{goto L4ca888;}}
}
B4ca87d:L4ca87d:{c.instructions+=3;NFSU2_TR(0x4ca87d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4ca884:{NFSU2_TR(0x4ca884);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ca886:{NFSU2_TR(0x4ca886);
if(r1(R+518)){{goto L4ca894;}}
}
B4ca888:L4ca888:{c.instructions+=2;NFSU2_TR(0x4ca888);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca889:{NFSU2_TR(0x4ca889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca88eull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4ca88e:L4ca88e:{c.instructions+=2;NFSU2_TR(0x4ca88e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ca891:{NFSU2_TR(0x4ca891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca894:L4ca894:{c.instructions+=18;NFSU2_TR(0x4ca894);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ca897:{NFSU2_TR(0x4ca897);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca89d:{NFSU2_TR(0x4ca89d);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ca8a3:{NFSU2_TR(0x4ca8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca8a9:{NFSU2_TR(0x4ca8a9);
__builtin_memmove((R+8),(R+4),4);
}
B4ca8ab:{NFSU2_TR(0x4ca8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca8af:{NFSU2_TR(0x4ca8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ca8b5:{NFSU2_TR(0x4ca8b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca8b9:{NFSU2_TR(0x4ca8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ca8bf:{NFSU2_TR(0x4ca8bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca8c3:{NFSU2_TR(0x4ca8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ca8c7:{NFSU2_TR(0x4ca8c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ca8cb:{NFSU2_TR(0x4ca8cb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca8cf:{NFSU2_TR(0x4ca8cf);
{u32 ea_=u32(u32(7921816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca8d5:{NFSU2_TR(0x4ca8d5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ca8db:{NFSU2_TR(0x4ca8db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ca8dd:{NFSU2_TR(0x4ca8dd);
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
B4ca8e0:{NFSU2_TR(0x4ca8e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca8f6;}}
}
B4ca8e2:L4ca8e2:{c.instructions+=4;NFSU2_TR(0x4ca8e2);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca8e8:{NFSU2_TR(0x4ca8e8);
{u32 ea_=u32(u32(7921816u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ca8ee:{NFSU2_TR(0x4ca8ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ca8f2:{NFSU2_TR(0x4ca8f2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca8f6:L4ca8f6:{c.instructions+=8;NFSU2_TR(0x4ca8f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4ca8fa:{NFSU2_TR(0x4ca8fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca8fb:{NFSU2_TR(0x4ca8fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ca8ff:{NFSU2_TR(0x4ca8ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca900:{NFSU2_TR(0x4ca900);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca902:{NFSU2_TR(0x4ca902);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ca904:{NFSU2_TR(0x4ca904);
__builtin_memmove((R+4),(R+24),4);
}
B4ca906:{NFSU2_TR(0x4ca906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca90bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca800u);}goto L4ca800;}
}
B4ca90b:L4ca90b:{c.instructions+=2;NFSU2_TR(0x4ca90b);
__builtin_memmove((R+4),(R+0),4);
}
B4ca90d:{NFSU2_TR(0x4ca90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ca912ull));
TAIL_STATIC(0x4ac2b0u,4ac);
}
B4ca912:L4ca912:{c.instructions+=38;NFSU2_TR(0x4ca912);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca918:{NFSU2_TR(0x4ca918);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ca91c:{NFSU2_TR(0x4ca91c);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4ca921:{NFSU2_TR(0x4ca921);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca923:{NFSU2_TR(0x4ca923);
__builtin_memmove((R+0),gp(0x89e7a0),4);
}
B4ca928:{NFSU2_TR(0x4ca928);
s4(0x8364d0,u32(0x40a00000ull));
}
B4ca932:{NFSU2_TR(0x4ca932);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca936:{NFSU2_TR(0x4ca936);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca93a:{NFSU2_TR(0x4ca93a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ca93e:{NFSU2_TR(0x4ca93e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ca942:{NFSU2_TR(0x4ca942);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca946:{NFSU2_TR(0x4ca946);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca94c:{NFSU2_TR(0x4ca94c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ca950:{NFSU2_TR(0x4ca950);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca954:{NFSU2_TR(0x4ca954);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca958:{NFSU2_TR(0x4ca958);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ca95c:{NFSU2_TR(0x4ca95c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ca960:{NFSU2_TR(0x4ca960);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca964:{NFSU2_TR(0x4ca964);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca968:{NFSU2_TR(0x4ca968);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ca96e:{NFSU2_TR(0x4ca96e);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca972:{NFSU2_TR(0x4ca972);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4ca974:{NFSU2_TR(0x4ca974);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ca978:{NFSU2_TR(0x4ca978);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca97c:{NFSU2_TR(0x4ca97c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ca982:{NFSU2_TR(0x4ca982);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ca986:{NFSU2_TR(0x4ca986);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4ca988:{NFSU2_TR(0x4ca988);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca98c:{NFSU2_TR(0x4ca98c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ca990:{NFSU2_TR(0x4ca990);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B4ca992:{NFSU2_TR(0x4ca992);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ca996:{NFSU2_TR(0x4ca996);
__builtin_memmove(gp(0x8364c8),(R+8),4);
}
B4ca99c:{NFSU2_TR(0x4ca99c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca9a0:{NFSU2_TR(0x4ca9a0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B4ca9a2:{NFSU2_TR(0x4ca9a2);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ca9a6:{NFSU2_TR(0x4ca9a6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca9aa:{NFSU2_TR(0x4ca9aa);
{u32 ea_=u32(u32(8611012u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ca9b0:{NFSU2_TR(0x4ca9b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ca9be;}}
}
B4ca9b2:L4ca9b2:{c.instructions+=2;NFSU2_TR(0x4ca9b2);
s4(0x8364cc,u32(0x40a00000ull));
}
B4ca9bc:{NFSU2_TR(0x4ca9bc);
{goto L4caa34;}
}
B4ca9be:L4ca9be:{c.instructions+=3;NFSU2_TR(0x4ca9be);
__builtin_memmove((R+4),gp(0x89e7d9),1);
}
B4ca9c4:{NFSU2_TR(0x4ca9c4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca9c6:{NFSU2_TR(0x4ca9c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caa12;}}
}
B4ca9c8:L4ca9c8:{c.instructions+=3;NFSU2_TR(0x4ca9c8);
__builtin_memmove((R+4),gp(0x890104),4);
}
B4ca9ce:{NFSU2_TR(0x4ca9ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca9d0:{NFSU2_TR(0x4ca9d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caa12;}}
}
B4ca9d2:L4ca9d2:{c.instructions+=3;NFSU2_TR(0x4ca9d2);
__builtin_memmove((R+4),gp(0x89e7e3),1);
}
B4ca9d8:{NFSU2_TR(0x4ca9d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca9da:{NFSU2_TR(0x4ca9da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caa12;}}
}
B4ca9dc:L4ca9dc:{c.instructions+=3;NFSU2_TR(0x4ca9dc);
__builtin_memmove((R+4),gp(0x89010c),4);
}
B4ca9e2:{NFSU2_TR(0x4ca9e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ca9e4:{NFSU2_TR(0x4ca9e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caa12;}}
}
B4ca9e6:L4ca9e6:{c.instructions+=3;NFSU2_TR(0x4ca9e6);
__builtin_memmove((R+4),gp(0x89e7e1),1);
}
B4ca9ec:{NFSU2_TR(0x4ca9ec);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca9ee:{NFSU2_TR(0x4ca9ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caa06;}}
}
B4ca9f0:L4ca9f0:{c.instructions+=3;NFSU2_TR(0x4ca9f0);
__builtin_memmove((R+4),gp(0x89e7e6),1);
}
B4ca9f6:{NFSU2_TR(0x4ca9f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ca9f8:{NFSU2_TR(0x4ca9f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caa06;}}
}
B4ca9fa:L4ca9fa:{c.instructions+=2;NFSU2_TR(0x4ca9fa);
s4(0x8364cc,u32(0x40a00000ull));
}
B4caa04:{NFSU2_TR(0x4caa04);
{goto L4caa34;}
}
B4caa06:L4caa06:{c.instructions+=2;NFSU2_TR(0x4caa06);
s4(0x8364cc,u32(0x40d33333ull));
}
B4caa10:{NFSU2_TR(0x4caa10);
{goto L4caa34;}
}
B4caa12:L4caa12:{c.instructions+=2;NFSU2_TR(0x4caa12);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104eull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4caa17:{NFSU2_TR(0x4caa17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4caa2a;}}
}
B4caa19:L4caa19:{c.instructions+=3;NFSU2_TR(0x4caa19);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1053ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4caa1e:{NFSU2_TR(0x4caa1e);
s4(0x8364cc,u32(0x40a00000ull));
}
B4caa28:{NFSU2_TR(0x4caa28);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4caa34;}}
}
B4caa2a:L4caa2a:{c.instructions+=1;NFSU2_TR(0x4caa2a);
s4(0x8364cc,u32(0x40533333ull));
}
B4caa34:L4caa34:{c.instructions+=3;NFSU2_TR(0x4caa34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa35:{NFSU2_TR(0x4caa35);
u8 U[4];
w4(U+0,u32(0x791858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa3a:{NFSU2_TR(0x4caa3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caa3full));
TAIL_STATIC(0x50b990u,50b);
}
B4caa3f:L4caa3f:{c.instructions+=4;NFSU2_TR(0x4caa3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa40:{NFSU2_TR(0x4caa40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caa43:{NFSU2_TR(0x4caa43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa44:{NFSU2_TR(0x4caa44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caa49ull));
TAIL_STATIC(0x50c990u,50c);
}
B4caa49:L4caa49:{c.instructions+=12;NFSU2_TR(0x4caa49);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caa4d:{NFSU2_TR(0x4caa4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4caa50:{NFSU2_TR(0x4caa50);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4caa54:{NFSU2_TR(0x4caa54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4caa57:{NFSU2_TR(0x4caa57);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa59:{NFSU2_TR(0x4caa59);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4caa5d:{NFSU2_TR(0x4caa5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa5e:{NFSU2_TR(0x4caa5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caa62:{NFSU2_TR(0x4caa62);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa64:{NFSU2_TR(0x4caa64);
__builtin_memmove((R+4),(R+28),4);
}
B4caa66:{NFSU2_TR(0x4caa66);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caa6a:{NFSU2_TR(0x4caa6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caa6full));
TAIL_STATIC(0x5179d0u,517);
}
B4caa6f:L4caa6f:{c.instructions+=15;NFSU2_TR(0x4caa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caa72:{NFSU2_TR(0x4caa72);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4caa76:{NFSU2_TR(0x4caa76);
w4(R+12,u32(0x400000ull));
}
B4caa7b:{NFSU2_TR(0x4caa7b);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+12))));
}
B4caa7d:{NFSU2_TR(0x4caa7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caa80:{NFSU2_TR(0x4caa80);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caa84:{NFSU2_TR(0x4caa84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4caa87:{NFSU2_TR(0x4caa87);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa89:{NFSU2_TR(0x4caa89);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4caa8d:{NFSU2_TR(0x4caa8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa8e:{NFSU2_TR(0x4caa8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caa92:{NFSU2_TR(0x4caa92);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caa94:{NFSU2_TR(0x4caa94);
__builtin_memmove((R+4),(R+28),4);
}
B4caa96:{NFSU2_TR(0x4caa96);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caa9a:{NFSU2_TR(0x4caa9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caa9full));
TAIL_STATIC(0x5179d0u,517);
}
B4caa9f:L4caa9f:{c.instructions+=10;NFSU2_TR(0x4caa9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caaa2:{NFSU2_TR(0x4caaa2);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+12))));
}
B4caaa4:{NFSU2_TR(0x4caaa4);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4caaa8:{NFSU2_TR(0x4caaa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caaa9:{NFSU2_TR(0x4caaa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4caaad:{NFSU2_TR(0x4caaad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caab0:{NFSU2_TR(0x4caab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caab3:{NFSU2_TR(0x4caab3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caab4:{NFSU2_TR(0x4caab4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caab5:{NFSU2_TR(0x4caab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caabaull));
TAIL_STATIC(0x51d620u,51d);
}
B4caaba:L4caaba:{c.instructions+=7;NFSU2_TR(0x4caaba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caabd:{NFSU2_TR(0x4caabd);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4caac1:{NFSU2_TR(0x4caac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caac2:{NFSU2_TR(0x4caac2);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4caac6:{NFSU2_TR(0x4caac6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caac7:{NFSU2_TR(0x4caac7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caac8:{NFSU2_TR(0x4caac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caacdull));
TAIL_STATIC(0x51d620u,51d);
}
B4caacd:L4caacd:{c.instructions+=7;NFSU2_TR(0x4caacd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caad0:{NFSU2_TR(0x4caad0);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4caad4:{NFSU2_TR(0x4caad4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caad5:{NFSU2_TR(0x4caad5);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4caad9:{NFSU2_TR(0x4caad9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caada:{NFSU2_TR(0x4caada);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caadb:{NFSU2_TR(0x4caadb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caae0ull));
TAIL_STATIC(0x51d730u,51d);
}
B4caae0:L4caae0:{c.instructions+=7;NFSU2_TR(0x4caae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caae3:{NFSU2_TR(0x4caae3);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4caae7:{NFSU2_TR(0x4caae7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caae8:{NFSU2_TR(0x4caae8);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4caaec:{NFSU2_TR(0x4caaec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caaed:{NFSU2_TR(0x4caaed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caaee:{NFSU2_TR(0x4caaee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caaf3ull));
TAIL_STATIC(0x51d730u,51d);
}
B4caaf3:L4caaf3:{c.instructions+=5;NFSU2_TR(0x4caaf3);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4caaf8:{NFSU2_TR(0x4caaf8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4caafb:{NFSU2_TR(0x4caafb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4caafd:{NFSU2_TR(0x4caafd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cab05:{NFSU2_TR(0x4cab05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cab2c;}}
}
B4cab07:L4cab07:{c.instructions+=2;NFSU2_TR(0x4cab07);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa1c),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4cab0e:{NFSU2_TR(0x4cab0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cab5c;}}
}
B4cab10:L4cab10:{c.instructions+=5;NFSU2_TR(0x4cab10);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cab14:{NFSU2_TR(0x4cab14);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cab18:{NFSU2_TR(0x4cab18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab19:{NFSU2_TR(0x4cab19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab1a:{NFSU2_TR(0x4cab1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cab1full));
TAIL_STATIC(0x43e6d0u,43e);
}
B4cab1f:L4cab1f:{c.instructions+=4;NFSU2_TR(0x4cab1f);
w4(R+0,u32(r2(R+0)));
}
B4cab22:{NFSU2_TR(0x4cab22);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cab26:{NFSU2_TR(0x4cab26);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cab2a:{NFSU2_TR(0x4cab2a);
{goto L4cab4f;}
}
B4cab2c:L4cab2c:{c.instructions+=2;NFSU2_TR(0x4cab2c);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa1b),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4cab33:{NFSU2_TR(0x4cab33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cab5c;}}
}
B4cab35:L4cab35:{c.instructions+=5;NFSU2_TR(0x4cab35);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cab39:{NFSU2_TR(0x4cab39);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cab3d:{NFSU2_TR(0x4cab3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab3e:{NFSU2_TR(0x4cab3e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab3f:{NFSU2_TR(0x4cab3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cab44ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4cab44:L4cab44:{c.instructions+=3;NFSU2_TR(0x4cab44);
w4(R+0,u32(r2(R+0)));
}
B4cab47:{NFSU2_TR(0x4cab47);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cab4b:{NFSU2_TR(0x4cab4b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cab4f:L4cab4f:{c.instructions+=3;NFSU2_TR(0x4cab4f);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cab55:{NFSU2_TR(0x4cab55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cab58:{NFSU2_TR(0x4cab58);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cab5c:L4cab5c:{c.instructions+=8;NFSU2_TR(0x4cab5c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cab60:{NFSU2_TR(0x4cab60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cab63:{NFSU2_TR(0x4cab63);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B4cab65:{NFSU2_TR(0x4cab65);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cab69:{NFSU2_TR(0x4cab69);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4cab6d:{NFSU2_TR(0x4cab6d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab6e:{NFSU2_TR(0x4cab6e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab6f:{NFSU2_TR(0x4cab6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cab74ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4cab74:L4cab74:{c.instructions+=4;NFSU2_TR(0x4cab74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cab77:{NFSU2_TR(0x4cab77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab78:{NFSU2_TR(0x4cab78);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab79:{NFSU2_TR(0x4cab79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cab7eull));
TAIL_STATIC(0x51ced0u,51c);
}
B4cab7e:L4cab7e:{c.instructions+=3;NFSU2_TR(0x4cab7e);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab83:{NFSU2_TR(0x4cab83);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cab85:{NFSU2_TR(0x4cab85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cab8aull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4cab8a:L4cab8a:{c.instructions+=11;NFSU2_TR(0x4cab8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cab8d:{NFSU2_TR(0x4cab8d);
w4(R+0,u32(r2(R+0)));
}
B4cab90:{NFSU2_TR(0x4cab90);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cab94:{NFSU2_TR(0x4cab94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4cab97:{NFSU2_TR(0x4cab97);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cab9b:{NFSU2_TR(0x4cab9b);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4caba1:{NFSU2_TR(0x4caba1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4caba5:{NFSU2_TR(0x4caba5);
{u32 ea_=u32(u32(7921812u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cabab:{NFSU2_TR(0x4cabab);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cabae:{NFSU2_TR(0x4cabae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cabaf:{NFSU2_TR(0x4cabaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cabb4ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4cabb4:L4cabb4:{c.instructions+=4;NFSU2_TR(0x4cabb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4cabb6:{NFSU2_TR(0x4cabb6);
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
B4cabb9:{NFSU2_TR(0x4cabb9);
__builtin_memmove((R+4),(R+24),4);
}
B4cabbb:{NFSU2_TR(0x4cabbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cabc0ull));
TAIL_STATIC(0x502fd0u,502);
}
B4cabc0:L4cabc0:{c.instructions+=3;NFSU2_TR(0x4cabc0);
__builtin_memmove((R+24),(R+0),4);
}
B4cabc2:{NFSU2_TR(0x4cabc2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cabc4:{NFSU2_TR(0x4cabc4);
if(r1(R+518)){{goto L4cae4a;}}
}
B4cabca:L4cabca:{c.instructions+=12;NFSU2_TR(0x4cabca);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cabd0:{NFSU2_TR(0x4cabd0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cabd4:{NFSU2_TR(0x4cabd4);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cabd8:{NFSU2_TR(0x4cabd8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cabde:{NFSU2_TR(0x4cabde);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cabe2:{NFSU2_TR(0x4cabe2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cabe6:{NFSU2_TR(0x4cabe6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cabea:{NFSU2_TR(0x4cabea);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cabf0:{NFSU2_TR(0x4cabf0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4cabf4:{NFSU2_TR(0x4cabf4);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cabfa:{NFSU2_TR(0x4cabfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4cabfe:{NFSU2_TR(0x4cabfe);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cac02:L4cac02:{c.instructions+=6;NFSU2_TR(0x4cac02);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4cac06:{NFSU2_TR(0x4cac06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cac07:{NFSU2_TR(0x4cac07);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4cac0b:{NFSU2_TR(0x4cac0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cac0c:{NFSU2_TR(0x4cac0c);
__builtin_memmove((R+4),(R+28),4);
}
B4cac0e:{NFSU2_TR(0x4cac0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cac13ull));
TAIL_STATIC(0x4ac2b0u,4ac);
}
B4cac13:L4cac13:{c.instructions+=14;NFSU2_TR(0x4cac13);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cac17:{NFSU2_TR(0x4cac17);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cac1b:{NFSU2_TR(0x4cac1b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cac1c:{NFSU2_TR(0x4cac1c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac20:{NFSU2_TR(0x4cac20);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cac24:{NFSU2_TR(0x4cac24);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac28:{NFSU2_TR(0x4cac28);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cac2c:{NFSU2_TR(0x4cac2c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cac30:{NFSU2_TR(0x4cac30);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cac34:{NFSU2_TR(0x4cac34);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac38:{NFSU2_TR(0x4cac38);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cac3c:{NFSU2_TR(0x4cac3c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac40:{NFSU2_TR(0x4cac40);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cac44:{NFSU2_TR(0x4cac44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cac49ull));
TAIL_STATIC(0x43c350u,43c);
}
B4cac49:L4cac49:{c.instructions+=4;NFSU2_TR(0x4cac49);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cac4d:{NFSU2_TR(0x4cac4d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cac51:{NFSU2_TR(0x4cac51);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cac52:{NFSU2_TR(0x4cac52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cac57ull));
TAIL_STATIC(0x43c350u,43c);
}
B4cac57:L4cac57:{c.instructions+=23;NFSU2_TR(0x4cac57);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cac5b:{NFSU2_TR(0x4cac5b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac5f:{NFSU2_TR(0x4cac5f);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4cac64:{NFSU2_TR(0x4cac64);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4cac66:{NFSU2_TR(0x4cac66);
__builtin_memmove((R+8),gp(0x78e090),4);
}
B4cac6c:{NFSU2_TR(0x4cac6c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac70:{NFSU2_TR(0x4cac70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cac73:{NFSU2_TR(0x4cac73);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cac75:{NFSU2_TR(0x4cac75);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cac79:{NFSU2_TR(0x4cac79);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4cac7b:{NFSU2_TR(0x4cac7b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cac7f:{NFSU2_TR(0x4cac7f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac83:{NFSU2_TR(0x4cac83);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cac87:{NFSU2_TR(0x4cac87);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac8b:{NFSU2_TR(0x4cac8b);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B4cac8d:{NFSU2_TR(0x4cac8d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4cac91:{NFSU2_TR(0x4cac91);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac95:{NFSU2_TR(0x4cac95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cac99:{NFSU2_TR(0x4cac99);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cac9d:{NFSU2_TR(0x4cac9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4cac9f:{NFSU2_TR(0x4cac9f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B4caca1:{NFSU2_TR(0x4caca1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caca5:{NFSU2_TR(0x4caca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cad01;}}
}
B4caca7:L4caca7:{c.instructions+=2;NFSU2_TR(0x4caca7);
w4(R+4,u32(0x838590ull));
}
B4cacac:{NFSU2_TR(0x4cacac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cacb1ull));
TAIL_STATIC(0x501100u,501);
}
B4cacb1:L4cacb1:{c.instructions+=2;NFSU2_TR(0x4cacb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cacb4:{NFSU2_TR(0x4cacb4);
if(r1(R+518)){{goto L4cacf9;}}
}
B4cacb6:L4cacb6:{c.instructions+=2;NFSU2_TR(0x4cacb6);
w4(R+4,u32(0x838590ull));
}
B4cacbb:{NFSU2_TR(0x4cacbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cacc0ull));
TAIL_STATIC(0x501100u,501);
}
B4cacc0:L4cacc0:{c.instructions+=2;NFSU2_TR(0x4cacc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cacc2:{NFSU2_TR(0x4cacc2);
if(r1(R+518)){{goto L4cacf9;}}
}
B4cacc4:L4cacc4:{c.instructions+=2;NFSU2_TR(0x4cacc4);
w4(R+4,u32(0x838590ull));
}
B4cacc9:{NFSU2_TR(0x4cacc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cacceull));
TAIL_STATIC(0x501100u,501);
}
B4cacce:L4cacce:{c.instructions+=2;NFSU2_TR(0x4cacce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cacd1:{NFSU2_TR(0x4cacd1);
if(r1(R+518)){{goto L4cacf9;}}
}
B4cacd3:L4cacd3:{c.instructions+=2;NFSU2_TR(0x4cacd3);
w4(R+4,u32(0x838590ull));
}
B4cacd8:{NFSU2_TR(0x4cacd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cacddull));
TAIL_STATIC(0x501100u,501);
}
B4cacdd:L4cacdd:{c.instructions+=2;NFSU2_TR(0x4cacdd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cace0:{NFSU2_TR(0x4cace0);
if(r1(R+518)){{goto L4cacf9;}}
}
B4cace2:L4cace2:{c.instructions+=3;NFSU2_TR(0x4cace2);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4cace7:{NFSU2_TR(0x4cace7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cace9:{NFSU2_TR(0x4cace9);
if(r1(R+518)){{goto L4cacf9;}}
}
B4caceb:L4caceb:{c.instructions+=2;NFSU2_TR(0x4caceb);
w4(R+4,u32(0x85b940ull));
}
B4cacf0:{NFSU2_TR(0x4cacf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cacf5ull));
TAIL_STATIC(0x501690u,501);
}
B4cacf5:L4cacf5:{c.instructions+=2;NFSU2_TR(0x4cacf5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cacf7:{NFSU2_TR(0x4cacf7);
if(r1(R+518)){{goto L4cad01;}}
}
B4cacf9:L4cacf9:{c.instructions+=1;NFSU2_TR(0x4cacf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x41200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4cad01:L4cad01:{c.instructions+=5;NFSU2_TR(0x4cad01);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad05:{NFSU2_TR(0x4cad05);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4cad09:{NFSU2_TR(0x4cad09);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cad0b:{NFSU2_TR(0x4cad0b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4cad0e:{NFSU2_TR(0x4cad0e);
if(r1(R+514)){{goto L4cae1c;}}
}
B4cad14:L4cad14:{c.instructions+=2;NFSU2_TR(0x4cad14);
__builtin_memmove((R+4),(R+28),4);
}
B4cad16:{NFSU2_TR(0x4cad16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cad1bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca6d0u);}goto L4ca6d0;}
}
B4cad1b:L4cad1b:{c.instructions+=2;NFSU2_TR(0x4cad1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cad1d:{NFSU2_TR(0x4cad1d);
if(r1(R+518)){{goto L4cae1c;}}
}
B4cad23:L4cad23:{c.instructions+=5;NFSU2_TR(0x4cad23);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad27:{NFSU2_TR(0x4cad27);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4cad2d:{NFSU2_TR(0x4cad2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cad2f:{NFSU2_TR(0x4cad2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cad32:{NFSU2_TR(0x4cad32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cad3e;}}
}
B4cad34:L4cad34:{c.instructions+=2;NFSU2_TR(0x4cad34);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B4cad38:{NFSU2_TR(0x4cad38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cae1c;}}
}
B4cad3e:L4cad3e:{c.instructions+=4;NFSU2_TR(0x4cad3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cad41:{NFSU2_TR(0x4cad41);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4cad43:{NFSU2_TR(0x4cad43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cad45:{NFSU2_TR(0x4cad45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cae1c;}}
}
B4cad4b:L4cad4b:{c.instructions+=5;NFSU2_TR(0x4cad4b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad4f:{NFSU2_TR(0x4cad4f);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4cad55:{NFSU2_TR(0x4cad55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4cad57:{NFSU2_TR(0x4cad57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4cad5a:{NFSU2_TR(0x4cad5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cad82;}}
}
B4cad5c:L4cad5c:{c.instructions+=9;NFSU2_TR(0x4cad5c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad62:{NFSU2_TR(0x4cad62);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cad66:{NFSU2_TR(0x4cad66);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad6a:{NFSU2_TR(0x4cad6a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4cad6c:{NFSU2_TR(0x4cad6c);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cad72:{NFSU2_TR(0x4cad72);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cad76:{NFSU2_TR(0x4cad76);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cad7a:{NFSU2_TR(0x4cad7a);
{u32 ea_=u32(u32(7921804u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cad80:{NFSU2_TR(0x4cad80);
{goto L4cad86;}
}
B4cad82:L4cad82:{c.instructions+=1;NFSU2_TR(0x4cad82);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad86:L4cad86:{c.instructions+=14;NFSU2_TR(0x4cad86);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cad8a:{NFSU2_TR(0x4cad8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cad8e:{NFSU2_TR(0x4cad8e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cad92:{NFSU2_TR(0x4cad92);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cad96:{NFSU2_TR(0x4cad96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cad97:{NFSU2_TR(0x4cad97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cad98:{NFSU2_TR(0x4cad98);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cad9c:{NFSU2_TR(0x4cad9c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cada0:{NFSU2_TR(0x4cada0);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cada4:{NFSU2_TR(0x4cada4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B4cada6:{NFSU2_TR(0x4cada6);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4cadaa:{NFSU2_TR(0x4cadaa);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cadae:{NFSU2_TR(0x4cadae);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4cadb0:{NFSU2_TR(0x4cadb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cadb5ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4cadb5:L4cadb5:{c.instructions+=10;NFSU2_TR(0x4cadb5);
w4(R+0,u32(r2(R+0)));
}
B4cadb8:{NFSU2_TR(0x4cadb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cadbc:{NFSU2_TR(0x4cadbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cadbf:{NFSU2_TR(0x4cadbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cadc2:{NFSU2_TR(0x4cadc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cadc4:{NFSU2_TR(0x4cadc4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cadc8:{NFSU2_TR(0x4cadc8);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cadce:{NFSU2_TR(0x4cadce);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cadd2:{NFSU2_TR(0x4cadd2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cadd6:{NFSU2_TR(0x4cadd6);
if(r1(R+518)){{goto L4caddc;}}
}
B4cadd8:L4cadd8:{c.instructions+=2;NFSU2_TR(0x4cadd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cadda:{NFSU2_TR(0x4cadda);
{goto L4cadde;}
}
B4caddc:L4caddc:{c.instructions+=1;NFSU2_TR(0x4caddc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cadde:L4cadde:{c.instructions+=6;NFSU2_TR(0x4cadde);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cade2:{NFSU2_TR(0x4cade2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cade6:{NFSU2_TR(0x4cade6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cade7:{NFSU2_TR(0x4cade7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cade8:{NFSU2_TR(0x4cade8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cade9:{NFSU2_TR(0x4cade9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cadeeull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4cadee:L4cadee:{c.instructions+=4;NFSU2_TR(0x4cadee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cadf1:{NFSU2_TR(0x4cadf1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cadf4:{NFSU2_TR(0x4cadf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cadf6:{NFSU2_TR(0x4cadf6);
if(r1(R+518)){{goto L4cae0a;}}
}
B4cadf8:L4cadf8:{c.instructions+=5;NFSU2_TR(0x4cadf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cadfc:{NFSU2_TR(0x4cadfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cadfe:{NFSU2_TR(0x4cadfe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cadff:{NFSU2_TR(0x4cadff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae00:{NFSU2_TR(0x4cae00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cae05ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4cae05:L4cae05:{c.instructions+=2;NFSU2_TR(0x4cae05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cae08:{NFSU2_TR(0x4cae08);
{goto L4cae39;}
}
B4cae0a:L4cae0a:{c.instructions+=5;NFSU2_TR(0x4cae0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cae0e:{NFSU2_TR(0x4cae0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cae10:{NFSU2_TR(0x4cae10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae11:{NFSU2_TR(0x4cae11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae12:{NFSU2_TR(0x4cae12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cae17ull));
TAIL_STATIC(0x51ced0u,51c);
}
B4cae17:L4cae17:{c.instructions+=2;NFSU2_TR(0x4cae17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cae1a:{NFSU2_TR(0x4cae1a);
{goto L4cae39;}
}
B4cae1c:L4cae1c:{c.instructions+=3;NFSU2_TR(0x4cae1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cae1f:{NFSU2_TR(0x4cae1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4cae21:{NFSU2_TR(0x4cae21);
if(r1(R+518)){{goto L4cae27;}}
}
B4cae23:L4cae23:{c.instructions+=2;NFSU2_TR(0x4cae23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4cae25:{NFSU2_TR(0x4cae25);
{goto L4cae29;}
}
B4cae27:L4cae27:{c.instructions+=1;NFSU2_TR(0x4cae27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4cae29:L4cae29:{c.instructions+=4;NFSU2_TR(0x4cae29);
u8 U[4];
w4(U+0,u32(0x44000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae2e:{NFSU2_TR(0x4cae2e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae30:{NFSU2_TR(0x4cae30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae31:{NFSU2_TR(0x4cae31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cae36ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4cae36:L4cae36:{c.instructions+=1;NFSU2_TR(0x4cae36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4cae39:L4cae39:{c.instructions+=2;NFSU2_TR(0x4cae39);
__builtin_memmove((R+4),(R+28),4);
}
B4cae3b:{NFSU2_TR(0x4cae3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cae40ull));
TAIL_STATIC(0x4ac460u,4ac);
}
B4cae40:L4cae40:{c.instructions+=3;NFSU2_TR(0x4cae40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4cae42:{NFSU2_TR(0x4cae42);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4cae44:{NFSU2_TR(0x4cae44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4cac02u);}goto L4cac02;}}
}
B4cae4a:L4cae4a:{c.instructions+=5;NFSU2_TR(0x4cae4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4cae4b:{NFSU2_TR(0x4cae4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4cae4c:{NFSU2_TR(0x4cae4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4cae4d:{NFSU2_TR(0x4cae4d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x64ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4cae50:{NFSU2_TR(0x4cae50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4cae60:L4cae60:{c.instructions+=23;NFSU2_TR(0x4cae60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae61:{NFSU2_TR(0x4cae61);
__builtin_memmove((R+20),(R+16),4);
}
B4cae63:{NFSU2_TR(0x4cae63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B4cae66:{NFSU2_TR(0x4cae66);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cae6c:{NFSU2_TR(0x4cae6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cae6d:{NFSU2_TR(0x4cae6d);
__builtin_memmove((R+24),(R+4),4);
}
B4cae6f:{NFSU2_TR(0x4cae6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4cae72:{NFSU2_TR(0x4cae72);
{u32 ea_=u32(r4(R+0)+u32(192u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cae78:{NFSU2_TR(0x4cae78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cae7e:{NFSU2_TR(0x4cae7e);
__builtin_memmove((R+8),(R+4),4);
}
B4cae80:{NFSU2_TR(0x4cae80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cae83:{NFSU2_TR(0x4cae83);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4cae89:{NFSU2_TR(0x4cae89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cae8c:{NFSU2_TR(0x4cae8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cae92:{NFSU2_TR(0x4cae92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cae95:{NFSU2_TR(0x4cae95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cae98:{NFSU2_TR(0x4cae98);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4cae9b:{NFSU2_TR(0x4cae9b);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cae9e:{NFSU2_TR(0x4cae9e);
{u32 ea_=u32(u32(7921816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caea4:{NFSU2_TR(0x4caea4);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4caeaa:{NFSU2_TR(0x4caeaa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4caeac:{NFSU2_TR(0x4caeac);
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
B4caeaf:{NFSU2_TR(0x4caeaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caec3;}}
}
B4caeb1:L4caeb1:{c.instructions+=4;NFSU2_TR(0x4caeb1);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caeb7:{NFSU2_TR(0x4caeb7);
{u32 ea_=u32(u32(7921816u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4caebd:{NFSU2_TR(0x4caebd);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4caec0:{NFSU2_TR(0x4caec0);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caec3:L4caec3:{c.instructions+=8;NFSU2_TR(0x4caec3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4caec6:{NFSU2_TR(0x4caec6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caec7:{NFSU2_TR(0x4caec7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4caeca:{NFSU2_TR(0x4caeca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caecb:{NFSU2_TR(0x4caecb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caecd:{NFSU2_TR(0x4caecd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caecf:{NFSU2_TR(0x4caecf);
__builtin_memmove((R+4),(R+24),4);
}
B4caed1:{NFSU2_TR(0x4caed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caed6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ca800u);}goto L4ca800;}
}
B4caed6:L4caed6:{c.instructions+=2;NFSU2_TR(0x4caed6);
__builtin_memmove((R+4),(R+0),4);
}
B4caed8:{NFSU2_TR(0x4caed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caeddull));
TAIL_STATIC(0x4ac2b0u,4ac);
}
B4caedd:L4caedd:{c.instructions+=21;NFSU2_TR(0x4caedd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caee3:{NFSU2_TR(0x4caee3);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4caee6:{NFSU2_TR(0x4caee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caee9:{NFSU2_TR(0x4caee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+8),(U+0),4);
}
B4caeec:{NFSU2_TR(0x4caeec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caeed:{NFSU2_TR(0x4caeed);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4caef0:{NFSU2_TR(0x4caef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caef1:{NFSU2_TR(0x4caef1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caef2:{NFSU2_TR(0x4caef2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caef5:{NFSU2_TR(0x4caef5);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caef8:{NFSU2_TR(0x4caef8);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4caefb:{NFSU2_TR(0x4caefb);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4caefe:{NFSU2_TR(0x4caefe);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caf01:{NFSU2_TR(0x4caf01);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caf07:{NFSU2_TR(0x4caf07);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4caf0a:{NFSU2_TR(0x4caf0a);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caf0d:{NFSU2_TR(0x4caf0d);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caf10:{NFSU2_TR(0x4caf10);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4caf13:{NFSU2_TR(0x4caf13);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4caf16:{NFSU2_TR(0x4caf16);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caf19:{NFSU2_TR(0x4caf19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caf1eull));
TAIL_STATIC(0x51d620u,51d);
}
B4caf1e:L4caf1e:{c.instructions+=7;NFSU2_TR(0x4caf1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caf21:{NFSU2_TR(0x4caf21);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+8),(U+0),4);
}
B4caf24:{NFSU2_TR(0x4caf24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf25:{NFSU2_TR(0x4caf25);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4caf28:{NFSU2_TR(0x4caf28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf29:{NFSU2_TR(0x4caf29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf2a:{NFSU2_TR(0x4caf2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caf2full));
TAIL_STATIC(0x51d620u,51d);
}
B4caf2f:L4caf2f:{c.instructions+=7;NFSU2_TR(0x4caf2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caf32:{NFSU2_TR(0x4caf32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4caf35:{NFSU2_TR(0x4caf35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf36:{NFSU2_TR(0x4caf36);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4caf39:{NFSU2_TR(0x4caf39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf3a:{NFSU2_TR(0x4caf3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf3b:{NFSU2_TR(0x4caf3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caf40ull));
TAIL_STATIC(0x51d730u,51d);
}
B4caf40:L4caf40:{c.instructions+=7;NFSU2_TR(0x4caf40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4caf43:{NFSU2_TR(0x4caf43);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4caf46:{NFSU2_TR(0x4caf46);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf47:{NFSU2_TR(0x4caf47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4caf4a:{NFSU2_TR(0x4caf4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf4b:{NFSU2_TR(0x4caf4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf4c:{NFSU2_TR(0x4caf4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caf51ull));
TAIL_STATIC(0x51d730u,51d);
}
B4caf51:L4caf51:{c.instructions+=6;NFSU2_TR(0x4caf51);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caf57:{NFSU2_TR(0x4caf57);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B4caf5c:{NFSU2_TR(0x4caf5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4caf5f:{NFSU2_TR(0x4caf5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4caf61:{NFSU2_TR(0x4caf61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4caf62:{NFSU2_TR(0x4caf62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4caf87;}}
}
B4caf64:L4caf64:{c.instructions+=2;NFSU2_TR(0x4caf64);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa1c),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4caf6b:{NFSU2_TR(0x4caf6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cafb1;}}
}
B4caf6d:L4caf6d:{c.instructions+=6;NFSU2_TR(0x4caf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4caf70:{NFSU2_TR(0x4caf70);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4caf72:{NFSU2_TR(0x4caf72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caf75:{NFSU2_TR(0x4caf75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf76:{NFSU2_TR(0x4caf76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf77:{NFSU2_TR(0x4caf77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caf7cull));
TAIL_STATIC(0x43e6d0u,43e);
}
B4caf7c:L4caf7c:{c.instructions+=4;NFSU2_TR(0x4caf7c);
w4(R+4,u32(r2(R+0)));
}
B4caf7f:{NFSU2_TR(0x4caf7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4caf82:{NFSU2_TR(0x4caf82);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4caf85:{NFSU2_TR(0x4caf85);
{goto L4cafa8;}
}
B4caf87:L4caf87:{c.instructions+=2;NFSU2_TR(0x4caf87);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa1b),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4caf8e:{NFSU2_TR(0x4caf8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4cafb1;}}
}
B4caf90:L4caf90:{c.instructions+=6;NFSU2_TR(0x4caf90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4caf93:{NFSU2_TR(0x4caf93);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4caf95:{NFSU2_TR(0x4caf95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4caf98:{NFSU2_TR(0x4caf98);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf99:{NFSU2_TR(0x4caf99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4caf9a:{NFSU2_TR(0x4caf9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caf9full));
TAIL_STATIC(0x43e6d0u,43e);
}
B4caf9f:L4caf9f:{c.instructions+=3;NFSU2_TR(0x4caf9f);
w4(R+4,u32(r2(R+0)));
}
B4cafa2:{NFSU2_TR(0x4cafa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4cafa5:{NFSU2_TR(0x4cafa5);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4cafa8:L4cafa8:{c.instructions+=2;NFSU2_TR(0x4cafa8);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cafae:{NFSU2_TR(0x4cafae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4cafb1:L4cafb1:{c.instructions+=17;NFSU2_TR(0x4cafb1);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cafb4:{NFSU2_TR(0x4cafb4);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cafb7:{NFSU2_TR(0x4cafb7);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cafba:{NFSU2_TR(0x4cafba);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cafbd:{NFSU2_TR(0x4cafbd);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cafc0:{NFSU2_TR(0x4cafc0);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cafc3:{NFSU2_TR(0x4cafc3);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cafc6:{NFSU2_TR(0x4cafc6);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cafc9:{NFSU2_TR(0x4cafc9);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cafcc:{NFSU2_TR(0x4cafcc);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4cafcf:{NFSU2_TR(0x4cafcf);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4cafd2:{NFSU2_TR(0x4cafd2);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cafd5:{NFSU2_TR(0x4cafd5);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4cafdb:{NFSU2_TR(0x4cafdb);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cafde:{NFSU2_TR(0x4cafde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4cafe1:{NFSU2_TR(0x4cafe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4cafe2:{NFSU2_TR(0x4cafe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4cafe7ull));
TAIL_STATIC(0x43c350u,43c);
}
B4cafe7:L4cafe7:{c.instructions+=5;NFSU2_TR(0x4cafe7);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4cafea:{NFSU2_TR(0x4cafea);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4cafed:{NFSU2_TR(0x4cafed);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4caff3:{NFSU2_TR(0x4caff3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4caff6:{NFSU2_TR(0x4caff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4caffbull));
TAIL_STATIC(0x43c350u,43c);
}
B4caffb:L4caffb:{c.instructions+=2;NFSU2_TR(0x4caffb);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4caffe:{NFSU2_TR(0x4caffe);
__builtin_memmove((R+0),gp(0x78e090),4);
TAIL_STATIC(0x4cb003u,4cb);
}
XIT:NFSU2_TR_EXIT(0x4ca,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
