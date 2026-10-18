#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5df,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5df,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5df(u8* __restrict R,Cpu& c);
u32 page_5df(Cpu& c){return body_5df(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5df(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5df001:goto L5df001;
case 0x5df002:c.instructions+=1;goto B5df002;
case 0x5df005:goto L5df005;
case 0x5df00a:c.instructions+=1;goto B5df00a;
case 0x5df00c:goto L5df00c;
case 0x5df00e:c.instructions+=5;goto B5df00e;
case 0x5df011:c.instructions+=4;goto B5df011;
case 0x5df014:c.instructions+=3;goto B5df014;
case 0x5df019:c.instructions+=2;goto B5df019;
case 0x5df01a:c.instructions+=1;goto B5df01a;
case 0x5df01d:goto L5df01d;
case 0x5df022:c.instructions+=1;goto B5df022;
case 0x5df024:goto L5df024;
case 0x5df02b:c.instructions+=3;goto B5df02b;
case 0x5df030:c.instructions+=2;goto B5df030;
case 0x5df031:c.instructions+=1;goto B5df031;
case 0x5df034:goto L5df034;
case 0x5df039:c.instructions+=1;goto B5df039;
case 0x5df03b:goto L5df03b;
case 0x5df03d:c.instructions+=5;goto B5df03d;
case 0x5df040:c.instructions+=4;goto B5df040;
case 0x5df043:c.instructions+=3;goto B5df043;
case 0x5df048:c.instructions+=2;goto B5df048;
case 0x5df049:c.instructions+=1;goto B5df049;
case 0x5df04c:goto L5df04c;
case 0x5df04e:c.instructions+=2;goto B5df04e;
case 0x5df04f:c.instructions+=1;goto B5df04f;
case 0x5df060:goto L5df060;
case 0x5df061:c.instructions+=13;goto B5df061;
case 0x5df065:c.instructions+=12;goto B5df065;
case 0x5df069:c.instructions+=11;goto B5df069;
case 0x5df06a:c.instructions+=10;goto B5df06a;
case 0x5df06c:c.instructions+=9;goto B5df06c;
case 0x5df06f:c.instructions+=8;goto B5df06f;
case 0x5df070:c.instructions+=7;goto B5df070;
case 0x5df072:c.instructions+=6;goto B5df072;
case 0x5df075:c.instructions+=5;goto B5df075;
case 0x5df078:c.instructions+=4;goto B5df078;
case 0x5df079:c.instructions+=3;goto B5df079;
case 0x5df07b:c.instructions+=2;goto B5df07b;
case 0x5df07d:c.instructions+=1;goto B5df07d;
case 0x5df07f:goto L5df07f;
case 0x5df080:c.instructions+=1;goto B5df080;
case 0x5df083:goto L5df083;
case 0x5df085:c.instructions+=4;goto B5df085;
case 0x5df086:c.instructions+=3;goto B5df086;
case 0x5df088:c.instructions+=2;goto B5df088;
case 0x5df08f:c.instructions+=1;goto B5df08f;
case 0x5df094:goto L5df094;
case 0x5df098:c.instructions+=4;goto B5df098;
case 0x5df099:c.instructions+=3;goto B5df099;
case 0x5df09c:c.instructions+=2;goto B5df09c;
case 0x5df09e:c.instructions+=1;goto B5df09e;
case 0x5df0a0:goto L5df0a0;
case 0x5df0a1:goto L5df0a1;
case 0x5df0a2:c.instructions+=3;goto B5df0a2;
case 0x5df0a3:c.instructions+=2;goto B5df0a3;
case 0x5df0a4:c.instructions+=1;goto B5df0a4;
case 0x5df0b0:goto L5df0b0;
case 0x5df0b1:c.instructions+=13;goto B5df0b1;
case 0x5df0b5:c.instructions+=12;goto B5df0b5;
case 0x5df0b6:c.instructions+=11;goto B5df0b6;
case 0x5df0bd:c.instructions+=10;goto B5df0bd;
case 0x5df0c2:c.instructions+=9;goto B5df0c2;
case 0x5df0c9:c.instructions+=8;goto B5df0c9;
case 0x5df0cc:c.instructions+=7;goto B5df0cc;
case 0x5df0ce:c.instructions+=6;goto B5df0ce;
case 0x5df0d1:c.instructions+=5;goto B5df0d1;
case 0x5df0d2:c.instructions+=4;goto B5df0d2;
case 0x5df0d3:c.instructions+=3;goto B5df0d3;
case 0x5df0d4:c.instructions+=2;goto B5df0d4;
case 0x5df0d7:c.instructions+=1;goto B5df0d7;
case 0x5df0dc:goto L5df0dc;
case 0x5df0e3:c.instructions+=8;goto B5df0e3;
case 0x5df0e6:c.instructions+=7;goto B5df0e6;
case 0x5df0e9:c.instructions+=6;goto B5df0e9;
case 0x5df0ea:c.instructions+=5;goto B5df0ea;
case 0x5df0ed:c.instructions+=4;goto B5df0ed;
case 0x5df0ee:c.instructions+=3;goto B5df0ee;
case 0x5df0f0:c.instructions+=2;goto B5df0f0;
case 0x5df0f7:c.instructions+=1;goto B5df0f7;
case 0x5df0fc:goto L5df0fc;
case 0x5df0fd:c.instructions+=2;goto B5df0fd;
case 0x5df0fe:c.instructions+=1;goto B5df0fe;
case 0x5df110:goto L5df110;
case 0x5df114:c.instructions+=3;goto B5df114;
case 0x5df115:c.instructions+=2;goto B5df115;
case 0x5df11a:c.instructions+=1;goto B5df11a;
case 0x5df11f:goto L5df11f;
case 0x5df120:goto L5df120;
case 0x5df121:c.instructions+=12;goto B5df121;
case 0x5df123:c.instructions+=11;goto B5df123;
case 0x5df129:c.instructions+=10;goto B5df129;
case 0x5df12f:c.instructions+=9;goto B5df12f;
case 0x5df130:c.instructions+=8;goto B5df130;
case 0x5df134:c.instructions+=7;goto B5df134;
case 0x5df137:c.instructions+=6;goto B5df137;
case 0x5df139:c.instructions+=5;goto B5df139;
case 0x5df13f:c.instructions+=4;goto B5df13f;
case 0x5df146:c.instructions+=3;goto B5df146;
case 0x5df14c:c.instructions+=2;goto B5df14c;
case 0x5df150:c.instructions+=1;goto B5df150;
case 0x5df152:goto L5df152;
case 0x5df153:c.instructions+=2;goto B5df153;
case 0x5df155:c.instructions+=1;goto B5df155;
case 0x5df15a:goto L5df15a;
case 0x5df15e:c.instructions+=1;goto B5df15e;
case 0x5df160:goto L5df160;
case 0x5df161:c.instructions+=2;goto B5df161;
case 0x5df163:c.instructions+=1;goto B5df163;
case 0x5df168:goto L5df168;
case 0x5df16a:c.instructions+=4;goto B5df16a;
case 0x5df170:c.instructions+=3;goto B5df170;
case 0x5df173:c.instructions+=2;goto B5df173;
case 0x5df175:c.instructions+=1;goto B5df175;
case 0x5df177:goto L5df177;
case 0x5df17a:c.instructions+=4;goto B5df17a;
case 0x5df17d:c.instructions+=3;goto B5df17d;
case 0x5df17e:c.instructions+=2;goto B5df17e;
case 0x5df180:c.instructions+=1;goto B5df180;
case 0x5df182:goto L5df182;
case 0x5df188:c.instructions+=3;goto B5df188;
case 0x5df189:c.instructions+=2;goto B5df189;
case 0x5df18b:c.instructions+=1;goto B5df18b;
case 0x5df18d:goto L5df18d;
case 0x5df194:goto L5df194;
case 0x5df197:c.instructions+=7;goto B5df197;
case 0x5df199:c.instructions+=6;goto B5df199;
case 0x5df19f:c.instructions+=5;goto B5df19f;
case 0x5df1a0:c.instructions+=4;goto B5df1a0;
case 0x5df1a3:c.instructions+=3;goto B5df1a3;
case 0x5df1a4:c.instructions+=2;goto B5df1a4;
case 0x5df1a6:c.instructions+=1;goto B5df1a6;
case 0x5df1a8:goto L5df1a8;
case 0x5df1ae:c.instructions+=5;goto B5df1ae;
case 0x5df1af:c.instructions+=4;goto B5df1af;
case 0x5df1b0:c.instructions+=3;goto B5df1b0;
case 0x5df1b6:c.instructions+=2;goto B5df1b6;
case 0x5df1b7:c.instructions+=1;goto B5df1b7;
case 0x5df1c0:goto L5df1c0;
case 0x5df1c3:c.instructions+=8;goto B5df1c3;
case 0x5df1c4:c.instructions+=7;goto B5df1c4;
case 0x5df1c5:c.instructions+=6;goto B5df1c5;
case 0x5df1c6:c.instructions+=5;goto B5df1c6;
case 0x5df1c8:c.instructions+=4;goto B5df1c8;
case 0x5df1c9:c.instructions+=3;goto B5df1c9;
case 0x5df1cb:c.instructions+=2;goto B5df1cb;
case 0x5df1cf:c.instructions+=1;goto B5df1cf;
case 0x5df1d0:goto L5df1d0;
case 0x5df1d3:c.instructions+=3;goto B5df1d3;
case 0x5df1d5:c.instructions+=2;goto B5df1d5;
case 0x5df1d7:c.instructions+=1;goto B5df1d7;
case 0x5df1d9:goto L5df1d9;
case 0x5df1db:c.instructions+=2;goto B5df1db;
case 0x5df1de:c.instructions+=1;goto B5df1de;
case 0x5df1e0:goto L5df1e0;
case 0x5df1e4:c.instructions+=1;goto B5df1e4;
case 0x5df1e6:goto L5df1e6;
case 0x5df1e9:c.instructions+=2;goto B5df1e9;
case 0x5df1eb:c.instructions+=1;goto B5df1eb;
case 0x5df1ed:goto L5df1ed;
case 0x5df1ef:c.instructions+=1;goto B5df1ef;
case 0x5df1f1:goto L5df1f1;
case 0x5df1f4:c.instructions+=2;goto B5df1f4;
case 0x5df1f7:c.instructions+=1;goto B5df1f7;
case 0x5df1f9:goto L5df1f9;
case 0x5df1fb:goto L5df1fb;
case 0x5df1fe:c.instructions+=2;goto B5df1fe;
case 0x5df1ff:c.instructions+=1;goto B5df1ff;
case 0x5df201:goto L5df201;
case 0x5df203:c.instructions+=1;goto B5df203;
case 0x5df205:goto L5df205;
case 0x5df206:c.instructions+=2;goto B5df206;
case 0x5df208:c.instructions+=1;goto B5df208;
case 0x5df20d:goto L5df20d;
case 0x5df210:c.instructions+=1;goto B5df210;
case 0x5df212:goto L5df212;
case 0x5df215:c.instructions+=2;goto B5df215;
case 0x5df21a:c.instructions+=1;goto B5df21a;
case 0x5df220:goto L5df220;
case 0x5df222:c.instructions+=1;goto B5df222;
case 0x5df227:goto L5df227;
case 0x5df22b:c.instructions+=3;goto B5df22b;
case 0x5df22c:c.instructions+=2;goto B5df22c;
case 0x5df22e:c.instructions+=1;goto B5df22e;
case 0x5df233:goto L5df233;
case 0x5df235:c.instructions+=2;goto B5df235;
case 0x5df237:c.instructions+=1;goto B5df237;
case 0x5df23d:goto L5df23d;
case 0x5df245:c.instructions+=1;goto B5df245;
case 0x5df24b:goto L5df24b;
case 0x5df24f:c.instructions+=1;goto B5df24f;
case 0x5df255:goto L5df255;
case 0x5df257:c.instructions+=1;goto B5df257;
case 0x5df25c:goto L5df25c;
case 0x5df25f:c.instructions+=3;goto B5df25f;
case 0x5df261:c.instructions+=2;goto B5df261;
case 0x5df263:c.instructions+=1;goto B5df263;
case 0x5df265:goto L5df265;
case 0x5df267:c.instructions+=2;goto B5df267;
case 0x5df26a:c.instructions+=1;goto B5df26a;
case 0x5df270:goto L5df270;
case 0x5df274:c.instructions+=1;goto B5df274;
case 0x5df276:goto L5df276;
case 0x5df279:c.instructions+=2;goto B5df279;
case 0x5df27b:c.instructions+=1;goto B5df27b;
case 0x5df27d:goto L5df27d;
case 0x5df27f:c.instructions+=1;goto B5df27f;
case 0x5df281:goto L5df281;
case 0x5df284:c.instructions+=2;goto B5df284;
case 0x5df287:c.instructions+=1;goto B5df287;
case 0x5df289:goto L5df289;
case 0x5df28b:goto L5df28b;
case 0x5df28e:c.instructions+=2;goto B5df28e;
case 0x5df28f:c.instructions+=1;goto B5df28f;
case 0x5df291:goto L5df291;
case 0x5df293:c.instructions+=1;goto B5df293;
case 0x5df295:goto L5df295;
case 0x5df297:c.instructions+=1;goto B5df297;
case 0x5df299:goto L5df299;
case 0x5df29a:c.instructions+=2;goto B5df29a;
case 0x5df29c:c.instructions+=1;goto B5df29c;
case 0x5df2a1:goto L5df2a1;
case 0x5df2a4:goto L5df2a4;
case 0x5df2a8:c.instructions+=4;goto B5df2a8;
case 0x5df2aa:c.instructions+=3;goto B5df2aa;
case 0x5df2ac:c.instructions+=2;goto B5df2ac;
case 0x5df2b0:c.instructions+=1;goto B5df2b0;
case 0x5df2b6:goto L5df2b6;
case 0x5df2b7:c.instructions+=1;goto B5df2b7;
case 0x5df2bc:goto L5df2bc;
case 0x5df2c0:c.instructions+=4;goto B5df2c0;
case 0x5df2c6:c.instructions+=3;goto B5df2c6;
case 0x5df2c9:c.instructions+=2;goto B5df2c9;
case 0x5df2cb:c.instructions+=1;goto B5df2cb;
case 0x5df2cd:goto L5df2cd;
case 0x5df2d0:goto L5df2d0;
case 0x5df2d2:c.instructions+=3;goto B5df2d2;
case 0x5df2d4:c.instructions+=2;goto B5df2d4;
case 0x5df2da:c.instructions+=1;goto B5df2da;
case 0x5df2df:goto L5df2df;
case 0x5df2e1:c.instructions+=1;goto B5df2e1;
case 0x5df2e3:goto L5df2e3;
case 0x5df2e4:c.instructions+=2;goto B5df2e4;
case 0x5df2e6:c.instructions+=1;goto B5df2e6;
case 0x5df2eb:goto L5df2eb;
case 0x5df2ef:c.instructions+=3;goto B5df2ef;
case 0x5df2f0:c.instructions+=2;goto B5df2f0;
case 0x5df2f2:c.instructions+=1;goto B5df2f2;
case 0x5df2f7:goto L5df2f7;
case 0x5df2f9:c.instructions+=1;goto B5df2f9;
case 0x5df2fe:goto L5df2fe;
case 0x5df2ff:c.instructions+=1;goto B5df2ff;
case 0x5df304:goto L5df304;
case 0x5df308:c.instructions+=4;goto B5df308;
case 0x5df30e:c.instructions+=3;goto B5df30e;
case 0x5df311:c.instructions+=2;goto B5df311;
case 0x5df313:c.instructions+=1;goto B5df313;
case 0x5df315:goto L5df315;
case 0x5df317:c.instructions+=3;goto B5df317;
case 0x5df319:c.instructions+=2;goto B5df319;
case 0x5df31f:c.instructions+=1;goto B5df31f;
case 0x5df324:goto L5df324;
case 0x5df326:c.instructions+=2;goto B5df326;
case 0x5df328:c.instructions+=1;goto B5df328;
case 0x5df32a:goto L5df32a;
case 0x5df32b:c.instructions+=1;goto B5df32b;
case 0x5df330:goto L5df330;
case 0x5df335:goto L5df335;
case 0x5df336:c.instructions+=6;goto B5df336;
case 0x5df337:c.instructions+=5;goto B5df337;
case 0x5df338:c.instructions+=4;goto B5df338;
case 0x5df33a:c.instructions+=3;goto B5df33a;
case 0x5df33b:c.instructions+=2;goto B5df33b;
case 0x5df33e:c.instructions+=1;goto B5df33e;
case 0x5df33f:goto L5df33f;
case 0x5df343:c.instructions+=2;goto B5df343;
case 0x5df344:c.instructions+=1;goto B5df344;
case 0x5df349:goto L5df349;
case 0x5df34f:c.instructions+=4;goto B5df34f;
case 0x5df350:c.instructions+=3;goto B5df350;
case 0x5df352:c.instructions+=2;goto B5df352;
case 0x5df35c:c.instructions+=1;goto B5df35c;
case 0x5df361:goto L5df361;
case 0x5df364:c.instructions+=4;goto B5df364;
case 0x5df367:c.instructions+=3;goto B5df367;
case 0x5df369:c.instructions+=2;goto B5df369;
case 0x5df36b:c.instructions+=1;goto B5df36b;
case 0x5df36d:goto L5df36d;
case 0x5df36f:c.instructions+=2;goto B5df36f;
case 0x5df372:c.instructions+=1;goto B5df372;
case 0x5df375:goto L5df375;
case 0x5df379:c.instructions+=1;goto B5df379;
case 0x5df37b:goto L5df37b;
case 0x5df37e:c.instructions+=1;goto B5df37e;
case 0x5df380:goto L5df380;
case 0x5df383:goto L5df383;
case 0x5df386:c.instructions+=2;goto B5df386;
case 0x5df387:c.instructions+=1;goto B5df387;
case 0x5df389:goto L5df389;
case 0x5df38a:c.instructions+=7;goto B5df38a;
case 0x5df390:c.instructions+=6;goto B5df390;
case 0x5df391:c.instructions+=5;goto B5df391;
case 0x5df392:c.instructions+=4;goto B5df392;
case 0x5df394:c.instructions+=3;goto B5df394;
case 0x5df395:c.instructions+=2;goto B5df395;
case 0x5df398:c.instructions+=1;goto B5df398;
case 0x5df3a0:goto L5df3a0;
case 0x5df3a3:c.instructions+=7;goto B5df3a3;
case 0x5df3a4:c.instructions+=6;goto B5df3a4;
case 0x5df3a8:c.instructions+=5;goto B5df3a8;
case 0x5df3ab:c.instructions+=4;goto B5df3ab;
case 0x5df3b1:c.instructions+=3;goto B5df3b1;
case 0x5df3b3:c.instructions+=2;goto B5df3b3;
case 0x5df3b6:c.instructions+=1;goto B5df3b6;
case 0x5df3b8:goto L5df3b8;
case 0x5df3ba:c.instructions+=3;goto B5df3ba;
case 0x5df3bb:c.instructions+=2;goto B5df3bb;
case 0x5df3be:c.instructions+=1;goto B5df3be;
case 0x5df3c1:goto L5df3c1;
case 0x5df3c5:c.instructions+=17;goto B5df3c5;
case 0x5df3c8:c.instructions+=16;goto B5df3c8;
case 0x5df3c9:c.instructions+=15;goto B5df3c9;
case 0x5df3cc:c.instructions+=14;goto B5df3cc;
case 0x5df3cf:c.instructions+=13;goto B5df3cf;
case 0x5df3d1:c.instructions+=12;goto B5df3d1;
case 0x5df3d3:c.instructions+=11;goto B5df3d3;
case 0x5df3d5:c.instructions+=10;goto B5df3d5;
case 0x5df3d7:c.instructions+=9;goto B5df3d7;
case 0x5df3d9:c.instructions+=8;goto B5df3d9;
case 0x5df3db:c.instructions+=7;goto B5df3db;
case 0x5df3dd:c.instructions+=6;goto B5df3dd;
case 0x5df3df:c.instructions+=5;goto B5df3df;
case 0x5df3e3:c.instructions+=4;goto B5df3e3;
case 0x5df3e9:c.instructions+=3;goto B5df3e9;
case 0x5df3eb:c.instructions+=2;goto B5df3eb;
case 0x5df3ee:c.instructions+=1;goto B5df3ee;
case 0x5df3f4:goto L5df3f4;
case 0x5df3fa:c.instructions+=19;goto B5df3fa;
case 0x5df3fb:c.instructions+=18;goto B5df3fb;
case 0x5df3fd:c.instructions+=17;goto B5df3fd;
case 0x5df402:c.instructions+=16;goto B5df402;
case 0x5df405:c.instructions+=15;goto B5df405;
case 0x5df40b:c.instructions+=14;goto B5df40b;
case 0x5df40d:c.instructions+=13;goto B5df40d;
case 0x5df410:c.instructions+=12;goto B5df410;
case 0x5df414:c.instructions+=11;goto B5df414;
case 0x5df417:c.instructions+=10;goto B5df417;
case 0x5df41b:c.instructions+=9;goto B5df41b;
case 0x5df41d:c.instructions+=8;goto B5df41d;
case 0x5df41e:c.instructions+=7;goto B5df41e;
case 0x5df420:c.instructions+=6;goto B5df420;
case 0x5df425:c.instructions+=5;goto B5df425;
case 0x5df427:c.instructions+=4;goto B5df427;
case 0x5df42b:c.instructions+=3;goto B5df42b;
case 0x5df42d:c.instructions+=2;goto B5df42d;
case 0x5df42f:c.instructions+=1;goto B5df42f;
case 0x5df431:goto L5df431;
case 0x5df434:c.instructions+=2;goto B5df434;
case 0x5df436:c.instructions+=1;goto B5df436;
case 0x5df438:goto L5df438;
case 0x5df43a:goto L5df43a;
case 0x5df43b:c.instructions+=2;goto B5df43b;
case 0x5df440:c.instructions+=1;goto B5df440;
case 0x5df445:goto L5df445;
case 0x5df447:c.instructions+=2;goto B5df447;
case 0x5df448:c.instructions+=1;goto B5df448;
case 0x5df44e:goto L5df44e;
case 0x5df453:c.instructions+=4;goto B5df453;
case 0x5df457:c.instructions+=3;goto B5df457;
case 0x5df458:c.instructions+=2;goto B5df458;
case 0x5df45a:c.instructions+=1;goto B5df45a;
case 0x5df45f:goto L5df45f;
case 0x5df463:c.instructions+=4;goto B5df463;
case 0x5df467:c.instructions+=3;goto B5df467;
case 0x5df468:c.instructions+=2;goto B5df468;
case 0x5df469:c.instructions+=1;goto B5df469;
case 0x5df46e:goto L5df46e;
case 0x5df471:c.instructions+=10;goto B5df471;
case 0x5df475:c.instructions+=9;goto B5df475;
case 0x5df479:c.instructions+=8;goto B5df479;
case 0x5df47a:c.instructions+=7;goto B5df47a;
case 0x5df47e:c.instructions+=6;goto B5df47e;
case 0x5df482:c.instructions+=5;goto B5df482;
case 0x5df485:c.instructions+=4;goto B5df485;
case 0x5df486:c.instructions+=3;goto B5df486;
case 0x5df48a:c.instructions+=2;goto B5df48a;
case 0x5df48e:c.instructions+=1;goto B5df48e;
case 0x5df493:goto L5df493;
case 0x5df496:c.instructions+=17;goto B5df496;
case 0x5df498:c.instructions+=16;goto B5df498;
case 0x5df49c:c.instructions+=15;goto B5df49c;
case 0x5df4a0:c.instructions+=14;goto B5df4a0;
case 0x5df4a4:c.instructions+=13;goto B5df4a4;
case 0x5df4a6:c.instructions+=12;goto B5df4a6;
case 0x5df4a9:c.instructions+=11;goto B5df4a9;
case 0x5df4ad:c.instructions+=10;goto B5df4ad;
case 0x5df4b1:c.instructions+=9;goto B5df4b1;
case 0x5df4b3:c.instructions+=8;goto B5df4b3;
case 0x5df4b7:c.instructions+=7;goto B5df4b7;
case 0x5df4b9:c.instructions+=6;goto B5df4b9;
case 0x5df4bd:c.instructions+=5;goto B5df4bd;
case 0x5df4c3:c.instructions+=4;goto B5df4c3;
case 0x5df4c9:c.instructions+=3;goto B5df4c9;
case 0x5df4cb:c.instructions+=2;goto B5df4cb;
case 0x5df4ce:c.instructions+=1;goto B5df4ce;
case 0x5df4d0:goto L5df4d0;
case 0x5df4d4:c.instructions+=1;goto B5df4d4;
case 0x5df4d6:goto L5df4d6;
case 0x5df4d8:c.instructions+=1;goto B5df4d8;
case 0x5df4e0:goto L5df4e0;
case 0x5df4e4:c.instructions+=2;goto B5df4e4;
case 0x5df4e5:c.instructions+=1;goto B5df4e5;
case 0x5df4ea:goto L5df4ea;
case 0x5df4f0:c.instructions+=13;goto B5df4f0;
case 0x5df4f5:c.instructions+=12;goto B5df4f5;
case 0x5df4f8:c.instructions+=11;goto B5df4f8;
case 0x5df4f9:c.instructions+=10;goto B5df4f9;
case 0x5df4fb:c.instructions+=9;goto B5df4fb;
case 0x5df500:c.instructions+=8;goto B5df500;
case 0x5df503:c.instructions+=7;goto B5df503;
case 0x5df507:c.instructions+=6;goto B5df507;
case 0x5df508:c.instructions+=5;goto B5df508;
case 0x5df509:c.instructions+=4;goto B5df509;
case 0x5df50d:c.instructions+=3;goto B5df50d;
case 0x5df513:c.instructions+=2;goto B5df513;
case 0x5df516:c.instructions+=1;goto B5df516;
case 0x5df51b:goto L5df51b;
case 0x5df521:c.instructions+=12;goto B5df521;
case 0x5df527:c.instructions+=11;goto B5df527;
case 0x5df52a:c.instructions+=10;goto B5df52a;
case 0x5df530:c.instructions+=9;goto B5df530;
case 0x5df532:c.instructions+=8;goto B5df532;
case 0x5df536:c.instructions+=7;goto B5df536;
case 0x5df53c:c.instructions+=6;goto B5df53c;
case 0x5df542:c.instructions+=5;goto B5df542;
case 0x5df544:c.instructions+=4;goto B5df544;
case 0x5df54a:c.instructions+=3;goto B5df54a;
case 0x5df54e:c.instructions+=2;goto B5df54e;
case 0x5df554:c.instructions+=1;goto B5df554;
case 0x5df559:goto L5df559;
case 0x5df55b:c.instructions+=1;goto B5df55b;
case 0x5df55d:goto L5df55d;
case 0x5df55e:c.instructions+=4;goto B5df55e;
case 0x5df560:c.instructions+=3;goto B5df560;
case 0x5df561:c.instructions+=2;goto B5df561;
case 0x5df564:c.instructions+=1;goto B5df564;
case 0x5df567:goto L5df567;
case 0x5df56a:c.instructions+=1;goto B5df56a;
case 0x5df56c:goto L5df56c;
case 0x5df571:goto L5df571;
case 0x5df572:c.instructions+=3;goto B5df572;
case 0x5df573:c.instructions+=2;goto B5df573;
case 0x5df576:c.instructions+=1;goto B5df576;
case 0x5df580:goto L5df580;
case 0x5df583:c.instructions+=6;goto B5df583;
case 0x5df585:c.instructions+=5;goto B5df585;
case 0x5df58b:c.instructions+=4;goto B5df58b;
case 0x5df58d:c.instructions+=3;goto B5df58d;
case 0x5df591:c.instructions+=2;goto B5df591;
case 0x5df599:c.instructions+=1;goto B5df599;
case 0x5df59f:goto L5df59f;
case 0x5df5a0:c.instructions+=6;goto B5df5a0;
case 0x5df5a1:c.instructions+=5;goto B5df5a1;
case 0x5df5a7:c.instructions+=4;goto B5df5a7;
case 0x5df5a8:c.instructions+=3;goto B5df5a8;
case 0x5df5ac:c.instructions+=2;goto B5df5ac;
case 0x5df5ad:c.instructions+=1;goto B5df5ad;
case 0x5df5b0:goto L5df5b0;
case 0x5df5b4:c.instructions+=4;goto B5df5b4;
case 0x5df5b6:c.instructions+=3;goto B5df5b6;
case 0x5df5bb:c.instructions+=2;goto B5df5bb;
case 0x5df5bd:c.instructions+=1;goto B5df5bd;
case 0x5df5c3:goto L5df5c3;
case 0x5df5c5:c.instructions+=5;goto B5df5c5;
case 0x5df5ca:c.instructions+=4;goto B5df5ca;
case 0x5df5cc:c.instructions+=3;goto B5df5cc;
case 0x5df5d0:c.instructions+=2;goto B5df5d0;
case 0x5df5d2:c.instructions+=1;goto B5df5d2;
case 0x5df5d4:goto L5df5d4;
case 0x5df5d5:c.instructions+=3;goto B5df5d5;
case 0x5df5d6:c.instructions+=2;goto B5df5d6;
case 0x5df5d8:c.instructions+=1;goto B5df5d8;
case 0x5df5dd:goto L5df5dd;
case 0x5df5df:c.instructions+=1;goto B5df5df;
case 0x5df5e1:goto L5df5e1;
case 0x5df5e3:goto L5df5e3;
case 0x5df5e7:goto L5df5e7;
case 0x5df5e8:c.instructions+=3;goto B5df5e8;
case 0x5df5eb:c.instructions+=2;goto B5df5eb;
case 0x5df5ee:c.instructions+=1;goto B5df5ee;
case 0x5df5f0:goto L5df5f0;
case 0x5df5f3:c.instructions+=12;goto B5df5f3;
case 0x5df5f9:c.instructions+=11;goto B5df5f9;
case 0x5df5fd:c.instructions+=10;goto B5df5fd;
case 0x5df5ff:c.instructions+=9;goto B5df5ff;
case 0x5df602:c.instructions+=8;goto B5df602;
case 0x5df606:c.instructions+=7;goto B5df606;
case 0x5df60c:c.instructions+=6;goto B5df60c;
case 0x5df60d:c.instructions+=5;goto B5df60d;
case 0x5df610:c.instructions+=4;goto B5df610;
case 0x5df612:c.instructions+=3;goto B5df612;
case 0x5df616:c.instructions+=2;goto B5df616;
case 0x5df61a:c.instructions+=1;goto B5df61a;
case 0x5df61c:goto L5df61c;
case 0x5df61d:c.instructions+=3;goto B5df61d;
case 0x5df61e:c.instructions+=2;goto B5df61e;
case 0x5df61f:c.instructions+=1;goto B5df61f;
case 0x5df620:goto L5df620;
case 0x5df623:c.instructions+=1;goto B5df623;
case 0x5df630:goto L5df630;
case 0x5df634:c.instructions+=10;goto B5df634;
case 0x5df638:c.instructions+=9;goto B5df638;
case 0x5df63b:c.instructions+=8;goto B5df63b;
case 0x5df63d:c.instructions+=7;goto B5df63d;
case 0x5df63e:c.instructions+=6;goto B5df63e;
case 0x5df63f:c.instructions+=5;goto B5df63f;
case 0x5df644:c.instructions+=4;goto B5df644;
case 0x5df646:c.instructions+=3;goto B5df646;
case 0x5df64b:c.instructions+=2;goto B5df64b;
case 0x5df64d:c.instructions+=1;goto B5df64d;
case 0x5df64f:goto L5df64f;
case 0x5df652:c.instructions+=2;goto B5df652;
case 0x5df654:c.instructions+=1;goto B5df654;
case 0x5df656:goto L5df656;
case 0x5df658:goto L5df658;
case 0x5df659:c.instructions+=2;goto B5df659;
case 0x5df65e:c.instructions+=1;goto B5df65e;
case 0x5df663:goto L5df663;
case 0x5df665:c.instructions+=2;goto B5df665;
case 0x5df667:c.instructions+=1;goto B5df667;
case 0x5df669:goto L5df669;
case 0x5df66d:c.instructions+=16;goto B5df66d;
case 0x5df670:c.instructions+=15;goto B5df670;
case 0x5df673:c.instructions+=14;goto B5df673;
case 0x5df679:c.instructions+=13;goto B5df679;
case 0x5df67e:c.instructions+=12;goto B5df67e;
case 0x5df681:c.instructions+=11;goto B5df681;
case 0x5df682:c.instructions+=10;goto B5df682;
case 0x5df688:c.instructions+=9;goto B5df688;
case 0x5df68a:c.instructions+=8;goto B5df68a;
case 0x5df68c:c.instructions+=7;goto B5df68c;
case 0x5df68e:c.instructions+=6;goto B5df68e;
case 0x5df692:c.instructions+=5;goto B5df692;
case 0x5df695:c.instructions+=4;goto B5df695;
case 0x5df697:c.instructions+=3;goto B5df697;
case 0x5df69b:c.instructions+=2;goto B5df69b;
case 0x5df69d:c.instructions+=1;goto B5df69d;
case 0x5df6a2:goto L5df6a2;
case 0x5df6a7:c.instructions+=5;goto B5df6a7;
case 0x5df6ab:c.instructions+=4;goto B5df6ab;
case 0x5df6af:c.instructions+=3;goto B5df6af;
case 0x5df6b0:c.instructions+=2;goto B5df6b0;
case 0x5df6b2:c.instructions+=1;goto B5df6b2;
case 0x5df6b7:goto L5df6b7;
case 0x5df6bb:c.instructions+=3;goto B5df6bb;
case 0x5df6bd:c.instructions+=2;goto B5df6bd;
case 0x5df6c0:c.instructions+=1;goto B5df6c0;
case 0x5df6c2:goto L5df6c2;
case 0x5df6c4:c.instructions+=5;goto B5df6c4;
case 0x5df6c8:c.instructions+=4;goto B5df6c8;
case 0x5df6ce:c.instructions+=3;goto B5df6ce;
case 0x5df6d0:c.instructions+=2;goto B5df6d0;
case 0x5df6d3:c.instructions+=1;goto B5df6d3;
case 0x5df6d5:goto L5df6d5;
case 0x5df6db:c.instructions+=3;goto B5df6db;
case 0x5df6dc:c.instructions+=2;goto B5df6dc;
case 0x5df6df:c.instructions+=1;goto B5df6df;
case 0x5df6e2:goto L5df6e2;
case 0x5df6e8:c.instructions+=3;goto B5df6e8;
case 0x5df6e9:c.instructions+=2;goto B5df6e9;
case 0x5df6ec:c.instructions+=1;goto B5df6ec;
case 0x5df6ef:goto L5df6ef;
case 0x5df6f3:c.instructions+=6;goto B5df6f3;
case 0x5df6f7:c.instructions+=5;goto B5df6f7;
case 0x5df6fd:c.instructions+=4;goto B5df6fd;
case 0x5df703:c.instructions+=3;goto B5df703;
case 0x5df705:c.instructions+=2;goto B5df705;
case 0x5df708:c.instructions+=1;goto B5df708;
case 0x5df70a:goto L5df70a;
case 0x5df70c:c.instructions+=1;goto B5df70c;
case 0x5df712:goto L5df712;
case 0x5df713:c.instructions+=2;goto B5df713;
case 0x5df716:c.instructions+=1;goto B5df716;
case 0x5df720:goto L5df720;
case 0x5df723:c.instructions+=9;goto B5df723;
case 0x5df724:c.instructions+=8;goto B5df724;
case 0x5df726:c.instructions+=7;goto B5df726;
case 0x5df72c:c.instructions+=6;goto B5df72c;
case 0x5df72e:c.instructions+=5;goto B5df72e;
case 0x5df730:c.instructions+=4;goto B5df730;
case 0x5df738:c.instructions+=3;goto B5df738;
case 0x5df73c:c.instructions+=2;goto B5df73c;
case 0x5df740:c.instructions+=1;goto B5df740;
case 0x5df746:goto L5df746;
case 0x5df747:c.instructions+=4;goto B5df747;
case 0x5df74d:c.instructions+=3;goto B5df74d;
case 0x5df74e:c.instructions+=2;goto B5df74e;
case 0x5df752:c.instructions+=1;goto B5df752;
case 0x5df753:goto L5df753;
case 0x5df757:c.instructions+=8;goto B5df757;
case 0x5df759:c.instructions+=7;goto B5df759;
case 0x5df75d:c.instructions+=6;goto B5df75d;
case 0x5df75e:c.instructions+=5;goto B5df75e;
case 0x5df763:c.instructions+=4;goto B5df763;
case 0x5df765:c.instructions+=3;goto B5df765;
case 0x5df767:c.instructions+=2;goto B5df767;
case 0x5df769:c.instructions+=1;goto B5df769;
case 0x5df76b:goto L5df76b;
case 0x5df76d:c.instructions+=1;goto B5df76d;
case 0x5df76f:goto L5df76f;
case 0x5df774:c.instructions+=2;goto B5df774;
case 0x5df776:c.instructions+=1;goto B5df776;
case 0x5df778:goto L5df778;
case 0x5df77a:c.instructions+=2;goto B5df77a;
case 0x5df77c:c.instructions+=1;goto B5df77c;
case 0x5df77e:goto L5df77e;
case 0x5df781:c.instructions+=2;goto B5df781;
case 0x5df784:c.instructions+=1;goto B5df784;
case 0x5df786:goto L5df786;
case 0x5df789:c.instructions+=1;goto B5df789;
case 0x5df78b:goto L5df78b;
case 0x5df791:c.instructions+=1;goto B5df791;
case 0x5df796:goto L5df796;
case 0x5df799:c.instructions+=1;goto B5df799;
case 0x5df79b:goto L5df79b;
case 0x5df79c:c.instructions+=3;goto B5df79c;
case 0x5df79d:c.instructions+=2;goto B5df79d;
case 0x5df79f:c.instructions+=1;goto B5df79f;
case 0x5df7a4:goto L5df7a4;
case 0x5df7a8:c.instructions+=3;goto B5df7a8;
case 0x5df7aa:c.instructions+=2;goto B5df7aa;
case 0x5df7ad:c.instructions+=1;goto B5df7ad;
case 0x5df7af:goto L5df7af;
case 0x5df7b3:c.instructions+=2;goto B5df7b3;
case 0x5df7b7:c.instructions+=1;goto B5df7b7;
case 0x5df7b9:goto L5df7b9;
case 0x5df7bb:goto L5df7bb;
case 0x5df7be:c.instructions+=2;goto B5df7be;
case 0x5df7bf:c.instructions+=1;goto B5df7bf;
case 0x5df7c1:goto L5df7c1;
case 0x5df7c5:c.instructions+=8;goto B5df7c5;
case 0x5df7c9:c.instructions+=7;goto B5df7c9;
case 0x5df7cf:c.instructions+=6;goto B5df7cf;
case 0x5df7d0:c.instructions+=5;goto B5df7d0;
case 0x5df7d3:c.instructions+=4;goto B5df7d3;
case 0x5df7d5:c.instructions+=3;goto B5df7d5;
case 0x5df7d9:c.instructions+=2;goto B5df7d9;
case 0x5df7dd:c.instructions+=1;goto B5df7dd;
case 0x5df7e3:goto L5df7e3;
case 0x5df7e7:c.instructions+=9;goto B5df7e7;
case 0x5df7eb:c.instructions+=8;goto B5df7eb;
case 0x5df7ef:c.instructions+=7;goto B5df7ef;
case 0x5df7f0:c.instructions+=6;goto B5df7f0;
case 0x5df7f1:c.instructions+=5;goto B5df7f1;
case 0x5df7f2:c.instructions+=4;goto B5df7f2;
case 0x5df7f4:c.instructions+=3;goto B5df7f4;
case 0x5df7f5:c.instructions+=2;goto B5df7f5;
case 0x5df7f8:c.instructions+=1;goto B5df7f8;
case 0x5df7fb:goto L5df7fb;
case 0x5df7ff:c.instructions+=5;goto B5df7ff;
case 0x5df803:c.instructions+=4;goto B5df803;
case 0x5df805:c.instructions+=3;goto B5df805;
case 0x5df806:c.instructions+=2;goto B5df806;
case 0x5df809:c.instructions+=1;goto B5df809;
case 0x5df810:goto L5df810;
case 0x5df811:c.instructions+=3;goto B5df811;
case 0x5df816:c.instructions+=2;goto B5df816;
case 0x5df818:c.instructions+=1;goto B5df818;
case 0x5df81a:goto L5df81a;
case 0x5df81e:c.instructions+=2;goto B5df81e;
case 0x5df81f:c.instructions+=1;goto B5df81f;
case 0x5df824:goto L5df824;
case 0x5df82a:c.instructions+=3;goto B5df82a;
case 0x5df82c:c.instructions+=2;goto B5df82c;
case 0x5df82f:c.instructions+=1;goto B5df82f;
case 0x5df831:goto L5df831;
case 0x5df835:c.instructions+=2;goto B5df835;
case 0x5df837:c.instructions+=1;goto B5df837;
case 0x5df839:goto L5df839;
case 0x5df83f:c.instructions+=6;goto B5df83f;
case 0x5df845:c.instructions+=5;goto B5df845;
case 0x5df847:c.instructions+=4;goto B5df847;
case 0x5df849:c.instructions+=3;goto B5df849;
case 0x5df84b:c.instructions+=2;goto B5df84b;
case 0x5df84e:c.instructions+=1;goto B5df84e;
case 0x5df850:goto L5df850;
case 0x5df856:c.instructions+=3;goto B5df856;
case 0x5df858:c.instructions+=2;goto B5df858;
case 0x5df85b:c.instructions+=1;goto B5df85b;
case 0x5df85d:goto L5df85d;
case 0x5df85f:c.instructions+=1;goto B5df85f;
case 0x5df864:goto L5df864;
case 0x5df865:c.instructions+=1;goto B5df865;
case 0x5df866:goto L5df866;
case 0x5df869:c.instructions+=1;goto B5df869;
case 0x5df86b:goto L5df86b;
case 0x5df86e:c.instructions+=2;goto B5df86e;
case 0x5df871:c.instructions+=1;goto B5df871;
case 0x5df873:goto L5df873;
case 0x5df876:c.instructions+=1;goto B5df876;
case 0x5df878:goto L5df878;
case 0x5df87e:c.instructions+=3;goto B5df87e;
case 0x5df880:c.instructions+=2;goto B5df880;
case 0x5df883:c.instructions+=1;goto B5df883;
case 0x5df885:goto L5df885;
case 0x5df887:c.instructions+=1;goto B5df887;
case 0x5df88c:goto L5df88c;
case 0x5df88d:c.instructions+=1;goto B5df88d;
case 0x5df88e:goto L5df88e;
case 0x5df890:goto L5df890;
case 0x5df891:c.instructions+=1;goto B5df891;
case 0x5df8a0:goto L5df8a0;
case 0x5df8a6:c.instructions+=9;goto B5df8a6;
case 0x5df8a8:c.instructions+=8;goto B5df8a8;
case 0x5df8ad:c.instructions+=7;goto B5df8ad;
case 0x5df8ae:c.instructions+=6;goto B5df8ae;
case 0x5df8b2:c.instructions+=5;goto B5df8b2;
case 0x5df8b9:c.instructions+=4;goto B5df8b9;
case 0x5df8bb:c.instructions+=3;goto B5df8bb;
case 0x5df8be:c.instructions+=2;goto B5df8be;
case 0x5df8c4:c.instructions+=1;goto B5df8c4;
case 0x5df8c6:goto L5df8c6;
case 0x5df8c9:c.instructions+=5;goto B5df8c9;
case 0x5df8cf:c.instructions+=4;goto B5df8cf;
case 0x5df8d2:c.instructions+=3;goto B5df8d2;
case 0x5df8d5:c.instructions+=2;goto B5df8d5;
case 0x5df8db:c.instructions+=1;goto B5df8db;
case 0x5df8e0:goto L5df8e0;
case 0x5df8e5:c.instructions+=4;goto B5df8e5;
case 0x5df8e9:c.instructions+=3;goto B5df8e9;
case 0x5df8f0:c.instructions+=2;goto B5df8f0;
case 0x5df8f3:c.instructions+=1;goto B5df8f3;
case 0x5df8f4:goto L5df8f4;
case 0x5df8fa:c.instructions+=1;goto B5df8fa;
case 0x5df900:goto L5df900;
case 0x5df903:c.instructions+=10;goto B5df903;
case 0x5df904:c.instructions+=9;goto B5df904;
case 0x5df905:c.instructions+=8;goto B5df905;
case 0x5df906:c.instructions+=7;goto B5df906;
case 0x5df907:c.instructions+=6;goto B5df907;
case 0x5df90a:c.instructions+=5;goto B5df90a;
case 0x5df90e:c.instructions+=4;goto B5df90e;
case 0x5df910:c.instructions+=3;goto B5df910;
case 0x5df912:c.instructions+=2;goto B5df912;
case 0x5df916:c.instructions+=1;goto B5df916;
case 0x5df91c:goto L5df91c;
case 0x5df920:goto L5df920;
case 0x5df922:c.instructions+=2;goto B5df922;
case 0x5df927:c.instructions+=1;goto B5df927;
case 0x5df929:goto L5df929;
case 0x5df92c:c.instructions+=5;goto B5df92c;
case 0x5df92f:c.instructions+=4;goto B5df92f;
case 0x5df932:c.instructions+=3;goto B5df932;
case 0x5df933:c.instructions+=2;goto B5df933;
case 0x5df938:c.instructions+=1;goto B5df938;
case 0x5df93d:goto L5df93d;
case 0x5df940:c.instructions+=10;goto B5df940;
case 0x5df943:c.instructions+=9;goto B5df943;
case 0x5df948:c.instructions+=8;goto B5df948;
case 0x5df94a:c.instructions+=7;goto B5df94a;
case 0x5df94d:c.instructions+=6;goto B5df94d;
case 0x5df94f:c.instructions+=5;goto B5df94f;
case 0x5df952:c.instructions+=4;goto B5df952;
case 0x5df954:c.instructions+=3;goto B5df954;
case 0x5df957:c.instructions+=2;goto B5df957;
case 0x5df95a:c.instructions+=1;goto B5df95a;
case 0x5df95c:goto L5df95c;
case 0x5df961:c.instructions+=5;goto B5df961;
case 0x5df967:c.instructions+=4;goto B5df967;
case 0x5df96a:c.instructions+=3;goto B5df96a;
case 0x5df971:c.instructions+=2;goto B5df971;
case 0x5df973:c.instructions+=1;goto B5df973;
case 0x5df978:goto L5df978;
case 0x5df97d:c.instructions+=5;goto B5df97d;
case 0x5df97f:c.instructions+=4;goto B5df97f;
case 0x5df985:c.instructions+=3;goto B5df985;
case 0x5df988:c.instructions+=2;goto B5df988;
case 0x5df98e:c.instructions+=1;goto B5df98e;
case 0x5df993:goto L5df993;
case 0x5df998:c.instructions+=1;goto B5df998;
case 0x5df99a:goto L5df99a;
case 0x5df99d:c.instructions+=7;goto B5df99d;
case 0x5df9a0:c.instructions+=6;goto B5df9a0;
case 0x5df9a3:c.instructions+=5;goto B5df9a3;
case 0x5df9a8:c.instructions+=4;goto B5df9a8;
case 0x5df9aa:c.instructions+=3;goto B5df9aa;
case 0x5df9ad:c.instructions+=2;goto B5df9ad;
case 0x5df9b0:c.instructions+=1;goto B5df9b0;
case 0x5df9b5:goto L5df9b5;
case 0x5df9ba:c.instructions+=1;goto B5df9ba;
case 0x5df9bc:goto L5df9bc;
case 0x5df9bf:c.instructions+=10;goto B5df9bf;
case 0x5df9c1:c.instructions+=9;goto B5df9c1;
case 0x5df9c4:c.instructions+=8;goto B5df9c4;
case 0x5df9c7:c.instructions+=7;goto B5df9c7;
case 0x5df9ca:c.instructions+=6;goto B5df9ca;
case 0x5df9cd:c.instructions+=5;goto B5df9cd;
case 0x5df9cf:c.instructions+=4;goto B5df9cf;
case 0x5df9d3:c.instructions+=3;goto B5df9d3;
case 0x5df9d6:c.instructions+=2;goto B5df9d6;
case 0x5df9d9:c.instructions+=1;goto B5df9d9;
case 0x5df9de:goto L5df9de;
case 0x5df9e3:c.instructions+=1;goto B5df9e3;
case 0x5df9e5:goto L5df9e5;
case 0x5df9e8:c.instructions+=7;goto B5df9e8;
case 0x5df9eb:c.instructions+=6;goto B5df9eb;
case 0x5df9ee:c.instructions+=5;goto B5df9ee;
case 0x5df9f3:c.instructions+=4;goto B5df9f3;
case 0x5df9f5:c.instructions+=3;goto B5df9f5;
case 0x5df9f8:c.instructions+=2;goto B5df9f8;
case 0x5df9fb:c.instructions+=1;goto B5df9fb;
case 0x5df9fd:goto L5df9fd;
case 0x5dfa02:c.instructions+=1;goto B5dfa02;
case 0x5dfa04:goto L5dfa04;
case 0x5dfa07:c.instructions+=2;goto B5dfa07;
case 0x5dfa09:c.instructions+=1;goto B5dfa09;
case 0x5dfa0b:goto L5dfa0b;
case 0x5dfa0e:c.instructions+=5;goto B5dfa0e;
case 0x5dfa11:c.instructions+=4;goto B5dfa11;
case 0x5dfa13:c.instructions+=3;goto B5dfa13;
case 0x5dfa15:c.instructions+=2;goto B5dfa15;
case 0x5dfa17:c.instructions+=1;goto B5dfa17;
case 0x5dfa19:goto L5dfa19;
case 0x5dfa20:goto L5dfa20;
case 0x5dfa25:c.instructions+=6;goto B5dfa25;
case 0x5dfa2b:c.instructions+=5;goto B5dfa2b;
case 0x5dfa30:c.instructions+=4;goto B5dfa30;
case 0x5dfa33:c.instructions+=3;goto B5dfa33;
case 0x5dfa37:c.instructions+=2;goto B5dfa37;
case 0x5dfa39:c.instructions+=1;goto B5dfa39;
case 0x5dfa3b:goto L5dfa3b;
case 0x5dfa3e:c.instructions+=3;goto B5dfa3e;
case 0x5dfa41:c.instructions+=2;goto B5dfa41;
case 0x5dfa43:c.instructions+=1;goto B5dfa43;
case 0x5dfa45:goto L5dfa45;
case 0x5dfa4a:goto L5dfa4a;
case 0x5dfa4b:c.instructions+=2;goto B5dfa4b;
case 0x5dfa4d:c.instructions+=1;goto B5dfa4d;
case 0x5dfa4f:goto L5dfa4f;
case 0x5dfa51:goto L5dfa51;
case 0x5dfa56:c.instructions+=1;goto B5dfa56;
case 0x5dfa58:goto L5dfa58;
case 0x5dfa5b:c.instructions+=4;goto B5dfa5b;
case 0x5dfa5e:c.instructions+=3;goto B5dfa5e;
case 0x5dfa61:c.instructions+=2;goto B5dfa61;
case 0x5dfa64:c.instructions+=1;goto B5dfa64;
case 0x5dfa67:goto L5dfa67;
case 0x5dfa6a:c.instructions+=4;goto B5dfa6a;
case 0x5dfa6e:c.instructions+=3;goto B5dfa6e;
case 0x5dfa72:c.instructions+=2;goto B5dfa72;
case 0x5dfa74:c.instructions+=1;goto B5dfa74;
case 0x5dfa7a:goto L5dfa7a;
case 0x5dfa7d:c.instructions+=4;goto B5dfa7d;
case 0x5dfa7f:c.instructions+=3;goto B5dfa7f;
case 0x5dfa81:c.instructions+=2;goto B5dfa81;
case 0x5dfa85:c.instructions+=1;goto B5dfa85;
case 0x5dfa8b:goto L5dfa8b;
case 0x5dfa8f:c.instructions+=1;goto B5dfa8f;
case 0x5dfa90:goto L5dfa90;
case 0x5dfa95:c.instructions+=2;goto B5dfa95;
case 0x5dfa97:c.instructions+=1;goto B5dfa97;
case 0x5dfa9d:goto L5dfa9d;
case 0x5dfaa0:c.instructions+=5;goto B5dfaa0;
case 0x5dfaa4:c.instructions+=4;goto B5dfaa4;
case 0x5dfaa8:c.instructions+=3;goto B5dfaa8;
case 0x5dfaaa:c.instructions+=2;goto B5dfaaa;
case 0x5dfaad:c.instructions+=1;goto B5dfaad;
case 0x5dfab0:goto L5dfab0;
case 0x5dfab2:c.instructions+=2;goto B5dfab2;
case 0x5dfab4:c.instructions+=1;goto B5dfab4;
case 0x5dfab6:goto L5dfab6;
case 0x5dfabc:c.instructions+=1;goto B5dfabc;
case 0x5dfabe:goto L5dfabe;
case 0x5dfac4:c.instructions+=1;goto B5dfac4;
case 0x5dfac6:goto L5dfac6;
case 0x5dfac8:c.instructions+=2;goto B5dfac8;
case 0x5dfaca:c.instructions+=1;goto B5dfaca;
case 0x5dfacc:goto L5dfacc;
case 0x5dfacf:c.instructions+=1;goto B5dfacf;
case 0x5dfad0:goto L5dfad0;
case 0x5dfad2:c.instructions+=2;goto B5dfad2;
case 0x5dfad4:c.instructions+=1;goto B5dfad4;
case 0x5dfad6:goto L5dfad6;
case 0x5dfad9:c.instructions+=1;goto B5dfad9;
case 0x5dfadb:goto L5dfadb;
case 0x5dfadc:c.instructions+=3;goto B5dfadc;
case 0x5dfadf:c.instructions+=2;goto B5dfadf;
case 0x5dfae1:c.instructions+=1;goto B5dfae1;
case 0x5dfae3:goto L5dfae3;
case 0x5dfae5:goto L5dfae5;
case 0x5dfae9:c.instructions+=3;goto B5dfae9;
case 0x5dfaed:c.instructions+=2;goto B5dfaed;
case 0x5dfaef:c.instructions+=1;goto B5dfaef;
case 0x5dfaf1:goto L5dfaf1;
case 0x5dfaf6:c.instructions+=2;goto B5dfaf6;
case 0x5dfaf7:c.instructions+=1;goto B5dfaf7;
case 0x5dfafc:goto L5dfafc;
case 0x5dfafe:c.instructions+=6;goto B5dfafe;
case 0x5dfb01:c.instructions+=5;goto B5dfb01;
case 0x5dfb05:c.instructions+=4;goto B5dfb05;
case 0x5dfb07:c.instructions+=3;goto B5dfb07;
case 0x5dfb09:c.instructions+=2;goto B5dfb09;
case 0x5dfb0d:c.instructions+=1;goto B5dfb0d;
case 0x5dfb0f:goto L5dfb0f;
case 0x5dfb11:c.instructions+=5;goto B5dfb11;
case 0x5dfb14:c.instructions+=4;goto B5dfb14;
case 0x5dfb17:c.instructions+=3;goto B5dfb17;
case 0x5dfb18:c.instructions+=2;goto B5dfb18;
case 0x5dfb1a:c.instructions+=1;goto B5dfb1a;
case 0x5dfb1f:goto L5dfb1f;
case 0x5dfb21:goto L5dfb21;
case 0x5dfb29:goto L5dfb29;
case 0x5dfb2d:c.instructions+=1;goto B5dfb2d;
case 0x5dfb30:goto L5dfb30;
case 0x5dfb31:c.instructions+=3;goto B5dfb31;
case 0x5dfb34:c.instructions+=2;goto B5dfb34;
case 0x5dfb37:c.instructions+=1;goto B5dfb37;
case 0x5dfb3d:goto L5dfb3d;
case 0x5dfb41:c.instructions+=8;goto B5dfb41;
case 0x5dfb45:c.instructions+=7;goto B5dfb45;
case 0x5dfb48:c.instructions+=6;goto B5dfb48;
case 0x5dfb49:c.instructions+=5;goto B5dfb49;
case 0x5dfb4c:c.instructions+=4;goto B5dfb4c;
case 0x5dfb4e:c.instructions+=3;goto B5dfb4e;
case 0x5dfb52:c.instructions+=2;goto B5dfb52;
case 0x5dfb56:c.instructions+=1;goto B5dfb56;
case 0x5dfb5c:goto L5dfb5c;
case 0x5dfb5f:c.instructions+=2;goto B5dfb5f;
case 0x5dfb61:c.instructions+=1;goto B5dfb61;
case 0x5dfb63:goto L5dfb63;
case 0x5dfb65:c.instructions+=1;goto B5dfb65;
case 0x5dfb6a:goto L5dfb6a;
case 0x5dfb6e:goto L5dfb6e;
case 0x5dfb6f:c.instructions+=8;goto B5dfb6f;
case 0x5dfb70:c.instructions+=7;goto B5dfb70;
case 0x5dfb71:c.instructions+=6;goto B5dfb71;
case 0x5dfb76:c.instructions+=5;goto B5dfb76;
case 0x5dfb77:c.instructions+=4;goto B5dfb77;
case 0x5dfb7b:c.instructions+=3;goto B5dfb7b;
case 0x5dfb82:c.instructions+=2;goto B5dfb82;
case 0x5dfb85:c.instructions+=1;goto B5dfb85;
case 0x5dfb86:goto L5dfb86;
case 0x5dfb8a:c.instructions+=4;goto B5dfb8a;
case 0x5dfb8c:c.instructions+=3;goto B5dfb8c;
case 0x5dfb93:c.instructions+=2;goto B5dfb93;
case 0x5dfb96:c.instructions+=1;goto B5dfb96;
case 0x5dfba0:goto L5dfba0;
case 0x5dfba4:c.instructions+=4;goto B5dfba4;
case 0x5dfba6:c.instructions+=3;goto B5dfba6;
case 0x5dfba9:c.instructions+=2;goto B5dfba9;
case 0x5dfbaf:c.instructions+=1;goto B5dfbaf;
case 0x5dfbb1:goto L5dfbb1;
case 0x5dfbb3:c.instructions+=3;goto B5dfbb3;
case 0x5dfbb8:c.instructions+=2;goto B5dfbb8;
case 0x5dfbbd:c.instructions+=1;goto B5dfbbd;
case 0x5dfbc2:goto L5dfbc2;
case 0x5dfbc7:c.instructions+=2;goto B5dfbc7;
case 0x5dfbca:c.instructions+=1;goto B5dfbca;
case 0x5dfbcb:goto L5dfbcb;
case 0x5dfbd1:c.instructions+=1;goto B5dfbd1;
case 0x5dfbd7:goto L5dfbd7;
case 0x5dfbd8:c.instructions+=11;goto B5dfbd8;
case 0x5dfbdb:c.instructions+=10;goto B5dfbdb;
case 0x5dfbde:c.instructions+=9;goto B5dfbde;
case 0x5dfbe1:c.instructions+=8;goto B5dfbe1;
case 0x5dfbe8:c.instructions+=7;goto B5dfbe8;
case 0x5dfbe9:c.instructions+=6;goto B5dfbe9;
case 0x5dfbeb:c.instructions+=5;goto B5dfbeb;
case 0x5dfbee:c.instructions+=4;goto B5dfbee;
case 0x5dfbf1:c.instructions+=3;goto B5dfbf1;
case 0x5dfbf8:c.instructions+=2;goto B5dfbf8;
case 0x5dfbfa:c.instructions+=1;goto B5dfbfa;
case 0x5dfbfc:goto L5dfbfc;
case 0x5dfbfe:c.instructions+=1;goto B5dfbfe;
case 0x5dfc00:goto L5dfc00;
case 0x5dfc06:c.instructions+=6;goto B5dfc06;
case 0x5dfc0c:c.instructions+=5;goto B5dfc0c;
case 0x5dfc0e:c.instructions+=4;goto B5dfc0e;
case 0x5dfc13:c.instructions+=3;goto B5dfc13;
case 0x5dfc16:c.instructions+=2;goto B5dfc16;
case 0x5dfc1c:c.instructions+=1;goto B5dfc1c;
case 0x5dfc23:goto L5dfc23;
case 0x5dfc26:c.instructions+=6;goto B5dfc26;
case 0x5dfc29:c.instructions+=5;goto B5dfc29;
case 0x5dfc2b:c.instructions+=4;goto B5dfc2b;
case 0x5dfc2e:c.instructions+=3;goto B5dfc2e;
case 0x5dfc31:c.instructions+=2;goto B5dfc31;
case 0x5dfc35:c.instructions+=1;goto B5dfc35;
case 0x5dfc3b:goto L5dfc3b;
case 0x5dfc3c:c.instructions+=2;goto B5dfc3c;
case 0x5dfc40:c.instructions+=1;goto B5dfc40;
case 0x5dfc41:goto L5dfc41;
case 0x5dfc46:c.instructions+=2;goto B5dfc46;
case 0x5dfc48:c.instructions+=1;goto B5dfc48;
case 0x5dfc4e:goto L5dfc4e;
case 0x5dfc51:c.instructions+=4;goto B5dfc51;
case 0x5dfc55:c.instructions+=3;goto B5dfc55;
case 0x5dfc5a:c.instructions+=2;goto B5dfc5a;
case 0x5dfc5d:c.instructions+=1;goto B5dfc5d;
case 0x5dfc65:goto L5dfc65;
case 0x5dfc68:c.instructions+=1;goto B5dfc68;
case 0x5dfc6a:goto L5dfc6a;
case 0x5dfc6d:c.instructions+=1;goto B5dfc6d;
case 0x5dfc6f:goto L5dfc6f;
case 0x5dfc74:c.instructions+=3;goto B5dfc74;
case 0x5dfc77:c.instructions+=2;goto B5dfc77;
case 0x5dfc79:c.instructions+=1;goto B5dfc79;
case 0x5dfc80:goto L5dfc80;
case 0x5dfc82:c.instructions+=2;goto B5dfc82;
case 0x5dfc84:c.instructions+=1;goto B5dfc84;
case 0x5dfc86:goto L5dfc86;
case 0x5dfc8c:goto L5dfc8c;
case 0x5dfc8f:c.instructions+=2;goto B5dfc8f;
case 0x5dfc90:c.instructions+=1;goto B5dfc90;
case 0x5dfc92:goto L5dfc92;
case 0x5dfc94:c.instructions+=2;goto B5dfc94;
case 0x5dfc96:c.instructions+=1;goto B5dfc96;
case 0x5dfc98:goto L5dfc98;
case 0x5dfc9a:c.instructions+=1;goto B5dfc9a;
case 0x5dfc9f:goto L5dfc9f;
case 0x5dfca4:c.instructions+=3;goto B5dfca4;
case 0x5dfca5:c.instructions+=2;goto B5dfca5;
case 0x5dfca6:c.instructions+=1;goto B5dfca6;
case 0x5dfcab:goto L5dfcab;
case 0x5dfcae:goto L5dfcae;
case 0x5dfcb4:goto L5dfcb4;
case 0x5dfcb8:c.instructions+=5;goto B5dfcb8;
case 0x5dfcbb:c.instructions+=4;goto B5dfcbb;
case 0x5dfcbc:c.instructions+=3;goto B5dfcbc;
case 0x5dfcbd:c.instructions+=2;goto B5dfcbd;
case 0x5dfcc1:c.instructions+=1;goto B5dfcc1;
case 0x5dfcc3:goto L5dfcc3;
case 0x5dfcc7:c.instructions+=8;goto B5dfcc7;
case 0x5dfccb:c.instructions+=7;goto B5dfccb;
case 0x5dfcce:c.instructions+=6;goto B5dfcce;
case 0x5dfccf:c.instructions+=5;goto B5dfccf;
case 0x5dfcd2:c.instructions+=4;goto B5dfcd2;
case 0x5dfcd4:c.instructions+=3;goto B5dfcd4;
case 0x5dfcd8:c.instructions+=2;goto B5dfcd8;
case 0x5dfcdc:c.instructions+=1;goto B5dfcdc;
case 0x5dfce2:goto L5dfce2;
case 0x5dfce3:c.instructions+=1;goto B5dfce3;
case 0x5dfce4:goto L5dfce4;
case 0x5dfce5:c.instructions+=4;goto B5dfce5;
case 0x5dfcea:c.instructions+=3;goto B5dfcea;
case 0x5dfceb:c.instructions+=2;goto B5dfceb;
case 0x5dfcee:c.instructions+=1;goto B5dfcee;
case 0x5dfcef:goto L5dfcef;
case 0x5dfcf1:c.instructions+=2;goto B5dfcf1;
case 0x5dfcf4:c.instructions+=1;goto B5dfcf4;
case 0x5dfd00:goto L5dfd00;
case 0x5dfd01:c.instructions+=4;goto B5dfd01;
case 0x5dfd07:c.instructions+=3;goto B5dfd07;
case 0x5dfd08:c.instructions+=2;goto B5dfd08;
case 0x5dfd0d:c.instructions+=1;goto B5dfd0d;
case 0x5dfd12:goto L5dfd12;
case 0x5dfd14:c.instructions+=2;goto B5dfd14;
case 0x5dfd16:c.instructions+=1;goto B5dfd16;
case 0x5dfd18:goto L5dfd18;
case 0x5dfd1a:c.instructions+=1;goto B5dfd1a;
case 0x5dfd1f:goto L5dfd1f;
case 0x5dfd21:c.instructions+=2;goto B5dfd21;
case 0x5dfd23:c.instructions+=1;goto B5dfd23;
case 0x5dfd25:goto L5dfd25;
case 0x5dfd26:c.instructions+=2;goto B5dfd26;
case 0x5dfd27:c.instructions+=1;goto B5dfd27;
case 0x5dfd30:goto L5dfd30;
case 0x5dfd36:c.instructions+=11;goto B5dfd36;
case 0x5dfd38:c.instructions+=10;goto B5dfd38;
case 0x5dfd3d:c.instructions+=9;goto B5dfd3d;
case 0x5dfd3e:c.instructions+=8;goto B5dfd3e;
case 0x5dfd43:c.instructions+=7;goto B5dfd43;
case 0x5dfd4a:c.instructions+=6;goto B5dfd4a;
case 0x5dfd4d:c.instructions+=5;goto B5dfd4d;
case 0x5dfd4e:c.instructions+=4;goto B5dfd4e;
case 0x5dfd4f:c.instructions+=3;goto B5dfd4f;
case 0x5dfd51:c.instructions+=2;goto B5dfd51;
case 0x5dfd53:c.instructions+=1;goto B5dfd53;
case 0x5dfd55:goto L5dfd55;
case 0x5dfd5a:c.instructions+=2;goto B5dfd5a;
case 0x5dfd5b:c.instructions+=1;goto B5dfd5b;
case 0x5dfd60:goto L5dfd60;
case 0x5dfd62:c.instructions+=5;goto B5dfd62;
case 0x5dfd65:c.instructions+=4;goto B5dfd65;
case 0x5dfd69:c.instructions+=3;goto B5dfd69;
case 0x5dfd6b:c.instructions+=2;goto B5dfd6b;
case 0x5dfd6f:c.instructions+=1;goto B5dfd6f;
case 0x5dfd71:goto L5dfd71;
case 0x5dfd76:c.instructions+=1;goto B5dfd76;
case 0x5dfd7b:goto L5dfd7b;
case 0x5dfd7e:c.instructions+=5;goto B5dfd7e;
case 0x5dfd7f:c.instructions+=4;goto B5dfd7f;
case 0x5dfd81:c.instructions+=3;goto B5dfd81;
case 0x5dfd84:c.instructions+=2;goto B5dfd84;
case 0x5dfd87:c.instructions+=1;goto B5dfd87;
case 0x5dfd8c:goto L5dfd8c;
case 0x5dfd8e:goto L5dfd8e;
case 0x5dfd90:goto L5dfd90;
case 0x5dfd98:c.instructions+=1;goto B5dfd98;
case 0x5dfd9e:goto L5dfd9e;
case 0x5dfda4:c.instructions+=1;goto B5dfda4;
case 0x5dfda6:goto L5dfda6;
case 0x5dfdab:c.instructions+=1;goto B5dfdab;
case 0x5dfdb0:goto L5dfdb0;
case 0x5dfdb3:c.instructions+=3;goto B5dfdb3;
case 0x5dfdb5:c.instructions+=2;goto B5dfdb5;
case 0x5dfdba:c.instructions+=1;goto B5dfdba;
case 0x5dfdc0:goto L5dfdc0;
case 0x5dfdca:goto L5dfdca;
case 0x5dfdd0:c.instructions+=6;goto B5dfdd0;
case 0x5dfdd3:c.instructions+=5;goto B5dfdd3;
case 0x5dfdd4:c.instructions+=4;goto B5dfdd4;
case 0x5dfdd8:c.instructions+=3;goto B5dfdd8;
case 0x5dfddd:c.instructions+=2;goto B5dfddd;
case 0x5dfdde:c.instructions+=1;goto B5dfdde;
case 0x5dfde3:goto L5dfde3;
case 0x5dfde7:c.instructions+=2;goto B5dfde7;
case 0x5dfde8:c.instructions+=1;goto B5dfde8;
case 0x5dfded:goto L5dfded;
case 0x5dfdee:c.instructions+=6;goto B5dfdee;
case 0x5dfdef:c.instructions+=5;goto B5dfdef;
case 0x5dfdf3:c.instructions+=4;goto B5dfdf3;
case 0x5dfdf4:c.instructions+=3;goto B5dfdf4;
case 0x5dfdf5:c.instructions+=2;goto B5dfdf5;
case 0x5dfdfa:c.instructions+=1;goto B5dfdfa;
case 0x5dfdff:goto L5dfdff;
case 0x5dfe01:c.instructions+=6;goto B5dfe01;
case 0x5dfe05:c.instructions+=5;goto B5dfe05;
case 0x5dfe06:c.instructions+=4;goto B5dfe06;
case 0x5dfe08:c.instructions+=3;goto B5dfe08;
case 0x5dfe0d:c.instructions+=2;goto B5dfe0d;
case 0x5dfe15:c.instructions+=1;goto B5dfe15;
case 0x5dfe1a:goto L5dfe1a;
case 0x5dfe1c:c.instructions+=6;goto B5dfe1c;
case 0x5dfe20:c.instructions+=5;goto B5dfe20;
case 0x5dfe21:c.instructions+=4;goto B5dfe21;
case 0x5dfe23:c.instructions+=3;goto B5dfe23;
case 0x5dfe28:c.instructions+=2;goto B5dfe28;
case 0x5dfe30:c.instructions+=1;goto B5dfe30;
case 0x5dfe35:goto L5dfe35;
case 0x5dfe38:c.instructions+=7;goto B5dfe38;
case 0x5dfe3a:c.instructions+=6;goto B5dfe3a;
case 0x5dfe3e:c.instructions+=5;goto B5dfe3e;
case 0x5dfe3f:c.instructions+=4;goto B5dfe3f;
case 0x5dfe41:c.instructions+=3;goto B5dfe41;
case 0x5dfe46:c.instructions+=2;goto B5dfe46;
case 0x5dfe4e:c.instructions+=1;goto B5dfe4e;
case 0x5dfe53:goto L5dfe53;
case 0x5dfe59:c.instructions+=3;goto B5dfe59;
case 0x5dfe5c:c.instructions+=2;goto B5dfe5c;
case 0x5dfe61:c.instructions+=1;goto B5dfe61;
case 0x5dfe66:goto L5dfe66;
case 0x5dfe68:c.instructions+=2;goto B5dfe68;
case 0x5dfe6a:c.instructions+=1;goto B5dfe6a;
case 0x5dfe6c:goto L5dfe6c;
case 0x5dfe70:goto L5dfe70;
case 0x5dfe74:c.instructions+=9;goto B5dfe74;
case 0x5dfe76:c.instructions+=8;goto B5dfe76;
case 0x5dfe7a:c.instructions+=7;goto B5dfe7a;
case 0x5dfe7b:c.instructions+=6;goto B5dfe7b;
case 0x5dfe7e:c.instructions+=5;goto B5dfe7e;
case 0x5dfe80:c.instructions+=4;goto B5dfe80;
case 0x5dfe85:c.instructions+=3;goto B5dfe85;
case 0x5dfe89:c.instructions+=2;goto B5dfe89;
case 0x5dfe8d:c.instructions+=1;goto B5dfe8d;
case 0x5dfe92:goto L5dfe92;
case 0x5dfe94:c.instructions+=3;goto B5dfe94;
case 0x5dfe97:c.instructions+=2;goto B5dfe97;
case 0x5dfe99:c.instructions+=1;goto B5dfe99;
case 0x5dfe9b:goto L5dfe9b;
case 0x5dfe9f:c.instructions+=5;goto B5dfe9f;
case 0x5dfea0:c.instructions+=4;goto B5dfea0;
case 0x5dfea1:c.instructions+=3;goto B5dfea1;
case 0x5dfea8:c.instructions+=2;goto B5dfea8;
case 0x5dfeab:c.instructions+=1;goto B5dfeab;
case 0x5dfeb0:goto L5dfeb0;
case 0x5dfeb1:c.instructions+=22;goto B5dfeb1;
case 0x5dfeb3:c.instructions+=21;goto B5dfeb3;
case 0x5dfeb7:c.instructions+=20;goto B5dfeb7;
case 0x5dfeb9:c.instructions+=19;goto B5dfeb9;
case 0x5dfeba:c.instructions+=18;goto B5dfeba;
case 0x5dfebc:c.instructions+=17;goto B5dfebc;
case 0x5dfebf:c.instructions+=16;goto B5dfebf;
case 0x5dfec2:c.instructions+=15;goto B5dfec2;
case 0x5dfec5:c.instructions+=14;goto B5dfec5;
case 0x5dfec7:c.instructions+=13;goto B5dfec7;
case 0x5dfec9:c.instructions+=12;goto B5dfec9;
case 0x5dfecb:c.instructions+=11;goto B5dfecb;
case 0x5dfecd:c.instructions+=10;goto B5dfecd;
case 0x5dfecf:c.instructions+=9;goto B5dfecf;
case 0x5dfed1:c.instructions+=8;goto B5dfed1;
case 0x5dfed3:c.instructions+=7;goto B5dfed3;
case 0x5dfed5:c.instructions+=6;goto B5dfed5;
case 0x5dfed9:c.instructions+=5;goto B5dfed9;
case 0x5dfedb:c.instructions+=4;goto B5dfedb;
case 0x5dfedd:c.instructions+=3;goto B5dfedd;
case 0x5dfedf:c.instructions+=2;goto B5dfedf;
case 0x5dfee2:c.instructions+=1;goto B5dfee2;
case 0x5dfee4:goto L5dfee4;
case 0x5dfee7:c.instructions+=6;goto B5dfee7;
case 0x5dfee9:c.instructions+=5;goto B5dfee9;
case 0x5dfeec:c.instructions+=4;goto B5dfeec;
case 0x5dfeef:c.instructions+=3;goto B5dfeef;
case 0x5dfef1:c.instructions+=2;goto B5dfef1;
case 0x5dfef3:c.instructions+=1;goto B5dfef3;
case 0x5dfef5:goto L5dfef5;
case 0x5dfef6:c.instructions+=1;goto B5dfef6;
case 0x5dfefb:goto L5dfefb;
case 0x5dfefd:c.instructions+=1;goto B5dfefd;
case 0x5dfeff:goto L5dfeff;
case 0x5dff02:c.instructions+=2;goto B5dff02;
case 0x5dff03:c.instructions+=1;goto B5dff03;
case 0x5dff08:goto L5dff08;
case 0x5dff0a:goto L5dff0a;
case 0x5dff0b:c.instructions+=3;goto B5dff0b;
case 0x5dff0d:c.instructions+=2;goto B5dff0d;
case 0x5dff0e:c.instructions+=1;goto B5dff0e;
case 0x5dff11:goto L5dff11;
case 0x5dff12:c.instructions+=4;goto B5dff12;
case 0x5dff16:c.instructions+=3;goto B5dff16;
case 0x5dff17:c.instructions+=2;goto B5dff17;
case 0x5dff19:c.instructions+=1;goto B5dff19;
case 0x5dff1e:goto L5dff1e;
case 0x5dff20:c.instructions+=2;goto B5dff20;
case 0x5dff23:c.instructions+=1;goto B5dff23;
case 0x5dff25:goto L5dff25;
case 0x5dff26:c.instructions+=2;goto B5dff26;
case 0x5dff28:c.instructions+=1;goto B5dff28;
case 0x5dff2d:goto L5dff2d;
case 0x5dff2f:c.instructions+=5;goto B5dff2f;
case 0x5dff30:c.instructions+=4;goto B5dff30;
case 0x5dff31:c.instructions+=3;goto B5dff31;
case 0x5dff33:c.instructions+=2;goto B5dff33;
case 0x5dff34:c.instructions+=1;goto B5dff34;
case 0x5dff37:goto L5dff37;
case 0x5dff38:c.instructions+=3;goto B5dff38;
case 0x5dff39:c.instructions+=2;goto B5dff39;
case 0x5dff3b:c.instructions+=1;goto B5dff3b;
case 0x5dff40:goto L5dff40;
case 0x5dff41:c.instructions+=4;goto B5dff41;
case 0x5dff42:c.instructions+=3;goto B5dff42;
case 0x5dff44:c.instructions+=2;goto B5dff44;
case 0x5dff45:c.instructions+=1;goto B5dff45;
case 0x5dff50:goto L5dff50;
case 0x5dff53:c.instructions+=6;goto B5dff53;
case 0x5dff54:c.instructions+=5;goto B5dff54;
case 0x5dff55:c.instructions+=4;goto B5dff55;
case 0x5dff59:c.instructions+=3;goto B5dff59;
case 0x5dff5b:c.instructions+=2;goto B5dff5b;
case 0x5dff5d:c.instructions+=1;goto B5dff5d;
case 0x5dff5f:goto L5dff5f;
case 0x5dff60:c.instructions+=4;goto B5dff60;
case 0x5dff62:c.instructions+=3;goto B5dff62;
case 0x5dff63:c.instructions+=2;goto B5dff63;
case 0x5dff66:c.instructions+=1;goto B5dff66;
case 0x5dff69:goto L5dff69;
case 0x5dff6d:c.instructions+=5;goto B5dff6d;
case 0x5dff6e:c.instructions+=4;goto B5dff6e;
case 0x5dff6f:c.instructions+=3;goto B5dff6f;
case 0x5dff73:c.instructions+=2;goto B5dff73;
case 0x5dff77:c.instructions+=1;goto B5dff77;
case 0x5dff7d:goto L5dff7d;
case 0x5dff80:c.instructions+=4;goto B5dff80;
case 0x5dff83:c.instructions+=3;goto B5dff83;
case 0x5dff87:c.instructions+=2;goto B5dff87;
case 0x5dff8b:c.instructions+=1;goto B5dff8b;
case 0x5dff90:goto L5dff90;
case 0x5dff92:c.instructions+=2;goto B5dff92;
case 0x5dff94:c.instructions+=1;goto B5dff94;
case 0x5dff96:goto L5dff96;
case 0x5dff9a:c.instructions+=2;goto B5dff9a;
case 0x5dff9d:c.instructions+=1;goto B5dff9d;
case 0x5dffa0:goto L5dffa0;
case 0x5dffa4:c.instructions+=1;goto B5dffa4;
case 0x5dffa6:goto L5dffa6;
case 0x5dffa8:c.instructions+=2;goto B5dffa8;
case 0x5dffaa:c.instructions+=1;goto B5dffaa;
case 0x5dffac:goto L5dffac;
case 0x5dffae:goto L5dffae;
case 0x5dffb1:c.instructions+=3;goto B5dffb1;
case 0x5dffb3:c.instructions+=2;goto B5dffb3;
case 0x5dffb5:c.instructions+=1;goto B5dffb5;
case 0x5dffb7:goto L5dffb7;
case 0x5dffba:c.instructions+=1;goto B5dffba;
case 0x5dffc0:goto L5dffc0;
case 0x5dffc3:c.instructions+=3;goto B5dffc3;
case 0x5dffc5:c.instructions+=2;goto B5dffc5;
case 0x5dffc7:c.instructions+=1;goto B5dffc7;
case 0x5dffc9:goto L5dffc9;
case 0x5dffd0:goto L5dffd0;
case 0x5dffd5:c.instructions+=1;goto B5dffd5;
case 0x5dffd7:goto L5dffd7;
case 0x5dffd8:c.instructions+=2;goto B5dffd8;
case 0x5dffda:c.instructions+=1;goto B5dffda;
case 0x5dffdc:goto L5dffdc;
case 0x5dffe0:c.instructions+=1;goto B5dffe0;
case 0x5dffe2:goto L5dffe2;
case 0x5dffe7:c.instructions+=1;goto B5dffe7;
case 0x5dffe8:goto L5dffe8;
case 0x5dffeb:c.instructions+=4;goto B5dffeb;
case 0x5dffec:c.instructions+=3;goto B5dffec;
case 0x5dffef:c.instructions+=2;goto B5dffef;
case 0x5dfff1:c.instructions+=1;goto B5dfff1;
case 0x5dfff3:goto L5dfff3;
case 0x5dfff7:c.instructions+=1;goto B5dfff7;
case 0x5dfffb:goto L5dfffb;
case 0x5dffff:c.instructions+=1;goto B5dffff;
default:missing_instruction(c.pc);}
B5df001:L5df001:{c.instructions+=2;NFSU2_TR(0x5df001);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df002:{NFSU2_TR(0x5df002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df005:L5df005:{c.instructions+=2;NFSU2_TR(0x5df005);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34113ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df00a:{NFSU2_TR(0x5df00a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df01d;}}
}
B5df00c:L5df00c:{c.instructions+=6;NFSU2_TR(0x5df00c);
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
B5df00e:{NFSU2_TR(0x5df00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df011:{NFSU2_TR(0x5df011);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df014:{NFSU2_TR(0x5df014);
w4(R+0,u32(0x1ull));
}
B5df019:{NFSU2_TR(0x5df019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df01a:{NFSU2_TR(0x5df01a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df01d:L5df01d:{c.instructions+=2;NFSU2_TR(0x5df01d);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34111ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34111ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34111ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5df022:{NFSU2_TR(0x5df022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df034;}}
}
B5df024:L5df024:{c.instructions+=4;NFSU2_TR(0x5df024);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df02b:{NFSU2_TR(0x5df02b);
w4(R+0,u32(0x1ull));
}
B5df030:{NFSU2_TR(0x5df030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df031:{NFSU2_TR(0x5df031);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df034:L5df034:{c.instructions+=2;NFSU2_TR(0x5df034);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34112ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df039:{NFSU2_TR(0x5df039);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df04c;}}
}
B5df03b:L5df03b:{c.instructions+=6;NFSU2_TR(0x5df03b);
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
B5df03d:{NFSU2_TR(0x5df03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df040:{NFSU2_TR(0x5df040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df043:{NFSU2_TR(0x5df043);
w4(R+0,u32(0x1ull));
}
B5df048:{NFSU2_TR(0x5df048);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df049:{NFSU2_TR(0x5df049);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df04c:L5df04c:{c.instructions+=3;NFSU2_TR(0x5df04c);
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
B5df04e:{NFSU2_TR(0x5df04e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df04f:{NFSU2_TR(0x5df04f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df060:L5df060:{c.instructions+=14;NFSU2_TR(0x5df060);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df061:{NFSU2_TR(0x5df061);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5df065:{NFSU2_TR(0x5df065);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5df069:{NFSU2_TR(0x5df069);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df06a:{NFSU2_TR(0x5df06a);
__builtin_memmove((R+20),(R+4),4);
}
B5df06c:{NFSU2_TR(0x5df06c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df06f:{NFSU2_TR(0x5df06f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5df070:{NFSU2_TR(0x5df070);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5df072:{NFSU2_TR(0x5df072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df075:{NFSU2_TR(0x5df075);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5df078:{NFSU2_TR(0x5df078);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df079:{NFSU2_TR(0x5df079);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5df07b:{NFSU2_TR(0x5df07b);
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
B5df07d:{NFSU2_TR(0x5df07d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df0a1;}}
}
B5df07f:L5df07f:{c.instructions+=2;NFSU2_TR(0x5df07f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df080:{NFSU2_TR(0x5df080);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df083:L5df083:{c.instructions+=5;NFSU2_TR(0x5df083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5df085:{NFSU2_TR(0x5df085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df086:{NFSU2_TR(0x5df086);
__builtin_memmove((R+4),(R+20),4);
}
B5df088:{NFSU2_TR(0x5df088);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df08f:{NFSU2_TR(0x5df08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df094ull));
TAIL_STATIC(0x5dab40u,5da);
}
B5df094:L5df094:{c.instructions+=5;NFSU2_TR(0x5df094);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5df098:{NFSU2_TR(0x5df098);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5df099:{NFSU2_TR(0x5df099);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B5df09c:{NFSU2_TR(0x5df09c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5df09e:{NFSU2_TR(0x5df09e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df083u);}goto L5df083;}}
}
B5df0a0:L5df0a0:{c.instructions+=1;NFSU2_TR(0x5df0a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df0a1:L5df0a1:{c.instructions+=4;NFSU2_TR(0x5df0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df0a2:{NFSU2_TR(0x5df0a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df0a3:{NFSU2_TR(0x5df0a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5df0a4:{NFSU2_TR(0x5df0a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df0b0:L5df0b0:{c.instructions+=14;NFSU2_TR(0x5df0b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df0b1:{NFSU2_TR(0x5df0b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5df0b5:{NFSU2_TR(0x5df0b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df0b6:{NFSU2_TR(0x5df0b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df0bd:{NFSU2_TR(0x5df0bd);
__builtin_memmove((R+0),gp(0x870818),4);
}
B5df0c2:{NFSU2_TR(0x5df0c2);
s1(0x82da50,u8(0x1ull));
}
B5df0c9:{NFSU2_TR(0x5df0c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df0cc:{NFSU2_TR(0x5df0cc);
__builtin_memmove((R+28),(R+4),4);
}
B5df0ce:{NFSU2_TR(0x5df0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df0d1:{NFSU2_TR(0x5df0d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df0d2:{NFSU2_TR(0x5df0d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df0d3:{NFSU2_TR(0x5df0d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df0d4:{NFSU2_TR(0x5df0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df0d7:{NFSU2_TR(0x5df0d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df0dcull));
TAIL_STATIC(0x577b10u,577);
}
B5df0dc:L5df0dc:{c.instructions+=9;NFSU2_TR(0x5df0dc);
s1(0x82da50,u8(0x0ull));
}
B5df0e3:{NFSU2_TR(0x5df0e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df0e6:{NFSU2_TR(0x5df0e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5df0e9:{NFSU2_TR(0x5df0e9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5df0ea:{NFSU2_TR(0x5df0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df0ed:{NFSU2_TR(0x5df0ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df0ee:{NFSU2_TR(0x5df0ee);
__builtin_memmove((R+4),(R+28),4);
}
B5df0f0:{NFSU2_TR(0x5df0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df0f7:{NFSU2_TR(0x5df0f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df0fcull));
TAIL_STATIC(0x5daac0u,5da);
}
B5df0fc:L5df0fc:{c.instructions+=3;NFSU2_TR(0x5df0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df0fd:{NFSU2_TR(0x5df0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df0fe:{NFSU2_TR(0x5df0fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df110:L5df110:{c.instructions+=4;NFSU2_TR(0x5df110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df114:{NFSU2_TR(0x5df114);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df115:{NFSU2_TR(0x5df115);
w4(R+4,u32(0x88eb00ull));
}
B5df11a:{NFSU2_TR(0x5df11a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df11full));
TAIL_STATIC(0x5dab40u,5da);
}
B5df11f:L5df11f:{c.instructions+=1;NFSU2_TR(0x5df11f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df120:L5df120:{c.instructions+=13;NFSU2_TR(0x5df120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df121:{NFSU2_TR(0x5df121);
__builtin_memmove((R+24),(R+4),4);
}
B5df123:{NFSU2_TR(0x5df123);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df129:{NFSU2_TR(0x5df129);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df12f:{NFSU2_TR(0x5df12f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df130:{NFSU2_TR(0x5df130);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5df134:{NFSU2_TR(0x5df134);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df137:{NFSU2_TR(0x5df137);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5df139:{NFSU2_TR(0x5df139);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df13f:{NFSU2_TR(0x5df13f);
u8 U[16];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5df146:{NFSU2_TR(0x5df146);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5df14c:{NFSU2_TR(0x5df14c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5df150:{NFSU2_TR(0x5df150);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df15a;}}
}
B5df152:L5df152:{c.instructions+=3;NFSU2_TR(0x5df152);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df153:{NFSU2_TR(0x5df153);
__builtin_memmove((R+4),(R+24),4);
}
B5df155:{NFSU2_TR(0x5df155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df15aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df0b0u);}goto L5df0b0;}
}
B5df15a:L5df15a:{c.instructions+=2;NFSU2_TR(0x5df15a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5df15e:{NFSU2_TR(0x5df15e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df168;}}
}
B5df160:L5df160:{c.instructions+=3;NFSU2_TR(0x5df160);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df161:{NFSU2_TR(0x5df161);
__builtin_memmove((R+4),(R+24),4);
}
B5df163:{NFSU2_TR(0x5df163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df168ull));
TAIL_STATIC(0x5daac0u,5da);
}
B5df168:L5df168:{c.instructions+=5;NFSU2_TR(0x5df168);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5df16a:{NFSU2_TR(0x5df16a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df170:{NFSU2_TR(0x5df170);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5df173:{NFSU2_TR(0x5df173);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5df175:{NFSU2_TR(0x5df175);
if(r1(R+518)){{goto L5df182;}}
}
B5df177:L5df177:{c.instructions+=5;NFSU2_TR(0x5df177);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df17a:{NFSU2_TR(0x5df17a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5df17d:{NFSU2_TR(0x5df17d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5df17e:{NFSU2_TR(0x5df17e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df180:{NFSU2_TR(0x5df180);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df177u);}goto L5df177;}}
}
B5df182:L5df182:{c.instructions+=4;NFSU2_TR(0x5df182);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df188:{NFSU2_TR(0x5df188);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5df189:{NFSU2_TR(0x5df189);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df18b:{NFSU2_TR(0x5df18b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df1a8;}}
}
B5df18d:L5df18d:{c.instructions+=1;NFSU2_TR(0x5df18d);
u8 U[12];
w4(U+0,u32(u32(u32(0x29cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5df194:L5df194:{c.instructions+=8;NFSU2_TR(0x5df194);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df197:{NFSU2_TR(0x5df197);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5df199:{NFSU2_TR(0x5df199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df19f:{NFSU2_TR(0x5df19f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5df1a0:{NFSU2_TR(0x5df1a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5df1a3:{NFSU2_TR(0x5df1a3);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B5df1a4:{NFSU2_TR(0x5df1a4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df1a6:{NFSU2_TR(0x5df1a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df194u);}goto L5df194;}}
}
B5df1a8:L5df1a8:{c.instructions+=6;NFSU2_TR(0x5df1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df1ae:{NFSU2_TR(0x5df1ae);
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
B5df1af:{NFSU2_TR(0x5df1af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df1b0:{NFSU2_TR(0x5df1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df1b6:{NFSU2_TR(0x5df1b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df1b7:{NFSU2_TR(0x5df1b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df1c0:L5df1c0:{c.instructions+=9;NFSU2_TR(0x5df1c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5df1c3:{NFSU2_TR(0x5df1c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df1c4:{NFSU2_TR(0x5df1c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df1c5:{NFSU2_TR(0x5df1c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df1c6:{NFSU2_TR(0x5df1c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5df1c8:{NFSU2_TR(0x5df1c8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df1c9:{NFSU2_TR(0x5df1c9);
__builtin_memmove((R+24),(R+4),4);
}
B5df1cb:{NFSU2_TR(0x5df1cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df1cf:{NFSU2_TR(0x5df1cf);
}
B5df1d0:L5df1d0:{c.instructions+=4;NFSU2_TR(0x5df1d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df1d3:{NFSU2_TR(0x5df1d3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5df1d5:{NFSU2_TR(0x5df1d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df1d7:{NFSU2_TR(0x5df1d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df212;}}
}
B5df1d9:L5df1d9:{c.instructions+=3;NFSU2_TR(0x5df1d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5df1db:{NFSU2_TR(0x5df1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df1de:{NFSU2_TR(0x5df1de);
__builtin_memmove((R+28),(R+28),4);
}
B5df1e0:L5df1e0:{c.instructions+=2;NFSU2_TR(0x5df1e0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5df1e4:{NFSU2_TR(0x5df1e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df1fb;}}
}
B5df1e6:L5df1e6:{c.instructions+=3;NFSU2_TR(0x5df1e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5df1e9:{NFSU2_TR(0x5df1e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5df1eb:{NFSU2_TR(0x5df1eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df1fb;}}
}
B5df1ed:L5df1ed:{c.instructions+=2;NFSU2_TR(0x5df1ed);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df1ef:{NFSU2_TR(0x5df1ef);
if(r1(R+518)){{goto L5df1f9;}}
}
B5df1f1:L5df1f1:{c.instructions+=3;NFSU2_TR(0x5df1f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df1f4:{NFSU2_TR(0x5df1f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5df1f7:{NFSU2_TR(0x5df1f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df1fb;}}
}
B5df1f9:L5df1f9:{c.instructions+=1;NFSU2_TR(0x5df1f9);
__builtin_memmove((R+28),(R+0),4);
}
B5df1fb:L5df1fb:{c.instructions+=3;NFSU2_TR(0x5df1fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5df1fe:{NFSU2_TR(0x5df1fe);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5df1ff:{NFSU2_TR(0x5df1ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df1e0u);}goto L5df1e0;}}
}
B5df201:L5df201:{c.instructions+=2;NFSU2_TR(0x5df201);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df203:{NFSU2_TR(0x5df203);
if(r1(R+518)){{goto L5df212;}}
}
B5df205:L5df205:{c.instructions+=3;NFSU2_TR(0x5df205);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df206:{NFSU2_TR(0x5df206);
__builtin_memmove((R+4),(R+24),4);
}
B5df208:{NFSU2_TR(0x5df208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df20dull));
TAIL_STATIC(0x5daac0u,5da);
}
B5df20d:L5df20d:{c.instructions+=2;NFSU2_TR(0x5df20d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5df210:{NFSU2_TR(0x5df210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df1d0u);}goto L5df1d0;}}
}
B5df212:L5df212:{c.instructions+=3;NFSU2_TR(0x5df212);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df215:{NFSU2_TR(0x5df215);
w4(R+12,u32(0x1ull));
}
B5df21a:{NFSU2_TR(0x5df21a);
__builtin_memmove((R+12),(R+12),4);
}
B5df220:L5df220:{c.instructions+=2;NFSU2_TR(0x5df220);
__builtin_memmove((R+4),(R+24),4);
}
B5df222:{NFSU2_TR(0x5df222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df227ull));
TAIL_STATIC(0x5d60e0u,5d6);
}
B5df227:L5df227:{c.instructions+=4;NFSU2_TR(0x5df227);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5df22b:{NFSU2_TR(0x5df22b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df22c:{NFSU2_TR(0x5df22c);
__builtin_memmove((R+4),(R+24),4);
}
B5df22e:{NFSU2_TR(0x5df22e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df233ull));
TAIL_STATIC(0x5dadb0u,5da);
}
B5df233:L5df233:{c.instructions+=3;NFSU2_TR(0x5df233);
__builtin_memmove((R+20),(R+0),4);
}
B5df235:{NFSU2_TR(0x5df235);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df237:{NFSU2_TR(0x5df237);
if(r1(R+518)){{goto L5df349;}}
}
B5df23d:L5df23d:{c.instructions+=2;NFSU2_TR(0x5df23d);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x7fffffffull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5df245:{NFSU2_TR(0x5df245);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5df335;}}
}
B5df24b:L5df24b:{c.instructions+=2;NFSU2_TR(0x5df24b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x10ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5df24f:{NFSU2_TR(0x5df24f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df335;}}
}
B5df255:L5df255:{c.instructions+=2;NFSU2_TR(0x5df255);
__builtin_memmove((R+4),(R+24),4);
}
B5df257:{NFSU2_TR(0x5df257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df25cull));
TAIL_STATIC(0x5d60e0u,5d6);
}
B5df25c:L5df25c:{c.instructions+=4;NFSU2_TR(0x5df25c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df25f:{NFSU2_TR(0x5df25f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5df261:{NFSU2_TR(0x5df261);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df263:{NFSU2_TR(0x5df263);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df295;}}
}
B5df265:L5df265:{c.instructions+=3;NFSU2_TR(0x5df265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5df267:{NFSU2_TR(0x5df267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df26a:{NFSU2_TR(0x5df26a);
__builtin_memmove((R+12),(R+12),4);
}
B5df270:L5df270:{c.instructions+=2;NFSU2_TR(0x5df270);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5df274:{NFSU2_TR(0x5df274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df28b;}}
}
B5df276:L5df276:{c.instructions+=3;NFSU2_TR(0x5df276);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5df279:{NFSU2_TR(0x5df279);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5df27b:{NFSU2_TR(0x5df27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df28b;}}
}
B5df27d:L5df27d:{c.instructions+=2;NFSU2_TR(0x5df27d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df27f:{NFSU2_TR(0x5df27f);
if(r1(R+518)){{goto L5df289;}}
}
B5df281:L5df281:{c.instructions+=3;NFSU2_TR(0x5df281);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df284:{NFSU2_TR(0x5df284);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5df287:{NFSU2_TR(0x5df287);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df28b;}}
}
B5df289:L5df289:{c.instructions+=1;NFSU2_TR(0x5df289);
__builtin_memmove((R+28),(R+0),4);
}
B5df28b:L5df28b:{c.instructions+=3;NFSU2_TR(0x5df28b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5df28e:{NFSU2_TR(0x5df28e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5df28f:{NFSU2_TR(0x5df28f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df270u);}goto L5df270;}}
}
B5df291:L5df291:{c.instructions+=2;NFSU2_TR(0x5df291);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df293:{NFSU2_TR(0x5df293);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df299;}}
}
B5df295:L5df295:{c.instructions+=2;NFSU2_TR(0x5df295);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5df297:{NFSU2_TR(0x5df297);
{goto L5df2a4;}
}
B5df299:L5df299:{c.instructions+=3;NFSU2_TR(0x5df299);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df29a:{NFSU2_TR(0x5df29a);
__builtin_memmove((R+4),(R+24),4);
}
B5df29c:{NFSU2_TR(0x5df29c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df2a1ull));
TAIL_STATIC(0x5daac0u,5da);
}
B5df2a1:L5df2a1:{c.instructions+=1;NFSU2_TR(0x5df2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5df2a4:L5df2a4:{c.instructions+=5;NFSU2_TR(0x5df2a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df2a8:{NFSU2_TR(0x5df2a8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5df2aa:{NFSU2_TR(0x5df2aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df2ac:{NFSU2_TR(0x5df2ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df2b0:{NFSU2_TR(0x5df2b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df220u);}goto L5df220;}}
}
B5df2b6:L5df2b6:{c.instructions+=2;NFSU2_TR(0x5df2b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df2b7:{NFSU2_TR(0x5df2b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df2bcull));
TAIL_STATIC(0x43e8e0u,43e);
}
B5df2bc:L5df2bc:{c.instructions+=5;NFSU2_TR(0x5df2bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df2c0:{NFSU2_TR(0x5df2c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4000ull))));
}
B5df2c6:{NFSU2_TR(0x5df2c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5df2c9:{NFSU2_TR(0x5df2c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df2cb:{NFSU2_TR(0x5df2cb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df315;}}
}
B5df2cd:L5df2cd:{c.instructions+=1;NFSU2_TR(0x5df2cd);
__builtin_memmove((R+4),(R+4),4);
}
B5df2d0:L5df2d0:{c.instructions+=4;NFSU2_TR(0x5df2d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df2d2:{NFSU2_TR(0x5df2d2);
__builtin_memmove((R+4),(R+24),4);
}
B5df2d4:{NFSU2_TR(0x5df2d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5df2da:{NFSU2_TR(0x5df2da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df2dfull));
TAIL_STATIC(0x5d5eb0u,5d5);
}
B5df2df:L5df2df:{c.instructions+=2;NFSU2_TR(0x5df2df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df2e1:{NFSU2_TR(0x5df2e1);
if(r1(R+518)){{goto L5df315;}}
}
B5df2e3:L5df2e3:{c.instructions+=3;NFSU2_TR(0x5df2e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df2e4:{NFSU2_TR(0x5df2e4);
__builtin_memmove((R+4),(R+24),4);
}
B5df2e6:{NFSU2_TR(0x5df2e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df2ebull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df120u);}goto L5df120;}
}
B5df2eb:L5df2eb:{c.instructions+=4;NFSU2_TR(0x5df2eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5df2ef:{NFSU2_TR(0x5df2ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df2f0:{NFSU2_TR(0x5df2f0);
__builtin_memmove((R+4),(R+24),4);
}
B5df2f2:{NFSU2_TR(0x5df2f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df2f7ull));
TAIL_STATIC(0x5dadb0u,5da);
}
B5df2f7:L5df2f7:{c.instructions+=2;NFSU2_TR(0x5df2f7);
__builtin_memmove((R+4),(R+24),4);
}
B5df2f9:{NFSU2_TR(0x5df2f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df2feull));
TAIL_STATIC(0x5d60e0u,5d6);
}
B5df2fe:L5df2fe:{c.instructions+=2;NFSU2_TR(0x5df2fe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df2ff:{NFSU2_TR(0x5df2ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df304ull));
TAIL_STATIC(0x43e8e0u,43e);
}
B5df304:L5df304:{c.instructions+=5;NFSU2_TR(0x5df304);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df308:{NFSU2_TR(0x5df308);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4000ull))));
}
B5df30e:{NFSU2_TR(0x5df30e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5df311:{NFSU2_TR(0x5df311);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df313:{NFSU2_TR(0x5df313);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df2d0u);}goto L5df2d0;}}
}
B5df315:L5df315:{c.instructions+=4;NFSU2_TR(0x5df315);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df317:{NFSU2_TR(0x5df317);
__builtin_memmove((R+4),(R+24),4);
}
B5df319:{NFSU2_TR(0x5df319);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5df31f:{NFSU2_TR(0x5df31f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df324ull));
TAIL_STATIC(0x5d5eb0u,5d5);
}
B5df324:L5df324:{c.instructions+=3;NFSU2_TR(0x5df324);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df326:{NFSU2_TR(0x5df326);
__builtin_memmove((R+4),(R+24),4);
}
B5df328:{NFSU2_TR(0x5df328);
if(r1(R+518)){{goto L5df33f;}}
}
B5df32a:L5df32a:{c.instructions+=2;NFSU2_TR(0x5df32a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df32b:{NFSU2_TR(0x5df32b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df330ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df120u);}goto L5df120;}
}
B5df330:L5df330:{c.instructions+=1;NFSU2_TR(0x5df330);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df220u);}goto L5df220;}
}
B5df335:L5df335:{c.instructions+=7;NFSU2_TR(0x5df335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df336:{NFSU2_TR(0x5df336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df337:{NFSU2_TR(0x5df337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df338:{NFSU2_TR(0x5df338);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5df33a:{NFSU2_TR(0x5df33a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5df33b:{NFSU2_TR(0x5df33b);
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
B5df33e:{NFSU2_TR(0x5df33e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df33f:L5df33f:{c.instructions+=3;NFSU2_TR(0x5df33f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5df343:{NFSU2_TR(0x5df343);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df344:{NFSU2_TR(0x5df344);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df349ull));
TAIL_STATIC(0x5dadb0u,5da);
}
B5df349:L5df349:{c.instructions+=5;NFSU2_TR(0x5df349);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df34f:{NFSU2_TR(0x5df34f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df350:{NFSU2_TR(0x5df350);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+4))));
}
B5df352:{NFSU2_TR(0x5df352);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df35c:{NFSU2_TR(0x5df35c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df361ull));
TAIL_STATIC(0x43e8e0u,43e);
}
B5df361:L5df361:{c.instructions+=5;NFSU2_TR(0x5df361);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df364:{NFSU2_TR(0x5df364);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5df367:{NFSU2_TR(0x5df367);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B5df369:{NFSU2_TR(0x5df369);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df36b:{NFSU2_TR(0x5df36b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df389;}}
}
B5df36d:L5df36d:{c.instructions+=3;NFSU2_TR(0x5df36d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5df36f:{NFSU2_TR(0x5df36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df372:{NFSU2_TR(0x5df372);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B5df375:L5df375:{c.instructions+=2;NFSU2_TR(0x5df375);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5df379:{NFSU2_TR(0x5df379);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df383;}}
}
B5df37b:L5df37b:{c.instructions+=2;NFSU2_TR(0x5df37b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5df37e:{NFSU2_TR(0x5df37e);
if(r1(R+518)){{goto L5df383;}}
}
B5df380:L5df380:{c.instructions+=1;NFSU2_TR(0x5df380);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5df383:L5df383:{c.instructions+=3;NFSU2_TR(0x5df383);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B5df386:{NFSU2_TR(0x5df386);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B5df387:{NFSU2_TR(0x5df387);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df375u);}goto L5df375;}}
}
B5df389:L5df389:{c.instructions+=8;NFSU2_TR(0x5df389);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df38a:{NFSU2_TR(0x5df38a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df390:{NFSU2_TR(0x5df390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df391:{NFSU2_TR(0x5df391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df392:{NFSU2_TR(0x5df392);
__builtin_memmove((R+0),(R+12),1);
}
B5df394:{NFSU2_TR(0x5df394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5df395:{NFSU2_TR(0x5df395);
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
B5df398:{NFSU2_TR(0x5df398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df3a0:L5df3a0:{c.instructions+=8;NFSU2_TR(0x5df3a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5df3a3:{NFSU2_TR(0x5df3a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df3a4:{NFSU2_TR(0x5df3a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5df3a8:{NFSU2_TR(0x5df3a8);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df3ab:{NFSU2_TR(0x5df3ab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5df3b1:{NFSU2_TR(0x5df3b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df3b3:{NFSU2_TR(0x5df3b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5df3b6:{NFSU2_TR(0x5df3b6);
if(r1(R+514)){{goto L5df3c1;}}
}
B5df3b8:L5df3b8:{c.instructions+=4;NFSU2_TR(0x5df3b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5df3ba:{NFSU2_TR(0x5df3ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df3bb:{NFSU2_TR(0x5df3bb);
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
B5df3be:{NFSU2_TR(0x5df3be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df3c1:L5df3c1:{c.instructions+=18;NFSU2_TR(0x5df3c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df3c5:{NFSU2_TR(0x5df3c5);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df3c8:{NFSU2_TR(0x5df3c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df3c9:{NFSU2_TR(0x5df3c9);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df3cc:{NFSU2_TR(0x5df3cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df3cf:{NFSU2_TR(0x5df3cf);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5df3d1:{NFSU2_TR(0x5df3d1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5df3d3:{NFSU2_TR(0x5df3d3);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5df3d5:{NFSU2_TR(0x5df3d5);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5df3d7:{NFSU2_TR(0x5df3d7);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5df3d9:{NFSU2_TR(0x5df3d9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5df3db:{NFSU2_TR(0x5df3db);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5df3dd:{NFSU2_TR(0x5df3dd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df3df:{NFSU2_TR(0x5df3df);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5df3e3:{NFSU2_TR(0x5df3e3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5df3e9:{NFSU2_TR(0x5df3e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df3eb:{NFSU2_TR(0x5df3eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5df3ee:{NFSU2_TR(0x5df3ee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5df55d;}}
}
B5df3f4:L5df3f4:{c.instructions+=20;NFSU2_TR(0x5df3f4);
{u32 ea_=u32(u32(8013740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df3fa:{NFSU2_TR(0x5df3fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df3fb:{NFSU2_TR(0x5df3fb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df3fd:{NFSU2_TR(0x5df3fd);
w4(R+12,u32(0x64ull));
}
B5df402:{NFSU2_TR(0x5df402);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df405:{NFSU2_TR(0x5df405);
{u32 ea_=u32(u32(8013740u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df40b:{NFSU2_TR(0x5df40b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5df40d:{NFSU2_TR(0x5df40d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5df410:{NFSU2_TR(0x5df410);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df414:{NFSU2_TR(0x5df414);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df417:{NFSU2_TR(0x5df417);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5df41b:{NFSU2_TR(0x5df41b);
__builtin_memmove((R+0),(R+4),4);
}
B5df41d:{NFSU2_TR(0x5df41d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5df41e:{NFSU2_TR(0x5df41e);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5df41e);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5df41e);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5df420:{NFSU2_TR(0x5df420);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5df425:{NFSU2_TR(0x5df425);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5df427:{NFSU2_TR(0x5df427);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df42b:{NFSU2_TR(0x5df42b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df42d:{NFSU2_TR(0x5df42d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5df42f:{NFSU2_TR(0x5df42f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5df43a;}}
}
B5df431:L5df431:{c.instructions+=3;NFSU2_TR(0x5df431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5df434:{NFSU2_TR(0x5df434);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5df436:{NFSU2_TR(0x5df436);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df43a;}}
}
B5df438:L5df438:{c.instructions+=1;NFSU2_TR(0x5df438);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5df43a:L5df43a:{c.instructions+=3;NFSU2_TR(0x5df43a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df43b:{NFSU2_TR(0x5df43b);
w4(R+4,u32(0x883e70ull));
}
B5df440:{NFSU2_TR(0x5df440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df445ull));
TAIL_STATIC(0x5db720u,5db);
}
B5df445:L5df445:{c.instructions+=3;NFSU2_TR(0x5df445);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df447:{NFSU2_TR(0x5df447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5df448:{NFSU2_TR(0x5df448);
if(r1(R+518)){{goto L5df55d;}}
}
B5df44e:L5df44e:{c.instructions+=5;NFSU2_TR(0x5df44e);
u8 U[4];
w4(U+0,u32(0x4479c000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df453:{NFSU2_TR(0x5df453);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5df457:{NFSU2_TR(0x5df457);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df458:{NFSU2_TR(0x5df458);
__builtin_memmove((R+4),(R+0),4);
}
B5df45a:{NFSU2_TR(0x5df45a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df45full));
TAIL_STATIC(0x5d70d0u,5d7);
}
B5df45f:L5df45f:{c.instructions+=5;NFSU2_TR(0x5df45f);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df463:{NFSU2_TR(0x5df463);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5df467:{NFSU2_TR(0x5df467);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df468:{NFSU2_TR(0x5df468);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df469:{NFSU2_TR(0x5df469);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df46eull));
TAIL_STATIC(0x43ce50u,43c);
}
B5df46e:L5df46e:{c.instructions+=11;NFSU2_TR(0x5df46e);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df471:{NFSU2_TR(0x5df471);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5df475:{NFSU2_TR(0x5df475);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5df479:{NFSU2_TR(0x5df479);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df47a:{NFSU2_TR(0x5df47a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5df47e:{NFSU2_TR(0x5df47e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df482:{NFSU2_TR(0x5df482);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df485:{NFSU2_TR(0x5df485);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df486:{NFSU2_TR(0x5df486);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5df48a:{NFSU2_TR(0x5df48a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df48e:{NFSU2_TR(0x5df48e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df493ull));
TAIL_STATIC(0x401180u,401);
}
B5df493:L5df493:{c.instructions+=18;NFSU2_TR(0x5df493);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df496:{NFSU2_TR(0x5df496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5df498:{NFSU2_TR(0x5df498);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5df49c:{NFSU2_TR(0x5df49c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df4a0:{NFSU2_TR(0x5df4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df4a4:{NFSU2_TR(0x5df4a4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5df4a6:{NFSU2_TR(0x5df4a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5df4a9:{NFSU2_TR(0x5df4a9);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df4ad:{NFSU2_TR(0x5df4ad);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df4b1:{NFSU2_TR(0x5df4b1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5df4b3:{NFSU2_TR(0x5df4b3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df4b7:{NFSU2_TR(0x5df4b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df4b9:{NFSU2_TR(0x5df4b9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df4bd:{NFSU2_TR(0x5df4bd);
{u32 ea_=u32(u32(8013748u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5df4c3:{NFSU2_TR(0x5df4c3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5df4c9:{NFSU2_TR(0x5df4c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df4cb:{NFSU2_TR(0x5df4cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5df4ce:{NFSU2_TR(0x5df4ce);
if(r1(R+514)){{goto L5df4d6;}}
}
B5df4d0:L5df4d0:{c.instructions+=2;NFSU2_TR(0x5df4d0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df4d4:{NFSU2_TR(0x5df4d4);
{goto L5df4e0;}
}
B5df4d6:L5df4d6:{c.instructions+=2;NFSU2_TR(0x5df4d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df4d8:{NFSU2_TR(0x5df4d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df4e0:L5df4e0:{c.instructions+=3;NFSU2_TR(0x5df4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df4e4:{NFSU2_TR(0x5df4e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df4e5:{NFSU2_TR(0x5df4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df4eaull));
TAIL_STATIC(0x43c490u,43c);
}
B5df4ea:L5df4ea:{c.instructions+=14;NFSU2_TR(0x5df4ea);
__builtin_memmove((R+8),gp(0x7a47bc),4);
}
B5df4f0:{NFSU2_TR(0x5df4f0);
w4(R+4,u32(0x4000ull));
}
B5df4f5:{NFSU2_TR(0x5df4f5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5df4f8:{NFSU2_TR(0x5df4f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df4f9:{NFSU2_TR(0x5df4f9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5df4fb:{NFSU2_TR(0x5df4fb);
__builtin_memmove((R+0),gp(0x7a47b8),4);
}
B5df500:{NFSU2_TR(0x5df500);
w4(R+4,u32(r2(R+4)));
}
B5df503:{NFSU2_TR(0x5df503);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df507:{NFSU2_TR(0x5df507);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df508:{NFSU2_TR(0x5df508);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df509:{NFSU2_TR(0x5df509);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5df50d:{NFSU2_TR(0x5df50d);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df513:{NFSU2_TR(0x5df513);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df516:{NFSU2_TR(0x5df516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df51bull));
TAIL_STATIC(0x401090u,401);
}
B5df51b:L5df51b:{c.instructions+=13;NFSU2_TR(0x5df51b);
{u32 ea_=u32(u32(8013756u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5df521:{NFSU2_TR(0x5df521);
{u32 ea_=u32(u32(8013756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df527:{NFSU2_TR(0x5df527);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5df52a:{NFSU2_TR(0x5df52a);
{u32 ea_=u32(u32(8013752u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5df530:{NFSU2_TR(0x5df530);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B5df532:{NFSU2_TR(0x5df532);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df536:{NFSU2_TR(0x5df536);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df53c:{NFSU2_TR(0x5df53c);
{u32 ea_=u32(u32(8013760u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5df542:{NFSU2_TR(0x5df542);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5df544:{NFSU2_TR(0x5df544);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5df54a:{NFSU2_TR(0x5df54a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df54e:{NFSU2_TR(0x5df54e);
{u32 ea_=u32(u32(8013744u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5df554:{NFSU2_TR(0x5df554);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df559ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5df559:L5df559:{c.instructions+=2;NFSU2_TR(0x5df559);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df55b:{NFSU2_TR(0x5df55b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5df567;}}
}
B5df55d:L5df55d:{c.instructions+=5;NFSU2_TR(0x5df55d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df55e:{NFSU2_TR(0x5df55e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5df560:{NFSU2_TR(0x5df560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df561:{NFSU2_TR(0x5df561);
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
B5df564:{NFSU2_TR(0x5df564);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df567:L5df567:{c.instructions+=2;NFSU2_TR(0x5df567);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df56a:{NFSU2_TR(0x5df56a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df571;}}
}
B5df56c:L5df56c:{c.instructions+=1;NFSU2_TR(0x5df56c);
w4(R+0,u32(0x2ull));
}
B5df571:L5df571:{c.instructions+=4;NFSU2_TR(0x5df571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df572:{NFSU2_TR(0x5df572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df573:{NFSU2_TR(0x5df573);
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
B5df576:{NFSU2_TR(0x5df576);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df580:L5df580:{c.instructions+=7;NFSU2_TR(0x5df580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5df583:{NFSU2_TR(0x5df583);
__builtin_memmove((R+0),(R+4),4);
}
B5df585:{NFSU2_TR(0x5df585);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df58b:{NFSU2_TR(0x5df58b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df58d:{NFSU2_TR(0x5df58d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df591:{NFSU2_TR(0x5df591);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df599:{NFSU2_TR(0x5df599);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df620;}}
}
B5df59f:L5df59f:{c.instructions+=7;NFSU2_TR(0x5df59f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df5a0:{NFSU2_TR(0x5df5a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df5a1:{NFSU2_TR(0x5df5a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x29cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df5a7:{NFSU2_TR(0x5df5a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df5a8:{NFSU2_TR(0x5df5a8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df5ac:{NFSU2_TR(0x5df5ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df5ad:{NFSU2_TR(0x5df5ad);
__builtin_memmove((R+4),(R+4),4);
}
B5df5b0:L5df5b0:{c.instructions+=5;NFSU2_TR(0x5df5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df5b4:{NFSU2_TR(0x5df5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5df5b6:{NFSU2_TR(0x5df5b6);
w4(R+24,u32(0x63ull));
}
B5df5bb:{NFSU2_TR(0x5df5bb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5df5bd:{NFSU2_TR(0x5df5bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df5c3:L5df5c3:{c.instructions+=6;NFSU2_TR(0x5df5c3);
__builtin_memmove((R+4),(R+12),4);
}
B5df5c5:{NFSU2_TR(0x5df5c5);
w4(R+8,u32(0x1ull));
}
B5df5ca:{NFSU2_TR(0x5df5ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B5df5cc:{NFSU2_TR(0x5df5cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5df5d0:{NFSU2_TR(0x5df5d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df5d2:{NFSU2_TR(0x5df5d2);
if(r1(R+518)){{goto L5df5e7;}}
}
B5df5d4:L5df5d4:{c.instructions+=4;NFSU2_TR(0x5df5d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df5d5:{NFSU2_TR(0x5df5d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df5d6:{NFSU2_TR(0x5df5d6);
__builtin_memmove((R+4),(R+0),4);
}
B5df5d8:{NFSU2_TR(0x5df5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df5ddull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df3a0u);}goto L5df3a0;}
}
B5df5dd:L5df5dd:{c.instructions+=2;NFSU2_TR(0x5df5dd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df5df:{NFSU2_TR(0x5df5df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df5e3;}}
}
B5df5e1:L5df5e1:{c.instructions+=1;NFSU2_TR(0x5df5e1);
__builtin_memmove((R+24),(R+0),4);
}
B5df5e3:L5df5e3:{c.instructions+=1;NFSU2_TR(0x5df5e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df5e7:L5df5e7:{c.instructions+=4;NFSU2_TR(0x5df5e7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5df5e8:{NFSU2_TR(0x5df5e8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x5cull))));
}
B5df5eb:{NFSU2_TR(0x5df5eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df5ee:{NFSU2_TR(0x5df5ee);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df5c3u);}goto L5df5c3;}}
}
B5df5f0:L5df5f0:{c.instructions+=13;NFSU2_TR(0x5df5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5df5f3:{NFSU2_TR(0x5df5f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x186a0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5df5f9:{NFSU2_TR(0x5df5f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df5fd:{NFSU2_TR(0x5df5fd);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5df5ff:{NFSU2_TR(0x5df5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df602:{NFSU2_TR(0x5df602);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5df606:{NFSU2_TR(0x5df606);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df60c:{NFSU2_TR(0x5df60c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5df60d:{NFSU2_TR(0x5df60d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5df610:{NFSU2_TR(0x5df610);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df612:{NFSU2_TR(0x5df612);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df616:{NFSU2_TR(0x5df616);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df61a:{NFSU2_TR(0x5df61a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df5b0u);}goto L5df5b0;}}
}
B5df61c:L5df61c:{c.instructions+=4;NFSU2_TR(0x5df61c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df61d:{NFSU2_TR(0x5df61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df61e:{NFSU2_TR(0x5df61e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df61f:{NFSU2_TR(0x5df61f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5df620:L5df620:{c.instructions+=2;NFSU2_TR(0x5df620);
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
B5df623:{NFSU2_TR(0x5df623);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df630:L5df630:{c.instructions+=11;NFSU2_TR(0x5df630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df634:{NFSU2_TR(0x5df634);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5df638:{NFSU2_TR(0x5df638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5df63b:{NFSU2_TR(0x5df63b);
__builtin_memmove((R+0),(R+4),4);
}
B5df63d:{NFSU2_TR(0x5df63d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5df63e:{NFSU2_TR(0x5df63e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df63f:{NFSU2_TR(0x5df63f);
w4(R+24,u32(0x64ull));
}
B5df644:{NFSU2_TR(0x5df644);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5df644);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5df644);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5df646:{NFSU2_TR(0x5df646);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5df64b:{NFSU2_TR(0x5df64b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5df64d:{NFSU2_TR(0x5df64d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5df658;}}
}
B5df64f:L5df64f:{c.instructions+=3;NFSU2_TR(0x5df64f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5df652:{NFSU2_TR(0x5df652);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5df654:{NFSU2_TR(0x5df654);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df658;}}
}
B5df656:L5df656:{c.instructions+=1;NFSU2_TR(0x5df656);
u8 U[6];
w1(R+512,u8((r4(R+4))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5df658:L5df658:{c.instructions+=3;NFSU2_TR(0x5df658);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df659:{NFSU2_TR(0x5df659);
w4(R+4,u32(0x883e70ull));
}
B5df65e:{NFSU2_TR(0x5df65e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df663ull));
TAIL_STATIC(0x5db720u,5db);
}
B5df663:L5df663:{c.instructions+=3;NFSU2_TR(0x5df663);
__builtin_memmove((R+24),(R+0),4);
}
B5df665:{NFSU2_TR(0x5df665);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df667:{NFSU2_TR(0x5df667);
if(r1(R+518)){{goto L5df6e2;}}
}
B5df669:L5df669:{c.instructions+=17;NFSU2_TR(0x5df669);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df66d:{NFSU2_TR(0x5df66d);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df670:{NFSU2_TR(0x5df670);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5df673:{NFSU2_TR(0x5df673);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df679:{NFSU2_TR(0x5df679);
u8 U[4];
w4(U+0,u32(0x4479c000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df67e:{NFSU2_TR(0x5df67e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df681:{NFSU2_TR(0x5df681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df682:{NFSU2_TR(0x5df682);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df688:{NFSU2_TR(0x5df688);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5df68a:{NFSU2_TR(0x5df68a);
__builtin_memmove((R+4),(R+24),4);
}
B5df68c:{NFSU2_TR(0x5df68c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5df68e:{NFSU2_TR(0x5df68e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df692:{NFSU2_TR(0x5df692);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df695:{NFSU2_TR(0x5df695);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5df697:{NFSU2_TR(0x5df697);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df69b:{NFSU2_TR(0x5df69b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df69d:{NFSU2_TR(0x5df69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df6a2ull));
TAIL_STATIC(0x5d70d0u,5d7);
}
B5df6a2:L5df6a2:{c.instructions+=6;NFSU2_TR(0x5df6a2);
u8 U[4];
w4(U+0,u32(0x4479c000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df6a7:{NFSU2_TR(0x5df6a7);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df6ab:{NFSU2_TR(0x5df6ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5df6af:{NFSU2_TR(0x5df6af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df6b0:{NFSU2_TR(0x5df6b0);
__builtin_memmove((R+4),(R+24),4);
}
B5df6b2:{NFSU2_TR(0x5df6b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df6b7ull));
TAIL_STATIC(0x5d70d0u,5d7);
}
B5df6b7:L5df6b7:{c.instructions+=4;NFSU2_TR(0x5df6b7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5df6bb:{NFSU2_TR(0x5df6bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df6bd:{NFSU2_TR(0x5df6bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5df6c0:{NFSU2_TR(0x5df6c0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df6ef;}}
}
B5df6c2:L5df6c2:{c.instructions+=6;NFSU2_TR(0x5df6c2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df6c4:{NFSU2_TR(0x5df6c4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df6c8:{NFSU2_TR(0x5df6c8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5df6ce:{NFSU2_TR(0x5df6ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df6d0:{NFSU2_TR(0x5df6d0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5df6d3:{NFSU2_TR(0x5df6d3);
if(r1(R+514)){{goto L5df6e2;}}
}
B5df6d5:L5df6d5:{c.instructions+=4;NFSU2_TR(0x5df6d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df6db:{NFSU2_TR(0x5df6db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df6dc:{NFSU2_TR(0x5df6dc);
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
B5df6df:{NFSU2_TR(0x5df6df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df6e2:L5df6e2:{c.instructions+=4;NFSU2_TR(0x5df6e2);
{u32 ea_=u32(u32(8016524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df6e8:{NFSU2_TR(0x5df6e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df6e9:{NFSU2_TR(0x5df6e9);
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
B5df6ec:{NFSU2_TR(0x5df6ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df6ef:L5df6ef:{c.instructions+=7;NFSU2_TR(0x5df6ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5df6f3:{NFSU2_TR(0x5df6f3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5df6f7:{NFSU2_TR(0x5df6f7);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5df6fd:{NFSU2_TR(0x5df6fd);
{u32 ea_=u32(u32(8016524u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5df703:{NFSU2_TR(0x5df703);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df705:{NFSU2_TR(0x5df705);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5df708:{NFSU2_TR(0x5df708);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5df712;}}
}
B5df70a:L5df70a:{c.instructions+=2;NFSU2_TR(0x5df70a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df70c:{NFSU2_TR(0x5df70c);
{u32 ea_=u32(u32(8016524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df712:L5df712:{c.instructions+=3;NFSU2_TR(0x5df712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df713:{NFSU2_TR(0x5df713);
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
B5df716:{NFSU2_TR(0x5df716);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df720:L5df720:{c.instructions+=10;NFSU2_TR(0x5df720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5df723:{NFSU2_TR(0x5df723);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df724:{NFSU2_TR(0x5df724);
__builtin_memmove((R+20),(R+4),4);
}
B5df726:{NFSU2_TR(0x5df726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df72c:{NFSU2_TR(0x5df72c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5df72e:{NFSU2_TR(0x5df72e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df730:{NFSU2_TR(0x5df730);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x42c60000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df738:{NFSU2_TR(0x5df738);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df73c:{NFSU2_TR(0x5df73c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df740:{NFSU2_TR(0x5df740);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5df7fb;}}
}
B5df746:L5df746:{c.instructions+=5;NFSU2_TR(0x5df746);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df747:{NFSU2_TR(0x5df747);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x29cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5df74d:{NFSU2_TR(0x5df74d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df74e:{NFSU2_TR(0x5df74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df752:{NFSU2_TR(0x5df752);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df753:L5df753:{c.instructions+=9;NFSU2_TR(0x5df753);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df757:{NFSU2_TR(0x5df757);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5df759:{NFSU2_TR(0x5df759);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5df75d:{NFSU2_TR(0x5df75d);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5df75e:{NFSU2_TR(0x5df75e);
w4(R+4,u32(0x64ull));
}
B5df763:{NFSU2_TR(0x5df763);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5df763);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5df763);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5df765:{NFSU2_TR(0x5df765);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5df767:{NFSU2_TR(0x5df767);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5df769:{NFSU2_TR(0x5df769);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5df7c1;}}
}
B5df76b:L5df76b:{c.instructions+=2;NFSU2_TR(0x5df76b);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5df76d:{NFSU2_TR(0x5df76d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5df7c1;}}
}
B5df76f:L5df76f:{c.instructions+=3;NFSU2_TR(0x5df76f);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5df774:{NFSU2_TR(0x5df774);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df776:{NFSU2_TR(0x5df776);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5df7c1;}}
}
B5df778:L5df778:{c.instructions+=3;NFSU2_TR(0x5df778);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5df77a:{NFSU2_TR(0x5df77a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df77c:{NFSU2_TR(0x5df77c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5df7c1;}}
}
B5df77e:L5df77e:{c.instructions+=3;NFSU2_TR(0x5df77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df781:{NFSU2_TR(0x5df781);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df784:{NFSU2_TR(0x5df784);
if(r1(R+518)){{goto L5df7c1;}}
}
B5df786:L5df786:{c.instructions+=2;NFSU2_TR(0x5df786);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df789:{NFSU2_TR(0x5df789);
if(r1(R+518)){{goto L5df7c1;}}
}
B5df78b:L5df78b:{c.instructions+=2;NFSU2_TR(0x5df78b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df791:{NFSU2_TR(0x5df791);
w4(R+12,u32(0x2ull));
}
B5df796:L5df796:{c.instructions+=2;NFSU2_TR(0x5df796);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x0ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B5df799:{NFSU2_TR(0x5df799);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5df7bb;}}
}
B5df79b:L5df79b:{c.instructions+=4;NFSU2_TR(0x5df79b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df79c:{NFSU2_TR(0x5df79c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df79d:{NFSU2_TR(0x5df79d);
__builtin_memmove((R+4),(R+20),4);
}
B5df79f:{NFSU2_TR(0x5df79f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df7a4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df630u);}goto L5df630;}
}
B5df7a4:L5df7a4:{c.instructions+=4;NFSU2_TR(0x5df7a4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5df7a8:{NFSU2_TR(0x5df7a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df7aa:{NFSU2_TR(0x5df7aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5df7ad:{NFSU2_TR(0x5df7ad);
if(r1(R+514)){{goto L5df7b9;}}
}
B5df7af:L5df7af:{c.instructions+=3;NFSU2_TR(0x5df7af);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5df7b3:{NFSU2_TR(0x5df7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df7b7:{NFSU2_TR(0x5df7b7);
{goto L5df7bb;}
}
B5df7b9:L5df7b9:{c.instructions+=1;NFSU2_TR(0x5df7b9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df7bb:L5df7bb:{c.instructions+=3;NFSU2_TR(0x5df7bb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x5cull))));
}
B5df7be:{NFSU2_TR(0x5df7be);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B5df7bf:{NFSU2_TR(0x5df7bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df796u);}goto L5df796;}}
}
B5df7c1:L5df7c1:{c.instructions+=9;NFSU2_TR(0x5df7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df7c5:{NFSU2_TR(0x5df7c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df7c9:{NFSU2_TR(0x5df7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df7cf:{NFSU2_TR(0x5df7cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5df7d0:{NFSU2_TR(0x5df7d0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5df7d3:{NFSU2_TR(0x5df7d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5df7d5:{NFSU2_TR(0x5df7d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df7d9:{NFSU2_TR(0x5df7d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df7dd:{NFSU2_TR(0x5df7dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df753u);}goto L5df753;}}
}
B5df7e3:L5df7e3:{c.instructions+=10;NFSU2_TR(0x5df7e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df7e7:{NFSU2_TR(0x5df7e7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df7eb:{NFSU2_TR(0x5df7eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df7ef:{NFSU2_TR(0x5df7ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df7f0:{NFSU2_TR(0x5df7f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df7f1:{NFSU2_TR(0x5df7f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5df7f2:{NFSU2_TR(0x5df7f2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5df7f4:{NFSU2_TR(0x5df7f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df7f5:{NFSU2_TR(0x5df7f5);
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
B5df7f8:{NFSU2_TR(0x5df7f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df7fb:L5df7fb:{c.instructions+=6;NFSU2_TR(0x5df7fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df7ff:{NFSU2_TR(0x5df7ff);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df803:{NFSU2_TR(0x5df803);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5df805:{NFSU2_TR(0x5df805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5df806:{NFSU2_TR(0x5df806);
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
B5df809:{NFSU2_TR(0x5df809);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df810:L5df810:{c.instructions+=4;NFSU2_TR(0x5df810);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df811:{NFSU2_TR(0x5df811);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B5df816:{NFSU2_TR(0x5df816);
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
B5df818:{NFSU2_TR(0x5df818);
if(r1(R+518)){{goto L5df890;}}
}
B5df81a:L5df81a:{c.instructions+=3;NFSU2_TR(0x5df81a);
__builtin_memmove((R+0),(R+16),4);
}
B5df81e:{NFSU2_TR(0x5df81e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df81f:{NFSU2_TR(0x5df81f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df824ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df720u);}goto L5df720;}
}
B5df824:L5df824:{c.instructions+=4;NFSU2_TR(0x5df824);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5df82a:{NFSU2_TR(0x5df82a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5df82c:{NFSU2_TR(0x5df82c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df82f:{NFSU2_TR(0x5df82f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df866;}}
}
B5df831:L5df831:{c.instructions+=3;NFSU2_TR(0x5df831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5df835:{NFSU2_TR(0x5df835);
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
B5df837:{NFSU2_TR(0x5df837);
if(r1(R+518)){{goto L5df88e;}}
}
B5df839:L5df839:{c.instructions+=7;NFSU2_TR(0x5df839);
{u32 ea_=u32(u32(8013764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5df83f:{NFSU2_TR(0x5df83f);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5df845:{NFSU2_TR(0x5df845);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5df847:{NFSU2_TR(0x5df847);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5df849:{NFSU2_TR(0x5df849);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df84b:{NFSU2_TR(0x5df84b);
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
B5df84e:{NFSU2_TR(0x5df84e);
if(r1(R+514)){{goto L5df88e;}}
}
B5df850:L5df850:{c.instructions+=4;NFSU2_TR(0x5df850);
{u32 ea_=u32(u32(8013764u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5df856:{NFSU2_TR(0x5df856);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df858:{NFSU2_TR(0x5df858);
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
B5df85b:{NFSU2_TR(0x5df85b);
if(r1(R+514)){{goto L5df890;}}
}
B5df85d:L5df85d:{c.instructions+=2;NFSU2_TR(0x5df85d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df85f:{NFSU2_TR(0x5df85f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df864ull));
TAIL_STATIC(0x5f43b0u,5f4);
}
B5df864:L5df864:{c.instructions+=2;NFSU2_TR(0x5df864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df865:{NFSU2_TR(0x5df865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df866:L5df866:{c.instructions+=2;NFSU2_TR(0x5df866);
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
B5df869:{NFSU2_TR(0x5df869);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df88e;}}
}
B5df86b:L5df86b:{c.instructions+=3;NFSU2_TR(0x5df86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df86e:{NFSU2_TR(0x5df86e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df871:{NFSU2_TR(0x5df871);
if(r1(R+518)){{goto L5df878;}}
}
B5df873:L5df873:{c.instructions+=2;NFSU2_TR(0x5df873);
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
B5df876:{NFSU2_TR(0x5df876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df88e;}}
}
B5df878:L5df878:{c.instructions+=4;NFSU2_TR(0x5df878);
{u32 ea_=u32(u32(8013764u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5df87e:{NFSU2_TR(0x5df87e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5df880:{NFSU2_TR(0x5df880);
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
B5df883:{NFSU2_TR(0x5df883);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df890;}}
}
B5df885:L5df885:{c.instructions+=2;NFSU2_TR(0x5df885);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df887:{NFSU2_TR(0x5df887);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df88cull));
TAIL_STATIC(0x5f43d0u,5f4);
}
B5df88c:L5df88c:{c.instructions+=2;NFSU2_TR(0x5df88c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df88d:{NFSU2_TR(0x5df88d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df88e:L5df88e:{c.instructions+=1;NFSU2_TR(0x5df88e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5df890:L5df890:{c.instructions+=2;NFSU2_TR(0x5df890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df891:{NFSU2_TR(0x5df891);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df8a0:L5df8a0:{c.instructions+=10;NFSU2_TR(0x5df8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df8a6:{NFSU2_TR(0x5df8a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df8a8:{NFSU2_TR(0x5df8a8);
u8 U[4];
w4(U+0,u32(0x7793abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df8ad:{NFSU2_TR(0x5df8ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df8ae:{NFSU2_TR(0x5df8ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5df8b2:{NFSU2_TR(0x5df8b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df8b9:{NFSU2_TR(0x5df8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5df8bb:{NFSU2_TR(0x5df8bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5df8be:{NFSU2_TR(0x5df8be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34107ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df8c4:{NFSU2_TR(0x5df8c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df8f4;}}
}
B5df8c6:L5df8c6:{c.instructions+=6;NFSU2_TR(0x5df8c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df8c9:{NFSU2_TR(0x5df8c9);
__builtin_memmove(gp(0x883df0),(R+4),4);
}
B5df8cf:{NFSU2_TR(0x5df8cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df8d2:{NFSU2_TR(0x5df8d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5df8d5:{NFSU2_TR(0x5df8d5);
__builtin_memmove(gp(0x883df4),(R+8),4);
}
B5df8db:{NFSU2_TR(0x5df8db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df8e0ull));
TAIL_STATIC(0x5d63e0u,5d6);
}
B5df8e0:L5df8e0:{c.instructions+=5;NFSU2_TR(0x5df8e0);
w4(R+0,u32(0x1ull));
}
B5df8e5:{NFSU2_TR(0x5df8e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df8e9:{NFSU2_TR(0x5df8e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df8f0:{NFSU2_TR(0x5df8f0);
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
B5df8f3:{NFSU2_TR(0x5df8f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5df8f4:L5df8f4:{c.instructions+=2;NFSU2_TR(0x5df8f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80034100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df8fa:{NFSU2_TR(0x5df8fa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfb86;}}
}
B5df900:L5df900:{c.instructions+=11;NFSU2_TR(0x5df900);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df903:{NFSU2_TR(0x5df903);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df904:{NFSU2_TR(0x5df904);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df905:{NFSU2_TR(0x5df905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df906:{NFSU2_TR(0x5df906);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df907:{NFSU2_TR(0x5df907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5df90a:{NFSU2_TR(0x5df90a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5df90e:{NFSU2_TR(0x5df90e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5df910:{NFSU2_TR(0x5df910);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5df912:{NFSU2_TR(0x5df912);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df916:{NFSU2_TR(0x5df916);
if(r1(R+518)){{goto L5dfa7a;}}
}
B5df91c:L5df91c:{c.instructions+=1;NFSU2_TR(0x5df91c);
__builtin_memmove((R+16),(R+16),4);
}
B5df920:L5df920:{c.instructions+=3;NFSU2_TR(0x5df920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5df922:{NFSU2_TR(0x5df922);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df927:{NFSU2_TR(0x5df927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df993;}}
}
B5df929:L5df929:{c.instructions+=6;NFSU2_TR(0x5df929);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5df92c:{NFSU2_TR(0x5df92c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff0ull))));
}
B5df92f:{NFSU2_TR(0x5df92f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5df932:{NFSU2_TR(0x5df932);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5df933:{NFSU2_TR(0x5df933);
w4(R+4,u32(0x883e70ull));
}
B5df938:{NFSU2_TR(0x5df938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5df93dull));
TAIL_STATIC(0x5db680u,5db);
}
B5df93d:L5df93d:{c.instructions+=11;NFSU2_TR(0x5df93d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df940:{NFSU2_TR(0x5df940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df943:{NFSU2_TR(0x5df943);
w4(R+0,u32(0x51eb851full));
}
B5df948:{NFSU2_TR(0x5df948);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5df94a:{NFSU2_TR(0x5df94a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5df94d:{NFSU2_TR(0x5df94d);
__builtin_memmove((R+0),(R+8),4);
}
B5df94f:{NFSU2_TR(0x5df94f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5df952:{NFSU2_TR(0x5df952);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5df954:{NFSU2_TR(0x5df954);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x40ull))));
}
B5df957:{NFSU2_TR(0x5df957);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x5aull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5df95a:{NFSU2_TR(0x5df95a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df978;}}
}
B5df95c:L5df95c:{c.instructions+=6;NFSU2_TR(0x5df95c);
__builtin_memmove((R+0),gp(0x88ead4),4);
}
B5df961:{NFSU2_TR(0x5df961);
__builtin_memmove(gp(0x88ead4),(R+24),4);
}
B5df967:{NFSU2_TR(0x5df967);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df96a:{NFSU2_TR(0x5df96a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x88ead4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5df971:{NFSU2_TR(0x5df971);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5df973:{NFSU2_TR(0x5df973);
{goto L5dfa67;}
}
B5df978:L5df978:{c.instructions+=6;NFSU2_TR(0x5df978);
__builtin_memmove((R+0),gp(0x88ead8),4);
}
B5df97d:{NFSU2_TR(0x5df97d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5df97f:{NFSU2_TR(0x5df97f);
__builtin_memmove(gp(0x88ead8),(R+24),4);
}
B5df985:{NFSU2_TR(0x5df985);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df988:{NFSU2_TR(0x5df988);
u8 U[4];
w4(U+0,u32(0x88ead4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5df98e:{NFSU2_TR(0x5df98e);
{goto L5dfa67;}
}
B5df993:L5df993:{c.instructions+=2;NFSU2_TR(0x5df993);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34102ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df998:{NFSU2_TR(0x5df998);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df9b5;}}
}
B5df99a:L5df99a:{c.instructions+=8;NFSU2_TR(0x5df99a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5df99d:{NFSU2_TR(0x5df99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df9a0:{NFSU2_TR(0x5df9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df9a3:{NFSU2_TR(0x5df9a3);
w4(R+0,u32(0xf0f0f0f1ull));
}
B5df9a8:{NFSU2_TR(0x5df9a8);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5df9aa:{NFSU2_TR(0x5df9aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5df9ad:{NFSU2_TR(0x5df9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df9b0:{NFSU2_TR(0x5df9b0);
{goto L5dfa67;}
}
B5df9b5:L5df9b5:{c.instructions+=2;NFSU2_TR(0x5df9b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34103ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df9ba:{NFSU2_TR(0x5df9ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df9de;}}
}
B5df9bc:L5df9bc:{c.instructions+=11;NFSU2_TR(0x5df9bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5df9bf:{NFSU2_TR(0x5df9bf);
__builtin_memmove((R+8),(R+0),4);
}
B5df9c1:{NFSU2_TR(0x5df9c1);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B5df9c4:{NFSU2_TR(0x5df9c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df9c7:{NFSU2_TR(0x5df9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df9ca:{NFSU2_TR(0x5df9ca);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5df9cd:{NFSU2_TR(0x5df9cd);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5df9cf:{NFSU2_TR(0x5df9cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5df9d3:{NFSU2_TR(0x5df9d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5df9d6:{NFSU2_TR(0x5df9d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df9d9:{NFSU2_TR(0x5df9d9);
{goto L5dfa67;}
}
B5df9de:L5df9de:{c.instructions+=2;NFSU2_TR(0x5df9de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5df9e3:{NFSU2_TR(0x5df9e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5df9fd;}}
}
B5df9e5:L5df9e5:{c.instructions+=8;NFSU2_TR(0x5df9e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5df9e8:{NFSU2_TR(0x5df9e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df9eb:{NFSU2_TR(0x5df9eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5df9ee:{NFSU2_TR(0x5df9ee);
w4(R+0,u32(0x38e38e39ull));
}
B5df9f3:{NFSU2_TR(0x5df9f3);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5df9f5:{NFSU2_TR(0x5df9f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5df9f8:{NFSU2_TR(0x5df9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5df9fb:{NFSU2_TR(0x5df9fb);
{goto L5dfa67;}
}
B5df9fd:L5df9fd:{c.instructions+=2;NFSU2_TR(0x5df9fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34105ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfa02:{NFSU2_TR(0x5dfa02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfa51;}}
}
B5dfa04:L5dfa04:{c.instructions+=3;NFSU2_TR(0x5dfa04);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dfa07:{NFSU2_TR(0x5dfa07);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dfa09:{NFSU2_TR(0x5dfa09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfa67;}}
}
B5dfa0b:L5dfa0b:{c.instructions+=6;NFSU2_TR(0x5dfa0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfa0e:{NFSU2_TR(0x5dfa0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dfa11:{NFSU2_TR(0x5dfa11);
__builtin_memmove((R+12),(R+0),4);
}
B5dfa13:{NFSU2_TR(0x5dfa13);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5dfa15:{NFSU2_TR(0x5dfa15);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfa17:{NFSU2_TR(0x5dfa17);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dfa67;}}
}
B5dfa19:L5dfa19:{c.instructions+=1;NFSU2_TR(0x5dfa19);
__builtin_memmove((R+16),(R+16),4);
}
B5dfa20:L5dfa20:{c.instructions+=7;NFSU2_TR(0x5dfa20);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+4,u32(r2(U+12)));
}
B5dfa25:{NFSU2_TR(0x5dfa25);
__builtin_memmove((R+8),gp(0x883df0),4);
}
B5dfa2b:{NFSU2_TR(0x5dfa2b);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B5dfa30:{NFSU2_TR(0x5dfa30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5dfa33:{NFSU2_TR(0x5dfa33);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dfa37:{NFSU2_TR(0x5dfa37);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfa39:{NFSU2_TR(0x5dfa39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfa4a;}}
}
B5dfa3b:L5dfa3b:{c.instructions+=4;NFSU2_TR(0x5dfa3b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B5dfa3e:{NFSU2_TR(0x5dfa3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfa41:{NFSU2_TR(0x5dfa41);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfa43:{NFSU2_TR(0x5dfa43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfa4a;}}
}
B5dfa45:L5dfa45:{c.instructions+=1;NFSU2_TR(0x5dfa45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfa4aull));
TAIL_STATIC(0x5db0e0u,5db);
}
B5dfa4a:L5dfa4a:{c.instructions+=3;NFSU2_TR(0x5dfa4a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5dfa4b:{NFSU2_TR(0x5dfa4b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfa4d:{NFSU2_TR(0x5dfa4d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfa20u);}goto L5dfa20;}}
}
B5dfa4f:L5dfa4f:{c.instructions+=1;NFSU2_TR(0x5dfa4f);
{goto L5dfa67;}
}
B5dfa51:L5dfa51:{c.instructions+=2;NFSU2_TR(0x5dfa51);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34106ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfa56:{NFSU2_TR(0x5dfa56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfa67;}}
}
B5dfa58:L5dfa58:{c.instructions+=5;NFSU2_TR(0x5dfa58);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dfa5b:{NFSU2_TR(0x5dfa5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfa5e:{NFSU2_TR(0x5dfa5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfa61:{NFSU2_TR(0x5dfa61);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5dfa64:{NFSU2_TR(0x5dfa64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfa67:L5dfa67:{c.instructions+=5;NFSU2_TR(0x5dfa67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfa6a:{NFSU2_TR(0x5dfa6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfa6e:{NFSU2_TR(0x5dfa6e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5dfa72:{NFSU2_TR(0x5dfa72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfa74:{NFSU2_TR(0x5dfa74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5df920u);}goto L5df920;}}
}
B5dfa7a:L5dfa7a:{c.instructions+=5;NFSU2_TR(0x5dfa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfa7d:{NFSU2_TR(0x5dfa7d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dfa7f:{NFSU2_TR(0x5dfa7f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfa81:{NFSU2_TR(0x5dfa81);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfa85:{NFSU2_TR(0x5dfa85);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dfb5c;}}
}
B5dfa8b:L5dfa8b:{c.instructions+=2;NFSU2_TR(0x5dfa8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfa8f:{NFSU2_TR(0x5dfa8f);
}
B5dfa90:L5dfa90:{c.instructions+=3;NFSU2_TR(0x5dfa90);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B5dfa95:{NFSU2_TR(0x5dfa95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfa97:{NFSU2_TR(0x5dfa97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfb5c;}}
}
B5dfa9d:L5dfa9d:{c.instructions+=6;NFSU2_TR(0x5dfa9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dfaa0:{NFSU2_TR(0x5dfaa0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B5dfaa4:{NFSU2_TR(0x5dfaa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfaa8:{NFSU2_TR(0x5dfaa8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5dfaaa:{NFSU2_TR(0x5dfaaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dfaad:{NFSU2_TR(0x5dfaad);
__builtin_memmove((R+4),(R+4),4);
}
B5dfab0:L5dfab0:{c.instructions+=3;NFSU2_TR(0x5dfab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5dfab2:{NFSU2_TR(0x5dfab2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfab4:{NFSU2_TR(0x5dfab4);
if(r1(R+518)){{goto L5dfb30;}}
}
B5dfab6:L5dfab6:{c.instructions+=2;NFSU2_TR(0x5dfab6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbe43edbbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfabc:{NFSU2_TR(0x5dfabc);
if(r1(R+518)){{goto L5dfb30;}}
}
B5dfabe:L5dfabe:{c.instructions+=2;NFSU2_TR(0x5dfabe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x72923c81ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfac4:{NFSU2_TR(0x5dfac4);
if(r1(R+518)){{goto L5dfb30;}}
}
B5dfac6:L5dfac6:{c.instructions+=3;NFSU2_TR(0x5dfac6);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dfac8:{NFSU2_TR(0x5dfac8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfaca:{NFSU2_TR(0x5dfaca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dfaf1;}}
}
B5dfacc:L5dfacc:{c.instructions+=2;NFSU2_TR(0x5dfacc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x30ull))));
}
B5dfacf:{NFSU2_TR(0x5dfacf);
}
B5dfad0:L5dfad0:{c.instructions+=3;NFSU2_TR(0x5dfad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dfad2:{NFSU2_TR(0x5dfad2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfad4:{NFSU2_TR(0x5dfad4);
if(r1(R+518)){{goto L5dfadb;}}
}
B5dfad6:L5dfad6:{c.instructions+=2;NFSU2_TR(0x5dfad6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dfad9:{NFSU2_TR(0x5dfad9);
if(r1(R+518)){{goto L5dfae5;}}
}
B5dfadb:L5dfadb:{c.instructions+=4;NFSU2_TR(0x5dfadb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5dfadc:{NFSU2_TR(0x5dfadc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5dfadf:{NFSU2_TR(0x5dfadf);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfae1:{NFSU2_TR(0x5dfae1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfad0u);}goto L5dfad0;}}
}
B5dfae3:L5dfae3:{c.instructions+=1;NFSU2_TR(0x5dfae3);
{goto L5dfaf1;}
}
B5dfae5:L5dfae5:{c.instructions+=4;NFSU2_TR(0x5dfae5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dfae9:{NFSU2_TR(0x5dfae9);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5dfaed:{NFSU2_TR(0x5dfaed);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfaef:{NFSU2_TR(0x5dfaef);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfb29;}}
}
B5dfaf1:L5dfaf1:{c.instructions+=3;NFSU2_TR(0x5dfaf1);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B5dfaf6:{NFSU2_TR(0x5dfaf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfaf7:{NFSU2_TR(0x5dfaf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfafcull));
TAIL_STATIC(0x440e50u,440);
}
B5dfafc:L5dfafc:{c.instructions+=7;NFSU2_TR(0x5dfafc);
__builtin_memmove((R+28),(R+0),4);
}
B5dfafe:{NFSU2_TR(0x5dfafe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dfb01:{NFSU2_TR(0x5dfb01);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb05:{NFSU2_TR(0x5dfb05);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5dfb07:{NFSU2_TR(0x5dfb07);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfb09:{NFSU2_TR(0x5dfb09);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb0d:{NFSU2_TR(0x5dfb0d);
if(r1(R+518)){{goto L5dfb21;}}
}
B5dfb0f:L5dfb0f:{c.instructions+=6;NFSU2_TR(0x5dfb0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dfb11:{NFSU2_TR(0x5dfb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb14:{NFSU2_TR(0x5dfb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb17:{NFSU2_TR(0x5dfb17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfb18:{NFSU2_TR(0x5dfb18);
__builtin_memmove((R+4),(R+28),4);
}
B5dfb1a:{NFSU2_TR(0x5dfb1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfb1full));
TAIL_STATIC(0x493600u,493);
}
B5dfb1f:L5dfb1f:{c.instructions+=1;NFSU2_TR(0x5dfb1f);
__builtin_memmove((R+4),(R+28),4);
}
B5dfb21:L5dfb21:{c.instructions+=1;NFSU2_TR(0x5dfb21);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb29:L5dfb29:{c.instructions+=2;NFSU2_TR(0x5dfb29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dfb2d:{NFSU2_TR(0x5dfb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb30:L5dfb30:{c.instructions+=4;NFSU2_TR(0x5dfb30);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5dfb31:{NFSU2_TR(0x5dfb31);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5dfb34:{NFSU2_TR(0x5dfb34);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfb37:{NFSU2_TR(0x5dfb37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfab0u);}goto L5dfab0;}}
}
B5dfb3d:L5dfb3d:{c.instructions+=9;NFSU2_TR(0x5dfb3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfb41:{NFSU2_TR(0x5dfb41);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dfb45:{NFSU2_TR(0x5dfb45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfb48:{NFSU2_TR(0x5dfb48);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dfb49:{NFSU2_TR(0x5dfb49);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x44ull))));
}
B5dfb4c:{NFSU2_TR(0x5dfb4c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfb4e:{NFSU2_TR(0x5dfb4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb52:{NFSU2_TR(0x5dfb52);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb56:{NFSU2_TR(0x5dfb56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfa90u);}goto L5dfa90;}}
}
B5dfb5c:L5dfb5c:{c.instructions+=3;NFSU2_TR(0x5dfb5c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5dfb5f:{NFSU2_TR(0x5dfb5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dfb61:{NFSU2_TR(0x5dfb61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfb6e;}}
}
B5dfb63:L5dfb63:{c.instructions+=2;NFSU2_TR(0x5dfb63);
__builtin_memmove((R+4),(R+24),4);
}
B5dfb65:{NFSU2_TR(0x5dfb65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfb6aull));
TAIL_STATIC(0x5db4b0u,5db);
}
B5dfb6a:L5dfb6a:{c.instructions+=1;NFSU2_TR(0x5dfb6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5dfb6e:L5dfb6e:{c.instructions+=9;NFSU2_TR(0x5dfb6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dfb6f:{NFSU2_TR(0x5dfb6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dfb70:{NFSU2_TR(0x5dfb70);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dfb71:{NFSU2_TR(0x5dfb71);
w4(R+0,u32(0x1ull));
}
B5dfb76:{NFSU2_TR(0x5dfb76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dfb77:{NFSU2_TR(0x5dfb77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfb7b:{NFSU2_TR(0x5dfb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb82:{NFSU2_TR(0x5dfb82);
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
B5dfb85:{NFSU2_TR(0x5dfb85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfb86:L5dfb86:{c.instructions+=5;NFSU2_TR(0x5dfb86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfb8a:{NFSU2_TR(0x5dfb8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dfb8c:{NFSU2_TR(0x5dfb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfb93:{NFSU2_TR(0x5dfb93);
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
B5dfb96:{NFSU2_TR(0x5dfb96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfba0:L5dfba0:{c.instructions+=5;NFSU2_TR(0x5dfba0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfba4:{NFSU2_TR(0x5dfba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5dfba6:{NFSU2_TR(0x5dfba6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5dfba9:{NFSU2_TR(0x5dfba9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34107ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfbaf:{NFSU2_TR(0x5dfbaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfbcb;}}
}
B5dfbb1:L5dfbb1:{c.instructions+=4;NFSU2_TR(0x5dfbb1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dfbb3:{NFSU2_TR(0x5dfbb3);
__builtin_memmove(gp(0x883df0),(R+0),4);
}
B5dfbb8:{NFSU2_TR(0x5dfbb8);
__builtin_memmove(gp(0x883df4),(R+0),4);
}
B5dfbbd:{NFSU2_TR(0x5dfbbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfbc2ull));
TAIL_STATIC(0x5d63e0u,5d6);
}
B5dfbc2:L5dfbc2:{c.instructions+=3;NFSU2_TR(0x5dfbc2);
w4(R+0,u32(0x1ull));
}
B5dfbc7:{NFSU2_TR(0x5dfbc7);
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
B5dfbca:{NFSU2_TR(0x5dfbca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfbcb:L5dfbcb:{c.instructions+=2;NFSU2_TR(0x5dfbcb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80034100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfbd1:{NFSU2_TR(0x5dfbd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfcef;}}
}
B5dfbd7:L5dfbd7:{c.instructions+=12;NFSU2_TR(0x5dfbd7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfbd8:{NFSU2_TR(0x5dfbd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
__builtin_memmove((R+20),(U+0),4);
}
B5dfbdb:{NFSU2_TR(0x5dfbdb);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffff0ull))));
}
B5dfbde:{NFSU2_TR(0x5dfbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfbe1:{NFSU2_TR(0x5dfbe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5dfbe8:{NFSU2_TR(0x5dfbe8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfbe9:{NFSU2_TR(0x5dfbe9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dfbeb:{NFSU2_TR(0x5dfbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfbee:{NFSU2_TR(0x5dfbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dfbf1:{NFSU2_TR(0x5dfbf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5dfbf8:{NFSU2_TR(0x5dfbf8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfbfa:{NFSU2_TR(0x5dfbfa);
if(r1(R+518)){{goto L5dfc23;}}
}
B5dfbfc:L5dfbfc:{c.instructions+=2;NFSU2_TR(0x5dfbfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))-u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfbfe:{NFSU2_TR(0x5dfbfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfc23;}}
}
B5dfc00:L5dfc00:{c.instructions+=7;NFSU2_TR(0x5dfc00);
s4(0x886a80,u32(u32(m4(0x886a80))-u32(u32(0x1ull))));
}
B5dfc06:{NFSU2_TR(0x5dfc06);
__builtin_memmove((R+4),gp(0x88a288),4);
}
B5dfc0c:{NFSU2_TR(0x5dfc0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dfc0e:{NFSU2_TR(0x5dfc0e);
__builtin_memmove(gp(0x88a288),(R+0),4);
}
B5dfc13:{NFSU2_TR(0x5dfc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfc16:{NFSU2_TR(0x5dfc16);
u8 U[4];
w4(U+0,u32(0x88a284ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5dfc1c:{NFSU2_TR(0x5dfc1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x883ec0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5dfc23:L5dfc23:{c.instructions+=7;NFSU2_TR(0x5dfc23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dfc26:{NFSU2_TR(0x5dfc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfc29:{NFSU2_TR(0x5dfc29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5dfc2b:{NFSU2_TR(0x5dfc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfc2e:{NFSU2_TR(0x5dfc2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5dfc31:{NFSU2_TR(0x5dfc31);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfc35:{NFSU2_TR(0x5dfc35);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dfce4;}}
}
B5dfc3b:L5dfc3b:{c.instructions+=3;NFSU2_TR(0x5dfc3b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfc3c:{NFSU2_TR(0x5dfc3c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfc40:{NFSU2_TR(0x5dfc40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfc41:L5dfc41:{c.instructions+=3;NFSU2_TR(0x5dfc41);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B5dfc46:{NFSU2_TR(0x5dfc46);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfc48:{NFSU2_TR(0x5dfc48);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfce2;}}
}
B5dfc4e:L5dfc4e:{c.instructions+=5;NFSU2_TR(0x5dfc4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfc51:{NFSU2_TR(0x5dfc51);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5dfc55:{NFSU2_TR(0x5dfc55);
w4(R+12,u32(0x1ull));
}
B5dfc5a:{NFSU2_TR(0x5dfc5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dfc5d:{NFSU2_TR(0x5dfc5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dfc65:L5dfc65:{c.instructions+=2;NFSU2_TR(0x5dfc65);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5dfc68:{NFSU2_TR(0x5dfc68);
if(r1(R+518)){{goto L5dfcb4;}}
}
B5dfc6a:L5dfc6a:{c.instructions+=2;NFSU2_TR(0x5dfc6a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfc6d:{NFSU2_TR(0x5dfc6d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dfc92;}}
}
B5dfc6f:L5dfc6f:{c.instructions+=4;NFSU2_TR(0x5dfc6f);
w4(R+4,u32(0x3ull));
}
B5dfc74:{NFSU2_TR(0x5dfc74);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dfc77:{NFSU2_TR(0x5dfc77);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B5dfc79:{NFSU2_TR(0x5dfc79);
__builtin_memmove((R+16),(R+16),4);
}
B5dfc80:L5dfc80:{c.instructions+=3;NFSU2_TR(0x5dfc80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dfc82:{NFSU2_TR(0x5dfc82);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5dfc84:{NFSU2_TR(0x5dfc84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfc8c;}}
}
B5dfc86:L5dfc86:{c.instructions+=1;NFSU2_TR(0x5dfc86);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5dfc8c:L5dfc8c:{c.instructions+=3;NFSU2_TR(0x5dfc8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5dfc8f:{NFSU2_TR(0x5dfc8f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5dfc90:{NFSU2_TR(0x5dfc90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfc80u);}goto L5dfc80;}}
}
B5dfc92:L5dfc92:{c.instructions+=3;NFSU2_TR(0x5dfc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5dfc94:{NFSU2_TR(0x5dfc94);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dfc96:{NFSU2_TR(0x5dfc96);
if(r1(R+518)){{goto L5dfcae;}}
}
B5dfc98:L5dfc98:{c.instructions+=2;NFSU2_TR(0x5dfc98);
__builtin_memmove((R+4),(R+28),4);
}
B5dfc9a:{NFSU2_TR(0x5dfc9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfc9full));
TAIL_STATIC(0x4903b0u,490);
}
B5dfc9f:L5dfc9f:{c.instructions+=4;NFSU2_TR(0x5dfc9f);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B5dfca4:{NFSU2_TR(0x5dfca4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfca5:{NFSU2_TR(0x5dfca5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfca6:{NFSU2_TR(0x5dfca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfcabull));
TAIL_STATIC(0x43f920u,43f);
}
B5dfcab:L5dfcab:{c.instructions+=1;NFSU2_TR(0x5dfcab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5dfcae:L5dfcae:{c.instructions+=1;NFSU2_TR(0x5dfcae);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5dfcb4:L5dfcb4:{c.instructions+=6;NFSU2_TR(0x5dfcb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfcb8:{NFSU2_TR(0x5dfcb8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5dfcbb:{NFSU2_TR(0x5dfcbb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5dfcbc:{NFSU2_TR(0x5dfcbc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5dfcbd:{NFSU2_TR(0x5dfcbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfcc1:{NFSU2_TR(0x5dfcc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfc65u);}goto L5dfc65;}}
}
B5dfcc3:L5dfcc3:{c.instructions+=9;NFSU2_TR(0x5dfcc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfcc7:{NFSU2_TR(0x5dfcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dfccb:{NFSU2_TR(0x5dfccb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfcce:{NFSU2_TR(0x5dfcce);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dfccf:{NFSU2_TR(0x5dfccf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x44ull))));
}
B5dfcd2:{NFSU2_TR(0x5dfcd2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfcd4:{NFSU2_TR(0x5dfcd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfcd8:{NFSU2_TR(0x5dfcd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfcdc:{NFSU2_TR(0x5dfcdc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfc41u);}goto L5dfc41;}}
}
B5dfce2:L5dfce2:{c.instructions+=2;NFSU2_TR(0x5dfce2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dfce3:{NFSU2_TR(0x5dfce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dfce4:L5dfce4:{c.instructions+=5;NFSU2_TR(0x5dfce4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dfce5:{NFSU2_TR(0x5dfce5);
w4(R+0,u32(0x1ull));
}
B5dfcea:{NFSU2_TR(0x5dfcea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5dfceb:{NFSU2_TR(0x5dfceb);
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
B5dfcee:{NFSU2_TR(0x5dfcee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfcef:L5dfcef:{c.instructions+=3;NFSU2_TR(0x5dfcef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dfcf1:{NFSU2_TR(0x5dfcf1);
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
B5dfcf4:{NFSU2_TR(0x5dfcf4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfd00:L5dfd00:{c.instructions+=5;NFSU2_TR(0x5dfd00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd01:{NFSU2_TR(0x5dfd01);
__builtin_memmove((R+24),gp(0x88ead4),4);
}
B5dfd07:{NFSU2_TR(0x5dfd07);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd08:{NFSU2_TR(0x5dfd08);
w4(R+4,u32(0x88ead4ull));
}
B5dfd0d:{NFSU2_TR(0x5dfd0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfd12ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dfd12:L5dfd12:{c.instructions+=3;NFSU2_TR(0x5dfd12);
__builtin_memmove((R+28),(R+0),4);
}
B5dfd14:{NFSU2_TR(0x5dfd14);
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
B5dfd16:{NFSU2_TR(0x5dfd16);
if(r1(R+518)){{goto L5dfd25;}}
}
B5dfd18:L5dfd18:{c.instructions+=2;NFSU2_TR(0x5dfd18);
__builtin_memmove((R+4),(R+24),4);
}
B5dfd1a:{NFSU2_TR(0x5dfd1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfd1full));
TAIL_STATIC(0x5db4b0u,5db);
}
B5dfd1f:L5dfd1f:{c.instructions+=3;NFSU2_TR(0x5dfd1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dfd21:{NFSU2_TR(0x5dfd21);
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
B5dfd23:{NFSU2_TR(0x5dfd23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfd18u);}goto L5dfd18;}}
}
B5dfd25:L5dfd25:{c.instructions+=3;NFSU2_TR(0x5dfd25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dfd26:{NFSU2_TR(0x5dfd26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dfd27:{NFSU2_TR(0x5dfd27);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfd30:L5dfd30:{c.instructions+=12;NFSU2_TR(0x5dfd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dfd36:{NFSU2_TR(0x5dfd36);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd38:{NFSU2_TR(0x5dfd38);
u8 U[4];
w4(U+0,u32(0x7793cbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd3d:{NFSU2_TR(0x5dfd3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd3e:{NFSU2_TR(0x5dfd3e);
__builtin_memmove((R+0),gp(0x883df8),4);
}
B5dfd43:{NFSU2_TR(0x5dfd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfd4a:{NFSU2_TR(0x5dfd4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B5dfd4d:{NFSU2_TR(0x5dfd4d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd4e:{NFSU2_TR(0x5dfd4e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd4f:{NFSU2_TR(0x5dfd4f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5dfd51:{NFSU2_TR(0x5dfd51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfd53:{NFSU2_TR(0x5dfd53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfd9e;}}
}
B5dfd55:L5dfd55:{c.instructions+=3;NFSU2_TR(0x5dfd55);
__builtin_memmove((R+0),gp(0x82da88),4);
}
B5dfd5a:{NFSU2_TR(0x5dfd5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd5b:{NFSU2_TR(0x5dfd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfd60ull));
TAIL_STATIC(0x440e50u,440);
}
B5dfd60:L5dfd60:{c.instructions+=6;NFSU2_TR(0x5dfd60);
__builtin_memmove((R+24),(R+0),4);
}
B5dfd62:{NFSU2_TR(0x5dfd62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dfd65:{NFSU2_TR(0x5dfd65);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfd69:{NFSU2_TR(0x5dfd69);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfd6b:{NFSU2_TR(0x5dfd6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfd6f:{NFSU2_TR(0x5dfd6f);
if(r1(R+518)){{goto L5dfd8e;}}
}
B5dfd71:L5dfd71:{c.instructions+=2;NFSU2_TR(0x5dfd71);
u8 U[4];
w4(U+0,u32(0x7a52a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd76:{NFSU2_TR(0x5dfd76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfd7bull));
TAIL_STATIC(0x43db50u,43d);
}
B5dfd7b:L5dfd7b:{c.instructions+=6;NFSU2_TR(0x5dfd7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dfd7e:{NFSU2_TR(0x5dfd7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfd7f:{NFSU2_TR(0x5dfd7f);
__builtin_memmove((R+4),(R+24),4);
}
B5dfd81:{NFSU2_TR(0x5dfd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfd84:{NFSU2_TR(0x5dfd84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfd87:{NFSU2_TR(0x5dfd87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfd8cull));
TAIL_STATIC(0x493600u,493);
}
B5dfd8c:L5dfd8c:{c.instructions+=1;NFSU2_TR(0x5dfd8c);
{goto L5dfd90;}
}
B5dfd8e:L5dfd8e:{c.instructions+=1;NFSU2_TR(0x5dfd8e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dfd90:L5dfd90:{c.instructions+=2;NFSU2_TR(0x5dfd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dfd98:{NFSU2_TR(0x5dfd98);
__builtin_memmove(gp(0x883df8),(R+24),4);
}
B5dfd9e:L5dfd9e:{c.instructions+=2;NFSU2_TR(0x5dfd9e);
u8 U[8];
__builtin_memmove((U+0),gp(0x883de0),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfda4:{NFSU2_TR(0x5dfda4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dfdca;}}
}
B5dfda6:L5dfda6:{c.instructions+=2;NFSU2_TR(0x5dfda6);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdab:{NFSU2_TR(0x5dfdab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfdb0ull));
TAIL_STATIC(0x43e620u,43e);
}
B5dfdb0:L5dfdb0:{c.instructions+=4;NFSU2_TR(0x5dfdb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5dfdb3:{NFSU2_TR(0x5dfdb3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dfdb5:{NFSU2_TR(0x5dfdb5);
__builtin_memmove(gp(0x883de0),(R+0),4);
}
B5dfdba:{NFSU2_TR(0x5dfdba);
if(r1(R+518)){{goto L5dfe9b;}}
}
B5dfdc0:L5dfdc0:{c.instructions+=1;NFSU2_TR(0x5dfdc0);
s4(0x883de8,u32(0x1ull));
}
B5dfdca:L5dfdca:{c.instructions+=7;NFSU2_TR(0x5dfdca);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B5dfdd0:{NFSU2_TR(0x5dfdd0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B5dfdd3:{NFSU2_TR(0x5dfdd3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdd4:{NFSU2_TR(0x5dfdd4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dfdd8:{NFSU2_TR(0x5dfdd8);
u8 U[4];
w4(U+0,u32(0x7a5290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfddd:{NFSU2_TR(0x5dfddd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdde:{NFSU2_TR(0x5dfdde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfde3ull));
TAIL_STATIC(0x4400d0u,440);
}
B5dfde3:L5dfde3:{c.instructions+=3;NFSU2_TR(0x5dfde3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dfde7:{NFSU2_TR(0x5dfde7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfde8:{NFSU2_TR(0x5dfde8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfdedull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5dfded:L5dfded:{c.instructions+=7;NFSU2_TR(0x5dfded);
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
B5dfdee:{NFSU2_TR(0x5dfdee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdef:{NFSU2_TR(0x5dfdef);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dfdf3:{NFSU2_TR(0x5dfdf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdf4:{NFSU2_TR(0x5dfdf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdf5:{NFSU2_TR(0x5dfdf5);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfdfa:{NFSU2_TR(0x5dfdfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfdffull));
TAIL_STATIC(0x4022c0u,402);
}
B5dfdff:L5dfdff:{c.instructions+=7;NFSU2_TR(0x5dfdff);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe01:{NFSU2_TR(0x5dfe01);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5dfe05:{NFSU2_TR(0x5dfe05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe06:{NFSU2_TR(0x5dfe06);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe08:{NFSU2_TR(0x5dfe08);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe0d:{NFSU2_TR(0x5dfe0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x883de4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dfe15:{NFSU2_TR(0x5dfe15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfe1aull));
TAIL_STATIC(0x4022c0u,402);
}
B5dfe1a:L5dfe1a:{c.instructions+=7;NFSU2_TR(0x5dfe1a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe1c:{NFSU2_TR(0x5dfe1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5dfe20:{NFSU2_TR(0x5dfe20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe21:{NFSU2_TR(0x5dfe21);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe23:{NFSU2_TR(0x5dfe23);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe28:{NFSU2_TR(0x5dfe28);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x883de8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dfe30:{NFSU2_TR(0x5dfe30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfe35ull));
TAIL_STATIC(0x4022c0u,402);
}
B5dfe35:L5dfe35:{c.instructions+=8;NFSU2_TR(0x5dfe35);
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
B5dfe38:{NFSU2_TR(0x5dfe38);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe3a:{NFSU2_TR(0x5dfe3a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dfe3e:{NFSU2_TR(0x5dfe3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe3f:{NFSU2_TR(0x5dfe3f);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe41:{NFSU2_TR(0x5dfe41);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe46:{NFSU2_TR(0x5dfe46);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x883decull));
s4(u32(r4(U+0)),r4(U+4));
}
B5dfe4e:{NFSU2_TR(0x5dfe4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfe53ull));
TAIL_STATIC(0x4022c0u,402);
}
B5dfe53:L5dfe53:{c.instructions+=4;NFSU2_TR(0x5dfe53);
__builtin_memmove((R+24),gp(0x883e80),4);
}
B5dfe59:{NFSU2_TR(0x5dfe59);
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
B5dfe5c:{NFSU2_TR(0x5dfe5c);
w4(R+4,u32(0x883e80ull));
}
B5dfe61:{NFSU2_TR(0x5dfe61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfe66ull));
TAIL_STATIC(0x502fd0u,502);
}
B5dfe66:L5dfe66:{c.instructions+=3;NFSU2_TR(0x5dfe66);
__builtin_memmove((R+28),(R+0),4);
}
B5dfe68:{NFSU2_TR(0x5dfe68);
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
B5dfe6a:{NFSU2_TR(0x5dfe6a);
if(r1(R+518)){{goto L5dfe9b;}}
}
B5dfe6c:L5dfe6c:{c.instructions+=1;NFSU2_TR(0x5dfe6c);
__builtin_memmove((R+16),(R+16),4);
}
B5dfe70:L5dfe70:{c.instructions+=10;NFSU2_TR(0x5dfe70);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5dfe74:{NFSU2_TR(0x5dfe74);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe76:{NFSU2_TR(0x5dfe76);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5dfe7a:{NFSU2_TR(0x5dfe7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe7b:{NFSU2_TR(0x5dfe7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dfe7e:{NFSU2_TR(0x5dfe7e);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe80:{NFSU2_TR(0x5dfe80);
u8 U[4];
w4(U+0,u32(0x787568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfe85:{NFSU2_TR(0x5dfe85);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfe89:{NFSU2_TR(0x5dfe89);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfe8d:{NFSU2_TR(0x5dfe8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfe92ull));
TAIL_STATIC(0x4022c0u,402);
}
B5dfe92:L5dfe92:{c.instructions+=4;NFSU2_TR(0x5dfe92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5dfe94:{NFSU2_TR(0x5dfe94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5dfe97:{NFSU2_TR(0x5dfe97);
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
B5dfe99:{NFSU2_TR(0x5dfe99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dfe70u);}goto L5dfe70;}}
}
B5dfe9b:L5dfe9b:{c.instructions+=6;NFSU2_TR(0x5dfe9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfe9f:{NFSU2_TR(0x5dfe9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dfea0:{NFSU2_TR(0x5dfea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dfea1:{NFSU2_TR(0x5dfea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dfea8:{NFSU2_TR(0x5dfea8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x60ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5dfeab:{NFSU2_TR(0x5dfeab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dfeb0:L5dfeb0:{c.instructions+=23;NFSU2_TR(0x5dfeb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfeb1:{NFSU2_TR(0x5dfeb1);
__builtin_memmove((R+24),(R+4),4);
}
B5dfeb3:{NFSU2_TR(0x5dfeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfeb7:{NFSU2_TR(0x5dfeb7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dfeb9:{NFSU2_TR(0x5dfeb9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfeba:{NFSU2_TR(0x5dfeba);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dfebc:{NFSU2_TR(0x5dfebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dfebf:{NFSU2_TR(0x5dfebf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dfec2:{NFSU2_TR(0x5dfec2);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5dfec5:{NFSU2_TR(0x5dfec5);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5dfec7:{NFSU2_TR(0x5dfec7);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5dfec9:{NFSU2_TR(0x5dfec9);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5dfecb:{NFSU2_TR(0x5dfecb);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5dfecd:{NFSU2_TR(0x5dfecd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5dfecf:{NFSU2_TR(0x5dfecf);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5dfed1:{NFSU2_TR(0x5dfed1);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5dfed3:{NFSU2_TR(0x5dfed3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5dfed5:{NFSU2_TR(0x5dfed5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dfed9:{NFSU2_TR(0x5dfed9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5dfedb:{NFSU2_TR(0x5dfedb);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5dfedd:{NFSU2_TR(0x5dfedd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5dfedf:{NFSU2_TR(0x5dfedf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5dfee2:{NFSU2_TR(0x5dfee2);
if(r1(R+518)){{goto L5dff0a;}}
}
B5dfee4:L5dfee4:{c.instructions+=7;NFSU2_TR(0x5dfee4);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5dfee7:{NFSU2_TR(0x5dfee7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5dfee9:{NFSU2_TR(0x5dfee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfeec:{NFSU2_TR(0x5dfeec);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dfeef:{NFSU2_TR(0x5dfeef);
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
B5dfef1:{NFSU2_TR(0x5dfef1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5dfef3:{NFSU2_TR(0x5dfef3);
if(r1(R+518)){{goto L5dff11;}}
}
B5dfef5:L5dfef5:{c.instructions+=2;NFSU2_TR(0x5dfef5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dfef6:{NFSU2_TR(0x5dfef6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dfefbull));
TAIL_STATIC(0x5d7090u,5d7);
}
B5dfefb:L5dfefb:{c.instructions+=2;NFSU2_TR(0x5dfefb);
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
B5dfefd:{NFSU2_TR(0x5dfefd);
if(r1(R+518)){{goto L5dff11;}}
}
B5dfeff:L5dfeff:{c.instructions+=3;NFSU2_TR(0x5dfeff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dff02:{NFSU2_TR(0x5dff02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff03:{NFSU2_TR(0x5dff03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dff08ull));
TAIL_STATIC(0x5d7270u,5d7);
}
B5dff08:L5dff08:{c.instructions+=1;NFSU2_TR(0x5dff08);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dff0a:L5dff0a:{c.instructions+=4;NFSU2_TR(0x5dff0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dff0b:{NFSU2_TR(0x5dff0b);
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
B5dff0d:{NFSU2_TR(0x5dff0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dff0e:{NFSU2_TR(0x5dff0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dff11:L5dff11:{c.instructions+=5;NFSU2_TR(0x5dff11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff12:{NFSU2_TR(0x5dff12);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5dff16:{NFSU2_TR(0x5dff16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff17:{NFSU2_TR(0x5dff17);
__builtin_memmove((R+4),(R+12),4);
}
B5dff19:{NFSU2_TR(0x5dff19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dff1eull));
TAIL_STATIC(0x5db850u,5db);
}
B5dff1e:L5dff1e:{c.instructions+=3;NFSU2_TR(0x5dff1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dff20:{NFSU2_TR(0x5dff20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dff23:{NFSU2_TR(0x5dff23);
if(r1(R+518)){{goto L5dff37;}}
}
B5dff25:L5dff25:{c.instructions+=3;NFSU2_TR(0x5dff25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff26:{NFSU2_TR(0x5dff26);
__builtin_memmove((R+4),(R+0),4);
}
B5dff28:{NFSU2_TR(0x5dff28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dff2dull));
TAIL_STATIC(0x5d7270u,5d7);
}
B5dff2d:L5dff2d:{c.instructions+=6;NFSU2_TR(0x5dff2d);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5dff2f:{NFSU2_TR(0x5dff2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dff30:{NFSU2_TR(0x5dff30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dff31:{NFSU2_TR(0x5dff31);
w1(R+0,u8(0x1ull));
}
B5dff33:{NFSU2_TR(0x5dff33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dff34:{NFSU2_TR(0x5dff34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dff37:L5dff37:{c.instructions+=4;NFSU2_TR(0x5dff37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff38:{NFSU2_TR(0x5dff38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff39:{NFSU2_TR(0x5dff39);
__builtin_memmove((R+4),(R+12),4);
}
B5dff3b:{NFSU2_TR(0x5dff3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5dff40ull));
TAIL_STATIC(0x5db770u,5db);
}
B5dff40:L5dff40:{c.instructions+=5;NFSU2_TR(0x5dff40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5dff41:{NFSU2_TR(0x5dff41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dff42:{NFSU2_TR(0x5dff42);
w1(R+0,u8(0x1ull));
}
B5dff44:{NFSU2_TR(0x5dff44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dff45:{NFSU2_TR(0x5dff45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dff50:L5dff50:{c.instructions+=7;NFSU2_TR(0x5dff50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5dff53:{NFSU2_TR(0x5dff53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff54:{NFSU2_TR(0x5dff54);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff55:{NFSU2_TR(0x5dff55);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dff59:{NFSU2_TR(0x5dff59);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5dff5b:{NFSU2_TR(0x5dff5b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dff5d:{NFSU2_TR(0x5dff5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5dff69;}}
}
B5dff5f:L5dff5f:{c.instructions+=5;NFSU2_TR(0x5dff5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dff60:{NFSU2_TR(0x5dff60);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dff62:{NFSU2_TR(0x5dff62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5dff63:{NFSU2_TR(0x5dff63);
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
B5dff66:{NFSU2_TR(0x5dff66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5dff69:L5dff69:{c.instructions+=6;NFSU2_TR(0x5dff69);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+523,sborrow<u16>(r2(U+6),r2(R+24)));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+24))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5dff6d:{NFSU2_TR(0x5dff6d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff6e:{NFSU2_TR(0x5dff6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5dff6f:{NFSU2_TR(0x5dff6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5dff73:{NFSU2_TR(0x5dff73);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dff77:{NFSU2_TR(0x5dff77);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e001bu,5e0);}
}
B5dff7d:L5dff7d:{c.instructions+=5;NFSU2_TR(0x5dff7d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5dff80:{NFSU2_TR(0x5dff80);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1aull))));
__builtin_memmove((R+0),(U+0),4);
}
B5dff83:{NFSU2_TR(0x5dff83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dff87:{NFSU2_TR(0x5dff87);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5dff8b:{NFSU2_TR(0x5dff8b);
{goto L5dff90;}
}
B5dff90:L5dff90:{c.instructions+=3;NFSU2_TR(0x5dff90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dff92:{NFSU2_TR(0x5dff92);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dff94:{NFSU2_TR(0x5dff94);
if(r1(R+518)){{goto L5dfffb;}}
}
B5dff96:L5dff96:{c.instructions+=3;NFSU2_TR(0x5dff96);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dff9a:{NFSU2_TR(0x5dff9a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B5dff9d:{NFSU2_TR(0x5dff9d);
__builtin_memmove((R+4),(R+4),4);
}
B5dffa0:L5dffa0:{c.instructions+=2;NFSU2_TR(0x5dffa0);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B5dffa4:{NFSU2_TR(0x5dffa4);
if(r1(R+518)){{goto L5dffae;}}
}
B5dffa6:L5dffa6:{c.instructions+=3;NFSU2_TR(0x5dffa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5dffa8:{NFSU2_TR(0x5dffa8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5dffaa:{NFSU2_TR(0x5dffaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dffa0u);}goto L5dffa0;}}
}
B5dffac:L5dffac:{c.instructions+=1;NFSU2_TR(0x5dffac);
{goto L5dfffb;}
}
B5dffae:L5dffae:{c.instructions+=4;NFSU2_TR(0x5dffae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dffb1:{NFSU2_TR(0x5dffb1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5dffb3:{NFSU2_TR(0x5dffb3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dffb5:{NFSU2_TR(0x5dffb5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dfffb;}}
}
B5dffb7:L5dffb7:{c.instructions+=2;NFSU2_TR(0x5dffb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5dffba:{NFSU2_TR(0x5dffba);
__builtin_memmove((R+12),(R+12),4);
}
B5dffc0:L5dffc0:{c.instructions+=4;NFSU2_TR(0x5dffc0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B5dffc3:{NFSU2_TR(0x5dffc3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5dffc5:{NFSU2_TR(0x5dffc5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5dffc7:{NFSU2_TR(0x5dffc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5dffdc;}}
}
B5dffc9:L5dffc9:{c.instructions+=1;NFSU2_TR(0x5dffc9);
__builtin_memmove((R+16),(R+16),4);
}
B5dffd0:L5dffd0:{c.instructions+=2;NFSU2_TR(0x5dffd0);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+4))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B5dffd5:{NFSU2_TR(0x5dffd5);
if(r1(R+518)){{goto L5dffe8;}}
}
B5dffd7:L5dffd7:{c.instructions+=3;NFSU2_TR(0x5dffd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5dffd8:{NFSU2_TR(0x5dffd8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dffda:{NFSU2_TR(0x5dffda);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dffd0u);}goto L5dffd0;}}
}
B5dffdc:L5dffdc:{c.instructions+=2;NFSU2_TR(0x5dffdc);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+8)));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5dffe0:{NFSU2_TR(0x5dffe0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5dffe8;}}
}
B5dffe2:L5dffe2:{c.instructions+=2;NFSU2_TR(0x5dffe2);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),2);
s2(u32(r4(U+4)),r2(U+8));
}
B5dffe7:{NFSU2_TR(0x5dffe7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5dffe8:L5dffe8:{c.instructions+=5;NFSU2_TR(0x5dffe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5dffeb:{NFSU2_TR(0x5dffeb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5dffec:{NFSU2_TR(0x5dffec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B5dffef:{NFSU2_TR(0x5dffef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5dfff1:{NFSU2_TR(0x5dfff1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5dffc0u);}goto L5dffc0;}}
}
B5dfff3:L5dfff3:{c.instructions+=2;NFSU2_TR(0x5dfff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5dfff7:{NFSU2_TR(0x5dfff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5dfffb:L5dfffb:{c.instructions+=2;NFSU2_TR(0x5dfffb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5dffff:{NFSU2_TR(0x5dffff);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x5e0003u,5e0);
}
XIT:NFSU2_TR_EXIT(0x5df,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
