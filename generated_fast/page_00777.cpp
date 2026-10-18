#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4cf(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51a(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_527(u8* __restrict R,Cpu& c);
u32 body_52a(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x777,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x777,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_777(u8* __restrict R,Cpu& c);
u32 page_777(Cpu& c){return body_777(c.regs.data(),c);}
__attribute__((noinline)) u32 body_777(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x777000:goto L777000;
case 0x777003:c.instructions+=2;goto B777003;
case 0x777006:c.instructions+=1;goto B777006;
case 0x77700b:goto L77700b;
case 0x777010:c.instructions+=1;goto B777010;
case 0x777020:goto L777020;
case 0x777023:c.instructions+=1;goto B777023;
case 0x777028:goto L777028;
case 0x77702d:c.instructions+=1;goto B77702d;
case 0x777040:goto L777040;
case 0x777043:c.instructions+=1;goto B777043;
case 0x777048:goto L777048;
case 0x77704d:c.instructions+=1;goto B77704d;
case 0x777060:goto L777060;
case 0x777066:c.instructions+=1;goto B777066;
case 0x77706b:goto L77706b;
case 0x777071:c.instructions+=1;goto B777071;
case 0x777076:goto L777076;
case 0x77707b:c.instructions+=1;goto B77707b;
case 0x777080:goto L777080;
case 0x777083:c.instructions+=2;goto B777083;
case 0x777084:c.instructions+=1;goto B777084;
case 0x777089:goto L777089;
case 0x77708a:c.instructions+=1;goto B77708a;
case 0x77708b:goto L77708b;
case 0x777090:c.instructions+=1;goto B777090;
case 0x7770a0:goto L7770a0;
case 0x7770a3:c.instructions+=1;goto B7770a3;
case 0x7770a8:goto L7770a8;
case 0x7770ab:c.instructions+=2;goto B7770ab;
case 0x7770ac:c.instructions+=1;goto B7770ac;
case 0x7770b1:goto L7770b1;
case 0x7770b2:c.instructions+=1;goto B7770b2;
case 0x7770b3:goto L7770b3;
case 0x7770b8:c.instructions+=1;goto B7770b8;
case 0x7770c0:goto L7770c0;
case 0x7770c3:c.instructions+=2;goto B7770c3;
case 0x7770c4:c.instructions+=1;goto B7770c4;
case 0x7770c9:goto L7770c9;
case 0x7770ca:c.instructions+=1;goto B7770ca;
case 0x7770cb:goto L7770cb;
case 0x7770d0:c.instructions+=1;goto B7770d0;
case 0x7770e0:goto L7770e0;
case 0x7770e6:c.instructions+=2;goto B7770e6;
case 0x7770e7:c.instructions+=1;goto B7770e7;
case 0x7770ec:goto L7770ec;
case 0x7770ed:c.instructions+=1;goto B7770ed;
case 0x7770ee:goto L7770ee;
case 0x7770f3:c.instructions+=1;goto B7770f3;
case 0x777100:goto L777100;
case 0x777103:c.instructions+=1;goto B777103;
case 0x777108:goto L777108;
case 0x77710d:c.instructions+=1;goto B77710d;
case 0x777120:goto L777120;
case 0x777122:c.instructions+=4;goto B777122;
case 0x777127:c.instructions+=3;goto B777127;
case 0x77712a:c.instructions+=2;goto B77712a;
case 0x77712b:c.instructions+=1;goto B77712b;
case 0x777130:goto L777130;
case 0x777133:c.instructions+=1;goto B777133;
case 0x777134:goto L777134;
case 0x777139:c.instructions+=1;goto B777139;
case 0x777140:goto L777140;
case 0x777143:c.instructions+=1;goto B777143;
case 0x777148:goto L777148;
case 0x77714b:c.instructions+=1;goto B77714b;
case 0x777150:goto L777150;
case 0x777155:c.instructions+=1;goto B777155;
case 0x777160:goto L777160;
case 0x777163:c.instructions+=1;goto B777163;
case 0x777168:goto L777168;
case 0x77716d:c.instructions+=1;goto B77716d;
case 0x777180:goto L777180;
case 0x777183:c.instructions+=1;goto B777183;
case 0x777188:goto L777188;
case 0x77718a:c.instructions+=4;goto B77718a;
case 0x77718f:c.instructions+=3;goto B77718f;
case 0x777192:c.instructions+=2;goto B777192;
case 0x777193:c.instructions+=1;goto B777193;
case 0x777198:goto L777198;
case 0x77719b:c.instructions+=1;goto B77719b;
case 0x77719c:goto L77719c;
case 0x7771a1:c.instructions+=1;goto B7771a1;
case 0x7771b0:goto L7771b0;
case 0x7771b6:c.instructions+=1;goto B7771b6;
case 0x7771bb:goto L7771bb;
case 0x7771c1:c.instructions+=1;goto B7771c1;
case 0x7771c6:goto L7771c6;
case 0x7771cb:c.instructions+=1;goto B7771cb;
case 0x7771d0:goto L7771d0;
case 0x7771d3:c.instructions+=2;goto B7771d3;
case 0x7771d4:c.instructions+=1;goto B7771d4;
case 0x7771d9:goto L7771d9;
case 0x7771da:c.instructions+=1;goto B7771da;
case 0x7771db:goto L7771db;
case 0x7771dd:c.instructions+=4;goto B7771dd;
case 0x7771e2:c.instructions+=3;goto B7771e2;
case 0x7771e5:c.instructions+=2;goto B7771e5;
case 0x7771e6:c.instructions+=1;goto B7771e6;
case 0x7771eb:goto L7771eb;
case 0x7771ee:c.instructions+=1;goto B7771ee;
case 0x7771ef:goto L7771ef;
case 0x7771f1:c.instructions+=4;goto B7771f1;
case 0x7771f6:c.instructions+=3;goto B7771f6;
case 0x7771f9:c.instructions+=2;goto B7771f9;
case 0x7771fa:c.instructions+=1;goto B7771fa;
case 0x7771ff:goto L7771ff;
case 0x777202:c.instructions+=1;goto B777202;
case 0x777203:goto L777203;
case 0x777205:c.instructions+=4;goto B777205;
case 0x77720a:c.instructions+=3;goto B77720a;
case 0x77720d:c.instructions+=2;goto B77720d;
case 0x77720e:c.instructions+=1;goto B77720e;
case 0x777213:goto L777213;
case 0x777216:c.instructions+=1;goto B777216;
case 0x777217:goto L777217;
case 0x77721c:c.instructions+=1;goto B77721c;
case 0x777230:goto L777230;
case 0x777232:c.instructions+=4;goto B777232;
case 0x777237:c.instructions+=3;goto B777237;
case 0x77723a:c.instructions+=2;goto B77723a;
case 0x77723b:c.instructions+=1;goto B77723b;
case 0x777240:goto L777240;
case 0x777243:c.instructions+=1;goto B777243;
case 0x777244:goto L777244;
case 0x777246:c.instructions+=4;goto B777246;
case 0x77724b:c.instructions+=3;goto B77724b;
case 0x77724e:c.instructions+=2;goto B77724e;
case 0x77724f:c.instructions+=1;goto B77724f;
case 0x777254:goto L777254;
case 0x777257:c.instructions+=1;goto B777257;
case 0x777258:goto L777258;
case 0x77725d:c.instructions+=1;goto B77725d;
case 0x777270:goto L777270;
case 0x777272:c.instructions+=4;goto B777272;
case 0x777277:c.instructions+=3;goto B777277;
case 0x77727a:c.instructions+=2;goto B77727a;
case 0x77727b:c.instructions+=1;goto B77727b;
case 0x777280:goto L777280;
case 0x777283:c.instructions+=1;goto B777283;
case 0x777284:goto L777284;
case 0x777289:c.instructions+=1;goto B777289;
case 0x777290:goto L777290;
case 0x777293:c.instructions+=2;goto B777293;
case 0x777296:c.instructions+=1;goto B777296;
case 0x77729b:goto L77729b;
case 0x7772a0:c.instructions+=1;goto B7772a0;
case 0x7772b0:goto L7772b0;
case 0x7772b3:c.instructions+=1;goto B7772b3;
case 0x7772b8:goto L7772b8;
case 0x7772bd:c.instructions+=1;goto B7772bd;
case 0x7772d0:goto L7772d0;
case 0x7772d2:c.instructions+=4;goto B7772d2;
case 0x7772d7:c.instructions+=3;goto B7772d7;
case 0x7772da:c.instructions+=2;goto B7772da;
case 0x7772db:c.instructions+=1;goto B7772db;
case 0x7772e0:goto L7772e0;
case 0x7772e3:c.instructions+=1;goto B7772e3;
case 0x7772e4:goto L7772e4;
case 0x7772e9:c.instructions+=1;goto B7772e9;
case 0x7772f0:goto L7772f0;
case 0x7772f2:c.instructions+=4;goto B7772f2;
case 0x7772f7:c.instructions+=3;goto B7772f7;
case 0x7772fa:c.instructions+=2;goto B7772fa;
case 0x7772fb:c.instructions+=1;goto B7772fb;
case 0x777300:goto L777300;
case 0x777303:c.instructions+=1;goto B777303;
case 0x777304:goto L777304;
case 0x777309:c.instructions+=1;goto B777309;
case 0x777310:goto L777310;
case 0x777312:c.instructions+=4;goto B777312;
case 0x777317:c.instructions+=3;goto B777317;
case 0x77731a:c.instructions+=2;goto B77731a;
case 0x77731b:c.instructions+=1;goto B77731b;
case 0x777320:goto L777320;
case 0x777323:c.instructions+=1;goto B777323;
case 0x777324:goto L777324;
case 0x777329:c.instructions+=1;goto B777329;
case 0x77732e:goto L77732e;
case 0x777330:goto L777330;
case 0x777336:c.instructions+=1;goto B777336;
case 0x77733b:goto L77733b;
case 0x777341:c.instructions+=1;goto B777341;
case 0x777346:goto L777346;
case 0x77734c:c.instructions+=1;goto B77734c;
case 0x777351:goto L777351;
case 0x777356:c.instructions+=1;goto B777356;
case 0x777360:goto L777360;
case 0x777366:c.instructions+=1;goto B777366;
case 0x77736b:goto L77736b;
case 0x777370:c.instructions+=1;goto B777370;
case 0x777380:goto L777380;
case 0x777385:c.instructions+=6;goto B777385;
case 0x777387:c.instructions+=5;goto B777387;
case 0x777389:c.instructions+=4;goto B777389;
case 0x77738c:c.instructions+=3;goto B77738c;
case 0x77738f:c.instructions+=2;goto B77738f;
case 0x777390:c.instructions+=1;goto B777390;
case 0x777395:goto L777395;
case 0x777396:goto L777396;
case 0x77739b:c.instructions+=1;goto B77739b;
case 0x7773a0:goto L7773a0;
case 0x7773a5:c.instructions+=5;goto B7773a5;
case 0x7773a7:c.instructions+=4;goto B7773a7;
case 0x7773a9:c.instructions+=3;goto B7773a9;
case 0x7773ac:c.instructions+=2;goto B7773ac;
case 0x7773ad:c.instructions+=1;goto B7773ad;
case 0x7773b2:goto L7773b2;
case 0x7773b3:goto L7773b3;
case 0x7773b8:c.instructions+=6;goto B7773b8;
case 0x7773ba:c.instructions+=5;goto B7773ba;
case 0x7773bf:c.instructions+=4;goto B7773bf;
case 0x7773c2:c.instructions+=3;goto B7773c2;
case 0x7773c7:c.instructions+=2;goto B7773c7;
case 0x7773c8:c.instructions+=1;goto B7773c8;
case 0x7773cd:goto L7773cd;
case 0x7773ce:goto L7773ce;
case 0x7773d3:c.instructions+=6;goto B7773d3;
case 0x7773d5:c.instructions+=5;goto B7773d5;
case 0x7773da:c.instructions+=4;goto B7773da;
case 0x7773dd:c.instructions+=3;goto B7773dd;
case 0x7773e2:c.instructions+=2;goto B7773e2;
case 0x7773e3:c.instructions+=1;goto B7773e3;
case 0x7773e8:goto L7773e8;
case 0x7773e9:goto L7773e9;
case 0x7773ee:c.instructions+=6;goto B7773ee;
case 0x7773f0:c.instructions+=5;goto B7773f0;
case 0x7773f5:c.instructions+=4;goto B7773f5;
case 0x7773f8:c.instructions+=3;goto B7773f8;
case 0x7773fd:c.instructions+=2;goto B7773fd;
case 0x7773fe:c.instructions+=1;goto B7773fe;
case 0x777403:goto L777403;
case 0x777404:goto L777404;
case 0x777409:c.instructions+=1;goto B777409;
case 0x777410:goto L777410;
case 0x777413:c.instructions+=2;goto B777413;
case 0x777414:c.instructions+=1;goto B777414;
case 0x777419:goto L777419;
case 0x77741a:c.instructions+=1;goto B77741a;
case 0x77741b:goto L77741b;
case 0x777420:c.instructions+=1;goto B777420;
case 0x777430:goto L777430;
case 0x777433:c.instructions+=1;goto B777433;
case 0x777438:goto L777438;
case 0x77743b:c.instructions+=2;goto B77743b;
case 0x77743e:c.instructions+=1;goto B77743e;
case 0x777443:goto L777443;
case 0x777446:c.instructions+=2;goto B777446;
case 0x777449:c.instructions+=1;goto B777449;
case 0x77744e:goto L77744e;
case 0x777453:c.instructions+=1;goto B777453;
case 0x777460:goto L777460;
case 0x777463:c.instructions+=1;goto B777463;
case 0x777468:goto L777468;
case 0x77746b:c.instructions+=2;goto B77746b;
case 0x77746e:c.instructions+=1;goto B77746e;
case 0x777473:goto L777473;
case 0x777476:c.instructions+=2;goto B777476;
case 0x777479:c.instructions+=1;goto B777479;
case 0x77747e:goto L77747e;
case 0x777481:c.instructions+=2;goto B777481;
case 0x777484:c.instructions+=1;goto B777484;
case 0x777489:goto L777489;
case 0x77748c:c.instructions+=2;goto B77748c;
case 0x777492:c.instructions+=1;goto B777492;
case 0x777497:goto L777497;
case 0x77749a:c.instructions+=2;goto B77749a;
case 0x7774a0:c.instructions+=1;goto B7774a0;
case 0x7774a5:goto L7774a5;
case 0x7774aa:c.instructions+=1;goto B7774aa;
case 0x7774b0:goto L7774b0;
case 0x7774b3:c.instructions+=2;goto B7774b3;
case 0x7774b6:c.instructions+=1;goto B7774b6;
case 0x7774bb:goto L7774bb;
case 0x7774c0:c.instructions+=1;goto B7774c0;
case 0x7774d0:goto L7774d0;
case 0x7774d3:c.instructions+=1;goto B7774d3;
case 0x7774d8:goto L7774d8;
case 0x7774dd:c.instructions+=1;goto B7774dd;
case 0x7774f0:goto L7774f0;
case 0x7774f3:c.instructions+=2;goto B7774f3;
case 0x7774f6:c.instructions+=1;goto B7774f6;
case 0x7774fb:goto L7774fb;
case 0x777500:c.instructions+=1;goto B777500;
case 0x777510:goto L777510;
case 0x777513:c.instructions+=2;goto B777513;
case 0x777514:c.instructions+=1;goto B777514;
case 0x777519:goto L777519;
case 0x77751a:c.instructions+=1;goto B77751a;
case 0x77751b:goto L77751b;
case 0x777520:c.instructions+=1;goto B777520;
case 0x777530:goto L777530;
case 0x777533:c.instructions+=1;goto B777533;
case 0x777538:goto L777538;
case 0x77753d:c.instructions+=1;goto B77753d;
case 0x777550:goto L777550;
case 0x777553:c.instructions+=1;goto B777553;
case 0x777558:goto L777558;
case 0x77755d:c.instructions+=6;goto B77755d;
case 0x777562:c.instructions+=5;goto B777562;
case 0x777564:c.instructions+=4;goto B777564;
case 0x777567:c.instructions+=3;goto B777567;
case 0x77756a:c.instructions+=2;goto B77756a;
case 0x77756b:c.instructions+=1;goto B77756b;
case 0x777570:goto L777570;
case 0x777571:goto L777571;
case 0x777576:c.instructions+=1;goto B777576;
case 0x777580:goto L777580;
case 0x777586:c.instructions+=1;goto B777586;
case 0x77758b:goto L77758b;
case 0x777591:c.instructions+=1;goto B777591;
case 0x777596:goto L777596;
case 0x77759b:c.instructions+=1;goto B77759b;
case 0x7775a0:goto L7775a0;
case 0x7775a3:c.instructions+=2;goto B7775a3;
case 0x7775a9:c.instructions+=1;goto B7775a9;
case 0x7775ae:goto L7775ae;
case 0x7775b3:c.instructions+=1;goto B7775b3;
case 0x7775c0:goto L7775c0;
case 0x7775c3:c.instructions+=1;goto B7775c3;
case 0x7775c8:goto L7775c8;
case 0x7775cd:c.instructions+=1;goto B7775cd;
case 0x7775e0:goto L7775e0;
case 0x7775e3:c.instructions+=2;goto B7775e3;
case 0x7775e6:c.instructions+=1;goto B7775e6;
case 0x7775eb:goto L7775eb;
case 0x7775f0:c.instructions+=1;goto B7775f0;
case 0x777600:goto L777600;
case 0x777603:c.instructions+=2;goto B777603;
case 0x777609:c.instructions+=1;goto B777609;
case 0x77760e:goto L77760e;
case 0x777611:c.instructions+=2;goto B777611;
case 0x777617:c.instructions+=1;goto B777617;
case 0x77761c:goto L77761c;
case 0x77761f:c.instructions+=2;goto B77761f;
case 0x777625:c.instructions+=1;goto B777625;
case 0x77762a:goto L77762a;
case 0x77762d:c.instructions+=2;goto B77762d;
case 0x777633:c.instructions+=1;goto B777633;
case 0x777638:goto L777638;
case 0x77763b:c.instructions+=2;goto B77763b;
case 0x777641:c.instructions+=1;goto B777641;
case 0x777646:goto L777646;
case 0x777649:c.instructions+=2;goto B777649;
case 0x77764f:c.instructions+=1;goto B77764f;
case 0x777654:goto L777654;
case 0x777659:c.instructions+=1;goto B777659;
case 0x777660:goto L777660;
case 0x777663:c.instructions+=2;goto B777663;
case 0x777666:c.instructions+=1;goto B777666;
case 0x77766b:goto L77766b;
case 0x77766d:c.instructions+=4;goto B77766d;
case 0x777672:c.instructions+=3;goto B777672;
case 0x777675:c.instructions+=2;goto B777675;
case 0x777676:c.instructions+=1;goto B777676;
case 0x77767b:goto L77767b;
case 0x77767e:c.instructions+=1;goto B77767e;
case 0x77767f:goto L77767f;
case 0x777681:c.instructions+=4;goto B777681;
case 0x777686:c.instructions+=3;goto B777686;
case 0x777689:c.instructions+=2;goto B777689;
case 0x77768a:c.instructions+=1;goto B77768a;
case 0x77768f:goto L77768f;
case 0x777692:c.instructions+=1;goto B777692;
case 0x777693:goto L777693;
case 0x777698:c.instructions+=1;goto B777698;
case 0x7776a0:goto L7776a0;
case 0x7776a3:c.instructions+=2;goto B7776a3;
case 0x7776a6:c.instructions+=1;goto B7776a6;
case 0x7776ab:goto L7776ab;
case 0x7776b0:c.instructions+=1;goto B7776b0;
case 0x7776c0:goto L7776c0;
case 0x7776c2:c.instructions+=4;goto B7776c2;
case 0x7776c7:c.instructions+=3;goto B7776c7;
case 0x7776ca:c.instructions+=2;goto B7776ca;
case 0x7776cb:c.instructions+=1;goto B7776cb;
case 0x7776d0:goto L7776d0;
case 0x7776d3:c.instructions+=1;goto B7776d3;
case 0x7776d4:goto L7776d4;
case 0x7776d9:c.instructions+=1;goto B7776d9;
case 0x7776e0:goto L7776e0;
case 0x7776e3:c.instructions+=2;goto B7776e3;
case 0x7776e6:c.instructions+=1;goto B7776e6;
case 0x7776eb:goto L7776eb;
case 0x7776ee:c.instructions+=2;goto B7776ee;
case 0x7776f1:c.instructions+=1;goto B7776f1;
case 0x7776f6:goto L7776f6;
case 0x7776fb:c.instructions+=1;goto B7776fb;
case 0x777700:goto L777700;
case 0x777702:c.instructions+=4;goto B777702;
case 0x777707:c.instructions+=3;goto B777707;
case 0x77770a:c.instructions+=2;goto B77770a;
case 0x77770b:c.instructions+=1;goto B77770b;
case 0x777710:goto L777710;
case 0x777713:c.instructions+=1;goto B777713;
case 0x777714:goto L777714;
case 0x777716:c.instructions+=4;goto B777716;
case 0x77771b:c.instructions+=3;goto B77771b;
case 0x77771e:c.instructions+=2;goto B77771e;
case 0x77771f:c.instructions+=1;goto B77771f;
case 0x777724:goto L777724;
case 0x777727:c.instructions+=1;goto B777727;
case 0x777728:goto L777728;
case 0x77772d:c.instructions+=1;goto B77772d;
case 0x777740:goto L777740;
case 0x777743:c.instructions+=1;goto B777743;
case 0x777748:goto L777748;
case 0x77774d:c.instructions+=1;goto B77774d;
case 0x777760:goto L777760;
case 0x777762:c.instructions+=4;goto B777762;
case 0x777767:c.instructions+=3;goto B777767;
case 0x77776a:c.instructions+=2;goto B77776a;
case 0x77776b:c.instructions+=1;goto B77776b;
case 0x777770:goto L777770;
case 0x777773:c.instructions+=1;goto B777773;
case 0x777774:goto L777774;
case 0x777776:c.instructions+=4;goto B777776;
case 0x77777b:c.instructions+=3;goto B77777b;
case 0x77777e:c.instructions+=2;goto B77777e;
case 0x77777f:c.instructions+=1;goto B77777f;
case 0x777784:goto L777784;
case 0x777787:c.instructions+=1;goto B777787;
case 0x777788:goto L777788;
case 0x77778a:c.instructions+=4;goto B77778a;
case 0x77778f:c.instructions+=3;goto B77778f;
case 0x777792:c.instructions+=2;goto B777792;
case 0x777793:c.instructions+=1;goto B777793;
case 0x777798:goto L777798;
case 0x77779b:c.instructions+=1;goto B77779b;
case 0x77779c:goto L77779c;
case 0x77779e:c.instructions+=4;goto B77779e;
case 0x7777a3:c.instructions+=3;goto B7777a3;
case 0x7777a6:c.instructions+=2;goto B7777a6;
case 0x7777a7:c.instructions+=1;goto B7777a7;
case 0x7777ac:goto L7777ac;
case 0x7777af:c.instructions+=1;goto B7777af;
case 0x7777b0:goto L7777b0;
case 0x7777b2:c.instructions+=4;goto B7777b2;
case 0x7777b7:c.instructions+=3;goto B7777b7;
case 0x7777ba:c.instructions+=2;goto B7777ba;
case 0x7777bb:c.instructions+=1;goto B7777bb;
case 0x7777c0:goto L7777c0;
case 0x7777c3:c.instructions+=1;goto B7777c3;
case 0x7777c4:goto L7777c4;
case 0x7777c6:c.instructions+=4;goto B7777c6;
case 0x7777cb:c.instructions+=3;goto B7777cb;
case 0x7777ce:c.instructions+=2;goto B7777ce;
case 0x7777cf:c.instructions+=1;goto B7777cf;
case 0x7777d4:goto L7777d4;
case 0x7777d7:c.instructions+=1;goto B7777d7;
case 0x7777d8:goto L7777d8;
case 0x7777da:c.instructions+=4;goto B7777da;
case 0x7777df:c.instructions+=3;goto B7777df;
case 0x7777e2:c.instructions+=2;goto B7777e2;
case 0x7777e3:c.instructions+=1;goto B7777e3;
case 0x7777e8:goto L7777e8;
case 0x7777eb:c.instructions+=1;goto B7777eb;
case 0x7777ec:goto L7777ec;
case 0x7777ee:c.instructions+=4;goto B7777ee;
case 0x7777f3:c.instructions+=3;goto B7777f3;
case 0x7777f6:c.instructions+=2;goto B7777f6;
case 0x7777f7:c.instructions+=1;goto B7777f7;
case 0x7777fc:goto L7777fc;
case 0x7777ff:c.instructions+=1;goto B7777ff;
case 0x777800:goto L777800;
case 0x777802:c.instructions+=4;goto B777802;
case 0x777807:c.instructions+=3;goto B777807;
case 0x77780a:c.instructions+=2;goto B77780a;
case 0x77780b:c.instructions+=1;goto B77780b;
case 0x777810:goto L777810;
case 0x777813:c.instructions+=1;goto B777813;
case 0x777814:goto L777814;
case 0x777816:c.instructions+=4;goto B777816;
case 0x77781b:c.instructions+=3;goto B77781b;
case 0x77781e:c.instructions+=2;goto B77781e;
case 0x77781f:c.instructions+=1;goto B77781f;
case 0x777824:goto L777824;
case 0x777827:c.instructions+=1;goto B777827;
case 0x777828:goto L777828;
case 0x77782d:c.instructions+=1;goto B77782d;
case 0x777840:goto L777840;
case 0x777843:c.instructions+=1;goto B777843;
case 0x777848:goto L777848;
case 0x77784d:c.instructions+=6;goto B77784d;
case 0x77784f:c.instructions+=5;goto B77784f;
case 0x777851:c.instructions+=4;goto B777851;
case 0x777854:c.instructions+=3;goto B777854;
case 0x777857:c.instructions+=2;goto B777857;
case 0x777858:c.instructions+=1;goto B777858;
case 0x77785d:goto L77785d;
case 0x77785e:goto L77785e;
case 0x777863:c.instructions+=1;goto B777863;
case 0x777870:goto L777870;
case 0x777873:c.instructions+=1;goto B777873;
case 0x777878:goto L777878;
case 0x77787d:c.instructions+=1;goto B77787d;
case 0x777890:goto L777890;
case 0x777892:c.instructions+=4;goto B777892;
case 0x777897:c.instructions+=3;goto B777897;
case 0x77789a:c.instructions+=2;goto B77789a;
case 0x77789b:c.instructions+=1;goto B77789b;
case 0x7778a0:goto L7778a0;
case 0x7778a3:c.instructions+=1;goto B7778a3;
case 0x7778a4:goto L7778a4;
case 0x7778a9:c.instructions+=1;goto B7778a9;
case 0x7778b0:goto L7778b0;
case 0x7778b3:c.instructions+=1;goto B7778b3;
case 0x7778b8:goto L7778b8;
case 0x7778bd:c.instructions+=6;goto B7778bd;
case 0x7778bf:c.instructions+=5;goto B7778bf;
case 0x7778c1:c.instructions+=4;goto B7778c1;
case 0x7778c4:c.instructions+=3;goto B7778c4;
case 0x7778c7:c.instructions+=2;goto B7778c7;
case 0x7778c8:c.instructions+=1;goto B7778c8;
case 0x7778cd:goto L7778cd;
case 0x7778ce:goto L7778ce;
case 0x7778d3:c.instructions+=1;goto B7778d3;
case 0x7778e0:goto L7778e0;
case 0x7778e3:c.instructions+=1;goto B7778e3;
case 0x7778e8:goto L7778e8;
case 0x7778ed:c.instructions+=6;goto B7778ed;
case 0x7778ef:c.instructions+=5;goto B7778ef;
case 0x7778f1:c.instructions+=4;goto B7778f1;
case 0x7778f4:c.instructions+=3;goto B7778f4;
case 0x7778f7:c.instructions+=2;goto B7778f7;
case 0x7778f8:c.instructions+=1;goto B7778f8;
case 0x7778fd:goto L7778fd;
case 0x7778fe:goto L7778fe;
case 0x777903:c.instructions+=1;goto B777903;
case 0x777910:goto L777910;
case 0x777915:c.instructions+=6;goto B777915;
case 0x777917:c.instructions+=5;goto B777917;
case 0x77791c:c.instructions+=4;goto B77791c;
case 0x77791f:c.instructions+=3;goto B77791f;
case 0x777922:c.instructions+=2;goto B777922;
case 0x777923:c.instructions+=1;goto B777923;
case 0x777928:goto L777928;
case 0x777929:goto L777929;
case 0x77792e:c.instructions+=1;goto B77792e;
case 0x777940:goto L777940;
case 0x777946:c.instructions+=1;goto B777946;
case 0x77794b:goto L77794b;
case 0x777951:c.instructions+=1;goto B777951;
case 0x777956:goto L777956;
case 0x77795c:c.instructions+=1;goto B77795c;
case 0x777961:goto L777961;
case 0x777966:c.instructions+=1;goto B777966;
case 0x777970:goto L777970;
case 0x777973:c.instructions+=1;goto B777973;
case 0x777978:goto L777978;
case 0x77797d:c.instructions+=1;goto B77797d;
case 0x777990:goto L777990;
case 0x777993:c.instructions+=2;goto B777993;
case 0x777996:c.instructions+=1;goto B777996;
case 0x77799b:goto L77799b;
case 0x77799e:c.instructions+=2;goto B77799e;
case 0x7779a1:c.instructions+=1;goto B7779a1;
case 0x7779a6:goto L7779a6;
case 0x7779ab:c.instructions+=1;goto B7779ab;
case 0x7779b0:goto L7779b0;
case 0x7779b3:c.instructions+=2;goto B7779b3;
case 0x7779b6:c.instructions+=1;goto B7779b6;
case 0x7779bb:goto L7779bb;
case 0x7779c0:c.instructions+=1;goto B7779c0;
case 0x7779d0:goto L7779d0;
case 0x7779d3:c.instructions+=1;goto B7779d3;
case 0x7779d8:goto L7779d8;
case 0x7779dd:c.instructions+=1;goto B7779dd;
case 0x7779f0:goto L7779f0;
case 0x7779f3:c.instructions+=2;goto B7779f3;
case 0x7779f6:c.instructions+=1;goto B7779f6;
case 0x7779fb:goto L7779fb;
case 0x777a00:c.instructions+=1;goto B777a00;
case 0x777a10:goto L777a10;
case 0x777a13:c.instructions+=1;goto B777a13;
case 0x777a18:goto L777a18;
case 0x777a1d:c.instructions+=1;goto B777a1d;
case 0x777a30:goto L777a30;
case 0x777a33:c.instructions+=1;goto B777a33;
case 0x777a38:goto L777a38;
case 0x777a3d:c.instructions+=1;goto B777a3d;
case 0x777a50:goto L777a50;
case 0x777a53:c.instructions+=1;goto B777a53;
case 0x777a58:goto L777a58;
case 0x777a5b:c.instructions+=1;goto B777a5b;
case 0x777a60:goto L777a60;
case 0x777a63:c.instructions+=1;goto B777a63;
case 0x777a68:goto L777a68;
case 0x777a6b:c.instructions+=1;goto B777a6b;
case 0x777a70:goto L777a70;
case 0x777a75:c.instructions+=1;goto B777a75;
case 0x777a80:goto L777a80;
case 0x777a83:c.instructions+=1;goto B777a83;
case 0x777a88:goto L777a88;
case 0x777a8b:c.instructions+=1;goto B777a8b;
case 0x777a90:goto L777a90;
case 0x777a93:c.instructions+=1;goto B777a93;
case 0x777a98:goto L777a98;
case 0x777a9d:c.instructions+=1;goto B777a9d;
case 0x777ab0:goto L777ab0;
case 0x777ab2:c.instructions+=4;goto B777ab2;
case 0x777ab7:c.instructions+=3;goto B777ab7;
case 0x777aba:c.instructions+=2;goto B777aba;
case 0x777abb:c.instructions+=1;goto B777abb;
case 0x777ac0:goto L777ac0;
case 0x777ac3:c.instructions+=1;goto B777ac3;
case 0x777ac4:goto L777ac4;
case 0x777ac9:c.instructions+=1;goto B777ac9;
case 0x777ad0:goto L777ad0;
case 0x777ad6:c.instructions+=1;goto B777ad6;
case 0x777adb:goto L777adb;
case 0x777ade:c.instructions+=1;goto B777ade;
case 0x777ae3:goto L777ae3;
case 0x777ae9:c.instructions+=1;goto B777ae9;
case 0x777aee:goto L777aee;
case 0x777af4:c.instructions+=1;goto B777af4;
case 0x777af9:goto L777af9;
case 0x777afc:c.instructions+=1;goto B777afc;
case 0x777b01:goto L777b01;
case 0x777b07:c.instructions+=1;goto B777b07;
case 0x777b0c:goto L777b0c;
case 0x777b12:c.instructions+=1;goto B777b12;
case 0x777b17:goto L777b17;
case 0x777b1d:c.instructions+=1;goto B777b1d;
case 0x777b22:goto L777b22;
case 0x777b27:c.instructions+=1;goto B777b27;
case 0x777b30:goto L777b30;
case 0x777b33:c.instructions+=2;goto B777b33;
case 0x777b34:c.instructions+=1;goto B777b34;
case 0x777b39:goto L777b39;
case 0x777b3a:c.instructions+=1;goto B777b3a;
case 0x777b3b:goto L777b3b;
case 0x777b40:c.instructions+=1;goto B777b40;
case 0x777b50:goto L777b50;
case 0x777b53:c.instructions+=1;goto B777b53;
case 0x777b58:goto L777b58;
case 0x777b5b:c.instructions+=1;goto B777b5b;
case 0x777b60:goto L777b60;
case 0x777b63:c.instructions+=1;goto B777b63;
case 0x777b68:goto L777b68;
case 0x777b6d:c.instructions+=1;goto B777b6d;
case 0x777b80:goto L777b80;
case 0x777b82:c.instructions+=4;goto B777b82;
case 0x777b87:c.instructions+=3;goto B777b87;
case 0x777b8a:c.instructions+=2;goto B777b8a;
case 0x777b8b:c.instructions+=1;goto B777b8b;
case 0x777b90:goto L777b90;
case 0x777b93:c.instructions+=1;goto B777b93;
case 0x777b94:goto L777b94;
case 0x777b99:c.instructions+=1;goto B777b99;
case 0x777ba0:goto L777ba0;
case 0x777ba3:c.instructions+=2;goto B777ba3;
case 0x777ba4:c.instructions+=1;goto B777ba4;
case 0x777ba9:goto L777ba9;
case 0x777baa:c.instructions+=1;goto B777baa;
case 0x777bab:goto L777bab;
case 0x777bb0:c.instructions+=1;goto B777bb0;
case 0x777bc0:goto L777bc0;
case 0x777bc3:c.instructions+=1;goto B777bc3;
case 0x777bc8:goto L777bc8;
case 0x777bcb:c.instructions+=2;goto B777bcb;
case 0x777bce:c.instructions+=1;goto B777bce;
case 0x777bd3:goto L777bd3;
case 0x777bd8:c.instructions+=1;goto B777bd8;
case 0x777be0:goto L777be0;
case 0x777be3:c.instructions+=1;goto B777be3;
case 0x777be8:goto L777be8;
case 0x777beb:c.instructions+=2;goto B777beb;
case 0x777bee:c.instructions+=1;goto B777bee;
case 0x777bf3:goto L777bf3;
case 0x777bf6:c.instructions+=1;goto B777bf6;
case 0x777bfb:goto L777bfb;
case 0x777bfe:c.instructions+=1;goto B777bfe;
case 0x777c03:goto L777c03;
case 0x777c06:c.instructions+=2;goto B777c06;
case 0x777c07:c.instructions+=1;goto B777c07;
case 0x777c0c:goto L777c0c;
case 0x777c0d:c.instructions+=1;goto B777c0d;
case 0x777c0e:goto L777c0e;
case 0x777c13:c.instructions+=1;goto B777c13;
case 0x777c20:goto L777c20;
case 0x777c25:c.instructions+=3;goto B777c25;
case 0x777c28:c.instructions+=2;goto B777c28;
case 0x777c29:c.instructions+=1;goto B777c29;
case 0x777c2e:goto L777c2e;
case 0x777c31:c.instructions+=1;goto B777c31;
case 0x777c32:goto L777c32;
case 0x777c37:c.instructions+=1;goto B777c37;
case 0x777c40:goto L777c40;
case 0x777c42:c.instructions+=4;goto B777c42;
case 0x777c47:c.instructions+=3;goto B777c47;
case 0x777c4a:c.instructions+=2;goto B777c4a;
case 0x777c4b:c.instructions+=1;goto B777c4b;
case 0x777c50:goto L777c50;
case 0x777c53:c.instructions+=1;goto B777c53;
case 0x777c54:goto L777c54;
case 0x777c59:c.instructions+=1;goto B777c59;
case 0x777c60:goto L777c60;
case 0x777c63:c.instructions+=1;goto B777c63;
case 0x777c68:goto L777c68;
case 0x777c6b:c.instructions+=2;goto B777c6b;
case 0x777c6e:c.instructions+=1;goto B777c6e;
case 0x777c73:goto L777c73;
case 0x777c78:c.instructions+=1;goto B777c78;
case 0x777c80:goto L777c80;
case 0x777c83:c.instructions+=1;goto B777c83;
case 0x777c88:goto L777c88;
case 0x777c8b:c.instructions+=1;goto B777c8b;
case 0x777c90:goto L777c90;
case 0x777c95:c.instructions+=1;goto B777c95;
case 0x777ca0:goto L777ca0;
case 0x777ca2:c.instructions+=4;goto B777ca2;
case 0x777ca7:c.instructions+=3;goto B777ca7;
case 0x777caa:c.instructions+=2;goto B777caa;
case 0x777cab:c.instructions+=1;goto B777cab;
case 0x777cb0:goto L777cb0;
case 0x777cb3:c.instructions+=1;goto B777cb3;
case 0x777cb4:goto L777cb4;
case 0x777cb9:c.instructions+=1;goto B777cb9;
case 0x777cc0:goto L777cc0;
case 0x777cc3:c.instructions+=1;goto B777cc3;
case 0x777cc8:goto L777cc8;
case 0x777ccb:c.instructions+=2;goto B777ccb;
case 0x777cce:c.instructions+=1;goto B777cce;
case 0x777cd3:goto L777cd3;
case 0x777cd8:c.instructions+=1;goto B777cd8;
case 0x777ce0:goto L777ce0;
case 0x777ce3:c.instructions+=1;goto B777ce3;
case 0x777ce8:goto L777ce8;
case 0x777ceb:c.instructions+=2;goto B777ceb;
case 0x777cee:c.instructions+=1;goto B777cee;
case 0x777cf3:goto L777cf3;
case 0x777cf6:c.instructions+=2;goto B777cf6;
case 0x777cf9:c.instructions+=1;goto B777cf9;
case 0x777cfe:goto L777cfe;
case 0x777d01:c.instructions+=2;goto B777d01;
case 0x777d04:c.instructions+=1;goto B777d04;
case 0x777d09:goto L777d09;
case 0x777d0c:c.instructions+=2;goto B777d0c;
case 0x777d0f:c.instructions+=1;goto B777d0f;
case 0x777d14:goto L777d14;
case 0x777d17:c.instructions+=2;goto B777d17;
case 0x777d1a:c.instructions+=1;goto B777d1a;
case 0x777d1f:goto L777d1f;
case 0x777d24:c.instructions+=1;goto B777d24;
case 0x777d30:goto L777d30;
case 0x777d33:c.instructions+=1;goto B777d33;
case 0x777d38:goto L777d38;
case 0x777d3b:c.instructions+=2;goto B777d3b;
case 0x777d3e:c.instructions+=1;goto B777d3e;
case 0x777d43:goto L777d43;
case 0x777d46:c.instructions+=2;goto B777d46;
case 0x777d49:c.instructions+=1;goto B777d49;
case 0x777d4e:goto L777d4e;
case 0x777d51:c.instructions+=2;goto B777d51;
case 0x777d54:c.instructions+=1;goto B777d54;
case 0x777d59:goto L777d59;
case 0x777d5c:c.instructions+=2;goto B777d5c;
case 0x777d5f:c.instructions+=1;goto B777d5f;
case 0x777d64:goto L777d64;
case 0x777d69:c.instructions+=1;goto B777d69;
case 0x777d70:goto L777d70;
case 0x777d73:c.instructions+=1;goto B777d73;
case 0x777d78:goto L777d78;
case 0x777d7d:c.instructions+=1;goto B777d7d;
case 0x777d90:goto L777d90;
case 0x777d93:c.instructions+=1;goto B777d93;
case 0x777d98:goto L777d98;
case 0x777d9d:c.instructions+=1;goto B777d9d;
case 0x777db0:goto L777db0;
case 0x777db3:c.instructions+=1;goto B777db3;
case 0x777db8:goto L777db8;
case 0x777dbb:c.instructions+=2;goto B777dbb;
case 0x777dbe:c.instructions+=1;goto B777dbe;
case 0x777dc3:goto L777dc3;
case 0x777dc8:c.instructions+=1;goto B777dc8;
case 0x777dd0:goto L777dd0;
case 0x777dd3:c.instructions+=1;goto B777dd3;
case 0x777dd8:goto L777dd8;
case 0x777ddb:c.instructions+=2;goto B777ddb;
case 0x777dde:c.instructions+=1;goto B777dde;
case 0x777de3:goto L777de3;
case 0x777de8:c.instructions+=1;goto B777de8;
case 0x777df0:goto L777df0;
case 0x777df2:c.instructions+=4;goto B777df2;
case 0x777df7:c.instructions+=3;goto B777df7;
case 0x777dfa:c.instructions+=2;goto B777dfa;
case 0x777dfb:c.instructions+=1;goto B777dfb;
case 0x777e00:goto L777e00;
case 0x777e03:c.instructions+=1;goto B777e03;
case 0x777e04:goto L777e04;
case 0x777e09:c.instructions+=1;goto B777e09;
case 0x777e10:goto L777e10;
case 0x777e13:c.instructions+=1;goto B777e13;
case 0x777e18:goto L777e18;
case 0x777e1b:c.instructions+=2;goto B777e1b;
case 0x777e1e:c.instructions+=1;goto B777e1e;
case 0x777e23:goto L777e23;
case 0x777e26:c.instructions+=1;goto B777e26;
case 0x777e2b:goto L777e2b;
case 0x777e30:c.instructions+=1;goto B777e30;
case 0x777e40:goto L777e40;
case 0x777e42:c.instructions+=4;goto B777e42;
case 0x777e47:c.instructions+=3;goto B777e47;
case 0x777e4a:c.instructions+=2;goto B777e4a;
case 0x777e4b:c.instructions+=1;goto B777e4b;
case 0x777e50:goto L777e50;
case 0x777e53:c.instructions+=1;goto B777e53;
case 0x777e54:goto L777e54;
case 0x777e59:c.instructions+=1;goto B777e59;
case 0x777e60:goto L777e60;
case 0x777e63:c.instructions+=1;goto B777e63;
case 0x777e68:goto L777e68;
case 0x777e6b:c.instructions+=2;goto B777e6b;
case 0x777e6e:c.instructions+=1;goto B777e6e;
case 0x777e73:goto L777e73;
case 0x777e76:c.instructions+=2;goto B777e76;
case 0x777e79:c.instructions+=1;goto B777e79;
case 0x777e7e:goto L777e7e;
case 0x777e81:c.instructions+=2;goto B777e81;
case 0x777e82:c.instructions+=1;goto B777e82;
case 0x777e87:goto L777e87;
case 0x777e88:c.instructions+=1;goto B777e88;
case 0x777e89:goto L777e89;
case 0x777e8e:c.instructions+=1;goto B777e8e;
case 0x777ea0:goto L777ea0;
case 0x777ea3:c.instructions+=1;goto B777ea3;
case 0x777ea8:goto L777ea8;
case 0x777eab:c.instructions+=2;goto B777eab;
case 0x777eae:c.instructions+=1;goto B777eae;
case 0x777eb3:goto L777eb3;
case 0x777eb8:c.instructions+=1;goto B777eb8;
case 0x777ec0:goto L777ec0;
case 0x777ec3:c.instructions+=1;goto B777ec3;
case 0x777ec8:goto L777ec8;
case 0x777ecb:c.instructions+=2;goto B777ecb;
case 0x777ece:c.instructions+=1;goto B777ece;
case 0x777ed3:goto L777ed3;
case 0x777ed8:c.instructions+=1;goto B777ed8;
case 0x777ee0:goto L777ee0;
case 0x777ee2:c.instructions+=4;goto B777ee2;
case 0x777ee7:c.instructions+=3;goto B777ee7;
case 0x777eea:c.instructions+=2;goto B777eea;
case 0x777eeb:c.instructions+=1;goto B777eeb;
case 0x777ef0:goto L777ef0;
case 0x777ef3:c.instructions+=1;goto B777ef3;
case 0x777ef4:goto L777ef4;
case 0x777ef9:c.instructions+=1;goto B777ef9;
case 0x777f00:goto L777f00;
case 0x777f02:c.instructions+=4;goto B777f02;
case 0x777f07:c.instructions+=3;goto B777f07;
case 0x777f0a:c.instructions+=2;goto B777f0a;
case 0x777f0b:c.instructions+=1;goto B777f0b;
case 0x777f10:goto L777f10;
case 0x777f13:c.instructions+=1;goto B777f13;
case 0x777f14:goto L777f14;
case 0x777f19:c.instructions+=1;goto B777f19;
case 0x777f20:goto L777f20;
case 0x777f22:c.instructions+=4;goto B777f22;
case 0x777f27:c.instructions+=3;goto B777f27;
case 0x777f2a:c.instructions+=2;goto B777f2a;
case 0x777f2b:c.instructions+=1;goto B777f2b;
case 0x777f30:goto L777f30;
case 0x777f33:c.instructions+=1;goto B777f33;
case 0x777f34:goto L777f34;
case 0x777f39:c.instructions+=1;goto B777f39;
case 0x777f40:goto L777f40;
case 0x777f42:c.instructions+=4;goto B777f42;
case 0x777f47:c.instructions+=3;goto B777f47;
case 0x777f4a:c.instructions+=2;goto B777f4a;
case 0x777f4b:c.instructions+=1;goto B777f4b;
case 0x777f50:goto L777f50;
case 0x777f53:c.instructions+=1;goto B777f53;
case 0x777f54:goto L777f54;
case 0x777f59:c.instructions+=1;goto B777f59;
case 0x777f60:goto L777f60;
case 0x777f62:c.instructions+=4;goto B777f62;
case 0x777f67:c.instructions+=3;goto B777f67;
case 0x777f6a:c.instructions+=2;goto B777f6a;
case 0x777f6b:c.instructions+=1;goto B777f6b;
case 0x777f70:goto L777f70;
case 0x777f73:c.instructions+=1;goto B777f73;
case 0x777f74:goto L777f74;
case 0x777f79:c.instructions+=1;goto B777f79;
case 0x777f80:goto L777f80;
case 0x777f82:c.instructions+=4;goto B777f82;
case 0x777f87:c.instructions+=3;goto B777f87;
case 0x777f8a:c.instructions+=2;goto B777f8a;
case 0x777f8b:c.instructions+=1;goto B777f8b;
case 0x777f90:goto L777f90;
case 0x777f93:c.instructions+=1;goto B777f93;
case 0x777f94:goto L777f94;
case 0x777f99:c.instructions+=1;goto B777f99;
case 0x777fa0:goto L777fa0;
case 0x777fa2:c.instructions+=4;goto B777fa2;
case 0x777fa7:c.instructions+=3;goto B777fa7;
case 0x777faa:c.instructions+=2;goto B777faa;
case 0x777fab:c.instructions+=1;goto B777fab;
case 0x777fb0:goto L777fb0;
case 0x777fb3:c.instructions+=1;goto B777fb3;
case 0x777fb4:goto L777fb4;
case 0x777fb9:c.instructions+=1;goto B777fb9;
case 0x777fc0:goto L777fc0;
case 0x777fc2:c.instructions+=4;goto B777fc2;
case 0x777fc7:c.instructions+=3;goto B777fc7;
case 0x777fca:c.instructions+=2;goto B777fca;
case 0x777fcb:c.instructions+=1;goto B777fcb;
case 0x777fd0:goto L777fd0;
case 0x777fd3:c.instructions+=1;goto B777fd3;
case 0x777fd4:goto L777fd4;
case 0x777fd9:c.instructions+=1;goto B777fd9;
case 0x777fe0:goto L777fe0;
case 0x777fe2:c.instructions+=4;goto B777fe2;
case 0x777fe7:c.instructions+=3;goto B777fe7;
case 0x777fea:c.instructions+=2;goto B777fea;
case 0x777feb:c.instructions+=1;goto B777feb;
case 0x777ff0:goto L777ff0;
case 0x777ff3:c.instructions+=1;goto B777ff3;
case 0x777ff4:goto L777ff4;
case 0x777ff9:c.instructions+=1;goto B777ff9;
default:missing_instruction(c.pc);}
B777000:L777000:{c.instructions+=3;NFSU2_TR(0x777000);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777003:{NFSU2_TR(0x777003);
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
B777006:{NFSU2_TR(0x777006);
TAIL_STATIC(0x4957a0u,495);
}
B77700b:L77700b:{c.instructions+=2;NFSU2_TR(0x77700b);
w4(R+0,u32(0x7e24f8ull));
}
B777010:{NFSU2_TR(0x777010);
TAIL_STATIC(0x75bfd2u,75b);
}
B777020:L777020:{c.instructions+=2;NFSU2_TR(0x777020);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777023:{NFSU2_TR(0x777023);
TAIL_STATIC(0x505350u,505);
}
B777028:L777028:{c.instructions+=2;NFSU2_TR(0x777028);
w4(R+0,u32(0x7e2540ull));
}
B77702d:{NFSU2_TR(0x77702d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777040:L777040:{c.instructions+=2;NFSU2_TR(0x777040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777043:{NFSU2_TR(0x777043);
TAIL_STATIC(0x4fe140u,4fe);
}
B777048:L777048:{c.instructions+=2;NFSU2_TR(0x777048);
w4(R+0,u32(0x7e2564ull));
}
B77704d:{NFSU2_TR(0x77704d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777060:L777060:{c.instructions+=2;NFSU2_TR(0x777060);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777066:{NFSU2_TR(0x777066);
TAIL_STATIC(0x4017f0u,401);
}
B77706b:L77706b:{c.instructions+=2;NFSU2_TR(0x77706b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777071:{NFSU2_TR(0x777071);
TAIL_STATIC(0x401800u,401);
}
B777076:L777076:{c.instructions+=2;NFSU2_TR(0x777076);
w4(R+0,u32(0x7e2590ull));
}
B77707b:{NFSU2_TR(0x77707b);
TAIL_STATIC(0x75bfd2u,75b);
}
B777080:L777080:{c.instructions+=3;NFSU2_TR(0x777080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777083:{NFSU2_TR(0x777083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777084:{NFSU2_TR(0x777084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777089ull));
TAIL_STATIC(0x575630u,575);
}
B777089:L777089:{c.instructions+=2;NFSU2_TR(0x777089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77708a:{NFSU2_TR(0x77708a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77708b:L77708b:{c.instructions+=2;NFSU2_TR(0x77708b);
w4(R+0,u32(0x7e25b4ull));
}
B777090:{NFSU2_TR(0x777090);
TAIL_STATIC(0x75bfd2u,75b);
}
B7770a0:L7770a0:{c.instructions+=2;NFSU2_TR(0x7770a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7770a3:{NFSU2_TR(0x7770a3);
TAIL_STATIC(0x504950u,504);
}
B7770a8:L7770a8:{c.instructions+=3;NFSU2_TR(0x7770a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7770ab:{NFSU2_TR(0x7770ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7770ac:{NFSU2_TR(0x7770ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7770b1ull));
TAIL_STATIC(0x575630u,575);
}
B7770b1:L7770b1:{c.instructions+=2;NFSU2_TR(0x7770b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7770b2:{NFSU2_TR(0x7770b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7770b3:L7770b3:{c.instructions+=2;NFSU2_TR(0x7770b3);
w4(R+0,u32(0x7e25e0ull));
}
B7770b8:{NFSU2_TR(0x7770b8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7770c0:L7770c0:{c.instructions+=3;NFSU2_TR(0x7770c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7770c3:{NFSU2_TR(0x7770c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7770c4:{NFSU2_TR(0x7770c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7770c9ull));
TAIL_STATIC(0x505610u,505);
}
B7770c9:L7770c9:{c.instructions+=2;NFSU2_TR(0x7770c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7770ca:{NFSU2_TR(0x7770ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7770cb:L7770cb:{c.instructions+=2;NFSU2_TR(0x7770cb);
w4(R+0,u32(0x7e2604ull));
}
B7770d0:{NFSU2_TR(0x7770d0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7770e0:L7770e0:{c.instructions+=3;NFSU2_TR(0x7770e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7770e6:{NFSU2_TR(0x7770e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7770e7:{NFSU2_TR(0x7770e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7770ecull));
TAIL_STATIC(0x505610u,505);
}
B7770ec:L7770ec:{c.instructions+=2;NFSU2_TR(0x7770ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7770ed:{NFSU2_TR(0x7770ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7770ee:L7770ee:{c.instructions+=2;NFSU2_TR(0x7770ee);
w4(R+0,u32(0x7e2628ull));
}
B7770f3:{NFSU2_TR(0x7770f3);
TAIL_STATIC(0x75bfd2u,75b);
}
B777100:L777100:{c.instructions+=2;NFSU2_TR(0x777100);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777103:{NFSU2_TR(0x777103);
TAIL_STATIC(0x504950u,504);
}
B777108:L777108:{c.instructions+=2;NFSU2_TR(0x777108);
w4(R+0,u32(0x7e264cull));
}
B77710d:{NFSU2_TR(0x77710d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777120:L777120:{c.instructions+=5;NFSU2_TR(0x777120);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777122:{NFSU2_TR(0x777122);
u8 U[4];
w4(U+0,u32(0x79b1a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777127:{NFSU2_TR(0x777127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77712a:{NFSU2_TR(0x77712a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77712b:{NFSU2_TR(0x77712b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777130ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777130:L777130:{c.instructions+=2;NFSU2_TR(0x777130);
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
B777133:{NFSU2_TR(0x777133);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777134:L777134:{c.instructions+=2;NFSU2_TR(0x777134);
w4(R+0,u32(0x7e2670ull));
}
B777139:{NFSU2_TR(0x777139);
TAIL_STATIC(0x75bfd2u,75b);
}
B777140:L777140:{c.instructions+=2;NFSU2_TR(0x777140);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777143:{NFSU2_TR(0x777143);
TAIL_STATIC(0x504950u,504);
}
B777148:L777148:{c.instructions+=2;NFSU2_TR(0x777148);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77714b:{NFSU2_TR(0x77714b);
TAIL_STATIC(0x504950u,504);
}
B777150:L777150:{c.instructions+=2;NFSU2_TR(0x777150);
w4(R+0,u32(0x7e269cull));
}
B777155:{NFSU2_TR(0x777155);
TAIL_STATIC(0x75bfd2u,75b);
}
B777160:L777160:{c.instructions+=2;NFSU2_TR(0x777160);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777163:{NFSU2_TR(0x777163);
TAIL_STATIC(0x4cf650u,4cf);
}
B777168:L777168:{c.instructions+=2;NFSU2_TR(0x777168);
w4(R+0,u32(0x7e26c0ull));
}
B77716d:{NFSU2_TR(0x77716d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777180:L777180:{c.instructions+=2;NFSU2_TR(0x777180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777183:{NFSU2_TR(0x777183);
TAIL_STATIC(0x4cf650u,4cf);
}
B777188:L777188:{c.instructions+=5;NFSU2_TR(0x777188);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77718a:{NFSU2_TR(0x77718a);
u8 U[4];
w4(U+0,u32(0x79b4e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77718f:{NFSU2_TR(0x77718f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777192:{NFSU2_TR(0x777192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777193:{NFSU2_TR(0x777193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777198ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777198:L777198:{c.instructions+=2;NFSU2_TR(0x777198);
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
B77719b:{NFSU2_TR(0x77719b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77719c:L77719c:{c.instructions+=2;NFSU2_TR(0x77719c);
w4(R+0,u32(0x7e26ecull));
}
B7771a1:{NFSU2_TR(0x7771a1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7771b0:L7771b0:{c.instructions+=2;NFSU2_TR(0x7771b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffee10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7771b6:{NFSU2_TR(0x7771b6);
TAIL_STATIC(0x401800u,401);
}
B7771bb:L7771bb:{c.instructions+=2;NFSU2_TR(0x7771bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7771c1:{NFSU2_TR(0x7771c1);
TAIL_STATIC(0x401800u,401);
}
B7771c6:L7771c6:{c.instructions+=2;NFSU2_TR(0x7771c6);
w4(R+0,u32(0x7e2718ull));
}
B7771cb:{NFSU2_TR(0x7771cb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7771d0:L7771d0:{c.instructions+=3;NFSU2_TR(0x7771d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7771d3:{NFSU2_TR(0x7771d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771d4:{NFSU2_TR(0x7771d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7771d9ull));
TAIL_STATIC(0x575630u,575);
}
B7771d9:L7771d9:{c.instructions+=2;NFSU2_TR(0x7771d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7771da:{NFSU2_TR(0x7771da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7771db:L7771db:{c.instructions+=5;NFSU2_TR(0x7771db);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771dd:{NFSU2_TR(0x7771dd);
u8 U[4];
w4(U+0,u32(0x79b538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771e2:{NFSU2_TR(0x7771e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7771e5:{NFSU2_TR(0x7771e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771e6:{NFSU2_TR(0x7771e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7771ebull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7771eb:L7771eb:{c.instructions+=2;NFSU2_TR(0x7771eb);
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
B7771ee:{NFSU2_TR(0x7771ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7771ef:L7771ef:{c.instructions+=5;NFSU2_TR(0x7771ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771f1:{NFSU2_TR(0x7771f1);
u8 U[4];
w4(U+0,u32(0x79b538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771f6:{NFSU2_TR(0x7771f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7771f9:{NFSU2_TR(0x7771f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7771fa:{NFSU2_TR(0x7771fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7771ffull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7771ff:L7771ff:{c.instructions+=2;NFSU2_TR(0x7771ff);
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
B777202:{NFSU2_TR(0x777202);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777203:L777203:{c.instructions+=5;NFSU2_TR(0x777203);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777205:{NFSU2_TR(0x777205);
u8 U[4];
w4(U+0,u32(0x79b538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77720a:{NFSU2_TR(0x77720a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77720d:{NFSU2_TR(0x77720d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77720e:{NFSU2_TR(0x77720e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777213ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777213:L777213:{c.instructions+=2;NFSU2_TR(0x777213);
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
B777216:{NFSU2_TR(0x777216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777217:L777217:{c.instructions+=2;NFSU2_TR(0x777217);
w4(R+0,u32(0x7e2754ull));
}
B77721c:{NFSU2_TR(0x77721c);
TAIL_STATIC(0x75bfd2u,75b);
}
B777230:L777230:{c.instructions+=5;NFSU2_TR(0x777230);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777232:{NFSU2_TR(0x777232);
u8 U[4];
w4(U+0,u32(0x79b580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777237:{NFSU2_TR(0x777237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77723a:{NFSU2_TR(0x77723a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77723b:{NFSU2_TR(0x77723b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777240ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777240:L777240:{c.instructions+=2;NFSU2_TR(0x777240);
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
B777243:{NFSU2_TR(0x777243);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777244:L777244:{c.instructions+=5;NFSU2_TR(0x777244);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777246:{NFSU2_TR(0x777246);
u8 U[4];
w4(U+0,u32(0x79b580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77724b:{NFSU2_TR(0x77724b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77724e:{NFSU2_TR(0x77724e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77724f:{NFSU2_TR(0x77724f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777254ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777254:L777254:{c.instructions+=2;NFSU2_TR(0x777254);
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
B777257:{NFSU2_TR(0x777257);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777258:L777258:{c.instructions+=2;NFSU2_TR(0x777258);
w4(R+0,u32(0x7e2780ull));
}
B77725d:{NFSU2_TR(0x77725d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777270:L777270:{c.instructions+=5;NFSU2_TR(0x777270);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777272:{NFSU2_TR(0x777272);
u8 U[4];
w4(U+0,u32(0x79b590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777277:{NFSU2_TR(0x777277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77727a:{NFSU2_TR(0x77727a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77727b:{NFSU2_TR(0x77727b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777280ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777280:L777280:{c.instructions+=2;NFSU2_TR(0x777280);
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
B777283:{NFSU2_TR(0x777283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777284:L777284:{c.instructions+=2;NFSU2_TR(0x777284);
w4(R+0,u32(0x7e27a4ull));
}
B777289:{NFSU2_TR(0x777289);
TAIL_STATIC(0x75bfd2u,75b);
}
B777290:L777290:{c.instructions+=3;NFSU2_TR(0x777290);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777293:{NFSU2_TR(0x777293);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B777296:{NFSU2_TR(0x777296);
TAIL_STATIC(0x401800u,401);
}
B77729b:L77729b:{c.instructions+=2;NFSU2_TR(0x77729b);
w4(R+0,u32(0x7e27c8ull));
}
B7772a0:{NFSU2_TR(0x7772a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7772b0:L7772b0:{c.instructions+=2;NFSU2_TR(0x7772b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7772b3:{NFSU2_TR(0x7772b3);
TAIL_STATIC(0x527770u,527);
}
B7772b8:L7772b8:{c.instructions+=2;NFSU2_TR(0x7772b8);
w4(R+0,u32(0x7e2e50ull));
}
B7772bd:{NFSU2_TR(0x7772bd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7772d0:L7772d0:{c.instructions+=5;NFSU2_TR(0x7772d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7772d2:{NFSU2_TR(0x7772d2);
u8 U[4];
w4(U+0,u32(0x79b770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7772d7:{NFSU2_TR(0x7772d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7772da:{NFSU2_TR(0x7772da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7772db:{NFSU2_TR(0x7772db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7772e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7772e0:L7772e0:{c.instructions+=2;NFSU2_TR(0x7772e0);
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
B7772e3:{NFSU2_TR(0x7772e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7772e4:L7772e4:{c.instructions+=2;NFSU2_TR(0x7772e4);
w4(R+0,u32(0x7e27ecull));
}
B7772e9:{NFSU2_TR(0x7772e9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7772f0:L7772f0:{c.instructions+=5;NFSU2_TR(0x7772f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7772f2:{NFSU2_TR(0x7772f2);
u8 U[4];
w4(U+0,u32(0x79b794ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7772f7:{NFSU2_TR(0x7772f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7772fa:{NFSU2_TR(0x7772fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7772fb:{NFSU2_TR(0x7772fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777300ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777300:L777300:{c.instructions+=2;NFSU2_TR(0x777300);
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
B777303:{NFSU2_TR(0x777303);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777304:L777304:{c.instructions+=2;NFSU2_TR(0x777304);
w4(R+0,u32(0x7e2810ull));
}
B777309:{NFSU2_TR(0x777309);
TAIL_STATIC(0x75bfd2u,75b);
}
B777310:L777310:{c.instructions+=5;NFSU2_TR(0x777310);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777312:{NFSU2_TR(0x777312);
u8 U[4];
w4(U+0,u32(0x79b848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777317:{NFSU2_TR(0x777317);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77731a:{NFSU2_TR(0x77731a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77731b:{NFSU2_TR(0x77731b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777320ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777320:L777320:{c.instructions+=2;NFSU2_TR(0x777320);
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
B777323:{NFSU2_TR(0x777323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777324:L777324:{c.instructions+=2;NFSU2_TR(0x777324);
w4(R+0,u32(0x7e2834ull));
}
B777329:{NFSU2_TR(0x777329);
TAIL_STATIC(0x75bfd2u,75b);
}
B77732e:L77732e:{c.instructions+=1;NFSU2_TR(0x77732e);
u8 U[4];
{SPILL();c.pc=0x77732eu;V r_=user_op(c,262160,{V(0x3ull)});SPILL();wv<4>((U+0),r_);}
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
{u32 t_=u32(u8(0x0ull));TAIL_DYNAMIC(t_);}
}
B777330:L777330:{c.instructions+=2;NFSU2_TR(0x777330);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffedd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777336:{NFSU2_TR(0x777336);
TAIL_STATIC(0x4017f0u,401);
}
B77733b:L77733b:{c.instructions+=2;NFSU2_TR(0x77733b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffedc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777341:{NFSU2_TR(0x777341);
TAIL_STATIC(0x401800u,401);
}
B777346:L777346:{c.instructions+=2;NFSU2_TR(0x777346);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77734c:{NFSU2_TR(0x77734c);
TAIL_STATIC(0x50f7d0u,50f);
}
B777351:L777351:{c.instructions+=2;NFSU2_TR(0x777351);
w4(R+0,u32(0x7e2d18ull));
}
B777356:{NFSU2_TR(0x777356);
TAIL_STATIC(0x75bfd2u,75b);
}
B777360:L777360:{c.instructions+=2;NFSU2_TR(0x777360);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777366:{NFSU2_TR(0x777366);
TAIL_STATIC(0x401800u,401);
}
B77736b:L77736b:{c.instructions+=2;NFSU2_TR(0x77736b);
w4(R+0,u32(0x7e2858ull));
}
B777370:{NFSU2_TR(0x777370);
TAIL_STATIC(0x75bfd2u,75b);
}
B777380:L777380:{c.instructions+=7;NFSU2_TR(0x777380);
u8 U[4];
w4(U+0,u32(0x4fe270ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777385:{NFSU2_TR(0x777385);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777387:{NFSU2_TR(0x777387);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777389:{NFSU2_TR(0x777389);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77738c:{NFSU2_TR(0x77738c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B77738f:{NFSU2_TR(0x77738f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777390:{NFSU2_TR(0x777390);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777395ull));
TAIL_STATIC(0x75c401u,75c);
}
B777395:L777395:{c.instructions+=1;NFSU2_TR(0x777395);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777396:L777396:{c.instructions+=2;NFSU2_TR(0x777396);
w4(R+0,u32(0x7e287cull));
}
B77739b:{NFSU2_TR(0x77739b);
TAIL_STATIC(0x75bfd2u,75b);
}
B7773a0:L7773a0:{c.instructions+=6;NFSU2_TR(0x7773a0);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773a5:{NFSU2_TR(0x7773a5);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773a7:{NFSU2_TR(0x7773a7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773a9:{NFSU2_TR(0x7773a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7773ac:{NFSU2_TR(0x7773ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773ad:{NFSU2_TR(0x7773ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7773b2ull));
TAIL_STATIC(0x75c401u,75c);
}
B7773b2:L7773b2:{c.instructions+=1;NFSU2_TR(0x7773b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7773b3:L7773b3:{c.instructions+=7;NFSU2_TR(0x7773b3);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773b8:{NFSU2_TR(0x7773b8);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773ba:{NFSU2_TR(0x7773ba);
u8 U[4];
w4(U+0,u32(0x434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773bf:{NFSU2_TR(0x7773bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7773c2:{NFSU2_TR(0x7773c2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x544ull))));
}
B7773c7:{NFSU2_TR(0x7773c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773c8:{NFSU2_TR(0x7773c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7773cdull));
TAIL_STATIC(0x75c401u,75c);
}
B7773cd:L7773cd:{c.instructions+=1;NFSU2_TR(0x7773cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7773ce:L7773ce:{c.instructions+=7;NFSU2_TR(0x7773ce);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773d3:{NFSU2_TR(0x7773d3);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773d5:{NFSU2_TR(0x7773d5);
u8 U[4];
w4(U+0,u32(0x7f8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773da:{NFSU2_TR(0x7773da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7773dd:{NFSU2_TR(0x7773dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5954ull))));
}
B7773e2:{NFSU2_TR(0x7773e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773e3:{NFSU2_TR(0x7773e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7773e8ull));
TAIL_STATIC(0x75c401u,75c);
}
B7773e8:L7773e8:{c.instructions+=1;NFSU2_TR(0x7773e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7773e9:L7773e9:{c.instructions+=7;NFSU2_TR(0x7773e9);
u8 U[4];
w4(U+0,u32(0x4fe140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773ee:{NFSU2_TR(0x7773ee);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773f0:{NFSU2_TR(0x7773f0);
u8 U[4];
w4(U+0,u32(0x438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773f5:{NFSU2_TR(0x7773f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7773f8:{NFSU2_TR(0x7773f8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8130ull))));
}
B7773fd:{NFSU2_TR(0x7773fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7773fe:{NFSU2_TR(0x7773fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777403ull));
TAIL_STATIC(0x75c401u,75c);
}
B777403:L777403:{c.instructions+=1;NFSU2_TR(0x777403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777404:L777404:{c.instructions+=2;NFSU2_TR(0x777404);
w4(R+0,u32(0x7e28b8ull));
}
B777409:{NFSU2_TR(0x777409);
TAIL_STATIC(0x75bfd2u,75b);
}
B777410:L777410:{c.instructions+=3;NFSU2_TR(0x777410);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777413:{NFSU2_TR(0x777413);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777414:{NFSU2_TR(0x777414);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777419ull));
TAIL_STATIC(0x575630u,575);
}
B777419:L777419:{c.instructions+=2;NFSU2_TR(0x777419);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77741a:{NFSU2_TR(0x77741a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77741b:L77741b:{c.instructions+=2;NFSU2_TR(0x77741b);
w4(R+0,u32(0x7e28dcull));
}
B777420:{NFSU2_TR(0x777420);
TAIL_STATIC(0x75bfd2u,75b);
}
B777430:L777430:{c.instructions+=2;NFSU2_TR(0x777430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777433:{NFSU2_TR(0x777433);
TAIL_STATIC(0x51ab10u,51a);
}
B777438:L777438:{c.instructions+=3;NFSU2_TR(0x777438);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77743b:{NFSU2_TR(0x77743b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B77743e:{NFSU2_TR(0x77743e);
TAIL_STATIC(0x52c420u,52c);
}
B777443:L777443:{c.instructions+=3;NFSU2_TR(0x777443);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777446:{NFSU2_TR(0x777446);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B777449:{NFSU2_TR(0x777449);
TAIL_STATIC(0x52c420u,52c);
}
B77744e:L77744e:{c.instructions+=2;NFSU2_TR(0x77744e);
w4(R+0,u32(0x7e2910ull));
}
B777453:{NFSU2_TR(0x777453);
TAIL_STATIC(0x75bfd2u,75b);
}
B777460:L777460:{c.instructions+=2;NFSU2_TR(0x777460);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777463:{NFSU2_TR(0x777463);
TAIL_STATIC(0x505350u,505);
}
B777468:L777468:{c.instructions+=3;NFSU2_TR(0x777468);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77746b:{NFSU2_TR(0x77746b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B77746e:{NFSU2_TR(0x77746e);
TAIL_STATIC(0x52c420u,52c);
}
B777473:L777473:{c.instructions+=3;NFSU2_TR(0x777473);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777476:{NFSU2_TR(0x777476);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B777479:{NFSU2_TR(0x777479);
TAIL_STATIC(0x52c420u,52c);
}
B77747e:L77747e:{c.instructions+=3;NFSU2_TR(0x77747e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777481:{NFSU2_TR(0x777481);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B777484:{NFSU2_TR(0x777484);
TAIL_STATIC(0x52c420u,52c);
}
B777489:L777489:{c.instructions+=3;NFSU2_TR(0x777489);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77748c:{NFSU2_TR(0x77748c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B777492:{NFSU2_TR(0x777492);
TAIL_STATIC(0x4fdb20u,4fd);
}
B777497:L777497:{c.instructions+=3;NFSU2_TR(0x777497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77749a:{NFSU2_TR(0x77749a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x9cull))));
}
B7774a0:{NFSU2_TR(0x7774a0);
TAIL_STATIC(0x52c420u,52c);
}
B7774a5:L7774a5:{c.instructions+=2;NFSU2_TR(0x7774a5);
w4(R+0,u32(0x7e295cull));
}
B7774aa:{NFSU2_TR(0x7774aa);
TAIL_STATIC(0x75bfd2u,75b);
}
B7774b0:L7774b0:{c.instructions+=3;NFSU2_TR(0x7774b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7774b3:{NFSU2_TR(0x7774b3);
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
B7774b6:{NFSU2_TR(0x7774b6);
TAIL_STATIC(0x51ab10u,51a);
}
B7774bb:L7774bb:{c.instructions+=2;NFSU2_TR(0x7774bb);
w4(R+0,u32(0x7e2980ull));
}
B7774c0:{NFSU2_TR(0x7774c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7774d0:L7774d0:{c.instructions+=2;NFSU2_TR(0x7774d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7774d3:{NFSU2_TR(0x7774d3);
TAIL_STATIC(0x52af90u,52a);
}
B7774d8:L7774d8:{c.instructions+=2;NFSU2_TR(0x7774d8);
w4(R+0,u32(0x7e334cull));
}
B7774dd:{NFSU2_TR(0x7774dd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7774f0:L7774f0:{c.instructions+=3;NFSU2_TR(0x7774f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7774f3:{NFSU2_TR(0x7774f3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B7774f6:{NFSU2_TR(0x7774f6);
TAIL_STATIC(0x525ac0u,525);
}
B7774fb:L7774fb:{c.instructions+=2;NFSU2_TR(0x7774fb);
w4(R+0,u32(0x7e29a4ull));
}
B777500:{NFSU2_TR(0x777500);
TAIL_STATIC(0x75bfd2u,75b);
}
B777510:L777510:{c.instructions+=3;NFSU2_TR(0x777510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777513:{NFSU2_TR(0x777513);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777514:{NFSU2_TR(0x777514);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777519ull));
TAIL_STATIC(0x4ff1d0u,4ff);
}
B777519:L777519:{c.instructions+=2;NFSU2_TR(0x777519);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77751a:{NFSU2_TR(0x77751a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77751b:L77751b:{c.instructions+=2;NFSU2_TR(0x77751b);
w4(R+0,u32(0x7e2a14ull));
}
B777520:{NFSU2_TR(0x777520);
TAIL_STATIC(0x75bfd2u,75b);
}
B777530:L777530:{c.instructions+=2;NFSU2_TR(0x777530);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777533:{NFSU2_TR(0x777533);
TAIL_STATIC(0x5002d0u,500);
}
B777538:L777538:{c.instructions+=2;NFSU2_TR(0x777538);
w4(R+0,u32(0x7e2a38ull));
}
B77753d:{NFSU2_TR(0x77753d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777550:L777550:{c.instructions+=2;NFSU2_TR(0x777550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777553:{NFSU2_TR(0x777553);
TAIL_STATIC(0x51ab10u,51a);
}
B777558:L777558:{c.instructions+=7;NFSU2_TR(0x777558);
u8 U[4];
w4(U+0,u32(0x51ab10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77755d:{NFSU2_TR(0x77755d);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777562:{NFSU2_TR(0x777562);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777564:{NFSU2_TR(0x777564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777567:{NFSU2_TR(0x777567);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B77756a:{NFSU2_TR(0x77756a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77756b:{NFSU2_TR(0x77756b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777570ull));
TAIL_STATIC(0x75c401u,75c);
}
B777570:L777570:{c.instructions+=1;NFSU2_TR(0x777570);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777571:L777571:{c.instructions+=2;NFSU2_TR(0x777571);
w4(R+0,u32(0x7e2a64ull));
}
B777576:{NFSU2_TR(0x777576);
TAIL_STATIC(0x75bfd2u,75b);
}
B777580:L777580:{c.instructions+=2;NFSU2_TR(0x777580);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffedc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777586:{NFSU2_TR(0x777586);
TAIL_STATIC(0x401800u,401);
}
B77758b:L77758b:{c.instructions+=2;NFSU2_TR(0x77758b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6b0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777591:{NFSU2_TR(0x777591);
TAIL_STATIC(0x50f7d0u,50f);
}
B777596:L777596:{c.instructions+=2;NFSU2_TR(0x777596);
w4(R+0,u32(0x7e2ab4ull));
}
B77759b:{NFSU2_TR(0x77759b);
TAIL_STATIC(0x75bfd2u,75b);
}
B7775a0:L7775a0:{c.instructions+=3;NFSU2_TR(0x7775a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7775a3:{NFSU2_TR(0x7775a3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xd24ull))));
}
B7775a9:{NFSU2_TR(0x7775a9);
TAIL_STATIC(0x500390u,500);
}
B7775ae:L7775ae:{c.instructions+=2;NFSU2_TR(0x7775ae);
w4(R+0,u32(0x7e251cull));
}
B7775b3:{NFSU2_TR(0x7775b3);
TAIL_STATIC(0x75bfd2u,75b);
}
B7775c0:L7775c0:{c.instructions+=2;NFSU2_TR(0x7775c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B7775c3:{NFSU2_TR(0x7775c3);
TAIL_STATIC(0x4def30u,4de);
}
B7775c8:L7775c8:{c.instructions+=2;NFSU2_TR(0x7775c8);
w4(R+0,u32(0x7e3ae8ull));
}
B7775cd:{NFSU2_TR(0x7775cd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7775e0:L7775e0:{c.instructions+=3;NFSU2_TR(0x7775e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7775e3:{NFSU2_TR(0x7775e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7775e6:{NFSU2_TR(0x7775e6);
TAIL_STATIC(0x531900u,531);
}
B7775eb:L7775eb:{c.instructions+=2;NFSU2_TR(0x7775eb);
w4(R+0,u32(0x7e2b04ull));
}
B7775f0:{NFSU2_TR(0x7775f0);
TAIL_STATIC(0x75bfd2u,75b);
}
B777600:L777600:{c.instructions+=3;NFSU2_TR(0x777600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777603:{NFSU2_TR(0x777603);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdcull))));
}
B777609:{NFSU2_TR(0x777609);
TAIL_STATIC(0x52c420u,52c);
}
B77760e:L77760e:{c.instructions+=3;NFSU2_TR(0x77760e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777611:{NFSU2_TR(0x777611);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xecull))));
}
B777617:{NFSU2_TR(0x777617);
TAIL_STATIC(0x52c420u,52c);
}
B77761c:L77761c:{c.instructions+=3;NFSU2_TR(0x77761c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77761f:{NFSU2_TR(0x77761f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfcull))));
}
B777625:{NFSU2_TR(0x777625);
TAIL_STATIC(0x52c420u,52c);
}
B77762a:L77762a:{c.instructions+=3;NFSU2_TR(0x77762a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77762d:{NFSU2_TR(0x77762d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4114ull))));
}
B777633:{NFSU2_TR(0x777633);
TAIL_STATIC(0x52c420u,52c);
}
B777638:L777638:{c.instructions+=3;NFSU2_TR(0x777638);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77763b:{NFSU2_TR(0x77763b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4124ull))));
}
B777641:{NFSU2_TR(0x777641);
TAIL_STATIC(0x52c420u,52c);
}
B777646:L777646:{c.instructions+=3;NFSU2_TR(0x777646);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777649:{NFSU2_TR(0x777649);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4134ull))));
}
B77764f:{NFSU2_TR(0x77764f);
TAIL_STATIC(0x52c420u,52c);
}
B777654:L777654:{c.instructions+=2;NFSU2_TR(0x777654);
w4(R+0,u32(0x7e29f0ull));
}
B777659:{NFSU2_TR(0x777659);
TAIL_STATIC(0x75bfd2u,75b);
}
B777660:L777660:{c.instructions+=3;NFSU2_TR(0x777660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777663:{NFSU2_TR(0x777663);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B777666:{NFSU2_TR(0x777666);
TAIL_STATIC(0x5318c0u,531);
}
B77766b:L77766b:{c.instructions+=5;NFSU2_TR(0x77766b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77766d:{NFSU2_TR(0x77766d);
u8 U[4];
w4(U+0,u32(0x79bcb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777672:{NFSU2_TR(0x777672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777675:{NFSU2_TR(0x777675);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777676:{NFSU2_TR(0x777676);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77767bull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77767b:L77767b:{c.instructions+=2;NFSU2_TR(0x77767b);
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
B77767e:{NFSU2_TR(0x77767e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77767f:L77767f:{c.instructions+=5;NFSU2_TR(0x77767f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777681:{NFSU2_TR(0x777681);
u8 U[4];
w4(U+0,u32(0x79bca8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777686:{NFSU2_TR(0x777686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777689:{NFSU2_TR(0x777689);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77768a:{NFSU2_TR(0x77768a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77768full));
TAIL_STATIC(0x6d7120u,6d7);
}
B77768f:L77768f:{c.instructions+=2;NFSU2_TR(0x77768f);
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
B777692:{NFSU2_TR(0x777692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777693:L777693:{c.instructions+=2;NFSU2_TR(0x777693);
w4(R+0,u32(0x7e2b38ull));
}
B777698:{NFSU2_TR(0x777698);
TAIL_STATIC(0x75bfd2u,75b);
}
B7776a0:L7776a0:{c.instructions+=3;NFSU2_TR(0x7776a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7776a3:{NFSU2_TR(0x7776a3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7776a6:{NFSU2_TR(0x7776a6);
TAIL_STATIC(0x5318c0u,531);
}
B7776ab:L7776ab:{c.instructions+=2;NFSU2_TR(0x7776ab);
w4(R+0,u32(0x7e2b5cull));
}
B7776b0:{NFSU2_TR(0x7776b0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7776c0:L7776c0:{c.instructions+=5;NFSU2_TR(0x7776c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7776c2:{NFSU2_TR(0x7776c2);
u8 U[4];
w4(U+0,u32(0x79bd94ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7776c7:{NFSU2_TR(0x7776c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7776ca:{NFSU2_TR(0x7776ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7776cb:{NFSU2_TR(0x7776cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7776d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7776d0:L7776d0:{c.instructions+=2;NFSU2_TR(0x7776d0);
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
B7776d3:{NFSU2_TR(0x7776d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7776d4:L7776d4:{c.instructions+=2;NFSU2_TR(0x7776d4);
w4(R+0,u32(0x7e2b80ull));
}
B7776d9:{NFSU2_TR(0x7776d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7776e0:L7776e0:{c.instructions+=3;NFSU2_TR(0x7776e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7776e3:{NFSU2_TR(0x7776e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B7776e6:{NFSU2_TR(0x7776e6);
TAIL_STATIC(0x4def30u,4de);
}
B7776eb:L7776eb:{c.instructions+=3;NFSU2_TR(0x7776eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7776ee:{NFSU2_TR(0x7776ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B7776f1:{NFSU2_TR(0x7776f1);
TAIL_STATIC(0x401800u,401);
}
B7776f6:L7776f6:{c.instructions+=2;NFSU2_TR(0x7776f6);
w4(R+0,u32(0x7e2bacull));
}
B7776fb:{NFSU2_TR(0x7776fb);
TAIL_STATIC(0x75bfd2u,75b);
}
B777700:L777700:{c.instructions+=5;NFSU2_TR(0x777700);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777702:{NFSU2_TR(0x777702);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777707:{NFSU2_TR(0x777707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77770a:{NFSU2_TR(0x77770a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77770b:{NFSU2_TR(0x77770b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777710ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777710:L777710:{c.instructions+=2;NFSU2_TR(0x777710);
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
B777713:{NFSU2_TR(0x777713);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777714:L777714:{c.instructions+=5;NFSU2_TR(0x777714);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777716:{NFSU2_TR(0x777716);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77771b:{NFSU2_TR(0x77771b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77771e:{NFSU2_TR(0x77771e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77771f:{NFSU2_TR(0x77771f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777724ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777724:L777724:{c.instructions+=2;NFSU2_TR(0x777724);
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
B777727:{NFSU2_TR(0x777727);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777728:L777728:{c.instructions+=2;NFSU2_TR(0x777728);
w4(R+0,u32(0x7e2bd8ull));
}
B77772d:{NFSU2_TR(0x77772d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777740:L777740:{c.instructions+=2;NFSU2_TR(0x777740);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777743:{NFSU2_TR(0x777743);
TAIL_STATIC(0x4def30u,4de);
}
B777748:L777748:{c.instructions+=2;NFSU2_TR(0x777748);
w4(R+0,u32(0x7e2facull));
}
B77774d:{NFSU2_TR(0x77774d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777760:L777760:{c.instructions+=5;NFSU2_TR(0x777760);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777762:{NFSU2_TR(0x777762);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777767:{NFSU2_TR(0x777767);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77776a:{NFSU2_TR(0x77776a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77776b:{NFSU2_TR(0x77776b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777770ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777770:L777770:{c.instructions+=2;NFSU2_TR(0x777770);
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
B777773:{NFSU2_TR(0x777773);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777774:L777774:{c.instructions+=5;NFSU2_TR(0x777774);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777776:{NFSU2_TR(0x777776);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77777b:{NFSU2_TR(0x77777b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77777e:{NFSU2_TR(0x77777e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77777f:{NFSU2_TR(0x77777f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777784ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777784:L777784:{c.instructions+=2;NFSU2_TR(0x777784);
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
B777787:{NFSU2_TR(0x777787);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777788:L777788:{c.instructions+=5;NFSU2_TR(0x777788);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77778a:{NFSU2_TR(0x77778a);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77778f:{NFSU2_TR(0x77778f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777792:{NFSU2_TR(0x777792);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777793:{NFSU2_TR(0x777793);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777798ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777798:L777798:{c.instructions+=2;NFSU2_TR(0x777798);
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
B77779b:{NFSU2_TR(0x77779b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77779c:L77779c:{c.instructions+=5;NFSU2_TR(0x77779c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77779e:{NFSU2_TR(0x77779e);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777a3:{NFSU2_TR(0x7777a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7777a6:{NFSU2_TR(0x7777a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777a7:{NFSU2_TR(0x7777a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7777acull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7777ac:L7777ac:{c.instructions+=2;NFSU2_TR(0x7777ac);
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
B7777af:{NFSU2_TR(0x7777af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7777b0:L7777b0:{c.instructions+=5;NFSU2_TR(0x7777b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777b2:{NFSU2_TR(0x7777b2);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777b7:{NFSU2_TR(0x7777b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7777ba:{NFSU2_TR(0x7777ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777bb:{NFSU2_TR(0x7777bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7777c0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7777c0:L7777c0:{c.instructions+=2;NFSU2_TR(0x7777c0);
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
B7777c3:{NFSU2_TR(0x7777c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7777c4:L7777c4:{c.instructions+=5;NFSU2_TR(0x7777c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777c6:{NFSU2_TR(0x7777c6);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777cb:{NFSU2_TR(0x7777cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7777ce:{NFSU2_TR(0x7777ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777cf:{NFSU2_TR(0x7777cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7777d4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7777d4:L7777d4:{c.instructions+=2;NFSU2_TR(0x7777d4);
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
B7777d7:{NFSU2_TR(0x7777d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7777d8:L7777d8:{c.instructions+=5;NFSU2_TR(0x7777d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777da:{NFSU2_TR(0x7777da);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777df:{NFSU2_TR(0x7777df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7777e2:{NFSU2_TR(0x7777e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777e3:{NFSU2_TR(0x7777e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7777e8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7777e8:L7777e8:{c.instructions+=2;NFSU2_TR(0x7777e8);
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
B7777eb:{NFSU2_TR(0x7777eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7777ec:L7777ec:{c.instructions+=5;NFSU2_TR(0x7777ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777ee:{NFSU2_TR(0x7777ee);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777f3:{NFSU2_TR(0x7777f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7777f6:{NFSU2_TR(0x7777f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7777f7:{NFSU2_TR(0x7777f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7777fcull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7777fc:L7777fc:{c.instructions+=2;NFSU2_TR(0x7777fc);
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
B7777ff:{NFSU2_TR(0x7777ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777800:L777800:{c.instructions+=5;NFSU2_TR(0x777800);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777802:{NFSU2_TR(0x777802);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777807:{NFSU2_TR(0x777807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77780a:{NFSU2_TR(0x77780a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77780b:{NFSU2_TR(0x77780b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777810ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777810:L777810:{c.instructions+=2;NFSU2_TR(0x777810);
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
B777813:{NFSU2_TR(0x777813);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777814:L777814:{c.instructions+=5;NFSU2_TR(0x777814);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777816:{NFSU2_TR(0x777816);
u8 U[4];
w4(U+0,u32(0x79be70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77781b:{NFSU2_TR(0x77781b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77781e:{NFSU2_TR(0x77781e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77781f:{NFSU2_TR(0x77781f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777824ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777824:L777824:{c.instructions+=2;NFSU2_TR(0x777824);
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
B777827:{NFSU2_TR(0x777827);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777828:L777828:{c.instructions+=2;NFSU2_TR(0x777828);
w4(R+0,u32(0x7e2c44ull));
}
B77782d:{NFSU2_TR(0x77782d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777840:L777840:{c.instructions+=2;NFSU2_TR(0x777840);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777843:{NFSU2_TR(0x777843);
TAIL_STATIC(0x510d40u,510);
}
B777848:L777848:{c.instructions+=7;NFSU2_TR(0x777848);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77784d:{NFSU2_TR(0x77784d);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77784f:{NFSU2_TR(0x77784f);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777851:{NFSU2_TR(0x777851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777854:{NFSU2_TR(0x777854);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
}
B777857:{NFSU2_TR(0x777857);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777858:{NFSU2_TR(0x777858);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77785dull));
TAIL_STATIC(0x75c401u,75c);
}
B77785d:L77785d:{c.instructions+=1;NFSU2_TR(0x77785d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77785e:L77785e:{c.instructions+=2;NFSU2_TR(0x77785e);
w4(R+0,u32(0x7e3244ull));
}
B777863:{NFSU2_TR(0x777863);
TAIL_STATIC(0x75bfd2u,75b);
}
B777870:L777870:{c.instructions+=2;NFSU2_TR(0x777870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777873:{NFSU2_TR(0x777873);
TAIL_STATIC(0x5102c0u,510);
}
B777878:L777878:{c.instructions+=2;NFSU2_TR(0x777878);
w4(R+0,u32(0x7e2c68ull));
}
B77787d:{NFSU2_TR(0x77787d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777890:L777890:{c.instructions+=5;NFSU2_TR(0x777890);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777892:{NFSU2_TR(0x777892);
u8 U[4];
w4(U+0,u32(0x79bee0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777897:{NFSU2_TR(0x777897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77789a:{NFSU2_TR(0x77789a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77789b:{NFSU2_TR(0x77789b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7778a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7778a0:L7778a0:{c.instructions+=2;NFSU2_TR(0x7778a0);
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
B7778a3:{NFSU2_TR(0x7778a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7778a4:L7778a4:{c.instructions+=2;NFSU2_TR(0x7778a4);
w4(R+0,u32(0x7e2c8cull));
}
B7778a9:{NFSU2_TR(0x7778a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7778b0:L7778b0:{c.instructions+=2;NFSU2_TR(0x7778b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7778b3:{NFSU2_TR(0x7778b3);
TAIL_STATIC(0x51ab10u,51a);
}
B7778b8:L7778b8:{c.instructions+=7;NFSU2_TR(0x7778b8);
u8 U[4];
w4(U+0,u32(0x534b10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778bd:{NFSU2_TR(0x7778bd);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778bf:{NFSU2_TR(0x7778bf);
u8 U[4];
w4(U+0,u32(0x18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778c1:{NFSU2_TR(0x7778c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7778c4:{NFSU2_TR(0x7778c4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B7778c7:{NFSU2_TR(0x7778c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778c8:{NFSU2_TR(0x7778c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7778cdull));
TAIL_STATIC(0x75c401u,75c);
}
B7778cd:L7778cd:{c.instructions+=1;NFSU2_TR(0x7778cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7778ce:L7778ce:{c.instructions+=2;NFSU2_TR(0x7778ce);
w4(R+0,u32(0x7e2cb8ull));
}
B7778d3:{NFSU2_TR(0x7778d3);
TAIL_STATIC(0x75bfd2u,75b);
}
B7778e0:L7778e0:{c.instructions+=2;NFSU2_TR(0x7778e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7778e3:{NFSU2_TR(0x7778e3);
TAIL_STATIC(0x51ab10u,51a);
}
B7778e8:L7778e8:{c.instructions+=7;NFSU2_TR(0x7778e8);
u8 U[4];
w4(U+0,u32(0x535170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778ed:{NFSU2_TR(0x7778ed);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778ef:{NFSU2_TR(0x7778ef);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778f1:{NFSU2_TR(0x7778f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7778f4:{NFSU2_TR(0x7778f4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B7778f7:{NFSU2_TR(0x7778f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7778f8:{NFSU2_TR(0x7778f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7778fdull));
TAIL_STATIC(0x75c401u,75c);
}
B7778fd:L7778fd:{c.instructions+=1;NFSU2_TR(0x7778fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7778fe:L7778fe:{c.instructions+=2;NFSU2_TR(0x7778fe);
w4(R+0,u32(0x7e2ce4ull));
}
B777903:{NFSU2_TR(0x777903);
TAIL_STATIC(0x75bfd2u,75b);
}
B777910:L777910:{c.instructions+=7;NFSU2_TR(0x777910);
u8 U[4];
w4(U+0,u32(0x525ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777915:{NFSU2_TR(0x777915);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777917:{NFSU2_TR(0x777917);
u8 U[4];
w4(U+0,u32(0xab4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77791c:{NFSU2_TR(0x77791c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77791f:{NFSU2_TR(0x77791f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B777922:{NFSU2_TR(0x777922);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777923:{NFSU2_TR(0x777923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777928ull));
TAIL_STATIC(0x75c401u,75c);
}
B777928:L777928:{c.instructions+=1;NFSU2_TR(0x777928);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777929:L777929:{c.instructions+=2;NFSU2_TR(0x777929);
w4(R+0,u32(0x7e2a88ull));
}
B77792e:{NFSU2_TR(0x77792e);
TAIL_STATIC(0x75bfd2u,75b);
}
B777940:L777940:{c.instructions+=2;NFSU2_TR(0x777940);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777946:{NFSU2_TR(0x777946);
TAIL_STATIC(0x4017f0u,401);
}
B77794b:L77794b:{c.instructions+=2;NFSU2_TR(0x77794b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777951:{NFSU2_TR(0x777951);
TAIL_STATIC(0x401800u,401);
}
B777956:L777956:{c.instructions+=2;NFSU2_TR(0x777956);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffedc0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77795c:{NFSU2_TR(0x77795c);
TAIL_STATIC(0x50f7d0u,50f);
}
B777961:L777961:{c.instructions+=2;NFSU2_TR(0x777961);
w4(R+0,u32(0x7e2d4cull));
}
B777966:{NFSU2_TR(0x777966);
TAIL_STATIC(0x75bfd2u,75b);
}
B777970:L777970:{c.instructions+=2;NFSU2_TR(0x777970);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777973:{NFSU2_TR(0x777973);
TAIL_STATIC(0x4835c0u,483);
}
B777978:L777978:{c.instructions+=2;NFSU2_TR(0x777978);
w4(R+0,u32(0x7e2d70ull));
}
B77797d:{NFSU2_TR(0x77797d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777990:L777990:{c.instructions+=3;NFSU2_TR(0x777990);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777993:{NFSU2_TR(0x777993);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B777996:{NFSU2_TR(0x777996);
TAIL_STATIC(0x4358e0u,435);
}
B77799b:L77799b:{c.instructions+=3;NFSU2_TR(0x77799b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77799e:{NFSU2_TR(0x77799e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7779a1:{NFSU2_TR(0x7779a1);
TAIL_STATIC(0x4358e0u,435);
}
B7779a6:L7779a6:{c.instructions+=2;NFSU2_TR(0x7779a6);
w4(R+0,u32(0x7e2d9cull));
}
B7779ab:{NFSU2_TR(0x7779ab);
TAIL_STATIC(0x75bfd2u,75b);
}
B7779b0:L7779b0:{c.instructions+=3;NFSU2_TR(0x7779b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7779b3:{NFSU2_TR(0x7779b3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7779b6:{NFSU2_TR(0x7779b6);
TAIL_STATIC(0x4358e0u,435);
}
B7779bb:L7779bb:{c.instructions+=2;NFSU2_TR(0x7779bb);
w4(R+0,u32(0x7e2dc0ull));
}
B7779c0:{NFSU2_TR(0x7779c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7779d0:L7779d0:{c.instructions+=2;NFSU2_TR(0x7779d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7779d3:{NFSU2_TR(0x7779d3);
TAIL_STATIC(0x4cbc20u,4cb);
}
B7779d8:L7779d8:{c.instructions+=2;NFSU2_TR(0x7779d8);
w4(R+0,u32(0x7e2de4ull));
}
B7779dd:{NFSU2_TR(0x7779dd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7779f0:L7779f0:{c.instructions+=3;NFSU2_TR(0x7779f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7779f3:{NFSU2_TR(0x7779f3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B7779f6:{NFSU2_TR(0x7779f6);
TAIL_STATIC(0x4835c0u,483);
}
B7779fb:L7779fb:{c.instructions+=2;NFSU2_TR(0x7779fb);
w4(R+0,u32(0x7e2e08ull));
}
B777a00:{NFSU2_TR(0x777a00);
TAIL_STATIC(0x75bfd2u,75b);
}
B777a10:L777a10:{c.instructions+=2;NFSU2_TR(0x777a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a13:{NFSU2_TR(0x777a13);
TAIL_STATIC(0x4def30u,4de);
}
B777a18:L777a18:{c.instructions+=2;NFSU2_TR(0x777a18);
w4(R+0,u32(0x7e2e2cull));
}
B777a1d:{NFSU2_TR(0x777a1d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777a30:L777a30:{c.instructions+=2;NFSU2_TR(0x777a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a33:{NFSU2_TR(0x777a33);
TAIL_STATIC(0x4def30u,4de);
}
B777a38:L777a38:{c.instructions+=2;NFSU2_TR(0x777a38);
w4(R+0,u32(0x7e2e74ull));
}
B777a3d:{NFSU2_TR(0x777a3d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777a50:L777a50:{c.instructions+=2;NFSU2_TR(0x777a50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a53:{NFSU2_TR(0x777a53);
TAIL_STATIC(0x4def30u,4de);
}
B777a58:L777a58:{c.instructions+=2;NFSU2_TR(0x777a58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a5b:{NFSU2_TR(0x777a5b);
TAIL_STATIC(0x504950u,504);
}
B777a60:L777a60:{c.instructions+=2;NFSU2_TR(0x777a60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a63:{NFSU2_TR(0x777a63);
TAIL_STATIC(0x504950u,504);
}
B777a68:L777a68:{c.instructions+=2;NFSU2_TR(0x777a68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a6b:{NFSU2_TR(0x777a6b);
TAIL_STATIC(0x504950u,504);
}
B777a70:L777a70:{c.instructions+=2;NFSU2_TR(0x777a70);
w4(R+0,u32(0x7e2eb0ull));
}
B777a75:{NFSU2_TR(0x777a75);
TAIL_STATIC(0x75bfd2u,75b);
}
B777a80:L777a80:{c.instructions+=2;NFSU2_TR(0x777a80);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a83:{NFSU2_TR(0x777a83);
TAIL_STATIC(0x4def30u,4de);
}
B777a88:L777a88:{c.instructions+=2;NFSU2_TR(0x777a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a8b:{NFSU2_TR(0x777a8b);
TAIL_STATIC(0x504950u,504);
}
B777a90:L777a90:{c.instructions+=2;NFSU2_TR(0x777a90);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777a93:{NFSU2_TR(0x777a93);
TAIL_STATIC(0x504950u,504);
}
B777a98:L777a98:{c.instructions+=2;NFSU2_TR(0x777a98);
w4(R+0,u32(0x7e2ee4ull));
}
B777a9d:{NFSU2_TR(0x777a9d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ab0:L777ab0:{c.instructions+=5;NFSU2_TR(0x777ab0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ab2:{NFSU2_TR(0x777ab2);
u8 U[4];
w4(U+0,u32(0x79c568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ab7:{NFSU2_TR(0x777ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777aba:{NFSU2_TR(0x777aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777abb:{NFSU2_TR(0x777abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777ac0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777ac0:L777ac0:{c.instructions+=2;NFSU2_TR(0x777ac0);
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
B777ac3:{NFSU2_TR(0x777ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777ac4:L777ac4:{c.instructions+=2;NFSU2_TR(0x777ac4);
w4(R+0,u32(0x7e2f08ull));
}
B777ac9:{NFSU2_TR(0x777ac9);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ad0:L777ad0:{c.instructions+=2;NFSU2_TR(0x777ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777ad6:{NFSU2_TR(0x777ad6);
TAIL_STATIC(0x504950u,504);
}
B777adb:L777adb:{c.instructions+=2;NFSU2_TR(0x777adb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777ade:{NFSU2_TR(0x777ade);
TAIL_STATIC(0x504950u,504);
}
B777ae3:L777ae3:{c.instructions+=2;NFSU2_TR(0x777ae3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777ae9:{NFSU2_TR(0x777ae9);
TAIL_STATIC(0x504950u,504);
}
B777aee:L777aee:{c.instructions+=2;NFSU2_TR(0x777aee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777af4:{NFSU2_TR(0x777af4);
TAIL_STATIC(0x504950u,504);
}
B777af9:L777af9:{c.instructions+=2;NFSU2_TR(0x777af9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777afc:{NFSU2_TR(0x777afc);
TAIL_STATIC(0x504950u,504);
}
B777b01:L777b01:{c.instructions+=2;NFSU2_TR(0x777b01);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b07:{NFSU2_TR(0x777b07);
TAIL_STATIC(0x504950u,504);
}
B777b0c:L777b0c:{c.instructions+=2;NFSU2_TR(0x777b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b12:{NFSU2_TR(0x777b12);
TAIL_STATIC(0x504950u,504);
}
B777b17:L777b17:{c.instructions+=2;NFSU2_TR(0x777b17);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b1d:{NFSU2_TR(0x777b1d);
TAIL_STATIC(0x504950u,504);
}
B777b22:L777b22:{c.instructions+=2;NFSU2_TR(0x777b22);
w4(R+0,u32(0x7e2f64ull));
}
B777b27:{NFSU2_TR(0x777b27);
TAIL_STATIC(0x75bfd2u,75b);
}
B777b30:L777b30:{c.instructions+=3;NFSU2_TR(0x777b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777b33:{NFSU2_TR(0x777b33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777b34:{NFSU2_TR(0x777b34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777b39ull));
TAIL_STATIC(0x4fdac0u,4fd);
}
B777b39:L777b39:{c.instructions+=2;NFSU2_TR(0x777b39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b3a:{NFSU2_TR(0x777b3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777b3b:L777b3b:{c.instructions+=2;NFSU2_TR(0x777b3b);
w4(R+0,u32(0x7e2f88ull));
}
B777b40:{NFSU2_TR(0x777b40);
TAIL_STATIC(0x75bfd2u,75b);
}
B777b50:L777b50:{c.instructions+=2;NFSU2_TR(0x777b50);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b53:{NFSU2_TR(0x777b53);
TAIL_STATIC(0x504950u,504);
}
B777b58:L777b58:{c.instructions+=2;NFSU2_TR(0x777b58);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b5b:{NFSU2_TR(0x777b5b);
TAIL_STATIC(0x504950u,504);
}
B777b60:L777b60:{c.instructions+=2;NFSU2_TR(0x777b60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777b63:{NFSU2_TR(0x777b63);
TAIL_STATIC(0x504950u,504);
}
B777b68:L777b68:{c.instructions+=2;NFSU2_TR(0x777b68);
w4(R+0,u32(0x7e2fe0ull));
}
B777b6d:{NFSU2_TR(0x777b6d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777b80:L777b80:{c.instructions+=5;NFSU2_TR(0x777b80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777b82:{NFSU2_TR(0x777b82);
u8 U[4];
w4(U+0,u32(0x79c83cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777b87:{NFSU2_TR(0x777b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777b8a:{NFSU2_TR(0x777b8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777b8b:{NFSU2_TR(0x777b8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777b90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777b90:L777b90:{c.instructions+=2;NFSU2_TR(0x777b90);
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
B777b93:{NFSU2_TR(0x777b93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777b94:L777b94:{c.instructions+=2;NFSU2_TR(0x777b94);
w4(R+0,u32(0x7e3004ull));
}
B777b99:{NFSU2_TR(0x777b99);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ba0:L777ba0:{c.instructions+=3;NFSU2_TR(0x777ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777ba3:{NFSU2_TR(0x777ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ba4:{NFSU2_TR(0x777ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777ba9ull));
TAIL_STATIC(0x575630u,575);
}
B777ba9:L777ba9:{c.instructions+=2;NFSU2_TR(0x777ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777baa:{NFSU2_TR(0x777baa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777bab:L777bab:{c.instructions+=2;NFSU2_TR(0x777bab);
w4(R+0,u32(0x7e3028ull));
}
B777bb0:{NFSU2_TR(0x777bb0);
TAIL_STATIC(0x75bfd2u,75b);
}
B777bc0:L777bc0:{c.instructions+=2;NFSU2_TR(0x777bc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777bc3:{NFSU2_TR(0x777bc3);
TAIL_STATIC(0x51ab10u,51a);
}
B777bc8:L777bc8:{c.instructions+=3;NFSU2_TR(0x777bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777bcb:{NFSU2_TR(0x777bcb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x24ull))));
}
B777bce:{NFSU2_TR(0x777bce);
TAIL_STATIC(0x4fe8f0u,4fe);
}
B777bd3:L777bd3:{c.instructions+=2;NFSU2_TR(0x777bd3);
w4(R+0,u32(0x7e2ae0ull));
}
B777bd8:{NFSU2_TR(0x777bd8);
TAIL_STATIC(0x75bfd2u,75b);
}
B777be0:L777be0:{c.instructions+=2;NFSU2_TR(0x777be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777be3:{NFSU2_TR(0x777be3);
TAIL_STATIC(0x510d40u,510);
}
B777be8:L777be8:{c.instructions+=3;NFSU2_TR(0x777be8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777beb:{NFSU2_TR(0x777beb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B777bee:{NFSU2_TR(0x777bee);
TAIL_STATIC(0x4358e0u,435);
}
B777bf3:L777bf3:{c.instructions+=2;NFSU2_TR(0x777bf3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B777bf6:{NFSU2_TR(0x777bf6);
TAIL_STATIC(0x504950u,504);
}
B777bfb:L777bfb:{c.instructions+=2;NFSU2_TR(0x777bfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777bfe:{NFSU2_TR(0x777bfe);
TAIL_STATIC(0x504950u,504);
}
B777c03:L777c03:{c.instructions+=3;NFSU2_TR(0x777c03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777c06:{NFSU2_TR(0x777c06);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777c07:{NFSU2_TR(0x777c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777c0cull));
TAIL_STATIC(0x575630u,575);
}
B777c0c:L777c0c:{c.instructions+=2;NFSU2_TR(0x777c0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777c0d:{NFSU2_TR(0x777c0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777c0e:L777c0e:{c.instructions+=2;NFSU2_TR(0x777c0e);
w4(R+0,u32(0x7e306cull));
}
B777c13:{NFSU2_TR(0x777c13);
TAIL_STATIC(0x75bfd2u,75b);
}
B777c20:L777c20:{c.instructions+=4;NFSU2_TR(0x777c20);
u8 U[4];
w4(U+0,u32(0x79c938ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777c25:{NFSU2_TR(0x777c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777c28:{NFSU2_TR(0x777c28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777c29:{NFSU2_TR(0x777c29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777c2eull));
TAIL_STATIC(0x4fe2a0u,4fe);
}
B777c2e:L777c2e:{c.instructions+=2;NFSU2_TR(0x777c2e);
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
B777c31:{NFSU2_TR(0x777c31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777c32:L777c32:{c.instructions+=2;NFSU2_TR(0x777c32);
w4(R+0,u32(0x7e3090ull));
}
B777c37:{NFSU2_TR(0x777c37);
TAIL_STATIC(0x75bfd2u,75b);
}
B777c40:L777c40:{c.instructions+=5;NFSU2_TR(0x777c40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777c42:{NFSU2_TR(0x777c42);
u8 U[4];
w4(U+0,u32(0x79c958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777c47:{NFSU2_TR(0x777c47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777c4a:{NFSU2_TR(0x777c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777c4b:{NFSU2_TR(0x777c4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777c50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777c50:L777c50:{c.instructions+=2;NFSU2_TR(0x777c50);
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
B777c53:{NFSU2_TR(0x777c53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777c54:L777c54:{c.instructions+=2;NFSU2_TR(0x777c54);
w4(R+0,u32(0x7e30b4ull));
}
B777c59:{NFSU2_TR(0x777c59);
TAIL_STATIC(0x75bfd2u,75b);
}
B777c60:L777c60:{c.instructions+=2;NFSU2_TR(0x777c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777c63:{NFSU2_TR(0x777c63);
TAIL_STATIC(0x510d40u,510);
}
B777c68:L777c68:{c.instructions+=3;NFSU2_TR(0x777c68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777c6b:{NFSU2_TR(0x777c6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B777c6e:{NFSU2_TR(0x777c6e);
TAIL_STATIC(0x4cbc20u,4cb);
}
B777c73:L777c73:{c.instructions+=2;NFSU2_TR(0x777c73);
w4(R+0,u32(0x7e30e0ull));
}
B777c78:{NFSU2_TR(0x777c78);
TAIL_STATIC(0x75bfd2u,75b);
}
B777c80:L777c80:{c.instructions+=2;NFSU2_TR(0x777c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777c83:{NFSU2_TR(0x777c83);
TAIL_STATIC(0x510d40u,510);
}
B777c88:L777c88:{c.instructions+=2;NFSU2_TR(0x777c88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777c8b:{NFSU2_TR(0x777c8b);
TAIL_STATIC(0x504950u,504);
}
B777c90:L777c90:{c.instructions+=2;NFSU2_TR(0x777c90);
w4(R+0,u32(0x7e310cull));
}
B777c95:{NFSU2_TR(0x777c95);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ca0:L777ca0:{c.instructions+=5;NFSU2_TR(0x777ca0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ca2:{NFSU2_TR(0x777ca2);
u8 U[4];
w4(U+0,u32(0x79c9b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ca7:{NFSU2_TR(0x777ca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777caa:{NFSU2_TR(0x777caa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777cab:{NFSU2_TR(0x777cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777cb0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777cb0:L777cb0:{c.instructions+=2;NFSU2_TR(0x777cb0);
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
B777cb3:{NFSU2_TR(0x777cb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777cb4:L777cb4:{c.instructions+=2;NFSU2_TR(0x777cb4);
w4(R+0,u32(0x7e3130ull));
}
B777cb9:{NFSU2_TR(0x777cb9);
TAIL_STATIC(0x75bfd2u,75b);
}
B777cc0:L777cc0:{c.instructions+=2;NFSU2_TR(0x777cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777cc3:{NFSU2_TR(0x777cc3);
TAIL_STATIC(0x510d40u,510);
}
B777cc8:L777cc8:{c.instructions+=3;NFSU2_TR(0x777cc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ccb:{NFSU2_TR(0x777ccb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B777cce:{NFSU2_TR(0x777cce);
TAIL_STATIC(0x4358e0u,435);
}
B777cd3:L777cd3:{c.instructions+=2;NFSU2_TR(0x777cd3);
w4(R+0,u32(0x7e315cull));
}
B777cd8:{NFSU2_TR(0x777cd8);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ce0:L777ce0:{c.instructions+=2;NFSU2_TR(0x777ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ce3:{NFSU2_TR(0x777ce3);
TAIL_STATIC(0x510d40u,510);
}
B777ce8:L777ce8:{c.instructions+=3;NFSU2_TR(0x777ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ceb:{NFSU2_TR(0x777ceb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B777cee:{NFSU2_TR(0x777cee);
TAIL_STATIC(0x4def30u,4de);
}
B777cf3:L777cf3:{c.instructions+=3;NFSU2_TR(0x777cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777cf6:{NFSU2_TR(0x777cf6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x58ull))));
}
B777cf9:{NFSU2_TR(0x777cf9);
TAIL_STATIC(0x4def30u,4de);
}
B777cfe:L777cfe:{c.instructions+=3;NFSU2_TR(0x777cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d01:{NFSU2_TR(0x777d01);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B777d04:{NFSU2_TR(0x777d04);
TAIL_STATIC(0x4def30u,4de);
}
B777d09:L777d09:{c.instructions+=3;NFSU2_TR(0x777d09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d0c:{NFSU2_TR(0x777d0c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B777d0f:{NFSU2_TR(0x777d0f);
TAIL_STATIC(0x4def30u,4de);
}
B777d14:L777d14:{c.instructions+=3;NFSU2_TR(0x777d14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d17:{NFSU2_TR(0x777d17);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x7cull))));
}
B777d1a:{NFSU2_TR(0x777d1a);
TAIL_STATIC(0x4835c0u,483);
}
B777d1f:L777d1f:{c.instructions+=2;NFSU2_TR(0x777d1f);
w4(R+0,u32(0x7e31a8ull));
}
B777d24:{NFSU2_TR(0x777d24);
TAIL_STATIC(0x75bfd2u,75b);
}
B777d30:L777d30:{c.instructions+=2;NFSU2_TR(0x777d30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d33:{NFSU2_TR(0x777d33);
TAIL_STATIC(0x510d40u,510);
}
B777d38:L777d38:{c.instructions+=3;NFSU2_TR(0x777d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d3b:{NFSU2_TR(0x777d3b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B777d3e:{NFSU2_TR(0x777d3e);
TAIL_STATIC(0x4def30u,4de);
}
B777d43:L777d43:{c.instructions+=3;NFSU2_TR(0x777d43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d46:{NFSU2_TR(0x777d46);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x58ull))));
}
B777d49:{NFSU2_TR(0x777d49);
TAIL_STATIC(0x4def30u,4de);
}
B777d4e:L777d4e:{c.instructions+=3;NFSU2_TR(0x777d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d51:{NFSU2_TR(0x777d51);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B777d54:{NFSU2_TR(0x777d54);
TAIL_STATIC(0x4def30u,4de);
}
B777d59:L777d59:{c.instructions+=3;NFSU2_TR(0x777d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d5c:{NFSU2_TR(0x777d5c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B777d5f:{NFSU2_TR(0x777d5f);
TAIL_STATIC(0x4def30u,4de);
}
B777d64:L777d64:{c.instructions+=2;NFSU2_TR(0x777d64);
w4(R+0,u32(0x7e31ecull));
}
B777d69:{NFSU2_TR(0x777d69);
TAIL_STATIC(0x75bfd2u,75b);
}
B777d70:L777d70:{c.instructions+=2;NFSU2_TR(0x777d70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d73:{NFSU2_TR(0x777d73);
TAIL_STATIC(0x4defb0u,4de);
}
B777d78:L777d78:{c.instructions+=2;NFSU2_TR(0x777d78);
w4(R+0,u32(0x7e3b38ull));
}
B777d7d:{NFSU2_TR(0x777d7d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777d90:L777d90:{c.instructions+=2;NFSU2_TR(0x777d90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777d93:{NFSU2_TR(0x777d93);
TAIL_STATIC(0x4cbc30u,4cb);
}
B777d98:L777d98:{c.instructions+=2;NFSU2_TR(0x777d98);
w4(R+0,u32(0x7e3844ull));
}
B777d9d:{NFSU2_TR(0x777d9d);
TAIL_STATIC(0x75bfd2u,75b);
}
B777db0:L777db0:{c.instructions+=2;NFSU2_TR(0x777db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777db3:{NFSU2_TR(0x777db3);
TAIL_STATIC(0x510d40u,510);
}
B777db8:L777db8:{c.instructions+=3;NFSU2_TR(0x777db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777dbb:{NFSU2_TR(0x777dbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x50ull))));
}
B777dbe:{NFSU2_TR(0x777dbe);
TAIL_STATIC(0x52ea90u,52e);
}
B777dc3:L777dc3:{c.instructions+=2;NFSU2_TR(0x777dc3);
w4(R+0,u32(0x7e3218ull));
}
B777dc8:{NFSU2_TR(0x777dc8);
TAIL_STATIC(0x75bfd2u,75b);
}
B777dd0:L777dd0:{c.instructions+=2;NFSU2_TR(0x777dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777dd3:{NFSU2_TR(0x777dd3);
TAIL_STATIC(0x510d40u,510);
}
B777dd8:L777dd8:{c.instructions+=3;NFSU2_TR(0x777dd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ddb:{NFSU2_TR(0x777ddb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B777dde:{NFSU2_TR(0x777dde);
TAIL_STATIC(0x579dc0u,579);
}
B777de3:L777de3:{c.instructions+=2;NFSU2_TR(0x777de3);
w4(R+0,u32(0x7e3270ull));
}
B777de8:{NFSU2_TR(0x777de8);
TAIL_STATIC(0x75bfd2u,75b);
}
B777df0:L777df0:{c.instructions+=5;NFSU2_TR(0x777df0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777df2:{NFSU2_TR(0x777df2);
u8 U[4];
w4(U+0,u32(0x79cb54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777df7:{NFSU2_TR(0x777df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777dfa:{NFSU2_TR(0x777dfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777dfb:{NFSU2_TR(0x777dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777e00ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777e00:L777e00:{c.instructions+=2;NFSU2_TR(0x777e00);
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
B777e03:{NFSU2_TR(0x777e03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777e04:L777e04:{c.instructions+=2;NFSU2_TR(0x777e04);
w4(R+0,u32(0x7e3294ull));
}
B777e09:{NFSU2_TR(0x777e09);
TAIL_STATIC(0x75bfd2u,75b);
}
B777e10:L777e10:{c.instructions+=2;NFSU2_TR(0x777e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777e13:{NFSU2_TR(0x777e13);
TAIL_STATIC(0x510d40u,510);
}
B777e18:L777e18:{c.instructions+=3;NFSU2_TR(0x777e18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777e1b:{NFSU2_TR(0x777e1b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B777e1e:{NFSU2_TR(0x777e1e);
TAIL_STATIC(0x4cbba0u,4cb);
}
B777e23:L777e23:{c.instructions+=2;NFSU2_TR(0x777e23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777e26:{NFSU2_TR(0x777e26);
TAIL_STATIC(0x504950u,504);
}
B777e2b:L777e2b:{c.instructions+=2;NFSU2_TR(0x777e2b);
w4(R+0,u32(0x7e32c8ull));
}
B777e30:{NFSU2_TR(0x777e30);
TAIL_STATIC(0x75bfd2u,75b);
}
B777e40:L777e40:{c.instructions+=5;NFSU2_TR(0x777e40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777e42:{NFSU2_TR(0x777e42);
u8 U[4];
w4(U+0,u32(0x79cb9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777e47:{NFSU2_TR(0x777e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777e4a:{NFSU2_TR(0x777e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777e4b:{NFSU2_TR(0x777e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777e50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777e50:L777e50:{c.instructions+=2;NFSU2_TR(0x777e50);
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
B777e53:{NFSU2_TR(0x777e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777e54:L777e54:{c.instructions+=2;NFSU2_TR(0x777e54);
w4(R+0,u32(0x7e32ecull));
}
B777e59:{NFSU2_TR(0x777e59);
TAIL_STATIC(0x75bfd2u,75b);
}
B777e60:L777e60:{c.instructions+=2;NFSU2_TR(0x777e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777e63:{NFSU2_TR(0x777e63);
TAIL_STATIC(0x51ab10u,51a);
}
B777e68:L777e68:{c.instructions+=3;NFSU2_TR(0x777e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777e6b:{NFSU2_TR(0x777e6b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B777e6e:{NFSU2_TR(0x777e6e);
TAIL_STATIC(0x52c420u,52c);
}
B777e73:L777e73:{c.instructions+=3;NFSU2_TR(0x777e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777e76:{NFSU2_TR(0x777e76);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x44ull))));
}
B777e79:{NFSU2_TR(0x777e79);
TAIL_STATIC(0x52c420u,52c);
}
B777e7e:L777e7e:{c.instructions+=3;NFSU2_TR(0x777e7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777e81:{NFSU2_TR(0x777e81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777e82:{NFSU2_TR(0x777e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777e87ull));
TAIL_STATIC(0x52b9c0u,52b);
}
B777e87:L777e87:{c.instructions+=2;NFSU2_TR(0x777e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B777e88:{NFSU2_TR(0x777e88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777e89:L777e89:{c.instructions+=2;NFSU2_TR(0x777e89);
w4(R+0,u32(0x7e3328ull));
}
B777e8e:{NFSU2_TR(0x777e8e);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ea0:L777ea0:{c.instructions+=2;NFSU2_TR(0x777ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ea3:{NFSU2_TR(0x777ea3);
TAIL_STATIC(0x52af90u,52a);
}
B777ea8:L777ea8:{c.instructions+=3;NFSU2_TR(0x777ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777eab:{NFSU2_TR(0x777eab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x5cull))));
}
B777eae:{NFSU2_TR(0x777eae);
TAIL_STATIC(0x52c420u,52c);
}
B777eb3:L777eb3:{c.instructions+=2;NFSU2_TR(0x777eb3);
w4(R+0,u32(0x7e3378ull));
}
B777eb8:{NFSU2_TR(0x777eb8);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ec0:L777ec0:{c.instructions+=2;NFSU2_TR(0x777ec0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ec3:{NFSU2_TR(0x777ec3);
TAIL_STATIC(0x52af90u,52a);
}
B777ec8:L777ec8:{c.instructions+=3;NFSU2_TR(0x777ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B777ecb:{NFSU2_TR(0x777ecb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x64ull))));
}
B777ece:{NFSU2_TR(0x777ece);
TAIL_STATIC(0x50d390u,50d);
}
B777ed3:L777ed3:{c.instructions+=2;NFSU2_TR(0x777ed3);
w4(R+0,u32(0x7e33a4ull));
}
B777ed8:{NFSU2_TR(0x777ed8);
TAIL_STATIC(0x75bfd2u,75b);
}
B777ee0:L777ee0:{c.instructions+=5;NFSU2_TR(0x777ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ee2:{NFSU2_TR(0x777ee2);
u8 U[4];
w4(U+0,u32(0x79cbacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777ee7:{NFSU2_TR(0x777ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777eea:{NFSU2_TR(0x777eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777eeb:{NFSU2_TR(0x777eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777ef0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777ef0:L777ef0:{c.instructions+=2;NFSU2_TR(0x777ef0);
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
B777ef3:{NFSU2_TR(0x777ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777ef4:L777ef4:{c.instructions+=2;NFSU2_TR(0x777ef4);
w4(R+0,u32(0x7e33c8ull));
}
B777ef9:{NFSU2_TR(0x777ef9);
TAIL_STATIC(0x75bfd2u,75b);
}
B777f00:L777f00:{c.instructions+=5;NFSU2_TR(0x777f00);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f02:{NFSU2_TR(0x777f02);
u8 U[4];
w4(U+0,u32(0x79cbc4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f07:{NFSU2_TR(0x777f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777f0a:{NFSU2_TR(0x777f0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f0b:{NFSU2_TR(0x777f0b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777f10ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777f10:L777f10:{c.instructions+=2;NFSU2_TR(0x777f10);
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
B777f13:{NFSU2_TR(0x777f13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777f14:L777f14:{c.instructions+=2;NFSU2_TR(0x777f14);
w4(R+0,u32(0x7e33ecull));
}
B777f19:{NFSU2_TR(0x777f19);
TAIL_STATIC(0x75bfd2u,75b);
}
B777f20:L777f20:{c.instructions+=5;NFSU2_TR(0x777f20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f22:{NFSU2_TR(0x777f22);
u8 U[4];
w4(U+0,u32(0x79cbd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f27:{NFSU2_TR(0x777f27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777f2a:{NFSU2_TR(0x777f2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f2b:{NFSU2_TR(0x777f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777f30ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777f30:L777f30:{c.instructions+=2;NFSU2_TR(0x777f30);
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
B777f33:{NFSU2_TR(0x777f33);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777f34:L777f34:{c.instructions+=2;NFSU2_TR(0x777f34);
w4(R+0,u32(0x7e3410ull));
}
B777f39:{NFSU2_TR(0x777f39);
TAIL_STATIC(0x75bfd2u,75b);
}
B777f40:L777f40:{c.instructions+=5;NFSU2_TR(0x777f40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f42:{NFSU2_TR(0x777f42);
u8 U[4];
w4(U+0,u32(0x79cbe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f47:{NFSU2_TR(0x777f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777f4a:{NFSU2_TR(0x777f4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f4b:{NFSU2_TR(0x777f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777f50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777f50:L777f50:{c.instructions+=2;NFSU2_TR(0x777f50);
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
B777f53:{NFSU2_TR(0x777f53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777f54:L777f54:{c.instructions+=2;NFSU2_TR(0x777f54);
w4(R+0,u32(0x7e3434ull));
}
B777f59:{NFSU2_TR(0x777f59);
TAIL_STATIC(0x75bfd2u,75b);
}
B777f60:L777f60:{c.instructions+=5;NFSU2_TR(0x777f60);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f62:{NFSU2_TR(0x777f62);
u8 U[4];
w4(U+0,u32(0x79cbf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f67:{NFSU2_TR(0x777f67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777f6a:{NFSU2_TR(0x777f6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f6b:{NFSU2_TR(0x777f6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777f70ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777f70:L777f70:{c.instructions+=2;NFSU2_TR(0x777f70);
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
B777f73:{NFSU2_TR(0x777f73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777f74:L777f74:{c.instructions+=2;NFSU2_TR(0x777f74);
w4(R+0,u32(0x7e3458ull));
}
B777f79:{NFSU2_TR(0x777f79);
TAIL_STATIC(0x75bfd2u,75b);
}
B777f80:L777f80:{c.instructions+=5;NFSU2_TR(0x777f80);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f82:{NFSU2_TR(0x777f82);
u8 U[4];
w4(U+0,u32(0x79cc0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f87:{NFSU2_TR(0x777f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777f8a:{NFSU2_TR(0x777f8a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777f8b:{NFSU2_TR(0x777f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777f90ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777f90:L777f90:{c.instructions+=2;NFSU2_TR(0x777f90);
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
B777f93:{NFSU2_TR(0x777f93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777f94:L777f94:{c.instructions+=2;NFSU2_TR(0x777f94);
w4(R+0,u32(0x7e347cull));
}
B777f99:{NFSU2_TR(0x777f99);
TAIL_STATIC(0x75bfd2u,75b);
}
B777fa0:L777fa0:{c.instructions+=5;NFSU2_TR(0x777fa0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fa2:{NFSU2_TR(0x777fa2);
u8 U[4];
w4(U+0,u32(0x79cc20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fa7:{NFSU2_TR(0x777fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777faa:{NFSU2_TR(0x777faa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fab:{NFSU2_TR(0x777fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777fb0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777fb0:L777fb0:{c.instructions+=2;NFSU2_TR(0x777fb0);
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
B777fb3:{NFSU2_TR(0x777fb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777fb4:L777fb4:{c.instructions+=2;NFSU2_TR(0x777fb4);
w4(R+0,u32(0x7e34a0ull));
}
B777fb9:{NFSU2_TR(0x777fb9);
TAIL_STATIC(0x75bfd2u,75b);
}
B777fc0:L777fc0:{c.instructions+=5;NFSU2_TR(0x777fc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fc2:{NFSU2_TR(0x777fc2);
u8 U[4];
w4(U+0,u32(0x79cc50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fc7:{NFSU2_TR(0x777fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777fca:{NFSU2_TR(0x777fca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fcb:{NFSU2_TR(0x777fcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777fd0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777fd0:L777fd0:{c.instructions+=2;NFSU2_TR(0x777fd0);
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
B777fd3:{NFSU2_TR(0x777fd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777fd4:L777fd4:{c.instructions+=2;NFSU2_TR(0x777fd4);
w4(R+0,u32(0x7e34c4ull));
}
B777fd9:{NFSU2_TR(0x777fd9);
TAIL_STATIC(0x75bfd2u,75b);
}
B777fe0:L777fe0:{c.instructions+=5;NFSU2_TR(0x777fe0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fe2:{NFSU2_TR(0x777fe2);
u8 U[4];
w4(U+0,u32(0x79cc60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777fe7:{NFSU2_TR(0x777fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B777fea:{NFSU2_TR(0x777fea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B777feb:{NFSU2_TR(0x777feb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x777ff0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B777ff0:L777ff0:{c.instructions+=2;NFSU2_TR(0x777ff0);
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
B777ff3:{NFSU2_TR(0x777ff3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B777ff4:L777ff4:{c.instructions+=2;NFSU2_TR(0x777ff4);
w4(R+0,u32(0x7e34e8ull));
}
B777ff9:{NFSU2_TR(0x777ff9);
TAIL_STATIC(0x75bfd2u,75b);
}
XIT:NFSU2_TR_EXIT(0x777,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
