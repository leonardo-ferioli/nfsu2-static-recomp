#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_408(u8* __restrict R,Cpu& c);
u32 body_40b(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_414(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_513(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5dc(u8* __restrict R,Cpu& c);
u32 body_5e2(u8* __restrict R,Cpu& c);
u32 body_5ea(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_5f8(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x413,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x413,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_413(u8* __restrict R,Cpu& c);
u32 page_413(Cpu& c){return body_413(c.regs.data(),c);}
__attribute__((noinline)) u32 body_413(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x413000:goto L413000;
case 0x413002:goto L413002;
case 0x413004:goto L413004;
case 0x413007:c.instructions+=6;goto B413007;
case 0x41300a:c.instructions+=5;goto B41300a;
case 0x41300d:c.instructions+=4;goto B41300d;
case 0x41300e:c.instructions+=3;goto B41300e;
case 0x413011:c.instructions+=2;goto B413011;
case 0x413014:c.instructions+=1;goto B413014;
case 0x413016:goto L413016;
case 0x413017:c.instructions+=5;goto B413017;
case 0x413018:c.instructions+=4;goto B413018;
case 0x41301d:c.instructions+=3;goto B41301d;
case 0x41301e:c.instructions+=2;goto B41301e;
case 0x413021:c.instructions+=1;goto B413021;
case 0x413030:goto L413030;
case 0x413031:c.instructions+=6;goto B413031;
case 0x413036:c.instructions+=5;goto B413036;
case 0x413037:c.instructions+=4;goto B413037;
case 0x413039:c.instructions+=3;goto B413039;
case 0x41303b:c.instructions+=2;goto B41303b;
case 0x41303f:c.instructions+=1;goto B41303f;
case 0x413041:goto L413041;
case 0x413042:c.instructions+=1;goto B413042;
case 0x413043:goto L413043;
case 0x41304a:c.instructions+=3;goto B41304a;
case 0x41304e:c.instructions+=2;goto B41304e;
case 0x41304f:c.instructions+=1;goto B41304f;
case 0x413054:goto L413054;
case 0x413056:c.instructions+=2;goto B413056;
case 0x413058:c.instructions+=1;goto B413058;
case 0x41305a:goto L41305a;
case 0x41305b:c.instructions+=2;goto B41305b;
case 0x413060:c.instructions+=1;goto B413060;
case 0x413065:goto L413065;
case 0x413067:c.instructions+=1;goto B413067;
case 0x413069:goto L413069;
case 0x41306b:c.instructions+=2;goto B41306b;
case 0x41306c:c.instructions+=1;goto B41306c;
case 0x413071:goto L413071;
case 0x413074:c.instructions+=2;goto B413074;
case 0x413075:c.instructions+=1;goto B413075;
case 0x413077:goto L413077;
case 0x413079:goto L413079;
case 0x41307e:c.instructions+=1;goto B41307e;
case 0x413083:goto L413083;
case 0x413089:c.instructions+=4;goto B413089;
case 0x41308e:c.instructions+=3;goto B41308e;
case 0x41308f:c.instructions+=2;goto B41308f;
case 0x413091:c.instructions+=1;goto B413091;
case 0x413093:goto L413093;
case 0x413094:c.instructions+=1;goto B413094;
case 0x413095:goto L413095;
case 0x413096:c.instructions+=2;goto B413096;
case 0x413097:c.instructions+=1;goto B413097;
case 0x4130a0:goto L4130a0;
case 0x4130a2:c.instructions+=23;goto B4130a2;
case 0x4130a4:c.instructions+=22;goto B4130a4;
case 0x4130aa:c.instructions+=21;goto B4130aa;
case 0x4130b0:c.instructions+=20;goto B4130b0;
case 0x4130b6:c.instructions+=19;goto B4130b6;
case 0x4130bc:c.instructions+=18;goto B4130bc;
case 0x4130c2:c.instructions+=17;goto B4130c2;
case 0x4130c8:c.instructions+=16;goto B4130c8;
case 0x4130ce:c.instructions+=15;goto B4130ce;
case 0x4130d4:c.instructions+=14;goto B4130d4;
case 0x4130da:c.instructions+=13;goto B4130da;
case 0x4130dc:c.instructions+=12;goto B4130dc;
case 0x4130e3:c.instructions+=11;goto B4130e3;
case 0x4130e9:c.instructions+=10;goto B4130e9;
case 0x4130ef:c.instructions+=9;goto B4130ef;
case 0x4130f5:c.instructions+=8;goto B4130f5;
case 0x4130fb:c.instructions+=7;goto B4130fb;
case 0x413101:c.instructions+=6;goto B413101;
case 0x413107:c.instructions+=5;goto B413107;
case 0x41310d:c.instructions+=4;goto B41310d;
case 0x413113:c.instructions+=3;goto B413113;
case 0x413116:c.instructions+=2;goto B413116;
case 0x413119:c.instructions+=1;goto B413119;
case 0x413120:goto L413120;
case 0x413124:c.instructions+=6;goto B413124;
case 0x413125:c.instructions+=5;goto B413125;
case 0x413128:c.instructions+=4;goto B413128;
case 0x41312b:c.instructions+=3;goto B41312b;
case 0x41312d:c.instructions+=2;goto B41312d;
case 0x413130:c.instructions+=1;goto B413130;
case 0x413132:goto L413132;
case 0x413137:c.instructions+=1;goto B413137;
case 0x413139:goto L413139;
case 0x41313c:c.instructions+=1;goto B41313c;
case 0x41313e:goto L41313e;
case 0x413143:goto L413143;
case 0x413144:c.instructions+=9;goto B413144;
case 0x413146:c.instructions+=8;goto B413146;
case 0x413147:c.instructions+=7;goto B413147;
case 0x41314b:c.instructions+=6;goto B41314b;
case 0x41314c:c.instructions+=5;goto B41314c;
case 0x413152:c.instructions+=4;goto B413152;
case 0x413153:c.instructions+=3;goto B413153;
case 0x413156:c.instructions+=2;goto B413156;
case 0x413157:c.instructions+=1;goto B413157;
case 0x41315c:goto L41315c;
case 0x41315d:c.instructions+=1;goto B41315d;
case 0x413160:goto L413160;
case 0x413161:c.instructions+=7;goto B413161;
case 0x413162:c.instructions+=6;goto B413162;
case 0x413164:c.instructions+=5;goto B413164;
case 0x41316a:c.instructions+=4;goto B41316a;
case 0x41316b:c.instructions+=3;goto B41316b;
case 0x41316d:c.instructions+=2;goto B41316d;
case 0x41316f:c.instructions+=1;goto B41316f;
case 0x413171:goto L413171;
case 0x413174:goto L413174;
case 0x413176:c.instructions+=2;goto B413176;
case 0x413178:c.instructions+=1;goto B413178;
case 0x41317a:goto L41317a;
case 0x41317b:c.instructions+=3;goto B41317b;
case 0x413180:c.instructions+=2;goto B413180;
case 0x413181:c.instructions+=1;goto B413181;
case 0x413186:goto L413186;
case 0x413189:goto L413189;
case 0x41318f:c.instructions+=4;goto B41318f;
case 0x413190:c.instructions+=3;goto B413190;
case 0x413193:c.instructions+=2;goto B413193;
case 0x413195:c.instructions+=1;goto B413195;
case 0x413197:goto L413197;
case 0x41319d:c.instructions+=4;goto B41319d;
case 0x41319f:c.instructions+=3;goto B41319f;
case 0x4131a1:c.instructions+=2;goto B4131a1;
case 0x4131ab:c.instructions+=1;goto B4131ab;
case 0x4131ad:goto L4131ad;
case 0x4131b3:goto L4131b3;
case 0x4131b5:c.instructions+=4;goto B4131b5;
case 0x4131bb:c.instructions+=3;goto B4131bb;
case 0x4131bc:c.instructions+=2;goto B4131bc;
case 0x4131bd:c.instructions+=1;goto B4131bd;
case 0x4131c2:goto L4131c2;
case 0x4131c8:c.instructions+=5;goto B4131c8;
case 0x4131cb:c.instructions+=4;goto B4131cb;
case 0x4131cc:c.instructions+=3;goto B4131cc;
case 0x4131cf:c.instructions+=2;goto B4131cf;
case 0x4131d1:c.instructions+=1;goto B4131d1;
case 0x4131d3:goto L4131d3;
case 0x4131d4:c.instructions+=4;goto B4131d4;
case 0x4131de:c.instructions+=3;goto B4131de;
case 0x4131df:c.instructions+=2;goto B4131df;
case 0x4131e0:c.instructions+=1;goto B4131e0;
case 0x4131f0:goto L4131f0;
case 0x4131f1:c.instructions+=6;goto B4131f1;
case 0x4131f2:c.instructions+=5;goto B4131f2;
case 0x4131f4:c.instructions+=4;goto B4131f4;
case 0x4131fa:c.instructions+=3;goto B4131fa;
case 0x4131fc:c.instructions+=2;goto B4131fc;
case 0x4131fe:c.instructions+=1;goto B4131fe;
case 0x413200:goto L413200;
case 0x413203:c.instructions+=4;goto B413203;
case 0x413205:c.instructions+=3;goto B413205;
case 0x413206:c.instructions+=2;goto B413206;
case 0x413207:c.instructions+=1;goto B413207;
case 0x41320a:goto L41320a;
case 0x413210:goto L413210;
case 0x413212:c.instructions+=1;goto B413212;
case 0x413217:goto L413217;
case 0x413219:c.instructions+=11;goto B413219;
case 0x41321f:c.instructions+=10;goto B41321f;
case 0x413225:c.instructions+=9;goto B413225;
case 0x41322b:c.instructions+=8;goto B41322b;
case 0x413231:c.instructions+=7;goto B413231;
case 0x413237:c.instructions+=6;goto B413237;
case 0x41323a:c.instructions+=5;goto B41323a;
case 0x41323d:c.instructions+=4;goto B41323d;
case 0x413244:c.instructions+=3;goto B413244;
case 0x413245:c.instructions+=2;goto B413245;
case 0x413246:c.instructions+=1;goto B413246;
case 0x413250:goto L413250;
case 0x413251:c.instructions+=8;goto B413251;
case 0x413255:c.instructions+=7;goto B413255;
case 0x413256:c.instructions+=6;goto B413256;
case 0x413257:c.instructions+=5;goto B413257;
case 0x413259:c.instructions+=4;goto B413259;
case 0x41325c:c.instructions+=3;goto B41325c;
case 0x41325d:c.instructions+=2;goto B41325d;
case 0x41325f:c.instructions+=1;goto B41325f;
case 0x413264:goto L413264;
case 0x41326a:c.instructions+=3;goto B41326a;
case 0x41326c:c.instructions+=2;goto B41326c;
case 0x41326f:c.instructions+=1;goto B41326f;
case 0x413271:goto L413271;
case 0x413272:c.instructions+=2;goto B413272;
case 0x413274:c.instructions+=1;goto B413274;
case 0x413279:goto L413279;
case 0x41327f:c.instructions+=3;goto B41327f;
case 0x413281:c.instructions+=2;goto B413281;
case 0x413284:c.instructions+=1;goto B413284;
case 0x413286:goto L413286;
case 0x41328a:c.instructions+=10;goto B41328a;
case 0x41328d:c.instructions+=9;goto B41328d;
case 0x413291:c.instructions+=8;goto B413291;
case 0x413295:c.instructions+=7;goto B413295;
case 0x41329b:c.instructions+=6;goto B41329b;
case 0x41329e:c.instructions+=5;goto B41329e;
case 0x4132a0:c.instructions+=4;goto B4132a0;
case 0x4132a6:c.instructions+=3;goto B4132a6;
case 0x4132a8:c.instructions+=2;goto B4132a8;
case 0x4132ab:c.instructions+=1;goto B4132ab;
case 0x4132ad:goto L4132ad;
case 0x4132ae:c.instructions+=4;goto B4132ae;
case 0x4132af:c.instructions+=3;goto B4132af;
case 0x4132b4:c.instructions+=2;goto B4132b4;
case 0x4132b5:c.instructions+=1;goto B4132b5;
case 0x4132b8:goto L4132b8;
case 0x4132b9:c.instructions+=4;goto B4132b9;
case 0x4132ba:c.instructions+=3;goto B4132ba;
case 0x4132bc:c.instructions+=2;goto B4132bc;
case 0x4132bd:c.instructions+=1;goto B4132bd;
case 0x4132c0:goto L4132c0;
case 0x4132c4:c.instructions+=4;goto B4132c4;
case 0x4132c5:c.instructions+=3;goto B4132c5;
case 0x4132c9:c.instructions+=2;goto B4132c9;
case 0x4132ca:c.instructions+=1;goto B4132ca;
case 0x4132cf:goto L4132cf;
case 0x4132d3:c.instructions+=1;goto B4132d3;
case 0x4132e0:goto L4132e0;
case 0x4132e6:c.instructions+=4;goto B4132e6;
case 0x4132e8:c.instructions+=3;goto B4132e8;
case 0x4132ea:c.instructions+=2;goto B4132ea;
case 0x4132eb:c.instructions+=1;goto B4132eb;
case 0x4132ed:goto L4132ed;
case 0x4132f3:c.instructions+=2;goto B4132f3;
case 0x4132f9:c.instructions+=1;goto B4132f9;
case 0x4132fb:goto L4132fb;
case 0x4132fd:c.instructions+=2;goto B4132fd;
case 0x4132fe:c.instructions+=1;goto B4132fe;
case 0x413301:goto L413301;
case 0x413307:c.instructions+=17;goto B413307;
case 0x41330b:c.instructions+=16;goto B41330b;
case 0x41330e:c.instructions+=15;goto B41330e;
case 0x413311:c.instructions+=14;goto B413311;
case 0x413312:c.instructions+=13;goto B413312;
case 0x413314:c.instructions+=12;goto B413314;
case 0x413316:c.instructions+=11;goto B413316;
case 0x413319:c.instructions+=10;goto B413319;
case 0x41331c:c.instructions+=9;goto B41331c;
case 0x41331f:c.instructions+=8;goto B41331f;
case 0x413322:c.instructions+=7;goto B413322;
case 0x413328:c.instructions+=6;goto B413328;
case 0x413329:c.instructions+=5;goto B413329;
case 0x41332b:c.instructions+=4;goto B41332b;
case 0x41332e:c.instructions+=3;goto B41332e;
case 0x413334:c.instructions+=2;goto B413334;
case 0x413335:c.instructions+=1;goto B413335;
case 0x413337:goto L413337;
case 0x41333d:goto L41333d;
case 0x413343:c.instructions+=3;goto B413343;
case 0x413345:c.instructions+=2;goto B413345;
case 0x413346:c.instructions+=1;goto B413346;
case 0x413350:goto L413350;
case 0x413351:c.instructions+=5;goto B413351;
case 0x413352:c.instructions+=4;goto B413352;
case 0x413354:c.instructions+=3;goto B413354;
case 0x413356:c.instructions+=2;goto B413356;
case 0x413358:c.instructions+=1;goto B413358;
case 0x41335a:goto L41335a;
case 0x413360:goto L413360;
case 0x413363:c.instructions+=5;goto B413363;
case 0x413365:c.instructions+=4;goto B413365;
case 0x413367:c.instructions+=3;goto B413367;
case 0x41336a:c.instructions+=2;goto B41336a;
case 0x41336c:c.instructions+=1;goto B41336c;
case 0x413371:goto L413371;
case 0x413372:c.instructions+=1;goto B413372;
case 0x413377:goto L413377;
case 0x413379:c.instructions+=3;goto B413379;
case 0x41337c:c.instructions+=2;goto B41337c;
case 0x41337e:c.instructions+=1;goto B41337e;
case 0x413380:goto L413380;
case 0x413381:c.instructions+=2;goto B413381;
case 0x413382:c.instructions+=1;goto B413382;
case 0x413390:goto L413390;
case 0x413392:c.instructions+=16;goto B413392;
case 0x413396:c.instructions+=15;goto B413396;
case 0x413398:c.instructions+=14;goto B413398;
case 0x413399:c.instructions+=13;goto B413399;
case 0x41339d:c.instructions+=12;goto B41339d;
case 0x4133a1:c.instructions+=11;goto B4133a1;
case 0x4133a5:c.instructions+=10;goto B4133a5;
case 0x4133a9:c.instructions+=9;goto B4133a9;
case 0x4133ad:c.instructions+=8;goto B4133ad;
case 0x4133b1:c.instructions+=7;goto B4133b1;
case 0x4133b4:c.instructions+=6;goto B4133b4;
case 0x4133b8:c.instructions+=5;goto B4133b8;
case 0x4133ba:c.instructions+=4;goto B4133ba;
case 0x4133bd:c.instructions+=3;goto B4133bd;
case 0x4133c0:c.instructions+=2;goto B4133c0;
case 0x4133c3:c.instructions+=1;goto B4133c3;
case 0x4133d0:goto L4133d0;
case 0x4133d3:c.instructions+=8;goto B4133d3;
case 0x4133d4:c.instructions+=7;goto B4133d4;
case 0x4133d5:c.instructions+=6;goto B4133d5;
case 0x4133d6:c.instructions+=5;goto B4133d6;
case 0x4133da:c.instructions+=4;goto B4133da;
case 0x4133dc:c.instructions+=3;goto B4133dc;
case 0x4133de:c.instructions+=2;goto B4133de;
case 0x4133e0:c.instructions+=1;goto B4133e0;
case 0x4133e5:goto L4133e5;
case 0x4133e8:c.instructions+=4;goto B4133e8;
case 0x4133ea:c.instructions+=3;goto B4133ea;
case 0x4133ed:c.instructions+=2;goto B4133ed;
case 0x4133ee:c.instructions+=1;goto B4133ee;
case 0x4133f0:goto L4133f0;
case 0x4133f6:c.instructions+=11;goto B4133f6;
case 0x4133fb:c.instructions+=10;goto B4133fb;
case 0x4133ff:c.instructions+=9;goto B4133ff;
case 0x413405:c.instructions+=8;goto B413405;
case 0x41340b:c.instructions+=7;goto B41340b;
case 0x41340f:c.instructions+=6;goto B41340f;
case 0x413413:c.instructions+=5;goto B413413;
case 0x413417:c.instructions+=4;goto B413417;
case 0x41341f:c.instructions+=3;goto B41341f;
case 0x413423:c.instructions+=2;goto B413423;
case 0x413429:c.instructions+=1;goto B413429;
case 0x41342d:goto L41342d;
case 0x41342f:goto L41342f;
case 0x413430:c.instructions+=4;goto B413430;
case 0x413431:c.instructions+=3;goto B413431;
case 0x413432:c.instructions+=2;goto B413432;
case 0x413435:c.instructions+=1;goto B413435;
case 0x413440:goto L413440;
case 0x413441:c.instructions+=21;goto B413441;
case 0x413443:c.instructions+=20;goto B413443;
case 0x413444:c.instructions+=19;goto B413444;
case 0x413448:c.instructions+=18;goto B413448;
case 0x41344b:c.instructions+=17;goto B41344b;
case 0x41344d:c.instructions+=16;goto B41344d;
case 0x413450:c.instructions+=15;goto B413450;
case 0x413453:c.instructions+=14;goto B413453;
case 0x413456:c.instructions+=13;goto B413456;
case 0x413459:c.instructions+=12;goto B413459;
case 0x41345c:c.instructions+=11;goto B41345c;
case 0x41345d:c.instructions+=10;goto B41345d;
case 0x413460:c.instructions+=9;goto B413460;
case 0x413463:c.instructions+=8;goto B413463;
case 0x413464:c.instructions+=7;goto B413464;
case 0x413467:c.instructions+=6;goto B413467;
case 0x41346a:c.instructions+=5;goto B41346a;
case 0x41346d:c.instructions+=4;goto B41346d;
case 0x41346f:c.instructions+=3;goto B41346f;
case 0x413471:c.instructions+=2;goto B413471;
case 0x413476:c.instructions+=1;goto B413476;
case 0x41347c:goto L41347c;
case 0x41347e:goto L41347e;
case 0x41347f:c.instructions+=2;goto B41347f;
case 0x413485:c.instructions+=1;goto B413485;
case 0x41348a:goto L41348a;
case 0x41348d:c.instructions+=7;goto B41348d;
case 0x413493:c.instructions+=6;goto B413493;
case 0x413494:c.instructions+=5;goto B413494;
case 0x413497:c.instructions+=4;goto B413497;
case 0x413498:c.instructions+=3;goto B413498;
case 0x413499:c.instructions+=2;goto B413499;
case 0x41349f:c.instructions+=1;goto B41349f;
case 0x4134a4:goto L4134a4;
case 0x4134aa:c.instructions+=14;goto B4134aa;
case 0x4134b0:c.instructions+=13;goto B4134b0;
case 0x4134b6:c.instructions+=12;goto B4134b6;
case 0x4134bc:c.instructions+=11;goto B4134bc;
case 0x4134c2:c.instructions+=10;goto B4134c2;
case 0x4134c8:c.instructions+=9;goto B4134c8;
case 0x4134ce:c.instructions+=8;goto B4134ce;
case 0x4134d4:c.instructions+=7;goto B4134d4;
case 0x4134da:c.instructions+=6;goto B4134da;
case 0x4134dc:c.instructions+=5;goto B4134dc;
case 0x4134e2:c.instructions+=4;goto B4134e2;
case 0x4134e8:c.instructions+=3;goto B4134e8;
case 0x4134ea:c.instructions+=2;goto B4134ea;
case 0x4134ef:c.instructions+=1;goto B4134ef;
case 0x4134f0:goto L4134f0;
case 0x4134f3:c.instructions+=4;goto B4134f3;
case 0x4134f5:c.instructions+=3;goto B4134f5;
case 0x4134f8:c.instructions+=2;goto B4134f8;
case 0x4134f9:c.instructions+=1;goto B4134f9;
case 0x4134fb:goto L4134fb;
case 0x413501:c.instructions+=1;goto B413501;
case 0x413506:goto L413506;
case 0x413509:c.instructions+=4;goto B413509;
case 0x41350b:c.instructions+=3;goto B41350b;
case 0x41350c:c.instructions+=2;goto B41350c;
case 0x41350d:c.instructions+=1;goto B41350d;
case 0x41350f:goto L41350f;
case 0x413515:c.instructions+=9;goto B413515;
case 0x413516:c.instructions+=8;goto B413516;
case 0x41351c:c.instructions+=7;goto B41351c;
case 0x413522:c.instructions+=6;goto B413522;
case 0x413523:c.instructions+=5;goto B413523;
case 0x413524:c.instructions+=4;goto B413524;
case 0x41352a:c.instructions+=3;goto B41352a;
case 0x41352c:c.instructions+=2;goto B41352c;
case 0x41352d:c.instructions+=1;goto B41352d;
case 0x413530:goto L413530;
case 0x413540:goto L413540;
case 0x413543:c.instructions+=2;goto B413543;
case 0x413545:c.instructions+=1;goto B413545;
case 0x413547:goto L413547;
case 0x41354a:c.instructions+=4;goto B41354a;
case 0x41354f:c.instructions+=3;goto B41354f;
case 0x413556:c.instructions+=2;goto B413556;
case 0x413558:c.instructions+=1;goto B413558;
case 0x41355a:goto L41355a;
case 0x41355e:c.instructions+=4;goto B41355e;
case 0x413562:c.instructions+=3;goto B413562;
case 0x413569:c.instructions+=2;goto B413569;
case 0x41356c:c.instructions+=1;goto B41356c;
case 0x41356f:goto L41356f;
case 0x413573:c.instructions+=3;goto B413573;
case 0x41357c:c.instructions+=2;goto B41357c;
case 0x41357f:c.instructions+=1;goto B41357f;
case 0x413590:goto L413590;
case 0x413591:c.instructions+=11;goto B413591;
case 0x413593:c.instructions+=10;goto B413593;
case 0x413596:c.instructions+=9;goto B413596;
case 0x413599:c.instructions+=8;goto B413599;
case 0x41359a:c.instructions+=7;goto B41359a;
case 0x41359b:c.instructions+=6;goto B41359b;
case 0x41359c:c.instructions+=5;goto B41359c;
case 0x41359e:c.instructions+=4;goto B41359e;
case 0x4135a1:c.instructions+=3;goto B4135a1;
case 0x4135a3:c.instructions+=2;goto B4135a3;
case 0x4135a5:c.instructions+=1;goto B4135a5;
case 0x4135a7:goto L4135a7;
case 0x4135aa:c.instructions+=4;goto B4135aa;
case 0x4135af:c.instructions+=3;goto B4135af;
case 0x4135b6:c.instructions+=2;goto B4135b6;
case 0x4135ba:c.instructions+=1;goto B4135ba;
case 0x4135bc:goto L4135bc;
case 0x4135c0:goto L4135c0;
case 0x4135c6:c.instructions+=11;goto B4135c6;
case 0x4135c9:c.instructions+=10;goto B4135c9;
case 0x4135cf:c.instructions+=9;goto B4135cf;
case 0x4135d3:c.instructions+=8;goto B4135d3;
case 0x4135d6:c.instructions+=7;goto B4135d6;
case 0x4135da:c.instructions+=6;goto B4135da;
case 0x4135dd:c.instructions+=5;goto B4135dd;
case 0x4135e1:c.instructions+=4;goto B4135e1;
case 0x4135e5:c.instructions+=3;goto B4135e5;
case 0x4135e9:c.instructions+=2;goto B4135e9;
case 0x4135ed:c.instructions+=1;goto B4135ed;
case 0x4135ef:goto L4135ef;
case 0x4135f7:c.instructions+=1;goto B4135f7;
case 0x4135f9:goto L4135f9;
case 0x4135fc:c.instructions+=3;goto B4135fc;
case 0x413602:c.instructions+=2;goto B413602;
case 0x413604:c.instructions+=1;goto B413604;
case 0x413606:goto L413606;
case 0x413608:c.instructions+=2;goto B413608;
case 0x41360a:c.instructions+=1;goto B41360a;
case 0x41360d:goto L41360d;
case 0x41360f:c.instructions+=1;goto B41360f;
case 0x413611:goto L413611;
case 0x413613:c.instructions+=2;goto B413613;
case 0x413615:c.instructions+=1;goto B413615;
case 0x413618:goto L413618;
case 0x41361a:c.instructions+=1;goto B41361a;
case 0x41361c:goto L41361c;
case 0x41361e:c.instructions+=2;goto B41361e;
case 0x413620:c.instructions+=1;goto B413620;
case 0x413623:goto L413623;
case 0x413625:c.instructions+=1;goto B413625;
case 0x413627:goto L413627;
case 0x41362f:c.instructions+=1;goto B41362f;
case 0x413631:goto L413631;
case 0x413639:goto L413639;
case 0x41363b:c.instructions+=2;goto B41363b;
case 0x41363d:c.instructions+=1;goto B41363d;
case 0x413640:goto L413640;
case 0x413644:c.instructions+=2;goto B413644;
case 0x41364c:c.instructions+=1;goto B41364c;
case 0x413650:goto L413650;
case 0x413655:c.instructions+=1;goto B413655;
case 0x41365b:goto L41365b;
case 0x41365d:c.instructions+=3;goto B41365d;
case 0x41365f:c.instructions+=2;goto B41365f;
case 0x413663:c.instructions+=1;goto B413663;
case 0x413669:goto L413669;
case 0x413670:goto L413670;
case 0x413672:c.instructions+=3;goto B413672;
case 0x413673:c.instructions+=2;goto B413673;
case 0x413675:c.instructions+=1;goto B413675;
case 0x413678:goto L413678;
case 0x41367a:c.instructions+=3;goto B41367a;
case 0x41367c:c.instructions+=2;goto B41367c;
case 0x413680:c.instructions+=1;goto B413680;
case 0x413686:goto L413686;
case 0x41368a:c.instructions+=2;goto B41368a;
case 0x41368c:c.instructions+=1;goto B41368c;
case 0x41368e:goto L41368e;
case 0x413692:c.instructions+=3;goto B413692;
case 0x413693:c.instructions+=2;goto B413693;
case 0x413695:c.instructions+=1;goto B413695;
case 0x41369a:goto L41369a;
case 0x41369c:c.instructions+=1;goto B41369c;
case 0x4136a2:goto L4136a2;
case 0x4136a6:c.instructions+=1;goto B4136a6;
case 0x4136a8:goto L4136a8;
case 0x4136ac:c.instructions+=3;goto B4136ac;
case 0x4136ad:c.instructions+=2;goto B4136ad;
case 0x4136af:c.instructions+=1;goto B4136af;
case 0x4136b4:goto L4136b4;
case 0x4136b6:c.instructions+=1;goto B4136b6;
case 0x4136bc:goto L4136bc;
case 0x4136c0:c.instructions+=9;goto B4136c0;
case 0x4136c6:c.instructions+=8;goto B4136c6;
case 0x4136c9:c.instructions+=7;goto B4136c9;
case 0x4136cb:c.instructions+=6;goto B4136cb;
case 0x4136cc:c.instructions+=5;goto B4136cc;
case 0x4136cd:c.instructions+=4;goto B4136cd;
case 0x4136d0:c.instructions+=3;goto B4136d0;
case 0x4136d1:c.instructions+=2;goto B4136d1;
case 0x4136d3:c.instructions+=1;goto B4136d3;
case 0x4136d8:goto L4136d8;
case 0x4136da:c.instructions+=2;goto B4136da;
case 0x4136dc:c.instructions+=1;goto B4136dc;
case 0x4136e2:goto L4136e2;
case 0x4136e6:c.instructions+=15;goto B4136e6;
case 0x4136e8:c.instructions+=14;goto B4136e8;
case 0x4136eb:c.instructions+=13;goto B4136eb;
case 0x4136ee:c.instructions+=12;goto B4136ee;
case 0x4136f2:c.instructions+=11;goto B4136f2;
case 0x4136f6:c.instructions+=10;goto B4136f6;
case 0x4136f9:c.instructions+=9;goto B4136f9;
case 0x4136fd:c.instructions+=8;goto B4136fd;
case 0x413701:c.instructions+=7;goto B413701;
case 0x413705:c.instructions+=6;goto B413705;
case 0x41370b:c.instructions+=5;goto B41370b;
case 0x41370c:c.instructions+=4;goto B41370c;
case 0x41370f:c.instructions+=3;goto B41370f;
case 0x413710:c.instructions+=2;goto B413710;
case 0x413714:c.instructions+=1;goto B413714;
case 0x413719:goto L413719;
case 0x41371d:c.instructions+=6;goto B41371d;
case 0x413720:c.instructions+=5;goto B413720;
case 0x413723:c.instructions+=4;goto B413723;
case 0x413726:c.instructions+=3;goto B413726;
case 0x413727:c.instructions+=2;goto B413727;
case 0x413729:c.instructions+=1;goto B413729;
case 0x41372e:goto L41372e;
case 0x413734:c.instructions+=3;goto B413734;
case 0x413736:c.instructions+=2;goto B413736;
case 0x413739:c.instructions+=1;goto B413739;
case 0x41373b:goto L41373b;
case 0x41373c:c.instructions+=2;goto B41373c;
case 0x41373e:c.instructions+=1;goto B41373e;
case 0x413743:goto L413743;
case 0x413749:c.instructions+=3;goto B413749;
case 0x41374b:c.instructions+=2;goto B41374b;
case 0x41374e:c.instructions+=1;goto B41374e;
case 0x413750:goto L413750;
case 0x413752:c.instructions+=1;goto B413752;
case 0x413754:goto L413754;
case 0x413756:goto L413756;
case 0x413759:c.instructions+=2;goto B413759;
case 0x41375b:c.instructions+=1;goto B41375b;
case 0x41375d:goto L41375d;
case 0x413761:c.instructions+=2;goto B413761;
case 0x413763:c.instructions+=1;goto B413763;
case 0x413765:goto L413765;
case 0x413767:c.instructions+=1;goto B413767;
case 0x413769:goto L413769;
case 0x41376d:c.instructions+=4;goto B41376d;
case 0x413771:c.instructions+=3;goto B413771;
case 0x413773:c.instructions+=2;goto B413773;
case 0x413776:c.instructions+=1;goto B413776;
case 0x413778:goto L413778;
case 0x41377c:c.instructions+=2;goto B41377c;
case 0x413780:c.instructions+=1;goto B413780;
case 0x413782:goto L413782;
case 0x413786:c.instructions+=2;goto B413786;
case 0x41378a:c.instructions+=1;goto B41378a;
case 0x41378e:goto L41378e;
case 0x413792:c.instructions+=5;goto B413792;
case 0x413796:c.instructions+=4;goto B413796;
case 0x413797:c.instructions+=3;goto B413797;
case 0x413799:c.instructions+=2;goto B413799;
case 0x41379d:c.instructions+=1;goto B41379d;
case 0x4137a3:goto L4137a3;
case 0x4137a7:goto L4137a7;
case 0x4137ab:c.instructions+=4;goto B4137ab;
case 0x4137ac:c.instructions+=3;goto B4137ac;
case 0x4137ae:c.instructions+=2;goto B4137ae;
case 0x4137b2:c.instructions+=1;goto B4137b2;
case 0x4137b8:goto L4137b8;
case 0x4137ba:c.instructions+=3;goto B4137ba;
case 0x4137bb:c.instructions+=2;goto B4137bb;
case 0x4137bd:c.instructions+=1;goto B4137bd;
case 0x4137c0:goto L4137c0;
case 0x4137c1:c.instructions+=5;goto B4137c1;
case 0x4137c2:c.instructions+=4;goto B4137c2;
case 0x4137c3:c.instructions+=3;goto B4137c3;
case 0x4137c5:c.instructions+=2;goto B4137c5;
case 0x4137c6:c.instructions+=1;goto B4137c6;
case 0x4137c9:goto L4137c9;
case 0x4137cb:c.instructions+=1;goto B4137cb;
case 0x4137cd:goto L4137cd;
case 0x4137cf:c.instructions+=3;goto B4137cf;
case 0x4137d0:c.instructions+=2;goto B4137d0;
case 0x4137d2:c.instructions+=1;goto B4137d2;
case 0x4137d5:goto L4137d5;
case 0x4137d6:c.instructions+=5;goto B4137d6;
case 0x4137d7:c.instructions+=4;goto B4137d7;
case 0x4137d8:c.instructions+=3;goto B4137d8;
case 0x4137da:c.instructions+=2;goto B4137da;
case 0x4137db:c.instructions+=1;goto B4137db;
case 0x4137de:goto L4137de;
case 0x4137e0:c.instructions+=2;goto B4137e0;
case 0x4137e5:c.instructions+=1;goto B4137e5;
case 0x4137ea:goto L4137ea;
case 0x4137f1:c.instructions+=6;goto B4137f1;
case 0x4137f2:c.instructions+=5;goto B4137f2;
case 0x4137f3:c.instructions+=4;goto B4137f3;
case 0x4137f4:c.instructions+=3;goto B4137f4;
case 0x4137f6:c.instructions+=2;goto B4137f6;
case 0x4137f7:c.instructions+=1;goto B4137f7;
case 0x413800:goto L413800;
case 0x413805:c.instructions+=6;goto B413805;
case 0x413806:c.instructions+=5;goto B413806;
case 0x413808:c.instructions+=4;goto B413808;
case 0x41380a:c.instructions+=3;goto B41380a;
case 0x41380b:c.instructions+=2;goto B41380b;
case 0x41380d:c.instructions+=1;goto B41380d;
case 0x41380f:goto L41380f;
case 0x413810:c.instructions+=2;goto B413810;
case 0x413811:c.instructions+=1;goto B413811;
case 0x413813:goto L413813;
case 0x413816:c.instructions+=7;goto B413816;
case 0x41381a:c.instructions+=6;goto B41381a;
case 0x41381f:c.instructions+=5;goto B41381f;
case 0x413821:c.instructions+=4;goto B413821;
case 0x413824:c.instructions+=3;goto B413824;
case 0x413827:c.instructions+=2;goto B413827;
case 0x413829:c.instructions+=1;goto B413829;
case 0x413830:goto L413830;
case 0x413835:c.instructions+=2;goto B413835;
case 0x413837:c.instructions+=1;goto B413837;
case 0x413839:goto L413839;
case 0x41383a:c.instructions+=2;goto B41383a;
case 0x41383d:c.instructions+=1;goto B41383d;
case 0x41383f:goto L41383f;
case 0x413841:goto L413841;
case 0x413842:c.instructions+=1;goto B413842;
case 0x413847:goto L413847;
case 0x41384c:c.instructions+=4;goto B41384c;
case 0x41384d:c.instructions+=3;goto B41384d;
case 0x413853:c.instructions+=2;goto B413853;
case 0x413855:c.instructions+=1;goto B413855;
case 0x413857:goto L413857;
case 0x413858:c.instructions+=1;goto B413858;
case 0x413859:goto L413859;
case 0x41385a:c.instructions+=2;goto B41385a;
case 0x41385b:c.instructions+=1;goto B41385b;
case 0x413860:goto L413860;
case 0x413861:c.instructions+=5;goto B413861;
case 0x413863:c.instructions+=4;goto B413863;
case 0x413866:c.instructions+=3;goto B413866;
case 0x413869:c.instructions+=2;goto B413869;
case 0x41386c:c.instructions+=1;goto B41386c;
case 0x413871:goto L413871;
case 0x413873:c.instructions+=3;goto B413873;
case 0x413875:c.instructions+=2;goto B413875;
case 0x413877:c.instructions+=1;goto B413877;
case 0x41387a:goto L41387a;
case 0x41387d:c.instructions+=2;goto B41387d;
case 0x41387f:c.instructions+=1;goto B41387f;
case 0x413881:goto L413881;
case 0x413884:c.instructions+=4;goto B413884;
case 0x413889:c.instructions+=3;goto B413889;
case 0x413890:c.instructions+=2;goto B413890;
case 0x413892:c.instructions+=1;goto B413892;
case 0x413894:goto L413894;
case 0x413897:c.instructions+=2;goto B413897;
case 0x413899:c.instructions+=1;goto B413899;
case 0x41389b:goto L41389b;
case 0x4138a0:c.instructions+=2;goto B4138a0;
case 0x4138a1:c.instructions+=1;goto B4138a1;
case 0x4138a2:goto L4138a2;
case 0x4138a4:c.instructions+=2;goto B4138a4;
case 0x4138a5:c.instructions+=1;goto B4138a5;
case 0x4138b0:goto L4138b0;
case 0x4138b2:c.instructions+=11;goto B4138b2;
case 0x4138b7:c.instructions+=10;goto B4138b7;
case 0x4138bd:c.instructions+=9;goto B4138bd;
case 0x4138be:c.instructions+=8;goto B4138be;
case 0x4138c5:c.instructions+=7;goto B4138c5;
case 0x4138c6:c.instructions+=6;goto B4138c6;
case 0x4138c7:c.instructions+=5;goto B4138c7;
case 0x4138c9:c.instructions+=4;goto B4138c9;
case 0x4138cd:c.instructions+=3;goto B4138cd;
case 0x4138d3:c.instructions+=2;goto B4138d3;
case 0x4138db:c.instructions+=1;goto B4138db;
case 0x4138e0:goto L4138e0;
case 0x4138e5:c.instructions+=6;goto B4138e5;
case 0x4138e7:c.instructions+=5;goto B4138e7;
case 0x4138e9:c.instructions+=4;goto B4138e9;
case 0x4138ec:c.instructions+=3;goto B4138ec;
case 0x4138ed:c.instructions+=2;goto B4138ed;
case 0x4138f5:c.instructions+=1;goto B4138f5;
case 0x4138fa:goto L4138fa;
case 0x4138fe:c.instructions+=4;goto B4138fe;
case 0x4138ff:c.instructions+=3;goto B4138ff;
case 0x413906:c.instructions+=2;goto B413906;
case 0x413909:c.instructions+=1;goto B413909;
case 0x413910:goto L413910;
case 0x413911:c.instructions+=7;goto B413911;
case 0x413915:c.instructions+=6;goto B413915;
case 0x413916:c.instructions+=5;goto B413916;
case 0x41391b:c.instructions+=4;goto B41391b;
case 0x41391d:c.instructions+=3;goto B41391d;
case 0x41391f:c.instructions+=2;goto B41391f;
case 0x413921:c.instructions+=1;goto B413921;
case 0x413926:goto L413926;
case 0x413929:c.instructions+=2;goto B413929;
case 0x41392c:c.instructions+=1;goto B41392c;
case 0x41392e:goto L41392e;
case 0x413935:c.instructions+=1;goto B413935;
case 0x41393c:goto L41393c;
case 0x41393d:c.instructions+=2;goto B41393d;
case 0x413943:c.instructions+=1;goto B413943;
case 0x413948:goto L413948;
case 0x413949:c.instructions+=2;goto B413949;
case 0x41394f:c.instructions+=1;goto B41394f;
case 0x413954:goto L413954;
case 0x413956:c.instructions+=1;goto B413956;
case 0x41395b:goto L41395b;
case 0x41395c:c.instructions+=2;goto B41395c;
case 0x41395d:c.instructions+=1;goto B41395d;
case 0x413960:goto L413960;
case 0x413961:c.instructions+=8;goto B413961;
case 0x413962:c.instructions+=7;goto B413962;
case 0x413963:c.instructions+=6;goto B413963;
case 0x413964:c.instructions+=5;goto B413964;
case 0x413968:c.instructions+=4;goto B413968;
case 0x41396d:c.instructions+=3;goto B41396d;
case 0x41396f:c.instructions+=2;goto B41396f;
case 0x413971:c.instructions+=1;goto B413971;
case 0x413976:goto L413976;
case 0x41397a:c.instructions+=8;goto B41397a;
case 0x41397c:c.instructions+=7;goto B41397c;
case 0x413980:c.instructions+=6;goto B413980;
case 0x413982:c.instructions+=5;goto B413982;
case 0x413985:c.instructions+=4;goto B413985;
case 0x413986:c.instructions+=3;goto B413986;
case 0x413988:c.instructions+=2;goto B413988;
case 0x41398c:c.instructions+=1;goto B41398c;
case 0x413991:goto L413991;
case 0x413995:c.instructions+=2;goto B413995;
case 0x413997:c.instructions+=1;goto B413997;
case 0x41399d:goto L41399d;
case 0x41399f:c.instructions+=1;goto B41399f;
case 0x4139a1:goto L4139a1;
case 0x4139a4:c.instructions+=1;goto B4139a4;
case 0x4139a8:goto L4139a8;
case 0x4139aa:c.instructions+=6;goto B4139aa;
case 0x4139ac:c.instructions+=5;goto B4139ac;
case 0x4139ae:c.instructions+=4;goto B4139ae;
case 0x4139b2:c.instructions+=3;goto B4139b2;
case 0x4139b3:c.instructions+=2;goto B4139b3;
case 0x4139b5:c.instructions+=1;goto B4139b5;
case 0x4139ba:goto L4139ba;
case 0x4139bd:c.instructions+=2;goto B4139bd;
case 0x4139bf:c.instructions+=1;goto B4139bf;
case 0x4139c5:goto L4139c5;
case 0x4139c9:c.instructions+=3;goto B4139c9;
case 0x4139ca:c.instructions+=2;goto B4139ca;
case 0x4139cd:c.instructions+=1;goto B4139cd;
case 0x4139d3:goto L4139d3;
case 0x4139da:goto L4139da;
case 0x4139e0:c.instructions+=2;goto B4139e0;
case 0x4139e1:c.instructions+=1;goto B4139e1;
case 0x4139e6:goto L4139e6;
case 0x4139e9:c.instructions+=2;goto B4139e9;
case 0x4139eb:c.instructions+=1;goto B4139eb;
case 0x4139f1:goto L4139f1;
case 0x4139f3:c.instructions+=2;goto B4139f3;
case 0x4139f5:c.instructions+=1;goto B4139f5;
case 0x4139fa:goto L4139fa;
case 0x4139ff:goto L4139ff;
case 0x413a05:c.instructions+=2;goto B413a05;
case 0x413a06:c.instructions+=1;goto B413a06;
case 0x413a0b:goto L413a0b;
case 0x413a0e:c.instructions+=2;goto B413a0e;
case 0x413a10:c.instructions+=1;goto B413a10;
case 0x413a16:goto L413a16;
case 0x413a18:c.instructions+=2;goto B413a18;
case 0x413a1a:c.instructions+=1;goto B413a1a;
case 0x413a1f:goto L413a1f;
case 0x413a24:goto L413a24;
case 0x413a29:c.instructions+=2;goto B413a29;
case 0x413a2a:c.instructions+=1;goto B413a2a;
case 0x413a2f:goto L413a2f;
case 0x413a32:c.instructions+=2;goto B413a32;
case 0x413a34:c.instructions+=1;goto B413a34;
case 0x413a3a:goto L413a3a;
case 0x413a3c:c.instructions+=2;goto B413a3c;
case 0x413a3e:c.instructions+=1;goto B413a3e;
case 0x413a43:goto L413a43;
case 0x413a48:goto L413a48;
case 0x413a4e:c.instructions+=2;goto B413a4e;
case 0x413a4f:c.instructions+=1;goto B413a4f;
case 0x413a54:goto L413a54;
case 0x413a57:c.instructions+=2;goto B413a57;
case 0x413a59:c.instructions+=1;goto B413a59;
case 0x413a5f:goto L413a5f;
case 0x413a61:c.instructions+=2;goto B413a61;
case 0x413a63:c.instructions+=1;goto B413a63;
case 0x413a68:goto L413a68;
case 0x413a6d:goto L413a6d;
case 0x413a73:c.instructions+=2;goto B413a73;
case 0x413a74:c.instructions+=1;goto B413a74;
case 0x413a79:goto L413a79;
case 0x413a7c:c.instructions+=2;goto B413a7c;
case 0x413a7e:c.instructions+=1;goto B413a7e;
case 0x413a84:goto L413a84;
case 0x413a86:c.instructions+=2;goto B413a86;
case 0x413a88:c.instructions+=1;goto B413a88;
case 0x413a8d:goto L413a8d;
case 0x413a92:goto L413a92;
case 0x413a97:c.instructions+=2;goto B413a97;
case 0x413a98:c.instructions+=1;goto B413a98;
case 0x413a9d:goto L413a9d;
case 0x413aa0:c.instructions+=2;goto B413aa0;
case 0x413aa2:c.instructions+=1;goto B413aa2;
case 0x413aa8:goto L413aa8;
case 0x413aaa:c.instructions+=6;goto B413aaa;
case 0x413aac:c.instructions+=5;goto B413aac;
case 0x413aae:c.instructions+=4;goto B413aae;
case 0x413ab0:c.instructions+=3;goto B413ab0;
case 0x413ab2:c.instructions+=2;goto B413ab2;
case 0x413ab4:c.instructions+=1;goto B413ab4;
case 0x413ab9:goto L413ab9;
case 0x413abe:goto L413abe;
case 0x413ac4:c.instructions+=2;goto B413ac4;
case 0x413ac5:c.instructions+=1;goto B413ac5;
case 0x413aca:goto L413aca;
case 0x413acd:c.instructions+=2;goto B413acd;
case 0x413acf:c.instructions+=1;goto B413acf;
case 0x413ad5:goto L413ad5;
case 0x413ad7:c.instructions+=5;goto B413ad7;
case 0x413ad9:c.instructions+=4;goto B413ad9;
case 0x413adb:c.instructions+=3;goto B413adb;
case 0x413add:c.instructions+=2;goto B413add;
case 0x413adf:c.instructions+=1;goto B413adf;
case 0x413ae4:goto L413ae4;
case 0x413ae6:goto L413ae6;
case 0x413aec:c.instructions+=2;goto B413aec;
case 0x413aed:c.instructions+=1;goto B413aed;
case 0x413af2:goto L413af2;
case 0x413af5:c.instructions+=2;goto B413af5;
case 0x413af7:c.instructions+=1;goto B413af7;
case 0x413af9:goto L413af9;
case 0x413afb:c.instructions+=3;goto B413afb;
case 0x413afd:c.instructions+=2;goto B413afd;
case 0x413aff:c.instructions+=1;goto B413aff;
case 0x413b04:goto L413b04;
case 0x413b06:goto L413b06;
case 0x413b0b:c.instructions+=2;goto B413b0b;
case 0x413b0c:c.instructions+=1;goto B413b0c;
case 0x413b11:goto L413b11;
case 0x413b14:c.instructions+=2;goto B413b14;
case 0x413b16:c.instructions+=1;goto B413b16;
case 0x413b18:goto L413b18;
case 0x413b1a:c.instructions+=2;goto B413b1a;
case 0x413b1c:c.instructions+=1;goto B413b1c;
case 0x413b21:goto L413b21;
case 0x413b23:goto L413b23;
case 0x413b29:c.instructions+=2;goto B413b29;
case 0x413b2a:c.instructions+=1;goto B413b2a;
case 0x413b2f:goto L413b2f;
case 0x413b32:c.instructions+=2;goto B413b32;
case 0x413b34:c.instructions+=1;goto B413b34;
case 0x413b36:goto L413b36;
case 0x413b38:c.instructions+=3;goto B413b38;
case 0x413b3a:c.instructions+=2;goto B413b3a;
case 0x413b3c:c.instructions+=1;goto B413b3c;
case 0x413b41:goto L413b41;
case 0x413b43:goto L413b43;
case 0x413b49:c.instructions+=2;goto B413b49;
case 0x413b4a:c.instructions+=1;goto B413b4a;
case 0x413b4f:goto L413b4f;
case 0x413b52:c.instructions+=2;goto B413b52;
case 0x413b54:c.instructions+=1;goto B413b54;
case 0x413b56:goto L413b56;
case 0x413b58:c.instructions+=3;goto B413b58;
case 0x413b5a:c.instructions+=2;goto B413b5a;
case 0x413b5c:c.instructions+=1;goto B413b5c;
case 0x413b61:goto L413b61;
case 0x413b63:goto L413b63;
case 0x413b65:goto L413b65;
case 0x413b67:goto L413b67;
case 0x413b69:goto L413b69;
case 0x413b6b:c.instructions+=1;goto B413b6b;
case 0x413b6d:goto L413b6d;
case 0x413b6f:c.instructions+=3;goto B413b6f;
case 0x413b70:c.instructions+=2;goto B413b70;
case 0x413b72:c.instructions+=1;goto B413b72;
case 0x413b75:goto L413b75;
case 0x413b77:c.instructions+=1;goto B413b77;
case 0x413b7c:goto L413b7c;
case 0x413b7d:c.instructions+=4;goto B413b7d;
case 0x413b7e:c.instructions+=3;goto B413b7e;
case 0x413b7f:c.instructions+=2;goto B413b7f;
case 0x413b80:c.instructions+=1;goto B413b80;
case 0x413bb0:goto L413bb0;
case 0x413bb1:c.instructions+=6;goto B413bb1;
case 0x413bb2:c.instructions+=5;goto B413bb2;
case 0x413bb6:c.instructions+=4;goto B413bb6;
case 0x413bb8:c.instructions+=3;goto B413bb8;
case 0x413bba:c.instructions+=2;goto B413bba;
case 0x413bbc:c.instructions+=1;goto B413bbc;
case 0x413bc1:goto L413bc1;
case 0x413bc3:c.instructions+=1;goto B413bc3;
case 0x413bc5:goto L413bc5;
case 0x413bc6:c.instructions+=3;goto B413bc6;
case 0x413bc8:c.instructions+=2;goto B413bc8;
case 0x413bc9:c.instructions+=1;goto B413bc9;
case 0x413bcc:goto L413bcc;
case 0x413bcf:c.instructions+=6;goto B413bcf;
case 0x413bd2:c.instructions+=5;goto B413bd2;
case 0x413bd4:c.instructions+=4;goto B413bd4;
case 0x413bd6:c.instructions+=3;goto B413bd6;
case 0x413bd9:c.instructions+=2;goto B413bd9;
case 0x413bdc:c.instructions+=1;goto B413bdc;
case 0x413be2:goto L413be2;
case 0x413be5:c.instructions+=1;goto B413be5;
case 0x413beb:goto L413beb;
case 0x413bed:c.instructions+=2;goto B413bed;
case 0x413bef:c.instructions+=1;goto B413bef;
case 0x413bf5:goto L413bf5;
case 0x413bf7:c.instructions+=1;goto B413bf7;
case 0x413bfd:goto L413bfd;
case 0x413bfe:c.instructions+=6;goto B413bfe;
case 0x413bff:c.instructions+=5;goto B413bff;
case 0x413c03:c.instructions+=4;goto B413c03;
case 0x413c06:c.instructions+=3;goto B413c06;
case 0x413c08:c.instructions+=2;goto B413c08;
case 0x413c10:c.instructions+=1;goto B413c10;
case 0x413c13:goto L413c13;
case 0x413c15:c.instructions+=1;goto B413c15;
case 0x413c17:goto L413c17;
case 0x413c1e:c.instructions+=2;goto B413c1e;
case 0x413c21:c.instructions+=1;goto B413c21;
case 0x413c23:goto L413c23;
case 0x413c27:c.instructions+=1;goto B413c27;
case 0x413c29:goto L413c29;
case 0x413c2b:goto L413c2b;
case 0x413c2d:c.instructions+=1;goto B413c2d;
case 0x413c32:goto L413c32;
case 0x413c34:c.instructions+=9;goto B413c34;
case 0x413c37:c.instructions+=8;goto B413c37;
case 0x413c39:c.instructions+=7;goto B413c39;
case 0x413c3c:c.instructions+=6;goto B413c3c;
case 0x413c3e:c.instructions+=5;goto B413c3e;
case 0x413c41:c.instructions+=4;goto B413c41;
case 0x413c43:c.instructions+=3;goto B413c43;
case 0x413c45:c.instructions+=2;goto B413c45;
case 0x413c48:c.instructions+=1;goto B413c48;
case 0x413c4d:goto L413c4d;
case 0x413c4f:c.instructions+=2;goto B413c4f;
case 0x413c51:c.instructions+=1;goto B413c51;
case 0x413c53:goto L413c53;
case 0x413c56:goto L413c56;
case 0x413c59:c.instructions+=3;goto B413c59;
case 0x413c5c:c.instructions+=2;goto B413c5c;
case 0x413c5f:c.instructions+=1;goto B413c5f;
case 0x413c61:goto L413c61;
case 0x413c63:c.instructions+=1;goto B413c63;
case 0x413c65:goto L413c65;
case 0x413c6c:c.instructions+=2;goto B413c6c;
case 0x413c6e:c.instructions+=1;goto B413c6e;
case 0x413c70:goto L413c70;
case 0x413c72:c.instructions+=1;goto B413c72;
case 0x413c77:goto L413c77;
case 0x413c79:c.instructions+=1;goto B413c79;
case 0x413c7b:goto L413c7b;
case 0x413c83:goto L413c83;
case 0x413c89:c.instructions+=2;goto B413c89;
case 0x413c8e:c.instructions+=1;goto B413c8e;
case 0x413c93:goto L413c93;
case 0x413c97:c.instructions+=5;goto B413c97;
case 0x413c98:c.instructions+=4;goto B413c98;
case 0x413c99:c.instructions+=3;goto B413c99;
case 0x413c9b:c.instructions+=2;goto B413c9b;
case 0x413c9e:c.instructions+=1;goto B413c9e;
case 0x413ca4:goto L413ca4;
case 0x413ca5:c.instructions+=3;goto B413ca5;
case 0x413ca7:c.instructions+=2;goto B413ca7;
case 0x413ca8:c.instructions+=1;goto B413ca8;
case 0x413cab:goto L413cab;
case 0x413cac:c.instructions+=3;goto B413cac;
case 0x413cae:c.instructions+=2;goto B413cae;
case 0x413caf:c.instructions+=1;goto B413caf;
case 0x413cc0:goto L413cc0;
case 0x413cc3:c.instructions+=9;goto B413cc3;
case 0x413cc8:c.instructions+=8;goto B413cc8;
case 0x413cc9:c.instructions+=7;goto B413cc9;
case 0x413cca:c.instructions+=6;goto B413cca;
case 0x413ccb:c.instructions+=5;goto B413ccb;
case 0x413ccd:c.instructions+=4;goto B413ccd;
case 0x413ccf:c.instructions+=3;goto B413ccf;
case 0x413cd0:c.instructions+=2;goto B413cd0;
case 0x413cd4:c.instructions+=1;goto B413cd4;
case 0x413cda:goto L413cda;
case 0x413cde:c.instructions+=5;goto B413cde;
case 0x413ce1:c.instructions+=4;goto B413ce1;
case 0x413ce5:c.instructions+=3;goto B413ce5;
case 0x413ce7:c.instructions+=2;goto B413ce7;
case 0x413ceb:c.instructions+=1;goto B413ceb;
case 0x413cf0:goto L413cf0;
case 0x413cf2:c.instructions+=3;goto B413cf2;
case 0x413cf4:c.instructions+=2;goto B413cf4;
case 0x413cf6:c.instructions+=1;goto B413cf6;
case 0x413cfb:goto L413cfb;
case 0x413cfd:c.instructions+=1;goto B413cfd;
case 0x413cff:goto L413cff;
case 0x413d02:c.instructions+=2;goto B413d02;
case 0x413d06:c.instructions+=1;goto B413d06;
case 0x413d0c:goto L413d0c;
case 0x413d0e:c.instructions+=2;goto B413d0e;
case 0x413d10:c.instructions+=1;goto B413d10;
case 0x413d15:goto L413d15;
case 0x413d17:c.instructions+=1;goto B413d17;
case 0x413d1d:goto L413d1d;
case 0x413d1f:c.instructions+=1;goto B413d1f;
case 0x413d21:goto L413d21;
case 0x413d24:c.instructions+=3;goto B413d24;
case 0x413d27:c.instructions+=2;goto B413d27;
case 0x413d2a:c.instructions+=1;goto B413d2a;
case 0x413d2c:goto L413d2c;
case 0x413d2f:c.instructions+=5;goto B413d2f;
case 0x413d31:c.instructions+=4;goto B413d31;
case 0x413d33:c.instructions+=3;goto B413d33;
case 0x413d36:c.instructions+=2;goto B413d36;
case 0x413d39:c.instructions+=1;goto B413d39;
case 0x413d3b:goto L413d3b;
case 0x413d3e:c.instructions+=1;goto B413d3e;
case 0x413d40:goto L413d40;
case 0x413d42:c.instructions+=3;goto B413d42;
case 0x413d45:c.instructions+=2;goto B413d45;
case 0x413d48:c.instructions+=1;goto B413d48;
case 0x413d4a:goto L413d4a;
case 0x413d4d:c.instructions+=2;goto B413d4d;
case 0x413d4f:c.instructions+=1;goto B413d4f;
case 0x413d51:goto L413d51;
case 0x413d52:c.instructions+=7;goto B413d52;
case 0x413d53:c.instructions+=6;goto B413d53;
case 0x413d55:c.instructions+=5;goto B413d55;
case 0x413d56:c.instructions+=4;goto B413d56;
case 0x413d58:c.instructions+=3;goto B413d58;
case 0x413d59:c.instructions+=2;goto B413d59;
case 0x413d5c:c.instructions+=1;goto B413d5c;
case 0x413d5f:goto L413d5f;
case 0x413d64:c.instructions+=4;goto B413d64;
case 0x413d6b:c.instructions+=3;goto B413d6b;
case 0x413d6f:c.instructions+=2;goto B413d6f;
case 0x413d75:c.instructions+=1;goto B413d75;
case 0x413d77:goto L413d77;
case 0x413d78:c.instructions+=1;goto B413d78;
case 0x413d7d:goto L413d7d;
case 0x413d7f:c.instructions+=4;goto B413d7f;
case 0x413d81:c.instructions+=3;goto B413d81;
case 0x413d83:c.instructions+=2;goto B413d83;
case 0x413d85:c.instructions+=1;goto B413d85;
case 0x413d87:goto L413d87;
case 0x413d8a:c.instructions+=4;goto B413d8a;
case 0x413d8e:c.instructions+=3;goto B413d8e;
case 0x413d90:c.instructions+=2;goto B413d90;
case 0x413d92:c.instructions+=1;goto B413d92;
case 0x413d98:goto L413d98;
case 0x413d9d:c.instructions+=1;goto B413d9d;
case 0x413da2:goto L413da2;
case 0x413da4:c.instructions+=1;goto B413da4;
case 0x413da6:goto L413da6;
case 0x413dae:c.instructions+=2;goto B413dae;
case 0x413db6:c.instructions+=1;goto B413db6;
case 0x413db8:goto L413db8;
case 0x413dc0:goto L413dc0;
case 0x413dc6:c.instructions+=2;goto B413dc6;
case 0x413dcb:c.instructions+=1;goto B413dcb;
case 0x413dd0:goto L413dd0;
case 0x413dd4:c.instructions+=3;goto B413dd4;
case 0x413dd6:c.instructions+=2;goto B413dd6;
case 0x413dd9:c.instructions+=1;goto B413dd9;
case 0x413ddf:goto L413ddf;
case 0x413de0:c.instructions+=7;goto B413de0;
case 0x413de1:c.instructions+=6;goto B413de1;
case 0x413de3:c.instructions+=5;goto B413de3;
case 0x413de4:c.instructions+=4;goto B413de4;
case 0x413de6:c.instructions+=3;goto B413de6;
case 0x413de7:c.instructions+=2;goto B413de7;
case 0x413dea:c.instructions+=1;goto B413dea;
case 0x413ded:goto L413ded;
case 0x413df0:c.instructions+=8;goto B413df0;
case 0x413df3:c.instructions+=7;goto B413df3;
case 0x413df7:c.instructions+=6;goto B413df7;
case 0x413dfd:c.instructions+=5;goto B413dfd;
case 0x413e01:c.instructions+=4;goto B413e01;
case 0x413e03:c.instructions+=3;goto B413e03;
case 0x413e05:c.instructions+=2;goto B413e05;
case 0x413e08:c.instructions+=1;goto B413e08;
case 0x413e0e:goto L413e0e;
case 0x413e0f:c.instructions+=7;goto B413e0f;
case 0x413e10:c.instructions+=6;goto B413e10;
case 0x413e12:c.instructions+=5;goto B413e12;
case 0x413e13:c.instructions+=4;goto B413e13;
case 0x413e15:c.instructions+=3;goto B413e15;
case 0x413e16:c.instructions+=2;goto B413e16;
case 0x413e19:c.instructions+=1;goto B413e19;
case 0x413e1c:goto L413e1c;
case 0x413e20:c.instructions+=3;goto B413e20;
case 0x413e21:c.instructions+=2;goto B413e21;
case 0x413e22:c.instructions+=1;goto B413e22;
case 0x413e27:goto L413e27;
case 0x413e28:c.instructions+=6;goto B413e28;
case 0x413e29:c.instructions+=5;goto B413e29;
case 0x413e2a:c.instructions+=4;goto B413e2a;
case 0x413e2c:c.instructions+=3;goto B413e2c;
case 0x413e2d:c.instructions+=2;goto B413e2d;
case 0x413e30:c.instructions+=1;goto B413e30;
case 0x413e33:goto L413e33;
case 0x413e37:c.instructions+=2;goto B413e37;
case 0x413e39:c.instructions+=1;goto B413e39;
case 0x413e3c:goto L413e3c;
case 0x413e3e:c.instructions+=1;goto B413e3e;
case 0x413e40:goto L413e40;
case 0x413e43:c.instructions+=2;goto B413e43;
case 0x413e45:c.instructions+=1;goto B413e45;
case 0x413e47:goto L413e47;
case 0x413e4c:goto L413e4c;
case 0x413e52:c.instructions+=2;goto B413e52;
case 0x413e57:c.instructions+=1;goto B413e57;
case 0x413e5c:goto L413e5c;
case 0x413e5f:c.instructions+=6;goto B413e5f;
case 0x413e65:c.instructions+=5;goto B413e65;
case 0x413e6c:c.instructions+=4;goto B413e6c;
case 0x413e6e:c.instructions+=3;goto B413e6e;
case 0x413e70:c.instructions+=2;goto B413e70;
case 0x413e73:c.instructions+=1;goto B413e73;
case 0x413e75:goto L413e75;
case 0x413e78:c.instructions+=3;goto B413e78;
case 0x413e7a:c.instructions+=2;goto B413e7a;
case 0x413e7d:c.instructions+=1;goto B413e7d;
case 0x413e7f:goto L413e7f;
case 0x413e82:c.instructions+=3;goto B413e82;
case 0x413e84:c.instructions+=2;goto B413e84;
case 0x413e87:c.instructions+=1;goto B413e87;
case 0x413e89:goto L413e89;
case 0x413e8a:c.instructions+=6;goto B413e8a;
case 0x413e8b:c.instructions+=5;goto B413e8b;
case 0x413e8c:c.instructions+=4;goto B413e8c;
case 0x413e8e:c.instructions+=3;goto B413e8e;
case 0x413e8f:c.instructions+=2;goto B413e8f;
case 0x413e92:c.instructions+=1;goto B413e92;
case 0x413e95:goto L413e95;
case 0x413e97:c.instructions+=1;goto B413e97;
case 0x413e99:goto L413e99;
case 0x413e9c:c.instructions+=13;goto B413e9c;
case 0x413e9e:c.instructions+=12;goto B413e9e;
case 0x413ea1:c.instructions+=11;goto B413ea1;
case 0x413ea3:c.instructions+=10;goto B413ea3;
case 0x413ea5:c.instructions+=9;goto B413ea5;
case 0x413ea6:c.instructions+=8;goto B413ea6;
case 0x413ea8:c.instructions+=7;goto B413ea8;
case 0x413ea9:c.instructions+=6;goto B413ea9;
case 0x413eab:c.instructions+=5;goto B413eab;
case 0x413eac:c.instructions+=4;goto B413eac;
case 0x413eae:c.instructions+=3;goto B413eae;
case 0x413eaf:c.instructions+=2;goto B413eaf;
case 0x413eb2:c.instructions+=1;goto B413eb2;
case 0x413eb5:goto L413eb5;
case 0x413eb7:goto L413eb7;
case 0x413eba:c.instructions+=11;goto B413eba;
case 0x413ebd:c.instructions+=10;goto B413ebd;
case 0x413ebf:c.instructions+=9;goto B413ebf;
case 0x413ec0:c.instructions+=8;goto B413ec0;
case 0x413ec2:c.instructions+=7;goto B413ec2;
case 0x413ec3:c.instructions+=6;goto B413ec3;
case 0x413ec5:c.instructions+=5;goto B413ec5;
case 0x413ec6:c.instructions+=4;goto B413ec6;
case 0x413ec8:c.instructions+=3;goto B413ec8;
case 0x413ec9:c.instructions+=2;goto B413ec9;
case 0x413ecc:c.instructions+=1;goto B413ecc;
case 0x413ecf:goto L413ecf;
case 0x413ed3:c.instructions+=7;goto B413ed3;
case 0x413ed6:c.instructions+=6;goto B413ed6;
case 0x413ed8:c.instructions+=5;goto B413ed8;
case 0x413edc:c.instructions+=4;goto B413edc;
case 0x413edf:c.instructions+=3;goto B413edf;
case 0x413ee2:c.instructions+=2;goto B413ee2;
case 0x413ee5:c.instructions+=1;goto B413ee5;
case 0x413ee7:goto L413ee7;
case 0x413ee9:c.instructions+=1;goto B413ee9;
case 0x413eeb:goto L413eeb;
case 0x413eef:goto L413eef;
case 0x413ef5:c.instructions+=5;goto B413ef5;
case 0x413efb:c.instructions+=4;goto B413efb;
case 0x413efe:c.instructions+=3;goto B413efe;
case 0x413f00:c.instructions+=2;goto B413f00;
case 0x413f02:c.instructions+=1;goto B413f02;
case 0x413f04:goto L413f04;
case 0x413f06:c.instructions+=1;goto B413f06;
case 0x413f08:goto L413f08;
case 0x413f0b:c.instructions+=4;goto B413f0b;
case 0x413f0e:c.instructions+=3;goto B413f0e;
case 0x413f0f:c.instructions+=2;goto B413f0f;
case 0x413f11:c.instructions+=1;goto B413f11;
case 0x413f13:goto L413f13;
case 0x413f15:c.instructions+=3;goto B413f15;
case 0x413f17:c.instructions+=2;goto B413f17;
case 0x413f19:c.instructions+=1;goto B413f19;
case 0x413f1b:goto L413f1b;
case 0x413f20:goto L413f20;
case 0x413f22:c.instructions+=1;goto B413f22;
case 0x413f24:goto L413f24;
case 0x413f27:c.instructions+=4;goto B413f27;
case 0x413f2a:c.instructions+=3;goto B413f2a;
case 0x413f2b:c.instructions+=2;goto B413f2b;
case 0x413f2d:c.instructions+=1;goto B413f2d;
case 0x413f2f:goto L413f2f;
case 0x413f31:c.instructions+=1;goto B413f31;
case 0x413f33:goto L413f33;
case 0x413f37:c.instructions+=3;goto B413f37;
case 0x413f3a:c.instructions+=2;goto B413f3a;
case 0x413f3c:c.instructions+=1;goto B413f3c;
case 0x413f3e:goto L413f3e;
case 0x413f43:goto L413f43;
case 0x413f44:c.instructions+=6;goto B413f44;
case 0x413f45:c.instructions+=5;goto B413f45;
case 0x413f46:c.instructions+=4;goto B413f46;
case 0x413f48:c.instructions+=3;goto B413f48;
case 0x413f49:c.instructions+=2;goto B413f49;
case 0x413f4c:c.instructions+=1;goto B413f4c;
case 0x413f50:goto L413f50;
case 0x413f51:c.instructions+=4;goto B413f51;
case 0x413f55:c.instructions+=3;goto B413f55;
case 0x413f56:c.instructions+=2;goto B413f56;
case 0x413f58:c.instructions+=1;goto B413f58;
case 0x413f5d:goto L413f5d;
case 0x413f5f:c.instructions+=3;goto B413f5f;
case 0x413f61:c.instructions+=2;goto B413f61;
case 0x413f63:c.instructions+=1;goto B413f63;
case 0x413f68:goto L413f68;
case 0x413f6a:c.instructions+=1;goto B413f6a;
case 0x413f6c:goto L413f6c;
case 0x413f6d:c.instructions+=3;goto B413f6d;
case 0x413f6f:c.instructions+=2;goto B413f6f;
case 0x413f70:c.instructions+=1;goto B413f70;
case 0x413f73:goto L413f73;
case 0x413f74:c.instructions+=6;goto B413f74;
case 0x413f77:c.instructions+=5;goto B413f77;
case 0x413f79:c.instructions+=4;goto B413f79;
case 0x413f7b:c.instructions+=3;goto B413f7b;
case 0x413f7e:c.instructions+=2;goto B413f7e;
case 0x413f81:c.instructions+=1;goto B413f81;
case 0x413f87:goto L413f87;
case 0x413f8a:c.instructions+=1;goto B413f8a;
case 0x413f90:goto L413f90;
case 0x413f92:c.instructions+=1;goto B413f92;
case 0x413f94:goto L413f94;
case 0x413f97:c.instructions+=3;goto B413f97;
case 0x413f9a:c.instructions+=2;goto B413f9a;
case 0x413f9d:c.instructions+=1;goto B413f9d;
case 0x413fa3:goto L413fa3;
case 0x413fa5:c.instructions+=4;goto B413fa5;
case 0x413fa7:c.instructions+=3;goto B413fa7;
case 0x413fa9:c.instructions+=2;goto B413fa9;
case 0x413fad:c.instructions+=1;goto B413fad;
case 0x413fb3:goto L413fb3;
case 0x413fb5:c.instructions+=3;goto B413fb5;
case 0x413fb8:c.instructions+=2;goto B413fb8;
case 0x413fbb:c.instructions+=1;goto B413fbb;
case 0x413fc1:goto L413fc1;
case 0x413fc6:c.instructions+=2;goto B413fc6;
case 0x413fca:c.instructions+=1;goto B413fca;
case 0x413fcc:goto L413fcc;
case 0x413fd2:c.instructions+=1;goto B413fd2;
case 0x413fd4:goto L413fd4;
case 0x413fd6:goto L413fd6;
case 0x413fd8:c.instructions+=6;goto B413fd8;
case 0x413fdc:c.instructions+=5;goto B413fdc;
case 0x413fdf:c.instructions+=4;goto B413fdf;
case 0x413fe0:c.instructions+=3;goto B413fe0;
case 0x413fe3:c.instructions+=2;goto B413fe3;
case 0x413fe4:c.instructions+=1;goto B413fe4;
case 0x413fe9:goto L413fe9;
case 0x413fef:c.instructions+=4;goto B413fef;
case 0x413ff2:c.instructions+=3;goto B413ff2;
case 0x413ff4:c.instructions+=2;goto B413ff4;
case 0x413ff7:c.instructions+=1;goto B413ff7;
case 0x413ff9:goto L413ff9;
case 0x413fff:c.instructions+=1;goto B413fff;
default:missing_instruction(c.pc);}
B413000:L413000:{c.instructions+=1;NFSU2_TR(0x413000);
{goto L413004;}
}
B413002:L413002:{c.instructions+=1;NFSU2_TR(0x413002);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B413004:L413004:{c.instructions+=7;NFSU2_TR(0x413004);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413007:{NFSU2_TR(0x413007);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41300a:{NFSU2_TR(0x41300a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41300d:{NFSU2_TR(0x41300d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B41300e:{NFSU2_TR(0x41300e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B413011:{NFSU2_TR(0x413011);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B413014:{NFSU2_TR(0x413014);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x412fe2u,412);}
}
B413016:L413016:{c.instructions+=6;NFSU2_TR(0x413016);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413017:{NFSU2_TR(0x413017);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413018:{NFSU2_TR(0x413018);
w4(R+4,u32(0x85ef70ull));
}
B41301d:{NFSU2_TR(0x41301d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41301e:{NFSU2_TR(0x41301e);
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
B413021:{NFSU2_TR(0x413021);
TAIL_STATIC(0x500d70u,500);
}
B413030:L413030:{c.instructions+=7;NFSU2_TR(0x413030);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413031:{NFSU2_TR(0x413031);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B413036:{NFSU2_TR(0x413036);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413037:{NFSU2_TR(0x413037);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B413039:{NFSU2_TR(0x413039);
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
B41303b:{NFSU2_TR(0x41303b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41303f:{NFSU2_TR(0x41303f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413095;}}
}
B413041:L413041:{c.instructions+=2;NFSU2_TR(0x413041);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413042:{NFSU2_TR(0x413042);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413043:L413043:{c.instructions+=4;NFSU2_TR(0x413043);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B41304a:{NFSU2_TR(0x41304a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41304e:{NFSU2_TR(0x41304e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41304f:{NFSU2_TR(0x41304f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413054ull));
TAIL_STATIC(0x40c030u,40c);
}
B413054:L413054:{c.instructions+=3;NFSU2_TR(0x413054);
__builtin_memmove((R+24),(R+0),4);
}
B413056:{NFSU2_TR(0x413056);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413058:{NFSU2_TR(0x413058);
if(r1(R+518)){{goto L413077;}}
}
B41305a:L41305a:{c.instructions+=3;NFSU2_TR(0x41305a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41305b:{NFSU2_TR(0x41305b);
w4(R+4,u32(0x85ef70ull));
}
B413060:{NFSU2_TR(0x413060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413065ull));
TAIL_STATIC(0x513e00u,513);
}
B413065:L413065:{c.instructions+=2;NFSU2_TR(0x413065);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413067:{NFSU2_TR(0x413067);
if(r1(R+518)){{goto L413077;}}
}
B413069:L413069:{c.instructions+=3;NFSU2_TR(0x413069);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41306b:{NFSU2_TR(0x41306b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41306c:{NFSU2_TR(0x41306c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413071ull));
TAIL_STATIC(0x60f530u,60f);
}
B413071:L413071:{c.instructions+=3;NFSU2_TR(0x413071);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B413074:{NFSU2_TR(0x413074);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413075:{NFSU2_TR(0x413075);
{goto L413079;}
}
B413077:L413077:{c.instructions+=1;NFSU2_TR(0x413077);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413079:L413079:{c.instructions+=2;NFSU2_TR(0x413079);
w4(R+4,u32(0x85ef70ull));
}
B41307e:{NFSU2_TR(0x41307e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413083ull));
TAIL_STATIC(0x500d20u,500);
}
B413083:L413083:{c.instructions+=5;NFSU2_TR(0x413083);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x250ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413089:{NFSU2_TR(0x413089);
__builtin_memmove((R+0),gp(0x8900bc),4);
}
B41308e:{NFSU2_TR(0x41308e);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B41308f:{NFSU2_TR(0x41308f);
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
B413091:{NFSU2_TR(0x413091);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413043u);}goto L413043;}}
}
B413093:L413093:{c.instructions+=2;NFSU2_TR(0x413093);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413094:{NFSU2_TR(0x413094);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413095:L413095:{c.instructions+=3;NFSU2_TR(0x413095);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413096:{NFSU2_TR(0x413096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B413097:{NFSU2_TR(0x413097);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4130a0:L4130a0:{c.instructions+=24;NFSU2_TR(0x4130a0);
__builtin_memmove((R+0),(R+4),4);
}
B4130a2:{NFSU2_TR(0x4130a2);
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
B4130a4:{NFSU2_TR(0x4130a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16e0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130aa:{NFSU2_TR(0x4130aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16e4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130b0:{NFSU2_TR(0x4130b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1798ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4130b6:{NFSU2_TR(0x4130b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1799ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4130bc:{NFSU2_TR(0x4130bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x179aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4130c2:{NFSU2_TR(0x4130c2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x179bull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4130c8:{NFSU2_TR(0x4130c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x179cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4130ce:{NFSU2_TR(0x4130ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130d4:{NFSU2_TR(0x4130d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130da:{NFSU2_TR(0x4130da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4130dc:{NFSU2_TR(0x4130dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4130e3:{NFSU2_TR(0x4130e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130e9:{NFSU2_TR(0x4130e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130ef:{NFSU2_TR(0x4130ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130f5:{NFSU2_TR(0x4130f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4130fb:{NFSU2_TR(0x4130fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413101:{NFSU2_TR(0x413101);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413107:{NFSU2_TR(0x413107);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17acull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41310d:{NFSU2_TR(0x41310d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x17a4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413113:{NFSU2_TR(0x413113);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413116:{NFSU2_TR(0x413116);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413119:{NFSU2_TR(0x413119);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413120:L413120:{c.instructions+=7;NFSU2_TR(0x413120);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413124:{NFSU2_TR(0x413124);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413125:{NFSU2_TR(0x413125);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B413128:{NFSU2_TR(0x413128);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41312b:{NFSU2_TR(0x41312b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41312d:{NFSU2_TR(0x41312d);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413130:{NFSU2_TR(0x413130);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413139;}}
}
B413132:L413132:{c.instructions+=2;NFSU2_TR(0x413132);
w4(R+8,u32(0x2ull));
}
B413137:{NFSU2_TR(0x413137);
{goto L413143;}
}
B413139:L413139:{c.instructions+=2;NFSU2_TR(0x413139);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41313c:{NFSU2_TR(0x41313c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413143;}}
}
B41313e:L41313e:{c.instructions+=1;NFSU2_TR(0x41313e);
w4(R+8,u32(0x1ull));
}
B413143:L413143:{c.instructions+=10;NFSU2_TR(0x413143);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413144:{NFSU2_TR(0x413144);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413146:{NFSU2_TR(0x413146);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413147:{NFSU2_TR(0x413147);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41314b:{NFSU2_TR(0x41314b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41314c:{NFSU2_TR(0x41314c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B413152:{NFSU2_TR(0x413152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413153:{NFSU2_TR(0x413153);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B413156:{NFSU2_TR(0x413156);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413157:{NFSU2_TR(0x413157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41315cull));
TAIL_STATIC(0x40c440u,40c);
}
B41315c:L41315c:{c.instructions+=2;NFSU2_TR(0x41315c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41315d:{NFSU2_TR(0x41315d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413160:L413160:{c.instructions+=8;NFSU2_TR(0x413160);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413161:{NFSU2_TR(0x413161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413162:{NFSU2_TR(0x413162);
__builtin_memmove((R+24),(R+4),4);
}
B413164:{NFSU2_TR(0x413164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41316a:{NFSU2_TR(0x41316a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41316b:{NFSU2_TR(0x41316b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41316d:{NFSU2_TR(0x41316d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41316f:{NFSU2_TR(0x41316f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413197;}}
}
B413171:L413171:{c.instructions+=1;NFSU2_TR(0x413171);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413174:L413174:{c.instructions+=3;NFSU2_TR(0x413174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413176:{NFSU2_TR(0x413176);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413178:{NFSU2_TR(0x413178);
if(r1(R+518)){{goto L413189;}}
}
B41317a:L41317a:{c.instructions+=4;NFSU2_TR(0x41317a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41317b:{NFSU2_TR(0x41317b);
__builtin_memmove((R+0),gp(0x81cbb8),4);
}
B413180:{NFSU2_TR(0x413180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413181:{NFSU2_TR(0x413181);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413186ull));
TAIL_STATIC(0x43f920u,43f);
}
B413186:L413186:{c.instructions+=1;NFSU2_TR(0x413186);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B413189:L413189:{c.instructions+=5;NFSU2_TR(0x413189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41318f:{NFSU2_TR(0x41318f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B413190:{NFSU2_TR(0x413190);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B413193:{NFSU2_TR(0x413193);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B413195:{NFSU2_TR(0x413195);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413174u);}goto L413174;}}
}
B413197:L413197:{c.instructions+=5;NFSU2_TR(0x413197);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41319d:{NFSU2_TR(0x41319d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B41319f:{NFSU2_TR(0x41319f);
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
B4131a1:{NFSU2_TR(0x4131a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4131ab:{NFSU2_TR(0x4131ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4131d3;}}
}
B4131ad:L4131ad:{c.instructions+=1;NFSU2_TR(0x4131ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4131b3:L4131b3:{c.instructions+=5;NFSU2_TR(0x4131b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4131b5:{NFSU2_TR(0x4131b5);
__builtin_memmove((R+8),gp(0x81cbbc),4);
}
B4131bb:{NFSU2_TR(0x4131bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4131bc:{NFSU2_TR(0x4131bc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4131bd:{NFSU2_TR(0x4131bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4131c2ull));
TAIL_STATIC(0x43f920u,43f);
}
B4131c2:L4131c2:{c.instructions+=6;NFSU2_TR(0x4131c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4131c8:{NFSU2_TR(0x4131c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4131cb:{NFSU2_TR(0x4131cb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4131cc:{NFSU2_TR(0x4131cc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B4131cf:{NFSU2_TR(0x4131cf);
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
B4131d1:{NFSU2_TR(0x4131d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4131b3u);}goto L4131b3;}}
}
B4131d3:L4131d3:{c.instructions+=5;NFSU2_TR(0x4131d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4131d4:{NFSU2_TR(0x4131d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4131de:{NFSU2_TR(0x4131de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4131df:{NFSU2_TR(0x4131df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4131e0:{NFSU2_TR(0x4131e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4131f0:L4131f0:{c.instructions+=7;NFSU2_TR(0x4131f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4131f1:{NFSU2_TR(0x4131f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4131f2:{NFSU2_TR(0x4131f2);
__builtin_memmove((R+24),(R+4),4);
}
B4131f4:{NFSU2_TR(0x4131f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4131fa:{NFSU2_TR(0x4131fa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4131fc:{NFSU2_TR(0x4131fc);
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
B4131fe:{NFSU2_TR(0x4131fe);
if(r1(R+518)){{goto L413210;}}
}
B413200:L413200:{c.instructions+=5;NFSU2_TR(0x413200);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413203:{NFSU2_TR(0x413203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413205:{NFSU2_TR(0x413205);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413206:{NFSU2_TR(0x413206);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413207:{NFSU2_TR(0x413207);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41320aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41320a:L41320a:{c.instructions+=1;NFSU2_TR(0x41320a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413210:L413210:{c.instructions+=2;NFSU2_TR(0x413210);
__builtin_memmove((R+4),(R+24),4);
}
B413212:{NFSU2_TR(0x413212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413217ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413160u);}goto L413160;}
}
B413217:L413217:{c.instructions+=12;NFSU2_TR(0x413217);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B413219:{NFSU2_TR(0x413219);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41321f:{NFSU2_TR(0x41321f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16c8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413225:{NFSU2_TR(0x413225);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41322b:{NFSU2_TR(0x41322b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16d4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413231:{NFSU2_TR(0x413231);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17a0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413237:{NFSU2_TR(0x413237);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41323a:{NFSU2_TR(0x41323a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41323d:{NFSU2_TR(0x41323d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B413244:{NFSU2_TR(0x413244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413245:{NFSU2_TR(0x413245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413246:{NFSU2_TR(0x413246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413250:L413250:{c.instructions+=9;NFSU2_TR(0x413250);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413251:{NFSU2_TR(0x413251);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B413255:{NFSU2_TR(0x413255);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413256:{NFSU2_TR(0x413256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413257:{NFSU2_TR(0x413257);
__builtin_memmove((R+28),(R+4),4);
}
B413259:{NFSU2_TR(0x413259);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41325c:{NFSU2_TR(0x41325c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41325d:{NFSU2_TR(0x41325d);
__builtin_memmove((R+4),(R+12),4);
}
B41325f:{NFSU2_TR(0x41325f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413264ull));
TAIL_STATIC(0x40cd00u,40c);
}
B413264:L413264:{c.instructions+=4;NFSU2_TR(0x413264);
{u32 ea_=u32(u32(7880000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41326a:{NFSU2_TR(0x41326a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41326c:{NFSU2_TR(0x41326c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41326f:{NFSU2_TR(0x41326f);
if(r1(R+514)){{goto L4132b8;}}
}
B413271:L413271:{c.instructions+=3;NFSU2_TR(0x413271);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413272:{NFSU2_TR(0x413272);
__builtin_memmove((R+4),(R+12),4);
}
B413274:{NFSU2_TR(0x413274);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413279ull));
TAIL_STATIC(0x40ce90u,40c);
}
B413279:L413279:{c.instructions+=4;NFSU2_TR(0x413279);
{u32 ea_=u32(u32(7880000u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B41327f:{NFSU2_TR(0x41327f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413281:{NFSU2_TR(0x413281);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413284:{NFSU2_TR(0x413284);
if(r1(R+514)){{goto L4132b8;}}
}
B413286:L413286:{c.instructions+=11;NFSU2_TR(0x413286);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41328a:{NFSU2_TR(0x41328a);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B41328d:{NFSU2_TR(0x41328d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413291:{NFSU2_TR(0x413291);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B413295:{NFSU2_TR(0x413295);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41329b:{NFSU2_TR(0x41329b);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41329e:{NFSU2_TR(0x41329e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4132a0:{NFSU2_TR(0x4132a0);
{u32 ea_=u32(u32(7880004u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4132a6:{NFSU2_TR(0x4132a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4132a8:{NFSU2_TR(0x4132a8);
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
B4132ab:{NFSU2_TR(0x4132ab);
if(r1(R+514)){{goto L4132b8;}}
}
B4132ad:L4132ad:{c.instructions+=5;NFSU2_TR(0x4132ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4132ae:{NFSU2_TR(0x4132ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4132af:{NFSU2_TR(0x4132af);
w4(R+0,u32(0x1ull));
}
B4132b4:{NFSU2_TR(0x4132b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4132b5:{NFSU2_TR(0x4132b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4132b8:L4132b8:{c.instructions+=5;NFSU2_TR(0x4132b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4132b9:{NFSU2_TR(0x4132b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4132ba:{NFSU2_TR(0x4132ba);
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
B4132bc:{NFSU2_TR(0x4132bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4132bd:{NFSU2_TR(0x4132bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4132c0:L4132c0:{c.instructions+=5;NFSU2_TR(0x4132c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4132c4:{NFSU2_TR(0x4132c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4132c5:{NFSU2_TR(0x4132c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4132c9:{NFSU2_TR(0x4132c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4132ca:{NFSU2_TR(0x4132ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4132cfull));
TAIL_STATIC(0x40c840u,40c);
}
B4132cf:L4132cf:{c.instructions+=2;NFSU2_TR(0x4132cf);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4132d3:{NFSU2_TR(0x4132d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4132e0:L4132e0:{c.instructions+=5;NFSU2_TR(0x4132e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4132e6:{NFSU2_TR(0x4132e6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4132e8:{NFSU2_TR(0x4132e8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4132ea:{NFSU2_TR(0x4132ea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4132eb:{NFSU2_TR(0x4132eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413301;}}
}
B4132ed:L4132ed:{c.instructions+=3;NFSU2_TR(0x4132ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4132f3:{NFSU2_TR(0x4132f3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4132f9:{NFSU2_TR(0x4132f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413301;}}
}
B4132fb:L4132fb:{c.instructions+=3;NFSU2_TR(0x4132fb);
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
B4132fd:{NFSU2_TR(0x4132fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4132fe:{NFSU2_TR(0x4132fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413301:L413301:{c.instructions+=18;NFSU2_TR(0x413301);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413307:{NFSU2_TR(0x413307);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41330b:{NFSU2_TR(0x41330b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B41330e:{NFSU2_TR(0x41330e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B413311:{NFSU2_TR(0x413311);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413312:{NFSU2_TR(0x413312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B413314:{NFSU2_TR(0x413314);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B413316:{NFSU2_TR(0x413316);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B413319:{NFSU2_TR(0x413319);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41331c:{NFSU2_TR(0x41331c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41331f:{NFSU2_TR(0x41331f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413322:{NFSU2_TR(0x413322);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B413328:{NFSU2_TR(0x413328);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B413329:{NFSU2_TR(0x413329);
__builtin_memmove((R+0),(R+24),4);
}
B41332b:{NFSU2_TR(0x41332b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x14ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x14ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41332e:{NFSU2_TR(0x41332e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413334:{NFSU2_TR(0x413334);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413335:{NFSU2_TR(0x413335);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41333d;}}
}
B413337:L413337:{c.instructions+=1;NFSU2_TR(0x413337);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41333d:L41333d:{c.instructions+=4;NFSU2_TR(0x41333d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413343:{NFSU2_TR(0x413343);
w1(R+0,u8(0x1ull));
}
B413345:{NFSU2_TR(0x413345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413346:{NFSU2_TR(0x413346);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413350:L413350:{c.instructions+=6;NFSU2_TR(0x413350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413351:{NFSU2_TR(0x413351);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413352:{NFSU2_TR(0x413352);
__builtin_memmove((R+28),(R+4),4);
}
B413354:{NFSU2_TR(0x413354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B413356:{NFSU2_TR(0x413356);
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
B413358:{NFSU2_TR(0x413358);
if(r1(R+518)){{goto L413380;}}
}
B41335a:L41335a:{c.instructions+=1;NFSU2_TR(0x41335a);
__builtin_memmove((R+12),(R+12),4);
}
B413360:L413360:{c.instructions+=6;NFSU2_TR(0x413360);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413363:{NFSU2_TR(0x413363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413365:{NFSU2_TR(0x413365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B413367:{NFSU2_TR(0x413367);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41336a:{NFSU2_TR(0x41336a);
__builtin_memmove((R+4),(R+24),4);
}
B41336c:{NFSU2_TR(0x41336c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413371ull));
TAIL_STATIC(0x50f7d0u,50f);
}
B413371:L413371:{c.instructions+=2;NFSU2_TR(0x413371);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413372:{NFSU2_TR(0x413372);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413377ull));
TAIL_STATIC(0x575630u,575);
}
B413377:L413377:{c.instructions+=4;NFSU2_TR(0x413377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B413379:{NFSU2_TR(0x413379);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B41337c:{NFSU2_TR(0x41337c);
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
B41337e:{NFSU2_TR(0x41337e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413360u);}goto L413360;}}
}
B413380:L413380:{c.instructions+=3;NFSU2_TR(0x413380);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413381:{NFSU2_TR(0x413381);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413382:{NFSU2_TR(0x413382);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413390:L413390:{c.instructions+=17;NFSU2_TR(0x413390);
__builtin_memmove((R+0),(R+4),4);
}
B413392:{NFSU2_TR(0x413392);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413396:{NFSU2_TR(0x413396);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B413398:{NFSU2_TR(0x413398);
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
B413399:{NFSU2_TR(0x413399);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41339d:{NFSU2_TR(0x41339d);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4133a1:{NFSU2_TR(0x4133a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4133a5:{NFSU2_TR(0x4133a5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4133a9:{NFSU2_TR(0x4133a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4133ad:{NFSU2_TR(0x4133ad);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4133b1:{NFSU2_TR(0x4133b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4133b4:{NFSU2_TR(0x4133b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4133b8:{NFSU2_TR(0x4133b8);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4133ba:{NFSU2_TR(0x4133ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4133bd:{NFSU2_TR(0x4133bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4133c0:{NFSU2_TR(0x4133c0);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4133c3:{NFSU2_TR(0x4133c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4133d0:L4133d0:{c.instructions+=9;NFSU2_TR(0x4133d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B4133d3:{NFSU2_TR(0x4133d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4133d4:{NFSU2_TR(0x4133d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4133d5:{NFSU2_TR(0x4133d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4133d6:{NFSU2_TR(0x4133d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4133da:{NFSU2_TR(0x4133da);
__builtin_memmove((R+0),(R+4),4);
}
B4133dc:{NFSU2_TR(0x4133dc);
__builtin_memmove((R+8),(R+28),4);
}
B4133de:{NFSU2_TR(0x4133de);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4133e0:{NFSU2_TR(0x4133e0);
w4(R+24,u32(0x3full));
}
B4133e5:L4133e5:{c.instructions+=5;NFSU2_TR(0x4133e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B4133e8:{NFSU2_TR(0x4133e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4133ea:{NFSU2_TR(0x4133ea);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4133ed:{NFSU2_TR(0x4133ed);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B4133ee:{NFSU2_TR(0x4133ee);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4133e5u);}goto L4133e5;}}
}
B4133f0:L4133f0:{c.instructions+=12;NFSU2_TR(0x4133f0);
{u32 ea_=u32(r4(R+28)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4133f6:{NFSU2_TR(0x4133f6);
w4(R+4,u32(0x5ull));
}
B4133fb:{NFSU2_TR(0x4133fb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4133ff:{NFSU2_TR(0x4133ff);
{u32 ea_=u32(r4(R+28)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B413405:{NFSU2_TR(0x413405);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41340b:{NFSU2_TR(0x41340b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41340f:{NFSU2_TR(0x41340f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B413413:{NFSU2_TR(0x413413);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B413417:{NFSU2_TR(0x413417);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41341f:{NFSU2_TR(0x41341f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413423:{NFSU2_TR(0x413423);
{u32 ea_=u32(u32(7884980u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B413429:{NFSU2_TR(0x413429);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41342d:L41342d:{c.instructions+=1;NFSU2_TR(0x41342d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41342f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41342du);}goto L41342d;}
}
B41342f:L41342f:{c.instructions+=5;NFSU2_TR(0x41342f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413430:{NFSU2_TR(0x413430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413431:{NFSU2_TR(0x413431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413432:{NFSU2_TR(0x413432);
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
B413435:{NFSU2_TR(0x413435);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413440:L413440:{c.instructions+=22;NFSU2_TR(0x413440);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413441:{NFSU2_TR(0x413441);
__builtin_memmove((R+12),(R+4),4);
}
B413443:{NFSU2_TR(0x413443);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413444:{NFSU2_TR(0x413444);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B413448:{NFSU2_TR(0x413448);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41344b:{NFSU2_TR(0x41344b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B41344d:{NFSU2_TR(0x41344d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B413450:{NFSU2_TR(0x413450);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413453:{NFSU2_TR(0x413453);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B413456:{NFSU2_TR(0x413456);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413459:{NFSU2_TR(0x413459);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B41345c:{NFSU2_TR(0x41345c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41345d:{NFSU2_TR(0x41345d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413460:{NFSU2_TR(0x413460);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B413463:{NFSU2_TR(0x413463);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413464:{NFSU2_TR(0x413464);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413467:{NFSU2_TR(0x413467);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41346a:{NFSU2_TR(0x41346a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B41346d:{NFSU2_TR(0x41346d);
__builtin_memmove((R+24),(R+8),4);
}
B41346f:{NFSU2_TR(0x41346f);
__builtin_memmove((R+28),(R+0),4);
}
B413471:{NFSU2_TR(0x413471);
w4(R+4,u32(0x15cull));
}
B413476:{NFSU2_TR(0x413476);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x45cull))));
}
B41347c:L41347c:{c.instructions+=1;NFSU2_TR(0x41347c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L41347e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41347cu);}goto L41347c;}
}
B41347e:L41347e:{c.instructions+=3;NFSU2_TR(0x41347e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41347f:{NFSU2_TR(0x41347f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x45cull))));
__builtin_memmove((R+4),(U+0),4);
}
B413485:{NFSU2_TR(0x413485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41348aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4133d0u);}goto L4133d0;}
}
B41348a:L41348a:{c.instructions+=8;NFSU2_TR(0x41348a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41348d:{NFSU2_TR(0x41348d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2f0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B413493:{NFSU2_TR(0x413493);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413494:{NFSU2_TR(0x413494);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B413497:{NFSU2_TR(0x413497);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413498:{NFSU2_TR(0x413498);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413499:{NFSU2_TR(0x413499);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x384ull))));
__builtin_memmove((R+4),(U+0),4);
}
B41349f:{NFSU2_TR(0x41349f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4134a4ull));
TAIL_STATIC(0x59b060u,59b);
}
B4134a4:L4134a4:{c.instructions+=15;NFSU2_TR(0x4134a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x580ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4134aa:{NFSU2_TR(0x4134aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x580ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4134b0:{NFSU2_TR(0x4134b0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x581ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4134b6:{NFSU2_TR(0x4134b6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x581ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4134bc:{NFSU2_TR(0x4134bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4134c2:{NFSU2_TR(0x4134c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x584ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4134c8:{NFSU2_TR(0x4134c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x588ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4134ce:{NFSU2_TR(0x4134ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x588ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4134d4:{NFSU2_TR(0x4134d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4134da:{NFSU2_TR(0x4134da);
__builtin_memmove((R+4),(R+20),4);
}
B4134dc:{NFSU2_TR(0x4134dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4134e2:{NFSU2_TR(0x4134e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x590ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4134e8:{NFSU2_TR(0x4134e8);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B4134ea:{NFSU2_TR(0x4134ea);
w4(R+8,u32(0xaaull));
}
B4134ef:{NFSU2_TR(0x4134ef);
}
B4134f0:L4134f0:{c.instructions+=5;NFSU2_TR(0x4134f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B4134f3:{NFSU2_TR(0x4134f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4134f5:{NFSU2_TR(0x4134f5);
w1(R+512,carry<u32>(r4(R+0),u32(0x4ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4134f8:{NFSU2_TR(0x4134f8);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B4134f9:{NFSU2_TR(0x4134f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4134f0u);}goto L4134f0;}}
}
B4134fb:L4134fb:{c.instructions+=2;NFSU2_TR(0x4134fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x838ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413501:{NFSU2_TR(0x413501);
w4(R+28,u32(0xaaull));
}
B413506:L413506:{c.instructions+=5;NFSU2_TR(0x413506);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B413509:{NFSU2_TR(0x413509);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B41350b:{NFSU2_TR(0x41350b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B41350c:{NFSU2_TR(0x41350c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41350d:{NFSU2_TR(0x41350d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413506u);}goto L413506;}}
}
B41350f:L41350f:{c.instructions+=10;NFSU2_TR(0x41350f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413515:{NFSU2_TR(0x413515);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413516:{NFSU2_TR(0x413516);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41351c:{NFSU2_TR(0x41351c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413522:{NFSU2_TR(0x413522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413523:{NFSU2_TR(0x413523);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413524:{NFSU2_TR(0x413524);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8e8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41352a:{NFSU2_TR(0x41352a);
__builtin_memmove((R+0),(R+12),4);
}
B41352c:{NFSU2_TR(0x41352c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41352d:{NFSU2_TR(0x41352d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413530:L413530:{c.instructions+=1;NFSU2_TR(0x413530);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413160u);}goto L413160;}
}
B413540:L413540:{c.instructions+=3;NFSU2_TR(0x413540);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413543:{NFSU2_TR(0x413543);
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
B413545:{NFSU2_TR(0x413545);
if(r1(R+518)){{goto L41356f;}}
}
B413547:L413547:{c.instructions+=5;NFSU2_TR(0x413547);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41354a:{NFSU2_TR(0x41354a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B41354f:{NFSU2_TR(0x41354f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B413556:{NFSU2_TR(0x413556);
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
B413558:{NFSU2_TR(0x413558);
if(r1(R+518)){{goto L41356f;}}
}
B41355a:L41355a:{c.instructions+=5;NFSU2_TR(0x41355a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B41355e:{NFSU2_TR(0x41355e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413562:{NFSU2_TR(0x413562);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ecull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B413569:{NFSU2_TR(0x413569);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41356c:{NFSU2_TR(0x41356c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B41356f:L41356f:{c.instructions+=4;NFSU2_TR(0x41356f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B413573:{NFSU2_TR(0x413573);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ecull))));
w2(U+4,u16(0xffffull));
s2(u32(r4(U+0)),r2(U+4));
}
B41357c:{NFSU2_TR(0x41357c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41357f:{NFSU2_TR(0x41357f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413590:L413590:{c.instructions+=12;NFSU2_TR(0x413590);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413591:{NFSU2_TR(0x413591);
__builtin_memmove((R+20),(R+16),4);
}
B413593:{NFSU2_TR(0x413593);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B413596:{NFSU2_TR(0x413596);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B413599:{NFSU2_TR(0x413599);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41359a:{NFSU2_TR(0x41359a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41359b:{NFSU2_TR(0x41359b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41359c:{NFSU2_TR(0x41359c);
__builtin_memmove((R+28),(R+4),4);
}
B41359e:{NFSU2_TR(0x41359e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4135a1:{NFSU2_TR(0x4135a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4135a3:{NFSU2_TR(0x4135a3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4135a5:{NFSU2_TR(0x4135a5);
if(r1(R+518)){{goto L4135bc;}}
}
B4135a7:L4135a7:{c.instructions+=5;NFSU2_TR(0x4135a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4135aa:{NFSU2_TR(0x4135aa);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B4135af:{NFSU2_TR(0x4135af);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4135b6:{NFSU2_TR(0x4135b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4135ba:{NFSU2_TR(0x4135ba);
{goto L4135c0;}
}
B4135bc:L4135bc:{c.instructions+=1;NFSU2_TR(0x4135bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4135c0:L4135c0:{c.instructions+=12;NFSU2_TR(0x4135c0);
__builtin_memmove((R+8),gp(0x783498),4);
}
B4135c6:{NFSU2_TR(0x4135c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4135c9:{NFSU2_TR(0x4135c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4135cf:{NFSU2_TR(0x4135cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4135d3:{NFSU2_TR(0x4135d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4135d6:{NFSU2_TR(0x4135d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4135da:{NFSU2_TR(0x4135da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4135dd:{NFSU2_TR(0x4135dd);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4135e1:{NFSU2_TR(0x4135e1);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4135e5:{NFSU2_TR(0x4135e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4135e9:{NFSU2_TR(0x4135e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4135ed:{NFSU2_TR(0x4135ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4135f9;}}
}
B4135ef:L4135ef:{c.instructions+=2;NFSU2_TR(0x4135ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4135f7:{NFSU2_TR(0x4135f7);
{goto L413639;}
}
B4135f9:L4135f9:{c.instructions+=4;NFSU2_TR(0x4135f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4135fc:{NFSU2_TR(0x4135fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B413602:{NFSU2_TR(0x413602);
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
B413604:{NFSU2_TR(0x413604);
if(r1(R+518)){{goto L413631;}}
}
B413606:L413606:{c.instructions+=3;NFSU2_TR(0x413606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413608:{NFSU2_TR(0x413608);
__builtin_memmove((R+4),(R+24),4);
}
B41360a:{NFSU2_TR(0x41360a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41360dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41360d:L41360d:{c.instructions+=2;NFSU2_TR(0x41360d);
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
B41360f:{NFSU2_TR(0x41360f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413631;}}
}
B413611:L413611:{c.instructions+=3;NFSU2_TR(0x413611);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B413613:{NFSU2_TR(0x413613);
__builtin_memmove((R+4),(R+24),4);
}
B413615:{NFSU2_TR(0x413615);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413618ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413618:L413618:{c.instructions+=2;NFSU2_TR(0x413618);
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
B41361a:{NFSU2_TR(0x41361a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413631;}}
}
B41361c:L41361c:{c.instructions+=3;NFSU2_TR(0x41361c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B41361e:{NFSU2_TR(0x41361e);
__builtin_memmove((R+4),(R+24),4);
}
B413620:{NFSU2_TR(0x413620);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413623ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413623:L413623:{c.instructions+=2;NFSU2_TR(0x413623);
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
B413625:{NFSU2_TR(0x413625);
if(r1(R+518)){{goto L413639;}}
}
B413627:L413627:{c.instructions+=2;NFSU2_TR(0x413627);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41362f:{NFSU2_TR(0x41362f);
{goto L413639;}
}
B413631:L413631:{c.instructions+=1;NFSU2_TR(0x413631);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B413639:L413639:{c.instructions+=3;NFSU2_TR(0x413639);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B41363b:{NFSU2_TR(0x41363b);
__builtin_memmove((R+4),(R+28),4);
}
B41363d:{NFSU2_TR(0x41363d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413640ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413640:L413640:{c.instructions+=3;NFSU2_TR(0x413640);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413644:{NFSU2_TR(0x413644);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41364c:{NFSU2_TR(0x41364c);
__builtin_memmove((R+16),(R+16),4);
}
B413650:L413650:{c.instructions+=2;NFSU2_TR(0x413650);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B413655:{NFSU2_TR(0x413655);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4137c9;}}
}
B41365b:L41365b:{c.instructions+=4;NFSU2_TR(0x41365b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41365d:{NFSU2_TR(0x41365d);
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
B41365f:{NFSU2_TR(0x41365f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413663:{NFSU2_TR(0x413663);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4137a7;}}
}
B413669:L413669:{c.instructions+=1;NFSU2_TR(0x413669);
__builtin_memmove((R+16),(R+16),4);
}
B413670:L413670:{c.instructions+=4;NFSU2_TR(0x413670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413672:{NFSU2_TR(0x413672);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413673:{NFSU2_TR(0x413673);
__builtin_memmove((R+4),(R+28),4);
}
B413675:{NFSU2_TR(0x413675);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413678ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413678:L413678:{c.instructions+=4;NFSU2_TR(0x413678);
__builtin_memmove((R+24),(R+0),4);
}
B41367a:{NFSU2_TR(0x41367a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41367c:{NFSU2_TR(0x41367c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413680:{NFSU2_TR(0x413680);
if(r1(R+518)){{goto L41378e;}}
}
B413686:L413686:{c.instructions+=3;NFSU2_TR(0x413686);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41368a:{NFSU2_TR(0x41368a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41368c:{NFSU2_TR(0x41368c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4136a2;}}
}
B41368e:L41368e:{c.instructions+=4;NFSU2_TR(0x41368e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413692:{NFSU2_TR(0x413692);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413693:{NFSU2_TR(0x413693);
__builtin_memmove((R+4),(R+24),4);
}
B413695:{NFSU2_TR(0x413695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41369aull));
TAIL_STATIC(0x5d44c0u,5d4);
}
B41369a:L41369a:{c.instructions+=2;NFSU2_TR(0x41369a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41369c:{NFSU2_TR(0x41369c);
if(r1(R+518)){{goto L41378e;}}
}
B4136a2:L4136a2:{c.instructions+=2;NFSU2_TR(0x4136a2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4136a6:{NFSU2_TR(0x4136a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4136bc;}}
}
B4136a8:L4136a8:{c.instructions+=4;NFSU2_TR(0x4136a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4136ac:{NFSU2_TR(0x4136ac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4136ad:{NFSU2_TR(0x4136ad);
__builtin_memmove((R+4),(R+24),4);
}
B4136af:{NFSU2_TR(0x4136af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4136b4ull));
TAIL_STATIC(0x5d4480u,5d4);
}
B4136b4:L4136b4:{c.instructions+=2;NFSU2_TR(0x4136b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4136b6:{NFSU2_TR(0x4136b6);
if(r1(R+518)){{goto L41378e;}}
}
B4136bc:L4136bc:{c.instructions+=10;NFSU2_TR(0x4136bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4136c0:{NFSU2_TR(0x4136c0);
__builtin_memmove((R+4),gp(0x783498),4);
}
B4136c6:{NFSU2_TR(0x4136c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4136c9:{NFSU2_TR(0x4136c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4136cb:{NFSU2_TR(0x4136cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4136cc:{NFSU2_TR(0x4136cc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4136cd:{NFSU2_TR(0x4136cd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B4136d0:{NFSU2_TR(0x4136d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4136d1:{NFSU2_TR(0x4136d1);
__builtin_memmove((R+4),(R+24),4);
}
B4136d3:{NFSU2_TR(0x4136d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4136d8ull));
TAIL_STATIC(0x5e2e40u,5e2);
}
B4136d8:L4136d8:{c.instructions+=3;NFSU2_TR(0x4136d8);
__builtin_memmove((R+24),(R+0),4);
}
B4136da:{NFSU2_TR(0x4136da);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4136dc:{NFSU2_TR(0x4136dc);
if(r1(R+518)){{goto L41378e;}}
}
B4136e2:L4136e2:{c.instructions+=16;NFSU2_TR(0x4136e2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4136e6:{NFSU2_TR(0x4136e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4136e8:{NFSU2_TR(0x4136e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4136eb:{NFSU2_TR(0x4136eb);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B4136ee:{NFSU2_TR(0x4136ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4136f2:{NFSU2_TR(0x4136f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4136f6:{NFSU2_TR(0x4136f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4136f9:{NFSU2_TR(0x4136f9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4136fd:{NFSU2_TR(0x4136fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413701:{NFSU2_TR(0x413701);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B413705:{NFSU2_TR(0x413705);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41370b:{NFSU2_TR(0x41370b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41370c:{NFSU2_TR(0x41370c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41370f:{NFSU2_TR(0x41370f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413710:{NFSU2_TR(0x413710);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B413714:{NFSU2_TR(0x413714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413719ull));
TAIL_STATIC(0x43ce10u,43c);
}
B413719:L413719:{c.instructions+=7;NFSU2_TR(0x413719);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41371d:{NFSU2_TR(0x41371d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B413720:{NFSU2_TR(0x413720);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B413723:{NFSU2_TR(0x413723);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x60ull))));
}
B413726:{NFSU2_TR(0x413726);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413727:{NFSU2_TR(0x413727);
__builtin_memmove((R+4),(R+24),4);
}
B413729:{NFSU2_TR(0x413729);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41372eull));
TAIL_STATIC(0x40cd00u,40c);
}
B41372e:L41372e:{c.instructions+=4;NFSU2_TR(0x41372e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413734:{NFSU2_TR(0x413734);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413736:{NFSU2_TR(0x413736);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413739:{NFSU2_TR(0x413739);
if(r1(R+518)){{goto L413754;}}
}
B41373b:L41373b:{c.instructions+=3;NFSU2_TR(0x41373b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41373c:{NFSU2_TR(0x41373c);
__builtin_memmove((R+4),(R+24),4);
}
B41373e:{NFSU2_TR(0x41373e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413743ull));
TAIL_STATIC(0x40ce90u,40c);
}
B413743:L413743:{c.instructions+=4;NFSU2_TR(0x413743);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413749:{NFSU2_TR(0x413749);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41374b:{NFSU2_TR(0x41374b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41374e:{NFSU2_TR(0x41374e);
if(r1(R+518)){{goto L413754;}}
}
B413750:L413750:{c.instructions+=2;NFSU2_TR(0x413750);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B413752:{NFSU2_TR(0x413752);
{goto L413756;}
}
B413754:L413754:{c.instructions+=1;NFSU2_TR(0x413754);
w1(R+0,u8(0x1ull));
}
B413756:L413756:{c.instructions+=3;NFSU2_TR(0x413756);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B413759:{NFSU2_TR(0x413759);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41375b:{NFSU2_TR(0x41375b);
if(r1(R+518)){{goto L413765;}}
}
B41375d:L41375d:{c.instructions+=3;NFSU2_TR(0x41375d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413761:{NFSU2_TR(0x413761);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413763:{NFSU2_TR(0x413763);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L413769;}}
}
B413765:L413765:{c.instructions+=2;NFSU2_TR(0x413765);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413767:{NFSU2_TR(0x413767);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41378e;}}
}
B413769:L413769:{c.instructions+=5;NFSU2_TR(0x413769);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41376d:{NFSU2_TR(0x41376d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413771:{NFSU2_TR(0x413771);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413773:{NFSU2_TR(0x413773);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413776:{NFSU2_TR(0x413776);
if(r1(R+514)){{goto L41378e;}}
}
B413778:L413778:{c.instructions+=3;NFSU2_TR(0x413778);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41377c:{NFSU2_TR(0x41377c);
u8 U[16];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B413780:{NFSU2_TR(0x413780);
if(r1(R+518)){{goto L41378e;}}
}
B413782:L413782:{c.instructions+=3;NFSU2_TR(0x413782);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413786:{NFSU2_TR(0x413786);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41378a:{NFSU2_TR(0x41378a);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41378e:L41378e:{c.instructions+=6;NFSU2_TR(0x41378e);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413792:{NFSU2_TR(0x413792);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413796:{NFSU2_TR(0x413796);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B413797:{NFSU2_TR(0x413797);
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
B413799:{NFSU2_TR(0x413799);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41379d:{NFSU2_TR(0x41379d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413670u);}goto L413670;}}
}
B4137a3:L4137a3:{c.instructions+=1;NFSU2_TR(0x4137a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4137a7:L4137a7:{c.instructions+=5;NFSU2_TR(0x4137a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4137ab:{NFSU2_TR(0x4137ab);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B4137ac:{NFSU2_TR(0x4137ac);
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
B4137ae:{NFSU2_TR(0x4137ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4137b2:{NFSU2_TR(0x4137b2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413650u);}goto L413650;}}
}
B4137b8:L4137b8:{c.instructions+=4;NFSU2_TR(0x4137b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4137ba:{NFSU2_TR(0x4137ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4137bb:{NFSU2_TR(0x4137bb);
__builtin_memmove((R+4),(R+28),4);
}
B4137bd:{NFSU2_TR(0x4137bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4137c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4137c0:L4137c0:{c.instructions+=6;NFSU2_TR(0x4137c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4137c1:{NFSU2_TR(0x4137c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4137c2:{NFSU2_TR(0x4137c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4137c3:{NFSU2_TR(0x4137c3);
__builtin_memmove((R+16),(R+20),4);
}
B4137c5:{NFSU2_TR(0x4137c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4137c6:{NFSU2_TR(0x4137c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4137c9:L4137c9:{c.instructions+=2;NFSU2_TR(0x4137c9);
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
B4137cb:{NFSU2_TR(0x4137cb);
if(r1(R+518)){{goto L4137de;}}
}
B4137cd:L4137cd:{c.instructions+=4;NFSU2_TR(0x4137cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4137cf:{NFSU2_TR(0x4137cf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4137d0:{NFSU2_TR(0x4137d0);
__builtin_memmove((R+4),(R+28),4);
}
B4137d2:{NFSU2_TR(0x4137d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4137d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4137d5:L4137d5:{c.instructions+=6;NFSU2_TR(0x4137d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4137d6:{NFSU2_TR(0x4137d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4137d7:{NFSU2_TR(0x4137d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4137d8:{NFSU2_TR(0x4137d8);
__builtin_memmove((R+16),(R+20),4);
}
B4137da:{NFSU2_TR(0x4137da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4137db:{NFSU2_TR(0x4137db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4137de:L4137de:{c.instructions+=3;NFSU2_TR(0x4137de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4137e0:{NFSU2_TR(0x4137e0);
w4(R+4,u32(0x88a320ull));
}
B4137e5:{NFSU2_TR(0x4137e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4137eaull));
TAIL_STATIC(0x43be80u,43b);
}
B4137ea:L4137ea:{c.instructions+=7;NFSU2_TR(0x4137ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4137f1:{NFSU2_TR(0x4137f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4137f2:{NFSU2_TR(0x4137f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4137f3:{NFSU2_TR(0x4137f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4137f4:{NFSU2_TR(0x4137f4);
__builtin_memmove((R+16),(R+20),4);
}
B4137f6:{NFSU2_TR(0x4137f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4137f7:{NFSU2_TR(0x4137f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413800:L413800:{c.instructions+=7;NFSU2_TR(0x413800);
__builtin_memmove((R+0),gp(0x883dc0),4);
}
B413805:{NFSU2_TR(0x413805);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413806:{NFSU2_TR(0x413806);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B413808:{NFSU2_TR(0x413808);
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
B41380a:{NFSU2_TR(0x41380a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41380b:{NFSU2_TR(0x41380b);
__builtin_memmove((R+28),(R+4),4);
}
B41380d:{NFSU2_TR(0x41380d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413859;}}
}
B41380f:L41380f:{c.instructions+=3;NFSU2_TR(0x41380f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413810:{NFSU2_TR(0x413810);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413811:{NFSU2_TR(0x413811);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B413813:L413813:{c.instructions+=8;NFSU2_TR(0x413813);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B413816:{NFSU2_TR(0x413816);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B41381a:{NFSU2_TR(0x41381a);
__builtin_memmove((R+0),gp(0x883dbc),4);
}
B41381f:{NFSU2_TR(0x41381f);
__builtin_memmove((R+12),(R+8),4);
}
B413821:{NFSU2_TR(0x413821);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B413824:{NFSU2_TR(0x413824);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B413827:{NFSU2_TR(0x413827);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B413829:{NFSU2_TR(0x413829);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffcf4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B413830:L413830:{c.instructions+=3;NFSU2_TR(0x413830);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(s32(s8(r1(U+12)))));
}
B413835:{NFSU2_TR(0x413835);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413837:{NFSU2_TR(0x413837);
if(r1(R+518)){{goto L413841;}}
}
B413839:L413839:{c.instructions+=3;NFSU2_TR(0x413839);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B41383a:{NFSU2_TR(0x41383a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41383d:{NFSU2_TR(0x41383d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413830u);}goto L413830;}}
}
B41383f:L41383f:{c.instructions+=1;NFSU2_TR(0x41383f);
{goto L413847;}
}
B413841:L413841:{c.instructions+=2;NFSU2_TR(0x413841);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413842:{NFSU2_TR(0x413842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413847ull));
TAIL_STATIC(0x408fb0u,408);
}
B413847:L413847:{c.instructions+=5;NFSU2_TR(0x413847);
__builtin_memmove((R+0),gp(0x883dc0),4);
}
B41384c:{NFSU2_TR(0x41384c);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B41384d:{NFSU2_TR(0x41384d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x114ull))));
}
B413853:{NFSU2_TR(0x413853);
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
B413855:{NFSU2_TR(0x413855);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413813u);}goto L413813;}}
}
B413857:L413857:{c.instructions+=2;NFSU2_TR(0x413857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413858:{NFSU2_TR(0x413858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413859:L413859:{c.instructions+=3;NFSU2_TR(0x413859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41385a:{NFSU2_TR(0x41385a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41385b:{NFSU2_TR(0x41385b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413860:L413860:{c.instructions+=6;NFSU2_TR(0x413860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413861:{NFSU2_TR(0x413861);
__builtin_memmove((R+24),(R+4),4);
}
B413863:{NFSU2_TR(0x413863);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413866:{NFSU2_TR(0x413866);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413869:{NFSU2_TR(0x413869);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41386c:{NFSU2_TR(0x41386c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413871ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B413871:L413871:{c.instructions+=4;NFSU2_TR(0x413871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B413873:{NFSU2_TR(0x413873);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413875:{NFSU2_TR(0x413875);
__builtin_memmove((R+4),(R+24),4);
}
B413877:{NFSU2_TR(0x413877);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41387aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B41387a:L41387a:{c.instructions+=3;NFSU2_TR(0x41387a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B41387d:{NFSU2_TR(0x41387d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41387f:{NFSU2_TR(0x41387f);
if(r1(R+518)){{goto L4138a2;}}
}
B413881:L413881:{c.instructions+=5;NFSU2_TR(0x413881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413884:{NFSU2_TR(0x413884);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B413889:{NFSU2_TR(0x413889);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B413890:{NFSU2_TR(0x413890);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413892:{NFSU2_TR(0x413892);
if(r1(R+518)){{goto L4138a2;}}
}
B413894:L413894:{c.instructions+=3;NFSU2_TR(0x413894);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B413897:{NFSU2_TR(0x413897);
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
B413899:{NFSU2_TR(0x413899);
if(r1(R+518)){{goto L4138a2;}}
}
B41389b:L41389b:{c.instructions+=3;NFSU2_TR(0x41389b);
w4(R+0,u32(0x1ull));
}
B4138a0:{NFSU2_TR(0x4138a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4138a1:{NFSU2_TR(0x4138a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4138a2:L4138a2:{c.instructions+=3;NFSU2_TR(0x4138a2);
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
B4138a4:{NFSU2_TR(0x4138a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4138a5:{NFSU2_TR(0x4138a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4138b0:L4138b0:{c.instructions+=12;NFSU2_TR(0x4138b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138b2:{NFSU2_TR(0x4138b2);
u8 U[4];
w4(U+0,u32(0x771498ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138b7:{NFSU2_TR(0x4138b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4138bd:{NFSU2_TR(0x4138bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138be:{NFSU2_TR(0x4138be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4138c5:{NFSU2_TR(0x4138c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138c6:{NFSU2_TR(0x4138c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138c7:{NFSU2_TR(0x4138c7);
__builtin_memmove((R+24),(R+4),4);
}
B4138c9:{NFSU2_TR(0x4138c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4138cd:{NFSU2_TR(0x4138cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4138d3:{NFSU2_TR(0x4138d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4138db:{NFSU2_TR(0x4138db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4138e0ull));
TAIL_STATIC(0x411740u,411);
}
B4138e0:L4138e0:{c.instructions+=7;NFSU2_TR(0x4138e0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138e5:{NFSU2_TR(0x4138e5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138e7:{NFSU2_TR(0x4138e7);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138e9:{NFSU2_TR(0x4138e9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B4138ec:{NFSU2_TR(0x4138ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4138ed:{NFSU2_TR(0x4138ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4138f5:{NFSU2_TR(0x4138f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4138faull));
TAIL_STATIC(0x75c401u,75c);
}
B4138fa:L4138fa:{c.instructions+=5;NFSU2_TR(0x4138fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4138fe:{NFSU2_TR(0x4138fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4138ff:{NFSU2_TR(0x4138ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413906:{NFSU2_TR(0x413906);
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
B413909:{NFSU2_TR(0x413909);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413910:L413910:{c.instructions+=8;NFSU2_TR(0x413910);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413911:{NFSU2_TR(0x413911);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B413915:{NFSU2_TR(0x413915);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413916:{NFSU2_TR(0x413916);
u8 U[4];
w4(U+0,u32(0x7850b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41391b:{NFSU2_TR(0x41391b);
__builtin_memmove((R+28),(R+4),4);
}
B41391d:{NFSU2_TR(0x41391d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41391f:{NFSU2_TR(0x41391f);
__builtin_memmove((R+4),(R+24),4);
}
B413921:{NFSU2_TR(0x413921);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413926ull));
TAIL_STATIC(0x578ce0u,578);
}
B413926:L413926:{c.instructions+=3;NFSU2_TR(0x413926);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B413929:{NFSU2_TR(0x413929);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+0,u8(u32(r1(R+0))|u32(r1(U+4))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B41392c:{NFSU2_TR(0x41392c);
if(r1(R+518)){{goto L41393c;}}
}
B41392e:L41392e:{c.instructions+=2;NFSU2_TR(0x41392e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B413935:{NFSU2_TR(0x413935);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x308ull))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B41393c:L41393c:{c.instructions+=3;NFSU2_TR(0x41393c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41393d:{NFSU2_TR(0x41393d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30cull))));
__builtin_memmove((R+4),(U+0),4);
}
B413943:{NFSU2_TR(0x413943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413948ull));
TAIL_STATIC(0x405350u,405);
}
B413948:L413948:{c.instructions+=3;NFSU2_TR(0x413948);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413949:{NFSU2_TR(0x413949);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31cull))));
__builtin_memmove((R+4),(U+0),4);
}
B41394f:{NFSU2_TR(0x41394f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413954ull));
TAIL_STATIC(0x411790u,411);
}
B413954:L413954:{c.instructions+=2;NFSU2_TR(0x413954);
__builtin_memmove((R+4),(R+24),4);
}
B413956:{NFSU2_TR(0x413956);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41395bull));
TAIL_STATIC(0x578d90u,578);
}
B41395b:L41395b:{c.instructions+=3;NFSU2_TR(0x41395b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41395c:{NFSU2_TR(0x41395c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41395d:{NFSU2_TR(0x41395d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413960:L413960:{c.instructions+=9;NFSU2_TR(0x413960);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413961:{NFSU2_TR(0x413961);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413962:{NFSU2_TR(0x413962);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413963:{NFSU2_TR(0x413963);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413964:{NFSU2_TR(0x413964);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B413968:{NFSU2_TR(0x413968);
u8 U[4];
w4(U+0,u32(0x7850ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41396d:{NFSU2_TR(0x41396d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41396f:{NFSU2_TR(0x41396f);
__builtin_memmove((R+4),(R+28),4);
}
B413971:{NFSU2_TR(0x413971);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413976ull));
TAIL_STATIC(0x578ce0u,578);
}
B413976:L413976:{c.instructions+=9;NFSU2_TR(0x413976);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41397a:{NFSU2_TR(0x41397a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B41397c:{NFSU2_TR(0x41397c);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B413980:{NFSU2_TR(0x413980);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413982:{NFSU2_TR(0x413982);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B413985:{NFSU2_TR(0x413985);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413986:{NFSU2_TR(0x413986);
__builtin_memmove((R+4),(R+28),4);
}
B413988:{NFSU2_TR(0x413988);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41398c:{NFSU2_TR(0x41398c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413991ull));
TAIL_STATIC(0x5716c0u,571);
}
B413991:L413991:{c.instructions+=3;NFSU2_TR(0x413991);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B413995:{NFSU2_TR(0x413995);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413997:{NFSU2_TR(0x413997);
if(r1(R+518)){{goto L413b75;}}
}
B41399d:L41399d:{c.instructions+=2;NFSU2_TR(0x41399d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41399f:{NFSU2_TR(0x41399f);
if(r1(R+518)){{goto L4139a8;}}
}
B4139a1:L4139a1:{c.instructions+=2;NFSU2_TR(0x4139a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4139a4:{NFSU2_TR(0x4139a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4139a8:L4139a8:{c.instructions+=7;NFSU2_TR(0x4139a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4139aa:{NFSU2_TR(0x4139aa);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4139ac:{NFSU2_TR(0x4139ac);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4139ae:{NFSU2_TR(0x4139ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4139b2:{NFSU2_TR(0x4139b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4139b3:{NFSU2_TR(0x4139b3);
__builtin_memmove((R+4),(R+28),4);
}
B4139b5:{NFSU2_TR(0x4139b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4139baull));
TAIL_STATIC(0x571640u,571);
}
B4139ba:L4139ba:{c.instructions+=3;NFSU2_TR(0x4139ba);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4139bd:{NFSU2_TR(0x4139bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4139bf:{NFSU2_TR(0x4139bf);
if(r1(R+518)){{goto L413b69;}}
}
B4139c5:L4139c5:{c.instructions+=4;NFSU2_TR(0x4139c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4139c9:{NFSU2_TR(0x4139c9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4139ca:{NFSU2_TR(0x4139ca);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4139cd:{NFSU2_TR(0x4139cd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L413b67;}}
}
B4139d3:L4139d3:{c.instructions+=1;NFSU2_TR(0x4139d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x413b84ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4139da:L4139da:{c.instructions+=3;NFSU2_TR(0x4139da);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B4139e0:{NFSU2_TR(0x4139e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4139e1:{NFSU2_TR(0x4139e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4139e6ull));
TAIL_STATIC(0x440e50u,440);
}
B4139e6:L4139e6:{c.instructions+=3;NFSU2_TR(0x4139e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4139e9:{NFSU2_TR(0x4139e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4139eb:{NFSU2_TR(0x4139eb);
if(r1(R+518)){{goto L413b63;}}
}
B4139f1:L4139f1:{c.instructions+=3;NFSU2_TR(0x4139f1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4139f3:{NFSU2_TR(0x4139f3);
__builtin_memmove((R+4),(R+0),4);
}
B4139f5:{NFSU2_TR(0x4139f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4139faull));
TAIL_STATIC(0x40ca20u,40c);
}
B4139fa:L4139fa:{c.instructions+=1;NFSU2_TR(0x4139fa);
{goto L413b65;}
}
B4139ff:L4139ff:{c.instructions+=3;NFSU2_TR(0x4139ff);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B413a05:{NFSU2_TR(0x413a05);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a06:{NFSU2_TR(0x413a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a0bull));
TAIL_STATIC(0x440e50u,440);
}
B413a0b:L413a0b:{c.instructions+=3;NFSU2_TR(0x413a0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413a0e:{NFSU2_TR(0x413a0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413a10:{NFSU2_TR(0x413a10);
if(r1(R+518)){{goto L413b63;}}
}
B413a16:L413a16:{c.instructions+=3;NFSU2_TR(0x413a16);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a18:{NFSU2_TR(0x413a18);
__builtin_memmove((R+4),(R+0),4);
}
B413a1a:{NFSU2_TR(0x413a1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a1full));
TAIL_STATIC(0x40ca70u,40c);
}
B413a1f:L413a1f:{c.instructions+=1;NFSU2_TR(0x413a1f);
{goto L413b65;}
}
B413a24:L413a24:{c.instructions+=3;NFSU2_TR(0x413a24);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B413a29:{NFSU2_TR(0x413a29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a2a:{NFSU2_TR(0x413a2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a2full));
TAIL_STATIC(0x440e50u,440);
}
B413a2f:L413a2f:{c.instructions+=3;NFSU2_TR(0x413a2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413a32:{NFSU2_TR(0x413a32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413a34:{NFSU2_TR(0x413a34);
if(r1(R+518)){{goto L413b63;}}
}
B413a3a:L413a3a:{c.instructions+=3;NFSU2_TR(0x413a3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a3c:{NFSU2_TR(0x413a3c);
__builtin_memmove((R+4),(R+0),4);
}
B413a3e:{NFSU2_TR(0x413a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a43ull));
TAIL_STATIC(0x40cab0u,40c);
}
B413a43:L413a43:{c.instructions+=1;NFSU2_TR(0x413a43);
{goto L413b65;}
}
B413a48:L413a48:{c.instructions+=3;NFSU2_TR(0x413a48);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B413a4e:{NFSU2_TR(0x413a4e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a4f:{NFSU2_TR(0x413a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a54ull));
TAIL_STATIC(0x440e50u,440);
}
B413a54:L413a54:{c.instructions+=3;NFSU2_TR(0x413a54);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413a57:{NFSU2_TR(0x413a57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413a59:{NFSU2_TR(0x413a59);
if(r1(R+518)){{goto L413b63;}}
}
B413a5f:L413a5f:{c.instructions+=3;NFSU2_TR(0x413a5f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a61:{NFSU2_TR(0x413a61);
__builtin_memmove((R+4),(R+0),4);
}
B413a63:{NFSU2_TR(0x413a63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a68ull));
TAIL_STATIC(0x40caf0u,40c);
}
B413a68:L413a68:{c.instructions+=1;NFSU2_TR(0x413a68);
{goto L413b65;}
}
B413a6d:L413a6d:{c.instructions+=3;NFSU2_TR(0x413a6d);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B413a73:{NFSU2_TR(0x413a73);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a74:{NFSU2_TR(0x413a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a79ull));
TAIL_STATIC(0x440e50u,440);
}
B413a79:L413a79:{c.instructions+=3;NFSU2_TR(0x413a79);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413a7c:{NFSU2_TR(0x413a7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413a7e:{NFSU2_TR(0x413a7e);
if(r1(R+518)){{goto L413b63;}}
}
B413a84:L413a84:{c.instructions+=3;NFSU2_TR(0x413a84);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a86:{NFSU2_TR(0x413a86);
__builtin_memmove((R+4),(R+0),4);
}
B413a88:{NFSU2_TR(0x413a88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a8dull));
TAIL_STATIC(0x40cb30u,40c);
}
B413a8d:L413a8d:{c.instructions+=1;NFSU2_TR(0x413a8d);
{goto L413b65;}
}
B413a92:L413a92:{c.instructions+=3;NFSU2_TR(0x413a92);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B413a97:{NFSU2_TR(0x413a97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413a98:{NFSU2_TR(0x413a98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413a9dull));
TAIL_STATIC(0x440e50u,440);
}
B413a9d:L413a9d:{c.instructions+=3;NFSU2_TR(0x413a9d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413aa0:{NFSU2_TR(0x413aa0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413aa2:{NFSU2_TR(0x413aa2);
if(r1(R+518)){{goto L413b63;}}
}
B413aa8:L413aa8:{c.instructions+=7;NFSU2_TR(0x413aa8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413aaa:{NFSU2_TR(0x413aaa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413aac:{NFSU2_TR(0x413aac);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413aae:{NFSU2_TR(0x413aae);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413ab0:{NFSU2_TR(0x413ab0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413ab2:{NFSU2_TR(0x413ab2);
__builtin_memmove((R+4),(R+0),4);
}
B413ab4:{NFSU2_TR(0x413ab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413ab9ull));
TAIL_STATIC(0x40dba0u,40d);
}
B413ab9:L413ab9:{c.instructions+=1;NFSU2_TR(0x413ab9);
{goto L413b65;}
}
B413abe:L413abe:{c.instructions+=3;NFSU2_TR(0x413abe);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B413ac4:{NFSU2_TR(0x413ac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413ac5:{NFSU2_TR(0x413ac5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413acaull));
TAIL_STATIC(0x440e50u,440);
}
B413aca:L413aca:{c.instructions+=3;NFSU2_TR(0x413aca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413acd:{NFSU2_TR(0x413acd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413acf:{NFSU2_TR(0x413acf);
if(r1(R+518)){{goto L413b63;}}
}
B413ad5:L413ad5:{c.instructions+=6;NFSU2_TR(0x413ad5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413ad7:{NFSU2_TR(0x413ad7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413ad9:{NFSU2_TR(0x413ad9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413adb:{NFSU2_TR(0x413adb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413add:{NFSU2_TR(0x413add);
__builtin_memmove((R+4),(R+0),4);
}
B413adf:{NFSU2_TR(0x413adf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413ae4ull));
TAIL_STATIC(0x40dd90u,40d);
}
B413ae4:L413ae4:{c.instructions+=1;NFSU2_TR(0x413ae4);
{goto L413b65;}
}
B413ae6:L413ae6:{c.instructions+=3;NFSU2_TR(0x413ae6);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B413aec:{NFSU2_TR(0x413aec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413aed:{NFSU2_TR(0x413aed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413af2ull));
TAIL_STATIC(0x440e50u,440);
}
B413af2:L413af2:{c.instructions+=3;NFSU2_TR(0x413af2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413af5:{NFSU2_TR(0x413af5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413af7:{NFSU2_TR(0x413af7);
if(r1(R+518)){{goto L413b63;}}
}
B413af9:L413af9:{c.instructions+=4;NFSU2_TR(0x413af9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413afb:{NFSU2_TR(0x413afb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413afd:{NFSU2_TR(0x413afd);
__builtin_memmove((R+4),(R+0),4);
}
B413aff:{NFSU2_TR(0x413aff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b04ull));
TAIL_STATIC(0x40da80u,40d);
}
B413b04:L413b04:{c.instructions+=1;NFSU2_TR(0x413b04);
{goto L413b65;}
}
B413b06:L413b06:{c.instructions+=3;NFSU2_TR(0x413b06);
__builtin_memmove((R+0),gp(0x81cb70),4);
}
B413b0b:{NFSU2_TR(0x413b0b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b0c:{NFSU2_TR(0x413b0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b11ull));
TAIL_STATIC(0x440e50u,440);
}
B413b11:L413b11:{c.instructions+=3;NFSU2_TR(0x413b11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413b14:{NFSU2_TR(0x413b14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413b16:{NFSU2_TR(0x413b16);
if(r1(R+518)){{goto L413b63;}}
}
B413b18:L413b18:{c.instructions+=3;NFSU2_TR(0x413b18);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b1a:{NFSU2_TR(0x413b1a);
__builtin_memmove((R+4),(R+0),4);
}
B413b1c:{NFSU2_TR(0x413b1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b21ull));
TAIL_STATIC(0x40cb80u,40c);
}
B413b21:L413b21:{c.instructions+=1;NFSU2_TR(0x413b21);
{goto L413b65;}
}
B413b23:L413b23:{c.instructions+=3;NFSU2_TR(0x413b23);
__builtin_memmove((R+4),gp(0x81cb70),4);
}
B413b29:{NFSU2_TR(0x413b29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b2a:{NFSU2_TR(0x413b2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b2full));
TAIL_STATIC(0x440e50u,440);
}
B413b2f:L413b2f:{c.instructions+=3;NFSU2_TR(0x413b2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413b32:{NFSU2_TR(0x413b32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413b34:{NFSU2_TR(0x413b34);
if(r1(R+518)){{goto L413b63;}}
}
B413b36:L413b36:{c.instructions+=4;NFSU2_TR(0x413b36);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b38:{NFSU2_TR(0x413b38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b3a:{NFSU2_TR(0x413b3a);
__builtin_memmove((R+4),(R+0),4);
}
B413b3c:{NFSU2_TR(0x413b3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b41ull));
TAIL_STATIC(0x40daf0u,40d);
}
B413b41:L413b41:{c.instructions+=1;NFSU2_TR(0x413b41);
{goto L413b65;}
}
B413b43:L413b43:{c.instructions+=3;NFSU2_TR(0x413b43);
__builtin_memmove((R+8),gp(0x81cb70),4);
}
B413b49:{NFSU2_TR(0x413b49);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b4a:{NFSU2_TR(0x413b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b4full));
TAIL_STATIC(0x440e50u,440);
}
B413b4f:L413b4f:{c.instructions+=3;NFSU2_TR(0x413b4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B413b52:{NFSU2_TR(0x413b52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413b54:{NFSU2_TR(0x413b54);
if(r1(R+518)){{goto L413b63;}}
}
B413b56:L413b56:{c.instructions+=4;NFSU2_TR(0x413b56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b58:{NFSU2_TR(0x413b58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b5a:{NFSU2_TR(0x413b5a);
__builtin_memmove((R+4),(R+0),4);
}
B413b5c:{NFSU2_TR(0x413b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b61ull));
TAIL_STATIC(0x40db70u,40d);
}
B413b61:L413b61:{c.instructions+=1;NFSU2_TR(0x413b61);
{goto L413b65;}
}
B413b63:L413b63:{c.instructions+=1;NFSU2_TR(0x413b63);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B413b65:L413b65:{c.instructions+=1;NFSU2_TR(0x413b65);
__builtin_memmove((R+24),(R+0),4);
}
B413b67:L413b67:{c.instructions+=1;NFSU2_TR(0x413b67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B413b69:L413b69:{c.instructions+=2;NFSU2_TR(0x413b69);
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
B413b6b:{NFSU2_TR(0x413b6b);
if(r1(R+518)){{goto L413b75;}}
}
B413b6d:L413b6d:{c.instructions+=4;NFSU2_TR(0x413b6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413b6f:{NFSU2_TR(0x413b6f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413b70:{NFSU2_TR(0x413b70);
__builtin_memmove((R+4),(R+24),4);
}
B413b72:{NFSU2_TR(0x413b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413b75:L413b75:{c.instructions+=2;NFSU2_TR(0x413b75);
__builtin_memmove((R+4),(R+28),4);
}
B413b77:{NFSU2_TR(0x413b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413b7cull));
TAIL_STATIC(0x578d90u,578);
}
B413b7c:L413b7c:{c.instructions+=5;NFSU2_TR(0x413b7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413b7d:{NFSU2_TR(0x413b7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413b7e:{NFSU2_TR(0x413b7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413b7f:{NFSU2_TR(0x413b7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B413b80:{NFSU2_TR(0x413b80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413bb0:L413bb0:{c.instructions+=7;NFSU2_TR(0x413bb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413bb1:{NFSU2_TR(0x413bb1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413bb2:{NFSU2_TR(0x413bb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B413bb6:{NFSU2_TR(0x413bb6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413bb8:{NFSU2_TR(0x413bb8);
__builtin_memmove((R+4),(R+24),4);
}
B413bba:{NFSU2_TR(0x413bba);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B413bbc:{NFSU2_TR(0x413bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413bc1ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B413bc1:L413bc1:{c.instructions+=2;NFSU2_TR(0x413bc1);
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
B413bc3:{NFSU2_TR(0x413bc3);
if(r1(R+518)){{goto L413bcc;}}
}
B413bc5:L413bc5:{c.instructions+=4;NFSU2_TR(0x413bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413bc6:{NFSU2_TR(0x413bc6);
w1(R+0,u8(0x1ull));
}
B413bc8:{NFSU2_TR(0x413bc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413bc9:{NFSU2_TR(0x413bc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413bcc:L413bcc:{c.instructions+=7;NFSU2_TR(0x413bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413bcf:{NFSU2_TR(0x413bcf);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B413bd2:{NFSU2_TR(0x413bd2);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B413bd4:{NFSU2_TR(0x413bd4);
__builtin_memmove((R+4),(R+0),1);
}
B413bd6:{NFSU2_TR(0x413bd6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B413bd9:{NFSU2_TR(0x413bd9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413bdc:{NFSU2_TR(0x413bdc);
if(r1(R+518)){{goto L413ca4;}}
}
B413be2:L413be2:{c.instructions+=2;NFSU2_TR(0x413be2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413be5:{NFSU2_TR(0x413be5);
if(r1(R+518)){{goto L413ca4;}}
}
B413beb:L413beb:{c.instructions+=3;NFSU2_TR(0x413beb);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B413bed:{NFSU2_TR(0x413bed);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413bef:{NFSU2_TR(0x413bef);
if(r1(R+518)){{goto L413ca4;}}
}
B413bf5:L413bf5:{c.instructions+=2;NFSU2_TR(0x413bf5);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413bf7:{NFSU2_TR(0x413bf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413cab;}}
}
B413bfd:L413bfd:{c.instructions+=7;NFSU2_TR(0x413bfd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413bfe:{NFSU2_TR(0x413bfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413bff:{NFSU2_TR(0x413bff);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B413c03:{NFSU2_TR(0x413c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413c06:{NFSU2_TR(0x413c06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B413c08:{NFSU2_TR(0x413c08);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B413c10:{NFSU2_TR(0x413c10);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413c13ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413c13:L413c13:{c.instructions+=2;NFSU2_TR(0x413c13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413c15:{NFSU2_TR(0x413c15);
if(r1(R+518)){{goto L413c29;}}
}
B413c17:L413c17:{c.instructions+=3;NFSU2_TR(0x413c17);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B413c1e:{NFSU2_TR(0x413c1e);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B413c21:{NFSU2_TR(0x413c21);
if(r1(R+518)){{goto L413c29;}}
}
B413c23:L413c23:{c.instructions+=2;NFSU2_TR(0x413c23);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+20),(U+12),4);
}
B413c27:{NFSU2_TR(0x413c27);
{goto L413c2b;}
}
B413c29:L413c29:{c.instructions+=1;NFSU2_TR(0x413c29);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B413c2b:L413c2b:{c.instructions+=2;NFSU2_TR(0x413c2b);
__builtin_memmove((R+4),(R+28),4);
}
B413c2d:{NFSU2_TR(0x413c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413c32ull));
TAIL_STATIC(0x5ec0d0u,5ec);
}
B413c32:L413c32:{c.instructions+=10;NFSU2_TR(0x413c32);
__builtin_memmove((R+28),(R+0),4);
}
B413c34:{NFSU2_TR(0x413c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413c37:{NFSU2_TR(0x413c37);
__builtin_memmove((R+12),(R+0),4);
}
B413c39:{NFSU2_TR(0x413c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B413c3c:{NFSU2_TR(0x413c3c);
w1(R+12,u8(~u32(r1(R+12))));
}
B413c3e:{NFSU2_TR(0x413c3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B413c41:{NFSU2_TR(0x413c41);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+0))));
}
B413c43:{NFSU2_TR(0x413c43);
__builtin_memmove((R+4),(R+24),4);
}
B413c45:{NFSU2_TR(0x413c45);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B413c48:{NFSU2_TR(0x413c48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413c4dull));
TAIL_STATIC(0x5d86a0u,5d8);
}
B413c4d:L413c4d:{c.instructions+=3;NFSU2_TR(0x413c4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413c4f:{NFSU2_TR(0x413c4f);
__builtin_memmove((R+4),(R+28),4);
}
B413c51:{NFSU2_TR(0x413c51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413c56;}}
}
B413c53:L413c53:{c.instructions+=1;NFSU2_TR(0x413c53);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B413c56:L413c56:{c.instructions+=4;NFSU2_TR(0x413c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B413c59:{NFSU2_TR(0x413c59);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B413c5c:{NFSU2_TR(0x413c5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413c5f:{NFSU2_TR(0x413c5f);
if(r1(R+518)){{goto L413c83;}}
}
B413c61:L413c61:{c.instructions+=2;NFSU2_TR(0x413c61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413c63:{NFSU2_TR(0x413c63);
if(r1(R+518)){{goto L413c7b;}}
}
B413c65:L413c65:{c.instructions+=3;NFSU2_TR(0x413c65);
u8 U[13];
w4(U+0,u32(u32(u32(0x82ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B413c6c:{NFSU2_TR(0x413c6c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413c6e:{NFSU2_TR(0x413c6e);
if(r1(R+518)){{goto L413c7b;}}
}
B413c70:L413c70:{c.instructions+=2;NFSU2_TR(0x413c70);
__builtin_memmove((R+4),(R+20),4);
}
B413c72:{NFSU2_TR(0x413c72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413c77ull));
TAIL_STATIC(0x40b0b0u,40b);
}
B413c77:L413c77:{c.instructions+=2;NFSU2_TR(0x413c77);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413c79:{NFSU2_TR(0x413c79);
if(r1(R+518)){{goto L413c83;}}
}
B413c7b:L413c7b:{c.instructions+=1;NFSU2_TR(0x413c7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B413c83:L413c83:{c.instructions+=3;NFSU2_TR(0x413c83);
__builtin_memmove((R+4),gp(0x890080),4);
}
B413c89:{NFSU2_TR(0x413c89);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413c8e:{NFSU2_TR(0x413c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413c93ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B413c93:L413c93:{c.instructions+=6;NFSU2_TR(0x413c93);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413c97:{NFSU2_TR(0x413c97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413c98:{NFSU2_TR(0x413c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413c99:{NFSU2_TR(0x413c99);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413c9b:{NFSU2_TR(0x413c9b);
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
B413c9e:{NFSU2_TR(0x413c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413bc5u);}goto L413bc5;}}
}
B413ca4:L413ca4:{c.instructions+=4;NFSU2_TR(0x413ca4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413ca5:{NFSU2_TR(0x413ca5);
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
B413ca7:{NFSU2_TR(0x413ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413ca8:{NFSU2_TR(0x413ca8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413cab:L413cab:{c.instructions+=4;NFSU2_TR(0x413cab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413cac:{NFSU2_TR(0x413cac);
__builtin_memmove((R+0),(R+12),1);
}
B413cae:{NFSU2_TR(0x413cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413caf:{NFSU2_TR(0x413caf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413cc0:L413cc0:{c.instructions+=10;NFSU2_TR(0x413cc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B413cc3:{NFSU2_TR(0x413cc3);
__builtin_memmove((R+0),gp(0x8650b0),4);
}
B413cc8:{NFSU2_TR(0x413cc8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413cc9:{NFSU2_TR(0x413cc9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413cca:{NFSU2_TR(0x413cca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413ccb:{NFSU2_TR(0x413ccb);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B413ccd:{NFSU2_TR(0x413ccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413ccf:{NFSU2_TR(0x413ccf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413cd0:{NFSU2_TR(0x413cd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413cd4:{NFSU2_TR(0x413cd4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413ecf;}}
}
B413cda:L413cda:{c.instructions+=6;NFSU2_TR(0x413cda);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B413cde:{NFSU2_TR(0x413cde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413ce1:{NFSU2_TR(0x413ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B413ce5:{NFSU2_TR(0x413ce5);
__builtin_memmove((R+4),(R+28),4);
}
B413ce7:{NFSU2_TR(0x413ce7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413ceb:{NFSU2_TR(0x413ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413cf0ull));
TAIL_STATIC(0x5d86a0u,5d8);
}
B413cf0:L413cf0:{c.instructions+=4;NFSU2_TR(0x413cf0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413cf2:{NFSU2_TR(0x413cf2);
__builtin_memmove((R+4),(R+28),4);
}
B413cf4:{NFSU2_TR(0x413cf4);
__builtin_memmove((R+24),(R+0),4);
}
B413cf6:{NFSU2_TR(0x413cf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413cfbull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B413cfb:L413cfb:{c.instructions+=2;NFSU2_TR(0x413cfb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413cfd:{NFSU2_TR(0x413cfd);
if(r1(R+518)){{goto L413d0c;}}
}
B413cff:L413cff:{c.instructions+=3;NFSU2_TR(0x413cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413d02:{NFSU2_TR(0x413d02);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B413d06:{NFSU2_TR(0x413d06);
if(r1(R+518)){{goto L413ddf;}}
}
B413d0c:L413d0c:{c.instructions+=3;NFSU2_TR(0x413d0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413d0e:{NFSU2_TR(0x413d0e);
__builtin_memmove((R+4),(R+28),4);
}
B413d10:{NFSU2_TR(0x413d10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413d15ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B413d15:L413d15:{c.instructions+=2;NFSU2_TR(0x413d15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413d17:{NFSU2_TR(0x413d17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413ddf;}}
}
B413d1d:L413d1d:{c.instructions+=2;NFSU2_TR(0x413d1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413d1f:{NFSU2_TR(0x413d1f);
if(r1(R+518)){{goto L413d2c;}}
}
B413d21:L413d21:{c.instructions+=4;NFSU2_TR(0x413d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B413d24:{NFSU2_TR(0x413d24);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B413d27:{NFSU2_TR(0x413d27);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413d2a:{NFSU2_TR(0x413d2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413d51;}}
}
B413d2c:L413d2c:{c.instructions+=6;NFSU2_TR(0x413d2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413d2f:{NFSU2_TR(0x413d2f);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B413d31:{NFSU2_TR(0x413d31);
__builtin_memmove((R+4),(R+0),1);
}
B413d33:{NFSU2_TR(0x413d33);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfull))));
}
B413d36:{NFSU2_TR(0x413d36);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413d39:{NFSU2_TR(0x413d39);
if(r1(R+518)){{goto L413d51;}}
}
B413d3b:L413d3b:{c.instructions+=2;NFSU2_TR(0x413d3b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413d3e:{NFSU2_TR(0x413d3e);
if(r1(R+518)){{goto L413d51;}}
}
B413d40:L413d40:{c.instructions+=4;NFSU2_TR(0x413d40);
__builtin_memmove((R+8),(R+0),1);
}
B413d42:{NFSU2_TR(0x413d42);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B413d45:{NFSU2_TR(0x413d45);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B413d48:{NFSU2_TR(0x413d48);
if(r1(R+518)){{goto L413d51;}}
}
B413d4a:L413d4a:{c.instructions+=3;NFSU2_TR(0x413d4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B413d4d:{NFSU2_TR(0x413d4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413d4f:{NFSU2_TR(0x413d4f);
if(r1(R+518)){{goto L413d5f;}}
}
B413d51:L413d51:{c.instructions+=8;NFSU2_TR(0x413d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413d52:{NFSU2_TR(0x413d52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413d53:{NFSU2_TR(0x413d53);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B413d55:{NFSU2_TR(0x413d55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413d56:{NFSU2_TR(0x413d56);
__builtin_memmove((R+0),(R+12),1);
}
B413d58:{NFSU2_TR(0x413d58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413d59:{NFSU2_TR(0x413d59);
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
B413d5c:{NFSU2_TR(0x413d5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413d5f:L413d5f:{c.instructions+=5;NFSU2_TR(0x413d5f);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B413d64:{NFSU2_TR(0x413d64);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B413d6b:{NFSU2_TR(0x413d6b);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B413d6f:{NFSU2_TR(0x413d6f);
__builtin_memmove((R+4),gp(0x890118),4);
}
B413d75:{NFSU2_TR(0x413d75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413ded;}}
}
B413d77:L413d77:{c.instructions+=2;NFSU2_TR(0x413d77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413d78:{NFSU2_TR(0x413d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413d7dull));
TAIL_STATIC(0x5eeff0u,5ee);
}
B413d7d:L413d7d:{c.instructions+=5;NFSU2_TR(0x413d7d);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B413d7f:{NFSU2_TR(0x413d7f);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B413d81:{NFSU2_TR(0x413d81);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B413d83:{NFSU2_TR(0x413d83);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413d85:{NFSU2_TR(0x413d85);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413d51u);}goto L413d51;}}
}
B413d87:L413d87:{c.instructions+=5;NFSU2_TR(0x413d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413d8a:{NFSU2_TR(0x413d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413d8e:{NFSU2_TR(0x413d8e);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B413d90:{NFSU2_TR(0x413d90);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x4ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x4ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413d92:{NFSU2_TR(0x413d92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413e33;}}
}
B413d98:L413d98:{c.instructions+=2;NFSU2_TR(0x413d98);
w4(R+4,u32(0x89e7a0ull));
}
B413d9d:{NFSU2_TR(0x413d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413da2ull));
TAIL_STATIC(0x4018f0u,401);
}
B413da2:L413da2:{c.instructions+=2;NFSU2_TR(0x413da2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413da4:{NFSU2_TR(0x413da4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413e1c;}}
}
B413da6:L413da6:{c.instructions+=3;NFSU2_TR(0x413da6);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x8000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B413dae:{NFSU2_TR(0x413dae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B413db6:{NFSU2_TR(0x413db6);
if(r1(R+518)){{goto L413dc0;}}
}
B413db8:L413db8:{c.instructions+=1;NFSU2_TR(0x413db8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x3eaa7efaull));
s4(u32(r4(U+0)),r4(U+4));
}
B413dc0:L413dc0:{c.instructions+=3;NFSU2_TR(0x413dc0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B413dc6:{NFSU2_TR(0x413dc6);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413dcb:{NFSU2_TR(0x413dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413dd0ull));
TAIL_STATIC(0x5ea500u,5ea);
}
B413dd0:L413dd0:{c.instructions+=4;NFSU2_TR(0x413dd0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413dd4:{NFSU2_TR(0x413dd4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413dd6:{NFSU2_TR(0x413dd6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413dd9:{NFSU2_TR(0x413dd9);
if(r1(R+514)){{goto L413f43;}}
}
B413ddf:L413ddf:{c.instructions+=8;NFSU2_TR(0x413ddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413de0:{NFSU2_TR(0x413de0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413de1:{NFSU2_TR(0x413de1);
w1(R+12,u8(0x1ull));
}
B413de3:{NFSU2_TR(0x413de3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413de4:{NFSU2_TR(0x413de4);
__builtin_memmove((R+0),(R+12),1);
}
B413de6:{NFSU2_TR(0x413de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413de7:{NFSU2_TR(0x413de7);
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
B413dea:{NFSU2_TR(0x413dea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413ded:L413ded:{c.instructions+=9;NFSU2_TR(0x413ded);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B413df0:{NFSU2_TR(0x413df0);
w4(R+8,u32(s32(s16(r2(R+0)))));
}
B413df3:{NFSU2_TR(0x413df3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B413df7:{NFSU2_TR(0x413df7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B413dfd:{NFSU2_TR(0x413dfd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B413e01:{NFSU2_TR(0x413e01);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B413e03:{NFSU2_TR(0x413e03);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413e05:{NFSU2_TR(0x413e05);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413e08:{NFSU2_TR(0x413e08);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413d87u);}goto L413d87;}}
}
B413e0e:L413e0e:{c.instructions+=8;NFSU2_TR(0x413e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413e0f:{NFSU2_TR(0x413e0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413e10:{NFSU2_TR(0x413e10);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B413e12:{NFSU2_TR(0x413e12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413e13:{NFSU2_TR(0x413e13);
__builtin_memmove((R+0),(R+12),1);
}
B413e15:{NFSU2_TR(0x413e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413e16:{NFSU2_TR(0x413e16);
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
B413e19:{NFSU2_TR(0x413e19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413e1c:L413e1c:{c.instructions+=4;NFSU2_TR(0x413e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413e20:{NFSU2_TR(0x413e20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413e21:{NFSU2_TR(0x413e21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413e22:{NFSU2_TR(0x413e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413e27ull));
TAIL_STATIC(0x40da10u,40d);
}
B413e27:L413e27:{c.instructions+=7;NFSU2_TR(0x413e27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413e28:{NFSU2_TR(0x413e28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413e29:{NFSU2_TR(0x413e29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413e2a:{NFSU2_TR(0x413e2a);
__builtin_memmove((R+12),(R+0),1);
}
B413e2c:{NFSU2_TR(0x413e2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413e2d:{NFSU2_TR(0x413e2d);
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
B413e30:{NFSU2_TR(0x413e30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413e33:L413e33:{c.instructions+=3;NFSU2_TR(0x413e33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413e37:{NFSU2_TR(0x413e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413e39:{NFSU2_TR(0x413e39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413e3cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B413e3c:L413e3c:{c.instructions+=2;NFSU2_TR(0x413e3c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413e3e:{NFSU2_TR(0x413e3e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413e95;}}
}
B413e40:L413e40:{c.instructions+=3;NFSU2_TR(0x413e40);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413e43:{NFSU2_TR(0x413e43);
__builtin_memmove((R+24),(R+0),4);
}
B413e45:{NFSU2_TR(0x413e45);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413e4c;}}
}
B413e47:L413e47:{c.instructions+=1;NFSU2_TR(0x413e47);
w4(R+24,u32(0x9ull));
}
B413e4c:L413e4c:{c.instructions+=3;NFSU2_TR(0x413e4c);
__builtin_memmove((R+4),gp(0x890080),4);
}
B413e52:{NFSU2_TR(0x413e52);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413e57:{NFSU2_TR(0x413e57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413e5cull));
TAIL_STATIC(0x5ea500u,5ea);
}
B413e5c:L413e5c:{c.instructions+=7;NFSU2_TR(0x413e5c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B413e5f:{NFSU2_TR(0x413e5f);
__builtin_memmove((R+4),gp(0x81cb60),4);
}
B413e65:{NFSU2_TR(0x413e65);
u8 U[12];
w4(U+0,u32(u32(u32(0x524ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B413e6c:{NFSU2_TR(0x413e6c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B413e6e:{NFSU2_TR(0x413e6e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413e70:{NFSU2_TR(0x413e70);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413e73:{NFSU2_TR(0x413e73);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L413e99;}}
}
B413e75:L413e75:{c.instructions+=4;NFSU2_TR(0x413e75);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B413e78:{NFSU2_TR(0x413e78);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413e7a:{NFSU2_TR(0x413e7a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413e7d:{NFSU2_TR(0x413e7d);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L413eb5;}}
}
B413e7f:L413e7f:{c.instructions+=4;NFSU2_TR(0x413e7f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413e82:{NFSU2_TR(0x413e82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413e84:{NFSU2_TR(0x413e84);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413e87:{NFSU2_TR(0x413e87);
if(r1(R+514)){{goto L413eb7;}}
}
B413e89:L413e89:{c.instructions+=7;NFSU2_TR(0x413e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413e8a:{NFSU2_TR(0x413e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413e8b:{NFSU2_TR(0x413e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413e8c:{NFSU2_TR(0x413e8c);
__builtin_memmove((R+0),(R+12),1);
}
B413e8e:{NFSU2_TR(0x413e8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413e8f:{NFSU2_TR(0x413e8f);
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
B413e92:{NFSU2_TR(0x413e92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413e95:L413e95:{c.instructions+=2;NFSU2_TR(0x413e95);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B413e97:{NFSU2_TR(0x413e97);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413e4cu);}goto L413e4c;}
}
B413e99:L413e99:{c.instructions+=14;NFSU2_TR(0x413e99);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B413e9c:{NFSU2_TR(0x413e9c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B413e9e:{NFSU2_TR(0x413e9e);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B413ea1:{NFSU2_TR(0x413ea1);
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x1ull))));
}
B413ea3:{NFSU2_TR(0x413ea3);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B413ea5:{NFSU2_TR(0x413ea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413ea6:{NFSU2_TR(0x413ea6);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B413ea8:{NFSU2_TR(0x413ea8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413ea9:{NFSU2_TR(0x413ea9);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B413eab:{NFSU2_TR(0x413eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413eac:{NFSU2_TR(0x413eac);
__builtin_memmove((R+0),(R+12),1);
}
B413eae:{NFSU2_TR(0x413eae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413eaf:{NFSU2_TR(0x413eaf);
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
B413eb2:{NFSU2_TR(0x413eb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413eb5:L413eb5:{c.instructions+=1;NFSU2_TR(0x413eb5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B413eb7:L413eb7:{c.instructions+=12;NFSU2_TR(0x413eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B413eba:{NFSU2_TR(0x413eba);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0xfull))));
}
B413ebd:{NFSU2_TR(0x413ebd);
w1(R+512,u8((r1(R+12))!=(u8(0x0ull))));
w1(R+12,u8(0-u32(r1(R+12))));
}
B413ebf:{NFSU2_TR(0x413ebf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413ec0:{NFSU2_TR(0x413ec0);
u8 U[2];
__builtin_memmove((U+0),(R+512),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(R+12))));
w1(R+12,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B413ec2:{NFSU2_TR(0x413ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413ec3:{NFSU2_TR(0x413ec3);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B413ec5:{NFSU2_TR(0x413ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413ec6:{NFSU2_TR(0x413ec6);
__builtin_memmove((R+0),(R+12),1);
}
B413ec8:{NFSU2_TR(0x413ec8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413ec9:{NFSU2_TR(0x413ec9);
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
B413ecc:{NFSU2_TR(0x413ecc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413ecf:L413ecf:{c.instructions+=8;NFSU2_TR(0x413ecf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413ed3:{NFSU2_TR(0x413ed3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B413ed6:{NFSU2_TR(0x413ed6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B413ed8:{NFSU2_TR(0x413ed8);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B413edc:{NFSU2_TR(0x413edc);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B413edf:{NFSU2_TR(0x413edf);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B413ee2:{NFSU2_TR(0x413ee2);
w4(R+28,u32(s32(s16(r2(R+24)))));
}
B413ee5:{NFSU2_TR(0x413ee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413eeb;}}
}
B413ee7:L413ee7:{c.instructions+=2;NFSU2_TR(0x413ee7);
__builtin_memmove((R+0),(R+24),4);
}
B413ee9:{NFSU2_TR(0x413ee9);
{goto L413eef;}
}
B413eeb:L413eeb:{c.instructions+=1;NFSU2_TR(0x413eeb);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B413eef:L413eef:{c.instructions+=6;NFSU2_TR(0x413eef);
__builtin_memmove((R+24),gp(0x81cb78),4);
}
B413ef5:{NFSU2_TR(0x413ef5);
__builtin_memmove((R+8),gp(0x81cb7c),4);
}
B413efb:{NFSU2_TR(0x413efb);
w4(R+4,u32(s32(s16(r2(R+0)))));
}
B413efe:{NFSU2_TR(0x413efe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B413f00:{NFSU2_TR(0x413f00);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413f02:{NFSU2_TR(0x413f02);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413f13;}}
}
B413f04:L413f04:{c.instructions+=2;NFSU2_TR(0x413f04);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413f06:{NFSU2_TR(0x413f06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413f13;}}
}
B413f08:L413f08:{c.instructions+=5;NFSU2_TR(0x413f08);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B413f0b:{NFSU2_TR(0x413f0b);
__builtin_memmove((R+12),(R+518),1);
}
B413f0e:{NFSU2_TR(0x413f0e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B413f0f:{NFSU2_TR(0x413f0f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B413f11:{NFSU2_TR(0x413f11);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413f04u);}goto L413f04;}}
}
B413f13:L413f13:{c.instructions+=4;NFSU2_TR(0x413f13);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B413f15:{NFSU2_TR(0x413f15);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B413f17:{NFSU2_TR(0x413f17);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413f19:{NFSU2_TR(0x413f19);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L413f33;}}
}
B413f1b:L413f1b:{c.instructions+=1;NFSU2_TR(0x413f1b);
{goto L413f20;}
}
B413f20:L413f20:{c.instructions+=2;NFSU2_TR(0x413f20);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413f22:{NFSU2_TR(0x413f22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413f43;}}
}
B413f24:L413f24:{c.instructions+=5;NFSU2_TR(0x413f24);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+28))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B413f27:{NFSU2_TR(0x413f27);
__builtin_memmove((R+4),(R+518),1);
}
B413f2a:{NFSU2_TR(0x413f2a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B413f2b:{NFSU2_TR(0x413f2b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B413f2d:{NFSU2_TR(0x413f2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x413f20u);}goto L413f20;}}
}
B413f2f:L413f2f:{c.instructions+=2;NFSU2_TR(0x413f2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413f31:{NFSU2_TR(0x413f31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L413f43;}}
}
B413f33:L413f33:{c.instructions+=4;NFSU2_TR(0x413f33);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413f37:{NFSU2_TR(0x413f37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413f3a:{NFSU2_TR(0x413f3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413f3c:{NFSU2_TR(0x413f3c);
if(r1(R+518)){{goto L413f43;}}
}
B413f3e:L413f3e:{c.instructions+=1;NFSU2_TR(0x413f3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413f43ull));
TAIL_STATIC(0x5f82c0u,5f8);
}
B413f43:L413f43:{c.instructions+=7;NFSU2_TR(0x413f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413f44:{NFSU2_TR(0x413f44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413f45:{NFSU2_TR(0x413f45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B413f46:{NFSU2_TR(0x413f46);
__builtin_memmove((R+0),(R+12),1);
}
B413f48:{NFSU2_TR(0x413f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B413f49:{NFSU2_TR(0x413f49);
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
B413f4c:{NFSU2_TR(0x413f4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413f50:L413f50:{c.instructions+=5;NFSU2_TR(0x413f50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413f51:{NFSU2_TR(0x413f51);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B413f55:{NFSU2_TR(0x413f55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413f56:{NFSU2_TR(0x413f56);
__builtin_memmove((R+4),(R+24),4);
}
B413f58:{NFSU2_TR(0x413f58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413f5dull));
TAIL_STATIC(0x5d86a0u,5d8);
}
B413f5d:L413f5d:{c.instructions+=4;NFSU2_TR(0x413f5d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413f5f:{NFSU2_TR(0x413f5f);
__builtin_memmove((R+4),(R+24),4);
}
B413f61:{NFSU2_TR(0x413f61);
__builtin_memmove((R+28),(R+0),4);
}
B413f63:{NFSU2_TR(0x413f63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413f68ull));
TAIL_STATIC(0x5dcbe0u,5dc);
}
B413f68:L413f68:{c.instructions+=2;NFSU2_TR(0x413f68);
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
B413f6a:{NFSU2_TR(0x413f6a);
if(r1(R+518)){{goto L413f73;}}
}
B413f6c:L413f6c:{c.instructions+=4;NFSU2_TR(0x413f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B413f6d:{NFSU2_TR(0x413f6d);
w1(R+0,u8(0x1ull));
}
B413f6f:{NFSU2_TR(0x413f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B413f70:{NFSU2_TR(0x413f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B413f73:L413f73:{c.instructions+=7;NFSU2_TR(0x413f73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413f74:{NFSU2_TR(0x413f74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B413f77:{NFSU2_TR(0x413f77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B413f79:{NFSU2_TR(0x413f79);
__builtin_memmove((R+0),(R+12),1);
}
B413f7b:{NFSU2_TR(0x413f7b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B413f7e:{NFSU2_TR(0x413f7e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413f81:{NFSU2_TR(0x413f81);
if(r1(R+518)){TAIL_STATIC(0x414060u,414);}
}
B413f87:L413f87:{c.instructions+=2;NFSU2_TR(0x413f87);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B413f8a:{NFSU2_TR(0x413f8a);
if(r1(R+518)){TAIL_STATIC(0x414060u,414);}
}
B413f90:L413f90:{c.instructions+=2;NFSU2_TR(0x413f90);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B413f92:{NFSU2_TR(0x413f92);
if(r1(R+518)){{goto L413fa3;}}
}
B413f94:L413f94:{c.instructions+=4;NFSU2_TR(0x413f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413f97:{NFSU2_TR(0x413f97);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B413f9a:{NFSU2_TR(0x413f9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413f9d:{NFSU2_TR(0x413f9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x414060u,414);}
}
B413fa3:L413fa3:{c.instructions+=5;NFSU2_TR(0x413fa3);
__builtin_memmove((R+0),(R+12),1);
}
B413fa5:{NFSU2_TR(0x413fa5);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B413fa7:{NFSU2_TR(0x413fa7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413fa9:{NFSU2_TR(0x413fa9);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B413fad:{NFSU2_TR(0x413fad);
if(r1(R+518)){TAIL_STATIC(0x414060u,414);}
}
B413fb3:L413fb3:{c.instructions+=4;NFSU2_TR(0x413fb3);
__builtin_memmove((R+8),(R+12),4);
}
B413fb5:{NFSU2_TR(0x413fb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B413fb8:{NFSU2_TR(0x413fb8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B413fbb:{NFSU2_TR(0x413fbb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x414060u,414);}
}
B413fc1:L413fc1:{c.instructions+=3;NFSU2_TR(0x413fc1);
__builtin_memmove((R+0),gp(0x890118),4);
}
B413fc6:{NFSU2_TR(0x413fc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x2ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B413fca:{NFSU2_TR(0x413fca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L413fd4;}}
}
B413fcc:L413fcc:{c.instructions+=2;NFSU2_TR(0x413fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B413fd2:{NFSU2_TR(0x413fd2);
{goto L413fd6;}
}
B413fd4:L413fd4:{c.instructions+=1;NFSU2_TR(0x413fd4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B413fd6:L413fd6:{c.instructions+=7;NFSU2_TR(0x413fd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B413fd8:{NFSU2_TR(0x413fd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B413fdc:{NFSU2_TR(0x413fdc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B413fdf:{NFSU2_TR(0x413fdf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413fe0:{NFSU2_TR(0x413fe0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x60ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x60ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B413fe3:{NFSU2_TR(0x413fe3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B413fe4:{NFSU2_TR(0x413fe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x413fe9ull));
TAIL_STATIC(0x401150u,401);
}
B413fe9:L413fe9:{c.instructions+=5;NFSU2_TR(0x413fe9);
{u32 ea_=u32(u32(7877972u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B413fef:{NFSU2_TR(0x413fef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B413ff2:{NFSU2_TR(0x413ff2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B413ff4:{NFSU2_TR(0x413ff4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B413ff7:{NFSU2_TR(0x413ff7);
if(r1(R+514)){TAIL_STATIC(0x414005u,414);}
}
B413ff9:L413ff9:{c.instructions+=2;NFSU2_TR(0x413ff9);
__builtin_memmove((R+8),gp(0x78354c),4);
}
B413fff:{NFSU2_TR(0x413fff);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x414003u,414);
}
XIT:NFSU2_TR_EXIT(0x413,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
