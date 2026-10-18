#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_515(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_524(u8* __restrict R,Cpu& c);
u32 body_526(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x525,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x525,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_525(u8* __restrict R,Cpu& c);
u32 page_525(Cpu& c){return body_525(c.regs.data(),c);}
__attribute__((noinline)) u32 body_525(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x525040:goto L525040;
case 0x525044:c.instructions+=2;goto B525044;
case 0x525047:c.instructions+=1;goto B525047;
case 0x52504d:goto L52504d;
case 0x525054:goto L525054;
case 0x525059:c.instructions+=2;goto B525059;
case 0x52505d:c.instructions+=1;goto B52505d;
case 0x525062:goto L525062;
case 0x525067:c.instructions+=2;goto B525067;
case 0x52506b:c.instructions+=1;goto B52506b;
case 0x525070:goto L525070;
case 0x525075:c.instructions+=2;goto B525075;
case 0x525079:c.instructions+=1;goto B525079;
case 0x52507e:goto L52507e;
case 0x525083:c.instructions+=2;goto B525083;
case 0x525087:c.instructions+=1;goto B525087;
case 0x52508c:goto L52508c;
case 0x525091:c.instructions+=2;goto B525091;
case 0x525095:c.instructions+=1;goto B525095;
case 0x52509a:goto L52509a;
case 0x52509f:c.instructions+=2;goto B52509f;
case 0x5250a3:c.instructions+=1;goto B5250a3;
case 0x5250a8:goto L5250a8;
case 0x5250ad:c.instructions+=2;goto B5250ad;
case 0x5250b1:c.instructions+=1;goto B5250b1;
case 0x5250b6:goto L5250b6;
case 0x5250bb:c.instructions+=2;goto B5250bb;
case 0x5250bf:c.instructions+=1;goto B5250bf;
case 0x5250c4:goto L5250c4;
case 0x5250c9:c.instructions+=2;goto B5250c9;
case 0x5250cd:c.instructions+=1;goto B5250cd;
case 0x5250d2:goto L5250d2;
case 0x525100:goto L525100;
case 0x525104:c.instructions+=2;goto B525104;
case 0x525107:c.instructions+=1;goto B525107;
case 0x525109:goto L525109;
case 0x525110:goto L525110;
case 0x525115:c.instructions+=2;goto B525115;
case 0x525119:c.instructions+=1;goto B525119;
case 0x52511e:goto L52511e;
case 0x525123:c.instructions+=2;goto B525123;
case 0x525127:c.instructions+=1;goto B525127;
case 0x52512c:goto L52512c;
case 0x525131:c.instructions+=2;goto B525131;
case 0x525135:c.instructions+=1;goto B525135;
case 0x52513a:goto L52513a;
case 0x52513f:c.instructions+=2;goto B52513f;
case 0x525143:c.instructions+=1;goto B525143;
case 0x525148:goto L525148;
case 0x52514d:c.instructions+=2;goto B52514d;
case 0x525151:c.instructions+=1;goto B525151;
case 0x525156:goto L525156;
case 0x52515b:c.instructions+=2;goto B52515b;
case 0x52515f:c.instructions+=1;goto B52515f;
case 0x525164:goto L525164;
case 0x525169:c.instructions+=2;goto B525169;
case 0x52516d:c.instructions+=1;goto B52516d;
case 0x525172:goto L525172;
case 0x5251a0:goto L5251a0;
case 0x5251a3:c.instructions+=7;goto B5251a3;
case 0x5251a4:c.instructions+=6;goto B5251a4;
case 0x5251a5:c.instructions+=5;goto B5251a5;
case 0x5251a7:c.instructions+=4;goto B5251a7;
case 0x5251ab:c.instructions+=3;goto B5251ab;
case 0x5251b0:c.instructions+=2;goto B5251b0;
case 0x5251b2:c.instructions+=1;goto B5251b2;
case 0x5251b8:goto L5251b8;
case 0x5251bd:c.instructions+=3;goto B5251bd;
case 0x5251bf:c.instructions+=2;goto B5251bf;
case 0x5251c0:c.instructions+=1;goto B5251c0;
case 0x5251c6:goto L5251c6;
case 0x5251c9:c.instructions+=2;goto B5251c9;
case 0x5251ce:c.instructions+=1;goto B5251ce;
case 0x5251d4:goto L5251d4;
case 0x5251d9:c.instructions+=1;goto B5251d9;
case 0x5251db:goto L5251db;
case 0x5251e0:c.instructions+=1;goto B5251e0;
case 0x5251e6:goto L5251e6;
case 0x5251e9:c.instructions+=2;goto B5251e9;
case 0x5251eb:c.instructions+=1;goto B5251eb;
case 0x5251f1:goto L5251f1;
case 0x5251f6:c.instructions+=5;goto B5251f6;
case 0x5251f8:c.instructions+=4;goto B5251f8;
case 0x525200:c.instructions+=3;goto B525200;
case 0x525208:c.instructions+=2;goto B525208;
case 0x525210:c.instructions+=1;goto B525210;
case 0x525212:goto L525212;
case 0x525218:c.instructions+=2;goto B525218;
case 0x52521a:c.instructions+=1;goto B52521a;
case 0x52521c:goto L52521c;
case 0x52521f:c.instructions+=2;goto B52521f;
case 0x525221:c.instructions+=1;goto B525221;
case 0x525223:goto L525223;
case 0x525225:c.instructions+=1;goto B525225;
case 0x52522a:goto L52522a;
case 0x52522e:c.instructions+=3;goto B52522e;
case 0x52522f:c.instructions+=2;goto B52522f;
case 0x525233:c.instructions+=1;goto B525233;
case 0x525235:goto L525235;
case 0x52523a:c.instructions+=7;goto B52523a;
case 0x52523b:c.instructions+=6;goto B52523b;
case 0x52523e:c.instructions+=5;goto B52523e;
case 0x525241:c.instructions+=4;goto B525241;
case 0x525242:c.instructions+=3;goto B525242;
case 0x525243:c.instructions+=2;goto B525243;
case 0x525246:c.instructions+=1;goto B525246;
case 0x525247:goto L525247;
case 0x52524a:c.instructions+=2;goto B52524a;
case 0x52524c:c.instructions+=1;goto B52524c;
case 0x525252:goto L525252;
case 0x525257:c.instructions+=6;goto B525257;
case 0x525259:c.instructions+=5;goto B525259;
case 0x52525e:c.instructions+=4;goto B52525e;
case 0x525266:c.instructions+=3;goto B525266;
case 0x52526e:c.instructions+=2;goto B52526e;
case 0x525272:c.instructions+=1;goto B525272;
case 0x525274:goto L525274;
case 0x52527a:c.instructions+=2;goto B52527a;
case 0x52527c:c.instructions+=1;goto B52527c;
case 0x52527e:goto L52527e;
case 0x525281:c.instructions+=2;goto B525281;
case 0x525283:c.instructions+=1;goto B525283;
case 0x525285:goto L525285;
case 0x525287:c.instructions+=1;goto B525287;
case 0x52528c:goto L52528c;
case 0x525290:c.instructions+=3;goto B525290;
case 0x525291:c.instructions+=2;goto B525291;
case 0x525295:c.instructions+=1;goto B525295;
case 0x525297:goto L525297;
case 0x525298:c.instructions+=6;goto B525298;
case 0x52529b:c.instructions+=5;goto B52529b;
case 0x52529e:c.instructions+=4;goto B52529e;
case 0x52529f:c.instructions+=3;goto B52529f;
case 0x5252a0:c.instructions+=2;goto B5252a0;
case 0x5252a3:c.instructions+=1;goto B5252a3;
case 0x5252a4:goto L5252a4;
case 0x5252a7:c.instructions+=2;goto B5252a7;
case 0x5252a9:c.instructions+=1;goto B5252a9;
case 0x5252af:goto L5252af;
case 0x5252b4:c.instructions+=5;goto B5252b4;
case 0x5252b6:c.instructions+=4;goto B5252b6;
case 0x5252be:c.instructions+=3;goto B5252be;
case 0x5252c6:c.instructions+=2;goto B5252c6;
case 0x5252ce:c.instructions+=1;goto B5252ce;
case 0x5252d0:goto L5252d0;
case 0x5252d6:c.instructions+=2;goto B5252d6;
case 0x5252d8:c.instructions+=1;goto B5252d8;
case 0x5252da:goto L5252da;
case 0x5252dd:c.instructions+=2;goto B5252dd;
case 0x5252df:c.instructions+=1;goto B5252df;
case 0x5252e1:goto L5252e1;
case 0x5252e3:c.instructions+=1;goto B5252e3;
case 0x5252e8:goto L5252e8;
case 0x5252ec:c.instructions+=3;goto B5252ec;
case 0x5252ed:c.instructions+=2;goto B5252ed;
case 0x5252f1:c.instructions+=1;goto B5252f1;
case 0x5252f3:goto L5252f3;
case 0x5252f8:c.instructions+=7;goto B5252f8;
case 0x5252f9:c.instructions+=6;goto B5252f9;
case 0x5252fc:c.instructions+=5;goto B5252fc;
case 0x5252ff:c.instructions+=4;goto B5252ff;
case 0x525300:c.instructions+=3;goto B525300;
case 0x525301:c.instructions+=2;goto B525301;
case 0x525304:c.instructions+=1;goto B525304;
case 0x525305:goto L525305;
case 0x52530a:c.instructions+=2;goto B52530a;
case 0x52530c:c.instructions+=1;goto B52530c;
case 0x525312:goto L525312;
case 0x525315:c.instructions+=2;goto B525315;
case 0x525318:c.instructions+=1;goto B525318;
case 0x52531a:goto L52531a;
case 0x52531d:c.instructions+=1;goto B52531d;
case 0x52531f:goto L52531f;
case 0x525322:c.instructions+=1;goto B525322;
case 0x525324:goto L525324;
case 0x525327:c.instructions+=1;goto B525327;
case 0x52532d:goto L52532d;
case 0x525330:c.instructions+=2;goto B525330;
case 0x525338:c.instructions+=1;goto B525338;
case 0x52533d:goto L52533d;
case 0x525341:c.instructions+=4;goto B525341;
case 0x525346:c.instructions+=3;goto B525346;
case 0x525348:c.instructions+=2;goto B525348;
case 0x525350:c.instructions+=1;goto B525350;
case 0x525356:goto L525356;
case 0x52535c:c.instructions+=2;goto B52535c;
case 0x52535e:c.instructions+=1;goto B52535e;
case 0x525360:goto L525360;
case 0x525363:c.instructions+=2;goto B525363;
case 0x525365:c.instructions+=1;goto B525365;
case 0x525367:goto L525367;
case 0x525369:c.instructions+=1;goto B525369;
case 0x52536e:goto L52536e;
case 0x525372:c.instructions+=3;goto B525372;
case 0x525373:c.instructions+=2;goto B525373;
case 0x525377:c.instructions+=1;goto B525377;
case 0x525379:goto L525379;
case 0x52537a:c.instructions+=4;goto B52537a;
case 0x52537b:c.instructions+=3;goto B52537b;
case 0x52537c:c.instructions+=2;goto B52537c;
case 0x52537f:c.instructions+=1;goto B52537f;
case 0x525380:goto L525380;
case 0x525383:c.instructions+=1;goto B525383;
case 0x525385:goto L525385;
case 0x52538c:c.instructions+=1;goto B52538c;
case 0x52538e:goto L52538e;
case 0x52538f:c.instructions+=2;goto B52538f;
case 0x525392:c.instructions+=1;goto B525392;
case 0x525394:goto L525394;
case 0x525399:goto L525399;
case 0x52539d:c.instructions+=5;goto B52539d;
case 0x5253a2:c.instructions+=4;goto B5253a2;
case 0x5253a4:c.instructions+=3;goto B5253a4;
case 0x5253ac:c.instructions+=2;goto B5253ac;
case 0x5253b4:c.instructions+=1;goto B5253b4;
case 0x5253b6:goto L5253b6;
case 0x5253bc:c.instructions+=2;goto B5253bc;
case 0x5253be:c.instructions+=1;goto B5253be;
case 0x5253c0:goto L5253c0;
case 0x5253c3:c.instructions+=2;goto B5253c3;
case 0x5253c5:c.instructions+=1;goto B5253c5;
case 0x5253c7:goto L5253c7;
case 0x5253c9:c.instructions+=1;goto B5253c9;
case 0x5253ce:goto L5253ce;
case 0x5253d2:c.instructions+=3;goto B5253d2;
case 0x5253d3:c.instructions+=2;goto B5253d3;
case 0x5253d7:c.instructions+=1;goto B5253d7;
case 0x5253d9:goto L5253d9;
case 0x5253da:goto L5253da;
case 0x5253db:c.instructions+=3;goto B5253db;
case 0x5253dc:c.instructions+=2;goto B5253dc;
case 0x5253df:c.instructions+=1;goto B5253df;
case 0x5253e0:goto L5253e0;
case 0x5253e7:c.instructions+=1;goto B5253e7;
case 0x5253f0:goto L5253f0;
case 0x5253f1:c.instructions+=9;goto B5253f1;
case 0x5253f2:c.instructions+=8;goto B5253f2;
case 0x5253f3:c.instructions+=7;goto B5253f3;
case 0x5253f4:c.instructions+=6;goto B5253f4;
case 0x5253f8:c.instructions+=5;goto B5253f8;
case 0x5253fb:c.instructions+=4;goto B5253fb;
case 0x5253fd:c.instructions+=3;goto B5253fd;
case 0x5253ff:c.instructions+=2;goto B5253ff;
case 0x525401:c.instructions+=1;goto B525401;
case 0x525407:goto L525407;
case 0x525409:c.instructions+=1;goto B525409;
case 0x52540f:goto L52540f;
case 0x525411:c.instructions+=1;goto B525411;
case 0x525413:goto L525413;
case 0x525415:c.instructions+=1;goto B525415;
case 0x52541b:goto L52541b;
case 0x52541e:c.instructions+=3;goto B52541e;
case 0x52541f:c.instructions+=2;goto B52541f;
case 0x525421:c.instructions+=1;goto B525421;
case 0x525426:goto L525426;
case 0x525428:c.instructions+=1;goto B525428;
case 0x52542e:goto L52542e;
case 0x525431:c.instructions+=2;goto B525431;
case 0x525433:c.instructions+=1;goto B525433;
case 0x525439:goto L525439;
case 0x525440:c.instructions+=8;goto B525440;
case 0x525446:c.instructions+=7;goto B525446;
case 0x52544c:c.instructions+=6;goto B52544c;
case 0x525450:c.instructions+=5;goto B525450;
case 0x525456:c.instructions+=4;goto B525456;
case 0x525458:c.instructions+=3;goto B525458;
case 0x52545e:c.instructions+=2;goto B52545e;
case 0x525464:c.instructions+=1;goto B525464;
case 0x525469:goto L525469;
case 0x52546c:c.instructions+=7;goto B52546c;
case 0x52546d:c.instructions+=6;goto B52546d;
case 0x52546f:c.instructions+=5;goto B52546f;
case 0x525473:c.instructions+=4;goto B525473;
case 0x525474:c.instructions+=3;goto B525474;
case 0x525476:c.instructions+=2;goto B525476;
case 0x52547a:c.instructions+=1;goto B52547a;
case 0x52547f:goto L52547f;
case 0x525482:c.instructions+=2;goto B525482;
case 0x525485:c.instructions+=1;goto B525485;
case 0x52548a:goto L52548a;
case 0x52548b:c.instructions+=5;goto B52548b;
case 0x52548f:c.instructions+=4;goto B52548f;
case 0x525490:c.instructions+=3;goto B525490;
case 0x525491:c.instructions+=2;goto B525491;
case 0x525492:c.instructions+=1;goto B525492;
case 0x525495:goto L525495;
case 0x52549c:c.instructions+=4;goto B52549c;
case 0x52549f:c.instructions+=3;goto B52549f;
case 0x5254a1:c.instructions+=2;goto B5254a1;
case 0x5254a3:c.instructions+=1;goto B5254a3;
case 0x5254a5:goto L5254a5;
case 0x5254a8:goto L5254a8;
case 0x5254aa:c.instructions+=1;goto B5254aa;
case 0x5254ac:goto L5254ac;
case 0x5254b3:c.instructions+=4;goto B5254b3;
case 0x5254b4:c.instructions+=3;goto B5254b4;
case 0x5254b7:c.instructions+=2;goto B5254b7;
case 0x5254b9:c.instructions+=1;goto B5254b9;
case 0x5254bb:goto L5254bb;
case 0x5254c1:c.instructions+=7;goto B5254c1;
case 0x5254c5:c.instructions+=6;goto B5254c5;
case 0x5254cb:c.instructions+=5;goto B5254cb;
case 0x5254d1:c.instructions+=4;goto B5254d1;
case 0x5254d3:c.instructions+=3;goto B5254d3;
case 0x5254d9:c.instructions+=2;goto B5254d9;
case 0x5254df:c.instructions+=1;goto B5254df;
case 0x5254e4:goto L5254e4;
case 0x5254e8:c.instructions+=7;goto B5254e8;
case 0x5254eb:c.instructions+=6;goto B5254eb;
case 0x5254ec:c.instructions+=5;goto B5254ec;
case 0x5254ee:c.instructions+=4;goto B5254ee;
case 0x5254f2:c.instructions+=3;goto B5254f2;
case 0x5254f3:c.instructions+=2;goto B5254f3;
case 0x5254f5:c.instructions+=1;goto B5254f5;
case 0x5254fa:goto L5254fa;
case 0x5254fb:c.instructions+=4;goto B5254fb;
case 0x5254fc:c.instructions+=3;goto B5254fc;
case 0x5254fd:c.instructions+=2;goto B5254fd;
case 0x5254fe:c.instructions+=1;goto B5254fe;
case 0x525510:goto L525510;
case 0x525513:c.instructions+=5;goto B525513;
case 0x525514:c.instructions+=4;goto B525514;
case 0x525516:c.instructions+=3;goto B525516;
case 0x525519:c.instructions+=2;goto B525519;
case 0x52551b:c.instructions+=1;goto B52551b;
case 0x525521:goto L525521;
case 0x525524:c.instructions+=6;goto B525524;
case 0x525526:c.instructions+=5;goto B525526;
case 0x525528:c.instructions+=4;goto B525528;
case 0x52552b:c.instructions+=3;goto B52552b;
case 0x525533:c.instructions+=2;goto B525533;
case 0x52553b:c.instructions+=1;goto B52553b;
case 0x52553d:goto L52553d;
case 0x525540:c.instructions+=4;goto B525540;
case 0x525545:c.instructions+=3;goto B525545;
case 0x525547:c.instructions+=2;goto B525547;
case 0x52554f:c.instructions+=1;goto B52554f;
case 0x525551:goto L525551;
case 0x525557:c.instructions+=2;goto B525557;
case 0x525559:c.instructions+=1;goto B525559;
case 0x52555b:goto L52555b;
case 0x52555e:c.instructions+=2;goto B52555e;
case 0x525560:c.instructions+=1;goto B525560;
case 0x525562:goto L525562;
case 0x525563:c.instructions+=2;goto B525563;
case 0x525567:c.instructions+=1;goto B525567;
case 0x52556d:goto L52556d;
case 0x525573:c.instructions+=3;goto B525573;
case 0x525579:c.instructions+=2;goto B525579;
case 0x52557f:c.instructions+=1;goto B52557f;
case 0x525584:goto L525584;
case 0x525586:c.instructions+=6;goto B525586;
case 0x52558a:c.instructions+=5;goto B52558a;
case 0x52558c:c.instructions+=4;goto B52558c;
case 0x525590:c.instructions+=3;goto B525590;
case 0x525591:c.instructions+=2;goto B525591;
case 0x525593:c.instructions+=1;goto B525593;
case 0x525598:goto L525598;
case 0x525599:c.instructions+=2;goto B525599;
case 0x52559c:c.instructions+=1;goto B52559c;
case 0x52559d:goto L52559d;
case 0x5255a2:c.instructions+=3;goto B5255a2;
case 0x5255a4:c.instructions+=2;goto B5255a4;
case 0x5255ac:c.instructions+=1;goto B5255ac;
case 0x5255ae:goto L5255ae;
case 0x5255b4:c.instructions+=2;goto B5255b4;
case 0x5255b6:c.instructions+=1;goto B5255b6;
case 0x5255b8:goto L5255b8;
case 0x5255bb:c.instructions+=2;goto B5255bb;
case 0x5255bd:c.instructions+=1;goto B5255bd;
case 0x5255bf:goto L5255bf;
case 0x5255c0:c.instructions+=2;goto B5255c0;
case 0x5255c4:c.instructions+=1;goto B5255c4;
case 0x5255ca:goto L5255ca;
case 0x5255cb:c.instructions+=2;goto B5255cb;
case 0x5255ce:c.instructions+=1;goto B5255ce;
case 0x5255d0:goto L5255d0;
case 0x5255d1:c.instructions+=6;goto B5255d1;
case 0x5255d7:c.instructions+=5;goto B5255d7;
case 0x5255d8:c.instructions+=4;goto B5255d8;
case 0x5255de:c.instructions+=3;goto B5255de;
case 0x5255e0:c.instructions+=2;goto B5255e0;
case 0x5255e6:c.instructions+=1;goto B5255e6;
case 0x5255eb:goto L5255eb;
case 0x5255ed:c.instructions+=6;goto B5255ed;
case 0x5255f1:c.instructions+=5;goto B5255f1;
case 0x5255f3:c.instructions+=4;goto B5255f3;
case 0x5255f7:c.instructions+=3;goto B5255f7;
case 0x5255f8:c.instructions+=2;goto B5255f8;
case 0x5255fa:c.instructions+=1;goto B5255fa;
case 0x5255ff:goto L5255ff;
case 0x525600:c.instructions+=2;goto B525600;
case 0x525601:c.instructions+=1;goto B525601;
case 0x525610:goto L525610;
case 0x525611:c.instructions+=6;goto B525611;
case 0x525617:c.instructions+=5;goto B525617;
case 0x525618:c.instructions+=4;goto B525618;
case 0x52561e:c.instructions+=3;goto B52561e;
case 0x525620:c.instructions+=2;goto B525620;
case 0x525626:c.instructions+=1;goto B525626;
case 0x52562b:goto L52562b;
case 0x52562d:c.instructions+=6;goto B52562d;
case 0x525631:c.instructions+=5;goto B525631;
case 0x525633:c.instructions+=4;goto B525633;
case 0x525637:c.instructions+=3;goto B525637;
case 0x525638:c.instructions+=2;goto B525638;
case 0x52563a:c.instructions+=1;goto B52563a;
case 0x52563f:goto L52563f;
case 0x525640:c.instructions+=2;goto B525640;
case 0x525641:c.instructions+=1;goto B525641;
case 0x525650:goto L525650;
case 0x525655:c.instructions+=7;goto B525655;
case 0x525658:c.instructions+=6;goto B525658;
case 0x525659:c.instructions+=5;goto B525659;
case 0x52565f:c.instructions+=4;goto B52565f;
case 0x525661:c.instructions+=3;goto B525661;
case 0x525662:c.instructions+=2;goto B525662;
case 0x525664:c.instructions+=1;goto B525664;
case 0x52566a:goto L52566a;
case 0x52566d:c.instructions+=2;goto B52566d;
case 0x52566f:c.instructions+=1;goto B52566f;
case 0x525671:goto L525671;
case 0x525677:c.instructions+=2;goto B525677;
case 0x52567a:c.instructions+=1;goto B52567a;
case 0x52567d:goto L52567d;
case 0x525680:c.instructions+=1;goto B525680;
case 0x525686:goto L525686;
case 0x525688:c.instructions+=2;goto B525688;
case 0x52568b:c.instructions+=1;goto B52568b;
case 0x525690:goto L525690;
case 0x525692:c.instructions+=1;goto B525692;
case 0x525698:goto L525698;
case 0x52569e:c.instructions+=3;goto B52569e;
case 0x5256a4:c.instructions+=2;goto B5256a4;
case 0x5256aa:c.instructions+=1;goto B5256aa;
case 0x5256af:goto L5256af;
case 0x5256b5:c.instructions+=3;goto B5256b5;
case 0x5256b8:c.instructions+=2;goto B5256b8;
case 0x5256ba:c.instructions+=1;goto B5256ba;
case 0x5256c0:goto L5256c0;
case 0x5256c5:c.instructions+=1;goto B5256c5;
case 0x5256ca:goto L5256ca;
case 0x5256cc:c.instructions+=1;goto B5256cc;
case 0x5256d2:goto L5256d2;
case 0x5256d5:c.instructions+=2;goto B5256d5;
case 0x5256d6:c.instructions+=1;goto B5256d6;
case 0x5256db:goto L5256db;
case 0x5256de:c.instructions+=2;goto B5256de;
case 0x5256e0:c.instructions+=1;goto B5256e0;
case 0x5256e6:goto L5256e6;
case 0x5256e8:c.instructions+=5;goto B5256e8;
case 0x5256ea:c.instructions+=4;goto B5256ea;
case 0x5256ed:c.instructions+=3;goto B5256ed;
case 0x5256ee:c.instructions+=2;goto B5256ee;
case 0x5256f3:c.instructions+=1;goto B5256f3;
case 0x5256f8:goto L5256f8;
case 0x5256fa:c.instructions+=1;goto B5256fa;
case 0x525700:goto L525700;
case 0x525703:c.instructions+=2;goto B525703;
case 0x525704:c.instructions+=1;goto B525704;
case 0x525709:goto L525709;
case 0x52570c:c.instructions+=2;goto B52570c;
case 0x52570e:c.instructions+=1;goto B52570e;
case 0x525714:goto L525714;
case 0x525716:c.instructions+=3;goto B525716;
case 0x525717:c.instructions+=2;goto B525717;
case 0x52571c:c.instructions+=1;goto B52571c;
case 0x525721:goto L525721;
case 0x525724:c.instructions+=2;goto B525724;
case 0x525726:c.instructions+=1;goto B525726;
case 0x52572c:goto L52572c;
case 0x525731:c.instructions+=1;goto B525731;
case 0x525733:goto L525733;
case 0x525735:goto L525735;
case 0x52573a:c.instructions+=1;goto B52573a;
case 0x52573c:goto L52573c;
case 0x52573e:goto L52573e;
case 0x525743:c.instructions+=1;goto B525743;
case 0x525745:goto L525745;
case 0x52574a:c.instructions+=1;goto B52574a;
case 0x52574c:goto L52574c;
case 0x525751:c.instructions+=1;goto B525751;
case 0x525757:goto L525757;
case 0x52575c:c.instructions+=1;goto B52575c;
case 0x525761:goto L525761;
case 0x525766:c.instructions+=1;goto B525766;
case 0x52576b:goto L52576b;
case 0x525770:c.instructions+=1;goto B525770;
case 0x525772:goto L525772;
case 0x525777:c.instructions+=1;goto B525777;
case 0x525779:goto L525779;
case 0x52577e:c.instructions+=1;goto B52577e;
case 0x525784:goto L525784;
case 0x525789:c.instructions+=1;goto B525789;
case 0x52578b:goto L52578b;
case 0x525790:c.instructions+=1;goto B525790;
case 0x525792:goto L525792;
case 0x525797:c.instructions+=1;goto B525797;
case 0x525799:goto L525799;
case 0x52579e:c.instructions+=1;goto B52579e;
case 0x5257a0:goto L5257a0;
case 0x5257a2:goto L5257a2;
case 0x5257a7:c.instructions+=1;goto B5257a7;
case 0x5257a9:goto L5257a9;
case 0x5257ae:c.instructions+=1;goto B5257ae;
case 0x5257b0:goto L5257b0;
case 0x5257b5:c.instructions+=1;goto B5257b5;
case 0x5257bb:goto L5257bb;
case 0x5257c0:c.instructions+=1;goto B5257c0;
case 0x5257c2:goto L5257c2;
case 0x5257c7:c.instructions+=1;goto B5257c7;
case 0x5257c9:goto L5257c9;
case 0x5257ce:c.instructions+=1;goto B5257ce;
case 0x5257d0:goto L5257d0;
case 0x5257d5:c.instructions+=1;goto B5257d5;
case 0x5257d7:goto L5257d7;
case 0x5257dc:c.instructions+=1;goto B5257dc;
case 0x5257de:goto L5257de;
case 0x5257e3:c.instructions+=1;goto B5257e3;
case 0x5257e5:goto L5257e5;
case 0x5257ea:c.instructions+=1;goto B5257ea;
case 0x5257ec:goto L5257ec;
case 0x5257f1:goto L5257f1;
case 0x5257f5:c.instructions+=6;goto B5257f5;
case 0x5257fa:c.instructions+=5;goto B5257fa;
case 0x5257fc:c.instructions+=4;goto B5257fc;
case 0x525804:c.instructions+=3;goto B525804;
case 0x52580c:c.instructions+=2;goto B52580c;
case 0x525814:c.instructions+=1;goto B525814;
case 0x525816:goto L525816;
case 0x52581c:c.instructions+=2;goto B52581c;
case 0x52581e:c.instructions+=1;goto B52581e;
case 0x525820:goto L525820;
case 0x525823:c.instructions+=2;goto B525823;
case 0x525825:c.instructions+=1;goto B525825;
case 0x525827:goto L525827;
case 0x525828:c.instructions+=2;goto B525828;
case 0x52582c:c.instructions+=1;goto B52582c;
case 0x525832:goto L525832;
case 0x525838:c.instructions+=1;goto B525838;
case 0x52583b:goto L52583b;
case 0x52583c:c.instructions+=3;goto B52583c;
case 0x52583d:c.instructions+=2;goto B52583d;
case 0x525840:c.instructions+=1;goto B525840;
case 0x525850:goto L525850;
case 0x525853:c.instructions+=5;goto B525853;
case 0x525854:c.instructions+=4;goto B525854;
case 0x525856:c.instructions+=3;goto B525856;
case 0x52585c:c.instructions+=2;goto B52585c;
case 0x52585e:c.instructions+=1;goto B52585e;
case 0x525860:goto L525860;
case 0x525865:c.instructions+=5;goto B525865;
case 0x525867:c.instructions+=4;goto B525867;
case 0x52586f:c.instructions+=3;goto B52586f;
case 0x525877:c.instructions+=2;goto B525877;
case 0x52587f:c.instructions+=1;goto B52587f;
case 0x525881:goto L525881;
case 0x525887:c.instructions+=2;goto B525887;
case 0x525889:c.instructions+=1;goto B525889;
case 0x52588b:goto L52588b;
case 0x52588e:c.instructions+=2;goto B52588e;
case 0x525890:c.instructions+=1;goto B525890;
case 0x525892:goto L525892;
case 0x525893:c.instructions+=2;goto B525893;
case 0x525897:c.instructions+=1;goto B525897;
case 0x52589d:goto L52589d;
case 0x5258a4:goto L5258a4;
case 0x5258a5:c.instructions+=2;goto B5258a5;
case 0x5258a8:c.instructions+=1;goto B5258a8;
case 0x5258b0:goto L5258b0;
case 0x5258b3:c.instructions+=6;goto B5258b3;
case 0x5258b8:c.instructions+=5;goto B5258b8;
case 0x5258ba:c.instructions+=4;goto B5258ba;
case 0x5258c2:c.instructions+=3;goto B5258c2;
case 0x5258ca:c.instructions+=2;goto B5258ca;
case 0x5258d2:c.instructions+=1;goto B5258d2;
case 0x5258d4:goto L5258d4;
case 0x5258da:c.instructions+=2;goto B5258da;
case 0x5258dc:c.instructions+=1;goto B5258dc;
case 0x5258de:goto L5258de;
case 0x5258e1:c.instructions+=2;goto B5258e1;
case 0x5258e3:c.instructions+=1;goto B5258e3;
case 0x5258e5:goto L5258e5;
case 0x5258e6:c.instructions+=2;goto B5258e6;
case 0x5258ea:c.instructions+=1;goto B5258ea;
case 0x5258f0:goto L5258f0;
case 0x5258f3:c.instructions+=1;goto B5258f3;
case 0x525900:goto L525900;
case 0x525903:c.instructions+=6;goto B525903;
case 0x525908:c.instructions+=5;goto B525908;
case 0x52590a:c.instructions+=4;goto B52590a;
case 0x525912:c.instructions+=3;goto B525912;
case 0x52591a:c.instructions+=2;goto B52591a;
case 0x525922:c.instructions+=1;goto B525922;
case 0x525924:goto L525924;
case 0x52592a:c.instructions+=2;goto B52592a;
case 0x52592c:c.instructions+=1;goto B52592c;
case 0x52592e:goto L52592e;
case 0x525931:c.instructions+=2;goto B525931;
case 0x525933:c.instructions+=1;goto B525933;
case 0x525935:goto L525935;
case 0x525936:c.instructions+=2;goto B525936;
case 0x52593a:c.instructions+=1;goto B52593a;
case 0x525940:goto L525940;
case 0x525943:c.instructions+=1;goto B525943;
case 0x525950:goto L525950;
case 0x525953:c.instructions+=6;goto B525953;
case 0x525958:c.instructions+=5;goto B525958;
case 0x52595a:c.instructions+=4;goto B52595a;
case 0x525962:c.instructions+=3;goto B525962;
case 0x52596a:c.instructions+=2;goto B52596a;
case 0x525972:c.instructions+=1;goto B525972;
case 0x525974:goto L525974;
case 0x52597a:c.instructions+=2;goto B52597a;
case 0x52597c:c.instructions+=1;goto B52597c;
case 0x52597e:goto L52597e;
case 0x525981:c.instructions+=2;goto B525981;
case 0x525983:c.instructions+=1;goto B525983;
case 0x525985:goto L525985;
case 0x525986:c.instructions+=2;goto B525986;
case 0x52598a:c.instructions+=1;goto B52598a;
case 0x525990:goto L525990;
case 0x525993:c.instructions+=1;goto B525993;
case 0x5259a0:goto L5259a0;
case 0x5259a3:c.instructions+=6;goto B5259a3;
case 0x5259a8:c.instructions+=5;goto B5259a8;
case 0x5259aa:c.instructions+=4;goto B5259aa;
case 0x5259b2:c.instructions+=3;goto B5259b2;
case 0x5259ba:c.instructions+=2;goto B5259ba;
case 0x5259c2:c.instructions+=1;goto B5259c2;
case 0x5259c4:goto L5259c4;
case 0x5259ca:c.instructions+=2;goto B5259ca;
case 0x5259cc:c.instructions+=1;goto B5259cc;
case 0x5259ce:goto L5259ce;
case 0x5259d1:c.instructions+=2;goto B5259d1;
case 0x5259d3:c.instructions+=1;goto B5259d3;
case 0x5259d5:goto L5259d5;
case 0x5259d6:c.instructions+=2;goto B5259d6;
case 0x5259da:c.instructions+=1;goto B5259da;
case 0x5259e0:goto L5259e0;
case 0x5259e3:c.instructions+=1;goto B5259e3;
case 0x5259f0:goto L5259f0;
case 0x5259f5:c.instructions+=3;goto B5259f5;
case 0x5259f7:c.instructions+=2;goto B5259f7;
case 0x5259f8:c.instructions+=1;goto B5259f8;
case 0x5259fa:goto L5259fa;
case 0x5259fd:c.instructions+=2;goto B5259fd;
case 0x5259ff:c.instructions+=1;goto B5259ff;
case 0x525a01:goto L525a01;
case 0x525a03:c.instructions+=2;goto B525a03;
case 0x525a05:c.instructions+=1;goto B525a05;
case 0x525a0a:goto L525a0a;
case 0x525a0c:c.instructions+=1;goto B525a0c;
case 0x525a0e:goto L525a0e;
case 0x525a10:c.instructions+=2;goto B525a10;
case 0x525a12:c.instructions+=1;goto B525a12;
case 0x525a17:goto L525a17;
case 0x525a19:c.instructions+=1;goto B525a19;
case 0x525a1b:goto L525a1b;
case 0x525a1d:c.instructions+=2;goto B525a1d;
case 0x525a1e:c.instructions+=1;goto B525a1e;
case 0x525a1f:goto L525a1f;
case 0x525a21:c.instructions+=2;goto B525a21;
case 0x525a22:c.instructions+=1;goto B525a22;
case 0x525a30:goto L525a30;
case 0x525a31:c.instructions+=7;goto B525a31;
case 0x525a33:c.instructions+=6;goto B525a33;
case 0x525a37:c.instructions+=5;goto B525a37;
case 0x525a39:c.instructions+=4;goto B525a39;
case 0x525a3d:c.instructions+=3;goto B525a3d;
case 0x525a3e:c.instructions+=2;goto B525a3e;
case 0x525a3f:c.instructions+=1;goto B525a3f;
case 0x525a44:goto L525a44;
case 0x525a46:c.instructions+=5;goto B525a46;
case 0x525a49:c.instructions+=4;goto B525a49;
case 0x525a4b:c.instructions+=3;goto B525a4b;
case 0x525a4d:c.instructions+=2;goto B525a4d;
case 0x525a54:c.instructions+=1;goto B525a54;
case 0x525a56:goto L525a56;
case 0x525a5a:c.instructions+=7;goto B525a5a;
case 0x525a5b:c.instructions+=6;goto B525a5b;
case 0x525a5d:c.instructions+=5;goto B525a5d;
case 0x525a5f:c.instructions+=4;goto B525a5f;
case 0x525a62:c.instructions+=3;goto B525a62;
case 0x525a65:c.instructions+=2;goto B525a65;
case 0x525a69:c.instructions+=1;goto B525a69;
case 0x525a6b:goto L525a6b;
case 0x525a6d:c.instructions+=1;goto B525a6d;
case 0x525a72:goto L525a72;
case 0x525a74:c.instructions+=2;goto B525a74;
case 0x525a77:c.instructions+=1;goto B525a77;
case 0x525a79:goto L525a79;
case 0x525a80:goto L525a80;
case 0x525a83:c.instructions+=2;goto B525a83;
case 0x525a87:c.instructions+=1;goto B525a87;
case 0x525a89:goto L525a89;
case 0x525a8d:c.instructions+=1;goto B525a8d;
case 0x525a8f:goto L525a8f;
case 0x525a94:goto L525a94;
case 0x525a97:c.instructions+=3;goto B525a97;
case 0x525a9a:c.instructions+=2;goto B525a9a;
case 0x525a9c:c.instructions+=1;goto B525a9c;
case 0x525a9e:goto L525a9e;
case 0x525aa1:c.instructions+=1;goto B525aa1;
case 0x525aa7:goto L525aa7;
case 0x525aaa:c.instructions+=3;goto B525aaa;
case 0x525aad:c.instructions+=2;goto B525aad;
case 0x525aae:c.instructions+=1;goto B525aae;
case 0x525ac0:goto L525ac0;
case 0x525ac1:c.instructions+=5;goto B525ac1;
case 0x525ac2:c.instructions+=4;goto B525ac2;
case 0x525ac4:c.instructions+=3;goto B525ac4;
case 0x525ac6:c.instructions+=2;goto B525ac6;
case 0x525ac8:c.instructions+=1;goto B525ac8;
case 0x525aca:goto L525aca;
case 0x525ad0:goto L525ad0;
case 0x525ad3:c.instructions+=6;goto B525ad3;
case 0x525ad5:c.instructions+=5;goto B525ad5;
case 0x525ad7:c.instructions+=4;goto B525ad7;
case 0x525ada:c.instructions+=3;goto B525ada;
case 0x525ae0:c.instructions+=2;goto B525ae0;
case 0x525ae1:c.instructions+=1;goto B525ae1;
case 0x525ae6:goto L525ae6;
case 0x525ae8:c.instructions+=2;goto B525ae8;
case 0x525ae9:c.instructions+=1;goto B525ae9;
case 0x525aeb:goto L525aeb;
case 0x525af1:c.instructions+=1;goto B525af1;
case 0x525af6:goto L525af6;
case 0x525af8:goto L525af8;
case 0x525afe:c.instructions+=1;goto B525afe;
case 0x525b03:goto L525b03;
case 0x525b08:c.instructions+=3;goto B525b08;
case 0x525b0b:c.instructions+=2;goto B525b0b;
case 0x525b0d:c.instructions+=1;goto B525b0d;
case 0x525b0f:goto L525b0f;
case 0x525b10:c.instructions+=1;goto B525b10;
case 0x525b15:goto L525b15;
case 0x525b18:c.instructions+=1;goto B525b18;
case 0x525b22:goto L525b22;
case 0x525b24:c.instructions+=2;goto B525b24;
case 0x525b26:c.instructions+=1;goto B525b26;
case 0x525b28:goto L525b28;
case 0x525b29:c.instructions+=2;goto B525b29;
case 0x525b2a:c.instructions+=1;goto B525b2a;
case 0x525b30:goto L525b30;
case 0x525b31:c.instructions+=5;goto B525b31;
case 0x525b32:c.instructions+=4;goto B525b32;
case 0x525b34:c.instructions+=3;goto B525b34;
case 0x525b37:c.instructions+=2;goto B525b37;
case 0x525b39:c.instructions+=1;goto B525b39;
case 0x525b3b:goto L525b3b;
case 0x525b3f:c.instructions+=1;goto B525b3f;
case 0x525b40:goto L525b40;
case 0x525b43:c.instructions+=2;goto B525b43;
case 0x525b45:c.instructions+=1;goto B525b45;
case 0x525b47:goto L525b47;
case 0x525b4d:c.instructions+=2;goto B525b4d;
case 0x525b4f:c.instructions+=1;goto B525b4f;
case 0x525b51:goto L525b51;
case 0x525b54:c.instructions+=2;goto B525b54;
case 0x525b56:c.instructions+=1;goto B525b56;
case 0x525b58:goto L525b58;
case 0x525b59:c.instructions+=2;goto B525b59;
case 0x525b5a:c.instructions+=1;goto B525b5a;
case 0x525b5d:goto L525b5d;
case 0x525b5e:c.instructions+=2;goto B525b5e;
case 0x525b64:c.instructions+=1;goto B525b64;
case 0x525b69:goto L525b69;
case 0x525b6f:c.instructions+=1;goto B525b6f;
case 0x525b71:goto L525b71;
case 0x525b72:c.instructions+=2;goto B525b72;
case 0x525b74:c.instructions+=1;goto B525b74;
case 0x525b79:goto L525b79;
case 0x525b7b:c.instructions+=3;goto B525b7b;
case 0x525b7d:c.instructions+=2;goto B525b7d;
case 0x525b7f:c.instructions+=1;goto B525b7f;
case 0x525b81:goto L525b81;
case 0x525b82:c.instructions+=2;goto B525b82;
case 0x525b83:c.instructions+=1;goto B525b83;
case 0x525b90:goto L525b90;
case 0x525b91:c.instructions+=5;goto B525b91;
case 0x525b92:c.instructions+=4;goto B525b92;
case 0x525b94:c.instructions+=3;goto B525b94;
case 0x525b97:c.instructions+=2;goto B525b97;
case 0x525b99:c.instructions+=1;goto B525b99;
case 0x525b9b:goto L525b9b;
case 0x525b9f:c.instructions+=1;goto B525b9f;
case 0x525ba0:goto L525ba0;
case 0x525ba3:c.instructions+=2;goto B525ba3;
case 0x525ba5:c.instructions+=1;goto B525ba5;
case 0x525ba7:goto L525ba7;
case 0x525bad:c.instructions+=2;goto B525bad;
case 0x525baf:c.instructions+=1;goto B525baf;
case 0x525bb1:goto L525bb1;
case 0x525bb4:c.instructions+=2;goto B525bb4;
case 0x525bb6:c.instructions+=1;goto B525bb6;
case 0x525bb8:goto L525bb8;
case 0x525bb9:c.instructions+=2;goto B525bb9;
case 0x525bba:c.instructions+=1;goto B525bba;
case 0x525bbd:goto L525bbd;
case 0x525bbe:c.instructions+=2;goto B525bbe;
case 0x525bc4:c.instructions+=1;goto B525bc4;
case 0x525bc9:goto L525bc9;
case 0x525bcf:c.instructions+=1;goto B525bcf;
case 0x525bd1:goto L525bd1;
case 0x525bd2:c.instructions+=2;goto B525bd2;
case 0x525bd4:c.instructions+=1;goto B525bd4;
case 0x525bd9:goto L525bd9;
case 0x525bdb:c.instructions+=3;goto B525bdb;
case 0x525bdd:c.instructions+=2;goto B525bdd;
case 0x525bdf:c.instructions+=1;goto B525bdf;
case 0x525be1:goto L525be1;
case 0x525be2:c.instructions+=2;goto B525be2;
case 0x525be3:c.instructions+=1;goto B525be3;
case 0x525bf0:goto L525bf0;
case 0x525bf1:c.instructions+=5;goto B525bf1;
case 0x525bf2:c.instructions+=4;goto B525bf2;
case 0x525bf4:c.instructions+=3;goto B525bf4;
case 0x525bf7:c.instructions+=2;goto B525bf7;
case 0x525bf9:c.instructions+=1;goto B525bf9;
case 0x525bfb:goto L525bfb;
case 0x525bff:c.instructions+=1;goto B525bff;
case 0x525c00:goto L525c00;
case 0x525c03:c.instructions+=2;goto B525c03;
case 0x525c05:c.instructions+=1;goto B525c05;
case 0x525c07:goto L525c07;
case 0x525c0d:c.instructions+=2;goto B525c0d;
case 0x525c0f:c.instructions+=1;goto B525c0f;
case 0x525c11:goto L525c11;
case 0x525c14:c.instructions+=2;goto B525c14;
case 0x525c16:c.instructions+=1;goto B525c16;
case 0x525c18:goto L525c18;
case 0x525c19:c.instructions+=2;goto B525c19;
case 0x525c1a:c.instructions+=1;goto B525c1a;
case 0x525c1d:goto L525c1d;
case 0x525c1e:c.instructions+=2;goto B525c1e;
case 0x525c24:c.instructions+=1;goto B525c24;
case 0x525c29:goto L525c29;
case 0x525c2f:c.instructions+=1;goto B525c2f;
case 0x525c31:goto L525c31;
case 0x525c32:c.instructions+=2;goto B525c32;
case 0x525c34:c.instructions+=1;goto B525c34;
case 0x525c39:goto L525c39;
case 0x525c3b:c.instructions+=3;goto B525c3b;
case 0x525c3d:c.instructions+=2;goto B525c3d;
case 0x525c3f:c.instructions+=1;goto B525c3f;
case 0x525c41:goto L525c41;
case 0x525c42:c.instructions+=2;goto B525c42;
case 0x525c43:c.instructions+=1;goto B525c43;
case 0x525c50:goto L525c50;
case 0x525c51:c.instructions+=3;goto B525c51;
case 0x525c53:c.instructions+=2;goto B525c53;
case 0x525c55:c.instructions+=1;goto B525c55;
case 0x525c57:goto L525c57;
case 0x525c59:c.instructions+=4;goto B525c59;
case 0x525c5b:c.instructions+=3;goto B525c5b;
case 0x525c5d:c.instructions+=2;goto B525c5d;
case 0x525c60:c.instructions+=1;goto B525c60;
case 0x525c62:goto L525c62;
case 0x525c65:goto L525c65;
case 0x525c66:c.instructions+=1;goto B525c66;
case 0x525c6b:goto L525c6b;
case 0x525c6d:c.instructions+=3;goto B525c6d;
case 0x525c70:c.instructions+=2;goto B525c70;
case 0x525c72:c.instructions+=1;goto B525c72;
case 0x525c74:goto L525c74;
case 0x525c75:c.instructions+=1;goto B525c75;
case 0x525c80:goto L525c80;
case 0x525c81:c.instructions+=2;goto B525c81;
case 0x525c83:c.instructions+=1;goto B525c83;
case 0x525c88:goto L525c88;
case 0x525c8d:c.instructions+=1;goto B525c8d;
case 0x525c8f:goto L525c8f;
case 0x525c90:c.instructions+=1;goto B525c90;
case 0x525c95:goto L525c95;
case 0x525c98:goto L525c98;
case 0x525c9a:c.instructions+=2;goto B525c9a;
case 0x525c9b:c.instructions+=1;goto B525c9b;
case 0x525ca0:goto L525ca0;
case 0x525ca1:c.instructions+=4;goto B525ca1;
case 0x525ca4:c.instructions+=3;goto B525ca4;
case 0x525ca9:c.instructions+=2;goto B525ca9;
case 0x525cab:c.instructions+=1;goto B525cab;
case 0x525cb0:goto L525cb0;
case 0x525cb3:c.instructions+=7;goto B525cb3;
case 0x525cb6:c.instructions+=6;goto B525cb6;
case 0x525cbc:c.instructions+=5;goto B525cbc;
case 0x525cbf:c.instructions+=4;goto B525cbf;
case 0x525cc2:c.instructions+=3;goto B525cc2;
case 0x525cc5:c.instructions+=2;goto B525cc5;
case 0x525cc6:c.instructions+=1;goto B525cc6;
case 0x525cc8:goto L525cc8;
case 0x525ccd:goto L525ccd;
case 0x525ccf:c.instructions+=2;goto B525ccf;
case 0x525cd0:c.instructions+=1;goto B525cd0;
case 0x525ce0:goto L525ce0;
case 0x525ce6:c.instructions+=1;goto B525ce6;
case 0x525cf0:goto L525cf0;
case 0x525cf1:c.instructions+=2;goto B525cf1;
case 0x525cf3:c.instructions+=1;goto B525cf3;
case 0x525cf8:goto L525cf8;
case 0x525cfe:c.instructions+=3;goto B525cfe;
case 0x525d00:c.instructions+=2;goto B525d00;
case 0x525d01:c.instructions+=1;goto B525d01;
case 0x525d10:goto L525d10;
case 0x525d11:c.instructions+=9;goto B525d11;
case 0x525d12:c.instructions+=8;goto B525d12;
case 0x525d16:c.instructions+=7;goto B525d16;
case 0x525d17:c.instructions+=6;goto B525d17;
case 0x525d18:c.instructions+=5;goto B525d18;
case 0x525d1a:c.instructions+=4;goto B525d1a;
case 0x525d1c:c.instructions+=3;goto B525d1c;
case 0x525d1e:c.instructions+=2;goto B525d1e;
case 0x525d20:c.instructions+=1;goto B525d20;
case 0x525d28:goto L525d28;
case 0x525d2b:c.instructions+=3;goto B525d2b;
case 0x525d2c:c.instructions+=2;goto B525d2c;
case 0x525d2e:c.instructions+=1;goto B525d2e;
case 0x525d33:goto L525d33;
case 0x525d37:c.instructions+=4;goto B525d37;
case 0x525d3d:c.instructions+=3;goto B525d3d;
case 0x525d3e:c.instructions+=2;goto B525d3e;
case 0x525d42:c.instructions+=1;goto B525d42;
case 0x525d44:goto L525d44;
case 0x525d4a:c.instructions+=19;goto B525d4a;
case 0x525d50:c.instructions+=18;goto B525d50;
case 0x525d56:c.instructions+=17;goto B525d56;
case 0x525d5c:c.instructions+=16;goto B525d5c;
case 0x525d62:c.instructions+=15;goto B525d62;
case 0x525d68:c.instructions+=14;goto B525d68;
case 0x525d6e:c.instructions+=13;goto B525d6e;
case 0x525d74:c.instructions+=12;goto B525d74;
case 0x525d7a:c.instructions+=11;goto B525d7a;
case 0x525d80:c.instructions+=10;goto B525d80;
case 0x525d86:c.instructions+=9;goto B525d86;
case 0x525d8c:c.instructions+=8;goto B525d8c;
case 0x525d92:c.instructions+=7;goto B525d92;
case 0x525d98:c.instructions+=6;goto B525d98;
case 0x525d9a:c.instructions+=5;goto B525d9a;
case 0x525d9b:c.instructions+=4;goto B525d9b;
case 0x525d9c:c.instructions+=3;goto B525d9c;
case 0x525d9d:c.instructions+=2;goto B525d9d;
case 0x525d9e:c.instructions+=1;goto B525d9e;
case 0x525db0:goto L525db0;
case 0x525db1:c.instructions+=8;goto B525db1;
case 0x525db2:c.instructions+=7;goto B525db2;
case 0x525db6:c.instructions+=6;goto B525db6;
case 0x525dba:c.instructions+=5;goto B525dba;
case 0x525dbb:c.instructions+=4;goto B525dbb;
case 0x525dbf:c.instructions+=3;goto B525dbf;
case 0x525dc0:c.instructions+=2;goto B525dc0;
case 0x525dc1:c.instructions+=1;goto B525dc1;
case 0x525dc6:goto L525dc6;
case 0x525dc9:c.instructions+=2;goto B525dc9;
case 0x525dcb:c.instructions+=1;goto B525dcb;
case 0x525dcd:goto L525dcd;
case 0x525dd0:c.instructions+=3;goto B525dd0;
case 0x525dd1:c.instructions+=2;goto B525dd1;
case 0x525dd4:c.instructions+=1;goto B525dd4;
case 0x525dd6:goto L525dd6;
case 0x525dd9:c.instructions+=1;goto B525dd9;
case 0x525ddb:goto L525ddb;
case 0x525dde:c.instructions+=1;goto B525dde;
case 0x525de0:goto L525de0;
case 0x525de4:c.instructions+=3;goto B525de4;
case 0x525de8:c.instructions+=2;goto B525de8;
case 0x525deb:c.instructions+=1;goto B525deb;
case 0x525dee:goto L525dee;
case 0x525df2:c.instructions+=4;goto B525df2;
case 0x525df6:c.instructions+=3;goto B525df6;
case 0x525df9:c.instructions+=2;goto B525df9;
case 0x525dfc:c.instructions+=1;goto B525dfc;
case 0x525e03:goto L525e03;
case 0x525e04:c.instructions+=2;goto B525e04;
case 0x525e05:c.instructions+=1;goto B525e05;
case 0x525e10:goto L525e10;
case 0x525e11:c.instructions+=3;goto B525e11;
case 0x525e13:c.instructions+=2;goto B525e13;
case 0x525e14:c.instructions+=1;goto B525e14;
case 0x525e19:goto L525e19;
case 0x525e1c:c.instructions+=7;goto B525e1c;
case 0x525e20:c.instructions+=6;goto B525e20;
case 0x525e23:c.instructions+=5;goto B525e23;
case 0x525e27:c.instructions+=4;goto B525e27;
case 0x525e2d:c.instructions+=3;goto B525e2d;
case 0x525e33:c.instructions+=2;goto B525e33;
case 0x525e35:c.instructions+=1;goto B525e35;
case 0x525e3a:goto L525e3a;
case 0x525e3d:c.instructions+=1;goto B525e3d;
case 0x525e3f:goto L525e3f;
case 0x525e44:c.instructions+=2;goto B525e44;
case 0x525e45:c.instructions+=1;goto B525e45;
case 0x525e46:goto L525e46;
case 0x525e48:c.instructions+=1;goto B525e48;
case 0x525e4a:goto L525e4a;
case 0x525e4c:goto L525e4c;
case 0x525e4d:c.instructions+=1;goto B525e4d;
case 0x525e50:goto L525e50;
case 0x525e51:c.instructions+=5;goto B525e51;
case 0x525e53:c.instructions+=4;goto B525e53;
case 0x525e56:c.instructions+=3;goto B525e56;
case 0x525e58:c.instructions+=2;goto B525e58;
case 0x525e5e:c.instructions+=1;goto B525e5e;
case 0x525e60:goto L525e60;
case 0x525e65:goto L525e65;
case 0x525e6a:c.instructions+=1;goto B525e6a;
case 0x525e6c:goto L525e6c;
case 0x525e6d:c.instructions+=1;goto B525e6d;
case 0x525e72:goto L525e72;
case 0x525e75:goto L525e75;
case 0x525e77:c.instructions+=2;goto B525e77;
case 0x525e78:c.instructions+=1;goto B525e78;
case 0x525e80:goto L525e80;
case 0x525e82:c.instructions+=18;goto B525e82;
case 0x525e85:c.instructions+=17;goto B525e85;
case 0x525e87:c.instructions+=16;goto B525e87;
case 0x525e89:c.instructions+=15;goto B525e89;
case 0x525e8c:c.instructions+=14;goto B525e8c;
case 0x525e8f:c.instructions+=13;goto B525e8f;
case 0x525e92:c.instructions+=12;goto B525e92;
case 0x525e98:c.instructions+=11;goto B525e98;
case 0x525e9b:c.instructions+=10;goto B525e9b;
case 0x525e9e:c.instructions+=9;goto B525e9e;
case 0x525ea3:c.instructions+=8;goto B525ea3;
case 0x525ea6:c.instructions+=7;goto B525ea6;
case 0x525ea9:c.instructions+=6;goto B525ea9;
case 0x525eb0:c.instructions+=5;goto B525eb0;
case 0x525eb7:c.instructions+=4;goto B525eb7;
case 0x525eba:c.instructions+=3;goto B525eba;
case 0x525ebd:c.instructions+=2;goto B525ebd;
case 0x525ec0:c.instructions+=1;goto B525ec0;
case 0x525ed0:goto L525ed0;
case 0x525ed1:c.instructions+=10;goto B525ed1;
case 0x525ed3:c.instructions+=9;goto B525ed3;
case 0x525ed6:c.instructions+=8;goto B525ed6;
case 0x525ed8:c.instructions+=7;goto B525ed8;
case 0x525edd:c.instructions+=6;goto B525edd;
case 0x525ee3:c.instructions+=5;goto B525ee3;
case 0x525ee4:c.instructions+=4;goto B525ee4;
case 0x525eeb:c.instructions+=3;goto B525eeb;
case 0x525eec:c.instructions+=2;goto B525eec;
case 0x525ef1:c.instructions+=1;goto B525ef1;
case 0x525ef6:goto L525ef6;
case 0x525ef9:c.instructions+=6;goto B525ef9;
case 0x525efa:c.instructions+=5;goto B525efa;
case 0x525efb:c.instructions+=4;goto B525efb;
case 0x525efd:c.instructions+=3;goto B525efd;
case 0x525eff:c.instructions+=2;goto B525eff;
case 0x525f00:c.instructions+=1;goto B525f00;
case 0x525f06:goto L525f06;
case 0x525f0e:c.instructions+=5;goto B525f0e;
case 0x525f13:c.instructions+=4;goto B525f13;
case 0x525f18:c.instructions+=3;goto B525f18;
case 0x525f1a:c.instructions+=2;goto B525f1a;
case 0x525f1f:c.instructions+=1;goto B525f1f;
case 0x525f21:goto L525f21;
case 0x525f26:goto L525f26;
case 0x525f29:c.instructions+=1;goto B525f29;
case 0x525f2b:goto L525f2b;
case 0x525f2e:c.instructions+=1;goto B525f2e;
case 0x525f30:goto L525f30;
case 0x525f33:c.instructions+=1;goto B525f33;
case 0x525f35:goto L525f35;
case 0x525f3b:c.instructions+=1;goto B525f3b;
case 0x525f3d:goto L525f3d;
case 0x525f43:goto L525f43;
case 0x525f4a:c.instructions+=3;goto B525f4a;
case 0x525f4e:c.instructions+=2;goto B525f4e;
case 0x525f55:c.instructions+=1;goto B525f55;
case 0x525f5a:goto L525f5a;
case 0x525f5c:c.instructions+=6;goto B525f5c;
case 0x525f5e:c.instructions+=5;goto B525f5e;
case 0x525f60:c.instructions+=4;goto B525f60;
case 0x525f62:c.instructions+=3;goto B525f62;
case 0x525f66:c.instructions+=2;goto B525f66;
case 0x525f71:c.instructions+=1;goto B525f71;
case 0x525f76:goto L525f76;
case 0x525f7c:c.instructions+=3;goto B525f7c;
case 0x525f81:c.instructions+=2;goto B525f81;
case 0x525f88:c.instructions+=1;goto B525f88;
case 0x525f8a:goto L525f8a;
case 0x525f90:c.instructions+=1;goto B525f90;
case 0x525f92:goto L525f92;
case 0x525f96:c.instructions+=2;goto B525f96;
case 0x525f9c:c.instructions+=1;goto B525f9c;
case 0x525f9e:goto L525f9e;
case 0x525fa0:goto L525fa0;
case 0x525fa6:c.instructions+=3;goto B525fa6;
case 0x525fac:c.instructions+=2;goto B525fac;
case 0x525fb0:c.instructions+=1;goto B525fb0;
case 0x525fb2:goto L525fb2;
case 0x525fb9:goto L525fb9;
case 0x525fbb:c.instructions+=1;goto B525fbb;
case 0x525fc1:goto L525fc1;
case 0x525fc3:c.instructions+=2;goto B525fc3;
case 0x525fc5:c.instructions+=1;goto B525fc5;
case 0x525fc7:goto L525fc7;
case 0x525fca:c.instructions+=1;goto B525fca;
case 0x525fcc:goto L525fcc;
case 0x525fcd:c.instructions+=3;goto B525fcd;
case 0x525fd0:c.instructions+=2;goto B525fd0;
case 0x525fd3:c.instructions+=1;goto B525fd3;
case 0x525fd5:goto L525fd5;
case 0x525fd7:goto L525fd7;
case 0x525fdb:c.instructions+=3;goto B525fdb;
case 0x525fe2:c.instructions+=2;goto B525fe2;
case 0x525fe4:c.instructions+=1;goto B525fe4;
case 0x525fe6:goto L525fe6;
case 0x525fe8:c.instructions+=2;goto B525fe8;
case 0x525fea:c.instructions+=1;goto B525fea;
case 0x525fed:goto L525fed;
case 0x525ff0:c.instructions+=7;goto B525ff0;
case 0x525ff2:c.instructions+=6;goto B525ff2;
case 0x525ff3:c.instructions+=5;goto B525ff3;
case 0x525ff7:c.instructions+=4;goto B525ff7;
case 0x525ff8:c.instructions+=3;goto B525ff8;
case 0x525ff9:c.instructions+=2;goto B525ff9;
case 0x525ffb:c.instructions+=1;goto B525ffb;
case 0x525ffe:goto L525ffe;
default:missing_instruction(c.pc);}
B525040:L525040:{c.instructions+=3;NFSU2_TR(0x525040);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525044:{NFSU2_TR(0x525044);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525047:{NFSU2_TR(0x525047);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5250d2;}}
}
B52504d:L52504d:{c.instructions+=1;NFSU2_TR(0x52504d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5250d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B525054:L525054:{c.instructions+=3;NFSU2_TR(0x525054);
w4(R+0,u32(0x10ull));
}
B525059:{NFSU2_TR(0x525059);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52505d:{NFSU2_TR(0x52505d);
TAIL_STATIC(0x5243d0u,524);
}
B525062:L525062:{c.instructions+=3;NFSU2_TR(0x525062);
w4(R+0,u32(0xcull));
}
B525067:{NFSU2_TR(0x525067);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52506b:{NFSU2_TR(0x52506b);
TAIL_STATIC(0x5243d0u,524);
}
B525070:L525070:{c.instructions+=3;NFSU2_TR(0x525070);
w4(R+0,u32(0x9ull));
}
B525075:{NFSU2_TR(0x525075);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525079:{NFSU2_TR(0x525079);
TAIL_STATIC(0x5243d0u,524);
}
B52507e:L52507e:{c.instructions+=3;NFSU2_TR(0x52507e);
w4(R+0,u32(0x7ull));
}
B525083:{NFSU2_TR(0x525083);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525087:{NFSU2_TR(0x525087);
TAIL_STATIC(0x5243d0u,524);
}
B52508c:L52508c:{c.instructions+=3;NFSU2_TR(0x52508c);
w4(R+0,u32(0xdull));
}
B525091:{NFSU2_TR(0x525091);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525095:{NFSU2_TR(0x525095);
TAIL_STATIC(0x5243d0u,524);
}
B52509a:L52509a:{c.instructions+=3;NFSU2_TR(0x52509a);
w4(R+0,u32(0xaull));
}
B52509f:{NFSU2_TR(0x52509f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5250a3:{NFSU2_TR(0x5250a3);
TAIL_STATIC(0x5243d0u,524);
}
B5250a8:L5250a8:{c.instructions+=3;NFSU2_TR(0x5250a8);
w4(R+0,u32(0x3ull));
}
B5250ad:{NFSU2_TR(0x5250ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5250b1:{NFSU2_TR(0x5250b1);
TAIL_STATIC(0x5243d0u,524);
}
B5250b6:L5250b6:{c.instructions+=3;NFSU2_TR(0x5250b6);
w4(R+0,u32(0x6ull));
}
B5250bb:{NFSU2_TR(0x5250bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5250bf:{NFSU2_TR(0x5250bf);
TAIL_STATIC(0x5243d0u,524);
}
B5250c4:L5250c4:{c.instructions+=3;NFSU2_TR(0x5250c4);
w4(R+0,u32(0xbull));
}
B5250c9:{NFSU2_TR(0x5250c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5250cd:{NFSU2_TR(0x5250cd);
TAIL_STATIC(0x5243d0u,524);
}
B5250d2:L5250d2:{c.instructions+=1;NFSU2_TR(0x5250d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525100:L525100:{c.instructions+=3;NFSU2_TR(0x525100);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525104:{NFSU2_TR(0x525104);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525107:{NFSU2_TR(0x525107);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L525172;}}
}
B525109:L525109:{c.instructions+=1;NFSU2_TR(0x525109);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x525178ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B525110:L525110:{c.instructions+=3;NFSU2_TR(0x525110);
w4(R+0,u32(0x13ull));
}
B525115:{NFSU2_TR(0x525115);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525119:{NFSU2_TR(0x525119);
TAIL_STATIC(0x5243d0u,524);
}
B52511e:L52511e:{c.instructions+=3;NFSU2_TR(0x52511e);
w4(R+0,u32(0x14ull));
}
B525123:{NFSU2_TR(0x525123);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525127:{NFSU2_TR(0x525127);
TAIL_STATIC(0x5243d0u,524);
}
B52512c:L52512c:{c.instructions+=3;NFSU2_TR(0x52512c);
w4(R+0,u32(0x18ull));
}
B525131:{NFSU2_TR(0x525131);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525135:{NFSU2_TR(0x525135);
TAIL_STATIC(0x5243d0u,524);
}
B52513a:L52513a:{c.instructions+=3;NFSU2_TR(0x52513a);
w4(R+0,u32(0x19ull));
}
B52513f:{NFSU2_TR(0x52513f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525143:{NFSU2_TR(0x525143);
TAIL_STATIC(0x5243d0u,524);
}
B525148:L525148:{c.instructions+=3;NFSU2_TR(0x525148);
w4(R+0,u32(0x15ull));
}
B52514d:{NFSU2_TR(0x52514d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525151:{NFSU2_TR(0x525151);
TAIL_STATIC(0x5243d0u,524);
}
B525156:L525156:{c.instructions+=3;NFSU2_TR(0x525156);
w4(R+0,u32(0x16ull));
}
B52515b:{NFSU2_TR(0x52515b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52515f:{NFSU2_TR(0x52515f);
TAIL_STATIC(0x5243d0u,524);
}
B525164:L525164:{c.instructions+=3;NFSU2_TR(0x525164);
w4(R+0,u32(0x17ull));
}
B525169:{NFSU2_TR(0x525169);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52516d:{NFSU2_TR(0x52516d);
TAIL_STATIC(0x5243d0u,524);
}
B525172:L525172:{c.instructions+=1;NFSU2_TR(0x525172);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5251a0:L5251a0:{c.instructions+=8;NFSU2_TR(0x5251a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B5251a3:{NFSU2_TR(0x5251a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5251a4:{NFSU2_TR(0x5251a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5251a5:{NFSU2_TR(0x5251a5);
__builtin_memmove((R+28),(R+4),4);
}
B5251a7:{NFSU2_TR(0x5251a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5251ab:{NFSU2_TR(0x5251ab);
__builtin_memmove((R+0),gp(0x863444),4);
}
B5251b0:{NFSU2_TR(0x5251b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5251b2:{NFSU2_TR(0x5251b2);
if(r1(R+518)){{goto L5253da;}}
}
B5251b8:L5251b8:{c.instructions+=4;NFSU2_TR(0x5251b8);
__builtin_memmove((R+0),gp(0x863448),4);
}
B5251bd:{NFSU2_TR(0x5251bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5251bf:{NFSU2_TR(0x5251bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5251c0:{NFSU2_TR(0x5251c0);
if(r1(R+518)){{goto L525305;}}
}
B5251c6:L5251c6:{c.instructions+=3;NFSU2_TR(0x5251c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5251c9:{NFSU2_TR(0x5251c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1bcb7ab0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5251ce:{NFSU2_TR(0x5251ce);
if(r1(R+518)){{goto L5252a4;}}
}
B5251d4:L5251d4:{c.instructions+=2;NFSU2_TR(0x5251d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca207583ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5251d9:{NFSU2_TR(0x5251d9);
if(r1(R+518)){{goto L525247;}}
}
B5251db:L5251db:{c.instructions+=2;NFSU2_TR(0x5251db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xca207584ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5251e0:{NFSU2_TR(0x5251e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5253d9;}}
}
B5251e6:L5251e6:{c.instructions+=3;NFSU2_TR(0x5251e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5251e9:{NFSU2_TR(0x5251e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5251eb:{NFSU2_TR(0x5251eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5253d9;}}
}
B5251f1:L5251f1:{c.instructions+=6;NFSU2_TR(0x5251f1);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5251f6:{NFSU2_TR(0x5251f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5251f8:{NFSU2_TR(0x5251f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525200:{NFSU2_TR(0x525200);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x100000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525208:{NFSU2_TR(0x525208);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525210:{NFSU2_TR(0x525210);
if(r1(R+518)){{goto L525235;}}
}
B525212:L525212:{c.instructions+=3;NFSU2_TR(0x525212);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B525218:{NFSU2_TR(0x525218);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52521a:{NFSU2_TR(0x52521a);
if(r1(R+518)){{goto L525235;}}
}
B52521c:L52521c:{c.instructions+=3;NFSU2_TR(0x52521c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52521f:{NFSU2_TR(0x52521f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525221:{NFSU2_TR(0x525221);
if(r1(R+518)){{goto L525235;}}
}
B525223:L525223:{c.instructions+=2;NFSU2_TR(0x525223);
__builtin_memmove((R+4),(R+24),4);
}
B525225:{NFSU2_TR(0x525225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52522aull));
TAIL_STATIC(0x45b490u,45b);
}
B52522a:L52522a:{c.instructions+=4;NFSU2_TR(0x52522a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52522e:{NFSU2_TR(0x52522e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52522f:{NFSU2_TR(0x52522f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525233:{NFSU2_TR(0x525233);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525235ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B525235:L525235:{c.instructions+=8;NFSU2_TR(0x525235);
w4(R+12,u32(0x1ull));
}
B52523a:{NFSU2_TR(0x52523a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52523b:{NFSU2_TR(0x52523b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52523e:{NFSU2_TR(0x52523e);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525241:{NFSU2_TR(0x525241);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525242:{NFSU2_TR(0x525242);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B525243:{NFSU2_TR(0x525243);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525246:{NFSU2_TR(0x525246);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525247:L525247:{c.instructions+=3;NFSU2_TR(0x525247);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52524a:{NFSU2_TR(0x52524a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52524c:{NFSU2_TR(0x52524c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5253d9;}}
}
B525252:L525252:{c.instructions+=7;NFSU2_TR(0x525252);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B525257:{NFSU2_TR(0x525257);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525259:{NFSU2_TR(0x525259);
w4(R+12,u32(0x1ull));
}
B52525e:{NFSU2_TR(0x52525e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525266:{NFSU2_TR(0x525266);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x80000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52526e:{NFSU2_TR(0x52526e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525272:{NFSU2_TR(0x525272);
if(r1(R+518)){{goto L525297;}}
}
B525274:L525274:{c.instructions+=3;NFSU2_TR(0x525274);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52527a:{NFSU2_TR(0x52527a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52527c:{NFSU2_TR(0x52527c);
if(r1(R+518)){{goto L525297;}}
}
B52527e:L52527e:{c.instructions+=3;NFSU2_TR(0x52527e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525281:{NFSU2_TR(0x525281);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525283:{NFSU2_TR(0x525283);
if(r1(R+518)){{goto L525297;}}
}
B525285:L525285:{c.instructions+=2;NFSU2_TR(0x525285);
__builtin_memmove((R+4),(R+24),4);
}
B525287:{NFSU2_TR(0x525287);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52528cull));
TAIL_STATIC(0x45b490u,45b);
}
B52528c:L52528c:{c.instructions+=4;NFSU2_TR(0x52528c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525290:{NFSU2_TR(0x525290);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525291:{NFSU2_TR(0x525291);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525295:{NFSU2_TR(0x525295);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525297ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B525297:L525297:{c.instructions+=7;NFSU2_TR(0x525297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525298:{NFSU2_TR(0x525298);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52529b:{NFSU2_TR(0x52529b);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52529e:{NFSU2_TR(0x52529e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52529f:{NFSU2_TR(0x52529f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5252a0:{NFSU2_TR(0x5252a0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5252a3:{NFSU2_TR(0x5252a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5252a4:L5252a4:{c.instructions+=3;NFSU2_TR(0x5252a4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5252a7:{NFSU2_TR(0x5252a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5252a9:{NFSU2_TR(0x5252a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5253d9;}}
}
B5252af:L5252af:{c.instructions+=6;NFSU2_TR(0x5252af);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5252b4:{NFSU2_TR(0x5252b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5252b6:{NFSU2_TR(0x5252b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5252be:{NFSU2_TR(0x5252be);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x200000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5252c6:{NFSU2_TR(0x5252c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x200ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5252ce:{NFSU2_TR(0x5252ce);
if(r1(R+518)){{goto L5252f3;}}
}
B5252d0:L5252d0:{c.instructions+=3;NFSU2_TR(0x5252d0);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5252d6:{NFSU2_TR(0x5252d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5252d8:{NFSU2_TR(0x5252d8);
if(r1(R+518)){{goto L5252f3;}}
}
B5252da:L5252da:{c.instructions+=3;NFSU2_TR(0x5252da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5252dd:{NFSU2_TR(0x5252dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5252df:{NFSU2_TR(0x5252df);
if(r1(R+518)){{goto L5252f3;}}
}
B5252e1:L5252e1:{c.instructions+=2;NFSU2_TR(0x5252e1);
__builtin_memmove((R+4),(R+24),4);
}
B5252e3:{NFSU2_TR(0x5252e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5252e8ull));
TAIL_STATIC(0x45b490u,45b);
}
B5252e8:L5252e8:{c.instructions+=4;NFSU2_TR(0x5252e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5252ec:{NFSU2_TR(0x5252ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5252ed:{NFSU2_TR(0x5252ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5252f1:{NFSU2_TR(0x5252f1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5252f3ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5252f3:L5252f3:{c.instructions+=8;NFSU2_TR(0x5252f3);
w4(R+12,u32(0x1ull));
}
B5252f8:{NFSU2_TR(0x5252f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5252f9:{NFSU2_TR(0x5252f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5252fc:{NFSU2_TR(0x5252fc);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5252ff:{NFSU2_TR(0x5252ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525300:{NFSU2_TR(0x525300);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B525301:{NFSU2_TR(0x525301);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525304:{NFSU2_TR(0x525304);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525305:L525305:{c.instructions+=3;NFSU2_TR(0x525305);
__builtin_memmove((R+0),gp(0x863450),4);
}
B52530a:{NFSU2_TR(0x52530a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52530c:{NFSU2_TR(0x52530c);
if(r1(R+518)){{goto L5253d9;}}
}
B525312:L525312:{c.instructions+=3;NFSU2_TR(0x525312);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B525315:{NFSU2_TR(0x525315);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B525318:{NFSU2_TR(0x525318);
if(r1(R+518)){{goto L525380;}}
}
B52531a:L52531a:{c.instructions+=2;NFSU2_TR(0x52531a);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B52531d:{NFSU2_TR(0x52531d);
if(r1(R+518)){{goto L525380;}}
}
B52531f:L52531f:{c.instructions+=2;NFSU2_TR(0x52531f);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B525322:{NFSU2_TR(0x525322);
if(r1(R+518)){{goto L52532d;}}
}
B525324:L525324:{c.instructions+=2;NFSU2_TR(0x525324);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B525327:{NFSU2_TR(0x525327);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5253d9;}}
}
B52532d:L52532d:{c.instructions+=3;NFSU2_TR(0x52532d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525330:{NFSU2_TR(0x525330);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ad14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525338:{NFSU2_TR(0x525338);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52533dull));
TAIL_STATIC(0x511260u,511);
}
B52533d:L52533d:{c.instructions+=5;NFSU2_TR(0x52533d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525341:{NFSU2_TR(0x525341);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B525346:{NFSU2_TR(0x525346);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525348:{NFSU2_TR(0x525348);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525350:{NFSU2_TR(0x525350);
if(r1(R+518)){{goto L5253d9;}}
}
B525356:L525356:{c.instructions+=3;NFSU2_TR(0x525356);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52535c:{NFSU2_TR(0x52535c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52535e:{NFSU2_TR(0x52535e);
if(r1(R+518)){{goto L5253d9;}}
}
B525360:L525360:{c.instructions+=3;NFSU2_TR(0x525360);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525363:{NFSU2_TR(0x525363);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525365:{NFSU2_TR(0x525365);
if(r1(R+518)){{goto L5253d9;}}
}
B525367:L525367:{c.instructions+=2;NFSU2_TR(0x525367);
__builtin_memmove((R+4),(R+24),4);
}
B525369:{NFSU2_TR(0x525369);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52536eull));
TAIL_STATIC(0x45b490u,45b);
}
B52536e:L52536e:{c.instructions+=4;NFSU2_TR(0x52536e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525372:{NFSU2_TR(0x525372);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525373:{NFSU2_TR(0x525373);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525377:{NFSU2_TR(0x525377);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525379ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B525379:L525379:{c.instructions+=5;NFSU2_TR(0x525379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52537a:{NFSU2_TR(0x52537a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52537b:{NFSU2_TR(0x52537b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B52537c:{NFSU2_TR(0x52537c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B52537f:{NFSU2_TR(0x52537f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525380:L525380:{c.instructions+=2;NFSU2_TR(0x525380);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525383:{NFSU2_TR(0x525383);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B525385:L525385:{c.instructions+=2;NFSU2_TR(0x525385);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa3f0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+4))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B52538c:{NFSU2_TR(0x52538c);
if(r1(R+518)){{goto L5253e0;}}
}
B52538e:L52538e:{c.instructions+=3;NFSU2_TR(0x52538e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B52538f:{NFSU2_TR(0x52538f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B525392:{NFSU2_TR(0x525392);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525385u);}goto L525385;}}
}
B525394:L525394:{c.instructions+=1;NFSU2_TR(0x525394);
w4(R+0,u32(0x10ull));
}
B525399:L525399:{c.instructions+=6;NFSU2_TR(0x525399);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52539d:{NFSU2_TR(0x52539d);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5253a2:{NFSU2_TR(0x5253a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5253a4:{NFSU2_TR(0x5253a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ad10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5253ac:{NFSU2_TR(0x5253ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5253b4:{NFSU2_TR(0x5253b4);
if(r1(R+518)){{goto L5253d9;}}
}
B5253b6:L5253b6:{c.instructions+=3;NFSU2_TR(0x5253b6);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5253bc:{NFSU2_TR(0x5253bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5253be:{NFSU2_TR(0x5253be);
if(r1(R+518)){{goto L5253d9;}}
}
B5253c0:L5253c0:{c.instructions+=3;NFSU2_TR(0x5253c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5253c3:{NFSU2_TR(0x5253c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5253c5:{NFSU2_TR(0x5253c5);
if(r1(R+518)){{goto L5253d9;}}
}
B5253c7:L5253c7:{c.instructions+=2;NFSU2_TR(0x5253c7);
__builtin_memmove((R+4),(R+24),4);
}
B5253c9:{NFSU2_TR(0x5253c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5253ceull));
TAIL_STATIC(0x45b490u,45b);
}
B5253ce:L5253ce:{c.instructions+=4;NFSU2_TR(0x5253ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5253d2:{NFSU2_TR(0x5253d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5253d3:{NFSU2_TR(0x5253d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5253d7:{NFSU2_TR(0x5253d7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5253d9ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5253d9:L5253d9:{c.instructions+=1;NFSU2_TR(0x5253d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5253da:L5253da:{c.instructions+=4;NFSU2_TR(0x5253da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5253db:{NFSU2_TR(0x5253db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5253dc:{NFSU2_TR(0x5253dc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5253df:{NFSU2_TR(0x5253df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5253e0:L5253e0:{c.instructions+=2;NFSU2_TR(0x5253e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x7fa3f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5253e7:{NFSU2_TR(0x5253e7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525399u);}goto L525399;}
}
B5253f0:L5253f0:{c.instructions+=10;NFSU2_TR(0x5253f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5253f1:{NFSU2_TR(0x5253f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5253f2:{NFSU2_TR(0x5253f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5253f3:{NFSU2_TR(0x5253f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5253f4:{NFSU2_TR(0x5253f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5253f8:{NFSU2_TR(0x5253f8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5253fb:{NFSU2_TR(0x5253fb);
w1(R+12,u8(0x1ull));
}
B5253fd:{NFSU2_TR(0x5253fd);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5253ff:{NFSU2_TR(0x5253ff);
__builtin_memmove((R+24),(R+4),4);
}
B525401:{NFSU2_TR(0x525401);
if(r1(R+518)){{goto L525495;}}
}
B525407:L525407:{c.instructions+=2;NFSU2_TR(0x525407);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525409:{NFSU2_TR(0x525409);
if(r1(R+518)){{goto L525495;}}
}
B52540f:L52540f:{c.instructions+=2;NFSU2_TR(0x52540f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525411:{NFSU2_TR(0x525411);
if(r1(R+518)){{goto L52541b;}}
}
B525413:L525413:{c.instructions+=2;NFSU2_TR(0x525413);
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
B525415:{NFSU2_TR(0x525415);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5254fa;}}
}
B52541b:L52541b:{c.instructions+=4;NFSU2_TR(0x52541b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B52541e:{NFSU2_TR(0x52541e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52541f:{NFSU2_TR(0x52541f);
__builtin_memmove((R+4),(R+24),4);
}
B525421:{NFSU2_TR(0x525421);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525426ull));
TAIL_STATIC(0x5112f0u,511);
}
B525426:L525426:{c.instructions+=2;NFSU2_TR(0x525426);
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
B525428:{NFSU2_TR(0x525428);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5254fa;}}
}
B52542e:L52542e:{c.instructions+=3;NFSU2_TR(0x52542e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B525431:{NFSU2_TR(0x525431);
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
B525433:{NFSU2_TR(0x525433);
if(r1(R+518)){{goto L5254fa;}}
}
B525439:L525439:{c.instructions+=9;NFSU2_TR(0x525439);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B525440:{NFSU2_TR(0x525440);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B525446:{NFSU2_TR(0x525446);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52544c:{NFSU2_TR(0x52544c);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B525450:{NFSU2_TR(0x525450);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B525456:{NFSU2_TR(0x525456);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
}
B525458:{NFSU2_TR(0x525458);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52545e:{NFSU2_TR(0x52545e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525464:{NFSU2_TR(0x525464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525469ull));
TAIL_STATIC(0x75bed4u,75b);
}
B525469:L525469:{c.instructions+=8;NFSU2_TR(0x525469);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B52546c:{NFSU2_TR(0x52546c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52546d:{NFSU2_TR(0x52546d);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52546f:{NFSU2_TR(0x52546f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B525473:{NFSU2_TR(0x525473);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525474:{NFSU2_TR(0x525474);
__builtin_memmove((R+4),(R+24),4);
}
B525476:{NFSU2_TR(0x525476);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52547a:{NFSU2_TR(0x52547a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52547full));
TAIL_STATIC(0x5111f0u,511);
}
B52547f:L52547f:{c.instructions+=3;NFSU2_TR(0x52547f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525482:{NFSU2_TR(0x525482);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B525485:{NFSU2_TR(0x525485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52548aull));
TAIL_STATIC(0x75bed4u,75b);
}
B52548a:L52548a:{c.instructions+=6;NFSU2_TR(0x52548a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52548b:{NFSU2_TR(0x52548b);
u8 U[13];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B52548f:{NFSU2_TR(0x52548f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525490:{NFSU2_TR(0x525490);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B525491:{NFSU2_TR(0x525491);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B525492:{NFSU2_TR(0x525492);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525495:L525495:{c.instructions+=5;NFSU2_TR(0x525495);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B52549c:{NFSU2_TR(0x52549c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B52549f:{NFSU2_TR(0x52549f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5254a1:{NFSU2_TR(0x5254a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5254a3:{NFSU2_TR(0x5254a3);
if(r1(R+518)){{goto L5254bb;}}
}
B5254a5:L5254a5:{c.instructions+=1;NFSU2_TR(0x5254a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5254a8:L5254a8:{c.instructions+=2;NFSU2_TR(0x5254a8);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+8)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B5254aa:{NFSU2_TR(0x5254aa);
if(r1(R+518)){{goto L5254fa;}}
}
B5254ac:L5254ac:{c.instructions+=5;NFSU2_TR(0x5254ac);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B5254b3:{NFSU2_TR(0x5254b3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5254b4:{NFSU2_TR(0x5254b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5254b7:{NFSU2_TR(0x5254b7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5254b9:{NFSU2_TR(0x5254b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5254a8u);}goto L5254a8;}}
}
B5254bb:L5254bb:{c.instructions+=8;NFSU2_TR(0x5254bb);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5254c1:{NFSU2_TR(0x5254c1);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5254c5:{NFSU2_TR(0x5254c5);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5254cb:{NFSU2_TR(0x5254cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5254d1:{NFSU2_TR(0x5254d1);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5254d3:{NFSU2_TR(0x5254d3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5254d9:{NFSU2_TR(0x5254d9);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5254df:{NFSU2_TR(0x5254df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5254e4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5254e4:L5254e4:{c.instructions+=8;NFSU2_TR(0x5254e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5254e8:{NFSU2_TR(0x5254e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5254eb:{NFSU2_TR(0x5254eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5254ec:{NFSU2_TR(0x5254ec);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5254ee:{NFSU2_TR(0x5254ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5254f2:{NFSU2_TR(0x5254f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5254f3:{NFSU2_TR(0x5254f3);
__builtin_memmove((R+4),(R+24),4);
}
B5254f5:{NFSU2_TR(0x5254f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5254faull));
TAIL_STATIC(0x5111f0u,511);
}
B5254fa:L5254fa:{c.instructions+=5;NFSU2_TR(0x5254fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5254fb:{NFSU2_TR(0x5254fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5254fc:{NFSU2_TR(0x5254fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5254fd:{NFSU2_TR(0x5254fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5254fe:{NFSU2_TR(0x5254fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525510:L525510:{c.instructions+=6;NFSU2_TR(0x525510);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B525513:{NFSU2_TR(0x525513);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525514:{NFSU2_TR(0x525514);
__builtin_memmove((R+24),(R+4),4);
}
B525516:{NFSU2_TR(0x525516);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B525519:{NFSU2_TR(0x525519);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52551b:{NFSU2_TR(0x52551b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5255ca;}}
}
B525521:L525521:{c.instructions+=7;NFSU2_TR(0x525521);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B525524:{NFSU2_TR(0x525524);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525526:{NFSU2_TR(0x525526);
w1(R+0,u8(0x1ull));
}
B525528:{NFSU2_TR(0x525528);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B52552b:{NFSU2_TR(0x52552b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525533:{NFSU2_TR(0x525533);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52553b:{NFSU2_TR(0x52553b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52559d;}}
}
B52553d:L52553d:{c.instructions+=5;NFSU2_TR(0x52553d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525540:{NFSU2_TR(0x525540);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B525545:{NFSU2_TR(0x525545);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525547:{NFSU2_TR(0x525547);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x8000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52554f:{NFSU2_TR(0x52554f);
if(r1(R+518)){{goto L52556d;}}
}
B525551:L525551:{c.instructions+=3;NFSU2_TR(0x525551);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B525557:{NFSU2_TR(0x525557);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525559:{NFSU2_TR(0x525559);
if(r1(R+518)){{goto L52556d;}}
}
B52555b:L52555b:{c.instructions+=3;NFSU2_TR(0x52555b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52555e:{NFSU2_TR(0x52555e);
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
B525560:{NFSU2_TR(0x525560);
if(r1(R+518)){{goto L52556d;}}
}
B525562:L525562:{c.instructions+=3;NFSU2_TR(0x525562);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525563:{NFSU2_TR(0x525563);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525567:{NFSU2_TR(0x525567);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52556dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B52556d:L52556d:{c.instructions+=4;NFSU2_TR(0x52556d);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B525573:{NFSU2_TR(0x525573);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B525579:{NFSU2_TR(0x525579);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B52557f:{NFSU2_TR(0x52557f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525584ull));
TAIL_STATIC(0x75bed4u,75b);
}
B525584:L525584:{c.instructions+=7;NFSU2_TR(0x525584);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525586:{NFSU2_TR(0x525586);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52558a:{NFSU2_TR(0x52558a);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52558c:{NFSU2_TR(0x52558c);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B525590:{NFSU2_TR(0x525590);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525591:{NFSU2_TR(0x525591);
__builtin_memmove((R+4),(R+24),4);
}
B525593:{NFSU2_TR(0x525593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525598ull));
TAIL_STATIC(0x5111f0u,511);
}
B525598:L525598:{c.instructions+=3;NFSU2_TR(0x525598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525599:{NFSU2_TR(0x525599);
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
B52559c:{NFSU2_TR(0x52559c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B52559d:L52559d:{c.instructions+=4;NFSU2_TR(0x52559d);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5255a2:{NFSU2_TR(0x5255a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5255a4:{NFSU2_TR(0x5255a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5255ac:{NFSU2_TR(0x5255ac);
if(r1(R+518)){{goto L5255ca;}}
}
B5255ae:L5255ae:{c.instructions+=3;NFSU2_TR(0x5255ae);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5255b4:{NFSU2_TR(0x5255b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5255b6:{NFSU2_TR(0x5255b6);
if(r1(R+518)){{goto L5255ca;}}
}
B5255b8:L5255b8:{c.instructions+=3;NFSU2_TR(0x5255b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5255bb:{NFSU2_TR(0x5255bb);
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
B5255bd:{NFSU2_TR(0x5255bd);
if(r1(R+518)){{goto L5255ca;}}
}
B5255bf:L5255bf:{c.instructions+=3;NFSU2_TR(0x5255bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5255c0:{NFSU2_TR(0x5255c0);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5255c4:{NFSU2_TR(0x5255c4);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5255caull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5255ca:L5255ca:{c.instructions+=3;NFSU2_TR(0x5255ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5255cb:{NFSU2_TR(0x5255cb);
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
B5255ce:{NFSU2_TR(0x5255ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5255d0:L5255d0:{c.instructions+=7;NFSU2_TR(0x5255d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5255d1:{NFSU2_TR(0x5255d1);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5255d7:{NFSU2_TR(0x5255d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5255d8:{NFSU2_TR(0x5255d8);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5255de:{NFSU2_TR(0x5255de);
__builtin_memmove((R+24),(R+4),4);
}
B5255e0:{NFSU2_TR(0x5255e0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5255e6:{NFSU2_TR(0x5255e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5255ebull));
TAIL_STATIC(0x75bed4u,75b);
}
B5255eb:L5255eb:{c.instructions+=7;NFSU2_TR(0x5255eb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5255ed:{NFSU2_TR(0x5255ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5255f1:{NFSU2_TR(0x5255f1);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5255f3:{NFSU2_TR(0x5255f3);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5255f7:{NFSU2_TR(0x5255f7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5255f8:{NFSU2_TR(0x5255f8);
__builtin_memmove((R+4),(R+24),4);
}
B5255fa:{NFSU2_TR(0x5255fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5255ffull));
TAIL_STATIC(0x5111f0u,511);
}
B5255ff:L5255ff:{c.instructions+=3;NFSU2_TR(0x5255ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525600:{NFSU2_TR(0x525600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B525601:{NFSU2_TR(0x525601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525610:L525610:{c.instructions+=7;NFSU2_TR(0x525610);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525611:{NFSU2_TR(0x525611);
{u32 ea_=u32(u32(7967668u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B525617:{NFSU2_TR(0x525617);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525618:{NFSU2_TR(0x525618);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B52561e:{NFSU2_TR(0x52561e);
__builtin_memmove((R+24),(R+4),4);
}
B525620:{NFSU2_TR(0x525620);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B525626:{NFSU2_TR(0x525626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52562bull));
TAIL_STATIC(0x75bed4u,75b);
}
B52562b:L52562b:{c.instructions+=7;NFSU2_TR(0x52562b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52562d:{NFSU2_TR(0x52562d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525631:{NFSU2_TR(0x525631);
u8 U[4];
w4(U+0,u32(0x9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525633:{NFSU2_TR(0x525633);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B525637:{NFSU2_TR(0x525637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525638:{NFSU2_TR(0x525638);
__builtin_memmove((R+4),(R+24),4);
}
B52563a:{NFSU2_TR(0x52563a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52563full));
TAIL_STATIC(0x5111f0u,511);
}
B52563f:L52563f:{c.instructions+=3;NFSU2_TR(0x52563f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525640:{NFSU2_TR(0x525640);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B525641:{NFSU2_TR(0x525641);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525650:L525650:{c.instructions+=8;NFSU2_TR(0x525650);
__builtin_memmove((R+0),gp(0x8900ac),4);
}
B525655:{NFSU2_TR(0x525655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B525658:{NFSU2_TR(0x525658);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525659:{NFSU2_TR(0x525659);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B52565f:{NFSU2_TR(0x52565f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525661:{NFSU2_TR(0x525661);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525662:{NFSU2_TR(0x525662);
__builtin_memmove((R+28),(R+4),4);
}
B525664:{NFSU2_TR(0x525664);
if(r1(R+518)){{goto L52583b;}}
}
B52566a:L52566a:{c.instructions+=3;NFSU2_TR(0x52566a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52566d:{NFSU2_TR(0x52566d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52566f:{NFSU2_TR(0x52566f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52567d;}}
}
B525671:L525671:{c.instructions+=3;NFSU2_TR(0x525671);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525677:{NFSU2_TR(0x525677);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52567a:{NFSU2_TR(0x52567a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52567d:L52567d:{c.instructions+=2;NFSU2_TR(0x52567d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B525680:{NFSU2_TR(0x525680);
if(r1(R+518)){{goto L52583b;}}
}
B525686:L525686:{c.instructions+=3;NFSU2_TR(0x525686);
__builtin_memmove((R+4),(R+28),4);
}
B525688:{NFSU2_TR(0x525688);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52568b:{NFSU2_TR(0x52568b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525690ull));
TAIL_STATIC(0x5112b0u,511);
}
B525690:L525690:{c.instructions+=2;NFSU2_TR(0x525690);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525692:{NFSU2_TR(0x525692);
if(r1(R+518)){{goto L52583b;}}
}
B525698:L525698:{c.instructions+=4;NFSU2_TR(0x525698);
{u32 ea_=u32(u32(7967672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B52569e:{NFSU2_TR(0x52569e);
{u32 ea_=u32(u32(7881316u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5256a4:{NFSU2_TR(0x5256a4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5256aa:{NFSU2_TR(0x5256aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5256afull));
TAIL_STATIC(0x75bed4u,75b);
}
B5256af:L5256af:{c.instructions+=4;NFSU2_TR(0x5256af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5256b5:{NFSU2_TR(0x5256b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B5256b8:{NFSU2_TR(0x5256b8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5256ba:{NFSU2_TR(0x5256ba);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L52583b;}}
}
B5256c0:L5256c0:{c.instructions+=2;NFSU2_TR(0x5256c0);
w4(R+4,u32(0x861e88ull));
}
B5256c5:{NFSU2_TR(0x5256c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5256caull));
TAIL_STATIC(0x500970u,500);
}
B5256ca:L5256ca:{c.instructions+=2;NFSU2_TR(0x5256ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5256cc:{NFSU2_TR(0x5256cc);
if(r1(R+518)){{goto L52583b;}}
}
B5256d2:L5256d2:{c.instructions+=3;NFSU2_TR(0x5256d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5256d5:{NFSU2_TR(0x5256d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5256d6:{NFSU2_TR(0x5256d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5256dbull));
TAIL_STATIC(0x4ffc50u,4ff);
}
B5256db:L5256db:{c.instructions+=3;NFSU2_TR(0x5256db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5256de:{NFSU2_TR(0x5256de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5256e0:{NFSU2_TR(0x5256e0);
if(r1(R+518)){{goto L52583b;}}
}
B5256e6:L5256e6:{c.instructions+=6;NFSU2_TR(0x5256e6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5256e8:{NFSU2_TR(0x5256e8);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5256ea:{NFSU2_TR(0x5256ea);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5256ed:{NFSU2_TR(0x5256ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5256ee:{NFSU2_TR(0x5256ee);
w4(R+4,u32(0x88f298ull));
}
B5256f3:{NFSU2_TR(0x5256f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5256f8ull));
TAIL_STATIC(0x5d9bf0u,5d9);
}
B5256f8:L5256f8:{c.instructions+=2;NFSU2_TR(0x5256f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5256fa:{NFSU2_TR(0x5256fa);
if(r1(R+518)){{goto L52583b;}}
}
B525700:L525700:{c.instructions+=3;NFSU2_TR(0x525700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525703:{NFSU2_TR(0x525703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525704:{NFSU2_TR(0x525704);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525709ull));
TAIL_STATIC(0x5d3de0u,5d3);
}
B525709:L525709:{c.instructions+=3;NFSU2_TR(0x525709);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B52570c:{NFSU2_TR(0x52570c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52570e:{NFSU2_TR(0x52570e);
if(r1(R+518)){{goto L52583b;}}
}
B525714:L525714:{c.instructions+=4;NFSU2_TR(0x525714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525716:{NFSU2_TR(0x525716);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525717:{NFSU2_TR(0x525717);
u8 U[4];
w4(U+0,u32(0x79b864ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B52571c:{NFSU2_TR(0x52571c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525721ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B525721:L525721:{c.instructions+=3;NFSU2_TR(0x525721);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B525724:{NFSU2_TR(0x525724);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B525726:{NFSU2_TR(0x525726);
if(r1(R+518)){{goto L52583b;}}
}
B52572c:L52572c:{c.instructions+=2;NFSU2_TR(0x52572c);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x5a5d44a3ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5a5d44a3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525731:{NFSU2_TR(0x525731);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L525799;}}
}
B525733:L525733:{c.instructions+=1;NFSU2_TR(0x525733);
if(r1(R+518)){{goto L525792;}}
}
B525735:L525735:{c.instructions+=2;NFSU2_TR(0x525735);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x31ab5422ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x31ab5422ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52573a:{NFSU2_TR(0x52573a);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L525772;}}
}
B52573c:L52573c:{c.instructions+=1;NFSU2_TR(0x52573c);
if(r1(R+518)){{goto L52576b;}}
}
B52573e:L52573e:{c.instructions+=2;NFSU2_TR(0x52573e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101a3187ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525743:{NFSU2_TR(0x525743);
if(r1(R+518)){{goto L525761;}}
}
B525745:L525745:{c.instructions+=2;NFSU2_TR(0x525745);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1024215dull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52574a:{NFSU2_TR(0x52574a);
if(r1(R+518)){{goto L525761;}}
}
B52574c:L52574c:{c.instructions+=2;NFSU2_TR(0x52574c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30372bbfull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525751:{NFSU2_TR(0x525751);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52583b;}}
}
B525757:L525757:{c.instructions+=2;NFSU2_TR(0x525757);
w4(R+0,u32(0x800000ull));
}
B52575c:{NFSU2_TR(0x52575c);
{goto L5257f1;}
}
B525761:L525761:{c.instructions+=2;NFSU2_TR(0x525761);
w4(R+0,u32(0x1ull));
}
B525766:{NFSU2_TR(0x525766);
{goto L5257f1;}
}
B52576b:L52576b:{c.instructions+=2;NFSU2_TR(0x52576b);
w4(R+0,u32(0x80ull));
}
B525770:{NFSU2_TR(0x525770);
{goto L5257f1;}
}
B525772:L525772:{c.instructions+=2;NFSU2_TR(0x525772);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d451881ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525777:{NFSU2_TR(0x525777);
if(r1(R+518)){{goto L52578b;}}
}
B525779:L525779:{c.instructions+=2;NFSU2_TR(0x525779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5755251full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52577e:{NFSU2_TR(0x52577e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52583b;}}
}
B525784:L525784:{c.instructions+=2;NFSU2_TR(0x525784);
w4(R+0,u32(0x200000ull));
}
B525789:{NFSU2_TR(0x525789);
{goto L5257f1;}
}
B52578b:L52578b:{c.instructions+=2;NFSU2_TR(0x52578b);
w4(R+0,u32(0x40000ull));
}
B525790:{NFSU2_TR(0x525790);
{goto L5257f1;}
}
B525792:L525792:{c.instructions+=2;NFSU2_TR(0x525792);
w4(R+0,u32(0x10ull));
}
B525797:{NFSU2_TR(0x525797);
{goto L5257f1;}
}
B525799:L525799:{c.instructions+=2;NFSU2_TR(0x525799);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xbb0877c8ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbb0877c8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52579e:{NFSU2_TR(0x52579e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5257d7;}}
}
B5257a0:L5257a0:{c.instructions+=1;NFSU2_TR(0x5257a0);
if(r1(R+518)){{goto L5257d0;}}
}
B5257a2:L5257a2:{c.instructions+=2;NFSU2_TR(0x5257a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xab3ababaull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5257a7:{NFSU2_TR(0x5257a7);
if(r1(R+518)){{goto L5257c9;}}
}
B5257a9:L5257a9:{c.instructions+=2;NFSU2_TR(0x5257a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xafa49decull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5257ae:{NFSU2_TR(0x5257ae);
if(r1(R+518)){{goto L5257c2;}}
}
B5257b0:L5257b0:{c.instructions+=2;NFSU2_TR(0x5257b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb8fce39aull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5257b5:{NFSU2_TR(0x5257b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52583b;}}
}
B5257bb:L5257bb:{c.instructions+=2;NFSU2_TR(0x5257bb);
w4(R+0,u32(0x1000000ull));
}
B5257c0:{NFSU2_TR(0x5257c0);
{goto L5257f1;}
}
B5257c2:L5257c2:{c.instructions+=2;NFSU2_TR(0x5257c2);
w4(R+0,u32(0x40ull));
}
B5257c7:{NFSU2_TR(0x5257c7);
{goto L5257f1;}
}
B5257c9:L5257c9:{c.instructions+=2;NFSU2_TR(0x5257c9);
w4(R+0,u32(0x100000ull));
}
B5257ce:{NFSU2_TR(0x5257ce);
{goto L5257f1;}
}
B5257d0:L5257d0:{c.instructions+=2;NFSU2_TR(0x5257d0);
w4(R+0,u32(0x8000000ull));
}
B5257d5:{NFSU2_TR(0x5257d5);
{goto L5257f1;}
}
B5257d7:L5257d7:{c.instructions+=2;NFSU2_TR(0x5257d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbb12679eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5257dc:{NFSU2_TR(0x5257dc);
if(r1(R+518)){{goto L5257ec;}}
}
B5257de:L5257de:{c.instructions+=2;NFSU2_TR(0x5257de);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xbc4c1f6eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5257e3:{NFSU2_TR(0x5257e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L52583b;}}
}
B5257e5:L5257e5:{c.instructions+=2;NFSU2_TR(0x5257e5);
w4(R+0,u32(0x8000ull));
}
B5257ea:{NFSU2_TR(0x5257ea);
{goto L5257f1;}
}
B5257ec:L5257ec:{c.instructions+=1;NFSU2_TR(0x5257ec);
w4(R+0,u32(0x10000000ull));
}
B5257f1:L5257f1:{c.instructions+=7;NFSU2_TR(0x5257f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5257f5:{NFSU2_TR(0x5257f5);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5257fa:{NFSU2_TR(0x5257fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5257fc:{NFSU2_TR(0x5257fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x79ad08ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525804:{NFSU2_TR(0x525804);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52580c:{NFSU2_TR(0x52580c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525814:{NFSU2_TR(0x525814);
if(r1(R+518)){{goto L525832;}}
}
B525816:L525816:{c.instructions+=3;NFSU2_TR(0x525816);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52581c:{NFSU2_TR(0x52581c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52581e:{NFSU2_TR(0x52581e);
if(r1(R+518)){{goto L525832;}}
}
B525820:L525820:{c.instructions+=3;NFSU2_TR(0x525820);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525823:{NFSU2_TR(0x525823);
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
B525825:{NFSU2_TR(0x525825);
if(r1(R+518)){{goto L525832;}}
}
B525827:L525827:{c.instructions+=3;NFSU2_TR(0x525827);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525828:{NFSU2_TR(0x525828);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52582c:{NFSU2_TR(0x52582c);
u8 U[4];
__builtin_memmove((U+0),gp(0x79ad08),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525832ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B525832:L525832:{c.instructions+=2;NFSU2_TR(0x525832);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525838:{NFSU2_TR(0x525838);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B52583b:L52583b:{c.instructions+=4;NFSU2_TR(0x52583b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B52583c:{NFSU2_TR(0x52583c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B52583d:{NFSU2_TR(0x52583d);
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
B525840:{NFSU2_TR(0x525840);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525850:L525850:{c.instructions+=6;NFSU2_TR(0x525850);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B525853:{NFSU2_TR(0x525853);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525854:{NFSU2_TR(0x525854);
__builtin_memmove((R+24),(R+4),4);
}
B525856:{NFSU2_TR(0x525856);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B52585c:{NFSU2_TR(0x52585c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B52585e:{NFSU2_TR(0x52585e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5258a4;}}
}
B525860:L525860:{c.instructions+=6;NFSU2_TR(0x525860);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B525865:{NFSU2_TR(0x525865);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525867:{NFSU2_TR(0x525867);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x79b860ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52586f:{NFSU2_TR(0x52586f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x10000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525877:{NFSU2_TR(0x525877);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52587f:{NFSU2_TR(0x52587f);
if(r1(R+518)){{goto L52589d;}}
}
B525881:L525881:{c.instructions+=3;NFSU2_TR(0x525881);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B525887:{NFSU2_TR(0x525887);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525889:{NFSU2_TR(0x525889);
if(r1(R+518)){{goto L52589d;}}
}
B52588b:L52588b:{c.instructions+=3;NFSU2_TR(0x52588b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B52588e:{NFSU2_TR(0x52588e);
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
B525890:{NFSU2_TR(0x525890);
if(r1(R+518)){{goto L52589d;}}
}
B525892:L525892:{c.instructions+=3;NFSU2_TR(0x525892);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525893:{NFSU2_TR(0x525893);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525897:{NFSU2_TR(0x525897);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x52589dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B52589d:L52589d:{c.instructions+=1;NFSU2_TR(0x52589d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa6ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5258a4:L5258a4:{c.instructions+=3;NFSU2_TR(0x5258a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5258a5:{NFSU2_TR(0x5258a5);
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
B5258a8:{NFSU2_TR(0x5258a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5258b0:L5258b0:{c.instructions+=7;NFSU2_TR(0x5258b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5258b3:{NFSU2_TR(0x5258b3);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5258b8:{NFSU2_TR(0x5258b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5258ba:{NFSU2_TR(0x5258ba);
u8 U[4];
w4(U+0,u32(0x79b860ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5258c2:{NFSU2_TR(0x5258c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x8000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5258ca:{NFSU2_TR(0x5258ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5258d2:{NFSU2_TR(0x5258d2);
if(r1(R+518)){{goto L5258f0;}}
}
B5258d4:L5258d4:{c.instructions+=3;NFSU2_TR(0x5258d4);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5258da:{NFSU2_TR(0x5258da);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5258dc:{NFSU2_TR(0x5258dc);
if(r1(R+518)){{goto L5258f0;}}
}
B5258de:L5258de:{c.instructions+=3;NFSU2_TR(0x5258de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5258e1:{NFSU2_TR(0x5258e1);
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
B5258e3:{NFSU2_TR(0x5258e3);
if(r1(R+518)){{goto L5258f0;}}
}
B5258e5:L5258e5:{c.instructions+=3;NFSU2_TR(0x5258e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5258e6:{NFSU2_TR(0x5258e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5258ea:{NFSU2_TR(0x5258ea);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5258f0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5258f0:L5258f0:{c.instructions+=2;NFSU2_TR(0x5258f0);
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
B5258f3:{NFSU2_TR(0x5258f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525900:L525900:{c.instructions+=7;NFSU2_TR(0x525900);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B525903:{NFSU2_TR(0x525903);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B525908:{NFSU2_TR(0x525908);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52590a:{NFSU2_TR(0x52590a);
u8 U[4];
w4(U+0,u32(0x79b860ull));
s4(u32(r4(R+16)),r4(U+0));
}
B525912:{NFSU2_TR(0x525912);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52591a:{NFSU2_TR(0x52591a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525922:{NFSU2_TR(0x525922);
if(r1(R+518)){{goto L525940;}}
}
B525924:L525924:{c.instructions+=3;NFSU2_TR(0x525924);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52592a:{NFSU2_TR(0x52592a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52592c:{NFSU2_TR(0x52592c);
if(r1(R+518)){{goto L525940;}}
}
B52592e:L52592e:{c.instructions+=3;NFSU2_TR(0x52592e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525931:{NFSU2_TR(0x525931);
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
B525933:{NFSU2_TR(0x525933);
if(r1(R+518)){{goto L525940;}}
}
B525935:L525935:{c.instructions+=3;NFSU2_TR(0x525935);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525936:{NFSU2_TR(0x525936);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52593a:{NFSU2_TR(0x52593a);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525940ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B525940:L525940:{c.instructions+=2;NFSU2_TR(0x525940);
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
B525943:{NFSU2_TR(0x525943);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525950:L525950:{c.instructions+=7;NFSU2_TR(0x525950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B525953:{NFSU2_TR(0x525953);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B525958:{NFSU2_TR(0x525958);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52595a:{NFSU2_TR(0x52595a);
u8 U[4];
w4(U+0,u32(0x79b860ull));
s4(u32(r4(R+16)),r4(U+0));
}
B525962:{NFSU2_TR(0x525962);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B52596a:{NFSU2_TR(0x52596a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525972:{NFSU2_TR(0x525972);
if(r1(R+518)){{goto L525990;}}
}
B525974:L525974:{c.instructions+=3;NFSU2_TR(0x525974);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B52597a:{NFSU2_TR(0x52597a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B52597c:{NFSU2_TR(0x52597c);
if(r1(R+518)){{goto L525990;}}
}
B52597e:L52597e:{c.instructions+=3;NFSU2_TR(0x52597e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525981:{NFSU2_TR(0x525981);
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
B525983:{NFSU2_TR(0x525983);
if(r1(R+518)){{goto L525990;}}
}
B525985:L525985:{c.instructions+=3;NFSU2_TR(0x525985);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525986:{NFSU2_TR(0x525986);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B52598a:{NFSU2_TR(0x52598a);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525990ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B525990:L525990:{c.instructions+=2;NFSU2_TR(0x525990);
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
B525993:{NFSU2_TR(0x525993);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5259a0:L5259a0:{c.instructions+=7;NFSU2_TR(0x5259a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5259a3:{NFSU2_TR(0x5259a3);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5259a8:{NFSU2_TR(0x5259a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5259aa:{NFSU2_TR(0x5259aa);
u8 U[4];
w4(U+0,u32(0x79b860ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5259b2:{NFSU2_TR(0x5259b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x10000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5259ba:{NFSU2_TR(0x5259ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5259c2:{NFSU2_TR(0x5259c2);
if(r1(R+518)){{goto L5259e0;}}
}
B5259c4:L5259c4:{c.instructions+=3;NFSU2_TR(0x5259c4);
__builtin_memmove((R+4),gp(0x7faaa8),4);
}
B5259ca:{NFSU2_TR(0x5259ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5259cc:{NFSU2_TR(0x5259cc);
if(r1(R+518)){{goto L5259e0;}}
}
B5259ce:L5259ce:{c.instructions+=3;NFSU2_TR(0x5259ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5259d1:{NFSU2_TR(0x5259d1);
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
B5259d3:{NFSU2_TR(0x5259d3);
if(r1(R+518)){{goto L5259e0;}}
}
B5259d5:L5259d5:{c.instructions+=3;NFSU2_TR(0x5259d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5259d6:{NFSU2_TR(0x5259d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5259da:{NFSU2_TR(0x5259da);
u8 U[4];
__builtin_memmove((U+0),gp(0x79b860),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5259e0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5259e0:L5259e0:{c.instructions+=2;NFSU2_TR(0x5259e0);
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
B5259e3:{NFSU2_TR(0x5259e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5259f0:L5259f0:{c.instructions+=4;NFSU2_TR(0x5259f0);
__builtin_memmove((R+0),gp(0x82ba30),4);
}
B5259f5:{NFSU2_TR(0x5259f5);
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
B5259f7:{NFSU2_TR(0x5259f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5259f8:{NFSU2_TR(0x5259f8);
if(r1(R+518)){{goto L525a1f;}}
}
B5259fa:L5259fa:{c.instructions+=3;NFSU2_TR(0x5259fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5259fd:{NFSU2_TR(0x5259fd);
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
B5259ff:{NFSU2_TR(0x5259ff);
if(r1(R+518)){{goto L525a1f;}}
}
B525a01:L525a01:{c.instructions+=3;NFSU2_TR(0x525a01);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525a03:{NFSU2_TR(0x525a03);
__builtin_memmove((R+4),(R+24),4);
}
B525a05:{NFSU2_TR(0x525a05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525a0aull));
TAIL_STATIC(0x46d100u,46d);
}
B525a0a:L525a0a:{c.instructions+=2;NFSU2_TR(0x525a0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525a0c:{NFSU2_TR(0x525a0c);
if(r1(R+518)){{goto L525a1b;}}
}
B525a0e:L525a0e:{c.instructions+=3;NFSU2_TR(0x525a0e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525a10:{NFSU2_TR(0x525a10);
__builtin_memmove((R+4),(R+24),4);
}
B525a12:{NFSU2_TR(0x525a12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525a17ull));
TAIL_STATIC(0x46d100u,46d);
}
B525a17:L525a17:{c.instructions+=2;NFSU2_TR(0x525a17);
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
B525a19:{NFSU2_TR(0x525a19);
if(r1(R+518)){{goto L525a1f;}}
}
B525a1b:L525a1b:{c.instructions+=3;NFSU2_TR(0x525a1b);
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
B525a1d:{NFSU2_TR(0x525a1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525a1e:{NFSU2_TR(0x525a1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525a1f:L525a1f:{c.instructions+=3;NFSU2_TR(0x525a1f);
w1(R+0,u8(0x1ull));
}
B525a21:{NFSU2_TR(0x525a21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525a22:{NFSU2_TR(0x525a22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525a30:L525a30:{c.instructions+=8;NFSU2_TR(0x525a30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525a31:{NFSU2_TR(0x525a31);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525a33:{NFSU2_TR(0x525a33);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B525a37:{NFSU2_TR(0x525a37);
__builtin_memmove((R+24),(R+4),4);
}
B525a39:{NFSU2_TR(0x525a39);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525a3d:{NFSU2_TR(0x525a3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525a3e:{NFSU2_TR(0x525a3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525a3f:{NFSU2_TR(0x525a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525a44ull));
TAIL_STATIC(0x57da10u,57d);
}
B525a44:L525a44:{c.instructions+=6;NFSU2_TR(0x525a44);
__builtin_memmove((R+4),(R+0),4);
}
B525a46:{NFSU2_TR(0x525a46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B525a49:{NFSU2_TR(0x525a49);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525a4b:{NFSU2_TR(0x525a4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B525a4d:{NFSU2_TR(0x525a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525a54:{NFSU2_TR(0x525a54);
if(r1(R+518)){{goto L525aa7;}}
}
B525a56:L525a56:{c.instructions+=8;NFSU2_TR(0x525a56);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525a5a:{NFSU2_TR(0x525a5a);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B525a5b:{NFSU2_TR(0x525a5b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B525a5d:{NFSU2_TR(0x525a5d);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B525a5f:{NFSU2_TR(0x525a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B525a62:{NFSU2_TR(0x525a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525a65:{NFSU2_TR(0x525a65);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0xfffeull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B525a69:{NFSU2_TR(0x525a69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525a72;}}
}
B525a6b:L525a6b:{c.instructions+=2;NFSU2_TR(0x525a6b);
__builtin_memmove((R+4),(R+24),4);
}
B525a6d:{NFSU2_TR(0x525a6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525a72ull));
TAIL_STATIC(0x5113c0u,511);
}
B525a72:L525a72:{c.instructions+=3;NFSU2_TR(0x525a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525a74:{NFSU2_TR(0x525a74);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B525a77:{NFSU2_TR(0x525a77);
if(r1(R+518)){{goto L525a9e;}}
}
B525a79:L525a79:{c.instructions+=1;NFSU2_TR(0x525a79);
__builtin_memmove((R+16),(R+16),4);
}
B525a80:L525a80:{c.instructions+=3;NFSU2_TR(0x525a80);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+4),(U+0),2);
}
B525a83:{NFSU2_TR(0x525a83);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B525a87:{NFSU2_TR(0x525a87);
if(r1(R+518)){{goto L525a8f;}}
}
B525a89:L525a89:{c.instructions+=2;NFSU2_TR(0x525a89);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xdull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B525a8d:{NFSU2_TR(0x525a8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525a94;}}
}
B525a8f:L525a8f:{c.instructions+=1;NFSU2_TR(0x525a8f);
u8 U[2];
w2(U+0,u16(0x0ull));
s2(u32(r4(R+0)),r2(U+0));
}
B525a94:L525a94:{c.instructions+=4;NFSU2_TR(0x525a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525a97:{NFSU2_TR(0x525a97);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B525a9a:{NFSU2_TR(0x525a9a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B525a9c:{NFSU2_TR(0x525a9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525a80u);}goto L525a80;}}
}
B525a9e:L525a9e:{c.instructions+=2;NFSU2_TR(0x525a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525aa1:{NFSU2_TR(0x525aa1);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
w2(U+4,u16(0x0ull));
s2(u32(r4(U+0)),r2(U+4));
}
B525aa7:L525aa7:{c.instructions+=4;NFSU2_TR(0x525aa7);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
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
B525aaa:{NFSU2_TR(0x525aaa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B525aad:{NFSU2_TR(0x525aad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525aae:{NFSU2_TR(0x525aae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525ac0:L525ac0:{c.instructions+=6;NFSU2_TR(0x525ac0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ac1:{NFSU2_TR(0x525ac1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ac2:{NFSU2_TR(0x525ac2);
__builtin_memmove((R+28),(R+4),4);
}
B525ac4:{NFSU2_TR(0x525ac4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B525ac6:{NFSU2_TR(0x525ac6);
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
B525ac8:{NFSU2_TR(0x525ac8);
if(r1(R+518)){{goto L525b28;}}
}
B525aca:L525aca:{c.instructions+=1;NFSU2_TR(0x525aca);
__builtin_memmove((R+12),(R+12),4);
}
B525ad0:L525ad0:{c.instructions+=7;NFSU2_TR(0x525ad0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525ad3:{NFSU2_TR(0x525ad3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525ad5:{NFSU2_TR(0x525ad5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B525ad7:{NFSU2_TR(0x525ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525ada:{NFSU2_TR(0x525ada);
__builtin_memmove((R+4),gp(0x838480),4);
}
B525ae0:{NFSU2_TR(0x525ae0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ae1:{NFSU2_TR(0x525ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525ae6ull));
TAIL_STATIC(0x43cd80u,43c);
}
B525ae6:L525ae6:{c.instructions+=3;NFSU2_TR(0x525ae6);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B525ae8:{NFSU2_TR(0x525ae8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ae9:{NFSU2_TR(0x525ae9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L525af8;}}
}
B525aeb:L525aeb:{c.instructions+=2;NFSU2_TR(0x525aeb);
__builtin_memmove((R+4),gp(0x838480),4);
}
B525af1:{NFSU2_TR(0x525af1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525af6ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B525af6:L525af6:{c.instructions+=1;NFSU2_TR(0x525af6);
{goto L525b22;}
}
B525af8:L525af8:{c.instructions+=2;NFSU2_TR(0x525af8);
__builtin_memmove((R+4),gp(0x838484),4);
}
B525afe:{NFSU2_TR(0x525afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525b03ull));
TAIL_STATIC(0x43cdf0u,43c);
}
B525b03:L525b03:{c.instructions+=4;NFSU2_TR(0x525b03);
__builtin_memmove((R+0),gp(0x838484),4);
}
B525b08:{NFSU2_TR(0x525b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525b0b:{NFSU2_TR(0x525b0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525b0d:{NFSU2_TR(0x525b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525b22;}}
}
B525b0f:L525b0f:{c.instructions+=2;NFSU2_TR(0x525b0f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b10:{NFSU2_TR(0x525b10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525b15ull));
TAIL_STATIC(0x440e40u,440);
}
B525b15:L525b15:{c.instructions+=2;NFSU2_TR(0x525b15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B525b18:{NFSU2_TR(0x525b18);
s4(0x838484,u32(0x0ull));
}
B525b22:L525b22:{c.instructions+=3;NFSU2_TR(0x525b22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B525b24:{NFSU2_TR(0x525b24);
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
B525b26:{NFSU2_TR(0x525b26);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525ad0u);}goto L525ad0;}}
}
B525b28:L525b28:{c.instructions+=3;NFSU2_TR(0x525b28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525b29:{NFSU2_TR(0x525b29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525b2a:{NFSU2_TR(0x525b2a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525b30:L525b30:{c.instructions+=6;NFSU2_TR(0x525b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b31:{NFSU2_TR(0x525b31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b32:{NFSU2_TR(0x525b32);
__builtin_memmove((R+28),(R+4),4);
}
B525b34:{NFSU2_TR(0x525b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525b37:{NFSU2_TR(0x525b37);
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
B525b39:{NFSU2_TR(0x525b39);
if(r1(R+518)){{goto L525b81;}}
}
B525b3b:L525b3b:{c.instructions+=2;NFSU2_TR(0x525b3b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525b3f:{NFSU2_TR(0x525b3f);
}
B525b40:L525b40:{c.instructions+=3;NFSU2_TR(0x525b40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B525b43:{NFSU2_TR(0x525b43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B525b45:{NFSU2_TR(0x525b45);
if(r1(R+512)){{goto L525b51;}}
}
B525b47:L525b47:{c.instructions+=3;NFSU2_TR(0x525b47);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60cull))));
__builtin_memmove((R+8),(U+0),4);
}
B525b4d:{NFSU2_TR(0x525b4d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B525b4f:{NFSU2_TR(0x525b4f);
if(r1(R+512)){{goto L525b5d;}}
}
B525b51:L525b51:{c.instructions+=3;NFSU2_TR(0x525b51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525b54:{NFSU2_TR(0x525b54);
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
B525b56:{NFSU2_TR(0x525b56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525b40u);}goto L525b40;}}
}
B525b58:L525b58:{c.instructions+=3;NFSU2_TR(0x525b58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525b59:{NFSU2_TR(0x525b59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525b5a:{NFSU2_TR(0x525b5a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525b5d:L525b5d:{c.instructions+=3;NFSU2_TR(0x525b5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b5e:{NFSU2_TR(0x525b5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60cull))));
__builtin_memmove((R+4),(U+0),4);
}
B525b64:{NFSU2_TR(0x525b64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525b69ull));
TAIL_STATIC(0x4951b0u,495);
}
B525b69:L525b69:{c.instructions+=2;NFSU2_TR(0x525b69);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61cull))));
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
B525b6f:{NFSU2_TR(0x525b6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525b81;}}
}
B525b71:L525b71:{c.instructions+=3;NFSU2_TR(0x525b71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b72:{NFSU2_TR(0x525b72);
__builtin_memmove((R+4),(R+28),4);
}
B525b74:{NFSU2_TR(0x525b74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525b79ull));
TAIL_STATIC(0x505400u,505);
}
B525b79:L525b79:{c.instructions+=4;NFSU2_TR(0x525b79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525b7b:{NFSU2_TR(0x525b7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b7d:{NFSU2_TR(0x525b7d);
__builtin_memmove((R+4),(R+24),4);
}
B525b7f:{NFSU2_TR(0x525b7f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525b81ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B525b81:L525b81:{c.instructions+=3;NFSU2_TR(0x525b81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525b82:{NFSU2_TR(0x525b82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525b83:{NFSU2_TR(0x525b83);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525b90:L525b90:{c.instructions+=6;NFSU2_TR(0x525b90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b91:{NFSU2_TR(0x525b91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525b92:{NFSU2_TR(0x525b92);
__builtin_memmove((R+28),(R+4),4);
}
B525b94:{NFSU2_TR(0x525b94);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525b97:{NFSU2_TR(0x525b97);
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
B525b99:{NFSU2_TR(0x525b99);
if(r1(R+518)){{goto L525be1;}}
}
B525b9b:L525b9b:{c.instructions+=2;NFSU2_TR(0x525b9b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525b9f:{NFSU2_TR(0x525b9f);
}
B525ba0:L525ba0:{c.instructions+=3;NFSU2_TR(0x525ba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B525ba3:{NFSU2_TR(0x525ba3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B525ba5:{NFSU2_TR(0x525ba5);
if(r1(R+512)){{goto L525bb1;}}
}
B525ba7:L525ba7:{c.instructions+=3;NFSU2_TR(0x525ba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((R+8),(U+0),4);
}
B525bad:{NFSU2_TR(0x525bad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B525baf:{NFSU2_TR(0x525baf);
if(r1(R+512)){{goto L525bbd;}}
}
B525bb1:L525bb1:{c.instructions+=3;NFSU2_TR(0x525bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525bb4:{NFSU2_TR(0x525bb4);
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
B525bb6:{NFSU2_TR(0x525bb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525ba0u);}goto L525ba0;}}
}
B525bb8:L525bb8:{c.instructions+=3;NFSU2_TR(0x525bb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525bb9:{NFSU2_TR(0x525bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525bba:{NFSU2_TR(0x525bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525bbd:L525bbd:{c.instructions+=3;NFSU2_TR(0x525bbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525bbe:{NFSU2_TR(0x525bbe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68cull))));
__builtin_memmove((R+4),(U+0),4);
}
B525bc4:{NFSU2_TR(0x525bc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525bc9ull));
TAIL_STATIC(0x4951b0u,495);
}
B525bc9:L525bc9:{c.instructions+=2;NFSU2_TR(0x525bc9);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
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
B525bcf:{NFSU2_TR(0x525bcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525be1;}}
}
B525bd1:L525bd1:{c.instructions+=3;NFSU2_TR(0x525bd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525bd2:{NFSU2_TR(0x525bd2);
__builtin_memmove((R+4),(R+28),4);
}
B525bd4:{NFSU2_TR(0x525bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525bd9ull));
TAIL_STATIC(0x505400u,505);
}
B525bd9:L525bd9:{c.instructions+=4;NFSU2_TR(0x525bd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525bdb:{NFSU2_TR(0x525bdb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525bdd:{NFSU2_TR(0x525bdd);
__builtin_memmove((R+4),(R+24),4);
}
B525bdf:{NFSU2_TR(0x525bdf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525be1ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B525be1:L525be1:{c.instructions+=3;NFSU2_TR(0x525be1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525be2:{NFSU2_TR(0x525be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525be3:{NFSU2_TR(0x525be3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525bf0:L525bf0:{c.instructions+=6;NFSU2_TR(0x525bf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525bf1:{NFSU2_TR(0x525bf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525bf2:{NFSU2_TR(0x525bf2);
__builtin_memmove((R+28),(R+4),4);
}
B525bf4:{NFSU2_TR(0x525bf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525bf7:{NFSU2_TR(0x525bf7);
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
B525bf9:{NFSU2_TR(0x525bf9);
if(r1(R+518)){{goto L525c41;}}
}
B525bfb:L525bfb:{c.instructions+=2;NFSU2_TR(0x525bfb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525bff:{NFSU2_TR(0x525bff);
}
B525c00:L525c00:{c.instructions+=3;NFSU2_TR(0x525c00);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B525c03:{NFSU2_TR(0x525c03);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B525c05:{NFSU2_TR(0x525c05);
if(r1(R+512)){{goto L525c11;}}
}
B525c07:L525c07:{c.instructions+=3;NFSU2_TR(0x525c07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200cull))));
__builtin_memmove((R+8),(U+0),4);
}
B525c0d:{NFSU2_TR(0x525c0d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B525c0f:{NFSU2_TR(0x525c0f);
if(r1(R+512)){{goto L525c1d;}}
}
B525c11:L525c11:{c.instructions+=3;NFSU2_TR(0x525c11);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525c14:{NFSU2_TR(0x525c14);
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
B525c16:{NFSU2_TR(0x525c16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525c00u);}goto L525c00;}}
}
B525c18:L525c18:{c.instructions+=3;NFSU2_TR(0x525c18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525c19:{NFSU2_TR(0x525c19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525c1a:{NFSU2_TR(0x525c1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525c1d:L525c1d:{c.instructions+=3;NFSU2_TR(0x525c1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c1e:{NFSU2_TR(0x525c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200cull))));
__builtin_memmove((R+4),(U+0),4);
}
B525c24:{NFSU2_TR(0x525c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525c29ull));
TAIL_STATIC(0x4951b0u,495);
}
B525c29:L525c29:{c.instructions+=2;NFSU2_TR(0x525c29);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x201cull))));
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
B525c2f:{NFSU2_TR(0x525c2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525c41;}}
}
B525c31:L525c31:{c.instructions+=3;NFSU2_TR(0x525c31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c32:{NFSU2_TR(0x525c32);
__builtin_memmove((R+4),(R+28),4);
}
B525c34:{NFSU2_TR(0x525c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525c39ull));
TAIL_STATIC(0x505400u,505);
}
B525c39:L525c39:{c.instructions+=4;NFSU2_TR(0x525c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525c3b:{NFSU2_TR(0x525c3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c3d:{NFSU2_TR(0x525c3d);
__builtin_memmove((R+4),(R+24),4);
}
B525c3f:{NFSU2_TR(0x525c3f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525c41ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B525c41:L525c41:{c.instructions+=3;NFSU2_TR(0x525c41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525c42:{NFSU2_TR(0x525c42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525c43:{NFSU2_TR(0x525c43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525c50:L525c50:{c.instructions+=4;NFSU2_TR(0x525c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c51:{NFSU2_TR(0x525c51);
__builtin_memmove((R+24),(R+4),4);
}
B525c53:{NFSU2_TR(0x525c53);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+24)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B525c55:{NFSU2_TR(0x525c55);
if(r1(R+518)){{goto L525c74;}}
}
B525c57:L525c57:{c.instructions+=5;NFSU2_TR(0x525c57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525c59:{NFSU2_TR(0x525c59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B525c5b:{NFSU2_TR(0x525c5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B525c5d:{NFSU2_TR(0x525c5d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B525c60:{NFSU2_TR(0x525c60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525c65;}}
}
B525c62:L525c62:{c.instructions+=1;NFSU2_TR(0x525c62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525c65:L525c65:{c.instructions+=2;NFSU2_TR(0x525c65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c66:{NFSU2_TR(0x525c66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525c6bull));
TAIL_STATIC(0x575630u,575);
}
B525c6b:L525c6b:{c.instructions+=4;NFSU2_TR(0x525c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525c6d:{NFSU2_TR(0x525c6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B525c70:{NFSU2_TR(0x525c70);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B525c72:{NFSU2_TR(0x525c72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525c57u);}goto L525c57;}}
}
B525c74:L525c74:{c.instructions+=2;NFSU2_TR(0x525c74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525c75:{NFSU2_TR(0x525c75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525c80:L525c80:{c.instructions+=3;NFSU2_TR(0x525c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c81:{NFSU2_TR(0x525c81);
__builtin_memmove((R+24),(R+4),4);
}
B525c83:{NFSU2_TR(0x525c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525c88ull));
TAIL_STATIC(0x52c420u,52c);
}
B525c88:L525c88:{c.instructions+=2;NFSU2_TR(0x525c88);
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
B525c8d:{NFSU2_TR(0x525c8d);
if(r1(R+518)){{goto L525c98;}}
}
B525c8f:L525c8f:{c.instructions+=2;NFSU2_TR(0x525c8f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525c90:{NFSU2_TR(0x525c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525c95ull));
TAIL_STATIC(0x575630u,575);
}
B525c95:L525c95:{c.instructions+=1;NFSU2_TR(0x525c95);
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
B525c98:L525c98:{c.instructions+=3;NFSU2_TR(0x525c98);
__builtin_memmove((R+0),(R+24),4);
}
B525c9a:{NFSU2_TR(0x525c9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525c9b:{NFSU2_TR(0x525c9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525ca0:L525ca0:{c.instructions+=5;NFSU2_TR(0x525ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ca1:{NFSU2_TR(0x525ca1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B525ca4:{NFSU2_TR(0x525ca4);
w4(R+24,u32(0x8ull));
}
B525ca9:{NFSU2_TR(0x525ca9);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B525cab:{NFSU2_TR(0x525cab);
{goto L525cb0;}
}
B525cb0:L525cb0:{c.instructions+=8;NFSU2_TR(0x525cb0);
u8 U[2];
__builtin_memmove((U+0),(R+8),2);
s2(u32(r4(R+0)),r2(U+0));
}
B525cb3:{NFSU2_TR(0x525cb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525cb6:{NFSU2_TR(0x525cb6);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B525cbc:{NFSU2_TR(0x525cbc);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525cbf:{NFSU2_TR(0x525cbf);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525cc2:{NFSU2_TR(0x525cc2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B525cc5:{NFSU2_TR(0x525cc5);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B525cc6:{NFSU2_TR(0x525cc6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525cb0u);}goto L525cb0;}}
}
B525cc8:L525cc8:{c.instructions+=1;NFSU2_TR(0x525cc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525ccdull));
TAIL_STATIC(0x515750u,515);
}
B525ccd:L525ccd:{c.instructions+=3;NFSU2_TR(0x525ccd);
__builtin_memmove((R+0),(R+4),4);
}
B525ccf:{NFSU2_TR(0x525ccf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525cd0:{NFSU2_TR(0x525cd0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525ce0:L525ce0:{c.instructions+=2;NFSU2_TR(0x525ce0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3b0ull))));
}
B525ce6:{NFSU2_TR(0x525ce6);
TAIL_STATIC(0x511820u,511);
}
B525cf0:L525cf0:{c.instructions+=3;NFSU2_TR(0x525cf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525cf1:{NFSU2_TR(0x525cf1);
__builtin_memmove((R+24),(R+4),4);
}
B525cf3:{NFSU2_TR(0x525cf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525cf8ull));
TAIL_STATIC(0x516b30u,516);
}
B525cf8:L525cf8:{c.instructions+=4;NFSU2_TR(0x525cf8);
u8 U[4];
w4(U+0,u32(0x79b12cull));
s4(u32(r4(R+24)),r4(U+0));
}
B525cfe:{NFSU2_TR(0x525cfe);
__builtin_memmove((R+0),(R+24),4);
}
B525d00:{NFSU2_TR(0x525d00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525d01:{NFSU2_TR(0x525d01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525d10:L525d10:{c.instructions+=10;NFSU2_TR(0x525d10);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525d11:{NFSU2_TR(0x525d11);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525d12:{NFSU2_TR(0x525d12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B525d16:{NFSU2_TR(0x525d16);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525d17:{NFSU2_TR(0x525d17);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525d18:{NFSU2_TR(0x525d18);
__builtin_memmove((R+28),(R+4),4);
}
B525d1a:{NFSU2_TR(0x525d1a);
__builtin_memmove((R+12),(R+20),4);
}
B525d1c:{NFSU2_TR(0x525d1c);
__builtin_memmove((R+24),(R+28),4);
}
B525d1e:{NFSU2_TR(0x525d1e);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+28))));
}
B525d20:{NFSU2_TR(0x525d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525d28:L525d28:{c.instructions+=4;NFSU2_TR(0x525d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B525d2b:{NFSU2_TR(0x525d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525d2c:{NFSU2_TR(0x525d2c);
__builtin_memmove((R+4),(R+24),4);
}
B525d2e:{NFSU2_TR(0x525d2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525d33ull));
TAIL_STATIC(0x511900u,511);
}
B525d33:L525d33:{c.instructions+=5;NFSU2_TR(0x525d33);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525d37:{NFSU2_TR(0x525d37);
w1(R+512,carry<u32>(r4(R+24),u32(0x224ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x224ull))));
}
B525d3d:{NFSU2_TR(0x525d3d);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525d3e:{NFSU2_TR(0x525d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d42:{NFSU2_TR(0x525d42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525d28u);}goto L525d28;}}
}
B525d44:L525d44:{c.instructions+=20;NFSU2_TR(0x525d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525d4a:{NFSU2_TR(0x525d4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d50:{NFSU2_TR(0x525d50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525d56:{NFSU2_TR(0x525d56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d5c:{NFSU2_TR(0x525d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xce0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525d62:{NFSU2_TR(0x525d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xce0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d68:{NFSU2_TR(0x525d68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xce4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525d6e:{NFSU2_TR(0x525d6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xce4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d74:{NFSU2_TR(0x525d74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xce8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525d7a:{NFSU2_TR(0x525d7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xce8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d80:{NFSU2_TR(0x525d80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525d86:{NFSU2_TR(0x525d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d8c:{NFSU2_TR(0x525d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525d92:{NFSU2_TR(0x525d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcf0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525d98:{NFSU2_TR(0x525d98);
__builtin_memmove((R+0),(R+28),4);
}
B525d9a:{NFSU2_TR(0x525d9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B525d9b:{NFSU2_TR(0x525d9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525d9c:{NFSU2_TR(0x525d9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B525d9d:{NFSU2_TR(0x525d9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B525d9e:{NFSU2_TR(0x525d9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525db0:L525db0:{c.instructions+=9;NFSU2_TR(0x525db0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525db1:{NFSU2_TR(0x525db1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525db2:{NFSU2_TR(0x525db2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B525db6:{NFSU2_TR(0x525db6);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B525dba:{NFSU2_TR(0x525dba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525dbb:{NFSU2_TR(0x525dbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525dbf:{NFSU2_TR(0x525dbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525dc0:{NFSU2_TR(0x525dc0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525dc1:{NFSU2_TR(0x525dc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525dc6ull));
TAIL_STATIC(0x51d730u,51d);
}
B525dc6:L525dc6:{c.instructions+=3;NFSU2_TR(0x525dc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B525dc9:{NFSU2_TR(0x525dc9);
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
B525dcb:{NFSU2_TR(0x525dcb);
if(r1(R+518)){{goto L525e03;}}
}
B525dcd:L525dcd:{c.instructions+=4;NFSU2_TR(0x525dcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525dd0:{NFSU2_TR(0x525dd0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B525dd1:{NFSU2_TR(0x525dd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525dd4:{NFSU2_TR(0x525dd4);
if(r1(R+518)){{goto L525de0;}}
}
B525dd6:L525dd6:{c.instructions+=2;NFSU2_TR(0x525dd6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B525dd9:{NFSU2_TR(0x525dd9);
if(r1(R+518)){{goto L525de0;}}
}
B525ddb:L525ddb:{c.instructions+=2;NFSU2_TR(0x525ddb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B525dde:{NFSU2_TR(0x525dde);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525dee;}}
}
B525de0:L525de0:{c.instructions+=4;NFSU2_TR(0x525de0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525de4:{NFSU2_TR(0x525de4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525de8:{NFSU2_TR(0x525de8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525deb:{NFSU2_TR(0x525deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525dee:L525dee:{c.instructions+=5;NFSU2_TR(0x525dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525df2:{NFSU2_TR(0x525df2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525df6:{NFSU2_TR(0x525df6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525df9:{NFSU2_TR(0x525df9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525dfc:{NFSU2_TR(0x525dfc);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B525e03:L525e03:{c.instructions+=3;NFSU2_TR(0x525e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525e04:{NFSU2_TR(0x525e04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B525e05:{NFSU2_TR(0x525e05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525e10:L525e10:{c.instructions+=4;NFSU2_TR(0x525e10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525e11:{NFSU2_TR(0x525e11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525e13:{NFSU2_TR(0x525e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525e14:{NFSU2_TR(0x525e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525e19ull));
TAIL_STATIC(0x51c5d0u,51c);
}
B525e19:L525e19:{c.instructions+=8;NFSU2_TR(0x525e19);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B525e1c:{NFSU2_TR(0x525e1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525e20:{NFSU2_TR(0x525e20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B525e23:{NFSU2_TR(0x525e23);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B525e27:{NFSU2_TR(0x525e27);
{u32 ea_=u32(u32(8628776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B525e2d:{NFSU2_TR(0x525e2d);
{u32 ea_=u32(u32(8628780u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B525e33:{NFSU2_TR(0x525e33);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B525e35:{NFSU2_TR(0x525e35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525e3aull));
TAIL_STATIC(0x75bed4u,75b);
}
B525e3a:L525e3a:{c.instructions+=2;NFSU2_TR(0x525e3a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7full))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7full)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7full))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525e3d:{NFSU2_TR(0x525e3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L525e46;}}
}
B525e3f:L525e3f:{c.instructions+=3;NFSU2_TR(0x525e3f);
w4(R+0,u32(0x7full));
}
B525e44:{NFSU2_TR(0x525e44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B525e45:{NFSU2_TR(0x525e45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525e46:L525e46:{c.instructions+=2;NFSU2_TR(0x525e46);
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
B525e48:{NFSU2_TR(0x525e48);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L525e4c;}}
}
B525e4a:L525e4a:{c.instructions+=1;NFSU2_TR(0x525e4a);
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
B525e4c:L525e4c:{c.instructions+=2;NFSU2_TR(0x525e4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B525e4d:{NFSU2_TR(0x525e4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525e50:L525e50:{c.instructions+=6;NFSU2_TR(0x525e50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525e51:{NFSU2_TR(0x525e51);
__builtin_memmove((R+24),(R+4),4);
}
B525e53:{NFSU2_TR(0x525e53);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B525e56:{NFSU2_TR(0x525e56);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525e58:{NFSU2_TR(0x525e58);
u8 U[4];
w4(U+0,u32(0x79aa30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B525e5e:{NFSU2_TR(0x525e5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525e65;}}
}
B525e60:L525e60:{c.instructions+=1;NFSU2_TR(0x525e60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525e65ull));
TAIL_STATIC(0x511d00u,511);
}
B525e65:L525e65:{c.instructions+=2;NFSU2_TR(0x525e65);
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
B525e6a:{NFSU2_TR(0x525e6a);
if(r1(R+518)){{goto L525e75;}}
}
B525e6c:L525e6c:{c.instructions+=2;NFSU2_TR(0x525e6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525e6d:{NFSU2_TR(0x525e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525e72ull));
TAIL_STATIC(0x575630u,575);
}
B525e72:L525e72:{c.instructions+=1;NFSU2_TR(0x525e72);
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
B525e75:L525e75:{c.instructions+=3;NFSU2_TR(0x525e75);
__builtin_memmove((R+0),(R+24),4);
}
B525e77:{NFSU2_TR(0x525e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B525e78:{NFSU2_TR(0x525e78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525e80:L525e80:{c.instructions+=19;NFSU2_TR(0x525e80);
__builtin_memmove((R+0),(R+4),4);
}
B525e82:{NFSU2_TR(0x525e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525e85:{NFSU2_TR(0x525e85);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B525e87:{NFSU2_TR(0x525e87);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B525e89:{NFSU2_TR(0x525e89);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525e8c:{NFSU2_TR(0x525e8c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525e8f:{NFSU2_TR(0x525e8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525e92:{NFSU2_TR(0x525e92);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xff000000ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B525e98:{NFSU2_TR(0x525e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525e9b:{NFSU2_TR(0x525e9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525e9e:{NFSU2_TR(0x525e9e);
w4(R+8,u32(0xabadcafeull));
}
B525ea3:{NFSU2_TR(0x525ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525ea6:{NFSU2_TR(0x525ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525ea9:{NFSU2_TR(0x525ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x79aa34ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525eb0:{NFSU2_TR(0x525eb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
w4(U+4,u32(0x79aa30ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525eb7:{NFSU2_TR(0x525eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525eba:{NFSU2_TR(0x525eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525ebd:{NFSU2_TR(0x525ebd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B525ec0:{NFSU2_TR(0x525ec0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B525ed0:L525ed0:{c.instructions+=11;NFSU2_TR(0x525ed0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ed1:{NFSU2_TR(0x525ed1);
__builtin_memmove((R+20),(R+16),4);
}
B525ed3:{NFSU2_TR(0x525ed3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B525ed6:{NFSU2_TR(0x525ed6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ed8:{NFSU2_TR(0x525ed8);
u8 U[4];
w4(U+0,u32(0x777351ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525edd:{NFSU2_TR(0x525edd);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525ee3:{NFSU2_TR(0x525ee3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ee4:{NFSU2_TR(0x525ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525eeb:{NFSU2_TR(0x525eeb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525eec:{NFSU2_TR(0x525eec);
w4(R+0,u32(0x1244ull));
}
B525ef1:{NFSU2_TR(0x525ef1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525ef6ull));
TAIL_STATIC(0x75c4d0u,75c);
}
B525ef6:L525ef6:{c.instructions+=7;NFSU2_TR(0x525ef6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B525ef9:{NFSU2_TR(0x525ef9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525efa:{NFSU2_TR(0x525efa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525efb:{NFSU2_TR(0x525efb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B525efd:{NFSU2_TR(0x525efd);
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
B525eff:{NFSU2_TR(0x525eff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525f00:{NFSU2_TR(0x525f00);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x526098u,526);}
}
B525f06:L525f06:{c.instructions+=6;NFSU2_TR(0x525f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x83a9e0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525f0e:{NFSU2_TR(0x525f0e);
w4(R+12,u32(0x83aa74ull));
}
B525f13:{NFSU2_TR(0x525f13);
__builtin_memmove((R+0),gp(0x89e7e4),1);
}
B525f18:{NFSU2_TR(0x525f18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B525f1a:{NFSU2_TR(0x525f1a);
__builtin_memmove((R+0),gp(0x850088),4);
}
B525f1f:{NFSU2_TR(0x525f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525f26;}}
}
B525f21:L525f21:{c.instructions+=1;NFSU2_TR(0x525f21);
__builtin_memmove((R+0),gp(0x83aab4),4);
}
B525f26:L525f26:{c.instructions+=2;NFSU2_TR(0x525f26);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B525f29:{NFSU2_TR(0x525f29);
if(r1(R+518)){{goto L525f3d;}}
}
B525f2b:L525f2b:{c.instructions+=2;NFSU2_TR(0x525f2b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B525f2e:{NFSU2_TR(0x525f2e);
if(r1(R+518)){{goto L525f3d;}}
}
B525f30:L525f30:{c.instructions+=2;NFSU2_TR(0x525f30);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B525f33:{NFSU2_TR(0x525f33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L525f43;}}
}
B525f35:L525f35:{c.instructions+=2;NFSU2_TR(0x525f35);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+12)),r4(U+0));
}
B525f3b:{NFSU2_TR(0x525f3b);
{goto L525f43;}
}
B525f3d:L525f3d:{c.instructions+=1;NFSU2_TR(0x525f3d);
u8 U[4];
w4(U+0,u32(0x4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B525f43:L525f43:{c.instructions+=4;NFSU2_TR(0x525f43);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83a9d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B525f4a:{NFSU2_TR(0x525f4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525f4e:{NFSU2_TR(0x525f4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e7e8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B525f55:{NFSU2_TR(0x525f55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525f5aull));
TAIL_STATIC(0x5ac6e0u,5ac);
}
B525f5a:L525f5a:{c.instructions+=7;NFSU2_TR(0x525f5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525f5c:{NFSU2_TR(0x525f5c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525f5e:{NFSU2_TR(0x525f5e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525f60:{NFSU2_TR(0x525f60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525f62:{NFSU2_TR(0x525f62);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B525f66:{NFSU2_TR(0x525f66);
u8 U[8];
w4(U+0,u32(u32(u32(0x126cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B525f71:{NFSU2_TR(0x525f71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525f76ull));
TAIL_STATIC(0x610270u,610);
}
B525f76:L525f76:{c.instructions+=4;NFSU2_TR(0x525f76);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x83aa74ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x83aa74ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B525f7c:{NFSU2_TR(0x525f7c);
w4(R+0,u32(0x1ull));
}
B525f81:{NFSU2_TR(0x525f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x125cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525f88:{NFSU2_TR(0x525f88);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L525f9e;}}
}
B525f8a:L525f8a:{c.instructions+=2;NFSU2_TR(0x525f8a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x83aac4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x83aac4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B525f90:{NFSU2_TR(0x525f90);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L525f9e;}}
}
B525f92:L525f92:{c.instructions+=3;NFSU2_TR(0x525f92);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B525f96:{NFSU2_TR(0x525f96);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x3b0ull))));
}
B525f9c:{NFSU2_TR(0x525f9c);
{goto L525fa0;}
}
B525f9e:L525f9e:{c.instructions+=1;NFSU2_TR(0x525f9e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B525fa0:L525fa0:{c.instructions+=4;NFSU2_TR(0x525fa0);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B525fa6:{NFSU2_TR(0x525fa6);
__builtin_memmove((R+28),gp(0x863480),4);
}
B525fac:{NFSU2_TR(0x525fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B525fb0:{NFSU2_TR(0x525fb0);
if(r1(R+518)){{goto L525fb9;}}
}
B525fb2:L525fb2:{c.instructions+=1;NFSU2_TR(0x525fb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x83aab8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B525fb9:L525fb9:{c.instructions+=2;NFSU2_TR(0x525fb9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B525fbb:{NFSU2_TR(0x525fbb);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x9bd8ull))));
}
B525fc1:L525fc1:{c.instructions+=3;NFSU2_TR(0x525fc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B525fc3:{NFSU2_TR(0x525fc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B525fc5:{NFSU2_TR(0x525fc5);
if(r1(R+518)){{goto L525fcc;}}
}
B525fc7:L525fc7:{c.instructions+=2;NFSU2_TR(0x525fc7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B525fca:{NFSU2_TR(0x525fca);
if(r1(R+518)){{goto L525fd7;}}
}
B525fcc:L525fcc:{c.instructions+=4;NFSU2_TR(0x525fcc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B525fcd:{NFSU2_TR(0x525fcd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B525fd0:{NFSU2_TR(0x525fd0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5bull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5bull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B525fd3:{NFSU2_TR(0x525fd3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x525fc1u);}goto L525fc1;}}
}
B525fd5:L525fd5:{c.instructions+=1;NFSU2_TR(0x525fd5);
{goto L525ffe;}
}
B525fd7:L525fd7:{c.instructions+=4;NFSU2_TR(0x525fd7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525fdb:{NFSU2_TR(0x525fdb);
u8 U[16];
w4(U+0,u32(u32(u32(0x9bd8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B525fe2:{NFSU2_TR(0x525fe2);
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
B525fe4:{NFSU2_TR(0x525fe4);
if(r1(R+518)){{goto L525ffe;}}
}
B525fe6:L525fe6:{c.instructions+=3;NFSU2_TR(0x525fe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B525fe8:{NFSU2_TR(0x525fe8);
__builtin_memmove((R+4),(R+28),4);
}
B525fea:{NFSU2_TR(0x525fea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525fedull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B525fed:L525fed:{c.instructions+=8;NFSU2_TR(0x525fed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B525ff0:{NFSU2_TR(0x525ff0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B525ff2:{NFSU2_TR(0x525ff2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ff3:{NFSU2_TR(0x525ff3);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B525ff7:{NFSU2_TR(0x525ff7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ff8:{NFSU2_TR(0x525ff8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B525ff9:{NFSU2_TR(0x525ff9);
__builtin_memmove((R+4),(R+28),4);
}
B525ffb:{NFSU2_TR(0x525ffb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x525ffeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B525ffe:L525ffe:{c.instructions+=1;NFSU2_TR(0x525ffe);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aab4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x526005u,526);
}
XIT:NFSU2_TR_EXIT(0x525,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
