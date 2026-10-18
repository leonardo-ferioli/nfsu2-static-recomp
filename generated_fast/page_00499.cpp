#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_498(u8* __restrict R,Cpu& c);
u32 body_49a(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_523(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_533(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_53d(u8* __restrict R,Cpu& c);
u32 body_541(u8* __restrict R,Cpu& c);
u32 body_54c(u8* __restrict R,Cpu& c);
u32 body_557(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_580(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5d6(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x499,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x499,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_499(u8* __restrict R,Cpu& c);
u32 page_499(Cpu& c){return body_499(c.regs.data(),c);}
__attribute__((noinline)) u32 body_499(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x499004:goto L499004;
case 0x499006:c.instructions+=1;goto B499006;
case 0x49900b:goto L49900b;
case 0x49900c:c.instructions+=3;goto B49900c;
case 0x49900d:c.instructions+=2;goto B49900d;
case 0x49900e:c.instructions+=1;goto B49900e;
case 0x499011:goto L499011;
case 0x499016:c.instructions+=2;goto B499016;
case 0x499018:c.instructions+=1;goto B499018;
case 0x49901a:goto L49901a;
case 0x49901f:c.instructions+=2;goto B49901f;
case 0x499021:c.instructions+=1;goto B499021;
case 0x499023:goto L499023;
case 0x499028:c.instructions+=1;goto B499028;
case 0x49902d:goto L49902d;
case 0x49902e:c.instructions+=2;goto B49902e;
case 0x499033:c.instructions+=1;goto B499033;
case 0x499038:goto L499038;
case 0x49903d:c.instructions+=1;goto B49903d;
case 0x499042:goto L499042;
case 0x499048:c.instructions+=2;goto B499048;
case 0x49904a:c.instructions+=1;goto B49904a;
case 0x49904f:goto L49904f;
case 0x499052:c.instructions+=5;goto B499052;
case 0x499055:c.instructions+=4;goto B499055;
case 0x499056:c.instructions+=3;goto B499056;
case 0x499058:c.instructions+=2;goto B499058;
case 0x499059:c.instructions+=1;goto B499059;
case 0x49905e:goto L49905e;
case 0x499061:c.instructions+=4;goto B499061;
case 0x499062:c.instructions+=3;goto B499062;
case 0x499063:c.instructions+=2;goto B499063;
case 0x499064:c.instructions+=1;goto B499064;
case 0x499067:goto L499067;
case 0x49906c:c.instructions+=2;goto B49906c;
case 0x49906e:c.instructions+=1;goto B49906e;
case 0x499070:goto L499070;
case 0x499075:c.instructions+=2;goto B499075;
case 0x499077:c.instructions+=1;goto B499077;
case 0x49907d:goto L49907d;
case 0x499083:c.instructions+=2;goto B499083;
case 0x499085:c.instructions+=1;goto B499085;
case 0x49908a:goto L49908a;
case 0x49908b:c.instructions+=3;goto B49908b;
case 0x49908c:c.instructions+=2;goto B49908c;
case 0x49908d:c.instructions+=1;goto B49908d;
case 0x499090:goto L499090;
case 0x499095:c.instructions+=1;goto B499095;
case 0x499097:goto L499097;
case 0x49909c:c.instructions+=1;goto B49909c;
case 0x4990a2:goto L4990a2;
case 0x4990a7:c.instructions+=2;goto B4990a7;
case 0x4990a9:c.instructions+=1;goto B4990a9;
case 0x4990ab:goto L4990ab;
case 0x4990b0:c.instructions+=2;goto B4990b0;
case 0x4990b2:c.instructions+=1;goto B4990b2;
case 0x4990b8:goto L4990b8;
case 0x4990bb:c.instructions+=2;goto B4990bb;
case 0x4990bc:c.instructions+=1;goto B4990bc;
case 0x4990c1:goto L4990c1;
case 0x4990c3:c.instructions+=3;goto B4990c3;
case 0x4990c6:c.instructions+=2;goto B4990c6;
case 0x4990c7:c.instructions+=1;goto B4990c7;
case 0x4990cc:goto L4990cc;
case 0x4990cf:c.instructions+=3;goto B4990cf;
case 0x4990d2:c.instructions+=2;goto B4990d2;
case 0x4990d4:c.instructions+=1;goto B4990d4;
case 0x4990da:goto L4990da;
case 0x4990dd:c.instructions+=3;goto B4990dd;
case 0x4990e0:c.instructions+=2;goto B4990e0;
case 0x4990e1:c.instructions+=1;goto B4990e1;
case 0x4990e6:goto L4990e6;
case 0x4990e7:c.instructions+=2;goto B4990e7;
case 0x4990e8:c.instructions+=1;goto B4990e8;
case 0x4990ed:goto L4990ed;
case 0x4990f0:c.instructions+=5;goto B4990f0;
case 0x4990f3:c.instructions+=4;goto B4990f3;
case 0x4990f4:c.instructions+=3;goto B4990f4;
case 0x4990f6:c.instructions+=2;goto B4990f6;
case 0x4990f7:c.instructions+=1;goto B4990f7;
case 0x4990fc:goto L4990fc;
case 0x4990ff:c.instructions+=4;goto B4990ff;
case 0x499100:c.instructions+=3;goto B499100;
case 0x499101:c.instructions+=2;goto B499101;
case 0x499102:c.instructions+=1;goto B499102;
case 0x499105:goto L499105;
case 0x49910a:c.instructions+=2;goto B49910a;
case 0x49910c:c.instructions+=1;goto B49910c;
case 0x49910e:goto L49910e;
case 0x499113:c.instructions+=2;goto B499113;
case 0x499115:c.instructions+=1;goto B499115;
case 0x499117:goto L499117;
case 0x49911a:c.instructions+=2;goto B49911a;
case 0x49911b:c.instructions+=1;goto B49911b;
case 0x499120:goto L499120;
case 0x499123:c.instructions+=3;goto B499123;
case 0x499124:c.instructions+=2;goto B499124;
case 0x499126:c.instructions+=1;goto B499126;
case 0x49912b:goto L49912b;
case 0x49912e:c.instructions+=3;goto B49912e;
case 0x499131:c.instructions+=2;goto B499131;
case 0x499133:c.instructions+=1;goto B499133;
case 0x499135:goto L499135;
case 0x499138:c.instructions+=3;goto B499138;
case 0x49913b:c.instructions+=2;goto B49913b;
case 0x49913c:c.instructions+=1;goto B49913c;
case 0x499141:goto L499141;
case 0x499142:c.instructions+=2;goto B499142;
case 0x499143:c.instructions+=1;goto B499143;
case 0x499148:goto L499148;
case 0x49914b:c.instructions+=5;goto B49914b;
case 0x49914e:c.instructions+=4;goto B49914e;
case 0x49914f:c.instructions+=3;goto B49914f;
case 0x499151:c.instructions+=2;goto B499151;
case 0x499152:c.instructions+=1;goto B499152;
case 0x499157:goto L499157;
case 0x49915a:goto L49915a;
case 0x49915b:c.instructions+=3;goto B49915b;
case 0x49915c:c.instructions+=2;goto B49915c;
case 0x49915d:c.instructions+=1;goto B49915d;
case 0x499160:goto L499160;
case 0x499166:c.instructions+=6;goto B499166;
case 0x499167:c.instructions+=5;goto B499167;
case 0x49916b:c.instructions+=4;goto B49916b;
case 0x49916d:c.instructions+=3;goto B49916d;
case 0x49916e:c.instructions+=2;goto B49916e;
case 0x499170:c.instructions+=1;goto B499170;
case 0x499175:goto L499175;
case 0x49917a:c.instructions+=4;goto B49917a;
case 0x49917e:c.instructions+=3;goto B49917e;
case 0x499183:c.instructions+=2;goto B499183;
case 0x499184:c.instructions+=1;goto B499184;
case 0x499189:goto L499189;
case 0x49918d:c.instructions+=7;goto B49918d;
case 0x499190:c.instructions+=6;goto B499190;
case 0x499191:c.instructions+=5;goto B499191;
case 0x499195:c.instructions+=4;goto B499195;
case 0x499196:c.instructions+=3;goto B499196;
case 0x49919b:c.instructions+=2;goto B49919b;
case 0x49919c:c.instructions+=1;goto B49919c;
case 0x4991a1:goto L4991a1;
case 0x4991a4:c.instructions+=3;goto B4991a4;
case 0x4991a5:c.instructions+=2;goto B4991a5;
case 0x4991ab:c.instructions+=1;goto B4991ab;
case 0x4991b0:goto L4991b0;
case 0x4991b5:c.instructions+=7;goto B4991b5;
case 0x4991bb:c.instructions+=6;goto B4991bb;
case 0x4991bc:c.instructions+=5;goto B4991bc;
case 0x4991bd:c.instructions+=4;goto B4991bd;
case 0x4991bf:c.instructions+=3;goto B4991bf;
case 0x4991c2:c.instructions+=2;goto B4991c2;
case 0x4991c3:c.instructions+=1;goto B4991c3;
case 0x4991c8:goto L4991c8;
case 0x4991c9:c.instructions+=2;goto B4991c9;
case 0x4991ca:c.instructions+=1;goto B4991ca;
case 0x4991cf:goto L4991cf;
case 0x4991d4:c.instructions+=3;goto B4991d4;
case 0x4991d7:c.instructions+=2;goto B4991d7;
case 0x4991d9:c.instructions+=1;goto B4991d9;
case 0x4991df:goto L4991df;
case 0x4991e5:c.instructions+=2;goto B4991e5;
case 0x4991e7:c.instructions+=1;goto B4991e7;
case 0x4991ed:goto L4991ed;
case 0x4991ef:c.instructions+=1;goto B4991ef;
case 0x4991f4:goto L4991f4;
case 0x4991f7:c.instructions+=3;goto B4991f7;
case 0x4991fc:c.instructions+=2;goto B4991fc;
case 0x4991fd:c.instructions+=1;goto B4991fd;
case 0x499202:goto L499202;
case 0x499203:c.instructions+=1;goto B499203;
case 0x499208:goto L499208;
case 0x49920b:c.instructions+=3;goto B49920b;
case 0x499210:c.instructions+=2;goto B499210;
case 0x499211:c.instructions+=1;goto B499211;
case 0x499216:goto L499216;
case 0x499217:c.instructions+=1;goto B499217;
case 0x49921c:goto L49921c;
case 0x49921f:c.instructions+=3;goto B49921f;
case 0x499222:c.instructions+=2;goto B499222;
case 0x499223:c.instructions+=1;goto B499223;
case 0x499228:goto L499228;
case 0x499229:c.instructions+=2;goto B499229;
case 0x49922a:c.instructions+=1;goto B49922a;
case 0x49922f:goto L49922f;
case 0x499230:c.instructions+=1;goto B499230;
case 0x499235:goto L499235;
case 0x499238:c.instructions+=5;goto B499238;
case 0x49923b:c.instructions+=4;goto B49923b;
case 0x49923e:c.instructions+=3;goto B49923e;
case 0x499240:c.instructions+=2;goto B499240;
case 0x499241:c.instructions+=1;goto B499241;
case 0x499246:goto L499246;
case 0x499249:c.instructions+=3;goto B499249;
case 0x49924a:c.instructions+=2;goto B49924a;
case 0x49924b:c.instructions+=1;goto B49924b;
case 0x499250:goto L499250;
case 0x499253:c.instructions+=3;goto B499253;
case 0x499256:c.instructions+=2;goto B499256;
case 0x499257:c.instructions+=1;goto B499257;
case 0x49925c:goto L49925c;
case 0x49925d:c.instructions+=2;goto B49925d;
case 0x49925e:c.instructions+=1;goto B49925e;
case 0x499263:goto L499263;
case 0x499264:c.instructions+=1;goto B499264;
case 0x499269:goto L499269;
case 0x49926c:c.instructions+=5;goto B49926c;
case 0x49926f:c.instructions+=4;goto B49926f;
case 0x499272:c.instructions+=3;goto B499272;
case 0x499274:c.instructions+=2;goto B499274;
case 0x499275:c.instructions+=1;goto B499275;
case 0x49927a:goto L49927a;
case 0x49927d:c.instructions+=3;goto B49927d;
case 0x49927e:c.instructions+=2;goto B49927e;
case 0x49927f:c.instructions+=1;goto B49927f;
case 0x499284:goto L499284;
case 0x499287:c.instructions+=3;goto B499287;
case 0x49928c:c.instructions+=2;goto B49928c;
case 0x49928d:c.instructions+=1;goto B49928d;
case 0x499292:goto L499292;
case 0x499293:c.instructions+=1;goto B499293;
case 0x499298:goto L499298;
case 0x49929b:c.instructions+=3;goto B49929b;
case 0x49929e:c.instructions+=2;goto B49929e;
case 0x49929f:c.instructions+=1;goto B49929f;
case 0x4992a4:goto L4992a4;
case 0x4992a5:c.instructions+=2;goto B4992a5;
case 0x4992a6:c.instructions+=1;goto B4992a6;
case 0x4992ab:goto L4992ab;
case 0x4992ac:c.instructions+=1;goto B4992ac;
case 0x4992b1:goto L4992b1;
case 0x4992b4:c.instructions+=5;goto B4992b4;
case 0x4992b7:c.instructions+=4;goto B4992b7;
case 0x4992ba:c.instructions+=3;goto B4992ba;
case 0x4992bc:c.instructions+=2;goto B4992bc;
case 0x4992bd:c.instructions+=1;goto B4992bd;
case 0x4992c2:goto L4992c2;
case 0x4992c5:c.instructions+=3;goto B4992c5;
case 0x4992c6:c.instructions+=2;goto B4992c6;
case 0x4992c7:c.instructions+=1;goto B4992c7;
case 0x4992cc:goto L4992cc;
case 0x4992cf:c.instructions+=3;goto B4992cf;
case 0x4992d2:c.instructions+=2;goto B4992d2;
case 0x4992d3:c.instructions+=1;goto B4992d3;
case 0x4992d8:goto L4992d8;
case 0x4992db:c.instructions+=4;goto B4992db;
case 0x4992e0:c.instructions+=3;goto B4992e0;
case 0x4992e1:c.instructions+=2;goto B4992e1;
case 0x4992e2:c.instructions+=1;goto B4992e2;
case 0x4992e7:goto L4992e7;
case 0x4992ea:c.instructions+=2;goto B4992ea;
case 0x4992eb:c.instructions+=1;goto B4992eb;
case 0x4992f0:goto L4992f0;
case 0x4992f3:c.instructions+=5;goto B4992f3;
case 0x4992f5:c.instructions+=4;goto B4992f5;
case 0x4992fa:c.instructions+=3;goto B4992fa;
case 0x4992ff:c.instructions+=2;goto B4992ff;
case 0x499300:c.instructions+=1;goto B499300;
case 0x499305:goto L499305;
case 0x499308:c.instructions+=6;goto B499308;
case 0x49930b:c.instructions+=5;goto B49930b;
case 0x49930e:c.instructions+=4;goto B49930e;
case 0x499310:c.instructions+=3;goto B499310;
case 0x499315:c.instructions+=2;goto B499315;
case 0x499316:c.instructions+=1;goto B499316;
case 0x49931b:goto L49931b;
case 0x49931e:c.instructions+=3;goto B49931e;
case 0x49931f:c.instructions+=2;goto B49931f;
case 0x499320:c.instructions+=1;goto B499320;
case 0x499325:goto L499325;
case 0x499328:c.instructions+=5;goto B499328;
case 0x49932d:c.instructions+=4;goto B49932d;
case 0x499334:c.instructions+=3;goto B499334;
case 0x499335:c.instructions+=2;goto B499335;
case 0x49933a:c.instructions+=1;goto B49933a;
case 0x49933f:goto L49933f;
case 0x499344:c.instructions+=4;goto B499344;
case 0x499348:c.instructions+=3;goto B499348;
case 0x499349:c.instructions+=2;goto B499349;
case 0x49934e:c.instructions+=1;goto B49934e;
case 0x499353:goto L499353;
case 0x499355:goto L499355;
case 0x499357:c.instructions+=1;goto B499357;
case 0x499359:goto L499359;
case 0x49935e:c.instructions+=2;goto B49935e;
case 0x499360:c.instructions+=1;goto B499360;
case 0x499362:goto L499362;
case 0x499367:c.instructions+=4;goto B499367;
case 0x49936e:c.instructions+=3;goto B49936e;
case 0x49936f:c.instructions+=2;goto B49936f;
case 0x499374:c.instructions+=1;goto B499374;
case 0x499379:goto L499379;
case 0x49937e:c.instructions+=4;goto B49937e;
case 0x499382:c.instructions+=3;goto B499382;
case 0x499383:c.instructions+=2;goto B499383;
case 0x499388:c.instructions+=1;goto B499388;
case 0x49938d:goto L49938d;
case 0x499390:c.instructions+=6;goto B499390;
case 0x499397:c.instructions+=5;goto B499397;
case 0x499398:c.instructions+=4;goto B499398;
case 0x49939d:c.instructions+=3;goto B49939d;
case 0x4993a2:c.instructions+=2;goto B4993a2;
case 0x4993a3:c.instructions+=1;goto B4993a3;
case 0x4993a8:goto L4993a8;
case 0x4993ab:c.instructions+=6;goto B4993ab;
case 0x4993af:c.instructions+=5;goto B4993af;
case 0x4993b0:c.instructions+=4;goto B4993b0;
case 0x4993b5:c.instructions+=3;goto B4993b5;
case 0x4993ba:c.instructions+=2;goto B4993ba;
case 0x4993bb:c.instructions+=1;goto B4993bb;
case 0x4993c0:goto L4993c0;
case 0x4993c2:c.instructions+=2;goto B4993c2;
case 0x4993c5:c.instructions+=1;goto B4993c5;
case 0x4993ca:goto L4993ca;
case 0x4993cb:c.instructions+=3;goto B4993cb;
case 0x4993cc:c.instructions+=2;goto B4993cc;
case 0x4993d2:c.instructions+=1;goto B4993d2;
case 0x4993e0:goto L4993e0;
case 0x4993e2:c.instructions+=12;goto B4993e2;
case 0x4993e7:c.instructions+=11;goto B4993e7;
case 0x4993ed:c.instructions+=10;goto B4993ed;
case 0x4993ee:c.instructions+=9;goto B4993ee;
case 0x4993f5:c.instructions+=8;goto B4993f5;
case 0x4993f6:c.instructions+=7;goto B4993f6;
case 0x4993f7:c.instructions+=6;goto B4993f7;
case 0x4993f9:c.instructions+=5;goto B4993f9;
case 0x4993fd:c.instructions+=4;goto B4993fd;
case 0x499403:c.instructions+=3;goto B499403;
case 0x499408:c.instructions+=2;goto B499408;
case 0x499410:c.instructions+=1;goto B499410;
case 0x499415:goto L499415;
case 0x499417:c.instructions+=1;goto B499417;
case 0x499419:goto L499419;
case 0x49941e:c.instructions+=2;goto B49941e;
case 0x499420:c.instructions+=1;goto B499420;
case 0x499422:goto L499422;
case 0x499427:c.instructions+=1;goto B499427;
case 0x49942c:goto L49942c;
case 0x49942f:c.instructions+=2;goto B49942f;
case 0x499431:c.instructions+=1;goto B499431;
case 0x499433:goto L499433;
case 0x499438:c.instructions+=1;goto B499438;
case 0x49943d:goto L49943d;
case 0x49943f:c.instructions+=2;goto B49943f;
case 0x499447:c.instructions+=1;goto B499447;
case 0x49944c:goto L49944c;
case 0x499450:c.instructions+=4;goto B499450;
case 0x499451:c.instructions+=3;goto B499451;
case 0x499458:c.instructions+=2;goto B499458;
case 0x49945b:c.instructions+=1;goto B49945b;
case 0x499460:goto L499460;
case 0x499465:c.instructions+=1;goto B499465;
case 0x499470:goto L499470;
case 0x499471:c.instructions+=12;goto B499471;
case 0x499473:c.instructions+=11;goto B499473;
case 0x499476:c.instructions+=10;goto B499476;
case 0x49947c:c.instructions+=9;goto B49947c;
case 0x499481:c.instructions+=8;goto B499481;
case 0x499486:c.instructions+=7;goto B499486;
case 0x499488:c.instructions+=6;goto B499488;
case 0x49948a:c.instructions+=5;goto B49948a;
case 0x49948c:c.instructions+=4;goto B49948c;
case 0x49948d:c.instructions+=3;goto B49948d;
case 0x499492:c.instructions+=2;goto B499492;
case 0x499497:c.instructions+=1;goto B499497;
case 0x49949c:goto L49949c;
case 0x4994a1:c.instructions+=2;goto B4994a1;
case 0x4994a3:c.instructions+=1;goto B4994a3;
case 0x4994a9:goto L4994a9;
case 0x4994ae:c.instructions+=2;goto B4994ae;
case 0x4994b0:c.instructions+=1;goto B4994b0;
case 0x4994b6:goto L4994b6;
case 0x4994bb:c.instructions+=1;goto B4994bb;
case 0x4994c0:goto L4994c0;
case 0x4994c2:c.instructions+=1;goto B4994c2;
case 0x4994c8:goto L4994c8;
case 0x4994cd:c.instructions+=9;goto B4994cd;
case 0x4994d3:c.instructions+=8;goto B4994d3;
case 0x4994d5:c.instructions+=7;goto B4994d5;
case 0x4994d7:c.instructions+=6;goto B4994d7;
case 0x4994d9:c.instructions+=5;goto B4994d9;
case 0x4994e0:c.instructions+=4;goto B4994e0;
case 0x4994e3:c.instructions+=3;goto B4994e3;
case 0x4994e4:c.instructions+=2;goto B4994e4;
case 0x4994e9:c.instructions+=1;goto B4994e9;
case 0x4994ee:goto L4994ee;
case 0x4994f4:c.instructions+=4;goto B4994f4;
case 0x4994f7:c.instructions+=3;goto B4994f7;
case 0x4994fc:c.instructions+=2;goto B4994fc;
case 0x499501:c.instructions+=1;goto B499501;
case 0x499506:goto L499506;
case 0x499508:c.instructions+=1;goto B499508;
case 0x49950a:goto L49950a;
case 0x49950f:c.instructions+=1;goto B49950f;
case 0x499514:goto L499514;
case 0x499519:c.instructions+=1;goto B499519;
case 0x49951e:goto L49951e;
case 0x499523:goto L499523;
case 0x499525:c.instructions+=1;goto B499525;
case 0x499527:goto L499527;
case 0x49952c:goto L49952c;
case 0x499531:goto L499531;
case 0x499533:c.instructions+=1;goto B499533;
case 0x499535:goto L499535;
case 0x49953a:c.instructions+=1;goto B49953a;
case 0x49953f:goto L49953f;
case 0x499545:c.instructions+=2;goto B499545;
case 0x499547:c.instructions+=1;goto B499547;
case 0x49954c:goto L49954c;
case 0x49954e:c.instructions+=2;goto B49954e;
case 0x49954f:c.instructions+=1;goto B49954f;
case 0x499550:goto L499550;
case 0x499557:c.instructions+=3;goto B499557;
case 0x499559:c.instructions+=2;goto B499559;
case 0x49955a:c.instructions+=1;goto B49955a;
case 0x499560:goto L499560;
case 0x499565:c.instructions+=1;goto B499565;
case 0x49956a:goto L49956a;
case 0x499570:c.instructions+=2;goto B499570;
case 0x499573:c.instructions+=1;goto B499573;
case 0x499575:goto L499575;
case 0x499577:c.instructions+=1;goto B499577;
case 0x49957c:goto L49957c;
case 0x499583:c.instructions+=1;goto B499583;
case 0x499584:goto L499584;
case 0x499586:c.instructions+=2;goto B499586;
case 0x499588:c.instructions+=1;goto B499588;
case 0x49958d:goto L49958d;
case 0x499594:c.instructions+=1;goto B499594;
case 0x4995a0:goto L4995a0;
case 0x4995a5:c.instructions+=3;goto B4995a5;
case 0x4995a7:c.instructions+=2;goto B4995a7;
case 0x4995a8:c.instructions+=1;goto B4995a8;
case 0x4995aa:goto L4995aa;
case 0x4995af:c.instructions+=2;goto B4995af;
case 0x4995b1:c.instructions+=1;goto B4995b1;
case 0x4995b3:goto L4995b3;
case 0x4995b8:c.instructions+=4;goto B4995b8;
case 0x4995bb:c.instructions+=3;goto B4995bb;
case 0x4995bc:c.instructions+=2;goto B4995bc;
case 0x4995c2:c.instructions+=1;goto B4995c2;
case 0x4995c7:goto L4995c7;
case 0x4995cd:c.instructions+=2;goto B4995cd;
case 0x4995d2:c.instructions+=1;goto B4995d2;
case 0x4995d7:goto L4995d7;
case 0x4995da:c.instructions+=3;goto B4995da;
case 0x4995dc:c.instructions+=2;goto B4995dc;
case 0x4995dd:c.instructions+=1;goto B4995dd;
case 0x4995df:goto L4995df;
case 0x4995e4:c.instructions+=1;goto B4995e4;
case 0x4995e9:goto L4995e9;
case 0x4995ec:c.instructions+=2;goto B4995ec;
case 0x4995ed:c.instructions+=1;goto B4995ed;
case 0x4995ee:goto L4995ee;
case 0x4995f0:c.instructions+=1;goto B4995f0;
case 0x4995f5:goto L4995f5;
case 0x4995f8:c.instructions+=2;goto B4995f8;
case 0x4995f9:c.instructions+=1;goto B4995f9;
case 0x4995fa:goto L4995fa;
case 0x4995ff:c.instructions+=1;goto B4995ff;
case 0x499604:goto L499604;
case 0x49960a:c.instructions+=2;goto B49960a;
case 0x49960d:c.instructions+=1;goto B49960d;
case 0x49960f:goto L49960f;
case 0x499611:c.instructions+=1;goto B499611;
case 0x499616:goto L499616;
case 0x49961d:c.instructions+=2;goto B49961d;
case 0x49961e:c.instructions+=1;goto B49961e;
case 0x49961f:goto L49961f;
case 0x499621:c.instructions+=2;goto B499621;
case 0x499623:c.instructions+=1;goto B499623;
case 0x499628:goto L499628;
case 0x49962f:c.instructions+=2;goto B49962f;
case 0x499630:c.instructions+=1;goto B499630;
case 0x499640:goto L499640;
case 0x499645:c.instructions+=2;goto B499645;
case 0x499647:c.instructions+=1;goto B499647;
case 0x499649:goto L499649;
case 0x49964a:c.instructions+=3;goto B49964a;
case 0x499650:c.instructions+=2;goto B499650;
case 0x499652:c.instructions+=1;goto B499652;
case 0x499654:goto L499654;
case 0x499655:c.instructions+=2;goto B499655;
case 0x49965a:c.instructions+=1;goto B49965a;
case 0x49965f:goto L49965f;
case 0x499662:c.instructions+=2;goto B499662;
case 0x499664:c.instructions+=1;goto B499664;
case 0x499666:goto L499666;
case 0x499668:c.instructions+=1;goto B499668;
case 0x49966a:goto L49966a;
case 0x49966c:c.instructions+=1;goto B49966c;
case 0x49966e:goto L49966e;
case 0x499670:goto L499670;
case 0x499675:goto L499675;
case 0x499678:c.instructions+=2;goto B499678;
case 0x49967a:c.instructions+=1;goto B49967a;
case 0x49967c:goto L49967c;
case 0x499681:goto L499681;
case 0x499682:goto L499682;
case 0x499684:c.instructions+=1;goto B499684;
case 0x499690:goto L499690;
case 0x499691:c.instructions+=7;goto B499691;
case 0x499693:c.instructions+=6;goto B499693;
case 0x499696:c.instructions+=5;goto B499696;
case 0x49969b:c.instructions+=4;goto B49969b;
case 0x49969c:c.instructions+=3;goto B49969c;
case 0x49969d:c.instructions+=2;goto B49969d;
case 0x49969f:c.instructions+=1;goto B49969f;
case 0x4996a5:goto L4996a5;
case 0x4996ab:goto L4996ab;
case 0x4996b0:c.instructions+=1;goto B4996b0;
case 0x4996b2:goto L4996b2;
case 0x4996b7:c.instructions+=1;goto B4996b7;
case 0x4996bd:goto L4996bd;
case 0x4996c0:c.instructions+=3;goto B4996c0;
case 0x4996c2:c.instructions+=2;goto B4996c2;
case 0x4996c3:c.instructions+=1;goto B4996c3;
case 0x4996c8:goto L4996c8;
case 0x4996cb:c.instructions+=3;goto B4996cb;
case 0x4996ce:c.instructions+=2;goto B4996ce;
case 0x4996cf:c.instructions+=1;goto B4996cf;
case 0x4996d4:goto L4996d4;
case 0x4996d5:c.instructions+=2;goto B4996d5;
case 0x4996d6:c.instructions+=1;goto B4996d6;
case 0x4996db:goto L4996db;
case 0x4996de:c.instructions+=4;goto B4996de;
case 0x4996df:c.instructions+=3;goto B4996df;
case 0x4996e0:c.instructions+=2;goto B4996e0;
case 0x4996e1:c.instructions+=1;goto B4996e1;
case 0x4996e4:goto L4996e4;
case 0x4996e7:c.instructions+=3;goto B4996e7;
case 0x4996ea:c.instructions+=2;goto B4996ea;
case 0x4996ef:c.instructions+=1;goto B4996ef;
case 0x4996f1:goto L4996f1;
case 0x4996f6:c.instructions+=1;goto B4996f6;
case 0x4996fc:goto L4996fc;
case 0x499701:c.instructions+=1;goto B499701;
case 0x499706:goto L499706;
case 0x499708:c.instructions+=1;goto B499708;
case 0x49970a:goto L49970a;
case 0x49970f:c.instructions+=2;goto B49970f;
case 0x499711:c.instructions+=1;goto B499711;
case 0x499713:goto L499713;
case 0x499718:c.instructions+=1;goto B499718;
case 0x49971d:goto L49971d;
case 0x499720:c.instructions+=5;goto B499720;
case 0x499723:c.instructions+=4;goto B499723;
case 0x499724:c.instructions+=3;goto B499724;
case 0x499726:c.instructions+=2;goto B499726;
case 0x499727:c.instructions+=1;goto B499727;
case 0x49972c:goto L49972c;
case 0x49972f:c.instructions+=4;goto B49972f;
case 0x499730:c.instructions+=3;goto B499730;
case 0x499731:c.instructions+=2;goto B499731;
case 0x499732:c.instructions+=1;goto B499732;
case 0x499735:goto L499735;
case 0x499737:c.instructions+=1;goto B499737;
case 0x49973c:goto L49973c;
case 0x49973d:c.instructions+=3;goto B49973d;
case 0x49973e:c.instructions+=2;goto B49973e;
case 0x49973f:c.instructions+=1;goto B49973f;
case 0x499742:goto L499742;
case 0x499747:c.instructions+=1;goto B499747;
case 0x49974c:goto L49974c;
case 0x49974e:c.instructions+=1;goto B49974e;
case 0x499750:goto L499750;
case 0x499755:c.instructions+=2;goto B499755;
case 0x499757:c.instructions+=1;goto B499757;
case 0x499759:goto L499759;
case 0x49975e:c.instructions+=1;goto B49975e;
case 0x499763:goto L499763;
case 0x499769:c.instructions+=2;goto B499769;
case 0x49976b:c.instructions+=1;goto B49976b;
case 0x499770:goto L499770;
case 0x499773:c.instructions+=5;goto B499773;
case 0x499776:c.instructions+=4;goto B499776;
case 0x499777:c.instructions+=3;goto B499777;
case 0x499779:c.instructions+=2;goto B499779;
case 0x49977a:c.instructions+=1;goto B49977a;
case 0x49977f:goto L49977f;
case 0x499782:c.instructions+=4;goto B499782;
case 0x499783:c.instructions+=3;goto B499783;
case 0x499784:c.instructions+=2;goto B499784;
case 0x499785:c.instructions+=1;goto B499785;
case 0x499788:goto L499788;
case 0x49978c:c.instructions+=8;goto B49978c;
case 0x499791:c.instructions+=7;goto B499791;
case 0x499797:c.instructions+=6;goto B499797;
case 0x499799:c.instructions+=5;goto B499799;
case 0x49979b:c.instructions+=4;goto B49979b;
case 0x49979d:c.instructions+=3;goto B49979d;
case 0x49979e:c.instructions+=2;goto B49979e;
case 0x4997a3:c.instructions+=1;goto B4997a3;
case 0x4997a8:goto L4997a8;
case 0x4997ae:c.instructions+=2;goto B4997ae;
case 0x4997b0:c.instructions+=1;goto B4997b0;
case 0x4997b5:goto L4997b5;
case 0x4997b8:c.instructions+=5;goto B4997b8;
case 0x4997bb:c.instructions+=4;goto B4997bb;
case 0x4997bc:c.instructions+=3;goto B4997bc;
case 0x4997be:c.instructions+=2;goto B4997be;
case 0x4997bf:c.instructions+=1;goto B4997bf;
case 0x4997c4:goto L4997c4;
case 0x4997c7:c.instructions+=4;goto B4997c7;
case 0x4997c8:c.instructions+=3;goto B4997c8;
case 0x4997c9:c.instructions+=2;goto B4997c9;
case 0x4997ca:c.instructions+=1;goto B4997ca;
case 0x4997cd:goto L4997cd;
case 0x4997d2:c.instructions+=1;goto B4997d2;
case 0x4997d7:goto L4997d7;
case 0x4997d9:c.instructions+=1;goto B4997d9;
case 0x4997db:goto L4997db;
case 0x4997e0:c.instructions+=2;goto B4997e0;
case 0x4997e2:c.instructions+=1;goto B4997e2;
case 0x4997e4:goto L4997e4;
case 0x4997e9:c.instructions+=1;goto B4997e9;
case 0x4997ee:goto L4997ee;
case 0x4997f4:c.instructions+=2;goto B4997f4;
case 0x4997f6:c.instructions+=1;goto B4997f6;
case 0x4997fb:goto L4997fb;
case 0x4997fe:c.instructions+=5;goto B4997fe;
case 0x499801:c.instructions+=4;goto B499801;
case 0x499802:c.instructions+=3;goto B499802;
case 0x499804:c.instructions+=2;goto B499804;
case 0x499805:c.instructions+=1;goto B499805;
case 0x49980a:goto L49980a;
case 0x49980d:c.instructions+=4;goto B49980d;
case 0x49980e:c.instructions+=3;goto B49980e;
case 0x49980f:c.instructions+=2;goto B49980f;
case 0x499810:c.instructions+=1;goto B499810;
case 0x499813:goto L499813;
case 0x499817:c.instructions+=3;goto B499817;
case 0x49981d:c.instructions+=2;goto B49981d;
case 0x49981f:c.instructions+=1;goto B49981f;
case 0x499824:goto L499824;
case 0x499825:c.instructions+=3;goto B499825;
case 0x499826:c.instructions+=2;goto B499826;
case 0x499827:c.instructions+=1;goto B499827;
case 0x49982a:goto L49982a;
case 0x49982f:c.instructions+=1;goto B49982f;
case 0x499831:goto L499831;
case 0x499836:c.instructions+=1;goto B499836;
case 0x49983c:goto L49983c;
case 0x49983f:c.instructions+=2;goto B49983f;
case 0x499840:c.instructions+=1;goto B499840;
case 0x499845:goto L499845;
case 0x499848:c.instructions+=3;goto B499848;
case 0x499849:c.instructions+=2;goto B499849;
case 0x49984b:c.instructions+=1;goto B49984b;
case 0x499850:goto L499850;
case 0x499853:c.instructions+=3;goto B499853;
case 0x499856:c.instructions+=2;goto B499856;
case 0x499858:c.instructions+=1;goto B499858;
case 0x49985a:goto L49985a;
case 0x49985d:c.instructions+=3;goto B49985d;
case 0x499860:c.instructions+=2;goto B499860;
case 0x499861:c.instructions+=1;goto B499861;
case 0x499866:goto L499866;
case 0x499867:c.instructions+=2;goto B499867;
case 0x499868:c.instructions+=1;goto B499868;
case 0x49986d:goto L49986d;
case 0x499870:goto L499870;
case 0x499873:c.instructions+=5;goto B499873;
case 0x499876:c.instructions+=4;goto B499876;
case 0x499877:c.instructions+=3;goto B499877;
case 0x499879:c.instructions+=2;goto B499879;
case 0x49987a:c.instructions+=1;goto B49987a;
case 0x49987f:goto L49987f;
case 0x499882:c.instructions+=4;goto B499882;
case 0x499883:c.instructions+=3;goto B499883;
case 0x499884:c.instructions+=2;goto B499884;
case 0x499885:c.instructions+=1;goto B499885;
case 0x499888:goto L499888;
case 0x49988b:c.instructions+=2;goto B49988b;
case 0x49988c:c.instructions+=1;goto B49988c;
case 0x499891:goto L499891;
case 0x499893:c.instructions+=3;goto B499893;
case 0x499896:c.instructions+=2;goto B499896;
case 0x499897:c.instructions+=1;goto B499897;
case 0x49989c:goto L49989c;
case 0x49989f:c.instructions+=3;goto B49989f;
case 0x4998a2:c.instructions+=2;goto B4998a2;
case 0x4998a4:c.instructions+=1;goto B4998a4;
case 0x4998a6:goto L4998a6;
case 0x4998a9:c.instructions+=3;goto B4998a9;
case 0x4998ac:c.instructions+=2;goto B4998ac;
case 0x4998ad:c.instructions+=1;goto B4998ad;
case 0x4998b2:goto L4998b2;
case 0x4998b3:c.instructions+=2;goto B4998b3;
case 0x4998b4:c.instructions+=1;goto B4998b4;
case 0x4998b9:goto L4998b9;
case 0x4998bc:goto L4998bc;
case 0x4998bf:c.instructions+=5;goto B4998bf;
case 0x4998c2:c.instructions+=4;goto B4998c2;
case 0x4998c3:c.instructions+=3;goto B4998c3;
case 0x4998c5:c.instructions+=2;goto B4998c5;
case 0x4998c6:c.instructions+=1;goto B4998c6;
case 0x4998cb:goto L4998cb;
case 0x4998ce:goto L4998ce;
case 0x4998cf:c.instructions+=3;goto B4998cf;
case 0x4998d0:c.instructions+=2;goto B4998d0;
case 0x4998d1:c.instructions+=1;goto B4998d1;
case 0x4998e0:goto L4998e0;
case 0x4998e5:c.instructions+=7;goto B4998e5;
case 0x4998eb:c.instructions+=6;goto B4998eb;
case 0x4998ec:c.instructions+=5;goto B4998ec;
case 0x4998ed:c.instructions+=4;goto B4998ed;
case 0x4998ef:c.instructions+=3;goto B4998ef;
case 0x4998f2:c.instructions+=2;goto B4998f2;
case 0x4998f3:c.instructions+=1;goto B4998f3;
case 0x4998f8:goto L4998f8;
case 0x4998f9:c.instructions+=2;goto B4998f9;
case 0x4998fa:c.instructions+=1;goto B4998fa;
case 0x4998ff:goto L4998ff;
case 0x499902:c.instructions+=2;goto B499902;
case 0x499907:c.instructions+=1;goto B499907;
case 0x49990c:goto L49990c;
case 0x49990e:c.instructions+=1;goto B49990e;
case 0x499914:goto L499914;
case 0x499919:c.instructions+=2;goto B499919;
case 0x49991b:c.instructions+=1;goto B49991b;
case 0x49991d:goto L49991d;
case 0x499920:c.instructions+=4;goto B499920;
case 0x499925:c.instructions+=3;goto B499925;
case 0x49992a:c.instructions+=2;goto B49992a;
case 0x49992b:c.instructions+=1;goto B49992b;
case 0x499930:goto L499930;
case 0x499933:c.instructions+=2;goto B499933;
case 0x499934:c.instructions+=1;goto B499934;
case 0x499939:goto L499939;
case 0x49993c:c.instructions+=5;goto B49993c;
case 0x49993f:c.instructions+=4;goto B49993f;
case 0x499944:c.instructions+=3;goto B499944;
case 0x499949:c.instructions+=2;goto B499949;
case 0x49994a:c.instructions+=1;goto B49994a;
case 0x49994f:goto L49994f;
case 0x499952:c.instructions+=2;goto B499952;
case 0x499953:c.instructions+=1;goto B499953;
case 0x499958:goto L499958;
case 0x49995b:c.instructions+=4;goto B49995b;
case 0x499960:c.instructions+=3;goto B499960;
case 0x499965:c.instructions+=2;goto B499965;
case 0x499966:c.instructions+=1;goto B499966;
case 0x49996b:goto L49996b;
case 0x49996e:c.instructions+=4;goto B49996e;
case 0x49996f:c.instructions+=3;goto B49996f;
case 0x499970:c.instructions+=2;goto B499970;
case 0x499976:c.instructions+=1;goto B499976;
case 0x499977:goto L499977;
case 0x49997d:c.instructions+=6;goto B49997d;
case 0x499983:c.instructions+=5;goto B499983;
case 0x499986:c.instructions+=4;goto B499986;
case 0x499988:c.instructions+=3;goto B499988;
case 0x49998a:c.instructions+=2;goto B49998a;
case 0x49998c:c.instructions+=1;goto B49998c;
case 0x499991:goto L499991;
case 0x499992:c.instructions+=3;goto B499992;
case 0x499997:c.instructions+=2;goto B499997;
case 0x499998:c.instructions+=1;goto B499998;
case 0x49999d:goto L49999d;
case 0x4999a0:c.instructions+=2;goto B4999a0;
case 0x4999a1:c.instructions+=1;goto B4999a1;
case 0x4999a6:goto L4999a6;
case 0x4999a9:c.instructions+=5;goto B4999a9;
case 0x4999ae:c.instructions+=4;goto B4999ae;
case 0x4999b2:c.instructions+=3;goto B4999b2;
case 0x4999b3:c.instructions+=2;goto B4999b3;
case 0x4999b8:c.instructions+=1;goto B4999b8;
case 0x4999bd:goto L4999bd;
case 0x4999c0:c.instructions+=6;goto B4999c0;
case 0x4999c4:c.instructions+=5;goto B4999c4;
case 0x4999c5:c.instructions+=4;goto B4999c5;
case 0x4999ca:c.instructions+=3;goto B4999ca;
case 0x4999cf:c.instructions+=2;goto B4999cf;
case 0x4999d0:c.instructions+=1;goto B4999d0;
case 0x4999d5:goto L4999d5;
case 0x4999d8:c.instructions+=4;goto B4999d8;
case 0x4999d9:c.instructions+=3;goto B4999d9;
case 0x4999da:c.instructions+=2;goto B4999da;
case 0x4999e0:c.instructions+=1;goto B4999e0;
case 0x4999e1:goto L4999e1;
case 0x4999e6:c.instructions+=2;goto B4999e6;
case 0x4999e8:c.instructions+=1;goto B4999e8;
case 0x4999ea:goto L4999ea;
case 0x4999f0:c.instructions+=2;goto B4999f0;
case 0x4999f2:c.instructions+=1;goto B4999f2;
case 0x4999f4:goto L4999f4;
case 0x4999f5:c.instructions+=3;goto B4999f5;
case 0x4999f8:c.instructions+=2;goto B4999f8;
case 0x4999fa:c.instructions+=1;goto B4999fa;
case 0x4999ff:goto L4999ff;
case 0x499a00:c.instructions+=3;goto B499a00;
case 0x499a05:c.instructions+=2;goto B499a05;
case 0x499a06:c.instructions+=1;goto B499a06;
case 0x499a0b:goto L499a0b;
case 0x499a0e:c.instructions+=2;goto B499a0e;
case 0x499a0f:c.instructions+=1;goto B499a0f;
case 0x499a14:goto L499a14;
case 0x499a17:c.instructions+=3;goto B499a17;
case 0x499a1a:c.instructions+=2;goto B499a1a;
case 0x499a1c:c.instructions+=1;goto B499a1c;
case 0x499a21:goto L499a21;
case 0x499a22:c.instructions+=3;goto B499a22;
case 0x499a27:c.instructions+=2;goto B499a27;
case 0x499a28:c.instructions+=1;goto B499a28;
case 0x499a2d:goto L499a2d;
case 0x499a30:c.instructions+=2;goto B499a30;
case 0x499a31:c.instructions+=1;goto B499a31;
case 0x499a36:goto L499a36;
case 0x499a39:c.instructions+=5;goto B499a39;
case 0x499a3c:c.instructions+=4;goto B499a3c;
case 0x499a3f:c.instructions+=3;goto B499a3f;
case 0x499a41:c.instructions+=2;goto B499a41;
case 0x499a42:c.instructions+=1;goto B499a42;
case 0x499a44:goto L499a44;
case 0x499a49:c.instructions+=1;goto B499a49;
case 0x499a4b:goto L499a4b;
case 0x499a50:goto L499a50;
case 0x499a55:c.instructions+=2;goto B499a55;
case 0x499a56:c.instructions+=1;goto B499a56;
case 0x499a5b:goto L499a5b;
case 0x499a5e:c.instructions+=2;goto B499a5e;
case 0x499a5f:c.instructions+=1;goto B499a5f;
case 0x499a64:goto L499a64;
case 0x499a67:goto L499a67;
case 0x499a68:c.instructions+=3;goto B499a68;
case 0x499a69:c.instructions+=2;goto B499a69;
case 0x499a6f:c.instructions+=1;goto B499a6f;
case 0x499a70:goto L499a70;
case 0x499a72:c.instructions+=13;goto B499a72;
case 0x499a77:c.instructions+=12;goto B499a77;
case 0x499a7d:c.instructions+=11;goto B499a7d;
case 0x499a7e:c.instructions+=10;goto B499a7e;
case 0x499a85:c.instructions+=9;goto B499a85;
case 0x499a86:c.instructions+=8;goto B499a86;
case 0x499a87:c.instructions+=7;goto B499a87;
case 0x499a89:c.instructions+=6;goto B499a89;
case 0x499a8d:c.instructions+=5;goto B499a8d;
case 0x499a93:c.instructions+=4;goto B499a93;
case 0x499a96:c.instructions+=3;goto B499a96;
case 0x499a98:c.instructions+=2;goto B499a98;
case 0x499aa0:c.instructions+=1;goto B499aa0;
case 0x499aa2:goto L499aa2;
case 0x499aa5:c.instructions+=2;goto B499aa5;
case 0x499aa7:c.instructions+=1;goto B499aa7;
case 0x499aa9:goto L499aa9;
case 0x499ab0:goto L499ab0;
case 0x499ab5:goto L499ab5;
case 0x499ab8:c.instructions+=2;goto B499ab8;
case 0x499aba:c.instructions+=1;goto B499aba;
case 0x499abc:goto L499abc;
case 0x499abf:c.instructions+=2;goto B499abf;
case 0x499ac1:c.instructions+=1;goto B499ac1;
case 0x499ac3:goto L499ac3;
case 0x499ac5:c.instructions+=1;goto B499ac5;
case 0x499aca:goto L499aca;
case 0x499acd:c.instructions+=2;goto B499acd;
case 0x499ace:c.instructions+=1;goto B499ace;
case 0x499ad3:goto L499ad3;
case 0x499ad6:c.instructions+=5;goto B499ad6;
case 0x499adc:c.instructions+=4;goto B499adc;
case 0x499adf:c.instructions+=3;goto B499adf;
case 0x499ae0:c.instructions+=2;goto B499ae0;
case 0x499ae5:c.instructions+=1;goto B499ae5;
case 0x499aea:goto L499aea;
case 0x499aec:c.instructions+=2;goto B499aec;
case 0x499af4:c.instructions+=1;goto B499af4;
case 0x499af9:goto L499af9;
case 0x499afd:c.instructions+=4;goto B499afd;
case 0x499afe:c.instructions+=3;goto B499afe;
case 0x499b05:c.instructions+=2;goto B499b05;
case 0x499b08:c.instructions+=1;goto B499b08;
case 0x499b10:goto L499b10;
case 0x499b15:c.instructions+=7;goto B499b15;
case 0x499b1b:c.instructions+=6;goto B499b1b;
case 0x499b1d:c.instructions+=5;goto B499b1d;
case 0x499b1f:c.instructions+=4;goto B499b1f;
case 0x499b21:c.instructions+=3;goto B499b21;
case 0x499b22:c.instructions+=2;goto B499b22;
case 0x499b27:c.instructions+=1;goto B499b27;
case 0x499b2c:goto L499b2c;
case 0x499b32:c.instructions+=2;goto B499b32;
case 0x499b34:c.instructions+=1;goto B499b34;
case 0x499b39:goto L499b39;
case 0x499b3f:c.instructions+=3;goto B499b3f;
case 0x499b41:c.instructions+=2;goto B499b41;
case 0x499b43:c.instructions+=1;goto B499b43;
case 0x499b48:goto L499b48;
case 0x499b50:goto L499b50;
case 0x499b51:c.instructions+=5;goto B499b51;
case 0x499b53:c.instructions+=4;goto B499b53;
case 0x499b56:c.instructions+=3;goto B499b56;
case 0x499b5b:c.instructions+=2;goto B499b5b;
case 0x499b5c:c.instructions+=1;goto B499b5c;
case 0x499b61:goto L499b61;
case 0x499b62:c.instructions+=1;goto B499b62;
case 0x499b67:goto L499b67;
case 0x499b6c:c.instructions+=3;goto B499b6c;
case 0x499b6f:c.instructions+=2;goto B499b6f;
case 0x499b71:c.instructions+=1;goto B499b71;
case 0x499b73:goto L499b73;
case 0x499b74:c.instructions+=3;goto B499b74;
case 0x499b7a:c.instructions+=2;goto B499b7a;
case 0x499b7c:c.instructions+=1;goto B499b7c;
case 0x499b7e:goto L499b7e;
case 0x499b80:c.instructions+=1;goto B499b80;
case 0x499b85:goto L499b85;
case 0x499b88:c.instructions+=1;goto B499b88;
case 0x499b8a:goto L499b8a;
case 0x499b8d:c.instructions+=3;goto B499b8d;
case 0x499b8e:c.instructions+=2;goto B499b8e;
case 0x499b8f:c.instructions+=1;goto B499b8f;
case 0x499b94:goto L499b94;
case 0x499b97:goto L499b97;
case 0x499b98:goto L499b98;
case 0x499b99:c.instructions+=1;goto B499b99;
case 0x499b9a:goto L499b9a;
case 0x499b9b:c.instructions+=2;goto B499b9b;
case 0x499b9c:c.instructions+=1;goto B499b9c;
case 0x499bb0:goto L499bb0;
case 0x499bb3:c.instructions+=3;goto B499bb3;
case 0x499bb8:c.instructions+=2;goto B499bb8;
case 0x499bb9:c.instructions+=1;goto B499bb9;
case 0x499bbe:goto L499bbe;
case 0x499bbf:c.instructions+=1;goto B499bbf;
case 0x499bc4:goto L499bc4;
case 0x499bc9:c.instructions+=3;goto B499bc9;
case 0x499bcc:c.instructions+=2;goto B499bcc;
case 0x499bce:c.instructions+=1;goto B499bce;
case 0x499bd0:goto L499bd0;
case 0x499bd5:c.instructions+=2;goto B499bd5;
case 0x499bd7:c.instructions+=1;goto B499bd7;
case 0x499bd9:goto L499bd9;
case 0x499bda:c.instructions+=2;goto B499bda;
case 0x499bdf:c.instructions+=1;goto B499bdf;
case 0x499be4:goto L499be4;
case 0x499be9:c.instructions+=1;goto B499be9;
case 0x499bee:goto L499bee;
case 0x499bf4:c.instructions+=2;goto B499bf4;
case 0x499bf6:c.instructions+=1;goto B499bf6;
case 0x499bfb:goto L499bfb;
case 0x499c00:goto L499c00;
case 0x499c01:c.instructions+=6;goto B499c01;
case 0x499c03:c.instructions+=5;goto B499c03;
case 0x499c06:c.instructions+=4;goto B499c06;
case 0x499c0b:c.instructions+=3;goto B499c0b;
case 0x499c0c:c.instructions+=2;goto B499c0c;
case 0x499c0e:c.instructions+=1;goto B499c0e;
case 0x499c14:goto L499c14;
case 0x499c1a:goto L499c1a;
case 0x499c1f:c.instructions+=1;goto B499c1f;
case 0x499c21:goto L499c21;
case 0x499c26:c.instructions+=1;goto B499c26;
case 0x499c28:goto L499c28;
case 0x499c2d:c.instructions+=1;goto B499c2d;
case 0x499c33:goto L499c33;
case 0x499c36:c.instructions+=2;goto B499c36;
case 0x499c38:c.instructions+=1;goto B499c38;
case 0x499c3e:goto L499c3e;
case 0x499c43:goto L499c43;
case 0x499c47:c.instructions+=3;goto B499c47;
case 0x499c48:c.instructions+=2;goto B499c48;
case 0x499c49:c.instructions+=1;goto B499c49;
case 0x499c4c:goto L499c4c;
case 0x499c4e:c.instructions+=1;goto B499c4e;
case 0x499c53:goto L499c53;
case 0x499c56:c.instructions+=3;goto B499c56;
case 0x499c5b:c.instructions+=2;goto B499c5b;
case 0x499c5c:c.instructions+=1;goto B499c5c;
case 0x499c61:goto L499c61;
case 0x499c64:c.instructions+=2;goto B499c64;
case 0x499c69:c.instructions+=1;goto B499c69;
case 0x499c6e:goto L499c6e;
case 0x499c6f:c.instructions+=2;goto B499c6f;
case 0x499c70:c.instructions+=1;goto B499c70;
case 0x499c73:goto L499c73;
case 0x499c76:c.instructions+=3;goto B499c76;
case 0x499c79:c.instructions+=2;goto B499c79;
case 0x499c7e:c.instructions+=1;goto B499c7e;
case 0x499c80:goto L499c80;
case 0x499c85:c.instructions+=1;goto B499c85;
case 0x499c8b:goto L499c8b;
case 0x499c8e:c.instructions+=2;goto B499c8e;
case 0x499c90:c.instructions+=1;goto B499c90;
case 0x499c96:goto L499c96;
case 0x499c98:c.instructions+=1;goto B499c98;
case 0x499c9d:goto L499c9d;
case 0x499ca1:c.instructions+=3;goto B499ca1;
case 0x499ca2:c.instructions+=2;goto B499ca2;
case 0x499ca3:c.instructions+=1;goto B499ca3;
case 0x499ca6:goto L499ca6;
case 0x499ca9:c.instructions+=2;goto B499ca9;
case 0x499cab:c.instructions+=1;goto B499cab;
case 0x499cb1:goto L499cb1;
case 0x499cb3:c.instructions+=1;goto B499cb3;
case 0x499cb8:goto L499cb8;
case 0x499cbc:c.instructions+=3;goto B499cbc;
case 0x499cbd:c.instructions+=2;goto B499cbd;
case 0x499cbe:c.instructions+=1;goto B499cbe;
case 0x499cc1:goto L499cc1;
case 0x499cc4:c.instructions+=2;goto B499cc4;
case 0x499cc5:c.instructions+=1;goto B499cc5;
case 0x499cca:goto L499cca;
case 0x499ccd:c.instructions+=3;goto B499ccd;
case 0x499cd0:c.instructions+=2;goto B499cd0;
case 0x499cd6:c.instructions+=1;goto B499cd6;
case 0x499cdc:goto L499cdc;
case 0x499cdf:c.instructions+=3;goto B499cdf;
case 0x499ce4:c.instructions+=2;goto B499ce4;
case 0x499ce5:c.instructions+=1;goto B499ce5;
case 0x499cea:goto L499cea;
case 0x499ced:c.instructions+=5;goto B499ced;
case 0x499cf0:c.instructions+=4;goto B499cf0;
case 0x499cf1:c.instructions+=3;goto B499cf1;
case 0x499cf3:c.instructions+=2;goto B499cf3;
case 0x499cf4:c.instructions+=1;goto B499cf4;
case 0x499cf9:goto L499cf9;
case 0x499cfc:c.instructions+=3;goto B499cfc;
case 0x499cfd:c.instructions+=2;goto B499cfd;
case 0x499cfe:c.instructions+=1;goto B499cfe;
case 0x499d01:goto L499d01;
case 0x499d06:c.instructions+=1;goto B499d06;
case 0x499d08:goto L499d08;
case 0x499d0d:c.instructions+=1;goto B499d0d;
case 0x499d13:goto L499d13;
case 0x499d16:c.instructions+=2;goto B499d16;
case 0x499d18:c.instructions+=1;goto B499d18;
case 0x499d1a:goto L499d1a;
case 0x499d1d:c.instructions+=5;goto B499d1d;
case 0x499d20:c.instructions+=4;goto B499d20;
case 0x499d21:c.instructions+=3;goto B499d21;
case 0x499d26:c.instructions+=2;goto B499d26;
case 0x499d27:c.instructions+=1;goto B499d27;
case 0x499d2c:goto L499d2c;
case 0x499d2f:c.instructions+=2;goto B499d2f;
case 0x499d30:c.instructions+=1;goto B499d30;
case 0x499d35:goto L499d35;
case 0x499d38:c.instructions+=3;goto B499d38;
case 0x499d3d:c.instructions+=2;goto B499d3d;
case 0x499d3e:c.instructions+=1;goto B499d3e;
case 0x499d43:goto L499d43;
case 0x499d44:c.instructions+=1;goto B499d44;
case 0x499d49:goto L499d49;
case 0x499d4c:c.instructions+=3;goto B499d4c;
case 0x499d4d:c.instructions+=2;goto B499d4d;
case 0x499d4e:c.instructions+=1;goto B499d4e;
case 0x499d51:goto L499d51;
case 0x499d54:c.instructions+=3;goto B499d54;
case 0x499d59:c.instructions+=2;goto B499d59;
case 0x499d5a:c.instructions+=1;goto B499d5a;
case 0x499d5f:goto L499d5f;
case 0x499d60:c.instructions+=1;goto B499d60;
case 0x499d65:goto L499d65;
case 0x499d68:c.instructions+=3;goto B499d68;
case 0x499d69:c.instructions+=2;goto B499d69;
case 0x499d6a:c.instructions+=1;goto B499d6a;
case 0x499d6d:goto L499d6d;
case 0x499d70:c.instructions+=2;goto B499d70;
case 0x499d71:c.instructions+=1;goto B499d71;
case 0x499d76:goto L499d76;
case 0x499d79:c.instructions+=3;goto B499d79;
case 0x499d7c:c.instructions+=2;goto B499d7c;
case 0x499d82:c.instructions+=1;goto B499d82;
case 0x499d84:goto L499d84;
case 0x499d87:c.instructions+=3;goto B499d87;
case 0x499d8c:c.instructions+=2;goto B499d8c;
case 0x499d8d:c.instructions+=1;goto B499d8d;
case 0x499d92:goto L499d92;
case 0x499d95:c.instructions+=5;goto B499d95;
case 0x499d98:c.instructions+=4;goto B499d98;
case 0x499d99:c.instructions+=3;goto B499d99;
case 0x499d9b:c.instructions+=2;goto B499d9b;
case 0x499d9c:c.instructions+=1;goto B499d9c;
case 0x499da1:goto L499da1;
case 0x499da4:goto L499da4;
case 0x499da5:c.instructions+=2;goto B499da5;
case 0x499da6:c.instructions+=1;goto B499da6;
case 0x499db0:goto L499db0;
case 0x499db5:c.instructions+=1;goto B499db5;
case 0x499dc0:goto L499dc0;
case 0x499dc5:c.instructions+=1;goto B499dc5;
case 0x499dd0:goto L499dd0;
case 0x499dd2:c.instructions+=13;goto B499dd2;
case 0x499dd7:c.instructions+=12;goto B499dd7;
case 0x499ddd:c.instructions+=11;goto B499ddd;
case 0x499dde:c.instructions+=10;goto B499dde;
case 0x499de5:c.instructions+=9;goto B499de5;
case 0x499de6:c.instructions+=8;goto B499de6;
case 0x499de7:c.instructions+=7;goto B499de7;
case 0x499de9:c.instructions+=6;goto B499de9;
case 0x499ded:c.instructions+=5;goto B499ded;
case 0x499df3:c.instructions+=4;goto B499df3;
case 0x499df5:c.instructions+=3;goto B499df5;
case 0x499dfa:c.instructions+=2;goto B499dfa;
case 0x499e02:c.instructions+=1;goto B499e02;
case 0x499e07:goto L499e07;
case 0x499e0c:c.instructions+=2;goto B499e0c;
case 0x499e16:c.instructions+=1;goto B499e16;
case 0x499e1b:goto L499e1b;
case 0x499e20:c.instructions+=1;goto B499e20;
case 0x499e25:goto L499e25;
case 0x499e27:c.instructions+=2;goto B499e27;
case 0x499e2f:c.instructions+=1;goto B499e2f;
case 0x499e34:goto L499e34;
case 0x499e38:c.instructions+=4;goto B499e38;
case 0x499e39:c.instructions+=3;goto B499e39;
case 0x499e40:c.instructions+=2;goto B499e40;
case 0x499e43:c.instructions+=1;goto B499e43;
case 0x499e50:goto L499e50;
case 0x499e57:c.instructions+=1;goto B499e57;
case 0x499e60:goto L499e60;
case 0x499e61:c.instructions+=5;goto B499e61;
case 0x499e63:c.instructions+=4;goto B499e63;
case 0x499e65:c.instructions+=3;goto B499e65;
case 0x499e67:c.instructions+=2;goto B499e67;
case 0x499e6c:c.instructions+=1;goto B499e6c;
case 0x499e71:goto L499e71;
case 0x499e77:c.instructions+=7;goto B499e77;
case 0x499e7d:c.instructions+=6;goto B499e7d;
case 0x499e7e:c.instructions+=5;goto B499e7e;
case 0x499e80:c.instructions+=4;goto B499e80;
case 0x499e81:c.instructions+=3;goto B499e81;
case 0x499e83:c.instructions+=2;goto B499e83;
case 0x499e88:c.instructions+=1;goto B499e88;
case 0x499e8d:goto L499e8d;
case 0x499e90:c.instructions+=5;goto B499e90;
case 0x499e92:c.instructions+=4;goto B499e92;
case 0x499e97:c.instructions+=3;goto B499e97;
case 0x499e9c:c.instructions+=2;goto B499e9c;
case 0x499e9d:c.instructions+=1;goto B499e9d;
case 0x499ea2:goto L499ea2;
case 0x499ea5:c.instructions+=5;goto B499ea5;
case 0x499ea7:c.instructions+=4;goto B499ea7;
case 0x499eac:c.instructions+=3;goto B499eac;
case 0x499eb1:c.instructions+=2;goto B499eb1;
case 0x499eb2:c.instructions+=1;goto B499eb2;
case 0x499eb7:goto L499eb7;
case 0x499eba:c.instructions+=2;goto B499eba;
case 0x499ebb:c.instructions+=1;goto B499ebb;
case 0x499ec0:goto L499ec0;
case 0x499ec5:c.instructions+=2;goto B499ec5;
case 0x499ec7:c.instructions+=1;goto B499ec7;
case 0x499ec9:goto L499ec9;
case 0x499ecb:c.instructions+=8;goto B499ecb;
case 0x499ecd:c.instructions+=7;goto B499ecd;
case 0x499ecf:c.instructions+=6;goto B499ecf;
case 0x499ed4:c.instructions+=5;goto B499ed4;
case 0x499ed6:c.instructions+=4;goto B499ed6;
case 0x499ed8:c.instructions+=3;goto B499ed8;
case 0x499edd:c.instructions+=2;goto B499edd;
case 0x499ee4:c.instructions+=1;goto B499ee4;
case 0x499ee9:goto L499ee9;
case 0x499eec:c.instructions+=2;goto B499eec;
case 0x499ef1:c.instructions+=1;goto B499ef1;
case 0x499ef6:goto L499ef6;
case 0x499ef8:c.instructions+=1;goto B499ef8;
case 0x499efa:goto L499efa;
case 0x499f00:goto L499f00;
case 0x499f05:goto L499f05;
case 0x499f0a:goto L499f0a;
case 0x499f0c:c.instructions+=1;goto B499f0c;
case 0x499f0e:goto L499f0e;
case 0x499f10:goto L499f10;
case 0x499f15:c.instructions+=8;goto B499f15;
case 0x499f16:c.instructions+=7;goto B499f16;
case 0x499f18:c.instructions+=6;goto B499f18;
case 0x499f1b:c.instructions+=5;goto B499f1b;
case 0x499f21:c.instructions+=4;goto B499f21;
case 0x499f23:c.instructions+=3;goto B499f23;
case 0x499f24:c.instructions+=2;goto B499f24;
case 0x499f2a:c.instructions+=1;goto B499f2a;
case 0x499f2c:goto L499f2c;
case 0x499f31:c.instructions+=5;goto B499f31;
case 0x499f33:c.instructions+=4;goto B499f33;
case 0x499f35:c.instructions+=3;goto B499f35;
case 0x499f36:c.instructions+=2;goto B499f36;
case 0x499f3d:c.instructions+=1;goto B499f3d;
case 0x499f42:goto L499f42;
case 0x499f45:goto L499f45;
case 0x499f4b:c.instructions+=2;goto B499f4b;
case 0x499f4d:c.instructions+=1;goto B499f4d;
case 0x499f4f:goto L499f4f;
case 0x499f54:c.instructions+=5;goto B499f54;
case 0x499f56:c.instructions+=4;goto B499f56;
case 0x499f58:c.instructions+=3;goto B499f58;
case 0x499f59:c.instructions+=2;goto B499f59;
case 0x499f60:c.instructions+=1;goto B499f60;
case 0x499f65:goto L499f65;
case 0x499f6a:c.instructions+=4;goto B499f6a;
case 0x499f6c:c.instructions+=3;goto B499f6c;
case 0x499f6e:c.instructions+=2;goto B499f6e;
case 0x499f6f:c.instructions+=1;goto B499f6f;
case 0x499f74:goto L499f74;
case 0x499f77:goto L499f77;
case 0x499f7d:c.instructions+=2;goto B499f7d;
case 0x499f7f:c.instructions+=1;goto B499f7f;
case 0x499f81:goto L499f81;
case 0x499f86:c.instructions+=5;goto B499f86;
case 0x499f88:c.instructions+=4;goto B499f88;
case 0x499f8a:c.instructions+=3;goto B499f8a;
case 0x499f8b:c.instructions+=2;goto B499f8b;
case 0x499f92:c.instructions+=1;goto B499f92;
case 0x499f97:goto L499f97;
case 0x499f9a:goto L499f9a;
case 0x499f9b:c.instructions+=2;goto B499f9b;
case 0x499f9c:c.instructions+=1;goto B499f9c;
case 0x499fa0:goto L499fa0;
case 0x499fa1:c.instructions+=3;goto B499fa1;
case 0x499fa2:c.instructions+=2;goto B499fa2;
case 0x499fa4:c.instructions+=1;goto B499fa4;
case 0x499fa9:goto L499fa9;
case 0x499faf:c.instructions+=3;goto B499faf;
case 0x499fb1:c.instructions+=2;goto B499fb1;
case 0x499fb3:c.instructions+=1;goto B499fb3;
case 0x499fb5:goto L499fb5;
case 0x499fbb:c.instructions+=3;goto B499fbb;
case 0x499fbc:c.instructions+=2;goto B499fbc;
case 0x499fc1:c.instructions+=1;goto B499fc1;
case 0x499fc6:goto L499fc6;
case 0x499fcc:goto L499fcc;
case 0x499fd1:c.instructions+=2;goto B499fd1;
case 0x499fd3:c.instructions+=1;goto B499fd3;
case 0x499fd5:goto L499fd5;
case 0x499fd6:c.instructions+=1;goto B499fd6;
case 0x499fdb:goto L499fdb;
case 0x499fde:c.instructions+=2;goto B499fde;
case 0x499fe4:c.instructions+=1;goto B499fe4;
case 0x499fea:goto L499fea;
case 0x499fef:c.instructions+=1;goto B499fef;
case 0x499ff4:goto L499ff4;
case 0x499ff5:c.instructions+=2;goto B499ff5;
case 0x499ffa:c.instructions+=1;goto B499ffa;
default:missing_instruction(c.pc);}
B499004:L499004:{c.instructions+=2;NFSU2_TR(0x499004);
__builtin_memmove((R+4),(R+24),4);
}
B499006:{NFSU2_TR(0x499006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49900bull));
TAIL_STATIC(0x498e70u,498);
}
B49900b:L49900b:{c.instructions+=4;NFSU2_TR(0x49900b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49900c:{NFSU2_TR(0x49900c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49900d:{NFSU2_TR(0x49900d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49900e:{NFSU2_TR(0x49900e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499011:L499011:{c.instructions+=3;NFSU2_TR(0x499011);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499016:{NFSU2_TR(0x499016);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499018:{NFSU2_TR(0x499018);
if(r1(R+518)){{goto L499038;}}
}
B49901a:L49901a:{c.instructions+=3;NFSU2_TR(0x49901a);
__builtin_memmove((R+0),gp(0x863454),4);
}
B49901f:{NFSU2_TR(0x49901f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499021:{NFSU2_TR(0x499021);
if(r1(R+518)){{goto L499038;}}
}
B499023:L499023:{c.instructions+=2;NFSU2_TR(0x499023);
w4(R+4,u32(0x85ad40ull));
}
B499028:{NFSU2_TR(0x499028);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49902dull));
TAIL_STATIC(0x495290u,495);
}
B49902d:L49902d:{c.instructions+=3;NFSU2_TR(0x49902d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49902e:{NFSU2_TR(0x49902e);
w4(R+4,u32(0x85ad40ull));
}
B499033:{NFSU2_TR(0x499033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499038ull));
TAIL_STATIC(0x4031c0u,403);
}
B499038:L499038:{c.instructions+=2;NFSU2_TR(0x499038);
w4(R+4,u32(0x8635bcull));
}
B49903d:{NFSU2_TR(0x49903d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499042ull));
TAIL_STATIC(0x511280u,511);
}
B499042:L499042:{c.instructions+=3;NFSU2_TR(0x499042);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499048:{NFSU2_TR(0x499048);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49904a:{NFSU2_TR(0x49904a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49904full));
TAIL_STATIC(0x5f4240u,5f4);
}
B49904f:L49904f:{c.instructions+=6;NFSU2_TR(0x49904f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499052:{NFSU2_TR(0x499052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499055:{NFSU2_TR(0x499055);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499056:{NFSU2_TR(0x499056);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499058:{NFSU2_TR(0x499058);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499059:{NFSU2_TR(0x499059);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49905eull));
TAIL_STATIC(0x50d150u,50d);
}
B49905e:L49905e:{c.instructions+=5;NFSU2_TR(0x49905e);
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
B499061:{NFSU2_TR(0x499061);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499062:{NFSU2_TR(0x499062);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499063:{NFSU2_TR(0x499063);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499064:{NFSU2_TR(0x499064);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499067:L499067:{c.instructions+=3;NFSU2_TR(0x499067);
__builtin_memmove((R+0),gp(0x863444),4);
}
B49906c:{NFSU2_TR(0x49906c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49906e:{NFSU2_TR(0x49906e);
if(r1(R+518)){{goto L49907d;}}
}
B499070:L499070:{c.instructions+=3;NFSU2_TR(0x499070);
__builtin_memmove((R+0),gp(0x863450),4);
}
B499075:{NFSU2_TR(0x499075);
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
B499077:{NFSU2_TR(0x499077);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49915a;}}
}
B49907d:L49907d:{c.instructions+=3;NFSU2_TR(0x49907d);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499083:{NFSU2_TR(0x499083);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499085:{NFSU2_TR(0x499085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49908aull));
TAIL_STATIC(0x5f4240u,5f4);
}
B49908a:L49908a:{c.instructions+=4;NFSU2_TR(0x49908a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49908b:{NFSU2_TR(0x49908b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49908c:{NFSU2_TR(0x49908c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49908d:{NFSU2_TR(0x49908d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499090:L499090:{c.instructions+=2;NFSU2_TR(0x499090);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499095:{NFSU2_TR(0x499095);
if(r1(R+518)){{goto L499105;}}
}
B499097:L499097:{c.instructions+=2;NFSU2_TR(0x499097);
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
B49909c:{NFSU2_TR(0x49909c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49915a;}}
}
B4990a2:L4990a2:{c.instructions+=3;NFSU2_TR(0x4990a2);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4990a7:{NFSU2_TR(0x4990a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4990a9:{NFSU2_TR(0x4990a9);
if(r1(R+518)){{goto L4990b8;}}
}
B4990ab:L4990ab:{c.instructions+=3;NFSU2_TR(0x4990ab);
__builtin_memmove((R+0),gp(0x863450),4);
}
B4990b0:{NFSU2_TR(0x4990b0);
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
B4990b2:{NFSU2_TR(0x4990b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49915a;}}
}
B4990b8:L4990b8:{c.instructions+=3;NFSU2_TR(0x4990b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4990bb:{NFSU2_TR(0x4990bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990bc:{NFSU2_TR(0x4990bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4990c1ull));
TAIL_STATIC(0x51cd60u,51c);
}
B4990c1:L4990c1:{c.instructions+=4;NFSU2_TR(0x4990c1);
__builtin_memmove((R+28),(R+0),4);
}
B4990c3:{NFSU2_TR(0x4990c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4990c6:{NFSU2_TR(0x4990c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990c7:{NFSU2_TR(0x4990c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4990ccull));
TAIL_STATIC(0x505450u,505);
}
B4990cc:L4990cc:{c.instructions+=4;NFSU2_TR(0x4990cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4990cf:{NFSU2_TR(0x4990cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4990d2:{NFSU2_TR(0x4990d2);
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
B4990d4:{NFSU2_TR(0x4990d4);
if(r1(R+518)){{goto L49915a;}}
}
B4990da:L4990da:{c.instructions+=4;NFSU2_TR(0x4990da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4990dd:{NFSU2_TR(0x4990dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4990e0:{NFSU2_TR(0x4990e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990e1:{NFSU2_TR(0x4990e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4990e6ull));
TAIL_STATIC(0x505450u,505);
}
B4990e6:L4990e6:{c.instructions+=3;NFSU2_TR(0x4990e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990e7:{NFSU2_TR(0x4990e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990e8:{NFSU2_TR(0x4990e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4990edull));
TAIL_STATIC(0x52cea0u,52c);
}
B4990ed:L4990ed:{c.instructions+=6;NFSU2_TR(0x4990ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4990f0:{NFSU2_TR(0x4990f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4990f3:{NFSU2_TR(0x4990f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990f4:{NFSU2_TR(0x4990f4);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990f6:{NFSU2_TR(0x4990f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4990f7:{NFSU2_TR(0x4990f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4990fcull));
TAIL_STATIC(0x50d150u,50d);
}
B4990fc:L4990fc:{c.instructions+=5;NFSU2_TR(0x4990fc);
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
B4990ff:{NFSU2_TR(0x4990ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499100:{NFSU2_TR(0x499100);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499101:{NFSU2_TR(0x499101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499102:{NFSU2_TR(0x499102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499105:L499105:{c.instructions+=3;NFSU2_TR(0x499105);
__builtin_memmove((R+0),gp(0x863444),4);
}
B49910a:{NFSU2_TR(0x49910a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49910c:{NFSU2_TR(0x49910c);
if(r1(R+518)){{goto L499117;}}
}
B49910e:L49910e:{c.instructions+=3;NFSU2_TR(0x49910e);
__builtin_memmove((R+0),gp(0x863450),4);
}
B499113:{NFSU2_TR(0x499113);
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
B499115:{NFSU2_TR(0x499115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49915a;}}
}
B499117:L499117:{c.instructions+=3;NFSU2_TR(0x499117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49911a:{NFSU2_TR(0x49911a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49911b:{NFSU2_TR(0x49911b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499120ull));
TAIL_STATIC(0x51cd60u,51c);
}
B499120:L499120:{c.instructions+=4;NFSU2_TR(0x499120);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499123:{NFSU2_TR(0x499123);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499124:{NFSU2_TR(0x499124);
__builtin_memmove((R+28),(R+0),4);
}
B499126:{NFSU2_TR(0x499126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49912bull));
TAIL_STATIC(0x505450u,505);
}
B49912b:L49912b:{c.instructions+=4;NFSU2_TR(0x49912b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49912e:{NFSU2_TR(0x49912e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499131:{NFSU2_TR(0x499131);
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
B499133:{NFSU2_TR(0x499133);
if(r1(R+518)){{goto L49915a;}}
}
B499135:L499135:{c.instructions+=4;NFSU2_TR(0x499135);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499138:{NFSU2_TR(0x499138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49913b:{NFSU2_TR(0x49913b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49913c:{NFSU2_TR(0x49913c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499141ull));
TAIL_STATIC(0x505450u,505);
}
B499141:L499141:{c.instructions+=3;NFSU2_TR(0x499141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499142:{NFSU2_TR(0x499142);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499143:{NFSU2_TR(0x499143);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499148ull));
TAIL_STATIC(0x52cea0u,52c);
}
B499148:L499148:{c.instructions+=6;NFSU2_TR(0x499148);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49914b:{NFSU2_TR(0x49914b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49914e:{NFSU2_TR(0x49914e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49914f:{NFSU2_TR(0x49914f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499151:{NFSU2_TR(0x499151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499152:{NFSU2_TR(0x499152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499157ull));
TAIL_STATIC(0x50d150u,50d);
}
B499157:L499157:{c.instructions+=1;NFSU2_TR(0x499157);
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
B49915a:L49915a:{c.instructions+=4;NFSU2_TR(0x49915a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49915b:{NFSU2_TR(0x49915b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49915c:{NFSU2_TR(0x49915c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49915d:{NFSU2_TR(0x49915d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499160:L499160:{c.instructions+=7;NFSU2_TR(0x499160);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B499166:{NFSU2_TR(0x499166);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499167:{NFSU2_TR(0x499167);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49916b:{NFSU2_TR(0x49916b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49916d:{NFSU2_TR(0x49916d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49916e:{NFSU2_TR(0x49916e);
__builtin_memmove((R+24),(R+4),4);
}
B499170:{NFSU2_TR(0x499170);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499175ull));
TAIL_STATIC(0x4fe970u,4fe);
}
B499175:L499175:{c.instructions+=5;NFSU2_TR(0x499175);
u8 U[4];
w4(U+0,u32(0x9f29d70dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49917a:{NFSU2_TR(0x49917a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49917e:{NFSU2_TR(0x49917e);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499183:{NFSU2_TR(0x499183);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499184:{NFSU2_TR(0x499184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499189ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B499189:L499189:{c.instructions+=8;NFSU2_TR(0x499189);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49918d:{NFSU2_TR(0x49918d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499190:{NFSU2_TR(0x499190);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499191:{NFSU2_TR(0x499191);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B499195:{NFSU2_TR(0x499195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499196:{NFSU2_TR(0x499196);
u8 U[4];
w4(U+0,u32(0xfeced617ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49919b:{NFSU2_TR(0x49919b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49919c:{NFSU2_TR(0x49919c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4991a1ull));
TAIL_STATIC(0x537b80u,537);
}
B4991a1:L4991a1:{c.instructions+=4;NFSU2_TR(0x4991a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4991a4:{NFSU2_TR(0x4991a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4991a5:{NFSU2_TR(0x4991a5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x84ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x84ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x84ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4991ab:{NFSU2_TR(0x4991ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4991b0:L4991b0:{c.instructions+=8;NFSU2_TR(0x4991b0);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4991b5:{NFSU2_TR(0x4991b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x280ull))));
}
B4991bb:{NFSU2_TR(0x4991bb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991bc:{NFSU2_TR(0x4991bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991bd:{NFSU2_TR(0x4991bd);
__builtin_memmove((R+24),(R+4),4);
}
B4991bf:{NFSU2_TR(0x4991bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4991c2:{NFSU2_TR(0x4991c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991c3:{NFSU2_TR(0x4991c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4991c8ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4991c8:L4991c8:{c.instructions+=3;NFSU2_TR(0x4991c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991c9:{NFSU2_TR(0x4991c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991ca:{NFSU2_TR(0x4991ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4991cfull));
TAIL_STATIC(0x537950u,537);
}
B4991cf:L4991cf:{c.instructions+=4;NFSU2_TR(0x4991cf);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4991d4:{NFSU2_TR(0x4991d4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4991d7:{NFSU2_TR(0x4991d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4991d9:{NFSU2_TR(0x4991d9);
if(r1(R+518)){{goto L4993ca;}}
}
B4991df:L4991df:{c.instructions+=3;NFSU2_TR(0x4991df);
__builtin_memmove((R+4),gp(0x863450),4);
}
B4991e5:{NFSU2_TR(0x4991e5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4991e7:{NFSU2_TR(0x4991e7);
if(r1(R+518)){{goto L499355;}}
}
B4991ed:L4991ed:{c.instructions+=2;NFSU2_TR(0x4991ed);
__builtin_memmove((R+4),(R+24),4);
}
B4991ef:{NFSU2_TR(0x4991ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4991f4ull));
TAIL_STATIC(0x498e10u,498);
}
B4991f4:L4991f4:{c.instructions+=4;NFSU2_TR(0x4991f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4991f7:{NFSU2_TR(0x4991f7);
u8 U[4];
w4(U+0,u32(0x949f4947ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991fc:{NFSU2_TR(0x4991fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4991fd:{NFSU2_TR(0x4991fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499202ull));
TAIL_STATIC(0x5379c0u,537);
}
B499202:L499202:{c.instructions+=2;NFSU2_TR(0x499202);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499203:{NFSU2_TR(0x499203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499208ull));
TAIL_STATIC(0x50ca00u,50c);
}
B499208:L499208:{c.instructions+=4;NFSU2_TR(0x499208);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49920b:{NFSU2_TR(0x49920b);
u8 U[4];
w4(U+0,u32(0x949f4948ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499210:{NFSU2_TR(0x499210);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499211:{NFSU2_TR(0x499211);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499216ull));
TAIL_STATIC(0x5379c0u,537);
}
B499216:L499216:{c.instructions+=2;NFSU2_TR(0x499216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499217:{NFSU2_TR(0x499217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49921cull));
TAIL_STATIC(0x50ca00u,50c);
}
B49921c:L49921c:{c.instructions+=4;NFSU2_TR(0x49921c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49921f:{NFSU2_TR(0x49921f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B499222:{NFSU2_TR(0x499222);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499223:{NFSU2_TR(0x499223);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499228ull));
TAIL_STATIC(0x505450u,505);
}
B499228:L499228:{c.instructions+=3;NFSU2_TR(0x499228);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499229:{NFSU2_TR(0x499229);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49922a:{NFSU2_TR(0x49922a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49922full));
TAIL_STATIC(0x5379c0u,537);
}
B49922f:L49922f:{c.instructions+=2;NFSU2_TR(0x49922f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499230:{NFSU2_TR(0x499230);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499235ull));
TAIL_STATIC(0x50ca00u,50c);
}
B499235:L499235:{c.instructions+=6;NFSU2_TR(0x499235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499238:{NFSU2_TR(0x499238);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49923b:{NFSU2_TR(0x49923b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B49923e:{NFSU2_TR(0x49923e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499240:{NFSU2_TR(0x499240);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499241:{NFSU2_TR(0x499241);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499246ull));
TAIL_STATIC(0x505450u,505);
}
B499246:L499246:{c.instructions+=4;NFSU2_TR(0x499246);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B499249:{NFSU2_TR(0x499249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49924a:{NFSU2_TR(0x49924a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49924b:{NFSU2_TR(0x49924b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499250ull));
TAIL_STATIC(0x51cda0u,51c);
}
B499250:L499250:{c.instructions+=4;NFSU2_TR(0x499250);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499253:{NFSU2_TR(0x499253);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B499256:{NFSU2_TR(0x499256);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499257:{NFSU2_TR(0x499257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49925cull));
TAIL_STATIC(0x505450u,505);
}
B49925c:L49925c:{c.instructions+=3;NFSU2_TR(0x49925c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49925d:{NFSU2_TR(0x49925d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49925e:{NFSU2_TR(0x49925e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499263ull));
TAIL_STATIC(0x5379c0u,537);
}
B499263:L499263:{c.instructions+=2;NFSU2_TR(0x499263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499264:{NFSU2_TR(0x499264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499269ull));
TAIL_STATIC(0x50ca00u,50c);
}
B499269:L499269:{c.instructions+=6;NFSU2_TR(0x499269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49926c:{NFSU2_TR(0x49926c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49926f:{NFSU2_TR(0x49926f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B499272:{NFSU2_TR(0x499272);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499274:{NFSU2_TR(0x499274);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499275:{NFSU2_TR(0x499275);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49927aull));
TAIL_STATIC(0x505450u,505);
}
B49927a:L49927a:{c.instructions+=4;NFSU2_TR(0x49927a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49927d:{NFSU2_TR(0x49927d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49927e:{NFSU2_TR(0x49927e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49927f:{NFSU2_TR(0x49927f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499284ull));
TAIL_STATIC(0x51cda0u,51c);
}
B499284:L499284:{c.instructions+=4;NFSU2_TR(0x499284);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499287:{NFSU2_TR(0x499287);
u8 U[4];
w4(U+0,u32(0xb1000cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49928c:{NFSU2_TR(0x49928c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49928d:{NFSU2_TR(0x49928d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499292ull));
TAIL_STATIC(0x5379c0u,537);
}
B499292:L499292:{c.instructions+=2;NFSU2_TR(0x499292);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499293:{NFSU2_TR(0x499293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499298ull));
TAIL_STATIC(0x50ca50u,50c);
}
B499298:L499298:{c.instructions+=4;NFSU2_TR(0x499298);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49929b:{NFSU2_TR(0x49929b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49929e:{NFSU2_TR(0x49929e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49929f:{NFSU2_TR(0x49929f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992a4ull));
TAIL_STATIC(0x505450u,505);
}
B4992a4:L4992a4:{c.instructions+=3;NFSU2_TR(0x4992a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992a5:{NFSU2_TR(0x4992a5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992a6:{NFSU2_TR(0x4992a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992abull));
TAIL_STATIC(0x5379c0u,537);
}
B4992ab:L4992ab:{c.instructions+=2;NFSU2_TR(0x4992ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992ac:{NFSU2_TR(0x4992ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992b1ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4992b1:L4992b1:{c.instructions+=6;NFSU2_TR(0x4992b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4992b4:{NFSU2_TR(0x4992b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4992b7:{NFSU2_TR(0x4992b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4992ba:{NFSU2_TR(0x4992ba);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992bc:{NFSU2_TR(0x4992bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992bd:{NFSU2_TR(0x4992bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992c2ull));
TAIL_STATIC(0x505450u,505);
}
B4992c2:L4992c2:{c.instructions+=4;NFSU2_TR(0x4992c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4992c5:{NFSU2_TR(0x4992c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992c6:{NFSU2_TR(0x4992c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992c7:{NFSU2_TR(0x4992c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992ccull));
TAIL_STATIC(0x51cda0u,51c);
}
B4992cc:L4992cc:{c.instructions+=4;NFSU2_TR(0x4992cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4992cf:{NFSU2_TR(0x4992cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4992d2:{NFSU2_TR(0x4992d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992d3:{NFSU2_TR(0x4992d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992d8ull));
TAIL_STATIC(0x505450u,505);
}
B4992d8:L4992d8:{c.instructions+=5;NFSU2_TR(0x4992d8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4992db:{NFSU2_TR(0x4992db);
u8 U[4];
w4(U+0,u32(0xde02cf84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992e0:{NFSU2_TR(0x4992e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992e1:{NFSU2_TR(0x4992e1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992e2:{NFSU2_TR(0x4992e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992e7ull));
TAIL_STATIC(0x537a10u,537);
}
B4992e7:L4992e7:{c.instructions+=3;NFSU2_TR(0x4992e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4992ea:{NFSU2_TR(0x4992ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992eb:{NFSU2_TR(0x4992eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4992f0ull));
TAIL_STATIC(0x50c900u,50c);
}
B4992f0:L4992f0:{c.instructions+=6;NFSU2_TR(0x4992f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4992f3:{NFSU2_TR(0x4992f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992f5:{NFSU2_TR(0x4992f5);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992fa:{NFSU2_TR(0x4992fa);
u8 U[4];
w4(U+0,u32(0xb1000cc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4992ff:{NFSU2_TR(0x4992ff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499300:{NFSU2_TR(0x499300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499305ull));
TAIL_STATIC(0x537c00u,537);
}
B499305:L499305:{c.instructions+=7;NFSU2_TR(0x499305);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499308:{NFSU2_TR(0x499308);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49930b:{NFSU2_TR(0x49930b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B49930e:{NFSU2_TR(0x49930e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499310:{NFSU2_TR(0x499310);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499315:{NFSU2_TR(0x499315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499316:{NFSU2_TR(0x499316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49931bull));
TAIL_STATIC(0x505450u,505);
}
B49931b:L49931b:{c.instructions+=4;NFSU2_TR(0x49931b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B49931e:{NFSU2_TR(0x49931e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49931f:{NFSU2_TR(0x49931f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499320:{NFSU2_TR(0x499320);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499325ull));
TAIL_STATIC(0x537c00u,537);
}
B499325:L499325:{c.instructions+=6;NFSU2_TR(0x499325);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B499328:{NFSU2_TR(0x499328);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49932d:{NFSU2_TR(0x49932d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B499334:{NFSU2_TR(0x499334);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499335:{NFSU2_TR(0x499335);
w4(R+4,u32(0x85ef50ull));
}
B49933a:{NFSU2_TR(0x49933a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49933full));
TAIL_STATIC(0x514860u,514);
}
B49933f:L49933f:{c.instructions+=5;NFSU2_TR(0x49933f);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499344:{NFSU2_TR(0x499344);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B499348:{NFSU2_TR(0x499348);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499349:{NFSU2_TR(0x499349);
w4(R+4,u32(0x85ef50ull));
}
B49934e:{NFSU2_TR(0x49934e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499353ull));
TAIL_STATIC(0x514910u,514);
}
B499353:L499353:{c.instructions+=1;NFSU2_TR(0x499353);
{goto L49938d;}
}
B499355:L499355:{c.instructions+=2;NFSU2_TR(0x499355);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499357:{NFSU2_TR(0x499357);
if(r1(R+518)){{goto L4993ca;}}
}
B499359:L499359:{c.instructions+=3;NFSU2_TR(0x499359);
__builtin_memmove((R+0),gp(0x863454),4);
}
B49935e:{NFSU2_TR(0x49935e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499360:{NFSU2_TR(0x499360);
if(r1(R+518)){{goto L4993ca;}}
}
B499362:L499362:{c.instructions+=5;NFSU2_TR(0x499362);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499367:{NFSU2_TR(0x499367);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B49936e:{NFSU2_TR(0x49936e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49936f:{NFSU2_TR(0x49936f);
w4(R+4,u32(0x85b940ull));
}
B499374:{NFSU2_TR(0x499374);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499379ull));
TAIL_STATIC(0x515160u,515);
}
B499379:L499379:{c.instructions+=5;NFSU2_TR(0x499379);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49937e:{NFSU2_TR(0x49937e);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B499382:{NFSU2_TR(0x499382);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499383:{NFSU2_TR(0x499383);
w4(R+4,u32(0x85b940ull));
}
B499388:{NFSU2_TR(0x499388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49938dull));
TAIL_STATIC(0x515250u,515);
}
B49938d:L49938d:{c.instructions+=7;NFSU2_TR(0x49938d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499390:{NFSU2_TR(0x499390);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B499397:{NFSU2_TR(0x499397);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499398:{NFSU2_TR(0x499398);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49939d:{NFSU2_TR(0x49939d);
u8 U[4];
w4(U+0,u32(0xde075b62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993a2:{NFSU2_TR(0x4993a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993a3:{NFSU2_TR(0x4993a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4993a8ull));
TAIL_STATIC(0x537b80u,537);
}
B4993a8:L4993a8:{c.instructions+=7;NFSU2_TR(0x4993a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4993ab:{NFSU2_TR(0x4993ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4993af:{NFSU2_TR(0x4993af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993b0:{NFSU2_TR(0x4993b0);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993b5:{NFSU2_TR(0x4993b5);
u8 U[4];
w4(U+0,u32(0x2c167533ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993ba:{NFSU2_TR(0x4993ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993bb:{NFSU2_TR(0x4993bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4993c0ull));
TAIL_STATIC(0x537b80u,537);
}
B4993c0:L4993c0:{c.instructions+=3;NFSU2_TR(0x4993c0);
__builtin_memmove((R+4),(R+24),4);
}
B4993c2:{NFSU2_TR(0x4993c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4993c5:{NFSU2_TR(0x4993c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4993caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499160u);}goto L499160;}
}
B4993ca:L4993ca:{c.instructions+=4;NFSU2_TR(0x4993ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4993cb:{NFSU2_TR(0x4993cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4993cc:{NFSU2_TR(0x4993cc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x280ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x280ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x280ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4993d2:{NFSU2_TR(0x4993d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4993e0:L4993e0:{c.instructions+=13;NFSU2_TR(0x4993e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993e2:{NFSU2_TR(0x4993e2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993e7:{NFSU2_TR(0x4993e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4993ed:{NFSU2_TR(0x4993ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993ee:{NFSU2_TR(0x4993ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4993f5:{NFSU2_TR(0x4993f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993f6:{NFSU2_TR(0x4993f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4993f7:{NFSU2_TR(0x4993f7);
__builtin_memmove((R+24),(R+4),4);
}
B4993f9:{NFSU2_TR(0x4993f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4993fd:{NFSU2_TR(0x4993fd);
u8 U[4];
w4(U+0,u32(0x78f978ull));
s4(u32(r4(R+24)),r4(U+0));
}
B499403:{NFSU2_TR(0x499403);
w4(R+4,u32(0x85b940ull));
}
B499408:{NFSU2_TR(0x499408);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B499410:{NFSU2_TR(0x499410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499415ull));
TAIL_STATIC(0x501690u,501);
}
B499415:L499415:{c.instructions+=2;NFSU2_TR(0x499415);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499417:{NFSU2_TR(0x499417);
if(r1(R+518)){{goto L49942c;}}
}
B499419:L499419:{c.instructions+=3;NFSU2_TR(0x499419);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B49941e:{NFSU2_TR(0x49941e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499420:{NFSU2_TR(0x499420);
if(r1(R+518)){{goto L49942c;}}
}
B499422:L499422:{c.instructions+=2;NFSU2_TR(0x499422);
w4(R+4,u32(0x85b940ull));
}
B499427:{NFSU2_TR(0x499427);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49942cull));
TAIL_STATIC(0x533cf0u,533);
}
B49942c:L49942c:{c.instructions+=3;NFSU2_TR(0x49942c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49942f:{NFSU2_TR(0x49942f);
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
B499431:{NFSU2_TR(0x499431);
if(r1(R+518)){{goto L49943d;}}
}
B499433:L499433:{c.instructions+=2;NFSU2_TR(0x499433);
w4(R+4,u32(0x85ad40ull));
}
B499438:{NFSU2_TR(0x499438);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49943dull));
TAIL_STATIC(0x500b40u,500);
}
B49943d:L49943d:{c.instructions+=3;NFSU2_TR(0x49943d);
__builtin_memmove((R+4),(R+24),4);
}
B49943f:{NFSU2_TR(0x49943f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B499447:{NFSU2_TR(0x499447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49944cull));
TAIL_STATIC(0x510d40u,510);
}
B49944c:L49944c:{c.instructions+=5;NFSU2_TR(0x49944c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499450:{NFSU2_TR(0x499450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499451:{NFSU2_TR(0x499451);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499458:{NFSU2_TR(0x499458);
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
B49945b:{NFSU2_TR(0x49945b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499460:L499460:{c.instructions+=2;NFSU2_TR(0x499460);
__builtin_memmove((R+0),gp(0x836350),1);
}
B499465:{NFSU2_TR(0x499465);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499470:L499470:{c.instructions+=13;NFSU2_TR(0x499470);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499471:{NFSU2_TR(0x499471);
__builtin_memmove((R+20),(R+16),4);
}
B499473:{NFSU2_TR(0x499473);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499476:{NFSU2_TR(0x499476);
__builtin_memmove((R+8),gp(0x86344c),4);
}
B49947c:{NFSU2_TR(0x49947c);
__builtin_memmove(gp(0x836350),(R+0),1);
}
B499481:{NFSU2_TR(0x499481);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499486:{NFSU2_TR(0x499486);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B499488:{NFSU2_TR(0x499488);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49948a:{NFSU2_TR(0x49948a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B49948c:{NFSU2_TR(0x49948c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49948d:{NFSU2_TR(0x49948d);
w4(R+4,u32(0x85ad40ull));
}
B499492:{NFSU2_TR(0x499492);
__builtin_memmove(gp(0x83634c),(R+0),4);
}
B499497:{NFSU2_TR(0x499497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49949cull));
TAIL_STATIC(0x54caf0u,54c);
}
B49949c:L49949c:{c.instructions+=3;NFSU2_TR(0x49949c);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4994a1:{NFSU2_TR(0x4994a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4994a3:{NFSU2_TR(0x4994a3);
if(r1(R+518)){{goto L499550;}}
}
B4994a9:L4994a9:{c.instructions+=3;NFSU2_TR(0x4994a9);
__builtin_memmove((R+0),gp(0x86344c),4);
}
B4994ae:{NFSU2_TR(0x4994ae);
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
B4994b0:{NFSU2_TR(0x4994b0);
if(r1(R+518)){{goto L499550;}}
}
B4994b6:L4994b6:{c.instructions+=2;NFSU2_TR(0x4994b6);
w4(R+4,u32(0x827e88ull));
}
B4994bb:{NFSU2_TR(0x4994bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4994c0ull));
TAIL_STATIC(0x570a60u,570);
}
B4994c0:L4994c0:{c.instructions+=2;NFSU2_TR(0x4994c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4994c2:{NFSU2_TR(0x4994c2);
if(r1(R+518)){{goto L499550;}}
}
B4994c8:L4994c8:{c.instructions+=10;NFSU2_TR(0x4994c8);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4994cd:{NFSU2_TR(0x4994cd);
__builtin_memmove((R+4),gp(0x86344c),4);
}
B4994d3:{NFSU2_TR(0x4994d3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B4994d5:{NFSU2_TR(0x4994d5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B4994d7:{NFSU2_TR(0x4994d7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4994d9:{NFSU2_TR(0x4994d9);
s1(0x836351,u8(0x1ull));
}
B4994e0:{NFSU2_TR(0x4994e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4994e3:{NFSU2_TR(0x4994e3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4994e4:{NFSU2_TR(0x4994e4);
w4(R+4,u32(0x827e88ull));
}
B4994e9:{NFSU2_TR(0x4994e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4994eeull));
TAIL_STATIC(0x430570u,430);
}
B4994ee:L4994ee:{c.instructions+=5;NFSU2_TR(0x4994ee);
__builtin_memmove((R+8),gp(0x863444),4);
}
B4994f4:{NFSU2_TR(0x4994f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4994f7:{NFSU2_TR(0x4994f7);
w4(R+4,u32(0x827e88ull));
}
B4994fc:{NFSU2_TR(0x4994fc);
__builtin_memmove(gp(0x827ed4),(R+0),4);
}
B499501:{NFSU2_TR(0x499501);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499506ull));
TAIL_STATIC(0x430590u,430);
}
B499506:L499506:{c.instructions+=2;NFSU2_TR(0x499506);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499508:{NFSU2_TR(0x499508);
if(r1(R+518)){{goto L49953f;}}
}
B49950a:L49950a:{c.instructions+=2;NFSU2_TR(0x49950a);
w4(R+4,u32(0x827e88ull));
}
B49950f:{NFSU2_TR(0x49950f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499514ull));
TAIL_STATIC(0x437270u,437);
}
B499514:L499514:{c.instructions+=2;NFSU2_TR(0x499514);
w4(R+4,u32(0x827e88ull));
}
B499519:{NFSU2_TR(0x499519);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49951eull));
TAIL_STATIC(0x437370u,437);
}
B49951e:L49951e:{c.instructions+=1;NFSU2_TR(0x49951e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499523ull));
TAIL_STATIC(0x571060u,571);
}
B499523:L499523:{c.instructions+=2;NFSU2_TR(0x499523);
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
B499525:{NFSU2_TR(0x499525);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499535;}}
}
B499527:L499527:{c.instructions+=1;NFSU2_TR(0x499527);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49952cull));
TAIL_STATIC(0x57ef60u,57e);
}
B49952c:L49952c:{c.instructions+=1;NFSU2_TR(0x49952c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499531ull));
TAIL_STATIC(0x571060u,571);
}
B499531:L499531:{c.instructions+=2;NFSU2_TR(0x499531);
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
B499533:{NFSU2_TR(0x499533);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499527u);}goto L499527;}}
}
B499535:L499535:{c.instructions+=2;NFSU2_TR(0x499535);
w4(R+4,u32(0x827e88ull));
}
B49953a:{NFSU2_TR(0x49953a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49953full));
TAIL_STATIC(0x4305a0u,430);
}
B49953f:L49953f:{c.instructions+=3;NFSU2_TR(0x49953f);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499545:{NFSU2_TR(0x499545);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499547:{NFSU2_TR(0x499547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49954cull));
TAIL_STATIC(0x5f4240u,5f4);
}
B49954c:L49954c:{c.instructions+=3;NFSU2_TR(0x49954c);
w1(R+0,u8(0x1ull));
}
B49954e:{NFSU2_TR(0x49954e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49954f:{NFSU2_TR(0x49954f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499550:L499550:{c.instructions+=4;NFSU2_TR(0x499550);
s1(0x836351,u8(0x0ull));
}
B499557:{NFSU2_TR(0x499557);
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
B499559:{NFSU2_TR(0x499559);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49955a:{NFSU2_TR(0x49955a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499560:L499560:{c.instructions+=2;NFSU2_TR(0x499560);
w4(R+4,u32(0x85ad40ull));
}
B499565:{NFSU2_TR(0x499565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49956aull));
TAIL_STATIC(0x528560u,528);
}
B49956a:L49956a:{c.instructions+=3;NFSU2_TR(0x49956a);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499570:{NFSU2_TR(0x499570);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B499573:{NFSU2_TR(0x499573);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499584;}}
}
B499575:L499575:{c.instructions+=2;NFSU2_TR(0x499575);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499577:{NFSU2_TR(0x499577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49957cull));
TAIL_STATIC(0x5f4240u,5f4);
}
B49957c:L49957c:{c.instructions+=2;NFSU2_TR(0x49957c);
s1(0x836350,u8(0x0ull));
}
B499583:{NFSU2_TR(0x499583);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499584:L499584:{c.instructions+=3;NFSU2_TR(0x499584);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499586:{NFSU2_TR(0x499586);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499588:{NFSU2_TR(0x499588);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49958dull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B49958d:L49958d:{c.instructions+=2;NFSU2_TR(0x49958d);
s1(0x836350,u8(0x0ull));
}
B499594:{NFSU2_TR(0x499594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4995a0:L4995a0:{c.instructions+=4;NFSU2_TR(0x4995a0);
__builtin_memmove((R+0),gp(0x836350),1);
}
B4995a5:{NFSU2_TR(0x4995a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4995a7:{NFSU2_TR(0x4995a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4995a8:{NFSU2_TR(0x4995a8);
if(r1(R+518)){{goto L4995fa;}}
}
B4995aa:L4995aa:{c.instructions+=3;NFSU2_TR(0x4995aa);
__builtin_memmove((R+0),gp(0x836351),1);
}
B4995af:{NFSU2_TR(0x4995af);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4995b1:{NFSU2_TR(0x4995b1);
if(r1(R+518)){{goto L4995c7;}}
}
B4995b3:L4995b3:{c.instructions+=5;NFSU2_TR(0x4995b3);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B4995b8:{NFSU2_TR(0x4995b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4995bb:{NFSU2_TR(0x4995bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4995bc:{NFSU2_TR(0x4995bc);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4995c2:{NFSU2_TR(0x4995c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4995c7ull));
TAIL_STATIC(0x5f4230u,5f4);
}
B4995c7:L4995c7:{c.instructions+=3;NFSU2_TR(0x4995c7);
__builtin_memmove((R+24),gp(0x83634c),4);
}
B4995cd:{NFSU2_TR(0x4995cd);
u8 U[4];
w4(U+0,u32(0x78f910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4995d2:{NFSU2_TR(0x4995d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4995d7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4995d7:L4995d7:{c.instructions+=4;NFSU2_TR(0x4995d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4995da:{NFSU2_TR(0x4995da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4995dc:{NFSU2_TR(0x4995dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4995dd:{NFSU2_TR(0x4995dd);
if(r1(R+518)){{goto L4995ee;}}
}
B4995df:L4995df:{c.instructions+=2;NFSU2_TR(0x4995df);
u8 U[4];
w4(U+0,u32(0x78f910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4995e4:{NFSU2_TR(0x4995e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4995e9ull));
TAIL_STATIC(0x557df0u,557);
}
B4995e9:L4995e9:{c.instructions+=3;NFSU2_TR(0x4995e9);
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
B4995ec:{NFSU2_TR(0x4995ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4995ed:{NFSU2_TR(0x4995ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4995ee:L4995ee:{c.instructions+=2;NFSU2_TR(0x4995ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4995f0:{NFSU2_TR(0x4995f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4995f5ull));
TAIL_STATIC(0x557df0u,557);
}
B4995f5:L4995f5:{c.instructions+=3;NFSU2_TR(0x4995f5);
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
B4995f8:{NFSU2_TR(0x4995f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4995f9:{NFSU2_TR(0x4995f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4995fa:L4995fa:{c.instructions+=2;NFSU2_TR(0x4995fa);
w4(R+4,u32(0x85ad40ull));
}
B4995ff:{NFSU2_TR(0x4995ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499604ull));
TAIL_STATIC(0x528560u,528);
}
B499604:L499604:{c.instructions+=3;NFSU2_TR(0x499604);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B49960a:{NFSU2_TR(0x49960a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B49960d:{NFSU2_TR(0x49960d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49961f;}}
}
B49960f:L49960f:{c.instructions+=2;NFSU2_TR(0x49960f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499611:{NFSU2_TR(0x499611);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499616ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B499616:L499616:{c.instructions+=3;NFSU2_TR(0x499616);
s1(0x836350,u8(0x0ull));
}
B49961d:{NFSU2_TR(0x49961d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49961e:{NFSU2_TR(0x49961e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49961f:L49961f:{c.instructions+=3;NFSU2_TR(0x49961f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499621:{NFSU2_TR(0x499621);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499623:{NFSU2_TR(0x499623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499628ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B499628:L499628:{c.instructions+=3;NFSU2_TR(0x499628);
s1(0x836350,u8(0x0ull));
}
B49962f:{NFSU2_TR(0x49962f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499630:{NFSU2_TR(0x499630);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499640:L499640:{c.instructions+=3;NFSU2_TR(0x499640);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499645:{NFSU2_TR(0x499645);
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
B499647:{NFSU2_TR(0x499647);
if(r1(R+518)){{goto L499682;}}
}
B499649:L499649:{c.instructions+=4;NFSU2_TR(0x499649);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49964a:{NFSU2_TR(0x49964a);
__builtin_memmove((R+24),gp(0x86344c),4);
}
B499650:{NFSU2_TR(0x499650);
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
B499652:{NFSU2_TR(0x499652);
if(r1(R+518)){{goto L499681;}}
}
B499654:L499654:{c.instructions+=3;NFSU2_TR(0x499654);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499655:{NFSU2_TR(0x499655);
w4(R+4,u32(0x85ad40ull));
}
B49965a:{NFSU2_TR(0x49965a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49965full));
TAIL_STATIC(0x500460u,500);
}
B49965f:L49965f:{c.instructions+=3;NFSU2_TR(0x49965f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B499662:{NFSU2_TR(0x499662);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499664:{NFSU2_TR(0x499664);
if(r1(R+518)){{goto L49966e;}}
}
B499666:L499666:{c.instructions+=2;NFSU2_TR(0x499666);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499668:{NFSU2_TR(0x499668);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49966e;}}
}
B49966a:L49966a:{c.instructions+=2;NFSU2_TR(0x49966a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49966c:{NFSU2_TR(0x49966c);
{goto L499670;}
}
B49966e:L49966e:{c.instructions+=1;NFSU2_TR(0x49966e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499670:L499670:{c.instructions+=1;NFSU2_TR(0x499670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499675ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499470u);}goto L499470;}
}
B499675:L499675:{c.instructions+=3;NFSU2_TR(0x499675);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B499678:{NFSU2_TR(0x499678);
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
B49967a:{NFSU2_TR(0x49967a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499681;}}
}
B49967c:L49967c:{c.instructions+=1;NFSU2_TR(0x49967c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499681ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4995a0u);}goto L4995a0;}
}
B499681:L499681:{c.instructions+=1;NFSU2_TR(0x499681);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499682:L499682:{c.instructions+=2;NFSU2_TR(0x499682);
w1(R+0,u8(0x1ull));
}
B499684:{NFSU2_TR(0x499684);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499690:L499690:{c.instructions+=8;NFSU2_TR(0x499690);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499691:{NFSU2_TR(0x499691);
__builtin_memmove((R+20),(R+16),4);
}
B499693:{NFSU2_TR(0x499693);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499696:{NFSU2_TR(0x499696);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49969b:{NFSU2_TR(0x49969b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49969c:{NFSU2_TR(0x49969c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49969d:{NFSU2_TR(0x49969d);
__builtin_memmove((R+24),(R+4),4);
}
B49969f:{NFSU2_TR(0x49969f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49982a;}}
}
B4996a5:L4996a5:{c.instructions+=1;NFSU2_TR(0x4996a5);
if(r1(R+518)){{goto L4997cd;}}
}
B4996ab:L4996ab:{c.instructions+=2;NFSU2_TR(0x4996ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4996b0:{NFSU2_TR(0x4996b0);
if(r1(R+518)){{goto L4996e4;}}
}
B4996b2:L4996b2:{c.instructions+=2;NFSU2_TR(0x4996b2);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4996b7:{NFSU2_TR(0x4996b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4998ce;}}
}
B4996bd:L4996bd:{c.instructions+=4;NFSU2_TR(0x4996bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4996c0:{NFSU2_TR(0x4996c0);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4996c2:{NFSU2_TR(0x4996c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4996c3:{NFSU2_TR(0x4996c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4996c8ull));
TAIL_STATIC(0x51de60u,51d);
}
B4996c8:L4996c8:{c.instructions+=4;NFSU2_TR(0x4996c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4996cb:{NFSU2_TR(0x4996cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4996ce:{NFSU2_TR(0x4996ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4996cf:{NFSU2_TR(0x4996cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4996d4ull));
TAIL_STATIC(0x505450u,505);
}
B4996d4:L4996d4:{c.instructions+=3;NFSU2_TR(0x4996d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4996d5:{NFSU2_TR(0x4996d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4996d6:{NFSU2_TR(0x4996d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4996dbull));
TAIL_STATIC(0x52cea0u,52c);
}
B4996db:L4996db:{c.instructions+=5;NFSU2_TR(0x4996db);
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
B4996de:{NFSU2_TR(0x4996de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4996df:{NFSU2_TR(0x4996df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4996e0:{NFSU2_TR(0x4996e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4996e1:{NFSU2_TR(0x4996e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4996e4:L4996e4:{c.instructions+=4;NFSU2_TR(0x4996e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4996e7:{NFSU2_TR(0x4996e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4996ea:{NFSU2_TR(0x4996ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x63857de0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4996ef:{NFSU2_TR(0x4996ef);
if(r1(R+518)){{goto L499742;}}
}
B4996f1:L4996f1:{c.instructions+=2;NFSU2_TR(0x4996f1);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd72f002aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd72f002aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd72f002aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4996f6:{NFSU2_TR(0x4996f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4998ce;}}
}
B4996fc:L4996fc:{c.instructions+=2;NFSU2_TR(0x4996fc);
w4(R+4,u32(0x85b940ull));
}
B499701:{NFSU2_TR(0x499701);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499706ull));
TAIL_STATIC(0x501690u,501);
}
B499706:L499706:{c.instructions+=2;NFSU2_TR(0x499706);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499708:{NFSU2_TR(0x499708);
if(r1(R+518)){{goto L499735;}}
}
B49970a:L49970a:{c.instructions+=3;NFSU2_TR(0x49970a);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B49970f:{NFSU2_TR(0x49970f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499711:{NFSU2_TR(0x499711);
if(r1(R+518)){{goto L499735;}}
}
B499713:L499713:{c.instructions+=2;NFSU2_TR(0x499713);
w4(R+4,u32(0x85b940ull));
}
B499718:{NFSU2_TR(0x499718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49971dull));
TAIL_STATIC(0x5150d0u,515);
}
B49971d:L49971d:{c.instructions+=6;NFSU2_TR(0x49971d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499720:{NFSU2_TR(0x499720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499723:{NFSU2_TR(0x499723);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499724:{NFSU2_TR(0x499724);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499726:{NFSU2_TR(0x499726);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499727:{NFSU2_TR(0x499727);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49972cull));
TAIL_STATIC(0x50d150u,50d);
}
B49972c:L49972c:{c.instructions+=5;NFSU2_TR(0x49972c);
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
B49972f:{NFSU2_TR(0x49972f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499730:{NFSU2_TR(0x499730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499731:{NFSU2_TR(0x499731);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499732:{NFSU2_TR(0x499732);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499735:L499735:{c.instructions+=2;NFSU2_TR(0x499735);
__builtin_memmove((R+4),(R+24),4);
}
B499737:{NFSU2_TR(0x499737);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49973cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499640u);}goto L499640;}
}
B49973c:L49973c:{c.instructions+=4;NFSU2_TR(0x49973c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49973d:{NFSU2_TR(0x49973d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49973e:{NFSU2_TR(0x49973e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49973f:{NFSU2_TR(0x49973f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499742:L499742:{c.instructions+=2;NFSU2_TR(0x499742);
w4(R+4,u32(0x85b940ull));
}
B499747:{NFSU2_TR(0x499747);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49974cull));
TAIL_STATIC(0x501690u,501);
}
B49974c:L49974c:{c.instructions+=2;NFSU2_TR(0x49974c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49974e:{NFSU2_TR(0x49974e);
if(r1(R+518)){{goto L499788;}}
}
B499750:L499750:{c.instructions+=3;NFSU2_TR(0x499750);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B499755:{NFSU2_TR(0x499755);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499757:{NFSU2_TR(0x499757);
if(r1(R+518)){{goto L499788;}}
}
B499759:L499759:{c.instructions+=2;NFSU2_TR(0x499759);
w4(R+4,u32(0x85b940ull));
}
B49975e:{NFSU2_TR(0x49975e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499763ull));
TAIL_STATIC(0x501640u,501);
}
B499763:L499763:{c.instructions+=3;NFSU2_TR(0x499763);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499769:{NFSU2_TR(0x499769);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49976b:{NFSU2_TR(0x49976b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499770ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B499770:L499770:{c.instructions+=6;NFSU2_TR(0x499770);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499773:{NFSU2_TR(0x499773);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499776:{NFSU2_TR(0x499776);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499777:{NFSU2_TR(0x499777);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499779:{NFSU2_TR(0x499779);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49977a:{NFSU2_TR(0x49977a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49977full));
TAIL_STATIC(0x50d150u,50d);
}
B49977f:L49977f:{c.instructions+=5;NFSU2_TR(0x49977f);
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
B499782:{NFSU2_TR(0x499782);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499783:{NFSU2_TR(0x499783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499784:{NFSU2_TR(0x499784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499785:{NFSU2_TR(0x499785);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499788:L499788:{c.instructions+=9;NFSU2_TR(0x499788);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B49978c:{NFSU2_TR(0x49978c);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499791:{NFSU2_TR(0x499791);
__builtin_memmove((R+8),gp(0x86344c),4);
}
B499797:{NFSU2_TR(0x499797);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B499799:{NFSU2_TR(0x499799);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49979b:{NFSU2_TR(0x49979b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49979d:{NFSU2_TR(0x49979d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49979e:{NFSU2_TR(0x49979e);
w4(R+4,u32(0x85ad40ull));
}
B4997a3:{NFSU2_TR(0x4997a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4997a8ull));
TAIL_STATIC(0x4031c0u,403);
}
B4997a8:L4997a8:{c.instructions+=3;NFSU2_TR(0x4997a8);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4997ae:{NFSU2_TR(0x4997ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4997b0:{NFSU2_TR(0x4997b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4997b5ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4997b5:L4997b5:{c.instructions+=6;NFSU2_TR(0x4997b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4997b8:{NFSU2_TR(0x4997b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4997bb:{NFSU2_TR(0x4997bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4997bc:{NFSU2_TR(0x4997bc);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4997be:{NFSU2_TR(0x4997be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4997bf:{NFSU2_TR(0x4997bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4997c4ull));
TAIL_STATIC(0x50d150u,50d);
}
B4997c4:L4997c4:{c.instructions+=5;NFSU2_TR(0x4997c4);
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
B4997c7:{NFSU2_TR(0x4997c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4997c8:{NFSU2_TR(0x4997c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4997c9:{NFSU2_TR(0x4997c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4997ca:{NFSU2_TR(0x4997ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4997cd:L4997cd:{c.instructions+=2;NFSU2_TR(0x4997cd);
w4(R+4,u32(0x85b940ull));
}
B4997d2:{NFSU2_TR(0x4997d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4997d7ull));
TAIL_STATIC(0x501690u,501);
}
B4997d7:L4997d7:{c.instructions+=2;NFSU2_TR(0x4997d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4997d9:{NFSU2_TR(0x4997d9);
if(r1(R+518)){{goto L499813;}}
}
B4997db:L4997db:{c.instructions+=3;NFSU2_TR(0x4997db);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B4997e0:{NFSU2_TR(0x4997e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4997e2:{NFSU2_TR(0x4997e2);
if(r1(R+518)){{goto L499813;}}
}
B4997e4:L4997e4:{c.instructions+=2;NFSU2_TR(0x4997e4);
w4(R+4,u32(0x85b940ull));
}
B4997e9:{NFSU2_TR(0x4997e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4997eeull));
TAIL_STATIC(0x501640u,501);
}
B4997ee:L4997ee:{c.instructions+=3;NFSU2_TR(0x4997ee);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4997f4:{NFSU2_TR(0x4997f4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4997f6:{NFSU2_TR(0x4997f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4997fbull));
TAIL_STATIC(0x5f4240u,5f4);
}
B4997fb:L4997fb:{c.instructions+=6;NFSU2_TR(0x4997fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4997fe:{NFSU2_TR(0x4997fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499801:{NFSU2_TR(0x499801);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499802:{NFSU2_TR(0x499802);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499804:{NFSU2_TR(0x499804);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499805:{NFSU2_TR(0x499805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49980aull));
TAIL_STATIC(0x50d150u,50d);
}
B49980a:L49980a:{c.instructions+=5;NFSU2_TR(0x49980a);
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
B49980d:{NFSU2_TR(0x49980d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49980e:{NFSU2_TR(0x49980e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49980f:{NFSU2_TR(0x49980f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499810:{NFSU2_TR(0x499810);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499813:L499813:{c.instructions+=4;NFSU2_TR(0x499813);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499817:{NFSU2_TR(0x499817);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B49981d:{NFSU2_TR(0x49981d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49981f:{NFSU2_TR(0x49981f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499824ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B499824:L499824:{c.instructions+=4;NFSU2_TR(0x499824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499825:{NFSU2_TR(0x499825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499826:{NFSU2_TR(0x499826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499827:{NFSU2_TR(0x499827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49982a:L49982a:{c.instructions+=2;NFSU2_TR(0x49982a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49982f:{NFSU2_TR(0x49982f);
if(r1(R+518)){{goto L499888;}}
}
B499831:L499831:{c.instructions+=2;NFSU2_TR(0x499831);
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
B499836:{NFSU2_TR(0x499836);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4998ce;}}
}
B49983c:L49983c:{c.instructions+=3;NFSU2_TR(0x49983c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49983f:{NFSU2_TR(0x49983f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499840:{NFSU2_TR(0x499840);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499845ull));
TAIL_STATIC(0x51cd60u,51c);
}
B499845:L499845:{c.instructions+=4;NFSU2_TR(0x499845);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499848:{NFSU2_TR(0x499848);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499849:{NFSU2_TR(0x499849);
__builtin_memmove((R+28),(R+0),4);
}
B49984b:{NFSU2_TR(0x49984b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499850ull));
TAIL_STATIC(0x505450u,505);
}
B499850:L499850:{c.instructions+=4;NFSU2_TR(0x499850);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499853:{NFSU2_TR(0x499853);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499856:{NFSU2_TR(0x499856);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B499858:{NFSU2_TR(0x499858);
if(r1(R+518)){{goto L499870;}}
}
B49985a:L49985a:{c.instructions+=4;NFSU2_TR(0x49985a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49985d:{NFSU2_TR(0x49985d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B499860:{NFSU2_TR(0x499860);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499861:{NFSU2_TR(0x499861);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499866ull));
TAIL_STATIC(0x505450u,505);
}
B499866:L499866:{c.instructions+=3;NFSU2_TR(0x499866);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499867:{NFSU2_TR(0x499867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499868:{NFSU2_TR(0x499868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49986dull));
TAIL_STATIC(0x52cea0u,52c);
}
B49986d:L49986d:{c.instructions+=1;NFSU2_TR(0x49986d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B499870:L499870:{c.instructions+=6;NFSU2_TR(0x499870);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499873:{NFSU2_TR(0x499873);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499876:{NFSU2_TR(0x499876);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499877:{NFSU2_TR(0x499877);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499879:{NFSU2_TR(0x499879);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49987a:{NFSU2_TR(0x49987a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49987full));
TAIL_STATIC(0x50d150u,50d);
}
B49987f:L49987f:{c.instructions+=5;NFSU2_TR(0x49987f);
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
B499882:{NFSU2_TR(0x499882);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499883:{NFSU2_TR(0x499883);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499884:{NFSU2_TR(0x499884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499885:{NFSU2_TR(0x499885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499888:L499888:{c.instructions+=3;NFSU2_TR(0x499888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49988b:{NFSU2_TR(0x49988b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49988c:{NFSU2_TR(0x49988c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499891ull));
TAIL_STATIC(0x51cd60u,51c);
}
B499891:L499891:{c.instructions+=4;NFSU2_TR(0x499891);
__builtin_memmove((R+28),(R+0),4);
}
B499893:{NFSU2_TR(0x499893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499896:{NFSU2_TR(0x499896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499897:{NFSU2_TR(0x499897);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49989cull));
TAIL_STATIC(0x505450u,505);
}
B49989c:L49989c:{c.instructions+=4;NFSU2_TR(0x49989c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49989f:{NFSU2_TR(0x49989f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4998a2:{NFSU2_TR(0x4998a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4998a4:{NFSU2_TR(0x4998a4);
if(r1(R+518)){{goto L4998bc;}}
}
B4998a6:L4998a6:{c.instructions+=4;NFSU2_TR(0x4998a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4998a9:{NFSU2_TR(0x4998a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4998ac:{NFSU2_TR(0x4998ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998ad:{NFSU2_TR(0x4998ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4998b2ull));
TAIL_STATIC(0x505450u,505);
}
B4998b2:L4998b2:{c.instructions+=3;NFSU2_TR(0x4998b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998b3:{NFSU2_TR(0x4998b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998b4:{NFSU2_TR(0x4998b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4998b9ull));
TAIL_STATIC(0x52cea0u,52c);
}
B4998b9:L4998b9:{c.instructions+=1;NFSU2_TR(0x4998b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4998bc:L4998bc:{c.instructions+=6;NFSU2_TR(0x4998bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4998bf:{NFSU2_TR(0x4998bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4998c2:{NFSU2_TR(0x4998c2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998c3:{NFSU2_TR(0x4998c3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998c5:{NFSU2_TR(0x4998c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998c6:{NFSU2_TR(0x4998c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4998cbull));
TAIL_STATIC(0x50d150u,50d);
}
B4998cb:L4998cb:{c.instructions+=1;NFSU2_TR(0x4998cb);
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
B4998ce:L4998ce:{c.instructions+=4;NFSU2_TR(0x4998ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4998cf:{NFSU2_TR(0x4998cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4998d0:{NFSU2_TR(0x4998d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4998d1:{NFSU2_TR(0x4998d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4998e0:L4998e0:{c.instructions+=8;NFSU2_TR(0x4998e0);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B4998e5:{NFSU2_TR(0x4998e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x200ull))));
}
B4998eb:{NFSU2_TR(0x4998eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998ec:{NFSU2_TR(0x4998ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998ed:{NFSU2_TR(0x4998ed);
__builtin_memmove((R+24),(R+4),4);
}
B4998ef:{NFSU2_TR(0x4998ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4998f2:{NFSU2_TR(0x4998f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998f3:{NFSU2_TR(0x4998f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4998f8ull));
TAIL_STATIC(0x50d2d0u,50d);
}
B4998f8:L4998f8:{c.instructions+=3;NFSU2_TR(0x4998f8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998f9:{NFSU2_TR(0x4998f9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4998fa:{NFSU2_TR(0x4998fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4998ffull));
TAIL_STATIC(0x537950u,537);
}
B4998ff:L4998ff:{c.instructions+=3;NFSU2_TR(0x4998ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B499902:{NFSU2_TR(0x499902);
w4(R+4,u32(0x85b940ull));
}
B499907:{NFSU2_TR(0x499907);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49990cull));
TAIL_STATIC(0x501690u,501);
}
B49990c:L49990c:{c.instructions+=2;NFSU2_TR(0x49990c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49990e:{NFSU2_TR(0x49990e);
if(r1(R+518)){{goto L4999e1;}}
}
B499914:L499914:{c.instructions+=3;NFSU2_TR(0x499914);
__builtin_memmove((R+0),gp(0x85b940),1);
}
B499919:{NFSU2_TR(0x499919);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49991b:{NFSU2_TR(0x49991b);
if(r1(R+518)){{goto L499977;}}
}
B49991d:L49991d:{c.instructions+=5;NFSU2_TR(0x49991d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499920:{NFSU2_TR(0x499920);
u8 U[4];
w4(U+0,u32(0xc4df3b44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499925:{NFSU2_TR(0x499925);
u8 U[4];
w4(U+0,u32(0x4a04e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49992a:{NFSU2_TR(0x49992a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49992b:{NFSU2_TR(0x49992b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499930ull));
TAIL_STATIC(0x537a10u,537);
}
B499930:L499930:{c.instructions+=3;NFSU2_TR(0x499930);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499933:{NFSU2_TR(0x499933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499934:{NFSU2_TR(0x499934);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499939ull));
TAIL_STATIC(0x50c900u,50c);
}
B499939:L499939:{c.instructions+=6;NFSU2_TR(0x499939);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49993c:{NFSU2_TR(0x49993c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49993f:{NFSU2_TR(0x49993f);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499944:{NFSU2_TR(0x499944);
u8 U[4];
w4(U+0,u32(0xd72f002aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499949:{NFSU2_TR(0x499949);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49994a:{NFSU2_TR(0x49994a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49994full));
TAIL_STATIC(0x537a10u,537);
}
B49994f:L49994f:{c.instructions+=3;NFSU2_TR(0x49994f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499952:{NFSU2_TR(0x499952);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499953:{NFSU2_TR(0x499953);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499958ull));
TAIL_STATIC(0x50c900u,50c);
}
B499958:L499958:{c.instructions+=5;NFSU2_TR(0x499958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49995b:{NFSU2_TR(0x49995b);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499960:{NFSU2_TR(0x499960);
u8 U[4];
w4(U+0,u32(0x2edbde5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499965:{NFSU2_TR(0x499965);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499966:{NFSU2_TR(0x499966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49996bull));
TAIL_STATIC(0x537b80u,537);
}
B49996b:L49996b:{c.instructions+=5;NFSU2_TR(0x49996b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B49996e:{NFSU2_TR(0x49996e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49996f:{NFSU2_TR(0x49996f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499970:{NFSU2_TR(0x499970);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B499976:{NFSU2_TR(0x499976);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499977:L499977:{c.instructions+=7;NFSU2_TR(0x499977);
__builtin_memmove((R+4),gp(0x863444),4);
}
B49997d:{NFSU2_TR(0x49997d);
__builtin_memmove((R+8),gp(0x86344c),4);
}
B499983:{NFSU2_TR(0x499983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B499986:{NFSU2_TR(0x499986);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B499988:{NFSU2_TR(0x499988);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49998a:{NFSU2_TR(0x49998a);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B49998c:{NFSU2_TR(0x49998c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499991ull));
TAIL_STATIC(0x4ffea0u,4ff);
}
B499991:L499991:{c.instructions+=4;NFSU2_TR(0x499991);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499992:{NFSU2_TR(0x499992);
u8 U[4];
w4(U+0,u32(0x2edbde5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499997:{NFSU2_TR(0x499997);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499998:{NFSU2_TR(0x499998);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49999dull));
TAIL_STATIC(0x537a10u,537);
}
B49999d:L49999d:{c.instructions+=3;NFSU2_TR(0x49999d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4999a0:{NFSU2_TR(0x4999a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999a1:{NFSU2_TR(0x4999a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4999a6ull));
TAIL_STATIC(0x50c900u,50c);
}
B4999a6:L4999a6:{c.instructions+=6;NFSU2_TR(0x4999a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4999a9:{NFSU2_TR(0x4999a9);
u8 U[4];
w4(U+0,u32(0x200ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999ae:{NFSU2_TR(0x4999ae);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4999b2:{NFSU2_TR(0x4999b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999b3:{NFSU2_TR(0x4999b3);
w4(R+4,u32(0x85b940ull));
}
B4999b8:{NFSU2_TR(0x4999b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4999bdull));
TAIL_STATIC(0x515330u,515);
}
B4999bd:L4999bd:{c.instructions+=7;NFSU2_TR(0x4999bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4999c0:{NFSU2_TR(0x4999c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4999c4:{NFSU2_TR(0x4999c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999c5:{NFSU2_TR(0x4999c5);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999ca:{NFSU2_TR(0x4999ca);
u8 U[4];
w4(U+0,u32(0x4a04e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999cf:{NFSU2_TR(0x4999cf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999d0:{NFSU2_TR(0x4999d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4999d5ull));
TAIL_STATIC(0x537b80u,537);
}
B4999d5:L4999d5:{c.instructions+=5;NFSU2_TR(0x4999d5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4999d8:{NFSU2_TR(0x4999d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4999d9:{NFSU2_TR(0x4999d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4999da:{NFSU2_TR(0x4999da);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4999e0:{NFSU2_TR(0x4999e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4999e1:L4999e1:{c.instructions+=3;NFSU2_TR(0x4999e1);
__builtin_memmove((R+0),gp(0x863444),4);
}
B4999e6:{NFSU2_TR(0x4999e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4999e8:{NFSU2_TR(0x4999e8);
if(r1(R+518)){{goto L499a67;}}
}
B4999ea:L4999ea:{c.instructions+=3;NFSU2_TR(0x4999ea);
__builtin_memmove((R+28),gp(0x86344c),4);
}
B4999f0:{NFSU2_TR(0x4999f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4999f2:{NFSU2_TR(0x4999f2);
if(r1(R+518)){{goto L499a67;}}
}
B4999f4:L4999f4:{c.instructions+=4;NFSU2_TR(0x4999f4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4999f5:{NFSU2_TR(0x4999f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4999f8:{NFSU2_TR(0x4999f8);
__builtin_memmove((R+4),(R+28),4);
}
B4999fa:{NFSU2_TR(0x4999fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4999ffull));
TAIL_STATIC(0x512920u,512);
}
B4999ff:L4999ff:{c.instructions+=4;NFSU2_TR(0x4999ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a00:{NFSU2_TR(0x499a00);
u8 U[4];
w4(U+0,u32(0x4a04e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a05:{NFSU2_TR(0x499a05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a06:{NFSU2_TR(0x499a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a0bull));
TAIL_STATIC(0x537a10u,537);
}
B499a0b:L499a0b:{c.instructions+=3;NFSU2_TR(0x499a0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499a0e:{NFSU2_TR(0x499a0e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a0f:{NFSU2_TR(0x499a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a14ull));
TAIL_STATIC(0x50c900u,50c);
}
B499a14:L499a14:{c.instructions+=4;NFSU2_TR(0x499a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B499a17:{NFSU2_TR(0x499a17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499a1a:{NFSU2_TR(0x499a1a);
__builtin_memmove((R+4),(R+28),4);
}
B499a1c:{NFSU2_TR(0x499a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a21ull));
TAIL_STATIC(0x4ffea0u,4ff);
}
B499a21:L499a21:{c.instructions+=4;NFSU2_TR(0x499a21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a22:{NFSU2_TR(0x499a22);
u8 U[4];
w4(U+0,u32(0x2edbde5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a27:{NFSU2_TR(0x499a27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a28:{NFSU2_TR(0x499a28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a2dull));
TAIL_STATIC(0x537a10u,537);
}
B499a2d:L499a2d:{c.instructions+=3;NFSU2_TR(0x499a2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499a30:{NFSU2_TR(0x499a30);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a31:{NFSU2_TR(0x499a31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a36ull));
TAIL_STATIC(0x50c900u,50c);
}
B499a36:L499a36:{c.instructions+=6;NFSU2_TR(0x499a36);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499a39:{NFSU2_TR(0x499a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B499a3c:{NFSU2_TR(0x499a3c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499a3f:{NFSU2_TR(0x499a3f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499a41:{NFSU2_TR(0x499a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B499a42:{NFSU2_TR(0x499a42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499a4b;}}
}
B499a44:L499a44:{c.instructions+=2;NFSU2_TR(0x499a44);
u8 U[4];
w4(U+0,u32(0x67f55a89ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a49:{NFSU2_TR(0x499a49);
{goto L499a50;}
}
B499a4b:L499a4b:{c.instructions+=1;NFSU2_TR(0x499a4b);
u8 U[4];
w4(U+0,u32(0x54b17dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a50:L499a50:{c.instructions+=3;NFSU2_TR(0x499a50);
u8 U[4];
w4(U+0,u32(0xd72f002aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a55:{NFSU2_TR(0x499a55);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a56:{NFSU2_TR(0x499a56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a5bull));
TAIL_STATIC(0x537a10u,537);
}
B499a5b:L499a5b:{c.instructions+=3;NFSU2_TR(0x499a5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499a5e:{NFSU2_TR(0x499a5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a5f:{NFSU2_TR(0x499a5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499a64ull));
TAIL_STATIC(0x50c900u,50c);
}
B499a64:L499a64:{c.instructions+=1;NFSU2_TR(0x499a64);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499a67:L499a67:{c.instructions+=4;NFSU2_TR(0x499a67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499a68:{NFSU2_TR(0x499a68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499a69:{NFSU2_TR(0x499a69);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x200ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x200ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B499a6f:{NFSU2_TR(0x499a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499a70:L499a70:{c.instructions+=14;NFSU2_TR(0x499a70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a72:{NFSU2_TR(0x499a72);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a77:{NFSU2_TR(0x499a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499a7d:{NFSU2_TR(0x499a7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a7e:{NFSU2_TR(0x499a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499a85:{NFSU2_TR(0x499a85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a86:{NFSU2_TR(0x499a86);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499a87:{NFSU2_TR(0x499a87);
__builtin_memmove((R+24),(R+4),4);
}
B499a89:{NFSU2_TR(0x499a89);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499a8d:{NFSU2_TR(0x499a8d);
u8 U[4];
w4(U+0,u32(0x78f988ull));
s4(u32(r4(R+24)),r4(U+0));
}
B499a93:{NFSU2_TR(0x499a93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499a96:{NFSU2_TR(0x499a96);
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
B499a98:{NFSU2_TR(0x499a98);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B499aa0:{NFSU2_TR(0x499aa0);
if(r1(R+518)){{goto L499aea;}}
}
B499aa2:L499aa2:{c.instructions+=3;NFSU2_TR(0x499aa2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499aa5:{NFSU2_TR(0x499aa5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499aa7:{NFSU2_TR(0x499aa7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499abc;}}
}
B499aa9:L499aa9:{c.instructions+=1;NFSU2_TR(0x499aa9);
__builtin_memmove((R+16),(R+16),4);
}
B499ab0:L499ab0:{c.instructions+=1;NFSU2_TR(0x499ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ab5ull));
TAIL_STATIC(0x57ef60u,57e);
}
B499ab5:L499ab5:{c.instructions+=3;NFSU2_TR(0x499ab5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499ab8:{NFSU2_TR(0x499ab8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499aba:{NFSU2_TR(0x499aba);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499ab0u);}goto L499ab0;}}
}
B499abc:L499abc:{c.instructions+=3;NFSU2_TR(0x499abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499abf:{NFSU2_TR(0x499abf);
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
B499ac1:{NFSU2_TR(0x499ac1);
if(r1(R+518)){{goto L499aea;}}
}
B499ac3:L499ac3:{c.instructions+=2;NFSU2_TR(0x499ac3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ac5:{NFSU2_TR(0x499ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499acaull));
TAIL_STATIC(0x571010u,571);
}
B499aca:L499aca:{c.instructions+=3;NFSU2_TR(0x499aca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499acd:{NFSU2_TR(0x499acd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ace:{NFSU2_TR(0x499ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ad3ull));
TAIL_STATIC(0x580e90u,580);
}
B499ad3:L499ad3:{c.instructions+=6;NFSU2_TR(0x499ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499ad6:{NFSU2_TR(0x499ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499adc:{NFSU2_TR(0x499adc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B499adf:{NFSU2_TR(0x499adf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ae0:{NFSU2_TR(0x499ae0);
w4(R+4,u32(0x88eb00ull));
}
B499ae5:{NFSU2_TR(0x499ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499aeaull));
TAIL_STATIC(0x5d6130u,5d6);
}
B499aea:L499aea:{c.instructions+=3;NFSU2_TR(0x499aea);
__builtin_memmove((R+4),(R+24),4);
}
B499aec:{NFSU2_TR(0x499aec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B499af4:{NFSU2_TR(0x499af4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499af9ull));
TAIL_STATIC(0x510d40u,510);
}
B499af9:L499af9:{c.instructions+=5;NFSU2_TR(0x499af9);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499afd:{NFSU2_TR(0x499afd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499afe:{NFSU2_TR(0x499afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499b05:{NFSU2_TR(0x499b05);
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
B499b08:{NFSU2_TR(0x499b08);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499b10:L499b10:{c.instructions+=8;NFSU2_TR(0x499b10);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499b15:{NFSU2_TR(0x499b15);
__builtin_memmove((R+8),gp(0x863448),4);
}
B499b1b:{NFSU2_TR(0x499b1b);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B499b1d:{NFSU2_TR(0x499b1d);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B499b1f:{NFSU2_TR(0x499b1f);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B499b21:{NFSU2_TR(0x499b21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b22:{NFSU2_TR(0x499b22);
w4(R+4,u32(0x85ad40ull));
}
B499b27:{NFSU2_TR(0x499b27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b2cull));
TAIL_STATIC(0x541160u,541);
}
B499b2c:L499b2c:{c.instructions+=3;NFSU2_TR(0x499b2c);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499b32:{NFSU2_TR(0x499b32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b34:{NFSU2_TR(0x499b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b39ull));
TAIL_STATIC(0x5f4240u,5f4);
}
B499b39:L499b39:{c.instructions+=4;NFSU2_TR(0x499b39);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499b3f:{NFSU2_TR(0x499b3f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b41:{NFSU2_TR(0x499b41);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b43:{NFSU2_TR(0x499b43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b48ull));
TAIL_STATIC(0x5f41e0u,5f4);
}
B499b48:L499b48:{c.instructions+=1;NFSU2_TR(0x499b48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499b50:L499b50:{c.instructions+=6;NFSU2_TR(0x499b50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b51:{NFSU2_TR(0x499b51);
__builtin_memmove((R+28),(R+4),4);
}
B499b53:{NFSU2_TR(0x499b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499b56:{NFSU2_TR(0x499b56);
u8 U[4];
w4(U+0,u32(0xf365871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b5b:{NFSU2_TR(0x499b5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b5c:{NFSU2_TR(0x499b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b61ull));
TAIL_STATIC(0x5379c0u,537);
}
B499b61:L499b61:{c.instructions+=2;NFSU2_TR(0x499b61);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b62:{NFSU2_TR(0x499b62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b67ull));
TAIL_STATIC(0x50ca00u,50c);
}
B499b67:L499b67:{c.instructions+=4;NFSU2_TR(0x499b67);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499b6c:{NFSU2_TR(0x499b6c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B499b6f:{NFSU2_TR(0x499b6f);
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
B499b71:{NFSU2_TR(0x499b71);
if(r1(R+518)){{goto L499b98;}}
}
B499b73:L499b73:{c.instructions+=4;NFSU2_TR(0x499b73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b74:{NFSU2_TR(0x499b74);
__builtin_memmove((R+24),gp(0x863448),4);
}
B499b7a:{NFSU2_TR(0x499b7a);
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
B499b7c:{NFSU2_TR(0x499b7c);
if(r1(R+518)){{goto L499b97;}}
}
B499b7e:L499b7e:{c.instructions+=2;NFSU2_TR(0x499b7e);
__builtin_memmove((R+4),(R+24),4);
}
B499b80:{NFSU2_TR(0x499b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b85ull));
TAIL_STATIC(0x4ffdd0u,4ff);
}
B499b85:L499b85:{c.instructions+=2;NFSU2_TR(0x499b85);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B499b88:{NFSU2_TR(0x499b88);
if(r1(R+518)){{goto L499b9a;}}
}
B499b8a:L499b8a:{c.instructions+=4;NFSU2_TR(0x499b8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499b8d:{NFSU2_TR(0x499b8d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b8e:{NFSU2_TR(0x499b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499b8f:{NFSU2_TR(0x499b8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499b94ull));
TAIL_STATIC(0x53d630u,53d);
}
B499b94:L499b94:{c.instructions+=1;NFSU2_TR(0x499b94);
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
B499b97:L499b97:{c.instructions+=1;NFSU2_TR(0x499b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499b98:L499b98:{c.instructions+=2;NFSU2_TR(0x499b98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499b99:{NFSU2_TR(0x499b99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499b9a:L499b9a:{c.instructions+=3;NFSU2_TR(0x499b9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499b9b:{NFSU2_TR(0x499b9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499b9c:{NFSU2_TR(0x499b9c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499b10u);}goto L499b10;}
}
B499bb0:L499bb0:{c.instructions+=4;NFSU2_TR(0x499bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499bb3:{NFSU2_TR(0x499bb3);
u8 U[4];
w4(U+0,u32(0xf365871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499bb8:{NFSU2_TR(0x499bb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499bb9:{NFSU2_TR(0x499bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499bbeull));
TAIL_STATIC(0x5379c0u,537);
}
B499bbe:L499bbe:{c.instructions+=2;NFSU2_TR(0x499bbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499bbf:{NFSU2_TR(0x499bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499bc4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B499bc4:L499bc4:{c.instructions+=4;NFSU2_TR(0x499bc4);
__builtin_memmove((R+0),gp(0x863444),4);
}
B499bc9:{NFSU2_TR(0x499bc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B499bcc:{NFSU2_TR(0x499bcc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499bce:{NFSU2_TR(0x499bce);
if(r1(R+518)){{goto L499be4;}}
}
B499bd0:L499bd0:{c.instructions+=3;NFSU2_TR(0x499bd0);
__builtin_memmove((R+0),gp(0x863448),4);
}
B499bd5:{NFSU2_TR(0x499bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499bd7:{NFSU2_TR(0x499bd7);
if(r1(R+518)){{goto L499be4;}}
}
B499bd9:L499bd9:{c.instructions+=3;NFSU2_TR(0x499bd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499bda:{NFSU2_TR(0x499bda);
w4(R+4,u32(0x85ad40ull));
}
B499bdf:{NFSU2_TR(0x499bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499be4ull));
TAIL_STATIC(0x5138f0u,513);
}
B499be4:L499be4:{c.instructions+=2;NFSU2_TR(0x499be4);
w4(R+4,u32(0x8635bcull));
}
B499be9:{NFSU2_TR(0x499be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499beeull));
TAIL_STATIC(0x511280u,511);
}
B499bee:L499bee:{c.instructions+=3;NFSU2_TR(0x499bee);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B499bf4:{NFSU2_TR(0x499bf4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499bf6:{NFSU2_TR(0x499bf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499bfbull));
TAIL_STATIC(0x5f4240u,5f4);
}
B499bfb:L499bfb:{c.instructions+=1;NFSU2_TR(0x499bfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499c00:L499c00:{c.instructions+=7;NFSU2_TR(0x499c00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499c01:{NFSU2_TR(0x499c01);
__builtin_memmove((R+20),(R+16),4);
}
B499c03:{NFSU2_TR(0x499c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499c06:{NFSU2_TR(0x499c06);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499c0b:{NFSU2_TR(0x499c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499c0c:{NFSU2_TR(0x499c0c);
__builtin_memmove((R+24),(R+4),4);
}
B499c0e:{NFSU2_TR(0x499c0e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L499d01;}}
}
B499c14:L499c14:{c.instructions+=1;NFSU2_TR(0x499c14);
if(r1(R+518)){{goto L499cc1;}}
}
B499c1a:L499c1a:{c.instructions+=2;NFSU2_TR(0x499c1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499c1f:{NFSU2_TR(0x499c1f);
if(r1(R+518)){{goto L499c73;}}
}
B499c21:L499c21:{c.instructions+=2;NFSU2_TR(0x499c21);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499c26:{NFSU2_TR(0x499c26);
if(r1(R+518)){{goto L499c4c;}}
}
B499c28:L499c28:{c.instructions+=2;NFSU2_TR(0x499c28);
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
B499c2d:{NFSU2_TR(0x499c2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499da4;}}
}
B499c33:L499c33:{c.instructions+=3;NFSU2_TR(0x499c33);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499c36:{NFSU2_TR(0x499c36);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499c38:{NFSU2_TR(0x499c38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499cc1;}}
}
B499c3e:L499c3e:{c.instructions+=1;NFSU2_TR(0x499c3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499c43ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499bb0u);}goto L499bb0;}
}
B499c43:L499c43:{c.instructions+=4;NFSU2_TR(0x499c43);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499c47:{NFSU2_TR(0x499c47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499c48:{NFSU2_TR(0x499c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499c49:{NFSU2_TR(0x499c49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499c4c:L499c4c:{c.instructions+=2;NFSU2_TR(0x499c4c);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499c4e:{NFSU2_TR(0x499c4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499c53ull));
TAIL_STATIC(0x50d180u,50d);
}
B499c53:L499c53:{c.instructions+=4;NFSU2_TR(0x499c53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499c56:{NFSU2_TR(0x499c56);
u8 U[4];
w4(U+0,u32(0x63857de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499c5b:{NFSU2_TR(0x499c5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499c5c:{NFSU2_TR(0x499c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499c61ull));
TAIL_STATIC(0x52cea0u,52c);
}
B499c61:L499c61:{c.instructions+=3;NFSU2_TR(0x499c61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B499c64:{NFSU2_TR(0x499c64);
w4(R+4,u32(0x8635bcull));
}
B499c69:{NFSU2_TR(0x499c69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499c6eull));
TAIL_STATIC(0x5251a0u,525);
}
B499c6e:L499c6e:{c.instructions+=3;NFSU2_TR(0x499c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499c6f:{NFSU2_TR(0x499c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499c70:{NFSU2_TR(0x499c70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499c73:L499c73:{c.instructions+=4;NFSU2_TR(0x499c73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499c76:{NFSU2_TR(0x499c76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499c79:{NFSU2_TR(0x499c79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x63857de0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499c7e:{NFSU2_TR(0x499c7e);
if(r1(R+518)){{goto L499ca6;}}
}
B499c80:L499c80:{c.instructions+=2;NFSU2_TR(0x499c80);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd72f002aull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd72f002aull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd72f002aull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B499c85:{NFSU2_TR(0x499c85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499da4;}}
}
B499c8b:L499c8b:{c.instructions+=3;NFSU2_TR(0x499c8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499c8e:{NFSU2_TR(0x499c8e);
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
B499c90:{NFSU2_TR(0x499c90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499da4;}}
}
B499c96:L499c96:{c.instructions+=2;NFSU2_TR(0x499c96);
__builtin_memmove((R+4),(R+24),4);
}
B499c98:{NFSU2_TR(0x499c98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499c9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499b50u);}goto L499b50;}
}
B499c9d:L499c9d:{c.instructions+=4;NFSU2_TR(0x499c9d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499ca1:{NFSU2_TR(0x499ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499ca2:{NFSU2_TR(0x499ca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499ca3:{NFSU2_TR(0x499ca3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499ca6:L499ca6:{c.instructions+=3;NFSU2_TR(0x499ca6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499ca9:{NFSU2_TR(0x499ca9);
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
B499cab:{NFSU2_TR(0x499cab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499da4;}}
}
B499cb1:L499cb1:{c.instructions+=2;NFSU2_TR(0x499cb1);
__builtin_memmove((R+4),(R+24),4);
}
B499cb3:{NFSU2_TR(0x499cb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499cb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499bb0u);}goto L499bb0;}
}
B499cb8:L499cb8:{c.instructions+=4;NFSU2_TR(0x499cb8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499cbc:{NFSU2_TR(0x499cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499cbd:{NFSU2_TR(0x499cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499cbe:{NFSU2_TR(0x499cbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499cc1:L499cc1:{c.instructions+=3;NFSU2_TR(0x499cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499cc4:{NFSU2_TR(0x499cc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499cc5:{NFSU2_TR(0x499cc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ccaull));
TAIL_STATIC(0x51cd60u,51c);
}
B499cca:L499cca:{c.instructions+=4;NFSU2_TR(0x499cca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499ccd:{NFSU2_TR(0x499ccd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B499cd0:{NFSU2_TR(0x499cd0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xd72f002aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xd72f002aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xd72f002aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B499cd6:{NFSU2_TR(0x499cd6);
if(r1(R+518)){{goto L499da4;}}
}
B499cdc:L499cdc:{c.instructions+=4;NFSU2_TR(0x499cdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499cdf:{NFSU2_TR(0x499cdf);
u8 U[4];
w4(U+0,u32(0xd72f002aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ce4:{NFSU2_TR(0x499ce4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ce5:{NFSU2_TR(0x499ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ceaull));
TAIL_STATIC(0x52cea0u,52c);
}
B499cea:L499cea:{c.instructions+=6;NFSU2_TR(0x499cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499ced:{NFSU2_TR(0x499ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499cf0:{NFSU2_TR(0x499cf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499cf1:{NFSU2_TR(0x499cf1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499cf3:{NFSU2_TR(0x499cf3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499cf4:{NFSU2_TR(0x499cf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499cf9ull));
TAIL_STATIC(0x50d150u,50d);
}
B499cf9:L499cf9:{c.instructions+=4;NFSU2_TR(0x499cf9);
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
B499cfc:{NFSU2_TR(0x499cfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499cfd:{NFSU2_TR(0x499cfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499cfe:{NFSU2_TR(0x499cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499d01:L499d01:{c.instructions+=2;NFSU2_TR(0x499d01);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B499d06:{NFSU2_TR(0x499d06);
if(r1(R+518)){{goto L499d6d;}}
}
B499d08:L499d08:{c.instructions+=2;NFSU2_TR(0x499d08);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc98356baull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B499d0d:{NFSU2_TR(0x499d0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499da4;}}
}
B499d13:L499d13:{c.instructions+=3;NFSU2_TR(0x499d13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499d16:{NFSU2_TR(0x499d16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499d18:{NFSU2_TR(0x499d18);
if(r1(R+518)){{goto L499d51;}}
}
B499d1a:L499d1a:{c.instructions+=6;NFSU2_TR(0x499d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499d1d:{NFSU2_TR(0x499d1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499d20:{NFSU2_TR(0x499d20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d21:{NFSU2_TR(0x499d21);
u8 U[4];
w4(U+0,u32(0xf365871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d26:{NFSU2_TR(0x499d26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d27:{NFSU2_TR(0x499d27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d2cull));
TAIL_STATIC(0x537a60u,537);
}
B499d2c:L499d2c:{c.instructions+=3;NFSU2_TR(0x499d2c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B499d2f:{NFSU2_TR(0x499d2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d30:{NFSU2_TR(0x499d30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d35ull));
TAIL_STATIC(0x50c990u,50c);
}
B499d35:L499d35:{c.instructions+=4;NFSU2_TR(0x499d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B499d38:{NFSU2_TR(0x499d38);
u8 U[4];
w4(U+0,u32(0xf365871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d3d:{NFSU2_TR(0x499d3d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d3e:{NFSU2_TR(0x499d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d43ull));
TAIL_STATIC(0x5379c0u,537);
}
B499d43:L499d43:{c.instructions+=2;NFSU2_TR(0x499d43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d44:{NFSU2_TR(0x499d44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d49ull));
TAIL_STATIC(0x50ca50u,50c);
}
B499d49:L499d49:{c.instructions+=4;NFSU2_TR(0x499d49);
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
B499d4c:{NFSU2_TR(0x499d4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499d4d:{NFSU2_TR(0x499d4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499d4e:{NFSU2_TR(0x499d4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499d51:L499d51:{c.instructions+=4;NFSU2_TR(0x499d51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B499d54:{NFSU2_TR(0x499d54);
u8 U[4];
w4(U+0,u32(0xf365871ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d59:{NFSU2_TR(0x499d59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d5a:{NFSU2_TR(0x499d5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d5full));
TAIL_STATIC(0x5379c0u,537);
}
B499d5f:L499d5f:{c.instructions+=2;NFSU2_TR(0x499d5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d60:{NFSU2_TR(0x499d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d65ull));
TAIL_STATIC(0x50ca00u,50c);
}
B499d65:L499d65:{c.instructions+=4;NFSU2_TR(0x499d65);
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
B499d68:{NFSU2_TR(0x499d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499d69:{NFSU2_TR(0x499d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499d6a:{NFSU2_TR(0x499d6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499d6d:L499d6d:{c.instructions+=3;NFSU2_TR(0x499d6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499d70:{NFSU2_TR(0x499d70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d71:{NFSU2_TR(0x499d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d76ull));
TAIL_STATIC(0x51cd60u,51c);
}
B499d76:L499d76:{c.instructions+=4;NFSU2_TR(0x499d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499d79:{NFSU2_TR(0x499d79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B499d7c:{NFSU2_TR(0x499d7c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x63857de0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x63857de0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x63857de0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B499d82:{NFSU2_TR(0x499d82);
if(r1(R+518)){{goto L499da4;}}
}
B499d84:L499d84:{c.instructions+=4;NFSU2_TR(0x499d84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499d87:{NFSU2_TR(0x499d87);
u8 U[4];
w4(U+0,u32(0x63857de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d8c:{NFSU2_TR(0x499d8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d8d:{NFSU2_TR(0x499d8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499d92ull));
TAIL_STATIC(0x52cea0u,52c);
}
B499d92:L499d92:{c.instructions+=6;NFSU2_TR(0x499d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499d95:{NFSU2_TR(0x499d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499d98:{NFSU2_TR(0x499d98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d99:{NFSU2_TR(0x499d99);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d9b:{NFSU2_TR(0x499d9b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499d9c:{NFSU2_TR(0x499d9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499da1ull));
TAIL_STATIC(0x50d150u,50d);
}
B499da1:L499da1:{c.instructions+=1;NFSU2_TR(0x499da1);
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
B499da4:L499da4:{c.instructions+=3;NFSU2_TR(0x499da4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499da5:{NFSU2_TR(0x499da5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B499da6:{NFSU2_TR(0x499da6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499db0:L499db0:{c.instructions+=2;NFSU2_TR(0x499db0);
__builtin_memmove((R+0),gp(0x836352),1);
}
B499db5:{NFSU2_TR(0x499db5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499dc0:L499dc0:{c.instructions+=2;NFSU2_TR(0x499dc0);
__builtin_memmove((R+0),gp(0x836353),1);
}
B499dc5:{NFSU2_TR(0x499dc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499dd0:L499dd0:{c.instructions+=14;NFSU2_TR(0x499dd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499dd2:{NFSU2_TR(0x499dd2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499dd7:{NFSU2_TR(0x499dd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499ddd:{NFSU2_TR(0x499ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499dde:{NFSU2_TR(0x499dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499de5:{NFSU2_TR(0x499de5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499de6:{NFSU2_TR(0x499de6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499de7:{NFSU2_TR(0x499de7);
__builtin_memmove((R+24),(R+4),4);
}
B499de9:{NFSU2_TR(0x499de9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499ded:{NFSU2_TR(0x499ded);
u8 U[4];
w4(U+0,u32(0x78f998ull));
s4(u32(r4(R+24)),r4(U+0));
}
B499df3:{NFSU2_TR(0x499df3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499df5:{NFSU2_TR(0x499df5);
w4(R+4,u32(0x85ef50ull));
}
B499dfa:{NFSU2_TR(0x499dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B499e02:{NFSU2_TR(0x499e02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499e07ull));
TAIL_STATIC(0x5012e0u,501);
}
B499e07:L499e07:{c.instructions+=3;NFSU2_TR(0x499e07);
w4(R+4,u32(0x8364f4ull));
}
B499e0c:{NFSU2_TR(0x499e0c);
s4(0x7f68b4,u32(0x1ull));
}
B499e16:{NFSU2_TR(0x499e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499e1bull));
TAIL_STATIC(0x510a70u,510);
}
B499e1b:L499e1b:{c.instructions+=2;NFSU2_TR(0x499e1b);
w4(R+4,u32(0x8364f4ull));
}
B499e20:{NFSU2_TR(0x499e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499e25ull));
TAIL_STATIC(0x523b40u,523);
}
B499e25:L499e25:{c.instructions+=3;NFSU2_TR(0x499e25);
__builtin_memmove((R+4),(R+24),4);
}
B499e27:{NFSU2_TR(0x499e27);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B499e2f:{NFSU2_TR(0x499e2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499e34ull));
TAIL_STATIC(0x510d40u,510);
}
B499e34:L499e34:{c.instructions+=5;NFSU2_TR(0x499e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499e38:{NFSU2_TR(0x499e38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499e39:{NFSU2_TR(0x499e39);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B499e40:{NFSU2_TR(0x499e40);
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
B499e43:{NFSU2_TR(0x499e43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499e50:L499e50:{c.instructions+=2;NFSU2_TR(0x499e50);
s1(0x836358,u8(0x1ull));
}
B499e57:{NFSU2_TR(0x499e57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499e60:L499e60:{c.instructions+=6;NFSU2_TR(0x499e60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e61:{NFSU2_TR(0x499e61);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e63:{NFSU2_TR(0x499e63);
__builtin_memmove((R+24),(R+4),4);
}
B499e65:{NFSU2_TR(0x499e65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e67:{NFSU2_TR(0x499e67);
w4(R+4,u32(0x8364f4ull));
}
B499e6c:{NFSU2_TR(0x499e6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499e71ull));
TAIL_STATIC(0x510940u,510);
}
B499e71:L499e71:{c.instructions+=8;NFSU2_TR(0x499e71);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499e77:{NFSU2_TR(0x499e77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499e7d:{NFSU2_TR(0x499e7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e7e:{NFSU2_TR(0x499e7e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e80:{NFSU2_TR(0x499e80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e81:{NFSU2_TR(0x499e81);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e83:{NFSU2_TR(0x499e83);
w4(R+4,u32(0x8364f4ull));
}
B499e88:{NFSU2_TR(0x499e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499e8dull));
TAIL_STATIC(0x523bc0u,523);
}
B499e8d:L499e8d:{c.instructions+=6;NFSU2_TR(0x499e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B499e90:{NFSU2_TR(0x499e90);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e92:{NFSU2_TR(0x499e92);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e97:{NFSU2_TR(0x499e97);
u8 U[4];
w4(U+0,u32(0xb6638240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e9c:{NFSU2_TR(0x499e9c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499e9d:{NFSU2_TR(0x499e9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ea2ull));
TAIL_STATIC(0x537c00u,537);
}
B499ea2:L499ea2:{c.instructions+=6;NFSU2_TR(0x499ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499ea5:{NFSU2_TR(0x499ea5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ea7:{NFSU2_TR(0x499ea7);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499eac:{NFSU2_TR(0x499eac);
u8 U[4];
w4(U+0,u32(0x824fa72full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499eb1:{NFSU2_TR(0x499eb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499eb2:{NFSU2_TR(0x499eb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499eb7ull));
TAIL_STATIC(0x537c00u,537);
}
B499eb7:L499eb7:{c.instructions+=3;NFSU2_TR(0x499eb7);
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
B499eba:{NFSU2_TR(0x499eba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499ebb:{NFSU2_TR(0x499ebb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499ec0:L499ec0:{c.instructions+=3;NFSU2_TR(0x499ec0);
__builtin_memmove((R+0),gp(0x836354),4);
}
B499ec5:{NFSU2_TR(0x499ec5);
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
B499ec7:{NFSU2_TR(0x499ec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499f0e;}}
}
B499ec9:L499ec9:{c.instructions+=9;NFSU2_TR(0x499ec9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ecb:{NFSU2_TR(0x499ecb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ecd:{NFSU2_TR(0x499ecd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ecf:{NFSU2_TR(0x499ecf);
u8 U[4];
w4(U+0,u32(0x499e50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ed4:{NFSU2_TR(0x499ed4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ed6:{NFSU2_TR(0x499ed6);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ed8:{NFSU2_TR(0x499ed8);
u8 U[4];
w4(U+0,u32(0x78f9a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499edd:{NFSU2_TR(0x499edd);
s1(0x836358,u8(0x0ull));
}
B499ee4:{NFSU2_TR(0x499ee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ee9ull));
TAIL_STATIC(0x57cf70u,57c);
}
B499ee9:L499ee9:{c.instructions+=3;NFSU2_TR(0x499ee9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B499eec:{NFSU2_TR(0x499eec);
__builtin_memmove(gp(0x836354),(R+0),4);
}
B499ef1:{NFSU2_TR(0x499ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ef6ull));
TAIL_STATIC(0x571060u,571);
}
B499ef6:L499ef6:{c.instructions+=2;NFSU2_TR(0x499ef6);
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
B499ef8:{NFSU2_TR(0x499ef8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L499f0e;}}
}
B499efa:L499efa:{c.instructions+=1;NFSU2_TR(0x499efa);
__builtin_memmove((R+12),(R+12),4);
}
B499f00:L499f00:{c.instructions+=1;NFSU2_TR(0x499f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499f05ull));
TAIL_STATIC(0x57ef60u,57e);
}
B499f05:L499f05:{c.instructions+=1;NFSU2_TR(0x499f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499f0aull));
TAIL_STATIC(0x571060u,571);
}
B499f0a:L499f0a:{c.instructions+=2;NFSU2_TR(0x499f0a);
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
B499f0c:{NFSU2_TR(0x499f0c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499f00u);}goto L499f00;}}
}
B499f0e:L499f0e:{c.instructions+=1;NFSU2_TR(0x499f0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499f10:L499f10:{c.instructions+=9;NFSU2_TR(0x499f10);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B499f15:{NFSU2_TR(0x499f15);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f16:{NFSU2_TR(0x499f16);
__builtin_memmove((R+24),(R+4),4);
}
B499f18:{NFSU2_TR(0x499f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B499f1b:{NFSU2_TR(0x499f1b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499f21:{NFSU2_TR(0x499f21);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499f23:{NFSU2_TR(0x499f23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f24:{NFSU2_TR(0x499f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B499f2a:{NFSU2_TR(0x499f2a);
if(r1(R+518)){{goto L499f45;}}
}
B499f2c:L499f2c:{c.instructions+=6;NFSU2_TR(0x499f2c);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f31:{NFSU2_TR(0x499f31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f33:{NFSU2_TR(0x499f33);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f35:{NFSU2_TR(0x499f35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f36:{NFSU2_TR(0x499f36);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499f3d:{NFSU2_TR(0x499f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499f42ull));
TAIL_STATIC(0x61f820u,61f);
}
B499f42:L499f42:{c.instructions+=1;NFSU2_TR(0x499f42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B499f45:L499f45:{c.instructions+=3;NFSU2_TR(0x499f45);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499f4b:{NFSU2_TR(0x499f4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B499f4d:{NFSU2_TR(0x499f4d);
if(r1(R+518)){{goto L499f77;}}
}
B499f4f:L499f4f:{c.instructions+=6;NFSU2_TR(0x499f4f);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f54:{NFSU2_TR(0x499f54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f56:{NFSU2_TR(0x499f56);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f58:{NFSU2_TR(0x499f58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f59:{NFSU2_TR(0x499f59);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeaull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499f60:{NFSU2_TR(0x499f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499f65ull));
TAIL_STATIC(0x61f820u,61f);
}
B499f65:L499f65:{c.instructions+=5;NFSU2_TR(0x499f65);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f6a:{NFSU2_TR(0x499f6a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f6c:{NFSU2_TR(0x499f6c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f6e:{NFSU2_TR(0x499f6e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f6f:{NFSU2_TR(0x499f6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499f74ull));
TAIL_STATIC(0x61f820u,61f);
}
B499f74:L499f74:{c.instructions+=1;NFSU2_TR(0x499f74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B499f77:L499f77:{c.instructions+=3;NFSU2_TR(0x499f77);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xebull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499f7d:{NFSU2_TR(0x499f7d);
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
B499f7f:{NFSU2_TR(0x499f7f);
if(r1(R+518)){{goto L499f9a;}}
}
B499f81:L499f81:{c.instructions+=6;NFSU2_TR(0x499f81);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f86:{NFSU2_TR(0x499f86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f88:{NFSU2_TR(0x499f88);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f8a:{NFSU2_TR(0x499f8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499f8b:{NFSU2_TR(0x499f8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xebull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B499f92:{NFSU2_TR(0x499f92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499f97ull));
TAIL_STATIC(0x61f820u,61f);
}
B499f97:L499f97:{c.instructions+=1;NFSU2_TR(0x499f97);
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
B499f9a:L499f9a:{c.instructions+=3;NFSU2_TR(0x499f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B499f9b:{NFSU2_TR(0x499f9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B499f9c:{NFSU2_TR(0x499f9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B499fa0:L499fa0:{c.instructions+=4;NFSU2_TR(0x499fa0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499fa1:{NFSU2_TR(0x499fa1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499fa2:{NFSU2_TR(0x499fa2);
__builtin_memmove((R+24),(R+4),4);
}
B499fa4:{NFSU2_TR(0x499fa4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499fa9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x499f10u);}goto L499f10;}
}
B499fa9:L499fa9:{c.instructions+=4;NFSU2_TR(0x499fa9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B499faf:{NFSU2_TR(0x499faf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B499fb1:{NFSU2_TR(0x499fb1);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B499fb3:{NFSU2_TR(0x499fb3);
if(r1(R+518)){{goto L499fcc;}}
}
B499fb5:L499fb5:{c.instructions+=4;NFSU2_TR(0x499fb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B499fbb:{NFSU2_TR(0x499fbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499fbc:{NFSU2_TR(0x499fbc);
w4(R+4,u32(0x832dacull));
}
B499fc1:{NFSU2_TR(0x499fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499fc6ull));
TAIL_STATIC(0x5ce6c0u,5ce);
}
B499fc6:L499fc6:{c.instructions+=1;NFSU2_TR(0x499fc6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B499fcc:L499fcc:{c.instructions+=3;NFSU2_TR(0x499fcc);
__builtin_memmove((R+0),gp(0x836354),4);
}
B499fd1:{NFSU2_TR(0x499fd1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B499fd3:{NFSU2_TR(0x499fd3);
if(r1(R+518)){{goto L499fea;}}
}
B499fd5:L499fd5:{c.instructions+=2;NFSU2_TR(0x499fd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499fd6:{NFSU2_TR(0x499fd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499fdbull));
TAIL_STATIC(0x580e90u,580);
}
B499fdb:L499fdb:{c.instructions+=3;NFSU2_TR(0x499fdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B499fde:{NFSU2_TR(0x499fde);
__builtin_memmove(gp(0x836358),(R+12),1);
}
B499fe4:{NFSU2_TR(0x499fe4);
__builtin_memmove(gp(0x836354),(R+12),4);
}
B499fea:L499fea:{c.instructions+=2;NFSU2_TR(0x499fea);
w4(R+4,u32(0x8a3288ull));
}
B499fef:{NFSU2_TR(0x499fef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x499ff4ull));
TAIL_STATIC(0x61c5b0u,61c);
}
B499ff4:L499ff4:{c.instructions+=3;NFSU2_TR(0x499ff4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B499ff5:{NFSU2_TR(0x499ff5);
w4(R+4,u32(0x85ef50ull));
}
B499ffa:{NFSU2_TR(0x499ffa);
__builtin_memmove(gp(0x836352),(R+12),1);
TAIL_STATIC(0x49a000u,49a);
}
XIT:NFSU2_TR_EXIT(0x499,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
