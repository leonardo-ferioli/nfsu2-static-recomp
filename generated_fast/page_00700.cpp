#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6fe(u8* __restrict R,Cpu& c);
u32 body_6ff(u8* __restrict R,Cpu& c);
u32 body_701(u8* __restrict R,Cpu& c);
u32 body_702(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x700,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x700,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_700(u8* __restrict R,Cpu& c);
u32 page_700(Cpu& c){return body_700(c.regs.data(),c);}
__attribute__((noinline)) u32 body_700(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x700002:goto L700002;
case 0x700006:c.instructions+=26;goto B700006;
case 0x700009:c.instructions+=25;goto B700009;
case 0x70000c:c.instructions+=24;goto B70000c;
case 0x70000f:c.instructions+=23;goto B70000f;
case 0x700012:c.instructions+=22;goto B700012;
case 0x700015:c.instructions+=21;goto B700015;
case 0x700018:c.instructions+=20;goto B700018;
case 0x70001c:c.instructions+=19;goto B70001c;
case 0x70001f:c.instructions+=18;goto B70001f;
case 0x700022:c.instructions+=17;goto B700022;
case 0x700026:c.instructions+=16;goto B700026;
case 0x700029:c.instructions+=15;goto B700029;
case 0x70002c:c.instructions+=14;goto B70002c;
case 0x70002f:c.instructions+=13;goto B70002f;
case 0x700032:c.instructions+=12;goto B700032;
case 0x700035:c.instructions+=11;goto B700035;
case 0x700038:c.instructions+=10;goto B700038;
case 0x70003c:c.instructions+=9;goto B70003c;
case 0x70003f:c.instructions+=8;goto B70003f;
case 0x700042:c.instructions+=7;goto B700042;
case 0x700044:c.instructions+=6;goto B700044;
case 0x700047:c.instructions+=5;goto B700047;
case 0x70004b:c.instructions+=4;goto B70004b;
case 0x70004e:c.instructions+=3;goto B70004e;
case 0x700051:c.instructions+=2;goto B700051;
case 0x700055:c.instructions+=1;goto B700055;
case 0x700057:goto L700057;
case 0x700058:c.instructions+=1;goto B700058;
case 0x700059:goto L700059;
case 0x70005f:c.instructions+=1;goto B70005f;
case 0x700061:goto L700061;
case 0x700062:c.instructions+=2;goto B700062;
case 0x700064:c.instructions+=1;goto B700064;
case 0x700065:goto L700065;
case 0x70006b:c.instructions+=20;goto B70006b;
case 0x70006e:c.instructions+=19;goto B70006e;
case 0x700074:c.instructions+=18;goto B700074;
case 0x700077:c.instructions+=17;goto B700077;
case 0x70007a:c.instructions+=16;goto B70007a;
case 0x70007d:c.instructions+=15;goto B70007d;
case 0x700083:c.instructions+=14;goto B700083;
case 0x700086:c.instructions+=13;goto B700086;
case 0x70008c:c.instructions+=12;goto B70008c;
case 0x70008f:c.instructions+=11;goto B70008f;
case 0x700092:c.instructions+=10;goto B700092;
case 0x700095:c.instructions+=9;goto B700095;
case 0x70009b:c.instructions+=8;goto B70009b;
case 0x70009e:c.instructions+=7;goto B70009e;
case 0x7000a4:c.instructions+=6;goto B7000a4;
case 0x7000a7:c.instructions+=5;goto B7000a7;
case 0x7000aa:c.instructions+=4;goto B7000aa;
case 0x7000af:c.instructions+=3;goto B7000af;
case 0x7000b2:c.instructions+=2;goto B7000b2;
case 0x7000b5:c.instructions+=1;goto B7000b5;
case 0x7000b7:goto L7000b7;
case 0x7000b8:c.instructions+=2;goto B7000b8;
case 0x7000be:c.instructions+=1;goto B7000be;
case 0x7000bf:goto L7000bf;
case 0x7000c0:goto L7000c0;
case 0x7000c1:c.instructions+=5;goto B7000c1;
case 0x7000c3:c.instructions+=4;goto B7000c3;
case 0x7000c4:c.instructions+=3;goto B7000c4;
case 0x7000c6:c.instructions+=2;goto B7000c6;
case 0x7000c7:c.instructions+=1;goto B7000c7;
case 0x7000cc:goto L7000cc;
case 0x7000ce:c.instructions+=4;goto B7000ce;
case 0x7000d1:c.instructions+=3;goto B7000d1;
case 0x7000d2:c.instructions+=2;goto B7000d2;
case 0x7000d7:c.instructions+=1;goto B7000d7;
case 0x7000d9:goto L7000d9;
case 0x7000de:c.instructions+=8;goto B7000de;
case 0x7000e3:c.instructions+=7;goto B7000e3;
case 0x7000e8:c.instructions+=6;goto B7000e8;
case 0x7000ed:c.instructions+=5;goto B7000ed;
case 0x7000f2:c.instructions+=4;goto B7000f2;
case 0x7000f7:c.instructions+=3;goto B7000f7;
case 0x700101:c.instructions+=2;goto B700101;
case 0x700106:c.instructions+=1;goto B700106;
case 0x700108:goto L700108;
case 0x70010d:c.instructions+=7;goto B70010d;
case 0x700112:c.instructions+=6;goto B700112;
case 0x700117:c.instructions+=5;goto B700117;
case 0x70011c:c.instructions+=4;goto B70011c;
case 0x700121:c.instructions+=3;goto B700121;
case 0x700126:c.instructions+=2;goto B700126;
case 0x700130:c.instructions+=1;goto B700130;
case 0x700135:goto L700135;
case 0x70013a:c.instructions+=6;goto B70013a;
case 0x70013f:c.instructions+=5;goto B70013f;
case 0x700144:c.instructions+=4;goto B700144;
case 0x700149:c.instructions+=3;goto B700149;
case 0x70014e:c.instructions+=2;goto B70014e;
case 0x70014f:c.instructions+=1;goto B70014f;
case 0x700150:goto L700150;
case 0x700151:c.instructions+=7;goto B700151;
case 0x700153:c.instructions+=6;goto B700153;
case 0x700156:c.instructions+=5;goto B700156;
case 0x700159:c.instructions+=4;goto B700159;
case 0x70015b:c.instructions+=3;goto B70015b;
case 0x70015c:c.instructions+=2;goto B70015c;
case 0x70015e:c.instructions+=1;goto B70015e;
case 0x700160:goto L700160;
case 0x700162:c.instructions+=3;goto B700162;
case 0x700163:c.instructions+=2;goto B700163;
case 0x700164:c.instructions+=1;goto B700164;
case 0x700165:goto L700165;
case 0x700169:c.instructions+=1;goto B700169;
case 0x70016b:goto L70016b;
case 0x70016d:c.instructions+=3;goto B70016d;
case 0x70016e:c.instructions+=2;goto B70016e;
case 0x70016f:c.instructions+=1;goto B70016f;
case 0x700170:goto L700170;
case 0x700173:c.instructions+=3;goto B700173;
case 0x700174:c.instructions+=2;goto B700174;
case 0x700175:c.instructions+=1;goto B700175;
case 0x700177:goto L700177;
case 0x70017a:c.instructions+=1;goto B70017a;
case 0x70017c:goto L70017c;
case 0x70017e:c.instructions+=1;goto B70017e;
case 0x700180:goto L700180;
case 0x700183:c.instructions+=3;goto B700183;
case 0x700185:c.instructions+=2;goto B700185;
case 0x700187:c.instructions+=1;goto B700187;
case 0x700189:goto L700189;
case 0x70018c:c.instructions+=1;goto B70018c;
case 0x70018e:goto L70018e;
case 0x700190:c.instructions+=1;goto B700190;
case 0x700192:goto L700192;
case 0x700195:c.instructions+=1;goto B700195;
case 0x700197:goto L700197;
case 0x70019b:c.instructions+=1;goto B70019b;
case 0x70019d:goto L70019d;
case 0x7001a0:c.instructions+=3;goto B7001a0;
case 0x7001a3:c.instructions+=2;goto B7001a3;
case 0x7001a5:c.instructions+=1;goto B7001a5;
case 0x7001a7:goto L7001a7;
case 0x7001aa:c.instructions+=1;goto B7001aa;
case 0x7001ac:goto L7001ac;
case 0x7001af:goto L7001af;
case 0x7001b2:c.instructions+=2;goto B7001b2;
case 0x7001b3:c.instructions+=1;goto B7001b3;
case 0x7001b5:goto L7001b5;
case 0x7001b8:goto L7001b8;
case 0x7001bb:c.instructions+=2;goto B7001bb;
case 0x7001bd:c.instructions+=1;goto B7001bd;
case 0x7001bf:goto L7001bf;
case 0x7001c5:c.instructions+=1;goto B7001c5;
case 0x7001c7:goto L7001c7;
case 0x7001c9:goto L7001c9;
case 0x7001ca:c.instructions+=1;goto B7001ca;
case 0x7001cf:goto L7001cf;
case 0x7001d2:c.instructions+=1;goto B7001d2;
case 0x7001d8:goto L7001d8;
case 0x7001dc:c.instructions+=1;goto B7001dc;
case 0x7001e2:goto L7001e2;
case 0x7001e5:c.instructions+=9;goto B7001e5;
case 0x7001e8:c.instructions+=8;goto B7001e8;
case 0x7001e9:c.instructions+=7;goto B7001e9;
case 0x7001ec:c.instructions+=6;goto B7001ec;
case 0x7001ee:c.instructions+=5;goto B7001ee;
case 0x7001f0:c.instructions+=4;goto B7001f0;
case 0x7001f3:c.instructions+=3;goto B7001f3;
case 0x7001f6:c.instructions+=2;goto B7001f6;
case 0x7001f9:c.instructions+=1;goto B7001f9;
case 0x7001fb:goto L7001fb;
case 0x7001fe:c.instructions+=1;goto B7001fe;
case 0x700200:goto L700200;
case 0x700203:c.instructions+=1;goto B700203;
case 0x700205:goto L700205;
case 0x700208:c.instructions+=1;goto B700208;
case 0x70020a:goto L70020a;
case 0x70020c:goto L70020c;
case 0x700213:goto L700213;
case 0x700217:c.instructions+=2;goto B700217;
case 0x70021b:c.instructions+=1;goto B70021b;
case 0x700221:goto L700221;
case 0x700224:c.instructions+=3;goto B700224;
case 0x700227:c.instructions+=2;goto B700227;
case 0x70022a:c.instructions+=1;goto B70022a;
case 0x70022c:goto L70022c;
case 0x70022f:goto L70022f;
case 0x700232:c.instructions+=8;goto B700232;
case 0x700233:c.instructions+=7;goto B700233;
case 0x700236:c.instructions+=6;goto B700236;
case 0x700237:c.instructions+=5;goto B700237;
case 0x700239:c.instructions+=4;goto B700239;
case 0x70023a:c.instructions+=3;goto B70023a;
case 0x70023b:c.instructions+=2;goto B70023b;
case 0x70023c:c.instructions+=1;goto B70023c;
case 0x700241:goto L700241;
case 0x700244:c.instructions+=3;goto B700244;
case 0x700247:c.instructions+=2;goto B700247;
case 0x70024b:c.instructions+=1;goto B70024b;
case 0x70024d:goto L70024d;
case 0x700250:c.instructions+=1;goto B700250;
case 0x700253:goto L700253;
case 0x700256:c.instructions+=4;goto B700256;
case 0x700259:c.instructions+=3;goto B700259;
case 0x70025c:c.instructions+=2;goto B70025c;
case 0x70025f:c.instructions+=1;goto B70025f;
case 0x700261:goto L700261;
case 0x700266:goto L700266;
case 0x700268:c.instructions+=1;goto B700268;
case 0x70026d:goto L70026d;
case 0x700270:c.instructions+=2;goto B700270;
case 0x700273:c.instructions+=1;goto B700273;
case 0x700275:goto L700275;
case 0x700278:c.instructions+=3;goto B700278;
case 0x70027b:c.instructions+=2;goto B70027b;
case 0x70027e:c.instructions+=1;goto B70027e;
case 0x700280:goto L700280;
case 0x700283:goto L700283;
case 0x700286:c.instructions+=9;goto B700286;
case 0x700289:c.instructions+=8;goto B700289;
case 0x70028a:c.instructions+=7;goto B70028a;
case 0x70028d:c.instructions+=6;goto B70028d;
case 0x70028e:c.instructions+=5;goto B70028e;
case 0x700290:c.instructions+=4;goto B700290;
case 0x700291:c.instructions+=3;goto B700291;
case 0x700292:c.instructions+=2;goto B700292;
case 0x700293:c.instructions+=1;goto B700293;
case 0x700298:goto L700298;
case 0x70029b:c.instructions+=4;goto B70029b;
case 0x70029e:c.instructions+=3;goto B70029e;
case 0x7002a2:c.instructions+=2;goto B7002a2;
case 0x7002a5:c.instructions+=1;goto B7002a5;
case 0x7002a7:goto L7002a7;
case 0x7002aa:c.instructions+=1;goto B7002aa;
case 0x7002ad:goto L7002ad;
case 0x7002b0:c.instructions+=4;goto B7002b0;
case 0x7002b3:c.instructions+=3;goto B7002b3;
case 0x7002b6:c.instructions+=2;goto B7002b6;
case 0x7002b9:c.instructions+=1;goto B7002b9;
case 0x7002bb:goto L7002bb;
case 0x7002bd:c.instructions+=1;goto B7002bd;
case 0x7002c2:goto L7002c2;
case 0x7002c5:c.instructions+=2;goto B7002c5;
case 0x7002c6:c.instructions+=1;goto B7002c6;
case 0x7002cb:goto L7002cb;
case 0x7002cf:c.instructions+=3;goto B7002cf;
case 0x7002d3:c.instructions+=2;goto B7002d3;
case 0x7002d4:c.instructions+=1;goto B7002d4;
case 0x7002d6:goto L7002d6;
case 0x7002d9:c.instructions+=3;goto B7002d9;
case 0x7002dc:c.instructions+=2;goto B7002dc;
case 0x7002df:c.instructions+=1;goto B7002df;
case 0x7002e1:goto L7002e1;
case 0x7002e4:goto L7002e4;
case 0x7002e7:c.instructions+=8;goto B7002e7;
case 0x7002e8:c.instructions+=7;goto B7002e8;
case 0x7002eb:c.instructions+=6;goto B7002eb;
case 0x7002ec:c.instructions+=5;goto B7002ec;
case 0x7002ee:c.instructions+=4;goto B7002ee;
case 0x7002ef:c.instructions+=3;goto B7002ef;
case 0x7002f0:c.instructions+=2;goto B7002f0;
case 0x7002f1:c.instructions+=1;goto B7002f1;
case 0x7002f6:goto L7002f6;
case 0x7002f9:c.instructions+=3;goto B7002f9;
case 0x7002fc:c.instructions+=2;goto B7002fc;
case 0x700300:c.instructions+=1;goto B700300;
case 0x700302:goto L700302;
case 0x700305:c.instructions+=1;goto B700305;
case 0x700308:goto L700308;
case 0x70030d:c.instructions+=8;goto B70030d;
case 0x700313:c.instructions+=7;goto B700313;
case 0x700318:c.instructions+=6;goto B700318;
case 0x70031e:c.instructions+=5;goto B70031e;
case 0x700321:c.instructions+=4;goto B700321;
case 0x700324:c.instructions+=3;goto B700324;
case 0x700327:c.instructions+=2;goto B700327;
case 0x70032a:c.instructions+=1;goto B70032a;
case 0x70032c:goto L70032c;
case 0x70032e:c.instructions+=1;goto B70032e;
case 0x700333:goto L700333;
case 0x700336:c.instructions+=2;goto B700336;
case 0x700337:c.instructions+=1;goto B700337;
case 0x70033c:goto L70033c;
case 0x700340:c.instructions+=3;goto B700340;
case 0x700344:c.instructions+=2;goto B700344;
case 0x700345:c.instructions+=1;goto B700345;
case 0x700347:goto L700347;
case 0x70034a:c.instructions+=3;goto B70034a;
case 0x70034d:c.instructions+=2;goto B70034d;
case 0x700350:c.instructions+=1;goto B700350;
case 0x700352:goto L700352;
case 0x700355:goto L700355;
case 0x700358:c.instructions+=8;goto B700358;
case 0x700359:c.instructions+=7;goto B700359;
case 0x70035c:c.instructions+=6;goto B70035c;
case 0x70035d:c.instructions+=5;goto B70035d;
case 0x70035f:c.instructions+=4;goto B70035f;
case 0x700360:c.instructions+=3;goto B700360;
case 0x700361:c.instructions+=2;goto B700361;
case 0x700362:c.instructions+=1;goto B700362;
case 0x700367:goto L700367;
case 0x70036a:c.instructions+=3;goto B70036a;
case 0x70036d:c.instructions+=2;goto B70036d;
case 0x700371:c.instructions+=1;goto B700371;
case 0x700373:goto L700373;
case 0x700376:c.instructions+=1;goto B700376;
case 0x700379:goto L700379;
case 0x70037e:c.instructions+=8;goto B70037e;
case 0x700384:c.instructions+=7;goto B700384;
case 0x700389:c.instructions+=6;goto B700389;
case 0x70038f:c.instructions+=5;goto B70038f;
case 0x700392:c.instructions+=4;goto B700392;
case 0x700395:c.instructions+=3;goto B700395;
case 0x700398:c.instructions+=2;goto B700398;
case 0x70039b:c.instructions+=1;goto B70039b;
case 0x70039d:goto L70039d;
case 0x70039f:c.instructions+=1;goto B70039f;
case 0x7003a4:goto L7003a4;
case 0x7003a7:c.instructions+=2;goto B7003a7;
case 0x7003a8:c.instructions+=1;goto B7003a8;
case 0x7003ad:goto L7003ad;
case 0x7003b3:c.instructions+=9;goto B7003b3;
case 0x7003b4:c.instructions+=8;goto B7003b4;
case 0x7003b9:c.instructions+=7;goto B7003b9;
case 0x7003ba:c.instructions+=6;goto B7003ba;
case 0x7003bd:c.instructions+=5;goto B7003bd;
case 0x7003c0:c.instructions+=4;goto B7003c0;
case 0x7003c3:c.instructions+=3;goto B7003c3;
case 0x7003ca:c.instructions+=2;goto B7003ca;
case 0x7003cd:c.instructions+=1;goto B7003cd;
case 0x7003d2:goto L7003d2;
case 0x7003d6:c.instructions+=3;goto B7003d6;
case 0x7003d9:c.instructions+=2;goto B7003d9;
case 0x7003dd:c.instructions+=1;goto B7003dd;
case 0x7003e3:goto L7003e3;
case 0x7003e6:c.instructions+=5;goto B7003e6;
case 0x7003e9:c.instructions+=4;goto B7003e9;
case 0x7003ec:c.instructions+=3;goto B7003ec;
case 0x7003ef:c.instructions+=2;goto B7003ef;
case 0x7003f2:c.instructions+=1;goto B7003f2;
case 0x7003f4:goto L7003f4;
case 0x7003f7:goto L7003f7;
case 0x7003fa:c.instructions+=9;goto B7003fa;
case 0x7003fd:c.instructions+=8;goto B7003fd;
case 0x7003fe:c.instructions+=7;goto B7003fe;
case 0x7003ff:c.instructions+=6;goto B7003ff;
case 0x700402:c.instructions+=5;goto B700402;
case 0x700404:c.instructions+=4;goto B700404;
case 0x700405:c.instructions+=3;goto B700405;
case 0x700406:c.instructions+=2;goto B700406;
case 0x700407:c.instructions+=1;goto B700407;
case 0x70040c:goto L70040c;
case 0x70040f:c.instructions+=3;goto B70040f;
case 0x700410:c.instructions+=2;goto B700410;
case 0x700413:c.instructions+=1;goto B700413;
case 0x700418:goto L700418;
case 0x70041b:c.instructions+=11;goto B70041b;
case 0x70041e:c.instructions+=10;goto B70041e;
case 0x700421:c.instructions+=9;goto B700421;
case 0x700423:c.instructions+=8;goto B700423;
case 0x700428:c.instructions+=7;goto B700428;
case 0x70042e:c.instructions+=6;goto B70042e;
case 0x700433:c.instructions+=5;goto B700433;
case 0x700439:c.instructions+=4;goto B700439;
case 0x70043a:c.instructions+=3;goto B70043a;
case 0x70043d:c.instructions+=2;goto B70043d;
case 0x700440:c.instructions+=1;goto B700440;
case 0x700445:goto L700445;
case 0x700448:c.instructions+=10;goto B700448;
case 0x70044b:c.instructions+=9;goto B70044b;
case 0x70044e:c.instructions+=8;goto B70044e;
case 0x700450:c.instructions+=7;goto B700450;
case 0x700455:c.instructions+=6;goto B700455;
case 0x70045b:c.instructions+=5;goto B70045b;
case 0x700460:c.instructions+=4;goto B700460;
case 0x700466:c.instructions+=3;goto B700466;
case 0x700469:c.instructions+=2;goto B700469;
case 0x70046d:c.instructions+=1;goto B70046d;
case 0x70046f:goto L70046f;
case 0x700472:c.instructions+=1;goto B700472;
case 0x700475:goto L700475;
case 0x700478:c.instructions+=7;goto B700478;
case 0x70047b:c.instructions+=6;goto B70047b;
case 0x70047e:c.instructions+=5;goto B70047e;
case 0x700481:c.instructions+=4;goto B700481;
case 0x700484:c.instructions+=3;goto B700484;
case 0x700487:c.instructions+=2;goto B700487;
case 0x70048a:c.instructions+=1;goto B70048a;
case 0x700490:goto L700490;
case 0x700492:goto L700492;
case 0x700493:goto L700493;
case 0x700495:goto L700495;
case 0x700496:c.instructions+=3;goto B700496;
case 0x700497:c.instructions+=2;goto B700497;
case 0x700498:c.instructions+=1;goto B700498;
case 0x7004b9:goto L7004b9;
case 0x7004ba:c.instructions+=7;goto B7004ba;
case 0x7004bc:c.instructions+=6;goto B7004bc;
case 0x7004bf:c.instructions+=5;goto B7004bf;
case 0x7004c5:c.instructions+=4;goto B7004c5;
case 0x7004c8:c.instructions+=3;goto B7004c8;
case 0x7004ca:c.instructions+=2;goto B7004ca;
case 0x7004cd:c.instructions+=1;goto B7004cd;
case 0x7004cf:goto L7004cf;
case 0x7004d5:c.instructions+=1;goto B7004d5;
case 0x7004d7:goto L7004d7;
case 0x7004dd:c.instructions+=3;goto B7004dd;
case 0x7004df:c.instructions+=2;goto B7004df;
case 0x7004e2:c.instructions+=1;goto B7004e2;
case 0x7004e4:goto L7004e4;
case 0x7004e7:c.instructions+=1;goto B7004e7;
case 0x7004ed:goto L7004ed;
case 0x7004ee:c.instructions+=1;goto B7004ee;
case 0x7004f3:goto L7004f3;
case 0x7004f5:c.instructions+=2;goto B7004f5;
case 0x7004f6:c.instructions+=1;goto B7004f6;
case 0x7004f7:goto L7004f7;
case 0x7004f8:c.instructions+=12;goto B7004f8;
case 0x7004fa:c.instructions+=11;goto B7004fa;
case 0x7004fb:c.instructions+=10;goto B7004fb;
case 0x7004fc:c.instructions+=9;goto B7004fc;
case 0x7004fd:c.instructions+=8;goto B7004fd;
case 0x7004fe:c.instructions+=7;goto B7004fe;
case 0x700500:c.instructions+=6;goto B700500;
case 0x700501:c.instructions+=5;goto B700501;
case 0x700506:c.instructions+=4;goto B700506;
case 0x70050b:c.instructions+=3;goto B70050b;
case 0x700510:c.instructions+=2;goto B700510;
case 0x700513:c.instructions+=1;goto B700513;
case 0x700515:goto L700515;
case 0x700518:goto L700518;
case 0x70051b:c.instructions+=17;goto B70051b;
case 0x70051d:c.instructions+=16;goto B70051d;
case 0x70051e:c.instructions+=15;goto B70051e;
case 0x700520:c.instructions+=14;goto B700520;
case 0x700523:c.instructions+=13;goto B700523;
case 0x700525:c.instructions+=12;goto B700525;
case 0x700528:c.instructions+=11;goto B700528;
case 0x70052b:c.instructions+=10;goto B70052b;
case 0x70052e:c.instructions+=9;goto B70052e;
case 0x700531:c.instructions+=8;goto B700531;
case 0x700533:c.instructions+=7;goto B700533;
case 0x700534:c.instructions+=6;goto B700534;
case 0x700539:c.instructions+=5;goto B700539;
case 0x70053c:c.instructions+=4;goto B70053c;
case 0x70053e:c.instructions+=3;goto B70053e;
case 0x700544:c.instructions+=2;goto B700544;
case 0x700547:c.instructions+=1;goto B700547;
case 0x70054c:goto L70054c;
case 0x70054f:c.instructions+=6;goto B70054f;
case 0x700552:c.instructions+=5;goto B700552;
case 0x700558:c.instructions+=4;goto B700558;
case 0x700559:c.instructions+=3;goto B700559;
case 0x70055a:c.instructions+=2;goto B70055a;
case 0x70055d:c.instructions+=1;goto B70055d;
case 0x700562:goto L700562;
case 0x700565:c.instructions+=14;goto B700565;
case 0x700568:c.instructions+=13;goto B700568;
case 0x70056e:c.instructions+=12;goto B70056e;
case 0x700570:c.instructions+=11;goto B700570;
case 0x700571:c.instructions+=10;goto B700571;
case 0x700573:c.instructions+=9;goto B700573;
case 0x700575:c.instructions+=8;goto B700575;
case 0x700578:c.instructions+=7;goto B700578;
case 0x70057b:c.instructions+=6;goto B70057b;
case 0x70057d:c.instructions+=5;goto B70057d;
case 0x700580:c.instructions+=4;goto B700580;
case 0x700583:c.instructions+=3;goto B700583;
case 0x700585:c.instructions+=2;goto B700585;
case 0x700587:c.instructions+=1;goto B700587;
case 0x70058c:goto L70058c;
case 0x70058f:c.instructions+=6;goto B70058f;
case 0x700595:c.instructions+=5;goto B700595;
case 0x700598:c.instructions+=4;goto B700598;
case 0x700599:c.instructions+=3;goto B700599;
case 0x70059a:c.instructions+=2;goto B70059a;
case 0x70059d:c.instructions+=1;goto B70059d;
case 0x7005a2:goto L7005a2;
case 0x7005a5:c.instructions+=9;goto B7005a5;
case 0x7005a6:c.instructions+=8;goto B7005a6;
case 0x7005a7:c.instructions+=7;goto B7005a7;
case 0x7005ab:c.instructions+=6;goto B7005ab;
case 0x7005ac:c.instructions+=5;goto B7005ac;
case 0x7005ad:c.instructions+=4;goto B7005ad;
case 0x7005b0:c.instructions+=3;goto B7005b0;
case 0x7005b7:c.instructions+=2;goto B7005b7;
case 0x7005b8:c.instructions+=1;goto B7005b8;
case 0x7005be:goto L7005be;
case 0x7005c5:c.instructions+=5;goto B7005c5;
case 0x7005c6:c.instructions+=4;goto B7005c6;
case 0x7005c7:c.instructions+=3;goto B7005c7;
case 0x7005c8:c.instructions+=2;goto B7005c8;
case 0x7005c9:c.instructions+=1;goto B7005c9;
case 0x7005ca:goto L7005ca;
case 0x7005cb:c.instructions+=6;goto B7005cb;
case 0x7005cd:c.instructions+=5;goto B7005cd;
case 0x7005d1:c.instructions+=4;goto B7005d1;
case 0x7005d2:c.instructions+=3;goto B7005d2;
case 0x7005d4:c.instructions+=2;goto B7005d4;
case 0x7005da:c.instructions+=1;goto B7005da;
case 0x7005dc:goto L7005dc;
case 0x7005dd:c.instructions+=1;goto B7005dd;
case 0x7005e2:goto L7005e2;
case 0x7005e3:goto L7005e3;
case 0x7005e5:c.instructions+=3;goto B7005e5;
case 0x7005e6:c.instructions+=2;goto B7005e6;
case 0x7005e7:c.instructions+=1;goto B7005e7;
case 0x7005fb:goto L7005fb;
case 0x7005fc:c.instructions+=11;goto B7005fc;
case 0x7005fe:c.instructions+=10;goto B7005fe;
case 0x700601:c.instructions+=9;goto B700601;
case 0x700603:c.instructions+=8;goto B700603;
case 0x700606:c.instructions+=7;goto B700606;
case 0x700607:c.instructions+=6;goto B700607;
case 0x700608:c.instructions+=5;goto B700608;
case 0x70060b:c.instructions+=4;goto B70060b;
case 0x70060e:c.instructions+=3;goto B70060e;
case 0x700610:c.instructions+=2;goto B700610;
case 0x700611:c.instructions+=1;goto B700611;
case 0x700614:goto L700614;
case 0x700615:c.instructions+=2;goto B700615;
case 0x700616:c.instructions+=1;goto B700616;
case 0x700619:goto L700619;
case 0x70061a:c.instructions+=4;goto B70061a;
case 0x70061c:c.instructions+=3;goto B70061c;
case 0x70061f:c.instructions+=2;goto B70061f;
case 0x700621:c.instructions+=1;goto B700621;
case 0x700623:goto L700623;
case 0x700625:c.instructions+=2;goto B700625;
case 0x700627:c.instructions+=1;goto B700627;
case 0x700629:goto L700629;
case 0x70062d:goto L70062d;
case 0x70062e:c.instructions+=1;goto B70062e;
case 0x70062f:goto L70062f;
case 0x700633:c.instructions+=1;goto B700633;
case 0x700635:goto L700635;
case 0x700637:c.instructions+=1;goto B700637;
case 0x700638:goto L700638;
case 0x70063b:c.instructions+=2;goto B70063b;
case 0x70063d:c.instructions+=1;goto B70063d;
case 0x700640:goto L700640;
case 0x700644:c.instructions+=1;goto B700644;
case 0x700646:goto L700646;
case 0x70064c:c.instructions+=1;goto B70064c;
case 0x70064d:goto L70064d;
case 0x700650:c.instructions+=2;goto B700650;
case 0x700652:c.instructions+=1;goto B700652;
case 0x700655:goto L700655;
case 0x700656:c.instructions+=5;goto B700656;
case 0x700658:c.instructions+=4;goto B700658;
case 0x700659:c.instructions+=3;goto B700659;
case 0x70065b:c.instructions+=2;goto B70065b;
case 0x70065f:c.instructions+=1;goto B70065f;
case 0x700661:goto L700661;
case 0x700664:c.instructions+=2;goto B700664;
case 0x700667:c.instructions+=1;goto B700667;
case 0x700669:goto L700669;
case 0x70066a:c.instructions+=3;goto B70066a;
case 0x70066d:c.instructions+=2;goto B70066d;
case 0x70066e:c.instructions+=1;goto B70066e;
case 0x700671:goto L700671;
case 0x700674:goto L700674;
case 0x700678:c.instructions+=1;goto B700678;
case 0x70067a:goto L70067a;
case 0x70067c:c.instructions+=3;goto B70067c;
case 0x70067d:c.instructions+=2;goto B70067d;
case 0x70067e:c.instructions+=1;goto B70067e;
case 0x700681:goto L700681;
case 0x700684:c.instructions+=4;goto B700684;
case 0x700686:c.instructions+=3;goto B700686;
case 0x700687:c.instructions+=2;goto B700687;
case 0x700688:c.instructions+=1;goto B700688;
case 0x70068b:goto L70068b;
case 0x70068c:c.instructions+=5;goto B70068c;
case 0x70068e:c.instructions+=4;goto B70068e;
case 0x700691:c.instructions+=3;goto B700691;
case 0x700693:c.instructions+=2;goto B700693;
case 0x700694:c.instructions+=1;goto B700694;
case 0x700697:goto L700697;
case 0x700698:c.instructions+=5;goto B700698;
case 0x70069a:c.instructions+=4;goto B70069a;
case 0x70069b:c.instructions+=3;goto B70069b;
case 0x70069e:c.instructions+=2;goto B70069e;
case 0x7006a0:c.instructions+=1;goto B7006a0;
case 0x7006a2:goto L7006a2;
case 0x7006a6:c.instructions+=2;goto B7006a6;
case 0x7006a7:c.instructions+=1;goto B7006a7;
case 0x7006a8:goto L7006a8;
case 0x7006ab:c.instructions+=4;goto B7006ab;
case 0x7006ac:c.instructions+=3;goto B7006ac;
case 0x7006af:c.instructions+=2;goto B7006af;
case 0x7006b0:c.instructions+=1;goto B7006b0;
case 0x7006b3:goto L7006b3;
case 0x7006b6:c.instructions+=3;goto B7006b6;
case 0x7006b9:c.instructions+=2;goto B7006b9;
case 0x7006ba:c.instructions+=1;goto B7006ba;
case 0x7006bb:goto L7006bb;
case 0x7006bc:c.instructions+=5;goto B7006bc;
case 0x7006be:c.instructions+=4;goto B7006be;
case 0x7006c1:c.instructions+=3;goto B7006c1;
case 0x7006c4:c.instructions+=2;goto B7006c4;
case 0x7006c5:c.instructions+=1;goto B7006c5;
case 0x7006c8:goto L7006c8;
case 0x7006cb:c.instructions+=2;goto B7006cb;
case 0x7006cc:c.instructions+=1;goto B7006cc;
case 0x7006cf:goto L7006cf;
case 0x7006d1:c.instructions+=5;goto B7006d1;
case 0x7006d3:c.instructions+=4;goto B7006d3;
case 0x7006d6:c.instructions+=3;goto B7006d6;
case 0x7006d9:c.instructions+=2;goto B7006d9;
case 0x7006db:c.instructions+=1;goto B7006db;
case 0x7006f0:goto L7006f0;
case 0x7006f1:c.instructions+=12;goto B7006f1;
case 0x7006f3:c.instructions+=11;goto B7006f3;
case 0x7006f5:c.instructions+=10;goto B7006f5;
case 0x7006f8:c.instructions+=9;goto B7006f8;
case 0x7006fb:c.instructions+=8;goto B7006fb;
case 0x7006fe:c.instructions+=7;goto B7006fe;
case 0x700700:c.instructions+=6;goto B700700;
case 0x700703:c.instructions+=5;goto B700703;
case 0x700706:c.instructions+=4;goto B700706;
case 0x700709:c.instructions+=3;goto B700709;
case 0x70070c:c.instructions+=2;goto B70070c;
case 0x70070d:c.instructions+=1;goto B70070d;
case 0x700710:goto L700710;
case 0x700711:c.instructions+=22;goto B700711;
case 0x700713:c.instructions+=21;goto B700713;
case 0x700714:c.instructions+=20;goto B700714;
case 0x700717:c.instructions+=19;goto B700717;
case 0x700718:c.instructions+=18;goto B700718;
case 0x70071a:c.instructions+=17;goto B70071a;
case 0x700720:c.instructions+=16;goto B700720;
case 0x700723:c.instructions+=15;goto B700723;
case 0x70072a:c.instructions+=14;goto B70072a;
case 0x70072c:c.instructions+=13;goto B70072c;
case 0x70072e:c.instructions+=12;goto B70072e;
case 0x700731:c.instructions+=11;goto B700731;
case 0x700734:c.instructions+=10;goto B700734;
case 0x700735:c.instructions+=9;goto B700735;
case 0x700736:c.instructions+=8;goto B700736;
case 0x700737:c.instructions+=7;goto B700737;
case 0x700738:c.instructions+=6;goto B700738;
case 0x700739:c.instructions+=5;goto B700739;
case 0x70073c:c.instructions+=4;goto B70073c;
case 0x70073f:c.instructions+=3;goto B70073f;
case 0x700740:c.instructions+=2;goto B700740;
case 0x700741:c.instructions+=1;goto B700741;
case 0x70074f:goto L70074f;
case 0x700750:c.instructions+=5;goto B700750;
case 0x700752:c.instructions+=4;goto B700752;
case 0x700753:c.instructions+=3;goto B700753;
case 0x700755:c.instructions+=2;goto B700755;
case 0x70075b:c.instructions+=1;goto B70075b;
case 0x700760:goto L700760;
case 0x700764:c.instructions+=1;goto B700764;
case 0x700766:goto L700766;
case 0x700767:c.instructions+=1;goto B700767;
case 0x70076d:goto L70076d;
case 0x70076e:goto L70076e;
case 0x700770:c.instructions+=3;goto B700770;
case 0x700771:c.instructions+=2;goto B700771;
case 0x700772:c.instructions+=1;goto B700772;
case 0x700775:goto L700775;
case 0x700776:c.instructions+=4;goto B700776;
case 0x700778:c.instructions+=3;goto B700778;
case 0x700779:c.instructions+=2;goto B700779;
case 0x70077d:c.instructions+=1;goto B70077d;
case 0x700782:goto L700782;
case 0x700785:c.instructions+=3;goto B700785;
case 0x700786:c.instructions+=2;goto B700786;
case 0x700787:c.instructions+=1;goto B700787;
case 0x70078a:goto L70078a;
case 0x70078b:c.instructions+=4;goto B70078b;
case 0x70078d:c.instructions+=3;goto B70078d;
case 0x70078e:c.instructions+=2;goto B70078e;
case 0x700792:c.instructions+=1;goto B700792;
case 0x700797:goto L700797;
case 0x70079a:c.instructions+=3;goto B70079a;
case 0x70079b:c.instructions+=2;goto B70079b;
case 0x70079c:c.instructions+=1;goto B70079c;
case 0x70079f:goto L70079f;
case 0x7007a0:c.instructions+=6;goto B7007a0;
case 0x7007a2:c.instructions+=5;goto B7007a2;
case 0x7007a6:c.instructions+=4;goto B7007a6;
case 0x7007a7:c.instructions+=3;goto B7007a7;
case 0x7007a9:c.instructions+=2;goto B7007a9;
case 0x7007af:c.instructions+=1;goto B7007af;
case 0x7007b1:goto L7007b1;
case 0x7007b2:c.instructions+=1;goto B7007b2;
case 0x7007b8:goto L7007b8;
case 0x7007b9:goto L7007b9;
case 0x7007bb:c.instructions+=3;goto B7007bb;
case 0x7007bc:c.instructions+=2;goto B7007bc;
case 0x7007bd:c.instructions+=1;goto B7007bd;
case 0x7007c0:goto L7007c0;
case 0x7007c2:c.instructions+=1;goto B7007c2;
case 0x7007c4:goto L7007c4;
case 0x7007c6:c.instructions+=2;goto B7007c6;
case 0x7007c9:c.instructions+=1;goto B7007c9;
case 0x7007ce:goto L7007ce;
case 0x7007cf:c.instructions+=2;goto B7007cf;
case 0x7007d0:c.instructions+=1;goto B7007d0;
case 0x7007d1:goto L7007d1;
case 0x7007d6:c.instructions+=1;goto B7007d6;
case 0x7007d7:goto L7007d7;
case 0x7007d8:c.instructions+=8;goto B7007d8;
case 0x7007da:c.instructions+=7;goto B7007da;
case 0x7007dd:c.instructions+=6;goto B7007dd;
case 0x7007e1:c.instructions+=5;goto B7007e1;
case 0x7007e3:c.instructions+=4;goto B7007e3;
case 0x7007e6:c.instructions+=3;goto B7007e6;
case 0x7007e7:c.instructions+=2;goto B7007e7;
case 0x7007e8:c.instructions+=1;goto B7007e8;
case 0x7007eb:goto L7007eb;
case 0x7007ee:c.instructions+=1;goto B7007ee;
case 0x7007ef:goto L7007ef;
case 0x7007f2:c.instructions+=1;goto B7007f2;
case 0x7007f3:goto L7007f3;
case 0x7007f4:c.instructions+=5;goto B7007f4;
case 0x7007f6:c.instructions+=4;goto B7007f6;
case 0x7007f7:c.instructions+=3;goto B7007f7;
case 0x7007f9:c.instructions+=2;goto B7007f9;
case 0x7007fc:c.instructions+=1;goto B7007fc;
case 0x700801:goto L700801;
case 0x700804:c.instructions+=5;goto B700804;
case 0x700806:c.instructions+=4;goto B700806;
case 0x700809:c.instructions+=3;goto B700809;
case 0x70080a:c.instructions+=2;goto B70080a;
case 0x70080b:c.instructions+=1;goto B70080b;
case 0x70080e:goto L70080e;
case 0x70080f:c.instructions+=3;goto B70080f;
case 0x700811:c.instructions+=2;goto B700811;
case 0x700815:c.instructions+=1;goto B700815;
case 0x700817:goto L700817;
case 0x70081a:c.instructions+=2;goto B70081a;
case 0x70081b:c.instructions+=1;goto B70081b;
case 0x700820:goto L700820;
case 0x700821:c.instructions+=1;goto B700821;
case 0x700824:goto L700824;
case 0x700825:c.instructions+=12;goto B700825;
case 0x700827:c.instructions+=11;goto B700827;
case 0x70082d:c.instructions+=10;goto B70082d;
case 0x70082e:c.instructions+=9;goto B70082e;
case 0x700830:c.instructions+=8;goto B700830;
case 0x700832:c.instructions+=7;goto B700832;
case 0x700833:c.instructions+=6;goto B700833;
case 0x700836:c.instructions+=5;goto B700836;
case 0x700839:c.instructions+=4;goto B700839;
case 0x70083d:c.instructions+=3;goto B70083d;
case 0x700843:c.instructions+=2;goto B700843;
case 0x700845:c.instructions+=1;goto B700845;
case 0x70084a:goto L70084a;
case 0x70084d:c.instructions+=10;goto B70084d;
case 0x700853:c.instructions+=9;goto B700853;
case 0x700859:c.instructions+=8;goto B700859;
case 0x70085c:c.instructions+=7;goto B70085c;
case 0x700862:c.instructions+=6;goto B700862;
case 0x700868:c.instructions+=5;goto B700868;
case 0x700869:c.instructions+=4;goto B700869;
case 0x700873:c.instructions+=3;goto B700873;
case 0x70087d:c.instructions+=2;goto B70087d;
case 0x700884:c.instructions+=1;goto B700884;
case 0x700889:goto L700889;
case 0x70088a:c.instructions+=6;goto B70088a;
case 0x70088d:c.instructions+=5;goto B70088d;
case 0x70088e:c.instructions+=4;goto B70088e;
case 0x700890:c.instructions+=3;goto B700890;
case 0x700891:c.instructions+=2;goto B700891;
case 0x700892:c.instructions+=1;goto B700892;
case 0x700895:goto L700895;
case 0x700896:c.instructions+=4;goto B700896;
case 0x700898:c.instructions+=3;goto B700898;
case 0x70089b:c.instructions+=2;goto B70089b;
case 0x70089d:c.instructions+=1;goto B70089d;
case 0x70089f:goto L70089f;
case 0x7008a0:c.instructions+=1;goto B7008a0;
case 0x7008a5:goto L7008a5;
case 0x7008a9:c.instructions+=1;goto B7008a9;
case 0x7008aa:goto L7008aa;
case 0x7008ac:c.instructions+=5;goto B7008ac;
case 0x7008ad:c.instructions+=4;goto B7008ad;
case 0x7008b0:c.instructions+=3;goto B7008b0;
case 0x7008b3:c.instructions+=2;goto B7008b3;
case 0x7008b4:c.instructions+=1;goto B7008b4;
case 0x7008b5:goto L7008b5;
case 0x7008b6:c.instructions+=5;goto B7008b6;
case 0x7008b8:c.instructions+=4;goto B7008b8;
case 0x7008bb:c.instructions+=3;goto B7008bb;
case 0x7008be:c.instructions+=2;goto B7008be;
case 0x7008c2:c.instructions+=1;goto B7008c2;
case 0x7008c4:goto L7008c4;
case 0x7008c7:c.instructions+=16;goto B7008c7;
case 0x7008c9:c.instructions+=15;goto B7008c9;
case 0x7008ca:c.instructions+=14;goto B7008ca;
case 0x7008cd:c.instructions+=13;goto B7008cd;
case 0x7008cf:c.instructions+=12;goto B7008cf;
case 0x7008d2:c.instructions+=11;goto B7008d2;
case 0x7008d4:c.instructions+=10;goto B7008d4;
case 0x7008d5:c.instructions+=9;goto B7008d5;
case 0x7008d7:c.instructions+=8;goto B7008d7;
case 0x7008da:c.instructions+=7;goto B7008da;
case 0x7008dd:c.instructions+=6;goto B7008dd;
case 0x7008e0:c.instructions+=5;goto B7008e0;
case 0x7008e2:c.instructions+=4;goto B7008e2;
case 0x7008e5:c.instructions+=3;goto B7008e5;
case 0x7008e8:c.instructions+=2;goto B7008e8;
case 0x7008ea:c.instructions+=1;goto B7008ea;
case 0x7008eb:goto L7008eb;
case 0x7008ec:c.instructions+=1;goto B7008ec;
case 0x7008ef:goto L7008ef;
case 0x7008f2:c.instructions+=2;goto B7008f2;
case 0x7008f4:c.instructions+=1;goto B7008f4;
case 0x7008f6:goto L7008f6;
case 0x7008f8:c.instructions+=24;goto B7008f8;
case 0x7008fa:c.instructions+=23;goto B7008fa;
case 0x7008fb:c.instructions+=22;goto B7008fb;
case 0x7008fe:c.instructions+=21;goto B7008fe;
case 0x700900:c.instructions+=20;goto B700900;
case 0x700903:c.instructions+=19;goto B700903;
case 0x700905:c.instructions+=18;goto B700905;
case 0x700906:c.instructions+=17;goto B700906;
case 0x700908:c.instructions+=16;goto B700908;
case 0x70090b:c.instructions+=15;goto B70090b;
case 0x70090e:c.instructions+=14;goto B70090e;
case 0x700910:c.instructions+=13;goto B700910;
case 0x700912:c.instructions+=12;goto B700912;
case 0x700915:c.instructions+=11;goto B700915;
case 0x700917:c.instructions+=10;goto B700917;
case 0x700919:c.instructions+=9;goto B700919;
case 0x70091c:c.instructions+=8;goto B70091c;
case 0x70091f:c.instructions+=7;goto B70091f;
case 0x700921:c.instructions+=6;goto B700921;
case 0x700924:c.instructions+=5;goto B700924;
case 0x700927:c.instructions+=4;goto B700927;
case 0x700929:c.instructions+=3;goto B700929;
case 0x700930:c.instructions+=2;goto B700930;
case 0x700931:c.instructions+=1;goto B700931;
case 0x700932:goto L700932;
case 0x700937:c.instructions+=1;goto B700937;
case 0x70093c:goto L70093c;
case 0x70093d:c.instructions+=2;goto B70093d;
case 0x70093f:c.instructions+=1;goto B70093f;
case 0x700940:goto L700940;
case 0x700941:c.instructions+=21;goto B700941;
case 0x700943:c.instructions+=20;goto B700943;
case 0x700945:c.instructions+=19;goto B700945;
case 0x70094b:c.instructions+=18;goto B70094b;
case 0x70094e:c.instructions+=17;goto B70094e;
case 0x700950:c.instructions+=16;goto B700950;
case 0x700953:c.instructions+=15;goto B700953;
case 0x700956:c.instructions+=14;goto B700956;
case 0x700958:c.instructions+=13;goto B700958;
case 0x70095b:c.instructions+=12;goto B70095b;
case 0x70095e:c.instructions+=11;goto B70095e;
case 0x700960:c.instructions+=10;goto B700960;
case 0x700967:c.instructions+=9;goto B700967;
case 0x70096a:c.instructions+=8;goto B70096a;
case 0x70096d:c.instructions+=7;goto B70096d;
case 0x700970:c.instructions+=6;goto B700970;
case 0x700973:c.instructions+=5;goto B700973;
case 0x700976:c.instructions+=4;goto B700976;
case 0x70097d:c.instructions+=3;goto B70097d;
case 0x700982:c.instructions+=2;goto B700982;
case 0x700987:c.instructions+=1;goto B700987;
case 0x70098c:goto L70098c;
case 0x70098d:c.instructions+=1;goto B70098d;
case 0x700992:goto L700992;
case 0x700994:c.instructions+=2;goto B700994;
case 0x700995:c.instructions+=1;goto B700995;
case 0x700996:goto L700996;
case 0x700997:c.instructions+=13;goto B700997;
case 0x700999:c.instructions+=12;goto B700999;
case 0x70099a:c.instructions+=11;goto B70099a;
case 0x70099b:c.instructions+=10;goto B70099b;
case 0x70099c:c.instructions+=9;goto B70099c;
case 0x70099f:c.instructions+=8;goto B70099f;
case 0x7009a0:c.instructions+=7;goto B7009a0;
case 0x7009a6:c.instructions+=6;goto B7009a6;
case 0x7009a8:c.instructions+=5;goto B7009a8;
case 0x7009aa:c.instructions+=4;goto B7009aa;
case 0x7009ac:c.instructions+=3;goto B7009ac;
case 0x7009af:c.instructions+=2;goto B7009af;
case 0x7009b0:c.instructions+=1;goto B7009b0;
case 0x7009b2:goto L7009b2;
case 0x7009b4:c.instructions+=8;goto B7009b4;
case 0x7009b6:c.instructions+=7;goto B7009b6;
case 0x7009b9:c.instructions+=6;goto B7009b9;
case 0x7009bb:c.instructions+=5;goto B7009bb;
case 0x7009be:c.instructions+=4;goto B7009be;
case 0x7009c0:c.instructions+=3;goto B7009c0;
case 0x7009c3:c.instructions+=2;goto B7009c3;
case 0x7009c6:c.instructions+=1;goto B7009c6;
case 0x7009c8:goto L7009c8;
case 0x7009ca:c.instructions+=2;goto B7009ca;
case 0x7009cc:c.instructions+=1;goto B7009cc;
case 0x7009d1:goto L7009d1;
case 0x7009d4:goto L7009d4;
case 0x7009d6:c.instructions+=1;goto B7009d6;
case 0x7009d8:goto L7009d8;
case 0x7009db:c.instructions+=2;goto B7009db;
case 0x7009dd:c.instructions+=1;goto B7009dd;
case 0x7009df:goto L7009df;
case 0x7009e1:c.instructions+=9;goto B7009e1;
case 0x7009e3:c.instructions+=8;goto B7009e3;
case 0x7009e6:c.instructions+=7;goto B7009e6;
case 0x7009e8:c.instructions+=6;goto B7009e8;
case 0x7009eb:c.instructions+=5;goto B7009eb;
case 0x7009ee:c.instructions+=4;goto B7009ee;
case 0x7009f0:c.instructions+=3;goto B7009f0;
case 0x7009f2:c.instructions+=2;goto B7009f2;
case 0x7009f5:c.instructions+=1;goto B7009f5;
case 0x7009f7:goto L7009f7;
case 0x7009f9:c.instructions+=1;goto B7009f9;
case 0x7009fe:goto L7009fe;
case 0x700a00:c.instructions+=1;goto B700a00;
case 0x700a02:goto L700a02;
case 0x700a05:goto L700a05;
case 0x700a08:c.instructions+=2;goto B700a08;
case 0x700a09:c.instructions+=1;goto B700a09;
case 0x700a0e:goto L700a0e;
case 0x700a0f:c.instructions+=1;goto B700a0f;
case 0x700a14:goto L700a14;
case 0x700a16:c.instructions+=12;goto B700a16;
case 0x700a17:c.instructions+=11;goto B700a17;
case 0x700a19:c.instructions+=10;goto B700a19;
case 0x700a1c:c.instructions+=9;goto B700a1c;
case 0x700a1e:c.instructions+=8;goto B700a1e;
case 0x700a21:c.instructions+=7;goto B700a21;
case 0x700a24:c.instructions+=6;goto B700a24;
case 0x700a25:c.instructions+=5;goto B700a25;
case 0x700a26:c.instructions+=4;goto B700a26;
case 0x700a2c:c.instructions+=3;goto B700a2c;
case 0x700a2d:c.instructions+=2;goto B700a2d;
case 0x700a2e:c.instructions+=1;goto B700a2e;
case 0x700a2f:goto L700a2f;
case 0x700a30:c.instructions+=9;goto B700a30;
case 0x700a32:c.instructions+=8;goto B700a32;
case 0x700a35:c.instructions+=7;goto B700a35;
case 0x700a36:c.instructions+=6;goto B700a36;
case 0x700a37:c.instructions+=5;goto B700a37;
case 0x700a38:c.instructions+=4;goto B700a38;
case 0x700a3a:c.instructions+=3;goto B700a3a;
case 0x700a3c:c.instructions+=2;goto B700a3c;
case 0x700a3e:c.instructions+=1;goto B700a3e;
case 0x700a43:goto L700a43;
case 0x700a48:c.instructions+=3;goto B700a48;
case 0x700a4d:c.instructions+=2;goto B700a4d;
case 0x700a50:c.instructions+=1;goto B700a50;
case 0x700a55:goto L700a55;
case 0x700a58:c.instructions+=2;goto B700a58;
case 0x700a5a:c.instructions+=1;goto B700a5a;
case 0x700a5f:goto L700a5f;
case 0x700a62:c.instructions+=12;goto B700a62;
case 0x700a64:c.instructions+=11;goto B700a64;
case 0x700a67:c.instructions+=10;goto B700a67;
case 0x700a6a:c.instructions+=9;goto B700a6a;
case 0x700a6d:c.instructions+=8;goto B700a6d;
case 0x700a70:c.instructions+=7;goto B700a70;
case 0x700a73:c.instructions+=6;goto B700a73;
case 0x700a76:c.instructions+=5;goto B700a76;
case 0x700a77:c.instructions+=4;goto B700a77;
case 0x700a7a:c.instructions+=3;goto B700a7a;
case 0x700a7b:c.instructions+=2;goto B700a7b;
case 0x700a7e:c.instructions+=1;goto B700a7e;
case 0x700a83:goto L700a83;
case 0x700a86:c.instructions+=3;goto B700a86;
case 0x700a87:c.instructions+=2;goto B700a87;
case 0x700a8a:c.instructions+=1;goto B700a8a;
case 0x700a8f:goto L700a8f;
case 0x700a92:c.instructions+=14;goto B700a92;
case 0x700a94:c.instructions+=13;goto B700a94;
case 0x700a97:c.instructions+=12;goto B700a97;
case 0x700a9a:c.instructions+=11;goto B700a9a;
case 0x700a9d:c.instructions+=10;goto B700a9d;
case 0x700aa0:c.instructions+=9;goto B700aa0;
case 0x700aa3:c.instructions+=8;goto B700aa3;
case 0x700aa6:c.instructions+=7;goto B700aa6;
case 0x700aa7:c.instructions+=6;goto B700aa7;
case 0x700aa9:c.instructions+=5;goto B700aa9;
case 0x700aab:c.instructions+=4;goto B700aab;
case 0x700aac:c.instructions+=3;goto B700aac;
case 0x700aaf:c.instructions+=2;goto B700aaf;
case 0x700ab1:c.instructions+=1;goto B700ab1;
case 0x700ab6:goto L700ab6;
case 0x700ab8:c.instructions+=1;goto B700ab8;
case 0x700abd:goto L700abd;
case 0x700ac0:c.instructions+=2;goto B700ac0;
case 0x700ac2:c.instructions+=1;goto B700ac2;
case 0x700ac7:goto L700ac7;
case 0x700aca:c.instructions+=2;goto B700aca;
case 0x700acc:c.instructions+=1;goto B700acc;
case 0x700ad1:goto L700ad1;
case 0x700ad6:c.instructions+=2;goto B700ad6;
case 0x700ad9:c.instructions+=1;goto B700ad9;
case 0x700ade:goto L700ade;
case 0x700adf:c.instructions+=7;goto B700adf;
case 0x700ae0:c.instructions+=6;goto B700ae0;
case 0x700ae1:c.instructions+=5;goto B700ae1;
case 0x700ae2:c.instructions+=4;goto B700ae2;
case 0x700ae4:c.instructions+=3;goto B700ae4;
case 0x700ae5:c.instructions+=2;goto B700ae5;
case 0x700ae6:c.instructions+=1;goto B700ae6;
case 0x700ae9:goto L700ae9;
case 0x700aeb:c.instructions+=1;goto B700aeb;
case 0x700af0:goto L700af0;
case 0x700af2:c.instructions+=2;goto B700af2;
case 0x700af3:c.instructions+=1;goto B700af3;
case 0x700af5:goto L700af5;
case 0x700af7:c.instructions+=1;goto B700af7;
case 0x700afc:goto L700afc;
case 0x700afe:c.instructions+=1;goto B700afe;
case 0x700aff:goto L700aff;
case 0x700b00:c.instructions+=8;goto B700b00;
case 0x700b02:c.instructions+=7;goto B700b02;
case 0x700b03:c.instructions+=6;goto B700b03;
case 0x700b04:c.instructions+=5;goto B700b04;
case 0x700b05:c.instructions+=4;goto B700b05;
case 0x700b08:c.instructions+=3;goto B700b08;
case 0x700b09:c.instructions+=2;goto B700b09;
case 0x700b0b:c.instructions+=1;goto B700b0b;
case 0x700b10:goto L700b10;
case 0x700b14:c.instructions+=1;goto B700b14;
case 0x700b1a:goto L700b1a;
case 0x700b1b:c.instructions+=12;goto B700b1b;
case 0x700b1e:c.instructions+=11;goto B700b1e;
case 0x700b21:c.instructions+=10;goto B700b21;
case 0x700b25:c.instructions+=9;goto B700b25;
case 0x700b28:c.instructions+=8;goto B700b28;
case 0x700b2c:c.instructions+=7;goto B700b2c;
case 0x700b2f:c.instructions+=6;goto B700b2f;
case 0x700b32:c.instructions+=5;goto B700b32;
case 0x700b34:c.instructions+=4;goto B700b34;
case 0x700b38:c.instructions+=3;goto B700b38;
case 0x700b3b:c.instructions+=2;goto B700b3b;
case 0x700b3e:c.instructions+=1;goto B700b3e;
case 0x700b40:goto L700b40;
case 0x700b46:goto L700b46;
case 0x700b48:c.instructions+=3;goto B700b48;
case 0x700b4b:c.instructions+=2;goto B700b4b;
case 0x700b4e:c.instructions+=1;goto B700b4e;
case 0x700b50:goto L700b50;
case 0x700b56:goto L700b56;
case 0x700b58:c.instructions+=10;goto B700b58;
case 0x700b5b:c.instructions+=9;goto B700b5b;
case 0x700b5e:c.instructions+=8;goto B700b5e;
case 0x700b61:c.instructions+=7;goto B700b61;
case 0x700b64:c.instructions+=6;goto B700b64;
case 0x700b67:c.instructions+=5;goto B700b67;
case 0x700b6a:c.instructions+=4;goto B700b6a;
case 0x700b6d:c.instructions+=3;goto B700b6d;
case 0x700b6e:c.instructions+=2;goto B700b6e;
case 0x700b70:c.instructions+=1;goto B700b70;
case 0x700b72:goto L700b72;
case 0x700b74:goto L700b74;
case 0x700b77:c.instructions+=3;goto B700b77;
case 0x700b79:c.instructions+=2;goto B700b79;
case 0x700b7c:c.instructions+=1;goto B700b7c;
case 0x700b81:goto L700b81;
case 0x700b82:c.instructions+=1;goto B700b82;
case 0x700b84:goto L700b84;
case 0x700b87:c.instructions+=5;goto B700b87;
case 0x700b8b:c.instructions+=4;goto B700b8b;
case 0x700b8e:c.instructions+=3;goto B700b8e;
case 0x700b91:c.instructions+=2;goto B700b91;
case 0x700b92:c.instructions+=1;goto B700b92;
case 0x700b97:goto L700b97;
case 0x700b99:c.instructions+=3;goto B700b99;
case 0x700b9b:c.instructions+=2;goto B700b9b;
case 0x700b9d:c.instructions+=1;goto B700b9d;
case 0x700ba2:goto L700ba2;
case 0x700ba5:c.instructions+=3;goto B700ba5;
case 0x700ba6:c.instructions+=2;goto B700ba6;
case 0x700ba8:c.instructions+=1;goto B700ba8;
case 0x700bad:goto L700bad;
case 0x700bb0:c.instructions+=3;goto B700bb0;
case 0x700bb1:c.instructions+=2;goto B700bb1;
case 0x700bb3:c.instructions+=1;goto B700bb3;
case 0x700bb8:goto L700bb8;
case 0x700bb9:c.instructions+=1;goto B700bb9;
case 0x700bbe:goto L700bbe;
case 0x700bc1:c.instructions+=3;goto B700bc1;
case 0x700bc4:c.instructions+=2;goto B700bc4;
case 0x700bc7:c.instructions+=1;goto B700bc7;
case 0x700bc9:goto L700bc9;
case 0x700bcf:c.instructions+=2;goto B700bcf;
case 0x700bd2:c.instructions+=1;goto B700bd2;
case 0x700bd7:goto L700bd7;
case 0x700bda:c.instructions+=2;goto B700bda;
case 0x700bdc:c.instructions+=1;goto B700bdc;
case 0x700be1:goto L700be1;
case 0x700be4:c.instructions+=3;goto B700be4;
case 0x700be5:c.instructions+=2;goto B700be5;
case 0x700be7:c.instructions+=1;goto B700be7;
case 0x700bec:goto L700bec;
case 0x700bef:c.instructions+=1;goto B700bef;
case 0x700bf4:goto L700bf4;
case 0x700bf9:c.instructions+=1;goto B700bf9;
case 0x700bfb:goto L700bfb;
case 0x700bfd:goto L700bfd;
case 0x700bff:c.instructions+=1;goto B700bff;
case 0x700c01:goto L700c01;
case 0x700c04:c.instructions+=2;goto B700c04;
case 0x700c06:c.instructions+=1;goto B700c06;
case 0x700c08:goto L700c08;
case 0x700c0a:c.instructions+=1;goto B700c0a;
case 0x700c0f:goto L700c0f;
case 0x700c10:c.instructions+=1;goto B700c10;
case 0x700c15:goto L700c15;
case 0x700c17:c.instructions+=2;goto B700c17;
case 0x700c18:c.instructions+=1;goto B700c18;
case 0x700c1a:goto L700c1a;
case 0x700c1d:c.instructions+=9;goto B700c1d;
case 0x700c20:c.instructions+=8;goto B700c20;
case 0x700c23:c.instructions+=7;goto B700c23;
case 0x700c26:c.instructions+=6;goto B700c26;
case 0x700c29:c.instructions+=5;goto B700c29;
case 0x700c2c:c.instructions+=4;goto B700c2c;
case 0x700c2d:c.instructions+=3;goto B700c2d;
case 0x700c2e:c.instructions+=2;goto B700c2e;
case 0x700c31:c.instructions+=1;goto B700c31;
case 0x700c36:goto L700c36;
case 0x700c39:c.instructions+=3;goto B700c39;
case 0x700c3a:c.instructions+=2;goto B700c3a;
case 0x700c3c:c.instructions+=1;goto B700c3c;
case 0x700c41:goto L700c41;
case 0x700c44:c.instructions+=3;goto B700c44;
case 0x700c45:c.instructions+=2;goto B700c45;
case 0x700c47:c.instructions+=1;goto B700c47;
case 0x700c4c:goto L700c4c;
case 0x700c50:c.instructions+=1;goto B700c50;
case 0x700c52:goto L700c52;
case 0x700c55:c.instructions+=2;goto B700c55;
case 0x700c57:c.instructions+=1;goto B700c57;
case 0x700c5c:goto L700c5c;
case 0x700c5f:c.instructions+=3;goto B700c5f;
case 0x700c61:c.instructions+=2;goto B700c61;
case 0x700c63:c.instructions+=1;goto B700c63;
case 0x700c68:goto L700c68;
case 0x700c6a:c.instructions+=1;goto B700c6a;
case 0x700c6c:goto L700c6c;
case 0x700c6e:goto L700c6e;
case 0x700c6f:c.instructions+=3;goto B700c6f;
case 0x700c70:c.instructions+=2;goto B700c70;
case 0x700c71:c.instructions+=1;goto B700c71;
case 0x700c74:goto L700c74;
case 0x700c75:c.instructions+=7;goto B700c75;
case 0x700c77:c.instructions+=6;goto B700c77;
case 0x700c78:c.instructions+=5;goto B700c78;
case 0x700c7b:c.instructions+=4;goto B700c7b;
case 0x700c7e:c.instructions+=3;goto B700c7e;
case 0x700c81:c.instructions+=2;goto B700c81;
case 0x700c84:c.instructions+=1;goto B700c84;
case 0x700c86:goto L700c86;
case 0x700c89:goto L700c89;
case 0x700c8c:c.instructions+=7;goto B700c8c;
case 0x700c92:c.instructions+=6;goto B700c92;
case 0x700c95:c.instructions+=5;goto B700c95;
case 0x700c97:c.instructions+=4;goto B700c97;
case 0x700c99:c.instructions+=3;goto B700c99;
case 0x700c9a:c.instructions+=2;goto B700c9a;
case 0x700c9f:c.instructions+=1;goto B700c9f;
case 0x700ca5:goto L700ca5;
case 0x700ca8:c.instructions+=5;goto B700ca8;
case 0x700caa:c.instructions+=4;goto B700caa;
case 0x700cad:c.instructions+=3;goto B700cad;
case 0x700cae:c.instructions+=2;goto B700cae;
case 0x700caf:c.instructions+=1;goto B700caf;
case 0x700cb2:goto L700cb2;
case 0x700cb3:c.instructions+=7;goto B700cb3;
case 0x700cb5:c.instructions+=6;goto B700cb5;
case 0x700cb8:c.instructions+=5;goto B700cb8;
case 0x700cbb:c.instructions+=4;goto B700cbb;
case 0x700cbd:c.instructions+=3;goto B700cbd;
case 0x700cc0:c.instructions+=2;goto B700cc0;
case 0x700cc1:c.instructions+=1;goto B700cc1;
case 0x700cc7:goto L700cc7;
case 0x700cc8:c.instructions+=2;goto B700cc8;
case 0x700cc9:c.instructions+=1;goto B700cc9;
case 0x700ccc:goto L700ccc;
case 0x700ccf:c.instructions+=2;goto B700ccf;
case 0x700cd2:c.instructions+=1;goto B700cd2;
case 0x700cd3:goto L700cd3;
case 0x700cd4:c.instructions+=3;goto B700cd4;
case 0x700cd6:c.instructions+=2;goto B700cd6;
case 0x700cd9:c.instructions+=1;goto B700cd9;
case 0x700cdb:goto L700cdb;
case 0x700cdd:c.instructions+=2;goto B700cdd;
case 0x700cdf:c.instructions+=1;goto B700cdf;
case 0x700ce2:goto L700ce2;
case 0x700ce5:c.instructions+=2;goto B700ce5;
case 0x700ce6:c.instructions+=1;goto B700ce6;
case 0x700ce7:goto L700ce7;
case 0x700ce8:c.instructions+=6;goto B700ce8;
case 0x700cea:c.instructions+=5;goto B700cea;
case 0x700cee:c.instructions+=4;goto B700cee;
case 0x700cef:c.instructions+=3;goto B700cef;
case 0x700cf1:c.instructions+=2;goto B700cf1;
case 0x700cf7:c.instructions+=1;goto B700cf7;
case 0x700cf9:goto L700cf9;
case 0x700cfa:c.instructions+=1;goto B700cfa;
case 0x700cff:goto L700cff;
case 0x700d00:goto L700d00;
case 0x700d02:c.instructions+=3;goto B700d02;
case 0x700d03:c.instructions+=2;goto B700d03;
case 0x700d04:c.instructions+=1;goto B700d04;
case 0x700d07:goto L700d07;
case 0x700d08:c.instructions+=4;goto B700d08;
case 0x700d0a:c.instructions+=3;goto B700d0a;
case 0x700d0b:c.instructions+=2;goto B700d0b;
case 0x700d0d:c.instructions+=1;goto B700d0d;
case 0x700d12:goto L700d12;
case 0x700d16:c.instructions+=1;goto B700d16;
case 0x700d18:goto L700d18;
case 0x700d19:c.instructions+=1;goto B700d19;
case 0x700d1f:goto L700d1f;
case 0x700d20:goto L700d20;
case 0x700d22:c.instructions+=3;goto B700d22;
case 0x700d23:c.instructions+=2;goto B700d23;
case 0x700d24:c.instructions+=1;goto B700d24;
case 0x700d27:goto L700d27;
case 0x700d28:c.instructions+=5;goto B700d28;
case 0x700d2a:c.instructions+=4;goto B700d2a;
case 0x700d2b:c.instructions+=3;goto B700d2b;
case 0x700d2d:c.instructions+=2;goto B700d2d;
case 0x700d2f:c.instructions+=1;goto B700d2f;
case 0x700d34:goto L700d34;
case 0x700d36:c.instructions+=2;goto B700d36;
case 0x700d37:c.instructions+=1;goto B700d37;
case 0x700d39:goto L700d39;
case 0x700d3c:c.instructions+=3;goto B700d3c;
case 0x700d3e:c.instructions+=2;goto B700d3e;
case 0x700d41:c.instructions+=1;goto B700d41;
case 0x700d46:goto L700d46;
case 0x700d48:goto L700d48;
case 0x700d4a:goto L700d4a;
case 0x700d4d:c.instructions+=12;goto B700d4d;
case 0x700d4f:c.instructions+=11;goto B700d4f;
case 0x700d51:c.instructions+=10;goto B700d51;
case 0x700d53:c.instructions+=9;goto B700d53;
case 0x700d56:c.instructions+=8;goto B700d56;
case 0x700d58:c.instructions+=7;goto B700d58;
case 0x700d5a:c.instructions+=6;goto B700d5a;
case 0x700d5d:c.instructions+=5;goto B700d5d;
case 0x700d60:c.instructions+=4;goto B700d60;
case 0x700d62:c.instructions+=3;goto B700d62;
case 0x700d63:c.instructions+=2;goto B700d63;
case 0x700d64:c.instructions+=1;goto B700d64;
case 0x700d67:goto L700d67;
case 0x700d68:c.instructions+=4;goto B700d68;
case 0x700d6a:c.instructions+=3;goto B700d6a;
case 0x700d6b:c.instructions+=2;goto B700d6b;
case 0x700d6d:c.instructions+=1;goto B700d6d;
case 0x700d72:goto L700d72;
case 0x700d76:c.instructions+=1;goto B700d76;
case 0x700d78:goto L700d78;
case 0x700d79:c.instructions+=1;goto B700d79;
case 0x700d7f:goto L700d7f;
case 0x700d80:goto L700d80;
case 0x700d82:c.instructions+=3;goto B700d82;
case 0x700d83:c.instructions+=2;goto B700d83;
case 0x700d84:c.instructions+=1;goto B700d84;
case 0x700d87:goto L700d87;
case 0x700d89:c.instructions+=1;goto B700d89;
case 0x700d8b:goto L700d8b;
case 0x700d8d:c.instructions+=2;goto B700d8d;
case 0x700d90:c.instructions+=1;goto B700d90;
case 0x700d95:goto L700d95;
case 0x700d96:c.instructions+=2;goto B700d96;
case 0x700d97:c.instructions+=1;goto B700d97;
case 0x700d98:goto L700d98;
case 0x700d9d:c.instructions+=1;goto B700d9d;
case 0x700d9e:goto L700d9e;
case 0x700d9f:c.instructions+=9;goto B700d9f;
case 0x700da1:c.instructions+=8;goto B700da1;
case 0x700da4:c.instructions+=7;goto B700da4;
case 0x700da8:c.instructions+=6;goto B700da8;
case 0x700dac:c.instructions+=5;goto B700dac;
case 0x700dae:c.instructions+=4;goto B700dae;
case 0x700db1:c.instructions+=3;goto B700db1;
case 0x700db2:c.instructions+=2;goto B700db2;
case 0x700db3:c.instructions+=1;goto B700db3;
case 0x700db6:goto L700db6;
case 0x700db9:c.instructions+=1;goto B700db9;
case 0x700dba:goto L700dba;
case 0x700dbd:c.instructions+=1;goto B700dbd;
case 0x700dbe:goto L700dbe;
case 0x700dbf:c.instructions+=5;goto B700dbf;
case 0x700dc1:c.instructions+=4;goto B700dc1;
case 0x700dc2:c.instructions+=3;goto B700dc2;
case 0x700dc4:c.instructions+=2;goto B700dc4;
case 0x700dc7:c.instructions+=1;goto B700dc7;
case 0x700dcc:goto L700dcc;
case 0x700dcf:c.instructions+=5;goto B700dcf;
case 0x700dd1:c.instructions+=4;goto B700dd1;
case 0x700dd4:c.instructions+=3;goto B700dd4;
case 0x700dd5:c.instructions+=2;goto B700dd5;
case 0x700dd6:c.instructions+=1;goto B700dd6;
case 0x700dd9:goto L700dd9;
case 0x700dda:c.instructions+=3;goto B700dda;
case 0x700ddc:c.instructions+=2;goto B700ddc;
case 0x700de0:c.instructions+=1;goto B700de0;
case 0x700de2:goto L700de2;
case 0x700de5:c.instructions+=2;goto B700de5;
case 0x700de6:c.instructions+=1;goto B700de6;
case 0x700deb:goto L700deb;
case 0x700dec:c.instructions+=1;goto B700dec;
case 0x700def:goto L700def;
case 0x700df0:c.instructions+=12;goto B700df0;
case 0x700df2:c.instructions+=11;goto B700df2;
case 0x700df8:c.instructions+=10;goto B700df8;
case 0x700df9:c.instructions+=9;goto B700df9;
case 0x700dfb:c.instructions+=8;goto B700dfb;
case 0x700dfd:c.instructions+=7;goto B700dfd;
case 0x700dfe:c.instructions+=6;goto B700dfe;
case 0x700e01:c.instructions+=5;goto B700e01;
case 0x700e04:c.instructions+=4;goto B700e04;
case 0x700e08:c.instructions+=3;goto B700e08;
case 0x700e0e:c.instructions+=2;goto B700e0e;
case 0x700e14:c.instructions+=1;goto B700e14;
case 0x700e19:goto L700e19;
case 0x700e1c:c.instructions+=9;goto B700e1c;
case 0x700e22:c.instructions+=8;goto B700e22;
case 0x700e28:c.instructions+=7;goto B700e28;
case 0x700e2b:c.instructions+=6;goto B700e2b;
case 0x700e31:c.instructions+=5;goto B700e31;
case 0x700e37:c.instructions+=4;goto B700e37;
case 0x700e38:c.instructions+=3;goto B700e38;
case 0x700e42:c.instructions+=2;goto B700e42;
case 0x700e4c:c.instructions+=1;goto B700e4c;
case 0x700e51:goto L700e51;
case 0x700e52:c.instructions+=6;goto B700e52;
case 0x700e55:c.instructions+=5;goto B700e55;
case 0x700e56:c.instructions+=4;goto B700e56;
case 0x700e58:c.instructions+=3;goto B700e58;
case 0x700e59:c.instructions+=2;goto B700e59;
case 0x700e5a:c.instructions+=1;goto B700e5a;
case 0x700e5d:goto L700e5d;
case 0x700e5e:c.instructions+=4;goto B700e5e;
case 0x700e60:c.instructions+=3;goto B700e60;
case 0x700e63:c.instructions+=2;goto B700e63;
case 0x700e65:c.instructions+=1;goto B700e65;
case 0x700e67:goto L700e67;
case 0x700e68:c.instructions+=1;goto B700e68;
case 0x700e6d:goto L700e6d;
case 0x700e71:c.instructions+=1;goto B700e71;
case 0x700e72:goto L700e72;
case 0x700e74:c.instructions+=5;goto B700e74;
case 0x700e75:c.instructions+=4;goto B700e75;
case 0x700e78:c.instructions+=3;goto B700e78;
case 0x700e7b:c.instructions+=2;goto B700e7b;
case 0x700e7c:c.instructions+=1;goto B700e7c;
case 0x700e7d:goto L700e7d;
case 0x700e7e:c.instructions+=28;goto B700e7e;
case 0x700e80:c.instructions+=27;goto B700e80;
case 0x700e81:c.instructions+=26;goto B700e81;
case 0x700e84:c.instructions+=25;goto B700e84;
case 0x700e87:c.instructions+=24;goto B700e87;
case 0x700e89:c.instructions+=23;goto B700e89;
case 0x700e8a:c.instructions+=22;goto B700e8a;
case 0x700e8d:c.instructions+=21;goto B700e8d;
case 0x700e8f:c.instructions+=20;goto B700e8f;
case 0x700e92:c.instructions+=19;goto B700e92;
case 0x700e94:c.instructions+=18;goto B700e94;
case 0x700e95:c.instructions+=17;goto B700e95;
case 0x700e97:c.instructions+=16;goto B700e97;
case 0x700e9a:c.instructions+=15;goto B700e9a;
case 0x700e9c:c.instructions+=14;goto B700e9c;
case 0x700e9e:c.instructions+=13;goto B700e9e;
case 0x700ea0:c.instructions+=12;goto B700ea0;
case 0x700ea2:c.instructions+=11;goto B700ea2;
case 0x700ea5:c.instructions+=10;goto B700ea5;
case 0x700ea8:c.instructions+=9;goto B700ea8;
case 0x700eaa:c.instructions+=8;goto B700eaa;
case 0x700ead:c.instructions+=7;goto B700ead;
case 0x700eb0:c.instructions+=6;goto B700eb0;
case 0x700eb2:c.instructions+=5;goto B700eb2;
case 0x700eb5:c.instructions+=4;goto B700eb5;
case 0x700eb6:c.instructions+=3;goto B700eb6;
case 0x700eb7:c.instructions+=2;goto B700eb7;
case 0x700eb8:c.instructions+=1;goto B700eb8;
case 0x700ebb:goto L700ebb;
case 0x700ebe:c.instructions+=2;goto B700ebe;
case 0x700ec0:c.instructions+=1;goto B700ec0;
case 0x700ec2:goto L700ec2;
case 0x700ec4:c.instructions+=24;goto B700ec4;
case 0x700ec6:c.instructions+=23;goto B700ec6;
case 0x700ec7:c.instructions+=22;goto B700ec7;
case 0x700eca:c.instructions+=21;goto B700eca;
case 0x700ecc:c.instructions+=20;goto B700ecc;
case 0x700ecf:c.instructions+=19;goto B700ecf;
case 0x700ed1:c.instructions+=18;goto B700ed1;
case 0x700ed2:c.instructions+=17;goto B700ed2;
case 0x700ed4:c.instructions+=16;goto B700ed4;
case 0x700ed7:c.instructions+=15;goto B700ed7;
case 0x700eda:c.instructions+=14;goto B700eda;
case 0x700edc:c.instructions+=13;goto B700edc;
case 0x700ede:c.instructions+=12;goto B700ede;
case 0x700ee1:c.instructions+=11;goto B700ee1;
case 0x700ee3:c.instructions+=10;goto B700ee3;
case 0x700ee5:c.instructions+=9;goto B700ee5;
case 0x700ee8:c.instructions+=8;goto B700ee8;
case 0x700eeb:c.instructions+=7;goto B700eeb;
case 0x700eed:c.instructions+=6;goto B700eed;
case 0x700ef0:c.instructions+=5;goto B700ef0;
case 0x700ef3:c.instructions+=4;goto B700ef3;
case 0x700ef5:c.instructions+=3;goto B700ef5;
case 0x700efc:c.instructions+=2;goto B700efc;
case 0x700efd:c.instructions+=1;goto B700efd;
case 0x700efe:goto L700efe;
case 0x700f03:c.instructions+=1;goto B700f03;
case 0x700f08:goto L700f08;
case 0x700f09:c.instructions+=2;goto B700f09;
case 0x700f0b:c.instructions+=1;goto B700f0b;
case 0x700f0c:goto L700f0c;
case 0x700f0f:c.instructions+=2;goto B700f0f;
case 0x700f11:c.instructions+=1;goto B700f11;
case 0x700f13:goto L700f13;
case 0x700f15:c.instructions+=24;goto B700f15;
case 0x700f17:c.instructions+=23;goto B700f17;
case 0x700f18:c.instructions+=22;goto B700f18;
case 0x700f1b:c.instructions+=21;goto B700f1b;
case 0x700f1d:c.instructions+=20;goto B700f1d;
case 0x700f20:c.instructions+=19;goto B700f20;
case 0x700f22:c.instructions+=18;goto B700f22;
case 0x700f23:c.instructions+=17;goto B700f23;
case 0x700f25:c.instructions+=16;goto B700f25;
case 0x700f28:c.instructions+=15;goto B700f28;
case 0x700f2b:c.instructions+=14;goto B700f2b;
case 0x700f2d:c.instructions+=13;goto B700f2d;
case 0x700f2f:c.instructions+=12;goto B700f2f;
case 0x700f32:c.instructions+=11;goto B700f32;
case 0x700f34:c.instructions+=10;goto B700f34;
case 0x700f36:c.instructions+=9;goto B700f36;
case 0x700f39:c.instructions+=8;goto B700f39;
case 0x700f3c:c.instructions+=7;goto B700f3c;
case 0x700f3e:c.instructions+=6;goto B700f3e;
case 0x700f41:c.instructions+=5;goto B700f41;
case 0x700f44:c.instructions+=4;goto B700f44;
case 0x700f46:c.instructions+=3;goto B700f46;
case 0x700f4d:c.instructions+=2;goto B700f4d;
case 0x700f4e:c.instructions+=1;goto B700f4e;
case 0x700f4f:goto L700f4f;
case 0x700f54:c.instructions+=1;goto B700f54;
case 0x700f59:goto L700f59;
case 0x700f5a:c.instructions+=2;goto B700f5a;
case 0x700f5c:c.instructions+=1;goto B700f5c;
case 0x700f5d:goto L700f5d;
case 0x700f5e:c.instructions+=5;goto B700f5e;
case 0x700f60:c.instructions+=4;goto B700f60;
case 0x700f63:c.instructions+=3;goto B700f63;
case 0x700f66:c.instructions+=2;goto B700f66;
case 0x700f6a:c.instructions+=1;goto B700f6a;
case 0x700f6c:goto L700f6c;
case 0x700f6f:c.instructions+=16;goto B700f6f;
case 0x700f71:c.instructions+=15;goto B700f71;
case 0x700f72:c.instructions+=14;goto B700f72;
case 0x700f75:c.instructions+=13;goto B700f75;
case 0x700f77:c.instructions+=12;goto B700f77;
case 0x700f7a:c.instructions+=11;goto B700f7a;
case 0x700f7c:c.instructions+=10;goto B700f7c;
case 0x700f7d:c.instructions+=9;goto B700f7d;
case 0x700f7f:c.instructions+=8;goto B700f7f;
case 0x700f82:c.instructions+=7;goto B700f82;
case 0x700f85:c.instructions+=6;goto B700f85;
case 0x700f88:c.instructions+=5;goto B700f88;
case 0x700f8a:c.instructions+=4;goto B700f8a;
case 0x700f8d:c.instructions+=3;goto B700f8d;
case 0x700f90:c.instructions+=2;goto B700f90;
case 0x700f92:c.instructions+=1;goto B700f92;
case 0x700f93:goto L700f93;
case 0x700f94:c.instructions+=1;goto B700f94;
case 0x700f97:goto L700f97;
case 0x700f99:c.instructions+=9;goto B700f99;
case 0x700f9f:c.instructions+=8;goto B700f9f;
case 0x700fa2:c.instructions+=7;goto B700fa2;
case 0x700fa4:c.instructions+=6;goto B700fa4;
case 0x700fa7:c.instructions+=5;goto B700fa7;
case 0x700faa:c.instructions+=4;goto B700faa;
case 0x700fac:c.instructions+=3;goto B700fac;
case 0x700faf:c.instructions+=2;goto B700faf;
case 0x700fb6:c.instructions+=1;goto B700fb6;
case 0x700fb7:goto L700fb7;
case 0x700fb8:c.instructions+=11;goto B700fb8;
case 0x700fba:c.instructions+=10;goto B700fba;
case 0x700fbb:c.instructions+=9;goto B700fbb;
case 0x700fbc:c.instructions+=8;goto B700fbc;
case 0x700fbd:c.instructions+=7;goto B700fbd;
case 0x700fbe:c.instructions+=6;goto B700fbe;
case 0x700fc0:c.instructions+=5;goto B700fc0;
case 0x700fc3:c.instructions+=4;goto B700fc3;
case 0x700fc9:c.instructions+=3;goto B700fc9;
case 0x700fcc:c.instructions+=2;goto B700fcc;
case 0x700fcd:c.instructions+=1;goto B700fcd;
case 0x700fcf:goto L700fcf;
case 0x700fd1:c.instructions+=8;goto B700fd1;
case 0x700fd3:c.instructions+=7;goto B700fd3;
case 0x700fd6:c.instructions+=6;goto B700fd6;
case 0x700fd8:c.instructions+=5;goto B700fd8;
case 0x700fdb:c.instructions+=4;goto B700fdb;
case 0x700fdd:c.instructions+=3;goto B700fdd;
case 0x700fe0:c.instructions+=2;goto B700fe0;
case 0x700fe3:c.instructions+=1;goto B700fe3;
case 0x700fe5:goto L700fe5;
case 0x700fe7:c.instructions+=2;goto B700fe7;
case 0x700fe9:c.instructions+=1;goto B700fe9;
case 0x700fee:goto L700fee;
case 0x700ff1:goto L700ff1;
case 0x700ff3:c.instructions+=1;goto B700ff3;
case 0x700ff5:goto L700ff5;
case 0x700ff8:c.instructions+=2;goto B700ff8;
case 0x700ffa:c.instructions+=1;goto B700ffa;
case 0x700ffc:goto L700ffc;
case 0x700ffe:c.instructions+=1;goto B700ffe;
default:missing_instruction(c.pc);}
B700002:L700002:{c.instructions+=27;NFSU2_TR(0x700002);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x1ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x1ull))));
}
B700006:{NFSU2_TR(0x700006);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4400))));
}
B700009:{NFSU2_TR(0x700009);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4400))));
}
B70000c:{NFSU2_TR(0x70000c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70000f:{NFSU2_TR(0x70000f);
w1(R+4384,u8(u32(r1(R+4384))+u32(r1(R+4368))));
w1(R+4385,u8(u32(r1(R+4385))+u32(r1(R+4369))));
w1(R+4386,u8(u32(r1(R+4386))+u32(r1(R+4370))));
w1(R+4387,u8(u32(r1(R+4387))+u32(r1(R+4371))));
w1(R+4388,u8(u32(r1(R+4388))+u32(r1(R+4372))));
w1(R+4389,u8(u32(r1(R+4389))+u32(r1(R+4373))));
w1(R+4390,u8(u32(r1(R+4390))+u32(r1(R+4374))));
w1(R+4391,u8(u32(r1(R+4391))+u32(r1(R+4375))));
}
B700012:{NFSU2_TR(0x700012);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B700015:{NFSU2_TR(0x700015);
__builtin_memmove((R+4368),(R+4384),8);
}
B700018:{NFSU2_TR(0x700018);
w4(R+4384,shr<u32>(r4(R+4384),u64(u32(0x1ull))));
w4(R+4388,shr<u32>(r4(R+4388),u64(u32(0x1ull))));
}
B70001c:{NFSU2_TR(0x70001c);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4400))));
}
B70001f:{NFSU2_TR(0x70001f);
w1(R+4352,u8(u32(r1(R+4352))+u32(r1(R+4384))));
w1(R+4353,u8(u32(r1(R+4353))+u32(r1(R+4385))));
w1(R+4354,u8(u32(r1(R+4354))+u32(r1(R+4386))));
w1(R+4355,u8(u32(r1(R+4355))+u32(r1(R+4387))));
w1(R+4356,u8(u32(r1(R+4356))+u32(r1(R+4388))));
w1(R+4357,u8(u32(r1(R+4357))+u32(r1(R+4389))));
w1(R+4358,u8(u32(r1(R+4358))+u32(r1(R+4390))));
w1(R+4359,u8(u32(r1(R+4359))+u32(r1(R+4391))));
}
B700022:{NFSU2_TR(0x700022);
w8(R+4368,shl<u64>(r8(R+4368),u64(u64(0x20ull))));
}
B700026:{NFSU2_TR(0x700026);
w4(R+4352,u32(u32(r4(R+4352))+u32(r4(R+4368))));
w4(R+4356,u32(u32(r4(R+4356))+u32(r4(R+4372))));
}
B700029:{NFSU2_TR(0x700029);
{wv<8>((R+4352),uo::paddusb<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B70002c:{NFSU2_TR(0x70002c);
__builtin_memmove((R+4368),(R+4352),8);
}
B70002f:{NFSU2_TR(0x70002f);
w8(R+4352,u64(u64(r8(R+4352))&u64(r8(R+4432))));
}
B700032:{NFSU2_TR(0x700032);
{wv<8>((R+4352),uo::pmaddwd<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B700035:{NFSU2_TR(0x700035);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4464))));
}
B700038:{NFSU2_TR(0x700038);
w4(R+4368,shr<u32>(r4(R+4368),u64(u32(0xbull))));
w4(R+4372,shr<u32>(r4(R+4372),u64(u32(0xbull))));
}
B70003c:{NFSU2_TR(0x70003c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B70003f:{NFSU2_TR(0x70003f);
w8(R+4352,u64(u64(r8(R+4352))|u64(r8(R+4368))));
}
B700042:{NFSU2_TR(0x700042);
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
B700044:{NFSU2_TR(0x700044);
__builtin_memmove((R+4368),(R+4352),8);
}
B700047:{NFSU2_TR(0x700047);
w8(R+4352,shr<u64>(r8(R+4352),u64(u32(0x10ull))));
}
B70004b:{NFSU2_TR(0x70004b);
w8(R+4368,u64(u64(r8(R+4368))|u64(r8(R+4352))));
}
B70004e:{NFSU2_TR(0x70004e);
__builtin_memmove((R+4352),(R+4384),8);
}
B700051:{NFSU2_TR(0x700051);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B700055:{NFSU2_TR(0x700055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ffff8u,6ff);}
}
B700057:L700057:{c.instructions+=2;NFSU2_TR(0x700057);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B700058:{NFSU2_TR(0x700058);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700059:L700059:{c.instructions+=2;NFSU2_TR(0x700059);
u8 U[14];
__builtin_memmove((U+6),gp(0x8b2318),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70005f:{NFSU2_TR(0x70005f);
if(r1(R+518)){{goto L7000bf;}}
}
B700061:L700061:{c.instructions+=3;NFSU2_TR(0x700061);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700062:{NFSU2_TR(0x700062);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B700064:{NFSU2_TR(0x700064);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700065:L700065:{c.instructions+=21;NFSU2_TR(0x700065);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8149e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70006b:{NFSU2_TR(0x70006b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+24),(U+0),2);
}
B70006e:{NFSU2_TR(0x70006e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8149e2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700074:{NFSU2_TR(0x700074);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B700077:{NFSU2_TR(0x700077);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+4)),r2(U+0));
}
B70007a:{NFSU2_TR(0x70007a);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+8)),r2(U+0));
}
B70007d:{NFSU2_TR(0x70007d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8151e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700083:{NFSU2_TR(0x700083);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+24),(U+0),2);
}
B700086:{NFSU2_TR(0x700086);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8151e2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70008c:{NFSU2_TR(0x70008c);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B70008f:{NFSU2_TR(0x70008f);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+4)),r2(U+0));
}
B700092:{NFSU2_TR(0x700092);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+8)),r2(U+0));
}
B700095:{NFSU2_TR(0x700095);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8159e0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70009b:{NFSU2_TR(0x70009b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+24),(U+0),2);
}
B70009e:{NFSU2_TR(0x70009e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8159e2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7000a4:{NFSU2_TR(0x7000a4);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+12),(U+0),2);
}
B7000a7:{NFSU2_TR(0x7000a7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B7000aa:{NFSU2_TR(0x7000aa);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7f8ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f8ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7f8ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7000af:{NFSU2_TR(0x7000af);
u8 U[2];
__builtin_memmove((U+0),(R+12),2);
s2(u32(r4(R+4)),r2(U+0));
}
B7000b2:{NFSU2_TR(0x7000b2);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+8)),r2(U+0));
}
B7000b5:{NFSU2_TR(0x7000b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700065u);}goto L700065;}}
}
B7000b7:L7000b7:{c.instructions+=3;NFSU2_TR(0x7000b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7000b8:{NFSU2_TR(0x7000b8);
__builtin_memmove(gp(0x8b2318),(R+28),4);
}
B7000be:{NFSU2_TR(0x7000be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7000bf:L7000bf:{c.instructions+=1;NFSU2_TR(0x7000bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7000c0:L7000c0:{c.instructions+=6;NFSU2_TR(0x7000c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7000c1:{NFSU2_TR(0x7000c1);
__builtin_memmove((R+20),(R+16),4);
}
B7000c3:{NFSU2_TR(0x7000c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7000c4:{NFSU2_TR(0x7000c4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B7000c6:{NFSU2_TR(0x7000c6);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B7000c7:{NFSU2_TR(0x7000c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7000ccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700059u);}goto L700059;}
}
B7000cc:L7000cc:{c.instructions+=5;NFSU2_TR(0x7000cc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B7000ce:{NFSU2_TR(0x7000ce);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B7000d1:{NFSU2_TR(0x7000d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7000d2:{NFSU2_TR(0x7000d2);
__builtin_memmove(gp(0x8b130c),(R+0),4);
}
B7000d7:{NFSU2_TR(0x7000d7);
if(r1(R+518)){{goto L700108;}}
}
B7000d9:L7000d9:{c.instructions+=9;NFSU2_TR(0x7000d9);
w4(R+0,u32(0x60603ull));
}
B7000de:{NFSU2_TR(0x7000de);
__builtin_memmove(gp(0x8b12f8),(R+0),4);
}
B7000e3:{NFSU2_TR(0x7000e3);
__builtin_memmove(gp(0x8b12fc),(R+0),4);
}
B7000e8:{NFSU2_TR(0x7000e8);
w4(R+0,u32(0xf800fcull));
}
B7000ed:{NFSU2_TR(0x7000ed);
__builtin_memmove(gp(0x8b02e0),(R+0),4);
}
B7000f2:{NFSU2_TR(0x7000f2);
__builtin_memmove(gp(0x8b02e4),(R+0),4);
}
B7000f7:{NFSU2_TR(0x7000f7);
s4(0x8b1308,u32(0x40402ull));
}
B700101:{NFSU2_TR(0x700101);
w4(R+0,u32(0x1000008ull));
}
B700106:{NFSU2_TR(0x700106);
{goto L700135;}
}
B700108:L700108:{c.instructions+=8;NFSU2_TR(0x700108);
w4(R+0,u32(0x60606ull));
}
B70010d:{NFSU2_TR(0x70010d);
__builtin_memmove(gp(0x8b12f8),(R+0),4);
}
B700112:{NFSU2_TR(0x700112);
__builtin_memmove(gp(0x8b12fc),(R+0),4);
}
B700117:{NFSU2_TR(0x700117);
w4(R+0,u32(0x1f800f8ull));
}
B70011c:{NFSU2_TR(0x70011c);
__builtin_memmove(gp(0x8b02e0),(R+0),4);
}
B700121:{NFSU2_TR(0x700121);
__builtin_memmove(gp(0x8b02e4),(R+0),4);
}
B700126:{NFSU2_TR(0x700126);
s4(0x8b1308,u32(0x40404ull));
}
B700130:{NFSU2_TR(0x700130);
w4(R+0,u32(0x800004ull));
}
B700135:L700135:{c.instructions+=7;NFSU2_TR(0x700135);
__builtin_memmove(gp(0x8b02ec),(R+0),4);
}
B70013a:{NFSU2_TR(0x70013a);
__builtin_memmove(gp(0x8b02e8),(R+0),4);
}
B70013f:{NFSU2_TR(0x70013f);
w4(R+0,u32(0xf800ull));
}
B700144:{NFSU2_TR(0x700144);
__builtin_memmove(gp(0x8b1300),(R+0),4);
}
B700149:{NFSU2_TR(0x700149);
__builtin_memmove(gp(0x8b1304),(R+0),4);
}
B70014e:{NFSU2_TR(0x70014e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70014f:{NFSU2_TR(0x70014f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700150:L700150:{c.instructions+=8;NFSU2_TR(0x700150);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700151:{NFSU2_TR(0x700151);
__builtin_memmove((R+20),(R+16),4);
}
B700153:{NFSU2_TR(0x700153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B700156:{NFSU2_TR(0x700156);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700159:{NFSU2_TR(0x700159);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70015b:{NFSU2_TR(0x70015b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70015c:{NFSU2_TR(0x70015c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70015e:{NFSU2_TR(0x70015e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L700165;}}
}
B700160:L700160:{c.instructions+=4;NFSU2_TR(0x700160);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B700162:{NFSU2_TR(0x700162);
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
B700163:{NFSU2_TR(0x700163);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700164:{NFSU2_TR(0x700164);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700165:L700165:{c.instructions+=2;NFSU2_TR(0x700165);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
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
B700169:{NFSU2_TR(0x700169);
if(r1(R+518)){{goto L700170;}}
}
B70016b:L70016b:{c.instructions+=4;NFSU2_TR(0x70016b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70016d:{NFSU2_TR(0x70016d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70016e:{NFSU2_TR(0x70016e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70016f:{NFSU2_TR(0x70016f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700170:L700170:{c.instructions+=4;NFSU2_TR(0x700170);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B700173:{NFSU2_TR(0x700173);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700174:{NFSU2_TR(0x700174);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700175:{NFSU2_TR(0x700175);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L700197;}}
}
B700177:L700177:{c.instructions+=2;NFSU2_TR(0x700177);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70017a:{NFSU2_TR(0x70017a);
if(r1(R+518)){{goto L700180;}}
}
B70017c:L70017c:{c.instructions+=2;NFSU2_TR(0x70017c);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70017e:{NFSU2_TR(0x70017e);
{goto L7001c9;}
}
B700180:L700180:{c.instructions+=4;NFSU2_TR(0x700180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B700183:{NFSU2_TR(0x700183);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B700185:{NFSU2_TR(0x700185);
__builtin_memmove((R+24),(R+8),4);
}
B700187:{NFSU2_TR(0x700187);
if(r1(R+518)){{goto L7001b5;}}
}
B700189:L700189:{c.instructions+=2;NFSU2_TR(0x700189);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B70018c:{NFSU2_TR(0x70018c);
if(r1(R+518)){{goto L700192;}}
}
B70018e:L70018e:{c.instructions+=2;NFSU2_TR(0x70018e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700190:{NFSU2_TR(0x700190);
{goto L7001c9;}
}
B700192:L700192:{c.instructions+=2;NFSU2_TR(0x700192);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700195:{NFSU2_TR(0x700195);
{goto L7001af;}
}
B700197:L700197:{c.instructions+=2;NFSU2_TR(0x700197);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x3ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B70019b:{NFSU2_TR(0x70019b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70017cu);}goto L70017c;}}
}
B70019d:L70019d:{c.instructions+=4;NFSU2_TR(0x70019d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7001a0:{NFSU2_TR(0x7001a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7001a3:{NFSU2_TR(0x7001a3);
__builtin_memmove((R+24),(R+8),4);
}
B7001a5:{NFSU2_TR(0x7001a5);
if(r1(R+518)){{goto L7001b5;}}
}
B7001a7:L7001a7:{c.instructions+=2;NFSU2_TR(0x7001a7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7001aa:{NFSU2_TR(0x7001aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70018eu);}goto L70018e;}}
}
B7001ac:L7001ac:{c.instructions+=1;NFSU2_TR(0x7001ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7001af:L7001af:{c.instructions+=3;NFSU2_TR(0x7001af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7001b2:{NFSU2_TR(0x7001b2);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B7001b3:{NFSU2_TR(0x7001b3);
{goto L7001b8;}
}
B7001b5:L7001b5:{c.instructions+=1;NFSU2_TR(0x7001b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7001b8:L7001b8:{c.instructions+=3;NFSU2_TR(0x7001b8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffeull))));
}
B7001bb:{NFSU2_TR(0x7001bb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7001bd:{NFSU2_TR(0x7001bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7001cf;}}
}
B7001bf:L7001bf:{c.instructions+=2;NFSU2_TR(0x7001bf);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x400ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x400ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7001c5:{NFSU2_TR(0x7001c5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7001cf;}}
}
B7001c7:L7001c7:{c.instructions+=1;NFSU2_TR(0x7001c7);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7001c9:L7001c9:{c.instructions+=2;NFSU2_TR(0x7001c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7001ca:{NFSU2_TR(0x7001ca);
{goto L700495;}
}
B7001cf:L7001cf:{c.instructions+=2;NFSU2_TR(0x7001cf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B7001d2:{NFSU2_TR(0x7001d2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L700493;}}
}
B7001d8:L7001d8:{c.instructions+=2;NFSU2_TR(0x7001d8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x1ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7001dc:{NFSU2_TR(0x7001dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L700493;}}
}
B7001e2:L7001e2:{c.instructions+=10;NFSU2_TR(0x7001e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7001e5:{NFSU2_TR(0x7001e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7001e8:{NFSU2_TR(0x7001e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7001e9:{NFSU2_TR(0x7001e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B7001ec:{NFSU2_TR(0x7001ec);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B7001ee:{NFSU2_TR(0x7001ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7001f0:{NFSU2_TR(0x7001f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7001f3:{NFSU2_TR(0x7001f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7001f6:{NFSU2_TR(0x7001f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7001f9:{NFSU2_TR(0x7001f9);
if(r1(R+518)){{goto L70020a;}}
}
B7001fb:L7001fb:{c.instructions+=2;NFSU2_TR(0x7001fb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7001fe:{NFSU2_TR(0x7001fe);
if(r1(R+518)){{goto L70020a;}}
}
B700200:L700200:{c.instructions+=2;NFSU2_TR(0x700200);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B700203:{NFSU2_TR(0x700203);
if(r1(R+518)){{goto L70020a;}}
}
B700205:L700205:{c.instructions+=2;NFSU2_TR(0x700205);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B700208:{NFSU2_TR(0x700208);
{goto L70020c;}
}
B70020a:L70020a:{c.instructions+=1;NFSU2_TR(0x70020a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+12),r4(R+12)));
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70020c:L70020c:{c.instructions+=1;NFSU2_TR(0x70020c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x700499ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B700213:L700213:{c.instructions+=3;NFSU2_TR(0x700213);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700217:{NFSU2_TR(0x700217);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70021b:{NFSU2_TR(0x70021b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L700492;}}
}
B700221:L700221:{c.instructions+=4;NFSU2_TR(0x700221);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700224:{NFSU2_TR(0x700224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B700227:{NFSU2_TR(0x700227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70022a:{NFSU2_TR(0x70022a);
{goto L70022f;}
}
B70022c:L70022c:{c.instructions+=1;NFSU2_TR(0x70022c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70022f:L70022f:{c.instructions+=9;NFSU2_TR(0x70022f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B700232:{NFSU2_TR(0x700232);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700233:{NFSU2_TR(0x700233);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700236:{NFSU2_TR(0x700236);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700237:{NFSU2_TR(0x700237);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B700239:{NFSU2_TR(0x700239);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70023a:{NFSU2_TR(0x70023a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70023b:{NFSU2_TR(0x70023b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70023c:{NFSU2_TR(0x70023c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700241ull));
TAIL_STATIC(0x6ffd00u,6ff);
}
B700241:L700241:{c.instructions+=4;NFSU2_TR(0x700241);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B700244:{NFSU2_TR(0x700244);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B700247:{NFSU2_TR(0x700247);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70024b:{NFSU2_TR(0x70024b);
if(r1(R+518)){{goto L700253;}}
}
B70024d:L70024d:{c.instructions+=2;NFSU2_TR(0x70024d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700250:{NFSU2_TR(0x700250);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B700253:L700253:{c.instructions+=5;NFSU2_TR(0x700253);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B700256:{NFSU2_TR(0x700256);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700259:{NFSU2_TR(0x700259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70025c:{NFSU2_TR(0x70025c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70025f:{NFSU2_TR(0x70025f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70022cu);}goto L70022c;}}
}
B700261:L700261:{c.instructions+=1;NFSU2_TR(0x700261);
{goto L700492;}
}
B700266:L700266:{c.instructions+=2;NFSU2_TR(0x700266);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B700268:{NFSU2_TR(0x700268);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70026dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700059u);}goto L700059;}
}
B70026d:L70026d:{c.instructions+=3;NFSU2_TR(0x70026d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B700270:{NFSU2_TR(0x700270);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+28)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B700273:{NFSU2_TR(0x700273);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L7002bb;}}
}
B700275:L700275:{c.instructions+=4;NFSU2_TR(0x700275);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700278:{NFSU2_TR(0x700278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70027b:{NFSU2_TR(0x70027b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70027e:{NFSU2_TR(0x70027e);
{goto L700283;}
}
B700280:L700280:{c.instructions+=1;NFSU2_TR(0x700280);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700283:L700283:{c.instructions+=10;NFSU2_TR(0x700283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B700286:{NFSU2_TR(0x700286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B700289:{NFSU2_TR(0x700289);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70028a:{NFSU2_TR(0x70028a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70028d:{NFSU2_TR(0x70028d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70028e:{NFSU2_TR(0x70028e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B700290:{NFSU2_TR(0x700290);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700291:{NFSU2_TR(0x700291);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700292:{NFSU2_TR(0x700292);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700293:{NFSU2_TR(0x700293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700298ull));
TAIL_STATIC(0x6ffd4au,6ff);
}
B700298:L700298:{c.instructions+=5;NFSU2_TR(0x700298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70029b:{NFSU2_TR(0x70029b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B70029e:{NFSU2_TR(0x70029e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B7002a2:{NFSU2_TR(0x7002a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7002a5:{NFSU2_TR(0x7002a5);
if(r1(R+518)){{goto L7002ad;}}
}
B7002a7:L7002a7:{c.instructions+=2;NFSU2_TR(0x7002a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7002aa:{NFSU2_TR(0x7002aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B7002ad:L7002ad:{c.instructions+=5;NFSU2_TR(0x7002ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B7002b0:{NFSU2_TR(0x7002b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7002b3:{NFSU2_TR(0x7002b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7002b6:{NFSU2_TR(0x7002b6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7002b9:{NFSU2_TR(0x7002b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700280u);}goto L700280;}}
}
B7002bb:L7002bb:{c.instructions+=2;NFSU2_TR(0x7002bb);
w2(R+4260,u16(0xffffull));
}
B7002bd:{NFSU2_TR(0x7002bd);
{goto L700492;}
}
B7002c2:L7002c2:{c.instructions+=3;NFSU2_TR(0x7002c2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B7002c5:{NFSU2_TR(0x7002c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7002c6:{NFSU2_TR(0x7002c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7002cbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7000c0u);}goto L7000c0;}
}
B7002cb:L7002cb:{c.instructions+=4;NFSU2_TR(0x7002cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7002cf:{NFSU2_TR(0x7002cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7002d3:{NFSU2_TR(0x7002d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7002d4:{NFSU2_TR(0x7002d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70032c;}}
}
B7002d6:L7002d6:{c.instructions+=4;NFSU2_TR(0x7002d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7002d9:{NFSU2_TR(0x7002d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7002dc:{NFSU2_TR(0x7002dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7002df:{NFSU2_TR(0x7002df);
{goto L7002e4;}
}
B7002e1:L7002e1:{c.instructions+=1;NFSU2_TR(0x7002e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7002e4:L7002e4:{c.instructions+=9;NFSU2_TR(0x7002e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B7002e7:{NFSU2_TR(0x7002e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7002e8:{NFSU2_TR(0x7002e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7002eb:{NFSU2_TR(0x7002eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7002ec:{NFSU2_TR(0x7002ec);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B7002ee:{NFSU2_TR(0x7002ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7002ef:{NFSU2_TR(0x7002ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7002f0:{NFSU2_TR(0x7002f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7002f1:{NFSU2_TR(0x7002f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7002f6ull));
TAIL_STATIC(0x6ffdb4u,6ff);
}
B7002f6:L7002f6:{c.instructions+=4;NFSU2_TR(0x7002f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B7002f9:{NFSU2_TR(0x7002f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B7002fc:{NFSU2_TR(0x7002fc);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B700300:{NFSU2_TR(0x700300);
if(r1(R+518)){{goto L700308;}}
}
B700302:L700302:{c.instructions+=2;NFSU2_TR(0x700302);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700305:{NFSU2_TR(0x700305);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B700308:L700308:{c.instructions+=9;NFSU2_TR(0x700308);
__builtin_memmove((R+0),gp(0x8b12f8),4);
}
B70030d:{NFSU2_TR(0x70030d);
s4(0x8b1308,u32(u32(m4(0x8b1308))^u32(r4(R+0))));
}
B700313:{NFSU2_TR(0x700313);
__builtin_memmove((R+0),gp(0x8b12fc),4);
}
B700318:{NFSU2_TR(0x700318);
s4(0x8b130c,u32(u32(m4(0x8b130c))^u32(r4(R+0))));
}
B70031e:{NFSU2_TR(0x70031e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B700321:{NFSU2_TR(0x700321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700324:{NFSU2_TR(0x700324);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700327:{NFSU2_TR(0x700327);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70032a:{NFSU2_TR(0x70032a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7002e1u);}goto L7002e1;}}
}
B70032c:L70032c:{c.instructions+=2;NFSU2_TR(0x70032c);
w2(R+4260,u16(0xffffull));
}
B70032e:{NFSU2_TR(0x70032e);
{goto L700492;}
}
B700333:L700333:{c.instructions+=3;NFSU2_TR(0x700333);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B700336:{NFSU2_TR(0x700336);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700337:{NFSU2_TR(0x700337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70033cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7000c0u);}goto L7000c0;}
}
B70033c:L70033c:{c.instructions+=4;NFSU2_TR(0x70033c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700340:{NFSU2_TR(0x700340);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B700344:{NFSU2_TR(0x700344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700345:{NFSU2_TR(0x700345);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70039d;}}
}
B700347:L700347:{c.instructions+=4;NFSU2_TR(0x700347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70034a:{NFSU2_TR(0x70034a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B70034d:{NFSU2_TR(0x70034d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700350:{NFSU2_TR(0x700350);
{goto L700355;}
}
B700352:L700352:{c.instructions+=1;NFSU2_TR(0x700352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700355:L700355:{c.instructions+=9;NFSU2_TR(0x700355);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B700358:{NFSU2_TR(0x700358);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700359:{NFSU2_TR(0x700359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70035c:{NFSU2_TR(0x70035c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70035d:{NFSU2_TR(0x70035d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B70035f:{NFSU2_TR(0x70035f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700360:{NFSU2_TR(0x700360);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700361:{NFSU2_TR(0x700361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700362:{NFSU2_TR(0x700362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700367ull));
TAIL_STATIC(0x6ffe5au,6ff);
}
B700367:L700367:{c.instructions+=4;NFSU2_TR(0x700367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70036a:{NFSU2_TR(0x70036a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B70036d:{NFSU2_TR(0x70036d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B700371:{NFSU2_TR(0x700371);
if(r1(R+518)){{goto L700379;}}
}
B700373:L700373:{c.instructions+=2;NFSU2_TR(0x700373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700376:{NFSU2_TR(0x700376);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B700379:L700379:{c.instructions+=9;NFSU2_TR(0x700379);
__builtin_memmove((R+0),gp(0x8b12f8),4);
}
B70037e:{NFSU2_TR(0x70037e);
s4(0x8b1308,u32(u32(m4(0x8b1308))^u32(r4(R+0))));
}
B700384:{NFSU2_TR(0x700384);
__builtin_memmove((R+0),gp(0x8b12fc),4);
}
B700389:{NFSU2_TR(0x700389);
s4(0x8b130c,u32(u32(m4(0x8b130c))^u32(r4(R+0))));
}
B70038f:{NFSU2_TR(0x70038f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B700392:{NFSU2_TR(0x700392);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700395:{NFSU2_TR(0x700395);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700398:{NFSU2_TR(0x700398);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B70039b:{NFSU2_TR(0x70039b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700352u);}goto L700352;}}
}
B70039d:L70039d:{c.instructions+=2;NFSU2_TR(0x70039d);
w2(R+4260,u16(0xffffull));
}
B70039f:{NFSU2_TR(0x70039f);
{goto L700492;}
}
B7003a4:L7003a4:{c.instructions+=3;NFSU2_TR(0x7003a4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B7003a7:{NFSU2_TR(0x7003a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7003a8:{NFSU2_TR(0x7003a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7003adull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7000c0u);}goto L7000c0;}
}
B7003ad:L7003ad:{c.instructions+=10;NFSU2_TR(0x7003ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8b02f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7003b3:{NFSU2_TR(0x7003b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7003b4:{NFSU2_TR(0x7003b4);
w4(R+0,u32(0x8b02f0ull));
}
B7003b9:{NFSU2_TR(0x7003b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7003ba:{NFSU2_TR(0x7003ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7003bd:{NFSU2_TR(0x7003bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7003c0:{NFSU2_TR(0x7003c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7003c3:{NFSU2_TR(0x7003c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x8b1310ull));
s4(u32(r4(U+0)),r4(U+4));
}
B7003ca:{NFSU2_TR(0x7003ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7003cd:{NFSU2_TR(0x7003cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7003d2ull));
TAIL_STATIC(0x6ffd4au,6ff);
}
B7003d2:L7003d2:{c.instructions+=4;NFSU2_TR(0x7003d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7003d6:{NFSU2_TR(0x7003d6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B7003d9:{NFSU2_TR(0x7003d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x0ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B7003dd:{NFSU2_TR(0x7003dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L700490;}}
}
B7003e3:L7003e3:{c.instructions+=6;NFSU2_TR(0x7003e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B7003e6:{NFSU2_TR(0x7003e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7003e9:{NFSU2_TR(0x7003e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7003ec:{NFSU2_TR(0x7003ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B7003ef:{NFSU2_TR(0x7003ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7003f2:{NFSU2_TR(0x7003f2);
{goto L7003f7;}
}
B7003f4:L7003f4:{c.instructions+=1;NFSU2_TR(0x7003f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7003f7:L7003f7:{c.instructions+=10;NFSU2_TR(0x7003f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7003fa:{NFSU2_TR(0x7003fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B7003fd:{NFSU2_TR(0x7003fd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7003fe:{NFSU2_TR(0x7003fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7003ff:{NFSU2_TR(0x7003ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700402:{NFSU2_TR(0x700402);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B700404:{NFSU2_TR(0x700404);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700405:{NFSU2_TR(0x700405);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700406:{NFSU2_TR(0x700406);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700407:{NFSU2_TR(0x700407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70040cull));
TAIL_STATIC(0x6ffd4au,6ff);
}
B70040c:L70040c:{c.instructions+=4;NFSU2_TR(0x70040c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70040f:{NFSU2_TR(0x70040f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700410:{NFSU2_TR(0x700410);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700413:{NFSU2_TR(0x700413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700418ull));
TAIL_STATIC(0x6fff2bu,6ff);
}
B700418:L700418:{c.instructions+=12;NFSU2_TR(0x700418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70041b:{NFSU2_TR(0x70041b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70041e:{NFSU2_TR(0x70041e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700421:{NFSU2_TR(0x700421);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B700423:{NFSU2_TR(0x700423);
__builtin_memmove((R+0),gp(0x8b12f8),4);
}
B700428:{NFSU2_TR(0x700428);
s4(0x8b1308,u32(u32(m4(0x8b1308))^u32(r4(R+0))));
}
B70042e:{NFSU2_TR(0x70042e);
__builtin_memmove((R+0),gp(0x8b12fc),4);
}
B700433:{NFSU2_TR(0x700433);
s4(0x8b130c,u32(u32(m4(0x8b130c))^u32(r4(R+0))));
}
B700439:{NFSU2_TR(0x700439);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70043a:{NFSU2_TR(0x70043a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70043d:{NFSU2_TR(0x70043d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700440:{NFSU2_TR(0x700440);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700445ull));
TAIL_STATIC(0x6fffadu,6ff);
}
B700445:L700445:{c.instructions+=11;NFSU2_TR(0x700445);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700448:{NFSU2_TR(0x700448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70044b:{NFSU2_TR(0x70044b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B70044e:{NFSU2_TR(0x70044e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B700450:{NFSU2_TR(0x700450);
__builtin_memmove((R+0),gp(0x8b12f8),4);
}
B700455:{NFSU2_TR(0x700455);
s4(0x8b1308,u32(u32(m4(0x8b1308))^u32(r4(R+0))));
}
B70045b:{NFSU2_TR(0x70045b);
__builtin_memmove((R+0),gp(0x8b12fc),4);
}
B700460:{NFSU2_TR(0x700460);
s4(0x8b130c,u32(u32(m4(0x8b130c))^u32(r4(R+0))));
}
B700466:{NFSU2_TR(0x700466);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B700469:{NFSU2_TR(0x700469);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B70046d:{NFSU2_TR(0x70046d);
if(r1(R+518)){{goto L700475;}}
}
B70046f:L70046f:{c.instructions+=2;NFSU2_TR(0x70046f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700472:{NFSU2_TR(0x700472);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B700475:L700475:{c.instructions+=8;NFSU2_TR(0x700475);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700478:{NFSU2_TR(0x700478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70047b:{NFSU2_TR(0x70047b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70047e:{NFSU2_TR(0x70047e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700481:{NFSU2_TR(0x700481);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700484:{NFSU2_TR(0x700484);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B700487:{NFSU2_TR(0x700487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70048a:{NFSU2_TR(0x70048a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7003f4u);}goto L7003f4;}}
}
B700490:L700490:{c.instructions+=1;NFSU2_TR(0x700490);
w2(R+4260,u16(0xffffull));
}
B700492:L700492:{c.instructions+=1;NFSU2_TR(0x700492);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700493:L700493:{c.instructions+=1;NFSU2_TR(0x700493);
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
B700495:L700495:{c.instructions+=4;NFSU2_TR(0x700495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700496:{NFSU2_TR(0x700496);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B700497:{NFSU2_TR(0x700497);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700498:{NFSU2_TR(0x700498);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7004b9:L7004b9:{c.instructions+=8;NFSU2_TR(0x7004b9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7004ba:{NFSU2_TR(0x7004ba);
__builtin_memmove((R+20),(R+16),4);
}
B7004bc:{NFSU2_TR(0x7004bc);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7004bf:{NFSU2_TR(0x7004bf);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B7004c5:{NFSU2_TR(0x7004c5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7004c8:{NFSU2_TR(0x7004c8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7004ca:{NFSU2_TR(0x7004ca);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B7004cd:{NFSU2_TR(0x7004cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L7004d7;}}
}
B7004cf:L7004cf:{c.instructions+=2;NFSU2_TR(0x7004cf);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B7004d5:{NFSU2_TR(0x7004d5);
{goto L7004ed;}
}
B7004d7:L7004d7:{c.instructions+=4;NFSU2_TR(0x7004d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B7004dd:{NFSU2_TR(0x7004dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B7004df:{NFSU2_TR(0x7004df);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B7004e2:{NFSU2_TR(0x7004e2);
if(r1(R+514)){{goto L7004f3;}}
}
B7004e4:L7004e4:{c.instructions+=2;NFSU2_TR(0x7004e4);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7004e7:{NFSU2_TR(0x7004e7);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7004ed:L7004ed:{c.instructions+=2;NFSU2_TR(0x7004ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7004ee:{NFSU2_TR(0x7004ee);
TAIL_STATIC(0x75bed4u,75b);
}
B7004f3:L7004f3:{c.instructions+=3;NFSU2_TR(0x7004f3);
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
B7004f5:{NFSU2_TR(0x7004f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7004f6:{NFSU2_TR(0x7004f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7004f7:L7004f7:{c.instructions+=13;NFSU2_TR(0x7004f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7004f8:{NFSU2_TR(0x7004f8);
__builtin_memmove((R+20),(R+16),4);
}
B7004fa:{NFSU2_TR(0x7004fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7004fb:{NFSU2_TR(0x7004fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7004fc:{NFSU2_TR(0x7004fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7004fd:{NFSU2_TR(0x7004fd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7004fe:{NFSU2_TR(0x7004fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B700500:{NFSU2_TR(0x700500);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700501:{NFSU2_TR(0x700501);
w4(R+24,u32(0x8149e0ull));
}
B700506:{NFSU2_TR(0x700506);
w4(R+28,u32(0x8151e0ull));
}
B70050b:{NFSU2_TR(0x70050b);
w4(R+12,u32(0x8159e0ull));
}
B700510:{NFSU2_TR(0x700510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700513:{NFSU2_TR(0x700513);
{goto L700518;}
}
B700515:L700515:{c.instructions+=1;NFSU2_TR(0x700515);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700518:L700518:{c.instructions+=18;NFSU2_TR(0x700518);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B70051b:{NFSU2_TR(0x70051b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70051d:{NFSU2_TR(0x70051d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70051e:{NFSU2_TR(0x70051e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B700520:{NFSU2_TR(0x700520);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B700523:{NFSU2_TR(0x700523);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B700525:{NFSU2_TR(0x700525);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B700528:{NFSU2_TR(0x700528);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffff80ull))));
}
B70052b:{NFSU2_TR(0x70052b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70052e:{NFSU2_TR(0x70052e);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B700531:{NFSU2_TR(0x700531);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B700533:{NFSU2_TR(0x700533);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700534:{NFSU2_TR(0x700534);
u8 U[2];
w2(U+0,u16(0xffull));
s2(u32(r4(R+24)),r2(U+0));
}
B700539:{NFSU2_TR(0x700539);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B70053c:{NFSU2_TR(0x70053c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B70053e:{NFSU2_TR(0x70053e);
{u32 ea_=u32(u32(8140036u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B700544:{NFSU2_TR(0x700544);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B700547:{NFSU2_TR(0x700547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70054cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7004b9u);}goto L7004b9;}
}
B70054c:L70054c:{c.instructions+=7;NFSU2_TR(0x70054c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B70054f:{NFSU2_TR(0x70054f);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B700552:{NFSU2_TR(0x700552);
{u32 ea_=u32(u32(8140032u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B700558:{NFSU2_TR(0x700558);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B700559:{NFSU2_TR(0x700559);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70055a:{NFSU2_TR(0x70055a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B70055d:{NFSU2_TR(0x70055d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700562ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7004b9u);}goto L7004b9;}
}
B700562:L700562:{c.instructions+=15;NFSU2_TR(0x700562);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B700565:{NFSU2_TR(0x700565);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+28)),r2(U+0));
}
B700568:{NFSU2_TR(0x700568);
{u32 ea_=u32(u32(8140028u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B70056e:{NFSU2_TR(0x70056e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700570:{NFSU2_TR(0x700570);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700571:{NFSU2_TR(0x700571);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B700573:{NFSU2_TR(0x700573);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B700575:{NFSU2_TR(0x700575);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B700578:{NFSU2_TR(0x700578);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+28)),r2(U+0));
}
B70057b:{NFSU2_TR(0x70057b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70057d:{NFSU2_TR(0x70057d);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+28)),r2(U+0));
}
B700580:{NFSU2_TR(0x700580);
u8 U[2];
__builtin_memmove((U+0),(R+4),2);
s2(u32(r4(R+12)),r2(U+0));
}
B700583:{NFSU2_TR(0x700583);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B700585:{NFSU2_TR(0x700585);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B700587:{NFSU2_TR(0x700587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70058cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7004b9u);}goto L7004b9;}
}
B70058c:L70058c:{c.instructions+=7;NFSU2_TR(0x70058c);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B70058f:{NFSU2_TR(0x70058f);
{u32 ea_=u32(u32(8140024u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B700595:{NFSU2_TR(0x700595);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B700598:{NFSU2_TR(0x700598);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B700599:{NFSU2_TR(0x700599);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B70059a:{NFSU2_TR(0x70059a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B70059d:{NFSU2_TR(0x70059d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7005a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7004b9u);}goto L7004b9;}
}
B7005a2:L7005a2:{c.instructions+=10;NFSU2_TR(0x7005a2);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+12)),r2(U+0));
}
B7005a5:{NFSU2_TR(0x7005a5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7005a6:{NFSU2_TR(0x7005a6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7005a7:{NFSU2_TR(0x7005a7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+12)),r2(U+0));
}
B7005ab:{NFSU2_TR(0x7005ab);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7005ac:{NFSU2_TR(0x7005ac);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B7005ad:{NFSU2_TR(0x7005ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7005b0:{NFSU2_TR(0x7005b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x100ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B7005b7:{NFSU2_TR(0x7005b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7005b8:{NFSU2_TR(0x7005b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700515u);}goto L700515;}}
}
B7005be:L7005be:{c.instructions+=6;NFSU2_TR(0x7005be);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b2318,u32(u32(m4(0x8b2318))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8b2318))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b2318))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b2318))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7005c5:{NFSU2_TR(0x7005c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7005c6:{NFSU2_TR(0x7005c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7005c7:{NFSU2_TR(0x7005c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B7005c8:{NFSU2_TR(0x7005c8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7005c9:{NFSU2_TR(0x7005c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7005ca:L7005ca:{c.instructions+=7;NFSU2_TR(0x7005ca);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7005cb:{NFSU2_TR(0x7005cb);
__builtin_memmove((R+20),(R+16),4);
}
B7005cd:{NFSU2_TR(0x7005cd);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7005d1:{NFSU2_TR(0x7005d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7005d2:{NFSU2_TR(0x7005d2);
__builtin_memmove((R+24),(R+4),4);
}
B7005d4:{NFSU2_TR(0x7005d4);
u8 U[4];
w4(U+0,u32(0x7c3508ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7005da:{NFSU2_TR(0x7005da);
if(r1(R+518)){{goto L7005e3;}}
}
B7005dc:L7005dc:{c.instructions+=2;NFSU2_TR(0x7005dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7005dd:{NFSU2_TR(0x7005dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7005e2ull));
TAIL_STATIC(0x575630u,575);
}
B7005e2:L7005e2:{c.instructions+=1;NFSU2_TR(0x7005e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7005e3:L7005e3:{c.instructions+=4;NFSU2_TR(0x7005e3);
__builtin_memmove((R+0),(R+24),4);
}
B7005e5:{NFSU2_TR(0x7005e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7005e6:{NFSU2_TR(0x7005e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7005e7:{NFSU2_TR(0x7005e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7005fb:L7005fb:{c.instructions+=12;NFSU2_TR(0x7005fb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7005fc:{NFSU2_TR(0x7005fc);
__builtin_memmove((R+20),(R+16),4);
}
B7005fe:{NFSU2_TR(0x7005fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B700601:{NFSU2_TR(0x700601);
__builtin_memmove((R+0),(R+4),4);
}
B700603:{NFSU2_TR(0x700603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700606:{NFSU2_TR(0x700606);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700607:{NFSU2_TR(0x700607);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700608:{NFSU2_TR(0x700608);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70060b:{NFSU2_TR(0x70060b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70060e:{NFSU2_TR(0x70060e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B700610:{NFSU2_TR(0x700610);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700611:{NFSU2_TR(0x700611);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700614ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B700614:L700614:{c.instructions+=3;NFSU2_TR(0x700614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700615:{NFSU2_TR(0x700615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700616:{NFSU2_TR(0x700616);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700619:L700619:{c.instructions+=5;NFSU2_TR(0x700619);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70061a:{NFSU2_TR(0x70061a);
__builtin_memmove((R+24),(R+4),4);
}
B70061c:{NFSU2_TR(0x70061c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70061f:{NFSU2_TR(0x70061f);
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
B700621:{NFSU2_TR(0x700621);
if(r1(R+518)){{goto L70062d;}}
}
B700623:L700623:{c.instructions+=3;NFSU2_TR(0x700623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700625:{NFSU2_TR(0x700625);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700627:{NFSU2_TR(0x700627);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700629ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B700629:L700629:{c.instructions+=1;NFSU2_TR(0x700629);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B70062d:L70062d:{c.instructions+=2;NFSU2_TR(0x70062d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70062e:{NFSU2_TR(0x70062e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70062f:L70062f:{c.instructions+=2;NFSU2_TR(0x70062f);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B700633:{NFSU2_TR(0x700633);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L700638;}}
}
B700635:L700635:{c.instructions+=2;NFSU2_TR(0x700635);
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
B700637:{NFSU2_TR(0x700637);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700638:L700638:{c.instructions+=3;NFSU2_TR(0x700638);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70063b:{NFSU2_TR(0x70063b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70063d:{NFSU2_TR(0x70063d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B700640:L700640:{c.instructions+=2;NFSU2_TR(0x700640);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B700644:{NFSU2_TR(0x700644);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70064d;}}
}
B700646:L700646:{c.instructions+=2;NFSU2_TR(0x700646);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B70064c:{NFSU2_TR(0x70064c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70064d:L70064d:{c.instructions+=3;NFSU2_TR(0x70064d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700650:{NFSU2_TR(0x700650);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700652:{NFSU2_TR(0x700652);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B700655:L700655:{c.instructions+=6;NFSU2_TR(0x700655);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700656:{NFSU2_TR(0x700656);
__builtin_memmove((R+20),(R+16),4);
}
B700658:{NFSU2_TR(0x700658);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700659:{NFSU2_TR(0x700659);
__builtin_memmove((R+24),(R+4),4);
}
B70065b:{NFSU2_TR(0x70065b);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B70065f:{NFSU2_TR(0x70065f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L700681;}}
}
B700661:L700661:{c.instructions+=3;NFSU2_TR(0x700661);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700664:{NFSU2_TR(0x700664);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B700667:{NFSU2_TR(0x700667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L700674;}}
}
B700669:L700669:{c.instructions+=4;NFSU2_TR(0x700669);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70066a:{NFSU2_TR(0x70066a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70066d:{NFSU2_TR(0x70066d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70066e:{NFSU2_TR(0x70066e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700671ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B700671:L700671:{c.instructions+=1;NFSU2_TR(0x700671);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B700674:L700674:{c.instructions+=2;NFSU2_TR(0x700674);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B700678:{NFSU2_TR(0x700678);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L700681;}}
}
B70067a:L70067a:{c.instructions+=4;NFSU2_TR(0x70067a);
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
B70067c:{NFSU2_TR(0x70067c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70067d:{NFSU2_TR(0x70067d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70067e:{NFSU2_TR(0x70067e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700681:L700681:{c.instructions+=5;NFSU2_TR(0x700681);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700684:{NFSU2_TR(0x700684);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700686:{NFSU2_TR(0x700686);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700687:{NFSU2_TR(0x700687);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700688:{NFSU2_TR(0x700688);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B70068b:L70068b:{c.instructions+=6;NFSU2_TR(0x70068b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70068c:{NFSU2_TR(0x70068c);
__builtin_memmove((R+20),(R+16),4);
}
B70068e:{NFSU2_TR(0x70068e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700691:{NFSU2_TR(0x700691);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700693:{NFSU2_TR(0x700693);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700694:{NFSU2_TR(0x700694);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B700697:L700697:{c.instructions+=6;NFSU2_TR(0x700697);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700698:{NFSU2_TR(0x700698);
__builtin_memmove((R+20),(R+16),4);
}
B70069a:{NFSU2_TR(0x70069a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70069b:{NFSU2_TR(0x70069b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70069e:{NFSU2_TR(0x70069e);
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
B7006a0:{NFSU2_TR(0x7006a0);
if(r1(R+518)){{goto L7006a8;}}
}
B7006a2:L7006a2:{c.instructions+=3;NFSU2_TR(0x7006a2);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
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
B7006a6:{NFSU2_TR(0x7006a6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7006a7:{NFSU2_TR(0x7006a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7006a8:L7006a8:{c.instructions+=5;NFSU2_TR(0x7006a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7006ab:{NFSU2_TR(0x7006ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7006ac:{NFSU2_TR(0x7006ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7006af:{NFSU2_TR(0x7006af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7006b0:{NFSU2_TR(0x7006b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7006b3ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7006b3:L7006b3:{c.instructions+=4;NFSU2_TR(0x7006b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7006b6:{NFSU2_TR(0x7006b6);
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
B7006b9:{NFSU2_TR(0x7006b9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B7006ba:{NFSU2_TR(0x7006ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7006bb:L7006bb:{c.instructions+=6;NFSU2_TR(0x7006bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7006bc:{NFSU2_TR(0x7006bc);
__builtin_memmove((R+20),(R+16),4);
}
B7006be:{NFSU2_TR(0x7006be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7006c1:{NFSU2_TR(0x7006c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7006c4:{NFSU2_TR(0x7006c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7006c5:{NFSU2_TR(0x7006c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7006c8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B7006c8:L7006c8:{c.instructions+=3;NFSU2_TR(0x7006c8);
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
B7006cb:{NFSU2_TR(0x7006cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7006cc:{NFSU2_TR(0x7006cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7006cf:L7006cf:{c.instructions+=6;NFSU2_TR(0x7006cf);
__builtin_memmove((R+0),(R+4),4);
}
B7006d1:{NFSU2_TR(0x7006d1);
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
B7006d3:{NFSU2_TR(0x7006d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7006d6:{NFSU2_TR(0x7006d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7006d9:{NFSU2_TR(0x7006d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7006db:{NFSU2_TR(0x7006db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7006f0:L7006f0:{c.instructions+=13;NFSU2_TR(0x7006f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7006f1:{NFSU2_TR(0x7006f1);
__builtin_memmove((R+20),(R+16),4);
}
B7006f3:{NFSU2_TR(0x7006f3);
__builtin_memmove((R+0),(R+4),4);
}
B7006f5:{NFSU2_TR(0x7006f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7006f8:{NFSU2_TR(0x7006f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7006fb:{NFSU2_TR(0x7006fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7006fe:{NFSU2_TR(0x7006fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700700:{NFSU2_TR(0x700700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700703:{NFSU2_TR(0x700703);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700706:{NFSU2_TR(0x700706);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700709:{NFSU2_TR(0x700709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70070c:{NFSU2_TR(0x70070c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70070d:{NFSU2_TR(0x70070d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700710:L700710:{c.instructions+=23;NFSU2_TR(0x700710);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700711:{NFSU2_TR(0x700711);
__builtin_memmove((R+20),(R+16),4);
}
B700713:{NFSU2_TR(0x700713);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700714:{NFSU2_TR(0x700714);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700717:{NFSU2_TR(0x700717);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700718:{NFSU2_TR(0x700718);
__builtin_memmove((R+0),(R+4),4);
}
B70071a:{NFSU2_TR(0x70071a);
u8 U[4];
w4(U+0,u32(0x7c350cull));
s4(u32(r4(R+0)),r4(U+0));
}
B700720:{NFSU2_TR(0x700720);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700723:{NFSU2_TR(0x700723);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70072a:{NFSU2_TR(0x70072a);
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
B70072c:{NFSU2_TR(0x70072c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B70072e:{NFSU2_TR(0x70072e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700731:{NFSU2_TR(0x700731);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700734:{NFSU2_TR(0x700734);
u8 U[40];
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
}
B700735:{NFSU2_TR(0x700735);
u8 U[40];
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
}
B700736:{NFSU2_TR(0x700736);
u8 U[40];
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
}
B700737:{NFSU2_TR(0x700737);
u8 U[40];
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
}
B700738:{NFSU2_TR(0x700738);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700739:{NFSU2_TR(0x700739);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70073c:{NFSU2_TR(0x70073c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70073f:{NFSU2_TR(0x70073f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700740:{NFSU2_TR(0x700740);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700741:{NFSU2_TR(0x700741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70074f:L70074f:{c.instructions+=6;NFSU2_TR(0x70074f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700750:{NFSU2_TR(0x700750);
__builtin_memmove((R+20),(R+16),4);
}
B700752:{NFSU2_TR(0x700752);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700753:{NFSU2_TR(0x700753);
__builtin_memmove((R+24),(R+4),4);
}
B700755:{NFSU2_TR(0x700755);
u8 U[4];
w4(U+0,u32(0x7c350cull));
s4(u32(r4(R+24)),r4(U+0));
}
B70075b:{NFSU2_TR(0x70075b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700760ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700619u);}goto L700619;}
}
B700760:L700760:{c.instructions+=2;NFSU2_TR(0x700760);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B700764:{NFSU2_TR(0x700764);
if(r1(R+518)){{goto L70076e;}}
}
B700766:L700766:{c.instructions+=2;NFSU2_TR(0x700766);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700767:{NFSU2_TR(0x700767);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70076dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70076d:L70076d:{c.instructions+=1;NFSU2_TR(0x70076d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70076e:L70076e:{c.instructions+=4;NFSU2_TR(0x70076e);
__builtin_memmove((R+0),(R+24),4);
}
B700770:{NFSU2_TR(0x700770);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700771:{NFSU2_TR(0x700771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700772:{NFSU2_TR(0x700772);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700775:L700775:{c.instructions+=5;NFSU2_TR(0x700775);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700776:{NFSU2_TR(0x700776);
__builtin_memmove((R+20),(R+16),4);
}
B700778:{NFSU2_TR(0x700778);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700779:{NFSU2_TR(0x700779);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B70077d:{NFSU2_TR(0x70077d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700782ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B700782:L700782:{c.instructions+=4;NFSU2_TR(0x700782);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700785:{NFSU2_TR(0x700785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700786:{NFSU2_TR(0x700786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700787:{NFSU2_TR(0x700787);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70078a:L70078a:{c.instructions+=5;NFSU2_TR(0x70078a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70078b:{NFSU2_TR(0x70078b);
__builtin_memmove((R+20),(R+16),4);
}
B70078d:{NFSU2_TR(0x70078d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70078e:{NFSU2_TR(0x70078e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B700792:{NFSU2_TR(0x700792);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700797ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B700797:L700797:{c.instructions+=4;NFSU2_TR(0x700797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70079a:{NFSU2_TR(0x70079a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70079b:{NFSU2_TR(0x70079b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70079c:{NFSU2_TR(0x70079c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70079f:L70079f:{c.instructions+=7;NFSU2_TR(0x70079f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007a0:{NFSU2_TR(0x7007a0);
__builtin_memmove((R+20),(R+16),4);
}
B7007a2:{NFSU2_TR(0x7007a2);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B7007a6:{NFSU2_TR(0x7007a6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007a7:{NFSU2_TR(0x7007a7);
__builtin_memmove((R+24),(R+4),4);
}
B7007a9:{NFSU2_TR(0x7007a9);
u8 U[4];
w4(U+0,u32(0x7c3510ull));
s4(u32(r4(R+24)),r4(U+0));
}
B7007af:{NFSU2_TR(0x7007af);
if(r1(R+518)){{goto L7007b9;}}
}
B7007b1:L7007b1:{c.instructions+=2;NFSU2_TR(0x7007b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007b2:{NFSU2_TR(0x7007b2);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7007b8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B7007b8:L7007b8:{c.instructions+=1;NFSU2_TR(0x7007b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7007b9:L7007b9:{c.instructions+=4;NFSU2_TR(0x7007b9);
__builtin_memmove((R+0),(R+24),4);
}
B7007bb:{NFSU2_TR(0x7007bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7007bc:{NFSU2_TR(0x7007bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7007bd:{NFSU2_TR(0x7007bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7007c0:L7007c0:{c.instructions+=2;NFSU2_TR(0x7007c0);
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
B7007c2:{NFSU2_TR(0x7007c2);
if(r1(R+518)){{goto L7007d1;}}
}
B7007c4:L7007c4:{c.instructions+=3;NFSU2_TR(0x7007c4);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007c6:{NFSU2_TR(0x7007c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7007c9:{NFSU2_TR(0x7007c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7007ceull));
TAIL_STATIC(0x6fe486u,6fe);
}
B7007ce:L7007ce:{c.instructions+=3;NFSU2_TR(0x7007ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7007cf:{NFSU2_TR(0x7007cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7007d0:{NFSU2_TR(0x7007d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7007d1:L7007d1:{c.instructions+=2;NFSU2_TR(0x7007d1);
w4(R+0,u32(0x4d56304bull));
}
B7007d6:{NFSU2_TR(0x7007d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7007d7:L7007d7:{c.instructions+=9;NFSU2_TR(0x7007d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007d8:{NFSU2_TR(0x7007d8);
__builtin_memmove((R+20),(R+16),4);
}
B7007da:{NFSU2_TR(0x7007da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7007dd:{NFSU2_TR(0x7007dd);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
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
B7007e1:{NFSU2_TR(0x7007e1);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007e3:{NFSU2_TR(0x7007e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7007e6:{NFSU2_TR(0x7007e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7007e7:{NFSU2_TR(0x7007e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7007e8:{NFSU2_TR(0x7007e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7007eb:L7007eb:{c.instructions+=2;NFSU2_TR(0x7007eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7007ee:{NFSU2_TR(0x7007ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7007ef:L7007ef:{c.instructions+=2;NFSU2_TR(0x7007ef);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7007f2:{NFSU2_TR(0x7007f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7007f3:L7007f3:{c.instructions+=6;NFSU2_TR(0x7007f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007f4:{NFSU2_TR(0x7007f4);
__builtin_memmove((R+20),(R+16),4);
}
B7007f6:{NFSU2_TR(0x7007f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7007f7:{NFSU2_TR(0x7007f7);
__builtin_memmove((R+24),(R+4),4);
}
B7007f9:{NFSU2_TR(0x7007f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7007fc:{NFSU2_TR(0x7007fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700801ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700697u);}goto L700697;}
}
B700801:L700801:{c.instructions+=6;NFSU2_TR(0x700801);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700804:{NFSU2_TR(0x700804);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B700806:{NFSU2_TR(0x700806);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B700809:{NFSU2_TR(0x700809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70080a:{NFSU2_TR(0x70080a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70080b:{NFSU2_TR(0x70080b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70080e:L70080e:{c.instructions+=4;NFSU2_TR(0x70080e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70080f:{NFSU2_TR(0x70080f);
__builtin_memmove((R+20),(R+16),4);
}
B700811:{NFSU2_TR(0x700811);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B700815:{NFSU2_TR(0x700815);
if(r1(R+518)){{goto L700820;}}
}
B700817:L700817:{c.instructions+=3;NFSU2_TR(0x700817);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70081a:{NFSU2_TR(0x70081a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70081b:{NFSU2_TR(0x70081b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7006bbu);}goto L7006bb;}
}
B700820:L700820:{c.instructions+=2;NFSU2_TR(0x700820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700821:{NFSU2_TR(0x700821);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700824:L700824:{c.instructions+=13;NFSU2_TR(0x700824);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700825:{NFSU2_TR(0x700825);
__builtin_memmove((R+20),(R+16),4);
}
B700827:{NFSU2_TR(0x700827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B70082d:{NFSU2_TR(0x70082d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70082e:{NFSU2_TR(0x70082e);
__builtin_memmove((R+24),(R+4),4);
}
B700830:{NFSU2_TR(0x700830);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700832:{NFSU2_TR(0x700832);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700833:{NFSU2_TR(0x700833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700836:{NFSU2_TR(0x700836);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700839:{NFSU2_TR(0x700839);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70083d:{NFSU2_TR(0x70083d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700843:{NFSU2_TR(0x700843);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700845:{NFSU2_TR(0x700845);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70084aull));
TAIL_STATIC(0x6f4aa0u,6f4);
}
B70084a:L70084a:{c.instructions+=11;NFSU2_TR(0x70084a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70084d:{NFSU2_TR(0x70084d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700853:{NFSU2_TR(0x700853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700859:{NFSU2_TR(0x700859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70085c:{NFSU2_TR(0x70085c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700862:{NFSU2_TR(0x700862);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700868:{NFSU2_TR(0x700868);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700869:{NFSU2_TR(0x700869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700873:{NFSU2_TR(0x700873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
w4(U+4,u32(0x6cull));
s4(u32(r4(U+0)),r4(U+4));
}
B70087d:{NFSU2_TR(0x70087d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700884:{NFSU2_TR(0x700884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700889ull));
TAIL_STATIC(0x6f5320u,6f5);
}
B700889:L700889:{c.instructions+=7;NFSU2_TR(0x700889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70088a:{NFSU2_TR(0x70088a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70088d:{NFSU2_TR(0x70088d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70088e:{NFSU2_TR(0x70088e);
__builtin_memmove((R+0),(R+24),4);
}
B700890:{NFSU2_TR(0x700890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700891:{NFSU2_TR(0x700891);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700892:{NFSU2_TR(0x700892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700895:L700895:{c.instructions+=5;NFSU2_TR(0x700895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700896:{NFSU2_TR(0x700896);
__builtin_memmove((R+24),(R+4),4);
}
B700898:{NFSU2_TR(0x700898);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70089b:{NFSU2_TR(0x70089b);
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
B70089d:{NFSU2_TR(0x70089d);
if(r1(R+518)){{goto L7008aa;}}
}
B70089f:L70089f:{c.instructions+=2;NFSU2_TR(0x70089f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7008a0:{NFSU2_TR(0x7008a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7008a5ull));
TAIL_STATIC(0x6f4940u,6f4);
}
B7008a5:L7008a5:{c.instructions+=2;NFSU2_TR(0x7008a5);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B7008a9:{NFSU2_TR(0x7008a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7008aa:L7008aa:{c.instructions+=6;NFSU2_TR(0x7008aa);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7008ac:{NFSU2_TR(0x7008ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7008ad:{NFSU2_TR(0x7008ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7008b0:{NFSU2_TR(0x7008b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7008b3:{NFSU2_TR(0x7008b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7008b4:{NFSU2_TR(0x7008b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7008b5:L7008b5:{c.instructions+=6;NFSU2_TR(0x7008b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7008b6:{NFSU2_TR(0x7008b6);
__builtin_memmove((R+20),(R+16),4);
}
B7008b8:{NFSU2_TR(0x7008b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7008bb:{NFSU2_TR(0x7008bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7008be:{NFSU2_TR(0x7008be);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B7008c2:{NFSU2_TR(0x7008c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L7008eb;}}
}
B7008c4:L7008c4:{c.instructions+=17;NFSU2_TR(0x7008c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B7008c7:{NFSU2_TR(0x7008c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7008c9:{NFSU2_TR(0x7008c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7008ca:{NFSU2_TR(0x7008ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7008cd:{NFSU2_TR(0x7008cd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B7008cf:{NFSU2_TR(0x7008cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7008d2:{NFSU2_TR(0x7008d2);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7008d4:{NFSU2_TR(0x7008d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B7008d5:{NFSU2_TR(0x7008d5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7008d7:{NFSU2_TR(0x7008d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7008da:{NFSU2_TR(0x7008da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7008dd:{NFSU2_TR(0x7008dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x2cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7008e0:{NFSU2_TR(0x7008e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7008e2:{NFSU2_TR(0x7008e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7008e5:{NFSU2_TR(0x7008e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7008e8:{NFSU2_TR(0x7008e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7008ea:{NFSU2_TR(0x7008ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B7008eb:L7008eb:{c.instructions+=2;NFSU2_TR(0x7008eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7008ec:{NFSU2_TR(0x7008ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7008ef:L7008ef:{c.instructions+=3;NFSU2_TR(0x7008ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B7008f2:{NFSU2_TR(0x7008f2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7008f4:{NFSU2_TR(0x7008f4);
if(r1(R+518)){{goto L700932;}}
}
B7008f6:L7008f6:{c.instructions+=25;NFSU2_TR(0x7008f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7008f8:{NFSU2_TR(0x7008f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7008fa:{NFSU2_TR(0x7008fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7008fb:{NFSU2_TR(0x7008fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7008fe:{NFSU2_TR(0x7008fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700900:{NFSU2_TR(0x700900);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700903:{NFSU2_TR(0x700903);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700905:{NFSU2_TR(0x700905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700906:{NFSU2_TR(0x700906);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700908:{NFSU2_TR(0x700908);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70090b:{NFSU2_TR(0x70090b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B70090e:{NFSU2_TR(0x70090e);
__builtin_memmove((R+8),(R+0),4);
}
B700910:{NFSU2_TR(0x700910);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B700912:{NFSU2_TR(0x700912);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700915:{NFSU2_TR(0x700915);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B700917:{NFSU2_TR(0x700917);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B700919:{NFSU2_TR(0x700919);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70091c:{NFSU2_TR(0x70091c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x24ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70091f:{NFSU2_TR(0x70091f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700921:{NFSU2_TR(0x700921);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700924:{NFSU2_TR(0x700924);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700927:{NFSU2_TR(0x700927);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700929:{NFSU2_TR(0x700929);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700930:{NFSU2_TR(0x700930);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700931:{NFSU2_TR(0x700931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700932:L700932:{c.instructions+=2;NFSU2_TR(0x700932);
u8 U[4];
w4(U+0,u32(0x7c3550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700937:{NFSU2_TR(0x700937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70093cull));
TAIL_STATIC(0x770fedu,770);
}
B70093c:L70093c:{c.instructions+=3;NFSU2_TR(0x70093c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70093d:{NFSU2_TR(0x70093d);
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
B70093f:{NFSU2_TR(0x70093f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700940:L700940:{c.instructions+=22;NFSU2_TR(0x700940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700941:{NFSU2_TR(0x700941);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B700943:{NFSU2_TR(0x700943);
__builtin_memmove((R+24),(R+4),4);
}
B700945:{NFSU2_TR(0x700945);
u8 U[4];
w4(U+0,u32(0x7c35b8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B70094b:{NFSU2_TR(0x70094b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+0),(U+0),4);
}
B70094e:{NFSU2_TR(0x70094e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700950:{NFSU2_TR(0x700950);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700953:{NFSU2_TR(0x700953);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B700956:{NFSU2_TR(0x700956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700958:{NFSU2_TR(0x700958);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70095b:{NFSU2_TR(0x70095b);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B70095e:{NFSU2_TR(0x70095e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B700960:{NFSU2_TR(0x700960);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700967:{NFSU2_TR(0x700967);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70096a:{NFSU2_TR(0x70096a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70096d:{NFSU2_TR(0x70096d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700970:{NFSU2_TR(0x700970);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700973:{NFSU2_TR(0x700973);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700976:{NFSU2_TR(0x700976);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8b2320,u32(u32(m4(0x8b2320))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(m4(0x8b2320))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8b2320))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8b2320))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70097d:{NFSU2_TR(0x70097d);
u8 U[4];
w4(U+0,u32(0x8161f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700982:{NFSU2_TR(0x700982);
__builtin_memmove(gp(0x8b231c),(R+0),4);
}
B700987:{NFSU2_TR(0x700987);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70098cull));
TAIL_STATIC(0x70246cu,702);
}
B70098c:L70098c:{c.instructions+=2;NFSU2_TR(0x70098c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70098d:{NFSU2_TR(0x70098d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700992ull));
TAIL_STATIC(0x702421u,702);
}
B700992:L700992:{c.instructions+=3;NFSU2_TR(0x700992);
__builtin_memmove((R+0),(R+24),4);
}
B700994:{NFSU2_TR(0x700994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700995:{NFSU2_TR(0x700995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700996:L700996:{c.instructions+=14;NFSU2_TR(0x700996);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700997:{NFSU2_TR(0x700997);
__builtin_memmove((R+20),(R+16),4);
}
B700999:{NFSU2_TR(0x700999);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70099a:{NFSU2_TR(0x70099a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70099b:{NFSU2_TR(0x70099b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70099c:{NFSU2_TR(0x70099c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70099f:{NFSU2_TR(0x70099f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7009a0:{NFSU2_TR(0x7009a0);
u8 U[4];
w4(U+0,u32(0x7c35b8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B7009a6:{NFSU2_TR(0x7009a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7009a8:{NFSU2_TR(0x7009a8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B7009aa:{NFSU2_TR(0x7009aa);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7009ac:{NFSU2_TR(0x7009ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7009af:{NFSU2_TR(0x7009af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B7009b0:{NFSU2_TR(0x7009b0);
if(r1(R+518)){{goto L7009d8;}}
}
B7009b2:L7009b2:{c.instructions+=9;NFSU2_TR(0x7009b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7009b4:{NFSU2_TR(0x7009b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B7009b6:{NFSU2_TR(0x7009b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B7009b9:{NFSU2_TR(0x7009b9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B7009bb:{NFSU2_TR(0x7009bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7009be:{NFSU2_TR(0x7009be);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7009c0:{NFSU2_TR(0x7009c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B7009c3:{NFSU2_TR(0x7009c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7009c6:{NFSU2_TR(0x7009c6);
if(r1(R+518)){{goto L7009d4;}}
}
B7009c8:L7009c8:{c.instructions+=3;NFSU2_TR(0x7009c8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7009ca:{NFSU2_TR(0x7009ca);
__builtin_memmove((R+4),(R+0),4);
}
B7009cc:{NFSU2_TR(0x7009cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7009d1ull));
{goto L700d07;}
}
B7009d1:L7009d1:{c.instructions+=1;NFSU2_TR(0x7009d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7009d4:L7009d4:{c.instructions+=2;NFSU2_TR(0x7009d4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7009d6:{NFSU2_TR(0x7009d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7009b2u);}goto L7009b2;}}
}
B7009d8:L7009d8:{c.instructions+=3;NFSU2_TR(0x7009d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((R+12),(U+0),4);
}
B7009db:{NFSU2_TR(0x7009db);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B7009dd:{NFSU2_TR(0x7009dd);
if(r1(R+518)){{goto L700a05;}}
}
B7009df:L7009df:{c.instructions+=10;NFSU2_TR(0x7009df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B7009e1:{NFSU2_TR(0x7009e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B7009e3:{NFSU2_TR(0x7009e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B7009e6:{NFSU2_TR(0x7009e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B7009e8:{NFSU2_TR(0x7009e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7009eb:{NFSU2_TR(0x7009eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7009ee:{NFSU2_TR(0x7009ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B7009f0:{NFSU2_TR(0x7009f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7009f2:{NFSU2_TR(0x7009f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7009f5:{NFSU2_TR(0x7009f5);
if(r1(R+518)){{goto L7009fe;}}
}
B7009f7:L7009f7:{c.instructions+=2;NFSU2_TR(0x7009f7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7009f9:{NFSU2_TR(0x7009f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7009feull));
{goto L700d07;}
}
B7009fe:L7009fe:{c.instructions+=2;NFSU2_TR(0x7009fe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B700a00:{NFSU2_TR(0x700a00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7009dfu);}goto L7009df;}}
}
B700a02:L700a02:{c.instructions+=1;NFSU2_TR(0x700a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700a05:L700a05:{c.instructions+=3;NFSU2_TR(0x700a05);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B700a08:{NFSU2_TR(0x700a08);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a09:{NFSU2_TR(0x700a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a0eull));
TAIL_STATIC(0x702e5eu,702);
}
B700a0e:L700a0e:{c.instructions+=2;NFSU2_TR(0x700a0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700a0f:{NFSU2_TR(0x700a0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a14ull));
TAIL_STATIC(0x70246bu,702);
}
B700a14:L700a14:{c.instructions+=13;NFSU2_TR(0x700a14);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a16:{NFSU2_TR(0x700a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700a17:{NFSU2_TR(0x700a17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B700a19:{NFSU2_TR(0x700a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700a1c:{NFSU2_TR(0x700a1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700a1e:{NFSU2_TR(0x700a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700a21:{NFSU2_TR(0x700a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700a24:{NFSU2_TR(0x700a24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700a25:{NFSU2_TR(0x700a25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700a26:{NFSU2_TR(0x700a26);
u8 U[4];
w4(U+0,u32(0x7c3510ull));
s4(u32(r4(R+0)),r4(U+0));
}
B700a2c:{NFSU2_TR(0x700a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B700a2d:{NFSU2_TR(0x700a2d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700a2e:{NFSU2_TR(0x700a2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700a2f:L700a2f:{c.instructions+=10;NFSU2_TR(0x700a2f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a30:{NFSU2_TR(0x700a30);
__builtin_memmove((R+20),(R+16),4);
}
B700a32:{NFSU2_TR(0x700a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B700a35:{NFSU2_TR(0x700a35);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a36:{NFSU2_TR(0x700a36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a37:{NFSU2_TR(0x700a37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a38:{NFSU2_TR(0x700a38);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a3a:{NFSU2_TR(0x700a3a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a3c:{NFSU2_TR(0x700a3c);
__builtin_memmove((R+24),(R+4),4);
}
B700a3e:{NFSU2_TR(0x700a3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a43ull));
TAIL_STATIC(0x75db38u,75d);
}
B700a43:L700a43:{c.instructions+=4;NFSU2_TR(0x700a43);
u8 U[4];
w4(U+0,u32(0x30000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a48:{NFSU2_TR(0x700a48);
u8 U[4];
w4(U+0,u32(0x10000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a4d:{NFSU2_TR(0x700a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700a50:{NFSU2_TR(0x700a50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a55ull));
TAIL_STATIC(0x75db38u,75d);
}
B700a55:L700a55:{c.instructions+=3;NFSU2_TR(0x700a55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B700a58:{NFSU2_TR(0x700a58);
__builtin_memmove((R+4),(R+24),4);
}
B700a5a:{NFSU2_TR(0x700a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a5full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7008efu);}goto L7008ef;}
}
B700a5f:L700a5f:{c.instructions+=13;NFSU2_TR(0x700a5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700a62:{NFSU2_TR(0x700a62);
__builtin_memmove((R+12),(R+0),4);
}
B700a64:{NFSU2_TR(0x700a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700a67:{NFSU2_TR(0x700a67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700a6a:{NFSU2_TR(0x700a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700a6d:{NFSU2_TR(0x700a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700a70:{NFSU2_TR(0x700a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B700a73:{NFSU2_TR(0x700a73);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B700a76:{NFSU2_TR(0x700a76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a77:{NFSU2_TR(0x700a77);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B700a7a:{NFSU2_TR(0x700a7a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a7b:{NFSU2_TR(0x700a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700a7e:{NFSU2_TR(0x700a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a83ull));
TAIL_STATIC(0x702e47u,702);
}
B700a83:L700a83:{c.instructions+=4;NFSU2_TR(0x700a83);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700a86:{NFSU2_TR(0x700a86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700a87:{NFSU2_TR(0x700a87);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700a8a:{NFSU2_TR(0x700a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700a8full));
TAIL_STATIC(0x70288eu,702);
}
B700a8f:L700a8f:{c.instructions+=15;NFSU2_TR(0x700a8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B700a92:{NFSU2_TR(0x700a92);
w2(R+4260,u16(0xffffull));
}
B700a94:{NFSU2_TR(0x700a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700a97:{NFSU2_TR(0x700a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700a9a:{NFSU2_TR(0x700a9a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B700a9d:{NFSU2_TR(0x700a9d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x60ull))));
}
B700aa0:{NFSU2_TR(0x700aa0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B700aa3:{NFSU2_TR(0x700aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B700aa6:{NFSU2_TR(0x700aa6);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B700aa7:{NFSU2_TR(0x700aa7);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B700aa9:{NFSU2_TR(0x700aa9);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B700aab:{NFSU2_TR(0x700aab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700aac:{NFSU2_TR(0x700aac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700aaf:{NFSU2_TR(0x700aaf);
__builtin_memmove((R+4),(R+28),4);
}
B700ab1:{NFSU2_TR(0x700ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700ab6ull));
TAIL_STATIC(0x6f4820u,6f4);
}
B700ab6:L700ab6:{c.instructions+=2;NFSU2_TR(0x700ab6);
__builtin_memmove((R+4),(R+0),4);
}
B700ab8:{NFSU2_TR(0x700ab8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700abdull));
TAIL_STATIC(0x6f49d0u,6f4);
}
B700abd:L700abd:{c.instructions+=3;NFSU2_TR(0x700abd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700ac0:{NFSU2_TR(0x700ac0);
__builtin_memmove((R+4),(R+28),4);
}
B700ac2:{NFSU2_TR(0x700ac2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700ac7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700775u);}goto L700775;}
}
B700ac7:L700ac7:{c.instructions+=3;NFSU2_TR(0x700ac7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700aca:{NFSU2_TR(0x700aca);
__builtin_memmove((R+4),(R+28),4);
}
B700acc:{NFSU2_TR(0x700acc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700ad1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70078au);}goto L70078a;}
}
B700ad1:L700ad1:{c.instructions+=3;NFSU2_TR(0x700ad1);
u8 U[4];
w4(U+0,u32(0xfffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700ad6:{NFSU2_TR(0x700ad6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700ad9:{NFSU2_TR(0x700ad9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700adeull));
TAIL_STATIC(0x75db38u,75d);
}
B700ade:L700ade:{c.instructions+=8;NFSU2_TR(0x700ade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700adf:{NFSU2_TR(0x700adf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700ae0:{NFSU2_TR(0x700ae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700ae1:{NFSU2_TR(0x700ae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700ae2:{NFSU2_TR(0x700ae2);
__builtin_memmove((R+0),(R+12),4);
}
B700ae4:{NFSU2_TR(0x700ae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B700ae5:{NFSU2_TR(0x700ae5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700ae6:{NFSU2_TR(0x700ae6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700ae9:L700ae9:{c.instructions+=2;NFSU2_TR(0x700ae9);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700aeb:{NFSU2_TR(0x700aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700af0ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B700af0:L700af0:{c.instructions+=3;NFSU2_TR(0x700af0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B700af2:{NFSU2_TR(0x700af2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700af3:{NFSU2_TR(0x700af3);
if(r1(R+518)){{goto L700afc;}}
}
B700af5:L700af5:{c.instructions+=2;NFSU2_TR(0x700af5);
__builtin_memmove((R+4),(R+0),4);
}
B700af7:{NFSU2_TR(0x700af7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700940u);}goto L700940;}
}
B700afc:L700afc:{c.instructions+=2;NFSU2_TR(0x700afc);
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
B700afe:{NFSU2_TR(0x700afe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700aff:L700aff:{c.instructions+=9;NFSU2_TR(0x700aff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b00:{NFSU2_TR(0x700b00);
__builtin_memmove((R+20),(R+16),4);
}
B700b02:{NFSU2_TR(0x700b02);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b03:{NFSU2_TR(0x700b03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b04:{NFSU2_TR(0x700b04);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b05:{NFSU2_TR(0x700b05);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B700b08:{NFSU2_TR(0x700b08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b09:{NFSU2_TR(0x700b09);
__builtin_memmove((R+24),(R+4),4);
}
B700b0b:{NFSU2_TR(0x700b0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700b10ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7007f3u);}goto L7007f3;}
}
B700b10:L700b10:{c.instructions+=2;NFSU2_TR(0x700b10);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B700b14:{NFSU2_TR(0x700b14);
if(r1(R+518)){{goto L700bbe;}}
}
B700b1a:L700b1a:{c.instructions+=13;NFSU2_TR(0x700b1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b1b:{NFSU2_TR(0x700b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B700b1e:{NFSU2_TR(0x700b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700b21:{NFSU2_TR(0x700b21);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B700b25:{NFSU2_TR(0x700b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700b28:{NFSU2_TR(0x700b28);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B700b2c:{NFSU2_TR(0x700b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700b2f:{NFSU2_TR(0x700b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B700b32:{NFSU2_TR(0x700b32);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B700b34:{NFSU2_TR(0x700b34);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B700b38:{NFSU2_TR(0x700b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700b3b:{NFSU2_TR(0x700b3b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B700b3e:{NFSU2_TR(0x700b3e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L700b46;}}
}
B700b40:L700b40:{c.instructions+=1;NFSU2_TR(0x700b40);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B700b46:L700b46:{c.instructions+=4;NFSU2_TR(0x700b46);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B700b48:{NFSU2_TR(0x700b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700b4b:{NFSU2_TR(0x700b4b);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B700b4e:{NFSU2_TR(0x700b4e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L700b56;}}
}
B700b50:L700b50:{c.instructions+=1;NFSU2_TR(0x700b50);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B700b56:L700b56:{c.instructions+=11;NFSU2_TR(0x700b56);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B700b58:{NFSU2_TR(0x700b58);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B700b5b:{NFSU2_TR(0x700b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700b5e:{NFSU2_TR(0x700b5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B700b61:{NFSU2_TR(0x700b61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700b64:{NFSU2_TR(0x700b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700b67:{NFSU2_TR(0x700b67);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B700b6a:{NFSU2_TR(0x700b6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700b6d:{NFSU2_TR(0x700b6d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B700b6e:{NFSU2_TR(0x700b6e);
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
B700b70:{NFSU2_TR(0x700b70);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L700b84;}}
}
B700b72:L700b72:{c.instructions+=1;NFSU2_TR(0x700b72);
__builtin_memmove((R+28),(R+0),4);
}
B700b74:L700b74:{c.instructions+=4;NFSU2_TR(0x700b74);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700b77:{NFSU2_TR(0x700b77);
__builtin_memmove((R+4),(R+24),4);
}
B700b79:{NFSU2_TR(0x700b79);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700b7c:{NFSU2_TR(0x700b7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700b81ull));
{goto L700d27;}
}
B700b81:L700b81:{c.instructions+=2;NFSU2_TR(0x700b81);
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
B700b82:{NFSU2_TR(0x700b82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700b74u);}goto L700b74;}}
}
B700b84:L700b84:{c.instructions+=6;NFSU2_TR(0x700b84);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700b87:{NFSU2_TR(0x700b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700b8b:{NFSU2_TR(0x700b8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700b8e:{NFSU2_TR(0x700b8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700b91:{NFSU2_TR(0x700b91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b92:{NFSU2_TR(0x700b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700b97ull));
TAIL_STATIC(0x7024d7u,702);
}
B700b97:L700b97:{c.instructions+=4;NFSU2_TR(0x700b97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b99:{NFSU2_TR(0x700b99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700b9b:{NFSU2_TR(0x700b9b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B700b9d:{NFSU2_TR(0x700b9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700ba2ull));
TAIL_STATIC(0x702593u,702);
}
B700ba2:L700ba2:{c.instructions+=4;NFSU2_TR(0x700ba2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B700ba5:{NFSU2_TR(0x700ba5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700ba6:{NFSU2_TR(0x700ba6);
__builtin_memmove((R+4),(R+24),4);
}
B700ba8:{NFSU2_TR(0x700ba8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700badull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70080eu);}goto L70080e;}
}
B700bad:L700bad:{c.instructions+=4;NFSU2_TR(0x700bad);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B700bb0:{NFSU2_TR(0x700bb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700bb1:{NFSU2_TR(0x700bb1);
__builtin_memmove((R+4),(R+24),4);
}
B700bb3:{NFSU2_TR(0x700bb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700bb8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7007f3u);}goto L7007f3;}
}
B700bb8:L700bb8:{c.instructions+=2;NFSU2_TR(0x700bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B700bb9:{NFSU2_TR(0x700bb9);
{goto L700c4c;}
}
B700bbe:L700bbe:{c.instructions+=4;NFSU2_TR(0x700bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700bc1:{NFSU2_TR(0x700bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B700bc4:{NFSU2_TR(0x700bc4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B700bc7:{NFSU2_TR(0x700bc7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L700bfd;}}
}
B700bc9:L700bc9:{c.instructions+=3;NFSU2_TR(0x700bc9);
s4(0x8b231c,u32(u32(m4(0x8b231c))+u32(u32(0x1ull))));
}
B700bcf:{NFSU2_TR(0x700bcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700bd2:{NFSU2_TR(0x700bd2);
__builtin_memmove(gp(0x8b2320),(R+0),4);
}
B700bd7:L700bd7:{c.instructions+=3;NFSU2_TR(0x700bd7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700bda:{NFSU2_TR(0x700bda);
__builtin_memmove((R+4),(R+24),4);
}
B700bdc:{NFSU2_TR(0x700bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700be1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70080eu);}goto L70080e;}
}
B700be1:L700be1:{c.instructions+=4;NFSU2_TR(0x700be1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B700be4:{NFSU2_TR(0x700be4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700be5:{NFSU2_TR(0x700be5);
__builtin_memmove((R+4),(R+24),4);
}
B700be7:{NFSU2_TR(0x700be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700becull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7007f3u);}goto L7007f3;}
}
B700bec:L700bec:{c.instructions+=2;NFSU2_TR(0x700bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700bef:{NFSU2_TR(0x700bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700bf4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7007c0u);}goto L7007c0;}
}
B700bf4:L700bf4:{c.instructions+=2;NFSU2_TR(0x700bf4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d56304bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B700bf9:{NFSU2_TR(0x700bf9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700bd7u);}goto L700bd7;}}
}
B700bfb:L700bfb:{c.instructions+=1;NFSU2_TR(0x700bfb);
{goto L700c4c;}
}
B700bfd:L700bfd:{c.instructions+=2;NFSU2_TR(0x700bfd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B700bff:{NFSU2_TR(0x700bff);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L700c4c;}}
}
B700c01:L700c01:{c.instructions+=3;NFSU2_TR(0x700c01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B700c04:{NFSU2_TR(0x700c04);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B700c06:{NFSU2_TR(0x700c06);
if(r1(R+518)){{goto L700c6c;}}
}
B700c08:L700c08:{c.instructions+=2;NFSU2_TR(0x700c08);
__builtin_memmove((R+0),(R+28),4);
}
B700c0a:{NFSU2_TR(0x700c0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7007c0u);}goto L7007c0;}
}
B700c0f:L700c0f:{c.instructions+=2;NFSU2_TR(0x700c0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c10:{NFSU2_TR(0x700c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c15ull));
TAIL_STATIC(0x7013b4u,701);
}
B700c15:L700c15:{c.instructions+=3;NFSU2_TR(0x700c15);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B700c17:{NFSU2_TR(0x700c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700c18:{NFSU2_TR(0x700c18);
if(r1(R+518)){{goto L700c4c;}}
}
B700c1a:L700c1a:{c.instructions+=10;NFSU2_TR(0x700c1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700c1d:{NFSU2_TR(0x700c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700c20:{NFSU2_TR(0x700c20);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700c23:{NFSU2_TR(0x700c23);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700c26:{NFSU2_TR(0x700c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700c29:{NFSU2_TR(0x700c29);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B700c2c:{NFSU2_TR(0x700c2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c2d:{NFSU2_TR(0x700c2d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c2e:{NFSU2_TR(0x700c2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700c31:{NFSU2_TR(0x700c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c36ull));
TAIL_STATIC(0x702e47u,702);
}
B700c36:L700c36:{c.instructions+=4;NFSU2_TR(0x700c36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B700c39:{NFSU2_TR(0x700c39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c3a:{NFSU2_TR(0x700c3a);
__builtin_memmove((R+4),(R+24),4);
}
B700c3c:{NFSU2_TR(0x700c3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c41ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70080eu);}goto L70080e;}
}
B700c41:L700c41:{c.instructions+=4;NFSU2_TR(0x700c41);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B700c44:{NFSU2_TR(0x700c44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c45:{NFSU2_TR(0x700c45);
__builtin_memmove((R+4),(R+24),4);
}
B700c47:{NFSU2_TR(0x700c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7007f3u);}goto L7007f3;}
}
B700c4c:L700c4c:{c.instructions+=2;NFSU2_TR(0x700c4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B700c50:{NFSU2_TR(0x700c50);
if(r1(R+518)){{goto L700c6c;}}
}
B700c52:L700c52:{c.instructions+=3;NFSU2_TR(0x700c52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700c55:{NFSU2_TR(0x700c55);
__builtin_memmove((R+4),(R+24),4);
}
B700c57:{NFSU2_TR(0x700c57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c5cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700a2fu);}goto L700a2f;}
}
B700c5c:L700c5c:{c.instructions+=4;NFSU2_TR(0x700c5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700c5f:{NFSU2_TR(0x700c5f);
__builtin_memmove((R+4),(R+24),4);
}
B700c61:{NFSU2_TR(0x700c61);
__builtin_memmove((R+28),(R+0),4);
}
B700c63:{NFSU2_TR(0x700c63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700c68ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70080eu);}goto L70080e;}
}
B700c68:L700c68:{c.instructions+=2;NFSU2_TR(0x700c68);
__builtin_memmove((R+0),(R+28),4);
}
B700c6a:{NFSU2_TR(0x700c6a);
{goto L700c6e;}
}
B700c6c:L700c6c:{c.instructions+=1;NFSU2_TR(0x700c6c);
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
B700c6e:L700c6e:{c.instructions+=4;NFSU2_TR(0x700c6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700c6f:{NFSU2_TR(0x700c6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700c70:{NFSU2_TR(0x700c70);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700c71:{NFSU2_TR(0x700c71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700c74:L700c74:{c.instructions+=8;NFSU2_TR(0x700c74);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c75:{NFSU2_TR(0x700c75);
__builtin_memmove((R+20),(R+16),4);
}
B700c77:{NFSU2_TR(0x700c77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c78:{NFSU2_TR(0x700c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700c7b:{NFSU2_TR(0x700c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B700c7e:{NFSU2_TR(0x700c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700c81:{NFSU2_TR(0x700c81);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B700c84:{NFSU2_TR(0x700c84);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L700c89;}}
}
B700c86:L700c86:{c.instructions+=1;NFSU2_TR(0x700c86);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700c89:L700c89:{c.instructions+=8;NFSU2_TR(0x700c89);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B700c8c:{NFSU2_TR(0x700c8c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c92:{NFSU2_TR(0x700c92);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700c95:{NFSU2_TR(0x700c95);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c97:{NFSU2_TR(0x700c97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c99:{NFSU2_TR(0x700c99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c9a:{NFSU2_TR(0x700c9a);
u8 U[4];
w4(U+0,u32(0x7c353cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700c9f:{NFSU2_TR(0x700c9f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161ec),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700ca5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B700ca5:L700ca5:{c.instructions+=6;NFSU2_TR(0x700ca5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B700ca8:{NFSU2_TR(0x700ca8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700caa:{NFSU2_TR(0x700caa);
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
B700cad:{NFSU2_TR(0x700cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700cae:{NFSU2_TR(0x700cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700caf:{NFSU2_TR(0x700caf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700cb2:L700cb2:{c.instructions+=8;NFSU2_TR(0x700cb2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700cb3:{NFSU2_TR(0x700cb3);
__builtin_memmove((R+20),(R+16),4);
}
B700cb5:{NFSU2_TR(0x700cb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700cb8:{NFSU2_TR(0x700cb8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
}
B700cbb:{NFSU2_TR(0x700cbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B700cbd:{NFSU2_TR(0x700cbd);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+8)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+8))));
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
B700cc0:{NFSU2_TR(0x700cc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700cc1:{NFSU2_TR(0x700cc1);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700cc7ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B700cc7:L700cc7:{c.instructions+=3;NFSU2_TR(0x700cc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700cc8:{NFSU2_TR(0x700cc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700cc9:{NFSU2_TR(0x700cc9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700ccc:L700ccc:{c.instructions+=3;NFSU2_TR(0x700ccc);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B700ccf:{NFSU2_TR(0x700ccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700cd2:{NFSU2_TR(0x700cd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700cd3:L700cd3:{c.instructions+=4;NFSU2_TR(0x700cd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700cd4:{NFSU2_TR(0x700cd4);
__builtin_memmove((R+24),(R+4),4);
}
B700cd6:{NFSU2_TR(0x700cd6);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B700cd9:{NFSU2_TR(0x700cd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L700ce2;}}
}
B700cdb:L700cdb:{c.instructions+=3;NFSU2_TR(0x700cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700cdd:{NFSU2_TR(0x700cdd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700cdf:{NFSU2_TR(0x700cdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700ce2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B700ce2:L700ce2:{c.instructions+=3;NFSU2_TR(0x700ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700ce5:{NFSU2_TR(0x700ce5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700ce6:{NFSU2_TR(0x700ce6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700ce7:L700ce7:{c.instructions+=7;NFSU2_TR(0x700ce7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700ce8:{NFSU2_TR(0x700ce8);
__builtin_memmove((R+20),(R+16),4);
}
B700cea:{NFSU2_TR(0x700cea);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B700cee:{NFSU2_TR(0x700cee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700cef:{NFSU2_TR(0x700cef);
__builtin_memmove((R+24),(R+4),4);
}
B700cf1:{NFSU2_TR(0x700cf1);
u8 U[4];
w4(U+0,u32(0x786dbcull));
s4(u32(r4(R+24)),r4(U+0));
}
B700cf7:{NFSU2_TR(0x700cf7);
if(r1(R+518)){{goto L700d00;}}
}
B700cf9:L700cf9:{c.instructions+=2;NFSU2_TR(0x700cf9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700cfa:{NFSU2_TR(0x700cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700cffull));
TAIL_STATIC(0x575630u,575);
}
B700cff:L700cff:{c.instructions+=1;NFSU2_TR(0x700cff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d00:L700d00:{c.instructions+=4;NFSU2_TR(0x700d00);
__builtin_memmove((R+0),(R+24),4);
}
B700d02:{NFSU2_TR(0x700d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700d03:{NFSU2_TR(0x700d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700d04:{NFSU2_TR(0x700d04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700d07:L700d07:{c.instructions+=5;NFSU2_TR(0x700d07);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d08:{NFSU2_TR(0x700d08);
__builtin_memmove((R+20),(R+16),4);
}
B700d0a:{NFSU2_TR(0x700d0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d0b:{NFSU2_TR(0x700d0b);
__builtin_memmove((R+24),(R+4),4);
}
B700d0d:{NFSU2_TR(0x700d0d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d12ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700895u);}goto L700895;}
}
B700d12:L700d12:{c.instructions+=2;NFSU2_TR(0x700d12);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B700d16:{NFSU2_TR(0x700d16);
if(r1(R+518)){{goto L700d20;}}
}
B700d18:L700d18:{c.instructions+=2;NFSU2_TR(0x700d18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d19:{NFSU2_TR(0x700d19);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d1full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B700d1f:L700d1f:{c.instructions+=1;NFSU2_TR(0x700d1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d20:L700d20:{c.instructions+=4;NFSU2_TR(0x700d20);
__builtin_memmove((R+0),(R+24),4);
}
B700d22:{NFSU2_TR(0x700d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700d23:{NFSU2_TR(0x700d23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700d24:{NFSU2_TR(0x700d24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700d27:L700d27:{c.instructions+=6;NFSU2_TR(0x700d27);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d28:{NFSU2_TR(0x700d28);
__builtin_memmove((R+20),(R+16),4);
}
B700d2a:{NFSU2_TR(0x700d2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d2b:{NFSU2_TR(0x700d2b);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d2d:{NFSU2_TR(0x700d2d);
__builtin_memmove((R+24),(R+4),4);
}
B700d2f:{NFSU2_TR(0x700d2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d34ull));
TAIL_STATIC(0x6ff085u,6ff);
}
B700d34:L700d34:{c.instructions+=3;NFSU2_TR(0x700d34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B700d36:{NFSU2_TR(0x700d36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d37:{NFSU2_TR(0x700d37);
if(r1(R+518)){{goto L700d48;}}
}
B700d39:L700d39:{c.instructions+=4;NFSU2_TR(0x700d39);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700d3c:{NFSU2_TR(0x700d3c);
__builtin_memmove((R+4),(R+0),4);
}
B700d3e:{NFSU2_TR(0x700d3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700d41:{NFSU2_TR(0x700d41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d46ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700824u);}goto L700824;}
}
B700d46:L700d46:{c.instructions+=1;NFSU2_TR(0x700d46);
{goto L700d4a;}
}
B700d48:L700d48:{c.instructions+=1;NFSU2_TR(0x700d48);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B700d4a:L700d4a:{c.instructions+=13;NFSU2_TR(0x700d4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d4d:{NFSU2_TR(0x700d4d);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B700d4f:{NFSU2_TR(0x700d4f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B700d51:{NFSU2_TR(0x700d51);
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
B700d53:{NFSU2_TR(0x700d53);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d56:{NFSU2_TR(0x700d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B700d58:{NFSU2_TR(0x700d58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B700d5a:{NFSU2_TR(0x700d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700d5d:{NFSU2_TR(0x700d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700d60:{NFSU2_TR(0x700d60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700d62:{NFSU2_TR(0x700d62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700d63:{NFSU2_TR(0x700d63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700d64:{NFSU2_TR(0x700d64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700d67:L700d67:{c.instructions+=5;NFSU2_TR(0x700d67);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d68:{NFSU2_TR(0x700d68);
__builtin_memmove((R+20),(R+16),4);
}
B700d6a:{NFSU2_TR(0x700d6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d6b:{NFSU2_TR(0x700d6b);
__builtin_memmove((R+24),(R+4),4);
}
B700d6d:{NFSU2_TR(0x700d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700996u);}goto L700996;}
}
B700d72:L700d72:{c.instructions+=2;NFSU2_TR(0x700d72);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B700d76:{NFSU2_TR(0x700d76);
if(r1(R+518)){{goto L700d80;}}
}
B700d78:L700d78:{c.instructions+=2;NFSU2_TR(0x700d78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d79:{NFSU2_TR(0x700d79);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d7full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B700d7f:L700d7f:{c.instructions+=1;NFSU2_TR(0x700d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d80:L700d80:{c.instructions+=4;NFSU2_TR(0x700d80);
__builtin_memmove((R+0),(R+24),4);
}
B700d82:{NFSU2_TR(0x700d82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700d83:{NFSU2_TR(0x700d83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700d84:{NFSU2_TR(0x700d84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700d87:L700d87:{c.instructions+=2;NFSU2_TR(0x700d87);
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
B700d89:{NFSU2_TR(0x700d89);
if(r1(R+518)){{goto L700d98;}}
}
B700d8b:L700d8b:{c.instructions+=3;NFSU2_TR(0x700d8b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d8d:{NFSU2_TR(0x700d8d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B700d90:{NFSU2_TR(0x700d90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700d95ull));
TAIL_STATIC(0x6fe486u,6fe);
}
B700d95:L700d95:{c.instructions+=3;NFSU2_TR(0x700d95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d96:{NFSU2_TR(0x700d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700d97:{NFSU2_TR(0x700d97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700d98:L700d98:{c.instructions+=2;NFSU2_TR(0x700d98);
w4(R+0,u32(0x4d41446bull));
}
B700d9d:{NFSU2_TR(0x700d9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700d9e:L700d9e:{c.instructions+=10;NFSU2_TR(0x700d9e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700d9f:{NFSU2_TR(0x700d9f);
__builtin_memmove((R+20),(R+16),4);
}
B700da1:{NFSU2_TR(0x700da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700da4:{NFSU2_TR(0x700da4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700da8:{NFSU2_TR(0x700da8);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
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
B700dac:{NFSU2_TR(0x700dac);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700dae:{NFSU2_TR(0x700dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700db1:{NFSU2_TR(0x700db1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700db2:{NFSU2_TR(0x700db2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700db3:{NFSU2_TR(0x700db3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700db6:L700db6:{c.instructions+=2;NFSU2_TR(0x700db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700db9:{NFSU2_TR(0x700db9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700dba:L700dba:{c.instructions+=2;NFSU2_TR(0x700dba);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B700dbd:{NFSU2_TR(0x700dbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700dbe:L700dbe:{c.instructions+=6;NFSU2_TR(0x700dbe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700dbf:{NFSU2_TR(0x700dbf);
__builtin_memmove((R+20),(R+16),4);
}
B700dc1:{NFSU2_TR(0x700dc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700dc2:{NFSU2_TR(0x700dc2);
__builtin_memmove((R+24),(R+4),4);
}
B700dc4:{NFSU2_TR(0x700dc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700dc7:{NFSU2_TR(0x700dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700dccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700697u);}goto L700697;}
}
B700dcc:L700dcc:{c.instructions+=6;NFSU2_TR(0x700dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700dcf:{NFSU2_TR(0x700dcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B700dd1:{NFSU2_TR(0x700dd1);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B700dd4:{NFSU2_TR(0x700dd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700dd5:{NFSU2_TR(0x700dd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700dd6:{NFSU2_TR(0x700dd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700dd9:L700dd9:{c.instructions+=4;NFSU2_TR(0x700dd9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700dda:{NFSU2_TR(0x700dda);
__builtin_memmove((R+20),(R+16),4);
}
B700ddc:{NFSU2_TR(0x700ddc);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B700de0:{NFSU2_TR(0x700de0);
if(r1(R+518)){{goto L700deb;}}
}
B700de2:L700de2:{c.instructions+=3;NFSU2_TR(0x700de2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700de5:{NFSU2_TR(0x700de5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700de6:{NFSU2_TR(0x700de6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7006bbu);}goto L7006bb;}
}
B700deb:L700deb:{c.instructions+=2;NFSU2_TR(0x700deb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700dec:{NFSU2_TR(0x700dec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700def:L700def:{c.instructions+=13;NFSU2_TR(0x700def);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700df0:{NFSU2_TR(0x700df0);
__builtin_memmove((R+20),(R+16),4);
}
B700df2:{NFSU2_TR(0x700df2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc0ull))));
}
B700df8:{NFSU2_TR(0x700df8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700df9:{NFSU2_TR(0x700df9);
__builtin_memmove((R+24),(R+4),4);
}
B700dfb:{NFSU2_TR(0x700dfb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700dfd:{NFSU2_TR(0x700dfd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700dfe:{NFSU2_TR(0x700dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e01:{NFSU2_TR(0x700e01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e04:{NFSU2_TR(0x700e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700e08:{NFSU2_TR(0x700e08);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700e0e:{NFSU2_TR(0x700e0e);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+24)),r4(U+0));
}
B700e14:{NFSU2_TR(0x700e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700e19ull));
TAIL_STATIC(0x6f4aa0u,6f4);
}
B700e19:L700e19:{c.instructions+=10;NFSU2_TR(0x700e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700e1c:{NFSU2_TR(0x700e1c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8161f4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e22:{NFSU2_TR(0x700e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e28:{NFSU2_TR(0x700e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700e2b:{NFSU2_TR(0x700e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e31:{NFSU2_TR(0x700e31);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700e37:{NFSU2_TR(0x700e37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e38:{NFSU2_TR(0x700e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff44ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700e42:{NFSU2_TR(0x700e42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff54ull))));
w4(U+4,u32(0x6cull));
s4(u32(r4(U+0)),r4(U+4));
}
B700e4c:{NFSU2_TR(0x700e4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700e51ull));
TAIL_STATIC(0x6f5320u,6f5);
}
B700e51:L700e51:{c.instructions+=7;NFSU2_TR(0x700e51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700e52:{NFSU2_TR(0x700e52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e55:{NFSU2_TR(0x700e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700e56:{NFSU2_TR(0x700e56);
__builtin_memmove((R+0),(R+24),4);
}
B700e58:{NFSU2_TR(0x700e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700e59:{NFSU2_TR(0x700e59);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B700e5a:{NFSU2_TR(0x700e5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700e5d:L700e5d:{c.instructions+=5;NFSU2_TR(0x700e5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e5e:{NFSU2_TR(0x700e5e);
__builtin_memmove((R+24),(R+4),4);
}
B700e60:{NFSU2_TR(0x700e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700e63:{NFSU2_TR(0x700e63);
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
B700e65:{NFSU2_TR(0x700e65);
if(r1(R+518)){{goto L700e72;}}
}
B700e67:L700e67:{c.instructions+=2;NFSU2_TR(0x700e67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e68:{NFSU2_TR(0x700e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700e6dull));
TAIL_STATIC(0x6f4940u,6f4);
}
B700e6d:L700e6d:{c.instructions+=2;NFSU2_TR(0x700e6d);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B700e71:{NFSU2_TR(0x700e71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700e72:L700e72:{c.instructions+=6;NFSU2_TR(0x700e72);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e74:{NFSU2_TR(0x700e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700e75:{NFSU2_TR(0x700e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e78:{NFSU2_TR(0x700e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e7b:{NFSU2_TR(0x700e7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700e7c:{NFSU2_TR(0x700e7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700e7d:L700e7d:{c.instructions+=29;NFSU2_TR(0x700e7d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e7e:{NFSU2_TR(0x700e7e);
__builtin_memmove((R+20),(R+16),4);
}
B700e80:{NFSU2_TR(0x700e80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e81:{NFSU2_TR(0x700e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700e84:{NFSU2_TR(0x700e84);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700e87:{NFSU2_TR(0x700e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700e89:{NFSU2_TR(0x700e89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e8a:{NFSU2_TR(0x700e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B700e8d:{NFSU2_TR(0x700e8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B700e8f:{NFSU2_TR(0x700e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e92:{NFSU2_TR(0x700e92);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700e94:{NFSU2_TR(0x700e94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700e95:{NFSU2_TR(0x700e95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700e97:{NFSU2_TR(0x700e97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700e9a:{NFSU2_TR(0x700e9a);
__builtin_memmove((R+0),(R+24),4);
}
B700e9c:{NFSU2_TR(0x700e9c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B700e9e:{NFSU2_TR(0x700e9e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B700ea0:{NFSU2_TR(0x700ea0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
}
B700ea2:{NFSU2_TR(0x700ea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B700ea5:{NFSU2_TR(0x700ea5);
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B700ea8:{NFSU2_TR(0x700ea8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700eaa:{NFSU2_TR(0x700eaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700ead:{NFSU2_TR(0x700ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700eb0:{NFSU2_TR(0x700eb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700eb2:{NFSU2_TR(0x700eb2);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B700eb5:{NFSU2_TR(0x700eb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700eb6:{NFSU2_TR(0x700eb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700eb7:{NFSU2_TR(0x700eb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700eb8:{NFSU2_TR(0x700eb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700ebb:L700ebb:{c.instructions+=3;NFSU2_TR(0x700ebb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700ebe:{NFSU2_TR(0x700ebe);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B700ec0:{NFSU2_TR(0x700ec0);
if(r1(R+518)){{goto L700efe;}}
}
B700ec2:L700ec2:{c.instructions+=25;NFSU2_TR(0x700ec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700ec4:{NFSU2_TR(0x700ec4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B700ec6:{NFSU2_TR(0x700ec6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700ec7:{NFSU2_TR(0x700ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700eca:{NFSU2_TR(0x700eca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700ecc:{NFSU2_TR(0x700ecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700ecf:{NFSU2_TR(0x700ecf);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700ed1:{NFSU2_TR(0x700ed1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700ed2:{NFSU2_TR(0x700ed2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700ed4:{NFSU2_TR(0x700ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700ed7:{NFSU2_TR(0x700ed7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B700eda:{NFSU2_TR(0x700eda);
__builtin_memmove((R+8),(R+0),4);
}
B700edc:{NFSU2_TR(0x700edc);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B700ede:{NFSU2_TR(0x700ede);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700ee1:{NFSU2_TR(0x700ee1);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B700ee3:{NFSU2_TR(0x700ee3);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B700ee5:{NFSU2_TR(0x700ee5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700ee8:{NFSU2_TR(0x700ee8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B700eeb:{NFSU2_TR(0x700eeb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700eed:{NFSU2_TR(0x700eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700ef0:{NFSU2_TR(0x700ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700ef3:{NFSU2_TR(0x700ef3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700ef5:{NFSU2_TR(0x700ef5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700efc:{NFSU2_TR(0x700efc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700efd:{NFSU2_TR(0x700efd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700efe:L700efe:{c.instructions+=2;NFSU2_TR(0x700efe);
u8 U[4];
w4(U+0,u32(0x7c35d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f03:{NFSU2_TR(0x700f03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700f08ull));
TAIL_STATIC(0x770fedu,770);
}
B700f08:L700f08:{c.instructions+=3;NFSU2_TR(0x700f08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700f09:{NFSU2_TR(0x700f09);
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
B700f0b:{NFSU2_TR(0x700f0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700f0c:L700f0c:{c.instructions+=3;NFSU2_TR(0x700f0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B700f0f:{NFSU2_TR(0x700f0f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B700f11:{NFSU2_TR(0x700f11);
if(r1(R+518)){{goto L700f4f;}}
}
B700f13:L700f13:{c.instructions+=25;NFSU2_TR(0x700f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700f15:{NFSU2_TR(0x700f15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B700f17:{NFSU2_TR(0x700f17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f18:{NFSU2_TR(0x700f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700f1b:{NFSU2_TR(0x700f1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700f1d:{NFSU2_TR(0x700f1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f20:{NFSU2_TR(0x700f20);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f22:{NFSU2_TR(0x700f22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700f23:{NFSU2_TR(0x700f23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700f25:{NFSU2_TR(0x700f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f28:{NFSU2_TR(0x700f28);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
}
B700f2b:{NFSU2_TR(0x700f2b);
__builtin_memmove((R+8),(R+0),4);
}
B700f2d:{NFSU2_TR(0x700f2d);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B700f2f:{NFSU2_TR(0x700f2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700f32:{NFSU2_TR(0x700f32);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B700f34:{NFSU2_TR(0x700f34);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B700f36:{NFSU2_TR(0x700f36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700f39:{NFSU2_TR(0x700f39);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x20ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B700f3c:{NFSU2_TR(0x700f3c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700f3e:{NFSU2_TR(0x700f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f41:{NFSU2_TR(0x700f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f44:{NFSU2_TR(0x700f44);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700f46:{NFSU2_TR(0x700f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700f4d:{NFSU2_TR(0x700f4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700f4e:{NFSU2_TR(0x700f4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700f4f:L700f4f:{c.instructions+=2;NFSU2_TR(0x700f4f);
u8 U[4];
w4(U+0,u32(0x7c3638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f54:{NFSU2_TR(0x700f54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700f59ull));
TAIL_STATIC(0x770fedu,770);
}
B700f59:L700f59:{c.instructions+=3;NFSU2_TR(0x700f59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B700f5a:{NFSU2_TR(0x700f5a);
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
B700f5c:{NFSU2_TR(0x700f5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700f5d:L700f5d:{c.instructions+=6;NFSU2_TR(0x700f5d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f5e:{NFSU2_TR(0x700f5e);
__builtin_memmove((R+20),(R+16),4);
}
B700f60:{NFSU2_TR(0x700f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B700f63:{NFSU2_TR(0x700f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B700f66:{NFSU2_TR(0x700f66);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
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
B700f6a:{NFSU2_TR(0x700f6a);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L700f93;}}
}
B700f6c:L700f6c:{c.instructions+=17;NFSU2_TR(0x700f6c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B700f6f:{NFSU2_TR(0x700f6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B700f71:{NFSU2_TR(0x700f71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f72:{NFSU2_TR(0x700f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B700f75:{NFSU2_TR(0x700f75);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B700f77:{NFSU2_TR(0x700f77);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f7a:{NFSU2_TR(0x700f7a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700f7c:{NFSU2_TR(0x700f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700f7d:{NFSU2_TR(0x700f7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700f7f:{NFSU2_TR(0x700f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f82:{NFSU2_TR(0x700f82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B700f85:{NFSU2_TR(0x700f85);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x28ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B700f88:{NFSU2_TR(0x700f88);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700f8a:{NFSU2_TR(0x700f8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f8d:{NFSU2_TR(0x700f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700f90:{NFSU2_TR(0x700f90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700f92:{NFSU2_TR(0x700f92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700f93:L700f93:{c.instructions+=2;NFSU2_TR(0x700f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B700f94:{NFSU2_TR(0x700f94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700f97:L700f97:{c.instructions+=10;NFSU2_TR(0x700f97);
__builtin_memmove((R+0),(R+4),4);
}
B700f99:{NFSU2_TR(0x700f99);
u8 U[4];
w4(U+0,u32(0x7c3698ull));
s4(u32(r4(R+0)),r4(U+0));
}
B700f9f:{NFSU2_TR(0x700f9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700fa2:{NFSU2_TR(0x700fa2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700fa4:{NFSU2_TR(0x700fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700fa7:{NFSU2_TR(0x700fa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B700faa:{NFSU2_TR(0x700faa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B700fac:{NFSU2_TR(0x700fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700faf:{NFSU2_TR(0x700faf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B700fb6:{NFSU2_TR(0x700fb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B700fb7:L700fb7:{c.instructions+=12;NFSU2_TR(0x700fb7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fb8:{NFSU2_TR(0x700fb8);
__builtin_memmove((R+20),(R+16),4);
}
B700fba:{NFSU2_TR(0x700fba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fbb:{NFSU2_TR(0x700fbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fbc:{NFSU2_TR(0x700fbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fbd:{NFSU2_TR(0x700fbd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fbe:{NFSU2_TR(0x700fbe);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fc0:{NFSU2_TR(0x700fc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700fc3:{NFSU2_TR(0x700fc3);
u8 U[4];
w4(U+0,u32(0x7c3698ull));
s4(u32(r4(R+4)),r4(U+0));
}
B700fc9:{NFSU2_TR(0x700fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((R+24),(U+0),4);
}
B700fcc:{NFSU2_TR(0x700fcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B700fcd:{NFSU2_TR(0x700fcd);
{goto L700ff1;}
}
B700fcf:L700fcf:{c.instructions+=9;NFSU2_TR(0x700fcf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700fd1:{NFSU2_TR(0x700fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B700fd3:{NFSU2_TR(0x700fd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B700fd6:{NFSU2_TR(0x700fd6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+12)),r4(U+0));
}
B700fd8:{NFSU2_TR(0x700fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700fdb:{NFSU2_TR(0x700fdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B700fdd:{NFSU2_TR(0x700fdd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B700fe0:{NFSU2_TR(0x700fe0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B700fe3:{NFSU2_TR(0x700fe3);
if(r1(R+518)){{goto L700ff1;}}
}
B700fe5:L700fe5:{c.instructions+=3;NFSU2_TR(0x700fe5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B700fe7:{NFSU2_TR(0x700fe7);
__builtin_memmove((R+4),(R+0),4);
}
B700fe9:{NFSU2_TR(0x700fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x700feeull));
TAIL_STATIC(0x701325u,701);
}
B700fee:L700fee:{c.instructions+=1;NFSU2_TR(0x700fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B700ff1:L700ff1:{c.instructions+=2;NFSU2_TR(0x700ff1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B700ff3:{NFSU2_TR(0x700ff3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x700fcfu);}goto L700fcf;}}
}
B700ff5:L700ff5:{c.instructions+=3;NFSU2_TR(0x700ff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((R+12),(U+0),4);
}
B700ff8:{NFSU2_TR(0x700ff8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+12)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B700ffa:{NFSU2_TR(0x700ffa);
if(r1(R+518)){TAIL_STATIC(0x701022u,701);}
}
B700ffc:L700ffc:{c.instructions+=2;NFSU2_TR(0x700ffc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B700ffe:{NFSU2_TR(0x700ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
TAIL_STATIC(0x701000u,701);
}
XIT:NFSU2_TR_EXIT(0x700,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
