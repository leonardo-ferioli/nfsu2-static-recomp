#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x510,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x510,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_510(u8* __restrict R,Cpu& c);
u32 page_510(Cpu& c){return body_510(c.regs.data(),c);}
__attribute__((noinline)) u32 body_510(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x510000:goto L510000;
case 0x510005:c.instructions+=1;goto B510005;
case 0x510006:goto L510006;
case 0x510008:c.instructions+=1;goto B510008;
case 0x510040:goto L510040;
case 0x510045:c.instructions+=1;goto B510045;
case 0x510050:goto L510050;
case 0x510055:c.instructions+=1;goto B510055;
case 0x510060:goto L510060;
case 0x510066:c.instructions+=4;goto B510066;
case 0x510068:c.instructions+=3;goto B510068;
case 0x51006e:c.instructions+=2;goto B51006e;
case 0x510071:c.instructions+=1;goto B510071;
case 0x51007b:goto L51007b;
case 0x51007c:c.instructions+=9;goto B51007c;
case 0x51007d:c.instructions+=8;goto B51007d;
case 0x51007e:c.instructions+=7;goto B51007e;
case 0x51007f:c.instructions+=6;goto B51007f;
case 0x510080:c.instructions+=5;goto B510080;
case 0x510086:c.instructions+=4;goto B510086;
case 0x510088:c.instructions+=3;goto B510088;
case 0x51008a:c.instructions+=2;goto B51008a;
case 0x51008d:c.instructions+=1;goto B51008d;
case 0x510090:goto L510090;
case 0x510096:c.instructions+=2;goto B510096;
case 0x510098:c.instructions+=1;goto B510098;
case 0x51009a:goto L51009a;
case 0x51009c:c.instructions+=1;goto B51009c;
case 0x51009f:goto L51009f;
case 0x5100a0:goto L5100a0;
case 0x5100a5:c.instructions+=1;goto B5100a5;
case 0x5100b0:goto L5100b0;
case 0x5100b2:c.instructions+=2;goto B5100b2;
case 0x5100b7:c.instructions+=1;goto B5100b7;
case 0x5100bc:goto L5100bc;
case 0x5100c1:c.instructions+=2;goto B5100c1;
case 0x5100c3:c.instructions+=1;goto B5100c3;
case 0x5100c5:goto L5100c5;
case 0x5100c6:c.instructions+=4;goto B5100c6;
case 0x5100c7:c.instructions+=3;goto B5100c7;
case 0x5100ca:c.instructions+=2;goto B5100ca;
case 0x5100cf:c.instructions+=1;goto B5100cf;
case 0x5100d4:goto L5100d4;
case 0x5100d6:goto L5100d6;
case 0x5100d7:c.instructions+=2;goto B5100d7;
case 0x5100d8:c.instructions+=1;goto B5100d8;
case 0x5100d9:goto L5100d9;
case 0x5100e0:goto L5100e0;
case 0x5100e6:c.instructions+=2;goto B5100e6;
case 0x5100ec:c.instructions+=1;goto B5100ec;
case 0x5100ee:goto L5100ee;
case 0x5100f3:c.instructions+=2;goto B5100f3;
case 0x5100f5:c.instructions+=1;goto B5100f5;
case 0x5100f7:goto L5100f7;
case 0x5100fd:c.instructions+=3;goto B5100fd;
case 0x510100:c.instructions+=2;goto B510100;
case 0x510101:c.instructions+=1;goto B510101;
case 0x510106:goto L510106;
case 0x510109:c.instructions+=2;goto B510109;
case 0x51010b:c.instructions+=1;goto B51010b;
case 0x51010d:goto L51010d;
case 0x510112:c.instructions+=1;goto B510112;
case 0x510113:goto L510113;
case 0x510115:c.instructions+=1;goto B510115;
case 0x510120:goto L510120;
case 0x510124:c.instructions+=2;goto B510124;
case 0x510127:c.instructions+=1;goto B510127;
case 0x510129:goto L510129;
case 0x510130:c.instructions+=1;goto B510130;
case 0x510137:goto L510137;
case 0x51013c:c.instructions+=1;goto B51013c;
case 0x51013d:goto L51013d;
case 0x510142:c.instructions+=1;goto B510142;
case 0x510143:goto L510143;
case 0x510148:c.instructions+=1;goto B510148;
case 0x510149:goto L510149;
case 0x51014e:c.instructions+=1;goto B51014e;
case 0x51014f:goto L51014f;
case 0x510154:c.instructions+=1;goto B510154;
case 0x510155:goto L510155;
case 0x51015a:c.instructions+=1;goto B51015a;
case 0x51015b:goto L51015b;
case 0x510160:c.instructions+=1;goto B510160;
case 0x510161:goto L510161;
case 0x510166:c.instructions+=1;goto B510166;
case 0x510167:goto L510167;
case 0x51016c:c.instructions+=1;goto B51016c;
case 0x51016d:goto L51016d;
case 0x510172:c.instructions+=1;goto B510172;
case 0x510173:goto L510173;
case 0x510175:c.instructions+=1;goto B510175;
case 0x5101c0:goto L5101c0;
case 0x5101c5:c.instructions+=4;goto B5101c5;
case 0x5101c6:c.instructions+=3;goto B5101c6;
case 0x5101c8:c.instructions+=2;goto B5101c8;
case 0x5101ce:c.instructions+=1;goto B5101ce;
case 0x5101d0:goto L5101d0;
case 0x5101d1:c.instructions+=1;goto B5101d1;
case 0x5101d6:goto L5101d6;
case 0x5101d9:goto L5101d9;
case 0x5101db:c.instructions+=2;goto B5101db;
case 0x5101dc:c.instructions+=1;goto B5101dc;
case 0x5101e0:goto L5101e0;
case 0x5101e1:c.instructions+=9;goto B5101e1;
case 0x5101e4:c.instructions+=8;goto B5101e4;
case 0x5101e7:c.instructions+=7;goto B5101e7;
case 0x5101ea:c.instructions+=6;goto B5101ea;
case 0x5101ed:c.instructions+=5;goto B5101ed;
case 0x5101f1:c.instructions+=4;goto B5101f1;
case 0x5101f3:c.instructions+=3;goto B5101f3;
case 0x5101f5:c.instructions+=2;goto B5101f5;
case 0x5101f8:c.instructions+=1;goto B5101f8;
case 0x5101fa:goto L5101fa;
case 0x5101fc:c.instructions+=1;goto B5101fc;
case 0x510200:goto L510200;
case 0x510203:c.instructions+=5;goto B510203;
case 0x510207:c.instructions+=4;goto B510207;
case 0x51020b:c.instructions+=3;goto B51020b;
case 0x51020d:c.instructions+=2;goto B51020d;
case 0x510210:c.instructions+=1;goto B510210;
case 0x510212:goto L510212;
case 0x510214:c.instructions+=1;goto B510214;
case 0x510218:goto L510218;
case 0x51021b:c.instructions+=6;goto B51021b;
case 0x51021d:c.instructions+=5;goto B51021d;
case 0x51021f:c.instructions+=4;goto B51021f;
case 0x510221:c.instructions+=3;goto B510221;
case 0x510223:c.instructions+=2;goto B510223;
case 0x510226:c.instructions+=1;goto B510226;
case 0x510228:goto L510228;
case 0x51022d:c.instructions+=2;goto B51022d;
case 0x51022e:c.instructions+=1;goto B51022e;
case 0x51022f:goto L51022f;
case 0x510231:c.instructions+=2;goto B510231;
case 0x510232:c.instructions+=1;goto B510232;
case 0x510240:goto L510240;
case 0x510241:c.instructions+=9;goto B510241;
case 0x510244:c.instructions+=8;goto B510244;
case 0x510247:c.instructions+=7;goto B510247;
case 0x51024a:c.instructions+=6;goto B51024a;
case 0x51024d:c.instructions+=5;goto B51024d;
case 0x510251:c.instructions+=4;goto B510251;
case 0x510253:c.instructions+=3;goto B510253;
case 0x510255:c.instructions+=2;goto B510255;
case 0x510258:c.instructions+=1;goto B510258;
case 0x51025a:goto L51025a;
case 0x51025c:c.instructions+=1;goto B51025c;
case 0x510260:goto L510260;
case 0x510263:c.instructions+=5;goto B510263;
case 0x510267:c.instructions+=4;goto B510267;
case 0x51026b:c.instructions+=3;goto B51026b;
case 0x51026d:c.instructions+=2;goto B51026d;
case 0x510270:c.instructions+=1;goto B510270;
case 0x510272:goto L510272;
case 0x510274:c.instructions+=1;goto B510274;
case 0x510278:goto L510278;
case 0x51027b:c.instructions+=6;goto B51027b;
case 0x51027d:c.instructions+=5;goto B51027d;
case 0x51027f:c.instructions+=4;goto B51027f;
case 0x510281:c.instructions+=3;goto B510281;
case 0x510283:c.instructions+=2;goto B510283;
case 0x510286:c.instructions+=1;goto B510286;
case 0x510288:goto L510288;
case 0x51028d:c.instructions+=2;goto B51028d;
case 0x51028e:c.instructions+=1;goto B51028e;
case 0x51028f:goto L51028f;
case 0x510291:c.instructions+=2;goto B510291;
case 0x510292:c.instructions+=1;goto B510292;
case 0x5102a0:goto L5102a0;
case 0x5102a5:c.instructions+=4;goto B5102a5;
case 0x5102a6:c.instructions+=3;goto B5102a6;
case 0x5102a8:c.instructions+=2;goto B5102a8;
case 0x5102ae:c.instructions+=1;goto B5102ae;
case 0x5102b0:goto L5102b0;
case 0x5102b1:c.instructions+=1;goto B5102b1;
case 0x5102b6:goto L5102b6;
case 0x5102b9:goto L5102b9;
case 0x5102bb:c.instructions+=2;goto B5102bb;
case 0x5102bc:c.instructions+=1;goto B5102bc;
case 0x5102c0:goto L5102c0;
case 0x5102c6:c.instructions+=1;goto B5102c6;
case 0x5102d0:goto L5102d0;
case 0x5102d5:c.instructions+=4;goto B5102d5;
case 0x5102d6:c.instructions+=3;goto B5102d6;
case 0x5102d8:c.instructions+=2;goto B5102d8;
case 0x5102de:c.instructions+=1;goto B5102de;
case 0x5102e0:goto L5102e0;
case 0x5102e1:c.instructions+=1;goto B5102e1;
case 0x5102e6:goto L5102e6;
case 0x5102e9:goto L5102e9;
case 0x5102eb:c.instructions+=2;goto B5102eb;
case 0x5102ec:c.instructions+=1;goto B5102ec;
case 0x5102f0:goto L5102f0;
case 0x5102f4:c.instructions+=2;goto B5102f4;
case 0x5102f9:c.instructions+=1;goto B5102f9;
case 0x5102fb:goto L5102fb;
case 0x5102fd:goto L5102fd;
case 0x510302:c.instructions+=1;goto B510302;
case 0x510304:goto L510304;
case 0x510309:c.instructions+=1;goto B510309;
case 0x51030b:goto L51030b;
case 0x510310:c.instructions+=1;goto B510310;
case 0x510312:goto L510312;
case 0x510316:c.instructions+=1;goto B510316;
case 0x510319:goto L510319;
case 0x51031e:c.instructions+=1;goto B51031e;
case 0x510320:goto L510320;
case 0x510325:c.instructions+=1;goto B510325;
case 0x510327:goto L510327;
case 0x51032c:c.instructions+=1;goto B51032c;
case 0x51032e:goto L51032e;
case 0x510330:c.instructions+=1;goto B510330;
case 0x510333:goto L510333;
case 0x510338:c.instructions+=1;goto B510338;
case 0x51033b:goto L51033b;
case 0x510340:c.instructions+=1;goto B510340;
case 0x510350:goto L510350;
case 0x510352:c.instructions+=13;goto B510352;
case 0x510357:c.instructions+=12;goto B510357;
case 0x51035d:c.instructions+=11;goto B51035d;
case 0x51035e:c.instructions+=10;goto B51035e;
case 0x510365:c.instructions+=9;goto B510365;
case 0x510366:c.instructions+=8;goto B510366;
case 0x510367:c.instructions+=7;goto B510367;
case 0x510369:c.instructions+=6;goto B510369;
case 0x51036d:c.instructions+=5;goto B51036d;
case 0x510373:c.instructions+=4;goto B510373;
case 0x510379:c.instructions+=3;goto B510379;
case 0x51037b:c.instructions+=2;goto B51037b;
case 0x510383:c.instructions+=1;goto B510383;
case 0x510385:goto L510385;
case 0x510387:c.instructions+=2;goto B510387;
case 0x510389:c.instructions+=1;goto B510389;
case 0x51038b:goto L51038b;
case 0x51038f:c.instructions+=6;goto B51038f;
case 0x510399:c.instructions+=5;goto B510399;
case 0x51039f:c.instructions+=4;goto B51039f;
case 0x5103a0:c.instructions+=3;goto B5103a0;
case 0x5103a7:c.instructions+=2;goto B5103a7;
case 0x5103aa:c.instructions+=1;goto B5103aa;
case 0x5103b0:goto L5103b0;
case 0x5103b3:c.instructions+=2;goto B5103b3;
case 0x5103b5:c.instructions+=1;goto B5103b5;
case 0x5103b7:goto L5103b7;
case 0x5103bb:c.instructions+=3;goto B5103bb;
case 0x5103bd:c.instructions+=2;goto B5103bd;
case 0x5103c0:c.instructions+=1;goto B5103c0;
case 0x5103c2:goto L5103c2;
case 0x5103c3:c.instructions+=1;goto B5103c3;
case 0x5103c5:goto L5103c5;
case 0x5103c7:goto L5103c7;
case 0x5103d0:goto L5103d0;
case 0x5103d1:c.instructions+=3;goto B5103d1;
case 0x5103d3:c.instructions+=2;goto B5103d3;
case 0x5103d8:c.instructions+=1;goto B5103d8;
case 0x5103dd:goto L5103dd;
case 0x5103e3:c.instructions+=7;goto B5103e3;
case 0x5103e9:c.instructions+=6;goto B5103e9;
case 0x5103ec:c.instructions+=5;goto B5103ec;
case 0x5103ef:c.instructions+=4;goto B5103ef;
case 0x5103f2:c.instructions+=3;goto B5103f2;
case 0x5103f4:c.instructions+=2;goto B5103f4;
case 0x5103f7:c.instructions+=1;goto B5103f7;
case 0x5103f9:goto L5103f9;
case 0x5103fc:c.instructions+=1;goto B5103fc;
case 0x5103ff:goto L5103ff;
case 0x510402:c.instructions+=4;goto B510402;
case 0x510405:c.instructions+=3;goto B510405;
case 0x510407:c.instructions+=2;goto B510407;
case 0x51040a:c.instructions+=1;goto B51040a;
case 0x51040c:goto L51040c;
case 0x51040f:c.instructions+=1;goto B51040f;
case 0x510412:goto L510412;
case 0x510414:c.instructions+=1;goto B510414;
case 0x510417:goto L510417;
case 0x51041c:c.instructions+=1;goto B51041c;
case 0x510421:goto L510421;
case 0x510427:c.instructions+=7;goto B510427;
case 0x51042d:c.instructions+=6;goto B51042d;
case 0x510433:c.instructions+=5;goto B510433;
case 0x510439:c.instructions+=4;goto B510439;
case 0x51043c:c.instructions+=3;goto B51043c;
case 0x51043e:c.instructions+=2;goto B51043e;
case 0x510441:c.instructions+=1;goto B510441;
case 0x510443:goto L510443;
case 0x510446:c.instructions+=1;goto B510446;
case 0x510449:goto L510449;
case 0x51044c:c.instructions+=4;goto B51044c;
case 0x51044f:c.instructions+=3;goto B51044f;
case 0x510451:c.instructions+=2;goto B510451;
case 0x510454:c.instructions+=1;goto B510454;
case 0x510456:goto L510456;
case 0x510459:c.instructions+=1;goto B510459;
case 0x51045c:goto L51045c;
case 0x51045e:c.instructions+=1;goto B51045e;
case 0x510461:goto L510461;
case 0x510466:c.instructions+=1;goto B510466;
case 0x51046b:goto L51046b;
case 0x510471:c.instructions+=8;goto B510471;
case 0x510477:c.instructions+=7;goto B510477;
case 0x51047d:c.instructions+=6;goto B51047d;
case 0x510483:c.instructions+=5;goto B510483;
case 0x510486:c.instructions+=4;goto B510486;
case 0x510487:c.instructions+=3;goto B510487;
case 0x510489:c.instructions+=2;goto B510489;
case 0x51048c:c.instructions+=1;goto B51048c;
case 0x51048e:goto L51048e;
case 0x510491:c.instructions+=1;goto B510491;
case 0x510494:goto L510494;
case 0x510497:c.instructions+=4;goto B510497;
case 0x51049a:c.instructions+=3;goto B51049a;
case 0x51049c:c.instructions+=2;goto B51049c;
case 0x51049f:c.instructions+=1;goto B51049f;
case 0x5104a1:goto L5104a1;
case 0x5104a4:c.instructions+=1;goto B5104a4;
case 0x5104a7:goto L5104a7;
case 0x5104a9:c.instructions+=1;goto B5104a9;
case 0x5104b0:goto L5104b0;
case 0x5104b5:c.instructions+=5;goto B5104b5;
case 0x5104bf:c.instructions+=4;goto B5104bf;
case 0x5104c5:c.instructions+=3;goto B5104c5;
case 0x5104cb:c.instructions+=2;goto B5104cb;
case 0x5104ce:c.instructions+=1;goto B5104ce;
case 0x5104d0:goto L5104d0;
case 0x5104d2:c.instructions+=38;goto B5104d2;
case 0x5104d7:c.instructions+=37;goto B5104d7;
case 0x5104dd:c.instructions+=36;goto B5104dd;
case 0x5104de:c.instructions+=35;goto B5104de;
case 0x5104e5:c.instructions+=34;goto B5104e5;
case 0x5104e6:c.instructions+=33;goto B5104e6;
case 0x5104e7:c.instructions+=32;goto B5104e7;
case 0x5104e9:c.instructions+=31;goto B5104e9;
case 0x5104ea:c.instructions+=30;goto B5104ea;
case 0x5104ec:c.instructions+=29;goto B5104ec;
case 0x5104f2:c.instructions+=28;goto B5104f2;
case 0x5104f6:c.instructions+=27;goto B5104f6;
case 0x5104fa:c.instructions+=26;goto B5104fa;
case 0x510501:c.instructions+=25;goto B510501;
case 0x510508:c.instructions+=24;goto B510508;
case 0x51050b:c.instructions+=23;goto B51050b;
case 0x51050e:c.instructions+=22;goto B51050e;
case 0x510511:c.instructions+=21;goto B510511;
case 0x510514:c.instructions+=20;goto B510514;
case 0x510517:c.instructions+=19;goto B510517;
case 0x51051a:c.instructions+=18;goto B51051a;
case 0x51051d:c.instructions+=17;goto B51051d;
case 0x510520:c.instructions+=16;goto B510520;
case 0x510523:c.instructions+=15;goto B510523;
case 0x510526:c.instructions+=14;goto B510526;
case 0x510529:c.instructions+=13;goto B510529;
case 0x51052c:c.instructions+=12;goto B51052c;
case 0x51052f:c.instructions+=11;goto B51052f;
case 0x510536:c.instructions+=10;goto B510536;
case 0x510539:c.instructions+=9;goto B510539;
case 0x51053e:c.instructions+=8;goto B51053e;
case 0x510543:c.instructions+=7;goto B510543;
case 0x510548:c.instructions+=6;goto B510548;
case 0x51054d:c.instructions+=5;goto B51054d;
case 0x510551:c.instructions+=4;goto B510551;
case 0x510554:c.instructions+=3;goto B510554;
case 0x510557:c.instructions+=2;goto B510557;
case 0x51055a:c.instructions+=1;goto B51055a;
case 0x51055f:goto L51055f;
case 0x510564:c.instructions+=5;goto B510564;
case 0x510565:c.instructions+=4;goto B510565;
case 0x51056a:c.instructions+=3;goto B51056a;
case 0x51056f:c.instructions+=2;goto B51056f;
case 0x510575:c.instructions+=1;goto B510575;
case 0x51057a:goto L51057a;
case 0x51057f:c.instructions+=5;goto B51057f;
case 0x510581:c.instructions+=4;goto B510581;
case 0x510586:c.instructions+=3;goto B510586;
case 0x51058b:c.instructions+=2;goto B51058b;
case 0x510591:c.instructions+=1;goto B510591;
case 0x510596:goto L510596;
case 0x51059a:c.instructions+=8;goto B51059a;
case 0x5105a0:c.instructions+=7;goto B5105a0;
case 0x5105a3:c.instructions+=6;goto B5105a3;
case 0x5105a5:c.instructions+=5;goto B5105a5;
case 0x5105a6:c.instructions+=4;goto B5105a6;
case 0x5105a7:c.instructions+=3;goto B5105a7;
case 0x5105ae:c.instructions+=2;goto B5105ae;
case 0x5105b1:c.instructions+=1;goto B5105b1;
case 0x5105c0:goto L5105c0;
case 0x5105c1:c.instructions+=5;goto B5105c1;
case 0x5105c3:c.instructions+=4;goto B5105c3;
case 0x5105c6:c.instructions+=3;goto B5105c6;
case 0x5105c9:c.instructions+=2;goto B5105c9;
case 0x5105ca:c.instructions+=1;goto B5105ca;
case 0x5105cc:goto L5105cc;
case 0x5105cd:c.instructions+=1;goto B5105cd;
case 0x5105d2:goto L5105d2;
case 0x5105d5:c.instructions+=1;goto B5105d5;
case 0x5105d7:goto L5105d7;
case 0x5105d9:goto L5105d9;
case 0x5105dd:c.instructions+=5;goto B5105dd;
case 0x5105e1:c.instructions+=4;goto B5105e1;
case 0x5105e3:c.instructions+=3;goto B5105e3;
case 0x5105e6:c.instructions+=2;goto B5105e6;
case 0x5105e9:c.instructions+=1;goto B5105e9;
case 0x5105eb:goto L5105eb;
case 0x5105ec:c.instructions+=1;goto B5105ec;
case 0x5105f1:goto L5105f1;
case 0x5105f4:c.instructions+=1;goto B5105f4;
case 0x5105f6:goto L5105f6;
case 0x5105f8:goto L5105f8;
case 0x5105fc:c.instructions+=4;goto B5105fc;
case 0x5105ff:c.instructions+=3;goto B5105ff;
case 0x510602:c.instructions+=2;goto B510602;
case 0x510605:c.instructions+=1;goto B510605;
case 0x510607:goto L510607;
case 0x510608:c.instructions+=1;goto B510608;
case 0x51060d:goto L51060d;
case 0x510610:c.instructions+=1;goto B510610;
case 0x510612:goto L510612;
case 0x510614:goto L510614;
case 0x510618:c.instructions+=4;goto B510618;
case 0x51061b:c.instructions+=3;goto B51061b;
case 0x51061e:c.instructions+=2;goto B51061e;
case 0x510621:c.instructions+=1;goto B510621;
case 0x510623:goto L510623;
case 0x510624:c.instructions+=1;goto B510624;
case 0x510629:goto L510629;
case 0x51062c:c.instructions+=1;goto B51062c;
case 0x51062e:goto L51062e;
case 0x510630:goto L510630;
case 0x510634:c.instructions+=4;goto B510634;
case 0x510637:c.instructions+=3;goto B510637;
case 0x51063a:c.instructions+=2;goto B51063a;
case 0x51063c:c.instructions+=1;goto B51063c;
case 0x51063e:goto L51063e;
case 0x51063f:c.instructions+=1;goto B51063f;
case 0x510644:goto L510644;
case 0x510647:c.instructions+=1;goto B510647;
case 0x510649:goto L510649;
case 0x51064b:goto L51064b;
case 0x51064f:c.instructions+=4;goto B51064f;
case 0x510652:c.instructions+=3;goto B510652;
case 0x510655:c.instructions+=2;goto B510655;
case 0x510657:c.instructions+=1;goto B510657;
case 0x510659:goto L510659;
case 0x51065a:c.instructions+=1;goto B51065a;
case 0x51065f:goto L51065f;
case 0x510663:c.instructions+=5;goto B510663;
case 0x510666:c.instructions+=4;goto B510666;
case 0x510669:c.instructions+=3;goto B510669;
case 0x51066a:c.instructions+=2;goto B51066a;
case 0x51066b:c.instructions+=1;goto B51066b;
case 0x51066e:goto L51066e;
case 0x510670:c.instructions+=5;goto B510670;
case 0x510674:c.instructions+=4;goto B510674;
case 0x510677:c.instructions+=3;goto B510677;
case 0x510678:c.instructions+=2;goto B510678;
case 0x510679:c.instructions+=1;goto B510679;
case 0x510680:goto L510680;
case 0x510681:c.instructions+=5;goto B510681;
case 0x510683:c.instructions+=4;goto B510683;
case 0x510686:c.instructions+=3;goto B510686;
case 0x510689:c.instructions+=2;goto B510689;
case 0x51068a:c.instructions+=1;goto B51068a;
case 0x51068c:goto L51068c;
case 0x51068d:c.instructions+=1;goto B51068d;
case 0x510692:goto L510692;
case 0x510695:c.instructions+=1;goto B510695;
case 0x510697:goto L510697;
case 0x510699:goto L510699;
case 0x51069d:c.instructions+=5;goto B51069d;
case 0x5106a1:c.instructions+=4;goto B5106a1;
case 0x5106a3:c.instructions+=3;goto B5106a3;
case 0x5106a6:c.instructions+=2;goto B5106a6;
case 0x5106a9:c.instructions+=1;goto B5106a9;
case 0x5106ab:goto L5106ab;
case 0x5106ac:c.instructions+=1;goto B5106ac;
case 0x5106b1:goto L5106b1;
case 0x5106b4:c.instructions+=1;goto B5106b4;
case 0x5106b6:goto L5106b6;
case 0x5106b8:goto L5106b8;
case 0x5106bc:c.instructions+=4;goto B5106bc;
case 0x5106bf:c.instructions+=3;goto B5106bf;
case 0x5106c2:c.instructions+=2;goto B5106c2;
case 0x5106c4:c.instructions+=1;goto B5106c4;
case 0x5106c6:goto L5106c6;
case 0x5106c7:c.instructions+=1;goto B5106c7;
case 0x5106cc:goto L5106cc;
case 0x5106cf:c.instructions+=1;goto B5106cf;
case 0x5106d1:goto L5106d1;
case 0x5106d3:goto L5106d3;
case 0x5106d6:c.instructions+=5;goto B5106d6;
case 0x5106da:c.instructions+=4;goto B5106da;
case 0x5106dd:c.instructions+=3;goto B5106dd;
case 0x5106e0:c.instructions+=2;goto B5106e0;
case 0x5106e2:c.instructions+=1;goto B5106e2;
case 0x5106e4:goto L5106e4;
case 0x5106e5:c.instructions+=1;goto B5106e5;
case 0x5106ea:goto L5106ea;
case 0x5106ee:c.instructions+=5;goto B5106ee;
case 0x5106f1:c.instructions+=4;goto B5106f1;
case 0x5106f4:c.instructions+=3;goto B5106f4;
case 0x5106f5:c.instructions+=2;goto B5106f5;
case 0x5106f6:c.instructions+=1;goto B5106f6;
case 0x5106f9:goto L5106f9;
case 0x5106fb:c.instructions+=5;goto B5106fb;
case 0x5106ff:c.instructions+=4;goto B5106ff;
case 0x510702:c.instructions+=3;goto B510702;
case 0x510703:c.instructions+=2;goto B510703;
case 0x510704:c.instructions+=1;goto B510704;
case 0x510710:goto L510710;
case 0x510713:c.instructions+=6;goto B510713;
case 0x510714:c.instructions+=5;goto B510714;
case 0x510718:c.instructions+=4;goto B510718;
case 0x51071b:c.instructions+=3;goto B51071b;
case 0x51071e:c.instructions+=2;goto B51071e;
case 0x510720:c.instructions+=1;goto B510720;
case 0x510722:goto L510722;
case 0x510723:c.instructions+=5;goto B510723;
case 0x510726:c.instructions+=4;goto B510726;
case 0x51072a:c.instructions+=3;goto B51072a;
case 0x51072d:c.instructions+=2;goto B51072d;
case 0x51072e:c.instructions+=1;goto B51072e;
case 0x510731:goto L510731;
case 0x510733:goto L510733;
case 0x51073a:goto L51073a;
case 0x51073d:c.instructions+=4;goto B51073d;
case 0x510741:c.instructions+=3;goto B510741;
case 0x510744:c.instructions+=2;goto B510744;
case 0x510745:c.instructions+=1;goto B510745;
case 0x510750:goto L510750;
case 0x510751:c.instructions+=5;goto B510751;
case 0x510754:c.instructions+=4;goto B510754;
case 0x510756:c.instructions+=3;goto B510756;
case 0x510758:c.instructions+=2;goto B510758;
case 0x510759:c.instructions+=1;goto B510759;
case 0x51075b:goto L51075b;
case 0x51075f:c.instructions+=1;goto B51075f;
case 0x510765:goto L510765;
case 0x510767:c.instructions+=1;goto B510767;
case 0x510769:goto L510769;
case 0x51076a:c.instructions+=3;goto B51076a;
case 0x51076d:c.instructions+=2;goto B51076d;
case 0x51076f:c.instructions+=1;goto B51076f;
case 0x510771:goto L510771;
case 0x510772:c.instructions+=3;goto B510772;
case 0x510773:c.instructions+=2;goto B510773;
case 0x510775:c.instructions+=1;goto B510775;
case 0x510778:goto L510778;
case 0x510779:c.instructions+=4;goto B510779;
case 0x51077c:c.instructions+=3;goto B51077c;
case 0x51077d:c.instructions+=2;goto B51077d;
case 0x510784:c.instructions+=1;goto B510784;
case 0x510790:goto L510790;
case 0x510791:c.instructions+=5;goto B510791;
case 0x510794:c.instructions+=4;goto B510794;
case 0x510796:c.instructions+=3;goto B510796;
case 0x510798:c.instructions+=2;goto B510798;
case 0x510799:c.instructions+=1;goto B510799;
case 0x51079b:goto L51079b;
case 0x51079f:c.instructions+=1;goto B51079f;
case 0x5107a5:goto L5107a5;
case 0x5107a7:c.instructions+=1;goto B5107a7;
case 0x5107a9:goto L5107a9;
case 0x5107aa:c.instructions+=3;goto B5107aa;
case 0x5107ad:c.instructions+=2;goto B5107ad;
case 0x5107af:c.instructions+=1;goto B5107af;
case 0x5107b1:goto L5107b1;
case 0x5107b2:c.instructions+=3;goto B5107b2;
case 0x5107b3:c.instructions+=2;goto B5107b3;
case 0x5107b5:c.instructions+=1;goto B5107b5;
case 0x5107b8:goto L5107b8;
case 0x5107bb:c.instructions+=4;goto B5107bb;
case 0x5107bc:c.instructions+=3;goto B5107bc;
case 0x5107bd:c.instructions+=2;goto B5107bd;
case 0x5107c4:c.instructions+=1;goto B5107c4;
case 0x5107d0:goto L5107d0;
case 0x5107d1:c.instructions+=5;goto B5107d1;
case 0x5107d3:c.instructions+=4;goto B5107d3;
case 0x5107d5:c.instructions+=3;goto B5107d5;
case 0x5107d7:c.instructions+=2;goto B5107d7;
case 0x5107d8:c.instructions+=1;goto B5107d8;
case 0x5107da:goto L5107da;
case 0x5107de:c.instructions+=1;goto B5107de;
case 0x5107e1:goto L5107e1;
case 0x5107e3:c.instructions+=1;goto B5107e3;
case 0x5107e5:goto L5107e5;
case 0x5107e6:c.instructions+=3;goto B5107e6;
case 0x5107e9:c.instructions+=2;goto B5107e9;
case 0x5107eb:c.instructions+=1;goto B5107eb;
case 0x5107ed:goto L5107ed;
case 0x5107ee:c.instructions+=3;goto B5107ee;
case 0x5107ef:c.instructions+=2;goto B5107ef;
case 0x5107f1:c.instructions+=1;goto B5107f1;
case 0x5107f4:goto L5107f4;
case 0x5107f7:c.instructions+=4;goto B5107f7;
case 0x5107f8:c.instructions+=3;goto B5107f8;
case 0x5107f9:c.instructions+=2;goto B5107f9;
case 0x5107fd:c.instructions+=1;goto B5107fd;
case 0x510800:goto L510800;
case 0x510801:c.instructions+=5;goto B510801;
case 0x510804:c.instructions+=4;goto B510804;
case 0x510806:c.instructions+=3;goto B510806;
case 0x510808:c.instructions+=2;goto B510808;
case 0x510809:c.instructions+=1;goto B510809;
case 0x51080b:goto L51080b;
case 0x51080f:c.instructions+=1;goto B51080f;
case 0x510815:goto L510815;
case 0x510817:c.instructions+=1;goto B510817;
case 0x510819:goto L510819;
case 0x51081a:c.instructions+=3;goto B51081a;
case 0x51081d:c.instructions+=2;goto B51081d;
case 0x51081f:c.instructions+=1;goto B51081f;
case 0x510821:goto L510821;
case 0x510822:c.instructions+=3;goto B510822;
case 0x510823:c.instructions+=2;goto B510823;
case 0x510825:c.instructions+=1;goto B510825;
case 0x510828:goto L510828;
case 0x510829:c.instructions+=4;goto B510829;
case 0x51082c:c.instructions+=3;goto B51082c;
case 0x51082d:c.instructions+=2;goto B51082d;
case 0x510834:c.instructions+=1;goto B510834;
case 0x510840:goto L510840;
case 0x510841:c.instructions+=5;goto B510841;
case 0x510844:c.instructions+=4;goto B510844;
case 0x510846:c.instructions+=3;goto B510846;
case 0x510848:c.instructions+=2;goto B510848;
case 0x510849:c.instructions+=1;goto B510849;
case 0x51084b:goto L51084b;
case 0x51084f:c.instructions+=1;goto B51084f;
case 0x510855:goto L510855;
case 0x510857:c.instructions+=1;goto B510857;
case 0x510859:goto L510859;
case 0x51085a:c.instructions+=3;goto B51085a;
case 0x51085d:c.instructions+=2;goto B51085d;
case 0x51085f:c.instructions+=1;goto B51085f;
case 0x510861:goto L510861;
case 0x510862:c.instructions+=3;goto B510862;
case 0x510863:c.instructions+=2;goto B510863;
case 0x510865:c.instructions+=1;goto B510865;
case 0x510868:goto L510868;
case 0x51086b:c.instructions+=4;goto B51086b;
case 0x51086c:c.instructions+=3;goto B51086c;
case 0x51086d:c.instructions+=2;goto B51086d;
case 0x510874:c.instructions+=1;goto B510874;
case 0x510880:goto L510880;
case 0x510884:c.instructions+=3;goto B510884;
case 0x510887:c.instructions+=2;goto B510887;
case 0x51088e:c.instructions+=1;goto B51088e;
case 0x5108a0:goto L5108a0;
case 0x5108a4:c.instructions+=2;goto B5108a4;
case 0x5108aa:c.instructions+=1;goto B5108aa;
case 0x5108ac:goto L5108ac;
case 0x5108af:c.instructions+=3;goto B5108af;
case 0x5108b4:c.instructions+=2;goto B5108b4;
case 0x5108b9:c.instructions+=1;goto B5108b9;
case 0x5108ba:goto L5108ba;
case 0x5108bc:c.instructions+=1;goto B5108bc;
case 0x5108c0:goto L5108c0;
case 0x5108c4:c.instructions+=2;goto B5108c4;
case 0x5108ca:c.instructions+=1;goto B5108ca;
case 0x5108cc:goto L5108cc;
case 0x5108d6:c.instructions+=2;goto B5108d6;
case 0x5108db:c.instructions+=1;goto B5108db;
case 0x5108dc:goto L5108dc;
case 0x5108de:c.instructions+=1;goto B5108de;
case 0x5108e0:goto L5108e0;
case 0x5108e4:c.instructions+=2;goto B5108e4;
case 0x5108ea:c.instructions+=1;goto B5108ea;
case 0x5108ec:goto L5108ec;
case 0x5108ef:c.instructions+=3;goto B5108ef;
case 0x5108f4:c.instructions+=2;goto B5108f4;
case 0x5108f9:c.instructions+=1;goto B5108f9;
case 0x5108fa:goto L5108fa;
case 0x5108fc:c.instructions+=1;goto B5108fc;
case 0x510900:goto L510900;
case 0x510904:c.instructions+=2;goto B510904;
case 0x51090a:c.instructions+=1;goto B51090a;
case 0x51090c:goto L51090c;
case 0x510916:c.instructions+=2;goto B510916;
case 0x51091b:c.instructions+=1;goto B51091b;
case 0x51091c:goto L51091c;
case 0x51091e:c.instructions+=1;goto B51091e;
case 0x510920:goto L510920;
case 0x510922:c.instructions+=9;goto B510922;
case 0x510924:c.instructions+=8;goto B510924;
case 0x510926:c.instructions+=7;goto B510926;
case 0x510929:c.instructions+=6;goto B510929;
case 0x51092c:c.instructions+=5;goto B51092c;
case 0x51092f:c.instructions+=4;goto B51092f;
case 0x510932:c.instructions+=3;goto B510932;
case 0x510935:c.instructions+=2;goto B510935;
case 0x510938:c.instructions+=1;goto B510938;
case 0x510940:goto L510940;
case 0x510944:c.instructions+=8;goto B510944;
case 0x510945:c.instructions+=7;goto B510945;
case 0x510947:c.instructions+=6;goto B510947;
case 0x510949:c.instructions+=5;goto B510949;
case 0x51094d:c.instructions+=4;goto B51094d;
case 0x51094f:c.instructions+=3;goto B51094f;
case 0x510952:c.instructions+=2;goto B510952;
case 0x510959:c.instructions+=1;goto B510959;
case 0x51095b:goto L51095b;
case 0x51095d:c.instructions+=4;goto B51095d;
case 0x510962:c.instructions+=3;goto B510962;
case 0x510964:c.instructions+=2;goto B510964;
case 0x510969:c.instructions+=1;goto B510969;
case 0x51096e:goto L51096e;
case 0x510971:goto L510971;
case 0x510973:c.instructions+=3;goto B510973;
case 0x51097a:c.instructions+=2;goto B51097a;
case 0x51097b:c.instructions+=1;goto B51097b;
case 0x510980:goto L510980;
case 0x510983:c.instructions+=2;goto B510983;
case 0x510985:c.instructions+=1;goto B510985;
case 0x510987:goto L510987;
case 0x510988:c.instructions+=6;goto B510988;
case 0x510989:c.instructions+=5;goto B510989;
case 0x51098a:c.instructions+=4;goto B51098a;
case 0x51098c:c.instructions+=3;goto B51098c;
case 0x510993:c.instructions+=2;goto B510993;
case 0x510994:c.instructions+=1;goto B510994;
case 0x510999:goto L510999;
case 0x51099b:c.instructions+=3;goto B51099b;
case 0x5109a2:c.instructions+=2;goto B5109a2;
case 0x5109a3:c.instructions+=1;goto B5109a3;
case 0x5109a8:goto L5109a8;
case 0x5109ab:c.instructions+=1;goto B5109ab;
case 0x5109b0:goto L5109b0;
case 0x5109b2:c.instructions+=1;goto B5109b2;
case 0x5109b4:goto L5109b4;
case 0x5109b9:goto L5109b9;
case 0x5109be:goto L5109be;
case 0x5109c0:c.instructions+=1;goto B5109c0;
case 0x5109c2:goto L5109c2;
case 0x5109c3:c.instructions+=1;goto B5109c3;
case 0x5109d0:goto L5109d0;
case 0x5109d1:c.instructions+=4;goto B5109d1;
case 0x5109d3:c.instructions+=3;goto B5109d3;
case 0x5109d6:c.instructions+=2;goto B5109d6;
case 0x5109d8:c.instructions+=1;goto B5109d8;
case 0x5109da:goto L5109da;
case 0x5109dd:c.instructions+=2;goto B5109dd;
case 0x5109df:c.instructions+=1;goto B5109df;
case 0x5109e1:goto L5109e1;
case 0x5109e4:c.instructions+=2;goto B5109e4;
case 0x5109e6:c.instructions+=1;goto B5109e6;
case 0x5109e8:goto L5109e8;
case 0x5109eb:c.instructions+=2;goto B5109eb;
case 0x5109ed:c.instructions+=1;goto B5109ed;
case 0x5109ef:goto L5109ef;
case 0x5109f1:c.instructions+=3;goto B5109f1;
case 0x5109f2:c.instructions+=2;goto B5109f2;
case 0x5109f7:c.instructions+=1;goto B5109f7;
case 0x5109f9:goto L5109f9;
case 0x5109fb:c.instructions+=3;goto B5109fb;
case 0x5109fd:c.instructions+=2;goto B5109fd;
case 0x5109fe:c.instructions+=1;goto B5109fe;
case 0x510a03:goto L510a03;
case 0x510a06:c.instructions+=5;goto B510a06;
case 0x510a08:c.instructions+=4;goto B510a08;
case 0x510a0a:c.instructions+=3;goto B510a0a;
case 0x510a0c:c.instructions+=2;goto B510a0c;
case 0x510a0e:c.instructions+=1;goto B510a0e;
case 0x510a11:goto L510a11;
case 0x510a14:c.instructions+=2;goto B510a14;
case 0x510a16:c.instructions+=1;goto B510a16;
case 0x510a18:goto L510a18;
case 0x510a1a:c.instructions+=3;goto B510a1a;
case 0x510a1c:c.instructions+=2;goto B510a1c;
case 0x510a1d:c.instructions+=1;goto B510a1d;
case 0x510a22:goto L510a22;
case 0x510a25:c.instructions+=4;goto B510a25;
case 0x510a27:c.instructions+=3;goto B510a27;
case 0x510a29:c.instructions+=2;goto B510a29;
case 0x510a2b:c.instructions+=1;goto B510a2b;
case 0x510a2d:goto L510a2d;
case 0x510a30:c.instructions+=2;goto B510a30;
case 0x510a32:c.instructions+=1;goto B510a32;
case 0x510a34:goto L510a34;
case 0x510a36:c.instructions+=3;goto B510a36;
case 0x510a38:c.instructions+=2;goto B510a38;
case 0x510a39:c.instructions+=1;goto B510a39;
case 0x510a3e:goto L510a3e;
case 0x510a41:c.instructions+=4;goto B510a41;
case 0x510a43:c.instructions+=3;goto B510a43;
case 0x510a45:c.instructions+=2;goto B510a45;
case 0x510a47:c.instructions+=1;goto B510a47;
case 0x510a49:goto L510a49;
case 0x510a4c:c.instructions+=2;goto B510a4c;
case 0x510a4e:c.instructions+=1;goto B510a4e;
case 0x510a50:goto L510a50;
case 0x510a52:c.instructions+=3;goto B510a52;
case 0x510a54:c.instructions+=2;goto B510a54;
case 0x510a55:c.instructions+=1;goto B510a55;
case 0x510a5a:goto L510a5a;
case 0x510a5d:c.instructions+=4;goto B510a5d;
case 0x510a5f:c.instructions+=3;goto B510a5f;
case 0x510a61:c.instructions+=2;goto B510a61;
case 0x510a63:c.instructions+=1;goto B510a63;
case 0x510a65:goto L510a65;
case 0x510a68:c.instructions+=1;goto B510a68;
case 0x510a69:goto L510a69;
case 0x510a6a:c.instructions+=1;goto B510a6a;
case 0x510a70:goto L510a70;
case 0x510a71:c.instructions+=6;goto B510a71;
case 0x510a73:c.instructions+=5;goto B510a73;
case 0x510a76:c.instructions+=4;goto B510a76;
case 0x510a77:c.instructions+=3;goto B510a77;
case 0x510a79:c.instructions+=2;goto B510a79;
case 0x510a7b:c.instructions+=1;goto B510a7b;
case 0x510a7d:goto L510a7d;
case 0x510a7e:c.instructions+=1;goto B510a7e;
case 0x510a83:goto L510a83;
case 0x510a86:goto L510a86;
case 0x510a89:c.instructions+=2;goto B510a89;
case 0x510a8b:c.instructions+=1;goto B510a8b;
case 0x510a8d:goto L510a8d;
case 0x510a8e:c.instructions+=1;goto B510a8e;
case 0x510a93:goto L510a93;
case 0x510a96:goto L510a96;
case 0x510a99:c.instructions+=2;goto B510a99;
case 0x510a9b:c.instructions+=1;goto B510a9b;
case 0x510a9d:goto L510a9d;
case 0x510a9e:c.instructions+=1;goto B510a9e;
case 0x510aa3:goto L510aa3;
case 0x510aa6:goto L510aa6;
case 0x510aa9:c.instructions+=2;goto B510aa9;
case 0x510aab:c.instructions+=1;goto B510aab;
case 0x510aad:goto L510aad;
case 0x510aae:c.instructions+=1;goto B510aae;
case 0x510ab3:goto L510ab3;
case 0x510ab6:goto L510ab6;
case 0x510ab9:c.instructions+=7;goto B510ab9;
case 0x510abc:c.instructions+=6;goto B510abc;
case 0x510abf:c.instructions+=5;goto B510abf;
case 0x510ac2:c.instructions+=4;goto B510ac2;
case 0x510ac5:c.instructions+=3;goto B510ac5;
case 0x510ac6:c.instructions+=2;goto B510ac6;
case 0x510ac7:c.instructions+=1;goto B510ac7;
case 0x510ad0:goto L510ad0;
case 0x510ad5:c.instructions+=1;goto B510ad5;
case 0x510ae0:goto L510ae0;
case 0x510ae5:c.instructions+=1;goto B510ae5;
case 0x510af0:goto L510af0;
case 0x510af1:c.instructions+=3;goto B510af1;
case 0x510af2:c.instructions+=2;goto B510af2;
case 0x510af7:c.instructions+=1;goto B510af7;
case 0x510afc:goto L510afc;
case 0x510afe:c.instructions+=3;goto B510afe;
case 0x510b01:c.instructions+=2;goto B510b01;
case 0x510b03:c.instructions+=1;goto B510b03;
case 0x510b05:goto L510b05;
case 0x510b06:c.instructions+=5;goto B510b06;
case 0x510b08:c.instructions+=4;goto B510b08;
case 0x510b0a:c.instructions+=3;goto B510b0a;
case 0x510b0d:c.instructions+=2;goto B510b0d;
case 0x510b12:c.instructions+=1;goto B510b12;
case 0x510b17:goto L510b17;
case 0x510b19:goto L510b19;
case 0x510b1b:c.instructions+=1;goto B510b1b;
case 0x510b1e:goto L510b1e;
case 0x510b20:goto L510b20;
case 0x510b21:goto L510b21;
case 0x510b24:c.instructions+=1;goto B510b24;
case 0x510b26:goto L510b26;
case 0x510b2b:c.instructions+=5;goto B510b2b;
case 0x510b2d:c.instructions+=4;goto B510b2d;
case 0x510b2f:c.instructions+=3;goto B510b2f;
case 0x510b32:c.instructions+=2;goto B510b32;
case 0x510b38:c.instructions+=1;goto B510b38;
case 0x510b3d:goto L510b3d;
case 0x510b3f:goto L510b3f;
case 0x510b41:c.instructions+=1;goto B510b41;
case 0x510b44:goto L510b44;
case 0x510b46:goto L510b46;
case 0x510b4a:c.instructions+=5;goto B510b4a;
case 0x510b4d:c.instructions+=4;goto B510b4d;
case 0x510b4e:c.instructions+=3;goto B510b4e;
case 0x510b4f:c.instructions+=2;goto B510b4f;
case 0x510b55:c.instructions+=1;goto B510b55;
case 0x510b57:goto L510b57;
case 0x510b59:c.instructions+=3;goto B510b59;
case 0x510b5e:c.instructions+=2;goto B510b5e;
case 0x510b63:c.instructions+=1;goto B510b63;
case 0x510b64:goto L510b64;
case 0x510b66:c.instructions+=3;goto B510b66;
case 0x510b6b:c.instructions+=2;goto B510b6b;
case 0x510b70:c.instructions+=1;goto B510b70;
case 0x510b80:goto L510b80;
case 0x510b81:c.instructions+=9;goto B510b81;
case 0x510b82:c.instructions+=8;goto B510b82;
case 0x510b83:c.instructions+=7;goto B510b83;
case 0x510b87:c.instructions+=6;goto B510b87;
case 0x510b89:c.instructions+=5;goto B510b89;
case 0x510b8b:c.instructions+=4;goto B510b8b;
case 0x510b8d:c.instructions+=3;goto B510b8d;
case 0x510b8f:c.instructions+=2;goto B510b8f;
case 0x510b91:c.instructions+=1;goto B510b91;
case 0x510b93:goto L510b93;
case 0x510b94:c.instructions+=2;goto B510b94;
case 0x510b9a:c.instructions+=1;goto B510b9a;
case 0x510ba0:goto L510ba0;
case 0x510ba2:c.instructions+=1;goto B510ba2;
case 0x510ba4:goto L510ba4;
case 0x510baa:c.instructions+=1;goto B510baa;
case 0x510bac:goto L510bac;
case 0x510bae:c.instructions+=1;goto B510bae;
case 0x510bb0:goto L510bb0;
case 0x510bb2:goto L510bb2;
case 0x510bb5:c.instructions+=2;goto B510bb5;
case 0x510bb7:c.instructions+=1;goto B510bb7;
case 0x510bb9:goto L510bb9;
case 0x510bbb:c.instructions+=1;goto B510bbb;
case 0x510bbd:goto L510bbd;
case 0x510bbf:c.instructions+=1;goto B510bbf;
case 0x510bc1:goto L510bc1;
case 0x510bc3:c.instructions+=1;goto B510bc3;
case 0x510bc5:goto L510bc5;
case 0x510bc6:c.instructions+=1;goto B510bc6;
case 0x510bc8:goto L510bc8;
case 0x510bc9:goto L510bc9;
case 0x510bca:c.instructions+=3;goto B510bca;
case 0x510bcd:c.instructions+=2;goto B510bcd;
case 0x510bcf:c.instructions+=1;goto B510bcf;
case 0x510bd1:goto L510bd1;
case 0x510bd2:goto L510bd2;
case 0x510bd5:c.instructions+=2;goto B510bd5;
case 0x510bd8:c.instructions+=1;goto B510bd8;
case 0x510bda:goto L510bda;
case 0x510bdd:c.instructions+=1;goto B510bdd;
case 0x510bdf:goto L510bdf;
case 0x510be2:c.instructions+=1;goto B510be2;
case 0x510be4:goto L510be4;
case 0x510be7:c.instructions+=1;goto B510be7;
case 0x510be9:goto L510be9;
case 0x510bed:c.instructions+=6;goto B510bed;
case 0x510bf1:c.instructions+=5;goto B510bf1;
case 0x510bf2:c.instructions+=4;goto B510bf2;
case 0x510bf7:c.instructions+=3;goto B510bf7;
case 0x510bf8:c.instructions+=2;goto B510bf8;
case 0x510bf9:c.instructions+=1;goto B510bf9;
case 0x510bfe:goto L510bfe;
case 0x510c01:c.instructions+=4;goto B510c01;
case 0x510c02:c.instructions+=3;goto B510c02;
case 0x510c03:c.instructions+=2;goto B510c03;
case 0x510c04:c.instructions+=1;goto B510c04;
case 0x510c05:goto L510c05;
case 0x510c09:c.instructions+=6;goto B510c09;
case 0x510c0d:c.instructions+=5;goto B510c0d;
case 0x510c0e:c.instructions+=4;goto B510c0e;
case 0x510c13:c.instructions+=3;goto B510c13;
case 0x510c14:c.instructions+=2;goto B510c14;
case 0x510c15:c.instructions+=1;goto B510c15;
case 0x510c1a:goto L510c1a;
case 0x510c1d:goto L510c1d;
case 0x510c1e:c.instructions+=3;goto B510c1e;
case 0x510c1f:c.instructions+=2;goto B510c1f;
case 0x510c20:c.instructions+=1;goto B510c20;
case 0x510c30:goto L510c30;
case 0x510c35:c.instructions+=1;goto B510c35;
case 0x510c40:goto L510c40;
case 0x510c45:c.instructions+=1;goto B510c45;
case 0x510c50:goto L510c50;
case 0x510c5a:c.instructions+=1;goto B510c5a;
case 0x510c60:goto L510c60;
case 0x510c6a:c.instructions+=1;goto B510c6a;
case 0x510c70:goto L510c70;
case 0x510c7a:c.instructions+=1;goto B510c7a;
case 0x510c80:goto L510c80;
case 0x510c87:c.instructions+=1;goto B510c87;
case 0x510c90:goto L510c90;
case 0x510c95:c.instructions+=2;goto B510c95;
case 0x510c97:c.instructions+=1;goto B510c97;
case 0x510c99:goto L510c99;
case 0x510c9b:c.instructions+=8;goto B510c9b;
case 0x510c9d:c.instructions+=7;goto B510c9d;
case 0x510c9f:c.instructions+=6;goto B510c9f;
case 0x510ca4:c.instructions+=5;goto B510ca4;
case 0x510ca6:c.instructions+=4;goto B510ca6;
case 0x510ca8:c.instructions+=3;goto B510ca8;
case 0x510cad:c.instructions+=2;goto B510cad;
case 0x510cb4:c.instructions+=1;goto B510cb4;
case 0x510cb9:goto L510cb9;
case 0x510cbc:c.instructions+=2;goto B510cbc;
case 0x510cc1:c.instructions+=1;goto B510cc1;
case 0x510cc6:goto L510cc6;
case 0x510cc8:c.instructions+=1;goto B510cc8;
case 0x510cca:goto L510cca;
case 0x510cd0:goto L510cd0;
case 0x510cd5:goto L510cd5;
case 0x510cda:goto L510cda;
case 0x510cdc:c.instructions+=1;goto B510cdc;
case 0x510cde:goto L510cde;
case 0x510ce0:goto L510ce0;
case 0x510ce5:c.instructions+=4;goto B510ce5;
case 0x510ce7:c.instructions+=3;goto B510ce7;
case 0x510ce8:c.instructions+=2;goto B510ce8;
case 0x510cea:c.instructions+=1;goto B510cea;
case 0x510cec:goto L510cec;
case 0x510ced:c.instructions+=1;goto B510ced;
case 0x510cf2:goto L510cf2;
case 0x510cf5:c.instructions+=2;goto B510cf5;
case 0x510cfc:c.instructions+=1;goto B510cfc;
case 0x510d06:goto L510d06;
case 0x510d0c:c.instructions+=2;goto B510d0c;
case 0x510d0e:c.instructions+=1;goto B510d0e;
case 0x510d10:goto L510d10;
case 0x510d15:goto L510d15;
case 0x510d1b:c.instructions+=2;goto B510d1b;
case 0x510d1c:c.instructions+=1;goto B510d1c;
case 0x510d21:goto L510d21;
case 0x510d22:c.instructions+=1;goto B510d22;
case 0x510d27:goto L510d27;
case 0x510d2a:c.instructions+=1;goto B510d2a;
case 0x510d31:goto L510d31;
case 0x510d32:c.instructions+=1;goto B510d32;
case 0x510d40:goto L510d40;
case 0x510d46:c.instructions+=1;goto B510d46;
case 0x510d50:goto L510d50;
case 0x510d51:c.instructions+=9;goto B510d51;
case 0x510d53:c.instructions+=8;goto B510d53;
case 0x510d56:c.instructions+=7;goto B510d56;
case 0x510d5c:c.instructions+=6;goto B510d5c;
case 0x510d5d:c.instructions+=5;goto B510d5d;
case 0x510d5f:c.instructions+=4;goto B510d5f;
case 0x510d61:c.instructions+=3;goto B510d61;
case 0x510d63:c.instructions+=2;goto B510d63;
case 0x510d66:c.instructions+=1;goto B510d66;
case 0x510d6c:goto L510d6c;
case 0x510d71:c.instructions+=5;goto B510d71;
case 0x510d72:c.instructions+=4;goto B510d72;
case 0x510d75:c.instructions+=3;goto B510d75;
case 0x510d7a:c.instructions+=2;goto B510d7a;
case 0x510d7b:c.instructions+=1;goto B510d7b;
case 0x510d80:goto L510d80;
case 0x510d82:c.instructions+=1;goto B510d82;
case 0x510d84:goto L510d84;
case 0x510d8a:c.instructions+=1;goto B510d8a;
case 0x510d8c:goto L510d8c;
case 0x510d8f:c.instructions+=1;goto B510d8f;
case 0x510d91:goto L510d91;
case 0x510d93:goto L510d93;
case 0x510d96:c.instructions+=3;goto B510d96;
case 0x510d9b:c.instructions+=2;goto B510d9b;
case 0x510d9d:c.instructions+=1;goto B510d9d;
case 0x510d9f:goto L510d9f;
case 0x510da4:c.instructions+=1;goto B510da4;
case 0x510da6:goto L510da6;
case 0x510dab:c.instructions+=1;goto B510dab;
case 0x510db0:goto L510db0;
case 0x510db4:c.instructions+=2;goto B510db4;
case 0x510db6:c.instructions+=1;goto B510db6;
case 0x510db8:goto L510db8;
case 0x510dba:c.instructions+=1;goto B510dba;
case 0x510dbc:goto L510dbc;
case 0x510dbf:c.instructions+=3;goto B510dbf;
case 0x510dc1:c.instructions+=2;goto B510dc1;
case 0x510dc3:c.instructions+=1;goto B510dc3;
case 0x510dc5:goto L510dc5;
case 0x510dcc:c.instructions+=1;goto B510dcc;
case 0x510dce:goto L510dce;
case 0x510dcf:c.instructions+=2;goto B510dcf;
case 0x510dd1:c.instructions+=1;goto B510dd1;
case 0x510dd3:goto L510dd3;
case 0x510dd5:goto L510dd5;
case 0x510ddc:c.instructions+=2;goto B510ddc;
case 0x510dde:c.instructions+=1;goto B510dde;
case 0x510de0:goto L510de0;
case 0x510de4:c.instructions+=1;goto B510de4;
case 0x510de6:goto L510de6;
case 0x510de9:goto L510de9;
case 0x510dec:c.instructions+=6;goto B510dec;
case 0x510df2:c.instructions+=5;goto B510df2;
case 0x510df3:c.instructions+=4;goto B510df3;
case 0x510df6:c.instructions+=3;goto B510df6;
case 0x510df8:c.instructions+=2;goto B510df8;
case 0x510dfb:c.instructions+=1;goto B510dfb;
case 0x510dfd:goto L510dfd;
case 0x510e00:c.instructions+=2;goto B510e00;
case 0x510e01:c.instructions+=1;goto B510e01;
case 0x510e02:goto L510e02;
case 0x510e03:c.instructions+=3;goto B510e03;
case 0x510e05:c.instructions+=2;goto B510e05;
case 0x510e06:c.instructions+=1;goto B510e06;
case 0x510e10:goto L510e10;
case 0x510e11:c.instructions+=4;goto B510e11;
case 0x510e13:c.instructions+=3;goto B510e13;
case 0x510e19:c.instructions+=2;goto B510e19;
case 0x510e1b:c.instructions+=1;goto B510e1b;
case 0x510e1d:goto L510e1d;
case 0x510e23:c.instructions+=3;goto B510e23;
case 0x510e24:c.instructions+=2;goto B510e24;
case 0x510e29:c.instructions+=1;goto B510e29;
case 0x510e2e:goto L510e2e;
case 0x510e35:c.instructions+=1;goto B510e35;
case 0x510e3c:goto L510e3c;
case 0x510e3d:c.instructions+=1;goto B510e3d;
case 0x510e40:goto L510e40;
case 0x510e50:goto L510e50;
case 0x510e52:c.instructions+=13;goto B510e52;
case 0x510e57:c.instructions+=12;goto B510e57;
case 0x510e5d:c.instructions+=11;goto B510e5d;
case 0x510e5e:c.instructions+=10;goto B510e5e;
case 0x510e65:c.instructions+=9;goto B510e65;
case 0x510e66:c.instructions+=8;goto B510e66;
case 0x510e67:c.instructions+=7;goto B510e67;
case 0x510e69:c.instructions+=6;goto B510e69;
case 0x510e6d:c.instructions+=5;goto B510e6d;
case 0x510e73:c.instructions+=4;goto B510e73;
case 0x510e76:c.instructions+=3;goto B510e76;
case 0x510e78:c.instructions+=2;goto B510e78;
case 0x510e80:c.instructions+=1;goto B510e80;
case 0x510e82:goto L510e82;
case 0x510e85:c.instructions+=3;goto B510e85;
case 0x510e86:c.instructions+=2;goto B510e86;
case 0x510e8b:c.instructions+=1;goto B510e8b;
case 0x510e90:goto L510e90;
case 0x510e94:c.instructions+=1;goto B510e94;
case 0x510e98:goto L510e98;
case 0x510e9c:c.instructions+=5;goto B510e9c;
case 0x510ea2:c.instructions+=4;goto B510ea2;
case 0x510ea3:c.instructions+=3;goto B510ea3;
case 0x510eaa:c.instructions+=2;goto B510eaa;
case 0x510ead:c.instructions+=1;goto B510ead;
case 0x510eb0:goto L510eb0;
case 0x510eb4:c.instructions+=3;goto B510eb4;
case 0x510eb6:c.instructions+=2;goto B510eb6;
case 0x510eb9:c.instructions+=1;goto B510eb9;
case 0x510ebb:goto L510ebb;
case 0x510ebc:c.instructions+=1;goto B510ebc;
case 0x510ebe:goto L510ebe;
case 0x510ec0:goto L510ec0;
case 0x510ed0:goto L510ed0;
case 0x510ed3:c.instructions+=6;goto B510ed3;
case 0x510ed6:c.instructions+=5;goto B510ed6;
case 0x510ed7:c.instructions+=4;goto B510ed7;
case 0x510ed8:c.instructions+=3;goto B510ed8;
case 0x510edc:c.instructions+=2;goto B510edc;
case 0x510ede:c.instructions+=1;goto B510ede;
case 0x510ee3:goto L510ee3;
case 0x510ef0:goto L510ef0;
case 0x510ef3:c.instructions+=6;goto B510ef3;
case 0x510ef6:c.instructions+=5;goto B510ef6;
case 0x510ef7:c.instructions+=4;goto B510ef7;
case 0x510ef8:c.instructions+=3;goto B510ef8;
case 0x510efc:c.instructions+=2;goto B510efc;
case 0x510efe:c.instructions+=1;goto B510efe;
case 0x510f03:goto L510f03;
case 0x510f10:goto L510f10;
case 0x510f13:c.instructions+=4;goto B510f13;
case 0x510f17:c.instructions+=3;goto B510f17;
case 0x510f18:c.instructions+=2;goto B510f18;
case 0x510f1a:c.instructions+=1;goto B510f1a;
case 0x510f1f:goto L510f1f;
case 0x510f30:goto L510f30;
case 0x510f33:c.instructions+=7;goto B510f33;
case 0x510f36:c.instructions+=6;goto B510f36;
case 0x510f37:c.instructions+=5;goto B510f37;
case 0x510f38:c.instructions+=4;goto B510f38;
case 0x510f3c:c.instructions+=3;goto B510f3c;
case 0x510f3e:c.instructions+=2;goto B510f3e;
case 0x510f40:c.instructions+=1;goto B510f40;
case 0x510f45:goto L510f45;
case 0x510f50:goto L510f50;
case 0x510f53:c.instructions+=5;goto B510f53;
case 0x510f56:c.instructions+=4;goto B510f56;
case 0x510f57:c.instructions+=3;goto B510f57;
case 0x510f58:c.instructions+=2;goto B510f58;
case 0x510f5c:c.instructions+=1;goto B510f5c;
case 0x510f61:goto L510f61;
case 0x510f70:goto L510f70;
case 0x510f71:c.instructions+=3;goto B510f71;
case 0x510f73:c.instructions+=2;goto B510f73;
case 0x510f75:c.instructions+=1;goto B510f75;
case 0x510f7a:goto L510f7a;
case 0x510f7e:c.instructions+=6;goto B510f7e;
case 0x510f81:c.instructions+=5;goto B510f81;
case 0x510f84:c.instructions+=4;goto B510f84;
case 0x510f85:c.instructions+=3;goto B510f85;
case 0x510f86:c.instructions+=2;goto B510f86;
case 0x510f8a:c.instructions+=1;goto B510f8a;
case 0x510f8f:goto L510f8f;
case 0x510f90:c.instructions+=1;goto B510f90;
case 0x510fa0:goto L510fa0;
case 0x510fa3:c.instructions+=5;goto B510fa3;
case 0x510fa6:c.instructions+=4;goto B510fa6;
case 0x510fa7:c.instructions+=3;goto B510fa7;
case 0x510fa8:c.instructions+=2;goto B510fa8;
case 0x510fac:c.instructions+=1;goto B510fac;
case 0x510fb1:goto L510fb1;
case 0x510fc0:goto L510fc0;
case 0x510fc3:c.instructions+=7;goto B510fc3;
case 0x510fc6:c.instructions+=6;goto B510fc6;
case 0x510fc7:c.instructions+=5;goto B510fc7;
case 0x510fc8:c.instructions+=4;goto B510fc8;
case 0x510fcc:c.instructions+=3;goto B510fcc;
case 0x510fd1:c.instructions+=2;goto B510fd1;
case 0x510fd3:c.instructions+=1;goto B510fd3;
case 0x510fd8:goto L510fd8;
case 0x510fe0:goto L510fe0;
case 0x510fe3:c.instructions+=7;goto B510fe3;
case 0x510fe6:c.instructions+=6;goto B510fe6;
case 0x510fe7:c.instructions+=5;goto B510fe7;
case 0x510fe8:c.instructions+=4;goto B510fe8;
case 0x510fec:c.instructions+=3;goto B510fec;
case 0x510ff1:c.instructions+=2;goto B510ff1;
case 0x510ff3:c.instructions+=1;goto B510ff3;
case 0x510ff8:goto L510ff8;
default:missing_instruction(c.pc);}
B510000:L510000:{c.instructions+=2;NFSU2_TR(0x510000);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xcbbc8bf8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xcbbc8bf8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcbbc8bf8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510005:{NFSU2_TR(0x510005);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510006:L510006:{c.instructions+=2;NFSU2_TR(0x510006);
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
B510008:{NFSU2_TR(0x510008);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510040:L510040:{c.instructions+=2;NFSU2_TR(0x510040);
__builtin_memmove((R+0),gp(0x83a650),4);
}
B510045:{NFSU2_TR(0x510045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510050:L510050:{c.instructions+=2;NFSU2_TR(0x510050);
__builtin_memmove((R+0),gp(0x83a7a4),1);
}
B510055:{NFSU2_TR(0x510055);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510060:L510060:{c.instructions+=5;NFSU2_TR(0x510060);
__builtin_memmove((R+4),gp(0x83a63c),4);
}
B510066:{NFSU2_TR(0x510066);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510068:{NFSU2_TR(0x510068);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51006e:{NFSU2_TR(0x51006e);
__builtin_memmove((R+0),(R+518),1);
}
B510071:{NFSU2_TR(0x510071);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51007b:L51007b:{c.instructions+=10;NFSU2_TR(0x51007b);
}
B51007c:{NFSU2_TR(0x51007c);
}
B51007d:{NFSU2_TR(0x51007d);
}
B51007e:{NFSU2_TR(0x51007e);
}
B51007f:{NFSU2_TR(0x51007f);
}
B510080:{NFSU2_TR(0x510080);
__builtin_memmove((R+4),gp(0x83a655),1);
}
B510086:{NFSU2_TR(0x510086);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510088:{NFSU2_TR(0x510088);
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
B51008a:{NFSU2_TR(0x51008a);
__builtin_memmove((R+0),(R+518),1);
}
B51008d:{NFSU2_TR(0x51008d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510090:L510090:{c.instructions+=3;NFSU2_TR(0x510090);
__builtin_memmove((R+4),gp(0x838564),4);
}
B510096:{NFSU2_TR(0x510096);
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
B510098:{NFSU2_TR(0x510098);
if(r1(R+518)){{goto L51009f;}}
}
B51009a:L51009a:{c.instructions+=2;NFSU2_TR(0x51009a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51009c:{NFSU2_TR(0x51009c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51009f:L51009f:{c.instructions+=1;NFSU2_TR(0x51009f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5100a0:L5100a0:{c.instructions+=2;NFSU2_TR(0x5100a0);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B5100a5:{NFSU2_TR(0x5100a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5100b0:L5100b0:{c.instructions+=3;NFSU2_TR(0x5100b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5100b2:{NFSU2_TR(0x5100b2);
w4(R+4,u32(0x83a611ull));
}
B5100b7:{NFSU2_TR(0x5100b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5100bcull));
TAIL_STATIC(0x59afe0u,59a);
}
B5100bc:L5100bc:{c.instructions+=3;NFSU2_TR(0x5100bc);
__builtin_memmove((R+0),gp(0x83a540),4);
}
B5100c1:{NFSU2_TR(0x5100c1);
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
B5100c3:{NFSU2_TR(0x5100c3);
if(r1(R+518)){{goto L5100d9;}}
}
B5100c5:L5100c5:{c.instructions+=5;NFSU2_TR(0x5100c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5100c6:{NFSU2_TR(0x5100c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5100c7:{NFSU2_TR(0x5100c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5100ca:{NFSU2_TR(0x5100ca);
w4(R+4,u32(0xaull));
}
B5100cf:{NFSU2_TR(0x5100cf);
w4(R+28,u32(0x83a611ull));
}
B5100d4:L5100d4:{c.instructions+=1;NFSU2_TR(0x5100d4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5100d6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5100d4u);}goto L5100d4;}
}
B5100d6:L5100d6:{c.instructions+=3;NFSU2_TR(0x5100d6);
u8 U[34];
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
}
B5100d7:{NFSU2_TR(0x5100d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5100d8:{NFSU2_TR(0x5100d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5100d9:L5100d9:{c.instructions+=1;NFSU2_TR(0x5100d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5100e0:L5100e0:{c.instructions+=3;NFSU2_TR(0x5100e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5100e6:{NFSU2_TR(0x5100e6);
u8 U[8];
__builtin_memmove((U+0),gp(0x8651ac),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5100ec:{NFSU2_TR(0x5100ec);
if(r1(R+518)){{goto L510113;}}
}
B5100ee:L5100ee:{c.instructions+=3;NFSU2_TR(0x5100ee);
__builtin_memmove((R+0),gp(0x83a644),4);
}
B5100f3:{NFSU2_TR(0x5100f3);
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
B5100f5:{NFSU2_TR(0x5100f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51010d;}}
}
B5100f7:L5100f7:{c.instructions+=4;NFSU2_TR(0x5100f7);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5100fd:{NFSU2_TR(0x5100fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510100:{NFSU2_TR(0x510100);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510101:{NFSU2_TR(0x510101);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510106ull));
TAIL_STATIC(0x571a60u,571);
}
B510106:L510106:{c.instructions+=3;NFSU2_TR(0x510106);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510109:{NFSU2_TR(0x510109);
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
B51010b:{NFSU2_TR(0x51010b);
if(r1(R+518)){{goto L510113;}}
}
B51010d:L51010d:{c.instructions+=2;NFSU2_TR(0x51010d);
w4(R+0,u32(0x1ull));
}
B510112:{NFSU2_TR(0x510112);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510113:L510113:{c.instructions+=2;NFSU2_TR(0x510113);
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
B510115:{NFSU2_TR(0x510115);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510120:L510120:{c.instructions+=3;NFSU2_TR(0x510120);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510124:{NFSU2_TR(0x510124);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x16ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x16ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x16ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510127:{NFSU2_TR(0x510127);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L510173;}}
}
B510129:L510129:{c.instructions+=2;NFSU2_TR(0x510129);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5101a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B510130:{NFSU2_TR(0x510130);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x510178ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B510137:L510137:{c.instructions+=2;NFSU2_TR(0x510137);
w4(R+0,u32(0xd7c2416aull));
}
B51013c:{NFSU2_TR(0x51013c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51013d:L51013d:{c.instructions+=2;NFSU2_TR(0x51013d);
w4(R+0,u32(0x6ad0772full));
}
B510142:{NFSU2_TR(0x510142);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510143:L510143:{c.instructions+=2;NFSU2_TR(0x510143);
w4(R+0,u32(0xc4553f70ull));
}
B510148:{NFSU2_TR(0x510148);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510149:L510149:{c.instructions+=2;NFSU2_TR(0x510149);
w4(R+0,u32(0xe2e98554ull));
}
B51014e:{NFSU2_TR(0x51014e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51014f:L51014f:{c.instructions+=2;NFSU2_TR(0x51014f);
w4(R+0,u32(0x2ea43025ull));
}
B510154:{NFSU2_TR(0x510154);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510155:L510155:{c.instructions+=2;NFSU2_TR(0x510155);
w4(R+0,u32(0x9dcc6e8bull));
}
B51015a:{NFSU2_TR(0x51015a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51015b:L51015b:{c.instructions+=2;NFSU2_TR(0x51015b);
w4(R+0,u32(0xf51bd160ull));
}
B510160:{NFSU2_TR(0x510160);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510161:L510161:{c.instructions+=2;NFSU2_TR(0x510161);
w4(R+0,u32(0xc7e6e649ull));
}
B510166:{NFSU2_TR(0x510166);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510167:L510167:{c.instructions+=2;NFSU2_TR(0x510167);
w4(R+0,u32(0x76e721c7ull));
}
B51016c:{NFSU2_TR(0x51016c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51016d:L51016d:{c.instructions+=2;NFSU2_TR(0x51016d);
w4(R+0,u32(0x184ab1a3ull));
}
B510172:{NFSU2_TR(0x510172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510173:L510173:{c.instructions+=2;NFSU2_TR(0x510173);
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
B510175:{NFSU2_TR(0x510175);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5101c0:L5101c0:{c.instructions+=5;NFSU2_TR(0x5101c0);
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
B5101c5:{NFSU2_TR(0x5101c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5101c6:{NFSU2_TR(0x5101c6);
__builtin_memmove((R+24),(R+4),4);
}
B5101c8:{NFSU2_TR(0x5101c8);
u8 U[4];
w4(U+0,u32(0x79ac30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5101ce:{NFSU2_TR(0x5101ce);
if(r1(R+518)){{goto L5101d9;}}
}
B5101d0:L5101d0:{c.instructions+=2;NFSU2_TR(0x5101d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5101d1:{NFSU2_TR(0x5101d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5101d6ull));
TAIL_STATIC(0x575630u,575);
}
B5101d6:L5101d6:{c.instructions+=1;NFSU2_TR(0x5101d6);
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
B5101d9:L5101d9:{c.instructions+=3;NFSU2_TR(0x5101d9);
__builtin_memmove((R+0),(R+24),4);
}
B5101db:{NFSU2_TR(0x5101db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5101dc:{NFSU2_TR(0x5101dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5101e0:L5101e0:{c.instructions+=10;NFSU2_TR(0x5101e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5101e1:{NFSU2_TR(0x5101e1);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5101e4:{NFSU2_TR(0x5101e4);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5101e7:{NFSU2_TR(0x5101e7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5101ea:{NFSU2_TR(0x5101ea);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5101ed:{NFSU2_TR(0x5101ed);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5101f1:{NFSU2_TR(0x5101f1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5101f3:{NFSU2_TR(0x5101f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5101f5:{NFSU2_TR(0x5101f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5101f8:{NFSU2_TR(0x5101f8);
if(r1(R+514)){{goto L510200;}}
}
B5101fa:L5101fa:{c.instructions+=2;NFSU2_TR(0x5101fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5101fc:{NFSU2_TR(0x5101fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510200:L510200:{c.instructions+=6;NFSU2_TR(0x510200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510203:{NFSU2_TR(0x510203);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B510207:{NFSU2_TR(0x510207);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B51020b:{NFSU2_TR(0x51020b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51020d:{NFSU2_TR(0x51020d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B510210:{NFSU2_TR(0x510210);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L510218;}}
}
B510212:L510212:{c.instructions+=2;NFSU2_TR(0x510212);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B510214:{NFSU2_TR(0x510214);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510218:L510218:{c.instructions+=7;NFSU2_TR(0x510218);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51021b:{NFSU2_TR(0x51021b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51021d:{NFSU2_TR(0x51021d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B51021f:{NFSU2_TR(0x51021f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B510221:{NFSU2_TR(0x510221);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B510223:{NFSU2_TR(0x510223);
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
B510226:{NFSU2_TR(0x510226);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51022f;}}
}
B510228:L510228:{c.instructions+=3;NFSU2_TR(0x510228);
w4(R+0,u32(0x1ull));
}
B51022d:{NFSU2_TR(0x51022d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51022e:{NFSU2_TR(0x51022e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51022f:L51022f:{c.instructions+=3;NFSU2_TR(0x51022f);
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
B510231:{NFSU2_TR(0x510231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B510232:{NFSU2_TR(0x510232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510240:L510240:{c.instructions+=10;NFSU2_TR(0x510240);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510241:{NFSU2_TR(0x510241);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510244:{NFSU2_TR(0x510244);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510247:{NFSU2_TR(0x510247);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B51024a:{NFSU2_TR(0x51024a);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51024d:{NFSU2_TR(0x51024d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B510251:{NFSU2_TR(0x510251);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B510253:{NFSU2_TR(0x510253);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B510255:{NFSU2_TR(0x510255);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510258:{NFSU2_TR(0x510258);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510260;}}
}
B51025a:L51025a:{c.instructions+=2;NFSU2_TR(0x51025a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B51025c:{NFSU2_TR(0x51025c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510260:L510260:{c.instructions+=6;NFSU2_TR(0x510260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510263:{NFSU2_TR(0x510263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B510267:{NFSU2_TR(0x510267);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B51026b:{NFSU2_TR(0x51026b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51026d:{NFSU2_TR(0x51026d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510270:{NFSU2_TR(0x510270);
if(r1(R+518)){{goto L510278;}}
}
B510272:L510272:{c.instructions+=2;NFSU2_TR(0x510272);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B510274:{NFSU2_TR(0x510274);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510278:L510278:{c.instructions+=7;NFSU2_TR(0x510278);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51027b:{NFSU2_TR(0x51027b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B51027d:{NFSU2_TR(0x51027d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B51027f:{NFSU2_TR(0x51027f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B510281:{NFSU2_TR(0x510281);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B510283:{NFSU2_TR(0x510283);
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
B510286:{NFSU2_TR(0x510286);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L51028f;}}
}
B510288:L510288:{c.instructions+=3;NFSU2_TR(0x510288);
w4(R+0,u32(0x1ull));
}
B51028d:{NFSU2_TR(0x51028d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B51028e:{NFSU2_TR(0x51028e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51028f:L51028f:{c.instructions+=3;NFSU2_TR(0x51028f);
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
B510291:{NFSU2_TR(0x510291);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B510292:{NFSU2_TR(0x510292);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5102a0:L5102a0:{c.instructions+=5;NFSU2_TR(0x5102a0);
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
B5102a5:{NFSU2_TR(0x5102a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5102a6:{NFSU2_TR(0x5102a6);
__builtin_memmove((R+24),(R+4),4);
}
B5102a8:{NFSU2_TR(0x5102a8);
u8 U[4];
w4(U+0,u32(0x79ac34ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5102ae:{NFSU2_TR(0x5102ae);
if(r1(R+518)){{goto L5102b9;}}
}
B5102b0:L5102b0:{c.instructions+=2;NFSU2_TR(0x5102b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5102b1:{NFSU2_TR(0x5102b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5102b6ull));
TAIL_STATIC(0x575630u,575);
}
B5102b6:L5102b6:{c.instructions+=1;NFSU2_TR(0x5102b6);
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
B5102b9:L5102b9:{c.instructions+=3;NFSU2_TR(0x5102b9);
__builtin_memmove((R+0),(R+24),4);
}
B5102bb:{NFSU2_TR(0x5102bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5102bc:{NFSU2_TR(0x5102bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5102c0:L5102c0:{c.instructions+=2;NFSU2_TR(0x5102c0);
u8 U[4];
w4(U+0,u32(0x79ac38ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5102c6:{NFSU2_TR(0x5102c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5102d0:L5102d0:{c.instructions+=5;NFSU2_TR(0x5102d0);
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
B5102d5:{NFSU2_TR(0x5102d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5102d6:{NFSU2_TR(0x5102d6);
__builtin_memmove((R+24),(R+4),4);
}
B5102d8:{NFSU2_TR(0x5102d8);
u8 U[4];
w4(U+0,u32(0x79ac38ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5102de:{NFSU2_TR(0x5102de);
if(r1(R+518)){{goto L5102e9;}}
}
B5102e0:L5102e0:{c.instructions+=2;NFSU2_TR(0x5102e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5102e1:{NFSU2_TR(0x5102e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5102e6ull));
TAIL_STATIC(0x575630u,575);
}
B5102e6:L5102e6:{c.instructions+=1;NFSU2_TR(0x5102e6);
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
B5102e9:L5102e9:{c.instructions+=3;NFSU2_TR(0x5102e9);
__builtin_memmove((R+0),(R+24),4);
}
B5102eb:{NFSU2_TR(0x5102eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5102ec:{NFSU2_TR(0x5102ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5102f0:L5102f0:{c.instructions+=3;NFSU2_TR(0x5102f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5102f4:{NFSU2_TR(0x5102f4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5102f9:{NFSU2_TR(0x5102f9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L510319;}}
}
B5102fb:L5102fb:{c.instructions+=1;NFSU2_TR(0x5102fb);
if(r1(R+518)){{goto L510312;}}
}
B5102fd:L5102fd:{c.instructions+=2;NFSU2_TR(0x5102fd);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510302:{NFSU2_TR(0x510302);
if(r1(R+518)){{goto L510312;}}
}
B510304:L510304:{c.instructions+=2;NFSU2_TR(0x510304);
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
B510309:{NFSU2_TR(0x510309);
if(r1(R+518)){{goto L510312;}}
}
B51030b:L51030b:{c.instructions+=2;NFSU2_TR(0x51030b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x911c0a4bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x911c0a4bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x911c0a4bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510310:{NFSU2_TR(0x510310);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51032e;}}
}
B510312:L510312:{c.instructions+=2;NFSU2_TR(0x510312);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510316:{NFSU2_TR(0x510316);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510319:L510319:{c.instructions+=2;NFSU2_TR(0x510319);
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
B51031e:{NFSU2_TR(0x51031e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510312u);}goto L510312;}}
}
B510320:L510320:{c.instructions+=2;NFSU2_TR(0x510320);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc0ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc0ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510325:{NFSU2_TR(0x510325);
if(r1(R+518)){{goto L51033b;}}
}
B510327:L510327:{c.instructions+=2;NFSU2_TR(0x510327);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc519bfc3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc519bfc3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc519bfc3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B51032c:{NFSU2_TR(0x51032c);
if(r1(R+518)){{goto L510333;}}
}
B51032e:L51032e:{c.instructions+=2;NFSU2_TR(0x51032e);
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
B510330:{NFSU2_TR(0x510330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510333:L510333:{c.instructions+=2;NFSU2_TR(0x510333);
w4(R+0,u32(0x2ull));
}
B510338:{NFSU2_TR(0x510338);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51033b:L51033b:{c.instructions+=2;NFSU2_TR(0x51033b);
w4(R+0,u32(0xaull));
}
B510340:{NFSU2_TR(0x510340);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510350:L510350:{c.instructions+=14;NFSU2_TR(0x510350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510352:{NFSU2_TR(0x510352);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510357:{NFSU2_TR(0x510357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51035d:{NFSU2_TR(0x51035d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51035e:{NFSU2_TR(0x51035e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510365:{NFSU2_TR(0x510365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510366:{NFSU2_TR(0x510366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510367:{NFSU2_TR(0x510367);
__builtin_memmove((R+24),(R+4),4);
}
B510369:{NFSU2_TR(0x510369);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51036d:{NFSU2_TR(0x51036d);
u8 U[4];
w4(U+0,u32(0x79ac60ull));
s4(u32(r4(R+24)),r4(U+0));
}
B510373:{NFSU2_TR(0x510373);
__builtin_memmove((R+4),gp(0x838564),4);
}
B510379:{NFSU2_TR(0x510379);
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
B51037b:{NFSU2_TR(0x51037b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B510383:{NFSU2_TR(0x510383);
if(r1(R+518)){{goto L51038b;}}
}
B510385:L510385:{c.instructions+=3;NFSU2_TR(0x510385);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B510387:{NFSU2_TR(0x510387);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510389:{NFSU2_TR(0x510389);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51038bull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B51038b:L51038b:{c.instructions+=7;NFSU2_TR(0x51038b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51038f:{NFSU2_TR(0x51038f);
s4(0x838564,u32(0x0ull));
}
B510399:{NFSU2_TR(0x510399);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B51039f:{NFSU2_TR(0x51039f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5103a0:{NFSU2_TR(0x5103a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5103a7:{NFSU2_TR(0x5103a7);
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
B5103aa:{NFSU2_TR(0x5103aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5103b0:L5103b0:{c.instructions+=3;NFSU2_TR(0x5103b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5103b3:{NFSU2_TR(0x5103b3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5103b5:{NFSU2_TR(0x5103b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5103c5;}}
}
B5103b7:L5103b7:{c.instructions+=4;NFSU2_TR(0x5103b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5103bb:{NFSU2_TR(0x5103bb);
__builtin_memmove((R+4),(R+0),4);
}
B5103bd:{NFSU2_TR(0x5103bd);
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5103c0:{NFSU2_TR(0x5103c0);
if(r1(R+518)){{goto L5103c5;}}
}
B5103c2:L5103c2:{c.instructions+=2;NFSU2_TR(0x5103c2);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5103c3:{NFSU2_TR(0x5103c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5103c7;}}
}
B5103c5:L5103c5:{c.instructions+=1;NFSU2_TR(0x5103c5);
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
B5103c7:L5103c7:{c.instructions+=1;NFSU2_TR(0x5103c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5103d0:L5103d0:{c.instructions+=4;NFSU2_TR(0x5103d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5103d1:{NFSU2_TR(0x5103d1);
__builtin_memmove((R+24),(R+4),4);
}
B5103d3:{NFSU2_TR(0x5103d3);
w4(R+4,u32(0x839c60ull));
}
B5103d8:{NFSU2_TR(0x5103d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5103ddull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B5103dd:L5103dd:{c.instructions+=8;NFSU2_TR(0x5103dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5103e3:{NFSU2_TR(0x5103e3);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5103e9:{NFSU2_TR(0x5103e9);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5103ec:{NFSU2_TR(0x5103ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5103ef:{NFSU2_TR(0x5103ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5103f2:{NFSU2_TR(0x5103f2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5103f4:{NFSU2_TR(0x5103f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5103f7:{NFSU2_TR(0x5103f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5103ff;}}
}
B5103f9:L5103f9:{c.instructions+=2;NFSU2_TR(0x5103f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5103fc:{NFSU2_TR(0x5103fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5103ff:L5103ff:{c.instructions+=5;NFSU2_TR(0x5103ff);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510402:{NFSU2_TR(0x510402);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B510405:{NFSU2_TR(0x510405);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B510407:{NFSU2_TR(0x510407);
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
B51040a:{NFSU2_TR(0x51040a);
if(r1(R+514)){{goto L510412;}}
}
B51040c:L51040c:{c.instructions+=2;NFSU2_TR(0x51040c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51040f:{NFSU2_TR(0x51040f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510412:L510412:{c.instructions+=2;NFSU2_TR(0x510412);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B510414:{NFSU2_TR(0x510414);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510417ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B510417:L510417:{c.instructions+=2;NFSU2_TR(0x510417);
w4(R+4,u32(0x839c60ull));
}
B51041c:{NFSU2_TR(0x51041c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510421ull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B510421:L510421:{c.instructions+=8;NFSU2_TR(0x510421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510427:{NFSU2_TR(0x510427);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B51042d:{NFSU2_TR(0x51042d);
{u32 ea_=u32(r4(R+24)+u32(188u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B510433:{NFSU2_TR(0x510433);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B510439:{NFSU2_TR(0x510439);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51043c:{NFSU2_TR(0x51043c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51043e:{NFSU2_TR(0x51043e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510441:{NFSU2_TR(0x510441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510449;}}
}
B510443:L510443:{c.instructions+=2;NFSU2_TR(0x510443);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B510446:{NFSU2_TR(0x510446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510449:L510449:{c.instructions+=5;NFSU2_TR(0x510449);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B51044c:{NFSU2_TR(0x51044c);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51044f:{NFSU2_TR(0x51044f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B510451:{NFSU2_TR(0x510451);
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
B510454:{NFSU2_TR(0x510454);
if(r1(R+514)){{goto L51045c;}}
}
B510456:L510456:{c.instructions+=2;NFSU2_TR(0x510456);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510459:{NFSU2_TR(0x510459);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51045c:L51045c:{c.instructions+=2;NFSU2_TR(0x51045c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51045e:{NFSU2_TR(0x51045e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510461ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B510461:L510461:{c.instructions+=2;NFSU2_TR(0x510461);
w4(R+4,u32(0x839c60ull));
}
B510466:{NFSU2_TR(0x510466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51046bull));
TAIL_STATIC(0x5b5490u,5b5);
}
B51046b:L51046b:{c.instructions+=9;NFSU2_TR(0x51046b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510471:{NFSU2_TR(0x510471);
{u32 ea_=u32(r4(R+24)+u32(268u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B510477:{NFSU2_TR(0x510477);
{u32 ea_=u32(r4(R+24)+u32(256u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51047d:{NFSU2_TR(0x51047d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B510483:{NFSU2_TR(0x510483);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510486:{NFSU2_TR(0x510486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510487:{NFSU2_TR(0x510487);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B510489:{NFSU2_TR(0x510489);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51048c:{NFSU2_TR(0x51048c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510494;}}
}
B51048e:L51048e:{c.instructions+=2;NFSU2_TR(0x51048e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B510491:{NFSU2_TR(0x510491);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510494:L510494:{c.instructions+=5;NFSU2_TR(0x510494);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B510497:{NFSU2_TR(0x510497);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B51049a:{NFSU2_TR(0x51049a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B51049c:{NFSU2_TR(0x51049c);
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
B51049f:{NFSU2_TR(0x51049f);
if(r1(R+514)){{goto L5104a7;}}
}
B5104a1:L5104a1:{c.instructions+=2;NFSU2_TR(0x5104a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5104a4:{NFSU2_TR(0x5104a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5104a7:L5104a7:{c.instructions+=2;NFSU2_TR(0x5104a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5104a9:{NFSU2_TR(0x5104a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5104b0:L5104b0:{c.instructions+=6;NFSU2_TR(0x5104b0);
w4(R+0,u32(0x78f544ull));
}
B5104b5:{NFSU2_TR(0x5104b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
w4(U+4,u32(0x79aa90ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5104bf:{NFSU2_TR(0x5104bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5104c5:{NFSU2_TR(0x5104c5);
u8 U[4];
w4(U+0,u32(0x79aa90ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5104cb:{NFSU2_TR(0x5104cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5104ce:{NFSU2_TR(0x5104ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5104d0:L5104d0:{c.instructions+=39;NFSU2_TR(0x5104d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5104d2:{NFSU2_TR(0x5104d2);
u8 U[4];
w4(U+0,u32(0x77700bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5104d7:{NFSU2_TR(0x5104d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5104dd:{NFSU2_TR(0x5104dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5104de:{NFSU2_TR(0x5104de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5104e5:{NFSU2_TR(0x5104e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5104e6:{NFSU2_TR(0x5104e6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5104e7:{NFSU2_TR(0x5104e7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5104e9:{NFSU2_TR(0x5104e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5104ea:{NFSU2_TR(0x5104ea);
__builtin_memmove((R+24),(R+4),4);
}
B5104ec:{NFSU2_TR(0x5104ec);
u8 U[4];
w4(U+0,u32(0x79aa90ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5104f2:{NFSU2_TR(0x5104f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5104f6:{NFSU2_TR(0x5104f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5104fa:{NFSU2_TR(0x5104fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x78f544ull));
s4(u32(r4(U+0)),r4(U+4));
}
B510501:{NFSU2_TR(0x510501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x783fe5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B510508:{NFSU2_TR(0x510508);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51050b:{NFSU2_TR(0x51050b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51050e:{NFSU2_TR(0x51050e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510511:{NFSU2_TR(0x510511);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510514:{NFSU2_TR(0x510514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510517:{NFSU2_TR(0x510517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51051a:{NFSU2_TR(0x51051a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51051d:{NFSU2_TR(0x51051d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510520:{NFSU2_TR(0x510520);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510523:{NFSU2_TR(0x510523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510526:{NFSU2_TR(0x510526);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510529:{NFSU2_TR(0x510529);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51052c:{NFSU2_TR(0x51052c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51052f:{NFSU2_TR(0x51052f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B510536:{NFSU2_TR(0x510536);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B510539:{NFSU2_TR(0x510539);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51053e:{NFSU2_TR(0x51053e);
u8 U[4];
w4(U+0,u32(0x8aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510543:{NFSU2_TR(0x510543);
u8 U[4];
w4(U+0,u32(0xf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510548:{NFSU2_TR(0x510548);
u8 U[4];
w4(U+0,u32(0xcaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51054d:{NFSU2_TR(0x51054d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510551:{NFSU2_TR(0x510551);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510554:{NFSU2_TR(0x510554);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510557:{NFSU2_TR(0x510557);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51055a:{NFSU2_TR(0x51055a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51055full));
TAIL_STATIC(0x4a9dd0u,4a9);
}
B51055f:L51055f:{c.instructions+=6;NFSU2_TR(0x51055f);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510564:{NFSU2_TR(0x510564);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510565:{NFSU2_TR(0x510565);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51056a:{NFSU2_TR(0x51056a);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51056f:{NFSU2_TR(0x51056f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510575:{NFSU2_TR(0x510575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51057aull));
TAIL_STATIC(0x4a9dd0u,4a9);
}
B51057a:L51057a:{c.instructions+=6;NFSU2_TR(0x51057a);
u8 U[4];
w4(U+0,u32(0xffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51057f:{NFSU2_TR(0x51057f);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510581:{NFSU2_TR(0x510581);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510586:{NFSU2_TR(0x510586);
u8 U[4];
w4(U+0,u32(0xcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51058b:{NFSU2_TR(0x51058b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510591:{NFSU2_TR(0x510591);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510596ull));
TAIL_STATIC(0x4a9dd0u,4a9);
}
B510596:L510596:{c.instructions+=9;NFSU2_TR(0x510596);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B51059a:{NFSU2_TR(0x51059a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5105a0:{NFSU2_TR(0x5105a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B5105a3:{NFSU2_TR(0x5105a3);
__builtin_memmove((R+0),(R+24),4);
}
B5105a5:{NFSU2_TR(0x5105a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5105a6:{NFSU2_TR(0x5105a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5105a7:{NFSU2_TR(0x5105a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5105ae:{NFSU2_TR(0x5105ae);
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
B5105b1:{NFSU2_TR(0x5105b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5105c0:L5105c0:{c.instructions+=6;NFSU2_TR(0x5105c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5105c1:{NFSU2_TR(0x5105c1);
__builtin_memmove((R+24),(R+4),4);
}
B5105c3:{NFSU2_TR(0x5105c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5105c6:{NFSU2_TR(0x5105c6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5105c9:{NFSU2_TR(0x5105c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5105ca:{NFSU2_TR(0x5105ca);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5105d7;}}
}
B5105cc:L5105cc:{c.instructions+=2;NFSU2_TR(0x5105cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5105cd:{NFSU2_TR(0x5105cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5105d2ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5105d2:L5105d2:{c.instructions+=2;NFSU2_TR(0x5105d2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5105d5:{NFSU2_TR(0x5105d5);
{goto L5105d9;}
}
B5105d7:L5105d7:{c.instructions+=1;NFSU2_TR(0x5105d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5105d9:L5105d9:{c.instructions+=6;NFSU2_TR(0x5105d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5105dd:{NFSU2_TR(0x5105dd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5105e1:{NFSU2_TR(0x5105e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5105e3:{NFSU2_TR(0x5105e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5105e6:{NFSU2_TR(0x5105e6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5105e9:{NFSU2_TR(0x5105e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5105f6;}}
}
B5105eb:L5105eb:{c.instructions+=2;NFSU2_TR(0x5105eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5105ec:{NFSU2_TR(0x5105ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5105f1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5105f1:L5105f1:{c.instructions+=2;NFSU2_TR(0x5105f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5105f4:{NFSU2_TR(0x5105f4);
{goto L5105f8;}
}
B5105f6:L5105f6:{c.instructions+=1;NFSU2_TR(0x5105f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5105f8:L5105f8:{c.instructions+=5;NFSU2_TR(0x5105f8);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5105fc:{NFSU2_TR(0x5105fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5105ff:{NFSU2_TR(0x5105ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510602:{NFSU2_TR(0x510602);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510605:{NFSU2_TR(0x510605);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L510612;}}
}
B510607:L510607:{c.instructions+=2;NFSU2_TR(0x510607);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510608:{NFSU2_TR(0x510608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51060dull));
TAIL_STATIC(0x43c1c0u,43c);
}
B51060d:L51060d:{c.instructions+=2;NFSU2_TR(0x51060d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510610:{NFSU2_TR(0x510610);
{goto L510614;}
}
B510612:L510612:{c.instructions+=1;NFSU2_TR(0x510612);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510614:L510614:{c.instructions+=5;NFSU2_TR(0x510614);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B510618:{NFSU2_TR(0x510618);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51061b:{NFSU2_TR(0x51061b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51061e:{NFSU2_TR(0x51061e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510621:{NFSU2_TR(0x510621);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L51062e;}}
}
B510623:L510623:{c.instructions+=2;NFSU2_TR(0x510623);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510624:{NFSU2_TR(0x510624);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510629ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B510629:L510629:{c.instructions+=2;NFSU2_TR(0x510629);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B51062c:{NFSU2_TR(0x51062c);
{goto L510630;}
}
B51062e:L51062e:{c.instructions+=1;NFSU2_TR(0x51062e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510630:L510630:{c.instructions+=5;NFSU2_TR(0x510630);
u8 U[16];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B510634:{NFSU2_TR(0x510634);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510637:{NFSU2_TR(0x510637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51063a:{NFSU2_TR(0x51063a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B51063c:{NFSU2_TR(0x51063c);
if(r1(R+518)){{goto L510649;}}
}
B51063e:L51063e:{c.instructions+=2;NFSU2_TR(0x51063e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51063f:{NFSU2_TR(0x51063f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510644ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B510644:L510644:{c.instructions+=2;NFSU2_TR(0x510644);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510647:{NFSU2_TR(0x510647);
{goto L51064b;}
}
B510649:L510649:{c.instructions+=1;NFSU2_TR(0x510649);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B51064b:L51064b:{c.instructions+=5;NFSU2_TR(0x51064b);
u8 U[16];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51064f:{NFSU2_TR(0x51064f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510652:{NFSU2_TR(0x510652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510655:{NFSU2_TR(0x510655);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510657:{NFSU2_TR(0x510657);
if(r1(R+518)){{goto L51066e;}}
}
B510659:L510659:{c.instructions+=2;NFSU2_TR(0x510659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51065a:{NFSU2_TR(0x51065a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51065full));
TAIL_STATIC(0x43c1c0u,43c);
}
B51065f:L51065f:{c.instructions+=6;NFSU2_TR(0x51065f);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B510663:{NFSU2_TR(0x510663);
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
B510666:{NFSU2_TR(0x510666);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510669:{NFSU2_TR(0x510669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51066a:{NFSU2_TR(0x51066a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51066b:{NFSU2_TR(0x51066b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51066e:L51066e:{c.instructions+=6;NFSU2_TR(0x51066e);
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
B510670:{NFSU2_TR(0x510670);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B510674:{NFSU2_TR(0x510674);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510677:{NFSU2_TR(0x510677);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510678:{NFSU2_TR(0x510678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510679:{NFSU2_TR(0x510679);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510680:L510680:{c.instructions+=6;NFSU2_TR(0x510680);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510681:{NFSU2_TR(0x510681);
__builtin_memmove((R+24),(R+4),4);
}
B510683:{NFSU2_TR(0x510683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510686:{NFSU2_TR(0x510686);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510689:{NFSU2_TR(0x510689);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51068a:{NFSU2_TR(0x51068a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L510697;}}
}
B51068c:L51068c:{c.instructions+=2;NFSU2_TR(0x51068c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51068d:{NFSU2_TR(0x51068d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510692ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B510692:L510692:{c.instructions+=2;NFSU2_TR(0x510692);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510695:{NFSU2_TR(0x510695);
{goto L510699;}
}
B510697:L510697:{c.instructions+=1;NFSU2_TR(0x510697);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510699:L510699:{c.instructions+=6;NFSU2_TR(0x510699);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B51069d:{NFSU2_TR(0x51069d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5106a1:{NFSU2_TR(0x5106a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5106a3:{NFSU2_TR(0x5106a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5106a6:{NFSU2_TR(0x5106a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5106a9:{NFSU2_TR(0x5106a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5106b6;}}
}
B5106ab:L5106ab:{c.instructions+=2;NFSU2_TR(0x5106ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5106ac:{NFSU2_TR(0x5106ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5106b1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5106b1:L5106b1:{c.instructions+=2;NFSU2_TR(0x5106b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5106b4:{NFSU2_TR(0x5106b4);
{goto L5106b8;}
}
B5106b6:L5106b6:{c.instructions+=1;NFSU2_TR(0x5106b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5106b8:L5106b8:{c.instructions+=5;NFSU2_TR(0x5106b8);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5106bc:{NFSU2_TR(0x5106bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5106bf:{NFSU2_TR(0x5106bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5106c2:{NFSU2_TR(0x5106c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5106c4:{NFSU2_TR(0x5106c4);
if(r1(R+518)){{goto L5106d1;}}
}
B5106c6:L5106c6:{c.instructions+=2;NFSU2_TR(0x5106c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5106c7:{NFSU2_TR(0x5106c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5106ccull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5106cc:L5106cc:{c.instructions+=2;NFSU2_TR(0x5106cc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5106cf:{NFSU2_TR(0x5106cf);
{goto L5106d3;}
}
B5106d1:L5106d1:{c.instructions+=1;NFSU2_TR(0x5106d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5106d3:L5106d3:{c.instructions+=6;NFSU2_TR(0x5106d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5106d6:{NFSU2_TR(0x5106d6);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5106da:{NFSU2_TR(0x5106da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5106dd:{NFSU2_TR(0x5106dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5106e0:{NFSU2_TR(0x5106e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5106e2:{NFSU2_TR(0x5106e2);
if(r1(R+518)){{goto L5106f9;}}
}
B5106e4:L5106e4:{c.instructions+=2;NFSU2_TR(0x5106e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5106e5:{NFSU2_TR(0x5106e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5106eaull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5106ea:L5106ea:{c.instructions+=6;NFSU2_TR(0x5106ea);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5106ee:{NFSU2_TR(0x5106ee);
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
B5106f1:{NFSU2_TR(0x5106f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5106f4:{NFSU2_TR(0x5106f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5106f5:{NFSU2_TR(0x5106f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5106f6:{NFSU2_TR(0x5106f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5106f9:L5106f9:{c.instructions+=6;NFSU2_TR(0x5106f9);
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
B5106fb:{NFSU2_TR(0x5106fb);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5106ff:{NFSU2_TR(0x5106ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510702:{NFSU2_TR(0x510702);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510703:{NFSU2_TR(0x510703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510704:{NFSU2_TR(0x510704);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510710:L510710:{c.instructions+=7;NFSU2_TR(0x510710);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510713:{NFSU2_TR(0x510713);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510714:{NFSU2_TR(0x510714);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B510718:{NFSU2_TR(0x510718);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B51071b:{NFSU2_TR(0x51071b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51071e:{NFSU2_TR(0x51071e);
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
B510720:{NFSU2_TR(0x510720);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L510731;}}
}
B510722:L510722:{c.instructions+=6;NFSU2_TR(0x510722);
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
B510723:{NFSU2_TR(0x510723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510726:{NFSU2_TR(0x510726);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B51072a:{NFSU2_TR(0x51072a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51072d:{NFSU2_TR(0x51072d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51072e:{NFSU2_TR(0x51072e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510731:L510731:{c.instructions+=1;NFSU2_TR(0x510731);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51073a;}}
}
B510733:L510733:{c.instructions+=1;NFSU2_TR(0x510733);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B51073a:L51073a:{c.instructions+=5;NFSU2_TR(0x51073a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B51073d:{NFSU2_TR(0x51073d);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B510741:{NFSU2_TR(0x510741);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510744:{NFSU2_TR(0x510744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510745:{NFSU2_TR(0x510745);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510750:L510750:{c.instructions+=6;NFSU2_TR(0x510750);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510751:{NFSU2_TR(0x510751);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B510754:{NFSU2_TR(0x510754);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510756:{NFSU2_TR(0x510756);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510758:{NFSU2_TR(0x510758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510759:{NFSU2_TR(0x510759);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L510771;}}
}
B51075b:L51075b:{c.instructions+=2;NFSU2_TR(0x51075b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51075f:{NFSU2_TR(0x51075f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe0cull))));
__builtin_memmove((R+8),(U+0),4);
}
B510765:L510765:{c.instructions+=2;NFSU2_TR(0x510765);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B510767:{NFSU2_TR(0x510767);
if(r1(R+518)){{goto L510778;}}
}
B510769:L510769:{c.instructions+=4;NFSU2_TR(0x510769);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51076a:{NFSU2_TR(0x51076a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B51076d:{NFSU2_TR(0x51076d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B51076f:{NFSU2_TR(0x51076f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510765u);}goto L510765;}}
}
B510771:L510771:{c.instructions+=4;NFSU2_TR(0x510771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510772:{NFSU2_TR(0x510772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510773:{NFSU2_TR(0x510773);
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
B510775:{NFSU2_TR(0x510775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510778:L510778:{c.instructions+=5;NFSU2_TR(0x510778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510779:{NFSU2_TR(0x510779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51077c:{NFSU2_TR(0x51077c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51077d:{NFSU2_TR(0x51077d);
u8 U[12];
w4(U+0,u32(u32(u32(0xe0cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B510784:{NFSU2_TR(0x510784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510790:L510790:{c.instructions+=6;NFSU2_TR(0x510790);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510791:{NFSU2_TR(0x510791);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B510794:{NFSU2_TR(0x510794);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510796:{NFSU2_TR(0x510796);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510798:{NFSU2_TR(0x510798);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510799:{NFSU2_TR(0x510799);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5107b1;}}
}
B51079b:L51079b:{c.instructions+=2;NFSU2_TR(0x51079b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51079f:{NFSU2_TR(0x51079f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5107a5:L5107a5:{c.instructions+=2;NFSU2_TR(0x5107a5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5107a7:{NFSU2_TR(0x5107a7);
if(r1(R+518)){{goto L5107b8;}}
}
B5107a9:L5107a9:{c.instructions+=4;NFSU2_TR(0x5107a9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5107aa:{NFSU2_TR(0x5107aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x68ull))));
}
B5107ad:{NFSU2_TR(0x5107ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5107af:{NFSU2_TR(0x5107af);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5107a5u);}goto L5107a5;}}
}
B5107b1:L5107b1:{c.instructions+=4;NFSU2_TR(0x5107b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5107b2:{NFSU2_TR(0x5107b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5107b3:{NFSU2_TR(0x5107b3);
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
B5107b5:{NFSU2_TR(0x5107b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5107b8:L5107b8:{c.instructions+=5;NFSU2_TR(0x5107b8);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x68ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5107bb:{NFSU2_TR(0x5107bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5107bc:{NFSU2_TR(0x5107bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5107bd:{NFSU2_TR(0x5107bd);
u8 U[12];
w4(U+0,u32(u32(u32(0x110cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5107c4:{NFSU2_TR(0x5107c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5107d0:L5107d0:{c.instructions+=6;NFSU2_TR(0x5107d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5107d1:{NFSU2_TR(0x5107d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5107d3:{NFSU2_TR(0x5107d3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5107d5:{NFSU2_TR(0x5107d5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5107d7:{NFSU2_TR(0x5107d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5107d8:{NFSU2_TR(0x5107d8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5107ed;}}
}
B5107da:L5107da:{c.instructions+=2;NFSU2_TR(0x5107da);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5107de:{NFSU2_TR(0x5107de);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5107e1:L5107e1:{c.instructions+=2;NFSU2_TR(0x5107e1);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5107e3:{NFSU2_TR(0x5107e3);
if(r1(R+518)){{goto L5107f4;}}
}
B5107e5:L5107e5:{c.instructions+=4;NFSU2_TR(0x5107e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5107e6:{NFSU2_TR(0x5107e6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2cull))));
}
B5107e9:{NFSU2_TR(0x5107e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5107eb:{NFSU2_TR(0x5107eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5107e1u);}goto L5107e1;}}
}
B5107ed:L5107ed:{c.instructions+=4;NFSU2_TR(0x5107ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5107ee:{NFSU2_TR(0x5107ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5107ef:{NFSU2_TR(0x5107ef);
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
B5107f1:{NFSU2_TR(0x5107f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5107f4:L5107f4:{c.instructions+=5;NFSU2_TR(0x5107f4);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x2cull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5107f7:{NFSU2_TR(0x5107f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5107f8:{NFSU2_TR(0x5107f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5107f9:{NFSU2_TR(0x5107f9);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5107fd:{NFSU2_TR(0x5107fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510800:L510800:{c.instructions+=6;NFSU2_TR(0x510800);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510801:{NFSU2_TR(0x510801);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B510804:{NFSU2_TR(0x510804);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510806:{NFSU2_TR(0x510806);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510808:{NFSU2_TR(0x510808);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510809:{NFSU2_TR(0x510809);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L510821;}}
}
B51080b:L51080b:{c.instructions+=2;NFSU2_TR(0x51080b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51080f:{NFSU2_TR(0x51080f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0cull))));
__builtin_memmove((R+8),(U+0),4);
}
B510815:L510815:{c.instructions+=2;NFSU2_TR(0x510815);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B510817:{NFSU2_TR(0x510817);
if(r1(R+518)){{goto L510828;}}
}
B510819:L510819:{c.instructions+=4;NFSU2_TR(0x510819);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51081a:{NFSU2_TR(0x51081a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B51081d:{NFSU2_TR(0x51081d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B51081f:{NFSU2_TR(0x51081f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510815u);}goto L510815;}}
}
B510821:L510821:{c.instructions+=4;NFSU2_TR(0x510821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510822:{NFSU2_TR(0x510822);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510823:{NFSU2_TR(0x510823);
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
B510825:{NFSU2_TR(0x510825);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510828:L510828:{c.instructions+=5;NFSU2_TR(0x510828);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510829:{NFSU2_TR(0x510829);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B51082c:{NFSU2_TR(0x51082c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51082d:{NFSU2_TR(0x51082d);
u8 U[12];
w4(U+0,u32(u32(u32(0xb0cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B510834:{NFSU2_TR(0x510834);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510840:L510840:{c.instructions+=6;NFSU2_TR(0x510840);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510841:{NFSU2_TR(0x510841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B510844:{NFSU2_TR(0x510844);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510846:{NFSU2_TR(0x510846);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510848:{NFSU2_TR(0x510848);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510849:{NFSU2_TR(0x510849);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L510861;}}
}
B51084b:L51084b:{c.instructions+=2;NFSU2_TR(0x51084b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B51084f:{NFSU2_TR(0x51084f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8cull))));
__builtin_memmove((R+8),(U+0),4);
}
B510855:L510855:{c.instructions+=2;NFSU2_TR(0x510855);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+10),(U+0),4);
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B510857:{NFSU2_TR(0x510857);
if(r1(R+518)){{goto L510868;}}
}
B510859:L510859:{c.instructions+=4;NFSU2_TR(0x510859);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B51085a:{NFSU2_TR(0x51085a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x38ull))));
}
B51085d:{NFSU2_TR(0x51085d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B51085f:{NFSU2_TR(0x51085f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510855u);}goto L510855;}}
}
B510861:L510861:{c.instructions+=4;NFSU2_TR(0x510861);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510862:{NFSU2_TR(0x510862);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510863:{NFSU2_TR(0x510863);
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
B510865:{NFSU2_TR(0x510865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510868:L510868:{c.instructions+=5;NFSU2_TR(0x510868);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B51086b:{NFSU2_TR(0x51086b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B51086c:{NFSU2_TR(0x51086c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B51086d:{NFSU2_TR(0x51086d);
u8 U[12];
w4(U+0,u32(u32(u32(0xc8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B510874:{NFSU2_TR(0x510874);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510880:L510880:{c.instructions+=4;NFSU2_TR(0x510880);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510884:{NFSU2_TR(0x510884);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B510887:{NFSU2_TR(0x510887);
u8 U[12];
w4(U+0,u32(u32(u32(0xc8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B51088e:{NFSU2_TR(0x51088e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5108a0:L5108a0:{c.instructions+=3;NFSU2_TR(0x5108a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5108a4:{NFSU2_TR(0x5108a4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30230ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5108aa:{NFSU2_TR(0x5108aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5108ba;}}
}
B5108ac:L5108ac:{c.instructions+=4;NFSU2_TR(0x5108ac);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5108af:{NFSU2_TR(0x5108af);
__builtin_memmove(gp(0x838570),(R+0),4);
}
B5108b4:{NFSU2_TR(0x5108b4);
w4(R+0,u32(0x1ull));
}
B5108b9:{NFSU2_TR(0x5108b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5108ba:L5108ba:{c.instructions+=2;NFSU2_TR(0x5108ba);
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
B5108bc:{NFSU2_TR(0x5108bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5108c0:L5108c0:{c.instructions+=3;NFSU2_TR(0x5108c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5108c4:{NFSU2_TR(0x5108c4);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x30230ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x30230ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x30230ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5108ca:{NFSU2_TR(0x5108ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5108dc;}}
}
B5108cc:L5108cc:{c.instructions+=3;NFSU2_TR(0x5108cc);
s4(0x838570,u32(0x0ull));
}
B5108d6:{NFSU2_TR(0x5108d6);
w4(R+0,u32(0x1ull));
}
B5108db:{NFSU2_TR(0x5108db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5108dc:L5108dc:{c.instructions+=2;NFSU2_TR(0x5108dc);
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
B5108de:{NFSU2_TR(0x5108de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5108e0:L5108e0:{c.instructions+=3;NFSU2_TR(0x5108e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5108e4:{NFSU2_TR(0x5108e4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x30231ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5108ea:{NFSU2_TR(0x5108ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5108fa;}}
}
B5108ec:L5108ec:{c.instructions+=4;NFSU2_TR(0x5108ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5108ef:{NFSU2_TR(0x5108ef);
__builtin_memmove(gp(0x838574),(R+0),4);
}
B5108f4:{NFSU2_TR(0x5108f4);
w4(R+0,u32(0x1ull));
}
B5108f9:{NFSU2_TR(0x5108f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5108fa:L5108fa:{c.instructions+=2;NFSU2_TR(0x5108fa);
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
B5108fc:{NFSU2_TR(0x5108fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510900:L510900:{c.instructions+=3;NFSU2_TR(0x510900);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510904:{NFSU2_TR(0x510904);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x30231ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x30231ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x30231ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B51090a:{NFSU2_TR(0x51090a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L51091c;}}
}
B51090c:L51090c:{c.instructions+=3;NFSU2_TR(0x51090c);
s4(0x838574,u32(0x0ull));
}
B510916:{NFSU2_TR(0x510916);
w4(R+0,u32(0x1ull));
}
B51091b:{NFSU2_TR(0x51091b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B51091c:L51091c:{c.instructions+=2;NFSU2_TR(0x51091c);
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
B51091e:{NFSU2_TR(0x51091e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510920:L510920:{c.instructions+=10;NFSU2_TR(0x510920);
__builtin_memmove((R+0),(R+4),4);
}
B510922:{NFSU2_TR(0x510922);
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
B510924:{NFSU2_TR(0x510924);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B510926:{NFSU2_TR(0x510926);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B510929:{NFSU2_TR(0x510929);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51092c:{NFSU2_TR(0x51092c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B51092f:{NFSU2_TR(0x51092f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510932:{NFSU2_TR(0x510932);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510935:{NFSU2_TR(0x510935);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510938:{NFSU2_TR(0x510938);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510940:L510940:{c.instructions+=9;NFSU2_TR(0x510940);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510944:{NFSU2_TR(0x510944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510945:{NFSU2_TR(0x510945);
__builtin_memmove((R+24),(R+4),4);
}
B510947:{NFSU2_TR(0x510947);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B510949:{NFSU2_TR(0x510949);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B51094d:{NFSU2_TR(0x51094d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B51094f:{NFSU2_TR(0x51094f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B510952:{NFSU2_TR(0x510952);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B510959:{NFSU2_TR(0x510959);
if(r1(R+518)){{goto L510971;}}
}
B51095b:L51095b:{c.instructions+=5;NFSU2_TR(0x51095b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51095d:{NFSU2_TR(0x51095d);
u8 U[4];
w4(U+0,u32(0x79aca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510962:{NFSU2_TR(0x510962);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510964:{NFSU2_TR(0x510964);
w4(R+4,u32(0x88eb00ull));
}
B510969:{NFSU2_TR(0x510969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x51096eull));
TAIL_STATIC(0x5e8670u,5e8);
}
B51096e:L51096e:{c.instructions+=1;NFSU2_TR(0x51096e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510971:L510971:{c.instructions+=4;NFSU2_TR(0x510971);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B510973:{NFSU2_TR(0x510973);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa294ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B51097a:{NFSU2_TR(0x51097a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51097b:{NFSU2_TR(0x51097b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510980ull));
TAIL_STATIC(0x4901b0u,490);
}
B510980:L510980:{c.instructions+=3;NFSU2_TR(0x510980);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510983:{NFSU2_TR(0x510983);
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
B510985:{NFSU2_TR(0x510985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5109c2;}}
}
B510987:L510987:{c.instructions+=7;NFSU2_TR(0x510987);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510988:{NFSU2_TR(0x510988);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510989:{NFSU2_TR(0x510989);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B51098a:{NFSU2_TR(0x51098a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B51098c:{NFSU2_TR(0x51098c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa294ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B510993:{NFSU2_TR(0x510993);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510994:{NFSU2_TR(0x510994);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510999ull));
TAIL_STATIC(0x4944d0u,494);
}
B510999:L510999:{c.instructions+=4;NFSU2_TR(0x510999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B51099b:{NFSU2_TR(0x51099b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7fa294ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5109a2:{NFSU2_TR(0x5109a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5109a3:{NFSU2_TR(0x5109a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5109a8ull));
TAIL_STATIC(0x490170u,490);
}
B5109a8:L5109a8:{c.instructions+=2;NFSU2_TR(0x5109a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5109ab:{NFSU2_TR(0x5109ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5109b0ull));
TAIL_STATIC(0x571060u,571);
}
B5109b0:L5109b0:{c.instructions+=2;NFSU2_TR(0x5109b0);
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
B5109b2:{NFSU2_TR(0x5109b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5109c2;}}
}
B5109b4:L5109b4:{c.instructions+=1;NFSU2_TR(0x5109b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5109b9ull));
TAIL_STATIC(0x57ef60u,57e);
}
B5109b9:L5109b9:{c.instructions+=1;NFSU2_TR(0x5109b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5109beull));
TAIL_STATIC(0x571060u,571);
}
B5109be:L5109be:{c.instructions+=2;NFSU2_TR(0x5109be);
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
B5109c0:{NFSU2_TR(0x5109c0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5109b4u);}goto L5109b4;}}
}
B5109c2:L5109c2:{c.instructions+=2;NFSU2_TR(0x5109c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5109c3:{NFSU2_TR(0x5109c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5109d0:L5109d0:{c.instructions+=5;NFSU2_TR(0x5109d0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5109d1:{NFSU2_TR(0x5109d1);
__builtin_memmove((R+28),(R+4),4);
}
B5109d3:{NFSU2_TR(0x5109d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5109d6:{NFSU2_TR(0x5109d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5109d8:{NFSU2_TR(0x5109d8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5109ef;}}
}
B5109da:L5109da:{c.instructions+=3;NFSU2_TR(0x5109da);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5109dd:{NFSU2_TR(0x5109dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5109df:{NFSU2_TR(0x5109df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5109ef;}}
}
B5109e1:L5109e1:{c.instructions+=3;NFSU2_TR(0x5109e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5109e4:{NFSU2_TR(0x5109e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5109e6:{NFSU2_TR(0x5109e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5109ef;}}
}
B5109e8:L5109e8:{c.instructions+=3;NFSU2_TR(0x5109e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5109eb:{NFSU2_TR(0x5109eb);
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
B5109ed:{NFSU2_TR(0x5109ed);
if(r1(R+518)){{goto L510a69;}}
}
B5109ef:L5109ef:{c.instructions+=4;NFSU2_TR(0x5109ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5109f1:{NFSU2_TR(0x5109f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5109f2:{NFSU2_TR(0x5109f2);
w4(R+24,u32(0x1ull));
}
B5109f7:{NFSU2_TR(0x5109f7);
if(r1(R+518)){{goto L510a11;}}
}
B5109f9:L5109f9:{c.instructions+=4;NFSU2_TR(0x5109f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5109fb:{NFSU2_TR(0x5109fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5109fd:{NFSU2_TR(0x5109fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5109fe:{NFSU2_TR(0x5109fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510a03ull));
TAIL_STATIC(0x4901d0u,490);
}
B510a03:L510a03:{c.instructions+=6;NFSU2_TR(0x510a03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B510a06:{NFSU2_TR(0x510a06);
__builtin_memmove((R+24),(R+0),4);
}
B510a08:{NFSU2_TR(0x510a08);
w1(R+512,u8((r4(R+24))!=(u32(0x0ull))));
w4(R+24,u32(0-u32(r4(R+24))));
}
B510a0a:{NFSU2_TR(0x510a0a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B510a0c:{NFSU2_TR(0x510a0c);
w4(R+24,u32(0-u32(r4(R+24))));
}
B510a0e:{NFSU2_TR(0x510a0e);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
}
B510a11:L510a11:{c.instructions+=3;NFSU2_TR(0x510a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510a14:{NFSU2_TR(0x510a14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510a16:{NFSU2_TR(0x510a16);
if(r1(R+518)){{goto L510a2d;}}
}
B510a18:L510a18:{c.instructions+=4;NFSU2_TR(0x510a18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a1a:{NFSU2_TR(0x510a1a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a1c:{NFSU2_TR(0x510a1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a1d:{NFSU2_TR(0x510a1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510a22ull));
TAIL_STATIC(0x4901d0u,490);
}
B510a22:L510a22:{c.instructions+=5;NFSU2_TR(0x510a22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B510a25:{NFSU2_TR(0x510a25);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B510a27:{NFSU2_TR(0x510a27);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B510a29:{NFSU2_TR(0x510a29);
w4(R+0,u32(0-u32(r4(R+0))));
}
B510a2b:{NFSU2_TR(0x510a2b);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B510a2d:L510a2d:{c.instructions+=3;NFSU2_TR(0x510a2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510a30:{NFSU2_TR(0x510a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510a32:{NFSU2_TR(0x510a32);
if(r1(R+518)){{goto L510a49;}}
}
B510a34:L510a34:{c.instructions+=4;NFSU2_TR(0x510a34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a36:{NFSU2_TR(0x510a36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a38:{NFSU2_TR(0x510a38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a39:{NFSU2_TR(0x510a39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510a3eull));
TAIL_STATIC(0x4901d0u,490);
}
B510a3e:L510a3e:{c.instructions+=5;NFSU2_TR(0x510a3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B510a41:{NFSU2_TR(0x510a41);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B510a43:{NFSU2_TR(0x510a43);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B510a45:{NFSU2_TR(0x510a45);
w4(R+0,u32(0-u32(r4(R+0))));
}
B510a47:{NFSU2_TR(0x510a47);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
}
B510a49:L510a49:{c.instructions+=3;NFSU2_TR(0x510a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510a4c:{NFSU2_TR(0x510a4c);
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
B510a4e:{NFSU2_TR(0x510a4e);
if(r1(R+518)){{goto L510a65;}}
}
B510a50:L510a50:{c.instructions+=4;NFSU2_TR(0x510a50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a52:{NFSU2_TR(0x510a52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a54:{NFSU2_TR(0x510a54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a55:{NFSU2_TR(0x510a55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510a5aull));
TAIL_STATIC(0x4901d0u,490);
}
B510a5a:L510a5a:{c.instructions+=5;NFSU2_TR(0x510a5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B510a5d:{NFSU2_TR(0x510a5d);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B510a5f:{NFSU2_TR(0x510a5f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B510a61:{NFSU2_TR(0x510a61);
w4(R+0,u32(0-u32(r4(R+0))));
}
B510a63:{NFSU2_TR(0x510a63);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510a65:L510a65:{c.instructions+=2;NFSU2_TR(0x510a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510a68:{NFSU2_TR(0x510a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510a69:L510a69:{c.instructions+=2;NFSU2_TR(0x510a69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510a6a:{NFSU2_TR(0x510a6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510a70:L510a70:{c.instructions+=7;NFSU2_TR(0x510a70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a71:{NFSU2_TR(0x510a71);
__builtin_memmove((R+24),(R+4),4);
}
B510a73:{NFSU2_TR(0x510a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510a76:{NFSU2_TR(0x510a76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a77:{NFSU2_TR(0x510a77);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B510a79:{NFSU2_TR(0x510a79);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510a7b:{NFSU2_TR(0x510a7b);
if(r1(R+518)){{goto L510a86;}}
}
B510a7d:L510a7d:{c.instructions+=2;NFSU2_TR(0x510a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a7e:{NFSU2_TR(0x510a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510a83ull));
TAIL_STATIC(0x490130u,490);
}
B510a83:L510a83:{c.instructions+=1;NFSU2_TR(0x510a83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510a86:L510a86:{c.instructions+=3;NFSU2_TR(0x510a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510a89:{NFSU2_TR(0x510a89);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510a8b:{NFSU2_TR(0x510a8b);
if(r1(R+518)){{goto L510a96;}}
}
B510a8d:L510a8d:{c.instructions+=2;NFSU2_TR(0x510a8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a8e:{NFSU2_TR(0x510a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510a93ull));
TAIL_STATIC(0x490130u,490);
}
B510a93:L510a93:{c.instructions+=1;NFSU2_TR(0x510a93);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510a96:L510a96:{c.instructions+=3;NFSU2_TR(0x510a96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510a99:{NFSU2_TR(0x510a99);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510a9b:{NFSU2_TR(0x510a9b);
if(r1(R+518)){{goto L510aa6;}}
}
B510a9d:L510a9d:{c.instructions+=2;NFSU2_TR(0x510a9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510a9e:{NFSU2_TR(0x510a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510aa3ull));
TAIL_STATIC(0x490130u,490);
}
B510aa3:L510aa3:{c.instructions+=1;NFSU2_TR(0x510aa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510aa6:L510aa6:{c.instructions+=3;NFSU2_TR(0x510aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510aa9:{NFSU2_TR(0x510aa9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B510aab:{NFSU2_TR(0x510aab);
if(r1(R+518)){{goto L510ab6;}}
}
B510aad:L510aad:{c.instructions+=2;NFSU2_TR(0x510aad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510aae:{NFSU2_TR(0x510aae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510ab3ull));
TAIL_STATIC(0x490130u,490);
}
B510ab3:L510ab3:{c.instructions+=1;NFSU2_TR(0x510ab3);
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
B510ab6:L510ab6:{c.instructions+=8;NFSU2_TR(0x510ab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510ab9:{NFSU2_TR(0x510ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510abc:{NFSU2_TR(0x510abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510abf:{NFSU2_TR(0x510abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510ac2:{NFSU2_TR(0x510ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510ac5:{NFSU2_TR(0x510ac5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510ac6:{NFSU2_TR(0x510ac6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510ac7:{NFSU2_TR(0x510ac7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510ad0:L510ad0:{c.instructions+=2;NFSU2_TR(0x510ad0);
w4(R+0,u32(0x140ull));
}
B510ad5:{NFSU2_TR(0x510ad5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510ae0:L510ae0:{c.instructions+=2;NFSU2_TR(0x510ae0);
w4(R+0,u32(0x1b0ull));
}
B510ae5:{NFSU2_TR(0x510ae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510af0:L510af0:{c.instructions+=4;NFSU2_TR(0x510af0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510af1:{NFSU2_TR(0x510af1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510af2:{NFSU2_TR(0x510af2);
u8 U[4];
w4(U+0,u32(0x83a9e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510af7:{NFSU2_TR(0x510af7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510afcull));
TAIL_STATIC(0x43dbb0u,43d);
}
B510afc:L510afc:{c.instructions+=4;NFSU2_TR(0x510afc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B510afe:{NFSU2_TR(0x510afe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510b01:{NFSU2_TR(0x510b01);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510b03:{NFSU2_TR(0x510b03);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L510b21;}}
}
B510b05:L510b05:{c.instructions+=6;NFSU2_TR(0x510b05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510b06:{NFSU2_TR(0x510b06);
__builtin_memmove((R+4),(R+0),4);
}
B510b08:{NFSU2_TR(0x510b08);
__builtin_memmove((R+12),(R+4),4);
}
B510b0a:{NFSU2_TR(0x510b0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B510b0d:{NFSU2_TR(0x510b0d);
w4(R+24,u32(0x83a9e0ull));
}
B510b12:{NFSU2_TR(0x510b12);
w4(R+28,u32(0x837b80ull));
}
B510b17:L510b17:{c.instructions+=1;NFSU2_TR(0x510b17);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L510b19;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510b17u);}goto L510b17;}
}
B510b19:L510b19:{c.instructions+=2;NFSU2_TR(0x510b19);
__builtin_memmove((R+4),(R+12),4);
}
B510b1b:{NFSU2_TR(0x510b1b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B510b1e:L510b1e:{c.instructions+=1;NFSU2_TR(0x510b1e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L510b20;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510b1eu);}goto L510b1e;}
}
B510b20:L510b20:{c.instructions+=1;NFSU2_TR(0x510b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B510b21:L510b21:{c.instructions+=2;NFSU2_TR(0x510b21);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B510b24:{NFSU2_TR(0x510b24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L510b46;}}
}
B510b26:L510b26:{c.instructions+=6;NFSU2_TR(0x510b26);
w4(R+4,u32(0x7ull));
}
B510b2b:{NFSU2_TR(0x510b2b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B510b2d:{NFSU2_TR(0x510b2d);
__builtin_memmove((R+24),(R+4),4);
}
B510b2f:{NFSU2_TR(0x510b2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B510b32:{NFSU2_TR(0x510b32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x837b80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510b38:{NFSU2_TR(0x510b38);
w4(R+0,u32(0x5f5f5f5full));
}
B510b3d:L510b3d:{c.instructions+=1;NFSU2_TR(0x510b3d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L510b3f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510b3du);}goto L510b3d;}
}
B510b3f:L510b3f:{c.instructions+=2;NFSU2_TR(0x510b3f);
__builtin_memmove((R+4),(R+24),4);
}
B510b41:{NFSU2_TR(0x510b41);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B510b44:L510b44:{c.instructions+=1;NFSU2_TR(0x510b44);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L510b46;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510b44u);}goto L510b44;}
}
B510b46:L510b46:{c.instructions+=6;NFSU2_TR(0x510b46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510b4a:{NFSU2_TR(0x510b4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B510b4d:{NFSU2_TR(0x510b4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510b4e:{NFSU2_TR(0x510b4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510b4f:{NFSU2_TR(0x510b4f);
__builtin_memmove(gp(0x837b88),(R+8),1);
}
B510b55:{NFSU2_TR(0x510b55);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L510b64;}}
}
B510b57:L510b57:{c.instructions+=4;NFSU2_TR(0x510b57);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0x30ull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0x30ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B510b59:{NFSU2_TR(0x510b59);
__builtin_memmove(gp(0x837b87),(R+0),1);
}
B510b5e:{NFSU2_TR(0x510b5e);
w4(R+0,u32(0x837b80ull));
}
B510b63:{NFSU2_TR(0x510b63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510b64:L510b64:{c.instructions+=4;NFSU2_TR(0x510b64);
u8 U[3];
w1(R+512,carry<u8>(r1(R+0),u8(0x37ull)));
w1(R+523,scarry<u8>(r1(R+0),u8(0x37ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x37ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B510b66:{NFSU2_TR(0x510b66);
__builtin_memmove(gp(0x837b87),(R+0),1);
}
B510b6b:{NFSU2_TR(0x510b6b);
w4(R+0,u32(0x837b80ull));
}
B510b70:{NFSU2_TR(0x510b70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510b80:L510b80:{c.instructions+=10;NFSU2_TR(0x510b80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510b81:{NFSU2_TR(0x510b81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510b82:{NFSU2_TR(0x510b82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510b83:{NFSU2_TR(0x510b83);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B510b87:{NFSU2_TR(0x510b87);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B510b89:{NFSU2_TR(0x510b89);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B510b8b:{NFSU2_TR(0x510b8b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B510b8d:{NFSU2_TR(0x510b8d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B510b8f:{NFSU2_TR(0x510b8f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B510b91:{NFSU2_TR(0x510b91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L510bd2;}}
}
B510b93:L510b93:{c.instructions+=3;NFSU2_TR(0x510b93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510b94:{NFSU2_TR(0x510b94);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B510b9a:{NFSU2_TR(0x510b9a);
__builtin_memmove((R+12),(R+12),4);
}
B510ba0:L510ba0:{c.instructions+=2;NFSU2_TR(0x510ba0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B510ba2:{NFSU2_TR(0x510ba2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L510bb0;}}
}
B510ba4:L510ba4:{c.instructions+=2;NFSU2_TR(0x510ba4);
u8 U[8];
__builtin_memmove((U+0),gp(0x838408),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B510baa:{NFSU2_TR(0x510baa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L510bb0;}}
}
B510bac:L510bac:{c.instructions+=2;NFSU2_TR(0x510bac);
__builtin_memmove((R+8),(R+28),4);
}
B510bae:{NFSU2_TR(0x510bae);
{goto L510bb2;}
}
B510bb0:L510bb0:{c.instructions+=1;NFSU2_TR(0x510bb0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B510bb2:L510bb2:{c.instructions+=3;NFSU2_TR(0x510bb2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B510bb5:{NFSU2_TR(0x510bb5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510bb7:{NFSU2_TR(0x510bb7);
if(r1(R+518)){{goto L510bc8;}}
}
B510bb9:L510bb9:{c.instructions+=2;NFSU2_TR(0x510bb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510bbb:{NFSU2_TR(0x510bbb);
if(r1(R+518)){{goto L510bc8;}}
}
B510bbd:L510bbd:{c.instructions+=2;NFSU2_TR(0x510bbd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510bbf:{NFSU2_TR(0x510bbf);
if(r1(R+518)){{goto L510bc5;}}
}
B510bc1:L510bc1:{c.instructions+=2;NFSU2_TR(0x510bc1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510bc3:{NFSU2_TR(0x510bc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510bc9;}}
}
B510bc5:L510bc5:{c.instructions+=2;NFSU2_TR(0x510bc5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B510bc6:{NFSU2_TR(0x510bc6);
{goto L510bc9;}
}
B510bc8:L510bc8:{c.instructions+=1;NFSU2_TR(0x510bc8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B510bc9:L510bc9:{c.instructions+=4;NFSU2_TR(0x510bc9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B510bca:{NFSU2_TR(0x510bca);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B510bcd:{NFSU2_TR(0x510bcd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510bcf:{NFSU2_TR(0x510bcf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510ba0u);}goto L510ba0;}}
}
B510bd1:L510bd1:{c.instructions+=1;NFSU2_TR(0x510bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510bd2:L510bd2:{c.instructions+=3;NFSU2_TR(0x510bd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B510bd5:{NFSU2_TR(0x510bd5);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B510bd8:{NFSU2_TR(0x510bd8);
if(r1(R+518)){{goto L510c05;}}
}
B510bda:L510bda:{c.instructions+=2;NFSU2_TR(0x510bda);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B510bdd:{NFSU2_TR(0x510bdd);
if(r1(R+518)){{goto L510c05;}}
}
B510bdf:L510bdf:{c.instructions+=2;NFSU2_TR(0x510bdf);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B510be2:{NFSU2_TR(0x510be2);
if(r1(R+518)){{goto L510be9;}}
}
B510be4:L510be4:{c.instructions+=2;NFSU2_TR(0x510be4);
u8 U[5];
__builtin_memmove((U+3),(R+8),1);
w1(R+512,u8((r1(U+3))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(U+3),u8(0x4ull)));
w1(U+4,u8(u32(r1(U+3))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B510be7:{NFSU2_TR(0x510be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510c1d;}}
}
B510be9:L510be9:{c.instructions+=7;NFSU2_TR(0x510be9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510bed:{NFSU2_TR(0x510bed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510bf1:{NFSU2_TR(0x510bf1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510bf2:{NFSU2_TR(0x510bf2);
u8 U[4];
w4(U+0,u32(0x79acc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510bf7:{NFSU2_TR(0x510bf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510bf8:{NFSU2_TR(0x510bf8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510bf9:{NFSU2_TR(0x510bf9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510bfeull));
TAIL_STATIC(0x50c960u,50c);
}
B510bfe:L510bfe:{c.instructions+=5;NFSU2_TR(0x510bfe);
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
B510c01:{NFSU2_TR(0x510c01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510c02:{NFSU2_TR(0x510c02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B510c03:{NFSU2_TR(0x510c03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B510c04:{NFSU2_TR(0x510c04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c05:L510c05:{c.instructions+=7;NFSU2_TR(0x510c05);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B510c09:{NFSU2_TR(0x510c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510c0d:{NFSU2_TR(0x510c0d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c0e:{NFSU2_TR(0x510c0e);
u8 U[4];
w4(U+0,u32(0x79acb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c13:{NFSU2_TR(0x510c13);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c14:{NFSU2_TR(0x510c14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c15:{NFSU2_TR(0x510c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510c1aull));
TAIL_STATIC(0x50c960u,50c);
}
B510c1a:L510c1a:{c.instructions+=1;NFSU2_TR(0x510c1a);
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
B510c1d:L510c1d:{c.instructions+=4;NFSU2_TR(0x510c1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510c1e:{NFSU2_TR(0x510c1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B510c1f:{NFSU2_TR(0x510c1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B510c20:{NFSU2_TR(0x510c20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c30:L510c30:{c.instructions+=2;NFSU2_TR(0x510c30);
__builtin_memmove((R+0),gp(0x838578),4);
}
B510c35:{NFSU2_TR(0x510c35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c40:L510c40:{c.instructions+=2;NFSU2_TR(0x510c40);
__builtin_memmove((R+0),gp(0x837fd8),4);
}
B510c45:{NFSU2_TR(0x510c45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c50:L510c50:{c.instructions+=2;NFSU2_TR(0x510c50);
s4(0x838578,u32(0x1ull));
}
B510c5a:{NFSU2_TR(0x510c5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c60:L510c60:{c.instructions+=2;NFSU2_TR(0x510c60);
s4(0x838578,u32(0x2ull));
}
B510c6a:{NFSU2_TR(0x510c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c70:L510c70:{c.instructions+=2;NFSU2_TR(0x510c70);
s4(0x838578,u32(0x0ull));
}
B510c7a:{NFSU2_TR(0x510c7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c80:L510c80:{c.instructions+=2;NFSU2_TR(0x510c80);
s1(0x838580,u8(0x1ull));
}
B510c87:{NFSU2_TR(0x510c87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510c90:L510c90:{c.instructions+=3;NFSU2_TR(0x510c90);
__builtin_memmove((R+0),gp(0x83857c),4);
}
B510c95:{NFSU2_TR(0x510c95);
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
B510c97:{NFSU2_TR(0x510c97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510cde;}}
}
B510c99:L510c99:{c.instructions+=9;NFSU2_TR(0x510c99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c9b:{NFSU2_TR(0x510c9b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c9d:{NFSU2_TR(0x510c9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510c9f:{NFSU2_TR(0x510c9f);
u8 U[4];
w4(U+0,u32(0x510c80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ca4:{NFSU2_TR(0x510ca4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ca6:{NFSU2_TR(0x510ca6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ca8:{NFSU2_TR(0x510ca8);
u8 U[4];
w4(U+0,u32(0x79acc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510cad:{NFSU2_TR(0x510cad);
s1(0x838580,u8(0x0ull));
}
B510cb4:{NFSU2_TR(0x510cb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510cb9ull));
TAIL_STATIC(0x57cf70u,57c);
}
B510cb9:L510cb9:{c.instructions+=3;NFSU2_TR(0x510cb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B510cbc:{NFSU2_TR(0x510cbc);
__builtin_memmove(gp(0x83857c),(R+0),4);
}
B510cc1:{NFSU2_TR(0x510cc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510cc6ull));
TAIL_STATIC(0x571060u,571);
}
B510cc6:L510cc6:{c.instructions+=2;NFSU2_TR(0x510cc6);
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
B510cc8:{NFSU2_TR(0x510cc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510cde;}}
}
B510cca:L510cca:{c.instructions+=1;NFSU2_TR(0x510cca);
__builtin_memmove((R+12),(R+12),4);
}
B510cd0:L510cd0:{c.instructions+=1;NFSU2_TR(0x510cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510cd5ull));
TAIL_STATIC(0x57ef60u,57e);
}
B510cd5:L510cd5:{c.instructions+=1;NFSU2_TR(0x510cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510cdaull));
TAIL_STATIC(0x571060u,571);
}
B510cda:L510cda:{c.instructions+=2;NFSU2_TR(0x510cda);
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
B510cdc:{NFSU2_TR(0x510cdc);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510cd0u);}goto L510cd0;}}
}
B510cde:L510cde:{c.instructions+=1;NFSU2_TR(0x510cde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510ce0:L510ce0:{c.instructions+=5;NFSU2_TR(0x510ce0);
__builtin_memmove((R+0),gp(0x83857c),4);
}
B510ce5:{NFSU2_TR(0x510ce5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510ce7:{NFSU2_TR(0x510ce7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ce8:{NFSU2_TR(0x510ce8);
__builtin_memmove((R+24),(R+4),4);
}
B510cea:{NFSU2_TR(0x510cea);
if(r1(R+518)){{goto L510d06;}}
}
B510cec:L510cec:{c.instructions+=2;NFSU2_TR(0x510cec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ced:{NFSU2_TR(0x510ced);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510cf2ull));
TAIL_STATIC(0x580e90u,580);
}
B510cf2:L510cf2:{c.instructions+=3;NFSU2_TR(0x510cf2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510cf5:{NFSU2_TR(0x510cf5);
s1(0x838580,u8(0x0ull));
}
B510cfc:{NFSU2_TR(0x510cfc);
s4(0x83857c,u32(0x0ull));
}
B510d06:L510d06:{c.instructions+=3;NFSU2_TR(0x510d06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B510d0c:{NFSU2_TR(0x510d0c);
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
B510d0e:{NFSU2_TR(0x510d0e);
if(r1(R+518)){{goto L510d31;}}
}
B510d10:L510d10:{c.instructions+=1;NFSU2_TR(0x510d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510d15ull));
TAIL_STATIC(0x4022c0u,402);
}
B510d15:L510d15:{c.instructions+=3;NFSU2_TR(0x510d15);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x81ull))));
__builtin_memmove((R+0),(U+0),4);
}
B510d1b:{NFSU2_TR(0x510d1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510d1c:{NFSU2_TR(0x510d1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510d21ull));
TAIL_STATIC(0x577eb0u,577);
}
B510d21:L510d21:{c.instructions+=2;NFSU2_TR(0x510d21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510d22:{NFSU2_TR(0x510d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510d27ull));
TAIL_STATIC(0x580e90u,580);
}
B510d27:L510d27:{c.instructions+=2;NFSU2_TR(0x510d27);
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
B510d2a:{NFSU2_TR(0x510d2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B510d31:L510d31:{c.instructions+=2;NFSU2_TR(0x510d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510d32:{NFSU2_TR(0x510d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510d40:L510d40:{c.instructions+=2;NFSU2_TR(0x510d40);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+4)),r4(U+0));
}
B510d46:{NFSU2_TR(0x510d46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510d50:L510d50:{c.instructions+=10;NFSU2_TR(0x510d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510d51:{NFSU2_TR(0x510d51);
__builtin_memmove((R+20),(R+16),4);
}
B510d53:{NFSU2_TR(0x510d53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B510d56:{NFSU2_TR(0x510d56);
__builtin_memmove((R+4),gp(0x838408),4);
}
B510d5c:{NFSU2_TR(0x510d5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510d5d:{NFSU2_TR(0x510d5d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B510d5f:{NFSU2_TR(0x510d5f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B510d61:{NFSU2_TR(0x510d61);
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
B510d63:{NFSU2_TR(0x510d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510d66:{NFSU2_TR(0x510d66);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L510e02;}}
}
B510d6c:L510d6c:{c.instructions+=6;NFSU2_TR(0x510d6c);
__builtin_memmove((R+0),gp(0x83840c),4);
}
B510d71:{NFSU2_TR(0x510d71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510d72:{NFSU2_TR(0x510d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510d75:{NFSU2_TR(0x510d75);
__builtin_memmove((R+0),gp(0x86283c),4);
}
B510d7a:{NFSU2_TR(0x510d7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510d7b:{NFSU2_TR(0x510d7b);
{goto L510d80;}
}
B510d80:L510d80:{c.instructions+=2;NFSU2_TR(0x510d80);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B510d82:{NFSU2_TR(0x510d82);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L510d91;}}
}
B510d84:L510d84:{c.instructions+=2;NFSU2_TR(0x510d84);
u8 U[8];
__builtin_memmove((U+0),gp(0x838408),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B510d8a:{NFSU2_TR(0x510d8a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L510d91;}}
}
B510d8c:L510d8c:{c.instructions+=2;NFSU2_TR(0x510d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B510d8f:{NFSU2_TR(0x510d8f);
{goto L510d93;}
}
B510d91:L510d91:{c.instructions+=1;NFSU2_TR(0x510d91);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B510d93:L510d93:{c.instructions+=4;NFSU2_TR(0x510d93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B510d96:{NFSU2_TR(0x510d96);
w4(R+4,u32(0x1ull));
}
B510d9b:{NFSU2_TR(0x510d9b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510d9d:{NFSU2_TR(0x510d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510da6;}}
}
B510d9f:L510d9f:{c.instructions+=2;NFSU2_TR(0x510d9f);
w4(R+8,u32(0x3ull));
}
B510da4:{NFSU2_TR(0x510da4);
{goto L510db0;}
}
B510da6:L510da6:{c.instructions+=2;NFSU2_TR(0x510da6);
w4(R+4,u32(0x2ull));
}
B510dab:{NFSU2_TR(0x510dab);
w4(R+8,u32(0x4ull));
}
B510db0:L510db0:{c.instructions+=3;NFSU2_TR(0x510db0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B510db4:{NFSU2_TR(0x510db4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510db6:{NFSU2_TR(0x510db6);
if(r1(R+518)){{goto L510dbc;}}
}
B510db8:L510db8:{c.instructions+=2;NFSU2_TR(0x510db8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B510dba:{NFSU2_TR(0x510dba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510de9;}}
}
B510dbc:L510dbc:{c.instructions+=4;NFSU2_TR(0x510dbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B510dbf:{NFSU2_TR(0x510dbf);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B510dc1:{NFSU2_TR(0x510dc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510dc3:{NFSU2_TR(0x510dc3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L510de9;}}
}
B510dc5:L510dc5:{c.instructions+=2;NFSU2_TR(0x510dc5);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B510dcc:{NFSU2_TR(0x510dcc);
if(r1(R+518)){{goto L510dd5;}}
}
B510dce:L510dce:{c.instructions+=3;NFSU2_TR(0x510dce);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B510dcf:{NFSU2_TR(0x510dcf);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B510dd1:{NFSU2_TR(0x510dd1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510dc5u);}goto L510dc5;}}
}
B510dd3:L510dd3:{c.instructions+=1;NFSU2_TR(0x510dd3);
{goto L510de9;}
}
B510dd5:L510dd5:{c.instructions+=3;NFSU2_TR(0x510dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B510ddc:{NFSU2_TR(0x510ddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B510dde:{NFSU2_TR(0x510dde);
if(r1(R+518)){{goto L510de9;}}
}
B510de0:L510de0:{c.instructions+=2;NFSU2_TR(0x510de0);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B510de4:{NFSU2_TR(0x510de4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510de9;}}
}
B510de6:L510de6:{c.instructions+=1;NFSU2_TR(0x510de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B510de9:L510de9:{c.instructions+=7;NFSU2_TR(0x510de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B510dec:{NFSU2_TR(0x510dec);
__builtin_memmove((R+4),gp(0x838408),4);
}
B510df2:{NFSU2_TR(0x510df2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B510df3:{NFSU2_TR(0x510df3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B510df6:{NFSU2_TR(0x510df6);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B510df8:{NFSU2_TR(0x510df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510dfb:{NFSU2_TR(0x510dfb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x510d80u);}goto L510d80;}}
}
B510dfd:L510dfd:{c.instructions+=3;NFSU2_TR(0x510dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510e00:{NFSU2_TR(0x510e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B510e01:{NFSU2_TR(0x510e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510e02:L510e02:{c.instructions+=4;NFSU2_TR(0x510e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B510e03:{NFSU2_TR(0x510e03);
__builtin_memmove((R+16),(R+20),4);
}
B510e05:{NFSU2_TR(0x510e05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B510e06:{NFSU2_TR(0x510e06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510e10:L510e10:{c.instructions+=5;NFSU2_TR(0x510e10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e11:{NFSU2_TR(0x510e11);
__builtin_memmove((R+24),(R+4),4);
}
B510e13:{NFSU2_TR(0x510e13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B510e19:{NFSU2_TR(0x510e19);
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
B510e1b:{NFSU2_TR(0x510e1b);
if(r1(R+518)){{goto L510e3c;}}
}
B510e1d:L510e1d:{c.instructions+=4;NFSU2_TR(0x510e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510e23:{NFSU2_TR(0x510e23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e24:{NFSU2_TR(0x510e24);
w4(R+4,u32(0x832dacull));
}
B510e29:{NFSU2_TR(0x510e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510e2eull));
TAIL_STATIC(0x488aa0u,488);
}
B510e2e:L510e2e:{c.instructions+=2;NFSU2_TR(0x510e2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B510e35:{NFSU2_TR(0x510e35);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x155ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B510e3c:L510e3c:{c.instructions+=2;NFSU2_TR(0x510e3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510e3d:{NFSU2_TR(0x510e3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510e40:L510e40:{c.instructions+=1;NFSU2_TR(0x510e40);
TAIL_STATIC(0x50da50u,50d);
}
B510e50:L510e50:{c.instructions+=14;NFSU2_TR(0x510e50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e52:{NFSU2_TR(0x510e52);
u8 U[4];
w4(U+0,u32(0x776fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e57:{NFSU2_TR(0x510e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510e5d:{NFSU2_TR(0x510e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e5e:{NFSU2_TR(0x510e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510e65:{NFSU2_TR(0x510e65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e66:{NFSU2_TR(0x510e66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e67:{NFSU2_TR(0x510e67);
__builtin_memmove((R+24),(R+4),4);
}
B510e69:{NFSU2_TR(0x510e69);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510e6d:{NFSU2_TR(0x510e6d);
u8 U[4];
w4(U+0,u32(0x79ace8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B510e73:{NFSU2_TR(0x510e73);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B510e76:{NFSU2_TR(0x510e76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B510e78:{NFSU2_TR(0x510e78);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B510e80:{NFSU2_TR(0x510e80);
if(r1(R+518)){{goto L510e98;}}
}
B510e82:L510e82:{c.instructions+=4;NFSU2_TR(0x510e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510e85:{NFSU2_TR(0x510e85);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510e86:{NFSU2_TR(0x510e86);
w4(R+4,u32(0x832dacull));
}
B510e8b:{NFSU2_TR(0x510e8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510e90ull));
TAIL_STATIC(0x488aa0u,488);
}
B510e90:L510e90:{c.instructions+=2;NFSU2_TR(0x510e90);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B510e94:{NFSU2_TR(0x510e94);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B510e98:L510e98:{c.instructions+=6;NFSU2_TR(0x510e98);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510e9c:{NFSU2_TR(0x510e9c);
u8 U[4];
w4(U+0,u32(0x79ac00ull));
s4(u32(r4(R+24)),r4(U+0));
}
B510ea2:{NFSU2_TR(0x510ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510ea3:{NFSU2_TR(0x510ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B510eaa:{NFSU2_TR(0x510eaa);
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
B510ead:{NFSU2_TR(0x510ead);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510eb0:L510eb0:{c.instructions+=4;NFSU2_TR(0x510eb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510eb4:{NFSU2_TR(0x510eb4);
__builtin_memmove((R+4),(R+0),4);
}
B510eb6:{NFSU2_TR(0x510eb6);
w1(R+512,u8((r4(R+4))<(u32(0x4ull))));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B510eb9:{NFSU2_TR(0x510eb9);
if(r1(R+518)){{goto L510ebe;}}
}
B510ebb:L510ebb:{c.instructions+=2;NFSU2_TR(0x510ebb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B510ebc:{NFSU2_TR(0x510ebc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L510ec0;}}
}
B510ebe:L510ebe:{c.instructions+=1;NFSU2_TR(0x510ebe);
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
B510ec0:L510ec0:{c.instructions+=1;NFSU2_TR(0x510ec0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510ed0:L510ed0:{c.instructions+=7;NFSU2_TR(0x510ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510ed3:{NFSU2_TR(0x510ed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510ed6:{NFSU2_TR(0x510ed6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ed7:{NFSU2_TR(0x510ed7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ed8:{NFSU2_TR(0x510ed8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510edc:{NFSU2_TR(0x510edc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ede:{NFSU2_TR(0x510ede);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510ee3ull));
TAIL_STATIC(0x46d150u,46d);
}
B510ee3:L510ee3:{c.instructions+=1;NFSU2_TR(0x510ee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510ef0:L510ef0:{c.instructions+=7;NFSU2_TR(0x510ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510ef3:{NFSU2_TR(0x510ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510ef6:{NFSU2_TR(0x510ef6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ef7:{NFSU2_TR(0x510ef7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ef8:{NFSU2_TR(0x510ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510efc:{NFSU2_TR(0x510efc);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510efe:{NFSU2_TR(0x510efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510f03ull));
TAIL_STATIC(0x46d2d0u,46d);
}
B510f03:L510f03:{c.instructions+=1;NFSU2_TR(0x510f03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510f10:L510f10:{c.instructions+=5;NFSU2_TR(0x510f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510f13:{NFSU2_TR(0x510f13);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f17:{NFSU2_TR(0x510f17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f18:{NFSU2_TR(0x510f18);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f1a:{NFSU2_TR(0x510f1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510f1full));
TAIL_STATIC(0x46d390u,46d);
}
B510f1f:L510f1f:{c.instructions+=1;NFSU2_TR(0x510f1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510f30:L510f30:{c.instructions+=8;NFSU2_TR(0x510f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510f33:{NFSU2_TR(0x510f33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f36:{NFSU2_TR(0x510f36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f37:{NFSU2_TR(0x510f37);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f38:{NFSU2_TR(0x510f38);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f3c:{NFSU2_TR(0x510f3c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f3e:{NFSU2_TR(0x510f3e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f40:{NFSU2_TR(0x510f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510f45ull));
TAIL_STATIC(0x46d400u,46d);
}
B510f45:L510f45:{c.instructions+=1;NFSU2_TR(0x510f45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510f50:L510f50:{c.instructions+=6;NFSU2_TR(0x510f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510f53:{NFSU2_TR(0x510f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f56:{NFSU2_TR(0x510f56);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f57:{NFSU2_TR(0x510f57);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f58:{NFSU2_TR(0x510f58);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f5c:{NFSU2_TR(0x510f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510f61ull));
TAIL_STATIC(0x46d580u,46d);
}
B510f61:L510f61:{c.instructions+=1;NFSU2_TR(0x510f61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510f70:L510f70:{c.instructions+=4;NFSU2_TR(0x510f70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f71:{NFSU2_TR(0x510f71);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f73:{NFSU2_TR(0x510f73);
__builtin_memmove((R+24),(R+4),4);
}
B510f75:{NFSU2_TR(0x510f75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510f7aull));
TAIL_STATIC(0x43c1c0u,43c);
}
B510f7a:L510f7a:{c.instructions+=7;NFSU2_TR(0x510f7a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B510f7e:{NFSU2_TR(0x510f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f81:{NFSU2_TR(0x510f81);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B510f84:{NFSU2_TR(0x510f84);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f85:{NFSU2_TR(0x510f85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510f86:{NFSU2_TR(0x510f86);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510f8a:{NFSU2_TR(0x510f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510f8full));
TAIL_STATIC(0x46d500u,46d);
}
B510f8f:L510f8f:{c.instructions+=2;NFSU2_TR(0x510f8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B510f90:{NFSU2_TR(0x510f90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510fa0:L510fa0:{c.instructions+=6;NFSU2_TR(0x510fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510fa3:{NFSU2_TR(0x510fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510fa6:{NFSU2_TR(0x510fa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fa7:{NFSU2_TR(0x510fa7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fa8:{NFSU2_TR(0x510fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510fac:{NFSU2_TR(0x510fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510fb1ull));
TAIL_STATIC(0x46d480u,46d);
}
B510fb1:L510fb1:{c.instructions+=1;NFSU2_TR(0x510fb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510fc0:L510fc0:{c.instructions+=8;NFSU2_TR(0x510fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510fc3:{NFSU2_TR(0x510fc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510fc6:{NFSU2_TR(0x510fc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fc7:{NFSU2_TR(0x510fc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fc8:{NFSU2_TR(0x510fc8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510fcc:{NFSU2_TR(0x510fcc);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fd1:{NFSU2_TR(0x510fd1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fd3:{NFSU2_TR(0x510fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510fd8ull));
TAIL_STATIC(0x46d1d0u,46d);
}
B510fd8:L510fd8:{c.instructions+=1;NFSU2_TR(0x510fd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B510fe0:L510fe0:{c.instructions+=8;NFSU2_TR(0x510fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B510fe3:{NFSU2_TR(0x510fe3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510fe6:{NFSU2_TR(0x510fe6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fe7:{NFSU2_TR(0x510fe7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510fe8:{NFSU2_TR(0x510fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B510fec:{NFSU2_TR(0x510fec);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ff1:{NFSU2_TR(0x510ff1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B510ff3:{NFSU2_TR(0x510ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x510ff8ull));
TAIL_STATIC(0x46d250u,46d);
}
B510ff8:L510ff8:{c.instructions+=1;NFSU2_TR(0x510ff8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x510,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
