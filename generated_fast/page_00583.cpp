#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4a0(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_582(u8* __restrict R,Cpu& c);
u32 body_584(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_73e(u8* __restrict R,Cpu& c);
u32 body_742(u8* __restrict R,Cpu& c);
u32 body_743(u8* __restrict R,Cpu& c);
u32 body_748(u8* __restrict R,Cpu& c);
u32 body_749(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x583,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x583,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_583(u8* __restrict R,Cpu& c);
u32 page_583(Cpu& c){return body_583(c.regs.data(),c);}
__attribute__((noinline)) u32 body_583(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x583000:goto L583000;
case 0x583005:goto L583005;
case 0x583008:c.instructions+=5;goto B583008;
case 0x583009:c.instructions+=4;goto B583009;
case 0x58300d:c.instructions+=3;goto B58300d;
case 0x583012:c.instructions+=2;goto B583012;
case 0x583013:c.instructions+=1;goto B583013;
case 0x583018:goto L583018;
case 0x58301b:c.instructions+=7;goto B58301b;
case 0x58301f:c.instructions+=6;goto B58301f;
case 0x583020:c.instructions+=5;goto B583020;
case 0x583022:c.instructions+=4;goto B583022;
case 0x583024:c.instructions+=3;goto B583024;
case 0x583029:c.instructions+=2;goto B583029;
case 0x58302e:c.instructions+=1;goto B58302e;
case 0x583033:goto L583033;
case 0x583034:c.instructions+=1;goto B583034;
case 0x583039:goto L583039;
case 0x58303f:c.instructions+=1;goto B58303f;
case 0x583050:goto L583050;
case 0x583054:c.instructions+=4;goto B583054;
case 0x58305a:c.instructions+=3;goto B58305a;
case 0x58305b:c.instructions+=2;goto B58305b;
case 0x583060:c.instructions+=1;goto B583060;
case 0x583065:goto L583065;
case 0x583068:c.instructions+=5;goto B583068;
case 0x583069:c.instructions+=4;goto B583069;
case 0x58306d:c.instructions+=3;goto B58306d;
case 0x583072:c.instructions+=2;goto B583072;
case 0x583073:c.instructions+=1;goto B583073;
case 0x583078:goto L583078;
case 0x58307b:c.instructions+=7;goto B58307b;
case 0x58307f:c.instructions+=6;goto B58307f;
case 0x583080:c.instructions+=5;goto B583080;
case 0x583082:c.instructions+=4;goto B583082;
case 0x583084:c.instructions+=3;goto B583084;
case 0x583089:c.instructions+=2;goto B583089;
case 0x58308e:c.instructions+=1;goto B58308e;
case 0x583093:goto L583093;
case 0x583094:c.instructions+=1;goto B583094;
case 0x583099:goto L583099;
case 0x58309f:c.instructions+=1;goto B58309f;
case 0x5830b0:goto L5830b0;
case 0x5830b6:c.instructions+=2;goto B5830b6;
case 0x5830bb:c.instructions+=1;goto B5830bb;
case 0x5830c0:goto L5830c0;
case 0x5830c1:c.instructions+=4;goto B5830c1;
case 0x5830c5:c.instructions+=3;goto B5830c5;
case 0x5830ca:c.instructions+=2;goto B5830ca;
case 0x5830cb:c.instructions+=1;goto B5830cb;
case 0x5830d0:goto L5830d0;
case 0x5830d3:c.instructions+=7;goto B5830d3;
case 0x5830d7:c.instructions+=6;goto B5830d7;
case 0x5830d8:c.instructions+=5;goto B5830d8;
case 0x5830dd:c.instructions+=4;goto B5830dd;
case 0x5830e2:c.instructions+=3;goto B5830e2;
case 0x5830e7:c.instructions+=2;goto B5830e7;
case 0x5830ec:c.instructions+=1;goto B5830ec;
case 0x5830f1:goto L5830f1;
case 0x5830f2:c.instructions+=1;goto B5830f2;
case 0x5830f7:goto L5830f7;
case 0x5830fd:c.instructions+=1;goto B5830fd;
case 0x583100:goto L583100;
case 0x583102:c.instructions+=2;goto B583102;
case 0x583104:c.instructions+=1;goto B583104;
case 0x583109:goto L583109;
case 0x58310b:c.instructions+=2;goto B58310b;
case 0x58310d:c.instructions+=1;goto B58310d;
case 0x583112:goto L583112;
case 0x583114:c.instructions+=2;goto B583114;
case 0x583116:c.instructions+=1;goto B583116;
case 0x58311b:goto L58311b;
case 0x58311d:c.instructions+=2;goto B58311d;
case 0x58311f:c.instructions+=1;goto B58311f;
case 0x583124:goto L583124;
case 0x583126:c.instructions+=2;goto B583126;
case 0x58312b:c.instructions+=1;goto B58312b;
case 0x583130:goto L583130;
case 0x583133:c.instructions+=1;goto B583133;
case 0x583140:goto L583140;
case 0x583146:c.instructions+=2;goto B583146;
case 0x583148:c.instructions+=1;goto B583148;
case 0x58314a:goto L58314a;
case 0x58314b:c.instructions+=1;goto B58314b;
case 0x583150:goto L583150;
case 0x583153:c.instructions+=1;goto B583153;
case 0x583154:goto L583154;
case 0x583156:c.instructions+=1;goto B583156;
case 0x583160:goto L583160;
case 0x583166:c.instructions+=13;goto B583166;
case 0x58316c:c.instructions+=12;goto B58316c;
case 0x58316e:c.instructions+=11;goto B58316e;
case 0x583174:c.instructions+=10;goto B583174;
case 0x58317a:c.instructions+=9;goto B58317a;
case 0x58317d:c.instructions+=8;goto B58317d;
case 0x583180:c.instructions+=7;goto B583180;
case 0x583183:c.instructions+=6;goto B583183;
case 0x583186:c.instructions+=5;goto B583186;
case 0x583189:c.instructions+=4;goto B583189;
case 0x58318c:c.instructions+=3;goto B58318c;
case 0x58318f:c.instructions+=2;goto B58318f;
case 0x583192:c.instructions+=1;goto B583192;
case 0x5831a0:goto L5831a0;
case 0x5831a6:c.instructions+=13;goto B5831a6;
case 0x5831ac:c.instructions+=12;goto B5831ac;
case 0x5831ae:c.instructions+=11;goto B5831ae;
case 0x5831b4:c.instructions+=10;goto B5831b4;
case 0x5831ba:c.instructions+=9;goto B5831ba;
case 0x5831bd:c.instructions+=8;goto B5831bd;
case 0x5831c0:c.instructions+=7;goto B5831c0;
case 0x5831c3:c.instructions+=6;goto B5831c3;
case 0x5831c6:c.instructions+=5;goto B5831c6;
case 0x5831c9:c.instructions+=4;goto B5831c9;
case 0x5831cc:c.instructions+=3;goto B5831cc;
case 0x5831cf:c.instructions+=2;goto B5831cf;
case 0x5831d2:c.instructions+=1;goto B5831d2;
case 0x5831e0:goto L5831e0;
case 0x5831e1:c.instructions+=4;goto B5831e1;
case 0x5831e4:c.instructions+=3;goto B5831e4;
case 0x5831e7:c.instructions+=2;goto B5831e7;
case 0x5831e9:c.instructions+=1;goto B5831e9;
case 0x5831eb:goto L5831eb;
case 0x5831f1:goto L5831f1;
case 0x5831f7:c.instructions+=2;goto B5831f7;
case 0x5831f8:c.instructions+=1;goto B5831f8;
case 0x583200:goto L583200;
case 0x583201:c.instructions+=4;goto B583201;
case 0x583204:c.instructions+=3;goto B583204;
case 0x583207:c.instructions+=2;goto B583207;
case 0x583209:c.instructions+=1;goto B583209;
case 0x58320b:goto L58320b;
case 0x583211:goto L583211;
case 0x583217:c.instructions+=2;goto B583217;
case 0x583218:c.instructions+=1;goto B583218;
case 0x583220:goto L583220;
case 0x583222:c.instructions+=39;goto B583222;
case 0x583225:c.instructions+=38;goto B583225;
case 0x583228:c.instructions+=37;goto B583228;
case 0x58322b:c.instructions+=36;goto B58322b;
case 0x58322d:c.instructions+=35;goto B58322d;
case 0x583230:c.instructions+=34;goto B583230;
case 0x583233:c.instructions+=33;goto B583233;
case 0x583236:c.instructions+=32;goto B583236;
case 0x583239:c.instructions+=31;goto B583239;
case 0x58323c:c.instructions+=30;goto B58323c;
case 0x58323f:c.instructions+=29;goto B58323f;
case 0x583242:c.instructions+=28;goto B583242;
case 0x583245:c.instructions+=27;goto B583245;
case 0x583248:c.instructions+=26;goto B583248;
case 0x58324b:c.instructions+=25;goto B58324b;
case 0x58324e:c.instructions+=24;goto B58324e;
case 0x583251:c.instructions+=23;goto B583251;
case 0x583254:c.instructions+=22;goto B583254;
case 0x583257:c.instructions+=21;goto B583257;
case 0x58325a:c.instructions+=20;goto B58325a;
case 0x58325d:c.instructions+=19;goto B58325d;
case 0x583260:c.instructions+=18;goto B583260;
case 0x583263:c.instructions+=17;goto B583263;
case 0x583266:c.instructions+=16;goto B583266;
case 0x583269:c.instructions+=15;goto B583269;
case 0x58326c:c.instructions+=14;goto B58326c;
case 0x58326f:c.instructions+=13;goto B58326f;
case 0x583272:c.instructions+=12;goto B583272;
case 0x583275:c.instructions+=11;goto B583275;
case 0x58327b:c.instructions+=10;goto B58327b;
case 0x58327e:c.instructions+=9;goto B58327e;
case 0x583281:c.instructions+=8;goto B583281;
case 0x583284:c.instructions+=7;goto B583284;
case 0x583287:c.instructions+=6;goto B583287;
case 0x58328d:c.instructions+=5;goto B58328d;
case 0x583293:c.instructions+=4;goto B583293;
case 0x583299:c.instructions+=3;goto B583299;
case 0x58329f:c.instructions+=2;goto B58329f;
case 0x5832a5:c.instructions+=1;goto B5832a5;
case 0x5832b0:goto L5832b0;
case 0x5832b2:c.instructions+=3;goto B5832b2;
case 0x5832b4:c.instructions+=2;goto B5832b4;
case 0x5832b9:c.instructions+=1;goto B5832b9;
case 0x5832be:goto L5832be;
case 0x5832c1:c.instructions+=2;goto B5832c1;
case 0x5832c4:c.instructions+=1;goto B5832c4;
case 0x5832c6:goto L5832c6;
case 0x5832c7:c.instructions+=1;goto B5832c7;
case 0x5832cc:goto L5832cc;
case 0x5832cd:goto L5832cd;
case 0x5832d0:goto L5832d0;
case 0x5832d4:c.instructions+=3;goto B5832d4;
case 0x5832d6:c.instructions+=2;goto B5832d6;
case 0x5832d7:c.instructions+=1;goto B5832d7;
case 0x5832dc:goto L5832dc;
case 0x5832df:c.instructions+=1;goto B5832df;
case 0x5832e0:goto L5832e0;
case 0x5832e4:c.instructions+=3;goto B5832e4;
case 0x5832e6:c.instructions+=2;goto B5832e6;
case 0x5832e7:c.instructions+=1;goto B5832e7;
case 0x5832ec:goto L5832ec;
case 0x5832ef:c.instructions+=1;goto B5832ef;
case 0x5832f0:goto L5832f0;
case 0x583300:goto L583300;
case 0x583304:c.instructions+=7;goto B583304;
case 0x583305:c.instructions+=6;goto B583305;
case 0x583307:c.instructions+=5;goto B583307;
case 0x583308:c.instructions+=4;goto B583308;
case 0x58330b:c.instructions+=3;goto B58330b;
case 0x58330d:c.instructions+=2;goto B58330d;
case 0x58330f:c.instructions+=1;goto B58330f;
case 0x583311:goto L583311;
case 0x583312:c.instructions+=7;goto B583312;
case 0x583314:c.instructions+=6;goto B583314;
case 0x583316:c.instructions+=5;goto B583316;
case 0x583319:c.instructions+=4;goto B583319;
case 0x58331b:c.instructions+=3;goto B58331b;
case 0x58331e:c.instructions+=2;goto B58331e;
case 0x583321:c.instructions+=1;goto B583321;
case 0x583323:goto L583323;
case 0x583326:c.instructions+=9;goto B583326;
case 0x583329:c.instructions+=8;goto B583329;
case 0x58332d:c.instructions+=7;goto B58332d;
case 0x583330:c.instructions+=6;goto B583330;
case 0x583333:c.instructions+=5;goto B583333;
case 0x583335:c.instructions+=4;goto B583335;
case 0x583336:c.instructions+=3;goto B583336;
case 0x583339:c.instructions+=2;goto B583339;
case 0x58333a:c.instructions+=1;goto B58333a;
case 0x58333d:goto L58333d;
case 0x583340:c.instructions+=8;goto B583340;
case 0x583343:c.instructions+=7;goto B583343;
case 0x583346:c.instructions+=6;goto B583346;
case 0x58334a:c.instructions+=5;goto B58334a;
case 0x58334c:c.instructions+=4;goto B58334c;
case 0x58334d:c.instructions+=3;goto B58334d;
case 0x583350:c.instructions+=2;goto B583350;
case 0x583351:c.instructions+=1;goto B583351;
case 0x583354:goto L583354;
case 0x583357:c.instructions+=6;goto B583357;
case 0x58335b:c.instructions+=5;goto B58335b;
case 0x58335d:c.instructions+=4;goto B58335d;
case 0x58335e:c.instructions+=3;goto B58335e;
case 0x583361:c.instructions+=2;goto B583361;
case 0x583362:c.instructions+=1;goto B583362;
case 0x583370:goto L583370;
case 0x583371:c.instructions+=4;goto B583371;
case 0x583372:c.instructions+=3;goto B583372;
case 0x583377:c.instructions+=2;goto B583377;
case 0x583379:c.instructions+=1;goto B583379;
case 0x583380:goto L583380;
case 0x583384:c.instructions+=1;goto B583384;
case 0x583386:goto L583386;
case 0x583388:c.instructions+=3;goto B583388;
case 0x58338a:c.instructions+=2;goto B58338a;
case 0x58338d:c.instructions+=1;goto B58338d;
case 0x58338f:goto L58338f;
case 0x583390:c.instructions+=1;goto B583390;
case 0x583395:goto L583395;
case 0x583398:goto L583398;
case 0x58339a:c.instructions+=1;goto B58339a;
case 0x58339d:goto L58339d;
case 0x5833a0:c.instructions+=2;goto B5833a0;
case 0x5833a6:c.instructions+=1;goto B5833a6;
case 0x5833a8:goto L5833a8;
case 0x5833a9:c.instructions+=2;goto B5833a9;
case 0x5833aa:c.instructions+=1;goto B5833aa;
case 0x5833b0:goto L5833b0;
case 0x5833b3:c.instructions+=2;goto B5833b3;
case 0x5833bd:c.instructions+=1;goto B5833bd;
case 0x5833c2:goto L5833c2;
case 0x5833c4:c.instructions+=2;goto B5833c4;
case 0x5833c9:c.instructions+=1;goto B5833c9;
case 0x5833cb:goto L5833cb;
case 0x5833cd:c.instructions+=3;goto B5833cd;
case 0x5833d7:c.instructions+=2;goto B5833d7;
case 0x5833da:c.instructions+=1;goto B5833da;
case 0x5833db:goto L5833db;
case 0x5833dc:c.instructions+=4;goto B5833dc;
case 0x5833de:c.instructions+=3;goto B5833de;
case 0x5833e3:c.instructions+=2;goto B5833e3;
case 0x5833e4:c.instructions+=1;goto B5833e4;
case 0x5833e9:goto L5833e9;
case 0x5833ee:c.instructions+=4;goto B5833ee;
case 0x5833f0:c.instructions+=3;goto B5833f0;
case 0x5833f5:c.instructions+=2;goto B5833f5;
case 0x5833f6:c.instructions+=1;goto B5833f6;
case 0x5833fb:goto L5833fb;
case 0x583400:c.instructions+=3;goto B583400;
case 0x583402:c.instructions+=2;goto B583402;
case 0x583407:c.instructions+=1;goto B583407;
case 0x58340b:goto L58340b;
case 0x58340d:goto L58340d;
case 0x583411:c.instructions+=8;goto B583411;
case 0x583412:c.instructions+=7;goto B583412;
case 0x583414:c.instructions+=6;goto B583414;
case 0x583418:c.instructions+=5;goto B583418;
case 0x58341a:c.instructions+=4;goto B58341a;
case 0x58341b:c.instructions+=3;goto B58341b;
case 0x58341c:c.instructions+=2;goto B58341c;
case 0x583424:c.instructions+=1;goto B583424;
case 0x583429:goto L583429;
case 0x58342e:c.instructions+=6;goto B58342e;
case 0x583431:c.instructions+=5;goto B583431;
case 0x583432:c.instructions+=4;goto B583432;
case 0x583433:c.instructions+=3;goto B583433;
case 0x583437:c.instructions+=2;goto B583437;
case 0x583438:c.instructions+=1;goto B583438;
case 0x58343d:goto L58343d;
case 0x583440:c.instructions+=5;goto B583440;
case 0x583441:c.instructions+=4;goto B583441;
case 0x583445:c.instructions+=3;goto B583445;
case 0x58344a:c.instructions+=2;goto B58344a;
case 0x58344b:c.instructions+=1;goto B58344b;
case 0x583450:goto L583450;
case 0x583455:c.instructions+=5;goto B583455;
case 0x583459:c.instructions+=4;goto B583459;
case 0x58345a:c.instructions+=3;goto B58345a;
case 0x58345f:c.instructions+=2;goto B58345f;
case 0x583460:c.instructions+=1;goto B583460;
case 0x583465:goto L583465;
case 0x58346b:c.instructions+=8;goto B58346b;
case 0x58346e:c.instructions+=7;goto B58346e;
case 0x583470:c.instructions+=6;goto B583470;
case 0x583472:c.instructions+=5;goto B583472;
case 0x583475:c.instructions+=4;goto B583475;
case 0x583476:c.instructions+=3;goto B583476;
case 0x583480:c.instructions+=2;goto B583480;
case 0x583483:c.instructions+=1;goto B583483;
case 0x583490:goto L583490;
case 0x583491:c.instructions+=2;goto B583491;
case 0x583492:c.instructions+=1;goto B583492;
case 0x583497:goto L583497;
case 0x583499:c.instructions+=2;goto B583499;
case 0x58349b:c.instructions+=1;goto B58349b;
case 0x5834a0:goto L5834a0;
case 0x5834a5:goto L5834a5;
case 0x5834aa:goto L5834aa;
case 0x5834ab:c.instructions+=2;goto B5834ab;
case 0x5834ac:c.instructions+=1;goto B5834ac;
case 0x5834b1:goto L5834b1;
case 0x5834b7:c.instructions+=4;goto B5834b7;
case 0x5834ba:c.instructions+=3;goto B5834ba;
case 0x5834bb:c.instructions+=2;goto B5834bb;
case 0x5834c1:c.instructions+=1;goto B5834c1;
case 0x5834c3:goto L5834c3;
case 0x5834c9:c.instructions+=3;goto B5834c9;
case 0x5834cb:c.instructions+=2;goto B5834cb;
case 0x5834ce:c.instructions+=1;goto B5834ce;
case 0x5834d0:goto L5834d0;
case 0x5834d1:c.instructions+=2;goto B5834d1;
case 0x5834d2:c.instructions+=1;goto B5834d2;
case 0x5834d3:goto L5834d3;
case 0x5834d4:c.instructions+=3;goto B5834d4;
case 0x5834d6:c.instructions+=2;goto B5834d6;
case 0x5834d7:c.instructions+=1;goto B5834d7;
case 0x5834e0:goto L5834e0;
case 0x5834e3:c.instructions+=6;goto B5834e3;
case 0x5834e4:c.instructions+=5;goto B5834e4;
case 0x5834e5:c.instructions+=4;goto B5834e5;
case 0x5834e7:c.instructions+=3;goto B5834e7;
case 0x5834ec:c.instructions+=2;goto B5834ec;
case 0x5834f1:c.instructions+=1;goto B5834f1;
case 0x5834f5:goto L5834f5;
case 0x5834f7:goto L5834f7;
case 0x5834f9:c.instructions+=9;goto B5834f9;
case 0x5834fa:c.instructions+=8;goto B5834fa;
case 0x5834fe:c.instructions+=7;goto B5834fe;
case 0x5834ff:c.instructions+=6;goto B5834ff;
case 0x583503:c.instructions+=5;goto B583503;
case 0x583505:c.instructions+=4;goto B583505;
case 0x583506:c.instructions+=3;goto B583506;
case 0x583510:c.instructions+=2;goto B583510;
case 0x583518:c.instructions+=1;goto B583518;
case 0x58351d:goto L58351d;
case 0x583522:c.instructions+=6;goto B583522;
case 0x583526:c.instructions+=5;goto B583526;
case 0x583529:c.instructions+=4;goto B583529;
case 0x58352a:c.instructions+=3;goto B58352a;
case 0x58352b:c.instructions+=2;goto B58352b;
case 0x58352c:c.instructions+=1;goto B58352c;
case 0x583531:goto L583531;
case 0x583534:c.instructions+=5;goto B583534;
case 0x583535:c.instructions+=4;goto B583535;
case 0x583539:c.instructions+=3;goto B583539;
case 0x58353e:c.instructions+=2;goto B58353e;
case 0x58353f:c.instructions+=1;goto B58353f;
case 0x583544:goto L583544;
case 0x583547:c.instructions+=1;goto B583547;
case 0x58354c:goto L58354c;
case 0x58354e:c.instructions+=2;goto B58354e;
case 0x583550:c.instructions+=1;goto B583550;
case 0x583552:goto L583552;
case 0x583553:c.instructions+=4;goto B583553;
case 0x58355d:c.instructions+=3;goto B58355d;
case 0x58355e:c.instructions+=2;goto B58355e;
case 0x583561:c.instructions+=1;goto B583561;
case 0x583562:goto L583562;
case 0x583564:c.instructions+=3;goto B583564;
case 0x583569:c.instructions+=2;goto B583569;
case 0x58356a:c.instructions+=1;goto B58356a;
case 0x58356f:goto L58356f;
case 0x583573:c.instructions+=3;goto B583573;
case 0x583576:c.instructions+=2;goto B583576;
case 0x583578:c.instructions+=1;goto B583578;
case 0x58357a:goto L58357a;
case 0x58357c:c.instructions+=3;goto B58357c;
case 0x583581:c.instructions+=2;goto B583581;
case 0x583582:c.instructions+=1;goto B583582;
case 0x583587:goto L583587;
case 0x58358a:c.instructions+=4;goto B58358a;
case 0x58358e:c.instructions+=3;goto B58358e;
case 0x58358f:c.instructions+=2;goto B58358f;
case 0x583594:c.instructions+=1;goto B583594;
case 0x583596:goto L583596;
case 0x583598:c.instructions+=3;goto B583598;
case 0x58359d:c.instructions+=2;goto B58359d;
case 0x58359e:c.instructions+=1;goto B58359e;
case 0x5835a3:goto L5835a3;
case 0x5835a6:c.instructions+=3;goto B5835a6;
case 0x5835aa:c.instructions+=2;goto B5835aa;
case 0x5835ab:c.instructions+=1;goto B5835ab;
case 0x5835b0:goto L5835b0;
case 0x5835b1:c.instructions+=1;goto B5835b1;
case 0x5835b6:goto L5835b6;
case 0x5835b9:c.instructions+=6;goto B5835b9;
case 0x5835ba:c.instructions+=5;goto B5835ba;
case 0x5835bc:c.instructions+=4;goto B5835bc;
case 0x5835c6:c.instructions+=3;goto B5835c6;
case 0x5835c7:c.instructions+=2;goto B5835c7;
case 0x5835ca:c.instructions+=1;goto B5835ca;
case 0x5835d0:goto L5835d0;
case 0x5835d4:c.instructions+=5;goto B5835d4;
case 0x5835d5:c.instructions+=4;goto B5835d5;
case 0x5835d6:c.instructions+=3;goto B5835d6;
case 0x5835e0:c.instructions+=2;goto B5835e0;
case 0x5835e2:c.instructions+=1;goto B5835e2;
case 0x5835e7:goto L5835e7;
case 0x5835ea:c.instructions+=2;goto B5835ea;
case 0x5835ec:c.instructions+=1;goto B5835ec;
case 0x5835ee:goto L5835ee;
case 0x5835f3:c.instructions+=3;goto B5835f3;
case 0x5835f4:c.instructions+=2;goto B5835f4;
case 0x5835f5:c.instructions+=1;goto B5835f5;
case 0x5835fa:goto L5835fa;
case 0x5835fd:c.instructions+=3;goto B5835fd;
case 0x583607:c.instructions+=2;goto B583607;
case 0x583608:c.instructions+=1;goto B583608;
case 0x583609:goto L583609;
case 0x58360e:c.instructions+=2;goto B58360e;
case 0x583610:c.instructions+=1;goto B583610;
case 0x583612:goto L583612;
case 0x583618:goto L583618;
case 0x58361a:c.instructions+=3;goto B58361a;
case 0x583624:c.instructions+=2;goto B583624;
case 0x583625:c.instructions+=1;goto B583625;
case 0x583630:goto L583630;
case 0x583634:c.instructions+=2;goto B583634;
case 0x583636:c.instructions+=1;goto B583636;
case 0x583638:goto L583638;
case 0x58363a:c.instructions+=1;goto B58363a;
case 0x58363b:goto L58363b;
case 0x58363c:c.instructions+=5;goto B58363c;
case 0x583640:c.instructions+=4;goto B583640;
case 0x583642:c.instructions+=3;goto B583642;
case 0x583643:c.instructions+=2;goto B583643;
case 0x583644:c.instructions+=1;goto B583644;
case 0x583649:goto L583649;
case 0x58364c:c.instructions+=2;goto B58364c;
case 0x58364e:c.instructions+=1;goto B58364e;
case 0x583650:goto L583650;
case 0x583653:c.instructions+=7;goto B583653;
case 0x583657:c.instructions+=6;goto B583657;
case 0x583659:c.instructions+=5;goto B583659;
case 0x58365c:c.instructions+=4;goto B58365c;
case 0x58365e:c.instructions+=3;goto B58365e;
case 0x583660:c.instructions+=2;goto B583660;
case 0x583661:c.instructions+=1;goto B583661;
case 0x583662:goto L583662;
case 0x583664:c.instructions+=2;goto B583664;
case 0x583665:c.instructions+=1;goto B583665;
case 0x583670:goto L583670;
case 0x583671:c.instructions+=16;goto B583671;
case 0x583673:c.instructions+=15;goto B583673;
case 0x583676:c.instructions+=14;goto B583676;
case 0x58367c:c.instructions+=13;goto B58367c;
case 0x58367f:c.instructions+=12;goto B58367f;
case 0x583681:c.instructions+=11;goto B583681;
case 0x583684:c.instructions+=10;goto B583684;
case 0x583686:c.instructions+=9;goto B583686;
case 0x58368a:c.instructions+=8;goto B58368a;
case 0x58368d:c.instructions+=7;goto B58368d;
case 0x58368e:c.instructions+=6;goto B58368e;
case 0x583691:c.instructions+=5;goto B583691;
case 0x583692:c.instructions+=4;goto B583692;
case 0x583694:c.instructions+=3;goto B583694;
case 0x583696:c.instructions+=2;goto B583696;
case 0x583699:c.instructions+=1;goto B583699;
case 0x58369d:goto L58369d;
case 0x58369f:goto L58369f;
case 0x5836a1:c.instructions+=1;goto B5836a1;
case 0x5836a4:goto L5836a4;
case 0x5836a6:goto L5836a6;
case 0x5836a9:c.instructions+=6;goto B5836a9;
case 0x5836ae:c.instructions+=5;goto B5836ae;
case 0x5836b0:c.instructions+=4;goto B5836b0;
case 0x5836b4:c.instructions+=3;goto B5836b4;
case 0x5836b5:c.instructions+=2;goto B5836b5;
case 0x5836b6:c.instructions+=1;goto B5836b6;
case 0x5836bb:goto L5836bb;
case 0x5836be:c.instructions+=5;goto B5836be;
case 0x5836bf:c.instructions+=4;goto B5836bf;
case 0x5836c0:c.instructions+=3;goto B5836c0;
case 0x5836c2:c.instructions+=2;goto B5836c2;
case 0x5836c3:c.instructions+=1;goto B5836c3;
case 0x5836d0:goto L5836d0;
case 0x5836d4:c.instructions+=3;goto B5836d4;
case 0x5836d6:c.instructions+=2;goto B5836d6;
case 0x5836d7:c.instructions+=1;goto B5836d7;
case 0x5836dc:goto L5836dc;
case 0x5836df:c.instructions+=1;goto B5836df;
case 0x5836e0:goto L5836e0;
case 0x5836e4:c.instructions+=3;goto B5836e4;
case 0x5836ea:c.instructions+=2;goto B5836ea;
case 0x5836f0:c.instructions+=1;goto B5836f0;
case 0x5836f5:goto L5836f5;
case 0x5836fa:c.instructions+=2;goto B5836fa;
case 0x583701:c.instructions+=1;goto B583701;
case 0x583710:goto L583710;
case 0x583713:c.instructions+=8;goto B583713;
case 0x583714:c.instructions+=7;goto B583714;
case 0x583715:c.instructions+=6;goto B583715;
case 0x583716:c.instructions+=5;goto B583716;
case 0x58371c:c.instructions+=4;goto B58371c;
case 0x58371e:c.instructions+=3;goto B58371e;
case 0x583723:c.instructions+=2;goto B583723;
case 0x583725:c.instructions+=1;goto B583725;
case 0x583730:goto L583730;
case 0x583736:c.instructions+=3;goto B583736;
case 0x583738:c.instructions+=2;goto B583738;
case 0x58373c:c.instructions+=1;goto B58373c;
case 0x58373e:goto L58373e;
case 0x583744:c.instructions+=11;goto B583744;
case 0x583746:c.instructions+=10;goto B583746;
case 0x583748:c.instructions+=9;goto B583748;
case 0x58374c:c.instructions+=8;goto B58374c;
case 0x583750:c.instructions+=7;goto B583750;
case 0x583756:c.instructions+=6;goto B583756;
case 0x58375a:c.instructions+=5;goto B58375a;
case 0x583760:c.instructions+=4;goto B583760;
case 0x583762:c.instructions+=3;goto B583762;
case 0x583764:c.instructions+=2;goto B583764;
case 0x583767:c.instructions+=1;goto B583767;
case 0x583769:goto L583769;
case 0x58376c:c.instructions+=2;goto B58376c;
case 0x58376e:c.instructions+=1;goto B58376e;
case 0x583770:goto L583770;
case 0x583772:c.instructions+=1;goto B583772;
case 0x583778:goto L583778;
case 0x58377d:c.instructions+=3;goto B58377d;
case 0x58377f:c.instructions+=2;goto B58377f;
case 0x583785:c.instructions+=1;goto B583785;
case 0x583787:goto L583787;
case 0x58378d:c.instructions+=3;goto B58378d;
case 0x58378f:c.instructions+=2;goto B58378f;
case 0x583793:c.instructions+=1;goto B583793;
case 0x583795:goto L583795;
case 0x58379b:c.instructions+=11;goto B58379b;
case 0x58379d:c.instructions+=10;goto B58379d;
case 0x58379f:c.instructions+=9;goto B58379f;
case 0x5837a3:c.instructions+=8;goto B5837a3;
case 0x5837a7:c.instructions+=7;goto B5837a7;
case 0x5837ad:c.instructions+=6;goto B5837ad;
case 0x5837b1:c.instructions+=5;goto B5837b1;
case 0x5837b7:c.instructions+=4;goto B5837b7;
case 0x5837b9:c.instructions+=3;goto B5837b9;
case 0x5837bb:c.instructions+=2;goto B5837bb;
case 0x5837be:c.instructions+=1;goto B5837be;
case 0x5837c0:goto L5837c0;
case 0x5837c3:c.instructions+=2;goto B5837c3;
case 0x5837c5:c.instructions+=1;goto B5837c5;
case 0x5837c7:goto L5837c7;
case 0x5837c9:c.instructions+=1;goto B5837c9;
case 0x5837cf:goto L5837cf;
case 0x5837d4:c.instructions+=3;goto B5837d4;
case 0x5837d6:c.instructions+=2;goto B5837d6;
case 0x5837dc:c.instructions+=1;goto B5837dc;
case 0x5837de:goto L5837de;
case 0x5837e4:c.instructions+=3;goto B5837e4;
case 0x5837e6:c.instructions+=2;goto B5837e6;
case 0x5837ea:c.instructions+=1;goto B5837ea;
case 0x5837ec:goto L5837ec;
case 0x5837f2:c.instructions+=11;goto B5837f2;
case 0x5837f4:c.instructions+=10;goto B5837f4;
case 0x5837f6:c.instructions+=9;goto B5837f6;
case 0x5837fa:c.instructions+=8;goto B5837fa;
case 0x5837fe:c.instructions+=7;goto B5837fe;
case 0x583804:c.instructions+=6;goto B583804;
case 0x583808:c.instructions+=5;goto B583808;
case 0x58380e:c.instructions+=4;goto B58380e;
case 0x583810:c.instructions+=3;goto B583810;
case 0x583812:c.instructions+=2;goto B583812;
case 0x583815:c.instructions+=1;goto B583815;
case 0x583817:goto L583817;
case 0x583819:c.instructions+=1;goto B583819;
case 0x58381b:goto L58381b;
case 0x58381d:c.instructions+=1;goto B58381d;
case 0x58381f:goto L58381f;
case 0x583824:c.instructions+=4;goto B583824;
case 0x583826:c.instructions+=3;goto B583826;
case 0x583828:c.instructions+=2;goto B583828;
case 0x58382e:c.instructions+=1;goto B58382e;
case 0x583830:goto L583830;
case 0x583836:c.instructions+=3;goto B583836;
case 0x583838:c.instructions+=2;goto B583838;
case 0x58383c:c.instructions+=1;goto B58383c;
case 0x58383e:goto L58383e;
case 0x583844:c.instructions+=11;goto B583844;
case 0x583846:c.instructions+=10;goto B583846;
case 0x583848:c.instructions+=9;goto B583848;
case 0x58384c:c.instructions+=8;goto B58384c;
case 0x583850:c.instructions+=7;goto B583850;
case 0x583856:c.instructions+=6;goto B583856;
case 0x58385a:c.instructions+=5;goto B58385a;
case 0x583860:c.instructions+=4;goto B583860;
case 0x583862:c.instructions+=3;goto B583862;
case 0x583864:c.instructions+=2;goto B583864;
case 0x583867:c.instructions+=1;goto B583867;
case 0x583869:goto L583869;
case 0x58386c:c.instructions+=2;goto B58386c;
case 0x58386e:c.instructions+=1;goto B58386e;
case 0x583870:goto L583870;
case 0x583872:c.instructions+=1;goto B583872;
case 0x583874:goto L583874;
case 0x583879:c.instructions+=3;goto B583879;
case 0x58387b:c.instructions+=2;goto B58387b;
case 0x583881:c.instructions+=1;goto B583881;
case 0x583883:goto L583883;
case 0x583886:c.instructions+=4;goto B583886;
case 0x583889:c.instructions+=3;goto B583889;
case 0x58388c:c.instructions+=2;goto B58388c;
case 0x58388f:c.instructions+=1;goto B58388f;
case 0x583895:goto L583895;
case 0x583896:c.instructions+=5;goto B583896;
case 0x583898:c.instructions+=4;goto B583898;
case 0x583899:c.instructions+=3;goto B583899;
case 0x58389a:c.instructions+=2;goto B58389a;
case 0x58389d:c.instructions+=1;goto B58389d;
case 0x5838a0:goto L5838a0;
case 0x5838a5:c.instructions+=2;goto B5838a5;
case 0x5838a7:c.instructions+=1;goto B5838a7;
case 0x5838a9:goto L5838a9;
case 0x5838ae:c.instructions+=2;goto B5838ae;
case 0x5838b0:c.instructions+=1;goto B5838b0;
case 0x5838b2:goto L5838b2;
case 0x5838b4:c.instructions+=1;goto B5838b4;
case 0x5838b5:goto L5838b5;
case 0x5838ba:c.instructions+=1;goto B5838ba;
case 0x5838c0:goto L5838c0;
case 0x5838c5:c.instructions+=9;goto B5838c5;
case 0x5838cb:c.instructions+=8;goto B5838cb;
case 0x5838cc:c.instructions+=7;goto B5838cc;
case 0x5838d1:c.instructions+=6;goto B5838d1;
case 0x5838d5:c.instructions+=5;goto B5838d5;
case 0x5838d7:c.instructions+=4;goto B5838d7;
case 0x5838dd:c.instructions+=3;goto B5838dd;
case 0x5838e1:c.instructions+=2;goto B5838e1;
case 0x5838e3:c.instructions+=1;goto B5838e3;
case 0x5838e5:goto L5838e5;
case 0x5838eb:c.instructions+=2;goto B5838eb;
case 0x5838f1:c.instructions+=1;goto B5838f1;
case 0x5838f3:goto L5838f3;
case 0x5838f9:c.instructions+=1;goto B5838f9;
case 0x5838ff:goto L5838ff;
case 0x583904:c.instructions+=7;goto B583904;
case 0x58390a:c.instructions+=6;goto B58390a;
case 0x583910:c.instructions+=5;goto B583910;
case 0x583916:c.instructions+=4;goto B583916;
case 0x583917:c.instructions+=3;goto B583917;
case 0x58391d:c.instructions+=2;goto B58391d;
case 0x583923:c.instructions+=1;goto B583923;
case 0x583930:goto L583930;
case 0x583935:c.instructions+=9;goto B583935;
case 0x58393b:c.instructions+=8;goto B58393b;
case 0x58393c:c.instructions+=7;goto B58393c;
case 0x583941:c.instructions+=6;goto B583941;
case 0x583945:c.instructions+=5;goto B583945;
case 0x583947:c.instructions+=4;goto B583947;
case 0x58394d:c.instructions+=3;goto B58394d;
case 0x583951:c.instructions+=2;goto B583951;
case 0x583953:c.instructions+=1;goto B583953;
case 0x583955:goto L583955;
case 0x58395b:c.instructions+=2;goto B58395b;
case 0x583961:c.instructions+=1;goto B583961;
case 0x583963:goto L583963;
case 0x583969:c.instructions+=1;goto B583969;
case 0x58396f:goto L58396f;
case 0x583974:c.instructions+=7;goto B583974;
case 0x58397a:c.instructions+=6;goto B58397a;
case 0x583980:c.instructions+=5;goto B583980;
case 0x583986:c.instructions+=4;goto B583986;
case 0x583987:c.instructions+=3;goto B583987;
case 0x58398d:c.instructions+=2;goto B58398d;
case 0x583993:c.instructions+=1;goto B583993;
case 0x5839a0:goto L5839a0;
case 0x5839a4:c.instructions+=2;goto B5839a4;
case 0x5839a7:c.instructions+=1;goto B5839a7;
case 0x5839a9:goto L5839a9;
case 0x5839b0:goto L5839b0;
case 0x5839b5:c.instructions+=1;goto B5839b5;
case 0x5839b6:goto L5839b6;
case 0x5839bb:c.instructions+=1;goto B5839bb;
case 0x5839bc:goto L5839bc;
case 0x5839c1:c.instructions+=1;goto B5839c1;
case 0x5839c2:goto L5839c2;
case 0x5839c7:c.instructions+=1;goto B5839c7;
case 0x5839c8:goto L5839c8;
case 0x5839cd:c.instructions+=1;goto B5839cd;
case 0x5839ce:goto L5839ce;
case 0x5839d3:c.instructions+=1;goto B5839d3;
case 0x5839d4:goto L5839d4;
case 0x5839d9:c.instructions+=1;goto B5839d9;
case 0x5839da:goto L5839da;
case 0x5839df:c.instructions+=1;goto B5839df;
case 0x5839e0:goto L5839e0;
case 0x5839e5:c.instructions+=1;goto B5839e5;
case 0x5839e6:goto L5839e6;
case 0x5839eb:c.instructions+=1;goto B5839eb;
case 0x5839ec:goto L5839ec;
case 0x5839f1:c.instructions+=1;goto B5839f1;
case 0x5839f2:goto L5839f2;
case 0x5839f7:c.instructions+=1;goto B5839f7;
case 0x5839f8:goto L5839f8;
case 0x5839fd:c.instructions+=1;goto B5839fd;
case 0x5839fe:goto L5839fe;
case 0x583a03:c.instructions+=1;goto B583a03;
case 0x583a04:goto L583a04;
case 0x583a09:c.instructions+=1;goto B583a09;
case 0x583a0a:goto L583a0a;
case 0x583a0f:c.instructions+=1;goto B583a0f;
case 0x583a10:goto L583a10;
case 0x583a15:c.instructions+=1;goto B583a15;
case 0x583a16:goto L583a16;
case 0x583a1b:c.instructions+=1;goto B583a1b;
case 0x583a1c:goto L583a1c;
case 0x583a21:c.instructions+=1;goto B583a21;
case 0x583a70:goto L583a70;
case 0x583a72:c.instructions+=3;goto B583a72;
case 0x583a74:c.instructions+=2;goto B583a74;
case 0x583a79:c.instructions+=1;goto B583a79;
case 0x583a80:goto L583a80;
case 0x583a83:c.instructions+=1;goto B583a83;
case 0x583a85:goto L583a85;
case 0x583a88:c.instructions+=3;goto B583a88;
case 0x583a89:c.instructions+=2;goto B583a89;
case 0x583a8f:c.instructions+=1;goto B583a8f;
case 0x583a91:goto L583a91;
case 0x583a92:goto L583a92;
case 0x583a98:c.instructions+=7;goto B583a98;
case 0x583a9c:c.instructions+=6;goto B583a9c;
case 0x583a9f:c.instructions+=5;goto B583a9f;
case 0x583aa0:c.instructions+=4;goto B583aa0;
case 0x583aa6:c.instructions+=3;goto B583aa6;
case 0x583aac:c.instructions+=2;goto B583aac;
case 0x583ab2:c.instructions+=1;goto B583ab2;
case 0x583ac0:goto L583ac0;
case 0x583ac4:c.instructions+=5;goto B583ac4;
case 0x583ac5:c.instructions+=4;goto B583ac5;
case 0x583ac7:c.instructions+=3;goto B583ac7;
case 0x583acc:c.instructions+=2;goto B583acc;
case 0x583acf:c.instructions+=1;goto B583acf;
case 0x583ad0:goto L583ad0;
case 0x583ad3:c.instructions+=1;goto B583ad3;
case 0x583ad5:goto L583ad5;
case 0x583ad7:c.instructions+=1;goto B583ad7;
case 0x583ad9:goto L583ad9;
case 0x583adc:c.instructions+=2;goto B583adc;
case 0x583ae1:c.instructions+=1;goto B583ae1;
case 0x583ae3:goto L583ae3;
case 0x583ae5:goto L583ae5;
case 0x583ae6:c.instructions+=1;goto B583ae6;
case 0x583af0:goto L583af0;
case 0x583af2:c.instructions+=6;goto B583af2;
case 0x583af4:c.instructions+=5;goto B583af4;
case 0x583afa:c.instructions+=4;goto B583afa;
case 0x583afd:c.instructions+=3;goto B583afd;
case 0x583b00:c.instructions+=2;goto B583b00;
case 0x583b06:c.instructions+=1;goto B583b06;
case 0x583b10:goto L583b10;
case 0x583b14:c.instructions+=4;goto B583b14;
case 0x583b15:c.instructions+=3;goto B583b15;
case 0x583b16:c.instructions+=2;goto B583b16;
case 0x583b18:c.instructions+=1;goto B583b18;
case 0x583b1d:goto L583b1d;
case 0x583b20:c.instructions+=7;goto B583b20;
case 0x583b22:c.instructions+=6;goto B583b22;
case 0x583b24:c.instructions+=5;goto B583b24;
case 0x583b27:c.instructions+=4;goto B583b27;
case 0x583b2a:c.instructions+=3;goto B583b2a;
case 0x583b2c:c.instructions+=2;goto B583b2c;
case 0x583b2d:c.instructions+=1;goto B583b2d;
case 0x583b30:goto L583b30;
case 0x583b31:c.instructions+=4;goto B583b31;
case 0x583b33:c.instructions+=3;goto B583b33;
case 0x583b36:c.instructions+=2;goto B583b36;
case 0x583b38:c.instructions+=1;goto B583b38;
case 0x583b3a:goto L583b3a;
case 0x583b3b:c.instructions+=1;goto B583b3b;
case 0x583b40:goto L583b40;
case 0x583b43:c.instructions+=1;goto B583b43;
case 0x583b4a:goto L583b4a;
case 0x583b4b:c.instructions+=1;goto B583b4b;
case 0x583b50:goto L583b50;
case 0x583b51:c.instructions+=5;goto B583b51;
case 0x583b53:c.instructions+=4;goto B583b53;
case 0x583b56:c.instructions+=3;goto B583b56;
case 0x583b58:c.instructions+=2;goto B583b58;
case 0x583b5a:c.instructions+=1;goto B583b5a;
case 0x583b60:goto L583b60;
case 0x583b61:c.instructions+=8;goto B583b61;
case 0x583b62:c.instructions+=7;goto B583b62;
case 0x583b66:c.instructions+=6;goto B583b66;
case 0x583b68:c.instructions+=5;goto B583b68;
case 0x583b6a:c.instructions+=4;goto B583b6a;
case 0x583b6b:c.instructions+=3;goto B583b6b;
case 0x583b6e:c.instructions+=2;goto B583b6e;
case 0x583b6f:c.instructions+=1;goto B583b6f;
case 0x583b74:goto L583b74;
case 0x583b77:c.instructions+=5;goto B583b77;
case 0x583b79:c.instructions+=4;goto B583b79;
case 0x583b7a:c.instructions+=3;goto B583b7a;
case 0x583b7d:c.instructions+=2;goto B583b7d;
case 0x583b7e:c.instructions+=1;goto B583b7e;
case 0x583b83:goto L583b83;
case 0x583b86:c.instructions+=5;goto B583b86;
case 0x583b88:c.instructions+=4;goto B583b88;
case 0x583b89:c.instructions+=3;goto B583b89;
case 0x583b8c:c.instructions+=2;goto B583b8c;
case 0x583b8d:c.instructions+=1;goto B583b8d;
case 0x583b92:goto L583b92;
case 0x583b95:c.instructions+=5;goto B583b95;
case 0x583b97:c.instructions+=4;goto B583b97;
case 0x583b98:c.instructions+=3;goto B583b98;
case 0x583b9e:c.instructions+=2;goto B583b9e;
case 0x583b9f:c.instructions+=1;goto B583b9f;
case 0x583ba4:goto L583ba4;
case 0x583ba7:c.instructions+=5;goto B583ba7;
case 0x583ba9:c.instructions+=4;goto B583ba9;
case 0x583baa:c.instructions+=3;goto B583baa;
case 0x583bb0:c.instructions+=2;goto B583bb0;
case 0x583bb1:c.instructions+=1;goto B583bb1;
case 0x583bb6:goto L583bb6;
case 0x583bb9:c.instructions+=5;goto B583bb9;
case 0x583bbb:c.instructions+=4;goto B583bbb;
case 0x583bbc:c.instructions+=3;goto B583bbc;
case 0x583bc2:c.instructions+=2;goto B583bc2;
case 0x583bc3:c.instructions+=1;goto B583bc3;
case 0x583bc8:goto L583bc8;
case 0x583bcb:c.instructions+=6;goto B583bcb;
case 0x583bce:c.instructions+=5;goto B583bce;
case 0x583bd0:c.instructions+=4;goto B583bd0;
case 0x583bd1:c.instructions+=3;goto B583bd1;
case 0x583bd7:c.instructions+=2;goto B583bd7;
case 0x583bd8:c.instructions+=1;goto B583bd8;
case 0x583bdd:goto L583bdd;
case 0x583be0:c.instructions+=4;goto B583be0;
case 0x583be1:c.instructions+=3;goto B583be1;
case 0x583be2:c.instructions+=2;goto B583be2;
case 0x583be6:c.instructions+=1;goto B583be6;
case 0x583beb:goto L583beb;
case 0x583bee:c.instructions+=4;goto B583bee;
case 0x583bf1:c.instructions+=3;goto B583bf1;
case 0x583bf2:c.instructions+=2;goto B583bf2;
case 0x583bf3:c.instructions+=1;goto B583bf3;
case 0x583bf8:goto L583bf8;
case 0x583bfb:c.instructions+=4;goto B583bfb;
case 0x583bfc:c.instructions+=3;goto B583bfc;
case 0x583c03:c.instructions+=2;goto B583c03;
case 0x583c05:c.instructions+=1;goto B583c05;
case 0x583c06:goto L583c06;
case 0x583c07:c.instructions+=1;goto B583c07;
case 0x583c10:goto L583c10;
case 0x583c16:c.instructions+=7;goto B583c16;
case 0x583c17:c.instructions+=6;goto B583c17;
case 0x583c19:c.instructions+=5;goto B583c19;
case 0x583c1c:c.instructions+=4;goto B583c1c;
case 0x583c20:c.instructions+=3;goto B583c20;
case 0x583c21:c.instructions+=2;goto B583c21;
case 0x583c22:c.instructions+=1;goto B583c22;
case 0x583c27:goto L583c27;
case 0x583c29:c.instructions+=5;goto B583c29;
case 0x583c2c:c.instructions+=4;goto B583c2c;
case 0x583c30:c.instructions+=3;goto B583c30;
case 0x583c31:c.instructions+=2;goto B583c31;
case 0x583c33:c.instructions+=1;goto B583c33;
case 0x583c36:goto L583c36;
case 0x583c3d:c.instructions+=3;goto B583c3d;
case 0x583c3e:c.instructions+=2;goto B583c3e;
case 0x583c44:c.instructions+=1;goto B583c44;
case 0x583c50:goto L583c50;
case 0x583c56:c.instructions+=7;goto B583c56;
case 0x583c57:c.instructions+=6;goto B583c57;
case 0x583c59:c.instructions+=5;goto B583c59;
case 0x583c5c:c.instructions+=4;goto B583c5c;
case 0x583c60:c.instructions+=3;goto B583c60;
case 0x583c61:c.instructions+=2;goto B583c61;
case 0x583c62:c.instructions+=1;goto B583c62;
case 0x583c67:goto L583c67;
case 0x583c69:c.instructions+=5;goto B583c69;
case 0x583c6c:c.instructions+=4;goto B583c6c;
case 0x583c70:c.instructions+=3;goto B583c70;
case 0x583c71:c.instructions+=2;goto B583c71;
case 0x583c73:c.instructions+=1;goto B583c73;
case 0x583c76:goto L583c76;
case 0x583c7d:c.instructions+=3;goto B583c7d;
case 0x583c7e:c.instructions+=2;goto B583c7e;
case 0x583c84:c.instructions+=1;goto B583c84;
case 0x583c90:goto L583c90;
case 0x583c96:c.instructions+=7;goto B583c96;
case 0x583c97:c.instructions+=6;goto B583c97;
case 0x583c99:c.instructions+=5;goto B583c99;
case 0x583c9c:c.instructions+=4;goto B583c9c;
case 0x583ca0:c.instructions+=3;goto B583ca0;
case 0x583ca1:c.instructions+=2;goto B583ca1;
case 0x583ca2:c.instructions+=1;goto B583ca2;
case 0x583ca7:goto L583ca7;
case 0x583ca9:c.instructions+=5;goto B583ca9;
case 0x583cac:c.instructions+=4;goto B583cac;
case 0x583cb0:c.instructions+=3;goto B583cb0;
case 0x583cb1:c.instructions+=2;goto B583cb1;
case 0x583cb3:c.instructions+=1;goto B583cb3;
case 0x583cb6:goto L583cb6;
case 0x583cbd:c.instructions+=3;goto B583cbd;
case 0x583cbe:c.instructions+=2;goto B583cbe;
case 0x583cc4:c.instructions+=1;goto B583cc4;
case 0x583cd0:goto L583cd0;
case 0x583cd6:c.instructions+=7;goto B583cd6;
case 0x583cd7:c.instructions+=6;goto B583cd7;
case 0x583cd9:c.instructions+=5;goto B583cd9;
case 0x583cdc:c.instructions+=4;goto B583cdc;
case 0x583ce0:c.instructions+=3;goto B583ce0;
case 0x583ce1:c.instructions+=2;goto B583ce1;
case 0x583ce2:c.instructions+=1;goto B583ce2;
case 0x583ce7:goto L583ce7;
case 0x583ce9:c.instructions+=5;goto B583ce9;
case 0x583cec:c.instructions+=4;goto B583cec;
case 0x583cf0:c.instructions+=3;goto B583cf0;
case 0x583cf1:c.instructions+=2;goto B583cf1;
case 0x583cf3:c.instructions+=1;goto B583cf3;
case 0x583cf6:goto L583cf6;
case 0x583cf9:c.instructions+=2;goto B583cf9;
case 0x583cfa:c.instructions+=1;goto B583cfa;
case 0x583cff:goto L583cff;
case 0x583d02:c.instructions+=4;goto B583d02;
case 0x583d09:c.instructions+=3;goto B583d09;
case 0x583d0a:c.instructions+=2;goto B583d0a;
case 0x583d10:c.instructions+=1;goto B583d10;
case 0x583d20:goto L583d20;
case 0x583d26:c.instructions+=7;goto B583d26;
case 0x583d27:c.instructions+=6;goto B583d27;
case 0x583d29:c.instructions+=5;goto B583d29;
case 0x583d2c:c.instructions+=4;goto B583d2c;
case 0x583d30:c.instructions+=3;goto B583d30;
case 0x583d31:c.instructions+=2;goto B583d31;
case 0x583d32:c.instructions+=1;goto B583d32;
case 0x583d37:goto L583d37;
case 0x583d39:c.instructions+=6;goto B583d39;
case 0x583d3c:c.instructions+=5;goto B583d3c;
case 0x583d40:c.instructions+=4;goto B583d40;
case 0x583d41:c.instructions+=3;goto B583d41;
case 0x583d42:c.instructions+=2;goto B583d42;
case 0x583d44:c.instructions+=1;goto B583d44;
case 0x583d47:goto L583d47;
case 0x583d4e:c.instructions+=3;goto B583d4e;
case 0x583d4f:c.instructions+=2;goto B583d4f;
case 0x583d55:c.instructions+=1;goto B583d55;
case 0x583d60:goto L583d60;
case 0x583d61:c.instructions+=3;goto B583d61;
case 0x583d63:c.instructions+=2;goto B583d63;
case 0x583d65:c.instructions+=1;goto B583d65;
case 0x583d68:goto L583d68;
case 0x583d6b:c.instructions+=1;goto B583d6b;
case 0x583d6d:goto L583d6d;
case 0x583d70:c.instructions+=3;goto B583d70;
case 0x583d71:c.instructions+=2;goto B583d71;
case 0x583d72:c.instructions+=1;goto B583d72;
case 0x583d77:goto L583d77;
case 0x583d79:c.instructions+=5;goto B583d79;
case 0x583d7c:c.instructions+=4;goto B583d7c;
case 0x583d83:c.instructions+=3;goto B583d83;
case 0x583d85:c.instructions+=2;goto B583d85;
case 0x583d86:c.instructions+=1;goto B583d86;
case 0x583d89:goto L583d89;
case 0x583d8a:c.instructions+=1;goto B583d8a;
case 0x583d90:goto L583d90;
case 0x583d96:c.instructions+=5;goto B583d96;
case 0x583d97:c.instructions+=4;goto B583d97;
case 0x583d99:c.instructions+=3;goto B583d99;
case 0x583d9b:c.instructions+=2;goto B583d9b;
case 0x583d9c:c.instructions+=1;goto B583d9c;
case 0x583d9f:goto L583d9f;
case 0x583da1:c.instructions+=2;goto B583da1;
case 0x583da4:c.instructions+=1;goto B583da4;
case 0x583daa:goto L583daa;
case 0x583dad:c.instructions+=4;goto B583dad;
case 0x583db1:c.instructions+=3;goto B583db1;
case 0x583db2:c.instructions+=2;goto B583db2;
case 0x583db3:c.instructions+=1;goto B583db3;
case 0x583db8:goto L583db8;
case 0x583dbb:c.instructions+=2;goto B583dbb;
case 0x583dbe:c.instructions+=1;goto B583dbe;
case 0x583dc0:goto L583dc0;
case 0x583dc7:c.instructions+=1;goto B583dc7;
case 0x583dc9:goto L583dc9;
case 0x583dcc:c.instructions+=1;goto B583dcc;
case 0x583dce:goto L583dce;
case 0x583dd5:c.instructions+=1;goto B583dd5;
case 0x583dd7:goto L583dd7;
case 0x583dda:c.instructions+=1;goto B583dda;
case 0x583ddc:goto L583ddc;
case 0x583de3:c.instructions+=1;goto B583de3;
case 0x583de5:goto L583de5;
case 0x583de8:c.instructions+=1;goto B583de8;
case 0x583dea:goto L583dea;
case 0x583df1:goto L583df1;
case 0x583df3:c.instructions+=1;goto B583df3;
case 0x583df5:goto L583df5;
case 0x583df7:c.instructions+=5;goto B583df7;
case 0x583df9:c.instructions+=4;goto B583df9;
case 0x583e00:c.instructions+=3;goto B583e00;
case 0x583e01:c.instructions+=2;goto B583e01;
case 0x583e03:c.instructions+=1;goto B583e03;
case 0x583e06:goto L583e06;
case 0x583e08:c.instructions+=1;goto B583e08;
case 0x583e0a:goto L583e0a;
case 0x583e0d:c.instructions+=4;goto B583e0d;
case 0x583e11:c.instructions+=3;goto B583e11;
case 0x583e12:c.instructions+=2;goto B583e12;
case 0x583e13:c.instructions+=1;goto B583e13;
case 0x583e18:goto L583e18;
case 0x583e1b:goto L583e1b;
case 0x583e1e:c.instructions+=3;goto B583e1e;
case 0x583e1f:c.instructions+=2;goto B583e1f;
case 0x583e20:c.instructions+=1;goto B583e20;
case 0x583e25:goto L583e25;
case 0x583e27:c.instructions+=4;goto B583e27;
case 0x583e2a:c.instructions+=3;goto B583e2a;
case 0x583e2c:c.instructions+=2;goto B583e2c;
case 0x583e33:c.instructions+=1;goto B583e33;
case 0x583e36:goto L583e36;
case 0x583e37:c.instructions+=3;goto B583e37;
case 0x583e38:c.instructions+=2;goto B583e38;
case 0x583e3e:c.instructions+=1;goto B583e3e;
case 0x583e40:goto L583e40;
case 0x583e46:c.instructions+=5;goto B583e46;
case 0x583e47:c.instructions+=4;goto B583e47;
case 0x583e49:c.instructions+=3;goto B583e49;
case 0x583e4b:c.instructions+=2;goto B583e4b;
case 0x583e4c:c.instructions+=1;goto B583e4c;
case 0x583e4f:goto L583e4f;
case 0x583e51:c.instructions+=2;goto B583e51;
case 0x583e54:c.instructions+=1;goto B583e54;
case 0x583e5a:goto L583e5a;
case 0x583e5d:c.instructions+=4;goto B583e5d;
case 0x583e61:c.instructions+=3;goto B583e61;
case 0x583e62:c.instructions+=2;goto B583e62;
case 0x583e63:c.instructions+=1;goto B583e63;
case 0x583e68:goto L583e68;
case 0x583e6b:c.instructions+=2;goto B583e6b;
case 0x583e6e:c.instructions+=1;goto B583e6e;
case 0x583e70:goto L583e70;
case 0x583e77:c.instructions+=1;goto B583e77;
case 0x583e79:goto L583e79;
case 0x583e7c:c.instructions+=1;goto B583e7c;
case 0x583e7e:goto L583e7e;
case 0x583e85:c.instructions+=1;goto B583e85;
case 0x583e87:goto L583e87;
case 0x583e8a:c.instructions+=1;goto B583e8a;
case 0x583e8c:goto L583e8c;
case 0x583e93:c.instructions+=1;goto B583e93;
case 0x583e95:goto L583e95;
case 0x583e98:c.instructions+=1;goto B583e98;
case 0x583e9a:goto L583e9a;
case 0x583ea1:goto L583ea1;
case 0x583ea3:c.instructions+=1;goto B583ea3;
case 0x583ea5:goto L583ea5;
case 0x583ea7:c.instructions+=4;goto B583ea7;
case 0x583eab:c.instructions+=3;goto B583eab;
case 0x583eac:c.instructions+=2;goto B583eac;
case 0x583eae:c.instructions+=1;goto B583eae;
case 0x583eb1:goto L583eb1;
case 0x583eb3:c.instructions+=1;goto B583eb3;
case 0x583eb5:goto L583eb5;
case 0x583eb8:c.instructions+=4;goto B583eb8;
case 0x583ebc:c.instructions+=3;goto B583ebc;
case 0x583ebd:c.instructions+=2;goto B583ebd;
case 0x583ebe:c.instructions+=1;goto B583ebe;
case 0x583ec3:goto L583ec3;
case 0x583ec6:goto L583ec6;
case 0x583ec9:c.instructions+=3;goto B583ec9;
case 0x583eca:c.instructions+=2;goto B583eca;
case 0x583ecb:c.instructions+=1;goto B583ecb;
case 0x583ed0:goto L583ed0;
case 0x583ed2:c.instructions+=4;goto B583ed2;
case 0x583ed5:c.instructions+=3;goto B583ed5;
case 0x583ed7:c.instructions+=2;goto B583ed7;
case 0x583ede:c.instructions+=1;goto B583ede;
case 0x583ee1:goto L583ee1;
case 0x583ee2:c.instructions+=3;goto B583ee2;
case 0x583ee3:c.instructions+=2;goto B583ee3;
case 0x583ee9:c.instructions+=1;goto B583ee9;
case 0x583ef0:goto L583ef0;
case 0x583ef1:c.instructions+=6;goto B583ef1;
case 0x583ef2:c.instructions+=5;goto B583ef2;
case 0x583ef3:c.instructions+=4;goto B583ef3;
case 0x583ef5:c.instructions+=3;goto B583ef5;
case 0x583ef7:c.instructions+=2;goto B583ef7;
case 0x583ef8:c.instructions+=1;goto B583ef8;
case 0x583efb:goto L583efb;
case 0x583efe:c.instructions+=3;goto B583efe;
case 0x583eff:c.instructions+=2;goto B583eff;
case 0x583f01:c.instructions+=1;goto B583f01;
case 0x583f06:goto L583f06;
case 0x583f09:c.instructions+=6;goto B583f09;
case 0x583f0b:c.instructions+=5;goto B583f0b;
case 0x583f10:c.instructions+=4;goto B583f10;
case 0x583f13:c.instructions+=3;goto B583f13;
case 0x583f16:c.instructions+=2;goto B583f16;
case 0x583f18:c.instructions+=1;goto B583f18;
case 0x583f1a:goto L583f1a;
case 0x583f1d:c.instructions+=3;goto B583f1d;
case 0x583f1e:c.instructions+=2;goto B583f1e;
case 0x583f1f:c.instructions+=1;goto B583f1f;
case 0x583f24:goto L583f24;
case 0x583f27:goto L583f27;
case 0x583f2b:c.instructions+=2;goto B583f2b;
case 0x583f2d:c.instructions+=1;goto B583f2d;
case 0x583f2f:goto L583f2f;
case 0x583f31:c.instructions+=1;goto B583f31;
case 0x583f33:goto L583f33;
case 0x583f35:c.instructions+=7;goto B583f35;
case 0x583f36:c.instructions+=6;goto B583f36;
case 0x583f3d:c.instructions+=5;goto B583f3d;
case 0x583f3f:c.instructions+=4;goto B583f3f;
case 0x583f40:c.instructions+=3;goto B583f40;
case 0x583f41:c.instructions+=2;goto B583f41;
case 0x583f44:c.instructions+=1;goto B583f44;
case 0x583f47:goto L583f47;
case 0x583f48:c.instructions+=4;goto B583f48;
case 0x583f49:c.instructions+=3;goto B583f49;
case 0x583f4a:c.instructions+=2;goto B583f4a;
case 0x583f4b:c.instructions+=1;goto B583f4b;
case 0x583f50:goto L583f50;
case 0x583f54:c.instructions+=5;goto B583f54;
case 0x583f58:c.instructions+=4;goto B583f58;
case 0x583f59:c.instructions+=3;goto B583f59;
case 0x583f5a:c.instructions+=2;goto B583f5a;
case 0x583f5e:c.instructions+=1;goto B583f5e;
case 0x583f63:goto L583f63;
case 0x583f70:goto L583f70;
case 0x583f74:c.instructions+=3;goto B583f74;
case 0x583f78:c.instructions+=2;goto B583f78;
case 0x583f79:c.instructions+=1;goto B583f79;
case 0x583f7e:goto L583f7e;
case 0x583f80:goto L583f80;
case 0x583f84:c.instructions+=7;goto B583f84;
case 0x583f85:c.instructions+=6;goto B583f85;
case 0x583f89:c.instructions+=5;goto B583f89;
case 0x583f8f:c.instructions+=4;goto B583f8f;
case 0x583f91:c.instructions+=3;goto B583f91;
case 0x583f92:c.instructions+=2;goto B583f92;
case 0x583f98:c.instructions+=1;goto B583f98;
case 0x583f9a:goto L583f9a;
case 0x583f9c:goto L583f9c;
case 0x583fa2:c.instructions+=2;goto B583fa2;
case 0x583fa4:c.instructions+=1;goto B583fa4;
case 0x583fa6:goto L583fa6;
case 0x583fa8:goto L583fa8;
case 0x583fa9:c.instructions+=3;goto B583fa9;
case 0x583fab:c.instructions+=2;goto B583fab;
case 0x583fac:c.instructions+=1;goto B583fac;
case 0x583fb1:goto L583fb1;
case 0x583fb2:c.instructions+=2;goto B583fb2;
case 0x583fb3:c.instructions+=1;goto B583fb3;
case 0x583fc0:goto L583fc0;
case 0x583fc2:c.instructions+=6;goto B583fc2;
case 0x583fc4:c.instructions+=5;goto B583fc4;
case 0x583fc6:c.instructions+=4;goto B583fc6;
case 0x583fcc:c.instructions+=3;goto B583fcc;
case 0x583fd2:c.instructions+=2;goto B583fd2;
case 0x583fd9:c.instructions+=1;goto B583fd9;
case 0x583fe0:goto L583fe0;
case 0x583fe1:c.instructions+=8;goto B583fe1;
case 0x583fe5:c.instructions+=7;goto B583fe5;
case 0x583fe6:c.instructions+=6;goto B583fe6;
case 0x583fe7:c.instructions+=5;goto B583fe7;
case 0x583fea:c.instructions+=4;goto B583fea;
case 0x583fec:c.instructions+=3;goto B583fec;
case 0x583fed:c.instructions+=2;goto B583fed;
case 0x583fef:c.instructions+=1;goto B583fef;
case 0x583ff4:goto L583ff4;
case 0x583ff6:c.instructions+=2;goto B583ff6;
case 0x583ff8:c.instructions+=1;goto B583ff8;
case 0x583ffa:goto L583ffa;
case 0x583ffb:c.instructions+=2;goto B583ffb;
case 0x583fff:c.instructions+=1;goto B583fff;
default:missing_instruction(c.pc);}
B583000:L583000:{c.instructions+=1;NFSU2_TR(0x583000);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583005ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B583005:L583005:{c.instructions+=6;NFSU2_TR(0x583005);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583008:{NFSU2_TR(0x583008);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583009:{NFSU2_TR(0x583009);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58300d:{NFSU2_TR(0x58300d);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583012:{NFSU2_TR(0x583012);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583013:{NFSU2_TR(0x583013);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583018ull));
TAIL_STATIC(0x50c960u,50c);
}
B583018:L583018:{c.instructions+=8;NFSU2_TR(0x583018);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58301b:{NFSU2_TR(0x58301b);
__builtin_memmove((R+8),(R+16),4);
}
B58301f:{NFSU2_TR(0x58301f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583020:{NFSU2_TR(0x583020);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583022:{NFSU2_TR(0x583022);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583024:{NFSU2_TR(0x583024);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583029:{NFSU2_TR(0x583029);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58302e:{NFSU2_TR(0x58302e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583033ull));
TAIL_STATIC(0x4a0000u,4a0);
}
B583033:L583033:{c.instructions+=2;NFSU2_TR(0x583033);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583034:{NFSU2_TR(0x583034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583039ull));
TAIL_STATIC(0x558540u,558);
}
B583039:L583039:{c.instructions+=2;NFSU2_TR(0x583039);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x98ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x98ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58303f:{NFSU2_TR(0x58303f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583050:L583050:{c.instructions+=5;NFSU2_TR(0x583050);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583054:{NFSU2_TR(0x583054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B58305a:{NFSU2_TR(0x58305a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58305b:{NFSU2_TR(0x58305b);
u8 U[4];
w4(U+0,u32(0x924cf95eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583060:{NFSU2_TR(0x583060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583065ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B583065:L583065:{c.instructions+=6;NFSU2_TR(0x583065);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583068:{NFSU2_TR(0x583068);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583069:{NFSU2_TR(0x583069);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58306d:{NFSU2_TR(0x58306d);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583072:{NFSU2_TR(0x583072);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583073:{NFSU2_TR(0x583073);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583078ull));
TAIL_STATIC(0x50c960u,50c);
}
B583078:L583078:{c.instructions+=8;NFSU2_TR(0x583078);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B58307b:{NFSU2_TR(0x58307b);
__builtin_memmove((R+8),(R+16),4);
}
B58307f:{NFSU2_TR(0x58307f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583080:{NFSU2_TR(0x583080);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583082:{NFSU2_TR(0x583082);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583084:{NFSU2_TR(0x583084);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583089:{NFSU2_TR(0x583089);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58308e:{NFSU2_TR(0x58308e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583093ull));
TAIL_STATIC(0x4a0000u,4a0);
}
B583093:L583093:{c.instructions+=2;NFSU2_TR(0x583093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583094:{NFSU2_TR(0x583094);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583099ull));
TAIL_STATIC(0x558540u,558);
}
B583099:L583099:{c.instructions+=2;NFSU2_TR(0x583099);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x98ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x98ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58309f:{NFSU2_TR(0x58309f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5830b0:L5830b0:{c.instructions+=3;NFSU2_TR(0x5830b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x80ull))));
}
B5830b6:{NFSU2_TR(0x5830b6);
u8 U[4];
w4(U+0,u32(0x88a7cf05ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830bb:{NFSU2_TR(0x5830bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5830c0ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B5830c0:L5830c0:{c.instructions+=5;NFSU2_TR(0x5830c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830c1:{NFSU2_TR(0x5830c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5830c5:{NFSU2_TR(0x5830c5);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830ca:{NFSU2_TR(0x5830ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830cb:{NFSU2_TR(0x5830cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5830d0ull));
TAIL_STATIC(0x50c960u,50c);
}
B5830d0:L5830d0:{c.instructions+=8;NFSU2_TR(0x5830d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5830d3:{NFSU2_TR(0x5830d3);
__builtin_memmove((R+4),(R+16),4);
}
B5830d7:{NFSU2_TR(0x5830d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830d8:{NFSU2_TR(0x5830d8);
u8 U[4];
w4(U+0,u32(0x1cad26e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830dd:{NFSU2_TR(0x5830dd);
u8 U[4];
w4(U+0,u32(0x1cad26e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830e2:{NFSU2_TR(0x5830e2);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830e7:{NFSU2_TR(0x5830e7);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830ec:{NFSU2_TR(0x5830ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5830f1ull));
TAIL_STATIC(0x4a0000u,4a0);
}
B5830f1:L5830f1:{c.instructions+=2;NFSU2_TR(0x5830f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5830f2:{NFSU2_TR(0x5830f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5830f7ull));
TAIL_STATIC(0x558540u,558);
}
B5830f7:L5830f7:{c.instructions+=2;NFSU2_TR(0x5830f7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x98ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x98ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5830fd:{NFSU2_TR(0x5830fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583100:L583100:{c.instructions+=3;NFSU2_TR(0x583100);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583102:{NFSU2_TR(0x583102);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583104:{NFSU2_TR(0x583104);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583109ull));
TAIL_STATIC(0x50cee0u,50c);
}
B583109:L583109:{c.instructions+=3;NFSU2_TR(0x583109);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58310b:{NFSU2_TR(0x58310b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58310d:{NFSU2_TR(0x58310d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583112ull));
TAIL_STATIC(0x50cee0u,50c);
}
B583112:L583112:{c.instructions+=3;NFSU2_TR(0x583112);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583114:{NFSU2_TR(0x583114);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583116:{NFSU2_TR(0x583116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58311bull));
TAIL_STATIC(0x50cee0u,50c);
}
B58311b:L58311b:{c.instructions+=3;NFSU2_TR(0x58311b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58311d:{NFSU2_TR(0x58311d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58311f:{NFSU2_TR(0x58311f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583124ull));
TAIL_STATIC(0x50cee0u,50c);
}
B583124:L583124:{c.instructions+=3;NFSU2_TR(0x583124);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583126:{NFSU2_TR(0x583126);
u8 U[4];
w4(U+0,u32(0x9757a0c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58312b:{NFSU2_TR(0x58312b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583130ull));
TAIL_STATIC(0x55dde0u,55d);
}
B583130:L583130:{c.instructions+=2;NFSU2_TR(0x583130);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583133:{NFSU2_TR(0x583133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583140:L583140:{c.instructions+=3;NFSU2_TR(0x583140);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583146:{NFSU2_TR(0x583146);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583148:{NFSU2_TR(0x583148);
if(r1(R+518)){{goto L583154;}}
}
B58314a:L58314a:{c.instructions+=2;NFSU2_TR(0x58314a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58314b:{NFSU2_TR(0x58314b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583150ull));
TAIL_STATIC(0x73ef30u,73e);
}
B583150:L583150:{c.instructions+=2;NFSU2_TR(0x583150);
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
B583153:{NFSU2_TR(0x583153);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583154:L583154:{c.instructions+=2;NFSU2_TR(0x583154);
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
B583156:{NFSU2_TR(0x583156);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583160:L583160:{c.instructions+=14;NFSU2_TR(0x583160);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583166:{NFSU2_TR(0x583166);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58316c:{NFSU2_TR(0x58316c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B58316e:{NFSU2_TR(0x58316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B583174:{NFSU2_TR(0x583174);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B58317a:{NFSU2_TR(0x58317a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B58317d:{NFSU2_TR(0x58317d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B583180:{NFSU2_TR(0x583180);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B583183:{NFSU2_TR(0x583183);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B583186:{NFSU2_TR(0x583186);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B583189:{NFSU2_TR(0x583189);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B58318c:{NFSU2_TR(0x58318c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B58318f:{NFSU2_TR(0x58318f);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B583192:{NFSU2_TR(0x583192);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5831a0:L5831a0:{c.instructions+=14;NFSU2_TR(0x5831a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5831a6:{NFSU2_TR(0x5831a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5831ac:{NFSU2_TR(0x5831ac);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5831ae:{NFSU2_TR(0x5831ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831b4:{NFSU2_TR(0x5831b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831ba:{NFSU2_TR(0x5831ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831bd:{NFSU2_TR(0x5831bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831c0:{NFSU2_TR(0x5831c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831c3:{NFSU2_TR(0x5831c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831c6:{NFSU2_TR(0x5831c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831c9:{NFSU2_TR(0x5831c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831cc:{NFSU2_TR(0x5831cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B5831cf:{NFSU2_TR(0x5831cf);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5831d2:{NFSU2_TR(0x5831d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5831e0:L5831e0:{c.instructions+=5;NFSU2_TR(0x5831e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5831e1:{NFSU2_TR(0x5831e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5831e4:{NFSU2_TR(0x5831e4);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5831e7:{NFSU2_TR(0x5831e7);
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
B5831e9:{NFSU2_TR(0x5831e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5831f1;}}
}
B5831eb:L5831eb:{c.instructions+=1;NFSU2_TR(0x5831eb);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5831f1:L5831f1:{c.instructions+=3;NFSU2_TR(0x5831f1);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5831f7:{NFSU2_TR(0x5831f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5831f8:{NFSU2_TR(0x5831f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583200:L583200:{c.instructions+=5;NFSU2_TR(0x583200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583201:{NFSU2_TR(0x583201);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583204:{NFSU2_TR(0x583204);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B583207:{NFSU2_TR(0x583207);
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
B583209:{NFSU2_TR(0x583209);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L583211;}}
}
B58320b:L58320b:{c.instructions+=1;NFSU2_TR(0x58320b);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B583211:L583211:{c.instructions+=3;NFSU2_TR(0x583211);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B583217:{NFSU2_TR(0x583217);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B583218:{NFSU2_TR(0x583218);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583220:L583220:{c.instructions+=40;NFSU2_TR(0x583220);
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
B583222:{NFSU2_TR(0x583222);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583225:{NFSU2_TR(0x583225);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583228:{NFSU2_TR(0x583228);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58322b:{NFSU2_TR(0x58322b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B58322d:{NFSU2_TR(0x58322d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583230:{NFSU2_TR(0x583230);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583233:{NFSU2_TR(0x583233);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583236:{NFSU2_TR(0x583236);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583239:{NFSU2_TR(0x583239);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58323c:{NFSU2_TR(0x58323c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58323f:{NFSU2_TR(0x58323f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583242:{NFSU2_TR(0x583242);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583245:{NFSU2_TR(0x583245);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583248:{NFSU2_TR(0x583248);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58324b:{NFSU2_TR(0x58324b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58324e:{NFSU2_TR(0x58324e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583251:{NFSU2_TR(0x583251);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583254:{NFSU2_TR(0x583254);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583257:{NFSU2_TR(0x583257);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58325a:{NFSU2_TR(0x58325a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58325d:{NFSU2_TR(0x58325d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583260:{NFSU2_TR(0x583260);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583263:{NFSU2_TR(0x583263);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583266:{NFSU2_TR(0x583266);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583269:{NFSU2_TR(0x583269);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58326c:{NFSU2_TR(0x58326c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58326f:{NFSU2_TR(0x58326f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583272:{NFSU2_TR(0x583272);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583275:{NFSU2_TR(0x583275);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58327b:{NFSU2_TR(0x58327b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58327e:{NFSU2_TR(0x58327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583281:{NFSU2_TR(0x583281);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583284:{NFSU2_TR(0x583284);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583287:{NFSU2_TR(0x583287);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58328d:{NFSU2_TR(0x58328d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583293:{NFSU2_TR(0x583293);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583299:{NFSU2_TR(0x583299);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58329f:{NFSU2_TR(0x58329f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5832a5:{NFSU2_TR(0x5832a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5832b0:L5832b0:{c.instructions+=4;NFSU2_TR(0x5832b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832b2:{NFSU2_TR(0x5832b2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832b4:{NFSU2_TR(0x5832b4);
u8 U[4];
w4(U+0,u32(0x6f70656eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832b9:{NFSU2_TR(0x5832b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5832beull));
TAIL_STATIC(0x742b60u,742);
}
B5832be:L5832be:{c.instructions+=3;NFSU2_TR(0x5832be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5832c1:{NFSU2_TR(0x5832c1);
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
B5832c4:{NFSU2_TR(0x5832c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5832cd;}}
}
B5832c6:L5832c6:{c.instructions+=2;NFSU2_TR(0x5832c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832c7:{NFSU2_TR(0x5832c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5832ccull));
TAIL_STATIC(0x742c60u,742);
}
B5832cc:L5832cc:{c.instructions+=1;NFSU2_TR(0x5832cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5832cd:L5832cd:{c.instructions+=1;NFSU2_TR(0x5832cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5832d0:L5832d0:{c.instructions+=4;NFSU2_TR(0x5832d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5832d4:{NFSU2_TR(0x5832d4);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832d6:{NFSU2_TR(0x5832d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832d7:{NFSU2_TR(0x5832d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5832dcull));
TAIL_STATIC(0x440820u,440);
}
B5832dc:L5832dc:{c.instructions+=2;NFSU2_TR(0x5832dc);
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
B5832df:{NFSU2_TR(0x5832df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5832e0:L5832e0:{c.instructions+=4;NFSU2_TR(0x5832e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5832e4:{NFSU2_TR(0x5832e4);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832e6:{NFSU2_TR(0x5832e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5832e7:{NFSU2_TR(0x5832e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5832ecull));
TAIL_STATIC(0x440820u,440);
}
B5832ec:L5832ec:{c.instructions+=2;NFSU2_TR(0x5832ec);
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
B5832ef:{NFSU2_TR(0x5832ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5832f0:L5832f0:{c.instructions+=1;NFSU2_TR(0x5832f0);
{u32 t_=u32(m4(0x7fbe54));TAIL_DYNAMIC(t_);}
}
B583300:L583300:{c.instructions+=8;NFSU2_TR(0x583300);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583304:{NFSU2_TR(0x583304);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583305:{NFSU2_TR(0x583305);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B583307:{NFSU2_TR(0x583307);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583308:{NFSU2_TR(0x583308);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B58330b:{NFSU2_TR(0x58330b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B58330d:{NFSU2_TR(0x58330d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58330f:{NFSU2_TR(0x58330f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L583354;}}
}
B583311:L583311:{c.instructions+=8;NFSU2_TR(0x583311);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B583312:{NFSU2_TR(0x583312);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x583312);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x583312);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B583314:{NFSU2_TR(0x583314);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B583316:{NFSU2_TR(0x583316);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B583319:{NFSU2_TR(0x583319);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B58331b:{NFSU2_TR(0x58331b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58331e:{NFSU2_TR(0x58331e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583321:{NFSU2_TR(0x583321);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58333d;}}
}
B583323:L583323:{c.instructions+=10;NFSU2_TR(0x583323);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583326:{NFSU2_TR(0x583326);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583329:{NFSU2_TR(0x583329);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58332d:{NFSU2_TR(0x58332d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583330:{NFSU2_TR(0x583330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583333:{NFSU2_TR(0x583333);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583335:{NFSU2_TR(0x583335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583336:{NFSU2_TR(0x583336);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583339:{NFSU2_TR(0x583339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58333a:{NFSU2_TR(0x58333a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58333d:L58333d:{c.instructions+=9;NFSU2_TR(0x58333d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583340:{NFSU2_TR(0x583340);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583343:{NFSU2_TR(0x583343);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583346:{NFSU2_TR(0x583346);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B58334a:{NFSU2_TR(0x58334a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58334c:{NFSU2_TR(0x58334c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58334d:{NFSU2_TR(0x58334d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583350:{NFSU2_TR(0x583350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583351:{NFSU2_TR(0x583351);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583354:L583354:{c.instructions+=7;NFSU2_TR(0x583354);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583357:{NFSU2_TR(0x583357);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58335b:{NFSU2_TR(0x58335b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+0)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B58335d:{NFSU2_TR(0x58335d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B58335e:{NFSU2_TR(0x58335e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583361:{NFSU2_TR(0x583361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583362:{NFSU2_TR(0x583362);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583370:L583370:{c.instructions+=5;NFSU2_TR(0x583370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583371:{NFSU2_TR(0x583371);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583372:{NFSU2_TR(0x583372);
w4(R+24,u32(0x8691d8ull));
}
B583377:{NFSU2_TR(0x583377);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B583379:{NFSU2_TR(0x583379);
__builtin_memmove((R+16),(R+16),4);
}
B583380:L583380:{c.instructions+=2;NFSU2_TR(0x583380);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B583384:{NFSU2_TR(0x583384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58339d;}}
}
B583386:L583386:{c.instructions+=4;NFSU2_TR(0x583386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583388:{NFSU2_TR(0x583388);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B58338a:{NFSU2_TR(0x58338a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58338d:{NFSU2_TR(0x58338d);
if(r1(R+518)){{goto L583398;}}
}
B58338f:L58338f:{c.instructions+=2;NFSU2_TR(0x58338f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583390:{NFSU2_TR(0x583390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583395ull));
TAIL_STATIC(0x743b30u,743);
}
B583395:L583395:{c.instructions+=1;NFSU2_TR(0x583395);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583398:L583398:{c.instructions+=2;NFSU2_TR(0x583398);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B58339a:{NFSU2_TR(0x58339a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58339d:L58339d:{c.instructions+=3;NFSU2_TR(0x58339d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5833a0:{NFSU2_TR(0x5833a0);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x86923cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86923cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86923cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5833a6:{NFSU2_TR(0x5833a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x583380u);}goto L583380;}}
}
B5833a8:L5833a8:{c.instructions+=3;NFSU2_TR(0x5833a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5833a9:{NFSU2_TR(0x5833a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5833aa:{NFSU2_TR(0x5833aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5833b0:L5833b0:{c.instructions+=3;NFSU2_TR(0x5833b0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x24ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5833b3:{NFSU2_TR(0x5833b3);
s4(0x7fbe54,u32(0x5832e0ull));
}
B5833bd:{NFSU2_TR(0x5833bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5833c2ull));
TAIL_STATIC(0x743af0u,743);
}
B5833c2:L5833c2:{c.instructions+=3;NFSU2_TR(0x5833c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5833c4:{NFSU2_TR(0x5833c4);
__builtin_memmove(gp(0x8667e4),(R+0),4);
}
B5833c9:{NFSU2_TR(0x5833c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5833db;}}
}
B5833cb:L5833cb:{c.instructions+=4;NFSU2_TR(0x5833cb);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5833cd:{NFSU2_TR(0x5833cd);
s4(0x7fbe54,u32(0x5832d0ull));
}
B5833d7:{NFSU2_TR(0x5833d7);
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
B5833da:{NFSU2_TR(0x5833da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5833db:L5833db:{c.instructions+=5;NFSU2_TR(0x5833db);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833dc:{NFSU2_TR(0x5833dc);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833de:{NFSU2_TR(0x5833de);
u8 U[4];
w4(U+0,u32(0x6d776964ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833e3:{NFSU2_TR(0x5833e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833e4:{NFSU2_TR(0x5833e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5833e9ull));
TAIL_STATIC(0x743610u,743);
}
B5833e9:L5833e9:{c.instructions+=5;NFSU2_TR(0x5833e9);
__builtin_memmove((R+0),gp(0x8667e4),4);
}
B5833ee:{NFSU2_TR(0x5833ee);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833f0:{NFSU2_TR(0x5833f0);
u8 U[4];
w4(U+0,u32(0x6d6f7574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833f5:{NFSU2_TR(0x5833f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5833f6:{NFSU2_TR(0x5833f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5833fbull));
TAIL_STATIC(0x743610u,743);
}
B5833fb:L5833fb:{c.instructions+=4;NFSU2_TR(0x5833fb);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583400:{NFSU2_TR(0x583400);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B583402:{NFSU2_TR(0x583402);
w4(R+4,u32(0x7ull));
}
B583407:{NFSU2_TR(0x583407);
u8 U[4];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58340b:L58340b:{c.instructions+=1;NFSU2_TR(0x58340b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L58340d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58340bu);}goto L58340b;}
}
B58340d:L58340d:{c.instructions+=9;NFSU2_TR(0x58340d);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583411:{NFSU2_TR(0x583411);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583412:{NFSU2_TR(0x583412);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B583414:{NFSU2_TR(0x583414);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B583418:{NFSU2_TR(0x583418);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58341a:{NFSU2_TR(0x58341a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58341b:{NFSU2_TR(0x58341b);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B58341c:{NFSU2_TR(0x58341c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B583424:{NFSU2_TR(0x583424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583429ull));
TAIL_STATIC(0x742e30u,742);
}
B583429:L583429:{c.instructions+=7;NFSU2_TR(0x583429);
u8 U[6];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B58342e:{NFSU2_TR(0x58342e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B583431:{NFSU2_TR(0x583431);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583432:{NFSU2_TR(0x583432);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583433:{NFSU2_TR(0x583433);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583437:{NFSU2_TR(0x583437);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583438:{NFSU2_TR(0x583438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58343dull));
TAIL_STATIC(0x743140u,743);
}
B58343d:L58343d:{c.instructions+=6;NFSU2_TR(0x58343d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583440:{NFSU2_TR(0x583440);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583441:{NFSU2_TR(0x583441);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583445:{NFSU2_TR(0x583445);
u8 U[4];
w4(U+0,u32(0x7a1108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58344a:{NFSU2_TR(0x58344a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58344b:{NFSU2_TR(0x58344b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583450ull));
TAIL_STATIC(0x4400d0u,440);
}
B583450:L583450:{c.instructions+=6;NFSU2_TR(0x583450);
__builtin_memmove((R+0),gp(0x8667e4),4);
}
B583455:{NFSU2_TR(0x583455);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B583459:{NFSU2_TR(0x583459);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58345a:{NFSU2_TR(0x58345a);
u8 U[4];
w4(U+0,u32(0x102ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58345f:{NFSU2_TR(0x58345f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583460:{NFSU2_TR(0x583460);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583465ull));
TAIL_STATIC(0x743680u,743);
}
B583465:L583465:{c.instructions+=9;NFSU2_TR(0x583465);
__builtin_memmove((R+4),gp(0x8667e4),4);
}
B58346b:{NFSU2_TR(0x58346b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B58346e:{NFSU2_TR(0x58346e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B583470:{NFSU2_TR(0x583470);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583472:{NFSU2_TR(0x583472);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B583475:{NFSU2_TR(0x583475);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583476:{NFSU2_TR(0x583476);
s4(0x7fbe54,u32(0x5832d0ull));
}
B583480:{NFSU2_TR(0x583480);
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
B583483:{NFSU2_TR(0x583483);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583490:L583490:{c.instructions+=3;NFSU2_TR(0x583490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583491:{NFSU2_TR(0x583491);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583492:{NFSU2_TR(0x583492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583497ull));
TAIL_STATIC(0x43bdf0u,43b);
}
B583497:L583497:{c.instructions+=3;NFSU2_TR(0x583497);
__builtin_memmove((R+28),(R+0),4);
}
B583499:{NFSU2_TR(0x583499);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58349b:{NFSU2_TR(0x58349b);
{goto L5834a0;}
}
B5834a0:L5834a0:{c.instructions+=1;NFSU2_TR(0x5834a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5834a5ull));
TAIL_STATIC(0x5cec80u,5ce);
}
B5834a5:L5834a5:{c.instructions+=1;NFSU2_TR(0x5834a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5834aaull));
TAIL_STATIC(0x43bdf0u,43b);
}
B5834aa:L5834aa:{c.instructions+=3;NFSU2_TR(0x5834aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5834ab:{NFSU2_TR(0x5834ab);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5834ac:{NFSU2_TR(0x5834ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5834b1ull));
TAIL_STATIC(0x43be20u,43b);
}
B5834b1:L5834b1:{c.instructions+=5;NFSU2_TR(0x5834b1);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5834b7:{NFSU2_TR(0x5834b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5834ba:{NFSU2_TR(0x5834ba);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5834bb:{NFSU2_TR(0x5834bb);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0xf4240ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xf4240ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xf4240ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5834c1:{NFSU2_TR(0x5834c1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5834d3;}}
}
B5834c3:L5834c3:{c.instructions+=4;NFSU2_TR(0x5834c3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5834c9:{NFSU2_TR(0x5834c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5834cb:{NFSU2_TR(0x5834cb);
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
B5834ce:{NFSU2_TR(0x5834ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5834a0u);}goto L5834a0;}}
}
B5834d0:L5834d0:{c.instructions+=3;NFSU2_TR(0x5834d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5834d1:{NFSU2_TR(0x5834d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5834d2:{NFSU2_TR(0x5834d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5834d3:L5834d3:{c.instructions+=4;NFSU2_TR(0x5834d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5834d4:{NFSU2_TR(0x5834d4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5834d6:{NFSU2_TR(0x5834d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5834d7:{NFSU2_TR(0x5834d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5834e0:L5834e0:{c.instructions+=7;NFSU2_TR(0x5834e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5834e3:{NFSU2_TR(0x5834e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5834e4:{NFSU2_TR(0x5834e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5834e5:{NFSU2_TR(0x5834e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5834e7:{NFSU2_TR(0x5834e7);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5834ec:{NFSU2_TR(0x5834ec);
w4(R+4,u32(0x7ull));
}
B5834f1:{NFSU2_TR(0x5834f1);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5834f5:L5834f5:{c.instructions+=1;NFSU2_TR(0x5834f5);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5834f7;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5834f5u);}goto L5834f5;}
}
B5834f7:L5834f7:{c.instructions+=10;NFSU2_TR(0x5834f7);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5834f9:{NFSU2_TR(0x5834f9);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5834fa:{NFSU2_TR(0x5834fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5834fe:{NFSU2_TR(0x5834fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5834ff:{NFSU2_TR(0x5834ff);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583503:{NFSU2_TR(0x583503);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583505:{NFSU2_TR(0x583505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583506:{NFSU2_TR(0x583506);
s4(0x7fbe54,u32(0x5832e0ull));
}
B583510:{NFSU2_TR(0x583510);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B583518:{NFSU2_TR(0x583518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58351dull));
TAIL_STATIC(0x742e30u,742);
}
B58351d:L58351d:{c.instructions+=7;NFSU2_TR(0x58351d);
u8 U[6];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B583522:{NFSU2_TR(0x583522);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583526:{NFSU2_TR(0x583526);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B583529:{NFSU2_TR(0x583529);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58352a:{NFSU2_TR(0x58352a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58352b:{NFSU2_TR(0x58352b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58352c:{NFSU2_TR(0x58352c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583531ull));
TAIL_STATIC(0x743140u,743);
}
B583531:L583531:{c.instructions+=6;NFSU2_TR(0x583531);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583534:{NFSU2_TR(0x583534);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583535:{NFSU2_TR(0x583535);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583539:{NFSU2_TR(0x583539);
u8 U[4];
w4(U+0,u32(0x7a1108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58353e:{NFSU2_TR(0x58353e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58353f:{NFSU2_TR(0x58353f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583544ull));
TAIL_STATIC(0x4400d0u,440);
}
B583544:L583544:{c.instructions+=2;NFSU2_TR(0x583544);
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
B583547:{NFSU2_TR(0x583547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58354cull));
TAIL_STATIC(0x743af0u,743);
}
B58354c:L58354c:{c.instructions+=3;NFSU2_TR(0x58354c);
__builtin_memmove((R+24),(R+0),4);
}
B58354e:{NFSU2_TR(0x58354e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583550:{NFSU2_TR(0x583550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583562;}}
}
B583552:L583552:{c.instructions+=5;NFSU2_TR(0x583552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583553:{NFSU2_TR(0x583553);
s4(0x7fbe54,u32(0x5832d0ull));
}
B58355d:{NFSU2_TR(0x58355d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B58355e:{NFSU2_TR(0x58355e);
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
B583561:{NFSU2_TR(0x583561);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583562:L583562:{c.instructions+=4;NFSU2_TR(0x583562);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583564:{NFSU2_TR(0x583564);
u8 U[4];
w4(U+0,u32(0x6d776964ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583569:{NFSU2_TR(0x583569);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58356a:{NFSU2_TR(0x58356a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x58356full));
TAIL_STATIC(0x743610u,743);
}
B58356f:L58356f:{c.instructions+=4;NFSU2_TR(0x58356f);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583573:{NFSU2_TR(0x583573);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B583576:{NFSU2_TR(0x583576);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583578:{NFSU2_TR(0x583578);
if(r1(R+518)){{goto L583596;}}
}
B58357a:L58357a:{c.instructions+=4;NFSU2_TR(0x58357a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58357c:{NFSU2_TR(0x58357c);
u8 U[4];
w4(U+0,u32(0x6d6f7574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583581:{NFSU2_TR(0x583581);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583582:{NFSU2_TR(0x583582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583587ull));
TAIL_STATIC(0x743610u,743);
}
B583587:L583587:{c.instructions+=5;NFSU2_TR(0x583587);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58358a:{NFSU2_TR(0x58358a);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B58358e:{NFSU2_TR(0x58358e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58358f:{NFSU2_TR(0x58358f);
u8 U[4];
w4(U+0,u32(0x101ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583594:{NFSU2_TR(0x583594);
{goto L5835b0;}
}
B583596:L583596:{c.instructions+=4;NFSU2_TR(0x583596);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583598:{NFSU2_TR(0x583598);
u8 U[4];
w4(U+0,u32(0x6d6f7574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58359d:{NFSU2_TR(0x58359d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58359e:{NFSU2_TR(0x58359e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5835a3ull));
TAIL_STATIC(0x743610u,743);
}
B5835a3:L5835a3:{c.instructions+=4;NFSU2_TR(0x5835a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5835a6:{NFSU2_TR(0x5835a6);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5835aa:{NFSU2_TR(0x5835aa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835ab:{NFSU2_TR(0x5835ab);
u8 U[4];
w4(U+0,u32(0x102ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835b0:L5835b0:{c.instructions+=2;NFSU2_TR(0x5835b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835b1:{NFSU2_TR(0x5835b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5835b6ull));
TAIL_STATIC(0x743680u,743);
}
B5835b6:L5835b6:{c.instructions+=7;NFSU2_TR(0x5835b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5835b9:{NFSU2_TR(0x5835b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5835ba:{NFSU2_TR(0x5835ba);
__builtin_memmove((R+0),(R+24),4);
}
B5835bc:{NFSU2_TR(0x5835bc);
s4(0x7fbe54,u32(0x5832d0ull));
}
B5835c6:{NFSU2_TR(0x5835c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5835c7:{NFSU2_TR(0x5835c7);
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
B5835ca:{NFSU2_TR(0x5835ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5835d0:L5835d0:{c.instructions+=6;NFSU2_TR(0x5835d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5835d4:{NFSU2_TR(0x5835d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835d5:{NFSU2_TR(0x5835d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835d6:{NFSU2_TR(0x5835d6);
s4(0x7fbe54,u32(0x5832e0ull));
}
B5835e0:{NFSU2_TR(0x5835e0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5835e2:{NFSU2_TR(0x5835e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5835e7ull));
TAIL_STATIC(0x743870u,743);
}
B5835e7:L5835e7:{c.instructions+=3;NFSU2_TR(0x5835e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5835ea:{NFSU2_TR(0x5835ea);
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
B5835ec:{NFSU2_TR(0x5835ec);
if(r1(R+518)){{goto L583609;}}
}
B5835ee:L5835ee:{c.instructions+=4;NFSU2_TR(0x5835ee);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835f3:{NFSU2_TR(0x5835f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835f4:{NFSU2_TR(0x5835f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5835f5:{NFSU2_TR(0x5835f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5835faull));
TAIL_STATIC(0x748580u,748);
}
B5835fa:L5835fa:{c.instructions+=4;NFSU2_TR(0x5835fa);
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
B5835fd:{NFSU2_TR(0x5835fd);
s4(0x7fbe54,u32(0x5832d0ull));
}
B583607:{NFSU2_TR(0x583607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583608:{NFSU2_TR(0x583608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583609:L583609:{c.instructions+=3;NFSU2_TR(0x583609);
__builtin_memmove((R+0),gp(0x866774),4);
}
B58360e:{NFSU2_TR(0x58360e);
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
B583610:{NFSU2_TR(0x583610);
if(r1(R+518)){{goto L583618;}}
}
B583612:L583612:{c.instructions+=1;NFSU2_TR(0x583612);
u8 U[6];
w1(R+523,scarry<u32>(m4(0x86a320),u32(0x1ull)));
s4(0x86a320,u32(u32(m4(0x86a320))+u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x86a320))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x86a320))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x86a320))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583618:L583618:{c.instructions+=4;NFSU2_TR(0x583618);
__builtin_memmove((R+0),(R+24),4);
}
B58361a:{NFSU2_TR(0x58361a);
s4(0x7fbe54,u32(0x5832d0ull));
}
B583624:{NFSU2_TR(0x583624);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583625:{NFSU2_TR(0x583625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583630:L583630:{c.instructions+=3;NFSU2_TR(0x583630);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583634:{NFSU2_TR(0x583634);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583636:{NFSU2_TR(0x583636);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L58363b;}}
}
B583638:L583638:{c.instructions+=2;NFSU2_TR(0x583638);
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
B58363a:{NFSU2_TR(0x58363a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B58363b:L58363b:{c.instructions+=6;NFSU2_TR(0x58363b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58363c:{NFSU2_TR(0x58363c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B583640:{NFSU2_TR(0x583640);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583642:{NFSU2_TR(0x583642);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583643:{NFSU2_TR(0x583643);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583644:{NFSU2_TR(0x583644);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583649ull));
TAIL_STATIC(0x748790u,748);
}
B583649:L583649:{c.instructions+=3;NFSU2_TR(0x583649);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B58364c:{NFSU2_TR(0x58364c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58364e:{NFSU2_TR(0x58364e);
if(r1(R+518)){{goto L583662;}}
}
B583650:L583650:{c.instructions+=8;NFSU2_TR(0x583650);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583653:{NFSU2_TR(0x583653);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583657:{NFSU2_TR(0x583657);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B583659:{NFSU2_TR(0x583659);
__builtin_memmove((R+0),(R+518),1);
}
B58365c:{NFSU2_TR(0x58365c);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B58365e:{NFSU2_TR(0x58365e);
w1(R+0,u8(0x1ull));
}
B583660:{NFSU2_TR(0x583660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583661:{NFSU2_TR(0x583661);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583662:L583662:{c.instructions+=3;NFSU2_TR(0x583662);
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
B583664:{NFSU2_TR(0x583664);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583665:{NFSU2_TR(0x583665);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583670:L583670:{c.instructions+=17;NFSU2_TR(0x583670);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583671:{NFSU2_TR(0x583671);
__builtin_memmove((R+20),(R+16),4);
}
B583673:{NFSU2_TR(0x583673);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B583676:{NFSU2_TR(0x583676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x218ull))));
}
B58367c:{NFSU2_TR(0x58367c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B58367f:{NFSU2_TR(0x58367f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583681:{NFSU2_TR(0x583681);
__builtin_memmove((R+0),(R+518),1);
}
B583684:{NFSU2_TR(0x583684);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x5ull))));
}
B583686:{NFSU2_TR(0x583686);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B58368a:{NFSU2_TR(0x58368a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58368d:{NFSU2_TR(0x58368d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B58368e:{NFSU2_TR(0x58368e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B583691:{NFSU2_TR(0x583691);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583692:{NFSU2_TR(0x583692);
__builtin_memmove((R+4),(R+0),4);
}
B583694:{NFSU2_TR(0x583694);
__builtin_memmove((R+8),(R+4),4);
}
B583696:{NFSU2_TR(0x583696);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B583699:{NFSU2_TR(0x583699);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B58369d:L58369d:{c.instructions+=1;NFSU2_TR(0x58369d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L58369f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x58369du);}goto L58369d;}
}
B58369f:L58369f:{c.instructions+=2;NFSU2_TR(0x58369f);
__builtin_memmove((R+4),(R+8),4);
}
B5836a1:{NFSU2_TR(0x5836a1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B5836a4:L5836a4:{c.instructions+=1;NFSU2_TR(0x5836a4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5836a6;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5836a4u);}goto L5836a4;}
}
B5836a6:L5836a6:{c.instructions+=7;NFSU2_TR(0x5836a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5836a9:{NFSU2_TR(0x5836a9);
u8 U[6];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5836ae:{NFSU2_TR(0x5836ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5836b0:{NFSU2_TR(0x5836b0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5836b4:{NFSU2_TR(0x5836b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5836b5:{NFSU2_TR(0x5836b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5836b6:{NFSU2_TR(0x5836b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5836bbull));
TAIL_STATIC(0x748700u,748);
}
B5836bb:L5836bb:{c.instructions+=6;NFSU2_TR(0x5836bb);
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
B5836be:{NFSU2_TR(0x5836be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5836bf:{NFSU2_TR(0x5836bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5836c0:{NFSU2_TR(0x5836c0);
__builtin_memmove((R+16),(R+20),4);
}
B5836c2:{NFSU2_TR(0x5836c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5836c3:{NFSU2_TR(0x5836c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5836d0:L5836d0:{c.instructions+=4;NFSU2_TR(0x5836d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5836d4:{NFSU2_TR(0x5836d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5836d6:{NFSU2_TR(0x5836d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5836d7:{NFSU2_TR(0x5836d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5836dcull));
TAIL_STATIC(0x440820u,440);
}
B5836dc:L5836dc:{c.instructions+=2;NFSU2_TR(0x5836dc);
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
B5836df:{NFSU2_TR(0x5836df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5836e0:L5836e0:{c.instructions+=4;NFSU2_TR(0x5836e0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5836e4:{NFSU2_TR(0x5836e4);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5836ea:{NFSU2_TR(0x5836ea);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5836f0:{NFSU2_TR(0x5836f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5836f5ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5836f5:L5836f5:{c.instructions+=3;NFSU2_TR(0x5836f5);
__builtin_memmove(gp(0x869234),(R+0),4);
}
B5836fa:{NFSU2_TR(0x5836fa);
s1(0x866758,u8(0x1ull));
}
B583701:{NFSU2_TR(0x583701);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583710:L583710:{c.instructions+=9;NFSU2_TR(0x583710);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B583713:{NFSU2_TR(0x583713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583714:{NFSU2_TR(0x583714);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583715:{NFSU2_TR(0x583715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583716:{NFSU2_TR(0x583716);
__builtin_memmove((R+28),gp(0x8651ac),4);
}
B58371c:{NFSU2_TR(0x58371c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B58371e:{NFSU2_TR(0x58371e);
w4(R+12,u32(0x2ull));
}
B583723:{NFSU2_TR(0x583723);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B583725:{NFSU2_TR(0x583725);
{goto L583730;}
}
B583730:L583730:{c.instructions+=4;NFSU2_TR(0x583730);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7fbe68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583736:{NFSU2_TR(0x583736);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583738:{NFSU2_TR(0x583738);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58373c:{NFSU2_TR(0x58373c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L583787;}}
}
B58373e:L58373e:{c.instructions+=12;NFSU2_TR(0x58373e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x869074ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583744:{NFSU2_TR(0x583744);
__builtin_memmove((R+0),(R+28),4);
}
B583746:{NFSU2_TR(0x583746);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B583748:{NFSU2_TR(0x583748);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58374c:{NFSU2_TR(0x58374c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B583750:{NFSU2_TR(0x583750);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B583756:{NFSU2_TR(0x583756);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58375a:{NFSU2_TR(0x58375a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B583760:{NFSU2_TR(0x583760);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B583762:{NFSU2_TR(0x583762);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B583764:{NFSU2_TR(0x583764);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B583767:{NFSU2_TR(0x583767);
if(r1(R+514)){{goto L583787;}}
}
B583769:L583769:{c.instructions+=3;NFSU2_TR(0x583769);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B58376c:{NFSU2_TR(0x58376c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58376e:{NFSU2_TR(0x58376e);
if(r1(R+518)){{goto L583778;}}
}
B583770:L583770:{c.instructions+=2;NFSU2_TR(0x583770);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583772:{NFSU2_TR(0x583772);
if(r1(R+518)){{goto L583895;}}
}
B583778:L583778:{c.instructions+=4;NFSU2_TR(0x583778);
w4(R+0,u32(0x1ull));
}
B58377d:{NFSU2_TR(0x58377d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B58377f:{NFSU2_TR(0x58377f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x869074ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583785:{NFSU2_TR(0x583785);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B583787:L583787:{c.instructions+=4;NFSU2_TR(0x583787);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7fbe6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58378d:{NFSU2_TR(0x58378d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58378f:{NFSU2_TR(0x58378f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583793:{NFSU2_TR(0x583793);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5837de;}}
}
B583795:L583795:{c.instructions+=12;NFSU2_TR(0x583795);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x869078ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B58379b:{NFSU2_TR(0x58379b);
__builtin_memmove((R+4),(R+28),4);
}
B58379d:{NFSU2_TR(0x58379d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B58379f:{NFSU2_TR(0x58379f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5837a3:{NFSU2_TR(0x5837a3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5837a7:{NFSU2_TR(0x5837a7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5837ad:{NFSU2_TR(0x5837ad);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5837b1:{NFSU2_TR(0x5837b1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5837b7:{NFSU2_TR(0x5837b7);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5837b9:{NFSU2_TR(0x5837b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5837bb:{NFSU2_TR(0x5837bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5837be:{NFSU2_TR(0x5837be);
if(r1(R+514)){{goto L5837de;}}
}
B5837c0:L5837c0:{c.instructions+=3;NFSU2_TR(0x5837c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5837c3:{NFSU2_TR(0x5837c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5837c5:{NFSU2_TR(0x5837c5);
if(r1(R+518)){{goto L5837cf;}}
}
B5837c7:L5837c7:{c.instructions+=2;NFSU2_TR(0x5837c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5837c9:{NFSU2_TR(0x5837c9);
if(r1(R+518)){{goto L583895;}}
}
B5837cf:L5837cf:{c.instructions+=4;NFSU2_TR(0x5837cf);
w4(R+0,u32(0x1ull));
}
B5837d4:{NFSU2_TR(0x5837d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5837d6:{NFSU2_TR(0x5837d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x869078ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5837dc:{NFSU2_TR(0x5837dc);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B5837de:L5837de:{c.instructions+=4;NFSU2_TR(0x5837de);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7fbe70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5837e4:{NFSU2_TR(0x5837e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5837e6:{NFSU2_TR(0x5837e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5837ea:{NFSU2_TR(0x5837ea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L583830;}}
}
B5837ec:L5837ec:{c.instructions+=12;NFSU2_TR(0x5837ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x86907cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5837f2:{NFSU2_TR(0x5837f2);
__builtin_memmove((R+4),(R+28),4);
}
B5837f4:{NFSU2_TR(0x5837f4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5837f6:{NFSU2_TR(0x5837f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5837fa:{NFSU2_TR(0x5837fa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5837fe:{NFSU2_TR(0x5837fe);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B583804:{NFSU2_TR(0x583804);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B583808:{NFSU2_TR(0x583808);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B58380e:{NFSU2_TR(0x58380e);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B583810:{NFSU2_TR(0x583810);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B583812:{NFSU2_TR(0x583812);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B583815:{NFSU2_TR(0x583815);
if(r1(R+514)){{goto L583830;}}
}
B583817:L583817:{c.instructions+=2;NFSU2_TR(0x583817);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583819:{NFSU2_TR(0x583819);
if(r1(R+518)){{goto L58381f;}}
}
B58381b:L58381b:{c.instructions+=2;NFSU2_TR(0x58381b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58381d:{NFSU2_TR(0x58381d);
if(r1(R+518)){{goto L583895;}}
}
B58381f:L58381f:{c.instructions+=5;NFSU2_TR(0x58381f);
w4(R+0,u32(0x1ull));
}
B583824:{NFSU2_TR(0x583824);
__builtin_memmove((R+4),(R+12),4);
}
B583826:{NFSU2_TR(0x583826);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B583828:{NFSU2_TR(0x583828);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x86907cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58382e:{NFSU2_TR(0x58382e);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B583830:L583830:{c.instructions+=4;NFSU2_TR(0x583830);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7fbe74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583836:{NFSU2_TR(0x583836);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583838:{NFSU2_TR(0x583838);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58383c:{NFSU2_TR(0x58383c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L583883;}}
}
B58383e:L58383e:{c.instructions+=12;NFSU2_TR(0x58383e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x869080ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583844:{NFSU2_TR(0x583844);
__builtin_memmove((R+4),(R+28),4);
}
B583846:{NFSU2_TR(0x583846);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B583848:{NFSU2_TR(0x583848);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58384c:{NFSU2_TR(0x58384c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B583850:{NFSU2_TR(0x583850);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B583856:{NFSU2_TR(0x583856);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B58385a:{NFSU2_TR(0x58385a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B583860:{NFSU2_TR(0x583860);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B583862:{NFSU2_TR(0x583862);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B583864:{NFSU2_TR(0x583864);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B583867:{NFSU2_TR(0x583867);
if(r1(R+514)){{goto L583883;}}
}
B583869:L583869:{c.instructions+=3;NFSU2_TR(0x583869);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B58386c:{NFSU2_TR(0x58386c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B58386e:{NFSU2_TR(0x58386e);
if(r1(R+518)){{goto L583874;}}
}
B583870:L583870:{c.instructions+=2;NFSU2_TR(0x583870);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583872:{NFSU2_TR(0x583872);
if(r1(R+518)){{goto L583895;}}
}
B583874:L583874:{c.instructions+=4;NFSU2_TR(0x583874);
w4(R+0,u32(0x1ull));
}
B583879:{NFSU2_TR(0x583879);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B58387b:{NFSU2_TR(0x58387b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x869080ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583881:{NFSU2_TR(0x583881);
w4(R+24,u32(u32(r4(R+24))|u32(r4(R+0))));
}
B583883:L583883:{c.instructions+=5;NFSU2_TR(0x583883);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B583886:{NFSU2_TR(0x583886);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B583889:{NFSU2_TR(0x583889);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B58388c:{NFSU2_TR(0x58388c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B58388f:{NFSU2_TR(0x58388f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x583730u);}goto L583730;}}
}
B583895:L583895:{c.instructions+=6;NFSU2_TR(0x583895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583896:{NFSU2_TR(0x583896);
__builtin_memmove((R+0),(R+24),4);
}
B583898:{NFSU2_TR(0x583898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583899:{NFSU2_TR(0x583899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B58389a:{NFSU2_TR(0x58389a);
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
B58389d:{NFSU2_TR(0x58389d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5838a0:L5838a0:{c.instructions+=3;NFSU2_TR(0x5838a0);
__builtin_memmove((R+0),gp(0x8669f4),4);
}
B5838a5:{NFSU2_TR(0x5838a5);
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
B5838a7:{NFSU2_TR(0x5838a7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5838b5;}}
}
B5838a9:L5838a9:{c.instructions+=3;NFSU2_TR(0x5838a9);
__builtin_memmove((R+0),gp(0x866a14),4);
}
B5838ae:{NFSU2_TR(0x5838ae);
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
B5838b0:{NFSU2_TR(0x5838b0);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5838b5;}}
}
B5838b2:L5838b2:{c.instructions+=2;NFSU2_TR(0x5838b2);
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
B5838b4:{NFSU2_TR(0x5838b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5838b5:L5838b5:{c.instructions+=2;NFSU2_TR(0x5838b5);
w4(R+0,u32(0x1ull));
}
B5838ba:{NFSU2_TR(0x5838ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5838c0:L5838c0:{c.instructions+=10;NFSU2_TR(0x5838c0);
__builtin_memmove((R+0),gp(0x869064),4);
}
B5838c5:{NFSU2_TR(0x5838c5);
__builtin_memmove((R+4),gp(0x869068),4);
}
B5838cb:{NFSU2_TR(0x5838cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5838cc:{NFSU2_TR(0x5838cc);
__builtin_memmove(gp(0x869064),(R+0),4);
}
B5838d1:{NFSU2_TR(0x5838d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5838d5:{NFSU2_TR(0x5838d5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5838d7:{NFSU2_TR(0x5838d7);
__builtin_memmove(gp(0x869068),(R+4),4);
}
B5838dd:{NFSU2_TR(0x5838dd);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5838e1:{NFSU2_TR(0x5838e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5838e3:{NFSU2_TR(0x5838e3);
if(r1(R+518)){{goto L5838f3;}}
}
B5838e5:L5838e5:{c.instructions+=3;NFSU2_TR(0x5838e5);
s4(0x869664,u32(u32(m4(0x869664))+u32(u32(0x1ull))));
}
B5838eb:{NFSU2_TR(0x5838eb);
s4(0x869668,u32(u32(m4(0x869668))+u32(r4(R+0))));
}
B5838f1:{NFSU2_TR(0x5838f1);
{goto L5838ff;}
}
B5838f3:L5838f3:{c.instructions+=2;NFSU2_TR(0x5838f3);
s4(0x869874,u32(u32(m4(0x869874))+u32(u32(0x1ull))));
}
B5838f9:{NFSU2_TR(0x5838f9);
s4(0x869878,u32(u32(m4(0x869878))+u32(r4(R+0))));
}
B5838ff:L5838ff:{c.instructions+=8;NFSU2_TR(0x5838ff);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B583904:{NFSU2_TR(0x583904);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x204ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B58390a:{NFSU2_TR(0x58390a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x866c1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583910:{NFSU2_TR(0x583910);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x866a28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B583916:{NFSU2_TR(0x583916);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B583917:{NFSU2_TR(0x583917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58391d:{NFSU2_TR(0x58391d);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B583923:{NFSU2_TR(0x583923);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583930:L583930:{c.instructions+=10;NFSU2_TR(0x583930);
__builtin_memmove((R+0),gp(0x86906c),4);
}
B583935:{NFSU2_TR(0x583935);
__builtin_memmove((R+4),gp(0x869070),4);
}
B58393b:{NFSU2_TR(0x58393b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B58393c:{NFSU2_TR(0x58393c);
__builtin_memmove(gp(0x86906c),(R+0),4);
}
B583941:{NFSU2_TR(0x583941);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583945:{NFSU2_TR(0x583945);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B583947:{NFSU2_TR(0x583947);
__builtin_memmove(gp(0x869070),(R+4),4);
}
B58394d:{NFSU2_TR(0x58394d);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B583951:{NFSU2_TR(0x583951);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583953:{NFSU2_TR(0x583953);
if(r1(R+518)){{goto L583963;}}
}
B583955:L583955:{c.instructions+=3;NFSU2_TR(0x583955);
s4(0x86966c,u32(u32(m4(0x86966c))+u32(u32(0x1ull))));
}
B58395b:{NFSU2_TR(0x58395b);
s4(0x869670,u32(u32(m4(0x869670))+u32(r4(R+0))));
}
B583961:{NFSU2_TR(0x583961);
{goto L58396f;}
}
B583963:L583963:{c.instructions+=2;NFSU2_TR(0x583963);
s4(0x86987c,u32(u32(m4(0x86987c))+u32(u32(0x1ull))));
}
B583969:{NFSU2_TR(0x583969);
s4(0x869880,u32(u32(m4(0x869880))+u32(r4(R+0))));
}
B58396f:L58396f:{c.instructions+=8;NFSU2_TR(0x58396f);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B583974:{NFSU2_TR(0x583974);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x204ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B58397a:{NFSU2_TR(0x58397a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x866c24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583980:{NFSU2_TR(0x583980);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x866a28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B583986:{NFSU2_TR(0x583986);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B583987:{NFSU2_TR(0x583987);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B58398d:{NFSU2_TR(0x58398d);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x200ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B583993:{NFSU2_TR(0x583993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839a0:L5839a0:{c.instructions+=3;NFSU2_TR(0x5839a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5839a4:{NFSU2_TR(0x5839a4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x11ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x11ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x11ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5839a7:{NFSU2_TR(0x5839a7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L583a1c;}}
}
B5839a9:L5839a9:{c.instructions+=1;NFSU2_TR(0x5839a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x583a24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5839b0:L5839b0:{c.instructions+=2;NFSU2_TR(0x5839b0);
w4(R+0,u32(0x7a1290ull));
}
B5839b5:{NFSU2_TR(0x5839b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839b6:L5839b6:{c.instructions+=2;NFSU2_TR(0x5839b6);
w4(R+0,u32(0x7a1278ull));
}
B5839bb:{NFSU2_TR(0x5839bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839bc:L5839bc:{c.instructions+=2;NFSU2_TR(0x5839bc);
w4(R+0,u32(0x7a1264ull));
}
B5839c1:{NFSU2_TR(0x5839c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839c2:L5839c2:{c.instructions+=2;NFSU2_TR(0x5839c2);
w4(R+0,u32(0x7a1250ull));
}
B5839c7:{NFSU2_TR(0x5839c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839c8:L5839c8:{c.instructions+=2;NFSU2_TR(0x5839c8);
w4(R+0,u32(0x7a1234ull));
}
B5839cd:{NFSU2_TR(0x5839cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839ce:L5839ce:{c.instructions+=2;NFSU2_TR(0x5839ce);
w4(R+0,u32(0x7a1224ull));
}
B5839d3:{NFSU2_TR(0x5839d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839d4:L5839d4:{c.instructions+=2;NFSU2_TR(0x5839d4);
w4(R+0,u32(0x7a120cull));
}
B5839d9:{NFSU2_TR(0x5839d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839da:L5839da:{c.instructions+=2;NFSU2_TR(0x5839da);
w4(R+0,u32(0x7a11f4ull));
}
B5839df:{NFSU2_TR(0x5839df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839e0:L5839e0:{c.instructions+=2;NFSU2_TR(0x5839e0);
w4(R+0,u32(0x7a11e0ull));
}
B5839e5:{NFSU2_TR(0x5839e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839e6:L5839e6:{c.instructions+=2;NFSU2_TR(0x5839e6);
w4(R+0,u32(0x7a11ccull));
}
B5839eb:{NFSU2_TR(0x5839eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839ec:L5839ec:{c.instructions+=2;NFSU2_TR(0x5839ec);
w4(R+0,u32(0x7a11b8ull));
}
B5839f1:{NFSU2_TR(0x5839f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839f2:L5839f2:{c.instructions+=2;NFSU2_TR(0x5839f2);
w4(R+0,u32(0x7a11a4ull));
}
B5839f7:{NFSU2_TR(0x5839f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839f8:L5839f8:{c.instructions+=2;NFSU2_TR(0x5839f8);
w4(R+0,u32(0x7a118cull));
}
B5839fd:{NFSU2_TR(0x5839fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5839fe:L5839fe:{c.instructions+=2;NFSU2_TR(0x5839fe);
w4(R+0,u32(0x7a1174ull));
}
B583a03:{NFSU2_TR(0x583a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a04:L583a04:{c.instructions+=2;NFSU2_TR(0x583a04);
w4(R+0,u32(0x7a1160ull));
}
B583a09:{NFSU2_TR(0x583a09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a0a:L583a0a:{c.instructions+=2;NFSU2_TR(0x583a0a);
w4(R+0,u32(0x7a1148ull));
}
B583a0f:{NFSU2_TR(0x583a0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a10:L583a10:{c.instructions+=2;NFSU2_TR(0x583a10);
w4(R+0,u32(0x7a1130ull));
}
B583a15:{NFSU2_TR(0x583a15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a16:L583a16:{c.instructions+=2;NFSU2_TR(0x583a16);
w4(R+0,u32(0x7a1118ull));
}
B583a1b:{NFSU2_TR(0x583a1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a1c:L583a1c:{c.instructions+=2;NFSU2_TR(0x583a1c);
w4(R+0,u32(0x78fe78ull));
}
B583a21:{NFSU2_TR(0x583a21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a70:L583a70:{c.instructions+=4;NFSU2_TR(0x583a70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B583a72:{NFSU2_TR(0x583a72);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B583a74:{NFSU2_TR(0x583a74);
w4(R+4,u32(0x8693ccull));
}
B583a79:{NFSU2_TR(0x583a79);
__builtin_memmove((R+16),(R+16),4);
}
B583a80:L583a80:{c.instructions+=2;NFSU2_TR(0x583a80);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(u32(0xffffffffull))));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B583a83:{NFSU2_TR(0x583a83);
if(r1(R+518)){{goto L583a92;}}
}
B583a85:L583a85:{c.instructions+=4;NFSU2_TR(0x583a85);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B583a88:{NFSU2_TR(0x583a88);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B583a89:{NFSU2_TR(0x583a89);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x86946cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x86946cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x86946cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583a8f:{NFSU2_TR(0x583a8f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x583a80u);}goto L583a80;}}
}
B583a91:L583a91:{c.instructions+=1;NFSU2_TR(0x583a91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583a92:L583a92:{c.instructions+=8;NFSU2_TR(0x583a92);
__builtin_memmove((R+4),gp(0x866a24),4);
}
B583a98:{NFSU2_TR(0x583a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583a9c:{NFSU2_TR(0x583a9c);
u8 U[23];
w4(U+15,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
__builtin_memmove((U+19),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+15))));
w1(U+5,u8((r4(U+15))==(u32(0x0ull))));
w4(U+6,u32(u32(r4(U+15))-u32(u32(0x1ull))));
w4(U+10,shl<u32>(r4(U+19),u64(r4(U+6))));
w1(U+14,u8(s32(r4(U+10))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+5),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+5))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+14))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
}
B583a9f:{NFSU2_TR(0x583a9f);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583aa0:{NFSU2_TR(0x583aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8693ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583aa6:{NFSU2_TR(0x583aa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8693c8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B583aac:{NFSU2_TR(0x583aac);
__builtin_memmove(gp(0x866a24),(R+4),4);
}
B583ab2:{NFSU2_TR(0x583ab2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583ac0:L583ac0:{c.instructions+=6;NFSU2_TR(0x583ac0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583ac4:{NFSU2_TR(0x583ac4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ac5:{NFSU2_TR(0x583ac5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B583ac7:{NFSU2_TR(0x583ac7);
w4(R+0,u32(0x8693c8ull));
}
B583acc:{NFSU2_TR(0x583acc);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xffffffffull))));
}
B583acf:{NFSU2_TR(0x583acf);
}
B583ad0:L583ad0:{c.instructions+=2;NFSU2_TR(0x583ad0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B583ad3:{NFSU2_TR(0x583ad3);
if(r1(R+518)){{goto L583ad9;}}
}
B583ad5:L583ad5:{c.instructions+=2;NFSU2_TR(0x583ad5);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+4)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B583ad7:{NFSU2_TR(0x583ad7);
if(r1(R+518)){{goto L583ae5;}}
}
B583ad9:L583ad9:{c.instructions+=3;NFSU2_TR(0x583ad9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B583adc:{NFSU2_TR(0x583adc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x869468ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x869468ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x869468ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583ae1:{NFSU2_TR(0x583ae1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x583ad0u);}goto L583ad0;}}
}
B583ae3:L583ae3:{c.instructions+=1;NFSU2_TR(0x583ae3);
__builtin_memmove((R+0),(R+24),4);
}
B583ae5:L583ae5:{c.instructions+=2;NFSU2_TR(0x583ae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583ae6:{NFSU2_TR(0x583ae6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583af0:L583af0:{c.instructions+=7;NFSU2_TR(0x583af0);
__builtin_memmove((R+0),(R+4),4);
}
B583af2:{NFSU2_TR(0x583af2);
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
B583af4:{NFSU2_TR(0x583af4);
u8 U[4];
w4(U+0,u32(0x7a12a0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B583afa:{NFSU2_TR(0x583afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583afd:{NFSU2_TR(0x583afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583b00:{NFSU2_TR(0x583b00);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B583b06:{NFSU2_TR(0x583b06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583b10:L583b10:{c.instructions+=5;NFSU2_TR(0x583b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583b14:{NFSU2_TR(0x583b14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b15:{NFSU2_TR(0x583b15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b16:{NFSU2_TR(0x583b16);
__builtin_memmove((R+24),(R+4),4);
}
B583b18:{NFSU2_TR(0x583b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583b1dull));
TAIL_STATIC(0x749ea0u,749);
}
B583b1d:L583b1d:{c.instructions+=8;NFSU2_TR(0x583b1d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583b20:{NFSU2_TR(0x583b20);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B583b22:{NFSU2_TR(0x583b22);
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
B583b24:{NFSU2_TR(0x583b24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583b27:{NFSU2_TR(0x583b27);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B583b2a:{NFSU2_TR(0x583b2a);
__builtin_memmove((R+0),(R+4),1);
}
B583b2c:{NFSU2_TR(0x583b2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583b2d:{NFSU2_TR(0x583b2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583b30:L583b30:{c.instructions+=5;NFSU2_TR(0x583b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b31:{NFSU2_TR(0x583b31);
__builtin_memmove((R+24),(R+4),4);
}
B583b33:{NFSU2_TR(0x583b33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583b36:{NFSU2_TR(0x583b36);
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
B583b38:{NFSU2_TR(0x583b38);
if(r1(R+518)){{goto L583b4a;}}
}
B583b3a:L583b3a:{c.instructions+=2;NFSU2_TR(0x583b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b3b:{NFSU2_TR(0x583b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583b40ull));
TAIL_STATIC(0x748b60u,748);
}
B583b40:L583b40:{c.instructions+=2;NFSU2_TR(0x583b40);
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
B583b43:{NFSU2_TR(0x583b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B583b4a:L583b4a:{c.instructions+=2;NFSU2_TR(0x583b4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583b4b:{NFSU2_TR(0x583b4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583b50:L583b50:{c.instructions+=6;NFSU2_TR(0x583b50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b51:{NFSU2_TR(0x583b51);
__builtin_memmove((R+24),(R+4),4);
}
B583b53:{NFSU2_TR(0x583b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583b56:{NFSU2_TR(0x583b56);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B583b58:{NFSU2_TR(0x583b58);
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
B583b5a:{NFSU2_TR(0x583b5a);
if(r1(R+518)){{goto L583c06;}}
}
B583b60:L583b60:{c.instructions+=9;NFSU2_TR(0x583b60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b61:{NFSU2_TR(0x583b61);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b62:{NFSU2_TR(0x583b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B583b66:{NFSU2_TR(0x583b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583b68:{NFSU2_TR(0x583b68);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b6a:{NFSU2_TR(0x583b6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b6b:{NFSU2_TR(0x583b6b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+20),(U+0),4);
}
B583b6e:{NFSU2_TR(0x583b6e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b6f:{NFSU2_TR(0x583b6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583b74ull));
TAIL_STATIC(0x43dc00u,43d);
}
B583b74:L583b74:{c.instructions+=6;NFSU2_TR(0x583b74);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583b77:{NFSU2_TR(0x583b77);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b79:{NFSU2_TR(0x583b79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b7a:{NFSU2_TR(0x583b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B583b7d:{NFSU2_TR(0x583b7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b7e:{NFSU2_TR(0x583b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583b83ull));
TAIL_STATIC(0x43dc00u,43d);
}
B583b83:L583b83:{c.instructions+=6;NFSU2_TR(0x583b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583b86:{NFSU2_TR(0x583b86);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b88:{NFSU2_TR(0x583b88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b89:{NFSU2_TR(0x583b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B583b8c:{NFSU2_TR(0x583b8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b8d:{NFSU2_TR(0x583b8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583b92ull));
TAIL_STATIC(0x43dc00u,43d);
}
B583b92:L583b92:{c.instructions+=6;NFSU2_TR(0x583b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583b95:{NFSU2_TR(0x583b95);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b97:{NFSU2_TR(0x583b97);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b98:{NFSU2_TR(0x583b98);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B583b9e:{NFSU2_TR(0x583b9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583b9f:{NFSU2_TR(0x583b9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ba4ull));
TAIL_STATIC(0x43dc00u,43d);
}
B583ba4:L583ba4:{c.instructions+=6;NFSU2_TR(0x583ba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583ba7:{NFSU2_TR(0x583ba7);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ba9:{NFSU2_TR(0x583ba9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583baa:{NFSU2_TR(0x583baa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((R+8),(U+0),4);
}
B583bb0:{NFSU2_TR(0x583bb0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bb1:{NFSU2_TR(0x583bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583bb6ull));
TAIL_STATIC(0x43dc00u,43d);
}
B583bb6:L583bb6:{c.instructions+=6;NFSU2_TR(0x583bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583bb9:{NFSU2_TR(0x583bb9);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bbb:{NFSU2_TR(0x583bbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bbc:{NFSU2_TR(0x583bbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B583bc2:{NFSU2_TR(0x583bc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bc3:{NFSU2_TR(0x583bc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583bc8ull));
TAIL_STATIC(0x43dc00u,43d);
}
B583bc8:L583bc8:{c.instructions+=7;NFSU2_TR(0x583bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583bcb:{NFSU2_TR(0x583bcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B583bce:{NFSU2_TR(0x583bce);
u8 U[4];
w4(U+0,u32(0x27ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bd0:{NFSU2_TR(0x583bd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bd1:{NFSU2_TR(0x583bd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B583bd7:{NFSU2_TR(0x583bd7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bd8:{NFSU2_TR(0x583bd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583bddull));
TAIL_STATIC(0x43dc00u,43d);
}
B583bdd:L583bdd:{c.instructions+=5;NFSU2_TR(0x583bdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583be0:{NFSU2_TR(0x583be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583be1:{NFSU2_TR(0x583be1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583be2:{NFSU2_TR(0x583be2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583be6:{NFSU2_TR(0x583be6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583bebull));
TAIL_STATIC(0x748ba0u,748);
}
B583beb:L583beb:{c.instructions+=5;NFSU2_TR(0x583beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583bee:{NFSU2_TR(0x583bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583bf1:{NFSU2_TR(0x583bf1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bf2:{NFSU2_TR(0x583bf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583bf3:{NFSU2_TR(0x583bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583bf8ull));
TAIL_STATIC(0x748c60u,748);
}
B583bf8:L583bf8:{c.instructions+=5;NFSU2_TR(0x583bf8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583bfb:{NFSU2_TR(0x583bfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583bfc:{NFSU2_TR(0x583bfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583c03:{NFSU2_TR(0x583c03);
w1(R+0,u8(0x1ull));
}
B583c05:{NFSU2_TR(0x583c05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B583c06:L583c06:{c.instructions+=2;NFSU2_TR(0x583c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583c07:{NFSU2_TR(0x583c07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583c10:L583c10:{c.instructions+=8;NFSU2_TR(0x583c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2f8ull))));
}
B583c16:{NFSU2_TR(0x583c16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c17:{NFSU2_TR(0x583c17);
__builtin_memmove((R+24),(R+4),4);
}
B583c19:{NFSU2_TR(0x583c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583c1c:{NFSU2_TR(0x583c1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583c20:{NFSU2_TR(0x583c20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c21:{NFSU2_TR(0x583c21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c22:{NFSU2_TR(0x583c22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583c27ull));
TAIL_STATIC(0x749640u,749);
}
B583c27:L583c27:{c.instructions+=6;NFSU2_TR(0x583c27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583c29:{NFSU2_TR(0x583c29);
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
B583c2c:{NFSU2_TR(0x583c2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583c30:{NFSU2_TR(0x583c30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c31:{NFSU2_TR(0x583c31);
__builtin_memmove((R+4),(R+24),4);
}
B583c33:{NFSU2_TR(0x583c33);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583c36ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583c36:L583c36:{c.instructions+=4;NFSU2_TR(0x583c36);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583c3d:{NFSU2_TR(0x583c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583c3e:{NFSU2_TR(0x583c3e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2f8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2f8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2f8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583c44:{NFSU2_TR(0x583c44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583c50:L583c50:{c.instructions+=8;NFSU2_TR(0x583c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x32cull))));
}
B583c56:{NFSU2_TR(0x583c56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c57:{NFSU2_TR(0x583c57);
__builtin_memmove((R+24),(R+4),4);
}
B583c59:{NFSU2_TR(0x583c59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583c5c:{NFSU2_TR(0x583c5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583c60:{NFSU2_TR(0x583c60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c61:{NFSU2_TR(0x583c61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c62:{NFSU2_TR(0x583c62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583c67ull));
TAIL_STATIC(0x749c50u,749);
}
B583c67:L583c67:{c.instructions+=6;NFSU2_TR(0x583c67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583c69:{NFSU2_TR(0x583c69);
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
B583c6c:{NFSU2_TR(0x583c6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583c70:{NFSU2_TR(0x583c70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c71:{NFSU2_TR(0x583c71);
__builtin_memmove((R+4),(R+24),4);
}
B583c73:{NFSU2_TR(0x583c73);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583c76ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583c76:L583c76:{c.instructions+=4;NFSU2_TR(0x583c76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583c7d:{NFSU2_TR(0x583c7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583c7e:{NFSU2_TR(0x583c7e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x32cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x32cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x32cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583c84:{NFSU2_TR(0x583c84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583c90:L583c90:{c.instructions+=8;NFSU2_TR(0x583c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x520ull))));
}
B583c96:{NFSU2_TR(0x583c96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583c97:{NFSU2_TR(0x583c97);
__builtin_memmove((R+24),(R+4),4);
}
B583c99:{NFSU2_TR(0x583c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583c9c:{NFSU2_TR(0x583c9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583ca0:{NFSU2_TR(0x583ca0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ca1:{NFSU2_TR(0x583ca1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ca2:{NFSU2_TR(0x583ca2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ca7ull));
TAIL_STATIC(0x7497a0u,749);
}
B583ca7:L583ca7:{c.instructions+=6;NFSU2_TR(0x583ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583ca9:{NFSU2_TR(0x583ca9);
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
B583cac:{NFSU2_TR(0x583cac);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583cb0:{NFSU2_TR(0x583cb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583cb1:{NFSU2_TR(0x583cb1);
__builtin_memmove((R+4),(R+24),4);
}
B583cb3:{NFSU2_TR(0x583cb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583cb6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583cb6:L583cb6:{c.instructions+=4;NFSU2_TR(0x583cb6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583cbd:{NFSU2_TR(0x583cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583cbe:{NFSU2_TR(0x583cbe);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x520ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x520ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x520ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583cc4:{NFSU2_TR(0x583cc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583cd0:L583cd0:{c.instructions+=8;NFSU2_TR(0x583cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x274ull))));
}
B583cd6:{NFSU2_TR(0x583cd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583cd7:{NFSU2_TR(0x583cd7);
__builtin_memmove((R+24),(R+4),4);
}
B583cd9:{NFSU2_TR(0x583cd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583cdc:{NFSU2_TR(0x583cdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583ce0:{NFSU2_TR(0x583ce0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ce1:{NFSU2_TR(0x583ce1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ce2:{NFSU2_TR(0x583ce2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ce7ull));
TAIL_STATIC(0x749560u,749);
}
B583ce7:L583ce7:{c.instructions+=6;NFSU2_TR(0x583ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583ce9:{NFSU2_TR(0x583ce9);
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
B583cec:{NFSU2_TR(0x583cec);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583cf0:{NFSU2_TR(0x583cf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583cf1:{NFSU2_TR(0x583cf1);
__builtin_memmove((R+4),(R+24),4);
}
B583cf3:{NFSU2_TR(0x583cf3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583cf6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583cf6:L583cf6:{c.instructions+=3;NFSU2_TR(0x583cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583cf9:{NFSU2_TR(0x583cf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583cfa:{NFSU2_TR(0x583cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583cffull));
TAIL_STATIC(0x748f20u,748);
}
B583cff:L583cff:{c.instructions+=5;NFSU2_TR(0x583cff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583d02:{NFSU2_TR(0x583d02);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583d09:{NFSU2_TR(0x583d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583d0a:{NFSU2_TR(0x583d0a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x274ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x274ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x274ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583d10:{NFSU2_TR(0x583d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583d20:L583d20:{c.instructions+=8;NFSU2_TR(0x583d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf8ull))));
}
B583d26:{NFSU2_TR(0x583d26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d27:{NFSU2_TR(0x583d27);
__builtin_memmove((R+24),(R+4),4);
}
B583d29:{NFSU2_TR(0x583d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583d2c:{NFSU2_TR(0x583d2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B583d30:{NFSU2_TR(0x583d30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d31:{NFSU2_TR(0x583d31);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d32:{NFSU2_TR(0x583d32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583d37ull));
TAIL_STATIC(0x749de0u,749);
}
B583d37:L583d37:{c.instructions+=7;NFSU2_TR(0x583d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583d39:{NFSU2_TR(0x583d39);
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
B583d3c:{NFSU2_TR(0x583d3c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583d40:{NFSU2_TR(0x583d40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d41:{NFSU2_TR(0x583d41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d42:{NFSU2_TR(0x583d42);
__builtin_memmove((R+4),(R+24),4);
}
B583d44:{NFSU2_TR(0x583d44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583d47ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583d47:L583d47:{c.instructions+=4;NFSU2_TR(0x583d47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583d4e:{NFSU2_TR(0x583d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583d4f:{NFSU2_TR(0x583d4f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xf8ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xf8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xf8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583d55:{NFSU2_TR(0x583d55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583d60:L583d60:{c.instructions+=4;NFSU2_TR(0x583d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d61:{NFSU2_TR(0x583d61);
__builtin_memmove((R+24),(R+4),4);
}
B583d63:{NFSU2_TR(0x583d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583d65:{NFSU2_TR(0x583d65);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583d68ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583d68:L583d68:{c.instructions+=2;NFSU2_TR(0x583d68);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B583d6b:{NFSU2_TR(0x583d6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L583d89;}}
}
B583d6d:L583d6d:{c.instructions+=4;NFSU2_TR(0x583d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583d70:{NFSU2_TR(0x583d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d71:{NFSU2_TR(0x583d71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d72:{NFSU2_TR(0x583d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583d77ull));
TAIL_STATIC(0x748e10u,748);
}
B583d77:L583d77:{c.instructions+=6;NFSU2_TR(0x583d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583d79:{NFSU2_TR(0x583d79);
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
B583d7c:{NFSU2_TR(0x583d7c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583d83:{NFSU2_TR(0x583d83);
__builtin_memmove((R+4),(R+24),4);
}
B583d85:{NFSU2_TR(0x583d85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583d86:{NFSU2_TR(0x583d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B583d89:L583d89:{c.instructions+=2;NFSU2_TR(0x583d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583d8a:{NFSU2_TR(0x583d8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583d90:L583d90:{c.instructions+=6;NFSU2_TR(0x583d90);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x32cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x32cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x32cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583d96:{NFSU2_TR(0x583d96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d97:{NFSU2_TR(0x583d97);
__builtin_memmove((R+24),(R+4),4);
}
B583d99:{NFSU2_TR(0x583d99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583d9b:{NFSU2_TR(0x583d9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583d9c:{NFSU2_TR(0x583d9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583d9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583d9f:L583d9f:{c.instructions+=3;NFSU2_TR(0x583d9f);
__builtin_memmove((R+28),(R+0),4);
}
B583da1:{NFSU2_TR(0x583da1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B583da4:{NFSU2_TR(0x583da4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L583e36;}}
}
B583daa:L583daa:{c.instructions+=5;NFSU2_TR(0x583daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583dad:{NFSU2_TR(0x583dad);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583db1:{NFSU2_TR(0x583db1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583db2:{NFSU2_TR(0x583db2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583db3:{NFSU2_TR(0x583db3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583db8ull));
TAIL_STATIC(0x749c50u,749);
}
B583db8:L583db8:{c.instructions+=3;NFSU2_TR(0x583db8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B583dbb:{NFSU2_TR(0x583dbb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583dbe:{NFSU2_TR(0x583dbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583dc9;}}
}
B583dc0:L583dc0:{c.instructions+=2;NFSU2_TR(0x583dc0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583dc7:{NFSU2_TR(0x583dc7);
{goto L583df1;}
}
B583dc9:L583dc9:{c.instructions+=2;NFSU2_TR(0x583dc9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583dcc:{NFSU2_TR(0x583dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583dd7;}}
}
B583dce:L583dce:{c.instructions+=2;NFSU2_TR(0x583dce);
u8 U[5];
w4(U+0,u32(u32(u32(0x279ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583dd5:{NFSU2_TR(0x583dd5);
{goto L583df1;}
}
B583dd7:L583dd7:{c.instructions+=2;NFSU2_TR(0x583dd7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583dda:{NFSU2_TR(0x583dda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583de5;}}
}
B583ddc:L583ddc:{c.instructions+=2;NFSU2_TR(0x583ddc);
u8 U[5];
w4(U+0,u32(u32(u32(0x2a6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583de3:{NFSU2_TR(0x583de3);
{goto L583df1;}
}
B583de5:L583de5:{c.instructions+=2;NFSU2_TR(0x583de5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583de8:{NFSU2_TR(0x583de8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583e1b;}}
}
B583dea:L583dea:{c.instructions+=1;NFSU2_TR(0x583dea);
u8 U[5];
w4(U+0,u32(u32(u32(0x2d3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583df1:L583df1:{c.instructions+=2;NFSU2_TR(0x583df1);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5eull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5eull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B583df3:{NFSU2_TR(0x583df3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583e1b;}}
}
B583df5:L583df5:{c.instructions+=6;NFSU2_TR(0x583df5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583df7:{NFSU2_TR(0x583df7);
u8 U[4];
w4(U+0,u32(0x33ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583df9:{NFSU2_TR(0x583df9);
u8 U[4];
w4(U+0,u32(u32(u32(0x304ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583e00:{NFSU2_TR(0x583e00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e01:{NFSU2_TR(0x583e01);
__builtin_memmove((R+4),(R+24),4);
}
B583e03:{NFSU2_TR(0x583e03);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583e06ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583e06:L583e06:{c.instructions+=2;NFSU2_TR(0x583e06);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583e08:{NFSU2_TR(0x583e08);
if(r1(R+518)){{goto L583e1b;}}
}
B583e0a:L583e0a:{c.instructions+=5;NFSU2_TR(0x583e0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583e0d:{NFSU2_TR(0x583e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B583e11:{NFSU2_TR(0x583e11);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e12:{NFSU2_TR(0x583e12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e13:{NFSU2_TR(0x583e13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583e18ull));
TAIL_STATIC(0x749db0u,749);
}
B583e18:L583e18:{c.instructions+=1;NFSU2_TR(0x583e18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B583e1b:L583e1b:{c.instructions+=4;NFSU2_TR(0x583e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583e1e:{NFSU2_TR(0x583e1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e1f:{NFSU2_TR(0x583e1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e20:{NFSU2_TR(0x583e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583e25ull));
TAIL_STATIC(0x748e10u,748);
}
B583e25:L583e25:{c.instructions+=5;NFSU2_TR(0x583e25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583e27:{NFSU2_TR(0x583e27);
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
B583e2a:{NFSU2_TR(0x583e2a);
__builtin_memmove((R+4),(R+24),4);
}
B583e2c:{NFSU2_TR(0x583e2c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583e33:{NFSU2_TR(0x583e33);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583e36ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583e36:L583e36:{c.instructions+=4;NFSU2_TR(0x583e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583e37:{NFSU2_TR(0x583e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583e38:{NFSU2_TR(0x583e38);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x32cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x32cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x32cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583e3e:{NFSU2_TR(0x583e3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583e40:L583e40:{c.instructions+=6;NFSU2_TR(0x583e40);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x520ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x520ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x520ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583e46:{NFSU2_TR(0x583e46);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e47:{NFSU2_TR(0x583e47);
__builtin_memmove((R+24),(R+4),4);
}
B583e49:{NFSU2_TR(0x583e49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583e4b:{NFSU2_TR(0x583e4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e4c:{NFSU2_TR(0x583e4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583e4full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583e4f:L583e4f:{c.instructions+=3;NFSU2_TR(0x583e4f);
__builtin_memmove((R+28),(R+0),4);
}
B583e51:{NFSU2_TR(0x583e51);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B583e54:{NFSU2_TR(0x583e54);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L583ee1;}}
}
B583e5a:L583e5a:{c.instructions+=5;NFSU2_TR(0x583e5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583e5d:{NFSU2_TR(0x583e5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583e61:{NFSU2_TR(0x583e61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e62:{NFSU2_TR(0x583e62);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583e63:{NFSU2_TR(0x583e63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583e68ull));
TAIL_STATIC(0x7497a0u,749);
}
B583e68:L583e68:{c.instructions+=3;NFSU2_TR(0x583e68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B583e6b:{NFSU2_TR(0x583e6b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583e6e:{NFSU2_TR(0x583e6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583e79;}}
}
B583e70:L583e70:{c.instructions+=2;NFSU2_TR(0x583e70);
u8 U[5];
w4(U+0,u32(u32(u32(0x24cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583e77:{NFSU2_TR(0x583e77);
{goto L583ea1;}
}
B583e79:L583e79:{c.instructions+=2;NFSU2_TR(0x583e79);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583e7c:{NFSU2_TR(0x583e7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583e87;}}
}
B583e7e:L583e7e:{c.instructions+=2;NFSU2_TR(0x583e7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x279ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583e85:{NFSU2_TR(0x583e85);
{goto L583ea1;}
}
B583e87:L583e87:{c.instructions+=2;NFSU2_TR(0x583e87);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583e8a:{NFSU2_TR(0x583e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583e95;}}
}
B583e8c:L583e8c:{c.instructions+=2;NFSU2_TR(0x583e8c);
u8 U[5];
w4(U+0,u32(u32(u32(0x2a6ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583e93:{NFSU2_TR(0x583e93);
{goto L583ea1;}
}
B583e95:L583e95:{c.instructions+=2;NFSU2_TR(0x583e95);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583e98:{NFSU2_TR(0x583e98);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583ec6;}}
}
B583e9a:L583e9a:{c.instructions+=1;NFSU2_TR(0x583e9a);
u8 U[5];
w4(U+0,u32(u32(u32(0x2d3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583ea1:L583ea1:{c.instructions+=2;NFSU2_TR(0x583ea1);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x5eull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x5eull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B583ea3:{NFSU2_TR(0x583ea3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583ec6;}}
}
B583ea5:L583ea5:{c.instructions+=5;NFSU2_TR(0x583ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583ea7:{NFSU2_TR(0x583ea7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B583eab:{NFSU2_TR(0x583eab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583eac:{NFSU2_TR(0x583eac);
__builtin_memmove((R+4),(R+24),4);
}
B583eae:{NFSU2_TR(0x583eae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583eb1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583eb1:L583eb1:{c.instructions+=2;NFSU2_TR(0x583eb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583eb3:{NFSU2_TR(0x583eb3);
if(r1(R+518)){{goto L583ec6;}}
}
B583eb5:L583eb5:{c.instructions+=5;NFSU2_TR(0x583eb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583eb8:{NFSU2_TR(0x583eb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B583ebc:{NFSU2_TR(0x583ebc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ebd:{NFSU2_TR(0x583ebd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ebe:{NFSU2_TR(0x583ebe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ec3ull));
TAIL_STATIC(0x749ae0u,749);
}
B583ec3:L583ec3:{c.instructions+=1;NFSU2_TR(0x583ec3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B583ec6:L583ec6:{c.instructions+=4;NFSU2_TR(0x583ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583ec9:{NFSU2_TR(0x583ec9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583eca:{NFSU2_TR(0x583eca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ecb:{NFSU2_TR(0x583ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ed0ull));
TAIL_STATIC(0x748e10u,748);
}
B583ed0:L583ed0:{c.instructions+=5;NFSU2_TR(0x583ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B583ed2:{NFSU2_TR(0x583ed2);
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
B583ed5:{NFSU2_TR(0x583ed5);
__builtin_memmove((R+4),(R+24),4);
}
B583ed7:{NFSU2_TR(0x583ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583ede:{NFSU2_TR(0x583ede);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ee1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583ee1:L583ee1:{c.instructions+=4;NFSU2_TR(0x583ee1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583ee2:{NFSU2_TR(0x583ee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583ee3:{NFSU2_TR(0x583ee3);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x520ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x520ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x520ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B583ee9:{NFSU2_TR(0x583ee9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583ef0:L583ef0:{c.instructions+=7;NFSU2_TR(0x583ef0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ef1:{NFSU2_TR(0x583ef1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ef2:{NFSU2_TR(0x583ef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ef3:{NFSU2_TR(0x583ef3);
__builtin_memmove((R+24),(R+4),4);
}
B583ef5:{NFSU2_TR(0x583ef5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583ef7:{NFSU2_TR(0x583ef7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ef8:{NFSU2_TR(0x583ef8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583efbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B583efb:L583efb:{c.instructions+=4;NFSU2_TR(0x583efb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583efe:{NFSU2_TR(0x583efe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583eff:{NFSU2_TR(0x583eff);
__builtin_memmove((R+28),(R+0),4);
}
B583f01:{NFSU2_TR(0x583f01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583f06ull));
TAIL_STATIC(0x749f50u,749);
}
B583f06:L583f06:{c.instructions+=7;NFSU2_TR(0x583f06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B583f09:{NFSU2_TR(0x583f09);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B583f0b:{NFSU2_TR(0x583f0b);
u8 U[6];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+5,u8(!(r1(R+518))));
__builtin_memmove((U+4),(U+5),1);
s1(u32(r4(U+0)),r1(U+4));
}
B583f10:{NFSU2_TR(0x583f10);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B583f13:{NFSU2_TR(0x583f13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
__builtin_memmove((R+12),(U+0),1);
}
B583f16:{NFSU2_TR(0x583f16);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583f18:{NFSU2_TR(0x583f18);
if(r1(R+518)){{goto L583f27;}}
}
B583f1a:L583f1a:{c.instructions+=4;NFSU2_TR(0x583f1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583f1d:{NFSU2_TR(0x583f1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f1e:{NFSU2_TR(0x583f1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f1f:{NFSU2_TR(0x583f1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583f24ull));
TAIL_STATIC(0x748e10u,748);
}
B583f24:L583f24:{c.instructions+=1;NFSU2_TR(0x583f24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B583f27:L583f27:{c.instructions+=3;NFSU2_TR(0x583f27);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B583f2b:{NFSU2_TR(0x583f2b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B583f2d:{NFSU2_TR(0x583f2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L583f33;}}
}
B583f2f:L583f2f:{c.instructions+=2;NFSU2_TR(0x583f2f);
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
B583f31:{NFSU2_TR(0x583f31);
if(r1(R+518)){{goto L583f47;}}
}
B583f33:L583f33:{c.instructions+=8;NFSU2_TR(0x583f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B583f35:{NFSU2_TR(0x583f35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583f36:{NFSU2_TR(0x583f36);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583f3d:{NFSU2_TR(0x583f3d);
__builtin_memmove((R+4),(R+24),4);
}
B583f3f:{NFSU2_TR(0x583f3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583f40:{NFSU2_TR(0x583f40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B583f41:{NFSU2_TR(0x583f41);
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
B583f44:{NFSU2_TR(0x583f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B583f47:L583f47:{c.instructions+=5;NFSU2_TR(0x583f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583f48:{NFSU2_TR(0x583f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583f49:{NFSU2_TR(0x583f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B583f4a:{NFSU2_TR(0x583f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B583f4b:{NFSU2_TR(0x583f4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583f50:L583f50:{c.instructions+=6;NFSU2_TR(0x583f50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583f54:{NFSU2_TR(0x583f54);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583f58:{NFSU2_TR(0x583f58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f59:{NFSU2_TR(0x583f59);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f5a:{NFSU2_TR(0x583f5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583f5e:{NFSU2_TR(0x583f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583f63ull));
TAIL_STATIC(0x582af0u,582);
}
B583f63:L583f63:{c.instructions+=1;NFSU2_TR(0x583f63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583f70:L583f70:{c.instructions+=4;NFSU2_TR(0x583f70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583f74:{NFSU2_TR(0x583f74);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B583f78:{NFSU2_TR(0x583f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f79:{NFSU2_TR(0x583f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583f7eull));
TAIL_STATIC(0x582bd0u,582);
}
B583f7e:L583f7e:{c.instructions+=1;NFSU2_TR(0x583f7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583f80:L583f80:{c.instructions+=8;NFSU2_TR(0x583f80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B583f84:{NFSU2_TR(0x583f84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f85:{NFSU2_TR(0x583f85);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B583f89:{NFSU2_TR(0x583f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x130ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B583f8f:{NFSU2_TR(0x583f8f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B583f91:{NFSU2_TR(0x583f91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583f92:{NFSU2_TR(0x583f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B583f98:{NFSU2_TR(0x583f98);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L583f9c;}}
}
B583f9a:L583f9a:{c.instructions+=1;NFSU2_TR(0x583f9a);
__builtin_memmove((R+0),(R+8),4);
}
B583f9c:L583f9c:{c.instructions+=3;NFSU2_TR(0x583f9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B583fa2:{NFSU2_TR(0x583fa2);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B583fa4:{NFSU2_TR(0x583fa4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L583fa8;}}
}
B583fa6:L583fa6:{c.instructions+=1;NFSU2_TR(0x583fa6);
__builtin_memmove((R+0),(R+24),4);
}
B583fa8:L583fa8:{c.instructions+=4;NFSU2_TR(0x583fa8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fa9:{NFSU2_TR(0x583fa9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B583fab:{NFSU2_TR(0x583fab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fac:{NFSU2_TR(0x583fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583fb1ull));
TAIL_STATIC(0x581d00u,581);
}
B583fb1:L583fb1:{c.instructions+=3;NFSU2_TR(0x583fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B583fb2:{NFSU2_TR(0x583fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B583fb3:{NFSU2_TR(0x583fb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583fc0:L583fc0:{c.instructions+=7;NFSU2_TR(0x583fc0);
__builtin_memmove((R+0),(R+4),4);
}
B583fc2:{NFSU2_TR(0x583fc2);
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
B583fc4:{NFSU2_TR(0x583fc4);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B583fc6:{NFSU2_TR(0x583fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583fcc:{NFSU2_TR(0x583fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x404ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B583fd2:{NFSU2_TR(0x583fd2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x408ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B583fd9:{NFSU2_TR(0x583fd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B583fe0:L583fe0:{c.instructions+=9;NFSU2_TR(0x583fe0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fe1:{NFSU2_TR(0x583fe1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B583fe5:{NFSU2_TR(0x583fe5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fe6:{NFSU2_TR(0x583fe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fe7:{NFSU2_TR(0x583fe7);
w4(R+0,u32(s32(s16(r2(R+12)))));
}
B583fea:{NFSU2_TR(0x583fea);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fec:{NFSU2_TR(0x583fec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583fed:{NFSU2_TR(0x583fed);
__builtin_memmove((R+28),(R+4),4);
}
B583fef:{NFSU2_TR(0x583fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x583ff4ull));
TAIL_STATIC(0x581d00u,581);
}
B583ff4:L583ff4:{c.instructions+=3;NFSU2_TR(0x583ff4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B583ff6:{NFSU2_TR(0x583ff6);
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
B583ff8:{NFSU2_TR(0x583ff8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x584014u,584);}
}
B583ffa:L583ffa:{c.instructions+=3;NFSU2_TR(0x583ffa);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B583ffb:{NFSU2_TR(0x583ffb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B583fff:{NFSU2_TR(0x583fff);
TAIL_STATIC(0x584000u,584);
}
XIT:NFSU2_TR_EXIT(0x583,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
