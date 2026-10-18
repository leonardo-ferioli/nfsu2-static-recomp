#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_63d(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_6e0(u8* __restrict R,Cpu& c);
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6df,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6df,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6df(u8* __restrict R,Cpu& c);
u32 page_6df(Cpu& c){return body_6df(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6df(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6df000:goto L6df000;
case 0x6df003:c.instructions+=14;goto B6df003;
case 0x6df006:c.instructions+=13;goto B6df006;
case 0x6df009:c.instructions+=12;goto B6df009;
case 0x6df00b:c.instructions+=11;goto B6df00b;
case 0x6df00e:c.instructions+=10;goto B6df00e;
case 0x6df011:c.instructions+=9;goto B6df011;
case 0x6df014:c.instructions+=8;goto B6df014;
case 0x6df017:c.instructions+=7;goto B6df017;
case 0x6df01a:c.instructions+=6;goto B6df01a;
case 0x6df01e:c.instructions+=5;goto B6df01e;
case 0x6df021:c.instructions+=4;goto B6df021;
case 0x6df022:c.instructions+=3;goto B6df022;
case 0x6df025:c.instructions+=2;goto B6df025;
case 0x6df028:c.instructions+=1;goto B6df028;
case 0x6df030:goto L6df030;
case 0x6df035:c.instructions+=9;goto B6df035;
case 0x6df038:c.instructions+=8;goto B6df038;
case 0x6df03e:c.instructions+=7;goto B6df03e;
case 0x6df041:c.instructions+=6;goto B6df041;
case 0x6df042:c.instructions+=5;goto B6df042;
case 0x6df045:c.instructions+=4;goto B6df045;
case 0x6df048:c.instructions+=3;goto B6df048;
case 0x6df049:c.instructions+=2;goto B6df049;
case 0x6df04a:c.instructions+=1;goto B6df04a;
case 0x6df04f:goto L6df04f;
case 0x6df052:c.instructions+=1;goto B6df052;
case 0x6df060:goto L6df060;
case 0x6df065:c.instructions+=10;goto B6df065;
case 0x6df068:c.instructions+=9;goto B6df068;
case 0x6df06b:c.instructions+=8;goto B6df06b;
case 0x6df071:c.instructions+=7;goto B6df071;
case 0x6df072:c.instructions+=6;goto B6df072;
case 0x6df076:c.instructions+=5;goto B6df076;
case 0x6df079:c.instructions+=4;goto B6df079;
case 0x6df07a:c.instructions+=3;goto B6df07a;
case 0x6df07b:c.instructions+=2;goto B6df07b;
case 0x6df080:c.instructions+=1;goto B6df080;
case 0x6df085:goto L6df085;
case 0x6df088:c.instructions+=2;goto B6df088;
case 0x6df089:c.instructions+=1;goto B6df089;
case 0x6df090:goto L6df090;
case 0x6df093:c.instructions+=17;goto B6df093;
case 0x6df098:c.instructions+=16;goto B6df098;
case 0x6df09b:c.instructions+=15;goto B6df09b;
case 0x6df09e:c.instructions+=14;goto B6df09e;
case 0x6df09f:c.instructions+=13;goto B6df09f;
case 0x6df0a2:c.instructions+=12;goto B6df0a2;
case 0x6df0a3:c.instructions+=11;goto B6df0a3;
case 0x6df0a6:c.instructions+=10;goto B6df0a6;
case 0x6df0a7:c.instructions+=9;goto B6df0a7;
case 0x6df0ab:c.instructions+=8;goto B6df0ab;
case 0x6df0b1:c.instructions+=7;goto B6df0b1;
case 0x6df0b3:c.instructions+=6;goto B6df0b3;
case 0x6df0b4:c.instructions+=5;goto B6df0b4;
case 0x6df0b7:c.instructions+=4;goto B6df0b7;
case 0x6df0bb:c.instructions+=3;goto B6df0bb;
case 0x6df0be:c.instructions+=2;goto B6df0be;
case 0x6df0c0:c.instructions+=1;goto B6df0c0;
case 0x6df0c2:goto L6df0c2;
case 0x6df0c6:c.instructions+=1;goto B6df0c6;
case 0x6df0c8:goto L6df0c8;
case 0x6df0cc:c.instructions+=4;goto B6df0cc;
case 0x6df0cd:c.instructions+=3;goto B6df0cd;
case 0x6df0d1:c.instructions+=2;goto B6df0d1;
case 0x6df0d2:c.instructions+=1;goto B6df0d2;
case 0x6df0d7:goto L6df0d7;
case 0x6df0da:goto L6df0da;
case 0x6df0e0:c.instructions+=8;goto B6df0e0;
case 0x6df0e7:c.instructions+=7;goto B6df0e7;
case 0x6df0e8:c.instructions+=6;goto B6df0e8;
case 0x6df0e9:c.instructions+=5;goto B6df0e9;
case 0x6df0ea:c.instructions+=4;goto B6df0ea;
case 0x6df0ef:c.instructions+=3;goto B6df0ef;
case 0x6df0f0:c.instructions+=2;goto B6df0f0;
case 0x6df0f1:c.instructions+=1;goto B6df0f1;
case 0x6df0f6:goto L6df0f6;
case 0x6df0f9:c.instructions+=2;goto B6df0f9;
case 0x6df0fd:c.instructions+=1;goto B6df0fd;
case 0x6df102:goto L6df102;
case 0x6df107:c.instructions+=8;goto B6df107;
case 0x6df10b:c.instructions+=7;goto B6df10b;
case 0x6df10e:c.instructions+=6;goto B6df10e;
case 0x6df114:c.instructions+=5;goto B6df114;
case 0x6df116:c.instructions+=4;goto B6df116;
case 0x6df11c:c.instructions+=3;goto B6df11c;
case 0x6df11f:c.instructions+=2;goto B6df11f;
case 0x6df122:c.instructions+=1;goto B6df122;
case 0x6df128:goto L6df128;
case 0x6df12d:c.instructions+=2;goto B6df12d;
case 0x6df12f:c.instructions+=1;goto B6df12f;
case 0x6df131:goto L6df131;
case 0x6df134:c.instructions+=5;goto B6df134;
case 0x6df138:c.instructions+=4;goto B6df138;
case 0x6df13a:c.instructions+=3;goto B6df13a;
case 0x6df13b:c.instructions+=2;goto B6df13b;
case 0x6df13c:c.instructions+=1;goto B6df13c;
case 0x6df141:goto L6df141;
case 0x6df145:c.instructions+=4;goto B6df145;
case 0x6df149:c.instructions+=3;goto B6df149;
case 0x6df14a:c.instructions+=2;goto B6df14a;
case 0x6df14b:c.instructions+=1;goto B6df14b;
case 0x6df150:goto L6df150;
case 0x6df153:c.instructions+=6;goto B6df153;
case 0x6df154:c.instructions+=5;goto B6df154;
case 0x6df155:c.instructions+=4;goto B6df155;
case 0x6df156:c.instructions+=3;goto B6df156;
case 0x6df157:c.instructions+=2;goto B6df157;
case 0x6df15a:c.instructions+=1;goto B6df15a;
case 0x6df160:goto L6df160;
case 0x6df161:c.instructions+=12;goto B6df161;
case 0x6df166:c.instructions+=11;goto B6df166;
case 0x6df16c:c.instructions+=10;goto B6df16c;
case 0x6df16d:c.instructions+=9;goto B6df16d;
case 0x6df170:c.instructions+=8;goto B6df170;
case 0x6df173:c.instructions+=7;goto B6df173;
case 0x6df174:c.instructions+=6;goto B6df174;
case 0x6df177:c.instructions+=5;goto B6df177;
case 0x6df17a:c.instructions+=4;goto B6df17a;
case 0x6df17e:c.instructions+=3;goto B6df17e;
case 0x6df181:c.instructions+=2;goto B6df181;
case 0x6df184:c.instructions+=1;goto B6df184;
case 0x6df186:goto L6df186;
case 0x6df189:c.instructions+=1;goto B6df189;
case 0x6df18b:goto L6df18b;
case 0x6df18e:c.instructions+=1;goto B6df18e;
case 0x6df190:goto L6df190;
case 0x6df194:c.instructions+=2;goto B6df194;
case 0x6df195:c.instructions+=1;goto B6df195;
case 0x6df19a:goto L6df19a;
case 0x6df19d:goto L6df19d;
case 0x6df1a3:c.instructions+=5;goto B6df1a3;
case 0x6df1a8:c.instructions+=4;goto B6df1a8;
case 0x6df1a9:c.instructions+=3;goto B6df1a9;
case 0x6df1b0:c.instructions+=2;goto B6df1b0;
case 0x6df1b1:c.instructions+=1;goto B6df1b1;
case 0x6df1b6:goto L6df1b6;
case 0x6df1b9:c.instructions+=2;goto B6df1b9;
case 0x6df1bd:c.instructions+=1;goto B6df1bd;
case 0x6df1c2:goto L6df1c2;
case 0x6df1c8:c.instructions+=3;goto B6df1c8;
case 0x6df1cc:c.instructions+=2;goto B6df1cc;
case 0x6df1cf:c.instructions+=1;goto B6df1cf;
case 0x6df1d3:goto L6df1d3;
case 0x6df1d8:c.instructions+=2;goto B6df1d8;
case 0x6df1da:c.instructions+=1;goto B6df1da;
case 0x6df1dc:goto L6df1dc;
case 0x6df1dd:c.instructions+=2;goto B6df1dd;
case 0x6df1de:c.instructions+=1;goto B6df1de;
case 0x6df1e3:goto L6df1e3;
case 0x6df1e7:goto L6df1e7;
case 0x6df1e8:c.instructions+=1;goto B6df1e8;
case 0x6df1ed:goto L6df1ed;
case 0x6df1f0:c.instructions+=4;goto B6df1f0;
case 0x6df1f1:c.instructions+=3;goto B6df1f1;
case 0x6df1f2:c.instructions+=2;goto B6df1f2;
case 0x6df1f3:c.instructions+=1;goto B6df1f3;
case 0x6df200:goto L6df200;
case 0x6df205:c.instructions+=3;goto B6df205;
case 0x6df208:c.instructions+=2;goto B6df208;
case 0x6df209:c.instructions+=1;goto B6df209;
case 0x6df20e:goto L6df20e;
case 0x6df20f:c.instructions+=1;goto B6df20f;
case 0x6df210:goto L6df210;
case 0x6df215:c.instructions+=7;goto B6df215;
case 0x6df218:c.instructions+=6;goto B6df218;
case 0x6df21f:c.instructions+=5;goto B6df21f;
case 0x6df225:c.instructions+=4;goto B6df225;
case 0x6df228:c.instructions+=3;goto B6df228;
case 0x6df22b:c.instructions+=2;goto B6df22b;
case 0x6df232:c.instructions+=1;goto B6df232;
case 0x6df240:goto L6df240;
case 0x6df245:c.instructions+=4;goto B6df245;
case 0x6df248:c.instructions+=3;goto B6df248;
case 0x6df249:c.instructions+=2;goto B6df249;
case 0x6df24e:c.instructions+=1;goto B6df24e;
case 0x6df253:goto L6df253;
case 0x6df259:c.instructions+=5;goto B6df259;
case 0x6df25c:c.instructions+=4;goto B6df25c;
case 0x6df25e:c.instructions+=3;goto B6df25e;
case 0x6df263:c.instructions+=2;goto B6df263;
case 0x6df264:c.instructions+=1;goto B6df264;
case 0x6df269:goto L6df269;
case 0x6df26c:c.instructions+=1;goto B6df26c;
case 0x6df270:goto L6df270;
case 0x6df271:c.instructions+=7;goto B6df271;
case 0x6df276:c.instructions+=6;goto B6df276;
case 0x6df277:c.instructions+=5;goto B6df277;
case 0x6df278:c.instructions+=4;goto B6df278;
case 0x6df27c:c.instructions+=3;goto B6df27c;
case 0x6df27d:c.instructions+=2;goto B6df27d;
case 0x6df283:c.instructions+=1;goto B6df283;
case 0x6df288:goto L6df288;
case 0x6df28c:c.instructions+=3;goto B6df28c;
case 0x6df28e:c.instructions+=2;goto B6df28e;
case 0x6df290:c.instructions+=1;goto B6df290;
case 0x6df292:goto L6df292;
case 0x6df298:c.instructions+=4;goto B6df298;
case 0x6df29e:c.instructions+=3;goto B6df29e;
case 0x6df29f:c.instructions+=2;goto B6df29f;
case 0x6df2a0:c.instructions+=1;goto B6df2a0;
case 0x6df2a5:goto L6df2a5;
case 0x6df2ab:c.instructions+=1;goto B6df2ab;
case 0x6df2b0:goto L6df2b0;
case 0x6df2b5:c.instructions+=5;goto B6df2b5;
case 0x6df2bb:c.instructions+=4;goto B6df2bb;
case 0x6df2bc:c.instructions+=3;goto B6df2bc;
case 0x6df2bd:c.instructions+=2;goto B6df2bd;
case 0x6df2bf:c.instructions+=1;goto B6df2bf;
case 0x6df2c4:goto L6df2c4;
case 0x6df2c8:c.instructions+=4;goto B6df2c8;
case 0x6df2cb:c.instructions+=3;goto B6df2cb;
case 0x6df2cc:c.instructions+=2;goto B6df2cc;
case 0x6df2ce:c.instructions+=1;goto B6df2ce;
case 0x6df2d0:goto L6df2d0;
case 0x6df2d6:c.instructions+=1;goto B6df2d6;
case 0x6df2db:goto L6df2db;
case 0x6df2dc:c.instructions+=2;goto B6df2dc;
case 0x6df2dd:c.instructions+=1;goto B6df2dd;
case 0x6df2e0:goto L6df2e0;
case 0x6df2e1:c.instructions+=4;goto B6df2e1;
case 0x6df2e6:c.instructions+=3;goto B6df2e6;
case 0x6df2e7:c.instructions+=2;goto B6df2e7;
case 0x6df2e8:c.instructions+=1;goto B6df2e8;
case 0x6df2ed:goto L6df2ed;
case 0x6df2f3:c.instructions+=6;goto B6df2f3;
case 0x6df2f6:c.instructions+=5;goto B6df2f6;
case 0x6df2f7:c.instructions+=4;goto B6df2f7;
case 0x6df2fd:c.instructions+=3;goto B6df2fd;
case 0x6df301:c.instructions+=2;goto B6df301;
case 0x6df302:c.instructions+=1;goto B6df302;
case 0x6df307:goto L6df307;
case 0x6df30b:c.instructions+=3;goto B6df30b;
case 0x6df30d:c.instructions+=2;goto B6df30d;
case 0x6df30f:c.instructions+=1;goto B6df30f;
case 0x6df311:goto L6df311;
case 0x6df316:c.instructions+=4;goto B6df316;
case 0x6df31c:c.instructions+=3;goto B6df31c;
case 0x6df31d:c.instructions+=2;goto B6df31d;
case 0x6df31e:c.instructions+=1;goto B6df31e;
case 0x6df323:goto L6df323;
case 0x6df329:c.instructions+=1;goto B6df329;
case 0x6df32e:goto L6df32e;
case 0x6df333:goto L6df333;
case 0x6df339:c.instructions+=8;goto B6df339;
case 0x6df33f:c.instructions+=7;goto B6df33f;
case 0x6df344:c.instructions+=6;goto B6df344;
case 0x6df345:c.instructions+=5;goto B6df345;
case 0x6df346:c.instructions+=4;goto B6df346;
case 0x6df348:c.instructions+=3;goto B6df348;
case 0x6df349:c.instructions+=2;goto B6df349;
case 0x6df34b:c.instructions+=1;goto B6df34b;
case 0x6df350:goto L6df350;
case 0x6df354:c.instructions+=4;goto B6df354;
case 0x6df357:c.instructions+=3;goto B6df357;
case 0x6df358:c.instructions+=2;goto B6df358;
case 0x6df35a:c.instructions+=1;goto B6df35a;
case 0x6df35c:goto L6df35c;
case 0x6df362:c.instructions+=1;goto B6df362;
case 0x6df367:goto L6df367;
case 0x6df368:c.instructions+=2;goto B6df368;
case 0x6df369:c.instructions+=1;goto B6df369;
case 0x6df370:goto L6df370;
case 0x6df375:c.instructions+=12;goto B6df375;
case 0x6df378:c.instructions+=11;goto B6df378;
case 0x6df37e:c.instructions+=10;goto B6df37e;
case 0x6df380:c.instructions+=9;goto B6df380;
case 0x6df385:c.instructions+=8;goto B6df385;
case 0x6df388:c.instructions+=7;goto B6df388;
case 0x6df38e:c.instructions+=6;goto B6df38e;
case 0x6df391:c.instructions+=5;goto B6df391;
case 0x6df394:c.instructions+=4;goto B6df394;
case 0x6df39a:c.instructions+=3;goto B6df39a;
case 0x6df3a0:c.instructions+=2;goto B6df3a0;
case 0x6df3a5:c.instructions+=1;goto B6df3a5;
case 0x6df3b0:goto L6df3b0;
case 0x6df3b5:c.instructions+=3;goto B6df3b5;
case 0x6df3b8:c.instructions+=2;goto B6df3b8;
case 0x6df3be:c.instructions+=1;goto B6df3be;
case 0x6df3c0:goto L6df3c0;
case 0x6df3c1:c.instructions+=7;goto B6df3c1;
case 0x6df3c6:c.instructions+=6;goto B6df3c6;
case 0x6df3c7:c.instructions+=5;goto B6df3c7;
case 0x6df3c8:c.instructions+=4;goto B6df3c8;
case 0x6df3cc:c.instructions+=3;goto B6df3cc;
case 0x6df3cd:c.instructions+=2;goto B6df3cd;
case 0x6df3d3:c.instructions+=1;goto B6df3d3;
case 0x6df3d8:goto L6df3d8;
case 0x6df3dc:c.instructions+=3;goto B6df3dc;
case 0x6df3de:c.instructions+=2;goto B6df3de;
case 0x6df3e0:c.instructions+=1;goto B6df3e0;
case 0x6df3e2:goto L6df3e2;
case 0x6df3e3:goto L6df3e3;
case 0x6df3e9:c.instructions+=4;goto B6df3e9;
case 0x6df3ef:c.instructions+=3;goto B6df3ef;
case 0x6df3f0:c.instructions+=2;goto B6df3f0;
case 0x6df3f1:c.instructions+=1;goto B6df3f1;
case 0x6df3f6:goto L6df3f6;
case 0x6df3fc:c.instructions+=1;goto B6df3fc;
case 0x6df401:goto L6df401;
case 0x6df407:c.instructions+=10;goto B6df407;
case 0x6df40d:c.instructions+=9;goto B6df40d;
case 0x6df414:c.instructions+=8;goto B6df414;
case 0x6df416:c.instructions+=7;goto B6df416;
case 0x6df418:c.instructions+=6;goto B6df418;
case 0x6df419:c.instructions+=5;goto B6df419;
case 0x6df420:c.instructions+=4;goto B6df420;
case 0x6df421:c.instructions+=3;goto B6df421;
case 0x6df422:c.instructions+=2;goto B6df422;
case 0x6df424:c.instructions+=1;goto B6df424;
case 0x6df429:goto L6df429;
case 0x6df42d:c.instructions+=4;goto B6df42d;
case 0x6df430:c.instructions+=3;goto B6df430;
case 0x6df431:c.instructions+=2;goto B6df431;
case 0x6df433:c.instructions+=1;goto B6df433;
case 0x6df435:goto L6df435;
case 0x6df436:goto L6df436;
case 0x6df43c:c.instructions+=1;goto B6df43c;
case 0x6df441:goto L6df441;
case 0x6df442:c.instructions+=2;goto B6df442;
case 0x6df443:c.instructions+=1;goto B6df443;
case 0x6df450:goto L6df450;
case 0x6df451:c.instructions+=4;goto B6df451;
case 0x6df456:c.instructions+=3;goto B6df456;
case 0x6df457:c.instructions+=2;goto B6df457;
case 0x6df458:c.instructions+=1;goto B6df458;
case 0x6df45d:goto L6df45d;
case 0x6df463:c.instructions+=6;goto B6df463;
case 0x6df466:c.instructions+=5;goto B6df466;
case 0x6df467:c.instructions+=4;goto B6df467;
case 0x6df46d:c.instructions+=3;goto B6df46d;
case 0x6df471:c.instructions+=2;goto B6df471;
case 0x6df472:c.instructions+=1;goto B6df472;
case 0x6df477:goto L6df477;
case 0x6df47b:c.instructions+=3;goto B6df47b;
case 0x6df47d:c.instructions+=2;goto B6df47d;
case 0x6df47f:c.instructions+=1;goto B6df47f;
case 0x6df481:goto L6df481;
case 0x6df482:goto L6df482;
case 0x6df487:c.instructions+=4;goto B6df487;
case 0x6df48d:c.instructions+=3;goto B6df48d;
case 0x6df48e:c.instructions+=2;goto B6df48e;
case 0x6df48f:c.instructions+=1;goto B6df48f;
case 0x6df494:goto L6df494;
case 0x6df49a:c.instructions+=1;goto B6df49a;
case 0x6df49f:goto L6df49f;
case 0x6df4a4:goto L6df4a4;
case 0x6df4aa:c.instructions+=13;goto B6df4aa;
case 0x6df4b0:c.instructions+=12;goto B6df4b0;
case 0x6df4b7:c.instructions+=11;goto B6df4b7;
case 0x6df4b9:c.instructions+=10;goto B6df4b9;
case 0x6df4bb:c.instructions+=9;goto B6df4bb;
case 0x6df4bc:c.instructions+=8;goto B6df4bc;
case 0x6df4c3:c.instructions+=7;goto B6df4c3;
case 0x6df4c9:c.instructions+=6;goto B6df4c9;
case 0x6df4ca:c.instructions+=5;goto B6df4ca;
case 0x6df4cb:c.instructions+=4;goto B6df4cb;
case 0x6df4cd:c.instructions+=3;goto B6df4cd;
case 0x6df4ce:c.instructions+=2;goto B6df4ce;
case 0x6df4d0:c.instructions+=1;goto B6df4d0;
case 0x6df4d5:goto L6df4d5;
case 0x6df4d9:c.instructions+=4;goto B6df4d9;
case 0x6df4dc:c.instructions+=3;goto B6df4dc;
case 0x6df4dd:c.instructions+=2;goto B6df4dd;
case 0x6df4df:c.instructions+=1;goto B6df4df;
case 0x6df4e1:goto L6df4e1;
case 0x6df4e2:goto L6df4e2;
case 0x6df4e8:c.instructions+=1;goto B6df4e8;
case 0x6df4ed:goto L6df4ed;
case 0x6df4ee:c.instructions+=2;goto B6df4ee;
case 0x6df4ef:c.instructions+=1;goto B6df4ef;
case 0x6df4f0:goto L6df4f0;
case 0x6df4f1:c.instructions+=4;goto B6df4f1;
case 0x6df4f6:c.instructions+=3;goto B6df4f6;
case 0x6df4f7:c.instructions+=2;goto B6df4f7;
case 0x6df4f8:c.instructions+=1;goto B6df4f8;
case 0x6df4fd:goto L6df4fd;
case 0x6df503:c.instructions+=6;goto B6df503;
case 0x6df506:c.instructions+=5;goto B6df506;
case 0x6df507:c.instructions+=4;goto B6df507;
case 0x6df50d:c.instructions+=3;goto B6df50d;
case 0x6df511:c.instructions+=2;goto B6df511;
case 0x6df512:c.instructions+=1;goto B6df512;
case 0x6df517:goto L6df517;
case 0x6df51b:c.instructions+=3;goto B6df51b;
case 0x6df51d:c.instructions+=2;goto B6df51d;
case 0x6df51f:c.instructions+=1;goto B6df51f;
case 0x6df521:goto L6df521;
case 0x6df522:goto L6df522;
case 0x6df527:c.instructions+=4;goto B6df527;
case 0x6df52d:c.instructions+=3;goto B6df52d;
case 0x6df52e:c.instructions+=2;goto B6df52e;
case 0x6df52f:c.instructions+=1;goto B6df52f;
case 0x6df534:goto L6df534;
case 0x6df53a:c.instructions+=1;goto B6df53a;
case 0x6df53f:goto L6df53f;
case 0x6df545:c.instructions+=7;goto B6df545;
case 0x6df54c:c.instructions+=6;goto B6df54c;
case 0x6df551:c.instructions+=5;goto B6df551;
case 0x6df553:c.instructions+=4;goto B6df553;
case 0x6df554:c.instructions+=3;goto B6df554;
case 0x6df55b:c.instructions+=2;goto B6df55b;
case 0x6df55d:c.instructions+=1;goto B6df55d;
case 0x6df562:goto L6df562;
case 0x6df568:c.instructions+=7;goto B6df568;
case 0x6df56e:c.instructions+=6;goto B6df56e;
case 0x6df56f:c.instructions+=5;goto B6df56f;
case 0x6df570:c.instructions+=4;goto B6df570;
case 0x6df572:c.instructions+=3;goto B6df572;
case 0x6df573:c.instructions+=2;goto B6df573;
case 0x6df575:c.instructions+=1;goto B6df575;
case 0x6df57a:goto L6df57a;
case 0x6df57e:c.instructions+=4;goto B6df57e;
case 0x6df581:c.instructions+=3;goto B6df581;
case 0x6df582:c.instructions+=2;goto B6df582;
case 0x6df584:c.instructions+=1;goto B6df584;
case 0x6df586:goto L6df586;
case 0x6df587:goto L6df587;
case 0x6df58d:c.instructions+=1;goto B6df58d;
case 0x6df592:goto L6df592;
case 0x6df593:c.instructions+=2;goto B6df593;
case 0x6df594:c.instructions+=1;goto B6df594;
case 0x6df5a0:goto L6df5a0;
case 0x6df5a5:c.instructions+=4;goto B6df5a5;
case 0x6df5a8:c.instructions+=3;goto B6df5a8;
case 0x6df5a9:c.instructions+=2;goto B6df5a9;
case 0x6df5ae:c.instructions+=1;goto B6df5ae;
case 0x6df5b3:goto L6df5b3;
case 0x6df5b9:c.instructions+=5;goto B6df5b9;
case 0x6df5bc:c.instructions+=4;goto B6df5bc;
case 0x6df5be:c.instructions+=3;goto B6df5be;
case 0x6df5c3:c.instructions+=2;goto B6df5c3;
case 0x6df5c4:c.instructions+=1;goto B6df5c4;
case 0x6df5c9:goto L6df5c9;
case 0x6df5cc:c.instructions+=1;goto B6df5cc;
case 0x6df5d0:goto L6df5d0;
case 0x6df5d5:c.instructions+=9;goto B6df5d5;
case 0x6df5d8:c.instructions+=8;goto B6df5d8;
case 0x6df5de:c.instructions+=7;goto B6df5de;
case 0x6df5e1:c.instructions+=6;goto B6df5e1;
case 0x6df5e2:c.instructions+=5;goto B6df5e2;
case 0x6df5e5:c.instructions+=4;goto B6df5e5;
case 0x6df5e8:c.instructions+=3;goto B6df5e8;
case 0x6df5e9:c.instructions+=2;goto B6df5e9;
case 0x6df5ea:c.instructions+=1;goto B6df5ea;
case 0x6df5ef:goto L6df5ef;
case 0x6df5f2:c.instructions+=1;goto B6df5f2;
case 0x6df600:goto L6df600;
case 0x6df605:c.instructions+=11;goto B6df605;
case 0x6df60b:c.instructions+=10;goto B6df60b;
case 0x6df60e:c.instructions+=9;goto B6df60e;
case 0x6df60f:c.instructions+=8;goto B6df60f;
case 0x6df615:c.instructions+=7;goto B6df615;
case 0x6df61b:c.instructions+=6;goto B6df61b;
case 0x6df61c:c.instructions+=5;goto B6df61c;
case 0x6df61f:c.instructions+=4;goto B6df61f;
case 0x6df621:c.instructions+=3;goto B6df621;
case 0x6df624:c.instructions+=2;goto B6df624;
case 0x6df626:c.instructions+=1;goto B6df626;
case 0x6df628:goto L6df628;
case 0x6df62e:c.instructions+=7;goto B6df62e;
case 0x6df633:c.instructions+=6;goto B6df633;
case 0x6df635:c.instructions+=5;goto B6df635;
case 0x6df638:c.instructions+=4;goto B6df638;
case 0x6df639:c.instructions+=3;goto B6df639;
case 0x6df63e:c.instructions+=2;goto B6df63e;
case 0x6df63f:c.instructions+=1;goto B6df63f;
case 0x6df645:goto L6df645;
case 0x6df647:c.instructions+=1;goto B6df647;
case 0x6df64d:goto L6df64d;
case 0x6df64e:c.instructions+=4;goto B6df64e;
case 0x6df64f:c.instructions+=3;goto B6df64f;
case 0x6df651:c.instructions+=2;goto B6df651;
case 0x6df656:c.instructions+=1;goto B6df656;
case 0x6df65b:goto L6df65b;
case 0x6df65d:goto L6df65d;
case 0x6df663:c.instructions+=36;goto B6df663;
case 0x6df666:c.instructions+=35;goto B6df666;
case 0x6df66b:c.instructions+=34;goto B6df66b;
case 0x6df66f:c.instructions+=33;goto B6df66f;
case 0x6df672:c.instructions+=32;goto B6df672;
case 0x6df678:c.instructions+=31;goto B6df678;
case 0x6df67c:c.instructions+=30;goto B6df67c;
case 0x6df680:c.instructions+=29;goto B6df680;
case 0x6df684:c.instructions+=28;goto B6df684;
case 0x6df687:c.instructions+=27;goto B6df687;
case 0x6df68d:c.instructions+=26;goto B6df68d;
case 0x6df691:c.instructions+=25;goto B6df691;
case 0x6df695:c.instructions+=24;goto B6df695;
case 0x6df699:c.instructions+=23;goto B6df699;
case 0x6df69c:c.instructions+=22;goto B6df69c;
case 0x6df6a2:c.instructions+=21;goto B6df6a2;
case 0x6df6a6:c.instructions+=20;goto B6df6a6;
case 0x6df6aa:c.instructions+=19;goto B6df6aa;
case 0x6df6ae:c.instructions+=18;goto B6df6ae;
case 0x6df6b1:c.instructions+=17;goto B6df6b1;
case 0x6df6b7:c.instructions+=16;goto B6df6b7;
case 0x6df6bb:c.instructions+=15;goto B6df6bb;
case 0x6df6bf:c.instructions+=14;goto B6df6bf;
case 0x6df6c3:c.instructions+=13;goto B6df6c3;
case 0x6df6c7:c.instructions+=12;goto B6df6c7;
case 0x6df6cb:c.instructions+=11;goto B6df6cb;
case 0x6df6cf:c.instructions+=10;goto B6df6cf;
case 0x6df6d5:c.instructions+=9;goto B6df6d5;
case 0x6df6d8:c.instructions+=8;goto B6df6d8;
case 0x6df6da:c.instructions+=7;goto B6df6da;
case 0x6df6de:c.instructions+=6;goto B6df6de;
case 0x6df6e1:c.instructions+=5;goto B6df6e1;
case 0x6df6e3:c.instructions+=4;goto B6df6e3;
case 0x6df6e6:c.instructions+=3;goto B6df6e6;
case 0x6df6e8:c.instructions+=2;goto B6df6e8;
case 0x6df6ea:c.instructions+=1;goto B6df6ea;
case 0x6df6ec:goto L6df6ec;
case 0x6df6f2:c.instructions+=6;goto B6df6f2;
case 0x6df6f3:c.instructions+=5;goto B6df6f3;
case 0x6df6f8:c.instructions+=4;goto B6df6f8;
case 0x6df6fd:c.instructions+=3;goto B6df6fd;
case 0x6df6ff:c.instructions+=2;goto B6df6ff;
case 0x6df700:c.instructions+=1;goto B6df700;
case 0x6df706:goto L6df706;
case 0x6df709:c.instructions+=2;goto B6df709;
case 0x6df70e:c.instructions+=1;goto B6df70e;
case 0x6df710:goto L6df710;
case 0x6df712:goto L6df712;
case 0x6df714:c.instructions+=3;goto B6df714;
case 0x6df716:c.instructions+=2;goto B6df716;
case 0x6df71a:c.instructions+=1;goto B6df71a;
case 0x6df720:goto L6df720;
case 0x6df723:c.instructions+=4;goto B6df723;
case 0x6df726:c.instructions+=3;goto B6df726;
case 0x6df72b:c.instructions+=2;goto B6df72b;
case 0x6df72f:c.instructions+=1;goto B6df72f;
case 0x6df730:goto L6df730;
case 0x6df734:c.instructions+=26;goto B6df734;
case 0x6df73b:c.instructions+=25;goto B6df73b;
case 0x6df73d:c.instructions+=24;goto B6df73d;
case 0x6df740:c.instructions+=23;goto B6df740;
case 0x6df743:c.instructions+=22;goto B6df743;
case 0x6df745:c.instructions+=21;goto B6df745;
case 0x6df748:c.instructions+=20;goto B6df748;
case 0x6df74b:c.instructions+=19;goto B6df74b;
case 0x6df74e:c.instructions+=18;goto B6df74e;
case 0x6df751:c.instructions+=17;goto B6df751;
case 0x6df754:c.instructions+=16;goto B6df754;
case 0x6df757:c.instructions+=15;goto B6df757;
case 0x6df75a:c.instructions+=14;goto B6df75a;
case 0x6df760:c.instructions+=13;goto B6df760;
case 0x6df762:c.instructions+=12;goto B6df762;
case 0x6df764:c.instructions+=11;goto B6df764;
case 0x6df765:c.instructions+=10;goto B6df765;
case 0x6df768:c.instructions+=9;goto B6df768;
case 0x6df769:c.instructions+=8;goto B6df769;
case 0x6df76b:c.instructions+=7;goto B6df76b;
case 0x6df76e:c.instructions+=6;goto B6df76e;
case 0x6df76f:c.instructions+=5;goto B6df76f;
case 0x6df771:c.instructions+=4;goto B6df771;
case 0x6df773:c.instructions+=3;goto B6df773;
case 0x6df776:c.instructions+=2;goto B6df776;
case 0x6df778:c.instructions+=1;goto B6df778;
case 0x6df77e:goto L6df77e;
case 0x6df782:c.instructions+=8;goto B6df782;
case 0x6df786:c.instructions+=7;goto B6df786;
case 0x6df787:c.instructions+=6;goto B6df787;
case 0x6df78a:c.instructions+=5;goto B6df78a;
case 0x6df78d:c.instructions+=4;goto B6df78d;
case 0x6df790:c.instructions+=3;goto B6df790;
case 0x6df792:c.instructions+=2;goto B6df792;
case 0x6df796:c.instructions+=1;goto B6df796;
case 0x6df798:goto L6df798;
case 0x6df799:c.instructions+=1;goto B6df799;
case 0x6df79a:goto L6df79a;
case 0x6df79b:c.instructions+=3;goto B6df79b;
case 0x6df79c:c.instructions+=2;goto B6df79c;
case 0x6df79f:c.instructions+=1;goto B6df79f;
case 0x6df7a0:goto L6df7a0;
case 0x6df7a6:c.instructions+=10;goto B6df7a6;
case 0x6df7a9:c.instructions+=9;goto B6df7a9;
case 0x6df7ae:c.instructions+=8;goto B6df7ae;
case 0x6df7b0:c.instructions+=7;goto B6df7b0;
case 0x6df7b1:c.instructions+=6;goto B6df7b1;
case 0x6df7b7:c.instructions+=5;goto B6df7b7;
case 0x6df7bb:c.instructions+=4;goto B6df7bb;
case 0x6df7bc:c.instructions+=3;goto B6df7bc;
case 0x6df7c1:c.instructions+=2;goto B6df7c1;
case 0x6df7c2:c.instructions+=1;goto B6df7c2;
case 0x6df7c8:goto L6df7c8;
case 0x6df7cf:c.instructions+=2;goto B6df7cf;
case 0x6df7d0:c.instructions+=1;goto B6df7d0;
case 0x6df7e0:goto L6df7e0;
case 0x6df7e6:c.instructions+=10;goto B6df7e6;
case 0x6df7e9:c.instructions+=9;goto B6df7e9;
case 0x6df7ee:c.instructions+=8;goto B6df7ee;
case 0x6df7f0:c.instructions+=7;goto B6df7f0;
case 0x6df7f1:c.instructions+=6;goto B6df7f1;
case 0x6df7f7:c.instructions+=5;goto B6df7f7;
case 0x6df7fb:c.instructions+=4;goto B6df7fb;
case 0x6df7fc:c.instructions+=3;goto B6df7fc;
case 0x6df7fe:c.instructions+=2;goto B6df7fe;
case 0x6df7ff:c.instructions+=1;goto B6df7ff;
case 0x6df805:goto L6df805;
case 0x6df80c:c.instructions+=2;goto B6df80c;
case 0x6df80d:c.instructions+=1;goto B6df80d;
case 0x6df810:goto L6df810;
case 0x6df816:c.instructions+=10;goto B6df816;
case 0x6df819:c.instructions+=9;goto B6df819;
case 0x6df81e:c.instructions+=8;goto B6df81e;
case 0x6df820:c.instructions+=7;goto B6df820;
case 0x6df821:c.instructions+=6;goto B6df821;
case 0x6df827:c.instructions+=5;goto B6df827;
case 0x6df82b:c.instructions+=4;goto B6df82b;
case 0x6df82c:c.instructions+=3;goto B6df82c;
case 0x6df82e:c.instructions+=2;goto B6df82e;
case 0x6df82f:c.instructions+=1;goto B6df82f;
case 0x6df835:goto L6df835;
case 0x6df836:c.instructions+=1;goto B6df836;
case 0x6df840:goto L6df840;
case 0x6df846:c.instructions+=10;goto B6df846;
case 0x6df849:c.instructions+=9;goto B6df849;
case 0x6df84e:c.instructions+=8;goto B6df84e;
case 0x6df850:c.instructions+=7;goto B6df850;
case 0x6df851:c.instructions+=6;goto B6df851;
case 0x6df857:c.instructions+=5;goto B6df857;
case 0x6df85b:c.instructions+=4;goto B6df85b;
case 0x6df85c:c.instructions+=3;goto B6df85c;
case 0x6df85e:c.instructions+=2;goto B6df85e;
case 0x6df85f:c.instructions+=1;goto B6df85f;
case 0x6df865:goto L6df865;
case 0x6df866:c.instructions+=1;goto B6df866;
case 0x6df870:goto L6df870;
case 0x6df876:c.instructions+=10;goto B6df876;
case 0x6df879:c.instructions+=9;goto B6df879;
case 0x6df87e:c.instructions+=8;goto B6df87e;
case 0x6df880:c.instructions+=7;goto B6df880;
case 0x6df881:c.instructions+=6;goto B6df881;
case 0x6df887:c.instructions+=5;goto B6df887;
case 0x6df88b:c.instructions+=4;goto B6df88b;
case 0x6df88c:c.instructions+=3;goto B6df88c;
case 0x6df88e:c.instructions+=2;goto B6df88e;
case 0x6df88f:c.instructions+=1;goto B6df88f;
case 0x6df895:goto L6df895;
case 0x6df896:c.instructions+=1;goto B6df896;
case 0x6df8a0:goto L6df8a0;
case 0x6df8a6:c.instructions+=10;goto B6df8a6;
case 0x6df8a9:c.instructions+=9;goto B6df8a9;
case 0x6df8ae:c.instructions+=8;goto B6df8ae;
case 0x6df8b0:c.instructions+=7;goto B6df8b0;
case 0x6df8b1:c.instructions+=6;goto B6df8b1;
case 0x6df8b7:c.instructions+=5;goto B6df8b7;
case 0x6df8bb:c.instructions+=4;goto B6df8bb;
case 0x6df8bc:c.instructions+=3;goto B6df8bc;
case 0x6df8be:c.instructions+=2;goto B6df8be;
case 0x6df8bf:c.instructions+=1;goto B6df8bf;
case 0x6df8c5:goto L6df8c5;
case 0x6df8c6:c.instructions+=1;goto B6df8c6;
case 0x6df8d0:goto L6df8d0;
case 0x6df8d6:c.instructions+=10;goto B6df8d6;
case 0x6df8d9:c.instructions+=9;goto B6df8d9;
case 0x6df8de:c.instructions+=8;goto B6df8de;
case 0x6df8e0:c.instructions+=7;goto B6df8e0;
case 0x6df8e1:c.instructions+=6;goto B6df8e1;
case 0x6df8e7:c.instructions+=5;goto B6df8e7;
case 0x6df8eb:c.instructions+=4;goto B6df8eb;
case 0x6df8ec:c.instructions+=3;goto B6df8ec;
case 0x6df8ee:c.instructions+=2;goto B6df8ee;
case 0x6df8ef:c.instructions+=1;goto B6df8ef;
case 0x6df8f5:goto L6df8f5;
case 0x6df8f6:c.instructions+=1;goto B6df8f6;
case 0x6df900:goto L6df900;
case 0x6df906:c.instructions+=10;goto B6df906;
case 0x6df909:c.instructions+=9;goto B6df909;
case 0x6df90e:c.instructions+=8;goto B6df90e;
case 0x6df910:c.instructions+=7;goto B6df910;
case 0x6df911:c.instructions+=6;goto B6df911;
case 0x6df917:c.instructions+=5;goto B6df917;
case 0x6df91b:c.instructions+=4;goto B6df91b;
case 0x6df91c:c.instructions+=3;goto B6df91c;
case 0x6df91e:c.instructions+=2;goto B6df91e;
case 0x6df91f:c.instructions+=1;goto B6df91f;
case 0x6df925:goto L6df925;
case 0x6df926:c.instructions+=1;goto B6df926;
case 0x6df930:goto L6df930;
case 0x6df936:c.instructions+=10;goto B6df936;
case 0x6df939:c.instructions+=9;goto B6df939;
case 0x6df93e:c.instructions+=8;goto B6df93e;
case 0x6df940:c.instructions+=7;goto B6df940;
case 0x6df941:c.instructions+=6;goto B6df941;
case 0x6df947:c.instructions+=5;goto B6df947;
case 0x6df94b:c.instructions+=4;goto B6df94b;
case 0x6df94c:c.instructions+=3;goto B6df94c;
case 0x6df94e:c.instructions+=2;goto B6df94e;
case 0x6df94f:c.instructions+=1;goto B6df94f;
case 0x6df955:goto L6df955;
case 0x6df956:c.instructions+=1;goto B6df956;
case 0x6df960:goto L6df960;
case 0x6df966:c.instructions+=10;goto B6df966;
case 0x6df969:c.instructions+=9;goto B6df969;
case 0x6df96e:c.instructions+=8;goto B6df96e;
case 0x6df970:c.instructions+=7;goto B6df970;
case 0x6df971:c.instructions+=6;goto B6df971;
case 0x6df977:c.instructions+=5;goto B6df977;
case 0x6df97b:c.instructions+=4;goto B6df97b;
case 0x6df97c:c.instructions+=3;goto B6df97c;
case 0x6df97e:c.instructions+=2;goto B6df97e;
case 0x6df97f:c.instructions+=1;goto B6df97f;
case 0x6df985:goto L6df985;
case 0x6df986:c.instructions+=1;goto B6df986;
case 0x6df990:goto L6df990;
case 0x6df996:c.instructions+=10;goto B6df996;
case 0x6df999:c.instructions+=9;goto B6df999;
case 0x6df99e:c.instructions+=8;goto B6df99e;
case 0x6df9a0:c.instructions+=7;goto B6df9a0;
case 0x6df9a1:c.instructions+=6;goto B6df9a1;
case 0x6df9a7:c.instructions+=5;goto B6df9a7;
case 0x6df9ab:c.instructions+=4;goto B6df9ab;
case 0x6df9ac:c.instructions+=3;goto B6df9ac;
case 0x6df9ae:c.instructions+=2;goto B6df9ae;
case 0x6df9af:c.instructions+=1;goto B6df9af;
case 0x6df9b5:goto L6df9b5;
case 0x6df9bc:c.instructions+=2;goto B6df9bc;
case 0x6df9bd:c.instructions+=1;goto B6df9bd;
case 0x6df9c0:goto L6df9c0;
case 0x6df9c6:c.instructions+=10;goto B6df9c6;
case 0x6df9c9:c.instructions+=9;goto B6df9c9;
case 0x6df9ce:c.instructions+=8;goto B6df9ce;
case 0x6df9d0:c.instructions+=7;goto B6df9d0;
case 0x6df9d1:c.instructions+=6;goto B6df9d1;
case 0x6df9d7:c.instructions+=5;goto B6df9d7;
case 0x6df9db:c.instructions+=4;goto B6df9db;
case 0x6df9dc:c.instructions+=3;goto B6df9dc;
case 0x6df9e1:c.instructions+=2;goto B6df9e1;
case 0x6df9e2:c.instructions+=1;goto B6df9e2;
case 0x6df9e8:goto L6df9e8;
case 0x6df9ed:c.instructions+=3;goto B6df9ed;
case 0x6df9ef:c.instructions+=2;goto B6df9ef;
case 0x6df9f0:c.instructions+=1;goto B6df9f0;
case 0x6df9f2:goto L6df9f2;
case 0x6df9f7:c.instructions+=5;goto B6df9f7;
case 0x6df9f9:c.instructions+=4;goto B6df9f9;
case 0x6df9fe:c.instructions+=3;goto B6df9fe;
case 0x6dfa00:c.instructions+=2;goto B6dfa00;
case 0x6dfa01:c.instructions+=1;goto B6dfa01;
case 0x6dfa07:goto L6dfa07;
case 0x6dfa0c:c.instructions+=5;goto B6dfa0c;
case 0x6dfa0e:c.instructions+=4;goto B6dfa0e;
case 0x6dfa13:c.instructions+=3;goto B6dfa13;
case 0x6dfa15:c.instructions+=2;goto B6dfa15;
case 0x6dfa16:c.instructions+=1;goto B6dfa16;
case 0x6dfa1c:goto L6dfa1c;
case 0x6dfa23:c.instructions+=1;goto B6dfa23;
case 0x6dfa30:goto L6dfa30;
case 0x6dfa31:c.instructions+=8;goto B6dfa31;
case 0x6dfa36:c.instructions+=7;goto B6dfa36;
case 0x6dfa37:c.instructions+=6;goto B6dfa37;
case 0x6dfa38:c.instructions+=5;goto B6dfa38;
case 0x6dfa39:c.instructions+=4;goto B6dfa39;
case 0x6dfa3d:c.instructions+=3;goto B6dfa3d;
case 0x6dfa3e:c.instructions+=2;goto B6dfa3e;
case 0x6dfa44:c.instructions+=1;goto B6dfa44;
case 0x6dfa49:goto L6dfa49;
case 0x6dfa4e:c.instructions+=7;goto B6dfa4e;
case 0x6dfa52:c.instructions+=6;goto B6dfa52;
case 0x6dfa54:c.instructions+=5;goto B6dfa54;
case 0x6dfa57:c.instructions+=4;goto B6dfa57;
case 0x6dfa59:c.instructions+=3;goto B6dfa59;
case 0x6dfa5b:c.instructions+=2;goto B6dfa5b;
case 0x6dfa60:c.instructions+=1;goto B6dfa60;
case 0x6dfa66:goto L6dfa66;
case 0x6dfa67:goto L6dfa67;
case 0x6dfa69:c.instructions+=2;goto B6dfa69;
case 0x6dfa6b:c.instructions+=1;goto B6dfa6b;
case 0x6dfa6d:goto L6dfa6d;
case 0x6dfa70:goto L6dfa70;
case 0x6dfa72:c.instructions+=3;goto B6dfa72;
case 0x6dfa75:c.instructions+=2;goto B6dfa75;
case 0x6dfa78:c.instructions+=1;goto B6dfa78;
case 0x6dfa7a:goto L6dfa7a;
case 0x6dfa80:c.instructions+=1;goto B6dfa80;
case 0x6dfa87:goto L6dfa87;
case 0x6dfa8d:c.instructions+=5;goto B6dfa8d;
case 0x6dfa90:c.instructions+=4;goto B6dfa90;
case 0x6dfa95:c.instructions+=3;goto B6dfa95;
case 0x6dfa97:c.instructions+=2;goto B6dfa97;
case 0x6dfa99:c.instructions+=1;goto B6dfa99;
case 0x6dfa9b:goto L6dfa9b;
case 0x6dfaa0:c.instructions+=4;goto B6dfaa0;
case 0x6dfaa6:c.instructions+=3;goto B6dfaa6;
case 0x6dfaa7:c.instructions+=2;goto B6dfaa7;
case 0x6dfaa8:c.instructions+=1;goto B6dfaa8;
case 0x6dfaad:goto L6dfaad;
case 0x6dfab3:c.instructions+=1;goto B6dfab3;
case 0x6dfab8:goto L6dfab8;
case 0x6dfabe:c.instructions+=5;goto B6dfabe;
case 0x6dfac4:c.instructions+=4;goto B6dfac4;
case 0x6dfac5:c.instructions+=3;goto B6dfac5;
case 0x6dfac6:c.instructions+=2;goto B6dfac6;
case 0x6dfac8:c.instructions+=1;goto B6dfac8;
case 0x6dfacd:goto L6dfacd;
case 0x6dfad2:c.instructions+=9;goto B6dfad2;
case 0x6dfad4:c.instructions+=8;goto B6dfad4;
case 0x6dfada:c.instructions+=7;goto B6dfada;
case 0x6dfadd:c.instructions+=6;goto B6dfadd;
case 0x6dfae0:c.instructions+=5;goto B6dfae0;
case 0x6dfae4:c.instructions+=4;goto B6dfae4;
case 0x6dfae5:c.instructions+=3;goto B6dfae5;
case 0x6dfae7:c.instructions+=2;goto B6dfae7;
case 0x6dfaec:c.instructions+=1;goto B6dfaec;
case 0x6dfaf2:goto L6dfaf2;
case 0x6dfaf3:goto L6dfaf3;
case 0x6dfaf9:c.instructions+=1;goto B6dfaf9;
case 0x6dfafe:goto L6dfafe;
case 0x6dfaff:c.instructions+=4;goto B6dfaff;
case 0x6dfb05:c.instructions+=3;goto B6dfb05;
case 0x6dfb06:c.instructions+=2;goto B6dfb06;
case 0x6dfb07:c.instructions+=1;goto B6dfb07;
case 0x6dfb10:goto L6dfb10;
case 0x6dfb11:c.instructions+=8;goto B6dfb11;
case 0x6dfb16:c.instructions+=7;goto B6dfb16;
case 0x6dfb17:c.instructions+=6;goto B6dfb17;
case 0x6dfb18:c.instructions+=5;goto B6dfb18;
case 0x6dfb19:c.instructions+=4;goto B6dfb19;
case 0x6dfb1d:c.instructions+=3;goto B6dfb1d;
case 0x6dfb1e:c.instructions+=2;goto B6dfb1e;
case 0x6dfb24:c.instructions+=1;goto B6dfb24;
case 0x6dfb29:goto L6dfb29;
case 0x6dfb2e:c.instructions+=7;goto B6dfb2e;
case 0x6dfb32:c.instructions+=6;goto B6dfb32;
case 0x6dfb34:c.instructions+=5;goto B6dfb34;
case 0x6dfb37:c.instructions+=4;goto B6dfb37;
case 0x6dfb39:c.instructions+=3;goto B6dfb39;
case 0x6dfb3b:c.instructions+=2;goto B6dfb3b;
case 0x6dfb40:c.instructions+=1;goto B6dfb40;
case 0x6dfb46:goto L6dfb46;
case 0x6dfb47:goto L6dfb47;
case 0x6dfb49:c.instructions+=2;goto B6dfb49;
case 0x6dfb4b:c.instructions+=1;goto B6dfb4b;
case 0x6dfb4d:goto L6dfb4d;
case 0x6dfb50:goto L6dfb50;
case 0x6dfb52:c.instructions+=3;goto B6dfb52;
case 0x6dfb55:c.instructions+=2;goto B6dfb55;
case 0x6dfb58:c.instructions+=1;goto B6dfb58;
case 0x6dfb5a:goto L6dfb5a;
case 0x6dfb60:c.instructions+=1;goto B6dfb60;
case 0x6dfb67:goto L6dfb67;
case 0x6dfb6d:c.instructions+=5;goto B6dfb6d;
case 0x6dfb70:c.instructions+=4;goto B6dfb70;
case 0x6dfb75:c.instructions+=3;goto B6dfb75;
case 0x6dfb77:c.instructions+=2;goto B6dfb77;
case 0x6dfb79:c.instructions+=1;goto B6dfb79;
case 0x6dfb7b:goto L6dfb7b;
case 0x6dfb80:c.instructions+=2;goto B6dfb80;
case 0x6dfb81:c.instructions+=1;goto B6dfb81;
case 0x6dfb86:goto L6dfb86;
case 0x6dfb8c:c.instructions+=5;goto B6dfb8c;
case 0x6dfb8f:c.instructions+=4;goto B6dfb8f;
case 0x6dfb90:c.instructions+=3;goto B6dfb90;
case 0x6dfb96:c.instructions+=2;goto B6dfb96;
case 0x6dfb97:c.instructions+=1;goto B6dfb97;
case 0x6dfb9c:goto L6dfb9c;
case 0x6dfba2:c.instructions+=1;goto B6dfba2;
case 0x6dfba7:goto L6dfba7;
case 0x6dfbac:goto L6dfbac;
case 0x6dfbb2:c.instructions+=8;goto B6dfbb2;
case 0x6dfbb7:c.instructions+=7;goto B6dfbb7;
case 0x6dfbbd:c.instructions+=6;goto B6dfbbd;
case 0x6dfbbe:c.instructions+=5;goto B6dfbbe;
case 0x6dfbbf:c.instructions+=4;goto B6dfbbf;
case 0x6dfbc1:c.instructions+=3;goto B6dfbc1;
case 0x6dfbc2:c.instructions+=2;goto B6dfbc2;
case 0x6dfbc4:c.instructions+=1;goto B6dfbc4;
case 0x6dfbc9:goto L6dfbc9;
case 0x6dfbce:c.instructions+=9;goto B6dfbce;
case 0x6dfbd0:c.instructions+=8;goto B6dfbd0;
case 0x6dfbd4:c.instructions+=7;goto B6dfbd4;
case 0x6dfbda:c.instructions+=6;goto B6dfbda;
case 0x6dfbdd:c.instructions+=5;goto B6dfbdd;
case 0x6dfbde:c.instructions+=4;goto B6dfbde;
case 0x6dfbe0:c.instructions+=3;goto B6dfbe0;
case 0x6dfbe3:c.instructions+=2;goto B6dfbe3;
case 0x6dfbe8:c.instructions+=1;goto B6dfbe8;
case 0x6dfbee:goto L6dfbee;
case 0x6dfbef:goto L6dfbef;
case 0x6dfbf5:c.instructions+=1;goto B6dfbf5;
case 0x6dfbfa:goto L6dfbfa;
case 0x6dfbfb:c.instructions+=4;goto B6dfbfb;
case 0x6dfc01:c.instructions+=3;goto B6dfc01;
case 0x6dfc02:c.instructions+=2;goto B6dfc02;
case 0x6dfc03:c.instructions+=1;goto B6dfc03;
case 0x6dfc10:goto L6dfc10;
case 0x6dfc11:c.instructions+=8;goto B6dfc11;
case 0x6dfc16:c.instructions+=7;goto B6dfc16;
case 0x6dfc17:c.instructions+=6;goto B6dfc17;
case 0x6dfc18:c.instructions+=5;goto B6dfc18;
case 0x6dfc19:c.instructions+=4;goto B6dfc19;
case 0x6dfc1d:c.instructions+=3;goto B6dfc1d;
case 0x6dfc1e:c.instructions+=2;goto B6dfc1e;
case 0x6dfc24:c.instructions+=1;goto B6dfc24;
case 0x6dfc29:goto L6dfc29;
case 0x6dfc2e:c.instructions+=7;goto B6dfc2e;
case 0x6dfc32:c.instructions+=6;goto B6dfc32;
case 0x6dfc34:c.instructions+=5;goto B6dfc34;
case 0x6dfc37:c.instructions+=4;goto B6dfc37;
case 0x6dfc39:c.instructions+=3;goto B6dfc39;
case 0x6dfc3b:c.instructions+=2;goto B6dfc3b;
case 0x6dfc40:c.instructions+=1;goto B6dfc40;
case 0x6dfc46:goto L6dfc46;
case 0x6dfc47:goto L6dfc47;
case 0x6dfc49:c.instructions+=2;goto B6dfc49;
case 0x6dfc4b:c.instructions+=1;goto B6dfc4b;
case 0x6dfc4d:goto L6dfc4d;
case 0x6dfc50:goto L6dfc50;
case 0x6dfc52:c.instructions+=3;goto B6dfc52;
case 0x6dfc55:c.instructions+=2;goto B6dfc55;
case 0x6dfc58:c.instructions+=1;goto B6dfc58;
case 0x6dfc5a:goto L6dfc5a;
case 0x6dfc60:c.instructions+=1;goto B6dfc60;
case 0x6dfc67:goto L6dfc67;
case 0x6dfc6d:c.instructions+=5;goto B6dfc6d;
case 0x6dfc70:c.instructions+=4;goto B6dfc70;
case 0x6dfc75:c.instructions+=3;goto B6dfc75;
case 0x6dfc77:c.instructions+=2;goto B6dfc77;
case 0x6dfc79:c.instructions+=1;goto B6dfc79;
case 0x6dfc7b:goto L6dfc7b;
case 0x6dfc80:c.instructions+=4;goto B6dfc80;
case 0x6dfc86:c.instructions+=3;goto B6dfc86;
case 0x6dfc87:c.instructions+=2;goto B6dfc87;
case 0x6dfc88:c.instructions+=1;goto B6dfc88;
case 0x6dfc8d:goto L6dfc8d;
case 0x6dfc93:c.instructions+=1;goto B6dfc93;
case 0x6dfc98:goto L6dfc98;
case 0x6dfc9e:c.instructions+=10;goto B6dfc9e;
case 0x6dfca5:c.instructions+=9;goto B6dfca5;
case 0x6dfcaa:c.instructions+=8;goto B6dfcaa;
case 0x6dfcac:c.instructions+=7;goto B6dfcac;
case 0x6dfcad:c.instructions+=6;goto B6dfcad;
case 0x6dfcb4:c.instructions+=5;goto B6dfcb4;
case 0x6dfcba:c.instructions+=4;goto B6dfcba;
case 0x6dfcbb:c.instructions+=3;goto B6dfcbb;
case 0x6dfcbc:c.instructions+=2;goto B6dfcbc;
case 0x6dfcbe:c.instructions+=1;goto B6dfcbe;
case 0x6dfcc3:goto L6dfcc3;
case 0x6dfcc8:c.instructions+=9;goto B6dfcc8;
case 0x6dfcca:c.instructions+=8;goto B6dfcca;
case 0x6dfcce:c.instructions+=7;goto B6dfcce;
case 0x6dfcd4:c.instructions+=6;goto B6dfcd4;
case 0x6dfcd7:c.instructions+=5;goto B6dfcd7;
case 0x6dfcd8:c.instructions+=4;goto B6dfcd8;
case 0x6dfcda:c.instructions+=3;goto B6dfcda;
case 0x6dfcdd:c.instructions+=2;goto B6dfcdd;
case 0x6dfce2:c.instructions+=1;goto B6dfce2;
case 0x6dfce8:goto L6dfce8;
case 0x6dfce9:goto L6dfce9;
case 0x6dfcef:c.instructions+=1;goto B6dfcef;
case 0x6dfcf4:goto L6dfcf4;
case 0x6dfcf5:c.instructions+=4;goto B6dfcf5;
case 0x6dfcfb:c.instructions+=3;goto B6dfcfb;
case 0x6dfcfc:c.instructions+=2;goto B6dfcfc;
case 0x6dfcfd:c.instructions+=1;goto B6dfcfd;
case 0x6dfd00:goto L6dfd00;
case 0x6dfd01:c.instructions+=8;goto B6dfd01;
case 0x6dfd06:c.instructions+=7;goto B6dfd06;
case 0x6dfd07:c.instructions+=6;goto B6dfd07;
case 0x6dfd08:c.instructions+=5;goto B6dfd08;
case 0x6dfd09:c.instructions+=4;goto B6dfd09;
case 0x6dfd0d:c.instructions+=3;goto B6dfd0d;
case 0x6dfd0e:c.instructions+=2;goto B6dfd0e;
case 0x6dfd14:c.instructions+=1;goto B6dfd14;
case 0x6dfd19:goto L6dfd19;
case 0x6dfd1e:c.instructions+=7;goto B6dfd1e;
case 0x6dfd22:c.instructions+=6;goto B6dfd22;
case 0x6dfd24:c.instructions+=5;goto B6dfd24;
case 0x6dfd27:c.instructions+=4;goto B6dfd27;
case 0x6dfd29:c.instructions+=3;goto B6dfd29;
case 0x6dfd2b:c.instructions+=2;goto B6dfd2b;
case 0x6dfd30:c.instructions+=1;goto B6dfd30;
case 0x6dfd36:goto L6dfd36;
case 0x6dfd37:goto L6dfd37;
case 0x6dfd39:c.instructions+=2;goto B6dfd39;
case 0x6dfd3b:c.instructions+=1;goto B6dfd3b;
case 0x6dfd3d:goto L6dfd3d;
case 0x6dfd40:goto L6dfd40;
case 0x6dfd42:c.instructions+=3;goto B6dfd42;
case 0x6dfd45:c.instructions+=2;goto B6dfd45;
case 0x6dfd48:c.instructions+=1;goto B6dfd48;
case 0x6dfd4a:goto L6dfd4a;
case 0x6dfd50:c.instructions+=1;goto B6dfd50;
case 0x6dfd57:goto L6dfd57;
case 0x6dfd5d:c.instructions+=5;goto B6dfd5d;
case 0x6dfd60:c.instructions+=4;goto B6dfd60;
case 0x6dfd65:c.instructions+=3;goto B6dfd65;
case 0x6dfd67:c.instructions+=2;goto B6dfd67;
case 0x6dfd69:c.instructions+=1;goto B6dfd69;
case 0x6dfd6b:goto L6dfd6b;
case 0x6dfd70:c.instructions+=4;goto B6dfd70;
case 0x6dfd76:c.instructions+=3;goto B6dfd76;
case 0x6dfd77:c.instructions+=2;goto B6dfd77;
case 0x6dfd78:c.instructions+=1;goto B6dfd78;
case 0x6dfd7d:goto L6dfd7d;
case 0x6dfd83:c.instructions+=1;goto B6dfd83;
case 0x6dfd88:goto L6dfd88;
case 0x6dfd8e:c.instructions+=2;goto B6dfd8e;
case 0x6dfd8f:c.instructions+=1;goto B6dfd8f;
case 0x6dfd94:goto L6dfd94;
case 0x6dfd99:goto L6dfd99;
case 0x6dfd9f:c.instructions+=13;goto B6dfd9f;
case 0x6dfda5:c.instructions+=12;goto B6dfda5;
case 0x6dfdac:c.instructions+=11;goto B6dfdac;
case 0x6dfdae:c.instructions+=10;goto B6dfdae;
case 0x6dfdb0:c.instructions+=9;goto B6dfdb0;
case 0x6dfdb1:c.instructions+=8;goto B6dfdb1;
case 0x6dfdb8:c.instructions+=7;goto B6dfdb8;
case 0x6dfdbe:c.instructions+=6;goto B6dfdbe;
case 0x6dfdbf:c.instructions+=5;goto B6dfdbf;
case 0x6dfdc0:c.instructions+=4;goto B6dfdc0;
case 0x6dfdc2:c.instructions+=3;goto B6dfdc2;
case 0x6dfdc3:c.instructions+=2;goto B6dfdc3;
case 0x6dfdc5:c.instructions+=1;goto B6dfdc5;
case 0x6dfdca:goto L6dfdca;
case 0x6dfdcf:c.instructions+=9;goto B6dfdcf;
case 0x6dfdd1:c.instructions+=8;goto B6dfdd1;
case 0x6dfdd7:c.instructions+=7;goto B6dfdd7;
case 0x6dfdda:c.instructions+=6;goto B6dfdda;
case 0x6dfddd:c.instructions+=5;goto B6dfddd;
case 0x6dfde1:c.instructions+=4;goto B6dfde1;
case 0x6dfde2:c.instructions+=3;goto B6dfde2;
case 0x6dfde4:c.instructions+=2;goto B6dfde4;
case 0x6dfde9:c.instructions+=1;goto B6dfde9;
case 0x6dfdef:goto L6dfdef;
case 0x6dfdf0:goto L6dfdf0;
case 0x6dfdf6:c.instructions+=1;goto B6dfdf6;
case 0x6dfdfb:goto L6dfdfb;
case 0x6dfdfc:c.instructions+=4;goto B6dfdfc;
case 0x6dfe02:c.instructions+=3;goto B6dfe02;
case 0x6dfe03:c.instructions+=2;goto B6dfe03;
case 0x6dfe04:c.instructions+=1;goto B6dfe04;
case 0x6dfe10:goto L6dfe10;
case 0x6dfe15:c.instructions+=8;goto B6dfe15;
case 0x6dfe1b:c.instructions+=7;goto B6dfe1b;
case 0x6dfe1e:c.instructions+=6;goto B6dfe1e;
case 0x6dfe23:c.instructions+=5;goto B6dfe23;
case 0x6dfe24:c.instructions+=4;goto B6dfe24;
case 0x6dfe25:c.instructions+=3;goto B6dfe25;
case 0x6dfe26:c.instructions+=2;goto B6dfe26;
case 0x6dfe27:c.instructions+=1;goto B6dfe27;
case 0x6dfe29:goto L6dfe29;
case 0x6dfe2e:c.instructions+=2;goto B6dfe2e;
case 0x6dfe33:c.instructions+=1;goto B6dfe33;
case 0x6dfe35:goto L6dfe35;
case 0x6dfe37:c.instructions+=2;goto B6dfe37;
case 0x6dfe39:c.instructions+=1;goto B6dfe39;
case 0x6dfe40:goto L6dfe40;
case 0x6dfe45:c.instructions+=6;goto B6dfe45;
case 0x6dfe47:c.instructions+=5;goto B6dfe47;
case 0x6dfe48:c.instructions+=4;goto B6dfe48;
case 0x6dfe4a:c.instructions+=3;goto B6dfe4a;
case 0x6dfe4b:c.instructions+=2;goto B6dfe4b;
case 0x6dfe4c:c.instructions+=1;goto B6dfe4c;
case 0x6dfe52:goto L6dfe52;
case 0x6dfe53:c.instructions+=2;goto B6dfe53;
case 0x6dfe56:c.instructions+=1;goto B6dfe56;
case 0x6dfe58:goto L6dfe58;
case 0x6dfe5a:goto L6dfe5a;
case 0x6dfe5c:goto L6dfe5c;
case 0x6dfe61:c.instructions+=2;goto B6dfe61;
case 0x6dfe63:c.instructions+=1;goto B6dfe63;
case 0x6dfe65:goto L6dfe65;
case 0x6dfe6a:c.instructions+=6;goto B6dfe6a;
case 0x6dfe6b:c.instructions+=5;goto B6dfe6b;
case 0x6dfe70:c.instructions+=4;goto B6dfe70;
case 0x6dfe77:c.instructions+=3;goto B6dfe77;
case 0x6dfe79:c.instructions+=2;goto B6dfe79;
case 0x6dfe7a:c.instructions+=1;goto B6dfe7a;
case 0x6dfe80:goto L6dfe80;
case 0x6dfe85:c.instructions+=5;goto B6dfe85;
case 0x6dfe88:c.instructions+=4;goto B6dfe88;
case 0x6dfe8a:c.instructions+=3;goto B6dfe8a;
case 0x6dfe8f:c.instructions+=2;goto B6dfe8f;
case 0x6dfe91:c.instructions+=1;goto B6dfe91;
case 0x6dfe93:goto L6dfe93;
case 0x6dfe98:goto L6dfe98;
case 0x6dfe9a:c.instructions+=1;goto B6dfe9a;
case 0x6dfe9c:goto L6dfe9c;
case 0x6dfea2:c.instructions+=1;goto B6dfea2;
case 0x6dfea4:goto L6dfea4;
case 0x6dfea9:goto L6dfea9;
case 0x6dfeab:c.instructions+=1;goto B6dfeab;
case 0x6dfead:goto L6dfead;
case 0x6dfeaf:goto L6dfeaf;
case 0x6dfeb2:c.instructions+=2;goto B6dfeb2;
case 0x6dfeb3:c.instructions+=1;goto B6dfeb3;
case 0x6dfeb8:goto L6dfeb8;
case 0x6dfebb:c.instructions+=1;goto B6dfebb;
case 0x6dfec0:goto L6dfec0;
case 0x6dfec2:c.instructions+=1;goto B6dfec2;
case 0x6dfec7:goto L6dfec7;
case 0x6dfec9:c.instructions+=5;goto B6dfec9;
case 0x6dfecd:c.instructions+=4;goto B6dfecd;
case 0x6dfed0:c.instructions+=3;goto B6dfed0;
case 0x6dfed1:c.instructions+=2;goto B6dfed1;
case 0x6dfed3:c.instructions+=1;goto B6dfed3;
case 0x6dfed8:goto L6dfed8;
case 0x6dfedc:c.instructions+=2;goto B6dfedc;
case 0x6dfee2:c.instructions+=1;goto B6dfee2;
case 0x6dfee4:goto L6dfee4;
case 0x6dfeea:c.instructions+=7;goto B6dfeea;
case 0x6dfeef:c.instructions+=6;goto B6dfeef;
case 0x6dfef1:c.instructions+=5;goto B6dfef1;
case 0x6dfef4:c.instructions+=4;goto B6dfef4;
case 0x6dfef5:c.instructions+=3;goto B6dfef5;
case 0x6dfef7:c.instructions+=2;goto B6dfef7;
case 0x6dfef8:c.instructions+=1;goto B6dfef8;
case 0x6dfefe:goto L6dfefe;
case 0x6dff02:goto L6dff02;
case 0x6dff04:c.instructions+=1;goto B6dff04;
case 0x6dff0a:goto L6dff0a;
case 0x6dff10:c.instructions+=1;goto B6dff10;
case 0x6dff16:goto L6dff16;
case 0x6dff1c:c.instructions+=4;goto B6dff1c;
case 0x6dff20:c.instructions+=3;goto B6dff20;
case 0x6dff21:c.instructions+=2;goto B6dff21;
case 0x6dff23:c.instructions+=1;goto B6dff23;
case 0x6dff28:goto L6dff28;
case 0x6dff2c:c.instructions+=3;goto B6dff2c;
case 0x6dff2d:c.instructions+=2;goto B6dff2d;
case 0x6dff2f:c.instructions+=1;goto B6dff2f;
case 0x6dff34:goto L6dff34;
case 0x6dff38:c.instructions+=2;goto B6dff38;
case 0x6dff3e:c.instructions+=1;goto B6dff3e;
case 0x6dff40:goto L6dff40;
case 0x6dff46:c.instructions+=6;goto B6dff46;
case 0x6dff47:c.instructions+=5;goto B6dff47;
case 0x6dff4c:c.instructions+=4;goto B6dff4c;
case 0x6dff51:c.instructions+=3;goto B6dff51;
case 0x6dff53:c.instructions+=2;goto B6dff53;
case 0x6dff54:c.instructions+=1;goto B6dff54;
case 0x6dff5a:goto L6dff5a;
case 0x6dff5e:c.instructions+=2;goto B6dff5e;
case 0x6dff64:c.instructions+=1;goto B6dff64;
case 0x6dff66:goto L6dff66;
case 0x6dff6c:c.instructions+=6;goto B6dff6c;
case 0x6dff6d:c.instructions+=5;goto B6dff6d;
case 0x6dff6f:c.instructions+=4;goto B6dff6f;
case 0x6dff74:c.instructions+=3;goto B6dff74;
case 0x6dff76:c.instructions+=2;goto B6dff76;
case 0x6dff77:c.instructions+=1;goto B6dff77;
case 0x6dff7d:goto L6dff7d;
case 0x6dff87:c.instructions+=1;goto B6dff87;
case 0x6dff8d:goto L6dff8d;
case 0x6dff8f:c.instructions+=1;goto B6dff8f;
case 0x6dff94:goto L6dff94;
case 0x6dff96:c.instructions+=2;goto B6dff96;
case 0x6dff98:c.instructions+=1;goto B6dff98;
case 0x6dff9a:goto L6dff9a;
case 0x6dff9f:goto L6dff9f;
case 0x6dffa1:c.instructions+=1;goto B6dffa1;
case 0x6dffa6:goto L6dffa6;
case 0x6dffa8:c.instructions+=1;goto B6dffa8;
case 0x6dffad:goto L6dffad;
case 0x6dffaf:goto L6dffaf;
case 0x6dffb3:c.instructions+=3;goto B6dffb3;
case 0x6dffb4:c.instructions+=2;goto B6dffb4;
case 0x6dffb6:c.instructions+=1;goto B6dffb6;
case 0x6dffbb:goto L6dffbb;
case 0x6dffbf:c.instructions+=3;goto B6dffbf;
case 0x6dffc0:c.instructions+=2;goto B6dffc0;
case 0x6dffc2:c.instructions+=1;goto B6dffc2;
case 0x6dffc7:goto L6dffc7;
case 0x6dffcb:c.instructions+=3;goto B6dffcb;
case 0x6dffcc:c.instructions+=2;goto B6dffcc;
case 0x6dffce:c.instructions+=1;goto B6dffce;
case 0x6dffd3:goto L6dffd3;
case 0x6dffd7:c.instructions+=3;goto B6dffd7;
case 0x6dffd8:c.instructions+=2;goto B6dffd8;
case 0x6dffda:c.instructions+=1;goto B6dffda;
case 0x6dffdf:goto L6dffdf;
case 0x6dffe1:c.instructions+=2;goto B6dffe1;
case 0x6dffe6:c.instructions+=1;goto B6dffe6;
case 0x6dffea:goto L6dffea;
case 0x6dffec:goto L6dffec;
case 0x6dfff0:c.instructions+=3;goto B6dfff0;
case 0x6dfff1:c.instructions+=2;goto B6dfff1;
case 0x6dfff3:c.instructions+=1;goto B6dfff3;
case 0x6dfff8:goto L6dfff8;
case 0x6dfffc:c.instructions+=3;goto B6dfffc;
case 0x6dfffd:c.instructions+=2;goto B6dfffd;
case 0x6dffff:c.instructions+=1;goto B6dffff;
default:missing_instruction(c.pc);}
B6df000:L6df000:{c.instructions+=15;NFSU2_TR(0x6df000);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df003:{NFSU2_TR(0x6df003);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6df006:{NFSU2_TR(0x6df006);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df009:{NFSU2_TR(0x6df009);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6df00b:{NFSU2_TR(0x6df00b);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df00e:{NFSU2_TR(0x6df00e);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df011:{NFSU2_TR(0x6df011);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df014:{NFSU2_TR(0x6df014);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6df017:{NFSU2_TR(0x6df017);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df01a:{NFSU2_TR(0x6df01a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df01e:{NFSU2_TR(0x6df01e);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df021:{NFSU2_TR(0x6df021);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df022:{NFSU2_TR(0x6df022);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6df025:{NFSU2_TR(0x6df025);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df028:{NFSU2_TR(0x6df028);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df030:L6df030:{c.instructions+=10;NFSU2_TR(0x6df030);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df035:{NFSU2_TR(0x6df035);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df038:{NFSU2_TR(0x6df038);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6df03e:{NFSU2_TR(0x6df03e);
u8 U[47];
w4(U+39,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+4),4);
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B6df041:{NFSU2_TR(0x6df041);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df042:{NFSU2_TR(0x6df042);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df045:{NFSU2_TR(0x6df045);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df048:{NFSU2_TR(0x6df048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df049:{NFSU2_TR(0x6df049);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df04a:{NFSU2_TR(0x6df04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df04full));
TAIL_STATIC(0x6dbf90u,6db);
}
B6df04f:L6df04f:{c.instructions+=2;NFSU2_TR(0x6df04f);
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
B6df052:{NFSU2_TR(0x6df052);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df060:L6df060:{c.instructions+=11;NFSU2_TR(0x6df060);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df065:{NFSU2_TR(0x6df065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df068:{NFSU2_TR(0x6df068);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df06b:{NFSU2_TR(0x6df06b);
__builtin_memmove((R+8),gp(0x8a7b90),4);
}
B6df071:{NFSU2_TR(0x6df071);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df072:{NFSU2_TR(0x6df072);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6df076:{NFSU2_TR(0x6df076);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6df079:{NFSU2_TR(0x6df079);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df07a:{NFSU2_TR(0x6df07a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df07b:{NFSU2_TR(0x6df07b);
__builtin_memmove(gp(0x8a8a30),(R+0),4);
}
B6df080:{NFSU2_TR(0x6df080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df085ull));
TAIL_STATIC(0x6dbfb0u,6db);
}
B6df085:L6df085:{c.instructions+=3;NFSU2_TR(0x6df085);
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
B6df088:{NFSU2_TR(0x6df088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df089:{NFSU2_TR(0x6df089);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df090:L6df090:{c.instructions+=18;NFSU2_TR(0x6df090);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6df093:{NFSU2_TR(0x6df093);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df098:{NFSU2_TR(0x6df098);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df09b:{NFSU2_TR(0x6df09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df09e:{NFSU2_TR(0x6df09e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df09f:{NFSU2_TR(0x6df09f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6df0a2:{NFSU2_TR(0x6df0a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0a3:{NFSU2_TR(0x6df0a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6df0a6:{NFSU2_TR(0x6df0a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0a7:{NFSU2_TR(0x6df0a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df0ab:{NFSU2_TR(0x6df0ab);
__builtin_memmove((R+4),gp(0x8a7a18),4);
}
B6df0b1:{NFSU2_TR(0x6df0b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6df0b3:{NFSU2_TR(0x6df0b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0b4:{NFSU2_TR(0x6df0b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6df0b7:{NFSU2_TR(0x6df0b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df0bb:{NFSU2_TR(0x6df0bb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6df0be:{NFSU2_TR(0x6df0be);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6df0c0:{NFSU2_TR(0x6df0c0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6df128;}}
}
B6df0c2:L6df0c2:{c.instructions+=2;NFSU2_TR(0x6df0c2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6df0c6:{NFSU2_TR(0x6df0c6);
if(r1(R+518)){{goto L6df0da;}}
}
B6df0c8:L6df0c8:{c.instructions+=5;NFSU2_TR(0x6df0c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df0cc:{NFSU2_TR(0x6df0cc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0cd:{NFSU2_TR(0x6df0cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6df0d1:{NFSU2_TR(0x6df0d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0d2:{NFSU2_TR(0x6df0d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df0d7ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6df0d7:L6df0d7:{c.instructions+=1;NFSU2_TR(0x6df0d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6df0da:L6df0da:{c.instructions+=9;NFSU2_TR(0x6df0da);
__builtin_memmove((R+8),gp(0x8a8a28),4);
}
B6df0e0:{NFSU2_TR(0x6df0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6df0e7:{NFSU2_TR(0x6df0e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0e8:{NFSU2_TR(0x6df0e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0e9:{NFSU2_TR(0x6df0e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0ea:{NFSU2_TR(0x6df0ea);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0ef:{NFSU2_TR(0x6df0ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0f0:{NFSU2_TR(0x6df0f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df0f1:{NFSU2_TR(0x6df0f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df0f6ull));
TAIL_STATIC(0x6dc720u,6dc);
}
B6df0f6:L6df0f6:{c.instructions+=3;NFSU2_TR(0x6df0f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6df0f9:{NFSU2_TR(0x6df0f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df0fd:{NFSU2_TR(0x6df0fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df102ull));
TAIL_STATIC(0x6dc2a0u,6dc);
}
B6df102:L6df102:{c.instructions+=9;NFSU2_TR(0x6df102);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df107:{NFSU2_TR(0x6df107);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df10b:{NFSU2_TR(0x6df10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df10e:{NFSU2_TR(0x6df10e);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6df114:{NFSU2_TR(0x6df114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6df116:{NFSU2_TR(0x6df116);
__builtin_memmove((R+4),gp(0x8a7a10),4);
}
B6df11c:{NFSU2_TR(0x6df11c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6df11f:{NFSU2_TR(0x6df11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df122:{NFSU2_TR(0x6df122);
__builtin_memmove((R+4),gp(0x8a7a18),4);
}
B6df128:L6df128:{c.instructions+=3;NFSU2_TR(0x6df128);
__builtin_memmove((R+0),gp(0x8a7a20),4);
}
B6df12d:{NFSU2_TR(0x6df12d);
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
B6df12f:{NFSU2_TR(0x6df12f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6df141;}}
}
B6df131:L6df131:{c.instructions+=6;NFSU2_TR(0x6df131);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df134:{NFSU2_TR(0x6df134);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df138:{NFSU2_TR(0x6df138);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df13a:{NFSU2_TR(0x6df13a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df13b:{NFSU2_TR(0x6df13b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df13c:{NFSU2_TR(0x6df13c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df141ull));
TAIL_STATIC(0x6dcdc0u,6dc);
}
B6df141:L6df141:{c.instructions+=5;NFSU2_TR(0x6df141);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df145:{NFSU2_TR(0x6df145);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df149:{NFSU2_TR(0x6df149);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df14a:{NFSU2_TR(0x6df14a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df14b:{NFSU2_TR(0x6df14b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df150ull));
TAIL_STATIC(0x6dbfb0u,6db);
}
B6df150:L6df150:{c.instructions+=7;NFSU2_TR(0x6df150);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6df153:{NFSU2_TR(0x6df153);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df154:{NFSU2_TR(0x6df154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df155:{NFSU2_TR(0x6df155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6df156:{NFSU2_TR(0x6df156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6df157:{NFSU2_TR(0x6df157);
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
B6df15a:{NFSU2_TR(0x6df15a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df160:L6df160:{c.instructions+=13;NFSU2_TR(0x6df160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df161:{NFSU2_TR(0x6df161);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df166:{NFSU2_TR(0x6df166);
__builtin_memmove((R+4),gp(0x8a7a18),4);
}
B6df16c:{NFSU2_TR(0x6df16c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df16d:{NFSU2_TR(0x6df16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6df170:{NFSU2_TR(0x6df170);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+24,u32(r8(U+20)));
}
B6df173:{NFSU2_TR(0x6df173);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df174:{NFSU2_TR(0x6df174);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6df177:{NFSU2_TR(0x6df177);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df17a:{NFSU2_TR(0x6df17a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df17e:{NFSU2_TR(0x6df17e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df181:{NFSU2_TR(0x6df181);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df184:{NFSU2_TR(0x6df184);
if(r1(R+518)){{goto L6df19d;}}
}
B6df186:L6df186:{c.instructions+=2;NFSU2_TR(0x6df186);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6df189:{NFSU2_TR(0x6df189);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6df1d3;}}
}
B6df18b:L6df18b:{c.instructions+=2;NFSU2_TR(0x6df18b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df18e:{NFSU2_TR(0x6df18e);
if(r1(R+518)){{goto L6df19d;}}
}
B6df190:L6df190:{c.instructions+=3;NFSU2_TR(0x6df190);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6df194:{NFSU2_TR(0x6df194);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df195:{NFSU2_TR(0x6df195);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df19aull));
TAIL_STATIC(0x6dd070u,6dd);
}
B6df19a:L6df19a:{c.instructions+=1;NFSU2_TR(0x6df19a);
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
B6df19d:L6df19d:{c.instructions+=6;NFSU2_TR(0x6df19d);
__builtin_memmove((R+4),gp(0x8a8a28),4);
}
B6df1a3:{NFSU2_TR(0x6df1a3);
u8 U[4];
w4(U+0,u32(0x208ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df1a8:{NFSU2_TR(0x6df1a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df1a9:{NFSU2_TR(0x6df1a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6df1b0:{NFSU2_TR(0x6df1b0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df1b1:{NFSU2_TR(0x6df1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df1b6ull));
TAIL_STATIC(0x6dce10u,6dc);
}
B6df1b6:L6df1b6:{c.instructions+=3;NFSU2_TR(0x6df1b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6df1b9:{NFSU2_TR(0x6df1b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df1bd:{NFSU2_TR(0x6df1bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df1c2ull));
TAIL_STATIC(0x6dc230u,6dc);
}
B6df1c2:L6df1c2:{c.instructions+=4;NFSU2_TR(0x6df1c2);
__builtin_memmove((R+4),gp(0x8a7a10),4);
}
B6df1c8:{NFSU2_TR(0x6df1c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df1cc:{NFSU2_TR(0x6df1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df1cf:{NFSU2_TR(0x6df1cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df1d3:L6df1d3:{c.instructions+=3;NFSU2_TR(0x6df1d3);
__builtin_memmove((R+0),gp(0x8a7a20),4);
}
B6df1d8:{NFSU2_TR(0x6df1d8);
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
B6df1da:{NFSU2_TR(0x6df1da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6df1e7;}}
}
B6df1dc:L6df1dc:{c.instructions+=3;NFSU2_TR(0x6df1dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df1dd:{NFSU2_TR(0x6df1dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df1de:{NFSU2_TR(0x6df1de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df1e3ull));
TAIL_STATIC(0x6dd020u,6dd);
}
B6df1e3:L6df1e3:{c.instructions+=1;NFSU2_TR(0x6df1e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df1e7:L6df1e7:{c.instructions+=2;NFSU2_TR(0x6df1e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df1e8:{NFSU2_TR(0x6df1e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df1edull));
TAIL_STATIC(0x6dbff0u,6db);
}
B6df1ed:L6df1ed:{c.instructions+=5;NFSU2_TR(0x6df1ed);
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
B6df1f0:{NFSU2_TR(0x6df1f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df1f1:{NFSU2_TR(0x6df1f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df1f2:{NFSU2_TR(0x6df1f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df1f3:{NFSU2_TR(0x6df1f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df200:L6df200:{c.instructions+=4;NFSU2_TR(0x6df200);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df205:{NFSU2_TR(0x6df205);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df208:{NFSU2_TR(0x6df208);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df209:{NFSU2_TR(0x6df209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df20eull));
TAIL_STATIC(0x6dbff0u,6db);
}
B6df20e:L6df20e:{c.instructions+=2;NFSU2_TR(0x6df20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df20f:{NFSU2_TR(0x6df20f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df210:L6df210:{c.instructions+=8;NFSU2_TR(0x6df210);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df215:{NFSU2_TR(0x6df215);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df218:{NFSU2_TR(0x6df218);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(m4(0x8a7b90)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6df21f:{NFSU2_TR(0x6df21f);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6df225:{NFSU2_TR(0x6df225);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df228:{NFSU2_TR(0x6df228);
u8 U[14];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6df22b:{NFSU2_TR(0x6df22b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a89e0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6df232:{NFSU2_TR(0x6df232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df240:L6df240:{c.instructions+=5;NFSU2_TR(0x6df240);
__builtin_memmove((R+0),gp(0x8a7a18),4);
}
B6df245:{NFSU2_TR(0x6df245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df248:{NFSU2_TR(0x6df248);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df249:{NFSU2_TR(0x6df249);
u8 U[4];
w4(U+0,u32(0x8a8a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df24e:{NFSU2_TR(0x6df24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df253ull));
TAIL_STATIC(0x63d12cu,63d);
}
B6df253:L6df253:{c.instructions+=6;NFSU2_TR(0x6df253);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df259:{NFSU2_TR(0x6df259);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df25c:{NFSU2_TR(0x6df25c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df25e:{NFSU2_TR(0x6df25e);
u8 U[4];
w4(U+0,u32(0x8a8a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df263:{NFSU2_TR(0x6df263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df264:{NFSU2_TR(0x6df264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df269ull));
TAIL_STATIC(0x6dbf90u,6db);
}
B6df269:L6df269:{c.instructions+=2;NFSU2_TR(0x6df269);
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
B6df26c:{NFSU2_TR(0x6df26c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df270:L6df270:{c.instructions+=8;NFSU2_TR(0x6df270);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df271:{NFSU2_TR(0x6df271);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6df276:{NFSU2_TR(0x6df276);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df277:{NFSU2_TR(0x6df277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df278:{NFSU2_TR(0x6df278);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6df27c:{NFSU2_TR(0x6df27c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df27d:{NFSU2_TR(0x6df27d);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df283:{NFSU2_TR(0x6df283);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df288ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6df288:L6df288:{c.instructions+=4;NFSU2_TR(0x6df288);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df28c:{NFSU2_TR(0x6df28c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6df28e:{NFSU2_TR(0x6df28e);
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
B6df290:{NFSU2_TR(0x6df290);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6df2d0;}}
}
B6df292:L6df292:{c.instructions+=5;NFSU2_TR(0x6df292);
__builtin_memmove((R+8),gp(0x80f0e8),4);
}
B6df298:{NFSU2_TR(0x6df298);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df29e:{NFSU2_TR(0x6df29e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df29f:{NFSU2_TR(0x6df29f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2a0:{NFSU2_TR(0x6df2a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df2a5ull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6df2a5:L6df2a5:{c.instructions+=2;NFSU2_TR(0x6df2a5);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df2ab:{NFSU2_TR(0x6df2ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df2b0ull));
TAIL_STATIC(0x6db380u,6db);
}
B6df2b0:L6df2b0:{c.instructions+=6;NFSU2_TR(0x6df2b0);
__builtin_memmove((R+0),gp(0x8a7a1c),4);
}
B6df2b5:{NFSU2_TR(0x6df2b5);
__builtin_memmove((R+4),gp(0x8a7a24),4);
}
B6df2bb:{NFSU2_TR(0x6df2bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2bc:{NFSU2_TR(0x6df2bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2bd:{NFSU2_TR(0x6df2bd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2bf:{NFSU2_TR(0x6df2bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df2c4ull));
TAIL_STATIC(0x6dc0e0u,6dc);
}
B6df2c4:L6df2c4:{c.instructions+=5;NFSU2_TR(0x6df2c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df2c8:{NFSU2_TR(0x6df2c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6df2cb:{NFSU2_TR(0x6df2cb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6df2cc:{NFSU2_TR(0x6df2cc);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df2ce:{NFSU2_TR(0x6df2ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df292u);}goto L6df292;}}
}
B6df2d0:L6df2d0:{c.instructions+=2;NFSU2_TR(0x6df2d0);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df2d6:{NFSU2_TR(0x6df2d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df2dbull));
TAIL_STATIC(0x4022c0u,402);
}
B6df2db:L6df2db:{c.instructions+=3;NFSU2_TR(0x6df2db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df2dc:{NFSU2_TR(0x6df2dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df2dd:{NFSU2_TR(0x6df2dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df2e0:L6df2e0:{c.instructions+=5;NFSU2_TR(0x6df2e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2e1:{NFSU2_TR(0x6df2e1);
__builtin_memmove((R+0),gp(0x8a8a30),4);
}
B6df2e6:{NFSU2_TR(0x6df2e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2e7:{NFSU2_TR(0x6df2e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2e8:{NFSU2_TR(0x6df2e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df2edull));
TAIL_STATIC(0x6dc000u,6dc);
}
B6df2ed:L6df2ed:{c.instructions+=7;NFSU2_TR(0x6df2ed);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df2f3:{NFSU2_TR(0x6df2f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6df2f6:{NFSU2_TR(0x6df2f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df2f7:{NFSU2_TR(0x6df2f7);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df2fd:{NFSU2_TR(0x6df2fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6df301:{NFSU2_TR(0x6df301);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df302:{NFSU2_TR(0x6df302);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df307ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6df307:L6df307:{c.instructions+=4;NFSU2_TR(0x6df307);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df30b:{NFSU2_TR(0x6df30b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6df30d:{NFSU2_TR(0x6df30d);
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
B6df30f:{NFSU2_TR(0x6df30f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6df35c;}}
}
B6df311:L6df311:{c.instructions+=5;NFSU2_TR(0x6df311);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6df316:{NFSU2_TR(0x6df316);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df31c:{NFSU2_TR(0x6df31c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df31d:{NFSU2_TR(0x6df31d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df31e:{NFSU2_TR(0x6df31e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df323ull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6df323:L6df323:{c.instructions+=2;NFSU2_TR(0x6df323);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df329:{NFSU2_TR(0x6df329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df32eull));
TAIL_STATIC(0x6db380u,6db);
}
B6df32e:L6df32e:{c.instructions+=1;NFSU2_TR(0x6df32e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df333ull));
TAIL_STATIC(0x6dc010u,6dc);
}
B6df333:L6df333:{c.instructions+=9;NFSU2_TR(0x6df333);
__builtin_memmove((R+4),gp(0x8a7a1c),4);
}
B6df339:{NFSU2_TR(0x6df339);
__builtin_memmove((R+8),gp(0x8a7a28),4);
}
B6df33f:{NFSU2_TR(0x6df33f);
__builtin_memmove((R+0),gp(0x8a7a24),4);
}
B6df344:{NFSU2_TR(0x6df344);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df345:{NFSU2_TR(0x6df345);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df346:{NFSU2_TR(0x6df346);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df348:{NFSU2_TR(0x6df348);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df349:{NFSU2_TR(0x6df349);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df34b:{NFSU2_TR(0x6df34b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df350ull));
TAIL_STATIC(0x6dc130u,6dc);
}
B6df350:L6df350:{c.instructions+=5;NFSU2_TR(0x6df350);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df354:{NFSU2_TR(0x6df354);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6df357:{NFSU2_TR(0x6df357);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6df358:{NFSU2_TR(0x6df358);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df35a:{NFSU2_TR(0x6df35a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df311u);}goto L6df311;}}
}
B6df35c:L6df35c:{c.instructions+=2;NFSU2_TR(0x6df35c);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df362:{NFSU2_TR(0x6df362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df367ull));
TAIL_STATIC(0x4022c0u,402);
}
B6df367:L6df367:{c.instructions+=3;NFSU2_TR(0x6df367);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df368:{NFSU2_TR(0x6df368);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df369:{NFSU2_TR(0x6df369);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df370:L6df370:{c.instructions+=13;NFSU2_TR(0x6df370);
__builtin_memmove((R+0),gp(0x8a7a18),4);
}
B6df375:{NFSU2_TR(0x6df375);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df378:{NFSU2_TR(0x6df378);
__builtin_memmove(gp(0x8a88a0),(R+4),4);
}
B6df37e:{NFSU2_TR(0x6df37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6df380:{NFSU2_TR(0x6df380);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df385:{NFSU2_TR(0x6df385);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df388:{NFSU2_TR(0x6df388);
__builtin_memmove(gp(0x8a88a4),(R+8),4);
}
B6df38e:{NFSU2_TR(0x6df38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df391:{NFSU2_TR(0x6df391);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df394:{NFSU2_TR(0x6df394);
__builtin_memmove(gp(0x8a8a1c),(R+4),4);
}
B6df39a:{NFSU2_TR(0x6df39a);
__builtin_memmove(gp(0x8a8a20),(R+8),4);
}
B6df3a0:{NFSU2_TR(0x6df3a0);
__builtin_memmove(gp(0x8a8a24),(R+0),4);
}
B6df3a5:{NFSU2_TR(0x6df3a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df3b0:L6df3b0:{c.instructions+=4;NFSU2_TR(0x6df3b0);
__builtin_memmove((R+0),gp(0x8a7a18),4);
}
B6df3b5:{NFSU2_TR(0x6df3b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df3b8:{NFSU2_TR(0x6df3b8);
__builtin_memmove(gp(0x80f0e8),(R+4),4);
}
B6df3be:{NFSU2_TR(0x6df3be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df3c0:L6df3c0:{c.instructions+=8;NFSU2_TR(0x6df3c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3c1:{NFSU2_TR(0x6df3c1);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6df3c6:{NFSU2_TR(0x6df3c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3c7:{NFSU2_TR(0x6df3c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3c8:{NFSU2_TR(0x6df3c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6df3cc:{NFSU2_TR(0x6df3cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3cd:{NFSU2_TR(0x6df3cd);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df3d3:{NFSU2_TR(0x6df3d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df3d8ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6df3d8:L6df3d8:{c.instructions+=4;NFSU2_TR(0x6df3d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df3dc:{NFSU2_TR(0x6df3dc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6df3de:{NFSU2_TR(0x6df3de);
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
B6df3e0:{NFSU2_TR(0x6df3e0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6df436;}}
}
B6df3e2:L6df3e2:{c.instructions+=1;NFSU2_TR(0x6df3e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3e3:L6df3e3:{c.instructions+=5;NFSU2_TR(0x6df3e3);
__builtin_memmove((R+8),gp(0x80f0e8),4);
}
B6df3e9:{NFSU2_TR(0x6df3e9);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df3ef:{NFSU2_TR(0x6df3ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3f0:{NFSU2_TR(0x6df3f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df3f1:{NFSU2_TR(0x6df3f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df3f6ull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6df3f6:L6df3f6:{c.instructions+=2;NFSU2_TR(0x6df3f6);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df3fc:{NFSU2_TR(0x6df3fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df401ull));
TAIL_STATIC(0x6db380u,6db);
}
B6df401:L6df401:{c.instructions+=11;NFSU2_TR(0x6df401);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6df407:{NFSU2_TR(0x6df407);
__builtin_memmove((R+28),gp(0x8a7a24),4);
}
B6df40d:{NFSU2_TR(0x6df40d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6df414:{NFSU2_TR(0x6df414);
__builtin_memmove((R+0),(R+28),4);
}
B6df416:{NFSU2_TR(0x6df416);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6df418:{NFSU2_TR(0x6df418);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6df419:{NFSU2_TR(0x6df419);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(s64(s32(r4(U+8)))));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6df419);w8(U+52,u64(x_/y_));}
w4(R+0,u32(r8(U+52)));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6df419);w8(U+60,u64(x_%y_));}
w4(R+8,u32(r8(U+60)));
}
B6df420:{NFSU2_TR(0x6df420);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df421:{NFSU2_TR(0x6df421);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df422:{NFSU2_TR(0x6df422);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df424:{NFSU2_TR(0x6df424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df429ull));
TAIL_STATIC(0x6dc0e0u,6dc);
}
B6df429:L6df429:{c.instructions+=5;NFSU2_TR(0x6df429);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df42d:{NFSU2_TR(0x6df42d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6df430:{NFSU2_TR(0x6df430);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6df431:{NFSU2_TR(0x6df431);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df433:{NFSU2_TR(0x6df433);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df3e3u);}goto L6df3e3;}}
}
B6df435:L6df435:{c.instructions+=1;NFSU2_TR(0x6df435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df436:L6df436:{c.instructions+=2;NFSU2_TR(0x6df436);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df43c:{NFSU2_TR(0x6df43c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df441ull));
TAIL_STATIC(0x4022c0u,402);
}
B6df441:L6df441:{c.instructions+=3;NFSU2_TR(0x6df441);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df442:{NFSU2_TR(0x6df442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df443:{NFSU2_TR(0x6df443);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df450:L6df450:{c.instructions+=5;NFSU2_TR(0x6df450);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df451:{NFSU2_TR(0x6df451);
__builtin_memmove((R+0),gp(0x8a8a30),4);
}
B6df456:{NFSU2_TR(0x6df456);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df457:{NFSU2_TR(0x6df457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df458:{NFSU2_TR(0x6df458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df45dull));
TAIL_STATIC(0x6dc000u,6dc);
}
B6df45d:L6df45d:{c.instructions+=7;NFSU2_TR(0x6df45d);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df463:{NFSU2_TR(0x6df463);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6df466:{NFSU2_TR(0x6df466);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df467:{NFSU2_TR(0x6df467);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df46d:{NFSU2_TR(0x6df46d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6df471:{NFSU2_TR(0x6df471);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df472:{NFSU2_TR(0x6df472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df477ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6df477:L6df477:{c.instructions+=4;NFSU2_TR(0x6df477);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df47b:{NFSU2_TR(0x6df47b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6df47d:{NFSU2_TR(0x6df47d);
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
B6df47f:{NFSU2_TR(0x6df47f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6df4e2;}}
}
B6df481:L6df481:{c.instructions+=1;NFSU2_TR(0x6df481);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df482:L6df482:{c.instructions+=5;NFSU2_TR(0x6df482);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6df487:{NFSU2_TR(0x6df487);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df48d:{NFSU2_TR(0x6df48d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df48e:{NFSU2_TR(0x6df48e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df48f:{NFSU2_TR(0x6df48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df494ull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6df494:L6df494:{c.instructions+=2;NFSU2_TR(0x6df494);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df49a:{NFSU2_TR(0x6df49a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df49full));
TAIL_STATIC(0x6db380u,6db);
}
B6df49f:L6df49f:{c.instructions+=1;NFSU2_TR(0x6df49f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df4a4ull));
TAIL_STATIC(0x6dc010u,6dc);
}
B6df4a4:L6df4a4:{c.instructions+=14;NFSU2_TR(0x6df4a4);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6df4aa:{NFSU2_TR(0x6df4aa);
__builtin_memmove((R+28),gp(0x8a7a28),4);
}
B6df4b0:{NFSU2_TR(0x6df4b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6df4b7:{NFSU2_TR(0x6df4b7);
__builtin_memmove((R+0),(R+28),4);
}
B6df4b9:{NFSU2_TR(0x6df4b9);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6df4bb:{NFSU2_TR(0x6df4bb);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6df4bc:{NFSU2_TR(0x6df4bc);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(s64(s32(r4(U+8)))));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6df4bc);w8(U+52,u64(x_/y_));}
w4(R+0,u32(r8(U+52)));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6df4bc);w8(U+60,u64(x_%y_));}
w4(R+8,u32(r8(U+60)));
}
B6df4c3:{NFSU2_TR(0x6df4c3);
__builtin_memmove((R+4),gp(0x8a7a24),4);
}
B6df4c9:{NFSU2_TR(0x6df4c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4ca:{NFSU2_TR(0x6df4ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4cb:{NFSU2_TR(0x6df4cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4cd:{NFSU2_TR(0x6df4cd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4ce:{NFSU2_TR(0x6df4ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4d0:{NFSU2_TR(0x6df4d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df4d5ull));
TAIL_STATIC(0x6dc130u,6dc);
}
B6df4d5:L6df4d5:{c.instructions+=5;NFSU2_TR(0x6df4d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df4d9:{NFSU2_TR(0x6df4d9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6df4dc:{NFSU2_TR(0x6df4dc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6df4dd:{NFSU2_TR(0x6df4dd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df4df:{NFSU2_TR(0x6df4df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df482u);}goto L6df482;}}
}
B6df4e1:L6df4e1:{c.instructions+=1;NFSU2_TR(0x6df4e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df4e2:L6df4e2:{c.instructions+=2;NFSU2_TR(0x6df4e2);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df4e8:{NFSU2_TR(0x6df4e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df4edull));
TAIL_STATIC(0x4022c0u,402);
}
B6df4ed:L6df4ed:{c.instructions+=3;NFSU2_TR(0x6df4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df4ee:{NFSU2_TR(0x6df4ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df4ef:{NFSU2_TR(0x6df4ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df4f0:L6df4f0:{c.instructions+=5;NFSU2_TR(0x6df4f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4f1:{NFSU2_TR(0x6df4f1);
__builtin_memmove((R+0),gp(0x8a8a30),4);
}
B6df4f6:{NFSU2_TR(0x6df4f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4f7:{NFSU2_TR(0x6df4f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df4f8:{NFSU2_TR(0x6df4f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df4fdull));
TAIL_STATIC(0x6dc000u,6dc);
}
B6df4fd:L6df4fd:{c.instructions+=7;NFSU2_TR(0x6df4fd);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df503:{NFSU2_TR(0x6df503);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6df506:{NFSU2_TR(0x6df506);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df507:{NFSU2_TR(0x6df507);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df50d:{NFSU2_TR(0x6df50d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6df511:{NFSU2_TR(0x6df511);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df512:{NFSU2_TR(0x6df512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df517ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6df517:L6df517:{c.instructions+=4;NFSU2_TR(0x6df517);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df51b:{NFSU2_TR(0x6df51b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6df51d:{NFSU2_TR(0x6df51d);
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
B6df51f:{NFSU2_TR(0x6df51f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6df587;}}
}
B6df521:L6df521:{c.instructions+=1;NFSU2_TR(0x6df521);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df522:L6df522:{c.instructions+=5;NFSU2_TR(0x6df522);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6df527:{NFSU2_TR(0x6df527);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df52d:{NFSU2_TR(0x6df52d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df52e:{NFSU2_TR(0x6df52e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df52f:{NFSU2_TR(0x6df52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df534ull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6df534:L6df534:{c.instructions+=2;NFSU2_TR(0x6df534);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6df53a:{NFSU2_TR(0x6df53a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df53full));
TAIL_STATIC(0x6db380u,6db);
}
B6df53f:L6df53f:{c.instructions+=8;NFSU2_TR(0x6df53f);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6df545:{NFSU2_TR(0x6df545);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6df54c:{NFSU2_TR(0x6df54c);
__builtin_memmove((R+0),gp(0x8a7a28),4);
}
B6df551:{NFSU2_TR(0x6df551);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6df553:{NFSU2_TR(0x6df553);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6df554:{NFSU2_TR(0x6df554);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(s64(s32(r4(U+8)))));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6df554);w8(U+52,u64(x_/y_));}
w4(R+0,u32(r8(U+52)));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6df554);w8(U+60,u64(x_%y_));}
w4(R+8,u32(r8(U+60)));
}
B6df55b:{NFSU2_TR(0x6df55b);
__builtin_memmove((R+28),(R+0),4);
}
B6df55d:{NFSU2_TR(0x6df55d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df562ull));
TAIL_STATIC(0x6dc010u,6dc);
}
B6df562:L6df562:{c.instructions+=8;NFSU2_TR(0x6df562);
__builtin_memmove((R+4),gp(0x8a7a28),4);
}
B6df568:{NFSU2_TR(0x6df568);
__builtin_memmove((R+8),gp(0x8a7a24),4);
}
B6df56e:{NFSU2_TR(0x6df56e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df56f:{NFSU2_TR(0x6df56f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df570:{NFSU2_TR(0x6df570);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df572:{NFSU2_TR(0x6df572);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df573:{NFSU2_TR(0x6df573);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df575:{NFSU2_TR(0x6df575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df57aull));
TAIL_STATIC(0x6dc130u,6dc);
}
B6df57a:L6df57a:{c.instructions+=5;NFSU2_TR(0x6df57a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df57e:{NFSU2_TR(0x6df57e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6df581:{NFSU2_TR(0x6df581);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6df582:{NFSU2_TR(0x6df582);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df584:{NFSU2_TR(0x6df584);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df522u);}goto L6df522;}}
}
B6df586:L6df586:{c.instructions+=1;NFSU2_TR(0x6df586);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df587:L6df587:{c.instructions+=2;NFSU2_TR(0x6df587);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6df58d:{NFSU2_TR(0x6df58d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df592ull));
TAIL_STATIC(0x4022c0u,402);
}
B6df592:L6df592:{c.instructions+=3;NFSU2_TR(0x6df592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df593:{NFSU2_TR(0x6df593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df594:{NFSU2_TR(0x6df594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df5a0:L6df5a0:{c.instructions+=5;NFSU2_TR(0x6df5a0);
__builtin_memmove((R+0),gp(0x8a7a18),4);
}
B6df5a5:{NFSU2_TR(0x6df5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df5a8:{NFSU2_TR(0x6df5a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5a9:{NFSU2_TR(0x6df5a9);
u8 U[4];
w4(U+0,u32(0x8a8a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5ae:{NFSU2_TR(0x6df5ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df5b3ull));
TAIL_STATIC(0x63d12cu,63d);
}
B6df5b3:L6df5b3:{c.instructions+=6;NFSU2_TR(0x6df5b3);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df5b9:{NFSU2_TR(0x6df5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df5bc:{NFSU2_TR(0x6df5bc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5be:{NFSU2_TR(0x6df5be);
u8 U[4];
w4(U+0,u32(0x8a8a38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5c3:{NFSU2_TR(0x6df5c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5c4:{NFSU2_TR(0x6df5c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df5c9ull));
TAIL_STATIC(0x6dc0c0u,6dc);
}
B6df5c9:L6df5c9:{c.instructions+=2;NFSU2_TR(0x6df5c9);
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
B6df5cc:{NFSU2_TR(0x6df5cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df5d0:L6df5d0:{c.instructions+=10;NFSU2_TR(0x6df5d0);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df5d5:{NFSU2_TR(0x6df5d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df5d8:{NFSU2_TR(0x6df5d8);
__builtin_memmove((R+8),gp(0x8a7a18),4);
}
B6df5de:{NFSU2_TR(0x6df5de);
u8 U[47];
w4(U+39,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+4),4);
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B6df5e1:{NFSU2_TR(0x6df5e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5e2:{NFSU2_TR(0x6df5e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6df5e5:{NFSU2_TR(0x6df5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df5e8:{NFSU2_TR(0x6df5e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5e9:{NFSU2_TR(0x6df5e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df5ea:{NFSU2_TR(0x6df5ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df5efull));
TAIL_STATIC(0x6dc0c0u,6dc);
}
B6df5ef:L6df5ef:{c.instructions+=2;NFSU2_TR(0x6df5ef);
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
B6df5f2:{NFSU2_TR(0x6df5f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df600:L6df600:{c.instructions+=12;NFSU2_TR(0x6df600);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6df605:{NFSU2_TR(0x6df605);
__builtin_memmove((R+4),gp(0x8a7bdc),4);
}
B6df60b:{NFSU2_TR(0x6df60b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6df60e:{NFSU2_TR(0x6df60e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df60f:{NFSU2_TR(0x6df60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6df615:{NFSU2_TR(0x6df615);
__builtin_memmove((R+4),gp(0x8a7bc8),1);
}
B6df61b:{NFSU2_TR(0x6df61b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df61c:{NFSU2_TR(0x6df61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6df61f:{NFSU2_TR(0x6df61f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6df621:{NFSU2_TR(0x6df621);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B6df624:{NFSU2_TR(0x6df624);
u8 U[5];
__builtin_memmove((U+3),(R+4),1);
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
B6df626:{NFSU2_TR(0x6df626);
if(r1(R+518)){{goto L6df645;}}
}
B6df628:L6df628:{c.instructions+=8;NFSU2_TR(0x6df628);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6df62e:{NFSU2_TR(0x6df62e);
__builtin_memmove(gp(0x8a7bc8),(R+0),1);
}
B6df633:{NFSU2_TR(0x6df633);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6df635:{NFSU2_TR(0x6df635);
w4(R+0,u32(r1(R+0)));
}
B6df638:{NFSU2_TR(0x6df638);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df639:{NFSU2_TR(0x6df639);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df63e:{NFSU2_TR(0x6df63e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df63f:{NFSU2_TR(0x6df63f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df645ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df645:L6df645:{c.instructions+=2;NFSU2_TR(0x6df645);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6df647:{NFSU2_TR(0x6df647);
if(r1(R+518)){{goto L6df79a;}}
}
B6df64d:L6df64d:{c.instructions+=5;NFSU2_TR(0x6df64d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df64e:{NFSU2_TR(0x6df64e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df64f:{NFSU2_TR(0x6df64f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6df651:{NFSU2_TR(0x6df651);
w4(R+4,u32(0x4eull));
}
B6df656:{NFSU2_TR(0x6df656);
w4(R+28,u32(0x8a88a8ull));
}
B6df65b:L6df65b:{c.instructions+=1;NFSU2_TR(0x6df65b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6df65d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df65bu);}goto L6df65b;}
}
B6df65d:L6df65d:{c.instructions+=37;NFSU2_TR(0x6df65d);
__builtin_memmove((R+4),gp(0x8a7a10),4);
}
B6df663:{NFSU2_TR(0x6df663);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df666:{NFSU2_TR(0x6df666);
__builtin_memmove((R+0),gp(0x8a7a14),4);
}
B6df66b:{NFSU2_TR(0x6df66b);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B6df66f:{NFSU2_TR(0x6df66f);
{u32 ea_=u32(r4(R+20)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df672:{NFSU2_TR(0x6df672);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df678:{NFSU2_TR(0x6df678);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df67c:{NFSU2_TR(0x6df67c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df680:{NFSU2_TR(0x6df680);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6df684:{NFSU2_TR(0x6df684);
{u32 ea_=u32(r4(R+20)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df687:{NFSU2_TR(0x6df687);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df68d:{NFSU2_TR(0x6df68d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df691:{NFSU2_TR(0x6df691);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df695:{NFSU2_TR(0x6df695);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6df699:{NFSU2_TR(0x6df699);
{u32 ea_=u32(r4(R+20)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df69c:{NFSU2_TR(0x6df69c);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df6a2:{NFSU2_TR(0x6df6a2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df6a6:{NFSU2_TR(0x6df6a6);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df6aa:{NFSU2_TR(0x6df6aa);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6df6ae:{NFSU2_TR(0x6df6ae);
{u32 ea_=u32(r4(R+20)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df6b1:{NFSU2_TR(0x6df6b1);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6df6b7:{NFSU2_TR(0x6df6b7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df6bb:{NFSU2_TR(0x6df6bb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df6bf:{NFSU2_TR(0x6df6bf);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6df6c3:{NFSU2_TR(0x6df6c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df6c7:{NFSU2_TR(0x6df6c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df6cb:{NFSU2_TR(0x6df6cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6df6cf:{NFSU2_TR(0x6df6cf);
__builtin_memmove((R+4),gp(0x8a7bcc),4);
}
B6df6d5:{NFSU2_TR(0x6df6d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6df6d8:{NFSU2_TR(0x6df6d8);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6df6da:{NFSU2_TR(0x6df6da);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df6de:{NFSU2_TR(0x6df6de);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6df6e1:{NFSU2_TR(0x6df6e1);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+28))));
}
B6df6e3:{NFSU2_TR(0x6df6e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6df6e6:{NFSU2_TR(0x6df6e6);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B6df6e8:{NFSU2_TR(0x6df6e8);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6df6ea:{NFSU2_TR(0x6df6ea);
if(r1(R+518)){{goto L6df706;}}
}
B6df6ec:L6df6ec:{c.instructions+=7;NFSU2_TR(0x6df6ec);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6df6f2:{NFSU2_TR(0x6df6f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df6f3:{NFSU2_TR(0x6df6f3);
u8 U[4];
w4(U+0,u32(0x8bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df6f8:{NFSU2_TR(0x6df6f8);
__builtin_memmove(gp(0x8a7bcc),(R+0),4);
}
B6df6fd:{NFSU2_TR(0x6df6fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6df6ff:{NFSU2_TR(0x6df6ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df700:{NFSU2_TR(0x6df700);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df706ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df706:L6df706:{c.instructions+=3;NFSU2_TR(0x6df706);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6df709:{NFSU2_TR(0x6df709);
w4(R+0,u32(0x3ull));
}
B6df70e:{NFSU2_TR(0x6df70e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6df712;}}
}
B6df710:L6df710:{c.instructions+=1;NFSU2_TR(0x6df710);
__builtin_memmove((R+0),(R+12),4);
}
B6df712:L6df712:{c.instructions+=4;NFSU2_TR(0x6df712);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6df714:{NFSU2_TR(0x6df714);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6df716:{NFSU2_TR(0x6df716);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df71a:{NFSU2_TR(0x6df71a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6df798;}}
}
B6df720:L6df720:{c.instructions+=5;NFSU2_TR(0x6df720);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df723:{NFSU2_TR(0x6df723);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0x30ull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6df726:{NFSU2_TR(0x6df726);
w4(R+24,u32(0x8a88e8ull));
}
B6df72b:{NFSU2_TR(0x6df72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df72f:{NFSU2_TR(0x6df72f);
}
B6df730:L6df730:{c.instructions+=27;NFSU2_TR(0x6df730);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df734:{NFSU2_TR(0x6df734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6df73b:{NFSU2_TR(0x6df73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6df73d:{NFSU2_TR(0x6df73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6df740:{NFSU2_TR(0x6df740);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6df743:{NFSU2_TR(0x6df743);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6df745:{NFSU2_TR(0x6df745);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6df748:{NFSU2_TR(0x6df748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df74b:{NFSU2_TR(0x6df74b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6df74e:{NFSU2_TR(0x6df74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df751:{NFSU2_TR(0x6df751);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df754:{NFSU2_TR(0x6df754);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df757:{NFSU2_TR(0x6df757);
{u32 ea_=u32(r4(R+28)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df75a:{NFSU2_TR(0x6df75a);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6df760:{NFSU2_TR(0x6df760);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6df762:{NFSU2_TR(0x6df762);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df764:{NFSU2_TR(0x6df764);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df765:{NFSU2_TR(0x6df765);
{u32 ea_=u32(r4(R+28)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df768:{NFSU2_TR(0x6df768);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df769:{NFSU2_TR(0x6df769);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6df76b:{NFSU2_TR(0x6df76b);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df76e:{NFSU2_TR(0x6df76e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df76f:{NFSU2_TR(0x6df76f);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6df771:{NFSU2_TR(0x6df771);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6df773:{NFSU2_TR(0x6df773);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6df776:{NFSU2_TR(0x6df776);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6df778:{NFSU2_TR(0x6df778);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df77eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df77e:L6df77e:{c.instructions+=9;NFSU2_TR(0x6df77e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6df782:{NFSU2_TR(0x6df782);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6df786:{NFSU2_TR(0x6df786);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6df787:{NFSU2_TR(0x6df787);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6df78a:{NFSU2_TR(0x6df78a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6df78d:{NFSU2_TR(0x6df78d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x68ull))));
}
B6df790:{NFSU2_TR(0x6df790);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6df792:{NFSU2_TR(0x6df792);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6df796:{NFSU2_TR(0x6df796);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6df730u);}goto L6df730;}}
}
B6df798:L6df798:{c.instructions+=2;NFSU2_TR(0x6df798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6df799:{NFSU2_TR(0x6df799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6df79a:L6df79a:{c.instructions+=4;NFSU2_TR(0x6df79a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df79b:{NFSU2_TR(0x6df79b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6df79c:{NFSU2_TR(0x6df79c);
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
B6df79f:{NFSU2_TR(0x6df79f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df7a0:L6df7a0:{c.instructions+=11;NFSU2_TR(0x6df7a0);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df7a6:{NFSU2_TR(0x6df7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df7a9:{NFSU2_TR(0x6df7a9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df7ae:{NFSU2_TR(0x6df7ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df7b0:{NFSU2_TR(0x6df7b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7b1:{NFSU2_TR(0x6df7b1);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df7b7:{NFSU2_TR(0x6df7b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df7bb:{NFSU2_TR(0x6df7bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7bc:{NFSU2_TR(0x6df7bc);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7c1:{NFSU2_TR(0x6df7c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7c2:{NFSU2_TR(0x6df7c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df7c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df7c8:L6df7c8:{c.instructions+=3;NFSU2_TR(0x6df7c8);
s1(0x8a8a2c,u8(0x0ull));
}
B6df7cf:{NFSU2_TR(0x6df7cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df7d0:{NFSU2_TR(0x6df7d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df7e0:L6df7e0:{c.instructions+=11;NFSU2_TR(0x6df7e0);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df7e6:{NFSU2_TR(0x6df7e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df7e9:{NFSU2_TR(0x6df7e9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df7ee:{NFSU2_TR(0x6df7ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df7f0:{NFSU2_TR(0x6df7f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7f1:{NFSU2_TR(0x6df7f1);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df7f7:{NFSU2_TR(0x6df7f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df7fb:{NFSU2_TR(0x6df7fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7fc:{NFSU2_TR(0x6df7fc);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7fe:{NFSU2_TR(0x6df7fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df7ff:{NFSU2_TR(0x6df7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df805ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df805:L6df805:{c.instructions+=3;NFSU2_TR(0x6df805);
s1(0x8a8a2c,u8(0x0ull));
}
B6df80c:{NFSU2_TR(0x6df80c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df80d:{NFSU2_TR(0x6df80d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df810:L6df810:{c.instructions+=11;NFSU2_TR(0x6df810);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df816:{NFSU2_TR(0x6df816);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df819:{NFSU2_TR(0x6df819);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df81e:{NFSU2_TR(0x6df81e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df820:{NFSU2_TR(0x6df820);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df821:{NFSU2_TR(0x6df821);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df827:{NFSU2_TR(0x6df827);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df82b:{NFSU2_TR(0x6df82b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df82c:{NFSU2_TR(0x6df82c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df82e:{NFSU2_TR(0x6df82e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df82f:{NFSU2_TR(0x6df82f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df835ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df835:L6df835:{c.instructions+=2;NFSU2_TR(0x6df835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df836:{NFSU2_TR(0x6df836);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df840:L6df840:{c.instructions+=11;NFSU2_TR(0x6df840);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df846:{NFSU2_TR(0x6df846);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df849:{NFSU2_TR(0x6df849);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df84e:{NFSU2_TR(0x6df84e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df850:{NFSU2_TR(0x6df850);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df851:{NFSU2_TR(0x6df851);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df857:{NFSU2_TR(0x6df857);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df85b:{NFSU2_TR(0x6df85b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df85c:{NFSU2_TR(0x6df85c);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df85e:{NFSU2_TR(0x6df85e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df85f:{NFSU2_TR(0x6df85f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df865ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df865:L6df865:{c.instructions+=2;NFSU2_TR(0x6df865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df866:{NFSU2_TR(0x6df866);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df870:L6df870:{c.instructions+=11;NFSU2_TR(0x6df870);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df876:{NFSU2_TR(0x6df876);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df879:{NFSU2_TR(0x6df879);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df87e:{NFSU2_TR(0x6df87e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df880:{NFSU2_TR(0x6df880);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df881:{NFSU2_TR(0x6df881);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df887:{NFSU2_TR(0x6df887);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df88b:{NFSU2_TR(0x6df88b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df88c:{NFSU2_TR(0x6df88c);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df88e:{NFSU2_TR(0x6df88e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df88f:{NFSU2_TR(0x6df88f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df895ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df895:L6df895:{c.instructions+=2;NFSU2_TR(0x6df895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df896:{NFSU2_TR(0x6df896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df8a0:L6df8a0:{c.instructions+=11;NFSU2_TR(0x6df8a0);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df8a6:{NFSU2_TR(0x6df8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df8a9:{NFSU2_TR(0x6df8a9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df8ae:{NFSU2_TR(0x6df8ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df8b0:{NFSU2_TR(0x6df8b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8b1:{NFSU2_TR(0x6df8b1);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df8b7:{NFSU2_TR(0x6df8b7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df8bb:{NFSU2_TR(0x6df8bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8bc:{NFSU2_TR(0x6df8bc);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8be:{NFSU2_TR(0x6df8be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8bf:{NFSU2_TR(0x6df8bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df8c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df8c5:L6df8c5:{c.instructions+=2;NFSU2_TR(0x6df8c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df8c6:{NFSU2_TR(0x6df8c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df8d0:L6df8d0:{c.instructions+=11;NFSU2_TR(0x6df8d0);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df8d6:{NFSU2_TR(0x6df8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df8d9:{NFSU2_TR(0x6df8d9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df8de:{NFSU2_TR(0x6df8de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df8e0:{NFSU2_TR(0x6df8e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8e1:{NFSU2_TR(0x6df8e1);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df8e7:{NFSU2_TR(0x6df8e7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df8eb:{NFSU2_TR(0x6df8eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8ec:{NFSU2_TR(0x6df8ec);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8ee:{NFSU2_TR(0x6df8ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df8ef:{NFSU2_TR(0x6df8ef);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df8f5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df8f5:L6df8f5:{c.instructions+=2;NFSU2_TR(0x6df8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df8f6:{NFSU2_TR(0x6df8f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df900:L6df900:{c.instructions+=11;NFSU2_TR(0x6df900);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df906:{NFSU2_TR(0x6df906);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df909:{NFSU2_TR(0x6df909);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df90e:{NFSU2_TR(0x6df90e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df910:{NFSU2_TR(0x6df910);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df911:{NFSU2_TR(0x6df911);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df917:{NFSU2_TR(0x6df917);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df91b:{NFSU2_TR(0x6df91b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df91c:{NFSU2_TR(0x6df91c);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df91e:{NFSU2_TR(0x6df91e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df91f:{NFSU2_TR(0x6df91f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df925ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df925:L6df925:{c.instructions+=2;NFSU2_TR(0x6df925);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df926:{NFSU2_TR(0x6df926);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df930:L6df930:{c.instructions+=11;NFSU2_TR(0x6df930);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df936:{NFSU2_TR(0x6df936);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df939:{NFSU2_TR(0x6df939);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df93e:{NFSU2_TR(0x6df93e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df940:{NFSU2_TR(0x6df940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df941:{NFSU2_TR(0x6df941);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df947:{NFSU2_TR(0x6df947);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df94b:{NFSU2_TR(0x6df94b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df94c:{NFSU2_TR(0x6df94c);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df94e:{NFSU2_TR(0x6df94e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df94f:{NFSU2_TR(0x6df94f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df955ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df955:L6df955:{c.instructions+=2;NFSU2_TR(0x6df955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df956:{NFSU2_TR(0x6df956);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df960:L6df960:{c.instructions+=11;NFSU2_TR(0x6df960);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df966:{NFSU2_TR(0x6df966);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df969:{NFSU2_TR(0x6df969);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df96e:{NFSU2_TR(0x6df96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df970:{NFSU2_TR(0x6df970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df971:{NFSU2_TR(0x6df971);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df977:{NFSU2_TR(0x6df977);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df97b:{NFSU2_TR(0x6df97b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df97c:{NFSU2_TR(0x6df97c);
u8 U[4];
w4(U+0,u32(0x17ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df97e:{NFSU2_TR(0x6df97e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df97f:{NFSU2_TR(0x6df97f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df985ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df985:L6df985:{c.instructions+=2;NFSU2_TR(0x6df985);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df986:{NFSU2_TR(0x6df986);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df990:L6df990:{c.instructions+=11;NFSU2_TR(0x6df990);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df996:{NFSU2_TR(0x6df996);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df999:{NFSU2_TR(0x6df999);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df99e:{NFSU2_TR(0x6df99e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df9a0:{NFSU2_TR(0x6df9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9a1:{NFSU2_TR(0x6df9a1);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df9a7:{NFSU2_TR(0x6df9a7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df9ab:{NFSU2_TR(0x6df9ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9ac:{NFSU2_TR(0x6df9ac);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9ae:{NFSU2_TR(0x6df9ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9af:{NFSU2_TR(0x6df9af);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df9b5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df9b5:L6df9b5:{c.instructions+=3;NFSU2_TR(0x6df9b5);
s1(0x8a8a2c,u8(0x0ull));
}
B6df9bc:{NFSU2_TR(0x6df9bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df9bd:{NFSU2_TR(0x6df9bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6df9c0:L6df9c0:{c.instructions+=11;NFSU2_TR(0x6df9c0);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6df9c6:{NFSU2_TR(0x6df9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6df9c9:{NFSU2_TR(0x6df9c9);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df9ce:{NFSU2_TR(0x6df9ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df9d0:{NFSU2_TR(0x6df9d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9d1:{NFSU2_TR(0x6df9d1);
__builtin_memmove((R+24),gp(0x8a7a14),4);
}
B6df9d7:{NFSU2_TR(0x6df9d7);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6df9db:{NFSU2_TR(0x6df9db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9dc:{NFSU2_TR(0x6df9dc);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9e1:{NFSU2_TR(0x6df9e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9e2:{NFSU2_TR(0x6df9e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6df9e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6df9e8:L6df9e8:{c.instructions+=4;NFSU2_TR(0x6df9e8);
__builtin_memmove((R+0),gp(0x8a8a2c),1);
}
B6df9ed:{NFSU2_TR(0x6df9ed);
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
B6df9ef:{NFSU2_TR(0x6df9ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6df9f0:{NFSU2_TR(0x6df9f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dfa1c;}}
}
B6df9f2:L6df9f2:{c.instructions+=6;NFSU2_TR(0x6df9f2);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6df9f7:{NFSU2_TR(0x6df9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6df9f9:{NFSU2_TR(0x6df9f9);
u8 U[4];
w4(U+0,u32(0x8a72a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6df9fe:{NFSU2_TR(0x6df9fe);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa00:{NFSU2_TR(0x6dfa00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa01:{NFSU2_TR(0x6dfa01);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfa07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dfa07:L6dfa07:{c.instructions+=6;NFSU2_TR(0x6dfa07);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dfa0c:{NFSU2_TR(0x6dfa0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dfa0e:{NFSU2_TR(0x6dfa0e);
u8 U[4];
w4(U+0,u32(0x8a72a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa13:{NFSU2_TR(0x6dfa13);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa15:{NFSU2_TR(0x6dfa15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa16:{NFSU2_TR(0x6dfa16);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfa1cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dfa1c:L6dfa1c:{c.instructions+=2;NFSU2_TR(0x6dfa1c);
s1(0x8a8a2c,u8(0x1ull));
}
B6dfa23:{NFSU2_TR(0x6dfa23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dfa30:L6dfa30:{c.instructions+=9;NFSU2_TR(0x6dfa30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa31:{NFSU2_TR(0x6dfa31);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfa36:{NFSU2_TR(0x6dfa36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa37:{NFSU2_TR(0x6dfa37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa38:{NFSU2_TR(0x6dfa38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa39:{NFSU2_TR(0x6dfa39);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfa3d:{NFSU2_TR(0x6dfa3d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa3e:{NFSU2_TR(0x6dfa3e);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfa44:{NFSU2_TR(0x6dfa44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfa49ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6dfa49:L6dfa49:{c.instructions+=8;NFSU2_TR(0x6dfa49);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfa4e:{NFSU2_TR(0x6dfa4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfa52:{NFSU2_TR(0x6dfa52);
__builtin_memmove((R+12),(R+0),4);
}
B6dfa54:{NFSU2_TR(0x6dfa54);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6dfa57:{NFSU2_TR(0x6dfa57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dfa59:{NFSU2_TR(0x6dfa59);
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
B6dfa5b:{NFSU2_TR(0x6dfa5b);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfa60:{NFSU2_TR(0x6dfa60);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dfaf3;}}
}
B6dfa66:L6dfa66:{c.instructions+=1;NFSU2_TR(0x6dfa66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfa67:L6dfa67:{c.instructions+=3;NFSU2_TR(0x6dfa67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfa69:{NFSU2_TR(0x6dfa69);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfa6b:{NFSU2_TR(0x6dfa6b);
if(r1(R+518)){{goto L6dfa9b;}}
}
B6dfa6d:L6dfa6d:{c.instructions+=1;NFSU2_TR(0x6dfa6d);
__builtin_memmove((R+4),(R+4),4);
}
B6dfa70:L6dfa70:{c.instructions+=4;NFSU2_TR(0x6dfa70);
__builtin_memmove((R+0),(R+24),4);
}
B6dfa72:{NFSU2_TR(0x6dfa72);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6dfa75:{NFSU2_TR(0x6dfa75);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dfa78:{NFSU2_TR(0x6dfa78);
if(r1(R+518)){{goto L6dfa9b;}}
}
B6dfa7a:L6dfa7a:{c.instructions+=2;NFSU2_TR(0x6dfa7a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfa80:{NFSU2_TR(0x6dfa80);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80f0f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfa87ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B6dfa87:L6dfa87:{c.instructions+=6;NFSU2_TR(0x6dfa87);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6dfa8d:{NFSU2_TR(0x6dfa8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfa90:{NFSU2_TR(0x6dfa90);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfa95:{NFSU2_TR(0x6dfa95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfa97:{NFSU2_TR(0x6dfa97);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfa99:{NFSU2_TR(0x6dfa99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfa70u);}goto L6dfa70;}}
}
B6dfa9b:L6dfa9b:{c.instructions+=5;NFSU2_TR(0x6dfa9b);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfaa0:{NFSU2_TR(0x6dfaa0);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfaa6:{NFSU2_TR(0x6dfaa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfaa7:{NFSU2_TR(0x6dfaa7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfaa8:{NFSU2_TR(0x6dfaa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfaadull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6dfaad:L6dfaad:{c.instructions+=2;NFSU2_TR(0x6dfaad);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6dfab3:{NFSU2_TR(0x6dfab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfab8ull));
TAIL_STATIC(0x6db380u,6db);
}
B6dfab8:L6dfab8:{c.instructions+=6;NFSU2_TR(0x6dfab8);
__builtin_memmove((R+4),gp(0x8a7a1c),4);
}
B6dfabe:{NFSU2_TR(0x6dfabe);
__builtin_memmove((R+8),gp(0x8a7a24),4);
}
B6dfac4:{NFSU2_TR(0x6dfac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfac5:{NFSU2_TR(0x6dfac5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfac6:{NFSU2_TR(0x6dfac6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfac8:{NFSU2_TR(0x6dfac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfacdull));
TAIL_STATIC(0x6dc0e0u,6dc);
}
B6dfacd:L6dfacd:{c.instructions+=10;NFSU2_TR(0x6dfacd);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfad2:{NFSU2_TR(0x6dfad2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dfad4:{NFSU2_TR(0x6dfad4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6dfada:{NFSU2_TR(0x6dfada);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6dfadd:{NFSU2_TR(0x6dfadd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfae0:{NFSU2_TR(0x6dfae0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfae4:{NFSU2_TR(0x6dfae4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dfae5:{NFSU2_TR(0x6dfae5);
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
B6dfae7:{NFSU2_TR(0x6dfae7);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfaec:{NFSU2_TR(0x6dfaec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfa67u);}goto L6dfa67;}}
}
B6dfaf2:L6dfaf2:{c.instructions+=1;NFSU2_TR(0x6dfaf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dfaf3:L6dfaf3:{c.instructions+=2;NFSU2_TR(0x6dfaf3);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfaf9:{NFSU2_TR(0x6dfaf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfafeull));
TAIL_STATIC(0x4022c0u,402);
}
B6dfafe:L6dfafe:{c.instructions+=5;NFSU2_TR(0x6dfafe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dfaff:{NFSU2_TR(0x6dfaff);
__builtin_memmove(gp(0x8a7a10),(R+12),4);
}
B6dfb05:{NFSU2_TR(0x6dfb05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dfb06:{NFSU2_TR(0x6dfb06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfb07:{NFSU2_TR(0x6dfb07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dfb10:L6dfb10:{c.instructions+=9;NFSU2_TR(0x6dfb10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb11:{NFSU2_TR(0x6dfb11);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfb16:{NFSU2_TR(0x6dfb16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb17:{NFSU2_TR(0x6dfb17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb18:{NFSU2_TR(0x6dfb18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb19:{NFSU2_TR(0x6dfb19);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfb1d:{NFSU2_TR(0x6dfb1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb1e:{NFSU2_TR(0x6dfb1e);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfb24:{NFSU2_TR(0x6dfb24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfb29ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6dfb29:L6dfb29:{c.instructions+=8;NFSU2_TR(0x6dfb29);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfb2e:{NFSU2_TR(0x6dfb2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfb32:{NFSU2_TR(0x6dfb32);
__builtin_memmove((R+12),(R+0),4);
}
B6dfb34:{NFSU2_TR(0x6dfb34);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6dfb37:{NFSU2_TR(0x6dfb37);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dfb39:{NFSU2_TR(0x6dfb39);
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
B6dfb3b:{NFSU2_TR(0x6dfb3b);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfb40:{NFSU2_TR(0x6dfb40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dfbef;}}
}
B6dfb46:L6dfb46:{c.instructions+=1;NFSU2_TR(0x6dfb46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb47:L6dfb47:{c.instructions+=3;NFSU2_TR(0x6dfb47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfb49:{NFSU2_TR(0x6dfb49);
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
B6dfb4b:{NFSU2_TR(0x6dfb4b);
if(r1(R+518)){{goto L6dfb7b;}}
}
B6dfb4d:L6dfb4d:{c.instructions+=1;NFSU2_TR(0x6dfb4d);
__builtin_memmove((R+4),(R+4),4);
}
B6dfb50:L6dfb50:{c.instructions+=4;NFSU2_TR(0x6dfb50);
__builtin_memmove((R+0),(R+24),4);
}
B6dfb52:{NFSU2_TR(0x6dfb52);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6dfb55:{NFSU2_TR(0x6dfb55);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x44ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x44ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfb58:{NFSU2_TR(0x6dfb58);
if(r1(R+518)){{goto L6dfb7b;}}
}
B6dfb5a:L6dfb5a:{c.instructions+=2;NFSU2_TR(0x6dfb5a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfb60:{NFSU2_TR(0x6dfb60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80f0f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfb67ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B6dfb67:L6dfb67:{c.instructions+=6;NFSU2_TR(0x6dfb67);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6dfb6d:{NFSU2_TR(0x6dfb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfb70:{NFSU2_TR(0x6dfb70);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfb75:{NFSU2_TR(0x6dfb75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfb77:{NFSU2_TR(0x6dfb77);
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
B6dfb79:{NFSU2_TR(0x6dfb79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfb50u);}goto L6dfb50;}}
}
B6dfb7b:L6dfb7b:{c.instructions+=3;NFSU2_TR(0x6dfb7b);
__builtin_memmove((R+0),gp(0x8a8a30),4);
}
B6dfb80:{NFSU2_TR(0x6dfb80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb81:{NFSU2_TR(0x6dfb81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfb86ull));
TAIL_STATIC(0x6dc000u,6dc);
}
B6dfb86:L6dfb86:{c.instructions+=6;NFSU2_TR(0x6dfb86);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6dfb8c:{NFSU2_TR(0x6dfb8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6dfb8f:{NFSU2_TR(0x6dfb8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb90:{NFSU2_TR(0x6dfb90);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfb96:{NFSU2_TR(0x6dfb96);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfb97:{NFSU2_TR(0x6dfb97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfb9cull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6dfb9c:L6dfb9c:{c.instructions+=2;NFSU2_TR(0x6dfb9c);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6dfba2:{NFSU2_TR(0x6dfba2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfba7ull));
TAIL_STATIC(0x6db380u,6db);
}
B6dfba7:L6dfba7:{c.instructions+=1;NFSU2_TR(0x6dfba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfbacull));
TAIL_STATIC(0x6dc010u,6dc);
}
B6dfbac:L6dfbac:{c.instructions+=9;NFSU2_TR(0x6dfbac);
__builtin_memmove((R+8),gp(0x8a7a1c),4);
}
B6dfbb2:{NFSU2_TR(0x6dfbb2);
__builtin_memmove((R+0),gp(0x8a7a28),4);
}
B6dfbb7:{NFSU2_TR(0x6dfbb7);
__builtin_memmove((R+4),gp(0x8a7a24),4);
}
B6dfbbd:{NFSU2_TR(0x6dfbbd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfbbe:{NFSU2_TR(0x6dfbbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfbbf:{NFSU2_TR(0x6dfbbf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfbc1:{NFSU2_TR(0x6dfbc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfbc2:{NFSU2_TR(0x6dfbc2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfbc4:{NFSU2_TR(0x6dfbc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfbc9ull));
TAIL_STATIC(0x6dc130u,6dc);
}
B6dfbc9:L6dfbc9:{c.instructions+=10;NFSU2_TR(0x6dfbc9);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfbce:{NFSU2_TR(0x6dfbce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dfbd0:{NFSU2_TR(0x6dfbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfbd4:{NFSU2_TR(0x6dfbd4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6dfbda:{NFSU2_TR(0x6dfbda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6dfbdd:{NFSU2_TR(0x6dfbdd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dfbde:{NFSU2_TR(0x6dfbde);
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
B6dfbe0:{NFSU2_TR(0x6dfbe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfbe3:{NFSU2_TR(0x6dfbe3);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfbe8:{NFSU2_TR(0x6dfbe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfb47u);}goto L6dfb47;}}
}
B6dfbee:L6dfbee:{c.instructions+=1;NFSU2_TR(0x6dfbee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dfbef:L6dfbef:{c.instructions+=2;NFSU2_TR(0x6dfbef);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfbf5:{NFSU2_TR(0x6dfbf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfbfaull));
TAIL_STATIC(0x4022c0u,402);
}
B6dfbfa:L6dfbfa:{c.instructions+=5;NFSU2_TR(0x6dfbfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dfbfb:{NFSU2_TR(0x6dfbfb);
__builtin_memmove(gp(0x8a7a10),(R+12),4);
}
B6dfc01:{NFSU2_TR(0x6dfc01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dfc02:{NFSU2_TR(0x6dfc02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfc03:{NFSU2_TR(0x6dfc03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dfc10:L6dfc10:{c.instructions+=9;NFSU2_TR(0x6dfc10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc11:{NFSU2_TR(0x6dfc11);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfc16:{NFSU2_TR(0x6dfc16);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc17:{NFSU2_TR(0x6dfc17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc18:{NFSU2_TR(0x6dfc18);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc19:{NFSU2_TR(0x6dfc19);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfc1d:{NFSU2_TR(0x6dfc1d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc1e:{NFSU2_TR(0x6dfc1e);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfc24:{NFSU2_TR(0x6dfc24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfc29ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6dfc29:L6dfc29:{c.instructions+=8;NFSU2_TR(0x6dfc29);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfc2e:{NFSU2_TR(0x6dfc2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfc32:{NFSU2_TR(0x6dfc32);
__builtin_memmove((R+12),(R+0),4);
}
B6dfc34:{NFSU2_TR(0x6dfc34);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6dfc37:{NFSU2_TR(0x6dfc37);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dfc39:{NFSU2_TR(0x6dfc39);
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
B6dfc3b:{NFSU2_TR(0x6dfc3b);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfc40:{NFSU2_TR(0x6dfc40);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dfce9;}}
}
B6dfc46:L6dfc46:{c.instructions+=1;NFSU2_TR(0x6dfc46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc47:L6dfc47:{c.instructions+=3;NFSU2_TR(0x6dfc47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfc49:{NFSU2_TR(0x6dfc49);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfc4b:{NFSU2_TR(0x6dfc4b);
if(r1(R+518)){{goto L6dfc7b;}}
}
B6dfc4d:L6dfc4d:{c.instructions+=1;NFSU2_TR(0x6dfc4d);
__builtin_memmove((R+4),(R+4),4);
}
B6dfc50:L6dfc50:{c.instructions+=4;NFSU2_TR(0x6dfc50);
__builtin_memmove((R+0),(R+24),4);
}
B6dfc52:{NFSU2_TR(0x6dfc52);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6dfc55:{NFSU2_TR(0x6dfc55);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dfc58:{NFSU2_TR(0x6dfc58);
if(r1(R+518)){{goto L6dfc7b;}}
}
B6dfc5a:L6dfc5a:{c.instructions+=2;NFSU2_TR(0x6dfc5a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfc60:{NFSU2_TR(0x6dfc60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80f0f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfc67ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B6dfc67:L6dfc67:{c.instructions+=6;NFSU2_TR(0x6dfc67);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6dfc6d:{NFSU2_TR(0x6dfc6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfc70:{NFSU2_TR(0x6dfc70);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfc75:{NFSU2_TR(0x6dfc75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfc77:{NFSU2_TR(0x6dfc77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfc79:{NFSU2_TR(0x6dfc79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfc50u);}goto L6dfc50;}}
}
B6dfc7b:L6dfc7b:{c.instructions+=5;NFSU2_TR(0x6dfc7b);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfc80:{NFSU2_TR(0x6dfc80);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfc86:{NFSU2_TR(0x6dfc86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc87:{NFSU2_TR(0x6dfc87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfc88:{NFSU2_TR(0x6dfc88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfc8dull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6dfc8d:L6dfc8d:{c.instructions+=2;NFSU2_TR(0x6dfc8d);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6dfc93:{NFSU2_TR(0x6dfc93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfc98ull));
TAIL_STATIC(0x6db380u,6db);
}
B6dfc98:L6dfc98:{c.instructions+=11;NFSU2_TR(0x6dfc98);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6dfc9e:{NFSU2_TR(0x6dfc9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6dfca5:{NFSU2_TR(0x6dfca5);
__builtin_memmove((R+0),gp(0x8a7a28),4);
}
B6dfcaa:{NFSU2_TR(0x6dfcaa);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfcac:{NFSU2_TR(0x6dfcac);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6dfcad:{NFSU2_TR(0x6dfcad);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(s64(s32(r4(U+8)))));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dfcad);w8(U+52,u64(x_/y_));}
w4(R+0,u32(r8(U+52)));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dfcad);w8(U+60,u64(x_%y_));}
w4(R+8,u32(r8(U+60)));
}
B6dfcb4:{NFSU2_TR(0x6dfcb4);
__builtin_memmove((R+4),gp(0x8a7a24),4);
}
B6dfcba:{NFSU2_TR(0x6dfcba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfcbb:{NFSU2_TR(0x6dfcbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfcbc:{NFSU2_TR(0x6dfcbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfcbe:{NFSU2_TR(0x6dfcbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfcc3ull));
TAIL_STATIC(0x6dc0e0u,6dc);
}
B6dfcc3:L6dfcc3:{c.instructions+=10;NFSU2_TR(0x6dfcc3);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfcc8:{NFSU2_TR(0x6dfcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dfcca:{NFSU2_TR(0x6dfcca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfcce:{NFSU2_TR(0x6dfcce);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6dfcd4:{NFSU2_TR(0x6dfcd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6dfcd7:{NFSU2_TR(0x6dfcd7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dfcd8:{NFSU2_TR(0x6dfcd8);
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
B6dfcda:{NFSU2_TR(0x6dfcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfcdd:{NFSU2_TR(0x6dfcdd);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfce2:{NFSU2_TR(0x6dfce2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfc47u);}goto L6dfc47;}}
}
B6dfce8:L6dfce8:{c.instructions+=1;NFSU2_TR(0x6dfce8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dfce9:L6dfce9:{c.instructions+=2;NFSU2_TR(0x6dfce9);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfcef:{NFSU2_TR(0x6dfcef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfcf4ull));
TAIL_STATIC(0x4022c0u,402);
}
B6dfcf4:L6dfcf4:{c.instructions+=5;NFSU2_TR(0x6dfcf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dfcf5:{NFSU2_TR(0x6dfcf5);
__builtin_memmove(gp(0x8a7a10),(R+12),4);
}
B6dfcfb:{NFSU2_TR(0x6dfcfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dfcfc:{NFSU2_TR(0x6dfcfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfcfd:{NFSU2_TR(0x6dfcfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dfd00:L6dfd00:{c.instructions+=9;NFSU2_TR(0x6dfd00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd01:{NFSU2_TR(0x6dfd01);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfd06:{NFSU2_TR(0x6dfd06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd07:{NFSU2_TR(0x6dfd07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd08:{NFSU2_TR(0x6dfd08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd09:{NFSU2_TR(0x6dfd09);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfd0d:{NFSU2_TR(0x6dfd0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd0e:{NFSU2_TR(0x6dfd0e);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfd14:{NFSU2_TR(0x6dfd14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfd19ull));
TAIL_STATIC(0x6e18b0u,6e1);
}
B6dfd19:L6dfd19:{c.instructions+=8;NFSU2_TR(0x6dfd19);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfd1e:{NFSU2_TR(0x6dfd1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfd22:{NFSU2_TR(0x6dfd22);
__builtin_memmove((R+12),(R+0),4);
}
B6dfd24:{NFSU2_TR(0x6dfd24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6dfd27:{NFSU2_TR(0x6dfd27);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dfd29:{NFSU2_TR(0x6dfd29);
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
B6dfd2b:{NFSU2_TR(0x6dfd2b);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfd30:{NFSU2_TR(0x6dfd30);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dfdf0;}}
}
B6dfd36:L6dfd36:{c.instructions+=1;NFSU2_TR(0x6dfd36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd37:L6dfd37:{c.instructions+=3;NFSU2_TR(0x6dfd37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfd39:{NFSU2_TR(0x6dfd39);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfd3b:{NFSU2_TR(0x6dfd3b);
if(r1(R+518)){{goto L6dfd6b;}}
}
B6dfd3d:L6dfd3d:{c.instructions+=1;NFSU2_TR(0x6dfd3d);
__builtin_memmove((R+4),(R+4),4);
}
B6dfd40:L6dfd40:{c.instructions+=4;NFSU2_TR(0x6dfd40);
__builtin_memmove((R+0),(R+24),4);
}
B6dfd42:{NFSU2_TR(0x6dfd42);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6dfd45:{NFSU2_TR(0x6dfd45);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dfd48:{NFSU2_TR(0x6dfd48);
if(r1(R+518)){{goto L6dfd6b;}}
}
B6dfd4a:L6dfd4a:{c.instructions+=2;NFSU2_TR(0x6dfd4a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfd50:{NFSU2_TR(0x6dfd50);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80f0f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfd57ull));
{u32 t_=u32(r4(U+12));TAIL_DYNAMIC(t_);}
}
B6dfd57:L6dfd57:{c.instructions+=6;NFSU2_TR(0x6dfd57);
__builtin_memmove((R+8),gp(0x8a7a10),4);
}
B6dfd5d:{NFSU2_TR(0x6dfd5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfd60:{NFSU2_TR(0x6dfd60);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfd65:{NFSU2_TR(0x6dfd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6dfd67:{NFSU2_TR(0x6dfd67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfd69:{NFSU2_TR(0x6dfd69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfd40u);}goto L6dfd40;}}
}
B6dfd6b:L6dfd6b:{c.instructions+=5;NFSU2_TR(0x6dfd6b);
__builtin_memmove((R+0),gp(0x80f0e8),4);
}
B6dfd70:{NFSU2_TR(0x6dfd70);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfd76:{NFSU2_TR(0x6dfd76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd77:{NFSU2_TR(0x6dfd77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd78:{NFSU2_TR(0x6dfd78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfd7dull));
TAIL_STATIC(0x6e18e0u,6e1);
}
B6dfd7d:L6dfd7d:{c.instructions+=2;NFSU2_TR(0x6dfd7d);
__builtin_memmove((R+4),gp(0x80f0e8),4);
}
B6dfd83:{NFSU2_TR(0x6dfd83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfd88ull));
TAIL_STATIC(0x6db380u,6db);
}
B6dfd88:L6dfd88:{c.instructions+=3;NFSU2_TR(0x6dfd88);
__builtin_memmove((R+4),gp(0x8a8a30),4);
}
B6dfd8e:{NFSU2_TR(0x6dfd8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfd8f:{NFSU2_TR(0x6dfd8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfd94ull));
TAIL_STATIC(0x6dc000u,6dc);
}
B6dfd94:L6dfd94:{c.instructions+=1;NFSU2_TR(0x6dfd94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfd99ull));
TAIL_STATIC(0x6dc010u,6dc);
}
B6dfd99:L6dfd99:{c.instructions+=14;NFSU2_TR(0x6dfd99);
__builtin_memmove((R+4),gp(0x8a8060),4);
}
B6dfd9f:{NFSU2_TR(0x6dfd9f);
__builtin_memmove((R+24),gp(0x8a7a28),4);
}
B6dfda5:{NFSU2_TR(0x6dfda5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6dfdac:{NFSU2_TR(0x6dfdac);
__builtin_memmove((R+0),(R+24),4);
}
B6dfdae:{NFSU2_TR(0x6dfdae);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfdb0:{NFSU2_TR(0x6dfdb0);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6dfdb1:{NFSU2_TR(0x6dfdb1);
u8 U[68];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80f0a8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w8(U+12,u64(s64(s32(r4(U+8)))));
w8(U+20,u64(r4(R+8)));
w8(U+28,shl<u64>(r8(U+20),u64(u32(0x20ull))));
w8(U+36,u64(r4(R+0)));
w8(U+44,u64(u64(r8(U+28))|u64(r8(U+36))));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dfdb1);w8(U+52,u64(x_/y_));}
w4(R+0,u32(r8(U+52)));
{s64 x_=s64(s64(r8(U+44))),y_=s64(s64(r8(U+12)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6dfdb1);w8(U+60,u64(x_%y_));}
w4(R+8,u32(r8(U+60)));
}
B6dfdb8:{NFSU2_TR(0x6dfdb8);
__builtin_memmove((R+8),gp(0x8a7a24),4);
}
B6dfdbe:{NFSU2_TR(0x6dfdbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfdbf:{NFSU2_TR(0x6dfdbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfdc0:{NFSU2_TR(0x6dfdc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfdc2:{NFSU2_TR(0x6dfdc2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfdc3:{NFSU2_TR(0x6dfdc3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfdc5:{NFSU2_TR(0x6dfdc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfdcaull));
TAIL_STATIC(0x6dc130u,6dc);
}
B6dfdca:L6dfdca:{c.instructions+=10;NFSU2_TR(0x6dfdca);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfdcf:{NFSU2_TR(0x6dfdcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dfdd1:{NFSU2_TR(0x6dfdd1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6dfdd7:{NFSU2_TR(0x6dfdd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6dfdda:{NFSU2_TR(0x6dfdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6dfddd:{NFSU2_TR(0x6dfddd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dfde1:{NFSU2_TR(0x6dfde1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dfde2:{NFSU2_TR(0x6dfde2);
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
B6dfde4:{NFSU2_TR(0x6dfde4);
__builtin_memmove(gp(0x8a7a10),(R+0),4);
}
B6dfde9:{NFSU2_TR(0x6dfde9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfd37u);}goto L6dfd37;}}
}
B6dfdef:L6dfdef:{c.instructions+=1;NFSU2_TR(0x6dfdef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dfdf0:L6dfdf0:{c.instructions+=2;NFSU2_TR(0x6dfdf0);
__builtin_memmove((R+4),gp(0x8a80b8),4);
}
B6dfdf6:{NFSU2_TR(0x6dfdf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfdfbull));
TAIL_STATIC(0x4022c0u,402);
}
B6dfdfb:L6dfdfb:{c.instructions+=5;NFSU2_TR(0x6dfdfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dfdfc:{NFSU2_TR(0x6dfdfc);
__builtin_memmove(gp(0x8a7a10),(R+12),4);
}
B6dfe02:{NFSU2_TR(0x6dfe02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dfe03:{NFSU2_TR(0x6dfe03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfe04:{NFSU2_TR(0x6dfe04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dfe10:L6dfe10:{c.instructions+=9;NFSU2_TR(0x6dfe10);
__builtin_memmove((R+0),gp(0x8a7bdc),4);
}
B6dfe15:{NFSU2_TR(0x6dfe15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dfe1b:{NFSU2_TR(0x6dfe1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6dfe1e:{NFSU2_TR(0x6dfe1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104a0010ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfe23:{NFSU2_TR(0x6dfe23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe24:{NFSU2_TR(0x6dfe24);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe25:{NFSU2_TR(0x6dfe25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe26:{NFSU2_TR(0x6dfe26);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe27:{NFSU2_TR(0x6dfe27);
if(r1(R+518)){{goto L6dfe35;}}
}
B6dfe29:L6dfe29:{c.instructions+=3;NFSU2_TR(0x6dfe29);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80860000ull))));
}
B6dfe2e:{NFSU2_TR(0x6dfe2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80860000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dfe33:{NFSU2_TR(0x6dfe33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dfe5a;}}
}
B6dfe35:L6dfe35:{c.instructions+=3;NFSU2_TR(0x6dfe35);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6dfe37:{NFSU2_TR(0x6dfe37);
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
B6dfe39:{NFSU2_TR(0x6dfe39);
__builtin_memmove((R+16),(R+16),4);
}
B6dfe40:L6dfe40:{c.instructions+=7;NFSU2_TR(0x6dfe40);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dfe45:{NFSU2_TR(0x6dfe45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dfe47:{NFSU2_TR(0x6dfe47);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe48:{NFSU2_TR(0x6dfe48);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe4a:{NFSU2_TR(0x6dfe4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe4b:{NFSU2_TR(0x6dfe4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe4c:{NFSU2_TR(0x6dfe4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfe52ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dfe52:L6dfe52:{c.instructions+=3;NFSU2_TR(0x6dfe52);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dfe53:{NFSU2_TR(0x6dfe53);
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
B6dfe56:{NFSU2_TR(0x6dfe56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dfe40u);}goto L6dfe40;}}
}
B6dfe58:L6dfe58:{c.instructions+=1;NFSU2_TR(0x6dfe58);
{goto L6dfe5c;}
}
B6dfe5a:L6dfe5a:{c.instructions+=1;NFSU2_TR(0x6dfe5a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6dfe5c:L6dfe5c:{c.instructions+=3;NFSU2_TR(0x6dfe5c);
__builtin_memmove((R+0),gp(0x8a7bc8),1);
}
B6dfe61:{NFSU2_TR(0x6dfe61);
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
B6dfe63:{NFSU2_TR(0x6dfe63);
if(r1(R+518)){{goto L6dfe80;}}
}
B6dfe65:L6dfe65:{c.instructions+=7;NFSU2_TR(0x6dfe65);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dfe6a:{NFSU2_TR(0x6dfe6a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe6b:{NFSU2_TR(0x6dfe6b);
u8 U[4];
w4(U+0,u32(0x89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe70:{NFSU2_TR(0x6dfe70);
s1(0x8a7bc8,u8(0x0ull));
}
B6dfe77:{NFSU2_TR(0x6dfe77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dfe79:{NFSU2_TR(0x6dfe79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfe7a:{NFSU2_TR(0x6dfe7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfe80ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dfe80:L6dfe80:{c.instructions+=6;NFSU2_TR(0x6dfe80);
__builtin_memmove((R+0),gp(0x8a7a10),4);
}
B6dfe85:{NFSU2_TR(0x6dfe85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dfe88:{NFSU2_TR(0x6dfe88);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6dfe8a:{NFSU2_TR(0x6dfe8a);
__builtin_memmove(gp(0x8a8a28),(R+0),4);
}
B6dfe8f:{NFSU2_TR(0x6dfe8f);
w1(R+12,u8(0x1ull));
}
B6dfe91:{NFSU2_TR(0x6dfe91);
if(r1(R+518)){{goto L6dfea4;}}
}
B6dfe93:L6dfe93:{c.instructions+=1;NFSU2_TR(0x6dfe93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfe98ull));
TAIL_STATIC(0x6d9460u,6d9);
}
B6dfe98:L6dfe98:{c.instructions+=2;NFSU2_TR(0x6dfe98);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dfe9a:{NFSU2_TR(0x6dfe9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dfead;}}
}
B6dfe9c:L6dfe9c:{c.instructions+=2;NFSU2_TR(0x6dfe9c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8a28),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dfea2:{NFSU2_TR(0x6dfea2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dfeaf;}}
}
B6dfea4:L6dfea4:{c.instructions+=1;NFSU2_TR(0x6dfea4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfea9ull));
TAIL_STATIC(0x6d9450u,6d9);
}
B6dfea9:L6dfea9:{c.instructions+=2;NFSU2_TR(0x6dfea9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dfeab:{NFSU2_TR(0x6dfeab);
if(r1(R+518)){{goto L6dfeaf;}}
}
B6dfead:L6dfead:{c.instructions+=1;NFSU2_TR(0x6dfead);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B6dfeaf:L6dfeaf:{c.instructions+=3;NFSU2_TR(0x6dfeaf);
w4(R+4,u32(r1(R+12)));
}
B6dfeb2:{NFSU2_TR(0x6dfeb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfeb3:{NFSU2_TR(0x6dfeb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfeb8ull));
TAIL_STATIC(0x6d89b0u,6d8);
}
B6dfeb8:L6dfeb8:{c.instructions+=2;NFSU2_TR(0x6dfeb8);
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
B6dfebb:{NFSU2_TR(0x6dfebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfec0ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6dfec0:L6dfec0:{c.instructions+=2;NFSU2_TR(0x6dfec0);
__builtin_memmove((R+4),(R+0),4);
}
B6dfec2:{NFSU2_TR(0x6dfec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfec7ull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6dfec7:L6dfec7:{c.instructions+=6;NFSU2_TR(0x6dfec7);
__builtin_memmove((R+28),(R+0),4);
}
B6dfec9:{NFSU2_TR(0x6dfec9);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dfecd:{NFSU2_TR(0x6dfecd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dfed0:{NFSU2_TR(0x6dfed0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfed1:{NFSU2_TR(0x6dfed1);
__builtin_memmove((R+4),(R+24),4);
}
B6dfed3:{NFSU2_TR(0x6dfed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfed8ull));
TAIL_STATIC(0x6d9510u,6d9);
}
B6dfed8:L6dfed8:{c.instructions+=3;NFSU2_TR(0x6dfed8);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dfedc:{NFSU2_TR(0x6dfedc);
u8 U[5];
__builtin_memmove((U+3),gp(0x8a7bd0),1);
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
B6dfee2:{NFSU2_TR(0x6dfee2);
if(r1(R+518)){{goto L6dff02;}}
}
B6dfee4:L6dfee4:{c.instructions+=8;NFSU2_TR(0x6dfee4);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dfeea:{NFSU2_TR(0x6dfeea);
__builtin_memmove(gp(0x8a7bd0),(R+0),1);
}
B6dfeef:{NFSU2_TR(0x6dfeef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dfef1:{NFSU2_TR(0x6dfef1);
w4(R+0,u32(r1(R+0)));
}
B6dfef4:{NFSU2_TR(0x6dfef4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfef5:{NFSU2_TR(0x6dfef5);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfef7:{NFSU2_TR(0x6dfef7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfef8:{NFSU2_TR(0x6dfef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfefeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dfefe:L6dfefe:{c.instructions+=1;NFSU2_TR(0x6dfefe);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6dff02:L6dff02:{c.instructions+=2;NFSU2_TR(0x6dff02);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6dff04:{NFSU2_TR(0x6dff04);
if(r1(R+518)){TAIL_STATIC(0x6e02cau,6e0);}
}
B6dff0a:L6dff0a:{c.instructions+=2;NFSU2_TR(0x6dff0a);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a8a28),4);
w1(R+512,u8((r4(U+6))<(r4(R+20))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+20)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dff10:{NFSU2_TR(0x6dff10);
if(r1(R+518)){TAIL_STATIC(0x6e0204u,6e0);}
}
B6dff16:L6dff16:{c.instructions+=5;NFSU2_TR(0x6dff16);
__builtin_memmove((R+12),gp(0x8a7bdc),4);
}
B6dff1c:{NFSU2_TR(0x6dff1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dff20:{NFSU2_TR(0x6dff20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff21:{NFSU2_TR(0x6dff21);
__builtin_memmove((R+4),(R+24),4);
}
B6dff23:{NFSU2_TR(0x6dff23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dff28ull));
TAIL_STATIC(0x6d9550u,6d9);
}
B6dff28:L6dff28:{c.instructions+=4;NFSU2_TR(0x6dff28);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dff2c:{NFSU2_TR(0x6dff2c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff2d:{NFSU2_TR(0x6dff2d);
__builtin_memmove((R+4),(R+24),4);
}
B6dff2f:{NFSU2_TR(0x6dff2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dff34ull));
TAIL_STATIC(0x6d9530u,6d9);
}
B6dff34:L6dff34:{c.instructions+=3;NFSU2_TR(0x6dff34);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dff38:{NFSU2_TR(0x6dff38);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7bd4),4);
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
B6dff3e:{NFSU2_TR(0x6dff3e);
if(r1(R+518)){{goto L6dff5a;}}
}
B6dff40:L6dff40:{c.instructions+=7;NFSU2_TR(0x6dff40);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dff46:{NFSU2_TR(0x6dff46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff47:{NFSU2_TR(0x6dff47);
u8 U[4];
w4(U+0,u32(0x8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff4c:{NFSU2_TR(0x6dff4c);
__builtin_memmove(gp(0x8a7bd4),(R+0),4);
}
B6dff51:{NFSU2_TR(0x6dff51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dff53:{NFSU2_TR(0x6dff53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff54:{NFSU2_TR(0x6dff54);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dff5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dff5a:L6dff5a:{c.instructions+=3;NFSU2_TR(0x6dff5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dff5e:{NFSU2_TR(0x6dff5e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a7bd8),4);
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
B6dff64:{NFSU2_TR(0x6dff64);
if(r1(R+518)){{goto L6dff7d;}}
}
B6dff66:L6dff66:{c.instructions+=7;NFSU2_TR(0x6dff66);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dff6c:{NFSU2_TR(0x6dff6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff6d:{NFSU2_TR(0x6dff6d);
u8 U[4];
w4(U+0,u32(0x23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff6f:{NFSU2_TR(0x6dff6f);
__builtin_memmove(gp(0x8a7bd8),(R+0),4);
}
B6dff74:{NFSU2_TR(0x6dff74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dff76:{NFSU2_TR(0x6dff76);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dff77:{NFSU2_TR(0x6dff77);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dff7dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dff7d:L6dff7d:{c.instructions+=2;NFSU2_TR(0x6dff7d);
u8 U[18];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x248ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0x100000ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6dff87:{NFSU2_TR(0x6dff87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6e016fu,6e0);}
}
B6dff8d:L6dff8d:{c.instructions+=2;NFSU2_TR(0x6dff8d);
__builtin_memmove((R+4),(R+28),4);
}
B6dff8f:{NFSU2_TR(0x6dff8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dff94ull));
TAIL_STATIC(0x6d82d0u,6d8);
}
B6dff94:L6dff94:{c.instructions+=3;NFSU2_TR(0x6dff94);
__builtin_memmove((R+28),(R+0),4);
}
B6dff96:{NFSU2_TR(0x6dff96);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6dff98:{NFSU2_TR(0x6dff98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dffaf;}}
}
B6dff9a:L6dff9a:{c.instructions+=1;NFSU2_TR(0x6dff9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dff9full));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6dff9f:L6dff9f:{c.instructions+=2;NFSU2_TR(0x6dff9f);
__builtin_memmove((R+4),(R+0),4);
}
B6dffa1:{NFSU2_TR(0x6dffa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dffa6ull));
TAIL_STATIC(0x6d81a0u,6d8);
}
B6dffa6:L6dffa6:{c.instructions+=2;NFSU2_TR(0x6dffa6);
__builtin_memmove((R+4),(R+0),4);
}
B6dffa8:{NFSU2_TR(0x6dffa8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dffadull));
TAIL_STATIC(0x6d82d0u,6d8);
}
B6dffad:L6dffad:{c.instructions+=1;NFSU2_TR(0x6dffad);
__builtin_memmove((R+28),(R+0),4);
}
B6dffaf:L6dffaf:{c.instructions+=4;NFSU2_TR(0x6dffaf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dffb3:{NFSU2_TR(0x6dffb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dffb4:{NFSU2_TR(0x6dffb4);
__builtin_memmove((R+4),(R+28),4);
}
B6dffb6:{NFSU2_TR(0x6dffb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dffbbull));
TAIL_STATIC(0x6e1670u,6e1);
}
B6dffbb:L6dffbb:{c.instructions+=4;NFSU2_TR(0x6dffbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dffbf:{NFSU2_TR(0x6dffbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dffc0:{NFSU2_TR(0x6dffc0);
__builtin_memmove((R+4),(R+28),4);
}
B6dffc2:{NFSU2_TR(0x6dffc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dffc7ull));
TAIL_STATIC(0x6e1690u,6e1);
}
B6dffc7:L6dffc7:{c.instructions+=4;NFSU2_TR(0x6dffc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dffcb:{NFSU2_TR(0x6dffcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dffcc:{NFSU2_TR(0x6dffcc);
__builtin_memmove((R+4),(R+28),4);
}
B6dffce:{NFSU2_TR(0x6dffce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dffd3ull));
TAIL_STATIC(0x6e16d0u,6e1);
}
B6dffd3:L6dffd3:{c.instructions+=4;NFSU2_TR(0x6dffd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dffd7:{NFSU2_TR(0x6dffd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dffd8:{NFSU2_TR(0x6dffd8);
__builtin_memmove((R+4),(R+28),4);
}
B6dffda:{NFSU2_TR(0x6dffda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dffdfull));
TAIL_STATIC(0x6e16b0u,6e1);
}
B6dffdf:L6dffdf:{c.instructions+=3;NFSU2_TR(0x6dffdf);
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
B6dffe1:{NFSU2_TR(0x6dffe1);
w4(R+4,u32(0x8ull));
}
B6dffe6:{NFSU2_TR(0x6dffe6);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B6dffea:L6dffea:{c.instructions+=1;NFSU2_TR(0x6dffea);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6dffec;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dffeau);}goto L6dffea;}
}
B6dffec:L6dffec:{c.instructions+=4;NFSU2_TR(0x6dffec);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dfff0:{NFSU2_TR(0x6dfff0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfff1:{NFSU2_TR(0x6dfff1);
__builtin_memmove((R+4),(R+24),4);
}
B6dfff3:{NFSU2_TR(0x6dfff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dfff8ull));
TAIL_STATIC(0x6d94d0u,6d9);
}
B6dfff8:L6dfff8:{c.instructions+=4;NFSU2_TR(0x6dfff8);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dfffc:{NFSU2_TR(0x6dfffc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dfffd:{NFSU2_TR(0x6dfffd);
__builtin_memmove((R+4),(R+24),4);
}
B6dffff:{NFSU2_TR(0x6dffff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e0004ull));
TAIL_STATIC(0x6d94f0u,6d9);
}
XIT:NFSU2_TR_EXIT(0x6df,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
