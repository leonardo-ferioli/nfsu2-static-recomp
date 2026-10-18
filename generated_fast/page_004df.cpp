#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_496(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4af(u8* __restrict R,Cpu& c);
u32 body_4b0(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4e0(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4df,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4df,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4df(u8* __restrict R,Cpu& c);
u32 page_4df(Cpu& c){return body_4df(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4df(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4df005:goto L4df005;
case 0x4df008:c.instructions+=1;goto B4df008;
case 0x4df010:goto L4df010;
case 0x4df011:c.instructions+=2;goto B4df011;
case 0x4df013:c.instructions+=1;goto B4df013;
case 0x4df018:goto L4df018;
case 0x4df01d:c.instructions+=1;goto B4df01d;
case 0x4df01f:goto L4df01f;
case 0x4df020:c.instructions+=1;goto B4df020;
case 0x4df025:goto L4df025;
case 0x4df028:goto L4df028;
case 0x4df02a:c.instructions+=2;goto B4df02a;
case 0x4df02b:c.instructions+=1;goto B4df02b;
case 0x4df030:goto L4df030;
case 0x4df032:c.instructions+=13;goto B4df032;
case 0x4df037:c.instructions+=12;goto B4df037;
case 0x4df03d:c.instructions+=11;goto B4df03d;
case 0x4df03e:c.instructions+=10;goto B4df03e;
case 0x4df045:c.instructions+=9;goto B4df045;
case 0x4df046:c.instructions+=8;goto B4df046;
case 0x4df047:c.instructions+=7;goto B4df047;
case 0x4df048:c.instructions+=6;goto B4df048;
case 0x4df04a:c.instructions+=5;goto B4df04a;
case 0x4df04e:c.instructions+=4;goto B4df04e;
case 0x4df054:c.instructions+=3;goto B4df054;
case 0x4df05a:c.instructions+=2;goto B4df05a;
case 0x4df062:c.instructions+=1;goto B4df062;
case 0x4df067:goto L4df067;
case 0x4df06a:c.instructions+=2;goto B4df06a;
case 0x4df06f:c.instructions+=1;goto B4df06f;
case 0x4df074:goto L4df074;
case 0x4df077:c.instructions+=4;goto B4df077;
case 0x4df07a:c.instructions+=3;goto B4df07a;
case 0x4df07c:c.instructions+=2;goto B4df07c;
case 0x4df081:c.instructions+=1;goto B4df081;
case 0x4df083:goto L4df083;
case 0x4df085:c.instructions+=5;goto B4df085;
case 0x4df088:c.instructions+=4;goto B4df088;
case 0x4df08a:c.instructions+=3;goto B4df08a;
case 0x4df08b:c.instructions+=2;goto B4df08b;
case 0x4df08e:c.instructions+=1;goto B4df08e;
case 0x4df093:goto L4df093;
case 0x4df095:c.instructions+=3;goto B4df095;
case 0x4df098:c.instructions+=2;goto B4df098;
case 0x4df09a:c.instructions+=1;goto B4df09a;
case 0x4df09c:goto L4df09c;
case 0x4df09e:c.instructions+=2;goto B4df09e;
case 0x4df0a6:c.instructions+=1;goto B4df0a6;
case 0x4df0ab:goto L4df0ab;
case 0x4df0af:c.instructions+=5;goto B4df0af;
case 0x4df0b0:c.instructions+=4;goto B4df0b0;
case 0x4df0b1:c.instructions+=3;goto B4df0b1;
case 0x4df0b8:c.instructions+=2;goto B4df0b8;
case 0x4df0bb:c.instructions+=1;goto B4df0bb;
case 0x4df0c0:goto L4df0c0;
case 0x4df0c4:c.instructions+=2;goto B4df0c4;
case 0x4df0c9:c.instructions+=1;goto B4df0c9;
case 0x4df0cb:goto L4df0cb;
case 0x4df0ce:c.instructions+=3;goto B4df0ce;
case 0x4df0d1:c.instructions+=2;goto B4df0d1;
case 0x4df0d3:c.instructions+=1;goto B4df0d3;
case 0x4df0d5:goto L4df0d5;
case 0x4df0da:c.instructions+=1;goto B4df0da;
case 0x4df0dd:goto L4df0dd;
case 0x4df0e2:c.instructions+=1;goto B4df0e2;
case 0x4df0e4:goto L4df0e4;
case 0x4df0e7:c.instructions+=2;goto B4df0e7;
case 0x4df0ea:c.instructions+=1;goto B4df0ea;
case 0x4df0ec:goto L4df0ec;
case 0x4df0ee:c.instructions+=1;goto B4df0ee;
case 0x4df0f1:goto L4df0f1;
case 0x4df0f6:c.instructions+=1;goto B4df0f6;
case 0x4df0f8:goto L4df0f8;
case 0x4df0fb:c.instructions+=2;goto B4df0fb;
case 0x4df0fe:c.instructions+=1;goto B4df0fe;
case 0x4df100:goto L4df100;
case 0x4df102:c.instructions+=1;goto B4df102;
case 0x4df105:goto L4df105;
case 0x4df109:c.instructions+=4;goto B4df109;
case 0x4df10b:c.instructions+=3;goto B4df10b;
case 0x4df10c:c.instructions+=2;goto B4df10c;
case 0x4df10d:c.instructions+=1;goto B4df10d;
case 0x4df112:goto L4df112;
case 0x4df115:c.instructions+=1;goto B4df115;
case 0x4df120:goto L4df120;
case 0x4df121:c.instructions+=2;goto B4df121;
case 0x4df123:c.instructions+=1;goto B4df123;
case 0x4df128:goto L4df128;
case 0x4df12d:c.instructions+=1;goto B4df12d;
case 0x4df12f:goto L4df12f;
case 0x4df130:c.instructions+=1;goto B4df130;
case 0x4df135:goto L4df135;
case 0x4df138:goto L4df138;
case 0x4df13a:c.instructions+=2;goto B4df13a;
case 0x4df13b:c.instructions+=1;goto B4df13b;
case 0x4df140:goto L4df140;
case 0x4df141:c.instructions+=15;goto B4df141;
case 0x4df143:c.instructions+=14;goto B4df143;
case 0x4df146:c.instructions+=13;goto B4df146;
case 0x4df148:c.instructions+=12;goto B4df148;
case 0x4df14d:c.instructions+=11;goto B4df14d;
case 0x4df153:c.instructions+=10;goto B4df153;
case 0x4df154:c.instructions+=9;goto B4df154;
case 0x4df15b:c.instructions+=8;goto B4df15b;
case 0x4df161:c.instructions+=7;goto B4df161;
case 0x4df164:c.instructions+=6;goto B4df164;
case 0x4df165:c.instructions+=5;goto B4df165;
case 0x4df166:c.instructions+=4;goto B4df166;
case 0x4df168:c.instructions+=3;goto B4df168;
case 0x4df169:c.instructions+=2;goto B4df169;
case 0x4df16d:c.instructions+=1;goto B4df16d;
case 0x4df172:goto L4df172;
case 0x4df178:c.instructions+=5;goto B4df178;
case 0x4df17e:c.instructions+=4;goto B4df17e;
case 0x4df180:c.instructions+=3;goto B4df180;
case 0x4df18b:c.instructions+=2;goto B4df18b;
case 0x4df195:c.instructions+=1;goto B4df195;
case 0x4df197:goto L4df197;
case 0x4df199:c.instructions+=2;goto B4df199;
case 0x4df19b:c.instructions+=1;goto B4df19b;
case 0x4df19d:goto L4df19d;
case 0x4df19f:c.instructions+=2;goto B4df19f;
case 0x4df1a9:c.instructions+=1;goto B4df1a9;
case 0x4df1ae:goto L4df1ae;
case 0x4df1b0:c.instructions+=1;goto B4df1b0;
case 0x4df1b5:goto L4df1b5;
case 0x4df1b9:c.instructions+=1;goto B4df1b9;
case 0x4df1be:goto L4df1be;
case 0x4df1c0:c.instructions+=6;goto B4df1c0;
case 0x4df1c2:c.instructions+=5;goto B4df1c2;
case 0x4df1c4:c.instructions+=4;goto B4df1c4;
case 0x4df1c6:c.instructions+=3;goto B4df1c6;
case 0x4df1ca:c.instructions+=2;goto B4df1ca;
case 0x4df1d2:c.instructions+=1;goto B4df1d2;
case 0x4df1d7:goto L4df1d7;
case 0x4df1dc:c.instructions+=3;goto B4df1dc;
case 0x4df1de:c.instructions+=2;goto B4df1de;
case 0x4df1e6:c.instructions+=1;goto B4df1e6;
case 0x4df1e8:goto L4df1e8;
case 0x4df1ea:c.instructions+=5;goto B4df1ea;
case 0x4df1ee:c.instructions+=4;goto B4df1ee;
case 0x4df1ef:c.instructions+=3;goto B4df1ef;
case 0x4df1f1:c.instructions+=2;goto B4df1f1;
case 0x4df1f6:c.instructions+=1;goto B4df1f6;
case 0x4df1fb:goto L4df1fb;
case 0x4df1fd:goto L4df1fd;
case 0x4df202:c.instructions+=1;goto B4df202;
case 0x4df207:goto L4df207;
case 0x4df20a:c.instructions+=3;goto B4df20a;
case 0x4df20b:c.instructions+=2;goto B4df20b;
case 0x4df20f:c.instructions+=1;goto B4df20f;
case 0x4df214:goto L4df214;
case 0x4df219:c.instructions+=1;goto B4df219;
case 0x4df21e:goto L4df21e;
case 0x4df221:c.instructions+=2;goto B4df221;
case 0x4df223:c.instructions+=1;goto B4df223;
case 0x4df225:goto L4df225;
case 0x4df22a:c.instructions+=1;goto B4df22a;
case 0x4df22f:goto L4df22f;
case 0x4df232:c.instructions+=2;goto B4df232;
case 0x4df234:c.instructions+=1;goto B4df234;
case 0x4df236:goto L4df236;
case 0x4df23b:c.instructions+=1;goto B4df23b;
case 0x4df240:goto L4df240;
case 0x4df243:c.instructions+=2;goto B4df243;
case 0x4df245:c.instructions+=1;goto B4df245;
case 0x4df247:goto L4df247;
case 0x4df24c:c.instructions+=1;goto B4df24c;
case 0x4df251:goto L4df251;
case 0x4df254:c.instructions+=2;goto B4df254;
case 0x4df256:c.instructions+=1;goto B4df256;
case 0x4df258:goto L4df258;
case 0x4df25b:c.instructions+=1;goto B4df25b;
case 0x4df25d:goto L4df25d;
case 0x4df25f:goto L4df25f;
case 0x4df263:c.instructions+=3;goto B4df263;
case 0x4df264:c.instructions+=2;goto B4df264;
case 0x4df269:c.instructions+=1;goto B4df269;
case 0x4df26e:goto L4df26e;
case 0x4df270:c.instructions+=2;goto B4df270;
case 0x4df27a:c.instructions+=1;goto B4df27a;
case 0x4df27c:goto L4df27c;
case 0x4df27e:c.instructions+=3;goto B4df27e;
case 0x4df283:c.instructions+=2;goto B4df283;
case 0x4df285:c.instructions+=1;goto B4df285;
case 0x4df28a:goto L4df28a;
case 0x4df28f:c.instructions+=1;goto B4df28f;
case 0x4df294:goto L4df294;
case 0x4df297:c.instructions+=2;goto B4df297;
case 0x4df299:c.instructions+=1;goto B4df299;
case 0x4df29b:goto L4df29b;
case 0x4df29d:c.instructions+=5;goto B4df29d;
case 0x4df29f:c.instructions+=4;goto B4df29f;
case 0x4df2a1:c.instructions+=3;goto B4df2a1;
case 0x4df2a6:c.instructions+=2;goto B4df2a6;
case 0x4df2a8:c.instructions+=1;goto B4df2a8;
case 0x4df2ad:goto L4df2ad;
case 0x4df2b0:goto L4df2b0;
case 0x4df2b2:c.instructions+=2;goto B4df2b2;
case 0x4df2b7:c.instructions+=1;goto B4df2b7;
case 0x4df2bc:goto L4df2bc;
case 0x4df2c1:goto L4df2c1;
case 0x4df2c2:c.instructions+=1;goto B4df2c2;
case 0x4df2c7:goto L4df2c7;
case 0x4df2ca:c.instructions+=2;goto B4df2ca;
case 0x4df2cc:c.instructions+=1;goto B4df2cc;
case 0x4df2ce:goto L4df2ce;
case 0x4df2d1:c.instructions+=4;goto B4df2d1;
case 0x4df2d3:c.instructions+=3;goto B4df2d3;
case 0x4df2d8:c.instructions+=2;goto B4df2d8;
case 0x4df2d9:c.instructions+=1;goto B4df2d9;
case 0x4df2de:goto L4df2de;
case 0x4df2df:c.instructions+=1;goto B4df2df;
case 0x4df2e4:goto L4df2e4;
case 0x4df2e7:goto L4df2e7;
case 0x4df2ed:c.instructions+=1;goto B4df2ed;
case 0x4df2f2:goto L4df2f2;
case 0x4df2f5:c.instructions+=5;goto B4df2f5;
case 0x4df2f8:c.instructions+=4;goto B4df2f8;
case 0x4df2f9:c.instructions+=3;goto B4df2f9;
case 0x4df2fa:c.instructions+=2;goto B4df2fa;
case 0x4df300:c.instructions+=1;goto B4df300;
case 0x4df305:goto L4df305;
case 0x4df30c:c.instructions+=2;goto B4df30c;
case 0x4df314:c.instructions+=1;goto B4df314;
case 0x4df319:goto L4df319;
case 0x4df320:c.instructions+=7;goto B4df320;
case 0x4df321:c.instructions+=6;goto B4df321;
case 0x4df323:c.instructions+=5;goto B4df323;
case 0x4df32a:c.instructions+=4;goto B4df32a;
case 0x4df32b:c.instructions+=3;goto B4df32b;
case 0x4df32d:c.instructions+=2;goto B4df32d;
case 0x4df32e:c.instructions+=1;goto B4df32e;
case 0x4df340:goto L4df340;
case 0x4df341:c.instructions+=2;goto B4df341;
case 0x4df343:c.instructions+=1;goto B4df343;
case 0x4df348:goto L4df348;
case 0x4df34d:c.instructions+=1;goto B4df34d;
case 0x4df34f:goto L4df34f;
case 0x4df350:c.instructions+=1;goto B4df350;
case 0x4df355:goto L4df355;
case 0x4df358:goto L4df358;
case 0x4df35a:c.instructions+=2;goto B4df35a;
case 0x4df35b:c.instructions+=1;goto B4df35b;
case 0x4df360:goto L4df360;
case 0x4df366:c.instructions+=1;goto B4df366;
case 0x4df370:goto L4df370;
case 0x4df371:c.instructions+=2;goto B4df371;
case 0x4df373:c.instructions+=1;goto B4df373;
case 0x4df378:goto L4df378;
case 0x4df37d:c.instructions+=1;goto B4df37d;
case 0x4df37f:goto L4df37f;
case 0x4df380:c.instructions+=1;goto B4df380;
case 0x4df385:goto L4df385;
case 0x4df388:goto L4df388;
case 0x4df38a:c.instructions+=2;goto B4df38a;
case 0x4df38b:c.instructions+=1;goto B4df38b;
case 0x4df390:goto L4df390;
case 0x4df396:c.instructions+=1;goto B4df396;
case 0x4df3a0:goto L4df3a0;
case 0x4df3a1:c.instructions+=15;goto B4df3a1;
case 0x4df3a3:c.instructions+=14;goto B4df3a3;
case 0x4df3a6:c.instructions+=13;goto B4df3a6;
case 0x4df3a8:c.instructions+=12;goto B4df3a8;
case 0x4df3ad:c.instructions+=11;goto B4df3ad;
case 0x4df3b3:c.instructions+=10;goto B4df3b3;
case 0x4df3b4:c.instructions+=9;goto B4df3b4;
case 0x4df3bb:c.instructions+=8;goto B4df3bb;
case 0x4df3c1:c.instructions+=7;goto B4df3c1;
case 0x4df3c4:c.instructions+=6;goto B4df3c4;
case 0x4df3c5:c.instructions+=5;goto B4df3c5;
case 0x4df3c6:c.instructions+=4;goto B4df3c6;
case 0x4df3c8:c.instructions+=3;goto B4df3c8;
case 0x4df3c9:c.instructions+=2;goto B4df3c9;
case 0x4df3cd:c.instructions+=1;goto B4df3cd;
case 0x4df3d2:goto L4df3d2;
case 0x4df3d4:c.instructions+=3;goto B4df3d4;
case 0x4df3df:c.instructions+=2;goto B4df3df;
case 0x4df3e5:c.instructions+=1;goto B4df3e5;
case 0x4df3ea:goto L4df3ea;
case 0x4df3ee:c.instructions+=1;goto B4df3ee;
case 0x4df3f3:goto L4df3f3;
case 0x4df3f5:c.instructions+=6;goto B4df3f5;
case 0x4df3f7:c.instructions+=5;goto B4df3f7;
case 0x4df3f9:c.instructions+=4;goto B4df3f9;
case 0x4df3fb:c.instructions+=3;goto B4df3fb;
case 0x4df3ff:c.instructions+=2;goto B4df3ff;
case 0x4df407:c.instructions+=1;goto B4df407;
case 0x4df40c:goto L4df40c;
case 0x4df40e:c.instructions+=6;goto B4df40e;
case 0x4df412:c.instructions+=5;goto B4df412;
case 0x4df413:c.instructions+=4;goto B4df413;
case 0x4df415:c.instructions+=3;goto B4df415;
case 0x4df41a:c.instructions+=2;goto B4df41a;
case 0x4df422:c.instructions+=1;goto B4df422;
case 0x4df427:goto L4df427;
case 0x4df42c:c.instructions+=1;goto B4df42c;
case 0x4df431:goto L4df431;
case 0x4df434:c.instructions+=2;goto B4df434;
case 0x4df436:c.instructions+=1;goto B4df436;
case 0x4df438:goto L4df438;
case 0x4df43d:c.instructions+=1;goto B4df43d;
case 0x4df442:goto L4df442;
case 0x4df445:c.instructions+=2;goto B4df445;
case 0x4df447:c.instructions+=1;goto B4df447;
case 0x4df449:goto L4df449;
case 0x4df44e:c.instructions+=1;goto B4df44e;
case 0x4df453:goto L4df453;
case 0x4df456:c.instructions+=2;goto B4df456;
case 0x4df458:c.instructions+=1;goto B4df458;
case 0x4df45a:goto L4df45a;
case 0x4df45f:c.instructions+=1;goto B4df45f;
case 0x4df464:goto L4df464;
case 0x4df467:c.instructions+=2;goto B4df467;
case 0x4df469:c.instructions+=1;goto B4df469;
case 0x4df46b:goto L4df46b;
case 0x4df46e:c.instructions+=1;goto B4df46e;
case 0x4df470:goto L4df470;
case 0x4df472:goto L4df472;
case 0x4df476:c.instructions+=3;goto B4df476;
case 0x4df477:c.instructions+=2;goto B4df477;
case 0x4df47c:c.instructions+=1;goto B4df47c;
case 0x4df481:goto L4df481;
case 0x4df483:c.instructions+=2;goto B4df483;
case 0x4df48d:c.instructions+=1;goto B4df48d;
case 0x4df48f:goto L4df48f;
case 0x4df491:c.instructions+=3;goto B4df491;
case 0x4df496:c.instructions+=2;goto B4df496;
case 0x4df498:c.instructions+=1;goto B4df498;
case 0x4df49d:goto L4df49d;
case 0x4df4a2:c.instructions+=1;goto B4df4a2;
case 0x4df4a7:goto L4df4a7;
case 0x4df4aa:c.instructions+=2;goto B4df4aa;
case 0x4df4ac:c.instructions+=1;goto B4df4ac;
case 0x4df4ae:goto L4df4ae;
case 0x4df4b0:c.instructions+=5;goto B4df4b0;
case 0x4df4b2:c.instructions+=4;goto B4df4b2;
case 0x4df4b4:c.instructions+=3;goto B4df4b4;
case 0x4df4b9:c.instructions+=2;goto B4df4b9;
case 0x4df4bb:c.instructions+=1;goto B4df4bb;
case 0x4df4c0:goto L4df4c0;
case 0x4df4c3:goto L4df4c3;
case 0x4df4c8:goto L4df4c8;
case 0x4df4c9:c.instructions+=1;goto B4df4c9;
case 0x4df4ce:goto L4df4ce;
case 0x4df4d1:c.instructions+=2;goto B4df4d1;
case 0x4df4d3:c.instructions+=1;goto B4df4d3;
case 0x4df4d5:goto L4df4d5;
case 0x4df4d8:c.instructions+=4;goto B4df4d8;
case 0x4df4da:c.instructions+=3;goto B4df4da;
case 0x4df4df:c.instructions+=2;goto B4df4df;
case 0x4df4e0:c.instructions+=1;goto B4df4e0;
case 0x4df4e5:goto L4df4e5;
case 0x4df4e6:c.instructions+=1;goto B4df4e6;
case 0x4df4eb:goto L4df4eb;
case 0x4df4ee:goto L4df4ee;
case 0x4df4f4:c.instructions+=1;goto B4df4f4;
case 0x4df4f9:goto L4df4f9;
case 0x4df4fc:c.instructions+=5;goto B4df4fc;
case 0x4df4ff:c.instructions+=4;goto B4df4ff;
case 0x4df500:c.instructions+=3;goto B4df500;
case 0x4df501:c.instructions+=2;goto B4df501;
case 0x4df507:c.instructions+=1;goto B4df507;
case 0x4df50c:goto L4df50c;
case 0x4df513:c.instructions+=2;goto B4df513;
case 0x4df51b:c.instructions+=1;goto B4df51b;
case 0x4df520:goto L4df520;
case 0x4df527:c.instructions+=7;goto B4df527;
case 0x4df528:c.instructions+=6;goto B4df528;
case 0x4df52a:c.instructions+=5;goto B4df52a;
case 0x4df531:c.instructions+=4;goto B4df531;
case 0x4df532:c.instructions+=3;goto B4df532;
case 0x4df534:c.instructions+=2;goto B4df534;
case 0x4df535:c.instructions+=1;goto B4df535;
case 0x4df540:goto L4df540;
case 0x4df541:c.instructions+=2;goto B4df541;
case 0x4df543:c.instructions+=1;goto B4df543;
case 0x4df548:goto L4df548;
case 0x4df54d:c.instructions+=1;goto B4df54d;
case 0x4df54f:goto L4df54f;
case 0x4df550:c.instructions+=1;goto B4df550;
case 0x4df555:goto L4df555;
case 0x4df558:goto L4df558;
case 0x4df55a:c.instructions+=2;goto B4df55a;
case 0x4df55b:c.instructions+=1;goto B4df55b;
case 0x4df560:goto L4df560;
case 0x4df566:c.instructions+=1;goto B4df566;
case 0x4df570:goto L4df570;
case 0x4df571:c.instructions+=15;goto B4df571;
case 0x4df573:c.instructions+=14;goto B4df573;
case 0x4df576:c.instructions+=13;goto B4df576;
case 0x4df578:c.instructions+=12;goto B4df578;
case 0x4df57d:c.instructions+=11;goto B4df57d;
case 0x4df583:c.instructions+=10;goto B4df583;
case 0x4df584:c.instructions+=9;goto B4df584;
case 0x4df58b:c.instructions+=8;goto B4df58b;
case 0x4df591:c.instructions+=7;goto B4df591;
case 0x4df594:c.instructions+=6;goto B4df594;
case 0x4df595:c.instructions+=5;goto B4df595;
case 0x4df596:c.instructions+=4;goto B4df596;
case 0x4df598:c.instructions+=3;goto B4df598;
case 0x4df599:c.instructions+=2;goto B4df599;
case 0x4df59d:c.instructions+=1;goto B4df59d;
case 0x4df5a2:goto L4df5a2;
case 0x4df5a4:c.instructions+=3;goto B4df5a4;
case 0x4df5af:c.instructions+=2;goto B4df5af;
case 0x4df5b5:c.instructions+=1;goto B4df5b5;
case 0x4df5ba:goto L4df5ba;
case 0x4df5be:c.instructions+=1;goto B4df5be;
case 0x4df5c3:goto L4df5c3;
case 0x4df5c5:c.instructions+=6;goto B4df5c5;
case 0x4df5c7:c.instructions+=5;goto B4df5c7;
case 0x4df5c9:c.instructions+=4;goto B4df5c9;
case 0x4df5cb:c.instructions+=3;goto B4df5cb;
case 0x4df5cf:c.instructions+=2;goto B4df5cf;
case 0x4df5d7:c.instructions+=1;goto B4df5d7;
case 0x4df5dc:goto L4df5dc;
case 0x4df5de:c.instructions+=6;goto B4df5de;
case 0x4df5e2:c.instructions+=5;goto B4df5e2;
case 0x4df5e3:c.instructions+=4;goto B4df5e3;
case 0x4df5e5:c.instructions+=3;goto B4df5e5;
case 0x4df5ea:c.instructions+=2;goto B4df5ea;
case 0x4df5f2:c.instructions+=1;goto B4df5f2;
case 0x4df5f7:goto L4df5f7;
case 0x4df5fc:c.instructions+=1;goto B4df5fc;
case 0x4df601:goto L4df601;
case 0x4df604:c.instructions+=2;goto B4df604;
case 0x4df606:c.instructions+=1;goto B4df606;
case 0x4df608:goto L4df608;
case 0x4df60d:c.instructions+=1;goto B4df60d;
case 0x4df612:goto L4df612;
case 0x4df615:c.instructions+=2;goto B4df615;
case 0x4df617:c.instructions+=1;goto B4df617;
case 0x4df619:goto L4df619;
case 0x4df61e:c.instructions+=1;goto B4df61e;
case 0x4df623:goto L4df623;
case 0x4df626:c.instructions+=2;goto B4df626;
case 0x4df628:c.instructions+=1;goto B4df628;
case 0x4df62a:goto L4df62a;
case 0x4df62f:c.instructions+=1;goto B4df62f;
case 0x4df634:goto L4df634;
case 0x4df637:c.instructions+=2;goto B4df637;
case 0x4df639:c.instructions+=1;goto B4df639;
case 0x4df63b:goto L4df63b;
case 0x4df63e:c.instructions+=1;goto B4df63e;
case 0x4df640:goto L4df640;
case 0x4df642:goto L4df642;
case 0x4df646:c.instructions+=3;goto B4df646;
case 0x4df647:c.instructions+=2;goto B4df647;
case 0x4df64c:c.instructions+=1;goto B4df64c;
case 0x4df651:goto L4df651;
case 0x4df653:c.instructions+=2;goto B4df653;
case 0x4df65d:c.instructions+=1;goto B4df65d;
case 0x4df65f:goto L4df65f;
case 0x4df661:c.instructions+=3;goto B4df661;
case 0x4df666:c.instructions+=2;goto B4df666;
case 0x4df668:c.instructions+=1;goto B4df668;
case 0x4df66d:goto L4df66d;
case 0x4df672:c.instructions+=1;goto B4df672;
case 0x4df677:goto L4df677;
case 0x4df67a:c.instructions+=2;goto B4df67a;
case 0x4df67c:c.instructions+=1;goto B4df67c;
case 0x4df67e:goto L4df67e;
case 0x4df680:c.instructions+=5;goto B4df680;
case 0x4df682:c.instructions+=4;goto B4df682;
case 0x4df684:c.instructions+=3;goto B4df684;
case 0x4df689:c.instructions+=2;goto B4df689;
case 0x4df68b:c.instructions+=1;goto B4df68b;
case 0x4df690:goto L4df690;
case 0x4df693:goto L4df693;
case 0x4df69a:c.instructions+=2;goto B4df69a;
case 0x4df6a2:c.instructions+=1;goto B4df6a2;
case 0x4df6a7:goto L4df6a7;
case 0x4df6ae:c.instructions+=7;goto B4df6ae;
case 0x4df6b0:c.instructions+=6;goto B4df6b0;
case 0x4df6b1:c.instructions+=5;goto B4df6b1;
case 0x4df6b8:c.instructions+=4;goto B4df6b8;
case 0x4df6b9:c.instructions+=3;goto B4df6b9;
case 0x4df6bb:c.instructions+=2;goto B4df6bb;
case 0x4df6bc:c.instructions+=1;goto B4df6bc;
case 0x4df6c0:goto L4df6c0;
case 0x4df6c1:c.instructions+=2;goto B4df6c1;
case 0x4df6c3:c.instructions+=1;goto B4df6c3;
case 0x4df6c8:goto L4df6c8;
case 0x4df6cd:c.instructions+=1;goto B4df6cd;
case 0x4df6cf:goto L4df6cf;
case 0x4df6d0:c.instructions+=1;goto B4df6d0;
case 0x4df6d5:goto L4df6d5;
case 0x4df6d8:goto L4df6d8;
case 0x4df6da:c.instructions+=2;goto B4df6da;
case 0x4df6db:c.instructions+=1;goto B4df6db;
case 0x4df6e0:goto L4df6e0;
case 0x4df6e6:c.instructions+=1;goto B4df6e6;
case 0x4df6f0:goto L4df6f0;
case 0x4df6f1:c.instructions+=16;goto B4df6f1;
case 0x4df6f3:c.instructions+=15;goto B4df6f3;
case 0x4df6f6:c.instructions+=14;goto B4df6f6;
case 0x4df6f8:c.instructions+=13;goto B4df6f8;
case 0x4df6fd:c.instructions+=12;goto B4df6fd;
case 0x4df703:c.instructions+=11;goto B4df703;
case 0x4df704:c.instructions+=10;goto B4df704;
case 0x4df70b:c.instructions+=9;goto B4df70b;
case 0x4df711:c.instructions+=8;goto B4df711;
case 0x4df714:c.instructions+=7;goto B4df714;
case 0x4df715:c.instructions+=6;goto B4df715;
case 0x4df716:c.instructions+=5;goto B4df716;
case 0x4df717:c.instructions+=4;goto B4df717;
case 0x4df719:c.instructions+=3;goto B4df719;
case 0x4df71a:c.instructions+=2;goto B4df71a;
case 0x4df71e:c.instructions+=1;goto B4df71e;
case 0x4df723:goto L4df723;
case 0x4df729:c.instructions+=4;goto B4df729;
case 0x4df72b:c.instructions+=3;goto B4df72b;
case 0x4df736:c.instructions+=2;goto B4df736;
case 0x4df73c:c.instructions+=1;goto B4df73c;
case 0x4df741:goto L4df741;
case 0x4df744:c.instructions+=9;goto B4df744;
case 0x4df746:c.instructions+=8;goto B4df746;
case 0x4df748:c.instructions+=7;goto B4df748;
case 0x4df74a:c.instructions+=6;goto B4df74a;
case 0x4df74f:c.instructions+=5;goto B4df74f;
case 0x4df755:c.instructions+=4;goto B4df755;
case 0x4df756:c.instructions+=3;goto B4df756;
case 0x4df758:c.instructions+=2;goto B4df758;
case 0x4df760:c.instructions+=1;goto B4df760;
case 0x4df765:goto L4df765;
case 0x4df767:c.instructions+=2;goto B4df767;
case 0x4df771:c.instructions+=1;goto B4df771;
case 0x4df776:goto L4df776;
case 0x4df779:c.instructions+=6;goto B4df779;
case 0x4df77c:c.instructions+=5;goto B4df77c;
case 0x4df77f:c.instructions+=4;goto B4df77f;
case 0x4df784:c.instructions+=3;goto B4df784;
case 0x4df78a:c.instructions+=2;goto B4df78a;
case 0x4df78e:c.instructions+=1;goto B4df78e;
case 0x4df793:goto L4df793;
case 0x4df797:c.instructions+=3;goto B4df797;
case 0x4df798:c.instructions+=2;goto B4df798;
case 0x4df799:c.instructions+=1;goto B4df799;
case 0x4df79e:goto L4df79e;
case 0x4df7a1:c.instructions+=4;goto B4df7a1;
case 0x4df7a6:c.instructions+=3;goto B4df7a6;
case 0x4df7a8:c.instructions+=2;goto B4df7a8;
case 0x4df7ac:c.instructions+=1;goto B4df7ac;
case 0x4df7b1:goto L4df7b1;
case 0x4df7b5:c.instructions+=3;goto B4df7b5;
case 0x4df7b8:c.instructions+=2;goto B4df7b8;
case 0x4df7b9:c.instructions+=1;goto B4df7b9;
case 0x4df7be:goto L4df7be;
case 0x4df7c2:c.instructions+=9;goto B4df7c2;
case 0x4df7c5:c.instructions+=8;goto B4df7c5;
case 0x4df7c8:c.instructions+=7;goto B4df7c8;
case 0x4df7c9:c.instructions+=6;goto B4df7c9;
case 0x4df7ce:c.instructions+=5;goto B4df7ce;
case 0x4df7d0:c.instructions+=4;goto B4df7d0;
case 0x4df7d1:c.instructions+=3;goto B4df7d1;
case 0x4df7d2:c.instructions+=2;goto B4df7d2;
case 0x4df7d4:c.instructions+=1;goto B4df7d4;
case 0x4df7d9:goto L4df7d9;
case 0x4df7dc:c.instructions+=3;goto B4df7dc;
case 0x4df7e1:c.instructions+=2;goto B4df7e1;
case 0x4df7e7:c.instructions+=1;goto B4df7e7;
case 0x4df7ec:goto L4df7ec;
case 0x4df7ed:c.instructions+=2;goto B4df7ed;
case 0x4df7ee:c.instructions+=1;goto B4df7ee;
case 0x4df7f3:goto L4df7f3;
case 0x4df7f4:c.instructions+=1;goto B4df7f4;
case 0x4df7f9:goto L4df7f9;
case 0x4df7fc:c.instructions+=2;goto B4df7fc;
case 0x4df801:c.instructions+=1;goto B4df801;
case 0x4df806:goto L4df806;
case 0x4df807:c.instructions+=2;goto B4df807;
case 0x4df808:c.instructions+=1;goto B4df808;
case 0x4df80d:goto L4df80d;
case 0x4df80e:c.instructions+=1;goto B4df80e;
case 0x4df813:goto L4df813;
case 0x4df816:c.instructions+=2;goto B4df816;
case 0x4df81a:c.instructions+=1;goto B4df81a;
case 0x4df81f:goto L4df81f;
case 0x4df824:c.instructions+=7;goto B4df824;
case 0x4df82b:c.instructions+=6;goto B4df82b;
case 0x4df82d:c.instructions+=5;goto B4df82d;
case 0x4df82f:c.instructions+=4;goto B4df82f;
case 0x4df831:c.instructions+=3;goto B4df831;
case 0x4df833:c.instructions+=2;goto B4df833;
case 0x4df837:c.instructions+=1;goto B4df837;
case 0x4df83c:goto L4df83c;
case 0x4df83e:c.instructions+=6;goto B4df83e;
case 0x4df842:c.instructions+=5;goto B4df842;
case 0x4df843:c.instructions+=4;goto B4df843;
case 0x4df845:c.instructions+=3;goto B4df845;
case 0x4df84a:c.instructions+=2;goto B4df84a;
case 0x4df852:c.instructions+=1;goto B4df852;
case 0x4df857:goto L4df857;
case 0x4df85c:c.instructions+=1;goto B4df85c;
case 0x4df861:goto L4df861;
case 0x4df864:c.instructions+=2;goto B4df864;
case 0x4df866:c.instructions+=1;goto B4df866;
case 0x4df868:goto L4df868;
case 0x4df86d:c.instructions+=1;goto B4df86d;
case 0x4df872:goto L4df872;
case 0x4df875:c.instructions+=2;goto B4df875;
case 0x4df877:c.instructions+=1;goto B4df877;
case 0x4df879:goto L4df879;
case 0x4df87e:c.instructions+=1;goto B4df87e;
case 0x4df883:goto L4df883;
case 0x4df886:c.instructions+=2;goto B4df886;
case 0x4df888:c.instructions+=1;goto B4df888;
case 0x4df88a:goto L4df88a;
case 0x4df88f:c.instructions+=1;goto B4df88f;
case 0x4df894:goto L4df894;
case 0x4df897:c.instructions+=2;goto B4df897;
case 0x4df899:c.instructions+=1;goto B4df899;
case 0x4df89b:goto L4df89b;
case 0x4df89e:c.instructions+=1;goto B4df89e;
case 0x4df8a0:goto L4df8a0;
case 0x4df8a2:goto L4df8a2;
case 0x4df8a6:c.instructions+=3;goto B4df8a6;
case 0x4df8a7:c.instructions+=2;goto B4df8a7;
case 0x4df8ac:c.instructions+=1;goto B4df8ac;
case 0x4df8b1:goto L4df8b1;
case 0x4df8b3:c.instructions+=2;goto B4df8b3;
case 0x4df8b9:c.instructions+=1;goto B4df8b9;
case 0x4df8bb:goto L4df8bb;
case 0x4df8bc:c.instructions+=3;goto B4df8bc;
case 0x4df8c1:c.instructions+=2;goto B4df8c1;
case 0x4df8c3:c.instructions+=1;goto B4df8c3;
case 0x4df8c8:goto L4df8c8;
case 0x4df8cd:c.instructions+=1;goto B4df8cd;
case 0x4df8d2:goto L4df8d2;
case 0x4df8d5:c.instructions+=2;goto B4df8d5;
case 0x4df8d7:c.instructions+=1;goto B4df8d7;
case 0x4df8d9:goto L4df8d9;
case 0x4df8db:c.instructions+=5;goto B4df8db;
case 0x4df8dd:c.instructions+=4;goto B4df8dd;
case 0x4df8df:c.instructions+=3;goto B4df8df;
case 0x4df8e4:c.instructions+=2;goto B4df8e4;
case 0x4df8e6:c.instructions+=1;goto B4df8e6;
case 0x4df8eb:goto L4df8eb;
case 0x4df8ee:goto L4df8ee;
case 0x4df8f5:c.instructions+=2;goto B4df8f5;
case 0x4df8fd:c.instructions+=1;goto B4df8fd;
case 0x4df902:goto L4df902;
case 0x4df909:c.instructions+=8;goto B4df909;
case 0x4df90a:c.instructions+=7;goto B4df90a;
case 0x4df90c:c.instructions+=6;goto B4df90c;
case 0x4df90d:c.instructions+=5;goto B4df90d;
case 0x4df914:c.instructions+=4;goto B4df914;
case 0x4df915:c.instructions+=3;goto B4df915;
case 0x4df917:c.instructions+=2;goto B4df917;
case 0x4df918:c.instructions+=1;goto B4df918;
case 0x4df920:goto L4df920;
case 0x4df921:c.instructions+=2;goto B4df921;
case 0x4df923:c.instructions+=1;goto B4df923;
case 0x4df928:goto L4df928;
case 0x4df92d:c.instructions+=1;goto B4df92d;
case 0x4df92f:goto L4df92f;
case 0x4df930:c.instructions+=1;goto B4df930;
case 0x4df935:goto L4df935;
case 0x4df938:goto L4df938;
case 0x4df93a:c.instructions+=2;goto B4df93a;
case 0x4df93b:c.instructions+=1;goto B4df93b;
case 0x4df940:goto L4df940;
case 0x4df942:c.instructions+=12;goto B4df942;
case 0x4df947:c.instructions+=11;goto B4df947;
case 0x4df94d:c.instructions+=10;goto B4df94d;
case 0x4df94e:c.instructions+=9;goto B4df94e;
case 0x4df955:c.instructions+=8;goto B4df955;
case 0x4df956:c.instructions+=7;goto B4df956;
case 0x4df957:c.instructions+=6;goto B4df957;
case 0x4df959:c.instructions+=5;goto B4df959;
case 0x4df95d:c.instructions+=4;goto B4df95d;
case 0x4df963:c.instructions+=3;goto B4df963;
case 0x4df969:c.instructions+=2;goto B4df969;
case 0x4df971:c.instructions+=1;goto B4df971;
case 0x4df976:goto L4df976;
case 0x4df978:c.instructions+=2;goto B4df978;
case 0x4df980:c.instructions+=1;goto B4df980;
case 0x4df985:goto L4df985;
case 0x4df989:c.instructions+=4;goto B4df989;
case 0x4df98a:c.instructions+=3;goto B4df98a;
case 0x4df991:c.instructions+=2;goto B4df991;
case 0x4df994:c.instructions+=1;goto B4df994;
case 0x4df9a0:goto L4df9a0;
case 0x4df9a1:c.instructions+=2;goto B4df9a1;
case 0x4df9a3:c.instructions+=1;goto B4df9a3;
case 0x4df9a8:goto L4df9a8;
case 0x4df9ad:c.instructions+=1;goto B4df9ad;
case 0x4df9af:goto L4df9af;
case 0x4df9b0:c.instructions+=1;goto B4df9b0;
case 0x4df9b5:goto L4df9b5;
case 0x4df9b8:goto L4df9b8;
case 0x4df9ba:c.instructions+=2;goto B4df9ba;
case 0x4df9bb:c.instructions+=1;goto B4df9bb;
case 0x4df9c0:goto L4df9c0;
case 0x4df9c1:c.instructions+=15;goto B4df9c1;
case 0x4df9c3:c.instructions+=14;goto B4df9c3;
case 0x4df9c5:c.instructions+=13;goto B4df9c5;
case 0x4df9ca:c.instructions+=12;goto B4df9ca;
case 0x4df9d0:c.instructions+=11;goto B4df9d0;
case 0x4df9d1:c.instructions+=10;goto B4df9d1;
case 0x4df9d8:c.instructions+=9;goto B4df9d8;
case 0x4df9db:c.instructions+=8;goto B4df9db;
case 0x4df9dc:c.instructions+=7;goto B4df9dc;
case 0x4df9dd:c.instructions+=6;goto B4df9dd;
case 0x4df9de:c.instructions+=5;goto B4df9de;
case 0x4df9e0:c.instructions+=4;goto B4df9e0;
case 0x4df9e6:c.instructions+=3;goto B4df9e6;
case 0x4df9e8:c.instructions+=2;goto B4df9e8;
case 0x4df9ea:c.instructions+=1;goto B4df9ea;
case 0x4df9ec:goto L4df9ec;
case 0x4df9ef:c.instructions+=1;goto B4df9ef;
case 0x4df9f1:goto L4df9f1;
case 0x4df9f7:c.instructions+=3;goto B4df9f7;
case 0x4df9fc:c.instructions+=2;goto B4df9fc;
case 0x4df9ff:c.instructions+=1;goto B4df9ff;
case 0x4dfa01:goto L4dfa01;
case 0x4dfa04:goto L4dfa04;
case 0x4dfa07:c.instructions+=8;goto B4dfa07;
case 0x4dfa0a:c.instructions+=7;goto B4dfa0a;
case 0x4dfa0d:c.instructions+=6;goto B4dfa0d;
case 0x4dfa10:c.instructions+=5;goto B4dfa10;
case 0x4dfa13:c.instructions+=4;goto B4dfa13;
case 0x4dfa14:c.instructions+=3;goto B4dfa14;
case 0x4dfa19:c.instructions+=2;goto B4dfa19;
case 0x4dfa1c:c.instructions+=1;goto B4dfa1c;
case 0x4dfa21:goto L4dfa21;
case 0x4dfa24:c.instructions+=5;goto B4dfa24;
case 0x4dfa27:c.instructions+=4;goto B4dfa27;
case 0x4dfa28:c.instructions+=3;goto B4dfa28;
case 0x4dfa29:c.instructions+=2;goto B4dfa29;
case 0x4dfa2f:c.instructions+=1;goto B4dfa2f;
case 0x4dfa34:goto L4dfa34;
case 0x4dfa36:c.instructions+=2;goto B4dfa36;
case 0x4dfa38:c.instructions+=1;goto B4dfa38;
case 0x4dfa3e:goto L4dfa3e;
case 0x4dfa40:goto L4dfa40;
case 0x4dfa42:c.instructions+=2;goto B4dfa42;
case 0x4dfa44:c.instructions+=1;goto B4dfa44;
case 0x4dfa47:goto L4dfa47;
case 0x4dfa4d:c.instructions+=4;goto B4dfa4d;
case 0x4dfa53:c.instructions+=3;goto B4dfa53;
case 0x4dfa58:c.instructions+=2;goto B4dfa58;
case 0x4dfa5a:c.instructions+=1;goto B4dfa5a;
case 0x4dfa5f:goto L4dfa5f;
case 0x4dfa61:c.instructions+=2;goto B4dfa61;
case 0x4dfa64:c.instructions+=1;goto B4dfa64;
case 0x4dfa6a:goto L4dfa6a;
case 0x4dfa6c:c.instructions+=4;goto B4dfa6c;
case 0x4dfa72:c.instructions+=3;goto B4dfa72;
case 0x4dfa74:c.instructions+=2;goto B4dfa74;
case 0x4dfa76:c.instructions+=1;goto B4dfa76;
case 0x4dfa7c:goto L4dfa7c;
case 0x4dfa82:c.instructions+=2;goto B4dfa82;
case 0x4dfa83:c.instructions+=1;goto B4dfa83;
case 0x4dfa88:goto L4dfa88;
case 0x4dfa8b:c.instructions+=2;goto B4dfa8b;
case 0x4dfa8d:c.instructions+=1;goto B4dfa8d;
case 0x4dfa93:goto L4dfa93;
case 0x4dfa95:c.instructions+=1;goto B4dfa95;
case 0x4dfa9a:goto L4dfa9a;
case 0x4dfa9c:c.instructions+=1;goto B4dfa9c;
case 0x4dfaa2:goto L4dfaa2;
case 0x4dfaa5:c.instructions+=6;goto B4dfaa5;
case 0x4dfaa8:c.instructions+=5;goto B4dfaa8;
case 0x4dfaa9:c.instructions+=4;goto B4dfaa9;
case 0x4dfaaa:c.instructions+=3;goto B4dfaaa;
case 0x4dfaab:c.instructions+=2;goto B4dfaab;
case 0x4dfaad:c.instructions+=1;goto B4dfaad;
case 0x4dfab2:goto L4dfab2;
case 0x4dfab4:c.instructions+=1;goto B4dfab4;
case 0x4dfab6:goto L4dfab6;
case 0x4dfabb:c.instructions+=1;goto B4dfabb;
case 0x4dfac0:goto L4dfac0;
case 0x4dfac3:c.instructions+=4;goto B4dfac3;
case 0x4dfac6:c.instructions+=3;goto B4dfac6;
case 0x4dfac8:c.instructions+=2;goto B4dfac8;
case 0x4dfacc:c.instructions+=1;goto B4dfacc;
case 0x4dface:goto L4dface;
case 0x4dfad1:c.instructions+=11;goto B4dfad1;
case 0x4dfad4:c.instructions+=10;goto B4dfad4;
case 0x4dfad6:c.instructions+=9;goto B4dfad6;
case 0x4dfad9:c.instructions+=8;goto B4dfad9;
case 0x4dfadf:c.instructions+=7;goto B4dfadf;
case 0x4dfae0:c.instructions+=6;goto B4dfae0;
case 0x4dfae1:c.instructions+=5;goto B4dfae1;
case 0x4dfae4:c.instructions+=4;goto B4dfae4;
case 0x4dfae5:c.instructions+=3;goto B4dfae5;
case 0x4dfae6:c.instructions+=2;goto B4dfae6;
case 0x4dfae8:c.instructions+=1;goto B4dfae8;
case 0x4dfaed:goto L4dfaed;
case 0x4dfaef:c.instructions+=1;goto B4dfaef;
case 0x4dfaf1:goto L4dfaf1;
case 0x4dfaf3:goto L4dfaf3;
case 0x4dfaf5:c.instructions+=2;goto B4dfaf5;
case 0x4dfaf9:c.instructions+=1;goto B4dfaf9;
case 0x4dfafe:goto L4dfafe;
case 0x4dfb04:c.instructions+=6;goto B4dfb04;
case 0x4dfb06:c.instructions+=5;goto B4dfb06;
case 0x4dfb08:c.instructions+=4;goto B4dfb08;
case 0x4dfb09:c.instructions+=3;goto B4dfb09;
case 0x4dfb0a:c.instructions+=2;goto B4dfb0a;
case 0x4dfb0c:c.instructions+=1;goto B4dfb0c;
case 0x4dfb0f:goto L4dfb0f;
case 0x4dfb11:c.instructions+=1;goto B4dfb11;
case 0x4dfb13:goto L4dfb13;
case 0x4dfb16:c.instructions+=1;goto B4dfb16;
case 0x4dfb18:goto L4dfb18;
case 0x4dfb1a:goto L4dfb1a;
case 0x4dfb1d:c.instructions+=6;goto B4dfb1d;
case 0x4dfb20:c.instructions+=5;goto B4dfb20;
case 0x4dfb22:c.instructions+=4;goto B4dfb22;
case 0x4dfb25:c.instructions+=3;goto B4dfb25;
case 0x4dfb28:c.instructions+=2;goto B4dfb28;
case 0x4dfb2a:c.instructions+=1;goto B4dfb2a;
case 0x4dfb30:goto L4dfb30;
case 0x4dfb33:c.instructions+=4;goto B4dfb33;
case 0x4dfb36:c.instructions+=3;goto B4dfb36;
case 0x4dfb37:c.instructions+=2;goto B4dfb37;
case 0x4dfb38:c.instructions+=1;goto B4dfb38;
case 0x4dfb3d:goto L4dfb3d;
case 0x4dfb3f:c.instructions+=2;goto B4dfb3f;
case 0x4dfb41:c.instructions+=1;goto B4dfb41;
case 0x4dfb47:goto L4dfb47;
case 0x4dfb49:goto L4dfb49;
case 0x4dfb4c:c.instructions+=3;goto B4dfb4c;
case 0x4dfb51:c.instructions+=2;goto B4dfb51;
case 0x4dfb53:c.instructions+=1;goto B4dfb53;
case 0x4dfb58:goto L4dfb58;
case 0x4dfb5a:c.instructions+=2;goto B4dfb5a;
case 0x4dfb5c:c.instructions+=1;goto B4dfb5c;
case 0x4dfb5e:goto L4dfb5e;
case 0x4dfb61:c.instructions+=1;goto B4dfb61;
case 0x4dfb63:goto L4dfb63;
case 0x4dfb65:goto L4dfb65;
case 0x4dfb68:c.instructions+=1;goto B4dfb68;
case 0x4dfb6d:goto L4dfb6d;
case 0x4dfb72:c.instructions+=2;goto B4dfb72;
case 0x4dfb74:c.instructions+=1;goto B4dfb74;
case 0x4dfb79:goto L4dfb79;
case 0x4dfb7c:c.instructions+=2;goto B4dfb7c;
case 0x4dfb7e:c.instructions+=1;goto B4dfb7e;
case 0x4dfb80:goto L4dfb80;
case 0x4dfb85:c.instructions+=1;goto B4dfb85;
case 0x4dfb8a:goto L4dfb8a;
case 0x4dfb8d:c.instructions+=2;goto B4dfb8d;
case 0x4dfb8f:c.instructions+=1;goto B4dfb8f;
case 0x4dfb91:goto L4dfb91;
case 0x4dfb96:c.instructions+=1;goto B4dfb96;
case 0x4dfb9b:goto L4dfb9b;
case 0x4dfb9e:c.instructions+=2;goto B4dfb9e;
case 0x4dfba0:c.instructions+=1;goto B4dfba0;
case 0x4dfba2:goto L4dfba2;
case 0x4dfba7:c.instructions+=1;goto B4dfba7;
case 0x4dfbac:goto L4dfbac;
case 0x4dfbaf:c.instructions+=2;goto B4dfbaf;
case 0x4dfbb1:c.instructions+=1;goto B4dfbb1;
case 0x4dfbb3:goto L4dfbb3;
case 0x4dfbb6:c.instructions+=1;goto B4dfbb6;
case 0x4dfbb8:goto L4dfbb8;
case 0x4dfbba:goto L4dfbba;
case 0x4dfbbb:c.instructions+=2;goto B4dfbbb;
case 0x4dfbc0:c.instructions+=1;goto B4dfbc0;
case 0x4dfbc5:goto L4dfbc5;
case 0x4dfbc7:c.instructions+=2;goto B4dfbc7;
case 0x4dfbd1:c.instructions+=1;goto B4dfbd1;
case 0x4dfbd3:goto L4dfbd3;
case 0x4dfbd5:c.instructions+=3;goto B4dfbd5;
case 0x4dfbda:c.instructions+=2;goto B4dfbda;
case 0x4dfbdc:c.instructions+=1;goto B4dfbdc;
case 0x4dfbe1:goto L4dfbe1;
case 0x4dfbe4:c.instructions+=7;goto B4dfbe4;
case 0x4dfbe5:c.instructions+=6;goto B4dfbe5;
case 0x4dfbe8:c.instructions+=5;goto B4dfbe8;
case 0x4dfbea:c.instructions+=4;goto B4dfbea;
case 0x4dfbeb:c.instructions+=3;goto B4dfbeb;
case 0x4dfbf2:c.instructions+=2;goto B4dfbf2;
case 0x4dfbf3:c.instructions+=1;goto B4dfbf3;
case 0x4dfbf5:goto L4dfbf5;
case 0x4dfbf7:c.instructions+=6;goto B4dfbf7;
case 0x4dfbf9:c.instructions+=5;goto B4dfbf9;
case 0x4dfbfc:c.instructions+=4;goto B4dfbfc;
case 0x4dfbfe:c.instructions+=3;goto B4dfbfe;
case 0x4dfbff:c.instructions+=2;goto B4dfbff;
case 0x4dfc02:c.instructions+=1;goto B4dfc02;
case 0x4dfc07:goto L4dfc07;
case 0x4dfc0a:c.instructions+=4;goto B4dfc0a;
case 0x4dfc0d:c.instructions+=3;goto B4dfc0d;
case 0x4dfc10:c.instructions+=2;goto B4dfc10;
case 0x4dfc12:c.instructions+=1;goto B4dfc12;
case 0x4dfc14:goto L4dfc14;
case 0x4dfc17:c.instructions+=4;goto B4dfc17;
case 0x4dfc1e:c.instructions+=3;goto B4dfc1e;
case 0x4dfc20:c.instructions+=2;goto B4dfc20;
case 0x4dfc21:c.instructions+=1;goto B4dfc21;
case 0x4dfc30:goto L4dfc30;
case 0x4dfc31:c.instructions+=2;goto B4dfc31;
case 0x4dfc33:c.instructions+=1;goto B4dfc33;
case 0x4dfc38:goto L4dfc38;
case 0x4dfc3d:c.instructions+=1;goto B4dfc3d;
case 0x4dfc3f:goto L4dfc3f;
case 0x4dfc40:c.instructions+=1;goto B4dfc40;
case 0x4dfc45:goto L4dfc45;
case 0x4dfc48:goto L4dfc48;
case 0x4dfc4a:c.instructions+=2;goto B4dfc4a;
case 0x4dfc4b:c.instructions+=1;goto B4dfc4b;
case 0x4dfc50:goto L4dfc50;
case 0x4dfc51:c.instructions+=7;goto B4dfc51;
case 0x4dfc53:c.instructions+=6;goto B4dfc53;
case 0x4dfc56:c.instructions+=5;goto B4dfc56;
case 0x4dfc5b:c.instructions+=4;goto B4dfc5b;
case 0x4dfc5c:c.instructions+=3;goto B4dfc5c;
case 0x4dfc5d:c.instructions+=2;goto B4dfc5d;
case 0x4dfc5f:c.instructions+=1;goto B4dfc5f;
case 0x4dfc65:goto L4dfc65;
case 0x4dfc6b:goto L4dfc6b;
case 0x4dfc70:c.instructions+=1;goto B4dfc70;
case 0x4dfc76:goto L4dfc76;
case 0x4dfc78:goto L4dfc78;
case 0x4dfc7d:c.instructions+=1;goto B4dfc7d;
case 0x4dfc83:goto L4dfc83;
case 0x4dfc88:c.instructions+=1;goto B4dfc88;
case 0x4dfc8a:goto L4dfc8a;
case 0x4dfc8f:c.instructions+=1;goto B4dfc8f;
case 0x4dfc95:goto L4dfc95;
case 0x4dfc98:c.instructions+=5;goto B4dfc98;
case 0x4dfc9a:c.instructions+=4;goto B4dfc9a;
case 0x4dfc9f:c.instructions+=3;goto B4dfc9f;
case 0x4dfca4:c.instructions+=2;goto B4dfca4;
case 0x4dfca5:c.instructions+=1;goto B4dfca5;
case 0x4dfcaa:goto L4dfcaa;
case 0x4dfcad:c.instructions+=4;goto B4dfcad;
case 0x4dfcae:c.instructions+=3;goto B4dfcae;
case 0x4dfcaf:c.instructions+=2;goto B4dfcaf;
case 0x4dfcb0:c.instructions+=1;goto B4dfcb0;
case 0x4dfcb3:goto L4dfcb3;
case 0x4dfcb6:c.instructions+=3;goto B4dfcb6;
case 0x4dfcbb:c.instructions+=2;goto B4dfcbb;
case 0x4dfcbc:c.instructions+=1;goto B4dfcbc;
case 0x4dfcc1:goto L4dfcc1;
case 0x4dfcc4:c.instructions+=3;goto B4dfcc4;
case 0x4dfcc9:c.instructions+=2;goto B4dfcc9;
case 0x4dfcca:c.instructions+=1;goto B4dfcca;
case 0x4dfccf:goto L4dfccf;
case 0x4dfcd2:c.instructions+=5;goto B4dfcd2;
case 0x4dfcd4:c.instructions+=4;goto B4dfcd4;
case 0x4dfcd9:c.instructions+=3;goto B4dfcd9;
case 0x4dfcde:c.instructions+=2;goto B4dfcde;
case 0x4dfcdf:c.instructions+=1;goto B4dfcdf;
case 0x4dfce4:goto L4dfce4;
case 0x4dfce7:c.instructions+=5;goto B4dfce7;
case 0x4dfce9:c.instructions+=4;goto B4dfce9;
case 0x4dfcee:c.instructions+=3;goto B4dfcee;
case 0x4dfcf3:c.instructions+=2;goto B4dfcf3;
case 0x4dfcf4:c.instructions+=1;goto B4dfcf4;
case 0x4dfcf9:goto L4dfcf9;
case 0x4dfcfc:c.instructions+=5;goto B4dfcfc;
case 0x4dfcfe:c.instructions+=4;goto B4dfcfe;
case 0x4dfd03:c.instructions+=3;goto B4dfd03;
case 0x4dfd08:c.instructions+=2;goto B4dfd08;
case 0x4dfd09:c.instructions+=1;goto B4dfd09;
case 0x4dfd0e:goto L4dfd0e;
case 0x4dfd11:c.instructions+=4;goto B4dfd11;
case 0x4dfd12:c.instructions+=3;goto B4dfd12;
case 0x4dfd13:c.instructions+=2;goto B4dfd13;
case 0x4dfd14:c.instructions+=1;goto B4dfd14;
case 0x4dfd17:goto L4dfd17;
case 0x4dfd1c:c.instructions+=1;goto B4dfd1c;
case 0x4dfd1e:goto L4dfd1e;
case 0x4dfd23:c.instructions+=1;goto B4dfd23;
case 0x4dfd29:goto L4dfd29;
case 0x4dfd2c:c.instructions+=4;goto B4dfd2c;
case 0x4dfd31:c.instructions+=3;goto B4dfd31;
case 0x4dfd36:c.instructions+=2;goto B4dfd36;
case 0x4dfd37:c.instructions+=1;goto B4dfd37;
case 0x4dfd3c:goto L4dfd3c;
case 0x4dfd3f:c.instructions+=2;goto B4dfd3f;
case 0x4dfd41:c.instructions+=1;goto B4dfd41;
case 0x4dfd43:goto L4dfd43;
case 0x4dfd46:c.instructions+=8;goto B4dfd46;
case 0x4dfd49:c.instructions+=7;goto B4dfd49;
case 0x4dfd4c:c.instructions+=6;goto B4dfd4c;
case 0x4dfd4d:c.instructions+=5;goto B4dfd4d;
case 0x4dfd4e:c.instructions+=4;goto B4dfd4e;
case 0x4dfd4f:c.instructions+=3;goto B4dfd4f;
case 0x4dfd54:c.instructions+=2;goto B4dfd54;
case 0x4dfd56:c.instructions+=1;goto B4dfd56;
case 0x4dfd5b:goto L4dfd5b;
case 0x4dfd5e:c.instructions+=3;goto B4dfd5e;
case 0x4dfd60:c.instructions+=2;goto B4dfd60;
case 0x4dfd61:c.instructions+=1;goto B4dfd61;
case 0x4dfd66:goto L4dfd66;
case 0x4dfd69:c.instructions+=5;goto B4dfd69;
case 0x4dfd6b:c.instructions+=4;goto B4dfd6b;
case 0x4dfd70:c.instructions+=3;goto B4dfd70;
case 0x4dfd75:c.instructions+=2;goto B4dfd75;
case 0x4dfd76:c.instructions+=1;goto B4dfd76;
case 0x4dfd7b:goto L4dfd7b;
case 0x4dfd7e:goto L4dfd7e;
case 0x4dfd81:c.instructions+=5;goto B4dfd81;
case 0x4dfd84:c.instructions+=4;goto B4dfd84;
case 0x4dfd85:c.instructions+=3;goto B4dfd85;
case 0x4dfd87:c.instructions+=2;goto B4dfd87;
case 0x4dfd88:c.instructions+=1;goto B4dfd88;
case 0x4dfd8d:goto L4dfd8d;
case 0x4dfd90:c.instructions+=4;goto B4dfd90;
case 0x4dfd91:c.instructions+=3;goto B4dfd91;
case 0x4dfd92:c.instructions+=2;goto B4dfd92;
case 0x4dfd93:c.instructions+=1;goto B4dfd93;
case 0x4dfd96:goto L4dfd96;
case 0x4dfd9c:c.instructions+=2;goto B4dfd9c;
case 0x4dfd9e:c.instructions+=1;goto B4dfd9e;
case 0x4dfda4:goto L4dfda4;
case 0x4dfda7:c.instructions+=3;goto B4dfda7;
case 0x4dfdad:c.instructions+=2;goto B4dfdad;
case 0x4dfdb0:c.instructions+=1;goto B4dfdb0;
case 0x4dfdb2:goto L4dfdb2;
case 0x4dfdb4:c.instructions+=1;goto B4dfdb4;
case 0x4dfdba:goto L4dfdba;
case 0x4dfdc0:c.instructions+=4;goto B4dfdc0;
case 0x4dfdc6:c.instructions+=3;goto B4dfdc6;
case 0x4dfdc9:c.instructions+=2;goto B4dfdc9;
case 0x4dfdca:c.instructions+=1;goto B4dfdca;
case 0x4dfdcf:goto L4dfdcf;
case 0x4dfdd0:c.instructions+=7;goto B4dfdd0;
case 0x4dfdd5:c.instructions+=6;goto B4dfdd5;
case 0x4dfdda:c.instructions+=5;goto B4dfdda;
case 0x4dfddf:c.instructions+=4;goto B4dfddf;
case 0x4dfde4:c.instructions+=3;goto B4dfde4;
case 0x4dfde9:c.instructions+=2;goto B4dfde9;
case 0x4dfdea:c.instructions+=1;goto B4dfdea;
case 0x4dfdef:goto L4dfdef;
case 0x4dfdf2:c.instructions+=4;goto B4dfdf2;
case 0x4dfdf3:c.instructions+=3;goto B4dfdf3;
case 0x4dfdf4:c.instructions+=2;goto B4dfdf4;
case 0x4dfdf5:c.instructions+=1;goto B4dfdf5;
case 0x4dfdf8:goto L4dfdf8;
case 0x4dfdfe:c.instructions+=2;goto B4dfdfe;
case 0x4dfe01:c.instructions+=1;goto B4dfe01;
case 0x4dfe03:goto L4dfe03;
case 0x4dfe05:c.instructions+=1;goto B4dfe05;
case 0x4dfe0b:goto L4dfe0b;
case 0x4dfe11:c.instructions+=4;goto B4dfe11;
case 0x4dfe17:c.instructions+=3;goto B4dfe17;
case 0x4dfe1a:c.instructions+=2;goto B4dfe1a;
case 0x4dfe1b:c.instructions+=1;goto B4dfe1b;
case 0x4dfe20:goto L4dfe20;
case 0x4dfe21:c.instructions+=7;goto B4dfe21;
case 0x4dfe26:c.instructions+=6;goto B4dfe26;
case 0x4dfe2b:c.instructions+=5;goto B4dfe2b;
case 0x4dfe30:c.instructions+=4;goto B4dfe30;
case 0x4dfe35:c.instructions+=3;goto B4dfe35;
case 0x4dfe3a:c.instructions+=2;goto B4dfe3a;
case 0x4dfe3b:c.instructions+=1;goto B4dfe3b;
case 0x4dfe40:goto L4dfe40;
case 0x4dfe43:c.instructions+=4;goto B4dfe43;
case 0x4dfe44:c.instructions+=3;goto B4dfe44;
case 0x4dfe45:c.instructions+=2;goto B4dfe45;
case 0x4dfe46:c.instructions+=1;goto B4dfe46;
case 0x4dfe49:goto L4dfe49;
case 0x4dfe4e:c.instructions+=1;goto B4dfe4e;
case 0x4dfe53:goto L4dfe53;
case 0x4dfe56:c.instructions+=4;goto B4dfe56;
case 0x4dfe5c:c.instructions+=3;goto B4dfe5c;
case 0x4dfe5f:c.instructions+=2;goto B4dfe5f;
case 0x4dfe62:c.instructions+=1;goto B4dfe62;
case 0x4dfe64:goto L4dfe64;
case 0x4dfe6a:c.instructions+=3;goto B4dfe6a;
case 0x4dfe70:c.instructions+=2;goto B4dfe70;
case 0x4dfe71:c.instructions+=1;goto B4dfe71;
case 0x4dfe76:goto L4dfe76;
case 0x4dfe77:c.instructions+=7;goto B4dfe77;
case 0x4dfe7c:c.instructions+=6;goto B4dfe7c;
case 0x4dfe81:c.instructions+=5;goto B4dfe81;
case 0x4dfe86:c.instructions+=4;goto B4dfe86;
case 0x4dfe8b:c.instructions+=3;goto B4dfe8b;
case 0x4dfe90:c.instructions+=2;goto B4dfe90;
case 0x4dfe91:c.instructions+=1;goto B4dfe91;
case 0x4dfe96:goto L4dfe96;
case 0x4dfe99:c.instructions+=4;goto B4dfe99;
case 0x4dfe9a:c.instructions+=3;goto B4dfe9a;
case 0x4dfe9b:c.instructions+=2;goto B4dfe9b;
case 0x4dfe9c:c.instructions+=1;goto B4dfe9c;
case 0x4dfe9f:goto L4dfe9f;
case 0x4dfea5:c.instructions+=4;goto B4dfea5;
case 0x4dfeab:c.instructions+=3;goto B4dfeab;
case 0x4dfead:c.instructions+=2;goto B4dfead;
case 0x4dfeaf:c.instructions+=1;goto B4dfeaf;
case 0x4dfeb2:goto L4dfeb2;
case 0x4dfeb3:c.instructions+=1;goto B4dfeb3;
case 0x4dfeb8:goto L4dfeb8;
case 0x4dfebb:c.instructions+=3;goto B4dfebb;
case 0x4dfebc:c.instructions+=2;goto B4dfebc;
case 0x4dfebd:c.instructions+=1;goto B4dfebd;
case 0x4dfec2:goto L4dfec2;
case 0x4dfec5:c.instructions+=11;goto B4dfec5;
case 0x4dfec6:c.instructions+=10;goto B4dfec6;
case 0x4dfecb:c.instructions+=9;goto B4dfecb;
case 0x4dfecd:c.instructions+=8;goto B4dfecd;
case 0x4dfed2:c.instructions+=7;goto B4dfed2;
case 0x4dfed7:c.instructions+=6;goto B4dfed7;
case 0x4dfedc:c.instructions+=5;goto B4dfedc;
case 0x4dfee1:c.instructions+=4;goto B4dfee1;
case 0x4dfee6:c.instructions+=3;goto B4dfee6;
case 0x4dfeeb:c.instructions+=2;goto B4dfeeb;
case 0x4dfeec:c.instructions+=1;goto B4dfeec;
case 0x4dfef1:goto L4dfef1;
case 0x4dfef4:c.instructions+=4;goto B4dfef4;
case 0x4dfef5:c.instructions+=3;goto B4dfef5;
case 0x4dfef6:c.instructions+=2;goto B4dfef6;
case 0x4dfef7:c.instructions+=1;goto B4dfef7;
case 0x4dfefa:goto L4dfefa;
case 0x4dff04:c.instructions+=3;goto B4dff04;
case 0x4dff09:c.instructions+=2;goto B4dff09;
case 0x4dff0b:c.instructions+=1;goto B4dff0b;
case 0x4dff10:goto L4dff10;
case 0x4dff11:c.instructions+=3;goto B4dff11;
case 0x4dff12:c.instructions+=2;goto B4dff12;
case 0x4dff13:c.instructions+=1;goto B4dff13;
case 0x4dff16:goto L4dff16;
case 0x4dff1b:c.instructions+=1;goto B4dff1b;
case 0x4dff21:goto L4dff21;
case 0x4dff27:goto L4dff27;
case 0x4dff2c:c.instructions+=1;goto B4dff2c;
case 0x4dff2e:goto L4dff2e;
case 0x4dff33:c.instructions+=1;goto B4dff33;
case 0x4dff39:goto L4dff39;
case 0x4dff3a:c.instructions+=3;goto B4dff3a;
case 0x4dff3c:c.instructions+=2;goto B4dff3c;
case 0x4dff42:c.instructions+=1;goto B4dff42;
case 0x4dff47:goto L4dff47;
case 0x4dff48:c.instructions+=3;goto B4dff48;
case 0x4dff49:c.instructions+=2;goto B4dff49;
case 0x4dff4a:c.instructions+=1;goto B4dff4a;
case 0x4dff4d:goto L4dff4d;
case 0x4dff50:c.instructions+=1;goto B4dff50;
case 0x4dff55:goto L4dff55;
case 0x4dff5b:c.instructions+=3;goto B4dff5b;
case 0x4dff5e:c.instructions+=2;goto B4dff5e;
case 0x4dff61:c.instructions+=1;goto B4dff61;
case 0x4dff67:goto L4dff67;
case 0x4dff6e:c.instructions+=1;goto B4dff6e;
case 0x4dff75:goto L4dff75;
case 0x4dff7a:c.instructions+=2;goto B4dff7a;
case 0x4dff7c:c.instructions+=1;goto B4dff7c;
case 0x4dff81:goto L4dff81;
case 0x4dff82:c.instructions+=3;goto B4dff82;
case 0x4dff83:c.instructions+=2;goto B4dff83;
case 0x4dff84:c.instructions+=1;goto B4dff84;
case 0x4dff87:goto L4dff87;
case 0x4dff8c:c.instructions+=3;goto B4dff8c;
case 0x4dff8e:c.instructions+=2;goto B4dff8e;
case 0x4dff90:c.instructions+=1;goto B4dff90;
case 0x4dff96:goto L4dff96;
case 0x4dffa0:goto L4dffa0;
case 0x4dffa5:c.instructions+=2;goto B4dffa5;
case 0x4dffa7:c.instructions+=1;goto B4dffa7;
case 0x4dffac:goto L4dffac;
case 0x4dffb1:c.instructions+=3;goto B4dffb1;
case 0x4dffb2:c.instructions+=2;goto B4dffb2;
case 0x4dffb4:c.instructions+=1;goto B4dffb4;
case 0x4dffb6:goto L4dffb6;
case 0x4dffb7:c.instructions+=3;goto B4dffb7;
case 0x4dffb8:c.instructions+=2;goto B4dffb8;
case 0x4dffb9:c.instructions+=1;goto B4dffb9;
case 0x4dffbc:goto L4dffbc;
case 0x4dffc1:c.instructions+=3;goto B4dffc1;
case 0x4dffc3:c.instructions+=2;goto B4dffc3;
case 0x4dffc5:c.instructions+=1;goto B4dffc5;
case 0x4dffcb:goto L4dffcb;
case 0x4dffd0:goto L4dffd0;
case 0x4dffd5:c.instructions+=2;goto B4dffd5;
case 0x4dffd7:c.instructions+=1;goto B4dffd7;
case 0x4dffdc:goto L4dffdc;
case 0x4dffe1:c.instructions+=3;goto B4dffe1;
case 0x4dffe2:c.instructions+=2;goto B4dffe2;
case 0x4dffe4:c.instructions+=1;goto B4dffe4;
case 0x4dffe6:goto L4dffe6;
case 0x4dffe7:c.instructions+=3;goto B4dffe7;
case 0x4dffe8:c.instructions+=2;goto B4dffe8;
case 0x4dffe9:c.instructions+=1;goto B4dffe9;
case 0x4dffec:goto L4dffec;
case 0x4dfff2:c.instructions+=2;goto B4dfff2;
case 0x4dfff4:c.instructions+=1;goto B4dfff4;
case 0x4dfffa:goto L4dfffa;
case 0x4dffff:c.instructions+=1;goto B4dffff;
default:missing_instruction(c.pc);}
B4df005:L4df005:{c.instructions+=2;NFSU2_TR(0x4df005);
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
B4df008:{NFSU2_TR(0x4df008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df010:L4df010:{c.instructions+=3;NFSU2_TR(0x4df010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df011:{NFSU2_TR(0x4df011);
__builtin_memmove((R+24),(R+4),4);
}
B4df013:{NFSU2_TR(0x4df013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df018ull));
TAIL_STATIC(0x4defb0u,4de);
}
B4df018:L4df018:{c.instructions+=2;NFSU2_TR(0x4df018);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df01d:{NFSU2_TR(0x4df01d);
if(r1(R+518)){{goto L4df028;}}
}
B4df01f:L4df01f:{c.instructions+=2;NFSU2_TR(0x4df01f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df020:{NFSU2_TR(0x4df020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df025ull));
TAIL_STATIC(0x575630u,575);
}
B4df025:L4df025:{c.instructions+=1;NFSU2_TR(0x4df025);
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
B4df028:L4df028:{c.instructions+=3;NFSU2_TR(0x4df028);
__builtin_memmove((R+0),(R+24),4);
}
B4df02a:{NFSU2_TR(0x4df02a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df02b:{NFSU2_TR(0x4df02b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df030:L4df030:{c.instructions+=14;NFSU2_TR(0x4df030);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df032:{NFSU2_TR(0x4df032);
u8 U[4];
w4(U+0,u32(0x77589eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df037:{NFSU2_TR(0x4df037);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df03d:{NFSU2_TR(0x4df03d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df03e:{NFSU2_TR(0x4df03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df045:{NFSU2_TR(0x4df045);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df046:{NFSU2_TR(0x4df046);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df047:{NFSU2_TR(0x4df047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df048:{NFSU2_TR(0x4df048);
__builtin_memmove((R+28),(R+4),4);
}
B4df04a:{NFSU2_TR(0x4df04a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df04e:{NFSU2_TR(0x4df04e);
u8 U[4];
w4(U+0,u32(0x7974f0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4df054:{NFSU2_TR(0x4df054);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x118ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4df05a:{NFSU2_TR(0x4df05a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df062:{NFSU2_TR(0x4df062);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df067ull));
TAIL_STATIC(0x4985a0u,498);
}
B4df067:L4df067:{c.instructions+=3;NFSU2_TR(0x4df067);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4df06a:{NFSU2_TR(0x4df06a);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df06f:{NFSU2_TR(0x4df06f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df074ull));
TAIL_STATIC(0x52ea90u,52e);
}
B4df074:L4df074:{c.instructions+=5;NFSU2_TR(0x4df074);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df077:{NFSU2_TR(0x4df077);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df07a:{NFSU2_TR(0x4df07a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4df07c:{NFSU2_TR(0x4df07c);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df081:{NFSU2_TR(0x4df081);
if(r1(R+518)){{goto L4df09c;}}
}
B4df083:L4df083:{c.instructions+=6;NFSU2_TR(0x4df083);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4df085:{NFSU2_TR(0x4df085);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4df088:{NFSU2_TR(0x4df088);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4df08a:{NFSU2_TR(0x4df08a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df08b:{NFSU2_TR(0x4df08b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df08e:{NFSU2_TR(0x4df08e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df093ull));
TAIL_STATIC(0x575630u,575);
}
B4df093:L4df093:{c.instructions+=4;NFSU2_TR(0x4df093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4df095:{NFSU2_TR(0x4df095);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df098:{NFSU2_TR(0x4df098);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4df09a:{NFSU2_TR(0x4df09a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4df083u);}goto L4df083;}}
}
B4df09c:L4df09c:{c.instructions+=3;NFSU2_TR(0x4df09c);
__builtin_memmove((R+4),(R+28),4);
}
B4df09e:{NFSU2_TR(0x4df09e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df0a6:{NFSU2_TR(0x4df0a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df0abull));
TAIL_STATIC(0x510d40u,510);
}
B4df0ab:L4df0ab:{c.instructions+=6;NFSU2_TR(0x4df0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df0af:{NFSU2_TR(0x4df0af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4df0b0:{NFSU2_TR(0x4df0b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df0b1:{NFSU2_TR(0x4df0b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df0b8:{NFSU2_TR(0x4df0b8);
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
B4df0bb:{NFSU2_TR(0x4df0bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df0c0:L4df0c0:{c.instructions+=3;NFSU2_TR(0x4df0c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df0c4:{NFSU2_TR(0x4df0c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df0c9:{NFSU2_TR(0x4df0c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df0dd;}}
}
B4df0cb:L4df0cb:{c.instructions+=4;NFSU2_TR(0x4df0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df0ce:{NFSU2_TR(0x4df0ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4df0d1:{NFSU2_TR(0x4df0d1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4df0d3:{NFSU2_TR(0x4df0d3);
if(r1(R+518)){{goto L4df105;}}
}
B4df0d5:L4df0d5:{c.instructions+=2;NFSU2_TR(0x4df0d5);
w4(R+0,u32(0x13ull));
}
B4df0da:{NFSU2_TR(0x4df0da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df0dd:L4df0dd:{c.instructions+=2;NFSU2_TR(0x4df0dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df0e2:{NFSU2_TR(0x4df0e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df0f1;}}
}
B4df0e4:L4df0e4:{c.instructions+=3;NFSU2_TR(0x4df0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4df0e7:{NFSU2_TR(0x4df0e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4df0ea:{NFSU2_TR(0x4df0ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df105;}}
}
B4df0ec:L4df0ec:{c.instructions+=2;NFSU2_TR(0x4df0ec);
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
B4df0ee:{NFSU2_TR(0x4df0ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df0f1:L4df0f1:{c.instructions+=2;NFSU2_TR(0x4df0f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df0f6:{NFSU2_TR(0x4df0f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df105;}}
}
B4df0f8:L4df0f8:{c.instructions+=3;NFSU2_TR(0x4df0f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4df0fb:{NFSU2_TR(0x4df0fb);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4df0fe:{NFSU2_TR(0x4df0fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df105;}}
}
B4df100:L4df100:{c.instructions+=2;NFSU2_TR(0x4df100);
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
B4df102:{NFSU2_TR(0x4df102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df105:L4df105:{c.instructions+=5;NFSU2_TR(0x4df105);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df109:{NFSU2_TR(0x4df109);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df10b:{NFSU2_TR(0x4df10b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df10c:{NFSU2_TR(0x4df10c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df10d:{NFSU2_TR(0x4df10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df112ull));
TAIL_STATIC(0x50d1a0u,50d);
}
B4df112:L4df112:{c.instructions+=2;NFSU2_TR(0x4df112);
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
B4df115:{NFSU2_TR(0x4df115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df120:L4df120:{c.instructions+=3;NFSU2_TR(0x4df120);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df121:{NFSU2_TR(0x4df121);
__builtin_memmove((R+24),(R+4),4);
}
B4df123:{NFSU2_TR(0x4df123);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df128ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4df030u);}goto L4df030;}
}
B4df128:L4df128:{c.instructions+=2;NFSU2_TR(0x4df128);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df12d:{NFSU2_TR(0x4df12d);
if(r1(R+518)){{goto L4df138;}}
}
B4df12f:L4df12f:{c.instructions+=2;NFSU2_TR(0x4df12f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df130:{NFSU2_TR(0x4df130);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df135ull));
TAIL_STATIC(0x575630u,575);
}
B4df135:L4df135:{c.instructions+=1;NFSU2_TR(0x4df135);
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
B4df138:L4df138:{c.instructions+=3;NFSU2_TR(0x4df138);
__builtin_memmove((R+0),(R+24),4);
}
B4df13a:{NFSU2_TR(0x4df13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df13b:{NFSU2_TR(0x4df13b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df140:L4df140:{c.instructions+=16;NFSU2_TR(0x4df140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df141:{NFSU2_TR(0x4df141);
__builtin_memmove((R+20),(R+16),4);
}
B4df143:{NFSU2_TR(0x4df143);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4df146:{NFSU2_TR(0x4df146);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df148:{NFSU2_TR(0x4df148);
u8 U[4];
w4(U+0,u32(0x7758d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df14d:{NFSU2_TR(0x4df14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df153:{NFSU2_TR(0x4df153);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df154:{NFSU2_TR(0x4df154);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df15b:{NFSU2_TR(0x4df15b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4df161:{NFSU2_TR(0x4df161);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df164:{NFSU2_TR(0x4df164);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df165:{NFSU2_TR(0x4df165);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df166:{NFSU2_TR(0x4df166);
__builtin_memmove((R+24),(R+4),4);
}
B4df168:{NFSU2_TR(0x4df168);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df169:{NFSU2_TR(0x4df169);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df16d:{NFSU2_TR(0x4df16d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df172ull));
TAIL_STATIC(0x552330u,552);
}
B4df172:L4df172:{c.instructions+=6;NFSU2_TR(0x4df172);
u8 U[4];
w4(U+0,u32(0x797510ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4df178:{NFSU2_TR(0x4df178);
__builtin_memmove((R+4),gp(0x836370),4);
}
B4df17e:{NFSU2_TR(0x4df17e);
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
B4df180:{NFSU2_TR(0x4df180);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df18b:{NFSU2_TR(0x4df18b);
s4(0x850078,u32(0x2ull));
}
B4df195:{NFSU2_TR(0x4df195);
if(r1(R+518)){{goto L4df19d;}}
}
B4df197:L4df197:{c.instructions+=3;NFSU2_TR(0x4df197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4df199:{NFSU2_TR(0x4df199);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df19b:{NFSU2_TR(0x4df19b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df19dull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4df19d:L4df19d:{c.instructions+=3;NFSU2_TR(0x4df19d);
__builtin_memmove((R+4),(R+24),4);
}
B4df19f:{NFSU2_TR(0x4df19f);
s4(0x836370,u32(0x0ull));
}
B4df1a9:{NFSU2_TR(0x4df1a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df1aeull));
TAIL_STATIC(0x4aee30u,4ae);
}
B4df1ae:L4df1ae:{c.instructions+=2;NFSU2_TR(0x4df1ae);
__builtin_memmove((R+4),(R+24),4);
}
B4df1b0:{NFSU2_TR(0x4df1b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df1b5ull));
TAIL_STATIC(0x50da50u,50d);
}
B4df1b5:L4df1b5:{c.instructions+=2;NFSU2_TR(0x4df1b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df1b9:{NFSU2_TR(0x4df1b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df1beull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4df1be:L4df1be:{c.instructions+=7;NFSU2_TR(0x4df1be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1c0:{NFSU2_TR(0x4df1c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1c2:{NFSU2_TR(0x4df1c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1c4:{NFSU2_TR(0x4df1c4);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1c6:{NFSU2_TR(0x4df1c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df1ca:{NFSU2_TR(0x4df1ca);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df1d2:{NFSU2_TR(0x4df1d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df1d7ull));
TAIL_STATIC(0x610270u,610);
}
B4df1d7:L4df1d7:{c.instructions+=4;NFSU2_TR(0x4df1d7);
__builtin_memmove((R+0),gp(0x86347d),1);
}
B4df1dc:{NFSU2_TR(0x4df1dc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df1de:{NFSU2_TR(0x4df1de);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df1e6:{NFSU2_TR(0x4df1e6);
if(r1(R+518)){{goto L4df1fd;}}
}
B4df1e8:L4df1e8:{c.instructions+=6;NFSU2_TR(0x4df1e8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1ea:{NFSU2_TR(0x4df1ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4df1ee:{NFSU2_TR(0x4df1ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1ef:{NFSU2_TR(0x4df1ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df1f1:{NFSU2_TR(0x4df1f1);
w4(R+4,u32(0x83a9d0ull));
}
B4df1f6:{NFSU2_TR(0x4df1f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df1fbull));
TAIL_STATIC(0x515d00u,515);
}
B4df1fb:L4df1fb:{c.instructions+=1;NFSU2_TR(0x4df1fb);
{goto L4df214;}
}
B4df1fd:L4df1fd:{c.instructions+=2;NFSU2_TR(0x4df1fd);
u8 U[4];
w4(U+0,u32(0x797500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df202:{NFSU2_TR(0x4df202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df207ull));
TAIL_STATIC(0x43db50u,43d);
}
B4df207:L4df207:{c.instructions+=4;NFSU2_TR(0x4df207);
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
B4df20a:{NFSU2_TR(0x4df20a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df20b:{NFSU2_TR(0x4df20b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df20f:{NFSU2_TR(0x4df20f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df214ull));
TAIL_STATIC(0x637270u,637);
}
B4df214:L4df214:{c.instructions+=2;NFSU2_TR(0x4df214);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df219:{NFSU2_TR(0x4df219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df21eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df21e:L4df21e:{c.instructions+=3;NFSU2_TR(0x4df21e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df221:{NFSU2_TR(0x4df221);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df223:{NFSU2_TR(0x4df223);
if(r1(R+518)){{goto L4df236;}}
}
B4df225:L4df225:{c.instructions+=2;NFSU2_TR(0x4df225);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df22a:{NFSU2_TR(0x4df22a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df22full));
TAIL_STATIC(0x51bd10u,51b);
}
B4df22f:L4df22f:{c.instructions+=3;NFSU2_TR(0x4df22f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df232:{NFSU2_TR(0x4df232);
__builtin_memmove((R+28),(R+0),4);
}
B4df234:{NFSU2_TR(0x4df234);
{goto L4df25f;}
}
B4df236:L4df236:{c.instructions+=2;NFSU2_TR(0x4df236);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df23b:{NFSU2_TR(0x4df23b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df240ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df240:L4df240:{c.instructions+=3;NFSU2_TR(0x4df240);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df243:{NFSU2_TR(0x4df243);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df245:{NFSU2_TR(0x4df245);
if(r1(R+518)){{goto L4df25d;}}
}
B4df247:L4df247:{c.instructions+=2;NFSU2_TR(0x4df247);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df24c:{NFSU2_TR(0x4df24c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df251ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df251:L4df251:{c.instructions+=3;NFSU2_TR(0x4df251);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df254:{NFSU2_TR(0x4df254);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df256:{NFSU2_TR(0x4df256);
if(r1(R+518)){{goto L4df25d;}}
}
B4df258:L4df258:{c.instructions+=2;NFSU2_TR(0x4df258);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4df25b:{NFSU2_TR(0x4df25b);
{goto L4df25f;}
}
B4df25d:L4df25d:{c.instructions+=1;NFSU2_TR(0x4df25d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4df25f:L4df25f:{c.instructions+=4;NFSU2_TR(0x4df25f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df263:{NFSU2_TR(0x4df263);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df264:{NFSU2_TR(0x4df264);
w4(R+4,u32(0x8371b0ull));
}
B4df269:{NFSU2_TR(0x4df269);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df26eull));
TAIL_STATIC(0x413440u,413);
}
B4df26e:L4df26e:{c.instructions+=3;NFSU2_TR(0x4df26e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df270:{NFSU2_TR(0x4df270);
s4(0x83623c,u32(0x2ull));
}
B4df27a:{NFSU2_TR(0x4df27a);
if(r1(R+518)){{goto L4df28a;}}
}
B4df27c:L4df27c:{c.instructions+=4;NFSU2_TR(0x4df27c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df27e:{NFSU2_TR(0x4df27e);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df283:{NFSU2_TR(0x4df283);
__builtin_memmove((R+4),(R+28),4);
}
B4df285:{NFSU2_TR(0x4df285);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df28aull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4df28a:L4df28a:{c.instructions+=2;NFSU2_TR(0x4df28a);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df28f:{NFSU2_TR(0x4df28f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df294ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df294:L4df294:{c.instructions+=3;NFSU2_TR(0x4df294);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df297:{NFSU2_TR(0x4df297);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df299:{NFSU2_TR(0x4df299);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df2b0;}}
}
B4df29b:L4df29b:{c.instructions+=6;NFSU2_TR(0x4df29b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df29d:{NFSU2_TR(0x4df29d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df29f:{NFSU2_TR(0x4df29f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2a1:{NFSU2_TR(0x4df2a1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2a6:{NFSU2_TR(0x4df2a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2a8:{NFSU2_TR(0x4df2a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2adull));
TAIL_STATIC(0x555f50u,555);
}
B4df2ad:L4df2ad:{c.instructions+=1;NFSU2_TR(0x4df2ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4df2b0:L4df2b0:{c.instructions+=3;NFSU2_TR(0x4df2b0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2b2:{NFSU2_TR(0x4df2b2);
w4(R+4,u32(0x83aab4ull));
}
B4df2b7:{NFSU2_TR(0x4df2b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2bcull));
TAIL_STATIC(0x502930u,502);
}
B4df2bc:L4df2bc:{c.instructions+=1;NFSU2_TR(0x4df2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2c1ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4df2c1:L4df2c1:{c.instructions+=2;NFSU2_TR(0x4df2c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2c2:{NFSU2_TR(0x4df2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2c7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df2c7:L4df2c7:{c.instructions+=3;NFSU2_TR(0x4df2c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df2ca:{NFSU2_TR(0x4df2ca);
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
B4df2cc:{NFSU2_TR(0x4df2cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df2e7;}}
}
B4df2ce:L4df2ce:{c.instructions+=5;NFSU2_TR(0x4df2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df2d1:{NFSU2_TR(0x4df2d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2d3:{NFSU2_TR(0x4df2d3);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2d8:{NFSU2_TR(0x4df2d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2d9:{NFSU2_TR(0x4df2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2deull));
TAIL_STATIC(0x50cea0u,50c);
}
B4df2de:L4df2de:{c.instructions+=2;NFSU2_TR(0x4df2de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2df:{NFSU2_TR(0x4df2df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2e4ull));
TAIL_STATIC(0x555f10u,555);
}
B4df2e4:L4df2e4:{c.instructions+=1;NFSU2_TR(0x4df2e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4df2e7:L4df2e7:{c.instructions+=2;NFSU2_TR(0x4df2e7);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4df2ed:{NFSU2_TR(0x4df2ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df2f2ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4df2f2:L4df2f2:{c.instructions+=6;NFSU2_TR(0x4df2f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df2f5:{NFSU2_TR(0x4df2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df2f8:{NFSU2_TR(0x4df2f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2f9:{NFSU2_TR(0x4df2f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df2fa:{NFSU2_TR(0x4df2fa);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4df300:{NFSU2_TR(0x4df300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df305ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4df305:L4df305:{c.instructions+=3;NFSU2_TR(0x4df305);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df30c:{NFSU2_TR(0x4df30c);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df314:{NFSU2_TR(0x4df314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df319ull));
TAIL_STATIC(0x4022c0u,402);
}
B4df319:L4df319:{c.instructions+=8;NFSU2_TR(0x4df319);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df320:{NFSU2_TR(0x4df320);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4df321:{NFSU2_TR(0x4df321);
__builtin_memmove((R+0),(R+24),4);
}
B4df323:{NFSU2_TR(0x4df323);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df32a:{NFSU2_TR(0x4df32a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df32b:{NFSU2_TR(0x4df32b);
__builtin_memmove((R+16),(R+20),4);
}
B4df32d:{NFSU2_TR(0x4df32d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4df32e:{NFSU2_TR(0x4df32e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df340:L4df340:{c.instructions+=3;NFSU2_TR(0x4df340);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df341:{NFSU2_TR(0x4df341);
__builtin_memmove((R+24),(R+4),4);
}
B4df343:{NFSU2_TR(0x4df343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df348ull));
{goto L4df360;}
}
B4df348:L4df348:{c.instructions+=2;NFSU2_TR(0x4df348);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df34d:{NFSU2_TR(0x4df34d);
if(r1(R+518)){{goto L4df358;}}
}
B4df34f:L4df34f:{c.instructions+=2;NFSU2_TR(0x4df34f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df350:{NFSU2_TR(0x4df350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df355ull));
TAIL_STATIC(0x575630u,575);
}
B4df355:L4df355:{c.instructions+=1;NFSU2_TR(0x4df355);
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
B4df358:L4df358:{c.instructions+=3;NFSU2_TR(0x4df358);
__builtin_memmove((R+0),(R+24),4);
}
B4df35a:{NFSU2_TR(0x4df35a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df35b:{NFSU2_TR(0x4df35b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df360:L4df360:{c.instructions+=2;NFSU2_TR(0x4df360);
u8 U[4];
w4(U+0,u32(0x797510ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4df366:{NFSU2_TR(0x4df366);
TAIL_STATIC(0x4defb0u,4de);
}
B4df370:L4df370:{c.instructions+=3;NFSU2_TR(0x4df370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df371:{NFSU2_TR(0x4df371);
__builtin_memmove((R+24),(R+4),4);
}
B4df373:{NFSU2_TR(0x4df373);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df378ull));
{goto L4df390;}
}
B4df378:L4df378:{c.instructions+=2;NFSU2_TR(0x4df378);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df37d:{NFSU2_TR(0x4df37d);
if(r1(R+518)){{goto L4df388;}}
}
B4df37f:L4df37f:{c.instructions+=2;NFSU2_TR(0x4df37f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df380:{NFSU2_TR(0x4df380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df385ull));
TAIL_STATIC(0x575630u,575);
}
B4df385:L4df385:{c.instructions+=1;NFSU2_TR(0x4df385);
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
B4df388:L4df388:{c.instructions+=3;NFSU2_TR(0x4df388);
__builtin_memmove((R+0),(R+24),4);
}
B4df38a:{NFSU2_TR(0x4df38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df38b:{NFSU2_TR(0x4df38b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df390:L4df390:{c.instructions+=2;NFSU2_TR(0x4df390);
u8 U[4];
w4(U+0,u32(0x79752cull));
s4(u32(r4(R+4)),r4(U+0));
}
B4df396:{NFSU2_TR(0x4df396);
TAIL_STATIC(0x4defb0u,4de);
}
B4df3a0:L4df3a0:{c.instructions+=16;NFSU2_TR(0x4df3a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3a1:{NFSU2_TR(0x4df3a1);
__builtin_memmove((R+20),(R+16),4);
}
B4df3a3:{NFSU2_TR(0x4df3a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4df3a6:{NFSU2_TR(0x4df3a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3a8:{NFSU2_TR(0x4df3a8);
u8 U[4];
w4(U+0,u32(0x7758d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3ad:{NFSU2_TR(0x4df3ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df3b3:{NFSU2_TR(0x4df3b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3b4:{NFSU2_TR(0x4df3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df3bb:{NFSU2_TR(0x4df3bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4df3c1:{NFSU2_TR(0x4df3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df3c4:{NFSU2_TR(0x4df3c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3c5:{NFSU2_TR(0x4df3c5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3c6:{NFSU2_TR(0x4df3c6);
__builtin_memmove((R+24),(R+4),4);
}
B4df3c8:{NFSU2_TR(0x4df3c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3c9:{NFSU2_TR(0x4df3c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df3cd:{NFSU2_TR(0x4df3cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df3d2ull));
TAIL_STATIC(0x552330u,552);
}
B4df3d2:L4df3d2:{c.instructions+=4;NFSU2_TR(0x4df3d2);
__builtin_memmove((R+4),(R+24),4);
}
B4df3d4:{NFSU2_TR(0x4df3d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df3df:{NFSU2_TR(0x4df3df);
u8 U[4];
w4(U+0,u32(0x797548ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4df3e5:{NFSU2_TR(0x4df3e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df3eaull));
TAIL_STATIC(0x4af820u,4af);
}
B4df3ea:L4df3ea:{c.instructions+=2;NFSU2_TR(0x4df3ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df3ee:{NFSU2_TR(0x4df3ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df3f3ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4df3f3:L4df3f3:{c.instructions+=7;NFSU2_TR(0x4df3f3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3f5:{NFSU2_TR(0x4df3f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3f7:{NFSU2_TR(0x4df3f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3f9:{NFSU2_TR(0x4df3f9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df3fb:{NFSU2_TR(0x4df3fb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df3ff:{NFSU2_TR(0x4df3ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df407:{NFSU2_TR(0x4df407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df40cull));
TAIL_STATIC(0x610270u,610);
}
B4df40c:L4df40c:{c.instructions+=7;NFSU2_TR(0x4df40c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df40e:{NFSU2_TR(0x4df40e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df412:{NFSU2_TR(0x4df412);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df413:{NFSU2_TR(0x4df413);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df415:{NFSU2_TR(0x4df415);
w4(R+4,u32(0x83a9d0ull));
}
B4df41a:{NFSU2_TR(0x4df41a);
u8 U[5];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df422:{NFSU2_TR(0x4df422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df427ull));
TAIL_STATIC(0x515d00u,515);
}
B4df427:L4df427:{c.instructions+=2;NFSU2_TR(0x4df427);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df42c:{NFSU2_TR(0x4df42c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df431ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df431:L4df431:{c.instructions+=3;NFSU2_TR(0x4df431);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df434:{NFSU2_TR(0x4df434);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df436:{NFSU2_TR(0x4df436);
if(r1(R+518)){{goto L4df449;}}
}
B4df438:L4df438:{c.instructions+=2;NFSU2_TR(0x4df438);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df43d:{NFSU2_TR(0x4df43d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df442ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df442:L4df442:{c.instructions+=3;NFSU2_TR(0x4df442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df445:{NFSU2_TR(0x4df445);
__builtin_memmove((R+28),(R+0),4);
}
B4df447:{NFSU2_TR(0x4df447);
{goto L4df472;}
}
B4df449:L4df449:{c.instructions+=2;NFSU2_TR(0x4df449);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df44e:{NFSU2_TR(0x4df44e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df453ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df453:L4df453:{c.instructions+=3;NFSU2_TR(0x4df453);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df456:{NFSU2_TR(0x4df456);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df458:{NFSU2_TR(0x4df458);
if(r1(R+518)){{goto L4df470;}}
}
B4df45a:L4df45a:{c.instructions+=2;NFSU2_TR(0x4df45a);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df45f:{NFSU2_TR(0x4df45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df464ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df464:L4df464:{c.instructions+=3;NFSU2_TR(0x4df464);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df467:{NFSU2_TR(0x4df467);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df469:{NFSU2_TR(0x4df469);
if(r1(R+518)){{goto L4df470;}}
}
B4df46b:L4df46b:{c.instructions+=2;NFSU2_TR(0x4df46b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4df46e:{NFSU2_TR(0x4df46e);
{goto L4df472;}
}
B4df470:L4df470:{c.instructions+=1;NFSU2_TR(0x4df470);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4df472:L4df472:{c.instructions+=4;NFSU2_TR(0x4df472);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4df476:{NFSU2_TR(0x4df476);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df477:{NFSU2_TR(0x4df477);
w4(R+4,u32(0x8371b0ull));
}
B4df47c:{NFSU2_TR(0x4df47c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df481ull));
TAIL_STATIC(0x413440u,413);
}
B4df481:L4df481:{c.instructions+=3;NFSU2_TR(0x4df481);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df483:{NFSU2_TR(0x4df483);
s4(0x83623c,u32(0x2ull));
}
B4df48d:{NFSU2_TR(0x4df48d);
if(r1(R+518)){{goto L4df49d;}}
}
B4df48f:L4df48f:{c.instructions+=4;NFSU2_TR(0x4df48f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df491:{NFSU2_TR(0x4df491);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df496:{NFSU2_TR(0x4df496);
__builtin_memmove((R+4),(R+28),4);
}
B4df498:{NFSU2_TR(0x4df498);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df49dull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4df49d:L4df49d:{c.instructions+=2;NFSU2_TR(0x4df49d);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4a2:{NFSU2_TR(0x4df4a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4a7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df4a7:L4df4a7:{c.instructions+=3;NFSU2_TR(0x4df4a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df4aa:{NFSU2_TR(0x4df4aa);
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
B4df4ac:{NFSU2_TR(0x4df4ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df4c3;}}
}
B4df4ae:L4df4ae:{c.instructions+=6;NFSU2_TR(0x4df4ae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4b0:{NFSU2_TR(0x4df4b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4b2:{NFSU2_TR(0x4df4b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4b4:{NFSU2_TR(0x4df4b4);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4b9:{NFSU2_TR(0x4df4b9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4bb:{NFSU2_TR(0x4df4bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4c0ull));
TAIL_STATIC(0x555f50u,555);
}
B4df4c0:L4df4c0:{c.instructions+=1;NFSU2_TR(0x4df4c0);
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
B4df4c3:L4df4c3:{c.instructions+=1;NFSU2_TR(0x4df4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4c8ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4df4c8:L4df4c8:{c.instructions+=2;NFSU2_TR(0x4df4c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4c9:{NFSU2_TR(0x4df4c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4ceull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df4ce:L4df4ce:{c.instructions+=3;NFSU2_TR(0x4df4ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df4d1:{NFSU2_TR(0x4df4d1);
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
B4df4d3:{NFSU2_TR(0x4df4d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df4ee;}}
}
B4df4d5:L4df4d5:{c.instructions+=5;NFSU2_TR(0x4df4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df4d8:{NFSU2_TR(0x4df4d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4da:{NFSU2_TR(0x4df4da);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4df:{NFSU2_TR(0x4df4df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4e0:{NFSU2_TR(0x4df4e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4e5ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4df4e5:L4df4e5:{c.instructions+=2;NFSU2_TR(0x4df4e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df4e6:{NFSU2_TR(0x4df4e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4ebull));
TAIL_STATIC(0x555f10u,555);
}
B4df4eb:L4df4eb:{c.instructions+=1;NFSU2_TR(0x4df4eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4df4ee:L4df4ee:{c.instructions+=2;NFSU2_TR(0x4df4ee);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4df4f4:{NFSU2_TR(0x4df4f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df4f9ull));
TAIL_STATIC(0x54e6a0u,54e);
}
B4df4f9:L4df4f9:{c.instructions+=6;NFSU2_TR(0x4df4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df4fc:{NFSU2_TR(0x4df4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df4ff:{NFSU2_TR(0x4df4ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df500:{NFSU2_TR(0x4df500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df501:{NFSU2_TR(0x4df501);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B4df507:{NFSU2_TR(0x4df507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df50cull));
TAIL_STATIC(0x54e6e0u,54e);
}
B4df50c:L4df50c:{c.instructions+=3;NFSU2_TR(0x4df50c);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df513:{NFSU2_TR(0x4df513);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df51b:{NFSU2_TR(0x4df51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df520ull));
TAIL_STATIC(0x4022c0u,402);
}
B4df520:L4df520:{c.instructions+=8;NFSU2_TR(0x4df520);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df527:{NFSU2_TR(0x4df527);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4df528:{NFSU2_TR(0x4df528);
__builtin_memmove((R+0),(R+24),4);
}
B4df52a:{NFSU2_TR(0x4df52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df531:{NFSU2_TR(0x4df531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df532:{NFSU2_TR(0x4df532);
__builtin_memmove((R+16),(R+20),4);
}
B4df534:{NFSU2_TR(0x4df534);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4df535:{NFSU2_TR(0x4df535);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df540:L4df540:{c.instructions+=3;NFSU2_TR(0x4df540);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df541:{NFSU2_TR(0x4df541);
__builtin_memmove((R+24),(R+4),4);
}
B4df543:{NFSU2_TR(0x4df543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df548ull));
{goto L4df560;}
}
B4df548:L4df548:{c.instructions+=2;NFSU2_TR(0x4df548);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df54d:{NFSU2_TR(0x4df54d);
if(r1(R+518)){{goto L4df558;}}
}
B4df54f:L4df54f:{c.instructions+=2;NFSU2_TR(0x4df54f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df550:{NFSU2_TR(0x4df550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df555ull));
TAIL_STATIC(0x575630u,575);
}
B4df555:L4df555:{c.instructions+=1;NFSU2_TR(0x4df555);
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
B4df558:L4df558:{c.instructions+=3;NFSU2_TR(0x4df558);
__builtin_memmove((R+0),(R+24),4);
}
B4df55a:{NFSU2_TR(0x4df55a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df55b:{NFSU2_TR(0x4df55b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df560:L4df560:{c.instructions+=2;NFSU2_TR(0x4df560);
u8 U[4];
w4(U+0,u32(0x797548ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4df566:{NFSU2_TR(0x4df566);
TAIL_STATIC(0x4defb0u,4de);
}
B4df570:L4df570:{c.instructions+=16;NFSU2_TR(0x4df570);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df571:{NFSU2_TR(0x4df571);
__builtin_memmove((R+20),(R+16),4);
}
B4df573:{NFSU2_TR(0x4df573);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4df576:{NFSU2_TR(0x4df576);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df578:{NFSU2_TR(0x4df578);
u8 U[4];
w4(U+0,u32(0x7758d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df57d:{NFSU2_TR(0x4df57d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df583:{NFSU2_TR(0x4df583);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df584:{NFSU2_TR(0x4df584);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df58b:{NFSU2_TR(0x4df58b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4df591:{NFSU2_TR(0x4df591);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df594:{NFSU2_TR(0x4df594);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df595:{NFSU2_TR(0x4df595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df596:{NFSU2_TR(0x4df596);
__builtin_memmove((R+28),(R+4),4);
}
B4df598:{NFSU2_TR(0x4df598);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df599:{NFSU2_TR(0x4df599);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df59d:{NFSU2_TR(0x4df59d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df5a2ull));
TAIL_STATIC(0x552330u,552);
}
B4df5a2:L4df5a2:{c.instructions+=4;NFSU2_TR(0x4df5a2);
__builtin_memmove((R+4),(R+28),4);
}
B4df5a4:{NFSU2_TR(0x4df5a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df5af:{NFSU2_TR(0x4df5af);
u8 U[4];
w4(U+0,u32(0x797564ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4df5b5:{NFSU2_TR(0x4df5b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df5baull));
TAIL_STATIC(0x4afb70u,4af);
}
B4df5ba:L4df5ba:{c.instructions+=2;NFSU2_TR(0x4df5ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df5be:{NFSU2_TR(0x4df5be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df5c3ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4df5c3:L4df5c3:{c.instructions+=7;NFSU2_TR(0x4df5c3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5c5:{NFSU2_TR(0x4df5c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5c7:{NFSU2_TR(0x4df5c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5c9:{NFSU2_TR(0x4df5c9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5cb:{NFSU2_TR(0x4df5cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df5cf:{NFSU2_TR(0x4df5cf);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df5d7:{NFSU2_TR(0x4df5d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df5dcull));
TAIL_STATIC(0x610270u,610);
}
B4df5dc:L4df5dc:{c.instructions+=7;NFSU2_TR(0x4df5dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5de:{NFSU2_TR(0x4df5de);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df5e2:{NFSU2_TR(0x4df5e2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5e3:{NFSU2_TR(0x4df5e3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5e5:{NFSU2_TR(0x4df5e5);
w4(R+4,u32(0x83a9d0ull));
}
B4df5ea:{NFSU2_TR(0x4df5ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df5f2:{NFSU2_TR(0x4df5f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df5f7ull));
TAIL_STATIC(0x515d00u,515);
}
B4df5f7:L4df5f7:{c.instructions+=2;NFSU2_TR(0x4df5f7);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df5fc:{NFSU2_TR(0x4df5fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df601ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df601:L4df601:{c.instructions+=3;NFSU2_TR(0x4df601);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df604:{NFSU2_TR(0x4df604);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df606:{NFSU2_TR(0x4df606);
if(r1(R+518)){{goto L4df619;}}
}
B4df608:L4df608:{c.instructions+=2;NFSU2_TR(0x4df608);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df60d:{NFSU2_TR(0x4df60d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df612ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df612:L4df612:{c.instructions+=3;NFSU2_TR(0x4df612);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df615:{NFSU2_TR(0x4df615);
__builtin_memmove((R+24),(R+0),4);
}
B4df617:{NFSU2_TR(0x4df617);
{goto L4df642;}
}
B4df619:L4df619:{c.instructions+=2;NFSU2_TR(0x4df619);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df61e:{NFSU2_TR(0x4df61e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df623ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df623:L4df623:{c.instructions+=3;NFSU2_TR(0x4df623);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df626:{NFSU2_TR(0x4df626);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df628:{NFSU2_TR(0x4df628);
if(r1(R+518)){{goto L4df640;}}
}
B4df62a:L4df62a:{c.instructions+=2;NFSU2_TR(0x4df62a);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df62f:{NFSU2_TR(0x4df62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df634ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df634:L4df634:{c.instructions+=3;NFSU2_TR(0x4df634);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df637:{NFSU2_TR(0x4df637);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df639:{NFSU2_TR(0x4df639);
if(r1(R+518)){{goto L4df640;}}
}
B4df63b:L4df63b:{c.instructions+=2;NFSU2_TR(0x4df63b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4df63e:{NFSU2_TR(0x4df63e);
{goto L4df642;}
}
B4df640:L4df640:{c.instructions+=1;NFSU2_TR(0x4df640);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4df642:L4df642:{c.instructions+=4;NFSU2_TR(0x4df642);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4df646:{NFSU2_TR(0x4df646);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df647:{NFSU2_TR(0x4df647);
w4(R+4,u32(0x8371b0ull));
}
B4df64c:{NFSU2_TR(0x4df64c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df651ull));
TAIL_STATIC(0x413440u,413);
}
B4df651:L4df651:{c.instructions+=3;NFSU2_TR(0x4df651);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df653:{NFSU2_TR(0x4df653);
s4(0x83623c,u32(0x2ull));
}
B4df65d:{NFSU2_TR(0x4df65d);
if(r1(R+518)){{goto L4df66d;}}
}
B4df65f:L4df65f:{c.instructions+=4;NFSU2_TR(0x4df65f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df661:{NFSU2_TR(0x4df661);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df666:{NFSU2_TR(0x4df666);
__builtin_memmove((R+4),(R+24),4);
}
B4df668:{NFSU2_TR(0x4df668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df66dull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4df66d:L4df66d:{c.instructions+=2;NFSU2_TR(0x4df66d);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df672:{NFSU2_TR(0x4df672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df677ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df677:L4df677:{c.instructions+=3;NFSU2_TR(0x4df677);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df67a:{NFSU2_TR(0x4df67a);
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
B4df67c:{NFSU2_TR(0x4df67c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df693;}}
}
B4df67e:L4df67e:{c.instructions+=6;NFSU2_TR(0x4df67e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df680:{NFSU2_TR(0x4df680);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df682:{NFSU2_TR(0x4df682);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df684:{NFSU2_TR(0x4df684);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df689:{NFSU2_TR(0x4df689);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df68b:{NFSU2_TR(0x4df68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df690ull));
TAIL_STATIC(0x555f50u,555);
}
B4df690:L4df690:{c.instructions+=1;NFSU2_TR(0x4df690);
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
B4df693:L4df693:{c.instructions+=3;NFSU2_TR(0x4df693);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df69a:{NFSU2_TR(0x4df69a);
u8 U[5];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df6a2:{NFSU2_TR(0x4df6a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df6a7ull));
TAIL_STATIC(0x4022c0u,402);
}
B4df6a7:L4df6a7:{c.instructions+=8;NFSU2_TR(0x4df6a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df6ae:{NFSU2_TR(0x4df6ae);
__builtin_memmove((R+0),(R+28),4);
}
B4df6b0:{NFSU2_TR(0x4df6b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4df6b1:{NFSU2_TR(0x4df6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df6b8:{NFSU2_TR(0x4df6b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df6b9:{NFSU2_TR(0x4df6b9);
__builtin_memmove((R+16),(R+20),4);
}
B4df6bb:{NFSU2_TR(0x4df6bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4df6bc:{NFSU2_TR(0x4df6bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df6c0:L4df6c0:{c.instructions+=3;NFSU2_TR(0x4df6c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df6c1:{NFSU2_TR(0x4df6c1);
__builtin_memmove((R+24),(R+4),4);
}
B4df6c3:{NFSU2_TR(0x4df6c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df6c8ull));
{goto L4df6e0;}
}
B4df6c8:L4df6c8:{c.instructions+=2;NFSU2_TR(0x4df6c8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df6cd:{NFSU2_TR(0x4df6cd);
if(r1(R+518)){{goto L4df6d8;}}
}
B4df6cf:L4df6cf:{c.instructions+=2;NFSU2_TR(0x4df6cf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df6d0:{NFSU2_TR(0x4df6d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df6d5ull));
TAIL_STATIC(0x575630u,575);
}
B4df6d5:L4df6d5:{c.instructions+=1;NFSU2_TR(0x4df6d5);
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
B4df6d8:L4df6d8:{c.instructions+=3;NFSU2_TR(0x4df6d8);
__builtin_memmove((R+0),(R+24),4);
}
B4df6da:{NFSU2_TR(0x4df6da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df6db:{NFSU2_TR(0x4df6db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df6e0:L4df6e0:{c.instructions+=2;NFSU2_TR(0x4df6e0);
u8 U[4];
w4(U+0,u32(0x797564ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4df6e6:{NFSU2_TR(0x4df6e6);
TAIL_STATIC(0x4defb0u,4de);
}
B4df6f0:L4df6f0:{c.instructions+=17;NFSU2_TR(0x4df6f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df6f1:{NFSU2_TR(0x4df6f1);
__builtin_memmove((R+20),(R+16),4);
}
B4df6f3:{NFSU2_TR(0x4df6f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4df6f6:{NFSU2_TR(0x4df6f6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df6f8:{NFSU2_TR(0x4df6f8);
u8 U[4];
w4(U+0,u32(0x775912ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df6fd:{NFSU2_TR(0x4df6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df703:{NFSU2_TR(0x4df703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df704:{NFSU2_TR(0x4df704);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df70b:{NFSU2_TR(0x4df70b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x908ull))));
}
B4df711:{NFSU2_TR(0x4df711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df714:{NFSU2_TR(0x4df714);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df715:{NFSU2_TR(0x4df715);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df716:{NFSU2_TR(0x4df716);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df717:{NFSU2_TR(0x4df717);
__builtin_memmove((R+24),(R+4),4);
}
B4df719:{NFSU2_TR(0x4df719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df71a:{NFSU2_TR(0x4df71a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df71e:{NFSU2_TR(0x4df71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df723ull));
TAIL_STATIC(0x552330u,552);
}
B4df723:L4df723:{c.instructions+=5;NFSU2_TR(0x4df723);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4df729:{NFSU2_TR(0x4df729);
__builtin_memmove((R+4),(R+28),4);
}
B4df72b:{NFSU2_TR(0x4df72b);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df736:{NFSU2_TR(0x4df736);
u8 U[4];
w4(U+0,u32(0x7975acull));
s4(u32(r4(R+24)),r4(U+0));
}
B4df73c:{NFSU2_TR(0x4df73c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df741ull));
TAIL_STATIC(0x50db40u,50d);
}
B4df741:L4df741:{c.instructions+=10;NFSU2_TR(0x4df741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df744:{NFSU2_TR(0x4df744);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df746:{NFSU2_TR(0x4df746);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df748:{NFSU2_TR(0x4df748);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df74a:{NFSU2_TR(0x4df74a);
u8 U[4];
w4(U+0,u32(0x7975a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df74f:{NFSU2_TR(0x4df74f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4df755:{NFSU2_TR(0x4df755);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df756:{NFSU2_TR(0x4df756);
__builtin_memmove((R+4),(R+12),4);
}
B4df758:{NFSU2_TR(0x4df758);
u8 U[5];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df760:{NFSU2_TR(0x4df760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df765ull));
TAIL_STATIC(0x542ac0u,542);
}
B4df765:L4df765:{c.instructions+=3;NFSU2_TR(0x4df765);
__builtin_memmove((R+4),(R+24),4);
}
B4df767:{NFSU2_TR(0x4df767);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df771:{NFSU2_TR(0x4df771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df776ull));
TAIL_STATIC(0x4afd00u,4af);
}
B4df776:L4df776:{c.instructions+=7;NFSU2_TR(0x4df776);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df779:{NFSU2_TR(0x4df779);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4df77c:{NFSU2_TR(0x4df77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df77f:{NFSU2_TR(0x4df77f);
u8 U[4];
w4(U+0,u32(0x797598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df784:{NFSU2_TR(0x4df784);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df78a:{NFSU2_TR(0x4df78a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df78e:{NFSU2_TR(0x4df78e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df793ull));
TAIL_STATIC(0x505450u,505);
}
B4df793:L4df793:{c.instructions+=4;NFSU2_TR(0x4df793);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df797:{NFSU2_TR(0x4df797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df798:{NFSU2_TR(0x4df798);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df799:{NFSU2_TR(0x4df799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df79eull));
TAIL_STATIC(0x537a10u,537);
}
B4df79e:L4df79e:{c.instructions+=5;NFSU2_TR(0x4df79e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4df7a1:{NFSU2_TR(0x4df7a1);
u8 U[4];
w4(U+0,u32(0xc00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7a6:{NFSU2_TR(0x4df7a6);
__builtin_memmove((R+4),(R+28),4);
}
B4df7a8:{NFSU2_TR(0x4df7a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df7ac:{NFSU2_TR(0x4df7ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df7b1ull));
TAIL_STATIC(0x50db80u,50d);
}
B4df7b1:L4df7b1:{c.instructions+=4;NFSU2_TR(0x4df7b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4df7b5:{NFSU2_TR(0x4df7b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df7b8:{NFSU2_TR(0x4df7b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7b9:{NFSU2_TR(0x4df7b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df7beull));
TAIL_STATIC(0x51bd70u,51b);
}
B4df7be:L4df7be:{c.instructions+=10;NFSU2_TR(0x4df7be);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df7c2:{NFSU2_TR(0x4df7c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4df7c5:{NFSU2_TR(0x4df7c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df7c8:{NFSU2_TR(0x4df7c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7c9:{NFSU2_TR(0x4df7c9);
u8 U[4];
w4(U+0,u32(0x79758cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7ce:{NFSU2_TR(0x4df7ce);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7d0:{NFSU2_TR(0x4df7d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7d1:{NFSU2_TR(0x4df7d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7d2:{NFSU2_TR(0x4df7d2);
__builtin_memmove((R+4),(R+28),4);
}
B4df7d4:{NFSU2_TR(0x4df7d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df7d9ull));
TAIL_STATIC(0x50dbb0u,50d);
}
B4df7d9:L4df7d9:{c.instructions+=4;NFSU2_TR(0x4df7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4df7dc:{NFSU2_TR(0x4df7dc);
u8 U[4];
w4(U+0,u32(0x797580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7e1:{NFSU2_TR(0x4df7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df7e7:{NFSU2_TR(0x4df7e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df7ecull));
TAIL_STATIC(0x43db50u,43d);
}
B4df7ec:L4df7ec:{c.instructions+=3;NFSU2_TR(0x4df7ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7ed:{NFSU2_TR(0x4df7ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7ee:{NFSU2_TR(0x4df7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df7f3ull));
TAIL_STATIC(0x5379c0u,537);
}
B4df7f3:L4df7f3:{c.instructions+=2;NFSU2_TR(0x4df7f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df7f4:{NFSU2_TR(0x4df7f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df7f9ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4df7f9:L4df7f9:{c.instructions+=3;NFSU2_TR(0x4df7f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4df7fc:{NFSU2_TR(0x4df7fc);
u8 U[4];
w4(U+0,u32(0x78fc3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df801:{NFSU2_TR(0x4df801);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df806ull));
TAIL_STATIC(0x43db50u,43d);
}
B4df806:L4df806:{c.instructions+=3;NFSU2_TR(0x4df806);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df807:{NFSU2_TR(0x4df807);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df808:{NFSU2_TR(0x4df808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df80dull));
TAIL_STATIC(0x5379c0u,537);
}
B4df80d:L4df80d:{c.instructions+=2;NFSU2_TR(0x4df80d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df80e:{NFSU2_TR(0x4df80e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df813ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4df813:L4df813:{c.instructions+=3;NFSU2_TR(0x4df813);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4df816:{NFSU2_TR(0x4df816);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df81a:{NFSU2_TR(0x4df81a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df81full));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B4df81f:L4df81f:{c.instructions+=8;NFSU2_TR(0x4df81f);
w4(R+12,u32(0x2ull));
}
B4df824:{NFSU2_TR(0x4df824);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4df82b:{NFSU2_TR(0x4df82b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df82d:{NFSU2_TR(0x4df82d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df82f:{NFSU2_TR(0x4df82f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df831:{NFSU2_TR(0x4df831);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df833:{NFSU2_TR(0x4df833);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df837:{NFSU2_TR(0x4df837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df83cull));
TAIL_STATIC(0x610270u,610);
}
B4df83c:L4df83c:{c.instructions+=7;NFSU2_TR(0x4df83c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df83e:{NFSU2_TR(0x4df83e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4df842:{NFSU2_TR(0x4df842);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df843:{NFSU2_TR(0x4df843);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df845:{NFSU2_TR(0x4df845);
w4(R+4,u32(0x83a9d0ull));
}
B4df84a:{NFSU2_TR(0x4df84a);
u8 U[5];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df852:{NFSU2_TR(0x4df852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df857ull));
TAIL_STATIC(0x515d00u,515);
}
B4df857:L4df857:{c.instructions+=2;NFSU2_TR(0x4df857);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df85c:{NFSU2_TR(0x4df85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df861ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df861:L4df861:{c.instructions+=3;NFSU2_TR(0x4df861);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df864:{NFSU2_TR(0x4df864);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df866:{NFSU2_TR(0x4df866);
if(r1(R+518)){{goto L4df879;}}
}
B4df868:L4df868:{c.instructions+=2;NFSU2_TR(0x4df868);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df86d:{NFSU2_TR(0x4df86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df872ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df872:L4df872:{c.instructions+=3;NFSU2_TR(0x4df872);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df875:{NFSU2_TR(0x4df875);
__builtin_memmove((R+28),(R+0),4);
}
B4df877:{NFSU2_TR(0x4df877);
{goto L4df8a2;}
}
B4df879:L4df879:{c.instructions+=2;NFSU2_TR(0x4df879);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df87e:{NFSU2_TR(0x4df87e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df883ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df883:L4df883:{c.instructions+=3;NFSU2_TR(0x4df883);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df886:{NFSU2_TR(0x4df886);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4df888:{NFSU2_TR(0x4df888);
if(r1(R+518)){{goto L4df8a0;}}
}
B4df88a:L4df88a:{c.instructions+=2;NFSU2_TR(0x4df88a);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df88f:{NFSU2_TR(0x4df88f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df894ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4df894:L4df894:{c.instructions+=3;NFSU2_TR(0x4df894);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df897:{NFSU2_TR(0x4df897);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df899:{NFSU2_TR(0x4df899);
if(r1(R+518)){{goto L4df8a0;}}
}
B4df89b:L4df89b:{c.instructions+=2;NFSU2_TR(0x4df89b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4df89e:{NFSU2_TR(0x4df89e);
{goto L4df8a2;}
}
B4df8a0:L4df8a0:{c.instructions+=1;NFSU2_TR(0x4df8a0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4df8a2:L4df8a2:{c.instructions+=4;NFSU2_TR(0x4df8a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df8a6:{NFSU2_TR(0x4df8a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8a7:{NFSU2_TR(0x4df8a7);
w4(R+4,u32(0x8371b0ull));
}
B4df8ac:{NFSU2_TR(0x4df8ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df8b1ull));
TAIL_STATIC(0x413440u,413);
}
B4df8b1:L4df8b1:{c.instructions+=3;NFSU2_TR(0x4df8b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4df8b3:{NFSU2_TR(0x4df8b3);
__builtin_memmove(gp(0x83623c),(R+12),4);
}
B4df8b9:{NFSU2_TR(0x4df8b9);
if(r1(R+518)){{goto L4df8c8;}}
}
B4df8bb:L4df8bb:{c.instructions+=4;NFSU2_TR(0x4df8bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8bc:{NFSU2_TR(0x4df8bc);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8c1:{NFSU2_TR(0x4df8c1);
__builtin_memmove((R+4),(R+28),4);
}
B4df8c3:{NFSU2_TR(0x4df8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df8c8ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4df8c8:L4df8c8:{c.instructions+=2;NFSU2_TR(0x4df8c8);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8cd:{NFSU2_TR(0x4df8cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df8d2ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4df8d2:L4df8d2:{c.instructions+=3;NFSU2_TR(0x4df8d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4df8d5:{NFSU2_TR(0x4df8d5);
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
B4df8d7:{NFSU2_TR(0x4df8d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4df8ee;}}
}
B4df8d9:L4df8d9:{c.instructions+=6;NFSU2_TR(0x4df8d9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8db:{NFSU2_TR(0x4df8db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8dd:{NFSU2_TR(0x4df8dd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8df:{NFSU2_TR(0x4df8df);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8e4:{NFSU2_TR(0x4df8e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df8e6:{NFSU2_TR(0x4df8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df8ebull));
TAIL_STATIC(0x555f50u,555);
}
B4df8eb:L4df8eb:{c.instructions+=1;NFSU2_TR(0x4df8eb);
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
B4df8ee:L4df8ee:{c.instructions+=3;NFSU2_TR(0x4df8ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4df8f5:{NFSU2_TR(0x4df8f5);
u8 U[5];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4df8fd:{NFSU2_TR(0x4df8fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df902ull));
TAIL_STATIC(0x4022c0u,402);
}
B4df902:L4df902:{c.instructions+=9;NFSU2_TR(0x4df902);
u8 U[8];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df909:{NFSU2_TR(0x4df909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4df90a:{NFSU2_TR(0x4df90a);
__builtin_memmove((R+0),(R+24),4);
}
B4df90c:{NFSU2_TR(0x4df90c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df90d:{NFSU2_TR(0x4df90d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df914:{NFSU2_TR(0x4df914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4df915:{NFSU2_TR(0x4df915);
__builtin_memmove((R+16),(R+20),4);
}
B4df917:{NFSU2_TR(0x4df917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4df918:{NFSU2_TR(0x4df918);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df920:L4df920:{c.instructions+=3;NFSU2_TR(0x4df920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df921:{NFSU2_TR(0x4df921);
__builtin_memmove((R+24),(R+4),4);
}
B4df923:{NFSU2_TR(0x4df923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df928ull));
{goto L4df940;}
}
B4df928:L4df928:{c.instructions+=2;NFSU2_TR(0x4df928);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df92d:{NFSU2_TR(0x4df92d);
if(r1(R+518)){{goto L4df938;}}
}
B4df92f:L4df92f:{c.instructions+=2;NFSU2_TR(0x4df92f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df930:{NFSU2_TR(0x4df930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df935ull));
TAIL_STATIC(0x575630u,575);
}
B4df935:L4df935:{c.instructions+=1;NFSU2_TR(0x4df935);
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
B4df938:L4df938:{c.instructions+=3;NFSU2_TR(0x4df938);
__builtin_memmove((R+0),(R+24),4);
}
B4df93a:{NFSU2_TR(0x4df93a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df93b:{NFSU2_TR(0x4df93b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df940:L4df940:{c.instructions+=13;NFSU2_TR(0x4df940);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df942:{NFSU2_TR(0x4df942);
u8 U[4];
w4(U+0,u32(0x776178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df947:{NFSU2_TR(0x4df947);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df94d:{NFSU2_TR(0x4df94d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df94e:{NFSU2_TR(0x4df94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df955:{NFSU2_TR(0x4df955);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df956:{NFSU2_TR(0x4df956);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df957:{NFSU2_TR(0x4df957);
__builtin_memmove((R+24),(R+4),4);
}
B4df959:{NFSU2_TR(0x4df959);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df95d:{NFSU2_TR(0x4df95d);
u8 U[4];
w4(U+0,u32(0x7975acull));
s4(u32(r4(R+24)),r4(U+0));
}
B4df963:{NFSU2_TR(0x4df963);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4df969:{NFSU2_TR(0x4df969);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df971:{NFSU2_TR(0x4df971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df976ull));
TAIL_STATIC(0x50db70u,50d);
}
B4df976:L4df976:{c.instructions+=3;NFSU2_TR(0x4df976);
__builtin_memmove((R+4),(R+24),4);
}
B4df978:{NFSU2_TR(0x4df978);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4df980:{NFSU2_TR(0x4df980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df985ull));
TAIL_STATIC(0x4defb0u,4de);
}
B4df985:L4df985:{c.instructions+=5;NFSU2_TR(0x4df985);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4df989:{NFSU2_TR(0x4df989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df98a:{NFSU2_TR(0x4df98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df991:{NFSU2_TR(0x4df991);
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
B4df994:{NFSU2_TR(0x4df994);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df9a0:L4df9a0:{c.instructions+=3;NFSU2_TR(0x4df9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9a1:{NFSU2_TR(0x4df9a1);
__builtin_memmove((R+24),(R+4),4);
}
B4df9a3:{NFSU2_TR(0x4df9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df9a8ull));
TAIL_STATIC(0x4cbcb0u,4cb);
}
B4df9a8:L4df9a8:{c.instructions+=2;NFSU2_TR(0x4df9a8);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4df9ad:{NFSU2_TR(0x4df9ad);
if(r1(R+518)){{goto L4df9b8;}}
}
B4df9af:L4df9af:{c.instructions+=2;NFSU2_TR(0x4df9af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9b0:{NFSU2_TR(0x4df9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4df9b5ull));
TAIL_STATIC(0x575630u,575);
}
B4df9b5:L4df9b5:{c.instructions+=1;NFSU2_TR(0x4df9b5);
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
B4df9b8:L4df9b8:{c.instructions+=3;NFSU2_TR(0x4df9b8);
__builtin_memmove((R+0),(R+24),4);
}
B4df9ba:{NFSU2_TR(0x4df9ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4df9bb:{NFSU2_TR(0x4df9bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4df9c0:L4df9c0:{c.instructions+=16;NFSU2_TR(0x4df9c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9c1:{NFSU2_TR(0x4df9c1);
__builtin_memmove((R+20),(R+16),4);
}
B4df9c3:{NFSU2_TR(0x4df9c3);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9c5:{NFSU2_TR(0x4df9c5);
u8 U[4];
w4(U+0,u32(0x77593cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9ca:{NFSU2_TR(0x4df9ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df9d0:{NFSU2_TR(0x4df9d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9d1:{NFSU2_TR(0x4df9d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df9d8:{NFSU2_TR(0x4df9d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4df9db:{NFSU2_TR(0x4df9db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9dc:{NFSU2_TR(0x4df9dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9dd:{NFSU2_TR(0x4df9dd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4df9de:{NFSU2_TR(0x4df9de);
__builtin_memmove((R+28),(R+4),4);
}
B4df9e0:{NFSU2_TR(0x4df9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4df9e6:{NFSU2_TR(0x4df9e6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4df9e8:{NFSU2_TR(0x4df9e8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4df9ea:{NFSU2_TR(0x4df9ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4dfa01;}}
}
B4df9ec:L4df9ec:{c.instructions+=2;NFSU2_TR(0x4df9ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4df9ef:{NFSU2_TR(0x4df9ef);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4dfa01;}}
}
B4df9f1:L4df9f1:{c.instructions+=4;NFSU2_TR(0x4df9f1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4df9f7:{NFSU2_TR(0x4df9f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B4df9fc:{NFSU2_TR(0x4df9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4df9ff:{NFSU2_TR(0x4df9ff);
{goto L4dfa04;}
}
B4dfa01:L4dfa01:{c.instructions+=1;NFSU2_TR(0x4dfa01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfa04:L4dfa04:{c.instructions+=9;NFSU2_TR(0x4dfa04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dfa07:{NFSU2_TR(0x4dfa07);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dfa0a:{NFSU2_TR(0x4dfa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfa0d:{NFSU2_TR(0x4dfa0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfa10:{NFSU2_TR(0x4dfa10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dfa13:{NFSU2_TR(0x4dfa13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfa14:{NFSU2_TR(0x4dfa14);
w4(R+4,u32(0x85ad40ull));
}
B4dfa19:{NFSU2_TR(0x4dfa19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfa1c:{NFSU2_TR(0x4dfa1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfa21ull));
TAIL_STATIC(0x513c50u,513);
}
B4dfa21:L4dfa21:{c.instructions+=6;NFSU2_TR(0x4dfa21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfa24:{NFSU2_TR(0x4dfa24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfa27:{NFSU2_TR(0x4dfa27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfa28:{NFSU2_TR(0x4dfa28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfa29:{NFSU2_TR(0x4dfa29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfa2f:{NFSU2_TR(0x4dfa2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfa34ull));
TAIL_STATIC(0x5162d0u,516);
}
B4dfa34:L4dfa34:{c.instructions+=3;NFSU2_TR(0x4dfa34);
__builtin_memmove((R+24),(R+0),4);
}
B4dfa36:{NFSU2_TR(0x4dfa36);
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
B4dfa38:{NFSU2_TR(0x4dfa38);
if(r1(R+518)){{goto L4dfb49;}}
}
B4dfa3e:L4dfa3e:{c.instructions+=1;NFSU2_TR(0x4dfa3e);
__builtin_memmove((R+28),(R+28),4);
}
B4dfa40:L4dfa40:{c.instructions+=3;NFSU2_TR(0x4dfa40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dfa42:{NFSU2_TR(0x4dfa42);
__builtin_memmove((R+4),(R+24),4);
}
B4dfa44:{NFSU2_TR(0x4dfa44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfa47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dfa47:L4dfa47:{c.instructions+=5;NFSU2_TR(0x4dfa47);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4dfa4d:{NFSU2_TR(0x4dfa4d);
w4(R+0,u32(u32(r4(R+0))+u32(m4(0x8a1ccc))));
}
B4dfa53:{NFSU2_TR(0x4dfa53);
w4(R+4,u32(0x85ad40ull));
}
B4dfa58:{NFSU2_TR(0x4dfa58);
__builtin_memmove((R+12),(R+0),4);
}
B4dfa5a:{NFSU2_TR(0x4dfa5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfa5full));
TAIL_STATIC(0x513910u,513);
}
B4dfa5f:L4dfa5f:{c.instructions+=3;NFSU2_TR(0x4dfa5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfa61:{NFSU2_TR(0x4dfa61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfa64:{NFSU2_TR(0x4dfa64);
if(r1(R+518)){{goto L4dfb30;}}
}
B4dfa6a:L4dfa6a:{c.instructions+=5;NFSU2_TR(0x4dfa6a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dfa6c:{NFSU2_TR(0x4dfa6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xdaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4dfa72:{NFSU2_TR(0x4dfa72);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B4dfa74:{NFSU2_TR(0x4dfa74);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dfa76:{NFSU2_TR(0x4dfa76);
if(r1(R+518)){{goto L4dfb30;}}
}
B4dfa7c:L4dfa7c:{c.instructions+=3;NFSU2_TR(0x4dfa7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfa82:{NFSU2_TR(0x4dfa82);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfa83:{NFSU2_TR(0x4dfa83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfa88ull));
TAIL_STATIC(0x5022c0u,502);
}
B4dfa88:L4dfa88:{c.instructions+=3;NFSU2_TR(0x4dfa88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfa8b:{NFSU2_TR(0x4dfa8b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dfa8d:{NFSU2_TR(0x4dfa8d);
if(r1(R+518)){{goto L4dfb30;}}
}
B4dfa93:L4dfa93:{c.instructions+=2;NFSU2_TR(0x4dfa93);
__builtin_memmove((R+4),(R+12),4);
}
B4dfa95:{NFSU2_TR(0x4dfa95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfa9aull));
TAIL_STATIC(0x610180u,610);
}
B4dfa9a:L4dfa9a:{c.instructions+=2;NFSU2_TR(0x4dfa9a);
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
B4dfa9c:{NFSU2_TR(0x4dfa9c);
if(r1(R+518)){{goto L4dfb30;}}
}
B4dfaa2:L4dfaa2:{c.instructions+=7;NFSU2_TR(0x4dfaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfaa5:{NFSU2_TR(0x4dfaa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dfaa8:{NFSU2_TR(0x4dfaa8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfaa9:{NFSU2_TR(0x4dfaa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfaaa:{NFSU2_TR(0x4dfaaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfaab:{NFSU2_TR(0x4dfaab);
__builtin_memmove((R+4),(R+28),4);
}
B4dfaad:{NFSU2_TR(0x4dfaad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfab2ull));
TAIL_STATIC(0x4aff40u,4af);
}
B4dfab2:L4dfab2:{c.instructions+=2;NFSU2_TR(0x4dfab2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dfab4:{NFSU2_TR(0x4dfab4);
if(r1(R+518)){{goto L4dfb30;}}
}
B4dfab6:L4dfab6:{c.instructions+=2;NFSU2_TR(0x4dfab6);
u8 U[4];
w4(U+0,u32(0x930ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfabb:{NFSU2_TR(0x4dfabb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfac0ull));
TAIL_STATIC(0x575620u,575);
}
B4dfac0:L4dfac0:{c.instructions+=5;NFSU2_TR(0x4dfac0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfac3:{NFSU2_TR(0x4dfac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfac6:{NFSU2_TR(0x4dfac6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfac8:{NFSU2_TR(0x4dfac8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4dfacc:{NFSU2_TR(0x4dfacc);
if(r1(R+518)){{goto L4dfaf1;}}
}
B4dface:L4dface:{c.instructions+=12;NFSU2_TR(0x4dface);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfad1:{NFSU2_TR(0x4dfad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfad4:{NFSU2_TR(0x4dfad4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfad6:{NFSU2_TR(0x4dfad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfad9:{NFSU2_TR(0x4dfad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfadf:{NFSU2_TR(0x4dfadf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfae0:{NFSU2_TR(0x4dfae0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfae1:{NFSU2_TR(0x4dfae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfae4:{NFSU2_TR(0x4dfae4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfae5:{NFSU2_TR(0x4dfae5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfae6:{NFSU2_TR(0x4dfae6);
__builtin_memmove((R+4),(R+0),4);
}
B4dfae8:{NFSU2_TR(0x4dfae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfaedull));
TAIL_STATIC(0x511db0u,511);
}
B4dfaed:L4dfaed:{c.instructions+=2;NFSU2_TR(0x4dfaed);
__builtin_memmove((R+12),(R+0),4);
}
B4dfaef:{NFSU2_TR(0x4dfaef);
{goto L4dfaf3;}
}
B4dfaf1:L4dfaf1:{c.instructions+=1;NFSU2_TR(0x4dfaf1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dfaf3:L4dfaf3:{c.instructions+=3;NFSU2_TR(0x4dfaf3);
__builtin_memmove((R+4),(R+12),4);
}
B4dfaf5:{NFSU2_TR(0x4dfaf5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4dfaf9:{NFSU2_TR(0x4dfaf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfafeull));
TAIL_STATIC(0x511e00u,511);
}
B4dfafe:L4dfafe:{c.instructions+=7;NFSU2_TR(0x4dfafe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfb04:{NFSU2_TR(0x4dfb04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dfb06:{NFSU2_TR(0x4dfb06);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb08:{NFSU2_TR(0x4dfb08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb09:{NFSU2_TR(0x4dfb09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb0a:{NFSU2_TR(0x4dfb0a);
__builtin_memmove((R+4),(R+24),4);
}
B4dfb0c:{NFSU2_TR(0x4dfb0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb0full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dfb0f:L4dfb0f:{c.instructions+=2;NFSU2_TR(0x4dfb0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfb11:{NFSU2_TR(0x4dfb11);
if(r1(R+518)){{goto L4dfb18;}}
}
B4dfb13:L4dfb13:{c.instructions+=2;NFSU2_TR(0x4dfb13);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4dfb16:{NFSU2_TR(0x4dfb16);
{goto L4dfb1a;}
}
B4dfb18:L4dfb18:{c.instructions+=1;NFSU2_TR(0x4dfb18);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4dfb1a:L4dfb1a:{c.instructions+=7;NFSU2_TR(0x4dfb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfb1d:{NFSU2_TR(0x4dfb1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dfb20:{NFSU2_TR(0x4dfb20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4dfb22:{NFSU2_TR(0x4dfb22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfb25:{NFSU2_TR(0x4dfb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfb28:{NFSU2_TR(0x4dfb28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4dfb2a:{NFSU2_TR(0x4dfb2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4dfb30:L4dfb30:{c.instructions+=5;NFSU2_TR(0x4dfb30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfb33:{NFSU2_TR(0x4dfb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfb36:{NFSU2_TR(0x4dfb36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb37:{NFSU2_TR(0x4dfb37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb38:{NFSU2_TR(0x4dfb38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb3dull));
TAIL_STATIC(0x5162d0u,516);
}
B4dfb3d:L4dfb3d:{c.instructions+=3;NFSU2_TR(0x4dfb3d);
__builtin_memmove((R+24),(R+0),4);
}
B4dfb3f:{NFSU2_TR(0x4dfb3f);
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
B4dfb41:{NFSU2_TR(0x4dfb41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dfa40u);}goto L4dfa40;}}
}
B4dfb47:L4dfb47:{c.instructions+=1;NFSU2_TR(0x4dfb47);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4dfb49:L4dfb49:{c.instructions+=4;NFSU2_TR(0x4dfb49);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfb4c:{NFSU2_TR(0x4dfb4c);
u8 U[4];
w4(U+0,u32(0x40cb20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb51:{NFSU2_TR(0x4dfb51);
__builtin_memmove((R+4),(R+24),4);
}
B4dfb53:{NFSU2_TR(0x4dfb53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb58ull));
TAIL_STATIC(0x43e650u,43e);
}
B4dfb58:L4dfb58:{c.instructions+=3;NFSU2_TR(0x4dfb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4dfb5a:{NFSU2_TR(0x4dfb5a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dfb5c:{NFSU2_TR(0x4dfb5c);
if(r1(R+518)){{goto L4dfb63;}}
}
B4dfb5e:L4dfb5e:{c.instructions+=2;NFSU2_TR(0x4dfb5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dfb61:{NFSU2_TR(0x4dfb61);
{goto L4dfb65;}
}
B4dfb63:L4dfb63:{c.instructions+=1;NFSU2_TR(0x4dfb63);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4dfb65:L4dfb65:{c.instructions+=2;NFSU2_TR(0x4dfb65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfb68:{NFSU2_TR(0x4dfb68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb6dull));
TAIL_STATIC(0x511e00u,511);
}
B4dfb6d:L4dfb6d:{c.instructions+=3;NFSU2_TR(0x4dfb6d);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb72:{NFSU2_TR(0x4dfb72);
__builtin_memmove((R+28),(R+0),4);
}
B4dfb74:{NFSU2_TR(0x4dfb74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb79ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4dfb79:L4dfb79:{c.instructions+=3;NFSU2_TR(0x4dfb79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfb7c:{NFSU2_TR(0x4dfb7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dfb7e:{NFSU2_TR(0x4dfb7e);
if(r1(R+518)){{goto L4dfb91;}}
}
B4dfb80:L4dfb80:{c.instructions+=2;NFSU2_TR(0x4dfb80);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb85:{NFSU2_TR(0x4dfb85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb8aull));
TAIL_STATIC(0x51bd10u,51b);
}
B4dfb8a:L4dfb8a:{c.instructions+=3;NFSU2_TR(0x4dfb8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfb8d:{NFSU2_TR(0x4dfb8d);
__builtin_memmove((R+24),(R+0),4);
}
B4dfb8f:{NFSU2_TR(0x4dfb8f);
{goto L4dfbba;}
}
B4dfb91:L4dfb91:{c.instructions+=2;NFSU2_TR(0x4dfb91);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfb96:{NFSU2_TR(0x4dfb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfb9bull));
TAIL_STATIC(0x52cf60u,52c);
}
B4dfb9b:L4dfb9b:{c.instructions+=3;NFSU2_TR(0x4dfb9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfb9e:{NFSU2_TR(0x4dfb9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4dfba0:{NFSU2_TR(0x4dfba0);
if(r1(R+518)){{goto L4dfbb8;}}
}
B4dfba2:L4dfba2:{c.instructions+=2;NFSU2_TR(0x4dfba2);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfba7:{NFSU2_TR(0x4dfba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfbacull));
TAIL_STATIC(0x51bd10u,51b);
}
B4dfbac:L4dfbac:{c.instructions+=3;NFSU2_TR(0x4dfbac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfbaf:{NFSU2_TR(0x4dfbaf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dfbb1:{NFSU2_TR(0x4dfbb1);
if(r1(R+518)){{goto L4dfbb8;}}
}
B4dfbb3:L4dfbb3:{c.instructions+=2;NFSU2_TR(0x4dfbb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4dfbb6:{NFSU2_TR(0x4dfbb6);
{goto L4dfbba;}
}
B4dfbb8:L4dfbb8:{c.instructions+=1;NFSU2_TR(0x4dfbb8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4dfbba:L4dfbba:{c.instructions+=3;NFSU2_TR(0x4dfbba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfbbb:{NFSU2_TR(0x4dfbbb);
w4(R+4,u32(0x8371b0ull));
}
B4dfbc0:{NFSU2_TR(0x4dfbc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfbc5ull));
TAIL_STATIC(0x413440u,413);
}
B4dfbc5:L4dfbc5:{c.instructions+=3;NFSU2_TR(0x4dfbc5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4dfbc7:{NFSU2_TR(0x4dfbc7);
s4(0x83623c,u32(0x1ull));
}
B4dfbd1:{NFSU2_TR(0x4dfbd1);
if(r1(R+518)){{goto L4dfbe1;}}
}
B4dfbd3:L4dfbd3:{c.instructions+=4;NFSU2_TR(0x4dfbd3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfbd5:{NFSU2_TR(0x4dfbd5);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfbda:{NFSU2_TR(0x4dfbda);
__builtin_memmove((R+4),(R+24),4);
}
B4dfbdc:{NFSU2_TR(0x4dfbdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfbe1ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4dfbe1:L4dfbe1:{c.instructions+=8;NFSU2_TR(0x4dfbe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfbe4:{NFSU2_TR(0x4dfbe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfbe5:{NFSU2_TR(0x4dfbe5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dfbe8:{NFSU2_TR(0x4dfbe8);
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
B4dfbea:{NFSU2_TR(0x4dfbea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfbeb:{NFSU2_TR(0x4dfbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dfbf2:{NFSU2_TR(0x4dfbf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4dfbf3:{NFSU2_TR(0x4dfbf3);
if(r1(R+518)){{goto L4dfc14;}}
}
B4dfbf5:L4dfbf5:{c.instructions+=7;NFSU2_TR(0x4dfbf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4dfbf7:{NFSU2_TR(0x4dfbf7);
__builtin_memmove((R+8),(R+0),4);
}
B4dfbf9:{NFSU2_TR(0x4dfbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfbfc:{NFSU2_TR(0x4dfbfc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4dfbfe:{NFSU2_TR(0x4dfbfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfbff:{NFSU2_TR(0x4dfbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfc02:{NFSU2_TR(0x4dfc02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfc07ull));
TAIL_STATIC(0x575630u,575);
}
B4dfc07:L4dfc07:{c.instructions+=5;NFSU2_TR(0x4dfc07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfc0a:{NFSU2_TR(0x4dfc0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4dfc0d:{NFSU2_TR(0x4dfc0d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfc10:{NFSU2_TR(0x4dfc10);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B4dfc12:{NFSU2_TR(0x4dfc12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dfbf5u);}goto L4dfbf5;}}
}
B4dfc14:L4dfc14:{c.instructions+=5;NFSU2_TR(0x4dfc14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfc17:{NFSU2_TR(0x4dfc17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dfc1e:{NFSU2_TR(0x4dfc1e);
__builtin_memmove((R+16),(R+20),4);
}
B4dfc20:{NFSU2_TR(0x4dfc20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfc21:{NFSU2_TR(0x4dfc21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfc30:L4dfc30:{c.instructions+=3;NFSU2_TR(0x4dfc30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc31:{NFSU2_TR(0x4dfc31);
__builtin_memmove((R+24),(R+4),4);
}
B4dfc33:{NFSU2_TR(0x4dfc33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfc38ull));
TAIL_STATIC(0x4cbd20u,4cb);
}
B4dfc38:L4dfc38:{c.instructions+=2;NFSU2_TR(0x4dfc38);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4dfc3d:{NFSU2_TR(0x4dfc3d);
if(r1(R+518)){{goto L4dfc48;}}
}
B4dfc3f:L4dfc3f:{c.instructions+=2;NFSU2_TR(0x4dfc3f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc40:{NFSU2_TR(0x4dfc40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfc45ull));
TAIL_STATIC(0x575630u,575);
}
B4dfc45:L4dfc45:{c.instructions+=1;NFSU2_TR(0x4dfc45);
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
B4dfc48:L4dfc48:{c.instructions+=3;NFSU2_TR(0x4dfc48);
__builtin_memmove((R+0),(R+24),4);
}
B4dfc4a:{NFSU2_TR(0x4dfc4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfc4b:{NFSU2_TR(0x4dfc4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfc50:L4dfc50:{c.instructions+=8;NFSU2_TR(0x4dfc50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc51:{NFSU2_TR(0x4dfc51);
__builtin_memmove((R+20),(R+16),4);
}
B4dfc53:{NFSU2_TR(0x4dfc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfc56:{NFSU2_TR(0x4dfc56);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfc5b:{NFSU2_TR(0x4dfc5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc5c:{NFSU2_TR(0x4dfc5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc5d:{NFSU2_TR(0x4dfc5d);
__builtin_memmove((R+24),(R+4),4);
}
B4dfc5f:{NFSU2_TR(0x4dfc5f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4dff16;}}
}
B4dfc65:L4dfc65:{c.instructions+=1;NFSU2_TR(0x4dfc65);
if(r1(R+518)){{goto L4dfefa;}}
}
B4dfc6b:L4dfc6b:{c.instructions+=2;NFSU2_TR(0x4dfc6b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1becull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34dc1becull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfc70:{NFSU2_TR(0x4dfc70);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4dfd17;}}
}
B4dfc76:L4dfc76:{c.instructions+=1;NFSU2_TR(0x4dfc76);
if(r1(R+518)){{goto L4dfc95;}}
}
B4dfc78:L4dfc78:{c.instructions+=2;NFSU2_TR(0x4dfc78);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfc7d:{NFSU2_TR(0x4dfc7d);
if(r1(R+518)){{goto L4dfd96;}}
}
B4dfc83:L4dfc83:{c.instructions+=2;NFSU2_TR(0x4dfc83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x2101dcc5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfc88:{NFSU2_TR(0x4dfc88);
if(r1(R+518)){{goto L4dfcb3;}}
}
B4dfc8a:L4dfc8a:{c.instructions+=2;NFSU2_TR(0x4dfc8a);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x34dc1bcfull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x34dc1bcfull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x34dc1bcfull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4dfc8f:{NFSU2_TR(0x4dfc8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dfc95:L4dfc95:{c.instructions+=6;NFSU2_TR(0x4dfc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfc98:{NFSU2_TR(0x4dfc98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc9a:{NFSU2_TR(0x4dfc9a);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfc9f:{NFSU2_TR(0x4dfc9f);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfca4:{NFSU2_TR(0x4dfca4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfca5:{NFSU2_TR(0x4dfca5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfcaaull));
TAIL_STATIC(0x537c00u,537);
}
B4dfcaa:L4dfcaa:{c.instructions+=5;NFSU2_TR(0x4dfcaa);
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
B4dfcad:{NFSU2_TR(0x4dfcad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfcae:{NFSU2_TR(0x4dfcae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfcaf:{NFSU2_TR(0x4dfcaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfcb0:{NFSU2_TR(0x4dfcb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfcb3:L4dfcb3:{c.instructions+=4;NFSU2_TR(0x4dfcb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfcb6:{NFSU2_TR(0x4dfcb6);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcbb:{NFSU2_TR(0x4dfcbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcbc:{NFSU2_TR(0x4dfcbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfcc1ull));
TAIL_STATIC(0x495520u,495);
}
B4dfcc1:L4dfcc1:{c.instructions+=4;NFSU2_TR(0x4dfcc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfcc4:{NFSU2_TR(0x4dfcc4);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcc9:{NFSU2_TR(0x4dfcc9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcca:{NFSU2_TR(0x4dfcca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfccfull));
TAIL_STATIC(0x495520u,495);
}
B4dfccf:L4dfccf:{c.instructions+=6;NFSU2_TR(0x4dfccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfcd2:{NFSU2_TR(0x4dfcd2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcd4:{NFSU2_TR(0x4dfcd4);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcd9:{NFSU2_TR(0x4dfcd9);
u8 U[4];
w4(U+0,u32(0x26f1f64cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcde:{NFSU2_TR(0x4dfcde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcdf:{NFSU2_TR(0x4dfcdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfce4ull));
TAIL_STATIC(0x537c00u,537);
}
B4dfce4:L4dfce4:{c.instructions+=6;NFSU2_TR(0x4dfce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfce7:{NFSU2_TR(0x4dfce7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfce9:{NFSU2_TR(0x4dfce9);
u8 U[4];
w4(U+0,u32(0x790eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcee:{NFSU2_TR(0x4dfcee);
u8 U[4];
w4(U+0,u32(0xdf422345ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcf3:{NFSU2_TR(0x4dfcf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcf4:{NFSU2_TR(0x4dfcf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfcf9ull));
TAIL_STATIC(0x537c00u,537);
}
B4dfcf9:L4dfcf9:{c.instructions+=6;NFSU2_TR(0x4dfcf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfcfc:{NFSU2_TR(0x4dfcfc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfcfe:{NFSU2_TR(0x4dfcfe);
u8 U[4];
w4(U+0,u32(0x79031cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd03:{NFSU2_TR(0x4dfd03);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd08:{NFSU2_TR(0x4dfd08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd09:{NFSU2_TR(0x4dfd09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfd0eull));
TAIL_STATIC(0x537c00u,537);
}
B4dfd0e:L4dfd0e:{c.instructions+=5;NFSU2_TR(0x4dfd0e);
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
B4dfd11:{NFSU2_TR(0x4dfd11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfd12:{NFSU2_TR(0x4dfd12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfd13:{NFSU2_TR(0x4dfd13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfd14:{NFSU2_TR(0x4dfd14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfd17:L4dfd17:{c.instructions+=2;NFSU2_TR(0x4dfd17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dfd1c:{NFSU2_TR(0x4dfd1c);
if(r1(R+518)){{goto L4dfd96;}}
}
B4dfd1e:L4dfd1e:{c.instructions+=2;NFSU2_TR(0x4dfd1e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911ab364ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4dfd23:{NFSU2_TR(0x4dfd23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dfd29:L4dfd29:{c.instructions+=5;NFSU2_TR(0x4dfd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfd2c:{NFSU2_TR(0x4dfd2c);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd31:{NFSU2_TR(0x4dfd31);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd36:{NFSU2_TR(0x4dfd36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd37:{NFSU2_TR(0x4dfd37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfd3cull));
TAIL_STATIC(0x537cc0u,537);
}
B4dfd3c:L4dfd3c:{c.instructions+=3;NFSU2_TR(0x4dfd3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4dfd3f:{NFSU2_TR(0x4dfd3f);
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
B4dfd41:{NFSU2_TR(0x4dfd41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dfd7e;}}
}
B4dfd43:L4dfd43:{c.instructions+=9;NFSU2_TR(0x4dfd43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfd46:{NFSU2_TR(0x4dfd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfd49:{NFSU2_TR(0x4dfd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfd4c:{NFSU2_TR(0x4dfd4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd4d:{NFSU2_TR(0x4dfd4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd4e:{NFSU2_TR(0x4dfd4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd4f:{NFSU2_TR(0x4dfd4f);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd54:{NFSU2_TR(0x4dfd54);
__builtin_memmove((R+4),(R+24),4);
}
B4dfd56:{NFSU2_TR(0x4dfd56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfd5bull));
TAIL_STATIC(0x4961e0u,496);
}
B4dfd5b:L4dfd5b:{c.instructions+=4;NFSU2_TR(0x4dfd5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfd5e:{NFSU2_TR(0x4dfd5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd60:{NFSU2_TR(0x4dfd60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd61:{NFSU2_TR(0x4dfd61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfd66ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4dfd66:L4dfd66:{c.instructions+=6;NFSU2_TR(0x4dfd66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfd69:{NFSU2_TR(0x4dfd69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd6b:{NFSU2_TR(0x4dfd6b);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd70:{NFSU2_TR(0x4dfd70);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd75:{NFSU2_TR(0x4dfd75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd76:{NFSU2_TR(0x4dfd76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfd7bull));
TAIL_STATIC(0x537c00u,537);
}
B4dfd7b:L4dfd7b:{c.instructions+=1;NFSU2_TR(0x4dfd7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4dfd7e:L4dfd7e:{c.instructions+=6;NFSU2_TR(0x4dfd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfd81:{NFSU2_TR(0x4dfd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfd84:{NFSU2_TR(0x4dfd84);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd85:{NFSU2_TR(0x4dfd85);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd87:{NFSU2_TR(0x4dfd87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfd88:{NFSU2_TR(0x4dfd88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfd8dull));
TAIL_STATIC(0x50d150u,50d);
}
B4dfd8d:L4dfd8d:{c.instructions+=5;NFSU2_TR(0x4dfd8d);
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
B4dfd90:{NFSU2_TR(0x4dfd90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfd91:{NFSU2_TR(0x4dfd91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfd92:{NFSU2_TR(0x4dfd92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfd93:{NFSU2_TR(0x4dfd93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfd96:L4dfd96:{c.instructions+=3;NFSU2_TR(0x4dfd96);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4dfd9c:{NFSU2_TR(0x4dfd9c);
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
B4dfd9e:{NFSU2_TR(0x4dfd9e);
if(r1(R+518)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dfda4:L4dfda4:{c.instructions+=4;NFSU2_TR(0x4dfda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfda7:{NFSU2_TR(0x4dfda7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4dfdad:{NFSU2_TR(0x4dfdad);
w1(R+512,u8((r1(R+4))<(u8(0x0ull))));
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B4dfdb0:{NFSU2_TR(0x4dfdb0);
if(r1(R+518)){{goto L4dfdf8;}}
}
B4dfdb2:L4dfdb2:{c.instructions+=2;NFSU2_TR(0x4dfdb2);
u8 U[3];
w1(R+523,sborrow<u8>(r1(R+4),u8(0x1ull)));
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4dfdb4:{NFSU2_TR(0x4dfdb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dfdba:L4dfdba:{c.instructions+=5;NFSU2_TR(0x4dfdba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfdc0:{NFSU2_TR(0x4dfdc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfdc6:{NFSU2_TR(0x4dfdc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4dfdc9:{NFSU2_TR(0x4dfdc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfdca:{NFSU2_TR(0x4dfdca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfdcfull));
TAIL_STATIC(0x5120b0u,512);
}
B4dfdcf:L4dfdcf:{c.instructions+=8;NFSU2_TR(0x4dfdcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfdd0:{NFSU2_TR(0x4dfdd0);
u8 U[4];
w4(U+0,u32(0x2415be66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfdd5:{NFSU2_TR(0x4dfdd5);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfdda:{NFSU2_TR(0x4dfdda);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfddf:{NFSU2_TR(0x4dfddf);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfde4:{NFSU2_TR(0x4dfde4);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfde9:{NFSU2_TR(0x4dfde9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfdea:{NFSU2_TR(0x4dfdea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfdefull));
TAIL_STATIC(0x558570u,558);
}
B4dfdef:L4dfdef:{c.instructions+=5;NFSU2_TR(0x4dfdef);
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
B4dfdf2:{NFSU2_TR(0x4dfdf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfdf3:{NFSU2_TR(0x4dfdf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfdf4:{NFSU2_TR(0x4dfdf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfdf5:{NFSU2_TR(0x4dfdf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfdf8:L4dfdf8:{c.instructions+=3;NFSU2_TR(0x4dfdf8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x931ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4dfdfe:{NFSU2_TR(0x4dfdfe);
w1(R+512,u8((r1(R+4))<(u8(0x0ull))));
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
}
B4dfe01:{NFSU2_TR(0x4dfe01);
if(r1(R+518)){{goto L4dfe49;}}
}
B4dfe03:L4dfe03:{c.instructions+=2;NFSU2_TR(0x4dfe03);
u8 U[3];
w1(R+523,sborrow<u8>(r1(R+4),u8(0x1ull)));
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4dfe05:{NFSU2_TR(0x4dfe05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dfe0b:L4dfe0b:{c.instructions+=5;NFSU2_TR(0x4dfe0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfe11:{NFSU2_TR(0x4dfe11);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfe17:{NFSU2_TR(0x4dfe17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4dfe1a:{NFSU2_TR(0x4dfe1a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe1b:{NFSU2_TR(0x4dfe1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfe20ull));
TAIL_STATIC(0x5120b0u,512);
}
B4dfe20:L4dfe20:{c.instructions+=8;NFSU2_TR(0x4dfe20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe21:{NFSU2_TR(0x4dfe21);
u8 U[4];
w4(U+0,u32(0xcf3b2d70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe26:{NFSU2_TR(0x4dfe26);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe2b:{NFSU2_TR(0x4dfe2b);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe30:{NFSU2_TR(0x4dfe30);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe35:{NFSU2_TR(0x4dfe35);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe3a:{NFSU2_TR(0x4dfe3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe3b:{NFSU2_TR(0x4dfe3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfe40ull));
TAIL_STATIC(0x558570u,558);
}
B4dfe40:L4dfe40:{c.instructions+=5;NFSU2_TR(0x4dfe40);
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
B4dfe43:{NFSU2_TR(0x4dfe43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfe44:{NFSU2_TR(0x4dfe44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfe45:{NFSU2_TR(0x4dfe45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfe46:{NFSU2_TR(0x4dfe46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfe49:L4dfe49:{c.instructions+=2;NFSU2_TR(0x4dfe49);
w4(R+4,u32(0x85ad40ull));
}
B4dfe4e:{NFSU2_TR(0x4dfe4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfe53ull));
TAIL_STATIC(0x513c30u,513);
}
B4dfe53:L4dfe53:{c.instructions+=5;NFSU2_TR(0x4dfe53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfe56:{NFSU2_TR(0x4dfe56);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4dfe5c:{NFSU2_TR(0x4dfe5c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4dfe5f:{NFSU2_TR(0x4dfe5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4dfe62:{NFSU2_TR(0x4dfe62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4dfe9f;}}
}
B4dfe64:L4dfe64:{c.instructions+=4;NFSU2_TR(0x4dfe64);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfe6a:{NFSU2_TR(0x4dfe6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfe70:{NFSU2_TR(0x4dfe70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe71:{NFSU2_TR(0x4dfe71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfe76ull));
TAIL_STATIC(0x5120b0u,512);
}
B4dfe76:L4dfe76:{c.instructions+=8;NFSU2_TR(0x4dfe76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe77:{NFSU2_TR(0x4dfe77);
u8 U[4];
w4(U+0,u32(0x7ee84e4eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe7c:{NFSU2_TR(0x4dfe7c);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe81:{NFSU2_TR(0x4dfe81);
u8 U[4];
w4(U+0,u32(0x34dc1becull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe86:{NFSU2_TR(0x4dfe86);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe8b:{NFSU2_TR(0x4dfe8b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe90:{NFSU2_TR(0x4dfe90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfe91:{NFSU2_TR(0x4dfe91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfe96ull));
TAIL_STATIC(0x558570u,558);
}
B4dfe96:L4dfe96:{c.instructions+=5;NFSU2_TR(0x4dfe96);
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
B4dfe99:{NFSU2_TR(0x4dfe99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfe9a:{NFSU2_TR(0x4dfe9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfe9b:{NFSU2_TR(0x4dfe9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfe9c:{NFSU2_TR(0x4dfe9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfe9f:L4dfe9f:{c.instructions+=5;NFSU2_TR(0x4dfe9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4dfea5:{NFSU2_TR(0x4dfea5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4dfeab:{NFSU2_TR(0x4dfeab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4dfead:{NFSU2_TR(0x4dfead);
__builtin_memmove((R+4),(R+0),4);
}
B4dfeaf:{NFSU2_TR(0x4dfeaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfeb2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dfeb2:L4dfeb2:{c.instructions+=2;NFSU2_TR(0x4dfeb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfeb3:{NFSU2_TR(0x4dfeb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfeb8ull));
TAIL_STATIC(0x5120b0u,512);
}
B4dfeb8:L4dfeb8:{c.instructions+=4;NFSU2_TR(0x4dfeb8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfebb:{NFSU2_TR(0x4dfebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfebc:{NFSU2_TR(0x4dfebc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfebd:{NFSU2_TR(0x4dfebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfec2ull));
TAIL_STATIC(0x5120b0u,512);
}
B4dfec2:L4dfec2:{c.instructions+=12;NFSU2_TR(0x4dfec2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4dfec5:{NFSU2_TR(0x4dfec5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfec6:{NFSU2_TR(0x4dfec6);
u8 U[4];
w4(U+0,u32(0x1231c38full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfecb:{NFSU2_TR(0x4dfecb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfecd:{NFSU2_TR(0x4dfecd);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfed2:{NFSU2_TR(0x4dfed2);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfed7:{NFSU2_TR(0x4dfed7);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfedc:{NFSU2_TR(0x4dfedc);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfee1:{NFSU2_TR(0x4dfee1);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfee6:{NFSU2_TR(0x4dfee6);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfeeb:{NFSU2_TR(0x4dfeeb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dfeec:{NFSU2_TR(0x4dfeec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dfef1ull));
TAIL_STATIC(0x558790u,558);
}
B4dfef1:L4dfef1:{c.instructions+=5;NFSU2_TR(0x4dfef1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4dfef4:{NFSU2_TR(0x4dfef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dfef5:{NFSU2_TR(0x4dfef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dfef6:{NFSU2_TR(0x4dfef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dfef7:{NFSU2_TR(0x4dfef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dfefa:L4dfefa:{c.instructions+=4;NFSU2_TR(0x4dfefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
w4(U+4,u32(0x9120409eull));
s4(u32(r4(U+0)),r4(U+4));
}
B4dff04:{NFSU2_TR(0x4dff04);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dff09:{NFSU2_TR(0x4dff09);
__builtin_memmove((R+4),(R+24),4);
}
B4dff0b:{NFSU2_TR(0x4dff0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dff10ull));
TAIL_STATIC(0x4b04c0u,4b0);
}
B4dff10:L4dff10:{c.instructions+=4;NFSU2_TR(0x4dff10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dff11:{NFSU2_TR(0x4dff11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dff12:{NFSU2_TR(0x4dff12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dff13:{NFSU2_TR(0x4dff13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dff16:L4dff16:{c.instructions+=2;NFSU2_TR(0x4dff16);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dff1b:{NFSU2_TR(0x4dff1b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e00b1u,4e0);}
}
B4dff21:L4dff21:{c.instructions+=1;NFSU2_TR(0x4dff21);
if(r1(R+518)){{goto L4dffec;}}
}
B4dff27:L4dff27:{c.instructions+=2;NFSU2_TR(0x4dff27);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9803f6e2ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4dff2c:{NFSU2_TR(0x4dff2c);
if(r1(R+518)){{goto L4dff4d;}}
}
B4dff2e:L4dff2e:{c.instructions+=2;NFSU2_TR(0x4dff2e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4dff33:{NFSU2_TR(0x4dff33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dff39:L4dff39:{c.instructions+=4;NFSU2_TR(0x4dff39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dff3a:{NFSU2_TR(0x4dff3a);
__builtin_memmove((R+4),(R+24),4);
}
B4dff3c:{NFSU2_TR(0x4dff3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4dff42:{NFSU2_TR(0x4dff42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dff47ull));
TAIL_STATIC(0x4b04c0u,4b0);
}
B4dff47:L4dff47:{c.instructions+=4;NFSU2_TR(0x4dff47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dff48:{NFSU2_TR(0x4dff48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dff49:{NFSU2_TR(0x4dff49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dff4a:{NFSU2_TR(0x4dff4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dff4d:L4dff4d:{c.instructions+=2;NFSU2_TR(0x4dff4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4dff50:{NFSU2_TR(0x4dff50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dff55ull));
TAIL_STATIC(0x538130u,538);
}
B4dff55:L4dff55:{c.instructions+=4;NFSU2_TR(0x4dff55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dff5b:{NFSU2_TR(0x4dff5b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
}
B4dff5e:{NFSU2_TR(0x4dff5e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4dff61:{NFSU2_TR(0x4dff61);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dff67:L4dff67:{c.instructions+=2;NFSU2_TR(0x4dff67);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4e013cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4dff6e:{NFSU2_TR(0x4dff6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e0128ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4dff75:L4dff75:{c.instructions+=3;NFSU2_TR(0x4dff75);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dff7a:{NFSU2_TR(0x4dff7a);
__builtin_memmove((R+4),(R+24),4);
}
B4dff7c:{NFSU2_TR(0x4dff7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dff81ull));
TAIL_STATIC(0x4b04c0u,4b0);
}
B4dff81:L4dff81:{c.instructions+=4;NFSU2_TR(0x4dff81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dff82:{NFSU2_TR(0x4dff82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dff83:{NFSU2_TR(0x4dff83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dff84:{NFSU2_TR(0x4dff84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dff87:L4dff87:{c.instructions+=4;NFSU2_TR(0x4dff87);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4dff8c:{NFSU2_TR(0x4dff8c);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dff8e:{NFSU2_TR(0x4dff8e);
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
B4dff90:{NFSU2_TR(0x4dff90);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dff96:L4dff96:{c.instructions+=1;NFSU2_TR(0x4dff96);
{goto L4dffa0;}
}
B4dffa0:L4dffa0:{c.instructions+=3;NFSU2_TR(0x4dffa0);
u8 U[4];
w4(U+0,u32(0xb5971bf1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dffa5:{NFSU2_TR(0x4dffa5);
__builtin_memmove((R+4),(R+24),4);
}
B4dffa7:{NFSU2_TR(0x4dffa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dffacull));
TAIL_STATIC(0x4b04c0u,4b0);
}
B4dffac:L4dffac:{c.instructions+=4;NFSU2_TR(0x4dffac);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4dffb1:{NFSU2_TR(0x4dffb1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4dffb2:{NFSU2_TR(0x4dffb2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4dffb4:{NFSU2_TR(0x4dffb4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dffa0u);}goto L4dffa0;}}
}
B4dffb6:L4dffb6:{c.instructions+=4;NFSU2_TR(0x4dffb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dffb7:{NFSU2_TR(0x4dffb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dffb8:{NFSU2_TR(0x4dffb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dffb9:{NFSU2_TR(0x4dffb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dffbc:L4dffbc:{c.instructions+=4;NFSU2_TR(0x4dffbc);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4dffc1:{NFSU2_TR(0x4dffc1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4dffc3:{NFSU2_TR(0x4dffc3);
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
B4dffc5:{NFSU2_TR(0x4dffc5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dffcb:L4dffcb:{c.instructions+=1;NFSU2_TR(0x4dffcb);
{goto L4dffd0;}
}
B4dffd0:L4dffd0:{c.instructions+=3;NFSU2_TR(0x4dffd0);
u8 U[4];
w4(U+0,u32(0x9120409eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4dffd5:{NFSU2_TR(0x4dffd5);
__builtin_memmove((R+4),(R+24),4);
}
B4dffd7:{NFSU2_TR(0x4dffd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4dffdcull));
TAIL_STATIC(0x4b04c0u,4b0);
}
B4dffdc:L4dffdc:{c.instructions+=4;NFSU2_TR(0x4dffdc);
__builtin_memmove((R+0),gp(0x7fa1a8),4);
}
B4dffe1:{NFSU2_TR(0x4dffe1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4dffe2:{NFSU2_TR(0x4dffe2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4dffe4:{NFSU2_TR(0x4dffe4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4dffd0u);}goto L4dffd0;}}
}
B4dffe6:L4dffe6:{c.instructions+=4;NFSU2_TR(0x4dffe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4dffe7:{NFSU2_TR(0x4dffe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4dffe8:{NFSU2_TR(0x4dffe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4dffe9:{NFSU2_TR(0x4dffe9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4dffec:L4dffec:{c.instructions+=3;NFSU2_TR(0x4dffec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4dfff2:{NFSU2_TR(0x4dfff2);
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
B4dfff4:{NFSU2_TR(0x4dfff4);
if(r1(R+518)){TAIL_STATIC(0x4e011fu,4e0);}
}
B4dfffa:L4dfffa:{c.instructions+=2;NFSU2_TR(0x4dfffa);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4dffff:{NFSU2_TR(0x4dffff);
if(r1(R+518)){TAIL_STATIC(0x4e011fu,4e0);}
TAIL_STATIC(0x4e0005u,4e0);
}
XIT:NFSU2_TR_EXIT(0x4df,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
