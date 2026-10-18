#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_419(u8* __restrict R,Cpu& c);
u32 body_41d(u8* __restrict R,Cpu& c);
u32 body_420(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_424(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x425,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x425,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_425(u8* __restrict R,Cpu& c);
u32 page_425(Cpu& c){return body_425(c.regs.data(),c);}
__attribute__((noinline)) u32 body_425(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x425000:goto L425000;
case 0x425002:c.instructions+=2;goto B425002;
case 0x425003:c.instructions+=1;goto B425003;
case 0x425006:goto L425006;
case 0x42500a:c.instructions+=2;goto B42500a;
case 0x425010:c.instructions+=1;goto B425010;
case 0x425016:goto L425016;
case 0x42501a:c.instructions+=2;goto B42501a;
case 0x42501b:c.instructions+=1;goto B42501b;
case 0x425020:goto L425020;
case 0x425025:goto L425025;
case 0x425029:c.instructions+=3;goto B425029;
case 0x42502b:c.instructions+=2;goto B42502b;
case 0x42502f:c.instructions+=1;goto B42502f;
case 0x425035:goto L425035;
case 0x425039:c.instructions+=5;goto B425039;
case 0x42503f:c.instructions+=4;goto B42503f;
case 0x425045:c.instructions+=3;goto B425045;
case 0x425047:c.instructions+=2;goto B425047;
case 0x42504a:c.instructions+=1;goto B42504a;
case 0x42504c:goto L42504c;
case 0x42504e:c.instructions+=3;goto B42504e;
case 0x425058:c.instructions+=2;goto B425058;
case 0x425062:c.instructions+=1;goto B425062;
case 0x425064:goto L425064;
case 0x425069:goto L425069;
case 0x42506b:c.instructions+=1;goto B42506b;
case 0x42506d:goto L42506d;
case 0x42506f:c.instructions+=7;goto B42506f;
case 0x425073:c.instructions+=6;goto B425073;
case 0x42507b:c.instructions+=5;goto B42507b;
case 0x425083:c.instructions+=4;goto B425083;
case 0x42508b:c.instructions+=3;goto B42508b;
case 0x425093:c.instructions+=2;goto B425093;
case 0x425094:c.instructions+=1;goto B425094;
case 0x425096:goto L425096;
case 0x425098:c.instructions+=4;goto B425098;
case 0x42509a:c.instructions+=3;goto B42509a;
case 0x4250a0:c.instructions+=2;goto B4250a0;
case 0x4250a6:c.instructions+=1;goto B4250a6;
case 0x4250a8:goto L4250a8;
case 0x4250ad:goto L4250ad;
case 0x4250af:c.instructions+=1;goto B4250af;
case 0x4250b1:goto L4250b1;
case 0x4250b3:c.instructions+=7;goto B4250b3;
case 0x4250b7:c.instructions+=6;goto B4250b7;
case 0x4250bf:c.instructions+=5;goto B4250bf;
case 0x4250c7:c.instructions+=4;goto B4250c7;
case 0x4250cf:c.instructions+=3;goto B4250cf;
case 0x4250d7:c.instructions+=2;goto B4250d7;
case 0x4250d8:c.instructions+=1;goto B4250d8;
case 0x4250da:goto L4250da;
case 0x4250dc:c.instructions+=1;goto B4250dc;
case 0x4250de:goto L4250de;
case 0x4250e0:c.instructions+=1;goto B4250e0;
case 0x4250e5:goto L4250e5;
case 0x4250ef:c.instructions+=1;goto B4250ef;
case 0x425100:goto L425100;
case 0x425104:c.instructions+=8;goto B425104;
case 0x425105:c.instructions+=7;goto B425105;
case 0x425107:c.instructions+=6;goto B425107;
case 0x42510b:c.instructions+=5;goto B42510b;
case 0x42510c:c.instructions+=4;goto B42510c;
case 0x42510d:c.instructions+=3;goto B42510d;
case 0x42510f:c.instructions+=2;goto B42510f;
case 0x425111:c.instructions+=1;goto B425111;
case 0x425116:goto L425116;
case 0x42511a:c.instructions+=8;goto B42511a;
case 0x42511e:c.instructions+=7;goto B42511e;
case 0x425124:c.instructions+=6;goto B425124;
case 0x42512a:c.instructions+=5;goto B42512a;
case 0x425130:c.instructions+=4;goto B425130;
case 0x425137:c.instructions+=3;goto B425137;
case 0x425139:c.instructions+=2;goto B425139;
case 0x42513a:c.instructions+=1;goto B42513a;
case 0x425140:goto L425140;
case 0x425145:c.instructions+=1;goto B425145;
case 0x425150:goto L425150;
case 0x425151:c.instructions+=23;goto B425151;
case 0x425153:c.instructions+=22;goto B425153;
case 0x425156:c.instructions+=21;goto B425156;
case 0x425159:c.instructions+=20;goto B425159;
case 0x42515a:c.instructions+=19;goto B42515a;
case 0x42515b:c.instructions+=18;goto B42515b;
case 0x42515e:c.instructions+=17;goto B42515e;
case 0x425160:c.instructions+=16;goto B425160;
case 0x425163:c.instructions+=15;goto B425163;
case 0x425169:c.instructions+=14;goto B425169;
case 0x42516d:c.instructions+=13;goto B42516d;
case 0x425174:c.instructions+=12;goto B425174;
case 0x425177:c.instructions+=11;goto B425177;
case 0x42517a:c.instructions+=10;goto B42517a;
case 0x42517b:c.instructions+=9;goto B42517b;
case 0x42517f:c.instructions+=8;goto B42517f;
case 0x425181:c.instructions+=7;goto B425181;
case 0x425187:c.instructions+=6;goto B425187;
case 0x42518b:c.instructions+=5;goto B42518b;
case 0x425191:c.instructions+=4;goto B425191;
case 0x425194:c.instructions+=3;goto B425194;
case 0x425198:c.instructions+=2;goto B425198;
case 0x42519c:c.instructions+=1;goto B42519c;
case 0x42519e:goto L42519e;
case 0x4251a2:c.instructions+=2;goto B4251a2;
case 0x4251a6:c.instructions+=1;goto B4251a6;
case 0x4251a8:goto L4251a8;
case 0x4251b0:c.instructions+=1;goto B4251b0;
case 0x4251b4:goto L4251b4;
case 0x4251b8:c.instructions+=2;goto B4251b8;
case 0x4251bc:c.instructions+=1;goto B4251bc;
case 0x4251be:goto L4251be;
case 0x4251c2:c.instructions+=2;goto B4251c2;
case 0x4251c6:c.instructions+=1;goto B4251c6;
case 0x4251c8:goto L4251c8;
case 0x4251cb:c.instructions+=2;goto B4251cb;
case 0x4251cd:c.instructions+=1;goto B4251cd;
case 0x4251cf:goto L4251cf;
case 0x4251d6:c.instructions+=1;goto B4251d6;
case 0x4251d8:goto L4251d8;
case 0x4251da:goto L4251da;
case 0x4251dd:c.instructions+=3;goto B4251dd;
case 0x4251e0:c.instructions+=2;goto B4251e0;
case 0x4251e7:c.instructions+=1;goto B4251e7;
case 0x4251ec:goto L4251ec;
case 0x4251f0:c.instructions+=1;goto B4251f0;
case 0x4251f2:goto L4251f2;
case 0x4251fa:goto L4251fa;
case 0x4251fc:c.instructions+=2;goto B4251fc;
case 0x4251fe:c.instructions+=1;goto B4251fe;
case 0x425201:goto L425201;
case 0x425207:c.instructions+=5;goto B425207;
case 0x42520b:c.instructions+=4;goto B42520b;
case 0x42520d:c.instructions+=3;goto B42520d;
case 0x425211:c.instructions+=2;goto B425211;
case 0x425212:c.instructions+=1;goto B425212;
case 0x425217:goto L425217;
case 0x42521b:c.instructions+=13;goto B42521b;
case 0x425221:c.instructions+=12;goto B425221;
case 0x425225:c.instructions+=11;goto B425225;
case 0x425226:c.instructions+=10;goto B425226;
case 0x42522a:c.instructions+=9;goto B42522a;
case 0x42522e:c.instructions+=8;goto B42522e;
case 0x42522f:c.instructions+=7;goto B42522f;
case 0x425230:c.instructions+=6;goto B425230;
case 0x425231:c.instructions+=5;goto B425231;
case 0x425232:c.instructions+=4;goto B425232;
case 0x425233:c.instructions+=3;goto B425233;
case 0x42523b:c.instructions+=2;goto B42523b;
case 0x425243:c.instructions+=1;goto B425243;
case 0x425248:goto L425248;
case 0x42524b:c.instructions+=2;goto B42524b;
case 0x42524d:c.instructions+=1;goto B42524d;
case 0x425253:goto L425253;
case 0x425254:c.instructions+=2;goto B425254;
case 0x425255:c.instructions+=1;goto B425255;
case 0x42525a:goto L42525a;
case 0x42525d:c.instructions+=2;goto B42525d;
case 0x42525f:c.instructions+=1;goto B42525f;
case 0x425265:goto L425265;
case 0x425269:c.instructions+=4;goto B425269;
case 0x42526f:c.instructions+=3;goto B42526f;
case 0x425271:c.instructions+=2;goto B425271;
case 0x425274:c.instructions+=1;goto B425274;
case 0x425276:goto L425276;
case 0x42527a:c.instructions+=4;goto B42527a;
case 0x425280:c.instructions+=3;goto B425280;
case 0x425282:c.instructions+=2;goto B425282;
case 0x425285:c.instructions+=1;goto B425285;
case 0x42528b:goto L42528b;
case 0x42528f:c.instructions+=5;goto B42528f;
case 0x425295:c.instructions+=4;goto B425295;
case 0x42529b:c.instructions+=3;goto B42529b;
case 0x42529d:c.instructions+=2;goto B42529d;
case 0x4252a0:c.instructions+=1;goto B4252a0;
case 0x4252a2:goto L4252a2;
case 0x4252a8:c.instructions+=3;goto B4252a8;
case 0x4252aa:c.instructions+=2;goto B4252aa;
case 0x4252ad:c.instructions+=1;goto B4252ad;
case 0x4252af:goto L4252af;
case 0x4252b1:c.instructions+=1;goto B4252b1;
case 0x4252b7:goto L4252b7;
case 0x4252c1:c.instructions+=1;goto B4252c1;
case 0x4252c3:goto L4252c3;
case 0x4252c9:c.instructions+=3;goto B4252c9;
case 0x4252cb:c.instructions+=2;goto B4252cb;
case 0x4252ce:c.instructions+=1;goto B4252ce;
case 0x4252d0:goto L4252d0;
case 0x4252d2:c.instructions+=1;goto B4252d2;
case 0x4252d8:goto L4252d8;
case 0x4252e2:goto L4252e2;
case 0x4252e4:c.instructions+=9;goto B4252e4;
case 0x4252ea:c.instructions+=8;goto B4252ea;
case 0x4252ec:c.instructions+=7;goto B4252ec;
case 0x4252f0:c.instructions+=6;goto B4252f0;
case 0x4252f1:c.instructions+=5;goto B4252f1;
case 0x4252f9:c.instructions+=4;goto B4252f9;
case 0x425301:c.instructions+=3;goto B425301;
case 0x425309:c.instructions+=2;goto B425309;
case 0x425311:c.instructions+=1;goto B425311;
case 0x425316:goto L425316;
case 0x42531c:c.instructions+=4;goto B42531c;
case 0x42531e:c.instructions+=3;goto B42531e;
case 0x425322:c.instructions+=2;goto B425322;
case 0x425327:c.instructions+=1;goto B425327;
case 0x425329:goto L425329;
case 0x42532b:c.instructions+=3;goto B42532b;
case 0x42532c:c.instructions+=2;goto B42532c;
case 0x42532f:c.instructions+=1;goto B42532f;
case 0x425331:goto L425331;
case 0x425338:goto L425338;
case 0x42533c:c.instructions+=5;goto B42533c;
case 0x425340:c.instructions+=4;goto B425340;
case 0x425344:c.instructions+=3;goto B425344;
case 0x425347:c.instructions+=2;goto B425347;
case 0x425349:c.instructions+=1;goto B425349;
case 0x42534b:goto L42534b;
case 0x42534d:c.instructions+=9;goto B42534d;
case 0x425351:c.instructions+=8;goto B425351;
case 0x425352:c.instructions+=7;goto B425352;
case 0x425354:c.instructions+=6;goto B425354;
case 0x425356:c.instructions+=5;goto B425356;
case 0x42535e:c.instructions+=4;goto B42535e;
case 0x425366:c.instructions+=3;goto B425366;
case 0x42536e:c.instructions+=2;goto B42536e;
case 0x425376:c.instructions+=1;goto B425376;
case 0x42537b:goto L42537b;
case 0x425380:goto L425380;
case 0x425384:c.instructions+=4;goto B425384;
case 0x425388:c.instructions+=3;goto B425388;
case 0x42538a:c.instructions+=2;goto B42538a;
case 0x42538e:c.instructions+=1;goto B42538e;
case 0x425391:goto L425391;
case 0x425394:c.instructions+=2;goto B425394;
case 0x425396:c.instructions+=1;goto B425396;
case 0x425398:goto L425398;
case 0x425399:c.instructions+=3;goto B425399;
case 0x42539c:c.instructions+=2;goto B42539c;
case 0x42539f:c.instructions+=1;goto B42539f;
case 0x4253a1:goto L4253a1;
case 0x4253a3:goto L4253a3;
case 0x4253a6:c.instructions+=1;goto B4253a6;
case 0x4253a8:goto L4253a8;
case 0x4253ac:c.instructions+=9;goto B4253ac;
case 0x4253af:c.instructions+=8;goto B4253af;
case 0x4253b1:c.instructions+=7;goto B4253b1;
case 0x4253b3:c.instructions+=6;goto B4253b3;
case 0x4253b7:c.instructions+=5;goto B4253b7;
case 0x4253ba:c.instructions+=4;goto B4253ba;
case 0x4253bb:c.instructions+=3;goto B4253bb;
case 0x4253bc:c.instructions+=2;goto B4253bc;
case 0x4253be:c.instructions+=1;goto B4253be;
case 0x4253c3:goto L4253c3;
case 0x4253c5:c.instructions+=1;goto B4253c5;
case 0x4253c7:goto L4253c7;
case 0x4253c9:c.instructions+=9;goto B4253c9;
case 0x4253cb:c.instructions+=8;goto B4253cb;
case 0x4253cf:c.instructions+=7;goto B4253cf;
case 0x4253d0:c.instructions+=6;goto B4253d0;
case 0x4253d2:c.instructions+=5;goto B4253d2;
case 0x4253da:c.instructions+=4;goto B4253da;
case 0x4253e2:c.instructions+=3;goto B4253e2;
case 0x4253ea:c.instructions+=2;goto B4253ea;
case 0x4253f2:c.instructions+=1;goto B4253f2;
case 0x4253f7:goto L4253f7;
case 0x4253f9:goto L4253f9;
case 0x4253fd:c.instructions+=3;goto B4253fd;
case 0x4253fe:c.instructions+=2;goto B4253fe;
case 0x425400:c.instructions+=1;goto B425400;
case 0x425405:goto L425405;
case 0x425409:goto L425409;
case 0x425410:c.instructions+=6;goto B425410;
case 0x425413:c.instructions+=5;goto B425413;
case 0x425416:c.instructions+=4;goto B425416;
case 0x42541a:c.instructions+=3;goto B42541a;
case 0x42541b:c.instructions+=2;goto B42541b;
case 0x425421:c.instructions+=1;goto B425421;
case 0x425426:goto L425426;
case 0x425428:c.instructions+=2;goto B425428;
case 0x42542c:c.instructions+=1;goto B42542c;
case 0x425432:goto L425432;
case 0x425436:c.instructions+=4;goto B425436;
case 0x42543c:c.instructions+=3;goto B42543c;
case 0x42543e:c.instructions+=2;goto B42543e;
case 0x425441:c.instructions+=1;goto B425441;
case 0x425443:goto L425443;
case 0x425447:c.instructions+=2;goto B425447;
case 0x425449:c.instructions+=1;goto B425449;
case 0x42544c:goto L42544c;
case 0x425452:c.instructions+=5;goto B425452;
case 0x425456:c.instructions+=4;goto B425456;
case 0x425458:c.instructions+=3;goto B425458;
case 0x42545a:c.instructions+=2;goto B42545a;
case 0x42545d:c.instructions+=1;goto B42545d;
case 0x42545f:goto L42545f;
case 0x425461:c.instructions+=2;goto B425461;
case 0x425465:c.instructions+=1;goto B425465;
case 0x425467:goto L425467;
case 0x42546d:c.instructions+=4;goto B42546d;
case 0x425473:c.instructions+=3;goto B425473;
case 0x425475:c.instructions+=2;goto B425475;
case 0x425478:c.instructions+=1;goto B425478;
case 0x42547a:goto L42547a;
case 0x42547c:c.instructions+=1;goto B42547c;
case 0x425482:goto L425482;
case 0x425488:c.instructions+=5;goto B425488;
case 0x42548c:c.instructions+=4;goto B42548c;
case 0x425492:c.instructions+=3;goto B425492;
case 0x425494:c.instructions+=2;goto B425494;
case 0x425497:c.instructions+=1;goto B425497;
case 0x42549d:goto L42549d;
case 0x4254a3:c.instructions+=4;goto B4254a3;
case 0x4254a9:c.instructions+=3;goto B4254a9;
case 0x4254ab:c.instructions+=2;goto B4254ab;
case 0x4254ae:c.instructions+=1;goto B4254ae;
case 0x4254b0:goto L4254b0;
case 0x4254b2:c.instructions+=1;goto B4254b2;
case 0x4254b8:goto L4254b8;
case 0x4254bc:c.instructions+=6;goto B4254bc;
case 0x4254c2:c.instructions+=5;goto B4254c2;
case 0x4254c8:c.instructions+=4;goto B4254c8;
case 0x4254ce:c.instructions+=3;goto B4254ce;
case 0x4254d0:c.instructions+=2;goto B4254d0;
case 0x4254d3:c.instructions+=1;goto B4254d3;
case 0x4254d5:goto L4254d5;
case 0x4254dc:c.instructions+=1;goto B4254dc;
case 0x4254de:goto L4254de;
case 0x4254e2:c.instructions+=2;goto B4254e2;
case 0x4254e4:c.instructions+=1;goto B4254e4;
case 0x4254e7:goto L4254e7;
case 0x4254ed:c.instructions+=5;goto B4254ed;
case 0x4254f1:c.instructions+=4;goto B4254f1;
case 0x4254f3:c.instructions+=3;goto B4254f3;
case 0x4254f5:c.instructions+=2;goto B4254f5;
case 0x4254f8:c.instructions+=1;goto B4254f8;
case 0x4254fa:goto L4254fa;
case 0x4254fc:c.instructions+=1;goto B4254fc;
case 0x425500:goto L425500;
case 0x425502:c.instructions+=9;goto B425502;
case 0x425508:c.instructions+=8;goto B425508;
case 0x42550a:c.instructions+=7;goto B42550a;
case 0x42550e:c.instructions+=6;goto B42550e;
case 0x42550f:c.instructions+=5;goto B42550f;
case 0x425517:c.instructions+=4;goto B425517;
case 0x42551f:c.instructions+=3;goto B42551f;
case 0x425527:c.instructions+=2;goto B425527;
case 0x42552f:c.instructions+=1;goto B42552f;
case 0x425534:goto L425534;
case 0x425535:c.instructions+=4;goto B425535;
case 0x425538:c.instructions+=3;goto B425538;
case 0x425539:c.instructions+=2;goto B425539;
case 0x42553d:c.instructions+=1;goto B42553d;
case 0x425542:goto L425542;
case 0x42554c:c.instructions+=10;goto B42554c;
case 0x425556:c.instructions+=9;goto B425556;
case 0x42555d:c.instructions+=8;goto B42555d;
case 0x425564:c.instructions+=7;goto B425564;
case 0x42556b:c.instructions+=6;goto B42556b;
case 0x42556c:c.instructions+=5;goto B42556c;
case 0x42556d:c.instructions+=4;goto B42556d;
case 0x42556e:c.instructions+=3;goto B42556e;
case 0x425570:c.instructions+=2;goto B425570;
case 0x425571:c.instructions+=1;goto B425571;
case 0x425590:goto L425590;
case 0x425594:c.instructions+=8;goto B425594;
case 0x425595:c.instructions+=7;goto B425595;
case 0x425597:c.instructions+=6;goto B425597;
case 0x42559b:c.instructions+=5;goto B42559b;
case 0x42559c:c.instructions+=4;goto B42559c;
case 0x42559d:c.instructions+=3;goto B42559d;
case 0x42559f:c.instructions+=2;goto B42559f;
case 0x4255a1:c.instructions+=1;goto B4255a1;
case 0x4255a6:goto L4255a6;
case 0x4255ac:c.instructions+=4;goto B4255ac;
case 0x4255b3:c.instructions+=3;goto B4255b3;
case 0x4255b5:c.instructions+=2;goto B4255b5;
case 0x4255b6:c.instructions+=1;goto B4255b6;
case 0x4255c0:goto L4255c0;
case 0x4255c5:c.instructions+=1;goto B4255c5;
case 0x4255d0:goto L4255d0;
case 0x4255d4:c.instructions+=8;goto B4255d4;
case 0x4255d5:c.instructions+=7;goto B4255d5;
case 0x4255d7:c.instructions+=6;goto B4255d7;
case 0x4255db:c.instructions+=5;goto B4255db;
case 0x4255dc:c.instructions+=4;goto B4255dc;
case 0x4255dd:c.instructions+=3;goto B4255dd;
case 0x4255df:c.instructions+=2;goto B4255df;
case 0x4255e1:c.instructions+=1;goto B4255e1;
case 0x4255e6:goto L4255e6;
case 0x4255ea:c.instructions+=10;goto B4255ea;
case 0x4255ee:c.instructions+=9;goto B4255ee;
case 0x4255f2:c.instructions+=8;goto B4255f2;
case 0x4255f8:c.instructions+=7;goto B4255f8;
case 0x4255fe:c.instructions+=6;goto B4255fe;
case 0x425604:c.instructions+=5;goto B425604;
case 0x42560a:c.instructions+=4;goto B42560a;
case 0x425614:c.instructions+=3;goto B425614;
case 0x425616:c.instructions+=2;goto B425616;
case 0x425617:c.instructions+=1;goto B425617;
case 0x425620:goto L425620;
case 0x425625:c.instructions+=1;goto B425625;
case 0x425630:goto L425630;
case 0x425634:c.instructions+=8;goto B425634;
case 0x425635:c.instructions+=7;goto B425635;
case 0x425637:c.instructions+=6;goto B425637;
case 0x42563b:c.instructions+=5;goto B42563b;
case 0x42563c:c.instructions+=4;goto B42563c;
case 0x42563d:c.instructions+=3;goto B42563d;
case 0x42563f:c.instructions+=2;goto B42563f;
case 0x425641:c.instructions+=1;goto B425641;
case 0x425646:goto L425646;
case 0x42564a:c.instructions+=9;goto B42564a;
case 0x42564e:c.instructions+=8;goto B42564e;
case 0x425652:c.instructions+=7;goto B425652;
case 0x425658:c.instructions+=6;goto B425658;
case 0x42565e:c.instructions+=5;goto B42565e;
case 0x425664:c.instructions+=4;goto B425664;
case 0x42566a:c.instructions+=3;goto B42566a;
case 0x42566c:c.instructions+=2;goto B42566c;
case 0x42566d:c.instructions+=1;goto B42566d;
case 0x425670:goto L425670;
case 0x425675:c.instructions+=1;goto B425675;
case 0x425680:goto L425680;
case 0x425681:c.instructions+=13;goto B425681;
case 0x425682:c.instructions+=12;goto B425682;
case 0x425683:c.instructions+=11;goto B425683;
case 0x425684:c.instructions+=10;goto B425684;
case 0x425686:c.instructions+=9;goto B425686;
case 0x42568c:c.instructions+=8;goto B42568c;
case 0x42568d:c.instructions+=7;goto B42568d;
case 0x425691:c.instructions+=6;goto B425691;
case 0x425693:c.instructions+=5;goto B425693;
case 0x425699:c.instructions+=4;goto B425699;
case 0x42569a:c.instructions+=3;goto B42569a;
case 0x42569c:c.instructions+=2;goto B42569c;
case 0x4256a0:c.instructions+=1;goto B4256a0;
case 0x4256a5:goto L4256a5;
case 0x4256a7:c.instructions+=2;goto B4256a7;
case 0x4256a9:c.instructions+=1;goto B4256a9;
case 0x4256af:goto L4256af;
case 0x4256b2:c.instructions+=2;goto B4256b2;
case 0x4256b5:c.instructions+=1;goto B4256b5;
case 0x4256ba:goto L4256ba;
case 0x4256bc:c.instructions+=2;goto B4256bc;
case 0x4256be:c.instructions+=1;goto B4256be;
case 0x4256c3:goto L4256c3;
case 0x4256c9:c.instructions+=6;goto B4256c9;
case 0x4256cc:c.instructions+=5;goto B4256cc;
case 0x4256cf:c.instructions+=4;goto B4256cf;
case 0x4256d2:c.instructions+=3;goto B4256d2;
case 0x4256d6:c.instructions+=2;goto B4256d6;
case 0x4256d9:c.instructions+=1;goto B4256d9;
case 0x4256de:goto L4256de;
case 0x4256e4:c.instructions+=6;goto B4256e4;
case 0x4256e8:c.instructions+=5;goto B4256e8;
case 0x4256ec:c.instructions+=4;goto B4256ec;
case 0x4256ed:c.instructions+=3;goto B4256ed;
case 0x4256ee:c.instructions+=2;goto B4256ee;
case 0x4256f0:c.instructions+=1;goto B4256f0;
case 0x4256f5:goto L4256f5;
case 0x4256f7:c.instructions+=3;goto B4256f7;
case 0x4256f8:c.instructions+=2;goto B4256f8;
case 0x4256fe:c.instructions+=1;goto B4256fe;
case 0x425703:goto L425703;
case 0x425707:c.instructions+=6;goto B425707;
case 0x42570e:c.instructions+=5;goto B42570e;
case 0x425711:c.instructions+=4;goto B425711;
case 0x425714:c.instructions+=3;goto B425714;
case 0x425716:c.instructions+=2;goto B425716;
case 0x42571a:c.instructions+=1;goto B42571a;
case 0x42571f:goto L42571f;
case 0x425723:c.instructions+=5;goto B425723;
case 0x425725:c.instructions+=4;goto B425725;
case 0x42572b:c.instructions+=3;goto B42572b;
case 0x42572d:c.instructions+=2;goto B42572d;
case 0x425730:c.instructions+=1;goto B425730;
case 0x425732:goto L425732;
case 0x425738:c.instructions+=5;goto B425738;
case 0x42573e:c.instructions+=4;goto B42573e;
case 0x425744:c.instructions+=3;goto B425744;
case 0x425746:c.instructions+=2;goto B425746;
case 0x425749:c.instructions+=1;goto B425749;
case 0x42574b:goto L42574b;
case 0x42574f:c.instructions+=1;goto B42574f;
case 0x425751:goto L425751;
case 0x425757:c.instructions+=2;goto B425757;
case 0x425759:c.instructions+=1;goto B425759;
case 0x42575d:goto L42575d;
case 0x425760:c.instructions+=2;goto B425760;
case 0x425761:c.instructions+=1;goto B425761;
case 0x425766:goto L425766;
case 0x42576a:c.instructions+=5;goto B42576a;
case 0x42576b:c.instructions+=4;goto B42576b;
case 0x42576e:c.instructions+=3;goto B42576e;
case 0x42576f:c.instructions+=2;goto B42576f;
case 0x425771:c.instructions+=1;goto B425771;
case 0x425776:goto L425776;
case 0x42577a:c.instructions+=12;goto B42577a;
case 0x42577d:c.instructions+=11;goto B42577d;
case 0x42577f:c.instructions+=10;goto B42577f;
case 0x425785:c.instructions+=9;goto B425785;
case 0x425788:c.instructions+=8;goto B425788;
case 0x42578c:c.instructions+=7;goto B42578c;
case 0x42578f:c.instructions+=6;goto B42578f;
case 0x425792:c.instructions+=5;goto B425792;
case 0x425793:c.instructions+=4;goto B425793;
case 0x425794:c.instructions+=3;goto B425794;
case 0x425795:c.instructions+=2;goto B425795;
case 0x425796:c.instructions+=1;goto B425796;
case 0x42579b:goto L42579b;
case 0x42579e:c.instructions+=1;goto B42579e;
case 0x4257a0:goto L4257a0;
case 0x4257a4:c.instructions+=4;goto B4257a4;
case 0x4257a5:c.instructions+=3;goto B4257a5;
case 0x4257a8:c.instructions+=2;goto B4257a8;
case 0x4257a9:c.instructions+=1;goto B4257a9;
case 0x4257ae:goto L4257ae;
case 0x4257b4:c.instructions+=6;goto B4257b4;
case 0x4257ba:c.instructions+=5;goto B4257ba;
case 0x4257c0:c.instructions+=4;goto B4257c0;
case 0x4257c6:c.instructions+=3;goto B4257c6;
case 0x4257c8:c.instructions+=2;goto B4257c8;
case 0x4257cb:c.instructions+=1;goto B4257cb;
case 0x4257cd:goto L4257cd;
case 0x4257cf:c.instructions+=1;goto B4257cf;
case 0x4257d5:goto L4257d5;
case 0x4257db:c.instructions+=2;goto B4257db;
case 0x4257e2:c.instructions+=1;goto B4257e2;
case 0x4257e4:goto L4257e4;
case 0x4257ea:c.instructions+=7;goto B4257ea;
case 0x4257f0:c.instructions+=6;goto B4257f0;
case 0x4257f3:c.instructions+=5;goto B4257f3;
case 0x4257f7:c.instructions+=4;goto B4257f7;
case 0x4257fd:c.instructions+=3;goto B4257fd;
case 0x425802:c.instructions+=2;goto B425802;
case 0x425805:c.instructions+=1;goto B425805;
case 0x42580a:goto L42580a;
case 0x42580c:c.instructions+=5;goto B42580c;
case 0x425810:c.instructions+=4;goto B425810;
case 0x425811:c.instructions+=3;goto B425811;
case 0x425814:c.instructions+=2;goto B425814;
case 0x425815:c.instructions+=1;goto B425815;
case 0x42581a:goto L42581a;
case 0x425821:goto L425821;
case 0x425822:c.instructions+=9;goto B425822;
case 0x42582c:c.instructions+=8;goto B42582c;
case 0x425836:c.instructions+=7;goto B425836;
case 0x42583d:c.instructions+=6;goto B42583d;
case 0x425844:c.instructions+=5;goto B425844;
case 0x425845:c.instructions+=4;goto B425845;
case 0x425846:c.instructions+=3;goto B425846;
case 0x425847:c.instructions+=2;goto B425847;
case 0x425848:c.instructions+=1;goto B425848;
case 0x425850:goto L425850;
case 0x425855:c.instructions+=1;goto B425855;
case 0x425860:goto L425860;
case 0x425866:c.instructions+=1;goto B425866;
case 0x425870:goto L425870;
case 0x425871:c.instructions+=12;goto B425871;
case 0x425872:c.instructions+=11;goto B425872;
case 0x425873:c.instructions+=10;goto B425873;
case 0x425877:c.instructions+=9;goto B425877;
case 0x42587e:c.instructions+=8;goto B42587e;
case 0x425881:c.instructions+=7;goto B425881;
case 0x425884:c.instructions+=6;goto B425884;
case 0x425886:c.instructions+=5;goto B425886;
case 0x42588a:c.instructions+=4;goto B42588a;
case 0x425890:c.instructions+=3;goto B425890;
case 0x425892:c.instructions+=2;goto B425892;
case 0x425898:c.instructions+=1;goto B425898;
case 0x42589a:goto L42589a;
case 0x42589d:c.instructions+=2;goto B42589d;
case 0x42589e:c.instructions+=1;goto B42589e;
case 0x4258a3:goto L4258a3;
case 0x4258a7:c.instructions+=9;goto B4258a7;
case 0x4258ad:c.instructions+=8;goto B4258ad;
case 0x4258b3:c.instructions+=7;goto B4258b3;
case 0x4258b7:c.instructions+=6;goto B4258b7;
case 0x4258b8:c.instructions+=5;goto B4258b8;
case 0x4258b9:c.instructions+=4;goto B4258b9;
case 0x4258bb:c.instructions+=3;goto B4258bb;
case 0x4258bd:c.instructions+=2;goto B4258bd;
case 0x4258c4:c.instructions+=1;goto B4258c4;
case 0x4258c9:goto L4258c9;
case 0x4258ca:c.instructions+=4;goto B4258ca;
case 0x4258cd:c.instructions+=3;goto B4258cd;
case 0x4258ce:c.instructions+=2;goto B4258ce;
case 0x4258d0:c.instructions+=1;goto B4258d0;
case 0x4258d5:goto L4258d5;
case 0x4258d6:c.instructions+=9;goto B4258d6;
case 0x4258e0:c.instructions+=8;goto B4258e0;
case 0x4258e7:c.instructions+=7;goto B4258e7;
case 0x4258f1:c.instructions+=6;goto B4258f1;
case 0x4258fb:c.instructions+=5;goto B4258fb;
case 0x425902:c.instructions+=4;goto B425902;
case 0x425909:c.instructions+=3;goto B425909;
case 0x42590a:c.instructions+=2;goto B42590a;
case 0x42590b:c.instructions+=1;goto B42590b;
case 0x425910:goto L425910;
case 0x425911:c.instructions+=12;goto B425911;
case 0x425912:c.instructions+=11;goto B425912;
case 0x425916:c.instructions+=10;goto B425916;
case 0x425919:c.instructions+=9;goto B425919;
case 0x42591c:c.instructions+=8;goto B42591c;
case 0x425922:c.instructions+=7;goto B425922;
case 0x425927:c.instructions+=6;goto B425927;
case 0x42592b:c.instructions+=5;goto B42592b;
case 0x42592d:c.instructions+=4;goto B42592d;
case 0x42592e:c.instructions+=3;goto B42592e;
case 0x425935:c.instructions+=2;goto B425935;
case 0x425939:c.instructions+=1;goto B425939;
case 0x42593c:goto L42593c;
case 0x425940:c.instructions+=4;goto B425940;
case 0x425944:c.instructions+=3;goto B425944;
case 0x425946:c.instructions+=2;goto B425946;
case 0x425949:c.instructions+=1;goto B425949;
case 0x42594b:goto L42594b;
case 0x42594f:c.instructions+=1;goto B42594f;
case 0x425951:goto L425951;
case 0x425955:c.instructions+=2;goto B425955;
case 0x425957:c.instructions+=1;goto B425957;
case 0x42595b:goto L42595b;
case 0x42595f:c.instructions+=9;goto B42595f;
case 0x425963:c.instructions+=8;goto B425963;
case 0x425964:c.instructions+=7;goto B425964;
case 0x425967:c.instructions+=6;goto B425967;
case 0x425968:c.instructions+=5;goto B425968;
case 0x42596b:c.instructions+=4;goto B42596b;
case 0x42596c:c.instructions+=3;goto B42596c;
case 0x42596d:c.instructions+=2;goto B42596d;
case 0x42596e:c.instructions+=1;goto B42596e;
case 0x425973:goto L425973;
case 0x425976:c.instructions+=4;goto B425976;
case 0x425977:c.instructions+=3;goto B425977;
case 0x425978:c.instructions+=2;goto B425978;
case 0x425979:c.instructions+=1;goto B425979;
case 0x425980:goto L425980;
case 0x425981:c.instructions+=11;goto B425981;
case 0x425982:c.instructions+=10;goto B425982;
case 0x425986:c.instructions+=9;goto B425986;
case 0x425989:c.instructions+=8;goto B425989;
case 0x42598c:c.instructions+=7;goto B42598c;
case 0x42598e:c.instructions+=6;goto B42598e;
case 0x425991:c.instructions+=5;goto B425991;
case 0x425992:c.instructions+=4;goto B425992;
case 0x425995:c.instructions+=3;goto B425995;
case 0x425996:c.instructions+=2;goto B425996;
case 0x425997:c.instructions+=1;goto B425997;
case 0x42599c:goto L42599c;
case 0x42599f:c.instructions+=5;goto B42599f;
case 0x4259a1:c.instructions+=4;goto B4259a1;
case 0x4259a2:c.instructions+=3;goto B4259a2;
case 0x4259a3:c.instructions+=2;goto B4259a3;
case 0x4259a4:c.instructions+=1;goto B4259a4;
case 0x4259a9:goto L4259a9;
case 0x4259ad:c.instructions+=4;goto B4259ad;
case 0x4259ae:c.instructions+=3;goto B4259ae;
case 0x4259b1:c.instructions+=2;goto B4259b1;
case 0x4259b2:c.instructions+=1;goto B4259b2;
case 0x4259b7:goto L4259b7;
case 0x4259ba:c.instructions+=4;goto B4259ba;
case 0x4259bb:c.instructions+=3;goto B4259bb;
case 0x4259bc:c.instructions+=2;goto B4259bc;
case 0x4259bd:c.instructions+=1;goto B4259bd;
case 0x4259c0:goto L4259c0;
case 0x4259c1:c.instructions+=14;goto B4259c1;
case 0x4259c2:c.instructions+=13;goto B4259c2;
case 0x4259c3:c.instructions+=12;goto B4259c3;
case 0x4259c7:c.instructions+=11;goto B4259c7;
case 0x4259ce:c.instructions+=10;goto B4259ce;
case 0x4259cf:c.instructions+=9;goto B4259cf;
case 0x4259d1:c.instructions+=8;goto B4259d1;
case 0x4259d4:c.instructions+=7;goto B4259d4;
case 0x4259d7:c.instructions+=6;goto B4259d7;
case 0x4259dd:c.instructions+=5;goto B4259dd;
case 0x4259e2:c.instructions+=4;goto B4259e2;
case 0x4259e6:c.instructions+=3;goto B4259e6;
case 0x4259e8:c.instructions+=2;goto B4259e8;
case 0x4259ec:c.instructions+=1;goto B4259ec;
case 0x4259ef:goto L4259ef;
case 0x4259f3:c.instructions+=4;goto B4259f3;
case 0x4259f7:c.instructions+=3;goto B4259f7;
case 0x4259f9:c.instructions+=2;goto B4259f9;
case 0x4259fc:c.instructions+=1;goto B4259fc;
case 0x4259fe:goto L4259fe;
case 0x425a02:c.instructions+=1;goto B425a02;
case 0x425a04:goto L425a04;
case 0x425a08:c.instructions+=2;goto B425a08;
case 0x425a0a:c.instructions+=1;goto B425a0a;
case 0x425a0e:goto L425a0e;
case 0x425a12:c.instructions+=10;goto B425a12;
case 0x425a13:c.instructions+=9;goto B425a13;
case 0x425a19:c.instructions+=8;goto B425a19;
case 0x425a1a:c.instructions+=7;goto B425a1a;
case 0x425a1d:c.instructions+=6;goto B425a1d;
case 0x425a1e:c.instructions+=5;goto B425a1e;
case 0x425a21:c.instructions+=4;goto B425a21;
case 0x425a22:c.instructions+=3;goto B425a22;
case 0x425a23:c.instructions+=2;goto B425a23;
case 0x425a25:c.instructions+=1;goto B425a25;
case 0x425a2a:goto L425a2a;
case 0x425a2b:c.instructions+=4;goto B425a2b;
case 0x425a2c:c.instructions+=3;goto B425a2c;
case 0x425a2d:c.instructions+=2;goto B425a2d;
case 0x425a2e:c.instructions+=1;goto B425a2e;
case 0x425a40:goto L425a40;
case 0x425a41:c.instructions+=15;goto B425a41;
case 0x425a42:c.instructions+=14;goto B425a42;
case 0x425a43:c.instructions+=13;goto B425a43;
case 0x425a47:c.instructions+=12;goto B425a47;
case 0x425a4a:c.instructions+=11;goto B425a4a;
case 0x425a4d:c.instructions+=10;goto B425a4d;
case 0x425a50:c.instructions+=9;goto B425a50;
case 0x425a51:c.instructions+=8;goto B425a51;
case 0x425a55:c.instructions+=7;goto B425a55;
case 0x425a58:c.instructions+=6;goto B425a58;
case 0x425a5a:c.instructions+=5;goto B425a5a;
case 0x425a5c:c.instructions+=4;goto B425a5c;
case 0x425a5f:c.instructions+=3;goto B425a5f;
case 0x425a60:c.instructions+=2;goto B425a60;
case 0x425a61:c.instructions+=1;goto B425a61;
case 0x425a66:goto L425a66;
case 0x425a69:c.instructions+=7;goto B425a69;
case 0x425a6b:c.instructions+=6;goto B425a6b;
case 0x425a6c:c.instructions+=5;goto B425a6c;
case 0x425a70:c.instructions+=4;goto B425a70;
case 0x425a71:c.instructions+=3;goto B425a71;
case 0x425a72:c.instructions+=2;goto B425a72;
case 0x425a73:c.instructions+=1;goto B425a73;
case 0x425a78:goto L425a78;
case 0x425a79:c.instructions+=3;goto B425a79;
case 0x425a7b:c.instructions+=2;goto B425a7b;
case 0x425a7e:c.instructions+=1;goto B425a7e;
case 0x425a83:goto L425a83;
case 0x425a84:c.instructions+=4;goto B425a84;
case 0x425a85:c.instructions+=3;goto B425a85;
case 0x425a86:c.instructions+=2;goto B425a86;
case 0x425a87:c.instructions+=1;goto B425a87;
case 0x425a90:goto L425a90;
case 0x425a91:c.instructions+=2;goto B425a91;
case 0x425a93:c.instructions+=1;goto B425a93;
case 0x425a98:goto L425a98;
case 0x425a9d:c.instructions+=1;goto B425a9d;
case 0x425a9f:goto L425a9f;
case 0x425aa0:c.instructions+=1;goto B425aa0;
case 0x425aa5:goto L425aa5;
case 0x425aa8:goto L425aa8;
case 0x425aaa:c.instructions+=2;goto B425aaa;
case 0x425aab:c.instructions+=1;goto B425aab;
case 0x425ab0:goto L425ab0;
case 0x425ab2:c.instructions+=11;goto B425ab2;
case 0x425ab7:c.instructions+=10;goto B425ab7;
case 0x425abd:c.instructions+=9;goto B425abd;
case 0x425abe:c.instructions+=8;goto B425abe;
case 0x425ac5:c.instructions+=7;goto B425ac5;
case 0x425ac6:c.instructions+=6;goto B425ac6;
case 0x425ac7:c.instructions+=5;goto B425ac7;
case 0x425ac8:c.instructions+=4;goto B425ac8;
case 0x425aca:c.instructions+=3;goto B425aca;
case 0x425acb:c.instructions+=2;goto B425acb;
case 0x425acf:c.instructions+=1;goto B425acf;
case 0x425ad4:goto L425ad4;
case 0x425ad9:c.instructions+=9;goto B425ad9;
case 0x425adb:c.instructions+=8;goto B425adb;
case 0x425adc:c.instructions+=7;goto B425adc;
case 0x425ae2:c.instructions+=6;goto B425ae2;
case 0x425ae8:c.instructions+=5;goto B425ae8;
case 0x425ae9:c.instructions+=4;goto B425ae9;
case 0x425aeb:c.instructions+=3;goto B425aeb;
case 0x425aef:c.instructions+=2;goto B425aef;
case 0x425af5:c.instructions+=1;goto B425af5;
case 0x425afa:goto L425afa;
case 0x425b00:c.instructions+=14;goto B425b00;
case 0x425b02:c.instructions+=13;goto B425b02;
case 0x425b08:c.instructions+=12;goto B425b08;
case 0x425b0e:c.instructions+=11;goto B425b0e;
case 0x425b14:c.instructions+=10;goto B425b14;
case 0x425b1a:c.instructions+=9;goto B425b1a;
case 0x425b1f:c.instructions+=8;goto B425b1f;
case 0x425b25:c.instructions+=7;goto B425b25;
case 0x425b26:c.instructions+=6;goto B425b26;
case 0x425b27:c.instructions+=5;goto B425b27;
case 0x425b28:c.instructions+=4;goto B425b28;
case 0x425b29:c.instructions+=3;goto B425b29;
case 0x425b2f:c.instructions+=2;goto B425b2f;
case 0x425b34:c.instructions+=1;goto B425b34;
case 0x425b39:goto L425b39;
case 0x425b3d:c.instructions+=5;goto B425b3d;
case 0x425b44:c.instructions+=4;goto B425b44;
case 0x425b47:c.instructions+=3;goto B425b47;
case 0x425b4b:c.instructions+=2;goto B425b4b;
case 0x425b50:c.instructions+=1;goto B425b50;
case 0x425b52:goto L425b52;
case 0x425b58:c.instructions+=2;goto B425b58;
case 0x425b5f:c.instructions+=1;goto B425b5f;
case 0x425b61:goto L425b61;
case 0x425b67:goto L425b67;
case 0x425b6d:c.instructions+=15;goto B425b6d;
case 0x425b73:c.instructions+=14;goto B425b73;
case 0x425b79:c.instructions+=13;goto B425b79;
case 0x425b7f:c.instructions+=12;goto B425b7f;
case 0x425b85:c.instructions+=11;goto B425b85;
case 0x425b8c:c.instructions+=10;goto B425b8c;
case 0x425b92:c.instructions+=9;goto B425b92;
case 0x425b98:c.instructions+=8;goto B425b98;
case 0x425b9f:c.instructions+=7;goto B425b9f;
case 0x425ba5:c.instructions+=6;goto B425ba5;
case 0x425bab:c.instructions+=5;goto B425bab;
case 0x425bb2:c.instructions+=4;goto B425bb2;
case 0x425bb7:c.instructions+=3;goto B425bb7;
case 0x425bb8:c.instructions+=2;goto B425bb8;
case 0x425bb9:c.instructions+=1;goto B425bb9;
case 0x425bbe:goto L425bbe;
case 0x425bc0:c.instructions+=5;goto B425bc0;
case 0x425bc3:c.instructions+=4;goto B425bc3;
case 0x425bc7:c.instructions+=3;goto B425bc7;
case 0x425bc9:c.instructions+=2;goto B425bc9;
case 0x425bce:c.instructions+=1;goto B425bce;
case 0x425bd0:goto L425bd0;
case 0x425bd1:c.instructions+=3;goto B425bd1;
case 0x425bd2:c.instructions+=2;goto B425bd2;
case 0x425bd7:c.instructions+=1;goto B425bd7;
case 0x425bdc:goto L425bdc;
case 0x425bdf:c.instructions+=3;goto B425bdf;
case 0x425be0:c.instructions+=2;goto B425be0;
case 0x425be2:c.instructions+=1;goto B425be2;
case 0x425be7:goto L425be7;
case 0x425be9:goto L425be9;
case 0x425beb:goto L425beb;
case 0x425bf1:c.instructions+=7;goto B425bf1;
case 0x425bf6:c.instructions+=6;goto B425bf6;
case 0x425bfb:c.instructions+=5;goto B425bfb;
case 0x425c01:c.instructions+=4;goto B425c01;
case 0x425c07:c.instructions+=3;goto B425c07;
case 0x425c0d:c.instructions+=2;goto B425c0d;
case 0x425c13:c.instructions+=1;goto B425c13;
case 0x425c18:goto L425c18;
case 0x425c1b:c.instructions+=5;goto B425c1b;
case 0x425c1f:c.instructions+=4;goto B425c1f;
case 0x425c21:c.instructions+=3;goto B425c21;
case 0x425c26:c.instructions+=2;goto B425c26;
case 0x425c27:c.instructions+=1;goto B425c27;
case 0x425c29:goto L425c29;
case 0x425c2e:c.instructions+=4;goto B425c2e;
case 0x425c30:c.instructions+=3;goto B425c30;
case 0x425c32:c.instructions+=2;goto B425c32;
case 0x425c34:c.instructions+=1;goto B425c34;
case 0x425c39:goto L425c39;
case 0x425c3b:goto L425c3b;
case 0x425c3d:goto L425c3d;
case 0x425c42:c.instructions+=3;goto B425c42;
case 0x425c47:c.instructions+=2;goto B425c47;
case 0x425c4d:c.instructions+=1;goto B425c4d;
case 0x425c52:goto L425c52;
case 0x425c55:c.instructions+=4;goto B425c55;
case 0x425c59:c.instructions+=3;goto B425c59;
case 0x425c5b:c.instructions+=2;goto B425c5b;
case 0x425c60:c.instructions+=1;goto B425c60;
case 0x425c62:goto L425c62;
case 0x425c67:c.instructions+=4;goto B425c67;
case 0x425c69:c.instructions+=3;goto B425c69;
case 0x425c6b:c.instructions+=2;goto B425c6b;
case 0x425c6d:c.instructions+=1;goto B425c6d;
case 0x425c72:goto L425c72;
case 0x425c74:goto L425c74;
case 0x425c76:goto L425c76;
case 0x425c7b:c.instructions+=3;goto B425c7b;
case 0x425c80:c.instructions+=2;goto B425c80;
case 0x425c86:c.instructions+=1;goto B425c86;
case 0x425c8b:goto L425c8b;
case 0x425c8e:c.instructions+=4;goto B425c8e;
case 0x425c92:c.instructions+=3;goto B425c92;
case 0x425c94:c.instructions+=2;goto B425c94;
case 0x425c99:c.instructions+=1;goto B425c99;
case 0x425c9b:goto L425c9b;
case 0x425ca0:c.instructions+=4;goto B425ca0;
case 0x425ca2:c.instructions+=3;goto B425ca2;
case 0x425ca4:c.instructions+=2;goto B425ca4;
case 0x425ca6:c.instructions+=1;goto B425ca6;
case 0x425cab:goto L425cab;
case 0x425cad:goto L425cad;
case 0x425caf:goto L425caf;
case 0x425cb4:c.instructions+=3;goto B425cb4;
case 0x425cb9:c.instructions+=2;goto B425cb9;
case 0x425cbf:c.instructions+=1;goto B425cbf;
case 0x425cc4:goto L425cc4;
case 0x425cc7:c.instructions+=4;goto B425cc7;
case 0x425ccb:c.instructions+=3;goto B425ccb;
case 0x425ccd:c.instructions+=2;goto B425ccd;
case 0x425cd2:c.instructions+=1;goto B425cd2;
case 0x425cd4:goto L425cd4;
case 0x425cda:c.instructions+=6;goto B425cda;
case 0x425ce0:c.instructions+=5;goto B425ce0;
case 0x425ce5:c.instructions+=4;goto B425ce5;
case 0x425ce6:c.instructions+=3;goto B425ce6;
case 0x425ce7:c.instructions+=2;goto B425ce7;
case 0x425ce9:c.instructions+=1;goto B425ce9;
case 0x425cee:goto L425cee;
case 0x425cf0:goto L425cf0;
case 0x425cf2:goto L425cf2;
case 0x425cf7:c.instructions+=3;goto B425cf7;
case 0x425cfc:c.instructions+=2;goto B425cfc;
case 0x425d02:c.instructions+=1;goto B425d02;
case 0x425d07:goto L425d07;
case 0x425d0a:c.instructions+=4;goto B425d0a;
case 0x425d0e:c.instructions+=3;goto B425d0e;
case 0x425d10:c.instructions+=2;goto B425d10;
case 0x425d15:c.instructions+=1;goto B425d15;
case 0x425d17:goto L425d17;
case 0x425d1c:c.instructions+=4;goto B425d1c;
case 0x425d1e:c.instructions+=3;goto B425d1e;
case 0x425d20:c.instructions+=2;goto B425d20;
case 0x425d22:c.instructions+=1;goto B425d22;
case 0x425d27:goto L425d27;
case 0x425d29:goto L425d29;
case 0x425d2b:goto L425d2b;
case 0x425d30:c.instructions+=3;goto B425d30;
case 0x425d35:c.instructions+=2;goto B425d35;
case 0x425d3b:c.instructions+=1;goto B425d3b;
case 0x425d40:goto L425d40;
case 0x425d43:c.instructions+=4;goto B425d43;
case 0x425d47:c.instructions+=3;goto B425d47;
case 0x425d49:c.instructions+=2;goto B425d49;
case 0x425d4e:c.instructions+=1;goto B425d4e;
case 0x425d50:goto L425d50;
case 0x425d55:c.instructions+=4;goto B425d55;
case 0x425d57:c.instructions+=3;goto B425d57;
case 0x425d59:c.instructions+=2;goto B425d59;
case 0x425d5b:c.instructions+=1;goto B425d5b;
case 0x425d60:goto L425d60;
case 0x425d62:goto L425d62;
case 0x425d64:goto L425d64;
case 0x425d6a:c.instructions+=4;goto B425d6a;
case 0x425d6b:c.instructions+=3;goto B425d6b;
case 0x425d70:c.instructions+=2;goto B425d70;
case 0x425d76:c.instructions+=1;goto B425d76;
case 0x425d7b:goto L425d7b;
case 0x425d81:c.instructions+=2;goto B425d81;
case 0x425d82:c.instructions+=1;goto B425d82;
case 0x425d87:goto L425d87;
case 0x425d8d:c.instructions+=2;goto B425d8d;
case 0x425d8e:c.instructions+=1;goto B425d8e;
case 0x425d93:goto L425d93;
case 0x425d99:c.instructions+=36;goto B425d99;
case 0x425d9e:c.instructions+=35;goto B425d9e;
case 0x425da4:c.instructions+=34;goto B425da4;
case 0x425daa:c.instructions+=33;goto B425daa;
case 0x425db0:c.instructions+=32;goto B425db0;
case 0x425db6:c.instructions+=31;goto B425db6;
case 0x425dbc:c.instructions+=30;goto B425dbc;
case 0x425dc2:c.instructions+=29;goto B425dc2;
case 0x425dc5:c.instructions+=28;goto B425dc5;
case 0x425dca:c.instructions+=27;goto B425dca;
case 0x425dcd:c.instructions+=26;goto B425dcd;
case 0x425dd3:c.instructions+=25;goto B425dd3;
case 0x425dd6:c.instructions+=24;goto B425dd6;
case 0x425ddc:c.instructions+=23;goto B425ddc;
case 0x425ddf:c.instructions+=22;goto B425ddf;
case 0x425de4:c.instructions+=21;goto B425de4;
case 0x425de7:c.instructions+=20;goto B425de7;
case 0x425dea:c.instructions+=19;goto B425dea;
case 0x425df0:c.instructions+=18;goto B425df0;
case 0x425df2:c.instructions+=17;goto B425df2;
case 0x425df8:c.instructions+=16;goto B425df8;
case 0x425dfe:c.instructions+=15;goto B425dfe;
case 0x425e00:c.instructions+=14;goto B425e00;
case 0x425e05:c.instructions+=13;goto B425e05;
case 0x425e0b:c.instructions+=12;goto B425e0b;
case 0x425e11:c.instructions+=11;goto B425e11;
case 0x425e17:c.instructions+=10;goto B425e17;
case 0x425e1d:c.instructions+=9;goto B425e1d;
case 0x425e21:c.instructions+=8;goto B425e21;
case 0x425e22:c.instructions+=7;goto B425e22;
case 0x425e28:c.instructions+=6;goto B425e28;
case 0x425e2a:c.instructions+=5;goto B425e2a;
case 0x425e2b:c.instructions+=4;goto B425e2b;
case 0x425e2c:c.instructions+=3;goto B425e2c;
case 0x425e33:c.instructions+=2;goto B425e33;
case 0x425e36:c.instructions+=1;goto B425e36;
case 0x425e40:goto L425e40;
case 0x425e42:c.instructions+=11;goto B425e42;
case 0x425e47:c.instructions+=10;goto B425e47;
case 0x425e4d:c.instructions+=9;goto B425e4d;
case 0x425e4e:c.instructions+=8;goto B425e4e;
case 0x425e55:c.instructions+=7;goto B425e55;
case 0x425e56:c.instructions+=6;goto B425e56;
case 0x425e57:c.instructions+=5;goto B425e57;
case 0x425e58:c.instructions+=4;goto B425e58;
case 0x425e5a:c.instructions+=3;goto B425e5a;
case 0x425e5b:c.instructions+=2;goto B425e5b;
case 0x425e5f:c.instructions+=1;goto B425e5f;
case 0x425e64:goto L425e64;
case 0x425e68:c.instructions+=11;goto B425e68;
case 0x425e6a:c.instructions+=10;goto B425e6a;
case 0x425e70:c.instructions+=9;goto B425e70;
case 0x425e76:c.instructions+=8;goto B425e76;
case 0x425e7c:c.instructions+=7;goto B425e7c;
case 0x425e82:c.instructions+=6;goto B425e82;
case 0x425e88:c.instructions+=5;goto B425e88;
case 0x425e8e:c.instructions+=4;goto B425e8e;
case 0x425e94:c.instructions+=3;goto B425e94;
case 0x425e95:c.instructions+=2;goto B425e95;
case 0x425e99:c.instructions+=1;goto B425e99;
case 0x425e9e:goto L425e9e;
case 0x425ea0:c.instructions+=5;goto B425ea0;
case 0x425ea3:c.instructions+=4;goto B425ea3;
case 0x425ea7:c.instructions+=3;goto B425ea7;
case 0x425ea9:c.instructions+=2;goto B425ea9;
case 0x425eae:c.instructions+=1;goto B425eae;
case 0x425eb0:goto L425eb0;
case 0x425eb1:c.instructions+=3;goto B425eb1;
case 0x425eb2:c.instructions+=2;goto B425eb2;
case 0x425eb7:c.instructions+=1;goto B425eb7;
case 0x425ebc:goto L425ebc;
case 0x425ebf:c.instructions+=3;goto B425ebf;
case 0x425ec0:c.instructions+=2;goto B425ec0;
case 0x425ec2:c.instructions+=1;goto B425ec2;
case 0x425ec7:goto L425ec7;
case 0x425ec9:goto L425ec9;
case 0x425ecb:goto L425ecb;
case 0x425ed1:c.instructions+=4;goto B425ed1;
case 0x425ed7:c.instructions+=3;goto B425ed7;
case 0x425ed8:c.instructions+=2;goto B425ed8;
case 0x425edc:c.instructions+=1;goto B425edc;
case 0x425ee1:goto L425ee1;
case 0x425ee3:c.instructions+=5;goto B425ee3;
case 0x425ee6:c.instructions+=4;goto B425ee6;
case 0x425eea:c.instructions+=3;goto B425eea;
case 0x425eec:c.instructions+=2;goto B425eec;
case 0x425ef1:c.instructions+=1;goto B425ef1;
case 0x425ef3:goto L425ef3;
case 0x425ef4:c.instructions+=3;goto B425ef4;
case 0x425ef5:c.instructions+=2;goto B425ef5;
case 0x425efa:c.instructions+=1;goto B425efa;
case 0x425eff:goto L425eff;
case 0x425f02:c.instructions+=3;goto B425f02;
case 0x425f03:c.instructions+=2;goto B425f03;
case 0x425f05:c.instructions+=1;goto B425f05;
case 0x425f0a:goto L425f0a;
case 0x425f0c:goto L425f0c;
case 0x425f0e:goto L425f0e;
case 0x425f14:c.instructions+=4;goto B425f14;
case 0x425f19:c.instructions+=3;goto B425f19;
case 0x425f1a:c.instructions+=2;goto B425f1a;
case 0x425f1e:c.instructions+=1;goto B425f1e;
case 0x425f23:goto L425f23;
case 0x425f25:c.instructions+=5;goto B425f25;
case 0x425f28:c.instructions+=4;goto B425f28;
case 0x425f2c:c.instructions+=3;goto B425f2c;
case 0x425f2e:c.instructions+=2;goto B425f2e;
case 0x425f33:c.instructions+=1;goto B425f33;
case 0x425f35:goto L425f35;
case 0x425f36:c.instructions+=3;goto B425f36;
case 0x425f37:c.instructions+=2;goto B425f37;
case 0x425f3c:c.instructions+=1;goto B425f3c;
case 0x425f41:goto L425f41;
case 0x425f44:c.instructions+=3;goto B425f44;
case 0x425f45:c.instructions+=2;goto B425f45;
case 0x425f47:c.instructions+=1;goto B425f47;
case 0x425f4c:goto L425f4c;
case 0x425f4e:goto L425f4e;
case 0x425f50:goto L425f50;
case 0x425f56:c.instructions+=4;goto B425f56;
case 0x425f5c:c.instructions+=3;goto B425f5c;
case 0x425f5d:c.instructions+=2;goto B425f5d;
case 0x425f61:c.instructions+=1;goto B425f61;
case 0x425f66:goto L425f66;
case 0x425f68:c.instructions+=5;goto B425f68;
case 0x425f6b:c.instructions+=4;goto B425f6b;
case 0x425f6f:c.instructions+=3;goto B425f6f;
case 0x425f71:c.instructions+=2;goto B425f71;
case 0x425f76:c.instructions+=1;goto B425f76;
case 0x425f78:goto L425f78;
case 0x425f79:c.instructions+=3;goto B425f79;
case 0x425f7a:c.instructions+=2;goto B425f7a;
case 0x425f7f:c.instructions+=1;goto B425f7f;
case 0x425f84:goto L425f84;
case 0x425f87:c.instructions+=3;goto B425f87;
case 0x425f88:c.instructions+=2;goto B425f88;
case 0x425f8a:c.instructions+=1;goto B425f8a;
case 0x425f8f:goto L425f8f;
case 0x425f95:c.instructions+=1;goto B425f95;
case 0x425f97:goto L425f97;
case 0x425f9d:goto L425f9d;
case 0x425fa1:c.instructions+=7;goto B425fa1;
case 0x425fa2:c.instructions+=6;goto B425fa2;
case 0x425fa4:c.instructions+=5;goto B425fa4;
case 0x425fa5:c.instructions+=4;goto B425fa5;
case 0x425fa6:c.instructions+=3;goto B425fa6;
case 0x425fad:c.instructions+=2;goto B425fad;
case 0x425fb0:c.instructions+=1;goto B425fb0;
case 0x425fc0:goto L425fc0;
case 0x425fc2:c.instructions+=11;goto B425fc2;
case 0x425fc7:c.instructions+=10;goto B425fc7;
case 0x425fcd:c.instructions+=9;goto B425fcd;
case 0x425fce:c.instructions+=8;goto B425fce;
case 0x425fd5:c.instructions+=7;goto B425fd5;
case 0x425fd6:c.instructions+=6;goto B425fd6;
case 0x425fd7:c.instructions+=5;goto B425fd7;
case 0x425fd8:c.instructions+=4;goto B425fd8;
case 0x425fda:c.instructions+=3;goto B425fda;
case 0x425fdb:c.instructions+=2;goto B425fdb;
case 0x425fdf:c.instructions+=1;goto B425fdf;
case 0x425fe4:goto L425fe4;
case 0x425fe8:c.instructions+=6;goto B425fe8;
case 0x425fea:c.instructions+=5;goto B425fea;
case 0x425feb:c.instructions+=4;goto B425feb;
case 0x425ff1:c.instructions+=3;goto B425ff1;
case 0x425ff5:c.instructions+=2;goto B425ff5;
case 0x425ffb:c.instructions+=1;goto B425ffb;
default:missing_instruction(c.pc);}
B425000:L425000:{c.instructions+=3;NFSU2_TR(0x425000);
__builtin_memmove((R+16),(R+20),4);
}
B425002:{NFSU2_TR(0x425002);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B425003:{NFSU2_TR(0x425003);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425006:L425006:{c.instructions+=3;NFSU2_TR(0x425006);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B42500a:{NFSU2_TR(0x42500a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425010:{NFSU2_TR(0x425010);
if(r1(R+518)){TAIL_STATIC(0x424e1cu,424);}
}
B425016:L425016:{c.instructions+=3;NFSU2_TR(0x425016);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42501a:{NFSU2_TR(0x42501a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42501b:{NFSU2_TR(0x42501b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425020ull));
TAIL_STATIC(0x405410u,405);
}
B425020:L425020:{c.instructions+=1;NFSU2_TR(0x425020);
TAIL_STATIC(0x424e21u,424);
}
B425025:L425025:{c.instructions+=4;NFSU2_TR(0x425025);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B425029:{NFSU2_TR(0x425029);
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
B42502b:{NFSU2_TR(0x42502b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B42502f:{NFSU2_TR(0x42502f);
if(r1(R+518)){TAIL_STATIC(0x424f89u,424);}
}
B425035:L425035:{c.instructions+=6;NFSU2_TR(0x425035);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425039:{NFSU2_TR(0x425039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42503f:{NFSU2_TR(0x42503f);
{u32 ea_=u32(u32(7878476u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B425045:{NFSU2_TR(0x425045);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425047:{NFSU2_TR(0x425047);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42504a:{NFSU2_TR(0x42504a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425096;}}
}
B42504c:L42504c:{c.instructions+=4;NFSU2_TR(0x42504c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42504e:{NFSU2_TR(0x42504e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
w4(U+4,u32(0x40c00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425058:{NFSU2_TR(0x425058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425062:{NFSU2_TR(0x425062);
if(r1(R+518)){{goto L4250da;}}
}
B425064:L425064:{c.instructions+=1;NFSU2_TR(0x425064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425069ull));
TAIL_STATIC(0x6148c0u,614);
}
B425069:L425069:{c.instructions+=2;NFSU2_TR(0x425069);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42506b:{NFSU2_TR(0x42506b);
if(r1(R+518)){{goto L4250da;}}
}
B42506d:L42506d:{c.instructions+=8;NFSU2_TR(0x42506d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42506f:{NFSU2_TR(0x42506f);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B425073:{NFSU2_TR(0x425073);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42507b:{NFSU2_TR(0x42507b);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425083:{NFSU2_TR(0x425083);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42508b:{NFSU2_TR(0x42508b);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425093:{NFSU2_TR(0x425093);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425094:{NFSU2_TR(0x425094);
{goto L4250de;}
}
B425096:L425096:{c.instructions+=5;NFSU2_TR(0x425096);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425098:{NFSU2_TR(0x425098);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B42509a:{NFSU2_TR(0x42509a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4250a0:{NFSU2_TR(0x4250a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4250a6:{NFSU2_TR(0x4250a6);
if(r1(R+518)){{goto L4250da;}}
}
B4250a8:L4250a8:{c.instructions+=1;NFSU2_TR(0x4250a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4250adull));
TAIL_STATIC(0x6148c0u,614);
}
B4250ad:L4250ad:{c.instructions+=2;NFSU2_TR(0x4250ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4250af:{NFSU2_TR(0x4250af);
if(r1(R+518)){{goto L4250da;}}
}
B4250b1:L4250b1:{c.instructions+=8;NFSU2_TR(0x4250b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4250b3:{NFSU2_TR(0x4250b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4250b7:{NFSU2_TR(0x4250b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4250bf:{NFSU2_TR(0x4250bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4250c7:{NFSU2_TR(0x4250c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4250cf:{NFSU2_TR(0x4250cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4250d7:{NFSU2_TR(0x4250d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4250d8:{NFSU2_TR(0x4250d8);
{goto L4250de;}
}
B4250da:L4250da:{c.instructions+=2;NFSU2_TR(0x4250da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4250dc:{NFSU2_TR(0x4250dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4250de:L4250de:{c.instructions+=2;NFSU2_TR(0x4250de);
__builtin_memmove((R+4),(R+12),4);
}
B4250e0:{NFSU2_TR(0x4250e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4250e5ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B4250e5:L4250e5:{c.instructions+=2;NFSU2_TR(0x4250e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4250ef:{NFSU2_TR(0x4250ef);
TAIL_STATIC(0x424fdau,424);
}
B425100:L425100:{c.instructions+=9;NFSU2_TR(0x425100);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425104:{NFSU2_TR(0x425104);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425105:{NFSU2_TR(0x425105);
__builtin_memmove((R+24),(R+4),4);
}
B425107:{NFSU2_TR(0x425107);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42510b:{NFSU2_TR(0x42510b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42510c:{NFSU2_TR(0x42510c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42510d:{NFSU2_TR(0x42510d);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42510f:{NFSU2_TR(0x42510f);
__builtin_memmove((R+4),(R+24),4);
}
B425111:{NFSU2_TR(0x425111);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425116ull));
TAIL_STATIC(0x4234a0u,423);
}
B425116:L425116:{c.instructions+=9;NFSU2_TR(0x425116);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42511a:{NFSU2_TR(0x42511a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42511e:{NFSU2_TR(0x42511e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425124:{NFSU2_TR(0x425124);
u8 U[4];
w4(U+0,u32(0x785990ull));
s4(u32(r4(R+24)),r4(U+0));
}
B42512a:{NFSU2_TR(0x42512a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425130:{NFSU2_TR(0x425130);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425137:{NFSU2_TR(0x425137);
__builtin_memmove((R+0),(R+24),4);
}
B425139:{NFSU2_TR(0x425139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42513a:{NFSU2_TR(0x42513a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425140:L425140:{c.instructions+=2;NFSU2_TR(0x425140);
w4(R+0,u32(0x7859b4ull));
}
B425145:{NFSU2_TR(0x425145);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425150:L425150:{c.instructions+=24;NFSU2_TR(0x425150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425151:{NFSU2_TR(0x425151);
__builtin_memmove((R+20),(R+16),4);
}
B425153:{NFSU2_TR(0x425153);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B425156:{NFSU2_TR(0x425156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B425159:{NFSU2_TR(0x425159);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42515a:{NFSU2_TR(0x42515a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42515b:{NFSU2_TR(0x42515b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B42515e:{NFSU2_TR(0x42515e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B425160:{NFSU2_TR(0x425160);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B425163:{NFSU2_TR(0x425163);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30cull))));
__builtin_memmove((R+0),(U+0),4);
}
B425169:{NFSU2_TR(0x425169);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42516d:{NFSU2_TR(0x42516d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B425174:{NFSU2_TR(0x425174);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B425177:{NFSU2_TR(0x425177);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B42517a:{NFSU2_TR(0x42517a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42517b:{NFSU2_TR(0x42517b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B42517f:{NFSU2_TR(0x42517f);
__builtin_memmove((R+28),(R+4),4);
}
B425181:{NFSU2_TR(0x425181);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B425187:{NFSU2_TR(0x425187);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42518b:{NFSU2_TR(0x42518b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425191:{NFSU2_TR(0x425191);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425194:{NFSU2_TR(0x425194);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425198:{NFSU2_TR(0x425198);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42519c:{NFSU2_TR(0x42519c);
if(r1(R+518)){{goto L4251a8;}}
}
B42519e:L42519e:{c.instructions+=3;NFSU2_TR(0x42519e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4251a2:{NFSU2_TR(0x4251a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4251a6:{NFSU2_TR(0x4251a6);
{goto L4251b4;}
}
B4251a8:L4251a8:{c.instructions+=2;NFSU2_TR(0x4251a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4251b0:{NFSU2_TR(0x4251b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4251b4:L4251b4:{c.instructions+=3;NFSU2_TR(0x4251b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4251b8:{NFSU2_TR(0x4251b8);
u8 U[8];
__builtin_memmove((U+4),(R+4),2);
w1(R+512,u8((r2(U+4))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(U+4),u16(0xffffull)));
w2(U+6,u16(u32(r2(U+4))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4251bc:{NFSU2_TR(0x4251bc);
if(r1(R+518)){{goto L4251f2;}}
}
B4251be:L4251be:{c.instructions+=3;NFSU2_TR(0x4251be);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4251c2:{NFSU2_TR(0x4251c2);
u8 U[6];
w1(R+512,u8((r2(R+0))<(u16(0xffffull))));
w1(R+523,sborrow<u16>(r2(R+0),u16(0xffffull)));
w2(U+4,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B4251c6:{NFSU2_TR(0x4251c6);
if(r1(R+518)){{goto L4251f2;}}
}
B4251c8:L4251c8:{c.instructions+=3;NFSU2_TR(0x4251c8);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B4251cb:{NFSU2_TR(0x4251cb);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B4251cd:{NFSU2_TR(0x4251cd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4251d8;}}
}
B4251cf:L4251cf:{c.instructions+=2;NFSU2_TR(0x4251cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4251d6:{NFSU2_TR(0x4251d6);
{goto L4251da;}
}
B4251d8:L4251d8:{c.instructions+=1;NFSU2_TR(0x4251d8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4251da:L4251da:{c.instructions+=4;NFSU2_TR(0x4251da);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B4251dd:{NFSU2_TR(0x4251dd);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B4251e0:{NFSU2_TR(0x4251e0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4251e7:{NFSU2_TR(0x4251e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4251ecull));
TAIL_STATIC(0x5d8950u,5d8);
}
B4251ec:L4251ec:{c.instructions+=2;NFSU2_TR(0x4251ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4251f0:{NFSU2_TR(0x4251f0);
{goto L4251fa;}
}
B4251f2:L4251f2:{c.instructions+=1;NFSU2_TR(0x4251f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4251fa:L4251fa:{c.instructions+=3;NFSU2_TR(0x4251fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4251fc:{NFSU2_TR(0x4251fc);
__builtin_memmove((R+4),(R+12),4);
}
B4251fe:{NFSU2_TR(0x4251fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425201ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B425201:L425201:{c.instructions+=6;NFSU2_TR(0x425201);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425207:{NFSU2_TR(0x425207);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42520b:{NFSU2_TR(0x42520b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B42520d:{NFSU2_TR(0x42520d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425211:{NFSU2_TR(0x425211);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425212:{NFSU2_TR(0x425212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425217ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B425217:L425217:{c.instructions+=14;NFSU2_TR(0x425217);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42521b:{NFSU2_TR(0x42521b);
__builtin_memmove((R+4),gp(0x783758),4);
}
B425221:{NFSU2_TR(0x425221);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B425225:{NFSU2_TR(0x425225);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425226:{NFSU2_TR(0x425226);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42522a:{NFSU2_TR(0x42522a);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42522e:{NFSU2_TR(0x42522e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42522f:{NFSU2_TR(0x42522f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425230:{NFSU2_TR(0x425230);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425231:{NFSU2_TR(0x425231);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425232:{NFSU2_TR(0x425232);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425233:{NFSU2_TR(0x425233);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42523b:{NFSU2_TR(0x42523b);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425243:{NFSU2_TR(0x425243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425248ull));
TAIL_STATIC(0x402ed0u,402);
}
B425248:L425248:{c.instructions+=3;NFSU2_TR(0x425248);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42524b:{NFSU2_TR(0x42524b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B42524d:{NFSU2_TR(0x42524d);
if(r1(R+518)){{goto L425316;}}
}
B425253:L425253:{c.instructions+=3;NFSU2_TR(0x425253);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425254:{NFSU2_TR(0x425254);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425255:{NFSU2_TR(0x425255);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42525aull));
TAIL_STATIC(0x4140e0u,414);
}
B42525a:L42525a:{c.instructions+=3;NFSU2_TR(0x42525a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42525d:{NFSU2_TR(0x42525d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42525f:{NFSU2_TR(0x42525f);
if(r1(R+518)){{goto L425316;}}
}
B425265:L425265:{c.instructions+=5;NFSU2_TR(0x425265);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425269:{NFSU2_TR(0x425269);
{u32 ea_=u32(u32(7878468u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42526f:{NFSU2_TR(0x42526f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425271:{NFSU2_TR(0x425271);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B425274:{NFSU2_TR(0x425274);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L42528b;}}
}
B425276:L425276:{c.instructions+=5;NFSU2_TR(0x425276);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42527a:{NFSU2_TR(0x42527a);
{u32 ea_=u32(u32(7878472u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B425280:{NFSU2_TR(0x425280);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425282:{NFSU2_TR(0x425282);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B425285:{NFSU2_TR(0x425285);
if(r1(R+514)){{goto L425316;}}
}
B42528b:L42528b:{c.instructions+=6;NFSU2_TR(0x42528b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42528f:{NFSU2_TR(0x42528f);
{u32 ea_=u32(u32(7878476u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B425295:{NFSU2_TR(0x425295);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42529b:{NFSU2_TR(0x42529b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42529d:{NFSU2_TR(0x42529d);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4252a0:{NFSU2_TR(0x4252a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4252c3;}}
}
B4252a2:L4252a2:{c.instructions+=4;NFSU2_TR(0x4252a2);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4252a8:{NFSU2_TR(0x4252a8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4252aa:{NFSU2_TR(0x4252aa);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4252ad:{NFSU2_TR(0x4252ad);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4252b7;}}
}
B4252af:L4252af:{c.instructions+=2;NFSU2_TR(0x4252af);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4252b1:{NFSU2_TR(0x4252b1);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4252b7:L4252b7:{c.instructions+=2;NFSU2_TR(0x4252b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4252c1:{NFSU2_TR(0x4252c1);
{goto L4252e2;}
}
B4252c3:L4252c3:{c.instructions+=4;NFSU2_TR(0x4252c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4252c9:{NFSU2_TR(0x4252c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4252cb:{NFSU2_TR(0x4252cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4252ce:{NFSU2_TR(0x4252ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4252d8;}}
}
B4252d0:L4252d0:{c.instructions+=2;NFSU2_TR(0x4252d0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4252d2:{NFSU2_TR(0x4252d2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4252d8:L4252d8:{c.instructions+=1;NFSU2_TR(0x4252d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4252e2:L4252e2:{c.instructions+=10;NFSU2_TR(0x4252e2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4252e4:{NFSU2_TR(0x4252e4);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4252ea:{NFSU2_TR(0x4252ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4252ec:{NFSU2_TR(0x4252ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4252f0:{NFSU2_TR(0x4252f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4252f1:{NFSU2_TR(0x4252f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4252f9:{NFSU2_TR(0x4252f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x43000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425301:{NFSU2_TR(0x425301);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425309:{NFSU2_TR(0x425309);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425311:{NFSU2_TR(0x425311);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425316ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B425316:L425316:{c.instructions+=5;NFSU2_TR(0x425316);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B42531c:{NFSU2_TR(0x42531c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B42531e:{NFSU2_TR(0x42531e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425322:{NFSU2_TR(0x425322);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425327:{NFSU2_TR(0x425327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425380;}}
}
B425329:L425329:{c.instructions+=4;NFSU2_TR(0x425329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42532b:{NFSU2_TR(0x42532b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B42532c:{NFSU2_TR(0x42532c);
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
B42532f:{NFSU2_TR(0x42532f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L425380;}}
}
B425331:L425331:{c.instructions+=1;NFSU2_TR(0x425331);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x425574ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B425338:L425338:{c.instructions+=6;NFSU2_TR(0x425338);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42533c:{NFSU2_TR(0x42533c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B425340:{NFSU2_TR(0x425340);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+0))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B425344:{NFSU2_TR(0x425344);
__builtin_memmove((R+0),(R+518),1);
}
B425347:{NFSU2_TR(0x425347);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B425349:{NFSU2_TR(0x425349);
if(r1(R+518)){{goto L425380;}}
}
B42534b:L42534b:{c.instructions+=10;NFSU2_TR(0x42534b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42534d:{NFSU2_TR(0x42534d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B425351:{NFSU2_TR(0x425351);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425352:{NFSU2_TR(0x425352);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B425354:{NFSU2_TR(0x425354);
w1(R+12,u8(0x1ull));
}
B425356:{NFSU2_TR(0x425356);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42535e:{NFSU2_TR(0x42535e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425366:{NFSU2_TR(0x425366);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42536e:{NFSU2_TR(0x42536e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425376:{NFSU2_TR(0x425376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42537bull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B42537b:L42537b:{c.instructions+=1;NFSU2_TR(0x42537b);
{goto L425409;}
}
B425380:L425380:{c.instructions+=5;NFSU2_TR(0x425380);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B425384:{NFSU2_TR(0x425384);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B425388:{NFSU2_TR(0x425388);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B42538a:{NFSU2_TR(0x42538a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42538e:{NFSU2_TR(0x42538e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B425391:L425391:{c.instructions+=3;NFSU2_TR(0x425391);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B425394:{NFSU2_TR(0x425394);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425396:{NFSU2_TR(0x425396);
if(r1(R+518)){{goto L4253a3;}}
}
B425398:L425398:{c.instructions+=4;NFSU2_TR(0x425398);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B425399:{NFSU2_TR(0x425399);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B42539c:{NFSU2_TR(0x42539c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B42539f:{NFSU2_TR(0x42539f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x425391u);}goto L425391;}}
}
B4253a1:L4253a1:{c.instructions+=1;NFSU2_TR(0x4253a1);
{goto L4253c7;}
}
B4253a3:L4253a3:{c.instructions+=2;NFSU2_TR(0x4253a3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4253a6:{NFSU2_TR(0x4253a6);
if(r1(R+518)){{goto L4253c7;}}
}
B4253a8:L4253a8:{c.instructions+=10;NFSU2_TR(0x4253a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4253ac:{NFSU2_TR(0x4253ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4253af:{NFSU2_TR(0x4253af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4253b1:{NFSU2_TR(0x4253b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4253b3:{NFSU2_TR(0x4253b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4253b7:{NFSU2_TR(0x4253b7);
__builtin_memmove((R+4),(R+518),1);
}
B4253ba:{NFSU2_TR(0x4253ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4253bb:{NFSU2_TR(0x4253bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4253bc:{NFSU2_TR(0x4253bc);
__builtin_memmove((R+4),(R+12),4);
}
B4253be:{NFSU2_TR(0x4253be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4253c3ull));
TAIL_STATIC(0x4109a0u,410);
}
B4253c3:L4253c3:{c.instructions+=2;NFSU2_TR(0x4253c3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4253c5:{NFSU2_TR(0x4253c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4253f9;}}
}
B4253c7:L4253c7:{c.instructions+=10;NFSU2_TR(0x4253c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4253c9:{NFSU2_TR(0x4253c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4253cb:{NFSU2_TR(0x4253cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4253cf:{NFSU2_TR(0x4253cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4253d0:{NFSU2_TR(0x4253d0);
w1(R+12,u8(0x1ull));
}
B4253d2:{NFSU2_TR(0x4253d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4253da:{NFSU2_TR(0x4253da);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4253e2:{NFSU2_TR(0x4253e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4253ea:{NFSU2_TR(0x4253ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4253f2:{NFSU2_TR(0x4253f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4253f7ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B4253f7:L4253f7:{c.instructions+=1;NFSU2_TR(0x4253f7);
{goto L425409;}
}
B4253f9:L4253f9:{c.instructions+=4;NFSU2_TR(0x4253f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4253fd:{NFSU2_TR(0x4253fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4253fe:{NFSU2_TR(0x4253fe);
__builtin_memmove((R+4),(R+12),4);
}
B425400:{NFSU2_TR(0x425400);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425405ull));
TAIL_STATIC(0x410a10u,410);
}
B425405:L425405:{c.instructions+=1;NFSU2_TR(0x425405);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B425409:L425409:{c.instructions+=7;NFSU2_TR(0x425409);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B425410:{NFSU2_TR(0x425410);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B425413:{NFSU2_TR(0x425413);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B425416:{NFSU2_TR(0x425416);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B42541a:{NFSU2_TR(0x42541a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42541b:{NFSU2_TR(0x42541b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B425421:{NFSU2_TR(0x425421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425426ull));
TAIL_STATIC(0x412170u,412);
}
B425426:L425426:{c.instructions+=3;NFSU2_TR(0x425426);
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
B425428:{NFSU2_TR(0x425428);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42542c:{NFSU2_TR(0x42542c);
if(r1(R+518)){{goto L4254de;}}
}
B425432:L425432:{c.instructions+=5;NFSU2_TR(0x425432);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425436:{NFSU2_TR(0x425436);
{u32 ea_=u32(u32(7878484u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42543c:{NFSU2_TR(0x42543c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42543e:{NFSU2_TR(0x42543e);
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
B425441:{NFSU2_TR(0x425441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425467;}}
}
B425443:L425443:{c.instructions+=3;NFSU2_TR(0x425443);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425447:{NFSU2_TR(0x425447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B425449:{NFSU2_TR(0x425449);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42544cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42544c:L42544c:{c.instructions+=6;NFSU2_TR(0x42544c);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425452:{NFSU2_TR(0x425452);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B425456:{NFSU2_TR(0x425456);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B425458:{NFSU2_TR(0x425458);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42545a:{NFSU2_TR(0x42545a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B42545d:{NFSU2_TR(0x42545d);
if(r1(R+514)){{goto L425482;}}
}
B42545f:L42545f:{c.instructions+=3;NFSU2_TR(0x42545f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B425461:{NFSU2_TR(0x425461);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425465:{NFSU2_TR(0x425465);
{goto L425482;}
}
B425467:L425467:{c.instructions+=5;NFSU2_TR(0x425467);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42546d:{NFSU2_TR(0x42546d);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B425473:{NFSU2_TR(0x425473);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425475:{NFSU2_TR(0x425475);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B425478:{NFSU2_TR(0x425478);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L425482;}}
}
B42547a:L42547a:{c.instructions+=2;NFSU2_TR(0x42547a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42547c:{NFSU2_TR(0x42547c);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425482:L425482:{c.instructions+=6;NFSU2_TR(0x425482);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425488:{NFSU2_TR(0x425488);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42548c:{NFSU2_TR(0x42548c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B425492:{NFSU2_TR(0x425492);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425494:{NFSU2_TR(0x425494);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B425497:{NFSU2_TR(0x425497);
if(r1(R+514)){{goto L425534;}}
}
B42549d:L42549d:{c.instructions+=5;NFSU2_TR(0x42549d);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4254a3:{NFSU2_TR(0x4254a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4254a9:{NFSU2_TR(0x4254a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4254ab:{NFSU2_TR(0x4254ab);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4254ae:{NFSU2_TR(0x4254ae);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4254b8;}}
}
B4254b0:L4254b0:{c.instructions+=2;NFSU2_TR(0x4254b0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4254b2:{NFSU2_TR(0x4254b2);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4254b8:L4254b8:{c.instructions+=7;NFSU2_TR(0x4254b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4254bc:{NFSU2_TR(0x4254bc);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4254c2:{NFSU2_TR(0x4254c2);
{u32 ea_=u32(r4(R+0)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4254c8:{NFSU2_TR(0x4254c8);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4254ce:{NFSU2_TR(0x4254ce);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4254d0:{NFSU2_TR(0x4254d0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4254d3:{NFSU2_TR(0x4254d3);
if(r1(R+514)){{goto L425534;}}
}
B4254d5:L4254d5:{c.instructions+=2;NFSU2_TR(0x4254d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x214ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4254dc:{NFSU2_TR(0x4254dc);
{goto L425534;}
}
B4254de:L4254de:{c.instructions+=3;NFSU2_TR(0x4254de);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4254e2:{NFSU2_TR(0x4254e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4254e4:{NFSU2_TR(0x4254e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4254e7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4254e7:L4254e7:{c.instructions+=6;NFSU2_TR(0x4254e7);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4254ed:{NFSU2_TR(0x4254ed);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4254f1:{NFSU2_TR(0x4254f1);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4254f3:{NFSU2_TR(0x4254f3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4254f5:{NFSU2_TR(0x4254f5);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4254f8:{NFSU2_TR(0x4254f8);
if(r1(R+514)){{goto L425500;}}
}
B4254fa:L4254fa:{c.instructions+=2;NFSU2_TR(0x4254fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4254fc:{NFSU2_TR(0x4254fc);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425500:L425500:{c.instructions+=10;NFSU2_TR(0x425500);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425502:{NFSU2_TR(0x425502);
{u32 ea_=u32(r4(R+28)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425508:{NFSU2_TR(0x425508);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42550a:{NFSU2_TR(0x42550a);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B42550e:{NFSU2_TR(0x42550e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42550f:{NFSU2_TR(0x42550f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425517:{NFSU2_TR(0x425517);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42551f:{NFSU2_TR(0x42551f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425527:{NFSU2_TR(0x425527);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42552f:{NFSU2_TR(0x42552f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425534ull));
TAIL_STATIC(0x5ecf20u,5ec);
}
B425534:L425534:{c.instructions+=5;NFSU2_TR(0x425534);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425535:{NFSU2_TR(0x425535);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425538:{NFSU2_TR(0x425538);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425539:{NFSU2_TR(0x425539);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42553d:{NFSU2_TR(0x42553d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425542ull));
TAIL_STATIC(0x420d40u,420);
}
B425542:L425542:{c.instructions+=11;NFSU2_TR(0x425542);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42554c:{NFSU2_TR(0x42554c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425556:{NFSU2_TR(0x425556);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42555d:{NFSU2_TR(0x42555d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425564:{NFSU2_TR(0x425564);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1feull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42556b:{NFSU2_TR(0x42556b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B42556c:{NFSU2_TR(0x42556c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42556d:{NFSU2_TR(0x42556d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42556e:{NFSU2_TR(0x42556e);
__builtin_memmove((R+16),(R+20),4);
}
B425570:{NFSU2_TR(0x425570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B425571:{NFSU2_TR(0x425571);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425590:L425590:{c.instructions+=9;NFSU2_TR(0x425590);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425594:{NFSU2_TR(0x425594);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425595:{NFSU2_TR(0x425595);
__builtin_memmove((R+24),(R+4),4);
}
B425597:{NFSU2_TR(0x425597);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42559b:{NFSU2_TR(0x42559b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42559c:{NFSU2_TR(0x42559c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42559d:{NFSU2_TR(0x42559d);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42559f:{NFSU2_TR(0x42559f);
__builtin_memmove((R+4),(R+24),4);
}
B4255a1:{NFSU2_TR(0x4255a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4255a6ull));
TAIL_STATIC(0x4234a0u,423);
}
B4255a6:L4255a6:{c.instructions+=5;NFSU2_TR(0x4255a6);
u8 U[4];
w4(U+0,u32(0x7859d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4255ac:{NFSU2_TR(0x4255ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4255b3:{NFSU2_TR(0x4255b3);
__builtin_memmove((R+0),(R+24),4);
}
B4255b5:{NFSU2_TR(0x4255b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4255b6:{NFSU2_TR(0x4255b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4255c0:L4255c0:{c.instructions+=2;NFSU2_TR(0x4255c0);
w4(R+0,u32(0x7859f8ull));
}
B4255c5:{NFSU2_TR(0x4255c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4255d0:L4255d0:{c.instructions+=9;NFSU2_TR(0x4255d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4255d4:{NFSU2_TR(0x4255d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4255d5:{NFSU2_TR(0x4255d5);
__builtin_memmove((R+24),(R+4),4);
}
B4255d7:{NFSU2_TR(0x4255d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4255db:{NFSU2_TR(0x4255db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4255dc:{NFSU2_TR(0x4255dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4255dd:{NFSU2_TR(0x4255dd);
u8 U[4];
w4(U+0,u32(0x13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4255df:{NFSU2_TR(0x4255df);
__builtin_memmove((R+4),(R+24),4);
}
B4255e1:{NFSU2_TR(0x4255e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4255e6ull));
TAIL_STATIC(0x4234a0u,423);
}
B4255e6:L4255e6:{c.instructions+=11;NFSU2_TR(0x4255e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4255ea:{NFSU2_TR(0x4255ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4255ee:{NFSU2_TR(0x4255ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4255f2:{NFSU2_TR(0x4255f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4255f8:{NFSU2_TR(0x4255f8);
u8 U[4];
w4(U+0,u32(0x785a18ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4255fe:{NFSU2_TR(0x4255fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425604:{NFSU2_TR(0x425604);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42560a:{NFSU2_TR(0x42560a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425614:{NFSU2_TR(0x425614);
__builtin_memmove((R+0),(R+24),4);
}
B425616:{NFSU2_TR(0x425616);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425617:{NFSU2_TR(0x425617);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425620:L425620:{c.instructions+=2;NFSU2_TR(0x425620);
w4(R+0,u32(0x785a3cull));
}
B425625:{NFSU2_TR(0x425625);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425630:L425630:{c.instructions+=9;NFSU2_TR(0x425630);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425634:{NFSU2_TR(0x425634);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425635:{NFSU2_TR(0x425635);
__builtin_memmove((R+24),(R+4),4);
}
B425637:{NFSU2_TR(0x425637);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42563b:{NFSU2_TR(0x42563b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42563c:{NFSU2_TR(0x42563c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42563d:{NFSU2_TR(0x42563d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42563f:{NFSU2_TR(0x42563f);
__builtin_memmove((R+4),(R+24),4);
}
B425641:{NFSU2_TR(0x425641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425646ull));
TAIL_STATIC(0x4234a0u,423);
}
B425646:L425646:{c.instructions+=10;NFSU2_TR(0x425646);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42564a:{NFSU2_TR(0x42564a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42564e:{NFSU2_TR(0x42564e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425652:{NFSU2_TR(0x425652);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425658:{NFSU2_TR(0x425658);
u8 U[4];
w4(U+0,u32(0x785a4cull));
s4(u32(r4(R+24)),r4(U+0));
}
B42565e:{NFSU2_TR(0x42565e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425664:{NFSU2_TR(0x425664);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42566a:{NFSU2_TR(0x42566a);
__builtin_memmove((R+0),(R+24),4);
}
B42566c:{NFSU2_TR(0x42566c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42566d:{NFSU2_TR(0x42566d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425670:L425670:{c.instructions+=2;NFSU2_TR(0x425670);
w4(R+0,u32(0x785a70ull));
}
B425675:{NFSU2_TR(0x425675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425680:L425680:{c.instructions+=14;NFSU2_TR(0x425680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425681:{NFSU2_TR(0x425681);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425682:{NFSU2_TR(0x425682);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425683:{NFSU2_TR(0x425683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425684:{NFSU2_TR(0x425684);
__builtin_memmove((R+24),(R+4),4);
}
B425686:{NFSU2_TR(0x425686);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42568c:{NFSU2_TR(0x42568c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42568d:{NFSU2_TR(0x42568d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B425691:{NFSU2_TR(0x425691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B425693:{NFSU2_TR(0x425693);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+0),(U+0),4);
}
B425699:{NFSU2_TR(0x425699);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42569a:{NFSU2_TR(0x42569a);
__builtin_memmove((R+4),(R+28),4);
}
B42569c:{NFSU2_TR(0x42569c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4256a0:{NFSU2_TR(0x4256a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4256a5ull));
TAIL_STATIC(0x60c0f0u,60c);
}
B4256a5:L4256a5:{c.instructions+=3;NFSU2_TR(0x4256a5);
__builtin_memmove((R+12),(R+0),4);
}
B4256a7:{NFSU2_TR(0x4256a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4256a9:{NFSU2_TR(0x4256a9);
if(r1(R+518)){{goto L4257e4;}}
}
B4256af:L4256af:{c.instructions+=3;NFSU2_TR(0x4256af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4256b2:{NFSU2_TR(0x4256b2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4256b5:{NFSU2_TR(0x4256b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4256baull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4256ba:L4256ba:{c.instructions+=3;NFSU2_TR(0x4256ba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4256bc:{NFSU2_TR(0x4256bc);
__builtin_memmove((R+4),(R+12),4);
}
B4256be:{NFSU2_TR(0x4256be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4256c3ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4256c3:L4256c3:{c.instructions+=7;NFSU2_TR(0x4256c3);
{u32 ea_=u32(r4(R+24)+u32(532u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4256c9:{NFSU2_TR(0x4256c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4256cc:{NFSU2_TR(0x4256cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4256cf:{NFSU2_TR(0x4256cf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4256d2:{NFSU2_TR(0x4256d2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4256d6:{NFSU2_TR(0x4256d6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B4256d9:{NFSU2_TR(0x4256d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4256deull));
TAIL_STATIC(0x5b5330u,5b5);
}
B4256de:L4256de:{c.instructions+=7;NFSU2_TR(0x4256de);
__builtin_memmove((R+8),gp(0x783780),4);
}
B4256e4:{NFSU2_TR(0x4256e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4256e8:{NFSU2_TR(0x4256e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4256ec:{NFSU2_TR(0x4256ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4256ed:{NFSU2_TR(0x4256ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4256ee:{NFSU2_TR(0x4256ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4256f0:{NFSU2_TR(0x4256f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4256f5ull));
TAIL_STATIC(0x4053b0u,405);
}
B4256f5:L4256f5:{c.instructions+=4;NFSU2_TR(0x4256f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4256f7:{NFSU2_TR(0x4256f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4256f8:{NFSU2_TR(0x4256f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4256fe:{NFSU2_TR(0x4256fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425703ull));
TAIL_STATIC(0x419c60u,419);
}
B425703:L425703:{c.instructions+=7;NFSU2_TR(0x425703);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425707:{NFSU2_TR(0x425707);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42570e:{NFSU2_TR(0x42570e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B425711:{NFSU2_TR(0x425711);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B425714:{NFSU2_TR(0x425714);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425716:{NFSU2_TR(0x425716);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B42571a:{NFSU2_TR(0x42571a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42571full));
TAIL_STATIC(0x60bfa0u,60b);
}
B42571f:L42571f:{c.instructions+=6;NFSU2_TR(0x42571f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B425723:{NFSU2_TR(0x425723);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B425725:{NFSU2_TR(0x425725);
{u32 ea_=u32(u32(8293780u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B42572b:{NFSU2_TR(0x42572b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B42572d:{NFSU2_TR(0x42572d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B425730:{NFSU2_TR(0x425730);
if(r1(R+514)){{goto L4257a0;}}
}
B425732:L425732:{c.instructions+=6;NFSU2_TR(0x425732);
{u32 ea_=u32(r4(R+20)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425738:{NFSU2_TR(0x425738);
{u32 ea_=u32(u32(7878520u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B42573e:{NFSU2_TR(0x42573e);
{u32 ea_=u32(u32(7878524u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B425744:{NFSU2_TR(0x425744);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425746:{NFSU2_TR(0x425746);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B425749:{NFSU2_TR(0x425749);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425751;}}
}
B42574b:L42574b:{c.instructions+=2;NFSU2_TR(0x42574b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42574f:{NFSU2_TR(0x42574f);
{goto L42575d;}
}
B425751:L425751:{c.instructions+=3;NFSU2_TR(0x425751);
__builtin_memmove((R+8),gp(0x78377c),4);
}
B425757:{NFSU2_TR(0x425757);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B425759:{NFSU2_TR(0x425759);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42575d:L42575d:{c.instructions+=3;NFSU2_TR(0x42575d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425760:{NFSU2_TR(0x425760);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425761:{NFSU2_TR(0x425761);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425766ull));
TAIL_STATIC(0x401d40u,401);
}
B425766:L425766:{c.instructions+=6;NFSU2_TR(0x425766);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42576a:{NFSU2_TR(0x42576a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42576b:{NFSU2_TR(0x42576b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+12),(U+0),4);
}
B42576e:{NFSU2_TR(0x42576e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42576f:{NFSU2_TR(0x42576f);
__builtin_memmove((R+4),(R+12),4);
}
B425771:{NFSU2_TR(0x425771);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425776ull));
TAIL_STATIC(0x41d160u,41d);
}
B425776:L425776:{c.instructions+=13;NFSU2_TR(0x425776);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42577a:{NFSU2_TR(0x42577a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42577d:{NFSU2_TR(0x42577d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B42577f:{NFSU2_TR(0x42577f);
__builtin_memmove((R+8),gp(0x783774),4);
}
B425785:{NFSU2_TR(0x425785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B425788:{NFSU2_TR(0x425788);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42578c:{NFSU2_TR(0x42578c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B42578f:{NFSU2_TR(0x42578f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425792:{NFSU2_TR(0x425792);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425793:{NFSU2_TR(0x425793);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425794:{NFSU2_TR(0x425794);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425795:{NFSU2_TR(0x425795);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425796:{NFSU2_TR(0x425796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42579bull));
TAIL_STATIC(0x41d530u,41d);
}
B42579b:L42579b:{c.instructions+=2;NFSU2_TR(0x42579b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B42579e:{NFSU2_TR(0x42579e);
{goto L4257ae;}
}
B4257a0:L4257a0:{c.instructions+=5;NFSU2_TR(0x4257a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4257a4:{NFSU2_TR(0x4257a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4257a5:{NFSU2_TR(0x4257a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4257a8:{NFSU2_TR(0x4257a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4257a9:{NFSU2_TR(0x4257a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4257aeull));
TAIL_STATIC(0x420d40u,420);
}
B4257ae:L4257ae:{c.instructions+=7;NFSU2_TR(0x4257ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4257b4:{NFSU2_TR(0x4257b4);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4257ba:{NFSU2_TR(0x4257ba);
{u32 ea_=u32(r4(R+24)+u32(536u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4257c0:{NFSU2_TR(0x4257c0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4257c6:{NFSU2_TR(0x4257c6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4257c8:{NFSU2_TR(0x4257c8);
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
B4257cb:{NFSU2_TR(0x4257cb);
if(r1(R+518)){{goto L4257d5;}}
}
B4257cd:L4257cd:{c.instructions+=2;NFSU2_TR(0x4257cd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4257cf:{NFSU2_TR(0x4257cf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4257d5:L4257d5:{c.instructions+=3;NFSU2_TR(0x4257d5);
{u32 ea_=u32(r4(R+24)+u32(496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4257db:{NFSU2_TR(0x4257db);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4257e2:{NFSU2_TR(0x4257e2);
{goto L425821;}
}
B4257e4:L4257e4:{c.instructions+=8;NFSU2_TR(0x4257e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4257ea:{NFSU2_TR(0x4257ea);
{u32 ea_=u32(r4(R+8)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4257f0:{NFSU2_TR(0x4257f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4257f3:{NFSU2_TR(0x4257f3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4257f7:{NFSU2_TR(0x4257f7);
{u32 ea_=u32(r4(R+20)+u32(2300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4257fd:{NFSU2_TR(0x4257fd);
w4(R+4,u32(0x88f298ull));
}
B425802:{NFSU2_TR(0x425802);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425805:{NFSU2_TR(0x425805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42580aull));
TAIL_STATIC(0x5d5cd0u,5d5);
}
B42580a:L42580a:{c.instructions+=6;NFSU2_TR(0x42580a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B42580c:{NFSU2_TR(0x42580c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425810:{NFSU2_TR(0x425810);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425811:{NFSU2_TR(0x425811);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B425814:{NFSU2_TR(0x425814);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425815:{NFSU2_TR(0x425815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42581aull));
TAIL_STATIC(0x420d40u,420);
}
B42581a:L42581a:{c.instructions+=1;NFSU2_TR(0x42581a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425821:L425821:{c.instructions+=10;NFSU2_TR(0x425821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425822:{NFSU2_TR(0x425822);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B42582c:{NFSU2_TR(0x42582c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B425836:{NFSU2_TR(0x425836);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B42583d:{NFSU2_TR(0x42583d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425844:{NFSU2_TR(0x425844);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425845:{NFSU2_TR(0x425845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B425846:{NFSU2_TR(0x425846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B425847:{NFSU2_TR(0x425847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425848:{NFSU2_TR(0x425848);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425850:L425850:{c.instructions+=2;NFSU2_TR(0x425850);
w4(R+0,u32(0x784b48ull));
}
B425855:{NFSU2_TR(0x425855);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425860:L425860:{c.instructions+=2;NFSU2_TR(0x425860);
u8 U[4];
w4(U+0,u32(0x784270ull));
s4(u32(r4(R+4)),r4(U+0));
}
B425866:{NFSU2_TR(0x425866);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425870:L425870:{c.instructions+=13;NFSU2_TR(0x425870);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425871:{NFSU2_TR(0x425871);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425872:{NFSU2_TR(0x425872);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425873:{NFSU2_TR(0x425873);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B425877:{NFSU2_TR(0x425877);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B42587e:{NFSU2_TR(0x42587e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B425881:{NFSU2_TR(0x425881);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B425884:{NFSU2_TR(0x425884);
__builtin_memmove((R+24),(R+4),4);
}
B425886:{NFSU2_TR(0x425886);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B42588a:{NFSU2_TR(0x42588a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B425890:{NFSU2_TR(0x425890);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B425892:{NFSU2_TR(0x425892);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+20),(U+0),4);
}
B425898:{NFSU2_TR(0x425898);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4258c9;}}
}
B42589a:L42589a:{c.instructions+=3;NFSU2_TR(0x42589a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B42589d:{NFSU2_TR(0x42589d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42589e:{NFSU2_TR(0x42589e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4258a3ull));
TAIL_STATIC(0x60bfa0u,60b);
}
B4258a3:L4258a3:{c.instructions+=10;NFSU2_TR(0x4258a3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4258a7:{NFSU2_TR(0x4258a7);
__builtin_memmove((R+4),gp(0x783784),4);
}
B4258ad:{NFSU2_TR(0x4258ad);
{u32 ea_=u32(r4(R+24)+u32(528u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4258b3:{NFSU2_TR(0x4258b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4258b7:{NFSU2_TR(0x4258b7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4258b8:{NFSU2_TR(0x4258b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4258b9:{NFSU2_TR(0x4258b9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4258bb:{NFSU2_TR(0x4258bb);
__builtin_memmove((R+4),(R+20),4);
}
B4258bd:{NFSU2_TR(0x4258bd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4258c4:{NFSU2_TR(0x4258c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4258c9ull));
TAIL_STATIC(0x4053b0u,405);
}
B4258c9:L4258c9:{c.instructions+=5;NFSU2_TR(0x4258c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4258ca:{NFSU2_TR(0x4258ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4258cd:{NFSU2_TR(0x4258cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4258ce:{NFSU2_TR(0x4258ce);
__builtin_memmove((R+4),(R+20),4);
}
B4258d0:{NFSU2_TR(0x4258d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4258d5ull));
TAIL_STATIC(0x420d40u,420);
}
B4258d5:L4258d5:{c.instructions+=10;NFSU2_TR(0x4258d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4258d6:{NFSU2_TR(0x4258d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
w4(U+4,u32(0x4e6e6b28ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4258e0:{NFSU2_TR(0x4258e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4258e7:{NFSU2_TR(0x4258e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4258f1:{NFSU2_TR(0x4258f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
w4(U+4,u32(0x40000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4258fb:{NFSU2_TR(0x4258fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fdull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425902:{NFSU2_TR(0x425902);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1feull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425909:{NFSU2_TR(0x425909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B42590a:{NFSU2_TR(0x42590a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B42590b:{NFSU2_TR(0x42590b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425910:L425910:{c.instructions+=13;NFSU2_TR(0x425910);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425911:{NFSU2_TR(0x425911);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425912:{NFSU2_TR(0x425912);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B425916:{NFSU2_TR(0x425916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425919:{NFSU2_TR(0x425919);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B42591c:{NFSU2_TR(0x42591c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B425922:{NFSU2_TR(0x425922);
__builtin_memmove((R+0),gp(0x7e8e60),4);
}
B425927:{NFSU2_TR(0x425927);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42592b:{NFSU2_TR(0x42592b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42592d:{NFSU2_TR(0x42592d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42592e:{NFSU2_TR(0x42592e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B425935:{NFSU2_TR(0x425935);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425939:{NFSU2_TR(0x425939);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42593cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B42593c:L42593c:{c.instructions+=5;NFSU2_TR(0x42593c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B425940:{NFSU2_TR(0x425940);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B425944:{NFSU2_TR(0x425944);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B425946:{NFSU2_TR(0x425946);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B425949:{NFSU2_TR(0x425949);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425951;}}
}
B42594b:L42594b:{c.instructions+=2;NFSU2_TR(0x42594b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B42594f:{NFSU2_TR(0x42594f);
{goto L42595b;}
}
B425951:L425951:{c.instructions+=3;NFSU2_TR(0x425951);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425955:{NFSU2_TR(0x425955);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B425957:{NFSU2_TR(0x425957);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B42595b:L42595b:{c.instructions+=10;NFSU2_TR(0x42595b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B42595f:{NFSU2_TR(0x42595f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425963:{NFSU2_TR(0x425963);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425964:{NFSU2_TR(0x425964);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425967:{NFSU2_TR(0x425967);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425968:{NFSU2_TR(0x425968);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x70ull))));
}
B42596b:{NFSU2_TR(0x42596b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42596c:{NFSU2_TR(0x42596c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42596d:{NFSU2_TR(0x42596d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B42596e:{NFSU2_TR(0x42596e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425973ull));
TAIL_STATIC(0x420a60u,420);
}
B425973:L425973:{c.instructions+=5;NFSU2_TR(0x425973);
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
B425976:{NFSU2_TR(0x425976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425977:{NFSU2_TR(0x425977);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425978:{NFSU2_TR(0x425978);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425979:{NFSU2_TR(0x425979);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425980:L425980:{c.instructions+=12;NFSU2_TR(0x425980);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425981:{NFSU2_TR(0x425981);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425982:{NFSU2_TR(0x425982);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B425986:{NFSU2_TR(0x425986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425989:{NFSU2_TR(0x425989);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B42598c:{NFSU2_TR(0x42598c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B42598e:{NFSU2_TR(0x42598e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B425991:{NFSU2_TR(0x425991);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425992:{NFSU2_TR(0x425992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B425995:{NFSU2_TR(0x425995);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425996:{NFSU2_TR(0x425996);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425997:{NFSU2_TR(0x425997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x42599cull));
TAIL_STATIC(0x43e6d0u,43e);
}
B42599c:L42599c:{c.instructions+=6;NFSU2_TR(0x42599c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B42599f:{NFSU2_TR(0x42599f);
__builtin_memmove((R+4),(R+24),4);
}
B4259a1:{NFSU2_TR(0x4259a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259a2:{NFSU2_TR(0x4259a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259a3:{NFSU2_TR(0x4259a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259a4:{NFSU2_TR(0x4259a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4259a9ull));
TAIL_STATIC(0x60bf10u,60b);
}
B4259a9:L4259a9:{c.instructions+=5;NFSU2_TR(0x4259a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4259ad:{NFSU2_TR(0x4259ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259ae:{NFSU2_TR(0x4259ae);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4259b1:{NFSU2_TR(0x4259b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259b2:{NFSU2_TR(0x4259b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4259b7ull));
TAIL_STATIC(0x420a60u,420);
}
B4259b7:L4259b7:{c.instructions+=5;NFSU2_TR(0x4259b7);
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
B4259ba:{NFSU2_TR(0x4259ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4259bb:{NFSU2_TR(0x4259bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4259bc:{NFSU2_TR(0x4259bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4259bd:{NFSU2_TR(0x4259bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4259c0:L4259c0:{c.instructions+=15;NFSU2_TR(0x4259c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259c1:{NFSU2_TR(0x4259c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259c2:{NFSU2_TR(0x4259c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259c3:{NFSU2_TR(0x4259c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4259c7:{NFSU2_TR(0x4259c7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B4259ce:{NFSU2_TR(0x4259ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4259cf:{NFSU2_TR(0x4259cf);
__builtin_memmove((R+28),(R+4),4);
}
B4259d1:{NFSU2_TR(0x4259d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4259d4:{NFSU2_TR(0x4259d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4259d7:{NFSU2_TR(0x4259d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4259dd:{NFSU2_TR(0x4259dd);
__builtin_memmove((R+0),gp(0x7e8e60),4);
}
B4259e2:{NFSU2_TR(0x4259e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4259e6:{NFSU2_TR(0x4259e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4259e8:{NFSU2_TR(0x4259e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4259ec:{NFSU2_TR(0x4259ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4259efull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4259ef:L4259ef:{c.instructions+=5;NFSU2_TR(0x4259ef);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4259f3:{NFSU2_TR(0x4259f3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4259f7:{NFSU2_TR(0x4259f7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4259f9:{NFSU2_TR(0x4259f9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4259fc:{NFSU2_TR(0x4259fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425a04;}}
}
B4259fe:L4259fe:{c.instructions+=2;NFSU2_TR(0x4259fe);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425a02:{NFSU2_TR(0x425a02);
{goto L425a0e;}
}
B425a04:L425a04:{c.instructions+=3;NFSU2_TR(0x425a04);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425a08:{NFSU2_TR(0x425a08);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B425a0a:{NFSU2_TR(0x425a0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425a0e:L425a0e:{c.instructions+=11;NFSU2_TR(0x425a0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425a12:{NFSU2_TR(0x425a12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a13:{NFSU2_TR(0x425a13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425a19:{NFSU2_TR(0x425a19);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a1a:{NFSU2_TR(0x425a1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B425a1d:{NFSU2_TR(0x425a1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a1e:{NFSU2_TR(0x425a1e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x60ull))));
}
B425a21:{NFSU2_TR(0x425a21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a22:{NFSU2_TR(0x425a22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a23:{NFSU2_TR(0x425a23);
__builtin_memmove((R+4),(R+28),4);
}
B425a25:{NFSU2_TR(0x425a25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425a2aull));
TAIL_STATIC(0x420b80u,420);
}
B425a2a:L425a2a:{c.instructions+=5;NFSU2_TR(0x425a2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425a2b:{NFSU2_TR(0x425a2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425a2c:{NFSU2_TR(0x425a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B425a2d:{NFSU2_TR(0x425a2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425a2e:{NFSU2_TR(0x425a2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425a40:L425a40:{c.instructions+=16;NFSU2_TR(0x425a40);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a41:{NFSU2_TR(0x425a41);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a42:{NFSU2_TR(0x425a42);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a43:{NFSU2_TR(0x425a43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B425a47:{NFSU2_TR(0x425a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425a4a:{NFSU2_TR(0x425a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B425a4d:{NFSU2_TR(0x425a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B425a50:{NFSU2_TR(0x425a50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a51:{NFSU2_TR(0x425a51);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425a55:{NFSU2_TR(0x425a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425a58:{NFSU2_TR(0x425a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B425a5a:{NFSU2_TR(0x425a5a);
__builtin_memmove((R+28),(R+4),4);
}
B425a5c:{NFSU2_TR(0x425a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425a5f:{NFSU2_TR(0x425a5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a60:{NFSU2_TR(0x425a60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a61:{NFSU2_TR(0x425a61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425a66ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B425a66:L425a66:{c.instructions+=8;NFSU2_TR(0x425a66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B425a69:{NFSU2_TR(0x425a69);
__builtin_memmove((R+4),(R+24),4);
}
B425a6b:{NFSU2_TR(0x425a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a6c:{NFSU2_TR(0x425a6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425a70:{NFSU2_TR(0x425a70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a71:{NFSU2_TR(0x425a71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a72:{NFSU2_TR(0x425a72);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a73:{NFSU2_TR(0x425a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425a78ull));
TAIL_STATIC(0x60bf10u,60b);
}
B425a78:L425a78:{c.instructions+=4;NFSU2_TR(0x425a78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a79:{NFSU2_TR(0x425a79);
__builtin_memmove((R+4),(R+28),4);
}
B425a7b:{NFSU2_TR(0x425a7b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425a7e:{NFSU2_TR(0x425a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425a83ull));
TAIL_STATIC(0x420b80u,420);
}
B425a83:L425a83:{c.instructions+=5;NFSU2_TR(0x425a83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425a84:{NFSU2_TR(0x425a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425a85:{NFSU2_TR(0x425a85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B425a86:{NFSU2_TR(0x425a86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B425a87:{NFSU2_TR(0x425a87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425a90:L425a90:{c.instructions+=3;NFSU2_TR(0x425a90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425a91:{NFSU2_TR(0x425a91);
__builtin_memmove((R+24),(R+4),4);
}
B425a93:{NFSU2_TR(0x425a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425a98ull));
TAIL_STATIC(0x420fd0u,420);
}
B425a98:L425a98:{c.instructions+=2;NFSU2_TR(0x425a98);
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
B425a9d:{NFSU2_TR(0x425a9d);
if(r1(R+518)){{goto L425aa8;}}
}
B425a9f:L425a9f:{c.instructions+=2;NFSU2_TR(0x425a9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425aa0:{NFSU2_TR(0x425aa0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425aa5ull));
TAIL_STATIC(0x575630u,575);
}
B425aa5:L425aa5:{c.instructions+=1;NFSU2_TR(0x425aa5);
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
B425aa8:L425aa8:{c.instructions+=3;NFSU2_TR(0x425aa8);
__builtin_memmove((R+0),(R+24),4);
}
B425aaa:{NFSU2_TR(0x425aaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425aab:{NFSU2_TR(0x425aab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425ab0:L425ab0:{c.instructions+=12;NFSU2_TR(0x425ab0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ab2:{NFSU2_TR(0x425ab2);
u8 U[4];
w4(U+0,u32(0x7717a7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ab7:{NFSU2_TR(0x425ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425abd:{NFSU2_TR(0x425abd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425abe:{NFSU2_TR(0x425abe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425ac5:{NFSU2_TR(0x425ac5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ac6:{NFSU2_TR(0x425ac6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ac7:{NFSU2_TR(0x425ac7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ac8:{NFSU2_TR(0x425ac8);
__builtin_memmove((R+24),(R+4),4);
}
B425aca:{NFSU2_TR(0x425aca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425acb:{NFSU2_TR(0x425acb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425acf:{NFSU2_TR(0x425acf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425ad4ull));
TAIL_STATIC(0x423330u,423);
}
B425ad4:L425ad4:{c.instructions+=10;NFSU2_TR(0x425ad4);
__builtin_memmove((R+0),gp(0x783828),4);
}
B425ad9:{NFSU2_TR(0x425ad9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B425adb:{NFSU2_TR(0x425adb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425adc:{NFSU2_TR(0x425adc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425ae2:{NFSU2_TR(0x425ae2);
u8 U[4];
w4(U+0,u32(0x784eb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B425ae8:{NFSU2_TR(0x425ae8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ae9:{NFSU2_TR(0x425ae9);
__builtin_memmove((R+4),(R+28),4);
}
B425aeb:{NFSU2_TR(0x425aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425aef:{NFSU2_TR(0x425aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425af5:{NFSU2_TR(0x425af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425afaull));
TAIL_STATIC(0x409b50u,409);
}
B425afa:L425afa:{c.instructions+=15;NFSU2_TR(0x425afa);
u8 U[4];
w4(U+0,u32(0x78463cull));
s4(u32(r4(R+28)),r4(U+0));
}
B425b00:{NFSU2_TR(0x425b00);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B425b02:{NFSU2_TR(0x425b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b08:{NFSU2_TR(0x425b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b0e:{NFSU2_TR(0x425b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b14:{NFSU2_TR(0x425b14);
__builtin_memmove((R+8),gp(0x7e8ea4),4);
}
B425b1a:{NFSU2_TR(0x425b1a);
__builtin_memmove((R+0),gp(0x7e8ea0),4);
}
B425b1f:{NFSU2_TR(0x425b1f);
__builtin_memmove((R+4),gp(0x783828),4);
}
B425b25:{NFSU2_TR(0x425b25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425b26:{NFSU2_TR(0x425b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425b27:{NFSU2_TR(0x425b27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425b28:{NFSU2_TR(0x425b28);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425b29:{NFSU2_TR(0x425b29);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425b2f:{NFSU2_TR(0x425b2f);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425b34:{NFSU2_TR(0x425b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425b39ull));
TAIL_STATIC(0x409f80u,409);
}
B425b39:L425b39:{c.instructions+=6;NFSU2_TR(0x425b39);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425b3d:{NFSU2_TR(0x425b3d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B425b44:{NFSU2_TR(0x425b44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425b47:{NFSU2_TR(0x425b47);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B425b4b:{NFSU2_TR(0x425b4b);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425b50:{NFSU2_TR(0x425b50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L425b61;}}
}
B425b52:L425b52:{c.instructions+=3;NFSU2_TR(0x425b52);
__builtin_memmove((R+8),gp(0x89e804),4);
}
B425b58:{NFSU2_TR(0x425b58);
{u32 ea_=u32((r4(R+8)*4u)+u32(7879208u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425b5f:{NFSU2_TR(0x425b5f);
{goto L425b67;}
}
B425b61:L425b61:{c.instructions+=1;NFSU2_TR(0x425b61);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B425b67:L425b67:{c.instructions+=16;NFSU2_TR(0x425b67);
{u32 ea_=u32(r4(R+24)+u32(556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B425b6d:{NFSU2_TR(0x425b6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b73:{NFSU2_TR(0x425b73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b79:{NFSU2_TR(0x425b79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b7f:{NFSU2_TR(0x425b7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b85:{NFSU2_TR(0x425b85);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425b8c:{NFSU2_TR(0x425b8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b92:{NFSU2_TR(0x425b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425b98:{NFSU2_TR(0x425b98);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425b9f:{NFSU2_TR(0x425b9f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x254ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425ba5:{NFSU2_TR(0x425ba5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425bab:{NFSU2_TR(0x425bab);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24eull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B425bb2:{NFSU2_TR(0x425bb2);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B425bb7:{NFSU2_TR(0x425bb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425bb8:{NFSU2_TR(0x425bb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425bb9:{NFSU2_TR(0x425bb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425bbeull));
TAIL_STATIC(0x440e50u,440);
}
B425bbe:L425bbe:{c.instructions+=6;NFSU2_TR(0x425bbe);
__builtin_memmove((R+20),(R+0),4);
}
B425bc0:{NFSU2_TR(0x425bc0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425bc3:{NFSU2_TR(0x425bc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425bc7:{NFSU2_TR(0x425bc7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425bc9:{NFSU2_TR(0x425bc9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425bce:{NFSU2_TR(0x425bce);
if(r1(R+518)){{goto L425be9;}}
}
B425bd0:L425bd0:{c.instructions+=4;NFSU2_TR(0x425bd0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425bd1:{NFSU2_TR(0x425bd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425bd2:{NFSU2_TR(0x425bd2);
u8 U[4];
w4(U+0,u32(0x784e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425bd7:{NFSU2_TR(0x425bd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425bdcull));
TAIL_STATIC(0x43db50u,43d);
}
B425bdc:L425bdc:{c.instructions+=4;NFSU2_TR(0x425bdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425bdf:{NFSU2_TR(0x425bdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425be0:{NFSU2_TR(0x425be0);
__builtin_memmove((R+4),(R+20),4);
}
B425be2:{NFSU2_TR(0x425be2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425be7ull));
TAIL_STATIC(0x637db0u,637);
}
B425be7:L425be7:{c.instructions+=1;NFSU2_TR(0x425be7);
{goto L425beb;}
}
B425be9:L425be9:{c.instructions+=1;NFSU2_TR(0x425be9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425beb:L425beb:{c.instructions+=8;NFSU2_TR(0x425beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425bf1:{NFSU2_TR(0x425bf1);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425bf6:{NFSU2_TR(0x425bf6);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425bfb:{NFSU2_TR(0x425bfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c01:{NFSU2_TR(0x425c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c07:{NFSU2_TR(0x425c07);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425c0d:{NFSU2_TR(0x425c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x260ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c13:{NFSU2_TR(0x425c13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425c18ull));
TAIL_STATIC(0x575620u,575);
}
B425c18:L425c18:{c.instructions+=6;NFSU2_TR(0x425c18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425c1b:{NFSU2_TR(0x425c1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c1f:{NFSU2_TR(0x425c1f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425c21:{NFSU2_TR(0x425c21);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425c26:{NFSU2_TR(0x425c26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B425c27:{NFSU2_TR(0x425c27);
if(r1(R+518)){{goto L425c3b;}}
}
B425c29:L425c29:{c.instructions+=5;NFSU2_TR(0x425c29);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c2e:{NFSU2_TR(0x425c2e);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c30:{NFSU2_TR(0x425c30);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c32:{NFSU2_TR(0x425c32);
__builtin_memmove((R+4),(R+0),4);
}
B425c34:{NFSU2_TR(0x425c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425c39ull));
TAIL_STATIC(0x4016b0u,401);
}
B425c39:L425c39:{c.instructions+=1;NFSU2_TR(0x425c39);
{goto L425c3d;}
}
B425c3b:L425c3b:{c.instructions+=1;NFSU2_TR(0x425c3b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425c3d:L425c3d:{c.instructions+=4;NFSU2_TR(0x425c3d);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c42:{NFSU2_TR(0x425c42);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425c47:{NFSU2_TR(0x425c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c4d:{NFSU2_TR(0x425c4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425c52ull));
TAIL_STATIC(0x575620u,575);
}
B425c52:L425c52:{c.instructions+=5;NFSU2_TR(0x425c52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425c55:{NFSU2_TR(0x425c55);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c59:{NFSU2_TR(0x425c59);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425c5b:{NFSU2_TR(0x425c5b);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425c60:{NFSU2_TR(0x425c60);
if(r1(R+518)){{goto L425c74;}}
}
B425c62:L425c62:{c.instructions+=5;NFSU2_TR(0x425c62);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c67:{NFSU2_TR(0x425c67);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c69:{NFSU2_TR(0x425c69);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c6b:{NFSU2_TR(0x425c6b);
__builtin_memmove((R+4),(R+0),4);
}
B425c6d:{NFSU2_TR(0x425c6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425c72ull));
TAIL_STATIC(0x4016b0u,401);
}
B425c72:L425c72:{c.instructions+=1;NFSU2_TR(0x425c72);
{goto L425c76;}
}
B425c74:L425c74:{c.instructions+=1;NFSU2_TR(0x425c74);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425c76:L425c76:{c.instructions+=4;NFSU2_TR(0x425c76);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425c7b:{NFSU2_TR(0x425c7b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425c80:{NFSU2_TR(0x425c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x268ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c86:{NFSU2_TR(0x425c86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425c8bull));
TAIL_STATIC(0x575620u,575);
}
B425c8b:L425c8b:{c.instructions+=5;NFSU2_TR(0x425c8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425c8e:{NFSU2_TR(0x425c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425c92:{NFSU2_TR(0x425c92);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425c94:{NFSU2_TR(0x425c94);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425c99:{NFSU2_TR(0x425c99);
if(r1(R+518)){{goto L425cad;}}
}
B425c9b:L425c9b:{c.instructions+=5;NFSU2_TR(0x425c9b);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ca0:{NFSU2_TR(0x425ca0);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ca2:{NFSU2_TR(0x425ca2);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ca4:{NFSU2_TR(0x425ca4);
__builtin_memmove((R+4),(R+0),4);
}
B425ca6:{NFSU2_TR(0x425ca6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425cabull));
TAIL_STATIC(0x4016b0u,401);
}
B425cab:L425cab:{c.instructions+=1;NFSU2_TR(0x425cab);
{goto L425caf;}
}
B425cad:L425cad:{c.instructions+=1;NFSU2_TR(0x425cad);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425caf:L425caf:{c.instructions+=4;NFSU2_TR(0x425caf);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425cb4:{NFSU2_TR(0x425cb4);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425cb9:{NFSU2_TR(0x425cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425cbf:{NFSU2_TR(0x425cbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425cc4ull));
TAIL_STATIC(0x575620u,575);
}
B425cc4:L425cc4:{c.instructions+=5;NFSU2_TR(0x425cc4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425cc7:{NFSU2_TR(0x425cc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425ccb:{NFSU2_TR(0x425ccb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425ccd:{NFSU2_TR(0x425ccd);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425cd2:{NFSU2_TR(0x425cd2);
if(r1(R+518)){{goto L425cf0;}}
}
B425cd4:L425cd4:{c.instructions+=7;NFSU2_TR(0x425cd4);
__builtin_memmove((R+8),gp(0x7e8ea4),4);
}
B425cda:{NFSU2_TR(0x425cda);
__builtin_memmove((R+4),gp(0x7e8ea0),4);
}
B425ce0:{NFSU2_TR(0x425ce0);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ce5:{NFSU2_TR(0x425ce5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ce6:{NFSU2_TR(0x425ce6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ce7:{NFSU2_TR(0x425ce7);
__builtin_memmove((R+4),(R+0),4);
}
B425ce9:{NFSU2_TR(0x425ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425ceeull));
TAIL_STATIC(0x4016b0u,401);
}
B425cee:L425cee:{c.instructions+=1;NFSU2_TR(0x425cee);
{goto L425cf2;}
}
B425cf0:L425cf0:{c.instructions+=1;NFSU2_TR(0x425cf0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425cf2:L425cf2:{c.instructions+=4;NFSU2_TR(0x425cf2);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425cf7:{NFSU2_TR(0x425cf7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425cfc:{NFSU2_TR(0x425cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425d02:{NFSU2_TR(0x425d02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d07ull));
TAIL_STATIC(0x575620u,575);
}
B425d07:L425d07:{c.instructions+=5;NFSU2_TR(0x425d07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425d0a:{NFSU2_TR(0x425d0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425d0e:{NFSU2_TR(0x425d0e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425d10:{NFSU2_TR(0x425d10);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425d15:{NFSU2_TR(0x425d15);
if(r1(R+518)){{goto L425d29;}}
}
B425d17:L425d17:{c.instructions+=5;NFSU2_TR(0x425d17);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d1c:{NFSU2_TR(0x425d1c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d1e:{NFSU2_TR(0x425d1e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d20:{NFSU2_TR(0x425d20);
__builtin_memmove((R+4),(R+0),4);
}
B425d22:{NFSU2_TR(0x425d22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d27ull));
TAIL_STATIC(0x4016b0u,401);
}
B425d27:L425d27:{c.instructions+=1;NFSU2_TR(0x425d27);
{goto L425d2b;}
}
B425d29:L425d29:{c.instructions+=1;NFSU2_TR(0x425d29);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425d2b:L425d2b:{c.instructions+=4;NFSU2_TR(0x425d2b);
u8 U[4];
w4(U+0,u32(0x84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d30:{NFSU2_TR(0x425d30);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425d35:{NFSU2_TR(0x425d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425d3b:{NFSU2_TR(0x425d3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d40ull));
TAIL_STATIC(0x575620u,575);
}
B425d40:L425d40:{c.instructions+=5;NFSU2_TR(0x425d40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425d43:{NFSU2_TR(0x425d43);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425d47:{NFSU2_TR(0x425d47);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425d49:{NFSU2_TR(0x425d49);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425d4e:{NFSU2_TR(0x425d4e);
if(r1(R+518)){{goto L425d62;}}
}
B425d50:L425d50:{c.instructions+=5;NFSU2_TR(0x425d50);
u8 U[4];
w4(U+0,u32(0x41f00000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d55:{NFSU2_TR(0x425d55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d57:{NFSU2_TR(0x425d57);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d59:{NFSU2_TR(0x425d59);
__builtin_memmove((R+4),(R+0),4);
}
B425d5b:{NFSU2_TR(0x425d5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d60ull));
TAIL_STATIC(0x4016b0u,401);
}
B425d60:L425d60:{c.instructions+=1;NFSU2_TR(0x425d60);
{goto L425d64;}
}
B425d62:L425d62:{c.instructions+=1;NFSU2_TR(0x425d62);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425d64:L425d64:{c.instructions+=5;NFSU2_TR(0x425d64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x264ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425d6a:{NFSU2_TR(0x425d6a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d6b:{NFSU2_TR(0x425d6b);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425d70:{NFSU2_TR(0x425d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x278ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425d76:{NFSU2_TR(0x425d76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d7bull));
TAIL_STATIC(0x57a010u,57a);
}
B425d7b:L425d7b:{c.instructions+=3;NFSU2_TR(0x425d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425d81:{NFSU2_TR(0x425d81);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d82:{NFSU2_TR(0x425d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d87ull));
TAIL_STATIC(0x57a010u,57a);
}
B425d87:L425d87:{c.instructions+=3;NFSU2_TR(0x425d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x270ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425d8d:{NFSU2_TR(0x425d8d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425d8e:{NFSU2_TR(0x425d8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425d93ull));
TAIL_STATIC(0x57a010u,57a);
}
B425d93:L425d93:{c.instructions+=37;NFSU2_TR(0x425d93);
__builtin_memmove((R+8),gp(0x783828),4);
}
B425d99:{NFSU2_TR(0x425d99);
__builtin_memmove((R+0),gp(0x78383c),4);
}
B425d9e:{NFSU2_TR(0x425d9e);
__builtin_memmove((R+4),gp(0x783838),4);
}
B425da4:{NFSU2_TR(0x425da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425daa:{NFSU2_TR(0x425daa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425db0:{NFSU2_TR(0x425db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x228ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425db6:{NFSU2_TR(0x425db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425dbc:{NFSU2_TR(0x425dbc);
__builtin_memmove((R+8),gp(0x783844),4);
}
B425dc2:{NFSU2_TR(0x425dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425dc5:{NFSU2_TR(0x425dc5);
__builtin_memmove((R+0),gp(0x783840),4);
}
B425dca:{NFSU2_TR(0x425dca);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425dcd:{NFSU2_TR(0x425dcd);
__builtin_memmove((R+4),gp(0x78384c),4);
}
B425dd3:{NFSU2_TR(0x425dd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425dd6:{NFSU2_TR(0x425dd6);
__builtin_memmove((R+8),gp(0x783848),4);
}
B425ddc:{NFSU2_TR(0x425ddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425ddf:{NFSU2_TR(0x425ddf);
__builtin_memmove((R+0),gp(0x7838e0),4);
}
B425de4:{NFSU2_TR(0x425de4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425de7:{NFSU2_TR(0x425de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425dea:{NFSU2_TR(0x425dea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425df0:{NFSU2_TR(0x425df0);
__builtin_memmove((R+4),(R+0),4);
}
B425df2:{NFSU2_TR(0x425df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425df8:{NFSU2_TR(0x425df8);
__builtin_memmove((R+4),gp(0x783830),4);
}
B425dfe:{NFSU2_TR(0x425dfe);
__builtin_memmove((R+8),(R+0),4);
}
B425e00:{NFSU2_TR(0x425e00);
__builtin_memmove((R+0),gp(0x78382c),4);
}
B425e05:{NFSU2_TR(0x425e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e0b:{NFSU2_TR(0x425e0b);
__builtin_memmove((R+8),gp(0x783834),4);
}
B425e11:{NFSU2_TR(0x425e11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e17:{NFSU2_TR(0x425e17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e1d:{NFSU2_TR(0x425e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425e21:{NFSU2_TR(0x425e21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425e22:{NFSU2_TR(0x425e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e28:{NFSU2_TR(0x425e28);
__builtin_memmove((R+0),(R+24),4);
}
B425e2a:{NFSU2_TR(0x425e2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425e2b:{NFSU2_TR(0x425e2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B425e2c:{NFSU2_TR(0x425e2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e33:{NFSU2_TR(0x425e33);
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
B425e36:{NFSU2_TR(0x425e36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425e40:L425e40:{c.instructions+=12;NFSU2_TR(0x425e40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e42:{NFSU2_TR(0x425e42);
u8 U[4];
w4(U+0,u32(0x7717f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e47:{NFSU2_TR(0x425e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425e4d:{NFSU2_TR(0x425e4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e4e:{NFSU2_TR(0x425e4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e55:{NFSU2_TR(0x425e55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e56:{NFSU2_TR(0x425e56);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e57:{NFSU2_TR(0x425e57);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e58:{NFSU2_TR(0x425e58);
__builtin_memmove((R+24),(R+4),4);
}
B425e5a:{NFSU2_TR(0x425e5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e5b:{NFSU2_TR(0x425e5b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e5f:{NFSU2_TR(0x425e5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425e64ull));
TAIL_STATIC(0x423330u,423);
}
B425e64:L425e64:{c.instructions+=12;NFSU2_TR(0x425e64);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425e68:{NFSU2_TR(0x425e68);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B425e6a:{NFSU2_TR(0x425e6a);
u8 U[4];
w4(U+0,u32(0x784f40ull));
s4(u32(r4(R+24)),r4(U+0));
}
B425e70:{NFSU2_TR(0x425e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e76:{NFSU2_TR(0x425e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e7c:{NFSU2_TR(0x425e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e82:{NFSU2_TR(0x425e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e88:{NFSU2_TR(0x425e88);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425e8e:{NFSU2_TR(0x425e8e);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B425e94:{NFSU2_TR(0x425e94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425e95:{NFSU2_TR(0x425e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425e99:{NFSU2_TR(0x425e99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425e9eull));
TAIL_STATIC(0x440e50u,440);
}
B425e9e:L425e9e:{c.instructions+=6;NFSU2_TR(0x425e9e);
__builtin_memmove((R+28),(R+0),4);
}
B425ea0:{NFSU2_TR(0x425ea0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425ea3:{NFSU2_TR(0x425ea3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425ea7:{NFSU2_TR(0x425ea7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425ea9:{NFSU2_TR(0x425ea9);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425eae:{NFSU2_TR(0x425eae);
if(r1(R+518)){{goto L425ec9;}}
}
B425eb0:L425eb0:{c.instructions+=4;NFSU2_TR(0x425eb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425eb1:{NFSU2_TR(0x425eb1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425eb2:{NFSU2_TR(0x425eb2);
u8 U[4];
w4(U+0,u32(0x784e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425eb7:{NFSU2_TR(0x425eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425ebcull));
TAIL_STATIC(0x43db50u,43d);
}
B425ebc:L425ebc:{c.instructions+=4;NFSU2_TR(0x425ebc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425ebf:{NFSU2_TR(0x425ebf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ec0:{NFSU2_TR(0x425ec0);
__builtin_memmove((R+4),(R+28),4);
}
B425ec2:{NFSU2_TR(0x425ec2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425ec7ull));
TAIL_STATIC(0x637db0u,637);
}
B425ec7:L425ec7:{c.instructions+=1;NFSU2_TR(0x425ec7);
{goto L425ecb;}
}
B425ec9:L425ec9:{c.instructions+=1;NFSU2_TR(0x425ec9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425ecb:L425ecb:{c.instructions+=5;NFSU2_TR(0x425ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425ed1:{NFSU2_TR(0x425ed1);
__builtin_memmove((R+8),gp(0x8a1d08),4);
}
B425ed7:{NFSU2_TR(0x425ed7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ed8:{NFSU2_TR(0x425ed8);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425edc:{NFSU2_TR(0x425edc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425ee1ull));
TAIL_STATIC(0x440e50u,440);
}
B425ee1:L425ee1:{c.instructions+=6;NFSU2_TR(0x425ee1);
__builtin_memmove((R+28),(R+0),4);
}
B425ee3:{NFSU2_TR(0x425ee3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425ee6:{NFSU2_TR(0x425ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425eea:{NFSU2_TR(0x425eea);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425eec:{NFSU2_TR(0x425eec);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425ef1:{NFSU2_TR(0x425ef1);
if(r1(R+518)){{goto L425f0c;}}
}
B425ef3:L425ef3:{c.instructions+=4;NFSU2_TR(0x425ef3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ef4:{NFSU2_TR(0x425ef4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425ef5:{NFSU2_TR(0x425ef5);
u8 U[4];
w4(U+0,u32(0x784e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425efa:{NFSU2_TR(0x425efa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425effull));
TAIL_STATIC(0x43db50u,43d);
}
B425eff:L425eff:{c.instructions+=4;NFSU2_TR(0x425eff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425f02:{NFSU2_TR(0x425f02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f03:{NFSU2_TR(0x425f03);
__builtin_memmove((R+4),(R+28),4);
}
B425f05:{NFSU2_TR(0x425f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f0aull));
TAIL_STATIC(0x637db0u,637);
}
B425f0a:L425f0a:{c.instructions+=1;NFSU2_TR(0x425f0a);
{goto L425f0e;}
}
B425f0c:L425f0c:{c.instructions+=1;NFSU2_TR(0x425f0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425f0e:L425f0e:{c.instructions+=5;NFSU2_TR(0x425f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x244ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425f14:{NFSU2_TR(0x425f14);
__builtin_memmove((R+0),gp(0x8a1d08),4);
}
B425f19:{NFSU2_TR(0x425f19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f1a:{NFSU2_TR(0x425f1a);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425f1e:{NFSU2_TR(0x425f1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f23ull));
TAIL_STATIC(0x440e50u,440);
}
B425f23:L425f23:{c.instructions+=6;NFSU2_TR(0x425f23);
__builtin_memmove((R+28),(R+0),4);
}
B425f25:{NFSU2_TR(0x425f25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425f28:{NFSU2_TR(0x425f28);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425f2c:{NFSU2_TR(0x425f2c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425f2e:{NFSU2_TR(0x425f2e);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425f33:{NFSU2_TR(0x425f33);
if(r1(R+518)){{goto L425f4e;}}
}
B425f35:L425f35:{c.instructions+=4;NFSU2_TR(0x425f35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f36:{NFSU2_TR(0x425f36);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f37:{NFSU2_TR(0x425f37);
u8 U[4];
w4(U+0,u32(0x784e90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f3c:{NFSU2_TR(0x425f3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f41ull));
TAIL_STATIC(0x43db50u,43d);
}
B425f41:L425f41:{c.instructions+=4;NFSU2_TR(0x425f41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425f44:{NFSU2_TR(0x425f44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f45:{NFSU2_TR(0x425f45);
__builtin_memmove((R+4),(R+28),4);
}
B425f47:{NFSU2_TR(0x425f47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f4cull));
TAIL_STATIC(0x637db0u,637);
}
B425f4c:L425f4c:{c.instructions+=1;NFSU2_TR(0x425f4c);
{goto L425f50;}
}
B425f4e:L425f4e:{c.instructions+=1;NFSU2_TR(0x425f4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B425f50:L425f50:{c.instructions+=5;NFSU2_TR(0x425f50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425f56:{NFSU2_TR(0x425f56);
__builtin_memmove((R+4),gp(0x8a1d08),4);
}
B425f5c:{NFSU2_TR(0x425f5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f5d:{NFSU2_TR(0x425f5d);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B425f61:{NFSU2_TR(0x425f61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f66ull));
TAIL_STATIC(0x440e50u,440);
}
B425f66:L425f66:{c.instructions+=6;NFSU2_TR(0x425f66);
__builtin_memmove((R+28),(R+0),4);
}
B425f68:{NFSU2_TR(0x425f68);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425f6b:{NFSU2_TR(0x425f6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425f6f:{NFSU2_TR(0x425f6f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B425f71:{NFSU2_TR(0x425f71);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B425f76:{NFSU2_TR(0x425f76);
if(r1(R+518)){{goto L425f97;}}
}
B425f78:L425f78:{c.instructions+=4;NFSU2_TR(0x425f78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f79:{NFSU2_TR(0x425f79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f7a:{NFSU2_TR(0x425f7a);
u8 U[4];
w4(U+0,u32(0x784ea4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f7f:{NFSU2_TR(0x425f7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f84ull));
TAIL_STATIC(0x43db50u,43d);
}
B425f84:L425f84:{c.instructions+=4;NFSU2_TR(0x425f84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B425f87:{NFSU2_TR(0x425f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425f88:{NFSU2_TR(0x425f88);
__builtin_memmove((R+4),(R+28),4);
}
B425f8a:{NFSU2_TR(0x425f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425f8full));
TAIL_STATIC(0x637db0u,637);
}
B425f8f:L425f8f:{c.instructions+=2;NFSU2_TR(0x425f8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425f95:{NFSU2_TR(0x425f95);
{goto L425f9d;}
}
B425f97:L425f97:{c.instructions+=1;NFSU2_TR(0x425f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425f9d:L425f9d:{c.instructions+=8;NFSU2_TR(0x425f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B425fa1:{NFSU2_TR(0x425fa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B425fa2:{NFSU2_TR(0x425fa2);
__builtin_memmove((R+0),(R+24),4);
}
B425fa4:{NFSU2_TR(0x425fa4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B425fa5:{NFSU2_TR(0x425fa5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B425fa6:{NFSU2_TR(0x425fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425fad:{NFSU2_TR(0x425fad);
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
B425fb0:{NFSU2_TR(0x425fb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B425fc0:L425fc0:{c.instructions+=12;NFSU2_TR(0x425fc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fc2:{NFSU2_TR(0x425fc2);
u8 U[4];
w4(U+0,u32(0x771458ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fc7:{NFSU2_TR(0x425fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B425fcd:{NFSU2_TR(0x425fcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fce:{NFSU2_TR(0x425fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425fd5:{NFSU2_TR(0x425fd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fd6:{NFSU2_TR(0x425fd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fd7:{NFSU2_TR(0x425fd7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fd8:{NFSU2_TR(0x425fd8);
__builtin_memmove((R+24),(R+4),4);
}
B425fda:{NFSU2_TR(0x425fda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425fdb:{NFSU2_TR(0x425fdb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425fdf:{NFSU2_TR(0x425fdf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x425fe4ull));
TAIL_STATIC(0x423330u,423);
}
B425fe4:L425fe4:{c.instructions+=7;NFSU2_TR(0x425fe4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B425fe8:{NFSU2_TR(0x425fe8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B425fea:{NFSU2_TR(0x425fea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B425feb:{NFSU2_TR(0x425feb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((R+4),(U+0),4);
}
B425ff1:{NFSU2_TR(0x425ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B425ff5:{NFSU2_TR(0x425ff5);
u8 U[4];
w4(U+0,u32(0x784fc8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B425ffb:{NFSU2_TR(0x425ffb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x426000ull));
TAIL_STATIC(0x405c60u,405);
}
XIT:NFSU2_TR_EXIT(0x425,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
