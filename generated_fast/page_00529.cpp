#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x529,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x529,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_529(u8* __restrict R,Cpu& c);
u32 page_529(Cpu& c){return body_529(c.regs.data(),c);}
__attribute__((noinline)) u32 body_529(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x529004:goto L529004;
case 0x52900a:c.instructions+=3;goto B52900a;
case 0x52900c:c.instructions+=2;goto B52900c;
case 0x52900f:c.instructions+=1;goto B52900f;
case 0x529011:goto L529011;
case 0x529017:c.instructions+=2;goto B529017;
case 0x52901a:c.instructions+=1;goto B52901a;
case 0x52901c:goto L52901c;
case 0x529022:goto L529022;
case 0x529028:c.instructions+=3;goto B529028;
case 0x52902e:c.instructions+=2;goto B52902e;
case 0x529030:c.instructions+=1;goto B529030;
case 0x529032:goto L529032;
case 0x529035:goto L529035;
case 0x52903b:c.instructions+=5;goto B52903b;
case 0x529041:c.instructions+=4;goto B529041;
case 0x529047:c.instructions+=3;goto B529047;
case 0x529049:c.instructions+=2;goto B529049;
case 0x52904c:c.instructions+=1;goto B52904c;
case 0x52904e:goto L52904e;
case 0x529054:c.instructions+=2;goto B529054;
case 0x529057:c.instructions+=1;goto B529057;
case 0x529059:goto L529059;
case 0x52905f:goto L52905f;
case 0x529065:c.instructions+=3;goto B529065;
case 0x52906b:c.instructions+=2;goto B52906b;
case 0x52906d:c.instructions+=1;goto B52906d;
case 0x52906f:goto L52906f;
case 0x529072:goto L529072;
case 0x529078:c.instructions+=5;goto B529078;
case 0x52907e:c.instructions+=4;goto B52907e;
case 0x529084:c.instructions+=3;goto B529084;
case 0x529086:c.instructions+=2;goto B529086;
case 0x529089:c.instructions+=1;goto B529089;
case 0x52908b:goto L52908b;
case 0x529091:c.instructions+=2;goto B529091;
case 0x529094:c.instructions+=1;goto B529094;
case 0x529096:goto L529096;
case 0x52909c:goto L52909c;
case 0x5290a2:c.instructions+=3;goto B5290a2;
case 0x5290a8:c.instructions+=2;goto B5290a8;
case 0x5290aa:c.instructions+=1;goto B5290aa;
case 0x5290ac:goto L5290ac;
case 0x5290af:goto L5290af;
case 0x5290b5:c.instructions+=5;goto B5290b5;
case 0x5290bb:c.instructions+=4;goto B5290bb;
case 0x5290c1:c.instructions+=3;goto B5290c1;
case 0x5290c3:c.instructions+=2;goto B5290c3;
case 0x5290c6:c.instructions+=1;goto B5290c6;
case 0x5290c8:goto L5290c8;
case 0x5290ce:c.instructions+=2;goto B5290ce;
case 0x5290d1:c.instructions+=1;goto B5290d1;
case 0x5290d3:goto L5290d3;
case 0x5290d9:goto L5290d9;
case 0x5290df:c.instructions+=3;goto B5290df;
case 0x5290e5:c.instructions+=2;goto B5290e5;
case 0x5290e7:c.instructions+=1;goto B5290e7;
case 0x5290e9:goto L5290e9;
case 0x5290ec:goto L5290ec;
case 0x5290f2:c.instructions+=5;goto B5290f2;
case 0x5290f8:c.instructions+=4;goto B5290f8;
case 0x5290fe:c.instructions+=3;goto B5290fe;
case 0x529100:c.instructions+=2;goto B529100;
case 0x529103:c.instructions+=1;goto B529103;
case 0x529105:goto L529105;
case 0x52910b:c.instructions+=2;goto B52910b;
case 0x52910e:c.instructions+=1;goto B52910e;
case 0x529110:goto L529110;
case 0x529116:goto L529116;
case 0x52911c:c.instructions+=3;goto B52911c;
case 0x529122:c.instructions+=2;goto B529122;
case 0x529124:c.instructions+=1;goto B529124;
case 0x529126:goto L529126;
case 0x529129:goto L529129;
case 0x52912f:c.instructions+=10;goto B52912f;
case 0x529135:c.instructions+=9;goto B529135;
case 0x52913b:c.instructions+=8;goto B52913b;
case 0x529141:c.instructions+=7;goto B529141;
case 0x529143:c.instructions+=6;goto B529143;
case 0x529146:c.instructions+=5;goto B529146;
case 0x529149:c.instructions+=4;goto B529149;
case 0x52914f:c.instructions+=3;goto B52914f;
case 0x529151:c.instructions+=2;goto B529151;
case 0x529154:c.instructions+=1;goto B529154;
case 0x529156:goto L529156;
case 0x529158:c.instructions+=2;goto B529158;
case 0x52915a:c.instructions+=1;goto B52915a;
case 0x52915c:goto L52915c;
case 0x52915e:c.instructions+=1;goto B52915e;
case 0x529164:goto L529164;
case 0x529167:c.instructions+=15;goto B529167;
case 0x529169:c.instructions+=14;goto B529169;
case 0x52916f:c.instructions+=13;goto B52916f;
case 0x529175:c.instructions+=12;goto B529175;
case 0x52917b:c.instructions+=11;goto B52917b;
case 0x52917e:c.instructions+=10;goto B52917e;
case 0x529184:c.instructions+=9;goto B529184;
case 0x529186:c.instructions+=8;goto B529186;
case 0x529188:c.instructions+=7;goto B529188;
case 0x52918a:c.instructions+=6;goto B52918a;
case 0x52918d:c.instructions+=5;goto B52918d;
case 0x529190:c.instructions+=4;goto B529190;
case 0x529196:c.instructions+=3;goto B529196;
case 0x529198:c.instructions+=2;goto B529198;
case 0x52919b:c.instructions+=1;goto B52919b;
case 0x52919d:goto L52919d;
case 0x5291a3:c.instructions+=17;goto B5291a3;
case 0x5291a9:c.instructions+=16;goto B5291a9;
case 0x5291ac:c.instructions+=15;goto B5291ac;
case 0x5291af:c.instructions+=14;goto B5291af;
case 0x5291b1:c.instructions+=13;goto B5291b1;
case 0x5291b3:c.instructions+=12;goto B5291b3;
case 0x5291b5:c.instructions+=11;goto B5291b5;
case 0x5291b8:c.instructions+=10;goto B5291b8;
case 0x5291bb:c.instructions+=9;goto B5291bb;
case 0x5291bc:c.instructions+=8;goto B5291bc;
case 0x5291be:c.instructions+=7;goto B5291be;
case 0x5291c4:c.instructions+=6;goto B5291c4;
case 0x5291c5:c.instructions+=5;goto B5291c5;
case 0x5291c6:c.instructions+=4;goto B5291c6;
case 0x5291c8:c.instructions+=3;goto B5291c8;
case 0x5291ca:c.instructions+=2;goto B5291ca;
case 0x5291cb:c.instructions+=1;goto B5291cb;
case 0x5291ce:goto L5291ce;
case 0x5291cf:c.instructions+=7;goto B5291cf;
case 0x5291d1:c.instructions+=6;goto B5291d1;
case 0x5291d7:c.instructions+=5;goto B5291d7;
case 0x5291d8:c.instructions+=4;goto B5291d8;
case 0x5291d9:c.instructions+=3;goto B5291d9;
case 0x5291db:c.instructions+=2;goto B5291db;
case 0x5291dc:c.instructions+=1;goto B5291dc;
case 0x5291e0:goto L5291e0;
case 0x5291e1:c.instructions+=3;goto B5291e1;
case 0x5291e2:c.instructions+=2;goto B5291e2;
case 0x5291e4:c.instructions+=1;goto B5291e4;
case 0x5291e9:goto L5291e9;
case 0x5291ef:c.instructions+=3;goto B5291ef;
case 0x5291f1:c.instructions+=2;goto B5291f1;
case 0x5291f3:c.instructions+=1;goto B5291f3;
case 0x5291f8:goto L5291f8;
case 0x5291fa:c.instructions+=1;goto B5291fa;
case 0x5291fc:goto L5291fc;
case 0x529200:goto L529200;
case 0x529202:c.instructions+=2;goto B529202;
case 0x529203:c.instructions+=1;goto B529203;
case 0x529208:goto L529208;
case 0x52920a:c.instructions+=1;goto B52920a;
case 0x52920c:goto L52920c;
case 0x52920e:c.instructions+=2;goto B52920e;
case 0x529210:c.instructions+=1;goto B529210;
case 0x529215:goto L529215;
case 0x529217:c.instructions+=1;goto B529217;
case 0x529219:goto L529219;
case 0x529220:goto L529220;
case 0x529222:c.instructions+=2;goto B529222;
case 0x529223:c.instructions+=1;goto B529223;
case 0x529228:goto L529228;
case 0x52922a:c.instructions+=1;goto B52922a;
case 0x52922c:goto L52922c;
case 0x52922d:c.instructions+=2;goto B52922d;
case 0x52922e:c.instructions+=1;goto B52922e;
case 0x529230:goto L529230;
case 0x529234:c.instructions+=9;goto B529234;
case 0x529235:c.instructions+=8;goto B529235;
case 0x529236:c.instructions+=7;goto B529236;
case 0x52923a:c.instructions+=6;goto B52923a;
case 0x52923b:c.instructions+=5;goto B52923b;
case 0x52923d:c.instructions+=4;goto B52923d;
case 0x52923e:c.instructions+=3;goto B52923e;
case 0x529244:c.instructions+=2;goto B529244;
case 0x529249:c.instructions+=1;goto B529249;
case 0x529250:goto L529250;
case 0x529251:c.instructions+=3;goto B529251;
case 0x529252:c.instructions+=2;goto B529252;
case 0x529254:c.instructions+=1;goto B529254;
case 0x529259:goto L529259;
case 0x52925f:c.instructions+=3;goto B52925f;
case 0x529265:c.instructions+=2;goto B529265;
case 0x529266:c.instructions+=1;goto B529266;
case 0x529268:goto L529268;
case 0x52926a:c.instructions+=32;goto B52926a;
case 0x529270:c.instructions+=31;goto B529270;
case 0x529273:c.instructions+=30;goto B529273;
case 0x529279:c.instructions+=29;goto B529279;
case 0x52927c:c.instructions+=28;goto B52927c;
case 0x52927f:c.instructions+=27;goto B52927f;
case 0x529285:c.instructions+=26;goto B529285;
case 0x529286:c.instructions+=25;goto B529286;
case 0x529289:c.instructions+=24;goto B529289;
case 0x52928f:c.instructions+=23;goto B52928f;
case 0x529292:c.instructions+=22;goto B529292;
case 0x529295:c.instructions+=21;goto B529295;
case 0x52929b:c.instructions+=20;goto B52929b;
case 0x52929c:c.instructions+=19;goto B52929c;
case 0x52929f:c.instructions+=18;goto B52929f;
case 0x5292a5:c.instructions+=17;goto B5292a5;
case 0x5292ab:c.instructions+=16;goto B5292ab;
case 0x5292ac:c.instructions+=15;goto B5292ac;
case 0x5292af:c.instructions+=14;goto B5292af;
case 0x5292b5:c.instructions+=13;goto B5292b5;
case 0x5292bb:c.instructions+=12;goto B5292bb;
case 0x5292c1:c.instructions+=11;goto B5292c1;
case 0x5292c4:c.instructions+=10;goto B5292c4;
case 0x5292ca:c.instructions+=9;goto B5292ca;
case 0x5292cd:c.instructions+=8;goto B5292cd;
case 0x5292d3:c.instructions+=7;goto B5292d3;
case 0x5292d5:c.instructions+=6;goto B5292d5;
case 0x5292da:c.instructions+=5;goto B5292da;
case 0x5292e0:c.instructions+=4;goto B5292e0;
case 0x5292e6:c.instructions+=3;goto B5292e6;
case 0x5292e7:c.instructions+=2;goto B5292e7;
case 0x5292ec:c.instructions+=1;goto B5292ec;
case 0x5292f2:goto L5292f2;
case 0x5292f4:goto L5292f4;
case 0x5292f7:c.instructions+=38;goto B5292f7;
case 0x5292fd:c.instructions+=37;goto B5292fd;
case 0x5292ff:c.instructions+=36;goto B5292ff;
case 0x529305:c.instructions+=35;goto B529305;
case 0x529308:c.instructions+=34;goto B529308;
case 0x52930e:c.instructions+=33;goto B52930e;
case 0x52930f:c.instructions+=32;goto B52930f;
case 0x529312:c.instructions+=31;goto B529312;
case 0x529318:c.instructions+=30;goto B529318;
case 0x52931e:c.instructions+=29;goto B52931e;
case 0x529321:c.instructions+=28;goto B529321;
case 0x529327:c.instructions+=27;goto B529327;
case 0x52932d:c.instructions+=26;goto B52932d;
case 0x52932e:c.instructions+=25;goto B52932e;
case 0x529334:c.instructions+=24;goto B529334;
case 0x529336:c.instructions+=23;goto B529336;
case 0x529338:c.instructions+=22;goto B529338;
case 0x52933e:c.instructions+=21;goto B52933e;
case 0x529340:c.instructions+=20;goto B529340;
case 0x529343:c.instructions+=19;goto B529343;
case 0x529346:c.instructions+=18;goto B529346;
case 0x529349:c.instructions+=17;goto B529349;
case 0x52934c:c.instructions+=16;goto B52934c;
case 0x52934f:c.instructions+=15;goto B52934f;
case 0x529352:c.instructions+=14;goto B529352;
case 0x529356:c.instructions+=13;goto B529356;
case 0x529359:c.instructions+=12;goto B529359;
case 0x529360:c.instructions+=11;goto B529360;
case 0x529363:c.instructions+=10;goto B529363;
case 0x529366:c.instructions+=9;goto B529366;
case 0x52936c:c.instructions+=8;goto B52936c;
case 0x529372:c.instructions+=7;goto B529372;
case 0x529374:c.instructions+=6;goto B529374;
case 0x529377:c.instructions+=5;goto B529377;
case 0x529379:c.instructions+=4;goto B529379;
case 0x52937e:c.instructions+=3;goto B52937e;
case 0x529384:c.instructions+=2;goto B529384;
case 0x529385:c.instructions+=1;goto B529385;
case 0x52938a:goto L52938a;
case 0x52938c:goto L52938c;
case 0x52938d:c.instructions+=2;goto B52938d;
case 0x529393:c.instructions+=1;goto B529393;
case 0x529398:goto L529398;
case 0x52939a:c.instructions+=14;goto B52939a;
case 0x52939c:c.instructions+=13;goto B52939c;
case 0x5293a2:c.instructions+=12;goto B5293a2;
case 0x5293a4:c.instructions+=11;goto B5293a4;
case 0x5293a7:c.instructions+=10;goto B5293a7;
case 0x5293aa:c.instructions+=9;goto B5293aa;
case 0x5293ad:c.instructions+=8;goto B5293ad;
case 0x5293b0:c.instructions+=7;goto B5293b0;
case 0x5293b3:c.instructions+=6;goto B5293b3;
case 0x5293b6:c.instructions+=5;goto B5293b6;
case 0x5293b9:c.instructions+=4;goto B5293b9;
case 0x5293bf:c.instructions+=3;goto B5293bf;
case 0x5293c1:c.instructions+=2;goto B5293c1;
case 0x5293c6:c.instructions+=1;goto B5293c6;
case 0x5293c8:goto L5293c8;
case 0x5293ca:goto L5293ca;
case 0x5293cc:c.instructions+=10;goto B5293cc;
case 0x5293d2:c.instructions+=9;goto B5293d2;
case 0x5293d8:c.instructions+=8;goto B5293d8;
case 0x5293de:c.instructions+=7;goto B5293de;
case 0x5293e4:c.instructions+=6;goto B5293e4;
case 0x5293e7:c.instructions+=5;goto B5293e7;
case 0x5293e9:c.instructions+=4;goto B5293e9;
case 0x5293ec:c.instructions+=3;goto B5293ec;
case 0x5293ee:c.instructions+=2;goto B5293ee;
case 0x5293f4:c.instructions+=1;goto B5293f4;
case 0x5293f6:goto L5293f6;
case 0x5293f7:c.instructions+=1;goto B5293f7;
case 0x5293fc:goto L5293fc;
case 0x5293ff:c.instructions+=1;goto B5293ff;
case 0x529405:goto L529405;
case 0x529406:c.instructions+=5;goto B529406;
case 0x529408:c.instructions+=4;goto B529408;
case 0x529409:c.instructions+=3;goto B529409;
case 0x52940a:c.instructions+=2;goto B52940a;
case 0x52940b:c.instructions+=1;goto B52940b;
case 0x529410:goto L529410;
case 0x529411:c.instructions+=6;goto B529411;
case 0x529413:c.instructions+=5;goto B529413;
case 0x529416:c.instructions+=4;goto B529416;
case 0x529419:c.instructions+=3;goto B529419;
case 0x52941a:c.instructions+=2;goto B52941a;
case 0x52941c:c.instructions+=1;goto B52941c;
case 0x529421:goto L529421;
case 0x529423:c.instructions+=1;goto B529423;
case 0x529425:goto L529425;
case 0x529427:c.instructions+=1;goto B529427;
case 0x52942c:goto L52942c;
case 0x52942e:c.instructions+=1;goto B52942e;
case 0x529430:goto L529430;
case 0x529433:c.instructions+=3;goto B529433;
case 0x529435:c.instructions+=2;goto B529435;
case 0x529437:c.instructions+=1;goto B529437;
case 0x529439:goto L529439;
case 0x52943c:c.instructions+=11;goto B52943c;
case 0x529441:c.instructions+=10;goto B529441;
case 0x529445:c.instructions+=9;goto B529445;
case 0x529446:c.instructions+=8;goto B529446;
case 0x52944a:c.instructions+=7;goto B52944a;
case 0x52944d:c.instructions+=6;goto B52944d;
case 0x529450:c.instructions+=5;goto B529450;
case 0x529451:c.instructions+=4;goto B529451;
case 0x529455:c.instructions+=3;goto B529455;
case 0x529458:c.instructions+=2;goto B529458;
case 0x52945c:c.instructions+=1;goto B52945c;
case 0x529461:goto L529461;
case 0x529464:c.instructions+=6;goto B529464;
case 0x529466:c.instructions+=5;goto B529466;
case 0x529469:c.instructions+=4;goto B529469;
case 0x52946a:c.instructions+=3;goto B52946a;
case 0x52946c:c.instructions+=2;goto B52946c;
case 0x52946d:c.instructions+=1;goto B52946d;
case 0x529470:goto L529470;
case 0x529472:c.instructions+=4;goto B529472;
case 0x529473:c.instructions+=3;goto B529473;
case 0x529475:c.instructions+=2;goto B529475;
case 0x529476:c.instructions+=1;goto B529476;
case 0x529480:goto L529480;
case 0x529481:c.instructions+=6;goto B529481;
case 0x529483:c.instructions+=5;goto B529483;
case 0x529484:c.instructions+=4;goto B529484;
case 0x529485:c.instructions+=3;goto B529485;
case 0x529486:c.instructions+=2;goto B529486;
case 0x529488:c.instructions+=1;goto B529488;
case 0x52948d:goto L52948d;
case 0x52948f:c.instructions+=1;goto B52948f;
case 0x529491:goto L529491;
case 0x529493:c.instructions+=1;goto B529493;
case 0x529498:goto L529498;
case 0x52949a:c.instructions+=1;goto B52949a;
case 0x52949c:goto L52949c;
case 0x5294a1:c.instructions+=1;goto B5294a1;
case 0x5294a6:goto L5294a6;
case 0x5294a8:c.instructions+=5;goto B5294a8;
case 0x5294ac:c.instructions+=4;goto B5294ac;
case 0x5294af:c.instructions+=3;goto B5294af;
case 0x5294b2:c.instructions+=2;goto B5294b2;
case 0x5294b5:c.instructions+=1;goto B5294b5;
case 0x5294b7:goto L5294b7;
case 0x5294ba:c.instructions+=20;goto B5294ba;
case 0x5294bc:c.instructions+=19;goto B5294bc;
case 0x5294bf:c.instructions+=18;goto B5294bf;
case 0x5294c2:c.instructions+=17;goto B5294c2;
case 0x5294c4:c.instructions+=16;goto B5294c4;
case 0x5294c6:c.instructions+=15;goto B5294c6;
case 0x5294c9:c.instructions+=14;goto B5294c9;
case 0x5294cc:c.instructions+=13;goto B5294cc;
case 0x5294ce:c.instructions+=12;goto B5294ce;
case 0x5294d1:c.instructions+=11;goto B5294d1;
case 0x5294d4:c.instructions+=10;goto B5294d4;
case 0x5294d6:c.instructions+=9;goto B5294d6;
case 0x5294d9:c.instructions+=8;goto B5294d9;
case 0x5294dc:c.instructions+=7;goto B5294dc;
case 0x5294de:c.instructions+=6;goto B5294de;
case 0x5294e1:c.instructions+=5;goto B5294e1;
case 0x5294e4:c.instructions+=4;goto B5294e4;
case 0x5294ea:c.instructions+=3;goto B5294ea;
case 0x5294eb:c.instructions+=2;goto B5294eb;
case 0x5294f1:c.instructions+=1;goto B5294f1;
case 0x5294f6:goto L5294f6;
case 0x5294f7:c.instructions+=3;goto B5294f7;
case 0x5294f8:c.instructions+=2;goto B5294f8;
case 0x5294fd:c.instructions+=1;goto B5294fd;
case 0x529502:goto L529502;
case 0x529506:c.instructions+=2;goto B529506;
case 0x529509:c.instructions+=1;goto B529509;
case 0x52950b:goto L52950b;
case 0x52950e:c.instructions+=2;goto B52950e;
case 0x529510:c.instructions+=1;goto B529510;
case 0x529512:goto L529512;
case 0x529515:c.instructions+=6;goto B529515;
case 0x529516:c.instructions+=5;goto B529516;
case 0x529518:c.instructions+=4;goto B529518;
case 0x529519:c.instructions+=3;goto B529519;
case 0x52951a:c.instructions+=2;goto B52951a;
case 0x52951b:c.instructions+=1;goto B52951b;
case 0x52951e:goto L52951e;
case 0x529521:c.instructions+=2;goto B529521;
case 0x529523:c.instructions+=1;goto B529523;
case 0x529525:goto L529525;
case 0x529528:c.instructions+=6;goto B529528;
case 0x529529:c.instructions+=5;goto B529529;
case 0x52952b:c.instructions+=4;goto B52952b;
case 0x52952c:c.instructions+=3;goto B52952c;
case 0x52952d:c.instructions+=2;goto B52952d;
case 0x52952e:c.instructions+=1;goto B52952e;
case 0x529531:goto L529531;
case 0x529534:c.instructions+=2;goto B529534;
case 0x529536:c.instructions+=1;goto B529536;
case 0x529538:goto L529538;
case 0x52953b:c.instructions+=6;goto B52953b;
case 0x52953c:c.instructions+=5;goto B52953c;
case 0x52953e:c.instructions+=4;goto B52953e;
case 0x52953f:c.instructions+=3;goto B52953f;
case 0x529540:c.instructions+=2;goto B529540;
case 0x529541:c.instructions+=1;goto B529541;
case 0x529544:goto L529544;
case 0x529547:c.instructions+=2;goto B529547;
case 0x529549:c.instructions+=1;goto B529549;
case 0x52954b:goto L52954b;
case 0x52954e:c.instructions+=3;goto B52954e;
case 0x529554:c.instructions+=2;goto B529554;
case 0x529555:c.instructions+=1;goto B529555;
case 0x52955a:goto L52955a;
case 0x52955d:c.instructions+=6;goto B52955d;
case 0x52955e:c.instructions+=5;goto B52955e;
case 0x529560:c.instructions+=4;goto B529560;
case 0x529561:c.instructions+=3;goto B529561;
case 0x529562:c.instructions+=2;goto B529562;
case 0x529563:c.instructions+=1;goto B529563;
case 0x529566:goto L529566;
case 0x529568:c.instructions+=6;goto B529568;
case 0x529569:c.instructions+=5;goto B529569;
case 0x52956b:c.instructions+=4;goto B52956b;
case 0x52956c:c.instructions+=3;goto B52956c;
case 0x52956d:c.instructions+=2;goto B52956d;
case 0x52956e:c.instructions+=1;goto B52956e;
case 0x529580:goto L529580;
case 0x529584:c.instructions+=3;goto B529584;
case 0x52958b:c.instructions+=2;goto B52958b;
case 0x52958e:c.instructions+=1;goto B52958e;
case 0x529590:goto L529590;
case 0x529596:c.instructions+=2;goto B529596;
case 0x529597:c.instructions+=1;goto B529597;
case 0x52959c:goto L52959c;
case 0x5295a2:c.instructions+=2;goto B5295a2;
case 0x5295a4:c.instructions+=1;goto B5295a4;
case 0x5295a9:goto L5295a9;
case 0x5295b0:goto L5295b0;
case 0x5295b7:c.instructions+=4;goto B5295b7;
case 0x5295ba:c.instructions+=3;goto B5295ba;
case 0x5295bb:c.instructions+=2;goto B5295bb;
case 0x5295bd:c.instructions+=1;goto B5295bd;
case 0x5295bf:goto L5295bf;
case 0x5295c5:c.instructions+=2;goto B5295c5;
case 0x5295c6:c.instructions+=1;goto B5295c6;
case 0x5295cb:goto L5295cb;
case 0x5295d0:c.instructions+=4;goto B5295d0;
case 0x5295d3:c.instructions+=3;goto B5295d3;
case 0x5295d4:c.instructions+=2;goto B5295d4;
case 0x5295da:c.instructions+=1;goto B5295da;
case 0x5295df:goto L5295df;
case 0x5295e3:c.instructions+=2;goto B5295e3;
case 0x5295e4:c.instructions+=1;goto B5295e4;
case 0x5295f0:goto L5295f0;
case 0x5295f1:c.instructions+=8;goto B5295f1;
case 0x5295f3:c.instructions+=7;goto B5295f3;
case 0x5295f4:c.instructions+=6;goto B5295f4;
case 0x5295f7:c.instructions+=5;goto B5295f7;
case 0x5295f8:c.instructions+=4;goto B5295f8;
case 0x5295f9:c.instructions+=3;goto B5295f9;
case 0x5295fa:c.instructions+=2;goto B5295fa;
case 0x5295fc:c.instructions+=1;goto B5295fc;
case 0x529601:goto L529601;
case 0x529603:c.instructions+=1;goto B529603;
case 0x529605:goto L529605;
case 0x52960b:c.instructions+=2;goto B52960b;
case 0x529610:c.instructions+=1;goto B529610;
case 0x529612:goto L529612;
case 0x529615:c.instructions+=6;goto B529615;
case 0x529616:c.instructions+=5;goto B529616;
case 0x52961c:c.instructions+=4;goto B52961c;
case 0x52961f:c.instructions+=3;goto B52961f;
case 0x529621:c.instructions+=2;goto B529621;
case 0x529623:c.instructions+=1;goto B529623;
case 0x529625:goto L529625;
case 0x529628:c.instructions+=13;goto B529628;
case 0x52962b:c.instructions+=12;goto B52962b;
case 0x52962e:c.instructions+=11;goto B52962e;
case 0x529631:c.instructions+=10;goto B529631;
case 0x529634:c.instructions+=9;goto B529634;
case 0x529637:c.instructions+=8;goto B529637;
case 0x52963a:c.instructions+=7;goto B52963a;
case 0x52963c:c.instructions+=6;goto B52963c;
case 0x529642:c.instructions+=5;goto B529642;
case 0x529649:c.instructions+=4;goto B529649;
case 0x52964c:c.instructions+=3;goto B52964c;
case 0x529652:c.instructions+=2;goto B529652;
case 0x529653:c.instructions+=1;goto B529653;
case 0x529658:goto L529658;
case 0x52965b:c.instructions+=6;goto B52965b;
case 0x52965c:c.instructions+=5;goto B52965c;
case 0x52965e:c.instructions+=4;goto B52965e;
case 0x52965f:c.instructions+=3;goto B52965f;
case 0x529660:c.instructions+=2;goto B529660;
case 0x529661:c.instructions+=1;goto B529661;
case 0x529664:goto L529664;
case 0x529665:c.instructions+=5;goto B529665;
case 0x529666:c.instructions+=4;goto B529666;
case 0x529668:c.instructions+=3;goto B529668;
case 0x529669:c.instructions+=2;goto B529669;
case 0x52966a:c.instructions+=1;goto B52966a;
case 0x529670:goto L529670;
case 0x529671:c.instructions+=8;goto B529671;
case 0x529673:c.instructions+=7;goto B529673;
case 0x529674:c.instructions+=6;goto B529674;
case 0x529677:c.instructions+=5;goto B529677;
case 0x529678:c.instructions+=4;goto B529678;
case 0x529679:c.instructions+=3;goto B529679;
case 0x52967a:c.instructions+=2;goto B52967a;
case 0x52967c:c.instructions+=1;goto B52967c;
case 0x529681:goto L529681;
case 0x529683:c.instructions+=1;goto B529683;
case 0x529685:goto L529685;
case 0x52968b:c.instructions+=2;goto B52968b;
case 0x529690:c.instructions+=1;goto B529690;
case 0x529692:goto L529692;
case 0x529695:c.instructions+=6;goto B529695;
case 0x529696:c.instructions+=5;goto B529696;
case 0x52969c:c.instructions+=4;goto B52969c;
case 0x52969f:c.instructions+=3;goto B52969f;
case 0x5296a1:c.instructions+=2;goto B5296a1;
case 0x5296a3:c.instructions+=1;goto B5296a3;
case 0x5296a5:goto L5296a5;
case 0x5296a8:c.instructions+=16;goto B5296a8;
case 0x5296ab:c.instructions+=15;goto B5296ab;
case 0x5296ae:c.instructions+=14;goto B5296ae;
case 0x5296b1:c.instructions+=13;goto B5296b1;
case 0x5296b4:c.instructions+=12;goto B5296b4;
case 0x5296b7:c.instructions+=11;goto B5296b7;
case 0x5296ba:c.instructions+=10;goto B5296ba;
case 0x5296bd:c.instructions+=9;goto B5296bd;
case 0x5296c0:c.instructions+=8;goto B5296c0;
case 0x5296c2:c.instructions+=7;goto B5296c2;
case 0x5296c5:c.instructions+=6;goto B5296c5;
case 0x5296cb:c.instructions+=5;goto B5296cb;
case 0x5296d2:c.instructions+=4;goto B5296d2;
case 0x5296d5:c.instructions+=3;goto B5296d5;
case 0x5296db:c.instructions+=2;goto B5296db;
case 0x5296dc:c.instructions+=1;goto B5296dc;
case 0x5296e1:goto L5296e1;
case 0x5296e4:c.instructions+=6;goto B5296e4;
case 0x5296e5:c.instructions+=5;goto B5296e5;
case 0x5296e7:c.instructions+=4;goto B5296e7;
case 0x5296e8:c.instructions+=3;goto B5296e8;
case 0x5296e9:c.instructions+=2;goto B5296e9;
case 0x5296ea:c.instructions+=1;goto B5296ea;
case 0x5296ed:goto L5296ed;
case 0x5296ee:c.instructions+=5;goto B5296ee;
case 0x5296ef:c.instructions+=4;goto B5296ef;
case 0x5296f1:c.instructions+=3;goto B5296f1;
case 0x5296f2:c.instructions+=2;goto B5296f2;
case 0x5296f3:c.instructions+=1;goto B5296f3;
case 0x529700:goto L529700;
case 0x529701:c.instructions+=5;goto B529701;
case 0x529703:c.instructions+=4;goto B529703;
case 0x529709:c.instructions+=3;goto B529709;
case 0x52970b:c.instructions+=2;goto B52970b;
case 0x52970d:c.instructions+=1;goto B52970d;
case 0x52970f:goto L52970f;
case 0x529712:goto L529712;
case 0x529718:c.instructions+=3;goto B529718;
case 0x529719:c.instructions+=2;goto B529719;
case 0x52971b:c.instructions+=1;goto B52971b;
case 0x529720:goto L529720;
case 0x529727:c.instructions+=4;goto B529727;
case 0x52972e:c.instructions+=3;goto B52972e;
case 0x529731:c.instructions+=2;goto B529731;
case 0x529732:c.instructions+=1;goto B529732;
case 0x529734:goto L529734;
case 0x52973a:c.instructions+=2;goto B52973a;
case 0x52973b:c.instructions+=1;goto B52973b;
case 0x529740:goto L529740;
case 0x529750:goto L529750;
case 0x529751:c.instructions+=10;goto B529751;
case 0x529753:c.instructions+=9;goto B529753;
case 0x529756:c.instructions+=8;goto B529756;
case 0x52975b:c.instructions+=7;goto B52975b;
case 0x52975c:c.instructions+=6;goto B52975c;
case 0x52975d:c.instructions+=5;goto B52975d;
case 0x52975e:c.instructions+=4;goto B52975e;
case 0x529760:c.instructions+=3;goto B529760;
case 0x529762:c.instructions+=2;goto B529762;
case 0x529765:c.instructions+=1;goto B529765;
case 0x529767:goto L529767;
case 0x529769:c.instructions+=1;goto B529769;
case 0x529770:goto L529770;
case 0x529772:c.instructions+=1;goto B529772;
case 0x529774:goto L529774;
case 0x529776:c.instructions+=1;goto B529776;
case 0x529778:goto L529778;
case 0x52977d:c.instructions+=2;goto B52977d;
case 0x529780:c.instructions+=1;goto B529780;
case 0x529782:goto L529782;
case 0x529784:goto L529784;
case 0x529788:c.instructions+=1;goto B529788;
case 0x52978a:goto L52978a;
case 0x52978d:c.instructions+=3;goto B52978d;
case 0x529790:c.instructions+=2;goto B529790;
case 0x529792:c.instructions+=1;goto B529792;
case 0x529794:goto L529794;
case 0x52979a:goto L52979a;
case 0x52979d:c.instructions+=3;goto B52979d;
case 0x52979f:c.instructions+=2;goto B52979f;
case 0x5297a2:c.instructions+=1;goto B5297a2;
case 0x5297a4:goto L5297a4;
case 0x5297a5:c.instructions+=1;goto B5297a5;
case 0x5297aa:goto L5297aa;
case 0x5297ac:c.instructions+=1;goto B5297ac;
case 0x5297ae:goto L5297ae;
case 0x5297b1:c.instructions+=2;goto B5297b1;
case 0x5297b2:c.instructions+=1;goto B5297b2;
case 0x5297b7:goto L5297b7;
case 0x5297bc:c.instructions+=5;goto B5297bc;
case 0x5297bf:c.instructions+=4;goto B5297bf;
case 0x5297c0:c.instructions+=3;goto B5297c0;
case 0x5297c3:c.instructions+=2;goto B5297c3;
case 0x5297c5:c.instructions+=1;goto B5297c5;
case 0x5297c7:goto L5297c7;
case 0x5297cd:c.instructions+=3;goto B5297cd;
case 0x5297cf:c.instructions+=2;goto B5297cf;
case 0x5297d1:c.instructions+=1;goto B5297d1;
case 0x5297d7:goto L5297d7;
case 0x5297d9:c.instructions+=2;goto B5297d9;
case 0x5297de:c.instructions+=1;goto B5297de;
case 0x5297e0:goto L5297e0;
case 0x5297e2:c.instructions+=1;goto B5297e2;
case 0x5297e4:goto L5297e4;
case 0x5297e6:c.instructions+=1;goto B5297e6;
case 0x5297e8:goto L5297e8;
case 0x5297ea:c.instructions+=1;goto B5297ea;
case 0x5297ec:goto L5297ec;
case 0x5297ee:goto L5297ee;
case 0x5297f0:c.instructions+=2;goto B5297f0;
case 0x5297f3:c.instructions+=1;goto B5297f3;
case 0x5297f5:goto L5297f5;
case 0x5297f9:c.instructions+=1;goto B5297f9;
case 0x5297fb:goto L5297fb;
case 0x5297fc:c.instructions+=3;goto B5297fc;
case 0x5297ff:c.instructions+=2;goto B5297ff;
case 0x529801:c.instructions+=1;goto B529801;
case 0x529803:goto L529803;
case 0x529804:c.instructions+=5;goto B529804;
case 0x529805:c.instructions+=4;goto B529805;
case 0x529806:c.instructions+=3;goto B529806;
case 0x529808:c.instructions+=2;goto B529808;
case 0x529809:c.instructions+=1;goto B529809;
case 0x52980c:goto L52980c;
case 0x529811:c.instructions+=2;goto B529811;
case 0x529813:c.instructions+=1;goto B529813;
case 0x529815:goto L529815;
case 0x529818:c.instructions+=1;goto B529818;
case 0x52981a:goto L52981a;
case 0x529821:c.instructions+=1;goto B529821;
case 0x529823:goto L529823;
case 0x529828:c.instructions+=2;goto B529828;
case 0x52982a:c.instructions+=1;goto B52982a;
case 0x52982c:goto L52982c;
case 0x529831:c.instructions+=2;goto B529831;
case 0x529833:c.instructions+=1;goto B529833;
case 0x529835:goto L529835;
case 0x52983b:c.instructions+=1;goto B52983b;
case 0x52983d:goto L52983d;
case 0x529842:c.instructions+=2;goto B529842;
case 0x529844:c.instructions+=1;goto B529844;
case 0x529846:goto L529846;
case 0x529849:c.instructions+=2;goto B529849;
case 0x52984b:c.instructions+=1;goto B52984b;
case 0x529850:goto L529850;
case 0x529852:c.instructions+=1;goto B529852;
case 0x529857:goto L529857;
case 0x529858:c.instructions+=5;goto B529858;
case 0x529859:c.instructions+=4;goto B529859;
case 0x52985a:c.instructions+=3;goto B52985a;
case 0x52985c:c.instructions+=2;goto B52985c;
case 0x52985d:c.instructions+=1;goto B52985d;
case 0x529860:goto L529860;
case 0x529861:c.instructions+=7;goto B529861;
case 0x529866:c.instructions+=6;goto B529866;
case 0x529867:c.instructions+=5;goto B529867;
case 0x529868:c.instructions+=4;goto B529868;
case 0x52986a:c.instructions+=3;goto B52986a;
case 0x52986c:c.instructions+=2;goto B52986c;
case 0x52986e:c.instructions+=1;goto B52986e;
case 0x529874:goto L529874;
case 0x529875:c.instructions+=4;goto B529875;
case 0x529876:c.instructions+=3;goto B529876;
case 0x529878:c.instructions+=2;goto B529878;
case 0x52987c:c.instructions+=1;goto B52987c;
case 0x529880:goto L529880;
case 0x529882:c.instructions+=1;goto B529882;
case 0x529884:goto L529884;
case 0x529886:c.instructions+=1;goto B529886;
case 0x529888:goto L529888;
case 0x52988d:c.instructions+=2;goto B52988d;
case 0x52988f:c.instructions+=1;goto B52988f;
case 0x529891:goto L529891;
case 0x529893:goto L529893;
case 0x529896:c.instructions+=2;goto B529896;
case 0x529898:c.instructions+=1;goto B529898;
case 0x52989a:goto L52989a;
case 0x52989c:c.instructions+=1;goto B52989c;
case 0x52989e:goto L52989e;
case 0x5298a2:c.instructions+=4;goto B5298a2;
case 0x5298a5:c.instructions+=3;goto B5298a5;
case 0x5298a7:c.instructions+=2;goto B5298a7;
case 0x5298aa:c.instructions+=1;goto B5298aa;
case 0x5298b0:goto L5298b0;
case 0x5298b2:c.instructions+=1;goto B5298b2;
case 0x5298b4:goto L5298b4;
case 0x5298b5:c.instructions+=3;goto B5298b5;
case 0x5298b8:c.instructions+=2;goto B5298b8;
case 0x5298bb:c.instructions+=1;goto B5298bb;
case 0x5298bd:goto L5298bd;
case 0x5298bf:goto L5298bf;
case 0x5298c5:c.instructions+=3;goto B5298c5;
case 0x5298c7:c.instructions+=2;goto B5298c7;
case 0x5298c9:c.instructions+=1;goto B5298c9;
case 0x5298cb:goto L5298cb;
case 0x5298cd:c.instructions+=1;goto B5298cd;
case 0x5298d0:goto L5298d0;
case 0x5298d2:c.instructions+=1;goto B5298d2;
case 0x5298d4:goto L5298d4;
case 0x5298d6:c.instructions+=1;goto B5298d6;
case 0x5298d8:goto L5298d8;
case 0x5298da:c.instructions+=1;goto B5298da;
case 0x5298dc:goto L5298dc;
case 0x5298de:goto L5298de;
case 0x5298e0:c.instructions+=1;goto B5298e0;
case 0x5298e2:goto L5298e2;
case 0x5298e3:c.instructions+=3;goto B5298e3;
case 0x5298e6:c.instructions+=2;goto B5298e6;
case 0x5298e8:c.instructions+=1;goto B5298e8;
case 0x5298ea:goto L5298ea;
case 0x5298eb:c.instructions+=2;goto B5298eb;
case 0x5298ed:c.instructions+=1;goto B5298ed;
case 0x5298f2:goto L5298f2;
case 0x5298f6:c.instructions+=6;goto B5298f6;
case 0x5298fb:c.instructions+=5;goto B5298fb;
case 0x5298fc:c.instructions+=4;goto B5298fc;
case 0x5298ff:c.instructions+=3;goto B5298ff;
case 0x529901:c.instructions+=2;goto B529901;
case 0x529905:c.instructions+=1;goto B529905;
case 0x52990b:goto L52990b;
case 0x52990c:c.instructions+=1;goto B52990c;
case 0x52990d:goto L52990d;
case 0x52990e:c.instructions+=3;goto B52990e;
case 0x52990f:c.instructions+=2;goto B52990f;
case 0x529910:c.instructions+=1;goto B529910;
case 0x529920:goto L529920;
case 0x529921:c.instructions+=7;goto B529921;
case 0x529926:c.instructions+=6;goto B529926;
case 0x529927:c.instructions+=5;goto B529927;
case 0x529928:c.instructions+=4;goto B529928;
case 0x52992a:c.instructions+=3;goto B52992a;
case 0x52992c:c.instructions+=2;goto B52992c;
case 0x52992e:c.instructions+=1;goto B52992e;
case 0x529930:goto L529930;
case 0x529931:c.instructions+=3;goto B529931;
case 0x529932:c.instructions+=2;goto B529932;
case 0x529934:c.instructions+=1;goto B529934;
case 0x529938:goto L529938;
case 0x52993a:c.instructions+=1;goto B52993a;
case 0x52993c:goto L52993c;
case 0x52993e:c.instructions+=1;goto B52993e;
case 0x529940:goto L529940;
case 0x529945:c.instructions+=2;goto B529945;
case 0x529947:c.instructions+=1;goto B529947;
case 0x529949:goto L529949;
case 0x52994b:goto L52994b;
case 0x52994f:c.instructions+=3;goto B52994f;
case 0x529950:c.instructions+=2;goto B529950;
case 0x529952:c.instructions+=1;goto B529952;
case 0x529957:goto L529957;
case 0x529959:c.instructions+=1;goto B529959;
case 0x52995b:goto L52995b;
case 0x529961:c.instructions+=3;goto B529961;
case 0x529963:c.instructions+=2;goto B529963;
case 0x529965:c.instructions+=1;goto B529965;
case 0x529967:goto L529967;
case 0x529969:c.instructions+=1;goto B529969;
case 0x529970:goto L529970;
case 0x529972:c.instructions+=1;goto B529972;
case 0x529974:goto L529974;
case 0x529976:c.instructions+=1;goto B529976;
case 0x529978:goto L529978;
case 0x52997a:c.instructions+=1;goto B52997a;
case 0x52997c:goto L52997c;
case 0x52997e:goto L52997e;
case 0x529980:c.instructions+=1;goto B529980;
case 0x529982:goto L529982;
case 0x529983:c.instructions+=3;goto B529983;
case 0x529986:c.instructions+=2;goto B529986;
case 0x529988:c.instructions+=1;goto B529988;
case 0x52998a:goto L52998a;
case 0x52998b:c.instructions+=2;goto B52998b;
case 0x52998d:c.instructions+=1;goto B52998d;
case 0x529992:goto L529992;
case 0x529996:c.instructions+=6;goto B529996;
case 0x52999b:c.instructions+=5;goto B52999b;
case 0x52999c:c.instructions+=4;goto B52999c;
case 0x52999f:c.instructions+=3;goto B52999f;
case 0x5299a1:c.instructions+=2;goto B5299a1;
case 0x5299a5:c.instructions+=1;goto B5299a5;
case 0x5299a7:goto L5299a7;
case 0x5299a8:c.instructions+=1;goto B5299a8;
case 0x5299a9:goto L5299a9;
case 0x5299aa:c.instructions+=3;goto B5299aa;
case 0x5299ab:c.instructions+=2;goto B5299ab;
case 0x5299ac:c.instructions+=1;goto B5299ac;
case 0x5299b0:goto L5299b0;
case 0x5299b1:c.instructions+=7;goto B5299b1;
case 0x5299b6:c.instructions+=6;goto B5299b6;
case 0x5299b7:c.instructions+=5;goto B5299b7;
case 0x5299b9:c.instructions+=4;goto B5299b9;
case 0x5299bb:c.instructions+=3;goto B5299bb;
case 0x5299bc:c.instructions+=2;goto B5299bc;
case 0x5299be:c.instructions+=1;goto B5299be;
case 0x5299c0:goto L5299c0;
case 0x5299c1:c.instructions+=3;goto B5299c1;
case 0x5299c2:c.instructions+=2;goto B5299c2;
case 0x5299c4:c.instructions+=1;goto B5299c4;
case 0x5299c8:goto L5299c8;
case 0x5299ca:c.instructions+=1;goto B5299ca;
case 0x5299cc:goto L5299cc;
case 0x5299ce:c.instructions+=1;goto B5299ce;
case 0x5299d0:goto L5299d0;
case 0x5299d5:c.instructions+=2;goto B5299d5;
case 0x5299d7:c.instructions+=1;goto B5299d7;
case 0x5299d9:goto L5299d9;
case 0x5299db:goto L5299db;
case 0x5299df:c.instructions+=1;goto B5299df;
case 0x5299e1:goto L5299e1;
case 0x5299e5:c.instructions+=2;goto B5299e5;
case 0x5299e8:c.instructions+=1;goto B5299e8;
case 0x5299ea:goto L5299ea;
case 0x5299f0:c.instructions+=3;goto B5299f0;
case 0x5299f2:c.instructions+=2;goto B5299f2;
case 0x5299f4:c.instructions+=1;goto B5299f4;
case 0x5299f6:goto L5299f6;
case 0x5299f8:goto L5299f8;
case 0x5299fa:c.instructions+=1;goto B5299fa;
case 0x5299fc:goto L5299fc;
case 0x5299fe:c.instructions+=1;goto B5299fe;
case 0x529a00:goto L529a00;
case 0x529a02:c.instructions+=1;goto B529a02;
case 0x529a04:goto L529a04;
case 0x529a06:goto L529a06;
case 0x529a08:c.instructions+=1;goto B529a08;
case 0x529a0a:goto L529a0a;
case 0x529a0b:c.instructions+=3;goto B529a0b;
case 0x529a0e:c.instructions+=2;goto B529a0e;
case 0x529a10:c.instructions+=1;goto B529a10;
case 0x529a12:goto L529a12;
case 0x529a13:c.instructions+=2;goto B529a13;
case 0x529a15:c.instructions+=1;goto B529a15;
case 0x529a1a:goto L529a1a;
case 0x529a1e:c.instructions+=6;goto B529a1e;
case 0x529a23:c.instructions+=5;goto B529a23;
case 0x529a24:c.instructions+=4;goto B529a24;
case 0x529a27:c.instructions+=3;goto B529a27;
case 0x529a29:c.instructions+=2;goto B529a29;
case 0x529a2d:c.instructions+=1;goto B529a2d;
case 0x529a2f:goto L529a2f;
case 0x529a30:c.instructions+=1;goto B529a30;
case 0x529a31:goto L529a31;
case 0x529a32:c.instructions+=3;goto B529a32;
case 0x529a33:c.instructions+=2;goto B529a33;
case 0x529a34:c.instructions+=1;goto B529a34;
case 0x529a40:goto L529a40;
case 0x529a41:c.instructions+=8;goto B529a41;
case 0x529a43:c.instructions+=7;goto B529a43;
case 0x529a46:c.instructions+=6;goto B529a46;
case 0x529a49:c.instructions+=5;goto B529a49;
case 0x529a4f:c.instructions+=4;goto B529a4f;
case 0x529a51:c.instructions+=3;goto B529a51;
case 0x529a53:c.instructions+=2;goto B529a53;
case 0x529a56:c.instructions+=1;goto B529a56;
case 0x529a5c:goto L529a5c;
case 0x529a5d:c.instructions+=6;goto B529a5d;
case 0x529a63:c.instructions+=5;goto B529a63;
case 0x529a64:c.instructions+=4;goto B529a64;
case 0x529a66:c.instructions+=3;goto B529a66;
case 0x529a67:c.instructions+=2;goto B529a67;
case 0x529a6d:c.instructions+=1;goto B529a6d;
case 0x529a70:goto L529a70;
case 0x529a72:c.instructions+=1;goto B529a72;
case 0x529a74:goto L529a74;
case 0x529a76:c.instructions+=1;goto B529a76;
case 0x529a78:goto L529a78;
case 0x529a7d:c.instructions+=2;goto B529a7d;
case 0x529a7f:c.instructions+=1;goto B529a7f;
case 0x529a81:goto L529a81;
case 0x529a83:goto L529a83;
case 0x529a87:c.instructions+=1;goto B529a87;
case 0x529a8d:goto L529a8d;
case 0x529a8f:c.instructions+=1;goto B529a8f;
case 0x529a92:goto L529a92;
case 0x529a95:c.instructions+=2;goto B529a95;
case 0x529a97:c.instructions+=1;goto B529a97;
case 0x529a99:goto L529a99;
case 0x529a9a:c.instructions+=3;goto B529a9a;
case 0x529a9d:c.instructions+=2;goto B529a9d;
case 0x529aa0:c.instructions+=1;goto B529aa0;
case 0x529aa2:goto L529aa2;
case 0x529aa7:goto L529aa7;
case 0x529aa9:c.instructions+=2;goto B529aa9;
case 0x529aab:c.instructions+=1;goto B529aab;
case 0x529aad:goto L529aad;
case 0x529ab3:c.instructions+=1;goto B529ab3;
case 0x529ab6:goto L529ab6;
case 0x529ab8:c.instructions+=1;goto B529ab8;
case 0x529aba:goto L529aba;
case 0x529abb:c.instructions+=3;goto B529abb;
case 0x529abe:c.instructions+=2;goto B529abe;
case 0x529ac0:c.instructions+=1;goto B529ac0;
case 0x529ac2:goto L529ac2;
case 0x529ac4:goto L529ac4;
case 0x529aca:c.instructions+=4;goto B529aca;
case 0x529acd:c.instructions+=3;goto B529acd;
case 0x529acf:c.instructions+=2;goto B529acf;
case 0x529ad1:c.instructions+=1;goto B529ad1;
case 0x529ad3:goto L529ad3;
case 0x529ad6:c.instructions+=3;goto B529ad6;
case 0x529ad8:c.instructions+=2;goto B529ad8;
case 0x529ada:c.instructions+=1;goto B529ada;
case 0x529adc:goto L529adc;
case 0x529ae0:goto L529ae0;
case 0x529ae7:c.instructions+=1;goto B529ae7;
case 0x529ae9:goto L529ae9;
case 0x529aea:c.instructions+=2;goto B529aea;
case 0x529aec:c.instructions+=1;goto B529aec;
case 0x529aee:goto L529aee;
case 0x529af0:goto L529af0;
case 0x529af7:c.instructions+=2;goto B529af7;
case 0x529af9:c.instructions+=1;goto B529af9;
case 0x529afb:goto L529afb;
case 0x529aff:c.instructions+=1;goto B529aff;
case 0x529b01:goto L529b01;
case 0x529b05:c.instructions+=1;goto B529b05;
case 0x529b07:goto L529b07;
case 0x529b0a:c.instructions+=2;goto B529b0a;
case 0x529b0b:c.instructions+=1;goto B529b0b;
case 0x529b10:goto L529b10;
case 0x529b12:c.instructions+=1;goto B529b12;
case 0x529b14:goto L529b14;
case 0x529b17:c.instructions+=2;goto B529b17;
case 0x529b18:c.instructions+=1;goto B529b18;
case 0x529b1d:goto L529b1d;
case 0x529b23:c.instructions+=1;goto B529b23;
case 0x529b29:goto L529b29;
case 0x529b2c:c.instructions+=8;goto B529b2c;
case 0x529b2f:c.instructions+=7;goto B529b2f;
case 0x529b35:c.instructions+=6;goto B529b35;
case 0x529b36:c.instructions+=5;goto B529b36;
case 0x529b39:c.instructions+=4;goto B529b39;
case 0x529b3b:c.instructions+=3;goto B529b3b;
case 0x529b3e:c.instructions+=2;goto B529b3e;
case 0x529b41:c.instructions+=1;goto B529b41;
case 0x529b47:goto L529b47;
case 0x529b48:c.instructions+=2;goto B529b48;
case 0x529b49:c.instructions+=1;goto B529b49;
case 0x529b4a:goto L529b4a;
case 0x529b4c:c.instructions+=2;goto B529b4c;
case 0x529b4d:c.instructions+=1;goto B529b4d;
case 0x529b50:goto L529b50;
case 0x529b51:c.instructions+=7;goto B529b51;
case 0x529b56:c.instructions+=6;goto B529b56;
case 0x529b57:c.instructions+=5;goto B529b57;
case 0x529b59:c.instructions+=4;goto B529b59;
case 0x529b5b:c.instructions+=3;goto B529b5b;
case 0x529b5c:c.instructions+=2;goto B529b5c;
case 0x529b5e:c.instructions+=1;goto B529b5e;
case 0x529b60:goto L529b60;
case 0x529b61:c.instructions+=3;goto B529b61;
case 0x529b62:c.instructions+=2;goto B529b62;
case 0x529b64:c.instructions+=1;goto B529b64;
case 0x529b68:goto L529b68;
case 0x529b6a:c.instructions+=1;goto B529b6a;
case 0x529b6c:goto L529b6c;
case 0x529b6e:c.instructions+=1;goto B529b6e;
case 0x529b70:goto L529b70;
case 0x529b75:c.instructions+=2;goto B529b75;
case 0x529b77:c.instructions+=1;goto B529b77;
case 0x529b79:goto L529b79;
case 0x529b7b:goto L529b7b;
case 0x529b7f:c.instructions+=1;goto B529b7f;
case 0x529b81:goto L529b81;
case 0x529b87:c.instructions+=3;goto B529b87;
case 0x529b89:c.instructions+=2;goto B529b89;
case 0x529b8b:c.instructions+=1;goto B529b8b;
case 0x529b8d:goto L529b8d;
case 0x529b8f:c.instructions+=1;goto B529b8f;
case 0x529b90:goto L529b90;
case 0x529b92:c.instructions+=1;goto B529b92;
case 0x529b94:goto L529b94;
case 0x529b96:c.instructions+=1;goto B529b96;
case 0x529b98:goto L529b98;
case 0x529b9a:c.instructions+=1;goto B529b9a;
case 0x529b9c:goto L529b9c;
case 0x529b9e:goto L529b9e;
case 0x529ba0:c.instructions+=1;goto B529ba0;
case 0x529ba2:goto L529ba2;
case 0x529ba3:c.instructions+=3;goto B529ba3;
case 0x529ba6:c.instructions+=2;goto B529ba6;
case 0x529ba8:c.instructions+=1;goto B529ba8;
case 0x529baa:goto L529baa;
case 0x529bab:c.instructions+=2;goto B529bab;
case 0x529bad:c.instructions+=1;goto B529bad;
case 0x529bb2:goto L529bb2;
case 0x529bb6:c.instructions+=6;goto B529bb6;
case 0x529bbb:c.instructions+=5;goto B529bbb;
case 0x529bbc:c.instructions+=4;goto B529bbc;
case 0x529bbf:c.instructions+=3;goto B529bbf;
case 0x529bc1:c.instructions+=2;goto B529bc1;
case 0x529bc5:c.instructions+=1;goto B529bc5;
case 0x529bc7:goto L529bc7;
case 0x529bc8:c.instructions+=1;goto B529bc8;
case 0x529bc9:goto L529bc9;
case 0x529bca:c.instructions+=3;goto B529bca;
case 0x529bcb:c.instructions+=2;goto B529bcb;
case 0x529bcc:c.instructions+=1;goto B529bcc;
case 0x529bd0:goto L529bd0;
case 0x529bd1:c.instructions+=7;goto B529bd1;
case 0x529bd2:c.instructions+=6;goto B529bd2;
case 0x529bd8:c.instructions+=5;goto B529bd8;
case 0x529bd9:c.instructions+=4;goto B529bd9;
case 0x529bdb:c.instructions+=3;goto B529bdb;
case 0x529bdd:c.instructions+=2;goto B529bdd;
case 0x529be1:c.instructions+=1;goto B529be1;
case 0x529be3:goto L529be3;
case 0x529be4:c.instructions+=2;goto B529be4;
case 0x529be5:c.instructions+=1;goto B529be5;
case 0x529be7:goto L529be7;
case 0x529be9:c.instructions+=1;goto B529be9;
case 0x529beb:goto L529beb;
case 0x529bed:c.instructions+=1;goto B529bed;
case 0x529bef:goto L529bef;
case 0x529bf4:c.instructions+=2;goto B529bf4;
case 0x529bf7:c.instructions+=1;goto B529bf7;
case 0x529bf9:goto L529bf9;
case 0x529bfb:goto L529bfb;
case 0x529bff:c.instructions+=3;goto B529bff;
case 0x529c01:c.instructions+=2;goto B529c01;
case 0x529c04:c.instructions+=1;goto B529c04;
case 0x529c06:goto L529c06;
case 0x529c08:c.instructions+=1;goto B529c08;
case 0x529c0a:goto L529c0a;
case 0x529c0c:goto L529c0c;
case 0x529c0e:c.instructions+=1;goto B529c0e;
case 0x529c10:goto L529c10;
case 0x529c14:c.instructions+=2;goto B529c14;
case 0x529c15:c.instructions+=1;goto B529c15;
case 0x529c1a:goto L529c1a;
case 0x529c1c:c.instructions+=1;goto B529c1c;
case 0x529c1e:goto L529c1e;
case 0x529c22:c.instructions+=2;goto B529c22;
case 0x529c23:c.instructions+=1;goto B529c23;
case 0x529c28:goto L529c28;
case 0x529c2e:goto L529c2e;
case 0x529c2f:c.instructions+=3;goto B529c2f;
case 0x529c32:c.instructions+=2;goto B529c32;
case 0x529c34:c.instructions+=1;goto B529c34;
case 0x529c36:goto L529c36;
case 0x529c37:c.instructions+=1;goto B529c37;
case 0x529c38:goto L529c38;
case 0x529c39:c.instructions+=3;goto B529c39;
case 0x529c3a:c.instructions+=2;goto B529c3a;
case 0x529c3b:c.instructions+=1;goto B529c3b;
case 0x529c40:goto L529c40;
case 0x529c41:c.instructions+=8;goto B529c41;
case 0x529c42:c.instructions+=7;goto B529c42;
case 0x529c43:c.instructions+=6;goto B529c43;
case 0x529c45:c.instructions+=5;goto B529c45;
case 0x529c4b:c.instructions+=4;goto B529c4b;
case 0x529c4c:c.instructions+=3;goto B529c4c;
case 0x529c50:c.instructions+=2;goto B529c50;
case 0x529c52:c.instructions+=1;goto B529c52;
case 0x529c54:goto L529c54;
case 0x529c56:c.instructions+=1;goto B529c56;
case 0x529c58:goto L529c58;
case 0x529c5e:c.instructions+=3;goto B529c5e;
case 0x529c60:c.instructions+=2;goto B529c60;
case 0x529c62:c.instructions+=1;goto B529c62;
case 0x529c64:goto L529c64;
case 0x529c6a:c.instructions+=1;goto B529c6a;
case 0x529c70:goto L529c70;
case 0x529c72:c.instructions+=1;goto B529c72;
case 0x529c74:goto L529c74;
case 0x529c76:c.instructions+=1;goto B529c76;
case 0x529c78:goto L529c78;
case 0x529c7a:c.instructions+=1;goto B529c7a;
case 0x529c7c:goto L529c7c;
case 0x529c7e:goto L529c7e;
case 0x529c82:c.instructions+=1;goto B529c82;
case 0x529c84:goto L529c84;
case 0x529c87:c.instructions+=2;goto B529c87;
case 0x529c8a:c.instructions+=1;goto B529c8a;
case 0x529c8c:goto L529c8c;
case 0x529c8d:c.instructions+=3;goto B529c8d;
case 0x529c90:c.instructions+=2;goto B529c90;
case 0x529c92:c.instructions+=1;goto B529c92;
case 0x529c94:goto L529c94;
case 0x529c95:c.instructions+=5;goto B529c95;
case 0x529c96:c.instructions+=4;goto B529c96;
case 0x529c97:c.instructions+=3;goto B529c97;
case 0x529c99:c.instructions+=2;goto B529c99;
case 0x529c9a:c.instructions+=1;goto B529c9a;
case 0x529c9d:goto L529c9d;
case 0x529c9e:c.instructions+=2;goto B529c9e;
case 0x529ca0:c.instructions+=1;goto B529ca0;
case 0x529ca5:goto L529ca5;
case 0x529ca7:c.instructions+=1;goto B529ca7;
case 0x529ca9:goto L529ca9;
case 0x529caa:c.instructions+=2;goto B529caa;
case 0x529cac:c.instructions+=1;goto B529cac;
case 0x529cb1:goto L529cb1;
case 0x529cb2:c.instructions+=5;goto B529cb2;
case 0x529cb4:c.instructions+=4;goto B529cb4;
case 0x529cb5:c.instructions+=3;goto B529cb5;
case 0x529cb6:c.instructions+=2;goto B529cb6;
case 0x529cb7:c.instructions+=1;goto B529cb7;
case 0x529cc0:goto L529cc0;
case 0x529cc2:c.instructions+=1;goto B529cc2;
case 0x529cc4:goto L529cc4;
case 0x529cc7:c.instructions+=1;goto B529cc7;
case 0x529cc9:goto L529cc9;
case 0x529ccf:c.instructions+=2;goto B529ccf;
case 0x529cd5:c.instructions+=1;goto B529cd5;
case 0x529cd7:goto L529cd7;
case 0x529cd9:goto L529cd9;
case 0x529cda:c.instructions+=4;goto B529cda;
case 0x529cdb:c.instructions+=3;goto B529cdb;
case 0x529cdc:c.instructions+=2;goto B529cdc;
case 0x529cdd:c.instructions+=1;goto B529cdd;
case 0x529ce2:goto L529ce2;
case 0x529ce8:c.instructions+=4;goto B529ce8;
case 0x529ceb:c.instructions+=3;goto B529ceb;
case 0x529ced:c.instructions+=2;goto B529ced;
case 0x529cef:c.instructions+=1;goto B529cef;
case 0x529cf1:goto L529cf1;
case 0x529cf4:goto L529cf4;
case 0x529cf6:c.instructions+=1;goto B529cf6;
case 0x529cf8:goto L529cf8;
case 0x529cf9:c.instructions+=3;goto B529cf9;
case 0x529cfc:c.instructions+=2;goto B529cfc;
case 0x529cfe:c.instructions+=1;goto B529cfe;
case 0x529d00:goto L529d00;
case 0x529d01:c.instructions+=4;goto B529d01;
case 0x529d02:c.instructions+=3;goto B529d02;
case 0x529d04:c.instructions+=2;goto B529d04;
case 0x529d05:c.instructions+=1;goto B529d05;
case 0x529d06:goto L529d06;
case 0x529d09:c.instructions+=3;goto B529d09;
case 0x529d0b:c.instructions+=2;goto B529d0b;
case 0x529d0d:c.instructions+=1;goto B529d0d;
case 0x529d0f:goto L529d0f;
case 0x529d11:c.instructions+=2;goto B529d11;
case 0x529d13:c.instructions+=1;goto B529d13;
case 0x529d16:goto L529d16;
case 0x529d18:c.instructions+=1;goto B529d18;
case 0x529d1d:goto L529d1d;
case 0x529d1f:c.instructions+=1;goto B529d1f;
case 0x529d21:goto L529d21;
case 0x529d26:goto L529d26;
case 0x529d28:c.instructions+=1;goto B529d28;
case 0x529d2a:goto L529d2a;
case 0x529d2d:c.instructions+=2;goto B529d2d;
case 0x529d32:c.instructions+=1;goto B529d32;
case 0x529d34:goto L529d34;
case 0x529d35:c.instructions+=4;goto B529d35;
case 0x529d36:c.instructions+=3;goto B529d36;
case 0x529d38:c.instructions+=2;goto B529d38;
case 0x529d39:c.instructions+=1;goto B529d39;
case 0x529d3a:goto L529d3a;
case 0x529d3f:c.instructions+=1;goto B529d3f;
case 0x529d40:goto L529d40;
case 0x529d42:c.instructions+=1;goto B529d42;
case 0x529d44:goto L529d44;
case 0x529d47:c.instructions+=2;goto B529d47;
case 0x529d4c:c.instructions+=1;goto B529d4c;
case 0x529d4e:goto L529d4e;
case 0x529d4f:c.instructions+=4;goto B529d4f;
case 0x529d50:c.instructions+=3;goto B529d50;
case 0x529d52:c.instructions+=2;goto B529d52;
case 0x529d53:c.instructions+=1;goto B529d53;
case 0x529d54:goto L529d54;
case 0x529d55:c.instructions+=4;goto B529d55;
case 0x529d56:c.instructions+=3;goto B529d56;
case 0x529d58:c.instructions+=2;goto B529d58;
case 0x529d59:c.instructions+=1;goto B529d59;
case 0x529d60:goto L529d60;
case 0x529d61:c.instructions+=12;goto B529d61;
case 0x529d63:c.instructions+=11;goto B529d63;
case 0x529d64:c.instructions+=10;goto B529d64;
case 0x529d65:c.instructions+=9;goto B529d65;
case 0x529d68:c.instructions+=8;goto B529d68;
case 0x529d6b:c.instructions+=7;goto B529d6b;
case 0x529d6e:c.instructions+=6;goto B529d6e;
case 0x529d70:c.instructions+=5;goto B529d70;
case 0x529d73:c.instructions+=4;goto B529d73;
case 0x529d74:c.instructions+=3;goto B529d74;
case 0x529d79:c.instructions+=2;goto B529d79;
case 0x529d7c:c.instructions+=1;goto B529d7c;
case 0x529d81:goto L529d81;
case 0x529d84:c.instructions+=4;goto B529d84;
case 0x529d85:c.instructions+=3;goto B529d85;
case 0x529d86:c.instructions+=2;goto B529d86;
case 0x529d88:c.instructions+=1;goto B529d88;
case 0x529d8d:goto L529d8d;
case 0x529d90:c.instructions+=2;goto B529d90;
case 0x529d93:c.instructions+=1;goto B529d93;
case 0x529d95:goto L529d95;
case 0x529d99:c.instructions+=6;goto B529d99;
case 0x529d9c:c.instructions+=5;goto B529d9c;
case 0x529d9f:c.instructions+=4;goto B529d9f;
case 0x529da1:c.instructions+=3;goto B529da1;
case 0x529da2:c.instructions+=2;goto B529da2;
case 0x529da7:c.instructions+=1;goto B529da7;
case 0x529dac:goto L529dac;
case 0x529dae:goto L529dae;
case 0x529db1:c.instructions+=5;goto B529db1;
case 0x529db4:c.instructions+=4;goto B529db4;
case 0x529db5:c.instructions+=3;goto B529db5;
case 0x529db8:c.instructions+=2;goto B529db8;
case 0x529dba:c.instructions+=1;goto B529dba;
case 0x529dbf:goto L529dbf;
case 0x529dc2:c.instructions+=1;goto B529dc2;
case 0x529dc3:goto L529dc3;
case 0x529dc6:c.instructions+=5;goto B529dc6;
case 0x529dc8:c.instructions+=4;goto B529dc8;
case 0x529dc9:c.instructions+=3;goto B529dc9;
case 0x529dca:c.instructions+=2;goto B529dca;
case 0x529dcd:c.instructions+=1;goto B529dcd;
case 0x529dd2:goto L529dd2;
case 0x529dd5:c.instructions+=4;goto B529dd5;
case 0x529dd8:c.instructions+=3;goto B529dd8;
case 0x529ddb:c.instructions+=2;goto B529ddb;
case 0x529dde:c.instructions+=1;goto B529dde;
case 0x529de3:goto L529de3;
case 0x529de5:c.instructions+=2;goto B529de5;
case 0x529deb:c.instructions+=1;goto B529deb;
case 0x529ded:goto L529ded;
case 0x529df0:c.instructions+=3;goto B529df0;
case 0x529df1:c.instructions+=2;goto B529df1;
case 0x529df6:c.instructions+=1;goto B529df6;
case 0x529dfb:goto L529dfb;
case 0x529dfd:c.instructions+=1;goto B529dfd;
case 0x529dff:goto L529dff;
case 0x529e03:goto L529e03;
case 0x529e06:c.instructions+=3;goto B529e06;
case 0x529e07:c.instructions+=2;goto B529e07;
case 0x529e0c:c.instructions+=1;goto B529e0c;
case 0x529e11:goto L529e11;
case 0x529e13:c.instructions+=2;goto B529e13;
case 0x529e16:c.instructions+=1;goto B529e16;
case 0x529e18:goto L529e18;
case 0x529e1b:c.instructions+=1;goto B529e1b;
case 0x529e1d:goto L529e1d;
case 0x529e1f:goto L529e1f;
case 0x529e20:c.instructions+=3;goto B529e20;
case 0x529e21:c.instructions+=2;goto B529e21;
case 0x529e22:c.instructions+=1;goto B529e22;
case 0x529e30:goto L529e30;
case 0x529e31:c.instructions+=7;goto B529e31;
case 0x529e33:c.instructions+=6;goto B529e33;
case 0x529e34:c.instructions+=5;goto B529e34;
case 0x529e35:c.instructions+=4;goto B529e35;
case 0x529e38:c.instructions+=3;goto B529e38;
case 0x529e39:c.instructions+=2;goto B529e39;
case 0x529e3a:c.instructions+=1;goto B529e3a;
case 0x529e3f:goto L529e3f;
case 0x529e42:c.instructions+=4;goto B529e42;
case 0x529e45:c.instructions+=3;goto B529e45;
case 0x529e46:c.instructions+=2;goto B529e46;
case 0x529e4b:c.instructions+=1;goto B529e4b;
case 0x529e50:goto L529e50;
case 0x529e51:c.instructions+=2;goto B529e51;
case 0x529e53:c.instructions+=1;goto B529e53;
case 0x529e58:goto L529e58;
case 0x529e5a:c.instructions+=3;goto B529e5a;
case 0x529e5c:c.instructions+=2;goto B529e5c;
case 0x529e5d:c.instructions+=1;goto B529e5d;
case 0x529e62:goto L529e62;
case 0x529e65:c.instructions+=3;goto B529e65;
case 0x529e67:c.instructions+=2;goto B529e67;
case 0x529e69:c.instructions+=1;goto B529e69;
case 0x529e6e:goto L529e6e;
case 0x529e71:c.instructions+=6;goto B529e71;
case 0x529e72:c.instructions+=5;goto B529e72;
case 0x529e73:c.instructions+=4;goto B529e73;
case 0x529e75:c.instructions+=3;goto B529e75;
case 0x529e76:c.instructions+=2;goto B529e76;
case 0x529e77:c.instructions+=1;goto B529e77;
case 0x529e80:goto L529e80;
case 0x529e81:c.instructions+=5;goto B529e81;
case 0x529e83:c.instructions+=4;goto B529e83;
case 0x529e84:c.instructions+=3;goto B529e84;
case 0x529e87:c.instructions+=2;goto B529e87;
case 0x529e88:c.instructions+=1;goto B529e88;
case 0x529e8d:goto L529e8d;
case 0x529e90:c.instructions+=2;goto B529e90;
case 0x529e92:c.instructions+=1;goto B529e92;
case 0x529e94:goto L529e94;
case 0x529e96:c.instructions+=3;goto B529e96;
case 0x529e97:c.instructions+=2;goto B529e97;
case 0x529e98:c.instructions+=1;goto B529e98;
case 0x529e99:goto L529e99;
case 0x529e9a:c.instructions+=4;goto B529e9a;
case 0x529e9c:c.instructions+=3;goto B529e9c;
case 0x529e9e:c.instructions+=2;goto B529e9e;
case 0x529ea3:c.instructions+=1;goto B529ea3;
case 0x529ea8:goto L529ea8;
case 0x529eaa:c.instructions+=1;goto B529eaa;
case 0x529eac:goto L529eac;
case 0x529eb0:goto L529eb0;
case 0x529eb6:c.instructions+=2;goto B529eb6;
case 0x529eb8:c.instructions+=1;goto B529eb8;
case 0x529eba:goto L529eba;
case 0x529ebc:c.instructions+=1;goto B529ebc;
case 0x529ec2:goto L529ec2;
case 0x529ec4:c.instructions+=2;goto B529ec4;
case 0x529ec6:c.instructions+=1;goto B529ec6;
case 0x529ec8:goto L529ec8;
case 0x529eca:c.instructions+=1;goto B529eca;
case 0x529ecc:goto L529ecc;
case 0x529ecd:c.instructions+=3;goto B529ecd;
case 0x529ed0:c.instructions+=2;goto B529ed0;
case 0x529ed3:c.instructions+=1;goto B529ed3;
case 0x529ed5:goto L529ed5;
case 0x529ed6:c.instructions+=3;goto B529ed6;
case 0x529ed8:c.instructions+=2;goto B529ed8;
case 0x529edd:c.instructions+=1;goto B529edd;
case 0x529ee2:goto L529ee2;
case 0x529ee4:c.instructions+=1;goto B529ee4;
case 0x529ee6:goto L529ee6;
case 0x529ee7:c.instructions+=4;goto B529ee7;
case 0x529ee9:c.instructions+=3;goto B529ee9;
case 0x529eea:c.instructions+=2;goto B529eea;
case 0x529eeb:c.instructions+=1;goto B529eeb;
case 0x529eec:goto L529eec;
case 0x529eed:c.instructions+=4;goto B529eed;
case 0x529eef:c.instructions+=3;goto B529eef;
case 0x529ef0:c.instructions+=2;goto B529ef0;
case 0x529ef1:c.instructions+=1;goto B529ef1;
case 0x529f00:goto L529f00;
case 0x529f01:c.instructions+=5;goto B529f01;
case 0x529f02:c.instructions+=4;goto B529f02;
case 0x529f04:c.instructions+=3;goto B529f04;
case 0x529f06:c.instructions+=2;goto B529f06;
case 0x529f0b:c.instructions+=1;goto B529f0b;
case 0x529f10:goto L529f10;
case 0x529f12:c.instructions+=2;goto B529f12;
case 0x529f14:c.instructions+=1;goto B529f14;
case 0x529f17:goto L529f17;
case 0x529f19:c.instructions+=6;goto B529f19;
case 0x529f1b:c.instructions+=5;goto B529f1b;
case 0x529f1d:c.instructions+=4;goto B529f1d;
case 0x529f1f:c.instructions+=3;goto B529f1f;
case 0x529f20:c.instructions+=2;goto B529f20;
case 0x529f25:c.instructions+=1;goto B529f25;
case 0x529f2a:goto L529f2a;
case 0x529f2c:c.instructions+=2;goto B529f2c;
case 0x529f2e:c.instructions+=1;goto B529f2e;
case 0x529f30:goto L529f30;
case 0x529f32:c.instructions+=3;goto B529f32;
case 0x529f37:c.instructions+=2;goto B529f37;
case 0x529f39:c.instructions+=1;goto B529f39;
case 0x529f3e:goto L529f3e;
case 0x529f3f:c.instructions+=2;goto B529f3f;
case 0x529f41:c.instructions+=1;goto B529f41;
case 0x529f46:goto L529f46;
case 0x529f49:c.instructions+=2;goto B529f49;
case 0x529f4b:c.instructions+=1;goto B529f4b;
case 0x529f4d:goto L529f4d;
case 0x529f4f:c.instructions+=6;goto B529f4f;
case 0x529f51:c.instructions+=5;goto B529f51;
case 0x529f53:c.instructions+=4;goto B529f53;
case 0x529f54:c.instructions+=3;goto B529f54;
case 0x529f55:c.instructions+=2;goto B529f55;
case 0x529f5a:c.instructions+=1;goto B529f5a;
case 0x529f5f:goto L529f5f;
case 0x529f61:c.instructions+=2;goto B529f61;
case 0x529f63:c.instructions+=1;goto B529f63;
case 0x529f65:goto L529f65;
case 0x529f66:c.instructions+=3;goto B529f66;
case 0x529f68:c.instructions+=2;goto B529f68;
case 0x529f69:c.instructions+=1;goto B529f69;
case 0x529f6a:goto L529f6a;
case 0x529f6b:c.instructions+=3;goto B529f6b;
case 0x529f6d:c.instructions+=2;goto B529f6d;
case 0x529f6e:c.instructions+=1;goto B529f6e;
case 0x529f70:goto L529f70;
case 0x529f71:c.instructions+=7;goto B529f71;
case 0x529f73:c.instructions+=6;goto B529f73;
case 0x529f74:c.instructions+=5;goto B529f74;
case 0x529f77:c.instructions+=4;goto B529f77;
case 0x529f78:c.instructions+=3;goto B529f78;
case 0x529f79:c.instructions+=2;goto B529f79;
case 0x529f7e:c.instructions+=1;goto B529f7e;
case 0x529f83:goto L529f83;
case 0x529f85:c.instructions+=2;goto B529f85;
case 0x529f8a:c.instructions+=1;goto B529f8a;
case 0x529f90:goto L529f90;
case 0x529f92:c.instructions+=1;goto B529f92;
case 0x529f94:goto L529f94;
case 0x529f97:c.instructions+=2;goto B529f97;
case 0x529f9c:c.instructions+=1;goto B529f9c;
case 0x529f9e:goto L529f9e;
case 0x529f9f:c.instructions+=2;goto B529f9f;
case 0x529fa4:c.instructions+=1;goto B529fa4;
case 0x529fa9:goto L529fa9;
case 0x529fab:c.instructions+=1;goto B529fab;
case 0x529fad:goto L529fad;
case 0x529faf:c.instructions+=2;goto B529faf;
case 0x529fb1:c.instructions+=1;goto B529fb1;
case 0x529fb4:goto L529fb4;
case 0x529fb5:c.instructions+=2;goto B529fb5;
case 0x529fba:c.instructions+=1;goto B529fba;
case 0x529fbf:goto L529fbf;
case 0x529fc1:c.instructions+=1;goto B529fc1;
case 0x529fc3:goto L529fc3;
case 0x529fc5:c.instructions+=2;goto B529fc5;
case 0x529fc7:c.instructions+=1;goto B529fc7;
case 0x529fca:goto L529fca;
case 0x529fcb:c.instructions+=1;goto B529fcb;
case 0x529fd0:goto L529fd0;
case 0x529fd3:c.instructions+=2;goto B529fd3;
case 0x529fd5:c.instructions+=1;goto B529fd5;
case 0x529fd7:goto L529fd7;
case 0x529fda:c.instructions+=3;goto B529fda;
case 0x529fdb:c.instructions+=2;goto B529fdb;
case 0x529fe0:c.instructions+=1;goto B529fe0;
case 0x529fe5:goto L529fe5;
case 0x529fe7:c.instructions+=5;goto B529fe7;
case 0x529fe8:c.instructions+=4;goto B529fe8;
case 0x529feb:c.instructions+=3;goto B529feb;
case 0x529fec:c.instructions+=2;goto B529fec;
case 0x529fed:c.instructions+=1;goto B529fed;
case 0x529fee:goto L529fee;
case 0x529fef:c.instructions+=2;goto B529fef;
case 0x529ff4:c.instructions+=1;goto B529ff4;
case 0x529ff9:goto L529ff9;
case 0x529ffa:c.instructions+=3;goto B529ffa;
case 0x529ffb:c.instructions+=2;goto B529ffb;
case 0x529ffc:c.instructions+=1;goto B529ffc;
case 0x529ffd:goto L529ffd;
case 0x529ffe:c.instructions+=1;goto B529ffe;
default:missing_instruction(c.pc);}
B529004:L529004:{c.instructions+=4;NFSU2_TR(0x529004);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x76c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52900a:{NFSU2_TR(0x52900a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52900c:{NFSU2_TR(0x52900c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52900f:{NFSU2_TR(0x52900f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52901c;}}
}
B529011:L529011:{c.instructions+=3;NFSU2_TR(0x529011);
{u32 ea_=u32(r4(R+0)+u32(30404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529017:{NFSU2_TR(0x529017);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B52901a:{NFSU2_TR(0x52901a);
{goto L529022;}
}
B52901c:L52901c:{c.instructions+=1;NFSU2_TR(0x52901c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529022:L529022:{c.instructions+=4;NFSU2_TR(0x529022);
{u32 ea_=u32(r4(R+24)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B529028:{NFSU2_TR(0x529028);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x76ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52902e:{NFSU2_TR(0x52902e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529030:{NFSU2_TR(0x529030);
if(r1(R+518)){{goto L529035;}}
}
B529032:L529032:{c.instructions+=1;NFSU2_TR(0x529032);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B529035:L529035:{c.instructions+=6;NFSU2_TR(0x529035);
{u32 ea_=u32(r4(R+0)+u32(30664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52903b:{NFSU2_TR(0x52903b);
{u32 ea_=u32(r4(R+24)+u32(492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B529041:{NFSU2_TR(0x529041);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529047:{NFSU2_TR(0x529047);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529049:{NFSU2_TR(0x529049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52904c:{NFSU2_TR(0x52904c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529059;}}
}
B52904e:L52904e:{c.instructions+=3;NFSU2_TR(0x52904e);
{u32 ea_=u32(r4(R+0)+u32(30664u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529054:{NFSU2_TR(0x529054);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B529057:{NFSU2_TR(0x529057);
{goto L52905f;}
}
B529059:L529059:{c.instructions+=1;NFSU2_TR(0x529059);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52905f:L52905f:{c.instructions+=4;NFSU2_TR(0x52905f);
{u32 ea_=u32(r4(R+24)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B529065:{NFSU2_TR(0x529065);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x77d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52906b:{NFSU2_TR(0x52906b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52906d:{NFSU2_TR(0x52906d);
if(r1(R+518)){{goto L529072;}}
}
B52906f:L52906f:{c.instructions+=1;NFSU2_TR(0x52906f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B529072:L529072:{c.instructions+=6;NFSU2_TR(0x529072);
{u32 ea_=u32(r4(R+0)+u32(30924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529078:{NFSU2_TR(0x529078);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52907e:{NFSU2_TR(0x52907e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78d0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529084:{NFSU2_TR(0x529084);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529086:{NFSU2_TR(0x529086);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529089:{NFSU2_TR(0x529089);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529096;}}
}
B52908b:L52908b:{c.instructions+=3;NFSU2_TR(0x52908b);
{u32 ea_=u32(r4(R+0)+u32(30924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529091:{NFSU2_TR(0x529091);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B529094:{NFSU2_TR(0x529094);
{goto L52909c;}
}
B529096:L529096:{c.instructions+=1;NFSU2_TR(0x529096);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52909c:L52909c:{c.instructions+=4;NFSU2_TR(0x52909c);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5290a2:{NFSU2_TR(0x5290a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5290a8:{NFSU2_TR(0x5290a8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5290aa:{NFSU2_TR(0x5290aa);
if(r1(R+518)){{goto L5290af;}}
}
B5290ac:L5290ac:{c.instructions+=1;NFSU2_TR(0x5290ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5290af:L5290af:{c.instructions+=6;NFSU2_TR(0x5290af);
{u32 ea_=u32(r4(R+0)+u32(31184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5290b5:{NFSU2_TR(0x5290b5);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5290bb:{NFSU2_TR(0x5290bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x79d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5290c1:{NFSU2_TR(0x5290c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5290c3:{NFSU2_TR(0x5290c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5290c6:{NFSU2_TR(0x5290c6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5290d3;}}
}
B5290c8:L5290c8:{c.instructions+=3;NFSU2_TR(0x5290c8);
{u32 ea_=u32(r4(R+0)+u32(31184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5290ce:{NFSU2_TR(0x5290ce);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5290d1:{NFSU2_TR(0x5290d1);
{goto L5290d9;}
}
B5290d3:L5290d3:{c.instructions+=1;NFSU2_TR(0x5290d3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5290d9:L5290d9:{c.instructions+=4;NFSU2_TR(0x5290d9);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5290df:{NFSU2_TR(0x5290df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x79d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5290e5:{NFSU2_TR(0x5290e5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5290e7:{NFSU2_TR(0x5290e7);
if(r1(R+518)){{goto L5290ec;}}
}
B5290e9:L5290e9:{c.instructions+=1;NFSU2_TR(0x5290e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5290ec:L5290ec:{c.instructions+=6;NFSU2_TR(0x5290ec);
{u32 ea_=u32(r4(R+0)+u32(31444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5290f2:{NFSU2_TR(0x5290f2);
{u32 ea_=u32(r4(R+24)+u32(504u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5290f8:{NFSU2_TR(0x5290f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ad8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5290fe:{NFSU2_TR(0x5290fe);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529100:{NFSU2_TR(0x529100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529103:{NFSU2_TR(0x529103);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529110;}}
}
B529105:L529105:{c.instructions+=3;NFSU2_TR(0x529105);
{u32 ea_=u32(r4(R+0)+u32(31444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52910b:{NFSU2_TR(0x52910b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B52910e:{NFSU2_TR(0x52910e);
{goto L529116;}
}
B529110:L529110:{c.instructions+=1;NFSU2_TR(0x529110);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529116:L529116:{c.instructions+=4;NFSU2_TR(0x529116);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52911c:{NFSU2_TR(0x52911c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7adcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529122:{NFSU2_TR(0x529122);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529124:{NFSU2_TR(0x529124);
if(r1(R+518)){{goto L529129;}}
}
B529126:L529126:{c.instructions+=1;NFSU2_TR(0x529126);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B529129:L529129:{c.instructions+=11;NFSU2_TR(0x529129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52912f:{NFSU2_TR(0x52912f);
{u32 ea_=u32(r4(R+0)+u32(29884u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529135:{NFSU2_TR(0x529135);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x73bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52913b:{NFSU2_TR(0x52913b);
{u32 ea_=u32(r4(R+0)+u32(29624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B529141:{NFSU2_TR(0x529141);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B529143:{NFSU2_TR(0x529143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529146:{NFSU2_TR(0x529146);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B529149:{NFSU2_TR(0x529149);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B52914f:{NFSU2_TR(0x52914f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B529151:{NFSU2_TR(0x529151);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B529154:{NFSU2_TR(0x529154);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L52915c;}}
}
B529156:L529156:{c.instructions+=3;NFSU2_TR(0x529156);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B529158:{NFSU2_TR(0x529158);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B52915a:{NFSU2_TR(0x52915a);
{goto L529164;}
}
B52915c:L52915c:{c.instructions+=2;NFSU2_TR(0x52915c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52915e:{NFSU2_TR(0x52915e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B529164:L529164:{c.instructions+=16;NFSU2_TR(0x529164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529167:{NFSU2_TR(0x529167);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B529169:{NFSU2_TR(0x529169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52916f:{NFSU2_TR(0x52916f);
{u32 ea_=u32(r4(R+24)+u32(480u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B529175:{NFSU2_TR(0x529175);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52917b:{NFSU2_TR(0x52917b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52917e:{NFSU2_TR(0x52917e);
{u32 ea_=u32(r4(R+24)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B529184:{NFSU2_TR(0x529184);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B529186:{NFSU2_TR(0x529186);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B529188:{NFSU2_TR(0x529188);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B52918a:{NFSU2_TR(0x52918a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52918d:{NFSU2_TR(0x52918d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B529190:{NFSU2_TR(0x529190);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B529196:{NFSU2_TR(0x529196);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B529198:{NFSU2_TR(0x529198);
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
B52919b:{NFSU2_TR(0x52919b);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5291ce;}}
}
B52919d:L52919d:{c.instructions+=18;NFSU2_TR(0x52919d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5291a3:{NFSU2_TR(0x5291a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5291a9:{NFSU2_TR(0x5291a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5291ac:{NFSU2_TR(0x5291ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5291af:{NFSU2_TR(0x5291af);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5291b1:{NFSU2_TR(0x5291b1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5291b3:{NFSU2_TR(0x5291b3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5291b5:{NFSU2_TR(0x5291b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5291b8:{NFSU2_TR(0x5291b8);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5291bb:{NFSU2_TR(0x5291bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5291bc:{NFSU2_TR(0x5291bc);
__asm__ volatile(".byte 0xd8,0xf1":::"memory");
}
B5291be:{NFSU2_TR(0x5291be);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5291c4:{NFSU2_TR(0x5291c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5291c5:{NFSU2_TR(0x5291c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5291c6:{NFSU2_TR(0x5291c6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5291c8:{NFSU2_TR(0x5291c8);
__builtin_memmove((R+16),(R+20),4);
}
B5291ca:{NFSU2_TR(0x5291ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5291cb:{NFSU2_TR(0x5291cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5291ce:L5291ce:{c.instructions+=8;NFSU2_TR(0x5291ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5291cf:{NFSU2_TR(0x5291cf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5291d1:{NFSU2_TR(0x5291d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5291d7:{NFSU2_TR(0x5291d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5291d8:{NFSU2_TR(0x5291d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5291d9:{NFSU2_TR(0x5291d9);
__builtin_memmove((R+16),(R+20),4);
}
B5291db:{NFSU2_TR(0x5291db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5291dc:{NFSU2_TR(0x5291dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5291e0:L5291e0:{c.instructions+=4;NFSU2_TR(0x5291e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5291e1:{NFSU2_TR(0x5291e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5291e2:{NFSU2_TR(0x5291e2);
__builtin_memmove((R+24),(R+4),4);
}
B5291e4:{NFSU2_TR(0x5291e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5291e9ull));
TAIL_STATIC(0x527d30u,527);
}
B5291e9:L5291e9:{c.instructions+=4;NFSU2_TR(0x5291e9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
}
B5291ef:{NFSU2_TR(0x5291ef);
__builtin_memmove((R+4),(R+24),4);
}
B5291f1:{NFSU2_TR(0x5291f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5291f3:{NFSU2_TR(0x5291f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5291f8ull));
TAIL_STATIC(0x500820u,500);
}
B5291f8:L5291f8:{c.instructions+=2;NFSU2_TR(0x5291f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5291fa:{NFSU2_TR(0x5291fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52920c;}}
}
B5291fc:L5291fc:{c.instructions+=1;NFSU2_TR(0x5291fc);
__builtin_memmove((R+16),(R+16),4);
}
B529200:L529200:{c.instructions+=3;NFSU2_TR(0x529200);
__builtin_memmove((R+4),(R+24),4);
}
B529202:{NFSU2_TR(0x529202);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B529203:{NFSU2_TR(0x529203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529208ull));
TAIL_STATIC(0x500820u,500);
}
B529208:L529208:{c.instructions+=2;NFSU2_TR(0x529208);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52920a:{NFSU2_TR(0x52920a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529200u);}goto L529200;}}
}
B52920c:L52920c:{c.instructions+=3;NFSU2_TR(0x52920c);
__builtin_memmove((R+4),(R+24),4);
}
B52920e:{NFSU2_TR(0x52920e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529210:{NFSU2_TR(0x529210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529215ull));
TAIL_STATIC(0x500910u,500);
}
B529215:L529215:{c.instructions+=2;NFSU2_TR(0x529215);
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
B529217:{NFSU2_TR(0x529217);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52922c;}}
}
B529219:L529219:{c.instructions+=1;NFSU2_TR(0x529219);
__builtin_memmove((R+16),(R+16),4);
}
B529220:L529220:{c.instructions+=3;NFSU2_TR(0x529220);
__builtin_memmove((R+4),(R+24),4);
}
B529222:{NFSU2_TR(0x529222);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B529223:{NFSU2_TR(0x529223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529228ull));
TAIL_STATIC(0x500910u,500);
}
B529228:L529228:{c.instructions+=2;NFSU2_TR(0x529228);
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
B52922a:{NFSU2_TR(0x52922a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529220u);}goto L529220;}}
}
B52922c:L52922c:{c.instructions+=3;NFSU2_TR(0x52922c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52922d:{NFSU2_TR(0x52922d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52922e:{NFSU2_TR(0x52922e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529230:L529230:{c.instructions+=10;NFSU2_TR(0x529230);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529234:{NFSU2_TR(0x529234);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529235:{NFSU2_TR(0x529235);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529236:{NFSU2_TR(0x529236);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52923a:{NFSU2_TR(0x52923a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52923b:{NFSU2_TR(0x52923b);
__builtin_memmove((R+12),(R+4),4);
}
B52923d:{NFSU2_TR(0x52923d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52923e:{NFSU2_TR(0x52923e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x72d8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529244:{NFSU2_TR(0x529244);
w4(R+28,u32(0x8ull));
}
B529249:{NFSU2_TR(0x529249);
__builtin_memmove((R+16),(R+16),4);
}
B529250:L529250:{c.instructions+=4;NFSU2_TR(0x529250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529251:{NFSU2_TR(0x529251);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529252:{NFSU2_TR(0x529252);
__builtin_memmove((R+4),(R+24),4);
}
B529254:{NFSU2_TR(0x529254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529259ull));
TAIL_STATIC(0x514400u,514);
}
B529259:L529259:{c.instructions+=4;NFSU2_TR(0x529259);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x101ull))));
}
B52925f:{NFSU2_TR(0x52925f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x104ull))));
}
B529265:{NFSU2_TR(0x529265);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B529266:{NFSU2_TR(0x529266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529250u);}goto L529250;}}
}
B529268:L529268:{c.instructions+=33;NFSU2_TR(0x529268);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B52926a:{NFSU2_TR(0x52926a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7134ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529270:{NFSU2_TR(0x529270);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B529273:{NFSU2_TR(0x529273);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8868ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B529279:{NFSU2_TR(0x529279);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B52927c:{NFSU2_TR(0x52927c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52927f:{NFSU2_TR(0x52927f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x872cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529285:{NFSU2_TR(0x529285);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529286:{NFSU2_TR(0x529286);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B529289:{NFSU2_TR(0x529289);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873eull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52928f:{NFSU2_TR(0x52928f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B529292:{NFSU2_TR(0x529292);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B529295:{NFSU2_TR(0x529295);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873full))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52929b:{NFSU2_TR(0x52929b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52929c:{NFSU2_TR(0x52929c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52929f:{NFSU2_TR(0x52929f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5292a5:{NFSU2_TR(0x5292a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5292ab:{NFSU2_TR(0x5292ab);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5292ac:{NFSU2_TR(0x5292ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5292af:{NFSU2_TR(0x5292af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5292b5:{NFSU2_TR(0x5292b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8868ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5292bb:{NFSU2_TR(0x5292bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x872cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5292c1:{NFSU2_TR(0x5292c1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5292c4:{NFSU2_TR(0x5292c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873eull))));
__builtin_memmove((R+4),(U+0),4);
}
B5292ca:{NFSU2_TR(0x5292ca);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5292cd:{NFSU2_TR(0x5292cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873full))));
__builtin_memmove((R+4),(U+0),4);
}
B5292d3:{NFSU2_TR(0x5292d3);
__builtin_memmove((R+24),(R+0),4);
}
B5292d5:{NFSU2_TR(0x5292d5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc00ull))));
}
B5292da:{NFSU2_TR(0x5292da);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7af8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5292e0:{NFSU2_TR(0x5292e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7afcull))));
__builtin_memmove((R+4),(U+0),4);
}
B5292e6:{NFSU2_TR(0x5292e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5292e7:{NFSU2_TR(0x5292e7);
w4(R+4,u32(0x300ull));
}
B5292ec:{NFSU2_TR(0x5292ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7b00ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5292f2:L5292f2:{c.instructions+=1;NFSU2_TR(0x5292f2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5292f4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5292f2u);}goto L5292f2;}
}
B5292f4:L5292f4:{c.instructions+=39;NFSU2_TR(0x5292f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5292f7:{NFSU2_TR(0x5292f7);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5292fd:{NFSU2_TR(0x5292fd);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B5292ff:{NFSU2_TR(0x5292ff);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873dull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B529305:{NFSU2_TR(0x529305);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B529308:{NFSU2_TR(0x529308);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8740ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52930e:{NFSU2_TR(0x52930e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52930f:{NFSU2_TR(0x52930f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B529312:{NFSU2_TR(0x529312);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8744ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B529318:{NFSU2_TR(0x529318);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873cull))));
__builtin_memmove((R+4),(U+0),4);
}
B52931e:{NFSU2_TR(0x52931e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B529321:{NFSU2_TR(0x529321);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x873dull))));
__builtin_memmove((R+4),(U+0),4);
}
B529327:{NFSU2_TR(0x529327);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8740ull))));
__builtin_memmove((R+4),(U+0),4);
}
B52932d:{NFSU2_TR(0x52932d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52932e:{NFSU2_TR(0x52932e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8744ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529334:{NFSU2_TR(0x529334);
__builtin_memmove((R+4),(R+0),4);
}
B529336:{NFSU2_TR(0x529336);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B529338:{NFSU2_TR(0x529338);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8750ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52933e:{NFSU2_TR(0x52933e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B529340:{NFSU2_TR(0x529340);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529343:{NFSU2_TR(0x529343);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529346:{NFSU2_TR(0x529346);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529349:{NFSU2_TR(0x529349);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52934c:{NFSU2_TR(0x52934c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52934f:{NFSU2_TR(0x52934f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529352:{NFSU2_TR(0x529352);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B529356:{NFSU2_TR(0x529356);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B529359:{NFSU2_TR(0x529359);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8760ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B529360:{NFSU2_TR(0x529360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529363:{NFSU2_TR(0x529363);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B529366:{NFSU2_TR(0x529366);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8760ull))));
__builtin_memmove((R+8),(U+0),4);
}
B52936c:{NFSU2_TR(0x52936c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8764ull))));
__builtin_memmove((R+8),(U+0),4);
}
B529372:{NFSU2_TR(0x529372);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B529374:{NFSU2_TR(0x529374);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B529377:{NFSU2_TR(0x529377);
__builtin_memmove((R+24),(R+0),4);
}
B529379:{NFSU2_TR(0x529379);
w4(R+4,u32(0x40ull));
}
B52937e:{NFSU2_TR(0x52937e);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8768ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529384:{NFSU2_TR(0x529384);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529385:{NFSU2_TR(0x529385);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
}
B52938a:L52938a:{c.instructions+=1;NFSU2_TR(0x52938a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L52938c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52938au);}goto L52938a;}
}
B52938c:L52938c:{c.instructions+=3;NFSU2_TR(0x52938c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52938d:{NFSU2_TR(0x52938d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529393:{NFSU2_TR(0x529393);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529398ull));
TAIL_STATIC(0x514e80u,514);
}
B529398:L529398:{c.instructions+=15;NFSU2_TR(0x529398);
__builtin_memmove((R+8),(R+0),4);
}
B52939a:{NFSU2_TR(0x52939a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B52939c:{NFSU2_TR(0x52939c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8869ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5293a2:{NFSU2_TR(0x5293a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5293a4:{NFSU2_TR(0x5293a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5293a7:{NFSU2_TR(0x5293a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293aa:{NFSU2_TR(0x5293aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5293ad:{NFSU2_TR(0x5293ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293b0:{NFSU2_TR(0x5293b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5293b3:{NFSU2_TR(0x5293b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293b6:{NFSU2_TR(0x5293b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5293b9:{NFSU2_TR(0x5293b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x887cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5293bf:{NFSU2_TR(0x5293bf);
__builtin_memmove((R+28),(R+0),4);
}
B5293c1:{NFSU2_TR(0x5293c1);
w4(R+4,u32(0x64ull));
}
B5293c6:{NFSU2_TR(0x5293c6);
__builtin_memmove((R+24),(R+8),4);
}
B5293c8:L5293c8:{c.instructions+=1;NFSU2_TR(0x5293c8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5293ca;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5293c8u);}goto L5293c8;}
}
B5293ca:L5293ca:{c.instructions+=11;NFSU2_TR(0x5293ca);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5293cc:{NFSU2_TR(0x5293cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5293d2:{NFSU2_TR(0x5293d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293d8:{NFSU2_TR(0x5293d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293de:{NFSU2_TR(0x5293de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293e4:{NFSU2_TR(0x5293e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293e7:{NFSU2_TR(0x5293e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5293e9:{NFSU2_TR(0x5293e9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5293ec:{NFSU2_TR(0x5293ec);
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
B5293ee:{NFSU2_TR(0x5293ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5293f4:{NFSU2_TR(0x5293f4);
if(r1(R+518)){{goto L529405;}}
}
B5293f6:L5293f6:{c.instructions+=2;NFSU2_TR(0x5293f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5293f7:{NFSU2_TR(0x5293f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5293fcull));
TAIL_STATIC(0x4ffc90u,4ff);
}
B5293fc:L5293fc:{c.instructions+=2;NFSU2_TR(0x5293fc);
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
B5293ff:{NFSU2_TR(0x5293ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8738ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529405:L529405:{c.instructions+=6;NFSU2_TR(0x529405);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529406:{NFSU2_TR(0x529406);
__builtin_memmove((R+0),(R+24),4);
}
B529408:{NFSU2_TR(0x529408);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529409:{NFSU2_TR(0x529409);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52940a:{NFSU2_TR(0x52940a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52940b:{NFSU2_TR(0x52940b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529410:L529410:{c.instructions+=7;NFSU2_TR(0x529410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529411:{NFSU2_TR(0x529411);
__builtin_memmove((R+20),(R+16),4);
}
B529413:{NFSU2_TR(0x529413);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B529416:{NFSU2_TR(0x529416);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B529419:{NFSU2_TR(0x529419);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52941a:{NFSU2_TR(0x52941a);
__builtin_memmove((R+24),(R+4),4);
}
B52941c:{NFSU2_TR(0x52941c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529421ull));
TAIL_STATIC(0x4ae900u,4ae);
}
B529421:L529421:{c.instructions+=2;NFSU2_TR(0x529421);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529423:{NFSU2_TR(0x529423);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529430;}}
}
B529425:L529425:{c.instructions+=2;NFSU2_TR(0x529425);
__builtin_memmove((R+4),(R+24),4);
}
B529427:{NFSU2_TR(0x529427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52942cull));
TAIL_STATIC(0x4952b0u,495);
}
B52942c:L52942c:{c.instructions+=2;NFSU2_TR(0x52942c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52942e:{NFSU2_TR(0x52942e);
if(r1(R+518)){{goto L529470;}}
}
B529430:L529430:{c.instructions+=4;NFSU2_TR(0x529430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529433:{NFSU2_TR(0x529433);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B529435:{NFSU2_TR(0x529435);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529437:{NFSU2_TR(0x529437);
if(r1(R+518)){{goto L529470;}}
}
B529439:L529439:{c.instructions+=12;NFSU2_TR(0x529439);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B52943c:{NFSU2_TR(0x52943c);
u8 U[4];
w4(U+0,u32(0x3a83126full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529441:{NFSU2_TR(0x529441);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B529445:{NFSU2_TR(0x529445);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529446:{NFSU2_TR(0x529446);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52944a:{NFSU2_TR(0x52944a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B52944d:{NFSU2_TR(0x52944d);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B529450:{NFSU2_TR(0x529450);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529451:{NFSU2_TR(0x529451);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B529455:{NFSU2_TR(0x529455);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B529458:{NFSU2_TR(0x529458);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52945c:{NFSU2_TR(0x52945c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529461ull));
TAIL_STATIC(0x43d190u,43d);
}
B529461:L529461:{c.instructions+=7;NFSU2_TR(0x529461);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B529464:{NFSU2_TR(0x529464);
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
B529466:{NFSU2_TR(0x529466);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B529469:{NFSU2_TR(0x529469);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52946a:{NFSU2_TR(0x52946a);
__builtin_memmove((R+16),(R+20),4);
}
B52946c:{NFSU2_TR(0x52946c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52946d:{NFSU2_TR(0x52946d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529470:L529470:{c.instructions+=5;NFSU2_TR(0x529470);
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
B529472:{NFSU2_TR(0x529472);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529473:{NFSU2_TR(0x529473);
__builtin_memmove((R+16),(R+20),4);
}
B529475:{NFSU2_TR(0x529475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529476:{NFSU2_TR(0x529476);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529480:L529480:{c.instructions+=7;NFSU2_TR(0x529480);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529481:{NFSU2_TR(0x529481);
__builtin_memmove((R+20),(R+16),4);
}
B529483:{NFSU2_TR(0x529483);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529484:{NFSU2_TR(0x529484);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529485:{NFSU2_TR(0x529485);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529486:{NFSU2_TR(0x529486);
__builtin_memmove((R+24),(R+4),4);
}
B529488:{NFSU2_TR(0x529488);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52948dull));
TAIL_STATIC(0x4ae900u,4ae);
}
B52948d:L52948d:{c.instructions+=2;NFSU2_TR(0x52948d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52948f:{NFSU2_TR(0x52948f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52949c;}}
}
B529491:L529491:{c.instructions+=2;NFSU2_TR(0x529491);
__builtin_memmove((R+4),(R+24),4);
}
B529493:{NFSU2_TR(0x529493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529498ull));
TAIL_STATIC(0x4952b0u,495);
}
B529498:L529498:{c.instructions+=2;NFSU2_TR(0x529498);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52949a:{NFSU2_TR(0x52949a);
if(r1(R+518)){{goto L5294b7;}}
}
B52949c:L52949c:{c.instructions+=2;NFSU2_TR(0x52949c);
w4(R+4,u32(0x81cbc0ull));
}
B5294a1:{NFSU2_TR(0x5294a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5294a6ull));
TAIL_STATIC(0x4131f0u,413);
}
B5294a6:L5294a6:{c.instructions+=6;NFSU2_TR(0x5294a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5294a8:{NFSU2_TR(0x5294a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5294ac:{NFSU2_TR(0x5294ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5294af:{NFSU2_TR(0x5294af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5294b2:{NFSU2_TR(0x5294b2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5294b5:{NFSU2_TR(0x5294b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5294b7:L5294b7:{c.instructions+=21;NFSU2_TR(0x5294b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5294ba:{NFSU2_TR(0x5294ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5294bc:{NFSU2_TR(0x5294bc);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5294bf:{NFSU2_TR(0x5294bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5294c2:{NFSU2_TR(0x5294c2);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5294c4:{NFSU2_TR(0x5294c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5294c6:{NFSU2_TR(0x5294c6);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5294c9:{NFSU2_TR(0x5294c9);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5294cc:{NFSU2_TR(0x5294cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5294ce:{NFSU2_TR(0x5294ce);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5294d1:{NFSU2_TR(0x5294d1);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5294d4:{NFSU2_TR(0x5294d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5294d6:{NFSU2_TR(0x5294d6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5294d9:{NFSU2_TR(0x5294d9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5294dc:{NFSU2_TR(0x5294dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5294de:{NFSU2_TR(0x5294de);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5294e1:{NFSU2_TR(0x5294e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5294e4:{NFSU2_TR(0x5294e4);
__builtin_memmove((R+4),gp(0x89e808),4);
}
B5294ea:{NFSU2_TR(0x5294ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5294eb:{NFSU2_TR(0x5294eb);
__builtin_memmove((R+4),gp(0x890080),4);
}
B5294f1:{NFSU2_TR(0x5294f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5294f6ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B5294f6:L5294f6:{c.instructions+=4;NFSU2_TR(0x5294f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5294f7:{NFSU2_TR(0x5294f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5294f8:{NFSU2_TR(0x5294f8);
w4(R+4,u32(0x81cbc0ull));
}
B5294fd:{NFSU2_TR(0x5294fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529502ull));
TAIL_STATIC(0x413120u,413);
}
B529502:L529502:{c.instructions+=3;NFSU2_TR(0x529502);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B529506:{NFSU2_TR(0x529506);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529509:{NFSU2_TR(0x529509);
if(r1(R+518)){{goto L529566;}}
}
B52950b:L52950b:{c.instructions+=3;NFSU2_TR(0x52950b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52950e:{NFSU2_TR(0x52950e);
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
B529510:{NFSU2_TR(0x529510);
if(r1(R+518)){{goto L52951e;}}
}
B529512:L529512:{c.instructions+=7;NFSU2_TR(0x529512);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529515:{NFSU2_TR(0x529515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529516:{NFSU2_TR(0x529516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B529518:{NFSU2_TR(0x529518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529519:{NFSU2_TR(0x529519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52951a:{NFSU2_TR(0x52951a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52951b:{NFSU2_TR(0x52951b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52951e:L52951e:{c.instructions+=3;NFSU2_TR(0x52951e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529521:{NFSU2_TR(0x529521);
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
B529523:{NFSU2_TR(0x529523);
if(r1(R+518)){{goto L529531;}}
}
B529525:L529525:{c.instructions+=7;NFSU2_TR(0x529525);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529528:{NFSU2_TR(0x529528);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529529:{NFSU2_TR(0x529529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52952b:{NFSU2_TR(0x52952b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52952c:{NFSU2_TR(0x52952c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52952d:{NFSU2_TR(0x52952d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52952e:{NFSU2_TR(0x52952e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529531:L529531:{c.instructions+=3;NFSU2_TR(0x529531);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529534:{NFSU2_TR(0x529534);
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
B529536:{NFSU2_TR(0x529536);
if(r1(R+518)){{goto L529544;}}
}
B529538:L529538:{c.instructions+=7;NFSU2_TR(0x529538);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52953b:{NFSU2_TR(0x52953b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52953c:{NFSU2_TR(0x52953c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52953e:{NFSU2_TR(0x52953e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52953f:{NFSU2_TR(0x52953f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529540:{NFSU2_TR(0x529540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529541:{NFSU2_TR(0x529541);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529544:L529544:{c.instructions+=3;NFSU2_TR(0x529544);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B529547:{NFSU2_TR(0x529547);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529549:{NFSU2_TR(0x529549);
if(r1(R+518)){{goto L529566;}}
}
B52954b:L52954b:{c.instructions+=4;NFSU2_TR(0x52954b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+8,u32(r2(U+0)));
}
B52954e:{NFSU2_TR(0x52954e);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B529554:{NFSU2_TR(0x529554);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529555:{NFSU2_TR(0x529555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52955aull));
TAIL_STATIC(0x43db50u,43d);
}
B52955a:L52955a:{c.instructions+=7;NFSU2_TR(0x52955a);
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
B52955d:{NFSU2_TR(0x52955d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52955e:{NFSU2_TR(0x52955e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B529560:{NFSU2_TR(0x529560);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529561:{NFSU2_TR(0x529561);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529562:{NFSU2_TR(0x529562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529563:{NFSU2_TR(0x529563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529566:L529566:{c.instructions+=7;NFSU2_TR(0x529566);
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
B529568:{NFSU2_TR(0x529568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529569:{NFSU2_TR(0x529569);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52956b:{NFSU2_TR(0x52956b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52956c:{NFSU2_TR(0x52956c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52956d:{NFSU2_TR(0x52956d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52956e:{NFSU2_TR(0x52956e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529580:L529580:{c.instructions+=4;NFSU2_TR(0x529580);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B529584:{NFSU2_TR(0x529584);
w4(R+0,u32(s32(s8(m1(0x8380ee)))));
}
B52958b:{NFSU2_TR(0x52958b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52958e:{NFSU2_TR(0x52958e);
if(r1(R+518)){{goto L52959c;}}
}
B529590:L529590:{c.instructions+=3;NFSU2_TR(0x529590);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B529596:{NFSU2_TR(0x529596);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529597:{NFSU2_TR(0x529597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52959cull));
TAIL_STATIC(0x458520u,458);
}
B52959c:L52959c:{c.instructions+=3;NFSU2_TR(0x52959c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5295a2:{NFSU2_TR(0x5295a2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295a4:{NFSU2_TR(0x5295a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5295a9ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B5295a9:L5295a9:{c.instructions+=1;NFSU2_TR(0x5295a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5295b0:L5295b0:{c.instructions+=5;NFSU2_TR(0x5295b0);
w4(R+0,u32(s32(s8(m1(0x8380ee)))));
}
B5295b7:{NFSU2_TR(0x5295b7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5295ba:{NFSU2_TR(0x5295ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295bb:{NFSU2_TR(0x5295bb);
__builtin_memmove((R+24),(R+4),4);
}
B5295bd:{NFSU2_TR(0x5295bd);
if(r1(R+518)){{goto L5295cb;}}
}
B5295bf:L5295bf:{c.instructions+=3;NFSU2_TR(0x5295bf);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B5295c5:{NFSU2_TR(0x5295c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295c6:{NFSU2_TR(0x5295c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5295cbull));
TAIL_STATIC(0x458520u,458);
}
B5295cb:L5295cb:{c.instructions+=5;NFSU2_TR(0x5295cb);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B5295d0:{NFSU2_TR(0x5295d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5295d3:{NFSU2_TR(0x5295d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295d4:{NFSU2_TR(0x5295d4);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B5295da:{NFSU2_TR(0x5295da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5295dfull));
TAIL_STATIC(0x5f4230u,5f4);
}
B5295df:L5295df:{c.instructions+=3;NFSU2_TR(0x5295df);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5295e3:{NFSU2_TR(0x5295e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5295e4:{NFSU2_TR(0x5295e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5295f0:L5295f0:{c.instructions+=9;NFSU2_TR(0x5295f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295f1:{NFSU2_TR(0x5295f1);
__builtin_memmove((R+20),(R+16),4);
}
B5295f3:{NFSU2_TR(0x5295f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295f4:{NFSU2_TR(0x5295f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5295f7:{NFSU2_TR(0x5295f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295f8:{NFSU2_TR(0x5295f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295f9:{NFSU2_TR(0x5295f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5295fa:{NFSU2_TR(0x5295fa);
__builtin_memmove((R+28),(R+4),4);
}
B5295fc:{NFSU2_TR(0x5295fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529601ull));
TAIL_STATIC(0x514cb0u,514);
}
B529601:L529601:{c.instructions+=2;NFSU2_TR(0x529601);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529603:{NFSU2_TR(0x529603);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529664;}}
}
B529605:L529605:{c.instructions+=3;NFSU2_TR(0x529605);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52960b:{NFSU2_TR(0x52960b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529610:{NFSU2_TR(0x529610);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529664;}}
}
B529612:L529612:{c.instructions+=7;NFSU2_TR(0x529612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B529615:{NFSU2_TR(0x529615);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529616:{NFSU2_TR(0x529616);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52961c:{NFSU2_TR(0x52961c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B52961f:{NFSU2_TR(0x52961f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529621:{NFSU2_TR(0x529621);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529623:{NFSU2_TR(0x529623);
if(r1(R+518)){{goto L529664;}}
}
B529625:L529625:{c.instructions+=14;NFSU2_TR(0x529625);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B529628:{NFSU2_TR(0x529628);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52962b:{NFSU2_TR(0x52962b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52962e:{NFSU2_TR(0x52962e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B529631:{NFSU2_TR(0x529631);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529634:{NFSU2_TR(0x529634);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529637:{NFSU2_TR(0x529637);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52963a:{NFSU2_TR(0x52963a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B52963c:{NFSU2_TR(0x52963c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B529642:{NFSU2_TR(0x529642);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B529649:{NFSU2_TR(0x529649);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B52964c:{NFSU2_TR(0x52964c);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B529652:{NFSU2_TR(0x529652);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529653:{NFSU2_TR(0x529653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529658ull));
TAIL_STATIC(0x43db50u,43d);
}
B529658:L529658:{c.instructions+=7;NFSU2_TR(0x529658);
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
B52965b:{NFSU2_TR(0x52965b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52965c:{NFSU2_TR(0x52965c);
__builtin_memmove((R+0),(R+24),4);
}
B52965e:{NFSU2_TR(0x52965e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52965f:{NFSU2_TR(0x52965f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529660:{NFSU2_TR(0x529660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529661:{NFSU2_TR(0x529661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529664:L529664:{c.instructions+=6;NFSU2_TR(0x529664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529665:{NFSU2_TR(0x529665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529666:{NFSU2_TR(0x529666);
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
B529668:{NFSU2_TR(0x529668);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529669:{NFSU2_TR(0x529669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52966a:{NFSU2_TR(0x52966a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529670:L529670:{c.instructions+=9;NFSU2_TR(0x529670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529671:{NFSU2_TR(0x529671);
__builtin_memmove((R+20),(R+16),4);
}
B529673:{NFSU2_TR(0x529673);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529674:{NFSU2_TR(0x529674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B529677:{NFSU2_TR(0x529677);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529678:{NFSU2_TR(0x529678);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529679:{NFSU2_TR(0x529679);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52967a:{NFSU2_TR(0x52967a);
__builtin_memmove((R+28),(R+4),4);
}
B52967c:{NFSU2_TR(0x52967c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529681ull));
TAIL_STATIC(0x514cb0u,514);
}
B529681:L529681:{c.instructions+=2;NFSU2_TR(0x529681);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529683:{NFSU2_TR(0x529683);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5296ed;}}
}
B529685:L529685:{c.instructions+=3;NFSU2_TR(0x529685);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52968b:{NFSU2_TR(0x52968b);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x100ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529690:{NFSU2_TR(0x529690);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5296ed;}}
}
B529692:L529692:{c.instructions+=7;NFSU2_TR(0x529692);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B529695:{NFSU2_TR(0x529695);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529696:{NFSU2_TR(0x529696);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52969c:{NFSU2_TR(0x52969c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B52969f:{NFSU2_TR(0x52969f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5296a1:{NFSU2_TR(0x5296a1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5296a3:{NFSU2_TR(0x5296a3);
if(r1(R+518)){{goto L5296ed;}}
}
B5296a5:L5296a5:{c.instructions+=17;NFSU2_TR(0x5296a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5296a8:{NFSU2_TR(0x5296a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5296ab:{NFSU2_TR(0x5296ab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5296ae:{NFSU2_TR(0x5296ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5296b1:{NFSU2_TR(0x5296b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5296b4:{NFSU2_TR(0x5296b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5296b7:{NFSU2_TR(0x5296b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5296ba:{NFSU2_TR(0x5296ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5296bd:{NFSU2_TR(0x5296bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5296c0:{NFSU2_TR(0x5296c0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5296c2:{NFSU2_TR(0x5296c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5296c5:{NFSU2_TR(0x5296c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1404ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5296cb:{NFSU2_TR(0x5296cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x140cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5296d2:{NFSU2_TR(0x5296d2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B5296d5:{NFSU2_TR(0x5296d5);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B5296db:{NFSU2_TR(0x5296db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5296dc:{NFSU2_TR(0x5296dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5296e1ull));
TAIL_STATIC(0x43db50u,43d);
}
B5296e1:L5296e1:{c.instructions+=7;NFSU2_TR(0x5296e1);
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
B5296e4:{NFSU2_TR(0x5296e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5296e5:{NFSU2_TR(0x5296e5);
__builtin_memmove((R+0),(R+24),4);
}
B5296e7:{NFSU2_TR(0x5296e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5296e8:{NFSU2_TR(0x5296e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5296e9:{NFSU2_TR(0x5296e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5296ea:{NFSU2_TR(0x5296ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5296ed:L5296ed:{c.instructions+=6;NFSU2_TR(0x5296ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5296ee:{NFSU2_TR(0x5296ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5296ef:{NFSU2_TR(0x5296ef);
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
B5296f1:{NFSU2_TR(0x5296f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5296f2:{NFSU2_TR(0x5296f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5296f3:{NFSU2_TR(0x5296f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529700:L529700:{c.instructions+=6;NFSU2_TR(0x529700);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529701:{NFSU2_TR(0x529701);
__builtin_memmove((R+24),(R+4),4);
}
B529703:{NFSU2_TR(0x529703);
__builtin_memmove((R+4),gp(0x8900ac),4);
}
B529709:{NFSU2_TR(0x529709);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52970b:{NFSU2_TR(0x52970b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52970d:{NFSU2_TR(0x52970d);
if(r1(R+518)){{goto L529712;}}
}
B52970f:L52970f:{c.instructions+=1;NFSU2_TR(0x52970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529712:L529712:{c.instructions+=4;NFSU2_TR(0x529712);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B529718:{NFSU2_TR(0x529718);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529719:{NFSU2_TR(0x529719);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52971b:{NFSU2_TR(0x52971b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529720ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B529720:L529720:{c.instructions+=5;NFSU2_TR(0x529720);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B529727:{NFSU2_TR(0x529727);
w4(R+0,u32(s32(s8(m1(0x838119)))));
}
B52972e:{NFSU2_TR(0x52972e);
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
B529731:{NFSU2_TR(0x529731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529732:{NFSU2_TR(0x529732);
if(r1(R+518)){{goto L529740;}}
}
B529734:L529734:{c.instructions+=3;NFSU2_TR(0x529734);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B52973a:{NFSU2_TR(0x52973a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52973b:{NFSU2_TR(0x52973b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529740ull));
TAIL_STATIC(0x458520u,458);
}
B529740:L529740:{c.instructions+=1;NFSU2_TR(0x529740);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529750:L529750:{c.instructions+=11;NFSU2_TR(0x529750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529751:{NFSU2_TR(0x529751);
__builtin_memmove((R+20),(R+16),4);
}
B529753:{NFSU2_TR(0x529753);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B529756:{NFSU2_TR(0x529756);
__builtin_memmove((R+0),gp(0x838450),4);
}
B52975b:{NFSU2_TR(0x52975b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52975c:{NFSU2_TR(0x52975c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52975d:{NFSU2_TR(0x52975d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52975e:{NFSU2_TR(0x52975e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529760:{NFSU2_TR(0x529760);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529762:{NFSU2_TR(0x529762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529765:{NFSU2_TR(0x529765);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5297c7;}}
}
B529767:L529767:{c.instructions+=2;NFSU2_TR(0x529767);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B529769:{NFSU2_TR(0x529769);
__builtin_memmove((R+16),(R+16),4);
}
B529770:L529770:{c.instructions+=2;NFSU2_TR(0x529770);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529772:{NFSU2_TR(0x529772);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529782;}}
}
B529774:L529774:{c.instructions+=2;NFSU2_TR(0x529774);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529776:{NFSU2_TR(0x529776);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529782;}}
}
B529778:L529778:{c.instructions+=3;NFSU2_TR(0x529778);
__builtin_memmove((R+0),gp(0x838454),4);
}
B52977d:{NFSU2_TR(0x52977d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B529780:{NFSU2_TR(0x529780);
{goto L529784;}
}
B529782:L529782:{c.instructions+=1;NFSU2_TR(0x529782);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B529784:L529784:{c.instructions+=2;NFSU2_TR(0x529784);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B529788:{NFSU2_TR(0x529788);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5297b7;}}
}
B52978a:L52978a:{c.instructions+=4;NFSU2_TR(0x52978a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52978d:{NFSU2_TR(0x52978d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B529790:{NFSU2_TR(0x529790);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529792:{NFSU2_TR(0x529792);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52979a;}}
}
B529794:L529794:{c.instructions+=1;NFSU2_TR(0x529794);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52979a:L52979a:{c.instructions+=4;NFSU2_TR(0x52979a);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52979d:{NFSU2_TR(0x52979d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B52979f:{NFSU2_TR(0x52979f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5297a2:{NFSU2_TR(0x5297a2);
if(r1(R+514)){{goto L5297b7;}}
}
B5297a4:L5297a4:{c.instructions+=2;NFSU2_TR(0x5297a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5297a5:{NFSU2_TR(0x5297a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5297aaull));
TAIL_STATIC(0x514cb0u,514);
}
B5297aa:L5297aa:{c.instructions+=2;NFSU2_TR(0x5297aa);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5297ac:{NFSU2_TR(0x5297ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5297b7;}}
}
B5297ae:L5297ae:{c.instructions+=3;NFSU2_TR(0x5297ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5297b1:{NFSU2_TR(0x5297b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5297b2:{NFSU2_TR(0x5297b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5297b7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B5297b7:L5297b7:{c.instructions+=6;NFSU2_TR(0x5297b7);
__builtin_memmove((R+0),gp(0x838450),4);
}
B5297bc:{NFSU2_TR(0x5297bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5297bf:{NFSU2_TR(0x5297bf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5297c0:{NFSU2_TR(0x5297c0);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x14ull))));
}
B5297c3:{NFSU2_TR(0x5297c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5297c5:{NFSU2_TR(0x5297c5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529770u);}goto L529770;}}
}
B5297c7:L5297c7:{c.instructions+=4;NFSU2_TR(0x5297c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5297cd:{NFSU2_TR(0x5297cd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5297cf:{NFSU2_TR(0x5297cf);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5297d1:{NFSU2_TR(0x5297d1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529857;}}
}
B5297d7:L5297d7:{c.instructions+=3;NFSU2_TR(0x5297d7);
__builtin_memmove((R+24),(R+4),4);
}
B5297d9:{NFSU2_TR(0x5297d9);
w4(R+12,u32(0x1ull));
}
B5297de:{NFSU2_TR(0x5297de);
__builtin_memmove((R+28),(R+28),4);
}
B5297e0:L5297e0:{c.instructions+=2;NFSU2_TR(0x5297e0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5297e2:{NFSU2_TR(0x5297e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5297ec;}}
}
B5297e4:L5297e4:{c.instructions+=2;NFSU2_TR(0x5297e4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5297e6:{NFSU2_TR(0x5297e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5297ec;}}
}
B5297e8:L5297e8:{c.instructions+=2;NFSU2_TR(0x5297e8);
__builtin_memmove((R+4),(R+24),4);
}
B5297ea:{NFSU2_TR(0x5297ea);
{goto L5297ee;}
}
B5297ec:L5297ec:{c.instructions+=1;NFSU2_TR(0x5297ec);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5297ee:L5297ee:{c.instructions+=3;NFSU2_TR(0x5297ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5297f0:{NFSU2_TR(0x5297f0);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5297f3:{NFSU2_TR(0x5297f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5297fb;}}
}
B5297f5:L5297f5:{c.instructions+=2;NFSU2_TR(0x5297f5);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5297f9:{NFSU2_TR(0x5297f9);
if(r1(R+518)){{goto L52980c;}}
}
B5297fb:L5297fb:{c.instructions+=4;NFSU2_TR(0x5297fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5297fc:{NFSU2_TR(0x5297fc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5297ff:{NFSU2_TR(0x5297ff);
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
B529801:{NFSU2_TR(0x529801);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5297e0u);}goto L5297e0;}}
}
B529803:L529803:{c.instructions+=6;NFSU2_TR(0x529803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529804:{NFSU2_TR(0x529804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529805:{NFSU2_TR(0x529805);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529806:{NFSU2_TR(0x529806);
__builtin_memmove((R+16),(R+20),4);
}
B529808:{NFSU2_TR(0x529808);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529809:{NFSU2_TR(0x529809);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52980c:L52980c:{c.instructions+=3;NFSU2_TR(0x52980c);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B529811:{NFSU2_TR(0x529811);
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
B529813:{NFSU2_TR(0x529813);
if(r1(R+518)){{goto L529857;}}
}
B529815:L529815:{c.instructions+=2;NFSU2_TR(0x529815);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x4ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B529818:{NFSU2_TR(0x529818);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529857;}}
}
B52981a:L52981a:{c.instructions+=2;NFSU2_TR(0x52981a);
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
B529821:{NFSU2_TR(0x529821);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529857;}}
}
B529823:L529823:{c.instructions+=3;NFSU2_TR(0x529823);
__builtin_memmove((R+0),gp(0x863444),4);
}
B529828:{NFSU2_TR(0x529828);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52982a:{NFSU2_TR(0x52982a);
if(r1(R+518)){{goto L529835;}}
}
B52982c:L52982c:{c.instructions+=3;NFSU2_TR(0x52982c);
__builtin_memmove((R+0),gp(0x86344c),4);
}
B529831:{NFSU2_TR(0x529831);
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
B529833:{NFSU2_TR(0x529833);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529857;}}
}
B529835:L529835:{c.instructions+=2;NFSU2_TR(0x529835);
u8 U[14];
__builtin_memmove((U+6),gp(0x850078),4);
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
B52983b:{NFSU2_TR(0x52983b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529857;}}
}
B52983d:L52983d:{c.instructions+=3;NFSU2_TR(0x52983d);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B529842:{NFSU2_TR(0x529842);
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
B529844:{NFSU2_TR(0x529844);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529857;}}
}
B529846:L529846:{c.instructions+=3;NFSU2_TR(0x529846);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529849:{NFSU2_TR(0x529849);
__builtin_memmove((R+4),(R+24),4);
}
B52984b:{NFSU2_TR(0x52984b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529850ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529700u);}goto L529700;}
}
B529850:L529850:{c.instructions+=2;NFSU2_TR(0x529850);
__builtin_memmove((R+4),(R+24),4);
}
B529852:{NFSU2_TR(0x529852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529857ull));
TAIL_STATIC(0x514c70u,514);
}
B529857:L529857:{c.instructions+=6;NFSU2_TR(0x529857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529858:{NFSU2_TR(0x529858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529859:{NFSU2_TR(0x529859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52985a:{NFSU2_TR(0x52985a);
__builtin_memmove((R+16),(R+20),4);
}
B52985c:{NFSU2_TR(0x52985c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52985d:{NFSU2_TR(0x52985d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529860:L529860:{c.instructions+=8;NFSU2_TR(0x529860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529861:{NFSU2_TR(0x529861);
__builtin_memmove((R+0),gp(0x838450),4);
}
B529866:{NFSU2_TR(0x529866);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529867:{NFSU2_TR(0x529867);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529868:{NFSU2_TR(0x529868);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52986a:{NFSU2_TR(0x52986a);
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
B52986c:{NFSU2_TR(0x52986c);
__builtin_memmove((R+12),(R+4),4);
}
B52986e:{NFSU2_TR(0x52986e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52990d;}}
}
B529874:L529874:{c.instructions+=5;NFSU2_TR(0x529874);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529875:{NFSU2_TR(0x529875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529876:{NFSU2_TR(0x529876);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529878:{NFSU2_TR(0x529878);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52987c:{NFSU2_TR(0x52987c);
__builtin_memmove((R+16),(R+16),4);
}
B529880:L529880:{c.instructions+=2;NFSU2_TR(0x529880);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529882:{NFSU2_TR(0x529882);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529891;}}
}
B529884:L529884:{c.instructions+=2;NFSU2_TR(0x529884);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529886:{NFSU2_TR(0x529886);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529891;}}
}
B529888:L529888:{c.instructions+=3;NFSU2_TR(0x529888);
__builtin_memmove((R+0),gp(0x838454),4);
}
B52988d:{NFSU2_TR(0x52988d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B52988f:{NFSU2_TR(0x52988f);
{goto L529893;}
}
B529891:L529891:{c.instructions+=1;NFSU2_TR(0x529891);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529893:L529893:{c.instructions+=3;NFSU2_TR(0x529893);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B529896:{NFSU2_TR(0x529896);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529898:{NFSU2_TR(0x529898);
if(r1(R+518)){{goto L5298bf;}}
}
B52989a:L52989a:{c.instructions+=2;NFSU2_TR(0x52989a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52989c:{NFSU2_TR(0x52989c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5298f2;}}
}
B52989e:L52989e:{c.instructions+=5;NFSU2_TR(0x52989e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5298a2:{NFSU2_TR(0x5298a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5298a5:{NFSU2_TR(0x5298a5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5298a7:{NFSU2_TR(0x5298a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5298aa:{NFSU2_TR(0x5298aa);
__builtin_memmove((R+12),(R+12),4);
}
B5298b0:L5298b0:{c.instructions+=2;NFSU2_TR(0x5298b0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5298b2:{NFSU2_TR(0x5298b2);
if(r1(R+518)){{goto L5298bf;}}
}
B5298b4:L5298b4:{c.instructions+=4;NFSU2_TR(0x5298b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5298b5:{NFSU2_TR(0x5298b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5298b8:{NFSU2_TR(0x5298b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5298bb:{NFSU2_TR(0x5298bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5298b0u);}goto L5298b0;}}
}
B5298bd:L5298bd:{c.instructions+=1;NFSU2_TR(0x5298bd);
{goto L5298f2;}
}
B5298bf:L5298bf:{c.instructions+=4;NFSU2_TR(0x5298bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5298c5:{NFSU2_TR(0x5298c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5298c7:{NFSU2_TR(0x5298c7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5298c9:{NFSU2_TR(0x5298c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5298ea;}}
}
B5298cb:L5298cb:{c.instructions+=2;NFSU2_TR(0x5298cb);
__builtin_memmove((R+24),(R+12),4);
}
B5298cd:{NFSU2_TR(0x5298cd);
__builtin_memmove((R+4),(R+4),4);
}
B5298d0:L5298d0:{c.instructions+=2;NFSU2_TR(0x5298d0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5298d2:{NFSU2_TR(0x5298d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5298dc;}}
}
B5298d4:L5298d4:{c.instructions+=2;NFSU2_TR(0x5298d4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5298d6:{NFSU2_TR(0x5298d6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5298dc;}}
}
B5298d8:L5298d8:{c.instructions+=2;NFSU2_TR(0x5298d8);
__builtin_memmove((R+4),(R+24),4);
}
B5298da:{NFSU2_TR(0x5298da);
{goto L5298de;}
}
B5298dc:L5298dc:{c.instructions+=1;NFSU2_TR(0x5298dc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5298de:L5298de:{c.instructions+=2;NFSU2_TR(0x5298de);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5298e0:{NFSU2_TR(0x5298e0);
if(r1(R+518)){{goto L5298f2;}}
}
B5298e2:L5298e2:{c.instructions+=4;NFSU2_TR(0x5298e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5298e3:{NFSU2_TR(0x5298e3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5298e6:{NFSU2_TR(0x5298e6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5298e8:{NFSU2_TR(0x5298e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5298d0u);}goto L5298d0;}}
}
B5298ea:L5298ea:{c.instructions+=3;NFSU2_TR(0x5298ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5298eb:{NFSU2_TR(0x5298eb);
__builtin_memmove((R+4),(R+12),4);
}
B5298ed:{NFSU2_TR(0x5298ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5298f2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B5298f2:L5298f2:{c.instructions+=7;NFSU2_TR(0x5298f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5298f6:{NFSU2_TR(0x5298f6);
__builtin_memmove((R+0),gp(0x838450),4);
}
B5298fb:{NFSU2_TR(0x5298fb);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5298fc:{NFSU2_TR(0x5298fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B5298ff:{NFSU2_TR(0x5298ff);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B529901:{NFSU2_TR(0x529901);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529905:{NFSU2_TR(0x529905);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529880u);}goto L529880;}}
}
B52990b:L52990b:{c.instructions+=2;NFSU2_TR(0x52990b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52990c:{NFSU2_TR(0x52990c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52990d:L52990d:{c.instructions+=4;NFSU2_TR(0x52990d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52990e:{NFSU2_TR(0x52990e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52990f:{NFSU2_TR(0x52990f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529910:{NFSU2_TR(0x529910);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529920:L529920:{c.instructions+=8;NFSU2_TR(0x529920);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529921:{NFSU2_TR(0x529921);
__builtin_memmove((R+0),gp(0x838450),4);
}
B529926:{NFSU2_TR(0x529926);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529927:{NFSU2_TR(0x529927);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529928:{NFSU2_TR(0x529928);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B52992a:{NFSU2_TR(0x52992a);
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
B52992c:{NFSU2_TR(0x52992c);
__builtin_memmove((R+12),(R+4),4);
}
B52992e:{NFSU2_TR(0x52992e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5299a9;}}
}
B529930:L529930:{c.instructions+=4;NFSU2_TR(0x529930);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529931:{NFSU2_TR(0x529931);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529932:{NFSU2_TR(0x529932);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529934:{NFSU2_TR(0x529934);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529938:L529938:{c.instructions+=2;NFSU2_TR(0x529938);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B52993a:{NFSU2_TR(0x52993a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529949;}}
}
B52993c:L52993c:{c.instructions+=2;NFSU2_TR(0x52993c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B52993e:{NFSU2_TR(0x52993e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529949;}}
}
B529940:L529940:{c.instructions+=3;NFSU2_TR(0x529940);
__builtin_memmove((R+0),gp(0x838454),4);
}
B529945:{NFSU2_TR(0x529945);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B529947:{NFSU2_TR(0x529947);
{goto L52994b;}
}
B529949:L529949:{c.instructions+=1;NFSU2_TR(0x529949);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B52994b:L52994b:{c.instructions+=4;NFSU2_TR(0x52994b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52994f:{NFSU2_TR(0x52994f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529950:{NFSU2_TR(0x529950);
__builtin_memmove((R+4),(R+28),4);
}
B529952:{NFSU2_TR(0x529952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529957ull));
TAIL_STATIC(0x501370u,501);
}
B529957:L529957:{c.instructions+=2;NFSU2_TR(0x529957);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529959:{NFSU2_TR(0x529959);
if(r1(R+518)){{goto L529992;}}
}
B52995b:L52995b:{c.instructions+=4;NFSU2_TR(0x52995b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B529961:{NFSU2_TR(0x529961);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529963:{NFSU2_TR(0x529963);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529965:{NFSU2_TR(0x529965);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52998a;}}
}
B529967:L529967:{c.instructions+=2;NFSU2_TR(0x529967);
__builtin_memmove((R+24),(R+12),4);
}
B529969:{NFSU2_TR(0x529969);
__builtin_memmove((R+16),(R+16),4);
}
B529970:L529970:{c.instructions+=2;NFSU2_TR(0x529970);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529972:{NFSU2_TR(0x529972);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52997c;}}
}
B529974:L529974:{c.instructions+=2;NFSU2_TR(0x529974);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529976:{NFSU2_TR(0x529976);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52997c;}}
}
B529978:L529978:{c.instructions+=2;NFSU2_TR(0x529978);
__builtin_memmove((R+4),(R+24),4);
}
B52997a:{NFSU2_TR(0x52997a);
{goto L52997e;}
}
B52997c:L52997c:{c.instructions+=1;NFSU2_TR(0x52997c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B52997e:L52997e:{c.instructions+=2;NFSU2_TR(0x52997e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529980:{NFSU2_TR(0x529980);
if(r1(R+518)){{goto L529992;}}
}
B529982:L529982:{c.instructions+=4;NFSU2_TR(0x529982);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529983:{NFSU2_TR(0x529983);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B529986:{NFSU2_TR(0x529986);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529988:{NFSU2_TR(0x529988);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529970u);}goto L529970;}}
}
B52998a:L52998a:{c.instructions+=3;NFSU2_TR(0x52998a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52998b:{NFSU2_TR(0x52998b);
__builtin_memmove((R+4),(R+12),4);
}
B52998d:{NFSU2_TR(0x52998d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529992ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B529992:L529992:{c.instructions+=7;NFSU2_TR(0x529992);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B529996:{NFSU2_TR(0x529996);
__builtin_memmove((R+0),gp(0x838450),4);
}
B52999b:{NFSU2_TR(0x52999b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B52999c:{NFSU2_TR(0x52999c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B52999f:{NFSU2_TR(0x52999f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5299a1:{NFSU2_TR(0x5299a1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5299a5:{NFSU2_TR(0x5299a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529938u);}goto L529938;}}
}
B5299a7:L5299a7:{c.instructions+=2;NFSU2_TR(0x5299a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5299a8:{NFSU2_TR(0x5299a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5299a9:L5299a9:{c.instructions+=4;NFSU2_TR(0x5299a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5299aa:{NFSU2_TR(0x5299aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5299ab:{NFSU2_TR(0x5299ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5299ac:{NFSU2_TR(0x5299ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5299b0:L5299b0:{c.instructions+=8;NFSU2_TR(0x5299b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5299b1:{NFSU2_TR(0x5299b1);
__builtin_memmove((R+0),gp(0x838450),4);
}
B5299b6:{NFSU2_TR(0x5299b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5299b7:{NFSU2_TR(0x5299b7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5299b9:{NFSU2_TR(0x5299b9);
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
B5299bb:{NFSU2_TR(0x5299bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5299bc:{NFSU2_TR(0x5299bc);
__builtin_memmove((R+20),(R+4),4);
}
B5299be:{NFSU2_TR(0x5299be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529a31;}}
}
B5299c0:L5299c0:{c.instructions+=4;NFSU2_TR(0x5299c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5299c1:{NFSU2_TR(0x5299c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5299c2:{NFSU2_TR(0x5299c2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5299c4:{NFSU2_TR(0x5299c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5299c8:L5299c8:{c.instructions+=2;NFSU2_TR(0x5299c8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5299ca:{NFSU2_TR(0x5299ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5299d9;}}
}
B5299cc:L5299cc:{c.instructions+=2;NFSU2_TR(0x5299cc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5299ce:{NFSU2_TR(0x5299ce);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5299d9;}}
}
B5299d0:L5299d0:{c.instructions+=3;NFSU2_TR(0x5299d0);
__builtin_memmove((R+0),gp(0x838454),4);
}
B5299d5:{NFSU2_TR(0x5299d5);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B5299d7:{NFSU2_TR(0x5299d7);
{goto L5299db;}
}
B5299d9:L5299d9:{c.instructions+=1;NFSU2_TR(0x5299d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5299db:L5299db:{c.instructions+=2;NFSU2_TR(0x5299db);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xeull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5299df:{NFSU2_TR(0x5299df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529a1a;}}
}
B5299e1:L5299e1:{c.instructions+=3;NFSU2_TR(0x5299e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5299e5:{NFSU2_TR(0x5299e5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5299e8:{NFSU2_TR(0x5299e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529a1a;}}
}
B5299ea:L5299ea:{c.instructions+=4;NFSU2_TR(0x5299ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5299f0:{NFSU2_TR(0x5299f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5299f2:{NFSU2_TR(0x5299f2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5299f4:{NFSU2_TR(0x5299f4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529a12;}}
}
B5299f6:L5299f6:{c.instructions+=1;NFSU2_TR(0x5299f6);
__builtin_memmove((R+24),(R+20),4);
}
B5299f8:L5299f8:{c.instructions+=2;NFSU2_TR(0x5299f8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5299fa:{NFSU2_TR(0x5299fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529a04;}}
}
B5299fc:L5299fc:{c.instructions+=2;NFSU2_TR(0x5299fc);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5299fe:{NFSU2_TR(0x5299fe);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529a04;}}
}
B529a00:L529a00:{c.instructions+=2;NFSU2_TR(0x529a00);
__builtin_memmove((R+4),(R+24),4);
}
B529a02:{NFSU2_TR(0x529a02);
{goto L529a06;}
}
B529a04:L529a04:{c.instructions+=1;NFSU2_TR(0x529a04);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B529a06:L529a06:{c.instructions+=2;NFSU2_TR(0x529a06);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529a08:{NFSU2_TR(0x529a08);
if(r1(R+518)){{goto L529a1a;}}
}
B529a0a:L529a0a:{c.instructions+=4;NFSU2_TR(0x529a0a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529a0b:{NFSU2_TR(0x529a0b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B529a0e:{NFSU2_TR(0x529a0e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529a10:{NFSU2_TR(0x529a10);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5299f8u);}goto L5299f8;}}
}
B529a12:L529a12:{c.instructions+=3;NFSU2_TR(0x529a12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529a13:{NFSU2_TR(0x529a13);
__builtin_memmove((R+4),(R+20),4);
}
B529a15:{NFSU2_TR(0x529a15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529a1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B529a1a:L529a1a:{c.instructions+=7;NFSU2_TR(0x529a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B529a1e:{NFSU2_TR(0x529a1e);
__builtin_memmove((R+0),gp(0x838450),4);
}
B529a23:{NFSU2_TR(0x529a23);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B529a24:{NFSU2_TR(0x529a24);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B529a27:{NFSU2_TR(0x529a27);
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
B529a29:{NFSU2_TR(0x529a29);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529a2d:{NFSU2_TR(0x529a2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5299c8u);}goto L5299c8;}}
}
B529a2f:L529a2f:{c.instructions+=2;NFSU2_TR(0x529a2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529a30:{NFSU2_TR(0x529a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529a31:L529a31:{c.instructions+=4;NFSU2_TR(0x529a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529a32:{NFSU2_TR(0x529a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529a33:{NFSU2_TR(0x529a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529a34:{NFSU2_TR(0x529a34);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529a40:L529a40:{c.instructions+=9;NFSU2_TR(0x529a40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529a41:{NFSU2_TR(0x529a41);
__builtin_memmove((R+20),(R+16),4);
}
B529a43:{NFSU2_TR(0x529a43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B529a46:{NFSU2_TR(0x529a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529a49:{NFSU2_TR(0x529a49);
__builtin_memmove((R+4),gp(0x838450),4);
}
B529a4f:{NFSU2_TR(0x529a4f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529a51:{NFSU2_TR(0x529a51);
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
B529a53:{NFSU2_TR(0x529a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529a56:{NFSU2_TR(0x529a56);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529b4a;}}
}
B529a5c:L529a5c:{c.instructions+=7;NFSU2_TR(0x529a5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529a5d:{NFSU2_TR(0x529a5d);
__builtin_memmove((R+12),gp(0x86283c),4);
}
B529a63:{NFSU2_TR(0x529a63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529a64:{NFSU2_TR(0x529a64);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B529a66:{NFSU2_TR(0x529a66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529a67:{NFSU2_TR(0x529a67);
__builtin_memmove((R+28),gp(0x838408),4);
}
B529a6d:{NFSU2_TR(0x529a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529a70:L529a70:{c.instructions+=2;NFSU2_TR(0x529a70);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529a72:{NFSU2_TR(0x529a72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529a81;}}
}
B529a74:L529a74:{c.instructions+=2;NFSU2_TR(0x529a74);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529a76:{NFSU2_TR(0x529a76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529a81;}}
}
B529a78:L529a78:{c.instructions+=3;NFSU2_TR(0x529a78);
__builtin_memmove((R+0),gp(0x838454),4);
}
B529a7d:{NFSU2_TR(0x529a7d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B529a7f:{NFSU2_TR(0x529a7f);
{goto L529a83;}
}
B529a81:L529a81:{c.instructions+=1;NFSU2_TR(0x529a81);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B529a83:L529a83:{c.instructions+=2;NFSU2_TR(0x529a83);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B529a87:{NFSU2_TR(0x529a87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529b29;}}
}
B529a8d:L529a8d:{c.instructions+=2;NFSU2_TR(0x529a8d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529a8f:{NFSU2_TR(0x529a8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529a92:L529a92:{c.instructions+=3;NFSU2_TR(0x529a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B529a95:{NFSU2_TR(0x529a95);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529a97:{NFSU2_TR(0x529a97);
if(r1(R+518)){{goto L529aa7;}}
}
B529a99:L529a99:{c.instructions+=4;NFSU2_TR(0x529a99);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529a9a:{NFSU2_TR(0x529a9a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B529a9d:{NFSU2_TR(0x529a9d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529aa0:{NFSU2_TR(0x529aa0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529a92u);}goto L529a92;}}
}
B529aa2:L529aa2:{c.instructions+=1;NFSU2_TR(0x529aa2);
{goto L529b29;}
}
B529aa7:L529aa7:{c.instructions+=3;NFSU2_TR(0x529aa7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529aa9:{NFSU2_TR(0x529aa9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529aab:{NFSU2_TR(0x529aab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529b29;}}
}
B529aad:L529aad:{c.instructions+=2;NFSU2_TR(0x529aad);
__builtin_memmove((R+4),gp(0x83840c),4);
}
B529ab3:{NFSU2_TR(0x529ab3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2cull))));
}
B529ab6:L529ab6:{c.instructions+=2;NFSU2_TR(0x529ab6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529ab8:{NFSU2_TR(0x529ab8);
if(r1(R+518)){{goto L529ac4;}}
}
B529aba:L529aba:{c.instructions+=4;NFSU2_TR(0x529aba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529abb:{NFSU2_TR(0x529abb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B529abe:{NFSU2_TR(0x529abe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529ac0:{NFSU2_TR(0x529ac0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529ab6u);}goto L529ab6;}}
}
B529ac2:L529ac2:{c.instructions+=1;NFSU2_TR(0x529ac2);
{goto L529b29;}
}
B529ac4:L529ac4:{c.instructions+=5;NFSU2_TR(0x529ac4);
__builtin_memmove((R+8),gp(0x83840c),4);
}
B529aca:{NFSU2_TR(0x529aca);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B529acd:{NFSU2_TR(0x529acd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B529acf:{NFSU2_TR(0x529acf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529ad1:{NFSU2_TR(0x529ad1);
if(r1(R+518)){{goto L529b29;}}
}
B529ad3:L529ad3:{c.instructions+=4;NFSU2_TR(0x529ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529ad6:{NFSU2_TR(0x529ad6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529ad8:{NFSU2_TR(0x529ad8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529ada:{NFSU2_TR(0x529ada);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529b29;}}
}
B529adc:L529adc:{c.instructions+=1;NFSU2_TR(0x529adc);
__builtin_memmove((R+16),(R+16),4);
}
B529ae0:L529ae0:{c.instructions+=2;NFSU2_TR(0x529ae0);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B529ae7:{NFSU2_TR(0x529ae7);
if(r1(R+518)){{goto L529af0;}}
}
B529ae9:L529ae9:{c.instructions+=3;NFSU2_TR(0x529ae9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529aea:{NFSU2_TR(0x529aea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529aec:{NFSU2_TR(0x529aec);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529ae0u);}goto L529ae0;}}
}
B529aee:L529aee:{c.instructions+=1;NFSU2_TR(0x529aee);
{goto L529b29;}
}
B529af0:L529af0:{c.instructions+=3;NFSU2_TR(0x529af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B529af7:{NFSU2_TR(0x529af7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529af9:{NFSU2_TR(0x529af9);
if(r1(R+518)){{goto L529b29;}}
}
B529afb:L529afb:{c.instructions+=2;NFSU2_TR(0x529afb);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B529aff:{NFSU2_TR(0x529aff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529b29;}}
}
B529b01:L529b01:{c.instructions+=2;NFSU2_TR(0x529b01);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B529b05:{NFSU2_TR(0x529b05);
if(r1(R+518)){{goto L529b29;}}
}
B529b07:L529b07:{c.instructions+=3;NFSU2_TR(0x529b07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529b0a:{NFSU2_TR(0x529b0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b0b:{NFSU2_TR(0x529b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529b10ull));
TAIL_STATIC(0x514cb0u,514);
}
B529b10:L529b10:{c.instructions+=2;NFSU2_TR(0x529b10);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529b12:{NFSU2_TR(0x529b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529b29;}}
}
B529b14:L529b14:{c.instructions+=3;NFSU2_TR(0x529b14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529b17:{NFSU2_TR(0x529b17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b18:{NFSU2_TR(0x529b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529b1dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B529b1d:L529b1d:{c.instructions+=2;NFSU2_TR(0x529b1d);
__builtin_memmove((R+12),gp(0x86283c),4);
}
B529b23:{NFSU2_TR(0x529b23);
__builtin_memmove((R+28),gp(0x838408),4);
}
B529b29:L529b29:{c.instructions+=9;NFSU2_TR(0x529b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529b2c:{NFSU2_TR(0x529b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529b2f:{NFSU2_TR(0x529b2f);
__builtin_memmove((R+4),gp(0x838450),4);
}
B529b35:{NFSU2_TR(0x529b35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529b36:{NFSU2_TR(0x529b36);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B529b39:{NFSU2_TR(0x529b39);
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
B529b3b:{NFSU2_TR(0x529b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529b3e:{NFSU2_TR(0x529b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529b41:{NFSU2_TR(0x529b41);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529a70u);}goto L529a70;}}
}
B529b47:L529b47:{c.instructions+=3;NFSU2_TR(0x529b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529b48:{NFSU2_TR(0x529b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529b49:{NFSU2_TR(0x529b49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529b4a:L529b4a:{c.instructions+=3;NFSU2_TR(0x529b4a);
__builtin_memmove((R+16),(R+20),4);
}
B529b4c:{NFSU2_TR(0x529b4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529b4d:{NFSU2_TR(0x529b4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529b50:L529b50:{c.instructions+=8;NFSU2_TR(0x529b50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b51:{NFSU2_TR(0x529b51);
__builtin_memmove((R+0),gp(0x838450),4);
}
B529b56:{NFSU2_TR(0x529b56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b57:{NFSU2_TR(0x529b57);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B529b59:{NFSU2_TR(0x529b59);
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
B529b5b:{NFSU2_TR(0x529b5b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b5c:{NFSU2_TR(0x529b5c);
__builtin_memmove((R+20),(R+4),4);
}
B529b5e:{NFSU2_TR(0x529b5e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529bc9;}}
}
B529b60:L529b60:{c.instructions+=4;NFSU2_TR(0x529b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b61:{NFSU2_TR(0x529b61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529b62:{NFSU2_TR(0x529b62);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529b64:{NFSU2_TR(0x529b64);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529b68:L529b68:{c.instructions+=2;NFSU2_TR(0x529b68);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529b6a:{NFSU2_TR(0x529b6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529b79;}}
}
B529b6c:L529b6c:{c.instructions+=2;NFSU2_TR(0x529b6c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529b6e:{NFSU2_TR(0x529b6e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529b79;}}
}
B529b70:L529b70:{c.instructions+=3;NFSU2_TR(0x529b70);
__builtin_memmove((R+0),gp(0x838454),4);
}
B529b75:{NFSU2_TR(0x529b75);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B529b77:{NFSU2_TR(0x529b77);
{goto L529b7b;}
}
B529b79:L529b79:{c.instructions+=1;NFSU2_TR(0x529b79);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529b7b:L529b7b:{c.instructions+=2;NFSU2_TR(0x529b7b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B529b7f:{NFSU2_TR(0x529b7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529bb2;}}
}
B529b81:L529b81:{c.instructions+=4;NFSU2_TR(0x529b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1400ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B529b87:{NFSU2_TR(0x529b87);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529b89:{NFSU2_TR(0x529b89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529b8b:{NFSU2_TR(0x529b8b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529baa;}}
}
B529b8d:L529b8d:{c.instructions+=2;NFSU2_TR(0x529b8d);
__builtin_memmove((R+24),(R+20),4);
}
B529b8f:{NFSU2_TR(0x529b8f);
}
B529b90:L529b90:{c.instructions+=2;NFSU2_TR(0x529b90);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529b92:{NFSU2_TR(0x529b92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529b9c;}}
}
B529b94:L529b94:{c.instructions+=2;NFSU2_TR(0x529b94);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529b96:{NFSU2_TR(0x529b96);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529b9c;}}
}
B529b98:L529b98:{c.instructions+=2;NFSU2_TR(0x529b98);
__builtin_memmove((R+4),(R+24),4);
}
B529b9a:{NFSU2_TR(0x529b9a);
{goto L529b9e;}
}
B529b9c:L529b9c:{c.instructions+=1;NFSU2_TR(0x529b9c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B529b9e:L529b9e:{c.instructions+=2;NFSU2_TR(0x529b9e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529ba0:{NFSU2_TR(0x529ba0);
if(r1(R+518)){{goto L529bb2;}}
}
B529ba2:L529ba2:{c.instructions+=4;NFSU2_TR(0x529ba2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529ba3:{NFSU2_TR(0x529ba3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B529ba6:{NFSU2_TR(0x529ba6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529ba8:{NFSU2_TR(0x529ba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529b90u);}goto L529b90;}}
}
B529baa:L529baa:{c.instructions+=3;NFSU2_TR(0x529baa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529bab:{NFSU2_TR(0x529bab);
__builtin_memmove((R+4),(R+20),4);
}
B529bad:{NFSU2_TR(0x529bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529bb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B529bb2:L529bb2:{c.instructions+=7;NFSU2_TR(0x529bb2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B529bb6:{NFSU2_TR(0x529bb6);
__builtin_memmove((R+0),gp(0x838450),4);
}
B529bbb:{NFSU2_TR(0x529bbb);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B529bbc:{NFSU2_TR(0x529bbc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x14ull))));
}
B529bbf:{NFSU2_TR(0x529bbf);
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
B529bc1:{NFSU2_TR(0x529bc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529bc5:{NFSU2_TR(0x529bc5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529b68u);}goto L529b68;}}
}
B529bc7:L529bc7:{c.instructions+=2;NFSU2_TR(0x529bc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529bc8:{NFSU2_TR(0x529bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529bc9:L529bc9:{c.instructions+=4;NFSU2_TR(0x529bc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529bca:{NFSU2_TR(0x529bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529bcb:{NFSU2_TR(0x529bcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529bcc:{NFSU2_TR(0x529bcc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529bd0:L529bd0:{c.instructions+=8;NFSU2_TR(0x529bd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529bd1:{NFSU2_TR(0x529bd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529bd2:{NFSU2_TR(0x529bd2);
__builtin_memmove((R+12),gp(0x838450),4);
}
B529bd8:{NFSU2_TR(0x529bd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529bd9:{NFSU2_TR(0x529bd9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B529bdb:{NFSU2_TR(0x529bdb);
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
B529bdd:{NFSU2_TR(0x529bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B529be1:{NFSU2_TR(0x529be1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529c38;}}
}
B529be3:L529be3:{c.instructions+=3;NFSU2_TR(0x529be3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529be4:{NFSU2_TR(0x529be4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529be5:{NFSU2_TR(0x529be5);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B529be7:L529be7:{c.instructions+=2;NFSU2_TR(0x529be7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529be9:{NFSU2_TR(0x529be9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529bf9;}}
}
B529beb:L529beb:{c.instructions+=2;NFSU2_TR(0x529beb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529bed:{NFSU2_TR(0x529bed);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529bf9;}}
}
B529bef:L529bef:{c.instructions+=3;NFSU2_TR(0x529bef);
__builtin_memmove((R+0),gp(0x838454),4);
}
B529bf4:{NFSU2_TR(0x529bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B529bf7:{NFSU2_TR(0x529bf7);
{goto L529bfb;}
}
B529bf9:L529bf9:{c.instructions+=1;NFSU2_TR(0x529bf9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B529bfb:L529bfb:{c.instructions+=4;NFSU2_TR(0x529bfb);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B529bff:{NFSU2_TR(0x529bff);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529c01:{NFSU2_TR(0x529c01);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B529c04:{NFSU2_TR(0x529c04);
if(r1(R+518)){{goto L529c0c;}}
}
B529c06:L529c06:{c.instructions+=2;NFSU2_TR(0x529c06);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529c08:{NFSU2_TR(0x529c08);
if(r1(R+518)){{goto L529c10;}}
}
B529c0a:L529c0a:{c.instructions+=1;NFSU2_TR(0x529c0a);
{goto L529c2e;}
}
B529c0c:L529c0c:{c.instructions+=2;NFSU2_TR(0x529c0c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x6ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529c0e:{NFSU2_TR(0x529c0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529c2e;}}
}
B529c10:L529c10:{c.instructions+=3;NFSU2_TR(0x529c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529c14:{NFSU2_TR(0x529c14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c15:{NFSU2_TR(0x529c15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529c1aull));
TAIL_STATIC(0x514cb0u,514);
}
B529c1a:L529c1a:{c.instructions+=2;NFSU2_TR(0x529c1a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529c1c:{NFSU2_TR(0x529c1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529c2e;}}
}
B529c1e:L529c1e:{c.instructions+=3;NFSU2_TR(0x529c1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529c22:{NFSU2_TR(0x529c22);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c23:{NFSU2_TR(0x529c23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529c28ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B529c28:L529c28:{c.instructions+=1;NFSU2_TR(0x529c28);
__builtin_memmove((R+12),gp(0x838450),4);
}
B529c2e:L529c2e:{c.instructions+=4;NFSU2_TR(0x529c2e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B529c2f:{NFSU2_TR(0x529c2f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x14ull))));
}
B529c32:{NFSU2_TR(0x529c32);
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
B529c34:{NFSU2_TR(0x529c34);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529be7u);}goto L529be7;}}
}
B529c36:L529c36:{c.instructions+=2;NFSU2_TR(0x529c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529c37:{NFSU2_TR(0x529c37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529c38:L529c38:{c.instructions+=4;NFSU2_TR(0x529c38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529c39:{NFSU2_TR(0x529c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529c3a:{NFSU2_TR(0x529c3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529c3b:{NFSU2_TR(0x529c3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529c40:L529c40:{c.instructions+=9;NFSU2_TR(0x529c40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c41:{NFSU2_TR(0x529c41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c42:{NFSU2_TR(0x529c42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c43:{NFSU2_TR(0x529c43);
__builtin_memmove((R+20),(R+4),4);
}
B529c45:{NFSU2_TR(0x529c45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1410ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529c4b:{NFSU2_TR(0x529c4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c4c:{NFSU2_TR(0x529c4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B529c50:{NFSU2_TR(0x529c50);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529c52:{NFSU2_TR(0x529c52);
if(r1(R+518)){{goto L529c94;}}
}
B529c54:L529c54:{c.instructions+=2;NFSU2_TR(0x529c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529c56:{NFSU2_TR(0x529c56);
if(r1(R+518)){{goto L529c94;}}
}
B529c58:L529c58:{c.instructions+=4;NFSU2_TR(0x529c58);
__builtin_memmove((R+4),gp(0x838450),4);
}
B529c5e:{NFSU2_TR(0x529c5e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B529c60:{NFSU2_TR(0x529c60);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529c62:{NFSU2_TR(0x529c62);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529c94;}}
}
B529c64:L529c64:{c.instructions+=2;NFSU2_TR(0x529c64);
__builtin_memmove((R+8),gp(0x838454),4);
}
B529c6a:{NFSU2_TR(0x529c6a);
__builtin_memmove((R+12),(R+12),4);
}
B529c70:L529c70:{c.instructions+=2;NFSU2_TR(0x529c70);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529c72:{NFSU2_TR(0x529c72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529c7c;}}
}
B529c74:L529c74:{c.instructions+=2;NFSU2_TR(0x529c74);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529c76:{NFSU2_TR(0x529c76);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529c7c;}}
}
B529c78:L529c78:{c.instructions+=2;NFSU2_TR(0x529c78);
__builtin_memmove((R+24),(R+8),4);
}
B529c7a:{NFSU2_TR(0x529c7a);
{goto L529c7e;}
}
B529c7c:L529c7c:{c.instructions+=1;NFSU2_TR(0x529c7c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B529c7e:L529c7e:{c.instructions+=2;NFSU2_TR(0x529c7e);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0xfull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B529c82:{NFSU2_TR(0x529c82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529c8c;}}
}
B529c84:L529c84:{c.instructions+=3;NFSU2_TR(0x529c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B529c87:{NFSU2_TR(0x529c87);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B529c8a:{NFSU2_TR(0x529c8a);
if(r1(R+518)){{goto L529c9d;}}
}
B529c8c:L529c8c:{c.instructions+=4;NFSU2_TR(0x529c8c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B529c8d:{NFSU2_TR(0x529c8d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B529c90:{NFSU2_TR(0x529c90);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529c92:{NFSU2_TR(0x529c92);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529c70u);}goto L529c70;}}
}
B529c94:L529c94:{c.instructions+=6;NFSU2_TR(0x529c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529c95:{NFSU2_TR(0x529c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529c96:{NFSU2_TR(0x529c96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529c97:{NFSU2_TR(0x529c97);
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
B529c99:{NFSU2_TR(0x529c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529c9a:{NFSU2_TR(0x529c9a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529c9d:L529c9d:{c.instructions+=3;NFSU2_TR(0x529c9d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529c9e:{NFSU2_TR(0x529c9e);
__builtin_memmove((R+4),(R+20),4);
}
B529ca0:{NFSU2_TR(0x529ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529ca5ull));
TAIL_STATIC(0x514cb0u,514);
}
B529ca5:L529ca5:{c.instructions+=2;NFSU2_TR(0x529ca5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529ca7:{NFSU2_TR(0x529ca7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529c94u);}goto L529c94;}}
}
B529ca9:L529ca9:{c.instructions+=3;NFSU2_TR(0x529ca9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529caa:{NFSU2_TR(0x529caa);
__builtin_memmove((R+4),(R+20),4);
}
B529cac:{NFSU2_TR(0x529cac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529cb1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5295f0u);}goto L5295f0;}
}
B529cb1:L529cb1:{c.instructions+=6;NFSU2_TR(0x529cb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529cb2:{NFSU2_TR(0x529cb2);
__builtin_memmove((R+0),(R+24),4);
}
B529cb4:{NFSU2_TR(0x529cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529cb5:{NFSU2_TR(0x529cb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529cb6:{NFSU2_TR(0x529cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529cb7:{NFSU2_TR(0x529cb7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529cc0:L529cc0:{c.instructions+=2;NFSU2_TR(0x529cc0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529cc2:{NFSU2_TR(0x529cc2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L529cd7;}}
}
B529cc4:L529cc4:{c.instructions+=2;NFSU2_TR(0x529cc4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529cc7:{NFSU2_TR(0x529cc7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L529cd7;}}
}
B529cc9:L529cc9:{c.instructions+=3;NFSU2_TR(0x529cc9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B529ccf:{NFSU2_TR(0x529ccf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x83ad90ull))));
}
B529cd5:{NFSU2_TR(0x529cd5);
{goto L529cd9;}
}
B529cd7:L529cd7:{c.instructions+=1;NFSU2_TR(0x529cd7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B529cd9:L529cd9:{c.instructions+=5;NFSU2_TR(0x529cd9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529cda:{NFSU2_TR(0x529cda);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529cdb:{NFSU2_TR(0x529cdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529cdc:{NFSU2_TR(0x529cdc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529cdd:{NFSU2_TR(0x529cdd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529ce2ull));
TAIL_STATIC(0x503510u,503);
}
B529ce2:L529ce2:{c.instructions+=5;NFSU2_TR(0x529ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x540ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529ce8:{NFSU2_TR(0x529ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B529ceb:{NFSU2_TR(0x529ceb);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B529ced:{NFSU2_TR(0x529ced);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529cef:{NFSU2_TR(0x529cef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L529d00;}}
}
B529cf1:L529cf1:{c.instructions+=1;NFSU2_TR(0x529cf1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529cf4:L529cf4:{c.instructions+=2;NFSU2_TR(0x529cf4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529cf6:{NFSU2_TR(0x529cf6);
if(r1(R+518)){{goto L529d06;}}
}
B529cf8:L529cf8:{c.instructions+=4;NFSU2_TR(0x529cf8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B529cf9:{NFSU2_TR(0x529cf9);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B529cfc:{NFSU2_TR(0x529cfc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529cfe:{NFSU2_TR(0x529cfe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529cf4u);}goto L529cf4;}}
}
B529d00:L529d00:{c.instructions+=5;NFSU2_TR(0x529d00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529d01:{NFSU2_TR(0x529d01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529d02:{NFSU2_TR(0x529d02);
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
B529d04:{NFSU2_TR(0x529d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529d05:{NFSU2_TR(0x529d05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529d06:L529d06:{c.instructions+=4;NFSU2_TR(0x529d06);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B529d09:{NFSU2_TR(0x529d09);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B529d0b:{NFSU2_TR(0x529d0b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B529d0d:{NFSU2_TR(0x529d0d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529d00u);}goto L529d00;}}
}
B529d0f:L529d0f:{c.instructions+=3;NFSU2_TR(0x529d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B529d11:{NFSU2_TR(0x529d11);
__builtin_memmove((R+4),(R+0),4);
}
B529d13:{NFSU2_TR(0x529d13);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529d16ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B529d16:L529d16:{c.instructions+=2;NFSU2_TR(0x529d16);
__builtin_memmove((R+24),(R+0),4);
}
B529d18:{NFSU2_TR(0x529d18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529d1dull));
TAIL_STATIC(0x570a30u,570);
}
B529d1d:L529d1d:{c.instructions+=2;NFSU2_TR(0x529d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529d1f:{NFSU2_TR(0x529d1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529d3a;}}
}
B529d21:L529d21:{c.instructions+=1;NFSU2_TR(0x529d21);
w4(R+0,u32(0x7f7c08ull));
}
B529d26:L529d26:{c.instructions+=2;NFSU2_TR(0x529d26);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B529d28:{NFSU2_TR(0x529d28);
if(r1(R+518)){{goto L529d54;}}
}
B529d2a:L529d2a:{c.instructions+=3;NFSU2_TR(0x529d2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B529d2d:{NFSU2_TR(0x529d2d);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f7c28ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f7c28ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529d32:{NFSU2_TR(0x529d32);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529d26u);}goto L529d26;}}
}
B529d34:L529d34:{c.instructions+=5;NFSU2_TR(0x529d34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529d35:{NFSU2_TR(0x529d35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529d36:{NFSU2_TR(0x529d36);
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
B529d38:{NFSU2_TR(0x529d38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529d39:{NFSU2_TR(0x529d39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529d3a:L529d3a:{c.instructions+=2;NFSU2_TR(0x529d3a);
w4(R+0,u32(0x7f7c28ull));
}
B529d3f:{NFSU2_TR(0x529d3f);
}
B529d40:L529d40:{c.instructions+=2;NFSU2_TR(0x529d40);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B529d42:{NFSU2_TR(0x529d42);
if(r1(R+518)){{goto L529d54;}}
}
B529d44:L529d44:{c.instructions+=3;NFSU2_TR(0x529d44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B529d47:{NFSU2_TR(0x529d47);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f7c48ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f7c48ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529d4c:{NFSU2_TR(0x529d4c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529d40u);}goto L529d40;}}
}
B529d4e:L529d4e:{c.instructions+=5;NFSU2_TR(0x529d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529d4f:{NFSU2_TR(0x529d4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529d50:{NFSU2_TR(0x529d50);
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
B529d52:{NFSU2_TR(0x529d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529d53:{NFSU2_TR(0x529d53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529d54:L529d54:{c.instructions+=5;NFSU2_TR(0x529d54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529d55:{NFSU2_TR(0x529d55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529d56:{NFSU2_TR(0x529d56);
w1(R+0,u8(0x1ull));
}
B529d58:{NFSU2_TR(0x529d58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529d59:{NFSU2_TR(0x529d59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529d60:L529d60:{c.instructions+=13;NFSU2_TR(0x529d60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529d61:{NFSU2_TR(0x529d61);
__builtin_memmove((R+20),(R+16),4);
}
B529d63:{NFSU2_TR(0x529d63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529d64:{NFSU2_TR(0x529d64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529d65:{NFSU2_TR(0x529d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529d68:{NFSU2_TR(0x529d68);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B529d6b:{NFSU2_TR(0x529d6b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B529d6e:{NFSU2_TR(0x529d6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529d70:{NFSU2_TR(0x529d70);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B529d73:{NFSU2_TR(0x529d73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529d74:{NFSU2_TR(0x529d74);
w4(R+4,u32(0x865930ull));
}
B529d79:{NFSU2_TR(0x529d79);
__builtin_memmove((R+12),(R+518),1);
}
B529d7c:{NFSU2_TR(0x529d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529d81ull));
TAIL_STATIC(0x579d80u,579);
}
B529d81:L529d81:{c.instructions+=5;NFSU2_TR(0x529d81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529d84:{NFSU2_TR(0x529d84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529d85:{NFSU2_TR(0x529d85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529d86:{NFSU2_TR(0x529d86);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B529d88:{NFSU2_TR(0x529d88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529d8dull));
TAIL_STATIC(0x501d70u,501);
}
B529d8d:L529d8d:{c.instructions+=3;NFSU2_TR(0x529d8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B529d90:{NFSU2_TR(0x529d90);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3dull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B529d93:{NFSU2_TR(0x529d93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529dae;}}
}
B529d95:L529d95:{c.instructions+=7;NFSU2_TR(0x529d95);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B529d99:{NFSU2_TR(0x529d99);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
w4(R+0,u32(r2(U+0)));
}
B529d9c:{NFSU2_TR(0x529d9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B529d9f:{NFSU2_TR(0x529d9f);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B529da1:{NFSU2_TR(0x529da1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529da2:{NFSU2_TR(0x529da2);
w4(R+4,u32(0x865930ull));
}
B529da7:{NFSU2_TR(0x529da7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529dacull));
TAIL_STATIC(0x579da0u,579);
}
B529dac:L529dac:{c.instructions+=1;NFSU2_TR(0x529dac);
{goto L529dc3;}
}
B529dae:L529dae:{c.instructions+=6;NFSU2_TR(0x529dae);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B529db1:{NFSU2_TR(0x529db1);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B529db4:{NFSU2_TR(0x529db4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529db5:{NFSU2_TR(0x529db5);
w4(R+28,u32(s32(s8(r1(R+4)))));
}
B529db8:{NFSU2_TR(0x529db8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529dba:{NFSU2_TR(0x529dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529dbfull));
TAIL_STATIC(0x515360u,515);
}
B529dbf:L529dbf:{c.instructions+=2;NFSU2_TR(0x529dbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B529dc2:{NFSU2_TR(0x529dc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529dc3:L529dc3:{c.instructions+=6;NFSU2_TR(0x529dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B529dc6:{NFSU2_TR(0x529dc6);
w1(R+12,u8(u32(r1(R+12))|u32(r1(R+0))));
}
B529dc8:{NFSU2_TR(0x529dc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529dc9:{NFSU2_TR(0x529dc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529dca:{NFSU2_TR(0x529dca);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B529dcd:{NFSU2_TR(0x529dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529dd2ull));
TAIL_STATIC(0x501d70u,501);
}
B529dd2:L529dd2:{c.instructions+=5;NFSU2_TR(0x529dd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B529dd5:{NFSU2_TR(0x529dd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+12,shr<u8>(r1(R+12),u64(r4(U+0))));
}
B529dd8:{NFSU2_TR(0x529dd8);
w4(R+4,u32(s32(s8(r1(R+12)))));
}
B529ddb:{NFSU2_TR(0x529ddb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B529dde:{NFSU2_TR(0x529dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529de3ull));
TAIL_STATIC(0x501790u,501);
}
B529de3:L529de3:{c.instructions+=3;NFSU2_TR(0x529de3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529de5:{NFSU2_TR(0x529de5);
__builtin_memmove((R+24),gp(0x86262c),4);
}
B529deb:{NFSU2_TR(0x529deb);
if(r1(R+518)){{goto L529e03;}}
}
B529ded:L529ded:{c.instructions+=4;NFSU2_TR(0x529ded);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529df0:{NFSU2_TR(0x529df0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529df1:{NFSU2_TR(0x529df1);
w4(R+4,u32(0x85ad40ull));
}
B529df6:{NFSU2_TR(0x529df6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529dfbull));
TAIL_STATIC(0x500b80u,500);
}
B529dfb:L529dfb:{c.instructions+=2;NFSU2_TR(0x529dfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529dfd:{NFSU2_TR(0x529dfd);
if(r1(R+518)){{goto L529e03;}}
}
B529dff:L529dff:{c.instructions+=1;NFSU2_TR(0x529dff);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B529e03:L529e03:{c.instructions+=4;NFSU2_TR(0x529e03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529e06:{NFSU2_TR(0x529e06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e07:{NFSU2_TR(0x529e07);
w4(R+4,u32(0x85ad40ull));
}
B529e0c:{NFSU2_TR(0x529e0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e11ull));
TAIL_STATIC(0x500b80u,500);
}
B529e11:L529e11:{c.instructions+=3;NFSU2_TR(0x529e11);
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
B529e13:{NFSU2_TR(0x529e13);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B529e16:{NFSU2_TR(0x529e16);
if(r1(R+518)){{goto L529e1f;}}
}
B529e18:L529e18:{c.instructions+=2;NFSU2_TR(0x529e18);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B529e1b:{NFSU2_TR(0x529e1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529e1f;}}
}
B529e1d:L529e1d:{c.instructions+=1;NFSU2_TR(0x529e1d);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B529e1f:L529e1f:{c.instructions+=4;NFSU2_TR(0x529e1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529e20:{NFSU2_TR(0x529e20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529e21:{NFSU2_TR(0x529e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529e22:{NFSU2_TR(0x529e22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529e30:L529e30:{c.instructions+=8;NFSU2_TR(0x529e30);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e31:{NFSU2_TR(0x529e31);
__builtin_memmove((R+20),(R+16),4);
}
B529e33:{NFSU2_TR(0x529e33);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e34:{NFSU2_TR(0x529e34);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e35:{NFSU2_TR(0x529e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529e38:{NFSU2_TR(0x529e38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e39:{NFSU2_TR(0x529e39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e3a:{NFSU2_TR(0x529e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e3full));
TAIL_STATIC(0x5000a0u,500);
}
B529e3f:L529e3f:{c.instructions+=5;NFSU2_TR(0x529e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529e42:{NFSU2_TR(0x529e42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B529e45:{NFSU2_TR(0x529e45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e46:{NFSU2_TR(0x529e46);
w4(R+4,u32(0x865930ull));
}
B529e4b:{NFSU2_TR(0x529e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e50ull));
TAIL_STATIC(0x579d90u,579);
}
B529e50:L529e50:{c.instructions+=3;NFSU2_TR(0x529e50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e51:{NFSU2_TR(0x529e51);
__builtin_memmove((R+12),(R+0),1);
}
B529e53:{NFSU2_TR(0x529e53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e58ull));
TAIL_STATIC(0x5000a0u,500);
}
B529e58:L529e58:{c.instructions+=4;NFSU2_TR(0x529e58);
__builtin_memmove((R+4),(R+0),4);
}
B529e5a:{NFSU2_TR(0x529e5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B529e5c:{NFSU2_TR(0x529e5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e5d:{NFSU2_TR(0x529e5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e62ull));
TAIL_STATIC(0x5021c0u,502);
}
B529e62:L529e62:{c.instructions+=4;NFSU2_TR(0x529e62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B529e65:{NFSU2_TR(0x529e65);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e67:{NFSU2_TR(0x529e67);
__builtin_memmove((R+28),(R+4),4);
}
B529e69:{NFSU2_TR(0x529e69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e6eull));
TAIL_STATIC(0x515360u,515);
}
B529e6e:L529e6e:{c.instructions+=7;NFSU2_TR(0x529e6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B529e71:{NFSU2_TR(0x529e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529e72:{NFSU2_TR(0x529e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529e73:{NFSU2_TR(0x529e73);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))|u32(r1(R+12))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B529e75:{NFSU2_TR(0x529e75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B529e76:{NFSU2_TR(0x529e76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529e77:{NFSU2_TR(0x529e77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529e80:L529e80:{c.instructions+=6;NFSU2_TR(0x529e80);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e81:{NFSU2_TR(0x529e81);
__builtin_memmove((R+20),(R+16),4);
}
B529e83:{NFSU2_TR(0x529e83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e84:{NFSU2_TR(0x529e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B529e87:{NFSU2_TR(0x529e87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e88:{NFSU2_TR(0x529e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529e8dull));
TAIL_STATIC(0x502310u,502);
}
B529e8d:L529e8d:{c.instructions+=3;NFSU2_TR(0x529e8d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B529e90:{NFSU2_TR(0x529e90);
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
B529e92:{NFSU2_TR(0x529e92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529e99;}}
}
B529e94:L529e94:{c.instructions+=4;NFSU2_TR(0x529e94);
w1(R+0,u8(0x1ull));
}
B529e96:{NFSU2_TR(0x529e96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529e97:{NFSU2_TR(0x529e97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529e98:{NFSU2_TR(0x529e98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529e99:L529e99:{c.instructions+=5;NFSU2_TR(0x529e99);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e9a:{NFSU2_TR(0x529e9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e9c:{NFSU2_TR(0x529e9c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529e9e:{NFSU2_TR(0x529e9e);
w4(R+4,u32(0x83ad90ull));
}
B529ea3:{NFSU2_TR(0x529ea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529ea8ull));
TAIL_STATIC(0x5162d0u,516);
}
B529ea8:L529ea8:{c.instructions+=2;NFSU2_TR(0x529ea8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529eaa:{NFSU2_TR(0x529eaa);
if(r1(R+518)){{goto L529ee6;}}
}
B529eac:L529eac:{c.instructions+=1;NFSU2_TR(0x529eac);
__builtin_memmove((R+16),(R+16),4);
}
B529eb0:L529eb0:{c.instructions+=3;NFSU2_TR(0x529eb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B529eb6:{NFSU2_TR(0x529eb6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B529eb8:{NFSU2_TR(0x529eb8);
if(r1(R+518)){{goto L529ed5;}}
}
B529eba:L529eba:{c.instructions+=2;NFSU2_TR(0x529eba);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B529ebc:{NFSU2_TR(0x529ebc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B529ec2:L529ec2:{c.instructions+=3;NFSU2_TR(0x529ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B529ec4:{NFSU2_TR(0x529ec4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B529ec6:{NFSU2_TR(0x529ec6);
if(r1(R+518)){{goto L529eec;}}
}
B529ec8:L529ec8:{c.instructions+=2;NFSU2_TR(0x529ec8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529eca:{NFSU2_TR(0x529eca);
if(r1(R+518)){{goto L529ed5;}}
}
B529ecc:L529ecc:{c.instructions+=4;NFSU2_TR(0x529ecc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B529ecd:{NFSU2_TR(0x529ecd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B529ed0:{NFSU2_TR(0x529ed0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x44ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B529ed3:{NFSU2_TR(0x529ed3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529ec2u);}goto L529ec2;}}
}
B529ed5:L529ed5:{c.instructions+=4;NFSU2_TR(0x529ed5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529ed6:{NFSU2_TR(0x529ed6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529ed8:{NFSU2_TR(0x529ed8);
w4(R+4,u32(0x83ad90ull));
}
B529edd:{NFSU2_TR(0x529edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529ee2ull));
TAIL_STATIC(0x5162d0u,516);
}
B529ee2:L529ee2:{c.instructions+=2;NFSU2_TR(0x529ee2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529ee4:{NFSU2_TR(0x529ee4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529eb0u);}goto L529eb0;}}
}
B529ee6:L529ee6:{c.instructions+=5;NFSU2_TR(0x529ee6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529ee7:{NFSU2_TR(0x529ee7);
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
B529ee9:{NFSU2_TR(0x529ee9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529eea:{NFSU2_TR(0x529eea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529eeb:{NFSU2_TR(0x529eeb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529eec:L529eec:{c.instructions+=5;NFSU2_TR(0x529eec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529eed:{NFSU2_TR(0x529eed);
w1(R+0,u8(0x1ull));
}
B529eef:{NFSU2_TR(0x529eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529ef0:{NFSU2_TR(0x529ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529ef1:{NFSU2_TR(0x529ef1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529f00:L529f00:{c.instructions+=6;NFSU2_TR(0x529f00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f01:{NFSU2_TR(0x529f01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f02:{NFSU2_TR(0x529f02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f04:{NFSU2_TR(0x529f04);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f06:{NFSU2_TR(0x529f06);
w4(R+4,u32(0x83ad90ull));
}
B529f0b:{NFSU2_TR(0x529f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f10ull));
TAIL_STATIC(0x5162d0u,516);
}
B529f10:L529f10:{c.instructions+=3;NFSU2_TR(0x529f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B529f12:{NFSU2_TR(0x529f12);
__builtin_memmove((R+4),(R+0),4);
}
B529f14:{NFSU2_TR(0x529f14);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f17ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B529f17:L529f17:{c.instructions+=7;NFSU2_TR(0x529f17);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f19:{NFSU2_TR(0x529f19);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f1b:{NFSU2_TR(0x529f1b);
__builtin_memmove((R+28),(R+0),4);
}
B529f1d:{NFSU2_TR(0x529f1d);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f1f:{NFSU2_TR(0x529f1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f20:{NFSU2_TR(0x529f20);
w4(R+4,u32(0x8a2b68ull));
}
B529f25:{NFSU2_TR(0x529f25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f2aull));
TAIL_STATIC(0x61ba30u,61b);
}
B529f2a:L529f2a:{c.instructions+=3;NFSU2_TR(0x529f2a);
__builtin_memmove((R+24),(R+0),4);
}
B529f2c:{NFSU2_TR(0x529f2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529f2e:{NFSU2_TR(0x529f2e);
if(r1(R+518)){{goto L529f65;}}
}
B529f30:L529f30:{c.instructions+=4;NFSU2_TR(0x529f30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f32:{NFSU2_TR(0x529f32);
u8 U[4];
w4(U+0,u32(0xebb03e66ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f37:{NFSU2_TR(0x529f37);
__builtin_memmove((R+4),(R+24),4);
}
B529f39:{NFSU2_TR(0x529f39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f3eull));
TAIL_STATIC(0x61b500u,61b);
}
B529f3e:L529f3e:{c.instructions+=3;NFSU2_TR(0x529f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f3f:{NFSU2_TR(0x529f3f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f41:{NFSU2_TR(0x529f41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529e80u);}goto L529e80;}
}
B529f46:L529f46:{c.instructions+=3;NFSU2_TR(0x529f46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B529f49:{NFSU2_TR(0x529f49);
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
B529f4b:{NFSU2_TR(0x529f4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529f6a;}}
}
B529f4d:L529f4d:{c.instructions+=7;NFSU2_TR(0x529f4d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f4f:{NFSU2_TR(0x529f4f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f51:{NFSU2_TR(0x529f51);
u8 U[4];
w4(U+0,u32(0x61ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f53:{NFSU2_TR(0x529f53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f54:{NFSU2_TR(0x529f54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f55:{NFSU2_TR(0x529f55);
w4(R+4,u32(0x8a2b68ull));
}
B529f5a:{NFSU2_TR(0x529f5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f5full));
TAIL_STATIC(0x61ba50u,61b);
}
B529f5f:L529f5f:{c.instructions+=3;NFSU2_TR(0x529f5f);
__builtin_memmove((R+24),(R+0),4);
}
B529f61:{NFSU2_TR(0x529f61);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B529f63:{NFSU2_TR(0x529f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529f30u);}goto L529f30;}}
}
B529f65:L529f65:{c.instructions+=4;NFSU2_TR(0x529f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529f66:{NFSU2_TR(0x529f66);
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
B529f68:{NFSU2_TR(0x529f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529f69:{NFSU2_TR(0x529f69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529f6a:L529f6a:{c.instructions+=4;NFSU2_TR(0x529f6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529f6b:{NFSU2_TR(0x529f6b);
w1(R+0,u8(0x1ull));
}
B529f6d:{NFSU2_TR(0x529f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529f6e:{NFSU2_TR(0x529f6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529f70:L529f70:{c.instructions+=8;NFSU2_TR(0x529f70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f71:{NFSU2_TR(0x529f71);
__builtin_memmove((R+20),(R+16),4);
}
B529f73:{NFSU2_TR(0x529f73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f74:{NFSU2_TR(0x529f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B529f77:{NFSU2_TR(0x529f77);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f78:{NFSU2_TR(0x529f78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f79:{NFSU2_TR(0x529f79);
w4(R+4,u32(0x83ad90ull));
}
B529f7e:{NFSU2_TR(0x529f7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529f83ull));
TAIL_STATIC(0x503510u,503);
}
B529f83:L529f83:{c.instructions+=3;NFSU2_TR(0x529f83);
__builtin_memmove((R+28),(R+0),4);
}
B529f85:{NFSU2_TR(0x529f85);
w4(R+0,u32(0x84481cull));
}
B529f8a:{NFSU2_TR(0x529f8a);
__builtin_memmove((R+12),(R+12),4);
}
B529f90:L529f90:{c.instructions+=2;NFSU2_TR(0x529f90);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B529f92:{NFSU2_TR(0x529f92);
if(r1(R+518)){{goto L529fee;}}
}
B529f94:L529f94:{c.instructions+=3;NFSU2_TR(0x529f94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B529f97:{NFSU2_TR(0x529f97);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x84496cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x84496cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B529f9c:{NFSU2_TR(0x529f9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x529f90u);}goto L529f90;}}
}
B529f9e:L529f9e:{c.instructions+=3;NFSU2_TR(0x529f9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529f9f:{NFSU2_TR(0x529f9f);
w4(R+4,u32(0x83ad90ull));
}
B529fa4:{NFSU2_TR(0x529fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529fa9ull));
TAIL_STATIC(0x516360u,516);
}
B529fa9:L529fa9:{c.instructions+=2;NFSU2_TR(0x529fa9);
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
B529fab:{NFSU2_TR(0x529fab);
if(r1(R+518)){{goto L529ffd;}}
}
B529fad:L529fad:{c.instructions+=3;NFSU2_TR(0x529fad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B529faf:{NFSU2_TR(0x529faf);
__builtin_memmove((R+4),(R+28),4);
}
B529fb1:{NFSU2_TR(0x529fb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529fb4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B529fb4:L529fb4:{c.instructions+=3;NFSU2_TR(0x529fb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529fb5:{NFSU2_TR(0x529fb5);
w4(R+4,u32(0x865930ull));
}
B529fba:{NFSU2_TR(0x529fba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529fbfull));
TAIL_STATIC(0x579d30u,579);
}
B529fbf:L529fbf:{c.instructions+=2;NFSU2_TR(0x529fbf);
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
B529fc1:{NFSU2_TR(0x529fc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L529ffd;}}
}
B529fc3:L529fc3:{c.instructions+=3;NFSU2_TR(0x529fc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B529fc5:{NFSU2_TR(0x529fc5);
__builtin_memmove((R+4),(R+28),4);
}
B529fc7:{NFSU2_TR(0x529fc7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529fcaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B529fca:L529fca:{c.instructions+=2;NFSU2_TR(0x529fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529fcb:{NFSU2_TR(0x529fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529fd0ull));
TAIL_STATIC(0x5023b0u,502);
}
B529fd0:L529fd0:{c.instructions+=3;NFSU2_TR(0x529fd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B529fd3:{NFSU2_TR(0x529fd3);
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
B529fd5:{NFSU2_TR(0x529fd5);
if(r1(R+518)){{goto L529ffd;}}
}
B529fd7:L529fd7:{c.instructions+=4;NFSU2_TR(0x529fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B529fda:{NFSU2_TR(0x529fda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529fdb:{NFSU2_TR(0x529fdb);
w4(R+4,u32(0x85ad40ull));
}
B529fe0:{NFSU2_TR(0x529fe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529fe5ull));
TAIL_STATIC(0x500b80u,500);
}
B529fe5:L529fe5:{c.instructions+=6;NFSU2_TR(0x529fe5);
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
B529fe7:{NFSU2_TR(0x529fe7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529fe8:{NFSU2_TR(0x529fe8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B529feb:{NFSU2_TR(0x529feb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529fec:{NFSU2_TR(0x529fec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529fed:{NFSU2_TR(0x529fed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529fee:L529fee:{c.instructions+=3;NFSU2_TR(0x529fee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B529fef:{NFSU2_TR(0x529fef);
w4(R+4,u32(0x865930ull));
}
B529ff4:{NFSU2_TR(0x529ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x529ff9ull));
TAIL_STATIC(0x579d70u,579);
}
B529ff9:L529ff9:{c.instructions+=4;NFSU2_TR(0x529ff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529ffa:{NFSU2_TR(0x529ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B529ffb:{NFSU2_TR(0x529ffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B529ffc:{NFSU2_TR(0x529ffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B529ffd:L529ffd:{c.instructions+=2;NFSU2_TR(0x529ffd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B529ffe:{NFSU2_TR(0x529ffe);
w1(R+0,u8(0x1ull));
TAIL_STATIC(0x52a000u,52a);
}
XIT:NFSU2_TR_EXIT(0x529,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
