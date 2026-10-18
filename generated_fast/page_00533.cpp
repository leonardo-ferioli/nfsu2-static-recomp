#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4db(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_514(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_528(u8* __restrict R,Cpu& c);
u32 body_529(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x533,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x533,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_533(u8* __restrict R,Cpu& c);
u32 page_533(Cpu& c){return body_533(c.regs.data(),c);}
__attribute__((noinline)) u32 body_533(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x533000:goto L533000;
case 0x533003:c.instructions+=3;goto B533003;
case 0x533006:c.instructions+=2;goto B533006;
case 0x533009:c.instructions+=1;goto B533009;
case 0x53300b:goto L53300b;
case 0x53300e:c.instructions+=4;goto B53300e;
case 0x533011:c.instructions+=3;goto B533011;
case 0x533013:c.instructions+=2;goto B533013;
case 0x533016:c.instructions+=1;goto B533016;
case 0x533018:goto L533018;
case 0x53301a:c.instructions+=1;goto B53301a;
case 0x53301c:goto L53301c;
case 0x53301f:c.instructions+=2;goto B53301f;
case 0x533023:c.instructions+=1;goto B533023;
case 0x533025:goto L533025;
case 0x533027:goto L533027;
case 0x53302a:c.instructions+=2;goto B53302a;
case 0x53302d:c.instructions+=1;goto B53302d;
case 0x533034:goto L533034;
case 0x533038:c.instructions+=3;goto B533038;
case 0x533039:c.instructions+=2;goto B533039;
case 0x53303b:c.instructions+=1;goto B53303b;
case 0x53303d:goto L53303d;
case 0x533040:c.instructions+=2;goto B533040;
case 0x533043:c.instructions+=1;goto B533043;
case 0x533045:goto L533045;
case 0x533048:c.instructions+=4;goto B533048;
case 0x53304b:c.instructions+=3;goto B53304b;
case 0x53304d:c.instructions+=2;goto B53304d;
case 0x533050:c.instructions+=1;goto B533050;
case 0x533052:goto L533052;
case 0x533054:c.instructions+=1;goto B533054;
case 0x533056:goto L533056;
case 0x533059:c.instructions+=2;goto B533059;
case 0x53305d:c.instructions+=1;goto B53305d;
case 0x53305f:goto L53305f;
case 0x533061:goto L533061;
case 0x533064:c.instructions+=2;goto B533064;
case 0x533067:c.instructions+=1;goto B533067;
case 0x53306e:goto L53306e;
case 0x533072:c.instructions+=6;goto B533072;
case 0x533076:c.instructions+=5;goto B533076;
case 0x53307c:c.instructions+=4;goto B53307c;
case 0x53307f:c.instructions+=3;goto B53307f;
case 0x533081:c.instructions+=2;goto B533081;
case 0x533083:c.instructions+=1;goto B533083;
case 0x533085:goto L533085;
case 0x53308c:c.instructions+=1;goto B53308c;
case 0x53308e:goto L53308e;
case 0x53308f:c.instructions+=2;goto B53308f;
case 0x533091:c.instructions+=1;goto B533091;
case 0x533093:goto L533093;
case 0x533094:c.instructions+=6;goto B533094;
case 0x533097:c.instructions+=5;goto B533097;
case 0x533098:c.instructions+=4;goto B533098;
case 0x533099:c.instructions+=3;goto B533099;
case 0x53309b:c.instructions+=2;goto B53309b;
case 0x53309c:c.instructions+=1;goto B53309c;
case 0x53309f:goto L53309f;
case 0x5330a6:c.instructions+=2;goto B5330a6;
case 0x5330a8:c.instructions+=1;goto B5330a8;
case 0x5330aa:goto L5330aa;
case 0x5330ae:c.instructions+=3;goto B5330ae;
case 0x5330b1:c.instructions+=2;goto B5330b1;
case 0x5330b3:c.instructions+=1;goto B5330b3;
case 0x5330b5:goto L5330b5;
case 0x5330b6:c.instructions+=7;goto B5330b6;
case 0x5330b9:c.instructions+=6;goto B5330b9;
case 0x5330bd:c.instructions+=5;goto B5330bd;
case 0x5330be:c.instructions+=4;goto B5330be;
case 0x5330bf:c.instructions+=3;goto B5330bf;
case 0x5330c1:c.instructions+=2;goto B5330c1;
case 0x5330c2:c.instructions+=1;goto B5330c2;
case 0x5330d0:goto L5330d0;
case 0x5330d1:c.instructions+=3;goto B5330d1;
case 0x5330d3:c.instructions+=2;goto B5330d3;
case 0x5330d5:c.instructions+=1;goto B5330d5;
case 0x5330da:goto L5330da;
case 0x5330dc:c.instructions+=1;goto B5330dc;
case 0x5330de:goto L5330de;
case 0x5330e4:c.instructions+=2;goto B5330e4;
case 0x5330e5:c.instructions+=1;goto B5330e5;
case 0x5330e6:goto L5330e6;
case 0x5330eb:c.instructions+=3;goto B5330eb;
case 0x5330ec:c.instructions+=2;goto B5330ec;
case 0x5330ee:c.instructions+=1;goto B5330ee;
case 0x5330f3:goto L5330f3;
case 0x5330f4:c.instructions+=2;goto B5330f4;
case 0x5330f7:c.instructions+=1;goto B5330f7;
case 0x5330fc:goto L5330fc;
case 0x5330ff:c.instructions+=2;goto B5330ff;
case 0x533100:c.instructions+=1;goto B533100;
case 0x533110:goto L533110;
case 0x533113:c.instructions+=2;goto B533113;
case 0x533114:c.instructions+=1;goto B533114;
case 0x53311a:goto L53311a;
case 0x53311d:c.instructions+=2;goto B53311d;
case 0x53311f:c.instructions+=1;goto B53311f;
case 0x533121:goto L533121;
case 0x533126:c.instructions+=2;goto B533126;
case 0x533128:c.instructions+=1;goto B533128;
case 0x53312a:goto L53312a;
case 0x533130:c.instructions+=2;goto B533130;
case 0x533132:c.instructions+=1;goto B533132;
case 0x533134:goto L533134;
case 0x533138:c.instructions+=1;goto B533138;
case 0x53313a:goto L53313a;
case 0x533140:c.instructions+=2;goto B533140;
case 0x533142:c.instructions+=1;goto B533142;
case 0x533144:goto L533144;
case 0x533146:c.instructions+=2;goto B533146;
case 0x533147:c.instructions+=1;goto B533147;
case 0x533148:goto L533148;
case 0x53314f:c.instructions+=2;goto B53314f;
case 0x533151:c.instructions+=1;goto B533151;
case 0x533153:goto L533153;
case 0x533156:c.instructions+=2;goto B533156;
case 0x533158:c.instructions+=1;goto B533158;
case 0x53315a:goto L53315a;
case 0x53315d:c.instructions+=3;goto B53315d;
case 0x53315e:c.instructions+=2;goto B53315e;
case 0x533163:c.instructions+=1;goto B533163;
case 0x533168:goto L533168;
case 0x53316a:c.instructions+=1;goto B53316a;
case 0x53316c:goto L53316c;
case 0x533170:c.instructions+=1;goto B533170;
case 0x533172:goto L533172;
case 0x533174:c.instructions+=2;goto B533174;
case 0x533175:c.instructions+=1;goto B533175;
case 0x53317a:goto L53317a;
case 0x53317d:c.instructions+=2;goto B53317d;
case 0x53317f:c.instructions+=1;goto B53317f;
case 0x533181:goto L533181;
case 0x533182:c.instructions+=2;goto B533182;
case 0x533187:c.instructions+=1;goto B533187;
case 0x53318c:goto L53318c;
case 0x53318d:c.instructions+=1;goto B53318d;
case 0x53318e:goto L53318e;
case 0x533191:c.instructions+=2;goto B533191;
case 0x533193:c.instructions+=1;goto B533193;
case 0x533195:goto L533195;
case 0x533196:c.instructions+=2;goto B533196;
case 0x53319b:c.instructions+=1;goto B53319b;
case 0x5331a0:goto L5331a0;
case 0x5331a1:c.instructions+=1;goto B5331a1;
case 0x5331a2:goto L5331a2;
case 0x5331a5:c.instructions+=2;goto B5331a5;
case 0x5331a7:c.instructions+=1;goto B5331a7;
case 0x5331a9:goto L5331a9;
case 0x5331aa:c.instructions+=2;goto B5331aa;
case 0x5331af:c.instructions+=1;goto B5331af;
case 0x5331b4:goto L5331b4;
case 0x5331b5:c.instructions+=1;goto B5331b5;
case 0x5331b6:goto L5331b6;
case 0x5331b8:c.instructions+=2;goto B5331b8;
case 0x5331b9:c.instructions+=1;goto B5331b9;
case 0x5331c0:goto L5331c0;
case 0x5331c3:c.instructions+=3;goto B5331c3;
case 0x5331c4:c.instructions+=2;goto B5331c4;
case 0x5331c6:c.instructions+=1;goto B5331c6;
case 0x5331cb:goto L5331cb;
case 0x5331cf:c.instructions+=7;goto B5331cf;
case 0x5331d5:c.instructions+=6;goto B5331d5;
case 0x5331d7:c.instructions+=5;goto B5331d7;
case 0x5331d9:c.instructions+=4;goto B5331d9;
case 0x5331db:c.instructions+=3;goto B5331db;
case 0x5331df:c.instructions+=2;goto B5331df;
case 0x5331e3:c.instructions+=1;goto B5331e3;
case 0x5331e9:goto L5331e9;
case 0x5331ea:c.instructions+=4;goto B5331ea;
case 0x5331eb:c.instructions+=3;goto B5331eb;
case 0x5331ec:c.instructions+=2;goto B5331ec;
case 0x5331ee:c.instructions+=1;goto B5331ee;
case 0x5331f0:goto L5331f0;
case 0x5331f2:c.instructions+=1;goto B5331f2;
case 0x5331f8:goto L5331f8;
case 0x5331fa:c.instructions+=1;goto B5331fa;
case 0x533200:goto L533200;
case 0x533205:c.instructions+=3;goto B533205;
case 0x533208:c.instructions+=2;goto B533208;
case 0x53320a:c.instructions+=1;goto B53320a;
case 0x533210:goto L533210;
case 0x533213:c.instructions+=2;goto B533213;
case 0x533215:c.instructions+=1;goto B533215;
case 0x533217:goto L533217;
case 0x533219:c.instructions+=1;goto B533219;
case 0x53321f:goto L53321f;
case 0x533223:c.instructions+=2;goto B533223;
case 0x533229:c.instructions+=1;goto B533229;
case 0x53322f:goto L53322f;
case 0x533235:c.instructions+=4;goto B533235;
case 0x533238:c.instructions+=3;goto B533238;
case 0x53323a:c.instructions+=2;goto B53323a;
case 0x53323c:c.instructions+=1;goto B53323c;
case 0x53323e:goto L53323e;
case 0x533244:goto L533244;
case 0x533246:c.instructions+=1;goto B533246;
case 0x533248:goto L533248;
case 0x533249:c.instructions+=3;goto B533249;
case 0x53324c:c.instructions+=2;goto B53324c;
case 0x53324e:c.instructions+=1;goto B53324e;
case 0x533250:goto L533250;
case 0x533252:goto L533252;
case 0x533255:c.instructions+=4;goto B533255;
case 0x533259:c.instructions+=3;goto B533259;
case 0x53325b:c.instructions+=2;goto B53325b;
case 0x53325e:c.instructions+=1;goto B53325e;
case 0x533260:goto L533260;
case 0x533262:c.instructions+=1;goto B533262;
case 0x533264:goto L533264;
case 0x533267:c.instructions+=1;goto B533267;
case 0x53326c:goto L53326c;
case 0x53326d:c.instructions+=2;goto B53326d;
case 0x533273:c.instructions+=1;goto B533273;
case 0x533278:goto L533278;
case 0x53327b:c.instructions+=3;goto B53327b;
case 0x53327c:c.instructions+=2;goto B53327c;
case 0x53327e:c.instructions+=1;goto B53327e;
case 0x533283:goto L533283;
case 0x533285:goto L533285;
case 0x533289:c.instructions+=3;goto B533289;
case 0x53328a:c.instructions+=2;goto B53328a;
case 0x533290:c.instructions+=1;goto B533290;
case 0x533295:goto L533295;
case 0x533297:goto L533297;
case 0x53329e:c.instructions+=1;goto B53329e;
case 0x5332a0:goto L5332a0;
case 0x5332a2:c.instructions+=1;goto B5332a2;
case 0x5332a4:goto L5332a4;
case 0x5332a8:goto L5332a8;
case 0x5332ac:c.instructions+=2;goto B5332ac;
case 0x5332ae:c.instructions+=1;goto B5332ae;
case 0x5332b0:goto L5332b0;
case 0x5332b3:c.instructions+=4;goto B5332b3;
case 0x5332b6:c.instructions+=3;goto B5332b6;
case 0x5332b8:c.instructions+=2;goto B5332b8;
case 0x5332bb:c.instructions+=1;goto B5332bb;
case 0x5332bd:goto L5332bd;
case 0x5332c1:goto L5332c1;
case 0x5332c5:c.instructions+=6;goto B5332c5;
case 0x5332cb:c.instructions+=5;goto B5332cb;
case 0x5332cc:c.instructions+=4;goto B5332cc;
case 0x5332cf:c.instructions+=3;goto B5332cf;
case 0x5332d1:c.instructions+=2;goto B5332d1;
case 0x5332d5:c.instructions+=1;goto B5332d5;
case 0x5332db:goto L5332db;
case 0x5332df:c.instructions+=3;goto B5332df;
case 0x5332e0:c.instructions+=2;goto B5332e0;
case 0x5332e1:c.instructions+=1;goto B5332e1;
case 0x5332e2:goto L5332e2;
case 0x5332e4:c.instructions+=1;goto B5332e4;
case 0x5332e6:goto L5332e6;
case 0x5332e9:c.instructions+=1;goto B5332e9;
case 0x5332ee:goto L5332ee;
case 0x5332f4:c.instructions+=3;goto B5332f4;
case 0x5332f5:c.instructions+=2;goto B5332f5;
case 0x5332f8:c.instructions+=1;goto B5332f8;
case 0x5332f9:goto L5332f9;
case 0x533300:c.instructions+=3;goto B533300;
case 0x533301:c.instructions+=2;goto B533301;
case 0x533304:c.instructions+=1;goto B533304;
case 0x533310:goto L533310;
case 0x533313:c.instructions+=5;goto B533313;
case 0x533314:c.instructions+=4;goto B533314;
case 0x533316:c.instructions+=3;goto B533316;
case 0x533317:c.instructions+=2;goto B533317;
case 0x53331b:c.instructions+=1;goto B53331b;
case 0x533320:goto L533320;
case 0x533322:c.instructions+=1;goto B533322;
case 0x533327:goto L533327;
case 0x53332d:c.instructions+=3;goto B53332d;
case 0x53332f:c.instructions+=2;goto B53332f;
case 0x533331:c.instructions+=1;goto B533331;
case 0x533333:goto L533333;
case 0x533337:c.instructions+=7;goto B533337;
case 0x533338:c.instructions+=6;goto B533338;
case 0x53333e:c.instructions+=5;goto B53333e;
case 0x533342:c.instructions+=4;goto B533342;
case 0x533346:c.instructions+=3;goto B533346;
case 0x53334a:c.instructions+=2;goto B53334a;
case 0x53334e:c.instructions+=1;goto B53334e;
case 0x533353:goto L533353;
case 0x533357:c.instructions+=3;goto B533357;
case 0x533358:c.instructions+=2;goto B533358;
case 0x53335a:c.instructions+=1;goto B53335a;
case 0x53335f:goto L53335f;
case 0x533360:c.instructions+=3;goto B533360;
case 0x533361:c.instructions+=2;goto B533361;
case 0x533364:c.instructions+=1;goto B533364;
case 0x533365:goto L533365;
case 0x533366:c.instructions+=3;goto B533366;
case 0x533367:c.instructions+=2;goto B533367;
case 0x533369:c.instructions+=1;goto B533369;
case 0x53336e:goto L53336e;
case 0x533370:c.instructions+=1;goto B533370;
case 0x533375:goto L533375;
case 0x533377:c.instructions+=1;goto B533377;
case 0x53337c:goto L53337c;
case 0x53337d:c.instructions+=4;goto B53337d;
case 0x533382:c.instructions+=3;goto B533382;
case 0x533383:c.instructions+=2;goto B533383;
case 0x533388:c.instructions+=1;goto B533388;
case 0x53338d:goto L53338d;
case 0x53338f:c.instructions+=2;goto B53338f;
case 0x533391:c.instructions+=1;goto B533391;
case 0x533397:goto L533397;
case 0x533399:c.instructions+=1;goto B533399;
case 0x53339b:goto L53339b;
case 0x53339d:c.instructions+=1;goto B53339d;
case 0x53339f:goto L53339f;
case 0x5333a5:c.instructions+=4;goto B5333a5;
case 0x5333a8:c.instructions+=3;goto B5333a8;
case 0x5333aa:c.instructions+=2;goto B5333aa;
case 0x5333ac:c.instructions+=1;goto B5333ac;
case 0x5333ae:goto L5333ae;
case 0x5333b4:c.instructions+=1;goto B5333b4;
case 0x5333b7:goto L5333b7;
case 0x5333b9:c.instructions+=1;goto B5333b9;
case 0x5333bf:goto L5333bf;
case 0x5333c0:c.instructions+=3;goto B5333c0;
case 0x5333c6:c.instructions+=2;goto B5333c6;
case 0x5333c8:c.instructions+=1;goto B5333c8;
case 0x5333ca:goto L5333ca;
case 0x5333cc:goto L5333cc;
case 0x5333ce:goto L5333ce;
case 0x5333d4:c.instructions+=4;goto B5333d4;
case 0x5333d7:c.instructions+=3;goto B5333d7;
case 0x5333d9:c.instructions+=2;goto B5333d9;
case 0x5333db:c.instructions+=1;goto B5333db;
case 0x5333dd:goto L5333dd;
case 0x5333e3:c.instructions+=1;goto B5333e3;
case 0x5333e6:goto L5333e6;
case 0x5333e8:c.instructions+=1;goto B5333e8;
case 0x5333ee:goto L5333ee;
case 0x5333ef:c.instructions+=3;goto B5333ef;
case 0x5333f2:c.instructions+=2;goto B5333f2;
case 0x5333f4:c.instructions+=1;goto B5333f4;
case 0x5333f6:goto L5333f6;
case 0x5333fe:goto L5333fe;
case 0x533402:c.instructions+=3;goto B533402;
case 0x533404:c.instructions+=2;goto B533404;
case 0x533406:c.instructions+=1;goto B533406;
case 0x53340c:goto L53340c;
case 0x533411:c.instructions+=2;goto B533411;
case 0x533413:c.instructions+=1;goto B533413;
case 0x533415:goto L533415;
case 0x53341c:c.instructions+=2;goto B53341c;
case 0x533422:c.instructions+=1;goto B533422;
case 0x533424:goto L533424;
case 0x533427:c.instructions+=2;goto B533427;
case 0x533429:c.instructions+=1;goto B533429;
case 0x53342b:goto L53342b;
case 0x53342e:c.instructions+=3;goto B53342e;
case 0x53342f:c.instructions+=2;goto B53342f;
case 0x533431:c.instructions+=1;goto B533431;
case 0x533436:goto L533436;
case 0x533438:c.instructions+=1;goto B533438;
case 0x53343a:goto L53343a;
case 0x53343e:c.instructions+=1;goto B53343e;
case 0x533440:goto L533440;
case 0x533442:c.instructions+=1;goto B533442;
case 0x533447:goto L533447;
case 0x533449:c.instructions+=1;goto B533449;
case 0x53344b:goto L53344b;
case 0x53344d:c.instructions+=2;goto B53344d;
case 0x53344f:c.instructions+=1;goto B53344f;
case 0x533450:goto L533450;
case 0x533453:c.instructions+=1;goto B533453;
case 0x533455:goto L533455;
case 0x533456:c.instructions+=3;goto B533456;
case 0x533459:c.instructions+=2;goto B533459;
case 0x53345c:c.instructions+=1;goto B53345c;
case 0x53345e:goto L53345e;
case 0x533460:c.instructions+=1;goto B533460;
case 0x533462:goto L533462;
case 0x533465:c.instructions+=3;goto B533465;
case 0x533468:c.instructions+=2;goto B533468;
case 0x53346a:c.instructions+=1;goto B53346a;
case 0x53346f:goto L53346f;
case 0x533472:c.instructions+=3;goto B533472;
case 0x533474:c.instructions+=2;goto B533474;
case 0x533478:c.instructions+=1;goto B533478;
case 0x53347a:goto L53347a;
case 0x53347d:c.instructions+=3;goto B53347d;
case 0x533480:c.instructions+=2;goto B533480;
case 0x533482:c.instructions+=1;goto B533482;
case 0x533484:goto L533484;
case 0x533486:c.instructions+=2;goto B533486;
case 0x533489:c.instructions+=1;goto B533489;
case 0x533490:goto L533490;
case 0x533492:goto L533492;
case 0x533496:c.instructions+=2;goto B533496;
case 0x533498:c.instructions+=1;goto B533498;
case 0x53349a:goto L53349a;
case 0x53349b:c.instructions+=2;goto B53349b;
case 0x5334a1:c.instructions+=1;goto B5334a1;
case 0x5334a6:goto L5334a6;
case 0x5334a8:c.instructions+=1;goto B5334a8;
case 0x5334aa:goto L5334aa;
case 0x5334ac:c.instructions+=2;goto B5334ac;
case 0x5334ae:c.instructions+=1;goto B5334ae;
case 0x5334b0:goto L5334b0;
case 0x5334b3:c.instructions+=1;goto B5334b3;
case 0x5334b5:goto L5334b5;
case 0x5334b6:c.instructions+=3;goto B5334b6;
case 0x5334b9:c.instructions+=2;goto B5334b9;
case 0x5334bc:c.instructions+=1;goto B5334bc;
case 0x5334be:goto L5334be;
case 0x5334c0:c.instructions+=1;goto B5334c0;
case 0x5334c2:goto L5334c2;
case 0x5334c5:c.instructions+=3;goto B5334c5;
case 0x5334c8:c.instructions+=2;goto B5334c8;
case 0x5334ca:c.instructions+=1;goto B5334ca;
case 0x5334cc:goto L5334cc;
case 0x5334d0:c.instructions+=3;goto B5334d0;
case 0x5334d2:c.instructions+=2;goto B5334d2;
case 0x5334d5:c.instructions+=1;goto B5334d5;
case 0x5334dc:goto L5334dc;
case 0x5334de:goto L5334de;
case 0x5334e0:c.instructions+=1;goto B5334e0;
case 0x5334e2:goto L5334e2;
case 0x5334e3:c.instructions+=1;goto B5334e3;
case 0x5334e8:goto L5334e8;
case 0x5334eb:goto L5334eb;
case 0x5334ec:c.instructions+=4;goto B5334ec;
case 0x5334f1:c.instructions+=3;goto B5334f1;
case 0x5334f3:c.instructions+=2;goto B5334f3;
case 0x5334f8:c.instructions+=1;goto B5334f8;
case 0x5334fd:goto L5334fd;
case 0x5334ff:c.instructions+=2;goto B5334ff;
case 0x533501:c.instructions+=1;goto B533501;
case 0x533507:goto L533507;
case 0x53350b:goto L53350b;
case 0x533511:c.instructions+=3;goto B533511;
case 0x533513:c.instructions+=2;goto B533513;
case 0x533515:c.instructions+=1;goto B533515;
case 0x53351a:goto L53351a;
case 0x53351c:c.instructions+=1;goto B53351c;
case 0x53351e:goto L53351e;
case 0x533524:goto L533524;
case 0x533526:c.instructions+=1;goto B533526;
case 0x533528:goto L533528;
case 0x53352b:c.instructions+=1;goto B53352b;
case 0x53352d:goto L53352d;
case 0x533530:c.instructions+=2;goto B533530;
case 0x533532:c.instructions+=1;goto B533532;
case 0x533534:goto L533534;
case 0x533537:c.instructions+=2;goto B533537;
case 0x533538:c.instructions+=1;goto B533538;
case 0x53353d:goto L53353d;
case 0x533540:c.instructions+=2;goto B533540;
case 0x533542:c.instructions+=1;goto B533542;
case 0x533544:goto L533544;
case 0x533548:c.instructions+=3;goto B533548;
case 0x53354a:c.instructions+=2;goto B53354a;
case 0x53354c:c.instructions+=1;goto B53354c;
case 0x533550:goto L533550;
case 0x533553:c.instructions+=1;goto B533553;
case 0x533555:goto L533555;
case 0x533556:c.instructions+=3;goto B533556;
case 0x533559:c.instructions+=2;goto B533559;
case 0x53355c:c.instructions+=1;goto B53355c;
case 0x53355e:goto L53355e;
case 0x533560:goto L533560;
case 0x533563:c.instructions+=3;goto B533563;
case 0x533566:c.instructions+=2;goto B533566;
case 0x533568:c.instructions+=1;goto B533568;
case 0x53356a:goto L53356a;
case 0x53356b:c.instructions+=4;goto B53356b;
case 0x53356d:c.instructions+=3;goto B53356d;
case 0x533570:c.instructions+=2;goto B533570;
case 0x533577:c.instructions+=1;goto B533577;
case 0x53357c:goto L53357c;
case 0x53357f:goto L53357f;
case 0x533583:goto L533583;
case 0x533589:c.instructions+=4;goto B533589;
case 0x53358b:c.instructions+=3;goto B53358b;
case 0x53358c:c.instructions+=2;goto B53358c;
case 0x53358f:c.instructions+=1;goto B53358f;
case 0x533594:goto L533594;
case 0x533596:c.instructions+=1;goto B533596;
case 0x533598:goto L533598;
case 0x53359a:c.instructions+=2;goto B53359a;
case 0x53359c:c.instructions+=1;goto B53359c;
case 0x5335a1:goto L5335a1;
case 0x5335a3:c.instructions+=1;goto B5335a3;
case 0x5335a9:goto L5335a9;
case 0x5335b0:goto L5335b0;
case 0x5335b2:c.instructions+=1;goto B5335b2;
case 0x5335b8:goto L5335b8;
case 0x5335bb:c.instructions+=1;goto B5335bb;
case 0x5335c1:goto L5335c1;
case 0x5335c3:c.instructions+=2;goto B5335c3;
case 0x5335c5:c.instructions+=1;goto B5335c5;
case 0x5335cb:goto L5335cb;
case 0x5335cf:c.instructions+=3;goto B5335cf;
case 0x5335d5:c.instructions+=2;goto B5335d5;
case 0x5335d6:c.instructions+=1;goto B5335d6;
case 0x5335db:goto L5335db;
case 0x5335de:c.instructions+=6;goto B5335de;
case 0x5335e0:c.instructions+=5;goto B5335e0;
case 0x5335e5:c.instructions+=4;goto B5335e5;
case 0x5335e7:c.instructions+=3;goto B5335e7;
case 0x5335ec:c.instructions+=2;goto B5335ec;
case 0x5335ee:c.instructions+=1;goto B5335ee;
case 0x5335f3:goto L5335f3;
case 0x5335f5:c.instructions+=1;goto B5335f5;
case 0x5335f7:goto L5335f7;
case 0x5335fa:c.instructions+=1;goto B5335fa;
case 0x5335fc:goto L5335fc;
case 0x5335fd:c.instructions+=4;goto B5335fd;
case 0x533602:c.instructions+=3;goto B533602;
case 0x533604:c.instructions+=2;goto B533604;
case 0x533609:c.instructions+=1;goto B533609;
case 0x53360e:goto L53360e;
case 0x533610:c.instructions+=1;goto B533610;
case 0x533612:goto L533612;
case 0x533614:goto L533614;
case 0x533618:c.instructions+=3;goto B533618;
case 0x53361a:c.instructions+=2;goto B53361a;
case 0x53361c:c.instructions+=1;goto B53361c;
case 0x533620:goto L533620;
case 0x533623:c.instructions+=1;goto B533623;
case 0x533625:goto L533625;
case 0x533626:c.instructions+=3;goto B533626;
case 0x533629:c.instructions+=2;goto B533629;
case 0x53362c:c.instructions+=1;goto B53362c;
case 0x53362e:goto L53362e;
case 0x533630:c.instructions+=1;goto B533630;
case 0x533632:goto L533632;
case 0x533635:c.instructions+=3;goto B533635;
case 0x533638:c.instructions+=2;goto B533638;
case 0x53363a:c.instructions+=1;goto B53363a;
case 0x53363c:goto L53363c;
case 0x53363e:c.instructions+=2;goto B53363e;
case 0x533641:c.instructions+=1;goto B533641;
case 0x533648:goto L533648;
case 0x533649:c.instructions+=2;goto B533649;
case 0x533650:c.instructions+=1;goto B533650;
case 0x533655:goto L533655;
case 0x533658:goto L533658;
case 0x53365c:goto L53365c;
case 0x533662:c.instructions+=3;goto B533662;
case 0x533663:c.instructions+=2;goto B533663;
case 0x533666:c.instructions+=1;goto B533666;
case 0x53366b:goto L53366b;
case 0x53366d:c.instructions+=1;goto B53366d;
case 0x533673:goto L533673;
case 0x533674:c.instructions+=5;goto B533674;
case 0x533675:c.instructions+=4;goto B533675;
case 0x533676:c.instructions+=3;goto B533676;
case 0x533677:c.instructions+=2;goto B533677;
case 0x53367a:c.instructions+=1;goto B53367a;
case 0x533680:goto L533680;
case 0x533683:c.instructions+=11;goto B533683;
case 0x533688:c.instructions+=10;goto B533688;
case 0x53368e:c.instructions+=9;goto B53368e;
case 0x53368f:c.instructions+=8;goto B53368f;
case 0x533691:c.instructions+=7;goto B533691;
case 0x533697:c.instructions+=6;goto B533697;
case 0x533698:c.instructions+=5;goto B533698;
case 0x53369a:c.instructions+=4;goto B53369a;
case 0x53369c:c.instructions+=3;goto B53369c;
case 0x53369d:c.instructions+=2;goto B53369d;
case 0x5336a1:c.instructions+=1;goto B5336a1;
case 0x5336a3:goto L5336a3;
case 0x5336a9:c.instructions+=3;goto B5336a9;
case 0x5336ac:c.instructions+=2;goto B5336ac;
case 0x5336af:c.instructions+=1;goto B5336af;
case 0x5336b0:goto L5336b0;
case 0x5336b2:c.instructions+=1;goto B5336b2;
case 0x5336b4:goto L5336b4;
case 0x5336b5:c.instructions+=3;goto B5336b5;
case 0x5336b8:c.instructions+=2;goto B5336b8;
case 0x5336ba:c.instructions+=1;goto B5336ba;
case 0x5336bc:goto L5336bc;
case 0x5336be:goto L5336be;
case 0x5336c1:c.instructions+=2;goto B5336c1;
case 0x5336c2:c.instructions+=1;goto B5336c2;
case 0x5336c7:goto L5336c7;
case 0x5336cb:c.instructions+=10;goto B5336cb;
case 0x5336cf:c.instructions+=9;goto B5336cf;
case 0x5336d2:c.instructions+=8;goto B5336d2;
case 0x5336d4:c.instructions+=7;goto B5336d4;
case 0x5336d8:c.instructions+=6;goto B5336d8;
case 0x5336d9:c.instructions+=5;goto B5336d9;
case 0x5336dd:c.instructions+=4;goto B5336dd;
case 0x5336e1:c.instructions+=3;goto B5336e1;
case 0x5336e5:c.instructions+=2;goto B5336e5;
case 0x5336e9:c.instructions+=1;goto B5336e9;
case 0x5336ee:goto L5336ee;
case 0x5336f4:c.instructions+=3;goto B5336f4;
case 0x5336f6:c.instructions+=2;goto B5336f6;
case 0x5336f8:c.instructions+=1;goto B5336f8;
case 0x5336fa:goto L5336fa;
case 0x5336fd:c.instructions+=1;goto B5336fd;
case 0x533700:goto L533700;
case 0x533707:c.instructions+=1;goto B533707;
case 0x533709:goto L533709;
case 0x53370a:c.instructions+=2;goto B53370a;
case 0x53370c:c.instructions+=1;goto B53370c;
case 0x53370e:goto L53370e;
case 0x533710:goto L533710;
case 0x533713:c.instructions+=3;goto B533713;
case 0x533715:c.instructions+=2;goto B533715;
case 0x533717:c.instructions+=1;goto B533717;
case 0x533719:goto L533719;
case 0x533720:c.instructions+=2;goto B533720;
case 0x533722:c.instructions+=1;goto B533722;
case 0x533724:goto L533724;
case 0x533728:c.instructions+=1;goto B533728;
case 0x53372c:goto L53372c;
case 0x533731:c.instructions+=1;goto B533731;
case 0x533736:goto L533736;
case 0x533737:c.instructions+=4;goto B533737;
case 0x533738:c.instructions+=3;goto B533738;
case 0x533739:c.instructions+=2;goto B533739;
case 0x53373c:c.instructions+=1;goto B53373c;
case 0x533750:goto L533750;
case 0x533751:c.instructions+=6;goto B533751;
case 0x533753:c.instructions+=5;goto B533753;
case 0x533759:c.instructions+=4;goto B533759;
case 0x53375a:c.instructions+=3;goto B53375a;
case 0x53375c:c.instructions+=2;goto B53375c;
case 0x53375e:c.instructions+=1;goto B53375e;
case 0x533760:goto L533760;
case 0x533761:c.instructions+=3;goto B533761;
case 0x533764:c.instructions+=2;goto B533764;
case 0x533765:c.instructions+=1;goto B533765;
case 0x533767:goto L533767;
case 0x533769:c.instructions+=1;goto B533769;
case 0x53376b:goto L53376b;
case 0x53376d:c.instructions+=1;goto B53376d;
case 0x53376f:goto L53376f;
case 0x533774:c.instructions+=3;goto B533774;
case 0x533776:c.instructions+=2;goto B533776;
case 0x533778:c.instructions+=1;goto B533778;
case 0x53377a:goto L53377a;
case 0x53377d:c.instructions+=2;goto B53377d;
case 0x53377f:c.instructions+=1;goto B53377f;
case 0x533781:goto L533781;
case 0x533784:c.instructions+=1;goto B533784;
case 0x533786:goto L533786;
case 0x533789:c.instructions+=2;goto B533789;
case 0x53378c:c.instructions+=1;goto B53378c;
case 0x53378e:goto L53378e;
case 0x533791:c.instructions+=3;goto B533791;
case 0x533792:c.instructions+=2;goto B533792;
case 0x533797:c.instructions+=1;goto B533797;
case 0x53379c:goto L53379c;
case 0x53379e:c.instructions+=1;goto B53379e;
case 0x5337a0:goto L5337a0;
case 0x5337a4:goto L5337a4;
case 0x5337a9:c.instructions+=1;goto B5337a9;
case 0x5337ae:goto L5337ae;
case 0x5337b4:goto L5337b4;
case 0x5337b5:c.instructions+=3;goto B5337b5;
case 0x5337b8:c.instructions+=2;goto B5337b8;
case 0x5337ba:c.instructions+=1;goto B5337ba;
case 0x5337bc:goto L5337bc;
case 0x5337bd:c.instructions+=1;goto B5337bd;
case 0x5337be:goto L5337be;
case 0x5337bf:c.instructions+=2;goto B5337bf;
case 0x5337c0:c.instructions+=1;goto B5337c0;
case 0x5337d0:goto L5337d0;
case 0x5337d1:c.instructions+=8;goto B5337d1;
case 0x5337d3:c.instructions+=7;goto B5337d3;
case 0x5337d4:c.instructions+=6;goto B5337d4;
case 0x5337d5:c.instructions+=5;goto B5337d5;
case 0x5337db:c.instructions+=4;goto B5337db;
case 0x5337dd:c.instructions+=3;goto B5337dd;
case 0x5337df:c.instructions+=2;goto B5337df;
case 0x5337e2:c.instructions+=1;goto B5337e2;
case 0x5337e8:goto L5337e8;
case 0x5337e9:c.instructions+=3;goto B5337e9;
case 0x5337ef:c.instructions+=2;goto B5337ef;
case 0x5337f0:c.instructions+=1;goto B5337f0;
case 0x5337f2:goto L5337f2;
case 0x5337f4:c.instructions+=1;goto B5337f4;
case 0x5337f6:goto L5337f6;
case 0x5337f8:c.instructions+=1;goto B5337f8;
case 0x5337fa:goto L5337fa;
case 0x5337ff:c.instructions+=3;goto B5337ff;
case 0x533802:c.instructions+=2;goto B533802;
case 0x533804:c.instructions+=1;goto B533804;
case 0x533806:goto L533806;
case 0x53380a:c.instructions+=1;goto B53380a;
case 0x53380c:goto L53380c;
case 0x53380f:c.instructions+=3;goto B53380f;
case 0x533812:c.instructions+=2;goto B533812;
case 0x533815:c.instructions+=1;goto B533815;
case 0x533817:goto L533817;
case 0x533819:c.instructions+=2;goto B533819;
case 0x53381b:c.instructions+=1;goto B53381b;
case 0x53381d:goto L53381d;
case 0x533820:goto L533820;
case 0x533827:c.instructions+=1;goto B533827;
case 0x533829:goto L533829;
case 0x53382a:c.instructions+=2;goto B53382a;
case 0x53382c:c.instructions+=1;goto B53382c;
case 0x53382e:goto L53382e;
case 0x533830:goto L533830;
case 0x533837:c.instructions+=2;goto B533837;
case 0x533839:c.instructions+=1;goto B533839;
case 0x53383b:goto L53383b;
case 0x53383f:c.instructions+=1;goto B53383f;
case 0x533841:goto L533841;
case 0x533844:c.instructions+=3;goto B533844;
case 0x533845:c.instructions+=2;goto B533845;
case 0x53384a:c.instructions+=1;goto B53384a;
case 0x53384f:goto L53384f;
case 0x533851:c.instructions+=1;goto B533851;
case 0x533853:goto L533853;
case 0x533857:goto L533857;
case 0x53385c:c.instructions+=1;goto B53385c;
case 0x533861:goto L533861;
case 0x533867:c.instructions+=1;goto B533867;
case 0x53386d:goto L53386d;
case 0x533870:c.instructions+=5;goto B533870;
case 0x533871:c.instructions+=4;goto B533871;
case 0x533874:c.instructions+=3;goto B533874;
case 0x533876:c.instructions+=2;goto B533876;
case 0x533879:c.instructions+=1;goto B533879;
case 0x53387f:goto L53387f;
case 0x533880:c.instructions+=1;goto B533880;
case 0x533881:goto L533881;
case 0x533882:c.instructions+=3;goto B533882;
case 0x533884:c.instructions+=2;goto B533884;
case 0x533885:c.instructions+=1;goto B533885;
case 0x533890:goto L533890;
case 0x533894:c.instructions+=5;goto B533894;
case 0x533895:c.instructions+=4;goto B533895;
case 0x533896:c.instructions+=3;goto B533896;
case 0x533897:c.instructions+=2;goto B533897;
case 0x533899:c.instructions+=1;goto B533899;
case 0x53389e:goto L53389e;
case 0x5338a0:c.instructions+=3;goto B5338a0;
case 0x5338a3:c.instructions+=2;goto B5338a3;
case 0x5338a5:c.instructions+=1;goto B5338a5;
case 0x5338a7:goto L5338a7;
case 0x5338a8:c.instructions+=2;goto B5338a8;
case 0x5338aa:c.instructions+=1;goto B5338aa;
case 0x5338af:goto L5338af;
case 0x5338b1:c.instructions+=1;goto B5338b1;
case 0x5338b3:goto L5338b3;
case 0x5338b4:c.instructions+=2;goto B5338b4;
case 0x5338b6:c.instructions+=1;goto B5338b6;
case 0x5338bb:goto L5338bb;
case 0x5338bc:c.instructions+=2;goto B5338bc;
case 0x5338bd:c.instructions+=1;goto B5338bd;
case 0x5338c0:goto L5338c0;
case 0x5338c1:c.instructions+=7;goto B5338c1;
case 0x5338c2:c.instructions+=6;goto B5338c2;
case 0x5338c3:c.instructions+=5;goto B5338c3;
case 0x5338c7:c.instructions+=4;goto B5338c7;
case 0x5338ca:c.instructions+=3;goto B5338ca;
case 0x5338cb:c.instructions+=2;goto B5338cb;
case 0x5338cf:c.instructions+=1;goto B5338cf;
case 0x5338d4:goto L5338d4;
case 0x5338d6:c.instructions+=4;goto B5338d6;
case 0x5338d9:c.instructions+=3;goto B5338d9;
case 0x5338db:c.instructions+=2;goto B5338db;
case 0x5338df:c.instructions+=1;goto B5338df;
case 0x5338e5:goto L5338e5;
case 0x5338eb:c.instructions+=4;goto B5338eb;
case 0x5338f1:c.instructions+=3;goto B5338f1;
case 0x5338f2:c.instructions+=2;goto B5338f2;
case 0x5338f3:c.instructions+=1;goto B5338f3;
case 0x5338f5:goto L5338f5;
case 0x5338f6:c.instructions+=2;goto B5338f6;
case 0x5338f9:c.instructions+=1;goto B5338f9;
case 0x5338fa:goto L5338fa;
case 0x5338fb:c.instructions+=3;goto B5338fb;
case 0x5338fc:c.instructions+=2;goto B5338fc;
case 0x533901:c.instructions+=1;goto B533901;
case 0x533906:goto L533906;
case 0x53390c:c.instructions+=3;goto B53390c;
case 0x533912:c.instructions+=2;goto B533912;
case 0x533914:c.instructions+=1;goto B533914;
case 0x533916:goto L533916;
case 0x533917:c.instructions+=2;goto B533917;
case 0x53391a:c.instructions+=1;goto B53391a;
case 0x53391b:goto L53391b;
case 0x53391c:c.instructions+=3;goto B53391c;
case 0x53391d:c.instructions+=2;goto B53391d;
case 0x533922:c.instructions+=1;goto B533922;
case 0x533927:goto L533927;
case 0x533929:c.instructions+=3;goto B533929;
case 0x53392c:c.instructions+=2;goto B53392c;
case 0x53392d:c.instructions+=1;goto B53392d;
case 0x533932:goto L533932;
case 0x533935:c.instructions+=2;goto B533935;
case 0x533937:c.instructions+=1;goto B533937;
case 0x533939:goto L533939;
case 0x53393c:c.instructions+=3;goto B53393c;
case 0x53393d:c.instructions+=2;goto B53393d;
case 0x533942:c.instructions+=1;goto B533942;
case 0x533947:goto L533947;
case 0x53394d:c.instructions+=9;goto B53394d;
case 0x533950:c.instructions+=8;goto B533950;
case 0x533951:c.instructions+=7;goto B533951;
case 0x533952:c.instructions+=6;goto B533952;
case 0x533953:c.instructions+=5;goto B533953;
case 0x533954:c.instructions+=4;goto B533954;
case 0x53395a:c.instructions+=3;goto B53395a;
case 0x53395e:c.instructions+=2;goto B53395e;
case 0x53395f:c.instructions+=1;goto B53395f;
case 0x533964:goto L533964;
case 0x533965:c.instructions+=5;goto B533965;
case 0x533966:c.instructions+=4;goto B533966;
case 0x533967:c.instructions+=3;goto B533967;
case 0x533968:c.instructions+=2;goto B533968;
case 0x533969:c.instructions+=1;goto B533969;
case 0x53396c:goto L53396c;
case 0x53396f:c.instructions+=5;goto B53396f;
case 0x533971:c.instructions+=4;goto B533971;
case 0x533973:c.instructions+=3;goto B533973;
case 0x533975:c.instructions+=2;goto B533975;
case 0x533978:c.instructions+=1;goto B533978;
case 0x53397a:goto L53397a;
case 0x53397f:c.instructions+=8;goto B53397f;
case 0x533980:c.instructions+=7;goto B533980;
case 0x533985:c.instructions+=6;goto B533985;
case 0x533987:c.instructions+=5;goto B533987;
case 0x533989:c.instructions+=4;goto B533989;
case 0x53398a:c.instructions+=3;goto B53398a;
case 0x53398b:c.instructions+=2;goto B53398b;
case 0x533990:c.instructions+=1;goto B533990;
case 0x533995:goto L533995;
case 0x533996:c.instructions+=3;goto B533996;
case 0x53399b:c.instructions+=2;goto B53399b;
case 0x53399d:c.instructions+=1;goto B53399d;
case 0x5339a2:goto L5339a2;
case 0x5339a5:c.instructions+=1;goto B5339a5;
case 0x5339a7:goto L5339a7;
case 0x5339aa:c.instructions+=1;goto B5339aa;
case 0x5339ac:goto L5339ac;
case 0x5339b1:c.instructions+=8;goto B5339b1;
case 0x5339b2:c.instructions+=7;goto B5339b2;
case 0x5339b7:c.instructions+=6;goto B5339b7;
case 0x5339b9:c.instructions+=5;goto B5339b9;
case 0x5339bb:c.instructions+=4;goto B5339bb;
case 0x5339bc:c.instructions+=3;goto B5339bc;
case 0x5339bd:c.instructions+=2;goto B5339bd;
case 0x5339c2:c.instructions+=1;goto B5339c2;
case 0x5339c7:goto L5339c7;
case 0x5339c8:c.instructions+=3;goto B5339c8;
case 0x5339cd:c.instructions+=2;goto B5339cd;
case 0x5339cf:c.instructions+=1;goto B5339cf;
case 0x5339d4:goto L5339d4;
case 0x5339d8:c.instructions+=4;goto B5339d8;
case 0x5339db:c.instructions+=3;goto B5339db;
case 0x5339de:c.instructions+=2;goto B5339de;
case 0x5339e1:c.instructions+=1;goto B5339e1;
case 0x5339e3:goto L5339e3;
case 0x5339ea:c.instructions+=1;goto B5339ea;
case 0x5339f1:goto L5339f1;
case 0x5339f6:c.instructions+=1;goto B5339f6;
case 0x5339f8:goto L5339f8;
case 0x5339fd:c.instructions+=1;goto B5339fd;
case 0x5339ff:goto L5339ff;
case 0x533a04:c.instructions+=1;goto B533a04;
case 0x533a06:goto L533a06;
case 0x533a0b:c.instructions+=1;goto B533a0b;
case 0x533a0d:goto L533a0d;
case 0x533a12:goto L533a12;
case 0x533a18:c.instructions+=3;goto B533a18;
case 0x533a1c:c.instructions+=2;goto B533a1c;
case 0x533a1d:c.instructions+=1;goto B533a1d;
case 0x533a23:goto L533a23;
case 0x533a27:c.instructions+=5;goto B533a27;
case 0x533a28:c.instructions+=4;goto B533a28;
case 0x533a29:c.instructions+=3;goto B533a29;
case 0x533a2a:c.instructions+=2;goto B533a2a;
case 0x533a2b:c.instructions+=1;goto B533a2b;
case 0x533a30:goto L533a30;
case 0x533a31:c.instructions+=1;goto B533a31;
case 0x533a32:goto L533a32;
case 0x533a33:c.instructions+=3;goto B533a33;
case 0x533a34:c.instructions+=2;goto B533a34;
case 0x533a35:c.instructions+=1;goto B533a35;
case 0x533a90:goto L533a90;
case 0x533a91:c.instructions+=4;goto B533a91;
case 0x533a93:c.instructions+=3;goto B533a93;
case 0x533a96:c.instructions+=2;goto B533a96;
case 0x533a98:c.instructions+=1;goto B533a98;
case 0x533a9e:goto L533a9e;
case 0x533aa3:c.instructions+=6;goto B533aa3;
case 0x533aa9:c.instructions+=5;goto B533aa9;
case 0x533aaa:c.instructions+=4;goto B533aaa;
case 0x533aac:c.instructions+=3;goto B533aac;
case 0x533aae:c.instructions+=2;goto B533aae;
case 0x533ab1:c.instructions+=1;goto B533ab1;
case 0x533ab3:goto L533ab3;
case 0x533ab4:c.instructions+=3;goto B533ab4;
case 0x533ab5:c.instructions+=2;goto B533ab5;
case 0x533ab7:c.instructions+=1;goto B533ab7;
case 0x533ab9:goto L533ab9;
case 0x533abc:c.instructions+=1;goto B533abc;
case 0x533ac0:goto L533ac0;
case 0x533ac2:c.instructions+=1;goto B533ac2;
case 0x533ac4:goto L533ac4;
case 0x533ac6:c.instructions+=1;goto B533ac6;
case 0x533ac8:goto L533ac8;
case 0x533acd:c.instructions+=2;goto B533acd;
case 0x533ad0:c.instructions+=1;goto B533ad0;
case 0x533ad2:goto L533ad2;
case 0x533ad4:goto L533ad4;
case 0x533ad8:c.instructions+=1;goto B533ad8;
case 0x533ada:goto L533ada;
case 0x533ade:c.instructions+=2;goto B533ade;
case 0x533ae0:c.instructions+=1;goto B533ae0;
case 0x533ae2:goto L533ae2;
case 0x533ae6:c.instructions+=3;goto B533ae6;
case 0x533aec:c.instructions+=2;goto B533aec;
case 0x533af2:c.instructions+=1;goto B533af2;
case 0x533af4:goto L533af4;
case 0x533af5:c.instructions+=2;goto B533af5;
case 0x533afa:c.instructions+=1;goto B533afa;
case 0x533aff:goto L533aff;
case 0x533b02:c.instructions+=2;goto B533b02;
case 0x533b04:c.instructions+=1;goto B533b04;
case 0x533b06:goto L533b06;
case 0x533b08:c.instructions+=1;goto B533b08;
case 0x533b0a:goto L533b0a;
case 0x533b0d:c.instructions+=2;goto B533b0d;
case 0x533b0e:c.instructions+=1;goto B533b0e;
case 0x533b13:goto L533b13;
case 0x533b16:c.instructions+=3;goto B533b16;
case 0x533b17:c.instructions+=2;goto B533b17;
case 0x533b1c:c.instructions+=1;goto B533b1c;
case 0x533b21:goto L533b21;
case 0x533b26:c.instructions+=4;goto B533b26;
case 0x533b27:c.instructions+=3;goto B533b27;
case 0x533b2a:c.instructions+=2;goto B533b2a;
case 0x533b2c:c.instructions+=1;goto B533b2c;
case 0x533b2e:goto L533b2e;
case 0x533b2f:c.instructions+=1;goto B533b2f;
case 0x533b30:goto L533b30;
case 0x533b31:goto L533b31;
case 0x533b32:c.instructions+=1;goto B533b32;
case 0x533b40:goto L533b40;
case 0x533b41:c.instructions+=7;goto B533b41;
case 0x533b46:c.instructions+=6;goto B533b46;
case 0x533b4c:c.instructions+=5;goto B533b4c;
case 0x533b4d:c.instructions+=4;goto B533b4d;
case 0x533b4f:c.instructions+=3;goto B533b4f;
case 0x533b51:c.instructions+=2;goto B533b51;
case 0x533b55:c.instructions+=1;goto B533b55;
case 0x533b5b:goto L533b5b;
case 0x533b5c:c.instructions+=3;goto B533b5c;
case 0x533b5d:c.instructions+=2;goto B533b5d;
case 0x533b5f:c.instructions+=1;goto B533b5f;
case 0x533b61:goto L533b61;
case 0x533b65:goto L533b65;
case 0x533b67:c.instructions+=1;goto B533b67;
case 0x533b69:goto L533b69;
case 0x533b6b:c.instructions+=1;goto B533b6b;
case 0x533b6d:goto L533b6d;
case 0x533b72:c.instructions+=2;goto B533b72;
case 0x533b75:c.instructions+=1;goto B533b75;
case 0x533b77:goto L533b77;
case 0x533b79:goto L533b79;
case 0x533b7c:c.instructions+=2;goto B533b7c;
case 0x533b7e:c.instructions+=1;goto B533b7e;
case 0x533b80:goto L533b80;
case 0x533b84:c.instructions+=2;goto B533b84;
case 0x533b86:c.instructions+=1;goto B533b86;
case 0x533b88:goto L533b88;
case 0x533b8e:c.instructions+=2;goto B533b8e;
case 0x533b94:c.instructions+=1;goto B533b94;
case 0x533b99:goto L533b99;
case 0x533b9d:c.instructions+=2;goto B533b9d;
case 0x533b9f:c.instructions+=1;goto B533b9f;
case 0x533ba1:goto L533ba1;
case 0x533ba2:c.instructions+=2;goto B533ba2;
case 0x533ba7:c.instructions+=1;goto B533ba7;
case 0x533bac:goto L533bac;
case 0x533baf:c.instructions+=2;goto B533baf;
case 0x533bb1:c.instructions+=1;goto B533bb1;
case 0x533bb3:goto L533bb3;
case 0x533bb5:c.instructions+=1;goto B533bb5;
case 0x533bb7:goto L533bb7;
case 0x533bba:c.instructions+=2;goto B533bba;
case 0x533bbb:c.instructions+=1;goto B533bbb;
case 0x533bc0:goto L533bc0;
case 0x533bc3:c.instructions+=3;goto B533bc3;
case 0x533bc4:c.instructions+=2;goto B533bc4;
case 0x533bc9:c.instructions+=1;goto B533bc9;
case 0x533bce:goto L533bce;
case 0x533bd3:c.instructions+=4;goto B533bd3;
case 0x533bd4:c.instructions+=3;goto B533bd4;
case 0x533bd7:c.instructions+=2;goto B533bd7;
case 0x533bd9:c.instructions+=1;goto B533bd9;
case 0x533bdb:goto L533bdb;
case 0x533bdc:c.instructions+=1;goto B533bdc;
case 0x533bdd:goto L533bdd;
case 0x533bde:c.instructions+=2;goto B533bde;
case 0x533bdf:c.instructions+=1;goto B533bdf;
case 0x533be0:goto L533be0;
case 0x533be1:c.instructions+=14;goto B533be1;
case 0x533be3:c.instructions+=13;goto B533be3;
case 0x533be6:c.instructions+=12;goto B533be6;
case 0x533be7:c.instructions+=11;goto B533be7;
case 0x533bed:c.instructions+=10;goto B533bed;
case 0x533bf3:c.instructions+=9;goto B533bf3;
case 0x533bf4:c.instructions+=8;goto B533bf4;
case 0x533bf5:c.instructions+=7;goto B533bf5;
case 0x533bf8:c.instructions+=6;goto B533bf8;
case 0x533bfa:c.instructions+=5;goto B533bfa;
case 0x533bfe:c.instructions+=4;goto B533bfe;
case 0x533c01:c.instructions+=3;goto B533c01;
case 0x533c07:c.instructions+=2;goto B533c07;
case 0x533c08:c.instructions+=1;goto B533c08;
case 0x533c0d:goto L533c0d;
case 0x533c0e:c.instructions+=1;goto B533c0e;
case 0x533c13:goto L533c13;
case 0x533c16:c.instructions+=10;goto B533c16;
case 0x533c19:c.instructions+=9;goto B533c19;
case 0x533c1c:c.instructions+=8;goto B533c1c;
case 0x533c1e:c.instructions+=7;goto B533c1e;
case 0x533c21:c.instructions+=6;goto B533c21;
case 0x533c22:c.instructions+=5;goto B533c22;
case 0x533c25:c.instructions+=4;goto B533c25;
case 0x533c28:c.instructions+=3;goto B533c28;
case 0x533c2b:c.instructions+=2;goto B533c2b;
case 0x533c2e:c.instructions+=1;goto B533c2e;
case 0x533c33:goto L533c33;
case 0x533c36:c.instructions+=10;goto B533c36;
case 0x533c3d:c.instructions+=9;goto B533c3d;
case 0x533c44:c.instructions+=8;goto B533c44;
case 0x533c4a:c.instructions+=7;goto B533c4a;
case 0x533c4d:c.instructions+=6;goto B533c4d;
case 0x533c50:c.instructions+=5;goto B533c50;
case 0x533c5a:c.instructions+=4;goto B533c5a;
case 0x533c5d:c.instructions+=3;goto B533c5d;
case 0x533c5f:c.instructions+=2;goto B533c5f;
case 0x533c60:c.instructions+=1;goto B533c60;
case 0x533c65:goto L533c65;
case 0x533c68:c.instructions+=3;goto B533c68;
case 0x533c69:c.instructions+=2;goto B533c69;
case 0x533c6e:c.instructions+=1;goto B533c6e;
case 0x533c73:goto L533c73;
case 0x533c75:c.instructions+=8;goto B533c75;
case 0x533c78:c.instructions+=7;goto B533c78;
case 0x533c7b:c.instructions+=6;goto B533c7b;
case 0x533c7e:c.instructions+=5;goto B533c7e;
case 0x533c80:c.instructions+=4;goto B533c80;
case 0x533c83:c.instructions+=3;goto B533c83;
case 0x533c89:c.instructions+=2;goto B533c89;
case 0x533c8b:c.instructions+=1;goto B533c8b;
case 0x533c8d:goto L533c8d;
case 0x533c93:c.instructions+=3;goto B533c93;
case 0x533c96:c.instructions+=2;goto B533c96;
case 0x533c99:c.instructions+=1;goto B533c99;
case 0x533ca0:goto L533ca0;
case 0x533ca2:c.instructions+=1;goto B533ca2;
case 0x533ca4:goto L533ca4;
case 0x533ca5:c.instructions+=3;goto B533ca5;
case 0x533ca8:c.instructions+=2;goto B533ca8;
case 0x533caa:c.instructions+=1;goto B533caa;
case 0x533cac:goto L533cac;
case 0x533cae:goto L533cae;
case 0x533cb1:c.instructions+=3;goto B533cb1;
case 0x533cb3:c.instructions+=2;goto B533cb3;
case 0x533cb5:c.instructions+=1;goto B533cb5;
case 0x533cb7:goto L533cb7;
case 0x533cba:c.instructions+=3;goto B533cba;
case 0x533cbb:c.instructions+=2;goto B533cbb;
case 0x533cc0:c.instructions+=1;goto B533cc0;
case 0x533cc5:goto L533cc5;
case 0x533cc7:c.instructions+=1;goto B533cc7;
case 0x533cc9:goto L533cc9;
case 0x533ccc:goto L533ccc;
case 0x533cd1:c.instructions+=1;goto B533cd1;
case 0x533cd6:goto L533cd6;
case 0x533cdb:c.instructions+=1;goto B533cdb;
case 0x533ce0:goto L533ce0;
case 0x533ce5:goto L533ce5;
case 0x533ce6:c.instructions+=5;goto B533ce6;
case 0x533ce7:c.instructions+=4;goto B533ce7;
case 0x533ce8:c.instructions+=3;goto B533ce8;
case 0x533cea:c.instructions+=2;goto B533cea;
case 0x533ceb:c.instructions+=1;goto B533ceb;
case 0x533cf0:goto L533cf0;
case 0x533cf6:c.instructions+=2;goto B533cf6;
case 0x533cf9:c.instructions+=1;goto B533cf9;
case 0x533cfb:goto L533cfb;
case 0x533d02:c.instructions+=2;goto B533d02;
case 0x533d07:c.instructions+=1;goto B533d07;
case 0x533d0c:goto L533d0c;
case 0x533d11:goto L533d11;
case 0x533d14:c.instructions+=1;goto B533d14;
case 0x533d16:goto L533d16;
case 0x533d19:c.instructions+=2;goto B533d19;
case 0x533d1a:c.instructions+=1;goto B533d1a;
case 0x533d1f:goto L533d1f;
case 0x533d20:goto L533d20;
case 0x533d22:c.instructions+=13;goto B533d22;
case 0x533d27:c.instructions+=12;goto B533d27;
case 0x533d2d:c.instructions+=11;goto B533d2d;
case 0x533d2e:c.instructions+=10;goto B533d2e;
case 0x533d35:c.instructions+=9;goto B533d35;
case 0x533d38:c.instructions+=8;goto B533d38;
case 0x533d3d:c.instructions+=7;goto B533d3d;
case 0x533d3e:c.instructions+=6;goto B533d3e;
case 0x533d3f:c.instructions+=5;goto B533d3f;
case 0x533d40:c.instructions+=4;goto B533d40;
case 0x533d42:c.instructions+=3;goto B533d42;
case 0x533d43:c.instructions+=2;goto B533d43;
case 0x533d48:c.instructions+=1;goto B533d48;
case 0x533d4d:goto L533d4d;
case 0x533d50:c.instructions+=10;goto B533d50;
case 0x533d54:c.instructions+=9;goto B533d54;
case 0x533d56:c.instructions+=8;goto B533d56;
case 0x533d59:c.instructions+=7;goto B533d59;
case 0x533d5b:c.instructions+=6;goto B533d5b;
case 0x533d60:c.instructions+=5;goto B533d60;
case 0x533d6a:c.instructions+=4;goto B533d6a;
case 0x533d71:c.instructions+=3;goto B533d71;
case 0x533d75:c.instructions+=2;goto B533d75;
case 0x533d79:c.instructions+=1;goto B533d79;
case 0x533d7d:goto L533d7d;
case 0x533d7f:goto L533d7f;
case 0x533d83:c.instructions+=1;goto B533d83;
case 0x533d85:goto L533d85;
case 0x533d89:c.instructions+=1;goto B533d89;
case 0x533d90:goto L533d90;
case 0x533d93:c.instructions+=3;goto B533d93;
case 0x533d98:c.instructions+=2;goto B533d98;
case 0x533d9b:c.instructions+=1;goto B533d9b;
case 0x533da1:goto L533da1;
case 0x533da3:c.instructions+=1;goto B533da3;
case 0x533da9:goto L533da9;
case 0x533dac:c.instructions+=1;goto B533dac;
case 0x533db2:goto L533db2;
case 0x533db5:c.instructions+=2;goto B533db5;
case 0x533dbc:c.instructions+=1;goto B533dbc;
case 0x533dbe:goto L533dbe;
case 0x533dc0:c.instructions+=2;goto B533dc0;
case 0x533dc2:c.instructions+=1;goto B533dc2;
case 0x533dc5:goto L533dc5;
case 0x533dc7:c.instructions+=6;goto B533dc7;
case 0x533dc9:c.instructions+=5;goto B533dc9;
case 0x533dcb:c.instructions+=4;goto B533dcb;
case 0x533dcd:c.instructions+=3;goto B533dcd;
case 0x533dce:c.instructions+=2;goto B533dce;
case 0x533dd3:c.instructions+=1;goto B533dd3;
case 0x533dd8:goto L533dd8;
case 0x533dda:c.instructions+=1;goto B533dda;
case 0x533ddc:goto L533ddc;
case 0x533de0:goto L533de0;
case 0x533de3:c.instructions+=4;goto B533de3;
case 0x533de5:c.instructions+=3;goto B533de5;
case 0x533de8:c.instructions+=2;goto B533de8;
case 0x533deb:c.instructions+=1;goto B533deb;
case 0x533ded:goto L533ded;
case 0x533df0:c.instructions+=2;goto B533df0;
case 0x533df3:c.instructions+=1;goto B533df3;
case 0x533df5:goto L533df5;
case 0x533dfb:c.instructions+=2;goto B533dfb;
case 0x533dff:c.instructions+=1;goto B533dff;
case 0x533e05:goto L533e05;
case 0x533e07:c.instructions+=6;goto B533e07;
case 0x533e09:c.instructions+=5;goto B533e09;
case 0x533e0b:c.instructions+=4;goto B533e0b;
case 0x533e0c:c.instructions+=3;goto B533e0c;
case 0x533e0d:c.instructions+=2;goto B533e0d;
case 0x533e12:c.instructions+=1;goto B533e12;
case 0x533e17:goto L533e17;
case 0x533e19:c.instructions+=1;goto B533e19;
case 0x533e1b:goto L533e1b;
case 0x533e25:c.instructions+=1;goto B533e25;
case 0x533e2a:goto L533e2a;
case 0x533e2d:c.instructions+=1;goto B533e2d;
case 0x533e33:goto L533e33;
case 0x533e35:c.instructions+=2;goto B533e35;
case 0x533e37:c.instructions+=1;goto B533e37;
case 0x533e3a:goto L533e3a;
case 0x533e40:c.instructions+=10;goto B533e40;
case 0x533e42:c.instructions+=9;goto B533e42;
case 0x533e48:c.instructions+=8;goto B533e48;
case 0x533e4a:c.instructions+=7;goto B533e4a;
case 0x533e4c:c.instructions+=6;goto B533e4c;
case 0x533e4e:c.instructions+=5;goto B533e4e;
case 0x533e4f:c.instructions+=4;goto B533e4f;
case 0x533e54:c.instructions+=3;goto B533e54;
case 0x533e58:c.instructions+=2;goto B533e58;
case 0x533e5a:c.instructions+=1;goto B533e5a;
case 0x533e5f:goto L533e5f;
case 0x533e66:c.instructions+=11;goto B533e66;
case 0x533e68:c.instructions+=10;goto B533e68;
case 0x533e6f:c.instructions+=9;goto B533e6f;
case 0x533e73:c.instructions+=8;goto B533e73;
case 0x533e77:c.instructions+=7;goto B533e77;
case 0x533e7b:c.instructions+=6;goto B533e7b;
case 0x533e7f:c.instructions+=5;goto B533e7f;
case 0x533e83:c.instructions+=4;goto B533e83;
case 0x533e87:c.instructions+=3;goto B533e87;
case 0x533e89:c.instructions+=2;goto B533e89;
case 0x533e91:c.instructions+=1;goto B533e91;
case 0x533e97:goto L533e97;
case 0x533e9b:c.instructions+=1;goto B533e9b;
case 0x533ea0:goto L533ea0;
case 0x533ea4:goto L533ea4;
case 0x533ea8:c.instructions+=1;goto B533ea8;
case 0x533eaa:goto L533eaa;
case 0x533eb0:goto L533eb0;
case 0x533eb3:c.instructions+=3;goto B533eb3;
case 0x533eb5:c.instructions+=2;goto B533eb5;
case 0x533eb9:c.instructions+=1;goto B533eb9;
case 0x533ebe:goto L533ebe;
case 0x533ec2:c.instructions+=2;goto B533ec2;
case 0x533ec3:c.instructions+=1;goto B533ec3;
case 0x533ec8:goto L533ec8;
case 0x533ec9:c.instructions+=1;goto B533ec9;
case 0x533ece:goto L533ece;
case 0x533ed1:c.instructions+=2;goto B533ed1;
case 0x533ed3:c.instructions+=1;goto B533ed3;
case 0x533ed5:goto L533ed5;
case 0x533ed7:c.instructions+=2;goto B533ed7;
case 0x533edb:c.instructions+=1;goto B533edb;
case 0x533edd:goto L533edd;
case 0x533edf:c.instructions+=1;goto B533edf;
case 0x533ee4:goto L533ee4;
case 0x533ee7:c.instructions+=2;goto B533ee7;
case 0x533ee9:c.instructions+=1;goto B533ee9;
case 0x533eef:goto L533eef;
case 0x533ef2:c.instructions+=1;goto B533ef2;
case 0x533ef7:goto L533ef7;
case 0x533ef9:c.instructions+=3;goto B533ef9;
case 0x533efe:c.instructions+=2;goto B533efe;
case 0x533f00:c.instructions+=1;goto B533f00;
case 0x533f05:goto L533f05;
case 0x533f08:c.instructions+=2;goto B533f08;
case 0x533f0c:c.instructions+=1;goto B533f0c;
case 0x533f12:goto L533f12;
case 0x533f15:c.instructions+=3;goto B533f15;
case 0x533f17:c.instructions+=2;goto B533f17;
case 0x533f1c:c.instructions+=1;goto B533f1c;
case 0x533f21:goto L533f21;
case 0x533f23:c.instructions+=4;goto B533f23;
case 0x533f28:c.instructions+=3;goto B533f28;
case 0x533f2a:c.instructions+=2;goto B533f2a;
case 0x533f2e:c.instructions+=1;goto B533f2e;
case 0x533f33:goto L533f33;
case 0x533f37:c.instructions+=1;goto B533f37;
case 0x533f39:goto L533f39;
case 0x533f3c:c.instructions+=5;goto B533f3c;
case 0x533f3e:c.instructions+=4;goto B533f3e;
case 0x533f43:c.instructions+=3;goto B533f43;
case 0x533f45:c.instructions+=2;goto B533f45;
case 0x533f49:c.instructions+=1;goto B533f49;
case 0x533f4e:goto L533f4e;
case 0x533f52:c.instructions+=4;goto B533f52;
case 0x533f54:c.instructions+=3;goto B533f54;
case 0x533f59:c.instructions+=2;goto B533f59;
case 0x533f5d:c.instructions+=1;goto B533f5d;
case 0x533f62:goto L533f62;
case 0x533f66:c.instructions+=1;goto B533f66;
case 0x533f68:goto L533f68;
case 0x533f6a:c.instructions+=3;goto B533f6a;
case 0x533f6f:c.instructions+=2;goto B533f6f;
case 0x533f71:c.instructions+=1;goto B533f71;
case 0x533f76:goto L533f76;
case 0x533f7a:c.instructions+=3;goto B533f7a;
case 0x533f7d:c.instructions+=2;goto B533f7d;
case 0x533f7f:c.instructions+=1;goto B533f7f;
case 0x533f81:goto L533f81;
case 0x533f84:c.instructions+=1;goto B533f84;
case 0x533f86:goto L533f86;
case 0x533f88:goto L533f88;
case 0x533f8c:c.instructions+=5;goto B533f8c;
case 0x533f8e:c.instructions+=4;goto B533f8e;
case 0x533f92:c.instructions+=3;goto B533f92;
case 0x533f95:c.instructions+=2;goto B533f95;
case 0x533f99:c.instructions+=1;goto B533f99;
case 0x533f9b:goto L533f9b;
case 0x533f9f:c.instructions+=7;goto B533f9f;
case 0x533fa1:c.instructions+=6;goto B533fa1;
case 0x533fa3:c.instructions+=5;goto B533fa3;
case 0x533fa5:c.instructions+=4;goto B533fa5;
case 0x533fa6:c.instructions+=3;goto B533fa6;
case 0x533fa7:c.instructions+=2;goto B533fa7;
case 0x533fac:c.instructions+=1;goto B533fac;
case 0x533fb1:goto L533fb1;
case 0x533fb5:c.instructions+=3;goto B533fb5;
case 0x533fb7:c.instructions+=2;goto B533fb7;
case 0x533fb9:c.instructions+=1;goto B533fb9;
case 0x533fbf:goto L533fbf;
case 0x533fc3:c.instructions+=2;goto B533fc3;
case 0x533fc5:c.instructions+=1;goto B533fc5;
case 0x533fca:goto L533fca;
case 0x533fcc:c.instructions+=1;goto B533fcc;
case 0x533fce:goto L533fce;
case 0x533fd0:goto L533fd0;
case 0x533fd6:c.instructions+=2;goto B533fd6;
case 0x533fd9:c.instructions+=1;goto B533fd9;
case 0x533fdb:goto L533fdb;
case 0x533fde:c.instructions+=5;goto B533fde;
case 0x533fe2:c.instructions+=4;goto B533fe2;
case 0x533fe8:c.instructions+=3;goto B533fe8;
case 0x533fec:c.instructions+=2;goto B533fec;
case 0x533fed:c.instructions+=1;goto B533fed;
case 0x533ff3:goto L533ff3;
case 0x533ff5:c.instructions+=2;goto B533ff5;
case 0x533ff7:c.instructions+=1;goto B533ff7;
case 0x533ff9:goto L533ff9;
case 0x533ffd:c.instructions+=2;goto B533ffd;
case 0x533fff:c.instructions+=1;goto B533fff;
default:missing_instruction(c.pc);}
B533000:L533000:{c.instructions+=4;NFSU2_TR(0x533000);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533003:{NFSU2_TR(0x533003);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533006:{NFSU2_TR(0x533006);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533009:{NFSU2_TR(0x533009);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533034;}}
}
B53300b:L53300b:{c.instructions+=5;NFSU2_TR(0x53300b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53300e:{NFSU2_TR(0x53300e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B533011:{NFSU2_TR(0x533011);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533013:{NFSU2_TR(0x533013);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533016:{NFSU2_TR(0x533016);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L533025;}}
}
B533018:L533018:{c.instructions+=2;NFSU2_TR(0x533018);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53301a:{NFSU2_TR(0x53301a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533025;}}
}
B53301c:L53301c:{c.instructions+=3;NFSU2_TR(0x53301c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B53301f:{NFSU2_TR(0x53301f);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B533023:{NFSU2_TR(0x533023);
{goto L533027;}
}
B533025:L533025:{c.instructions+=1;NFSU2_TR(0x533025);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533027:L533027:{c.instructions+=3;NFSU2_TR(0x533027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53302a:{NFSU2_TR(0x53302a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53302d:{NFSU2_TR(0x53302d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533034:L533034:{c.instructions+=4;NFSU2_TR(0x533034);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B533038:{NFSU2_TR(0x533038);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B533039:{NFSU2_TR(0x533039);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53303b:{NFSU2_TR(0x53303b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533000u);}goto L533000;}}
}
B53303d:L53303d:{c.instructions+=3;NFSU2_TR(0x53303d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533040:{NFSU2_TR(0x533040);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533043:{NFSU2_TR(0x533043);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53306e;}}
}
B533045:L533045:{c.instructions+=5;NFSU2_TR(0x533045);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B533048:{NFSU2_TR(0x533048);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B53304b:{NFSU2_TR(0x53304b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53304d:{NFSU2_TR(0x53304d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533050:{NFSU2_TR(0x533050);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53305f;}}
}
B533052:L533052:{c.instructions+=2;NFSU2_TR(0x533052);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533054:{NFSU2_TR(0x533054);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53305f;}}
}
B533056:L533056:{c.instructions+=3;NFSU2_TR(0x533056);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B533059:{NFSU2_TR(0x533059);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B53305d:{NFSU2_TR(0x53305d);
{goto L533061;}
}
B53305f:L53305f:{c.instructions+=1;NFSU2_TR(0x53305f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533061:L533061:{c.instructions+=3;NFSU2_TR(0x533061);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533064:{NFSU2_TR(0x533064);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533067:{NFSU2_TR(0x533067);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B53306e:L53306e:{c.instructions+=7;NFSU2_TR(0x53306e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533072:{NFSU2_TR(0x533072);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533076:{NFSU2_TR(0x533076);
__builtin_memmove((R+8),gp(0x86283c),4);
}
B53307c:{NFSU2_TR(0x53307c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53307f:{NFSU2_TR(0x53307f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533081:{NFSU2_TR(0x533081);
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
B533083:{NFSU2_TR(0x533083);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533093;}}
}
B533085:L533085:{c.instructions+=2;NFSU2_TR(0x533085);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+4))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B53308c:{NFSU2_TR(0x53308c);
if(r1(R+518)){{goto L53309f;}}
}
B53308e:L53308e:{c.instructions+=3;NFSU2_TR(0x53308e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53308f:{NFSU2_TR(0x53308f);
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
B533091:{NFSU2_TR(0x533091);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533085u);}goto L533085;}}
}
B533093:L533093:{c.instructions+=7;NFSU2_TR(0x533093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533094:{NFSU2_TR(0x533094);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B533097:{NFSU2_TR(0x533097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533098:{NFSU2_TR(0x533098);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533099:{NFSU2_TR(0x533099);
__builtin_memmove((R+16),(R+20),4);
}
B53309b:{NFSU2_TR(0x53309b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B53309c:{NFSU2_TR(0x53309c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53309f:L53309f:{c.instructions+=3;NFSU2_TR(0x53309f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5330a6:{NFSU2_TR(0x5330a6);
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
B5330a8:{NFSU2_TR(0x5330a8);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533093u);}goto L533093;}}
}
B5330aa:L5330aa:{c.instructions+=4;NFSU2_TR(0x5330aa);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B5330ae:{NFSU2_TR(0x5330ae);
__builtin_memmove((R+0),(R+518),1);
}
B5330b1:{NFSU2_TR(0x5330b1);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
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
B5330b3:{NFSU2_TR(0x5330b3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533093u);}goto L533093;}}
}
B5330b5:L5330b5:{c.instructions+=8;NFSU2_TR(0x5330b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5330b6:{NFSU2_TR(0x5330b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5330b9:{NFSU2_TR(0x5330b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5330bd:{NFSU2_TR(0x5330bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5330be:{NFSU2_TR(0x5330be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5330bf:{NFSU2_TR(0x5330bf);
__builtin_memmove((R+16),(R+20),4);
}
B5330c1:{NFSU2_TR(0x5330c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5330c2:{NFSU2_TR(0x5330c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5330d0:L5330d0:{c.instructions+=4;NFSU2_TR(0x5330d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5330d1:{NFSU2_TR(0x5330d1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5330d3:{NFSU2_TR(0x5330d3);
__builtin_memmove((R+24),(R+4),4);
}
B5330d5:{NFSU2_TR(0x5330d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5330daull));
TAIL_STATIC(0x5287a0u,528);
}
B5330da:L5330da:{c.instructions+=2;NFSU2_TR(0x5330da);
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
B5330dc:{NFSU2_TR(0x5330dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5330e6;}}
}
B5330de:L5330de:{c.instructions+=3;NFSU2_TR(0x5330de);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5330e4:{NFSU2_TR(0x5330e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5330e5:{NFSU2_TR(0x5330e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5330e6:L5330e6:{c.instructions+=4;NFSU2_TR(0x5330e6);
__builtin_memmove((R+0),gp(0x863470),4);
}
B5330eb:{NFSU2_TR(0x5330eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5330ec:{NFSU2_TR(0x5330ec);
__builtin_memmove((R+4),(R+24),4);
}
B5330ee:{NFSU2_TR(0x5330ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5330f3ull));
TAIL_STATIC(0x513fe0u,513);
}
B5330f3:L5330f3:{c.instructions+=3;NFSU2_TR(0x5330f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5330f4:{NFSU2_TR(0x5330f4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5330f7:{NFSU2_TR(0x5330f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5330fcull));
TAIL_STATIC(0x512b50u,512);
}
B5330fc:L5330fc:{c.instructions+=3;NFSU2_TR(0x5330fc);
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
B5330ff:{NFSU2_TR(0x5330ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533100:{NFSU2_TR(0x533100);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533110:L533110:{c.instructions+=3;NFSU2_TR(0x533110);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B533113:{NFSU2_TR(0x533113);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533114:{NFSU2_TR(0x533114);
if(r1(R+518)){{goto L5331b6;}}
}
B53311a:L53311a:{c.instructions+=3;NFSU2_TR(0x53311a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53311d:{NFSU2_TR(0x53311d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53311f:{NFSU2_TR(0x53311f);
if(r1(R+518)){{goto L53317a;}}
}
B533121:L533121:{c.instructions+=3;NFSU2_TR(0x533121);
__builtin_memmove((R+0),gp(0x862838),4);
}
B533126:{NFSU2_TR(0x533126);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533128:{NFSU2_TR(0x533128);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53313a;}}
}
B53312a:L53312a:{c.instructions+=3;NFSU2_TR(0x53312a);
__builtin_memmove((R+4),gp(0x86347d),1);
}
B533130:{NFSU2_TR(0x533130);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533132:{NFSU2_TR(0x533132);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53313a;}}
}
B533134:L533134:{c.instructions+=2;NFSU2_TR(0x533134);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B533138:{NFSU2_TR(0x533138);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5331b6;}}
}
B53313a:L53313a:{c.instructions+=3;NFSU2_TR(0x53313a);
__builtin_memmove((R+4),gp(0x838441),1);
}
B533140:{NFSU2_TR(0x533140);
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
B533142:{NFSU2_TR(0x533142);
if(r1(R+518)){{goto L533148;}}
}
B533144:L533144:{c.instructions+=3;NFSU2_TR(0x533144);
w1(R+0,u8(0x1ull));
}
B533146:{NFSU2_TR(0x533146);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533147:{NFSU2_TR(0x533147);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533148:L533148:{c.instructions+=3;NFSU2_TR(0x533148);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B53314f:{NFSU2_TR(0x53314f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533151:{NFSU2_TR(0x533151);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5331b6;}}
}
B533153:L533153:{c.instructions+=3;NFSU2_TR(0x533153);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533156:{NFSU2_TR(0x533156);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533158:{NFSU2_TR(0x533158);
if(r1(R+518)){{goto L533172;}}
}
B53315a:L53315a:{c.instructions+=4;NFSU2_TR(0x53315a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53315d:{NFSU2_TR(0x53315d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53315e:{NFSU2_TR(0x53315e);
w4(R+4,u32(0x85ad40ull));
}
B533163:{NFSU2_TR(0x533163);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533168ull));
TAIL_STATIC(0x5003b0u,500);
}
B533168:L533168:{c.instructions+=2;NFSU2_TR(0x533168);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53316a:{NFSU2_TR(0x53316a);
if(r1(R+518)){{goto L5331b6;}}
}
B53316c:L53316c:{c.instructions+=2;NFSU2_TR(0x53316c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B533170:{NFSU2_TR(0x533170);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5331b6;}}
}
B533172:L533172:{c.instructions+=3;NFSU2_TR(0x533172);
__builtin_memmove((R+4),(R+24),4);
}
B533174:{NFSU2_TR(0x533174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533175:{NFSU2_TR(0x533175);
TAIL_STATIC(0x512870u,512);
}
B53317a:L53317a:{c.instructions+=3;NFSU2_TR(0x53317a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53317d:{NFSU2_TR(0x53317d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53317f:{NFSU2_TR(0x53317f);
if(r1(R+518)){{goto L53318e;}}
}
B533181:L533181:{c.instructions+=3;NFSU2_TR(0x533181);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533182:{NFSU2_TR(0x533182);
w4(R+4,u32(0x85ad40ull));
}
B533187:{NFSU2_TR(0x533187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53318cull));
TAIL_STATIC(0x532c20u,532);
}
B53318c:L53318c:{c.instructions+=2;NFSU2_TR(0x53318c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B53318d:{NFSU2_TR(0x53318d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53318e:L53318e:{c.instructions+=3;NFSU2_TR(0x53318e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533191:{NFSU2_TR(0x533191);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533193:{NFSU2_TR(0x533193);
if(r1(R+518)){{goto L5331a2;}}
}
B533195:L533195:{c.instructions+=3;NFSU2_TR(0x533195);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533196:{NFSU2_TR(0x533196);
w4(R+4,u32(0x85ef50ull));
}
B53319b:{NFSU2_TR(0x53319b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5331a0ull));
TAIL_STATIC(0x501150u,501);
}
B5331a0:L5331a0:{c.instructions+=2;NFSU2_TR(0x5331a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5331a1:{NFSU2_TR(0x5331a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5331a2:L5331a2:{c.instructions+=3;NFSU2_TR(0x5331a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5331a5:{NFSU2_TR(0x5331a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5331a7:{NFSU2_TR(0x5331a7);
if(r1(R+518)){{goto L5331b6;}}
}
B5331a9:L5331a9:{c.instructions+=3;NFSU2_TR(0x5331a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5331aa:{NFSU2_TR(0x5331aa);
w4(R+4,u32(0x861e88ull));
}
B5331af:{NFSU2_TR(0x5331af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5331b4ull));
TAIL_STATIC(0x5135a0u,513);
}
B5331b4:L5331b4:{c.instructions+=2;NFSU2_TR(0x5331b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5331b5:{NFSU2_TR(0x5331b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5331b6:L5331b6:{c.instructions+=3;NFSU2_TR(0x5331b6);
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
B5331b8:{NFSU2_TR(0x5331b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5331b9:{NFSU2_TR(0x5331b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5331c0:L5331c0:{c.instructions+=4;NFSU2_TR(0x5331c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5331c3:{NFSU2_TR(0x5331c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5331c4:{NFSU2_TR(0x5331c4);
__builtin_memmove((R+28),(R+4),4);
}
B5331c6:{NFSU2_TR(0x5331c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5331cbull));
TAIL_STATIC(0x528410u,528);
}
B5331cb:L5331cb:{c.instructions+=8;NFSU2_TR(0x5331cb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5331cf:{NFSU2_TR(0x5331cf);
__builtin_memmove((R+4),gp(0x838408),4);
}
B5331d5:{NFSU2_TR(0x5331d5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5331d7:{NFSU2_TR(0x5331d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5331d9:{NFSU2_TR(0x5331d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5331db:{NFSU2_TR(0x5331db);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5331df:{NFSU2_TR(0x5331df);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5331e3:{NFSU2_TR(0x5331e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5332e2;}}
}
B5331e9:L5331e9:{c.instructions+=5;NFSU2_TR(0x5331e9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5331ea:{NFSU2_TR(0x5331ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5331eb:{NFSU2_TR(0x5331eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5331ec:{NFSU2_TR(0x5331ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5331ee:{NFSU2_TR(0x5331ee);
__builtin_memmove((R+28),(R+28),4);
}
B5331f0:L5331f0:{c.instructions+=2;NFSU2_TR(0x5331f0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5331f2:{NFSU2_TR(0x5331f2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5332c1;}}
}
B5331f8:L5331f8:{c.instructions+=2;NFSU2_TR(0x5331f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5331fa:{NFSU2_TR(0x5331fa);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5332c1;}}
}
B533200:L533200:{c.instructions+=4;NFSU2_TR(0x533200);
__builtin_memmove((R+0),gp(0x83840c),4);
}
B533205:{NFSU2_TR(0x533205);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B533208:{NFSU2_TR(0x533208);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53320a:{NFSU2_TR(0x53320a);
if(r1(R+518)){{goto L5332c1;}}
}
B533210:L533210:{c.instructions+=3;NFSU2_TR(0x533210);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533213:{NFSU2_TR(0x533213);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533215:{NFSU2_TR(0x533215);
if(r1(R+518)){{goto L53321f;}}
}
B533217:L533217:{c.instructions+=2;NFSU2_TR(0x533217);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533219:{NFSU2_TR(0x533219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5332c1;}}
}
B53321f:L53321f:{c.instructions+=3;NFSU2_TR(0x53321f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B533223:{NFSU2_TR(0x533223);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B533229:{NFSU2_TR(0x533229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5332c1;}}
}
B53322f:L53322f:{c.instructions+=5;NFSU2_TR(0x53322f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7afcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533235:{NFSU2_TR(0x533235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B533238:{NFSU2_TR(0x533238);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53323a:{NFSU2_TR(0x53323a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53323c:{NFSU2_TR(0x53323c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533250;}}
}
B53323e:L53323e:{c.instructions+=1;NFSU2_TR(0x53323e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7b00ull))));
__builtin_memmove((R+8),(U+0),4);
}
B533244:L533244:{c.instructions+=2;NFSU2_TR(0x533244);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B533246:{NFSU2_TR(0x533246);
if(r1(R+518)){{goto L533297;}}
}
B533248:L533248:{c.instructions+=4;NFSU2_TR(0x533248);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B533249:{NFSU2_TR(0x533249);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x8ull))));
}
B53324c:{NFSU2_TR(0x53324c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53324e:{NFSU2_TR(0x53324e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533244u);}goto L533244;}}
}
B533250:L533250:{c.instructions+=1;NFSU2_TR(0x533250);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B533252:L533252:{c.instructions+=5;NFSU2_TR(0x533252);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B533255:{NFSU2_TR(0x533255);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B533259:{NFSU2_TR(0x533259);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B53325b:{NFSU2_TR(0x53325b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B53325e:{NFSU2_TR(0x53325e);
if(r1(R+514)){{goto L5332a0;}}
}
B533260:L533260:{c.instructions+=2;NFSU2_TR(0x533260);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533262:{NFSU2_TR(0x533262);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533285;}}
}
B533264:L533264:{c.instructions+=2;NFSU2_TR(0x533264);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B533267:{NFSU2_TR(0x533267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53326cull));
TAIL_STATIC(0x75bed4u,75b);
}
B53326c:L53326c:{c.instructions+=3;NFSU2_TR(0x53326c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53326d:{NFSU2_TR(0x53326d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5d20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B533273:{NFSU2_TR(0x533273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533278ull));
TAIL_STATIC(0x5299b0u,529);
}
B533278:L533278:{c.instructions+=4;NFSU2_TR(0x533278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53327b:{NFSU2_TR(0x53327b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53327c:{NFSU2_TR(0x53327c);
__builtin_memmove((R+4),(R+28),4);
}
B53327e:{NFSU2_TR(0x53327e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533283ull));
TAIL_STATIC(0x512f10u,512);
}
B533283:L533283:{c.instructions+=1;NFSU2_TR(0x533283);
__builtin_memmove((R+4),(R+0),4);
}
B533285:L533285:{c.instructions+=4;NFSU2_TR(0x533285);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533289:{NFSU2_TR(0x533289);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53328a:{NFSU2_TR(0x53328a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x887cull))));
__builtin_memmove((R+4),(U+0),4);
}
B533290:{NFSU2_TR(0x533290);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533295ull));
TAIL_STATIC(0x5253f0u,525);
}
B533295:L533295:{c.instructions+=1;NFSU2_TR(0x533295);
{goto L5332c1;}
}
B533297:L533297:{c.instructions+=2;NFSU2_TR(0x533297);
u8 U[12];
w4(U+0,u32(u32(u32(0x7b00ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B53329e:{NFSU2_TR(0x53329e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533252u);}goto L533252;}
}
B5332a0:L5332a0:{c.instructions+=2;NFSU2_TR(0x5332a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5332a2:{NFSU2_TR(0x5332a2);
if(r1(R+518)){{goto L5332a8;}}
}
B5332a4:L5332a4:{c.instructions+=1;NFSU2_TR(0x5332a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5332a8:L5332a8:{c.instructions+=3;NFSU2_TR(0x5332a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5332ac:{NFSU2_TR(0x5332ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5332ae:{NFSU2_TR(0x5332ae);
if(r1(R+518)){{goto L5332bd;}}
}
B5332b0:L5332b0:{c.instructions+=5;NFSU2_TR(0x5332b0);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5332b3:{NFSU2_TR(0x5332b3);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5332b6:{NFSU2_TR(0x5332b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5332b8:{NFSU2_TR(0x5332b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5332bb:{NFSU2_TR(0x5332bb);
if(r1(R+514)){{goto L5332c1;}}
}
B5332bd:L5332bd:{c.instructions+=1;NFSU2_TR(0x5332bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5332c1:L5332c1:{c.instructions+=7;NFSU2_TR(0x5332c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5332c5:{NFSU2_TR(0x5332c5);
__builtin_memmove((R+4),gp(0x838408),4);
}
B5332cb:{NFSU2_TR(0x5332cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5332cc:{NFSU2_TR(0x5332cc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B5332cf:{NFSU2_TR(0x5332cf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5332d1:{NFSU2_TR(0x5332d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5332d5:{NFSU2_TR(0x5332d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5331f0u);}goto L5331f0;}}
}
B5332db:L5332db:{c.instructions+=4;NFSU2_TR(0x5332db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5332df:{NFSU2_TR(0x5332df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5332e0:{NFSU2_TR(0x5332e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5332e1:{NFSU2_TR(0x5332e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5332e2:L5332e2:{c.instructions+=2;NFSU2_TR(0x5332e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5332e4:{NFSU2_TR(0x5332e4);
if(r1(R+518)){{goto L5332f9;}}
}
B5332e6:L5332e6:{c.instructions+=2;NFSU2_TR(0x5332e6);
{u32 ea_=u32(r4(R+8)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5332e9:{NFSU2_TR(0x5332e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5332eeull));
TAIL_STATIC(0x75bed4u,75b);
}
B5332ee:L5332ee:{c.instructions+=4;NFSU2_TR(0x5332ee);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8895ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5332f4:{NFSU2_TR(0x5332f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5332f5:{NFSU2_TR(0x5332f5);
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
B5332f8:{NFSU2_TR(0x5332f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5332f9:L5332f9:{c.instructions+=4;NFSU2_TR(0x5332f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8895ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533300:{NFSU2_TR(0x533300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533301:{NFSU2_TR(0x533301);
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
B533304:{NFSU2_TR(0x533304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533310:L533310:{c.instructions+=6;NFSU2_TR(0x533310);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B533313:{NFSU2_TR(0x533313);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533314:{NFSU2_TR(0x533314);
__builtin_memmove((R+24),(R+4),4);
}
B533316:{NFSU2_TR(0x533316);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533317:{NFSU2_TR(0x533317);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53331b:{NFSU2_TR(0x53331b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533320ull));
TAIL_STATIC(0x527d30u,527);
}
B533320:L533320:{c.instructions+=2;NFSU2_TR(0x533320);
__builtin_memmove((R+4),(R+24),4);
}
B533322:{NFSU2_TR(0x533322);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533327ull));
TAIL_STATIC(0x500f30u,500);
}
B533327:L533327:{c.instructions+=4;NFSU2_TR(0x533327);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53332d:{NFSU2_TR(0x53332d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53332f:{NFSU2_TR(0x53332f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533331:{NFSU2_TR(0x533331);
if(r1(R+518)){{goto L533365;}}
}
B533333:L533333:{c.instructions+=8;NFSU2_TR(0x533333);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B533337:{NFSU2_TR(0x533337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533338:{NFSU2_TR(0x533338);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc00ull))));
__builtin_memmove((R+4),(U+0),4);
}
B53333e:{NFSU2_TR(0x53333e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533342:{NFSU2_TR(0x533342);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533346:{NFSU2_TR(0x533346);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53334a:{NFSU2_TR(0x53334a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B53334e:{NFSU2_TR(0x53334e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533353ull));
TAIL_STATIC(0x515060u,515);
}
B533353:L533353:{c.instructions+=4;NFSU2_TR(0x533353);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B533357:{NFSU2_TR(0x533357);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533358:{NFSU2_TR(0x533358);
__builtin_memmove((R+4),(R+24),4);
}
B53335a:{NFSU2_TR(0x53335a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53335full));
TAIL_STATIC(0x500ea0u,500);
}
B53335f:L53335f:{c.instructions+=4;NFSU2_TR(0x53335f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533360:{NFSU2_TR(0x533360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533361:{NFSU2_TR(0x533361);
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
B533364:{NFSU2_TR(0x533364);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533365:L533365:{c.instructions+=4;NFSU2_TR(0x533365);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533366:{NFSU2_TR(0x533366);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533367:{NFSU2_TR(0x533367);
__builtin_memmove((R+4),(R+24),4);
}
B533369:{NFSU2_TR(0x533369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53336eull));
TAIL_STATIC(0x528980u,528);
}
B53336e:L53336e:{c.instructions+=2;NFSU2_TR(0x53336e);
__builtin_memmove((R+4),(R+24),4);
}
B533370:{NFSU2_TR(0x533370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533375ull));
TAIL_STATIC(0x5141b0u,514);
}
B533375:L533375:{c.instructions+=2;NFSU2_TR(0x533375);
__builtin_memmove((R+4),(R+24),4);
}
B533377:{NFSU2_TR(0x533377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53337cull));
TAIL_STATIC(0x5291e0u,529);
}
B53337c:L53337c:{c.instructions+=5;NFSU2_TR(0x53337c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53337d:{NFSU2_TR(0x53337d);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533382:{NFSU2_TR(0x533382);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533383:{NFSU2_TR(0x533383);
w4(R+4,u32(0x88f298ull));
}
B533388:{NFSU2_TR(0x533388);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53338dull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B53338d:L53338d:{c.instructions+=3;NFSU2_TR(0x53338d);
__builtin_memmove((R+12),(R+0),4);
}
B53338f:{NFSU2_TR(0x53338f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533391:{NFSU2_TR(0x533391);
if(r1(R+518)){{goto L53350b;}}
}
B533397:L533397:{c.instructions+=2;NFSU2_TR(0x533397);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533399:{NFSU2_TR(0x533399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53339f;}}
}
B53339b:L53339b:{c.instructions+=2;NFSU2_TR(0x53339b);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B53339d:{NFSU2_TR(0x53339d);
{goto L5333ce;}
}
B53339f:L53339f:{c.instructions+=5;NFSU2_TR(0x53339f);
__builtin_memmove((R+8),gp(0x8383f4),4);
}
B5333a5:{NFSU2_TR(0x5333a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5333a8:{NFSU2_TR(0x5333a8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5333aa:{NFSU2_TR(0x5333aa);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5333ac:{NFSU2_TR(0x5333ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5333ca;}}
}
B5333ae:L5333ae:{c.instructions+=2;NFSU2_TR(0x5333ae);
__builtin_memmove((R+28),gp(0x8383f0),4);
}
B5333b4:{NFSU2_TR(0x5333b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5333b7:L5333b7:{c.instructions+=2;NFSU2_TR(0x5333b7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5333b9:{NFSU2_TR(0x5333b9);
if(r1(R+518)){{goto L533462;}}
}
B5333bf:L5333bf:{c.instructions+=4;NFSU2_TR(0x5333bf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5333c0:{NFSU2_TR(0x5333c0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
}
B5333c6:{NFSU2_TR(0x5333c6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5333c8:{NFSU2_TR(0x5333c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5333b7u);}goto L5333b7;}}
}
B5333ca:L5333ca:{c.instructions+=1;NFSU2_TR(0x5333ca);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5333cc:L5333cc:{c.instructions+=1;NFSU2_TR(0x5333cc);
__builtin_memmove((R+20),(R+0),4);
}
B5333ce:L5333ce:{c.instructions+=5;NFSU2_TR(0x5333ce);
__builtin_memmove((R+8),gp(0x838408),4);
}
B5333d4:{NFSU2_TR(0x5333d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5333d7:{NFSU2_TR(0x5333d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5333d9:{NFSU2_TR(0x5333d9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5333db:{NFSU2_TR(0x5333db);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5333f6;}}
}
B5333dd:L5333dd:{c.instructions+=2;NFSU2_TR(0x5333dd);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B5333e3:{NFSU2_TR(0x5333e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5333e6:L5333e6:{c.instructions+=2;NFSU2_TR(0x5333e6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5333e8:{NFSU2_TR(0x5333e8);
if(r1(R+518)){{goto L53346f;}}
}
B5333ee:L5333ee:{c.instructions+=4;NFSU2_TR(0x5333ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5333ef:{NFSU2_TR(0x5333ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5333f2:{NFSU2_TR(0x5333f2);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5333f4:{NFSU2_TR(0x5333f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5333e6u);}goto L5333e6;}}
}
B5333f6:L5333f6:{c.instructions+=1;NFSU2_TR(0x5333f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5333fe:L5333fe:{c.instructions+=4;NFSU2_TR(0x5333fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B533402:{NFSU2_TR(0x533402);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B533404:{NFSU2_TR(0x533404);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533406:{NFSU2_TR(0x533406);
if(r1(R+518)){{goto L533492;}}
}
B53340c:L53340c:{c.instructions+=3;NFSU2_TR(0x53340c);
__builtin_memmove((R+0),gp(0x838441),1);
}
B533411:{NFSU2_TR(0x533411);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533413:{NFSU2_TR(0x533413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53344b;}}
}
B533415:L533415:{c.instructions+=3;NFSU2_TR(0x533415);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x9dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B53341c:{NFSU2_TR(0x53341c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7af8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B533422:{NFSU2_TR(0x533422);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L533492;}}
}
B533424:L533424:{c.instructions+=3;NFSU2_TR(0x533424);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x51ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533427:{NFSU2_TR(0x533427);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533429:{NFSU2_TR(0x533429);
if(r1(R+518)){{goto L533440;}}
}
B53342b:L53342b:{c.instructions+=4;NFSU2_TR(0x53342b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53342e:{NFSU2_TR(0x53342e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53342f:{NFSU2_TR(0x53342f);
__builtin_memmove((R+4),(R+28),4);
}
B533431:{NFSU2_TR(0x533431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533436ull));
TAIL_STATIC(0x5003b0u,500);
}
B533436:L533436:{c.instructions+=2;NFSU2_TR(0x533436);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533438:{NFSU2_TR(0x533438);
if(r1(R+518)){{goto L533492;}}
}
B53343a:L53343a:{c.instructions+=2;NFSU2_TR(0x53343a);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53343e:{NFSU2_TR(0x53343e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533492;}}
}
B533440:L533440:{c.instructions+=2;NFSU2_TR(0x533440);
__builtin_memmove((R+4),(R+20),4);
}
B533442:{NFSU2_TR(0x533442);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533447ull));
TAIL_STATIC(0x512870u,512);
}
B533447:L533447:{c.instructions+=2;NFSU2_TR(0x533447);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533449:{NFSU2_TR(0x533449);
if(r1(R+518)){{goto L533492;}}
}
B53344b:L53344b:{c.instructions+=3;NFSU2_TR(0x53344b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53344d:{NFSU2_TR(0x53344d);
__builtin_memmove((R+4),(R+28),4);
}
B53344f:{NFSU2_TR(0x53344f);
}
B533450:L533450:{c.instructions+=2;NFSU2_TR(0x533450);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B533453:{NFSU2_TR(0x533453);
if(r1(R+518)){{goto L53347a;}}
}
B533455:L533455:{c.instructions+=4;NFSU2_TR(0x533455);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B533456:{NFSU2_TR(0x533456);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B533459:{NFSU2_TR(0x533459);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53345c:{NFSU2_TR(0x53345c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533450u);}goto L533450;}}
}
B53345e:L53345e:{c.instructions+=2;NFSU2_TR(0x53345e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533460:{NFSU2_TR(0x533460);
{goto L533490;}
}
B533462:L533462:{c.instructions+=4;NFSU2_TR(0x533462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B533465:{NFSU2_TR(0x533465);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B533468:{NFSU2_TR(0x533468);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B53346a:{NFSU2_TR(0x53346a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5333ccu);}goto L5333cc;}
}
B53346f:L53346f:{c.instructions+=4;NFSU2_TR(0x53346f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B533472:{NFSU2_TR(0x533472);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B533474:{NFSU2_TR(0x533474);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533478:{NFSU2_TR(0x533478);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5333feu);}goto L5333fe;}
}
B53347a:L53347a:{c.instructions+=4;NFSU2_TR(0x53347a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B53347d:{NFSU2_TR(0x53347d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B533480:{NFSU2_TR(0x533480);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533482:{NFSU2_TR(0x533482);
if(r1(R+518)){{goto L533490;}}
}
B533484:L533484:{c.instructions+=3;NFSU2_TR(0x533484);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B533486:{NFSU2_TR(0x533486);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533489:{NFSU2_TR(0x533489);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533490:L533490:{c.instructions+=1;NFSU2_TR(0x533490);
__builtin_memmove((R+24),(R+0),4);
}
B533492:L533492:{c.instructions+=3;NFSU2_TR(0x533492);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533496:{NFSU2_TR(0x533496);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533498:{NFSU2_TR(0x533498);
if(r1(R+518)){{goto L5334de;}}
}
B53349a:L53349a:{c.instructions+=3;NFSU2_TR(0x53349a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53349b:{NFSU2_TR(0x53349b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4210ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5334a1:{NFSU2_TR(0x5334a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5334a6ull));
TAIL_STATIC(0x501150u,501);
}
B5334a6:L5334a6:{c.instructions+=2;NFSU2_TR(0x5334a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5334a8:{NFSU2_TR(0x5334a8);
if(r1(R+518)){{goto L5334de;}}
}
B5334aa:L5334aa:{c.instructions+=3;NFSU2_TR(0x5334aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5334ac:{NFSU2_TR(0x5334ac);
__builtin_memmove((R+4),(R+28),4);
}
B5334ae:{NFSU2_TR(0x5334ae);
__builtin_memmove((R+28),(R+28),4);
}
B5334b0:L5334b0:{c.instructions+=2;NFSU2_TR(0x5334b0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5334b3:{NFSU2_TR(0x5334b3);
if(r1(R+518)){{goto L5334c2;}}
}
B5334b5:L5334b5:{c.instructions+=4;NFSU2_TR(0x5334b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5334b6:{NFSU2_TR(0x5334b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B5334b9:{NFSU2_TR(0x5334b9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5334bc:{NFSU2_TR(0x5334bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5334b0u);}goto L5334b0;}}
}
B5334be:L5334be:{c.instructions+=2;NFSU2_TR(0x5334be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5334c0:{NFSU2_TR(0x5334c0);
{goto L5334dc;}
}
B5334c2:L5334c2:{c.instructions+=4;NFSU2_TR(0x5334c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5334c5:{NFSU2_TR(0x5334c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5334c8:{NFSU2_TR(0x5334c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5334ca:{NFSU2_TR(0x5334ca);
if(r1(R+518)){{goto L5334dc;}}
}
B5334cc:L5334cc:{c.instructions+=4;NFSU2_TR(0x5334cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5334d0:{NFSU2_TR(0x5334d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5334d2:{NFSU2_TR(0x5334d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5334d5:{NFSU2_TR(0x5334d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5334dc:L5334dc:{c.instructions+=1;NFSU2_TR(0x5334dc);
__builtin_memmove((R+24),(R+0),4);
}
B5334de:L5334de:{c.instructions+=2;NFSU2_TR(0x5334de);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5334e0:{NFSU2_TR(0x5334e0);
if(r1(R+518)){{goto L5334eb;}}
}
B5334e2:L5334e2:{c.instructions+=2;NFSU2_TR(0x5334e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5334e3:{NFSU2_TR(0x5334e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5334e8ull));
TAIL_STATIC(0x4cb110u,4cb);
}
B5334e8:L5334e8:{c.instructions+=1;NFSU2_TR(0x5334e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5334eb:L5334eb:{c.instructions+=5;NFSU2_TR(0x5334eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5334ec:{NFSU2_TR(0x5334ec);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5334f1:{NFSU2_TR(0x5334f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5334f3:{NFSU2_TR(0x5334f3);
w4(R+4,u32(0x88f298ull));
}
B5334f8:{NFSU2_TR(0x5334f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5334fdull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B5334fd:L5334fd:{c.instructions+=3;NFSU2_TR(0x5334fd);
__builtin_memmove((R+12),(R+0),4);
}
B5334ff:{NFSU2_TR(0x5334ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533501:{NFSU2_TR(0x533501);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x53339fu);}goto L53339f;}}
}
B533507:L533507:{c.instructions+=1;NFSU2_TR(0x533507);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53350b:L53350b:{c.instructions+=4;NFSU2_TR(0x53350b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533511:{NFSU2_TR(0x533511);
__builtin_memmove((R+4),(R+12),4);
}
B533513:{NFSU2_TR(0x533513);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B533515:{NFSU2_TR(0x533515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53351aull));
TAIL_STATIC(0x500820u,500);
}
B53351a:L53351a:{c.instructions+=2;NFSU2_TR(0x53351a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53351c:{NFSU2_TR(0x53351c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533598;}}
}
B53351e:L53351e:{c.instructions+=1;NFSU2_TR(0x53351e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71c8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533524:L533524:{c.instructions+=2;NFSU2_TR(0x533524);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B533526:{NFSU2_TR(0x533526);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L533583;}}
}
B533528:L533528:{c.instructions+=2;NFSU2_TR(0x533528);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53352b:{NFSU2_TR(0x53352b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533583;}}
}
B53352d:L53352d:{c.instructions+=3;NFSU2_TR(0x53352d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B533530:{NFSU2_TR(0x533530);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533532:{NFSU2_TR(0x533532);
if(r1(R+518)){{goto L53357f;}}
}
B533534:L533534:{c.instructions+=3;NFSU2_TR(0x533534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533537:{NFSU2_TR(0x533537);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533538:{NFSU2_TR(0x533538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53353dull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B53353d:L53353d:{c.instructions+=3;NFSU2_TR(0x53353d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B533540:{NFSU2_TR(0x533540);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533542:{NFSU2_TR(0x533542);
if(r1(R+518)){{goto L53357f;}}
}
B533544:L533544:{c.instructions+=4;NFSU2_TR(0x533544);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B533548:{NFSU2_TR(0x533548);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53354a:{NFSU2_TR(0x53354a);
__builtin_memmove((R+8),(R+12),4);
}
B53354c:{NFSU2_TR(0x53354c);
__builtin_memmove((R+16),(R+16),4);
}
B533550:L533550:{c.instructions+=2;NFSU2_TR(0x533550);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B533553:{NFSU2_TR(0x533553);
if(r1(R+518)){{goto L533560;}}
}
B533555:L533555:{c.instructions+=4;NFSU2_TR(0x533555);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B533556:{NFSU2_TR(0x533556);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B533559:{NFSU2_TR(0x533559);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53355c:{NFSU2_TR(0x53355c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533550u);}goto L533550;}}
}
B53355e:L53355e:{c.instructions+=1;NFSU2_TR(0x53355e);
{goto L53357f;}
}
B533560:L533560:{c.instructions+=4;NFSU2_TR(0x533560);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B533563:{NFSU2_TR(0x533563);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B533566:{NFSU2_TR(0x533566);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533568:{NFSU2_TR(0x533568);
if(r1(R+518)){{goto L53357f;}}
}
B53356a:L53356a:{c.instructions+=5;NFSU2_TR(0x53356a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53356b:{NFSU2_TR(0x53356b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53356d:{NFSU2_TR(0x53356d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533570:{NFSU2_TR(0x533570);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533577:{NFSU2_TR(0x533577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53357cull));
TAIL_STATIC(0x4cb110u,4cb);
}
B53357c:L53357c:{c.instructions+=1;NFSU2_TR(0x53357c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B53357f:L53357f:{c.instructions+=1;NFSU2_TR(0x53357f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B533583:L533583:{c.instructions+=5;NFSU2_TR(0x533583);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533589:{NFSU2_TR(0x533589);
__builtin_memmove((R+4),(R+12),4);
}
B53358b:{NFSU2_TR(0x53358b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B53358c:{NFSU2_TR(0x53358c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B53358f:{NFSU2_TR(0x53358f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533594ull));
TAIL_STATIC(0x500820u,500);
}
B533594:L533594:{c.instructions+=2;NFSU2_TR(0x533594);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533596:{NFSU2_TR(0x533596);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533524u);}goto L533524;}}
}
B533598:L533598:{c.instructions+=3;NFSU2_TR(0x533598);
__builtin_memmove((R+4),(R+12),4);
}
B53359a:{NFSU2_TR(0x53359a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B53359c:{NFSU2_TR(0x53359c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5335a1ull));
TAIL_STATIC(0x500910u,500);
}
B5335a1:L5335a1:{c.instructions+=2;NFSU2_TR(0x5335a1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5335a3:{NFSU2_TR(0x5335a3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533673;}}
}
B5335a9:L5335a9:{c.instructions+=1;NFSU2_TR(0x5335a9);
__builtin_memmove((R+16),(R+16),4);
}
B5335b0:L5335b0:{c.instructions+=2;NFSU2_TR(0x5335b0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5335b2:{NFSU2_TR(0x5335b2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53365c;}}
}
B5335b8:L5335b8:{c.instructions+=2;NFSU2_TR(0x5335b8);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5335bb:{NFSU2_TR(0x5335bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53365c;}}
}
B5335c1:L5335c1:{c.instructions+=3;NFSU2_TR(0x5335c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5335c3:{NFSU2_TR(0x5335c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5335c5:{NFSU2_TR(0x5335c5);
if(r1(R+518)){{goto L53365c;}}
}
B5335cb:L5335cb:{c.instructions+=4;NFSU2_TR(0x5335cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5335cf:{NFSU2_TR(0x5335cf);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x838428))));
}
B5335d5:{NFSU2_TR(0x5335d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5335d6:{NFSU2_TR(0x5335d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5335dbull));
TAIL_STATIC(0x43db50u,43d);
}
B5335db:L5335db:{c.instructions+=7;NFSU2_TR(0x5335db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5335de:{NFSU2_TR(0x5335de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5335e0:{NFSU2_TR(0x5335e0);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5335e5:{NFSU2_TR(0x5335e5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5335e7:{NFSU2_TR(0x5335e7);
w4(R+4,u32(0x88f298ull));
}
B5335ec:{NFSU2_TR(0x5335ec);
__builtin_memmove((R+24),(R+0),4);
}
B5335ee:{NFSU2_TR(0x5335ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5335f3ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B5335f3:L5335f3:{c.instructions+=2;NFSU2_TR(0x5335f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5335f5:{NFSU2_TR(0x5335f5);
if(r1(R+518)){{goto L533658;}}
}
B5335f7:L5335f7:{c.instructions+=2;NFSU2_TR(0x5335f7);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5335fa:{NFSU2_TR(0x5335fa);
if(r1(R+518)){{goto L533614;}}
}
B5335fc:L5335fc:{c.instructions+=5;NFSU2_TR(0x5335fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5335fd:{NFSU2_TR(0x5335fd);
u8 U[4];
w4(U+0,u32(0xe000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533602:{NFSU2_TR(0x533602);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533604:{NFSU2_TR(0x533604);
w4(R+4,u32(0x88f298ull));
}
B533609:{NFSU2_TR(0x533609);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53360eull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B53360e:L53360e:{c.instructions+=2;NFSU2_TR(0x53360e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533610:{NFSU2_TR(0x533610);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5335f7u);}goto L5335f7;}}
}
B533612:L533612:{c.instructions+=1;NFSU2_TR(0x533612);
{goto L533658;}
}
B533614:L533614:{c.instructions+=4;NFSU2_TR(0x533614);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B533618:{NFSU2_TR(0x533618);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B53361a:{NFSU2_TR(0x53361a);
__builtin_memmove((R+8),(R+24),4);
}
B53361c:{NFSU2_TR(0x53361c);
__builtin_memmove((R+16),(R+16),4);
}
B533620:L533620:{c.instructions+=2;NFSU2_TR(0x533620);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B533623:{NFSU2_TR(0x533623);
if(r1(R+518)){{goto L533632;}}
}
B533625:L533625:{c.instructions+=4;NFSU2_TR(0x533625);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B533626:{NFSU2_TR(0x533626);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x18ull))));
}
B533629:{NFSU2_TR(0x533629);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53362c:{NFSU2_TR(0x53362c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533620u);}goto L533620;}}
}
B53362e:L53362e:{c.instructions+=2;NFSU2_TR(0x53362e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B533630:{NFSU2_TR(0x533630);
{goto L533648;}
}
B533632:L533632:{c.instructions+=4;NFSU2_TR(0x533632);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B533635:{NFSU2_TR(0x533635);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B533638:{NFSU2_TR(0x533638);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53363a:{NFSU2_TR(0x53363a);
if(r1(R+518)){{goto L533648;}}
}
B53363c:L53363c:{c.instructions+=3;NFSU2_TR(0x53363c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B53363e:{NFSU2_TR(0x53363e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533641:{NFSU2_TR(0x533641);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533648:L533648:{c.instructions+=3;NFSU2_TR(0x533648);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533649:{NFSU2_TR(0x533649);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533650:{NFSU2_TR(0x533650);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533655ull));
TAIL_STATIC(0x4cb110u,4cb);
}
B533655:L533655:{c.instructions+=1;NFSU2_TR(0x533655);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B533658:L533658:{c.instructions+=1;NFSU2_TR(0x533658);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B53365c:L53365c:{c.instructions+=4;NFSU2_TR(0x53365c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7148ull))));
__builtin_memmove((R+4),(U+0),4);
}
B533662:{NFSU2_TR(0x533662);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B533663:{NFSU2_TR(0x533663);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B533666:{NFSU2_TR(0x533666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53366bull));
TAIL_STATIC(0x500910u,500);
}
B53366b:L53366b:{c.instructions+=2;NFSU2_TR(0x53366b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53366d:{NFSU2_TR(0x53366d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5335b0u);}goto L5335b0;}}
}
B533673:L533673:{c.instructions+=6;NFSU2_TR(0x533673);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533674:{NFSU2_TR(0x533674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533675:{NFSU2_TR(0x533675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533676:{NFSU2_TR(0x533676);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533677:{NFSU2_TR(0x533677);
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
B53367a:{NFSU2_TR(0x53367a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533680:L533680:{c.instructions+=12;NFSU2_TR(0x533680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B533683:{NFSU2_TR(0x533683);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B533688:{NFSU2_TR(0x533688);
__builtin_memmove((R+8),gp(0x838408),4);
}
B53368e:{NFSU2_TR(0x53368e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53368f:{NFSU2_TR(0x53368f);
__builtin_memmove((R+12),(R+4),4);
}
B533691:{NFSU2_TR(0x533691);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533697:{NFSU2_TR(0x533697);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533698:{NFSU2_TR(0x533698);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B53369a:{NFSU2_TR(0x53369a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53369c:{NFSU2_TR(0x53369c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53369d:{NFSU2_TR(0x53369d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5336a1:{NFSU2_TR(0x5336a1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5336bc;}}
}
B5336a3:L5336a3:{c.instructions+=4;NFSU2_TR(0x5336a3);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B5336a9:{NFSU2_TR(0x5336a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5336ac:{NFSU2_TR(0x5336ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5336af:{NFSU2_TR(0x5336af);
}
B5336b0:L5336b0:{c.instructions+=2;NFSU2_TR(0x5336b0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5336b2:{NFSU2_TR(0x5336b2);
if(r1(R+518)){{goto L533710;}}
}
B5336b4:L5336b4:{c.instructions+=4;NFSU2_TR(0x5336b4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5336b5:{NFSU2_TR(0x5336b5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5336b8:{NFSU2_TR(0x5336b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5336ba:{NFSU2_TR(0x5336ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5336b0u);}goto L5336b0;}}
}
B5336bc:L5336bc:{c.instructions+=1;NFSU2_TR(0x5336bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5336be:L5336be:{c.instructions+=3;NFSU2_TR(0x5336be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5336c1:{NFSU2_TR(0x5336c1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5336c2:{NFSU2_TR(0x5336c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5336c7ull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B5336c7:L5336c7:{c.instructions+=11;NFSU2_TR(0x5336c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5336cb:{NFSU2_TR(0x5336cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5336cf:{NFSU2_TR(0x5336cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5336d2:{NFSU2_TR(0x5336d2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5336d4:{NFSU2_TR(0x5336d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5336d8:{NFSU2_TR(0x5336d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5336d9:{NFSU2_TR(0x5336d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5336dd:{NFSU2_TR(0x5336dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5336e1:{NFSU2_TR(0x5336e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5336e5:{NFSU2_TR(0x5336e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5336e9:{NFSU2_TR(0x5336e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5336eeull));
TAIL_STATIC(0x4db820u,4db);
}
B5336ee:L5336ee:{c.instructions+=4;NFSU2_TR(0x5336ee);
__builtin_memmove((R+4),gp(0x86283c),4);
}
B5336f4:{NFSU2_TR(0x5336f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5336f6:{NFSU2_TR(0x5336f6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5336f8:{NFSU2_TR(0x5336f8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53372c;}}
}
B5336fa:L5336fa:{c.instructions+=2;NFSU2_TR(0x5336fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5336fd:{NFSU2_TR(0x5336fd);
__builtin_memmove((R+4),(R+4),4);
}
B533700:L533700:{c.instructions+=2;NFSU2_TR(0x533700);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B533707:{NFSU2_TR(0x533707);
if(r1(R+518)){{goto L533719;}}
}
B533709:L533709:{c.instructions+=3;NFSU2_TR(0x533709);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53370a:{NFSU2_TR(0x53370a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53370c:{NFSU2_TR(0x53370c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533700u);}goto L533700;}}
}
B53370e:L53370e:{c.instructions+=1;NFSU2_TR(0x53370e);
{goto L53372c;}
}
B533710:L533710:{c.instructions+=4;NFSU2_TR(0x533710);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B533713:{NFSU2_TR(0x533713);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B533715:{NFSU2_TR(0x533715);
__builtin_memmove((R+24),(R+0),4);
}
B533717:{NFSU2_TR(0x533717);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5336beu);}goto L5336be;}
}
B533719:L533719:{c.instructions+=3;NFSU2_TR(0x533719);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B533720:{NFSU2_TR(0x533720);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533722:{NFSU2_TR(0x533722);
if(r1(R+518)){{goto L53372c;}}
}
B533724:L533724:{c.instructions+=2;NFSU2_TR(0x533724);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533728:{NFSU2_TR(0x533728);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B53372c:L53372c:{c.instructions+=2;NFSU2_TR(0x53372c);
w4(R+4,u32(0x85ad40ull));
}
B533731:{NFSU2_TR(0x533731);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533736ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533310u);}goto L533310;}
}
B533736:L533736:{c.instructions+=5;NFSU2_TR(0x533736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533737:{NFSU2_TR(0x533737);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533738:{NFSU2_TR(0x533738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533739:{NFSU2_TR(0x533739);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B53373c:{NFSU2_TR(0x53373c);
TAIL_STATIC(0x4f92a0u,4f9);
}
B533750:L533750:{c.instructions+=7;NFSU2_TR(0x533750);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533751:{NFSU2_TR(0x533751);
__builtin_memmove((R+20),(R+16),4);
}
B533753:{NFSU2_TR(0x533753);
__builtin_memmove((R+8),gp(0x838408),4);
}
B533759:{NFSU2_TR(0x533759);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53375a:{NFSU2_TR(0x53375a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B53375c:{NFSU2_TR(0x53375c);
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
B53375e:{NFSU2_TR(0x53375e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5337be;}}
}
B533760:L533760:{c.instructions+=4;NFSU2_TR(0x533760);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533761:{NFSU2_TR(0x533761);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B533764:{NFSU2_TR(0x533764);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533765:{NFSU2_TR(0x533765);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B533767:L533767:{c.instructions+=2;NFSU2_TR(0x533767);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B533769:{NFSU2_TR(0x533769);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5337b4;}}
}
B53376b:L53376b:{c.instructions+=2;NFSU2_TR(0x53376b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53376d:{NFSU2_TR(0x53376d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5337b4;}}
}
B53376f:L53376f:{c.instructions+=4;NFSU2_TR(0x53376f);
__builtin_memmove((R+0),gp(0x83840c),4);
}
B533774:{NFSU2_TR(0x533774);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B533776:{NFSU2_TR(0x533776);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533778:{NFSU2_TR(0x533778);
if(r1(R+518)){{goto L5337b4;}}
}
B53377a:L53377a:{c.instructions+=3;NFSU2_TR(0x53377a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53377d:{NFSU2_TR(0x53377d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B53377f:{NFSU2_TR(0x53377f);
if(r1(R+518)){{goto L53378e;}}
}
B533781:L533781:{c.instructions+=2;NFSU2_TR(0x533781);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B533784:{NFSU2_TR(0x533784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5337b4;}}
}
B533786:L533786:{c.instructions+=3;NFSU2_TR(0x533786);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533789:{NFSU2_TR(0x533789);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B53378c:{NFSU2_TR(0x53378c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5337b4;}}
}
B53378e:L53378e:{c.instructions+=4;NFSU2_TR(0x53378e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533791:{NFSU2_TR(0x533791);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533792:{NFSU2_TR(0x533792);
w4(R+4,u32(0x85ad40ull));
}
B533797:{NFSU2_TR(0x533797);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53379cull));
TAIL_STATIC(0x512f10u,512);
}
B53379c:L53379c:{c.instructions+=2;NFSU2_TR(0x53379c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53379e:{NFSU2_TR(0x53379e);
if(r1(R+518)){{goto L5337a4;}}
}
B5337a0:L5337a0:{c.instructions+=1;NFSU2_TR(0x5337a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5337a4:L5337a4:{c.instructions+=2;NFSU2_TR(0x5337a4);
w4(R+4,u32(0x85ad40ull));
}
B5337a9:{NFSU2_TR(0x5337a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5337aeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533310u);}goto L533310;}
}
B5337ae:L5337ae:{c.instructions+=1;NFSU2_TR(0x5337ae);
__builtin_memmove((R+8),gp(0x838408),4);
}
B5337b4:L5337b4:{c.instructions+=4;NFSU2_TR(0x5337b4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5337b5:{NFSU2_TR(0x5337b5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5337b8:{NFSU2_TR(0x5337b8);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5337ba:{NFSU2_TR(0x5337ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533767u);}goto L533767;}}
}
B5337bc:L5337bc:{c.instructions+=2;NFSU2_TR(0x5337bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5337bd:{NFSU2_TR(0x5337bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5337be:L5337be:{c.instructions+=3;NFSU2_TR(0x5337be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5337bf:{NFSU2_TR(0x5337bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5337c0:{NFSU2_TR(0x5337c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5337d0:L5337d0:{c.instructions+=9;NFSU2_TR(0x5337d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5337d1:{NFSU2_TR(0x5337d1);
__builtin_memmove((R+20),(R+16),4);
}
B5337d3:{NFSU2_TR(0x5337d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5337d4:{NFSU2_TR(0x5337d4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5337d5:{NFSU2_TR(0x5337d5);
__builtin_memmove((R+12),gp(0x838408),4);
}
B5337db:{NFSU2_TR(0x5337db);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5337dd:{NFSU2_TR(0x5337dd);
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
B5337df:{NFSU2_TR(0x5337df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5337e2:{NFSU2_TR(0x5337e2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533881;}}
}
B5337e8:L5337e8:{c.instructions+=4;NFSU2_TR(0x5337e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5337e9:{NFSU2_TR(0x5337e9);
__builtin_memmove((R+24),gp(0x86283c),4);
}
B5337ef:{NFSU2_TR(0x5337ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5337f0:{NFSU2_TR(0x5337f0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5337f2:L5337f2:{c.instructions+=2;NFSU2_TR(0x5337f2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5337f4:{NFSU2_TR(0x5337f4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L53386d;}}
}
B5337f6:L5337f6:{c.instructions+=2;NFSU2_TR(0x5337f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5337f8:{NFSU2_TR(0x5337f8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L53386d;}}
}
B5337fa:L5337fa:{c.instructions+=4;NFSU2_TR(0x5337fa);
__builtin_memmove((R+0),gp(0x83840c),4);
}
B5337ff:{NFSU2_TR(0x5337ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B533802:{NFSU2_TR(0x533802);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533804:{NFSU2_TR(0x533804);
if(r1(R+518)){{goto L53386d;}}
}
B533806:L533806:{c.instructions+=2;NFSU2_TR(0x533806);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53380a:{NFSU2_TR(0x53380a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53386d;}}
}
B53380c:L53380c:{c.instructions+=4;NFSU2_TR(0x53380c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B53380f:{NFSU2_TR(0x53380f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533812:{NFSU2_TR(0x533812);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B533815:{NFSU2_TR(0x533815);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53386d;}}
}
B533817:L533817:{c.instructions+=3;NFSU2_TR(0x533817);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533819:{NFSU2_TR(0x533819);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B53381b:{NFSU2_TR(0x53381b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L53386d;}}
}
B53381d:L53381d:{c.instructions+=1;NFSU2_TR(0x53381d);
__builtin_memmove((R+4),(R+4),4);
}
B533820:L533820:{c.instructions+=2;NFSU2_TR(0x533820);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+8))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B533827:{NFSU2_TR(0x533827);
if(r1(R+518)){{goto L533830;}}
}
B533829:L533829:{c.instructions+=3;NFSU2_TR(0x533829);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B53382a:{NFSU2_TR(0x53382a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B53382c:{NFSU2_TR(0x53382c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533820u);}goto L533820;}}
}
B53382e:L53382e:{c.instructions+=1;NFSU2_TR(0x53382e);
{goto L53386d;}
}
B533830:L533830:{c.instructions+=3;NFSU2_TR(0x533830);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x862840ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B533837:{NFSU2_TR(0x533837);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533839:{NFSU2_TR(0x533839);
if(r1(R+518)){{goto L53386d;}}
}
B53383b:L53383b:{c.instructions+=2;NFSU2_TR(0x53383b);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B53383f:{NFSU2_TR(0x53383f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L53386d;}}
}
B533841:L533841:{c.instructions+=4;NFSU2_TR(0x533841);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533844:{NFSU2_TR(0x533844);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533845:{NFSU2_TR(0x533845);
w4(R+4,u32(0x85ad40ull));
}
B53384a:{NFSU2_TR(0x53384a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53384full));
TAIL_STATIC(0x512f10u,512);
}
B53384f:L53384f:{c.instructions+=2;NFSU2_TR(0x53384f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533851:{NFSU2_TR(0x533851);
if(r1(R+518)){{goto L533857;}}
}
B533853:L533853:{c.instructions+=1;NFSU2_TR(0x533853);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533857:L533857:{c.instructions+=2;NFSU2_TR(0x533857);
w4(R+4,u32(0x85ad40ull));
}
B53385c:{NFSU2_TR(0x53385c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533861ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533310u);}goto L533310;}
}
B533861:L533861:{c.instructions+=2;NFSU2_TR(0x533861);
__builtin_memmove((R+24),gp(0x86283c),4);
}
B533867:{NFSU2_TR(0x533867);
__builtin_memmove((R+12),gp(0x838408),4);
}
B53386d:L53386d:{c.instructions+=6;NFSU2_TR(0x53386d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533870:{NFSU2_TR(0x533870);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B533871:{NFSU2_TR(0x533871);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B533874:{NFSU2_TR(0x533874);
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
B533876:{NFSU2_TR(0x533876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533879:{NFSU2_TR(0x533879);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5337f2u);}goto L5337f2;}}
}
B53387f:L53387f:{c.instructions+=2;NFSU2_TR(0x53387f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533880:{NFSU2_TR(0x533880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533881:L533881:{c.instructions+=4;NFSU2_TR(0x533881);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533882:{NFSU2_TR(0x533882);
__builtin_memmove((R+16),(R+20),4);
}
B533884:{NFSU2_TR(0x533884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533885:{NFSU2_TR(0x533885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533890:L533890:{c.instructions+=6;NFSU2_TR(0x533890);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533894:{NFSU2_TR(0x533894);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533895:{NFSU2_TR(0x533895);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533896:{NFSU2_TR(0x533896);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533897:{NFSU2_TR(0x533897);
__builtin_memmove((R+28),(R+4),4);
}
B533899:{NFSU2_TR(0x533899);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x53389eull));
TAIL_STATIC(0x501310u,501);
}
B53389e:L53389e:{c.instructions+=4;NFSU2_TR(0x53389e);
__builtin_memmove((R+24),(R+0),4);
}
B5338a0:{NFSU2_TR(0x5338a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5338a3:{NFSU2_TR(0x5338a3);
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
B5338a5:{NFSU2_TR(0x5338a5);
if(r1(R+518)){{goto L5338bb;}}
}
B5338a7:L5338a7:{c.instructions+=3;NFSU2_TR(0x5338a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338a8:{NFSU2_TR(0x5338a8);
__builtin_memmove((R+4),(R+28),4);
}
B5338aa:{NFSU2_TR(0x5338aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5338afull));
TAIL_STATIC(0x514cb0u,514);
}
B5338af:L5338af:{c.instructions+=2;NFSU2_TR(0x5338af);
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
B5338b1:{NFSU2_TR(0x5338b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5338bb;}}
}
B5338b3:L5338b3:{c.instructions+=3;NFSU2_TR(0x5338b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338b4:{NFSU2_TR(0x5338b4);
__builtin_memmove((R+4),(R+28),4);
}
B5338b6:{NFSU2_TR(0x5338b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5338bbull));
TAIL_STATIC(0x5295f0u,529);
}
B5338bb:L5338bb:{c.instructions+=3;NFSU2_TR(0x5338bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5338bc:{NFSU2_TR(0x5338bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5338bd:{NFSU2_TR(0x5338bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5338c0:L5338c0:{c.instructions+=8;NFSU2_TR(0x5338c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338c1:{NFSU2_TR(0x5338c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338c2:{NFSU2_TR(0x5338c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338c3:{NFSU2_TR(0x5338c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5338c7:{NFSU2_TR(0x5338c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5338ca:{NFSU2_TR(0x5338ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338cb:{NFSU2_TR(0x5338cb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5338cf:{NFSU2_TR(0x5338cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5338d4ull));
TAIL_STATIC(0x501310u,501);
}
B5338d4:L5338d4:{c.instructions+=5;NFSU2_TR(0x5338d4);
__builtin_memmove((R+24),(R+0),4);
}
B5338d6:{NFSU2_TR(0x5338d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5338d9:{NFSU2_TR(0x5338d9);
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
B5338db:{NFSU2_TR(0x5338db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5338df:{NFSU2_TR(0x5338df);
if(r1(R+518)){{goto L533a32;}}
}
B5338e5:L5338e5:{c.instructions+=5;NFSU2_TR(0x5338e5);
__builtin_memmove((R+4),gp(0x864210),4);
}
B5338eb:{NFSU2_TR(0x5338eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
}
B5338f1:{NFSU2_TR(0x5338f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338f2:{NFSU2_TR(0x5338f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338f3:{NFSU2_TR(0x5338f3);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L5338fa;}}
}
B5338f5:L5338f5:{c.instructions+=3;NFSU2_TR(0x5338f5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5338f6:{NFSU2_TR(0x5338f6);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffffeull))));
}
B5338f9:{NFSU2_TR(0x5338f9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5338fa:L5338fa:{c.instructions+=4;NFSU2_TR(0x5338fa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5338fb:{NFSU2_TR(0x5338fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5338fc:{NFSU2_TR(0x5338fc);
u8 U[4];
w4(U+0,u32(0x79babcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533901:{NFSU2_TR(0x533901);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533906ull));
TAIL_STATIC(0x50b990u,50b);
}
B533906:L533906:{c.instructions+=4;NFSU2_TR(0x533906);
__builtin_memmove((R+8),gp(0x864210),4);
}
B53390c:{NFSU2_TR(0x53390c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x80000001ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B533912:{NFSU2_TR(0x533912);
__builtin_memmove((R+12),(R+0),4);
}
B533914:{NFSU2_TR(0x533914);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L53391b;}}
}
B533916:L533916:{c.instructions+=3;NFSU2_TR(0x533916);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B533917:{NFSU2_TR(0x533917);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0xfffffffeull))));
}
B53391a:{NFSU2_TR(0x53391a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B53391b:L53391b:{c.instructions+=4;NFSU2_TR(0x53391b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B53391c:{NFSU2_TR(0x53391c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53391d:{NFSU2_TR(0x53391d);
u8 U[4];
w4(U+0,u32(0x79baa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533922:{NFSU2_TR(0x533922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533927ull));
TAIL_STATIC(0x50b990u,50b);
}
B533927:L533927:{c.instructions+=4;NFSU2_TR(0x533927);
__builtin_memmove((R+20),(R+0),4);
}
B533929:{NFSU2_TR(0x533929);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B53392c:{NFSU2_TR(0x53392c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53392d:{NFSU2_TR(0x53392d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533932ull));
TAIL_STATIC(0x4fff80u,4ff);
}
B533932:L533932:{c.instructions+=3;NFSU2_TR(0x533932);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B533935:{NFSU2_TR(0x533935);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533937:{NFSU2_TR(0x533937);
if(r1(R+518)){{goto L53396c;}}
}
B533939:L533939:{c.instructions+=4;NFSU2_TR(0x533939);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53393c:{NFSU2_TR(0x53393c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53393d:{NFSU2_TR(0x53393d);
u8 U[4];
w4(U+0,u32(0x79b858ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533942:{NFSU2_TR(0x533942);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533947ull));
TAIL_STATIC(0x43db80u,43d);
}
B533947:L533947:{c.instructions+=10;NFSU2_TR(0x533947);
__builtin_memmove((R+4),gp(0x864210),4);
}
B53394d:{NFSU2_TR(0x53394d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B533950:{NFSU2_TR(0x533950);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533951:{NFSU2_TR(0x533951);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533952:{NFSU2_TR(0x533952);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B533953:{NFSU2_TR(0x533953);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533954:{NFSU2_TR(0x533954);
__builtin_memmove(gp(0x864210),(R+4),4);
}
B53395a:{NFSU2_TR(0x53395a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B53395e:{NFSU2_TR(0x53395e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53395f:{NFSU2_TR(0x53395f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533964ull));
TAIL_STATIC(0x529670u,529);
}
B533964:L533964:{c.instructions+=6;NFSU2_TR(0x533964);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533965:{NFSU2_TR(0x533965);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533966:{NFSU2_TR(0x533966);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533967:{NFSU2_TR(0x533967);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533968:{NFSU2_TR(0x533968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B533969:{NFSU2_TR(0x533969);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B53396c:L53396c:{c.instructions+=6;NFSU2_TR(0x53396c);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B53396f:{NFSU2_TR(0x53396f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B533971:{NFSU2_TR(0x533971);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533973:{NFSU2_TR(0x533973);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B533975:{NFSU2_TR(0x533975);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B533978:{NFSU2_TR(0x533978);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5339a7;}}
}
B53397a:L53397a:{c.instructions+=9;NFSU2_TR(0x53397a);
__builtin_memmove((R+0),gp(0x86420c),4);
}
B53397f:{NFSU2_TR(0x53397f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B533980:{NFSU2_TR(0x533980);
w4(R+4,u32(0x3ull));
}
B533985:{NFSU2_TR(0x533985);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x533985);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x533985);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B533987:{NFSU2_TR(0x533987);
__builtin_memmove((R+24),(R+8),4);
}
B533989:{NFSU2_TR(0x533989);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B53398a:{NFSU2_TR(0x53398a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53398b:{NFSU2_TR(0x53398b);
u8 U[4];
w4(U+0,u32(0x79ba88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533990:{NFSU2_TR(0x533990);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533995ull));
TAIL_STATIC(0x50b990u,50b);
}
B533995:L533995:{c.instructions+=4;NFSU2_TR(0x533995);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533996:{NFSU2_TR(0x533996);
u8 U[4];
w4(U+0,u32(0x79ba6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B53399b:{NFSU2_TR(0x53399b);
__builtin_memmove((R+12),(R+0),4);
}
B53399d:{NFSU2_TR(0x53399d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5339a2ull));
TAIL_STATIC(0x50b990u,50b);
}
B5339a2:L5339a2:{c.instructions+=2;NFSU2_TR(0x5339a2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5339a5:{NFSU2_TR(0x5339a5);
{goto L533a12;}
}
B5339a7:L5339a7:{c.instructions+=2;NFSU2_TR(0x5339a7);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5339aa:{NFSU2_TR(0x5339aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533a23;}}
}
B5339ac:L5339ac:{c.instructions+=9;NFSU2_TR(0x5339ac);
__builtin_memmove((R+0),gp(0x86420c),4);
}
B5339b1:{NFSU2_TR(0x5339b1);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5339b2:{NFSU2_TR(0x5339b2);
w4(R+4,u32(0x5ull));
}
B5339b7:{NFSU2_TR(0x5339b7);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5339b7);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5339b7);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5339b9:{NFSU2_TR(0x5339b9);
__builtin_memmove((R+24),(R+8),4);
}
B5339bb:{NFSU2_TR(0x5339bb);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5339bc:{NFSU2_TR(0x5339bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5339bd:{NFSU2_TR(0x5339bd);
u8 U[4];
w4(U+0,u32(0x79ba50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5339c2:{NFSU2_TR(0x5339c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5339c7ull));
TAIL_STATIC(0x50b990u,50b);
}
B5339c7:L5339c7:{c.instructions+=4;NFSU2_TR(0x5339c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5339c8:{NFSU2_TR(0x5339c8);
u8 U[4];
w4(U+0,u32(0x79ba30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5339cd:{NFSU2_TR(0x5339cd);
__builtin_memmove((R+12),(R+0),4);
}
B5339cf:{NFSU2_TR(0x5339cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5339d4ull));
TAIL_STATIC(0x50b990u,50b);
}
B5339d4:L5339d4:{c.instructions+=5;NFSU2_TR(0x5339d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B5339d8:{NFSU2_TR(0x5339d8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffff5ull))));
}
B5339db:{NFSU2_TR(0x5339db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5339de:{NFSU2_TR(0x5339de);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x33ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x33ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x33ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5339e1:{NFSU2_TR(0x5339e1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L533a12;}}
}
B5339e3:L5339e3:{c.instructions+=2;NFSU2_TR(0x5339e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x533a50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B5339ea:{NFSU2_TR(0x5339ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x533a38ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5339f1:L5339f1:{c.instructions+=2;NFSU2_TR(0x5339f1);
w4(R+20,u32(0x28f7092ull));
}
B5339f6:{NFSU2_TR(0x5339f6);
{goto L533a12;}
}
B5339f8:L5339f8:{c.instructions+=2;NFSU2_TR(0x5339f8);
w4(R+20,u32(0xbb034ea6ull));
}
B5339fd:{NFSU2_TR(0x5339fd);
{goto L533a12;}
}
B5339ff:L5339ff:{c.instructions+=2;NFSU2_TR(0x5339ff);
w4(R+20,u32(0x945e9bc5ull));
}
B533a04:{NFSU2_TR(0x533a04);
{goto L533a12;}
}
B533a06:L533a06:{c.instructions+=2;NFSU2_TR(0x533a06);
w4(R+20,u32(0x294d2a3ull));
}
B533a0b:{NFSU2_TR(0x533a0b);
{goto L533a12;}
}
B533a0d:L533a0d:{c.instructions+=1;NFSU2_TR(0x533a0d);
w4(R+20,u32(0x78deea1cull));
}
B533a12:L533a12:{c.instructions+=4;NFSU2_TR(0x533a12);
__builtin_memmove((R+4),gp(0x86420c),4);
}
B533a18:{NFSU2_TR(0x533a18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B533a1c:{NFSU2_TR(0x533a1c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B533a1d:{NFSU2_TR(0x533a1d);
__builtin_memmove(gp(0x86420c),(R+4),4);
}
B533a23:L533a23:{c.instructions+=6;NFSU2_TR(0x533a23);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533a27:{NFSU2_TR(0x533a27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533a28:{NFSU2_TR(0x533a28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533a29:{NFSU2_TR(0x533a29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533a2a:{NFSU2_TR(0x533a2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533a2b:{NFSU2_TR(0x533a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533a30ull));
TAIL_STATIC(0x529670u,529);
}
B533a30:L533a30:{c.instructions+=2;NFSU2_TR(0x533a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533a31:{NFSU2_TR(0x533a31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533a32:L533a32:{c.instructions+=4;NFSU2_TR(0x533a32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533a33:{NFSU2_TR(0x533a33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533a34:{NFSU2_TR(0x533a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B533a35:{NFSU2_TR(0x533a35);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533a90:L533a90:{c.instructions+=5;NFSU2_TR(0x533a90);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533a91:{NFSU2_TR(0x533a91);
__builtin_memmove((R+20),(R+16),4);
}
B533a93:{NFSU2_TR(0x533a93);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533a96:{NFSU2_TR(0x533a96);
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
B533a98:{NFSU2_TR(0x533a98);
if(r1(R+518)){{goto L533b31;}}
}
B533a9e:L533a9e:{c.instructions+=7;NFSU2_TR(0x533a9e);
__builtin_memmove((R+0),gp(0x838420),4);
}
B533aa3:{NFSU2_TR(0x533aa3);
__builtin_memmove((R+4),gp(0x862838),4);
}
B533aa9:{NFSU2_TR(0x533aa9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533aaa:{NFSU2_TR(0x533aaa);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B533aac:{NFSU2_TR(0x533aac);
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
B533aae:{NFSU2_TR(0x533aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533ab1:{NFSU2_TR(0x533ab1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533b30;}}
}
B533ab3:L533ab3:{c.instructions+=4;NFSU2_TR(0x533ab3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533ab4:{NFSU2_TR(0x533ab4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533ab5:{NFSU2_TR(0x533ab5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B533ab7:{NFSU2_TR(0x533ab7);
{goto L533ac0;}
}
B533ab9:L533ab9:{c.instructions+=2;NFSU2_TR(0x533ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533abc:{NFSU2_TR(0x533abc);
__builtin_memmove((R+16),(R+16),4);
}
B533ac0:L533ac0:{c.instructions+=2;NFSU2_TR(0x533ac0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B533ac2:{NFSU2_TR(0x533ac2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L533ad2;}}
}
B533ac4:L533ac4:{c.instructions+=2;NFSU2_TR(0x533ac4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533ac6:{NFSU2_TR(0x533ac6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533ad2;}}
}
B533ac8:L533ac8:{c.instructions+=3;NFSU2_TR(0x533ac8);
__builtin_memmove((R+0),gp(0x838424),4);
}
B533acd:{NFSU2_TR(0x533acd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B533ad0:{NFSU2_TR(0x533ad0);
{goto L533ad4;}
}
B533ad2:L533ad2:{c.instructions+=1;NFSU2_TR(0x533ad2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B533ad4:L533ad4:{c.instructions+=2;NFSU2_TR(0x533ad4);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B533ad8:{NFSU2_TR(0x533ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533b21;}}
}
B533ada:L533ada:{c.instructions+=3;NFSU2_TR(0x533ada);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B533ade:{NFSU2_TR(0x533ade);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533ae0:{NFSU2_TR(0x533ae0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533b21;}}
}
B533ae2:L533ae2:{c.instructions+=4;NFSU2_TR(0x533ae2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B533ae6:{NFSU2_TR(0x533ae6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B533aec:{NFSU2_TR(0x533aec);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8620f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B533af2:{NFSU2_TR(0x533af2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533b21;}}
}
B533af4:L533af4:{c.instructions+=3;NFSU2_TR(0x533af4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533af5:{NFSU2_TR(0x533af5);
w4(R+4,u32(0x860a60ull));
}
B533afa:{NFSU2_TR(0x533afa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533affull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5338c0u);}goto L5338c0;}
}
B533aff:L533aff:{c.instructions+=3;NFSU2_TR(0x533aff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533b02:{NFSU2_TR(0x533b02);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533b04:{NFSU2_TR(0x533b04);
if(r1(R+518)){{goto L533b0a;}}
}
B533b06:L533b06:{c.instructions+=2;NFSU2_TR(0x533b06);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533b08:{NFSU2_TR(0x533b08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533b21;}}
}
B533b0a:L533b0a:{c.instructions+=3;NFSU2_TR(0x533b0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533b0d:{NFSU2_TR(0x533b0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533b0e:{NFSU2_TR(0x533b0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533b13ull));
TAIL_STATIC(0x4fff80u,4ff);
}
B533b13:L533b13:{c.instructions+=4;NFSU2_TR(0x533b13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B533b16:{NFSU2_TR(0x533b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533b17:{NFSU2_TR(0x533b17);
w4(R+4,u32(0x8635bcull));
}
B533b1c:{NFSU2_TR(0x533b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533b21ull));
TAIL_STATIC(0x5253f0u,525);
}
B533b21:L533b21:{c.instructions+=5;NFSU2_TR(0x533b21);
__builtin_memmove((R+0),gp(0x838420),4);
}
B533b26:{NFSU2_TR(0x533b26);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B533b27:{NFSU2_TR(0x533b27);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B533b2a:{NFSU2_TR(0x533b2a);
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
B533b2c:{NFSU2_TR(0x533b2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533ab9u);}goto L533ab9;}}
}
B533b2e:L533b2e:{c.instructions+=2;NFSU2_TR(0x533b2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533b2f:{NFSU2_TR(0x533b2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533b30:L533b30:{c.instructions+=1;NFSU2_TR(0x533b30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533b31:L533b31:{c.instructions+=2;NFSU2_TR(0x533b31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533b32:{NFSU2_TR(0x533b32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533b40:L533b40:{c.instructions+=8;NFSU2_TR(0x533b40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533b41:{NFSU2_TR(0x533b41);
__builtin_memmove((R+0),gp(0x838420),4);
}
B533b46:{NFSU2_TR(0x533b46);
__builtin_memmove((R+4),gp(0x862838),4);
}
B533b4c:{NFSU2_TR(0x533b4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533b4d:{NFSU2_TR(0x533b4d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B533b4f:{NFSU2_TR(0x533b4f);
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
B533b51:{NFSU2_TR(0x533b51);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533b55:{NFSU2_TR(0x533b55);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533bdd;}}
}
B533b5b:L533b5b:{c.instructions+=4;NFSU2_TR(0x533b5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533b5c:{NFSU2_TR(0x533b5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533b5d:{NFSU2_TR(0x533b5d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B533b5f:{NFSU2_TR(0x533b5f);
{goto L533b65;}
}
B533b61:L533b61:{c.instructions+=1;NFSU2_TR(0x533b61);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533b65:L533b65:{c.instructions+=2;NFSU2_TR(0x533b65);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B533b67:{NFSU2_TR(0x533b67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L533b77;}}
}
B533b69:L533b69:{c.instructions+=2;NFSU2_TR(0x533b69);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533b6b:{NFSU2_TR(0x533b6b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533b77;}}
}
B533b6d:L533b6d:{c.instructions+=3;NFSU2_TR(0x533b6d);
__builtin_memmove((R+0),gp(0x838424),4);
}
B533b72:{NFSU2_TR(0x533b72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B533b75:{NFSU2_TR(0x533b75);
{goto L533b79;}
}
B533b77:L533b77:{c.instructions+=1;NFSU2_TR(0x533b77);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B533b79:L533b79:{c.instructions+=3;NFSU2_TR(0x533b79);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533b7c:{NFSU2_TR(0x533b7c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533b7e:{NFSU2_TR(0x533b7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533bce;}}
}
B533b80:L533b80:{c.instructions+=3;NFSU2_TR(0x533b80);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B533b84:{NFSU2_TR(0x533b84);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533b86:{NFSU2_TR(0x533b86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533bce;}}
}
B533b88:L533b88:{c.instructions+=3;NFSU2_TR(0x533b88);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B533b8e:{NFSU2_TR(0x533b8e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B533b94:{NFSU2_TR(0x533b94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533b99ull));
TAIL_STATIC(0x5004d0u,500);
}
B533b99:L533b99:{c.instructions+=3;NFSU2_TR(0x533b99);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B533b9d:{NFSU2_TR(0x533b9d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533b9f:{NFSU2_TR(0x533b9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533bce;}}
}
B533ba1:L533ba1:{c.instructions+=3;NFSU2_TR(0x533ba1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533ba2:{NFSU2_TR(0x533ba2);
w4(R+4,u32(0x860a60ull));
}
B533ba7:{NFSU2_TR(0x533ba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533bacull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5338c0u);}goto L5338c0;}
}
B533bac:L533bac:{c.instructions+=3;NFSU2_TR(0x533bac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B533baf:{NFSU2_TR(0x533baf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533bb1:{NFSU2_TR(0x533bb1);
if(r1(R+518)){{goto L533bb7;}}
}
B533bb3:L533bb3:{c.instructions+=2;NFSU2_TR(0x533bb3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B533bb5:{NFSU2_TR(0x533bb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533bce;}}
}
B533bb7:L533bb7:{c.instructions+=3;NFSU2_TR(0x533bb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533bba:{NFSU2_TR(0x533bba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533bbb:{NFSU2_TR(0x533bbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533bc0ull));
TAIL_STATIC(0x4fff80u,4ff);
}
B533bc0:L533bc0:{c.instructions+=4;NFSU2_TR(0x533bc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B533bc3:{NFSU2_TR(0x533bc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533bc4:{NFSU2_TR(0x533bc4);
w4(R+4,u32(0x8635bcull));
}
B533bc9:{NFSU2_TR(0x533bc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533bceull));
TAIL_STATIC(0x5253f0u,525);
}
B533bce:L533bce:{c.instructions+=5;NFSU2_TR(0x533bce);
__builtin_memmove((R+0),gp(0x838420),4);
}
B533bd3:{NFSU2_TR(0x533bd3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B533bd4:{NFSU2_TR(0x533bd4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x18ull))));
}
B533bd7:{NFSU2_TR(0x533bd7);
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
B533bd9:{NFSU2_TR(0x533bd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533b61u);}goto L533b61;}}
}
B533bdb:L533bdb:{c.instructions+=2;NFSU2_TR(0x533bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533bdc:{NFSU2_TR(0x533bdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533bdd:L533bdd:{c.instructions+=3;NFSU2_TR(0x533bdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533bde:{NFSU2_TR(0x533bde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B533bdf:{NFSU2_TR(0x533bdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533be0:L533be0:{c.instructions+=15;NFSU2_TR(0x533be0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533be1:{NFSU2_TR(0x533be1);
__builtin_memmove((R+20),(R+16),4);
}
B533be3:{NFSU2_TR(0x533be3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B533be6:{NFSU2_TR(0x533be6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533be7:{NFSU2_TR(0x533be7);
__builtin_memmove((R+12),gp(0x8900ac),4);
}
B533bed:{NFSU2_TR(0x533bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533bf3:{NFSU2_TR(0x533bf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533bf4:{NFSU2_TR(0x533bf4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533bf5:{NFSU2_TR(0x533bf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B533bf8:{NFSU2_TR(0x533bf8);
__builtin_memmove((R+24),(R+4),4);
}
B533bfa:{NFSU2_TR(0x533bfa);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B533bfe:{NFSU2_TR(0x533bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c01:{NFSU2_TR(0x533c01);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x838428))));
}
B533c07:{NFSU2_TR(0x533c07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533c08:{NFSU2_TR(0x533c08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533c0dull));
TAIL_STATIC(0x43db50u,43d);
}
B533c0d:L533c0d:{c.instructions+=2;NFSU2_TR(0x533c0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533c0e:{NFSU2_TR(0x533c0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533c13ull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B533c13:L533c13:{c.instructions+=11;NFSU2_TR(0x533c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533c16:{NFSU2_TR(0x533c16);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B533c19:{NFSU2_TR(0x533c19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c1c:{NFSU2_TR(0x533c1c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533c1e:{NFSU2_TR(0x533c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B533c21:{NFSU2_TR(0x533c21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533c22:{NFSU2_TR(0x533c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c25:{NFSU2_TR(0x533c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c28:{NFSU2_TR(0x533c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c2b:{NFSU2_TR(0x533c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c2e:{NFSU2_TR(0x533c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533c33ull));
TAIL_STATIC(0x4db820u,4db);
}
B533c33:L533c33:{c.instructions+=11;NFSU2_TR(0x533c33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533c36:{NFSU2_TR(0x533c36);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B533c3d:{NFSU2_TR(0x533c3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B533c44:{NFSU2_TR(0x533c44);
__builtin_memmove((R+4),gp(0x838428),4);
}
B533c4a:{NFSU2_TR(0x533c4a);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B533c4d:{NFSU2_TR(0x533c4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533c50:{NFSU2_TR(0x533c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533c5a:{NFSU2_TR(0x533c5a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+8,u32(r2(U+0)));
}
B533c5d:{NFSU2_TR(0x533c5d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B533c5f:{NFSU2_TR(0x533c5f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533c60:{NFSU2_TR(0x533c60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533c65ull));
TAIL_STATIC(0x43db50u,43d);
}
B533c65:L533c65:{c.instructions+=4;NFSU2_TR(0x533c65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B533c68:{NFSU2_TR(0x533c68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533c69:{NFSU2_TR(0x533c69);
w4(R+4,u32(0x85ad40ull));
}
B533c6e:{NFSU2_TR(0x533c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533c73ull));
TAIL_STATIC(0x512f10u,512);
}
B533c73:L533c73:{c.instructions+=9;NFSU2_TR(0x533c73);
w1(R+12,u8(0x2ull));
}
B533c75:{NFSU2_TR(0x533c75);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B533c78:{NFSU2_TR(0x533c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533c7b:{NFSU2_TR(0x533c7b);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B533c7e:{NFSU2_TR(0x533c7e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533c80:{NFSU2_TR(0x533c80);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B533c83:{NFSU2_TR(0x533c83);
__builtin_memmove((R+24),gp(0x838408),4);
}
B533c89:{NFSU2_TR(0x533c89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533c8b:{NFSU2_TR(0x533c8b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L533cd6;}}
}
B533c8d:L533c8d:{c.instructions+=4;NFSU2_TR(0x533c8d);
__builtin_memmove((R+28),gp(0x83840c),4);
}
B533c93:{NFSU2_TR(0x533c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533c96:{NFSU2_TR(0x533c96);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B533c99:{NFSU2_TR(0x533c99);
__builtin_memmove((R+16),(R+16),4);
}
B533ca0:L533ca0:{c.instructions+=2;NFSU2_TR(0x533ca0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B533ca2:{NFSU2_TR(0x533ca2);
if(r1(R+518)){{goto L533cae;}}
}
B533ca4:L533ca4:{c.instructions+=4;NFSU2_TR(0x533ca4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B533ca5:{NFSU2_TR(0x533ca5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x40ull))));
}
B533ca8:{NFSU2_TR(0x533ca8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533caa:{NFSU2_TR(0x533caa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533ca0u);}goto L533ca0;}}
}
B533cac:L533cac:{c.instructions+=1;NFSU2_TR(0x533cac);
{goto L533cd6;}
}
B533cae:L533cae:{c.instructions+=4;NFSU2_TR(0x533cae);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B533cb1:{NFSU2_TR(0x533cb1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B533cb3:{NFSU2_TR(0x533cb3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533cb5:{NFSU2_TR(0x533cb5);
if(r1(R+518)){{goto L533cd6;}}
}
B533cb7:L533cb7:{c.instructions+=4;NFSU2_TR(0x533cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533cba:{NFSU2_TR(0x533cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533cbb:{NFSU2_TR(0x533cbb);
w4(R+4,u32(0x85ad40ull));
}
B533cc0:{NFSU2_TR(0x533cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533cc5ull));
TAIL_STATIC(0x512f10u,512);
}
B533cc5:L533cc5:{c.instructions+=2;NFSU2_TR(0x533cc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533cc7:{NFSU2_TR(0x533cc7);
if(r1(R+518)){{goto L533ccc;}}
}
B533cc9:L533cc9:{c.instructions+=1;NFSU2_TR(0x533cc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B533ccc:L533ccc:{c.instructions+=2;NFSU2_TR(0x533ccc);
w4(R+4,u32(0x85ad40ull));
}
B533cd1:{NFSU2_TR(0x533cd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533cd6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533310u);}goto L533310;}
}
B533cd6:L533cd6:{c.instructions+=2;NFSU2_TR(0x533cd6);
w4(R+4,u32(0x85ad40ull));
}
B533cdb:{NFSU2_TR(0x533cdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533ce0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533310u);}goto L533310;}
}
B533ce0:L533ce0:{c.instructions+=1;NFSU2_TR(0x533ce0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533ce5ull));
TAIL_STATIC(0x4f92a0u,4f9);
}
B533ce5:L533ce5:{c.instructions+=6;NFSU2_TR(0x533ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B533ce6:{NFSU2_TR(0x533ce6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B533ce7:{NFSU2_TR(0x533ce7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B533ce8:{NFSU2_TR(0x533ce8);
__builtin_memmove((R+16),(R+20),4);
}
B533cea:{NFSU2_TR(0x533cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B533ceb:{NFSU2_TR(0x533ceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533cf0:L533cf0:{c.instructions+=3;NFSU2_TR(0x533cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x11cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533cf6:{NFSU2_TR(0x533cf6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533cf9:{NFSU2_TR(0x533cf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533d11;}}
}
B533cfb:L533cfb:{c.instructions+=3;NFSU2_TR(0x533cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533d02:{NFSU2_TR(0x533d02);
w4(R+4,u32(0x85ad40ull));
}
B533d07:{NFSU2_TR(0x533d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533d0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533310u);}goto L533310;}
}
B533d0c:L533d0c:{c.instructions+=1;NFSU2_TR(0x533d0c);
TAIL_STATIC(0x4f92a0u,4f9);
}
B533d11:L533d11:{c.instructions+=2;NFSU2_TR(0x533d11);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B533d14:{NFSU2_TR(0x533d14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533d1f;}}
}
B533d16:L533d16:{c.instructions+=3;NFSU2_TR(0x533d16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533d19:{NFSU2_TR(0x533d19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d1a:{NFSU2_TR(0x533d1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533d1full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533be0u);}goto L533be0;}
}
B533d1f:L533d1f:{c.instructions+=1;NFSU2_TR(0x533d1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B533d20:L533d20:{c.instructions+=14;NFSU2_TR(0x533d20);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d22:{NFSU2_TR(0x533d22);
u8 U[4];
w4(U+0,u32(0x7775c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d27:{NFSU2_TR(0x533d27);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533d2d:{NFSU2_TR(0x533d2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d2e:{NFSU2_TR(0x533d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533d35:{NFSU2_TR(0x533d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B533d38:{NFSU2_TR(0x533d38);
__builtin_memmove((R+0),gp(0x863480),4);
}
B533d3d:{NFSU2_TR(0x533d3d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d3e:{NFSU2_TR(0x533d3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d3f:{NFSU2_TR(0x533d3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d40:{NFSU2_TR(0x533d40);
__builtin_memmove((R+12),(R+4),4);
}
B533d42:{NFSU2_TR(0x533d42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533d43:{NFSU2_TR(0x533d43);
w4(R+4,u32(0x83ad90ull));
}
B533d48:{NFSU2_TR(0x533d48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533d4dull));
TAIL_STATIC(0x503680u,503);
}
B533d4d:L533d4d:{c.instructions+=11;NFSU2_TR(0x533d4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533d50:{NFSU2_TR(0x533d50);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B533d54:{NFSU2_TR(0x533d54);
__builtin_memmove((R+24),(R+0),4);
}
B533d56:{NFSU2_TR(0x533d56);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B533d59:{NFSU2_TR(0x533d59);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533d5b:{NFSU2_TR(0x533d5b);
w4(R+4,u32(0x43ull));
}
B533d60:{NFSU2_TR(0x533d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533d6a:{NFSU2_TR(0x533d6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533d71:{NFSU2_TR(0x533d71);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533d75:{NFSU2_TR(0x533d75);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533d79:{NFSU2_TR(0x533d79);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533d7d:L533d7d:{c.instructions+=1;NFSU2_TR(0x533d7d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L533d7f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533d7du);}goto L533d7d;}
}
B533d7f:L533d7f:{c.instructions+=2;NFSU2_TR(0x533d7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533d83:{NFSU2_TR(0x533d83);
{goto L533d90;}
}
B533d85:L533d85:{c.instructions+=2;NFSU2_TR(0x533d85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533d89:{NFSU2_TR(0x533d89);
__builtin_memmove((R+16),(R+16),4);
}
B533d90:L533d90:{c.instructions+=4;NFSU2_TR(0x533d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533d93:{NFSU2_TR(0x533d93);
u8 U[13];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B533d98:{NFSU2_TR(0x533d98);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533d9b:{NFSU2_TR(0x533d9b);
if(r1(R+518)){TAIL_STATIC(0x534038u,534);}
}
B533da1:L533da1:{c.instructions+=2;NFSU2_TR(0x533da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533da3:{NFSU2_TR(0x533da3);
if(r1(R+518)){TAIL_STATIC(0x534038u,534);}
}
B533da9:L533da9:{c.instructions+=2;NFSU2_TR(0x533da9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533dac:{NFSU2_TR(0x533dac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5340c7u,534);}
}
B533db2:L533db2:{c.instructions+=3;NFSU2_TR(0x533db2);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B533db5:{NFSU2_TR(0x533db5);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B533dbc:{NFSU2_TR(0x533dbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533e2a;}}
}
B533dbe:L533dbe:{c.instructions+=3;NFSU2_TR(0x533dbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B533dc0:{NFSU2_TR(0x533dc0);
__builtin_memmove((R+4),(R+24),4);
}
B533dc2:{NFSU2_TR(0x533dc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533dc5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B533dc5:L533dc5:{c.instructions+=7;NFSU2_TR(0x533dc5);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533dc7:{NFSU2_TR(0x533dc7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533dc9:{NFSU2_TR(0x533dc9);
__builtin_memmove((R+28),(R+0),4);
}
B533dcb:{NFSU2_TR(0x533dcb);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533dcd:{NFSU2_TR(0x533dcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533dce:{NFSU2_TR(0x533dce);
w4(R+4,u32(0x8a2b68ull));
}
B533dd3:{NFSU2_TR(0x533dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533dd8ull));
TAIL_STATIC(0x61ba30u,61b);
}
B533dd8:L533dd8:{c.instructions+=2;NFSU2_TR(0x533dd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533dda:{NFSU2_TR(0x533dda);
if(r1(R+518)){{goto L533e1b;}}
}
B533ddc:L533ddc:{c.instructions+=1;NFSU2_TR(0x533ddc);
__builtin_memmove((R+16),(R+16),4);
}
B533de0:L533de0:{c.instructions+=5;NFSU2_TR(0x533de0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B533de3:{NFSU2_TR(0x533de3);
__builtin_memmove((R+8),(R+4),1);
}
B533de5:{NFSU2_TR(0x533de5);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1full))));
}
B533de8:{NFSU2_TR(0x533de8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x18ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B533deb:{NFSU2_TR(0x533deb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533e05;}}
}
B533ded:L533ded:{c.instructions+=3;NFSU2_TR(0x533ded);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xe0ull))));
}
B533df0:{NFSU2_TR(0x533df0);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x80ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B533df3:{NFSU2_TR(0x533df3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533e05;}}
}
B533df5:L533df5:{c.instructions+=3;NFSU2_TR(0x533df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533dfb:{NFSU2_TR(0x533dfb);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B533dff:{NFSU2_TR(0x533dff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B533e05:L533e05:{c.instructions+=7;NFSU2_TR(0x533e05);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e07:{NFSU2_TR(0x533e07);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e09:{NFSU2_TR(0x533e09);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e0b:{NFSU2_TR(0x533e0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e0c:{NFSU2_TR(0x533e0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e0d:{NFSU2_TR(0x533e0d);
w4(R+4,u32(0x8a2b68ull));
}
B533e12:{NFSU2_TR(0x533e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533e17ull));
TAIL_STATIC(0x61ba50u,61b);
}
B533e17:L533e17:{c.instructions+=2;NFSU2_TR(0x533e17);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533e19:{NFSU2_TR(0x533e19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533de0u);}goto L533de0;}}
}
B533e1b:L533e1b:{c.instructions+=2;NFSU2_TR(0x533e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533e25:{NFSU2_TR(0x533e25);
TAIL_STATIC(0x534038u,534);
}
B533e2a:L533e2a:{c.instructions+=2;NFSU2_TR(0x533e2a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B533e2d:{NFSU2_TR(0x533e2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x534060u,534);}
}
B533e33:L533e33:{c.instructions+=3;NFSU2_TR(0x533e33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B533e35:{NFSU2_TR(0x533e35);
__builtin_memmove((R+4),(R+24),4);
}
B533e37:{NFSU2_TR(0x533e37);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533e3aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B533e3a:L533e3a:{c.instructions+=11;NFSU2_TR(0x533e3a);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B533e40:{NFSU2_TR(0x533e40);
__builtin_memmove((R+28),(R+0),4);
}
B533e42:{NFSU2_TR(0x533e42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B533e48:{NFSU2_TR(0x533e48);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e4a:{NFSU2_TR(0x533e4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e4c:{NFSU2_TR(0x533e4c);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e4e:{NFSU2_TR(0x533e4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533e4f:{NFSU2_TR(0x533e4f);
w4(R+4,u32(0x8a2b68ull));
}
B533e54:{NFSU2_TR(0x533e54);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533e58:{NFSU2_TR(0x533e58);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B533e5a:{NFSU2_TR(0x533e5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533e5full));
TAIL_STATIC(0x61ba30u,61b);
}
B533e5f:L533e5f:{c.instructions+=12;NFSU2_TR(0x533e5f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B533e66:{NFSU2_TR(0x533e66);
__builtin_memmove((R+24),(R+0),4);
}
B533e68:{NFSU2_TR(0x533e68);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B533e6f:{NFSU2_TR(0x533e6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B533e73:{NFSU2_TR(0x533e73);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B533e77:{NFSU2_TR(0x533e77);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533e7b:{NFSU2_TR(0x533e7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533e7f:{NFSU2_TR(0x533e7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533e83:{NFSU2_TR(0x533e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533e87:{NFSU2_TR(0x533e87);
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
B533e89:{NFSU2_TR(0x533e89);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B533e91:{NFSU2_TR(0x533e91);
if(r1(R+518)){{goto L533fbf;}}
}
B533e97:L533e97:{c.instructions+=2;NFSU2_TR(0x533e97);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B533e9b:{NFSU2_TR(0x533e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533ea0ull));
TAIL_STATIC(0x502fd0u,502);
}
B533ea0:L533ea0:{c.instructions+=1;NFSU2_TR(0x533ea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533ea4:L533ea4:{c.instructions+=2;NFSU2_TR(0x533ea4);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B533ea8:{NFSU2_TR(0x533ea8);
if(r1(R+518)){{goto L533edd;}}
}
B533eaa:L533eaa:{c.instructions+=1;NFSU2_TR(0x533eaa);
__builtin_memmove((R+12),(R+12),4);
}
B533eb0:L533eb0:{c.instructions+=4;NFSU2_TR(0x533eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B533eb3:{NFSU2_TR(0x533eb3);
__builtin_memmove((R+4),(R+24),4);
}
B533eb5:{NFSU2_TR(0x533eb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533eb9:{NFSU2_TR(0x533eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533ebeull));
TAIL_STATIC(0x610000u,610);
}
B533ebe:L533ebe:{c.instructions+=3;NFSU2_TR(0x533ebe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533ec2:{NFSU2_TR(0x533ec2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533ec3:{NFSU2_TR(0x533ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533ec8ull));
TAIL_STATIC(0x610000u,610);
}
B533ec8:L533ec8:{c.instructions+=2;NFSU2_TR(0x533ec8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533ec9:{NFSU2_TR(0x533ec9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533eceull));
TAIL_STATIC(0x43dcc0u,43d);
}
B533ece:L533ece:{c.instructions+=3;NFSU2_TR(0x533ece);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B533ed1:{NFSU2_TR(0x533ed1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533ed3:{NFSU2_TR(0x533ed3);
if(r1(R+518)){{goto L533ef7;}}
}
B533ed5:L533ed5:{c.instructions+=3;NFSU2_TR(0x533ed5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B533ed7:{NFSU2_TR(0x533ed7);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B533edb:{NFSU2_TR(0x533edb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533eb0u);}goto L533eb0;}}
}
B533edd:L533edd:{c.instructions+=2;NFSU2_TR(0x533edd);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533edf:{NFSU2_TR(0x533edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533ee4ull));
TAIL_STATIC(0x575620u,575);
}
B533ee4:L533ee4:{c.instructions+=3;NFSU2_TR(0x533ee4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B533ee7:{NFSU2_TR(0x533ee7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B533ee9:{NFSU2_TR(0x533ee9);
if(r1(R+518)){{goto L533f86;}}
}
B533eef:L533eef:{c.instructions+=2;NFSU2_TR(0x533eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533ef2:{NFSU2_TR(0x533ef2);
{goto L533f88;}
}
B533ef7:L533ef7:{c.instructions+=4;NFSU2_TR(0x533ef7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533ef9:{NFSU2_TR(0x533ef9);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533efe:{NFSU2_TR(0x533efe);
__builtin_memmove((R+4),(R+24),4);
}
B533f00:{NFSU2_TR(0x533f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533f05ull));
TAIL_STATIC(0x61b500u,61b);
}
B533f05:L533f05:{c.instructions+=3;NFSU2_TR(0x533f05);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B533f08:{NFSU2_TR(0x533f08);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B533f0c:{NFSU2_TR(0x533f0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L533f9b;}}
}
B533f12:L533f12:{c.instructions+=4;NFSU2_TR(0x533f12);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533f15:{NFSU2_TR(0x533f15);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f17:{NFSU2_TR(0x533f17);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f1c:{NFSU2_TR(0x533f1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533f21ull));
TAIL_STATIC(0x61b500u,61b);
}
B533f21:L533f21:{c.instructions+=5;NFSU2_TR(0x533f21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f23:{NFSU2_TR(0x533f23);
u8 U[4];
w4(U+0,u32(0xce7d8db5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f28:{NFSU2_TR(0x533f28);
__builtin_memmove((R+4),(R+24),4);
}
B533f2a:{NFSU2_TR(0x533f2a);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B533f2e:{NFSU2_TR(0x533f2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533f33ull));
TAIL_STATIC(0x61b500u,61b);
}
B533f33:L533f33:{c.instructions+=2;NFSU2_TR(0x533f33);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+5)));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
}
B533f37:{NFSU2_TR(0x533f37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L533f9b;}}
}
B533f39:L533f39:{c.instructions+=6;NFSU2_TR(0x533f39);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533f3c:{NFSU2_TR(0x533f3c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f3e:{NFSU2_TR(0x533f3e);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f43:{NFSU2_TR(0x533f43);
__builtin_memmove((R+4),(R+24),4);
}
B533f45:{NFSU2_TR(0x533f45);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533f49:{NFSU2_TR(0x533f49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533f4eull));
TAIL_STATIC(0x61b500u,61b);
}
B533f4e:L533f4e:{c.instructions+=5;NFSU2_TR(0x533f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533f52:{NFSU2_TR(0x533f52);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f54:{NFSU2_TR(0x533f54);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f59:{NFSU2_TR(0x533f59);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B533f5d:{NFSU2_TR(0x533f5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533f62ull));
TAIL_STATIC(0x61b500u,61b);
}
B533f62:L533f62:{c.instructions+=2;NFSU2_TR(0x533f62);
u8 U[7];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+523,sborrow<u8>(r1(R+0),r1(U+5)));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+519,u8(s8(r1(U+6))<s8(u8(0x0ull))));
}
B533f66:{NFSU2_TR(0x533f66);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533f9b;}}
}
B533f68:L533f68:{c.instructions+=4;NFSU2_TR(0x533f68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f6a:{NFSU2_TR(0x533f6a);
u8 U[4];
w4(U+0,u32(0xeb0101e2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533f6f:{NFSU2_TR(0x533f6f);
__builtin_memmove((R+4),(R+24),4);
}
B533f71:{NFSU2_TR(0x533f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533f76ull));
TAIL_STATIC(0x61b500u,61b);
}
B533f76:L533f76:{c.instructions+=4;NFSU2_TR(0x533f76);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533f7a:{NFSU2_TR(0x533f7a);
w4(R+0,u32(s32(s8(r1(R+0)))));
}
B533f7d:{NFSU2_TR(0x533f7d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533f7f:{NFSU2_TR(0x533f7f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L533f9b;}}
}
B533f81:L533f81:{c.instructions+=2;NFSU2_TR(0x533f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533f84:{NFSU2_TR(0x533f84);
{goto L533f9b;}
}
B533f86:L533f86:{c.instructions+=1;NFSU2_TR(0x533f86);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B533f88:L533f88:{c.instructions+=6;NFSU2_TR(0x533f88);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533f8c:{NFSU2_TR(0x533f8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B533f8e:{NFSU2_TR(0x533f8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533f92:{NFSU2_TR(0x533f92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533f95:{NFSU2_TR(0x533f95);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B533f99:{NFSU2_TR(0x533f99);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B533f9b:L533f9b:{c.instructions+=8;NFSU2_TR(0x533f9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533f9f:{NFSU2_TR(0x533f9f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533fa1:{NFSU2_TR(0x533fa1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533fa3:{NFSU2_TR(0x533fa3);
u8 U[4];
w4(U+0,u32(0x1dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533fa5:{NFSU2_TR(0x533fa5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533fa6:{NFSU2_TR(0x533fa6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B533fa7:{NFSU2_TR(0x533fa7);
w4(R+4,u32(0x8a2b68ull));
}
B533fac:{NFSU2_TR(0x533fac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533fb1ull));
TAIL_STATIC(0x61ba50u,61b);
}
B533fb1:L533fb1:{c.instructions+=4;NFSU2_TR(0x533fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B533fb5:{NFSU2_TR(0x533fb5);
__builtin_memmove((R+24),(R+0),4);
}
B533fb7:{NFSU2_TR(0x533fb7);
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
B533fb9:{NFSU2_TR(0x533fb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533ea4u);}goto L533ea4;}}
}
B533fbf:L533fbf:{c.instructions+=3;NFSU2_TR(0x533fbf);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B533fc3:{NFSU2_TR(0x533fc3);
__builtin_memmove((R+24),(R+28),4);
}
B533fc5:{NFSU2_TR(0x533fc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x533fcaull));
TAIL_STATIC(0x502fd0u,502);
}
B533fca:L533fca:{c.instructions+=2;NFSU2_TR(0x533fca);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533fcc:{NFSU2_TR(0x533fcc);
if(r1(R+518)){{goto L533ff9;}}
}
B533fce:L533fce:{c.instructions+=1;NFSU2_TR(0x533fce);
__builtin_memmove((R+28),(R+28),4);
}
B533fd0:L533fd0:{c.instructions+=3;NFSU2_TR(0x533fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533fd6:{NFSU2_TR(0x533fd6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B533fd9:{NFSU2_TR(0x533fd9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L533ff3;}}
}
B533fdb:L533fdb:{c.instructions+=6;NFSU2_TR(0x533fdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B533fde:{NFSU2_TR(0x533fde);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B533fe2:{NFSU2_TR(0x533fe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B533fe8:{NFSU2_TR(0x533fe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B533fec:{NFSU2_TR(0x533fec);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B533fed:{NFSU2_TR(0x533fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x110ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B533ff3:L533ff3:{c.instructions+=3;NFSU2_TR(0x533ff3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B533ff5:{NFSU2_TR(0x533ff5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533ff7:{NFSU2_TR(0x533ff7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x533fd0u);}goto L533fd0;}}
}
B533ff9:L533ff9:{c.instructions+=3;NFSU2_TR(0x533ff9);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B533ffd:{NFSU2_TR(0x533ffd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B533fff:{NFSU2_TR(0x533fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x114ull))));
w4(U+4,u32(0x1dull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x534009u,534);
}
XIT:NFSU2_TR_EXIT(0x533,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
