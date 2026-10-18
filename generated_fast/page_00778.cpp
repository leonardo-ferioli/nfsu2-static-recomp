#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_436(u8* __restrict R,Cpu& c);
u32 body_483(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4de(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_532(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_56f(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_573(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_586(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5a1(u8* __restrict R,Cpu& c);
u32 body_5a9(u8* __restrict R,Cpu& c);
u32 body_5aa(u8* __restrict R,Cpu& c);
u32 body_5ae(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_633(u8* __restrict R,Cpu& c);
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x778,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x778,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_778(u8* __restrict R,Cpu& c);
u32 page_778(Cpu& c){return body_778(c.regs.data(),c);}
__attribute__((noinline)) u32 body_778(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x778000:goto L778000;
case 0x778002:c.instructions+=4;goto B778002;
case 0x778007:c.instructions+=3;goto B778007;
case 0x77800a:c.instructions+=2;goto B77800a;
case 0x77800b:c.instructions+=1;goto B77800b;
case 0x778010:goto L778010;
case 0x778013:c.instructions+=1;goto B778013;
case 0x778014:goto L778014;
case 0x778019:c.instructions+=1;goto B778019;
case 0x778020:goto L778020;
case 0x778022:c.instructions+=4;goto B778022;
case 0x778027:c.instructions+=3;goto B778027;
case 0x77802a:c.instructions+=2;goto B77802a;
case 0x77802b:c.instructions+=1;goto B77802b;
case 0x778030:goto L778030;
case 0x778033:c.instructions+=1;goto B778033;
case 0x778034:goto L778034;
case 0x778039:c.instructions+=1;goto B778039;
case 0x778040:goto L778040;
case 0x778042:c.instructions+=4;goto B778042;
case 0x778047:c.instructions+=3;goto B778047;
case 0x77804a:c.instructions+=2;goto B77804a;
case 0x77804b:c.instructions+=1;goto B77804b;
case 0x778050:goto L778050;
case 0x778053:c.instructions+=1;goto B778053;
case 0x778054:goto L778054;
case 0x778059:c.instructions+=1;goto B778059;
case 0x778060:goto L778060;
case 0x778063:c.instructions+=2;goto B778063;
case 0x778064:c.instructions+=1;goto B778064;
case 0x778069:goto L778069;
case 0x77806a:c.instructions+=1;goto B77806a;
case 0x77806b:goto L77806b;
case 0x778070:c.instructions+=1;goto B778070;
case 0x778080:goto L778080;
case 0x778083:c.instructions+=2;goto B778083;
case 0x778084:c.instructions+=1;goto B778084;
case 0x778089:goto L778089;
case 0x77808a:c.instructions+=1;goto B77808a;
case 0x77808b:goto L77808b;
case 0x778090:c.instructions+=1;goto B778090;
case 0x7780a0:goto L7780a0;
case 0x7780a2:c.instructions+=4;goto B7780a2;
case 0x7780a7:c.instructions+=3;goto B7780a7;
case 0x7780aa:c.instructions+=2;goto B7780aa;
case 0x7780ab:c.instructions+=1;goto B7780ab;
case 0x7780b0:goto L7780b0;
case 0x7780b3:c.instructions+=1;goto B7780b3;
case 0x7780b4:goto L7780b4;
case 0x7780b9:c.instructions+=1;goto B7780b9;
case 0x7780c0:goto L7780c0;
case 0x7780c2:c.instructions+=4;goto B7780c2;
case 0x7780c7:c.instructions+=3;goto B7780c7;
case 0x7780ca:c.instructions+=2;goto B7780ca;
case 0x7780cb:c.instructions+=1;goto B7780cb;
case 0x7780d0:goto L7780d0;
case 0x7780d3:c.instructions+=1;goto B7780d3;
case 0x7780d4:goto L7780d4;
case 0x7780d9:c.instructions+=1;goto B7780d9;
case 0x7780e0:goto L7780e0;
case 0x7780e3:c.instructions+=1;goto B7780e3;
case 0x7780e8:goto L7780e8;
case 0x7780eb:c.instructions+=2;goto B7780eb;
case 0x7780f1:c.instructions+=1;goto B7780f1;
case 0x7780f6:goto L7780f6;
case 0x7780fb:c.instructions+=1;goto B7780fb;
case 0x778100:goto L778100;
case 0x778106:c.instructions+=1;goto B778106;
case 0x77810b:goto L77810b;
case 0x778111:c.instructions+=1;goto B778111;
case 0x778116:goto L778116;
case 0x77811b:c.instructions+=1;goto B77811b;
case 0x778120:goto L778120;
case 0x778123:c.instructions+=1;goto B778123;
case 0x778128:goto L778128;
case 0x77812b:c.instructions+=2;goto B77812b;
case 0x77812e:c.instructions+=1;goto B77812e;
case 0x778133:goto L778133;
case 0x778136:c.instructions+=2;goto B778136;
case 0x77813c:c.instructions+=1;goto B77813c;
case 0x778141:goto L778141;
case 0x778144:c.instructions+=2;goto B778144;
case 0x77814a:c.instructions+=1;goto B77814a;
case 0x77814f:goto L77814f;
case 0x778154:c.instructions+=1;goto B778154;
case 0x778160:goto L778160;
case 0x778162:c.instructions+=4;goto B778162;
case 0x778167:c.instructions+=3;goto B778167;
case 0x77816a:c.instructions+=2;goto B77816a;
case 0x77816b:c.instructions+=1;goto B77816b;
case 0x778170:goto L778170;
case 0x778173:c.instructions+=1;goto B778173;
case 0x778174:goto L778174;
case 0x778179:c.instructions+=1;goto B778179;
case 0x778180:goto L778180;
case 0x778182:c.instructions+=4;goto B778182;
case 0x778187:c.instructions+=3;goto B778187;
case 0x77818a:c.instructions+=2;goto B77818a;
case 0x77818b:c.instructions+=1;goto B77818b;
case 0x778190:goto L778190;
case 0x778193:c.instructions+=1;goto B778193;
case 0x778194:goto L778194;
case 0x778196:c.instructions+=4;goto B778196;
case 0x77819b:c.instructions+=3;goto B77819b;
case 0x77819e:c.instructions+=2;goto B77819e;
case 0x77819f:c.instructions+=1;goto B77819f;
case 0x7781a4:goto L7781a4;
case 0x7781a7:c.instructions+=1;goto B7781a7;
case 0x7781a8:goto L7781a8;
case 0x7781aa:c.instructions+=4;goto B7781aa;
case 0x7781af:c.instructions+=3;goto B7781af;
case 0x7781b2:c.instructions+=2;goto B7781b2;
case 0x7781b3:c.instructions+=1;goto B7781b3;
case 0x7781b8:goto L7781b8;
case 0x7781bb:c.instructions+=1;goto B7781bb;
case 0x7781bc:goto L7781bc;
case 0x7781be:c.instructions+=4;goto B7781be;
case 0x7781c3:c.instructions+=3;goto B7781c3;
case 0x7781c6:c.instructions+=2;goto B7781c6;
case 0x7781c7:c.instructions+=1;goto B7781c7;
case 0x7781cc:goto L7781cc;
case 0x7781cf:c.instructions+=1;goto B7781cf;
case 0x7781d0:goto L7781d0;
case 0x7781d2:c.instructions+=4;goto B7781d2;
case 0x7781d7:c.instructions+=3;goto B7781d7;
case 0x7781da:c.instructions+=2;goto B7781da;
case 0x7781db:c.instructions+=1;goto B7781db;
case 0x7781e0:goto L7781e0;
case 0x7781e3:c.instructions+=1;goto B7781e3;
case 0x7781e4:goto L7781e4;
case 0x7781e6:c.instructions+=4;goto B7781e6;
case 0x7781eb:c.instructions+=3;goto B7781eb;
case 0x7781ee:c.instructions+=2;goto B7781ee;
case 0x7781ef:c.instructions+=1;goto B7781ef;
case 0x7781f4:goto L7781f4;
case 0x7781f7:c.instructions+=1;goto B7781f7;
case 0x7781f8:goto L7781f8;
case 0x7781fa:c.instructions+=4;goto B7781fa;
case 0x7781ff:c.instructions+=3;goto B7781ff;
case 0x778202:c.instructions+=2;goto B778202;
case 0x778203:c.instructions+=1;goto B778203;
case 0x778208:goto L778208;
case 0x77820b:c.instructions+=1;goto B77820b;
case 0x77820c:goto L77820c;
case 0x77820e:c.instructions+=4;goto B77820e;
case 0x778213:c.instructions+=3;goto B778213;
case 0x778216:c.instructions+=2;goto B778216;
case 0x778217:c.instructions+=1;goto B778217;
case 0x77821c:goto L77821c;
case 0x77821f:c.instructions+=1;goto B77821f;
case 0x778220:goto L778220;
case 0x778222:c.instructions+=4;goto B778222;
case 0x778227:c.instructions+=3;goto B778227;
case 0x77822a:c.instructions+=2;goto B77822a;
case 0x77822b:c.instructions+=1;goto B77822b;
case 0x778230:goto L778230;
case 0x778233:c.instructions+=1;goto B778233;
case 0x778234:goto L778234;
case 0x778236:c.instructions+=4;goto B778236;
case 0x77823b:c.instructions+=3;goto B77823b;
case 0x77823e:c.instructions+=2;goto B77823e;
case 0x77823f:c.instructions+=1;goto B77823f;
case 0x778244:goto L778244;
case 0x778247:c.instructions+=1;goto B778247;
case 0x778248:goto L778248;
case 0x77824a:c.instructions+=4;goto B77824a;
case 0x77824f:c.instructions+=3;goto B77824f;
case 0x778252:c.instructions+=2;goto B778252;
case 0x778253:c.instructions+=1;goto B778253;
case 0x778258:goto L778258;
case 0x77825b:c.instructions+=1;goto B77825b;
case 0x77825c:goto L77825c;
case 0x77825e:c.instructions+=4;goto B77825e;
case 0x778263:c.instructions+=3;goto B778263;
case 0x778266:c.instructions+=2;goto B778266;
case 0x778267:c.instructions+=1;goto B778267;
case 0x77826c:goto L77826c;
case 0x77826f:c.instructions+=1;goto B77826f;
case 0x778270:goto L778270;
case 0x778272:c.instructions+=4;goto B778272;
case 0x778277:c.instructions+=3;goto B778277;
case 0x77827a:c.instructions+=2;goto B77827a;
case 0x77827b:c.instructions+=1;goto B77827b;
case 0x778280:goto L778280;
case 0x778283:c.instructions+=1;goto B778283;
case 0x778284:goto L778284;
case 0x778289:c.instructions+=1;goto B778289;
case 0x778290:goto L778290;
case 0x778292:c.instructions+=4;goto B778292;
case 0x778297:c.instructions+=3;goto B778297;
case 0x77829a:c.instructions+=2;goto B77829a;
case 0x77829b:c.instructions+=1;goto B77829b;
case 0x7782a0:goto L7782a0;
case 0x7782a3:c.instructions+=1;goto B7782a3;
case 0x7782a4:goto L7782a4;
case 0x7782a9:c.instructions+=1;goto B7782a9;
case 0x7782b0:goto L7782b0;
case 0x7782b3:c.instructions+=1;goto B7782b3;
case 0x7782b8:goto L7782b8;
case 0x7782bb:c.instructions+=2;goto B7782bb;
case 0x7782c1:c.instructions+=1;goto B7782c1;
case 0x7782c6:goto L7782c6;
case 0x7782c9:c.instructions+=2;goto B7782c9;
case 0x7782cf:c.instructions+=1;goto B7782cf;
case 0x7782d4:goto L7782d4;
case 0x7782d7:c.instructions+=2;goto B7782d7;
case 0x7782dd:c.instructions+=1;goto B7782dd;
case 0x7782e2:goto L7782e2;
case 0x7782e5:c.instructions+=2;goto B7782e5;
case 0x7782eb:c.instructions+=1;goto B7782eb;
case 0x7782f0:goto L7782f0;
case 0x7782f5:c.instructions+=1;goto B7782f5;
case 0x778300:goto L778300;
case 0x778302:c.instructions+=4;goto B778302;
case 0x778307:c.instructions+=3;goto B778307;
case 0x77830a:c.instructions+=2;goto B77830a;
case 0x77830b:c.instructions+=1;goto B77830b;
case 0x778310:goto L778310;
case 0x778313:c.instructions+=1;goto B778313;
case 0x778314:goto L778314;
case 0x778319:c.instructions+=1;goto B778319;
case 0x778320:goto L778320;
case 0x778322:c.instructions+=4;goto B778322;
case 0x778327:c.instructions+=3;goto B778327;
case 0x77832a:c.instructions+=2;goto B77832a;
case 0x77832b:c.instructions+=1;goto B77832b;
case 0x778330:goto L778330;
case 0x778333:c.instructions+=1;goto B778333;
case 0x778334:goto L778334;
case 0x778339:c.instructions+=1;goto B778339;
case 0x778340:goto L778340;
case 0x778342:c.instructions+=4;goto B778342;
case 0x778347:c.instructions+=3;goto B778347;
case 0x77834a:c.instructions+=2;goto B77834a;
case 0x77834b:c.instructions+=1;goto B77834b;
case 0x778350:goto L778350;
case 0x778353:c.instructions+=1;goto B778353;
case 0x778354:goto L778354;
case 0x778359:c.instructions+=1;goto B778359;
case 0x778360:goto L778360;
case 0x778362:c.instructions+=4;goto B778362;
case 0x778367:c.instructions+=3;goto B778367;
case 0x77836a:c.instructions+=2;goto B77836a;
case 0x77836b:c.instructions+=1;goto B77836b;
case 0x778370:goto L778370;
case 0x778373:c.instructions+=1;goto B778373;
case 0x778374:goto L778374;
case 0x778379:c.instructions+=1;goto B778379;
case 0x778380:goto L778380;
case 0x778382:c.instructions+=4;goto B778382;
case 0x778387:c.instructions+=3;goto B778387;
case 0x77838a:c.instructions+=2;goto B77838a;
case 0x77838b:c.instructions+=1;goto B77838b;
case 0x778390:goto L778390;
case 0x778393:c.instructions+=1;goto B778393;
case 0x778394:goto L778394;
case 0x778399:c.instructions+=1;goto B778399;
case 0x7783a0:goto L7783a0;
case 0x7783a2:c.instructions+=4;goto B7783a2;
case 0x7783a7:c.instructions+=3;goto B7783a7;
case 0x7783aa:c.instructions+=2;goto B7783aa;
case 0x7783ab:c.instructions+=1;goto B7783ab;
case 0x7783b0:goto L7783b0;
case 0x7783b3:c.instructions+=1;goto B7783b3;
case 0x7783b4:goto L7783b4;
case 0x7783b9:c.instructions+=1;goto B7783b9;
case 0x7783c0:goto L7783c0;
case 0x7783c2:c.instructions+=4;goto B7783c2;
case 0x7783c7:c.instructions+=3;goto B7783c7;
case 0x7783ca:c.instructions+=2;goto B7783ca;
case 0x7783cb:c.instructions+=1;goto B7783cb;
case 0x7783d0:goto L7783d0;
case 0x7783d3:c.instructions+=1;goto B7783d3;
case 0x7783d4:goto L7783d4;
case 0x7783d9:c.instructions+=1;goto B7783d9;
case 0x7783e0:goto L7783e0;
case 0x7783e2:c.instructions+=4;goto B7783e2;
case 0x7783e7:c.instructions+=3;goto B7783e7;
case 0x7783ea:c.instructions+=2;goto B7783ea;
case 0x7783eb:c.instructions+=1;goto B7783eb;
case 0x7783f0:goto L7783f0;
case 0x7783f3:c.instructions+=1;goto B7783f3;
case 0x7783f4:goto L7783f4;
case 0x7783f9:c.instructions+=1;goto B7783f9;
case 0x778400:goto L778400;
case 0x778402:c.instructions+=4;goto B778402;
case 0x778407:c.instructions+=3;goto B778407;
case 0x77840a:c.instructions+=2;goto B77840a;
case 0x77840b:c.instructions+=1;goto B77840b;
case 0x778410:goto L778410;
case 0x778413:c.instructions+=1;goto B778413;
case 0x778414:goto L778414;
case 0x778419:c.instructions+=1;goto B778419;
case 0x778420:goto L778420;
case 0x778422:c.instructions+=4;goto B778422;
case 0x778427:c.instructions+=3;goto B778427;
case 0x77842a:c.instructions+=2;goto B77842a;
case 0x77842b:c.instructions+=1;goto B77842b;
case 0x778430:goto L778430;
case 0x778433:c.instructions+=1;goto B778433;
case 0x778434:goto L778434;
case 0x778439:c.instructions+=1;goto B778439;
case 0x778440:goto L778440;
case 0x778446:c.instructions+=1;goto B778446;
case 0x77844b:goto L77844b;
case 0x778451:c.instructions+=2;goto B778451;
case 0x778454:c.instructions+=1;goto B778454;
case 0x778459:goto L778459;
case 0x77845f:c.instructions+=2;goto B77845f;
case 0x778465:c.instructions+=1;goto B778465;
case 0x77846a:goto L77846a;
case 0x778470:c.instructions+=1;goto B778470;
case 0x778475:goto L778475;
case 0x77847a:c.instructions+=1;goto B77847a;
case 0x778480:goto L778480;
case 0x778483:c.instructions+=1;goto B778483;
case 0x778488:goto L778488;
case 0x77848b:c.instructions+=2;goto B77848b;
case 0x77848e:c.instructions+=1;goto B77848e;
case 0x778493:goto L778493;
case 0x778498:c.instructions+=1;goto B778498;
case 0x7784a0:goto L7784a0;
case 0x7784a2:c.instructions+=4;goto B7784a2;
case 0x7784a7:c.instructions+=3;goto B7784a7;
case 0x7784aa:c.instructions+=2;goto B7784aa;
case 0x7784ab:c.instructions+=1;goto B7784ab;
case 0x7784b0:goto L7784b0;
case 0x7784b3:c.instructions+=1;goto B7784b3;
case 0x7784b4:goto L7784b4;
case 0x7784b9:c.instructions+=1;goto B7784b9;
case 0x7784c0:goto L7784c0;
case 0x7784c3:c.instructions+=1;goto B7784c3;
case 0x7784c8:goto L7784c8;
case 0x7784ca:c.instructions+=4;goto B7784ca;
case 0x7784cf:c.instructions+=3;goto B7784cf;
case 0x7784d2:c.instructions+=2;goto B7784d2;
case 0x7784d3:c.instructions+=1;goto B7784d3;
case 0x7784d8:goto L7784d8;
case 0x7784db:c.instructions+=1;goto B7784db;
case 0x7784dc:goto L7784dc;
case 0x7784e1:c.instructions+=1;goto B7784e1;
case 0x7784f0:goto L7784f0;
case 0x7784f3:c.instructions+=1;goto B7784f3;
case 0x7784f8:goto L7784f8;
case 0x7784fb:c.instructions+=1;goto B7784fb;
case 0x778500:goto L778500;
case 0x778505:c.instructions+=1;goto B778505;
case 0x778510:goto L778510;
case 0x778516:c.instructions+=1;goto B778516;
case 0x77851b:goto L77851b;
case 0x778521:c.instructions+=1;goto B778521;
case 0x778526:goto L778526;
case 0x77852c:c.instructions+=1;goto B77852c;
case 0x778531:goto L778531;
case 0x778536:c.instructions+=1;goto B778536;
case 0x778540:goto L778540;
case 0x778542:c.instructions+=4;goto B778542;
case 0x778547:c.instructions+=3;goto B778547;
case 0x77854a:c.instructions+=2;goto B77854a;
case 0x77854b:c.instructions+=1;goto B77854b;
case 0x778550:goto L778550;
case 0x778553:c.instructions+=1;goto B778553;
case 0x778554:goto L778554;
case 0x778559:c.instructions+=1;goto B778559;
case 0x778560:goto L778560;
case 0x778563:c.instructions+=1;goto B778563;
case 0x778568:goto L778568;
case 0x77856b:c.instructions+=2;goto B77856b;
case 0x778571:c.instructions+=1;goto B778571;
case 0x778576:goto L778576;
case 0x77857b:c.instructions+=1;goto B77857b;
case 0x778580:goto L778580;
case 0x778583:c.instructions+=1;goto B778583;
case 0x778588:goto L778588;
case 0x77858b:c.instructions+=2;goto B77858b;
case 0x778591:c.instructions+=1;goto B778591;
case 0x778596:goto L778596;
case 0x778599:c.instructions+=2;goto B778599;
case 0x77859f:c.instructions+=1;goto B77859f;
case 0x7785a4:goto L7785a4;
case 0x7785a9:c.instructions+=1;goto B7785a9;
case 0x7785b0:goto L7785b0;
case 0x7785b3:c.instructions+=1;goto B7785b3;
case 0x7785b8:goto L7785b8;
case 0x7785bb:c.instructions+=2;goto B7785bb;
case 0x7785c1:c.instructions+=1;goto B7785c1;
case 0x7785c6:goto L7785c6;
case 0x7785c9:c.instructions+=2;goto B7785c9;
case 0x7785cf:c.instructions+=1;goto B7785cf;
case 0x7785d4:goto L7785d4;
case 0x7785d9:c.instructions+=1;goto B7785d9;
case 0x7785e0:goto L7785e0;
case 0x7785e3:c.instructions+=1;goto B7785e3;
case 0x7785e8:goto L7785e8;
case 0x7785eb:c.instructions+=2;goto B7785eb;
case 0x7785f1:c.instructions+=1;goto B7785f1;
case 0x7785f6:goto L7785f6;
case 0x7785fb:c.instructions+=1;goto B7785fb;
case 0x778600:goto L778600;
case 0x778602:c.instructions+=4;goto B778602;
case 0x778607:c.instructions+=3;goto B778607;
case 0x77860a:c.instructions+=2;goto B77860a;
case 0x77860b:c.instructions+=1;goto B77860b;
case 0x778610:goto L778610;
case 0x778613:c.instructions+=1;goto B778613;
case 0x778614:goto L778614;
case 0x778619:c.instructions+=1;goto B778619;
case 0x778620:goto L778620;
case 0x778622:c.instructions+=4;goto B778622;
case 0x778627:c.instructions+=3;goto B778627;
case 0x77862a:c.instructions+=2;goto B77862a;
case 0x77862b:c.instructions+=1;goto B77862b;
case 0x778630:goto L778630;
case 0x778633:c.instructions+=1;goto B778633;
case 0x778634:goto L778634;
case 0x778639:c.instructions+=1;goto B778639;
case 0x778640:goto L778640;
case 0x778642:c.instructions+=4;goto B778642;
case 0x778647:c.instructions+=3;goto B778647;
case 0x77864a:c.instructions+=2;goto B77864a;
case 0x77864b:c.instructions+=1;goto B77864b;
case 0x778650:goto L778650;
case 0x778653:c.instructions+=1;goto B778653;
case 0x778654:goto L778654;
case 0x778659:c.instructions+=1;goto B778659;
case 0x778660:goto L778660;
case 0x778662:c.instructions+=4;goto B778662;
case 0x778667:c.instructions+=3;goto B778667;
case 0x77866a:c.instructions+=2;goto B77866a;
case 0x77866b:c.instructions+=1;goto B77866b;
case 0x778670:goto L778670;
case 0x778673:c.instructions+=1;goto B778673;
case 0x778674:goto L778674;
case 0x778679:c.instructions+=1;goto B778679;
case 0x778680:goto L778680;
case 0x778682:c.instructions+=4;goto B778682;
case 0x778687:c.instructions+=3;goto B778687;
case 0x77868a:c.instructions+=2;goto B77868a;
case 0x77868b:c.instructions+=1;goto B77868b;
case 0x778690:goto L778690;
case 0x778693:c.instructions+=1;goto B778693;
case 0x778694:goto L778694;
case 0x778699:c.instructions+=1;goto B778699;
case 0x7786a0:goto L7786a0;
case 0x7786a2:c.instructions+=4;goto B7786a2;
case 0x7786a7:c.instructions+=3;goto B7786a7;
case 0x7786aa:c.instructions+=2;goto B7786aa;
case 0x7786ab:c.instructions+=1;goto B7786ab;
case 0x7786b0:goto L7786b0;
case 0x7786b3:c.instructions+=1;goto B7786b3;
case 0x7786b4:goto L7786b4;
case 0x7786b9:c.instructions+=1;goto B7786b9;
case 0x7786c0:goto L7786c0;
case 0x7786c3:c.instructions+=1;goto B7786c3;
case 0x7786c8:goto L7786c8;
case 0x7786cd:c.instructions+=1;goto B7786cd;
case 0x7786e0:goto L7786e0;
case 0x7786e2:c.instructions+=4;goto B7786e2;
case 0x7786e7:c.instructions+=3;goto B7786e7;
case 0x7786ea:c.instructions+=2;goto B7786ea;
case 0x7786eb:c.instructions+=1;goto B7786eb;
case 0x7786f0:goto L7786f0;
case 0x7786f3:c.instructions+=1;goto B7786f3;
case 0x7786f4:goto L7786f4;
case 0x7786f9:c.instructions+=1;goto B7786f9;
case 0x778700:goto L778700;
case 0x778702:c.instructions+=4;goto B778702;
case 0x778707:c.instructions+=3;goto B778707;
case 0x77870a:c.instructions+=2;goto B77870a;
case 0x77870b:c.instructions+=1;goto B77870b;
case 0x778710:goto L778710;
case 0x778713:c.instructions+=1;goto B778713;
case 0x778714:goto L778714;
case 0x778719:c.instructions+=1;goto B778719;
case 0x778720:goto L778720;
case 0x778723:c.instructions+=2;goto B778723;
case 0x778726:c.instructions+=1;goto B778726;
case 0x77872b:goto L77872b;
case 0x778730:c.instructions+=1;goto B778730;
case 0x778740:goto L778740;
case 0x778746:c.instructions+=1;goto B778746;
case 0x77874b:goto L77874b;
case 0x778751:c.instructions+=1;goto B778751;
case 0x778756:goto L778756;
case 0x77875b:c.instructions+=1;goto B77875b;
case 0x778760:goto L778760;
case 0x778763:c.instructions+=2;goto B778763;
case 0x778764:c.instructions+=1;goto B778764;
case 0x778769:goto L778769;
case 0x77876a:c.instructions+=1;goto B77876a;
case 0x77876b:goto L77876b;
case 0x778770:c.instructions+=1;goto B778770;
case 0x778780:goto L778780;
case 0x778783:c.instructions+=1;goto B778783;
case 0x778788:goto L778788;
case 0x77878d:c.instructions+=1;goto B77878d;
case 0x7787a0:goto L7787a0;
case 0x7787a5:c.instructions+=3;goto B7787a5;
case 0x7787a8:c.instructions+=2;goto B7787a8;
case 0x7787ad:c.instructions+=1;goto B7787ad;
case 0x7787ae:goto L7787ae;
case 0x7787b3:c.instructions+=1;goto B7787b3;
case 0x7787c0:goto L7787c0;
case 0x7787c3:c.instructions+=2;goto B7787c3;
case 0x7787c4:c.instructions+=1;goto B7787c4;
case 0x7787c9:goto L7787c9;
case 0x7787ca:c.instructions+=1;goto B7787ca;
case 0x7787cb:goto L7787cb;
case 0x7787d0:c.instructions+=1;goto B7787d0;
case 0x7787e0:goto L7787e0;
case 0x7787e3:c.instructions+=2;goto B7787e3;
case 0x7787e9:c.instructions+=1;goto B7787e9;
case 0x7787ee:goto L7787ee;
case 0x7787f1:c.instructions+=2;goto B7787f1;
case 0x7787f7:c.instructions+=1;goto B7787f7;
case 0x7787fc:goto L7787fc;
case 0x778801:c.instructions+=1;goto B778801;
case 0x778810:goto L778810;
case 0x778813:c.instructions+=1;goto B778813;
case 0x778818:goto L778818;
case 0x77881d:c.instructions+=1;goto B77881d;
case 0x778830:goto L778830;
case 0x778833:c.instructions+=2;goto B778833;
case 0x778834:c.instructions+=1;goto B778834;
case 0x778839:goto L778839;
case 0x77883a:c.instructions+=1;goto B77883a;
case 0x77883b:goto L77883b;
case 0x778840:c.instructions+=1;goto B778840;
case 0x778850:goto L778850;
case 0x778853:c.instructions+=2;goto B778853;
case 0x778854:c.instructions+=1;goto B778854;
case 0x778859:goto L778859;
case 0x77885a:c.instructions+=1;goto B77885a;
case 0x77885b:goto L77885b;
case 0x778860:c.instructions+=1;goto B778860;
case 0x778870:goto L778870;
case 0x778873:c.instructions+=1;goto B778873;
case 0x778878:goto L778878;
case 0x77887d:c.instructions+=1;goto B77887d;
case 0x778890:goto L778890;
case 0x778893:c.instructions+=2;goto B778893;
case 0x778894:c.instructions+=1;goto B778894;
case 0x778899:goto L778899;
case 0x77889a:c.instructions+=1;goto B77889a;
case 0x77889b:goto L77889b;
case 0x7788a0:c.instructions+=1;goto B7788a0;
case 0x7788b0:goto L7788b0;
case 0x7788b3:c.instructions+=2;goto B7788b3;
case 0x7788b4:c.instructions+=1;goto B7788b4;
case 0x7788b9:goto L7788b9;
case 0x7788ba:c.instructions+=1;goto B7788ba;
case 0x7788bb:goto L7788bb;
case 0x7788c0:c.instructions+=1;goto B7788c0;
case 0x7788d0:goto L7788d0;
case 0x7788d2:c.instructions+=4;goto B7788d2;
case 0x7788d7:c.instructions+=3;goto B7788d7;
case 0x7788dd:c.instructions+=2;goto B7788dd;
case 0x7788de:c.instructions+=1;goto B7788de;
case 0x7788e3:goto L7788e3;
case 0x7788e6:c.instructions+=1;goto B7788e6;
case 0x7788e7:goto L7788e7;
case 0x7788e9:c.instructions+=4;goto B7788e9;
case 0x7788ee:c.instructions+=3;goto B7788ee;
case 0x7788f4:c.instructions+=2;goto B7788f4;
case 0x7788f5:c.instructions+=1;goto B7788f5;
case 0x7788fa:goto L7788fa;
case 0x7788fd:c.instructions+=1;goto B7788fd;
case 0x7788fe:goto L7788fe;
case 0x778903:c.instructions+=1;goto B778903;
case 0x778910:goto L778910;
case 0x778912:c.instructions+=4;goto B778912;
case 0x778917:c.instructions+=3;goto B778917;
case 0x77891a:c.instructions+=2;goto B77891a;
case 0x77891b:c.instructions+=1;goto B77891b;
case 0x778920:goto L778920;
case 0x778923:c.instructions+=1;goto B778923;
case 0x778924:goto L778924;
case 0x778929:c.instructions+=1;goto B778929;
case 0x778930:goto L778930;
case 0x778932:c.instructions+=5;goto B778932;
case 0x778937:c.instructions+=4;goto B778937;
case 0x77893c:c.instructions+=3;goto B77893c;
case 0x77893f:c.instructions+=2;goto B77893f;
case 0x778940:c.instructions+=1;goto B778940;
case 0x778945:goto L778945;
case 0x778948:c.instructions+=1;goto B778948;
case 0x778949:goto L778949;
case 0x77894e:c.instructions+=1;goto B77894e;
case 0x778960:goto L778960;
case 0x778965:c.instructions+=6;goto B778965;
case 0x778967:c.instructions+=5;goto B778967;
case 0x778969:c.instructions+=4;goto B778969;
case 0x77896c:c.instructions+=3;goto B77896c;
case 0x77896f:c.instructions+=2;goto B77896f;
case 0x778970:c.instructions+=1;goto B778970;
case 0x778975:goto L778975;
case 0x778976:goto L778976;
case 0x778979:c.instructions+=2;goto B778979;
case 0x77897c:c.instructions+=1;goto B77897c;
case 0x778981:goto L778981;
case 0x778984:c.instructions+=2;goto B778984;
case 0x778987:c.instructions+=1;goto B778987;
case 0x77898c:goto L77898c;
case 0x778991:c.instructions+=1;goto B778991;
case 0x7789a0:goto L7789a0;
case 0x7789a3:c.instructions+=1;goto B7789a3;
case 0x7789a8:goto L7789a8;
case 0x7789ab:c.instructions+=2;goto B7789ab;
case 0x7789ae:c.instructions+=1;goto B7789ae;
case 0x7789b3:goto L7789b3;
case 0x7789b8:c.instructions+=1;goto B7789b8;
case 0x7789c0:goto L7789c0;
case 0x7789c2:c.instructions+=5;goto B7789c2;
case 0x7789c7:c.instructions+=4;goto B7789c7;
case 0x7789cc:c.instructions+=3;goto B7789cc;
case 0x7789cf:c.instructions+=2;goto B7789cf;
case 0x7789d0:c.instructions+=1;goto B7789d0;
case 0x7789d5:goto L7789d5;
case 0x7789d8:c.instructions+=1;goto B7789d8;
case 0x7789d9:goto L7789d9;
case 0x7789de:c.instructions+=1;goto B7789de;
case 0x7789f0:goto L7789f0;
case 0x7789f6:c.instructions+=1;goto B7789f6;
case 0x7789fb:goto L7789fb;
case 0x778a00:c.instructions+=1;goto B778a00;
case 0x778a10:goto L778a10;
case 0x778a13:c.instructions+=1;goto B778a13;
case 0x778a18:goto L778a18;
case 0x778a1d:c.instructions+=1;goto B778a1d;
case 0x778a30:goto L778a30;
case 0x778a33:c.instructions+=1;goto B778a33;
case 0x778a38:goto L778a38;
case 0x778a3d:c.instructions+=1;goto B778a3d;
case 0x778a50:goto L778a50;
case 0x778a55:c.instructions+=3;goto B778a55;
case 0x778a58:c.instructions+=2;goto B778a58;
case 0x778a5d:c.instructions+=1;goto B778a5d;
case 0x778a5e:goto L778a5e;
case 0x778a63:c.instructions+=1;goto B778a63;
case 0x778a70:goto L778a70;
case 0x778a75:c.instructions+=3;goto B778a75;
case 0x778a78:c.instructions+=2;goto B778a78;
case 0x778a7d:c.instructions+=1;goto B778a7d;
case 0x778a7e:goto L778a7e;
case 0x778a83:c.instructions+=1;goto B778a83;
case 0x778a90:goto L778a90;
case 0x778a96:c.instructions+=1;goto B778a96;
case 0x778a9b:goto L778a9b;
case 0x778aa0:c.instructions+=1;goto B778aa0;
case 0x778ab0:goto L778ab0;
case 0x778ab6:c.instructions+=1;goto B778ab6;
case 0x778abb:goto L778abb;
case 0x778ac1:c.instructions+=1;goto B778ac1;
case 0x778ac6:goto L778ac6;
case 0x778acb:c.instructions+=1;goto B778acb;
case 0x778ad0:goto L778ad0;
case 0x778ad3:c.instructions+=2;goto B778ad3;
case 0x778ad6:c.instructions+=1;goto B778ad6;
case 0x778adb:goto L778adb;
case 0x778ade:c.instructions+=2;goto B778ade;
case 0x778ae1:c.instructions+=1;goto B778ae1;
case 0x778ae6:goto L778ae6;
case 0x778aeb:c.instructions+=1;goto B778aeb;
case 0x778af0:goto L778af0;
case 0x778af3:c.instructions+=1;goto B778af3;
case 0x778af8:goto L778af8;
case 0x778afd:c.instructions+=1;goto B778afd;
case 0x778b10:goto L778b10;
case 0x778b12:c.instructions+=4;goto B778b12;
case 0x778b17:c.instructions+=3;goto B778b17;
case 0x778b1d:c.instructions+=2;goto B778b1d;
case 0x778b1e:c.instructions+=1;goto B778b1e;
case 0x778b23:goto L778b23;
case 0x778b26:c.instructions+=1;goto B778b26;
case 0x778b27:goto L778b27;
case 0x778b2c:c.instructions+=1;goto B778b2c;
case 0x778b40:goto L778b40;
case 0x778b42:c.instructions+=4;goto B778b42;
case 0x778b47:c.instructions+=3;goto B778b47;
case 0x778b4d:c.instructions+=2;goto B778b4d;
case 0x778b4e:c.instructions+=1;goto B778b4e;
case 0x778b53:goto L778b53;
case 0x778b56:c.instructions+=1;goto B778b56;
case 0x778b57:goto L778b57;
case 0x778b5c:c.instructions+=1;goto B778b5c;
case 0x778b70:goto L778b70;
case 0x778b72:c.instructions+=4;goto B778b72;
case 0x778b77:c.instructions+=3;goto B778b77;
case 0x778b7a:c.instructions+=2;goto B778b7a;
case 0x778b7b:c.instructions+=1;goto B778b7b;
case 0x778b80:goto L778b80;
case 0x778b83:c.instructions+=1;goto B778b83;
case 0x778b84:goto L778b84;
case 0x778b89:c.instructions+=1;goto B778b89;
case 0x778b90:goto L778b90;
case 0x778b93:c.instructions+=1;goto B778b93;
case 0x778b98:goto L778b98;
case 0x778b9b:c.instructions+=2;goto B778b9b;
case 0x778ba1:c.instructions+=1;goto B778ba1;
case 0x778ba6:goto L778ba6;
case 0x778bab:c.instructions+=1;goto B778bab;
case 0x778bb0:goto L778bb0;
case 0x778bb3:c.instructions+=1;goto B778bb3;
case 0x778bb8:goto L778bb8;
case 0x778bbb:c.instructions+=2;goto B778bbb;
case 0x778bbc:c.instructions+=1;goto B778bbc;
case 0x778bc1:goto L778bc1;
case 0x778bc2:c.instructions+=1;goto B778bc2;
case 0x778bc3:goto L778bc3;
case 0x778bc6:c.instructions+=2;goto B778bc6;
case 0x778bc7:c.instructions+=1;goto B778bc7;
case 0x778bcc:goto L778bcc;
case 0x778bcd:c.instructions+=1;goto B778bcd;
case 0x778bce:goto L778bce;
case 0x778bd1:c.instructions+=2;goto B778bd1;
case 0x778bd2:c.instructions+=1;goto B778bd2;
case 0x778bd7:goto L778bd7;
case 0x778bd8:c.instructions+=1;goto B778bd8;
case 0x778bd9:goto L778bd9;
case 0x778bde:c.instructions+=1;goto B778bde;
case 0x778bf0:goto L778bf0;
case 0x778bf3:c.instructions+=1;goto B778bf3;
case 0x778bf8:goto L778bf8;
case 0x778bfd:c.instructions+=1;goto B778bfd;
case 0x778c10:goto L778c10;
case 0x778c13:c.instructions+=2;goto B778c13;
case 0x778c14:c.instructions+=1;goto B778c14;
case 0x778c19:goto L778c19;
case 0x778c1a:c.instructions+=1;goto B778c1a;
case 0x778c1b:goto L778c1b;
case 0x778c20:c.instructions+=1;goto B778c20;
case 0x778c30:goto L778c30;
case 0x778c36:c.instructions+=1;goto B778c36;
case 0x778c3b:goto L778c3b;
case 0x778c41:c.instructions+=2;goto B778c41;
case 0x778c44:c.instructions+=1;goto B778c44;
case 0x778c49:goto L778c49;
case 0x778c4e:c.instructions+=1;goto B778c4e;
case 0x778c60:goto L778c60;
case 0x778c63:c.instructions+=2;goto B778c63;
case 0x778c64:c.instructions+=1;goto B778c64;
case 0x778c69:goto L778c69;
case 0x778c6a:c.instructions+=1;goto B778c6a;
case 0x778c6b:goto L778c6b;
case 0x778c70:c.instructions+=1;goto B778c70;
case 0x778c80:goto L778c80;
case 0x778c83:c.instructions+=2;goto B778c83;
case 0x778c86:c.instructions+=1;goto B778c86;
case 0x778c8b:goto L778c8b;
case 0x778c90:c.instructions+=1;goto B778c90;
case 0x778ca0:goto L778ca0;
case 0x778ca3:c.instructions+=1;goto B778ca3;
case 0x778ca8:goto L778ca8;
case 0x778cad:c.instructions+=1;goto B778cad;
case 0x778cc0:goto L778cc0;
case 0x778cc6:c.instructions+=1;goto B778cc6;
case 0x778ccb:goto L778ccb;
case 0x778cd0:c.instructions+=1;goto B778cd0;
case 0x778ce0:goto L778ce0;
case 0x778ce3:c.instructions+=1;goto B778ce3;
case 0x778ce8:goto L778ce8;
case 0x778ced:c.instructions+=1;goto B778ced;
case 0x778d00:goto L778d00;
case 0x778d03:c.instructions+=2;goto B778d03;
case 0x778d04:c.instructions+=1;goto B778d04;
case 0x778d09:goto L778d09;
case 0x778d0a:c.instructions+=1;goto B778d0a;
case 0x778d0b:goto L778d0b;
case 0x778d10:c.instructions+=1;goto B778d10;
case 0x778d20:goto L778d20;
case 0x778d23:c.instructions+=2;goto B778d23;
case 0x778d29:c.instructions+=1;goto B778d29;
case 0x778d2e:goto L778d2e;
case 0x778d33:c.instructions+=1;goto B778d33;
case 0x778d40:goto L778d40;
case 0x778d43:c.instructions+=1;goto B778d43;
case 0x778d48:goto L778d48;
case 0x778d4d:c.instructions+=1;goto B778d4d;
case 0x778d60:goto L778d60;
case 0x778d63:c.instructions+=2;goto B778d63;
case 0x778d64:c.instructions+=1;goto B778d64;
case 0x778d69:goto L778d69;
case 0x778d6a:c.instructions+=1;goto B778d6a;
case 0x778d6b:goto L778d6b;
case 0x778d70:c.instructions+=1;goto B778d70;
case 0x778d80:goto L778d80;
case 0x778d86:c.instructions+=2;goto B778d86;
case 0x778d87:c.instructions+=1;goto B778d87;
case 0x778d8c:goto L778d8c;
case 0x778d8d:c.instructions+=1;goto B778d8d;
case 0x778d8e:goto L778d8e;
case 0x778d93:c.instructions+=1;goto B778d93;
case 0x778da0:goto L778da0;
case 0x778da3:c.instructions+=1;goto B778da3;
case 0x778da8:goto L778da8;
case 0x778dad:c.instructions+=1;goto B778dad;
case 0x778dc0:goto L778dc0;
case 0x778dc3:c.instructions+=1;goto B778dc3;
case 0x778dc8:goto L778dc8;
case 0x778dcd:c.instructions+=1;goto B778dcd;
case 0x778de0:goto L778de0;
case 0x778de3:c.instructions+=1;goto B778de3;
case 0x778de8:goto L778de8;
case 0x778deb:c.instructions+=2;goto B778deb;
case 0x778dee:c.instructions+=1;goto B778dee;
case 0x778df3:goto L778df3;
case 0x778df8:c.instructions+=1;goto B778df8;
case 0x778e00:goto L778e00;
case 0x778e03:c.instructions+=1;goto B778e03;
case 0x778e08:goto L778e08;
case 0x778e0d:c.instructions+=1;goto B778e0d;
case 0x778e20:goto L778e20;
case 0x778e23:c.instructions+=1;goto B778e23;
case 0x778e28:goto L778e28;
case 0x778e2c:c.instructions+=1;goto B778e2c;
case 0x778e32:goto L778e32;
case 0x778e35:c.instructions+=3;goto B778e35;
case 0x778e38:c.instructions+=2;goto B778e38;
case 0x778e3b:c.instructions+=1;goto B778e3b;
case 0x778e40:goto L778e40;
case 0x778e47:goto L778e47;
case 0x778e4a:c.instructions+=1;goto B778e4a;
case 0x778e4f:goto L778e4f;
case 0x778e54:c.instructions+=1;goto B778e54;
case 0x778e60:goto L778e60;
case 0x778e63:c.instructions+=1;goto B778e63;
case 0x778e68:goto L778e68;
case 0x778e6d:c.instructions+=1;goto B778e6d;
case 0x778e80:goto L778e80;
case 0x778e83:c.instructions+=1;goto B778e83;
case 0x778e88:goto L778e88;
case 0x778e8c:c.instructions+=1;goto B778e8c;
case 0x778e92:goto L778e92;
case 0x778e95:c.instructions+=3;goto B778e95;
case 0x778e98:c.instructions+=2;goto B778e98;
case 0x778e9e:c.instructions+=1;goto B778e9e;
case 0x778ea3:goto L778ea3;
case 0x778ead:goto L778ead;
case 0x778eb3:c.instructions+=1;goto B778eb3;
case 0x778eb8:goto L778eb8;
case 0x778ebd:c.instructions+=1;goto B778ebd;
case 0x778ed0:goto L778ed0;
case 0x778ed3:c.instructions+=2;goto B778ed3;
case 0x778ed4:c.instructions+=1;goto B778ed4;
case 0x778ed9:goto L778ed9;
case 0x778eda:c.instructions+=1;goto B778eda;
case 0x778edb:goto L778edb;
case 0x778ede:c.instructions+=2;goto B778ede;
case 0x778edf:c.instructions+=1;goto B778edf;
case 0x778ee4:goto L778ee4;
case 0x778ee5:c.instructions+=1;goto B778ee5;
case 0x778ee6:goto L778ee6;
case 0x778eeb:c.instructions+=1;goto B778eeb;
case 0x778ef0:goto L778ef0;
case 0x778ef6:c.instructions+=1;goto B778ef6;
case 0x778efb:goto L778efb;
case 0x778f00:c.instructions+=1;goto B778f00;
case 0x778f10:goto L778f10;
case 0x778f16:c.instructions+=2;goto B778f16;
case 0x778f17:c.instructions+=1;goto B778f17;
case 0x778f1c:goto L778f1c;
case 0x778f1d:c.instructions+=1;goto B778f1d;
case 0x778f1e:goto L778f1e;
case 0x778f23:c.instructions+=1;goto B778f23;
case 0x778f30:goto L778f30;
case 0x778f33:c.instructions+=1;goto B778f33;
case 0x778f38:goto L778f38;
case 0x778f3c:c.instructions+=1;goto B778f3c;
case 0x778f42:goto L778f42;
case 0x778f45:c.instructions+=3;goto B778f45;
case 0x778f4a:c.instructions+=2;goto B778f4a;
case 0x778f4d:c.instructions+=1;goto B778f4d;
case 0x778f52:goto L778f52;
case 0x778f59:goto L778f59;
case 0x778f5c:c.instructions+=1;goto B778f5c;
case 0x778f61:goto L778f61;
case 0x778f64:c.instructions+=2;goto B778f64;
case 0x778f6a:c.instructions+=1;goto B778f6a;
case 0x778f6f:goto L778f6f;
case 0x778f72:c.instructions+=2;goto B778f72;
case 0x778f78:c.instructions+=1;goto B778f78;
case 0x778f7d:goto L778f7d;
case 0x778f80:c.instructions+=2;goto B778f80;
case 0x778f86:c.instructions+=1;goto B778f86;
case 0x778f8b:goto L778f8b;
case 0x778f8e:c.instructions+=2;goto B778f8e;
case 0x778f94:c.instructions+=1;goto B778f94;
case 0x778f99:goto L778f99;
case 0x778f9e:c.instructions+=1;goto B778f9e;
case 0x778fb0:goto L778fb0;
case 0x778fb3:c.instructions+=1;goto B778fb3;
case 0x778fb8:goto L778fb8;
case 0x778fbd:c.instructions+=1;goto B778fbd;
case 0x778fd0:goto L778fd0;
case 0x778fd3:c.instructions+=1;goto B778fd3;
case 0x778fd8:goto L778fd8;
case 0x778fdb:c.instructions+=2;goto B778fdb;
case 0x778fe1:c.instructions+=1;goto B778fe1;
case 0x778fe6:goto L778fe6;
case 0x778fe9:c.instructions+=2;goto B778fe9;
case 0x778fef:c.instructions+=1;goto B778fef;
case 0x778ff4:goto L778ff4;
case 0x778ff7:c.instructions+=2;goto B778ff7;
case 0x778ffd:c.instructions+=1;goto B778ffd;
default:missing_instruction(c.pc);}
B778000:L778000:{c.instructions+=5;NFSU2_TR(0x778000);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778002:{NFSU2_TR(0x778002);
u8 U[4];
w4(U+0,u32(0x79cc70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778007:{NFSU2_TR(0x778007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77800a:{NFSU2_TR(0x77800a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77800b:{NFSU2_TR(0x77800b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778010ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778010:L778010:{c.instructions+=2;NFSU2_TR(0x778010);
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
B778013:{NFSU2_TR(0x778013);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778014:L778014:{c.instructions+=2;NFSU2_TR(0x778014);
w4(R+0,u32(0x7e350cull));
}
B778019:{NFSU2_TR(0x778019);
TAIL_STATIC(0x75bfd2u,75b);
}
B778020:L778020:{c.instructions+=5;NFSU2_TR(0x778020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778022:{NFSU2_TR(0x778022);
u8 U[4];
w4(U+0,u32(0x79cc80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778027:{NFSU2_TR(0x778027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77802a:{NFSU2_TR(0x77802a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77802b:{NFSU2_TR(0x77802b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778030ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778030:L778030:{c.instructions+=2;NFSU2_TR(0x778030);
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
B778033:{NFSU2_TR(0x778033);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778034:L778034:{c.instructions+=2;NFSU2_TR(0x778034);
w4(R+0,u32(0x7e3530ull));
}
B778039:{NFSU2_TR(0x778039);
TAIL_STATIC(0x75bfd2u,75b);
}
B778040:L778040:{c.instructions+=5;NFSU2_TR(0x778040);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778042:{NFSU2_TR(0x778042);
u8 U[4];
w4(U+0,u32(0x79cc90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778047:{NFSU2_TR(0x778047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77804a:{NFSU2_TR(0x77804a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77804b:{NFSU2_TR(0x77804b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778050ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778050:L778050:{c.instructions+=2;NFSU2_TR(0x778050);
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
B778053:{NFSU2_TR(0x778053);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778054:L778054:{c.instructions+=2;NFSU2_TR(0x778054);
w4(R+0,u32(0x7e3554ull));
}
B778059:{NFSU2_TR(0x778059);
TAIL_STATIC(0x75bfd2u,75b);
}
B778060:L778060:{c.instructions+=3;NFSU2_TR(0x778060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778063:{NFSU2_TR(0x778063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778064:{NFSU2_TR(0x778064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778069ull));
TAIL_STATIC(0x575630u,575);
}
B778069:L778069:{c.instructions+=2;NFSU2_TR(0x778069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77806a:{NFSU2_TR(0x77806a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77806b:L77806b:{c.instructions+=2;NFSU2_TR(0x77806b);
w4(R+0,u32(0x7e3578ull));
}
B778070:{NFSU2_TR(0x778070);
TAIL_STATIC(0x75bfd2u,75b);
}
B778080:L778080:{c.instructions+=3;NFSU2_TR(0x778080);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778083:{NFSU2_TR(0x778083);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778084:{NFSU2_TR(0x778084);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778089ull));
TAIL_STATIC(0x575630u,575);
}
B778089:L778089:{c.instructions+=2;NFSU2_TR(0x778089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77808a:{NFSU2_TR(0x77808a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77808b:L77808b:{c.instructions+=2;NFSU2_TR(0x77808b);
w4(R+0,u32(0x7e359cull));
}
B778090:{NFSU2_TR(0x778090);
TAIL_STATIC(0x75bfd2u,75b);
}
B7780a0:L7780a0:{c.instructions+=5;NFSU2_TR(0x7780a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7780a2:{NFSU2_TR(0x7780a2);
u8 U[4];
w4(U+0,u32(0x79cca0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7780a7:{NFSU2_TR(0x7780a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7780aa:{NFSU2_TR(0x7780aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7780ab:{NFSU2_TR(0x7780ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7780b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7780b0:L7780b0:{c.instructions+=2;NFSU2_TR(0x7780b0);
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
B7780b3:{NFSU2_TR(0x7780b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7780b4:L7780b4:{c.instructions+=2;NFSU2_TR(0x7780b4);
w4(R+0,u32(0x7e35c0ull));
}
B7780b9:{NFSU2_TR(0x7780b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7780c0:L7780c0:{c.instructions+=5;NFSU2_TR(0x7780c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7780c2:{NFSU2_TR(0x7780c2);
u8 U[4];
w4(U+0,u32(0x79cd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7780c7:{NFSU2_TR(0x7780c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7780ca:{NFSU2_TR(0x7780ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7780cb:{NFSU2_TR(0x7780cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7780d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7780d0:L7780d0:{c.instructions+=2;NFSU2_TR(0x7780d0);
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
B7780d3:{NFSU2_TR(0x7780d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7780d4:L7780d4:{c.instructions+=2;NFSU2_TR(0x7780d4);
w4(R+0,u32(0x7e3608ull));
}
B7780d9:{NFSU2_TR(0x7780d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7780e0:L7780e0:{c.instructions+=2;NFSU2_TR(0x7780e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7780e3:{NFSU2_TR(0x7780e3);
TAIL_STATIC(0x4defb0u,4de);
}
B7780e8:L7780e8:{c.instructions+=3;NFSU2_TR(0x7780e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7780eb:{NFSU2_TR(0x7780eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x154ull))));
}
B7780f1:{NFSU2_TR(0x7780f1);
TAIL_STATIC(0x49d870u,49d);
}
B7780f6:L7780f6:{c.instructions+=2;NFSU2_TR(0x7780f6);
w4(R+0,u32(0x7e3634ull));
}
B7780fb:{NFSU2_TR(0x7780fb);
TAIL_STATIC(0x75bfd2u,75b);
}
B778100:L778100:{c.instructions+=2;NFSU2_TR(0x778100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778106:{NFSU2_TR(0x778106);
TAIL_STATIC(0x4defb0u,4de);
}
B77810b:L77810b:{c.instructions+=2;NFSU2_TR(0x77810b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778111:{NFSU2_TR(0x778111);
TAIL_STATIC(0x401800u,401);
}
B778116:L778116:{c.instructions+=2;NFSU2_TR(0x778116);
w4(R+0,u32(0x7e3660ull));
}
B77811b:{NFSU2_TR(0x77811b);
TAIL_STATIC(0x75bfd2u,75b);
}
B778120:L778120:{c.instructions+=2;NFSU2_TR(0x778120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778123:{NFSU2_TR(0x778123);
TAIL_STATIC(0x510d40u,510);
}
B778128:L778128:{c.instructions+=3;NFSU2_TR(0x778128);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77812b:{NFSU2_TR(0x77812b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x54ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77812e:{NFSU2_TR(0x77812e);
TAIL_STATIC(0x4957a0u,495);
}
B778133:L778133:{c.instructions+=3;NFSU2_TR(0x778133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778136:{NFSU2_TR(0x778136);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x98ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x98ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x98ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77813c:{NFSU2_TR(0x77813c);
TAIL_STATIC(0x4957a0u,495);
}
B778141:L778141:{c.instructions+=3;NFSU2_TR(0x778141);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778144:{NFSU2_TR(0x778144);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xdcull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xdcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xdcull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77814a:{NFSU2_TR(0x77814a);
TAIL_STATIC(0x4957a0u,495);
}
B77814f:L77814f:{c.instructions+=2;NFSU2_TR(0x77814f);
w4(R+0,u32(0x7e369cull));
}
B778154:{NFSU2_TR(0x778154);
TAIL_STATIC(0x75bfd2u,75b);
}
B778160:L778160:{c.instructions+=5;NFSU2_TR(0x778160);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778162:{NFSU2_TR(0x778162);
u8 U[4];
w4(U+0,u32(0x79d278ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778167:{NFSU2_TR(0x778167);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77816a:{NFSU2_TR(0x77816a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77816b:{NFSU2_TR(0x77816b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778170ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778170:L778170:{c.instructions+=2;NFSU2_TR(0x778170);
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
B778173:{NFSU2_TR(0x778173);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778174:L778174:{c.instructions+=2;NFSU2_TR(0x778174);
w4(R+0,u32(0x7e36c0ull));
}
B778179:{NFSU2_TR(0x778179);
TAIL_STATIC(0x75bfd2u,75b);
}
B778180:L778180:{c.instructions+=5;NFSU2_TR(0x778180);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778182:{NFSU2_TR(0x778182);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778187:{NFSU2_TR(0x778187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77818a:{NFSU2_TR(0x77818a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77818b:{NFSU2_TR(0x77818b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778190ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778190:L778190:{c.instructions+=2;NFSU2_TR(0x778190);
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
B778193:{NFSU2_TR(0x778193);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778194:L778194:{c.instructions+=5;NFSU2_TR(0x778194);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778196:{NFSU2_TR(0x778196);
u8 U[4];
w4(U+0,u32(0x79d2a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77819b:{NFSU2_TR(0x77819b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77819e:{NFSU2_TR(0x77819e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77819f:{NFSU2_TR(0x77819f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7781a4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7781a4:L7781a4:{c.instructions+=2;NFSU2_TR(0x7781a4);
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
B7781a7:{NFSU2_TR(0x7781a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7781a8:L7781a8:{c.instructions+=5;NFSU2_TR(0x7781a8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781aa:{NFSU2_TR(0x7781aa);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781af:{NFSU2_TR(0x7781af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7781b2:{NFSU2_TR(0x7781b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781b3:{NFSU2_TR(0x7781b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7781b8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7781b8:L7781b8:{c.instructions+=2;NFSU2_TR(0x7781b8);
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
B7781bb:{NFSU2_TR(0x7781bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7781bc:L7781bc:{c.instructions+=5;NFSU2_TR(0x7781bc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781be:{NFSU2_TR(0x7781be);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781c3:{NFSU2_TR(0x7781c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7781c6:{NFSU2_TR(0x7781c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781c7:{NFSU2_TR(0x7781c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7781ccull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7781cc:L7781cc:{c.instructions+=2;NFSU2_TR(0x7781cc);
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
B7781cf:{NFSU2_TR(0x7781cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7781d0:L7781d0:{c.instructions+=5;NFSU2_TR(0x7781d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781d2:{NFSU2_TR(0x7781d2);
u8 U[4];
w4(U+0,u32(0x79d2a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781d7:{NFSU2_TR(0x7781d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7781da:{NFSU2_TR(0x7781da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781db:{NFSU2_TR(0x7781db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7781e0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7781e0:L7781e0:{c.instructions+=2;NFSU2_TR(0x7781e0);
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
B7781e3:{NFSU2_TR(0x7781e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7781e4:L7781e4:{c.instructions+=5;NFSU2_TR(0x7781e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781e6:{NFSU2_TR(0x7781e6);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781eb:{NFSU2_TR(0x7781eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7781ee:{NFSU2_TR(0x7781ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781ef:{NFSU2_TR(0x7781ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7781f4ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7781f4:L7781f4:{c.instructions+=2;NFSU2_TR(0x7781f4);
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
B7781f7:{NFSU2_TR(0x7781f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7781f8:L7781f8:{c.instructions+=5;NFSU2_TR(0x7781f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781fa:{NFSU2_TR(0x7781fa);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7781ff:{NFSU2_TR(0x7781ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778202:{NFSU2_TR(0x778202);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778203:{NFSU2_TR(0x778203);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778208ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778208:L778208:{c.instructions+=2;NFSU2_TR(0x778208);
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
B77820b:{NFSU2_TR(0x77820b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77820c:L77820c:{c.instructions+=5;NFSU2_TR(0x77820c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77820e:{NFSU2_TR(0x77820e);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778213:{NFSU2_TR(0x778213);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778216:{NFSU2_TR(0x778216);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778217:{NFSU2_TR(0x778217);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77821cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77821c:L77821c:{c.instructions+=2;NFSU2_TR(0x77821c);
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
B77821f:{NFSU2_TR(0x77821f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778220:L778220:{c.instructions+=5;NFSU2_TR(0x778220);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778222:{NFSU2_TR(0x778222);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778227:{NFSU2_TR(0x778227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77822a:{NFSU2_TR(0x77822a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77822b:{NFSU2_TR(0x77822b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778230ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778230:L778230:{c.instructions+=2;NFSU2_TR(0x778230);
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
B778233:{NFSU2_TR(0x778233);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778234:L778234:{c.instructions+=5;NFSU2_TR(0x778234);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778236:{NFSU2_TR(0x778236);
u8 U[4];
w4(U+0,u32(0x79d290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77823b:{NFSU2_TR(0x77823b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77823e:{NFSU2_TR(0x77823e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77823f:{NFSU2_TR(0x77823f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778244ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778244:L778244:{c.instructions+=2;NFSU2_TR(0x778244);
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
B778247:{NFSU2_TR(0x778247);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778248:L778248:{c.instructions+=5;NFSU2_TR(0x778248);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77824a:{NFSU2_TR(0x77824a);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77824f:{NFSU2_TR(0x77824f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778252:{NFSU2_TR(0x778252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778253:{NFSU2_TR(0x778253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778258ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778258:L778258:{c.instructions+=2;NFSU2_TR(0x778258);
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
B77825b:{NFSU2_TR(0x77825b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77825c:L77825c:{c.instructions+=5;NFSU2_TR(0x77825c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77825e:{NFSU2_TR(0x77825e);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778263:{NFSU2_TR(0x778263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778266:{NFSU2_TR(0x778266);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778267:{NFSU2_TR(0x778267);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77826cull));
TAIL_STATIC(0x6d7120u,6d7);
}
B77826c:L77826c:{c.instructions+=2;NFSU2_TR(0x77826c);
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
B77826f:{NFSU2_TR(0x77826f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778270:L778270:{c.instructions+=5;NFSU2_TR(0x778270);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778272:{NFSU2_TR(0x778272);
u8 U[4];
w4(U+0,u32(0x79be5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778277:{NFSU2_TR(0x778277);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77827a:{NFSU2_TR(0x77827a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77827b:{NFSU2_TR(0x77827b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778280ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778280:L778280:{c.instructions+=2;NFSU2_TR(0x778280);
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
B778283:{NFSU2_TR(0x778283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778284:L778284:{c.instructions+=2;NFSU2_TR(0x778284);
w4(R+0,u32(0x7e3794ull));
}
B778289:{NFSU2_TR(0x778289);
TAIL_STATIC(0x75bfd2u,75b);
}
B778290:L778290:{c.instructions+=5;NFSU2_TR(0x778290);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778292:{NFSU2_TR(0x778292);
u8 U[4];
w4(U+0,u32(0x79d2bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778297:{NFSU2_TR(0x778297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77829a:{NFSU2_TR(0x77829a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77829b:{NFSU2_TR(0x77829b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7782a0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7782a0:L7782a0:{c.instructions+=2;NFSU2_TR(0x7782a0);
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
B7782a3:{NFSU2_TR(0x7782a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7782a4:L7782a4:{c.instructions+=2;NFSU2_TR(0x7782a4);
w4(R+0,u32(0x7e37b8ull));
}
B7782a9:{NFSU2_TR(0x7782a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7782b0:L7782b0:{c.instructions+=2;NFSU2_TR(0x7782b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7782b3:{NFSU2_TR(0x7782b3);
TAIL_STATIC(0x4defb0u,4de);
}
B7782b8:L7782b8:{c.instructions+=3;NFSU2_TR(0x7782b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7782bb:{NFSU2_TR(0x7782bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
}
B7782c1:{NFSU2_TR(0x7782c1);
TAIL_STATIC(0x4358e0u,435);
}
B7782c6:L7782c6:{c.instructions+=3;NFSU2_TR(0x7782c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7782c9:{NFSU2_TR(0x7782c9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x164ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x164ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x164ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7782cf:{NFSU2_TR(0x7782cf);
TAIL_STATIC(0x4957a0u,495);
}
B7782d4:L7782d4:{c.instructions+=3;NFSU2_TR(0x7782d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7782d7:{NFSU2_TR(0x7782d7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1b0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1b0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1b0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7782dd:{NFSU2_TR(0x7782dd);
TAIL_STATIC(0x4957a0u,495);
}
B7782e2:L7782e2:{c.instructions+=3;NFSU2_TR(0x7782e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7782e5:{NFSU2_TR(0x7782e5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x1fcull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x1fcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1fcull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7782eb:{NFSU2_TR(0x7782eb);
TAIL_STATIC(0x4957a0u,495);
}
B7782f0:L7782f0:{c.instructions+=2;NFSU2_TR(0x7782f0);
w4(R+0,u32(0x7e37fcull));
}
B7782f5:{NFSU2_TR(0x7782f5);
TAIL_STATIC(0x75bfd2u,75b);
}
B778300:L778300:{c.instructions+=5;NFSU2_TR(0x778300);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778302:{NFSU2_TR(0x778302);
u8 U[4];
w4(U+0,u32(0x79d2f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778307:{NFSU2_TR(0x778307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77830a:{NFSU2_TR(0x77830a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77830b:{NFSU2_TR(0x77830b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778310ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778310:L778310:{c.instructions+=2;NFSU2_TR(0x778310);
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
B778313:{NFSU2_TR(0x778313);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778314:L778314:{c.instructions+=2;NFSU2_TR(0x778314);
w4(R+0,u32(0x7e3820ull));
}
B778319:{NFSU2_TR(0x778319);
TAIL_STATIC(0x75bfd2u,75b);
}
B778320:L778320:{c.instructions+=5;NFSU2_TR(0x778320);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778322:{NFSU2_TR(0x778322);
u8 U[4];
w4(U+0,u32(0x79d384ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778327:{NFSU2_TR(0x778327);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77832a:{NFSU2_TR(0x77832a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77832b:{NFSU2_TR(0x77832b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778330ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778330:L778330:{c.instructions+=2;NFSU2_TR(0x778330);
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
B778333:{NFSU2_TR(0x778333);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778334:L778334:{c.instructions+=2;NFSU2_TR(0x778334);
w4(R+0,u32(0x7e3868ull));
}
B778339:{NFSU2_TR(0x778339);
TAIL_STATIC(0x75bfd2u,75b);
}
B778340:L778340:{c.instructions+=5;NFSU2_TR(0x778340);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778342:{NFSU2_TR(0x778342);
u8 U[4];
w4(U+0,u32(0x79d398ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778347:{NFSU2_TR(0x778347);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77834a:{NFSU2_TR(0x77834a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77834b:{NFSU2_TR(0x77834b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778350ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778350:L778350:{c.instructions+=2;NFSU2_TR(0x778350);
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
B778353:{NFSU2_TR(0x778353);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778354:L778354:{c.instructions+=2;NFSU2_TR(0x778354);
w4(R+0,u32(0x7e388cull));
}
B778359:{NFSU2_TR(0x778359);
TAIL_STATIC(0x75bfd2u,75b);
}
B778360:L778360:{c.instructions+=5;NFSU2_TR(0x778360);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778362:{NFSU2_TR(0x778362);
u8 U[4];
w4(U+0,u32(0x79d3ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778367:{NFSU2_TR(0x778367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77836a:{NFSU2_TR(0x77836a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77836b:{NFSU2_TR(0x77836b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778370ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778370:L778370:{c.instructions+=2;NFSU2_TR(0x778370);
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
B778373:{NFSU2_TR(0x778373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778374:L778374:{c.instructions+=2;NFSU2_TR(0x778374);
w4(R+0,u32(0x7e38b0ull));
}
B778379:{NFSU2_TR(0x778379);
TAIL_STATIC(0x75bfd2u,75b);
}
B778380:L778380:{c.instructions+=5;NFSU2_TR(0x778380);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778382:{NFSU2_TR(0x778382);
u8 U[4];
w4(U+0,u32(0x79d690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778387:{NFSU2_TR(0x778387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77838a:{NFSU2_TR(0x77838a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77838b:{NFSU2_TR(0x77838b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778390ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778390:L778390:{c.instructions+=2;NFSU2_TR(0x778390);
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
B778393:{NFSU2_TR(0x778393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778394:L778394:{c.instructions+=2;NFSU2_TR(0x778394);
w4(R+0,u32(0x7e38d4ull));
}
B778399:{NFSU2_TR(0x778399);
TAIL_STATIC(0x75bfd2u,75b);
}
B7783a0:L7783a0:{c.instructions+=5;NFSU2_TR(0x7783a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783a2:{NFSU2_TR(0x7783a2);
u8 U[4];
w4(U+0,u32(0x79d6b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783a7:{NFSU2_TR(0x7783a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7783aa:{NFSU2_TR(0x7783aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783ab:{NFSU2_TR(0x7783ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7783b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7783b0:L7783b0:{c.instructions+=2;NFSU2_TR(0x7783b0);
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
B7783b3:{NFSU2_TR(0x7783b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7783b4:L7783b4:{c.instructions+=2;NFSU2_TR(0x7783b4);
w4(R+0,u32(0x7e38f8ull));
}
B7783b9:{NFSU2_TR(0x7783b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7783c0:L7783c0:{c.instructions+=5;NFSU2_TR(0x7783c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783c2:{NFSU2_TR(0x7783c2);
u8 U[4];
w4(U+0,u32(0x79d6c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783c7:{NFSU2_TR(0x7783c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7783ca:{NFSU2_TR(0x7783ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783cb:{NFSU2_TR(0x7783cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7783d0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7783d0:L7783d0:{c.instructions+=2;NFSU2_TR(0x7783d0);
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
B7783d3:{NFSU2_TR(0x7783d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7783d4:L7783d4:{c.instructions+=2;NFSU2_TR(0x7783d4);
w4(R+0,u32(0x7e391cull));
}
B7783d9:{NFSU2_TR(0x7783d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7783e0:L7783e0:{c.instructions+=5;NFSU2_TR(0x7783e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783e2:{NFSU2_TR(0x7783e2);
u8 U[4];
w4(U+0,u32(0x79d6dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783e7:{NFSU2_TR(0x7783e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7783ea:{NFSU2_TR(0x7783ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7783eb:{NFSU2_TR(0x7783eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7783f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7783f0:L7783f0:{c.instructions+=2;NFSU2_TR(0x7783f0);
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
B7783f3:{NFSU2_TR(0x7783f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7783f4:L7783f4:{c.instructions+=2;NFSU2_TR(0x7783f4);
w4(R+0,u32(0x7e3940ull));
}
B7783f9:{NFSU2_TR(0x7783f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B778400:L778400:{c.instructions+=5;NFSU2_TR(0x778400);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778402:{NFSU2_TR(0x778402);
u8 U[4];
w4(U+0,u32(0x79d6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778407:{NFSU2_TR(0x778407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77840a:{NFSU2_TR(0x77840a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77840b:{NFSU2_TR(0x77840b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778410ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778410:L778410:{c.instructions+=2;NFSU2_TR(0x778410);
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
B778413:{NFSU2_TR(0x778413);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778414:L778414:{c.instructions+=2;NFSU2_TR(0x778414);
w4(R+0,u32(0x7e3964ull));
}
B778419:{NFSU2_TR(0x778419);
TAIL_STATIC(0x75bfd2u,75b);
}
B778420:L778420:{c.instructions+=5;NFSU2_TR(0x778420);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778422:{NFSU2_TR(0x778422);
u8 U[4];
w4(U+0,u32(0x79d708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778427:{NFSU2_TR(0x778427);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77842a:{NFSU2_TR(0x77842a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77842b:{NFSU2_TR(0x77842b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778430ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778430:L778430:{c.instructions+=2;NFSU2_TR(0x778430);
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
B778433:{NFSU2_TR(0x778433);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778434:L778434:{c.instructions+=2;NFSU2_TR(0x778434);
w4(R+0,u32(0x7e3988ull));
}
B778439:{NFSU2_TR(0x778439);
TAIL_STATIC(0x75bfd2u,75b);
}
B778440:L778440:{c.instructions+=2;NFSU2_TR(0x778440);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778446:{NFSU2_TR(0x778446);
TAIL_STATIC(0x510d40u,510);
}
B77844b:L77844b:{c.instructions+=3;NFSU2_TR(0x77844b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778451:{NFSU2_TR(0x778451);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B778454:{NFSU2_TR(0x778454);
TAIL_STATIC(0x52ea90u,52e);
}
B778459:L778459:{c.instructions+=3;NFSU2_TR(0x778459);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77845f:{NFSU2_TR(0x77845f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
}
B778465:{NFSU2_TR(0x778465);
TAIL_STATIC(0x52ea90u,52e);
}
B77846a:L77846a:{c.instructions+=2;NFSU2_TR(0x77846a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778470:{NFSU2_TR(0x778470);
TAIL_STATIC(0x401800u,401);
}
B778475:L778475:{c.instructions+=2;NFSU2_TR(0x778475);
w4(R+0,u32(0x7e39c4ull));
}
B77847a:{NFSU2_TR(0x77847a);
TAIL_STATIC(0x75bfd2u,75b);
}
B778480:L778480:{c.instructions+=2;NFSU2_TR(0x778480);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778483:{NFSU2_TR(0x778483);
TAIL_STATIC(0x510d40u,510);
}
B778488:L778488:{c.instructions+=3;NFSU2_TR(0x778488);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77848b:{NFSU2_TR(0x77848b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B77848e:{NFSU2_TR(0x77848e);
TAIL_STATIC(0x52ea90u,52e);
}
B778493:L778493:{c.instructions+=2;NFSU2_TR(0x778493);
w4(R+0,u32(0x7e39f0ull));
}
B778498:{NFSU2_TR(0x778498);
TAIL_STATIC(0x75bfd2u,75b);
}
B7784a0:L7784a0:{c.instructions+=5;NFSU2_TR(0x7784a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7784a2:{NFSU2_TR(0x7784a2);
u8 U[4];
w4(U+0,u32(0x79d7b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7784a7:{NFSU2_TR(0x7784a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7784aa:{NFSU2_TR(0x7784aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7784ab:{NFSU2_TR(0x7784ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7784b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7784b0:L7784b0:{c.instructions+=2;NFSU2_TR(0x7784b0);
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
B7784b3:{NFSU2_TR(0x7784b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7784b4:L7784b4:{c.instructions+=2;NFSU2_TR(0x7784b4);
w4(R+0,u32(0x7e3a40ull));
}
B7784b9:{NFSU2_TR(0x7784b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7784c0:L7784c0:{c.instructions+=2;NFSU2_TR(0x7784c0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B7784c3:{NFSU2_TR(0x7784c3);
TAIL_STATIC(0x4def30u,4de);
}
B7784c8:L7784c8:{c.instructions+=5;NFSU2_TR(0x7784c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7784ca:{NFSU2_TR(0x7784ca);
u8 U[4];
w4(U+0,u32(0x79d7a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7784cf:{NFSU2_TR(0x7784cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7784d2:{NFSU2_TR(0x7784d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7784d3:{NFSU2_TR(0x7784d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7784d8ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7784d8:L7784d8:{c.instructions+=2;NFSU2_TR(0x7784d8);
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
B7784db:{NFSU2_TR(0x7784db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7784dc:L7784dc:{c.instructions+=2;NFSU2_TR(0x7784dc);
w4(R+0,u32(0x7e3a1cull));
}
B7784e1:{NFSU2_TR(0x7784e1);
TAIL_STATIC(0x75bfd2u,75b);
}
B7784f0:L7784f0:{c.instructions+=2;NFSU2_TR(0x7784f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7784f3:{NFSU2_TR(0x7784f3);
TAIL_STATIC(0x4def30u,4de);
}
B7784f8:L7784f8:{c.instructions+=2;NFSU2_TR(0x7784f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7784fb:{NFSU2_TR(0x7784fb);
TAIL_STATIC(0x4def30u,4de);
}
B778500:L778500:{c.instructions+=2;NFSU2_TR(0x778500);
w4(R+0,u32(0x7e3a6cull));
}
B778505:{NFSU2_TR(0x778505);
TAIL_STATIC(0x75bfd2u,75b);
}
B778510:L778510:{c.instructions+=2;NFSU2_TR(0x778510);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff6fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778516:{NFSU2_TR(0x778516);
TAIL_STATIC(0x510d40u,510);
}
B77851b:L77851b:{c.instructions+=2;NFSU2_TR(0x77851b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778521:{NFSU2_TR(0x778521);
TAIL_STATIC(0x4017f0u,401);
}
B778526:L778526:{c.instructions+=2;NFSU2_TR(0x778526);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77852c:{NFSU2_TR(0x77852c);
TAIL_STATIC(0x401800u,401);
}
B778531:L778531:{c.instructions+=2;NFSU2_TR(0x778531);
w4(R+0,u32(0x7e3aa0ull));
}
B778536:{NFSU2_TR(0x778536);
TAIL_STATIC(0x75bfd2u,75b);
}
B778540:L778540:{c.instructions+=5;NFSU2_TR(0x778540);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778542:{NFSU2_TR(0x778542);
u8 U[4];
w4(U+0,u32(0x79d860ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778547:{NFSU2_TR(0x778547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77854a:{NFSU2_TR(0x77854a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77854b:{NFSU2_TR(0x77854b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778550ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778550:L778550:{c.instructions+=2;NFSU2_TR(0x778550);
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
B778553:{NFSU2_TR(0x778553);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778554:L778554:{c.instructions+=2;NFSU2_TR(0x778554);
w4(R+0,u32(0x7e3ac4ull));
}
B778559:{NFSU2_TR(0x778559);
TAIL_STATIC(0x75bfd2u,75b);
}
B778560:L778560:{c.instructions+=2;NFSU2_TR(0x778560);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778563:{NFSU2_TR(0x778563);
TAIL_STATIC(0x4defb0u,4de);
}
B778568:L778568:{c.instructions+=3;NFSU2_TR(0x778568);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77856b:{NFSU2_TR(0x77856b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x150ull))));
}
B778571:{NFSU2_TR(0x778571);
TAIL_STATIC(0x52ea90u,52e);
}
B778576:L778576:{c.instructions+=2;NFSU2_TR(0x778576);
w4(R+0,u32(0x7e3b14ull));
}
B77857b:{NFSU2_TR(0x77857b);
TAIL_STATIC(0x75bfd2u,75b);
}
B778580:L778580:{c.instructions+=2;NFSU2_TR(0x778580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778583:{NFSU2_TR(0x778583);
TAIL_STATIC(0x4cbc30u,4cb);
}
B778588:L778588:{c.instructions+=3;NFSU2_TR(0x778588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B77858b:{NFSU2_TR(0x77858b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x14cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x14cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B778591:{NFSU2_TR(0x778591);
TAIL_STATIC(0x4957a0u,495);
}
B778596:L778596:{c.instructions+=3;NFSU2_TR(0x778596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778599:{NFSU2_TR(0x778599);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x198ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x198ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x198ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B77859f:{NFSU2_TR(0x77859f);
TAIL_STATIC(0x4957a0u,495);
}
B7785a4:L7785a4:{c.instructions+=2;NFSU2_TR(0x7785a4);
w4(R+0,u32(0x7e3b6cull));
}
B7785a9:{NFSU2_TR(0x7785a9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7785b0:L7785b0:{c.instructions+=2;NFSU2_TR(0x7785b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7785b3:{NFSU2_TR(0x7785b3);
TAIL_STATIC(0x4defb0u,4de);
}
B7785b8:L7785b8:{c.instructions+=3;NFSU2_TR(0x7785b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7785bb:{NFSU2_TR(0x7785bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x158ull))));
}
B7785c1:{NFSU2_TR(0x7785c1);
TAIL_STATIC(0x4def30u,4de);
}
B7785c6:L7785c6:{c.instructions+=3;NFSU2_TR(0x7785c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7785c9:{NFSU2_TR(0x7785c9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x160ull))));
}
B7785cf:{NFSU2_TR(0x7785cf);
TAIL_STATIC(0x4def30u,4de);
}
B7785d4:L7785d4:{c.instructions+=2;NFSU2_TR(0x7785d4);
w4(R+0,u32(0x7e3ba0ull));
}
B7785d9:{NFSU2_TR(0x7785d9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7785e0:L7785e0:{c.instructions+=2;NFSU2_TR(0x7785e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7785e3:{NFSU2_TR(0x7785e3);
TAIL_STATIC(0x4defb0u,4de);
}
B7785e8:L7785e8:{c.instructions+=3;NFSU2_TR(0x7785e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7785eb:{NFSU2_TR(0x7785eb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x158ull))));
}
B7785f1:{NFSU2_TR(0x7785f1);
TAIL_STATIC(0x4def30u,4de);
}
B7785f6:L7785f6:{c.instructions+=2;NFSU2_TR(0x7785f6);
w4(R+0,u32(0x7e3bccull));
}
B7785fb:{NFSU2_TR(0x7785fb);
TAIL_STATIC(0x75bfd2u,75b);
}
B778600:L778600:{c.instructions+=5;NFSU2_TR(0x778600);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778602:{NFSU2_TR(0x778602);
u8 U[4];
w4(U+0,u32(0x79d908ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778607:{NFSU2_TR(0x778607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77860a:{NFSU2_TR(0x77860a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77860b:{NFSU2_TR(0x77860b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778610ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778610:L778610:{c.instructions+=2;NFSU2_TR(0x778610);
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
B778613:{NFSU2_TR(0x778613);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778614:L778614:{c.instructions+=2;NFSU2_TR(0x778614);
w4(R+0,u32(0x7e3bf0ull));
}
B778619:{NFSU2_TR(0x778619);
TAIL_STATIC(0x75bfd2u,75b);
}
B778620:L778620:{c.instructions+=5;NFSU2_TR(0x778620);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778622:{NFSU2_TR(0x778622);
u8 U[4];
w4(U+0,u32(0x79d91cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778627:{NFSU2_TR(0x778627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77862a:{NFSU2_TR(0x77862a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77862b:{NFSU2_TR(0x77862b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778630ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778630:L778630:{c.instructions+=2;NFSU2_TR(0x778630);
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
B778633:{NFSU2_TR(0x778633);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778634:L778634:{c.instructions+=2;NFSU2_TR(0x778634);
w4(R+0,u32(0x7e3c14ull));
}
B778639:{NFSU2_TR(0x778639);
TAIL_STATIC(0x75bfd2u,75b);
}
B778640:L778640:{c.instructions+=5;NFSU2_TR(0x778640);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778642:{NFSU2_TR(0x778642);
u8 U[4];
w4(U+0,u32(0x79d928ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778647:{NFSU2_TR(0x778647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77864a:{NFSU2_TR(0x77864a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77864b:{NFSU2_TR(0x77864b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778650ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778650:L778650:{c.instructions+=2;NFSU2_TR(0x778650);
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
B778653:{NFSU2_TR(0x778653);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778654:L778654:{c.instructions+=2;NFSU2_TR(0x778654);
w4(R+0,u32(0x7e3c38ull));
}
B778659:{NFSU2_TR(0x778659);
TAIL_STATIC(0x75bfd2u,75b);
}
B778660:L778660:{c.instructions+=5;NFSU2_TR(0x778660);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778662:{NFSU2_TR(0x778662);
u8 U[4];
w4(U+0,u32(0x79d93cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778667:{NFSU2_TR(0x778667);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77866a:{NFSU2_TR(0x77866a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77866b:{NFSU2_TR(0x77866b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778670ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778670:L778670:{c.instructions+=2;NFSU2_TR(0x778670);
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
B778673:{NFSU2_TR(0x778673);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778674:L778674:{c.instructions+=2;NFSU2_TR(0x778674);
w4(R+0,u32(0x7e3c5cull));
}
B778679:{NFSU2_TR(0x778679);
TAIL_STATIC(0x75bfd2u,75b);
}
B778680:L778680:{c.instructions+=5;NFSU2_TR(0x778680);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778682:{NFSU2_TR(0x778682);
u8 U[4];
w4(U+0,u32(0x79d950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778687:{NFSU2_TR(0x778687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77868a:{NFSU2_TR(0x77868a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77868b:{NFSU2_TR(0x77868b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778690ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778690:L778690:{c.instructions+=2;NFSU2_TR(0x778690);
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
B778693:{NFSU2_TR(0x778693);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778694:L778694:{c.instructions+=2;NFSU2_TR(0x778694);
w4(R+0,u32(0x7e3c80ull));
}
B778699:{NFSU2_TR(0x778699);
TAIL_STATIC(0x75bfd2u,75b);
}
B7786a0:L7786a0:{c.instructions+=5;NFSU2_TR(0x7786a0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7786a2:{NFSU2_TR(0x7786a2);
u8 U[4];
w4(U+0,u32(0x79d964ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7786a7:{NFSU2_TR(0x7786a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7786aa:{NFSU2_TR(0x7786aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7786ab:{NFSU2_TR(0x7786ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7786b0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7786b0:L7786b0:{c.instructions+=2;NFSU2_TR(0x7786b0);
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
B7786b3:{NFSU2_TR(0x7786b3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7786b4:L7786b4:{c.instructions+=2;NFSU2_TR(0x7786b4);
w4(R+0,u32(0x7e3ca4ull));
}
B7786b9:{NFSU2_TR(0x7786b9);
TAIL_STATIC(0x75bfd2u,75b);
}
B7786c0:L7786c0:{c.instructions+=2;NFSU2_TR(0x7786c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7786c3:{NFSU2_TR(0x7786c3);
TAIL_STATIC(0x5326f0u,532);
}
B7786c8:L7786c8:{c.instructions+=2;NFSU2_TR(0x7786c8);
w4(R+0,u32(0x7e3cc8ull));
}
B7786cd:{NFSU2_TR(0x7786cd);
TAIL_STATIC(0x75bfd2u,75b);
}
B7786e0:L7786e0:{c.instructions+=5;NFSU2_TR(0x7786e0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7786e2:{NFSU2_TR(0x7786e2);
u8 U[4];
w4(U+0,u32(0x79d988ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7786e7:{NFSU2_TR(0x7786e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7786ea:{NFSU2_TR(0x7786ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7786eb:{NFSU2_TR(0x7786eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7786f0ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7786f0:L7786f0:{c.instructions+=2;NFSU2_TR(0x7786f0);
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
B7786f3:{NFSU2_TR(0x7786f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7786f4:L7786f4:{c.instructions+=2;NFSU2_TR(0x7786f4);
w4(R+0,u32(0x7e3d10ull));
}
B7786f9:{NFSU2_TR(0x7786f9);
TAIL_STATIC(0x75bfd2u,75b);
}
B778700:L778700:{c.instructions+=5;NFSU2_TR(0x778700);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778702:{NFSU2_TR(0x778702);
u8 U[4];
w4(U+0,u32(0x79d998ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778707:{NFSU2_TR(0x778707);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77870a:{NFSU2_TR(0x77870a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77870b:{NFSU2_TR(0x77870b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778710ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778710:L778710:{c.instructions+=2;NFSU2_TR(0x778710);
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
B778713:{NFSU2_TR(0x778713);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778714:L778714:{c.instructions+=2;NFSU2_TR(0x778714);
w4(R+0,u32(0x7e3d34ull));
}
B778719:{NFSU2_TR(0x778719);
TAIL_STATIC(0x75bfd2u,75b);
}
B778720:L778720:{c.instructions+=3;NFSU2_TR(0x778720);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778723:{NFSU2_TR(0x778723);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B778726:{NFSU2_TR(0x778726);
TAIL_STATIC(0x5768e0u,576);
}
B77872b:L77872b:{c.instructions+=2;NFSU2_TR(0x77872b);
w4(R+0,u32(0x7e3d84ull));
}
B778730:{NFSU2_TR(0x778730);
TAIL_STATIC(0x75bfd2u,75b);
}
B778740:L778740:{c.instructions+=2;NFSU2_TR(0x778740);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778746:{NFSU2_TR(0x778746);
TAIL_STATIC(0x4017f0u,401);
}
B77874b:L77874b:{c.instructions+=2;NFSU2_TR(0x77874b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffff700ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778751:{NFSU2_TR(0x778751);
TAIL_STATIC(0x401800u,401);
}
B778756:L778756:{c.instructions+=2;NFSU2_TR(0x778756);
w4(R+0,u32(0x7e3d60ull));
}
B77875b:{NFSU2_TR(0x77875b);
TAIL_STATIC(0x75bfd2u,75b);
}
B778760:L778760:{c.instructions+=3;NFSU2_TR(0x778760);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778763:{NFSU2_TR(0x778763);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778764:{NFSU2_TR(0x778764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778769ull));
TAIL_STATIC(0x56c480u,56c);
}
B778769:L778769:{c.instructions+=2;NFSU2_TR(0x778769);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77876a:{NFSU2_TR(0x77876a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77876b:L77876b:{c.instructions+=2;NFSU2_TR(0x77876b);
w4(R+0,u32(0x7e3da8ull));
}
B778770:{NFSU2_TR(0x778770);
TAIL_STATIC(0x75bfd2u,75b);
}
B778780:L778780:{c.instructions+=2;NFSU2_TR(0x778780);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B778783:{NFSU2_TR(0x778783);
TAIL_STATIC(0x56fca0u,56f);
}
B778788:L778788:{c.instructions+=2;NFSU2_TR(0x778788);
w4(R+0,u32(0x7e3dccull));
}
B77878d:{NFSU2_TR(0x77878d);
TAIL_STATIC(0x75bfd2u,75b);
}
B7787a0:L7787a0:{c.instructions+=4;NFSU2_TR(0x7787a0);
__builtin_memmove((R+0),gp(0x866634),4);
}
B7787a5:{NFSU2_TR(0x7787a5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7787a8:{NFSU2_TR(0x7787a8);
__builtin_memmove(gp(0x866634),(R+0),4);
}
B7787ad:{NFSU2_TR(0x7787ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7787ae:L7787ae:{c.instructions+=2;NFSU2_TR(0x7787ae);
w4(R+0,u32(0x7e3df0ull));
}
B7787b3:{NFSU2_TR(0x7787b3);
TAIL_STATIC(0x75bfd2u,75b);
}
B7787c0:L7787c0:{c.instructions+=3;NFSU2_TR(0x7787c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7787c3:{NFSU2_TR(0x7787c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7787c4:{NFSU2_TR(0x7787c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7787c9ull));
TAIL_STATIC(0x5753a0u,575);
}
B7787c9:L7787c9:{c.instructions+=2;NFSU2_TR(0x7787c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7787ca:{NFSU2_TR(0x7787ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7787cb:L7787cb:{c.instructions+=2;NFSU2_TR(0x7787cb);
w4(R+0,u32(0x7e3e14ull));
}
B7787d0:{NFSU2_TR(0x7787d0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7787e0:L7787e0:{c.instructions+=3;NFSU2_TR(0x7787e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7787e3:{NFSU2_TR(0x7787e3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x90ull))));
}
B7787e9:{NFSU2_TR(0x7787e9);
TAIL_STATIC(0x57a250u,57a);
}
B7787ee:L7787ee:{c.instructions+=3;NFSU2_TR(0x7787ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7787f1:{NFSU2_TR(0x7787f1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x98ull))));
}
B7787f7:{NFSU2_TR(0x7787f7);
TAIL_STATIC(0x57a250u,57a);
}
B7787fc:L7787fc:{c.instructions+=2;NFSU2_TR(0x7787fc);
w4(R+0,u32(0x7e3e40ull));
}
B778801:{NFSU2_TR(0x778801);
TAIL_STATIC(0x75bfd2u,75b);
}
B778810:L778810:{c.instructions+=2;NFSU2_TR(0x778810);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778813:{NFSU2_TR(0x778813);
TAIL_STATIC(0x57a250u,57a);
}
B778818:L778818:{c.instructions+=2;NFSU2_TR(0x778818);
w4(R+0,u32(0x7e3e64ull));
}
B77881d:{NFSU2_TR(0x77881d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778830:L778830:{c.instructions+=3;NFSU2_TR(0x778830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778833:{NFSU2_TR(0x778833);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778834:{NFSU2_TR(0x778834);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778839ull));
TAIL_STATIC(0x5735a0u,573);
}
B778839:L778839:{c.instructions+=2;NFSU2_TR(0x778839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77883a:{NFSU2_TR(0x77883a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77883b:L77883b:{c.instructions+=2;NFSU2_TR(0x77883b);
w4(R+0,u32(0x7e3e88ull));
}
B778840:{NFSU2_TR(0x778840);
TAIL_STATIC(0x75bfd2u,75b);
}
B778850:L778850:{c.instructions+=3;NFSU2_TR(0x778850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778853:{NFSU2_TR(0x778853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778854:{NFSU2_TR(0x778854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778859ull));
TAIL_STATIC(0x575630u,575);
}
B778859:L778859:{c.instructions+=2;NFSU2_TR(0x778859);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77885a:{NFSU2_TR(0x77885a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77885b:L77885b:{c.instructions+=2;NFSU2_TR(0x77885b);
w4(R+0,u32(0x7e3eacull));
}
B778860:{NFSU2_TR(0x778860);
TAIL_STATIC(0x75bfd2u,75b);
}
B778870:L778870:{c.instructions+=2;NFSU2_TR(0x778870);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778873:{NFSU2_TR(0x778873);
TAIL_STATIC(0x57bc10u,57b);
}
B778878:L778878:{c.instructions+=2;NFSU2_TR(0x778878);
w4(R+0,u32(0x7e3ed0ull));
}
B77887d:{NFSU2_TR(0x77887d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778890:L778890:{c.instructions+=3;NFSU2_TR(0x778890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778893:{NFSU2_TR(0x778893);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778894:{NFSU2_TR(0x778894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778899ull));
TAIL_STATIC(0x5753a0u,575);
}
B778899:L778899:{c.instructions+=2;NFSU2_TR(0x778899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77889a:{NFSU2_TR(0x77889a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77889b:L77889b:{c.instructions+=2;NFSU2_TR(0x77889b);
w4(R+0,u32(0x7e3ef4ull));
}
B7788a0:{NFSU2_TR(0x7788a0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7788b0:L7788b0:{c.instructions+=3;NFSU2_TR(0x7788b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7788b3:{NFSU2_TR(0x7788b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788b4:{NFSU2_TR(0x7788b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7788b9ull));
TAIL_STATIC(0x570ac0u,570);
}
B7788b9:L7788b9:{c.instructions+=2;NFSU2_TR(0x7788b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7788ba:{NFSU2_TR(0x7788ba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7788bb:L7788bb:{c.instructions+=2;NFSU2_TR(0x7788bb);
w4(R+0,u32(0x7e3f18ull));
}
B7788c0:{NFSU2_TR(0x7788c0);
TAIL_STATIC(0x75bfd2u,75b);
}
B7788d0:L7788d0:{c.instructions+=5;NFSU2_TR(0x7788d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788d2:{NFSU2_TR(0x7788d2);
u8 U[4];
w4(U+0,u32(0x7a09a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788d7:{NFSU2_TR(0x7788d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7788dd:{NFSU2_TR(0x7788dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788de:{NFSU2_TR(0x7788de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7788e3ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7788e3:L7788e3:{c.instructions+=2;NFSU2_TR(0x7788e3);
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
B7788e6:{NFSU2_TR(0x7788e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7788e7:L7788e7:{c.instructions+=5;NFSU2_TR(0x7788e7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788e9:{NFSU2_TR(0x7788e9);
u8 U[4];
w4(U+0,u32(0x7a0990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788ee:{NFSU2_TR(0x7788ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7788f4:{NFSU2_TR(0x7788f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7788f5:{NFSU2_TR(0x7788f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7788faull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7788fa:L7788fa:{c.instructions+=2;NFSU2_TR(0x7788fa);
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
B7788fd:{NFSU2_TR(0x7788fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7788fe:L7788fe:{c.instructions+=2;NFSU2_TR(0x7788fe);
w4(R+0,u32(0x7e3f44ull));
}
B778903:{NFSU2_TR(0x778903);
TAIL_STATIC(0x75bfd2u,75b);
}
B778910:L778910:{c.instructions+=5;NFSU2_TR(0x778910);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778912:{NFSU2_TR(0x778912);
u8 U[4];
w4(U+0,u32(0x7a0ae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778917:{NFSU2_TR(0x778917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77891a:{NFSU2_TR(0x77891a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77891b:{NFSU2_TR(0x77891b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778920ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778920:L778920:{c.instructions+=2;NFSU2_TR(0x778920);
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
B778923:{NFSU2_TR(0x778923);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778924:L778924:{c.instructions+=2;NFSU2_TR(0x778924);
w4(R+0,u32(0x7e3f68ull));
}
B778929:{NFSU2_TR(0x778929);
TAIL_STATIC(0x75bfd2u,75b);
}
B778930:L778930:{c.instructions+=6;NFSU2_TR(0x778930);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778932:{NFSU2_TR(0x778932);
u8 U[4];
w4(U+0,u32(0x4b1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778937:{NFSU2_TR(0x778937);
u8 U[4];
w4(U+0,u32(0x7a1344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77893c:{NFSU2_TR(0x77893c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77893f:{NFSU2_TR(0x77893f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778940:{NFSU2_TR(0x778940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778945ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778945:L778945:{c.instructions+=2;NFSU2_TR(0x778945);
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
B778948:{NFSU2_TR(0x778948);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778949:L778949:{c.instructions+=2;NFSU2_TR(0x778949);
w4(R+0,u32(0x7e3f8cull));
}
B77894e:{NFSU2_TR(0x77894e);
TAIL_STATIC(0x75bfd2u,75b);
}
B778960:L778960:{c.instructions+=7;NFSU2_TR(0x778960);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778965:{NFSU2_TR(0x778965);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778967:{NFSU2_TR(0x778967);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778969:{NFSU2_TR(0x778969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B77896c:{NFSU2_TR(0x77896c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B77896f:{NFSU2_TR(0x77896f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778970:{NFSU2_TR(0x778970);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778975ull));
TAIL_STATIC(0x75c401u,75c);
}
B778975:L778975:{c.instructions+=1;NFSU2_TR(0x778975);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778976:L778976:{c.instructions+=3;NFSU2_TR(0x778976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778979:{NFSU2_TR(0x778979);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x34ull))));
}
B77897c:{NFSU2_TR(0x77897c);
TAIL_STATIC(0x4def30u,4de);
}
B778981:L778981:{c.instructions+=3;NFSU2_TR(0x778981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778984:{NFSU2_TR(0x778984);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3cull))));
}
B778987:{NFSU2_TR(0x778987);
TAIL_STATIC(0x586620u,586);
}
B77898c:L77898c:{c.instructions+=2;NFSU2_TR(0x77898c);
w4(R+0,u32(0x7e3fc0ull));
}
B778991:{NFSU2_TR(0x778991);
TAIL_STATIC(0x75bfd2u,75b);
}
B7789a0:L7789a0:{c.instructions+=2;NFSU2_TR(0x7789a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7789a3:{NFSU2_TR(0x7789a3);
TAIL_STATIC(0x4def30u,4de);
}
B7789a8:L7789a8:{c.instructions+=3;NFSU2_TR(0x7789a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B7789ab:{NFSU2_TR(0x7789ab);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B7789ae:{NFSU2_TR(0x7789ae);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B7789b3:L7789b3:{c.instructions+=2;NFSU2_TR(0x7789b3);
w4(R+0,u32(0x7e3fecull));
}
B7789b8:{NFSU2_TR(0x7789b8);
TAIL_STATIC(0x75bfd2u,75b);
}
B7789c0:L7789c0:{c.instructions+=6;NFSU2_TR(0x7789c0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7789c2:{NFSU2_TR(0x7789c2);
u8 U[4];
w4(U+0,u32(0x21full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7789c7:{NFSU2_TR(0x7789c7);
u8 U[4];
w4(U+0,u32(0x7a1344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7789cc:{NFSU2_TR(0x7789cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B7789cf:{NFSU2_TR(0x7789cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7789d0:{NFSU2_TR(0x7789d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7789d5ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B7789d5:L7789d5:{c.instructions+=2;NFSU2_TR(0x7789d5);
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
B7789d8:{NFSU2_TR(0x7789d8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7789d9:L7789d9:{c.instructions+=2;NFSU2_TR(0x7789d9);
w4(R+0,u32(0x7e4010ull));
}
B7789de:{NFSU2_TR(0x7789de);
TAIL_STATIC(0x75bfd2u,75b);
}
B7789f0:L7789f0:{c.instructions+=2;NFSU2_TR(0x7789f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7789f6:{NFSU2_TR(0x7789f6);
TAIL_STATIC(0x4def30u,4de);
}
B7789fb:L7789fb:{c.instructions+=2;NFSU2_TR(0x7789fb);
w4(R+0,u32(0x7e407cull));
}
B778a00:{NFSU2_TR(0x778a00);
TAIL_STATIC(0x75bfd2u,75b);
}
B778a10:L778a10:{c.instructions+=2;NFSU2_TR(0x778a10);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778a13:{NFSU2_TR(0x778a13);
TAIL_STATIC(0x4def30u,4de);
}
B778a18:L778a18:{c.instructions+=2;NFSU2_TR(0x778a18);
w4(R+0,u32(0x7e4034ull));
}
B778a1d:{NFSU2_TR(0x778a1d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778a30:L778a30:{c.instructions+=2;NFSU2_TR(0x778a30);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B778a33:{NFSU2_TR(0x778a33);
TAIL_STATIC(0x4def30u,4de);
}
B778a38:L778a38:{c.instructions+=2;NFSU2_TR(0x778a38);
w4(R+0,u32(0x7e4058ull));
}
B778a3d:{NFSU2_TR(0x778a3d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778a50:L778a50:{c.instructions+=4;NFSU2_TR(0x778a50);
__builtin_memmove((R+0),gp(0x86a450),4);
}
B778a55:{NFSU2_TR(0x778a55);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B778a58:{NFSU2_TR(0x778a58);
__builtin_memmove(gp(0x86a450),(R+0),4);
}
B778a5d:{NFSU2_TR(0x778a5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778a5e:L778a5e:{c.instructions+=2;NFSU2_TR(0x778a5e);
w4(R+0,u32(0x7e40a0ull));
}
B778a63:{NFSU2_TR(0x778a63);
TAIL_STATIC(0x75bfd2u,75b);
}
B778a70:L778a70:{c.instructions+=4;NFSU2_TR(0x778a70);
__builtin_memmove((R+0),gp(0x86a5e4),4);
}
B778a75:{NFSU2_TR(0x778a75);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B778a78:{NFSU2_TR(0x778a78);
__builtin_memmove(gp(0x86a5e4),(R+0),4);
}
B778a7d:{NFSU2_TR(0x778a7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778a7e:L778a7e:{c.instructions+=2;NFSU2_TR(0x778a7e);
w4(R+0,u32(0x7e40c4ull));
}
B778a83:{NFSU2_TR(0x778a83);
TAIL_STATIC(0x75bfd2u,75b);
}
B778a90:L778a90:{c.instructions+=2;NFSU2_TR(0x778a90);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffbdcull))));
__builtin_memmove((R+4),(U+0),4);
}
B778a96:{NFSU2_TR(0x778a96);
TAIL_STATIC(0x4def30u,4de);
}
B778a9b:L778a9b:{c.instructions+=2;NFSU2_TR(0x778a9b);
w4(R+0,u32(0x7e40e8ull));
}
B778aa0:{NFSU2_TR(0x778aa0);
TAIL_STATIC(0x75bfd2u,75b);
}
B778ab0:L778ab0:{c.instructions+=2;NFSU2_TR(0x778ab0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd6cull))));
__builtin_memmove((R+4),(U+0),4);
}
B778ab6:{NFSU2_TR(0x778ab6);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B778abb:L778abb:{c.instructions+=2;NFSU2_TR(0x778abb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffeb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778ac1:{NFSU2_TR(0x778ac1);
TAIL_STATIC(0x4cbaf0u,4cb);
}
B778ac6:L778ac6:{c.instructions+=2;NFSU2_TR(0x778ac6);
w4(R+0,u32(0x7e4114ull));
}
B778acb:{NFSU2_TR(0x778acb);
TAIL_STATIC(0x75bfd2u,75b);
}
B778ad0:L778ad0:{c.instructions+=3;NFSU2_TR(0x778ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778ad3:{NFSU2_TR(0x778ad3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B778ad6:{NFSU2_TR(0x778ad6);
TAIL_STATIC(0x5884a0u,588);
}
B778adb:L778adb:{c.instructions+=3;NFSU2_TR(0x778adb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778ade:{NFSU2_TR(0x778ade);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B778ae1:{NFSU2_TR(0x778ae1);
TAIL_STATIC(0x5884a0u,588);
}
B778ae6:L778ae6:{c.instructions+=2;NFSU2_TR(0x778ae6);
w4(R+0,u32(0x7e4140ull));
}
B778aeb:{NFSU2_TR(0x778aeb);
TAIL_STATIC(0x75bfd2u,75b);
}
B778af0:L778af0:{c.instructions+=2;NFSU2_TR(0x778af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778af3:{NFSU2_TR(0x778af3);
TAIL_STATIC(0x4def30u,4de);
}
B778af8:L778af8:{c.instructions+=2;NFSU2_TR(0x778af8);
w4(R+0,u32(0x7e4164ull));
}
B778afd:{NFSU2_TR(0x778afd);
TAIL_STATIC(0x75bfd2u,75b);
}
B778b10:L778b10:{c.instructions+=5;NFSU2_TR(0x778b10);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b12:{NFSU2_TR(0x778b12);
u8 U[4];
w4(U+0,u32(0x7a16e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b17:{NFSU2_TR(0x778b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffdecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778b1d:{NFSU2_TR(0x778b1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b1e:{NFSU2_TR(0x778b1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778b23ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778b23:L778b23:{c.instructions+=2;NFSU2_TR(0x778b23);
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
B778b26:{NFSU2_TR(0x778b26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778b27:L778b27:{c.instructions+=2;NFSU2_TR(0x778b27);
w4(R+0,u32(0x7e4188ull));
}
B778b2c:{NFSU2_TR(0x778b2c);
TAIL_STATIC(0x75bfd2u,75b);
}
B778b40:L778b40:{c.instructions+=5;NFSU2_TR(0x778b40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b42:{NFSU2_TR(0x778b42);
u8 U[4];
w4(U+0,u32(0x7a1700ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b47:{NFSU2_TR(0x778b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778b4d:{NFSU2_TR(0x778b4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b4e:{NFSU2_TR(0x778b4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778b53ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778b53:L778b53:{c.instructions+=2;NFSU2_TR(0x778b53);
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
B778b56:{NFSU2_TR(0x778b56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778b57:L778b57:{c.instructions+=2;NFSU2_TR(0x778b57);
w4(R+0,u32(0x7e41acull));
}
B778b5c:{NFSU2_TR(0x778b5c);
TAIL_STATIC(0x75bfd2u,75b);
}
B778b70:L778b70:{c.instructions+=5;NFSU2_TR(0x778b70);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b72:{NFSU2_TR(0x778b72);
u8 U[4];
w4(U+0,u32(0x7a1f34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b77:{NFSU2_TR(0x778b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778b7a:{NFSU2_TR(0x778b7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778b7b:{NFSU2_TR(0x778b7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778b80ull));
TAIL_STATIC(0x6d7120u,6d7);
}
B778b80:L778b80:{c.instructions+=2;NFSU2_TR(0x778b80);
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
B778b83:{NFSU2_TR(0x778b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778b84:L778b84:{c.instructions+=2;NFSU2_TR(0x778b84);
w4(R+0,u32(0x7e41d0ull));
}
B778b89:{NFSU2_TR(0x778b89);
TAIL_STATIC(0x75bfd2u,75b);
}
B778b90:L778b90:{c.instructions+=2;NFSU2_TR(0x778b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778b93:{NFSU2_TR(0x778b93);
TAIL_STATIC(0x5a0d10u,5a0);
}
B778b98:L778b98:{c.instructions+=3;NFSU2_TR(0x778b98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778b9b:{NFSU2_TR(0x778b9b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x198ull))));
}
B778ba1:{NFSU2_TR(0x778ba1);
TAIL_STATIC(0x5913a0u,591);
}
B778ba6:L778ba6:{c.instructions+=2;NFSU2_TR(0x778ba6);
w4(R+0,u32(0x7e41fcull));
}
B778bab:{NFSU2_TR(0x778bab);
TAIL_STATIC(0x75bfd2u,75b);
}
B778bb0:L778bb0:{c.instructions+=2;NFSU2_TR(0x778bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778bb3:{NFSU2_TR(0x778bb3);
TAIL_STATIC(0x401fd0u,401);
}
B778bb8:L778bb8:{c.instructions+=3;NFSU2_TR(0x778bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778bbb:{NFSU2_TR(0x778bbb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778bbc:{NFSU2_TR(0x778bbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778bc1ull));
TAIL_STATIC(0x575630u,575);
}
B778bc1:L778bc1:{c.instructions+=2;NFSU2_TR(0x778bc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778bc2:{NFSU2_TR(0x778bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778bc3:L778bc3:{c.instructions+=3;NFSU2_TR(0x778bc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778bc6:{NFSU2_TR(0x778bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778bc7:{NFSU2_TR(0x778bc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778bccull));
TAIL_STATIC(0x575630u,575);
}
B778bcc:L778bcc:{c.instructions+=2;NFSU2_TR(0x778bcc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778bcd:{NFSU2_TR(0x778bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778bce:L778bce:{c.instructions+=3;NFSU2_TR(0x778bce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778bd1:{NFSU2_TR(0x778bd1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778bd2:{NFSU2_TR(0x778bd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778bd7ull));
TAIL_STATIC(0x5913b0u,591);
}
B778bd7:L778bd7:{c.instructions+=2;NFSU2_TR(0x778bd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778bd8:{NFSU2_TR(0x778bd8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778bd9:L778bd9:{c.instructions+=2;NFSU2_TR(0x778bd9);
w4(R+0,u32(0x7e4238ull));
}
B778bde:{NFSU2_TR(0x778bde);
TAIL_STATIC(0x75bfd2u,75b);
}
B778bf0:L778bf0:{c.instructions+=2;NFSU2_TR(0x778bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778bf3:{NFSU2_TR(0x778bf3);
TAIL_STATIC(0x401fd0u,401);
}
B778bf8:L778bf8:{c.instructions+=2;NFSU2_TR(0x778bf8);
w4(R+0,u32(0x7e425cull));
}
B778bfd:{NFSU2_TR(0x778bfd);
TAIL_STATIC(0x75bfd2u,75b);
}
B778c10:L778c10:{c.instructions+=3;NFSU2_TR(0x778c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778c13:{NFSU2_TR(0x778c13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778c14:{NFSU2_TR(0x778c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778c19ull));
TAIL_STATIC(0x592a60u,592);
}
B778c19:L778c19:{c.instructions+=2;NFSU2_TR(0x778c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778c1a:{NFSU2_TR(0x778c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778c1b:L778c1b:{c.instructions+=2;NFSU2_TR(0x778c1b);
w4(R+0,u32(0x7e4280ull));
}
B778c20:{NFSU2_TR(0x778c20);
TAIL_STATIC(0x75bfd2u,75b);
}
B778c30:L778c30:{c.instructions+=2;NFSU2_TR(0x778c30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778c36:{NFSU2_TR(0x778c36);
TAIL_STATIC(0x5aa090u,5aa);
}
B778c3b:L778c3b:{c.instructions+=3;NFSU2_TR(0x778c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778c41:{NFSU2_TR(0x778c41);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B778c44:{NFSU2_TR(0x778c44);
TAIL_STATIC(0x5a1a70u,5a1);
}
B778c49:L778c49:{c.instructions+=2;NFSU2_TR(0x778c49);
w4(R+0,u32(0x7e42acull));
}
B778c4e:{NFSU2_TR(0x778c4e);
TAIL_STATIC(0x75bfd2u,75b);
}
B778c60:L778c60:{c.instructions+=3;NFSU2_TR(0x778c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778c63:{NFSU2_TR(0x778c63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778c64:{NFSU2_TR(0x778c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778c69ull));
TAIL_STATIC(0x5929f0u,592);
}
B778c69:L778c69:{c.instructions+=2;NFSU2_TR(0x778c69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778c6a:{NFSU2_TR(0x778c6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778c6b:L778c6b:{c.instructions+=2;NFSU2_TR(0x778c6b);
w4(R+0,u32(0x7e42d0ull));
}
B778c70:{NFSU2_TR(0x778c70);
TAIL_STATIC(0x75bfd2u,75b);
}
B778c80:L778c80:{c.instructions+=3;NFSU2_TR(0x778c80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778c83:{NFSU2_TR(0x778c83);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xcull))));
}
B778c86:{NFSU2_TR(0x778c86);
TAIL_STATIC(0x4358e0u,435);
}
B778c8b:L778c8b:{c.instructions+=2;NFSU2_TR(0x778c8b);
w4(R+0,u32(0x7e42f4ull));
}
B778c90:{NFSU2_TR(0x778c90);
TAIL_STATIC(0x75bfd2u,75b);
}
B778ca0:L778ca0:{c.instructions+=2;NFSU2_TR(0x778ca0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778ca3:{NFSU2_TR(0x778ca3);
TAIL_STATIC(0x4358e0u,435);
}
B778ca8:L778ca8:{c.instructions+=2;NFSU2_TR(0x778ca8);
w4(R+0,u32(0x7e4318ull));
}
B778cad:{NFSU2_TR(0x778cad);
TAIL_STATIC(0x75bfd2u,75b);
}
B778cc0:L778cc0:{c.instructions+=2;NFSU2_TR(0x778cc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778cc6:{NFSU2_TR(0x778cc6);
TAIL_STATIC(0x5aa090u,5aa);
}
B778ccb:L778ccb:{c.instructions+=2;NFSU2_TR(0x778ccb);
w4(R+0,u32(0x7e433cull));
}
B778cd0:{NFSU2_TR(0x778cd0);
TAIL_STATIC(0x75bfd2u,75b);
}
B778ce0:L778ce0:{c.instructions+=2;NFSU2_TR(0x778ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778ce3:{NFSU2_TR(0x778ce3);
TAIL_STATIC(0x5aa090u,5aa);
}
B778ce8:L778ce8:{c.instructions+=2;NFSU2_TR(0x778ce8);
w4(R+0,u32(0x7e4360ull));
}
B778ced:{NFSU2_TR(0x778ced);
TAIL_STATIC(0x75bfd2u,75b);
}
B778d00:L778d00:{c.instructions+=3;NFSU2_TR(0x778d00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778d03:{NFSU2_TR(0x778d03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778d04:{NFSU2_TR(0x778d04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778d09ull));
TAIL_STATIC(0x592ac0u,592);
}
B778d09:L778d09:{c.instructions+=2;NFSU2_TR(0x778d09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778d0a:{NFSU2_TR(0x778d0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778d0b:L778d0b:{c.instructions+=2;NFSU2_TR(0x778d0b);
w4(R+0,u32(0x7e4530ull));
}
B778d10:{NFSU2_TR(0x778d10);
TAIL_STATIC(0x75bfd2u,75b);
}
B778d20:L778d20:{c.instructions+=3;NFSU2_TR(0x778d20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778d23:{NFSU2_TR(0x778d23);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xf0ull))));
}
B778d29:{NFSU2_TR(0x778d29);
TAIL_STATIC(0x4367c0u,436);
}
B778d2e:L778d2e:{c.instructions+=2;NFSU2_TR(0x778d2e);
w4(R+0,u32(0x7e4384ull));
}
B778d33:{NFSU2_TR(0x778d33);
TAIL_STATIC(0x75bfd2u,75b);
}
B778d40:L778d40:{c.instructions+=2;NFSU2_TR(0x778d40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778d43:{NFSU2_TR(0x778d43);
TAIL_STATIC(0x4835c0u,483);
}
B778d48:L778d48:{c.instructions+=2;NFSU2_TR(0x778d48);
w4(R+0,u32(0x7e43a8ull));
}
B778d4d:{NFSU2_TR(0x778d4d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778d60:L778d60:{c.instructions+=3;NFSU2_TR(0x778d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778d63:{NFSU2_TR(0x778d63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778d64:{NFSU2_TR(0x778d64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778d69ull));
TAIL_STATIC(0x5929d0u,592);
}
B778d69:L778d69:{c.instructions+=2;NFSU2_TR(0x778d69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778d6a:{NFSU2_TR(0x778d6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778d6b:L778d6b:{c.instructions+=2;NFSU2_TR(0x778d6b);
w4(R+0,u32(0x7e460cull));
}
B778d70:{NFSU2_TR(0x778d70);
TAIL_STATIC(0x75bfd2u,75b);
}
B778d80:L778d80:{c.instructions+=3;NFSU2_TR(0x778d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778d86:{NFSU2_TR(0x778d86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778d87:{NFSU2_TR(0x778d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778d8cull));
TAIL_STATIC(0x5929f0u,592);
}
B778d8c:L778d8c:{c.instructions+=2;NFSU2_TR(0x778d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778d8d:{NFSU2_TR(0x778d8d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778d8e:L778d8e:{c.instructions+=2;NFSU2_TR(0x778d8e);
w4(R+0,u32(0x7e43ccull));
}
B778d93:{NFSU2_TR(0x778d93);
TAIL_STATIC(0x75bfd2u,75b);
}
B778da0:L778da0:{c.instructions+=2;NFSU2_TR(0x778da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778da3:{NFSU2_TR(0x778da3);
TAIL_STATIC(0x5a9dc0u,5a9);
}
B778da8:L778da8:{c.instructions+=2;NFSU2_TR(0x778da8);
w4(R+0,u32(0x7e43f0ull));
}
B778dad:{NFSU2_TR(0x778dad);
TAIL_STATIC(0x75bfd2u,75b);
}
B778dc0:L778dc0:{c.instructions+=2;NFSU2_TR(0x778dc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778dc3:{NFSU2_TR(0x778dc3);
TAIL_STATIC(0x5a9dc0u,5a9);
}
B778dc8:L778dc8:{c.instructions+=2;NFSU2_TR(0x778dc8);
w4(R+0,u32(0x7e4414ull));
}
B778dcd:{NFSU2_TR(0x778dcd);
TAIL_STATIC(0x75bfd2u,75b);
}
B778de0:L778de0:{c.instructions+=2;NFSU2_TR(0x778de0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778de3:{NFSU2_TR(0x778de3);
TAIL_STATIC(0x5aa090u,5aa);
}
B778de8:L778de8:{c.instructions+=3;NFSU2_TR(0x778de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778deb:{NFSU2_TR(0x778deb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B778dee:{NFSU2_TR(0x778dee);
TAIL_STATIC(0x5a1a70u,5a1);
}
B778df3:L778df3:{c.instructions+=2;NFSU2_TR(0x778df3);
w4(R+0,u32(0x7e4440ull));
}
B778df8:{NFSU2_TR(0x778df8);
TAIL_STATIC(0x75bfd2u,75b);
}
B778e00:L778e00:{c.instructions+=2;NFSU2_TR(0x778e00);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778e03:{NFSU2_TR(0x778e03);
TAIL_STATIC(0x4def30u,4de);
}
B778e08:L778e08:{c.instructions+=2;NFSU2_TR(0x778e08);
w4(R+0,u32(0x7e4464ull));
}
B778e0d:{NFSU2_TR(0x778e0d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778e20:L778e20:{c.instructions+=2;NFSU2_TR(0x778e20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778e23:{NFSU2_TR(0x778e23);
TAIL_STATIC(0x401fd0u,401);
}
B778e28:L778e28:{c.instructions+=2;NFSU2_TR(0x778e28);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B778e2c:{NFSU2_TR(0x778e2c);
if(r1(R+518)){{goto L778e40;}}
}
B778e32:L778e32:{c.instructions+=4;NFSU2_TR(0x778e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778e35:{NFSU2_TR(0x778e35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B778e38:{NFSU2_TR(0x778e38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B778e3b:{NFSU2_TR(0x778e3b);
{goto L778e47;}
}
B778e40:L778e40:{c.instructions+=1;NFSU2_TR(0x778e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B778e47:L778e47:{c.instructions+=2;NFSU2_TR(0x778e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778e4a:{NFSU2_TR(0x778e4a);
TAIL_STATIC(0x5ae1f0u,5ae);
}
B778e4f:L778e4f:{c.instructions+=2;NFSU2_TR(0x778e4f);
w4(R+0,u32(0x7e4490ull));
}
B778e54:{NFSU2_TR(0x778e54);
TAIL_STATIC(0x75bfd2u,75b);
}
B778e60:L778e60:{c.instructions+=2;NFSU2_TR(0x778e60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778e63:{NFSU2_TR(0x778e63);
TAIL_STATIC(0x5a0d10u,5a0);
}
B778e68:L778e68:{c.instructions+=2;NFSU2_TR(0x778e68);
w4(R+0,u32(0x7e44b4ull));
}
B778e6d:{NFSU2_TR(0x778e6d);
TAIL_STATIC(0x75bfd2u,75b);
}
B778e80:L778e80:{c.instructions+=2;NFSU2_TR(0x778e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778e83:{NFSU2_TR(0x778e83);
TAIL_STATIC(0x401fd0u,401);
}
B778e88:L778e88:{c.instructions+=2;NFSU2_TR(0x778e88);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B778e8c:{NFSU2_TR(0x778e8c);
if(r1(R+518)){{goto L778ea3;}}
}
B778e92:L778e92:{c.instructions+=4;NFSU2_TR(0x778e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778e95:{NFSU2_TR(0x778e95);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B778e98:{NFSU2_TR(0x778e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B778e9e:{NFSU2_TR(0x778e9e);
{goto L778ead;}
}
B778ea3:L778ea3:{c.instructions+=1;NFSU2_TR(0x778ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B778ead:L778ead:{c.instructions+=2;NFSU2_TR(0x778ead);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778eb3:{NFSU2_TR(0x778eb3);
TAIL_STATIC(0x5ae1f0u,5ae);
}
B778eb8:L778eb8:{c.instructions+=2;NFSU2_TR(0x778eb8);
w4(R+0,u32(0x7e44e0ull));
}
B778ebd:{NFSU2_TR(0x778ebd);
TAIL_STATIC(0x75bfd2u,75b);
}
B778ed0:L778ed0:{c.instructions+=3;NFSU2_TR(0x778ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778ed3:{NFSU2_TR(0x778ed3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778ed4:{NFSU2_TR(0x778ed4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778ed9ull));
TAIL_STATIC(0x592ac0u,592);
}
B778ed9:L778ed9:{c.instructions+=2;NFSU2_TR(0x778ed9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778eda:{NFSU2_TR(0x778eda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778edb:L778edb:{c.instructions+=3;NFSU2_TR(0x778edb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778ede:{NFSU2_TR(0x778ede);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778edf:{NFSU2_TR(0x778edf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778ee4ull));
TAIL_STATIC(0x592ac0u,592);
}
B778ee4:L778ee4:{c.instructions+=2;NFSU2_TR(0x778ee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778ee5:{NFSU2_TR(0x778ee5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778ee6:L778ee6:{c.instructions+=2;NFSU2_TR(0x778ee6);
w4(R+0,u32(0x7e450cull));
}
B778eeb:{NFSU2_TR(0x778eeb);
TAIL_STATIC(0x75bfd2u,75b);
}
B778ef0:L778ef0:{c.instructions+=2;NFSU2_TR(0x778ef0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffcd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778ef6:{NFSU2_TR(0x778ef6);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B778efb:L778efb:{c.instructions+=2;NFSU2_TR(0x778efb);
w4(R+0,u32(0x7e4554ull));
}
B778f00:{NFSU2_TR(0x778f00);
TAIL_STATIC(0x75bfd2u,75b);
}
B778f10:L778f10:{c.instructions+=3;NFSU2_TR(0x778f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778f16:{NFSU2_TR(0x778f16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B778f17:{NFSU2_TR(0x778f17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x778f1cull));
TAIL_STATIC(0x591360u,591);
}
B778f1c:L778f1c:{c.instructions+=2;NFSU2_TR(0x778f1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B778f1d:{NFSU2_TR(0x778f1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B778f1e:L778f1e:{c.instructions+=2;NFSU2_TR(0x778f1e);
w4(R+0,u32(0x7e4578ull));
}
B778f23:{NFSU2_TR(0x778f23);
TAIL_STATIC(0x75bfd2u,75b);
}
B778f30:L778f30:{c.instructions+=2;NFSU2_TR(0x778f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778f33:{NFSU2_TR(0x778f33);
TAIL_STATIC(0x5a9dc0u,5a9);
}
B778f38:L778f38:{c.instructions+=2;NFSU2_TR(0x778f38);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B778f3c:{NFSU2_TR(0x778f3c);
if(r1(R+518)){{goto L778f52;}}
}
B778f42:L778f42:{c.instructions+=4;NFSU2_TR(0x778f42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B778f45:{NFSU2_TR(0x778f45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x130ull))));
}
B778f4a:{NFSU2_TR(0x778f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B778f4d:{NFSU2_TR(0x778f4d);
{goto L778f59;}
}
B778f52:L778f52:{c.instructions+=1;NFSU2_TR(0x778f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B778f59:L778f59:{c.instructions+=2;NFSU2_TR(0x778f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778f5c:{NFSU2_TR(0x778f5c);
TAIL_STATIC(0x5aa410u,5aa);
}
B778f61:L778f61:{c.instructions+=3;NFSU2_TR(0x778f61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778f64:{NFSU2_TR(0x778f64);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x16cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x16cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x16cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B778f6a:{NFSU2_TR(0x778f6a);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B778f6f:L778f6f:{c.instructions+=3;NFSU2_TR(0x778f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778f72:{NFSU2_TR(0x778f72);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x480ull))));
}
B778f78:{NFSU2_TR(0x778f78);
TAIL_STATIC(0x633fd0u,633);
}
B778f7d:L778f7d:{c.instructions+=3;NFSU2_TR(0x778f7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778f80:{NFSU2_TR(0x778f80);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4f4ull))));
}
B778f86:{NFSU2_TR(0x778f86);
TAIL_STATIC(0x4835c0u,483);
}
B778f8b:L778f8b:{c.instructions+=3;NFSU2_TR(0x778f8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778f8e:{NFSU2_TR(0x778f8e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4fcull))));
}
B778f94:{NFSU2_TR(0x778f94);
TAIL_STATIC(0x4835c0u,483);
}
B778f99:L778f99:{c.instructions+=2;NFSU2_TR(0x778f99);
w4(R+0,u32(0x7e45c4ull));
}
B778f9e:{NFSU2_TR(0x778f9e);
TAIL_STATIC(0x75bfd2u,75b);
}
B778fb0:L778fb0:{c.instructions+=2;NFSU2_TR(0x778fb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778fb3:{NFSU2_TR(0x778fb3);
TAIL_STATIC(0x598120u,598);
}
B778fb8:L778fb8:{c.instructions+=2;NFSU2_TR(0x778fb8);
w4(R+0,u32(0x7e45e8ull));
}
B778fbd:{NFSU2_TR(0x778fbd);
TAIL_STATIC(0x75bfd2u,75b);
}
B778fd0:L778fd0:{c.instructions+=2;NFSU2_TR(0x778fd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778fd3:{NFSU2_TR(0x778fd3);
TAIL_STATIC(0x5a9dc0u,5a9);
}
B778fd8:L778fd8:{c.instructions+=3;NFSU2_TR(0x778fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778fdb:{NFSU2_TR(0x778fdb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x130ull))));
}
B778fe1:{NFSU2_TR(0x778fe1);
TAIL_STATIC(0x5aa410u,5aa);
}
B778fe6:L778fe6:{c.instructions+=3;NFSU2_TR(0x778fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778fe9:{NFSU2_TR(0x778fe9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x16cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x16cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x16cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B778fef:{NFSU2_TR(0x778fef);
TAIL_STATIC(0x5e0bf0u,5e0);
}
B778ff4:L778ff4:{c.instructions+=3;NFSU2_TR(0x778ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B778ff7:{NFSU2_TR(0x778ff7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x480ull))));
}
B778ffd:{NFSU2_TR(0x778ffd);
TAIL_STATIC(0x633fd0u,633);
}
XIT:NFSU2_TR_EXIT(0x778,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
