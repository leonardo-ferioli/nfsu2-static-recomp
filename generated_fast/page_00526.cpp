#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_581(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_59a(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_601(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_639(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x526,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x526,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_526(u8* __restrict R,Cpu& c);
u32 page_526(Cpu& c){return body_526(c.regs.data(),c);}
__attribute__((noinline)) u32 body_526(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x526005:goto L526005;
case 0x526007:goto L526007;
case 0x526009:c.instructions+=2;goto B526009;
case 0x52600d:c.instructions+=1;goto B52600d;
case 0x526012:goto L526012;
case 0x526016:c.instructions+=9;goto B526016;
case 0x526018:c.instructions+=8;goto B526018;
case 0x52601a:c.instructions+=7;goto B52601a;
case 0x52601b:c.instructions+=6;goto B52601b;
case 0x52601f:c.instructions+=5;goto B52601f;
case 0x526020:c.instructions+=4;goto B526020;
case 0x526022:c.instructions+=3;goto B526022;
case 0x526023:c.instructions+=2;goto B526023;
case 0x52602a:c.instructions+=1;goto B52602a;
case 0x52602f:goto L52602f;
case 0x526036:c.instructions+=5;goto B526036;
case 0x526037:c.instructions+=4;goto B526037;
case 0x52603c:c.instructions+=3;goto B52603c;
case 0x526044:c.instructions+=2;goto B526044;
case 0x52604f:c.instructions+=1;goto B52604f;
case 0x526054:goto L526054;
case 0x52605b:c.instructions+=2;goto B52605b;
case 0x526063:c.instructions+=1;goto B526063;
case 0x526068:goto L526068;
case 0x52606f:c.instructions+=2;goto B52606f;
case 0x52607a:c.instructions+=1;goto B52607a;
case 0x52607f:goto L52607f;
case 0x526082:c.instructions+=6;goto B526082;
case 0x526083:c.instructions+=5;goto B526083;
case 0x526089:c.instructions+=4;goto B526089;
case 0x52608c:c.instructions+=3;goto B52608c;
case 0x52608e:c.instructions+=2;goto B52608e;
case 0x526092:c.instructions+=1;goto B526092;
case 0x526098:goto L526098;
case 0x52609f:c.instructions+=7;goto B52609f;
case 0x5260a0:c.instructions+=6;goto B5260a0;
case 0x5260a1:c.instructions+=5;goto B5260a1;
case 0x5260a8:c.instructions+=4;goto B5260a8;
case 0x5260a9:c.instructions+=3;goto B5260a9;
case 0x5260ab:c.instructions+=2;goto B5260ab;
case 0x5260ac:c.instructions+=1;goto B5260ac;
case 0x5260b0:goto L5260b0;
case 0x5260b1:c.instructions+=10;goto B5260b1;
case 0x5260b3:c.instructions+=9;goto B5260b3;
case 0x5260b6:c.instructions+=8;goto B5260b6;
case 0x5260b8:c.instructions+=7;goto B5260b8;
case 0x5260bd:c.instructions+=6;goto B5260bd;
case 0x5260c3:c.instructions+=5;goto B5260c3;
case 0x5260c4:c.instructions+=4;goto B5260c4;
case 0x5260cb:c.instructions+=3;goto B5260cb;
case 0x5260cc:c.instructions+=2;goto B5260cc;
case 0x5260d1:c.instructions+=1;goto B5260d1;
case 0x5260d6:goto L5260d6;
case 0x5260d7:c.instructions+=8;goto B5260d7;
case 0x5260d8:c.instructions+=7;goto B5260d8;
case 0x5260db:c.instructions+=6;goto B5260db;
case 0x5260df:c.instructions+=5;goto B5260df;
case 0x5260e0:c.instructions+=4;goto B5260e0;
case 0x5260e2:c.instructions+=3;goto B5260e2;
case 0x5260e7:c.instructions+=2;goto B5260e7;
case 0x5260ec:c.instructions+=1;goto B5260ec;
case 0x5260f1:goto L5260f1;
case 0x5260f4:c.instructions+=3;goto B5260f4;
case 0x5260f8:c.instructions+=2;goto B5260f8;
case 0x5260fc:c.instructions+=1;goto B5260fc;
case 0x526101:goto L526101;
case 0x526103:c.instructions+=6;goto B526103;
case 0x526105:c.instructions+=5;goto B526105;
case 0x526107:c.instructions+=4;goto B526107;
case 0x526109:c.instructions+=3;goto B526109;
case 0x52610d:c.instructions+=2;goto B52610d;
case 0x526118:c.instructions+=1;goto B526118;
case 0x52611d:goto L52611d;
case 0x526120:c.instructions+=3;goto B526120;
case 0x526122:c.instructions+=2;goto B526122;
case 0x52612d:c.instructions+=1;goto B52612d;
case 0x526133:goto L526133;
case 0x526138:c.instructions+=2;goto B526138;
case 0x52613b:c.instructions+=1;goto B52613b;
case 0x526140:goto L526140;
case 0x526144:c.instructions+=4;goto B526144;
case 0x526149:c.instructions+=3;goto B526149;
case 0x52614b:c.instructions+=2;goto B52614b;
case 0x52614e:c.instructions+=1;goto B52614e;
case 0x526153:goto L526153;
case 0x526157:c.instructions+=3;goto B526157;
case 0x526159:c.instructions+=2;goto B526159;
case 0x52615b:c.instructions+=1;goto B52615b;
case 0x52615d:goto L52615d;
case 0x526161:c.instructions+=3;goto B526161;
case 0x526165:c.instructions+=2;goto B526165;
case 0x526169:c.instructions+=1;goto B526169;
case 0x52616b:goto L52616b;
case 0x52616d:c.instructions+=1;goto B52616d;
case 0x52616f:goto L52616f;
case 0x526175:c.instructions+=3;goto B526175;
case 0x52617b:c.instructions+=2;goto B52617b;
case 0x526181:c.instructions+=1;goto B526181;
case 0x526186:goto L526186;
case 0x52618a:goto L52618a;
case 0x52618d:c.instructions+=3;goto B52618d;
case 0x526192:c.instructions+=2;goto B526192;
case 0x526197:c.instructions+=1;goto B526197;
case 0x52619c:goto L52619c;
case 0x52619f:c.instructions+=2;goto B52619f;
case 0x5261a1:c.instructions+=1;goto B5261a1;
case 0x5261a3:goto L5261a3;
case 0x5261a7:c.instructions+=13;goto B5261a7;
case 0x5261aa:c.instructions+=12;goto B5261aa;
case 0x5261ae:c.instructions+=11;goto B5261ae;
case 0x5261af:c.instructions+=10;goto B5261af;
case 0x5261b0:c.instructions+=9;goto B5261b0;
case 0x5261b1:c.instructions+=8;goto B5261b1;
case 0x5261b3:c.instructions+=7;goto B5261b3;
case 0x5261b4:c.instructions+=6;goto B5261b4;
case 0x5261b7:c.instructions+=5;goto B5261b7;
case 0x5261b8:c.instructions+=4;goto B5261b8;
case 0x5261bc:c.instructions+=3;goto B5261bc;
case 0x5261bd:c.instructions+=2;goto B5261bd;
case 0x5261c2:c.instructions+=1;goto B5261c2;
case 0x5261c7:goto L5261c7;
case 0x5261ca:c.instructions+=1;goto B5261ca;
case 0x5261cc:goto L5261cc;
case 0x5261cd:c.instructions+=2;goto B5261cd;
case 0x5261d1:c.instructions+=1;goto B5261d1;
case 0x5261d6:goto L5261d6;
case 0x5261d7:c.instructions+=2;goto B5261d7;
case 0x5261db:c.instructions+=1;goto B5261db;
case 0x5261e0:goto L5261e0;
case 0x5261e6:c.instructions+=10;goto B5261e6;
case 0x5261eb:c.instructions+=9;goto B5261eb;
case 0x5261ef:c.instructions+=8;goto B5261ef;
case 0x5261f3:c.instructions+=7;goto B5261f3;
case 0x5261f7:c.instructions+=6;goto B5261f7;
case 0x5261fd:c.instructions+=5;goto B5261fd;
case 0x526201:c.instructions+=4;goto B526201;
case 0x526203:c.instructions+=3;goto B526203;
case 0x526205:c.instructions+=2;goto B526205;
case 0x526207:c.instructions+=1;goto B526207;
case 0x526209:goto L526209;
case 0x52620e:c.instructions+=2;goto B52620e;
case 0x526210:c.instructions+=1;goto B526210;
case 0x526212:goto L526212;
case 0x526217:c.instructions+=2;goto B526217;
case 0x526219:c.instructions+=1;goto B526219;
case 0x52621b:goto L52621b;
case 0x52621d:c.instructions+=1;goto B52621d;
case 0x52621f:goto L52621f;
case 0x526224:goto L526224;
case 0x526226:c.instructions+=8;goto B526226;
case 0x52622a:c.instructions+=7;goto B52622a;
case 0x52622d:c.instructions+=6;goto B52622d;
case 0x526230:c.instructions+=5;goto B526230;
case 0x526231:c.instructions+=4;goto B526231;
case 0x526233:c.instructions+=3;goto B526233;
case 0x526234:c.instructions+=2;goto B526234;
case 0x526238:c.instructions+=1;goto B526238;
case 0x52623d:goto L52623d;
case 0x526241:c.instructions+=2;goto B526241;
case 0x526244:c.instructions+=1;goto B526244;
case 0x526249:goto L526249;
case 0x52624d:c.instructions+=1;goto B52624d;
case 0x526252:goto L526252;
case 0x526254:c.instructions+=1;goto B526254;
case 0x52625a:goto L52625a;
case 0x52625c:c.instructions+=2;goto B52625c;
case 0x526264:c.instructions+=1;goto B526264;
case 0x526266:goto L526266;
case 0x52626c:c.instructions+=3;goto B52626c;
case 0x526272:c.instructions+=2;goto B526272;
case 0x526278:c.instructions+=1;goto B526278;
case 0x52627d:goto L52627d;
case 0x526283:c.instructions+=1;goto B526283;
case 0x526285:goto L526285;
case 0x526287:c.instructions+=1;goto B526287;
case 0x526289:goto L526289;
case 0x52628d:c.instructions+=2;goto B52628d;
case 0x526291:c.instructions+=1;goto B526291;
case 0x526295:goto L526295;
case 0x526299:goto L526299;
case 0x52629d:c.instructions+=7;goto B52629d;
case 0x5262a1:c.instructions+=6;goto B5262a1;
case 0x5262a2:c.instructions+=5;goto B5262a2;
case 0x5262a4:c.instructions+=4;goto B5262a4;
case 0x5262a8:c.instructions+=3;goto B5262a8;
case 0x5262a9:c.instructions+=2;goto B5262a9;
case 0x5262aa:c.instructions+=1;goto B5262aa;
case 0x5262af:goto L5262af;
case 0x5262b3:c.instructions+=5;goto B5262b3;
case 0x5262b9:c.instructions+=4;goto B5262b9;
case 0x5262bc:c.instructions+=3;goto B5262bc;
case 0x5262be:c.instructions+=2;goto B5262be;
case 0x5262c1:c.instructions+=1;goto B5262c1;
case 0x5262c7:goto L5262c7;
case 0x5262cb:c.instructions+=5;goto B5262cb;
case 0x5262d1:c.instructions+=4;goto B5262d1;
case 0x5262d5:c.instructions+=3;goto B5262d5;
case 0x5262d7:c.instructions+=2;goto B5262d7;
case 0x5262da:c.instructions+=1;goto B5262da;
case 0x5262dc:goto L5262dc;
case 0x5262de:c.instructions+=1;goto B5262de;
case 0x5262e4:goto L5262e4;
case 0x5262ea:c.instructions+=10;goto B5262ea;
case 0x5262ef:c.instructions+=9;goto B5262ef;
case 0x5262f1:c.instructions+=8;goto B5262f1;
case 0x5262f5:c.instructions+=7;goto B5262f5;
case 0x5262f9:c.instructions+=6;goto B5262f9;
case 0x526301:c.instructions+=5;goto B526301;
case 0x526303:c.instructions+=4;goto B526303;
case 0x526307:c.instructions+=3;goto B526307;
case 0x52630b:c.instructions+=2;goto B52630b;
case 0x52630d:c.instructions+=1;goto B52630d;
case 0x52630f:goto L52630f;
case 0x526314:c.instructions+=2;goto B526314;
case 0x526316:c.instructions+=1;goto B526316;
case 0x526318:goto L526318;
case 0x52631d:goto L52631d;
case 0x526320:c.instructions+=2;goto B526320;
case 0x526324:c.instructions+=1;goto B526324;
case 0x526329:goto L526329;
case 0x52632c:c.instructions+=5;goto B52632c;
case 0x526330:c.instructions+=4;goto B526330;
case 0x526336:c.instructions+=3;goto B526336;
case 0x526338:c.instructions+=2;goto B526338;
case 0x52633b:c.instructions+=1;goto B52633b;
case 0x526341:goto L526341;
case 0x526345:c.instructions+=5;goto B526345;
case 0x52634b:c.instructions+=4;goto B52634b;
case 0x52634f:c.instructions+=3;goto B52634f;
case 0x526351:c.instructions+=2;goto B526351;
case 0x526354:c.instructions+=1;goto B526354;
case 0x526356:goto L526356;
case 0x526358:c.instructions+=1;goto B526358;
case 0x52635e:goto L52635e;
case 0x526364:c.instructions+=7;goto B526364;
case 0x526368:c.instructions+=6;goto B526368;
case 0x52636a:c.instructions+=5;goto B52636a;
case 0x52636c:c.instructions+=4;goto B52636c;
case 0x52636e:c.instructions+=3;goto B52636e;
case 0x526372:c.instructions+=2;goto B526372;
case 0x526374:c.instructions+=1;goto B526374;
case 0x526376:goto L526376;
case 0x52637a:c.instructions+=6;goto B52637a;
case 0x52637e:c.instructions+=5;goto B52637e;
case 0x52637f:c.instructions+=4;goto B52637f;
case 0x526381:c.instructions+=3;goto B526381;
case 0x526382:c.instructions+=2;goto B526382;
case 0x526386:c.instructions+=1;goto B526386;
case 0x52638b:goto L52638b;
case 0x52638f:c.instructions+=3;goto B52638f;
case 0x526391:c.instructions+=2;goto B526391;
case 0x526392:c.instructions+=1;goto B526392;
case 0x526397:goto L526397;
case 0x52639b:c.instructions+=5;goto B52639b;
case 0x52639e:c.instructions+=4;goto B52639e;
case 0x5263a0:c.instructions+=3;goto B5263a0;
case 0x5263a4:c.instructions+=2;goto B5263a4;
case 0x5263ac:c.instructions+=1;goto B5263ac;
case 0x5263b1:goto L5263b1;
case 0x5263b3:c.instructions+=1;goto B5263b3;
case 0x5263b8:goto L5263b8;
case 0x5263bc:c.instructions+=7;goto B5263bc;
case 0x5263c0:c.instructions+=6;goto B5263c0;
case 0x5263c2:c.instructions+=5;goto B5263c2;
case 0x5263c6:c.instructions+=4;goto B5263c6;
case 0x5263c7:c.instructions+=3;goto B5263c7;
case 0x5263c8:c.instructions+=2;goto B5263c8;
case 0x5263cc:c.instructions+=1;goto B5263cc;
case 0x5263d1:goto L5263d1;
case 0x5263d3:c.instructions+=1;goto B5263d3;
case 0x5263d8:goto L5263d8;
case 0x5263da:goto L5263da;
case 0x5263de:c.instructions+=4;goto B5263de;
case 0x5263df:c.instructions+=3;goto B5263df;
case 0x5263e1:c.instructions+=2;goto B5263e1;
case 0x5263e5:c.instructions+=1;goto B5263e5;
case 0x5263ea:goto L5263ea;
case 0x5263ef:c.instructions+=11;goto B5263ef;
case 0x5263f3:c.instructions+=10;goto B5263f3;
case 0x5263f4:c.instructions+=9;goto B5263f4;
case 0x5263f5:c.instructions+=8;goto B5263f5;
case 0x5263f6:c.instructions+=7;goto B5263f6;
case 0x5263fa:c.instructions+=6;goto B5263fa;
case 0x5263fb:c.instructions+=5;goto B5263fb;
case 0x5263fd:c.instructions+=4;goto B5263fd;
case 0x526400:c.instructions+=3;goto B526400;
case 0x526401:c.instructions+=2;goto B526401;
case 0x526408:c.instructions+=1;goto B526408;
case 0x52640d:goto L52640d;
case 0x526414:c.instructions+=4;goto B526414;
case 0x526415:c.instructions+=3;goto B526415;
case 0x52641a:c.instructions+=2;goto B52641a;
case 0x526422:c.instructions+=1;goto B526422;
case 0x526427:goto L526427;
case 0x52642e:c.instructions+=2;goto B52642e;
case 0x526436:c.instructions+=1;goto B526436;
case 0x52643b:goto L52643b;
case 0x52643e:c.instructions+=6;goto B52643e;
case 0x526442:c.instructions+=5;goto B526442;
case 0x526445:c.instructions+=4;goto B526445;
case 0x526446:c.instructions+=3;goto B526446;
case 0x526449:c.instructions+=2;goto B526449;
case 0x52644b:c.instructions+=1;goto B52644b;
case 0x526451:goto L526451;
case 0x526458:c.instructions+=2;goto B526458;
case 0x526463:c.instructions+=1;goto B526463;
case 0x526468:goto L526468;
case 0x52646f:c.instructions+=7;goto B52646f;
case 0x526470:c.instructions+=6;goto B526470;
case 0x526471:c.instructions+=5;goto B526471;
case 0x526478:c.instructions+=4;goto B526478;
case 0x526479:c.instructions+=3;goto B526479;
case 0x52647b:c.instructions+=2;goto B52647b;
case 0x52647c:c.instructions+=1;goto B52647c;
case 0x52647d:goto L52647d;
case 0x526483:c.instructions+=1;goto B526483;
case 0x526488:goto L526488;
case 0x52648e:c.instructions+=1;goto B52648e;
case 0x5264a0:goto L5264a0;
case 0x5264a1:c.instructions+=11;goto B5264a1;
case 0x5264a3:c.instructions+=10;goto B5264a3;
case 0x5264a6:c.instructions+=9;goto B5264a6;
case 0x5264a7:c.instructions+=8;goto B5264a7;
case 0x5264a8:c.instructions+=7;goto B5264a8;
case 0x5264a9:c.instructions+=6;goto B5264a9;
case 0x5264af:c.instructions+=5;goto B5264af;
case 0x5264b1:c.instructions+=4;goto B5264b1;
case 0x5264b3:c.instructions+=3;goto B5264b3;
case 0x5264b6:c.instructions+=2;goto B5264b6;
case 0x5264b9:c.instructions+=1;goto B5264b9;
case 0x5264bb:goto L5264bb;
case 0x5264c0:c.instructions+=2;goto B5264c0;
case 0x5264c3:c.instructions+=1;goto B5264c3;
case 0x5264c5:goto L5264c5;
case 0x5264c8:c.instructions+=1;goto B5264c8;
case 0x5264ca:goto L5264ca;
case 0x5264cb:goto L5264cb;
case 0x5264d0:c.instructions+=2;goto B5264d0;
case 0x5264d1:c.instructions+=1;goto B5264d1;
case 0x5264d3:goto L5264d3;
case 0x5264d6:goto L5264d6;
case 0x5264d9:c.instructions+=4;goto B5264d9;
case 0x5264de:c.instructions+=3;goto B5264de;
case 0x5264e0:c.instructions+=2;goto B5264e0;
case 0x5264e5:c.instructions+=1;goto B5264e5;
case 0x5264e7:goto L5264e7;
case 0x5264e9:goto L5264e9;
case 0x5264ec:c.instructions+=1;goto B5264ec;
case 0x5264ee:goto L5264ee;
case 0x5264f0:c.instructions+=1;goto B5264f0;
case 0x5264f5:goto L5264f5;
case 0x5264f7:c.instructions+=2;goto B5264f7;
case 0x5264fc:c.instructions+=1;goto B5264fc;
case 0x5264fe:goto L5264fe;
case 0x526500:c.instructions+=1;goto B526500;
case 0x526502:goto L526502;
case 0x526508:c.instructions+=2;goto B526508;
case 0x52650c:c.instructions+=1;goto B52650c;
case 0x52650e:goto L52650e;
case 0x526512:c.instructions+=1;goto B526512;
case 0x526513:goto L526513;
case 0x526518:c.instructions+=2;goto B526518;
case 0x526519:c.instructions+=1;goto B526519;
case 0x52651b:goto L52651b;
case 0x52651e:c.instructions+=3;goto B52651e;
case 0x526520:c.instructions+=2;goto B526520;
case 0x526523:c.instructions+=1;goto B526523;
case 0x526525:goto L526525;
case 0x526527:c.instructions+=2;goto B526527;
case 0x526529:c.instructions+=1;goto B526529;
case 0x526530:goto L526530;
case 0x526536:c.instructions+=2;goto B526536;
case 0x52653a:c.instructions+=1;goto B52653a;
case 0x52653c:goto L52653c;
case 0x526540:c.instructions+=1;goto B526540;
case 0x526541:goto L526541;
case 0x526546:c.instructions+=2;goto B526546;
case 0x526547:c.instructions+=1;goto B526547;
case 0x526549:goto L526549;
case 0x52654c:goto L52654c;
case 0x52654f:c.instructions+=1;goto B52654f;
case 0x526551:goto L526551;
case 0x526556:goto L526556;
case 0x52655b:c.instructions+=4;goto B52655b;
case 0x52655d:c.instructions+=3;goto B52655d;
case 0x52655f:c.instructions+=2;goto B52655f;
case 0x526562:c.instructions+=1;goto B526562;
case 0x526568:goto L526568;
case 0x52656e:c.instructions+=2;goto B52656e;
case 0x526570:c.instructions+=1;goto B526570;
case 0x526576:goto L526576;
case 0x52657c:c.instructions+=11;goto B52657c;
case 0x526582:c.instructions+=10;goto B526582;
case 0x526585:c.instructions+=9;goto B526585;
case 0x52658a:c.instructions+=8;goto B52658a;
case 0x52658c:c.instructions+=7;goto B52658c;
case 0x52658e:c.instructions+=6;goto B52658e;
case 0x526591:c.instructions+=5;goto B526591;
case 0x526593:c.instructions+=4;goto B526593;
case 0x526596:c.instructions+=3;goto B526596;
case 0x526598:c.instructions+=2;goto B526598;
case 0x52659a:c.instructions+=1;goto B52659a;
case 0x5265a0:goto L5265a0;
case 0x5265a2:c.instructions+=1;goto B5265a2;
case 0x5265a4:goto L5265a4;
case 0x5265a7:c.instructions+=2;goto B5265a7;
case 0x5265a9:c.instructions+=1;goto B5265a9;
case 0x5265ab:goto L5265ab;
case 0x5265ad:c.instructions+=1;goto B5265ad;
case 0x5265af:goto L5265af;
case 0x5265b2:c.instructions+=1;goto B5265b2;
case 0x5265b4:goto L5265b4;
case 0x5265ba:c.instructions+=2;goto B5265ba;
case 0x5265bf:c.instructions+=1;goto B5265bf;
case 0x5265c1:goto L5265c1;
case 0x5265c3:goto L5265c3;
case 0x5265c9:c.instructions+=4;goto B5265c9;
case 0x5265cc:c.instructions+=3;goto B5265cc;
case 0x5265ce:c.instructions+=2;goto B5265ce;
case 0x5265d0:c.instructions+=1;goto B5265d0;
case 0x5265d2:goto L5265d2;
case 0x5265d5:goto L5265d5;
case 0x5265d8:c.instructions+=1;goto B5265d8;
case 0x5265de:goto L5265de;
case 0x5265df:c.instructions+=3;goto B5265df;
case 0x5265e5:c.instructions+=2;goto B5265e5;
case 0x5265e7:c.instructions+=1;goto B5265e7;
case 0x5265e9:goto L5265e9;
case 0x5265eb:goto L5265eb;
case 0x5265ed:c.instructions+=2;goto B5265ed;
case 0x5265f1:c.instructions+=1;goto B5265f1;
case 0x5265f3:goto L5265f3;
case 0x5265f9:c.instructions+=3;goto B5265f9;
case 0x5265fb:c.instructions+=2;goto B5265fb;
case 0x5265fd:c.instructions+=1;goto B5265fd;
case 0x5265ff:goto L5265ff;
case 0x526602:goto L526602;
case 0x526605:c.instructions+=1;goto B526605;
case 0x52660b:goto L52660b;
case 0x52660c:c.instructions+=3;goto B52660c;
case 0x526612:c.instructions+=2;goto B526612;
case 0x526614:c.instructions+=1;goto B526614;
case 0x526616:goto L526616;
case 0x526618:goto L526618;
case 0x52661a:goto L52661a;
case 0x52661d:goto L52661d;
case 0x526620:c.instructions+=1;goto B526620;
case 0x526622:goto L526622;
case 0x526624:c.instructions+=1;goto B526624;
case 0x526626:goto L526626;
case 0x526627:c.instructions+=2;goto B526627;
case 0x526629:c.instructions+=1;goto B526629;
case 0x52662e:goto L52662e;
case 0x526631:goto L526631;
case 0x526633:c.instructions+=1;goto B526633;
case 0x526635:goto L526635;
case 0x526636:c.instructions+=2;goto B526636;
case 0x526638:c.instructions+=1;goto B526638;
case 0x52663d:goto L52663d;
case 0x526640:goto L526640;
case 0x526645:c.instructions+=2;goto B526645;
case 0x526647:c.instructions+=1;goto B526647;
case 0x526649:goto L526649;
case 0x52664a:c.instructions+=2;goto B52664a;
case 0x52664c:c.instructions+=1;goto B52664c;
case 0x526651:goto L526651;
case 0x526656:c.instructions+=1;goto B526656;
case 0x526659:goto L526659;
case 0x52665f:c.instructions+=2;goto B52665f;
case 0x526661:c.instructions+=1;goto B526661;
case 0x526663:goto L526663;
case 0x526664:c.instructions+=2;goto B526664;
case 0x526666:c.instructions+=1;goto B526666;
case 0x52666b:goto L52666b;
case 0x52666e:goto L52666e;
case 0x526670:c.instructions+=1;goto B526670;
case 0x526672:goto L526672;
case 0x526674:c.instructions+=3;goto B526674;
case 0x526676:c.instructions+=2;goto B526676;
case 0x52667b:c.instructions+=1;goto B52667b;
case 0x526680:goto L526680;
case 0x526686:c.instructions+=2;goto B526686;
case 0x52668a:c.instructions+=1;goto B52668a;
case 0x52668c:goto L52668c;
case 0x526691:c.instructions+=2;goto B526691;
case 0x526695:c.instructions+=1;goto B526695;
case 0x52669b:goto L52669b;
case 0x5266a0:c.instructions+=2;goto B5266a0;
case 0x5266a1:c.instructions+=1;goto B5266a1;
case 0x5266a3:goto L5266a3;
case 0x5266a4:c.instructions+=5;goto B5266a4;
case 0x5266a5:c.instructions+=4;goto B5266a5;
case 0x5266a6:c.instructions+=3;goto B5266a6;
case 0x5266a8:c.instructions+=2;goto B5266a8;
case 0x5266a9:c.instructions+=1;goto B5266a9;
case 0x5266aa:goto L5266aa;
case 0x5266b0:c.instructions+=2;goto B5266b0;
case 0x5266b2:c.instructions+=1;goto B5266b2;
case 0x5266b7:goto L5266b7;
case 0x5266bd:c.instructions+=2;goto B5266bd;
case 0x5266bf:c.instructions+=1;goto B5266bf;
case 0x5266c4:goto L5266c4;
case 0x5266c7:c.instructions+=1;goto B5266c7;
case 0x5266cd:goto L5266cd;
case 0x5266d4:c.instructions+=1;goto B5266d4;
case 0x5266da:goto L5266da;
case 0x5266df:c.instructions+=2;goto B5266df;
case 0x5266e1:c.instructions+=1;goto B5266e1;
case 0x5266e3:goto L5266e3;
case 0x5266e5:c.instructions+=1;goto B5266e5;
case 0x5266ea:goto L5266ea;
case 0x5266ed:c.instructions+=2;goto B5266ed;
case 0x5266f0:c.instructions+=1;goto B5266f0;
case 0x5266f2:goto L5266f2;
case 0x5266f7:c.instructions+=2;goto B5266f7;
case 0x5266fc:c.instructions+=1;goto B5266fc;
case 0x526701:goto L526701;
case 0x526703:c.instructions+=1;goto B526703;
case 0x526705:goto L526705;
case 0x52670a:c.instructions+=2;goto B52670a;
case 0x52670f:c.instructions+=1;goto B52670f;
case 0x526720:goto L526720;
case 0x526725:c.instructions+=3;goto B526725;
case 0x526728:c.instructions+=2;goto B526728;
case 0x52672f:c.instructions+=1;goto B52672f;
case 0x526731:goto L526731;
case 0x526738:c.instructions+=1;goto B526738;
case 0x52673a:goto L52673a;
case 0x52673d:c.instructions+=1;goto B52673d;
case 0x526745:goto L526745;
case 0x526746:c.instructions+=4;goto B526746;
case 0x526748:c.instructions+=3;goto B526748;
case 0x52674b:c.instructions+=2;goto B52674b;
case 0x526751:c.instructions+=1;goto B526751;
case 0x526753:goto L526753;
case 0x526756:c.instructions+=1;goto B526756;
case 0x526758:goto L526758;
case 0x52675f:c.instructions+=2;goto B52675f;
case 0x526765:c.instructions+=1;goto B526765;
case 0x526767:goto L526767;
case 0x52676a:c.instructions+=3;goto B52676a;
case 0x526772:c.instructions+=2;goto B526772;
case 0x526778:c.instructions+=1;goto B526778;
case 0x52677a:goto L52677a;
case 0x526780:goto L526780;
case 0x526783:c.instructions+=2;goto B526783;
case 0x52678d:c.instructions+=1;goto B52678d;
case 0x52678f:goto L52678f;
case 0x526796:c.instructions+=1;goto B526796;
case 0x526798:goto L526798;
case 0x52679b:c.instructions+=1;goto B52679b;
case 0x5267a3:goto L5267a3;
case 0x5267a6:c.instructions+=5;goto B5267a6;
case 0x5267ac:c.instructions+=4;goto B5267ac;
case 0x5267b2:c.instructions+=3;goto B5267b2;
case 0x5267bc:c.instructions+=2;goto B5267bc;
case 0x5267c6:c.instructions+=1;goto B5267c6;
case 0x5267c8:goto L5267c8;
case 0x5267cf:c.instructions+=1;goto B5267cf;
case 0x5267d1:goto L5267d1;
case 0x5267d4:c.instructions+=1;goto B5267d4;
case 0x5267dc:goto L5267dc;
case 0x5267e3:c.instructions+=10;goto B5267e3;
case 0x5267e5:c.instructions+=9;goto B5267e5;
case 0x5267e6:c.instructions+=8;goto B5267e6;
case 0x5267eb:c.instructions+=7;goto B5267eb;
case 0x5267f2:c.instructions+=6;goto B5267f2;
case 0x5267f8:c.instructions+=5;goto B5267f8;
case 0x526802:c.instructions+=4;goto B526802;
case 0x526808:c.instructions+=3;goto B526808;
case 0x52680e:c.instructions+=2;goto B52680e;
case 0x526814:c.instructions+=1;goto B526814;
case 0x526819:goto L526819;
case 0x52681b:c.instructions+=1;goto B52681b;
case 0x526820:goto L526820;
case 0x526823:c.instructions+=2;goto B526823;
case 0x526824:c.instructions+=1;goto B526824;
case 0x526830:goto L526830;
case 0x526835:c.instructions+=4;goto B526835;
case 0x526838:c.instructions+=3;goto B526838;
case 0x526839:c.instructions+=2;goto B526839;
case 0x52683a:c.instructions+=1;goto B52683a;
case 0x52683c:goto L52683c;
case 0x526841:c.instructions+=1;goto B526841;
case 0x526843:goto L526843;
case 0x526845:c.instructions+=1;goto B526845;
case 0x526847:goto L526847;
case 0x526849:goto L526849;
case 0x52684b:c.instructions+=13;goto B52684b;
case 0x52684d:c.instructions+=12;goto B52684d;
case 0x526850:c.instructions+=11;goto B526850;
case 0x526852:c.instructions+=10;goto B526852;
case 0x526854:c.instructions+=9;goto B526854;
case 0x52685a:c.instructions+=8;goto B52685a;
case 0x52685b:c.instructions+=7;goto B52685b;
case 0x52685d:c.instructions+=6;goto B52685d;
case 0x526860:c.instructions+=5;goto B526860;
case 0x526865:c.instructions+=4;goto B526865;
case 0x52686a:c.instructions+=3;goto B52686a;
case 0x52686d:c.instructions+=2;goto B52686d;
case 0x526873:c.instructions+=1;goto B526873;
case 0x526875:goto L526875;
case 0x52687c:c.instructions+=1;goto B52687c;
case 0x52687e:goto L52687e;
case 0x526881:c.instructions+=1;goto B526881;
case 0x526889:goto L526889;
case 0x52688c:c.instructions+=5;goto B52688c;
case 0x526892:c.instructions+=4;goto B526892;
case 0x526898:c.instructions+=3;goto B526898;
case 0x5268a2:c.instructions+=2;goto B5268a2;
case 0x5268ac:c.instructions+=1;goto B5268ac;
case 0x5268ae:goto L5268ae;
case 0x5268b5:c.instructions+=1;goto B5268b5;
case 0x5268b7:goto L5268b7;
case 0x5268ba:c.instructions+=1;goto B5268ba;
case 0x5268c2:goto L5268c2;
case 0x5268c4:c.instructions+=3;goto B5268c4;
case 0x5268ca:c.instructions+=2;goto B5268ca;
case 0x5268d1:c.instructions+=1;goto B5268d1;
case 0x5268d3:goto L5268d3;
case 0x5268d8:c.instructions+=1;goto B5268d8;
case 0x5268da:goto L5268da;
case 0x5268dd:c.instructions+=1;goto B5268dd;
case 0x5268df:goto L5268df;
case 0x5268e4:c.instructions+=1;goto B5268e4;
case 0x5268e6:goto L5268e6;
case 0x5268e9:c.instructions+=1;goto B5268e9;
case 0x5268f0:goto L5268f0;
case 0x5268f2:c.instructions+=2;goto B5268f2;
case 0x5268f8:c.instructions+=1;goto B5268f8;
case 0x5268fa:goto L5268fa;
case 0x5268fd:c.instructions+=2;goto B5268fd;
case 0x526903:c.instructions+=1;goto B526903;
case 0x526905:goto L526905;
case 0x52690a:c.instructions+=1;goto B52690a;
case 0x52690f:goto L52690f;
case 0x526912:c.instructions+=3;goto B526912;
case 0x526915:c.instructions+=2;goto B526915;
case 0x52691c:c.instructions+=1;goto B52691c;
case 0x526921:goto L526921;
case 0x526923:c.instructions+=5;goto B526923;
case 0x52692a:c.instructions+=4;goto B52692a;
case 0x526930:c.instructions+=3;goto B526930;
case 0x526936:c.instructions+=2;goto B526936;
case 0x52693c:c.instructions+=1;goto B52693c;
case 0x52693e:goto L52693e;
case 0x526942:c.instructions+=2;goto B526942;
case 0x526944:c.instructions+=1;goto B526944;
case 0x526946:goto L526946;
case 0x52694c:c.instructions+=3;goto B52694c;
case 0x52694d:c.instructions+=2;goto B52694d;
case 0x52694e:c.instructions+=1;goto B52694e;
case 0x526953:goto L526953;
case 0x526956:c.instructions+=1;goto B526956;
case 0x52695b:goto L52695b;
case 0x52695c:c.instructions+=3;goto B52695c;
case 0x52695d:c.instructions+=2;goto B52695d;
case 0x526965:c.instructions+=1;goto B526965;
case 0x526970:goto L526970;
case 0x526971:c.instructions+=10;goto B526971;
case 0x526973:c.instructions+=9;goto B526973;
case 0x526976:c.instructions+=8;goto B526976;
case 0x526978:c.instructions+=7;goto B526978;
case 0x52697d:c.instructions+=6;goto B52697d;
case 0x526983:c.instructions+=5;goto B526983;
case 0x526984:c.instructions+=4;goto B526984;
case 0x52698b:c.instructions+=3;goto B52698b;
case 0x52698c:c.instructions+=2;goto B52698c;
case 0x526991:c.instructions+=1;goto B526991;
case 0x526996:goto L526996;
case 0x526999:c.instructions+=14;goto B526999;
case 0x52699a:c.instructions+=13;goto B52699a;
case 0x52699c:c.instructions+=12;goto B52699c;
case 0x52699e:c.instructions+=11;goto B52699e;
case 0x52699f:c.instructions+=10;goto B52699f;
case 0x5269a0:c.instructions+=9;goto B5269a0;
case 0x5269a7:c.instructions+=8;goto B5269a7;
case 0x5269ab:c.instructions+=7;goto B5269ab;
case 0x5269b1:c.instructions+=6;goto B5269b1;
case 0x5269b7:c.instructions+=5;goto B5269b7;
case 0x5269bd:c.instructions+=4;goto B5269bd;
case 0x5269c3:c.instructions+=3;goto B5269c3;
case 0x5269c9:c.instructions+=2;goto B5269c9;
case 0x5269cf:c.instructions+=1;goto B5269cf;
case 0x5269d1:goto L5269d1;
case 0x5269d6:c.instructions+=3;goto B5269d6;
case 0x5269d9:c.instructions+=2;goto B5269d9;
case 0x5269dd:c.instructions+=1;goto B5269dd;
case 0x5269df:goto L5269df;
case 0x5269e6:goto L5269e6;
case 0x5269eb:goto L5269eb;
case 0x5269ed:goto L5269ed;
case 0x5269f2:goto L5269f2;
case 0x5269f4:goto L5269f4;
case 0x5269f9:goto L5269f9;
case 0x5269fb:goto L5269fb;
case 0x526a00:goto L526a00;
case 0x526a02:goto L526a02;
case 0x526a07:goto L526a07;
case 0x526a09:goto L526a09;
case 0x526a0e:goto L526a0e;
case 0x526a14:c.instructions+=5;goto B526a14;
case 0x526a16:c.instructions+=4;goto B526a16;
case 0x526a18:c.instructions+=3;goto B526a18;
case 0x526a22:c.instructions+=2;goto B526a22;
case 0x526a28:c.instructions+=1;goto B526a28;
case 0x526a2a:goto L526a2a;
case 0x526a30:goto L526a30;
case 0x526a37:c.instructions+=5;goto B526a37;
case 0x526a3e:c.instructions+=4;goto B526a3e;
case 0x526a44:c.instructions+=3;goto B526a44;
case 0x526a45:c.instructions+=2;goto B526a45;
case 0x526a47:c.instructions+=1;goto B526a47;
case 0x526a49:goto L526a49;
case 0x526a4e:c.instructions+=4;goto B526a4e;
case 0x526a54:c.instructions+=3;goto B526a54;
case 0x526a55:c.instructions+=2;goto B526a55;
case 0x526a57:c.instructions+=1;goto B526a57;
case 0x526a5c:goto L526a5c;
case 0x526a5f:c.instructions+=5;goto B526a5f;
case 0x526a60:c.instructions+=4;goto B526a60;
case 0x526a64:c.instructions+=3;goto B526a64;
case 0x526a66:c.instructions+=2;goto B526a66;
case 0x526a67:c.instructions+=1;goto B526a67;
case 0x526a6c:goto L526a6c;
case 0x526a70:c.instructions+=3;goto B526a70;
case 0x526a71:c.instructions+=2;goto B526a71;
case 0x526a72:c.instructions+=1;goto B526a72;
case 0x526a77:goto L526a77;
case 0x526a7a:c.instructions+=5;goto B526a7a;
case 0x526a7d:c.instructions+=4;goto B526a7d;
case 0x526a81:c.instructions+=3;goto B526a81;
case 0x526a87:c.instructions+=2;goto B526a87;
case 0x526a8d:c.instructions+=1;goto B526a8d;
case 0x526a92:goto L526a92;
case 0x526a93:c.instructions+=6;goto B526a93;
case 0x526a94:c.instructions+=5;goto B526a94;
case 0x526a95:c.instructions+=4;goto B526a95;
case 0x526a96:c.instructions+=3;goto B526a96;
case 0x526a9a:c.instructions+=2;goto B526a9a;
case 0x526aa1:c.instructions+=1;goto B526aa1;
case 0x526aa6:goto L526aa6;
case 0x526aac:c.instructions+=5;goto B526aac;
case 0x526ab2:c.instructions+=4;goto B526ab2;
case 0x526ab7:c.instructions+=3;goto B526ab7;
case 0x526ab9:c.instructions+=2;goto B526ab9;
case 0x526ac0:c.instructions+=1;goto B526ac0;
case 0x526ac2:goto L526ac2;
case 0x526ac8:goto L526ac8;
case 0x526aca:c.instructions+=2;goto B526aca;
case 0x526acf:c.instructions+=1;goto B526acf;
case 0x526ad0:goto L526ad0;
case 0x526ad2:c.instructions+=2;goto B526ad2;
case 0x526ad4:c.instructions+=1;goto B526ad4;
case 0x526ad6:goto L526ad6;
case 0x526ad9:c.instructions+=1;goto B526ad9;
case 0x526adb:goto L526adb;
case 0x526ade:c.instructions+=3;goto B526ade;
case 0x526adf:c.instructions+=2;goto B526adf;
case 0x526ae4:c.instructions+=1;goto B526ae4;
case 0x526ae6:goto L526ae6;
case 0x526ae8:goto L526ae8;
case 0x526aef:c.instructions+=2;goto B526aef;
case 0x526af1:c.instructions+=1;goto B526af1;
case 0x526af3:goto L526af3;
case 0x526af5:c.instructions+=2;goto B526af5;
case 0x526af7:c.instructions+=1;goto B526af7;
case 0x526afa:goto L526afa;
case 0x526afe:c.instructions+=7;goto B526afe;
case 0x526b00:c.instructions+=6;goto B526b00;
case 0x526b01:c.instructions+=5;goto B526b01;
case 0x526b05:c.instructions+=4;goto B526b05;
case 0x526b06:c.instructions+=3;goto B526b06;
case 0x526b07:c.instructions+=2;goto B526b07;
case 0x526b09:c.instructions+=1;goto B526b09;
case 0x526b0c:goto L526b0c;
case 0x526b11:c.instructions+=2;goto B526b11;
case 0x526b16:c.instructions+=1;goto B526b16;
case 0x526b1d:goto L526b1d;
case 0x526b1f:goto L526b1f;
case 0x526b21:c.instructions+=6;goto B526b21;
case 0x526b23:c.instructions+=5;goto B526b23;
case 0x526b25:c.instructions+=4;goto B526b25;
case 0x526b26:c.instructions+=3;goto B526b26;
case 0x526b2a:c.instructions+=2;goto B526b2a;
case 0x526b2b:c.instructions+=1;goto B526b2b;
case 0x526b30:goto L526b30;
case 0x526b31:c.instructions+=8;goto B526b31;
case 0x526b33:c.instructions+=7;goto B526b33;
case 0x526b38:c.instructions+=6;goto B526b38;
case 0x526b3c:c.instructions+=5;goto B526b3c;
case 0x526b3d:c.instructions+=4;goto B526b3d;
case 0x526b3f:c.instructions+=3;goto B526b3f;
case 0x526b40:c.instructions+=2;goto B526b40;
case 0x526b47:c.instructions+=1;goto B526b47;
case 0x526b4c:goto L526b4c;
case 0x526b53:c.instructions+=4;goto B526b53;
case 0x526b54:c.instructions+=3;goto B526b54;
case 0x526b59:c.instructions+=2;goto B526b59;
case 0x526b61:c.instructions+=1;goto B526b61;
case 0x526b66:goto L526b66;
case 0x526b68:c.instructions+=1;goto B526b68;
case 0x526b6d:goto L526b6d;
case 0x526b72:c.instructions+=4;goto B526b72;
case 0x526b78:c.instructions+=3;goto B526b78;
case 0x526b79:c.instructions+=2;goto B526b79;
case 0x526b7b:c.instructions+=1;goto B526b7b;
case 0x526b80:goto L526b80;
case 0x526b83:c.instructions+=5;goto B526b83;
case 0x526b84:c.instructions+=4;goto B526b84;
case 0x526b88:c.instructions+=3;goto B526b88;
case 0x526b8a:c.instructions+=2;goto B526b8a;
case 0x526b8b:c.instructions+=1;goto B526b8b;
case 0x526b90:goto L526b90;
case 0x526b94:c.instructions+=3;goto B526b94;
case 0x526b95:c.instructions+=2;goto B526b95;
case 0x526b96:c.instructions+=1;goto B526b96;
case 0x526b9b:goto L526b9b;
case 0x526ba0:c.instructions+=4;goto B526ba0;
case 0x526ba3:c.instructions+=3;goto B526ba3;
case 0x526ba6:c.instructions+=2;goto B526ba6;
case 0x526bab:c.instructions+=1;goto B526bab;
case 0x526bad:goto L526bad;
case 0x526bb2:goto L526bb2;
case 0x526bb4:goto L526bb4;
case 0x526bb9:goto L526bb9;
case 0x526bc0:c.instructions+=2;goto B526bc0;
case 0x526bc8:c.instructions+=1;goto B526bc8;
case 0x526bcd:goto L526bcd;
case 0x526bd4:c.instructions+=2;goto B526bd4;
case 0x526bdf:c.instructions+=1;goto B526bdf;
case 0x526be4:goto L526be4;
case 0x526beb:c.instructions+=7;goto B526beb;
case 0x526bec:c.instructions+=6;goto B526bec;
case 0x526bed:c.instructions+=5;goto B526bed;
case 0x526bf4:c.instructions+=4;goto B526bf4;
case 0x526bf5:c.instructions+=3;goto B526bf5;
case 0x526bf7:c.instructions+=2;goto B526bf7;
case 0x526bf8:c.instructions+=1;goto B526bf8;
case 0x526c10:goto L526c10;
case 0x526c15:c.instructions+=2;goto B526c15;
case 0x526c19:c.instructions+=1;goto B526c19;
case 0x526c1b:goto L526c1b;
case 0x526c21:c.instructions+=3;goto B526c21;
case 0x526c22:c.instructions+=2;goto B526c22;
case 0x526c27:c.instructions+=1;goto B526c27;
case 0x526c2c:goto L526c2c;
case 0x526c2e:c.instructions+=1;goto B526c2e;
case 0x526c30:goto L526c30;
case 0x526c33:c.instructions+=1;goto B526c33;
case 0x526c34:goto L526c34;
case 0x526c36:c.instructions+=1;goto B526c36;
case 0x526c40:goto L526c40;
case 0x526c41:c.instructions+=6;goto B526c41;
case 0x526c42:c.instructions+=5;goto B526c42;
case 0x526c43:c.instructions+=4;goto B526c43;
case 0x526c47:c.instructions+=3;goto B526c47;
case 0x526c4d:c.instructions+=2;goto B526c4d;
case 0x526c4f:c.instructions+=1;goto B526c4f;
case 0x526c51:goto L526c51;
case 0x526c54:c.instructions+=1;goto B526c54;
case 0x526c56:goto L526c56;
case 0x526c5b:c.instructions+=2;goto B526c5b;
case 0x526c5c:c.instructions+=1;goto B526c5c;
case 0x526c61:goto L526c61;
case 0x526c64:c.instructions+=2;goto B526c64;
case 0x526c66:c.instructions+=1;goto B526c66;
case 0x526c68:goto L526c68;
case 0x526c6d:c.instructions+=2;goto B526c6d;
case 0x526c6e:c.instructions+=1;goto B526c6e;
case 0x526c73:goto L526c73;
case 0x526c76:c.instructions+=2;goto B526c76;
case 0x526c78:c.instructions+=1;goto B526c78;
case 0x526c7a:goto L526c7a;
case 0x526c7b:c.instructions+=4;goto B526c7b;
case 0x526c7d:c.instructions+=3;goto B526c7d;
case 0x526c7e:c.instructions+=2;goto B526c7e;
case 0x526c7f:c.instructions+=1;goto B526c7f;
case 0x526c80:goto L526c80;
case 0x526c86:c.instructions+=2;goto B526c86;
case 0x526c88:c.instructions+=1;goto B526c88;
case 0x526c8a:goto L526c8a;
case 0x526c8c:c.instructions+=4;goto B526c8c;
case 0x526c8e:c.instructions+=3;goto B526c8e;
case 0x526c93:c.instructions+=2;goto B526c93;
case 0x526c96:c.instructions+=1;goto B526c96;
case 0x526c98:goto L526c98;
case 0x526c9a:c.instructions+=1;goto B526c9a;
case 0x526c9c:goto L526c9c;
case 0x526c9e:c.instructions+=1;goto B526c9e;
case 0x526ca0:goto L526ca0;
case 0x526ca1:goto L526ca1;
case 0x526ca3:c.instructions+=3;goto B526ca3;
case 0x526ca4:c.instructions+=2;goto B526ca4;
case 0x526ca6:c.instructions+=1;goto B526ca6;
case 0x526ca8:goto L526ca8;
case 0x526cab:c.instructions+=1;goto B526cab;
case 0x526cad:goto L526cad;
case 0x526cae:c.instructions+=4;goto B526cae;
case 0x526cb3:c.instructions+=3;goto B526cb3;
case 0x526cb4:c.instructions+=2;goto B526cb4;
case 0x526cb5:c.instructions+=1;goto B526cb5;
case 0x526cb6:goto L526cb6;
case 0x526cb7:c.instructions+=4;goto B526cb7;
case 0x526cbc:c.instructions+=3;goto B526cbc;
case 0x526cbd:c.instructions+=2;goto B526cbd;
case 0x526cbe:c.instructions+=1;goto B526cbe;
case 0x526cbf:goto L526cbf;
case 0x526cc4:c.instructions+=1;goto B526cc4;
case 0x526cc9:goto L526cc9;
case 0x526cca:c.instructions+=1;goto B526cca;
case 0x526ccf:goto L526ccf;
case 0x526cd2:c.instructions+=3;goto B526cd2;
case 0x526cd3:c.instructions+=2;goto B526cd3;
case 0x526cd7:c.instructions+=1;goto B526cd7;
case 0x526cdc:goto L526cdc;
case 0x526ce0:c.instructions+=6;goto B526ce0;
case 0x526ce4:c.instructions+=5;goto B526ce4;
case 0x526ce9:c.instructions+=4;goto B526ce9;
case 0x526cea:c.instructions+=3;goto B526cea;
case 0x526cee:c.instructions+=2;goto B526cee;
case 0x526cf2:c.instructions+=1;goto B526cf2;
case 0x526cf7:goto L526cf7;
case 0x526cfa:c.instructions+=2;goto B526cfa;
case 0x526cfc:c.instructions+=1;goto B526cfc;
case 0x526cfe:goto L526cfe;
case 0x526cff:c.instructions+=4;goto B526cff;
case 0x526d04:c.instructions+=3;goto B526d04;
case 0x526d05:c.instructions+=2;goto B526d05;
case 0x526d06:c.instructions+=1;goto B526d06;
case 0x526d07:goto L526d07;
case 0x526d0b:c.instructions+=6;goto B526d0b;
case 0x526d10:c.instructions+=5;goto B526d10;
case 0x526d16:c.instructions+=4;goto B526d16;
case 0x526d17:c.instructions+=3;goto B526d17;
case 0x526d19:c.instructions+=2;goto B526d19;
case 0x526d1c:c.instructions+=1;goto B526d1c;
case 0x526d1e:goto L526d1e;
case 0x526d23:goto L526d23;
case 0x526d26:c.instructions+=2;goto B526d26;
case 0x526d28:c.instructions+=1;goto B526d28;
case 0x526d2a:goto L526d2a;
case 0x526d2b:c.instructions+=4;goto B526d2b;
case 0x526d30:c.instructions+=3;goto B526d30;
case 0x526d31:c.instructions+=2;goto B526d31;
case 0x526d32:c.instructions+=1;goto B526d32;
case 0x526d33:goto L526d33;
case 0x526d34:c.instructions+=4;goto B526d34;
case 0x526d39:c.instructions+=3;goto B526d39;
case 0x526d3a:c.instructions+=2;goto B526d3a;
case 0x526d3b:c.instructions+=1;goto B526d3b;
case 0x526d3c:goto L526d3c;
case 0x526d40:c.instructions+=4;goto B526d40;
case 0x526d46:c.instructions+=3;goto B526d46;
case 0x526d48:c.instructions+=2;goto B526d48;
case 0x526d4b:c.instructions+=1;goto B526d4b;
case 0x526d4d:goto L526d4d;
case 0x526d52:goto L526d52;
case 0x526d55:c.instructions+=2;goto B526d55;
case 0x526d57:c.instructions+=1;goto B526d57;
case 0x526d59:goto L526d59;
case 0x526d5a:c.instructions+=4;goto B526d5a;
case 0x526d5f:c.instructions+=3;goto B526d5f;
case 0x526d60:c.instructions+=2;goto B526d60;
case 0x526d61:c.instructions+=1;goto B526d61;
case 0x526d62:goto L526d62;
case 0x526d63:c.instructions+=4;goto B526d63;
case 0x526d68:c.instructions+=3;goto B526d68;
case 0x526d69:c.instructions+=2;goto B526d69;
case 0x526d6a:c.instructions+=1;goto B526d6a;
case 0x526d6b:goto L526d6b;
case 0x526d70:goto L526d70;
case 0x526d73:c.instructions+=3;goto B526d73;
case 0x526d75:c.instructions+=2;goto B526d75;
case 0x526d7a:c.instructions+=1;goto B526d7a;
case 0x526d7c:goto L526d7c;
case 0x526d81:goto L526d81;
case 0x526d82:c.instructions+=3;goto B526d82;
case 0x526d83:c.instructions+=2;goto B526d83;
case 0x526d84:c.instructions+=1;goto B526d84;
case 0x526d90:goto L526d90;
case 0x526d91:c.instructions+=8;goto B526d91;
case 0x526d92:c.instructions+=7;goto B526d92;
case 0x526d93:c.instructions+=6;goto B526d93;
case 0x526d95:c.instructions+=5;goto B526d95;
case 0x526d96:c.instructions+=4;goto B526d96;
case 0x526d99:c.instructions+=3;goto B526d99;
case 0x526d9b:c.instructions+=2;goto B526d9b;
case 0x526d9d:c.instructions+=1;goto B526d9d;
case 0x526d9f:goto L526d9f;
case 0x526da2:c.instructions+=2;goto B526da2;
case 0x526da4:c.instructions+=1;goto B526da4;
case 0x526da6:goto L526da6;
case 0x526dab:c.instructions+=1;goto B526dab;
case 0x526db0:goto L526db0;
case 0x526db3:c.instructions+=3;goto B526db3;
case 0x526db6:c.instructions+=2;goto B526db6;
case 0x526db8:c.instructions+=1;goto B526db8;
case 0x526dba:goto L526dba;
case 0x526dbd:c.instructions+=2;goto B526dbd;
case 0x526dbf:c.instructions+=1;goto B526dbf;
case 0x526dc1:goto L526dc1;
case 0x526dc3:goto L526dc3;
case 0x526dc5:c.instructions+=1;goto B526dc5;
case 0x526dc7:goto L526dc7;
case 0x526dca:c.instructions+=1;goto B526dca;
case 0x526dcc:goto L526dcc;
case 0x526dce:c.instructions+=2;goto B526dce;
case 0x526dd1:c.instructions+=1;goto B526dd1;
case 0x526dd6:goto L526dd6;
case 0x526dd9:c.instructions+=1;goto B526dd9;
case 0x526ddc:goto L526ddc;
case 0x526ddf:goto L526ddf;
case 0x526de2:c.instructions+=2;goto B526de2;
case 0x526de4:c.instructions+=1;goto B526de4;
case 0x526de6:goto L526de6;
case 0x526de9:c.instructions+=2;goto B526de9;
case 0x526deb:c.instructions+=1;goto B526deb;
case 0x526ded:goto L526ded;
case 0x526df0:goto L526df0;
case 0x526df5:c.instructions+=1;goto B526df5;
case 0x526dfa:goto L526dfa;
case 0x526dfd:c.instructions+=3;goto B526dfd;
case 0x526e00:c.instructions+=2;goto B526e00;
case 0x526e02:c.instructions+=1;goto B526e02;
case 0x526e04:goto L526e04;
case 0x526e07:c.instructions+=2;goto B526e07;
case 0x526e09:c.instructions+=1;goto B526e09;
case 0x526e0b:goto L526e0b;
case 0x526e0d:goto L526e0d;
case 0x526e0f:c.instructions+=1;goto B526e0f;
case 0x526e11:goto L526e11;
case 0x526e14:c.instructions+=1;goto B526e14;
case 0x526e16:goto L526e16;
case 0x526e18:c.instructions+=2;goto B526e18;
case 0x526e1b:c.instructions+=1;goto B526e1b;
case 0x526e20:goto L526e20;
case 0x526e23:c.instructions+=1;goto B526e23;
case 0x526e26:goto L526e26;
case 0x526e29:goto L526e29;
case 0x526e2c:c.instructions+=2;goto B526e2c;
case 0x526e2e:c.instructions+=1;goto B526e2e;
case 0x526e30:goto L526e30;
case 0x526e33:c.instructions+=2;goto B526e33;
case 0x526e35:c.instructions+=1;goto B526e35;
case 0x526e37:goto L526e37;
case 0x526e40:goto L526e40;
case 0x526e45:c.instructions+=1;goto B526e45;
case 0x526e4a:goto L526e4a;
case 0x526e4d:c.instructions+=3;goto B526e4d;
case 0x526e50:c.instructions+=2;goto B526e50;
case 0x526e52:c.instructions+=1;goto B526e52;
case 0x526e54:goto L526e54;
case 0x526e57:c.instructions+=2;goto B526e57;
case 0x526e59:c.instructions+=1;goto B526e59;
case 0x526e5b:goto L526e5b;
case 0x526e5d:goto L526e5d;
case 0x526e5f:c.instructions+=1;goto B526e5f;
case 0x526e61:goto L526e61;
case 0x526e64:c.instructions+=1;goto B526e64;
case 0x526e66:goto L526e66;
case 0x526e68:c.instructions+=2;goto B526e68;
case 0x526e6b:c.instructions+=1;goto B526e6b;
case 0x526e70:goto L526e70;
case 0x526e73:c.instructions+=1;goto B526e73;
case 0x526e76:goto L526e76;
case 0x526e79:goto L526e79;
case 0x526e7c:c.instructions+=2;goto B526e7c;
case 0x526e7e:c.instructions+=1;goto B526e7e;
case 0x526e80:goto L526e80;
case 0x526e83:c.instructions+=2;goto B526e83;
case 0x526e85:c.instructions+=1;goto B526e85;
case 0x526e87:goto L526e87;
case 0x526e90:goto L526e90;
case 0x526e95:c.instructions+=1;goto B526e95;
case 0x526e9a:goto L526e9a;
case 0x526e9d:c.instructions+=3;goto B526e9d;
case 0x526ea0:c.instructions+=2;goto B526ea0;
case 0x526ea2:c.instructions+=1;goto B526ea2;
case 0x526ea4:goto L526ea4;
case 0x526ea7:c.instructions+=2;goto B526ea7;
case 0x526ea9:c.instructions+=1;goto B526ea9;
case 0x526eab:goto L526eab;
case 0x526ead:goto L526ead;
case 0x526eaf:c.instructions+=1;goto B526eaf;
case 0x526eb1:goto L526eb1;
case 0x526eb4:c.instructions+=1;goto B526eb4;
case 0x526eb6:goto L526eb6;
case 0x526eb8:c.instructions+=2;goto B526eb8;
case 0x526ebb:c.instructions+=1;goto B526ebb;
case 0x526ec0:goto L526ec0;
case 0x526ec3:c.instructions+=1;goto B526ec3;
case 0x526ec6:goto L526ec6;
case 0x526ec9:goto L526ec9;
case 0x526ecc:c.instructions+=2;goto B526ecc;
case 0x526ece:c.instructions+=1;goto B526ece;
case 0x526ed0:goto L526ed0;
case 0x526ed3:c.instructions+=2;goto B526ed3;
case 0x526ed5:c.instructions+=1;goto B526ed5;
case 0x526ed7:goto L526ed7;
case 0x526ee0:goto L526ee0;
case 0x526ee5:c.instructions+=1;goto B526ee5;
case 0x526eea:goto L526eea;
case 0x526eed:c.instructions+=3;goto B526eed;
case 0x526ef0:c.instructions+=2;goto B526ef0;
case 0x526ef2:c.instructions+=1;goto B526ef2;
case 0x526ef4:goto L526ef4;
case 0x526ef7:c.instructions+=2;goto B526ef7;
case 0x526ef9:c.instructions+=1;goto B526ef9;
case 0x526efb:goto L526efb;
case 0x526efd:goto L526efd;
case 0x526eff:c.instructions+=1;goto B526eff;
case 0x526f01:goto L526f01;
case 0x526f04:c.instructions+=1;goto B526f04;
case 0x526f06:goto L526f06;
case 0x526f08:c.instructions+=2;goto B526f08;
case 0x526f0b:c.instructions+=1;goto B526f0b;
case 0x526f10:goto L526f10;
case 0x526f13:c.instructions+=1;goto B526f13;
case 0x526f16:goto L526f16;
case 0x526f19:goto L526f19;
case 0x526f1c:c.instructions+=2;goto B526f1c;
case 0x526f1e:c.instructions+=1;goto B526f1e;
case 0x526f20:goto L526f20;
case 0x526f23:c.instructions+=2;goto B526f23;
case 0x526f25:c.instructions+=1;goto B526f25;
case 0x526f27:goto L526f27;
case 0x526f30:goto L526f30;
case 0x526f35:c.instructions+=1;goto B526f35;
case 0x526f3a:goto L526f3a;
case 0x526f3d:c.instructions+=3;goto B526f3d;
case 0x526f40:c.instructions+=2;goto B526f40;
case 0x526f42:c.instructions+=1;goto B526f42;
case 0x526f44:goto L526f44;
case 0x526f47:c.instructions+=2;goto B526f47;
case 0x526f49:c.instructions+=1;goto B526f49;
case 0x526f4b:goto L526f4b;
case 0x526f4c:c.instructions+=4;goto B526f4c;
case 0x526f4d:c.instructions+=3;goto B526f4d;
case 0x526f4e:c.instructions+=2;goto B526f4e;
case 0x526f4f:c.instructions+=1;goto B526f4f;
case 0x526f50:goto L526f50;
case 0x526f52:c.instructions+=1;goto B526f52;
case 0x526f54:goto L526f54;
case 0x526f57:c.instructions+=1;goto B526f57;
case 0x526f59:goto L526f59;
case 0x526f5b:c.instructions+=2;goto B526f5b;
case 0x526f5e:c.instructions+=1;goto B526f5e;
case 0x526f63:goto L526f63;
case 0x526f66:c.instructions+=1;goto B526f66;
case 0x526f69:goto L526f69;
case 0x526f6c:goto L526f6c;
case 0x526f6d:c.instructions+=4;goto B526f6d;
case 0x526f6e:c.instructions+=3;goto B526f6e;
case 0x526f6f:c.instructions+=2;goto B526f6f;
case 0x526f70:c.instructions+=1;goto B526f70;
case 0x526f80:goto L526f80;
case 0x526f81:c.instructions+=8;goto B526f81;
case 0x526f82:c.instructions+=7;goto B526f82;
case 0x526f83:c.instructions+=6;goto B526f83;
case 0x526f85:c.instructions+=5;goto B526f85;
case 0x526f86:c.instructions+=4;goto B526f86;
case 0x526f89:c.instructions+=3;goto B526f89;
case 0x526f8b:c.instructions+=2;goto B526f8b;
case 0x526f8d:c.instructions+=1;goto B526f8d;
case 0x526f8f:goto L526f8f;
case 0x526f92:c.instructions+=2;goto B526f92;
case 0x526f94:c.instructions+=1;goto B526f94;
case 0x526f96:goto L526f96;
case 0x526f9b:c.instructions+=1;goto B526f9b;
case 0x526fa0:goto L526fa0;
case 0x526fa3:c.instructions+=3;goto B526fa3;
case 0x526fa6:c.instructions+=2;goto B526fa6;
case 0x526fa8:c.instructions+=1;goto B526fa8;
case 0x526faa:goto L526faa;
case 0x526fad:c.instructions+=2;goto B526fad;
case 0x526faf:c.instructions+=1;goto B526faf;
case 0x526fb1:goto L526fb1;
case 0x526fb3:goto L526fb3;
case 0x526fb5:c.instructions+=1;goto B526fb5;
case 0x526fb7:goto L526fb7;
case 0x526fba:c.instructions+=1;goto B526fba;
case 0x526fbc:goto L526fbc;
case 0x526fbe:c.instructions+=2;goto B526fbe;
case 0x526fc1:c.instructions+=1;goto B526fc1;
case 0x526fc6:goto L526fc6;
case 0x526fc9:c.instructions+=1;goto B526fc9;
case 0x526fcc:goto L526fcc;
case 0x526fcf:goto L526fcf;
case 0x526fd2:c.instructions+=2;goto B526fd2;
case 0x526fd4:c.instructions+=1;goto B526fd4;
case 0x526fd6:goto L526fd6;
case 0x526fd9:c.instructions+=2;goto B526fd9;
case 0x526fdb:c.instructions+=1;goto B526fdb;
case 0x526fdd:goto L526fdd;
case 0x526fe0:goto L526fe0;
case 0x526fe5:c.instructions+=1;goto B526fe5;
case 0x526fea:goto L526fea;
case 0x526fed:c.instructions+=3;goto B526fed;
case 0x526ff0:c.instructions+=2;goto B526ff0;
case 0x526ff2:c.instructions+=1;goto B526ff2;
case 0x526ff4:goto L526ff4;
case 0x526ff7:c.instructions+=2;goto B526ff7;
case 0x526ff9:c.instructions+=1;goto B526ff9;
case 0x526ffb:goto L526ffb;
case 0x526ffd:goto L526ffd;
case 0x526fff:c.instructions+=1;goto B526fff;
default:missing_instruction(c.pc);}
B526005:L526005:{c.instructions+=1;NFSU2_TR(0x526005);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526012;}}
}
B526007:L526007:{c.instructions+=3;NFSU2_TR(0x526007);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526009:{NFSU2_TR(0x526009);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52600d:{NFSU2_TR(0x52600d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526012ull));
TAIL_STATIC(0x61c280u,61c);
}
B526012:L526012:{c.instructions+=10;NFSU2_TR(0x526012);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526016:{NFSU2_TR(0x526016);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526018:{NFSU2_TR(0x526018);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52601a:{NFSU2_TR(0x52601a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52601b:{NFSU2_TR(0x52601b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B52601f:{NFSU2_TR(0x52601f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526020:{NFSU2_TR(0x526020);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526022:{NFSU2_TR(0x526022);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526023:{NFSU2_TR(0x526023);
u8 U[4];
w4(U+0,u32(u32(u32(0x928ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52602a:{NFSU2_TR(0x52602a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52602full));
TAIL_STATIC(0x6373e0u,637);
}
B52602f:L52602f:{c.instructions+=6;NFSU2_TR(0x52602f);
u8 U[4];
w4(U+0,u32(u32(u32(0x910ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526036:{NFSU2_TR(0x526036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526037:{NFSU2_TR(0x526037);
w4(R+4,u32(0x89e7a0ull));
}
B52603c:{NFSU2_TR(0x52603c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1260ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526044:{NFSU2_TR(0x526044);
u8 U[8];
w4(U+0,u32(u32(u32(0x1218ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52604f:{NFSU2_TR(0x52604f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526054ull));
TAIL_STATIC(0x601600u,601);
}
B526054:L526054:{c.instructions+=3;NFSU2_TR(0x526054);
u8 U[4];
w4(U+0,u32(u32(u32(0xca4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52605b:{NFSU2_TR(0x52605b);
u8 U[5];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526063:{NFSU2_TR(0x526063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526068ull));
TAIL_STATIC(0x4022c0u,402);
}
B526068:L526068:{c.instructions+=3;NFSU2_TR(0x526068);
u8 U[4];
w4(U+0,u32(u32(u32(0x3a4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52606f:{NFSU2_TR(0x52606f);
u8 U[8];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B52607a:{NFSU2_TR(0x52607a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52607full));
TAIL_STATIC(0x4022c0u,402);
}
B52607f:L52607f:{c.instructions+=7;NFSU2_TR(0x52607f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526082:{NFSU2_TR(0x526082);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B526083:{NFSU2_TR(0x526083);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xab4cull))));
}
B526089:{NFSU2_TR(0x526089);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x28ull))));
}
B52608c:{NFSU2_TR(0x52608c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B52608e:{NFSU2_TR(0x52608e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526092:{NFSU2_TR(0x526092);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x525f13u,525);}
}
B526098:L526098:{c.instructions+=8;NFSU2_TR(0x526098);
u8 U[8];
w4(U+0,u32(u32(u32(0x1254ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52609f:{NFSU2_TR(0x52609f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5260a0:{NFSU2_TR(0x5260a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5260a1:{NFSU2_TR(0x5260a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5260a8:{NFSU2_TR(0x5260a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5260a9:{NFSU2_TR(0x5260a9);
__builtin_memmove((R+16),(R+20),4);
}
B5260ab:{NFSU2_TR(0x5260ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5260ac:{NFSU2_TR(0x5260ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5260b0:L5260b0:{c.instructions+=11;NFSU2_TR(0x5260b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260b1:{NFSU2_TR(0x5260b1);
__builtin_memmove((R+20),(R+16),4);
}
B5260b3:{NFSU2_TR(0x5260b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5260b6:{NFSU2_TR(0x5260b6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260b8:{NFSU2_TR(0x5260b8);
u8 U[4];
w4(U+0,u32(0x777351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260bd:{NFSU2_TR(0x5260bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5260c3:{NFSU2_TR(0x5260c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260c4:{NFSU2_TR(0x5260c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5260cb:{NFSU2_TR(0x5260cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260cc:{NFSU2_TR(0x5260cc);
w4(R+0,u32(0x1264ull));
}
B5260d1:{NFSU2_TR(0x5260d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5260d6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B5260d6:L5260d6:{c.instructions+=9;NFSU2_TR(0x5260d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260d7:{NFSU2_TR(0x5260d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260d8:{NFSU2_TR(0x5260d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5260db:{NFSU2_TR(0x5260db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5260df:{NFSU2_TR(0x5260df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260e0:{NFSU2_TR(0x5260e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5260e2:{NFSU2_TR(0x5260e2);
w4(R+4,u32(0x89e7a0ull));
}
B5260e7:{NFSU2_TR(0x5260e7);
__builtin_memmove(gp(0x89e7c4),(R+0),4);
}
B5260ec:{NFSU2_TR(0x5260ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5260f1ull));
TAIL_STATIC(0x5ed900u,5ed);
}
B5260f1:L5260f1:{c.instructions+=4;NFSU2_TR(0x5260f1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5260f4:{NFSU2_TR(0x5260f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5260f8:{NFSU2_TR(0x5260f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5260fc:{NFSU2_TR(0x5260fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526101ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B526101:L526101:{c.instructions+=7;NFSU2_TR(0x526101);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526103:{NFSU2_TR(0x526103);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526105:{NFSU2_TR(0x526105);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526107:{NFSU2_TR(0x526107);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526109:{NFSU2_TR(0x526109);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52610d:{NFSU2_TR(0x52610d);
u8 U[8];
w4(U+0,u32(u32(u32(0x128cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B526118:{NFSU2_TR(0x526118);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52611dull));
TAIL_STATIC(0x610270u,610);
}
B52611d:L52611d:{c.instructions+=4;NFSU2_TR(0x52611d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B526120:{NFSU2_TR(0x526120);
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
B526122:{NFSU2_TR(0x526122);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52612d:{NFSU2_TR(0x52612d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L526451;}}
}
B526133:L526133:{c.instructions+=3;NFSU2_TR(0x526133);
w4(R+28,u32(0x2ull));
}
B526138:{NFSU2_TR(0x526138);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x42ull))));
}
B52613b:{NFSU2_TR(0x52613b);
{goto L526140;}
}
B526140:L526140:{c.instructions+=5;NFSU2_TR(0x526140);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526144:{NFSU2_TR(0x526144);
u8 U[4];
w4(U+0,u32(0xbf800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526149:{NFSU2_TR(0x526149);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52614b:{NFSU2_TR(0x52614b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B52614e:{NFSU2_TR(0x52614e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526153ull));
TAIL_STATIC(0x5b6990u,5b6);
}
B526153:L526153:{c.instructions+=4;NFSU2_TR(0x526153);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B526157:{NFSU2_TR(0x526157);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B526159:{NFSU2_TR(0x526159);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52615b:{NFSU2_TR(0x52615b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52616b;}}
}
B52615d:L52615d:{c.instructions+=4;NFSU2_TR(0x52615d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B526161:{NFSU2_TR(0x526161);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526165:{NFSU2_TR(0x526165);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B526169:{NFSU2_TR(0x526169);
{goto L526186;}
}
B52616b:L52616b:{c.instructions+=2;NFSU2_TR(0x52616b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52616d:{NFSU2_TR(0x52616d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52618a;}}
}
B52616f:L52616f:{c.instructions+=4;NFSU2_TR(0x52616f);
__builtin_memmove((R+4),gp(0x862838),4);
}
B526175:{NFSU2_TR(0x526175);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B52617b:{NFSU2_TR(0x52617b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B526181:{NFSU2_TR(0x526181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526186ull));
TAIL_STATIC(0x5132e0u,513);
}
B526186:L526186:{c.instructions+=1;NFSU2_TR(0x526186);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52618a:L52618a:{c.instructions+=4;NFSU2_TR(0x52618a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B52618d:{NFSU2_TR(0x52618d);
u8 U[4];
w4(U+0,u32(0x79b87cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526192:{NFSU2_TR(0x526192);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526197:{NFSU2_TR(0x526197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52619cull));
TAIL_STATIC(0x43db50u,43d);
}
B52619c:L52619c:{c.instructions+=3;NFSU2_TR(0x52619c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52619f:{NFSU2_TR(0x52619f);
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
B5261a1:{NFSU2_TR(0x5261a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5261cc;}}
}
B5261a3:L5261a3:{c.instructions+=14;NFSU2_TR(0x5261a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5261a7:{NFSU2_TR(0x5261a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5261aa:{NFSU2_TR(0x5261aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5261ae:{NFSU2_TR(0x5261ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261af:{NFSU2_TR(0x5261af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261b0:{NFSU2_TR(0x5261b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261b1:{NFSU2_TR(0x5261b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261b3:{NFSU2_TR(0x5261b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261b4:{NFSU2_TR(0x5261b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5261b7:{NFSU2_TR(0x5261b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261b8:{NFSU2_TR(0x5261b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5261bc:{NFSU2_TR(0x5261bc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261bd:{NFSU2_TR(0x5261bd);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5261c2:{NFSU2_TR(0x5261c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5261c7ull));
TAIL_STATIC(0x4feaf0u,4fe);
}
B5261c7:L5261c7:{c.instructions+=2;NFSU2_TR(0x5261c7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5261ca:{NFSU2_TR(0x5261ca);
{goto L5261e0;}
}
B5261cc:L5261cc:{c.instructions+=3;NFSU2_TR(0x5261cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261cd:{NFSU2_TR(0x5261cd);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5261d1:{NFSU2_TR(0x5261d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5261d6ull));
TAIL_STATIC(0x637270u,637);
}
B5261d6:L5261d6:{c.instructions+=3;NFSU2_TR(0x5261d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5261d7:{NFSU2_TR(0x5261d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5261db:{NFSU2_TR(0x5261db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5261e0ull));
TAIL_STATIC(0x61c280u,61c);
}
B5261e0:L5261e0:{c.instructions+=11;NFSU2_TR(0x5261e0);
__builtin_memmove((R+4),gp(0x89e7f4),4);
}
B5261e6:{NFSU2_TR(0x5261e6);
u8 U[13];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B5261eb:{NFSU2_TR(0x5261eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B5261ef:{NFSU2_TR(0x5261ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B5261f3:{NFSU2_TR(0x5261f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5261f7:{NFSU2_TR(0x5261f7);
__builtin_memmove((R+8),gp(0x838428),4);
}
B5261fd:{NFSU2_TR(0x5261fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526201:{NFSU2_TR(0x526201);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+0),(U+0),1);
}
B526203:{NFSU2_TR(0x526203);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B526205:{NFSU2_TR(0x526205);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526207:{NFSU2_TR(0x526207);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526252;}}
}
B526209:L526209:{c.instructions+=3;NFSU2_TR(0x526209);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B52620e:{NFSU2_TR(0x52620e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526210:{NFSU2_TR(0x526210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52621f;}}
}
B526212:L526212:{c.instructions+=3;NFSU2_TR(0x526212);
__builtin_memmove((R+0),gp(0x890108),4);
}
B526217:{NFSU2_TR(0x526217);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526219:{NFSU2_TR(0x526219);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52621f;}}
}
B52621b:L52621b:{c.instructions+=2;NFSU2_TR(0x52621b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52621d:{NFSU2_TR(0x52621d);
{goto L526224;}
}
B52621f:L52621f:{c.instructions+=1;NFSU2_TR(0x52621f);
w4(R+0,u32(0x1ull));
}
B526224:L526224:{c.instructions+=9;NFSU2_TR(0x526224);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526226:{NFSU2_TR(0x526226);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52622a:{NFSU2_TR(0x52622a);
__builtin_memmove((R+4),(R+518),1);
}
B52622d:{NFSU2_TR(0x52622d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B526230:{NFSU2_TR(0x526230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526231:{NFSU2_TR(0x526231);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526233:{NFSU2_TR(0x526233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526234:{NFSU2_TR(0x526234);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526238:{NFSU2_TR(0x526238);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52623dull));
TAIL_STATIC(0x5b7570u,5b7);
}
B52623d:L52623d:{c.instructions+=3;NFSU2_TR(0x52623d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526241:{NFSU2_TR(0x526241);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B526244:{NFSU2_TR(0x526244);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526249ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B526249:L526249:{c.instructions+=2;NFSU2_TR(0x526249);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52624d:{NFSU2_TR(0x52624d);
{goto L5263da;}
}
B526252:L526252:{c.instructions+=2;NFSU2_TR(0x526252);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526254:{NFSU2_TR(0x526254);
if(r1(R+518)){{goto L5263da;}}
}
B52625a:L52625a:{c.instructions+=3;NFSU2_TR(0x52625a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52625c:{NFSU2_TR(0x52625c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B526264:{NFSU2_TR(0x526264);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526285;}}
}
B526266:L526266:{c.instructions+=4;NFSU2_TR(0x526266);
__builtin_memmove((R+4),gp(0x862838),4);
}
B52626c:{NFSU2_TR(0x52626c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x104ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B526272:{NFSU2_TR(0x526272);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x862018ull))));
}
B526278:{NFSU2_TR(0x526278);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52627dull));
TAIL_STATIC(0x5132e0u,513);
}
B52627d:L52627d:{c.instructions+=2;NFSU2_TR(0x52627d);
{u32 ea_=u32(u32(7967460u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B526283:{NFSU2_TR(0x526283);
{goto L526295;}
}
B526285:L526285:{c.instructions+=2;NFSU2_TR(0x526285);
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
B526287:{NFSU2_TR(0x526287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526299;}}
}
B526289:L526289:{c.instructions+=3;NFSU2_TR(0x526289);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B52628d:{NFSU2_TR(0x52628d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526291:{NFSU2_TR(0x526291);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B526295:L526295:{c.instructions+=1;NFSU2_TR(0x526295);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B526299:L526299:{c.instructions+=8;NFSU2_TR(0x526299);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52629d:{NFSU2_TR(0x52629d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5262a1:{NFSU2_TR(0x5262a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5262a2:{NFSU2_TR(0x5262a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5262a4:{NFSU2_TR(0x5262a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5262a8:{NFSU2_TR(0x5262a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5262a9:{NFSU2_TR(0x5262a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5262aa:{NFSU2_TR(0x5262aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5262afull));
TAIL_STATIC(0x59a450u,59a);
}
B5262af:L5262af:{c.instructions+=6;NFSU2_TR(0x5262af);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5262b3:{NFSU2_TR(0x5262b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5262b9:{NFSU2_TR(0x5262b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5262bc:{NFSU2_TR(0x5262bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5262be:{NFSU2_TR(0x5262be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5262c1:{NFSU2_TR(0x5262c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52647d;}}
}
B5262c7:L5262c7:{c.instructions+=6;NFSU2_TR(0x5262c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5262cb:{NFSU2_TR(0x5262cb);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5262d1:{NFSU2_TR(0x5262d1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5262d5:{NFSU2_TR(0x5262d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5262d7:{NFSU2_TR(0x5262d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5262da:{NFSU2_TR(0x5262da);
if(r1(R+514)){{goto L5262e4;}}
}
B5262dc:L5262dc:{c.instructions+=2;NFSU2_TR(0x5262dc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5262de:{NFSU2_TR(0x5262de);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5262e4:L5262e4:{c.instructions+=11;NFSU2_TR(0x5262e4);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5262ea:{NFSU2_TR(0x5262ea);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5262ef:{NFSU2_TR(0x5262ef);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5262f1:{NFSU2_TR(0x5262f1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5262f5:{NFSU2_TR(0x5262f5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5262f9:{NFSU2_TR(0x5262f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0xbf800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B526301:{NFSU2_TR(0x526301);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B526303:{NFSU2_TR(0x526303);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B526307:{NFSU2_TR(0x526307);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B52630b:{NFSU2_TR(0x52630b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B52630d:{NFSU2_TR(0x52630d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526376;}}
}
B52630f:L52630f:{c.instructions+=3;NFSU2_TR(0x52630f);
__builtin_memmove((R+0),gp(0x890108),4);
}
B526314:{NFSU2_TR(0x526314);
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
B526316:{NFSU2_TR(0x526316);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526376;}}
}
B526318:L526318:{c.instructions+=1;NFSU2_TR(0x526318);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52631dull));
TAIL_STATIC(0x599430u,599);
}
B52631d:L52631d:{c.instructions+=3;NFSU2_TR(0x52631d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526320:{NFSU2_TR(0x526320);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526324:{NFSU2_TR(0x526324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526329ull));
TAIL_STATIC(0x599430u,599);
}
B526329:L526329:{c.instructions+=6;NFSU2_TR(0x526329);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52632c:{NFSU2_TR(0x52632c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B526330:{NFSU2_TR(0x526330);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B526336:{NFSU2_TR(0x526336);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B526338:{NFSU2_TR(0x526338);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52633b:{NFSU2_TR(0x52633b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526488;}}
}
B526341:L526341:{c.instructions+=6;NFSU2_TR(0x526341);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B526345:{NFSU2_TR(0x526345);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52634b:{NFSU2_TR(0x52634b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B52634f:{NFSU2_TR(0x52634f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B526351:{NFSU2_TR(0x526351);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B526354:{NFSU2_TR(0x526354);
if(r1(R+514)){{goto L52635e;}}
}
B526356:L526356:{c.instructions+=2;NFSU2_TR(0x526356);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B526358:{NFSU2_TR(0x526358);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52635e:L52635e:{c.instructions+=8;NFSU2_TR(0x52635e);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B526364:{NFSU2_TR(0x526364);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B526368:{NFSU2_TR(0x526368);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B52636a:{NFSU2_TR(0x52636a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B52636c:{NFSU2_TR(0x52636c);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B52636e:{NFSU2_TR(0x52636e);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B526372:{NFSU2_TR(0x526372);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B526374:{NFSU2_TR(0x526374);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B526376:L526376:{c.instructions+=7;NFSU2_TR(0x526376);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52637a:{NFSU2_TR(0x52637a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52637e:{NFSU2_TR(0x52637e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52637f:{NFSU2_TR(0x52637f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526381:{NFSU2_TR(0x526381);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526382:{NFSU2_TR(0x526382);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526386:{NFSU2_TR(0x526386);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52638bull));
TAIL_STATIC(0x5b6ad0u,5b6);
}
B52638b:L52638b:{c.instructions+=4;NFSU2_TR(0x52638b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52638f:{NFSU2_TR(0x52638f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526391:{NFSU2_TR(0x526391);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526392:{NFSU2_TR(0x526392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526397ull));
TAIL_STATIC(0x59a490u,59a);
}
B526397:L526397:{c.instructions+=6;NFSU2_TR(0x526397);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52639b:{NFSU2_TR(0x52639b);
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
B52639e:{NFSU2_TR(0x52639e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263a0:{NFSU2_TR(0x5263a0);
u8 U[5];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5263a4:{NFSU2_TR(0x5263a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5263ac:{NFSU2_TR(0x5263ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5263b1ull));
TAIL_STATIC(0x4017e0u,401);
}
B5263b1:L5263b1:{c.instructions+=2;NFSU2_TR(0x5263b1);
__builtin_memmove((R+4),(R+0),4);
}
B5263b3:{NFSU2_TR(0x5263b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5263b8ull));
TAIL_STATIC(0x599600u,599);
}
B5263b8:L5263b8:{c.instructions+=8;NFSU2_TR(0x5263b8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5263bc:{NFSU2_TR(0x5263bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5263c0:{NFSU2_TR(0x5263c0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263c2:{NFSU2_TR(0x5263c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5263c6:{NFSU2_TR(0x5263c6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263c7:{NFSU2_TR(0x5263c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263c8:{NFSU2_TR(0x5263c8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5263cc:{NFSU2_TR(0x5263cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5263d1ull));
TAIL_STATIC(0x4017e0u,401);
}
B5263d1:L5263d1:{c.instructions+=2;NFSU2_TR(0x5263d1);
__builtin_memmove((R+4),(R+0),4);
}
B5263d3:{NFSU2_TR(0x5263d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5263d8ull));
TAIL_STATIC(0x5a6880u,5a6);
}
B5263d8:L5263d8:{c.instructions+=1;NFSU2_TR(0x5263d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5263da:L5263da:{c.instructions+=5;NFSU2_TR(0x5263da);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5263de:{NFSU2_TR(0x5263de);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263df:{NFSU2_TR(0x5263df);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263e1:{NFSU2_TR(0x5263e1);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5263e5:{NFSU2_TR(0x5263e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5263eaull));
TAIL_STATIC(0x6399d0u,639);
}
B5263ea:L5263ea:{c.instructions+=12;NFSU2_TR(0x5263ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B5263ef:{NFSU2_TR(0x5263ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5263f3:{NFSU2_TR(0x5263f3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263f4:{NFSU2_TR(0x5263f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263f5:{NFSU2_TR(0x5263f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263f6:{NFSU2_TR(0x5263f6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5263fa:{NFSU2_TR(0x5263fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263fb:{NFSU2_TR(0x5263fb);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5263fd:{NFSU2_TR(0x5263fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x62ull))));
__builtin_memmove((R+8),(U+0),4);
}
B526400:{NFSU2_TR(0x526400);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526401:{NFSU2_TR(0x526401);
u8 U[4];
w4(U+0,u32(u32(u32(0x948ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526408:{NFSU2_TR(0x526408);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52640dull));
TAIL_STATIC(0x6373e0u,637);
}
B52640d:L52640d:{c.instructions+=5;NFSU2_TR(0x52640d);
u8 U[4];
w4(U+0,u32(u32(u32(0x930ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B526414:{NFSU2_TR(0x526414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526415:{NFSU2_TR(0x526415);
w4(R+4,u32(0x89e7a0ull));
}
B52641a:{NFSU2_TR(0x52641a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1280ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526422:{NFSU2_TR(0x526422);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526427ull));
TAIL_STATIC(0x601600u,601);
}
B526427:L526427:{c.instructions+=3;NFSU2_TR(0x526427);
u8 U[4];
w4(U+0,u32(u32(u32(0xcc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52642e:{NFSU2_TR(0x52642e);
u8 U[5];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526436:{NFSU2_TR(0x526436);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52643bull));
TAIL_STATIC(0x4022c0u,402);
}
B52643b:L52643b:{c.instructions+=7;NFSU2_TR(0x52643b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52643e:{NFSU2_TR(0x52643e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B526442:{NFSU2_TR(0x526442);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
}
B526445:{NFSU2_TR(0x526445);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B526446:{NFSU2_TR(0x526446);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B526449:{NFSU2_TR(0x526449);
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
B52644b:{NFSU2_TR(0x52644b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526140u);}goto L526140;}}
}
B526451:L526451:{c.instructions+=3;NFSU2_TR(0x526451);
u8 U[4];
w4(U+0,u32(u32(u32(0x3c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526458:{NFSU2_TR(0x526458);
u8 U[8];
w4(U+0,u32(u32(u32(0x127cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B526463:{NFSU2_TR(0x526463);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526468ull));
TAIL_STATIC(0x4022c0u,402);
}
B526468:L526468:{c.instructions+=8;NFSU2_TR(0x526468);
u8 U[8];
w4(U+0,u32(u32(u32(0x1274ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52646f:{NFSU2_TR(0x52646f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526470:{NFSU2_TR(0x526470);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526471:{NFSU2_TR(0x526471);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526478:{NFSU2_TR(0x526478);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B526479:{NFSU2_TR(0x526479);
__builtin_memmove((R+16),(R+20),4);
}
B52647b:{NFSU2_TR(0x52647b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B52647c:{NFSU2_TR(0x52647c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52647d:L52647d:{c.instructions+=2;NFSU2_TR(0x52647d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B526483:{NFSU2_TR(0x526483);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5262e4u);}goto L5262e4;}
}
B526488:L526488:{c.instructions+=2;NFSU2_TR(0x526488);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52648e:{NFSU2_TR(0x52648e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52635eu);}goto L52635e;}
}
B5264a0:L5264a0:{c.instructions+=12;NFSU2_TR(0x5264a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5264a1:{NFSU2_TR(0x5264a1);
__builtin_memmove((R+20),(R+16),4);
}
B5264a3:{NFSU2_TR(0x5264a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5264a6:{NFSU2_TR(0x5264a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5264a7:{NFSU2_TR(0x5264a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5264a8:{NFSU2_TR(0x5264a8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5264a9:{NFSU2_TR(0x5264a9);
__builtin_memmove((R+28),gp(0x89e814),4);
}
B5264af:{NFSU2_TR(0x5264af);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5264b1:{NFSU2_TR(0x5264b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5264b3:{NFSU2_TR(0x5264b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5264b6:{NFSU2_TR(0x5264b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5264b9:{NFSU2_TR(0x5264b9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5264d6;}}
}
B5264bb:L5264bb:{c.instructions+=3;NFSU2_TR(0x5264bb);
__builtin_memmove((R+0),gp(0x89e810),4);
}
B5264c0:{NFSU2_TR(0x5264c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5264c3:{NFSU2_TR(0x5264c3);
__builtin_memmove((R+4),(R+28),4);
}
B5264c5:L5264c5:{c.instructions+=2;NFSU2_TR(0x5264c5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5264c8:{NFSU2_TR(0x5264c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5264cb;}}
}
B5264ca:L5264ca:{c.instructions+=1;NFSU2_TR(0x5264ca);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5264cb:L5264cb:{c.instructions+=3;NFSU2_TR(0x5264cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x940ull))));
}
B5264d0:{NFSU2_TR(0x5264d0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5264d1:{NFSU2_TR(0x5264d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5264c5u);}goto L5264c5;}}
}
B5264d3:L5264d3:{c.instructions+=1;NFSU2_TR(0x5264d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5264d6:L5264d6:{c.instructions+=5;NFSU2_TR(0x5264d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5264d9:{NFSU2_TR(0x5264d9);
w4(R+8,u32(0x1ull));
}
B5264de:{NFSU2_TR(0x5264de);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5264e0:{NFSU2_TR(0x5264e0);
w4(R+12,u32(0x2ull));
}
B5264e5:{NFSU2_TR(0x5264e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5264e9;}}
}
B5264e7:L5264e7:{c.instructions+=1;NFSU2_TR(0x5264e7);
{goto L5264f5;}
}
B5264e9:L5264e9:{c.instructions+=2;NFSU2_TR(0x5264e9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5264ec:{NFSU2_TR(0x5264ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5264f5;}}
}
B5264ee:L5264ee:{c.instructions+=2;NFSU2_TR(0x5264ee);
__builtin_memmove((R+8),(R+24),4);
}
B5264f0:{NFSU2_TR(0x5264f0);
w4(R+12,u32(0x1ull));
}
B5264f5:L5264f5:{c.instructions+=3;NFSU2_TR(0x5264f5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5264f7:{NFSU2_TR(0x5264f7);
w4(R+4,u32(0x1ull));
}
B5264fc:{NFSU2_TR(0x5264fc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52654c;}}
}
B5264fe:L5264fe:{c.instructions+=2;NFSU2_TR(0x5264fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B526500:{NFSU2_TR(0x526500);
__builtin_memmove((R+24),(R+28),4);
}
B526502:L526502:{c.instructions+=3;NFSU2_TR(0x526502);
__builtin_memmove((R+28),gp(0x89e810),4);
}
B526508:{NFSU2_TR(0x526508);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+8))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B52650c:{NFSU2_TR(0x52650c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526513;}}
}
B52650e:L52650e:{c.instructions+=2;NFSU2_TR(0x52650e);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B526512:{NFSU2_TR(0x526512);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B526513:L526513:{c.instructions+=3;NFSU2_TR(0x526513);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x940ull))));
}
B526518:{NFSU2_TR(0x526518);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B526519:{NFSU2_TR(0x526519);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526502u);}goto L526502;}}
}
B52651b:L52651b:{c.instructions+=4;NFSU2_TR(0x52651b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52651e:{NFSU2_TR(0x52651e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526520:{NFSU2_TR(0x526520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526523:{NFSU2_TR(0x526523);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52654c;}}
}
B526525:L526525:{c.instructions+=3;NFSU2_TR(0x526525);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B526527:{NFSU2_TR(0x526527);
__builtin_memmove((R+8),(R+28),4);
}
B526529:{NFSU2_TR(0x526529);
__builtin_memmove((R+16),(R+16),4);
}
B526530:L526530:{c.instructions+=3;NFSU2_TR(0x526530);
__builtin_memmove((R+28),gp(0x89e810),4);
}
B526536:{NFSU2_TR(0x526536);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+12))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B52653a:{NFSU2_TR(0x52653a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526541;}}
}
B52653c:L52653c:{c.instructions+=2;NFSU2_TR(0x52653c);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B526540:{NFSU2_TR(0x526540);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B526541:L526541:{c.instructions+=3;NFSU2_TR(0x526541);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x940ull))));
}
B526546:{NFSU2_TR(0x526546);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B526547:{NFSU2_TR(0x526547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526530u);}goto L526530;}}
}
B526549:L526549:{c.instructions+=1;NFSU2_TR(0x526549);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52654c:L52654c:{c.instructions+=2;NFSU2_TR(0x52654c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52654f:{NFSU2_TR(0x52654f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526556;}}
}
B526551:L526551:{c.instructions+=1;NFSU2_TR(0x526551);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526556ull));
TAIL_STATIC(0x4fede0u,4fe);
}
B526556:L526556:{c.instructions+=5;NFSU2_TR(0x526556);
__builtin_memmove((R+0),gp(0x850078),4);
}
B52655b:{NFSU2_TR(0x52655b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B52655d:{NFSU2_TR(0x52655d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52655f:{NFSU2_TR(0x52655f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526562:{NFSU2_TR(0x526562);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5266c4;}}
}
B526568:L526568:{c.instructions+=3;NFSU2_TR(0x526568);
__builtin_memmove((R+28),gp(0x85ef4c),4);
}
B52656e:{NFSU2_TR(0x52656e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526570:{NFSU2_TR(0x526570);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52661a;}}
}
B526576:L526576:{c.instructions+=12;NFSU2_TR(0x526576);
__builtin_memmove((R+4),gp(0x85ef48),4);
}
B52657c:{NFSU2_TR(0x52657c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x85ba64ull))));
}
B526582:{NFSU2_TR(0x526582);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x54ull))));
}
B526585:{NFSU2_TR(0x526585);
w4(R+0,u32(0x9bda4125ull));
}
B52658a:{NFSU2_TR(0x52658a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B52658c:{NFSU2_TR(0x52658c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B52658e:{NFSU2_TR(0x52658e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B526591:{NFSU2_TR(0x526591);
__builtin_memmove((R+0),(R+8),4);
}
B526593:{NFSU2_TR(0x526593);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B526596:{NFSU2_TR(0x526596);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B526598:{NFSU2_TR(0x526598);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52659a:{NFSU2_TR(0x52659a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52661a;}}
}
B5265a0:L5265a0:{c.instructions+=2;NFSU2_TR(0x5265a0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5265a2:{NFSU2_TR(0x5265a2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L52661a;}}
}
B5265a4:L5265a4:{c.instructions+=3;NFSU2_TR(0x5265a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5265a7:{NFSU2_TR(0x5265a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5265a9:{NFSU2_TR(0x5265a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5265c1;}}
}
B5265ab:L5265ab:{c.instructions+=2;NFSU2_TR(0x5265ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5265ad:{NFSU2_TR(0x5265ad);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5265c1;}}
}
B5265af:L5265af:{c.instructions+=2;NFSU2_TR(0x5265af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5265b2:{NFSU2_TR(0x5265b2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5265c1;}}
}
B5265b4:L5265b4:{c.instructions+=3;NFSU2_TR(0x5265b4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xd24ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5265ba:{NFSU2_TR(0x5265ba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x85bab8ull))));
}
B5265bf:{NFSU2_TR(0x5265bf);
{goto L5265c3;}
}
B5265c1:L5265c1:{c.instructions+=1;NFSU2_TR(0x5265c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5265c3:L5265c3:{c.instructions+=5;NFSU2_TR(0x5265c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5265c9:{NFSU2_TR(0x5265c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5265cc:{NFSU2_TR(0x5265cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5265ce:{NFSU2_TR(0x5265ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5265d0:{NFSU2_TR(0x5265d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5265e9;}}
}
B5265d2:L5265d2:{c.instructions+=1;NFSU2_TR(0x5265d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5265d5:L5265d5:{c.instructions+=2;NFSU2_TR(0x5265d5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5265d8:{NFSU2_TR(0x5265d8);
if(r1(R+518)){{goto L5266aa;}}
}
B5265de:L5265de:{c.instructions+=4;NFSU2_TR(0x5265de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5265df:{NFSU2_TR(0x5265df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x224ull))));
}
B5265e5:{NFSU2_TR(0x5265e5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5265e7:{NFSU2_TR(0x5265e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5265d5u);}goto L5265d5;}}
}
B5265e9:L5265e9:{c.instructions+=1;NFSU2_TR(0x5265e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5265eb:L5265eb:{c.instructions+=3;NFSU2_TR(0x5265eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5265ed:{NFSU2_TR(0x5265ed);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5265f1:{NFSU2_TR(0x5265f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52661a;}}
}
B5265f3:L5265f3:{c.instructions+=4;NFSU2_TR(0x5265f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5265f9:{NFSU2_TR(0x5265f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5265fb:{NFSU2_TR(0x5265fb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5265fd:{NFSU2_TR(0x5265fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L526616;}}
}
B5265ff:L5265ff:{c.instructions+=1;NFSU2_TR(0x5265ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526602:L526602:{c.instructions+=2;NFSU2_TR(0x526602);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B526605:{NFSU2_TR(0x526605);
if(r1(R+518)){{goto L5266b7;}}
}
B52660b:L52660b:{c.instructions+=4;NFSU2_TR(0x52660b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52660c:{NFSU2_TR(0x52660c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x224ull))));
}
B526612:{NFSU2_TR(0x526612);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B526614:{NFSU2_TR(0x526614);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526602u);}goto L526602;}}
}
B526616:L526616:{c.instructions+=1;NFSU2_TR(0x526616);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B526618:L526618:{c.instructions+=1;NFSU2_TR(0x526618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B52661a:L52661a:{c.instructions+=1;NFSU2_TR(0x52661a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B52661d:L52661d:{c.instructions+=2;NFSU2_TR(0x52661d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526620:{NFSU2_TR(0x526620);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L52666e;}}
}
B526622:L526622:{c.instructions+=2;NFSU2_TR(0x526622);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526624:{NFSU2_TR(0x526624);
if(r1(R+518)){{goto L526631;}}
}
B526626:L526626:{c.instructions+=3;NFSU2_TR(0x526626);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526627:{NFSU2_TR(0x526627);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526629:{NFSU2_TR(0x526629);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52662eull));
TAIL_STATIC(0x4fed50u,4fe);
}
B52662e:L52662e:{c.instructions+=1;NFSU2_TR(0x52662e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526631:L526631:{c.instructions+=2;NFSU2_TR(0x526631);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526633:{NFSU2_TR(0x526633);
if(r1(R+518)){{goto L526640;}}
}
B526635:L526635:{c.instructions+=3;NFSU2_TR(0x526635);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526636:{NFSU2_TR(0x526636);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526638:{NFSU2_TR(0x526638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52663dull));
TAIL_STATIC(0x4fed50u,4fe);
}
B52663d:L52663d:{c.instructions+=1;NFSU2_TR(0x52663d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526640:L526640:{c.instructions+=3;NFSU2_TR(0x526640);
__builtin_memmove((R+0),gp(0x864fe4),4);
}
B526645:{NFSU2_TR(0x526645);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526647:{NFSU2_TR(0x526647);
if(r1(R+518)){{goto L526659;}}
}
B526649:L526649:{c.instructions+=3;NFSU2_TR(0x526649);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52664a:{NFSU2_TR(0x52664a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52664c:{NFSU2_TR(0x52664c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526651ull));
TAIL_STATIC(0x4fed50u,4fe);
}
B526651:L526651:{c.instructions+=2;NFSU2_TR(0x526651);
__builtin_memmove((R+0),gp(0x864fe4),4);
}
B526656:{NFSU2_TR(0x526656);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526659:L526659:{c.instructions+=3;NFSU2_TR(0x526659);
__builtin_memmove((R+4),gp(0x864fe8),4);
}
B52665f:{NFSU2_TR(0x52665f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526661:{NFSU2_TR(0x526661);
if(r1(R+518)){{goto L52666e;}}
}
B526663:L526663:{c.instructions+=3;NFSU2_TR(0x526663);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526664:{NFSU2_TR(0x526664);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526666:{NFSU2_TR(0x526666);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52666bull));
TAIL_STATIC(0x4fed50u,4fe);
}
B52666b:L52666b:{c.instructions+=1;NFSU2_TR(0x52666b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B52666e:L52666e:{c.instructions+=2;NFSU2_TR(0x52666e);
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
B526670:{NFSU2_TR(0x526670);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5266a3;}}
}
B526672:L526672:{c.instructions+=4;NFSU2_TR(0x526672);
__builtin_memmove((R+4),(R+28),4);
}
B526674:{NFSU2_TR(0x526674);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B526676:{NFSU2_TR(0x526676);
w4(R+28,u32(0x1ull));
}
B52667b:{NFSU2_TR(0x52667b);
{goto L526680;}
}
B526680:L526680:{c.instructions+=3;NFSU2_TR(0x526680);
__builtin_memmove((R+24),gp(0x89e810),4);
}
B526686:{NFSU2_TR(0x526686);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+28))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B52668a:{NFSU2_TR(0x52668a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52669b;}}
}
B52668c:L52668c:{c.instructions+=3;NFSU2_TR(0x52668c);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+8,u32(s32(s8(r1(U+12)))));
}
B526691:{NFSU2_TR(0x526691);
u8 U[13];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B526695:{NFSU2_TR(0x526695);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x89e7d0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52669b:L52669b:{c.instructions+=3;NFSU2_TR(0x52669b);
w1(R+512,carry<u32>(r4(R+0),u32(0x940ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x940ull))));
}
B5266a0:{NFSU2_TR(0x5266a0);
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
B5266a1:{NFSU2_TR(0x5266a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526680u);}goto L526680;}}
}
B5266a3:L5266a3:{c.instructions+=6;NFSU2_TR(0x5266a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5266a4:{NFSU2_TR(0x5266a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5266a5:{NFSU2_TR(0x5266a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5266a6:{NFSU2_TR(0x5266a6);
__builtin_memmove((R+16),(R+20),4);
}
B5266a8:{NFSU2_TR(0x5266a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5266a9:{NFSU2_TR(0x5266a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5266aa:L5266aa:{c.instructions+=3;NFSU2_TR(0x5266aa);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5266b0:{NFSU2_TR(0x5266b0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5266b2:{NFSU2_TR(0x5266b2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5265ebu);}goto L5265eb;}
}
B5266b7:L5266b7:{c.instructions+=3;NFSU2_TR(0x5266b7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x224ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5266bd:{NFSU2_TR(0x5266bd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5266bf:{NFSU2_TR(0x5266bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526618u);}goto L526618;}
}
B5266c4:L5266c4:{c.instructions+=2;NFSU2_TR(0x5266c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5266c7:{NFSU2_TR(0x5266c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52661du);}goto L52661d;}}
}
B5266cd:L5266cd:{c.instructions+=2;NFSU2_TR(0x5266cd);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5266d4:{NFSU2_TR(0x5266d4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52661du);}goto L52661d;}}
}
B5266da:L5266da:{c.instructions+=3;NFSU2_TR(0x5266da);
__builtin_memmove((R+0),gp(0x83abcc),1);
}
B5266df:{NFSU2_TR(0x5266df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5266e1:{NFSU2_TR(0x5266e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526701;}}
}
B5266e3:L5266e3:{c.instructions+=2;NFSU2_TR(0x5266e3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5266e5:{NFSU2_TR(0x5266e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5266eaull));
TAIL_STATIC(0x43c1c0u,43c);
}
B5266ea:L5266ea:{c.instructions+=3;NFSU2_TR(0x5266ea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5266ed:{NFSU2_TR(0x5266ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5266f0:{NFSU2_TR(0x5266f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526705;}}
}
B5266f2:L5266f2:{c.instructions+=3;NFSU2_TR(0x5266f2);
w4(R+24,u32(0x2ull));
}
B5266f7:{NFSU2_TR(0x5266f7);
w4(R+12,u32(0x1ull));
}
B5266fc:{NFSU2_TR(0x5266fc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52661du);}goto L52661d;}
}
B526701:L526701:{c.instructions+=2;NFSU2_TR(0x526701);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526703:{NFSU2_TR(0x526703);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5266f2u);}goto L5266f2;}}
}
B526705:L526705:{c.instructions+=3;NFSU2_TR(0x526705);
w4(R+24,u32(0x1ull));
}
B52670a:{NFSU2_TR(0x52670a);
w4(R+12,u32(0x2ull));
}
B52670f:{NFSU2_TR(0x52670f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x52661du);}goto L52661d;}
}
B526720:L526720:{c.instructions+=4;NFSU2_TR(0x526720);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B526725:{NFSU2_TR(0x526725);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526728:{NFSU2_TR(0x526728);
s1(0x89e7e2,u8(0x1ull));
}
B52672f:{NFSU2_TR(0x52672f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52673a;}}
}
B526731:L526731:{c.instructions+=2;NFSU2_TR(0x526731);
w4(R+8,u32(m1(0x83abb4)));
}
B526738:{NFSU2_TR(0x526738);
{goto L526745;}
}
B52673a:L52673a:{c.instructions+=2;NFSU2_TR(0x52673a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52673d:{NFSU2_TR(0x52673d);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(r1(U+8)));
}
B526745:L526745:{c.instructions+=5;NFSU2_TR(0x526745);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526746:{NFSU2_TR(0x526746);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B526748:{NFSU2_TR(0x526748);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52674b:{NFSU2_TR(0x52674b);
__builtin_memmove(gp(0x89e7c0),(R+8),4);
}
B526751:{NFSU2_TR(0x526751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52677a;}}
}
B526753:L526753:{c.instructions+=2;NFSU2_TR(0x526753);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526756:{NFSU2_TR(0x526756);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526767;}}
}
B526758:L526758:{c.instructions+=3;NFSU2_TR(0x526758);
w4(R+4,u32(m1(0x83abb5)));
}
B52675f:{NFSU2_TR(0x52675f);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B526765:{NFSU2_TR(0x526765);
{goto L526780;}
}
B526767:L526767:{c.instructions+=4;NFSU2_TR(0x526767);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52676a:{NFSU2_TR(0x52676a);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac5ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B526772:{NFSU2_TR(0x526772);
__builtin_memmove(gp(0x89e7c4),(R+4),4);
}
B526778:{NFSU2_TR(0x526778);
{goto L526780;}
}
B52677a:L52677a:{c.instructions+=1;NFSU2_TR(0x52677a);
__builtin_memmove(gp(0x89e7c4),(R+24),4);
}
B526780:L526780:{c.instructions+=3;NFSU2_TR(0x526780);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526783:{NFSU2_TR(0x526783);
s4(0x89e7b0,u32(0x1ull));
}
B52678d:{NFSU2_TR(0x52678d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526798;}}
}
B52678f:L52678f:{c.instructions+=2;NFSU2_TR(0x52678f);
w4(R+4,u32(m1(0x83abb8)));
}
B526796:{NFSU2_TR(0x526796);
{goto L5267a3;}
}
B526798:L526798:{c.instructions+=2;NFSU2_TR(0x526798);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B52679b:{NFSU2_TR(0x52679b);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B5267a3:L5267a3:{c.instructions+=6;NFSU2_TR(0x5267a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5267a6:{NFSU2_TR(0x5267a6);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B5267ac:{NFSU2_TR(0x5267ac);
__builtin_memmove(gp(0x89e7f8),(R+24),4);
}
B5267b2:{NFSU2_TR(0x5267b2);
s4(0x89e7fc,u32(0x3f800000ull));
}
B5267bc:{NFSU2_TR(0x5267bc);
s4(0x89e800,u32(0x3f800000ull));
}
B5267c6:{NFSU2_TR(0x5267c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5267d1;}}
}
B5267c8:L5267c8:{c.instructions+=2;NFSU2_TR(0x5267c8);
w4(R+0,u32(m1(0x83abb6)));
}
B5267cf:{NFSU2_TR(0x5267cf);
{goto L5267dc;}
}
B5267d1:L5267d1:{c.instructions+=2;NFSU2_TR(0x5267d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5267d4:{NFSU2_TR(0x5267d4);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B5267dc:L5267dc:{c.instructions+=11;NFSU2_TR(0x5267dc);
w4(R+4,u32(m1(0x83aa1b)));
}
B5267e3:{NFSU2_TR(0x5267e3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5267e5:{NFSU2_TR(0x5267e5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5267e6:{NFSU2_TR(0x5267e6);
__builtin_memmove(gp(0x89e7f4),(R+0),4);
}
B5267eb:{NFSU2_TR(0x5267eb);
s1(0x89e7d2,u8(0x1ull));
}
B5267f2:{NFSU2_TR(0x5267f2);
__builtin_memmove(gp(0x89e7bc),(R+24),4);
}
B5267f8:{NFSU2_TR(0x5267f8);
s4(0x89e7a0,u32(0x1001ull));
}
B526802:{NFSU2_TR(0x526802);
__builtin_memmove(gp(0x89e7a4),(R+24),4);
}
B526808:{NFSU2_TR(0x526808);
__builtin_memmove(gp(0x89e7b4),(R+24),4);
}
B52680e:{NFSU2_TR(0x52680e);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B526814:{NFSU2_TR(0x526814);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526819ull));
TAIL_STATIC(0x525ed0u,525);
}
B526819:L526819:{c.instructions+=2;NFSU2_TR(0x526819);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52681b:{NFSU2_TR(0x52681b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526820ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5264a0u);}goto L5264a0;}
}
B526820:L526820:{c.instructions+=3;NFSU2_TR(0x526820);
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
B526823:{NFSU2_TR(0x526823);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526824:{NFSU2_TR(0x526824);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526830:L526830:{c.instructions+=5;NFSU2_TR(0x526830);
__builtin_memmove((R+0),gp(0x850078),4);
}
B526835:{NFSU2_TR(0x526835);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526838:{NFSU2_TR(0x526838);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526839:{NFSU2_TR(0x526839);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52683a:{NFSU2_TR(0x52683a);
if(r1(R+518)){{goto L526847;}}
}
B52683c:L52683c:{c.instructions+=2;NFSU2_TR(0x52683c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526841:{NFSU2_TR(0x526841);
if(r1(R+518)){{goto L526847;}}
}
B526843:L526843:{c.instructions+=2;NFSU2_TR(0x526843);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B526845:{NFSU2_TR(0x526845);
{goto L526849;}
}
B526847:L526847:{c.instructions+=1;NFSU2_TR(0x526847);
w1(R+12,u8(0x1ull));
}
B526849:L526849:{c.instructions+=14;NFSU2_TR(0x526849);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B52684b:{NFSU2_TR(0x52684b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52684d:{NFSU2_TR(0x52684d);
__builtin_memmove((R+0),(R+518),1);
}
B526850:{NFSU2_TR(0x526850);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B526852:{NFSU2_TR(0x526852);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B526854:{NFSU2_TR(0x526854);
__builtin_memmove(gp(0x89e7c4),(R+24),4);
}
B52685a:{NFSU2_TR(0x52685a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52685b:{NFSU2_TR(0x52685b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52685d:{NFSU2_TR(0x52685d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B526860:{NFSU2_TR(0x526860);
__builtin_memmove(gp(0x89e7c0),(R+0),4);
}
B526865:{NFSU2_TR(0x526865);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B52686a:{NFSU2_TR(0x52686a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52686d:{NFSU2_TR(0x52686d);
__builtin_memmove(gp(0x89e7b0),(R+4),4);
}
B526873:{NFSU2_TR(0x526873);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52687e;}}
}
B526875:L526875:{c.instructions+=2;NFSU2_TR(0x526875);
w4(R+4,u32(m1(0x83abb8)));
}
B52687c:{NFSU2_TR(0x52687c);
{goto L526889;}
}
B52687e:L52687e:{c.instructions+=2;NFSU2_TR(0x52687e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B526881:{NFSU2_TR(0x526881);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B526889:L526889:{c.instructions+=6;NFSU2_TR(0x526889);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B52688c:{NFSU2_TR(0x52688c);
__builtin_memmove(gp(0x89e7a8),(R+4),4);
}
B526892:{NFSU2_TR(0x526892);
__builtin_memmove(gp(0x89e7f8),(R+24),4);
}
B526898:{NFSU2_TR(0x526898);
s4(0x89e7fc,u32(0x3f800000ull));
}
B5268a2:{NFSU2_TR(0x5268a2);
s4(0x89e800,u32(0x3f800000ull));
}
B5268ac:{NFSU2_TR(0x5268ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5268b7;}}
}
B5268ae:L5268ae:{c.instructions+=2;NFSU2_TR(0x5268ae);
w4(R+4,u32(m1(0x83abb6)));
}
B5268b5:{NFSU2_TR(0x5268b5);
{goto L5268c2;}
}
B5268b7:L5268b7:{c.instructions+=2;NFSU2_TR(0x5268b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5268ba:{NFSU2_TR(0x5268ba);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aac6ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B5268c2:L5268c2:{c.instructions+=4;NFSU2_TR(0x5268c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5268c4:{NFSU2_TR(0x5268c4);
__builtin_memmove(gp(0x89e7f4),(R+4),4);
}
B5268ca:{NFSU2_TR(0x5268ca);
s1(0x89e7d2,u8(0x1ull));
}
B5268d1:{NFSU2_TR(0x5268d1);
if(r1(R+518)){{goto L5268da;}}
}
B5268d3:L5268d3:{c.instructions+=2;NFSU2_TR(0x5268d3);
w4(R+0,u32(0x8500b8ull));
}
B5268d8:{NFSU2_TR(0x5268d8);
{goto L5268f0;}
}
B5268da:L5268da:{c.instructions+=2;NFSU2_TR(0x5268da);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5268dd:{NFSU2_TR(0x5268dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5268e6;}}
}
B5268df:L5268df:{c.instructions+=2;NFSU2_TR(0x5268df);
w4(R+0,u32(0x83abd0ull));
}
B5268e4:{NFSU2_TR(0x5268e4);
{goto L5268f0;}
}
B5268e6:L5268e6:{c.instructions+=2;NFSU2_TR(0x5268e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5268e9:{NFSU2_TR(0x5268e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aaccull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5268f0:L5268f0:{c.instructions+=3;NFSU2_TR(0x5268f0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5268f2:{NFSU2_TR(0x5268f2);
__builtin_memmove(gp(0x89e7bc),(R+24),4);
}
B5268f8:{NFSU2_TR(0x5268f8);
if(r1(R+518)){{goto L526905;}}
}
B5268fa:L5268fa:{c.instructions+=3;NFSU2_TR(0x5268fa);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(r2(U+0)));
}
B5268fd:{NFSU2_TR(0x5268fd);
__builtin_memmove(gp(0x89e7a0),(R+8),4);
}
B526903:{NFSU2_TR(0x526903);
{goto L526921;}
}
B526905:L526905:{c.instructions+=2;NFSU2_TR(0x526905);
u8 U[4];
w4(U+0,u32(0x7ffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52690a:{NFSU2_TR(0x52690a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52690full));
TAIL_STATIC(0x43c1c0u,43c);
}
B52690f:L52690f:{c.instructions+=4;NFSU2_TR(0x52690f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526912:{NFSU2_TR(0x526912);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B526915:{NFSU2_TR(0x526915);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x79aa3cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B52691c:{NFSU2_TR(0x52691c);
__builtin_memmove(gp(0x89e7a0),(R+0),4);
}
B526921:L526921:{c.instructions+=6;NFSU2_TR(0x526921);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526923:{NFSU2_TR(0x526923);
w4(R+4,u32(m1(0x83aa1b)));
}
B52692a:{NFSU2_TR(0x52692a);
__builtin_memmove(gp(0x89e7a4),(R+24),4);
}
B526930:{NFSU2_TR(0x526930);
__builtin_memmove(gp(0x89e7b4),(R+24),4);
}
B526936:{NFSU2_TR(0x526936);
__builtin_memmove(gp(0x7f68b0),(R+4),4);
}
B52693c:{NFSU2_TR(0x52693c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526946;}}
}
B52693e:L52693e:{c.instructions+=3;NFSU2_TR(0x52693e);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B526942:{NFSU2_TR(0x526942);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526944:{NFSU2_TR(0x526944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52695b;}}
}
B526946:L526946:{c.instructions+=4;NFSU2_TR(0x526946);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B52694c:{NFSU2_TR(0x52694c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52694d:{NFSU2_TR(0x52694d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52694e:{NFSU2_TR(0x52694e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526953ull));
TAIL_STATIC(0x525ed0u,525);
}
B526953:L526953:{c.instructions+=2;NFSU2_TR(0x526953);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526956:{NFSU2_TR(0x526956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52695bull));
TAIL_STATIC(0x4fe9f0u,4fe);
}
B52695b:L52695b:{c.instructions+=4;NFSU2_TR(0x52695b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52695c:{NFSU2_TR(0x52695c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52695d:{NFSU2_TR(0x52695d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B526965:{NFSU2_TR(0x526965);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5264a0u);}goto L5264a0;}
}
B526970:L526970:{c.instructions+=11;NFSU2_TR(0x526970);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526971:{NFSU2_TR(0x526971);
__builtin_memmove((R+20),(R+16),4);
}
B526973:{NFSU2_TR(0x526973);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B526976:{NFSU2_TR(0x526976);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526978:{NFSU2_TR(0x526978);
u8 U[4];
w4(U+0,u32(0x777351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52697d:{NFSU2_TR(0x52697d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526983:{NFSU2_TR(0x526983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526984:{NFSU2_TR(0x526984);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52698b:{NFSU2_TR(0x52698b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52698c:{NFSU2_TR(0x52698c);
w4(R+0,u32(0x1284ull));
}
B526991:{NFSU2_TR(0x526991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526996ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B526996:L526996:{c.instructions+=15;NFSU2_TR(0x526996);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B526999:{NFSU2_TR(0x526999);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52699a:{NFSU2_TR(0x52699a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B52699c:{NFSU2_TR(0x52699c);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B52699e:{NFSU2_TR(0x52699e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52699f:{NFSU2_TR(0x52699f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5269a0:{NFSU2_TR(0x5269a0);
s1(0x89e7e6,u8(0x1ull));
}
B5269a7:{NFSU2_TR(0x5269a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5269ab:{NFSU2_TR(0x5269ab);
__builtin_memmove(gp(0x89e7d8),(R+12),1);
}
B5269b1:{NFSU2_TR(0x5269b1);
__builtin_memmove(gp(0x89e7d9),(R+12),1);
}
B5269b7:{NFSU2_TR(0x5269b7);
__builtin_memmove(gp(0x89e7e2),(R+12),1);
}
B5269bd:{NFSU2_TR(0x5269bd);
__builtin_memmove(gp(0x89e7e3),(R+12),1);
}
B5269c3:{NFSU2_TR(0x5269c3);
__builtin_memmove(gp(0x89e7e1),(R+12),1);
}
B5269c9:{NFSU2_TR(0x5269c9);
__builtin_memmove(gp(0x89e7e0),(R+12),1);
}
B5269cf:{NFSU2_TR(0x5269cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526a09;}}
}
B5269d1:L5269d1:{c.instructions+=4;NFSU2_TR(0x5269d1);
__builtin_memmove((R+0),gp(0x83a63c),4);
}
B5269d6:{NFSU2_TR(0x5269d6);
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
B5269d9:{NFSU2_TR(0x5269d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5269dd:{NFSU2_TR(0x5269dd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L526a09;}}
}
B5269df:L5269df:{c.instructions+=1;NFSU2_TR(0x5269df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x526bfcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5269e6:L5269e6:{c.instructions+=1;NFSU2_TR(0x5269e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5269ebull));
TAIL_STATIC(0x4fef80u,4fe);
}
B5269eb:L5269eb:{c.instructions+=1;NFSU2_TR(0x5269eb);
{goto L526a0e;}
}
B5269ed:L5269ed:{c.instructions+=1;NFSU2_TR(0x5269ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5269f2ull));
TAIL_STATIC(0x4feff0u,4fe);
}
B5269f2:L5269f2:{c.instructions+=1;NFSU2_TR(0x5269f2);
{goto L526a0e;}
}
B5269f4:L5269f4:{c.instructions+=1;NFSU2_TR(0x5269f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5269f9ull));
TAIL_STATIC(0x4ff070u,4ff);
}
B5269f9:L5269f9:{c.instructions+=1;NFSU2_TR(0x5269f9);
{goto L526a0e;}
}
B5269fb:L5269fb:{c.instructions+=1;NFSU2_TR(0x5269fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a00ull));
TAIL_STATIC(0x4ff0e0u,4ff);
}
B526a00:L526a00:{c.instructions+=1;NFSU2_TR(0x526a00);
{goto L526a0e;}
}
B526a02:L526a02:{c.instructions+=1;NFSU2_TR(0x526a02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a07ull));
TAIL_STATIC(0x4fef80u,4fe);
}
B526a07:L526a07:{c.instructions+=1;NFSU2_TR(0x526a07);
{goto L526a0e;}
}
B526a09:L526a09:{c.instructions+=1;NFSU2_TR(0x526a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a0eull));
TAIL_STATIC(0x4ff160u,4ff);
}
B526a0e:L526a0e:{c.instructions+=6;NFSU2_TR(0x526a0e);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B526a14:{NFSU2_TR(0x526a14);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B526a16:{NFSU2_TR(0x526a16);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B526a18:{NFSU2_TR(0x526a18);
s4(0x89e7fc,u32(0x3f800000ull));
}
B526a22:{NFSU2_TR(0x526a22);
__builtin_memmove(gp(0x89e814),(R+12),4);
}
B526a28:{NFSU2_TR(0x526a28);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L526a49;}}
}
B526a2a:L526a2a:{c.instructions+=1;NFSU2_TR(0x526a2a);
__builtin_memmove((R+12),(R+12),4);
}
B526a30:L526a30:{c.instructions+=6;NFSU2_TR(0x526a30);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B526a37:{NFSU2_TR(0x526a37);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e7e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B526a3e:{NFSU2_TR(0x526a3e);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B526a44:{NFSU2_TR(0x526a44);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B526a45:{NFSU2_TR(0x526a45);
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
B526a47:{NFSU2_TR(0x526a47);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526a30u);}goto L526a30;}}
}
B526a49:L526a49:{c.instructions+=5;NFSU2_TR(0x526a49);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B526a4e:{NFSU2_TR(0x526a4e);
__builtin_memmove((R+28),gp(0x83aa6c),4);
}
B526a54:{NFSU2_TR(0x526a54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a55:{NFSU2_TR(0x526a55);
__builtin_memmove((R+24),(R+0),4);
}
B526a57:{NFSU2_TR(0x526a57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a5cull));
TAIL_STATIC(0x571ac0u,571);
}
B526a5c:L526a5c:{c.instructions+=6;NFSU2_TR(0x526a5c);
w4(R+0,u32(r1(R+0)));
}
B526a5f:{NFSU2_TR(0x526a5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a60:{NFSU2_TR(0x526a60);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B526a64:{NFSU2_TR(0x526a64);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a66:{NFSU2_TR(0x526a66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a67:{NFSU2_TR(0x526a67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a6cull));
TAIL_STATIC(0x571fd0u,571);
}
B526a6c:L526a6c:{c.instructions+=4;NFSU2_TR(0x526a6c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B526a70:{NFSU2_TR(0x526a70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a71:{NFSU2_TR(0x526a71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a72:{NFSU2_TR(0x526a72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a77ull));
TAIL_STATIC(0x571fb0u,571);
}
B526a77:L526a77:{c.instructions+=6;NFSU2_TR(0x526a77);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xffffffffull))));
}
B526a7a:{NFSU2_TR(0x526a7a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B526a7d:{NFSU2_TR(0x526a7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526a81:{NFSU2_TR(0x526a81);
__builtin_memmove(gp(0x89e808),(R+24),4);
}
B526a87:{NFSU2_TR(0x526a87);
__builtin_memmove(gp(0x89e80c),(R+24),4);
}
B526a8d:{NFSU2_TR(0x526a8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526a92ull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B526a92:L526a92:{c.instructions+=7;NFSU2_TR(0x526a92);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a93:{NFSU2_TR(0x526a93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a94:{NFSU2_TR(0x526a94);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a95:{NFSU2_TR(0x526a95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526a96:{NFSU2_TR(0x526a96);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526a9a:{NFSU2_TR(0x526a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x12acull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526aa1:{NFSU2_TR(0x526aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526aa6ull));
TAIL_STATIC(0x610270u,610);
}
B526aa6:L526aa6:{c.instructions+=6;NFSU2_TR(0x526aa6);
__builtin_memmove((R+4),gp(0x850078),4);
}
B526aac:{NFSU2_TR(0x526aac);
__builtin_memmove((R+24),gp(0x863480),4);
}
B526ab2:{NFSU2_TR(0x526ab2);
w4(R+0,u32(0x1ull));
}
B526ab7:{NFSU2_TR(0x526ab7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ab9:{NFSU2_TR(0x526ab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x129cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ac0:{NFSU2_TR(0x526ac0);
if(r1(R+518)){{goto L526ac8;}}
}
B526ac2:L526ac2:{c.instructions+=1;NFSU2_TR(0x526ac2);
__builtin_memmove((R+24),gp(0x83aab8),4);
}
B526ac8:L526ac8:{c.instructions+=3;NFSU2_TR(0x526ac8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B526aca:{NFSU2_TR(0x526aca);
w4(R+0,u32(0x844968ull));
}
B526acf:{NFSU2_TR(0x526acf);
}
B526ad0:L526ad0:{c.instructions+=3;NFSU2_TR(0x526ad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B526ad2:{NFSU2_TR(0x526ad2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ad4:{NFSU2_TR(0x526ad4);
if(r1(R+518)){{goto L526adb;}}
}
B526ad6:L526ad6:{c.instructions+=2;NFSU2_TR(0x526ad6);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526ad9:{NFSU2_TR(0x526ad9);
if(r1(R+518)){{goto L526ae8;}}
}
B526adb:L526adb:{c.instructions+=4;NFSU2_TR(0x526adb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B526ade:{NFSU2_TR(0x526ade);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B526adf:{NFSU2_TR(0x526adf);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x844ad4ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x844ad4ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B526ae4:{NFSU2_TR(0x526ae4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526ad0u);}goto L526ad0;}}
}
B526ae6:L526ae6:{c.instructions+=1;NFSU2_TR(0x526ae6);
{goto L526b0c;}
}
B526ae8:L526ae8:{c.instructions+=3;NFSU2_TR(0x526ae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x844968ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B526aef:{NFSU2_TR(0x526aef);
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
B526af1:{NFSU2_TR(0x526af1);
if(r1(R+518)){{goto L526b0c;}}
}
B526af3:L526af3:{c.instructions+=3;NFSU2_TR(0x526af3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B526af5:{NFSU2_TR(0x526af5);
__builtin_memmove((R+4),(R+24),4);
}
B526af7:{NFSU2_TR(0x526af7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526afaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B526afa:L526afa:{c.instructions+=8;NFSU2_TR(0x526afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526afe:{NFSU2_TR(0x526afe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B526b00:{NFSU2_TR(0x526b00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b01:{NFSU2_TR(0x526b01);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B526b05:{NFSU2_TR(0x526b05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b06:{NFSU2_TR(0x526b06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b07:{NFSU2_TR(0x526b07);
__builtin_memmove((R+4),(R+24),4);
}
B526b09:{NFSU2_TR(0x526b09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b0cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B526b0c:L526b0c:{c.instructions+=3;NFSU2_TR(0x526b0c);
w4(R+4,u32(0xaull));
}
B526b11:{NFSU2_TR(0x526b11);
w4(R+24,u32(0x83a611ull));
}
B526b16:{NFSU2_TR(0x526b16);
u8 U[4];
w4(U+0,u32(u32(u32(0x3f8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B526b1d:L526b1d:{c.instructions+=1;NFSU2_TR(0x526b1d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L526b1f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526b1du);}goto L526b1d;}
}
B526b1f:L526b1f:{c.instructions+=7;NFSU2_TR(0x526b1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b21:{NFSU2_TR(0x526b21);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b23:{NFSU2_TR(0x526b23);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b25:{NFSU2_TR(0x526b25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b26:{NFSU2_TR(0x526b26);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526b2a:{NFSU2_TR(0x526b2a);
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
B526b2b:{NFSU2_TR(0x526b2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b30ull));
TAIL_STATIC(0x639ce0u,639);
}
B526b30:L526b30:{c.instructions+=9;NFSU2_TR(0x526b30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b31:{NFSU2_TR(0x526b31);
u8 U[4];
w4(U+0,u32(0xfffffffeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b33:{NFSU2_TR(0x526b33);
u8 U[4];
w4(U+0,u32(0x79b884ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b38:{NFSU2_TR(0x526b38);
u8 U[4];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B526b3c:{NFSU2_TR(0x526b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b3d:{NFSU2_TR(0x526b3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b3f:{NFSU2_TR(0x526b3f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b40:{NFSU2_TR(0x526b40);
u8 U[4];
w4(U+0,u32(u32(u32(0x968ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526b47:{NFSU2_TR(0x526b47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b4cull));
TAIL_STATIC(0x6373e0u,637);
}
B526b4c:L526b4c:{c.instructions+=5;NFSU2_TR(0x526b4c);
u8 U[4];
w4(U+0,u32(u32(u32(0x950ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526b53:{NFSU2_TR(0x526b53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b54:{NFSU2_TR(0x526b54);
w4(R+4,u32(0x89e7a0ull));
}
B526b59:{NFSU2_TR(0x526b59);
u8 U[5];
w4(U+0,u32(u32(u32(0x12a0ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526b61:{NFSU2_TR(0x526b61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b66ull));
TAIL_STATIC(0x601600u,601);
}
B526b66:L526b66:{c.instructions+=2;NFSU2_TR(0x526b66);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b68:{NFSU2_TR(0x526b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b6dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5264a0u);}goto L5264a0;}
}
B526b6d:L526b6d:{c.instructions+=5;NFSU2_TR(0x526b6d);
__builtin_memmove((R+0),gp(0x83a9d8),4);
}
B526b72:{NFSU2_TR(0x526b72);
__builtin_memmove((R+28),gp(0x83aa6c),4);
}
B526b78:{NFSU2_TR(0x526b78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b79:{NFSU2_TR(0x526b79);
__builtin_memmove((R+24),(R+0),4);
}
B526b7b:{NFSU2_TR(0x526b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b80ull));
TAIL_STATIC(0x571ac0u,571);
}
B526b80:L526b80:{c.instructions+=6;NFSU2_TR(0x526b80);
w4(R+0,u32(r1(R+0)));
}
B526b83:{NFSU2_TR(0x526b83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b84:{NFSU2_TR(0x526b84);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B526b88:{NFSU2_TR(0x526b88);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b8a:{NFSU2_TR(0x526b8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b8b:{NFSU2_TR(0x526b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b90ull));
TAIL_STATIC(0x571fd0u,571);
}
B526b90:L526b90:{c.instructions+=4;NFSU2_TR(0x526b90);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B526b94:{NFSU2_TR(0x526b94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b95:{NFSU2_TR(0x526b95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526b96:{NFSU2_TR(0x526b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526b9bull));
TAIL_STATIC(0x571fb0u,571);
}
B526b9b:L526b9b:{c.instructions+=5;NFSU2_TR(0x526b9b);
__builtin_memmove((R+0),gp(0x8654a4),4);
}
B526ba0:{NFSU2_TR(0x526ba0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B526ba3:{NFSU2_TR(0x526ba3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ba6:{NFSU2_TR(0x526ba6);
w4(R+4,u32(0x865480ull));
}
B526bab:{NFSU2_TR(0x526bab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526bb4;}}
}
B526bad:L526bad:{c.instructions+=1;NFSU2_TR(0x526bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526bb2ull));
TAIL_STATIC(0x578320u,578);
}
B526bb2:L526bb2:{c.instructions+=1;NFSU2_TR(0x526bb2);
{goto L526bb9;}
}
B526bb4:L526bb4:{c.instructions+=1;NFSU2_TR(0x526bb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526bb9ull));
TAIL_STATIC(0x581020u,581);
}
B526bb9:L526bb9:{c.instructions+=3;NFSU2_TR(0x526bb9);
u8 U[4];
w4(U+0,u32(u32(u32(0xce4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526bc0:{NFSU2_TR(0x526bc0);
u8 U[5];
w4(U+0,u32(u32(u32(0x129cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B526bc8:{NFSU2_TR(0x526bc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526bcdull));
TAIL_STATIC(0x4022c0u,402);
}
B526bcd:L526bcd:{c.instructions+=3;NFSU2_TR(0x526bcd);
u8 U[4];
w4(U+0,u32(u32(u32(0x3e4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B526bd4:{NFSU2_TR(0x526bd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x129cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B526bdf:{NFSU2_TR(0x526bdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526be4ull));
TAIL_STATIC(0x4022c0u,402);
}
B526be4:L526be4:{c.instructions+=8;NFSU2_TR(0x526be4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1294ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526beb:{NFSU2_TR(0x526beb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526bec:{NFSU2_TR(0x526bec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526bed:{NFSU2_TR(0x526bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526bf4:{NFSU2_TR(0x526bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B526bf5:{NFSU2_TR(0x526bf5);
__builtin_memmove((R+16),(R+20),4);
}
B526bf7:{NFSU2_TR(0x526bf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B526bf8:{NFSU2_TR(0x526bf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526c10:L526c10:{c.instructions+=3;NFSU2_TR(0x526c10);
__builtin_memmove((R+0),gp(0x838974),4);
}
B526c15:{NFSU2_TR(0x526c15);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526c19:{NFSU2_TR(0x526c19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526c34;}}
}
B526c1b:L526c1b:{c.instructions+=4;NFSU2_TR(0x526c1b);
__builtin_memmove((R+4),gp(0x838964),4);
}
B526c21:{NFSU2_TR(0x526c21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c22:{NFSU2_TR(0x526c22);
w4(R+4,u32(0x8637b0ull));
}
B526c27:{NFSU2_TR(0x526c27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526c2cull));
TAIL_STATIC(0x51bb70u,51b);
}
B526c2c:L526c2c:{c.instructions+=2;NFSU2_TR(0x526c2c);
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
B526c2e:{NFSU2_TR(0x526c2e);
if(r1(R+518)){{goto L526c34;}}
}
B526c30:L526c30:{c.instructions+=2;NFSU2_TR(0x526c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526c33:{NFSU2_TR(0x526c33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526c34:L526c34:{c.instructions+=2;NFSU2_TR(0x526c34);
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
B526c36:{NFSU2_TR(0x526c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526c40:L526c40:{c.instructions+=7;NFSU2_TR(0x526c40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c41:{NFSU2_TR(0x526c41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c42:{NFSU2_TR(0x526c42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c43:{NFSU2_TR(0x526c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526c47:{NFSU2_TR(0x526c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x324ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526c4d:{NFSU2_TR(0x526c4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526c4f:{NFSU2_TR(0x526c4f);
if(r1(R+518)){{goto L526c80;}}
}
B526c51:L526c51:{c.instructions+=2;NFSU2_TR(0x526c51);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B526c54:{NFSU2_TR(0x526c54);
if(r1(R+518)){{goto L526c80;}}
}
B526c56:L526c56:{c.instructions+=3;NFSU2_TR(0x526c56);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c5b:{NFSU2_TR(0x526c5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c5c:{NFSU2_TR(0x526c5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526c61ull));
TAIL_STATIC(0x43dc30u,43d);
}
B526c61:L526c61:{c.instructions+=3;NFSU2_TR(0x526c61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526c64:{NFSU2_TR(0x526c64);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B526c66:{NFSU2_TR(0x526c66);
if(r1(R+518)){{goto L526c80;}}
}
B526c68:L526c68:{c.instructions+=3;NFSU2_TR(0x526c68);
u8 U[4];
w4(U+0,u32(0x7902d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c6d:{NFSU2_TR(0x526c6d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526c6e:{NFSU2_TR(0x526c6e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526c73ull));
TAIL_STATIC(0x43dc30u,43d);
}
B526c73:L526c73:{c.instructions+=3;NFSU2_TR(0x526c73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526c76:{NFSU2_TR(0x526c76);
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
B526c78:{NFSU2_TR(0x526c78);
if(r1(R+518)){{goto L526c80;}}
}
B526c7a:L526c7a:{c.instructions+=5;NFSU2_TR(0x526c7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526c7b:{NFSU2_TR(0x526c7b);
__builtin_memmove((R+0),(R+24),4);
}
B526c7d:{NFSU2_TR(0x526c7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526c7e:{NFSU2_TR(0x526c7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526c7f:{NFSU2_TR(0x526c7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526c80:L526c80:{c.instructions+=3;NFSU2_TR(0x526c80);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x32dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B526c86:{NFSU2_TR(0x526c86);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526c88:{NFSU2_TR(0x526c88);
if(r1(R+518)){{goto L526cbf;}}
}
B526c8a:L526c8a:{c.instructions+=5;NFSU2_TR(0x526c8a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B526c8c:{NFSU2_TR(0x526c8c);
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
B526c8e:{NFSU2_TR(0x526c8e);
w4(R+8,u32(0x1ull));
}
B526c93:{NFSU2_TR(0x526c93);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526c96:{NFSU2_TR(0x526c96);
if(r1(R+518)){{goto L526cad;}}
}
B526c98:L526c98:{c.instructions+=2;NFSU2_TR(0x526c98);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xaull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526c9a:{NFSU2_TR(0x526c9a);
if(r1(R+518)){{goto L526ca0;}}
}
B526c9c:L526c9c:{c.instructions+=2;NFSU2_TR(0x526c9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526c9e:{NFSU2_TR(0x526c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526ca1;}}
}
B526ca0:L526ca0:{c.instructions+=1;NFSU2_TR(0x526ca0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B526ca1:L526ca1:{c.instructions+=4;NFSU2_TR(0x526ca1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+0),(U+0),1);
}
B526ca3:{NFSU2_TR(0x526ca3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B526ca4:{NFSU2_TR(0x526ca4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B526ca6:{NFSU2_TR(0x526ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526c98u);}goto L526c98;}}
}
B526ca8:L526ca8:{c.instructions+=2;NFSU2_TR(0x526ca8);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B526cab:{NFSU2_TR(0x526cab);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L526cb6;}}
}
B526cad:L526cad:{c.instructions+=5;NFSU2_TR(0x526cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526cae:{NFSU2_TR(0x526cae);
w4(R+0,u32(0x790458ull));
}
B526cb3:{NFSU2_TR(0x526cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526cb4:{NFSU2_TR(0x526cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526cb5:{NFSU2_TR(0x526cb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526cb6:L526cb6:{c.instructions+=5;NFSU2_TR(0x526cb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526cb7:{NFSU2_TR(0x526cb7);
w4(R+0,u32(0x790444ull));
}
B526cbc:{NFSU2_TR(0x526cbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526cbd:{NFSU2_TR(0x526cbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526cbe:{NFSU2_TR(0x526cbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526cbf:L526cbf:{c.instructions+=2;NFSU2_TR(0x526cbf);
u8 U[4];
w4(U+0,u32(0x79b898ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526cc4:{NFSU2_TR(0x526cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526cc9ull));
TAIL_STATIC(0x43db50u,43d);
}
B526cc9:L526cc9:{c.instructions+=2;NFSU2_TR(0x526cc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526cca:{NFSU2_TR(0x526cca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526ccfull));
TAIL_STATIC(0x51bd70u,51b);
}
B526ccf:L526ccf:{c.instructions+=4;NFSU2_TR(0x526ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526cd2:{NFSU2_TR(0x526cd2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526cd3:{NFSU2_TR(0x526cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526cd7:{NFSU2_TR(0x526cd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526cdcull));
TAIL_STATIC(0x43dbb0u,43d);
}
B526cdc:L526cdc:{c.instructions+=7;NFSU2_TR(0x526cdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ce0:{NFSU2_TR(0x526ce0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B526ce4:{NFSU2_TR(0x526ce4);
u8 U[4];
w4(U+0,u32(0x7902d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526ce9:{NFSU2_TR(0x526ce9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526cea:{NFSU2_TR(0x526cea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B526cee:{NFSU2_TR(0x526cee);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B526cf2:{NFSU2_TR(0x526cf2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526cf7ull));
TAIL_STATIC(0x43dc30u,43d);
}
B526cf7:L526cf7:{c.instructions+=3;NFSU2_TR(0x526cf7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B526cfa:{NFSU2_TR(0x526cfa);
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
B526cfc:{NFSU2_TR(0x526cfc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526d07;}}
}
B526cfe:L526cfe:{c.instructions+=5;NFSU2_TR(0x526cfe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526cff:{NFSU2_TR(0x526cff);
w4(R+0,u32(0x799e14ull));
}
B526d04:{NFSU2_TR(0x526d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526d05:{NFSU2_TR(0x526d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526d06:{NFSU2_TR(0x526d06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526d07:L526d07:{c.instructions+=7;NFSU2_TR(0x526d07);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B526d0b:{NFSU2_TR(0x526d0b);
u8 U[4];
w4(U+0,u32(0x7902c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526d10:{NFSU2_TR(0x526d10);
{u32 ea_=u32(u32(7977108u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B526d16:{NFSU2_TR(0x526d16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526d17:{NFSU2_TR(0x526d17);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B526d19:{NFSU2_TR(0x526d19);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B526d1c:{NFSU2_TR(0x526d1c);
if(r1(R+514)){{goto L526d3c;}}
}
B526d1e:L526d1e:{c.instructions+=1;NFSU2_TR(0x526d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526d23ull));
TAIL_STATIC(0x43dc30u,43d);
}
B526d23:L526d23:{c.instructions+=3;NFSU2_TR(0x526d23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526d26:{NFSU2_TR(0x526d26);
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
B526d28:{NFSU2_TR(0x526d28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526d33;}}
}
B526d2a:L526d2a:{c.instructions+=5;NFSU2_TR(0x526d2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526d2b:{NFSU2_TR(0x526d2b);
w4(R+0,u32(0x799e34ull));
}
B526d30:{NFSU2_TR(0x526d30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526d31:{NFSU2_TR(0x526d31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526d32:{NFSU2_TR(0x526d32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526d33:L526d33:{c.instructions+=5;NFSU2_TR(0x526d33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526d34:{NFSU2_TR(0x526d34);
w4(R+0,u32(0x78fa24ull));
}
B526d39:{NFSU2_TR(0x526d39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526d3a:{NFSU2_TR(0x526d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526d3b:{NFSU2_TR(0x526d3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526d3c:L526d3c:{c.instructions+=5;NFSU2_TR(0x526d3c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B526d40:{NFSU2_TR(0x526d40);
{u32 ea_=u32(u32(7977104u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B526d46:{NFSU2_TR(0x526d46);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B526d48:{NFSU2_TR(0x526d48);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B526d4b:{NFSU2_TR(0x526d4b);
if(r1(R+514)){{goto L526d6b;}}
}
B526d4d:L526d4d:{c.instructions+=1;NFSU2_TR(0x526d4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526d52ull));
TAIL_STATIC(0x43dc30u,43d);
}
B526d52:L526d52:{c.instructions+=3;NFSU2_TR(0x526d52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526d55:{NFSU2_TR(0x526d55);
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
B526d57:{NFSU2_TR(0x526d57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L526d62;}}
}
B526d59:L526d59:{c.instructions+=5;NFSU2_TR(0x526d59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526d5a:{NFSU2_TR(0x526d5a);
w4(R+0,u32(0x799e54ull));
}
B526d5f:{NFSU2_TR(0x526d5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526d60:{NFSU2_TR(0x526d60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526d61:{NFSU2_TR(0x526d61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526d62:L526d62:{c.instructions+=5;NFSU2_TR(0x526d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526d63:{NFSU2_TR(0x526d63);
w4(R+0,u32(0x78f2f8ull));
}
B526d68:{NFSU2_TR(0x526d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526d69:{NFSU2_TR(0x526d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526d6a:{NFSU2_TR(0x526d6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526d6b:L526d6b:{c.instructions+=1;NFSU2_TR(0x526d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526d70ull));
TAIL_STATIC(0x43dc30u,43d);
}
B526d70:L526d70:{c.instructions+=4;NFSU2_TR(0x526d70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B526d73:{NFSU2_TR(0x526d73);
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
B526d75:{NFSU2_TR(0x526d75);
w4(R+0,u32(0x799e74ull));
}
B526d7a:{NFSU2_TR(0x526d7a);
if(r1(R+518)){{goto L526d81;}}
}
B526d7c:L526d7c:{c.instructions+=1;NFSU2_TR(0x526d7c);
w4(R+0,u32(0x790038ull));
}
B526d81:L526d81:{c.instructions+=4;NFSU2_TR(0x526d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526d82:{NFSU2_TR(0x526d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526d83:{NFSU2_TR(0x526d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B526d84:{NFSU2_TR(0x526d84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526d90:L526d90:{c.instructions+=9;NFSU2_TR(0x526d90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526d91:{NFSU2_TR(0x526d91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526d92:{NFSU2_TR(0x526d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526d93:{NFSU2_TR(0x526d93);
__builtin_memmove((R+20),(R+4),4);
}
B526d95:{NFSU2_TR(0x526d95);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526d96:{NFSU2_TR(0x526d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526d99:{NFSU2_TR(0x526d99);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B526d9b:{NFSU2_TR(0x526d9b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526d9d:{NFSU2_TR(0x526d9d);
if(r1(R+518)){{goto L526ddf;}}
}
B526d9f:L526d9f:{c.instructions+=3;NFSU2_TR(0x526d9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526da2:{NFSU2_TR(0x526da2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526da4:{NFSU2_TR(0x526da4);
if(r1(R+518)){{goto L526ddf;}}
}
B526da6:L526da6:{c.instructions+=2;NFSU2_TR(0x526da6);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526dab:{NFSU2_TR(0x526dab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526db0ull));
TAIL_STATIC(0x505450u,505);
}
B526db0:L526db0:{c.instructions+=4;NFSU2_TR(0x526db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526db3:{NFSU2_TR(0x526db3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526db6:{NFSU2_TR(0x526db6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526db8:{NFSU2_TR(0x526db8);
if(r1(R+518)){{goto L526dc3;}}
}
B526dba:L526dba:{c.instructions+=3;NFSU2_TR(0x526dba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526dbd:{NFSU2_TR(0x526dbd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526dbf:{NFSU2_TR(0x526dbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526da6u);}goto L526da6;}}
}
B526dc1:L526dc1:{c.instructions+=1;NFSU2_TR(0x526dc1);
{goto L526ddf;}
}
B526dc3:L526dc3:{c.instructions+=2;NFSU2_TR(0x526dc3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526dc5:{NFSU2_TR(0x526dc5);
if(r1(R+518)){{goto L526ddf;}}
}
B526dc7:L526dc7:{c.instructions+=2;NFSU2_TR(0x526dc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526dca:{NFSU2_TR(0x526dca);
if(r1(R+518)){{goto L526ddc;}}
}
B526dcc:L526dcc:{c.instructions+=3;NFSU2_TR(0x526dcc);
__builtin_memmove((R+4),(R+28),4);
}
B526dce:{NFSU2_TR(0x526dce);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526dd1:{NFSU2_TR(0x526dd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526dd6ull));
TAIL_STATIC(0x517720u,517);
}
B526dd6:L526dd6:{c.instructions+=2;NFSU2_TR(0x526dd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526dd9:{NFSU2_TR(0x526dd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ddc:L526ddc:{c.instructions+=1;NFSU2_TR(0x526ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ddf:L526ddf:{c.instructions+=3;NFSU2_TR(0x526ddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526de2:{NFSU2_TR(0x526de2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526de4:{NFSU2_TR(0x526de4);
if(r1(R+518)){{goto L526e29;}}
}
B526de6:L526de6:{c.instructions+=3;NFSU2_TR(0x526de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526de9:{NFSU2_TR(0x526de9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526deb:{NFSU2_TR(0x526deb);
if(r1(R+518)){{goto L526e29;}}
}
B526ded:L526ded:{c.instructions+=1;NFSU2_TR(0x526ded);
__builtin_memmove((R+4),(R+4),4);
}
B526df0:L526df0:{c.instructions+=2;NFSU2_TR(0x526df0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526df5:{NFSU2_TR(0x526df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526dfaull));
TAIL_STATIC(0x505450u,505);
}
B526dfa:L526dfa:{c.instructions+=4;NFSU2_TR(0x526dfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526dfd:{NFSU2_TR(0x526dfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526e00:{NFSU2_TR(0x526e00);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e02:{NFSU2_TR(0x526e02);
if(r1(R+518)){{goto L526e0d;}}
}
B526e04:L526e04:{c.instructions+=3;NFSU2_TR(0x526e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526e07:{NFSU2_TR(0x526e07);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e09:{NFSU2_TR(0x526e09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526df0u);}goto L526df0;}}
}
B526e0b:L526e0b:{c.instructions+=1;NFSU2_TR(0x526e0b);
{goto L526e29;}
}
B526e0d:L526e0d:{c.instructions+=2;NFSU2_TR(0x526e0d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e0f:{NFSU2_TR(0x526e0f);
if(r1(R+518)){{goto L526e29;}}
}
B526e11:L526e11:{c.instructions+=2;NFSU2_TR(0x526e11);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526e14:{NFSU2_TR(0x526e14);
if(r1(R+518)){{goto L526e26;}}
}
B526e16:L526e16:{c.instructions+=3;NFSU2_TR(0x526e16);
__builtin_memmove((R+4),(R+28),4);
}
B526e18:{NFSU2_TR(0x526e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526e1b:{NFSU2_TR(0x526e1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526e20ull));
TAIL_STATIC(0x517720u,517);
}
B526e20:L526e20:{c.instructions+=2;NFSU2_TR(0x526e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526e23:{NFSU2_TR(0x526e23);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526e26:L526e26:{c.instructions+=1;NFSU2_TR(0x526e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526e29:L526e29:{c.instructions+=3;NFSU2_TR(0x526e29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526e2c:{NFSU2_TR(0x526e2c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e2e:{NFSU2_TR(0x526e2e);
if(r1(R+518)){{goto L526e79;}}
}
B526e30:L526e30:{c.instructions+=3;NFSU2_TR(0x526e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526e33:{NFSU2_TR(0x526e33);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e35:{NFSU2_TR(0x526e35);
if(r1(R+518)){{goto L526e79;}}
}
B526e37:L526e37:{c.instructions+=1;NFSU2_TR(0x526e37);
{goto L526e40;}
}
B526e40:L526e40:{c.instructions+=2;NFSU2_TR(0x526e40);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526e45:{NFSU2_TR(0x526e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526e4aull));
TAIL_STATIC(0x505450u,505);
}
B526e4a:L526e4a:{c.instructions+=4;NFSU2_TR(0x526e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526e4d:{NFSU2_TR(0x526e4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526e50:{NFSU2_TR(0x526e50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e52:{NFSU2_TR(0x526e52);
if(r1(R+518)){{goto L526e5d;}}
}
B526e54:L526e54:{c.instructions+=3;NFSU2_TR(0x526e54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526e57:{NFSU2_TR(0x526e57);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e59:{NFSU2_TR(0x526e59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526e40u);}goto L526e40;}}
}
B526e5b:L526e5b:{c.instructions+=1;NFSU2_TR(0x526e5b);
{goto L526e79;}
}
B526e5d:L526e5d:{c.instructions+=2;NFSU2_TR(0x526e5d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e5f:{NFSU2_TR(0x526e5f);
if(r1(R+518)){{goto L526e79;}}
}
B526e61:L526e61:{c.instructions+=2;NFSU2_TR(0x526e61);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526e64:{NFSU2_TR(0x526e64);
if(r1(R+518)){{goto L526e76;}}
}
B526e66:L526e66:{c.instructions+=3;NFSU2_TR(0x526e66);
__builtin_memmove((R+4),(R+28),4);
}
B526e68:{NFSU2_TR(0x526e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526e6b:{NFSU2_TR(0x526e6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526e70ull));
TAIL_STATIC(0x517720u,517);
}
B526e70:L526e70:{c.instructions+=2;NFSU2_TR(0x526e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B526e73:{NFSU2_TR(0x526e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526e76:L526e76:{c.instructions+=1;NFSU2_TR(0x526e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526e79:L526e79:{c.instructions+=3;NFSU2_TR(0x526e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526e7c:{NFSU2_TR(0x526e7c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e7e:{NFSU2_TR(0x526e7e);
if(r1(R+518)){{goto L526ec9;}}
}
B526e80:L526e80:{c.instructions+=3;NFSU2_TR(0x526e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526e83:{NFSU2_TR(0x526e83);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526e85:{NFSU2_TR(0x526e85);
if(r1(R+518)){{goto L526ec9;}}
}
B526e87:L526e87:{c.instructions+=1;NFSU2_TR(0x526e87);
{goto L526e90;}
}
B526e90:L526e90:{c.instructions+=2;NFSU2_TR(0x526e90);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526e95:{NFSU2_TR(0x526e95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526e9aull));
TAIL_STATIC(0x505450u,505);
}
B526e9a:L526e9a:{c.instructions+=4;NFSU2_TR(0x526e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526e9d:{NFSU2_TR(0x526e9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526ea0:{NFSU2_TR(0x526ea0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ea2:{NFSU2_TR(0x526ea2);
if(r1(R+518)){{goto L526ead;}}
}
B526ea4:L526ea4:{c.instructions+=3;NFSU2_TR(0x526ea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526ea7:{NFSU2_TR(0x526ea7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ea9:{NFSU2_TR(0x526ea9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526e90u);}goto L526e90;}}
}
B526eab:L526eab:{c.instructions+=1;NFSU2_TR(0x526eab);
{goto L526ec9;}
}
B526ead:L526ead:{c.instructions+=2;NFSU2_TR(0x526ead);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526eaf:{NFSU2_TR(0x526eaf);
if(r1(R+518)){{goto L526ec9;}}
}
B526eb1:L526eb1:{c.instructions+=2;NFSU2_TR(0x526eb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526eb4:{NFSU2_TR(0x526eb4);
if(r1(R+518)){{goto L526ec6;}}
}
B526eb6:L526eb6:{c.instructions+=3;NFSU2_TR(0x526eb6);
__builtin_memmove((R+4),(R+28),4);
}
B526eb8:{NFSU2_TR(0x526eb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ebb:{NFSU2_TR(0x526ebb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526ec0ull));
TAIL_STATIC(0x517720u,517);
}
B526ec0:L526ec0:{c.instructions+=2;NFSU2_TR(0x526ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526ec3:{NFSU2_TR(0x526ec3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ec6:L526ec6:{c.instructions+=1;NFSU2_TR(0x526ec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526ec9:L526ec9:{c.instructions+=3;NFSU2_TR(0x526ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526ecc:{NFSU2_TR(0x526ecc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ece:{NFSU2_TR(0x526ece);
if(r1(R+518)){{goto L526f19;}}
}
B526ed0:L526ed0:{c.instructions+=3;NFSU2_TR(0x526ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526ed3:{NFSU2_TR(0x526ed3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ed5:{NFSU2_TR(0x526ed5);
if(r1(R+518)){{goto L526f19;}}
}
B526ed7:L526ed7:{c.instructions+=1;NFSU2_TR(0x526ed7);
{goto L526ee0;}
}
B526ee0:L526ee0:{c.instructions+=2;NFSU2_TR(0x526ee0);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526ee5:{NFSU2_TR(0x526ee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526eeaull));
TAIL_STATIC(0x505450u,505);
}
B526eea:L526eea:{c.instructions+=4;NFSU2_TR(0x526eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526eed:{NFSU2_TR(0x526eed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526ef0:{NFSU2_TR(0x526ef0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ef2:{NFSU2_TR(0x526ef2);
if(r1(R+518)){{goto L526efd;}}
}
B526ef4:L526ef4:{c.instructions+=3;NFSU2_TR(0x526ef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526ef7:{NFSU2_TR(0x526ef7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ef9:{NFSU2_TR(0x526ef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526ee0u);}goto L526ee0;}}
}
B526efb:L526efb:{c.instructions+=1;NFSU2_TR(0x526efb);
{goto L526f19;}
}
B526efd:L526efd:{c.instructions+=2;NFSU2_TR(0x526efd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526eff:{NFSU2_TR(0x526eff);
if(r1(R+518)){{goto L526f19;}}
}
B526f01:L526f01:{c.instructions+=2;NFSU2_TR(0x526f01);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526f04:{NFSU2_TR(0x526f04);
if(r1(R+518)){{goto L526f16;}}
}
B526f06:L526f06:{c.instructions+=3;NFSU2_TR(0x526f06);
__builtin_memmove((R+4),(R+28),4);
}
B526f08:{NFSU2_TR(0x526f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526f0b:{NFSU2_TR(0x526f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526f10ull));
TAIL_STATIC(0x517720u,517);
}
B526f10:L526f10:{c.instructions+=2;NFSU2_TR(0x526f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526f13:{NFSU2_TR(0x526f13);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526f16:L526f16:{c.instructions+=1;NFSU2_TR(0x526f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526f19:L526f19:{c.instructions+=3;NFSU2_TR(0x526f19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526f1c:{NFSU2_TR(0x526f1c);
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
B526f1e:{NFSU2_TR(0x526f1e);
if(r1(R+518)){{goto L526f6c;}}
}
B526f20:L526f20:{c.instructions+=3;NFSU2_TR(0x526f20);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526f23:{NFSU2_TR(0x526f23);
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
B526f25:{NFSU2_TR(0x526f25);
if(r1(R+518)){{goto L526f6c;}}
}
B526f27:L526f27:{c.instructions+=1;NFSU2_TR(0x526f27);
{goto L526f30;}
}
B526f30:L526f30:{c.instructions+=2;NFSU2_TR(0x526f30);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526f35:{NFSU2_TR(0x526f35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526f3aull));
TAIL_STATIC(0x505450u,505);
}
B526f3a:L526f3a:{c.instructions+=4;NFSU2_TR(0x526f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526f3d:{NFSU2_TR(0x526f3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526f40:{NFSU2_TR(0x526f40);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526f42:{NFSU2_TR(0x526f42);
if(r1(R+518)){{goto L526f50;}}
}
B526f44:L526f44:{c.instructions+=3;NFSU2_TR(0x526f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526f47:{NFSU2_TR(0x526f47);
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
B526f49:{NFSU2_TR(0x526f49);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526f30u);}goto L526f30;}}
}
B526f4b:L526f4b:{c.instructions+=5;NFSU2_TR(0x526f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526f4c:{NFSU2_TR(0x526f4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526f4d:{NFSU2_TR(0x526f4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B526f4e:{NFSU2_TR(0x526f4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B526f4f:{NFSU2_TR(0x526f4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526f50:L526f50:{c.instructions+=2;NFSU2_TR(0x526f50);
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
B526f52:{NFSU2_TR(0x526f52);
if(r1(R+518)){{goto L526f6c;}}
}
B526f54:L526f54:{c.instructions+=2;NFSU2_TR(0x526f54);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+14)));
w4(U+18,u32(u32(r4(R+24))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B526f57:{NFSU2_TR(0x526f57);
if(r1(R+518)){{goto L526f69;}}
}
B526f59:L526f59:{c.instructions+=3;NFSU2_TR(0x526f59);
__builtin_memmove((R+4),(R+28),4);
}
B526f5b:{NFSU2_TR(0x526f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526f5e:{NFSU2_TR(0x526f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526f63ull));
TAIL_STATIC(0x517720u,517);
}
B526f63:L526f63:{c.instructions+=2;NFSU2_TR(0x526f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B526f66:{NFSU2_TR(0x526f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526f69:L526f69:{c.instructions+=1;NFSU2_TR(0x526f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526f6c:L526f6c:{c.instructions+=5;NFSU2_TR(0x526f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B526f6d:{NFSU2_TR(0x526f6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B526f6e:{NFSU2_TR(0x526f6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B526f6f:{NFSU2_TR(0x526f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B526f70:{NFSU2_TR(0x526f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B526f80:L526f80:{c.instructions+=9;NFSU2_TR(0x526f80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526f81:{NFSU2_TR(0x526f81);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526f82:{NFSU2_TR(0x526f82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526f83:{NFSU2_TR(0x526f83);
__builtin_memmove((R+20),(R+4),4);
}
B526f85:{NFSU2_TR(0x526f85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526f86:{NFSU2_TR(0x526f86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526f89:{NFSU2_TR(0x526f89);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B526f8b:{NFSU2_TR(0x526f8b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526f8d:{NFSU2_TR(0x526f8d);
if(r1(R+518)){{goto L526fcf;}}
}
B526f8f:L526f8f:{c.instructions+=3;NFSU2_TR(0x526f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526f92:{NFSU2_TR(0x526f92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526f94:{NFSU2_TR(0x526f94);
if(r1(R+518)){{goto L526fcf;}}
}
B526f96:L526f96:{c.instructions+=2;NFSU2_TR(0x526f96);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526f9b:{NFSU2_TR(0x526f9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526fa0ull));
TAIL_STATIC(0x505450u,505);
}
B526fa0:L526fa0:{c.instructions+=4;NFSU2_TR(0x526fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526fa3:{NFSU2_TR(0x526fa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526fa6:{NFSU2_TR(0x526fa6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526fa8:{NFSU2_TR(0x526fa8);
if(r1(R+518)){{goto L526fb3;}}
}
B526faa:L526faa:{c.instructions+=3;NFSU2_TR(0x526faa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526fad:{NFSU2_TR(0x526fad);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526faf:{NFSU2_TR(0x526faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526f96u);}goto L526f96;}}
}
B526fb1:L526fb1:{c.instructions+=1;NFSU2_TR(0x526fb1);
{goto L526fcf;}
}
B526fb3:L526fb3:{c.instructions+=2;NFSU2_TR(0x526fb3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526fb5:{NFSU2_TR(0x526fb5);
if(r1(R+518)){{goto L526fcf;}}
}
B526fb7:L526fb7:{c.instructions+=2;NFSU2_TR(0x526fb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B526fba:{NFSU2_TR(0x526fba);
if(r1(R+518)){{goto L526fcc;}}
}
B526fbc:L526fbc:{c.instructions+=3;NFSU2_TR(0x526fbc);
__builtin_memmove((R+4),(R+28),4);
}
B526fbe:{NFSU2_TR(0x526fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526fc1:{NFSU2_TR(0x526fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526fc6ull));
TAIL_STATIC(0x517720u,517);
}
B526fc6:L526fc6:{c.instructions+=2;NFSU2_TR(0x526fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B526fc9:{NFSU2_TR(0x526fc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526fcc:L526fcc:{c.instructions+=1;NFSU2_TR(0x526fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B526fcf:L526fcf:{c.instructions+=3;NFSU2_TR(0x526fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B526fd2:{NFSU2_TR(0x526fd2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526fd4:{NFSU2_TR(0x526fd4);
if(r1(R+518)){TAIL_STATIC(0x527019u,527);}
}
B526fd6:L526fd6:{c.instructions+=3;NFSU2_TR(0x526fd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526fd9:{NFSU2_TR(0x526fd9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526fdb:{NFSU2_TR(0x526fdb);
if(r1(R+518)){TAIL_STATIC(0x527019u,527);}
}
B526fdd:L526fdd:{c.instructions+=1;NFSU2_TR(0x526fdd);
__builtin_memmove((R+4),(R+4),4);
}
B526fe0:L526fe0:{c.instructions+=2;NFSU2_TR(0x526fe0);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B526fe5:{NFSU2_TR(0x526fe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x526feaull));
TAIL_STATIC(0x505450u,505);
}
B526fea:L526fea:{c.instructions+=4;NFSU2_TR(0x526fea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B526fed:{NFSU2_TR(0x526fed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B526ff0:{NFSU2_TR(0x526ff0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ff2:{NFSU2_TR(0x526ff2);
if(r1(R+518)){{goto L526ffd;}}
}
B526ff4:L526ff4:{c.instructions+=3;NFSU2_TR(0x526ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B526ff7:{NFSU2_TR(0x526ff7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526ff9:{NFSU2_TR(0x526ff9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x526fe0u);}goto L526fe0;}}
}
B526ffb:L526ffb:{c.instructions+=1;NFSU2_TR(0x526ffb);
TAIL_STATIC(0x527019u,527);
}
B526ffd:L526ffd:{c.instructions+=2;NFSU2_TR(0x526ffd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B526fff:{NFSU2_TR(0x526fff);
if(r1(R+518)){TAIL_STATIC(0x527019u,527);}
TAIL_STATIC(0x527001u,527);
}
XIT:NFSU2_TR_EXIT(0x526,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
