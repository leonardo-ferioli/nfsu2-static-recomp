#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_702(u8* __restrict R,Cpu& c);
u32 body_704(u8* __restrict R,Cpu& c);
u32 body_708(u8* __restrict R,Cpu& c);
u32 body_70a(u8* __restrict R,Cpu& c);
u32 body_70c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x703,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x703,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_703(u8* __restrict R,Cpu& c);
u32 page_703(Cpu& c){return body_703(c.regs.data(),c);}
__attribute__((noinline)) u32 body_703(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x703001:goto L703001;
case 0x703004:c.instructions+=2;goto B703004;
case 0x703009:c.instructions+=1;goto B703009;
case 0x70300b:goto L70300b;
case 0x70300f:c.instructions+=1;goto B70300f;
case 0x703011:goto L703011;
case 0x70301b:c.instructions+=2;goto B70301b;
case 0x703025:c.instructions+=1;goto B703025;
case 0x703027:goto L703027;
case 0x70302b:c.instructions+=1;goto B70302b;
case 0x70302d:goto L70302d;
case 0x703037:c.instructions+=2;goto B703037;
case 0x703041:c.instructions+=1;goto B703041;
case 0x703043:goto L703043;
case 0x70304d:c.instructions+=1;goto B70304d;
case 0x703057:goto L703057;
case 0x70305a:c.instructions+=1;goto B70305a;
case 0x70305f:goto L70305f;
case 0x703060:c.instructions+=2;goto B703060;
case 0x703061:c.instructions+=1;goto B703061;
case 0x703063:goto L703063;
case 0x703064:c.instructions+=10;goto B703064;
case 0x703066:c.instructions+=9;goto B703066;
case 0x703067:c.instructions+=8;goto B703067;
case 0x703068:c.instructions+=7;goto B703068;
case 0x70306b:c.instructions+=6;goto B70306b;
case 0x703071:c.instructions+=5;goto B703071;
case 0x703073:c.instructions+=4;goto B703073;
case 0x703074:c.instructions+=3;goto B703074;
case 0x703076:c.instructions+=2;goto B703076;
case 0x703078:c.instructions+=1;goto B703078;
case 0x70307a:goto L70307a;
case 0x70307b:c.instructions+=1;goto B70307b;
case 0x703080:goto L703080;
case 0x703081:goto L703081;
case 0x703083:c.instructions+=5;goto B703083;
case 0x703089:c.instructions+=4;goto B703089;
case 0x70308b:c.instructions+=3;goto B70308b;
case 0x70308d:c.instructions+=2;goto B70308d;
case 0x703093:c.instructions+=1;goto B703093;
case 0x703095:goto L703095;
case 0x703096:c.instructions+=1;goto B703096;
case 0x70309b:goto L70309b;
case 0x70309c:goto L70309c;
case 0x70309e:c.instructions+=5;goto B70309e;
case 0x7030a4:c.instructions+=4;goto B7030a4;
case 0x7030a6:c.instructions+=3;goto B7030a6;
case 0x7030a8:c.instructions+=2;goto B7030a8;
case 0x7030ab:c.instructions+=1;goto B7030ab;
case 0x7030ad:goto L7030ad;
case 0x7030ae:c.instructions+=1;goto B7030ae;
case 0x7030b3:goto L7030b3;
case 0x7030b4:goto L7030b4;
case 0x7030b6:c.instructions+=5;goto B7030b6;
case 0x7030bc:c.instructions+=4;goto B7030bc;
case 0x7030be:c.instructions+=3;goto B7030be;
case 0x7030c0:c.instructions+=2;goto B7030c0;
case 0x7030c3:c.instructions+=1;goto B7030c3;
case 0x7030c5:goto L7030c5;
case 0x7030c6:c.instructions+=1;goto B7030c6;
case 0x7030cb:goto L7030cb;
case 0x7030cc:goto L7030cc;
case 0x7030ce:c.instructions+=5;goto B7030ce;
case 0x7030d4:c.instructions+=4;goto B7030d4;
case 0x7030d6:c.instructions+=3;goto B7030d6;
case 0x7030d8:c.instructions+=2;goto B7030d8;
case 0x7030db:c.instructions+=1;goto B7030db;
case 0x7030dd:goto L7030dd;
case 0x7030de:c.instructions+=1;goto B7030de;
case 0x7030e3:goto L7030e3;
case 0x7030e4:goto L7030e4;
case 0x7030e6:c.instructions+=5;goto B7030e6;
case 0x7030ec:c.instructions+=4;goto B7030ec;
case 0x7030ee:c.instructions+=3;goto B7030ee;
case 0x7030f0:c.instructions+=2;goto B7030f0;
case 0x7030f3:c.instructions+=1;goto B7030f3;
case 0x7030f5:goto L7030f5;
case 0x7030f6:c.instructions+=1;goto B7030f6;
case 0x7030fb:goto L7030fb;
case 0x7030fc:goto L7030fc;
case 0x7030fe:c.instructions+=6;goto B7030fe;
case 0x703101:c.instructions+=5;goto B703101;
case 0x703102:c.instructions+=4;goto B703102;
case 0x703103:c.instructions+=3;goto B703103;
case 0x703104:c.instructions+=2;goto B703104;
case 0x703105:c.instructions+=1;goto B703105;
case 0x703106:goto L703106;
case 0x703107:c.instructions+=6;goto B703107;
case 0x703109:c.instructions+=5;goto B703109;
case 0x70310a:c.instructions+=4;goto B70310a;
case 0x70310b:c.instructions+=3;goto B70310b;
case 0x70310e:c.instructions+=2;goto B70310e;
case 0x70310f:c.instructions+=1;goto B70310f;
case 0x703114:goto L703114;
case 0x70311a:c.instructions+=10;goto B70311a;
case 0x70311d:c.instructions+=9;goto B70311d;
case 0x703120:c.instructions+=8;goto B703120;
case 0x703127:c.instructions+=7;goto B703127;
case 0x70312a:c.instructions+=6;goto B70312a;
case 0x70312c:c.instructions+=5;goto B70312c;
case 0x70312e:c.instructions+=4;goto B70312e;
case 0x703131:c.instructions+=3;goto B703131;
case 0x703132:c.instructions+=2;goto B703132;
case 0x703133:c.instructions+=1;goto B703133;
case 0x703138:goto L703138;
case 0x70313b:c.instructions+=3;goto B70313b;
case 0x70313d:c.instructions+=2;goto B70313d;
case 0x703143:c.instructions+=1;goto B703143;
case 0x703145:goto L703145;
case 0x703146:c.instructions+=1;goto B703146;
case 0x70314b:goto L70314b;
case 0x70314c:c.instructions+=2;goto B70314c;
case 0x70314e:c.instructions+=1;goto B70314e;
case 0x703153:goto L703153;
case 0x703154:c.instructions+=7;goto B703154;
case 0x703157:c.instructions+=6;goto B703157;
case 0x70315a:c.instructions+=5;goto B70315a;
case 0x70315b:c.instructions+=4;goto B70315b;
case 0x703160:c.instructions+=3;goto B703160;
case 0x703161:c.instructions+=2;goto B703161;
case 0x703167:c.instructions+=1;goto B703167;
case 0x70316c:goto L70316c;
case 0x70316e:c.instructions+=4;goto B70316e;
case 0x70316f:c.instructions+=3;goto B70316f;
case 0x703170:c.instructions+=2;goto B703170;
case 0x703176:c.instructions+=1;goto B703176;
case 0x703178:goto L703178;
case 0x703179:c.instructions+=1;goto B703179;
case 0x70317e:goto L70317e;
case 0x70317f:c.instructions+=2;goto B70317f;
case 0x703181:c.instructions+=1;goto B703181;
case 0x703186:goto L703186;
case 0x703189:c.instructions+=5;goto B703189;
case 0x70318c:c.instructions+=4;goto B70318c;
case 0x70318d:c.instructions+=3;goto B70318d;
case 0x70318e:c.instructions+=2;goto B70318e;
case 0x703191:c.instructions+=1;goto B703191;
case 0x703196:goto L703196;
case 0x703198:c.instructions+=4;goto B703198;
case 0x703199:c.instructions+=3;goto B703199;
case 0x70319a:c.instructions+=2;goto B70319a;
case 0x7031a0:c.instructions+=1;goto B7031a0;
case 0x7031a2:goto L7031a2;
case 0x7031a4:c.instructions+=9;goto B7031a4;
case 0x7031a7:c.instructions+=8;goto B7031a7;
case 0x7031a8:c.instructions+=7;goto B7031a8;
case 0x7031aa:c.instructions+=6;goto B7031aa;
case 0x7031ad:c.instructions+=5;goto B7031ad;
case 0x7031b3:c.instructions+=4;goto B7031b3;
case 0x7031ba:c.instructions+=3;goto B7031ba;
case 0x7031bb:c.instructions+=2;goto B7031bb;
case 0x7031bc:c.instructions+=1;goto B7031bc;
case 0x7031c1:goto L7031c1;
case 0x7031c3:c.instructions+=4;goto B7031c3;
case 0x7031c4:c.instructions+=3;goto B7031c4;
case 0x7031c5:c.instructions+=2;goto B7031c5;
case 0x7031cb:c.instructions+=1;goto B7031cb;
case 0x7031cd:goto L7031cd;
case 0x7031d0:c.instructions+=7;goto B7031d0;
case 0x7031d2:c.instructions+=6;goto B7031d2;
case 0x7031d5:c.instructions+=5;goto B7031d5;
case 0x7031db:c.instructions+=4;goto B7031db;
case 0x7031e2:c.instructions+=3;goto B7031e2;
case 0x7031e3:c.instructions+=2;goto B7031e3;
case 0x7031e4:c.instructions+=1;goto B7031e4;
case 0x7031e9:goto L7031e9;
case 0x7031eb:c.instructions+=4;goto B7031eb;
case 0x7031ec:c.instructions+=3;goto B7031ec;
case 0x7031ed:c.instructions+=2;goto B7031ed;
case 0x7031f3:c.instructions+=1;goto B7031f3;
case 0x7031f5:goto L7031f5;
case 0x7031f8:c.instructions+=7;goto B7031f8;
case 0x7031fa:c.instructions+=6;goto B7031fa;
case 0x7031fd:c.instructions+=5;goto B7031fd;
case 0x703203:c.instructions+=4;goto B703203;
case 0x703206:c.instructions+=3;goto B703206;
case 0x703207:c.instructions+=2;goto B703207;
case 0x703208:c.instructions+=1;goto B703208;
case 0x70320d:goto L70320d;
case 0x70320f:c.instructions+=4;goto B70320f;
case 0x703210:c.instructions+=3;goto B703210;
case 0x703211:c.instructions+=2;goto B703211;
case 0x703217:c.instructions+=1;goto B703217;
case 0x70321d:goto L70321d;
case 0x703220:c.instructions+=4;goto B703220;
case 0x703222:c.instructions+=3;goto B703222;
case 0x703225:c.instructions+=2;goto B703225;
case 0x703227:c.instructions+=1;goto B703227;
case 0x703228:goto L703228;
case 0x703229:goto L703229;
case 0x70322a:c.instructions+=3;goto B70322a;
case 0x70322b:c.instructions+=2;goto B70322b;
case 0x70322c:c.instructions+=1;goto B70322c;
case 0x70322d:goto L70322d;
case 0x70322e:c.instructions+=10;goto B70322e;
case 0x703230:c.instructions+=9;goto B703230;
case 0x703233:c.instructions+=8;goto B703233;
case 0x703234:c.instructions+=7;goto B703234;
case 0x703235:c.instructions+=6;goto B703235;
case 0x703238:c.instructions+=5;goto B703238;
case 0x703239:c.instructions+=4;goto B703239;
case 0x70323b:c.instructions+=3;goto B70323b;
case 0x70323e:c.instructions+=2;goto B70323e;
case 0x703240:c.instructions+=1;goto B703240;
case 0x703241:goto L703241;
case 0x703243:goto L703243;
case 0x703245:c.instructions+=51;goto B703245;
case 0x703248:c.instructions+=50;goto B703248;
case 0x70324b:c.instructions+=49;goto B70324b;
case 0x70324e:c.instructions+=48;goto B70324e;
case 0x703251:c.instructions+=47;goto B703251;
case 0x703253:c.instructions+=46;goto B703253;
case 0x703256:c.instructions+=45;goto B703256;
case 0x70325c:c.instructions+=44;goto B70325c;
case 0x70325f:c.instructions+=43;goto B70325f;
case 0x703265:c.instructions+=42;goto B703265;
case 0x703267:c.instructions+=41;goto B703267;
case 0x70326a:c.instructions+=40;goto B70326a;
case 0x703270:c.instructions+=39;goto B703270;
case 0x703273:c.instructions+=38;goto B703273;
case 0x703279:c.instructions+=37;goto B703279;
case 0x70327b:c.instructions+=36;goto B70327b;
case 0x70327e:c.instructions+=35;goto B70327e;
case 0x703284:c.instructions+=34;goto B703284;
case 0x703286:c.instructions+=33;goto B703286;
case 0x703288:c.instructions+=32;goto B703288;
case 0x70328a:c.instructions+=31;goto B70328a;
case 0x70328d:c.instructions+=30;goto B70328d;
case 0x70328f:c.instructions+=29;goto B70328f;
case 0x703292:c.instructions+=28;goto B703292;
case 0x703298:c.instructions+=27;goto B703298;
case 0x70329b:c.instructions+=26;goto B70329b;
case 0x70329e:c.instructions+=25;goto B70329e;
case 0x7032a1:c.instructions+=24;goto B7032a1;
case 0x7032a4:c.instructions+=23;goto B7032a4;
case 0x7032aa:c.instructions+=22;goto B7032aa;
case 0x7032ac:c.instructions+=21;goto B7032ac;
case 0x7032ae:c.instructions+=20;goto B7032ae;
case 0x7032af:c.instructions+=19;goto B7032af;
case 0x7032b2:c.instructions+=18;goto B7032b2;
case 0x7032b4:c.instructions+=17;goto B7032b4;
case 0x7032b6:c.instructions+=16;goto B7032b6;
case 0x7032b8:c.instructions+=15;goto B7032b8;
case 0x7032bb:c.instructions+=14;goto B7032bb;
case 0x7032c1:c.instructions+=13;goto B7032c1;
case 0x7032c4:c.instructions+=12;goto B7032c4;
case 0x7032c7:c.instructions+=11;goto B7032c7;
case 0x7032c9:c.instructions+=10;goto B7032c9;
case 0x7032cc:c.instructions+=9;goto B7032cc;
case 0x7032ce:c.instructions+=8;goto B7032ce;
case 0x7032d0:c.instructions+=7;goto B7032d0;
case 0x7032d2:c.instructions+=6;goto B7032d2;
case 0x7032d8:c.instructions+=5;goto B7032d8;
case 0x7032d9:c.instructions+=4;goto B7032d9;
case 0x7032da:c.instructions+=3;goto B7032da;
case 0x7032db:c.instructions+=2;goto B7032db;
case 0x7032dc:c.instructions+=1;goto B7032dc;
case 0x7032dd:goto L7032dd;
case 0x7032de:c.instructions+=5;goto B7032de;
case 0x7032e0:c.instructions+=4;goto B7032e0;
case 0x7032e1:c.instructions+=3;goto B7032e1;
case 0x7032e3:c.instructions+=2;goto B7032e3;
case 0x7032e8:c.instructions+=1;goto B7032e8;
case 0x7032ed:goto L7032ed;
case 0x7032ef:c.instructions+=5;goto B7032ef;
case 0x7032f0:c.instructions+=4;goto B7032f0;
case 0x7032f2:c.instructions+=3;goto B7032f2;
case 0x7032f4:c.instructions+=2;goto B7032f4;
case 0x7032f5:c.instructions+=1;goto B7032f5;
case 0x7032f7:goto L7032f7;
case 0x7032f8:c.instructions+=5;goto B7032f8;
case 0x7032fa:c.instructions+=4;goto B7032fa;
case 0x7032fb:c.instructions+=3;goto B7032fb;
case 0x7032fe:c.instructions+=2;goto B7032fe;
case 0x703300:c.instructions+=1;goto B703300;
case 0x703301:goto L703301;
case 0x703303:goto L703303;
case 0x703308:goto L703308;
case 0x703309:c.instructions+=4;goto B703309;
case 0x70330a:c.instructions+=3;goto B70330a;
case 0x703314:c.instructions+=2;goto B703314;
case 0x703316:c.instructions+=1;goto B703316;
case 0x703317:goto L703317;
case 0x703318:c.instructions+=2;goto B703318;
case 0x703319:c.instructions+=1;goto B703319;
case 0x70331a:goto L70331a;
case 0x70331b:c.instructions+=6;goto B70331b;
case 0x70331d:c.instructions+=5;goto B70331d;
case 0x70331e:c.instructions+=4;goto B70331e;
case 0x703321:c.instructions+=3;goto B703321;
case 0x703323:c.instructions+=2;goto B703323;
case 0x703325:c.instructions+=1;goto B703325;
case 0x703327:goto L703327;
case 0x703328:c.instructions+=1;goto B703328;
case 0x70332d:goto L70332d;
case 0x70332f:c.instructions+=1;goto B70332f;
case 0x703334:goto L703334;
case 0x703337:c.instructions+=2;goto B703337;
case 0x703338:c.instructions+=1;goto B703338;
case 0x703339:goto L703339;
case 0x70333a:c.instructions+=2;goto B70333a;
case 0x70333b:c.instructions+=1;goto B70333b;
case 0x70333c:goto L70333c;
case 0x70333d:c.instructions+=6;goto B70333d;
case 0x70333f:c.instructions+=5;goto B70333f;
case 0x703342:c.instructions+=4;goto B703342;
case 0x703345:c.instructions+=3;goto B703345;
case 0x703348:c.instructions+=2;goto B703348;
case 0x703349:c.instructions+=1;goto B703349;
case 0x70334a:goto L70334a;
case 0x70334b:c.instructions+=6;goto B70334b;
case 0x70334d:c.instructions+=5;goto B70334d;
case 0x703350:c.instructions+=4;goto B703350;
case 0x703353:c.instructions+=3;goto B703353;
case 0x703359:c.instructions+=2;goto B703359;
case 0x70335a:c.instructions+=1;goto B70335a;
case 0x70335b:goto L70335b;
case 0x70335c:c.instructions+=6;goto B70335c;
case 0x70335e:c.instructions+=5;goto B70335e;
case 0x703361:c.instructions+=4;goto B703361;
case 0x703364:c.instructions+=3;goto B703364;
case 0x70336a:c.instructions+=2;goto B70336a;
case 0x70336b:c.instructions+=1;goto B70336b;
case 0x70336c:goto L70336c;
case 0x70336d:c.instructions+=7;goto B70336d;
case 0x70336f:c.instructions+=6;goto B70336f;
case 0x703372:c.instructions+=5;goto B703372;
case 0x703374:c.instructions+=4;goto B703374;
case 0x70337a:c.instructions+=3;goto B70337a;
case 0x70337b:c.instructions+=2;goto B70337b;
case 0x70337e:c.instructions+=1;goto B70337e;
case 0x703380:goto L703380;
case 0x703381:goto L703381;
case 0x703384:c.instructions+=5;goto B703384;
case 0x703387:c.instructions+=4;goto B703387;
case 0x70338a:c.instructions+=3;goto B70338a;
case 0x70338d:c.instructions+=2;goto B70338d;
case 0x703390:c.instructions+=1;goto B703390;
case 0x703392:goto L703392;
case 0x703395:c.instructions+=1;goto B703395;
case 0x703398:goto L703398;
case 0x703399:c.instructions+=2;goto B703399;
case 0x70339f:c.instructions+=1;goto B70339f;
case 0x7033a1:goto L7033a1;
case 0x7033a2:goto L7033a2;
case 0x7033a3:c.instructions+=2;goto B7033a3;
case 0x7033a4:c.instructions+=1;goto B7033a4;
case 0x7033a5:goto L7033a5;
case 0x7033a6:c.instructions+=11;goto B7033a6;
case 0x7033a8:c.instructions+=10;goto B7033a8;
case 0x7033ab:c.instructions+=9;goto B7033ab;
case 0x7033ae:c.instructions+=8;goto B7033ae;
case 0x7033b1:c.instructions+=7;goto B7033b1;
case 0x7033b4:c.instructions+=6;goto B7033b4;
case 0x7033b7:c.instructions+=5;goto B7033b7;
case 0x7033ba:c.instructions+=4;goto B7033ba;
case 0x7033bc:c.instructions+=3;goto B7033bc;
case 0x7033be:c.instructions+=2;goto B7033be;
case 0x7033c0:c.instructions+=1;goto B7033c0;
case 0x7033c5:goto L7033c5;
case 0x7033cb:c.instructions+=5;goto B7033cb;
case 0x7033cd:c.instructions+=4;goto B7033cd;
case 0x7033d0:c.instructions+=3;goto B7033d0;
case 0x7033d2:c.instructions+=2;goto B7033d2;
case 0x7033d3:c.instructions+=1;goto B7033d3;
case 0x7033d4:goto L7033d4;
case 0x7033d5:c.instructions+=16;goto B7033d5;
case 0x7033d7:c.instructions+=15;goto B7033d7;
case 0x7033dd:c.instructions+=14;goto B7033dd;
case 0x7033de:c.instructions+=13;goto B7033de;
case 0x7033df:c.instructions+=12;goto B7033df;
case 0x7033e0:c.instructions+=11;goto B7033e0;
case 0x7033e2:c.instructions+=10;goto B7033e2;
case 0x7033e3:c.instructions+=9;goto B7033e3;
case 0x7033e6:c.instructions+=8;goto B7033e6;
case 0x7033e8:c.instructions+=7;goto B7033e8;
case 0x7033eb:c.instructions+=6;goto B7033eb;
case 0x7033ee:c.instructions+=5;goto B7033ee;
case 0x7033f4:c.instructions+=4;goto B7033f4;
case 0x7033fa:c.instructions+=3;goto B7033fa;
case 0x7033fd:c.instructions+=2;goto B7033fd;
case 0x703403:c.instructions+=1;goto B703403;
case 0x703406:goto L703406;
case 0x703409:c.instructions+=7;goto B703409;
case 0x70340c:c.instructions+=6;goto B70340c;
case 0x703410:c.instructions+=5;goto B703410;
case 0x703412:c.instructions+=4;goto B703412;
case 0x703416:c.instructions+=3;goto B703416;
case 0x703419:c.instructions+=2;goto B703419;
case 0x70341c:c.instructions+=1;goto B70341c;
case 0x703421:goto L703421;
case 0x703427:c.instructions+=3;goto B703427;
case 0x70342a:c.instructions+=2;goto B70342a;
case 0x703430:c.instructions+=1;goto B703430;
case 0x703435:goto L703435;
case 0x703437:c.instructions+=3;goto B703437;
case 0x703439:c.instructions+=2;goto B703439;
case 0x70343c:c.instructions+=1;goto B70343c;
case 0x70343e:goto L70343e;
case 0x703440:c.instructions+=2;goto B703440;
case 0x703442:c.instructions+=1;goto B703442;
case 0x703444:goto L703444;
case 0x703447:c.instructions+=2;goto B703447;
case 0x70344e:c.instructions+=1;goto B70344e;
case 0x703453:goto L703453;
case 0x703455:c.instructions+=7;goto B703455;
case 0x703457:c.instructions+=6;goto B703457;
case 0x703459:c.instructions+=5;goto B703459;
case 0x70345b:c.instructions+=4;goto B70345b;
case 0x70345e:c.instructions+=3;goto B70345e;
case 0x703460:c.instructions+=2;goto B703460;
case 0x703463:c.instructions+=1;goto B703463;
case 0x703466:goto L703466;
case 0x703468:goto L703468;
case 0x70346a:c.instructions+=1;goto B70346a;
case 0x70346d:goto L70346d;
case 0x70346f:goto L70346f;
case 0x703471:goto L703471;
case 0x703473:goto L703473;
case 0x703476:c.instructions+=6;goto B703476;
case 0x70347c:c.instructions+=5;goto B70347c;
case 0x70347f:c.instructions+=4;goto B70347f;
case 0x703485:c.instructions+=3;goto B703485;
case 0x703487:c.instructions+=2;goto B703487;
case 0x70348a:c.instructions+=1;goto B70348a;
case 0x703490:goto L703490;
case 0x703495:c.instructions+=2;goto B703495;
case 0x703497:c.instructions+=1;goto B703497;
case 0x703499:goto L703499;
case 0x70349b:c.instructions+=4;goto B70349b;
case 0x70349d:c.instructions+=3;goto B70349d;
case 0x7034a0:c.instructions+=2;goto B7034a0;
case 0x7034a2:c.instructions+=1;goto B7034a2;
case 0x7034a9:goto L7034a9;
case 0x7034ab:goto L7034ab;
case 0x7034ad:c.instructions+=1;goto B7034ad;
case 0x7034b0:goto L7034b0;
case 0x7034b2:goto L7034b2;
case 0x7034b4:goto L7034b4;
case 0x7034b9:goto L7034b9;
case 0x7034be:c.instructions+=5;goto B7034be;
case 0x7034c5:c.instructions+=4;goto B7034c5;
case 0x7034cc:c.instructions+=3;goto B7034cc;
case 0x7034cd:c.instructions+=2;goto B7034cd;
case 0x7034d3:c.instructions+=1;goto B7034d3;
case 0x7034d5:goto L7034d5;
case 0x7034d8:c.instructions+=2;goto B7034d8;
case 0x7034da:c.instructions+=1;goto B7034da;
case 0x7034dc:goto L7034dc;
case 0x7034df:c.instructions+=2;goto B7034df;
case 0x7034e2:c.instructions+=1;goto B7034e2;
case 0x7034e5:goto L7034e5;
case 0x7034ea:goto L7034ea;
case 0x7034ed:c.instructions+=4;goto B7034ed;
case 0x7034f2:c.instructions+=3;goto B7034f2;
case 0x7034f4:c.instructions+=2;goto B7034f4;
case 0x7034fb:c.instructions+=1;goto B7034fb;
case 0x7034fd:goto L7034fd;
case 0x703504:c.instructions+=8;goto B703504;
case 0x70350a:c.instructions+=7;goto B70350a;
case 0x70350c:c.instructions+=6;goto B70350c;
case 0x70350e:c.instructions+=5;goto B70350e;
case 0x703511:c.instructions+=4;goto B703511;
case 0x703517:c.instructions+=3;goto B703517;
case 0x703519:c.instructions+=2;goto B703519;
case 0x70351b:c.instructions+=1;goto B70351b;
case 0x70351e:goto L70351e;
case 0x703521:c.instructions+=2;goto B703521;
case 0x703523:c.instructions+=1;goto B703523;
case 0x703525:goto L703525;
case 0x703528:c.instructions+=1;goto B703528;
case 0x70352a:goto L70352a;
case 0x70352d:c.instructions+=2;goto B70352d;
case 0x70352f:c.instructions+=1;goto B70352f;
case 0x703531:goto L703531;
case 0x703534:c.instructions+=3;goto B703534;
case 0x703537:c.instructions+=2;goto B703537;
case 0x70353d:c.instructions+=1;goto B70353d;
case 0x70353f:goto L70353f;
case 0x703542:c.instructions+=4;goto B703542;
case 0x703544:c.instructions+=3;goto B703544;
case 0x703545:c.instructions+=2;goto B703545;
case 0x703548:c.instructions+=1;goto B703548;
case 0x70354a:goto L70354a;
case 0x70354d:c.instructions+=3;goto B70354d;
case 0x703550:c.instructions+=2;goto B703550;
case 0x703553:c.instructions+=1;goto B703553;
case 0x703555:goto L703555;
case 0x703556:c.instructions+=4;goto B703556;
case 0x703557:c.instructions+=3;goto B703557;
case 0x703558:c.instructions+=2;goto B703558;
case 0x703559:c.instructions+=1;goto B703559;
case 0x70355a:goto L70355a;
case 0x70355b:c.instructions+=26;goto B70355b;
case 0x70355d:c.instructions+=25;goto B70355d;
case 0x703560:c.instructions+=24;goto B703560;
case 0x703563:c.instructions+=23;goto B703563;
case 0x703566:c.instructions+=22;goto B703566;
case 0x703567:c.instructions+=21;goto B703567;
case 0x70356a:c.instructions+=20;goto B70356a;
case 0x70356d:c.instructions+=19;goto B70356d;
case 0x703570:c.instructions+=18;goto B703570;
case 0x703573:c.instructions+=17;goto B703573;
case 0x703576:c.instructions+=16;goto B703576;
case 0x703579:c.instructions+=15;goto B703579;
case 0x70357c:c.instructions+=14;goto B70357c;
case 0x70357d:c.instructions+=13;goto B70357d;
case 0x703580:c.instructions+=12;goto B703580;
case 0x703583:c.instructions+=11;goto B703583;
case 0x703586:c.instructions+=10;goto B703586;
case 0x703589:c.instructions+=9;goto B703589;
case 0x70358a:c.instructions+=8;goto B70358a;
case 0x70358d:c.instructions+=7;goto B70358d;
case 0x70358f:c.instructions+=6;goto B70358f;
case 0x703591:c.instructions+=5;goto B703591;
case 0x703593:c.instructions+=4;goto B703593;
case 0x703596:c.instructions+=3;goto B703596;
case 0x703599:c.instructions+=2;goto B703599;
case 0x70359c:c.instructions+=1;goto B70359c;
case 0x7035a2:goto L7035a2;
case 0x7035a5:c.instructions+=1;goto B7035a5;
case 0x7035ab:goto L7035ab;
case 0x7035ae:c.instructions+=1;goto B7035ae;
case 0x7035b4:goto L7035b4;
case 0x7035ba:goto L7035ba;
case 0x7035bd:c.instructions+=1;goto B7035bd;
case 0x7035c3:goto L7035c3;
case 0x7035c6:c.instructions+=1;goto B7035c6;
case 0x7035c8:goto L7035c8;
case 0x7035cb:c.instructions+=1;goto B7035cb;
case 0x7035d1:goto L7035d1;
case 0x7035d2:c.instructions+=1;goto B7035d2;
case 0x7035d7:goto L7035d7;
case 0x7035da:c.instructions+=2;goto B7035da;
case 0x7035db:c.instructions+=1;goto B7035db;
case 0x7035e1:goto L7035e1;
case 0x7035e5:c.instructions+=1;goto B7035e5;
case 0x7035e7:goto L7035e7;
case 0x7035ee:c.instructions+=1;goto B7035ee;
case 0x7035f0:goto L7035f0;
case 0x7035f6:c.instructions+=3;goto B7035f6;
case 0x7035f9:c.instructions+=2;goto B7035f9;
case 0x7035fa:c.instructions+=1;goto B7035fa;
case 0x7035ff:goto L7035ff;
case 0x703601:goto L703601;
case 0x703604:c.instructions+=3;goto B703604;
case 0x703607:c.instructions+=2;goto B703607;
case 0x703608:c.instructions+=1;goto B703608;
case 0x70360d:goto L70360d;
case 0x703612:goto L703612;
case 0x703615:c.instructions+=1;goto B703615;
case 0x70361b:goto L70361b;
case 0x70361e:c.instructions+=1;goto B70361e;
case 0x703624:goto L703624;
case 0x70362a:c.instructions+=1;goto B70362a;
case 0x703630:goto L703630;
case 0x703636:c.instructions+=3;goto B703636;
case 0x703637:c.instructions+=2;goto B703637;
case 0x703638:c.instructions+=1;goto B703638;
case 0x70363d:goto L70363d;
case 0x703643:c.instructions+=10;goto B703643;
case 0x70364a:c.instructions+=9;goto B70364a;
case 0x70364d:c.instructions+=8;goto B70364d;
case 0x703653:c.instructions+=7;goto B703653;
case 0x703656:c.instructions+=6;goto B703656;
case 0x703658:c.instructions+=5;goto B703658;
case 0x70365a:c.instructions+=4;goto B70365a;
case 0x70365c:c.instructions+=3;goto B70365c;
case 0x70365e:c.instructions+=2;goto B70365e;
case 0x703660:c.instructions+=1;goto B703660;
case 0x703663:goto L703663;
case 0x703665:goto L703665;
case 0x703667:c.instructions+=1;goto B703667;
case 0x70366a:goto L70366a;
case 0x70366c:goto L70366c;
case 0x703672:c.instructions+=6;goto B703672;
case 0x703678:c.instructions+=5;goto B703678;
case 0x70367b:c.instructions+=4;goto B70367b;
case 0x70367d:c.instructions+=3;goto B70367d;
case 0x703680:c.instructions+=2;goto B703680;
case 0x703682:c.instructions+=1;goto B703682;
case 0x703684:goto L703684;
case 0x703686:goto L703686;
case 0x703688:c.instructions+=1;goto B703688;
case 0x70368b:goto L70368b;
case 0x70368d:goto L70368d;
case 0x703693:c.instructions+=14;goto B703693;
case 0x703699:c.instructions+=13;goto B703699;
case 0x70369c:c.instructions+=12;goto B70369c;
case 0x70369f:c.instructions+=11;goto B70369f;
case 0x7036a0:c.instructions+=10;goto B7036a0;
case 0x7036a6:c.instructions+=9;goto B7036a6;
case 0x7036a9:c.instructions+=8;goto B7036a9;
case 0x7036aa:c.instructions+=7;goto B7036aa;
case 0x7036ad:c.instructions+=6;goto B7036ad;
case 0x7036af:c.instructions+=5;goto B7036af;
case 0x7036b0:c.instructions+=4;goto B7036b0;
case 0x7036b6:c.instructions+=3;goto B7036b6;
case 0x7036b8:c.instructions+=2;goto B7036b8;
case 0x7036b9:c.instructions+=1;goto B7036b9;
case 0x7036bf:goto L7036bf;
case 0x7036c4:goto L7036c4;
case 0x7036c5:c.instructions+=1;goto B7036c5;
case 0x7036ca:goto L7036ca;
case 0x7036cb:goto L7036cb;
case 0x7036ce:c.instructions+=1;goto B7036ce;
case 0x7036d1:goto L7036d1;
case 0x7036d2:c.instructions+=1;goto B7036d2;
case 0x7036d7:goto L7036d7;
case 0x7036da:c.instructions+=2;goto B7036da;
case 0x7036db:c.instructions+=1;goto B7036db;
case 0x7036e0:goto L7036e0;
case 0x7036e3:c.instructions+=4;goto B7036e3;
case 0x7036e4:c.instructions+=3;goto B7036e4;
case 0x7036e5:c.instructions+=2;goto B7036e5;
case 0x7036e6:c.instructions+=1;goto B7036e6;
case 0x7036eb:goto L7036eb;
case 0x7036f0:goto L7036f0;
case 0x7036f3:c.instructions+=1;goto B7036f3;
case 0x7036f5:goto L7036f5;
case 0x7036f6:c.instructions+=1;goto B7036f6;
case 0x7036fb:goto L7036fb;
case 0x7036fc:goto L7036fc;
case 0x7036ff:c.instructions+=3;goto B7036ff;
case 0x703702:c.instructions+=2;goto B703702;
case 0x703703:c.instructions+=1;goto B703703;
case 0x703708:goto L703708;
case 0x70370b:c.instructions+=2;goto B70370b;
case 0x70370c:c.instructions+=1;goto B70370c;
case 0x703711:goto L703711;
case 0x703714:c.instructions+=4;goto B703714;
case 0x703715:c.instructions+=3;goto B703715;
case 0x703716:c.instructions+=2;goto B703716;
case 0x703717:c.instructions+=1;goto B703717;
case 0x70371c:goto L70371c;
case 0x70371f:c.instructions+=2;goto B70371f;
case 0x703726:c.instructions+=1;goto B703726;
case 0x70372c:goto L70372c;
case 0x70372f:c.instructions+=11;goto B70372f;
case 0x703735:c.instructions+=10;goto B703735;
case 0x70373b:c.instructions+=9;goto B70373b;
case 0x70373e:c.instructions+=8;goto B70373e;
case 0x70373f:c.instructions+=7;goto B70373f;
case 0x703745:c.instructions+=6;goto B703745;
case 0x703748:c.instructions+=5;goto B703748;
case 0x703749:c.instructions+=4;goto B703749;
case 0x70374c:c.instructions+=3;goto B70374c;
case 0x70374f:c.instructions+=2;goto B70374f;
case 0x703750:c.instructions+=1;goto B703750;
case 0x703756:goto L703756;
case 0x70375b:goto L70375b;
case 0x70375e:c.instructions+=1;goto B70375e;
case 0x703760:goto L703760;
case 0x703766:c.instructions+=1;goto B703766;
case 0x703768:goto L703768;
case 0x703769:c.instructions+=3;goto B703769;
case 0x70376a:c.instructions+=2;goto B70376a;
case 0x70376b:c.instructions+=1;goto B70376b;
case 0x703770:goto L703770;
case 0x703773:c.instructions+=2;goto B703773;
case 0x703774:c.instructions+=1;goto B703774;
case 0x703779:goto L703779;
case 0x70377c:c.instructions+=4;goto B70377c;
case 0x70377d:c.instructions+=3;goto B70377d;
case 0x70377e:c.instructions+=2;goto B70377e;
case 0x70377f:c.instructions+=1;goto B70377f;
case 0x703784:goto L703784;
case 0x703787:c.instructions+=1;goto B703787;
case 0x70378c:goto L70378c;
case 0x703792:c.instructions+=3;goto B703792;
case 0x703793:c.instructions+=2;goto B703793;
case 0x703794:c.instructions+=1;goto B703794;
case 0x703799:goto L703799;
case 0x70379f:c.instructions+=2;goto B70379f;
case 0x7037a0:c.instructions+=1;goto B7037a0;
case 0x7037a5:goto L7037a5;
case 0x7037ab:c.instructions+=4;goto B7037ab;
case 0x7037ac:c.instructions+=3;goto B7037ac;
case 0x7037ad:c.instructions+=2;goto B7037ad;
case 0x7037ae:c.instructions+=1;goto B7037ae;
case 0x7037b3:goto L7037b3;
case 0x7037b9:c.instructions+=10;goto B7037b9;
case 0x7037c0:c.instructions+=9;goto B7037c0;
case 0x7037c3:c.instructions+=8;goto B7037c3;
case 0x7037c9:c.instructions+=7;goto B7037c9;
case 0x7037cc:c.instructions+=6;goto B7037cc;
case 0x7037ce:c.instructions+=5;goto B7037ce;
case 0x7037d0:c.instructions+=4;goto B7037d0;
case 0x7037d2:c.instructions+=3;goto B7037d2;
case 0x7037d4:c.instructions+=2;goto B7037d4;
case 0x7037d6:c.instructions+=1;goto B7037d6;
case 0x7037d9:goto L7037d9;
case 0x7037db:goto L7037db;
case 0x7037dd:c.instructions+=1;goto B7037dd;
case 0x7037e0:goto L7037e0;
case 0x7037e2:goto L7037e2;
case 0x7037e8:c.instructions+=6;goto B7037e8;
case 0x7037ee:c.instructions+=5;goto B7037ee;
case 0x7037f1:c.instructions+=4;goto B7037f1;
case 0x7037f3:c.instructions+=3;goto B7037f3;
case 0x7037f6:c.instructions+=2;goto B7037f6;
case 0x7037f8:c.instructions+=1;goto B7037f8;
case 0x7037fa:goto L7037fa;
case 0x7037fc:goto L7037fc;
case 0x7037fe:c.instructions+=1;goto B7037fe;
case 0x703801:goto L703801;
case 0x703803:goto L703803;
case 0x703809:c.instructions+=14;goto B703809;
case 0x70380f:c.instructions+=13;goto B70380f;
case 0x703812:c.instructions+=12;goto B703812;
case 0x703815:c.instructions+=11;goto B703815;
case 0x703816:c.instructions+=10;goto B703816;
case 0x70381c:c.instructions+=9;goto B70381c;
case 0x70381f:c.instructions+=8;goto B70381f;
case 0x703820:c.instructions+=7;goto B703820;
case 0x703823:c.instructions+=6;goto B703823;
case 0x703825:c.instructions+=5;goto B703825;
case 0x703826:c.instructions+=4;goto B703826;
case 0x70382c:c.instructions+=3;goto B70382c;
case 0x70382e:c.instructions+=2;goto B70382e;
case 0x70382f:c.instructions+=1;goto B70382f;
case 0x703835:goto L703835;
case 0x703838:c.instructions+=1;goto B703838;
case 0x70383d:goto L70383d;
case 0x70383e:c.instructions+=2;goto B70383e;
case 0x70383f:c.instructions+=1;goto B70383f;
case 0x703844:goto L703844;
case 0x703847:c.instructions+=1;goto B703847;
case 0x703849:goto L703849;
case 0x70384c:c.instructions+=1;goto B70384c;
case 0x70384e:goto L70384e;
case 0x703853:goto L703853;
case 0x703854:c.instructions+=3;goto B703854;
case 0x703855:c.instructions+=2;goto B703855;
case 0x703856:c.instructions+=1;goto B703856;
case 0x70385b:goto L70385b;
case 0x70385e:c.instructions+=1;goto B70385e;
case 0x703863:goto L703863;
case 0x703864:c.instructions+=1;goto B703864;
case 0x703869:goto L703869;
case 0x70386a:goto L70386a;
case 0x70386d:c.instructions+=3;goto B70386d;
case 0x703870:c.instructions+=2;goto B703870;
case 0x703871:c.instructions+=1;goto B703871;
case 0x703876:goto L703876;
case 0x703878:goto L703878;
case 0x703879:c.instructions+=1;goto B703879;
case 0x70387e:goto L70387e;
case 0x70387f:c.instructions+=1;goto B70387f;
case 0x703884:goto L703884;
case 0x703887:c.instructions+=1;goto B703887;
case 0x703889:goto L703889;
case 0x70388f:c.instructions+=1;goto B70388f;
case 0x703891:goto L703891;
case 0x703897:c.instructions+=8;goto B703897;
case 0x70389e:c.instructions+=7;goto B70389e;
case 0x7038a1:c.instructions+=6;goto B7038a1;
case 0x7038a3:c.instructions+=5;goto B7038a3;
case 0x7038a5:c.instructions+=4;goto B7038a5;
case 0x7038a7:c.instructions+=3;goto B7038a7;
case 0x7038a9:c.instructions+=2;goto B7038a9;
case 0x7038ab:c.instructions+=1;goto B7038ab;
case 0x7038ae:goto L7038ae;
case 0x7038b0:goto L7038b0;
case 0x7038b2:c.instructions+=1;goto B7038b2;
case 0x7038b5:goto L7038b5;
case 0x7038b7:goto L7038b7;
case 0x7038bd:c.instructions+=6;goto B7038bd;
case 0x7038c0:c.instructions+=5;goto B7038c0;
case 0x7038c3:c.instructions+=4;goto B7038c3;
case 0x7038c5:c.instructions+=3;goto B7038c5;
case 0x7038c8:c.instructions+=2;goto B7038c8;
case 0x7038ca:c.instructions+=1;goto B7038ca;
case 0x7038cc:goto L7038cc;
case 0x7038ce:goto L7038ce;
case 0x7038d0:c.instructions+=1;goto B7038d0;
case 0x7038d3:goto L7038d3;
case 0x7038d5:goto L7038d5;
case 0x7038db:c.instructions+=14;goto B7038db;
case 0x7038e1:c.instructions+=13;goto B7038e1;
case 0x7038e4:c.instructions+=12;goto B7038e4;
case 0x7038e7:c.instructions+=11;goto B7038e7;
case 0x7038e8:c.instructions+=10;goto B7038e8;
case 0x7038ee:c.instructions+=9;goto B7038ee;
case 0x7038f1:c.instructions+=8;goto B7038f1;
case 0x7038f2:c.instructions+=7;goto B7038f2;
case 0x7038f5:c.instructions+=6;goto B7038f5;
case 0x7038f7:c.instructions+=5;goto B7038f7;
case 0x7038f8:c.instructions+=4;goto B7038f8;
case 0x7038fb:c.instructions+=3;goto B7038fb;
case 0x7038fd:c.instructions+=2;goto B7038fd;
case 0x7038fe:c.instructions+=1;goto B7038fe;
case 0x703904:goto L703904;
case 0x703907:goto L703907;
case 0x703908:c.instructions+=4;goto B703908;
case 0x703909:c.instructions+=3;goto B703909;
case 0x70390a:c.instructions+=2;goto B70390a;
case 0x70390b:c.instructions+=1;goto B70390b;
case 0x70390c:goto L70390c;
case 0x70390d:c.instructions+=8;goto B70390d;
case 0x70390f:c.instructions+=7;goto B70390f;
case 0x703910:c.instructions+=6;goto B703910;
case 0x703911:c.instructions+=5;goto B703911;
case 0x703914:c.instructions+=4;goto B703914;
case 0x703916:c.instructions+=3;goto B703916;
case 0x703917:c.instructions+=2;goto B703917;
case 0x70391a:c.instructions+=1;goto B70391a;
case 0x70391f:goto L70391f;
case 0x703921:goto L703921;
case 0x703922:c.instructions+=3;goto B703922;
case 0x703923:c.instructions+=2;goto B703923;
case 0x703924:c.instructions+=1;goto B703924;
case 0x703925:goto L703925;
case 0x703926:c.instructions+=4;goto B703926;
case 0x703928:c.instructions+=3;goto B703928;
case 0x70392b:c.instructions+=2;goto B70392b;
case 0x703935:c.instructions+=1;goto B703935;
case 0x703937:goto L703937;
case 0x70393e:c.instructions+=4;goto B70393e;
case 0x703945:c.instructions+=3;goto B703945;
case 0x703946:c.instructions+=2;goto B703946;
case 0x703949:c.instructions+=1;goto B703949;
case 0x70394b:goto L70394b;
case 0x70394c:c.instructions+=1;goto B70394c;
case 0x70394d:goto L70394d;
case 0x70394e:c.instructions+=6;goto B70394e;
case 0x703950:c.instructions+=5;goto B703950;
case 0x703953:c.instructions+=4;goto B703953;
case 0x703955:c.instructions+=3;goto B703955;
case 0x703956:c.instructions+=2;goto B703956;
case 0x703957:c.instructions+=1;goto B703957;
case 0x703958:goto L703958;
case 0x70395a:c.instructions+=8;goto B70395a;
case 0x703962:c.instructions+=7;goto B703962;
case 0x70396a:c.instructions+=6;goto B70396a;
case 0x703970:c.instructions+=5;goto B703970;
case 0x703974:c.instructions+=4;goto B703974;
case 0x703975:c.instructions+=3;goto B703975;
case 0x703978:c.instructions+=2;goto B703978;
case 0x70397c:c.instructions+=1;goto B70397c;
case 0x70397e:goto L70397e;
case 0x703980:c.instructions+=6;goto B703980;
case 0x703988:c.instructions+=5;goto B703988;
case 0x70398e:c.instructions+=4;goto B70398e;
case 0x703992:c.instructions+=3;goto B703992;
case 0x703995:c.instructions+=2;goto B703995;
case 0x703997:c.instructions+=1;goto B703997;
case 0x703998:goto L703998;
case 0x70399a:c.instructions+=8;goto B70399a;
case 0x7039a2:c.instructions+=7;goto B7039a2;
case 0x7039aa:c.instructions+=6;goto B7039aa;
case 0x7039b0:c.instructions+=5;goto B7039b0;
case 0x7039b4:c.instructions+=4;goto B7039b4;
case 0x7039b5:c.instructions+=3;goto B7039b5;
case 0x7039b8:c.instructions+=2;goto B7039b8;
case 0x7039bc:c.instructions+=1;goto B7039bc;
case 0x7039be:goto L7039be;
case 0x7039c0:c.instructions+=8;goto B7039c0;
case 0x7039c8:c.instructions+=7;goto B7039c8;
case 0x7039ce:c.instructions+=6;goto B7039ce;
case 0x7039d2:c.instructions+=5;goto B7039d2;
case 0x7039d3:c.instructions+=4;goto B7039d3;
case 0x7039d6:c.instructions+=3;goto B7039d6;
case 0x7039d7:c.instructions+=2;goto B7039d7;
case 0x7039d8:c.instructions+=1;goto B7039d8;
case 0x7039d9:goto L7039d9;
case 0x7039da:c.instructions+=7;goto B7039da;
case 0x7039dc:c.instructions+=6;goto B7039dc;
case 0x7039dd:c.instructions+=5;goto B7039dd;
case 0x7039e0:c.instructions+=4;goto B7039e0;
case 0x7039e2:c.instructions+=3;goto B7039e2;
case 0x7039e6:c.instructions+=2;goto B7039e6;
case 0x7039e9:c.instructions+=1;goto B7039e9;
case 0x7039eb:goto L7039eb;
case 0x7039ee:c.instructions+=3;goto B7039ee;
case 0x7039ef:c.instructions+=2;goto B7039ef;
case 0x7039f2:c.instructions+=1;goto B7039f2;
case 0x7039f8:goto L7039f8;
case 0x7039fb:c.instructions+=2;goto B7039fb;
case 0x7039fc:c.instructions+=1;goto B7039fc;
case 0x703a01:goto L703a01;
case 0x703a04:goto L703a04;
case 0x703a05:c.instructions+=2;goto B703a05;
case 0x703a06:c.instructions+=1;goto B703a06;
case 0x703a07:goto L703a07;
case 0x703a08:c.instructions+=18;goto B703a08;
case 0x703a0a:c.instructions+=17;goto B703a0a;
case 0x703a0b:c.instructions+=16;goto B703a0b;
case 0x703a11:c.instructions+=15;goto B703a11;
case 0x703a12:c.instructions+=14;goto B703a12;
case 0x703a18:c.instructions+=13;goto B703a18;
case 0x703a19:c.instructions+=12;goto B703a19;
case 0x703a1c:c.instructions+=11;goto B703a1c;
case 0x703a22:c.instructions+=10;goto B703a22;
case 0x703a23:c.instructions+=9;goto B703a23;
case 0x703a25:c.instructions+=8;goto B703a25;
case 0x703a2d:c.instructions+=7;goto B703a2d;
case 0x703a30:c.instructions+=6;goto B703a30;
case 0x703a33:c.instructions+=5;goto B703a33;
case 0x703a36:c.instructions+=4;goto B703a36;
case 0x703a38:c.instructions+=3;goto B703a38;
case 0x703a3a:c.instructions+=2;goto B703a3a;
case 0x703a3c:c.instructions+=1;goto B703a3c;
case 0x703a41:goto L703a41;
case 0x703a47:c.instructions+=9;goto B703a47;
case 0x703a49:c.instructions+=8;goto B703a49;
case 0x703a4c:c.instructions+=7;goto B703a4c;
case 0x703a52:c.instructions+=6;goto B703a52;
case 0x703a58:c.instructions+=5;goto B703a58;
case 0x703a5e:c.instructions+=4;goto B703a5e;
case 0x703a64:c.instructions+=3;goto B703a64;
case 0x703a6a:c.instructions+=2;goto B703a6a;
case 0x703a6c:c.instructions+=1;goto B703a6c;
case 0x703a73:goto L703a73;
case 0x703a75:c.instructions+=6;goto B703a75;
case 0x703a7c:c.instructions+=5;goto B703a7c;
case 0x703a7f:c.instructions+=4;goto B703a7f;
case 0x703a81:c.instructions+=3;goto B703a81;
case 0x703a84:c.instructions+=2;goto B703a84;
case 0x703a87:c.instructions+=1;goto B703a87;
case 0x703a89:goto L703a89;
case 0x703a8f:goto L703a8f;
case 0x703a91:c.instructions+=3;goto B703a91;
case 0x703a93:c.instructions+=2;goto B703a93;
case 0x703a95:c.instructions+=1;goto B703a95;
case 0x703a9a:goto L703a9a;
case 0x703aa0:c.instructions+=9;goto B703aa0;
case 0x703aa2:c.instructions+=8;goto B703aa2;
case 0x703aa9:c.instructions+=7;goto B703aa9;
case 0x703aab:c.instructions+=6;goto B703aab;
case 0x703aad:c.instructions+=5;goto B703aad;
case 0x703ab4:c.instructions+=4;goto B703ab4;
case 0x703aba:c.instructions+=3;goto B703aba;
case 0x703abd:c.instructions+=2;goto B703abd;
case 0x703ac0:c.instructions+=1;goto B703ac0;
case 0x703ac2:goto L703ac2;
case 0x703ac4:c.instructions+=8;goto B703ac4;
case 0x703acc:c.instructions+=7;goto B703acc;
case 0x703acf:c.instructions+=6;goto B703acf;
case 0x703ad2:c.instructions+=5;goto B703ad2;
case 0x703ad5:c.instructions+=4;goto B703ad5;
case 0x703ad7:c.instructions+=3;goto B703ad7;
case 0x703ad9:c.instructions+=2;goto B703ad9;
case 0x703adb:c.instructions+=1;goto B703adb;
case 0x703ae0:goto L703ae0;
case 0x703ae6:c.instructions+=8;goto B703ae6;
case 0x703ae8:c.instructions+=7;goto B703ae8;
case 0x703aeb:c.instructions+=6;goto B703aeb;
case 0x703af1:c.instructions+=5;goto B703af1;
case 0x703af7:c.instructions+=4;goto B703af7;
case 0x703afd:c.instructions+=3;goto B703afd;
case 0x703b03:c.instructions+=2;goto B703b03;
case 0x703b09:c.instructions+=1;goto B703b09;
case 0x703b10:goto L703b10;
case 0x703b12:c.instructions+=6;goto B703b12;
case 0x703b19:c.instructions+=5;goto B703b19;
case 0x703b1c:c.instructions+=4;goto B703b1c;
case 0x703b1e:c.instructions+=3;goto B703b1e;
case 0x703b21:c.instructions+=2;goto B703b21;
case 0x703b24:c.instructions+=1;goto B703b24;
case 0x703b26:goto L703b26;
case 0x703b2c:goto L703b2c;
case 0x703b2e:c.instructions+=3;goto B703b2e;
case 0x703b30:c.instructions+=2;goto B703b30;
case 0x703b32:c.instructions+=1;goto B703b32;
case 0x703b37:goto L703b37;
case 0x703b3d:c.instructions+=9;goto B703b3d;
case 0x703b3f:c.instructions+=8;goto B703b3f;
case 0x703b46:c.instructions+=7;goto B703b46;
case 0x703b48:c.instructions+=6;goto B703b48;
case 0x703b4a:c.instructions+=5;goto B703b4a;
case 0x703b51:c.instructions+=4;goto B703b51;
case 0x703b57:c.instructions+=3;goto B703b57;
case 0x703b5a:c.instructions+=2;goto B703b5a;
case 0x703b5d:c.instructions+=1;goto B703b5d;
case 0x703b5f:goto L703b5f;
case 0x703b61:c.instructions+=5;goto B703b61;
case 0x703b63:c.instructions+=4;goto B703b63;
case 0x703b65:c.instructions+=3;goto B703b65;
case 0x703b68:c.instructions+=2;goto B703b68;
case 0x703b6a:c.instructions+=1;goto B703b6a;
case 0x703b6b:goto L703b6b;
case 0x703b6e:c.instructions+=10;goto B703b6e;
case 0x703b72:c.instructions+=9;goto B703b72;
case 0x703b79:c.instructions+=8;goto B703b79;
case 0x703b7c:c.instructions+=7;goto B703b7c;
case 0x703b83:c.instructions+=6;goto B703b83;
case 0x703b85:c.instructions+=5;goto B703b85;
case 0x703b89:c.instructions+=4;goto B703b89;
case 0x703b8a:c.instructions+=3;goto B703b8a;
case 0x703b8b:c.instructions+=2;goto B703b8b;
case 0x703b8c:c.instructions+=1;goto B703b8c;
case 0x703b8e:goto L703b8e;
case 0x703b93:c.instructions+=1;goto B703b93;
case 0x703b99:goto L703b99;
case 0x703b9b:c.instructions+=19;goto B703b9b;
case 0x703ba2:c.instructions+=18;goto B703ba2;
case 0x703ba5:c.instructions+=17;goto B703ba5;
case 0x703ba8:c.instructions+=16;goto B703ba8;
case 0x703ba9:c.instructions+=15;goto B703ba9;
case 0x703bab:c.instructions+=14;goto B703bab;
case 0x703bac:c.instructions+=13;goto B703bac;
case 0x703bae:c.instructions+=12;goto B703bae;
case 0x703bb4:c.instructions+=11;goto B703bb4;
case 0x703bb6:c.instructions+=10;goto B703bb6;
case 0x703bbd:c.instructions+=9;goto B703bbd;
case 0x703bc0:c.instructions+=8;goto B703bc0;
case 0x703bc3:c.instructions+=7;goto B703bc3;
case 0x703bc4:c.instructions+=6;goto B703bc4;
case 0x703bc6:c.instructions+=5;goto B703bc6;
case 0x703bc9:c.instructions+=4;goto B703bc9;
case 0x703bcb:c.instructions+=3;goto B703bcb;
case 0x703bce:c.instructions+=2;goto B703bce;
case 0x703bd4:c.instructions+=1;goto B703bd4;
case 0x703bd6:goto L703bd6;
case 0x703bd7:c.instructions+=4;goto B703bd7;
case 0x703bd8:c.instructions+=3;goto B703bd8;
case 0x703bd9:c.instructions+=2;goto B703bd9;
case 0x703bda:c.instructions+=1;goto B703bda;
case 0x703bdb:goto L703bdb;
case 0x703bdc:c.instructions+=7;goto B703bdc;
case 0x703bde:c.instructions+=6;goto B703bde;
case 0x703bdf:c.instructions+=5;goto B703bdf;
case 0x703be2:c.instructions+=4;goto B703be2;
case 0x703be4:c.instructions+=3;goto B703be4;
case 0x703be8:c.instructions+=2;goto B703be8;
case 0x703beb:c.instructions+=1;goto B703beb;
case 0x703bed:goto L703bed;
case 0x703bf0:c.instructions+=3;goto B703bf0;
case 0x703bf1:c.instructions+=2;goto B703bf1;
case 0x703bf4:c.instructions+=1;goto B703bf4;
case 0x703bf9:goto L703bf9;
case 0x703bfc:c.instructions+=2;goto B703bfc;
case 0x703bfd:c.instructions+=1;goto B703bfd;
case 0x703c02:goto L703c02;
case 0x703c05:c.instructions+=2;goto B703c05;
case 0x703c06:c.instructions+=1;goto B703c06;
case 0x703c0b:goto L703c0b;
case 0x703c0e:goto L703c0e;
case 0x703c0f:c.instructions+=2;goto B703c0f;
case 0x703c10:c.instructions+=1;goto B703c10;
case 0x703c11:goto L703c11;
case 0x703c12:c.instructions+=14;goto B703c12;
case 0x703c14:c.instructions+=13;goto B703c14;
case 0x703c18:c.instructions+=12;goto B703c18;
case 0x703c1f:c.instructions+=11;goto B703c1f;
case 0x703c22:c.instructions+=10;goto B703c22;
case 0x703c23:c.instructions+=9;goto B703c23;
case 0x703c26:c.instructions+=8;goto B703c26;
case 0x703c27:c.instructions+=7;goto B703c27;
case 0x703c28:c.instructions+=6;goto B703c28;
case 0x703c2b:c.instructions+=5;goto B703c2b;
case 0x703c2e:c.instructions+=4;goto B703c2e;
case 0x703c30:c.instructions+=3;goto B703c30;
case 0x703c32:c.instructions+=2;goto B703c32;
case 0x703c33:c.instructions+=1;goto B703c33;
case 0x703c35:goto L703c35;
case 0x703c37:goto L703c37;
case 0x703c3a:c.instructions+=5;goto B703c3a;
case 0x703c3d:c.instructions+=4;goto B703c3d;
case 0x703c43:c.instructions+=3;goto B703c43;
case 0x703c45:c.instructions+=2;goto B703c45;
case 0x703c49:c.instructions+=1;goto B703c49;
case 0x703c4b:goto L703c4b;
case 0x703c51:c.instructions+=5;goto B703c51;
case 0x703c53:c.instructions+=4;goto B703c53;
case 0x703c5a:c.instructions+=3;goto B703c5a;
case 0x703c5d:c.instructions+=2;goto B703c5d;
case 0x703c60:c.instructions+=1;goto B703c60;
case 0x703c62:goto L703c62;
case 0x703c64:c.instructions+=2;goto B703c64;
case 0x703c66:c.instructions+=1;goto B703c66;
case 0x703c68:goto L703c68;
case 0x703c6e:c.instructions+=5;goto B703c6e;
case 0x703c75:c.instructions+=4;goto B703c75;
case 0x703c7a:c.instructions+=3;goto B703c7a;
case 0x703c7d:c.instructions+=2;goto B703c7d;
case 0x703c80:c.instructions+=1;goto B703c80;
case 0x703c82:goto L703c82;
case 0x703c86:goto L703c86;
case 0x703c89:c.instructions+=1;goto B703c89;
case 0x703c90:goto L703c90;
case 0x703c93:c.instructions+=11;goto B703c93;
case 0x703c99:c.instructions+=10;goto B703c99;
case 0x703c9d:c.instructions+=9;goto B703c9d;
case 0x703ca4:c.instructions+=8;goto B703ca4;
case 0x703ca6:c.instructions+=7;goto B703ca6;
case 0x703ca9:c.instructions+=6;goto B703ca9;
case 0x703cb0:c.instructions+=5;goto B703cb0;
case 0x703cb2:c.instructions+=4;goto B703cb2;
case 0x703cb5:c.instructions+=3;goto B703cb5;
case 0x703cb9:c.instructions+=2;goto B703cb9;
case 0x703cbb:c.instructions+=1;goto B703cbb;
case 0x703cbd:goto L703cbd;
case 0x703cc4:c.instructions+=4;goto B703cc4;
case 0x703cc6:c.instructions+=3;goto B703cc6;
case 0x703cce:c.instructions+=2;goto B703cce;
case 0x703cd1:c.instructions+=1;goto B703cd1;
case 0x703cd4:goto L703cd4;
case 0x703cd8:c.instructions+=1;goto B703cd8;
case 0x703cda:goto L703cda;
case 0x703cdc:c.instructions+=2;goto B703cdc;
case 0x703cde:c.instructions+=1;goto B703cde;
case 0x703ce0:goto L703ce0;
case 0x703ce7:c.instructions+=5;goto B703ce7;
case 0x703cef:c.instructions+=4;goto B703cef;
case 0x703cf4:c.instructions+=3;goto B703cf4;
case 0x703cf7:c.instructions+=2;goto B703cf7;
case 0x703cfa:c.instructions+=1;goto B703cfa;
case 0x703cfc:goto L703cfc;
case 0x703cff:goto L703cff;
case 0x703d03:c.instructions+=4;goto B703d03;
case 0x703d04:c.instructions+=3;goto B703d04;
case 0x703d05:c.instructions+=2;goto B703d05;
case 0x703d0c:c.instructions+=1;goto B703d0c;
case 0x703d0e:goto L703d0e;
case 0x703d0f:c.instructions+=4;goto B703d0f;
case 0x703d10:c.instructions+=3;goto B703d10;
case 0x703d11:c.instructions+=2;goto B703d11;
case 0x703d12:c.instructions+=1;goto B703d12;
case 0x703d13:goto L703d13;
case 0x703d14:c.instructions+=4;goto B703d14;
case 0x703d1a:c.instructions+=3;goto B703d1a;
case 0x703d1c:c.instructions+=2;goto B703d1c;
case 0x703d1e:c.instructions+=1;goto B703d1e;
case 0x703d20:goto L703d20;
case 0x703d21:c.instructions+=1;goto B703d21;
case 0x703d26:goto L703d26;
case 0x703d27:goto L703d27;
case 0x703d2a:c.instructions+=5;goto B703d2a;
case 0x703d31:c.instructions+=4;goto B703d31;
case 0x703d37:c.instructions+=3;goto B703d37;
case 0x703d39:c.instructions+=2;goto B703d39;
case 0x703d3b:c.instructions+=1;goto B703d3b;
case 0x703d3d:goto L703d3d;
case 0x703d3e:c.instructions+=1;goto B703d3e;
case 0x703d43:goto L703d43;
case 0x703d44:goto L703d44;
case 0x703d47:c.instructions+=3;goto B703d47;
case 0x703d4e:c.instructions+=2;goto B703d4e;
case 0x703d4f:c.instructions+=1;goto B703d4f;
case 0x703d50:goto L703d50;
case 0x703d51:c.instructions+=3;goto B703d51;
case 0x703d52:c.instructions+=2;goto B703d52;
case 0x703d54:c.instructions+=1;goto B703d54;
case 0x703d59:goto L703d59;
case 0x703d5b:c.instructions+=3;goto B703d5b;
case 0x703d60:c.instructions+=2;goto B703d60;
case 0x703d61:c.instructions+=1;goto B703d61;
case 0x703d66:goto L703d66;
case 0x703d68:c.instructions+=4;goto B703d68;
case 0x703d69:c.instructions+=3;goto B703d69;
case 0x703d6a:c.instructions+=2;goto B703d6a;
case 0x703d70:c.instructions+=1;goto B703d70;
case 0x703d72:goto L703d72;
case 0x703d75:c.instructions+=5;goto B703d75;
case 0x703d78:c.instructions+=4;goto B703d78;
case 0x703d7a:c.instructions+=3;goto B703d7a;
case 0x703d7b:c.instructions+=2;goto B703d7b;
case 0x703d81:c.instructions+=1;goto B703d81;
case 0x703d86:goto L703d86;
case 0x703d88:c.instructions+=4;goto B703d88;
case 0x703d89:c.instructions+=3;goto B703d89;
case 0x703d8a:c.instructions+=2;goto B703d8a;
case 0x703d90:c.instructions+=1;goto B703d90;
case 0x703d92:goto L703d92;
case 0x703d97:goto L703d97;
case 0x703d99:c.instructions+=1;goto B703d99;
case 0x703d9b:goto L703d9b;
case 0x703d9e:c.instructions+=4;goto B703d9e;
case 0x703da1:c.instructions+=3;goto B703da1;
case 0x703da7:c.instructions+=2;goto B703da7;
case 0x703da9:c.instructions+=1;goto B703da9;
case 0x703daa:goto L703daa;
case 0x703dab:c.instructions+=2;goto B703dab;
case 0x703dac:c.instructions+=1;goto B703dac;
case 0x703dad:goto L703dad;
case 0x703dae:c.instructions+=7;goto B703dae;
case 0x703db0:c.instructions+=6;goto B703db0;
case 0x703db1:c.instructions+=5;goto B703db1;
case 0x703db2:c.instructions+=4;goto B703db2;
case 0x703db5:c.instructions+=3;goto B703db5;
case 0x703db7:c.instructions+=2;goto B703db7;
case 0x703db9:c.instructions+=1;goto B703db9;
case 0x703dbb:goto L703dbb;
case 0x703dc0:goto L703dc0;
case 0x703dc2:c.instructions+=1;goto B703dc2;
case 0x703dc7:goto L703dc7;
case 0x703dca:c.instructions+=1;goto B703dca;
case 0x703dcb:goto L703dcb;
case 0x703dcc:c.instructions+=3;goto B703dcc;
case 0x703dcd:c.instructions+=2;goto B703dcd;
case 0x703dce:c.instructions+=1;goto B703dce;
case 0x703dcf:goto L703dcf;
case 0x703dd0:c.instructions+=5;goto B703dd0;
case 0x703dd2:c.instructions+=4;goto B703dd2;
case 0x703dd3:c.instructions+=3;goto B703dd3;
case 0x703dd5:c.instructions+=2;goto B703dd5;
case 0x703dda:c.instructions+=1;goto B703dda;
case 0x703ddf:goto L703ddf;
case 0x703de1:c.instructions+=6;goto B703de1;
case 0x703de2:c.instructions+=5;goto B703de2;
case 0x703de4:c.instructions+=4;goto B703de4;
case 0x703de6:c.instructions+=3;goto B703de6;
case 0x703de7:c.instructions+=2;goto B703de7;
case 0x703dea:c.instructions+=1;goto B703dea;
case 0x703dec:goto L703dec;
case 0x703ded:c.instructions+=2;goto B703ded;
case 0x703def:c.instructions+=1;goto B703def;
case 0x703df4:goto L703df4;
case 0x703df6:goto L703df6;
case 0x703df8:c.instructions+=1;goto B703df8;
case 0x703dfd:goto L703dfd;
case 0x703dff:c.instructions+=2;goto B703dff;
case 0x703e00:c.instructions+=1;goto B703e00;
case 0x703e02:goto L703e02;
case 0x703e05:c.instructions+=2;goto B703e05;
case 0x703e06:c.instructions+=1;goto B703e06;
case 0x703e0b:goto L703e0b;
case 0x703e0c:goto L703e0c;
case 0x703e0f:goto L703e0f;
case 0x703e10:c.instructions+=1;goto B703e10;
case 0x703e11:goto L703e11;
case 0x703e12:c.instructions+=10;goto B703e12;
case 0x703e14:c.instructions+=9;goto B703e14;
case 0x703e15:c.instructions+=8;goto B703e15;
case 0x703e18:c.instructions+=7;goto B703e18;
case 0x703e1b:c.instructions+=6;goto B703e1b;
case 0x703e1f:c.instructions+=5;goto B703e1f;
case 0x703e20:c.instructions+=4;goto B703e20;
case 0x703e21:c.instructions+=3;goto B703e21;
case 0x703e22:c.instructions+=2;goto B703e22;
case 0x703e27:c.instructions+=1;goto B703e27;
case 0x703e29:goto L703e29;
case 0x703e2c:c.instructions+=14;goto B703e2c;
case 0x703e30:c.instructions+=13;goto B703e30;
case 0x703e33:c.instructions+=12;goto B703e33;
case 0x703e36:c.instructions+=11;goto B703e36;
case 0x703e38:c.instructions+=10;goto B703e38;
case 0x703e3c:c.instructions+=9;goto B703e3c;
case 0x703e3e:c.instructions+=8;goto B703e3e;
case 0x703e40:c.instructions+=7;goto B703e40;
case 0x703e43:c.instructions+=6;goto B703e43;
case 0x703e46:c.instructions+=5;goto B703e46;
case 0x703e47:c.instructions+=4;goto B703e47;
case 0x703e4a:c.instructions+=3;goto B703e4a;
case 0x703e4b:c.instructions+=2;goto B703e4b;
case 0x703e51:c.instructions+=1;goto B703e51;
case 0x703e53:goto L703e53;
case 0x703e56:c.instructions+=8;goto B703e56;
case 0x703e59:c.instructions+=7;goto B703e59;
case 0x703e5a:c.instructions+=6;goto B703e5a;
case 0x703e5d:c.instructions+=5;goto B703e5d;
case 0x703e5e:c.instructions+=4;goto B703e5e;
case 0x703e60:c.instructions+=3;goto B703e60;
case 0x703e61:c.instructions+=2;goto B703e61;
case 0x703e62:c.instructions+=1;goto B703e62;
case 0x703e63:goto L703e63;
case 0x703e64:goto L703e64;
case 0x703e65:c.instructions+=9;goto B703e65;
case 0x703e67:c.instructions+=8;goto B703e67;
case 0x703e6a:c.instructions+=7;goto B703e6a;
case 0x703e6d:c.instructions+=6;goto B703e6d;
case 0x703e70:c.instructions+=5;goto B703e70;
case 0x703e71:c.instructions+=4;goto B703e71;
case 0x703e72:c.instructions+=3;goto B703e72;
case 0x703e73:c.instructions+=2;goto B703e73;
case 0x703e75:c.instructions+=1;goto B703e75;
case 0x703e76:goto L703e76;
case 0x703e79:c.instructions+=44;goto B703e79;
case 0x703e7c:c.instructions+=43;goto B703e7c;
case 0x703e7e:c.instructions+=42;goto B703e7e;
case 0x703e80:c.instructions+=41;goto B703e80;
case 0x703e83:c.instructions+=40;goto B703e83;
case 0x703e87:c.instructions+=39;goto B703e87;
case 0x703e8b:c.instructions+=38;goto B703e8b;
case 0x703e8d:c.instructions+=37;goto B703e8d;
case 0x703e8f:c.instructions+=36;goto B703e8f;
case 0x703e93:c.instructions+=35;goto B703e93;
case 0x703e97:c.instructions+=34;goto B703e97;
case 0x703e9b:c.instructions+=33;goto B703e9b;
case 0x703e9d:c.instructions+=32;goto B703e9d;
case 0x703e9f:c.instructions+=31;goto B703e9f;
case 0x703ea3:c.instructions+=30;goto B703ea3;
case 0x703ea7:c.instructions+=29;goto B703ea7;
case 0x703eab:c.instructions+=28;goto B703eab;
case 0x703ead:c.instructions+=27;goto B703ead;
case 0x703eaf:c.instructions+=26;goto B703eaf;
case 0x703eb3:c.instructions+=25;goto B703eb3;
case 0x703eb7:c.instructions+=24;goto B703eb7;
case 0x703ebb:c.instructions+=23;goto B703ebb;
case 0x703ebd:c.instructions+=22;goto B703ebd;
case 0x703ebf:c.instructions+=21;goto B703ebf;
case 0x703ec3:c.instructions+=20;goto B703ec3;
case 0x703ec7:c.instructions+=19;goto B703ec7;
case 0x703ecb:c.instructions+=18;goto B703ecb;
case 0x703ecd:c.instructions+=17;goto B703ecd;
case 0x703ecf:c.instructions+=16;goto B703ecf;
case 0x703ed3:c.instructions+=15;goto B703ed3;
case 0x703ed7:c.instructions+=14;goto B703ed7;
case 0x703edb:c.instructions+=13;goto B703edb;
case 0x703edd:c.instructions+=12;goto B703edd;
case 0x703edf:c.instructions+=11;goto B703edf;
case 0x703ee3:c.instructions+=10;goto B703ee3;
case 0x703ee7:c.instructions+=9;goto B703ee7;
case 0x703eeb:c.instructions+=8;goto B703eeb;
case 0x703eee:c.instructions+=7;goto B703eee;
case 0x703ef1:c.instructions+=6;goto B703ef1;
case 0x703ef3:c.instructions+=5;goto B703ef3;
case 0x703ef5:c.instructions+=4;goto B703ef5;
case 0x703ef9:c.instructions+=3;goto B703ef9;
case 0x703efc:c.instructions+=2;goto B703efc;
case 0x703efd:c.instructions+=1;goto B703efd;
case 0x703f03:goto L703f03;
case 0x703f04:c.instructions+=4;goto B703f04;
case 0x703f05:c.instructions+=3;goto B703f05;
case 0x703f06:c.instructions+=2;goto B703f06;
case 0x703f07:c.instructions+=1;goto B703f07;
case 0x703f08:goto L703f08;
case 0x703f09:c.instructions+=6;goto B703f09;
case 0x703f0b:c.instructions+=5;goto B703f0b;
case 0x703f0e:c.instructions+=4;goto B703f0e;
case 0x703f11:c.instructions+=3;goto B703f11;
case 0x703f13:c.instructions+=2;goto B703f13;
case 0x703f14:c.instructions+=1;goto B703f14;
case 0x703f15:goto L703f15;
case 0x703f19:c.instructions+=19;goto B703f19;
case 0x703f1c:c.instructions+=18;goto B703f1c;
case 0x703f21:c.instructions+=17;goto B703f21;
case 0x703f25:c.instructions+=16;goto B703f25;
case 0x703f2a:c.instructions+=15;goto B703f2a;
case 0x703f2e:c.instructions+=14;goto B703f2e;
case 0x703f33:c.instructions+=13;goto B703f33;
case 0x703f37:c.instructions+=12;goto B703f37;
case 0x703f3c:c.instructions+=11;goto B703f3c;
case 0x703f40:c.instructions+=10;goto B703f40;
case 0x703f45:c.instructions+=9;goto B703f45;
case 0x703f49:c.instructions+=8;goto B703f49;
case 0x703f4e:c.instructions+=7;goto B703f4e;
case 0x703f52:c.instructions+=6;goto B703f52;
case 0x703f57:c.instructions+=5;goto B703f57;
case 0x703f5a:c.instructions+=4;goto B703f5a;
case 0x703f5e:c.instructions+=3;goto B703f5e;
case 0x703f61:c.instructions+=2;goto B703f61;
case 0x703f62:c.instructions+=1;goto B703f62;
case 0x703f64:goto L703f64;
case 0x703f65:c.instructions+=2;goto B703f65;
case 0x703f66:c.instructions+=1;goto B703f66;
case 0x703f67:goto L703f67;
case 0x703f68:c.instructions+=6;goto B703f68;
case 0x703f6a:c.instructions+=5;goto B703f6a;
case 0x703f6d:c.instructions+=4;goto B703f6d;
case 0x703f70:c.instructions+=3;goto B703f70;
case 0x703f72:c.instructions+=2;goto B703f72;
case 0x703f73:c.instructions+=1;goto B703f73;
case 0x703f74:goto L703f74;
case 0x703f78:c.instructions+=27;goto B703f78;
case 0x703f7b:c.instructions+=26;goto B703f7b;
case 0x703f7e:c.instructions+=25;goto B703f7e;
case 0x703f83:c.instructions+=24;goto B703f83;
case 0x703f87:c.instructions+=23;goto B703f87;
case 0x703f8a:c.instructions+=22;goto B703f8a;
case 0x703f8e:c.instructions+=21;goto B703f8e;
case 0x703f93:c.instructions+=20;goto B703f93;
case 0x703f97:c.instructions+=19;goto B703f97;
case 0x703f9b:c.instructions+=18;goto B703f9b;
case 0x703fa0:c.instructions+=17;goto B703fa0;
case 0x703fa4:c.instructions+=16;goto B703fa4;
case 0x703fa8:c.instructions+=15;goto B703fa8;
case 0x703fad:c.instructions+=14;goto B703fad;
case 0x703fb1:c.instructions+=13;goto B703fb1;
case 0x703fb5:c.instructions+=12;goto B703fb5;
case 0x703fba:c.instructions+=11;goto B703fba;
case 0x703fbe:c.instructions+=10;goto B703fbe;
case 0x703fc2:c.instructions+=9;goto B703fc2;
case 0x703fc7:c.instructions+=8;goto B703fc7;
case 0x703fcb:c.instructions+=7;goto B703fcb;
case 0x703fcf:c.instructions+=6;goto B703fcf;
case 0x703fd4:c.instructions+=5;goto B703fd4;
case 0x703fd8:c.instructions+=4;goto B703fd8;
case 0x703fdb:c.instructions+=3;goto B703fdb;
case 0x703fdc:c.instructions+=2;goto B703fdc;
case 0x703fe0:c.instructions+=1;goto B703fe0;
case 0x703fe2:goto L703fe2;
case 0x703fe3:c.instructions+=2;goto B703fe3;
case 0x703fe4:c.instructions+=1;goto B703fe4;
case 0x703fe5:goto L703fe5;
case 0x703fe6:c.instructions+=11;goto B703fe6;
case 0x703fe8:c.instructions+=10;goto B703fe8;
case 0x703feb:c.instructions+=9;goto B703feb;
case 0x703fee:c.instructions+=8;goto B703fee;
case 0x703ff0:c.instructions+=7;goto B703ff0;
case 0x703ff1:c.instructions+=6;goto B703ff1;
case 0x703ff3:c.instructions+=5;goto B703ff3;
case 0x703ff4:c.instructions+=4;goto B703ff4;
case 0x703ff6:c.instructions+=3;goto B703ff6;
case 0x703ff9:c.instructions+=2;goto B703ff9;
case 0x703ffc:c.instructions+=1;goto B703ffc;
default:missing_instruction(c.pc);}
B703001:L703001:{c.instructions+=3;NFSU2_TR(0x703001);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B703004:{NFSU2_TR(0x703004);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b9c40ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b9c40ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B703009:{NFSU2_TR(0x703009);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x702ffcu,702);}
}
B70300b:L70300b:{c.instructions+=2;NFSU2_TR(0x70300b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x6ull))));
}
B70300f:{NFSU2_TR(0x70300f);
if(r1(R+512)){{goto L703027;}}
}
B703011:L703011:{c.instructions+=3;NFSU2_TR(0x703011);
s4(0x8b9c40,u32(0x816d48ull));
}
B70301b:{NFSU2_TR(0x70301b);
s4(0x8b9c4c,u32(0x816948ull));
}
B703025:{NFSU2_TR(0x703025);
{goto L703057;}
}
B703027:L703027:{c.instructions+=2;NFSU2_TR(0x703027);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x5ull))));
}
B70302b:{NFSU2_TR(0x70302b);
if(r1(R+512)){{goto L703043;}}
}
B70302d:L70302d:{c.instructions+=3;NFSU2_TR(0x70302d);
s4(0x8b9c40,u32(0x816c48ull));
}
B703037:{NFSU2_TR(0x703037);
s4(0x8b9c4c,u32(0x816848ull));
}
B703041:{NFSU2_TR(0x703041);
{goto L703057;}
}
B703043:L703043:{c.instructions+=2;NFSU2_TR(0x703043);
s4(0x8b9c40,u32(0x816b48ull));
}
B70304d:{NFSU2_TR(0x70304d);
s4(0x8b9c4c,u32(0x816748ull));
}
B703057:L703057:{c.instructions+=2;NFSU2_TR(0x703057);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70305a:{NFSU2_TR(0x70305a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70305full));
TAIL_STATIC(0x708216u,708);
}
B70305f:L70305f:{c.instructions+=3;NFSU2_TR(0x70305f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703060:{NFSU2_TR(0x703060);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703061:{NFSU2_TR(0x703061);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703063:L703063:{c.instructions+=11;NFSU2_TR(0x703063);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703064:{NFSU2_TR(0x703064);
__builtin_memmove((R+20),(R+16),4);
}
B703066:{NFSU2_TR(0x703066);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703067:{NFSU2_TR(0x703067);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703068:{NFSU2_TR(0x703068);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70306b:{NFSU2_TR(0x70306b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703071:{NFSU2_TR(0x703071);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703073:{NFSU2_TR(0x703073);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703074:{NFSU2_TR(0x703074);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B703076:{NFSU2_TR(0x703076);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703078:{NFSU2_TR(0x703078);
if(r1(R+518)){{goto L703081;}}
}
B70307a:L70307a:{c.instructions+=2;NFSU2_TR(0x70307a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70307b:{NFSU2_TR(0x70307b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703080ull));
TAIL_STATIC(0x702eedu,702);
}
B703080:L703080:{c.instructions+=1;NFSU2_TR(0x703080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703081:L703081:{c.instructions+=6;NFSU2_TR(0x703081);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B703083:{NFSU2_TR(0x703083);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703089:{NFSU2_TR(0x703089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70308b:{NFSU2_TR(0x70308b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70308d:{NFSU2_TR(0x70308d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703093:{NFSU2_TR(0x703093);
if(r1(R+518)){{goto L70309c;}}
}
B703095:L703095:{c.instructions+=2;NFSU2_TR(0x703095);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703096:{NFSU2_TR(0x703096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70309bull));
TAIL_STATIC(0x702eedu,702);
}
B70309b:L70309b:{c.instructions+=1;NFSU2_TR(0x70309b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70309c:L70309c:{c.instructions+=6;NFSU2_TR(0x70309c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B70309e:{NFSU2_TR(0x70309e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7030a4:{NFSU2_TR(0x7030a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7030a6:{NFSU2_TR(0x7030a6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7030a8:{NFSU2_TR(0x7030a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7030ab:{NFSU2_TR(0x7030ab);
if(r1(R+518)){{goto L7030b4;}}
}
B7030ad:L7030ad:{c.instructions+=2;NFSU2_TR(0x7030ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7030ae:{NFSU2_TR(0x7030ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7030b3ull));
TAIL_STATIC(0x702eedu,702);
}
B7030b3:L7030b3:{c.instructions+=1;NFSU2_TR(0x7030b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7030b4:L7030b4:{c.instructions+=6;NFSU2_TR(0x7030b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7030b6:{NFSU2_TR(0x7030b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7030bc:{NFSU2_TR(0x7030bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7030be:{NFSU2_TR(0x7030be);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7030c0:{NFSU2_TR(0x7030c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7030c3:{NFSU2_TR(0x7030c3);
if(r1(R+518)){{goto L7030cc;}}
}
B7030c5:L7030c5:{c.instructions+=2;NFSU2_TR(0x7030c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7030c6:{NFSU2_TR(0x7030c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7030cbull));
TAIL_STATIC(0x702eedu,702);
}
B7030cb:L7030cb:{c.instructions+=1;NFSU2_TR(0x7030cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7030cc:L7030cc:{c.instructions+=6;NFSU2_TR(0x7030cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7030ce:{NFSU2_TR(0x7030ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+12),(U+0),4);
}
B7030d4:{NFSU2_TR(0x7030d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7030d6:{NFSU2_TR(0x7030d6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7030d8:{NFSU2_TR(0x7030d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7030db:{NFSU2_TR(0x7030db);
if(r1(R+518)){{goto L7030e4;}}
}
B7030dd:L7030dd:{c.instructions+=2;NFSU2_TR(0x7030dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7030de:{NFSU2_TR(0x7030de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7030e3ull));
TAIL_STATIC(0x702eedu,702);
}
B7030e3:L7030e3:{c.instructions+=1;NFSU2_TR(0x7030e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7030e4:L7030e4:{c.instructions+=6;NFSU2_TR(0x7030e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7030e6:{NFSU2_TR(0x7030e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7030ec:{NFSU2_TR(0x7030ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7030ee:{NFSU2_TR(0x7030ee);
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
B7030f0:{NFSU2_TR(0x7030f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7030f3:{NFSU2_TR(0x7030f3);
if(r1(R+518)){{goto L7030fc;}}
}
B7030f5:L7030f5:{c.instructions+=2;NFSU2_TR(0x7030f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7030f6:{NFSU2_TR(0x7030f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7030fbull));
TAIL_STATIC(0x702eedu,702);
}
B7030fb:L7030fb:{c.instructions+=1;NFSU2_TR(0x7030fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7030fc:L7030fc:{c.instructions+=7;NFSU2_TR(0x7030fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7030fe:{NFSU2_TR(0x7030fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703101:{NFSU2_TR(0x703101);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703102:{NFSU2_TR(0x703102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703103:{NFSU2_TR(0x703103);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703104:{NFSU2_TR(0x703104);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703105:{NFSU2_TR(0x703105);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703106:L703106:{c.instructions+=7;NFSU2_TR(0x703106);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703107:{NFSU2_TR(0x703107);
__builtin_memmove((R+20),(R+16),4);
}
B703109:{NFSU2_TR(0x703109);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70310a:{NFSU2_TR(0x70310a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70310b:{NFSU2_TR(0x70310b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70310e:{NFSU2_TR(0x70310e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70310f:{NFSU2_TR(0x70310f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703114ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703063u);}goto L703063;}
}
B703114:L703114:{c.instructions+=11;NFSU2_TR(0x703114);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70311a:{NFSU2_TR(0x70311a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70311d:{NFSU2_TR(0x70311d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B703120:{NFSU2_TR(0x703120);
u8 U[32];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B703127:{NFSU2_TR(0x703127);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70312a:{NFSU2_TR(0x70312a);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70312c:{NFSU2_TR(0x70312c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B70312e:{NFSU2_TR(0x70312e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B703131:{NFSU2_TR(0x703131);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703132:{NFSU2_TR(0x703132);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703133:{NFSU2_TR(0x703133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703138ull));
TAIL_STATIC(0x702edfu,702);
}
B703138:L703138:{c.instructions+=4;NFSU2_TR(0x703138);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70313b:{NFSU2_TR(0x70313b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70313d:{NFSU2_TR(0x70313d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703143:{NFSU2_TR(0x703143);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L703153;}}
}
B703145:L703145:{c.instructions+=2;NFSU2_TR(0x703145);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703146:{NFSU2_TR(0x703146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70314bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703063u);}goto L703063;}
}
B70314b:L70314b:{c.instructions+=3;NFSU2_TR(0x70314b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70314c:{NFSU2_TR(0x70314c);
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
B70314e:{NFSU2_TR(0x70314e);
{goto L703229;}
}
B703153:L703153:{c.instructions+=8;NFSU2_TR(0x703153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703154:{NFSU2_TR(0x703154);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B703157:{NFSU2_TR(0x703157);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B70315a:{NFSU2_TR(0x70315a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70315b:{NFSU2_TR(0x70315b);
w4(R+28,u32(0x820ull));
}
B703160:{NFSU2_TR(0x703160);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703161:{NFSU2_TR(0x703161);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703167:{NFSU2_TR(0x703167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70316cull));
TAIL_STATIC(0x702edfu,702);
}
B70316c:L70316c:{c.instructions+=5;NFSU2_TR(0x70316c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70316e:{NFSU2_TR(0x70316e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70316f:{NFSU2_TR(0x70316f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703170:{NFSU2_TR(0x703170);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703176:{NFSU2_TR(0x703176);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L703186;}}
}
B703178:L703178:{c.instructions+=2;NFSU2_TR(0x703178);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703179:{NFSU2_TR(0x703179);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70317eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703063u);}goto L703063;}
}
B70317e:L70317e:{c.instructions+=3;NFSU2_TR(0x70317e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70317f:{NFSU2_TR(0x70317f);
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
B703181:{NFSU2_TR(0x703181);
{goto L703228;}
}
B703186:L703186:{c.instructions+=6;NFSU2_TR(0x703186);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B703189:{NFSU2_TR(0x703189);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B70318c:{NFSU2_TR(0x70318c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70318d:{NFSU2_TR(0x70318d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70318e:{NFSU2_TR(0x70318e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703191:{NFSU2_TR(0x703191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703196ull));
TAIL_STATIC(0x702edfu,702);
}
B703196:L703196:{c.instructions+=5;NFSU2_TR(0x703196);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703198:{NFSU2_TR(0x703198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703199:{NFSU2_TR(0x703199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70319a:{NFSU2_TR(0x70319a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7031a0:{NFSU2_TR(0x7031a0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703178u);}goto L703178;}}
}
B7031a2:L7031a2:{c.instructions+=10;NFSU2_TR(0x7031a2);
u8 U[4];
w4(U+0,u32(0xffffffe0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7031a4:{NFSU2_TR(0x7031a4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7031a7:{NFSU2_TR(0x7031a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7031a8:{NFSU2_TR(0x7031a8);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7031aa:{NFSU2_TR(0x7031aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7031ad:{NFSU2_TR(0x7031ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7031b3:{NFSU2_TR(0x7031b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7031ba:{NFSU2_TR(0x7031ba);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7031bb:{NFSU2_TR(0x7031bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7031bc:{NFSU2_TR(0x7031bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7031c1ull));
TAIL_STATIC(0x702edfu,702);
}
B7031c1:L7031c1:{c.instructions+=5;NFSU2_TR(0x7031c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7031c3:{NFSU2_TR(0x7031c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7031c4:{NFSU2_TR(0x7031c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7031c5:{NFSU2_TR(0x7031c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7031cb:{NFSU2_TR(0x7031cb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703178u);}goto L703178;}}
}
B7031cd:L7031cd:{c.instructions+=8;NFSU2_TR(0x7031cd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7031d0:{NFSU2_TR(0x7031d0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7031d2:{NFSU2_TR(0x7031d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7031d5:{NFSU2_TR(0x7031d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7031db:{NFSU2_TR(0x7031db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x20ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7031e2:{NFSU2_TR(0x7031e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7031e3:{NFSU2_TR(0x7031e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7031e4:{NFSU2_TR(0x7031e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7031e9ull));
TAIL_STATIC(0x702edfu,702);
}
B7031e9:L7031e9:{c.instructions+=5;NFSU2_TR(0x7031e9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7031eb:{NFSU2_TR(0x7031eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7031ec:{NFSU2_TR(0x7031ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7031ed:{NFSU2_TR(0x7031ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7031f3:{NFSU2_TR(0x7031f3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703178u);}goto L703178;}}
}
B7031f5:L7031f5:{c.instructions+=8;NFSU2_TR(0x7031f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B7031f8:{NFSU2_TR(0x7031f8);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B7031fa:{NFSU2_TR(0x7031fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7031fd:{NFSU2_TR(0x7031fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703203:{NFSU2_TR(0x703203);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B703206:{NFSU2_TR(0x703206);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703207:{NFSU2_TR(0x703207);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703208:{NFSU2_TR(0x703208);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70320dull));
TAIL_STATIC(0x702edfu,702);
}
B70320d:L70320d:{c.instructions+=5;NFSU2_TR(0x70320d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70320f:{NFSU2_TR(0x70320f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703210:{NFSU2_TR(0x703210);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703211:{NFSU2_TR(0x703211);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703217:{NFSU2_TR(0x703217);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703178u);}goto L703178;}}
}
B70321d:L70321d:{c.instructions+=5;NFSU2_TR(0x70321d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B703220:{NFSU2_TR(0x703220);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B703222:{NFSU2_TR(0x703222);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703225:{NFSU2_TR(0x703225);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B703227:{NFSU2_TR(0x703227);
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
B703228:L703228:{c.instructions+=1;NFSU2_TR(0x703228);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703229:L703229:{c.instructions+=4;NFSU2_TR(0x703229);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70322a:{NFSU2_TR(0x70322a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70322b:{NFSU2_TR(0x70322b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70322c:{NFSU2_TR(0x70322c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70322d:L70322d:{c.instructions+=11;NFSU2_TR(0x70322d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70322e:{NFSU2_TR(0x70322e);
__builtin_memmove((R+20),(R+16),4);
}
B703230:{NFSU2_TR(0x703230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703233:{NFSU2_TR(0x703233);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703234:{NFSU2_TR(0x703234);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703235:{NFSU2_TR(0x703235);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703238:{NFSU2_TR(0x703238);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703239:{NFSU2_TR(0x703239);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70323b:{NFSU2_TR(0x70323b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70323e:{NFSU2_TR(0x70323e);
__builtin_memmove((R+28),(R+8),4);
}
B703240:{NFSU2_TR(0x703240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703241:L703241:{c.instructions+=1;NFSU2_TR(0x703241);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L703243;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703241u);}goto L703241;}
}
B703243:L703243:{c.instructions+=52;NFSU2_TR(0x703243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B703245:{NFSU2_TR(0x703245);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703248:{NFSU2_TR(0x703248);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70324b:{NFSU2_TR(0x70324b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70324e:{NFSU2_TR(0x70324e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B703251:{NFSU2_TR(0x703251);
__builtin_memmove((R+8),(R+4),4);
}
B703253:{NFSU2_TR(0x703253);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B703256:{NFSU2_TR(0x703256);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70325c:{NFSU2_TR(0x70325c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70325f:{NFSU2_TR(0x70325f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703265:{NFSU2_TR(0x703265);
__builtin_memmove((R+12),(R+8),4);
}
B703267:{NFSU2_TR(0x703267);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B70326a:{NFSU2_TR(0x70326a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703270:{NFSU2_TR(0x703270);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B703273:{NFSU2_TR(0x703273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703279:{NFSU2_TR(0x703279);
__builtin_memmove((R+8),(R+24),4);
}
B70327b:{NFSU2_TR(0x70327b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70327e:{NFSU2_TR(0x70327e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703284:{NFSU2_TR(0x703284);
__builtin_memmove((R+24),(R+8),4);
}
B703286:{NFSU2_TR(0x703286);
__builtin_memmove((R+8),(R+28),4);
}
B703288:{NFSU2_TR(0x703288);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B70328a:{NFSU2_TR(0x70328a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70328d:{NFSU2_TR(0x70328d);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70328f:{NFSU2_TR(0x70328f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B703292:{NFSU2_TR(0x703292);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703298:{NFSU2_TR(0x703298);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70329b:{NFSU2_TR(0x70329b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B70329e:{NFSU2_TR(0x70329e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B7032a1:{NFSU2_TR(0x7032a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7032a4:{NFSU2_TR(0x7032a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7032aa:{NFSU2_TR(0x7032aa);
__builtin_memmove((R+12),(R+8),4);
}
B7032ac:{NFSU2_TR(0x7032ac);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B7032ae:{NFSU2_TR(0x7032ae);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7032af:{NFSU2_TR(0x7032af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B7032b2:{NFSU2_TR(0x7032b2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B7032b4:{NFSU2_TR(0x7032b4);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B7032b6:{NFSU2_TR(0x7032b6);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B7032b8:{NFSU2_TR(0x7032b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7032bb:{NFSU2_TR(0x7032bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7032c1:{NFSU2_TR(0x7032c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7032c4:{NFSU2_TR(0x7032c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B7032c7:{NFSU2_TR(0x7032c7);
__builtin_memmove((R+28),(R+12),4);
}
B7032c9:{NFSU2_TR(0x7032c9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B7032cc:{NFSU2_TR(0x7032cc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B7032ce:{NFSU2_TR(0x7032ce);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B7032d0:{NFSU2_TR(0x7032d0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+28),r4(R+24)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7032d2:{NFSU2_TR(0x7032d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7032d8:{NFSU2_TR(0x7032d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7032d9:{NFSU2_TR(0x7032d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7032da:{NFSU2_TR(0x7032da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7032db:{NFSU2_TR(0x7032db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7032dc:{NFSU2_TR(0x7032dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7032dd:L7032dd:{c.instructions+=6;NFSU2_TR(0x7032dd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7032de:{NFSU2_TR(0x7032de);
__builtin_memmove((R+20),(R+16),4);
}
B7032e0:{NFSU2_TR(0x7032e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7032e1:{NFSU2_TR(0x7032e1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7032e3:{NFSU2_TR(0x7032e3);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7032e8:{NFSU2_TR(0x7032e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7032edull));
TAIL_STATIC(0x702edfu,702);
}
B7032ed:L7032ed:{c.instructions+=6;NFSU2_TR(0x7032ed);
__builtin_memmove((R+24),(R+0),4);
}
B7032ef:{NFSU2_TR(0x7032ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7032f0:{NFSU2_TR(0x7032f0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7032f2:{NFSU2_TR(0x7032f2);
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
B7032f4:{NFSU2_TR(0x7032f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7032f5:{NFSU2_TR(0x7032f5);
if(r1(R+518)){{goto L703317;}}
}
B7032f7:L7032f7:{c.instructions+=6;NFSU2_TR(0x7032f7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7032f8:{NFSU2_TR(0x7032f8);
u8 U[4];
w4(U+0,u32(0x32ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7032fa:{NFSU2_TR(0x7032fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7032fb:{NFSU2_TR(0x7032fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7032fe:{NFSU2_TR(0x7032fe);
__builtin_memmove((R+28),(R+24),4);
}
B703300:{NFSU2_TR(0x703300);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703301:L703301:{c.instructions+=1;NFSU2_TR(0x703301);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L703303;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703301u);}goto L703301;}
}
B703303:L703303:{c.instructions+=1;NFSU2_TR(0x703303);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703308ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70322du);}goto L70322d;}
}
B703308:L703308:{c.instructions+=5;NFSU2_TR(0x703308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703309:{NFSU2_TR(0x703309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70330a:{NFSU2_TR(0x70330a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B703314:{NFSU2_TR(0x703314);
__builtin_memmove((R+0),(R+24),4);
}
B703316:{NFSU2_TR(0x703316);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703317:L703317:{c.instructions+=3;NFSU2_TR(0x703317);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703318:{NFSU2_TR(0x703318);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703319:{NFSU2_TR(0x703319);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70331a:L70331a:{c.instructions+=7;NFSU2_TR(0x70331a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70331b:{NFSU2_TR(0x70331b);
__builtin_memmove((R+20),(R+16),4);
}
B70331d:{NFSU2_TR(0x70331d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70331e:{NFSU2_TR(0x70331e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703321:{NFSU2_TR(0x703321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703323:{NFSU2_TR(0x703323);
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
B703325:{NFSU2_TR(0x703325);
if(r1(R+518)){{goto L703339;}}
}
B703327:L703327:{c.instructions+=2;NFSU2_TR(0x703327);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703328:{NFSU2_TR(0x703328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70332dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703063u);}goto L703063;}
}
B70332d:L70332d:{c.instructions+=2;NFSU2_TR(0x70332d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B70332f:{NFSU2_TR(0x70332f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703334ull));
TAIL_STATIC(0x702eedu,702);
}
B703334:L703334:{c.instructions+=3;NFSU2_TR(0x703334);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B703337:{NFSU2_TR(0x703337);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703338:{NFSU2_TR(0x703338);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703339:L703339:{c.instructions+=3;NFSU2_TR(0x703339);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70333a:{NFSU2_TR(0x70333a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70333b:{NFSU2_TR(0x70333b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70333c:L70333c:{c.instructions+=7;NFSU2_TR(0x70333c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70333d:{NFSU2_TR(0x70333d);
__builtin_memmove((R+20),(R+16),4);
}
B70333f:{NFSU2_TR(0x70333f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703342:{NFSU2_TR(0x703342);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703345:{NFSU2_TR(0x703345);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703348:{NFSU2_TR(0x703348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703349:{NFSU2_TR(0x703349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70334a:L70334a:{c.instructions+=7;NFSU2_TR(0x70334a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70334b:{NFSU2_TR(0x70334b);
__builtin_memmove((R+20),(R+16),4);
}
B70334d:{NFSU2_TR(0x70334d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703350:{NFSU2_TR(0x703350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703353:{NFSU2_TR(0x703353);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703359:{NFSU2_TR(0x703359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70335a:{NFSU2_TR(0x70335a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70335b:L70335b:{c.instructions+=7;NFSU2_TR(0x70335b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70335c:{NFSU2_TR(0x70335c);
__builtin_memmove((R+20),(R+16),4);
}
B70335e:{NFSU2_TR(0x70335e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703361:{NFSU2_TR(0x703361);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703364:{NFSU2_TR(0x703364);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70336a:{NFSU2_TR(0x70336a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70336b:{NFSU2_TR(0x70336b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70336c:L70336c:{c.instructions+=8;NFSU2_TR(0x70336c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70336d:{NFSU2_TR(0x70336d);
__builtin_memmove((R+20),(R+16),4);
}
B70336f:{NFSU2_TR(0x70336f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703372:{NFSU2_TR(0x703372);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B703374:{NFSU2_TR(0x703374);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70337a:{NFSU2_TR(0x70337a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70337b:{NFSU2_TR(0x70337b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70337e:{NFSU2_TR(0x70337e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L7033a2;}}
}
B703380:L703380:{c.instructions+=1;NFSU2_TR(0x703380);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703381:L703381:{c.instructions+=6;NFSU2_TR(0x703381);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703384:{NFSU2_TR(0x703384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B703387:{NFSU2_TR(0x703387);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B70338a:{NFSU2_TR(0x70338a);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B70338d:{NFSU2_TR(0x70338d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(r1(R+8))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B703390:{NFSU2_TR(0x703390);
if(r1(R+518)){{goto L703398;}}
}
B703392:L703392:{c.instructions+=2;NFSU2_TR(0x703392);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703395:{NFSU2_TR(0x703395);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B703398:L703398:{c.instructions+=3;NFSU2_TR(0x703398);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B703399:{NFSU2_TR(0x703399);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70339f:{NFSU2_TR(0x70339f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703381u);}goto L703381;}}
}
B7033a1:L7033a1:{c.instructions+=1;NFSU2_TR(0x7033a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7033a2:L7033a2:{c.instructions+=3;NFSU2_TR(0x7033a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7033a3:{NFSU2_TR(0x7033a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7033a4:{NFSU2_TR(0x7033a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7033a5:L7033a5:{c.instructions+=12;NFSU2_TR(0x7033a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7033a6:{NFSU2_TR(0x7033a6);
__builtin_memmove((R+20),(R+16),4);
}
B7033a8:{NFSU2_TR(0x7033a8);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7033ab:{NFSU2_TR(0x7033ab);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xdc,0x20"::"a"(ea_):"memory");}
}
B7033ae:{NFSU2_TR(0x7033ae);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B7033b1:{NFSU2_TR(0x7033b1);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7033b4:{NFSU2_TR(0x7033b4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7033b7:{NFSU2_TR(0x7033b7);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7033ba:{NFSU2_TR(0x7033ba);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7033bc:{NFSU2_TR(0x7033bc);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B7033be:{NFSU2_TR(0x7033be);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B7033c0:{NFSU2_TR(0x7033c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7033c5ull));
TAIL_STATIC(0x75ee4cu,75e);
}
B7033c5:L7033c5:{c.instructions+=6;NFSU2_TR(0x7033c5);
{u32 ea_=u32(u32(8144368u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7033cb:{NFSU2_TR(0x7033cb);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B7033cd:{NFSU2_TR(0x7033cd);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7033d0:{NFSU2_TR(0x7033d0);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B7033d2:{NFSU2_TR(0x7033d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7033d3:{NFSU2_TR(0x7033d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7033d4:L7033d4:{c.instructions+=17;NFSU2_TR(0x7033d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7033d5:{NFSU2_TR(0x7033d5);
__builtin_memmove((R+20),(R+16),4);
}
B7033d7:{NFSU2_TR(0x7033d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x93cull))));
}
B7033dd:{NFSU2_TR(0x7033dd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7033de:{NFSU2_TR(0x7033de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7033df:{NFSU2_TR(0x7033df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7033e0:{NFSU2_TR(0x7033e0);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7033e2:{NFSU2_TR(0x7033e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7033e3:{NFSU2_TR(0x7033e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7033e6:{NFSU2_TR(0x7033e6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B7033e8:{NFSU2_TR(0x7033e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7033eb:{NFSU2_TR(0x7033eb);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B7033ee:{NFSU2_TR(0x7033ee);
{u32 ea_=u32(u32(8144400u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7033f4:{NFSU2_TR(0x7033f4);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B7033fa:{NFSU2_TR(0x7033fa);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7033fd:{NFSU2_TR(0x7033fd);
{u32 ea_=u32(u32(8144392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703403:{NFSU2_TR(0x703403);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B703406:L703406:{c.instructions+=8;NFSU2_TR(0x703406);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703409:{NFSU2_TR(0x703409);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B70340c:{NFSU2_TR(0x70340c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B703410:{NFSU2_TR(0x703410);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B703412:{NFSU2_TR(0x703412);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B703416:{NFSU2_TR(0x703416);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703419:{NFSU2_TR(0x703419);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B70341c:{NFSU2_TR(0x70341c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703421ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7033a5u);}goto L7033a5;}
}
B703421:L703421:{c.instructions+=4;NFSU2_TR(0x703421);
{u32 ea_=u32(u32(8144384u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B703427:{NFSU2_TR(0x703427);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70342a:{NFSU2_TR(0x70342a);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B703430:{NFSU2_TR(0x703430);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703435ull));
TAIL_STATIC(0x75bed4u,75b);
}
B703435:L703435:{c.instructions+=4;NFSU2_TR(0x703435);
__builtin_memmove((R+12),(R+0),4);
}
B703437:{NFSU2_TR(0x703437);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B703439:{NFSU2_TR(0x703439);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70343c:{NFSU2_TR(0x70343c);
if(r1(R+518)){{goto L703473;}}
}
B70343e:L70343e:{c.instructions+=3;NFSU2_TR(0x70343e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B703440:{NFSU2_TR(0x703440);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B703442:{NFSU2_TR(0x703442);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L703471;}}
}
B703444:L703444:{c.instructions+=3;NFSU2_TR(0x703444);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703447:{NFSU2_TR(0x703447);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffec4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B70344e:{NFSU2_TR(0x70344e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703453ull));
TAIL_STATIC(0x75bed4u,75b);
}
B703453:L703453:{c.instructions+=8;NFSU2_TR(0x703453);
__builtin_memmove((R+4),(R+12),4);
}
B703455:{NFSU2_TR(0x703455);
__builtin_memmove((R+12),(R+0),1);
}
B703457:{NFSU2_TR(0x703457);
__builtin_memmove((R+13),(R+12),1);
}
B703459:{NFSU2_TR(0x703459);
__builtin_memmove((R+8),(R+4),4);
}
B70345b:{NFSU2_TR(0x70345b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70345e:{NFSU2_TR(0x70345e);
__builtin_memmove((R+0),(R+12),4);
}
B703460:{NFSU2_TR(0x703460);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703463:{NFSU2_TR(0x703463);
__builtin_memmove((R+0),(R+12),2);
}
B703466:L703466:{c.instructions+=1;NFSU2_TR(0x703466);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L703468;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703466u);}goto L703466;}
}
B703468:L703468:{c.instructions+=2;NFSU2_TR(0x703468);
__builtin_memmove((R+4),(R+8),4);
}
B70346a:{NFSU2_TR(0x70346a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70346d:L70346d:{c.instructions+=1;NFSU2_TR(0x70346d);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L70346f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70346du);}goto L70346d;}
}
B70346f:L70346f:{c.instructions+=1;NFSU2_TR(0x70346f);
__builtin_memmove((R+0),(R+8),4);
}
B703471:L703471:{c.instructions+=1;NFSU2_TR(0x703471);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B703473:L703473:{c.instructions+=7;NFSU2_TR(0x703473);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703476:{NFSU2_TR(0x703476);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B70347c:{NFSU2_TR(0x70347c);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B70347f:{NFSU2_TR(0x70347f);
{u32 ea_=u32(u32(8144376u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B703485:{NFSU2_TR(0x703485);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B703487:{NFSU2_TR(0x703487);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B70348a:{NFSU2_TR(0x70348a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703406u);}goto L703406;}}
}
B703490:L703490:{c.instructions+=3;NFSU2_TR(0x703490);
w4(R+4,u32(0x100ull));
}
B703495:{NFSU2_TR(0x703495);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703497:{NFSU2_TR(0x703497);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7034b2;}}
}
B703499:L703499:{c.instructions+=5;NFSU2_TR(0x703499);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B70349b:{NFSU2_TR(0x70349b);
__builtin_memmove((R+8),(R+4),4);
}
B70349d:{NFSU2_TR(0x70349d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7034a0:{NFSU2_TR(0x7034a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7034a2:{NFSU2_TR(0x7034a2);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffec4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B7034a9:L7034a9:{c.instructions+=1;NFSU2_TR(0x7034a9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L7034ab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7034a9u);}goto L7034a9;}
}
B7034ab:L7034ab:{c.instructions+=2;NFSU2_TR(0x7034ab);
__builtin_memmove((R+4),(R+8),4);
}
B7034ad:{NFSU2_TR(0x7034ad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7034b0:L7034b0:{c.instructions+=1;NFSU2_TR(0x7034b0);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L7034b2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7034b0u);}goto L7034b0;}
}
B7034b2:L7034b2:{c.instructions+=1;NFSU2_TR(0x7034b2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7034b4:L7034b4:{c.instructions+=1;NFSU2_TR(0x7034b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7034b9ull));
TAIL_STATIC(0x760d7du,760);
}
B7034b9:L7034b9:{c.instructions+=6;NFSU2_TR(0x7034b9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B7034be:{NFSU2_TR(0x7034be);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffffec4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B7034c5:{NFSU2_TR(0x7034c5);
u8 U[13];
w4(U+0,u32(u32(u32(0xfffff6c4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B7034cc:{NFSU2_TR(0x7034cc);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7034cd:{NFSU2_TR(0x7034cd);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x800ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x800ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x800ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7034d3:{NFSU2_TR(0x7034d3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7034b4u);}goto L7034b4;}}
}
B7034d5:L7034d5:{c.instructions+=3;NFSU2_TR(0x7034d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7034d8:{NFSU2_TR(0x7034d8);
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
B7034da:{NFSU2_TR(0x7034da);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L703555;}}
}
B7034dc:L7034dc:{c.instructions+=3;NFSU2_TR(0x7034dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7034df:{NFSU2_TR(0x7034df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7034e2:{NFSU2_TR(0x7034e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7034e5:L7034e5:{c.instructions+=1;NFSU2_TR(0x7034e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7034eaull));
TAIL_STATIC(0x760d7du,760);
}
B7034ea:L7034ea:{c.instructions+=5;NFSU2_TR(0x7034ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7034ed:{NFSU2_TR(0x7034ed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B7034f2:{NFSU2_TR(0x7034f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7034f4:{NFSU2_TR(0x7034f4);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff6c4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B7034fb:{NFSU2_TR(0x7034fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70354a;}}
}
B7034fd:L7034fd:{c.instructions+=9;NFSU2_TR(0x7034fd);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B703504:{NFSU2_TR(0x703504);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70350a:{NFSU2_TR(0x70350a);
w1(R+0,u8(0-u32(r1(R+0))));
}
B70350c:{NFSU2_TR(0x70350c);
w4(R+24,u32(0-u32(r4(R+24))));
}
B70350e:{NFSU2_TR(0x70350e);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B703511:{NFSU2_TR(0x703511);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffull))));
__builtin_memmove((R+28),(U+0),4);
}
B703517:{NFSU2_TR(0x703517);
__builtin_memmove((R+0),(R+12),4);
}
B703519:{NFSU2_TR(0x703519);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B70351b:{NFSU2_TR(0x70351b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70351e:L70351e:{c.instructions+=3;NFSU2_TR(0x70351e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B703521:{NFSU2_TR(0x703521);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703523:{NFSU2_TR(0x703523);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70352a;}}
}
B703525:L703525:{c.instructions+=2;NFSU2_TR(0x703525);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B703528:{NFSU2_TR(0x703528);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70352a:L70352a:{c.instructions+=3;NFSU2_TR(0x70352a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+8,u32(r1(U+0)));
}
B70352d:{NFSU2_TR(0x70352d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70352f:{NFSU2_TR(0x70352f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70353f;}}
}
B703531:L703531:{c.instructions+=4;NFSU2_TR(0x703531);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B703534:{NFSU2_TR(0x703534);
w1(R+8,u8(u32(r1(R+8))|u32(u8(0xffull))));
}
B703537:{NFSU2_TR(0x703537);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffec4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(R+8,u8(u32(r1(R+8))-u32(r1(U+4))));
}
B70353d:{NFSU2_TR(0x70353d);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70353f:L70353f:{c.instructions+=5;NFSU2_TR(0x70353f);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B703542:{NFSU2_TR(0x703542);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+0,u8(u32(r1(U+0))+u32(r1(R+8))));
s1(u32(r4(R+0)),r1(U+0));
}
B703544:{NFSU2_TR(0x703544);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B703545:{NFSU2_TR(0x703545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703548:{NFSU2_TR(0x703548);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70351eu);}goto L70351e;}}
}
B70354a:L70354a:{c.instructions+=4;NFSU2_TR(0x70354a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+12),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+12,u32(u32(r4(R+12))+u32(r4(U+4))));
}
B70354d:{NFSU2_TR(0x70354d);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B703550:{NFSU2_TR(0x703550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703553:{NFSU2_TR(0x703553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7034e5u);}goto L7034e5;}}
}
B703555:L703555:{c.instructions+=5;NFSU2_TR(0x703555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703556:{NFSU2_TR(0x703556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703557:{NFSU2_TR(0x703557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703558:{NFSU2_TR(0x703558);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B703559:{NFSU2_TR(0x703559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70355a:L70355a:{c.instructions+=27;NFSU2_TR(0x70355a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70355b:{NFSU2_TR(0x70355b);
__builtin_memmove((R+20),(R+16),4);
}
B70355d:{NFSU2_TR(0x70355d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703560:{NFSU2_TR(0x703560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703563:{NFSU2_TR(0x703563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703566:{NFSU2_TR(0x703566);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703567:{NFSU2_TR(0x703567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70356a:{NFSU2_TR(0x70356a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70356d:{NFSU2_TR(0x70356d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703570:{NFSU2_TR(0x703570);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703573:{NFSU2_TR(0x703573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703576:{NFSU2_TR(0x703576);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703579:{NFSU2_TR(0x703579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70357c:{NFSU2_TR(0x70357c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70357d:{NFSU2_TR(0x70357d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703580:{NFSU2_TR(0x703580);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703583:{NFSU2_TR(0x703583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703586:{NFSU2_TR(0x703586);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703589:{NFSU2_TR(0x703589);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70358a:{NFSU2_TR(0x70358a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70358d:{NFSU2_TR(0x70358d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70358f:{NFSU2_TR(0x70358f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703591:{NFSU2_TR(0x703591);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B703593:{NFSU2_TR(0x703593);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703596:{NFSU2_TR(0x703596);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703599:{NFSU2_TR(0x703599);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70359c:{NFSU2_TR(0x70359c);
if(r1(R+518)){{goto L703884;}}
}
B7035a2:L7035a2:{c.instructions+=2;NFSU2_TR(0x7035a2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7035a5:{NFSU2_TR(0x7035a5);
if(r1(R+518)){{goto L703878;}}
}
B7035ab:L7035ab:{c.instructions+=2;NFSU2_TR(0x7035ab);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7035ae:{NFSU2_TR(0x7035ae);
if(r1(R+518)){{goto L703844;}}
}
B7035b4:L7035b4:{c.instructions+=1;NFSU2_TR(0x7035b4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70383d;}}
}
B7035ba:L7035ba:{c.instructions+=2;NFSU2_TR(0x7035ba);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7035bd:{NFSU2_TR(0x7035bd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7036f0;}}
}
B7035c3:L7035c3:{c.instructions+=2;NFSU2_TR(0x7035c3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7035c6:{NFSU2_TR(0x7035c6);
if(r1(R+518)){{goto L703612;}}
}
B7035c8:L7035c8:{c.instructions+=2;NFSU2_TR(0x7035c8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7035cb:{NFSU2_TR(0x7035cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70383d;}}
}
B7035d1:L7035d1:{c.instructions+=2;NFSU2_TR(0x7035d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7035d2:{NFSU2_TR(0x7035d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7035d7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70336cu);}goto L70336c;}
}
B7035d7:L7035d7:{c.instructions+=3;NFSU2_TR(0x7035d7);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x2ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B7035da:{NFSU2_TR(0x7035da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7035db:{NFSU2_TR(0x7035db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70386a;}}
}
B7035e1:L7035e1:{c.instructions+=2;NFSU2_TR(0x7035e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7035e5:{NFSU2_TR(0x7035e5);
if(r1(R+518)){{goto L703601;}}
}
B7035e7:L7035e7:{c.instructions+=2;NFSU2_TR(0x7035e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7035ee:{NFSU2_TR(0x7035ee);
if(r1(R+518)){{goto L703601;}}
}
B7035f0:L7035f0:{c.instructions+=4;NFSU2_TR(0x7035f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7035f6:{NFSU2_TR(0x7035f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7035f9:{NFSU2_TR(0x7035f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7035fa:{NFSU2_TR(0x7035fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7035ffull));
TAIL_STATIC(0x70cd58u,70c);
}
B7035ff:L7035ff:{c.instructions+=1;NFSU2_TR(0x7035ff);
{goto L70363d;}
}
B703601:L703601:{c.instructions+=4;NFSU2_TR(0x703601);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703604:{NFSU2_TR(0x703604);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703607:{NFSU2_TR(0x703607);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703608:{NFSU2_TR(0x703608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70360dull));
TAIL_STATIC(0x70cd58u,70c);
}
B70360d:L70360d:{c.instructions+=1;NFSU2_TR(0x70360d);
{goto L70385b;}
}
B703612:L703612:{c.instructions+=2;NFSU2_TR(0x703612);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703615:{NFSU2_TR(0x703615);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L7036c4;}}
}
B70361b:L70361b:{c.instructions+=2;NFSU2_TR(0x70361b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70361e:{NFSU2_TR(0x70361e);
if(r1(R+518)){{goto L7036cb;}}
}
B703624:L703624:{c.instructions+=2;NFSU2_TR(0x703624);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70362a:{NFSU2_TR(0x70362a);
if(r1(R+518)){{goto L703853;}}
}
B703630:L703630:{c.instructions+=4;NFSU2_TR(0x703630);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703636:{NFSU2_TR(0x703636);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703637:{NFSU2_TR(0x703637);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703638:{NFSU2_TR(0x703638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70363dull));
TAIL_STATIC(0x70a5e0u,70a);
}
B70363d:L70363d:{c.instructions+=11;NFSU2_TR(0x70363d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703643:{NFSU2_TR(0x703643);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70364a:{NFSU2_TR(0x70364a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70364d:{NFSU2_TR(0x70364d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703653:{NFSU2_TR(0x703653);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B703656:{NFSU2_TR(0x703656);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B703658:{NFSU2_TR(0x703658);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B70365a:{NFSU2_TR(0x70365a);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70365c:{NFSU2_TR(0x70365c);
__builtin_memmove((R+4),(R+0),4);
}
B70365e:{NFSU2_TR(0x70365e);
__builtin_memmove((R+8),(R+4),4);
}
B703660:{NFSU2_TR(0x703660);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B703663:L703663:{c.instructions+=1;NFSU2_TR(0x703663);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L703665;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703663u);}goto L703663;}
}
B703665:L703665:{c.instructions+=2;NFSU2_TR(0x703665);
__builtin_memmove((R+4),(R+8),4);
}
B703667:{NFSU2_TR(0x703667);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70366a:L70366a:{c.instructions+=1;NFSU2_TR(0x70366a);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70366c;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70366au);}goto L70366a;}
}
B70366c:L70366c:{c.instructions+=7;NFSU2_TR(0x70366c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703672:{NFSU2_TR(0x703672);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703678:{NFSU2_TR(0x703678);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70367b:{NFSU2_TR(0x70367b);
__builtin_memmove((R+4),(R+0),4);
}
B70367d:{NFSU2_TR(0x70367d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B703680:{NFSU2_TR(0x703680);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B703682:{NFSU2_TR(0x703682);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B703684:L703684:{c.instructions+=1;NFSU2_TR(0x703684);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L703686;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703684u);}goto L703684;}
}
B703686:L703686:{c.instructions+=2;NFSU2_TR(0x703686);
__builtin_memmove((R+4),(R+0),4);
}
B703688:{NFSU2_TR(0x703688);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70368b:L70368b:{c.instructions+=1;NFSU2_TR(0x70368b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70368d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70368bu);}goto L70368b;}
}
B70368d:L70368d:{c.instructions+=15;NFSU2_TR(0x70368d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703693:{NFSU2_TR(0x703693);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703699:{NFSU2_TR(0x703699);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70369c:{NFSU2_TR(0x70369c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70369f:{NFSU2_TR(0x70369f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036a0:{NFSU2_TR(0x7036a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7036a6:{NFSU2_TR(0x7036a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7036a9:{NFSU2_TR(0x7036a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036aa:{NFSU2_TR(0x7036aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7036ad:{NFSU2_TR(0x7036ad);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7036af:{NFSU2_TR(0x7036af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036b0:{NFSU2_TR(0x7036b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7036b6:{NFSU2_TR(0x7036b6);
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
B7036b8:{NFSU2_TR(0x7036b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036b9:{NFSU2_TR(0x7036b9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ec4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7036bfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7036bf:L7036bf:{c.instructions+=1;NFSU2_TR(0x7036bf);
{goto L703784;}
}
B7036c4:L7036c4:{c.instructions+=2;NFSU2_TR(0x7036c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036c5:{NFSU2_TR(0x7036c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7036caull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70336cu);}goto L70336c;}
}
B7036ca:L7036ca:{c.instructions+=1;NFSU2_TR(0x7036ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7036cb:L7036cb:{c.instructions+=2;NFSU2_TR(0x7036cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7036ce:{NFSU2_TR(0x7036ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7036d1:L7036d1:{c.instructions+=2;NFSU2_TR(0x7036d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036d2:{NFSU2_TR(0x7036d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7036d7ull));
TAIL_STATIC(0x70a4d9u,70a);
}
B7036d7:L7036d7:{c.instructions+=3;NFSU2_TR(0x7036d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7036da:{NFSU2_TR(0x7036da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036db:{NFSU2_TR(0x7036db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7036e0ull));
TAIL_STATIC(0x704d87u,704);
}
B7036e0:L7036e0:{c.instructions+=5;NFSU2_TR(0x7036e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7036e3:{NFSU2_TR(0x7036e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036e4:{NFSU2_TR(0x7036e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036e5:{NFSU2_TR(0x7036e5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036e6:{NFSU2_TR(0x7036e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7036ebull));
TAIL_STATIC(0x70c08cu,70c);
}
B7036eb:L7036eb:{c.instructions+=1;NFSU2_TR(0x7036eb);
{goto L703784;}
}
B7036f0:L7036f0:{c.instructions+=2;NFSU2_TR(0x7036f0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7036f3:{NFSU2_TR(0x7036f3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70375b;}}
}
B7036f5:L7036f5:{c.instructions+=2;NFSU2_TR(0x7036f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7036f6:{NFSU2_TR(0x7036f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7036fbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70336cu);}goto L70336c;}
}
B7036fb:L7036fb:{c.instructions+=1;NFSU2_TR(0x7036fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7036fc:L7036fc:{c.instructions+=4;NFSU2_TR(0x7036fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7036ff:{NFSU2_TR(0x7036ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703702:{NFSU2_TR(0x703702);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703703:{NFSU2_TR(0x703703);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703708ull));
TAIL_STATIC(0x70a4d9u,70a);
}
B703708:L703708:{c.instructions+=3;NFSU2_TR(0x703708);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70370b:{NFSU2_TR(0x70370b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70370c:{NFSU2_TR(0x70370c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703711ull));
TAIL_STATIC(0x704d87u,704);
}
B703711:L703711:{c.instructions+=5;NFSU2_TR(0x703711);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703714:{NFSU2_TR(0x703714);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703715:{NFSU2_TR(0x703715);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703716:{NFSU2_TR(0x703716);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703717:{NFSU2_TR(0x703717);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70371cull));
TAIL_STATIC(0x70c08cu,70c);
}
B70371c:L70371c:{c.instructions+=3;NFSU2_TR(0x70371c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70371f:{NFSU2_TR(0x70371f);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B703726:{NFSU2_TR(0x703726);
if(r1(R+518)){{goto L703907;}}
}
B70372c:L70372c:{c.instructions+=12;NFSU2_TR(0x70372c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70372f:{NFSU2_TR(0x70372f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703735:{NFSU2_TR(0x703735);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70373b:{NFSU2_TR(0x70373b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70373e:{NFSU2_TR(0x70373e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70373f:{NFSU2_TR(0x70373f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703745:{NFSU2_TR(0x703745);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703748:{NFSU2_TR(0x703748);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703749:{NFSU2_TR(0x703749);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70374c:{NFSU2_TR(0x70374c);
u8 U[14];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
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
B70374f:{NFSU2_TR(0x70374f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703750:{NFSU2_TR(0x703750);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eb8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703756ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B703756:L703756:{c.instructions+=1;NFSU2_TR(0x703756);
{goto L703904;}
}
B70375b:L70375b:{c.instructions+=2;NFSU2_TR(0x70375b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70375e:{NFSU2_TR(0x70375e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7036fcu);}goto L7036fc;}}
}
B703760:L703760:{c.instructions+=2;NFSU2_TR(0x703760);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B703766:{NFSU2_TR(0x703766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70378c;}}
}
B703768:L703768:{c.instructions+=4;NFSU2_TR(0x703768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703769:{NFSU2_TR(0x703769);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70376a:{NFSU2_TR(0x70376a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70376b:{NFSU2_TR(0x70376b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703770ull));
TAIL_STATIC(0x70a5e0u,70a);
}
B703770:L703770:{c.instructions+=3;NFSU2_TR(0x703770);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703773:{NFSU2_TR(0x703773);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703774:{NFSU2_TR(0x703774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703779ull));
TAIL_STATIC(0x704d87u,704);
}
B703779:L703779:{c.instructions+=5;NFSU2_TR(0x703779);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70377c:{NFSU2_TR(0x70377c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70377d:{NFSU2_TR(0x70377d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70377e:{NFSU2_TR(0x70377e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70377f:{NFSU2_TR(0x70377f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703784ull));
TAIL_STATIC(0x70c4c0u,70c);
}
B703784:L703784:{c.instructions+=2;NFSU2_TR(0x703784);
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
B703787:{NFSU2_TR(0x703787);
{goto L703907;}
}
B70378c:L70378c:{c.instructions+=4;NFSU2_TR(0x70378c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703792:{NFSU2_TR(0x703792);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703793:{NFSU2_TR(0x703793);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703794:{NFSU2_TR(0x703794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703799ull));
TAIL_STATIC(0x70a5e0u,70a);
}
B703799:L703799:{c.instructions+=3;NFSU2_TR(0x703799);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70379f:{NFSU2_TR(0x70379f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7037a0:{NFSU2_TR(0x7037a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7037a5ull));
TAIL_STATIC(0x704d87u,704);
}
B7037a5:L7037a5:{c.instructions+=5;NFSU2_TR(0x7037a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7037ab:{NFSU2_TR(0x7037ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7037ac:{NFSU2_TR(0x7037ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7037ad:{NFSU2_TR(0x7037ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7037ae:{NFSU2_TR(0x7037ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7037b3ull));
TAIL_STATIC(0x70c4c0u,70c);
}
B7037b3:L7037b3:{c.instructions+=11;NFSU2_TR(0x7037b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7037b9:{NFSU2_TR(0x7037b9);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B7037c0:{NFSU2_TR(0x7037c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7037c3:{NFSU2_TR(0x7037c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7037c9:{NFSU2_TR(0x7037c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7037cc:{NFSU2_TR(0x7037cc);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7037ce:{NFSU2_TR(0x7037ce);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7037d0:{NFSU2_TR(0x7037d0);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7037d2:{NFSU2_TR(0x7037d2);
__builtin_memmove((R+4),(R+0),4);
}
B7037d4:{NFSU2_TR(0x7037d4);
__builtin_memmove((R+8),(R+4),4);
}
B7037d6:{NFSU2_TR(0x7037d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7037d9:L7037d9:{c.instructions+=1;NFSU2_TR(0x7037d9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7037db;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7037d9u);}goto L7037d9;}
}
B7037db:L7037db:{c.instructions+=2;NFSU2_TR(0x7037db);
__builtin_memmove((R+4),(R+8),4);
}
B7037dd:{NFSU2_TR(0x7037dd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7037e0:L7037e0:{c.instructions+=1;NFSU2_TR(0x7037e0);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7037e2;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7037e0u);}goto L7037e0;}
}
B7037e2:L7037e2:{c.instructions+=7;NFSU2_TR(0x7037e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7037e8:{NFSU2_TR(0x7037e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7037ee:{NFSU2_TR(0x7037ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7037f1:{NFSU2_TR(0x7037f1);
__builtin_memmove((R+4),(R+0),4);
}
B7037f3:{NFSU2_TR(0x7037f3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7037f6:{NFSU2_TR(0x7037f6);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7037f8:{NFSU2_TR(0x7037f8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7037fa:L7037fa:{c.instructions+=1;NFSU2_TR(0x7037fa);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7037fc;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7037fau);}goto L7037fa;}
}
B7037fc:L7037fc:{c.instructions+=2;NFSU2_TR(0x7037fc);
__builtin_memmove((R+4),(R+0),4);
}
B7037fe:{NFSU2_TR(0x7037fe);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B703801:L703801:{c.instructions+=1;NFSU2_TR(0x703801);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L703803;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703801u);}goto L703801;}
}
B703803:L703803:{c.instructions+=15;NFSU2_TR(0x703803);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703809:{NFSU2_TR(0x703809);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70380f:{NFSU2_TR(0x70380f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703812:{NFSU2_TR(0x703812);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B703815:{NFSU2_TR(0x703815);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703816:{NFSU2_TR(0x703816);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70381c:{NFSU2_TR(0x70381c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70381f:{NFSU2_TR(0x70381f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703820:{NFSU2_TR(0x703820);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703823:{NFSU2_TR(0x703823);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B703825:{NFSU2_TR(0x703825);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703826:{NFSU2_TR(0x703826);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70382c:{NFSU2_TR(0x70382c);
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
B70382e:{NFSU2_TR(0x70382e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70382f:{NFSU2_TR(0x70382f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ec4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703835ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B703835:L703835:{c.instructions+=2;NFSU2_TR(0x703835);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703838:{NFSU2_TR(0x703838);
{goto L703907;}
}
B70383d:L70383d:{c.instructions+=3;NFSU2_TR(0x70383d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70383e:{NFSU2_TR(0x70383e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70383f:{NFSU2_TR(0x70383f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7036d1u);}goto L7036d1;}
}
B703844:L703844:{c.instructions+=2;NFSU2_TR(0x703844);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703847:{NFSU2_TR(0x703847);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L703863;}}
}
B703849:L703849:{c.instructions+=2;NFSU2_TR(0x703849);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70384c:{NFSU2_TR(0x70384c);
if(r1(R+518)){{goto L70386a;}}
}
B70384e:L70384e:{c.instructions+=1;NFSU2_TR(0x70384e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703624u);}goto L703624;}
}
B703853:L703853:{c.instructions+=4;NFSU2_TR(0x703853);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703854:{NFSU2_TR(0x703854);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703855:{NFSU2_TR(0x703855);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703856:{NFSU2_TR(0x703856);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70385bull));
TAIL_STATIC(0x70a5e0u,70a);
}
B70385b:L70385b:{c.instructions+=2;NFSU2_TR(0x70385b);
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
B70385e:{NFSU2_TR(0x70385e);
{goto L703907;}
}
B703863:L703863:{c.instructions+=2;NFSU2_TR(0x703863);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703864:{NFSU2_TR(0x703864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703869ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70336cu);}goto L70336c;}
}
B703869:L703869:{c.instructions+=1;NFSU2_TR(0x703869);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70386a:L70386a:{c.instructions+=4;NFSU2_TR(0x70386a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70386d:{NFSU2_TR(0x70386d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703870:{NFSU2_TR(0x703870);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703871:{NFSU2_TR(0x703871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703876ull));
TAIL_STATIC(0x70a4d9u,70a);
}
B703876:L703876:{c.instructions+=1;NFSU2_TR(0x703876);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70385bu);}goto L70385b;}
}
B703878:L703878:{c.instructions+=2;NFSU2_TR(0x703878);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703879:{NFSU2_TR(0x703879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70387eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70336cu);}goto L70336c;}
}
B70387e:L70387e:{c.instructions+=2;NFSU2_TR(0x70387e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70387f:{NFSU2_TR(0x70387f);
{goto L703907;}
}
B703884:L703884:{c.instructions+=2;NFSU2_TR(0x703884);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B703887:{NFSU2_TR(0x703887);
if(r1(R+518)){{goto L703907;}}
}
B703889:L703889:{c.instructions+=2;NFSU2_TR(0x703889);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70388f:{NFSU2_TR(0x70388f);
if(r1(R+518)){{goto L703907;}}
}
B703891:L703891:{c.instructions+=9;NFSU2_TR(0x703891);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703897:{NFSU2_TR(0x703897);
u8 U[32];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B70389e:{NFSU2_TR(0x70389e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7038a1:{NFSU2_TR(0x7038a1);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7038a3:{NFSU2_TR(0x7038a3);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7038a5:{NFSU2_TR(0x7038a5);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B7038a7:{NFSU2_TR(0x7038a7);
__builtin_memmove((R+4),(R+0),4);
}
B7038a9:{NFSU2_TR(0x7038a9);
__builtin_memmove((R+8),(R+4),4);
}
B7038ab:{NFSU2_TR(0x7038ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7038ae:L7038ae:{c.instructions+=1;NFSU2_TR(0x7038ae);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7038b0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7038aeu);}goto L7038ae;}
}
B7038b0:L7038b0:{c.instructions+=2;NFSU2_TR(0x7038b0);
__builtin_memmove((R+4),(R+8),4);
}
B7038b2:{NFSU2_TR(0x7038b2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7038b5:L7038b5:{c.instructions+=1;NFSU2_TR(0x7038b5);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7038b7;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7038b5u);}goto L7038b5;}
}
B7038b7:L7038b7:{c.instructions+=7;NFSU2_TR(0x7038b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7038bd:{NFSU2_TR(0x7038bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7038c0:{NFSU2_TR(0x7038c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7038c3:{NFSU2_TR(0x7038c3);
__builtin_memmove((R+4),(R+0),4);
}
B7038c5:{NFSU2_TR(0x7038c5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B7038c8:{NFSU2_TR(0x7038c8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B7038ca:{NFSU2_TR(0x7038ca);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B7038cc:L7038cc:{c.instructions+=1;NFSU2_TR(0x7038cc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L7038ce;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7038ccu);}goto L7038cc;}
}
B7038ce:L7038ce:{c.instructions+=2;NFSU2_TR(0x7038ce);
__builtin_memmove((R+4),(R+0),4);
}
B7038d0:{NFSU2_TR(0x7038d0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B7038d3:L7038d3:{c.instructions+=1;NFSU2_TR(0x7038d3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L7038d5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7038d3u);}goto L7038d3;}
}
B7038d5:L7038d5:{c.instructions+=15;NFSU2_TR(0x7038d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7038db:{NFSU2_TR(0x7038db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7038e1:{NFSU2_TR(0x7038e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7038e4:{NFSU2_TR(0x7038e4);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7038e7:{NFSU2_TR(0x7038e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7038e8:{NFSU2_TR(0x7038e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7038ee:{NFSU2_TR(0x7038ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B7038f1:{NFSU2_TR(0x7038f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7038f2:{NFSU2_TR(0x7038f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7038f5:{NFSU2_TR(0x7038f5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B7038f7:{NFSU2_TR(0x7038f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7038f8:{NFSU2_TR(0x7038f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7038fb:{NFSU2_TR(0x7038fb);
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
B7038fd:{NFSU2_TR(0x7038fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7038fe:{NFSU2_TR(0x7038fe);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ec4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703904ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B703904:L703904:{c.instructions+=1;NFSU2_TR(0x703904);
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
B703907:L703907:{c.instructions+=5;NFSU2_TR(0x703907);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703908:{NFSU2_TR(0x703908);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703909:{NFSU2_TR(0x703909);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70390a:{NFSU2_TR(0x70390a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70390b:{NFSU2_TR(0x70390b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70390c:L70390c:{c.instructions+=9;NFSU2_TR(0x70390c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70390d:{NFSU2_TR(0x70390d);
__builtin_memmove((R+20),(R+16),4);
}
B70390f:{NFSU2_TR(0x70390f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703910:{NFSU2_TR(0x703910);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703911:{NFSU2_TR(0x703911);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B703914:{NFSU2_TR(0x703914);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703916:{NFSU2_TR(0x703916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703917:{NFSU2_TR(0x703917);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x3cull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x3cull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3cull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70391a:{NFSU2_TR(0x70391a);
w4(R+24,u32(0x7c4618ull));
}
B70391f:L70391f:{c.instructions+=1;NFSU2_TR(0x70391f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L703921;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70391fu);}goto L70391f;}
}
B703921:L703921:{c.instructions+=4;NFSU2_TR(0x703921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703922:{NFSU2_TR(0x703922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703923:{NFSU2_TR(0x703923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703924:{NFSU2_TR(0x703924);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703925:L703925:{c.instructions+=5;NFSU2_TR(0x703925);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703926:{NFSU2_TR(0x703926);
__builtin_memmove((R+20),(R+16),4);
}
B703928:{NFSU2_TR(0x703928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70392b:{NFSU2_TR(0x70392b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x13cull))));
w4(U+4,u32(0x7c5318ull));
s4(u32(r4(U+0)),r4(U+4));
}
B703935:{NFSU2_TR(0x703935);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B703937:L703937:{c.instructions+=5;NFSU2_TR(0x703937);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c5218ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70393e:{NFSU2_TR(0x70393e);
u8 U[13];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B703945:{NFSU2_TR(0x703945);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B703946:{NFSU2_TR(0x703946);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703949:{NFSU2_TR(0x703949);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703937u);}goto L703937;}}
}
B70394b:L70394b:{c.instructions+=2;NFSU2_TR(0x70394b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70394c:{NFSU2_TR(0x70394c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70394d:L70394d:{c.instructions+=7;NFSU2_TR(0x70394d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70394e:{NFSU2_TR(0x70394e);
__builtin_memmove((R+20),(R+16),4);
}
B703950:{NFSU2_TR(0x703950);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703953:{NFSU2_TR(0x703953);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B703955:{NFSU2_TR(0x703955);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703956:{NFSU2_TR(0x703956);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B703957:{NFSU2_TR(0x703957);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703958:L703958:{c.instructions+=9;NFSU2_TR(0x703958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70395a:{NFSU2_TR(0x70395a);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4618ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B703962:{NFSU2_TR(0x703962);
u8 U[13];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B70396a:{NFSU2_TR(0x70396a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B703970:{NFSU2_TR(0x703970);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w2(R+8,shl<u16>(r2(R+8),u64(r4(U+0))));
}
B703974:{NFSU2_TR(0x703974);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B703975:{NFSU2_TR(0x703975);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703978:{NFSU2_TR(0x703978);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B70397c:{NFSU2_TR(0x70397c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703958u);}goto L703958;}}
}
B70397e:L70397e:{c.instructions+=7;NFSU2_TR(0x70397e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B703980:{NFSU2_TR(0x703980);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c4c18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B703988:{NFSU2_TR(0x703988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70398e:{NFSU2_TR(0x70398e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w2(R+4,shl<u16>(r2(R+4),u64(r4(U+0))));
}
B703992:{NFSU2_TR(0x703992);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+8)),r2(U+0));
}
B703995:{NFSU2_TR(0x703995);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B703997:{NFSU2_TR(0x703997);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B703998:L703998:{c.instructions+=9;NFSU2_TR(0x703998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B70399a:{NFSU2_TR(0x70399a);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4718ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+8),(U+8),2);
}
B7039a2:{NFSU2_TR(0x7039a2);
u8 U[13];
w4(U+0,u32(u32(u32(0x140ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B7039aa:{NFSU2_TR(0x7039aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7039b0:{NFSU2_TR(0x7039b0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w2(R+8,shl<u16>(r2(R+8),u64(r4(U+0))));
}
B7039b4:{NFSU2_TR(0x7039b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B7039b5:{NFSU2_TR(0x7039b5);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x40ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x40ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7039b8:{NFSU2_TR(0x7039b8);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),2);
s2(u32(r4(U+4)),r2(U+8));
}
B7039bc:{NFSU2_TR(0x7039bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703998u);}goto L703998;}}
}
B7039be:L7039be:{c.instructions+=9;NFSU2_TR(0x7039be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7039c0:{NFSU2_TR(0x7039c0);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c4c98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+4),(U+8),2);
}
B7039c8:{NFSU2_TR(0x7039c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x184ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7039ce:{NFSU2_TR(0x7039ce);
u8 U[39];
w4(U+33,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+37),(R+4),2);
w2(R+4,shl<u16>(r2(R+4),u64(r4(U+33))));
w1(U+22,u8((r4(U+33))==(u32(0x0ull))));
w4(U+23,u32(u32(r4(U+33))-u32(u32(0x1ull))));
w2(U+27,shl<u16>(r2(U+37),u64(r4(U+23))));
w1(U+29,u8(s16(r2(U+27))<s16(u16(0x0ull))));
__builtin_memmove((U+0),(U+22),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+22))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+29))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+30,u8((r4(U+33))==(u32(0x1ull))));
w1(U+31,u8(s16(r2(R+4))<s16(u16(0x0ull))));
w1(U+32,u8(u32(r1(R+512))^u32(r1(U+31))));
__builtin_memmove((U+0),(U+30),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+32))));
w1(U+2,u8(!(r1(U+30))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+33))!=(u32(0x0ull))));
w1(U+6,u8(s16(r2(R+4))<s16(u16(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r2(R+4))==(u16(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w2(U+14,u16(u32(r2(R+4))&u32(u16(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r2(U+14)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(U+18,u8((r1(U+17))==(u8(0x0ull))));
w1(U+19,u8(!(r1(U+5))));
w1(U+20,u8(u32(r1(U+19))&u32(r1(R+514))));
w1(U+21,u8(u32(r1(U+5))&u32(r1(U+18))));
w1(R+514,u8(u32(r1(U+20))|u32(r1(U+21))));
}
B7039d2:{NFSU2_TR(0x7039d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7039d3:{NFSU2_TR(0x7039d3);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+0)),r2(U+0));
}
B7039d6:{NFSU2_TR(0x7039d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7039d7:{NFSU2_TR(0x7039d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7039d8:{NFSU2_TR(0x7039d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7039d9:L7039d9:{c.instructions+=8;NFSU2_TR(0x7039d9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7039da:{NFSU2_TR(0x7039da);
__builtin_memmove((R+20),(R+16),4);
}
B7039dc:{NFSU2_TR(0x7039dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7039dd:{NFSU2_TR(0x7039dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7039e0:{NFSU2_TR(0x7039e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7039e2:{NFSU2_TR(0x7039e2);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B7039e6:{NFSU2_TR(0x7039e6);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
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
B7039e9:{NFSU2_TR(0x7039e9);
if(r1(R+518)){{goto L703a04;}}
}
B7039eb:L7039eb:{c.instructions+=4;NFSU2_TR(0x7039eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7039ee:{NFSU2_TR(0x7039ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7039ef:{NFSU2_TR(0x7039ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7039f2:{NFSU2_TR(0x7039f2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9eb0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7039f8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7039f8:L7039f8:{c.instructions+=3;NFSU2_TR(0x7039f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7039fb:{NFSU2_TR(0x7039fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7039fc:{NFSU2_TR(0x7039fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703a01ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70394du);}goto L70394d;}
}
B703a01:L703a01:{c.instructions+=1;NFSU2_TR(0x703a01);
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
B703a04:L703a04:{c.instructions+=3;NFSU2_TR(0x703a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703a05:{NFSU2_TR(0x703a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703a06:{NFSU2_TR(0x703a06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703a07:L703a07:{c.instructions+=19;NFSU2_TR(0x703a07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703a08:{NFSU2_TR(0x703a08);
__builtin_memmove((R+20),(R+16),4);
}
B703a0a:{NFSU2_TR(0x703a0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703a0b:{NFSU2_TR(0x703a0b);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703a11:{NFSU2_TR(0x703a11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703a12:{NFSU2_TR(0x703a12);
{u32 ea_=u32(u32(8148256u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703a18:{NFSU2_TR(0x703a18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703a19:{NFSU2_TR(0x703a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703a1c:{NFSU2_TR(0x703a1c);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B703a22:{NFSU2_TR(0x703a22);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703a23:{NFSU2_TR(0x703a23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B703a25:{NFSU2_TR(0x703a25);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c4c18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B703a2d:{NFSU2_TR(0x703a2d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703a30:{NFSU2_TR(0x703a30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703a33:{NFSU2_TR(0x703a33);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B703a36:{NFSU2_TR(0x703a36);
__asm__ volatile(".byte 0xd8,0xfb":::"memory");
}
B703a38:{NFSU2_TR(0x703a38);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B703a3a:{NFSU2_TR(0x703a3a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B703a3c:{NFSU2_TR(0x703a3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703a41ull));
TAIL_STATIC(0x75bed4u,75b);
}
B703a41:L703a41:{c.instructions+=10;NFSU2_TR(0x703a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x190ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703a47:{NFSU2_TR(0x703a47);
__builtin_memmove((R+0),(R+28),4);
}
B703a49:{NFSU2_TR(0x703a49);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703a4c:{NFSU2_TR(0x703a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c4f18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703a52:{NFSU2_TR(0x703a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x390ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703a58:{NFSU2_TR(0x703a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c4d18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703a5e:{NFSU2_TR(0x703a5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703a64:{NFSU2_TR(0x703a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x590ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703a6a:{NFSU2_TR(0x703a6a);
__builtin_memmove((R+28),(R+12),4);
}
B703a6c:{NFSU2_TR(0x703a6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B703a73:L703a73:{c.instructions+=7;NFSU2_TR(0x703a73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703a75:{NFSU2_TR(0x703a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4618ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703a7c:{NFSU2_TR(0x703a7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703a7f:{NFSU2_TR(0x703a7f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B703a81:{NFSU2_TR(0x703a81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703a84:{NFSU2_TR(0x703a84);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B703a87:{NFSU2_TR(0x703a87);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L703a8f;}}
}
B703a89:L703a89:{c.instructions+=1;NFSU2_TR(0x703a89);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B703a8f:L703a8f:{c.instructions+=4;NFSU2_TR(0x703a8f);
__asm__ volatile(".byte 0xd8,0xfb":::"memory");
}
B703a91:{NFSU2_TR(0x703a91);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B703a93:{NFSU2_TR(0x703a93);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B703a95:{NFSU2_TR(0x703a95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703a9aull));
TAIL_STATIC(0x75bed4u,75b);
}
B703a9a:L703a9a:{c.instructions+=10;NFSU2_TR(0x703a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffe00ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703aa0:{NFSU2_TR(0x703aa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703aa2:{NFSU2_TR(0x703aa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4a18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703aa9:{NFSU2_TR(0x703aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B703aab:{NFSU2_TR(0x703aab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703aad:{NFSU2_TR(0x703aad);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4818ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703ab4:{NFSU2_TR(0x703ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703aba:{NFSU2_TR(0x703aba);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B703abd:{NFSU2_TR(0x703abd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703ac0:{NFSU2_TR(0x703ac0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703a73u);}goto L703a73;}}
}
B703ac2:L703ac2:{c.instructions+=9;NFSU2_TR(0x703ac2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B703ac4:{NFSU2_TR(0x703ac4);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x7c4c98ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B703acc:{NFSU2_TR(0x703acc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703acf:{NFSU2_TR(0x703acf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703ad2:{NFSU2_TR(0x703ad2);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B703ad5:{NFSU2_TR(0x703ad5);
__asm__ volatile(".byte 0xd8,0xfb":::"memory");
}
B703ad7:{NFSU2_TR(0x703ad7);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B703ad9:{NFSU2_TR(0x703ad9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B703adb:{NFSU2_TR(0x703adb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703ae0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B703ae0:L703ae0:{c.instructions+=9;NFSU2_TR(0x703ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703ae6:{NFSU2_TR(0x703ae6);
__builtin_memmove((R+0),(R+28),4);
}
B703ae8:{NFSU2_TR(0x703ae8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703aeb:{NFSU2_TR(0x703aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c5018ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703af1:{NFSU2_TR(0x703af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x490ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703af7:{NFSU2_TR(0x703af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c4e18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703afd:{NFSU2_TR(0x703afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x690ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703b03:{NFSU2_TR(0x703b03);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x494ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703b09:{NFSU2_TR(0x703b09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3full));
s4(u32(r4(U+0)),r4(U+4));
}
B703b10:L703b10:{c.instructions+=7;NFSU2_TR(0x703b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703b12:{NFSU2_TR(0x703b12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4718ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703b19:{NFSU2_TR(0x703b19);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703b1c:{NFSU2_TR(0x703b1c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B703b1e:{NFSU2_TR(0x703b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703b21:{NFSU2_TR(0x703b21);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B703b24:{NFSU2_TR(0x703b24);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L703b2c;}}
}
B703b26:L703b26:{c.instructions+=1;NFSU2_TR(0x703b26);
{u32 ea_=u32(u32(8042640u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B703b2c:L703b2c:{c.instructions+=4;NFSU2_TR(0x703b2c);
__asm__ volatile(".byte 0xd8,0xfb":::"memory");
}
B703b2e:{NFSU2_TR(0x703b2e);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B703b30:{NFSU2_TR(0x703b30);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B703b32:{NFSU2_TR(0x703b32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703b37ull));
TAIL_STATIC(0x75bed4u,75b);
}
B703b37:L703b37:{c.instructions+=10;NFSU2_TR(0x703b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffe00ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703b3d:{NFSU2_TR(0x703b3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703b3f:{NFSU2_TR(0x703b3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4b18ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703b46:{NFSU2_TR(0x703b46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B703b48:{NFSU2_TR(0x703b48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703b4a:{NFSU2_TR(0x703b4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4918ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703b51:{NFSU2_TR(0x703b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703b57:{NFSU2_TR(0x703b57);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B703b5a:{NFSU2_TR(0x703b5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703b5d:{NFSU2_TR(0x703b5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703b10u);}goto L703b10;}}
}
B703b5f:L703b5f:{c.instructions+=6;NFSU2_TR(0x703b5f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B703b61:{NFSU2_TR(0x703b61);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703b63:{NFSU2_TR(0x703b63);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B703b65:{NFSU2_TR(0x703b65);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B703b68:{NFSU2_TR(0x703b68);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B703b6a:{NFSU2_TR(0x703b6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703b6b:L703b6b:{c.instructions+=11;NFSU2_TR(0x703b6b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B703b6e:{NFSU2_TR(0x703b6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703b72:{NFSU2_TR(0x703b72);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B703b79:{NFSU2_TR(0x703b79);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B703b7c:{NFSU2_TR(0x703b7c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x594ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B703b83:{NFSU2_TR(0x703b83);
w2(R+8,u16(u32(r2(R+8))-u32(u16(0x1ull))));
}
B703b85:{NFSU2_TR(0x703b85);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703b89:{NFSU2_TR(0x703b89);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B703b8a:{NFSU2_TR(0x703b8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B703b8b:{NFSU2_TR(0x703b8b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B703b8c:{NFSU2_TR(0x703b8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703b6bu);}goto L703b6b;}}
}
B703b8e:L703b8e:{c.instructions+=2;NFSU2_TR(0x703b8e);
w4(R+28,u32(0x7c5118ull));
}
B703b93:{NFSU2_TR(0x703b93);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x890ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703b99:L703b99:{c.instructions+=20;NFSU2_TR(0x703b99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703b9b:{NFSU2_TR(0x703b9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4618ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703ba2:{NFSU2_TR(0x703ba2);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B703ba5:{NFSU2_TR(0x703ba5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703ba8:{NFSU2_TR(0x703ba8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B703ba9:{NFSU2_TR(0x703ba9);
u8 U[4];
w4(U+0,u32(0x64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703bab:{NFSU2_TR(0x703bab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703bac:{NFSU2_TR(0x703bac);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x703bac);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x703bac);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B703bae:{NFSU2_TR(0x703bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703bb4:{NFSU2_TR(0x703bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703bb6:{NFSU2_TR(0x703bb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c4718ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B703bbd:{NFSU2_TR(0x703bbd);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B703bc0:{NFSU2_TR(0x703bc0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703bc3:{NFSU2_TR(0x703bc3);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B703bc4:{NFSU2_TR(0x703bc4);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x703bc4);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x703bc4);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B703bc6:{NFSU2_TR(0x703bc6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B703bc9:{NFSU2_TR(0x703bc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B703bcb:{NFSU2_TR(0x703bcb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B703bce:{NFSU2_TR(0x703bce);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x7c5218ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7c5218ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7c5218ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703bd4:{NFSU2_TR(0x703bd4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703b99u);}goto L703b99;}}
}
B703bd6:L703bd6:{c.instructions+=5;NFSU2_TR(0x703bd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703bd7:{NFSU2_TR(0x703bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703bd8:{NFSU2_TR(0x703bd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703bd9:{NFSU2_TR(0x703bd9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B703bda:{NFSU2_TR(0x703bda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703bdb:L703bdb:{c.instructions+=8;NFSU2_TR(0x703bdb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703bdc:{NFSU2_TR(0x703bdc);
__builtin_memmove((R+20),(R+16),4);
}
B703bde:{NFSU2_TR(0x703bde);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703bdf:{NFSU2_TR(0x703bdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703be2:{NFSU2_TR(0x703be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703be4:{NFSU2_TR(0x703be4);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B703be8:{NFSU2_TR(0x703be8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
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
B703beb:{NFSU2_TR(0x703beb);
if(r1(R+518)){{goto L703c0e;}}
}
B703bed:L703bed:{c.instructions+=4;NFSU2_TR(0x703bed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703bf0:{NFSU2_TR(0x703bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703bf1:{NFSU2_TR(0x703bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703bf4:{NFSU2_TR(0x703bf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703bf9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703925u);}goto L703925;}
}
B703bf9:L703bf9:{c.instructions+=3;NFSU2_TR(0x703bf9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703bfc:{NFSU2_TR(0x703bfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703bfd:{NFSU2_TR(0x703bfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703c02ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703a07u);}goto L703a07;}
}
B703c02:L703c02:{c.instructions+=3;NFSU2_TR(0x703c02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B703c05:{NFSU2_TR(0x703c05);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703c06:{NFSU2_TR(0x703c06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703c0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70394du);}goto L70394d;}
}
B703c0b:L703c0b:{c.instructions+=1;NFSU2_TR(0x703c0b);
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
B703c0e:L703c0e:{c.instructions+=3;NFSU2_TR(0x703c0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703c0f:{NFSU2_TR(0x703c0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703c10:{NFSU2_TR(0x703c10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703c11:L703c11:{c.instructions+=15;NFSU2_TR(0x703c11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703c12:{NFSU2_TR(0x703c12);
__builtin_memmove((R+20),(R+16),4);
}
B703c14:{NFSU2_TR(0x703c14);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B703c18:{NFSU2_TR(0x703c18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c5518ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B703c1f:{NFSU2_TR(0x703c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703c22:{NFSU2_TR(0x703c22);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703c23:{NFSU2_TR(0x703c23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B703c26:{NFSU2_TR(0x703c26);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703c27:{NFSU2_TR(0x703c27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703c28:{NFSU2_TR(0x703c28);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B703c2b:{NFSU2_TR(0x703c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B703c2e:{NFSU2_TR(0x703c2e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B703c30:{NFSU2_TR(0x703c30);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703c32:{NFSU2_TR(0x703c32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703c33:{NFSU2_TR(0x703c33);
__builtin_memmove((R+28),(R+12),4);
}
B703c35:L703c35:{c.instructions+=1;NFSU2_TR(0x703c35);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L703c37;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703c35u);}goto L703c35;}
}
B703c37:L703c37:{c.instructions+=6;NFSU2_TR(0x703c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703c3a:{NFSU2_TR(0x703c3a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B703c3d:{NFSU2_TR(0x703c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x590ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703c43:{NFSU2_TR(0x703c43);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703c45:{NFSU2_TR(0x703c45);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B703c49:{NFSU2_TR(0x703c49);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L703c62;}}
}
B703c4b:L703c4b:{c.instructions+=6;NFSU2_TR(0x703c4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703c51:{NFSU2_TR(0x703c51);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B703c53:{NFSU2_TR(0x703c53);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B703c5a:{NFSU2_TR(0x703c5a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B703c5d:{NFSU2_TR(0x703c5d);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+12)),r2(U+0));
}
B703c60:{NFSU2_TR(0x703c60);
{goto L703c86;}
}
B703c62:L703c62:{c.instructions+=3;NFSU2_TR(0x703c62);
w4(R+4,u32(0-u32(r4(R+4))));
}
B703c64:{NFSU2_TR(0x703c64);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703c66:{NFSU2_TR(0x703c66);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L703c82;}}
}
B703c68:L703c68:{c.instructions+=6;NFSU2_TR(0x703c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B703c6e:{NFSU2_TR(0x703c6e);
u8 U[32];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B703c75:{NFSU2_TR(0x703c75);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffull))));
}
B703c7a:{NFSU2_TR(0x703c7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B703c7d:{NFSU2_TR(0x703c7d);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B703c80:{NFSU2_TR(0x703c80);
{goto L703c86;}
}
B703c82:L703c82:{c.instructions+=1;NFSU2_TR(0x703c82);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B703c86:L703c86:{c.instructions+=2;NFSU2_TR(0x703c86);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x2ull))));
}
B703c89:{NFSU2_TR(0x703c89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B703c90:L703c90:{c.instructions+=12;NFSU2_TR(0x703c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703c93:{NFSU2_TR(0x703c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7c5218ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703c99:{NFSU2_TR(0x703c99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B703c9d:{NFSU2_TR(0x703c9d);
u8 U[16];
w4(U+0,u32(u32(u32(0x790ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B703ca4:{NFSU2_TR(0x703ca4);
__builtin_memmove((R+4),(R+24),4);
}
B703ca6:{NFSU2_TR(0x703ca6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B703ca9:{NFSU2_TR(0x703ca9);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B703cb0:{NFSU2_TR(0x703cb0);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B703cb2:{NFSU2_TR(0x703cb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703cb5:{NFSU2_TR(0x703cb5);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B703cb9:{NFSU2_TR(0x703cb9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B703cbb:{NFSU2_TR(0x703cbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L703cda;}}
}
B703cbd:L703cbd:{c.instructions+=5;NFSU2_TR(0x703cbd);
u8 U[16];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B703cc4:{NFSU2_TR(0x703cc4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B703cc6:{NFSU2_TR(0x703cc6);
u8 U[40];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w8(U+16,u64(s64(s32(r4(R+24)))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(U+24,u64(s64(s32(r4(U+12)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+24,u32(r8(U+32)));
}
B703cce:{NFSU2_TR(0x703cce);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B703cd1:{NFSU2_TR(0x703cd1);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+12)),r2(U+0));
}
B703cd4:L703cd4:{c.instructions+=2;NFSU2_TR(0x703cd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B703cd8:{NFSU2_TR(0x703cd8);
{goto L703cff;}
}
B703cda:L703cda:{c.instructions+=3;NFSU2_TR(0x703cda);
w4(R+28,u32(0-u32(r4(R+28))));
}
B703cdc:{NFSU2_TR(0x703cdc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B703cde:{NFSU2_TR(0x703cde);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L703cfc;}}
}
B703ce0:L703ce0:{c.instructions+=6;NFSU2_TR(0x703ce0);
u8 U[16];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+12))));
}
B703ce7:{NFSU2_TR(0x703ce7);
u8 U[40];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w8(U+24,u64(s64(s32(r4(U+12)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
}
B703cef:{NFSU2_TR(0x703cef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffull))));
}
B703cf4:{NFSU2_TR(0x703cf4);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B703cf7:{NFSU2_TR(0x703cf7);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B703cfa:{NFSU2_TR(0x703cfa);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703cd4u);}goto L703cd4;}
}
B703cfc:L703cfc:{c.instructions+=1;NFSU2_TR(0x703cfc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x17ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))+u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B703cff:L703cff:{c.instructions+=5;NFSU2_TR(0x703cff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B703d03:{NFSU2_TR(0x703d03);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B703d04:{NFSU2_TR(0x703d04);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B703d05:{NFSU2_TR(0x703d05);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x100ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B703d0c:{NFSU2_TR(0x703d0c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703c90u);}goto L703c90;}}
}
B703d0e:L703d0e:{c.instructions+=5;NFSU2_TR(0x703d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703d0f:{NFSU2_TR(0x703d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703d10:{NFSU2_TR(0x703d10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703d11:{NFSU2_TR(0x703d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703d12:{NFSU2_TR(0x703d12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703d13:L703d13:{c.instructions+=5;NFSU2_TR(0x703d13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d14:{NFSU2_TR(0x703d14);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703d1a:{NFSU2_TR(0x703d1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703d1c:{NFSU2_TR(0x703d1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B703d1e:{NFSU2_TR(0x703d1e);
if(r1(R+518)){{goto L703d27;}}
}
B703d20:L703d20:{c.instructions+=2;NFSU2_TR(0x703d20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d21:{NFSU2_TR(0x703d21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703d26ull));
TAIL_STATIC(0x702eedu,702);
}
B703d26:L703d26:{c.instructions+=1;NFSU2_TR(0x703d26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703d27:L703d27:{c.instructions+=6;NFSU2_TR(0x703d27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B703d2a:{NFSU2_TR(0x703d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B703d31:{NFSU2_TR(0x703d31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((R+28),(U+0),4);
}
B703d37:{NFSU2_TR(0x703d37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B703d39:{NFSU2_TR(0x703d39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B703d3b:{NFSU2_TR(0x703d3b);
if(r1(R+518)){{goto L703d44;}}
}
B703d3d:L703d3d:{c.instructions+=2;NFSU2_TR(0x703d3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d3e:{NFSU2_TR(0x703d3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703d43ull));
TAIL_STATIC(0x702eedu,702);
}
B703d43:L703d43:{c.instructions+=1;NFSU2_TR(0x703d43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703d44:L703d44:{c.instructions+=4;NFSU2_TR(0x703d44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B703d47:{NFSU2_TR(0x703d47);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
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
B703d4e:{NFSU2_TR(0x703d4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703d4f:{NFSU2_TR(0x703d4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703d50:L703d50:{c.instructions+=4;NFSU2_TR(0x703d50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d51:{NFSU2_TR(0x703d51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d52:{NFSU2_TR(0x703d52);
__builtin_memmove((R+24),(R+0),4);
}
B703d54:{NFSU2_TR(0x703d54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703d59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703d13u);}goto L703d13;}
}
B703d59:L703d59:{c.instructions+=4;NFSU2_TR(0x703d59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d5b:{NFSU2_TR(0x703d5b);
w4(R+28,u32(0xa0ull));
}
B703d60:{NFSU2_TR(0x703d60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d61:{NFSU2_TR(0x703d61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703d66ull));
TAIL_STATIC(0x702edfu,702);
}
B703d66:L703d66:{c.instructions+=5;NFSU2_TR(0x703d66);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B703d68:{NFSU2_TR(0x703d68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703d69:{NFSU2_TR(0x703d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703d6a:{NFSU2_TR(0x703d6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703d70:{NFSU2_TR(0x703d70);
if(r1(R+518)){{goto L703d92;}}
}
B703d72:L703d72:{c.instructions+=6;NFSU2_TR(0x703d72);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B703d75:{NFSU2_TR(0x703d75);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B703d78:{NFSU2_TR(0x703d78);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d7a:{NFSU2_TR(0x703d7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703d7b:{NFSU2_TR(0x703d7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703d81:{NFSU2_TR(0x703d81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703d86ull));
TAIL_STATIC(0x702edfu,702);
}
B703d86:L703d86:{c.instructions+=5;NFSU2_TR(0x703d86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B703d88:{NFSU2_TR(0x703d88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703d89:{NFSU2_TR(0x703d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703d8a:{NFSU2_TR(0x703d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703d90:{NFSU2_TR(0x703d90);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L703d9b;}}
}
B703d92:L703d92:{c.instructions+=1;NFSU2_TR(0x703d92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703d97ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703d13u);}goto L703d13;}
}
B703d97:L703d97:{c.instructions+=2;NFSU2_TR(0x703d97);
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
B703d99:{NFSU2_TR(0x703d99);
{goto L703daa;}
}
B703d9b:L703d9b:{c.instructions+=5;NFSU2_TR(0x703d9b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1full))));
}
B703d9e:{NFSU2_TR(0x703d9e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffe0ull))));
}
B703da1:{NFSU2_TR(0x703da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703da7:{NFSU2_TR(0x703da7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B703da9:{NFSU2_TR(0x703da9);
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
B703daa:L703daa:{c.instructions+=3;NFSU2_TR(0x703daa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703dab:{NFSU2_TR(0x703dab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703dac:{NFSU2_TR(0x703dac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703dad:L703dad:{c.instructions+=8;NFSU2_TR(0x703dad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703dae:{NFSU2_TR(0x703dae);
__builtin_memmove((R+20),(R+16),4);
}
B703db0:{NFSU2_TR(0x703db0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703db1:{NFSU2_TR(0x703db1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703db2:{NFSU2_TR(0x703db2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B703db5:{NFSU2_TR(0x703db5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B703db7:{NFSU2_TR(0x703db7);
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
B703db9:{NFSU2_TR(0x703db9);
if(r1(R+518)){{goto L703dcb;}}
}
B703dbb:L703dbb:{c.instructions+=1;NFSU2_TR(0x703dbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703dc0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703d13u);}goto L703d13;}
}
B703dc0:L703dc0:{c.instructions+=2;NFSU2_TR(0x703dc0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B703dc2:{NFSU2_TR(0x703dc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703dc7ull));
TAIL_STATIC(0x702eedu,702);
}
B703dc7:L703dc7:{c.instructions+=2;NFSU2_TR(0x703dc7);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B703dca:{NFSU2_TR(0x703dca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703dcb:L703dcb:{c.instructions+=4;NFSU2_TR(0x703dcb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703dcc:{NFSU2_TR(0x703dcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703dcd:{NFSU2_TR(0x703dcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703dce:{NFSU2_TR(0x703dce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703dcf:L703dcf:{c.instructions+=6;NFSU2_TR(0x703dcf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703dd0:{NFSU2_TR(0x703dd0);
__builtin_memmove((R+20),(R+16),4);
}
B703dd2:{NFSU2_TR(0x703dd2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703dd3:{NFSU2_TR(0x703dd3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703dd5:{NFSU2_TR(0x703dd5);
u8 U[4];
w4(U+0,u32(0x990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703dda:{NFSU2_TR(0x703dda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703ddfull));
TAIL_STATIC(0x702edfu,702);
}
B703ddf:L703ddf:{c.instructions+=7;NFSU2_TR(0x703ddf);
__builtin_memmove((R+8),(R+0),4);
}
B703de1:{NFSU2_TR(0x703de1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703de2:{NFSU2_TR(0x703de2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B703de4:{NFSU2_TR(0x703de4);
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
B703de6:{NFSU2_TR(0x703de6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703de7:{NFSU2_TR(0x703de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B703dea:{NFSU2_TR(0x703dea);
if(r1(R+518)){{goto L703e0f;}}
}
B703dec:L703dec:{c.instructions+=3;NFSU2_TR(0x703dec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703ded:{NFSU2_TR(0x703ded);
__builtin_memmove((R+28),(R+8),4);
}
B703def:{NFSU2_TR(0x703def);
w4(R+4,u32(0x264ull));
}
B703df4:L703df4:{c.instructions+=1;NFSU2_TR(0x703df4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L703df6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703df4u);}goto L703df4;}
}
B703df6:L703df6:{c.instructions+=2;NFSU2_TR(0x703df6);
__builtin_memmove((R+0),(R+8),4);
}
B703df8:{NFSU2_TR(0x703df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703dfdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703d50u);}goto L703d50;}
}
B703dfd:L703dfd:{c.instructions+=3;NFSU2_TR(0x703dfd);
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
B703dff:{NFSU2_TR(0x703dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703e00:{NFSU2_TR(0x703e00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L703e0c;}}
}
B703e02:L703e02:{c.instructions+=3;NFSU2_TR(0x703e02);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B703e05:{NFSU2_TR(0x703e05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e06:{NFSU2_TR(0x703e06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x703e0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703dadu);}goto L703dad;}
}
B703e0b:L703e0b:{c.instructions+=1;NFSU2_TR(0x703e0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B703e0c:L703e0c:{c.instructions+=1;NFSU2_TR(0x703e0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703e0f:L703e0f:{c.instructions+=2;NFSU2_TR(0x703e0f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B703e10:{NFSU2_TR(0x703e10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703e11:L703e11:{c.instructions+=11;NFSU2_TR(0x703e11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e12:{NFSU2_TR(0x703e12);
__builtin_memmove((R+20),(R+16),4);
}
B703e14:{NFSU2_TR(0x703e14);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e15:{NFSU2_TR(0x703e15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703e18:{NFSU2_TR(0x703e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703e1b:{NFSU2_TR(0x703e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B703e1f:{NFSU2_TR(0x703e1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e20:{NFSU2_TR(0x703e20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e21:{NFSU2_TR(0x703e21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e22:{NFSU2_TR(0x703e22);
w4(R+24,u32(0x7c5218ull));
}
B703e27:{NFSU2_TR(0x703e27);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B703e29:L703e29:{c.instructions+=15;NFSU2_TR(0x703e29);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+28,u32(s32(s16(r2(U+0)))));
}
B703e2c:{NFSU2_TR(0x703e2c);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B703e30:{NFSU2_TR(0x703e30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B703e33:{NFSU2_TR(0x703e33);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B703e36:{NFSU2_TR(0x703e36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B703e38:{NFSU2_TR(0x703e38);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B703e3c:{NFSU2_TR(0x703e3c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B703e3e:{NFSU2_TR(0x703e3e);
__builtin_memmove((R+28),(R+0),4);
}
B703e40:{NFSU2_TR(0x703e40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B703e43:{NFSU2_TR(0x703e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B703e46:{NFSU2_TR(0x703e46);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B703e47:{NFSU2_TR(0x703e47);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B703e4a:{NFSU2_TR(0x703e4a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B703e4b:{NFSU2_TR(0x703e4b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x7c5318ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7c5318ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7c5318ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703e51:{NFSU2_TR(0x703e51);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703e29u);}goto L703e29;}}
}
B703e53:L703e53:{c.instructions+=9;NFSU2_TR(0x703e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703e56:{NFSU2_TR(0x703e56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703e59:{NFSU2_TR(0x703e59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703e5a:{NFSU2_TR(0x703e5a);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B703e5d:{NFSU2_TR(0x703e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703e5e:{NFSU2_TR(0x703e5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B703e60:{NFSU2_TR(0x703e60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703e61:{NFSU2_TR(0x703e61);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B703e62:{NFSU2_TR(0x703e62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703e63:L703e63:{c.instructions+=1;NFSU2_TR(0x703e63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703e64:L703e64:{c.instructions+=10;NFSU2_TR(0x703e64);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e65:{NFSU2_TR(0x703e65);
__builtin_memmove((R+20),(R+16),4);
}
B703e67:{NFSU2_TR(0x703e67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B703e6a:{NFSU2_TR(0x703e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703e6d:{NFSU2_TR(0x703e6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703e70:{NFSU2_TR(0x703e70);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e71:{NFSU2_TR(0x703e71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e72:{NFSU2_TR(0x703e72);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e73:{NFSU2_TR(0x703e73);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703e75:{NFSU2_TR(0x703e75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703e76:L703e76:{c.instructions+=45;NFSU2_TR(0x703e76);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B703e79:{NFSU2_TR(0x703e79);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+28,u32(r1(U+0)));
}
B703e7c:{NFSU2_TR(0x703e7c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703e7e:{NFSU2_TR(0x703e7e);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703e80:{NFSU2_TR(0x703e80);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
s2(u32(r4(R+8)),r2(U+0));
}
B703e83:{NFSU2_TR(0x703e83);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703e87:{NFSU2_TR(0x703e87);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703e8b:{NFSU2_TR(0x703e8b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703e8d:{NFSU2_TR(0x703e8d);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703e8f:{NFSU2_TR(0x703e8f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703e93:{NFSU2_TR(0x703e93);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703e97:{NFSU2_TR(0x703e97);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703e9b:{NFSU2_TR(0x703e9b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703e9d:{NFSU2_TR(0x703e9d);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703e9f:{NFSU2_TR(0x703e9f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703ea3:{NFSU2_TR(0x703ea3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703ea7:{NFSU2_TR(0x703ea7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703eab:{NFSU2_TR(0x703eab);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703ead:{NFSU2_TR(0x703ead);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703eaf:{NFSU2_TR(0x703eaf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703eb3:{NFSU2_TR(0x703eb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703eb7:{NFSU2_TR(0x703eb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703ebb:{NFSU2_TR(0x703ebb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703ebd:{NFSU2_TR(0x703ebd);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703ebf:{NFSU2_TR(0x703ebf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703ec3:{NFSU2_TR(0x703ec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703ec7:{NFSU2_TR(0x703ec7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703ecb:{NFSU2_TR(0x703ecb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703ecd:{NFSU2_TR(0x703ecd);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703ecf:{NFSU2_TR(0x703ecf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703ed3:{NFSU2_TR(0x703ed3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703ed7:{NFSU2_TR(0x703ed7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703edb:{NFSU2_TR(0x703edb);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703edd:{NFSU2_TR(0x703edd);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703edf:{NFSU2_TR(0x703edf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703ee3:{NFSU2_TR(0x703ee3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B703ee7:{NFSU2_TR(0x703ee7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B703eeb:{NFSU2_TR(0x703eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B703eee:{NFSU2_TR(0x703eee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B703ef1:{NFSU2_TR(0x703ef1);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B703ef3:{NFSU2_TR(0x703ef3);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B703ef5:{NFSU2_TR(0x703ef5);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703ef9:{NFSU2_TR(0x703ef9);
w1(R+512,carry<u32>(r4(R+8),u32(0x10ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B703efc:{NFSU2_TR(0x703efc);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703efd:{NFSU2_TR(0x703efd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703e76u);}goto L703e76;}}
}
B703f03:L703f03:{c.instructions+=5;NFSU2_TR(0x703f03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B703f04:{NFSU2_TR(0x703f04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703f05:{NFSU2_TR(0x703f05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B703f06:{NFSU2_TR(0x703f06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703f07:{NFSU2_TR(0x703f07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703f08:L703f08:{c.instructions+=7;NFSU2_TR(0x703f08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703f09:{NFSU2_TR(0x703f09);
__builtin_memmove((R+20),(R+16),4);
}
B703f0b:{NFSU2_TR(0x703f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703f0e:{NFSU2_TR(0x703f0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703f11:{NFSU2_TR(0x703f11);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703f13:{NFSU2_TR(0x703f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B703f14:{NFSU2_TR(0x703f14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703f15:L703f15:{c.instructions+=20;NFSU2_TR(0x703f15);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w2(R+24,u16(r1(U+0)));
}
B703f19:{NFSU2_TR(0x703f19);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B703f1c:{NFSU2_TR(0x703f1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f21:{NFSU2_TR(0x703f21);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f25:{NFSU2_TR(0x703f25);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f2a:{NFSU2_TR(0x703f2a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f2e:{NFSU2_TR(0x703f2e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f33:{NFSU2_TR(0x703f33);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f37:{NFSU2_TR(0x703f37);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f3c:{NFSU2_TR(0x703f3c);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f40:{NFSU2_TR(0x703f40);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f45:{NFSU2_TR(0x703f45);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f49:{NFSU2_TR(0x703f49);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f4e:{NFSU2_TR(0x703f4e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f52:{NFSU2_TR(0x703f52);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f57:{NFSU2_TR(0x703f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B703f5a:{NFSU2_TR(0x703f5a);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f5e:{NFSU2_TR(0x703f5e);
w1(R+512,carry<u32>(r4(R+4),u32(0x10ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B703f61:{NFSU2_TR(0x703f61);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703f62:{NFSU2_TR(0x703f62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703f15u);}goto L703f15;}}
}
B703f64:L703f64:{c.instructions+=3;NFSU2_TR(0x703f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703f65:{NFSU2_TR(0x703f65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703f66:{NFSU2_TR(0x703f66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703f67:L703f67:{c.instructions+=7;NFSU2_TR(0x703f67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703f68:{NFSU2_TR(0x703f68);
__builtin_memmove((R+20),(R+16),4);
}
B703f6a:{NFSU2_TR(0x703f6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703f6d:{NFSU2_TR(0x703f6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703f70:{NFSU2_TR(0x703f70);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703f72:{NFSU2_TR(0x703f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B703f73:{NFSU2_TR(0x703f73);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703f74:L703f74:{c.instructions+=28;NFSU2_TR(0x703f74);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w2(R+24,u16(r1(U+0)));
}
B703f78:{NFSU2_TR(0x703f78);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+0))));
}
B703f7b:{NFSU2_TR(0x703f7b);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B703f7e:{NFSU2_TR(0x703f7e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f83:{NFSU2_TR(0x703f83);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703f87:{NFSU2_TR(0x703f87);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B703f8a:{NFSU2_TR(0x703f8a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f8e:{NFSU2_TR(0x703f8e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703f93:{NFSU2_TR(0x703f93);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703f97:{NFSU2_TR(0x703f97);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703f9b:{NFSU2_TR(0x703f9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703fa0:{NFSU2_TR(0x703fa0);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703fa4:{NFSU2_TR(0x703fa4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff6ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703fa8:{NFSU2_TR(0x703fa8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703fad:{NFSU2_TR(0x703fad);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703fb1:{NFSU2_TR(0x703fb1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703fb5:{NFSU2_TR(0x703fb5);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703fba:{NFSU2_TR(0x703fba);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703fbe:{NFSU2_TR(0x703fbe);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffaull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703fc2:{NFSU2_TR(0x703fc2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703fc7:{NFSU2_TR(0x703fc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703fcb:{NFSU2_TR(0x703fcb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703fcf:{NFSU2_TR(0x703fcf);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w2(R+24,u16(r1(U+4)));
}
B703fd4:{NFSU2_TR(0x703fd4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(R+24,u16(u32(r2(R+24))-u32(r2(U+4))));
}
B703fd8:{NFSU2_TR(0x703fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B703fdb:{NFSU2_TR(0x703fdb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B703fdc:{NFSU2_TR(0x703fdc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+24),2);
s2(u32(r4(U+0)),r2(U+4));
}
B703fe0:{NFSU2_TR(0x703fe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x703f74u);}goto L703f74;}}
}
B703fe2:L703fe2:{c.instructions+=3;NFSU2_TR(0x703fe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B703fe3:{NFSU2_TR(0x703fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B703fe4:{NFSU2_TR(0x703fe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B703fe5:L703fe5:{c.instructions+=12;NFSU2_TR(0x703fe5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703fe6:{NFSU2_TR(0x703fe6);
__builtin_memmove((R+20),(R+16),4);
}
B703fe8:{NFSU2_TR(0x703fe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B703feb:{NFSU2_TR(0x703feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B703fee:{NFSU2_TR(0x703fee);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703ff0:{NFSU2_TR(0x703ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B703ff1:{NFSU2_TR(0x703ff1);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B703ff3:{NFSU2_TR(0x703ff3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B703ff4:{NFSU2_TR(0x703ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B703ff6:{NFSU2_TR(0x703ff6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B703ff9:{NFSU2_TR(0x703ff9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B703ffc:{NFSU2_TR(0x703ffc);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
TAIL_STATIC(0x704000u,704);
}
XIT:NFSU2_TR_EXIT(0x703,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
