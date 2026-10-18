#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_403(u8* __restrict R,Cpu& c);
u32 body_404(u8* __restrict R,Cpu& c);
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_409(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_40d(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_41b(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_423(u8* __restrict R,Cpu& c);
u32 body_425(u8* __restrict R,Cpu& c);
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_432(u8* __restrict R,Cpu& c);
u32 body_434(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_437(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_479(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_760(u8* __restrict R,Cpu& c);
u32 body_763(u8* __restrict R,Cpu& c);
u32 body_770(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x771,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x771,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_771(u8* __restrict R,Cpu& c);
u32 page_771(Cpu& c){return body_771(c.regs.data(),c);}
__attribute__((noinline)) u32 body_771(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x771000:goto L771000;
case 0x771003:c.instructions+=3;goto B771003;
case 0x771008:c.instructions+=2;goto B771008;
case 0x771009:c.instructions+=1;goto B771009;
case 0x77100e:goto L77100e;
case 0x771011:c.instructions+=1;goto B771011;
case 0x771013:goto L771013;
case 0x77101a:goto L77101a;
case 0x77101b:c.instructions+=2;goto B77101b;
case 0x771020:c.instructions+=1;goto B771020;
case 0x771026:goto L771026;
case 0x771027:c.instructions+=4;goto B771027;
case 0x771028:c.instructions+=3;goto B771028;
case 0x771029:c.instructions+=2;goto B771029;
case 0x77102a:c.instructions+=1;goto B77102a;
case 0x77102b:goto L77102b;
case 0x77102c:c.instructions+=5;goto B77102c;
case 0x77102e:c.instructions+=4;goto B77102e;
case 0x771032:c.instructions+=3;goto B771032;
case 0x771033:c.instructions+=2;goto B771033;
case 0x771038:c.instructions+=1;goto B771038;
case 0x77103a:goto L77103a;
case 0x77103d:c.instructions+=5;goto B77103d;
case 0x77103e:c.instructions+=4;goto B77103e;
case 0x771041:c.instructions+=3;goto B771041;
case 0x771046:c.instructions+=2;goto B771046;
case 0x771047:c.instructions+=1;goto B771047;
case 0x77104c:goto L77104c;
case 0x77104f:c.instructions+=1;goto B77104f;
case 0x771051:goto L771051;
case 0x771058:goto L771058;
case 0x771059:c.instructions+=3;goto B771059;
case 0x77105e:c.instructions+=2;goto B77105e;
case 0x771060:c.instructions+=1;goto B771060;
case 0x771065:goto L771065;
case 0x771068:c.instructions+=3;goto B771068;
case 0x771069:c.instructions+=2;goto B771069;
case 0x77106a:c.instructions+=1;goto B77106a;
case 0x77106f:goto L77106f;
case 0x771070:c.instructions+=6;goto B771070;
case 0x771072:c.instructions+=5;goto B771072;
case 0x771075:c.instructions+=4;goto B771075;
case 0x77107a:c.instructions+=3;goto B77107a;
case 0x771080:c.instructions+=2;goto B771080;
case 0x771081:c.instructions+=1;goto B771081;
case 0x771082:goto L771082;
case 0x771083:c.instructions+=6;goto B771083;
case 0x771085:c.instructions+=5;goto B771085;
case 0x771088:c.instructions+=4;goto B771088;
case 0x771089:c.instructions+=3;goto B771089;
case 0x77108c:c.instructions+=2;goto B77108c;
case 0x77108f:c.instructions+=1;goto B77108f;
case 0x771094:goto L771094;
case 0x771097:c.instructions+=2;goto B771097;
case 0x771098:c.instructions+=1;goto B771098;
case 0x771099:goto L771099;
case 0x77109a:c.instructions+=6;goto B77109a;
case 0x77109c:c.instructions+=5;goto B77109c;
case 0x77109f:c.instructions+=4;goto B77109f;
case 0x7710a0:c.instructions+=3;goto B7710a0;
case 0x7710a3:c.instructions+=2;goto B7710a3;
case 0x7710a5:c.instructions+=1;goto B7710a5;
case 0x7710aa:goto L7710aa;
case 0x7710ad:c.instructions+=2;goto B7710ad;
case 0x7710ae:c.instructions+=1;goto B7710ae;
case 0x7710af:goto L7710af;
case 0x7710b0:c.instructions+=6;goto B7710b0;
case 0x7710b2:c.instructions+=5;goto B7710b2;
case 0x7710b5:c.instructions+=4;goto B7710b5;
case 0x7710b6:c.instructions+=3;goto B7710b6;
case 0x7710b9:c.instructions+=2;goto B7710b9;
case 0x7710bc:c.instructions+=1;goto B7710bc;
case 0x7710c1:goto L7710c1;
case 0x7710c4:c.instructions+=2;goto B7710c4;
case 0x7710c5:c.instructions+=1;goto B7710c5;
case 0x7710c6:goto L7710c6;
case 0x7710c7:c.instructions+=6;goto B7710c7;
case 0x7710c9:c.instructions+=5;goto B7710c9;
case 0x7710cc:c.instructions+=4;goto B7710cc;
case 0x7710cd:c.instructions+=3;goto B7710cd;
case 0x7710d0:c.instructions+=2;goto B7710d0;
case 0x7710d2:c.instructions+=1;goto B7710d2;
case 0x7710d7:goto L7710d7;
case 0x7710da:c.instructions+=2;goto B7710da;
case 0x7710db:c.instructions+=1;goto B7710db;
case 0x77121c:goto L77121c;
case 0x77121f:c.instructions+=7;goto B77121f;
case 0x771221:c.instructions+=6;goto B771221;
case 0x771223:c.instructions+=5;goto B771223;
case 0x771225:c.instructions+=4;goto B771225;
case 0x77122a:c.instructions+=3;goto B77122a;
case 0x77122d:c.instructions+=2;goto B77122d;
case 0x77122f:c.instructions+=1;goto B77122f;
case 0x771230:goto L771230;
case 0x771233:c.instructions+=3;goto B771233;
case 0x771235:c.instructions+=2;goto B771235;
case 0x771239:c.instructions+=1;goto B771239;
case 0x77123e:goto L77123e;
case 0x771241:goto L771241;
case 0x771243:c.instructions+=2;goto B771243;
case 0x771248:c.instructions+=1;goto B771248;
case 0x77124d:goto L77124d;
case 0x77124f:c.instructions+=3;goto B77124f;
case 0x771252:c.instructions+=2;goto B771252;
case 0x771254:c.instructions+=1;goto B771254;
case 0x771259:goto L771259;
case 0x77125a:c.instructions+=1;goto B77125a;
case 0x77125d:goto L77125d;
case 0x771260:c.instructions+=2;goto B771260;
case 0x771266:c.instructions+=1;goto B771266;
case 0x771268:goto L771268;
case 0x77126d:c.instructions+=3;goto B77126d;
case 0x771270:c.instructions+=2;goto B771270;
case 0x771272:c.instructions+=1;goto B771272;
case 0x771274:goto L771274;
case 0x771278:c.instructions+=1;goto B771278;
case 0x77127a:goto L77127a;
case 0x77127b:c.instructions+=2;goto B77127b;
case 0x77127c:c.instructions+=1;goto B77127c;
case 0x771281:goto L771281;
case 0x771282:c.instructions+=6;goto B771282;
case 0x771283:c.instructions+=5;goto B771283;
case 0x77128a:c.instructions+=4;goto B77128a;
case 0x77128f:c.instructions+=3;goto B77128f;
case 0x771292:c.instructions+=2;goto B771292;
case 0x771296:c.instructions+=1;goto B771296;
case 0x771298:goto L771298;
case 0x77129c:c.instructions+=1;goto B77129c;
case 0x77129e:goto L77129e;
case 0x77129f:c.instructions+=1;goto B77129f;
case 0x7712a4:goto L7712a4;
case 0x7712a5:c.instructions+=1;goto B7712a5;
case 0x7712a8:goto L7712a8;
case 0x7712ac:c.instructions+=1;goto B7712ac;
case 0x7712b1:goto L7712b1;
case 0x7712b2:c.instructions+=1;goto B7712b2;
case 0x7712b4:goto L7712b4;
case 0x7712b7:goto L7712b7;
case 0x7712bc:c.instructions+=3;goto B7712bc;
case 0x7712bf:c.instructions+=2;goto B7712bf;
case 0x7712c0:c.instructions+=1;goto B7712c0;
case 0x7712c5:goto L7712c5;
case 0x7712c6:c.instructions+=2;goto B7712c6;
case 0x7712c7:c.instructions+=1;goto B7712c7;
case 0x7712c8:goto L7712c8;
case 0x7712cc:c.instructions+=1;goto B7712cc;
case 0x7712d1:goto L7712d1;
case 0x7712d4:c.instructions+=1;goto B7712d4;
case 0x7712d9:goto L7712d9;
case 0x7712da:goto L7712da;
case 0x7712dc:c.instructions+=1;goto B7712dc;
case 0x7712e1:goto L7712e1;
case 0x7712e2:c.instructions+=1;goto B7712e2;
case 0x7712f0:goto L7712f0;
case 0x7712f3:c.instructions+=1;goto B7712f3;
case 0x7712f8:goto L7712f8;
case 0x7712fb:c.instructions+=2;goto B7712fb;
case 0x7712fe:c.instructions+=1;goto B7712fe;
case 0x771303:goto L771303;
case 0x771308:c.instructions+=1;goto B771308;
case 0x771310:goto L771310;
case 0x771316:c.instructions+=1;goto B771316;
case 0x77131b:goto L77131b;
case 0x771320:c.instructions+=1;goto B771320;
case 0x771330:goto L771330;
case 0x771333:c.instructions+=2;goto B771333;
case 0x771336:c.instructions+=1;goto B771336;
case 0x77133b:goto L77133b;
case 0x771340:c.instructions+=1;goto B771340;
case 0x771350:goto L771350;
case 0x771353:c.instructions+=2;goto B771353;
case 0x771356:c.instructions+=1;goto B771356;
case 0x77135b:goto L77135b;
case 0x77135d:c.instructions+=4;goto B77135d;
case 0x771362:c.instructions+=3;goto B771362;
case 0x771365:c.instructions+=2;goto B771365;
case 0x771366:c.instructions+=1;goto B771366;
case 0x77136b:goto L77136b;
case 0x77136e:c.instructions+=1;goto B77136e;
case 0x77136f:goto L77136f;
case 0x771374:c.instructions+=1;goto B771374;
case 0x771380:goto L771380;
case 0x771383:c.instructions+=2;goto B771383;
case 0x771386:c.instructions+=1;goto B771386;
case 0x77138b:goto L77138b;
case 0x771390:c.instructions+=1;goto B771390;
case 0x7713a0:goto L7713a0;
case 0x7713a3:c.instructions+=1;goto B7713a3;
case 0x7713a8:goto L7713a8;
case 0x7713ad:c.instructions+=1;goto B7713ad;
case 0x7713c0:goto L7713c0;
case 0x7713c3:c.instructions+=1;goto B7713c3;
case 0x7713c8:goto L7713c8;
case 0x7713cd:c.instructions+=1;goto B7713cd;
case 0x7713e0:goto L7713e0;
case 0x7713e3:c.instructions+=2;goto B7713e3;
case 0x7713e6:c.instructions+=1;goto B7713e6;
case 0x7713eb:goto L7713eb;
case 0x7713f0:c.instructions+=1;goto B7713f0;
case 0x771400:goto L771400;
case 0x771406:c.instructions+=2;goto B771406;
case 0x771407:c.instructions+=1;goto B771407;
case 0x77140c:goto L77140c;
case 0x77140d:c.instructions+=1;goto B77140d;
case 0x77140e:goto L77140e;
case 0x771413:c.instructions+=1;goto B771413;
case 0x771420:goto L771420;
case 0x771423:c.instructions+=1;goto B771423;
case 0x771428:goto L771428;
case 0x77142b:c.instructions+=2;goto B77142b;
case 0x771431:c.instructions+=1;goto B771431;
case 0x771436:goto L771436;
case 0x771439:c.instructions+=2;goto B771439;
case 0x77143f:c.instructions+=1;goto B77143f;
case 0x771444:goto L771444;
case 0x771449:c.instructions+=1;goto B771449;
case 0x771450:goto L771450;
case 0x771453:c.instructions+=1;goto B771453;
case 0x771458:goto L771458;
case 0x77145d:c.instructions+=1;goto B77145d;
case 0x771470:goto L771470;
case 0x771473:c.instructions+=1;goto B771473;
case 0x771478:goto L771478;
case 0x77147b:c.instructions+=2;goto B77147b;
case 0x771481:c.instructions+=1;goto B771481;
case 0x771486:goto L771486;
case 0x77148b:c.instructions+=1;goto B77148b;
case 0x771490:goto L771490;
case 0x771493:c.instructions+=1;goto B771493;
case 0x771498:goto L771498;
case 0x77149d:c.instructions+=1;goto B77149d;
case 0x7714b0:goto L7714b0;
case 0x7714b3:c.instructions+=2;goto B7714b3;
case 0x7714b4:c.instructions+=1;goto B7714b4;
case 0x7714b9:goto L7714b9;
case 0x7714ba:c.instructions+=1;goto B7714ba;
case 0x7714bb:goto L7714bb;
case 0x7714c0:c.instructions+=1;goto B7714c0;
case 0x7714d0:goto L7714d0;
case 0x7714d3:c.instructions+=1;goto B7714d3;
case 0x7714d8:goto L7714d8;
case 0x7714db:c.instructions+=2;goto B7714db;
case 0x7714e1:c.instructions+=1;goto B7714e1;
case 0x7714e6:goto L7714e6;
case 0x7714eb:c.instructions+=1;goto B7714eb;
case 0x7714f0:goto L7714f0;
case 0x7714f3:c.instructions+=1;goto B7714f3;
case 0x7714f8:goto L7714f8;
case 0x7714fb:c.instructions+=2;goto B7714fb;
case 0x7714fe:c.instructions+=1;goto B7714fe;
case 0x771503:goto L771503;
case 0x771506:c.instructions+=2;goto B771506;
case 0x77150c:c.instructions+=1;goto B77150c;
case 0x771511:goto L771511;
case 0x771516:c.instructions+=1;goto B771516;
case 0x771520:goto L771520;
case 0x771523:c.instructions+=2;goto B771523;
case 0x771526:c.instructions+=1;goto B771526;
case 0x77152b:goto L77152b;
case 0x77152e:c.instructions+=2;goto B77152e;
case 0x771534:c.instructions+=1;goto B771534;
case 0x771539:goto L771539;
case 0x77153e:c.instructions+=1;goto B77153e;
case 0x771550:goto L771550;
case 0x771555:c.instructions+=6;goto B771555;
case 0x771557:c.instructions+=5;goto B771557;
case 0x77155c:c.instructions+=4;goto B77155c;
case 0x77155f:c.instructions+=3;goto B77155f;
case 0x771562:c.instructions+=2;goto B771562;
case 0x771563:c.instructions+=1;goto B771563;
case 0x771568:goto L771568;
case 0x771569:goto L771569;
case 0x77156e:c.instructions+=1;goto B77156e;
case 0x771580:goto L771580;
case 0x771585:c.instructions+=5;goto B771585;
case 0x771587:c.instructions+=4;goto B771587;
case 0x77158c:c.instructions+=3;goto B77158c;
case 0x771592:c.instructions+=2;goto B771592;
case 0x771593:c.instructions+=1;goto B771593;
case 0x771598:goto L771598;
case 0x771599:goto L771599;
case 0x77159e:c.instructions+=1;goto B77159e;
case 0x7715b0:goto L7715b0;
case 0x7715b3:c.instructions+=1;goto B7715b3;
case 0x7715b8:goto L7715b8;
case 0x7715bb:c.instructions+=2;goto B7715bb;
case 0x7715be:c.instructions+=1;goto B7715be;
case 0x7715c3:goto L7715c3;
case 0x7715c8:c.instructions+=1;goto B7715c8;
case 0x7715d0:goto L7715d0;
case 0x7715d3:c.instructions+=1;goto B7715d3;
case 0x7715d8:goto L7715d8;
case 0x7715db:c.instructions+=2;goto B7715db;
case 0x7715e1:c.instructions+=1;goto B7715e1;
case 0x7715e6:goto L7715e6;
case 0x7715eb:c.instructions+=1;goto B7715eb;
case 0x7715f0:goto L7715f0;
case 0x7715f3:c.instructions+=1;goto B7715f3;
case 0x7715f8:goto L7715f8;
case 0x7715fd:c.instructions+=1;goto B7715fd;
case 0x771610:goto L771610;
case 0x771613:c.instructions+=2;goto B771613;
case 0x771616:c.instructions+=1;goto B771616;
case 0x77161b:goto L77161b;
case 0x77161e:c.instructions+=2;goto B77161e;
case 0x771624:c.instructions+=1;goto B771624;
case 0x771629:goto L771629;
case 0x77162e:c.instructions+=6;goto B77162e;
case 0x771630:c.instructions+=5;goto B771630;
case 0x771635:c.instructions+=4;goto B771635;
case 0x771638:c.instructions+=3;goto B771638;
case 0x77163d:c.instructions+=2;goto B77163d;
case 0x77163e:c.instructions+=1;goto B77163e;
case 0x771643:goto L771643;
case 0x771644:goto L771644;
case 0x771649:c.instructions+=1;goto B771649;
case 0x771650:goto L771650;
case 0x771653:c.instructions+=1;goto B771653;
case 0x771658:goto L771658;
case 0x77165b:c.instructions+=2;goto B77165b;
case 0x77165e:c.instructions+=1;goto B77165e;
case 0x771663:goto L771663;
case 0x771665:c.instructions+=4;goto B771665;
case 0x77166a:c.instructions+=3;goto B77166a;
case 0x77166d:c.instructions+=2;goto B77166d;
case 0x77166e:c.instructions+=1;goto B77166e;
case 0x771673:goto L771673;
case 0x771676:c.instructions+=1;goto B771676;
case 0x771677:goto L771677;
case 0x771679:c.instructions+=4;goto B771679;
case 0x77167e:c.instructions+=3;goto B77167e;
case 0x771681:c.instructions+=2;goto B771681;
case 0x771682:c.instructions+=1;goto B771682;
case 0x771687:goto L771687;
case 0x77168a:c.instructions+=1;goto B77168a;
case 0x77168b:goto L77168b;
case 0x771690:c.instructions+=1;goto B771690;
case 0x7716a0:goto L7716a0;
case 0x7716a3:c.instructions+=1;goto B7716a3;
case 0x7716a8:goto L7716a8;
case 0x7716ad:c.instructions+=1;goto B7716ad;
case 0x7716c0:goto L7716c0;
case 0x7716c3:c.instructions+=1;goto B7716c3;
case 0x7716c8:goto L7716c8;
case 0x7716cd:c.instructions+=1;goto B7716cd;
case 0x7716e0:goto L7716e0;
case 0x7716e3:c.instructions+=1;goto B7716e3;
case 0x7716e8:goto L7716e8;
case 0x7716eb:c.instructions+=2;goto B7716eb;
case 0x7716f1:c.instructions+=1;goto B7716f1;
case 0x7716f6:goto L7716f6;
case 0x7716fb:c.instructions+=1;goto B7716fb;
case 0x771700:goto L771700;
case 0x771703:c.instructions+=1;goto B771703;
case 0x771708:goto L771708;
case 0x77170b:c.instructions+=2;goto B77170b;
case 0x771711:c.instructions+=1;goto B771711;
case 0x771716:goto L771716;
case 0x771719:c.instructions+=2;goto B771719;
case 0x77171f:c.instructions+=1;goto B77171f;
case 0x771724:goto L771724;
case 0x771727:c.instructions+=2;goto B771727;
case 0x771728:c.instructions+=1;goto B771728;
case 0x77172d:goto L77172d;
case 0x77172e:c.instructions+=1;goto B77172e;
case 0x77172f:goto L77172f;
case 0x771731:c.instructions+=4;goto B771731;
case 0x771736:c.instructions+=3;goto B771736;
case 0x771739:c.instructions+=2;goto B771739;
case 0x77173a:c.instructions+=1;goto B77173a;
case 0x77173f:goto L77173f;
case 0x771742:c.instructions+=1;goto B771742;
case 0x771743:goto L771743;
case 0x771745:c.instructions+=4;goto B771745;
case 0x77174a:c.instructions+=3;goto B77174a;
case 0x77174d:c.instructions+=2;goto B77174d;
case 0x77174e:c.instructions+=1;goto B77174e;
case 0x771753:goto L771753;
case 0x771756:c.instructions+=1;goto B771756;
case 0x771757:goto L771757;
case 0x771759:c.instructions+=4;goto B771759;
case 0x77175e:c.instructions+=3;goto B77175e;
case 0x771761:c.instructions+=2;goto B771761;
case 0x771762:c.instructions+=1;goto B771762;
case 0x771767:goto L771767;
case 0x77176a:c.instructions+=1;goto B77176a;
case 0x77176b:goto L77176b;
case 0x77176d:c.instructions+=4;goto B77176d;
case 0x771772:c.instructions+=3;goto B771772;
case 0x771775:c.instructions+=2;goto B771775;
case 0x771776:c.instructions+=1;goto B771776;
case 0x77177b:goto L77177b;
case 0x77177e:c.instructions+=1;goto B77177e;
case 0x77177f:goto L77177f;
case 0x771781:c.instructions+=4;goto B771781;
case 0x771786:c.instructions+=3;goto B771786;
case 0x771789:c.instructions+=2;goto B771789;
case 0x77178a:c.instructions+=1;goto B77178a;
case 0x77178f:goto L77178f;
case 0x771792:c.instructions+=1;goto B771792;
case 0x771793:goto L771793;
case 0x771795:c.instructions+=4;goto B771795;
case 0x77179a:c.instructions+=3;goto B77179a;
case 0x77179d:c.instructions+=2;goto B77179d;
case 0x77179e:c.instructions+=1;goto B77179e;
case 0x7717a3:goto L7717a3;
case 0x7717a6:c.instructions+=1;goto B7717a6;
case 0x7717a7:goto L7717a7;
case 0x7717ac:c.instructions+=1;goto B7717ac;
case 0x7717c0:goto L7717c0;
case 0x7717c3:c.instructions+=1;goto B7717c3;
case 0x7717c8:goto L7717c8;
case 0x7717cb:c.instructions+=2;goto B7717cb;
case 0x7717cc:c.instructions+=1;goto B7717cc;
case 0x7717d1:goto L7717d1;
case 0x7717d2:c.instructions+=1;goto B7717d2;
case 0x7717d3:goto L7717d3;
case 0x7717d6:c.instructions+=2;goto B7717d6;
case 0x7717d7:c.instructions+=1;goto B7717d7;
case 0x7717dc:goto L7717dc;
case 0x7717dd:c.instructions+=1;goto B7717dd;
case 0x7717de:goto L7717de;
case 0x7717e1:c.instructions+=2;goto B7717e1;
case 0x7717e2:c.instructions+=1;goto B7717e2;
case 0x7717e7:goto L7717e7;
case 0x7717e8:c.instructions+=1;goto B7717e8;
case 0x7717e9:goto L7717e9;
case 0x7717ec:c.instructions+=2;goto B7717ec;
case 0x7717ed:c.instructions+=1;goto B7717ed;
case 0x7717f2:goto L7717f2;
case 0x7717f3:c.instructions+=1;goto B7717f3;
case 0x7717f4:goto L7717f4;
case 0x7717f9:c.instructions+=1;goto B7717f9;
case 0x771800:goto L771800;
case 0x771803:c.instructions+=1;goto B771803;
case 0x771808:goto L771808;
case 0x77180a:c.instructions+=4;goto B77180a;
case 0x77180f:c.instructions+=3;goto B77180f;
case 0x771812:c.instructions+=2;goto B771812;
case 0x771813:c.instructions+=1;goto B771813;
case 0x771818:goto L771818;
case 0x77181b:c.instructions+=1;goto B77181b;
case 0x77181c:goto L77181c;
case 0x77181e:c.instructions+=4;goto B77181e;
case 0x771823:c.instructions+=3;goto B771823;
case 0x771826:c.instructions+=2;goto B771826;
case 0x771827:c.instructions+=1;goto B771827;
case 0x77182c:goto L77182c;
case 0x77182f:c.instructions+=1;goto B77182f;
case 0x771830:goto L771830;
case 0x771832:c.instructions+=4;goto B771832;
case 0x771837:c.instructions+=3;goto B771837;
case 0x77183a:c.instructions+=2;goto B77183a;
case 0x77183b:c.instructions+=1;goto B77183b;
case 0x771840:goto L771840;
case 0x771843:c.instructions+=1;goto B771843;
case 0x771844:goto L771844;
case 0x771849:c.instructions+=1;goto B771849;
case 0x771850:goto L771850;
case 0x771853:c.instructions+=2;goto B771853;
case 0x771854:c.instructions+=1;goto B771854;
case 0x771859:goto L771859;
case 0x77185a:c.instructions+=1;goto B77185a;
case 0x77185b:goto L77185b;
case 0x77185e:c.instructions+=2;goto B77185e;
case 0x77185f:c.instructions+=1;goto B77185f;
case 0x771864:goto L771864;
case 0x771865:c.instructions+=1;goto B771865;
case 0x771866:goto L771866;
case 0x771869:c.instructions+=2;goto B771869;
case 0x77186a:c.instructions+=1;goto B77186a;
case 0x77186f:goto L77186f;
case 0x771870:c.instructions+=1;goto B771870;
case 0x771871:goto L771871;
case 0x771874:c.instructions+=2;goto B771874;
case 0x771875:c.instructions+=1;goto B771875;
case 0x77187a:goto L77187a;
case 0x77187b:c.instructions+=1;goto B77187b;
case 0x77187c:goto L77187c;
case 0x77187f:c.instructions+=2;goto B77187f;
case 0x771880:c.instructions+=1;goto B771880;
case 0x771885:goto L771885;
case 0x771886:c.instructions+=1;goto B771886;
case 0x771887:goto L771887;
case 0x77188a:c.instructions+=2;goto B77188a;
case 0x77188b:c.instructions+=1;goto B77188b;
case 0x771890:goto L771890;
case 0x771891:c.instructions+=1;goto B771891;
case 0x771892:goto L771892;
case 0x771895:c.instructions+=2;goto B771895;
case 0x771896:c.instructions+=1;goto B771896;
case 0x77189b:goto L77189b;
case 0x77189c:c.instructions+=1;goto B77189c;
case 0x77189d:goto L77189d;
case 0x7718a0:c.instructions+=2;goto B7718a0;
case 0x7718a1:c.instructions+=1;goto B7718a1;
case 0x7718a6:goto L7718a6;
case 0x7718a7:c.instructions+=1;goto B7718a7;
case 0x7718a8:goto L7718a8;
case 0x7718ad:c.instructions+=1;goto B7718ad;
case 0x7718c0:goto L7718c0;
case 0x7718c3:c.instructions+=1;goto B7718c3;
case 0x7718c8:goto L7718c8;
case 0x7718ca:c.instructions+=4;goto B7718ca;
case 0x7718cf:c.instructions+=3;goto B7718cf;
case 0x7718d2:c.instructions+=2;goto B7718d2;
case 0x7718d3:c.instructions+=1;goto B7718d3;
case 0x7718d8:goto L7718d8;
case 0x7718db:c.instructions+=1;goto B7718db;
case 0x7718dc:goto L7718dc;
case 0x7718e1:c.instructions+=1;goto B7718e1;
case 0x7718f0:goto L7718f0;
case 0x7718f3:c.instructions+=1;goto B7718f3;
case 0x7718f8:goto L7718f8;
case 0x7718fa:c.instructions+=4;goto B7718fa;
case 0x7718ff:c.instructions+=3;goto B7718ff;
case 0x771902:c.instructions+=2;goto B771902;
case 0x771903:c.instructions+=1;goto B771903;
case 0x771908:goto L771908;
case 0x77190b:c.instructions+=1;goto B77190b;
case 0x77190c:goto L77190c;
case 0x771911:c.instructions+=1;goto B771911;
case 0x771920:goto L771920;
case 0x771923:c.instructions+=1;goto B771923;
case 0x771928:goto L771928;
case 0x77192b:c.instructions+=2;goto B77192b;
case 0x77192e:c.instructions+=1;goto B77192e;
case 0x771933:goto L771933;
case 0x771936:c.instructions+=2;goto B771936;
case 0x77193c:c.instructions+=1;goto B77193c;
case 0x771941:goto L771941;
case 0x771943:c.instructions+=4;goto B771943;
case 0x771948:c.instructions+=3;goto B771948;
case 0x77194b:c.instructions+=2;goto B77194b;
case 0x77194c:c.instructions+=1;goto B77194c;
case 0x771951:goto L771951;
case 0x771954:c.instructions+=1;goto B771954;
case 0x771955:goto L771955;
case 0x77195a:c.instructions+=1;goto B77195a;
case 0x771960:goto L771960;
case 0x771963:c.instructions+=2;goto B771963;
case 0x771964:c.instructions+=1;goto B771964;
case 0x771969:goto L771969;
case 0x77196a:c.instructions+=1;goto B77196a;
case 0x77196b:goto L77196b;
case 0x771970:c.instructions+=1;goto B771970;
case 0x771980:goto L771980;
case 0x771983:c.instructions+=2;goto B771983;
case 0x771984:c.instructions+=1;goto B771984;
case 0x771989:goto L771989;
case 0x77198a:c.instructions+=1;goto B77198a;
case 0x77198b:goto L77198b;
case 0x77198e:c.instructions+=2;goto B77198e;
case 0x77198f:c.instructions+=1;goto B77198f;
case 0x771994:goto L771994;
case 0x771995:c.instructions+=1;goto B771995;
case 0x771996:goto L771996;
case 0x77199b:c.instructions+=1;goto B77199b;
case 0x7719a0:goto L7719a0;
case 0x7719a3:c.instructions+=2;goto B7719a3;
case 0x7719a4:c.instructions+=1;goto B7719a4;
case 0x7719a9:goto L7719a9;
case 0x7719aa:c.instructions+=1;goto B7719aa;
case 0x7719ab:goto L7719ab;
case 0x7719ae:c.instructions+=2;goto B7719ae;
case 0x7719af:c.instructions+=1;goto B7719af;
case 0x7719b4:goto L7719b4;
case 0x7719b5:c.instructions+=1;goto B7719b5;
case 0x7719b6:goto L7719b6;
case 0x7719bb:c.instructions+=1;goto B7719bb;
case 0x7719c0:goto L7719c0;
case 0x7719c3:c.instructions+=2;goto B7719c3;
case 0x7719c4:c.instructions+=1;goto B7719c4;
case 0x7719c9:goto L7719c9;
case 0x7719ca:c.instructions+=1;goto B7719ca;
case 0x7719cb:goto L7719cb;
case 0x7719ce:c.instructions+=2;goto B7719ce;
case 0x7719cf:c.instructions+=1;goto B7719cf;
case 0x7719d4:goto L7719d4;
case 0x7719d5:c.instructions+=1;goto B7719d5;
case 0x7719d6:goto L7719d6;
case 0x7719d9:c.instructions+=2;goto B7719d9;
case 0x7719da:c.instructions+=1;goto B7719da;
case 0x7719df:goto L7719df;
case 0x7719e0:c.instructions+=1;goto B7719e0;
case 0x7719e1:goto L7719e1;
case 0x7719e4:c.instructions+=2;goto B7719e4;
case 0x7719e5:c.instructions+=1;goto B7719e5;
case 0x7719ea:goto L7719ea;
case 0x7719eb:c.instructions+=1;goto B7719eb;
case 0x7719ec:goto L7719ec;
case 0x7719ef:c.instructions+=2;goto B7719ef;
case 0x7719f0:c.instructions+=1;goto B7719f0;
case 0x7719f5:goto L7719f5;
case 0x7719f6:c.instructions+=1;goto B7719f6;
case 0x7719f7:goto L7719f7;
case 0x7719fa:c.instructions+=2;goto B7719fa;
case 0x7719fb:c.instructions+=1;goto B7719fb;
case 0x771a00:goto L771a00;
case 0x771a01:c.instructions+=1;goto B771a01;
case 0x771a02:goto L771a02;
case 0x771a05:c.instructions+=2;goto B771a05;
case 0x771a06:c.instructions+=1;goto B771a06;
case 0x771a0b:goto L771a0b;
case 0x771a0c:c.instructions+=1;goto B771a0c;
case 0x771a0d:goto L771a0d;
case 0x771a10:c.instructions+=2;goto B771a10;
case 0x771a11:c.instructions+=1;goto B771a11;
case 0x771a16:goto L771a16;
case 0x771a17:c.instructions+=1;goto B771a17;
case 0x771a18:goto L771a18;
case 0x771a1b:c.instructions+=2;goto B771a1b;
case 0x771a1c:c.instructions+=1;goto B771a1c;
case 0x771a21:goto L771a21;
case 0x771a22:c.instructions+=1;goto B771a22;
case 0x771a23:goto L771a23;
case 0x771a26:c.instructions+=2;goto B771a26;
case 0x771a27:c.instructions+=1;goto B771a27;
case 0x771a2c:goto L771a2c;
case 0x771a2d:c.instructions+=1;goto B771a2d;
case 0x771a2e:goto L771a2e;
case 0x771a31:c.instructions+=2;goto B771a31;
case 0x771a32:c.instructions+=1;goto B771a32;
case 0x771a37:goto L771a37;
case 0x771a38:c.instructions+=1;goto B771a38;
case 0x771a39:goto L771a39;
case 0x771a3c:c.instructions+=2;goto B771a3c;
case 0x771a3d:c.instructions+=1;goto B771a3d;
case 0x771a42:goto L771a42;
case 0x771a43:c.instructions+=1;goto B771a43;
case 0x771a44:goto L771a44;
case 0x771a47:c.instructions+=2;goto B771a47;
case 0x771a48:c.instructions+=1;goto B771a48;
case 0x771a4d:goto L771a4d;
case 0x771a4e:c.instructions+=1;goto B771a4e;
case 0x771a4f:goto L771a4f;
case 0x771a52:c.instructions+=2;goto B771a52;
case 0x771a53:c.instructions+=1;goto B771a53;
case 0x771a58:goto L771a58;
case 0x771a59:c.instructions+=1;goto B771a59;
case 0x771a5a:goto L771a5a;
case 0x771a5d:c.instructions+=2;goto B771a5d;
case 0x771a5e:c.instructions+=1;goto B771a5e;
case 0x771a63:goto L771a63;
case 0x771a64:c.instructions+=1;goto B771a64;
case 0x771a65:goto L771a65;
case 0x771a68:c.instructions+=2;goto B771a68;
case 0x771a69:c.instructions+=1;goto B771a69;
case 0x771a6e:goto L771a6e;
case 0x771a6f:c.instructions+=1;goto B771a6f;
case 0x771a70:goto L771a70;
case 0x771a73:c.instructions+=2;goto B771a73;
case 0x771a74:c.instructions+=1;goto B771a74;
case 0x771a79:goto L771a79;
case 0x771a7a:c.instructions+=1;goto B771a7a;
case 0x771a7b:goto L771a7b;
case 0x771a7e:c.instructions+=2;goto B771a7e;
case 0x771a7f:c.instructions+=1;goto B771a7f;
case 0x771a84:goto L771a84;
case 0x771a85:c.instructions+=1;goto B771a85;
case 0x771a86:goto L771a86;
case 0x771a89:c.instructions+=2;goto B771a89;
case 0x771a8a:c.instructions+=1;goto B771a8a;
case 0x771a8f:goto L771a8f;
case 0x771a90:c.instructions+=1;goto B771a90;
case 0x771a91:goto L771a91;
case 0x771a96:c.instructions+=1;goto B771a96;
case 0x771aa0:goto L771aa0;
case 0x771aa5:c.instructions+=5;goto B771aa5;
case 0x771aa7:c.instructions+=4;goto B771aa7;
case 0x771aa9:c.instructions+=3;goto B771aa9;
case 0x771aaf:c.instructions+=2;goto B771aaf;
case 0x771ab0:c.instructions+=1;goto B771ab0;
case 0x771ab5:goto L771ab5;
case 0x771ab6:goto L771ab6;
case 0x771abb:c.instructions+=5;goto B771abb;
case 0x771abd:c.instructions+=4;goto B771abd;
case 0x771abf:c.instructions+=3;goto B771abf;
case 0x771ac5:c.instructions+=2;goto B771ac5;
case 0x771ac6:c.instructions+=1;goto B771ac6;
case 0x771acb:goto L771acb;
case 0x771acc:goto L771acc;
case 0x771ad1:c.instructions+=1;goto B771ad1;
case 0x771ae0:goto L771ae0;
case 0x771ae3:c.instructions+=1;goto B771ae3;
case 0x771ae8:goto L771ae8;
case 0x771aea:c.instructions+=4;goto B771aea;
case 0x771aef:c.instructions+=3;goto B771aef;
case 0x771af2:c.instructions+=2;goto B771af2;
case 0x771af3:c.instructions+=1;goto B771af3;
case 0x771af8:goto L771af8;
case 0x771afb:c.instructions+=1;goto B771afb;
case 0x771afc:goto L771afc;
case 0x771b01:c.instructions+=1;goto B771b01;
case 0x771b10:goto L771b10;
case 0x771b16:c.instructions+=2;goto B771b16;
case 0x771b17:c.instructions+=1;goto B771b17;
case 0x771b1c:goto L771b1c;
case 0x771b1d:c.instructions+=1;goto B771b1d;
case 0x771b1e:goto L771b1e;
case 0x771b23:c.instructions+=1;goto B771b23;
case 0x771b30:goto L771b30;
case 0x771b32:c.instructions+=4;goto B771b32;
case 0x771b37:c.instructions+=3;goto B771b37;
case 0x771b3a:c.instructions+=2;goto B771b3a;
case 0x771b3b:c.instructions+=1;goto B771b3b;
case 0x771b40:goto L771b40;
case 0x771b43:c.instructions+=1;goto B771b43;
case 0x771b44:goto L771b44;
case 0x771b49:c.instructions+=1;goto B771b49;
case 0x771b50:goto L771b50;
case 0x771b53:c.instructions+=2;goto B771b53;
case 0x771b54:c.instructions+=1;goto B771b54;
case 0x771b59:goto L771b59;
case 0x771b5a:c.instructions+=1;goto B771b5a;
case 0x771b5b:goto L771b5b;
case 0x771b5e:c.instructions+=2;goto B771b5e;
case 0x771b5f:c.instructions+=1;goto B771b5f;
case 0x771b64:goto L771b64;
case 0x771b65:c.instructions+=1;goto B771b65;
case 0x771b66:goto L771b66;
case 0x771b69:c.instructions+=2;goto B771b69;
case 0x771b6a:c.instructions+=1;goto B771b6a;
case 0x771b6f:goto L771b6f;
case 0x771b70:c.instructions+=1;goto B771b70;
case 0x771b71:goto L771b71;
case 0x771b74:c.instructions+=2;goto B771b74;
case 0x771b75:c.instructions+=1;goto B771b75;
case 0x771b7a:goto L771b7a;
case 0x771b7b:c.instructions+=1;goto B771b7b;
case 0x771b7c:goto L771b7c;
case 0x771b7f:c.instructions+=2;goto B771b7f;
case 0x771b80:c.instructions+=1;goto B771b80;
case 0x771b85:goto L771b85;
case 0x771b86:c.instructions+=1;goto B771b86;
case 0x771b87:goto L771b87;
case 0x771b8c:c.instructions+=1;goto B771b8c;
case 0x771ba0:goto L771ba0;
case 0x771ba3:c.instructions+=2;goto B771ba3;
case 0x771ba4:c.instructions+=1;goto B771ba4;
case 0x771ba9:goto L771ba9;
case 0x771baa:c.instructions+=1;goto B771baa;
case 0x771bab:goto L771bab;
case 0x771bae:c.instructions+=2;goto B771bae;
case 0x771baf:c.instructions+=1;goto B771baf;
case 0x771bb4:goto L771bb4;
case 0x771bb5:c.instructions+=1;goto B771bb5;
case 0x771bb6:goto L771bb6;
case 0x771bb9:c.instructions+=2;goto B771bb9;
case 0x771bba:c.instructions+=1;goto B771bba;
case 0x771bbf:goto L771bbf;
case 0x771bc0:c.instructions+=1;goto B771bc0;
case 0x771bc1:goto L771bc1;
case 0x771bc4:c.instructions+=2;goto B771bc4;
case 0x771bc5:c.instructions+=1;goto B771bc5;
case 0x771bca:goto L771bca;
case 0x771bcb:c.instructions+=1;goto B771bcb;
case 0x771bcc:goto L771bcc;
case 0x771bd1:c.instructions+=1;goto B771bd1;
case 0x771be0:goto L771be0;
case 0x771be3:c.instructions+=2;goto B771be3;
case 0x771be4:c.instructions+=1;goto B771be4;
case 0x771be9:goto L771be9;
case 0x771bea:c.instructions+=1;goto B771bea;
case 0x771beb:goto L771beb;
case 0x771bee:c.instructions+=2;goto B771bee;
case 0x771bef:c.instructions+=1;goto B771bef;
case 0x771bf4:goto L771bf4;
case 0x771bf5:c.instructions+=1;goto B771bf5;
case 0x771bf6:goto L771bf6;
case 0x771bf9:c.instructions+=2;goto B771bf9;
case 0x771bfa:c.instructions+=1;goto B771bfa;
case 0x771bff:goto L771bff;
case 0x771c00:c.instructions+=1;goto B771c00;
case 0x771c01:goto L771c01;
case 0x771c06:c.instructions+=1;goto B771c06;
case 0x771c10:goto L771c10;
case 0x771c16:c.instructions+=1;goto B771c16;
case 0x771c1b:goto L771c1b;
case 0x771c21:c.instructions+=1;goto B771c21;
case 0x771c26:goto L771c26;
case 0x771c2b:c.instructions+=1;goto B771c2b;
case 0x771c30:goto L771c30;
case 0x771c36:c.instructions+=1;goto B771c36;
case 0x771c3b:goto L771c3b;
case 0x771c40:c.instructions+=1;goto B771c40;
case 0x771c50:goto L771c50;
case 0x771c53:c.instructions+=1;goto B771c53;
case 0x771c58:goto L771c58;
case 0x771c5d:c.instructions+=1;goto B771c5d;
case 0x771c70:goto L771c70;
case 0x771c76:c.instructions+=2;goto B771c76;
case 0x771c77:c.instructions+=1;goto B771c77;
case 0x771c7c:goto L771c7c;
case 0x771c7d:c.instructions+=1;goto B771c7d;
case 0x771c7e:goto L771c7e;
case 0x771c84:c.instructions+=1;goto B771c84;
case 0x771c89:goto L771c89;
case 0x771c8e:c.instructions+=1;goto B771c8e;
case 0x771ca0:goto L771ca0;
case 0x771ca3:c.instructions+=2;goto B771ca3;
case 0x771ca6:c.instructions+=1;goto B771ca6;
case 0x771cab:goto L771cab;
case 0x771cb0:c.instructions+=1;goto B771cb0;
case 0x771cc0:goto L771cc0;
case 0x771cc2:c.instructions+=4;goto B771cc2;
case 0x771cc7:c.instructions+=3;goto B771cc7;
case 0x771cca:c.instructions+=2;goto B771cca;
case 0x771ccb:c.instructions+=1;goto B771ccb;
case 0x771cd0:goto L771cd0;
case 0x771cd3:c.instructions+=1;goto B771cd3;
case 0x771cd4:goto L771cd4;
case 0x771cd9:c.instructions+=1;goto B771cd9;
case 0x771ce0:goto L771ce0;
case 0x771ce6:c.instructions+=1;goto B771ce6;
case 0x771ceb:goto L771ceb;
case 0x771cf0:c.instructions+=1;goto B771cf0;
case 0x771d00:goto L771d00;
case 0x771d03:c.instructions+=1;goto B771d03;
case 0x771d08:goto L771d08;
case 0x771d0b:c.instructions+=1;goto B771d0b;
case 0x771d10:goto L771d10;
case 0x771d13:c.instructions+=1;goto B771d13;
case 0x771d18:goto L771d18;
case 0x771d1b:c.instructions+=1;goto B771d1b;
case 0x771d20:goto L771d20;
case 0x771d23:c.instructions+=1;goto B771d23;
case 0x771d28:goto L771d28;
case 0x771d2d:c.instructions+=1;goto B771d2d;
case 0x771d40:goto L771d40;
case 0x771d43:c.instructions+=2;goto B771d43;
case 0x771d46:c.instructions+=1;goto B771d46;
case 0x771d4b:goto L771d4b;
case 0x771d50:c.instructions+=1;goto B771d50;
case 0x771d60:goto L771d60;
case 0x771d63:c.instructions+=2;goto B771d63;
case 0x771d66:c.instructions+=1;goto B771d66;
case 0x771d6b:goto L771d6b;
case 0x771d70:c.instructions+=1;goto B771d70;
case 0x771d80:goto L771d80;
case 0x771d83:c.instructions+=2;goto B771d83;
case 0x771d86:c.instructions+=1;goto B771d86;
case 0x771d8b:goto L771d8b;
case 0x771d8e:c.instructions+=2;goto B771d8e;
case 0x771d91:c.instructions+=1;goto B771d91;
case 0x771d96:goto L771d96;
case 0x771d99:c.instructions+=2;goto B771d99;
case 0x771d9c:c.instructions+=1;goto B771d9c;
case 0x771da1:goto L771da1;
case 0x771da6:c.instructions+=1;goto B771da6;
case 0x771db0:goto L771db0;
case 0x771db3:c.instructions+=1;goto B771db3;
case 0x771db8:goto L771db8;
case 0x771dbb:c.instructions+=2;goto B771dbb;
case 0x771dbe:c.instructions+=1;goto B771dbe;
case 0x771dc3:goto L771dc3;
case 0x771dc8:c.instructions+=6;goto B771dc8;
case 0x771dca:c.instructions+=5;goto B771dca;
case 0x771dcc:c.instructions+=4;goto B771dcc;
case 0x771dcf:c.instructions+=3;goto B771dcf;
case 0x771dd2:c.instructions+=2;goto B771dd2;
case 0x771dd3:c.instructions+=1;goto B771dd3;
case 0x771dd8:goto L771dd8;
case 0x771dd9:goto L771dd9;
case 0x771dde:c.instructions+=1;goto B771dde;
case 0x771df0:goto L771df0;
case 0x771df6:c.instructions+=2;goto B771df6;
case 0x771df7:c.instructions+=1;goto B771df7;
case 0x771dfc:goto L771dfc;
case 0x771dfd:c.instructions+=1;goto B771dfd;
case 0x771dfe:goto L771dfe;
case 0x771e04:c.instructions+=1;goto B771e04;
case 0x771e09:goto L771e09;
case 0x771e0e:c.instructions+=1;goto B771e0e;
case 0x771e20:goto L771e20;
case 0x771e23:c.instructions+=2;goto B771e23;
case 0x771e26:c.instructions+=1;goto B771e26;
case 0x771e2b:goto L771e2b;
case 0x771e2e:c.instructions+=2;goto B771e2e;
case 0x771e31:c.instructions+=1;goto B771e31;
case 0x771e36:goto L771e36;
case 0x771e3b:c.instructions+=1;goto B771e3b;
case 0x771e40:goto L771e40;
case 0x771e42:c.instructions+=4;goto B771e42;
case 0x771e47:c.instructions+=3;goto B771e47;
case 0x771e4a:c.instructions+=2;goto B771e4a;
case 0x771e4b:c.instructions+=1;goto B771e4b;
case 0x771e50:goto L771e50;
case 0x771e53:c.instructions+=1;goto B771e53;
case 0x771e54:goto L771e54;
case 0x771e59:c.instructions+=1;goto B771e59;
case 0x771e60:goto L771e60;
case 0x771e63:c.instructions+=2;goto B771e63;
case 0x771e66:c.instructions+=1;goto B771e66;
case 0x771e6b:goto L771e6b;
case 0x771e70:c.instructions+=1;goto B771e70;
case 0x771e80:goto L771e80;
case 0x771e83:c.instructions+=2;goto B771e83;
case 0x771e84:c.instructions+=1;goto B771e84;
case 0x771e89:goto L771e89;
case 0x771e8a:c.instructions+=1;goto B771e8a;
case 0x771e8b:goto L771e8b;
case 0x771e90:c.instructions+=1;goto B771e90;
case 0x771ea0:goto L771ea0;
case 0x771ea3:c.instructions+=2;goto B771ea3;
case 0x771ea6:c.instructions+=1;goto B771ea6;
case 0x771eab:goto L771eab;
case 0x771eae:c.instructions+=2;goto B771eae;
case 0x771eb1:c.instructions+=1;goto B771eb1;
case 0x771eb6:goto L771eb6;
case 0x771eb9:c.instructions+=2;goto B771eb9;
case 0x771ebc:c.instructions+=1;goto B771ebc;
case 0x771ec1:goto L771ec1;
case 0x771ec4:c.instructions+=2;goto B771ec4;
case 0x771eca:c.instructions+=1;goto B771eca;
case 0x771ecf:goto L771ecf;
case 0x771ed4:c.instructions+=1;goto B771ed4;
case 0x771ee0:goto L771ee0;
case 0x771ee2:c.instructions+=4;goto B771ee2;
case 0x771ee7:c.instructions+=3;goto B771ee7;
case 0x771eea:c.instructions+=2;goto B771eea;
case 0x771eeb:c.instructions+=1;goto B771eeb;
case 0x771ef0:goto L771ef0;
case 0x771ef3:c.instructions+=1;goto B771ef3;
case 0x771ef4:goto L771ef4;
case 0x771ef9:c.instructions+=1;goto B771ef9;
case 0x771f00:goto L771f00;
case 0x771f03:c.instructions+=2;goto B771f03;
case 0x771f06:c.instructions+=1;goto B771f06;
case 0x771f0b:goto L771f0b;
case 0x771f0e:c.instructions+=2;goto B771f0e;
case 0x771f11:c.instructions+=1;goto B771f11;
case 0x771f16:goto L771f16;
case 0x771f19:c.instructions+=2;goto B771f19;
case 0x771f1c:c.instructions+=1;goto B771f1c;
case 0x771f21:goto L771f21;
case 0x771f24:c.instructions+=2;goto B771f24;
case 0x771f27:c.instructions+=1;goto B771f27;
case 0x771f2c:goto L771f2c;
case 0x771f2f:c.instructions+=2;goto B771f2f;
case 0x771f32:c.instructions+=1;goto B771f32;
case 0x771f37:goto L771f37;
case 0x771f3c:c.instructions+=1;goto B771f3c;
case 0x771f50:goto L771f50;
case 0x771f52:c.instructions+=4;goto B771f52;
case 0x771f57:c.instructions+=3;goto B771f57;
case 0x771f5d:c.instructions+=2;goto B771f5d;
case 0x771f5e:c.instructions+=1;goto B771f5e;
case 0x771f63:goto L771f63;
case 0x771f66:c.instructions+=1;goto B771f66;
case 0x771f67:goto L771f67;
case 0x771f6c:c.instructions+=1;goto B771f6c;
case 0x771f80:goto L771f80;
case 0x771f83:c.instructions+=2;goto B771f83;
case 0x771f86:c.instructions+=1;goto B771f86;
case 0x771f8b:goto L771f8b;
case 0x771f90:c.instructions+=1;goto B771f90;
case 0x771fa0:goto L771fa0;
case 0x771fa2:c.instructions+=4;goto B771fa2;
case 0x771fa7:c.instructions+=3;goto B771fa7;
case 0x771faa:c.instructions+=2;goto B771faa;
case 0x771fab:c.instructions+=1;goto B771fab;
case 0x771fb0:goto L771fb0;
case 0x771fb3:c.instructions+=1;goto B771fb3;
case 0x771fb4:goto L771fb4;
case 0x771fb9:c.instructions+=1;goto B771fb9;
case 0x771fc0:goto L771fc0;
case 0x771fc6:c.instructions+=1;goto B771fc6;
case 0x771fcb:goto L771fcb;
case 0x771fd0:c.instructions+=1;goto B771fd0;
case 0x771fe0:goto L771fe0;
case 0x771fe6:c.instructions+=1;goto B771fe6;
case 0x771feb:goto L771feb;
case 0x771ff0:c.instructions+=1;goto B771ff0;
default:missing_instruction(c.pc);}
B771000:L771000:{c.instructions+=4;NFSU2_TR(0x771000);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B771003:{NFSU2_TR(0x771003);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771008:{NFSU2_TR(0x771008);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771009:{NFSU2_TR(0x771009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77100eull));
TAIL_STATIC(0x75e02bu,75e);
}
B77100e:L77100e:{c.instructions+=2;NFSU2_TR(0x77100e);
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
B771011:{NFSU2_TR(0x771011);
{goto L77101a;}
}
B771013:L771013:{c.instructions+=1;NFSU2_TR(0x771013);
s1(0x8b88b0,u8(0x0ull));
}
B77101a:L77101a:{c.instructions+=3;NFSU2_TR(0x77101a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77101b:{NFSU2_TR(0x77101b);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771020:{NFSU2_TR(0x771020);
u8 U[4];
__builtin_memmove((U+0),gp(0x81cafc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771026ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B771026:L771026:{c.instructions+=5;NFSU2_TR(0x771026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771027:{NFSU2_TR(0x771027);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771028:{NFSU2_TR(0x771028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B771029:{NFSU2_TR(0x771029);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B77102a:{NFSU2_TR(0x77102a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77102b:L77102b:{c.instructions+=6;NFSU2_TR(0x77102b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77102c:{NFSU2_TR(0x77102c);
__builtin_memmove((R+20),(R+16),4);
}
B77102e:{NFSU2_TR(0x77102e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B771032:{NFSU2_TR(0x771032);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771033:{NFSU2_TR(0x771033);
w4(R+24,u32(0x8b90b0ull));
}
B771038:{NFSU2_TR(0x771038);
if(r1(R+518)){{goto L771051;}}
}
B77103a:L77103a:{c.instructions+=6;NFSU2_TR(0x77103a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B77103d:{NFSU2_TR(0x77103d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77103e:{NFSU2_TR(0x77103e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B771041:{NFSU2_TR(0x771041);
u8 U[4];
w4(U+0,u32(0x800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771046:{NFSU2_TR(0x771046);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771047:{NFSU2_TR(0x771047);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77104cull));
TAIL_STATIC(0x75e02bu,75e);
}
B77104c:L77104c:{c.instructions+=2;NFSU2_TR(0x77104c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B77104f:{NFSU2_TR(0x77104f);
{goto L771058;}
}
B771051:L771051:{c.instructions+=1;NFSU2_TR(0x771051);
s1(0x8b90b0,u8(0x0ull));
}
B771058:L771058:{c.instructions+=4;NFSU2_TR(0x771058);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771059:{NFSU2_TR(0x771059);
u8 U[4];
w4(U+0,u32(0x7dd638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77105e:{NFSU2_TR(0x77105e);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771060:{NFSU2_TR(0x771060);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771065ull));
{goto L771082;}
}
B771065:L771065:{c.instructions+=4;NFSU2_TR(0x771065);
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
B771068:{NFSU2_TR(0x771068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B771069:{NFSU2_TR(0x771069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B77106a:{NFSU2_TR(0x77106a);
TAIL_STATIC(0x770fdbu,770);
}
B77106f:L77106f:{c.instructions+=7;NFSU2_TR(0x77106f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771070:{NFSU2_TR(0x771070);
__builtin_memmove((R+20),(R+16),4);
}
B771072:{NFSU2_TR(0x771072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771075:{NFSU2_TR(0x771075);
__builtin_memmove((R+0),gp(0x81cafc),4);
}
B77107a:{NFSU2_TR(0x77107a);
__builtin_memmove(gp(0x81cafc),(R+4),4);
}
B771080:{NFSU2_TR(0x771080);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B771081:{NFSU2_TR(0x771081);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771082:L771082:{c.instructions+=7;NFSU2_TR(0x771082);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771083:{NFSU2_TR(0x771083);
__builtin_memmove((R+20),(R+16),4);
}
B771085:{NFSU2_TR(0x771085);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B771088:{NFSU2_TR(0x771088);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771089:{NFSU2_TR(0x771089);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B77108c:{NFSU2_TR(0x77108c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B77108f:{NFSU2_TR(0x77108f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771094ull));
TAIL_STATIC(0x6fbc1du,6fb);
}
B771094:L771094:{c.instructions+=3;NFSU2_TR(0x771094);
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
B771097:{NFSU2_TR(0x771097);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B771098:{NFSU2_TR(0x771098);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771099:L771099:{c.instructions+=7;NFSU2_TR(0x771099);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77109a:{NFSU2_TR(0x77109a);
__builtin_memmove((R+20),(R+16),4);
}
B77109c:{NFSU2_TR(0x77109c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B77109f:{NFSU2_TR(0x77109f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710a0:{NFSU2_TR(0x7710a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7710a3:{NFSU2_TR(0x7710a3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710a5:{NFSU2_TR(0x7710a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7710aaull));
TAIL_STATIC(0x6fbc1du,6fb);
}
B7710aa:L7710aa:{c.instructions+=3;NFSU2_TR(0x7710aa);
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
B7710ad:{NFSU2_TR(0x7710ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7710ae:{NFSU2_TR(0x7710ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7710af:L7710af:{c.instructions+=7;NFSU2_TR(0x7710af);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710b0:{NFSU2_TR(0x7710b0);
__builtin_memmove((R+20),(R+16),4);
}
B7710b2:{NFSU2_TR(0x7710b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B7710b5:{NFSU2_TR(0x7710b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710b6:{NFSU2_TR(0x7710b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7710b9:{NFSU2_TR(0x7710b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7710bc:{NFSU2_TR(0x7710bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7710c1ull));
TAIL_STATIC(0x6fbc7bu,6fb);
}
B7710c1:L7710c1:{c.instructions+=3;NFSU2_TR(0x7710c1);
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
B7710c4:{NFSU2_TR(0x7710c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7710c5:{NFSU2_TR(0x7710c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7710c6:L7710c6:{c.instructions+=7;NFSU2_TR(0x7710c6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710c7:{NFSU2_TR(0x7710c7);
__builtin_memmove((R+20),(R+16),4);
}
B7710c9:{NFSU2_TR(0x7710c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B7710cc:{NFSU2_TR(0x7710cc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710cd:{NFSU2_TR(0x7710cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B7710d0:{NFSU2_TR(0x7710d0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7710d2:{NFSU2_TR(0x7710d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7710d7ull));
TAIL_STATIC(0x6fbc7bu,6fb);
}
B7710d7:L7710d7:{c.instructions+=3;NFSU2_TR(0x7710d7);
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
B7710da:{NFSU2_TR(0x7710da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B7710db:{NFSU2_TR(0x7710db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77121c:L77121c:{c.instructions+=8;NFSU2_TR(0x77121c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77121f:{NFSU2_TR(0x77121f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B771221:{NFSU2_TR(0x771221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B771223:{NFSU2_TR(0x771223);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B771225:{NFSU2_TR(0x771225);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc0000005ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc0000005ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc0000005ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77122a:{NFSU2_TR(0x77122a);
__builtin_memmove((R+4),(R+518),1);
}
B77122d:{NFSU2_TR(0x77122d);
__builtin_memmove((R+0),(R+4),4);
}
B77122f:{NFSU2_TR(0x77122f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771230:L771230:{c.instructions+=4;NFSU2_TR(0x771230);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+16),(U+4),4);
}
B771233:{NFSU2_TR(0x771233);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B771235:{NFSU2_TR(0x771235);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B771239:{NFSU2_TR(0x771239);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77123eull));
TAIL_STATIC(0x760ddbu,760);
}
B77123e:L77123e:{c.instructions+=1;NFSU2_TR(0x77123e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771241:L771241:{c.instructions+=3;NFSU2_TR(0x771241);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771243:{NFSU2_TR(0x771243);
u8 U[4];
w4(U+0,u32(0x7dd658ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771248:{NFSU2_TR(0x771248);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77124dull));
TAIL_STATIC(0x760da0u,760);
}
B77124d:L77124d:{c.instructions+=4;NFSU2_TR(0x77124d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B77124f:{NFSU2_TR(0x77124f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B771252:{NFSU2_TR(0x771252);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771254:{NFSU2_TR(0x771254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771259ull));
TAIL_STATIC(0x7631f1u,763);
}
B771259:L771259:{c.instructions+=2;NFSU2_TR(0x771259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77125a:{NFSU2_TR(0x77125a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B77125d:L77125d:{c.instructions+=3;NFSU2_TR(0x77125d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B771260:{NFSU2_TR(0x771260);
u8 U[8];
__builtin_memmove((U+0),gp(0x8bb5e0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B771266:{NFSU2_TR(0x771266);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L7712c8;}}
}
B771268:L771268:{c.instructions+=4;NFSU2_TR(0x771268);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B77126d:{NFSU2_TR(0x77126d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B771270:{NFSU2_TR(0x771270);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B771272:{NFSU2_TR(0x771272);
if(r1(R+518)){{goto L7712b1;}}
}
B771274:L771274:{c.instructions+=2;NFSU2_TR(0x771274);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B771278:{NFSU2_TR(0x771278);
if(r1(R+518)){{goto L7712b1;}}
}
B77127a:L77127a:{c.instructions+=3;NFSU2_TR(0x77127a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77127b:{NFSU2_TR(0x77127b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77127c:{NFSU2_TR(0x77127c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771281ull));
TAIL_STATIC(0x75f352u,75f);
}
B771281:L771281:{c.instructions+=7;NFSU2_TR(0x771281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771282:{NFSU2_TR(0x771282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771283:{NFSU2_TR(0x771283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B77128a:{NFSU2_TR(0x77128a);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B77128f:{NFSU2_TR(0x77128f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B771292:{NFSU2_TR(0x771292);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x83ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B771296:{NFSU2_TR(0x771296);
if(r1(R+518)){{goto L7712a8;}}
}
B771298:L771298:{c.instructions+=2;NFSU2_TR(0x771298);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B77129c:{NFSU2_TR(0x77129c);
if(r1(R+518)){{goto L7712a8;}}
}
B77129e:L77129e:{c.instructions+=2;NFSU2_TR(0x77129e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77129f:{NFSU2_TR(0x77129f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7712a4ull));
TAIL_STATIC(0x75d30du,75d);
}
B7712a4:L7712a4:{c.instructions+=2;NFSU2_TR(0x7712a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7712a5:{NFSU2_TR(0x7712a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7712a8:L7712a8:{c.instructions+=2;NFSU2_TR(0x7712a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B7712ac:{NFSU2_TR(0x7712ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7712b1ull));
{goto L7712b7;}
}
B7712b1:L7712b1:{c.instructions+=2;NFSU2_TR(0x7712b1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B7712b2:{NFSU2_TR(0x7712b2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77125du);}goto L77125d;}
}
B7712b4:L7712b4:{c.instructions+=1;NFSU2_TR(0x7712b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B7712b7:L7712b7:{c.instructions+=4;NFSU2_TR(0x7712b7);
__builtin_memmove((R+0),gp(0x8ba5c0),4);
}
B7712bc:{NFSU2_TR(0x7712bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B7712bf:{NFSU2_TR(0x7712bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7712c0:{NFSU2_TR(0x7712c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7712c5ull));
TAIL_STATIC(0x75f3a4u,75f);
}
B7712c5:L7712c5:{c.instructions+=3;NFSU2_TR(0x7712c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7712c6:{NFSU2_TR(0x7712c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7712c7:{NFSU2_TR(0x7712c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7712c8:L7712c8:{c.instructions+=2;NFSU2_TR(0x7712c8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
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
B7712cc:{NFSU2_TR(0x7712cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7712d1ull));
{goto L7712da;}
}
B7712d1:L7712d1:{c.instructions+=2;NFSU2_TR(0x7712d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7712d4:{NFSU2_TR(0x7712d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7712d9ull));
TAIL_STATIC(0x760ddbu,760);
}
B7712d9:L7712d9:{c.instructions+=1;NFSU2_TR(0x7712d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7712da:L7712da:{c.instructions+=2;NFSU2_TR(0x7712da);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7712dc:{NFSU2_TR(0x7712dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7712e1ull));
TAIL_STATIC(0x76315du,763);
}
B7712e1:L7712e1:{c.instructions+=2;NFSU2_TR(0x7712e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7712e2:{NFSU2_TR(0x7712e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7712f0:L7712f0:{c.instructions+=2;NFSU2_TR(0x7712f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7712f3:{NFSU2_TR(0x7712f3);
TAIL_STATIC(0x5768e0u,576);
}
B7712f8:L7712f8:{c.instructions+=3;NFSU2_TR(0x7712f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7712fb:{NFSU2_TR(0x7712fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B7712fe:{NFSU2_TR(0x7712fe);
TAIL_STATIC(0x5768e0u,576);
}
B771303:L771303:{c.instructions+=2;NFSU2_TR(0x771303);
w4(R+0,u32(0x7dd7f8ull));
}
B771308:{NFSU2_TR(0x771308);
TAIL_STATIC(0x75bfd2u,75b);
}
B771310:L771310:{c.instructions+=2;NFSU2_TR(0x771310);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771316:{NFSU2_TR(0x771316);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B77131b:L77131b:{c.instructions+=2;NFSU2_TR(0x77131b);
w4(R+0,u32(0x7dd920ull));
}
B771320:{NFSU2_TR(0x771320);
TAIL_STATIC(0x75bfd2u,75b);
}
B771330:L771330:{c.instructions+=3;NFSU2_TR(0x771330);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771333:{NFSU2_TR(0x771333);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B771336:{NFSU2_TR(0x771336);
TAIL_STATIC(0x576a60u,576);
}
B77133b:L77133b:{c.instructions+=2;NFSU2_TR(0x77133b);
w4(R+0,u32(0x7dd81cull));
}
B771340:{NFSU2_TR(0x771340);
TAIL_STATIC(0x75bfd2u,75b);
}
B771350:L771350:{c.instructions+=3;NFSU2_TR(0x771350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771353:{NFSU2_TR(0x771353);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B771356:{NFSU2_TR(0x771356);
TAIL_STATIC(0x576a60u,576);
}
B77135b:L77135b:{c.instructions+=5;NFSU2_TR(0x77135b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77135d:{NFSU2_TR(0x77135d);
u8 U[4];
w4(U+0,u32(0x7845d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771362:{NFSU2_TR(0x771362);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771365:{NFSU2_TR(0x771365);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771366:{NFSU2_TR(0x771366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77136bull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77136b:L77136b:{c.instructions+=2;NFSU2_TR(0x77136b);
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
B77136e:{NFSU2_TR(0x77136e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77136f:L77136f:{c.instructions+=2;NFSU2_TR(0x77136f);
w4(R+0,u32(0x7dd848ull));
}
B771374:{NFSU2_TR(0x771374);
TAIL_STATIC(0x75bfd2u,75b);
}
B771380:L771380:{c.instructions+=3;NFSU2_TR(0x771380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771383:{NFSU2_TR(0x771383);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B771386:{NFSU2_TR(0x771386);
TAIL_STATIC(0x576a60u,576);
}
B77138b:L77138b:{c.instructions+=2;NFSU2_TR(0x77138b);
w4(R+0,u32(0x7dd86cull));
}
B771390:{NFSU2_TR(0x771390);
TAIL_STATIC(0x75bfd2u,75b);
}
B7713a0:L7713a0:{c.instructions+=2;NFSU2_TR(0x7713a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7713a3:{NFSU2_TR(0x7713a3);
TAIL_STATIC(0x409c50u,409);
}
B7713a8:L7713a8:{c.instructions+=2;NFSU2_TR(0x7713a8);
w4(R+0,u32(0x7dd890ull));
}
B7713ad:{NFSU2_TR(0x7713ad);
TAIL_STATIC(0x75bfd2u,75b);
}
B7713c0:L7713c0:{c.instructions+=2;NFSU2_TR(0x7713c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7713c3:{NFSU2_TR(0x7713c3);
TAIL_STATIC(0x4047e0u,404);
}
B7713c8:L7713c8:{c.instructions+=2;NFSU2_TR(0x7713c8);
w4(R+0,u32(0x7dd8b4ull));
}
B7713cd:{NFSU2_TR(0x7713cd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7713e0:L7713e0:{c.instructions+=3;NFSU2_TR(0x7713e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7713e3:{NFSU2_TR(0x7713e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B7713e6:{NFSU2_TR(0x7713e6);
TAIL_STATIC(0x4017f0u,401);
}
B7713eb:L7713eb:{c.instructions+=2;NFSU2_TR(0x7713eb);
w4(R+0,u32(0x7dd8fcull));
}
B7713f0:{NFSU2_TR(0x7713f0);
TAIL_STATIC(0x75bfd2u,75b);
}
B771400:L771400:{c.instructions+=3;NFSU2_TR(0x771400);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771406:{NFSU2_TR(0x771406);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771407:{NFSU2_TR(0x771407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77140cull));
TAIL_STATIC(0x403580u,403);
}
B77140c:L77140c:{c.instructions+=2;NFSU2_TR(0x77140c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77140d:{NFSU2_TR(0x77140d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77140e:L77140e:{c.instructions+=2;NFSU2_TR(0x77140e);
w4(R+0,u32(0x7dd944ull));
}
B771413:{NFSU2_TR(0x771413);
TAIL_STATIC(0x75bfd2u,75b);
}
B771420:L771420:{c.instructions+=2;NFSU2_TR(0x771420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771423:{NFSU2_TR(0x771423);
TAIL_STATIC(0x4233d0u,423);
}
B771428:L771428:{c.instructions+=3;NFSU2_TR(0x771428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77142b:{NFSU2_TR(0x77142b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x280ull))));
}
B771431:{NFSU2_TR(0x771431);
TAIL_STATIC(0x40d010u,40d);
}
B771436:L771436:{c.instructions+=3;NFSU2_TR(0x771436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771439:{NFSU2_TR(0x771439);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x334ull))));
}
B77143f:{NFSU2_TR(0x77143f);
TAIL_STATIC(0x40cf90u,40c);
}
B771444:L771444:{c.instructions+=2;NFSU2_TR(0x771444);
w4(R+0,u32(0x7dd978ull));
}
B771449:{NFSU2_TR(0x771449);
TAIL_STATIC(0x75bfd2u,75b);
}
B771450:L771450:{c.instructions+=2;NFSU2_TR(0x771450);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771453:{NFSU2_TR(0x771453);
TAIL_STATIC(0x4233d0u,423);
}
B771458:L771458:{c.instructions+=2;NFSU2_TR(0x771458);
w4(R+0,u32(0x7dd99cull));
}
B77145d:{NFSU2_TR(0x77145d);
TAIL_STATIC(0x75bfd2u,75b);
}
B771470:L771470:{c.instructions+=2;NFSU2_TR(0x771470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771473:{NFSU2_TR(0x771473);
TAIL_STATIC(0x4233d0u,423);
}
B771478:L771478:{c.instructions+=3;NFSU2_TR(0x771478);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77147b:{NFSU2_TR(0x77147b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x220ull))));
}
B771481:{NFSU2_TR(0x771481);
TAIL_STATIC(0x405d00u,405);
}
B771486:L771486:{c.instructions+=2;NFSU2_TR(0x771486);
w4(R+0,u32(0x7dd9c8ull));
}
B77148b:{NFSU2_TR(0x77148b);
TAIL_STATIC(0x75bfd2u,75b);
}
B771490:L771490:{c.instructions+=2;NFSU2_TR(0x771490);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771493:{NFSU2_TR(0x771493);
TAIL_STATIC(0x402700u,402);
}
B771498:L771498:{c.instructions+=2;NFSU2_TR(0x771498);
w4(R+0,u32(0x7dd9ecull));
}
B77149d:{NFSU2_TR(0x77149d);
TAIL_STATIC(0x75bfd2u,75b);
}
B7714b0:L7714b0:{c.instructions+=3;NFSU2_TR(0x7714b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7714b3:{NFSU2_TR(0x7714b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7714b4:{NFSU2_TR(0x7714b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7714b9ull));
TAIL_STATIC(0x403580u,403);
}
B7714b9:L7714b9:{c.instructions+=2;NFSU2_TR(0x7714b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7714ba:{NFSU2_TR(0x7714ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7714bb:L7714bb:{c.instructions+=2;NFSU2_TR(0x7714bb);
w4(R+0,u32(0x7dda10ull));
}
B7714c0:{NFSU2_TR(0x7714c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7714d0:L7714d0:{c.instructions+=2;NFSU2_TR(0x7714d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7714d3:{NFSU2_TR(0x7714d3);
TAIL_STATIC(0x40fea0u,40f);
}
B7714d8:L7714d8:{c.instructions+=3;NFSU2_TR(0x7714d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7714db:{NFSU2_TR(0x7714db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x470ull))));
}
B7714e1:{NFSU2_TR(0x7714e1);
TAIL_STATIC(0x4103a0u,410);
}
B7714e6:L7714e6:{c.instructions+=2;NFSU2_TR(0x7714e6);
w4(R+0,u32(0x7ddf58ull));
}
B7714eb:{NFSU2_TR(0x7714eb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7714f0:L7714f0:{c.instructions+=2;NFSU2_TR(0x7714f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7714f3:{NFSU2_TR(0x7714f3);
TAIL_STATIC(0x4047e0u,404);
}
B7714f8:L7714f8:{c.instructions+=3;NFSU2_TR(0x7714f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7714fb:{NFSU2_TR(0x7714fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x68ull))));
}
B7714fe:{NFSU2_TR(0x7714fe);
TAIL_STATIC(0x411740u,411);
}
B771503:L771503:{c.instructions+=3;NFSU2_TR(0x771503);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771506:{NFSU2_TR(0x771506);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4b0ull))));
}
B77150c:{NFSU2_TR(0x77150c);
TAIL_STATIC(0x411740u,411);
}
B771511:L771511:{c.instructions+=2;NFSU2_TR(0x771511);
w4(R+0,u32(0x7dda44ull));
}
B771516:{NFSU2_TR(0x771516);
TAIL_STATIC(0x75bfd2u,75b);
}
B771520:L771520:{c.instructions+=3;NFSU2_TR(0x771520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771523:{NFSU2_TR(0x771523);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B771526:{NFSU2_TR(0x771526);
TAIL_STATIC(0x401800u,401);
}
B77152b:L77152b:{c.instructions+=3;NFSU2_TR(0x77152b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77152e:{NFSU2_TR(0x77152e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x900ull))));
}
B771534:{NFSU2_TR(0x771534);
TAIL_STATIC(0x413350u,413);
}
B771539:L771539:{c.instructions+=2;NFSU2_TR(0x771539);
w4(R+0,u32(0x7dda70ull));
}
B77153e:{NFSU2_TR(0x77153e);
TAIL_STATIC(0x75bfd2u,75b);
}
B771550:L771550:{c.instructions+=7;NFSU2_TR(0x771550);
u8 U[4];
w4(U+0,u32(0x401800ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771555:{NFSU2_TR(0x771555);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771557:{NFSU2_TR(0x771557);
u8 U[4];
w4(U+0,u32(0x900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77155c:{NFSU2_TR(0x77155c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77155f:{NFSU2_TR(0x77155f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B771562:{NFSU2_TR(0x771562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771563:{NFSU2_TR(0x771563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771568ull));
TAIL_STATIC(0x75c401u,75c);
}
B771568:L771568:{c.instructions+=1;NFSU2_TR(0x771568);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771569:L771569:{c.instructions+=2;NFSU2_TR(0x771569);
w4(R+0,u32(0x7dd8d8ull));
}
B77156e:{NFSU2_TR(0x77156e);
TAIL_STATIC(0x75bfd2u,75b);
}
B771580:L771580:{c.instructions+=6;NFSU2_TR(0x771580);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771585:{NFSU2_TR(0x771585);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771587:{NFSU2_TR(0x771587);
u8 U[4];
w4(U+0,u32(0xc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77158c:{NFSU2_TR(0x77158c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffb70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B771592:{NFSU2_TR(0x771592);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771593:{NFSU2_TR(0x771593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771598ull));
TAIL_STATIC(0x75c401u,75c);
}
B771598:L771598:{c.instructions+=1;NFSU2_TR(0x771598);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771599:L771599:{c.instructions+=2;NFSU2_TR(0x771599);
w4(R+0,u32(0x7dda94ull));
}
B77159e:{NFSU2_TR(0x77159e);
TAIL_STATIC(0x75bfd2u,75b);
}
B7715b0:L7715b0:{c.instructions+=2;NFSU2_TR(0x7715b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7715b3:{NFSU2_TR(0x7715b3);
TAIL_STATIC(0x4047e0u,404);
}
B7715b8:L7715b8:{c.instructions+=3;NFSU2_TR(0x7715b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7715bb:{NFSU2_TR(0x7715bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B7715be:{NFSU2_TR(0x7715be);
TAIL_STATIC(0x4138b0u,413);
}
B7715c3:L7715c3:{c.instructions+=2;NFSU2_TR(0x7715c3);
w4(R+0,u32(0x7ddac0ull));
}
B7715c8:{NFSU2_TR(0x7715c8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7715d0:L7715d0:{c.instructions+=2;NFSU2_TR(0x7715d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7715d3:{NFSU2_TR(0x7715d3);
TAIL_STATIC(0x402700u,402);
}
B7715d8:L7715d8:{c.instructions+=3;NFSU2_TR(0x7715d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7715db:{NFSU2_TR(0x7715db);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x31cull))));
}
B7715e1:{NFSU2_TR(0x7715e1);
TAIL_STATIC(0x411740u,411);
}
B7715e6:L7715e6:{c.instructions+=2;NFSU2_TR(0x7715e6);
w4(R+0,u32(0x7ddaecull));
}
B7715eb:{NFSU2_TR(0x7715eb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7715f0:L7715f0:{c.instructions+=2;NFSU2_TR(0x7715f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7715f3:{NFSU2_TR(0x7715f3);
TAIL_STATIC(0x41be00u,41b);
}
B7715f8:L7715f8:{c.instructions+=2;NFSU2_TR(0x7715f8);
w4(R+0,u32(0x7ddb10ull));
}
B7715fd:{NFSU2_TR(0x7715fd);
TAIL_STATIC(0x75bfd2u,75b);
}
B771610:L771610:{c.instructions+=3;NFSU2_TR(0x771610);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771613:{NFSU2_TR(0x771613);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B771616:{NFSU2_TR(0x771616);
TAIL_STATIC(0x401800u,401);
}
B77161b:L77161b:{c.instructions+=3;NFSU2_TR(0x77161b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77161e:{NFSU2_TR(0x77161e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x900ull))));
}
B771624:{NFSU2_TR(0x771624);
TAIL_STATIC(0x413350u,413);
}
B771629:L771629:{c.instructions+=7;NFSU2_TR(0x771629);
u8 U[4];
w4(U+0,u32(0x50f7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77162e:{NFSU2_TR(0x77162e);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771630:{NFSU2_TR(0x771630);
u8 U[4];
w4(U+0,u32(0x920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771635:{NFSU2_TR(0x771635);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771638:{NFSU2_TR(0x771638);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x910ull))));
}
B77163d:{NFSU2_TR(0x77163d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77163e:{NFSU2_TR(0x77163e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771643ull));
TAIL_STATIC(0x75c401u,75c);
}
B771643:L771643:{c.instructions+=1;NFSU2_TR(0x771643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771644:L771644:{c.instructions+=2;NFSU2_TR(0x771644);
w4(R+0,u32(0x7ddb44ull));
}
B771649:{NFSU2_TR(0x771649);
TAIL_STATIC(0x75bfd2u,75b);
}
B771650:L771650:{c.instructions+=2;NFSU2_TR(0x771650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771653:{NFSU2_TR(0x771653);
TAIL_STATIC(0x4047e0u,404);
}
B771658:L771658:{c.instructions+=3;NFSU2_TR(0x771658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77165b:{NFSU2_TR(0x77165b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B77165e:{NFSU2_TR(0x77165e);
TAIL_STATIC(0x4138b0u,413);
}
B771663:L771663:{c.instructions+=5;NFSU2_TR(0x771663);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771665:{NFSU2_TR(0x771665);
u8 U[4];
w4(U+0,u32(0x7854fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77166a:{NFSU2_TR(0x77166a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77166d:{NFSU2_TR(0x77166d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77166e:{NFSU2_TR(0x77166e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771673ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771673:L771673:{c.instructions+=2;NFSU2_TR(0x771673);
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
B771676:{NFSU2_TR(0x771676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771677:L771677:{c.instructions+=5;NFSU2_TR(0x771677);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771679:{NFSU2_TR(0x771679);
u8 U[4];
w4(U+0,u32(0x7854e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77167e:{NFSU2_TR(0x77167e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771681:{NFSU2_TR(0x771681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771682:{NFSU2_TR(0x771682);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771687ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771687:L771687:{c.instructions+=2;NFSU2_TR(0x771687);
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
B77168a:{NFSU2_TR(0x77168a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77168b:L77168b:{c.instructions+=2;NFSU2_TR(0x77168b);
w4(R+0,u32(0x7ddb80ull));
}
B771690:{NFSU2_TR(0x771690);
TAIL_STATIC(0x75bfd2u,75b);
}
B7716a0:L7716a0:{c.instructions+=2;NFSU2_TR(0x7716a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7716a3:{NFSU2_TR(0x7716a3);
TAIL_STATIC(0x41e480u,41e);
}
B7716a8:L7716a8:{c.instructions+=2;NFSU2_TR(0x7716a8);
w4(R+0,u32(0x7ddba4ull));
}
B7716ad:{NFSU2_TR(0x7716ad);
TAIL_STATIC(0x75bfd2u,75b);
}
B7716c0:L7716c0:{c.instructions+=2;NFSU2_TR(0x7716c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7716c3:{NFSU2_TR(0x7716c3);
TAIL_STATIC(0x425860u,425);
}
B7716c8:L7716c8:{c.instructions+=2;NFSU2_TR(0x7716c8);
w4(R+0,u32(0x7ddbc8ull));
}
B7716cd:{NFSU2_TR(0x7716cd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7716e0:L7716e0:{c.instructions+=2;NFSU2_TR(0x7716e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7716e3:{NFSU2_TR(0x7716e3);
TAIL_STATIC(0x425860u,425);
}
B7716e8:L7716e8:{c.instructions+=3;NFSU2_TR(0x7716e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7716eb:{NFSU2_TR(0x7716eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x210ull))));
}
B7716f1:{NFSU2_TR(0x7716f1);
TAIL_STATIC(0x41bc30u,41b);
}
B7716f6:L7716f6:{c.instructions+=2;NFSU2_TR(0x7716f6);
w4(R+0,u32(0x7ddbf4ull));
}
B7716fb:{NFSU2_TR(0x7716fb);
TAIL_STATIC(0x75bfd2u,75b);
}
B771700:L771700:{c.instructions+=2;NFSU2_TR(0x771700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771703:{NFSU2_TR(0x771703);
TAIL_STATIC(0x4233d0u,423);
}
B771708:L771708:{c.instructions+=3;NFSU2_TR(0x771708);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77170b:{NFSU2_TR(0x77170b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x280ull))));
}
B771711:{NFSU2_TR(0x771711);
TAIL_STATIC(0x40d010u,40d);
}
B771716:L771716:{c.instructions+=3;NFSU2_TR(0x771716);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771719:{NFSU2_TR(0x771719);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x334ull))));
}
B77171f:{NFSU2_TR(0x77171f);
TAIL_STATIC(0x40cf90u,40c);
}
B771724:L771724:{c.instructions+=3;NFSU2_TR(0x771724);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771727:{NFSU2_TR(0x771727);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771728:{NFSU2_TR(0x771728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77172dull));
TAIL_STATIC(0x403580u,403);
}
B77172d:L77172d:{c.instructions+=2;NFSU2_TR(0x77172d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77172e:{NFSU2_TR(0x77172e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77172f:L77172f:{c.instructions+=5;NFSU2_TR(0x77172f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771731:{NFSU2_TR(0x771731);
u8 U[4];
w4(U+0,u32(0x785b1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771736:{NFSU2_TR(0x771736);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771739:{NFSU2_TR(0x771739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77173a:{NFSU2_TR(0x77173a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77173full));
TAIL_STATIC(0x6d7120u,6d7);
}
B77173f:L77173f:{c.instructions+=2;NFSU2_TR(0x77173f);
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
B771742:{NFSU2_TR(0x771742);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771743:L771743:{c.instructions+=5;NFSU2_TR(0x771743);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771745:{NFSU2_TR(0x771745);
u8 U[4];
w4(U+0,u32(0x785b08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77174a:{NFSU2_TR(0x77174a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77174d:{NFSU2_TR(0x77174d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77174e:{NFSU2_TR(0x77174e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771753ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771753:L771753:{c.instructions+=2;NFSU2_TR(0x771753);
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
B771756:{NFSU2_TR(0x771756);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771757:L771757:{c.instructions+=5;NFSU2_TR(0x771757);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771759:{NFSU2_TR(0x771759);
u8 U[4];
w4(U+0,u32(0x785af4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77175e:{NFSU2_TR(0x77175e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771761:{NFSU2_TR(0x771761);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771762:{NFSU2_TR(0x771762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771767ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771767:L771767:{c.instructions+=2;NFSU2_TR(0x771767);
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
B77176a:{NFSU2_TR(0x77176a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77176b:L77176b:{c.instructions+=5;NFSU2_TR(0x77176b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77176d:{NFSU2_TR(0x77176d);
u8 U[4];
w4(U+0,u32(0x785ae0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771772:{NFSU2_TR(0x771772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771775:{NFSU2_TR(0x771775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771776:{NFSU2_TR(0x771776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77177bull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77177b:L77177b:{c.instructions+=2;NFSU2_TR(0x77177b);
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
B77177e:{NFSU2_TR(0x77177e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77177f:L77177f:{c.instructions+=5;NFSU2_TR(0x77177f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771781:{NFSU2_TR(0x771781);
u8 U[4];
w4(U+0,u32(0x785ac4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771786:{NFSU2_TR(0x771786);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771789:{NFSU2_TR(0x771789);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77178a:{NFSU2_TR(0x77178a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77178full));
TAIL_STATIC(0x6d7120u,6d7);
}
B77178f:L77178f:{c.instructions+=2;NFSU2_TR(0x77178f);
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
B771792:{NFSU2_TR(0x771792);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771793:L771793:{c.instructions+=5;NFSU2_TR(0x771793);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771795:{NFSU2_TR(0x771795);
u8 U[4];
w4(U+0,u32(0x785aa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77179a:{NFSU2_TR(0x77179a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77179d:{NFSU2_TR(0x77179d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77179e:{NFSU2_TR(0x77179e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7717a3ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7717a3:L7717a3:{c.instructions+=2;NFSU2_TR(0x7717a3);
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
B7717a6:{NFSU2_TR(0x7717a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7717a7:L7717a7:{c.instructions+=2;NFSU2_TR(0x7717a7);
w4(R+0,u32(0x7ddc60ull));
}
B7717ac:{NFSU2_TR(0x7717ac);
TAIL_STATIC(0x75bfd2u,75b);
}
B7717c0:L7717c0:{c.instructions+=2;NFSU2_TR(0x7717c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7717c3:{NFSU2_TR(0x7717c3);
TAIL_STATIC(0x4233d0u,423);
}
B7717c8:L7717c8:{c.instructions+=3;NFSU2_TR(0x7717c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7717cb:{NFSU2_TR(0x7717cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7717cc:{NFSU2_TR(0x7717cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7717d1ull));
TAIL_STATIC(0x403580u,403);
}
B7717d1:L7717d1:{c.instructions+=2;NFSU2_TR(0x7717d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7717d2:{NFSU2_TR(0x7717d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7717d3:L7717d3:{c.instructions+=3;NFSU2_TR(0x7717d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7717d6:{NFSU2_TR(0x7717d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7717d7:{NFSU2_TR(0x7717d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7717dcull));
TAIL_STATIC(0x403580u,403);
}
B7717dc:L7717dc:{c.instructions+=2;NFSU2_TR(0x7717dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7717dd:{NFSU2_TR(0x7717dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7717de:L7717de:{c.instructions+=3;NFSU2_TR(0x7717de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7717e1:{NFSU2_TR(0x7717e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7717e2:{NFSU2_TR(0x7717e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7717e7ull));
TAIL_STATIC(0x403580u,403);
}
B7717e7:L7717e7:{c.instructions+=2;NFSU2_TR(0x7717e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7717e8:{NFSU2_TR(0x7717e8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7717e9:L7717e9:{c.instructions+=3;NFSU2_TR(0x7717e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7717ec:{NFSU2_TR(0x7717ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7717ed:{NFSU2_TR(0x7717ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7717f2ull));
TAIL_STATIC(0x403580u,403);
}
B7717f2:L7717f2:{c.instructions+=2;NFSU2_TR(0x7717f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7717f3:{NFSU2_TR(0x7717f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7717f4:L7717f4:{c.instructions+=2;NFSU2_TR(0x7717f4);
w4(R+0,u32(0x7ddca4ull));
}
B7717f9:{NFSU2_TR(0x7717f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B771800:L771800:{c.instructions+=2;NFSU2_TR(0x771800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771803:{NFSU2_TR(0x771803);
TAIL_STATIC(0x41be00u,41b);
}
B771808:L771808:{c.instructions+=5;NFSU2_TR(0x771808);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77180a:{NFSU2_TR(0x77180a);
u8 U[4];
w4(U+0,u32(0x785b38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77180f:{NFSU2_TR(0x77180f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771812:{NFSU2_TR(0x771812);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771813:{NFSU2_TR(0x771813);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771818ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771818:L771818:{c.instructions+=2;NFSU2_TR(0x771818);
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
B77181b:{NFSU2_TR(0x77181b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77181c:L77181c:{c.instructions+=5;NFSU2_TR(0x77181c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77181e:{NFSU2_TR(0x77181e);
u8 U[4];
w4(U+0,u32(0x7850dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771823:{NFSU2_TR(0x771823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771826:{NFSU2_TR(0x771826);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771827:{NFSU2_TR(0x771827);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77182cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77182c:L77182c:{c.instructions+=2;NFSU2_TR(0x77182c);
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
B77182f:{NFSU2_TR(0x77182f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771830:L771830:{c.instructions+=5;NFSU2_TR(0x771830);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771832:{NFSU2_TR(0x771832);
u8 U[4];
w4(U+0,u32(0x785b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771837:{NFSU2_TR(0x771837);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77183a:{NFSU2_TR(0x77183a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77183b:{NFSU2_TR(0x77183b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771840ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771840:L771840:{c.instructions+=2;NFSU2_TR(0x771840);
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
B771843:{NFSU2_TR(0x771843);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771844:L771844:{c.instructions+=2;NFSU2_TR(0x771844);
w4(R+0,u32(0x7ddce0ull));
}
B771849:{NFSU2_TR(0x771849);
TAIL_STATIC(0x75bfd2u,75b);
}
B771850:L771850:{c.instructions+=3;NFSU2_TR(0x771850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771853:{NFSU2_TR(0x771853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771854:{NFSU2_TR(0x771854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771859ull));
TAIL_STATIC(0x4019e0u,401);
}
B771859:L771859:{c.instructions+=2;NFSU2_TR(0x771859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77185a:{NFSU2_TR(0x77185a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77185b:L77185b:{c.instructions+=3;NFSU2_TR(0x77185b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77185e:{NFSU2_TR(0x77185e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77185f:{NFSU2_TR(0x77185f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771864ull));
TAIL_STATIC(0x4019e0u,401);
}
B771864:L771864:{c.instructions+=2;NFSU2_TR(0x771864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771865:{NFSU2_TR(0x771865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771866:L771866:{c.instructions+=3;NFSU2_TR(0x771866);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771869:{NFSU2_TR(0x771869);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77186a:{NFSU2_TR(0x77186a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77186full));
TAIL_STATIC(0x4019e0u,401);
}
B77186f:L77186f:{c.instructions+=2;NFSU2_TR(0x77186f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771870:{NFSU2_TR(0x771870);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771871:L771871:{c.instructions+=3;NFSU2_TR(0x771871);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771874:{NFSU2_TR(0x771874);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771875:{NFSU2_TR(0x771875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77187aull));
TAIL_STATIC(0x4019e0u,401);
}
B77187a:L77187a:{c.instructions+=2;NFSU2_TR(0x77187a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77187b:{NFSU2_TR(0x77187b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77187c:L77187c:{c.instructions+=3;NFSU2_TR(0x77187c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77187f:{NFSU2_TR(0x77187f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771880:{NFSU2_TR(0x771880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771885ull));
TAIL_STATIC(0x4019e0u,401);
}
B771885:L771885:{c.instructions+=2;NFSU2_TR(0x771885);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771886:{NFSU2_TR(0x771886);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771887:L771887:{c.instructions+=3;NFSU2_TR(0x771887);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77188a:{NFSU2_TR(0x77188a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77188b:{NFSU2_TR(0x77188b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771890ull));
TAIL_STATIC(0x4019e0u,401);
}
B771890:L771890:{c.instructions+=2;NFSU2_TR(0x771890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771891:{NFSU2_TR(0x771891);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771892:L771892:{c.instructions+=3;NFSU2_TR(0x771892);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771895:{NFSU2_TR(0x771895);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771896:{NFSU2_TR(0x771896);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77189bull));
TAIL_STATIC(0x4019e0u,401);
}
B77189b:L77189b:{c.instructions+=2;NFSU2_TR(0x77189b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77189c:{NFSU2_TR(0x77189c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77189d:L77189d:{c.instructions+=3;NFSU2_TR(0x77189d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7718a0:{NFSU2_TR(0x7718a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7718a1:{NFSU2_TR(0x7718a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7718a6ull));
TAIL_STATIC(0x4019e0u,401);
}
B7718a6:L7718a6:{c.instructions+=2;NFSU2_TR(0x7718a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7718a7:{NFSU2_TR(0x7718a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7718a8:L7718a8:{c.instructions+=2;NFSU2_TR(0x7718a8);
w4(R+0,u32(0x7ddd3cull));
}
B7718ad:{NFSU2_TR(0x7718ad);
TAIL_STATIC(0x75bfd2u,75b);
}
B7718c0:L7718c0:{c.instructions+=2;NFSU2_TR(0x7718c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7718c3:{NFSU2_TR(0x7718c3);
TAIL_STATIC(0x41be00u,41b);
}
B7718c8:L7718c8:{c.instructions+=5;NFSU2_TR(0x7718c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7718ca:{NFSU2_TR(0x7718ca);
u8 U[4];
w4(U+0,u32(0x7850dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7718cf:{NFSU2_TR(0x7718cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7718d2:{NFSU2_TR(0x7718d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7718d3:{NFSU2_TR(0x7718d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7718d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7718d8:L7718d8:{c.instructions+=2;NFSU2_TR(0x7718d8);
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
B7718db:{NFSU2_TR(0x7718db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7718dc:L7718dc:{c.instructions+=2;NFSU2_TR(0x7718dc);
w4(R+0,u32(0x7ddd68ull));
}
B7718e1:{NFSU2_TR(0x7718e1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7718f0:L7718f0:{c.instructions+=2;NFSU2_TR(0x7718f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7718f3:{NFSU2_TR(0x7718f3);
TAIL_STATIC(0x4047e0u,404);
}
B7718f8:L7718f8:{c.instructions+=5;NFSU2_TR(0x7718f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7718fa:{NFSU2_TR(0x7718fa);
u8 U[4];
w4(U+0,u32(0x785b54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7718ff:{NFSU2_TR(0x7718ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771902:{NFSU2_TR(0x771902);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771903:{NFSU2_TR(0x771903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771908ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771908:L771908:{c.instructions+=2;NFSU2_TR(0x771908);
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
B77190b:{NFSU2_TR(0x77190b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77190c:L77190c:{c.instructions+=2;NFSU2_TR(0x77190c);
w4(R+0,u32(0x7ddd94ull));
}
B771911:{NFSU2_TR(0x771911);
TAIL_STATIC(0x75bfd2u,75b);
}
B771920:L771920:{c.instructions+=2;NFSU2_TR(0x771920);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771923:{NFSU2_TR(0x771923);
TAIL_STATIC(0x4047e0u,404);
}
B771928:L771928:{c.instructions+=3;NFSU2_TR(0x771928);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77192b:{NFSU2_TR(0x77192b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x68ull))));
}
B77192e:{NFSU2_TR(0x77192e);
TAIL_STATIC(0x411740u,411);
}
B771933:L771933:{c.instructions+=3;NFSU2_TR(0x771933);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771936:{NFSU2_TR(0x771936);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4b0ull))));
}
B77193c:{NFSU2_TR(0x77193c);
TAIL_STATIC(0x411740u,411);
}
B771941:L771941:{c.instructions+=5;NFSU2_TR(0x771941);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771943:{NFSU2_TR(0x771943);
u8 U[4];
w4(U+0,u32(0x784530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771948:{NFSU2_TR(0x771948);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77194b:{NFSU2_TR(0x77194b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77194c:{NFSU2_TR(0x77194c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771951ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771951:L771951:{c.instructions+=2;NFSU2_TR(0x771951);
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
B771954:{NFSU2_TR(0x771954);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771955:L771955:{c.instructions+=2;NFSU2_TR(0x771955);
w4(R+0,u32(0x7dddd0ull));
}
B77195a:{NFSU2_TR(0x77195a);
TAIL_STATIC(0x75bfd2u,75b);
}
B771960:L771960:{c.instructions+=3;NFSU2_TR(0x771960);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771963:{NFSU2_TR(0x771963);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771964:{NFSU2_TR(0x771964);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771969ull));
TAIL_STATIC(0x4019e0u,401);
}
B771969:L771969:{c.instructions+=2;NFSU2_TR(0x771969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77196a:{NFSU2_TR(0x77196a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77196b:L77196b:{c.instructions+=2;NFSU2_TR(0x77196b);
w4(R+0,u32(0x7dddf4ull));
}
B771970:{NFSU2_TR(0x771970);
TAIL_STATIC(0x75bfd2u,75b);
}
B771980:L771980:{c.instructions+=3;NFSU2_TR(0x771980);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771983:{NFSU2_TR(0x771983);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771984:{NFSU2_TR(0x771984);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771989ull));
TAIL_STATIC(0x4019e0u,401);
}
B771989:L771989:{c.instructions+=2;NFSU2_TR(0x771989);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77198a:{NFSU2_TR(0x77198a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77198b:L77198b:{c.instructions+=3;NFSU2_TR(0x77198b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77198e:{NFSU2_TR(0x77198e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77198f:{NFSU2_TR(0x77198f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771994ull));
TAIL_STATIC(0x4019e0u,401);
}
B771994:L771994:{c.instructions+=2;NFSU2_TR(0x771994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771995:{NFSU2_TR(0x771995);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771996:L771996:{c.instructions+=2;NFSU2_TR(0x771996);
w4(R+0,u32(0x7dde20ull));
}
B77199b:{NFSU2_TR(0x77199b);
TAIL_STATIC(0x75bfd2u,75b);
}
B7719a0:L7719a0:{c.instructions+=3;NFSU2_TR(0x7719a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719a3:{NFSU2_TR(0x7719a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719a4:{NFSU2_TR(0x7719a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719a9ull));
TAIL_STATIC(0x4019e0u,401);
}
B7719a9:L7719a9:{c.instructions+=2;NFSU2_TR(0x7719a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719aa:{NFSU2_TR(0x7719aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719ab:L7719ab:{c.instructions+=3;NFSU2_TR(0x7719ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719ae:{NFSU2_TR(0x7719ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719af:{NFSU2_TR(0x7719af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719b4ull));
TAIL_STATIC(0x4019e0u,401);
}
B7719b4:L7719b4:{c.instructions+=2;NFSU2_TR(0x7719b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719b5:{NFSU2_TR(0x7719b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719b6:L7719b6:{c.instructions+=2;NFSU2_TR(0x7719b6);
w4(R+0,u32(0x7dde4cull));
}
B7719bb:{NFSU2_TR(0x7719bb);
TAIL_STATIC(0x75bfd2u,75b);
}
B7719c0:L7719c0:{c.instructions+=3;NFSU2_TR(0x7719c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719c3:{NFSU2_TR(0x7719c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719c4:{NFSU2_TR(0x7719c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719c9ull));
TAIL_STATIC(0x4019e0u,401);
}
B7719c9:L7719c9:{c.instructions+=2;NFSU2_TR(0x7719c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719ca:{NFSU2_TR(0x7719ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719cb:L7719cb:{c.instructions+=3;NFSU2_TR(0x7719cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719ce:{NFSU2_TR(0x7719ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719cf:{NFSU2_TR(0x7719cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719d4ull));
TAIL_STATIC(0x4019e0u,401);
}
B7719d4:L7719d4:{c.instructions+=2;NFSU2_TR(0x7719d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719d5:{NFSU2_TR(0x7719d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719d6:L7719d6:{c.instructions+=3;NFSU2_TR(0x7719d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719d9:{NFSU2_TR(0x7719d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719da:{NFSU2_TR(0x7719da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719dfull));
TAIL_STATIC(0x4019e0u,401);
}
B7719df:L7719df:{c.instructions+=2;NFSU2_TR(0x7719df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719e0:{NFSU2_TR(0x7719e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719e1:L7719e1:{c.instructions+=3;NFSU2_TR(0x7719e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719e4:{NFSU2_TR(0x7719e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719e5:{NFSU2_TR(0x7719e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719eaull));
TAIL_STATIC(0x4019e0u,401);
}
B7719ea:L7719ea:{c.instructions+=2;NFSU2_TR(0x7719ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719eb:{NFSU2_TR(0x7719eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719ec:L7719ec:{c.instructions+=3;NFSU2_TR(0x7719ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719ef:{NFSU2_TR(0x7719ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719f0:{NFSU2_TR(0x7719f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7719f5ull));
TAIL_STATIC(0x4019e0u,401);
}
B7719f5:L7719f5:{c.instructions+=2;NFSU2_TR(0x7719f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7719f6:{NFSU2_TR(0x7719f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7719f7:L7719f7:{c.instructions+=3;NFSU2_TR(0x7719f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7719fa:{NFSU2_TR(0x7719fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7719fb:{NFSU2_TR(0x7719fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a00ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a00:L771a00:{c.instructions+=2;NFSU2_TR(0x771a00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a01:{NFSU2_TR(0x771a01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a02:L771a02:{c.instructions+=3;NFSU2_TR(0x771a02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a05:{NFSU2_TR(0x771a05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a06:{NFSU2_TR(0x771a06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a0bull));
TAIL_STATIC(0x4019e0u,401);
}
B771a0b:L771a0b:{c.instructions+=2;NFSU2_TR(0x771a0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a0c:{NFSU2_TR(0x771a0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a0d:L771a0d:{c.instructions+=3;NFSU2_TR(0x771a0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a10:{NFSU2_TR(0x771a10);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a11:{NFSU2_TR(0x771a11);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a16ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a16:L771a16:{c.instructions+=2;NFSU2_TR(0x771a16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a17:{NFSU2_TR(0x771a17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a18:L771a18:{c.instructions+=3;NFSU2_TR(0x771a18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a1b:{NFSU2_TR(0x771a1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a1c:{NFSU2_TR(0x771a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a21ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a21:L771a21:{c.instructions+=2;NFSU2_TR(0x771a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a22:{NFSU2_TR(0x771a22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a23:L771a23:{c.instructions+=3;NFSU2_TR(0x771a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a26:{NFSU2_TR(0x771a26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a27:{NFSU2_TR(0x771a27);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a2cull));
TAIL_STATIC(0x4019e0u,401);
}
B771a2c:L771a2c:{c.instructions+=2;NFSU2_TR(0x771a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a2d:{NFSU2_TR(0x771a2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a2e:L771a2e:{c.instructions+=3;NFSU2_TR(0x771a2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a31:{NFSU2_TR(0x771a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a32:{NFSU2_TR(0x771a32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a37ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a37:L771a37:{c.instructions+=2;NFSU2_TR(0x771a37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a38:{NFSU2_TR(0x771a38);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a39:L771a39:{c.instructions+=3;NFSU2_TR(0x771a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a3c:{NFSU2_TR(0x771a3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a3d:{NFSU2_TR(0x771a3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a42ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a42:L771a42:{c.instructions+=2;NFSU2_TR(0x771a42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a43:{NFSU2_TR(0x771a43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a44:L771a44:{c.instructions+=3;NFSU2_TR(0x771a44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a47:{NFSU2_TR(0x771a47);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a48:{NFSU2_TR(0x771a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a4dull));
TAIL_STATIC(0x4019e0u,401);
}
B771a4d:L771a4d:{c.instructions+=2;NFSU2_TR(0x771a4d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a4e:{NFSU2_TR(0x771a4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a4f:L771a4f:{c.instructions+=3;NFSU2_TR(0x771a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a52:{NFSU2_TR(0x771a52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a53:{NFSU2_TR(0x771a53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a58ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a58:L771a58:{c.instructions+=2;NFSU2_TR(0x771a58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a59:{NFSU2_TR(0x771a59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a5a:L771a5a:{c.instructions+=3;NFSU2_TR(0x771a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a5d:{NFSU2_TR(0x771a5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a5e:{NFSU2_TR(0x771a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a63ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a63:L771a63:{c.instructions+=2;NFSU2_TR(0x771a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a64:{NFSU2_TR(0x771a64);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a65:L771a65:{c.instructions+=3;NFSU2_TR(0x771a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a68:{NFSU2_TR(0x771a68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a69:{NFSU2_TR(0x771a69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a6eull));
TAIL_STATIC(0x4019e0u,401);
}
B771a6e:L771a6e:{c.instructions+=2;NFSU2_TR(0x771a6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a6f:{NFSU2_TR(0x771a6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a70:L771a70:{c.instructions+=3;NFSU2_TR(0x771a70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a73:{NFSU2_TR(0x771a73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a74:{NFSU2_TR(0x771a74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a79ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a79:L771a79:{c.instructions+=2;NFSU2_TR(0x771a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a7a:{NFSU2_TR(0x771a7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a7b:L771a7b:{c.instructions+=3;NFSU2_TR(0x771a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a7e:{NFSU2_TR(0x771a7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a7f:{NFSU2_TR(0x771a7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a84ull));
TAIL_STATIC(0x4019e0u,401);
}
B771a84:L771a84:{c.instructions+=2;NFSU2_TR(0x771a84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a85:{NFSU2_TR(0x771a85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a86:L771a86:{c.instructions+=3;NFSU2_TR(0x771a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771a89:{NFSU2_TR(0x771a89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771a8a:{NFSU2_TR(0x771a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771a8full));
TAIL_STATIC(0x4019e0u,401);
}
B771a8f:L771a8f:{c.instructions+=2;NFSU2_TR(0x771a8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771a90:{NFSU2_TR(0x771a90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771a91:L771a91:{c.instructions+=2;NFSU2_TR(0x771a91);
w4(R+0,u32(0x7ddf00ull));
}
B771a96:{NFSU2_TR(0x771a96);
TAIL_STATIC(0x75bfd2u,75b);
}
B771aa0:L771aa0:{c.instructions+=6;NFSU2_TR(0x771aa0);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771aa5:{NFSU2_TR(0x771aa5);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771aa7:{NFSU2_TR(0x771aa7);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771aa9:{NFSU2_TR(0x771aa9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff9b0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B771aaf:{NFSU2_TR(0x771aaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771ab0:{NFSU2_TR(0x771ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771ab5ull));
TAIL_STATIC(0x75c401u,75c);
}
B771ab5:L771ab5:{c.instructions+=1;NFSU2_TR(0x771ab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771ab6:L771ab6:{c.instructions+=6;NFSU2_TR(0x771ab6);
u8 U[4];
w4(U+0,u32(0x405330ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771abb:{NFSU2_TR(0x771abb);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771abd:{NFSU2_TR(0x771abd);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771abf:{NFSU2_TR(0x771abf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff370ull))));
__builtin_memmove((R+0),(U+0),4);
}
B771ac5:{NFSU2_TR(0x771ac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771ac6:{NFSU2_TR(0x771ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771acbull));
TAIL_STATIC(0x75c401u,75c);
}
B771acb:L771acb:{c.instructions+=1;NFSU2_TR(0x771acb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771acc:L771acc:{c.instructions+=2;NFSU2_TR(0x771acc);
w4(R+0,u32(0x7ddf2cull));
}
B771ad1:{NFSU2_TR(0x771ad1);
TAIL_STATIC(0x75bfd2u,75b);
}
B771ae0:L771ae0:{c.instructions+=2;NFSU2_TR(0x771ae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771ae3:{NFSU2_TR(0x771ae3);
TAIL_STATIC(0x41e480u,41e);
}
B771ae8:L771ae8:{c.instructions+=5;NFSU2_TR(0x771ae8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771aea:{NFSU2_TR(0x771aea);
u8 U[4];
w4(U+0,u32(0x7851a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771aef:{NFSU2_TR(0x771aef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771af2:{NFSU2_TR(0x771af2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771af3:{NFSU2_TR(0x771af3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771af8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771af8:L771af8:{c.instructions+=2;NFSU2_TR(0x771af8);
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
B771afb:{NFSU2_TR(0x771afb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771afc:L771afc:{c.instructions+=2;NFSU2_TR(0x771afc);
w4(R+0,u32(0x7ddf84ull));
}
B771b01:{NFSU2_TR(0x771b01);
TAIL_STATIC(0x75bfd2u,75b);
}
B771b10:L771b10:{c.instructions+=3;NFSU2_TR(0x771b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b16:{NFSU2_TR(0x771b16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b17:{NFSU2_TR(0x771b17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b1cull));
TAIL_STATIC(0x4019e0u,401);
}
B771b1c:L771b1c:{c.instructions+=2;NFSU2_TR(0x771b1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771b1d:{NFSU2_TR(0x771b1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b1e:L771b1e:{c.instructions+=2;NFSU2_TR(0x771b1e);
w4(R+0,u32(0x7ddfa8ull));
}
B771b23:{NFSU2_TR(0x771b23);
TAIL_STATIC(0x75bfd2u,75b);
}
B771b30:L771b30:{c.instructions+=5;NFSU2_TR(0x771b30);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b32:{NFSU2_TR(0x771b32);
u8 U[4];
w4(U+0,u32(0x785bc0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b37:{NFSU2_TR(0x771b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b3a:{NFSU2_TR(0x771b3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b3b:{NFSU2_TR(0x771b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b40ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771b40:L771b40:{c.instructions+=2;NFSU2_TR(0x771b40);
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
B771b43:{NFSU2_TR(0x771b43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b44:L771b44:{c.instructions+=2;NFSU2_TR(0x771b44);
w4(R+0,u32(0x7ddfccull));
}
B771b49:{NFSU2_TR(0x771b49);
TAIL_STATIC(0x75bfd2u,75b);
}
B771b50:L771b50:{c.instructions+=3;NFSU2_TR(0x771b50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b53:{NFSU2_TR(0x771b53);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b54:{NFSU2_TR(0x771b54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b59ull));
TAIL_STATIC(0x4019e0u,401);
}
B771b59:L771b59:{c.instructions+=2;NFSU2_TR(0x771b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771b5a:{NFSU2_TR(0x771b5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b5b:L771b5b:{c.instructions+=3;NFSU2_TR(0x771b5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b5e:{NFSU2_TR(0x771b5e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b5f:{NFSU2_TR(0x771b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b64ull));
TAIL_STATIC(0x4019e0u,401);
}
B771b64:L771b64:{c.instructions+=2;NFSU2_TR(0x771b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771b65:{NFSU2_TR(0x771b65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b66:L771b66:{c.instructions+=3;NFSU2_TR(0x771b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b69:{NFSU2_TR(0x771b69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b6a:{NFSU2_TR(0x771b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b6full));
TAIL_STATIC(0x4019e0u,401);
}
B771b6f:L771b6f:{c.instructions+=2;NFSU2_TR(0x771b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771b70:{NFSU2_TR(0x771b70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b71:L771b71:{c.instructions+=3;NFSU2_TR(0x771b71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b74:{NFSU2_TR(0x771b74);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b75:{NFSU2_TR(0x771b75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b7aull));
TAIL_STATIC(0x4019e0u,401);
}
B771b7a:L771b7a:{c.instructions+=2;NFSU2_TR(0x771b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771b7b:{NFSU2_TR(0x771b7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b7c:L771b7c:{c.instructions+=3;NFSU2_TR(0x771b7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771b7f:{NFSU2_TR(0x771b7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771b80:{NFSU2_TR(0x771b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771b85ull));
TAIL_STATIC(0x4019e0u,401);
}
B771b85:L771b85:{c.instructions+=2;NFSU2_TR(0x771b85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771b86:{NFSU2_TR(0x771b86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771b87:L771b87:{c.instructions+=2;NFSU2_TR(0x771b87);
w4(R+0,u32(0x7de04cull));
}
B771b8c:{NFSU2_TR(0x771b8c);
TAIL_STATIC(0x75bfd2u,75b);
}
B771ba0:L771ba0:{c.instructions+=3;NFSU2_TR(0x771ba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771ba3:{NFSU2_TR(0x771ba3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771ba4:{NFSU2_TR(0x771ba4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771ba9ull));
TAIL_STATIC(0x4019e0u,401);
}
B771ba9:L771ba9:{c.instructions+=2;NFSU2_TR(0x771ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771baa:{NFSU2_TR(0x771baa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771bab:L771bab:{c.instructions+=3;NFSU2_TR(0x771bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771bae:{NFSU2_TR(0x771bae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771baf:{NFSU2_TR(0x771baf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771bb4ull));
TAIL_STATIC(0x4019e0u,401);
}
B771bb4:L771bb4:{c.instructions+=2;NFSU2_TR(0x771bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771bb5:{NFSU2_TR(0x771bb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771bb6:L771bb6:{c.instructions+=3;NFSU2_TR(0x771bb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771bb9:{NFSU2_TR(0x771bb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771bba:{NFSU2_TR(0x771bba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771bbfull));
TAIL_STATIC(0x4019e0u,401);
}
B771bbf:L771bbf:{c.instructions+=2;NFSU2_TR(0x771bbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771bc0:{NFSU2_TR(0x771bc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771bc1:L771bc1:{c.instructions+=3;NFSU2_TR(0x771bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771bc4:{NFSU2_TR(0x771bc4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771bc5:{NFSU2_TR(0x771bc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771bcaull));
TAIL_STATIC(0x4019e0u,401);
}
B771bca:L771bca:{c.instructions+=2;NFSU2_TR(0x771bca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771bcb:{NFSU2_TR(0x771bcb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771bcc:L771bcc:{c.instructions+=2;NFSU2_TR(0x771bcc);
w4(R+0,u32(0x7de008ull));
}
B771bd1:{NFSU2_TR(0x771bd1);
TAIL_STATIC(0x75bfd2u,75b);
}
B771be0:L771be0:{c.instructions+=3;NFSU2_TR(0x771be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771be3:{NFSU2_TR(0x771be3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771be4:{NFSU2_TR(0x771be4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771be9ull));
TAIL_STATIC(0x4019e0u,401);
}
B771be9:L771be9:{c.instructions+=2;NFSU2_TR(0x771be9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771bea:{NFSU2_TR(0x771bea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771beb:L771beb:{c.instructions+=3;NFSU2_TR(0x771beb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771bee:{NFSU2_TR(0x771bee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771bef:{NFSU2_TR(0x771bef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771bf4ull));
TAIL_STATIC(0x4019e0u,401);
}
B771bf4:L771bf4:{c.instructions+=2;NFSU2_TR(0x771bf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771bf5:{NFSU2_TR(0x771bf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771bf6:L771bf6:{c.instructions+=3;NFSU2_TR(0x771bf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771bf9:{NFSU2_TR(0x771bf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771bfa:{NFSU2_TR(0x771bfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771bffull));
TAIL_STATIC(0x4019e0u,401);
}
B771bff:L771bff:{c.instructions+=2;NFSU2_TR(0x771bff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771c00:{NFSU2_TR(0x771c00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771c01:L771c01:{c.instructions+=2;NFSU2_TR(0x771c01);
w4(R+0,u32(0x7de080ull));
}
B771c06:{NFSU2_TR(0x771c06);
TAIL_STATIC(0x75bfd2u,75b);
}
B771c10:L771c10:{c.instructions+=2;NFSU2_TR(0x771c10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771c16:{NFSU2_TR(0x771c16);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B771c1b:L771c1b:{c.instructions+=2;NFSU2_TR(0x771c1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B771c21:{NFSU2_TR(0x771c21);
TAIL_STATIC(0x4022c0u,402);
}
B771c26:L771c26:{c.instructions+=2;NFSU2_TR(0x771c26);
w4(R+0,u32(0x7de0acull));
}
B771c2b:{NFSU2_TR(0x771c2b);
TAIL_STATIC(0x75bfd2u,75b);
}
B771c30:L771c30:{c.instructions+=2;NFSU2_TR(0x771c30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B771c36:{NFSU2_TR(0x771c36);
TAIL_STATIC(0x43e060u,43e);
}
B771c3b:L771c3b:{c.instructions+=2;NFSU2_TR(0x771c3b);
w4(R+0,u32(0x7de0d0ull));
}
B771c40:{NFSU2_TR(0x771c40);
TAIL_STATIC(0x75bfd2u,75b);
}
B771c50:L771c50:{c.instructions+=2;NFSU2_TR(0x771c50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771c53:{NFSU2_TR(0x771c53);
TAIL_STATIC(0x430600u,430);
}
B771c58:L771c58:{c.instructions+=2;NFSU2_TR(0x771c58);
w4(R+0,u32(0x7de118ull));
}
B771c5d:{NFSU2_TR(0x771c5d);
TAIL_STATIC(0x75bfd2u,75b);
}
B771c70:L771c70:{c.instructions+=3;NFSU2_TR(0x771c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771c76:{NFSU2_TR(0x771c76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771c77:{NFSU2_TR(0x771c77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771c7cull));
TAIL_STATIC(0x403580u,403);
}
B771c7c:L771c7c:{c.instructions+=2;NFSU2_TR(0x771c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771c7d:{NFSU2_TR(0x771c7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771c7e:L771c7e:{c.instructions+=2;NFSU2_TR(0x771c7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771c84:{NFSU2_TR(0x771c84);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B771c89:L771c89:{c.instructions+=2;NFSU2_TR(0x771c89);
w4(R+0,u32(0x7de144ull));
}
B771c8e:{NFSU2_TR(0x771c8e);
TAIL_STATIC(0x75bfd2u,75b);
}
B771ca0:L771ca0:{c.instructions+=3;NFSU2_TR(0x771ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771ca3:{NFSU2_TR(0x771ca3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B771ca6:{NFSU2_TR(0x771ca6);
TAIL_STATIC(0x4358e0u,435);
}
B771cab:L771cab:{c.instructions+=2;NFSU2_TR(0x771cab);
w4(R+0,u32(0x7de168ull));
}
B771cb0:{NFSU2_TR(0x771cb0);
TAIL_STATIC(0x75bfd2u,75b);
}
B771cc0:L771cc0:{c.instructions+=5;NFSU2_TR(0x771cc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771cc2:{NFSU2_TR(0x771cc2);
u8 U[4];
w4(U+0,u32(0x786338ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771cc7:{NFSU2_TR(0x771cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771cca:{NFSU2_TR(0x771cca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771ccb:{NFSU2_TR(0x771ccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771cd0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771cd0:L771cd0:{c.instructions+=2;NFSU2_TR(0x771cd0);
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
B771cd3:{NFSU2_TR(0x771cd3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771cd4:L771cd4:{c.instructions+=2;NFSU2_TR(0x771cd4);
w4(R+0,u32(0x7de1b0ull));
}
B771cd9:{NFSU2_TR(0x771cd9);
TAIL_STATIC(0x75bfd2u,75b);
}
B771ce0:L771ce0:{c.instructions+=2;NFSU2_TR(0x771ce0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771ce6:{NFSU2_TR(0x771ce6);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B771ceb:L771ceb:{c.instructions+=2;NFSU2_TR(0x771ceb);
w4(R+0,u32(0x7de0f4ull));
}
B771cf0:{NFSU2_TR(0x771cf0);
TAIL_STATIC(0x75bfd2u,75b);
}
B771d00:L771d00:{c.instructions+=2;NFSU2_TR(0x771d00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B771d03:{NFSU2_TR(0x771d03);
TAIL_STATIC(0x4def30u,4de);
}
B771d08:L771d08:{c.instructions+=2;NFSU2_TR(0x771d08);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B771d0b:{NFSU2_TR(0x771d0b);
TAIL_STATIC(0x4def30u,4de);
}
B771d10:L771d10:{c.instructions+=2;NFSU2_TR(0x771d10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B771d13:{NFSU2_TR(0x771d13);
TAIL_STATIC(0x4def30u,4de);
}
B771d18:L771d18:{c.instructions+=2;NFSU2_TR(0x771d18);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B771d1b:{NFSU2_TR(0x771d1b);
TAIL_STATIC(0x4def30u,4de);
}
B771d20:L771d20:{c.instructions+=2;NFSU2_TR(0x771d20);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771d23:{NFSU2_TR(0x771d23);
TAIL_STATIC(0x4def30u,4de);
}
B771d28:L771d28:{c.instructions+=2;NFSU2_TR(0x771d28);
w4(R+0,u32(0x7de218ull));
}
B771d2d:{NFSU2_TR(0x771d2d);
TAIL_STATIC(0x75bfd2u,75b);
}
B771d40:L771d40:{c.instructions+=3;NFSU2_TR(0x771d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771d43:{NFSU2_TR(0x771d43);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B771d46:{NFSU2_TR(0x771d46);
TAIL_STATIC(0x4835c0u,483);
}
B771d4b:L771d4b:{c.instructions+=2;NFSU2_TR(0x771d4b);
w4(R+0,u32(0x7de260ull));
}
B771d50:{NFSU2_TR(0x771d50);
TAIL_STATIC(0x75bfd2u,75b);
}
B771d60:L771d60:{c.instructions+=3;NFSU2_TR(0x771d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771d63:{NFSU2_TR(0x771d63);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B771d66:{NFSU2_TR(0x771d66);
TAIL_STATIC(0x4835c0u,483);
}
B771d6b:L771d6b:{c.instructions+=2;NFSU2_TR(0x771d6b);
w4(R+0,u32(0x7de23cull));
}
B771d70:{NFSU2_TR(0x771d70);
TAIL_STATIC(0x75bfd2u,75b);
}
B771d80:L771d80:{c.instructions+=3;NFSU2_TR(0x771d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771d83:{NFSU2_TR(0x771d83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B771d86:{NFSU2_TR(0x771d86);
TAIL_STATIC(0x4835c0u,483);
}
B771d8b:L771d8b:{c.instructions+=3;NFSU2_TR(0x771d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771d8e:{NFSU2_TR(0x771d8e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B771d91:{NFSU2_TR(0x771d91);
TAIL_STATIC(0x4358e0u,435);
}
B771d96:L771d96:{c.instructions+=3;NFSU2_TR(0x771d96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771d99:{NFSU2_TR(0x771d99);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B771d9c:{NFSU2_TR(0x771d9c);
TAIL_STATIC(0x4358e0u,435);
}
B771da1:L771da1:{c.instructions+=2;NFSU2_TR(0x771da1);
w4(R+0,u32(0x7de294ull));
}
B771da6:{NFSU2_TR(0x771da6);
TAIL_STATIC(0x75bfd2u,75b);
}
B771db0:L771db0:{c.instructions+=2;NFSU2_TR(0x771db0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771db3:{NFSU2_TR(0x771db3);
TAIL_STATIC(0x4367c0u,436);
}
B771db8:L771db8:{c.instructions+=3;NFSU2_TR(0x771db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771dbb:{NFSU2_TR(0x771dbb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B771dbe:{NFSU2_TR(0x771dbe);
TAIL_STATIC(0x437ad0u,437);
}
B771dc3:L771dc3:{c.instructions+=7;NFSU2_TR(0x771dc3);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771dc8:{NFSU2_TR(0x771dc8);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771dca:{NFSU2_TR(0x771dca);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771dcc:{NFSU2_TR(0x771dcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771dcf:{NFSU2_TR(0x771dcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
}
B771dd2:{NFSU2_TR(0x771dd2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771dd3:{NFSU2_TR(0x771dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771dd8ull));
TAIL_STATIC(0x75c401u,75c);
}
B771dd8:L771dd8:{c.instructions+=1;NFSU2_TR(0x771dd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771dd9:L771dd9:{c.instructions+=2;NFSU2_TR(0x771dd9);
w4(R+0,u32(0x7de3a4ull));
}
B771dde:{NFSU2_TR(0x771dde);
TAIL_STATIC(0x75bfd2u,75b);
}
B771df0:L771df0:{c.instructions+=3;NFSU2_TR(0x771df0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffc7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771df6:{NFSU2_TR(0x771df6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771df7:{NFSU2_TR(0x771df7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771dfcull));
TAIL_STATIC(0x403580u,403);
}
B771dfc:L771dfc:{c.instructions+=2;NFSU2_TR(0x771dfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771dfd:{NFSU2_TR(0x771dfd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771dfe:L771dfe:{c.instructions+=2;NFSU2_TR(0x771dfe);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771e04:{NFSU2_TR(0x771e04);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B771e09:L771e09:{c.instructions+=2;NFSU2_TR(0x771e09);
w4(R+0,u32(0x7de2c0ull));
}
B771e0e:{NFSU2_TR(0x771e0e);
TAIL_STATIC(0x75bfd2u,75b);
}
B771e20:L771e20:{c.instructions+=3;NFSU2_TR(0x771e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771e23:{NFSU2_TR(0x771e23);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B771e26:{NFSU2_TR(0x771e26);
TAIL_STATIC(0x4def30u,4de);
}
B771e2b:L771e2b:{c.instructions+=3;NFSU2_TR(0x771e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771e2e:{NFSU2_TR(0x771e2e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x18ull))));
}
B771e31:{NFSU2_TR(0x771e31);
TAIL_STATIC(0x4835c0u,483);
}
B771e36:L771e36:{c.instructions+=2;NFSU2_TR(0x771e36);
w4(R+0,u32(0x7de2ecull));
}
B771e3b:{NFSU2_TR(0x771e3b);
TAIL_STATIC(0x75bfd2u,75b);
}
B771e40:L771e40:{c.instructions+=5;NFSU2_TR(0x771e40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771e42:{NFSU2_TR(0x771e42);
u8 U[4];
w4(U+0,u32(0x7863acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771e47:{NFSU2_TR(0x771e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771e4a:{NFSU2_TR(0x771e4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771e4b:{NFSU2_TR(0x771e4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771e50ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771e50:L771e50:{c.instructions+=2;NFSU2_TR(0x771e50);
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
B771e53:{NFSU2_TR(0x771e53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771e54:L771e54:{c.instructions+=2;NFSU2_TR(0x771e54);
w4(R+0,u32(0x7de310ull));
}
B771e59:{NFSU2_TR(0x771e59);
TAIL_STATIC(0x75bfd2u,75b);
}
B771e60:L771e60:{c.instructions+=3;NFSU2_TR(0x771e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771e63:{NFSU2_TR(0x771e63);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B771e66:{NFSU2_TR(0x771e66);
TAIL_STATIC(0x434ee0u,434);
}
B771e6b:L771e6b:{c.instructions+=2;NFSU2_TR(0x771e6b);
w4(R+0,u32(0x7de1d4ull));
}
B771e70:{NFSU2_TR(0x771e70);
TAIL_STATIC(0x75bfd2u,75b);
}
B771e80:L771e80:{c.instructions+=3;NFSU2_TR(0x771e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771e83:{NFSU2_TR(0x771e83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771e84:{NFSU2_TR(0x771e84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771e89ull));
TAIL_STATIC(0x403580u,403);
}
B771e89:L771e89:{c.instructions+=2;NFSU2_TR(0x771e89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771e8a:{NFSU2_TR(0x771e8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771e8b:L771e8b:{c.instructions+=2;NFSU2_TR(0x771e8b);
w4(R+0,u32(0x7de334ull));
}
B771e90:{NFSU2_TR(0x771e90);
TAIL_STATIC(0x75bfd2u,75b);
}
B771ea0:L771ea0:{c.instructions+=3;NFSU2_TR(0x771ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771ea3:{NFSU2_TR(0x771ea3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B771ea6:{NFSU2_TR(0x771ea6);
TAIL_STATIC(0x4835c0u,483);
}
B771eab:L771eab:{c.instructions+=3;NFSU2_TR(0x771eab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771eae:{NFSU2_TR(0x771eae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B771eb1:{NFSU2_TR(0x771eb1);
TAIL_STATIC(0x4358e0u,435);
}
B771eb6:L771eb6:{c.instructions+=3;NFSU2_TR(0x771eb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771eb9:{NFSU2_TR(0x771eb9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B771ebc:{NFSU2_TR(0x771ebc);
TAIL_STATIC(0x4358e0u,435);
}
B771ec1:L771ec1:{c.instructions+=3;NFSU2_TR(0x771ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771ec4:{NFSU2_TR(0x771ec4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x124ull))));
}
B771eca:{NFSU2_TR(0x771eca);
TAIL_STATIC(0x432aa0u,432);
}
B771ecf:L771ecf:{c.instructions+=2;NFSU2_TR(0x771ecf);
w4(R+0,u32(0x7de370ull));
}
B771ed4:{NFSU2_TR(0x771ed4);
TAIL_STATIC(0x75bfd2u,75b);
}
B771ee0:L771ee0:{c.instructions+=5;NFSU2_TR(0x771ee0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771ee2:{NFSU2_TR(0x771ee2);
u8 U[4];
w4(U+0,u32(0x786494ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771ee7:{NFSU2_TR(0x771ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771eea:{NFSU2_TR(0x771eea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771eeb:{NFSU2_TR(0x771eeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771ef0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771ef0:L771ef0:{c.instructions+=2;NFSU2_TR(0x771ef0);
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
B771ef3:{NFSU2_TR(0x771ef3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771ef4:L771ef4:{c.instructions+=2;NFSU2_TR(0x771ef4);
w4(R+0,u32(0x7de3c8ull));
}
B771ef9:{NFSU2_TR(0x771ef9);
TAIL_STATIC(0x75bfd2u,75b);
}
B771f00:L771f00:{c.instructions+=3;NFSU2_TR(0x771f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771f03:{NFSU2_TR(0x771f03);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B771f06:{NFSU2_TR(0x771f06);
TAIL_STATIC(0x4835c0u,483);
}
B771f0b:L771f0b:{c.instructions+=3;NFSU2_TR(0x771f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771f0e:{NFSU2_TR(0x771f0e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B771f11:{NFSU2_TR(0x771f11);
TAIL_STATIC(0x4358e0u,435);
}
B771f16:L771f16:{c.instructions+=3;NFSU2_TR(0x771f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771f19:{NFSU2_TR(0x771f19);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x38ull))));
}
B771f1c:{NFSU2_TR(0x771f1c);
TAIL_STATIC(0x4835c0u,483);
}
B771f21:L771f21:{c.instructions+=3;NFSU2_TR(0x771f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771f24:{NFSU2_TR(0x771f24);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B771f27:{NFSU2_TR(0x771f27);
TAIL_STATIC(0x4835c0u,483);
}
B771f2c:L771f2c:{c.instructions+=3;NFSU2_TR(0x771f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771f2f:{NFSU2_TR(0x771f2f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x48ull))));
}
B771f32:{NFSU2_TR(0x771f32);
TAIL_STATIC(0x436800u,436);
}
B771f37:L771f37:{c.instructions+=2;NFSU2_TR(0x771f37);
w4(R+0,u32(0x7de40cull));
}
B771f3c:{NFSU2_TR(0x771f3c);
TAIL_STATIC(0x75bfd2u,75b);
}
B771f50:L771f50:{c.instructions+=5;NFSU2_TR(0x771f50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771f52:{NFSU2_TR(0x771f52);
u8 U[4];
w4(U+0,u32(0x7864bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771f57:{NFSU2_TR(0x771f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771f5d:{NFSU2_TR(0x771f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771f5e:{NFSU2_TR(0x771f5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771f63ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771f63:L771f63:{c.instructions+=2;NFSU2_TR(0x771f63);
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
B771f66:{NFSU2_TR(0x771f66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771f67:L771f67:{c.instructions+=2;NFSU2_TR(0x771f67);
w4(R+0,u32(0x7de430ull));
}
B771f6c:{NFSU2_TR(0x771f6c);
TAIL_STATIC(0x75bfd2u,75b);
}
B771f80:L771f80:{c.instructions+=3;NFSU2_TR(0x771f80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B771f83:{NFSU2_TR(0x771f83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B771f86:{NFSU2_TR(0x771f86);
TAIL_STATIC(0x479100u,479);
}
B771f8b:L771f8b:{c.instructions+=2;NFSU2_TR(0x771f8b);
w4(R+0,u32(0x7de18cull));
}
B771f90:{NFSU2_TR(0x771f90);
TAIL_STATIC(0x75bfd2u,75b);
}
B771fa0:L771fa0:{c.instructions+=5;NFSU2_TR(0x771fa0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771fa2:{NFSU2_TR(0x771fa2);
u8 U[4];
w4(U+0,u32(0x7864ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771fa7:{NFSU2_TR(0x771fa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B771faa:{NFSU2_TR(0x771faa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B771fab:{NFSU2_TR(0x771fab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x771fb0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B771fb0:L771fb0:{c.instructions+=2;NFSU2_TR(0x771fb0);
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
B771fb3:{NFSU2_TR(0x771fb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B771fb4:L771fb4:{c.instructions+=2;NFSU2_TR(0x771fb4);
w4(R+0,u32(0x7de454ull));
}
B771fb9:{NFSU2_TR(0x771fb9);
TAIL_STATIC(0x75bfd2u,75b);
}
B771fc0:L771fc0:{c.instructions+=2;NFSU2_TR(0x771fc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd8cull))));
__builtin_memmove((R+4),(U+0),4);
}
B771fc6:{NFSU2_TR(0x771fc6);
TAIL_STATIC(0x43e060u,43e);
}
B771fcb:L771fcb:{c.instructions+=2;NFSU2_TR(0x771fcb);
w4(R+0,u32(0x7de478ull));
}
B771fd0:{NFSU2_TR(0x771fd0);
TAIL_STATIC(0x75bfd2u,75b);
}
B771fe0:L771fe0:{c.instructions+=2;NFSU2_TR(0x771fe0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffce0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B771fe6:{NFSU2_TR(0x771fe6);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B771feb:L771feb:{c.instructions+=2;NFSU2_TR(0x771feb);
w4(R+0,u32(0x7de49cull));
}
B771ff0:{NFSU2_TR(0x771ff0);
TAIL_STATIC(0x75bfd2u,75b);
}
XIT:NFSU2_TR_EXIT(0x771,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
