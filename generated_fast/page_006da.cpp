#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_6de(u8* __restrict R,Cpu& c);
u32 body_6e1(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6da,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6da,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6da(u8* __restrict R,Cpu& c);
u32 page_6da(Cpu& c){return body_6da(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6da(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6da000:goto L6da000;
case 0x6da002:goto L6da002;
case 0x6da005:c.instructions+=3;goto B6da005;
case 0x6da00b:c.instructions+=2;goto B6da00b;
case 0x6da00e:c.instructions+=1;goto B6da00e;
case 0x6da010:goto L6da010;
case 0x6da013:c.instructions+=1;goto B6da013;
case 0x6da015:goto L6da015;
case 0x6da016:c.instructions+=1;goto B6da016;
case 0x6da01c:goto L6da01c;
case 0x6da01f:c.instructions+=7;goto B6da01f;
case 0x6da025:c.instructions+=6;goto B6da025;
case 0x6da027:c.instructions+=5;goto B6da027;
case 0x6da028:c.instructions+=4;goto B6da028;
case 0x6da02d:c.instructions+=3;goto B6da02d;
case 0x6da02f:c.instructions+=2;goto B6da02f;
case 0x6da034:c.instructions+=1;goto B6da034;
case 0x6da039:goto L6da039;
case 0x6da03b:goto L6da03b;
case 0x6da03f:c.instructions+=5;goto B6da03f;
case 0x6da041:c.instructions+=4;goto B6da041;
case 0x6da045:c.instructions+=3;goto B6da045;
case 0x6da047:c.instructions+=2;goto B6da047;
case 0x6da048:c.instructions+=1;goto B6da048;
case 0x6da04a:goto L6da04a;
case 0x6da04f:goto L6da04f;
case 0x6da051:goto L6da051;
case 0x6da056:goto L6da056;
case 0x6da059:c.instructions+=12;goto B6da059;
case 0x6da05c:c.instructions+=11;goto B6da05c;
case 0x6da062:c.instructions+=10;goto B6da062;
case 0x6da065:c.instructions+=9;goto B6da065;
case 0x6da068:c.instructions+=8;goto B6da068;
case 0x6da06e:c.instructions+=7;goto B6da06e;
case 0x6da071:c.instructions+=6;goto B6da071;
case 0x6da074:c.instructions+=5;goto B6da074;
case 0x6da079:c.instructions+=4;goto B6da079;
case 0x6da07c:c.instructions+=3;goto B6da07c;
case 0x6da07f:c.instructions+=2;goto B6da07f;
case 0x6da082:c.instructions+=1;goto B6da082;
case 0x6da084:goto L6da084;
case 0x6da08b:goto L6da08b;
case 0x6da095:c.instructions+=1;goto B6da095;
case 0x6da097:goto L6da097;
case 0x6da0a1:c.instructions+=1;goto B6da0a1;
case 0x6da0a3:goto L6da0a3;
case 0x6da0ad:c.instructions+=1;goto B6da0ad;
case 0x6da0af:goto L6da0af;
case 0x6da0b9:goto L6da0b9;
case 0x6da0bc:c.instructions+=6;goto B6da0bc;
case 0x6da0bf:c.instructions+=5;goto B6da0bf;
case 0x6da0c4:c.instructions+=4;goto B6da0c4;
case 0x6da0c9:c.instructions+=3;goto B6da0c9;
case 0x6da0cb:c.instructions+=2;goto B6da0cb;
case 0x6da0cd:c.instructions+=1;goto B6da0cd;
case 0x6da0cf:goto L6da0cf;
case 0x6da0d4:goto L6da0d4;
case 0x6da0d6:goto L6da0d6;
case 0x6da0d7:c.instructions+=1;goto B6da0d7;
case 0x6da0dc:goto L6da0dc;
case 0x6da0de:c.instructions+=2;goto B6da0de;
case 0x6da0df:c.instructions+=1;goto B6da0df;
case 0x6da0e1:goto L6da0e1;
case 0x6da0e6:c.instructions+=2;goto B6da0e6;
case 0x6da0e8:c.instructions+=1;goto B6da0e8;
case 0x6da0ea:goto L6da0ea;
case 0x6da0ef:c.instructions+=2;goto B6da0ef;
case 0x6da0f0:c.instructions+=1;goto B6da0f0;
case 0x6da0f3:goto L6da0f3;
case 0x6da0f5:c.instructions+=2;goto B6da0f5;
case 0x6da0f6:c.instructions+=1;goto B6da0f6;
case 0x6da110:goto L6da110;
case 0x6da113:c.instructions+=5;goto B6da113;
case 0x6da114:c.instructions+=4;goto B6da114;
case 0x6da115:c.instructions+=3;goto B6da115;
case 0x6da116:c.instructions+=2;goto B6da116;
case 0x6da117:c.instructions+=1;goto B6da117;
case 0x6da11c:goto L6da11c;
case 0x6da11e:c.instructions+=1;goto B6da11e;
case 0x6da123:goto L6da123;
case 0x6da125:c.instructions+=15;goto B6da125;
case 0x6da12a:c.instructions+=14;goto B6da12a;
case 0x6da12d:c.instructions+=13;goto B6da12d;
case 0x6da130:c.instructions+=12;goto B6da130;
case 0x6da133:c.instructions+=11;goto B6da133;
case 0x6da138:c.instructions+=10;goto B6da138;
case 0x6da13f:c.instructions+=9;goto B6da13f;
case 0x6da146:c.instructions+=8;goto B6da146;
case 0x6da148:c.instructions+=7;goto B6da148;
case 0x6da149:c.instructions+=6;goto B6da149;
case 0x6da151:c.instructions+=5;goto B6da151;
case 0x6da159:c.instructions+=4;goto B6da159;
case 0x6da15d:c.instructions+=3;goto B6da15d;
case 0x6da161:c.instructions+=2;goto B6da161;
case 0x6da165:c.instructions+=1;goto B6da165;
case 0x6da16b:goto L6da16b;
case 0x6da16f:c.instructions+=9;goto B6da16f;
case 0x6da170:c.instructions+=8;goto B6da170;
case 0x6da174:c.instructions+=7;goto B6da174;
case 0x6da178:c.instructions+=6;goto B6da178;
case 0x6da17c:c.instructions+=5;goto B6da17c;
case 0x6da180:c.instructions+=4;goto B6da180;
case 0x6da184:c.instructions+=3;goto B6da184;
case 0x6da18c:c.instructions+=2;goto B6da18c;
case 0x6da190:c.instructions+=1;goto B6da190;
case 0x6da196:goto L6da196;
case 0x6da199:c.instructions+=3;goto B6da199;
case 0x6da19e:c.instructions+=2;goto B6da19e;
case 0x6da1a2:c.instructions+=1;goto B6da1a2;
case 0x6da1a4:goto L6da1a4;
case 0x6da1a6:goto L6da1a6;
case 0x6da1ab:goto L6da1ab;
case 0x6da1af:c.instructions+=10;goto B6da1af;
case 0x6da1b2:c.instructions+=9;goto B6da1b2;
case 0x6da1b6:c.instructions+=8;goto B6da1b6;
case 0x6da1bc:c.instructions+=7;goto B6da1bc;
case 0x6da1c0:c.instructions+=6;goto B6da1c0;
case 0x6da1c3:c.instructions+=5;goto B6da1c3;
case 0x6da1c6:c.instructions+=4;goto B6da1c6;
case 0x6da1c8:c.instructions+=3;goto B6da1c8;
case 0x6da1cb:c.instructions+=2;goto B6da1cb;
case 0x6da1d1:c.instructions+=1;goto B6da1d1;
case 0x6da1d3:goto L6da1d3;
case 0x6da1d6:c.instructions+=1;goto B6da1d6;
case 0x6da1d8:goto L6da1d8;
case 0x6da1de:goto L6da1de;
case 0x6da1e1:c.instructions+=4;goto B6da1e1;
case 0x6da1e3:c.instructions+=3;goto B6da1e3;
case 0x6da1ed:c.instructions+=2;goto B6da1ed;
case 0x6da1ef:c.instructions+=1;goto B6da1ef;
case 0x6da1f1:goto L6da1f1;
case 0x6da1f4:c.instructions+=1;goto B6da1f4;
case 0x6da1f6:goto L6da1f6;
case 0x6da1fc:goto L6da1fc;
case 0x6da1ff:c.instructions+=3;goto B6da1ff;
case 0x6da201:c.instructions+=2;goto B6da201;
case 0x6da20b:c.instructions+=1;goto B6da20b;
case 0x6da20c:goto L6da20c;
case 0x6da211:goto L6da211;
case 0x6da213:c.instructions+=1;goto B6da213;
case 0x6da215:goto L6da215;
case 0x6da217:c.instructions+=6;goto B6da217;
case 0x6da218:c.instructions+=5;goto B6da218;
case 0x6da219:c.instructions+=4;goto B6da219;
case 0x6da21a:c.instructions+=3;goto B6da21a;
case 0x6da21b:c.instructions+=2;goto B6da21b;
case 0x6da21e:c.instructions+=1;goto B6da21e;
case 0x6da21f:goto L6da21f;
case 0x6da220:c.instructions+=1;goto B6da220;
case 0x6da225:goto L6da225;
case 0x6da227:c.instructions+=1;goto B6da227;
case 0x6da22c:goto L6da22c;
case 0x6da230:c.instructions+=2;goto B6da230;
case 0x6da231:c.instructions+=1;goto B6da231;
case 0x6da237:goto L6da237;
case 0x6da23b:c.instructions+=4;goto B6da23b;
case 0x6da23f:c.instructions+=3;goto B6da23f;
case 0x6da240:c.instructions+=2;goto B6da240;
case 0x6da241:c.instructions+=1;goto B6da241;
case 0x6da247:goto L6da247;
case 0x6da248:c.instructions+=6;goto B6da248;
case 0x6da249:c.instructions+=5;goto B6da249;
case 0x6da24a:c.instructions+=4;goto B6da24a;
case 0x6da24c:c.instructions+=3;goto B6da24c;
case 0x6da24d:c.instructions+=2;goto B6da24d;
case 0x6da250:c.instructions+=1;goto B6da250;
case 0x6da260:goto L6da260;
case 0x6da261:c.instructions+=7;goto B6da261;
case 0x6da263:c.instructions+=6;goto B6da263;
case 0x6da266:c.instructions+=5;goto B6da266;
case 0x6da26c:c.instructions+=4;goto B6da26c;
case 0x6da273:c.instructions+=3;goto B6da273;
case 0x6da274:c.instructions+=2;goto B6da274;
case 0x6da275:c.instructions+=1;goto B6da275;
case 0x6da277:goto L6da277;
case 0x6da279:c.instructions+=4;goto B6da279;
case 0x6da27d:c.instructions+=3;goto B6da27d;
case 0x6da27e:c.instructions+=2;goto B6da27e;
case 0x6da280:c.instructions+=1;goto B6da280;
case 0x6da285:goto L6da285;
case 0x6da287:c.instructions+=1;goto B6da287;
case 0x6da289:goto L6da289;
case 0x6da28b:c.instructions+=3;goto B6da28b;
case 0x6da28d:c.instructions+=2;goto B6da28d;
case 0x6da292:c.instructions+=1;goto B6da292;
case 0x6da296:goto L6da296;
case 0x6da298:goto L6da298;
case 0x6da29c:c.instructions+=6;goto B6da29c;
case 0x6da2a0:c.instructions+=5;goto B6da2a0;
case 0x6da2a1:c.instructions+=4;goto B6da2a1;
case 0x6da2a9:c.instructions+=3;goto B6da2a9;
case 0x6da2ab:c.instructions+=2;goto B6da2ab;
case 0x6da2ac:c.instructions+=1;goto B6da2ac;
case 0x6da2af:goto L6da2af;
case 0x6da2b3:c.instructions+=10;goto B6da2b3;
case 0x6da2b5:c.instructions+=9;goto B6da2b5;
case 0x6da2b7:c.instructions+=8;goto B6da2b7;
case 0x6da2bb:c.instructions+=7;goto B6da2bb;
case 0x6da2be:c.instructions+=6;goto B6da2be;
case 0x6da2bf:c.instructions+=5;goto B6da2bf;
case 0x6da2c0:c.instructions+=4;goto B6da2c0;
case 0x6da2c2:c.instructions+=3;goto B6da2c2;
case 0x6da2c8:c.instructions+=2;goto B6da2c8;
case 0x6da2ca:c.instructions+=1;goto B6da2ca;
case 0x6da2cd:goto L6da2cd;
case 0x6da2cf:goto L6da2cf;
case 0x6da2d9:goto L6da2d9;
case 0x6da2de:goto L6da2de;
case 0x6da2e0:c.instructions+=1;goto B6da2e0;
case 0x6da2e5:goto L6da2e5;
case 0x6da2eb:c.instructions+=4;goto B6da2eb;
case 0x6da2ed:c.instructions+=3;goto B6da2ed;
case 0x6da2f2:c.instructions+=2;goto B6da2f2;
case 0x6da2f4:c.instructions+=1;goto B6da2f4;
case 0x6da2f6:goto L6da2f6;
case 0x6da2f8:c.instructions+=1;goto B6da2f8;
case 0x6da2fa:goto L6da2fa;
case 0x6da2fc:c.instructions+=1;goto B6da2fc;
case 0x6da2fe:goto L6da2fe;
case 0x6da300:c.instructions+=1;goto B6da300;
case 0x6da302:goto L6da302;
case 0x6da304:c.instructions+=1;goto B6da304;
case 0x6da306:goto L6da306;
case 0x6da308:c.instructions+=1;goto B6da308;
case 0x6da30a:goto L6da30a;
case 0x6da30b:goto L6da30b;
case 0x6da310:goto L6da310;
case 0x6da313:c.instructions+=2;goto B6da313;
case 0x6da315:c.instructions+=1;goto B6da315;
case 0x6da317:goto L6da317;
case 0x6da321:c.instructions+=6;goto B6da321;
case 0x6da323:c.instructions+=5;goto B6da323;
case 0x6da324:c.instructions+=4;goto B6da324;
case 0x6da325:c.instructions+=3;goto B6da325;
case 0x6da327:c.instructions+=2;goto B6da327;
case 0x6da328:c.instructions+=1;goto B6da328;
case 0x6da329:goto L6da329;
case 0x6da32e:c.instructions+=1;goto B6da32e;
case 0x6da334:goto L6da334;
case 0x6da336:c.instructions+=1;goto B6da336;
case 0x6da338:goto L6da338;
case 0x6da33a:c.instructions+=1;goto B6da33a;
case 0x6da33c:goto L6da33c;
case 0x6da341:c.instructions+=2;goto B6da341;
case 0x6da343:c.instructions+=1;goto B6da343;
case 0x6da345:goto L6da345;
case 0x6da34a:goto L6da34a;
case 0x6da34c:c.instructions+=1;goto B6da34c;
case 0x6da351:goto L6da351;
case 0x6da353:c.instructions+=1;goto B6da353;
case 0x6da355:goto L6da355;
case 0x6da357:c.instructions+=1;goto B6da357;
case 0x6da359:goto L6da359;
case 0x6da35e:c.instructions+=2;goto B6da35e;
case 0x6da360:c.instructions+=1;goto B6da360;
case 0x6da362:goto L6da362;
case 0x6da367:goto L6da367;
case 0x6da369:c.instructions+=1;goto B6da369;
case 0x6da36e:goto L6da36e;
case 0x6da371:c.instructions+=4;goto B6da371;
case 0x6da374:c.instructions+=3;goto B6da374;
case 0x6da37a:c.instructions+=2;goto B6da37a;
case 0x6da37d:c.instructions+=1;goto B6da37d;
case 0x6da37f:goto L6da37f;
case 0x6da386:goto L6da386;
case 0x6da38b:goto L6da38b;
case 0x6da390:c.instructions+=5;goto B6da390;
case 0x6da391:c.instructions+=4;goto B6da391;
case 0x6da392:c.instructions+=3;goto B6da392;
case 0x6da394:c.instructions+=2;goto B6da394;
case 0x6da395:c.instructions+=1;goto B6da395;
case 0x6da396:goto L6da396;
case 0x6da39b:c.instructions+=6;goto B6da39b;
case 0x6da3a0:c.instructions+=5;goto B6da3a0;
case 0x6da3a1:c.instructions+=4;goto B6da3a1;
case 0x6da3a2:c.instructions+=3;goto B6da3a2;
case 0x6da3a4:c.instructions+=2;goto B6da3a4;
case 0x6da3a5:c.instructions+=1;goto B6da3a5;
case 0x6da3a6:goto L6da3a6;
case 0x6da3ac:goto L6da3ac;
case 0x6da3ad:c.instructions+=6;goto B6da3ad;
case 0x6da3b3:c.instructions+=5;goto B6da3b3;
case 0x6da3b5:c.instructions+=4;goto B6da3b5;
case 0x6da3b6:c.instructions+=3;goto B6da3b6;
case 0x6da3b8:c.instructions+=2;goto B6da3b8;
case 0x6da3b9:c.instructions+=1;goto B6da3b9;
case 0x6da3d0:goto L6da3d0;
case 0x6da3d5:c.instructions+=5;goto B6da3d5;
case 0x6da3d6:c.instructions+=4;goto B6da3d6;
case 0x6da3d8:c.instructions+=3;goto B6da3d8;
case 0x6da3da:c.instructions+=2;goto B6da3da;
case 0x6da3db:c.instructions+=1;goto B6da3db;
case 0x6da3de:goto L6da3de;
case 0x6da3e3:c.instructions+=1;goto B6da3e3;
case 0x6da3e5:goto L6da3e5;
case 0x6da3e6:c.instructions+=6;goto B6da3e6;
case 0x6da3ec:c.instructions+=5;goto B6da3ec;
case 0x6da3ed:c.instructions+=4;goto B6da3ed;
case 0x6da3f3:c.instructions+=3;goto B6da3f3;
case 0x6da3f4:c.instructions+=2;goto B6da3f4;
case 0x6da3fa:c.instructions+=1;goto B6da3fa;
case 0x6da400:goto L6da400;
case 0x6da403:c.instructions+=3;goto B6da403;
case 0x6da409:c.instructions+=2;goto B6da409;
case 0x6da40b:c.instructions+=1;goto B6da40b;
case 0x6da40d:goto L6da40d;
case 0x6da40f:goto L6da40f;
case 0x6da411:c.instructions+=5;goto B6da411;
case 0x6da413:c.instructions+=4;goto B6da413;
case 0x6da415:c.instructions+=3;goto B6da415;
case 0x6da417:c.instructions+=2;goto B6da417;
case 0x6da41c:c.instructions+=1;goto B6da41c;
case 0x6da41e:goto L6da41e;
case 0x6da420:c.instructions+=1;goto B6da420;
case 0x6da422:goto L6da422;
case 0x6da427:c.instructions+=1;goto B6da427;
case 0x6da429:goto L6da429;
case 0x6da42e:c.instructions+=1;goto B6da42e;
case 0x6da430:goto L6da430;
case 0x6da435:c.instructions+=3;goto B6da435;
case 0x6da437:c.instructions+=2;goto B6da437;
case 0x6da438:c.instructions+=1;goto B6da438;
case 0x6da43b:goto L6da43b;
case 0x6da440:c.instructions+=1;goto B6da440;
case 0x6da442:goto L6da442;
case 0x6da443:c.instructions+=2;goto B6da443;
case 0x6da444:c.instructions+=1;goto B6da444;
case 0x6da445:goto L6da445;
case 0x6da447:c.instructions+=1;goto B6da447;
case 0x6da449:goto L6da449;
case 0x6da44b:c.instructions+=2;goto B6da44b;
case 0x6da455:c.instructions+=1;goto B6da455;
case 0x6da45a:goto L6da45a;
case 0x6da45c:c.instructions+=1;goto B6da45c;
case 0x6da45e:goto L6da45e;
case 0x6da461:c.instructions+=3;goto B6da461;
case 0x6da467:c.instructions+=2;goto B6da467;
case 0x6da469:c.instructions+=1;goto B6da469;
case 0x6da46b:goto L6da46b;
case 0x6da46d:goto L6da46d;
case 0x6da472:goto L6da472;
case 0x6da477:goto L6da477;
case 0x6da47c:goto L6da47c;
case 0x6da481:goto L6da481;
case 0x6da486:goto L6da486;
case 0x6da490:c.instructions+=4;goto B6da490;
case 0x6da493:c.instructions+=3;goto B6da493;
case 0x6da499:c.instructions+=2;goto B6da499;
case 0x6da49b:c.instructions+=1;goto B6da49b;
case 0x6da49d:goto L6da49d;
case 0x6da49e:c.instructions+=1;goto B6da49e;
case 0x6da4a0:goto L6da4a0;
case 0x6da4a1:c.instructions+=1;goto B6da4a1;
case 0x6da4b0:goto L6da4b0;
case 0x6da4b1:c.instructions+=2;goto B6da4b1;
case 0x6da4b3:c.instructions+=1;goto B6da4b3;
case 0x6da4b8:goto L6da4b8;
case 0x6da4ba:c.instructions+=1;goto B6da4ba;
case 0x6da4c0:goto L6da4c0;
case 0x6da4c5:c.instructions+=7;goto B6da4c5;
case 0x6da4c7:c.instructions+=6;goto B6da4c7;
case 0x6da4c9:c.instructions+=5;goto B6da4c9;
case 0x6da4cb:c.instructions+=4;goto B6da4cb;
case 0x6da4cd:c.instructions+=3;goto B6da4cd;
case 0x6da4cf:c.instructions+=2;goto B6da4cf;
case 0x6da4d0:c.instructions+=1;goto B6da4d0;
case 0x6da4d3:goto L6da4d3;
case 0x6da4d8:c.instructions+=1;goto B6da4d8;
case 0x6da4da:goto L6da4da;
case 0x6da4dd:c.instructions+=1;goto B6da4dd;
case 0x6da4e2:goto L6da4e2;
case 0x6da4e5:c.instructions+=9;goto B6da4e5;
case 0x6da4eb:c.instructions+=8;goto B6da4eb;
case 0x6da4ec:c.instructions+=7;goto B6da4ec;
case 0x6da4ed:c.instructions+=6;goto B6da4ed;
case 0x6da4ee:c.instructions+=5;goto B6da4ee;
case 0x6da4f0:c.instructions+=4;goto B6da4f0;
case 0x6da4f6:c.instructions+=3;goto B6da4f6;
case 0x6da4fc:c.instructions+=2;goto B6da4fc;
case 0x6da4fd:c.instructions+=1;goto B6da4fd;
case 0x6da500:goto L6da500;
case 0x6da501:c.instructions+=5;goto B6da501;
case 0x6da502:c.instructions+=4;goto B6da502;
case 0x6da503:c.instructions+=3;goto B6da503;
case 0x6da505:c.instructions+=2;goto B6da505;
case 0x6da506:c.instructions+=1;goto B6da506;
case 0x6da50b:goto L6da50b;
case 0x6da50c:c.instructions+=2;goto B6da50c;
case 0x6da50f:c.instructions+=1;goto B6da50f;
case 0x6da514:goto L6da514;
case 0x6da516:c.instructions+=6;goto B6da516;
case 0x6da519:c.instructions+=5;goto B6da519;
case 0x6da51c:c.instructions+=4;goto B6da51c;
case 0x6da521:c.instructions+=3;goto B6da521;
case 0x6da523:c.instructions+=2;goto B6da523;
case 0x6da526:c.instructions+=1;goto B6da526;
case 0x6da52b:goto L6da52b;
case 0x6da52d:goto L6da52d;
case 0x6da52f:c.instructions+=2;goto B6da52f;
case 0x6da532:c.instructions+=1;goto B6da532;
case 0x6da537:goto L6da537;
case 0x6da539:goto L6da539;
case 0x6da53b:c.instructions+=3;goto B6da53b;
case 0x6da53f:c.instructions+=2;goto B6da53f;
case 0x6da545:c.instructions+=1;goto B6da545;
case 0x6da54a:goto L6da54a;
case 0x6da54c:goto L6da54c;
case 0x6da54d:c.instructions+=5;goto B6da54d;
case 0x6da550:c.instructions+=4;goto B6da550;
case 0x6da551:c.instructions+=3;goto B6da551;
case 0x6da553:c.instructions+=2;goto B6da553;
case 0x6da554:c.instructions+=1;goto B6da554;
case 0x6da560:goto L6da560;
case 0x6da570:goto L6da570;
case 0x6da574:c.instructions+=7;goto B6da574;
case 0x6da576:c.instructions+=6;goto B6da576;
case 0x6da578:c.instructions+=5;goto B6da578;
case 0x6da57b:c.instructions+=4;goto B6da57b;
case 0x6da580:c.instructions+=3;goto B6da580;
case 0x6da583:c.instructions+=2;goto B6da583;
case 0x6da584:c.instructions+=1;goto B6da584;
case 0x6da586:goto L6da586;
case 0x6da589:c.instructions+=1;goto B6da589;
case 0x6da58b:goto L6da58b;
case 0x6da591:c.instructions+=2;goto B6da591;
case 0x6da593:c.instructions+=1;goto B6da593;
case 0x6da595:goto L6da595;
case 0x6da598:c.instructions+=1;goto B6da598;
case 0x6da59a:goto L6da59a;
case 0x6da59f:c.instructions+=4;goto B6da59f;
case 0x6da5a4:c.instructions+=3;goto B6da5a4;
case 0x6da5a6:c.instructions+=2;goto B6da5a6;
case 0x6da5a7:c.instructions+=1;goto B6da5a7;
case 0x6da5a8:goto L6da5a8;
case 0x6da5aa:c.instructions+=3;goto B6da5aa;
case 0x6da5b0:c.instructions+=2;goto B6da5b0;
case 0x6da5b6:c.instructions+=1;goto B6da5b6;
case 0x6da5b8:goto L6da5b8;
case 0x6da5be:c.instructions+=2;goto B6da5be;
case 0x6da5c0:c.instructions+=1;goto B6da5c0;
case 0x6da5c2:goto L6da5c2;
case 0x6da5c5:c.instructions+=1;goto B6da5c5;
case 0x6da5c7:goto L6da5c7;
case 0x6da5cc:c.instructions+=4;goto B6da5cc;
case 0x6da5d1:c.instructions+=3;goto B6da5d1;
case 0x6da5d3:c.instructions+=2;goto B6da5d3;
case 0x6da5d4:c.instructions+=1;goto B6da5d4;
case 0x6da5d5:goto L6da5d5;
case 0x6da5d7:c.instructions+=3;goto B6da5d7;
case 0x6da5dd:c.instructions+=2;goto B6da5dd;
case 0x6da5e3:c.instructions+=1;goto B6da5e3;
case 0x6da5e5:goto L6da5e5;
case 0x6da5e6:c.instructions+=6;goto B6da5e6;
case 0x6da5e8:c.instructions+=5;goto B6da5e8;
case 0x6da5ea:c.instructions+=4;goto B6da5ea;
case 0x6da5f0:c.instructions+=3;goto B6da5f0;
case 0x6da5f3:c.instructions+=2;goto B6da5f3;
case 0x6da5f5:c.instructions+=1;goto B6da5f5;
case 0x6da5f6:goto L6da5f6;
case 0x6da5f8:goto L6da5f8;
case 0x6da5fb:c.instructions+=1;goto B6da5fb;
case 0x6da5fd:goto L6da5fd;
case 0x6da600:c.instructions+=1;goto B6da600;
case 0x6da602:goto L6da602;
case 0x6da608:c.instructions+=3;goto B6da608;
case 0x6da60d:c.instructions+=2;goto B6da60d;
case 0x6da60f:c.instructions+=1;goto B6da60f;
case 0x6da611:goto L6da611;
case 0x6da614:c.instructions+=1;goto B6da614;
case 0x6da616:goto L6da616;
case 0x6da61b:c.instructions+=3;goto B6da61b;
case 0x6da61d:c.instructions+=2;goto B6da61d;
case 0x6da61e:c.instructions+=1;goto B6da61e;
case 0x6da61f:goto L6da61f;
case 0x6da624:c.instructions+=3;goto B6da624;
case 0x6da626:c.instructions+=2;goto B6da626;
case 0x6da627:c.instructions+=1;goto B6da627;
case 0x6da628:goto L6da628;
case 0x6da62e:c.instructions+=2;goto B6da62e;
case 0x6da630:c.instructions+=1;goto B6da630;
case 0x6da632:goto L6da632;
case 0x6da635:c.instructions+=1;goto B6da635;
case 0x6da637:goto L6da637;
case 0x6da63c:c.instructions+=3;goto B6da63c;
case 0x6da63e:c.instructions+=2;goto B6da63e;
case 0x6da63f:c.instructions+=1;goto B6da63f;
case 0x6da640:goto L6da640;
case 0x6da645:c.instructions+=3;goto B6da645;
case 0x6da647:c.instructions+=2;goto B6da647;
case 0x6da648:c.instructions+=1;goto B6da648;
case 0x6da649:goto L6da649;
case 0x6da64c:c.instructions+=2;goto B6da64c;
case 0x6da64e:c.instructions+=1;goto B6da64e;
case 0x6da650:goto L6da650;
case 0x6da651:c.instructions+=1;goto B6da651;
case 0x6da660:goto L6da660;
case 0x6da664:c.instructions+=5;goto B6da664;
case 0x6da665:c.instructions+=4;goto B6da665;
case 0x6da667:c.instructions+=3;goto B6da667;
case 0x6da669:c.instructions+=2;goto B6da669;
case 0x6da66a:c.instructions+=1;goto B6da66a;
case 0x6da66c:goto L6da66c;
case 0x6da670:c.instructions+=2;goto B6da670;
case 0x6da672:c.instructions+=1;goto B6da672;
case 0x6da674:goto L6da674;
case 0x6da676:c.instructions+=3;goto B6da676;
case 0x6da678:c.instructions+=2;goto B6da678;
case 0x6da67a:c.instructions+=1;goto B6da67a;
case 0x6da67c:goto L6da67c;
case 0x6da680:goto L6da680;
case 0x6da682:c.instructions+=5;goto B6da682;
case 0x6da684:c.instructions+=4;goto B6da684;
case 0x6da687:c.instructions+=3;goto B6da687;
case 0x6da68d:c.instructions+=2;goto B6da68d;
case 0x6da690:c.instructions+=1;goto B6da690;
case 0x6da692:goto L6da692;
case 0x6da695:c.instructions+=1;goto B6da695;
case 0x6da697:goto L6da697;
case 0x6da69a:c.instructions+=1;goto B6da69a;
case 0x6da69c:goto L6da69c;
case 0x6da69f:c.instructions+=1;goto B6da69f;
case 0x6da6a1:goto L6da6a1;
case 0x6da6a4:c.instructions+=1;goto B6da6a4;
case 0x6da6a6:goto L6da6a6;
case 0x6da6a9:c.instructions+=1;goto B6da6a9;
case 0x6da6ab:goto L6da6ab;
case 0x6da6ae:c.instructions+=1;goto B6da6ae;
case 0x6da6b0:goto L6da6b0;
case 0x6da6b3:c.instructions+=1;goto B6da6b3;
case 0x6da6b5:goto L6da6b5;
case 0x6da6b8:c.instructions+=1;goto B6da6b8;
case 0x6da6b9:goto L6da6b9;
case 0x6da6bb:c.instructions+=4;goto B6da6bb;
case 0x6da6bd:c.instructions+=3;goto B6da6bd;
case 0x6da6c3:c.instructions+=2;goto B6da6c3;
case 0x6da6c5:c.instructions+=1;goto B6da6c5;
case 0x6da6c7:goto L6da6c7;
case 0x6da6ca:goto L6da6ca;
case 0x6da6cc:c.instructions+=2;goto B6da6cc;
case 0x6da6cf:c.instructions+=1;goto B6da6cf;
case 0x6da6d1:goto L6da6d1;
case 0x6da6d2:c.instructions+=2;goto B6da6d2;
case 0x6da6d3:c.instructions+=1;goto B6da6d3;
case 0x6da6e0:goto L6da6e0;
case 0x6da6e4:c.instructions+=8;goto B6da6e4;
case 0x6da6e8:c.instructions+=7;goto B6da6e8;
case 0x6da6eb:c.instructions+=6;goto B6da6eb;
case 0x6da6ec:c.instructions+=5;goto B6da6ec;
case 0x6da6ed:c.instructions+=4;goto B6da6ed;
case 0x6da6f0:c.instructions+=3;goto B6da6f0;
case 0x6da6f1:c.instructions+=2;goto B6da6f1;
case 0x6da6f2:c.instructions+=1;goto B6da6f2;
case 0x6da6f7:goto L6da6f7;
case 0x6da6f9:c.instructions+=5;goto B6da6f9;
case 0x6da6fc:c.instructions+=4;goto B6da6fc;
case 0x6da6fe:c.instructions+=3;goto B6da6fe;
case 0x6da701:c.instructions+=2;goto B6da701;
case 0x6da703:c.instructions+=1;goto B6da703;
case 0x6da709:goto L6da709;
case 0x6da70a:c.instructions+=2;goto B6da70a;
case 0x6da70b:c.instructions+=1;goto B6da70b;
case 0x6da710:goto L6da710;
case 0x6da713:c.instructions+=7;goto B6da713;
case 0x6da715:c.instructions+=6;goto B6da715;
case 0x6da71a:c.instructions+=5;goto B6da71a;
case 0x6da71d:c.instructions+=4;goto B6da71d;
case 0x6da71e:c.instructions+=3;goto B6da71e;
case 0x6da722:c.instructions+=2;goto B6da722;
case 0x6da726:c.instructions+=1;goto B6da726;
case 0x6da72b:goto L6da72b;
case 0x6da72e:c.instructions+=2;goto B6da72e;
case 0x6da731:c.instructions+=1;goto B6da731;
case 0x6da733:goto L6da733;
case 0x6da736:c.instructions+=1;goto B6da736;
case 0x6da73c:goto L6da73c;
case 0x6da73f:c.instructions+=3;goto B6da73f;
case 0x6da741:c.instructions+=2;goto B6da741;
case 0x6da744:c.instructions+=1;goto B6da744;
case 0x6da74a:goto L6da74a;
case 0x6da750:goto L6da750;
case 0x6da752:c.instructions+=6;goto B6da752;
case 0x6da754:c.instructions+=5;goto B6da754;
case 0x6da757:c.instructions+=4;goto B6da757;
case 0x6da75c:c.instructions+=3;goto B6da75c;
case 0x6da75f:c.instructions+=2;goto B6da75f;
case 0x6da763:c.instructions+=1;goto B6da763;
case 0x6da765:goto L6da765;
case 0x6da768:c.instructions+=1;goto B6da768;
case 0x6da76e:goto L6da76e;
case 0x6da772:c.instructions+=1;goto B6da772;
case 0x6da778:goto L6da778;
case 0x6da77b:c.instructions+=5;goto B6da77b;
case 0x6da77f:c.instructions+=4;goto B6da77f;
case 0x6da780:c.instructions+=3;goto B6da780;
case 0x6da783:c.instructions+=2;goto B6da783;
case 0x6da787:c.instructions+=1;goto B6da787;
case 0x6da78c:goto L6da78c;
case 0x6da78f:c.instructions+=4;goto B6da78f;
case 0x6da792:c.instructions+=3;goto B6da792;
case 0x6da795:c.instructions+=2;goto B6da795;
case 0x6da798:c.instructions+=1;goto B6da798;
case 0x6da79d:goto L6da79d;
case 0x6da7a1:c.instructions+=1;goto B6da7a1;
case 0x6da7a7:goto L6da7a7;
case 0x6da7aa:c.instructions+=6;goto B6da7aa;
case 0x6da7ac:c.instructions+=5;goto B6da7ac;
case 0x6da7af:c.instructions+=4;goto B6da7af;
case 0x6da7b1:c.instructions+=3;goto B6da7b1;
case 0x6da7b4:c.instructions+=2;goto B6da7b4;
case 0x6da7b8:c.instructions+=1;goto B6da7b8;
case 0x6da7ba:goto L6da7ba;
case 0x6da7bc:goto L6da7bc;
case 0x6da7bf:c.instructions+=6;goto B6da7bf;
case 0x6da7c2:c.instructions+=5;goto B6da7c2;
case 0x6da7c6:c.instructions+=4;goto B6da7c6;
case 0x6da7c7:c.instructions+=3;goto B6da7c7;
case 0x6da7c8:c.instructions+=2;goto B6da7c8;
case 0x6da7cc:c.instructions+=1;goto B6da7cc;
case 0x6da7d1:goto L6da7d1;
case 0x6da7d4:c.instructions+=5;goto B6da7d4;
case 0x6da7d7:c.instructions+=4;goto B6da7d7;
case 0x6da7dc:c.instructions+=3;goto B6da7dc;
case 0x6da7df:c.instructions+=2;goto B6da7df;
case 0x6da7e1:c.instructions+=1;goto B6da7e1;
case 0x6da7e3:goto L6da7e3;
case 0x6da7e7:c.instructions+=2;goto B6da7e7;
case 0x6da7e9:c.instructions+=1;goto B6da7e9;
case 0x6da7eb:goto L6da7eb;
case 0x6da7ee:c.instructions+=6;goto B6da7ee;
case 0x6da7f2:c.instructions+=5;goto B6da7f2;
case 0x6da7f6:c.instructions+=4;goto B6da7f6;
case 0x6da7f8:c.instructions+=3;goto B6da7f8;
case 0x6da7f9:c.instructions+=2;goto B6da7f9;
case 0x6da7fd:c.instructions+=1;goto B6da7fd;
case 0x6da802:goto L6da802;
case 0x6da805:c.instructions+=2;goto B6da805;
case 0x6da808:c.instructions+=1;goto B6da808;
case 0x6da810:goto L6da810;
case 0x6da811:c.instructions+=2;goto B6da811;
case 0x6da813:c.instructions+=1;goto B6da813;
case 0x6da815:goto L6da815;
case 0x6da818:c.instructions+=3;goto B6da818;
case 0x6da81a:c.instructions+=2;goto B6da81a;
case 0x6da81b:c.instructions+=1;goto B6da81b;
case 0x6da821:goto L6da821;
case 0x6da825:c.instructions+=3;goto B6da825;
case 0x6da828:c.instructions+=2;goto B6da828;
case 0x6da82f:c.instructions+=1;goto B6da82f;
case 0x6da831:goto L6da831;
case 0x6da835:c.instructions+=4;goto B6da835;
case 0x6da838:c.instructions+=3;goto B6da838;
case 0x6da83a:c.instructions+=2;goto B6da83a;
case 0x6da83d:c.instructions+=1;goto B6da83d;
case 0x6da843:goto L6da843;
case 0x6da846:c.instructions+=1;goto B6da846;
case 0x6da848:goto L6da848;
case 0x6da84b:c.instructions+=1;goto B6da84b;
case 0x6da851:goto L6da851;
case 0x6da855:c.instructions+=1;goto B6da855;
case 0x6da85b:goto L6da85b;
case 0x6da85e:c.instructions+=5;goto B6da85e;
case 0x6da862:c.instructions+=4;goto B6da862;
case 0x6da863:c.instructions+=3;goto B6da863;
case 0x6da866:c.instructions+=2;goto B6da866;
case 0x6da86a:c.instructions+=1;goto B6da86a;
case 0x6da86f:goto L6da86f;
case 0x6da872:c.instructions+=4;goto B6da872;
case 0x6da875:c.instructions+=3;goto B6da875;
case 0x6da878:c.instructions+=2;goto B6da878;
case 0x6da87b:c.instructions+=1;goto B6da87b;
case 0x6da880:goto L6da880;
case 0x6da884:c.instructions+=1;goto B6da884;
case 0x6da88a:goto L6da88a;
case 0x6da88d:c.instructions+=6;goto B6da88d;
case 0x6da88f:c.instructions+=5;goto B6da88f;
case 0x6da892:c.instructions+=4;goto B6da892;
case 0x6da894:c.instructions+=3;goto B6da894;
case 0x6da897:c.instructions+=2;goto B6da897;
case 0x6da89b:c.instructions+=1;goto B6da89b;
case 0x6da89d:goto L6da89d;
case 0x6da89f:goto L6da89f;
case 0x6da8a2:c.instructions+=6;goto B6da8a2;
case 0x6da8a5:c.instructions+=5;goto B6da8a5;
case 0x6da8a9:c.instructions+=4;goto B6da8a9;
case 0x6da8aa:c.instructions+=3;goto B6da8aa;
case 0x6da8ab:c.instructions+=2;goto B6da8ab;
case 0x6da8af:c.instructions+=1;goto B6da8af;
case 0x6da8b4:goto L6da8b4;
case 0x6da8b7:c.instructions+=5;goto B6da8b7;
case 0x6da8bc:c.instructions+=4;goto B6da8bc;
case 0x6da8bf:c.instructions+=3;goto B6da8bf;
case 0x6da8c1:c.instructions+=2;goto B6da8c1;
case 0x6da8c4:c.instructions+=1;goto B6da8c4;
case 0x6da8c6:goto L6da8c6;
case 0x6da8ca:c.instructions+=2;goto B6da8ca;
case 0x6da8cc:c.instructions+=1;goto B6da8cc;
case 0x6da8ce:goto L6da8ce;
case 0x6da8d1:c.instructions+=6;goto B6da8d1;
case 0x6da8d5:c.instructions+=5;goto B6da8d5;
case 0x6da8d9:c.instructions+=4;goto B6da8d9;
case 0x6da8da:c.instructions+=3;goto B6da8da;
case 0x6da8db:c.instructions+=2;goto B6da8db;
case 0x6da8df:c.instructions+=1;goto B6da8df;
case 0x6da8e4:goto L6da8e4;
case 0x6da8e7:c.instructions+=2;goto B6da8e7;
case 0x6da8ea:c.instructions+=1;goto B6da8ea;
case 0x6da8ee:goto L6da8ee;
case 0x6da8ef:c.instructions+=2;goto B6da8ef;
case 0x6da8f1:c.instructions+=1;goto B6da8f1;
case 0x6da8f3:goto L6da8f3;
case 0x6da8f6:c.instructions+=3;goto B6da8f6;
case 0x6da8f8:c.instructions+=2;goto B6da8f8;
case 0x6da8f9:c.instructions+=1;goto B6da8f9;
case 0x6da8ff:goto L6da8ff;
case 0x6da902:c.instructions+=2;goto B6da902;
case 0x6da905:c.instructions+=1;goto B6da905;
case 0x6da907:goto L6da907;
case 0x6da90a:c.instructions+=1;goto B6da90a;
case 0x6da90c:goto L6da90c;
case 0x6da910:c.instructions+=1;goto B6da910;
case 0x6da912:goto L6da912;
case 0x6da915:c.instructions+=2;goto B6da915;
case 0x6da916:c.instructions+=1;goto B6da916;
case 0x6da91b:goto L6da91b;
case 0x6da91e:c.instructions+=1;goto B6da91e;
case 0x6da921:goto L6da921;
case 0x6da925:c.instructions+=4;goto B6da925;
case 0x6da929:c.instructions+=3;goto B6da929;
case 0x6da92b:c.instructions+=2;goto B6da92b;
case 0x6da92f:c.instructions+=1;goto B6da92f;
case 0x6da935:goto L6da935;
case 0x6da936:c.instructions+=1;goto B6da936;
case 0x6da937:goto L6da937;
case 0x6da938:c.instructions+=3;goto B6da938;
case 0x6da939:c.instructions+=2;goto B6da939;
case 0x6da93c:c.instructions+=1;goto B6da93c;
case 0x6da940:goto L6da940;
case 0x6da944:c.instructions+=8;goto B6da944;
case 0x6da948:c.instructions+=7;goto B6da948;
case 0x6da94b:c.instructions+=6;goto B6da94b;
case 0x6da94c:c.instructions+=5;goto B6da94c;
case 0x6da94d:c.instructions+=4;goto B6da94d;
case 0x6da950:c.instructions+=3;goto B6da950;
case 0x6da951:c.instructions+=2;goto B6da951;
case 0x6da952:c.instructions+=1;goto B6da952;
case 0x6da957:goto L6da957;
case 0x6da959:c.instructions+=5;goto B6da959;
case 0x6da95c:c.instructions+=4;goto B6da95c;
case 0x6da95e:c.instructions+=3;goto B6da95e;
case 0x6da961:c.instructions+=2;goto B6da961;
case 0x6da963:c.instructions+=1;goto B6da963;
case 0x6da969:goto L6da969;
case 0x6da96a:c.instructions+=2;goto B6da96a;
case 0x6da96b:c.instructions+=1;goto B6da96b;
case 0x6da970:goto L6da970;
case 0x6da973:c.instructions+=6;goto B6da973;
case 0x6da975:c.instructions+=5;goto B6da975;
case 0x6da978:c.instructions+=4;goto B6da978;
case 0x6da97d:c.instructions+=3;goto B6da97d;
case 0x6da980:c.instructions+=2;goto B6da980;
case 0x6da984:c.instructions+=1;goto B6da984;
case 0x6da986:goto L6da986;
case 0x6da989:c.instructions+=2;goto B6da989;
case 0x6da98b:c.instructions+=1;goto B6da98b;
case 0x6da98d:goto L6da98d;
case 0x6da990:c.instructions+=1;goto B6da990;
case 0x6da992:goto L6da992;
case 0x6da995:c.instructions+=2;goto B6da995;
case 0x6da997:c.instructions+=1;goto B6da997;
case 0x6da999:goto L6da999;
case 0x6da99b:c.instructions+=2;goto B6da99b;
case 0x6da99d:c.instructions+=1;goto B6da99d;
case 0x6da99f:goto L6da99f;
case 0x6da9a0:goto L6da9a0;
case 0x6da9a3:c.instructions+=6;goto B6da9a3;
case 0x6da9a7:c.instructions+=5;goto B6da9a7;
case 0x6da9ab:c.instructions+=4;goto B6da9ab;
case 0x6da9ac:c.instructions+=3;goto B6da9ac;
case 0x6da9ad:c.instructions+=2;goto B6da9ad;
case 0x6da9b1:c.instructions+=1;goto B6da9b1;
case 0x6da9b6:goto L6da9b6;
case 0x6da9b9:c.instructions+=3;goto B6da9b9;
case 0x6da9ba:c.instructions+=2;goto B6da9ba;
case 0x6da9bc:c.instructions+=1;goto B6da9bc;
case 0x6da9be:goto L6da9be;
case 0x6da9c0:goto L6da9c0;
case 0x6da9c3:c.instructions+=5;goto B6da9c3;
case 0x6da9c7:c.instructions+=4;goto B6da9c7;
case 0x6da9c8:c.instructions+=3;goto B6da9c8;
case 0x6da9c9:c.instructions+=2;goto B6da9c9;
case 0x6da9cd:c.instructions+=1;goto B6da9cd;
case 0x6da9d2:goto L6da9d2;
case 0x6da9d5:goto L6da9d5;
case 0x6da9d8:c.instructions+=3;goto B6da9d8;
case 0x6da9da:c.instructions+=2;goto B6da9da;
case 0x6da9db:c.instructions+=1;goto B6da9db;
case 0x6da9e1:goto L6da9e1;
case 0x6da9e4:goto L6da9e4;
case 0x6da9e7:c.instructions+=1;goto B6da9e7;
case 0x6da9ec:goto L6da9ec;
case 0x6da9ef:c.instructions+=1;goto B6da9ef;
case 0x6da9f1:goto L6da9f1;
case 0x6da9f4:c.instructions+=1;goto B6da9f4;
case 0x6da9f6:goto L6da9f6;
case 0x6da9f9:c.instructions+=5;goto B6da9f9;
case 0x6da9fd:c.instructions+=4;goto B6da9fd;
case 0x6da9fe:c.instructions+=3;goto B6da9fe;
case 0x6da9ff:c.instructions+=2;goto B6da9ff;
case 0x6daa03:c.instructions+=1;goto B6daa03;
case 0x6daa08:goto L6daa08;
case 0x6daa0b:c.instructions+=1;goto B6daa0b;
case 0x6daa12:goto L6daa12;
case 0x6daa15:c.instructions+=1;goto B6daa15;
case 0x6daa17:goto L6daa17;
case 0x6daa1a:c.instructions+=5;goto B6daa1a;
case 0x6daa1e:c.instructions+=4;goto B6daa1e;
case 0x6daa1f:c.instructions+=3;goto B6daa1f;
case 0x6daa23:c.instructions+=2;goto B6daa23;
case 0x6daa26:c.instructions+=1;goto B6daa26;
case 0x6daa2b:goto L6daa2b;
case 0x6daa2e:c.instructions+=5;goto B6daa2e;
case 0x6daa31:c.instructions+=4;goto B6daa31;
case 0x6daa33:c.instructions+=3;goto B6daa33;
case 0x6daa34:c.instructions+=2;goto B6daa34;
case 0x6daa35:c.instructions+=1;goto B6daa35;
case 0x6daa3b:goto L6daa3b;
case 0x6daa3e:c.instructions+=1;goto B6daa3e;
case 0x6daa43:goto L6daa43;
case 0x6daa46:c.instructions+=1;goto B6daa46;
case 0x6daa48:goto L6daa48;
case 0x6daa4c:c.instructions+=1;goto B6daa4c;
case 0x6daa52:goto L6daa52;
case 0x6daa55:c.instructions+=2;goto B6daa55;
case 0x6daa56:c.instructions+=1;goto B6daa56;
case 0x6daa5b:goto L6daa5b;
case 0x6daa5e:c.instructions+=1;goto B6daa5e;
case 0x6daa63:goto L6daa63;
case 0x6daa66:c.instructions+=1;goto B6daa66;
case 0x6daa68:goto L6daa68;
case 0x6daa6b:c.instructions+=1;goto B6daa6b;
case 0x6daa71:goto L6daa71;
case 0x6daa74:c.instructions+=3;goto B6daa74;
case 0x6daa76:c.instructions+=2;goto B6daa76;
case 0x6daa79:c.instructions+=1;goto B6daa79;
case 0x6daa7f:goto L6daa7f;
case 0x6daa80:goto L6daa80;
case 0x6daa82:c.instructions+=6;goto B6daa82;
case 0x6daa84:c.instructions+=5;goto B6daa84;
case 0x6daa87:c.instructions+=4;goto B6daa87;
case 0x6daa8c:c.instructions+=3;goto B6daa8c;
case 0x6daa8f:c.instructions+=2;goto B6daa8f;
case 0x6daa93:c.instructions+=1;goto B6daa93;
case 0x6daa95:goto L6daa95;
case 0x6daa98:c.instructions+=2;goto B6daa98;
case 0x6daa9a:c.instructions+=1;goto B6daa9a;
case 0x6daa9c:goto L6daa9c;
case 0x6daa9f:c.instructions+=1;goto B6daa9f;
case 0x6daaa1:goto L6daaa1;
case 0x6daaa4:c.instructions+=2;goto B6daaa4;
case 0x6daaa6:c.instructions+=1;goto B6daaa6;
case 0x6daaa8:goto L6daaa8;
case 0x6daaaa:c.instructions+=2;goto B6daaaa;
case 0x6daaac:c.instructions+=1;goto B6daaac;
case 0x6daaae:goto L6daaae;
case 0x6daab0:goto L6daab0;
case 0x6daab3:c.instructions+=6;goto B6daab3;
case 0x6daab7:c.instructions+=5;goto B6daab7;
case 0x6daabb:c.instructions+=4;goto B6daabb;
case 0x6daabd:c.instructions+=3;goto B6daabd;
case 0x6daabe:c.instructions+=2;goto B6daabe;
case 0x6daac2:c.instructions+=1;goto B6daac2;
case 0x6daac7:goto L6daac7;
case 0x6daaca:c.instructions+=3;goto B6daaca;
case 0x6daacb:c.instructions+=2;goto B6daacb;
case 0x6daacd:c.instructions+=1;goto B6daacd;
case 0x6daacf:goto L6daacf;
case 0x6daad1:goto L6daad1;
case 0x6daad4:c.instructions+=5;goto B6daad4;
case 0x6daad8:c.instructions+=4;goto B6daad8;
case 0x6daada:c.instructions+=3;goto B6daada;
case 0x6daadb:c.instructions+=2;goto B6daadb;
case 0x6daadf:c.instructions+=1;goto B6daadf;
case 0x6daae4:goto L6daae4;
case 0x6daae7:goto L6daae7;
case 0x6daaea:c.instructions+=3;goto B6daaea;
case 0x6daaec:c.instructions+=2;goto B6daaec;
case 0x6daaed:c.instructions+=1;goto B6daaed;
case 0x6daaf3:goto L6daaf3;
case 0x6daaf6:c.instructions+=1;goto B6daaf6;
case 0x6daaf8:goto L6daaf8;
case 0x6daafb:c.instructions+=1;goto B6daafb;
case 0x6daafd:goto L6daafd;
case 0x6dab00:c.instructions+=1;goto B6dab00;
case 0x6dab02:goto L6dab02;
case 0x6dab05:c.instructions+=1;goto B6dab05;
case 0x6dab07:goto L6dab07;
case 0x6dab0a:c.instructions+=5;goto B6dab0a;
case 0x6dab0e:c.instructions+=4;goto B6dab0e;
case 0x6dab0f:c.instructions+=3;goto B6dab0f;
case 0x6dab10:c.instructions+=2;goto B6dab10;
case 0x6dab14:c.instructions+=1;goto B6dab14;
case 0x6dab19:goto L6dab19;
case 0x6dab1c:c.instructions+=1;goto B6dab1c;
case 0x6dab23:goto L6dab23;
case 0x6dab26:c.instructions+=1;goto B6dab26;
case 0x6dab28:goto L6dab28;
case 0x6dab2b:c.instructions+=5;goto B6dab2b;
case 0x6dab2f:c.instructions+=4;goto B6dab2f;
case 0x6dab30:c.instructions+=3;goto B6dab30;
case 0x6dab34:c.instructions+=2;goto B6dab34;
case 0x6dab37:c.instructions+=1;goto B6dab37;
case 0x6dab3c:goto L6dab3c;
case 0x6dab3f:c.instructions+=5;goto B6dab3f;
case 0x6dab42:c.instructions+=4;goto B6dab42;
case 0x6dab44:c.instructions+=3;goto B6dab44;
case 0x6dab45:c.instructions+=2;goto B6dab45;
case 0x6dab46:c.instructions+=1;goto B6dab46;
case 0x6dab4c:goto L6dab4c;
case 0x6dab4f:goto L6dab4f;
case 0x6dab53:c.instructions+=4;goto B6dab53;
case 0x6dab56:c.instructions+=3;goto B6dab56;
case 0x6dab58:c.instructions+=2;goto B6dab58;
case 0x6dab5b:c.instructions+=1;goto B6dab5b;
case 0x6dab61:goto L6dab61;
case 0x6dab65:c.instructions+=3;goto B6dab65;
case 0x6dab69:c.instructions+=2;goto B6dab69;
case 0x6dab6c:c.instructions+=1;goto B6dab6c;
case 0x6dab72:goto L6dab72;
case 0x6dab73:c.instructions+=1;goto B6dab73;
case 0x6dab74:goto L6dab74;
case 0x6dab75:c.instructions+=3;goto B6dab75;
case 0x6dab76:c.instructions+=2;goto B6dab76;
case 0x6dab79:c.instructions+=1;goto B6dab79;
case 0x6dab80:goto L6dab80;
case 0x6dab84:c.instructions+=23;goto B6dab84;
case 0x6dab86:c.instructions+=22;goto B6dab86;
case 0x6dab8a:c.instructions+=21;goto B6dab8a;
case 0x6dab8d:c.instructions+=20;goto B6dab8d;
case 0x6dab91:c.instructions+=19;goto B6dab91;
case 0x6dab94:c.instructions+=18;goto B6dab94;
case 0x6dab98:c.instructions+=17;goto B6dab98;
case 0x6dab9b:c.instructions+=16;goto B6dab9b;
case 0x6dab9f:c.instructions+=15;goto B6dab9f;
case 0x6daba1:c.instructions+=14;goto B6daba1;
case 0x6daba3:c.instructions+=13;goto B6daba3;
case 0x6daba6:c.instructions+=12;goto B6daba6;
case 0x6dabaa:c.instructions+=11;goto B6dabaa;
case 0x6dabad:c.instructions+=10;goto B6dabad;
case 0x6dabb0:c.instructions+=9;goto B6dabb0;
case 0x6dabb3:c.instructions+=8;goto B6dabb3;
case 0x6dabb6:c.instructions+=7;goto B6dabb6;
case 0x6dabbd:c.instructions+=6;goto B6dabbd;
case 0x6dabc0:c.instructions+=5;goto B6dabc0;
case 0x6dabc3:c.instructions+=4;goto B6dabc3;
case 0x6dabc9:c.instructions+=3;goto B6dabc9;
case 0x6dabcc:c.instructions+=2;goto B6dabcc;
case 0x6dabd1:c.instructions+=1;goto B6dabd1;
case 0x6dabe0:goto L6dabe0;
case 0x6dabe3:c.instructions+=7;goto B6dabe3;
case 0x6dabe4:c.instructions+=6;goto B6dabe4;
case 0x6dabe8:c.instructions+=5;goto B6dabe8;
case 0x6dabeb:c.instructions+=4;goto B6dabeb;
case 0x6dabec:c.instructions+=3;goto B6dabec;
case 0x6dabed:c.instructions+=2;goto B6dabed;
case 0x6dabee:c.instructions+=1;goto B6dabee;
case 0x6dabf3:goto L6dabf3;
case 0x6dabf6:c.instructions+=3;goto B6dabf6;
case 0x6dabf8:c.instructions+=2;goto B6dabf8;
case 0x6dabfc:c.instructions+=1;goto B6dabfc;
case 0x6dac02:goto L6dac02;
case 0x6dac04:c.instructions+=3;goto B6dac04;
case 0x6dac06:c.instructions+=2;goto B6dac06;
case 0x6dac0a:c.instructions+=1;goto B6dac0a;
case 0x6dac10:goto L6dac10;
case 0x6dac13:goto L6dac13;
case 0x6dac16:c.instructions+=3;goto B6dac16;
case 0x6dac19:c.instructions+=2;goto B6dac19;
case 0x6dac1c:c.instructions+=1;goto B6dac1c;
case 0x6dac22:goto L6dac22;
case 0x6dac24:c.instructions+=6;goto B6dac24;
case 0x6dac26:c.instructions+=5;goto B6dac26;
case 0x6dac29:c.instructions+=4;goto B6dac29;
case 0x6dac2f:c.instructions+=3;goto B6dac2f;
case 0x6dac32:c.instructions+=2;goto B6dac32;
case 0x6dac36:c.instructions+=1;goto B6dac36;
case 0x6dac38:goto L6dac38;
case 0x6dac3b:c.instructions+=1;goto B6dac3b;
case 0x6dac41:goto L6dac41;
case 0x6dac44:c.instructions+=3;goto B6dac44;
case 0x6dac46:c.instructions+=2;goto B6dac46;
case 0x6dac4a:c.instructions+=1;goto B6dac4a;
case 0x6dac4c:goto L6dac4c;
case 0x6dac50:c.instructions+=3;goto B6dac50;
case 0x6dac52:c.instructions+=2;goto B6dac52;
case 0x6dac53:c.instructions+=1;goto B6dac53;
case 0x6dac58:goto L6dac58;
case 0x6dac5b:goto L6dac5b;
case 0x6dac5e:c.instructions+=5;goto B6dac5e;
case 0x6dac61:c.instructions+=4;goto B6dac61;
case 0x6dac64:c.instructions+=3;goto B6dac64;
case 0x6dac67:c.instructions+=2;goto B6dac67;
case 0x6dac6a:c.instructions+=1;goto B6dac6a;
case 0x6dac6f:goto L6dac6f;
case 0x6dac72:c.instructions+=1;goto B6dac72;
case 0x6dac74:goto L6dac74;
case 0x6dac77:c.instructions+=2;goto B6dac77;
case 0x6dac79:c.instructions+=1;goto B6dac79;
case 0x6dac7f:goto L6dac7f;
case 0x6dac83:c.instructions+=3;goto B6dac83;
case 0x6dac84:c.instructions+=2;goto B6dac84;
case 0x6dac88:c.instructions+=1;goto B6dac88;
case 0x6dac8d:goto L6dac8d;
case 0x6dac90:c.instructions+=3;goto B6dac90;
case 0x6dac93:c.instructions+=2;goto B6dac93;
case 0x6dac96:c.instructions+=1;goto B6dac96;
case 0x6dac98:goto L6dac98;
case 0x6dac9b:c.instructions+=1;goto B6dac9b;
case 0x6dac9d:goto L6dac9d;
case 0x6daca0:c.instructions+=1;goto B6daca0;
case 0x6daca2:goto L6daca2;
case 0x6daca5:c.instructions+=1;goto B6daca5;
case 0x6daca7:goto L6daca7;
case 0x6dacaa:c.instructions+=1;goto B6dacaa;
case 0x6dacac:goto L6dacac;
case 0x6dacaf:c.instructions+=3;goto B6dacaf;
case 0x6dacb1:c.instructions+=2;goto B6dacb1;
case 0x6dacb4:c.instructions+=1;goto B6dacb4;
case 0x6dacb6:goto L6dacb6;
case 0x6dacb8:c.instructions+=6;goto B6dacb8;
case 0x6dacba:c.instructions+=5;goto B6dacba;
case 0x6dacbd:c.instructions+=4;goto B6dacbd;
case 0x6dacc2:c.instructions+=3;goto B6dacc2;
case 0x6dacc5:c.instructions+=2;goto B6dacc5;
case 0x6dacc7:c.instructions+=1;goto B6dacc7;
case 0x6dacc9:goto L6dacc9;
case 0x6daccc:c.instructions+=1;goto B6daccc;
case 0x6dacce:goto L6dacce;
case 0x6dacd1:c.instructions+=3;goto B6dacd1;
case 0x6dacd3:c.instructions+=2;goto B6dacd3;
case 0x6dacd7:c.instructions+=1;goto B6dacd7;
case 0x6dacd9:goto L6dacd9;
case 0x6dacdd:c.instructions+=3;goto B6dacdd;
case 0x6dacdf:c.instructions+=2;goto B6dacdf;
case 0x6dace0:c.instructions+=1;goto B6dace0;
case 0x6dace5:goto L6dace5;
case 0x6dace8:goto L6dace8;
case 0x6daceb:c.instructions+=4;goto B6daceb;
case 0x6dacee:c.instructions+=3;goto B6dacee;
case 0x6dacf1:c.instructions+=2;goto B6dacf1;
case 0x6dacf4:c.instructions+=1;goto B6dacf4;
case 0x6dacf7:goto L6dacf7;
case 0x6dacfa:c.instructions+=3;goto B6dacfa;
case 0x6dacfc:c.instructions+=2;goto B6dacfc;
case 0x6dacff:c.instructions+=1;goto B6dacff;
case 0x6dad01:goto L6dad01;
case 0x6dad05:goto L6dad05;
case 0x6dad09:c.instructions+=3;goto B6dad09;
case 0x6dad0c:c.instructions+=2;goto B6dad0c;
case 0x6dad0f:c.instructions+=1;goto B6dad0f;
case 0x6dad15:goto L6dad15;
case 0x6dad19:c.instructions+=1;goto B6dad19;
case 0x6dad1d:goto L6dad1d;
case 0x6dad1e:c.instructions+=3;goto B6dad1e;
case 0x6dad20:c.instructions+=2;goto B6dad20;
case 0x6dad24:c.instructions+=1;goto B6dad24;
case 0x6dad2a:goto L6dad2a;
case 0x6dad2d:c.instructions+=3;goto B6dad2d;
case 0x6dad2f:c.instructions+=2;goto B6dad2f;
case 0x6dad34:c.instructions+=1;goto B6dad34;
case 0x6dad36:goto L6dad36;
case 0x6dad3b:goto L6dad3b;
case 0x6dad3d:goto L6dad3d;
case 0x6dad40:c.instructions+=2;goto B6dad40;
case 0x6dad42:c.instructions+=1;goto B6dad42;
case 0x6dad44:goto L6dad44;
case 0x6dad46:c.instructions+=2;goto B6dad46;
case 0x6dad48:c.instructions+=1;goto B6dad48;
case 0x6dad4a:goto L6dad4a;
case 0x6dad50:goto L6dad50;
case 0x6dad53:c.instructions+=2;goto B6dad53;
case 0x6dad54:c.instructions+=1;goto B6dad54;
case 0x6dad59:goto L6dad59;
case 0x6dad5c:c.instructions+=2;goto B6dad5c;
case 0x6dad5e:c.instructions+=1;goto B6dad5e;
case 0x6dad60:goto L6dad60;
case 0x6dad62:c.instructions+=2;goto B6dad62;
case 0x6dad63:c.instructions+=1;goto B6dad63;
case 0x6dad65:goto L6dad65;
case 0x6dad68:c.instructions+=2;goto B6dad68;
case 0x6dad69:c.instructions+=1;goto B6dad69;
case 0x6dad6e:goto L6dad6e;
case 0x6dad70:goto L6dad70;
case 0x6dad73:c.instructions+=2;goto B6dad73;
case 0x6dad74:c.instructions+=1;goto B6dad74;
case 0x6dad79:goto L6dad79;
case 0x6dad7c:goto L6dad7c;
case 0x6dad7d:c.instructions+=2;goto B6dad7d;
case 0x6dad7f:c.instructions+=1;goto B6dad7f;
case 0x6dad81:goto L6dad81;
case 0x6dad88:goto L6dad88;
case 0x6dad8a:c.instructions+=7;goto B6dad8a;
case 0x6dad8d:c.instructions+=6;goto B6dad8d;
case 0x6dad8f:c.instructions+=5;goto B6dad8f;
case 0x6dad91:c.instructions+=4;goto B6dad91;
case 0x6dad93:c.instructions+=3;goto B6dad93;
case 0x6dad94:c.instructions+=2;goto B6dad94;
case 0x6dad95:c.instructions+=1;goto B6dad95;
case 0x6dad9b:goto L6dad9b;
case 0x6dad9e:c.instructions+=5;goto B6dad9e;
case 0x6dada0:c.instructions+=4;goto B6dada0;
case 0x6dada3:c.instructions+=3;goto B6dada3;
case 0x6dada5:c.instructions+=2;goto B6dada5;
case 0x6dada7:c.instructions+=1;goto B6dada7;
case 0x6dada9:goto L6dada9;
case 0x6dadac:c.instructions+=4;goto B6dadac;
case 0x6dadaf:c.instructions+=3;goto B6dadaf;
case 0x6dadb0:c.instructions+=2;goto B6dadb0;
case 0x6dadb1:c.instructions+=1;goto B6dadb1;
case 0x6dadb7:goto L6dadb7;
case 0x6dadba:goto L6dadba;
case 0x6dadbb:c.instructions+=6;goto B6dadbb;
case 0x6dadbe:c.instructions+=5;goto B6dadbe;
case 0x6dadbf:c.instructions+=4;goto B6dadbf;
case 0x6dadc0:c.instructions+=3;goto B6dadc0;
case 0x6dadc1:c.instructions+=2;goto B6dadc1;
case 0x6dadc4:c.instructions+=1;goto B6dadc4;
case 0x6dadd0:goto L6dadd0;
case 0x6dadd1:c.instructions+=7;goto B6dadd1;
case 0x6dadd2:c.instructions+=6;goto B6dadd2;
case 0x6dadd6:c.instructions+=5;goto B6dadd6;
case 0x6dadd9:c.instructions+=4;goto B6dadd9;
case 0x6daddb:c.instructions+=3;goto B6daddb;
case 0x6daddd:c.instructions+=2;goto B6daddd;
case 0x6dadde:c.instructions+=1;goto B6dadde;
case 0x6dade0:goto L6dade0;
case 0x6dade1:c.instructions+=1;goto B6dade1;
case 0x6dade6:goto L6dade6;
case 0x6dade8:c.instructions+=2;goto B6dade8;
case 0x6dadeb:c.instructions+=1;goto B6dadeb;
case 0x6daded:goto L6daded;
case 0x6dadef:c.instructions+=2;goto B6dadef;
case 0x6dadf1:c.instructions+=1;goto B6dadf1;
case 0x6dadf3:goto L6dadf3;
case 0x6dadf6:c.instructions+=2;goto B6dadf6;
case 0x6dadf7:c.instructions+=1;goto B6dadf7;
case 0x6dadfc:goto L6dadfc;
case 0x6dadff:c.instructions+=1;goto B6dadff;
case 0x6dae01:goto L6dae01;
case 0x6dae03:c.instructions+=2;goto B6dae03;
case 0x6dae04:c.instructions+=1;goto B6dae04;
case 0x6dae06:goto L6dae06;
case 0x6dae09:c.instructions+=2;goto B6dae09;
case 0x6dae0a:c.instructions+=1;goto B6dae0a;
case 0x6dae0f:goto L6dae0f;
case 0x6dae11:goto L6dae11;
case 0x6dae14:c.instructions+=2;goto B6dae14;
case 0x6dae15:c.instructions+=1;goto B6dae15;
case 0x6dae1a:goto L6dae1a;
case 0x6dae1d:goto L6dae1d;
case 0x6dae1e:c.instructions+=2;goto B6dae1e;
case 0x6dae20:c.instructions+=1;goto B6dae20;
case 0x6dae22:goto L6dae22;
case 0x6dae25:goto L6dae25;
case 0x6dae26:goto L6dae26;
case 0x6dae29:c.instructions+=2;goto B6dae29;
case 0x6dae2b:c.instructions+=1;goto B6dae2b;
case 0x6dae2d:goto L6dae2d;
case 0x6dae30:c.instructions+=1;goto B6dae30;
case 0x6dae32:goto L6dae32;
case 0x6dae34:c.instructions+=1;goto B6dae34;
case 0x6dae39:goto L6dae39;
case 0x6dae3b:c.instructions+=2;goto B6dae3b;
case 0x6dae3c:c.instructions+=1;goto B6dae3c;
case 0x6dae42:goto L6dae42;
case 0x6dae45:c.instructions+=1;goto B6dae45;
case 0x6dae48:goto L6dae48;
case 0x6dae4b:c.instructions+=2;goto B6dae4b;
case 0x6dae4d:c.instructions+=1;goto B6dae4d;
case 0x6dae4f:goto L6dae4f;
case 0x6dae52:c.instructions+=4;goto B6dae52;
case 0x6dae55:c.instructions+=3;goto B6dae55;
case 0x6dae56:c.instructions+=2;goto B6dae56;
case 0x6dae57:c.instructions+=1;goto B6dae57;
case 0x6dae5d:goto L6dae5d;
case 0x6dae60:goto L6dae60;
case 0x6dae61:c.instructions+=4;goto B6dae61;
case 0x6dae64:c.instructions+=3;goto B6dae64;
case 0x6dae65:c.instructions+=2;goto B6dae65;
case 0x6dae66:c.instructions+=1;goto B6dae66;
case 0x6dae70:goto L6dae70;
case 0x6dae73:c.instructions+=2;goto B6dae73;
case 0x6dae75:c.instructions+=1;goto B6dae75;
case 0x6dae77:goto L6dae77;
case 0x6dae7a:c.instructions+=1;goto B6dae7a;
case 0x6dae7c:goto L6dae7c;
case 0x6dae7d:c.instructions+=1;goto B6dae7d;
case 0x6dae82:goto L6dae82;
case 0x6dae83:goto L6dae83;
case 0x6dae90:goto L6dae90;
case 0x6dae91:c.instructions+=6;goto B6dae91;
case 0x6dae93:c.instructions+=5;goto B6dae93;
case 0x6dae96:c.instructions+=4;goto B6dae96;
case 0x6dae98:c.instructions+=3;goto B6dae98;
case 0x6dae9b:c.instructions+=2;goto B6dae9b;
case 0x6daea2:c.instructions+=1;goto B6daea2;
case 0x6daea4:goto L6daea4;
case 0x6daeab:c.instructions+=7;goto B6daeab;
case 0x6daeb1:c.instructions+=6;goto B6daeb1;
case 0x6daeb3:c.instructions+=5;goto B6daeb3;
case 0x6daeb4:c.instructions+=4;goto B6daeb4;
case 0x6daeb6:c.instructions+=3;goto B6daeb6;
case 0x6daeb7:c.instructions+=2;goto B6daeb7;
case 0x6daeb8:c.instructions+=1;goto B6daeb8;
case 0x6daebe:goto L6daebe;
case 0x6daec1:c.instructions+=3;goto B6daec1;
case 0x6daec4:c.instructions+=2;goto B6daec4;
case 0x6daec7:c.instructions+=1;goto B6daec7;
case 0x6daec9:goto L6daec9;
case 0x6daecf:c.instructions+=4;goto B6daecf;
case 0x6daed1:c.instructions+=3;goto B6daed1;
case 0x6daed2:c.instructions+=2;goto B6daed2;
case 0x6daed3:c.instructions+=1;goto B6daed3;
case 0x6daed9:goto L6daed9;
case 0x6daedb:c.instructions+=3;goto B6daedb;
case 0x6daede:c.instructions+=2;goto B6daede;
case 0x6daee5:c.instructions+=1;goto B6daee5;
case 0x6daee7:goto L6daee7;
case 0x6daeee:c.instructions+=9;goto B6daeee;
case 0x6daef1:c.instructions+=8;goto B6daef1;
case 0x6daef6:c.instructions+=7;goto B6daef6;
case 0x6daef8:c.instructions+=6;goto B6daef8;
case 0x6daef9:c.instructions+=5;goto B6daef9;
case 0x6daefb:c.instructions+=4;goto B6daefb;
case 0x6daefd:c.instructions+=3;goto B6daefd;
case 0x6daefe:c.instructions+=2;goto B6daefe;
case 0x6daeff:c.instructions+=1;goto B6daeff;
case 0x6daf05:goto L6daf05;
case 0x6daf07:c.instructions+=3;goto B6daf07;
case 0x6daf0a:c.instructions+=2;goto B6daf0a;
case 0x6daf11:c.instructions+=1;goto B6daf11;
case 0x6daf13:goto L6daf13;
case 0x6daf1a:c.instructions+=9;goto B6daf1a;
case 0x6daf1d:c.instructions+=8;goto B6daf1d;
case 0x6daf22:c.instructions+=7;goto B6daf22;
case 0x6daf24:c.instructions+=6;goto B6daf24;
case 0x6daf25:c.instructions+=5;goto B6daf25;
case 0x6daf27:c.instructions+=4;goto B6daf27;
case 0x6daf29:c.instructions+=3;goto B6daf29;
case 0x6daf2a:c.instructions+=2;goto B6daf2a;
case 0x6daf2b:c.instructions+=1;goto B6daf2b;
case 0x6daf31:goto L6daf31;
case 0x6daf33:c.instructions+=3;goto B6daf33;
case 0x6daf36:c.instructions+=2;goto B6daf36;
case 0x6daf3d:c.instructions+=1;goto B6daf3d;
case 0x6daf3f:goto L6daf3f;
case 0x6daf46:c.instructions+=9;goto B6daf46;
case 0x6daf49:c.instructions+=8;goto B6daf49;
case 0x6daf4e:c.instructions+=7;goto B6daf4e;
case 0x6daf50:c.instructions+=6;goto B6daf50;
case 0x6daf51:c.instructions+=5;goto B6daf51;
case 0x6daf53:c.instructions+=4;goto B6daf53;
case 0x6daf55:c.instructions+=3;goto B6daf55;
case 0x6daf56:c.instructions+=2;goto B6daf56;
case 0x6daf57:c.instructions+=1;goto B6daf57;
case 0x6daf5d:goto L6daf5d;
case 0x6daf5f:c.instructions+=3;goto B6daf5f;
case 0x6daf62:c.instructions+=2;goto B6daf62;
case 0x6daf69:c.instructions+=1;goto B6daf69;
case 0x6daf6b:goto L6daf6b;
case 0x6daf72:c.instructions+=9;goto B6daf72;
case 0x6daf75:c.instructions+=8;goto B6daf75;
case 0x6daf7a:c.instructions+=7;goto B6daf7a;
case 0x6daf7c:c.instructions+=6;goto B6daf7c;
case 0x6daf7d:c.instructions+=5;goto B6daf7d;
case 0x6daf7f:c.instructions+=4;goto B6daf7f;
case 0x6daf81:c.instructions+=3;goto B6daf81;
case 0x6daf82:c.instructions+=2;goto B6daf82;
case 0x6daf83:c.instructions+=1;goto B6daf83;
case 0x6daf89:goto L6daf89;
case 0x6daf8e:c.instructions+=2;goto B6daf8e;
case 0x6daf91:c.instructions+=1;goto B6daf91;
case 0x6daf93:goto L6daf93;
case 0x6daf95:c.instructions+=2;goto B6daf95;
case 0x6daf9c:c.instructions+=1;goto B6daf9c;
case 0x6daf9e:goto L6daf9e;
case 0x6daf9f:c.instructions+=8;goto B6daf9f;
case 0x6dafa6:c.instructions+=7;goto B6dafa6;
case 0x6dafa8:c.instructions+=6;goto B6dafa8;
case 0x6dafae:c.instructions+=5;goto B6dafae;
case 0x6dafb0:c.instructions+=4;goto B6dafb0;
case 0x6dafb2:c.instructions+=3;goto B6dafb2;
case 0x6dafb3:c.instructions+=2;goto B6dafb3;
case 0x6dafb4:c.instructions+=1;goto B6dafb4;
case 0x6dafba:goto L6dafba;
case 0x6dafc0:c.instructions+=1;goto B6dafc0;
case 0x6dafc2:goto L6dafc2;
case 0x6dafc4:c.instructions+=3;goto B6dafc4;
case 0x6dafc7:c.instructions+=2;goto B6dafc7;
case 0x6dafce:c.instructions+=1;goto B6dafce;
case 0x6dafd0:goto L6dafd0;
case 0x6dafd7:c.instructions+=9;goto B6dafd7;
case 0x6dafda:c.instructions+=8;goto B6dafda;
case 0x6dafdf:c.instructions+=7;goto B6dafdf;
case 0x6dafe1:c.instructions+=6;goto B6dafe1;
case 0x6dafe2:c.instructions+=5;goto B6dafe2;
case 0x6dafe4:c.instructions+=4;goto B6dafe4;
case 0x6dafe6:c.instructions+=3;goto B6dafe6;
case 0x6dafe7:c.instructions+=2;goto B6dafe7;
case 0x6dafe8:c.instructions+=1;goto B6dafe8;
case 0x6dafee:goto L6dafee;
case 0x6daff1:goto L6daff1;
case 0x6daff6:c.instructions+=7;goto B6daff6;
case 0x6daff8:c.instructions+=6;goto B6daff8;
case 0x6daff9:c.instructions+=5;goto B6daff9;
case 0x6daffb:c.instructions+=4;goto B6daffb;
case 0x6daffd:c.instructions+=3;goto B6daffd;
case 0x6daffe:c.instructions+=2;goto B6daffe;
case 0x6dafff:c.instructions+=1;goto B6dafff;
default:missing_instruction(c.pc);}
B6da000:L6da000:{c.instructions+=1;NFSU2_TR(0x6da000);
if(r1(R+518)){{goto L6da01c;}}
}
B6da002:L6da002:{c.instructions+=4;NFSU2_TR(0x6da002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da005:{NFSU2_TR(0x6da005);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da00b:{NFSU2_TR(0x6da00b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da00e:{NFSU2_TR(0x6da00e);
if(r1(R+518)){{goto L6da01c;}}
}
B6da010:L6da010:{c.instructions+=2;NFSU2_TR(0x6da010);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6da013:{NFSU2_TR(0x6da013);
if(r1(R+518)){{goto L6da01c;}}
}
B6da015:L6da015:{c.instructions+=2;NFSU2_TR(0x6da015);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da016:{NFSU2_TR(0x6da016);
u8 U[4];
__builtin_memmove((U+0),gp(0x783368),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da01cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da01c:L6da01c:{c.instructions+=8;NFSU2_TR(0x6da01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da01f:{NFSU2_TR(0x6da01f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da025:{NFSU2_TR(0x6da025);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da027:{NFSU2_TR(0x6da027);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da028:{NFSU2_TR(0x6da028);
__builtin_memmove(gp(0x8a730c),(R+0),4);
}
B6da02d:{NFSU2_TR(0x6da02d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6da02f:{NFSU2_TR(0x6da02f);
w4(R+4,u32(0xdull));
}
B6da034:{NFSU2_TR(0x6da034);
w4(R+28,u32(0x8a732cull));
}
B6da039:L6da039:{c.instructions+=1;NFSU2_TR(0x6da039);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6da03b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da039u);}goto L6da039;}
}
B6da03b:L6da03b:{c.instructions+=6;NFSU2_TR(0x6da03b);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6da03f:{NFSU2_TR(0x6da03f);
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
B6da041:{NFSU2_TR(0x6da041);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6da045:{NFSU2_TR(0x6da045);
__builtin_memmove((R+4),(R+24),4);
}
B6da047:{NFSU2_TR(0x6da047);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da048:{NFSU2_TR(0x6da048);
if(r1(R+518)){{goto L6da051;}}
}
B6da04a:L6da04a:{c.instructions+=1;NFSU2_TR(0x6da04a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da04full));
TAIL_STATIC(0x6d96e0u,6d9);
}
B6da04f:L6da04f:{c.instructions+=1;NFSU2_TR(0x6da04f);
{goto L6da056;}
}
B6da051:L6da051:{c.instructions+=1;NFSU2_TR(0x6da051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da056ull));
TAIL_STATIC(0x6d89f0u,6d8);
}
B6da056:L6da056:{c.instructions+=13;NFSU2_TR(0x6da056);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da059:{NFSU2_TR(0x6da059);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da05c:{NFSU2_TR(0x6da05c);
__builtin_memmove(gp(0x8a7338),(R+8),4);
}
B6da062:{NFSU2_TR(0x6da062);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da065:{NFSU2_TR(0x6da065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da068:{NFSU2_TR(0x6da068);
__builtin_memmove(gp(0x8a732c),(R+4),4);
}
B6da06e:{NFSU2_TR(0x6da06e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da071:{NFSU2_TR(0x6da071);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da074:{NFSU2_TR(0x6da074);
__builtin_memmove(gp(0x8a7330),(R+0),4);
}
B6da079:{NFSU2_TR(0x6da079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da07c:{NFSU2_TR(0x6da07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da07f:{NFSU2_TR(0x6da07f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6da082:{NFSU2_TR(0x6da082);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6da0b9;}}
}
B6da084:L6da084:{c.instructions+=1;NFSU2_TR(0x6da084);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6da0fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da08b:L6da08b:{c.instructions+=2;NFSU2_TR(0x6da08b);
s4(0x8a7340,u32(0x1ull));
}
B6da095:{NFSU2_TR(0x6da095);
{goto L6da0b9;}
}
B6da097:L6da097:{c.instructions+=2;NFSU2_TR(0x6da097);
s4(0x8a7340,u32(0x2ull));
}
B6da0a1:{NFSU2_TR(0x6da0a1);
{goto L6da0b9;}
}
B6da0a3:L6da0a3:{c.instructions+=2;NFSU2_TR(0x6da0a3);
s4(0x8a7340,u32(0x3ull));
}
B6da0ad:{NFSU2_TR(0x6da0ad);
{goto L6da0b9;}
}
B6da0af:L6da0af:{c.instructions+=1;NFSU2_TR(0x6da0af);
s4(0x8a7340,u32(0x4ull));
}
B6da0b9:L6da0b9:{c.instructions+=7;NFSU2_TR(0x6da0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da0bc:{NFSU2_TR(0x6da0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da0bf:{NFSU2_TR(0x6da0bf);
__builtin_memmove(gp(0x8a733c),(R+0),4);
}
B6da0c4:{NFSU2_TR(0x6da0c4);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6da0c9:{NFSU2_TR(0x6da0c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da0cb:{NFSU2_TR(0x6da0cb);
__builtin_memmove((R+4),(R+24),4);
}
B6da0cd:{NFSU2_TR(0x6da0cd);
if(r1(R+518)){{goto L6da0d6;}}
}
B6da0cf:L6da0cf:{c.instructions+=1;NFSU2_TR(0x6da0cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da0d4ull));
TAIL_STATIC(0x6d97b0u,6d9);
}
B6da0d4:L6da0d4:{c.instructions+=1;NFSU2_TR(0x6da0d4);
{goto L6da0dc;}
}
B6da0d6:L6da0d6:{c.instructions+=2;NFSU2_TR(0x6da0d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da0d7:{NFSU2_TR(0x6da0d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da0dcull));
TAIL_STATIC(0x6d9b90u,6d9);
}
B6da0dc:L6da0dc:{c.instructions+=3;NFSU2_TR(0x6da0dc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6da0de:{NFSU2_TR(0x6da0de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da0df:{NFSU2_TR(0x6da0df);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6da0f3;}}
}
B6da0e1:L6da0e1:{c.instructions+=3;NFSU2_TR(0x6da0e1);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6da0e6:{NFSU2_TR(0x6da0e6);
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
B6da0e8:{NFSU2_TR(0x6da0e8);
if(r1(R+518)){{goto L6da0f3;}}
}
B6da0ea:L6da0ea:{c.instructions+=3;NFSU2_TR(0x6da0ea);
w4(R+0,u32(0x1ull));
}
B6da0ef:{NFSU2_TR(0x6da0ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da0f0:{NFSU2_TR(0x6da0f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da0f3:L6da0f3:{c.instructions+=3;NFSU2_TR(0x6da0f3);
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
B6da0f5:{NFSU2_TR(0x6da0f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da0f6:{NFSU2_TR(0x6da0f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da110:L6da110:{c.instructions+=6;NFSU2_TR(0x6da110);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x34ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da113:{NFSU2_TR(0x6da113);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da114:{NFSU2_TR(0x6da114);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da115:{NFSU2_TR(0x6da115);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da116:{NFSU2_TR(0x6da116);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da117:{NFSU2_TR(0x6da117);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da11cull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6da11c:L6da11c:{c.instructions+=2;NFSU2_TR(0x6da11c);
__builtin_memmove((R+4),(R+0),4);
}
B6da11e:{NFSU2_TR(0x6da11e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da123ull));
TAIL_STATIC(0x6d8200u,6d8);
}
B6da123:L6da123:{c.instructions+=16;NFSU2_TR(0x6da123);
__builtin_memmove((R+20),(R+0),4);
}
B6da125:{NFSU2_TR(0x6da125);
w4(R+0,u32(0x10ull));
}
B6da12a:{NFSU2_TR(0x6da12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da12d:{NFSU2_TR(0x6da12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da130:{NFSU2_TR(0x6da130);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da133:{NFSU2_TR(0x6da133);
__builtin_memmove((R+0),gp(0x783320),4);
}
B6da138:{NFSU2_TR(0x6da138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
w4(U+4,u32(0x280ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da13f:{NFSU2_TR(0x6da13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x50ull))));
w4(U+4,u32(0x1e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da146:{NFSU2_TR(0x6da146);
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
B6da148:{NFSU2_TR(0x6da148);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da149:{NFSU2_TR(0x6da149);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da151:{NFSU2_TR(0x6da151);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da159:{NFSU2_TR(0x6da159);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da15d:{NFSU2_TR(0x6da15d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da161:{NFSU2_TR(0x6da161);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da165:{NFSU2_TR(0x6da165);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da16bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da16b:L6da16b:{c.instructions+=10;NFSU2_TR(0x6da16b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6da16f:{NFSU2_TR(0x6da16f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da170:{NFSU2_TR(0x6da170);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da174:{NFSU2_TR(0x6da174);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da178:{NFSU2_TR(0x6da178);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da17c:{NFSU2_TR(0x6da17c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da180:{NFSU2_TR(0x6da180);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da184:{NFSU2_TR(0x6da184);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x7c08bcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da18c:{NFSU2_TR(0x6da18c);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da190:{NFSU2_TR(0x6da190);
u8 U[4];
__builtin_memmove((U+0),gp(0x783340),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da196ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da196:L6da196:{c.instructions+=4;NFSU2_TR(0x6da196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B6da199:{NFSU2_TR(0x6da199);
w4(R+4,u32(0xcull));
}
B6da19e:{NFSU2_TR(0x6da19e);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B6da1a2:{NFSU2_TR(0x6da1a2);
__builtin_memmove((R+28),(R+16),4);
}
B6da1a4:L6da1a4:{c.instructions+=1;NFSU2_TR(0x6da1a4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6da1a6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da1a4u);}goto L6da1a4;}
}
B6da1a6:L6da1a6:{c.instructions+=1;NFSU2_TR(0x6da1a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da1abull));
TAIL_STATIC(0x6d9040u,6d9);
}
B6da1ab:L6da1ab:{c.instructions+=11;NFSU2_TR(0x6da1ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da1af:{NFSU2_TR(0x6da1af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da1b2:{NFSU2_TR(0x6da1b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da1b6:{NFSU2_TR(0x6da1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da1bc:{NFSU2_TR(0x6da1bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6da1c0:{NFSU2_TR(0x6da1c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B6da1c3:{NFSU2_TR(0x6da1c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6da1c6:{NFSU2_TR(0x6da1c6);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6da1c8:{NFSU2_TR(0x6da1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da1cb:{NFSU2_TR(0x6da1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da1d1:{NFSU2_TR(0x6da1d1);
if(r1(R+518)){{goto L6da1f1;}}
}
B6da1d3:L6da1d3:{c.instructions+=2;NFSU2_TR(0x6da1d3);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da1d6:{NFSU2_TR(0x6da1d6);
if(r1(R+518)){{goto L6da1de;}}
}
B6da1d8:L6da1d8:{c.instructions+=1;NFSU2_TR(0x6da1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da1de:L6da1de:{c.instructions+=5;NFSU2_TR(0x6da1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da1e1:{NFSU2_TR(0x6da1e1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da1e3:{NFSU2_TR(0x6da1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc4ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da1ed:{NFSU2_TR(0x6da1ed);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da1ef:{NFSU2_TR(0x6da1ef);
{goto L6da20c;}
}
B6da1f1:L6da1f1:{c.instructions+=2;NFSU2_TR(0x6da1f1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da1f4:{NFSU2_TR(0x6da1f4);
if(r1(R+518)){{goto L6da1fc;}}
}
B6da1f6:L6da1f6:{c.instructions+=1;NFSU2_TR(0x6da1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da1fc:L6da1fc:{c.instructions+=4;NFSU2_TR(0x6da1fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da1ff:{NFSU2_TR(0x6da1ff);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da201:{NFSU2_TR(0x6da201);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da20b:{NFSU2_TR(0x6da20b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da20c:L6da20c:{c.instructions+=1;NFSU2_TR(0x6da20c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da211ull));
TAIL_STATIC(0x6d9fd0u,6d9);
}
B6da211:L6da211:{c.instructions+=2;NFSU2_TR(0x6da211);
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
B6da213:{NFSU2_TR(0x6da213);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6da21f;}}
}
B6da215:L6da215:{c.instructions+=7;NFSU2_TR(0x6da215);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6da217:{NFSU2_TR(0x6da217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da218:{NFSU2_TR(0x6da218);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da219:{NFSU2_TR(0x6da219);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da21a:{NFSU2_TR(0x6da21a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da21b:{NFSU2_TR(0x6da21b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da21e:{NFSU2_TR(0x6da21e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da21f:L6da21f:{c.instructions+=2;NFSU2_TR(0x6da21f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da220:{NFSU2_TR(0x6da220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da225ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6da225:L6da225:{c.instructions+=2;NFSU2_TR(0x6da225);
__builtin_memmove((R+4),(R+0),4);
}
B6da227:{NFSU2_TR(0x6da227);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da22cull));
TAIL_STATIC(0x6d8240u,6d8);
}
B6da22c:L6da22c:{c.instructions+=3;NFSU2_TR(0x6da22c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da230:{NFSU2_TR(0x6da230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da231:{NFSU2_TR(0x6da231);
u8 U[4];
__builtin_memmove((U+0),gp(0x783368),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da237ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da237:L6da237:{c.instructions+=5;NFSU2_TR(0x6da237);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da23b:{NFSU2_TR(0x6da23b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da23f:{NFSU2_TR(0x6da23f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da240:{NFSU2_TR(0x6da240);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da241:{NFSU2_TR(0x6da241);
u8 U[4];
__builtin_memmove((U+0),gp(0x783390),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da247ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da247:L6da247:{c.instructions+=7;NFSU2_TR(0x6da247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da248:{NFSU2_TR(0x6da248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da249:{NFSU2_TR(0x6da249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da24a:{NFSU2_TR(0x6da24a);
w1(R+0,u8(0x1ull));
}
B6da24c:{NFSU2_TR(0x6da24c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da24d:{NFSU2_TR(0x6da24d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da250:{NFSU2_TR(0x6da250);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da260:L6da260:{c.instructions+=8;NFSU2_TR(0x6da260);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da261:{NFSU2_TR(0x6da261);
__builtin_memmove((R+20),(R+16),4);
}
B6da263:{NFSU2_TR(0x6da263);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B6da266:{NFSU2_TR(0x6da266);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x188ull))));
}
B6da26c:{NFSU2_TR(0x6da26c);
u8 U[14];
__builtin_memmove((U+6),gp(0x80c09c),4);
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
B6da273:{NFSU2_TR(0x6da273);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da274:{NFSU2_TR(0x6da274);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da275:{NFSU2_TR(0x6da275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da2d9;}}
}
B6da277:L6da277:{c.instructions+=5;NFSU2_TR(0x6da277);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da279:{NFSU2_TR(0x6da279);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da27d:{NFSU2_TR(0x6da27d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da27e:{NFSU2_TR(0x6da27e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da280:{NFSU2_TR(0x6da280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da285ull));
TAIL_STATIC(0x770d1cu,770);
}
B6da285:L6da285:{c.instructions+=2;NFSU2_TR(0x6da285);
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
B6da287:{NFSU2_TR(0x6da287);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6da2cf;}}
}
B6da289:L6da289:{c.instructions+=4;NFSU2_TR(0x6da289);
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
B6da28b:{NFSU2_TR(0x6da28b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da28d:{NFSU2_TR(0x6da28d);
w4(R+4,u32(0x5full));
}
B6da292:{NFSU2_TR(0x6da292);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B6da296:L6da296:{c.instructions+=1;NFSU2_TR(0x6da296);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6da298;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da296u);}goto L6da296;}
}
B6da298:L6da298:{c.instructions+=7;NFSU2_TR(0x6da298);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da29c:{NFSU2_TR(0x6da29c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6da2a0:{NFSU2_TR(0x6da2a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da2a1:{NFSU2_TR(0x6da2a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x17cull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da2a9:{NFSU2_TR(0x6da2a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6da2ab:{NFSU2_TR(0x6da2ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da2ac:{NFSU2_TR(0x6da2ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da2afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da2af:L6da2af:{c.instructions+=11;NFSU2_TR(0x6da2af);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da2b3:{NFSU2_TR(0x6da2b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6da2b5:{NFSU2_TR(0x6da2b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6da2b7:{NFSU2_TR(0x6da2b7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da2bb:{NFSU2_TR(0x6da2bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B6da2be:{NFSU2_TR(0x6da2be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da2bf:{NFSU2_TR(0x6da2bf);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6da2c0:{NFSU2_TR(0x6da2c0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da2c2:{NFSU2_TR(0x6da2c2);
__builtin_memmove(gp(0x80c09c),(R+4),4);
}
B6da2c8:{NFSU2_TR(0x6da2c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6da2ca:{NFSU2_TR(0x6da2ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da2cdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da2cd:L6da2cd:{c.instructions+=1;NFSU2_TR(0x6da2cd);
{goto L6da2d9;}
}
B6da2cf:L6da2cf:{c.instructions+=1;NFSU2_TR(0x6da2cf);
s4(0x80c09c,u32(0x0ull));
}
B6da2d9:L6da2d9:{c.instructions+=1;NFSU2_TR(0x6da2d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da2deull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6da2de:L6da2de:{c.instructions+=2;NFSU2_TR(0x6da2de);
__builtin_memmove((R+4),(R+0),4);
}
B6da2e0:{NFSU2_TR(0x6da2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da2e5ull));
TAIL_STATIC(0x6d87f0u,6d8);
}
B6da2e5:L6da2e5:{c.instructions+=5;NFSU2_TR(0x6da2e5);
__builtin_memmove((R+4),gp(0x8a79b0),4);
}
B6da2eb:{NFSU2_TR(0x6da2eb);
__builtin_memmove((R+12),(R+0),1);
}
B6da2ed:{NFSU2_TR(0x6da2ed);
__builtin_memmove((R+0),gp(0x8a79b4),4);
}
B6da2f2:{NFSU2_TR(0x6da2f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da2f4:{NFSU2_TR(0x6da2f4);
if(r1(R+518)){{goto L6da2fa;}}
}
B6da2f6:L6da2f6:{c.instructions+=2;NFSU2_TR(0x6da2f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da2f8:{NFSU2_TR(0x6da2f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da334;}}
}
B6da2fa:L6da2fa:{c.instructions+=2;NFSU2_TR(0x6da2fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da2fc:{NFSU2_TR(0x6da2fc);
if(r1(R+518)){{goto L6da306;}}
}
B6da2fe:L6da2fe:{c.instructions+=2;NFSU2_TR(0x6da2fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da300:{NFSU2_TR(0x6da300);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da334;}}
}
B6da302:L6da302:{c.instructions+=2;NFSU2_TR(0x6da302);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da304:{NFSU2_TR(0x6da304);
{goto L6da30b;}
}
B6da306:L6da306:{c.instructions+=2;NFSU2_TR(0x6da306);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da308:{NFSU2_TR(0x6da308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da33c;}}
}
B6da30a:L6da30a:{c.instructions+=1;NFSU2_TR(0x6da30a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da30b:L6da30b:{c.instructions+=1;NFSU2_TR(0x6da30b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da310ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da110u);}goto L6da110;}
}
B6da310:L6da310:{c.instructions+=3;NFSU2_TR(0x6da310);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6da313:{NFSU2_TR(0x6da313);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da315:{NFSU2_TR(0x6da315);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da329;}}
}
B6da317:L6da317:{c.instructions+=7;NFSU2_TR(0x6da317);
s4(0x8a7bdc,u32(0x0ull));
}
B6da321:{NFSU2_TR(0x6da321);
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
B6da323:{NFSU2_TR(0x6da323);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da324:{NFSU2_TR(0x6da324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da325:{NFSU2_TR(0x6da325);
__builtin_memmove((R+16),(R+20),4);
}
B6da327:{NFSU2_TR(0x6da327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da328:{NFSU2_TR(0x6da328);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da329:L6da329:{c.instructions+=2;NFSU2_TR(0x6da329);
__builtin_memmove((R+0),gp(0x8a79b4),4);
}
B6da32e:{NFSU2_TR(0x6da32e);
__builtin_memmove((R+4),gp(0x8a79b0),4);
}
B6da334:L6da334:{c.instructions+=2;NFSU2_TR(0x6da334);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da336:{NFSU2_TR(0x6da336);
if(r1(R+518)){{goto L6da33c;}}
}
B6da338:L6da338:{c.instructions+=2;NFSU2_TR(0x6da338);
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
B6da33a:{NFSU2_TR(0x6da33a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da38b;}}
}
B6da33c:L6da33c:{c.instructions+=3;NFSU2_TR(0x6da33c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6da341:{NFSU2_TR(0x6da341);
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
B6da343:{NFSU2_TR(0x6da343);
if(r1(R+518)){{goto L6da3ac;}}
}
B6da345:L6da345:{c.instructions+=1;NFSU2_TR(0x6da345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da34aull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6da34a:L6da34a:{c.instructions+=2;NFSU2_TR(0x6da34a);
__builtin_memmove((R+4),(R+0),4);
}
B6da34c:{NFSU2_TR(0x6da34c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da351ull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6da351:L6da351:{c.instructions+=2;NFSU2_TR(0x6da351);
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
B6da353:{NFSU2_TR(0x6da353);
if(r1(R+518)){{goto L6da3a6;}}
}
B6da355:L6da355:{c.instructions+=2;NFSU2_TR(0x6da355);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6da357:{NFSU2_TR(0x6da357);
if(r1(R+518)){{goto L6da362;}}
}
B6da359:L6da359:{c.instructions+=3;NFSU2_TR(0x6da359);
__builtin_memmove((R+0),gp(0x8a79b4),4);
}
B6da35e:{NFSU2_TR(0x6da35e);
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
B6da360:{NFSU2_TR(0x6da360);
if(r1(R+518)){{goto L6da3a6;}}
}
B6da362:L6da362:{c.instructions+=1;NFSU2_TR(0x6da362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da367ull));
TAIL_STATIC(0x6d81f0u,6d8);
}
B6da367:L6da367:{c.instructions+=2;NFSU2_TR(0x6da367);
__builtin_memmove((R+4),(R+0),4);
}
B6da369:{NFSU2_TR(0x6da369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da36eull));
TAIL_STATIC(0x6d8190u,6d8);
}
B6da36e:L6da36e:{c.instructions+=5;NFSU2_TR(0x6da36e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B6da371:{NFSU2_TR(0x6da371);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da374:{NFSU2_TR(0x6da374);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da37a:{NFSU2_TR(0x6da37a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B6da37d:{NFSU2_TR(0x6da37d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da317u);}goto L6da317;}}
}
B6da37f:L6da37f:{c.instructions+=1;NFSU2_TR(0x6da37f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6da3bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da386:L6da386:{c.instructions+=1;NFSU2_TR(0x6da386);
__builtin_memmove((R+0),gp(0x8a79b0),4);
}
B6da38b:L6da38b:{c.instructions+=6;NFSU2_TR(0x6da38b);
__builtin_memmove(gp(0x8a7bdc),(R+0),4);
}
B6da390:{NFSU2_TR(0x6da390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da391:{NFSU2_TR(0x6da391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da392:{NFSU2_TR(0x6da392);
__builtin_memmove((R+16),(R+20),4);
}
B6da394:{NFSU2_TR(0x6da394);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da395:{NFSU2_TR(0x6da395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da396:L6da396:{c.instructions+=7;NFSU2_TR(0x6da396);
__builtin_memmove((R+0),gp(0x8a79b4),4);
}
B6da39b:{NFSU2_TR(0x6da39b);
__builtin_memmove(gp(0x8a7bdc),(R+0),4);
}
B6da3a0:{NFSU2_TR(0x6da3a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da3a1:{NFSU2_TR(0x6da3a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da3a2:{NFSU2_TR(0x6da3a2);
__builtin_memmove((R+16),(R+20),4);
}
B6da3a4:{NFSU2_TR(0x6da3a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da3a5:{NFSU2_TR(0x6da3a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da3a6:L6da3a6:{c.instructions+=1;NFSU2_TR(0x6da3a6);
__builtin_memmove((R+4),gp(0x8a79b0),4);
}
B6da3ac:L6da3ac:{c.instructions+=7;NFSU2_TR(0x6da3ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da3ad:{NFSU2_TR(0x6da3ad);
__builtin_memmove(gp(0x8a7bdc),(R+4),4);
}
B6da3b3:{NFSU2_TR(0x6da3b3);
__builtin_memmove((R+0),(R+4),4);
}
B6da3b5:{NFSU2_TR(0x6da3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da3b6:{NFSU2_TR(0x6da3b6);
__builtin_memmove((R+16),(R+20),4);
}
B6da3b8:{NFSU2_TR(0x6da3b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da3b9:{NFSU2_TR(0x6da3b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da3d0:L6da3d0:{c.instructions+=6;NFSU2_TR(0x6da3d0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6da3d5:{NFSU2_TR(0x6da3d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da3d6:{NFSU2_TR(0x6da3d6);
__builtin_memmove((R+24),(R+4),4);
}
B6da3d8:{NFSU2_TR(0x6da3d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6da3da:{NFSU2_TR(0x6da3da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da3db:{NFSU2_TR(0x6da3db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da3deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da3de:L6da3de:{c.instructions+=2;NFSU2_TR(0x6da3de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88760868ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da3e3:{NFSU2_TR(0x6da3e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da445;}}
}
B6da3e5:L6da3e5:{c.instructions+=7;NFSU2_TR(0x6da3e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da3e6:{NFSU2_TR(0x6da3e6);
__builtin_memmove((R+12),gp(0x783334),4);
}
B6da3ec:{NFSU2_TR(0x6da3ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da3ed:{NFSU2_TR(0x6da3ed);
__builtin_memmove((R+20),gp(0x78332c),4);
}
B6da3f3:{NFSU2_TR(0x6da3f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da3f4:{NFSU2_TR(0x6da3f4);
__builtin_memmove((R+28),gp(0x783330),4);
}
B6da3fa:{NFSU2_TR(0x6da3fa);
__builtin_memmove((R+12),(R+12),4);
}
B6da400:L6da400:{c.instructions+=4;NFSU2_TR(0x6da400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da403:{NFSU2_TR(0x6da403);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da409:{NFSU2_TR(0x6da409);
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
B6da40b:{NFSU2_TR(0x6da40b);
if(r1(R+518)){{goto L6da40f;}}
}
B6da40d:L6da40d:{c.instructions+=1;NFSU2_TR(0x6da40d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da40full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da40f:L6da40f:{c.instructions+=6;NFSU2_TR(0x6da40f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da411:{NFSU2_TR(0x6da411);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da413:{NFSU2_TR(0x6da413);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da415:{NFSU2_TR(0x6da415);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da417:{NFSU2_TR(0x6da417);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da41c:{NFSU2_TR(0x6da41c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da41eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da41e:L6da41e:{c.instructions+=2;NFSU2_TR(0x6da41e);
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
B6da420:{NFSU2_TR(0x6da420);
if(r1(R+518)){{goto L6da430;}}
}
B6da422:L6da422:{c.instructions+=2;NFSU2_TR(0x6da422);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da427:{NFSU2_TR(0x6da427);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da429ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da429:L6da429:{c.instructions+=2;NFSU2_TR(0x6da429);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da42e:{NFSU2_TR(0x6da42e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da430ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da430:L6da430:{c.instructions+=4;NFSU2_TR(0x6da430);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6da435:{NFSU2_TR(0x6da435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6da437:{NFSU2_TR(0x6da437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da438:{NFSU2_TR(0x6da438);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da43bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da43b:L6da43b:{c.instructions+=2;NFSU2_TR(0x6da43b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x88760868ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da440:{NFSU2_TR(0x6da440);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da400u);}goto L6da400;}}
}
B6da442:L6da442:{c.instructions+=3;NFSU2_TR(0x6da442);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da443:{NFSU2_TR(0x6da443);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da444:{NFSU2_TR(0x6da444);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da445:L6da445:{c.instructions+=2;NFSU2_TR(0x6da445);
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
B6da447:{NFSU2_TR(0x6da447);
if(r1(R+518)){{goto L6da4a0;}}
}
B6da449:L6da449:{c.instructions+=3;NFSU2_TR(0x6da449);
__builtin_memmove((R+4),(R+24),4);
}
B6da44b:{NFSU2_TR(0x6da44b);
s4(0x80c08c,u32(0xffffffffull));
}
B6da455:{NFSU2_TR(0x6da455);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da45aull));
TAIL_STATIC(0x6d97b0u,6d9);
}
B6da45a:L6da45a:{c.instructions+=2;NFSU2_TR(0x6da45a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6da45c:{NFSU2_TR(0x6da45c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6da46d;}}
}
B6da45e:L6da45e:{c.instructions+=4;NFSU2_TR(0x6da45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da461:{NFSU2_TR(0x6da461);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da467:{NFSU2_TR(0x6da467);
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
B6da469:{NFSU2_TR(0x6da469);
if(r1(R+518)){{goto L6da46d;}}
}
B6da46b:L6da46b:{c.instructions+=1;NFSU2_TR(0x6da46b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da46dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da46d:L6da46d:{c.instructions+=1;NFSU2_TR(0x6da46d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da472ull));
TAIL_STATIC(0x6db0e0u,6db);
}
B6da472:L6da472:{c.instructions+=1;NFSU2_TR(0x6da472);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da477ull));
TAIL_STATIC(0x6db6c0u,6db);
}
B6da477:L6da477:{c.instructions+=1;NFSU2_TR(0x6da477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da47cull));
TAIL_STATIC(0x6dc250u,6dc);
}
B6da47c:L6da47c:{c.instructions+=1;NFSU2_TR(0x6da47c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da481ull));
TAIL_STATIC(0x6ddb00u,6dd);
}
B6da481:L6da481:{c.instructions+=1;NFSU2_TR(0x6da481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da486ull));
TAIL_STATIC(0x6dc090u,6dc);
}
B6da486:L6da486:{c.instructions+=5;NFSU2_TR(0x6da486);
s4(0x8a71b0,u32(0x0ull));
}
B6da490:{NFSU2_TR(0x6da490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da493:{NFSU2_TR(0x6da493);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da499:{NFSU2_TR(0x6da499);
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
B6da49b:{NFSU2_TR(0x6da49b);
if(r1(R+518)){{goto L6da4a0;}}
}
B6da49d:L6da49d:{c.instructions+=2;NFSU2_TR(0x6da49d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da49e:{NFSU2_TR(0x6da49e);
{u32 t_=u32(r4(R+0));TAIL_DYNAMIC(t_);}
}
B6da4a0:L6da4a0:{c.instructions+=2;NFSU2_TR(0x6da4a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da4a1:{NFSU2_TR(0x6da4a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da4b0:L6da4b0:{c.instructions+=3;NFSU2_TR(0x6da4b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4b1:{NFSU2_TR(0x6da4b1);
__builtin_memmove((R+24),(R+4),4);
}
B6da4b3:{NFSU2_TR(0x6da4b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da4b8ull));
TAIL_STATIC(0x6de780u,6de);
}
B6da4b8:L6da4b8:{c.instructions+=2;NFSU2_TR(0x6da4b8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4ba:{NFSU2_TR(0x6da4ba);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da4c0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da4c0:L6da4c0:{c.instructions+=8;NFSU2_TR(0x6da4c0);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6da4c5:{NFSU2_TR(0x6da4c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6da4c7:{NFSU2_TR(0x6da4c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4c9:{NFSU2_TR(0x6da4c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4cb:{NFSU2_TR(0x6da4cb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4cd:{NFSU2_TR(0x6da4cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4cf:{NFSU2_TR(0x6da4cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da4d0:{NFSU2_TR(0x6da4d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da4d3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6da4d3:L6da4d3:{c.instructions+=2;NFSU2_TR(0x6da4d3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x88760868ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x88760868ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x88760868ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da4d8:{NFSU2_TR(0x6da4d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da4e2;}}
}
B6da4da:L6da4da:{c.instructions+=2;NFSU2_TR(0x6da4da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6da4dd:{NFSU2_TR(0x6da4dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da4e2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da3d0u);}goto L6da3d0;}
}
B6da4e2:L6da4e2:{c.instructions+=10;NFSU2_TR(0x6da4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da4e5:{NFSU2_TR(0x6da4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da4eb:{NFSU2_TR(0x6da4eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6da4ec:{NFSU2_TR(0x6da4ec);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6da4ed:{NFSU2_TR(0x6da4ed);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B6da4ee:{NFSU2_TR(0x6da4ee);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6da4ee);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x6da4ee);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B6da4f0:{NFSU2_TR(0x6da4f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da4f6:{NFSU2_TR(0x6da4f6);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x8a71b0),u32(0x1ull)));
s4(0x8a71b0,u32(u32(m4(0x8a71b0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x8a71b0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a71b0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a71b0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da4fc:{NFSU2_TR(0x6da4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da4fd:{NFSU2_TR(0x6da4fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da500:L6da500:{c.instructions+=6;NFSU2_TR(0x6da500);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da501:{NFSU2_TR(0x6da501);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da502:{NFSU2_TR(0x6da502);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da503:{NFSU2_TR(0x6da503);
__builtin_memmove((R+12),(R+4),4);
}
B6da505:{NFSU2_TR(0x6da505);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da506:{NFSU2_TR(0x6da506);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da50bull));
TAIL_STATIC(0x6e16f0u,6e1);
}
B6da50b:L6da50b:{c.instructions+=3;NFSU2_TR(0x6da50b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da50c:{NFSU2_TR(0x6da50c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6da50f:{NFSU2_TR(0x6da50f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da514ull));
TAIL_STATIC(0x6e1700u,6e1);
}
B6da514:L6da514:{c.instructions+=7;NFSU2_TR(0x6da514);
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
B6da516:{NFSU2_TR(0x6da516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da519:{NFSU2_TR(0x6da519);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da51c:{NFSU2_TR(0x6da51c);
__builtin_memmove((R+0),gp(0x80c138),4);
}
B6da521:{NFSU2_TR(0x6da521);
__builtin_memmove((R+24),(R+0),4);
}
B6da523:{NFSU2_TR(0x6da523);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da526:{NFSU2_TR(0x6da526);
w4(R+4,u32(0x10ull));
}
B6da52b:L6da52b:{c.instructions+=1;NFSU2_TR(0x6da52b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6da52d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da52bu);}goto L6da52b;}
}
B6da52d:L6da52d:{c.instructions+=3;NFSU2_TR(0x6da52d);
__builtin_memmove((R+24),(R+0),4);
}
B6da52f:{NFSU2_TR(0x6da52f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x70ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da532:{NFSU2_TR(0x6da532);
w4(R+4,u32(0x10ull));
}
B6da537:L6da537:{c.instructions+=1;NFSU2_TR(0x6da537);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6da539;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da537u);}goto L6da537;}
}
B6da539:L6da539:{c.instructions+=4;NFSU2_TR(0x6da539);
__builtin_memmove((R+24),(R+0),4);
}
B6da53b:{NFSU2_TR(0x6da53b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da53f:{NFSU2_TR(0x6da53f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da545:{NFSU2_TR(0x6da545);
w4(R+4,u32(0x10ull));
}
B6da54a:L6da54a:{c.instructions+=1;NFSU2_TR(0x6da54a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6da54c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da54au);}goto L6da54a;}
}
B6da54c:L6da54c:{c.instructions+=6;NFSU2_TR(0x6da54c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da54d:{NFSU2_TR(0x6da54d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da550:{NFSU2_TR(0x6da550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da551:{NFSU2_TR(0x6da551);
__builtin_memmove((R+0),(R+12),4);
}
B6da553:{NFSU2_TR(0x6da553);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da554:{NFSU2_TR(0x6da554);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da560:L6da560:{c.instructions+=1;NFSU2_TR(0x6da560);
TAIL_STATIC(0x4022c0u,402);
}
B6da570:L6da570:{c.instructions+=8;NFSU2_TR(0x6da570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da574:{NFSU2_TR(0x6da574);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da576:{NFSU2_TR(0x6da576);
__builtin_memmove((R+4),(R+0),4);
}
B6da578:{NFSU2_TR(0x6da578);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6da57b:{NFSU2_TR(0x6da57b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da580:{NFSU2_TR(0x6da580);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da583:{NFSU2_TR(0x6da583);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da584:{NFSU2_TR(0x6da584);
if(r1(R+518)){{goto L6da58b;}}
}
B6da586:L6da586:{c.instructions+=2;NFSU2_TR(0x6da586);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da589:{NFSU2_TR(0x6da589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da5f8;}}
}
B6da58b:L6da58b:{c.instructions+=3;NFSU2_TR(0x6da58b);
__builtin_memmove((R+24),gp(0x81cb38),4);
}
B6da591:{NFSU2_TR(0x6da591);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da593:{NFSU2_TR(0x6da593);
if(r1(R+518)){{goto L6da5b8;}}
}
B6da595:L6da595:{c.instructions+=2;NFSU2_TR(0x6da595);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da598:{NFSU2_TR(0x6da598);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da5a8;}}
}
B6da59a:L6da59a:{c.instructions+=5;NFSU2_TR(0x6da59a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da59f:{NFSU2_TR(0x6da59f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x170000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da5a4:{NFSU2_TR(0x6da5a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da5a6:{NFSU2_TR(0x6da5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da5a7:{NFSU2_TR(0x6da5a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da5a8:L6da5a8:{c.instructions+=4;NFSU2_TR(0x6da5a8);
__builtin_memmove((R+24),(R+0),4);
}
B6da5aa:{NFSU2_TR(0x6da5aa);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B6da5b0:{NFSU2_TR(0x6da5b0);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x140000ull))));
}
B6da5b6:{NFSU2_TR(0x6da5b6);
{goto L6da5f6;}
}
B6da5b8:L6da5b8:{c.instructions+=3;NFSU2_TR(0x6da5b8);
__builtin_memmove((R+24),gp(0x81cb54),4);
}
B6da5be:{NFSU2_TR(0x6da5be);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da5c0:{NFSU2_TR(0x6da5c0);
if(r1(R+518)){{goto L6da5e5;}}
}
B6da5c2:L6da5c2:{c.instructions+=2;NFSU2_TR(0x6da5c2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x16ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da5c5:{NFSU2_TR(0x6da5c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da5d5;}}
}
B6da5c7:L6da5c7:{c.instructions+=5;NFSU2_TR(0x6da5c7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da5cc:{NFSU2_TR(0x6da5cc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x180000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da5d1:{NFSU2_TR(0x6da5d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da5d3:{NFSU2_TR(0x6da5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da5d4:{NFSU2_TR(0x6da5d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da5d5:L6da5d5:{c.instructions+=4;NFSU2_TR(0x6da5d5);
__builtin_memmove((R+24),(R+0),4);
}
B6da5d7:{NFSU2_TR(0x6da5d7);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xffffull))));
}
B6da5dd:{NFSU2_TR(0x6da5dd);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0x150000ull))));
}
B6da5e3:{NFSU2_TR(0x6da5e3);
{goto L6da5f6;}
}
B6da5e5:L6da5e5:{c.instructions+=7;NFSU2_TR(0x6da5e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da5e6:{NFSU2_TR(0x6da5e6);
__builtin_memmove((R+24),(R+4),4);
}
B6da5e8:{NFSU2_TR(0x6da5e8);
__builtin_memmove((R+28),(R+0),4);
}
B6da5ea:{NFSU2_TR(0x6da5ea);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffull))));
}
B6da5f0:{NFSU2_TR(0x6da5f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6da5f3:{NFSU2_TR(0x6da5f3);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+28))));
}
B6da5f5:{NFSU2_TR(0x6da5f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da5f6:L6da5f6:{c.instructions+=1;NFSU2_TR(0x6da5f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da5f8:L6da5f8:{c.instructions+=2;NFSU2_TR(0x6da5f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x25ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da5fb:{NFSU2_TR(0x6da5fb);
if(r1(R+518)){{goto L6da602;}}
}
B6da5fd:L6da5fd:{c.instructions+=2;NFSU2_TR(0x6da5fd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da600:{NFSU2_TR(0x6da600);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da650;}}
}
B6da602:L6da602:{c.instructions+=4;NFSU2_TR(0x6da602);
__builtin_memmove((R+24),gp(0x81cb38),4);
}
B6da608:{NFSU2_TR(0x6da608);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da60d:{NFSU2_TR(0x6da60d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da60f:{NFSU2_TR(0x6da60f);
if(r1(R+518)){{goto L6da628;}}
}
B6da611:L6da611:{c.instructions+=2;NFSU2_TR(0x6da611);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da614:{NFSU2_TR(0x6da614);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da61f;}}
}
B6da616:L6da616:{c.instructions+=4;NFSU2_TR(0x6da616);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x290000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da61b:{NFSU2_TR(0x6da61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da61d:{NFSU2_TR(0x6da61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da61e:{NFSU2_TR(0x6da61e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da61f:L6da61f:{c.instructions+=4;NFSU2_TR(0x6da61f);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x260000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da624:{NFSU2_TR(0x6da624);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da626:{NFSU2_TR(0x6da626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da627:{NFSU2_TR(0x6da627);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da628:L6da628:{c.instructions+=3;NFSU2_TR(0x6da628);
__builtin_memmove((R+24),gp(0x81cb54),4);
}
B6da62e:{NFSU2_TR(0x6da62e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da630:{NFSU2_TR(0x6da630);
if(r1(R+518)){{goto L6da649;}}
}
B6da632:L6da632:{c.instructions+=2;NFSU2_TR(0x6da632);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x28ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da635:{NFSU2_TR(0x6da635);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da640;}}
}
B6da637:L6da637:{c.instructions+=4;NFSU2_TR(0x6da637);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2a0000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da63c:{NFSU2_TR(0x6da63c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da63e:{NFSU2_TR(0x6da63e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da63f:{NFSU2_TR(0x6da63f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da640:L6da640:{c.instructions+=4;NFSU2_TR(0x6da640);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x270000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da645:{NFSU2_TR(0x6da645);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da647:{NFSU2_TR(0x6da647);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da648:{NFSU2_TR(0x6da648);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da649:L6da649:{c.instructions+=3;NFSU2_TR(0x6da649);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6da64c:{NFSU2_TR(0x6da64c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6da64e:{NFSU2_TR(0x6da64e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6da650:L6da650:{c.instructions+=2;NFSU2_TR(0x6da650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da651:{NFSU2_TR(0x6da651);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da660:L6da660:{c.instructions+=6;NFSU2_TR(0x6da660);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da664:{NFSU2_TR(0x6da664);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da665:{NFSU2_TR(0x6da665);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6da667:{NFSU2_TR(0x6da667);
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
B6da669:{NFSU2_TR(0x6da669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da66a:{NFSU2_TR(0x6da66a);
if(r1(R+518)){{goto L6da6d1;}}
}
B6da66c:L6da66c:{c.instructions+=3;NFSU2_TR(0x6da66c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6da670:{NFSU2_TR(0x6da670);
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
B6da672:{NFSU2_TR(0x6da672);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6da6d1;}}
}
B6da674:L6da674:{c.instructions+=4;NFSU2_TR(0x6da674);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6da676:{NFSU2_TR(0x6da676);
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
B6da678:{NFSU2_TR(0x6da678);
__builtin_memmove((R+0),(R+4),4);
}
B6da67a:{NFSU2_TR(0x6da67a);
if(r1(R+518)){{goto L6da6d1;}}
}
B6da67c:L6da67c:{c.instructions+=1;NFSU2_TR(0x6da67c);
__builtin_memmove((R+16),(R+16),4);
}
B6da680:L6da680:{c.instructions+=6;NFSU2_TR(0x6da680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6da682:{NFSU2_TR(0x6da682);
__builtin_memmove((R+8),(R+4),4);
}
B6da684:{NFSU2_TR(0x6da684);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6da687:{NFSU2_TR(0x6da687);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffffull))));
}
B6da68d:{NFSU2_TR(0x6da68d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da690:{NFSU2_TR(0x6da690);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da692:L6da692:{c.instructions+=2;NFSU2_TR(0x6da692);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da695:{NFSU2_TR(0x6da695);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da697:L6da697:{c.instructions+=2;NFSU2_TR(0x6da697);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da69a:{NFSU2_TR(0x6da69a);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da69c:L6da69c:{c.instructions+=2;NFSU2_TR(0x6da69c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da69f:{NFSU2_TR(0x6da69f);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da6a1:L6da6a1:{c.instructions+=2;NFSU2_TR(0x6da6a1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da6a4:{NFSU2_TR(0x6da6a4);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da6a6:L6da6a6:{c.instructions+=2;NFSU2_TR(0x6da6a6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da6a9:{NFSU2_TR(0x6da6a9);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da6ab:L6da6ab:{c.instructions+=2;NFSU2_TR(0x6da6ab);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da6ae:{NFSU2_TR(0x6da6ae);
if(r1(R+518)){{goto L6da6b5;}}
}
B6da6b0:L6da6b0:{c.instructions+=2;NFSU2_TR(0x6da6b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da6b3:{NFSU2_TR(0x6da6b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da6b9;}}
}
B6da6b5:L6da6b5:{c.instructions+=2;NFSU2_TR(0x6da6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6da6b8:{NFSU2_TR(0x6da6b8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6da6b9:L6da6b9:{c.instructions+=5;NFSU2_TR(0x6da6b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6da6bb:{NFSU2_TR(0x6da6bb);
__builtin_memmove((R+4),(R+8),4);
}
B6da6bd:{NFSU2_TR(0x6da6bd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6da6c3:{NFSU2_TR(0x6da6c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6da6c5:{NFSU2_TR(0x6da6c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da6ca;}}
}
B6da6c7:L6da6c7:{c.instructions+=1;NFSU2_TR(0x6da6c7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6da6ca:L6da6ca:{c.instructions+=3;NFSU2_TR(0x6da6ca);
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
B6da6cc:{NFSU2_TR(0x6da6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6da6cf:{NFSU2_TR(0x6da6cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da680u);}goto L6da680;}}
}
B6da6d1:L6da6d1:{c.instructions+=3;NFSU2_TR(0x6da6d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da6d2:{NFSU2_TR(0x6da6d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da6d3:{NFSU2_TR(0x6da6d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da6e0:L6da6e0:{c.instructions+=9;NFSU2_TR(0x6da6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da6e4:{NFSU2_TR(0x6da6e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da6e8:{NFSU2_TR(0x6da6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6da6eb:{NFSU2_TR(0x6da6eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da6ec:{NFSU2_TR(0x6da6ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da6ed:{NFSU2_TR(0x6da6ed);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6da6f0:{NFSU2_TR(0x6da6f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da6f1:{NFSU2_TR(0x6da6f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da6f2:{NFSU2_TR(0x6da6f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da6f7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da660u);}goto L6da660;}
}
B6da6f7:L6da6f7:{c.instructions+=6;NFSU2_TR(0x6da6f7);
__builtin_memmove((R+20),(R+0),4);
}
B6da6f9:{NFSU2_TR(0x6da6f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da6fc:{NFSU2_TR(0x6da6fc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6da6fe:{NFSU2_TR(0x6da6fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da701:{NFSU2_TR(0x6da701);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da703:{NFSU2_TR(0x6da703);
if(r1(R+518)){{goto L6da937;}}
}
B6da709:L6da709:{c.instructions+=3;NFSU2_TR(0x6da709);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da70a:{NFSU2_TR(0x6da70a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da70b:{NFSU2_TR(0x6da70b);
{goto L6da710;}
}
B6da710:L6da710:{c.instructions+=8;NFSU2_TR(0x6da710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da713:{NFSU2_TR(0x6da713);
__builtin_memmove((R+12),(R+0),4);
}
B6da715:{NFSU2_TR(0x6da715);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da71a:{NFSU2_TR(0x6da71a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B6da71d:{NFSU2_TR(0x6da71d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da71e:{NFSU2_TR(0x6da71e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da722:{NFSU2_TR(0x6da722);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da726:{NFSU2_TR(0x6da726);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da72bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da570u);}goto L6da570;}
}
B6da72b:L6da72b:{c.instructions+=3;NFSU2_TR(0x6da72b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6da72e:{NFSU2_TR(0x6da72e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da731:{NFSU2_TR(0x6da731);
if(r1(R+518)){{goto L6da73c;}}
}
B6da733:L6da733:{c.instructions+=2;NFSU2_TR(0x6da733);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da736:{NFSU2_TR(0x6da736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da843;}}
}
B6da73c:L6da73c:{c.instructions+=4;NFSU2_TR(0x6da73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da73f:{NFSU2_TR(0x6da73f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da741:{NFSU2_TR(0x6da741);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da744:{NFSU2_TR(0x6da744);
if(r1(R+518)){{goto L6da843;}}
}
B6da74a:L6da74a:{c.instructions+=1;NFSU2_TR(0x6da74a);
__builtin_memmove((R+12),(R+12),4);
}
B6da750:L6da750:{c.instructions+=7;NFSU2_TR(0x6da750);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da752:{NFSU2_TR(0x6da752);
__builtin_memmove((R+4),(R+0),4);
}
B6da754:{NFSU2_TR(0x6da754);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6da757:{NFSU2_TR(0x6da757);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da75c:{NFSU2_TR(0x6da75c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da75f:{NFSU2_TR(0x6da75f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da763:{NFSU2_TR(0x6da763);
if(r1(R+518)){{goto L6da79d;}}
}
B6da765:L6da765:{c.instructions+=2;NFSU2_TR(0x6da765);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da768:{NFSU2_TR(0x6da768);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da831;}}
}
B6da76e:L6da76e:{c.instructions+=2;NFSU2_TR(0x6da76e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6da772:{NFSU2_TR(0x6da772);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da831;}}
}
B6da778:L6da778:{c.instructions+=6;NFSU2_TR(0x6da778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da77b:{NFSU2_TR(0x6da77b);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da77f:{NFSU2_TR(0x6da77f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da780:{NFSU2_TR(0x6da780);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da783:{NFSU2_TR(0x6da783);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da787:{NFSU2_TR(0x6da787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da78cull));
TAIL_STATIC(0x6dc5f0u,6dc);
}
B6da78c:L6da78c:{c.instructions+=5;NFSU2_TR(0x6da78c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6da78f:{NFSU2_TR(0x6da78f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6da792:{NFSU2_TR(0x6da792);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da795:{NFSU2_TR(0x6da795);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da798:{NFSU2_TR(0x6da798);
{goto L6da831;}
}
B6da79d:L6da79d:{c.instructions+=2;NFSU2_TR(0x6da79d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6da7a1:{NFSU2_TR(0x6da7a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da831;}}
}
B6da7a7:L6da7a7:{c.instructions+=7;NFSU2_TR(0x6da7a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6da7aa:{NFSU2_TR(0x6da7aa);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da7ac:{NFSU2_TR(0x6da7ac);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B6da7af:{NFSU2_TR(0x6da7af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da7b1:{NFSU2_TR(0x6da7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da7b4:{NFSU2_TR(0x6da7b4);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6da7b8:{NFSU2_TR(0x6da7b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da7bc;}}
}
B6da7ba:L6da7ba:{c.instructions+=1;NFSU2_TR(0x6da7ba);
w4(R+12,u32(0-u32(r4(R+12))));
}
B6da7bc:L6da7bc:{c.instructions+=7;NFSU2_TR(0x6da7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da7bf:{NFSU2_TR(0x6da7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da7c2:{NFSU2_TR(0x6da7c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da7c6:{NFSU2_TR(0x6da7c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da7c7:{NFSU2_TR(0x6da7c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da7c8:{NFSU2_TR(0x6da7c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da7cc:{NFSU2_TR(0x6da7cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da7d1ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6da7d1:L6da7d1:{c.instructions+=6;NFSU2_TR(0x6da7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da7d4:{NFSU2_TR(0x6da7d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da7d7:{NFSU2_TR(0x6da7d7);
w4(R+28,u32(0x1ull));
}
B6da7dc:{NFSU2_TR(0x6da7dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da7df:{NFSU2_TR(0x6da7df);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6da7e1:{NFSU2_TR(0x6da7e1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6da815;}}
}
B6da7e3:L6da7e3:{c.instructions+=3;NFSU2_TR(0x6da7e3);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6da7e7:{NFSU2_TR(0x6da7e7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da7e9:{NFSU2_TR(0x6da7e9);
if(r1(R+518)){{goto L6da810;}}
}
B6da7eb:L6da7eb:{c.instructions+=7;NFSU2_TR(0x6da7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da7ee:{NFSU2_TR(0x6da7ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6da7f2:{NFSU2_TR(0x6da7f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6da7f6:{NFSU2_TR(0x6da7f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da7f8:{NFSU2_TR(0x6da7f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da7f9:{NFSU2_TR(0x6da7f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da7fd:{NFSU2_TR(0x6da7fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da802ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6da802:L6da802:{c.instructions+=3;NFSU2_TR(0x6da802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da805:{NFSU2_TR(0x6da805);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da808:{NFSU2_TR(0x6da808);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6da810:L6da810:{c.instructions+=3;NFSU2_TR(0x6da810);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6da811:{NFSU2_TR(0x6da811);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6da813:{NFSU2_TR(0x6da813);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da7e3u);}goto L6da7e3;}}
}
B6da815:L6da815:{c.instructions+=4;NFSU2_TR(0x6da815);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da818:{NFSU2_TR(0x6da818);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da81a:{NFSU2_TR(0x6da81a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da81b:{NFSU2_TR(0x6da81b);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da821ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da821:L6da821:{c.instructions+=4;NFSU2_TR(0x6da821);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6da825:{NFSU2_TR(0x6da825);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da828:{NFSU2_TR(0x6da828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6da82f:{NFSU2_TR(0x6da82f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6da831:L6da831:{c.instructions+=5;NFSU2_TR(0x6da831);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da835:{NFSU2_TR(0x6da835);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6da838:{NFSU2_TR(0x6da838);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da83a:{NFSU2_TR(0x6da83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6da83d:{NFSU2_TR(0x6da83d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da750u);}goto L6da750;}}
}
B6da843:L6da843:{c.instructions+=2;NFSU2_TR(0x6da843);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da846:{NFSU2_TR(0x6da846);
if(r1(R+518)){{goto L6da880;}}
}
B6da848:L6da848:{c.instructions+=2;NFSU2_TR(0x6da848);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da84b:{NFSU2_TR(0x6da84b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da907;}}
}
B6da851:L6da851:{c.instructions+=2;NFSU2_TR(0x6da851);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6da855:{NFSU2_TR(0x6da855);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da921;}}
}
B6da85b:L6da85b:{c.instructions+=6;NFSU2_TR(0x6da85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da85e:{NFSU2_TR(0x6da85e);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da862:{NFSU2_TR(0x6da862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da863:{NFSU2_TR(0x6da863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da866:{NFSU2_TR(0x6da866);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da86a:{NFSU2_TR(0x6da86a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da86full));
TAIL_STATIC(0x6dc5f0u,6dc);
}
B6da86f:L6da86f:{c.instructions+=5;NFSU2_TR(0x6da86f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6da872:{NFSU2_TR(0x6da872);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6da875:{NFSU2_TR(0x6da875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da878:{NFSU2_TR(0x6da878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da87b:{NFSU2_TR(0x6da87b);
{goto L6da921;}
}
B6da880:L6da880:{c.instructions+=2;NFSU2_TR(0x6da880);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6da884:{NFSU2_TR(0x6da884);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da921;}}
}
B6da88a:L6da88a:{c.instructions+=7;NFSU2_TR(0x6da88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6da88d:{NFSU2_TR(0x6da88d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da88f:{NFSU2_TR(0x6da88f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
__builtin_memmove((R+0),(U+2),1);
}
B6da892:{NFSU2_TR(0x6da892);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da894:{NFSU2_TR(0x6da894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da897:{NFSU2_TR(0x6da897);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6da89b:{NFSU2_TR(0x6da89b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da89f;}}
}
B6da89d:L6da89d:{c.instructions+=1;NFSU2_TR(0x6da89d);
w4(R+12,u32(0-u32(r4(R+12))));
}
B6da89f:L6da89f:{c.instructions+=7;NFSU2_TR(0x6da89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da8a2:{NFSU2_TR(0x6da8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da8a5:{NFSU2_TR(0x6da8a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da8a9:{NFSU2_TR(0x6da8a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da8aa:{NFSU2_TR(0x6da8aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da8ab:{NFSU2_TR(0x6da8ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da8af:{NFSU2_TR(0x6da8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da8b4ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6da8b4:L6da8b4:{c.instructions+=6;NFSU2_TR(0x6da8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da8b7:{NFSU2_TR(0x6da8b7);
w4(R+24,u32(0x1ull));
}
B6da8bc:{NFSU2_TR(0x6da8bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da8bf:{NFSU2_TR(0x6da8bf);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6da8c1:{NFSU2_TR(0x6da8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da8c4:{NFSU2_TR(0x6da8c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6da8f3;}}
}
B6da8c6:L6da8c6:{c.instructions+=3;NFSU2_TR(0x6da8c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6da8ca:{NFSU2_TR(0x6da8ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6da8cc:{NFSU2_TR(0x6da8cc);
if(r1(R+518)){{goto L6da8ee;}}
}
B6da8ce:L6da8ce:{c.instructions+=7;NFSU2_TR(0x6da8ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da8d1:{NFSU2_TR(0x6da8d1);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6da8d5:{NFSU2_TR(0x6da8d5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6da8d9:{NFSU2_TR(0x6da8d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da8da:{NFSU2_TR(0x6da8da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da8db:{NFSU2_TR(0x6da8db);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da8df:{NFSU2_TR(0x6da8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da8e4ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6da8e4:L6da8e4:{c.instructions+=3;NFSU2_TR(0x6da8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da8e7:{NFSU2_TR(0x6da8e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da8ea:{NFSU2_TR(0x6da8ea);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6da8ee:L6da8ee:{c.instructions+=3;NFSU2_TR(0x6da8ee);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6da8ef:{NFSU2_TR(0x6da8ef);
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
B6da8f1:{NFSU2_TR(0x6da8f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da8c6u);}goto L6da8c6;}}
}
B6da8f3:L6da8f3:{c.instructions+=4;NFSU2_TR(0x6da8f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da8f6:{NFSU2_TR(0x6da8f6);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da8f8:{NFSU2_TR(0x6da8f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da8f9:{NFSU2_TR(0x6da8f9);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da8ffull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da8ff:L6da8ff:{c.instructions+=3;NFSU2_TR(0x6da8ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da902:{NFSU2_TR(0x6da902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da905:{NFSU2_TR(0x6da905);
{goto L6da921;}
}
B6da907:L6da907:{c.instructions+=2;NFSU2_TR(0x6da907);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da90a:{NFSU2_TR(0x6da90a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da921;}}
}
B6da90c:L6da90c:{c.instructions+=2;NFSU2_TR(0x6da90c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6da910:{NFSU2_TR(0x6da910);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da921;}}
}
B6da912:L6da912:{c.instructions+=3;NFSU2_TR(0x6da912);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6da915:{NFSU2_TR(0x6da915);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da916:{NFSU2_TR(0x6da916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da91bull));
TAIL_STATIC(0x6dd070u,6dd);
}
B6da91b:L6da91b:{c.instructions+=2;NFSU2_TR(0x6da91b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6da91e:{NFSU2_TR(0x6da91e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da921:L6da921:{c.instructions+=5;NFSU2_TR(0x6da921);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da925:{NFSU2_TR(0x6da925);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6da929:{NFSU2_TR(0x6da929);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da92b:{NFSU2_TR(0x6da92b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6da92f:{NFSU2_TR(0x6da92f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da710u);}goto L6da710;}}
}
B6da935:L6da935:{c.instructions+=2;NFSU2_TR(0x6da935);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6da936:{NFSU2_TR(0x6da936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6da937:L6da937:{c.instructions+=4;NFSU2_TR(0x6da937);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6da938:{NFSU2_TR(0x6da938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6da939:{NFSU2_TR(0x6da939);
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
B6da93c:{NFSU2_TR(0x6da93c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6da940:L6da940:{c.instructions+=9;NFSU2_TR(0x6da940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da944:{NFSU2_TR(0x6da944);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da948:{NFSU2_TR(0x6da948);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B6da94b:{NFSU2_TR(0x6da94b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da94c:{NFSU2_TR(0x6da94c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da94d:{NFSU2_TR(0x6da94d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6da950:{NFSU2_TR(0x6da950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da951:{NFSU2_TR(0x6da951);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da952:{NFSU2_TR(0x6da952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da957ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da660u);}goto L6da660;}
}
B6da957:L6da957:{c.instructions+=6;NFSU2_TR(0x6da957);
__builtin_memmove((R+20),(R+0),4);
}
B6da959:{NFSU2_TR(0x6da959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da95c:{NFSU2_TR(0x6da95c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6da95e:{NFSU2_TR(0x6da95e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da961:{NFSU2_TR(0x6da961);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da963:{NFSU2_TR(0x6da963);
if(r1(R+518)){{goto L6dab74;}}
}
B6da969:L6da969:{c.instructions+=3;NFSU2_TR(0x6da969);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da96a:{NFSU2_TR(0x6da96a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da96b:{NFSU2_TR(0x6da96b);
{goto L6da970;}
}
B6da970:L6da970:{c.instructions+=7;NFSU2_TR(0x6da970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6da973:{NFSU2_TR(0x6da973);
__builtin_memmove((R+24),(R+0),4);
}
B6da975:{NFSU2_TR(0x6da975);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B6da978:{NFSU2_TR(0x6da978);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6da97d:{NFSU2_TR(0x6da97d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da980:{NFSU2_TR(0x6da980);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da984:{NFSU2_TR(0x6da984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6da9ec;}}
}
B6da986:L6da986:{c.instructions+=3;NFSU2_TR(0x6da986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6da989:{NFSU2_TR(0x6da989);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da98b:{NFSU2_TR(0x6da98b);
if(r1(R+518)){{goto L6da9e4;}}
}
B6da98d:L6da98d:{c.instructions+=2;NFSU2_TR(0x6da98d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da990:{NFSU2_TR(0x6da990);
if(r1(R+518)){{goto L6da9e4;}}
}
B6da992:L6da992:{c.instructions+=3;NFSU2_TR(0x6da992);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6da995:{NFSU2_TR(0x6da995);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da997:{NFSU2_TR(0x6da997);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6da9c0;}}
}
B6da999:L6da999:{c.instructions+=3;NFSU2_TR(0x6da999);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6da99b:{NFSU2_TR(0x6da99b);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6da99d:{NFSU2_TR(0x6da99d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6da9d5;}}
}
B6da99f:L6da99f:{c.instructions+=1;NFSU2_TR(0x6da99f);
}
B6da9a0:L6da9a0:{c.instructions+=7;NFSU2_TR(0x6da9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da9a3:{NFSU2_TR(0x6da9a3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6da9a7:{NFSU2_TR(0x6da9a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6da9ab:{NFSU2_TR(0x6da9ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9ac:{NFSU2_TR(0x6da9ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9ad:{NFSU2_TR(0x6da9ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da9b1:{NFSU2_TR(0x6da9b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da9b6ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6da9b6:L6da9b6:{c.instructions+=4;NFSU2_TR(0x6da9b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da9b9:{NFSU2_TR(0x6da9b9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6da9ba:{NFSU2_TR(0x6da9ba);
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
B6da9bc:{NFSU2_TR(0x6da9bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da9a0u);}goto L6da9a0;}}
}
B6da9be:L6da9be:{c.instructions+=1;NFSU2_TR(0x6da9be);
{goto L6da9d5;}
}
B6da9c0:L6da9c0:{c.instructions+=6;NFSU2_TR(0x6da9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da9c3:{NFSU2_TR(0x6da9c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da9c7:{NFSU2_TR(0x6da9c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9c8:{NFSU2_TR(0x6da9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9c9:{NFSU2_TR(0x6da9c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da9cd:{NFSU2_TR(0x6da9cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da9d2ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6da9d2:L6da9d2:{c.instructions+=1;NFSU2_TR(0x6da9d2);
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
B6da9d5:L6da9d5:{c.instructions+=4;NFSU2_TR(0x6da9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6da9d8:{NFSU2_TR(0x6da9d8);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9da:{NFSU2_TR(0x6da9da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9db:{NFSU2_TR(0x6da9db);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6da9e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6da9e1:L6da9e1:{c.instructions+=1;NFSU2_TR(0x6da9e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6da9e4:L6da9e4:{c.instructions+=2;NFSU2_TR(0x6da9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6da9e7:{NFSU2_TR(0x6da9e7);
{goto L6dab61;}
}
B6da9ec:L6da9ec:{c.instructions+=2;NFSU2_TR(0x6da9ec);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da9ef:{NFSU2_TR(0x6da9ef);
if(r1(R+518)){{goto L6da9f6;}}
}
B6da9f1:L6da9f1:{c.instructions+=2;NFSU2_TR(0x6da9f1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6da9f4:{NFSU2_TR(0x6da9f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6daa12;}}
}
B6da9f6:L6da9f6:{c.instructions+=6;NFSU2_TR(0x6da9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6da9f9:{NFSU2_TR(0x6da9f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6da9fd:{NFSU2_TR(0x6da9fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9fe:{NFSU2_TR(0x6da9fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6da9ff:{NFSU2_TR(0x6da9ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daa03:{NFSU2_TR(0x6daa03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daa08ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6daa08:L6daa08:{c.instructions+=2;NFSU2_TR(0x6daa08);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6daa0b:{NFSU2_TR(0x6daa0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6daa12:L6daa12:{c.instructions+=2;NFSU2_TR(0x6daa12);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa15:{NFSU2_TR(0x6daa15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6daa43;}}
}
B6daa17:L6daa17:{c.instructions+=6;NFSU2_TR(0x6daa17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6daa1a:{NFSU2_TR(0x6daa1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6daa1e:{NFSU2_TR(0x6daa1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daa1f:{NFSU2_TR(0x6daa1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daa23:{NFSU2_TR(0x6daa23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daa26:{NFSU2_TR(0x6daa26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daa2bull));
TAIL_STATIC(0x6dc5f0u,6dc);
}
B6daa2b:L6daa2b:{c.instructions+=6;NFSU2_TR(0x6daa2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6daa2e:{NFSU2_TR(0x6daa2e);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6daa31:{NFSU2_TR(0x6daa31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daa33:{NFSU2_TR(0x6daa33);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daa34:{NFSU2_TR(0x6daa34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daa35:{NFSU2_TR(0x6daa35);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daa3bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6daa3b:L6daa3b:{c.instructions+=2;NFSU2_TR(0x6daa3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6daa3e:{NFSU2_TR(0x6daa3e);
{goto L6dab61;}
}
B6daa43:L6daa43:{c.instructions+=2;NFSU2_TR(0x6daa43);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa46:{NFSU2_TR(0x6daa46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6daa63;}}
}
B6daa48:L6daa48:{c.instructions+=2;NFSU2_TR(0x6daa48);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6daa4c:{NFSU2_TR(0x6daa4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dab61;}}
}
B6daa52:L6daa52:{c.instructions+=3;NFSU2_TR(0x6daa52);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6daa55:{NFSU2_TR(0x6daa55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daa56:{NFSU2_TR(0x6daa56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daa5bull));
TAIL_STATIC(0x6dd070u,6dd);
}
B6daa5b:L6daa5b:{c.instructions+=2;NFSU2_TR(0x6daa5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6daa5e:{NFSU2_TR(0x6daa5e);
{goto L6dab61;}
}
B6daa63:L6daa63:{c.instructions+=2;NFSU2_TR(0x6daa63);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa66:{NFSU2_TR(0x6daa66);
if(r1(R+518)){{goto L6daa71;}}
}
B6daa68:L6daa68:{c.instructions+=2;NFSU2_TR(0x6daa68);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa6b:{NFSU2_TR(0x6daa6b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dab61;}}
}
B6daa71:L6daa71:{c.instructions+=4;NFSU2_TR(0x6daa71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6daa74:{NFSU2_TR(0x6daa74);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa76:{NFSU2_TR(0x6daa76);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6daa79:{NFSU2_TR(0x6daa79);
if(r1(R+518)){{goto L6dab61;}}
}
B6daa7f:L6daa7f:{c.instructions+=1;NFSU2_TR(0x6daa7f);
}
B6daa80:L6daa80:{c.instructions+=7;NFSU2_TR(0x6daa80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6daa82:{NFSU2_TR(0x6daa82);
__builtin_memmove((R+28),(R+0),4);
}
B6daa84:{NFSU2_TR(0x6daa84);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B6daa87:{NFSU2_TR(0x6daa87);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6daa8c:{NFSU2_TR(0x6daa8c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa8f:{NFSU2_TR(0x6daa8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daa93:{NFSU2_TR(0x6daa93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6daafd;}}
}
B6daa95:L6daa95:{c.instructions+=3;NFSU2_TR(0x6daa95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6daa98:{NFSU2_TR(0x6daa98);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa9a:{NFSU2_TR(0x6daa9a);
if(r1(R+518)){{goto L6daaf8;}}
}
B6daa9c:L6daa9c:{c.instructions+=2;NFSU2_TR(0x6daa9c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daa9f:{NFSU2_TR(0x6daa9f);
if(r1(R+518)){{goto L6daaf8;}}
}
B6daaa1:L6daaa1:{c.instructions+=3;NFSU2_TR(0x6daaa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6daaa4:{NFSU2_TR(0x6daaa4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6daaa6:{NFSU2_TR(0x6daaa6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6daad1;}}
}
B6daaa8:L6daaa8:{c.instructions+=3;NFSU2_TR(0x6daaa8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6daaaa:{NFSU2_TR(0x6daaaa);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6daaac:{NFSU2_TR(0x6daaac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6daae7;}}
}
B6daaae:L6daaae:{c.instructions+=1;NFSU2_TR(0x6daaae);
__builtin_memmove((R+28),(R+28),4);
}
B6daab0:L6daab0:{c.instructions+=7;NFSU2_TR(0x6daab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6daab3:{NFSU2_TR(0x6daab3);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6daab7:{NFSU2_TR(0x6daab7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6daabb:{NFSU2_TR(0x6daabb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daabd:{NFSU2_TR(0x6daabd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daabe:{NFSU2_TR(0x6daabe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daac2:{NFSU2_TR(0x6daac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daac7ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6daac7:L6daac7:{c.instructions+=4;NFSU2_TR(0x6daac7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6daaca:{NFSU2_TR(0x6daaca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6daacb:{NFSU2_TR(0x6daacb);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6daacd:{NFSU2_TR(0x6daacd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6daab0u);}goto L6daab0;}}
}
B6daacf:L6daacf:{c.instructions+=1;NFSU2_TR(0x6daacf);
{goto L6daae7;}
}
B6daad1:L6daad1:{c.instructions+=6;NFSU2_TR(0x6daad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6daad4:{NFSU2_TR(0x6daad4);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6daad8:{NFSU2_TR(0x6daad8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daada:{NFSU2_TR(0x6daada);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daadb:{NFSU2_TR(0x6daadb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daadf:{NFSU2_TR(0x6daadf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daae4ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6daae4:L6daae4:{c.instructions+=1;NFSU2_TR(0x6daae4);
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
B6daae7:L6daae7:{c.instructions+=4;NFSU2_TR(0x6daae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6daaea:{NFSU2_TR(0x6daaea);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daaec:{NFSU2_TR(0x6daaec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daaed:{NFSU2_TR(0x6daaed);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daaf3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6daaf3:L6daaf3:{c.instructions+=2;NFSU2_TR(0x6daaf3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6daaf6:{NFSU2_TR(0x6daaf6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6daaf8:L6daaf8:{c.instructions+=2;NFSU2_TR(0x6daaf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daafb:{NFSU2_TR(0x6daafb);
{goto L6dab4f;}
}
B6daafd:L6daafd:{c.instructions+=2;NFSU2_TR(0x6daafd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dab00:{NFSU2_TR(0x6dab00);
if(r1(R+518)){{goto L6dab07;}}
}
B6dab02:L6dab02:{c.instructions+=2;NFSU2_TR(0x6dab02);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dab05:{NFSU2_TR(0x6dab05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dab23;}}
}
B6dab07:L6dab07:{c.instructions+=6;NFSU2_TR(0x6dab07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dab0a:{NFSU2_TR(0x6dab0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dab0e:{NFSU2_TR(0x6dab0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dab0f:{NFSU2_TR(0x6dab0f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dab10:{NFSU2_TR(0x6dab10);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dab14:{NFSU2_TR(0x6dab14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dab19ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6dab19:L6dab19:{c.instructions+=2;NFSU2_TR(0x6dab19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dab1c:{NFSU2_TR(0x6dab1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dab23:L6dab23:{c.instructions+=2;NFSU2_TR(0x6dab23);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4bull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dab26:{NFSU2_TR(0x6dab26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dab4f;}}
}
B6dab28:L6dab28:{c.instructions+=6;NFSU2_TR(0x6dab28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dab2b:{NFSU2_TR(0x6dab2b);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dab2f:{NFSU2_TR(0x6dab2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dab30:{NFSU2_TR(0x6dab30);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dab34:{NFSU2_TR(0x6dab34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dab37:{NFSU2_TR(0x6dab37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dab3cull));
TAIL_STATIC(0x6dc5f0u,6dc);
}
B6dab3c:L6dab3c:{c.instructions+=6;NFSU2_TR(0x6dab3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dab3f:{NFSU2_TR(0x6dab3f);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6dab42:{NFSU2_TR(0x6dab42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dab44:{NFSU2_TR(0x6dab44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dab45:{NFSU2_TR(0x6dab45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dab46:{NFSU2_TR(0x6dab46);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dab4cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dab4c:L6dab4c:{c.instructions+=1;NFSU2_TR(0x6dab4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6dab4f:L6dab4f:{c.instructions+=5;NFSU2_TR(0x6dab4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dab53:{NFSU2_TR(0x6dab53);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6dab56:{NFSU2_TR(0x6dab56);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dab58:{NFSU2_TR(0x6dab58);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6dab5b:{NFSU2_TR(0x6dab5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6daa80u);}goto L6daa80;}}
}
B6dab61:L6dab61:{c.instructions+=4;NFSU2_TR(0x6dab61);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dab65:{NFSU2_TR(0x6dab65);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6dab69:{NFSU2_TR(0x6dab69);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6dab6c:{NFSU2_TR(0x6dab6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da970u);}goto L6da970;}}
}
B6dab72:L6dab72:{c.instructions+=2;NFSU2_TR(0x6dab72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dab73:{NFSU2_TR(0x6dab73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dab74:L6dab74:{c.instructions+=4;NFSU2_TR(0x6dab74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dab75:{NFSU2_TR(0x6dab75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dab76:{NFSU2_TR(0x6dab76);
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
B6dab79:{NFSU2_TR(0x6dab79);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dab80:L6dab80:{c.instructions+=24;NFSU2_TR(0x6dab80);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dab84:{NFSU2_TR(0x6dab84);
__builtin_memmove((R+0),(R+4),4);
}
B6dab86:{NFSU2_TR(0x6dab86);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dab8a:{NFSU2_TR(0x6dab8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dab8d:{NFSU2_TR(0x6dab8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dab91:{NFSU2_TR(0x6dab91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dab94:{NFSU2_TR(0x6dab94);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dab98:{NFSU2_TR(0x6dab98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dab9b:{NFSU2_TR(0x6dab9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dab9f:{NFSU2_TR(0x6dab9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6daba1:{NFSU2_TR(0x6daba1);
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
B6daba3:{NFSU2_TR(0x6daba3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daba6:{NFSU2_TR(0x6daba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dabaa:{NFSU2_TR(0x6dabaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabad:{NFSU2_TR(0x6dabad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabb0:{NFSU2_TR(0x6dabb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabb3:{NFSU2_TR(0x6dabb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabb6:{NFSU2_TR(0x6dabb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dabbd:{NFSU2_TR(0x6dabbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabc0:{NFSU2_TR(0x6dabc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabc3:{NFSU2_TR(0x6dabc3);
__builtin_memmove((R+4),gp(0x8a79a4),4);
}
B6dabc9:{NFSU2_TR(0x6dabc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabcc:{NFSU2_TR(0x6dabcc);
__builtin_memmove(gp(0x8a79a4),(R+0),4);
}
B6dabd1:{NFSU2_TR(0x6dabd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dabe0:L6dabe0:{c.instructions+=8;NFSU2_TR(0x6dabe0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dabe3:{NFSU2_TR(0x6dabe3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dabe4:{NFSU2_TR(0x6dabe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dabe8:{NFSU2_TR(0x6dabe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dabeb:{NFSU2_TR(0x6dabeb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dabec:{NFSU2_TR(0x6dabec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dabed:{NFSU2_TR(0x6dabed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dabee:{NFSU2_TR(0x6dabee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dabf3ull));
TAIL_STATIC(0x6e18a0u,6e1);
}
B6dabf3:L6dabf3:{c.instructions+=4;NFSU2_TR(0x6dabf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dabf6:{NFSU2_TR(0x6dabf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dabf8:{NFSU2_TR(0x6dabf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dabfc:{NFSU2_TR(0x6dabfc);
if(r1(R+518)){{goto L6dad2a;}}
}
B6dac02:L6dac02:{c.instructions+=4;NFSU2_TR(0x6dac02);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6dac04:{NFSU2_TR(0x6dac04);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dac06:{NFSU2_TR(0x6dac06);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac0a:{NFSU2_TR(0x6dac0a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dad2a;}}
}
B6dac10:L6dac10:{c.instructions+=1;NFSU2_TR(0x6dac10);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B6dac13:L6dac13:{c.instructions+=4;NFSU2_TR(0x6dac13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dac16:{NFSU2_TR(0x6dac16);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6dac19:{NFSU2_TR(0x6dac19);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6dac1c:{NFSU2_TR(0x6dac1c);
if(r1(R+518)){{goto L6dad1d;}}
}
B6dac22:L6dac22:{c.instructions+=7;NFSU2_TR(0x6dac22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dac24:{NFSU2_TR(0x6dac24);
__builtin_memmove((R+0),(R+4),4);
}
B6dac26:{NFSU2_TR(0x6dac26);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6dac29:{NFSU2_TR(0x6dac29);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffffull))));
}
B6dac2f:{NFSU2_TR(0x6dac2f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dac32:{NFSU2_TR(0x6dac32);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac36:{NFSU2_TR(0x6dac36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dac6f;}}
}
B6dac38:L6dac38:{c.instructions+=2;NFSU2_TR(0x6dac38);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6dac3b:{NFSU2_TR(0x6dac3b);
if(r1(R+518)){{goto L6dad05;}}
}
B6dac41:L6dac41:{c.instructions+=4;NFSU2_TR(0x6dac41);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dac44:{NFSU2_TR(0x6dac44);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dac46:{NFSU2_TR(0x6dac46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac4a:{NFSU2_TR(0x6dac4a);
if(r1(R+518)){{goto L6dac5b;}}
}
B6dac4c:L6dac4c:{c.instructions+=4;NFSU2_TR(0x6dac4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6dac50:{NFSU2_TR(0x6dac50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dac52:{NFSU2_TR(0x6dac52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dac53:{NFSU2_TR(0x6dac53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dac58ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6dac58:L6dac58:{c.instructions+=1;NFSU2_TR(0x6dac58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dac5b:L6dac5b:{c.instructions+=6;NFSU2_TR(0x6dac5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac5e:{NFSU2_TR(0x6dac5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac61:{NFSU2_TR(0x6dac61);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac64:{NFSU2_TR(0x6dac64);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac67:{NFSU2_TR(0x6dac67);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac6a:{NFSU2_TR(0x6dac6a);
{goto L6dad05;}
}
B6dac6f:L6dac6f:{c.instructions+=2;NFSU2_TR(0x6dac6f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dac72:{NFSU2_TR(0x6dac72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dac98;}}
}
B6dac74:L6dac74:{c.instructions+=3;NFSU2_TR(0x6dac74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dac77:{NFSU2_TR(0x6dac77);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dac79:{NFSU2_TR(0x6dac79);
if(r1(R+518)){{goto L6dad05;}}
}
B6dac7f:L6dac7f:{c.instructions+=4;NFSU2_TR(0x6dac7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6dac83:{NFSU2_TR(0x6dac83);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dac84:{NFSU2_TR(0x6dac84);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac88:{NFSU2_TR(0x6dac88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dac8dull));
TAIL_STATIC(0x6dd070u,6dd);
}
B6dac8d:L6dac8d:{c.instructions+=4;NFSU2_TR(0x6dac8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6dac90:{NFSU2_TR(0x6dac90);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac93:{NFSU2_TR(0x6dac93);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dac96:{NFSU2_TR(0x6dac96);
{goto L6dad05;}
}
B6dac98:L6dac98:{c.instructions+=2;NFSU2_TR(0x6dac98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dac9b:{NFSU2_TR(0x6dac9b);
if(r1(R+518)){{goto L6dacac;}}
}
B6dac9d:L6dac9d:{c.instructions+=2;NFSU2_TR(0x6dac9d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x41ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daca0:{NFSU2_TR(0x6daca0);
if(r1(R+518)){{goto L6dacac;}}
}
B6daca2:L6daca2:{c.instructions+=2;NFSU2_TR(0x6daca2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x42ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daca5:{NFSU2_TR(0x6daca5);
if(r1(R+518)){{goto L6dacac;}}
}
B6daca7:L6daca7:{c.instructions+=2;NFSU2_TR(0x6daca7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x43ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dacaa:{NFSU2_TR(0x6dacaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dad05;}}
}
B6dacac:L6dacac:{c.instructions+=4;NFSU2_TR(0x6dacac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dacaf:{NFSU2_TR(0x6dacaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dacb1:{NFSU2_TR(0x6dacb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dacb4:{NFSU2_TR(0x6dacb4);
if(r1(R+518)){{goto L6dad05;}}
}
B6dacb6:L6dacb6:{c.instructions+=7;NFSU2_TR(0x6dacb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dacb8:{NFSU2_TR(0x6dacb8);
__builtin_memmove((R+4),(R+0),4);
}
B6dacba:{NFSU2_TR(0x6dacba);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6dacbd:{NFSU2_TR(0x6dacbd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6dacc2:{NFSU2_TR(0x6dacc2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dacc5:{NFSU2_TR(0x6dacc5);
__builtin_memmove((R+12),(R+0),4);
}
B6dacc7:{NFSU2_TR(0x6dacc7);
if(r1(R+518)){{goto L6dacce;}}
}
B6dacc9:L6dacc9:{c.instructions+=2;NFSU2_TR(0x6dacc9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daccc:{NFSU2_TR(0x6daccc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dacf7;}}
}
B6dacce:L6dacce:{c.instructions+=4;NFSU2_TR(0x6dacce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dacd1:{NFSU2_TR(0x6dacd1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dacd3:{NFSU2_TR(0x6dacd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dacd7:{NFSU2_TR(0x6dacd7);
if(r1(R+518)){{goto L6dace8;}}
}
B6dacd9:L6dacd9:{c.instructions+=4;NFSU2_TR(0x6dacd9);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6dacdd:{NFSU2_TR(0x6dacdd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dacdf:{NFSU2_TR(0x6dacdf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dace0:{NFSU2_TR(0x6dace0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dace5ull));
TAIL_STATIC(0x6dc660u,6dc);
}
B6dace5:L6dace5:{c.instructions+=1;NFSU2_TR(0x6dace5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dace8:L6dace8:{c.instructions+=5;NFSU2_TR(0x6dace8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6daceb:{NFSU2_TR(0x6daceb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dacee:{NFSU2_TR(0x6dacee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dacf1:{NFSU2_TR(0x6dacf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dacf4:{NFSU2_TR(0x6dacf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dacf7:L6dacf7:{c.instructions+=4;NFSU2_TR(0x6dacf7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6dacfa:{NFSU2_TR(0x6dacfa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dacfc:{NFSU2_TR(0x6dacfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6dacff:{NFSU2_TR(0x6dacff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dacb6u);}goto L6dacb6;}}
}
B6dad01:L6dad01:{c.instructions+=1;NFSU2_TR(0x6dad01);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6dad05:L6dad05:{c.instructions+=4;NFSU2_TR(0x6dad05);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dad09:{NFSU2_TR(0x6dad09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6dad0c:{NFSU2_TR(0x6dad0c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6dad0f:{NFSU2_TR(0x6dad0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dac22u);}goto L6dac22;}}
}
B6dad15:L6dad15:{c.instructions+=2;NFSU2_TR(0x6dad15);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dad19:{NFSU2_TR(0x6dad19);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dad1d:L6dad1d:{c.instructions+=4;NFSU2_TR(0x6dad1d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6dad1e:{NFSU2_TR(0x6dad1e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6dad20:{NFSU2_TR(0x6dad20);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dad24:{NFSU2_TR(0x6dad24);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dac13u);}goto L6dac13;}}
}
B6dad2a:L6dad2a:{c.instructions+=4;NFSU2_TR(0x6dad2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dad2d:{NFSU2_TR(0x6dad2d);
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
B6dad2f:{NFSU2_TR(0x6dad2f);
w4(R+28,u32(0x1ull));
}
B6dad34:{NFSU2_TR(0x6dad34);
if(r1(R+518)){{goto L6dad3d;}}
}
B6dad36:L6dad36:{c.instructions+=1;NFSU2_TR(0x6dad36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dad3bull));
TAIL_STATIC(0x6e18a0u,6e1);
}
B6dad3b:L6dad3b:{c.instructions+=1;NFSU2_TR(0x6dad3b);
__builtin_memmove((R+28),(R+0),4);
}
B6dad3d:L6dad3d:{c.instructions+=3;NFSU2_TR(0x6dad3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dad40:{NFSU2_TR(0x6dad40);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dad42:{NFSU2_TR(0x6dad42);
if(r1(R+518)){{goto L6dad88;}}
}
B6dad44:L6dad44:{c.instructions+=3;NFSU2_TR(0x6dad44);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dad46:{NFSU2_TR(0x6dad46);
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
B6dad48:{NFSU2_TR(0x6dad48);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dad81;}}
}
B6dad4a:L6dad4a:{c.instructions+=1;NFSU2_TR(0x6dad4a);
__builtin_memmove((R+12),(R+12),4);
}
B6dad50:L6dad50:{c.instructions+=3;NFSU2_TR(0x6dad50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dad53:{NFSU2_TR(0x6dad53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dad54:{NFSU2_TR(0x6dad54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dad59ull));
TAIL_STATIC(0x6e1890u,6e1);
}
B6dad59:L6dad59:{c.instructions+=3;NFSU2_TR(0x6dad59);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dad5c:{NFSU2_TR(0x6dad5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dad5e:{NFSU2_TR(0x6dad5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dad7c;}}
}
B6dad60:L6dad60:{c.instructions+=3;NFSU2_TR(0x6dad60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6dad62:{NFSU2_TR(0x6dad62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dad63:{NFSU2_TR(0x6dad63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dad70;}}
}
B6dad65:L6dad65:{c.instructions+=3;NFSU2_TR(0x6dad65);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dad68:{NFSU2_TR(0x6dad68);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dad69:{NFSU2_TR(0x6dad69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dad6eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da940u);}goto L6da940;}
}
B6dad6e:L6dad6e:{c.instructions+=1;NFSU2_TR(0x6dad6e);
{goto L6dad79;}
}
B6dad70:L6dad70:{c.instructions+=3;NFSU2_TR(0x6dad70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dad73:{NFSU2_TR(0x6dad73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dad74:{NFSU2_TR(0x6dad74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dad79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da6e0u);}goto L6da6e0;}
}
B6dad79:L6dad79:{c.instructions+=1;NFSU2_TR(0x6dad79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dad7c:L6dad7c:{c.instructions+=3;NFSU2_TR(0x6dad7c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6dad7d:{NFSU2_TR(0x6dad7d);
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
B6dad7f:{NFSU2_TR(0x6dad7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dad50u);}goto L6dad50;}}
}
B6dad81:L6dad81:{c.instructions+=1;NFSU2_TR(0x6dad81);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6dad88:L6dad88:{c.instructions+=8;NFSU2_TR(0x6dad88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6dad8a:{NFSU2_TR(0x6dad8a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+20),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+20),u32(0xfffffffcull)));
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dad8d:{NFSU2_TR(0x6dad8d);
__builtin_memmove((R+0),(R+20),4);
}
B6dad8f:{NFSU2_TR(0x6dad8f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6dad91:{NFSU2_TR(0x6dad91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dad93:{NFSU2_TR(0x6dad93);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dad94:{NFSU2_TR(0x6dad94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dad95:{NFSU2_TR(0x6dad95);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dad9bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dad9b:L6dad9b:{c.instructions+=6;NFSU2_TR(0x6dad9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dad9e:{NFSU2_TR(0x6dad9e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6dada0:{NFSU2_TR(0x6dada0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dada3:{NFSU2_TR(0x6dada3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dada5:{NFSU2_TR(0x6dada5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6dada7:{NFSU2_TR(0x6dada7);
if(r1(R+518)){{goto L6dadba;}}
}
B6dada9:L6dada9:{c.instructions+=5;NFSU2_TR(0x6dada9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dadac:{NFSU2_TR(0x6dadac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dadaf:{NFSU2_TR(0x6dadaf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dadb0:{NFSU2_TR(0x6dadb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dadb1:{NFSU2_TR(0x6dadb1);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dadb7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dadb7:L6dadb7:{c.instructions+=1;NFSU2_TR(0x6dadb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dadba:L6dadba:{c.instructions+=7;NFSU2_TR(0x6dadba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dadbb:{NFSU2_TR(0x6dadbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dadbe:{NFSU2_TR(0x6dadbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dadbf:{NFSU2_TR(0x6dadbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dadc0:{NFSU2_TR(0x6dadc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dadc1:{NFSU2_TR(0x6dadc1);
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
B6dadc4:{NFSU2_TR(0x6dadc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dadd0:L6dadd0:{c.instructions+=8;NFSU2_TR(0x6dadd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dadd1:{NFSU2_TR(0x6dadd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dadd2:{NFSU2_TR(0x6dadd2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6dadd6:{NFSU2_TR(0x6dadd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dadd9:{NFSU2_TR(0x6dadd9);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6daddb:{NFSU2_TR(0x6daddb);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6daddd:{NFSU2_TR(0x6daddd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dadde:{NFSU2_TR(0x6dadde);
if(r1(R+518)){{goto L6dae26;}}
}
B6dade0:L6dade0:{c.instructions+=2;NFSU2_TR(0x6dade0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dade1:{NFSU2_TR(0x6dade1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dade6ull));
TAIL_STATIC(0x6e18a0u,6e1);
}
B6dade6:L6dade6:{c.instructions+=3;NFSU2_TR(0x6dade6);
__builtin_memmove((R+12),(R+0),4);
}
B6dade8:{NFSU2_TR(0x6dade8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6dadeb:{NFSU2_TR(0x6dadeb);
if(r1(R+518)){{goto L6dae25;}}
}
B6daded:L6daded:{c.instructions+=3;NFSU2_TR(0x6daded);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6dadef:{NFSU2_TR(0x6dadef);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B6dadf1:{NFSU2_TR(0x6dadf1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6dae22;}}
}
B6dadf3:L6dadf3:{c.instructions+=3;NFSU2_TR(0x6dadf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dadf6:{NFSU2_TR(0x6dadf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dadf7:{NFSU2_TR(0x6dadf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dadfcull));
TAIL_STATIC(0x6e1890u,6e1);
}
B6dadfc:L6dadfc:{c.instructions+=2;NFSU2_TR(0x6dadfc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6dadff:{NFSU2_TR(0x6dadff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dae1d;}}
}
B6dae01:L6dae01:{c.instructions+=3;NFSU2_TR(0x6dae01);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dae03:{NFSU2_TR(0x6dae03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae04:{NFSU2_TR(0x6dae04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dae11;}}
}
B6dae06:L6dae06:{c.instructions+=3;NFSU2_TR(0x6dae06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dae09:{NFSU2_TR(0x6dae09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae0a:{NFSU2_TR(0x6dae0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dae0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da940u);}goto L6da940;}
}
B6dae0f:L6dae0f:{c.instructions+=1;NFSU2_TR(0x6dae0f);
{goto L6dae1a;}
}
B6dae11:L6dae11:{c.instructions+=3;NFSU2_TR(0x6dae11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dae14:{NFSU2_TR(0x6dae14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae15:{NFSU2_TR(0x6dae15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dae1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6da6e0u);}goto L6da6e0;}
}
B6dae1a:L6dae1a:{c.instructions+=1;NFSU2_TR(0x6dae1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dae1d:L6dae1d:{c.instructions+=3;NFSU2_TR(0x6dae1d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6dae1e:{NFSU2_TR(0x6dae1e);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6dae20:{NFSU2_TR(0x6dae20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dadf3u);}goto L6dadf3;}}
}
B6dae22:L6dae22:{c.instructions+=1;NFSU2_TR(0x6dae22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dae25:L6dae25:{c.instructions+=1;NFSU2_TR(0x6dae25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6dae26:L6dae26:{c.instructions+=3;NFSU2_TR(0x6dae26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6dae29:{NFSU2_TR(0x6dae29);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6dae2b:{NFSU2_TR(0x6dae2b);
if(r1(R+518)){{goto L6dae48;}}
}
B6dae2d:L6dae2d:{c.instructions+=2;NFSU2_TR(0x6dae2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6dae30:{NFSU2_TR(0x6dae30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6dae48;}}
}
B6dae32:L6dae32:{c.instructions+=2;NFSU2_TR(0x6dae32);
__builtin_memmove((R+4),(R+28),4);
}
B6dae34:{NFSU2_TR(0x6dae34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dae39ull));
TAIL_STATIC(0x6e1a70u,6e1);
}
B6dae39:L6dae39:{c.instructions+=3;NFSU2_TR(0x6dae39);
u8 U[4];
w4(U+0,u32(0x24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae3b:{NFSU2_TR(0x6dae3b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae3c:{NFSU2_TR(0x6dae3c);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dae42ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dae42:L6dae42:{c.instructions+=2;NFSU2_TR(0x6dae42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6dae45:{NFSU2_TR(0x6dae45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dae48:L6dae48:{c.instructions+=3;NFSU2_TR(0x6dae48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dae4b:{NFSU2_TR(0x6dae4b);
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
B6dae4d:{NFSU2_TR(0x6dae4d);
if(r1(R+518)){{goto L6dae60;}}
}
B6dae4f:L6dae4f:{c.instructions+=5;NFSU2_TR(0x6dae4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dae52:{NFSU2_TR(0x6dae52);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffffcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6dae55:{NFSU2_TR(0x6dae55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae56:{NFSU2_TR(0x6dae56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae57:{NFSU2_TR(0x6dae57);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dae5dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6dae5d:L6dae5d:{c.instructions+=1;NFSU2_TR(0x6dae5d);
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
B6dae60:L6dae60:{c.instructions+=5;NFSU2_TR(0x6dae60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6dae61:{NFSU2_TR(0x6dae61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6dae64:{NFSU2_TR(0x6dae64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6dae65:{NFSU2_TR(0x6dae65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6dae66:{NFSU2_TR(0x6dae66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dae70:L6dae70:{c.instructions+=3;NFSU2_TR(0x6dae70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dae73:{NFSU2_TR(0x6dae73);
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
B6dae75:{NFSU2_TR(0x6dae75);
if(r1(R+518)){{goto L6dae83;}}
}
B6dae77:L6dae77:{c.instructions+=2;NFSU2_TR(0x6dae77);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
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
B6dae7a:{NFSU2_TR(0x6dae7a);
if(r1(R+518)){{goto L6dae83;}}
}
B6dae7c:L6dae7c:{c.instructions+=2;NFSU2_TR(0x6dae7c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae7d:{NFSU2_TR(0x6dae7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dae82ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6dabe0u);}goto L6dabe0;}
}
B6dae82:L6dae82:{c.instructions+=1;NFSU2_TR(0x6dae82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6dae83:L6dae83:{c.instructions+=1;NFSU2_TR(0x6dae83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6dae90:L6dae90:{c.instructions+=7;NFSU2_TR(0x6dae90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dae91:{NFSU2_TR(0x6dae91);
__builtin_memmove((R+24),(R+4),4);
}
B6dae93:{NFSU2_TR(0x6dae93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dae96:{NFSU2_TR(0x6dae96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dae98:{NFSU2_TR(0x6dae98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6dae9b:{NFSU2_TR(0x6dae9b);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a7ad4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+0)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6daea2:{NFSU2_TR(0x6daea2);
if(r1(R+518)){{goto L6daebe;}}
}
B6daea4:L6daea4:{c.instructions+=8;NFSU2_TR(0x6daea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a7ad4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6daeab:{NFSU2_TR(0x6daeab);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6daeb1:{NFSU2_TR(0x6daeb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daeb3:{NFSU2_TR(0x6daeb3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daeb4:{NFSU2_TR(0x6daeb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6daeb6:{NFSU2_TR(0x6daeb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daeb7:{NFSU2_TR(0x6daeb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daeb8:{NFSU2_TR(0x6daeb8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daebeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6daebe:L6daebe:{c.instructions+=4;NFSU2_TR(0x6daebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6daec1:{NFSU2_TR(0x6daec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6daec4:{NFSU2_TR(0x6daec4);
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
B6daec7:{NFSU2_TR(0x6daec7);
if(r1(R+518)){{goto L6daed9;}}
}
B6daec9:L6daec9:{c.instructions+=5;NFSU2_TR(0x6daec9);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6daecf:{NFSU2_TR(0x6daecf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daed1:{NFSU2_TR(0x6daed1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daed2:{NFSU2_TR(0x6daed2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daed3:{NFSU2_TR(0x6daed3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daed9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6daed9:L6daed9:{c.instructions+=4;NFSU2_TR(0x6daed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6daedb:{NFSU2_TR(0x6daedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6daede:{NFSU2_TR(0x6daede);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80edb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6daee5:{NFSU2_TR(0x6daee5);
if(r1(R+518)){{goto L6daf05;}}
}
B6daee7:L6daee7:{c.instructions+=10;NFSU2_TR(0x6daee7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80edb0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6daeee:{NFSU2_TR(0x6daeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6daef1:{NFSU2_TR(0x6daef1);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6daef6:{NFSU2_TR(0x6daef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daef8:{NFSU2_TR(0x6daef8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daef9:{NFSU2_TR(0x6daef9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daefb:{NFSU2_TR(0x6daefb);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daefd:{NFSU2_TR(0x6daefd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daefe:{NFSU2_TR(0x6daefe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daeff:{NFSU2_TR(0x6daeff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daf05ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6daf05:L6daf05:{c.instructions+=4;NFSU2_TR(0x6daf05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6daf07:{NFSU2_TR(0x6daf07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6daf0a:{NFSU2_TR(0x6daf0a);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80edd0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6daf11:{NFSU2_TR(0x6daf11);
if(r1(R+518)){{goto L6daf31;}}
}
B6daf13:L6daf13:{c.instructions+=10;NFSU2_TR(0x6daf13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80edd0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6daf1a:{NFSU2_TR(0x6daf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6daf1d:{NFSU2_TR(0x6daf1d);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6daf22:{NFSU2_TR(0x6daf22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daf24:{NFSU2_TR(0x6daf24);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf25:{NFSU2_TR(0x6daf25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daf27:{NFSU2_TR(0x6daf27);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf29:{NFSU2_TR(0x6daf29);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf2a:{NFSU2_TR(0x6daf2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf2b:{NFSU2_TR(0x6daf2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daf31ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6daf31:L6daf31:{c.instructions+=4;NFSU2_TR(0x6daf31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6daf33:{NFSU2_TR(0x6daf33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6daf36:{NFSU2_TR(0x6daf36);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80edf0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6daf3d:{NFSU2_TR(0x6daf3d);
if(r1(R+518)){{goto L6daf5d;}}
}
B6daf3f:L6daf3f:{c.instructions+=10;NFSU2_TR(0x6daf3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80edf0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6daf46:{NFSU2_TR(0x6daf46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6daf49:{NFSU2_TR(0x6daf49);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6daf4e:{NFSU2_TR(0x6daf4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daf50:{NFSU2_TR(0x6daf50);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf51:{NFSU2_TR(0x6daf51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daf53:{NFSU2_TR(0x6daf53);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf55:{NFSU2_TR(0x6daf55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf56:{NFSU2_TR(0x6daf56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf57:{NFSU2_TR(0x6daf57);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daf5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6daf5d:L6daf5d:{c.instructions+=4;NFSU2_TR(0x6daf5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6daf5f:{NFSU2_TR(0x6daf5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6daf62:{NFSU2_TR(0x6daf62);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6daf69:{NFSU2_TR(0x6daf69);
if(r1(R+518)){{goto L6daf89;}}
}
B6daf6b:L6daf6b:{c.instructions+=10;NFSU2_TR(0x6daf6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee50ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6daf72:{NFSU2_TR(0x6daf72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6daf75:{NFSU2_TR(0x6daf75);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6daf7a:{NFSU2_TR(0x6daf7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daf7c:{NFSU2_TR(0x6daf7c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf7d:{NFSU2_TR(0x6daf7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daf7f:{NFSU2_TR(0x6daf7f);
u8 U[4];
w4(U+0,u32(0x15ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf81:{NFSU2_TR(0x6daf81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf82:{NFSU2_TR(0x6daf82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf83:{NFSU2_TR(0x6daf83);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6daf89ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6daf89:L6daf89:{c.instructions+=3;NFSU2_TR(0x6daf89);
__builtin_memmove((R+0),gp(0x80ed88),4);
}
B6daf8e:{NFSU2_TR(0x6daf8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6daf91:{NFSU2_TR(0x6daf91);
if(r1(R+518)){{goto L6dafc2;}}
}
B6daf93:L6daf93:{c.instructions+=3;NFSU2_TR(0x6daf93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daf95:{NFSU2_TR(0x6daf95);
u8 U[26];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+0)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6daf9c:{NFSU2_TR(0x6daf9c);
if(r1(R+518)){TAIL_STATIC(0x6db005u,6db);}
}
B6daf9e:L6daf9e:{c.instructions+=9;NFSU2_TR(0x6daf9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daf9f:{NFSU2_TR(0x6daf9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dafa6:{NFSU2_TR(0x6dafa6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dafa8:{NFSU2_TR(0x6dafa8);
__builtin_memmove((R+4),gp(0x8a79a0),4);
}
B6dafae:{NFSU2_TR(0x6dafae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dafb0:{NFSU2_TR(0x6dafb0);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafb2:{NFSU2_TR(0x6dafb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafb3:{NFSU2_TR(0x6dafb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafb4:{NFSU2_TR(0x6dafb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dafbaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dafba:L6dafba:{c.instructions+=2;NFSU2_TR(0x6dafba);
__builtin_memmove((R+8),gp(0x80ed88),4);
}
B6dafc0:{NFSU2_TR(0x6dafc0);
{goto L6daff1;}
}
B6dafc2:L6dafc2:{c.instructions+=4;NFSU2_TR(0x6dafc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6dafc4:{NFSU2_TR(0x6dafc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6dafc7:{NFSU2_TR(0x6dafc7);
u8 U[26];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+4)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B6dafce:{NFSU2_TR(0x6dafce);
if(r1(R+518)){TAIL_STATIC(0x6db005u,6db);}
}
B6dafd0:L6dafd0:{c.instructions+=10;NFSU2_TR(0x6dafd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80ee10ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6dafd7:{NFSU2_TR(0x6dafd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6dafda:{NFSU2_TR(0x6dafda);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6dafdf:{NFSU2_TR(0x6dafdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6dafe1:{NFSU2_TR(0x6dafe1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafe2:{NFSU2_TR(0x6dafe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6dafe4:{NFSU2_TR(0x6dafe4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafe6:{NFSU2_TR(0x6dafe6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafe7:{NFSU2_TR(0x6dafe7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafe8:{NFSU2_TR(0x6dafe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6dafeeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6dafee:L6dafee:{c.instructions+=1;NFSU2_TR(0x6dafee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6daff1:L6daff1:{c.instructions+=8;NFSU2_TR(0x6daff1);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6daff6:{NFSU2_TR(0x6daff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6daff8:{NFSU2_TR(0x6daff8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daff9:{NFSU2_TR(0x6daff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6daffb:{NFSU2_TR(0x6daffb);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daffd:{NFSU2_TR(0x6daffd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6daffe:{NFSU2_TR(0x6daffe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6dafff:{NFSU2_TR(0x6dafff);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6db005ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x6da,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
