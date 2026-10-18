#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_688(u8* __restrict R,Cpu& c);
u32 body_68a(u8* __restrict R,Cpu& c);
u32 body_6d3(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x689,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x689,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_689(u8* __restrict R,Cpu& c);
u32 page_689(Cpu& c){return body_689(c.regs.data(),c);}
__attribute__((noinline)) u32 body_689(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x689002:goto L689002;
case 0x689008:goto L689008;
case 0x68900a:c.instructions+=9;goto B68900a;
case 0x68900b:c.instructions+=8;goto B68900b;
case 0x68900d:c.instructions+=7;goto B68900d;
case 0x68900f:c.instructions+=6;goto B68900f;
case 0x689011:c.instructions+=5;goto B689011;
case 0x689013:c.instructions+=4;goto B689013;
case 0x689015:c.instructions+=3;goto B689015;
case 0x689018:c.instructions+=2;goto B689018;
case 0x68901b:c.instructions+=1;goto B68901b;
case 0x68901d:goto L68901d;
case 0x689022:c.instructions+=2;goto B689022;
case 0x689029:c.instructions+=1;goto B689029;
case 0x68902b:goto L68902b;
case 0x68902d:c.instructions+=1;goto B68902d;
case 0x68902f:goto L68902f;
case 0x689032:c.instructions+=2;goto B689032;
case 0x689035:c.instructions+=1;goto B689035;
case 0x689037:goto L689037;
case 0x68903a:c.instructions+=1;goto B68903a;
case 0x68903c:goto L68903c;
case 0x68903f:c.instructions+=2;goto B68903f;
case 0x689042:c.instructions+=1;goto B689042;
case 0x689044:goto L689044;
case 0x689047:c.instructions+=1;goto B689047;
case 0x689049:goto L689049;
case 0x68904c:c.instructions+=1;goto B68904c;
case 0x68904f:goto L68904f;
case 0x689052:goto L689052;
case 0x689055:c.instructions+=1;goto B689055;
case 0x689057:goto L689057;
case 0x68905a:goto L68905a;
case 0x68905d:c.instructions+=2;goto B68905d;
case 0x68905f:c.instructions+=1;goto B68905f;
case 0x689065:goto L689065;
case 0x68906a:c.instructions+=3;goto B68906a;
case 0x68906f:c.instructions+=2;goto B68906f;
case 0x689071:c.instructions+=1;goto B689071;
case 0x689077:goto L689077;
case 0x68907d:goto L68907d;
case 0x689082:c.instructions+=1;goto B689082;
case 0x689088:goto L689088;
case 0x68908d:c.instructions+=1;goto B68908d;
case 0x689093:goto L689093;
case 0x689098:c.instructions+=1;goto B689098;
case 0x68909a:goto L68909a;
case 0x68909f:c.instructions+=1;goto B68909f;
case 0x6890a5:goto L6890a5;
case 0x6890a7:c.instructions+=1;goto B6890a7;
case 0x6890ad:goto L6890ad;
case 0x6890b0:c.instructions+=2;goto B6890b0;
case 0x6890b6:c.instructions+=1;goto B6890b6;
case 0x6890b8:goto L6890b8;
case 0x6890be:c.instructions+=5;goto B6890be;
case 0x6890c0:c.instructions+=4;goto B6890c0;
case 0x6890c3:c.instructions+=3;goto B6890c3;
case 0x6890c5:c.instructions+=2;goto B6890c5;
case 0x6890c8:c.instructions+=1;goto B6890c8;
case 0x6890ca:goto L6890ca;
case 0x6890cc:c.instructions+=1;goto B6890cc;
case 0x6890ce:goto L6890ce;
case 0x6890d0:goto L6890d0;
case 0x6890d2:c.instructions+=3;goto B6890d2;
case 0x6890d5:c.instructions+=2;goto B6890d5;
case 0x6890d6:c.instructions+=1;goto B6890d6;
case 0x6890d8:goto L6890d8;
case 0x6890dd:goto L6890dd;
case 0x6890df:c.instructions+=1;goto B6890df;
case 0x6890e5:goto L6890e5;
case 0x6890e8:c.instructions+=2;goto B6890e8;
case 0x6890ee:c.instructions+=1;goto B6890ee;
case 0x6890f0:goto L6890f0;
case 0x6890f6:c.instructions+=5;goto B6890f6;
case 0x6890f8:c.instructions+=4;goto B6890f8;
case 0x6890fb:c.instructions+=3;goto B6890fb;
case 0x6890fd:c.instructions+=2;goto B6890fd;
case 0x689100:c.instructions+=1;goto B689100;
case 0x689102:goto L689102;
case 0x689104:c.instructions+=1;goto B689104;
case 0x689106:goto L689106;
case 0x689108:goto L689108;
case 0x68910a:c.instructions+=3;goto B68910a;
case 0x68910d:c.instructions+=2;goto B68910d;
case 0x68910e:c.instructions+=1;goto B68910e;
case 0x689110:goto L689110;
case 0x689115:goto L689115;
case 0x689117:c.instructions+=1;goto B689117;
case 0x68911d:goto L68911d;
case 0x689123:c.instructions+=3;goto B689123;
case 0x689126:c.instructions+=2;goto B689126;
case 0x68912c:c.instructions+=1;goto B68912c;
case 0x68912e:goto L68912e;
case 0x689130:c.instructions+=4;goto B689130;
case 0x689132:c.instructions+=3;goto B689132;
case 0x689134:c.instructions+=2;goto B689134;
case 0x689137:c.instructions+=1;goto B689137;
case 0x689139:goto L689139;
case 0x68913b:c.instructions+=1;goto B68913b;
case 0x68913d:goto L68913d;
case 0x68913f:goto L68913f;
case 0x689142:c.instructions+=3;goto B689142;
case 0x689145:c.instructions+=2;goto B689145;
case 0x689146:c.instructions+=1;goto B689146;
case 0x689148:goto L689148;
case 0x68914d:goto L68914d;
case 0x68914f:c.instructions+=1;goto B68914f;
case 0x689155:goto L689155;
case 0x68915b:c.instructions+=3;goto B68915b;
case 0x68915e:c.instructions+=2;goto B68915e;
case 0x689164:c.instructions+=1;goto B689164;
case 0x689166:goto L689166;
case 0x689168:c.instructions+=4;goto B689168;
case 0x68916a:c.instructions+=3;goto B68916a;
case 0x68916c:c.instructions+=2;goto B68916c;
case 0x68916f:c.instructions+=1;goto B68916f;
case 0x689171:goto L689171;
case 0x689173:c.instructions+=1;goto B689173;
case 0x689175:goto L689175;
case 0x689177:goto L689177;
case 0x68917a:c.instructions+=3;goto B68917a;
case 0x68917d:c.instructions+=2;goto B68917d;
case 0x68917e:c.instructions+=1;goto B68917e;
case 0x689180:goto L689180;
case 0x689185:goto L689185;
case 0x689187:c.instructions+=1;goto B689187;
case 0x68918d:goto L68918d;
case 0x689190:c.instructions+=2;goto B689190;
case 0x689196:c.instructions+=1;goto B689196;
case 0x689198:goto L689198;
case 0x68919b:c.instructions+=6;goto B68919b;
case 0x6891a1:c.instructions+=5;goto B6891a1;
case 0x6891a3:c.instructions+=4;goto B6891a3;
case 0x6891a5:c.instructions+=3;goto B6891a5;
case 0x6891a8:c.instructions+=2;goto B6891a8;
case 0x6891a9:c.instructions+=1;goto B6891a9;
case 0x6891ab:goto L6891ab;
case 0x6891b0:goto L6891b0;
case 0x6891b5:c.instructions+=1;goto B6891b5;
case 0x6891b7:goto L6891b7;
case 0x6891bc:c.instructions+=1;goto B6891bc;
case 0x6891be:goto L6891be;
case 0x6891c3:c.instructions+=1;goto B6891c3;
case 0x6891c9:goto L6891c9;
case 0x6891cc:c.instructions+=5;goto B6891cc;
case 0x6891ce:c.instructions+=4;goto B6891ce;
case 0x6891d0:c.instructions+=3;goto B6891d0;
case 0x6891d2:c.instructions+=2;goto B6891d2;
case 0x6891d4:c.instructions+=1;goto B6891d4;
case 0x6891da:goto L6891da;
case 0x6891e0:c.instructions+=8;goto B6891e0;
case 0x6891e3:c.instructions+=7;goto B6891e3;
case 0x6891e9:c.instructions+=6;goto B6891e9;
case 0x6891eb:c.instructions+=5;goto B6891eb;
case 0x6891ec:c.instructions+=4;goto B6891ec;
case 0x6891ee:c.instructions+=3;goto B6891ee;
case 0x6891f0:c.instructions+=2;goto B6891f0;
case 0x6891f2:c.instructions+=1;goto B6891f2;
case 0x6891f4:goto L6891f4;
case 0x6891f9:goto L6891f9;
case 0x6891fb:c.instructions+=1;goto B6891fb;
case 0x689201:goto L689201;
case 0x689204:c.instructions+=2;goto B689204;
case 0x68920a:c.instructions+=1;goto B68920a;
case 0x68920c:goto L68920c;
case 0x689212:c.instructions+=7;goto B689212;
case 0x689214:c.instructions+=6;goto B689214;
case 0x689217:c.instructions+=5;goto B689217;
case 0x689219:c.instructions+=4;goto B689219;
case 0x68921b:c.instructions+=3;goto B68921b;
case 0x68921e:c.instructions+=2;goto B68921e;
case 0x68921f:c.instructions+=1;goto B68921f;
case 0x689221:goto L689221;
case 0x689226:goto L689226;
case 0x689228:c.instructions+=1;goto B689228;
case 0x68922e:goto L68922e;
case 0x689231:c.instructions+=2;goto B689231;
case 0x689237:c.instructions+=1;goto B689237;
case 0x689239:goto L689239;
case 0x68923c:c.instructions+=6;goto B68923c;
case 0x689242:c.instructions+=5;goto B689242;
case 0x689244:c.instructions+=4;goto B689244;
case 0x689246:c.instructions+=3;goto B689246;
case 0x689249:c.instructions+=2;goto B689249;
case 0x68924a:c.instructions+=1;goto B68924a;
case 0x68924c:goto L68924c;
case 0x689251:goto L689251;
case 0x689256:c.instructions+=3;goto B689256;
case 0x68925b:c.instructions+=2;goto B68925b;
case 0x68925d:c.instructions+=1;goto B68925d;
case 0x689263:goto L689263;
case 0x689269:goto L689269;
case 0x68926e:c.instructions+=2;goto B68926e;
case 0x689270:c.instructions+=1;goto B689270;
case 0x689276:goto L689276;
case 0x68927c:goto L68927c;
case 0x689281:c.instructions+=1;goto B689281;
case 0x689287:goto L689287;
case 0x68928c:c.instructions+=1;goto B68928c;
case 0x689292:goto L689292;
case 0x689297:c.instructions+=1;goto B689297;
case 0x689299:goto L689299;
case 0x68929e:c.instructions+=1;goto B68929e;
case 0x6892a0:goto L6892a0;
case 0x6892a5:c.instructions+=1;goto B6892a5;
case 0x6892ab:goto L6892ab;
case 0x6892ad:c.instructions+=1;goto B6892ad;
case 0x6892b3:goto L6892b3;
case 0x6892b6:c.instructions+=2;goto B6892b6;
case 0x6892bc:c.instructions+=1;goto B6892bc;
case 0x6892be:goto L6892be;
case 0x6892c4:c.instructions+=2;goto B6892c4;
case 0x6892c7:c.instructions+=1;goto B6892c7;
case 0x6892cc:goto L6892cc;
case 0x6892ce:c.instructions+=3;goto B6892ce;
case 0x6892d1:c.instructions+=2;goto B6892d1;
case 0x6892d2:c.instructions+=1;goto B6892d2;
case 0x6892d4:goto L6892d4;
case 0x6892d9:goto L6892d9;
case 0x6892db:c.instructions+=1;goto B6892db;
case 0x6892e1:goto L6892e1;
case 0x6892e7:c.instructions+=2;goto B6892e7;
case 0x6892ea:c.instructions+=1;goto B6892ea;
case 0x6892ec:goto L6892ec;
case 0x6892ee:c.instructions+=4;goto B6892ee;
case 0x6892ef:c.instructions+=3;goto B6892ef;
case 0x6892f0:c.instructions+=2;goto B6892f0;
case 0x6892f3:c.instructions+=1;goto B6892f3;
case 0x6892f8:goto L6892f8;
case 0x6892fa:c.instructions+=6;goto B6892fa;
case 0x6892fb:c.instructions+=5;goto B6892fb;
case 0x6892fc:c.instructions+=4;goto B6892fc;
case 0x6892ff:c.instructions+=3;goto B6892ff;
case 0x689302:c.instructions+=2;goto B689302;
case 0x689303:c.instructions+=1;goto B689303;
case 0x689305:goto L689305;
case 0x68930a:goto L68930a;
case 0x68930c:c.instructions+=1;goto B68930c;
case 0x689312:goto L689312;
case 0x689315:c.instructions+=2;goto B689315;
case 0x68931b:c.instructions+=1;goto B68931b;
case 0x68931d:goto L68931d;
case 0x68931f:c.instructions+=5;goto B68931f;
case 0x689322:c.instructions+=4;goto B689322;
case 0x689324:c.instructions+=3;goto B689324;
case 0x689327:c.instructions+=2;goto B689327;
case 0x689328:c.instructions+=1;goto B689328;
case 0x68932a:goto L68932a;
case 0x68932f:goto L68932f;
case 0x689331:c.instructions+=1;goto B689331;
case 0x689337:goto L689337;
case 0x68933a:c.instructions+=2;goto B68933a;
case 0x689340:c.instructions+=1;goto B689340;
case 0x689342:goto L689342;
case 0x689345:c.instructions+=5;goto B689345;
case 0x689347:c.instructions+=4;goto B689347;
case 0x689349:c.instructions+=3;goto B689349;
case 0x68934c:c.instructions+=2;goto B68934c;
case 0x68934d:c.instructions+=1;goto B68934d;
case 0x68934f:goto L68934f;
case 0x689354:goto L689354;
case 0x68935a:c.instructions+=2;goto B68935a;
case 0x68935d:c.instructions+=1;goto B68935d;
case 0x68935f:goto L68935f;
case 0x689361:goto L689361;
case 0x689366:goto L689366;
case 0x689368:c.instructions+=2;goto B689368;
case 0x68936a:c.instructions+=1;goto B68936a;
case 0x689370:goto L689370;
case 0x689373:c.instructions+=2;goto B689373;
case 0x689379:c.instructions+=1;goto B689379;
case 0x68937b:goto L68937b;
case 0x689382:c.instructions+=5;goto B689382;
case 0x689384:c.instructions+=4;goto B689384;
case 0x68938a:c.instructions+=3;goto B68938a;
case 0x68938c:c.instructions+=2;goto B68938c;
case 0x68938f:c.instructions+=1;goto B68938f;
case 0x689391:goto L689391;
case 0x689394:c.instructions+=5;goto B689394;
case 0x689396:c.instructions+=4;goto B689396;
case 0x689398:c.instructions+=3;goto B689398;
case 0x68939a:c.instructions+=2;goto B68939a;
case 0x6893a0:c.instructions+=1;goto B6893a0;
case 0x6893a2:goto L6893a2;
case 0x6893a4:goto L6893a4;
case 0x6893a6:c.instructions+=4;goto B6893a6;
case 0x6893a7:c.instructions+=3;goto B6893a7;
case 0x6893aa:c.instructions+=2;goto B6893aa;
case 0x6893ac:c.instructions+=1;goto B6893ac;
case 0x6893ae:goto L6893ae;
case 0x6893b3:goto L6893b3;
case 0x6893b8:c.instructions+=1;goto B6893b8;
case 0x6893be:goto L6893be;
case 0x6893c3:c.instructions+=1;goto B6893c3;
case 0x6893c9:goto L6893c9;
case 0x6893ce:c.instructions+=1;goto B6893ce;
case 0x6893d0:goto L6893d0;
case 0x6893d5:c.instructions+=1;goto B6893d5;
case 0x6893d7:goto L6893d7;
case 0x6893dc:c.instructions+=1;goto B6893dc;
case 0x6893e2:goto L6893e2;
case 0x6893e4:c.instructions+=1;goto B6893e4;
case 0x6893ea:goto L6893ea;
case 0x6893ed:c.instructions+=2;goto B6893ed;
case 0x6893f3:c.instructions+=1;goto B6893f3;
case 0x6893f5:goto L6893f5;
case 0x6893f8:c.instructions+=1;goto B6893f8;
case 0x6893fd:goto L6893fd;
case 0x6893ff:c.instructions+=3;goto B6893ff;
case 0x689402:c.instructions+=2;goto B689402;
case 0x689403:c.instructions+=1;goto B689403;
case 0x689405:goto L689405;
case 0x68940a:goto L68940a;
case 0x68940c:c.instructions+=1;goto B68940c;
case 0x689412:goto L689412;
case 0x689415:c.instructions+=2;goto B689415;
case 0x68941b:c.instructions+=1;goto B68941b;
case 0x68941d:goto L68941d;
case 0x689420:c.instructions+=1;goto B689420;
case 0x689425:goto L689425;
case 0x689427:c.instructions+=3;goto B689427;
case 0x68942a:c.instructions+=2;goto B68942a;
case 0x68942b:c.instructions+=1;goto B68942b;
case 0x68942d:goto L68942d;
case 0x689432:goto L689432;
case 0x689434:c.instructions+=1;goto B689434;
case 0x68943a:goto L68943a;
case 0x68943d:c.instructions+=2;goto B68943d;
case 0x689443:c.instructions+=1;goto B689443;
case 0x689445:goto L689445;
case 0x689448:c.instructions+=5;goto B689448;
case 0x68944a:c.instructions+=4;goto B68944a;
case 0x68944c:c.instructions+=3;goto B68944c;
case 0x68944f:c.instructions+=2;goto B68944f;
case 0x689450:c.instructions+=1;goto B689450;
case 0x689452:goto L689452;
case 0x689457:goto L689457;
case 0x689459:c.instructions+=1;goto B689459;
case 0x68945f:goto L68945f;
case 0x689462:c.instructions+=2;goto B689462;
case 0x689468:c.instructions+=1;goto B689468;
case 0x68946a:goto L68946a;
case 0x68946d:c.instructions+=5;goto B68946d;
case 0x68946f:c.instructions+=4;goto B68946f;
case 0x689471:c.instructions+=3;goto B689471;
case 0x689474:c.instructions+=2;goto B689474;
case 0x689475:c.instructions+=1;goto B689475;
case 0x689477:goto L689477;
case 0x68947c:goto L68947c;
case 0x68947e:c.instructions+=1;goto B68947e;
case 0x689484:goto L689484;
case 0x689487:c.instructions+=2;goto B689487;
case 0x68948d:c.instructions+=1;goto B68948d;
case 0x68948f:goto L68948f;
case 0x689492:c.instructions+=7;goto B689492;
case 0x689494:c.instructions+=6;goto B689494;
case 0x689496:c.instructions+=5;goto B689496;
case 0x68949c:c.instructions+=4;goto B68949c;
case 0x68949e:c.instructions+=3;goto B68949e;
case 0x6894a1:c.instructions+=2;goto B6894a1;
case 0x6894a2:c.instructions+=1;goto B6894a2;
case 0x6894a4:goto L6894a4;
case 0x6894a9:goto L6894a9;
case 0x6894ab:c.instructions+=1;goto B6894ab;
case 0x6894b1:goto L6894b1;
case 0x6894b4:c.instructions+=2;goto B6894b4;
case 0x6894ba:c.instructions+=1;goto B6894ba;
case 0x6894bc:goto L6894bc;
case 0x6894bf:c.instructions+=6;goto B6894bf;
case 0x6894c1:c.instructions+=5;goto B6894c1;
case 0x6894c3:c.instructions+=4;goto B6894c3;
case 0x6894c5:c.instructions+=3;goto B6894c5;
case 0x6894c8:c.instructions+=2;goto B6894c8;
case 0x6894c9:c.instructions+=1;goto B6894c9;
case 0x6894cb:goto L6894cb;
case 0x6894d0:goto L6894d0;
case 0x6894d5:c.instructions+=2;goto B6894d5;
case 0x6894d7:c.instructions+=1;goto B6894d7;
case 0x6894dd:goto L6894dd;
case 0x6894e3:goto L6894e3;
case 0x6894e8:c.instructions+=1;goto B6894e8;
case 0x6894ee:goto L6894ee;
case 0x6894f3:c.instructions+=1;goto B6894f3;
case 0x6894f9:goto L6894f9;
case 0x6894fe:c.instructions+=1;goto B6894fe;
case 0x689500:goto L689500;
case 0x689505:c.instructions+=1;goto B689505;
case 0x689507:goto L689507;
case 0x68950c:c.instructions+=1;goto B68950c;
case 0x689512:goto L689512;
case 0x689514:c.instructions+=1;goto B689514;
case 0x68951a:goto L68951a;
case 0x689520:c.instructions+=4;goto B689520;
case 0x689526:c.instructions+=3;goto B689526;
case 0x689529:c.instructions+=2;goto B689529;
case 0x68952b:c.instructions+=1;goto B68952b;
case 0x68952d:goto L68952d;
case 0x689530:c.instructions+=5;goto B689530;
case 0x689532:c.instructions+=4;goto B689532;
case 0x689535:c.instructions+=3;goto B689535;
case 0x689538:c.instructions+=2;goto B689538;
case 0x689539:c.instructions+=1;goto B689539;
case 0x68953b:goto L68953b;
case 0x689540:goto L689540;
case 0x689542:c.instructions+=1;goto B689542;
case 0x689548:goto L689548;
case 0x68954e:c.instructions+=4;goto B68954e;
case 0x689554:c.instructions+=3;goto B689554;
case 0x689557:c.instructions+=2;goto B689557;
case 0x689559:c.instructions+=1;goto B689559;
case 0x68955b:goto L68955b;
case 0x68955e:c.instructions+=4;goto B68955e;
case 0x689560:c.instructions+=3;goto B689560;
case 0x689562:c.instructions+=2;goto B689562;
case 0x689565:c.instructions+=1;goto B689565;
case 0x689567:goto L689567;
case 0x689569:c.instructions+=1;goto B689569;
case 0x68956b:goto L68956b;
case 0x68956d:goto L68956d;
case 0x689570:c.instructions+=3;goto B689570;
case 0x689573:c.instructions+=2;goto B689573;
case 0x689574:c.instructions+=1;goto B689574;
case 0x689576:goto L689576;
case 0x68957b:goto L68957b;
case 0x68957d:c.instructions+=1;goto B68957d;
case 0x689583:goto L689583;
case 0x689589:c.instructions+=4;goto B689589;
case 0x68958f:c.instructions+=3;goto B68958f;
case 0x689592:c.instructions+=2;goto B689592;
case 0x689594:c.instructions+=1;goto B689594;
case 0x689596:goto L689596;
case 0x689599:c.instructions+=4;goto B689599;
case 0x68959b:c.instructions+=3;goto B68959b;
case 0x68959d:c.instructions+=2;goto B68959d;
case 0x6895a0:c.instructions+=1;goto B6895a0;
case 0x6895a2:goto L6895a2;
case 0x6895a4:c.instructions+=1;goto B6895a4;
case 0x6895a6:goto L6895a6;
case 0x6895a8:goto L6895a8;
case 0x6895ab:c.instructions+=3;goto B6895ab;
case 0x6895ae:c.instructions+=2;goto B6895ae;
case 0x6895af:c.instructions+=1;goto B6895af;
case 0x6895b1:goto L6895b1;
case 0x6895b6:goto L6895b6;
case 0x6895b8:c.instructions+=1;goto B6895b8;
case 0x6895be:goto L6895be;
case 0x6895c4:c.instructions+=4;goto B6895c4;
case 0x6895ca:c.instructions+=3;goto B6895ca;
case 0x6895cd:c.instructions+=2;goto B6895cd;
case 0x6895cf:c.instructions+=1;goto B6895cf;
case 0x6895d1:goto L6895d1;
case 0x6895d4:c.instructions+=4;goto B6895d4;
case 0x6895d6:c.instructions+=3;goto B6895d6;
case 0x6895d8:c.instructions+=2;goto B6895d8;
case 0x6895db:c.instructions+=1;goto B6895db;
case 0x6895dd:goto L6895dd;
case 0x6895e0:c.instructions+=1;goto B6895e0;
case 0x6895e2:goto L6895e2;
case 0x6895e4:goto L6895e4;
case 0x6895e7:c.instructions+=3;goto B6895e7;
case 0x6895ea:c.instructions+=2;goto B6895ea;
case 0x6895eb:c.instructions+=1;goto B6895eb;
case 0x6895ed:goto L6895ed;
case 0x6895f2:goto L6895f2;
case 0x6895f4:c.instructions+=1;goto B6895f4;
case 0x6895fa:goto L6895fa;
case 0x689600:c.instructions+=4;goto B689600;
case 0x689606:c.instructions+=3;goto B689606;
case 0x689609:c.instructions+=2;goto B689609;
case 0x68960b:c.instructions+=1;goto B68960b;
case 0x68960d:goto L68960d;
case 0x689610:c.instructions+=4;goto B689610;
case 0x689612:c.instructions+=3;goto B689612;
case 0x689614:c.instructions+=2;goto B689614;
case 0x689617:c.instructions+=1;goto B689617;
case 0x689619:goto L689619;
case 0x68961c:c.instructions+=1;goto B68961c;
case 0x68961e:goto L68961e;
case 0x689620:goto L689620;
case 0x689623:c.instructions+=3;goto B689623;
case 0x689626:c.instructions+=2;goto B689626;
case 0x689627:c.instructions+=1;goto B689627;
case 0x689629:goto L689629;
case 0x68962e:goto L68962e;
case 0x689630:c.instructions+=1;goto B689630;
case 0x689636:goto L689636;
case 0x68963c:c.instructions+=4;goto B68963c;
case 0x689642:c.instructions+=3;goto B689642;
case 0x689645:c.instructions+=2;goto B689645;
case 0x689647:c.instructions+=1;goto B689647;
case 0x689649:goto L689649;
case 0x68964c:c.instructions+=5;goto B68964c;
case 0x68964e:c.instructions+=4;goto B68964e;
case 0x689651:c.instructions+=3;goto B689651;
case 0x689654:c.instructions+=2;goto B689654;
case 0x689655:c.instructions+=1;goto B689655;
case 0x689657:goto L689657;
case 0x68965c:goto L68965c;
case 0x689661:c.instructions+=1;goto B689661;
case 0x689667:goto L689667;
case 0x68966c:c.instructions+=1;goto B68966c;
case 0x689672:goto L689672;
case 0x689677:c.instructions+=1;goto B689677;
case 0x689679:goto L689679;
case 0x68967e:c.instructions+=1;goto B68967e;
case 0x689680:goto L689680;
case 0x689685:c.instructions+=1;goto B689685;
case 0x68968b:goto L68968b;
case 0x68968e:c.instructions+=8;goto B68968e;
case 0x689690:c.instructions+=7;goto B689690;
case 0x689692:c.instructions+=6;goto B689692;
case 0x689694:c.instructions+=5;goto B689694;
case 0x689697:c.instructions+=4;goto B689697;
case 0x689699:c.instructions+=3;goto B689699;
case 0x68969b:c.instructions+=2;goto B68969b;
case 0x68969c:c.instructions+=1;goto B68969c;
case 0x6896a2:goto L6896a2;
case 0x6896a5:c.instructions+=1;goto B6896a5;
case 0x6896ac:goto L6896ac;
case 0x6896b3:c.instructions+=9;goto B6896b3;
case 0x6896b5:c.instructions+=8;goto B6896b5;
case 0x6896b7:c.instructions+=7;goto B6896b7;
case 0x6896b9:c.instructions+=6;goto B6896b9;
case 0x6896ba:c.instructions+=5;goto B6896ba;
case 0x6896bd:c.instructions+=4;goto B6896bd;
case 0x6896bf:c.instructions+=3;goto B6896bf;
case 0x6896c1:c.instructions+=2;goto B6896c1;
case 0x6896c3:c.instructions+=1;goto B6896c3;
case 0x6896c5:goto L6896c5;
case 0x6896ca:goto L6896ca;
case 0x6896cd:c.instructions+=4;goto B6896cd;
case 0x6896d3:c.instructions+=3;goto B6896d3;
case 0x6896d4:c.instructions+=2;goto B6896d4;
case 0x6896d5:c.instructions+=1;goto B6896d5;
case 0x6896da:goto L6896da;
case 0x6896df:goto L6896df;
case 0x6896e1:c.instructions+=3;goto B6896e1;
case 0x6896e3:c.instructions+=2;goto B6896e3;
case 0x6896e5:c.instructions+=1;goto B6896e5;
case 0x6896eb:goto L6896eb;
case 0x6896f1:c.instructions+=3;goto B6896f1;
case 0x6896f7:c.instructions+=2;goto B6896f7;
case 0x6896fa:c.instructions+=1;goto B6896fa;
case 0x6896fc:goto L6896fc;
case 0x6896ff:c.instructions+=6;goto B6896ff;
case 0x689701:c.instructions+=5;goto B689701;
case 0x689704:c.instructions+=4;goto B689704;
case 0x689705:c.instructions+=3;goto B689705;
case 0x689707:c.instructions+=2;goto B689707;
case 0x689709:c.instructions+=1;goto B689709;
case 0x68970b:goto L68970b;
case 0x68970d:goto L68970d;
case 0x68970f:c.instructions+=1;goto B68970f;
case 0x689711:goto L689711;
case 0x689717:c.instructions+=6;goto B689717;
case 0x68971d:c.instructions+=5;goto B68971d;
case 0x689723:c.instructions+=4;goto B689723;
case 0x689726:c.instructions+=3;goto B689726;
case 0x689728:c.instructions+=2;goto B689728;
case 0x68972a:c.instructions+=1;goto B68972a;
case 0x68972c:goto L68972c;
case 0x68972f:c.instructions+=4;goto B68972f;
case 0x689735:c.instructions+=3;goto B689735;
case 0x689737:c.instructions+=2;goto B689737;
case 0x68973a:c.instructions+=1;goto B68973a;
case 0x68973c:goto L68973c;
case 0x68973e:c.instructions+=1;goto B68973e;
case 0x689740:goto L689740;
case 0x689743:goto L689743;
case 0x689746:c.instructions+=3;goto B689746;
case 0x689749:c.instructions+=2;goto B689749;
case 0x68974a:c.instructions+=1;goto B68974a;
case 0x68974c:goto L68974c;
case 0x68974e:goto L68974e;
case 0x689750:c.instructions+=1;goto B689750;
case 0x689752:goto L689752;
case 0x689758:c.instructions+=4;goto B689758;
case 0x68975e:c.instructions+=3;goto B68975e;
case 0x689761:c.instructions+=2;goto B689761;
case 0x689763:c.instructions+=1;goto B689763;
case 0x689765:goto L689765;
case 0x689768:c.instructions+=6;goto B689768;
case 0x68976a:c.instructions+=5;goto B68976a;
case 0x68976c:c.instructions+=4;goto B68976c;
case 0x68976f:c.instructions+=3;goto B68976f;
case 0x689772:c.instructions+=2;goto B689772;
case 0x689773:c.instructions+=1;goto B689773;
case 0x689775:goto L689775;
case 0x689778:c.instructions+=3;goto B689778;
case 0x68977b:c.instructions+=2;goto B68977b;
case 0x68977e:c.instructions+=1;goto B68977e;
case 0x689784:goto L689784;
case 0x689785:c.instructions+=5;goto B689785;
case 0x689786:c.instructions+=4;goto B689786;
case 0x689787:c.instructions+=3;goto B689787;
case 0x689789:c.instructions+=2;goto B689789;
case 0x68978a:c.instructions+=1;goto B68978a;
case 0x68978d:goto L68978d;
case 0x68978f:c.instructions+=36;goto B68978f;
case 0x689790:c.instructions+=35;goto B689790;
case 0x689792:c.instructions+=34;goto B689792;
case 0x689793:c.instructions+=33;goto B689793;
case 0x689796:c.instructions+=32;goto B689796;
case 0x689799:c.instructions+=31;goto B689799;
case 0x68979c:c.instructions+=30;goto B68979c;
case 0x68979f:c.instructions+=29;goto B68979f;
case 0x6897a3:c.instructions+=28;goto B6897a3;
case 0x6897a6:c.instructions+=27;goto B6897a6;
case 0x6897aa:c.instructions+=26;goto B6897aa;
case 0x6897ad:c.instructions+=25;goto B6897ad;
case 0x6897b1:c.instructions+=24;goto B6897b1;
case 0x6897b4:c.instructions+=23;goto B6897b4;
case 0x6897b7:c.instructions+=22;goto B6897b7;
case 0x6897bb:c.instructions+=21;goto B6897bb;
case 0x6897bf:c.instructions+=20;goto B6897bf;
case 0x6897c6:c.instructions+=19;goto B6897c6;
case 0x6897c9:c.instructions+=18;goto B6897c9;
case 0x6897cc:c.instructions+=17;goto B6897cc;
case 0x6897cf:c.instructions+=16;goto B6897cf;
case 0x6897d3:c.instructions+=15;goto B6897d3;
case 0x6897d7:c.instructions+=14;goto B6897d7;
case 0x6897de:c.instructions+=13;goto B6897de;
case 0x6897e1:c.instructions+=12;goto B6897e1;
case 0x6897e4:c.instructions+=11;goto B6897e4;
case 0x6897e8:c.instructions+=10;goto B6897e8;
case 0x6897ec:c.instructions+=9;goto B6897ec;
case 0x6897f3:c.instructions+=8;goto B6897f3;
case 0x6897f6:c.instructions+=7;goto B6897f6;
case 0x6897f9:c.instructions+=6;goto B6897f9;
case 0x6897fc:c.instructions+=5;goto B6897fc;
case 0x689800:c.instructions+=4;goto B689800;
case 0x689803:c.instructions+=3;goto B689803;
case 0x689804:c.instructions+=2;goto B689804;
case 0x689805:c.instructions+=1;goto B689805;
case 0x689808:goto L689808;
case 0x68980a:c.instructions+=38;goto B68980a;
case 0x68980b:c.instructions+=37;goto B68980b;
case 0x68980d:c.instructions+=36;goto B68980d;
case 0x689810:c.instructions+=35;goto B689810;
case 0x689814:c.instructions+=34;goto B689814;
case 0x689819:c.instructions+=33;goto B689819;
case 0x68981e:c.instructions+=32;goto B68981e;
case 0x689823:c.instructions+=31;goto B689823;
case 0x689827:c.instructions+=30;goto B689827;
case 0x68982b:c.instructions+=29;goto B68982b;
case 0x68982f:c.instructions+=28;goto B68982f;
case 0x689833:c.instructions+=27;goto B689833;
case 0x689837:c.instructions+=26;goto B689837;
case 0x68983b:c.instructions+=25;goto B68983b;
case 0x68983f:c.instructions+=24;goto B68983f;
case 0x689843:c.instructions+=23;goto B689843;
case 0x689847:c.instructions+=22;goto B689847;
case 0x68984b:c.instructions+=21;goto B68984b;
case 0x68984f:c.instructions+=20;goto B68984f;
case 0x689852:c.instructions+=19;goto B689852;
case 0x689856:c.instructions+=18;goto B689856;
case 0x68985a:c.instructions+=17;goto B68985a;
case 0x68985e:c.instructions+=16;goto B68985e;
case 0x689862:c.instructions+=15;goto B689862;
case 0x68986a:c.instructions+=14;goto B68986a;
case 0x68986e:c.instructions+=13;goto B68986e;
case 0x689876:c.instructions+=12;goto B689876;
case 0x68987a:c.instructions+=11;goto B68987a;
case 0x68987e:c.instructions+=10;goto B68987e;
case 0x689882:c.instructions+=9;goto B689882;
case 0x689886:c.instructions+=8;goto B689886;
case 0x68988a:c.instructions+=7;goto B68988a;
case 0x68988f:c.instructions+=6;goto B68988f;
case 0x689893:c.instructions+=5;goto B689893;
case 0x689898:c.instructions+=4;goto B689898;
case 0x68989d:c.instructions+=3;goto B68989d;
case 0x6898a0:c.instructions+=2;goto B6898a0;
case 0x6898a1:c.instructions+=1;goto B6898a1;
case 0x6898a4:goto L6898a4;
case 0x6898a6:c.instructions+=42;goto B6898a6;
case 0x6898a7:c.instructions+=41;goto B6898a7;
case 0x6898a9:c.instructions+=40;goto B6898a9;
case 0x6898aa:c.instructions+=39;goto B6898aa;
case 0x6898ad:c.instructions+=38;goto B6898ad;
case 0x6898b0:c.instructions+=37;goto B6898b0;
case 0x6898b1:c.instructions+=36;goto B6898b1;
case 0x6898b3:c.instructions+=35;goto B6898b3;
case 0x6898b6:c.instructions+=34;goto B6898b6;
case 0x6898b9:c.instructions+=33;goto B6898b9;
case 0x6898bd:c.instructions+=32;goto B6898bd;
case 0x6898c0:c.instructions+=31;goto B6898c0;
case 0x6898c4:c.instructions+=30;goto B6898c4;
case 0x6898c7:c.instructions+=29;goto B6898c7;
case 0x6898ca:c.instructions+=28;goto B6898ca;
case 0x6898cd:c.instructions+=27;goto B6898cd;
case 0x6898d0:c.instructions+=26;goto B6898d0;
case 0x6898d3:c.instructions+=25;goto B6898d3;
case 0x6898d6:c.instructions+=24;goto B6898d6;
case 0x6898d9:c.instructions+=23;goto B6898d9;
case 0x6898dd:c.instructions+=22;goto B6898dd;
case 0x6898e1:c.instructions+=21;goto B6898e1;
case 0x6898e5:c.instructions+=20;goto B6898e5;
case 0x6898e9:c.instructions+=19;goto B6898e9;
case 0x6898ee:c.instructions+=18;goto B6898ee;
case 0x6898f2:c.instructions+=17;goto B6898f2;
case 0x6898f5:c.instructions+=16;goto B6898f5;
case 0x6898f9:c.instructions+=15;goto B6898f9;
case 0x6898fc:c.instructions+=14;goto B6898fc;
case 0x689900:c.instructions+=13;goto B689900;
case 0x689904:c.instructions+=12;goto B689904;
case 0x689908:c.instructions+=11;goto B689908;
case 0x68990b:c.instructions+=10;goto B68990b;
case 0x68990f:c.instructions+=9;goto B68990f;
case 0x689916:c.instructions+=8;goto B689916;
case 0x689919:c.instructions+=7;goto B689919;
case 0x68991c:c.instructions+=6;goto B68991c;
case 0x68991f:c.instructions+=5;goto B68991f;
case 0x689921:c.instructions+=4;goto B689921;
case 0x689922:c.instructions+=3;goto B689922;
case 0x689924:c.instructions+=2;goto B689924;
case 0x689925:c.instructions+=1;goto B689925;
case 0x689928:goto L689928;
case 0x68992a:c.instructions+=27;goto B68992a;
case 0x68992b:c.instructions+=26;goto B68992b;
case 0x68992d:c.instructions+=25;goto B68992d;
case 0x68992e:c.instructions+=24;goto B68992e;
case 0x689931:c.instructions+=23;goto B689931;
case 0x689934:c.instructions+=22;goto B689934;
case 0x689935:c.instructions+=21;goto B689935;
case 0x689937:c.instructions+=20;goto B689937;
case 0x68993a:c.instructions+=19;goto B68993a;
case 0x68993f:c.instructions+=18;goto B68993f;
case 0x689944:c.instructions+=17;goto B689944;
case 0x689949:c.instructions+=16;goto B689949;
case 0x68994e:c.instructions+=15;goto B68994e;
case 0x689951:c.instructions+=14;goto B689951;
case 0x689956:c.instructions+=13;goto B689956;
case 0x68995b:c.instructions+=12;goto B68995b;
case 0x689960:c.instructions+=11;goto B689960;
case 0x689968:c.instructions+=10;goto B689968;
case 0x68996b:c.instructions+=9;goto B68996b;
case 0x68996c:c.instructions+=8;goto B68996c;
case 0x68996f:c.instructions+=7;goto B68996f;
case 0x689974:c.instructions+=6;goto B689974;
case 0x689978:c.instructions+=5;goto B689978;
case 0x689979:c.instructions+=4;goto B689979;
case 0x68997c:c.instructions+=3;goto B68997c;
case 0x68997d:c.instructions+=2;goto B68997d;
case 0x689981:c.instructions+=1;goto B689981;
case 0x689986:goto L689986;
case 0x68998a:c.instructions+=29;goto B68998a;
case 0x68998d:c.instructions+=28;goto B68998d;
case 0x689992:c.instructions+=27;goto B689992;
case 0x689997:c.instructions+=26;goto B689997;
case 0x68999a:c.instructions+=25;goto B68999a;
case 0x68999e:c.instructions+=24;goto B68999e;
case 0x6899a1:c.instructions+=23;goto B6899a1;
case 0x6899a5:c.instructions+=22;goto B6899a5;
case 0x6899a9:c.instructions+=21;goto B6899a9;
case 0x6899ac:c.instructions+=20;goto B6899ac;
case 0x6899b0:c.instructions+=19;goto B6899b0;
case 0x6899b3:c.instructions+=18;goto B6899b3;
case 0x6899b6:c.instructions+=17;goto B6899b6;
case 0x6899b9:c.instructions+=16;goto B6899b9;
case 0x6899bd:c.instructions+=15;goto B6899bd;
case 0x6899c2:c.instructions+=14;goto B6899c2;
case 0x6899c5:c.instructions+=13;goto B6899c5;
case 0x6899c8:c.instructions+=12;goto B6899c8;
case 0x6899cb:c.instructions+=11;goto B6899cb;
case 0x6899cf:c.instructions+=10;goto B6899cf;
case 0x6899d2:c.instructions+=9;goto B6899d2;
case 0x6899d5:c.instructions+=8;goto B6899d5;
case 0x6899d8:c.instructions+=7;goto B6899d8;
case 0x6899db:c.instructions+=6;goto B6899db;
case 0x6899de:c.instructions+=5;goto B6899de;
case 0x6899e0:c.instructions+=4;goto B6899e0;
case 0x6899e1:c.instructions+=3;goto B6899e1;
case 0x6899e3:c.instructions+=2;goto B6899e3;
case 0x6899e4:c.instructions+=1;goto B6899e4;
case 0x6899e7:goto L6899e7;
case 0x6899e9:c.instructions+=11;goto B6899e9;
case 0x6899ea:c.instructions+=10;goto B6899ea;
case 0x6899ec:c.instructions+=9;goto B6899ec;
case 0x6899ef:c.instructions+=8;goto B6899ef;
case 0x6899f2:c.instructions+=7;goto B6899f2;
case 0x6899f5:c.instructions+=6;goto B6899f5;
case 0x6899f7:c.instructions+=5;goto B6899f7;
case 0x6899fa:c.instructions+=4;goto B6899fa;
case 0x689a00:c.instructions+=3;goto B689a00;
case 0x689a02:c.instructions+=2;goto B689a02;
case 0x689a05:c.instructions+=1;goto B689a05;
case 0x689a07:goto L689a07;
case 0x689a0d:c.instructions+=19;goto B689a0d;
case 0x689a10:c.instructions+=18;goto B689a10;
case 0x689a12:c.instructions+=17;goto B689a12;
case 0x689a18:c.instructions+=16;goto B689a18;
case 0x689a1a:c.instructions+=15;goto B689a1a;
case 0x689a1d:c.instructions+=14;goto B689a1d;
case 0x689a23:c.instructions+=13;goto B689a23;
case 0x689a26:c.instructions+=12;goto B689a26;
case 0x689a29:c.instructions+=11;goto B689a29;
case 0x689a2b:c.instructions+=10;goto B689a2b;
case 0x689a2d:c.instructions+=9;goto B689a2d;
case 0x689a30:c.instructions+=8;goto B689a30;
case 0x689a33:c.instructions+=7;goto B689a33;
case 0x689a35:c.instructions+=6;goto B689a35;
case 0x689a38:c.instructions+=5;goto B689a38;
case 0x689a3b:c.instructions+=4;goto B689a3b;
case 0x689a3e:c.instructions+=3;goto B689a3e;
case 0x689a40:c.instructions+=2;goto B689a40;
case 0x689a43:c.instructions+=1;goto B689a43;
case 0x689a48:goto L689a48;
case 0x689a4b:c.instructions+=14;goto B689a4b;
case 0x689a4d:c.instructions+=13;goto B689a4d;
case 0x689a4f:c.instructions+=12;goto B689a4f;
case 0x689a52:c.instructions+=11;goto B689a52;
case 0x689a55:c.instructions+=10;goto B689a55;
case 0x689a58:c.instructions+=9;goto B689a58;
case 0x689a5b:c.instructions+=8;goto B689a5b;
case 0x689a5c:c.instructions+=7;goto B689a5c;
case 0x689a5f:c.instructions+=6;goto B689a5f;
case 0x689a60:c.instructions+=5;goto B689a60;
case 0x689a62:c.instructions+=4;goto B689a62;
case 0x689a64:c.instructions+=3;goto B689a64;
case 0x689a65:c.instructions+=2;goto B689a65;
case 0x689a68:c.instructions+=1;goto B689a68;
case 0x689a6a:goto L689a6a;
case 0x689a6b:goto L689a6b;
case 0x689a6f:c.instructions+=5;goto B689a6f;
case 0x689a72:c.instructions+=4;goto B689a72;
case 0x689a75:c.instructions+=3;goto B689a75;
case 0x689a77:c.instructions+=2;goto B689a77;
case 0x689a7a:c.instructions+=1;goto B689a7a;
case 0x689a7c:goto L689a7c;
case 0x689a7e:c.instructions+=2;goto B689a7e;
case 0x689a7f:c.instructions+=1;goto B689a7f;
case 0x689a82:goto L689a82;
case 0x689a84:c.instructions+=46;goto B689a84;
case 0x689a87:c.instructions+=45;goto B689a87;
case 0x689a8d:c.instructions+=44;goto B689a8d;
case 0x689a91:c.instructions+=43;goto B689a91;
case 0x689a93:c.instructions+=42;goto B689a93;
case 0x689a96:c.instructions+=41;goto B689a96;
case 0x689a9a:c.instructions+=40;goto B689a9a;
case 0x689aa0:c.instructions+=39;goto B689aa0;
case 0x689aa3:c.instructions+=38;goto B689aa3;
case 0x689aa6:c.instructions+=37;goto B689aa6;
case 0x689aaa:c.instructions+=36;goto B689aaa;
case 0x689aad:c.instructions+=35;goto B689aad;
case 0x689aaf:c.instructions+=34;goto B689aaf;
case 0x689ab2:c.instructions+=33;goto B689ab2;
case 0x689ab8:c.instructions+=32;goto B689ab8;
case 0x689aba:c.instructions+=31;goto B689aba;
case 0x689abc:c.instructions+=30;goto B689abc;
case 0x689ac2:c.instructions+=29;goto B689ac2;
case 0x689ac4:c.instructions+=28;goto B689ac4;
case 0x689ac7:c.instructions+=27;goto B689ac7;
case 0x689acd:c.instructions+=26;goto B689acd;
case 0x689ad0:c.instructions+=25;goto B689ad0;
case 0x689ad3:c.instructions+=24;goto B689ad3;
case 0x689ad6:c.instructions+=23;goto B689ad6;
case 0x689ad9:c.instructions+=22;goto B689ad9;
case 0x689adc:c.instructions+=21;goto B689adc;
case 0x689ade:c.instructions+=20;goto B689ade;
case 0x689ae1:c.instructions+=19;goto B689ae1;
case 0x689ae3:c.instructions+=18;goto B689ae3;
case 0x689ae5:c.instructions+=17;goto B689ae5;
case 0x689ae8:c.instructions+=16;goto B689ae8;
case 0x689aea:c.instructions+=15;goto B689aea;
case 0x689aed:c.instructions+=14;goto B689aed;
case 0x689af0:c.instructions+=13;goto B689af0;
case 0x689af2:c.instructions+=12;goto B689af2;
case 0x689af5:c.instructions+=11;goto B689af5;
case 0x689af8:c.instructions+=10;goto B689af8;
case 0x689afa:c.instructions+=9;goto B689afa;
case 0x689afd:c.instructions+=8;goto B689afd;
case 0x689aff:c.instructions+=7;goto B689aff;
case 0x689b02:c.instructions+=6;goto B689b02;
case 0x689b03:c.instructions+=5;goto B689b03;
case 0x689b06:c.instructions+=4;goto B689b06;
case 0x689b07:c.instructions+=3;goto B689b07;
case 0x689b08:c.instructions+=2;goto B689b08;
case 0x689b0a:c.instructions+=1;goto B689b0a;
case 0x689b0d:goto L689b0d;
case 0x689b0f:c.instructions+=2;goto B689b0f;
case 0x689b10:c.instructions+=1;goto B689b10;
case 0x689b13:goto L689b13;
case 0x689b15:c.instructions+=20;goto B689b15;
case 0x689b16:c.instructions+=19;goto B689b16;
case 0x689b18:c.instructions+=18;goto B689b18;
case 0x689b1b:c.instructions+=17;goto B689b1b;
case 0x689b1e:c.instructions+=16;goto B689b1e;
case 0x689b21:c.instructions+=15;goto B689b21;
case 0x689b25:c.instructions+=14;goto B689b25;
case 0x689b29:c.instructions+=13;goto B689b29;
case 0x689b2d:c.instructions+=12;goto B689b2d;
case 0x689b30:c.instructions+=11;goto B689b30;
case 0x689b35:c.instructions+=10;goto B689b35;
case 0x689b39:c.instructions+=9;goto B689b39;
case 0x689b3d:c.instructions+=8;goto B689b3d;
case 0x689b40:c.instructions+=7;goto B689b40;
case 0x689b43:c.instructions+=6;goto B689b43;
case 0x689b46:c.instructions+=5;goto B689b46;
case 0x689b49:c.instructions+=4;goto B689b49;
case 0x689b4c:c.instructions+=3;goto B689b4c;
case 0x689b4f:c.instructions+=2;goto B689b4f;
case 0x689b50:c.instructions+=1;goto B689b50;
case 0x689b53:goto L689b53;
case 0x689b55:c.instructions+=28;goto B689b55;
case 0x689b56:c.instructions+=27;goto B689b56;
case 0x689b58:c.instructions+=26;goto B689b58;
case 0x689b5b:c.instructions+=25;goto B689b5b;
case 0x689b5e:c.instructions+=24;goto B689b5e;
case 0x689b61:c.instructions+=23;goto B689b61;
case 0x689b65:c.instructions+=22;goto B689b65;
case 0x689b69:c.instructions+=21;goto B689b69;
case 0x689b6d:c.instructions+=20;goto B689b6d;
case 0x689b70:c.instructions+=19;goto B689b70;
case 0x689b75:c.instructions+=18;goto B689b75;
case 0x689b79:c.instructions+=17;goto B689b79;
case 0x689b7d:c.instructions+=16;goto B689b7d;
case 0x689b80:c.instructions+=15;goto B689b80;
case 0x689b83:c.instructions+=14;goto B689b83;
case 0x689b86:c.instructions+=13;goto B689b86;
case 0x689b89:c.instructions+=12;goto B689b89;
case 0x689b8c:c.instructions+=11;goto B689b8c;
case 0x689b8f:c.instructions+=10;goto B689b8f;
case 0x689b92:c.instructions+=9;goto B689b92;
case 0x689b95:c.instructions+=8;goto B689b95;
case 0x689b98:c.instructions+=7;goto B689b98;
case 0x689b9b:c.instructions+=6;goto B689b9b;
case 0x689b9f:c.instructions+=5;goto B689b9f;
case 0x689ba2:c.instructions+=4;goto B689ba2;
case 0x689ba5:c.instructions+=3;goto B689ba5;
case 0x689ba8:c.instructions+=2;goto B689ba8;
case 0x689ba9:c.instructions+=1;goto B689ba9;
case 0x689bac:goto L689bac;
case 0x689bae:c.instructions+=18;goto B689bae;
case 0x689baf:c.instructions+=17;goto B689baf;
case 0x689bb1:c.instructions+=16;goto B689bb1;
case 0x689bb4:c.instructions+=15;goto B689bb4;
case 0x689bb7:c.instructions+=14;goto B689bb7;
case 0x689bbb:c.instructions+=13;goto B689bbb;
case 0x689bbe:c.instructions+=12;goto B689bbe;
case 0x689bc2:c.instructions+=11;goto B689bc2;
case 0x689bc6:c.instructions+=10;goto B689bc6;
case 0x689bcb:c.instructions+=9;goto B689bcb;
case 0x689bce:c.instructions+=8;goto B689bce;
case 0x689bd2:c.instructions+=7;goto B689bd2;
case 0x689bd5:c.instructions+=6;goto B689bd5;
case 0x689bd8:c.instructions+=5;goto B689bd8;
case 0x689bdb:c.instructions+=4;goto B689bdb;
case 0x689bde:c.instructions+=3;goto B689bde;
case 0x689be1:c.instructions+=2;goto B689be1;
case 0x689be2:c.instructions+=1;goto B689be2;
case 0x689be5:goto L689be5;
case 0x689be7:c.instructions+=17;goto B689be7;
case 0x689be8:c.instructions+=16;goto B689be8;
case 0x689bea:c.instructions+=15;goto B689bea;
case 0x689bed:c.instructions+=14;goto B689bed;
case 0x689bf1:c.instructions+=13;goto B689bf1;
case 0x689bf6:c.instructions+=12;goto B689bf6;
case 0x689bfb:c.instructions+=11;goto B689bfb;
case 0x689bfe:c.instructions+=10;goto B689bfe;
case 0x689c01:c.instructions+=9;goto B689c01;
case 0x689c04:c.instructions+=8;goto B689c04;
case 0x689c08:c.instructions+=7;goto B689c08;
case 0x689c0c:c.instructions+=6;goto B689c0c;
case 0x689c10:c.instructions+=5;goto B689c10;
case 0x689c14:c.instructions+=4;goto B689c14;
case 0x689c18:c.instructions+=3;goto B689c18;
case 0x689c1b:c.instructions+=2;goto B689c1b;
case 0x689c22:c.instructions+=1;goto B689c22;
case 0x689c24:goto L689c24;
case 0x689c26:c.instructions+=4;goto B689c26;
case 0x689c28:c.instructions+=3;goto B689c28;
case 0x689c2b:c.instructions+=2;goto B689c2b;
case 0x689c2e:c.instructions+=1;goto B689c2e;
case 0x689c31:goto L689c31;
case 0x689c35:c.instructions+=13;goto B689c35;
case 0x689c38:c.instructions+=12;goto B689c38;
case 0x689c3c:c.instructions+=11;goto B689c3c;
case 0x689c40:c.instructions+=10;goto B689c40;
case 0x689c48:c.instructions+=9;goto B689c48;
case 0x689c50:c.instructions+=8;goto B689c50;
case 0x689c54:c.instructions+=7;goto B689c54;
case 0x689c58:c.instructions+=6;goto B689c58;
case 0x689c5c:c.instructions+=5;goto B689c5c;
case 0x689c60:c.instructions+=4;goto B689c60;
case 0x689c64:c.instructions+=3;goto B689c64;
case 0x689c68:c.instructions+=2;goto B689c68;
case 0x689c6d:c.instructions+=1;goto B689c6d;
case 0x689c72:goto L689c72;
case 0x689c75:c.instructions+=2;goto B689c75;
case 0x689c76:c.instructions+=1;goto B689c76;
case 0x689c79:goto L689c79;
case 0x689c7b:c.instructions+=17;goto B689c7b;
case 0x689c7c:c.instructions+=16;goto B689c7c;
case 0x689c7e:c.instructions+=15;goto B689c7e;
case 0x689c81:c.instructions+=14;goto B689c81;
case 0x689c85:c.instructions+=13;goto B689c85;
case 0x689c8a:c.instructions+=12;goto B689c8a;
case 0x689c8f:c.instructions+=11;goto B689c8f;
case 0x689c92:c.instructions+=10;goto B689c92;
case 0x689c95:c.instructions+=9;goto B689c95;
case 0x689c98:c.instructions+=8;goto B689c98;
case 0x689c9c:c.instructions+=7;goto B689c9c;
case 0x689ca0:c.instructions+=6;goto B689ca0;
case 0x689ca4:c.instructions+=5;goto B689ca4;
case 0x689ca8:c.instructions+=4;goto B689ca8;
case 0x689cac:c.instructions+=3;goto B689cac;
case 0x689caf:c.instructions+=2;goto B689caf;
case 0x689cb6:c.instructions+=1;goto B689cb6;
case 0x689cb8:goto L689cb8;
case 0x689cba:c.instructions+=5;goto B689cba;
case 0x689cbc:c.instructions+=4;goto B689cbc;
case 0x689cbf:c.instructions+=3;goto B689cbf;
case 0x689cc2:c.instructions+=2;goto B689cc2;
case 0x689cc5:c.instructions+=1;goto B689cc5;
case 0x689cc9:goto L689cc9;
case 0x689ccd:c.instructions+=15;goto B689ccd;
case 0x689cd0:c.instructions+=14;goto B689cd0;
case 0x689cd4:c.instructions+=13;goto B689cd4;
case 0x689cd8:c.instructions+=12;goto B689cd8;
case 0x689ce0:c.instructions+=11;goto B689ce0;
case 0x689ce8:c.instructions+=10;goto B689ce8;
case 0x689cec:c.instructions+=9;goto B689cec;
case 0x689cf0:c.instructions+=8;goto B689cf0;
case 0x689cf4:c.instructions+=7;goto B689cf4;
case 0x689cf8:c.instructions+=6;goto B689cf8;
case 0x689cfc:c.instructions+=5;goto B689cfc;
case 0x689d01:c.instructions+=4;goto B689d01;
case 0x689d05:c.instructions+=3;goto B689d05;
case 0x689d0a:c.instructions+=2;goto B689d0a;
case 0x689d0f:c.instructions+=1;goto B689d0f;
case 0x689d14:goto L689d14;
case 0x689d17:c.instructions+=2;goto B689d17;
case 0x689d18:c.instructions+=1;goto B689d18;
case 0x689d1b:goto L689d1b;
case 0x689d1d:c.instructions+=157;goto B689d1d;
case 0x689d1e:c.instructions+=156;goto B689d1e;
case 0x689d20:c.instructions+=155;goto B689d20;
case 0x689d23:c.instructions+=154;goto B689d23;
case 0x689d26:c.instructions+=153;goto B689d26;
case 0x689d29:c.instructions+=152;goto B689d29;
case 0x689d2a:c.instructions+=151;goto B689d2a;
case 0x689d2b:c.instructions+=150;goto B689d2b;
case 0x689d2e:c.instructions+=149;goto B689d2e;
case 0x689d32:c.instructions+=148;goto B689d32;
case 0x689d34:c.instructions+=147;goto B689d34;
case 0x689d3a:c.instructions+=146;goto B689d3a;
case 0x689d3d:c.instructions+=145;goto B689d3d;
case 0x689d40:c.instructions+=144;goto B689d40;
case 0x689d44:c.instructions+=143;goto B689d44;
case 0x689d48:c.instructions+=142;goto B689d48;
case 0x689d4c:c.instructions+=141;goto B689d4c;
case 0x689d50:c.instructions+=140;goto B689d50;
case 0x689d54:c.instructions+=139;goto B689d54;
case 0x689d57:c.instructions+=138;goto B689d57;
case 0x689d5b:c.instructions+=137;goto B689d5b;
case 0x689d5f:c.instructions+=136;goto B689d5f;
case 0x689d62:c.instructions+=135;goto B689d62;
case 0x689d66:c.instructions+=134;goto B689d66;
case 0x689d6a:c.instructions+=133;goto B689d6a;
case 0x689d6d:c.instructions+=132;goto B689d6d;
case 0x689d70:c.instructions+=131;goto B689d70;
case 0x689d74:c.instructions+=130;goto B689d74;
case 0x689d77:c.instructions+=129;goto B689d77;
case 0x689d7b:c.instructions+=128;goto B689d7b;
case 0x689d7e:c.instructions+=127;goto B689d7e;
case 0x689d82:c.instructions+=126;goto B689d82;
case 0x689d86:c.instructions+=125;goto B689d86;
case 0x689d89:c.instructions+=124;goto B689d89;
case 0x689d8c:c.instructions+=123;goto B689d8c;
case 0x689d8f:c.instructions+=122;goto B689d8f;
case 0x689d96:c.instructions+=121;goto B689d96;
case 0x689d99:c.instructions+=120;goto B689d99;
case 0x689d9c:c.instructions+=119;goto B689d9c;
case 0x689d9f:c.instructions+=118;goto B689d9f;
case 0x689da2:c.instructions+=117;goto B689da2;
case 0x689da5:c.instructions+=116;goto B689da5;
case 0x689da8:c.instructions+=115;goto B689da8;
case 0x689dac:c.instructions+=114;goto B689dac;
case 0x689db0:c.instructions+=113;goto B689db0;
case 0x689db7:c.instructions+=112;goto B689db7;
case 0x689dba:c.instructions+=111;goto B689dba;
case 0x689dbd:c.instructions+=110;goto B689dbd;
case 0x689dc0:c.instructions+=109;goto B689dc0;
case 0x689dc3:c.instructions+=108;goto B689dc3;
case 0x689dc7:c.instructions+=107;goto B689dc7;
case 0x689dca:c.instructions+=106;goto B689dca;
case 0x689dd1:c.instructions+=105;goto B689dd1;
case 0x689dd4:c.instructions+=104;goto B689dd4;
case 0x689dd7:c.instructions+=103;goto B689dd7;
case 0x689dda:c.instructions+=102;goto B689dda;
case 0x689ddd:c.instructions+=101;goto B689ddd;
case 0x689de0:c.instructions+=100;goto B689de0;
case 0x689de4:c.instructions+=99;goto B689de4;
case 0x689de7:c.instructions+=98;goto B689de7;
case 0x689deb:c.instructions+=97;goto B689deb;
case 0x689df2:c.instructions+=96;goto B689df2;
case 0x689df5:c.instructions+=95;goto B689df5;
case 0x689df8:c.instructions+=94;goto B689df8;
case 0x689dfb:c.instructions+=93;goto B689dfb;
case 0x689dfe:c.instructions+=92;goto B689dfe;
case 0x689e02:c.instructions+=91;goto B689e02;
case 0x689e05:c.instructions+=90;goto B689e05;
case 0x689e0c:c.instructions+=89;goto B689e0c;
case 0x689e0f:c.instructions+=88;goto B689e0f;
case 0x689e12:c.instructions+=87;goto B689e12;
case 0x689e15:c.instructions+=86;goto B689e15;
case 0x689e18:c.instructions+=85;goto B689e18;
case 0x689e1b:c.instructions+=84;goto B689e1b;
case 0x689e1e:c.instructions+=83;goto B689e1e;
case 0x689e21:c.instructions+=82;goto B689e21;
case 0x689e25:c.instructions+=81;goto B689e25;
case 0x689e28:c.instructions+=80;goto B689e28;
case 0x689e2c:c.instructions+=79;goto B689e2c;
case 0x689e33:c.instructions+=78;goto B689e33;
case 0x689e36:c.instructions+=77;goto B689e36;
case 0x689e39:c.instructions+=76;goto B689e39;
case 0x689e3d:c.instructions+=75;goto B689e3d;
case 0x689e41:c.instructions+=74;goto B689e41;
case 0x689e48:c.instructions+=73;goto B689e48;
case 0x689e4b:c.instructions+=72;goto B689e4b;
case 0x689e4e:c.instructions+=71;goto B689e4e;
case 0x689e52:c.instructions+=70;goto B689e52;
case 0x689e55:c.instructions+=69;goto B689e55;
case 0x689e59:c.instructions+=68;goto B689e59;
case 0x689e5d:c.instructions+=67;goto B689e5d;
case 0x689e64:c.instructions+=66;goto B689e64;
case 0x689e68:c.instructions+=65;goto B689e68;
case 0x689e6b:c.instructions+=64;goto B689e6b;
case 0x689e6e:c.instructions+=63;goto B689e6e;
case 0x689e71:c.instructions+=62;goto B689e71;
case 0x689e74:c.instructions+=61;goto B689e74;
case 0x689e77:c.instructions+=60;goto B689e77;
case 0x689e7a:c.instructions+=59;goto B689e7a;
case 0x689e7d:c.instructions+=58;goto B689e7d;
case 0x689e80:c.instructions+=57;goto B689e80;
case 0x689e84:c.instructions+=56;goto B689e84;
case 0x689e88:c.instructions+=55;goto B689e88;
case 0x689e8c:c.instructions+=54;goto B689e8c;
case 0x689e90:c.instructions+=53;goto B689e90;
case 0x689e93:c.instructions+=52;goto B689e93;
case 0x689e96:c.instructions+=51;goto B689e96;
case 0x689e99:c.instructions+=50;goto B689e99;
case 0x689e9c:c.instructions+=49;goto B689e9c;
case 0x689ea0:c.instructions+=48;goto B689ea0;
case 0x689ea4:c.instructions+=47;goto B689ea4;
case 0x689ea7:c.instructions+=46;goto B689ea7;
case 0x689eaa:c.instructions+=45;goto B689eaa;
case 0x689eae:c.instructions+=44;goto B689eae;
case 0x689eb1:c.instructions+=43;goto B689eb1;
case 0x689eb4:c.instructions+=42;goto B689eb4;
case 0x689eb7:c.instructions+=41;goto B689eb7;
case 0x689ebe:c.instructions+=40;goto B689ebe;
case 0x689ec5:c.instructions+=39;goto B689ec5;
case 0x689ec8:c.instructions+=38;goto B689ec8;
case 0x689ecc:c.instructions+=37;goto B689ecc;
case 0x689ed0:c.instructions+=36;goto B689ed0;
case 0x689ed3:c.instructions+=35;goto B689ed3;
case 0x689ed6:c.instructions+=34;goto B689ed6;
case 0x689ed9:c.instructions+=33;goto B689ed9;
case 0x689edc:c.instructions+=32;goto B689edc;
case 0x689edf:c.instructions+=31;goto B689edf;
case 0x689ee3:c.instructions+=30;goto B689ee3;
case 0x689ee6:c.instructions+=29;goto B689ee6;
case 0x689eea:c.instructions+=28;goto B689eea;
case 0x689eee:c.instructions+=27;goto B689eee;
case 0x689ef2:c.instructions+=26;goto B689ef2;
case 0x689ef5:c.instructions+=25;goto B689ef5;
case 0x689ef8:c.instructions+=24;goto B689ef8;
case 0x689efb:c.instructions+=23;goto B689efb;
case 0x689efe:c.instructions+=22;goto B689efe;
case 0x689f01:c.instructions+=21;goto B689f01;
case 0x689f04:c.instructions+=20;goto B689f04;
case 0x689f07:c.instructions+=19;goto B689f07;
case 0x689f0e:c.instructions+=18;goto B689f0e;
case 0x689f15:c.instructions+=17;goto B689f15;
case 0x689f18:c.instructions+=16;goto B689f18;
case 0x689f1c:c.instructions+=15;goto B689f1c;
case 0x689f20:c.instructions+=14;goto B689f20;
case 0x689f23:c.instructions+=13;goto B689f23;
case 0x689f26:c.instructions+=12;goto B689f26;
case 0x689f2a:c.instructions+=11;goto B689f2a;
case 0x689f2d:c.instructions+=10;goto B689f2d;
case 0x689f30:c.instructions+=9;goto B689f30;
case 0x689f34:c.instructions+=8;goto B689f34;
case 0x689f37:c.instructions+=7;goto B689f37;
case 0x689f3a:c.instructions+=6;goto B689f3a;
case 0x689f3d:c.instructions+=5;goto B689f3d;
case 0x689f40:c.instructions+=4;goto B689f40;
case 0x689f43:c.instructions+=3;goto B689f43;
case 0x689f46:c.instructions+=2;goto B689f46;
case 0x689f4a:c.instructions+=1;goto B689f4a;
case 0x689f4c:goto L689f4c;
case 0x689f4f:c.instructions+=2;goto B689f4f;
case 0x689f51:c.instructions+=1;goto B689f51;
case 0x689f53:goto L689f53;
case 0x689f56:c.instructions+=1;goto B689f56;
case 0x689f5a:goto L689f5a;
case 0x689f5d:c.instructions+=27;goto B689f5d;
case 0x689f64:c.instructions+=26;goto B689f64;
case 0x689f67:c.instructions+=25;goto B689f67;
case 0x689f6a:c.instructions+=24;goto B689f6a;
case 0x689f6e:c.instructions+=23;goto B689f6e;
case 0x689f71:c.instructions+=22;goto B689f71;
case 0x689f75:c.instructions+=21;goto B689f75;
case 0x689f79:c.instructions+=20;goto B689f79;
case 0x689f7d:c.instructions+=19;goto B689f7d;
case 0x689f81:c.instructions+=18;goto B689f81;
case 0x689f85:c.instructions+=17;goto B689f85;
case 0x689f88:c.instructions+=16;goto B689f88;
case 0x689f8b:c.instructions+=15;goto B689f8b;
case 0x689f8f:c.instructions+=14;goto B689f8f;
case 0x689f92:c.instructions+=13;goto B689f92;
case 0x689f96:c.instructions+=12;goto B689f96;
case 0x689f9a:c.instructions+=11;goto B689f9a;
case 0x689f9d:c.instructions+=10;goto B689f9d;
case 0x689fa1:c.instructions+=9;goto B689fa1;
case 0x689fa5:c.instructions+=8;goto B689fa5;
case 0x689fa8:c.instructions+=7;goto B689fa8;
case 0x689fac:c.instructions+=6;goto B689fac;
case 0x689fb0:c.instructions+=5;goto B689fb0;
case 0x689fb2:c.instructions+=4;goto B689fb2;
case 0x689fb3:c.instructions+=3;goto B689fb3;
case 0x689fb5:c.instructions+=2;goto B689fb5;
case 0x689fb6:c.instructions+=1;goto B689fb6;
case 0x689fb9:goto L689fb9;
case 0x689fbb:c.instructions+=5;goto B689fbb;
case 0x689fbd:c.instructions+=4;goto B689fbd;
case 0x689fbe:c.instructions+=3;goto B689fbe;
case 0x689fc0:c.instructions+=2;goto B689fc0;
case 0x689fc1:c.instructions+=1;goto B689fc1;
case 0x689fc7:goto L689fc7;
case 0x689fc9:c.instructions+=16;goto B689fc9;
case 0x689fca:c.instructions+=15;goto B689fca;
case 0x689fcc:c.instructions+=14;goto B689fcc;
case 0x689fcf:c.instructions+=13;goto B689fcf;
case 0x689fd2:c.instructions+=12;goto B689fd2;
case 0x689fd5:c.instructions+=11;goto B689fd5;
case 0x689fd8:c.instructions+=10;goto B689fd8;
case 0x689fdc:c.instructions+=9;goto B689fdc;
case 0x689fe0:c.instructions+=8;goto B689fe0;
case 0x689fe4:c.instructions+=7;goto B689fe4;
case 0x689fe8:c.instructions+=6;goto B689fe8;
case 0x689fec:c.instructions+=5;goto B689fec;
case 0x689ff0:c.instructions+=4;goto B689ff0;
case 0x689ff4:c.instructions+=3;goto B689ff4;
case 0x689ff8:c.instructions+=2;goto B689ff8;
case 0x689ffd:c.instructions+=1;goto B689ffd;
default:missing_instruction(c.pc);}
B689002:L689002:{c.instructions+=1;NFSU2_TR(0x689002);
if(r1(R+512)){TAIL_STATIC(0x688ecbu,688);}
}
B689008:L689008:{c.instructions+=10;NFSU2_TR(0x689008);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68900a:{NFSU2_TR(0x68900a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68900b:{NFSU2_TR(0x68900b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B68900d:{NFSU2_TR(0x68900d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68900f:{NFSU2_TR(0x68900f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B689011:{NFSU2_TR(0x689011);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B689013:{NFSU2_TR(0x689013);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B689015:{NFSU2_TR(0x689015);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B689018:{NFSU2_TR(0x689018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68901b:{NFSU2_TR(0x68901b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68902b;}}
}
B68901d:L68901d:{c.instructions+=3;NFSU2_TR(0x68901d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B689022:{NFSU2_TR(0x689022);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff3e4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B689029:{NFSU2_TR(0x689029);
{goto L689052;}
}
B68902b:L68902b:{c.instructions+=2;NFSU2_TR(0x68902b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68902d:{NFSU2_TR(0x68902d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689037;}}
}
B68902f:L68902f:{c.instructions+=3;NFSU2_TR(0x68902f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B689032:{NFSU2_TR(0x689032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689035:{NFSU2_TR(0x689035);
{goto L68904f;}
}
B689037:L689037:{c.instructions+=2;NFSU2_TR(0x689037);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68903a:{NFSU2_TR(0x68903a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689044;}}
}
B68903c:L68903c:{c.instructions+=3;NFSU2_TR(0x68903c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B68903f:{NFSU2_TR(0x68903f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689042:{NFSU2_TR(0x689042);
{goto L68904f;}
}
B689044:L689044:{c.instructions+=2;NFSU2_TR(0x689044);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B689047:{NFSU2_TR(0x689047);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689057;}}
}
B689049:L689049:{c.instructions+=2;NFSU2_TR(0x689049);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B68904c:{NFSU2_TR(0x68904c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68904f:L68904f:{c.instructions+=1;NFSU2_TR(0x68904f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B689052:L689052:{c.instructions+=2;NFSU2_TR(0x689052);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689055:{NFSU2_TR(0x689055);
{goto L68905a;}
}
B689057:L689057:{c.instructions+=1;NFSU2_TR(0x689057);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68905a:L68905a:{c.instructions+=3;NFSU2_TR(0x68905a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68905d:{NFSU2_TR(0x68905d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B68905f:{NFSU2_TR(0x68905f);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L689251;}}
}
B689065:L689065:{c.instructions+=4;NFSU2_TR(0x689065);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
}
B68906a:{NFSU2_TR(0x68906a);
w4(R+4,u32(0x20400000ull));
}
B68906f:{NFSU2_TR(0x68906f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B689071:{NFSU2_TR(0x689071);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6891b0;}}
}
B689077:L689077:{c.instructions+=1;NFSU2_TR(0x689077);
if(r1(R+518)){{goto L689185;}}
}
B68907d:L68907d:{c.instructions+=2;NFSU2_TR(0x68907d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689082:{NFSU2_TR(0x689082);
if(r1(R+518)){{goto L68914d;}}
}
B689088:L689088:{c.instructions+=2;NFSU2_TR(0x689088);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68908d:{NFSU2_TR(0x68908d);
if(r1(R+518)){{goto L689115;}}
}
B689093:L689093:{c.instructions+=2;NFSU2_TR(0x689093);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689098:{NFSU2_TR(0x689098);
if(r1(R+518)){{goto L6890dd;}}
}
B68909a:L68909a:{c.instructions+=2;NFSU2_TR(0x68909a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68909f:{NFSU2_TR(0x68909f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6890a5:L6890a5:{c.instructions+=2;NFSU2_TR(0x6890a5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6890a7:{NFSU2_TR(0x6890a7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6890ad:L6890ad:{c.instructions+=3;NFSU2_TR(0x6890ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6890b0:{NFSU2_TR(0x6890b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6890b6:{NFSU2_TR(0x6890b6);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6890b8:L6890b8:{c.instructions+=6;NFSU2_TR(0x6890b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6890be:{NFSU2_TR(0x6890be);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6890c0:{NFSU2_TR(0x6890c0);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6890c3:{NFSU2_TR(0x6890c3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6890c5:{NFSU2_TR(0x6890c5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6890c8:{NFSU2_TR(0x6890c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6890ce;}}
}
B6890ca:L6890ca:{c.instructions+=2;NFSU2_TR(0x6890ca);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6890cc:{NFSU2_TR(0x6890cc);
{goto L6890d0;}
}
B6890ce:L6890ce:{c.instructions+=1;NFSU2_TR(0x6890ce);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6890d0:L6890d0:{c.instructions+=4;NFSU2_TR(0x6890d0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6890d2:{NFSU2_TR(0x6890d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6890d5:{NFSU2_TR(0x6890d5);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6890d6:{NFSU2_TR(0x6890d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6890b8u);}goto L6890b8;}}
}
B6890d8:L6890d8:{c.instructions+=1;NFSU2_TR(0x6890d8);
{goto L689775;}
}
B6890dd:L6890dd:{c.instructions+=2;NFSU2_TR(0x6890dd);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6890df:{NFSU2_TR(0x6890df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6890e5:L6890e5:{c.instructions+=3;NFSU2_TR(0x6890e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6890e8:{NFSU2_TR(0x6890e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6890ee:{NFSU2_TR(0x6890ee);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6890f0:L6890f0:{c.instructions+=6;NFSU2_TR(0x6890f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6890f6:{NFSU2_TR(0x6890f6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6890f8:{NFSU2_TR(0x6890f8);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6890fb:{NFSU2_TR(0x6890fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6890fd:{NFSU2_TR(0x6890fd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B689100:{NFSU2_TR(0x689100);
if(r1(R+514)){{goto L689106;}}
}
B689102:L689102:{c.instructions+=2;NFSU2_TR(0x689102);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B689104:{NFSU2_TR(0x689104);
{goto L689108;}
}
B689106:L689106:{c.instructions+=1;NFSU2_TR(0x689106);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B689108:L689108:{c.instructions+=4;NFSU2_TR(0x689108);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68910a:{NFSU2_TR(0x68910a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B68910d:{NFSU2_TR(0x68910d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68910e:{NFSU2_TR(0x68910e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6890f0u);}goto L6890f0;}}
}
B689110:L689110:{c.instructions+=1;NFSU2_TR(0x689110);
{goto L689775;}
}
B689115:L689115:{c.instructions+=2;NFSU2_TR(0x689115);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689117:{NFSU2_TR(0x689117);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68911d:L68911d:{c.instructions+=4;NFSU2_TR(0x68911d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689123:{NFSU2_TR(0x689123);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689126:{NFSU2_TR(0x689126);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68912c:{NFSU2_TR(0x68912c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B68912e:L68912e:{c.instructions+=5;NFSU2_TR(0x68912e);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689130:{NFSU2_TR(0x689130);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B689132:{NFSU2_TR(0x689132);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689134:{NFSU2_TR(0x689134);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B689137:{NFSU2_TR(0x689137);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68913d;}}
}
B689139:L689139:{c.instructions+=2;NFSU2_TR(0x689139);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68913b:{NFSU2_TR(0x68913b);
{goto L68913f;}
}
B68913d:L68913d:{c.instructions+=1;NFSU2_TR(0x68913d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68913f:L68913f:{c.instructions+=4;NFSU2_TR(0x68913f);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689142:{NFSU2_TR(0x689142);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B689145:{NFSU2_TR(0x689145);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689146:{NFSU2_TR(0x689146);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68912eu);}goto L68912e;}}
}
B689148:L689148:{c.instructions+=1;NFSU2_TR(0x689148);
{goto L689775;}
}
B68914d:L68914d:{c.instructions+=2;NFSU2_TR(0x68914d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68914f:{NFSU2_TR(0x68914f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689155:L689155:{c.instructions+=4;NFSU2_TR(0x689155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68915b:{NFSU2_TR(0x68915b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68915e:{NFSU2_TR(0x68915e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689164:{NFSU2_TR(0x689164);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B689166:L689166:{c.instructions+=5;NFSU2_TR(0x689166);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689168:{NFSU2_TR(0x689168);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B68916a:{NFSU2_TR(0x68916a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68916c:{NFSU2_TR(0x68916c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B68916f:{NFSU2_TR(0x68916f);
if(r1(R+514)){{goto L689175;}}
}
B689171:L689171:{c.instructions+=2;NFSU2_TR(0x689171);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689173:{NFSU2_TR(0x689173);
{goto L689177;}
}
B689175:L689175:{c.instructions+=1;NFSU2_TR(0x689175);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689177:L689177:{c.instructions+=4;NFSU2_TR(0x689177);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68917a:{NFSU2_TR(0x68917a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B68917d:{NFSU2_TR(0x68917d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68917e:{NFSU2_TR(0x68917e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689166u);}goto L689166;}}
}
B689180:L689180:{c.instructions+=1;NFSU2_TR(0x689180);
{goto L689775;}
}
B689185:L689185:{c.instructions+=2;NFSU2_TR(0x689185);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689187:{NFSU2_TR(0x689187);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68918d:L68918d:{c.instructions+=3;NFSU2_TR(0x68918d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689190:{NFSU2_TR(0x689190);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689196:{NFSU2_TR(0x689196);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B689198:L689198:{c.instructions+=7;NFSU2_TR(0x689198);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68919b:{NFSU2_TR(0x68919b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6891a1:{NFSU2_TR(0x6891a1);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6891a3:{NFSU2_TR(0x6891a3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6891a5:{NFSU2_TR(0x6891a5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6891a8:{NFSU2_TR(0x6891a8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6891a9:{NFSU2_TR(0x6891a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689198u);}goto L689198;}}
}
B6891ab:L6891ab:{c.instructions+=1;NFSU2_TR(0x6891ab);
{goto L689775;}
}
B6891b0:L6891b0:{c.instructions+=2;NFSU2_TR(0x6891b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6891b5:{NFSU2_TR(0x6891b5);
if(r1(R+518)){{goto L689226;}}
}
B6891b7:L6891b7:{c.instructions+=2;NFSU2_TR(0x6891b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6891bc:{NFSU2_TR(0x6891bc);
if(r1(R+518)){{goto L6891f9;}}
}
B6891be:L6891be:{c.instructions+=2;NFSU2_TR(0x6891be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6891c3:{NFSU2_TR(0x6891c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6891c9:L6891c9:{c.instructions+=6;NFSU2_TR(0x6891c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6891cc:{NFSU2_TR(0x6891cc);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6891ce:{NFSU2_TR(0x6891ce);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6891d0:{NFSU2_TR(0x6891d0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6891d2:{NFSU2_TR(0x6891d2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6891d4:{NFSU2_TR(0x6891d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6891da:L6891da:{c.instructions+=9;NFSU2_TR(0x6891da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6891e0:{NFSU2_TR(0x6891e0);
{u32 ea_=u32((r4(R+4)*8u)+r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6891e3:{NFSU2_TR(0x6891e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6891e9:{NFSU2_TR(0x6891e9);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6891eb:{NFSU2_TR(0x6891eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6891ec:{NFSU2_TR(0x6891ec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6891ee:{NFSU2_TR(0x6891ee);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6891f0:{NFSU2_TR(0x6891f0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6891f2:{NFSU2_TR(0x6891f2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6891dau);}goto L6891da;}}
}
B6891f4:L6891f4:{c.instructions+=1;NFSU2_TR(0x6891f4);
{goto L689775;}
}
B6891f9:L6891f9:{c.instructions+=2;NFSU2_TR(0x6891f9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6891fb:{NFSU2_TR(0x6891fb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689201:L689201:{c.instructions+=3;NFSU2_TR(0x689201);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689204:{NFSU2_TR(0x689204);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68920a:{NFSU2_TR(0x68920a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B68920c:L68920c:{c.instructions+=8;NFSU2_TR(0x68920c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689212:{NFSU2_TR(0x689212);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689214:{NFSU2_TR(0x689214);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689217:{NFSU2_TR(0x689217);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B689219:{NFSU2_TR(0x689219);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68921b:{NFSU2_TR(0x68921b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B68921e:{NFSU2_TR(0x68921e);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68921f:{NFSU2_TR(0x68921f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68920cu);}goto L68920c;}}
}
B689221:L689221:{c.instructions+=1;NFSU2_TR(0x689221);
{goto L689775;}
}
B689226:L689226:{c.instructions+=2;NFSU2_TR(0x689226);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689228:{NFSU2_TR(0x689228);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68922e:L68922e:{c.instructions+=3;NFSU2_TR(0x68922e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689231:{NFSU2_TR(0x689231);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689237:{NFSU2_TR(0x689237);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B689239:L689239:{c.instructions+=7;NFSU2_TR(0x689239);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68923c:{NFSU2_TR(0x68923c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689242:{NFSU2_TR(0x689242);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B689244:{NFSU2_TR(0x689244);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689246:{NFSU2_TR(0x689246);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689249:{NFSU2_TR(0x689249);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68924a:{NFSU2_TR(0x68924a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689239u);}goto L689239;}}
}
B68924c:L68924c:{c.instructions+=1;NFSU2_TR(0x68924c);
{goto L689775;}
}
B689251:L689251:{c.instructions+=4;NFSU2_TR(0x689251);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ff00000ull))));
}
B689256:{NFSU2_TR(0x689256);
w4(R+4,u32(0x10c00000ull));
}
B68925b:{NFSU2_TR(0x68925b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68925d:{NFSU2_TR(0x68925d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6894d0;}}
}
B689263:L689263:{c.instructions+=1;NFSU2_TR(0x689263);
if(r1(R+518)){{goto L6894a9;}}
}
B689269:L689269:{c.instructions+=3;NFSU2_TR(0x689269);
w4(R+4,u32(0x10600000ull));
}
B68926e:{NFSU2_TR(0x68926e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B689270:{NFSU2_TR(0x689270);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6893b3;}}
}
B689276:L689276:{c.instructions+=1;NFSU2_TR(0x689276);
if(r1(R+518)){{goto L689366;}}
}
B68927c:L68927c:{c.instructions+=2;NFSU2_TR(0x68927c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689281:{NFSU2_TR(0x689281);
if(r1(R+518)){{goto L689354;}}
}
B689287:L689287:{c.instructions+=2;NFSU2_TR(0x689287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68928c:{NFSU2_TR(0x68928c);
if(r1(R+518)){{goto L68932f;}}
}
B689292:L689292:{c.instructions+=2;NFSU2_TR(0x689292);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689297:{NFSU2_TR(0x689297);
if(r1(R+518)){{goto L68930a;}}
}
B689299:L689299:{c.instructions+=2;NFSU2_TR(0x689299);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68929e:{NFSU2_TR(0x68929e);
if(r1(R+518)){{goto L6892d9;}}
}
B6892a0:L6892a0:{c.instructions+=2;NFSU2_TR(0x6892a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6892a5:{NFSU2_TR(0x6892a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6892ab:L6892ab:{c.instructions+=2;NFSU2_TR(0x6892ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6892ad:{NFSU2_TR(0x6892ad);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6892b3:L6892b3:{c.instructions+=3;NFSU2_TR(0x6892b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6892b6:{NFSU2_TR(0x6892b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6892bc:{NFSU2_TR(0x6892bc);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B6892be:L6892be:{c.instructions+=3;NFSU2_TR(0x6892be);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6892c4:{NFSU2_TR(0x6892c4);
{u32 ea_=u32(r4(R+24)+r4(R+12));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6892c7:{NFSU2_TR(0x6892c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6892ccull));
TAIL_STATIC(0x75c9b0u,75c);
}
B6892cc:L6892cc:{c.instructions+=4;NFSU2_TR(0x6892cc);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6892ce:{NFSU2_TR(0x6892ce);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B6892d1:{NFSU2_TR(0x6892d1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6892d2:{NFSU2_TR(0x6892d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6892beu);}goto L6892be;}}
}
B6892d4:L6892d4:{c.instructions+=1;NFSU2_TR(0x6892d4);
{goto L689775;}
}
B6892d9:L6892d9:{c.instructions+=2;NFSU2_TR(0x6892d9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6892db:{NFSU2_TR(0x6892db);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6892e1:L6892e1:{c.instructions+=3;NFSU2_TR(0x6892e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6892e7:{NFSU2_TR(0x6892e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6892ea:{NFSU2_TR(0x6892ea);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B6892ec:L6892ec:{c.instructions+=5;NFSU2_TR(0x6892ec);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6892ee:{NFSU2_TR(0x6892ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6892ef:{NFSU2_TR(0x6892ef);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6892f0:{NFSU2_TR(0x6892f0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6892f3:{NFSU2_TR(0x6892f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6892f8ull));
TAIL_STATIC(0x75eb50u,75e);
}
B6892f8:L6892f8:{c.instructions+=7;NFSU2_TR(0x6892f8);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B6892fa:{NFSU2_TR(0x6892fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6892fb:{NFSU2_TR(0x6892fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6892fc:{NFSU2_TR(0x6892fc);
{u32 ea_=u32(r4(R+24)+r4(R+12));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6892ff:{NFSU2_TR(0x6892ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B689302:{NFSU2_TR(0x689302);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689303:{NFSU2_TR(0x689303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6892ecu);}goto L6892ec;}}
}
B689305:L689305:{c.instructions+=1;NFSU2_TR(0x689305);
{goto L689775;}
}
B68930a:L68930a:{c.instructions+=2;NFSU2_TR(0x68930a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68930c:{NFSU2_TR(0x68930c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689312:L689312:{c.instructions+=3;NFSU2_TR(0x689312);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689315:{NFSU2_TR(0x689315);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68931b:{NFSU2_TR(0x68931b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B68931d:L68931d:{c.instructions+=6;NFSU2_TR(0x68931d);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B68931f:{NFSU2_TR(0x68931f);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdc,0x30"::"a"(ea_):"memory");}
}
B689322:{NFSU2_TR(0x689322);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689324:{NFSU2_TR(0x689324);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689327:{NFSU2_TR(0x689327);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689328:{NFSU2_TR(0x689328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68931du);}goto L68931d;}}
}
B68932a:L68932a:{c.instructions+=1;NFSU2_TR(0x68932a);
{goto L689775;}
}
B68932f:L68932f:{c.instructions+=2;NFSU2_TR(0x68932f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689331:{NFSU2_TR(0x689331);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689337:L689337:{c.instructions+=3;NFSU2_TR(0x689337);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68933a:{NFSU2_TR(0x68933a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689340:{NFSU2_TR(0x689340);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B689342:L689342:{c.instructions+=6;NFSU2_TR(0x689342);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689345:{NFSU2_TR(0x689345);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B689347:{NFSU2_TR(0x689347);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689349:{NFSU2_TR(0x689349);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B68934c:{NFSU2_TR(0x68934c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68934d:{NFSU2_TR(0x68934d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689342u);}goto L689342;}}
}
B68934f:L68934f:{c.instructions+=1;NFSU2_TR(0x68934f);
{goto L689775;}
}
B689354:L689354:{c.instructions+=3;NFSU2_TR(0x689354);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68935a:{NFSU2_TR(0x68935a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B68935d:{NFSU2_TR(0x68935d);
__builtin_memmove((R+28),(R+8),4);
}
B68935f:L68935f:{c.instructions+=1;NFSU2_TR(0x68935f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L689361;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68935fu);}goto L68935f;}
}
B689361:L689361:{c.instructions+=1;NFSU2_TR(0x689361);
{goto L689775;}
}
B689366:L689366:{c.instructions+=3;NFSU2_TR(0x689366);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B689368:{NFSU2_TR(0x689368);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68936a:{NFSU2_TR(0x68936a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689370:L689370:{c.instructions+=3;NFSU2_TR(0x689370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689373:{NFSU2_TR(0x689373);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689379:{NFSU2_TR(0x689379);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B68937b:L68937b:{c.instructions+=6;NFSU2_TR(0x68937b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B689382:{NFSU2_TR(0x689382);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689384:{NFSU2_TR(0x689384);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B68938a:{NFSU2_TR(0x68938a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68938c:{NFSU2_TR(0x68938c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B68938f:{NFSU2_TR(0x68938f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6893a2;}}
}
B689391:L689391:{c.instructions+=6;NFSU2_TR(0x689391);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689394:{NFSU2_TR(0x689394);
__asm__ volatile(".byte 0xd9,0xed":::"memory");
}
B689396:{NFSU2_TR(0x689396);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B689398:{NFSU2_TR(0x689398);
__asm__ volatile(".byte 0xd9,0xf1":::"memory");
}
B68939a:{NFSU2_TR(0x68939a);
{u32 ea_=u32(u32(8104584u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6893a0:{NFSU2_TR(0x6893a0);
{goto L6893a4;}
}
B6893a2:L6893a2:{c.instructions+=1;NFSU2_TR(0x6893a2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6893a4:L6893a4:{c.instructions+=5;NFSU2_TR(0x6893a4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6893a6:{NFSU2_TR(0x6893a6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6893a7:{NFSU2_TR(0x6893a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6893aa:{NFSU2_TR(0x6893aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B6893ac:{NFSU2_TR(0x6893ac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68937bu);}goto L68937b;}}
}
B6893ae:L6893ae:{c.instructions+=1;NFSU2_TR(0x6893ae);
{goto L689775;}
}
B6893b3:L6893b3:{c.instructions+=2;NFSU2_TR(0x6893b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6893b8:{NFSU2_TR(0x6893b8);
if(r1(R+518)){{goto L68947c;}}
}
B6893be:L6893be:{c.instructions+=2;NFSU2_TR(0x6893be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6893c3:{NFSU2_TR(0x6893c3);
if(r1(R+518)){{goto L689457;}}
}
B6893c9:L6893c9:{c.instructions+=2;NFSU2_TR(0x6893c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6893ce:{NFSU2_TR(0x6893ce);
if(r1(R+518)){{goto L689432;}}
}
B6893d0:L6893d0:{c.instructions+=2;NFSU2_TR(0x6893d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6893d5:{NFSU2_TR(0x6893d5);
if(r1(R+518)){{goto L68940a;}}
}
B6893d7:L6893d7:{c.instructions+=2;NFSU2_TR(0x6893d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6893dc:{NFSU2_TR(0x6893dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6893e2:L6893e2:{c.instructions+=2;NFSU2_TR(0x6893e2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6893e4:{NFSU2_TR(0x6893e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6893ea:L6893ea:{c.instructions+=3;NFSU2_TR(0x6893ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6893ed:{NFSU2_TR(0x6893ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6893f3:{NFSU2_TR(0x6893f3);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B6893f5:L6893f5:{c.instructions+=2;NFSU2_TR(0x6893f5);
{u32 ea_=u32(r4(R+12)+r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6893f8:{NFSU2_TR(0x6893f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6893fdull));
TAIL_STATIC(0x75db80u,75d);
}
B6893fd:L6893fd:{c.instructions+=4;NFSU2_TR(0x6893fd);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6893ff:{NFSU2_TR(0x6893ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B689402:{NFSU2_TR(0x689402);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689403:{NFSU2_TR(0x689403);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6893f5u);}goto L6893f5;}}
}
B689405:L689405:{c.instructions+=1;NFSU2_TR(0x689405);
{goto L689775;}
}
B68940a:L68940a:{c.instructions+=2;NFSU2_TR(0x68940a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68940c:{NFSU2_TR(0x68940c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689412:L689412:{c.instructions+=3;NFSU2_TR(0x689412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689415:{NFSU2_TR(0x689415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68941b:{NFSU2_TR(0x68941b);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B68941d:L68941d:{c.instructions+=2;NFSU2_TR(0x68941d);
{u32 ea_=u32(r4(R+12)+r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689420:{NFSU2_TR(0x689420);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x689425ull));
TAIL_STATIC(0x75eea0u,75e);
}
B689425:L689425:{c.instructions+=4;NFSU2_TR(0x689425);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689427:{NFSU2_TR(0x689427);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B68942a:{NFSU2_TR(0x68942a);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68942b:{NFSU2_TR(0x68942b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68941du);}goto L68941d;}}
}
B68942d:L68942d:{c.instructions+=1;NFSU2_TR(0x68942d);
{goto L689775;}
}
B689432:L689432:{c.instructions+=2;NFSU2_TR(0x689432);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689434:{NFSU2_TR(0x689434);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68943a:L68943a:{c.instructions+=3;NFSU2_TR(0x68943a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68943d:{NFSU2_TR(0x68943d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689443:{NFSU2_TR(0x689443);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B689445:L689445:{c.instructions+=6;NFSU2_TR(0x689445);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689448:{NFSU2_TR(0x689448);
__asm__ volatile(".byte 0xd9,0xff":::"memory");
}
B68944a:{NFSU2_TR(0x68944a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68944c:{NFSU2_TR(0x68944c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B68944f:{NFSU2_TR(0x68944f);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689450:{NFSU2_TR(0x689450);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689445u);}goto L689445;}}
}
B689452:L689452:{c.instructions+=1;NFSU2_TR(0x689452);
{goto L689775;}
}
B689457:L689457:{c.instructions+=2;NFSU2_TR(0x689457);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689459:{NFSU2_TR(0x689459);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68945f:L68945f:{c.instructions+=3;NFSU2_TR(0x68945f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689462:{NFSU2_TR(0x689462);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689468:{NFSU2_TR(0x689468);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B68946a:L68946a:{c.instructions+=6;NFSU2_TR(0x68946a);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68946d:{NFSU2_TR(0x68946d);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B68946f:{NFSU2_TR(0x68946f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689471:{NFSU2_TR(0x689471);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689474:{NFSU2_TR(0x689474);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689475:{NFSU2_TR(0x689475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68946au);}goto L68946a;}}
}
B689477:L689477:{c.instructions+=1;NFSU2_TR(0x689477);
{goto L689775;}
}
B68947c:L68947c:{c.instructions+=2;NFSU2_TR(0x68947c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68947e:{NFSU2_TR(0x68947e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689484:L689484:{c.instructions+=3;NFSU2_TR(0x689484);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689487:{NFSU2_TR(0x689487);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68948d:{NFSU2_TR(0x68948d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B68948f:L68948f:{c.instructions+=8;NFSU2_TR(0x68948f);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689492:{NFSU2_TR(0x689492);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B689494:{NFSU2_TR(0x689494);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B689496:{NFSU2_TR(0x689496);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x38"::"a"(ea_):"memory");}
}
B68949c:{NFSU2_TR(0x68949c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68949e:{NFSU2_TR(0x68949e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6894a1:{NFSU2_TR(0x6894a1);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6894a2:{NFSU2_TR(0x6894a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68948fu);}goto L68948f;}}
}
B6894a4:L6894a4:{c.instructions+=1;NFSU2_TR(0x6894a4);
{goto L689775;}
}
B6894a9:L6894a9:{c.instructions+=2;NFSU2_TR(0x6894a9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6894ab:{NFSU2_TR(0x6894ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6894b1:L6894b1:{c.instructions+=3;NFSU2_TR(0x6894b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6894b4:{NFSU2_TR(0x6894b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6894ba:{NFSU2_TR(0x6894ba);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6894bc:L6894bc:{c.instructions+=7;NFSU2_TR(0x6894bc);
{u32 ea_=u32(r4(R+4)+r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6894bf:{NFSU2_TR(0x6894bf);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6894c1:{NFSU2_TR(0x6894c1);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B6894c3:{NFSU2_TR(0x6894c3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6894c5:{NFSU2_TR(0x6894c5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B6894c8:{NFSU2_TR(0x6894c8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6894c9:{NFSU2_TR(0x6894c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6894bcu);}goto L6894bc;}}
}
B6894cb:L6894cb:{c.instructions+=1;NFSU2_TR(0x6894cb);
{goto L689775;}
}
B6894d0:L6894d0:{c.instructions+=3;NFSU2_TR(0x6894d0);
w4(R+4,u32(0x20500000ull));
}
B6894d5:{NFSU2_TR(0x6894d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6894d7:{NFSU2_TR(0x6894d7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L68965c;}}
}
B6894dd:L6894dd:{c.instructions+=1;NFSU2_TR(0x6894dd);
if(r1(R+518)){{goto L68962e;}}
}
B6894e3:L6894e3:{c.instructions+=2;NFSU2_TR(0x6894e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6894e8:{NFSU2_TR(0x6894e8);
if(r1(R+518)){{goto L6895f2;}}
}
B6894ee:L6894ee:{c.instructions+=2;NFSU2_TR(0x6894ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6894f3:{NFSU2_TR(0x6894f3);
if(r1(R+518)){{goto L6895b6;}}
}
B6894f9:L6894f9:{c.instructions+=2;NFSU2_TR(0x6894f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6894fe:{NFSU2_TR(0x6894fe);
if(r1(R+518)){{goto L68957b;}}
}
B689500:L689500:{c.instructions+=2;NFSU2_TR(0x689500);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689505:{NFSU2_TR(0x689505);
if(r1(R+518)){{goto L689540;}}
}
B689507:L689507:{c.instructions+=2;NFSU2_TR(0x689507);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68950c:{NFSU2_TR(0x68950c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689512:L689512:{c.instructions+=2;NFSU2_TR(0x689512);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689514:{NFSU2_TR(0x689514);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68951a:L68951a:{c.instructions+=5;NFSU2_TR(0x68951a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689520:{NFSU2_TR(0x689520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689526:{NFSU2_TR(0x689526);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689529:{NFSU2_TR(0x689529);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B68952b:{NFSU2_TR(0x68952b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B68952d:L68952d:{c.instructions+=6;NFSU2_TR(0x68952d);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689530:{NFSU2_TR(0x689530);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B689532:{NFSU2_TR(0x689532);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689535:{NFSU2_TR(0x689535);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689538:{NFSU2_TR(0x689538);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689539:{NFSU2_TR(0x689539);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68952du);}goto L68952d;}}
}
B68953b:L68953b:{c.instructions+=1;NFSU2_TR(0x68953b);
{goto L689775;}
}
B689540:L689540:{c.instructions+=2;NFSU2_TR(0x689540);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689542:{NFSU2_TR(0x689542);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689548:L689548:{c.instructions+=5;NFSU2_TR(0x689548);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68954e:{NFSU2_TR(0x68954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689554:{NFSU2_TR(0x689554);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689557:{NFSU2_TR(0x689557);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B689559:{NFSU2_TR(0x689559);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B68955b:L68955b:{c.instructions+=5;NFSU2_TR(0x68955b);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68955e:{NFSU2_TR(0x68955e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B689560:{NFSU2_TR(0x689560);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689562:{NFSU2_TR(0x689562);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B689565:{NFSU2_TR(0x689565);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68956b;}}
}
B689567:L689567:{c.instructions+=2;NFSU2_TR(0x689567);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B689569:{NFSU2_TR(0x689569);
{goto L68956d;}
}
B68956b:L68956b:{c.instructions+=1;NFSU2_TR(0x68956b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B68956d:L68956d:{c.instructions+=4;NFSU2_TR(0x68956d);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689570:{NFSU2_TR(0x689570);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B689573:{NFSU2_TR(0x689573);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689574:{NFSU2_TR(0x689574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68955bu);}goto L68955b;}}
}
B689576:L689576:{c.instructions+=1;NFSU2_TR(0x689576);
{goto L689775;}
}
B68957b:L68957b:{c.instructions+=2;NFSU2_TR(0x68957b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68957d:{NFSU2_TR(0x68957d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689583:L689583:{c.instructions+=5;NFSU2_TR(0x689583);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689589:{NFSU2_TR(0x689589);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68958f:{NFSU2_TR(0x68958f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689592:{NFSU2_TR(0x689592);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B689594:{NFSU2_TR(0x689594);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B689596:L689596:{c.instructions+=5;NFSU2_TR(0x689596);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689599:{NFSU2_TR(0x689599);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B68959b:{NFSU2_TR(0x68959b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B68959d:{NFSU2_TR(0x68959d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6895a0:{NFSU2_TR(0x6895a0);
if(r1(R+514)){{goto L6895a6;}}
}
B6895a2:L6895a2:{c.instructions+=2;NFSU2_TR(0x6895a2);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6895a4:{NFSU2_TR(0x6895a4);
{goto L6895a8;}
}
B6895a6:L6895a6:{c.instructions+=1;NFSU2_TR(0x6895a6);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6895a8:L6895a8:{c.instructions+=4;NFSU2_TR(0x6895a8);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6895ab:{NFSU2_TR(0x6895ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6895ae:{NFSU2_TR(0x6895ae);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6895af:{NFSU2_TR(0x6895af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689596u);}goto L689596;}}
}
B6895b1:L6895b1:{c.instructions+=1;NFSU2_TR(0x6895b1);
{goto L689775;}
}
B6895b6:L6895b6:{c.instructions+=2;NFSU2_TR(0x6895b6);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6895b8:{NFSU2_TR(0x6895b8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6895be:L6895be:{c.instructions+=5;NFSU2_TR(0x6895be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6895c4:{NFSU2_TR(0x6895c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6895ca:{NFSU2_TR(0x6895ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6895cd:{NFSU2_TR(0x6895cd);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B6895cf:{NFSU2_TR(0x6895cf);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6895d1:L6895d1:{c.instructions+=5;NFSU2_TR(0x6895d1);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6895d4:{NFSU2_TR(0x6895d4);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6895d6:{NFSU2_TR(0x6895d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6895d8:{NFSU2_TR(0x6895d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6895db:{NFSU2_TR(0x6895db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6895e2;}}
}
B6895dd:L6895dd:{c.instructions+=2;NFSU2_TR(0x6895dd);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6895e0:{NFSU2_TR(0x6895e0);
{goto L6895e4;}
}
B6895e2:L6895e2:{c.instructions+=1;NFSU2_TR(0x6895e2);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6895e4:L6895e4:{c.instructions+=4;NFSU2_TR(0x6895e4);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6895e7:{NFSU2_TR(0x6895e7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B6895ea:{NFSU2_TR(0x6895ea);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6895eb:{NFSU2_TR(0x6895eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6895d1u);}goto L6895d1;}}
}
B6895ed:L6895ed:{c.instructions+=1;NFSU2_TR(0x6895ed);
{goto L689775;}
}
B6895f2:L6895f2:{c.instructions+=2;NFSU2_TR(0x6895f2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6895f4:{NFSU2_TR(0x6895f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6895fa:L6895fa:{c.instructions+=5;NFSU2_TR(0x6895fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689600:{NFSU2_TR(0x689600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B689606:{NFSU2_TR(0x689606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689609:{NFSU2_TR(0x689609);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B68960b:{NFSU2_TR(0x68960b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B68960d:L68960d:{c.instructions+=5;NFSU2_TR(0x68960d);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689610:{NFSU2_TR(0x689610);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B689612:{NFSU2_TR(0x689612);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689614:{NFSU2_TR(0x689614);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B689617:{NFSU2_TR(0x689617);
if(r1(R+514)){{goto L68961e;}}
}
B689619:L689619:{c.instructions+=2;NFSU2_TR(0x689619);
{u32 ea_=u32(r4(R+24)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68961c:{NFSU2_TR(0x68961c);
{goto L689620;}
}
B68961e:L68961e:{c.instructions+=1;NFSU2_TR(0x68961e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689620:L689620:{c.instructions+=4;NFSU2_TR(0x689620);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689623:{NFSU2_TR(0x689623);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B689626:{NFSU2_TR(0x689626);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689627:{NFSU2_TR(0x689627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68960du);}goto L68960d;}}
}
B689629:L689629:{c.instructions+=1;NFSU2_TR(0x689629);
{goto L689775;}
}
B68962e:L68962e:{c.instructions+=2;NFSU2_TR(0x68962e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689630:{NFSU2_TR(0x689630);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689636:L689636:{c.instructions+=5;NFSU2_TR(0x689636);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68963c:{NFSU2_TR(0x68963c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689642:{NFSU2_TR(0x689642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689645:{NFSU2_TR(0x689645);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B689647:{NFSU2_TR(0x689647);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B689649:L689649:{c.instructions+=6;NFSU2_TR(0x689649);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68964c:{NFSU2_TR(0x68964c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B68964e:{NFSU2_TR(0x68964e);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689651:{NFSU2_TR(0x689651);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689654:{NFSU2_TR(0x689654);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689655:{NFSU2_TR(0x689655);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689649u);}goto L689649;}}
}
B689657:L689657:{c.instructions+=1;NFSU2_TR(0x689657);
{goto L689775;}
}
B68965c:L68965c:{c.instructions+=2;NFSU2_TR(0x68965c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689661:{NFSU2_TR(0x689661);
if(r1(R+518)){{goto L68974e;}}
}
B689667:L689667:{c.instructions+=2;NFSU2_TR(0x689667);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68966c:{NFSU2_TR(0x68966c);
if(r1(R+518)){{goto L68970d;}}
}
B689672:L689672:{c.instructions+=2;NFSU2_TR(0x689672);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689677:{NFSU2_TR(0x689677);
if(r1(R+518)){{goto L6896df;}}
}
B689679:L689679:{c.instructions+=2;NFSU2_TR(0x689679);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68967e:{NFSU2_TR(0x68967e);
if(r1(R+518)){{goto L6896ca;}}
}
B689680:L689680:{c.instructions+=2;NFSU2_TR(0x689680);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689685:{NFSU2_TR(0x689685);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B68968b:L68968b:{c.instructions+=9;NFSU2_TR(0x68968b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68968e:{NFSU2_TR(0x68968e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B689690:{NFSU2_TR(0x689690);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689692:{NFSU2_TR(0x689692);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689694:{NFSU2_TR(0x689694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689697:{NFSU2_TR(0x689697);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B689699:{NFSU2_TR(0x689699);
__builtin_memmove((R+24),(R+0),4);
}
B68969b:{NFSU2_TR(0x68969b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68969c:{NFSU2_TR(0x68969c);
if(r1(R+518)){{goto L689775;}}
}
B6896a2:L6896a2:{c.instructions+=2;NFSU2_TR(0x6896a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6896a5:{NFSU2_TR(0x6896a5);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6896ac:L6896ac:{c.instructions+=10;NFSU2_TR(0x6896ac);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6896b3:{NFSU2_TR(0x6896b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6896b5:{NFSU2_TR(0x6896b5);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6896b7:{NFSU2_TR(0x6896b7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6896b9:{NFSU2_TR(0x6896b9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6896ba:{NFSU2_TR(0x6896ba);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6896bd:{NFSU2_TR(0x6896bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6896bf:{NFSU2_TR(0x6896bf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6896c1:{NFSU2_TR(0x6896c1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6896c3:{NFSU2_TR(0x6896c3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6896acu);}goto L6896ac;}}
}
B6896c5:L6896c5:{c.instructions+=1;NFSU2_TR(0x6896c5);
{goto L689775;}
}
B6896ca:L6896ca:{c.instructions+=5;NFSU2_TR(0x6896ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6896cd:{NFSU2_TR(0x6896cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6896d3:{NFSU2_TR(0x6896d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6896d4:{NFSU2_TR(0x6896d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6896d5:{NFSU2_TR(0x6896d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6896daull));
TAIL_STATIC(0x688ce2u,688);
}
B6896da:L6896da:{c.instructions+=1;NFSU2_TR(0x6896da);
{goto L689775;}
}
B6896df:L6896df:{c.instructions+=4;NFSU2_TR(0x6896df);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6896e1:{NFSU2_TR(0x6896e1);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6896e3:{NFSU2_TR(0x6896e3);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6896e5:{NFSU2_TR(0x6896e5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B6896eb:L6896eb:{c.instructions+=4;NFSU2_TR(0x6896eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6896f1:{NFSU2_TR(0x6896f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6896f7:{NFSU2_TR(0x6896f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6896fa:{NFSU2_TR(0x6896fa);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B6896fc:L6896fc:{c.instructions+=7;NFSU2_TR(0x6896fc);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6896ff:{NFSU2_TR(0x6896ff);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B689701:{NFSU2_TR(0x689701);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689704:{NFSU2_TR(0x689704);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689705:{NFSU2_TR(0x689705);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B689707:{NFSU2_TR(0x689707);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689709:{NFSU2_TR(0x689709);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6896fcu);}goto L6896fc;}}
}
B68970b:L68970b:{c.instructions+=1;NFSU2_TR(0x68970b);
{goto L689775;}
}
B68970d:L68970d:{c.instructions+=2;NFSU2_TR(0x68970d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68970f:{NFSU2_TR(0x68970f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689711:L689711:{c.instructions+=7;NFSU2_TR(0x689711);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689717:{NFSU2_TR(0x689717);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68971d:{NFSU2_TR(0x68971d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B689723:{NFSU2_TR(0x689723);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689726:{NFSU2_TR(0x689726);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B689728:{NFSU2_TR(0x689728);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+4))));
}
B68972a:{NFSU2_TR(0x68972a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B68972c:L68972c:{c.instructions+=5;NFSU2_TR(0x68972c);
{u32 ea_=u32(r4(R+4)+r4(R+24));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68972f:{NFSU2_TR(0x68972f);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B689735:{NFSU2_TR(0x689735);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689737:{NFSU2_TR(0x689737);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B68973a:{NFSU2_TR(0x68973a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689740;}}
}
B68973c:L68973c:{c.instructions+=2;NFSU2_TR(0x68973c);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68973e:{NFSU2_TR(0x68973e);
{goto L689743;}
}
B689740:L689740:{c.instructions+=1;NFSU2_TR(0x689740);
{u32 ea_=u32(r4(R+4)+r4(R+12));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689743:L689743:{c.instructions+=4;NFSU2_TR(0x689743);
{u32 ea_=u32(r4(R+8)+r4(R+4));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B689746:{NFSU2_TR(0x689746);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B689749:{NFSU2_TR(0x689749);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68974a:{NFSU2_TR(0x68974a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68972cu);}goto L68972c;}}
}
B68974c:L68974c:{c.instructions+=1;NFSU2_TR(0x68974c);
{goto L689775;}
}
B68974e:L68974e:{c.instructions+=2;NFSU2_TR(0x68974e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B689750:{NFSU2_TR(0x689750);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L689775;}}
}
B689752:L689752:{c.instructions+=5;NFSU2_TR(0x689752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689758:{NFSU2_TR(0x689758);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68975e:{NFSU2_TR(0x68975e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689761:{NFSU2_TR(0x689761);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B689763:{NFSU2_TR(0x689763);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B689765:L689765:{c.instructions+=7;NFSU2_TR(0x689765);
{u32 ea_=u32(r4(R+0)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B689768:{NFSU2_TR(0x689768);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B68976a:{NFSU2_TR(0x68976a);
__asm__ volatile(".byte 0xd9,0xf3":::"memory");
}
B68976c:{NFSU2_TR(0x68976c);
{u32 ea_=u32(r4(R+8)+r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B68976f:{NFSU2_TR(0x68976f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B689772:{NFSU2_TR(0x689772);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B689773:{NFSU2_TR(0x689773);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x689765u);}goto L689765;}}
}
B689775:L689775:{c.instructions+=4;NFSU2_TR(0x689775);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B689778:{NFSU2_TR(0x689778);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68977b:{NFSU2_TR(0x68977b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B68977e:{NFSU2_TR(0x68977e);
if(r1(R+512)){TAIL_STATIC(0x688ea8u,688);}
}
B689784:L689784:{c.instructions+=6;NFSU2_TR(0x689784);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B689785:{NFSU2_TR(0x689785);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B689786:{NFSU2_TR(0x689786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689787:{NFSU2_TR(0x689787);
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
B689789:{NFSU2_TR(0x689789);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68978a:{NFSU2_TR(0x68978a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68978d:L68978d:{c.instructions+=37;NFSU2_TR(0x68978d);
__builtin_memmove((R+28),(R+28),4);
}
B68978f:{NFSU2_TR(0x68978f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689790:{NFSU2_TR(0x689790);
__builtin_memmove((R+20),(R+16),4);
}
B689792:{NFSU2_TR(0x689792);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689793:{NFSU2_TR(0x689793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689796:{NFSU2_TR(0x689796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B689799:{NFSU2_TR(0x689799);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68979c:{NFSU2_TR(0x68979c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B68979f:{NFSU2_TR(0x68979f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B6897a3:{NFSU2_TR(0x6897a3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B6897a6:{NFSU2_TR(0x6897a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B6897aa:{NFSU2_TR(0x6897aa);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B6897ad:{NFSU2_TR(0x6897ad);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897b1:{NFSU2_TR(0x6897b1);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B6897b4:{NFSU2_TR(0x6897b4);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B6897b7:{NFSU2_TR(0x6897b7);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897bb:{NFSU2_TR(0x6897bb);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897bf:{NFSU2_TR(0x6897bf);
u8 U[16];
__builtin_memmove((U+0),gp(0x7baab0),16);
w4(R+4736,u32(u32(r4(R+4736))^u32(r4(U+0))));
w4(R+4740,u32(u32(r4(R+4740))^u32(r4(U+4))));
w4(R+4744,u32(u32(r4(R+4744))^u32(r4(U+8))));
w4(R+4748,u32(u32(r4(R+4748))^u32(r4(U+12))));
}
B6897c6:{NFSU2_TR(0x6897c6);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6897c9:{NFSU2_TR(0x6897c9);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4748))));
}
B6897cc:{NFSU2_TR(0x6897cc);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B6897cf:{NFSU2_TR(0x6897cf);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897d3:{NFSU2_TR(0x6897d3);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897d7:{NFSU2_TR(0x6897d7);
u8 U[16];
__builtin_memmove((U+0),gp(0x7baaa0),16);
w4(R+4800,u32(u32(r4(R+4800))^u32(r4(U+0))));
w4(R+4804,u32(u32(r4(R+4804))^u32(r4(U+4))));
w4(R+4808,u32(u32(r4(R+4808))^u32(r4(U+8))));
w4(R+4812,u32(u32(r4(R+4812))^u32(r4(U+12))));
}
B6897de:{NFSU2_TR(0x6897de);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4612))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4616))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4620))));
}
B6897e1:{NFSU2_TR(0x6897e1);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4812))));
}
B6897e4:{NFSU2_TR(0x6897e4);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897e8:{NFSU2_TR(0x6897e8);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6897ec:{NFSU2_TR(0x6897ec);
u8 U[16];
__builtin_memmove((U+0),gp(0x7baa90),16);
w4(R+4736,u32(u32(r4(R+4736))^u32(r4(U+0))));
w4(R+4740,u32(u32(r4(R+4740))^u32(r4(U+4))));
w4(R+4744,u32(u32(r4(R+4744))^u32(r4(U+8))));
w4(R+4748,u32(u32(r4(R+4748))^u32(r4(U+12))));
}
B6897f3:{NFSU2_TR(0x6897f3);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B6897f6:{NFSU2_TR(0x6897f6);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4748))));
}
B6897f9:{NFSU2_TR(0x6897f9);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
s8_(u32(r4(R+8)),r8(U+0));
}
B6897fc:{NFSU2_TR(0x6897fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4680),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689800:{NFSU2_TR(0x689800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689803:{NFSU2_TR(0x689803);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689804:{NFSU2_TR(0x689804);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689805:{NFSU2_TR(0x689805);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689808:L689808:{c.instructions+=39;NFSU2_TR(0x689808);
__builtin_memmove((R+28),(R+28),4);
}
B68980a:{NFSU2_TR(0x68980a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68980b:{NFSU2_TR(0x68980b);
__builtin_memmove((R+20),(R+16),4);
}
B68980d:{NFSU2_TR(0x68980d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689810:{NFSU2_TR(0x689810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B689814:{NFSU2_TR(0x689814);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689819:{NFSU2_TR(0x689819);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68981e:{NFSU2_TR(0x68981e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B689823:{NFSU2_TR(0x689823);
__builtin_memmove((R+4864),(R+4608),4);
}
B689827:{NFSU2_TR(0x689827);
__builtin_memmove((R+4928),(R+4672),4);
}
B68982b:{NFSU2_TR(0x68982b);
__builtin_memmove((R+4992),(R+4736),4);
}
B68982f:{NFSU2_TR(0x68982f);
__builtin_memmove((R+5056),(R+4800),4);
}
B689833:{NFSU2_TR(0x689833);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4608))));
}
B689837:{NFSU2_TR(0x689837);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
}
B68983b:{NFSU2_TR(0x68983b);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4736))));
}
B68983f:{NFSU2_TR(0x68983f);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
}
B689843:{NFSU2_TR(0x689843);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
}
B689847:{NFSU2_TR(0x689847);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+5056))));
}
B68984b:{NFSU2_TR(0x68984b);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4992))));
}
B68984f:{NFSU2_TR(0x68984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689852:{NFSU2_TR(0x689852);
{wv<16>((R+4928),uo::rsqrtss<16>(rv<16>((R+4928)),rv<16>((R+4864))));}
}
B689856:{NFSU2_TR(0x689856);
__builtin_memmove((R+4992),(R+4928),4);
}
B68985a:{NFSU2_TR(0x68985a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4928))));
}
B68985e:{NFSU2_TR(0x68985e);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4928))));
}
B689862:{NFSU2_TR(0x689862);
__builtin_memmove((R+4928),gp(0x80aac0),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B68986a:{NFSU2_TR(0x68986a);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4864))));
}
B68986e:{NFSU2_TR(0x68986e);
w4(R+4928,b32(f32(r4(R+4928))*f32(m4(0x80aab0))));
}
B689876:{NFSU2_TR(0x689876);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4992))));
}
B68987a:{NFSU2_TR(0x68987a);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4928))));
}
B68987e:{NFSU2_TR(0x68987e);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
}
B689882:{NFSU2_TR(0x689882);
u8 U[4];
__builtin_memmove((U+0),(R+4608),4);
s4(u32(r4(R+0)),r4(U+0));
}
B689886:{NFSU2_TR(0x689886);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4928))));
}
B68988a:{NFSU2_TR(0x68988a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68988f:{NFSU2_TR(0x68988f);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4928))));
}
B689893:{NFSU2_TR(0x689893);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4736),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689898:{NFSU2_TR(0x689898);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4800),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68989d:{NFSU2_TR(0x68989d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6898a0:{NFSU2_TR(0x6898a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6898a1:{NFSU2_TR(0x6898a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6898a4:L6898a4:{c.instructions+=43;NFSU2_TR(0x6898a4);
__builtin_memmove((R+28),(R+28),4);
}
B6898a6:{NFSU2_TR(0x6898a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6898a7:{NFSU2_TR(0x6898a7);
__builtin_memmove((R+12),(R+16),4);
}
B6898a9:{NFSU2_TR(0x6898a9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6898aa:{NFSU2_TR(0x6898aa);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6898ad:{NFSU2_TR(0x6898ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6898b0:{NFSU2_TR(0x6898b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6898b1:{NFSU2_TR(0x6898b1);
__builtin_memmove((R+20),(R+16),4);
}
B6898b3:{NFSU2_TR(0x6898b3);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6898b6:{NFSU2_TR(0x6898b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6898b9:{NFSU2_TR(0x6898b9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B6898bd:{NFSU2_TR(0x6898bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B6898c0:{NFSU2_TR(0x6898c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B6898c4:{NFSU2_TR(0x6898c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6898c7:{NFSU2_TR(0x6898c7);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B6898ca:{NFSU2_TR(0x6898ca);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B6898cd:{NFSU2_TR(0x6898cd);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6898d0:{NFSU2_TR(0x6898d0);
__builtin_memmove((R+4736),(R+4616),8);
}
B6898d3:{NFSU2_TR(0x6898d3);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B6898d6:{NFSU2_TR(0x6898d6);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B6898d9:{NFSU2_TR(0x6898d9);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6898dd:{NFSU2_TR(0x6898dd);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B6898e1:{NFSU2_TR(0x6898e1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B6898e5:{NFSU2_TR(0x6898e5);
{wv<16>((R+4736),uo::rcpss<16>(rv<16>((R+4736)),rv<16>((R+4608))));}
}
B6898e9:{NFSU2_TR(0x6898e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4736),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6898ee:{NFSU2_TR(0x6898ee);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B6898f2:{NFSU2_TR(0x6898f2);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B6898f5:{NFSU2_TR(0x6898f5);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
}
B6898f9:{NFSU2_TR(0x6898f9);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B6898fc:{NFSU2_TR(0x6898fc);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B689900:{NFSU2_TR(0x689900);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4736))));
}
B689904:{NFSU2_TR(0x689904);
w4(R+4608,b32(f32(r4(R+4608))-f32(r4(R+4800))));
}
B689908:{NFSU2_TR(0x689908);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68990b:{NFSU2_TR(0x68990b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68990f:{NFSU2_TR(0x68990f);
u8 U[16];
__builtin_memmove((U+0),gp(0x80aad0),16);
__builtin_memmove((R+4608),(U+0),4);
__builtin_memmove((R+4612),(U+4),4);
__builtin_memmove((R+4616),(U+8),4);
__builtin_memmove((R+4620),(U+12),4);
}
B689916:{NFSU2_TR(0x689916);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B689919:{NFSU2_TR(0x689919);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4748))));
}
B68991c:{NFSU2_TR(0x68991c);
u8 U[16];
__builtin_memmove((U+0),(R+4672),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B68991f:{NFSU2_TR(0x68991f);
__builtin_memmove((R+16),(R+20),4);
}
B689921:{NFSU2_TR(0x689921);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689922:{NFSU2_TR(0x689922);
__builtin_memmove((R+16),(R+12),4);
}
B689924:{NFSU2_TR(0x689924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689925:{NFSU2_TR(0x689925);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689928:L689928:{c.instructions+=28;NFSU2_TR(0x689928);
__builtin_memmove((R+28),(R+28),4);
}
B68992a:{NFSU2_TR(0x68992a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68992b:{NFSU2_TR(0x68992b);
__builtin_memmove((R+12),(R+16),4);
}
B68992d:{NFSU2_TR(0x68992d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68992e:{NFSU2_TR(0x68992e);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B689931:{NFSU2_TR(0x689931);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B689934:{NFSU2_TR(0x689934);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689935:{NFSU2_TR(0x689935);
__builtin_memmove((R+20),(R+16),4);
}
B689937:{NFSU2_TR(0x689937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B68993a:{NFSU2_TR(0x68993a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68993f:{NFSU2_TR(0x68993f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689944:{NFSU2_TR(0x689944);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689949:{NFSU2_TR(0x689949);
w4(R+0,u32(0x7bab30ull));
}
B68994e:{NFSU2_TR(0x68994e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B689951:{NFSU2_TR(0x689951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689956:{NFSU2_TR(0x689956);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68995b:{NFSU2_TR(0x68995b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689960:{NFSU2_TR(0x689960);
__builtin_memmove((R+4672),gp(0x7d7d3c),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689968:{NFSU2_TR(0x689968);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68996b:{NFSU2_TR(0x68996b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68996c:{NFSU2_TR(0x68996c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68996f:{NFSU2_TR(0x68996f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689974:{NFSU2_TR(0x689974);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B689978:{NFSU2_TR(0x689978);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689979:{NFSU2_TR(0x689979);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B68997c:{NFSU2_TR(0x68997c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68997d:{NFSU2_TR(0x68997d);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689981:{NFSU2_TR(0x689981);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x689986ull));
TAIL_STATIC(0x6d395fu,6d3);
}
B689986:L689986:{c.instructions+=30;NFSU2_TR(0x689986);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68998a:{NFSU2_TR(0x68998a);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68998d:{NFSU2_TR(0x68998d);
u8 U[100];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+64),(U+4),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+8),gp(u32(r4(U+96))),4);
__builtin_memmove((U+68),(U+8),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((U+12),gp(u32(r4(U+96))),4);
__builtin_memmove((U+72),(U+12),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((U+16),gp(u32(r4(U+96))),4);
__builtin_memmove((U+76),(U+16),4);
__builtin_memmove((U+80),(R+4672),4);
__builtin_memmove((U+84),(R+4676),4);
__builtin_memmove((U+88),(R+4680),4);
__builtin_memmove((U+92),(R+4684),4);
w1(U+20,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4672,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4676,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4680,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4684,u32(u32(r4(U+51))+u32(r4(U+60))));
}
B689992:{NFSU2_TR(0x689992);
u8 U[100];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+64),(U+4),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+8),gp(u32(r4(U+96))),4);
__builtin_memmove((U+68),(U+8),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0x8ull))));
__builtin_memmove((U+12),gp(u32(r4(U+96))),4);
__builtin_memmove((U+72),(U+12),4);
w4(U+96,u32(u32(r4(U+0))+u32(u32(0xcull))));
__builtin_memmove((U+16),gp(u32(r4(U+96))),4);
__builtin_memmove((U+76),(U+16),4);
__builtin_memmove((U+80),(R+4608),4);
__builtin_memmove((U+84),(R+4612),4);
__builtin_memmove((U+88),(R+4616),4);
__builtin_memmove((U+92),(R+4620),4);
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4608,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+80))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+84))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+88))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+92))));
w4(R+4612,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4616,u32(u32(r4(U+51))+u32(r4(U+60))));
w1(U+20,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+21,u32(r1(U+20)));
w4(U+25,u32(u32(r4(U+21))*u32(r4(U+64))));
w1(U+29,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+30,u32(r1(U+29)));
w4(U+34,u32(u32(r4(U+30))*u32(r4(U+68))));
w4(U+38,u32(u32(r4(U+25))+u32(r4(U+34))));
w1(U+42,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+43,u32(r1(U+42)));
w4(U+47,u32(u32(r4(U+43))*u32(r4(U+72))));
w4(U+51,u32(u32(r4(U+38))+u32(r4(U+47))));
w1(U+55,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+56,u32(r1(U+55)));
w4(U+60,u32(u32(r4(U+56))*u32(r4(U+76))));
w4(R+4620,u32(u32(r4(U+51))+u32(r4(U+60))));
}
B689997:{NFSU2_TR(0x689997);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68999a:{NFSU2_TR(0x68999a);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68999e:{NFSU2_TR(0x68999e);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B6899a1:{NFSU2_TR(0x6899a1);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899a5:{NFSU2_TR(0x6899a5);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899a9:{NFSU2_TR(0x6899a9);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B6899ac:{NFSU2_TR(0x6899ac);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899b0:{NFSU2_TR(0x6899b0);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B6899b3:{NFSU2_TR(0x6899b3);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4748))));
}
B6899b6:{NFSU2_TR(0x6899b6);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4812))));
}
B6899b9:{NFSU2_TR(0x6899b9);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899bd:{NFSU2_TR(0x6899bd);
w4(R+0,u32(0x7bab20ull));
}
B6899c2:{NFSU2_TR(0x6899c2);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4864),(U+16),4);
__builtin_memmove((R+4868),(U+20),4);
__builtin_memmove((R+4872),(U+24),4);
__builtin_memmove((R+4876),(U+28),4);
}
B6899c5:{NFSU2_TR(0x6899c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6899c8:{NFSU2_TR(0x6899c8);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B6899cb:{NFSU2_TR(0x6899cb);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B6899cf:{NFSU2_TR(0x6899cf);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4812))));
}
B6899d2:{NFSU2_TR(0x6899d2);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B6899d5:{NFSU2_TR(0x6899d5);
w4(R+4672,u32(u32(r4(R+4672))^u32(r4(R+4864))));
w4(R+4676,u32(u32(r4(R+4676))^u32(r4(R+4868))));
w4(R+4680,u32(u32(r4(R+4680))^u32(r4(R+4872))));
w4(R+4684,u32(u32(r4(R+4684))^u32(r4(R+4876))));
}
B6899d8:{NFSU2_TR(0x6899d8);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B6899db:{NFSU2_TR(0x6899db);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B6899de:{NFSU2_TR(0x6899de);
__builtin_memmove((R+16),(R+20),4);
}
B6899e0:{NFSU2_TR(0x6899e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6899e1:{NFSU2_TR(0x6899e1);
__builtin_memmove((R+16),(R+12),4);
}
B6899e3:{NFSU2_TR(0x6899e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6899e4:{NFSU2_TR(0x6899e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6899e7:L6899e7:{c.instructions+=12;NFSU2_TR(0x6899e7);
__builtin_memmove((R+28),(R+28),4);
}
B6899e9:{NFSU2_TR(0x6899e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6899ea:{NFSU2_TR(0x6899ea);
__builtin_memmove((R+20),(R+16),4);
}
B6899ec:{NFSU2_TR(0x6899ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6899ef:{NFSU2_TR(0x6899ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6899f2:{NFSU2_TR(0x6899f2);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6899f5:{NFSU2_TR(0x6899f5);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6899f7:{NFSU2_TR(0x6899f7);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6899fa:{NFSU2_TR(0x6899fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B689a00:{NFSU2_TR(0x689a00);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689a02:{NFSU2_TR(0x689a02);
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
B689a05:{NFSU2_TR(0x689a05);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L689a48;}}
}
B689a07:L689a07:{c.instructions+=20;NFSU2_TR(0x689a07);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B689a0d:{NFSU2_TR(0x689a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689a10:{NFSU2_TR(0x689a10);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B689a12:{NFSU2_TR(0x689a12);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B689a18:{NFSU2_TR(0x689a18);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B689a1a:{NFSU2_TR(0x689a1a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689a1d:{NFSU2_TR(0x689a1d);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B689a23:{NFSU2_TR(0x689a23);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689a26:{NFSU2_TR(0x689a26);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B689a29:{NFSU2_TR(0x689a29);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B689a2b:{NFSU2_TR(0x689a2b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689a2d:{NFSU2_TR(0x689a2d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689a30:{NFSU2_TR(0x689a30);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B689a33:{NFSU2_TR(0x689a33);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B689a35:{NFSU2_TR(0x689a35);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689a38:{NFSU2_TR(0x689a38);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689a3b:{NFSU2_TR(0x689a3b);
{u32 ea_=u32(r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B689a3e:{NFSU2_TR(0x689a3e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B689a40:{NFSU2_TR(0x689a40);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689a43:{NFSU2_TR(0x689a43);
{goto L689b0d;}
}
B689a48:L689a48:{c.instructions+=15;NFSU2_TR(0x689a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689a4b:{NFSU2_TR(0x689a4b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B689a4d:{NFSU2_TR(0x689a4d);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689a4f:{NFSU2_TR(0x689a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689a52:{NFSU2_TR(0x689a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689a55:{NFSU2_TR(0x689a55);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B689a58:{NFSU2_TR(0x689a58);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B689a5b:{NFSU2_TR(0x689a5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689a5c:{NFSU2_TR(0x689a5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689a5f:{NFSU2_TR(0x689a5f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689a60:{NFSU2_TR(0x689a60);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B689a62:{NFSU2_TR(0x689a62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689a64:{NFSU2_TR(0x689a64);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689a65:{NFSU2_TR(0x689a65);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B689a68:{NFSU2_TR(0x689a68);
if(r1(R+518)){{goto L689a6b;}}
}
B689a6a:L689a6a:{c.instructions+=1;NFSU2_TR(0x689a6a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B689a6b:L689a6b:{c.instructions+=6;NFSU2_TR(0x689a6b);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689a6f:{NFSU2_TR(0x689a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689a72:{NFSU2_TR(0x689a72);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B689a75:{NFSU2_TR(0x689a75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B689a77:{NFSU2_TR(0x689a77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B689a7a:{NFSU2_TR(0x689a7a);
if(r1(R+518)){{goto L689a82;}}
}
B689a7c:L689a7c:{c.instructions+=3;NFSU2_TR(0x689a7c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689a7e:{NFSU2_TR(0x689a7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689a7f:{NFSU2_TR(0x689a7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689a82:L689a82:{c.instructions+=47;NFSU2_TR(0x689a82);
__builtin_memmove((R+8),(R+12),4);
}
B689a84:{NFSU2_TR(0x689a84);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B689a87:{NFSU2_TR(0x689a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7bab40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B689a8d:{NFSU2_TR(0x689a8d);
{u32 ea_=u32(r4(R+8)+r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689a91:{NFSU2_TR(0x689a91);
__builtin_memmove((R+24),(R+28),4);
}
B689a93:{NFSU2_TR(0x689a93);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B689a96:{NFSU2_TR(0x689a96);
{u32 ea_=u32(r4(R+24)+r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B689a9a:{NFSU2_TR(0x689a9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7bab40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689aa0:{NFSU2_TR(0x689aa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689aa3:{NFSU2_TR(0x689aa3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B689aa6:{NFSU2_TR(0x689aa6);
{u32 ea_=u32(r4(R+0)+r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B689aaa:{NFSU2_TR(0x689aaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689aad:{NFSU2_TR(0x689aad);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+24))));
}
B689aaf:{NFSU2_TR(0x689aaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689ab2:{NFSU2_TR(0x689ab2);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B689ab8:{NFSU2_TR(0x689ab8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B689aba:{NFSU2_TR(0x689aba);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B689abc:{NFSU2_TR(0x689abc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B689ac2:{NFSU2_TR(0x689ac2);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B689ac4:{NFSU2_TR(0x689ac4);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689ac7:{NFSU2_TR(0x689ac7);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B689acd:{NFSU2_TR(0x689acd);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689ad0:{NFSU2_TR(0x689ad0);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B689ad3:{NFSU2_TR(0x689ad3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B689ad6:{NFSU2_TR(0x689ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B689ad9:{NFSU2_TR(0x689ad9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B689adc:{NFSU2_TR(0x689adc);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+28))));
}
B689ade:{NFSU2_TR(0x689ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B689ae1:{NFSU2_TR(0x689ae1);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B689ae3:{NFSU2_TR(0x689ae3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B689ae5:{NFSU2_TR(0x689ae5);
{u32 ea_=u32(r4(R+0)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689ae8:{NFSU2_TR(0x689ae8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B689aea:{NFSU2_TR(0x689aea);
{u32 ea_=u32((r4(R+12)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689aed:{NFSU2_TR(0x689aed);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B689af0:{NFSU2_TR(0x689af0);
__builtin_memmove((R+8),(R+28),4);
}
B689af2:{NFSU2_TR(0x689af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B689af5:{NFSU2_TR(0x689af5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B689af8:{NFSU2_TR(0x689af8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B689afa:{NFSU2_TR(0x689afa);
{u32 ea_=u32(r4(R+0)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689afd:{NFSU2_TR(0x689afd);
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
B689aff:{NFSU2_TR(0x689aff);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B689b02:{NFSU2_TR(0x689b02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B689b03:{NFSU2_TR(0x689b03);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B689b06:{NFSU2_TR(0x689b06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B689b07:{NFSU2_TR(0x689b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689b08:{NFSU2_TR(0x689b08);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B689b0a:{NFSU2_TR(0x689b0a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B689b0d:L689b0d:{c.instructions+=3;NFSU2_TR(0x689b0d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B689b0f:{NFSU2_TR(0x689b0f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B689b10:{NFSU2_TR(0x689b10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689b13:L689b13:{c.instructions+=21;NFSU2_TR(0x689b13);
__builtin_memmove((R+28),(R+28),4);
}
B689b15:{NFSU2_TR(0x689b15);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689b16:{NFSU2_TR(0x689b16);
__builtin_memmove((R+20),(R+16),4);
}
B689b18:{NFSU2_TR(0x689b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689b1b:{NFSU2_TR(0x689b1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689b1e:{NFSU2_TR(0x689b1e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B689b21:{NFSU2_TR(0x689b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4736),(U+0),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689b25:{NFSU2_TR(0x689b25);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b29:{NFSU2_TR(0x689b29);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689b2d:{NFSU2_TR(0x689b2d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B689b30:{NFSU2_TR(0x689b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689b35:{NFSU2_TR(0x689b35);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b39:{NFSU2_TR(0x689b39);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B689b3d:{NFSU2_TR(0x689b3d);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B689b40:{NFSU2_TR(0x689b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689b43:{NFSU2_TR(0x689b43);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B689b46:{NFSU2_TR(0x689b46);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B689b49:{NFSU2_TR(0x689b49);
u8 U[16];
__builtin_memmove((U+0),(R+4736),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B689b4c:{NFSU2_TR(0x689b4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689b4f:{NFSU2_TR(0x689b4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689b50:{NFSU2_TR(0x689b50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689b53:L689b53:{c.instructions+=29;NFSU2_TR(0x689b53);
__builtin_memmove((R+28),(R+28),4);
}
B689b55:{NFSU2_TR(0x689b55);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689b56:{NFSU2_TR(0x689b56);
__builtin_memmove((R+20),(R+16),4);
}
B689b58:{NFSU2_TR(0x689b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689b5b:{NFSU2_TR(0x689b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689b5e:{NFSU2_TR(0x689b5e);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B689b61:{NFSU2_TR(0x689b61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4736),(U+0),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689b65:{NFSU2_TR(0x689b65);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b69:{NFSU2_TR(0x689b69);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689b6d:{NFSU2_TR(0x689b6d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B689b70:{NFSU2_TR(0x689b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689b75:{NFSU2_TR(0x689b75);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b79:{NFSU2_TR(0x689b79);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B689b7d:{NFSU2_TR(0x689b7d);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B689b80:{NFSU2_TR(0x689b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689b83:{NFSU2_TR(0x689b83);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B689b86:{NFSU2_TR(0x689b86);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B689b89:{NFSU2_TR(0x689b89);
{wv<16>((R+4608),uo::rcpps<16>(rv<16>((R+4608)),rv<16>((R+4736))));}
}
B689b8c:{NFSU2_TR(0x689b8c);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B689b8f:{NFSU2_TR(0x689b8f);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4620))));
}
B689b92:{NFSU2_TR(0x689b92);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4608))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4612))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4616))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4620))));
}
B689b95:{NFSU2_TR(0x689b95);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4736))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4740))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4744))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4748))));
}
B689b98:{NFSU2_TR(0x689b98);
w4(R+4608,b32(f32(r4(R+4608))-f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))-f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))-f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))-f32(r4(R+4684))));
}
B689b9b:{NFSU2_TR(0x689b9b);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689b9f:{NFSU2_TR(0x689b9f);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4608))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4612))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4616))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4620))));
}
B689ba2:{NFSU2_TR(0x689ba2);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B689ba5:{NFSU2_TR(0x689ba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689ba8:{NFSU2_TR(0x689ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689ba9:{NFSU2_TR(0x689ba9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689bac:L689bac:{c.instructions+=19;NFSU2_TR(0x689bac);
__builtin_memmove((R+28),(R+28),4);
}
B689bae:{NFSU2_TR(0x689bae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689baf:{NFSU2_TR(0x689baf);
__builtin_memmove((R+20),(R+16),4);
}
B689bb1:{NFSU2_TR(0x689bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689bb4:{NFSU2_TR(0x689bb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689bb7:{NFSU2_TR(0x689bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4736),(U+0),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689bbb:{NFSU2_TR(0x689bbb);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+4))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4800),(U+16),4);
__builtin_memmove((R+4804),(U+20),4);
__builtin_memmove((R+4808),(U+24),4);
__builtin_memmove((R+4812),(U+28),4);
}
B689bbe:{NFSU2_TR(0x689bbe);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689bc2:{NFSU2_TR(0x689bc2);
u8 U[36];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689bc6:{NFSU2_TR(0x689bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689bcb:{NFSU2_TR(0x689bcb);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B689bce:{NFSU2_TR(0x689bce);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689bd2:{NFSU2_TR(0x689bd2);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4864))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4868))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4872))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4876))));
}
B689bd5:{NFSU2_TR(0x689bd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689bd8:{NFSU2_TR(0x689bd8);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4684))));
}
B689bdb:{NFSU2_TR(0x689bdb);
u8 U[8];
__builtin_memmove((U+0),(R+4736),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B689bde:{NFSU2_TR(0x689bde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689be1:{NFSU2_TR(0x689be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689be2:{NFSU2_TR(0x689be2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689be5:L689be5:{c.instructions+=18;NFSU2_TR(0x689be5);
__builtin_memmove((R+28),(R+28),4);
}
B689be7:{NFSU2_TR(0x689be7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689be8:{NFSU2_TR(0x689be8);
__builtin_memmove((R+20),(R+16),4);
}
B689bea:{NFSU2_TR(0x689bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689bed:{NFSU2_TR(0x689bed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B689bf1:{NFSU2_TR(0x689bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689bf6:{NFSU2_TR(0x689bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689bfb:{NFSU2_TR(0x689bfb);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B689bfe:{NFSU2_TR(0x689bfe);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B689c01:{NFSU2_TR(0x689c01);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B689c04:{NFSU2_TR(0x689c04);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B689c08:{NFSU2_TR(0x689c08);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4672))));
}
B689c0c:{NFSU2_TR(0x689c0c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4736))));
}
B689c10:{NFSU2_TR(0x689c10);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B689c14:{NFSU2_TR(0x689c14);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B689c18:{NFSU2_TR(0x689c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689c1b:{NFSU2_TR(0x689c1b);
u8 U[4];
w1(U+0,u8(std::isnan(f32(r4(R+4608)))));
w1(U+1,u8(std::isnan(f32(m4(0x7baae0)))));
w1(R+514,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4608))==f32(m4(0x7baae0))));
w1(R+518,u8(u32(r1(R+514))|u32(r1(U+2))));
w1(U+3,u8(f32(r4(R+4608))<f32(m4(0x7baae0))));
w1(R+512,u8(u32(r1(R+514))|u32(r1(U+3))));
w1(R+523,u8(0x0ull));
w1(R+516,u8(0x0ull));
w1(R+519,u8(0x0ull));
}
B689c22:{NFSU2_TR(0x689c22);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L689c31;}}
}
B689c24:L689c24:{c.instructions+=5;NFSU2_TR(0x689c24);
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
B689c26:{NFSU2_TR(0x689c26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B689c28:{NFSU2_TR(0x689c28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c2b:{NFSU2_TR(0x689c2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c2e:{NFSU2_TR(0x689c2e);
{goto L689c72;}
}
B689c31:L689c31:{c.instructions+=14;NFSU2_TR(0x689c31);
{wv<16>((R+4992),uo::rsqrtss<16>(rv<16>((R+4992)),rv<16>((R+4608))));}
}
B689c35:{NFSU2_TR(0x689c35);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689c38:{NFSU2_TR(0x689c38);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
}
B689c3c:{NFSU2_TR(0x689c3c);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B689c40:{NFSU2_TR(0x689c40);
__builtin_memmove((R+4672),gp(0x7baac0),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689c48:{NFSU2_TR(0x689c48);
w4(R+5056,b32(f32(r4(R+5056))*f32(m4(0x7baad0))));
}
B689c50:{NFSU2_TR(0x689c50);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(R+4992))));
}
B689c54:{NFSU2_TR(0x689c54);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+5056))));
}
B689c58:{NFSU2_TR(0x689c58);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
}
B689c5c:{NFSU2_TR(0x689c5c);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
}
B689c60:{NFSU2_TR(0x689c60);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
}
B689c64:{NFSU2_TR(0x689c64);
u8 U[4];
__builtin_memmove((U+0),(R+4800),4);
s4(u32(r4(R+4)),r4(U+0));
}
B689c68:{NFSU2_TR(0x689c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4864),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c6d:{NFSU2_TR(0x689c6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4928),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689c72:L689c72:{c.instructions+=3;NFSU2_TR(0x689c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689c75:{NFSU2_TR(0x689c75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689c76:{NFSU2_TR(0x689c76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689c79:L689c79:{c.instructions+=18;NFSU2_TR(0x689c79);
__builtin_memmove((R+28),(R+28),4);
}
B689c7b:{NFSU2_TR(0x689c7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689c7c:{NFSU2_TR(0x689c7c);
__builtin_memmove((R+20),(R+16),4);
}
B689c7e:{NFSU2_TR(0x689c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689c81:{NFSU2_TR(0x689c81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4608),(U+0),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B689c85:{NFSU2_TR(0x689c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689c8a:{NFSU2_TR(0x689c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4736),(U+4),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B689c8f:{NFSU2_TR(0x689c8f);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B689c92:{NFSU2_TR(0x689c92);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B689c95:{NFSU2_TR(0x689c95);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B689c98:{NFSU2_TR(0x689c98);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B689c9c:{NFSU2_TR(0x689c9c);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4672))));
}
B689ca0:{NFSU2_TR(0x689ca0);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4736))));
}
B689ca4:{NFSU2_TR(0x689ca4);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
}
B689ca8:{NFSU2_TR(0x689ca8);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
}
B689cac:{NFSU2_TR(0x689cac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689caf:{NFSU2_TR(0x689caf);
u8 U[4];
w1(U+0,u8(std::isnan(f32(r4(R+4608)))));
w1(U+1,u8(std::isnan(f32(m4(0x7baae0)))));
w1(R+514,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4608))==f32(m4(0x7baae0))));
w1(R+518,u8(u32(r1(R+514))|u32(r1(U+2))));
w1(U+3,u8(f32(r4(R+4608))<f32(m4(0x7baae0))));
w1(R+512,u8(u32(r1(R+514))|u32(r1(U+3))));
w1(R+523,u8(0x0ull));
w1(R+516,u8(0x0ull));
w1(R+519,u8(0x0ull));
}
B689cb6:{NFSU2_TR(0x689cb6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L689cc9;}}
}
B689cb8:L689cb8:{c.instructions+=6;NFSU2_TR(0x689cb8);
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
B689cba:{NFSU2_TR(0x689cba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B689cbc:{NFSU2_TR(0x689cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689cbf:{NFSU2_TR(0x689cbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689cc2:{NFSU2_TR(0x689cc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689cc5:{NFSU2_TR(0x689cc5);
{goto L689d14;}
}
B689cc9:L689cc9:{c.instructions+=16;NFSU2_TR(0x689cc9);
{wv<16>((R+4992),uo::rsqrtss<16>(rv<16>((R+4992)),rv<16>((R+4608))));}
}
B689ccd:{NFSU2_TR(0x689ccd);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689cd0:{NFSU2_TR(0x689cd0);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4608))));
}
B689cd4:{NFSU2_TR(0x689cd4);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
}
B689cd8:{NFSU2_TR(0x689cd8);
__builtin_memmove((R+4672),gp(0x7baac0),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B689ce0:{NFSU2_TR(0x689ce0);
w4(R+5056,b32(f32(r4(R+5056))*f32(m4(0x7baad0))));
}
B689ce8:{NFSU2_TR(0x689ce8);
w4(R+4672,b32(f32(r4(R+4672))-f32(r4(R+4992))));
}
B689cec:{NFSU2_TR(0x689cec);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+5056))));
}
B689cf0:{NFSU2_TR(0x689cf0);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
}
B689cf4:{NFSU2_TR(0x689cf4);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4672))));
}
B689cf8:{NFSU2_TR(0x689cf8);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4672))));
}
B689cfc:{NFSU2_TR(0x689cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+4))));
}
B689d01:{NFSU2_TR(0x689d01);
u8 U[4];
__builtin_memmove((U+0),(R+4800),4);
s4(u32(r4(R+4)),r4(U+0));
}
B689d05:{NFSU2_TR(0x689d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4864),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d0a:{NFSU2_TR(0x689d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4928),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d0f:{NFSU2_TR(0x689d0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d14:L689d14:{c.instructions+=3;NFSU2_TR(0x689d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689d17:{NFSU2_TR(0x689d17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689d18:{NFSU2_TR(0x689d18);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689d1b:L689d1b:{c.instructions+=158;NFSU2_TR(0x689d1b);
__builtin_memmove((R+28),(R+28),4);
}
B689d1d:{NFSU2_TR(0x689d1d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689d1e:{NFSU2_TR(0x689d1e);
__builtin_memmove((R+12),(R+16),4);
}
B689d20:{NFSU2_TR(0x689d20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B689d23:{NFSU2_TR(0x689d23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B689d26:{NFSU2_TR(0x689d26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B689d29:{NFSU2_TR(0x689d29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689d2a:{NFSU2_TR(0x689d2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689d2b:{NFSU2_TR(0x689d2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B689d2e:{NFSU2_TR(0x689d2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B689d32:{NFSU2_TR(0x689d32);
__builtin_memmove((R+20),(R+16),4);
}
B689d34:{NFSU2_TR(0x689d34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x110ull))));
}
B689d3a:{NFSU2_TR(0x689d3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689d3d:{NFSU2_TR(0x689d3d);
w4(R+4608,u32(u32(r4(R+4608))^u32(r4(R+4608))));
w4(R+4612,u32(u32(r4(R+4612))^u32(r4(R+4612))));
w4(R+4616,u32(u32(r4(R+4616))^u32(r4(R+4616))));
w4(R+4620,u32(u32(r4(R+4620))^u32(r4(R+4620))));
}
B689d40:{NFSU2_TR(0x689d40);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B689d44:{NFSU2_TR(0x689d44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4864),(U+4),8);
}
B689d48:{NFSU2_TR(0x689d48);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B689d4c:{NFSU2_TR(0x689d4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4872),(U+4),8);
}
B689d50:{NFSU2_TR(0x689d50);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B689d54:{NFSU2_TR(0x689d54);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B689d57:{NFSU2_TR(0x689d57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B689d5b:{NFSU2_TR(0x689d5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B689d5f:{NFSU2_TR(0x689d5f);
__builtin_memmove((R+4928),(R+4736),4);
__builtin_memmove((R+4932),(R+4740),4);
__builtin_memmove((R+4936),(R+4744),4);
__builtin_memmove((R+4940),(R+4748),4);
}
B689d62:{NFSU2_TR(0x689d62);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d66:{NFSU2_TR(0x689d66);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d6a:{NFSU2_TR(0x689d6a);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B689d6d:{NFSU2_TR(0x689d6d);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4940))));
}
B689d70:{NFSU2_TR(0x689d70);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d74:{NFSU2_TR(0x689d74);
__builtin_memmove((R+4992),(R+4736),4);
__builtin_memmove((R+4996),(R+4740),4);
__builtin_memmove((R+5000),(R+4744),4);
__builtin_memmove((R+5004),(R+4748),4);
}
B689d77:{NFSU2_TR(0x689d77);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d7b:{NFSU2_TR(0x689d7b);
__builtin_memmove((R+5056),(R+4800),4);
__builtin_memmove((R+5060),(R+4804),4);
__builtin_memmove((R+5064),(R+4808),4);
__builtin_memmove((R+5068),(R+4812),4);
}
B689d7e:{NFSU2_TR(0x689d7e);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d82:{NFSU2_TR(0x689d82);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689d86:{NFSU2_TR(0x689d86);
__builtin_memmove((R+5056),(R+4800),4);
__builtin_memmove((R+5060),(R+4804),4);
__builtin_memmove((R+5064),(R+4808),4);
__builtin_memmove((R+5068),(R+4812),4);
}
B689d89:{NFSU2_TR(0x689d89);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4992))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4996))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5000))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5004))));
}
B689d8c:{NFSU2_TR(0x689d8c);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4672))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4676))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4680))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4684))));
}
B689d8f:{NFSU2_TR(0x689d8f);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689d96:{NFSU2_TR(0x689d96);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B689d99:{NFSU2_TR(0x689d99);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4736))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4740))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4744))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4748))));
}
B689d9c:{NFSU2_TR(0x689d9c);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B689d9f:{NFSU2_TR(0x689d9f);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+5068))));
}
B689da2:{NFSU2_TR(0x689da2);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689da5:{NFSU2_TR(0x689da5);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B689da8:{NFSU2_TR(0x689da8);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689dac:{NFSU2_TR(0x689dac);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689db0:{NFSU2_TR(0x689db0);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),(R+4736),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689db7:{NFSU2_TR(0x689db7);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B689dba:{NFSU2_TR(0x689dba);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5068))));
}
B689dbd:{NFSU2_TR(0x689dbd);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B689dc0:{NFSU2_TR(0x689dc0);
__builtin_memmove((R+4800),(R+5056),4);
__builtin_memmove((R+4804),(R+5060),4);
__builtin_memmove((R+4808),(R+5064),4);
__builtin_memmove((R+4812),(R+5068),4);
}
B689dc3:{NFSU2_TR(0x689dc3);
u8 U[76];
__builtin_memmove((U+44),(R+5056),4);
__builtin_memmove((U+48),(R+5060),4);
__builtin_memmove((U+52),(R+5064),4);
__builtin_memmove((U+56),(R+5068),4);
__builtin_memmove((U+60),(R+5056),4);
__builtin_memmove((U+64),(R+5060),4);
__builtin_memmove((U+68),(R+5064),4);
__builtin_memmove((U+72),(R+5068),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5056,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+5060,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5064,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5068,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689dc7:{NFSU2_TR(0x689dc7);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B689dca:{NFSU2_TR(0x689dca);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),(R+4800),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689dd1:{NFSU2_TR(0x689dd1);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B689dd4:{NFSU2_TR(0x689dd4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5068))));
}
B689dd7:{NFSU2_TR(0x689dd7);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4672))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4676))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4680))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4684))));
}
B689dda:{NFSU2_TR(0x689dda);
w4(R+4736,b32(f32(r4(R+4736))-f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))-f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))-f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))-f32(r4(R+4812))));
}
B689ddd:{NFSU2_TR(0x689ddd);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B689de0:{NFSU2_TR(0x689de0);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689de4:{NFSU2_TR(0x689de4);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4864))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4868))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4872))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4876))));
}
B689de7:{NFSU2_TR(0x689de7);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689deb:{NFSU2_TR(0x689deb);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689df2:{NFSU2_TR(0x689df2);
__builtin_memmove((R+5056),(R+4928),4);
__builtin_memmove((R+5060),(R+4932),4);
__builtin_memmove((R+5064),(R+4936),4);
__builtin_memmove((R+5068),(R+4940),4);
}
B689df5:{NFSU2_TR(0x689df5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B689df8:{NFSU2_TR(0x689df8);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B689dfb:{NFSU2_TR(0x689dfb);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B689dfe:{NFSU2_TR(0x689dfe);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e02:{NFSU2_TR(0x689e02);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B689e05:{NFSU2_TR(0x689e05);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e0c:{NFSU2_TR(0x689e0c);
__builtin_memmove((R+4864),(R+5056),4);
__builtin_memmove((R+4868),(R+5060),4);
__builtin_memmove((R+4872),(R+5064),4);
__builtin_memmove((R+4876),(R+5068),4);
}
B689e0f:{NFSU2_TR(0x689e0f);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4812))));
}
B689e12:{NFSU2_TR(0x689e12);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B689e15:{NFSU2_TR(0x689e15);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5068))));
}
B689e18:{NFSU2_TR(0x689e18);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+4748))));
}
B689e1b:{NFSU2_TR(0x689e1b);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B689e1e:{NFSU2_TR(0x689e1e);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B689e21:{NFSU2_TR(0x689e21);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e25:{NFSU2_TR(0x689e25);
__builtin_memmove((R+5056),(R+4672),4);
__builtin_memmove((R+5060),(R+4676),4);
__builtin_memmove((R+5064),(R+4680),4);
__builtin_memmove((R+5068),(R+4684),4);
}
B689e28:{NFSU2_TR(0x689e28);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e2c:{NFSU2_TR(0x689e2c);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e33:{NFSU2_TR(0x689e33);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+5056))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+5060))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+5064))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+5068))));
}
B689e36:{NFSU2_TR(0x689e36);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B689e39:{NFSU2_TR(0x689e39);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e3d:{NFSU2_TR(0x689e3d);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4928))));
}
B689e41:{NFSU2_TR(0x689e41);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),(R+4672),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e48:{NFSU2_TR(0x689e48);
__builtin_memmove((R+4928),(R+4992),4);
__builtin_memmove((R+4932),(R+4996),4);
__builtin_memmove((R+4936),(R+5000),4);
__builtin_memmove((R+4940),(R+5004),4);
}
B689e4b:{NFSU2_TR(0x689e4b);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B689e4e:{NFSU2_TR(0x689e4e);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e52:{NFSU2_TR(0x689e52);
__builtin_memmove((R+5056),(R+4928),4);
__builtin_memmove((R+5060),(R+4932),4);
__builtin_memmove((R+5064),(R+4936),4);
__builtin_memmove((R+5068),(R+4940),4);
}
B689e55:{NFSU2_TR(0x689e55);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e59:{NFSU2_TR(0x689e59);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e5d:{NFSU2_TR(0x689e5d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B689e64:{NFSU2_TR(0x689e64);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e68:{NFSU2_TR(0x689e68);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B689e6b:{NFSU2_TR(0x689e6b);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B689e6e:{NFSU2_TR(0x689e6e);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B689e71:{NFSU2_TR(0x689e71);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B689e74:{NFSU2_TR(0x689e74);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4940))));
}
B689e77:{NFSU2_TR(0x689e77);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4992))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4996))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+5000))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+5004))));
}
B689e7a:{NFSU2_TR(0x689e7a);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B689e7d:{NFSU2_TR(0x689e7d);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4748))));
}
B689e80:{NFSU2_TR(0x689e80);
u8 U[76];
__builtin_memmove((U+44),(R+4992),4);
__builtin_memmove((U+48),(R+4996),4);
__builtin_memmove((U+52),(R+5000),4);
__builtin_memmove((U+56),(R+5004),4);
__builtin_memmove((U+60),(R+4992),4);
__builtin_memmove((U+64),(R+4996),4);
__builtin_memmove((U+68),(R+5000),4);
__builtin_memmove((U+72),(R+5004),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4992,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4996,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5000,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+5004,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689e84:{NFSU2_TR(0x689e84);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4928),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e88:{NFSU2_TR(0x689e88);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689e8c:{NFSU2_TR(0x689e8c);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+5056),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689e90:{NFSU2_TR(0x689e90);
__builtin_memmove((R+5056),(R+4992),4);
__builtin_memmove((R+5060),(R+4996),4);
__builtin_memmove((R+5064),(R+5000),4);
__builtin_memmove((R+5068),(R+5004),4);
}
B689e93:{NFSU2_TR(0x689e93);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B689e96:{NFSU2_TR(0x689e96);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4800))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4804))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+4808))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+4812))));
}
B689e99:{NFSU2_TR(0x689e99);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B689e9c:{NFSU2_TR(0x689e9c);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4800),4);
__builtin_memmove((U+64),(R+4804),4);
__builtin_memmove((U+68),(R+4808),4);
__builtin_memmove((U+72),(R+4812),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4800,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4804,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4808,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4812,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689ea0:{NFSU2_TR(0x689ea0);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689ea4:{NFSU2_TR(0x689ea4);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B689ea7:{NFSU2_TR(0x689ea7);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B689eaa:{NFSU2_TR(0x689eaa);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689eae:{NFSU2_TR(0x689eae);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B689eb1:{NFSU2_TR(0x689eb1);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B689eb4:{NFSU2_TR(0x689eb4);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4940))));
}
B689eb7:{NFSU2_TR(0x689eb7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689ebe:{NFSU2_TR(0x689ebe);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+5056),(U+20),4);
__builtin_memmove((R+5060),(U+24),4);
__builtin_memmove((R+5064),(U+28),4);
__builtin_memmove((R+5068),(U+32),4);
}
B689ec5:{NFSU2_TR(0x689ec5);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+5056))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+5060))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5064))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5068))));
}
B689ec8:{NFSU2_TR(0x689ec8);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689ecc:{NFSU2_TR(0x689ecc);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+5056),(U+20),4);
__builtin_memmove((R+5060),(U+24),4);
__builtin_memmove((R+5064),(U+28),4);
__builtin_memmove((R+5068),(U+32),4);
}
B689ed0:{NFSU2_TR(0x689ed0);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+5056))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+5060))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+5064))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+5068))));
}
B689ed3:{NFSU2_TR(0x689ed3);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+5056))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+5060))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+5064))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+5068))));
}
B689ed6:{NFSU2_TR(0x689ed6);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+4876))));
}
B689ed9:{NFSU2_TR(0x689ed9);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+5056))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+5060))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+5064))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+5068))));
}
B689edc:{NFSU2_TR(0x689edc);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4940))));
}
B689edf:{NFSU2_TR(0x689edf);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689ee3:{NFSU2_TR(0x689ee3);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B689ee6:{NFSU2_TR(0x689ee6);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689eea:{NFSU2_TR(0x689eea);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689eee:{NFSU2_TR(0x689eee);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4992),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B689ef2:{NFSU2_TR(0x689ef2);
__builtin_memmove((R+4992),(R+4928),4);
__builtin_memmove((R+4996),(R+4932),4);
__builtin_memmove((R+5000),(R+4936),4);
__builtin_memmove((R+5004),(R+4940),4);
}
B689ef5:{NFSU2_TR(0x689ef5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B689ef8:{NFSU2_TR(0x689ef8);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4876))));
}
B689efb:{NFSU2_TR(0x689efb);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B689efe:{NFSU2_TR(0x689efe);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B689f01:{NFSU2_TR(0x689f01);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B689f04:{NFSU2_TR(0x689f04);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4992))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4996))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+5000))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+5004))));
}
B689f07:{NFSU2_TR(0x689f07);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689f0e:{NFSU2_TR(0x689f0e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B689f15:{NFSU2_TR(0x689f15);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4992))));
w4(R+4932,b32(f32(r4(R+4932))-f32(r4(R+4996))));
w4(R+4936,b32(f32(r4(R+4936))-f32(r4(R+5000))));
w4(R+4940,b32(f32(r4(R+4940))-f32(r4(R+5004))));
}
B689f18:{NFSU2_TR(0x689f18);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689f1c:{NFSU2_TR(0x689f1c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B689f20:{NFSU2_TR(0x689f20);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+5068))));
}
B689f23:{NFSU2_TR(0x689f23);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4940))));
}
B689f26:{NFSU2_TR(0x689f26);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689f2a:{NFSU2_TR(0x689f2a);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(R+4940))));
}
B689f2d:{NFSU2_TR(0x689f2d);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+5056))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+5060))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+5064))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+5068))));
}
B689f30:{NFSU2_TR(0x689f30);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B689f34:{NFSU2_TR(0x689f34);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4940))));
}
B689f37:{NFSU2_TR(0x689f37);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B689f3a:{NFSU2_TR(0x689f3a);
w4(R+4992,b32(f32(r4(R+4992))-f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))-f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))-f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))-f32(r4(R+4748))));
}
B689f3d:{NFSU2_TR(0x689f3d);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B689f40:{NFSU2_TR(0x689f40);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4992))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4996))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+5000))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+5004))));
}
B689f43:{NFSU2_TR(0x689f43);
u8 U[3];
w1(U+0,u8(std::isnan(f32(r4(R+4672)))));
w1(U+1,u8(std::isnan(f32(r4(R+4608)))));
w1(R+514,u8((r1(U+0))||(r1(U+1))));
w1(U+2,u8(f32(r4(R+4672))==f32(r4(R+4608))));
w1(R+518,u8(u32(r1(R+514))|u32(r1(U+2))));
w1(R+516,u8(0x0ull));
}
B689f46:{NFSU2_TR(0x689f46);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4992),(U+20),4);
__builtin_memmove((R+4996),(U+24),4);
__builtin_memmove((R+5000),(U+28),4);
__builtin_memmove((R+5004),(U+32),4);
}
B689f4a:{NFSU2_TR(0x689f4a);
if(r1(R+518)){{goto L689fb9;}}
}
B689f4c:L689f4c:{c.instructions+=3;NFSU2_TR(0x689f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689f4f:{NFSU2_TR(0x689f4f);
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
B689f51:{NFSU2_TR(0x689f51);
if(r1(R+518)){{goto L689f5a;}}
}
B689f53:L689f53:{c.instructions+=2;NFSU2_TR(0x689f53);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B689f56:{NFSU2_TR(0x689f56);
u8 U[4];
__builtin_memmove((U+0),(R+4608),4);
s4(u32(r4(R+0)),r4(U+0));
}
B689f5a:L689f5a:{c.instructions+=28;NFSU2_TR(0x689f5a);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B689f5d:{NFSU2_TR(0x689f5d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B689f64:{NFSU2_TR(0x689f64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689f67:{NFSU2_TR(0x689f67);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B689f6a:{NFSU2_TR(0x689f6a);
{wv<16>((R+4608),uo::rcpss<16>(rv<16>((R+4608)),rv<16>((R+4608))));}
}
B689f6e:{NFSU2_TR(0x689f6e);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B689f71:{NFSU2_TR(0x689f71);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4608))));
}
B689f75:{NFSU2_TR(0x689f75);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4608))));
}
B689f79:{NFSU2_TR(0x689f79);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4928))));
}
B689f7d:{NFSU2_TR(0x689f7d);
w4(R+4928,b32(f32(r4(R+4928))-f32(r4(R+4800))));
}
B689f81:{NFSU2_TR(0x689f81);
u8 U[76];
__builtin_memmove((U+44),(R+4928),4);
__builtin_memmove((U+48),(R+4932),4);
__builtin_memmove((U+52),(R+4936),4);
__builtin_memmove((U+56),(R+4940),4);
__builtin_memmove((U+60),(R+4928),4);
__builtin_memmove((U+64),(R+4932),4);
__builtin_memmove((U+68),(R+4936),4);
__builtin_memmove((U+72),(R+4940),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4928,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4932,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4936,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4940,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B689f85:{NFSU2_TR(0x689f85);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4928))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4932))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4936))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4940))));
}
B689f88:{NFSU2_TR(0x689f88);
u8 U[8];
__builtin_memmove((U+0),(R+4672),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B689f8b:{NFSU2_TR(0x689f8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4680),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689f8f:{NFSU2_TR(0x689f8f);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(R+4940))));
}
B689f92:{NFSU2_TR(0x689f92);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4864),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689f96:{NFSU2_TR(0x689f96);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4872),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689f9a:{NFSU2_TR(0x689f9a);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(R+4940))));
}
B689f9d:{NFSU2_TR(0x689f9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4992),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fa1:{NFSU2_TR(0x689fa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+5000),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fa5:{NFSU2_TR(0x689fa5);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B689fa8:{NFSU2_TR(0x689fa8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4928),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fac:{NFSU2_TR(0x689fac);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4936),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B689fb0:{NFSU2_TR(0x689fb0);
__builtin_memmove((R+16),(R+20),4);
}
B689fb2:{NFSU2_TR(0x689fb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689fb3:{NFSU2_TR(0x689fb3);
__builtin_memmove((R+16),(R+12),4);
}
B689fb5:{NFSU2_TR(0x689fb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689fb6:{NFSU2_TR(0x689fb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689fb9:L689fb9:{c.instructions+=6;NFSU2_TR(0x689fb9);
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
B689fbb:{NFSU2_TR(0x689fbb);
__builtin_memmove((R+16),(R+20),4);
}
B689fbd:{NFSU2_TR(0x689fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B689fbe:{NFSU2_TR(0x689fbe);
__builtin_memmove((R+16),(R+12),4);
}
B689fc0:{NFSU2_TR(0x689fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B689fc1:{NFSU2_TR(0x689fc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B689fc7:L689fc7:{c.instructions+=17;NFSU2_TR(0x689fc7);
__builtin_memmove((R+28),(R+28),4);
}
B689fc9:{NFSU2_TR(0x689fc9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B689fca:{NFSU2_TR(0x689fca);
__builtin_memmove((R+20),(R+16),4);
}
B689fcc:{NFSU2_TR(0x689fcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B689fcf:{NFSU2_TR(0x689fcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B689fd2:{NFSU2_TR(0x689fd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B689fd5:{NFSU2_TR(0x689fd5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B689fd8:{NFSU2_TR(0x689fd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B689fdc:{NFSU2_TR(0x689fdc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B689fe0:{NFSU2_TR(0x689fe0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B689fe4:{NFSU2_TR(0x689fe4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B689fe8:{NFSU2_TR(0x689fe8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B689fec:{NFSU2_TR(0x689fec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B689ff0:{NFSU2_TR(0x689ff0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B689ff4:{NFSU2_TR(0x689ff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4864),(U+0),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B689ff8:{NFSU2_TR(0x689ff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4928),(U+4),4);
w4(R+4932,u32(0x0ull));
w4(R+4936,u32(0x0ull));
w4(R+4940,u32(0x0ull));
}
B689ffd:{NFSU2_TR(0x689ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4992),(U+4),4);
w4(R+4996,u32(0x0ull));
w4(R+5000,u32(0x0ull));
w4(R+5004,u32(0x0ull));
TAIL_STATIC(0x68a002u,68a);
}
XIT:NFSU2_TR_EXIT(0x689,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
