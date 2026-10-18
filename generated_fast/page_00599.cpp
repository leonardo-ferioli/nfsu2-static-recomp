#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x599,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x599,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_599(u8* __restrict R,Cpu& c);
u32 page_599(Cpu& c){return body_599(c.regs.data(),c);}
__attribute__((noinline)) u32 body_599(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x599000:goto L599000;
case 0x599003:c.instructions+=4;goto B599003;
case 0x599004:c.instructions+=3;goto B599004;
case 0x599009:c.instructions+=2;goto B599009;
case 0x59900a:c.instructions+=1;goto B59900a;
case 0x599010:goto L599010;
case 0x599015:c.instructions+=2;goto B599015;
case 0x599016:c.instructions+=1;goto B599016;
case 0x59901b:goto L59901b;
case 0x599021:c.instructions+=2;goto B599021;
case 0x599022:c.instructions+=1;goto B599022;
case 0x599027:goto L599027;
case 0x59902d:c.instructions+=2;goto B59902d;
case 0x59902e:c.instructions+=1;goto B59902e;
case 0x599033:goto L599033;
case 0x599038:c.instructions+=2;goto B599038;
case 0x599039:c.instructions+=1;goto B599039;
case 0x59903e:goto L59903e;
case 0x599044:c.instructions+=2;goto B599044;
case 0x599045:c.instructions+=1;goto B599045;
case 0x59904a:goto L59904a;
case 0x599050:c.instructions+=2;goto B599050;
case 0x599051:c.instructions+=1;goto B599051;
case 0x599056:goto L599056;
case 0x59905b:c.instructions+=2;goto B59905b;
case 0x59905c:c.instructions+=1;goto B59905c;
case 0x599061:goto L599061;
case 0x599067:c.instructions+=2;goto B599067;
case 0x599068:c.instructions+=1;goto B599068;
case 0x59906d:goto L59906d;
case 0x599073:c.instructions+=2;goto B599073;
case 0x599074:c.instructions+=1;goto B599074;
case 0x599079:goto L599079;
case 0x59907e:c.instructions+=2;goto B59907e;
case 0x59907f:c.instructions+=1;goto B59907f;
case 0x599084:goto L599084;
case 0x599086:c.instructions+=12;goto B599086;
case 0x599089:c.instructions+=11;goto B599089;
case 0x59908e:c.instructions+=10;goto B59908e;
case 0x599093:c.instructions+=9;goto B599093;
case 0x599098:c.instructions+=8;goto B599098;
case 0x59909d:c.instructions+=7;goto B59909d;
case 0x5990a2:c.instructions+=6;goto B5990a2;
case 0x5990a7:c.instructions+=5;goto B5990a7;
case 0x5990ac:c.instructions+=4;goto B5990ac;
case 0x5990b1:c.instructions+=3;goto B5990b1;
case 0x5990b6:c.instructions+=2;goto B5990b6;
case 0x5990bb:c.instructions+=1;goto B5990bb;
case 0x5990c0:goto L5990c0;
case 0x5990c4:c.instructions+=9;goto B5990c4;
case 0x5990c6:c.instructions+=8;goto B5990c6;
case 0x5990c8:c.instructions+=7;goto B5990c8;
case 0x5990ca:c.instructions+=6;goto B5990ca;
case 0x5990ce:c.instructions+=5;goto B5990ce;
case 0x5990d0:c.instructions+=4;goto B5990d0;
case 0x5990d6:c.instructions+=3;goto B5990d6;
case 0x5990da:c.instructions+=2;goto B5990da;
case 0x5990dc:c.instructions+=1;goto B5990dc;
case 0x5990de:goto L5990de;
case 0x5990e2:c.instructions+=2;goto B5990e2;
case 0x5990e6:c.instructions+=1;goto B5990e6;
case 0x5990e8:goto L5990e8;
case 0x5990ec:c.instructions+=2;goto B5990ec;
case 0x5990f0:c.instructions+=1;goto B5990f0;
case 0x5990f4:goto L5990f4;
case 0x5990f8:c.instructions+=4;goto B5990f8;
case 0x5990fe:c.instructions+=3;goto B5990fe;
case 0x599100:c.instructions+=2;goto B599100;
case 0x599103:c.instructions+=1;goto B599103;
case 0x599105:goto L599105;
case 0x59910b:c.instructions+=6;goto B59910b;
case 0x599111:c.instructions+=5;goto B599111;
case 0x599113:c.instructions+=4;goto B599113;
case 0x599115:c.instructions+=3;goto B599115;
case 0x599117:c.instructions+=2;goto B599117;
case 0x59911a:c.instructions+=1;goto B59911a;
case 0x59911c:goto L59911c;
case 0x59911e:c.instructions+=2;goto B59911e;
case 0x599120:c.instructions+=1;goto B599120;
case 0x599121:goto L599121;
case 0x599125:c.instructions+=14;goto B599125;
case 0x59912b:c.instructions+=13;goto B59912b;
case 0x599131:c.instructions+=12;goto B599131;
case 0x599137:c.instructions+=11;goto B599137;
case 0x599139:c.instructions+=10;goto B599139;
case 0x59913f:c.instructions+=9;goto B59913f;
case 0x599145:c.instructions+=8;goto B599145;
case 0x599147:c.instructions+=7;goto B599147;
case 0x59914d:c.instructions+=6;goto B59914d;
case 0x59914f:c.instructions+=5;goto B59914f;
case 0x599151:c.instructions+=4;goto B599151;
case 0x599157:c.instructions+=3;goto B599157;
case 0x599159:c.instructions+=2;goto B599159;
case 0x59915c:c.instructions+=1;goto B59915c;
case 0x59915e:goto L59915e;
case 0x599160:c.instructions+=1;goto B599160;
case 0x599166:goto L599166;
case 0x599168:c.instructions+=1;goto B599168;
case 0x599170:goto L599170;
case 0x599175:c.instructions+=2;goto B599175;
case 0x599177:c.instructions+=1;goto B599177;
case 0x599179:goto L599179;
case 0x59917f:c.instructions+=1;goto B59917f;
case 0x599181:goto L599181;
case 0x599185:goto L599185;
case 0x599188:c.instructions+=4;goto B599188;
case 0x59918a:c.instructions+=3;goto B59918a;
case 0x599190:c.instructions+=2;goto B599190;
case 0x599192:c.instructions+=1;goto B599192;
case 0x599194:goto L599194;
case 0x599197:c.instructions+=3;goto B599197;
case 0x59919a:c.instructions+=2;goto B59919a;
case 0x59919c:c.instructions+=1;goto B59919c;
case 0x59919e:goto L59919e;
case 0x5991a0:c.instructions+=2;goto B5991a0;
case 0x5991a6:c.instructions+=1;goto B5991a6;
case 0x5991a8:goto L5991a8;
case 0x5991ab:c.instructions+=19;goto B5991ab;
case 0x5991b1:c.instructions+=18;goto B5991b1;
case 0x5991b4:c.instructions+=17;goto B5991b4;
case 0x5991ba:c.instructions+=16;goto B5991ba;
case 0x5991bd:c.instructions+=15;goto B5991bd;
case 0x5991c0:c.instructions+=14;goto B5991c0;
case 0x5991c3:c.instructions+=13;goto B5991c3;
case 0x5991c9:c.instructions+=12;goto B5991c9;
case 0x5991cc:c.instructions+=11;goto B5991cc;
case 0x5991d2:c.instructions+=10;goto B5991d2;
case 0x5991d5:c.instructions+=9;goto B5991d5;
case 0x5991d8:c.instructions+=8;goto B5991d8;
case 0x5991de:c.instructions+=7;goto B5991de;
case 0x5991e1:c.instructions+=6;goto B5991e1;
case 0x5991e7:c.instructions+=5;goto B5991e7;
case 0x5991ea:c.instructions+=4;goto B5991ea;
case 0x5991f0:c.instructions+=3;goto B5991f0;
case 0x5991f3:c.instructions+=2;goto B5991f3;
case 0x5991f9:c.instructions+=1;goto B5991f9;
case 0x599200:goto L599200;
case 0x599201:c.instructions+=7;goto B599201;
case 0x599203:c.instructions+=6;goto B599203;
case 0x599204:c.instructions+=5;goto B599204;
case 0x599207:c.instructions+=4;goto B599207;
case 0x599209:c.instructions+=3;goto B599209;
case 0x59920a:c.instructions+=2;goto B59920a;
case 0x59920c:c.instructions+=1;goto B59920c;
case 0x599212:goto L599212;
case 0x599218:c.instructions+=2;goto B599218;
case 0x59921a:c.instructions+=1;goto B59921a;
case 0x599220:goto L599220;
case 0x599223:c.instructions+=14;goto B599223;
case 0x599226:c.instructions+=13;goto B599226;
case 0x599229:c.instructions+=12;goto B599229;
case 0x59922c:c.instructions+=11;goto B59922c;
case 0x59922e:c.instructions+=10;goto B59922e;
case 0x599230:c.instructions+=9;goto B599230;
case 0x599236:c.instructions+=8;goto B599236;
case 0x59923c:c.instructions+=7;goto B59923c;
case 0x599242:c.instructions+=6;goto B599242;
case 0x599248:c.instructions+=5;goto B599248;
case 0x59924b:c.instructions+=4;goto B59924b;
case 0x59924e:c.instructions+=3;goto B59924e;
case 0x59924f:c.instructions+=2;goto B59924f;
case 0x599250:c.instructions+=1;goto B599250;
case 0x599255:goto L599255;
case 0x59925b:c.instructions+=14;goto B59925b;
case 0x599261:c.instructions+=13;goto B599261;
case 0x599267:c.instructions+=12;goto B599267;
case 0x59926d:c.instructions+=11;goto B59926d;
case 0x59926f:c.instructions+=10;goto B59926f;
case 0x599275:c.instructions+=9;goto B599275;
case 0x599278:c.instructions+=8;goto B599278;
case 0x59927e:c.instructions+=7;goto B59927e;
case 0x599284:c.instructions+=6;goto B599284;
case 0x59928a:c.instructions+=5;goto B59928a;
case 0x599290:c.instructions+=4;goto B599290;
case 0x599296:c.instructions+=3;goto B599296;
case 0x599298:c.instructions+=2;goto B599298;
case 0x59929e:c.instructions+=1;goto B59929e;
case 0x5992a4:goto L5992a4;
case 0x5992aa:c.instructions+=4;goto B5992aa;
case 0x5992ab:c.instructions+=3;goto B5992ab;
case 0x5992ac:c.instructions+=2;goto B5992ac;
case 0x5992ad:c.instructions+=1;goto B5992ad;
case 0x5992b0:goto L5992b0;
case 0x5992b1:c.instructions+=4;goto B5992b1;
case 0x5992b2:c.instructions+=3;goto B5992b2;
case 0x5992b6:c.instructions+=2;goto B5992b6;
case 0x5992b8:c.instructions+=1;goto B5992b8;
case 0x5992bd:goto L5992bd;
case 0x5992bf:c.instructions+=1;goto B5992bf;
case 0x5992c1:goto L5992c1;
case 0x5992c3:c.instructions+=3;goto B5992c3;
case 0x5992c4:c.instructions+=2;goto B5992c4;
case 0x5992c5:c.instructions+=1;goto B5992c5;
case 0x5992c6:goto L5992c6;
case 0x5992c7:c.instructions+=2;goto B5992c7;
case 0x5992c9:c.instructions+=1;goto B5992c9;
case 0x5992d0:goto L5992d0;
case 0x5992d1:c.instructions+=2;goto B5992d1;
case 0x5992d3:c.instructions+=1;goto B5992d3;
case 0x5992d8:goto L5992d8;
case 0x5992db:c.instructions+=1;goto B5992db;
case 0x5992e1:goto L5992e1;
case 0x5992e2:c.instructions+=2;goto B5992e2;
case 0x5992e4:c.instructions+=1;goto B5992e4;
case 0x5992e9:goto L5992e9;
case 0x5992ec:c.instructions+=1;goto B5992ec;
case 0x5992f2:goto L5992f2;
case 0x5992f3:c.instructions+=2;goto B5992f3;
case 0x5992f6:c.instructions+=1;goto B5992f6;
case 0x5992f8:goto L5992f8;
case 0x5992fb:c.instructions+=6;goto B5992fb;
case 0x599301:c.instructions+=5;goto B599301;
case 0x599307:c.instructions+=4;goto B599307;
case 0x59930d:c.instructions+=3;goto B59930d;
case 0x59930f:c.instructions+=2;goto B59930f;
case 0x599312:c.instructions+=1;goto B599312;
case 0x599314:goto L599314;
case 0x59931b:c.instructions+=1;goto B59931b;
case 0x59931d:goto L59931d;
case 0x59931f:c.instructions+=1;goto B59931f;
case 0x599321:goto L599321;
case 0x599328:c.instructions+=1;goto B599328;
case 0x59932e:goto L59932e;
case 0x599332:c.instructions+=36;goto B599332;
case 0x599338:c.instructions+=35;goto B599338;
case 0x59933e:c.instructions+=34;goto B59933e;
case 0x599344:c.instructions+=33;goto B599344;
case 0x599346:c.instructions+=32;goto B599346;
case 0x599348:c.instructions+=31;goto B599348;
case 0x59934a:c.instructions+=30;goto B59934a;
case 0x59934c:c.instructions+=29;goto B59934c;
case 0x59934e:c.instructions+=28;goto B59934e;
case 0x599350:c.instructions+=27;goto B599350;
case 0x599352:c.instructions+=26;goto B599352;
case 0x599354:c.instructions+=25;goto B599354;
case 0x599356:c.instructions+=24;goto B599356;
case 0x599358:c.instructions+=23;goto B599358;
case 0x59935a:c.instructions+=22;goto B59935a;
case 0x59935c:c.instructions+=21;goto B59935c;
case 0x599360:c.instructions+=20;goto B599360;
case 0x599366:c.instructions+=19;goto B599366;
case 0x59936c:c.instructions+=18;goto B59936c;
case 0x599372:c.instructions+=17;goto B599372;
case 0x599374:c.instructions+=16;goto B599374;
case 0x599376:c.instructions+=15;goto B599376;
case 0x599378:c.instructions+=14;goto B599378;
case 0x59937a:c.instructions+=13;goto B59937a;
case 0x59937c:c.instructions+=12;goto B59937c;
case 0x59937e:c.instructions+=11;goto B59937e;
case 0x599380:c.instructions+=10;goto B599380;
case 0x599382:c.instructions+=9;goto B599382;
case 0x599384:c.instructions+=8;goto B599384;
case 0x599386:c.instructions+=7;goto B599386;
case 0x599388:c.instructions+=6;goto B599388;
case 0x59938a:c.instructions+=5;goto B59938a;
case 0x59938e:c.instructions+=4;goto B59938e;
case 0x599394:c.instructions+=3;goto B599394;
case 0x599396:c.instructions+=2;goto B599396;
case 0x599399:c.instructions+=1;goto B599399;
case 0x59939f:goto L59939f;
case 0x5993a3:c.instructions+=4;goto B5993a3;
case 0x5993a9:c.instructions+=3;goto B5993a9;
case 0x5993ab:c.instructions+=2;goto B5993ab;
case 0x5993ae:c.instructions+=1;goto B5993ae;
case 0x5993b0:goto L5993b0;
case 0x5993b3:c.instructions+=5;goto B5993b3;
case 0x5993b5:c.instructions+=4;goto B5993b5;
case 0x5993bb:c.instructions+=3;goto B5993bb;
case 0x5993bd:c.instructions+=2;goto B5993bd;
case 0x5993c0:c.instructions+=1;goto B5993c0;
case 0x5993c2:goto L5993c2;
case 0x5993c5:c.instructions+=5;goto B5993c5;
case 0x5993c7:c.instructions+=4;goto B5993c7;
case 0x5993cd:c.instructions+=3;goto B5993cd;
case 0x5993cf:c.instructions+=2;goto B5993cf;
case 0x5993d2:c.instructions+=1;goto B5993d2;
case 0x5993d4:goto L5993d4;
case 0x5993d6:c.instructions+=1;goto B5993d6;
case 0x5993d8:goto L5993d8;
case 0x5993da:c.instructions+=1;goto B5993da;
case 0x5993df:goto L5993df;
case 0x5993e1:c.instructions+=1;goto B5993e1;
case 0x5993e3:goto L5993e3;
case 0x5993e5:c.instructions+=1;goto B5993e5;
case 0x5993ea:goto L5993ea;
case 0x5993ec:c.instructions+=1;goto B5993ec;
case 0x5993ee:goto L5993ee;
case 0x5993f3:c.instructions+=1;goto B5993f3;
case 0x5993f5:goto L5993f5;
case 0x5993f9:c.instructions+=4;goto B5993f9;
case 0x5993ff:c.instructions+=3;goto B5993ff;
case 0x599401:c.instructions+=2;goto B599401;
case 0x599404:c.instructions+=1;goto B599404;
case 0x599406:goto L599406;
case 0x59940a:c.instructions+=4;goto B59940a;
case 0x599410:c.instructions+=3;goto B599410;
case 0x599412:c.instructions+=2;goto B599412;
case 0x599415:c.instructions+=1;goto B599415;
case 0x599417:goto L599417;
case 0x599418:c.instructions+=4;goto B599418;
case 0x59941d:c.instructions+=3;goto B59941d;
case 0x59941e:c.instructions+=2;goto B59941e;
case 0x59941f:c.instructions+=1;goto B59941f;
case 0x599420:goto L599420;
case 0x599421:c.instructions+=4;goto B599421;
case 0x599426:c.instructions+=3;goto B599426;
case 0x599427:c.instructions+=2;goto B599427;
case 0x599428:c.instructions+=1;goto B599428;
case 0x599429:goto L599429;
case 0x59942a:c.instructions+=4;goto B59942a;
case 0x59942c:c.instructions+=3;goto B59942c;
case 0x59942d:c.instructions+=2;goto B59942d;
case 0x59942e:c.instructions+=1;goto B59942e;
case 0x599430:goto L599430;
case 0x599435:c.instructions+=1;goto B599435;
case 0x599440:goto L599440;
case 0x599444:c.instructions+=2;goto B599444;
case 0x59944a:c.instructions+=1;goto B59944a;
case 0x59944c:goto L59944c;
case 0x59944f:c.instructions+=5;goto B59944f;
case 0x599450:c.instructions+=4;goto B599450;
case 0x599453:c.instructions+=3;goto B599453;
case 0x599457:c.instructions+=2;goto B599457;
case 0x599459:c.instructions+=1;goto B599459;
case 0x59945b:goto L59945b;
case 0x59945c:c.instructions+=2;goto B59945c;
case 0x599461:c.instructions+=1;goto B599461;
case 0x599462:goto L599462;
case 0x599464:c.instructions+=2;goto B599464;
case 0x59946a:c.instructions+=1;goto B59946a;
case 0x59946c:goto L59946c;
case 0x599472:c.instructions+=1;goto B599472;
case 0x599474:goto L599474;
case 0x599477:c.instructions+=5;goto B599477;
case 0x59947a:c.instructions+=4;goto B59947a;
case 0x59947d:c.instructions+=3;goto B59947d;
case 0x59947f:c.instructions+=2;goto B59947f;
case 0x599482:c.instructions+=1;goto B599482;
case 0x599484:goto L599484;
case 0x59948a:c.instructions+=1;goto B59948a;
case 0x59948c:goto L59948c;
case 0x59948f:c.instructions+=2;goto B59948f;
case 0x599494:c.instructions+=1;goto B599494;
case 0x599499:goto L599499;
case 0x59949b:goto L59949b;
case 0x59949d:goto L59949d;
case 0x5994a3:c.instructions+=1;goto B5994a3;
case 0x5994a5:goto L5994a5;
case 0x5994a8:c.instructions+=1;goto B5994a8;
case 0x5994ae:goto L5994ae;
case 0x5994b1:c.instructions+=3;goto B5994b1;
case 0x5994b5:c.instructions+=2;goto B5994b5;
case 0x5994b7:c.instructions+=1;goto B5994b7;
case 0x5994b9:goto L5994b9;
case 0x5994ba:c.instructions+=1;goto B5994ba;
case 0x5994bb:goto L5994bb;
case 0x5994c0:c.instructions+=2;goto B5994c0;
case 0x5994c1:c.instructions+=1;goto B5994c1;
case 0x5994c2:goto L5994c2;
case 0x5994c4:c.instructions+=1;goto B5994c4;
case 0x5994d0:goto L5994d0;
case 0x5994d4:c.instructions+=5;goto B5994d4;
case 0x5994d6:c.instructions+=4;goto B5994d6;
case 0x5994d8:c.instructions+=3;goto B5994d8;
case 0x5994de:c.instructions+=2;goto B5994de;
case 0x5994e1:c.instructions+=1;goto B5994e1;
case 0x5994f0:goto L5994f0;
case 0x5994f4:c.instructions+=14;goto B5994f4;
case 0x5994f5:c.instructions+=13;goto B5994f5;
case 0x5994f6:c.instructions+=12;goto B5994f6;
case 0x5994f7:c.instructions+=11;goto B5994f7;
case 0x5994f9:c.instructions+=10;goto B5994f9;
case 0x5994fc:c.instructions+=9;goto B5994fc;
case 0x5994fe:c.instructions+=8;goto B5994fe;
case 0x599500:c.instructions+=7;goto B599500;
case 0x599502:c.instructions+=6;goto B599502;
case 0x599505:c.instructions+=5;goto B599505;
case 0x599508:c.instructions+=4;goto B599508;
case 0x59950c:c.instructions+=3;goto B59950c;
case 0x59950e:c.instructions+=2;goto B59950e;
case 0x59950f:c.instructions+=1;goto B59950f;
case 0x599514:goto L599514;
case 0x599516:c.instructions+=71;goto B599516;
case 0x599519:c.instructions+=70;goto B599519;
case 0x59951b:c.instructions+=69;goto B59951b;
case 0x59951e:c.instructions+=68;goto B59951e;
case 0x599520:c.instructions+=67;goto B599520;
case 0x599523:c.instructions+=66;goto B599523;
case 0x599525:c.instructions+=65;goto B599525;
case 0x599527:c.instructions+=64;goto B599527;
case 0x59952b:c.instructions+=63;goto B59952b;
case 0x59952d:c.instructions+=62;goto B59952d;
case 0x599530:c.instructions+=61;goto B599530;
case 0x599532:c.instructions+=60;goto B599532;
case 0x599534:c.instructions+=59;goto B599534;
case 0x599536:c.instructions+=58;goto B599536;
case 0x599539:c.instructions+=57;goto B599539;
case 0x59953b:c.instructions+=56;goto B59953b;
case 0x59953e:c.instructions+=55;goto B59953e;
case 0x599540:c.instructions+=54;goto B599540;
case 0x599542:c.instructions+=53;goto B599542;
case 0x599544:c.instructions+=52;goto B599544;
case 0x599547:c.instructions+=51;goto B599547;
case 0x599549:c.instructions+=50;goto B599549;
case 0x59954c:c.instructions+=49;goto B59954c;
case 0x59954e:c.instructions+=48;goto B59954e;
case 0x599550:c.instructions+=47;goto B599550;
case 0x599554:c.instructions+=46;goto B599554;
case 0x599556:c.instructions+=45;goto B599556;
case 0x599559:c.instructions+=44;goto B599559;
case 0x59955b:c.instructions+=43;goto B59955b;
case 0x59955d:c.instructions+=42;goto B59955d;
case 0x59955f:c.instructions+=41;goto B59955f;
case 0x599562:c.instructions+=40;goto B599562;
case 0x599564:c.instructions+=39;goto B599564;
case 0x599567:c.instructions+=38;goto B599567;
case 0x599569:c.instructions+=37;goto B599569;
case 0x59956b:c.instructions+=36;goto B59956b;
case 0x59956e:c.instructions+=35;goto B59956e;
case 0x599571:c.instructions+=34;goto B599571;
case 0x599573:c.instructions+=33;goto B599573;
case 0x599575:c.instructions+=32;goto B599575;
case 0x599579:c.instructions+=31;goto B599579;
case 0x59957c:c.instructions+=30;goto B59957c;
case 0x59957f:c.instructions+=29;goto B59957f;
case 0x599581:c.instructions+=28;goto B599581;
case 0x599584:c.instructions+=27;goto B599584;
case 0x599586:c.instructions+=26;goto B599586;
case 0x599589:c.instructions+=25;goto B599589;
case 0x59958c:c.instructions+=24;goto B59958c;
case 0x59958e:c.instructions+=23;goto B59958e;
case 0x599590:c.instructions+=22;goto B599590;
case 0x599593:c.instructions+=21;goto B599593;
case 0x599595:c.instructions+=20;goto B599595;
case 0x599598:c.instructions+=19;goto B599598;
case 0x59959a:c.instructions+=18;goto B59959a;
case 0x59959c:c.instructions+=17;goto B59959c;
case 0x59959e:c.instructions+=16;goto B59959e;
case 0x5995a2:c.instructions+=15;goto B5995a2;
case 0x5995a5:c.instructions+=14;goto B5995a5;
case 0x5995a8:c.instructions+=13;goto B5995a8;
case 0x5995ab:c.instructions+=12;goto B5995ab;
case 0x5995ad:c.instructions+=11;goto B5995ad;
case 0x5995b0:c.instructions+=10;goto B5995b0;
case 0x5995b2:c.instructions+=9;goto B5995b2;
case 0x5995b5:c.instructions+=8;goto B5995b5;
case 0x5995b7:c.instructions+=7;goto B5995b7;
case 0x5995b9:c.instructions+=6;goto B5995b9;
case 0x5995bb:c.instructions+=5;goto B5995bb;
case 0x5995bd:c.instructions+=4;goto B5995bd;
case 0x5995c0:c.instructions+=3;goto B5995c0;
case 0x5995c3:c.instructions+=2;goto B5995c3;
case 0x5995c6:c.instructions+=1;goto B5995c6;
case 0x5995cc:goto L5995cc;
case 0x5995cd:c.instructions+=4;goto B5995cd;
case 0x5995ce:c.instructions+=3;goto B5995ce;
case 0x5995cf:c.instructions+=2;goto B5995cf;
case 0x5995d0:c.instructions+=1;goto B5995d0;
case 0x5995e0:goto L5995e0;
case 0x5995e4:c.instructions+=3;goto B5995e4;
case 0x5995e7:c.instructions+=2;goto B5995e7;
case 0x5995ed:c.instructions+=1;goto B5995ed;
case 0x5995f2:goto L5995f2;
case 0x599600:goto L599600;
case 0x599604:c.instructions+=3;goto B599604;
case 0x599607:c.instructions+=2;goto B599607;
case 0x59960d:c.instructions+=1;goto B59960d;
case 0x599610:goto L599610;
case 0x599614:c.instructions+=7;goto B599614;
case 0x599615:c.instructions+=6;goto B599615;
case 0x599619:c.instructions+=5;goto B599619;
case 0x59961b:c.instructions+=4;goto B59961b;
case 0x59961d:c.instructions+=3;goto B59961d;
case 0x599620:c.instructions+=2;goto B599620;
case 0x599621:c.instructions+=1;goto B599621;
case 0x599630:goto L599630;
case 0x599634:c.instructions+=8;goto B599634;
case 0x599635:c.instructions+=7;goto B599635;
case 0x599636:c.instructions+=6;goto B599636;
case 0x599637:c.instructions+=5;goto B599637;
case 0x599639:c.instructions+=4;goto B599639;
case 0x59963d:c.instructions+=3;goto B59963d;
case 0x59963e:c.instructions+=2;goto B59963e;
case 0x59963f:c.instructions+=1;goto B59963f;
case 0x599644:goto L599644;
case 0x599647:c.instructions+=2;goto B599647;
case 0x599649:c.instructions+=1;goto B599649;
case 0x59964b:goto L59964b;
case 0x59964e:c.instructions+=3;goto B59964e;
case 0x599650:c.instructions+=2;goto B599650;
case 0x599652:c.instructions+=1;goto B599652;
case 0x599654:goto L599654;
case 0x599657:goto L599657;
case 0x599659:c.instructions+=3;goto B599659;
case 0x59965d:c.instructions+=2;goto B59965d;
case 0x59965f:c.instructions+=1;goto B59965f;
case 0x599661:goto L599661;
case 0x599662:c.instructions+=3;goto B599662;
case 0x599665:c.instructions+=2;goto B599665;
case 0x599667:c.instructions+=1;goto B599667;
case 0x599669:goto L599669;
case 0x59966a:c.instructions+=4;goto B59966a;
case 0x59966b:c.instructions+=3;goto B59966b;
case 0x59966d:c.instructions+=2;goto B59966d;
case 0x59966e:c.instructions+=1;goto B59966e;
case 0x599671:goto L599671;
case 0x599672:c.instructions+=4;goto B599672;
case 0x599673:c.instructions+=3;goto B599673;
case 0x599675:c.instructions+=2;goto B599675;
case 0x599676:c.instructions+=1;goto B599676;
case 0x599680:goto L599680;
case 0x599684:c.instructions+=4;goto B599684;
case 0x599685:c.instructions+=3;goto B599685;
case 0x599686:c.instructions+=2;goto B599686;
case 0x599688:c.instructions+=1;goto B599688;
case 0x59968d:goto L59968d;
case 0x599690:c.instructions+=2;goto B599690;
case 0x599692:c.instructions+=1;goto B599692;
case 0x599694:goto L599694;
case 0x599698:c.instructions+=6;goto B599698;
case 0x59969c:c.instructions+=5;goto B59969c;
case 0x59969d:c.instructions+=4;goto B59969d;
case 0x59969e:c.instructions+=3;goto B59969e;
case 0x59969f:c.instructions+=2;goto B59969f;
case 0x5996a1:c.instructions+=1;goto B5996a1;
case 0x5996a6:goto L5996a6;
case 0x5996a7:c.instructions+=1;goto B5996a7;
case 0x5996aa:goto L5996aa;
case 0x5996ac:c.instructions+=2;goto B5996ac;
case 0x5996ad:c.instructions+=1;goto B5996ad;
case 0x5996b0:goto L5996b0;
case 0x5996b1:c.instructions+=7;goto B5996b1;
case 0x5996b2:c.instructions+=6;goto B5996b2;
case 0x5996b3:c.instructions+=5;goto B5996b3;
case 0x5996b5:c.instructions+=4;goto B5996b5;
case 0x5996b7:c.instructions+=3;goto B5996b7;
case 0x5996b9:c.instructions+=2;goto B5996b9;
case 0x5996ba:c.instructions+=1;goto B5996ba;
case 0x5996c0:goto L5996c0;
case 0x5996c4:c.instructions+=2;goto B5996c4;
case 0x5996c6:c.instructions+=1;goto B5996c6;
case 0x5996cc:goto L5996cc;
case 0x5996cd:c.instructions+=1;goto B5996cd;
case 0x5996d2:goto L5996d2;
case 0x5996d5:c.instructions+=9;goto B5996d5;
case 0x5996d8:c.instructions+=8;goto B5996d8;
case 0x5996db:c.instructions+=7;goto B5996db;
case 0x5996de:c.instructions+=6;goto B5996de;
case 0x5996e1:c.instructions+=5;goto B5996e1;
case 0x5996e4:c.instructions+=4;goto B5996e4;
case 0x5996e6:c.instructions+=3;goto B5996e6;
case 0x5996e9:c.instructions+=2;goto B5996e9;
case 0x5996eb:c.instructions+=1;goto B5996eb;
case 0x5996f0:goto L5996f0;
case 0x5996f2:c.instructions+=5;goto B5996f2;
case 0x5996f4:c.instructions+=4;goto B5996f4;
case 0x5996fa:c.instructions+=3;goto B5996fa;
case 0x5996fc:c.instructions+=2;goto B5996fc;
case 0x5996ff:c.instructions+=1;goto B5996ff;
case 0x599701:goto L599701;
case 0x599706:goto L599706;
case 0x599708:c.instructions+=4;goto B599708;
case 0x59970e:c.instructions+=3;goto B59970e;
case 0x599710:c.instructions+=2;goto B599710;
case 0x599713:c.instructions+=1;goto B599713;
case 0x599715:goto L599715;
case 0x599716:goto L599716;
case 0x599718:c.instructions+=4;goto B599718;
case 0x59971e:c.instructions+=3;goto B59971e;
case 0x599720:c.instructions+=2;goto B599720;
case 0x599723:c.instructions+=1;goto B599723;
case 0x599725:goto L599725;
case 0x599726:goto L599726;
case 0x599728:c.instructions+=4;goto B599728;
case 0x59972e:c.instructions+=3;goto B59972e;
case 0x599730:c.instructions+=2;goto B599730;
case 0x599733:c.instructions+=1;goto B599733;
case 0x599735:goto L599735;
case 0x599736:goto L599736;
case 0x59973c:c.instructions+=3;goto B59973c;
case 0x59973e:c.instructions+=2;goto B59973e;
case 0x599741:c.instructions+=1;goto B599741;
case 0x599743:goto L599743;
case 0x599744:goto L599744;
case 0x599746:c.instructions+=1;goto B599746;
case 0x599748:goto L599748;
case 0x59974a:c.instructions+=3;goto B59974a;
case 0x59974e:c.instructions+=2;goto B59974e;
case 0x599750:c.instructions+=1;goto B599750;
case 0x599752:goto L599752;
case 0x599754:goto L599754;
case 0x599755:c.instructions+=2;goto B599755;
case 0x599758:c.instructions+=1;goto B599758;
case 0x59975a:goto L59975a;
case 0x59975c:c.instructions+=4;goto B59975c;
case 0x59975e:c.instructions+=3;goto B59975e;
case 0x599760:c.instructions+=2;goto B599760;
case 0x599762:c.instructions+=1;goto B599762;
case 0x599764:goto L599764;
case 0x599765:c.instructions+=2;goto B599765;
case 0x599768:c.instructions+=1;goto B599768;
case 0x59976e:goto L59976e;
case 0x599771:c.instructions+=4;goto B599771;
case 0x599773:c.instructions+=3;goto B599773;
case 0x599775:c.instructions+=2;goto B599775;
case 0x599776:c.instructions+=1;goto B599776;
case 0x599778:goto L599778;
case 0x59977d:goto L59977d;
case 0x599780:c.instructions+=2;goto B599780;
case 0x599782:c.instructions+=1;goto B599782;
case 0x599784:goto L599784;
case 0x599785:goto L599785;
case 0x599788:c.instructions+=2;goto B599788;
case 0x59978a:c.instructions+=1;goto B59978a;
case 0x59978c:goto L59978c;
case 0x59978d:goto L59978d;
case 0x599790:c.instructions+=2;goto B599790;
case 0x599792:c.instructions+=1;goto B599792;
case 0x599794:goto L599794;
case 0x599795:goto L599795;
case 0x599798:c.instructions+=2;goto B599798;
case 0x59979a:c.instructions+=1;goto B59979a;
case 0x59979c:goto L59979c;
case 0x59979d:goto L59979d;
case 0x5997a0:c.instructions+=2;goto B5997a0;
case 0x5997a2:c.instructions+=1;goto B5997a2;
case 0x5997a4:goto L5997a4;
case 0x5997a5:goto L5997a5;
case 0x5997a8:c.instructions+=2;goto B5997a8;
case 0x5997aa:c.instructions+=1;goto B5997aa;
case 0x5997ac:goto L5997ac;
case 0x5997ad:goto L5997ad;
case 0x5997b0:c.instructions+=2;goto B5997b0;
case 0x5997b2:c.instructions+=1;goto B5997b2;
case 0x5997b4:goto L5997b4;
case 0x5997b5:goto L5997b5;
case 0x5997b8:c.instructions+=2;goto B5997b8;
case 0x5997ba:c.instructions+=1;goto B5997ba;
case 0x5997bc:goto L5997bc;
case 0x5997bd:goto L5997bd;
case 0x5997c0:c.instructions+=2;goto B5997c0;
case 0x5997c2:c.instructions+=1;goto B5997c2;
case 0x5997c4:goto L5997c4;
case 0x5997c5:goto L5997c5;
case 0x5997c9:c.instructions+=1;goto B5997c9;
case 0x5997cb:goto L5997cb;
case 0x5997cc:c.instructions+=4;goto B5997cc;
case 0x5997cd:c.instructions+=3;goto B5997cd;
case 0x5997cf:c.instructions+=2;goto B5997cf;
case 0x5997d0:c.instructions+=1;goto B5997d0;
case 0x5997d3:goto L5997d3;
case 0x5997d4:c.instructions+=4;goto B5997d4;
case 0x5997d5:c.instructions+=3;goto B5997d5;
case 0x5997d7:c.instructions+=2;goto B5997d7;
case 0x5997d8:c.instructions+=1;goto B5997d8;
case 0x5997e0:goto L5997e0;
case 0x5997e4:c.instructions+=6;goto B5997e4;
case 0x5997e5:c.instructions+=5;goto B5997e5;
case 0x5997e9:c.instructions+=4;goto B5997e9;
case 0x5997ec:c.instructions+=3;goto B5997ec;
case 0x5997ee:c.instructions+=2;goto B5997ee;
case 0x5997ef:c.instructions+=1;goto B5997ef;
case 0x5997f1:goto L5997f1;
case 0x5997f7:c.instructions+=3;goto B5997f7;
case 0x5997fd:c.instructions+=2;goto B5997fd;
case 0x599803:c.instructions+=1;goto B599803;
case 0x599809:goto L599809;
case 0x59980c:c.instructions+=2;goto B59980c;
case 0x59980e:c.instructions+=1;goto B59980e;
case 0x599810:goto L599810;
case 0x599816:c.instructions+=1;goto B599816;
case 0x59981c:goto L59981c;
case 0x59981f:c.instructions+=2;goto B59981f;
case 0x599821:c.instructions+=1;goto B599821;
case 0x599823:goto L599823;
case 0x599829:c.instructions+=2;goto B599829;
case 0x59982f:c.instructions+=1;goto B59982f;
case 0x599835:goto L599835;
case 0x599838:c.instructions+=2;goto B599838;
case 0x59983a:c.instructions+=1;goto B59983a;
case 0x59983c:goto L59983c;
case 0x599842:c.instructions+=2;goto B599842;
case 0x599848:c.instructions+=1;goto B599848;
case 0x59984e:goto L59984e;
case 0x599851:c.instructions+=2;goto B599851;
case 0x599853:c.instructions+=1;goto B599853;
case 0x599855:goto L599855;
case 0x59985b:c.instructions+=11;goto B59985b;
case 0x599861:c.instructions+=10;goto B599861;
case 0x599867:c.instructions+=9;goto B599867;
case 0x59986d:c.instructions+=8;goto B59986d;
case 0x599873:c.instructions+=7;goto B599873;
case 0x599879:c.instructions+=6;goto B599879;
case 0x59987f:c.instructions+=5;goto B59987f;
case 0x599885:c.instructions+=4;goto B599885;
case 0x59988b:c.instructions+=3;goto B59988b;
case 0x599891:c.instructions+=2;goto B599891;
case 0x599897:c.instructions+=1;goto B599897;
case 0x59989d:goto L59989d;
case 0x59989f:c.instructions+=1;goto B59989f;
case 0x5998a0:goto L5998a0;
case 0x5998a3:c.instructions+=2;goto B5998a3;
case 0x5998a5:c.instructions+=1;goto B5998a5;
case 0x5998a7:goto L5998a7;
case 0x5998ae:c.instructions+=1;goto B5998ae;
case 0x5998b0:goto L5998b0;
case 0x5998b6:goto L5998b6;
case 0x5998bd:c.instructions+=4;goto B5998bd;
case 0x5998c4:c.instructions+=3;goto B5998c4;
case 0x5998c7:c.instructions+=2;goto B5998c7;
case 0x5998c9:c.instructions+=1;goto B5998c9;
case 0x5998cb:goto L5998cb;
case 0x5998d2:c.instructions+=1;goto B5998d2;
case 0x5998d4:goto L5998d4;
case 0x5998da:goto L5998da;
case 0x5998dc:c.instructions+=4;goto B5998dc;
case 0x5998e3:c.instructions+=3;goto B5998e3;
case 0x5998e6:c.instructions+=2;goto B5998e6;
case 0x5998e8:c.instructions+=1;goto B5998e8;
case 0x5998ea:goto L5998ea;
case 0x5998f1:c.instructions+=1;goto B5998f1;
case 0x5998f3:goto L5998f3;
case 0x5998f9:goto L5998f9;
case 0x5998fb:c.instructions+=6;goto B5998fb;
case 0x5998fd:c.instructions+=5;goto B5998fd;
case 0x599904:c.instructions+=4;goto B599904;
case 0x599907:c.instructions+=3;goto B599907;
case 0x599909:c.instructions+=2;goto B599909;
case 0x59990b:c.instructions+=1;goto B59990b;
case 0x59990d:goto L59990d;
case 0x599914:c.instructions+=1;goto B599914;
case 0x599916:goto L599916;
case 0x59991c:goto L59991c;
case 0x599923:c.instructions+=4;goto B599923;
case 0x59992a:c.instructions+=3;goto B59992a;
case 0x59992d:c.instructions+=2;goto B59992d;
case 0x59992f:c.instructions+=1;goto B59992f;
case 0x599931:goto L599931;
case 0x599938:c.instructions+=1;goto B599938;
case 0x59993a:goto L59993a;
case 0x599940:goto L599940;
case 0x599947:c.instructions+=4;goto B599947;
case 0x59994e:c.instructions+=3;goto B59994e;
case 0x599951:c.instructions+=2;goto B599951;
case 0x599953:c.instructions+=1;goto B599953;
case 0x599955:goto L599955;
case 0x59995c:c.instructions+=1;goto B59995c;
case 0x59995e:goto L59995e;
case 0x599964:goto L599964;
case 0x599966:c.instructions+=4;goto B599966;
case 0x59996d:c.instructions+=3;goto B59996d;
case 0x599970:c.instructions+=2;goto B599970;
case 0x599972:c.instructions+=1;goto B599972;
case 0x599974:goto L599974;
case 0x59997b:c.instructions+=1;goto B59997b;
case 0x59997d:goto L59997d;
case 0x599983:goto L599983;
case 0x599985:c.instructions+=6;goto B599985;
case 0x599987:c.instructions+=5;goto B599987;
case 0x59998e:c.instructions+=4;goto B59998e;
case 0x599991:c.instructions+=3;goto B599991;
case 0x599993:c.instructions+=2;goto B599993;
case 0x599995:c.instructions+=1;goto B599995;
case 0x599997:goto L599997;
case 0x59999e:c.instructions+=1;goto B59999e;
case 0x5999a0:goto L5999a0;
case 0x5999a6:goto L5999a6;
case 0x5999ad:c.instructions+=4;goto B5999ad;
case 0x5999b4:c.instructions+=3;goto B5999b4;
case 0x5999b7:c.instructions+=2;goto B5999b7;
case 0x5999b9:c.instructions+=1;goto B5999b9;
case 0x5999bb:goto L5999bb;
case 0x5999c2:c.instructions+=1;goto B5999c2;
case 0x5999c4:goto L5999c4;
case 0x5999ca:goto L5999ca;
case 0x5999d1:c.instructions+=4;goto B5999d1;
case 0x5999d8:c.instructions+=3;goto B5999d8;
case 0x5999db:c.instructions+=2;goto B5999db;
case 0x5999dd:c.instructions+=1;goto B5999dd;
case 0x5999df:goto L5999df;
case 0x5999e6:c.instructions+=1;goto B5999e6;
case 0x5999e8:goto L5999e8;
case 0x5999ee:goto L5999ee;
case 0x5999f0:c.instructions+=4;goto B5999f0;
case 0x5999f7:c.instructions+=3;goto B5999f7;
case 0x5999fa:c.instructions+=2;goto B5999fa;
case 0x5999fc:c.instructions+=1;goto B5999fc;
case 0x5999fe:goto L5999fe;
case 0x599a05:c.instructions+=1;goto B599a05;
case 0x599a07:goto L599a07;
case 0x599a0d:goto L599a0d;
case 0x599a0f:c.instructions+=6;goto B599a0f;
case 0x599a11:c.instructions+=5;goto B599a11;
case 0x599a18:c.instructions+=4;goto B599a18;
case 0x599a1b:c.instructions+=3;goto B599a1b;
case 0x599a1d:c.instructions+=2;goto B599a1d;
case 0x599a1f:c.instructions+=1;goto B599a1f;
case 0x599a21:goto L599a21;
case 0x599a28:c.instructions+=1;goto B599a28;
case 0x599a2a:goto L599a2a;
case 0x599a30:goto L599a30;
case 0x599a37:c.instructions+=4;goto B599a37;
case 0x599a3e:c.instructions+=3;goto B599a3e;
case 0x599a41:c.instructions+=2;goto B599a41;
case 0x599a43:c.instructions+=1;goto B599a43;
case 0x599a45:goto L599a45;
case 0x599a4c:c.instructions+=1;goto B599a4c;
case 0x599a4e:goto L599a4e;
case 0x599a54:goto L599a54;
case 0x599a5b:c.instructions+=4;goto B599a5b;
case 0x599a62:c.instructions+=3;goto B599a62;
case 0x599a65:c.instructions+=2;goto B599a65;
case 0x599a67:c.instructions+=1;goto B599a67;
case 0x599a69:goto L599a69;
case 0x599a70:c.instructions+=1;goto B599a70;
case 0x599a72:goto L599a72;
case 0x599a78:goto L599a78;
case 0x599a7a:c.instructions+=4;goto B599a7a;
case 0x599a81:c.instructions+=3;goto B599a81;
case 0x599a84:c.instructions+=2;goto B599a84;
case 0x599a86:c.instructions+=1;goto B599a86;
case 0x599a88:goto L599a88;
case 0x599a8f:c.instructions+=1;goto B599a8f;
case 0x599a91:goto L599a91;
case 0x599a97:goto L599a97;
case 0x599a99:c.instructions+=6;goto B599a99;
case 0x599a9b:c.instructions+=5;goto B599a9b;
case 0x599aa2:c.instructions+=4;goto B599aa2;
case 0x599aa5:c.instructions+=3;goto B599aa5;
case 0x599aa7:c.instructions+=2;goto B599aa7;
case 0x599aa9:c.instructions+=1;goto B599aa9;
case 0x599aab:goto L599aab;
case 0x599ab2:c.instructions+=1;goto B599ab2;
case 0x599ab4:goto L599ab4;
case 0x599aba:goto L599aba;
case 0x599ac1:c.instructions+=4;goto B599ac1;
case 0x599ac8:c.instructions+=3;goto B599ac8;
case 0x599acb:c.instructions+=2;goto B599acb;
case 0x599acd:c.instructions+=1;goto B599acd;
case 0x599acf:goto L599acf;
case 0x599ad6:c.instructions+=1;goto B599ad6;
case 0x599ad8:goto L599ad8;
case 0x599ade:goto L599ade;
case 0x599ae5:c.instructions+=4;goto B599ae5;
case 0x599aec:c.instructions+=3;goto B599aec;
case 0x599aef:c.instructions+=2;goto B599aef;
case 0x599af1:c.instructions+=1;goto B599af1;
case 0x599af3:goto L599af3;
case 0x599afa:c.instructions+=1;goto B599afa;
case 0x599afc:goto L599afc;
case 0x599b02:goto L599b02;
case 0x599b04:c.instructions+=4;goto B599b04;
case 0x599b0b:c.instructions+=3;goto B599b0b;
case 0x599b0e:c.instructions+=2;goto B599b0e;
case 0x599b10:c.instructions+=1;goto B599b10;
case 0x599b12:goto L599b12;
case 0x599b19:c.instructions+=1;goto B599b19;
case 0x599b1b:goto L599b1b;
case 0x599b21:goto L599b21;
case 0x599b23:c.instructions+=6;goto B599b23;
case 0x599b25:c.instructions+=5;goto B599b25;
case 0x599b2c:c.instructions+=4;goto B599b2c;
case 0x599b2f:c.instructions+=3;goto B599b2f;
case 0x599b31:c.instructions+=2;goto B599b31;
case 0x599b33:c.instructions+=1;goto B599b33;
case 0x599b35:goto L599b35;
case 0x599b3c:c.instructions+=1;goto B599b3c;
case 0x599b3e:goto L599b3e;
case 0x599b44:goto L599b44;
case 0x599b4b:c.instructions+=4;goto B599b4b;
case 0x599b52:c.instructions+=3;goto B599b52;
case 0x599b55:c.instructions+=2;goto B599b55;
case 0x599b57:c.instructions+=1;goto B599b57;
case 0x599b59:goto L599b59;
case 0x599b60:c.instructions+=1;goto B599b60;
case 0x599b62:goto L599b62;
case 0x599b68:goto L599b68;
case 0x599b6f:c.instructions+=4;goto B599b6f;
case 0x599b76:c.instructions+=3;goto B599b76;
case 0x599b79:c.instructions+=2;goto B599b79;
case 0x599b7b:c.instructions+=1;goto B599b7b;
case 0x599b7d:goto L599b7d;
case 0x599b84:c.instructions+=1;goto B599b84;
case 0x599b86:goto L599b86;
case 0x599b8c:goto L599b8c;
case 0x599b8e:c.instructions+=4;goto B599b8e;
case 0x599b95:c.instructions+=3;goto B599b95;
case 0x599b98:c.instructions+=2;goto B599b98;
case 0x599b9a:c.instructions+=1;goto B599b9a;
case 0x599b9c:goto L599b9c;
case 0x599ba3:c.instructions+=1;goto B599ba3;
case 0x599ba5:goto L599ba5;
case 0x599bab:goto L599bab;
case 0x599bad:c.instructions+=6;goto B599bad;
case 0x599baf:c.instructions+=5;goto B599baf;
case 0x599bb6:c.instructions+=4;goto B599bb6;
case 0x599bb9:c.instructions+=3;goto B599bb9;
case 0x599bbb:c.instructions+=2;goto B599bbb;
case 0x599bbd:c.instructions+=1;goto B599bbd;
case 0x599bbf:goto L599bbf;
case 0x599bc6:c.instructions+=1;goto B599bc6;
case 0x599bc8:goto L599bc8;
case 0x599bce:goto L599bce;
case 0x599bd5:c.instructions+=4;goto B599bd5;
case 0x599bdc:c.instructions+=3;goto B599bdc;
case 0x599bdf:c.instructions+=2;goto B599bdf;
case 0x599be1:c.instructions+=1;goto B599be1;
case 0x599be3:goto L599be3;
case 0x599bea:c.instructions+=1;goto B599bea;
case 0x599bec:goto L599bec;
case 0x599bf2:goto L599bf2;
case 0x599bf9:c.instructions+=4;goto B599bf9;
case 0x599c00:c.instructions+=3;goto B599c00;
case 0x599c03:c.instructions+=2;goto B599c03;
case 0x599c05:c.instructions+=1;goto B599c05;
case 0x599c07:goto L599c07;
case 0x599c0e:c.instructions+=1;goto B599c0e;
case 0x599c10:goto L599c10;
case 0x599c16:goto L599c16;
case 0x599c18:c.instructions+=4;goto B599c18;
case 0x599c1f:c.instructions+=3;goto B599c1f;
case 0x599c22:c.instructions+=2;goto B599c22;
case 0x599c24:c.instructions+=1;goto B599c24;
case 0x599c26:goto L599c26;
case 0x599c2d:c.instructions+=1;goto B599c2d;
case 0x599c2f:goto L599c2f;
case 0x599c35:goto L599c35;
case 0x599c37:c.instructions+=6;goto B599c37;
case 0x599c39:c.instructions+=5;goto B599c39;
case 0x599c40:c.instructions+=4;goto B599c40;
case 0x599c43:c.instructions+=3;goto B599c43;
case 0x599c45:c.instructions+=2;goto B599c45;
case 0x599c47:c.instructions+=1;goto B599c47;
case 0x599c49:goto L599c49;
case 0x599c50:c.instructions+=1;goto B599c50;
case 0x599c52:goto L599c52;
case 0x599c58:goto L599c58;
case 0x599c5f:c.instructions+=4;goto B599c5f;
case 0x599c66:c.instructions+=3;goto B599c66;
case 0x599c69:c.instructions+=2;goto B599c69;
case 0x599c6b:c.instructions+=1;goto B599c6b;
case 0x599c6d:goto L599c6d;
case 0x599c74:c.instructions+=1;goto B599c74;
case 0x599c76:goto L599c76;
case 0x599c7c:goto L599c7c;
case 0x599c83:c.instructions+=4;goto B599c83;
case 0x599c8a:c.instructions+=3;goto B599c8a;
case 0x599c8d:c.instructions+=2;goto B599c8d;
case 0x599c8f:c.instructions+=1;goto B599c8f;
case 0x599c91:goto L599c91;
case 0x599c98:c.instructions+=1;goto B599c98;
case 0x599c9a:goto L599c9a;
case 0x599ca0:goto L599ca0;
case 0x599ca2:c.instructions+=4;goto B599ca2;
case 0x599ca9:c.instructions+=3;goto B599ca9;
case 0x599cac:c.instructions+=2;goto B599cac;
case 0x599cae:c.instructions+=1;goto B599cae;
case 0x599cb0:goto L599cb0;
case 0x599cb7:c.instructions+=1;goto B599cb7;
case 0x599cb9:goto L599cb9;
case 0x599cbf:goto L599cbf;
case 0x599cc1:c.instructions+=6;goto B599cc1;
case 0x599cc3:c.instructions+=5;goto B599cc3;
case 0x599cca:c.instructions+=4;goto B599cca;
case 0x599ccd:c.instructions+=3;goto B599ccd;
case 0x599ccf:c.instructions+=2;goto B599ccf;
case 0x599cd1:c.instructions+=1;goto B599cd1;
case 0x599cd3:goto L599cd3;
case 0x599cda:c.instructions+=1;goto B599cda;
case 0x599cdc:goto L599cdc;
case 0x599ce2:goto L599ce2;
case 0x599ce9:c.instructions+=4;goto B599ce9;
case 0x599cf0:c.instructions+=3;goto B599cf0;
case 0x599cf3:c.instructions+=2;goto B599cf3;
case 0x599cf5:c.instructions+=1;goto B599cf5;
case 0x599cf7:goto L599cf7;
case 0x599cfe:c.instructions+=1;goto B599cfe;
case 0x599d00:goto L599d00;
case 0x599d06:goto L599d06;
case 0x599d0d:c.instructions+=4;goto B599d0d;
case 0x599d14:c.instructions+=3;goto B599d14;
case 0x599d17:c.instructions+=2;goto B599d17;
case 0x599d19:c.instructions+=1;goto B599d19;
case 0x599d1b:goto L599d1b;
case 0x599d22:c.instructions+=1;goto B599d22;
case 0x599d24:goto L599d24;
case 0x599d2a:goto L599d2a;
case 0x599d2c:c.instructions+=4;goto B599d2c;
case 0x599d33:c.instructions+=3;goto B599d33;
case 0x599d36:c.instructions+=2;goto B599d36;
case 0x599d38:c.instructions+=1;goto B599d38;
case 0x599d3a:goto L599d3a;
case 0x599d41:c.instructions+=1;goto B599d41;
case 0x599d43:goto L599d43;
case 0x599d49:goto L599d49;
case 0x599d4b:c.instructions+=6;goto B599d4b;
case 0x599d4d:c.instructions+=5;goto B599d4d;
case 0x599d54:c.instructions+=4;goto B599d54;
case 0x599d57:c.instructions+=3;goto B599d57;
case 0x599d59:c.instructions+=2;goto B599d59;
case 0x599d5b:c.instructions+=1;goto B599d5b;
case 0x599d5d:goto L599d5d;
case 0x599d64:c.instructions+=1;goto B599d64;
case 0x599d66:goto L599d66;
case 0x599d6c:goto L599d6c;
case 0x599d73:c.instructions+=4;goto B599d73;
case 0x599d76:c.instructions+=3;goto B599d76;
case 0x599d79:c.instructions+=2;goto B599d79;
case 0x599d80:c.instructions+=1;goto B599d80;
case 0x599d86:goto L599d86;
case 0x599d87:c.instructions+=2;goto B599d87;
case 0x599d88:c.instructions+=1;goto B599d88;
case 0x599d90:goto L599d90;
case 0x599d94:c.instructions+=6;goto B599d94;
case 0x599d95:c.instructions+=5;goto B599d95;
case 0x599d99:c.instructions+=4;goto B599d99;
case 0x599d9c:c.instructions+=3;goto B599d9c;
case 0x599d9e:c.instructions+=2;goto B599d9e;
case 0x599d9f:c.instructions+=1;goto B599d9f;
case 0x599da1:goto L599da1;
case 0x599da7:c.instructions+=3;goto B599da7;
case 0x599dad:c.instructions+=2;goto B599dad;
case 0x599db3:c.instructions+=1;goto B599db3;
case 0x599db9:goto L599db9;
case 0x599dbc:c.instructions+=2;goto B599dbc;
case 0x599dbe:c.instructions+=1;goto B599dbe;
case 0x599dc0:goto L599dc0;
case 0x599dc6:c.instructions+=2;goto B599dc6;
case 0x599dcc:c.instructions+=1;goto B599dcc;
case 0x599dd2:goto L599dd2;
case 0x599dd5:c.instructions+=2;goto B599dd5;
case 0x599dd7:c.instructions+=1;goto B599dd7;
case 0x599dd9:goto L599dd9;
case 0x599ddf:c.instructions+=2;goto B599ddf;
case 0x599de5:c.instructions+=1;goto B599de5;
case 0x599deb:goto L599deb;
case 0x599dee:c.instructions+=2;goto B599dee;
case 0x599df0:c.instructions+=1;goto B599df0;
case 0x599df2:goto L599df2;
case 0x599df8:c.instructions+=11;goto B599df8;
case 0x599dfe:c.instructions+=10;goto B599dfe;
case 0x599e04:c.instructions+=9;goto B599e04;
case 0x599e0a:c.instructions+=8;goto B599e0a;
case 0x599e10:c.instructions+=7;goto B599e10;
case 0x599e16:c.instructions+=6;goto B599e16;
case 0x599e1c:c.instructions+=5;goto B599e1c;
case 0x599e22:c.instructions+=4;goto B599e22;
case 0x599e28:c.instructions+=3;goto B599e28;
case 0x599e2e:c.instructions+=2;goto B599e2e;
case 0x599e34:c.instructions+=1;goto B599e34;
case 0x599e3a:goto L599e3a;
case 0x599e3c:c.instructions+=4;goto B599e3c;
case 0x599e40:c.instructions+=3;goto B599e40;
case 0x599e43:c.instructions+=2;goto B599e43;
case 0x599e45:c.instructions+=1;goto B599e45;
case 0x599e47:goto L599e47;
case 0x599e4e:c.instructions+=1;goto B599e4e;
case 0x599e50:goto L599e50;
case 0x599e56:goto L599e56;
case 0x599e5d:c.instructions+=4;goto B599e5d;
case 0x599e64:c.instructions+=3;goto B599e64;
case 0x599e67:c.instructions+=2;goto B599e67;
case 0x599e69:c.instructions+=1;goto B599e69;
case 0x599e6b:goto L599e6b;
case 0x599e72:c.instructions+=1;goto B599e72;
case 0x599e74:goto L599e74;
case 0x599e7a:goto L599e7a;
case 0x599e7c:c.instructions+=4;goto B599e7c;
case 0x599e83:c.instructions+=3;goto B599e83;
case 0x599e86:c.instructions+=2;goto B599e86;
case 0x599e88:c.instructions+=1;goto B599e88;
case 0x599e8a:goto L599e8a;
case 0x599e91:c.instructions+=1;goto B599e91;
case 0x599e93:goto L599e93;
case 0x599e99:goto L599e99;
case 0x599e9b:c.instructions+=6;goto B599e9b;
case 0x599e9d:c.instructions+=5;goto B599e9d;
case 0x599ea4:c.instructions+=4;goto B599ea4;
case 0x599ea7:c.instructions+=3;goto B599ea7;
case 0x599ea9:c.instructions+=2;goto B599ea9;
case 0x599eab:c.instructions+=1;goto B599eab;
case 0x599ead:goto L599ead;
case 0x599eb4:c.instructions+=1;goto B599eb4;
case 0x599eb6:goto L599eb6;
case 0x599ebc:goto L599ebc;
case 0x599ec3:c.instructions+=6;goto B599ec3;
case 0x599ec5:c.instructions+=5;goto B599ec5;
case 0x599ecc:c.instructions+=4;goto B599ecc;
case 0x599ecf:c.instructions+=3;goto B599ecf;
case 0x599ed1:c.instructions+=2;goto B599ed1;
case 0x599ed3:c.instructions+=1;goto B599ed3;
case 0x599ed5:goto L599ed5;
case 0x599edc:c.instructions+=1;goto B599edc;
case 0x599ede:goto L599ede;
case 0x599ee4:goto L599ee4;
case 0x599eeb:c.instructions+=4;goto B599eeb;
case 0x599ef2:c.instructions+=3;goto B599ef2;
case 0x599ef5:c.instructions+=2;goto B599ef5;
case 0x599ef7:c.instructions+=1;goto B599ef7;
case 0x599ef9:goto L599ef9;
case 0x599f00:c.instructions+=1;goto B599f00;
case 0x599f02:goto L599f02;
case 0x599f08:goto L599f08;
case 0x599f0a:c.instructions+=4;goto B599f0a;
case 0x599f11:c.instructions+=3;goto B599f11;
case 0x599f14:c.instructions+=2;goto B599f14;
case 0x599f16:c.instructions+=1;goto B599f16;
case 0x599f18:goto L599f18;
case 0x599f1f:c.instructions+=1;goto B599f1f;
case 0x599f21:goto L599f21;
case 0x599f27:goto L599f27;
case 0x599f29:c.instructions+=6;goto B599f29;
case 0x599f2b:c.instructions+=5;goto B599f2b;
case 0x599f32:c.instructions+=4;goto B599f32;
case 0x599f35:c.instructions+=3;goto B599f35;
case 0x599f37:c.instructions+=2;goto B599f37;
case 0x599f39:c.instructions+=1;goto B599f39;
case 0x599f3b:goto L599f3b;
case 0x599f42:c.instructions+=1;goto B599f42;
case 0x599f44:goto L599f44;
case 0x599f4a:goto L599f4a;
case 0x599f51:c.instructions+=6;goto B599f51;
case 0x599f53:c.instructions+=5;goto B599f53;
case 0x599f5a:c.instructions+=4;goto B599f5a;
case 0x599f5d:c.instructions+=3;goto B599f5d;
case 0x599f5f:c.instructions+=2;goto B599f5f;
case 0x599f61:c.instructions+=1;goto B599f61;
case 0x599f63:goto L599f63;
case 0x599f6a:c.instructions+=1;goto B599f6a;
case 0x599f6c:goto L599f6c;
case 0x599f72:goto L599f72;
case 0x599f79:c.instructions+=4;goto B599f79;
case 0x599f80:c.instructions+=3;goto B599f80;
case 0x599f83:c.instructions+=2;goto B599f83;
case 0x599f85:c.instructions+=1;goto B599f85;
case 0x599f87:goto L599f87;
case 0x599f8e:c.instructions+=1;goto B599f8e;
case 0x599f90:goto L599f90;
case 0x599f96:goto L599f96;
case 0x599f98:c.instructions+=4;goto B599f98;
case 0x599f9f:c.instructions+=3;goto B599f9f;
case 0x599fa2:c.instructions+=2;goto B599fa2;
case 0x599fa4:c.instructions+=1;goto B599fa4;
case 0x599fa6:goto L599fa6;
case 0x599fad:c.instructions+=1;goto B599fad;
case 0x599faf:goto L599faf;
case 0x599fb5:goto L599fb5;
case 0x599fb7:c.instructions+=6;goto B599fb7;
case 0x599fb9:c.instructions+=5;goto B599fb9;
case 0x599fc0:c.instructions+=4;goto B599fc0;
case 0x599fc3:c.instructions+=3;goto B599fc3;
case 0x599fc5:c.instructions+=2;goto B599fc5;
case 0x599fc7:c.instructions+=1;goto B599fc7;
case 0x599fc9:goto L599fc9;
case 0x599fd0:c.instructions+=1;goto B599fd0;
case 0x599fd2:goto L599fd2;
case 0x599fd8:goto L599fd8;
case 0x599fdf:c.instructions+=6;goto B599fdf;
case 0x599fe1:c.instructions+=5;goto B599fe1;
case 0x599fe8:c.instructions+=4;goto B599fe8;
case 0x599feb:c.instructions+=3;goto B599feb;
case 0x599fed:c.instructions+=2;goto B599fed;
case 0x599fef:c.instructions+=1;goto B599fef;
case 0x599ff1:goto L599ff1;
case 0x599ff8:c.instructions+=1;goto B599ff8;
case 0x599ffa:goto L599ffa;
default:missing_instruction(c.pc);}
B599000:L599000:{c.instructions+=5;NFSU2_TR(0x599000);
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
B599003:{NFSU2_TR(0x599003);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B599004:{NFSU2_TR(0x599004);
__builtin_memmove(gp(0x86b304),(R+0),4);
}
B599009:{NFSU2_TR(0x599009);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59900a:{NFSU2_TR(0x59900a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599010:L599010:{c.instructions+=3;NFSU2_TR(0x599010);
__builtin_memmove((R+0),gp(0x86b2e0),4);
}
B599015:{NFSU2_TR(0x599015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599016:{NFSU2_TR(0x599016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59901bull));
TAIL_STATIC(0x440e40u,440);
}
B59901b:L59901b:{c.instructions+=3;NFSU2_TR(0x59901b);
__builtin_memmove((R+4),gp(0x86b2e4),4);
}
B599021:{NFSU2_TR(0x599021);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599022:{NFSU2_TR(0x599022);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599027ull));
TAIL_STATIC(0x440e40u,440);
}
B599027:L599027:{c.instructions+=3;NFSU2_TR(0x599027);
__builtin_memmove((R+8),gp(0x86b2e8),4);
}
B59902d:{NFSU2_TR(0x59902d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59902e:{NFSU2_TR(0x59902e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599033ull));
TAIL_STATIC(0x440e40u,440);
}
B599033:L599033:{c.instructions+=3;NFSU2_TR(0x599033);
__builtin_memmove((R+0),gp(0x86b2ec),4);
}
B599038:{NFSU2_TR(0x599038);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599039:{NFSU2_TR(0x599039);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59903eull));
TAIL_STATIC(0x440e40u,440);
}
B59903e:L59903e:{c.instructions+=3;NFSU2_TR(0x59903e);
__builtin_memmove((R+4),gp(0x86b2f0),4);
}
B599044:{NFSU2_TR(0x599044);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599045:{NFSU2_TR(0x599045);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59904aull));
TAIL_STATIC(0x440e40u,440);
}
B59904a:L59904a:{c.instructions+=3;NFSU2_TR(0x59904a);
__builtin_memmove((R+8),gp(0x86b2f4),4);
}
B599050:{NFSU2_TR(0x599050);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599051:{NFSU2_TR(0x599051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599056ull));
TAIL_STATIC(0x440e40u,440);
}
B599056:L599056:{c.instructions+=3;NFSU2_TR(0x599056);
__builtin_memmove((R+0),gp(0x86b2f8),4);
}
B59905b:{NFSU2_TR(0x59905b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59905c:{NFSU2_TR(0x59905c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599061ull));
TAIL_STATIC(0x440e40u,440);
}
B599061:L599061:{c.instructions+=3;NFSU2_TR(0x599061);
__builtin_memmove((R+4),gp(0x86b2fc),4);
}
B599067:{NFSU2_TR(0x599067);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599068:{NFSU2_TR(0x599068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59906dull));
TAIL_STATIC(0x440e40u,440);
}
B59906d:L59906d:{c.instructions+=3;NFSU2_TR(0x59906d);
__builtin_memmove((R+8),gp(0x86b300),4);
}
B599073:{NFSU2_TR(0x599073);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599074:{NFSU2_TR(0x599074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599079ull));
TAIL_STATIC(0x440e40u,440);
}
B599079:L599079:{c.instructions+=3;NFSU2_TR(0x599079);
__builtin_memmove((R+0),gp(0x86b304),4);
}
B59907e:{NFSU2_TR(0x59907e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59907f:{NFSU2_TR(0x59907f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599084ull));
TAIL_STATIC(0x440e40u,440);
}
B599084:L599084:{c.instructions+=13;NFSU2_TR(0x599084);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B599086:{NFSU2_TR(0x599086);
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
B599089:{NFSU2_TR(0x599089);
__builtin_memmove(gp(0x86b2e0),(R+0),4);
}
B59908e:{NFSU2_TR(0x59908e);
__builtin_memmove(gp(0x86b2e4),(R+0),4);
}
B599093:{NFSU2_TR(0x599093);
__builtin_memmove(gp(0x86b2e8),(R+0),4);
}
B599098:{NFSU2_TR(0x599098);
__builtin_memmove(gp(0x86b2ec),(R+0),4);
}
B59909d:{NFSU2_TR(0x59909d);
__builtin_memmove(gp(0x86b2f0),(R+0),4);
}
B5990a2:{NFSU2_TR(0x5990a2);
__builtin_memmove(gp(0x86b2f4),(R+0),4);
}
B5990a7:{NFSU2_TR(0x5990a7);
__builtin_memmove(gp(0x86b2f8),(R+0),4);
}
B5990ac:{NFSU2_TR(0x5990ac);
__builtin_memmove(gp(0x86b2fc),(R+0),4);
}
B5990b1:{NFSU2_TR(0x5990b1);
__builtin_memmove(gp(0x86b300),(R+0),4);
}
B5990b6:{NFSU2_TR(0x5990b6);
__builtin_memmove(gp(0x86b304),(R+0),4);
}
B5990bb:{NFSU2_TR(0x5990bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5990c0:L5990c0:{c.instructions+=10;NFSU2_TR(0x5990c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5990c4:{NFSU2_TR(0x5990c4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5990c6:{NFSU2_TR(0x5990c6);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5990c8:{NFSU2_TR(0x5990c8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5990ca:{NFSU2_TR(0x5990ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5990ce:{NFSU2_TR(0x5990ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5990d0:{NFSU2_TR(0x5990d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5990d6:{NFSU2_TR(0x5990d6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5990da:{NFSU2_TR(0x5990da);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5990dc:{NFSU2_TR(0x5990dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5990e8;}}
}
B5990de:L5990de:{c.instructions+=3;NFSU2_TR(0x5990de);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5990e2:{NFSU2_TR(0x5990e2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5990e6:{NFSU2_TR(0x5990e6);
{goto L5990f4;}
}
B5990e8:L5990e8:{c.instructions+=3;NFSU2_TR(0x5990e8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5990ec:{NFSU2_TR(0x5990ec);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5990f0:{NFSU2_TR(0x5990f0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5990f4:L5990f4:{c.instructions+=5;NFSU2_TR(0x5990f4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5990f8:{NFSU2_TR(0x5990f8);
{u32 ea_=u32(u32(8372324u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5990fe:{NFSU2_TR(0x5990fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599100:{NFSU2_TR(0x599100);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B599103:{NFSU2_TR(0x599103);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L599121;}}
}
B599105:L599105:{c.instructions+=7;NFSU2_TR(0x599105);
{u32 ea_=u32(u32(8372328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59910b:{NFSU2_TR(0x59910b);
{u32 ea_=u32(u32(7881284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B599111:{NFSU2_TR(0x599111);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B599113:{NFSU2_TR(0x599113);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B599115:{NFSU2_TR(0x599115);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599117:{NFSU2_TR(0x599117);
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
B59911a:{NFSU2_TR(0x59911a);
if(r1(R+514)){{goto L599121;}}
}
B59911c:L59911c:{c.instructions+=3;NFSU2_TR(0x59911c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59911e:{NFSU2_TR(0x59911e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599120:{NFSU2_TR(0x599120);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599121:L599121:{c.instructions+=15;NFSU2_TR(0x599121);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599125:{NFSU2_TR(0x599125);
{u32 ea_=u32(u32(8827672u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B59912b:{NFSU2_TR(0x59912b);
{u32 ea_=u32(u32(8372312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599131:{NFSU2_TR(0x599131);
{u32 ea_=u32(u32(8827672u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599137:{NFSU2_TR(0x599137);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B599139:{NFSU2_TR(0x599139);
{u32 ea_=u32(u32(8372308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59913f:{NFSU2_TR(0x59913f);
{u32 ea_=u32(u32(8827668u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599145:{NFSU2_TR(0x599145);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B599147:{NFSU2_TR(0x599147);
{u32 ea_=u32(u32(8827668u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59914d:{NFSU2_TR(0x59914d);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B59914f:{NFSU2_TR(0x59914f);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B599151:{NFSU2_TR(0x599151);
{u32 ea_=u32(u32(8372316u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B599157:{NFSU2_TR(0x599157);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599159:{NFSU2_TR(0x599159);
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
B59915c:{NFSU2_TR(0x59915c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L599166;}}
}
B59915e:L59915e:{c.instructions+=2;NFSU2_TR(0x59915e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599160:{NFSU2_TR(0x599160);
{u32 ea_=u32(u32(8372316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599166:L599166:{c.instructions+=2;NFSU2_TR(0x599166);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599168:{NFSU2_TR(0x599168);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599170:L599170:{c.instructions+=3;NFSU2_TR(0x599170);
__builtin_memmove((R+0),gp(0x7fc0a0),4);
}
B599175:{NFSU2_TR(0x599175);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599177:{NFSU2_TR(0x599177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L599181;}}
}
B599179:L599179:{c.instructions+=2;NFSU2_TR(0x599179);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59917f:{NFSU2_TR(0x59917f);
{goto L599185;}
}
B599181:L599181:{c.instructions+=1;NFSU2_TR(0x599181);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599185:L599185:{c.instructions+=5;NFSU2_TR(0x599185);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599188:{NFSU2_TR(0x599188);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B59918a:{NFSU2_TR(0x59918a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B599190:{NFSU2_TR(0x599190);
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
B599192:{NFSU2_TR(0x599192);
if(r1(R+518)){{goto L5991a8;}}
}
B599194:L599194:{c.instructions+=4;NFSU2_TR(0x599194);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599197:{NFSU2_TR(0x599197);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B59919a:{NFSU2_TR(0x59919a);
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
B59919c:{NFSU2_TR(0x59919c);
if(r1(R+518)){{goto L5991a8;}}
}
B59919e:L59919e:{c.instructions+=3;NFSU2_TR(0x59919e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5991a0:{NFSU2_TR(0x5991a0);
{u32 ea_=u32(u32(8003148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5991a6:{NFSU2_TR(0x5991a6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5991a8:L5991a8:{c.instructions+=20;NFSU2_TR(0x5991a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5991ab:{NFSU2_TR(0x5991ab);
{u32 ea_=u32(r4(R+8)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5991b1:{NFSU2_TR(0x5991b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5991b4:{NFSU2_TR(0x5991b4);
{u32 ea_=u32(r4(R+0)+u32(520u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5991ba:{NFSU2_TR(0x5991ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5991bd:{NFSU2_TR(0x5991bd);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5991c0:{NFSU2_TR(0x5991c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5991c3:{NFSU2_TR(0x5991c3);
{u32 ea_=u32(r4(R+0)+u32(1244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5991c9:{NFSU2_TR(0x5991c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5991cc:{NFSU2_TR(0x5991cc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5991d2:{NFSU2_TR(0x5991d2);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5991d5:{NFSU2_TR(0x5991d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5991d8:{NFSU2_TR(0x5991d8);
{u32 ea_=u32(r4(R+0)+u32(388u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5991de:{NFSU2_TR(0x5991de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5991e1:{NFSU2_TR(0x5991e1);
{u32 ea_=u32(r4(R+8)+u32(388u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5991e7:{NFSU2_TR(0x5991e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5991ea:{NFSU2_TR(0x5991ea);
{u32 ea_=u32(r4(R+0)+u32(388u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5991f0:{NFSU2_TR(0x5991f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5991f3:{NFSU2_TR(0x5991f3);
{u32 ea_=u32(r4(R+4)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5991f9:{NFSU2_TR(0x5991f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599200:L599200:{c.instructions+=8;NFSU2_TR(0x599200);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599201:{NFSU2_TR(0x599201);
__builtin_memmove((R+20),(R+16),4);
}
B599203:{NFSU2_TR(0x599203);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599204:{NFSU2_TR(0x599204);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B599207:{NFSU2_TR(0x599207);
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
B599209:{NFSU2_TR(0x599209);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59920a:{NFSU2_TR(0x59920a);
__builtin_memmove((R+24),(R+4),4);
}
B59920c:{NFSU2_TR(0x59920c);
if(r1(R+518)){{goto L5992a4;}}
}
B599212:L599212:{c.instructions+=3;NFSU2_TR(0x599212);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B599218:{NFSU2_TR(0x599218);
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
B59921a:{NFSU2_TR(0x59921a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5992a4;}}
}
B599220:L599220:{c.instructions+=15;NFSU2_TR(0x599220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599223:{NFSU2_TR(0x599223);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599226:{NFSU2_TR(0x599226);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B599229:{NFSU2_TR(0x599229);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59922c:{NFSU2_TR(0x59922c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59922e:{NFSU2_TR(0x59922e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599230:{NFSU2_TR(0x599230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B599236:{NFSU2_TR(0x599236);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59923c:{NFSU2_TR(0x59923c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B599242:{NFSU2_TR(0x599242);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599248:{NFSU2_TR(0x599248);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59924b:{NFSU2_TR(0x59924b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x30ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B59924e:{NFSU2_TR(0x59924e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59924f:{NFSU2_TR(0x59924f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599250:{NFSU2_TR(0x599250);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599255ull));
TAIL_STATIC(0x4012b0u,401);
}
B599255:L599255:{c.instructions+=15;NFSU2_TR(0x599255);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59925b:{NFSU2_TR(0x59925b);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599261:{NFSU2_TR(0x599261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599267:{NFSU2_TR(0x599267);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59926d:{NFSU2_TR(0x59926d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B59926f:{NFSU2_TR(0x59926f);
{u32 ea_=u32(r4(R+24)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599275:{NFSU2_TR(0x599275);
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
B599278:{NFSU2_TR(0x599278);
{u32 ea_=u32(r4(R+24)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59927e:{NFSU2_TR(0x59927e);
__builtin_memmove((R+4),gp(0x86b390),4);
}
B599284:{NFSU2_TR(0x599284);
{u32 ea_=u32(u32(8827796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59928a:{NFSU2_TR(0x59928a);
{u32 ea_=u32(u32(8827800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599290:{NFSU2_TR(0x599290);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B599296:{NFSU2_TR(0x599296);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599298:{NFSU2_TR(0x599298);
{u32 ea_=u32(r4(R+24)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59929e:{NFSU2_TR(0x59929e);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5992a4:L5992a4:{c.instructions+=5;NFSU2_TR(0x5992a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5992aa:{NFSU2_TR(0x5992aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5992ab:{NFSU2_TR(0x5992ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5992ac:{NFSU2_TR(0x5992ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5992ad:{NFSU2_TR(0x5992ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5992b0:L5992b0:{c.instructions+=5;NFSU2_TR(0x5992b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5992b1:{NFSU2_TR(0x5992b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5992b2:{NFSU2_TR(0x5992b2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5992b6:{NFSU2_TR(0x5992b6);
__builtin_memmove((R+4),(R+28),4);
}
B5992b8:{NFSU2_TR(0x5992b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5992bdull));
TAIL_STATIC(0x5ed290u,5ed);
}
B5992bd:L5992bd:{c.instructions+=2;NFSU2_TR(0x5992bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5992bf:{NFSU2_TR(0x5992bf);
if(r1(R+518)){{goto L5992c6;}}
}
B5992c1:L5992c1:{c.instructions+=4;NFSU2_TR(0x5992c1);
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
B5992c3:{NFSU2_TR(0x5992c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5992c4:{NFSU2_TR(0x5992c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5992c5:{NFSU2_TR(0x5992c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5992c6:L5992c6:{c.instructions+=3;NFSU2_TR(0x5992c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5992c7:{NFSU2_TR(0x5992c7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5992c9:{NFSU2_TR(0x5992c9);
__builtin_memmove((R+16),(R+16),4);
}
B5992d0:L5992d0:{c.instructions+=3;NFSU2_TR(0x5992d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5992d1:{NFSU2_TR(0x5992d1);
__builtin_memmove((R+4),(R+28),4);
}
B5992d3:{NFSU2_TR(0x5992d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5992d8ull));
TAIL_STATIC(0x5ed470u,5ed);
}
B5992d8:L5992d8:{c.instructions+=2;NFSU2_TR(0x5992d8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5992db:{NFSU2_TR(0x5992db);
if(r1(R+518)){{goto L599429;}}
}
B5992e1:L5992e1:{c.instructions+=3;NFSU2_TR(0x5992e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5992e2:{NFSU2_TR(0x5992e2);
__builtin_memmove((R+4),(R+28),4);
}
B5992e4:{NFSU2_TR(0x5992e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5992e9ull));
TAIL_STATIC(0x5ed470u,5ed);
}
B5992e9:L5992e9:{c.instructions+=2;NFSU2_TR(0x5992e9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5992ec:{NFSU2_TR(0x5992ec);
if(r1(R+518)){{goto L599429;}}
}
B5992f2:L5992f2:{c.instructions+=3;NFSU2_TR(0x5992f2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5992f3:{NFSU2_TR(0x5992f3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5992f6:{NFSU2_TR(0x5992f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5992d0u);}goto L5992d0;}}
}
B5992f8:L5992f8:{c.instructions+=7;NFSU2_TR(0x5992f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5992fb:{NFSU2_TR(0x5992fb);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599301:{NFSU2_TR(0x599301);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B599307:{NFSU2_TR(0x599307);
{u32 ea_=u32(u32(7894412u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59930d:{NFSU2_TR(0x59930d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59930f:{NFSU2_TR(0x59930f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B599312:{NFSU2_TR(0x599312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59932e;}}
}
B599314:L599314:{c.instructions+=2;NFSU2_TR(0x599314);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B59931b:{NFSU2_TR(0x59931b);
if(r1(R+518)){{goto L59932e;}}
}
B59931d:L59931d:{c.instructions+=2;NFSU2_TR(0x59931d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59931f:{NFSU2_TR(0x59931f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L59932e;}}
}
B599321:L599321:{c.instructions+=2;NFSU2_TR(0x599321);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x428ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B599328:{NFSU2_TR(0x599328);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L599429;}}
}
B59932e:L59932e:{c.instructions+=37;NFSU2_TR(0x59932e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599332:{NFSU2_TR(0x599332);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599338:{NFSU2_TR(0x599338);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59933e:{NFSU2_TR(0x59933e);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599344:{NFSU2_TR(0x599344);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B599346:{NFSU2_TR(0x599346);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B599348:{NFSU2_TR(0x599348);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B59934a:{NFSU2_TR(0x59934a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59934c:{NFSU2_TR(0x59934c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59934e:{NFSU2_TR(0x59934e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B599350:{NFSU2_TR(0x599350);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B599352:{NFSU2_TR(0x599352);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599354:{NFSU2_TR(0x599354);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B599356:{NFSU2_TR(0x599356);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B599358:{NFSU2_TR(0x599358);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59935a:{NFSU2_TR(0x59935a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59935c:{NFSU2_TR(0x59935c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599360:{NFSU2_TR(0x599360);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599366:{NFSU2_TR(0x599366);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59936c:{NFSU2_TR(0x59936c);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599372:{NFSU2_TR(0x599372);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B599374:{NFSU2_TR(0x599374);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B599376:{NFSU2_TR(0x599376);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B599378:{NFSU2_TR(0x599378);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B59937a:{NFSU2_TR(0x59937a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B59937c:{NFSU2_TR(0x59937c);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B59937e:{NFSU2_TR(0x59937e);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B599380:{NFSU2_TR(0x599380);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599382:{NFSU2_TR(0x599382);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B599384:{NFSU2_TR(0x599384);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B599386:{NFSU2_TR(0x599386);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599388:{NFSU2_TR(0x599388);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59938a:{NFSU2_TR(0x59938a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59938e:{NFSU2_TR(0x59938e);
{u32 ea_=u32(u32(8002144u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B599394:{NFSU2_TR(0x599394);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599396:{NFSU2_TR(0x599396);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B599399:{NFSU2_TR(0x599399);
if(r1(R+518)){{goto L599429;}}
}
B59939f:L59939f:{c.instructions+=5;NFSU2_TR(0x59939f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5993a3:{NFSU2_TR(0x5993a3);
{u32 ea_=u32(u32(8002148u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5993a9:{NFSU2_TR(0x5993a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5993ab:{NFSU2_TR(0x5993ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5993ae:{NFSU2_TR(0x5993ae);
if(r1(R+518)){{goto L599429;}}
}
B5993b0:L5993b0:{c.instructions+=6;NFSU2_TR(0x5993b0);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5993b3:{NFSU2_TR(0x5993b3);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5993b5:{NFSU2_TR(0x5993b5);
{u32 ea_=u32(u32(8002152u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5993bb:{NFSU2_TR(0x5993bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5993bd:{NFSU2_TR(0x5993bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5993c0:{NFSU2_TR(0x5993c0);
if(r1(R+518)){{goto L5993d4;}}
}
B5993c2:L5993c2:{c.instructions+=6;NFSU2_TR(0x5993c2);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5993c5:{NFSU2_TR(0x5993c5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5993c7:{NFSU2_TR(0x5993c7);
{u32 ea_=u32(u32(8002152u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5993cd:{NFSU2_TR(0x5993cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5993cf:{NFSU2_TR(0x5993cf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5993d2:{NFSU2_TR(0x5993d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5993d8;}}
}
B5993d4:L5993d4:{c.instructions+=2;NFSU2_TR(0x5993d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5993d6:{NFSU2_TR(0x5993d6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L599429;}}
}
B5993d8:L5993d8:{c.instructions+=2;NFSU2_TR(0x5993d8);
__builtin_memmove((R+4),(R+28),4);
}
B5993da:{NFSU2_TR(0x5993da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5993dfull));
TAIL_STATIC(0x5ebfa0u,5eb);
}
B5993df:L5993df:{c.instructions+=2;NFSU2_TR(0x5993df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5993e1:{NFSU2_TR(0x5993e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L599429;}}
}
B5993e3:L5993e3:{c.instructions+=2;NFSU2_TR(0x5993e3);
__builtin_memmove((R+4),(R+28),4);
}
B5993e5:{NFSU2_TR(0x5993e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5993eaull));
TAIL_STATIC(0x5ed220u,5ed);
}
B5993ea:L5993ea:{c.instructions+=2;NFSU2_TR(0x5993ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5993ec:{NFSU2_TR(0x5993ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5993f5;}}
}
B5993ee:L5993ee:{c.instructions+=2;NFSU2_TR(0x5993ee);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5993f3:{NFSU2_TR(0x5993f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L599429;}}
}
B5993f5:L5993f5:{c.instructions+=5;NFSU2_TR(0x5993f5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5993f9:{NFSU2_TR(0x5993f9);
{u32 ea_=u32(u32(8002160u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5993ff:{NFSU2_TR(0x5993ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599401:{NFSU2_TR(0x599401);
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
B599404:{NFSU2_TR(0x599404);
if(r1(R+518)){{goto L599420;}}
}
B599406:L599406:{c.instructions+=5;NFSU2_TR(0x599406);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59940a:{NFSU2_TR(0x59940a);
{u32 ea_=u32(u32(8002164u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B599410:{NFSU2_TR(0x599410);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599412:{NFSU2_TR(0x599412);
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
B599415:{NFSU2_TR(0x599415);
if(r1(R+518)){{goto L599420;}}
}
B599417:L599417:{c.instructions+=5;NFSU2_TR(0x599417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B599418:{NFSU2_TR(0x599418);
w4(R+0,u32(0x2ull));
}
B59941d:{NFSU2_TR(0x59941d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59941e:{NFSU2_TR(0x59941e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59941f:{NFSU2_TR(0x59941f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599420:L599420:{c.instructions+=5;NFSU2_TR(0x599420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B599421:{NFSU2_TR(0x599421);
w4(R+0,u32(0x1ull));
}
B599426:{NFSU2_TR(0x599426);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B599427:{NFSU2_TR(0x599427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B599428:{NFSU2_TR(0x599428);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599429:L599429:{c.instructions+=5;NFSU2_TR(0x599429);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59942a:{NFSU2_TR(0x59942a);
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
B59942c:{NFSU2_TR(0x59942c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59942d:{NFSU2_TR(0x59942d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B59942e:{NFSU2_TR(0x59942e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599430:L599430:{c.instructions+=2;NFSU2_TR(0x599430);
w4(R+0,u32(0x86b3d0ull));
}
B599435:{NFSU2_TR(0x599435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599440:L599440:{c.instructions+=3;NFSU2_TR(0x599440);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599444:{NFSU2_TR(0x599444);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x80034a30ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B59944a:{NFSU2_TR(0x59944a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5994c2;}}
}
B59944c:L59944c:{c.instructions+=6;NFSU2_TR(0x59944c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59944f:{NFSU2_TR(0x59944f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599450:{NFSU2_TR(0x599450);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B599453:{NFSU2_TR(0x599453);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B599457:{NFSU2_TR(0x599457);
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
B599459:{NFSU2_TR(0x599459);
if(r1(R+518)){{goto L5994bb;}}
}
B59945b:L59945b:{c.instructions+=3;NFSU2_TR(0x59945b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59945c:{NFSU2_TR(0x59945c);
w4(R+8,u32(0x86b0ccull));
}
B599461:{NFSU2_TR(0x599461);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599462:L599462:{c.instructions+=3;NFSU2_TR(0x599462);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B599464:{NFSU2_TR(0x599464);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34a31ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59946a:{NFSU2_TR(0x59946a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L599484;}}
}
B59946c:L59946c:{c.instructions+=2;NFSU2_TR(0x59946c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x86b23cull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x86b23cull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B599472:{NFSU2_TR(0x599472);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5994ae;}}
}
B599474:L599474:{c.instructions+=6;NFSU2_TR(0x599474);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599477:{NFSU2_TR(0x599477);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59947a:{NFSU2_TR(0x59947a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B59947d:{NFSU2_TR(0x59947d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B59947f:{NFSU2_TR(0x59947f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B599482:{NFSU2_TR(0x599482);
{goto L5994ae;}
}
B599484:L599484:{c.instructions+=2;NFSU2_TR(0x599484);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34a32ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B59948a:{NFSU2_TR(0x59948a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L59949d;}}
}
B59948c:L59948c:{c.instructions+=3;NFSU2_TR(0x59948c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59948f:{NFSU2_TR(0x59948f);
w4(R+4,u32(0x1eull));
}
B599494:{NFSU2_TR(0x599494);
w4(R+28,u32(0x86b3d0ull));
}
B599499:L599499:{c.instructions+=1;NFSU2_TR(0x599499);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L59949b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x599499u);}goto L599499;}
}
B59949b:L59949b:{c.instructions+=1;NFSU2_TR(0x59949b);
{goto L5994ae;}
}
B59949d:L59949d:{c.instructions+=2;NFSU2_TR(0x59949d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34a33ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5994a3:{NFSU2_TR(0x5994a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5994ae;}}
}
B5994a5:L5994a5:{c.instructions+=2;NFSU2_TR(0x5994a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5994a8:{NFSU2_TR(0x5994a8);
__builtin_memmove(gp(0x86b338),(R+4),4);
}
B5994ae:L5994ae:{c.instructions+=4;NFSU2_TR(0x5994ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5994b1:{NFSU2_TR(0x5994b1);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5994b5:{NFSU2_TR(0x5994b5);
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
B5994b7:{NFSU2_TR(0x5994b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x599462u);}goto L599462;}}
}
B5994b9:L5994b9:{c.instructions+=2;NFSU2_TR(0x5994b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5994ba:{NFSU2_TR(0x5994ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5994bb:L5994bb:{c.instructions+=3;NFSU2_TR(0x5994bb);
w4(R+0,u32(0x1ull));
}
B5994c0:{NFSU2_TR(0x5994c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5994c1:{NFSU2_TR(0x5994c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5994c2:L5994c2:{c.instructions+=2;NFSU2_TR(0x5994c2);
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
B5994c4:{NFSU2_TR(0x5994c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5994d0:L5994d0:{c.instructions+=6;NFSU2_TR(0x5994d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5994d4:{NFSU2_TR(0x5994d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5994d6:{NFSU2_TR(0x5994d6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5994d8:{NFSU2_TR(0x5994d8);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x80034a30ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x80034a30ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x80034a30ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5994de:{NFSU2_TR(0x5994de);
__builtin_memmove((R+0),(R+518),1);
}
B5994e1:{NFSU2_TR(0x5994e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5994f0:L5994f0:{c.instructions+=15;NFSU2_TR(0x5994f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5994f4:{NFSU2_TR(0x5994f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5994f5:{NFSU2_TR(0x5994f5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5994f6:{NFSU2_TR(0x5994f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5994f7:{NFSU2_TR(0x5994f7);
__builtin_memmove((R+20),(R+4),4);
}
B5994f9:{NFSU2_TR(0x5994f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5994fc:{NFSU2_TR(0x5994fc);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5994fe:{NFSU2_TR(0x5994fe);
__builtin_memmove((R+8),(R+24),4);
}
B599500:{NFSU2_TR(0x599500);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B599502:{NFSU2_TR(0x599502);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B599505:{NFSU2_TR(0x599505);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B599508:{NFSU2_TR(0x599508);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59950c:{NFSU2_TR(0x59950c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B59950e:{NFSU2_TR(0x59950e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59950f:{NFSU2_TR(0x59950f);
w4(R+0,u32(0x1ull));
}
B599514:L599514:{c.instructions+=72;NFSU2_TR(0x599514);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B599516:{NFSU2_TR(0x599516);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B599519:{NFSU2_TR(0x599519);
__builtin_memmove((R+12),(R+8),1);
}
B59951b:{NFSU2_TR(0x59951b);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x7ull))));
}
B59951e:{NFSU2_TR(0x59951e);
__builtin_memmove((R+28),(R+8),4);
}
B599520:{NFSU2_TR(0x599520);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B599523:{NFSU2_TR(0x599523);
w1(R+4,u8(0x7ull));
}
B599525:{NFSU2_TR(0x599525);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B599527:{NFSU2_TR(0x599527);
u8 U[13];
w4(U+0,u32(u32(u32(0x4full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B59952b:{NFSU2_TR(0x59952b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59952d:{NFSU2_TR(0x59952d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B599530:{NFSU2_TR(0x599530);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r1(U+0))));
}
B599532:{NFSU2_TR(0x599532);
__builtin_memmove((R+4),(R+12),1);
}
B599534:{NFSU2_TR(0x599534);
w1(R+4,u8(~u32(r1(R+4))));
}
B599536:{NFSU2_TR(0x599536);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(R+4,u8(u32(r1(R+4))&u32(r1(U+8))));
}
B599539:{NFSU2_TR(0x599539);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+12))));
}
B59953b:{NFSU2_TR(0x59953b);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B59953e:{NFSU2_TR(0x59953e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B599540:{NFSU2_TR(0x599540);
__builtin_memmove((R+12),(R+8),1);
}
B599542:{NFSU2_TR(0x599542);
__builtin_memmove((R+28),(R+0),4);
}
B599544:{NFSU2_TR(0x599544);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B599547:{NFSU2_TR(0x599547);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B599549:{NFSU2_TR(0x599549);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x7ull))));
}
B59954c:{NFSU2_TR(0x59954c);
w1(R+4,u8(0x7ull));
}
B59954e:{NFSU2_TR(0x59954e);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B599550:{NFSU2_TR(0x599550);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B599554:{NFSU2_TR(0x599554);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B599556:{NFSU2_TR(0x599556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B599559:{NFSU2_TR(0x599559);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r1(U+0))));
}
B59955b:{NFSU2_TR(0x59955b);
__builtin_memmove((R+4),(R+12),1);
}
B59955d:{NFSU2_TR(0x59955d);
w1(R+4,u8(~u32(r1(R+4))));
}
B59955f:{NFSU2_TR(0x59955f);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(R+4,u8(u32(r1(R+4))&u32(r1(U+8))));
}
B599562:{NFSU2_TR(0x599562);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+12))));
}
B599564:{NFSU2_TR(0x599564);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B599567:{NFSU2_TR(0x599567);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B599569:{NFSU2_TR(0x599569);
__builtin_memmove((R+12),(R+8),1);
}
B59956b:{NFSU2_TR(0x59956b);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x2ull))));
}
B59956e:{NFSU2_TR(0x59956e);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x7ull))));
}
B599571:{NFSU2_TR(0x599571);
w1(R+4,u8(0x7ull));
}
B599573:{NFSU2_TR(0x599573);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+12))));
}
B599575:{NFSU2_TR(0x599575);
u8 U[13];
w4(U+0,u32(u32(u32(0x51ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B599579:{NFSU2_TR(0x599579);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59957c:{NFSU2_TR(0x59957c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B59957f:{NFSU2_TR(0x59957f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B599581:{NFSU2_TR(0x599581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B599584:{NFSU2_TR(0x599584);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+12,shl<u8>(r1(R+12),u64(r1(U+0))));
}
B599586:{NFSU2_TR(0x599586);
w1(R+8,u8(u32(r1(R+8))+u32(u8(0x3ull))));
}
B599589:{NFSU2_TR(0x599589);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x7ull))));
}
B59958c:{NFSU2_TR(0x59958c);
__builtin_memmove((R+4),(R+12),1);
}
B59958e:{NFSU2_TR(0x59958e);
w1(R+4,u8(~u32(r1(R+4))));
}
B599590:{NFSU2_TR(0x599590);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w1(R+4,u8(u32(r1(R+4))&u32(r1(U+8))));
}
B599593:{NFSU2_TR(0x599593);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+12))));
}
B599595:{NFSU2_TR(0x599595);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B599598:{NFSU2_TR(0x599598);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B59959a:{NFSU2_TR(0x59959a);
w1(R+4,u8(0x7ull));
}
B59959c:{NFSU2_TR(0x59959c);
w1(R+4,u8(u32(r1(R+4))-u32(r1(R+8))));
}
B59959e:{NFSU2_TR(0x59959e);
u8 U[13];
w4(U+0,u32(u32(u32(0x52ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5995a2:{NFSU2_TR(0x5995a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5995a5:{NFSU2_TR(0x5995a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B5995a8:{NFSU2_TR(0x5995a8);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B5995ab:{NFSU2_TR(0x5995ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5995ad:{NFSU2_TR(0x5995ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5995b0:{NFSU2_TR(0x5995b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w1(R+8,shl<u8>(r1(R+8),u64(r1(U+0))));
}
B5995b2:{NFSU2_TR(0x5995b2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5995b5:{NFSU2_TR(0x5995b5);
__builtin_memmove((R+4),(R+8),1);
}
B5995b7:{NFSU2_TR(0x5995b7);
w1(R+4,u8(~u32(r1(R+4))));
}
B5995b9:{NFSU2_TR(0x5995b9);
w1(R+4,u8(u32(r1(R+4))&u32(r1(R+12))));
}
B5995bb:{NFSU2_TR(0x5995bb);
w1(R+4,u8(u32(r1(R+4))|u32(r1(R+8))));
}
B5995bd:{NFSU2_TR(0x5995bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B5995c0:{NFSU2_TR(0x5995c0);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5995c3:{NFSU2_TR(0x5995c3);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),1);
s1(u32(r4(U+4)),r1(U+8));
}
B5995c6:{NFSU2_TR(0x5995c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x599514u);}goto L599514;}}
}
B5995cc:L5995cc:{c.instructions+=5;NFSU2_TR(0x5995cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5995cd:{NFSU2_TR(0x5995cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5995ce:{NFSU2_TR(0x5995ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5995cf:{NFSU2_TR(0x5995cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5995d0:{NFSU2_TR(0x5995d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5995e0:L5995e0:{c.instructions+=4;NFSU2_TR(0x5995e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5995e4:{NFSU2_TR(0x5995e4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5995e7:{NFSU2_TR(0x5995e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5995ed:{NFSU2_TR(0x5995ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5995f2ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5995f2:L5995f2:{c.instructions+=1;NFSU2_TR(0x5995f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599600:L599600:{c.instructions+=4;NFSU2_TR(0x599600);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599604:{NFSU2_TR(0x599604);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599607:{NFSU2_TR(0x599607);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B59960d:{NFSU2_TR(0x59960d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599610:L599610:{c.instructions+=8;NFSU2_TR(0x599610);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B599614:{NFSU2_TR(0x599614);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599615:{NFSU2_TR(0x599615);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B599619:{NFSU2_TR(0x599619);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59961b:{NFSU2_TR(0x59961b);
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
B59961d:{NFSU2_TR(0x59961d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B599620:{NFSU2_TR(0x599620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B599621:{NFSU2_TR(0x599621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599630:L599630:{c.instructions+=9;NFSU2_TR(0x599630);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599634:{NFSU2_TR(0x599634);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599635:{NFSU2_TR(0x599635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599636:{NFSU2_TR(0x599636);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599637:{NFSU2_TR(0x599637);
__builtin_memmove((R+24),(R+4),4);
}
B599639:{NFSU2_TR(0x599639);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B59963d:{NFSU2_TR(0x59963d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59963e:{NFSU2_TR(0x59963e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59963f:{NFSU2_TR(0x59963f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x599644ull));
TAIL_STATIC(0x500100u,500);
}
B599644:L599644:{c.instructions+=3;NFSU2_TR(0x599644);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B599647:{NFSU2_TR(0x599647);
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
B599649:{NFSU2_TR(0x599649);
if(r1(R+518)){{goto L599669;}}
}
B59964b:L59964b:{c.instructions+=4;NFSU2_TR(0x59964b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59964e:{NFSU2_TR(0x59964e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B599650:{NFSU2_TR(0x599650);
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
B599652:{NFSU2_TR(0x599652);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L599669;}}
}
B599654:L599654:{c.instructions+=1;NFSU2_TR(0x599654);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B599657:L599657:{c.instructions+=4;NFSU2_TR(0x599657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B599659:{NFSU2_TR(0x599659);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B59965d:{NFSU2_TR(0x59965d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B59965f:{NFSU2_TR(0x59965f);
if(r1(R+518)){{goto L599671;}}
}
B599661:L599661:{c.instructions+=4;NFSU2_TR(0x599661);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B599662:{NFSU2_TR(0x599662);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
}
B599665:{NFSU2_TR(0x599665);
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
B599667:{NFSU2_TR(0x599667);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x599657u);}goto L599657;}}
}
B599669:L599669:{c.instructions+=5;NFSU2_TR(0x599669);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B59966a:{NFSU2_TR(0x59966a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B59966b:{NFSU2_TR(0x59966b);
w1(R+0,u8(0x1ull));
}
B59966d:{NFSU2_TR(0x59966d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B59966e:{NFSU2_TR(0x59966e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599671:L599671:{c.instructions+=5;NFSU2_TR(0x599671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B599672:{NFSU2_TR(0x599672);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B599673:{NFSU2_TR(0x599673);
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
B599675:{NFSU2_TR(0x599675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B599676:{NFSU2_TR(0x599676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599680:L599680:{c.instructions+=5;NFSU2_TR(0x599680);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599684:{NFSU2_TR(0x599684);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599685:{NFSU2_TR(0x599685);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599686:{NFSU2_TR(0x599686);
__builtin_memmove((R+24),(R+4),4);
}
B599688:{NFSU2_TR(0x599688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x59968dull));
TAIL_STATIC(0x500150u,500);
}
B59968d:L59968d:{c.instructions+=3;NFSU2_TR(0x59968d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B599690:{NFSU2_TR(0x599690);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599692:{NFSU2_TR(0x599692);
if(r1(R+518)){{goto L5996aa;}}
}
B599694:L599694:{c.instructions+=7;NFSU2_TR(0x599694);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599698:{NFSU2_TR(0x599698);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B59969c:{NFSU2_TR(0x59969c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59969d:{NFSU2_TR(0x59969d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59969e:{NFSU2_TR(0x59969e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B59969f:{NFSU2_TR(0x59969f);
__builtin_memmove((R+4),(R+24),4);
}
B5996a1:{NFSU2_TR(0x5996a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5996a6ull));
TAIL_STATIC(0x5a6320u,5a6);
}
B5996a6:L5996a6:{c.instructions+=2;NFSU2_TR(0x5996a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5996a7:{NFSU2_TR(0x5996a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5996aa:L5996aa:{c.instructions+=3;NFSU2_TR(0x5996aa);
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
B5996ac:{NFSU2_TR(0x5996ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5996ad:{NFSU2_TR(0x5996ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5996b0:L5996b0:{c.instructions+=8;NFSU2_TR(0x5996b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5996b1:{NFSU2_TR(0x5996b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5996b2:{NFSU2_TR(0x5996b2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5996b3:{NFSU2_TR(0x5996b3);
__builtin_memmove((R+28),(R+4),4);
}
B5996b5:{NFSU2_TR(0x5996b5);
w1(R+12,u8(0x1ull));
}
B5996b7:{NFSU2_TR(0x5996b7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5996b9:{NFSU2_TR(0x5996b9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5996ba:{NFSU2_TR(0x5996ba);
__builtin_memmove((R+12),(R+12),4);
}
B5996c0:L5996c0:{c.instructions+=3;NFSU2_TR(0x5996c0);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5996c4:{NFSU2_TR(0x5996c4);
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
B5996c6:{NFSU2_TR(0x5996c6);
if(r1(R+518)){{goto L599764;}}
}
B5996cc:L5996cc:{c.instructions+=2;NFSU2_TR(0x5996cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5996cd:{NFSU2_TR(0x5996cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5996d2ull));
TAIL_STATIC(0x500150u,500);
}
B5996d2:L5996d2:{c.instructions+=10;NFSU2_TR(0x5996d2);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5996d5:{NFSU2_TR(0x5996d5);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5996d8:{NFSU2_TR(0x5996d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5996db:{NFSU2_TR(0x5996db);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5996de:{NFSU2_TR(0x5996de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5996e1:{NFSU2_TR(0x5996e1);
{u32 ea_=u32(r4(R+0)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5996e4:{NFSU2_TR(0x5996e4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5996e6:{NFSU2_TR(0x5996e6);
{u32 ea_=u32(r4(R+0)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5996e9:{NFSU2_TR(0x5996e9);
__builtin_memmove((R+8),(R+4),4);
}
B5996eb:{NFSU2_TR(0x5996eb);
{goto L5996f0;}
}
B5996f0:L5996f0:{c.instructions+=6;NFSU2_TR(0x5996f0);
__asm__ volatile(".byte 0xd9,0xc4":::"memory");
}
B5996f2:{NFSU2_TR(0x5996f2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5996f4:{NFSU2_TR(0x5996f4);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5996fa:{NFSU2_TR(0x5996fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5996fc:{NFSU2_TR(0x5996fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5996ff:{NFSU2_TR(0x5996ff);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L599706;}}
}
B599701:L599701:{c.instructions+=1;NFSU2_TR(0x599701);
w4(R+4,u32(0x1ull));
}
B599706:L599706:{c.instructions+=5;NFSU2_TR(0x599706);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B599708:{NFSU2_TR(0x599708);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59970e:{NFSU2_TR(0x59970e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599710:{NFSU2_TR(0x599710);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B599713:{NFSU2_TR(0x599713);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L599716;}}
}
B599715:L599715:{c.instructions+=1;NFSU2_TR(0x599715);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B599716:L599716:{c.instructions+=5;NFSU2_TR(0x599716);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B599718:{NFSU2_TR(0x599718);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59971e:{NFSU2_TR(0x59971e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599720:{NFSU2_TR(0x599720);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B599723:{NFSU2_TR(0x599723);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L599726;}}
}
B599725:L599725:{c.instructions+=1;NFSU2_TR(0x599725);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B599726:L599726:{c.instructions+=5;NFSU2_TR(0x599726);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B599728:{NFSU2_TR(0x599728);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B59972e:{NFSU2_TR(0x59972e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B599730:{NFSU2_TR(0x599730);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B599733:{NFSU2_TR(0x599733);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L599736;}}
}
B599735:L599735:{c.instructions+=1;NFSU2_TR(0x599735);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B599736:L599736:{c.instructions+=4;NFSU2_TR(0x599736);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B59973c:{NFSU2_TR(0x59973c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B59973e:{NFSU2_TR(0x59973e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B599741:{NFSU2_TR(0x599741);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L599744;}}
}
B599743:L599743:{c.instructions+=1;NFSU2_TR(0x599743);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B599744:L599744:{c.instructions+=2;NFSU2_TR(0x599744);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B599746:{NFSU2_TR(0x599746);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L59975a;}}
}
B599748:L599748:{c.instructions+=4;NFSU2_TR(0x599748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B59974a:{NFSU2_TR(0x59974a);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B59974e:{NFSU2_TR(0x59974e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B599750:{NFSU2_TR(0x599750);
if(r1(R+518)){{goto L599754;}}
}
B599752:L599752:{c.instructions+=1;NFSU2_TR(0x599752);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B599754:L599754:{c.instructions+=3;NFSU2_TR(0x599754);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B599755:{NFSU2_TR(0x599755);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B599758:{NFSU2_TR(0x599758);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5996f0u);}goto L5996f0;}
}
B59975a:L59975a:{c.instructions+=5;NFSU2_TR(0x59975a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59975c:{NFSU2_TR(0x59975c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59975e:{NFSU2_TR(0x59975e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599760:{NFSU2_TR(0x599760);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599762:{NFSU2_TR(0x599762);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599764:L599764:{c.instructions+=3;NFSU2_TR(0x599764);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B599765:{NFSU2_TR(0x599765);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x44ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B599768:{NFSU2_TR(0x599768);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5996c0u);}goto L5996c0;}}
}
B59976e:L59976e:{c.instructions+=5;NFSU2_TR(0x59976e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599771:{NFSU2_TR(0x599771);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B599773:{NFSU2_TR(0x599773);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599775:{NFSU2_TR(0x599775);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B599776:{NFSU2_TR(0x599776);
if(r1(R+518)){{goto L59977d;}}
}
B599778:L599778:{c.instructions+=1;NFSU2_TR(0x599778);
w4(R+0,u32(0x1ull));
}
B59977d:L59977d:{c.instructions+=3;NFSU2_TR(0x59977d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599780:{NFSU2_TR(0x599780);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599782:{NFSU2_TR(0x599782);
if(r1(R+518)){{goto L599785;}}
}
B599784:L599784:{c.instructions+=1;NFSU2_TR(0x599784);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B599785:L599785:{c.instructions+=3;NFSU2_TR(0x599785);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599788:{NFSU2_TR(0x599788);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59978a:{NFSU2_TR(0x59978a);
if(r1(R+518)){{goto L59978d;}}
}
B59978c:L59978c:{c.instructions+=1;NFSU2_TR(0x59978c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59978d:L59978d:{c.instructions+=3;NFSU2_TR(0x59978d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599790:{NFSU2_TR(0x599790);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599792:{NFSU2_TR(0x599792);
if(r1(R+518)){{goto L599795;}}
}
B599794:L599794:{c.instructions+=1;NFSU2_TR(0x599794);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B599795:L599795:{c.instructions+=3;NFSU2_TR(0x599795);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B599798:{NFSU2_TR(0x599798);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59979a:{NFSU2_TR(0x59979a);
if(r1(R+518)){{goto L59979d;}}
}
B59979c:L59979c:{c.instructions+=1;NFSU2_TR(0x59979c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B59979d:L59979d:{c.instructions+=3;NFSU2_TR(0x59979d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5997a0:{NFSU2_TR(0x5997a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5997a2:{NFSU2_TR(0x5997a2);
if(r1(R+518)){{goto L5997a5;}}
}
B5997a4:L5997a4:{c.instructions+=1;NFSU2_TR(0x5997a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5997a5:L5997a5:{c.instructions+=3;NFSU2_TR(0x5997a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5997a8:{NFSU2_TR(0x5997a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5997aa:{NFSU2_TR(0x5997aa);
if(r1(R+518)){{goto L5997ad;}}
}
B5997ac:L5997ac:{c.instructions+=1;NFSU2_TR(0x5997ac);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5997ad:L5997ad:{c.instructions+=3;NFSU2_TR(0x5997ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5997b0:{NFSU2_TR(0x5997b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5997b2:{NFSU2_TR(0x5997b2);
if(r1(R+518)){{goto L5997b5;}}
}
B5997b4:L5997b4:{c.instructions+=1;NFSU2_TR(0x5997b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5997b5:L5997b5:{c.instructions+=3;NFSU2_TR(0x5997b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5997b8:{NFSU2_TR(0x5997b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5997ba:{NFSU2_TR(0x5997ba);
if(r1(R+518)){{goto L5997bd;}}
}
B5997bc:L5997bc:{c.instructions+=1;NFSU2_TR(0x5997bc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5997bd:L5997bd:{c.instructions+=3;NFSU2_TR(0x5997bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5997c0:{NFSU2_TR(0x5997c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5997c2:{NFSU2_TR(0x5997c2);
if(r1(R+518)){{goto L5997c5;}}
}
B5997c4:L5997c4:{c.instructions+=1;NFSU2_TR(0x5997c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5997c5:L5997c5:{c.instructions+=2;NFSU2_TR(0x5997c5);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5997c9:{NFSU2_TR(0x5997c9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5997d3;}}
}
B5997cb:L5997cb:{c.instructions+=5;NFSU2_TR(0x5997cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5997cc:{NFSU2_TR(0x5997cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5997cd:{NFSU2_TR(0x5997cd);
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
B5997cf:{NFSU2_TR(0x5997cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5997d0:{NFSU2_TR(0x5997d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5997d3:L5997d3:{c.instructions+=5;NFSU2_TR(0x5997d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5997d4:{NFSU2_TR(0x5997d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5997d5:{NFSU2_TR(0x5997d5);
__builtin_memmove((R+0),(R+12),1);
}
B5997d7:{NFSU2_TR(0x5997d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5997d8:{NFSU2_TR(0x5997d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5997e0:L5997e0:{c.instructions+=7;NFSU2_TR(0x5997e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5997e4:{NFSU2_TR(0x5997e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5997e5:{NFSU2_TR(0x5997e5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5997e9:{NFSU2_TR(0x5997e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5997ec:{NFSU2_TR(0x5997ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5997ee:{NFSU2_TR(0x5997ee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5997ef:{NFSU2_TR(0x5997ef);
if(r1(R+518)){{goto L599809;}}
}
B5997f1:L5997f1:{c.instructions+=4;NFSU2_TR(0x5997f1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5997f7:{NFSU2_TR(0x5997f7);
{u32 ea_=u32(r4(R+4)+u32(688u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5997fd:{NFSU2_TR(0x5997fd);
{u32 ea_=u32(r4(R+8)+u32(272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B599803:{NFSU2_TR(0x599803);
{u32 ea_=u32(r4(R+8)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599809:L599809:{c.instructions+=3;NFSU2_TR(0x599809);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59980c:{NFSU2_TR(0x59980c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59980e:{NFSU2_TR(0x59980e);
if(r1(R+518)){{goto L59981c;}}
}
B599810:L599810:{c.instructions+=2;NFSU2_TR(0x599810);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599816:{NFSU2_TR(0x599816);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B59981c:L59981c:{c.instructions+=3;NFSU2_TR(0x59981c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B59981f:{NFSU2_TR(0x59981f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599821:{NFSU2_TR(0x599821);
if(r1(R+518)){{goto L599835;}}
}
B599823:L599823:{c.instructions+=3;NFSU2_TR(0x599823);
{u32 ea_=u32(r4(R+4)+u32(696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599829:{NFSU2_TR(0x599829);
{u32 ea_=u32(r4(R+8)+u32(684u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B59982f:{NFSU2_TR(0x59982f);
{u32 ea_=u32(r4(R+8)+u32(684u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599835:L599835:{c.instructions+=3;NFSU2_TR(0x599835);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599838:{NFSU2_TR(0x599838);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59983a:{NFSU2_TR(0x59983a);
if(r1(R+518)){{goto L59984e;}}
}
B59983c:L59983c:{c.instructions+=3;NFSU2_TR(0x59983c);
{u32 ea_=u32(r4(R+4)+u32(700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599842:{NFSU2_TR(0x599842);
{u32 ea_=u32(r4(R+8)+u32(628u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599848:{NFSU2_TR(0x599848);
{u32 ea_=u32(r4(R+8)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59984e:L59984e:{c.instructions+=3;NFSU2_TR(0x59984e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599851:{NFSU2_TR(0x599851);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599853:{NFSU2_TR(0x599853);
if(r1(R+518)){{goto L59989d;}}
}
B599855:L599855:{c.instructions+=12;NFSU2_TR(0x599855);
{u32 ea_=u32(r4(R+4)+u32(704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59985b:{NFSU2_TR(0x59985b);
{u32 ea_=u32(r4(R+8)+u32(220u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599861:{NFSU2_TR(0x599861);
{u32 ea_=u32(r4(R+8)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599867:{NFSU2_TR(0x599867);
{u32 ea_=u32(r4(R+4)+u32(712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59986d:{NFSU2_TR(0x59986d);
{u32 ea_=u32(r4(R+8)+u32(224u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599873:{NFSU2_TR(0x599873);
{u32 ea_=u32(r4(R+8)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599879:{NFSU2_TR(0x599879);
{u32 ea_=u32(r4(R+4)+u32(708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59987f:{NFSU2_TR(0x59987f);
{u32 ea_=u32(r4(R+8)+u32(252u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599885:{NFSU2_TR(0x599885);
{u32 ea_=u32(r4(R+8)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59988b:{NFSU2_TR(0x59988b);
{u32 ea_=u32(r4(R+4)+u32(716u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599891:{NFSU2_TR(0x599891);
{u32 ea_=u32(r4(R+8)+u32(256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599897:{NFSU2_TR(0x599897);
{u32 ea_=u32(r4(R+8)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59989d:L59989d:{c.instructions+=2;NFSU2_TR(0x59989d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B59989f:{NFSU2_TR(0x59989f);
}
B5998a0:L5998a0:{c.instructions+=3;NFSU2_TR(0x5998a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5998a3:{NFSU2_TR(0x5998a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5998a5:{NFSU2_TR(0x5998a5);
if(r1(R+518)){{goto L5998b0;}}
}
B5998a7:L5998a7:{c.instructions+=2;NFSU2_TR(0x5998a7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5998ae:{NFSU2_TR(0x5998ae);
{goto L5998b6;}
}
B5998b0:L5998b0:{c.instructions+=1;NFSU2_TR(0x5998b0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5998b6:L5998b6:{c.instructions+=5;NFSU2_TR(0x5998b6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5998bd:{NFSU2_TR(0x5998bd);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5998c4:{NFSU2_TR(0x5998c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5998c7:{NFSU2_TR(0x5998c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5998c9:{NFSU2_TR(0x5998c9);
if(r1(R+518)){{goto L5998d4;}}
}
B5998cb:L5998cb:{c.instructions+=2;NFSU2_TR(0x5998cb);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5998d2:{NFSU2_TR(0x5998d2);
{goto L5998da;}
}
B5998d4:L5998d4:{c.instructions+=1;NFSU2_TR(0x5998d4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5998da:L5998da:{c.instructions+=5;NFSU2_TR(0x5998da);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5998dc:{NFSU2_TR(0x5998dc);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5998e3:{NFSU2_TR(0x5998e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5998e6:{NFSU2_TR(0x5998e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5998e8:{NFSU2_TR(0x5998e8);
if(r1(R+518)){{goto L5998f3;}}
}
B5998ea:L5998ea:{c.instructions+=2;NFSU2_TR(0x5998ea);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5998f1:{NFSU2_TR(0x5998f1);
{goto L5998f9;}
}
B5998f3:L5998f3:{c.instructions+=1;NFSU2_TR(0x5998f3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5998f9:L5998f9:{c.instructions+=7;NFSU2_TR(0x5998f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5998fb:{NFSU2_TR(0x5998fb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5998fd:{NFSU2_TR(0x5998fd);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599904:{NFSU2_TR(0x599904);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599907:{NFSU2_TR(0x599907);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599909:{NFSU2_TR(0x599909);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B59990b:{NFSU2_TR(0x59990b);
if(r1(R+518)){{goto L599916;}}
}
B59990d:L59990d:{c.instructions+=2;NFSU2_TR(0x59990d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599914:{NFSU2_TR(0x599914);
{goto L59991c;}
}
B599916:L599916:{c.instructions+=1;NFSU2_TR(0x599916);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59991c:L59991c:{c.instructions+=5;NFSU2_TR(0x59991c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(548u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599923:{NFSU2_TR(0x599923);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59992a:{NFSU2_TR(0x59992a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B59992d:{NFSU2_TR(0x59992d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B59992f:{NFSU2_TR(0x59992f);
if(r1(R+518)){{goto L59993a;}}
}
B599931:L599931:{c.instructions+=2;NFSU2_TR(0x599931);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599938:{NFSU2_TR(0x599938);
{goto L599940;}
}
B59993a:L59993a:{c.instructions+=1;NFSU2_TR(0x59993a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599940:L599940:{c.instructions+=5;NFSU2_TR(0x599940);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599947:{NFSU2_TR(0x599947);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59994e:{NFSU2_TR(0x59994e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599951:{NFSU2_TR(0x599951);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599953:{NFSU2_TR(0x599953);
if(r1(R+518)){{goto L59995e;}}
}
B599955:L599955:{c.instructions+=2;NFSU2_TR(0x599955);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59995c:{NFSU2_TR(0x59995c);
{goto L599964;}
}
B59995e:L59995e:{c.instructions+=1;NFSU2_TR(0x59995e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599964:L599964:{c.instructions+=5;NFSU2_TR(0x599964);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599966:{NFSU2_TR(0x599966);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B59996d:{NFSU2_TR(0x59996d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599970:{NFSU2_TR(0x599970);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599972:{NFSU2_TR(0x599972);
if(r1(R+518)){{goto L59997d;}}
}
B599974:L599974:{c.instructions+=2;NFSU2_TR(0x599974);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59997b:{NFSU2_TR(0x59997b);
{goto L599983;}
}
B59997d:L59997d:{c.instructions+=1;NFSU2_TR(0x59997d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599983:L599983:{c.instructions+=7;NFSU2_TR(0x599983);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599985:{NFSU2_TR(0x599985);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599987:{NFSU2_TR(0x599987);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B59998e:{NFSU2_TR(0x59998e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599991:{NFSU2_TR(0x599991);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599993:{NFSU2_TR(0x599993);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599995:{NFSU2_TR(0x599995);
if(r1(R+518)){{goto L5999a0;}}
}
B599997:L599997:{c.instructions+=2;NFSU2_TR(0x599997);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B59999e:{NFSU2_TR(0x59999e);
{goto L5999a6;}
}
B5999a0:L5999a0:{c.instructions+=1;NFSU2_TR(0x5999a0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5999a6:L5999a6:{c.instructions+=5;NFSU2_TR(0x5999a6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(552u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5999ad:{NFSU2_TR(0x5999ad);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5999b4:{NFSU2_TR(0x5999b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5999b7:{NFSU2_TR(0x5999b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5999b9:{NFSU2_TR(0x5999b9);
if(r1(R+518)){{goto L5999c4;}}
}
B5999bb:L5999bb:{c.instructions+=2;NFSU2_TR(0x5999bb);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5999c2:{NFSU2_TR(0x5999c2);
{goto L5999ca;}
}
B5999c4:L5999c4:{c.instructions+=1;NFSU2_TR(0x5999c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5999ca:L5999ca:{c.instructions+=5;NFSU2_TR(0x5999ca);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5999d1:{NFSU2_TR(0x5999d1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5999d8:{NFSU2_TR(0x5999d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5999db:{NFSU2_TR(0x5999db);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5999dd:{NFSU2_TR(0x5999dd);
if(r1(R+518)){{goto L5999e8;}}
}
B5999df:L5999df:{c.instructions+=2;NFSU2_TR(0x5999df);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5999e6:{NFSU2_TR(0x5999e6);
{goto L5999ee;}
}
B5999e8:L5999e8:{c.instructions+=1;NFSU2_TR(0x5999e8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5999ee:L5999ee:{c.instructions+=5;NFSU2_TR(0x5999ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5999f0:{NFSU2_TR(0x5999f0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5999f7:{NFSU2_TR(0x5999f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5999fa:{NFSU2_TR(0x5999fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5999fc:{NFSU2_TR(0x5999fc);
if(r1(R+518)){{goto L599a07;}}
}
B5999fe:L5999fe:{c.instructions+=2;NFSU2_TR(0x5999fe);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a05:{NFSU2_TR(0x599a05);
{goto L599a0d;}
}
B599a07:L599a07:{c.instructions+=1;NFSU2_TR(0x599a07);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a0d:L599a0d:{c.instructions+=7;NFSU2_TR(0x599a0d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599a0f:{NFSU2_TR(0x599a0f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599a11:{NFSU2_TR(0x599a11);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599a18:{NFSU2_TR(0x599a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599a1b:{NFSU2_TR(0x599a1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599a1d:{NFSU2_TR(0x599a1d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599a1f:{NFSU2_TR(0x599a1f);
if(r1(R+518)){{goto L599a2a;}}
}
B599a21:L599a21:{c.instructions+=2;NFSU2_TR(0x599a21);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a28:{NFSU2_TR(0x599a28);
{goto L599a30;}
}
B599a2a:L599a2a:{c.instructions+=1;NFSU2_TR(0x599a2a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a30:L599a30:{c.instructions+=5;NFSU2_TR(0x599a30);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(556u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599a37:{NFSU2_TR(0x599a37);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599a3e:{NFSU2_TR(0x599a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599a41:{NFSU2_TR(0x599a41);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599a43:{NFSU2_TR(0x599a43);
if(r1(R+518)){{goto L599a4e;}}
}
B599a45:L599a45:{c.instructions+=2;NFSU2_TR(0x599a45);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a4c:{NFSU2_TR(0x599a4c);
{goto L599a54;}
}
B599a4e:L599a4e:{c.instructions+=1;NFSU2_TR(0x599a4e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a54:L599a54:{c.instructions+=5;NFSU2_TR(0x599a54);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599a5b:{NFSU2_TR(0x599a5b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599a62:{NFSU2_TR(0x599a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599a65:{NFSU2_TR(0x599a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599a67:{NFSU2_TR(0x599a67);
if(r1(R+518)){{goto L599a72;}}
}
B599a69:L599a69:{c.instructions+=2;NFSU2_TR(0x599a69);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a70:{NFSU2_TR(0x599a70);
{goto L599a78;}
}
B599a72:L599a72:{c.instructions+=1;NFSU2_TR(0x599a72);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a78:L599a78:{c.instructions+=5;NFSU2_TR(0x599a78);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599a7a:{NFSU2_TR(0x599a7a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599a81:{NFSU2_TR(0x599a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599a84:{NFSU2_TR(0x599a84);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599a86:{NFSU2_TR(0x599a86);
if(r1(R+518)){{goto L599a91;}}
}
B599a88:L599a88:{c.instructions+=2;NFSU2_TR(0x599a88);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a8f:{NFSU2_TR(0x599a8f);
{goto L599a97;}
}
B599a91:L599a91:{c.instructions+=1;NFSU2_TR(0x599a91);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599a97:L599a97:{c.instructions+=7;NFSU2_TR(0x599a97);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599a99:{NFSU2_TR(0x599a99);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599a9b:{NFSU2_TR(0x599a9b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599aa2:{NFSU2_TR(0x599aa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599aa5:{NFSU2_TR(0x599aa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599aa7:{NFSU2_TR(0x599aa7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599aa9:{NFSU2_TR(0x599aa9);
if(r1(R+518)){{goto L599ab4;}}
}
B599aab:L599aab:{c.instructions+=2;NFSU2_TR(0x599aab);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ab2:{NFSU2_TR(0x599ab2);
{goto L599aba;}
}
B599ab4:L599ab4:{c.instructions+=1;NFSU2_TR(0x599ab4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599aba:L599aba:{c.instructions+=5;NFSU2_TR(0x599aba);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(560u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599ac1:{NFSU2_TR(0x599ac1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599ac8:{NFSU2_TR(0x599ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599acb:{NFSU2_TR(0x599acb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599acd:{NFSU2_TR(0x599acd);
if(r1(R+518)){{goto L599ad8;}}
}
B599acf:L599acf:{c.instructions+=2;NFSU2_TR(0x599acf);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ad6:{NFSU2_TR(0x599ad6);
{goto L599ade;}
}
B599ad8:L599ad8:{c.instructions+=1;NFSU2_TR(0x599ad8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ade:L599ade:{c.instructions+=5;NFSU2_TR(0x599ade);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599ae5:{NFSU2_TR(0x599ae5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599aec:{NFSU2_TR(0x599aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599aef:{NFSU2_TR(0x599aef);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599af1:{NFSU2_TR(0x599af1);
if(r1(R+518)){{goto L599afc;}}
}
B599af3:L599af3:{c.instructions+=2;NFSU2_TR(0x599af3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(772u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599afa:{NFSU2_TR(0x599afa);
{goto L599b02;}
}
B599afc:L599afc:{c.instructions+=1;NFSU2_TR(0x599afc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b02:L599b02:{c.instructions+=5;NFSU2_TR(0x599b02);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599b04:{NFSU2_TR(0x599b04);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599b0b:{NFSU2_TR(0x599b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599b0e:{NFSU2_TR(0x599b0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599b10:{NFSU2_TR(0x599b10);
if(r1(R+518)){{goto L599b1b;}}
}
B599b12:L599b12:{c.instructions+=2;NFSU2_TR(0x599b12);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b19:{NFSU2_TR(0x599b19);
{goto L599b21;}
}
B599b1b:L599b1b:{c.instructions+=1;NFSU2_TR(0x599b1b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b21:L599b21:{c.instructions+=7;NFSU2_TR(0x599b21);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599b23:{NFSU2_TR(0x599b23);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599b25:{NFSU2_TR(0x599b25);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599b2c:{NFSU2_TR(0x599b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599b2f:{NFSU2_TR(0x599b2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599b31:{NFSU2_TR(0x599b31);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599b33:{NFSU2_TR(0x599b33);
if(r1(R+518)){{goto L599b3e;}}
}
B599b35:L599b35:{c.instructions+=2;NFSU2_TR(0x599b35);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b3c:{NFSU2_TR(0x599b3c);
{goto L599b44;}
}
B599b3e:L599b3e:{c.instructions+=1;NFSU2_TR(0x599b3e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b44:L599b44:{c.instructions+=5;NFSU2_TR(0x599b44);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(564u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599b4b:{NFSU2_TR(0x599b4b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599b52:{NFSU2_TR(0x599b52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599b55:{NFSU2_TR(0x599b55);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599b57:{NFSU2_TR(0x599b57);
if(r1(R+518)){{goto L599b62;}}
}
B599b59:L599b59:{c.instructions+=2;NFSU2_TR(0x599b59);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b60:{NFSU2_TR(0x599b60);
{goto L599b68;}
}
B599b62:L599b62:{c.instructions+=1;NFSU2_TR(0x599b62);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b68:L599b68:{c.instructions+=5;NFSU2_TR(0x599b68);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599b6f:{NFSU2_TR(0x599b6f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599b76:{NFSU2_TR(0x599b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599b79:{NFSU2_TR(0x599b79);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599b7b:{NFSU2_TR(0x599b7b);
if(r1(R+518)){{goto L599b86;}}
}
B599b7d:L599b7d:{c.instructions+=2;NFSU2_TR(0x599b7d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b84:{NFSU2_TR(0x599b84);
{goto L599b8c;}
}
B599b86:L599b86:{c.instructions+=1;NFSU2_TR(0x599b86);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599b8c:L599b8c:{c.instructions+=5;NFSU2_TR(0x599b8c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599b8e:{NFSU2_TR(0x599b8e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599b95:{NFSU2_TR(0x599b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599b98:{NFSU2_TR(0x599b98);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599b9a:{NFSU2_TR(0x599b9a);
if(r1(R+518)){{goto L599ba5;}}
}
B599b9c:L599b9c:{c.instructions+=2;NFSU2_TR(0x599b9c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ba3:{NFSU2_TR(0x599ba3);
{goto L599bab;}
}
B599ba5:L599ba5:{c.instructions+=1;NFSU2_TR(0x599ba5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599bab:L599bab:{c.instructions+=7;NFSU2_TR(0x599bab);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599bad:{NFSU2_TR(0x599bad);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599baf:{NFSU2_TR(0x599baf);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(532u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599bb6:{NFSU2_TR(0x599bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599bb9:{NFSU2_TR(0x599bb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599bbb:{NFSU2_TR(0x599bbb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599bbd:{NFSU2_TR(0x599bbd);
if(r1(R+518)){{goto L599bc8;}}
}
B599bbf:L599bbf:{c.instructions+=2;NFSU2_TR(0x599bbf);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599bc6:{NFSU2_TR(0x599bc6);
{goto L599bce;}
}
B599bc8:L599bc8:{c.instructions+=1;NFSU2_TR(0x599bc8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599bce:L599bce:{c.instructions+=5;NFSU2_TR(0x599bce);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(568u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599bd5:{NFSU2_TR(0x599bd5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(568u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599bdc:{NFSU2_TR(0x599bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599bdf:{NFSU2_TR(0x599bdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599be1:{NFSU2_TR(0x599be1);
if(r1(R+518)){{goto L599bec;}}
}
B599be3:L599be3:{c.instructions+=2;NFSU2_TR(0x599be3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599bea:{NFSU2_TR(0x599bea);
{goto L599bf2;}
}
B599bec:L599bec:{c.instructions+=1;NFSU2_TR(0x599bec);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599bf2:L599bf2:{c.instructions+=5;NFSU2_TR(0x599bf2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599bf9:{NFSU2_TR(0x599bf9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599c00:{NFSU2_TR(0x599c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599c03:{NFSU2_TR(0x599c03);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599c05:{NFSU2_TR(0x599c05);
if(r1(R+518)){{goto L599c10;}}
}
B599c07:L599c07:{c.instructions+=2;NFSU2_TR(0x599c07);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(780u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c0e:{NFSU2_TR(0x599c0e);
{goto L599c16;}
}
B599c10:L599c10:{c.instructions+=1;NFSU2_TR(0x599c10);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c16:L599c16:{c.instructions+=5;NFSU2_TR(0x599c16);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599c18:{NFSU2_TR(0x599c18);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599c1f:{NFSU2_TR(0x599c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599c22:{NFSU2_TR(0x599c22);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599c24:{NFSU2_TR(0x599c24);
if(r1(R+518)){{goto L599c2f;}}
}
B599c26:L599c26:{c.instructions+=2;NFSU2_TR(0x599c26);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c2d:{NFSU2_TR(0x599c2d);
{goto L599c35;}
}
B599c2f:L599c2f:{c.instructions+=1;NFSU2_TR(0x599c2f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c35:L599c35:{c.instructions+=7;NFSU2_TR(0x599c35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599c37:{NFSU2_TR(0x599c37);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599c39:{NFSU2_TR(0x599c39);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599c40:{NFSU2_TR(0x599c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599c43:{NFSU2_TR(0x599c43);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599c45:{NFSU2_TR(0x599c45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599c47:{NFSU2_TR(0x599c47);
if(r1(R+518)){{goto L599c52;}}
}
B599c49:L599c49:{c.instructions+=2;NFSU2_TR(0x599c49);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c50:{NFSU2_TR(0x599c50);
{goto L599c58;}
}
B599c52:L599c52:{c.instructions+=1;NFSU2_TR(0x599c52);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c58:L599c58:{c.instructions+=5;NFSU2_TR(0x599c58);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(572u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599c5f:{NFSU2_TR(0x599c5f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599c66:{NFSU2_TR(0x599c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599c69:{NFSU2_TR(0x599c69);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599c6b:{NFSU2_TR(0x599c6b);
if(r1(R+518)){{goto L599c76;}}
}
B599c6d:L599c6d:{c.instructions+=2;NFSU2_TR(0x599c6d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(748u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c74:{NFSU2_TR(0x599c74);
{goto L599c7c;}
}
B599c76:L599c76:{c.instructions+=1;NFSU2_TR(0x599c76);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c7c:L599c7c:{c.instructions+=5;NFSU2_TR(0x599c7c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599c83:{NFSU2_TR(0x599c83);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599c8a:{NFSU2_TR(0x599c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599c8d:{NFSU2_TR(0x599c8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599c8f:{NFSU2_TR(0x599c8f);
if(r1(R+518)){{goto L599c9a;}}
}
B599c91:L599c91:{c.instructions+=2;NFSU2_TR(0x599c91);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599c98:{NFSU2_TR(0x599c98);
{goto L599ca0;}
}
B599c9a:L599c9a:{c.instructions+=1;NFSU2_TR(0x599c9a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ca0:L599ca0:{c.instructions+=5;NFSU2_TR(0x599ca0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599ca2:{NFSU2_TR(0x599ca2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599ca9:{NFSU2_TR(0x599ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599cac:{NFSU2_TR(0x599cac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599cae:{NFSU2_TR(0x599cae);
if(r1(R+518)){{goto L599cb9;}}
}
B599cb0:L599cb0:{c.instructions+=2;NFSU2_TR(0x599cb0);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599cb7:{NFSU2_TR(0x599cb7);
{goto L599cbf;}
}
B599cb9:L599cb9:{c.instructions+=1;NFSU2_TR(0x599cb9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599cbf:L599cbf:{c.instructions+=7;NFSU2_TR(0x599cbf);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599cc1:{NFSU2_TR(0x599cc1);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599cc3:{NFSU2_TR(0x599cc3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599cca:{NFSU2_TR(0x599cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599ccd:{NFSU2_TR(0x599ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599ccf:{NFSU2_TR(0x599ccf);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599cd1:{NFSU2_TR(0x599cd1);
if(r1(R+518)){{goto L599cdc;}}
}
B599cd3:L599cd3:{c.instructions+=2;NFSU2_TR(0x599cd3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599cda:{NFSU2_TR(0x599cda);
{goto L599ce2;}
}
B599cdc:L599cdc:{c.instructions+=1;NFSU2_TR(0x599cdc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ce2:L599ce2:{c.instructions+=5;NFSU2_TR(0x599ce2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(576u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599ce9:{NFSU2_TR(0x599ce9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599cf0:{NFSU2_TR(0x599cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599cf3:{NFSU2_TR(0x599cf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599cf5:{NFSU2_TR(0x599cf5);
if(r1(R+518)){{goto L599d00;}}
}
B599cf7:L599cf7:{c.instructions+=2;NFSU2_TR(0x599cf7);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(752u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599cfe:{NFSU2_TR(0x599cfe);
{goto L599d06;}
}
B599d00:L599d00:{c.instructions+=1;NFSU2_TR(0x599d00);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d06:L599d06:{c.instructions+=5;NFSU2_TR(0x599d06);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599d0d:{NFSU2_TR(0x599d0d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599d14:{NFSU2_TR(0x599d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599d17:{NFSU2_TR(0x599d17);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599d19:{NFSU2_TR(0x599d19);
if(r1(R+518)){{goto L599d24;}}
}
B599d1b:L599d1b:{c.instructions+=2;NFSU2_TR(0x599d1b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d22:{NFSU2_TR(0x599d22);
{goto L599d2a;}
}
B599d24:L599d24:{c.instructions+=1;NFSU2_TR(0x599d24);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d2a:L599d2a:{c.instructions+=5;NFSU2_TR(0x599d2a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B599d2c:{NFSU2_TR(0x599d2c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599d33:{NFSU2_TR(0x599d33);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599d36:{NFSU2_TR(0x599d36);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599d38:{NFSU2_TR(0x599d38);
if(r1(R+518)){{goto L599d43;}}
}
B599d3a:L599d3a:{c.instructions+=2;NFSU2_TR(0x599d3a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d41:{NFSU2_TR(0x599d41);
{goto L599d49;}
}
B599d43:L599d43:{c.instructions+=1;NFSU2_TR(0x599d43);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d49:L599d49:{c.instructions+=7;NFSU2_TR(0x599d49);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599d4b:{NFSU2_TR(0x599d4b);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B599d4d:{NFSU2_TR(0x599d4d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599d54:{NFSU2_TR(0x599d54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599d57:{NFSU2_TR(0x599d57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599d59:{NFSU2_TR(0x599d59);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599d5b:{NFSU2_TR(0x599d5b);
if(r1(R+518)){{goto L599d66;}}
}
B599d5d:L599d5d:{c.instructions+=2;NFSU2_TR(0x599d5d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d64:{NFSU2_TR(0x599d64);
{goto L599d6c;}
}
B599d66:L599d66:{c.instructions+=1;NFSU2_TR(0x599d66);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599d6c:L599d6c:{c.instructions+=5;NFSU2_TR(0x599d6c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(580u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B599d73:{NFSU2_TR(0x599d73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
}
B599d76:{NFSU2_TR(0x599d76);
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
B599d79:{NFSU2_TR(0x599d79);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(544u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599d80:{NFSU2_TR(0x599d80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5998a0u);}goto L5998a0;}}
}
B599d86:L599d86:{c.instructions+=3;NFSU2_TR(0x599d86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B599d87:{NFSU2_TR(0x599d87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B599d88:{NFSU2_TR(0x599d88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B599d90:L599d90:{c.instructions+=7;NFSU2_TR(0x599d90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B599d94:{NFSU2_TR(0x599d94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599d95:{NFSU2_TR(0x599d95);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B599d99:{NFSU2_TR(0x599d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599d9c:{NFSU2_TR(0x599d9c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599d9e:{NFSU2_TR(0x599d9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B599d9f:{NFSU2_TR(0x599d9f);
if(r1(R+518)){{goto L599db9;}}
}
B599da1:L599da1:{c.instructions+=4;NFSU2_TR(0x599da1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599da7:{NFSU2_TR(0x599da7);
{u32 ea_=u32(r4(R+4)+u32(688u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599dad:{NFSU2_TR(0x599dad);
{u32 ea_=u32(r4(R+8)+u32(272u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B599db3:{NFSU2_TR(0x599db3);
{u32 ea_=u32(r4(R+8)+u32(272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599db9:L599db9:{c.instructions+=3;NFSU2_TR(0x599db9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599dbc:{NFSU2_TR(0x599dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599dbe:{NFSU2_TR(0x599dbe);
if(r1(R+518)){{goto L599dd2;}}
}
B599dc0:L599dc0:{c.instructions+=3;NFSU2_TR(0x599dc0);
{u32 ea_=u32(r4(R+8)+u32(684u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599dc6:{NFSU2_TR(0x599dc6);
{u32 ea_=u32(r4(R+4)+u32(696u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599dcc:{NFSU2_TR(0x599dcc);
{u32 ea_=u32(r4(R+8)+u32(684u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599dd2:L599dd2:{c.instructions+=3;NFSU2_TR(0x599dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599dd5:{NFSU2_TR(0x599dd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599dd7:{NFSU2_TR(0x599dd7);
if(r1(R+518)){{goto L599deb;}}
}
B599dd9:L599dd9:{c.instructions+=3;NFSU2_TR(0x599dd9);
{u32 ea_=u32(r4(R+8)+u32(628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ddf:{NFSU2_TR(0x599ddf);
{u32 ea_=u32(r4(R+4)+u32(700u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599de5:{NFSU2_TR(0x599de5);
{u32 ea_=u32(r4(R+8)+u32(628u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599deb:L599deb:{c.instructions+=3;NFSU2_TR(0x599deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B599dee:{NFSU2_TR(0x599dee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599df0:{NFSU2_TR(0x599df0);
if(r1(R+518)){{goto L599e3a;}}
}
B599df2:L599df2:{c.instructions+=12;NFSU2_TR(0x599df2);
{u32 ea_=u32(r4(R+8)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599df8:{NFSU2_TR(0x599df8);
{u32 ea_=u32(r4(R+4)+u32(704u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599dfe:{NFSU2_TR(0x599dfe);
{u32 ea_=u32(r4(R+8)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599e04:{NFSU2_TR(0x599e04);
{u32 ea_=u32(r4(R+8)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e0a:{NFSU2_TR(0x599e0a);
{u32 ea_=u32(r4(R+4)+u32(712u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599e10:{NFSU2_TR(0x599e10);
{u32 ea_=u32(r4(R+8)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599e16:{NFSU2_TR(0x599e16);
{u32 ea_=u32(r4(R+8)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e1c:{NFSU2_TR(0x599e1c);
{u32 ea_=u32(r4(R+4)+u32(708u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599e22:{NFSU2_TR(0x599e22);
{u32 ea_=u32(r4(R+8)+u32(252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599e28:{NFSU2_TR(0x599e28);
{u32 ea_=u32(r4(R+8)+u32(256u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e2e:{NFSU2_TR(0x599e2e);
{u32 ea_=u32(r4(R+4)+u32(716u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B599e34:{NFSU2_TR(0x599e34);
{u32 ea_=u32(r4(R+8)+u32(256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599e3a:L599e3a:{c.instructions+=5;NFSU2_TR(0x599e3a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B599e3c:{NFSU2_TR(0x599e3c);
__builtin_memmove((R+16),(R+16),4);
}
B599e40:{NFSU2_TR(0x599e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599e43:{NFSU2_TR(0x599e43);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599e45:{NFSU2_TR(0x599e45);
if(r1(R+518)){{goto L599e50;}}
}
B599e47:L599e47:{c.instructions+=2;NFSU2_TR(0x599e47);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(720u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e4e:{NFSU2_TR(0x599e4e);
{goto L599e56;}
}
B599e50:L599e50:{c.instructions+=1;NFSU2_TR(0x599e50);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e56:L599e56:{c.instructions+=5;NFSU2_TR(0x599e56);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B599e5d:{NFSU2_TR(0x599e5d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599e64:{NFSU2_TR(0x599e64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599e67:{NFSU2_TR(0x599e67);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599e69:{NFSU2_TR(0x599e69);
if(r1(R+518)){{goto L599e74;}}
}
B599e6b:L599e6b:{c.instructions+=2;NFSU2_TR(0x599e6b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(756u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e72:{NFSU2_TR(0x599e72);
{goto L599e7a;}
}
B599e74:L599e74:{c.instructions+=1;NFSU2_TR(0x599e74);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e7a:L599e7a:{c.instructions+=5;NFSU2_TR(0x599e7a);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B599e7c:{NFSU2_TR(0x599e7c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599e83:{NFSU2_TR(0x599e83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599e86:{NFSU2_TR(0x599e86);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599e88:{NFSU2_TR(0x599e88);
if(r1(R+518)){{goto L599e93;}}
}
B599e8a:L599e8a:{c.instructions+=2;NFSU2_TR(0x599e8a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e91:{NFSU2_TR(0x599e91);
{goto L599e99;}
}
B599e93:L599e93:{c.instructions+=1;NFSU2_TR(0x599e93);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599e99:L599e99:{c.instructions+=7;NFSU2_TR(0x599e99);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599e9b:{NFSU2_TR(0x599e9b);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B599e9d:{NFSU2_TR(0x599e9d);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599ea4:{NFSU2_TR(0x599ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599ea7:{NFSU2_TR(0x599ea7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599ea9:{NFSU2_TR(0x599ea9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599eab:{NFSU2_TR(0x599eab);
if(r1(R+518)){{goto L599eb6;}}
}
B599ead:L599ead:{c.instructions+=2;NFSU2_TR(0x599ead);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599eb4:{NFSU2_TR(0x599eb4);
{goto L599ebc;}
}
B599eb6:L599eb6:{c.instructions+=1;NFSU2_TR(0x599eb6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ebc:L599ebc:{c.instructions+=7;NFSU2_TR(0x599ebc);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(548u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ec3:{NFSU2_TR(0x599ec3);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B599ec5:{NFSU2_TR(0x599ec5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(548u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599ecc:{NFSU2_TR(0x599ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599ecf:{NFSU2_TR(0x599ecf);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599ed1:{NFSU2_TR(0x599ed1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599ed3:{NFSU2_TR(0x599ed3);
if(r1(R+518)){{goto L599ede;}}
}
B599ed5:L599ed5:{c.instructions+=2;NFSU2_TR(0x599ed5);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(724u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599edc:{NFSU2_TR(0x599edc);
{goto L599ee4;}
}
B599ede:L599ede:{c.instructions+=1;NFSU2_TR(0x599ede);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ee4:L599ee4:{c.instructions+=5;NFSU2_TR(0x599ee4);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B599eeb:{NFSU2_TR(0x599eeb);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599ef2:{NFSU2_TR(0x599ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599ef5:{NFSU2_TR(0x599ef5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599ef7:{NFSU2_TR(0x599ef7);
if(r1(R+518)){{goto L599f02;}}
}
B599ef9:L599ef9:{c.instructions+=2;NFSU2_TR(0x599ef9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f00:{NFSU2_TR(0x599f00);
{goto L599f08;}
}
B599f02:L599f02:{c.instructions+=1;NFSU2_TR(0x599f02);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f08:L599f08:{c.instructions+=5;NFSU2_TR(0x599f08);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B599f0a:{NFSU2_TR(0x599f0a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599f11:{NFSU2_TR(0x599f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599f14:{NFSU2_TR(0x599f14);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599f16:{NFSU2_TR(0x599f16);
if(r1(R+518)){{goto L599f21;}}
}
B599f18:L599f18:{c.instructions+=2;NFSU2_TR(0x599f18);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f1f:{NFSU2_TR(0x599f1f);
{goto L599f27;}
}
B599f21:L599f21:{c.instructions+=1;NFSU2_TR(0x599f21);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f27:L599f27:{c.instructions+=7;NFSU2_TR(0x599f27);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599f29:{NFSU2_TR(0x599f29);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B599f2b:{NFSU2_TR(0x599f2b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599f32:{NFSU2_TR(0x599f32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599f35:{NFSU2_TR(0x599f35);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599f37:{NFSU2_TR(0x599f37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599f39:{NFSU2_TR(0x599f39);
if(r1(R+518)){{goto L599f44;}}
}
B599f3b:L599f3b:{c.instructions+=2;NFSU2_TR(0x599f3b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f42:{NFSU2_TR(0x599f42);
{goto L599f4a;}
}
B599f44:L599f44:{c.instructions+=1;NFSU2_TR(0x599f44);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f4a:L599f4a:{c.instructions+=7;NFSU2_TR(0x599f4a);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f51:{NFSU2_TR(0x599f51);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B599f53:{NFSU2_TR(0x599f53);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(552u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599f5a:{NFSU2_TR(0x599f5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599f5d:{NFSU2_TR(0x599f5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599f5f:{NFSU2_TR(0x599f5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599f61:{NFSU2_TR(0x599f61);
if(r1(R+518)){{goto L599f6c;}}
}
B599f63:L599f63:{c.instructions+=2;NFSU2_TR(0x599f63);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(728u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f6a:{NFSU2_TR(0x599f6a);
{goto L599f72;}
}
B599f6c:L599f6c:{c.instructions+=1;NFSU2_TR(0x599f6c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f72:L599f72:{c.instructions+=5;NFSU2_TR(0x599f72);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B599f79:{NFSU2_TR(0x599f79);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599f80:{NFSU2_TR(0x599f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599f83:{NFSU2_TR(0x599f83);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599f85:{NFSU2_TR(0x599f85);
if(r1(R+518)){{goto L599f90;}}
}
B599f87:L599f87:{c.instructions+=2;NFSU2_TR(0x599f87);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(764u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f8e:{NFSU2_TR(0x599f8e);
{goto L599f96;}
}
B599f90:L599f90:{c.instructions+=1;NFSU2_TR(0x599f90);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599f96:L599f96:{c.instructions+=5;NFSU2_TR(0x599f96);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B599f98:{NFSU2_TR(0x599f98);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B599f9f:{NFSU2_TR(0x599f9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599fa2:{NFSU2_TR(0x599fa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599fa4:{NFSU2_TR(0x599fa4);
if(r1(R+518)){{goto L599faf;}}
}
B599fa6:L599fa6:{c.instructions+=2;NFSU2_TR(0x599fa6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599fad:{NFSU2_TR(0x599fad);
{goto L599fb5;}
}
B599faf:L599faf:{c.instructions+=1;NFSU2_TR(0x599faf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599fb5:L599fb5:{c.instructions+=7;NFSU2_TR(0x599fb5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B599fb7:{NFSU2_TR(0x599fb7);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B599fb9:{NFSU2_TR(0x599fb9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599fc0:{NFSU2_TR(0x599fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599fc3:{NFSU2_TR(0x599fc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599fc5:{NFSU2_TR(0x599fc5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599fc7:{NFSU2_TR(0x599fc7);
if(r1(R+518)){{goto L599fd2;}}
}
B599fc9:L599fc9:{c.instructions+=2;NFSU2_TR(0x599fc9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599fd0:{NFSU2_TR(0x599fd0);
{goto L599fd8;}
}
B599fd2:L599fd2:{c.instructions+=1;NFSU2_TR(0x599fd2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599fd8:L599fd8:{c.instructions+=7;NFSU2_TR(0x599fd8);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(556u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599fdf:{NFSU2_TR(0x599fdf);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B599fe1:{NFSU2_TR(0x599fe1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B599fe8:{NFSU2_TR(0x599fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B599feb:{NFSU2_TR(0x599feb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B599fed:{NFSU2_TR(0x599fed);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B599fef:{NFSU2_TR(0x599fef);
if(r1(R+518)){{goto L599ffa;}}
}
B599ff1:L599ff1:{c.instructions+=2;NFSU2_TR(0x599ff1);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(732u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B599ff8:{NFSU2_TR(0x599ff8);
TAIL_STATIC(0x59a000u,59a);
}
B599ffa:L599ffa:{c.instructions+=1;NFSU2_TR(0x599ffa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
TAIL_STATIC(0x59a000u,59a);
}
XIT:NFSU2_TR_EXIT(0x599,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
