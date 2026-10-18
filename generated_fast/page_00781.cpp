#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_415(u8* __restrict R,Cpu& c);
u32 body_41e(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_43a(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_446(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_491(u8* __restrict R,Cpu& c);
u32 body_493(u8* __restrict R,Cpu& c);
u32 body_494(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_512(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_531(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_605(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6f5(u8* __restrict R,Cpu& c);
u32 body_6f6(u8* __restrict R,Cpu& c);
u32 body_72c(u8* __restrict R,Cpu& c);
u32 body_72d(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x781,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x781,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_781(u8* __restrict R,Cpu& c);
u32 page_781(Cpu& c){return body_781(c.regs.data(),c);}
__attribute__((noinline)) u32 body_781(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x781002:goto L781002;
case 0x781010:goto L781010;
case 0x781016:c.instructions+=3;goto B781016;
case 0x781018:c.instructions+=2;goto B781018;
case 0x78101e:c.instructions+=1;goto B78101e;
case 0x781020:goto L781020;
case 0x781026:c.instructions+=3;goto B781026;
case 0x78102c:c.instructions+=2;goto B78102c;
case 0x781032:c.instructions+=1;goto B781032;
case 0x781040:goto L781040;
case 0x781046:c.instructions+=3;goto B781046;
case 0x781048:c.instructions+=2;goto B781048;
case 0x78104e:c.instructions+=1;goto B78104e;
case 0x781050:goto L781050;
case 0x781056:c.instructions+=3;goto B781056;
case 0x78105c:c.instructions+=2;goto B78105c;
case 0x781062:c.instructions+=1;goto B781062;
case 0x781070:goto L781070;
case 0x781076:c.instructions+=3;goto B781076;
case 0x781078:c.instructions+=2;goto B781078;
case 0x78107e:c.instructions+=1;goto B78107e;
case 0x781080:goto L781080;
case 0x781086:c.instructions+=3;goto B781086;
case 0x78108c:c.instructions+=2;goto B78108c;
case 0x781092:c.instructions+=1;goto B781092;
case 0x7810a0:goto L7810a0;
case 0x7810a6:c.instructions+=3;goto B7810a6;
case 0x7810a8:c.instructions+=2;goto B7810a8;
case 0x7810ae:c.instructions+=1;goto B7810ae;
case 0x7810b0:goto L7810b0;
case 0x7810b6:c.instructions+=3;goto B7810b6;
case 0x7810bc:c.instructions+=2;goto B7810bc;
case 0x7810c2:c.instructions+=1;goto B7810c2;
case 0x7810d0:goto L7810d0;
case 0x7810d6:c.instructions+=3;goto B7810d6;
case 0x7810d8:c.instructions+=2;goto B7810d8;
case 0x7810de:c.instructions+=1;goto B7810de;
case 0x7810e0:goto L7810e0;
case 0x7810e6:c.instructions+=3;goto B7810e6;
case 0x7810ec:c.instructions+=2;goto B7810ec;
case 0x7810f2:c.instructions+=1;goto B7810f2;
case 0x781100:goto L781100;
case 0x781106:c.instructions+=3;goto B781106;
case 0x781108:c.instructions+=2;goto B781108;
case 0x78110e:c.instructions+=1;goto B78110e;
case 0x781110:goto L781110;
case 0x781116:c.instructions+=3;goto B781116;
case 0x78111c:c.instructions+=2;goto B78111c;
case 0x781122:c.instructions+=1;goto B781122;
case 0x781130:goto L781130;
case 0x781136:c.instructions+=3;goto B781136;
case 0x781138:c.instructions+=2;goto B781138;
case 0x78113e:c.instructions+=1;goto B78113e;
case 0x781140:goto L781140;
case 0x781146:c.instructions+=3;goto B781146;
case 0x78114c:c.instructions+=2;goto B78114c;
case 0x781152:c.instructions+=1;goto B781152;
case 0x781160:goto L781160;
case 0x781166:c.instructions+=3;goto B781166;
case 0x781168:c.instructions+=2;goto B781168;
case 0x78116e:c.instructions+=1;goto B78116e;
case 0x781170:goto L781170;
case 0x781176:c.instructions+=3;goto B781176;
case 0x78117c:c.instructions+=2;goto B78117c;
case 0x781182:c.instructions+=1;goto B781182;
case 0x781190:goto L781190;
case 0x781196:c.instructions+=3;goto B781196;
case 0x781198:c.instructions+=2;goto B781198;
case 0x78119e:c.instructions+=1;goto B78119e;
case 0x7811a0:goto L7811a0;
case 0x7811a6:c.instructions+=3;goto B7811a6;
case 0x7811ac:c.instructions+=2;goto B7811ac;
case 0x7811b2:c.instructions+=1;goto B7811b2;
case 0x7811c0:goto L7811c0;
case 0x7811c6:c.instructions+=3;goto B7811c6;
case 0x7811c8:c.instructions+=2;goto B7811c8;
case 0x7811ce:c.instructions+=1;goto B7811ce;
case 0x7811d0:goto L7811d0;
case 0x7811d6:c.instructions+=3;goto B7811d6;
case 0x7811dc:c.instructions+=2;goto B7811dc;
case 0x7811e2:c.instructions+=1;goto B7811e2;
case 0x7811f0:goto L7811f0;
case 0x7811f6:c.instructions+=3;goto B7811f6;
case 0x7811f8:c.instructions+=2;goto B7811f8;
case 0x7811fe:c.instructions+=1;goto B7811fe;
case 0x781200:goto L781200;
case 0x781206:c.instructions+=3;goto B781206;
case 0x78120c:c.instructions+=2;goto B78120c;
case 0x781212:c.instructions+=1;goto B781212;
case 0x781220:goto L781220;
case 0x781226:c.instructions+=3;goto B781226;
case 0x781228:c.instructions+=2;goto B781228;
case 0x78122e:c.instructions+=1;goto B78122e;
case 0x781230:goto L781230;
case 0x781236:c.instructions+=3;goto B781236;
case 0x78123c:c.instructions+=2;goto B78123c;
case 0x781242:c.instructions+=1;goto B781242;
case 0x781250:goto L781250;
case 0x781256:c.instructions+=3;goto B781256;
case 0x781258:c.instructions+=2;goto B781258;
case 0x78125e:c.instructions+=1;goto B78125e;
case 0x781260:goto L781260;
case 0x781266:c.instructions+=3;goto B781266;
case 0x78126c:c.instructions+=2;goto B78126c;
case 0x781272:c.instructions+=1;goto B781272;
case 0x781280:goto L781280;
case 0x781286:c.instructions+=3;goto B781286;
case 0x781288:c.instructions+=2;goto B781288;
case 0x78128e:c.instructions+=1;goto B78128e;
case 0x781290:goto L781290;
case 0x781296:c.instructions+=3;goto B781296;
case 0x78129c:c.instructions+=2;goto B78129c;
case 0x7812a2:c.instructions+=1;goto B7812a2;
case 0x7812b0:goto L7812b0;
case 0x7812b6:c.instructions+=3;goto B7812b6;
case 0x7812b8:c.instructions+=2;goto B7812b8;
case 0x7812be:c.instructions+=1;goto B7812be;
case 0x7812c0:goto L7812c0;
case 0x7812c6:c.instructions+=3;goto B7812c6;
case 0x7812cc:c.instructions+=2;goto B7812cc;
case 0x7812d2:c.instructions+=1;goto B7812d2;
case 0x7812e0:goto L7812e0;
case 0x7812e6:c.instructions+=3;goto B7812e6;
case 0x7812e8:c.instructions+=2;goto B7812e8;
case 0x7812ee:c.instructions+=1;goto B7812ee;
case 0x7812f0:goto L7812f0;
case 0x7812f6:c.instructions+=3;goto B7812f6;
case 0x7812fc:c.instructions+=2;goto B7812fc;
case 0x781302:c.instructions+=1;goto B781302;
case 0x781310:goto L781310;
case 0x781316:c.instructions+=3;goto B781316;
case 0x781318:c.instructions+=2;goto B781318;
case 0x78131e:c.instructions+=1;goto B78131e;
case 0x781320:goto L781320;
case 0x781326:c.instructions+=3;goto B781326;
case 0x78132c:c.instructions+=2;goto B78132c;
case 0x781332:c.instructions+=1;goto B781332;
case 0x781340:goto L781340;
case 0x781346:c.instructions+=3;goto B781346;
case 0x781348:c.instructions+=2;goto B781348;
case 0x78134e:c.instructions+=1;goto B78134e;
case 0x781350:goto L781350;
case 0x781356:c.instructions+=3;goto B781356;
case 0x78135c:c.instructions+=2;goto B78135c;
case 0x781362:c.instructions+=1;goto B781362;
case 0x781370:goto L781370;
case 0x781376:c.instructions+=3;goto B781376;
case 0x781378:c.instructions+=2;goto B781378;
case 0x78137e:c.instructions+=1;goto B78137e;
case 0x781380:goto L781380;
case 0x781386:c.instructions+=3;goto B781386;
case 0x78138c:c.instructions+=2;goto B78138c;
case 0x781392:c.instructions+=1;goto B781392;
case 0x7813a0:goto L7813a0;
case 0x7813a6:c.instructions+=3;goto B7813a6;
case 0x7813a8:c.instructions+=2;goto B7813a8;
case 0x7813ae:c.instructions+=1;goto B7813ae;
case 0x7813b0:goto L7813b0;
case 0x7813b6:c.instructions+=3;goto B7813b6;
case 0x7813bc:c.instructions+=2;goto B7813bc;
case 0x7813c2:c.instructions+=1;goto B7813c2;
case 0x7813d0:goto L7813d0;
case 0x7813d5:c.instructions+=7;goto B7813d5;
case 0x7813d7:c.instructions+=6;goto B7813d7;
case 0x7813dc:c.instructions+=5;goto B7813dc;
case 0x7813de:c.instructions+=4;goto B7813de;
case 0x7813e3:c.instructions+=3;goto B7813e3;
case 0x7813e8:c.instructions+=2;goto B7813e8;
case 0x7813ed:c.instructions+=1;goto B7813ed;
case 0x7813f2:goto L7813f2;
case 0x7813f7:c.instructions+=1;goto B7813f7;
case 0x7813fc:goto L7813fc;
case 0x7813fd:c.instructions+=1;goto B7813fd;
case 0x781400:goto L781400;
case 0x781406:c.instructions+=3;goto B781406;
case 0x781408:c.instructions+=2;goto B781408;
case 0x78140e:c.instructions+=1;goto B78140e;
case 0x781410:goto L781410;
case 0x781416:c.instructions+=3;goto B781416;
case 0x78141c:c.instructions+=2;goto B78141c;
case 0x781422:c.instructions+=1;goto B781422;
case 0x781430:goto L781430;
case 0x781436:c.instructions+=3;goto B781436;
case 0x781438:c.instructions+=2;goto B781438;
case 0x78143e:c.instructions+=1;goto B78143e;
case 0x781440:goto L781440;
case 0x781446:c.instructions+=3;goto B781446;
case 0x78144c:c.instructions+=2;goto B78144c;
case 0x781452:c.instructions+=1;goto B781452;
case 0x781460:goto L781460;
case 0x781465:c.instructions+=7;goto B781465;
case 0x781467:c.instructions+=6;goto B781467;
case 0x78146c:c.instructions+=5;goto B78146c;
case 0x78146e:c.instructions+=4;goto B78146e;
case 0x781473:c.instructions+=3;goto B781473;
case 0x781478:c.instructions+=2;goto B781478;
case 0x78147d:c.instructions+=1;goto B78147d;
case 0x781482:goto L781482;
case 0x781487:c.instructions+=1;goto B781487;
case 0x78148c:goto L78148c;
case 0x78148d:c.instructions+=1;goto B78148d;
case 0x781490:goto L781490;
case 0x781496:c.instructions+=3;goto B781496;
case 0x781498:c.instructions+=2;goto B781498;
case 0x78149e:c.instructions+=1;goto B78149e;
case 0x7814a0:goto L7814a0;
case 0x7814a6:c.instructions+=3;goto B7814a6;
case 0x7814ac:c.instructions+=2;goto B7814ac;
case 0x7814b2:c.instructions+=1;goto B7814b2;
case 0x7814c0:goto L7814c0;
case 0x7814c6:c.instructions+=3;goto B7814c6;
case 0x7814c8:c.instructions+=2;goto B7814c8;
case 0x7814ce:c.instructions+=1;goto B7814ce;
case 0x7814d0:goto L7814d0;
case 0x7814d6:c.instructions+=3;goto B7814d6;
case 0x7814dc:c.instructions+=2;goto B7814dc;
case 0x7814e2:c.instructions+=1;goto B7814e2;
case 0x7814f0:goto L7814f0;
case 0x7814f5:c.instructions+=1;goto B7814f5;
case 0x7814fa:goto L7814fa;
case 0x7814ff:c.instructions+=2;goto B7814ff;
case 0x781504:c.instructions+=1;goto B781504;
case 0x781509:goto L781509;
case 0x78150e:c.instructions+=2;goto B78150e;
case 0x781518:c.instructions+=1;goto B781518;
case 0x78151d:goto L78151d;
case 0x78151e:c.instructions+=1;goto B78151e;
case 0x78151f:goto L78151f;
case 0x781524:c.instructions+=1;goto B781524;
case 0x781529:goto L781529;
case 0x78152e:c.instructions+=1;goto B78152e;
case 0x781533:goto L781533;
case 0x781538:c.instructions+=1;goto B781538;
case 0x78153d:goto L78153d;
case 0x78153e:c.instructions+=1;goto B78153e;
case 0x78153f:goto L78153f;
case 0x781544:c.instructions+=2;goto B781544;
case 0x781549:c.instructions+=1;goto B781549;
case 0x78154e:goto L78154e;
case 0x781553:c.instructions+=2;goto B781553;
case 0x78155d:c.instructions+=1;goto B78155d;
case 0x781562:goto L781562;
case 0x781563:c.instructions+=1;goto B781563;
case 0x781564:goto L781564;
case 0x781569:c.instructions+=2;goto B781569;
case 0x78156e:c.instructions+=1;goto B78156e;
case 0x781573:goto L781573;
case 0x781578:c.instructions+=2;goto B781578;
case 0x781582:c.instructions+=1;goto B781582;
case 0x781587:goto L781587;
case 0x781588:c.instructions+=1;goto B781588;
case 0x781589:goto L781589;
case 0x78158e:c.instructions+=2;goto B78158e;
case 0x781593:c.instructions+=1;goto B781593;
case 0x781598:goto L781598;
case 0x78159d:c.instructions+=2;goto B78159d;
case 0x7815a7:c.instructions+=1;goto B7815a7;
case 0x7815ac:goto L7815ac;
case 0x7815ad:c.instructions+=1;goto B7815ad;
case 0x7815ae:goto L7815ae;
case 0x7815b3:c.instructions+=2;goto B7815b3;
case 0x7815b8:c.instructions+=1;goto B7815b8;
case 0x7815bd:goto L7815bd;
case 0x7815c2:c.instructions+=2;goto B7815c2;
case 0x7815cc:c.instructions+=1;goto B7815cc;
case 0x7815d1:goto L7815d1;
case 0x7815d2:c.instructions+=1;goto B7815d2;
case 0x7815d3:goto L7815d3;
case 0x7815d8:c.instructions+=2;goto B7815d8;
case 0x7815dd:c.instructions+=1;goto B7815dd;
case 0x7815e2:goto L7815e2;
case 0x7815e7:c.instructions+=2;goto B7815e7;
case 0x7815f1:c.instructions+=1;goto B7815f1;
case 0x7815f6:goto L7815f6;
case 0x7815f7:c.instructions+=1;goto B7815f7;
case 0x7815f8:goto L7815f8;
case 0x7815fd:c.instructions+=2;goto B7815fd;
case 0x781602:c.instructions+=1;goto B781602;
case 0x781607:goto L781607;
case 0x78160c:c.instructions+=2;goto B78160c;
case 0x781616:c.instructions+=1;goto B781616;
case 0x78161b:goto L78161b;
case 0x78161c:c.instructions+=1;goto B78161c;
case 0x78161d:goto L78161d;
case 0x781622:c.instructions+=2;goto B781622;
case 0x781627:c.instructions+=1;goto B781627;
case 0x78162c:goto L78162c;
case 0x781631:c.instructions+=2;goto B781631;
case 0x78163b:c.instructions+=1;goto B78163b;
case 0x781640:goto L781640;
case 0x781641:c.instructions+=1;goto B781641;
case 0x781642:goto L781642;
case 0x781647:c.instructions+=2;goto B781647;
case 0x78164c:c.instructions+=1;goto B78164c;
case 0x781651:goto L781651;
case 0x781656:c.instructions+=2;goto B781656;
case 0x781660:c.instructions+=1;goto B781660;
case 0x781665:goto L781665;
case 0x781666:c.instructions+=1;goto B781666;
case 0x781667:goto L781667;
case 0x78166c:c.instructions+=2;goto B78166c;
case 0x781671:c.instructions+=1;goto B781671;
case 0x781676:goto L781676;
case 0x78167b:c.instructions+=2;goto B78167b;
case 0x781685:c.instructions+=1;goto B781685;
case 0x78168a:goto L78168a;
case 0x78168b:c.instructions+=1;goto B78168b;
case 0x78168c:goto L78168c;
case 0x781691:c.instructions+=2;goto B781691;
case 0x781696:c.instructions+=1;goto B781696;
case 0x78169b:goto L78169b;
case 0x7816a0:c.instructions+=2;goto B7816a0;
case 0x7816aa:c.instructions+=1;goto B7816aa;
case 0x7816af:goto L7816af;
case 0x7816b0:c.instructions+=1;goto B7816b0;
case 0x7816b1:goto L7816b1;
case 0x7816b6:c.instructions+=2;goto B7816b6;
case 0x7816bb:c.instructions+=1;goto B7816bb;
case 0x7816c0:goto L7816c0;
case 0x7816c5:c.instructions+=2;goto B7816c5;
case 0x7816cf:c.instructions+=1;goto B7816cf;
case 0x7816d4:goto L7816d4;
case 0x7816d5:c.instructions+=1;goto B7816d5;
case 0x7816d6:goto L7816d6;
case 0x7816db:c.instructions+=2;goto B7816db;
case 0x7816e0:c.instructions+=1;goto B7816e0;
case 0x7816e5:goto L7816e5;
case 0x7816ea:c.instructions+=2;goto B7816ea;
case 0x7816f4:c.instructions+=1;goto B7816f4;
case 0x7816f9:goto L7816f9;
case 0x7816fa:c.instructions+=1;goto B7816fa;
case 0x7816fb:goto L7816fb;
case 0x781700:c.instructions+=2;goto B781700;
case 0x781705:c.instructions+=1;goto B781705;
case 0x78170a:goto L78170a;
case 0x78170f:c.instructions+=2;goto B78170f;
case 0x781719:c.instructions+=1;goto B781719;
case 0x78171e:goto L78171e;
case 0x78171f:c.instructions+=1;goto B78171f;
case 0x781720:goto L781720;
case 0x781725:c.instructions+=2;goto B781725;
case 0x78172a:c.instructions+=1;goto B78172a;
case 0x78172f:goto L78172f;
case 0x781734:c.instructions+=2;goto B781734;
case 0x78173e:c.instructions+=1;goto B78173e;
case 0x781743:goto L781743;
case 0x781744:c.instructions+=1;goto B781744;
case 0x781745:goto L781745;
case 0x78174a:c.instructions+=2;goto B78174a;
case 0x78174f:c.instructions+=1;goto B78174f;
case 0x781754:goto L781754;
case 0x781759:c.instructions+=2;goto B781759;
case 0x781763:c.instructions+=1;goto B781763;
case 0x781768:goto L781768;
case 0x781769:c.instructions+=1;goto B781769;
case 0x78176a:goto L78176a;
case 0x78176f:c.instructions+=2;goto B78176f;
case 0x781774:c.instructions+=1;goto B781774;
case 0x781779:goto L781779;
case 0x78177e:c.instructions+=2;goto B78177e;
case 0x781788:c.instructions+=1;goto B781788;
case 0x78178d:goto L78178d;
case 0x78178e:c.instructions+=1;goto B78178e;
case 0x78178f:goto L78178f;
case 0x781794:c.instructions+=2;goto B781794;
case 0x781799:c.instructions+=1;goto B781799;
case 0x78179e:goto L78179e;
case 0x7817a3:c.instructions+=2;goto B7817a3;
case 0x7817ad:c.instructions+=1;goto B7817ad;
case 0x7817b2:goto L7817b2;
case 0x7817b3:c.instructions+=1;goto B7817b3;
case 0x7817b4:goto L7817b4;
case 0x7817b9:c.instructions+=2;goto B7817b9;
case 0x7817be:c.instructions+=1;goto B7817be;
case 0x7817c3:goto L7817c3;
case 0x7817c8:c.instructions+=2;goto B7817c8;
case 0x7817d2:c.instructions+=1;goto B7817d2;
case 0x7817d7:goto L7817d7;
case 0x7817d8:c.instructions+=1;goto B7817d8;
case 0x7817d9:goto L7817d9;
case 0x7817de:c.instructions+=2;goto B7817de;
case 0x7817e3:c.instructions+=1;goto B7817e3;
case 0x7817e8:goto L7817e8;
case 0x7817ed:c.instructions+=2;goto B7817ed;
case 0x7817f7:c.instructions+=1;goto B7817f7;
case 0x7817fc:goto L7817fc;
case 0x7817fd:c.instructions+=1;goto B7817fd;
case 0x7817fe:goto L7817fe;
case 0x781803:c.instructions+=2;goto B781803;
case 0x781808:c.instructions+=1;goto B781808;
case 0x78180d:goto L78180d;
case 0x781812:c.instructions+=2;goto B781812;
case 0x78181c:c.instructions+=1;goto B78181c;
case 0x781821:goto L781821;
case 0x781822:c.instructions+=1;goto B781822;
case 0x781823:goto L781823;
case 0x781828:c.instructions+=2;goto B781828;
case 0x78182d:c.instructions+=1;goto B78182d;
case 0x781832:goto L781832;
case 0x781837:c.instructions+=2;goto B781837;
case 0x781841:c.instructions+=1;goto B781841;
case 0x781846:goto L781846;
case 0x781847:c.instructions+=1;goto B781847;
case 0x781848:goto L781848;
case 0x78184d:c.instructions+=2;goto B78184d;
case 0x781852:c.instructions+=1;goto B781852;
case 0x781857:goto L781857;
case 0x78185c:c.instructions+=2;goto B78185c;
case 0x781866:c.instructions+=1;goto B781866;
case 0x78186b:goto L78186b;
case 0x78186c:c.instructions+=1;goto B78186c;
case 0x78186d:goto L78186d;
case 0x781872:c.instructions+=2;goto B781872;
case 0x781877:c.instructions+=1;goto B781877;
case 0x78187c:goto L78187c;
case 0x781881:c.instructions+=2;goto B781881;
case 0x78188b:c.instructions+=1;goto B78188b;
case 0x781890:goto L781890;
case 0x781891:c.instructions+=1;goto B781891;
case 0x781892:goto L781892;
case 0x781897:c.instructions+=2;goto B781897;
case 0x78189c:c.instructions+=1;goto B78189c;
case 0x7818a1:goto L7818a1;
case 0x7818a6:c.instructions+=2;goto B7818a6;
case 0x7818b0:c.instructions+=1;goto B7818b0;
case 0x7818b5:goto L7818b5;
case 0x7818b6:c.instructions+=1;goto B7818b6;
case 0x7818b7:goto L7818b7;
case 0x7818bc:c.instructions+=2;goto B7818bc;
case 0x7818c1:c.instructions+=1;goto B7818c1;
case 0x7818c6:goto L7818c6;
case 0x7818cb:c.instructions+=2;goto B7818cb;
case 0x7818d5:c.instructions+=1;goto B7818d5;
case 0x7818da:goto L7818da;
case 0x7818db:c.instructions+=1;goto B7818db;
case 0x7818dc:goto L7818dc;
case 0x7818e1:c.instructions+=2;goto B7818e1;
case 0x7818e6:c.instructions+=1;goto B7818e6;
case 0x7818eb:goto L7818eb;
case 0x7818f0:c.instructions+=2;goto B7818f0;
case 0x7818fa:c.instructions+=1;goto B7818fa;
case 0x7818ff:goto L7818ff;
case 0x781900:c.instructions+=1;goto B781900;
case 0x781901:goto L781901;
case 0x781906:c.instructions+=1;goto B781906;
case 0x78190b:goto L78190b;
case 0x78190c:c.instructions+=1;goto B78190c;
case 0x78190d:goto L78190d;
case 0x781912:c.instructions+=1;goto B781912;
case 0x781917:goto L781917;
case 0x781918:c.instructions+=1;goto B781918;
case 0x781919:goto L781919;
case 0x78191e:goto L78191e;
case 0x781923:c.instructions+=1;goto B781923;
case 0x781924:goto L781924;
case 0x781929:goto L781929;
case 0x78192c:c.instructions+=2;goto B78192c;
case 0x781931:c.instructions+=1;goto B781931;
case 0x781940:goto L781940;
case 0x781950:goto L781950;
case 0x781960:goto L781960;
case 0x781965:c.instructions+=1;goto B781965;
case 0x781970:goto L781970;
case 0x781975:c.instructions+=1;goto B781975;
case 0x781980:goto L781980;
case 0x781985:c.instructions+=1;goto B781985;
case 0x781990:goto L781990;
case 0x781995:c.instructions+=1;goto B781995;
case 0x7819a0:goto L7819a0;
case 0x7819a5:c.instructions+=1;goto B7819a5;
case 0x7819b0:goto L7819b0;
case 0x7819b5:c.instructions+=4;goto B7819b5;
case 0x7819b7:c.instructions+=3;goto B7819b7;
case 0x7819b9:c.instructions+=2;goto B7819b9;
case 0x7819be:c.instructions+=1;goto B7819be;
case 0x7819c3:goto L7819c3;
case 0x7819d0:goto L7819d0;
case 0x7819d5:c.instructions+=4;goto B7819d5;
case 0x7819d7:c.instructions+=3;goto B7819d7;
case 0x7819d9:c.instructions+=2;goto B7819d9;
case 0x7819de:c.instructions+=1;goto B7819de;
case 0x7819e3:goto L7819e3;
case 0x7819f0:goto L7819f0;
case 0x7819f5:c.instructions+=4;goto B7819f5;
case 0x7819f7:c.instructions+=3;goto B7819f7;
case 0x7819f9:c.instructions+=2;goto B7819f9;
case 0x7819fe:c.instructions+=1;goto B7819fe;
case 0x781a03:goto L781a03;
case 0x781a10:goto L781a10;
case 0x781a15:c.instructions+=4;goto B781a15;
case 0x781a17:c.instructions+=3;goto B781a17;
case 0x781a19:c.instructions+=2;goto B781a19;
case 0x781a1e:c.instructions+=1;goto B781a1e;
case 0x781a23:goto L781a23;
case 0x781a30:goto L781a30;
case 0x781a3a:c.instructions+=1;goto B781a3a;
case 0x781a40:goto L781a40;
case 0x781a4a:c.instructions+=1;goto B781a4a;
case 0x781a50:goto L781a50;
case 0x781a55:c.instructions+=4;goto B781a55;
case 0x781a57:c.instructions+=3;goto B781a57;
case 0x781a59:c.instructions+=2;goto B781a59;
case 0x781a5e:c.instructions+=1;goto B781a5e;
case 0x781a63:goto L781a63;
case 0x781a70:goto L781a70;
case 0x781a75:c.instructions+=4;goto B781a75;
case 0x781a77:c.instructions+=3;goto B781a77;
case 0x781a79:c.instructions+=2;goto B781a79;
case 0x781a7e:c.instructions+=1;goto B781a7e;
case 0x781a83:goto L781a83;
case 0x781a90:goto L781a90;
case 0x781a95:c.instructions+=4;goto B781a95;
case 0x781a97:c.instructions+=3;goto B781a97;
case 0x781a99:c.instructions+=2;goto B781a99;
case 0x781a9e:c.instructions+=1;goto B781a9e;
case 0x781aa3:goto L781aa3;
case 0x781ab0:goto L781ab0;
case 0x781ab5:c.instructions+=4;goto B781ab5;
case 0x781ab7:c.instructions+=3;goto B781ab7;
case 0x781ab9:c.instructions+=2;goto B781ab9;
case 0x781abe:c.instructions+=1;goto B781abe;
case 0x781ac3:goto L781ac3;
case 0x781ad0:goto L781ad0;
case 0x781ad5:c.instructions+=1;goto B781ad5;
case 0x781ae0:goto L781ae0;
case 0x781ae5:c.instructions+=1;goto B781ae5;
case 0x781af0:goto L781af0;
case 0x781af5:c.instructions+=1;goto B781af5;
case 0x781b00:goto L781b00;
case 0x781b05:c.instructions+=1;goto B781b05;
case 0x781b10:goto L781b10;
case 0x781b15:c.instructions+=1;goto B781b15;
case 0x781b20:goto L781b20;
case 0x781b25:c.instructions+=1;goto B781b25;
case 0x781b30:goto L781b30;
case 0x781b35:c.instructions+=1;goto B781b35;
case 0x781b40:goto L781b40;
case 0x781b45:c.instructions+=1;goto B781b45;
case 0x781b50:goto L781b50;
case 0x781b55:c.instructions+=1;goto B781b55;
case 0x781b60:goto L781b60;
case 0x781b65:c.instructions+=1;goto B781b65;
case 0x781b70:goto L781b70;
case 0x781b75:c.instructions+=1;goto B781b75;
case 0x781b80:goto L781b80;
case 0x781b90:goto L781b90;
case 0x781b95:c.instructions+=1;goto B781b95;
case 0x781ba0:goto L781ba0;
case 0x781ba5:c.instructions+=1;goto B781ba5;
case 0x781bb0:goto L781bb0;
case 0x781bb5:c.instructions+=1;goto B781bb5;
case 0x781bc0:goto L781bc0;
case 0x781bc5:c.instructions+=1;goto B781bc5;
case 0x781bd0:goto L781bd0;
case 0x781bd5:c.instructions+=1;goto B781bd5;
case 0x781be0:goto L781be0;
case 0x781be5:c.instructions+=1;goto B781be5;
case 0x781bf0:goto L781bf0;
case 0x781bf5:c.instructions+=1;goto B781bf5;
case 0x781c00:goto L781c00;
case 0x781c10:goto L781c10;
case 0x781c20:goto L781c20;
case 0x781c30:goto L781c30;
case 0x781c40:goto L781c40;
case 0x781c50:goto L781c50;
case 0x781c60:goto L781c60;
case 0x781c70:goto L781c70;
case 0x781c80:goto L781c80;
case 0x781c85:c.instructions+=1;goto B781c85;
case 0x781c90:goto L781c90;
case 0x781ca0:goto L781ca0;
case 0x781cb0:goto L781cb0;
case 0x781cc0:goto L781cc0;
case 0x781cd0:goto L781cd0;
case 0x781ce0:goto L781ce0;
case 0x781cf0:goto L781cf0;
case 0x781d00:goto L781d00;
case 0x781d10:goto L781d10;
case 0x781d20:goto L781d20;
case 0x781d30:goto L781d30;
case 0x781d35:c.instructions+=1;goto B781d35;
case 0x781d40:goto L781d40;
case 0x781d45:c.instructions+=1;goto B781d45;
case 0x781d50:goto L781d50;
case 0x781d55:c.instructions+=1;goto B781d55;
case 0x781d60:goto L781d60;
case 0x781d70:goto L781d70;
case 0x781d80:goto L781d80;
case 0x781d85:c.instructions+=4;goto B781d85;
case 0x781d8a:c.instructions+=3;goto B781d8a;
case 0x781d8c:c.instructions+=2;goto B781d8c;
case 0x781d91:c.instructions+=1;goto B781d91;
case 0x781d96:goto L781d96;
case 0x781da0:goto L781da0;
case 0x781da5:c.instructions+=1;goto B781da5;
case 0x781db0:goto L781db0;
case 0x781db5:c.instructions+=1;goto B781db5;
case 0x781dc0:goto L781dc0;
case 0x781dc5:c.instructions+=1;goto B781dc5;
case 0x781dd0:goto L781dd0;
case 0x781dd5:c.instructions+=4;goto B781dd5;
case 0x781dd7:c.instructions+=3;goto B781dd7;
case 0x781dd9:c.instructions+=2;goto B781dd9;
case 0x781dde:c.instructions+=1;goto B781dde;
case 0x781de3:goto L781de3;
case 0x781df0:goto L781df0;
case 0x781df5:c.instructions+=1;goto B781df5;
case 0x781e00:goto L781e00;
case 0x781e05:c.instructions+=1;goto B781e05;
case 0x781e10:goto L781e10;
case 0x781e15:c.instructions+=1;goto B781e15;
case 0x781e20:goto L781e20;
case 0x781e25:c.instructions+=1;goto B781e25;
case 0x781e30:goto L781e30;
case 0x781e35:c.instructions+=1;goto B781e35;
case 0x781e40:goto L781e40;
case 0x781e45:c.instructions+=1;goto B781e45;
case 0x781e50:goto L781e50;
case 0x781e55:c.instructions+=1;goto B781e55;
case 0x781e60:goto L781e60;
case 0x781e65:c.instructions+=1;goto B781e65;
case 0x781e70:goto L781e70;
case 0x781e75:c.instructions+=1;goto B781e75;
case 0x781e80:goto L781e80;
case 0x781e85:c.instructions+=1;goto B781e85;
case 0x781e90:goto L781e90;
case 0x781e95:c.instructions+=1;goto B781e95;
case 0x781ea0:goto L781ea0;
case 0x781ea5:c.instructions+=1;goto B781ea5;
case 0x781eb0:goto L781eb0;
case 0x781eb5:c.instructions+=1;goto B781eb5;
case 0x781ec0:goto L781ec0;
case 0x781ec5:c.instructions+=1;goto B781ec5;
case 0x781ed0:goto L781ed0;
case 0x781ed5:c.instructions+=1;goto B781ed5;
case 0x781ee0:goto L781ee0;
case 0x781ee5:c.instructions+=1;goto B781ee5;
case 0x781ef0:goto L781ef0;
case 0x781ef5:c.instructions+=4;goto B781ef5;
case 0x781ef7:c.instructions+=3;goto B781ef7;
case 0x781ef9:c.instructions+=2;goto B781ef9;
case 0x781efe:c.instructions+=1;goto B781efe;
case 0x781f03:goto L781f03;
case 0x781f10:goto L781f10;
case 0x781f15:c.instructions+=1;goto B781f15;
case 0x781f20:goto L781f20;
case 0x781f25:c.instructions+=1;goto B781f25;
case 0x781f30:goto L781f30;
case 0x781f35:c.instructions+=1;goto B781f35;
case 0x781f40:goto L781f40;
case 0x781f45:c.instructions+=1;goto B781f45;
case 0x781f50:goto L781f50;
case 0x781f55:c.instructions+=1;goto B781f55;
case 0x781f60:goto L781f60;
case 0x781f65:c.instructions+=1;goto B781f65;
case 0x781f70:goto L781f70;
case 0x781f80:goto L781f80;
case 0x781f85:c.instructions+=1;goto B781f85;
case 0x781f90:goto L781f90;
case 0x781fa0:goto L781fa0;
case 0x781fa5:c.instructions+=1;goto B781fa5;
case 0x781fb0:goto L781fb0;
case 0x781fb5:c.instructions+=4;goto B781fb5;
case 0x781fba:c.instructions+=3;goto B781fba;
case 0x781fbc:c.instructions+=2;goto B781fbc;
case 0x781fc1:c.instructions+=1;goto B781fc1;
case 0x781fc6:goto L781fc6;
case 0x781fd0:goto L781fd0;
case 0x781fd5:c.instructions+=1;goto B781fd5;
case 0x781fe0:goto L781fe0;
case 0x781fe5:c.instructions+=1;goto B781fe5;
case 0x781ff0:goto L781ff0;
case 0x781ff5:c.instructions+=1;goto B781ff5;
default:missing_instruction(c.pc);}
B781002:L781002:{c.instructions+=1;NFSU2_TR(0x781002);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781010:L781010:{c.instructions+=4;NFSU2_TR(0x781010);
{u32 ea_=u32(u32(8134568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781016:{NFSU2_TR(0x781016);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781018:{NFSU2_TR(0x781018);
{u32 ea_=u32(u32(9090468u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78101e:{NFSU2_TR(0x78101e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781020:L781020:{c.instructions+=4;NFSU2_TR(0x781020);
{u32 ea_=u32(u32(8134568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781026:{NFSU2_TR(0x781026);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78102c:{NFSU2_TR(0x78102c);
{u32 ea_=u32(u32(9090464u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781032:{NFSU2_TR(0x781032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781040:L781040:{c.instructions+=4;NFSU2_TR(0x781040);
{u32 ea_=u32(u32(8134576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781046:{NFSU2_TR(0x781046);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781048:{NFSU2_TR(0x781048);
{u32 ea_=u32(u32(9090456u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78104e:{NFSU2_TR(0x78104e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781050:L781050:{c.instructions+=4;NFSU2_TR(0x781050);
{u32 ea_=u32(u32(8134576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781056:{NFSU2_TR(0x781056);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78105c:{NFSU2_TR(0x78105c);
{u32 ea_=u32(u32(9090448u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781062:{NFSU2_TR(0x781062);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781070:L781070:{c.instructions+=4;NFSU2_TR(0x781070);
{u32 ea_=u32(u32(8134840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781076:{NFSU2_TR(0x781076);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781078:{NFSU2_TR(0x781078);
{u32 ea_=u32(u32(9090492u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78107e:{NFSU2_TR(0x78107e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781080:L781080:{c.instructions+=4;NFSU2_TR(0x781080);
{u32 ea_=u32(u32(8134840u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781086:{NFSU2_TR(0x781086);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78108c:{NFSU2_TR(0x78108c);
{u32 ea_=u32(u32(9090488u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781092:{NFSU2_TR(0x781092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7810a0:L7810a0:{c.instructions+=4;NFSU2_TR(0x7810a0);
{u32 ea_=u32(u32(8134848u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7810a6:{NFSU2_TR(0x7810a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7810a8:{NFSU2_TR(0x7810a8);
{u32 ea_=u32(u32(9090480u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7810ae:{NFSU2_TR(0x7810ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7810b0:L7810b0:{c.instructions+=4;NFSU2_TR(0x7810b0);
{u32 ea_=u32(u32(8134848u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7810b6:{NFSU2_TR(0x7810b6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7810bc:{NFSU2_TR(0x7810bc);
{u32 ea_=u32(u32(9090472u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7810c2:{NFSU2_TR(0x7810c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7810d0:L7810d0:{c.instructions+=4;NFSU2_TR(0x7810d0);
{u32 ea_=u32(u32(8134936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7810d6:{NFSU2_TR(0x7810d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7810d8:{NFSU2_TR(0x7810d8);
{u32 ea_=u32(u32(9090516u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7810de:{NFSU2_TR(0x7810de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7810e0:L7810e0:{c.instructions+=4;NFSU2_TR(0x7810e0);
{u32 ea_=u32(u32(8134936u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7810e6:{NFSU2_TR(0x7810e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7810ec:{NFSU2_TR(0x7810ec);
{u32 ea_=u32(u32(9090512u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7810f2:{NFSU2_TR(0x7810f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781100:L781100:{c.instructions+=4;NFSU2_TR(0x781100);
{u32 ea_=u32(u32(8134944u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781106:{NFSU2_TR(0x781106);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781108:{NFSU2_TR(0x781108);
{u32 ea_=u32(u32(9090504u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78110e:{NFSU2_TR(0x78110e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781110:L781110:{c.instructions+=4;NFSU2_TR(0x781110);
{u32 ea_=u32(u32(8134944u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781116:{NFSU2_TR(0x781116);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78111c:{NFSU2_TR(0x78111c);
{u32 ea_=u32(u32(9090496u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781122:{NFSU2_TR(0x781122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781130:L781130:{c.instructions+=4;NFSU2_TR(0x781130);
{u32 ea_=u32(u32(8134952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781136:{NFSU2_TR(0x781136);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781138:{NFSU2_TR(0x781138);
{u32 ea_=u32(u32(9090540u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78113e:{NFSU2_TR(0x78113e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781140:L781140:{c.instructions+=4;NFSU2_TR(0x781140);
{u32 ea_=u32(u32(8134952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781146:{NFSU2_TR(0x781146);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78114c:{NFSU2_TR(0x78114c);
{u32 ea_=u32(u32(9090536u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781152:{NFSU2_TR(0x781152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781160:L781160:{c.instructions+=4;NFSU2_TR(0x781160);
{u32 ea_=u32(u32(8134960u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781166:{NFSU2_TR(0x781166);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781168:{NFSU2_TR(0x781168);
{u32 ea_=u32(u32(9090528u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78116e:{NFSU2_TR(0x78116e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781170:L781170:{c.instructions+=4;NFSU2_TR(0x781170);
{u32 ea_=u32(u32(8134960u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781176:{NFSU2_TR(0x781176);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78117c:{NFSU2_TR(0x78117c);
{u32 ea_=u32(u32(9090520u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781182:{NFSU2_TR(0x781182);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781190:L781190:{c.instructions+=4;NFSU2_TR(0x781190);
{u32 ea_=u32(u32(8134968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781196:{NFSU2_TR(0x781196);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781198:{NFSU2_TR(0x781198);
{u32 ea_=u32(u32(9090564u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78119e:{NFSU2_TR(0x78119e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7811a0:L7811a0:{c.instructions+=4;NFSU2_TR(0x7811a0);
{u32 ea_=u32(u32(8134968u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7811a6:{NFSU2_TR(0x7811a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7811ac:{NFSU2_TR(0x7811ac);
{u32 ea_=u32(u32(9090560u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7811b2:{NFSU2_TR(0x7811b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7811c0:L7811c0:{c.instructions+=4;NFSU2_TR(0x7811c0);
{u32 ea_=u32(u32(8134976u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7811c6:{NFSU2_TR(0x7811c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7811c8:{NFSU2_TR(0x7811c8);
{u32 ea_=u32(u32(9090552u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7811ce:{NFSU2_TR(0x7811ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7811d0:L7811d0:{c.instructions+=4;NFSU2_TR(0x7811d0);
{u32 ea_=u32(u32(8134976u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7811d6:{NFSU2_TR(0x7811d6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7811dc:{NFSU2_TR(0x7811dc);
{u32 ea_=u32(u32(9090544u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7811e2:{NFSU2_TR(0x7811e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7811f0:L7811f0:{c.instructions+=4;NFSU2_TR(0x7811f0);
{u32 ea_=u32(u32(8134984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7811f6:{NFSU2_TR(0x7811f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7811f8:{NFSU2_TR(0x7811f8);
{u32 ea_=u32(u32(9090588u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7811fe:{NFSU2_TR(0x7811fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781200:L781200:{c.instructions+=4;NFSU2_TR(0x781200);
{u32 ea_=u32(u32(8134984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781206:{NFSU2_TR(0x781206);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78120c:{NFSU2_TR(0x78120c);
{u32 ea_=u32(u32(9090584u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781212:{NFSU2_TR(0x781212);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781220:L781220:{c.instructions+=4;NFSU2_TR(0x781220);
{u32 ea_=u32(u32(8134992u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781226:{NFSU2_TR(0x781226);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781228:{NFSU2_TR(0x781228);
{u32 ea_=u32(u32(9090576u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78122e:{NFSU2_TR(0x78122e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781230:L781230:{c.instructions+=4;NFSU2_TR(0x781230);
{u32 ea_=u32(u32(8134992u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781236:{NFSU2_TR(0x781236);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78123c:{NFSU2_TR(0x78123c);
{u32 ea_=u32(u32(9090568u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781242:{NFSU2_TR(0x781242);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781250:L781250:{c.instructions+=4;NFSU2_TR(0x781250);
{u32 ea_=u32(u32(8135000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781256:{NFSU2_TR(0x781256);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781258:{NFSU2_TR(0x781258);
{u32 ea_=u32(u32(9090612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78125e:{NFSU2_TR(0x78125e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781260:L781260:{c.instructions+=4;NFSU2_TR(0x781260);
{u32 ea_=u32(u32(8135000u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781266:{NFSU2_TR(0x781266);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78126c:{NFSU2_TR(0x78126c);
{u32 ea_=u32(u32(9090608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781272:{NFSU2_TR(0x781272);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781280:L781280:{c.instructions+=4;NFSU2_TR(0x781280);
{u32 ea_=u32(u32(8135008u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781286:{NFSU2_TR(0x781286);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781288:{NFSU2_TR(0x781288);
{u32 ea_=u32(u32(9090600u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78128e:{NFSU2_TR(0x78128e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781290:L781290:{c.instructions+=4;NFSU2_TR(0x781290);
{u32 ea_=u32(u32(8135008u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781296:{NFSU2_TR(0x781296);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78129c:{NFSU2_TR(0x78129c);
{u32 ea_=u32(u32(9090592u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7812a2:{NFSU2_TR(0x7812a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7812b0:L7812b0:{c.instructions+=4;NFSU2_TR(0x7812b0);
{u32 ea_=u32(u32(8135112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7812b6:{NFSU2_TR(0x7812b6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7812b8:{NFSU2_TR(0x7812b8);
{u32 ea_=u32(u32(9090636u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7812be:{NFSU2_TR(0x7812be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7812c0:L7812c0:{c.instructions+=4;NFSU2_TR(0x7812c0);
{u32 ea_=u32(u32(8135112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7812c6:{NFSU2_TR(0x7812c6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7812cc:{NFSU2_TR(0x7812cc);
{u32 ea_=u32(u32(9090632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7812d2:{NFSU2_TR(0x7812d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7812e0:L7812e0:{c.instructions+=4;NFSU2_TR(0x7812e0);
{u32 ea_=u32(u32(8135120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7812e6:{NFSU2_TR(0x7812e6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7812e8:{NFSU2_TR(0x7812e8);
{u32 ea_=u32(u32(9090624u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7812ee:{NFSU2_TR(0x7812ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7812f0:L7812f0:{c.instructions+=4;NFSU2_TR(0x7812f0);
{u32 ea_=u32(u32(8135120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7812f6:{NFSU2_TR(0x7812f6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7812fc:{NFSU2_TR(0x7812fc);
{u32 ea_=u32(u32(9090616u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781302:{NFSU2_TR(0x781302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781310:L781310:{c.instructions+=4;NFSU2_TR(0x781310);
{u32 ea_=u32(u32(8135224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781316:{NFSU2_TR(0x781316);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781318:{NFSU2_TR(0x781318);
{u32 ea_=u32(u32(9090660u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78131e:{NFSU2_TR(0x78131e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781320:L781320:{c.instructions+=4;NFSU2_TR(0x781320);
{u32 ea_=u32(u32(8135224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781326:{NFSU2_TR(0x781326);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78132c:{NFSU2_TR(0x78132c);
{u32 ea_=u32(u32(9090656u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781332:{NFSU2_TR(0x781332);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781340:L781340:{c.instructions+=4;NFSU2_TR(0x781340);
{u32 ea_=u32(u32(8135232u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781346:{NFSU2_TR(0x781346);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781348:{NFSU2_TR(0x781348);
{u32 ea_=u32(u32(9090648u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78134e:{NFSU2_TR(0x78134e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781350:L781350:{c.instructions+=4;NFSU2_TR(0x781350);
{u32 ea_=u32(u32(8135232u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781356:{NFSU2_TR(0x781356);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78135c:{NFSU2_TR(0x78135c);
{u32 ea_=u32(u32(9090640u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781362:{NFSU2_TR(0x781362);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781370:L781370:{c.instructions+=4;NFSU2_TR(0x781370);
{u32 ea_=u32(u32(8135336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781376:{NFSU2_TR(0x781376);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781378:{NFSU2_TR(0x781378);
{u32 ea_=u32(u32(9090740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78137e:{NFSU2_TR(0x78137e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781380:L781380:{c.instructions+=4;NFSU2_TR(0x781380);
{u32 ea_=u32(u32(8135336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781386:{NFSU2_TR(0x781386);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78138c:{NFSU2_TR(0x78138c);
{u32 ea_=u32(u32(9090736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781392:{NFSU2_TR(0x781392);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7813a0:L7813a0:{c.instructions+=4;NFSU2_TR(0x7813a0);
{u32 ea_=u32(u32(8135344u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7813a6:{NFSU2_TR(0x7813a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7813a8:{NFSU2_TR(0x7813a8);
{u32 ea_=u32(u32(9090728u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7813ae:{NFSU2_TR(0x7813ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7813b0:L7813b0:{c.instructions+=4;NFSU2_TR(0x7813b0);
{u32 ea_=u32(u32(8135344u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7813b6:{NFSU2_TR(0x7813b6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7813bc:{NFSU2_TR(0x7813bc);
{u32 ea_=u32(u32(9090720u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7813c2:{NFSU2_TR(0x7813c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7813d0:L7813d0:{c.instructions+=8;NFSU2_TR(0x7813d0);
u8 U[4];
w4(U+0,u32(0x7c23b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813d5:{NFSU2_TR(0x7813d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813d7:{NFSU2_TR(0x7813d7);
u8 U[4];
w4(U+0,u32(0x812504ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813dc:{NFSU2_TR(0x7813dc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813de:{NFSU2_TR(0x7813de);
u8 U[4];
w4(U+0,u32(0x811e38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813e3:{NFSU2_TR(0x7813e3);
u8 U[4];
w4(U+0,u32(0x8123a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813e8:{NFSU2_TR(0x7813e8);
w4(R+4,u32(0x8ab668ull));
}
B7813ed:{NFSU2_TR(0x7813ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7813f2ull));
TAIL_STATIC(0x6dab80u,6da);
}
B7813f2:L7813f2:{c.instructions+=2;NFSU2_TR(0x7813f2);
u8 U[4];
w4(U+0,u32(0x782970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7813f7:{NFSU2_TR(0x7813f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7813fcull));
TAIL_STATIC(0x75c5edu,75c);
}
B7813fc:L7813fc:{c.instructions+=2;NFSU2_TR(0x7813fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7813fd:{NFSU2_TR(0x7813fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781400:L781400:{c.instructions+=4;NFSU2_TR(0x781400);
{u32 ea_=u32(u32(8135616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781406:{NFSU2_TR(0x781406);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781408:{NFSU2_TR(0x781408);
{u32 ea_=u32(u32(9090820u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78140e:{NFSU2_TR(0x78140e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781410:L781410:{c.instructions+=4;NFSU2_TR(0x781410);
{u32 ea_=u32(u32(8135616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781416:{NFSU2_TR(0x781416);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78141c:{NFSU2_TR(0x78141c);
{u32 ea_=u32(u32(9090816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B781422:{NFSU2_TR(0x781422);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781430:L781430:{c.instructions+=4;NFSU2_TR(0x781430);
{u32 ea_=u32(u32(8135624u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781436:{NFSU2_TR(0x781436);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781438:{NFSU2_TR(0x781438);
{u32 ea_=u32(u32(9090808u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78143e:{NFSU2_TR(0x78143e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781440:L781440:{c.instructions+=4;NFSU2_TR(0x781440);
{u32 ea_=u32(u32(8135624u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B781446:{NFSU2_TR(0x781446);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78144c:{NFSU2_TR(0x78144c);
{u32 ea_=u32(u32(9090800u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B781452:{NFSU2_TR(0x781452);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781460:L781460:{c.instructions+=8;NFSU2_TR(0x781460);
u8 U[4];
w4(U+0,u32(0x7c0900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781465:{NFSU2_TR(0x781465);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781467:{NFSU2_TR(0x781467);
u8 U[4];
w4(U+0,u32(0x8139dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78146c:{NFSU2_TR(0x78146c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78146e:{NFSU2_TR(0x78146e);
u8 U[4];
w4(U+0,u32(0x812528ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781473:{NFSU2_TR(0x781473);
u8 U[4];
w4(U+0,u32(0x813520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781478:{NFSU2_TR(0x781478);
w4(R+4,u32(0x8ab6b8ull));
}
B78147d:{NFSU2_TR(0x78147d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781482ull));
TAIL_STATIC(0x6dab80u,6da);
}
B781482:L781482:{c.instructions+=2;NFSU2_TR(0x781482);
u8 U[4];
w4(U+0,u32(0x782980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781487:{NFSU2_TR(0x781487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78148cull));
TAIL_STATIC(0x75c5edu,75c);
}
B78148c:L78148c:{c.instructions+=2;NFSU2_TR(0x78148c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78148d:{NFSU2_TR(0x78148d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781490:L781490:{c.instructions+=4;NFSU2_TR(0x781490);
{u32 ea_=u32(u32(8135888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B781496:{NFSU2_TR(0x781496);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B781498:{NFSU2_TR(0x781498);
{u32 ea_=u32(u32(9097900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78149e:{NFSU2_TR(0x78149e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7814a0:L7814a0:{c.instructions+=4;NFSU2_TR(0x7814a0);
{u32 ea_=u32(u32(8135888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7814a6:{NFSU2_TR(0x7814a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7814ac:{NFSU2_TR(0x7814ac);
{u32 ea_=u32(u32(9097896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7814b2:{NFSU2_TR(0x7814b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7814c0:L7814c0:{c.instructions+=4;NFSU2_TR(0x7814c0);
{u32 ea_=u32(u32(8135896u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7814c6:{NFSU2_TR(0x7814c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7814c8:{NFSU2_TR(0x7814c8);
{u32 ea_=u32(u32(9097888u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7814ce:{NFSU2_TR(0x7814ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7814d0:L7814d0:{c.instructions+=4;NFSU2_TR(0x7814d0);
{u32 ea_=u32(u32(8135896u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7814d6:{NFSU2_TR(0x7814d6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7814dc:{NFSU2_TR(0x7814dc);
{u32 ea_=u32(u32(9097880u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7814e2:{NFSU2_TR(0x7814e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7814f0:L7814f0:{c.instructions+=2;NFSU2_TR(0x7814f0);
w4(R+4,u32(0x8ad4f0ull));
}
B7814f5:{NFSU2_TR(0x7814f5);
TAIL_STATIC(0x6f55b6u,6f5);
}
B7814fa:L7814fa:{c.instructions+=3;NFSU2_TR(0x7814fa);
u8 U[4];
w4(U+0,u32(0x7c2fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7814ff:{NFSU2_TR(0x7814ff);
w4(R+4,u32(0x8ad618ull));
}
B781504:{NFSU2_TR(0x781504);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781509ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781509:L781509:{c.instructions+=3;NFSU2_TR(0x781509);
u8 U[4];
w4(U+0,u32(0x782990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78150e:{NFSU2_TR(0x78150e);
s4(0x8ad618,u32(0x7c2ed0ull));
}
B781518:{NFSU2_TR(0x781518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78151dull));
TAIL_STATIC(0x75c5edu,75c);
}
B78151d:L78151d:{c.instructions+=2;NFSU2_TR(0x78151d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78151e:{NFSU2_TR(0x78151e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78151f:L78151f:{c.instructions+=2;NFSU2_TR(0x78151f);
w4(R+4,u32(0x8ad644ull));
}
B781524:{NFSU2_TR(0x781524);
TAIL_STATIC(0x6f55b6u,6f5);
}
B781529:L781529:{c.instructions+=2;NFSU2_TR(0x781529);
w4(R+4,u32(0x8ad680ull));
}
B78152e:{NFSU2_TR(0x78152e);
TAIL_STATIC(0x6f55b6u,6f5);
}
B781533:L781533:{c.instructions+=2;NFSU2_TR(0x781533);
u8 U[4];
w4(U+0,u32(0x78299bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781538:{NFSU2_TR(0x781538);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78153dull));
TAIL_STATIC(0x75c5edu,75c);
}
B78153d:L78153d:{c.instructions+=2;NFSU2_TR(0x78153d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78153e:{NFSU2_TR(0x78153e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78153f:L78153f:{c.instructions+=3;NFSU2_TR(0x78153f);
u8 U[4];
w4(U+0,u32(0x7c3130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781544:{NFSU2_TR(0x781544);
w4(R+4,u32(0x8ad74cull));
}
B781549:{NFSU2_TR(0x781549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78154eull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78154e:L78154e:{c.instructions+=3;NFSU2_TR(0x78154e);
u8 U[4];
w4(U+0,u32(0x7829a5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781553:{NFSU2_TR(0x781553);
s4(0x8ad74c,u32(0x7c30f8ull));
}
B78155d:{NFSU2_TR(0x78155d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781562ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781562:L781562:{c.instructions+=2;NFSU2_TR(0x781562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781563:{NFSU2_TR(0x781563);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781564:L781564:{c.instructions+=3;NFSU2_TR(0x781564);
u8 U[4];
w4(U+0,u32(0x7c3134ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781569:{NFSU2_TR(0x781569);
w4(R+4,u32(0x8ad7b0ull));
}
B78156e:{NFSU2_TR(0x78156e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781573ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781573:L781573:{c.instructions+=3;NFSU2_TR(0x781573);
u8 U[4];
w4(U+0,u32(0x7829b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781578:{NFSU2_TR(0x781578);
s4(0x8ad7b0,u32(0x7c30f8ull));
}
B781582:{NFSU2_TR(0x781582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781587ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781587:L781587:{c.instructions+=2;NFSU2_TR(0x781587);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781588:{NFSU2_TR(0x781588);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781589:L781589:{c.instructions+=3;NFSU2_TR(0x781589);
u8 U[4];
w4(U+0,u32(0x7c3138ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78158e:{NFSU2_TR(0x78158e);
w4(R+4,u32(0x8ad7d8ull));
}
B781593:{NFSU2_TR(0x781593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781598ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781598:L781598:{c.instructions+=3;NFSU2_TR(0x781598);
u8 U[4];
w4(U+0,u32(0x7829bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78159d:{NFSU2_TR(0x78159d);
s4(0x8ad7d8,u32(0x7c30f8ull));
}
B7815a7:{NFSU2_TR(0x7815a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7815acull));
TAIL_STATIC(0x75c5edu,75c);
}
B7815ac:L7815ac:{c.instructions+=2;NFSU2_TR(0x7815ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7815ad:{NFSU2_TR(0x7815ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7815ae:L7815ae:{c.instructions+=3;NFSU2_TR(0x7815ae);
u8 U[4];
w4(U+0,u32(0x7c313cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7815b3:{NFSU2_TR(0x7815b3);
w4(R+4,u32(0x8ad710ull));
}
B7815b8:{NFSU2_TR(0x7815b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7815bdull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7815bd:L7815bd:{c.instructions+=3;NFSU2_TR(0x7815bd);
u8 U[4];
w4(U+0,u32(0x7829c6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7815c2:{NFSU2_TR(0x7815c2);
s4(0x8ad710,u32(0x7c30f8ull));
}
B7815cc:{NFSU2_TR(0x7815cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7815d1ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7815d1:L7815d1:{c.instructions+=2;NFSU2_TR(0x7815d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7815d2:{NFSU2_TR(0x7815d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7815d3:L7815d3:{c.instructions+=3;NFSU2_TR(0x7815d3);
u8 U[4];
w4(U+0,u32(0x7c3140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7815d8:{NFSU2_TR(0x7815d8);
w4(R+4,u32(0x8ad800ull));
}
B7815dd:{NFSU2_TR(0x7815dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7815e2ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7815e2:L7815e2:{c.instructions+=3;NFSU2_TR(0x7815e2);
u8 U[4];
w4(U+0,u32(0x7829d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7815e7:{NFSU2_TR(0x7815e7);
s4(0x8ad800,u32(0x7c30f8ull));
}
B7815f1:{NFSU2_TR(0x7815f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7815f6ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7815f6:L7815f6:{c.instructions+=2;NFSU2_TR(0x7815f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7815f7:{NFSU2_TR(0x7815f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7815f8:L7815f8:{c.instructions+=3;NFSU2_TR(0x7815f8);
u8 U[4];
w4(U+0,u32(0x7c3144ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7815fd:{NFSU2_TR(0x7815fd);
w4(R+4,u32(0x8ad760ull));
}
B781602:{NFSU2_TR(0x781602);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781607ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781607:L781607:{c.instructions+=3;NFSU2_TR(0x781607);
u8 U[4];
w4(U+0,u32(0x7829dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78160c:{NFSU2_TR(0x78160c);
s4(0x8ad760,u32(0x7c30f8ull));
}
B781616:{NFSU2_TR(0x781616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78161bull));
TAIL_STATIC(0x75c5edu,75c);
}
B78161b:L78161b:{c.instructions+=2;NFSU2_TR(0x78161b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78161c:{NFSU2_TR(0x78161c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78161d:L78161d:{c.instructions+=3;NFSU2_TR(0x78161d);
u8 U[4];
w4(U+0,u32(0x7c3148ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781622:{NFSU2_TR(0x781622);
w4(R+4,u32(0x8ad850ull));
}
B781627:{NFSU2_TR(0x781627);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78162cull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78162c:L78162c:{c.instructions+=3;NFSU2_TR(0x78162c);
u8 U[4];
w4(U+0,u32(0x7829e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781631:{NFSU2_TR(0x781631);
s4(0x8ad850,u32(0x7c30f8ull));
}
B78163b:{NFSU2_TR(0x78163b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781640ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781640:L781640:{c.instructions+=2;NFSU2_TR(0x781640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781641:{NFSU2_TR(0x781641);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781642:L781642:{c.instructions+=3;NFSU2_TR(0x781642);
u8 U[4];
w4(U+0,u32(0x7c314cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781647:{NFSU2_TR(0x781647);
w4(R+4,u32(0x8ad724ull));
}
B78164c:{NFSU2_TR(0x78164c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781651ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781651:L781651:{c.instructions+=3;NFSU2_TR(0x781651);
u8 U[4];
w4(U+0,u32(0x7829f2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781656:{NFSU2_TR(0x781656);
s4(0x8ad724,u32(0x7c30f8ull));
}
B781660:{NFSU2_TR(0x781660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781665ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781665:L781665:{c.instructions+=2;NFSU2_TR(0x781665);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781666:{NFSU2_TR(0x781666);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781667:L781667:{c.instructions+=3;NFSU2_TR(0x781667);
u8 U[4];
w4(U+0,u32(0x7c3150ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78166c:{NFSU2_TR(0x78166c);
w4(R+4,u32(0x8ad83cull));
}
B781671:{NFSU2_TR(0x781671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781676ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781676:L781676:{c.instructions+=3;NFSU2_TR(0x781676);
u8 U[4];
w4(U+0,u32(0x7829fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78167b:{NFSU2_TR(0x78167b);
s4(0x8ad83c,u32(0x7c30f8ull));
}
B781685:{NFSU2_TR(0x781685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78168aull));
TAIL_STATIC(0x75c5edu,75c);
}
B78168a:L78168a:{c.instructions+=2;NFSU2_TR(0x78168a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78168b:{NFSU2_TR(0x78168b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78168c:L78168c:{c.instructions+=3;NFSU2_TR(0x78168c);
u8 U[4];
w4(U+0,u32(0x7c3154ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781691:{NFSU2_TR(0x781691);
w4(R+4,u32(0x8ad788ull));
}
B781696:{NFSU2_TR(0x781696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78169bull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78169b:L78169b:{c.instructions+=3;NFSU2_TR(0x78169b);
u8 U[4];
w4(U+0,u32(0x782a08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7816a0:{NFSU2_TR(0x7816a0);
s4(0x8ad788,u32(0x7c30f8ull));
}
B7816aa:{NFSU2_TR(0x7816aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7816afull));
TAIL_STATIC(0x75c5edu,75c);
}
B7816af:L7816af:{c.instructions+=2;NFSU2_TR(0x7816af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7816b0:{NFSU2_TR(0x7816b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7816b1:L7816b1:{c.instructions+=3;NFSU2_TR(0x7816b1);
u8 U[4];
w4(U+0,u32(0x7c3158ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7816b6:{NFSU2_TR(0x7816b6);
w4(R+4,u32(0x8ad814ull));
}
B7816bb:{NFSU2_TR(0x7816bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7816c0ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7816c0:L7816c0:{c.instructions+=3;NFSU2_TR(0x7816c0);
u8 U[4];
w4(U+0,u32(0x782a13ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7816c5:{NFSU2_TR(0x7816c5);
s4(0x8ad814,u32(0x7c30f8ull));
}
B7816cf:{NFSU2_TR(0x7816cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7816d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7816d4:L7816d4:{c.instructions+=2;NFSU2_TR(0x7816d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7816d5:{NFSU2_TR(0x7816d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7816d6:L7816d6:{c.instructions+=3;NFSU2_TR(0x7816d6);
u8 U[4];
w4(U+0,u32(0x7c315cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7816db:{NFSU2_TR(0x7816db);
w4(R+4,u32(0x8ad8b4ull));
}
B7816e0:{NFSU2_TR(0x7816e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7816e5ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7816e5:L7816e5:{c.instructions+=3;NFSU2_TR(0x7816e5);
u8 U[4];
w4(U+0,u32(0x782a1eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7816ea:{NFSU2_TR(0x7816ea);
s4(0x8ad8b4,u32(0x7c30f8ull));
}
B7816f4:{NFSU2_TR(0x7816f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7816f9ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7816f9:L7816f9:{c.instructions+=2;NFSU2_TR(0x7816f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7816fa:{NFSU2_TR(0x7816fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7816fb:L7816fb:{c.instructions+=3;NFSU2_TR(0x7816fb);
u8 U[4];
w4(U+0,u32(0x7c3160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781700:{NFSU2_TR(0x781700);
w4(R+4,u32(0x8ad904ull));
}
B781705:{NFSU2_TR(0x781705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78170aull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78170a:L78170a:{c.instructions+=3;NFSU2_TR(0x78170a);
u8 U[4];
w4(U+0,u32(0x782a29ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78170f:{NFSU2_TR(0x78170f);
s4(0x8ad904,u32(0x7c30f8ull));
}
B781719:{NFSU2_TR(0x781719);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78171eull));
TAIL_STATIC(0x75c5edu,75c);
}
B78171e:L78171e:{c.instructions+=2;NFSU2_TR(0x78171e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78171f:{NFSU2_TR(0x78171f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781720:L781720:{c.instructions+=3;NFSU2_TR(0x781720);
u8 U[4];
w4(U+0,u32(0x7c3164ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781725:{NFSU2_TR(0x781725);
w4(R+4,u32(0x8ad878ull));
}
B78172a:{NFSU2_TR(0x78172a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78172full));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78172f:L78172f:{c.instructions+=3;NFSU2_TR(0x78172f);
u8 U[4];
w4(U+0,u32(0x782a34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781734:{NFSU2_TR(0x781734);
s4(0x8ad878,u32(0x7c30f8ull));
}
B78173e:{NFSU2_TR(0x78173e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781743ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781743:L781743:{c.instructions+=2;NFSU2_TR(0x781743);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781744:{NFSU2_TR(0x781744);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781745:L781745:{c.instructions+=3;NFSU2_TR(0x781745);
u8 U[4];
w4(U+0,u32(0x7c3168ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78174a:{NFSU2_TR(0x78174a);
w4(R+4,u32(0x8ad864ull));
}
B78174f:{NFSU2_TR(0x78174f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781754ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781754:L781754:{c.instructions+=3;NFSU2_TR(0x781754);
u8 U[4];
w4(U+0,u32(0x782a3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781759:{NFSU2_TR(0x781759);
s4(0x8ad864,u32(0x7c30f8ull));
}
B781763:{NFSU2_TR(0x781763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781768ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781768:L781768:{c.instructions+=2;NFSU2_TR(0x781768);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781769:{NFSU2_TR(0x781769);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78176a:L78176a:{c.instructions+=3;NFSU2_TR(0x78176a);
u8 U[4];
w4(U+0,u32(0x7c316cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78176f:{NFSU2_TR(0x78176f);
w4(R+4,u32(0x8ad8c8ull));
}
B781774:{NFSU2_TR(0x781774);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781779ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781779:L781779:{c.instructions+=3;NFSU2_TR(0x781779);
u8 U[4];
w4(U+0,u32(0x782a4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78177e:{NFSU2_TR(0x78177e);
s4(0x8ad8c8,u32(0x7c30f8ull));
}
B781788:{NFSU2_TR(0x781788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78178dull));
TAIL_STATIC(0x75c5edu,75c);
}
B78178d:L78178d:{c.instructions+=2;NFSU2_TR(0x78178d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78178e:{NFSU2_TR(0x78178e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78178f:L78178f:{c.instructions+=3;NFSU2_TR(0x78178f);
u8 U[4];
w4(U+0,u32(0x7c3170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781794:{NFSU2_TR(0x781794);
w4(R+4,u32(0x8ad738ull));
}
B781799:{NFSU2_TR(0x781799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78179eull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78179e:L78179e:{c.instructions+=3;NFSU2_TR(0x78179e);
u8 U[4];
w4(U+0,u32(0x782a55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7817a3:{NFSU2_TR(0x7817a3);
s4(0x8ad738,u32(0x7c30f8ull));
}
B7817ad:{NFSU2_TR(0x7817ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7817b2ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7817b2:L7817b2:{c.instructions+=2;NFSU2_TR(0x7817b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7817b3:{NFSU2_TR(0x7817b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7817b4:L7817b4:{c.instructions+=3;NFSU2_TR(0x7817b4);
u8 U[4];
w4(U+0,u32(0x7c3174ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7817b9:{NFSU2_TR(0x7817b9);
w4(R+4,u32(0x8ad828ull));
}
B7817be:{NFSU2_TR(0x7817be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7817c3ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7817c3:L7817c3:{c.instructions+=3;NFSU2_TR(0x7817c3);
u8 U[4];
w4(U+0,u32(0x782a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7817c8:{NFSU2_TR(0x7817c8);
s4(0x8ad828,u32(0x7c30f8ull));
}
B7817d2:{NFSU2_TR(0x7817d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7817d7ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7817d7:L7817d7:{c.instructions+=2;NFSU2_TR(0x7817d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7817d8:{NFSU2_TR(0x7817d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7817d9:L7817d9:{c.instructions+=3;NFSU2_TR(0x7817d9);
u8 U[4];
w4(U+0,u32(0x7c3178ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7817de:{NFSU2_TR(0x7817de);
w4(R+4,u32(0x8ad774ull));
}
B7817e3:{NFSU2_TR(0x7817e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7817e8ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7817e8:L7817e8:{c.instructions+=3;NFSU2_TR(0x7817e8);
u8 U[4];
w4(U+0,u32(0x782a6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7817ed:{NFSU2_TR(0x7817ed);
s4(0x8ad774,u32(0x7c30f8ull));
}
B7817f7:{NFSU2_TR(0x7817f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7817fcull));
TAIL_STATIC(0x75c5edu,75c);
}
B7817fc:L7817fc:{c.instructions+=2;NFSU2_TR(0x7817fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7817fd:{NFSU2_TR(0x7817fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7817fe:L7817fe:{c.instructions+=3;NFSU2_TR(0x7817fe);
u8 U[4];
w4(U+0,u32(0x7c317cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781803:{NFSU2_TR(0x781803);
w4(R+4,u32(0x8ad8a0ull));
}
B781808:{NFSU2_TR(0x781808);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78180dull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78180d:L78180d:{c.instructions+=3;NFSU2_TR(0x78180d);
u8 U[4];
w4(U+0,u32(0x782a76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781812:{NFSU2_TR(0x781812);
s4(0x8ad8a0,u32(0x7c30f8ull));
}
B78181c:{NFSU2_TR(0x78181c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781821ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781821:L781821:{c.instructions+=2;NFSU2_TR(0x781821);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781822:{NFSU2_TR(0x781822);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781823:L781823:{c.instructions+=3;NFSU2_TR(0x781823);
u8 U[4];
w4(U+0,u32(0x7c3180ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781828:{NFSU2_TR(0x781828);
w4(R+4,u32(0x8ad8dcull));
}
B78182d:{NFSU2_TR(0x78182d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781832ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781832:L781832:{c.instructions+=3;NFSU2_TR(0x781832);
u8 U[4];
w4(U+0,u32(0x782a81ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781837:{NFSU2_TR(0x781837);
s4(0x8ad8dc,u32(0x7c30f8ull));
}
B781841:{NFSU2_TR(0x781841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781846ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781846:L781846:{c.instructions+=2;NFSU2_TR(0x781846);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781847:{NFSU2_TR(0x781847);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781848:L781848:{c.instructions+=3;NFSU2_TR(0x781848);
u8 U[4];
w4(U+0,u32(0x7c3184ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78184d:{NFSU2_TR(0x78184d);
w4(R+4,u32(0x8ad8f0ull));
}
B781852:{NFSU2_TR(0x781852);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781857ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B781857:L781857:{c.instructions+=3;NFSU2_TR(0x781857);
u8 U[4];
w4(U+0,u32(0x782a8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78185c:{NFSU2_TR(0x78185c);
s4(0x8ad8f0,u32(0x7c30f8ull));
}
B781866:{NFSU2_TR(0x781866);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78186bull));
TAIL_STATIC(0x75c5edu,75c);
}
B78186b:L78186b:{c.instructions+=2;NFSU2_TR(0x78186b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78186c:{NFSU2_TR(0x78186c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78186d:L78186d:{c.instructions+=3;NFSU2_TR(0x78186d);
u8 U[4];
w4(U+0,u32(0x7c3188ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781872:{NFSU2_TR(0x781872);
w4(R+4,u32(0x8ad7c4ull));
}
B781877:{NFSU2_TR(0x781877);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78187cull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B78187c:L78187c:{c.instructions+=3;NFSU2_TR(0x78187c);
u8 U[4];
w4(U+0,u32(0x782a97ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781881:{NFSU2_TR(0x781881);
s4(0x8ad7c4,u32(0x7c30f8ull));
}
B78188b:{NFSU2_TR(0x78188b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781890ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781890:L781890:{c.instructions+=2;NFSU2_TR(0x781890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781891:{NFSU2_TR(0x781891);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781892:L781892:{c.instructions+=3;NFSU2_TR(0x781892);
u8 U[4];
w4(U+0,u32(0x7c318cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781897:{NFSU2_TR(0x781897);
w4(R+4,u32(0x8ad88cull));
}
B78189c:{NFSU2_TR(0x78189c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7818a1ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7818a1:L7818a1:{c.instructions+=3;NFSU2_TR(0x7818a1);
u8 U[4];
w4(U+0,u32(0x782aa2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7818a6:{NFSU2_TR(0x7818a6);
s4(0x8ad88c,u32(0x7c30f8ull));
}
B7818b0:{NFSU2_TR(0x7818b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7818b5ull));
TAIL_STATIC(0x75c5edu,75c);
}
B7818b5:L7818b5:{c.instructions+=2;NFSU2_TR(0x7818b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7818b6:{NFSU2_TR(0x7818b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7818b7:L7818b7:{c.instructions+=3;NFSU2_TR(0x7818b7);
u8 U[4];
w4(U+0,u32(0x7c3190ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7818bc:{NFSU2_TR(0x7818bc);
w4(R+4,u32(0x8ad79cull));
}
B7818c1:{NFSU2_TR(0x7818c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7818c6ull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7818c6:L7818c6:{c.instructions+=3;NFSU2_TR(0x7818c6);
u8 U[4];
w4(U+0,u32(0x782aadull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7818cb:{NFSU2_TR(0x7818cb);
s4(0x8ad79c,u32(0x7c30f8ull));
}
B7818d5:{NFSU2_TR(0x7818d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7818daull));
TAIL_STATIC(0x75c5edu,75c);
}
B7818da:L7818da:{c.instructions+=2;NFSU2_TR(0x7818da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7818db:{NFSU2_TR(0x7818db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7818dc:L7818dc:{c.instructions+=3;NFSU2_TR(0x7818dc);
u8 U[4];
w4(U+0,u32(0x7c3194ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7818e1:{NFSU2_TR(0x7818e1);
w4(R+4,u32(0x8ad7ecull));
}
B7818e6:{NFSU2_TR(0x7818e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7818ebull));
TAIL_STATIC(0x6f6c23u,6f6);
}
B7818eb:L7818eb:{c.instructions+=3;NFSU2_TR(0x7818eb);
u8 U[4];
w4(U+0,u32(0x782ab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7818f0:{NFSU2_TR(0x7818f0);
s4(0x8ad7ec,u32(0x7c30f8ull));
}
B7818fa:{NFSU2_TR(0x7818fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7818ffull));
TAIL_STATIC(0x75c5edu,75c);
}
B7818ff:L7818ff:{c.instructions+=2;NFSU2_TR(0x7818ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781900:{NFSU2_TR(0x781900);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781901:L781901:{c.instructions+=2;NFSU2_TR(0x781901);
u8 U[4];
w4(U+0,u32(0x782ac3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781906:{NFSU2_TR(0x781906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78190bull));
TAIL_STATIC(0x75c5edu,75c);
}
B78190b:L78190b:{c.instructions+=2;NFSU2_TR(0x78190b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78190c:{NFSU2_TR(0x78190c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B78190d:L78190d:{c.instructions+=2;NFSU2_TR(0x78190d);
u8 U[4];
w4(U+0,u32(0x782aceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781912:{NFSU2_TR(0x781912);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781917ull));
TAIL_STATIC(0x75c5edu,75c);
}
B781917:L781917:{c.instructions+=2;NFSU2_TR(0x781917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B781918:{NFSU2_TR(0x781918);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781919:L781919:{c.instructions+=1;NFSU2_TR(0x781919);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78191eull));
TAIL_STATIC(0x72ccdeu,72c);
}
B78191e:L78191e:{c.instructions+=2;NFSU2_TR(0x78191e);
__builtin_memmove(gp(0x8b4a20),(R+0),4);
}
B781923:{NFSU2_TR(0x781923);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781924:L781924:{c.instructions+=1;NFSU2_TR(0x781924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781929ull));
TAIL_STATIC(0x72d951u,72d);
}
B781929:L781929:{c.instructions+=3;NFSU2_TR(0x781929);
w4(R+0,u32(r1(R+0)));
}
B78192c:{NFSU2_TR(0x78192c);
__builtin_memmove(gp(0x8b4a2c),(R+0),4);
}
B781931:{NFSU2_TR(0x781931);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781940:L781940:{c.instructions+=1;NFSU2_TR(0x781940);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781950:L781950:{c.instructions+=1;NFSU2_TR(0x781950);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781960:L781960:{c.instructions+=2;NFSU2_TR(0x781960);
w4(R+4,u32(0x81e7ecull));
}
B781965:{NFSU2_TR(0x781965);
TAIL_STATIC(0x4def30u,4de);
}
B781970:L781970:{c.instructions+=2;NFSU2_TR(0x781970);
w4(R+4,u32(0x81cbc0ull));
}
B781975:{NFSU2_TR(0x781975);
TAIL_STATIC(0x413530u,413);
}
B781980:L781980:{c.instructions+=2;NFSU2_TR(0x781980);
w4(R+4,u32(0x81e5b8ull));
}
B781985:{NFSU2_TR(0x781985);
TAIL_STATIC(0x415120u,415);
}
B781990:L781990:{c.instructions+=2;NFSU2_TR(0x781990);
w4(R+4,u32(0x81e388ull));
}
B781995:{NFSU2_TR(0x781995);
TAIL_STATIC(0x415120u,415);
}
B7819a0:L7819a0:{c.instructions+=2;NFSU2_TR(0x7819a0);
w4(R+4,u32(0x81e810ull));
}
B7819a5:{NFSU2_TR(0x7819a5);
TAIL_STATIC(0x41e7c0u,41e);
}
B7819b0:L7819b0:{c.instructions+=5;NFSU2_TR(0x7819b0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819b5:{NFSU2_TR(0x7819b5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819b7:{NFSU2_TR(0x7819b7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819b9:{NFSU2_TR(0x7819b9);
u8 U[4];
w4(U+0,u32(0x827d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819be:{NFSU2_TR(0x7819be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7819c3ull));
TAIL_STATIC(0x75c401u,75c);
}
B7819c3:L7819c3:{c.instructions+=1;NFSU2_TR(0x7819c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7819d0:L7819d0:{c.instructions+=5;NFSU2_TR(0x7819d0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819d5:{NFSU2_TR(0x7819d5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819d7:{NFSU2_TR(0x7819d7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819d9:{NFSU2_TR(0x7819d9);
u8 U[4];
w4(U+0,u32(0x827db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819de:{NFSU2_TR(0x7819de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7819e3ull));
TAIL_STATIC(0x75c401u,75c);
}
B7819e3:L7819e3:{c.instructions+=1;NFSU2_TR(0x7819e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7819f0:L7819f0:{c.instructions+=5;NFSU2_TR(0x7819f0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819f5:{NFSU2_TR(0x7819f5);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819f7:{NFSU2_TR(0x7819f7);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819f9:{NFSU2_TR(0x7819f9);
u8 U[4];
w4(U+0,u32(0x827e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7819fe:{NFSU2_TR(0x7819fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781a03ull));
TAIL_STATIC(0x75c401u,75c);
}
B781a03:L781a03:{c.instructions+=1;NFSU2_TR(0x781a03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781a10:L781a10:{c.instructions+=5;NFSU2_TR(0x781a10);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a15:{NFSU2_TR(0x781a15);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a17:{NFSU2_TR(0x781a17);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a19:{NFSU2_TR(0x781a19);
u8 U[4];
w4(U+0,u32(0x827cd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a1e:{NFSU2_TR(0x781a1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781a23ull));
TAIL_STATIC(0x75c401u,75c);
}
B781a23:L781a23:{c.instructions+=1;NFSU2_TR(0x781a23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781a30:L781a30:{c.instructions+=2;NFSU2_TR(0x781a30);
s4(0x7ea23c,u32(0x785d9cull));
}
B781a3a:{NFSU2_TR(0x781a3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781a40:L781a40:{c.instructions+=2;NFSU2_TR(0x781a40);
s4(0x827e88,u32(0x785da0ull));
}
B781a4a:{NFSU2_TR(0x781a4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781a50:L781a50:{c.instructions+=5;NFSU2_TR(0x781a50);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a55:{NFSU2_TR(0x781a55);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a57:{NFSU2_TR(0x781a57);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a59:{NFSU2_TR(0x781a59);
u8 U[4];
w4(U+0,u32(0x7ea240ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a5e:{NFSU2_TR(0x781a5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781a63ull));
TAIL_STATIC(0x75c401u,75c);
}
B781a63:L781a63:{c.instructions+=1;NFSU2_TR(0x781a63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781a70:L781a70:{c.instructions+=5;NFSU2_TR(0x781a70);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a75:{NFSU2_TR(0x781a75);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a77:{NFSU2_TR(0x781a77);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a79:{NFSU2_TR(0x781a79);
u8 U[4];
w4(U+0,u32(0x7ea2b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a7e:{NFSU2_TR(0x781a7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781a83ull));
TAIL_STATIC(0x75c401u,75c);
}
B781a83:L781a83:{c.instructions+=1;NFSU2_TR(0x781a83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781a90:L781a90:{c.instructions+=5;NFSU2_TR(0x781a90);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a95:{NFSU2_TR(0x781a95);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a97:{NFSU2_TR(0x781a97);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a99:{NFSU2_TR(0x781a99);
u8 U[4];
w4(U+0,u32(0x7ea3c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781a9e:{NFSU2_TR(0x781a9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781aa3ull));
TAIL_STATIC(0x75c401u,75c);
}
B781aa3:L781aa3:{c.instructions+=1;NFSU2_TR(0x781aa3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781ab0:L781ab0:{c.instructions+=5;NFSU2_TR(0x781ab0);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781ab5:{NFSU2_TR(0x781ab5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781ab7:{NFSU2_TR(0x781ab7);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781ab9:{NFSU2_TR(0x781ab9);
u8 U[4];
w4(U+0,u32(0x7ea470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781abe:{NFSU2_TR(0x781abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781ac3ull));
TAIL_STATIC(0x75c401u,75c);
}
B781ac3:L781ac3:{c.instructions+=1;NFSU2_TR(0x781ac3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781ad0:L781ad0:{c.instructions+=2;NFSU2_TR(0x781ad0);
w4(R+4,u32(0x827b80ull));
}
B781ad5:{NFSU2_TR(0x781ad5);
TAIL_STATIC(0x4358e0u,435);
}
B781ae0:L781ae0:{c.instructions+=2;NFSU2_TR(0x781ae0);
w4(R+4,u32(0x827c9cull));
}
B781ae5:{NFSU2_TR(0x781ae5);
TAIL_STATIC(0x4358e0u,435);
}
B781af0:L781af0:{c.instructions+=2;NFSU2_TR(0x781af0);
w4(R+4,u32(0x827da4ull));
}
B781af5:{NFSU2_TR(0x781af5);
TAIL_STATIC(0x4358e0u,435);
}
B781b00:L781b00:{c.instructions+=2;NFSU2_TR(0x781b00);
w4(R+4,u32(0x827c74ull));
}
B781b05:{NFSU2_TR(0x781b05);
TAIL_STATIC(0x435910u,435);
}
B781b10:L781b10:{c.instructions+=2;NFSU2_TR(0x781b10);
w4(R+4,u32(0x827c3cull));
}
B781b15:{NFSU2_TR(0x781b15);
TAIL_STATIC(0x4835c0u,483);
}
B781b20:L781b20:{c.instructions+=2;NFSU2_TR(0x781b20);
w4(R+4,u32(0x827c60ull));
}
B781b25:{NFSU2_TR(0x781b25);
TAIL_STATIC(0x4def30u,4de);
}
B781b30:L781b30:{c.instructions+=2;NFSU2_TR(0x781b30);
w4(R+4,u32(0x827d98ull));
}
B781b35:{NFSU2_TR(0x781b35);
TAIL_STATIC(0x4def30u,4de);
}
B781b40:L781b40:{c.instructions+=2;NFSU2_TR(0x781b40);
w4(R+4,u32(0x827ca4ull));
}
B781b45:{NFSU2_TR(0x781b45);
TAIL_STATIC(0x4835c0u,483);
}
B781b50:L781b50:{c.instructions+=2;NFSU2_TR(0x781b50);
w4(R+4,u32(0x827ef0ull));
}
B781b55:{NFSU2_TR(0x781b55);
TAIL_STATIC(0x43a110u,43a);
}
B781b60:L781b60:{c.instructions+=2;NFSU2_TR(0x781b60);
w4(R+4,u32(0x827b88ull));
}
B781b65:{NFSU2_TR(0x781b65);
TAIL_STATIC(0x43a9a0u,43a);
}
B781b70:L781b70:{c.instructions+=2;NFSU2_TR(0x781b70);
w4(R+4,u32(0x828528ull));
}
B781b75:{NFSU2_TR(0x781b75);
TAIL_STATIC(0x43cad0u,43c);
}
B781b80:L781b80:{c.instructions+=1;NFSU2_TR(0x781b80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781b90:L781b90:{c.instructions+=2;NFSU2_TR(0x781b90);
w4(R+4,u32(0x828530ull));
}
B781b95:{NFSU2_TR(0x781b95);
TAIL_STATIC(0x4407d0u,440);
}
B781ba0:L781ba0:{c.instructions+=2;NFSU2_TR(0x781ba0);
w4(R+4,u32(0x8286fcull));
}
B781ba5:{NFSU2_TR(0x781ba5);
TAIL_STATIC(0x4466c0u,446);
}
B781bb0:L781bb0:{c.instructions+=2;NFSU2_TR(0x781bb0);
w4(R+4,u32(0x828770ull));
}
B781bb5:{NFSU2_TR(0x781bb5);
TAIL_STATIC(0x4579a0u,457);
}
B781bc0:L781bc0:{c.instructions+=2;NFSU2_TR(0x781bc0);
w4(R+4,u32(0x82c6e8ull));
}
B781bc5:{NFSU2_TR(0x781bc5);
TAIL_STATIC(0x5768e0u,576);
}
B781bd0:L781bd0:{c.instructions+=2;NFSU2_TR(0x781bd0);
w4(R+4,u32(0x82c694ull));
}
B781bd5:{NFSU2_TR(0x781bd5);
TAIL_STATIC(0x43cad0u,43c);
}
B781be0:L781be0:{c.instructions+=2;NFSU2_TR(0x781be0);
w4(R+4,u32(0x82c710ull));
}
B781be5:{NFSU2_TR(0x781be5);
TAIL_STATIC(0x605390u,605);
}
B781bf0:L781bf0:{c.instructions+=2;NFSU2_TR(0x781bf0);
w4(R+4,u32(0x82bea0ull));
}
B781bf5:{NFSU2_TR(0x781bf5);
TAIL_STATIC(0x605390u,605);
}
B781c00:L781c00:{c.instructions+=1;NFSU2_TR(0x781c00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c10:L781c10:{c.instructions+=1;NFSU2_TR(0x781c10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c20:L781c20:{c.instructions+=1;NFSU2_TR(0x781c20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c30:L781c30:{c.instructions+=1;NFSU2_TR(0x781c30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c40:L781c40:{c.instructions+=1;NFSU2_TR(0x781c40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c50:L781c50:{c.instructions+=1;NFSU2_TR(0x781c50);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c60:L781c60:{c.instructions+=1;NFSU2_TR(0x781c60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c70:L781c70:{c.instructions+=1;NFSU2_TR(0x781c70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781c80:L781c80:{c.instructions+=2;NFSU2_TR(0x781c80);
w4(R+4,u32(0x82c5e8ull));
}
B781c85:{NFSU2_TR(0x781c85);
TAIL_STATIC(0x605390u,605);
}
B781c90:L781c90:{c.instructions+=1;NFSU2_TR(0x781c90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781ca0:L781ca0:{c.instructions+=1;NFSU2_TR(0x781ca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781cb0:L781cb0:{c.instructions+=1;NFSU2_TR(0x781cb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781cc0:L781cc0:{c.instructions+=1;NFSU2_TR(0x781cc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781cd0:L781cd0:{c.instructions+=1;NFSU2_TR(0x781cd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781ce0:L781ce0:{c.instructions+=1;NFSU2_TR(0x781ce0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781cf0:L781cf0:{c.instructions+=1;NFSU2_TR(0x781cf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781d00:L781d00:{c.instructions+=1;NFSU2_TR(0x781d00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781d10:L781d10:{c.instructions+=1;NFSU2_TR(0x781d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781d20:L781d20:{c.instructions+=1;NFSU2_TR(0x781d20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781d30:L781d30:{c.instructions+=2;NFSU2_TR(0x781d30);
w4(R+4,u32(0x82bebcull));
}
B781d35:{NFSU2_TR(0x781d35);
TAIL_STATIC(0x4835c0u,483);
}
B781d40:L781d40:{c.instructions+=2;NFSU2_TR(0x781d40);
w4(R+4,u32(0x82c6a4ull));
}
B781d45:{NFSU2_TR(0x781d45);
TAIL_STATIC(0x4835c0u,483);
}
B781d50:L781d50:{c.instructions+=2;NFSU2_TR(0x781d50);
w4(R+4,u32(0x82bec4ull));
}
B781d55:{NFSU2_TR(0x781d55);
TAIL_STATIC(0x4835c0u,483);
}
B781d60:L781d60:{c.instructions+=1;NFSU2_TR(0x781d60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781d70:L781d70:{c.instructions+=1;NFSU2_TR(0x781d70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781d80:L781d80:{c.instructions+=5;NFSU2_TR(0x781d80);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781d85:{NFSU2_TR(0x781d85);
u8 U[4];
w4(U+0,u32(0xfaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781d8a:{NFSU2_TR(0x781d8a);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781d8c:{NFSU2_TR(0x781d8c);
u8 U[4];
w4(U+0,u32(0x82dc08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781d91:{NFSU2_TR(0x781d91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781d96ull));
TAIL_STATIC(0x75c401u,75c);
}
B781d96:L781d96:{c.instructions+=1;NFSU2_TR(0x781d96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781da0:L781da0:{c.instructions+=2;NFSU2_TR(0x781da0);
w4(R+4,u32(0x830d08ull));
}
B781da5:{NFSU2_TR(0x781da5);
TAIL_STATIC(0x4def30u,4de);
}
B781db0:L781db0:{c.instructions+=2;NFSU2_TR(0x781db0);
w4(R+4,u32(0x82dbc8ull));
}
B781db5:{NFSU2_TR(0x781db5);
TAIL_STATIC(0x4933e0u,493);
}
B781dc0:L781dc0:{c.instructions+=2;NFSU2_TR(0x781dc0);
w4(R+4,u32(0x8358c0ull));
}
B781dc5:{NFSU2_TR(0x781dc5);
TAIL_STATIC(0x491b40u,491);
}
B781dd0:L781dd0:{c.instructions+=5;NFSU2_TR(0x781dd0);
u8 U[4];
w4(U+0,u32(0x4919d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781dd5:{NFSU2_TR(0x781dd5);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781dd7:{NFSU2_TR(0x781dd7);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781dd9:{NFSU2_TR(0x781dd9);
u8 U[4];
w4(U+0,u32(0x832de0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781dde:{NFSU2_TR(0x781dde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781de3ull));
TAIL_STATIC(0x75c401u,75c);
}
B781de3:L781de3:{c.instructions+=1;NFSU2_TR(0x781de3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781df0:L781df0:{c.instructions+=2;NFSU2_TR(0x781df0);
w4(R+4,u32(0x830af0ull));
}
B781df5:{NFSU2_TR(0x781df5);
TAIL_STATIC(0x491b80u,491);
}
B781e00:L781e00:{c.instructions+=2;NFSU2_TR(0x781e00);
w4(R+4,u32(0x82dc00ull));
}
B781e05:{NFSU2_TR(0x781e05);
TAIL_STATIC(0x491bc0u,491);
}
B781e10:L781e10:{c.instructions+=2;NFSU2_TR(0x781e10);
w4(R+4,u32(0x83579cull));
}
B781e15:{NFSU2_TR(0x781e15);
TAIL_STATIC(0x4933e0u,493);
}
B781e20:L781e20:{c.instructions+=2;NFSU2_TR(0x781e20);
w4(R+4,u32(0x8357e0ull));
}
B781e25:{NFSU2_TR(0x781e25);
TAIL_STATIC(0x4945c0u,494);
}
B781e30:L781e30:{c.instructions+=2;NFSU2_TR(0x781e30);
w4(R+4,u32(0x82dbc0ull));
}
B781e35:{NFSU2_TR(0x781e35);
TAIL_STATIC(0x494570u,494);
}
B781e40:L781e40:{c.instructions+=2;NFSU2_TR(0x781e40);
w4(R+4,u32(0x832da4ull));
}
B781e45:{NFSU2_TR(0x781e45);
TAIL_STATIC(0x494570u,494);
}
B781e50:L781e50:{c.instructions+=2;NFSU2_TR(0x781e50);
w4(R+4,u32(0x830d30ull));
}
B781e55:{NFSU2_TR(0x781e55);
TAIL_STATIC(0x494240u,494);
}
B781e60:L781e60:{c.instructions+=2;NFSU2_TR(0x781e60);
w4(R+4,u32(0x830d14ull));
}
B781e65:{NFSU2_TR(0x781e65);
TAIL_STATIC(0x4def30u,4de);
}
B781e70:L781e70:{c.instructions+=2;NFSU2_TR(0x781e70);
w4(R+4,u32(0x8358c8ull));
}
B781e75:{NFSU2_TR(0x781e75);
TAIL_STATIC(0x4def30u,4de);
}
B781e80:L781e80:{c.instructions+=2;NFSU2_TR(0x781e80);
w4(R+4,u32(0x835860ull));
}
B781e85:{NFSU2_TR(0x781e85);
TAIL_STATIC(0x4945c0u,494);
}
B781e90:L781e90:{c.instructions+=2;NFSU2_TR(0x781e90);
w4(R+4,u32(0x830c78ull));
}
B781e95:{NFSU2_TR(0x781e95);
TAIL_STATIC(0x494980u,494);
}
B781ea0:L781ea0:{c.instructions+=2;NFSU2_TR(0x781ea0);
w4(R+4,u32(0x830ae8ull));
}
B781ea5:{NFSU2_TR(0x781ea5);
TAIL_STATIC(0x494d90u,494);
}
B781eb0:L781eb0:{c.instructions+=2;NFSU2_TR(0x781eb0);
w4(R+4,u32(0x830d1cull));
}
B781eb5:{NFSU2_TR(0x781eb5);
TAIL_STATIC(0x4950f0u,495);
}
B781ec0:L781ec0:{c.instructions+=2;NFSU2_TR(0x781ec0);
w4(R+4,u32(0x835858ull));
}
B781ec5:{NFSU2_TR(0x781ec5);
TAIL_STATIC(0x495130u,495);
}
B781ed0:L781ed0:{c.instructions+=2;NFSU2_TR(0x781ed0);
w4(R+4,u32(0x835794ull));
}
B781ed5:{NFSU2_TR(0x781ed5);
TAIL_STATIC(0x495130u,495);
}
B781ee0:L781ee0:{c.instructions+=2;NFSU2_TR(0x781ee0);
w4(R+4,u32(0x835850ull));
}
B781ee5:{NFSU2_TR(0x781ee5);
TAIL_STATIC(0x495170u,495);
}
B781ef0:L781ef0:{c.instructions+=5;NFSU2_TR(0x781ef0);
u8 U[4];
w4(U+0,u32(0x4957a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781ef5:{NFSU2_TR(0x781ef5);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781ef7:{NFSU2_TR(0x781ef7);
u8 U[4];
w4(U+0,u32(0x44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781ef9:{NFSU2_TR(0x781ef9);
u8 U[4];
w4(U+0,u32(0x836568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781efe:{NFSU2_TR(0x781efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781f03ull));
TAIL_STATIC(0x75c401u,75c);
}
B781f03:L781f03:{c.instructions+=1;NFSU2_TR(0x781f03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781f10:L781f10:{c.instructions+=2;NFSU2_TR(0x781f10);
w4(R+4,u32(0x8364f4ull));
}
B781f15:{NFSU2_TR(0x781f15);
TAIL_STATIC(0x4022c0u,402);
}
B781f20:L781f20:{c.instructions+=2;NFSU2_TR(0x781f20);
w4(R+4,u32(0x8371b0ull));
}
B781f25:{NFSU2_TR(0x781f25);
TAIL_STATIC(0x401800u,401);
}
B781f30:L781f30:{c.instructions+=2;NFSU2_TR(0x781f30);
w4(R+4,u32(0x836750ull));
}
B781f35:{NFSU2_TR(0x781f35);
TAIL_STATIC(0x401800u,401);
}
B781f40:L781f40:{c.instructions+=2;NFSU2_TR(0x781f40);
w4(R+4,u32(0x836560ull));
}
B781f45:{NFSU2_TR(0x781f45);
TAIL_STATIC(0x4835c0u,483);
}
B781f50:L781f50:{c.instructions+=2;NFSU2_TR(0x781f50);
w4(R+4,u32(0x863760ull));
}
B781f55:{NFSU2_TR(0x781f55);
TAIL_STATIC(0x43cad0u,43c);
}
B781f60:L781f60:{c.instructions+=2;NFSU2_TR(0x781f60);
w4(R+4,u32(0x839c40ull));
}
B781f65:{NFSU2_TR(0x781f65);
TAIL_STATIC(0x50f7d0u,50f);
}
B781f70:L781f70:{c.instructions+=1;NFSU2_TR(0x781f70);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781f80:L781f80:{c.instructions+=2;NFSU2_TR(0x781f80);
w4(R+4,u32(0x8637d0ull));
}
B781f85:{NFSU2_TR(0x781f85);
TAIL_STATIC(0x5104b0u,510);
}
B781f90:L781f90:{c.instructions+=1;NFSU2_TR(0x781f90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781fa0:L781fa0:{c.instructions+=2;NFSU2_TR(0x781fa0);
w4(R+4,u32(0x85ad40ull));
}
B781fa5:{NFSU2_TR(0x781fa5);
TAIL_STATIC(0x512e40u,512);
}
B781fb0:L781fb0:{c.instructions+=5;NFSU2_TR(0x781fb0);
u8 U[4];
w4(U+0,u32(0x525c50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781fb5:{NFSU2_TR(0x781fb5);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781fba:{NFSU2_TR(0x781fba);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781fbc:{NFSU2_TR(0x781fbc);
u8 U[4];
w4(U+0,u32(0x8639a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B781fc1:{NFSU2_TR(0x781fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x781fc6ull));
TAIL_STATIC(0x75c401u,75c);
}
B781fc6:L781fc6:{c.instructions+=1;NFSU2_TR(0x781fc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B781fd0:L781fd0:{c.instructions+=2;NFSU2_TR(0x781fd0);
w4(R+4,u32(0x8637b0ull));
}
B781fd5:{NFSU2_TR(0x781fd5);
TAIL_STATIC(0x52cc40u,52c);
}
B781fe0:L781fe0:{c.instructions+=2;NFSU2_TR(0x781fe0);
w4(R+4,u32(0x83a9d0ull));
}
B781fe5:{NFSU2_TR(0x781fe5);
TAIL_STATIC(0x531cc0u,531);
}
B781ff0:L781ff0:{c.instructions+=2;NFSU2_TR(0x781ff0);
w4(R+4,u32(0x8637a0ull));
}
B781ff5:{NFSU2_TR(0x781ff5);
TAIL_STATIC(0x52c420u,52c);
}
XIT:NFSU2_TR_EXIT(0x781,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
