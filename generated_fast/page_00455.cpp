#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_439(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_442(u8* __restrict R,Cpu& c);
u32 body_443(u8* __restrict R,Cpu& c);
u32 body_447(u8* __restrict R,Cpu& c);
u32 body_449(u8* __restrict R,Cpu& c);
u32 body_44a(u8* __restrict R,Cpu& c);
u32 body_450(u8* __restrict R,Cpu& c);
u32 body_453(u8* __restrict R,Cpu& c);
u32 body_454(u8* __restrict R,Cpu& c);
u32 body_456(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_593(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x455,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x455,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_455(u8* __restrict R,Cpu& c);
u32 page_455(Cpu& c){return body_455(c.regs.data(),c);}
__attribute__((noinline)) u32 body_455(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x455002:goto L455002;
case 0x455008:c.instructions+=5;goto B455008;
case 0x45500e:c.instructions+=4;goto B45500e;
case 0x455014:c.instructions+=3;goto B455014;
case 0x455016:c.instructions+=2;goto B455016;
case 0x455019:c.instructions+=1;goto B455019;
case 0x45501b:goto L45501b;
case 0x455021:c.instructions+=2;goto B455021;
case 0x455027:c.instructions+=1;goto B455027;
case 0x45502d:goto L45502d;
case 0x45502f:c.instructions+=2;goto B45502f;
case 0x455031:c.instructions+=1;goto B455031;
case 0x455036:goto L455036;
case 0x455037:c.instructions+=4;goto B455037;
case 0x455038:c.instructions+=3;goto B455038;
case 0x455039:c.instructions+=2;goto B455039;
case 0x45503a:c.instructions+=1;goto B45503a;
case 0x45503d:goto L45503d;
case 0x45503e:c.instructions+=5;goto B45503e;
case 0x45503f:c.instructions+=4;goto B45503f;
case 0x455040:c.instructions+=3;goto B455040;
case 0x45504a:c.instructions+=2;goto B45504a;
case 0x45504b:c.instructions+=1;goto B45504b;
case 0x45504e:goto L45504e;
case 0x455050:c.instructions+=1;goto B455050;
case 0x455055:goto L455055;
case 0x45505b:c.instructions+=5;goto B45505b;
case 0x45505d:c.instructions+=4;goto B45505d;
case 0x45505e:c.instructions+=3;goto B45505e;
case 0x45505f:c.instructions+=2;goto B45505f;
case 0x455061:c.instructions+=1;goto B455061;
case 0x455066:goto L455066;
case 0x455067:c.instructions+=4;goto B455067;
case 0x455068:c.instructions+=3;goto B455068;
case 0x455069:c.instructions+=2;goto B455069;
case 0x45506a:c.instructions+=1;goto B45506a;
case 0x45506d:goto L45506d;
case 0x455072:goto L455072;
case 0x455073:c.instructions+=4;goto B455073;
case 0x455074:c.instructions+=3;goto B455074;
case 0x455075:c.instructions+=2;goto B455075;
case 0x455076:c.instructions+=1;goto B455076;
case 0x455079:goto L455079;
case 0x45507e:goto L45507e;
case 0x455080:c.instructions+=1;goto B455080;
case 0x455086:goto L455086;
case 0x455089:c.instructions+=1;goto B455089;
case 0x45508f:goto L45508f;
case 0x455091:c.instructions+=3;goto B455091;
case 0x455093:c.instructions+=2;goto B455093;
case 0x455099:c.instructions+=1;goto B455099;
case 0x45509e:goto L45509e;
case 0x45509f:c.instructions+=4;goto B45509f;
case 0x4550a0:c.instructions+=3;goto B4550a0;
case 0x4550a1:c.instructions+=2;goto B4550a1;
case 0x4550a2:c.instructions+=1;goto B4550a2;
case 0x4550a5:goto L4550a5;
case 0x4550a9:c.instructions+=3;goto B4550a9;
case 0x4550ab:c.instructions+=2;goto B4550ab;
case 0x4550ad:c.instructions+=1;goto B4550ad;
case 0x4550b3:goto L4550b3;
case 0x4550b7:c.instructions+=3;goto B4550b7;
case 0x4550bd:c.instructions+=2;goto B4550bd;
case 0x4550c0:c.instructions+=1;goto B4550c0;
case 0x4550c6:goto L4550c6;
case 0x4550cd:c.instructions+=1;goto B4550cd;
case 0x4550d4:goto L4550d4;
case 0x4550da:c.instructions+=7;goto B4550da;
case 0x4550dc:c.instructions+=6;goto B4550dc;
case 0x4550e1:c.instructions+=5;goto B4550e1;
case 0x4550e4:c.instructions+=4;goto B4550e4;
case 0x4550e7:c.instructions+=3;goto B4550e7;
case 0x4550eb:c.instructions+=2;goto B4550eb;
case 0x4550ed:c.instructions+=1;goto B4550ed;
case 0x4550f3:goto L4550f3;
case 0x4550fa:goto L4550fa;
case 0x455100:c.instructions+=16;goto B455100;
case 0x455106:c.instructions+=15;goto B455106;
case 0x45510e:c.instructions+=14;goto B45510e;
case 0x455115:c.instructions+=13;goto B455115;
case 0x455117:c.instructions+=12;goto B455117;
case 0x45511a:c.instructions+=11;goto B45511a;
case 0x45511c:c.instructions+=10;goto B45511c;
case 0x455121:c.instructions+=9;goto B455121;
case 0x455128:c.instructions+=8;goto B455128;
case 0x45512b:c.instructions+=7;goto B45512b;
case 0x45512d:c.instructions+=6;goto B45512d;
case 0x455133:c.instructions+=5;goto B455133;
case 0x455137:c.instructions+=4;goto B455137;
case 0x455138:c.instructions+=3;goto B455138;
case 0x45513a:c.instructions+=2;goto B45513a;
case 0x45513e:c.instructions+=1;goto B45513e;
case 0x455143:goto L455143;
case 0x455144:c.instructions+=2;goto B455144;
case 0x455146:c.instructions+=1;goto B455146;
case 0x45514b:goto L45514b;
case 0x45514c:c.instructions+=4;goto B45514c;
case 0x45514d:c.instructions+=3;goto B45514d;
case 0x45514e:c.instructions+=2;goto B45514e;
case 0x45514f:c.instructions+=1;goto B45514f;
case 0x455152:goto L455152;
case 0x455158:c.instructions+=6;goto B455158;
case 0x45515e:c.instructions+=5;goto B45515e;
case 0x455166:c.instructions+=4;goto B455166;
case 0x455167:c.instructions+=3;goto B455167;
case 0x455168:c.instructions+=2;goto B455168;
case 0x45516a:c.instructions+=1;goto B45516a;
case 0x45516f:goto L45516f;
case 0x455175:c.instructions+=4;goto B455175;
case 0x455176:c.instructions+=3;goto B455176;
case 0x455177:c.instructions+=2;goto B455177;
case 0x455179:c.instructions+=1;goto B455179;
case 0x45517e:goto L45517e;
case 0x455184:c.instructions+=7;goto B455184;
case 0x455188:c.instructions+=6;goto B455188;
case 0x455189:c.instructions+=5;goto B455189;
case 0x45518b:c.instructions+=4;goto B45518b;
case 0x455190:c.instructions+=3;goto B455190;
case 0x455194:c.instructions+=2;goto B455194;
case 0x45519b:c.instructions+=1;goto B45519b;
case 0x4551a0:goto L4551a0;
case 0x4551a1:c.instructions+=2;goto B4551a1;
case 0x4551a3:c.instructions+=1;goto B4551a3;
case 0x4551a8:goto L4551a8;
case 0x4551a9:c.instructions+=4;goto B4551a9;
case 0x4551aa:c.instructions+=3;goto B4551aa;
case 0x4551ab:c.instructions+=2;goto B4551ab;
case 0x4551ac:c.instructions+=1;goto B4551ac;
case 0x4551af:goto L4551af;
case 0x4551b5:c.instructions+=6;goto B4551b5;
case 0x4551bb:c.instructions+=5;goto B4551bb;
case 0x4551c3:c.instructions+=4;goto B4551c3;
case 0x4551c4:c.instructions+=3;goto B4551c4;
case 0x4551c5:c.instructions+=2;goto B4551c5;
case 0x4551c7:c.instructions+=1;goto B4551c7;
case 0x4551cc:goto L4551cc;
case 0x4551cd:c.instructions+=4;goto B4551cd;
case 0x4551d3:c.instructions+=3;goto B4551d3;
case 0x4551d4:c.instructions+=2;goto B4551d4;
case 0x4551d6:c.instructions+=1;goto B4551d6;
case 0x4551db:goto L4551db;
case 0x4551e1:c.instructions+=7;goto B4551e1;
case 0x4551e5:c.instructions+=6;goto B4551e5;
case 0x4551e9:c.instructions+=5;goto B4551e9;
case 0x4551ea:c.instructions+=4;goto B4551ea;
case 0x4551ec:c.instructions+=3;goto B4551ec;
case 0x4551f1:c.instructions+=2;goto B4551f1;
case 0x4551f8:c.instructions+=1;goto B4551f8;
case 0x4551fd:goto L4551fd;
case 0x4551fe:c.instructions+=2;goto B4551fe;
case 0x455200:c.instructions+=1;goto B455200;
case 0x455205:goto L455205;
case 0x455206:c.instructions+=4;goto B455206;
case 0x455207:c.instructions+=3;goto B455207;
case 0x455208:c.instructions+=2;goto B455208;
case 0x455209:c.instructions+=1;goto B455209;
case 0x45520c:goto L45520c;
case 0x455212:c.instructions+=3;goto B455212;
case 0x455218:c.instructions+=2;goto B455218;
case 0x45521f:c.instructions+=1;goto B45521f;
case 0x455224:goto L455224;
case 0x455227:c.instructions+=7;goto B455227;
case 0x45522d:c.instructions+=6;goto B45522d;
case 0x455231:c.instructions+=5;goto B455231;
case 0x455235:c.instructions+=4;goto B455235;
case 0x455236:c.instructions+=3;goto B455236;
case 0x455238:c.instructions+=2;goto B455238;
case 0x45523f:c.instructions+=1;goto B45523f;
case 0x455244:goto L455244;
case 0x455245:c.instructions+=4;goto B455245;
case 0x455246:c.instructions+=3;goto B455246;
case 0x455247:c.instructions+=2;goto B455247;
case 0x455248:c.instructions+=1;goto B455248;
case 0x45524b:goto L45524b;
case 0x455251:c.instructions+=4;goto B455251;
case 0x455257:c.instructions+=3;goto B455257;
case 0x45525e:c.instructions+=2;goto B45525e;
case 0x455263:c.instructions+=1;goto B455263;
case 0x455265:goto L455265;
case 0x45526b:c.instructions+=4;goto B45526b;
case 0x455271:c.instructions+=3;goto B455271;
case 0x455278:c.instructions+=2;goto B455278;
case 0x45527d:c.instructions+=1;goto B45527d;
case 0x45527f:goto L45527f;
case 0x455285:c.instructions+=4;goto B455285;
case 0x45528b:c.instructions+=3;goto B45528b;
case 0x455292:c.instructions+=2;goto B455292;
case 0x455297:c.instructions+=1;goto B455297;
case 0x455299:goto L455299;
case 0x4552a0:c.instructions+=1;goto B4552a0;
case 0x4552a6:goto L4552a6;
case 0x4552ac:c.instructions+=4;goto B4552ac;
case 0x4552b2:c.instructions+=3;goto B4552b2;
case 0x4552b9:c.instructions+=2;goto B4552b9;
case 0x4552be:c.instructions+=1;goto B4552be;
case 0x4552c3:goto L4552c3;
case 0x4552c9:c.instructions+=4;goto B4552c9;
case 0x4552cf:c.instructions+=3;goto B4552cf;
case 0x4552d6:c.instructions+=2;goto B4552d6;
case 0x4552db:c.instructions+=1;goto B4552db;
case 0x4552e0:goto L4552e0;
case 0x4552e6:c.instructions+=4;goto B4552e6;
case 0x4552ec:c.instructions+=3;goto B4552ec;
case 0x4552f3:c.instructions+=2;goto B4552f3;
case 0x4552f8:c.instructions+=1;goto B4552f8;
case 0x4552fd:goto L4552fd;
case 0x455303:c.instructions+=7;goto B455303;
case 0x455306:c.instructions+=6;goto B455306;
case 0x45530c:c.instructions+=5;goto B45530c;
case 0x45530f:c.instructions+=4;goto B45530f;
case 0x455310:c.instructions+=3;goto B455310;
case 0x455311:c.instructions+=2;goto B455311;
case 0x455313:c.instructions+=1;goto B455313;
case 0x455318:goto L455318;
case 0x45531e:c.instructions+=8;goto B45531e;
case 0x455321:c.instructions+=7;goto B455321;
case 0x455327:c.instructions+=6;goto B455327;
case 0x455328:c.instructions+=5;goto B455328;
case 0x455329:c.instructions+=4;goto B455329;
case 0x45532a:c.instructions+=3;goto B45532a;
case 0x45532d:c.instructions+=2;goto B45532d;
case 0x45532e:c.instructions+=1;goto B45532e;
case 0x455331:goto L455331;
case 0x455337:c.instructions+=3;goto B455337;
case 0x45533d:c.instructions+=2;goto B45533d;
case 0x455344:c.instructions+=1;goto B455344;
case 0x455346:goto L455346;
case 0x45534c:goto L45534c;
case 0x455352:c.instructions+=1;goto B455352;
case 0x455358:goto L455358;
case 0x455359:c.instructions+=5;goto B455359;
case 0x45535a:c.instructions+=4;goto B45535a;
case 0x45535b:c.instructions+=3;goto B45535b;
case 0x455365:c.instructions+=2;goto B455365;
case 0x455366:c.instructions+=1;goto B455366;
case 0x455369:goto L455369;
case 0x45536f:c.instructions+=3;goto B45536f;
case 0x455375:c.instructions+=2;goto B455375;
case 0x45537c:c.instructions+=1;goto B45537c;
case 0x45537e:goto L45537e;
case 0x455384:goto L455384;
case 0x45538b:c.instructions+=1;goto B45538b;
case 0x455391:goto L455391;
case 0x455392:c.instructions+=5;goto B455392;
case 0x455393:c.instructions+=4;goto B455393;
case 0x455399:c.instructions+=3;goto B455399;
case 0x45539a:c.instructions+=2;goto B45539a;
case 0x45539b:c.instructions+=1;goto B45539b;
case 0x45539e:goto L45539e;
case 0x4553a4:c.instructions+=5;goto B4553a4;
case 0x4553aa:c.instructions+=4;goto B4553aa;
case 0x4553ad:c.instructions+=3;goto B4553ad;
case 0x4553b3:c.instructions+=2;goto B4553b3;
case 0x4553b6:c.instructions+=1;goto B4553b6;
case 0x4553b8:goto L4553b8;
case 0x4553bc:c.instructions+=6;goto B4553bc;
case 0x4553c0:c.instructions+=5;goto B4553c0;
case 0x4553c1:c.instructions+=4;goto B4553c1;
case 0x4553c3:c.instructions+=3;goto B4553c3;
case 0x4553c8:c.instructions+=2;goto B4553c8;
case 0x4553cf:c.instructions+=1;goto B4553cf;
case 0x4553d4:goto L4553d4;
case 0x4553d5:c.instructions+=2;goto B4553d5;
case 0x4553d7:c.instructions+=1;goto B4553d7;
case 0x4553dc:goto L4553dc;
case 0x4553de:c.instructions+=2;goto B4553de;
case 0x4553e0:c.instructions+=1;goto B4553e0;
case 0x4553e5:goto L4553e5;
case 0x4553e6:c.instructions+=4;goto B4553e6;
case 0x4553e7:c.instructions+=3;goto B4553e7;
case 0x4553e8:c.instructions+=2;goto B4553e8;
case 0x4553e9:c.instructions+=1;goto B4553e9;
case 0x4553ec:goto L4553ec;
case 0x4553ee:c.instructions+=3;goto B4553ee;
case 0x4553f1:c.instructions+=2;goto B4553f1;
case 0x4553f6:c.instructions+=1;goto B4553f6;
case 0x4553f8:goto L4553f8;
case 0x4553fb:c.instructions+=1;goto B4553fb;
case 0x4553fd:goto L4553fd;
case 0x455400:c.instructions+=1;goto B455400;
case 0x455402:goto L455402;
case 0x455404:c.instructions+=1;goto B455404;
case 0x455406:goto L455406;
case 0x45540b:goto L45540b;
case 0x45540f:c.instructions+=3;goto B45540f;
case 0x455414:c.instructions+=2;goto B455414;
case 0x455417:c.instructions+=1;goto B455417;
case 0x45541d:goto L45541d;
case 0x455424:c.instructions+=1;goto B455424;
case 0x45542b:goto L45542b;
case 0x455430:c.instructions+=7;goto B455430;
case 0x455434:c.instructions+=6;goto B455434;
case 0x455435:c.instructions+=5;goto B455435;
case 0x455439:c.instructions+=4;goto B455439;
case 0x45543e:c.instructions+=3;goto B45543e;
case 0x455444:c.instructions+=2;goto B455444;
case 0x455447:c.instructions+=1;goto B455447;
case 0x45544c:goto L45544c;
case 0x45544d:c.instructions+=5;goto B45544d;
case 0x455453:c.instructions+=4;goto B455453;
case 0x455454:c.instructions+=3;goto B455454;
case 0x455455:c.instructions+=2;goto B455455;
case 0x455456:c.instructions+=1;goto B455456;
case 0x455459:goto L455459;
case 0x45545e:c.instructions+=7;goto B45545e;
case 0x455462:c.instructions+=6;goto B455462;
case 0x455463:c.instructions+=5;goto B455463;
case 0x455467:c.instructions+=4;goto B455467;
case 0x45546c:c.instructions+=3;goto B45546c;
case 0x455472:c.instructions+=2;goto B455472;
case 0x455475:c.instructions+=1;goto B455475;
case 0x45547a:goto L45547a;
case 0x45547b:c.instructions+=5;goto B45547b;
case 0x455481:c.instructions+=4;goto B455481;
case 0x455482:c.instructions+=3;goto B455482;
case 0x455483:c.instructions+=2;goto B455483;
case 0x455484:c.instructions+=1;goto B455484;
case 0x455487:goto L455487;
case 0x455489:c.instructions+=3;goto B455489;
case 0x45548b:c.instructions+=2;goto B45548b;
case 0x455491:c.instructions+=1;goto B455491;
case 0x455496:goto L455496;
case 0x455497:c.instructions+=4;goto B455497;
case 0x455498:c.instructions+=3;goto B455498;
case 0x455499:c.instructions+=2;goto B455499;
case 0x45549a:c.instructions+=1;goto B45549a;
case 0x45549d:goto L45549d;
case 0x4554a3:c.instructions+=7;goto B4554a3;
case 0x4554a7:c.instructions+=6;goto B4554a7;
case 0x4554a8:c.instructions+=5;goto B4554a8;
case 0x4554aa:c.instructions+=4;goto B4554aa;
case 0x4554af:c.instructions+=3;goto B4554af;
case 0x4554b3:c.instructions+=2;goto B4554b3;
case 0x4554ba:c.instructions+=1;goto B4554ba;
case 0x4554bf:goto L4554bf;
case 0x4554c5:c.instructions+=5;goto B4554c5;
case 0x4554cb:c.instructions+=4;goto B4554cb;
case 0x4554d2:c.instructions+=3;goto B4554d2;
case 0x4554d3:c.instructions+=2;goto B4554d3;
case 0x4554d5:c.instructions+=1;goto B4554d5;
case 0x4554da:goto L4554da;
case 0x4554e0:c.instructions+=4;goto B4554e0;
case 0x4554e1:c.instructions+=3;goto B4554e1;
case 0x4554e2:c.instructions+=2;goto B4554e2;
case 0x4554e4:c.instructions+=1;goto B4554e4;
case 0x4554e9:goto L4554e9;
case 0x4554ea:c.instructions+=4;goto B4554ea;
case 0x4554eb:c.instructions+=3;goto B4554eb;
case 0x4554ec:c.instructions+=2;goto B4554ec;
case 0x4554ed:c.instructions+=1;goto B4554ed;
case 0x4554f0:goto L4554f0;
case 0x4554f6:c.instructions+=3;goto B4554f6;
case 0x4554fc:c.instructions+=2;goto B4554fc;
case 0x455503:c.instructions+=1;goto B455503;
case 0x455509:goto L455509;
case 0x45550b:c.instructions+=6;goto B45550b;
case 0x45550d:c.instructions+=5;goto B45550d;
case 0x455510:c.instructions+=4;goto B455510;
case 0x455512:c.instructions+=3;goto B455512;
case 0x455515:c.instructions+=2;goto B455515;
case 0x455516:c.instructions+=1;goto B455516;
case 0x45551b:goto L45551b;
case 0x45551c:c.instructions+=4;goto B45551c;
case 0x45551d:c.instructions+=3;goto B45551d;
case 0x45551e:c.instructions+=2;goto B45551e;
case 0x45551f:c.instructions+=1;goto B45551f;
case 0x455522:goto L455522;
case 0x455528:c.instructions+=3;goto B455528;
case 0x45552e:c.instructions+=2;goto B45552e;
case 0x455535:c.instructions+=1;goto B455535;
case 0x45553b:goto L45553b;
case 0x45553d:c.instructions+=6;goto B45553d;
case 0x45553f:c.instructions+=5;goto B45553f;
case 0x455542:c.instructions+=4;goto B455542;
case 0x455545:c.instructions+=3;goto B455545;
case 0x455546:c.instructions+=2;goto B455546;
case 0x455548:c.instructions+=1;goto B455548;
case 0x45554d:goto L45554d;
case 0x45554e:c.instructions+=4;goto B45554e;
case 0x45554f:c.instructions+=3;goto B45554f;
case 0x455550:c.instructions+=2;goto B455550;
case 0x455551:c.instructions+=1;goto B455551;
case 0x455554:goto L455554;
case 0x455558:c.instructions+=1;goto B455558;
case 0x45555e:goto L45555e;
case 0x455561:c.instructions+=1;goto B455561;
case 0x455567:goto L455567;
case 0x455569:c.instructions+=2;goto B455569;
case 0x45556b:c.instructions+=1;goto B45556b;
case 0x455570:goto L455570;
case 0x455571:c.instructions+=4;goto B455571;
case 0x455572:c.instructions+=3;goto B455572;
case 0x455573:c.instructions+=2;goto B455573;
case 0x455574:c.instructions+=1;goto B455574;
case 0x455577:goto L455577;
case 0x45557b:c.instructions+=1;goto B45557b;
case 0x455581:goto L455581;
case 0x455584:c.instructions+=1;goto B455584;
case 0x45558a:goto L45558a;
case 0x45558c:c.instructions+=2;goto B45558c;
case 0x45558e:c.instructions+=1;goto B45558e;
case 0x455593:goto L455593;
case 0x455594:c.instructions+=4;goto B455594;
case 0x455595:c.instructions+=3;goto B455595;
case 0x455596:c.instructions+=2;goto B455596;
case 0x455597:c.instructions+=1;goto B455597;
case 0x45559a:goto L45559a;
case 0x45559e:c.instructions+=3;goto B45559e;
case 0x4555a3:c.instructions+=2;goto B4555a3;
case 0x4555a6:c.instructions+=1;goto B4555a6;
case 0x4555ac:goto L4555ac;
case 0x4555b3:c.instructions+=1;goto B4555b3;
case 0x4555ba:goto L4555ba;
case 0x4555be:c.instructions+=3;goto B4555be;
case 0x4555c0:c.instructions+=2;goto B4555c0;
case 0x4555c2:c.instructions+=1;goto B4555c2;
case 0x4555c8:goto L4555c8;
case 0x4555c9:c.instructions+=5;goto B4555c9;
case 0x4555ca:c.instructions+=4;goto B4555ca;
case 0x4555d0:c.instructions+=3;goto B4555d0;
case 0x4555d1:c.instructions+=2;goto B4555d1;
case 0x4555d2:c.instructions+=1;goto B4555d2;
case 0x4555d5:goto L4555d5;
case 0x4555d8:c.instructions+=1;goto B4555d8;
case 0x4555de:goto L4555de;
case 0x4555e1:c.instructions+=1;goto B4555e1;
case 0x4555e7:goto L4555e7;
case 0x4555ec:c.instructions+=2;goto B4555ec;
case 0x4555ee:c.instructions+=1;goto B4555ee;
case 0x4555f3:goto L4555f3;
case 0x4555f6:c.instructions+=2;goto B4555f6;
case 0x4555f8:c.instructions+=1;goto B4555f8;
case 0x4555fe:goto L4555fe;
case 0x455604:c.instructions+=2;goto B455604;
case 0x455607:c.instructions+=1;goto B455607;
case 0x455609:goto L455609;
case 0x45560c:c.instructions+=1;goto B45560c;
case 0x45560e:goto L45560e;
case 0x455611:c.instructions+=1;goto B455611;
case 0x455613:goto L455613;
case 0x455615:c.instructions+=1;goto B455615;
case 0x455617:goto L455617;
case 0x45561c:goto L45561c;
case 0x455622:c.instructions+=19;goto B455622;
case 0x455628:c.instructions+=18;goto B455628;
case 0x45562b:c.instructions+=17;goto B45562b;
case 0x45562d:c.instructions+=16;goto B45562d;
case 0x45562f:c.instructions+=15;goto B45562f;
case 0x455636:c.instructions+=14;goto B455636;
case 0x45563c:c.instructions+=13;goto B45563c;
case 0x455642:c.instructions+=12;goto B455642;
case 0x455649:c.instructions+=11;goto B455649;
case 0x455650:c.instructions+=10;goto B455650;
case 0x455653:c.instructions+=9;goto B455653;
case 0x455659:c.instructions+=8;goto B455659;
case 0x45565f:c.instructions+=7;goto B45565f;
case 0x455660:c.instructions+=6;goto B455660;
case 0x455661:c.instructions+=5;goto B455661;
case 0x455663:c.instructions+=4;goto B455663;
case 0x455664:c.instructions+=3;goto B455664;
case 0x45566b:c.instructions+=2;goto B45566b;
case 0x45566c:c.instructions+=1;goto B45566c;
case 0x45566f:goto L45566f;
case 0x455675:c.instructions+=8;goto B455675;
case 0x455676:c.instructions+=7;goto B455676;
case 0x455678:c.instructions+=6;goto B455678;
case 0x455679:c.instructions+=5;goto B455679;
case 0x45567c:c.instructions+=4;goto B45567c;
case 0x45567d:c.instructions+=3;goto B45567d;
case 0x455683:c.instructions+=2;goto B455683;
case 0x455684:c.instructions+=1;goto B455684;
case 0x455687:goto L455687;
case 0x45568a:c.instructions+=1;goto B45568a;
case 0x45568c:goto L45568c;
case 0x45568f:c.instructions+=1;goto B45568f;
case 0x455695:goto L455695;
case 0x45569a:c.instructions+=2;goto B45569a;
case 0x45569c:c.instructions+=1;goto B45569c;
case 0x4556a1:goto L4556a1;
case 0x4556a4:c.instructions+=2;goto B4556a4;
case 0x4556a6:c.instructions+=1;goto B4556a6;
case 0x4556ac:goto L4556ac;
case 0x4556b2:c.instructions+=3;goto B4556b2;
case 0x4556b5:c.instructions+=2;goto B4556b5;
case 0x4556ba:c.instructions+=1;goto B4556ba;
case 0x4556bc:goto L4556bc;
case 0x4556bf:c.instructions+=1;goto B4556bf;
case 0x4556c1:goto L4556c1;
case 0x4556c4:c.instructions+=1;goto B4556c4;
case 0x4556c6:goto L4556c6;
case 0x4556c8:c.instructions+=1;goto B4556c8;
case 0x4556ca:goto L4556ca;
case 0x4556cf:goto L4556cf;
case 0x4556d1:c.instructions+=1;goto B4556d1;
case 0x4556d6:goto L4556d6;
case 0x4556d9:c.instructions+=4;goto B4556d9;
case 0x4556dc:c.instructions+=3;goto B4556dc;
case 0x4556df:c.instructions+=2;goto B4556df;
case 0x4556e1:c.instructions+=1;goto B4556e1;
case 0x4556e7:goto L4556e7;
case 0x4556ed:c.instructions+=8;goto B4556ed;
case 0x4556f3:c.instructions+=7;goto B4556f3;
case 0x4556f9:c.instructions+=6;goto B4556f9;
case 0x4556ff:c.instructions+=5;goto B4556ff;
case 0x455705:c.instructions+=4;goto B455705;
case 0x455709:c.instructions+=3;goto B455709;
case 0x45570d:c.instructions+=2;goto B45570d;
case 0x455713:c.instructions+=1;goto B455713;
case 0x455718:goto L455718;
case 0x45571e:c.instructions+=6;goto B45571e;
case 0x455724:c.instructions+=5;goto B455724;
case 0x45572a:c.instructions+=4;goto B45572a;
case 0x45572c:c.instructions+=3;goto B45572c;
case 0x455733:c.instructions+=2;goto B455733;
case 0x455736:c.instructions+=1;goto B455736;
case 0x45573b:goto L45573b;
case 0x455741:c.instructions+=6;goto B455741;
case 0x455745:c.instructions+=5;goto B455745;
case 0x45574b:c.instructions+=4;goto B45574b;
case 0x455751:c.instructions+=3;goto B455751;
case 0x455753:c.instructions+=2;goto B455753;
case 0x45575a:c.instructions+=1;goto B45575a;
case 0x45575f:goto L45575f;
case 0x455765:c.instructions+=7;goto B455765;
case 0x455769:c.instructions+=6;goto B455769;
case 0x45576f:c.instructions+=5;goto B45576f;
case 0x455775:c.instructions+=4;goto B455775;
case 0x45577c:c.instructions+=3;goto B45577c;
case 0x455783:c.instructions+=2;goto B455783;
case 0x455786:c.instructions+=1;goto B455786;
case 0x45578b:goto L45578b;
case 0x455791:c.instructions+=6;goto B455791;
case 0x455797:c.instructions+=5;goto B455797;
case 0x455799:c.instructions+=4;goto B455799;
case 0x4557a0:c.instructions+=3;goto B4557a0;
case 0x4557a6:c.instructions+=2;goto B4557a6;
case 0x4557ac:c.instructions+=1;goto B4557ac;
case 0x4557b1:goto L4557b1;
case 0x4557b7:c.instructions+=6;goto B4557b7;
case 0x4557ba:c.instructions+=5;goto B4557ba;
case 0x4557bc:c.instructions+=4;goto B4557bc;
case 0x4557c3:c.instructions+=3;goto B4557c3;
case 0x4557c9:c.instructions+=2;goto B4557c9;
case 0x4557cf:c.instructions+=1;goto B4557cf;
case 0x4557d4:goto L4557d4;
case 0x4557da:c.instructions+=8;goto B4557da;
case 0x4557dd:c.instructions+=7;goto B4557dd;
case 0x4557df:c.instructions+=6;goto B4557df;
case 0x4557e0:c.instructions+=5;goto B4557e0;
case 0x4557e1:c.instructions+=4;goto B4557e1;
case 0x4557e2:c.instructions+=3;goto B4557e2;
case 0x4557e9:c.instructions+=2;goto B4557e9;
case 0x4557ea:c.instructions+=1;goto B4557ea;
case 0x4557ed:goto L4557ed;
case 0x4557f3:c.instructions+=31;goto B4557f3;
case 0x4557f9:c.instructions+=30;goto B4557f9;
case 0x4557fb:c.instructions+=29;goto B4557fb;
case 0x455802:c.instructions+=28;goto B455802;
case 0x455808:c.instructions+=27;goto B455808;
case 0x45580e:c.instructions+=26;goto B45580e;
case 0x455811:c.instructions+=25;goto B455811;
case 0x455813:c.instructions+=24;goto B455813;
case 0x455815:c.instructions+=23;goto B455815;
case 0x45581c:c.instructions+=22;goto B45581c;
case 0x455822:c.instructions+=21;goto B455822;
case 0x455828:c.instructions+=20;goto B455828;
case 0x45582f:c.instructions+=19;goto B45582f;
case 0x455836:c.instructions+=18;goto B455836;
case 0x455839:c.instructions+=17;goto B455839;
case 0x45583f:c.instructions+=16;goto B45583f;
case 0x455845:c.instructions+=15;goto B455845;
case 0x455847:c.instructions+=14;goto B455847;
case 0x45584e:c.instructions+=13;goto B45584e;
case 0x455854:c.instructions+=12;goto B455854;
case 0x455857:c.instructions+=11;goto B455857;
case 0x455859:c.instructions+=10;goto B455859;
case 0x455860:c.instructions+=9;goto B455860;
case 0x455866:c.instructions+=8;goto B455866;
case 0x455869:c.instructions+=7;goto B455869;
case 0x45586b:c.instructions+=6;goto B45586b;
case 0x45586c:c.instructions+=5;goto B45586c;
case 0x45586d:c.instructions+=4;goto B45586d;
case 0x45586e:c.instructions+=3;goto B45586e;
case 0x455876:c.instructions+=2;goto B455876;
case 0x455877:c.instructions+=1;goto B455877;
case 0x45587a:goto L45587a;
case 0x45587e:c.instructions+=2;goto B45587e;
case 0x455883:c.instructions+=1;goto B455883;
case 0x455885:goto L455885;
case 0x455888:c.instructions+=1;goto B455888;
case 0x45588a:goto L45588a;
case 0x455890:c.instructions+=3;goto B455890;
case 0x455892:c.instructions+=2;goto B455892;
case 0x455894:c.instructions+=1;goto B455894;
case 0x455896:goto L455896;
case 0x455899:c.instructions+=1;goto B455899;
case 0x45589f:goto L45589f;
case 0x4558a5:c.instructions+=3;goto B4558a5;
case 0x4558a6:c.instructions+=2;goto B4558a6;
case 0x4558ab:c.instructions+=1;goto B4558ab;
case 0x4558b0:goto L4558b0;
case 0x4558b2:c.instructions+=2;goto B4558b2;
case 0x4558b4:c.instructions+=1;goto B4558b4;
case 0x4558ba:goto L4558ba;
case 0x4558bc:c.instructions+=1;goto B4558bc;
case 0x4558c1:goto L4558c1;
case 0x4558c3:c.instructions+=1;goto B4558c3;
case 0x4558c9:goto L4558c9;
case 0x4558cb:c.instructions+=1;goto B4558cb;
case 0x4558d0:goto L4558d0;
case 0x4558d2:c.instructions+=2;goto B4558d2;
case 0x4558d4:c.instructions+=1;goto B4558d4;
case 0x4558d9:goto L4558d9;
case 0x4558da:c.instructions+=4;goto B4558da;
case 0x4558db:c.instructions+=3;goto B4558db;
case 0x4558dc:c.instructions+=2;goto B4558dc;
case 0x4558dd:c.instructions+=1;goto B4558dd;
case 0x4558e0:goto L4558e0;
case 0x4558e6:c.instructions+=3;goto B4558e6;
case 0x4558e8:c.instructions+=2;goto B4558e8;
case 0x4558eb:c.instructions+=1;goto B4558eb;
case 0x4558f1:goto L4558f1;
case 0x4558f2:c.instructions+=4;goto B4558f2;
case 0x4558f3:c.instructions+=3;goto B4558f3;
case 0x4558f4:c.instructions+=2;goto B4558f4;
case 0x4558f5:c.instructions+=1;goto B4558f5;
case 0x455af0:goto L455af0;
case 0x455af4:c.instructions+=7;goto B455af4;
case 0x455af8:c.instructions+=6;goto B455af8;
case 0x455afc:c.instructions+=5;goto B455afc;
case 0x455afd:c.instructions+=4;goto B455afd;
case 0x455afe:c.instructions+=3;goto B455afe;
case 0x455aff:c.instructions+=2;goto B455aff;
case 0x455b04:c.instructions+=1;goto B455b04;
case 0x455b09:goto L455b09;
case 0x455b10:goto L455b10;
case 0x455b11:c.instructions+=14;goto B455b11;
case 0x455b13:c.instructions+=13;goto B455b13;
case 0x455b15:c.instructions+=12;goto B455b15;
case 0x455b1a:c.instructions+=11;goto B455b1a;
case 0x455b20:c.instructions+=10;goto B455b20;
case 0x455b21:c.instructions+=9;goto B455b21;
case 0x455b28:c.instructions+=8;goto B455b28;
case 0x455b29:c.instructions+=7;goto B455b29;
case 0x455b2c:c.instructions+=6;goto B455b2c;
case 0x455b2d:c.instructions+=5;goto B455b2d;
case 0x455b2f:c.instructions+=4;goto B455b2f;
case 0x455b31:c.instructions+=3;goto B455b31;
case 0x455b32:c.instructions+=2;goto B455b32;
case 0x455b35:c.instructions+=1;goto B455b35;
case 0x455b3a:goto L455b3a;
case 0x455b3d:c.instructions+=32;goto B455b3d;
case 0x455b40:c.instructions+=31;goto B455b40;
case 0x455b43:c.instructions+=30;goto B455b43;
case 0x455b49:c.instructions+=29;goto B455b49;
case 0x455b4b:c.instructions+=28;goto B455b4b;
case 0x455b4e:c.instructions+=27;goto B455b4e;
case 0x455b51:c.instructions+=26;goto B455b51;
case 0x455b54:c.instructions+=25;goto B455b54;
case 0x455b57:c.instructions+=24;goto B455b57;
case 0x455b5b:c.instructions+=23;goto B455b5b;
case 0x455b5f:c.instructions+=22;goto B455b5f;
case 0x455b64:c.instructions+=21;goto B455b64;
case 0x455b69:c.instructions+=20;goto B455b69;
case 0x455b6e:c.instructions+=19;goto B455b6e;
case 0x455b71:c.instructions+=18;goto B455b71;
case 0x455b74:c.instructions+=17;goto B455b74;
case 0x455b76:c.instructions+=16;goto B455b76;
case 0x455b79:c.instructions+=15;goto B455b79;
case 0x455b7b:c.instructions+=14;goto B455b7b;
case 0x455b81:c.instructions+=13;goto B455b81;
case 0x455b87:c.instructions+=12;goto B455b87;
case 0x455b8a:c.instructions+=11;goto B455b8a;
case 0x455b90:c.instructions+=10;goto B455b90;
case 0x455b93:c.instructions+=9;goto B455b93;
case 0x455b96:c.instructions+=8;goto B455b96;
case 0x455b98:c.instructions+=7;goto B455b98;
case 0x455b9a:c.instructions+=6;goto B455b9a;
case 0x455ba0:c.instructions+=5;goto B455ba0;
case 0x455ba6:c.instructions+=4;goto B455ba6;
case 0x455ba8:c.instructions+=3;goto B455ba8;
case 0x455bae:c.instructions+=2;goto B455bae;
case 0x455bb1:c.instructions+=1;goto B455bb1;
case 0x455bb6:goto L455bb6;
case 0x455bb9:c.instructions+=6;goto B455bb9;
case 0x455bbb:c.instructions+=5;goto B455bbb;
case 0x455bbc:c.instructions+=4;goto B455bbc;
case 0x455bc3:c.instructions+=3;goto B455bc3;
case 0x455bc5:c.instructions+=2;goto B455bc5;
case 0x455bc6:c.instructions+=1;goto B455bc6;
case 0x455bd0:goto L455bd0;
case 0x455bd2:c.instructions+=8;goto B455bd2;
case 0x455bd7:c.instructions+=7;goto B455bd7;
case 0x455bdd:c.instructions+=6;goto B455bdd;
case 0x455bde:c.instructions+=5;goto B455bde;
case 0x455be5:c.instructions+=4;goto B455be5;
case 0x455be6:c.instructions+=3;goto B455be6;
case 0x455be7:c.instructions+=2;goto B455be7;
case 0x455be9:c.instructions+=1;goto B455be9;
case 0x455bee:goto L455bee;
case 0x455bf1:c.instructions+=4;goto B455bf1;
case 0x455bf5:c.instructions+=3;goto B455bf5;
case 0x455bf7:c.instructions+=2;goto B455bf7;
case 0x455bff:c.instructions+=1;goto B455bff;
case 0x455c01:goto L455c01;
case 0x455c07:c.instructions+=9;goto B455c07;
case 0x455c0b:c.instructions+=8;goto B455c0b;
case 0x455c11:c.instructions+=7;goto B455c11;
case 0x455c12:c.instructions+=6;goto B455c12;
case 0x455c18:c.instructions+=5;goto B455c18;
case 0x455c1b:c.instructions+=4;goto B455c1b;
case 0x455c1c:c.instructions+=3;goto B455c1c;
case 0x455c1d:c.instructions+=2;goto B455c1d;
case 0x455c1f:c.instructions+=1;goto B455c1f;
case 0x455c24:goto L455c24;
case 0x455c26:c.instructions+=1;goto B455c26;
case 0x455c28:goto L455c28;
case 0x455c2a:goto L455c2a;
case 0x455c2c:c.instructions+=3;goto B455c2c;
case 0x455c2e:c.instructions+=2;goto B455c2e;
case 0x455c36:c.instructions+=1;goto B455c36;
case 0x455c38:goto L455c38;
case 0x455c3c:c.instructions+=1;goto B455c3c;
case 0x455c3e:goto L455c3e;
case 0x455c40:c.instructions+=1;goto B455c40;
case 0x455c42:goto L455c42;
case 0x455c43:c.instructions+=1;goto B455c43;
case 0x455c48:goto L455c48;
case 0x455c4b:goto L455c4b;
case 0x455c4c:c.instructions+=1;goto B455c4c;
case 0x455c51:goto L455c51;
case 0x455c54:c.instructions+=6;goto B455c54;
case 0x455c56:c.instructions+=5;goto B455c56;
case 0x455c57:c.instructions+=4;goto B455c57;
case 0x455c5b:c.instructions+=3;goto B455c5b;
case 0x455c62:c.instructions+=2;goto B455c62;
case 0x455c65:c.instructions+=1;goto B455c65;
case 0x455c66:goto L455c66;
case 0x455c6a:c.instructions+=5;goto B455c6a;
case 0x455c6c:c.instructions+=4;goto B455c6c;
case 0x455c6d:c.instructions+=3;goto B455c6d;
case 0x455c74:c.instructions+=2;goto B455c74;
case 0x455c77:c.instructions+=1;goto B455c77;
case 0x455c80:goto L455c80;
case 0x455c82:c.instructions+=12;goto B455c82;
case 0x455c87:c.instructions+=11;goto B455c87;
case 0x455c8d:c.instructions+=10;goto B455c8d;
case 0x455c8e:c.instructions+=9;goto B455c8e;
case 0x455c95:c.instructions+=8;goto B455c95;
case 0x455c96:c.instructions+=7;goto B455c96;
case 0x455c97:c.instructions+=6;goto B455c97;
case 0x455c99:c.instructions+=5;goto B455c99;
case 0x455c9f:c.instructions+=4;goto B455c9f;
case 0x455ca0:c.instructions+=3;goto B455ca0;
case 0x455ca4:c.instructions+=2;goto B455ca4;
case 0x455ca6:c.instructions+=1;goto B455ca6;
case 0x455cac:goto L455cac;
case 0x455caf:c.instructions+=1;goto B455caf;
case 0x455cb1:goto L455cb1;
case 0x455cb7:c.instructions+=1;goto B455cb7;
case 0x455cbd:goto L455cbd;
case 0x455cc0:c.instructions+=4;goto B455cc0;
case 0x455cc1:c.instructions+=3;goto B455cc1;
case 0x455cc2:c.instructions+=2;goto B455cc2;
case 0x455cc7:c.instructions+=1;goto B455cc7;
case 0x455ccd:goto L455ccd;
case 0x455cd4:goto L455cd4;
case 0x455cd5:c.instructions+=2;goto B455cd5;
case 0x455cda:c.instructions+=1;goto B455cda;
case 0x455cdf:goto L455cdf;
case 0x455ce4:goto L455ce4;
case 0x455cea:c.instructions+=10;goto B455cea;
case 0x455ced:c.instructions+=9;goto B455ced;
case 0x455cef:c.instructions+=8;goto B455cef;
case 0x455cf4:c.instructions+=7;goto B455cf4;
case 0x455cf5:c.instructions+=6;goto B455cf5;
case 0x455cfb:c.instructions+=5;goto B455cfb;
case 0x455d01:c.instructions+=4;goto B455d01;
case 0x455d07:c.instructions+=3;goto B455d07;
case 0x455d0d:c.instructions+=2;goto B455d0d;
case 0x455d13:c.instructions+=1;goto B455d13;
case 0x455d18:goto L455d18;
case 0x455d1e:c.instructions+=2;goto B455d1e;
case 0x455d21:c.instructions+=1;goto B455d21;
case 0x455d26:goto L455d26;
case 0x455d2b:c.instructions+=1;goto B455d2b;
case 0x455d30:goto L455d30;
case 0x455d35:c.instructions+=2;goto B455d35;
case 0x455d3b:c.instructions+=1;goto B455d3b;
case 0x455d40:goto L455d40;
case 0x455d45:c.instructions+=2;goto B455d45;
case 0x455d4b:c.instructions+=1;goto B455d4b;
case 0x455d50:goto L455d50;
case 0x455d53:c.instructions+=4;goto B455d53;
case 0x455d57:c.instructions+=3;goto B455d57;
case 0x455d59:c.instructions+=2;goto B455d59;
case 0x455d5d:c.instructions+=1;goto B455d5d;
case 0x455d5f:goto L455d5f;
case 0x455d65:c.instructions+=6;goto B455d65;
case 0x455d68:c.instructions+=5;goto B455d68;
case 0x455d6e:c.instructions+=4;goto B455d6e;
case 0x455d6f:c.instructions+=3;goto B455d6f;
case 0x455d70:c.instructions+=2;goto B455d70;
case 0x455d72:c.instructions+=1;goto B455d72;
case 0x455d77:goto L455d77;
case 0x455d79:goto L455d79;
case 0x455d7b:goto L455d7b;
case 0x455d81:c.instructions+=4;goto B455d81;
case 0x455d84:c.instructions+=3;goto B455d84;
case 0x455d86:c.instructions+=2;goto B455d86;
case 0x455d8c:c.instructions+=1;goto B455d8c;
case 0x455d91:goto L455d91;
case 0x455d93:goto L455d93;
case 0x455d99:c.instructions+=2;goto B455d99;
case 0x455da1:c.instructions+=1;goto B455da1;
case 0x455da3:goto L455da3;
case 0x455da5:c.instructions+=1;goto B455da5;
case 0x455daa:goto L455daa;
case 0x455dac:c.instructions+=1;goto B455dac;
case 0x455db1:goto L455db1;
case 0x455db5:c.instructions+=1;goto B455db5;
case 0x455dba:goto L455dba;
case 0x455dbf:c.instructions+=2;goto B455dbf;
case 0x455dc0:c.instructions+=1;goto B455dc0;
case 0x455dc5:goto L455dc5;
case 0x455dca:c.instructions+=2;goto B455dca;
case 0x455dcb:c.instructions+=1;goto B455dcb;
case 0x455dd0:goto L455dd0;
case 0x455dd5:c.instructions+=2;goto B455dd5;
case 0x455dd6:c.instructions+=1;goto B455dd6;
case 0x455ddb:goto L455ddb;
case 0x455de0:c.instructions+=2;goto B455de0;
case 0x455de1:c.instructions+=1;goto B455de1;
case 0x455de6:goto L455de6;
case 0x455deb:c.instructions+=2;goto B455deb;
case 0x455dec:c.instructions+=1;goto B455dec;
case 0x455df1:goto L455df1;
case 0x455df4:c.instructions+=1;goto B455df4;
case 0x455df9:goto L455df9;
case 0x455dfe:c.instructions+=2;goto B455dfe;
case 0x455dff:c.instructions+=1;goto B455dff;
case 0x455e04:goto L455e04;
case 0x455e09:c.instructions+=2;goto B455e09;
case 0x455e0a:c.instructions+=1;goto B455e0a;
case 0x455e0f:goto L455e0f;
case 0x455e14:c.instructions+=2;goto B455e14;
case 0x455e15:c.instructions+=1;goto B455e15;
case 0x455e1a:goto L455e1a;
case 0x455e1f:c.instructions+=2;goto B455e1f;
case 0x455e20:c.instructions+=1;goto B455e20;
case 0x455e25:goto L455e25;
case 0x455e2a:c.instructions+=2;goto B455e2a;
case 0x455e2b:c.instructions+=1;goto B455e2b;
case 0x455e30:goto L455e30;
case 0x455e35:c.instructions+=2;goto B455e35;
case 0x455e36:c.instructions+=1;goto B455e36;
case 0x455e3b:goto L455e3b;
case 0x455e3e:c.instructions+=1;goto B455e3e;
case 0x455e43:goto L455e43;
case 0x455e48:c.instructions+=2;goto B455e48;
case 0x455e49:c.instructions+=1;goto B455e49;
case 0x455e4e:goto L455e4e;
case 0x455e53:c.instructions+=2;goto B455e53;
case 0x455e54:c.instructions+=1;goto B455e54;
case 0x455e59:goto L455e59;
case 0x455e5c:c.instructions+=1;goto B455e5c;
case 0x455e61:goto L455e61;
case 0x455e66:c.instructions+=2;goto B455e66;
case 0x455e67:c.instructions+=1;goto B455e67;
case 0x455e6c:goto L455e6c;
case 0x455e71:c.instructions+=2;goto B455e71;
case 0x455e72:c.instructions+=1;goto B455e72;
case 0x455e77:goto L455e77;
case 0x455e7c:c.instructions+=2;goto B455e7c;
case 0x455e7d:c.instructions+=1;goto B455e7d;
case 0x455e82:goto L455e82;
case 0x455e87:c.instructions+=2;goto B455e87;
case 0x455e88:c.instructions+=1;goto B455e88;
case 0x455e8d:goto L455e8d;
case 0x455e92:c.instructions+=2;goto B455e92;
case 0x455e93:c.instructions+=1;goto B455e93;
case 0x455e98:goto L455e98;
case 0x455e9d:c.instructions+=2;goto B455e9d;
case 0x455e9e:c.instructions+=1;goto B455e9e;
case 0x455ea3:goto L455ea3;
case 0x455ea8:c.instructions+=2;goto B455ea8;
case 0x455ea9:c.instructions+=1;goto B455ea9;
case 0x455eae:goto L455eae;
case 0x455eb3:c.instructions+=2;goto B455eb3;
case 0x455eb4:c.instructions+=1;goto B455eb4;
case 0x455eb9:goto L455eb9;
case 0x455ebc:c.instructions+=3;goto B455ebc;
case 0x455ec1:c.instructions+=2;goto B455ec1;
case 0x455ec2:c.instructions+=1;goto B455ec2;
case 0x455ec7:goto L455ec7;
case 0x455ecc:c.instructions+=2;goto B455ecc;
case 0x455ecd:c.instructions+=1;goto B455ecd;
case 0x455ed2:goto L455ed2;
case 0x455ed7:c.instructions+=2;goto B455ed7;
case 0x455ed8:c.instructions+=1;goto B455ed8;
case 0x455edd:goto L455edd;
case 0x455ee2:c.instructions+=2;goto B455ee2;
case 0x455ee3:c.instructions+=1;goto B455ee3;
case 0x455ee8:goto L455ee8;
case 0x455eed:c.instructions+=2;goto B455eed;
case 0x455eee:c.instructions+=1;goto B455eee;
case 0x455ef3:goto L455ef3;
case 0x455ef8:c.instructions+=2;goto B455ef8;
case 0x455ef9:c.instructions+=1;goto B455ef9;
case 0x455efe:goto L455efe;
case 0x455f03:c.instructions+=2;goto B455f03;
case 0x455f04:c.instructions+=1;goto B455f04;
case 0x455f09:goto L455f09;
case 0x455f0c:c.instructions+=2;goto B455f0c;
case 0x455f0f:c.instructions+=1;goto B455f0f;
case 0x455f15:goto L455f15;
case 0x455f1b:c.instructions+=1;goto B455f1b;
case 0x455f20:goto L455f20;
case 0x455f22:c.instructions+=1;goto B455f22;
case 0x455f27:goto L455f27;
case 0x455f2c:goto L455f2c;
case 0x455f31:c.instructions+=2;goto B455f31;
case 0x455f32:c.instructions+=1;goto B455f32;
case 0x455f37:goto L455f37;
case 0x455f3c:c.instructions+=2;goto B455f3c;
case 0x455f3d:c.instructions+=1;goto B455f3d;
case 0x455f42:goto L455f42;
case 0x455f47:goto L455f47;
case 0x455f48:c.instructions+=1;goto B455f48;
case 0x455f4d:goto L455f4d;
case 0x455f52:c.instructions+=2;goto B455f52;
case 0x455f53:c.instructions+=1;goto B455f53;
case 0x455f58:goto L455f58;
case 0x455f5d:c.instructions+=2;goto B455f5d;
case 0x455f5e:c.instructions+=1;goto B455f5e;
case 0x455f63:goto L455f63;
case 0x455f68:c.instructions+=2;goto B455f68;
case 0x455f69:c.instructions+=1;goto B455f69;
case 0x455f6e:goto L455f6e;
case 0x455f73:c.instructions+=2;goto B455f73;
case 0x455f74:c.instructions+=1;goto B455f74;
case 0x455f79:goto L455f79;
case 0x455f7e:c.instructions+=2;goto B455f7e;
case 0x455f7f:c.instructions+=1;goto B455f7f;
case 0x455f84:goto L455f84;
case 0x455f87:c.instructions+=1;goto B455f87;
case 0x455f8c:goto L455f8c;
case 0x455f8e:c.instructions+=1;goto B455f8e;
case 0x455f93:goto L455f93;
case 0x455f98:goto L455f98;
case 0x455f9d:c.instructions+=2;goto B455f9d;
case 0x455f9e:c.instructions+=1;goto B455f9e;
case 0x455fa3:goto L455fa3;
case 0x455fa8:c.instructions+=2;goto B455fa8;
case 0x455fa9:c.instructions+=1;goto B455fa9;
case 0x455fae:goto L455fae;
case 0x455fb3:c.instructions+=1;goto B455fb3;
case 0x455fb5:goto L455fb5;
case 0x455fb7:c.instructions+=1;goto B455fb7;
case 0x455fbc:goto L455fbc;
case 0x455fc1:c.instructions+=2;goto B455fc1;
case 0x455fc2:c.instructions+=1;goto B455fc2;
case 0x455fc7:goto L455fc7;
case 0x455fca:c.instructions+=2;goto B455fca;
case 0x455fcc:c.instructions+=1;goto B455fcc;
case 0x455fce:goto L455fce;
case 0x455fd3:c.instructions+=2;goto B455fd3;
case 0x455fd4:c.instructions+=1;goto B455fd4;
case 0x455fd9:goto L455fd9;
case 0x455fdc:goto L455fdc;
case 0x455fe1:c.instructions+=2;goto B455fe1;
case 0x455fe2:c.instructions+=1;goto B455fe2;
case 0x455fe7:goto L455fe7;
case 0x455fea:c.instructions+=2;goto B455fea;
case 0x455fec:c.instructions+=1;goto B455fec;
case 0x455fee:goto L455fee;
case 0x455ff3:c.instructions+=2;goto B455ff3;
case 0x455ff4:c.instructions+=1;goto B455ff4;
case 0x455ff9:goto L455ff9;
case 0x455ffc:goto L455ffc;
default:missing_instruction(c.pc);}
B455002:L455002:{c.instructions+=6;NFSU2_TR(0x455002);
{u32 ea_=u32(r4(R+24)+u32(7280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455008:{NFSU2_TR(0x455008);
{u32 ea_=u32(r4(R+24)+u32(7280u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B45500e:{NFSU2_TR(0x45500e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B455014:{NFSU2_TR(0x455014);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B455016:{NFSU2_TR(0x455016);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B455019:{NFSU2_TR(0x455019);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L45502d;}}
}
B45501b:L45501b:{c.instructions+=3;NFSU2_TR(0x45501b);
{u32 ea_=u32(u32(7897440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455021:{NFSU2_TR(0x455021);
{u32 ea_=u32(r4(R+24)+u32(7280u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B455027:{NFSU2_TR(0x455027);
{u32 ea_=u32(u32(8303728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B45502d:L45502d:{c.instructions+=3;NFSU2_TR(0x45502d);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45502f:{NFSU2_TR(0x45502f);
__builtin_memmove((R+4),(R+24),4);
}
B455031:{NFSU2_TR(0x455031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455036ull));
{goto L455c80;}
}
B455036:L455036:{c.instructions+=5;NFSU2_TR(0x455036);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455037:{NFSU2_TR(0x455037);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455038:{NFSU2_TR(0x455038);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455039:{NFSU2_TR(0x455039);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45503a:{NFSU2_TR(0x45503a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45503d:L45503d:{c.instructions+=6;NFSU2_TR(0x45503d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45503e:{NFSU2_TR(0x45503e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45503f:{NFSU2_TR(0x45503f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455040:{NFSU2_TR(0x455040);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd0ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B45504a:{NFSU2_TR(0x45504a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45504b:{NFSU2_TR(0x45504b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45504e:L45504e:{c.instructions+=2;NFSU2_TR(0x45504e);
__builtin_memmove((R+4),(R+24),4);
}
B455050:{NFSU2_TR(0x455050);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455055ull));
TAIL_STATIC(0x443750u,443);
}
B455055:L455055:{c.instructions+=6;NFSU2_TR(0x455055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45505b:{NFSU2_TR(0x45505b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B45505d:{NFSU2_TR(0x45505d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45505e:{NFSU2_TR(0x45505e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45505f:{NFSU2_TR(0x45505f);
__builtin_memmove((R+4),(R+24),4);
}
B455061:{NFSU2_TR(0x455061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455066ull));
TAIL_STATIC(0x4436f0u,443);
}
B455066:L455066:{c.instructions+=5;NFSU2_TR(0x455066);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455067:{NFSU2_TR(0x455067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455068:{NFSU2_TR(0x455068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455069:{NFSU2_TR(0x455069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45506a:{NFSU2_TR(0x45506a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45506d:L45506d:{c.instructions+=1;NFSU2_TR(0x45506d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455072ull));
TAIL_STATIC(0x44a7a0u,44a);
}
B455072:L455072:{c.instructions+=5;NFSU2_TR(0x455072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455073:{NFSU2_TR(0x455073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455074:{NFSU2_TR(0x455074);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455075:{NFSU2_TR(0x455075);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455076:{NFSU2_TR(0x455076);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455079:L455079:{c.instructions+=1;NFSU2_TR(0x455079);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45507eull));
TAIL_STATIC(0x442a10u,442);
}
B45507e:L45507e:{c.instructions+=2;NFSU2_TR(0x45507e);
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
B455080:{NFSU2_TR(0x455080);
if(r1(R+518)){{goto L4558f1;}}
}
B455086:L455086:{c.instructions+=2;NFSU2_TR(0x455086);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B455089:{NFSU2_TR(0x455089);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4558f1;}}
}
B45508f:L45508f:{c.instructions+=4;NFSU2_TR(0x45508f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455091:{NFSU2_TR(0x455091);
__builtin_memmove((R+4),(R+24),4);
}
B455093:{NFSU2_TR(0x455093);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455099:{NFSU2_TR(0x455099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45509eull));
{goto L455c80;}
}
B45509e:L45509e:{c.instructions+=5;NFSU2_TR(0x45509e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45509f:{NFSU2_TR(0x45509f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4550a0:{NFSU2_TR(0x4550a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4550a1:{NFSU2_TR(0x4550a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4550a2:{NFSU2_TR(0x4550a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4550a5:L4550a5:{c.instructions+=4;NFSU2_TR(0x4550a5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4550a9:{NFSU2_TR(0x4550a9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4550ab:{NFSU2_TR(0x4550ab);
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
B4550ad:{NFSU2_TR(0x4550ad);
if(r1(R+518)){{goto L4558f1;}}
}
B4550b3:L4550b3:{c.instructions+=4;NFSU2_TR(0x4550b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4550b7:{NFSU2_TR(0x4550b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffff2bull))));
__builtin_memmove((R+4),(U+0),4);
}
B4550bd:{NFSU2_TR(0x4550bd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4550c0:{NFSU2_TR(0x4550c0);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4558f1;}}
}
B4550c6:L4550c6:{c.instructions+=2;NFSU2_TR(0x4550c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x455a38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B4550cd:{NFSU2_TR(0x4550cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455a24ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4550d4:L4550d4:{c.instructions+=8;NFSU2_TR(0x4550d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4550da:{NFSU2_TR(0x4550da);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4550dc:{NFSU2_TR(0x4550dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd7ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4550e1:{NFSU2_TR(0x4550e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B4550e4:{NFSU2_TR(0x4550e4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4550e7:{NFSU2_TR(0x4550e7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4550eb:{NFSU2_TR(0x4550eb);
__builtin_memmove((R+0),(R+8),4);
}
B4550ed:{NFSU2_TR(0x4550ed);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4558f1;}}
}
B4550f3:L4550f3:{c.instructions+=1;NFSU2_TR(0x4550f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455a48ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4550fa:L4550fa:{c.instructions+=17;NFSU2_TR(0x4550fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455100:{NFSU2_TR(0x455100);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B455106:{NFSU2_TR(0x455106);
u8 U[13];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B45510e:{NFSU2_TR(0x45510e);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B455115:{NFSU2_TR(0x455115);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B455117:{NFSU2_TR(0x455117);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B45511a:{NFSU2_TR(0x45511a);
w1(R+4,u8(u32(r1(R+4))-u32(u8(0x1ull))));
}
B45511c:{NFSU2_TR(0x45511c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B455121:{NFSU2_TR(0x455121);
u8 U[6];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B455128:{NFSU2_TR(0x455128);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x12ull))));
}
B45512b:{NFSU2_TR(0x45512b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B45512d:{NFSU2_TR(0x45512d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B455133:{NFSU2_TR(0x455133);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B455137:{NFSU2_TR(0x455137);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455138:{NFSU2_TR(0x455138);
__builtin_memmove((R+4),(R+24),4);
}
B45513a:{NFSU2_TR(0x45513a);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B45513e:{NFSU2_TR(0x45513e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455143ull));
TAIL_STATIC(0x447970u,447);
}
B455143:L455143:{c.instructions+=3;NFSU2_TR(0x455143);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455144:{NFSU2_TR(0x455144);
__builtin_memmove((R+4),(R+24),4);
}
B455146:{NFSU2_TR(0x455146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45514bull));
TAIL_STATIC(0x447a10u,447);
}
B45514b:L45514b:{c.instructions+=5;NFSU2_TR(0x45514b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45514c:{NFSU2_TR(0x45514c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45514d:{NFSU2_TR(0x45514d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45514e:{NFSU2_TR(0x45514e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45514f:{NFSU2_TR(0x45514f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455152:L455152:{c.instructions+=7;NFSU2_TR(0x455152);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455158:{NFSU2_TR(0x455158);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45515e:{NFSU2_TR(0x45515e);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B455166:{NFSU2_TR(0x455166);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455167:{NFSU2_TR(0x455167);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455168:{NFSU2_TR(0x455168);
__builtin_memmove((R+4),(R+24),4);
}
B45516a:{NFSU2_TR(0x45516a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45516full));
TAIL_STATIC(0x443830u,443);
}
B45516f:L45516f:{c.instructions+=5;NFSU2_TR(0x45516f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455175:{NFSU2_TR(0x455175);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455176:{NFSU2_TR(0x455176);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455177:{NFSU2_TR(0x455177);
__builtin_memmove((R+4),(R+24),4);
}
B455179:{NFSU2_TR(0x455179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45517eull));
TAIL_STATIC(0x4498a0u,449);
}
B45517e:L45517e:{c.instructions+=8;NFSU2_TR(0x45517e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B455184:{NFSU2_TR(0x455184);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B455188:{NFSU2_TR(0x455188);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455189:{NFSU2_TR(0x455189);
__builtin_memmove((R+4),(R+24),4);
}
B45518b:{NFSU2_TR(0x45518b);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B455190:{NFSU2_TR(0x455190);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B455194:{NFSU2_TR(0x455194);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B45519b:{NFSU2_TR(0x45519b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4551a0ull));
TAIL_STATIC(0x447970u,447);
}
B4551a0:L4551a0:{c.instructions+=3;NFSU2_TR(0x4551a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551a1:{NFSU2_TR(0x4551a1);
__builtin_memmove((R+4),(R+24),4);
}
B4551a3:{NFSU2_TR(0x4551a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4551a8ull));
TAIL_STATIC(0x447a10u,447);
}
B4551a8:L4551a8:{c.instructions+=5;NFSU2_TR(0x4551a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4551a9:{NFSU2_TR(0x4551a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4551aa:{NFSU2_TR(0x4551aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4551ab:{NFSU2_TR(0x4551ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4551ac:{NFSU2_TR(0x4551ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4551af:L4551af:{c.instructions+=7;NFSU2_TR(0x4551af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4551b5:{NFSU2_TR(0x4551b5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4551bb:{NFSU2_TR(0x4551bb);
u8 U[13];
w4(U+0,u32(u32(u32(0x1a1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+28,u32(r1(U+12)));
}
B4551c3:{NFSU2_TR(0x4551c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551c4:{NFSU2_TR(0x4551c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551c5:{NFSU2_TR(0x4551c5);
__builtin_memmove((R+4),(R+24),4);
}
B4551c7:{NFSU2_TR(0x4551c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4551ccull));
TAIL_STATIC(0x443830u,443);
}
B4551cc:L4551cc:{c.instructions+=5;NFSU2_TR(0x4551cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551cd:{NFSU2_TR(0x4551cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4551d3:{NFSU2_TR(0x4551d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551d4:{NFSU2_TR(0x4551d4);
__builtin_memmove((R+4),(R+24),4);
}
B4551d6:{NFSU2_TR(0x4551d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4551dbull));
TAIL_STATIC(0x449d00u,449);
}
B4551db:L4551db:{c.instructions+=8;NFSU2_TR(0x4551db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4551e1:{NFSU2_TR(0x4551e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4551e5:{NFSU2_TR(0x4551e5);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4551e9:{NFSU2_TR(0x4551e9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551ea:{NFSU2_TR(0x4551ea);
__builtin_memmove((R+4),(R+24),4);
}
B4551ec:{NFSU2_TR(0x4551ec);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4551f1:{NFSU2_TR(0x4551f1);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4551f8:{NFSU2_TR(0x4551f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4551fdull));
TAIL_STATIC(0x447970u,447);
}
B4551fd:L4551fd:{c.instructions+=3;NFSU2_TR(0x4551fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4551fe:{NFSU2_TR(0x4551fe);
__builtin_memmove((R+4),(R+24),4);
}
B455200:{NFSU2_TR(0x455200);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455205ull));
TAIL_STATIC(0x447a10u,447);
}
B455205:L455205:{c.instructions+=5;NFSU2_TR(0x455205);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455206:{NFSU2_TR(0x455206);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455207:{NFSU2_TR(0x455207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455208:{NFSU2_TR(0x455208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455209:{NFSU2_TR(0x455209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45520c:L45520c:{c.instructions+=4;NFSU2_TR(0x45520c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455212:{NFSU2_TR(0x455212);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B455218:{NFSU2_TR(0x455218);
u8 U[12];
w4(U+0,u32(u32(u32(0x19eull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B45521f:{NFSU2_TR(0x45521f);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B455224:L455224:{c.instructions+=8;NFSU2_TR(0x455224);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))^u32(u8(0x1ull))));
s1(u32(r4(R+0)),r1(U+0));
}
B455227:{NFSU2_TR(0x455227);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B45522d:{NFSU2_TR(0x45522d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B455231:{NFSU2_TR(0x455231);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B455235:{NFSU2_TR(0x455235);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455236:{NFSU2_TR(0x455236);
__builtin_memmove((R+4),(R+24),4);
}
B455238:{NFSU2_TR(0x455238);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B45523f:{NFSU2_TR(0x45523f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455244ull));
TAIL_STATIC(0x447970u,447);
}
B455244:L455244:{c.instructions+=5;NFSU2_TR(0x455244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455245:{NFSU2_TR(0x455245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455246:{NFSU2_TR(0x455246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455247:{NFSU2_TR(0x455247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455248:{NFSU2_TR(0x455248);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45524b:L45524b:{c.instructions+=5;NFSU2_TR(0x45524b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455251:{NFSU2_TR(0x455251);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B455257:{NFSU2_TR(0x455257);
u8 U[12];
w4(U+0,u32(u32(u32(0x19full))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B45525e:{NFSU2_TR(0x45525e);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xaull));
s1(u32(r4(U+0)),r1(U+4));
}
B455263:{NFSU2_TR(0x455263);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455224u);}goto L455224;}
}
B455265:L455265:{c.instructions+=5;NFSU2_TR(0x455265);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45526b:{NFSU2_TR(0x45526b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B455271:{NFSU2_TR(0x455271);
u8 U[12];
w4(U+0,u32(u32(u32(0x19dull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B455278:{NFSU2_TR(0x455278);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B45527d:{NFSU2_TR(0x45527d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455224u);}goto L455224;}
}
B45527f:L45527f:{c.instructions+=5;NFSU2_TR(0x45527f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455285:{NFSU2_TR(0x455285);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45528b:{NFSU2_TR(0x45528b);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a2ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B455292:{NFSU2_TR(0x455292);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xbull));
s1(u32(r4(U+0)),r1(U+4));
}
B455297:{NFSU2_TR(0x455297);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455224u);}goto L455224;}
}
B455299:L455299:{c.instructions+=2;NFSU2_TR(0x455299);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4552a0:{NFSU2_TR(0x4552a0);
if(r1(R+518)){{goto L4558f1;}}
}
B4552a6:L4552a6:{c.instructions+=5;NFSU2_TR(0x4552a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4552ac:{NFSU2_TR(0x4552ac);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4552b2:{NFSU2_TR(0x4552b2);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4552b9:{NFSU2_TR(0x4552b9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xcull));
s1(u32(r4(U+0)),r1(U+4));
}
B4552be:{NFSU2_TR(0x4552be);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455224u);}goto L455224;}
}
B4552c3:L4552c3:{c.instructions+=5;NFSU2_TR(0x4552c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4552c9:{NFSU2_TR(0x4552c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4552cf:{NFSU2_TR(0x4552cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4552d6:{NFSU2_TR(0x4552d6);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xdull));
s1(u32(r4(U+0)),r1(U+4));
}
B4552db:{NFSU2_TR(0x4552db);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455224u);}goto L455224;}
}
B4552e0:L4552e0:{c.instructions+=5;NFSU2_TR(0x4552e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4552e6:{NFSU2_TR(0x4552e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4552ec:{NFSU2_TR(0x4552ec);
u8 U[12];
w4(U+0,u32(u32(u32(0x1a5ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4552f3:{NFSU2_TR(0x4552f3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xeull));
s1(u32(r4(U+0)),r1(U+4));
}
B4552f8:{NFSU2_TR(0x4552f8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455224u);}goto L455224;}
}
B4552fd:L4552fd:{c.instructions+=8;NFSU2_TR(0x4552fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455303:{NFSU2_TR(0x455303);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B455306:{NFSU2_TR(0x455306);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45530c:{NFSU2_TR(0x45530c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B45530f:{NFSU2_TR(0x45530f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455310:{NFSU2_TR(0x455310);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455311:{NFSU2_TR(0x455311);
__builtin_memmove((R+4),(R+24),4);
}
B455313:{NFSU2_TR(0x455313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455318ull));
TAIL_STATIC(0x443880u,443);
}
B455318:L455318:{c.instructions+=9;NFSU2_TR(0x455318);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B45531e:{NFSU2_TR(0x45531e);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B455321:{NFSU2_TR(0x455321);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x88ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B455327:{NFSU2_TR(0x455327);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455328:{NFSU2_TR(0x455328);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455329:{NFSU2_TR(0x455329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45532a:{NFSU2_TR(0x45532a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B45532d:{NFSU2_TR(0x45532d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45532e:{NFSU2_TR(0x45532e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455331:L455331:{c.instructions+=4;NFSU2_TR(0x455331);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455337:{NFSU2_TR(0x455337);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45533d:{NFSU2_TR(0x45533d);
u8 U[15];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B455344:{NFSU2_TR(0x455344);
if(r1(R+518)){{goto L45534c;}}
}
B455346:L455346:{c.instructions+=1;NFSU2_TR(0x455346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B45534c:L45534c:{c.instructions+=2;NFSU2_TR(0x45534c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B455352:{NFSU2_TR(0x455352);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4558f1;}}
}
B455358:L455358:{c.instructions+=6;NFSU2_TR(0x455358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455359:{NFSU2_TR(0x455359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45535a:{NFSU2_TR(0x45535a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45535b:{NFSU2_TR(0x45535b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B455365:{NFSU2_TR(0x455365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455366:{NFSU2_TR(0x455366);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455369:L455369:{c.instructions+=4;NFSU2_TR(0x455369);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45536f:{NFSU2_TR(0x45536f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B455375:{NFSU2_TR(0x455375);
u8 U[15];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B45537c:{NFSU2_TR(0x45537c);
if(r1(R+518)){{goto L455384;}}
}
B45537e:L45537e:{c.instructions+=1;NFSU2_TR(0x45537e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B455384:L455384:{c.instructions+=2;NFSU2_TR(0x455384);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xbull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B45538b:{NFSU2_TR(0x45538b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4558f1;}}
}
B455391:L455391:{c.instructions+=6;NFSU2_TR(0x455391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455392:{NFSU2_TR(0x455392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455393:{NFSU2_TR(0x455393);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455399:{NFSU2_TR(0x455399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45539a:{NFSU2_TR(0x45539a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45539b:{NFSU2_TR(0x45539b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45539e:L45539e:{c.instructions+=6;NFSU2_TR(0x45539e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4553a4:{NFSU2_TR(0x4553a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4553aa:{NFSU2_TR(0x4553aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4553ad:{NFSU2_TR(0x4553ad);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4553b3:{NFSU2_TR(0x4553b3);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B4553b6:{NFSU2_TR(0x4553b6);
if(r1(R+518)){{goto L4553dc;}}
}
B4553b8:L4553b8:{c.instructions+=7;NFSU2_TR(0x4553b8);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4553bc:{NFSU2_TR(0x4553bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4553c0:{NFSU2_TR(0x4553c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4553c1:{NFSU2_TR(0x4553c1);
__builtin_memmove((R+4),(R+24),4);
}
B4553c3:{NFSU2_TR(0x4553c3);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x10ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4553c8:{NFSU2_TR(0x4553c8);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x8ull));
s2(u32(r4(U+0)),r2(U+4));
}
B4553cf:{NFSU2_TR(0x4553cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4553d4ull));
TAIL_STATIC(0x447970u,447);
}
B4553d4:L4553d4:{c.instructions+=3;NFSU2_TR(0x4553d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4553d5:{NFSU2_TR(0x4553d5);
__builtin_memmove((R+4),(R+24),4);
}
B4553d7:{NFSU2_TR(0x4553d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4553dcull));
TAIL_STATIC(0x447a10u,447);
}
B4553dc:L4553dc:{c.instructions+=3;NFSU2_TR(0x4553dc);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4553de:{NFSU2_TR(0x4553de);
__builtin_memmove((R+4),(R+24),4);
}
B4553e0:{NFSU2_TR(0x4553e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4553e5ull));
{goto L455c80;}
}
B4553e5:L4553e5:{c.instructions+=5;NFSU2_TR(0x4553e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4553e6:{NFSU2_TR(0x4553e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4553e7:{NFSU2_TR(0x4553e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4553e8:{NFSU2_TR(0x4553e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4553e9:{NFSU2_TR(0x4553e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4553ec:L4553ec:{c.instructions+=4;NFSU2_TR(0x4553ec);
__builtin_memmove((R+0),(R+4),4);
}
B4553ee:{NFSU2_TR(0x4553ee);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4553f1:{NFSU2_TR(0x4553f1);
w4(R+12,u32(0x0ull));
}
B4553f6:{NFSU2_TR(0x4553f6);
if(r1(R+518)){{goto L455406;}}
}
B4553f8:L4553f8:{c.instructions+=2;NFSU2_TR(0x4553f8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4553fb:{NFSU2_TR(0x4553fb);
if(r1(R+518)){{goto L455406;}}
}
B4553fd:L4553fd:{c.instructions+=2;NFSU2_TR(0x4553fd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B455400:{NFSU2_TR(0x455400);
if(r1(R+518)){{goto L455406;}}
}
B455402:L455402:{c.instructions+=2;NFSU2_TR(0x455402);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B455404:{NFSU2_TR(0x455404);
{goto L45540b;}
}
B455406:L455406:{c.instructions+=1;NFSU2_TR(0x455406);
w4(R+28,u32(0x1ull));
}
B45540b:L45540b:{c.instructions+=4;NFSU2_TR(0x45540b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45540f:{NFSU2_TR(0x45540f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff2dull))));
}
B455414:{NFSU2_TR(0x455414);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x25ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x25ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x25ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B455417:{NFSU2_TR(0x455417);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4558f1;}}
}
B45541d:L45541d:{c.instructions+=2;NFSU2_TR(0x45541d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x455a98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B455424:{NFSU2_TR(0x455424);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455a74ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B45542b:L45542b:{c.instructions+=8;NFSU2_TR(0x45542b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B455430:{NFSU2_TR(0x455430);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455434:{NFSU2_TR(0x455434);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455435:{NFSU2_TR(0x455435);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B455439:{NFSU2_TR(0x455439);
w4(R+4,u32(0x7ec3f0ull));
}
B45543e:{NFSU2_TR(0x45543e);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B455444:{NFSU2_TR(0x455444);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455447:{NFSU2_TR(0x455447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45544cull));
TAIL_STATIC(0x4132c0u,413);
}
B45544c:L45544c:{c.instructions+=6;NFSU2_TR(0x45544c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45544d:{NFSU2_TR(0x45544d);
{u32 ea_=u32(r4(R+24)+u32(7316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455453:{NFSU2_TR(0x455453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455454:{NFSU2_TR(0x455454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455455:{NFSU2_TR(0x455455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455456:{NFSU2_TR(0x455456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455459:L455459:{c.instructions+=8;NFSU2_TR(0x455459);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B45545e:{NFSU2_TR(0x45545e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455462:{NFSU2_TR(0x455462);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455463:{NFSU2_TR(0x455463);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B455467:{NFSU2_TR(0x455467);
w4(R+4,u32(0x7ec3f0ull));
}
B45546c:{NFSU2_TR(0x45546c);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B455472:{NFSU2_TR(0x455472);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455475:{NFSU2_TR(0x455475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45547aull));
TAIL_STATIC(0x4132c0u,413);
}
B45547a:L45547a:{c.instructions+=6;NFSU2_TR(0x45547a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45547b:{NFSU2_TR(0x45547b);
{u32 ea_=u32(r4(R+24)+u32(7320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455481:{NFSU2_TR(0x455481);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455482:{NFSU2_TR(0x455482);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455483:{NFSU2_TR(0x455483);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455484:{NFSU2_TR(0x455484);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455487:L455487:{c.instructions+=4;NFSU2_TR(0x455487);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455489:{NFSU2_TR(0x455489);
__builtin_memmove((R+4),(R+24),4);
}
B45548b:{NFSU2_TR(0x45548b);
__builtin_memmove(gp(0x82a594),(R+28),4);
}
B455491:{NFSU2_TR(0x455491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455496ull));
{goto L455c80;}
}
B455496:L455496:{c.instructions+=5;NFSU2_TR(0x455496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455497:{NFSU2_TR(0x455497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455498:{NFSU2_TR(0x455498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455499:{NFSU2_TR(0x455499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45549a:{NFSU2_TR(0x45549a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45549d:L45549d:{c.instructions+=8;NFSU2_TR(0x45549d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4554a3:{NFSU2_TR(0x4554a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4554a7:{NFSU2_TR(0x4554a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4554a8:{NFSU2_TR(0x4554a8);
__builtin_memmove((R+4),(R+24),4);
}
B4554aa:{NFSU2_TR(0x4554aa);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4554af:{NFSU2_TR(0x4554af);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4554b3:{NFSU2_TR(0x4554b3);
u8 U[6];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w2(U+4,u16(0x8cull));
s2(u32(r4(U+0)),r2(U+4));
}
B4554ba:{NFSU2_TR(0x4554ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4554bfull));
TAIL_STATIC(0x447970u,447);
}
B4554bf:L4554bf:{c.instructions+=6;NFSU2_TR(0x4554bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4554c5:{NFSU2_TR(0x4554c5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4554cb:{NFSU2_TR(0x4554cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B4554d2:{NFSU2_TR(0x4554d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4554d3:{NFSU2_TR(0x4554d3);
__builtin_memmove((R+4),(R+24),4);
}
B4554d5:{NFSU2_TR(0x4554d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4554daull));
TAIL_STATIC(0x4479d0u,447);
}
B4554da:L4554da:{c.instructions+=5;NFSU2_TR(0x4554da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4554e0:{NFSU2_TR(0x4554e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4554e1:{NFSU2_TR(0x4554e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4554e2:{NFSU2_TR(0x4554e2);
__builtin_memmove((R+4),(R+24),4);
}
B4554e4:{NFSU2_TR(0x4554e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4554e9ull));
TAIL_STATIC(0x450470u,450);
}
B4554e9:L4554e9:{c.instructions+=5;NFSU2_TR(0x4554e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4554ea:{NFSU2_TR(0x4554ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4554eb:{NFSU2_TR(0x4554eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4554ec:{NFSU2_TR(0x4554ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4554ed:{NFSU2_TR(0x4554ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4554f0:L4554f0:{c.instructions+=4;NFSU2_TR(0x4554f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4554f6:{NFSU2_TR(0x4554f6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4554fc:{NFSU2_TR(0x4554fc);
u8 U[18];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(U+16))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+16),r1(R+12)));
w1(U+17,u8(u32(r1(U+16))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B455503:{NFSU2_TR(0x455503);
if(r1(R+518)){{goto L4558f1;}}
}
B455509:L455509:{c.instructions+=7;NFSU2_TR(0x455509);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B45550b:{NFSU2_TR(0x45550b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45550d:{NFSU2_TR(0x45550d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B455510:{NFSU2_TR(0x455510);
__builtin_memmove((R+4),(R+24),4);
}
B455512:{NFSU2_TR(0x455512);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xbull))));
}
B455515:{NFSU2_TR(0x455515);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455516:{NFSU2_TR(0x455516);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45551bull));
{goto L455c80;}
}
B45551b:L45551b:{c.instructions+=5;NFSU2_TR(0x45551b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45551c:{NFSU2_TR(0x45551c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45551d:{NFSU2_TR(0x45551d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45551e:{NFSU2_TR(0x45551e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45551f:{NFSU2_TR(0x45551f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455522:L455522:{c.instructions+=4;NFSU2_TR(0x455522);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455528:{NFSU2_TR(0x455528);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45552e:{NFSU2_TR(0x45552e);
u8 U[18];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+16),(U+12),1);
w1(R+512,u8((r1(U+16))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+16),r1(R+12)));
w1(U+17,u8(u32(r1(U+16))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+17))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+17))==(u8(0x0ull))));
w1(U+13,u8(u32(r1(U+17))&u32(u8(0xffull))));
w1(U+14,u8(__builtin_popcountll(u64(r1(U+13)))));
w1(U+15,u8(u32(r1(U+14))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+15))==(u8(0x0ull))));
}
B455535:{NFSU2_TR(0x455535);
if(r1(R+518)){{goto L4558f1;}}
}
B45553b:L45553b:{c.instructions+=7;NFSU2_TR(0x45553b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B45553d:{NFSU2_TR(0x45553d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B45553f:{NFSU2_TR(0x45553f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B455542:{NFSU2_TR(0x455542);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdull))));
}
B455545:{NFSU2_TR(0x455545);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455546:{NFSU2_TR(0x455546);
__builtin_memmove((R+4),(R+24),4);
}
B455548:{NFSU2_TR(0x455548);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45554dull));
{goto L455c80;}
}
B45554d:L45554d:{c.instructions+=5;NFSU2_TR(0x45554d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45554e:{NFSU2_TR(0x45554e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45554f:{NFSU2_TR(0x45554f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455550:{NFSU2_TR(0x455550);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455551:{NFSU2_TR(0x455551);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455554:L455554:{c.instructions+=2;NFSU2_TR(0x455554);
u8 U[10];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B455558:{NFSU2_TR(0x455558);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B45555e:L45555e:{c.instructions+=2;NFSU2_TR(0x45555e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B455561:{NFSU2_TR(0x455561);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B455567:L455567:{c.instructions+=3;NFSU2_TR(0x455567);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455569:{NFSU2_TR(0x455569);
__builtin_memmove((R+4),(R+24),4);
}
B45556b:{NFSU2_TR(0x45556b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455570ull));
{goto L455c80;}
}
B455570:L455570:{c.instructions+=5;NFSU2_TR(0x455570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455571:{NFSU2_TR(0x455571);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455572:{NFSU2_TR(0x455572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455573:{NFSU2_TR(0x455573);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455574:{NFSU2_TR(0x455574);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455577:L455577:{c.instructions+=2;NFSU2_TR(0x455577);
u8 U[10];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B45557b:{NFSU2_TR(0x45557b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B455581:L455581:{c.instructions+=2;NFSU2_TR(0x455581);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xaull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xaull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B455584:{NFSU2_TR(0x455584);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B45558a:L45558a:{c.instructions+=3;NFSU2_TR(0x45558a);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45558c:{NFSU2_TR(0x45558c);
__builtin_memmove((R+4),(R+24),4);
}
B45558e:{NFSU2_TR(0x45558e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455593ull));
{goto L455c80;}
}
B455593:L455593:{c.instructions+=5;NFSU2_TR(0x455593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455594:{NFSU2_TR(0x455594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455595:{NFSU2_TR(0x455595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455596:{NFSU2_TR(0x455596);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455597:{NFSU2_TR(0x455597);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45559a:L45559a:{c.instructions+=4;NFSU2_TR(0x45559a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45559e:{NFSU2_TR(0x45559e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff2dull))));
}
B4555a3:{NFSU2_TR(0x4555a3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4555a6:{NFSU2_TR(0x4555a6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4558f1;}}
}
B4555ac:L4555ac:{c.instructions+=2;NFSU2_TR(0x4555ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x455ad4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B4555b3:{NFSU2_TR(0x4555b3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x455ac0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4555ba:L4555ba:{c.instructions+=4;NFSU2_TR(0x4555ba);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4555be:{NFSU2_TR(0x4555be);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4555c0:{NFSU2_TR(0x4555c0);
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
B4555c2:{NFSU2_TR(0x4555c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B4555c8:L4555c8:{c.instructions+=6;NFSU2_TR(0x4555c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4555c9:{NFSU2_TR(0x4555c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4555ca:{NFSU2_TR(0x4555ca);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4555d0:{NFSU2_TR(0x4555d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4555d1:{NFSU2_TR(0x4555d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4555d2:{NFSU2_TR(0x4555d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4555d5:L4555d5:{c.instructions+=2;NFSU2_TR(0x4555d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4555d8:{NFSU2_TR(0x4555d8);
if(r1(R+518)){{goto L45566f;}}
}
B4555de:L4555de:{c.instructions+=2;NFSU2_TR(0x4555de);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4555e1:{NFSU2_TR(0x4555e1);
if(r1(R+518)){{goto L45566f;}}
}
B4555e7:L4555e7:{c.instructions+=3;NFSU2_TR(0x4555e7);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4555ec:{NFSU2_TR(0x4555ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4555ee:{NFSU2_TR(0x4555ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4555f3ull));
TAIL_STATIC(0x571a00u,571);
}
B4555f3:L4555f3:{c.instructions+=3;NFSU2_TR(0x4555f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4555f6:{NFSU2_TR(0x4555f6);
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
B4555f8:{NFSU2_TR(0x4555f8);
if(r1(R+518)){{goto L4558f1;}}
}
B4555fe:L4555fe:{c.instructions+=3;NFSU2_TR(0x4555fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455604:{NFSU2_TR(0x455604);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B455607:{NFSU2_TR(0x455607);
if(r1(R+518)){{goto L455617;}}
}
B455609:L455609:{c.instructions+=2;NFSU2_TR(0x455609);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B45560c:{NFSU2_TR(0x45560c);
if(r1(R+518)){{goto L455617;}}
}
B45560e:L45560e:{c.instructions+=2;NFSU2_TR(0x45560e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B455611:{NFSU2_TR(0x455611);
if(r1(R+518)){{goto L455617;}}
}
B455613:L455613:{c.instructions+=2;NFSU2_TR(0x455613);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B455615:{NFSU2_TR(0x455615);
{goto L45561c;}
}
B455617:L455617:{c.instructions+=1;NFSU2_TR(0x455617);
w4(R+0,u32(0x1ull));
}
B45561c:L45561c:{c.instructions+=20;NFSU2_TR(0x45561c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B455622:{NFSU2_TR(0x455622);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B455628:{NFSU2_TR(0x455628);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B45562b:{NFSU2_TR(0x45562b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B45562d:{NFSU2_TR(0x45562d);
w1(R+8,u8(0x80ull));
}
B45562f:{NFSU2_TR(0x45562f);
u8 U[13];
w4(U+0,u32(u32(u32(0x212ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B455636:{NFSU2_TR(0x455636);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B45563c:{NFSU2_TR(0x45563c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B455642:{NFSU2_TR(0x455642);
u8 U[12];
w4(U+0,u32(u32(u32(0xb1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B455649:{NFSU2_TR(0x455649);
u8 U[12];
w4(U+0,u32(u32(u32(0x162ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B455650:{NFSU2_TR(0x455650);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B455653:{NFSU2_TR(0x455653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455659:{NFSU2_TR(0x455659);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B45565f:{NFSU2_TR(0x45565f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455660:{NFSU2_TR(0x455660);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455661:{NFSU2_TR(0x455661);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B455663:{NFSU2_TR(0x455663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B455664:{NFSU2_TR(0x455664);
u8 U[13];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B45566b:{NFSU2_TR(0x45566b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B45566c:{NFSU2_TR(0x45566c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45566f:L45566f:{c.instructions+=9;NFSU2_TR(0x45566f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B455675:{NFSU2_TR(0x455675);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B455676:{NFSU2_TR(0x455676);
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
B455678:{NFSU2_TR(0x455678);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455679:{NFSU2_TR(0x455679);
__builtin_memmove((R+4),(R+518),1);
}
B45567c:{NFSU2_TR(0x45567c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45567d:{NFSU2_TR(0x45567d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B455683:{NFSU2_TR(0x455683);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455684:{NFSU2_TR(0x455684);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455687:L455687:{c.instructions+=2;NFSU2_TR(0x455687);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45568a:{NFSU2_TR(0x45568a);
if(r1(R+518)){{goto L455695;}}
}
B45568c:L45568c:{c.instructions+=2;NFSU2_TR(0x45568c);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xeull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45568f:{NFSU2_TR(0x45568f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B455695:L455695:{c.instructions+=3;NFSU2_TR(0x455695);
u8 U[4];
w4(U+0,u32(0xe4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45569a:{NFSU2_TR(0x45569a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B45569c:{NFSU2_TR(0x45569c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4556a1ull));
TAIL_STATIC(0x571a00u,571);
}
B4556a1:L4556a1:{c.instructions+=3;NFSU2_TR(0x4556a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4556a4:{NFSU2_TR(0x4556a4);
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
B4556a6:{NFSU2_TR(0x4556a6);
if(r1(R+518)){{goto L4558f1;}}
}
B4556ac:L4556ac:{c.instructions+=4;NFSU2_TR(0x4556ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4556b2:{NFSU2_TR(0x4556b2);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4556b5:{NFSU2_TR(0x4556b5);
w4(R+12,u32(0x0ull));
}
B4556ba:{NFSU2_TR(0x4556ba);
if(r1(R+518)){{goto L4556ca;}}
}
B4556bc:L4556bc:{c.instructions+=2;NFSU2_TR(0x4556bc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4556bf:{NFSU2_TR(0x4556bf);
if(r1(R+518)){{goto L4556ca;}}
}
B4556c1:L4556c1:{c.instructions+=2;NFSU2_TR(0x4556c1);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4556c4:{NFSU2_TR(0x4556c4);
if(r1(R+518)){{goto L4556ca;}}
}
B4556c6:L4556c6:{c.instructions+=2;NFSU2_TR(0x4556c6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4556c8:{NFSU2_TR(0x4556c8);
{goto L4556cf;}
}
B4556ca:L4556ca:{c.instructions+=1;NFSU2_TR(0x4556ca);
w4(R+28,u32(0x1ull));
}
B4556cf:L4556cf:{c.instructions+=2;NFSU2_TR(0x4556cf);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4556d1:{NFSU2_TR(0x4556d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4556d6ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B4556d6:L4556d6:{c.instructions+=5;NFSU2_TR(0x4556d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4556d9:{NFSU2_TR(0x4556d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4556dc:{NFSU2_TR(0x4556dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4556df:{NFSU2_TR(0x4556df);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4556e1:{NFSU2_TR(0x4556e1);
if(r1(R+518)){{goto L4557ed;}}
}
B4556e7:L4556e7:{c.instructions+=9;NFSU2_TR(0x4556e7);
{u32 ea_=u32(r4(R+20)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4556ed:{NFSU2_TR(0x4556ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4556f3:{NFSU2_TR(0x4556f3);
{u32 ea_=u32(r4(R+20)+u32(392u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4556f9:{NFSU2_TR(0x4556f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4556ff:{NFSU2_TR(0x4556ff);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B455705:{NFSU2_TR(0x455705);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455709:{NFSU2_TR(0x455709);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B45570d:{NFSU2_TR(0x45570d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B455713:{NFSU2_TR(0x455713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455718ull));
TAIL_STATIC(0x75bed4u,75b);
}
B455718:L455718:{c.instructions+=7;NFSU2_TR(0x455718);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B45571e:{NFSU2_TR(0x45571e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455724:{NFSU2_TR(0x455724);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45572a:{NFSU2_TR(0x45572a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B45572c:{NFSU2_TR(0x45572c);
u8 U[13];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B455733:{NFSU2_TR(0x455733);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B455736:{NFSU2_TR(0x455736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45573bull));
TAIL_STATIC(0x75bed4u,75b);
}
B45573b:L45573b:{c.instructions+=7;NFSU2_TR(0x45573b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455741:{NFSU2_TR(0x455741);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455745:{NFSU2_TR(0x455745);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B45574b:{NFSU2_TR(0x45574b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B455751:{NFSU2_TR(0x455751);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B455753:{NFSU2_TR(0x455753);
u8 U[13];
w4(U+0,u32(u32(u32(0x212ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B45575a:{NFSU2_TR(0x45575a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45575full));
TAIL_STATIC(0x75bed4u,75b);
}
B45575f:L45575f:{c.instructions+=8;NFSU2_TR(0x45575f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455765:{NFSU2_TR(0x455765);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455769:{NFSU2_TR(0x455769);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B45576f:{NFSU2_TR(0x45576f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B455775:{NFSU2_TR(0x455775);
u8 U[12];
w4(U+0,u32(u32(u32(0xb1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45577c:{NFSU2_TR(0x45577c);
u8 U[12];
w4(U+0,u32(u32(u32(0x162ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B455783:{NFSU2_TR(0x455783);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B455786:{NFSU2_TR(0x455786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x45578bull));
TAIL_STATIC(0x75bed4u,75b);
}
B45578b:L45578b:{c.instructions+=7;NFSU2_TR(0x45578b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455791:{NFSU2_TR(0x455791);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B455797:{NFSU2_TR(0x455797);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B455799:{NFSU2_TR(0x455799);
u8 U[13];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4557a0:{NFSU2_TR(0x4557a0);
{u32 ea_=u32(r4(R+20)+u32(452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4557a6:{NFSU2_TR(0x4557a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4557ac:{NFSU2_TR(0x4557ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4557b1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4557b1:L4557b1:{c.instructions+=7;NFSU2_TR(0x4557b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4557b7:{NFSU2_TR(0x4557b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B4557ba:{NFSU2_TR(0x4557ba);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B4557bc:{NFSU2_TR(0x4557bc);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4557c3:{NFSU2_TR(0x4557c3);
{u32 ea_=u32(r4(R+20)+u32(456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4557c9:{NFSU2_TR(0x4557c9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4557cf:{NFSU2_TR(0x4557cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4557d4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4557d4:L4557d4:{c.instructions+=9;NFSU2_TR(0x4557d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4557da:{NFSU2_TR(0x4557da);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4557dd:{NFSU2_TR(0x4557dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+28)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4557df:{NFSU2_TR(0x4557df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4557e0:{NFSU2_TR(0x4557e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4557e1:{NFSU2_TR(0x4557e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4557e2:{NFSU2_TR(0x4557e2);
u8 U[13];
w4(U+0,u32(u32(u32(0x219ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B4557e9:{NFSU2_TR(0x4557e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4557ea:{NFSU2_TR(0x4557ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4557ed:L4557ed:{c.instructions+=32;NFSU2_TR(0x4557ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4557f3:{NFSU2_TR(0x4557f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B4557f9:{NFSU2_TR(0x4557f9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B4557fb:{NFSU2_TR(0x4557fb);
u8 U[13];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B455802:{NFSU2_TR(0x455802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455808:{NFSU2_TR(0x455808);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B45580e:{NFSU2_TR(0x45580e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B455811:{NFSU2_TR(0x455811);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B455813:{NFSU2_TR(0x455813);
w1(R+8,u8(0x80ull));
}
B455815:{NFSU2_TR(0x455815);
u8 U[13];
w4(U+0,u32(u32(u32(0x212ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B45581c:{NFSU2_TR(0x45581c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B455822:{NFSU2_TR(0x455822);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B455828:{NFSU2_TR(0x455828);
u8 U[12];
w4(U+0,u32(u32(u32(0xb1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B45582f:{NFSU2_TR(0x45582f);
u8 U[12];
w4(U+0,u32(u32(u32(0x162ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B455836:{NFSU2_TR(0x455836);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B455839:{NFSU2_TR(0x455839);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B45583f:{NFSU2_TR(0x45583f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x88ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B455845:{NFSU2_TR(0x455845);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B455847:{NFSU2_TR(0x455847);
u8 U[13];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B45584e:{NFSU2_TR(0x45584e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455854:{NFSU2_TR(0x455854);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B455857:{NFSU2_TR(0x455857);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B455859:{NFSU2_TR(0x455859);
u8 U[13];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B455860:{NFSU2_TR(0x455860);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455866:{NFSU2_TR(0x455866);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x44ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B455869:{NFSU2_TR(0x455869);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B45586b:{NFSU2_TR(0x45586b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B45586c:{NFSU2_TR(0x45586c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B45586d:{NFSU2_TR(0x45586d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B45586e:{NFSU2_TR(0x45586e);
u8 U[13];
w4(U+0,u32(u32(u32(0x219ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x32ull));
s1(u32(r4(U+8)),r1(U+12));
}
B455876:{NFSU2_TR(0x455876);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455877:{NFSU2_TR(0x455877);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B45587a:L45587a:{c.instructions+=3;NFSU2_TR(0x45587a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B45587e:{NFSU2_TR(0x45587e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xdaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B455883:{NFSU2_TR(0x455883);
if(r1(R+518)){{goto L4558e0;}}
}
B455885:L455885:{c.instructions+=2;NFSU2_TR(0x455885);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B455888:{NFSU2_TR(0x455888);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4558f1;}}
}
B45588a:L45588a:{c.instructions+=4;NFSU2_TR(0x45588a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455890:{NFSU2_TR(0x455890);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B455892:{NFSU2_TR(0x455892);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B455894:{NFSU2_TR(0x455894);
if(r1(R+518)){{goto L45589f;}}
}
B455896:L455896:{c.instructions+=2;NFSU2_TR(0x455896);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B455899:{NFSU2_TR(0x455899);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x454cdau,454);}
}
B45589f:L45589f:{c.instructions+=4;NFSU2_TR(0x45589f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4558a5:{NFSU2_TR(0x4558a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4558a6:{NFSU2_TR(0x4558a6);
w4(R+4,u32(0x827b88ull));
}
B4558ab:{NFSU2_TR(0x4558ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4558b0ull));
TAIL_STATIC(0x432490u,432);
}
B4558b0:L4558b0:{c.instructions+=3;NFSU2_TR(0x4558b0);
__builtin_memmove((R+28),(R+0),4);
}
B4558b2:{NFSU2_TR(0x4558b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4558b4:{NFSU2_TR(0x4558b4);
if(r1(R+518)){TAIL_STATIC(0x454cdau,454);}
}
B4558ba:L4558ba:{c.instructions+=2;NFSU2_TR(0x4558ba);
__builtin_memmove((R+4),(R+28),4);
}
B4558bc:{NFSU2_TR(0x4558bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4558c1ull));
TAIL_STATIC(0x4307d0u,430);
}
B4558c1:L4558c1:{c.instructions+=2;NFSU2_TR(0x4558c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4558c3:{NFSU2_TR(0x4558c3);
if(r1(R+518)){TAIL_STATIC(0x454cdau,454);}
}
B4558c9:L4558c9:{c.instructions+=2;NFSU2_TR(0x4558c9);
__builtin_memmove((R+4),(R+28),4);
}
B4558cb:{NFSU2_TR(0x4558cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4558d0ull));
TAIL_STATIC(0x439120u,439);
}
B4558d0:L4558d0:{c.instructions+=3;NFSU2_TR(0x4558d0);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4558d2:{NFSU2_TR(0x4558d2);
__builtin_memmove((R+4),(R+24),4);
}
B4558d4:{NFSU2_TR(0x4558d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4558d9ull));
{goto L455c80;}
}
B4558d9:L4558d9:{c.instructions+=5;NFSU2_TR(0x4558d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4558da:{NFSU2_TR(0x4558da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4558db:{NFSU2_TR(0x4558db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4558dc:{NFSU2_TR(0x4558dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4558dd:{NFSU2_TR(0x4558dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4558e0:L4558e0:{c.instructions+=4;NFSU2_TR(0x4558e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4558e6:{NFSU2_TR(0x4558e6);
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
B4558e8:{NFSU2_TR(0x4558e8);
__builtin_memmove((R+8),(R+518),1);
}
B4558eb:{NFSU2_TR(0x4558eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4558f1:L4558f1:{c.instructions+=5;NFSU2_TR(0x4558f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4558f2:{NFSU2_TR(0x4558f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4558f3:{NFSU2_TR(0x4558f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4558f4:{NFSU2_TR(0x4558f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4558f5:{NFSU2_TR(0x4558f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455af0:L455af0:{c.instructions+=8;NFSU2_TR(0x455af0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455af4:{NFSU2_TR(0x455af4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455af8:{NFSU2_TR(0x455af8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455afc:{NFSU2_TR(0x455afc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455afd:{NFSU2_TR(0x455afd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455afe:{NFSU2_TR(0x455afe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455aff:{NFSU2_TR(0x455aff);
w4(R+4,u32(0x828770ull));
}
B455b04:{NFSU2_TR(0x455b04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455b09ull));
TAIL_STATIC(0x454970u,454);
}
B455b09:L455b09:{c.instructions+=1;NFSU2_TR(0x455b09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455b10:L455b10:{c.instructions+=15;NFSU2_TR(0x455b10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b11:{NFSU2_TR(0x455b11);
__builtin_memmove((R+20),(R+16),4);
}
B455b13:{NFSU2_TR(0x455b13);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b15:{NFSU2_TR(0x455b15);
u8 U[4];
w4(U+0,u32(0x772068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b1a:{NFSU2_TR(0x455b1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455b20:{NFSU2_TR(0x455b20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b21:{NFSU2_TR(0x455b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b28:{NFSU2_TR(0x455b28);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b29:{NFSU2_TR(0x455b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455b2c:{NFSU2_TR(0x455b2c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b2d:{NFSU2_TR(0x455b2d);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b2f:{NFSU2_TR(0x455b2f);
__builtin_memmove((R+24),(R+4),4);
}
B455b31:{NFSU2_TR(0x455b31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455b32:{NFSU2_TR(0x455b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b35:{NFSU2_TR(0x455b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455b3aull));
TAIL_STATIC(0x44ab90u,44a);
}
B455b3a:L455b3a:{c.instructions+=33;NFSU2_TR(0x455b3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455b3d:{NFSU2_TR(0x455b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b40:{NFSU2_TR(0x455b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455b43:{NFSU2_TR(0x455b43);
u8 U[4];
w4(U+0,u32(0x787e88ull));
s4(u32(r4(R+24)),r4(U+0));
}
B455b49:{NFSU2_TR(0x455b49);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B455b4b:{NFSU2_TR(0x455b4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b4e:{NFSU2_TR(0x455b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b51:{NFSU2_TR(0x455b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b54:{NFSU2_TR(0x455b54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b57:{NFSU2_TR(0x455b57);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B455b5b:{NFSU2_TR(0x455b5b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B455b5f:{NFSU2_TR(0x455b5f);
__builtin_memmove(gp(0x828668),(R+0),4);
}
B455b64:{NFSU2_TR(0x455b64);
__builtin_memmove(gp(0x82866c),(R+0),4);
}
B455b69:{NFSU2_TR(0x455b69);
__builtin_memmove(gp(0x828670),(R+0),4);
}
B455b6e:{NFSU2_TR(0x455b6e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455b71:{NFSU2_TR(0x455b71);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455b74:{NFSU2_TR(0x455b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B455b76:{NFSU2_TR(0x455b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455b79:{NFSU2_TR(0x455b79);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B455b7b:{NFSU2_TR(0x455b7b);
{u32 ea_=u32(u32(8307924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455b81:{NFSU2_TR(0x455b81);
__builtin_memmove(gp(0x7ec4d0),(R+8),4);
}
B455b87:{NFSU2_TR(0x455b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455b8a:{NFSU2_TR(0x455b8a);
{u32 ea_=u32(u32(8307928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455b90:{NFSU2_TR(0x455b90);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455b93:{NFSU2_TR(0x455b93);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455b96:{NFSU2_TR(0x455b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B455b98:{NFSU2_TR(0x455b98);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B455b9a:{NFSU2_TR(0x455b9a);
__builtin_memmove(gp(0x8286a0),(R+4),4);
}
B455ba0:{NFSU2_TR(0x455ba0);
{u32 ea_=u32(u32(8554148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455ba6:{NFSU2_TR(0x455ba6);
__builtin_memmove((R+4),(R+24),4);
}
B455ba8:{NFSU2_TR(0x455ba8);
{u32 ea_=u32(u32(8554152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455bae:{NFSU2_TR(0x455bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455bb1:{NFSU2_TR(0x455bb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455bb6ull));
TAIL_STATIC(0x4533f0u,453);
}
B455bb6:L455bb6:{c.instructions+=7;NFSU2_TR(0x455bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455bb9:{NFSU2_TR(0x455bb9);
__builtin_memmove((R+0),(R+24),4);
}
B455bbb:{NFSU2_TR(0x455bbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455bbc:{NFSU2_TR(0x455bbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455bc3:{NFSU2_TR(0x455bc3);
__builtin_memmove((R+16),(R+20),4);
}
B455bc5:{NFSU2_TR(0x455bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B455bc6:{NFSU2_TR(0x455bc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455bd0:L455bd0:{c.instructions+=9;NFSU2_TR(0x455bd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455bd2:{NFSU2_TR(0x455bd2);
u8 U[4];
w4(U+0,u32(0x77222bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455bd7:{NFSU2_TR(0x455bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455bdd:{NFSU2_TR(0x455bdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455bde:{NFSU2_TR(0x455bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455be5:{NFSU2_TR(0x455be5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455be6:{NFSU2_TR(0x455be6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455be7:{NFSU2_TR(0x455be7);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455be9:{NFSU2_TR(0x455be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455beeull));
TAIL_STATIC(0x575620u,575);
}
B455bee:L455bee:{c.instructions+=5;NFSU2_TR(0x455bee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B455bf1:{NFSU2_TR(0x455bf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455bf5:{NFSU2_TR(0x455bf5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B455bf7:{NFSU2_TR(0x455bf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B455bff:{NFSU2_TR(0x455bff);
if(r1(R+518)){{goto L455c28;}}
}
B455c01:L455c01:{c.instructions+=10;NFSU2_TR(0x455c01);
{u32 ea_=u32(u32(7893656u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B455c07:{NFSU2_TR(0x455c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455c0b:{NFSU2_TR(0x455c0b);
{u32 ea_=u32(u32(7893648u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B455c11:{NFSU2_TR(0x455c11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c12:{NFSU2_TR(0x455c12);
__builtin_memmove((R+4),gp(0x787294),4);
}
B455c18:{NFSU2_TR(0x455c18);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B455c1b:{NFSU2_TR(0x455c1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c1c:{NFSU2_TR(0x455c1c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c1d:{NFSU2_TR(0x455c1d);
__builtin_memmove((R+4),(R+0),4);
}
B455c1f:{NFSU2_TR(0x455c1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455c24ull));
TAIL_STATIC(0x454790u,454);
}
B455c24:L455c24:{c.instructions+=2;NFSU2_TR(0x455c24);
__builtin_memmove((R+24),(R+0),4);
}
B455c26:{NFSU2_TR(0x455c26);
{goto L455c2a;}
}
B455c28:L455c28:{c.instructions+=1;NFSU2_TR(0x455c28);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B455c2a:L455c2a:{c.instructions+=4;NFSU2_TR(0x455c2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B455c2c:{NFSU2_TR(0x455c2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B455c2e:{NFSU2_TR(0x455c2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B455c36:{NFSU2_TR(0x455c36);
if(r1(R+518)){{goto L455c4b;}}
}
B455c38:L455c38:{c.instructions+=2;NFSU2_TR(0x455c38);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x4ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B455c3c:{NFSU2_TR(0x455c3c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L455c66;}}
}
B455c3e:L455c3e:{c.instructions+=2;NFSU2_TR(0x455c3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B455c40:{NFSU2_TR(0x455c40);
if(r1(R+518)){{goto L455c4b;}}
}
B455c42:L455c42:{c.instructions+=2;NFSU2_TR(0x455c42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c43:{NFSU2_TR(0x455c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455c48ull));
TAIL_STATIC(0x440540u,440);
}
B455c48:L455c48:{c.instructions+=1;NFSU2_TR(0x455c48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B455c4b:L455c4b:{c.instructions+=2;NFSU2_TR(0x455c4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c4c:{NFSU2_TR(0x455c4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455c51ull));
TAIL_STATIC(0x575630u,575);
}
B455c51:L455c51:{c.instructions+=7;NFSU2_TR(0x455c51);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B455c54:{NFSU2_TR(0x455c54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B455c56:{NFSU2_TR(0x455c56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455c57:{NFSU2_TR(0x455c57);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455c5b:{NFSU2_TR(0x455c5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455c62:{NFSU2_TR(0x455c62);
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
B455c65:{NFSU2_TR(0x455c65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455c66:L455c66:{c.instructions+=6;NFSU2_TR(0x455c66);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455c6a:{NFSU2_TR(0x455c6a);
__builtin_memmove((R+0),(R+24),4);
}
B455c6c:{NFSU2_TR(0x455c6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B455c6d:{NFSU2_TR(0x455c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455c74:{NFSU2_TR(0x455c74);
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
B455c77:{NFSU2_TR(0x455c77);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B455c80:L455c80:{c.instructions+=13;NFSU2_TR(0x455c80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c82:{NFSU2_TR(0x455c82);
u8 U[4];
w4(U+0,u32(0x77222bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c87:{NFSU2_TR(0x455c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455c8d:{NFSU2_TR(0x455c8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c8e:{NFSU2_TR(0x455c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455c95:{NFSU2_TR(0x455c95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c96:{NFSU2_TR(0x455c96);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455c97:{NFSU2_TR(0x455c97);
__builtin_memmove((R+20),(R+4),4);
}
B455c99:{NFSU2_TR(0x455c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455c9f:{NFSU2_TR(0x455c9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ca0:{NFSU2_TR(0x455ca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B455ca4:{NFSU2_TR(0x455ca4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B455ca6:{NFSU2_TR(0x455ca6);
if(r1(R+518)){TAIL_STATIC(0x4568a5u,456);}
}
B455cac:L455cac:{c.instructions+=2;NFSU2_TR(0x455cac);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x8ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B455caf:{NFSU2_TR(0x455caf);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L455cbd;}}
}
B455cb1:L455cb1:{c.instructions+=2;NFSU2_TR(0x455cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455cb7:{NFSU2_TR(0x455cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455cbd:L455cbd:{c.instructions+=5;NFSU2_TR(0x455cbd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B455cc0:{NFSU2_TR(0x455cc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455cc1:{NFSU2_TR(0x455cc1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455cc2:{NFSU2_TR(0x455cc2);
w4(R+12,u32(0x1ull));
}
B455cc7:{NFSU2_TR(0x455cc7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4561dbu,456);}
}
B455ccd:L455ccd:{c.instructions+=1;NFSU2_TR(0x455ccd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4568b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B455cd4:L455cd4:{c.instructions+=3;NFSU2_TR(0x455cd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455cd5:{NFSU2_TR(0x455cd5);
w4(R+4,u32(0x827b88ull));
}
B455cda:{NFSU2_TR(0x455cda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455cdfull));
TAIL_STATIC(0x43b380u,43b);
}
B455cdf:L455cdf:{c.instructions+=1;NFSU2_TR(0x455cdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ce4ull));
TAIL_STATIC(0x437660u,437);
}
B455ce4:L455ce4:{c.instructions+=11;NFSU2_TR(0x455ce4);
__builtin_memmove((R+8),gp(0x890080),4);
}
B455cea:{NFSU2_TR(0x455cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455ced:{NFSU2_TR(0x455ced);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B455cef:{NFSU2_TR(0x455cef);
w4(R+0,u32(0x3f800000ull));
}
B455cf4:{NFSU2_TR(0x455cf4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455cf5:{NFSU2_TR(0x455cf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455cfb:{NFSU2_TR(0x455cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c64ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d01:{NFSU2_TR(0x455d01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d07:{NFSU2_TR(0x455d07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d0d:{NFSU2_TR(0x455d0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c68ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d13:{NFSU2_TR(0x455d13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455d18ull));
TAIL_STATIC(0x5f46a0u,5f4);
}
B455d18:L455d18:{c.instructions+=3;NFSU2_TR(0x455d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B455d1e:{NFSU2_TR(0x455d1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455d21:{NFSU2_TR(0x455d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455d26ull));
TAIL_STATIC(0x5930f0u,593);
}
B455d26:L455d26:{c.instructions+=2;NFSU2_TR(0x455d26);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455d2b:{NFSU2_TR(0x455d2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455d30ull));
TAIL_STATIC(0x575620u,575);
}
B455d30:L455d30:{c.instructions+=3;NFSU2_TR(0x455d30);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455d35:{NFSU2_TR(0x455d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d3b:{NFSU2_TR(0x455d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455d40ull));
TAIL_STATIC(0x575620u,575);
}
B455d40:L455d40:{c.instructions+=3;NFSU2_TR(0x455d40);
u8 U[4];
w4(U+0,u32(0x490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455d45:{NFSU2_TR(0x455d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d4b:{NFSU2_TR(0x455d4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455d50ull));
TAIL_STATIC(0x575620u,575);
}
B455d50:L455d50:{c.instructions+=5;NFSU2_TR(0x455d50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B455d53:{NFSU2_TR(0x455d53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d57:{NFSU2_TR(0x455d57);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B455d59:{NFSU2_TR(0x455d59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d5d:{NFSU2_TR(0x455d5d);
if(r1(R+518)){{goto L455d79;}}
}
B455d5f:L455d5f:{c.instructions+=7;NFSU2_TR(0x455d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B455d65:{NFSU2_TR(0x455d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B455d68:{NFSU2_TR(0x455d68);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5c4ull))));
}
B455d6e:{NFSU2_TR(0x455d6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455d6f:{NFSU2_TR(0x455d6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455d70:{NFSU2_TR(0x455d70);
__builtin_memmove((R+4),(R+0),4);
}
B455d72:{NFSU2_TR(0x455d72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455d77ull));
TAIL_STATIC(0x5a93a0u,5a9);
}
B455d77:L455d77:{c.instructions+=1;NFSU2_TR(0x455d77);
{goto L455d7b;}
}
B455d79:L455d79:{c.instructions+=1;NFSU2_TR(0x455d79);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B455d7b:L455d7b:{c.instructions+=5;NFSU2_TR(0x455d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B455d81:{NFSU2_TR(0x455d81);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B455d84:{NFSU2_TR(0x455d84);
__builtin_memmove((R+28),(R+0),4);
}
B455d86:{NFSU2_TR(0x455d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B455d8c:{NFSU2_TR(0x455d8c);
w4(R+4,u32(0x124ull));
}
B455d91:L455d91:{c.instructions+=1;NFSU2_TR(0x455d91);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L455d93;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455d91u);}goto L455d91;}
}
B455d93:L455d93:{c.instructions+=3;NFSU2_TR(0x455d93);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1c50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B455d99:{NFSU2_TR(0x455d99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B455da1:{NFSU2_TR(0x455da1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L455daa;}}
}
B455da3:L455da3:{c.instructions+=2;NFSU2_TR(0x455da3);
__builtin_memmove((R+4),(R+20),4);
}
B455da5:{NFSU2_TR(0x455da5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455daaull));
TAIL_STATIC(0x44a450u,44a);
}
B455daa:L455daa:{c.instructions+=2;NFSU2_TR(0x455daa);
__builtin_memmove((R+4),(R+20),4);
}
B455dac:{NFSU2_TR(0x455dac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455db1ull));
TAIL_STATIC(0x44a4d0u,44a);
}
B455db1:L455db1:{c.instructions+=2;NFSU2_TR(0x455db1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B455db5:{NFSU2_TR(0x455db5);
TAIL_STATIC(0x4561dbu,456);
}
B455dba:L455dba:{c.instructions+=3;NFSU2_TR(0x455dba);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dbf:{NFSU2_TR(0x455dbf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dc0:{NFSU2_TR(0x455dc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455dc5ull));
TAIL_STATIC(0x57c330u,57c);
}
B455dc5:L455dc5:{c.instructions+=3;NFSU2_TR(0x455dc5);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dca:{NFSU2_TR(0x455dca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dcb:{NFSU2_TR(0x455dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455dd0ull));
TAIL_STATIC(0x57c330u,57c);
}
B455dd0:L455dd0:{c.instructions+=3;NFSU2_TR(0x455dd0);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dd5:{NFSU2_TR(0x455dd5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dd6:{NFSU2_TR(0x455dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ddbull));
TAIL_STATIC(0x57c330u,57c);
}
B455ddb:L455ddb:{c.instructions+=3;NFSU2_TR(0x455ddb);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455de0:{NFSU2_TR(0x455de0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455de1:{NFSU2_TR(0x455de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455de6ull));
TAIL_STATIC(0x57c330u,57c);
}
B455de6:L455de6:{c.instructions+=3;NFSU2_TR(0x455de6);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455deb:{NFSU2_TR(0x455deb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dec:{NFSU2_TR(0x455dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455df1ull));
TAIL_STATIC(0x57c330u,57c);
}
B455df1:L455df1:{c.instructions+=2;NFSU2_TR(0x455df1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B455df4:{NFSU2_TR(0x455df4);
TAIL_STATIC(0x4561dbu,456);
}
B455df9:L455df9:{c.instructions+=3;NFSU2_TR(0x455df9);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dfe:{NFSU2_TR(0x455dfe);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455dff:{NFSU2_TR(0x455dff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e04ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e04:L455e04:{c.instructions+=3;NFSU2_TR(0x455e04);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e09:{NFSU2_TR(0x455e09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e0a:{NFSU2_TR(0x455e0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e0full));
TAIL_STATIC(0x57c330u,57c);
}
B455e0f:L455e0f:{c.instructions+=3;NFSU2_TR(0x455e0f);
u8 U[4];
w4(U+0,u32(0xd7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e14:{NFSU2_TR(0x455e14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e15:{NFSU2_TR(0x455e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e1aull));
TAIL_STATIC(0x57c330u,57c);
}
B455e1a:L455e1a:{c.instructions+=3;NFSU2_TR(0x455e1a);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e1f:{NFSU2_TR(0x455e1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e20:{NFSU2_TR(0x455e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e25ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e25:L455e25:{c.instructions+=3;NFSU2_TR(0x455e25);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e2a:{NFSU2_TR(0x455e2a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e2b:{NFSU2_TR(0x455e2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e30ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e30:L455e30:{c.instructions+=3;NFSU2_TR(0x455e30);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e35:{NFSU2_TR(0x455e35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e36:{NFSU2_TR(0x455e36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e3bull));
TAIL_STATIC(0x57c330u,57c);
}
B455e3b:L455e3b:{c.instructions+=2;NFSU2_TR(0x455e3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B455e3e:{NFSU2_TR(0x455e3e);
TAIL_STATIC(0x4561dbu,456);
}
B455e43:L455e43:{c.instructions+=3;NFSU2_TR(0x455e43);
u8 U[4];
w4(U+0,u32(0xdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e48:{NFSU2_TR(0x455e48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e49:{NFSU2_TR(0x455e49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e4eull));
TAIL_STATIC(0x57c330u,57c);
}
B455e4e:L455e4e:{c.instructions+=3;NFSU2_TR(0x455e4e);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e53:{NFSU2_TR(0x455e53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e54:{NFSU2_TR(0x455e54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e59ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e59:L455e59:{c.instructions+=2;NFSU2_TR(0x455e59);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B455e5c:{NFSU2_TR(0x455e5c);
TAIL_STATIC(0x4561dbu,456);
}
B455e61:L455e61:{c.instructions+=3;NFSU2_TR(0x455e61);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e66:{NFSU2_TR(0x455e66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e67:{NFSU2_TR(0x455e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e6cull));
TAIL_STATIC(0x57c330u,57c);
}
B455e6c:L455e6c:{c.instructions+=3;NFSU2_TR(0x455e6c);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e71:{NFSU2_TR(0x455e71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e72:{NFSU2_TR(0x455e72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e77ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e77:L455e77:{c.instructions+=3;NFSU2_TR(0x455e77);
u8 U[4];
w4(U+0,u32(0xd5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e7c:{NFSU2_TR(0x455e7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e7d:{NFSU2_TR(0x455e7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e82ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e82:L455e82:{c.instructions+=3;NFSU2_TR(0x455e82);
u8 U[4];
w4(U+0,u32(0xd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e87:{NFSU2_TR(0x455e87);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e88:{NFSU2_TR(0x455e88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e8dull));
TAIL_STATIC(0x57c330u,57c);
}
B455e8d:L455e8d:{c.instructions+=3;NFSU2_TR(0x455e8d);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e92:{NFSU2_TR(0x455e92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e93:{NFSU2_TR(0x455e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455e98ull));
TAIL_STATIC(0x57c330u,57c);
}
B455e98:L455e98:{c.instructions+=3;NFSU2_TR(0x455e98);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e9d:{NFSU2_TR(0x455e9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455e9e:{NFSU2_TR(0x455e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ea3ull));
TAIL_STATIC(0x57c330u,57c);
}
B455ea3:L455ea3:{c.instructions+=3;NFSU2_TR(0x455ea3);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ea8:{NFSU2_TR(0x455ea8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ea9:{NFSU2_TR(0x455ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455eaeull));
TAIL_STATIC(0x57c330u,57c);
}
B455eae:L455eae:{c.instructions+=3;NFSU2_TR(0x455eae);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455eb3:{NFSU2_TR(0x455eb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455eb4:{NFSU2_TR(0x455eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455eb9ull));
TAIL_STATIC(0x57c330u,57c);
}
B455eb9:L455eb9:{c.instructions+=4;NFSU2_TR(0x455eb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B455ebc:{NFSU2_TR(0x455ebc);
u8 U[4];
w4(U+0,u32(0xdeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ec1:{NFSU2_TR(0x455ec1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ec2:{NFSU2_TR(0x455ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ec7ull));
TAIL_STATIC(0x57c330u,57c);
}
B455ec7:L455ec7:{c.instructions+=3;NFSU2_TR(0x455ec7);
u8 U[4];
w4(U+0,u32(0xddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ecc:{NFSU2_TR(0x455ecc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ecd:{NFSU2_TR(0x455ecd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ed2ull));
TAIL_STATIC(0x57c330u,57c);
}
B455ed2:L455ed2:{c.instructions+=3;NFSU2_TR(0x455ed2);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ed7:{NFSU2_TR(0x455ed7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ed8:{NFSU2_TR(0x455ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455eddull));
TAIL_STATIC(0x57c330u,57c);
}
B455edd:L455edd:{c.instructions+=3;NFSU2_TR(0x455edd);
u8 U[4];
w4(U+0,u32(0xdaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ee2:{NFSU2_TR(0x455ee2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ee3:{NFSU2_TR(0x455ee3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ee8ull));
TAIL_STATIC(0x57c330u,57c);
}
B455ee8:L455ee8:{c.instructions+=3;NFSU2_TR(0x455ee8);
u8 U[4];
w4(U+0,u32(0xdfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455eed:{NFSU2_TR(0x455eed);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455eee:{NFSU2_TR(0x455eee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ef3ull));
TAIL_STATIC(0x57c330u,57c);
}
B455ef3:L455ef3:{c.instructions+=3;NFSU2_TR(0x455ef3);
u8 U[4];
w4(U+0,u32(0xdbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ef8:{NFSU2_TR(0x455ef8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ef9:{NFSU2_TR(0x455ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455efeull));
TAIL_STATIC(0x57c330u,57c);
}
B455efe:L455efe:{c.instructions+=3;NFSU2_TR(0x455efe);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f03:{NFSU2_TR(0x455f03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f04:{NFSU2_TR(0x455f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f09ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f09:L455f09:{c.instructions+=3;NFSU2_TR(0x455f09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B455f0c:{NFSU2_TR(0x455f0c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B455f0f:{NFSU2_TR(0x455f0f);
if(r1(R+518)){TAIL_STATIC(0x4561dbu,456);}
}
B455f15:L455f15:{c.instructions+=2;NFSU2_TR(0x455f15);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cd5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B455f1b:{NFSU2_TR(0x455f1b);
TAIL_STATIC(0x4561dbu,456);
}
B455f20:L455f20:{c.instructions+=2;NFSU2_TR(0x455f20);
__builtin_memmove((R+4),(R+20),4);
}
B455f22:{NFSU2_TR(0x455f22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f27ull));
TAIL_STATIC(0x44a1b0u,44a);
}
B455f27:L455f27:{c.instructions+=1;NFSU2_TR(0x455f27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f2cull));
TAIL_STATIC(0x44a3a0u,44a);
}
B455f2c:L455f2c:{c.instructions+=3;NFSU2_TR(0x455f2c);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f31:{NFSU2_TR(0x455f31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f32:{NFSU2_TR(0x455f32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f37ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f37:L455f37:{c.instructions+=3;NFSU2_TR(0x455f37);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f3c:{NFSU2_TR(0x455f3c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f3d:{NFSU2_TR(0x455f3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f42ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f42:L455f42:{c.instructions+=1;NFSU2_TR(0x455f42);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f47:L455f47:{c.instructions+=2;NFSU2_TR(0x455f47);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f48:{NFSU2_TR(0x455f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f4dull));
TAIL_STATIC(0x57c330u,57c);
}
B455f4d:L455f4d:{c.instructions+=3;NFSU2_TR(0x455f4d);
u8 U[4];
w4(U+0,u32(0xddull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f52:{NFSU2_TR(0x455f52);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f53:{NFSU2_TR(0x455f53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f58ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f58:L455f58:{c.instructions+=3;NFSU2_TR(0x455f58);
u8 U[4];
w4(U+0,u32(0xe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f5d:{NFSU2_TR(0x455f5d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f5e:{NFSU2_TR(0x455f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f63ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f63:L455f63:{c.instructions+=3;NFSU2_TR(0x455f63);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f68:{NFSU2_TR(0x455f68);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f69:{NFSU2_TR(0x455f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f6eull));
TAIL_STATIC(0x57c330u,57c);
}
B455f6e:L455f6e:{c.instructions+=3;NFSU2_TR(0x455f6e);
u8 U[4];
w4(U+0,u32(0xe3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f73:{NFSU2_TR(0x455f73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f74:{NFSU2_TR(0x455f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f79ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f79:L455f79:{c.instructions+=3;NFSU2_TR(0x455f79);
u8 U[4];
w4(U+0,u32(0xd9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f7e:{NFSU2_TR(0x455f7e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f7f:{NFSU2_TR(0x455f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f84ull));
TAIL_STATIC(0x57c330u,57c);
}
B455f84:L455f84:{c.instructions+=2;NFSU2_TR(0x455f84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B455f87:{NFSU2_TR(0x455f87);
TAIL_STATIC(0x4561dbu,456);
}
B455f8c:L455f8c:{c.instructions+=2;NFSU2_TR(0x455f8c);
__builtin_memmove((R+4),(R+20),4);
}
B455f8e:{NFSU2_TR(0x455f8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f93ull));
TAIL_STATIC(0x44a1b0u,44a);
}
B455f93:L455f93:{c.instructions+=1;NFSU2_TR(0x455f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455f98ull));
TAIL_STATIC(0x44a3a0u,44a);
}
B455f98:L455f98:{c.instructions+=3;NFSU2_TR(0x455f98);
u8 U[4];
w4(U+0,u32(0xf7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f9d:{NFSU2_TR(0x455f9d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455f9e:{NFSU2_TR(0x455f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455fa3ull));
TAIL_STATIC(0x57c330u,57c);
}
B455fa3:L455fa3:{c.instructions+=3;NFSU2_TR(0x455fa3);
u8 U[4];
w4(U+0,u32(0xf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fa8:{NFSU2_TR(0x455fa8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fa9:{NFSU2_TR(0x455fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455faeull));
TAIL_STATIC(0x57c330u,57c);
}
B455fae:L455fae:{c.instructions+=2;NFSU2_TR(0x455fae);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fb3:{NFSU2_TR(0x455fb3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x455f47u);}goto L455f47;}
}
B455fb5:L455fb5:{c.instructions+=2;NFSU2_TR(0x455fb5);
__builtin_memmove((R+4),(R+20),4);
}
B455fb7:{NFSU2_TR(0x455fb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455fbcull));
TAIL_STATIC(0x44a310u,44a);
}
B455fbc:L455fbc:{c.instructions+=3;NFSU2_TR(0x455fbc);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fc1:{NFSU2_TR(0x455fc1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fc2:{NFSU2_TR(0x455fc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455fc7ull));
TAIL_STATIC(0x5794e0u,579);
}
B455fc7:L455fc7:{c.instructions+=3;NFSU2_TR(0x455fc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B455fca:{NFSU2_TR(0x455fca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B455fcc:{NFSU2_TR(0x455fcc);
if(r1(R+518)){{goto L455fdc;}}
}
B455fce:L455fce:{c.instructions+=3;NFSU2_TR(0x455fce);
u8 U[4];
w4(U+0,u32(0xd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fd3:{NFSU2_TR(0x455fd3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fd4:{NFSU2_TR(0x455fd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455fd9ull));
TAIL_STATIC(0x57c330u,57c);
}
B455fd9:L455fd9:{c.instructions+=1;NFSU2_TR(0x455fd9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B455fdc:L455fdc:{c.instructions+=3;NFSU2_TR(0x455fdc);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fe1:{NFSU2_TR(0x455fe1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455fe2:{NFSU2_TR(0x455fe2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455fe7ull));
TAIL_STATIC(0x5794e0u,579);
}
B455fe7:L455fe7:{c.instructions+=3;NFSU2_TR(0x455fe7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B455fea:{NFSU2_TR(0x455fea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B455fec:{NFSU2_TR(0x455fec);
if(r1(R+518)){{goto L455ffc;}}
}
B455fee:L455fee:{c.instructions+=3;NFSU2_TR(0x455fee);
u8 U[4];
w4(U+0,u32(0xd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ff3:{NFSU2_TR(0x455ff3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B455ff4:{NFSU2_TR(0x455ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x455ff9ull));
TAIL_STATIC(0x57c330u,57c);
}
B455ff9:L455ff9:{c.instructions+=1;NFSU2_TR(0x455ff9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B455ffc:L455ffc:{c.instructions+=1;NFSU2_TR(0x455ffc);
u8 U[4];
w4(U+0,u32(0xe2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x456001u,456);
}
XIT:NFSU2_TR_EXIT(0x455,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
