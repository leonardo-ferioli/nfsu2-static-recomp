#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_63f(u8* __restrict R,Cpu& c);
u32 body_642(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_644(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_654(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_684(u8* __restrict R,Cpu& c);
u32 body_685(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_687(u8* __restrict R,Cpu& c);
u32 body_689(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6cb(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x688,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x688,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_688(u8* __restrict R,Cpu& c);
u32 page_688(Cpu& c){return body_688(c.regs.data(),c);}
__attribute__((noinline)) u32 body_688(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x688004:goto L688004;
case 0x68800a:goto L68800a;
case 0x68800b:c.instructions+=5;goto B68800b;
case 0x68800c:c.instructions+=4;goto B68800c;
case 0x688011:c.instructions+=3;goto B688011;
case 0x688014:c.instructions+=2;goto B688014;
case 0x688019:c.instructions+=1;goto B688019;
case 0x68801e:goto L68801e;
case 0x688025:c.instructions+=1;goto B688025;
case 0x688027:goto L688027;
case 0x68802c:c.instructions+=2;goto B68802c;
case 0x688032:c.instructions+=1;goto B688032;
case 0x688037:goto L688037;
case 0x68803d:c.instructions+=3;goto B68803d;
case 0x688042:c.instructions+=2;goto B688042;
case 0x688043:c.instructions+=1;goto B688043;
case 0x688044:goto L688044;
case 0x688046:c.instructions+=3;goto B688046;
case 0x688047:c.instructions+=2;goto B688047;
case 0x68804d:c.instructions+=1;goto B68804d;
case 0x688053:goto L688053;
case 0x688059:c.instructions+=2;goto B688059;
case 0x68805f:c.instructions+=1;goto B68805f;
case 0x688064:goto L688064;
case 0x688067:c.instructions+=3;goto B688067;
case 0x68806f:c.instructions+=2;goto B68806f;
case 0x688071:c.instructions+=1;goto B688071;
case 0x688073:goto L688073;
case 0x688075:c.instructions+=1;goto B688075;
case 0x688077:goto L688077;
case 0x688079:c.instructions+=1;goto B688079;
case 0x68807b:goto L68807b;
case 0x688083:c.instructions+=1;goto B688083;
case 0x688085:goto L688085;
case 0x68808b:c.instructions+=1;goto B68808b;
case 0x68808d:goto L68808d;
case 0x68808e:c.instructions+=4;goto B68808e;
case 0x68808f:c.instructions+=3;goto B68808f;
case 0x688096:c.instructions+=2;goto B688096;
case 0x68809c:c.instructions+=1;goto B68809c;
case 0x68809e:goto L68809e;
case 0x6880a4:c.instructions+=1;goto B6880a4;
case 0x6880a6:goto L6880a6;
case 0x6880ae:c.instructions+=5;goto B6880ae;
case 0x6880af:c.instructions+=4;goto B6880af;
case 0x6880b0:c.instructions+=3;goto B6880b0;
case 0x6880b6:c.instructions+=2;goto B6880b6;
case 0x6880b9:c.instructions+=1;goto B6880b9;
case 0x6880be:goto L6880be;
case 0x6880c5:c.instructions+=4;goto B6880c5;
case 0x6880cb:c.instructions+=3;goto B6880cb;
case 0x6880cd:c.instructions+=2;goto B6880cd;
case 0x6880d2:c.instructions+=1;goto B6880d2;
case 0x6880d7:goto L6880d7;
case 0x6880d9:c.instructions+=1;goto B6880d9;
case 0x6880db:goto L6880db;
case 0x6880e0:goto L6880e0;
case 0x6880e5:c.instructions+=2;goto B6880e5;
case 0x6880eb:c.instructions+=1;goto B6880eb;
case 0x6880f0:goto L6880f0;
case 0x6880f1:c.instructions+=1;goto B6880f1;
case 0x6880f2:goto L6880f2;
case 0x6880f4:c.instructions+=5;goto B6880f4;
case 0x6880f5:c.instructions+=4;goto B6880f5;
case 0x6880f6:c.instructions+=3;goto B6880f6;
case 0x6880f7:c.instructions+=2;goto B6880f7;
case 0x6880f8:c.instructions+=1;goto B6880f8;
case 0x6881f1:goto L6881f1;
case 0x6881f3:c.instructions+=7;goto B6881f3;
case 0x6881f4:c.instructions+=6;goto B6881f4;
case 0x6881f6:c.instructions+=5;goto B6881f6;
case 0x6881f9:c.instructions+=4;goto B6881f9;
case 0x688200:c.instructions+=3;goto B688200;
case 0x688201:c.instructions+=2;goto B688201;
case 0x688203:c.instructions+=1;goto B688203;
case 0x688205:goto L688205;
case 0x68820a:c.instructions+=1;goto B68820a;
case 0x68820f:goto L68820f;
case 0x688212:c.instructions+=4;goto B688212;
case 0x688213:c.instructions+=3;goto B688213;
case 0x688215:c.instructions+=2;goto B688215;
case 0x688217:c.instructions+=1;goto B688217;
case 0x688219:goto L688219;
case 0x68821e:c.instructions+=1;goto B68821e;
case 0x688223:goto L688223;
case 0x688225:c.instructions+=2;goto B688225;
case 0x688228:c.instructions+=1;goto B688228;
case 0x68822d:goto L68822d;
case 0x68822e:c.instructions+=3;goto B68822e;
case 0x688231:c.instructions+=2;goto B688231;
case 0x688233:c.instructions+=1;goto B688233;
case 0x688235:goto L688235;
case 0x688237:c.instructions+=1;goto B688237;
case 0x68823c:goto L68823c;
case 0x68823f:c.instructions+=27;goto B68823f;
case 0x688245:c.instructions+=26;goto B688245;
case 0x688249:c.instructions+=25;goto B688249;
case 0x68824c:c.instructions+=24;goto B68824c;
case 0x68824e:c.instructions+=23;goto B68824e;
case 0x688251:c.instructions+=22;goto B688251;
case 0x688252:c.instructions+=21;goto B688252;
case 0x688255:c.instructions+=20;goto B688255;
case 0x688256:c.instructions+=19;goto B688256;
case 0x688259:c.instructions+=18;goto B688259;
case 0x68825c:c.instructions+=17;goto B68825c;
case 0x68825d:c.instructions+=16;goto B68825d;
case 0x688260:c.instructions+=15;goto B688260;
case 0x688263:c.instructions+=14;goto B688263;
case 0x688266:c.instructions+=13;goto B688266;
case 0x688269:c.instructions+=12;goto B688269;
case 0x68826c:c.instructions+=11;goto B68826c;
case 0x68826f:c.instructions+=10;goto B68826f;
case 0x688272:c.instructions+=9;goto B688272;
case 0x688275:c.instructions+=8;goto B688275;
case 0x688278:c.instructions+=7;goto B688278;
case 0x68827b:c.instructions+=6;goto B68827b;
case 0x68827e:c.instructions+=5;goto B68827e;
case 0x688281:c.instructions+=4;goto B688281;
case 0x688283:c.instructions+=3;goto B688283;
case 0x688286:c.instructions+=2;goto B688286;
case 0x688289:c.instructions+=1;goto B688289;
case 0x68828e:goto L68828e;
case 0x688291:c.instructions+=1;goto B688291;
case 0x688293:goto L688293;
case 0x688296:c.instructions+=4;goto B688296;
case 0x688299:c.instructions+=3;goto B688299;
case 0x68829a:c.instructions+=2;goto B68829a;
case 0x68829b:c.instructions+=1;goto B68829b;
case 0x6882a0:goto L6882a0;
case 0x6882a3:c.instructions+=2;goto B6882a3;
case 0x6882a5:c.instructions+=1;goto B6882a5;
case 0x6882aa:goto L6882aa;
case 0x6882ac:c.instructions+=1;goto B6882ac;
case 0x6882b2:goto L6882b2;
case 0x6882b4:c.instructions+=1;goto B6882b4;
case 0x6882b9:goto L6882b9;
case 0x6882bd:c.instructions+=1;goto B6882bd;
case 0x6882bf:goto L6882bf;
case 0x6882c2:c.instructions+=4;goto B6882c2;
case 0x6882c3:c.instructions+=3;goto B6882c3;
case 0x6882c5:c.instructions+=2;goto B6882c5;
case 0x6882c8:c.instructions+=1;goto B6882c8;
case 0x6882cd:goto L6882cd;
case 0x6882cf:c.instructions+=1;goto B6882cf;
case 0x6882d1:goto L6882d1;
case 0x6882d4:c.instructions+=2;goto B6882d4;
case 0x6882d7:c.instructions+=1;goto B6882d7;
case 0x6882da:goto L6882da;
case 0x6882dd:c.instructions+=1;goto B6882dd;
case 0x6882df:goto L6882df;
case 0x6882e4:c.instructions+=1;goto B6882e4;
case 0x6882e9:goto L6882e9;
case 0x6882ec:c.instructions+=3;goto B6882ec;
case 0x6882ed:c.instructions+=2;goto B6882ed;
case 0x6882ef:c.instructions+=1;goto B6882ef;
case 0x6882f4:goto L6882f4;
case 0x6882f7:goto L6882f7;
case 0x6882fc:c.instructions+=1;goto B6882fc;
case 0x688301:goto L688301;
case 0x688308:c.instructions+=2;goto B688308;
case 0x68830d:c.instructions+=1;goto B68830d;
case 0x68830f:goto L68830f;
case 0x688314:c.instructions+=5;goto B688314;
case 0x688315:c.instructions+=4;goto B688315;
case 0x688318:c.instructions+=3;goto B688318;
case 0x688319:c.instructions+=2;goto B688319;
case 0x68831b:c.instructions+=1;goto B68831b;
case 0x688320:goto L688320;
case 0x688323:c.instructions+=1;goto B688323;
case 0x68832a:goto L68832a;
case 0x688331:c.instructions+=1;goto B688331;
case 0x688333:goto L688333;
case 0x688338:c.instructions+=5;goto B688338;
case 0x688339:c.instructions+=4;goto B688339;
case 0x68833c:c.instructions+=3;goto B68833c;
case 0x68833d:c.instructions+=2;goto B68833d;
case 0x68833f:c.instructions+=1;goto B68833f;
case 0x688344:goto L688344;
case 0x688347:c.instructions+=1;goto B688347;
case 0x68834e:goto L68834e;
case 0x688355:c.instructions+=2;goto B688355;
case 0x68835a:c.instructions+=1;goto B68835a;
case 0x68835c:goto L68835c;
case 0x68835f:goto L68835f;
case 0x688363:c.instructions+=2;goto B688363;
case 0x688368:c.instructions+=1;goto B688368;
case 0x68836a:goto L68836a;
case 0x68836d:c.instructions+=3;goto B68836d;
case 0x68836f:c.instructions+=2;goto B68836f;
case 0x688375:c.instructions+=1;goto B688375;
case 0x688377:goto L688377;
case 0x68837b:c.instructions+=1;goto B68837b;
case 0x68837d:goto L68837d;
case 0x688380:c.instructions+=3;goto B688380;
case 0x688382:c.instructions+=2;goto B688382;
case 0x688384:c.instructions+=1;goto B688384;
case 0x688386:goto L688386;
case 0x68838a:goto L68838a;
case 0x68838d:c.instructions+=3;goto B68838d;
case 0x688392:c.instructions+=2;goto B688392;
case 0x688394:c.instructions+=1;goto B688394;
case 0x68839a:goto L68839a;
case 0x6883a0:goto L6883a0;
case 0x6883a5:c.instructions+=1;goto B6883a5;
case 0x6883a7:goto L6883a7;
case 0x6883ac:c.instructions+=1;goto B6883ac;
case 0x6883ae:goto L6883ae;
case 0x6883b3:c.instructions+=1;goto B6883b3;
case 0x6883b5:goto L6883b5;
case 0x6883ba:c.instructions+=1;goto B6883ba;
case 0x6883bc:goto L6883bc;
case 0x6883c1:c.instructions+=1;goto B6883c1;
case 0x6883c3:goto L6883c3;
case 0x6883c8:c.instructions+=1;goto B6883c8;
case 0x6883ca:goto L6883ca;
case 0x6883cf:c.instructions+=1;goto B6883cf;
case 0x6883d5:goto L6883d5;
case 0x6883dc:c.instructions+=1;goto B6883dc;
case 0x6883e1:goto L6883e1;
case 0x6883e8:c.instructions+=1;goto B6883e8;
case 0x6883ed:goto L6883ed;
case 0x6883f4:c.instructions+=1;goto B6883f4;
case 0x6883f9:goto L6883f9;
case 0x688400:c.instructions+=1;goto B688400;
case 0x688405:goto L688405;
case 0x68840c:c.instructions+=1;goto B68840c;
case 0x688411:goto L688411;
case 0x688418:c.instructions+=1;goto B688418;
case 0x68841d:goto L68841d;
case 0x688420:c.instructions+=1;goto B688420;
case 0x688425:goto L688425;
case 0x68842c:c.instructions+=1;goto B68842c;
case 0x68842e:goto L68842e;
case 0x688433:c.instructions+=1;goto B688433;
case 0x688435:goto L688435;
case 0x68843a:c.instructions+=1;goto B68843a;
case 0x68843c:goto L68843c;
case 0x688441:c.instructions+=1;goto B688441;
case 0x688443:goto L688443;
case 0x688445:c.instructions+=1;goto B688445;
case 0x688447:goto L688447;
case 0x68844c:c.instructions+=1;goto B68844c;
case 0x68844e:goto L68844e;
case 0x688453:c.instructions+=1;goto B688453;
case 0x688455:goto L688455;
case 0x68845a:c.instructions+=1;goto B68845a;
case 0x68845c:goto L68845c;
case 0x688461:c.instructions+=2;goto B688461;
case 0x688466:c.instructions+=1;goto B688466;
case 0x68846b:goto L68846b;
case 0x688472:c.instructions+=1;goto B688472;
case 0x688474:goto L688474;
case 0x68847b:c.instructions+=1;goto B68847b;
case 0x68847d:goto L68847d;
case 0x688484:c.instructions+=1;goto B688484;
case 0x688486:goto L688486;
case 0x68848d:c.instructions+=1;goto B68848d;
case 0x68848f:goto L68848f;
case 0x688496:c.instructions+=1;goto B688496;
case 0x688498:goto L688498;
case 0x68849f:c.instructions+=1;goto B68849f;
case 0x6884a1:goto L6884a1;
case 0x6884a8:goto L6884a8;
case 0x6884ab:c.instructions+=2;goto B6884ab;
case 0x6884ad:c.instructions+=1;goto B6884ad;
case 0x6884b3:goto L6884b3;
case 0x6884b7:c.instructions+=3;goto B6884b7;
case 0x6884bc:c.instructions+=2;goto B6884bc;
case 0x6884bf:c.instructions+=1;goto B6884bf;
case 0x6884c4:goto L6884c4;
case 0x6884c6:c.instructions+=2;goto B6884c6;
case 0x6884c7:c.instructions+=1;goto B6884c7;
case 0x6884c9:goto L6884c9;
case 0x6884cc:c.instructions+=2;goto B6884cc;
case 0x6884ce:c.instructions+=1;goto B6884ce;
case 0x6884d3:goto L6884d3;
case 0x6884d5:goto L6884d5;
case 0x6884d7:goto L6884d7;
case 0x6884d9:c.instructions+=2;goto B6884d9;
case 0x6884dc:c.instructions+=1;goto B6884dc;
case 0x6884de:goto L6884de;
case 0x6884e3:c.instructions+=1;goto B6884e3;
case 0x6884e8:goto L6884e8;
case 0x6884eb:c.instructions+=2;goto B6884eb;
case 0x6884ed:c.instructions+=1;goto B6884ed;
case 0x6884ef:goto L6884ef;
case 0x6884f2:c.instructions+=1;goto B6884f2;
case 0x6884f4:goto L6884f4;
case 0x6884f8:c.instructions+=1;goto B6884f8;
case 0x6884fd:goto L6884fd;
case 0x688500:c.instructions+=5;goto B688500;
case 0x688503:c.instructions+=4;goto B688503;
case 0x688509:c.instructions+=3;goto B688509;
case 0x68850b:c.instructions+=2;goto B68850b;
case 0x68850e:c.instructions+=1;goto B68850e;
case 0x688510:goto L688510;
case 0x688513:c.instructions+=1;goto B688513;
case 0x688515:goto L688515;
case 0x688518:c.instructions+=1;goto B688518;
case 0x68851a:goto L68851a;
case 0x68851e:c.instructions+=2;goto B68851e;
case 0x688523:c.instructions+=1;goto B688523;
case 0x688525:goto L688525;
case 0x68852a:c.instructions+=5;goto B68852a;
case 0x68852f:c.instructions+=4;goto B68852f;
case 0x688532:c.instructions+=3;goto B688532;
case 0x688533:c.instructions+=2;goto B688533;
case 0x688535:c.instructions+=1;goto B688535;
case 0x68853a:goto L68853a;
case 0x68853d:goto L68853d;
case 0x688541:c.instructions+=1;goto B688541;
case 0x688543:goto L688543;
case 0x688548:c.instructions+=2;goto B688548;
case 0x688549:c.instructions+=1;goto B688549;
case 0x68854f:goto L68854f;
case 0x688551:c.instructions+=1;goto B688551;
case 0x688553:goto L688553;
case 0x688554:c.instructions+=1;goto B688554;
case 0x68855a:goto L68855a;
case 0x68855c:c.instructions+=1;goto B68855c;
case 0x68855e:goto L68855e;
case 0x688563:c.instructions+=2;goto B688563;
case 0x688564:c.instructions+=1;goto B688564;
case 0x68856a:goto L68856a;
case 0x68856c:c.instructions+=1;goto B68856c;
case 0x68856e:goto L68856e;
case 0x688570:goto L688570;
case 0x688572:c.instructions+=2;goto B688572;
case 0x688575:c.instructions+=1;goto B688575;
case 0x688577:goto L688577;
case 0x688579:c.instructions+=5;goto B688579;
case 0x68857a:c.instructions+=4;goto B68857a;
case 0x68857b:c.instructions+=3;goto B68857b;
case 0x688580:c.instructions+=2;goto B688580;
case 0x688581:c.instructions+=1;goto B688581;
case 0x688584:goto L688584;
case 0x688586:c.instructions+=2;goto B688586;
case 0x688588:c.instructions+=1;goto B688588;
case 0x68858e:goto L68858e;
case 0x688591:c.instructions+=2;goto B688591;
case 0x688593:c.instructions+=1;goto B688593;
case 0x688598:goto L688598;
case 0x68859a:c.instructions+=2;goto B68859a;
case 0x68859c:c.instructions+=1;goto B68859c;
case 0x6885a2:goto L6885a2;
case 0x6885a5:c.instructions+=3;goto B6885a5;
case 0x6885a6:c.instructions+=2;goto B6885a6;
case 0x6885a8:c.instructions+=1;goto B6885a8;
case 0x6885ad:goto L6885ad;
case 0x6885af:c.instructions+=2;goto B6885af;
case 0x6885b1:c.instructions+=1;goto B6885b1;
case 0x6885b7:goto L6885b7;
case 0x6885ba:c.instructions+=1;goto B6885ba;
case 0x6885c0:goto L6885c0;
case 0x6885c5:goto L6885c5;
case 0x6885c7:c.instructions+=1;goto B6885c7;
case 0x6885c9:goto L6885c9;
case 0x6885d0:goto L6885d0;
case 0x6885d3:c.instructions+=1;goto B6885d3;
case 0x6885d9:goto L6885d9;
case 0x6885dc:c.instructions+=1;goto B6885dc;
case 0x6885de:goto L6885de;
case 0x6885e1:c.instructions+=4;goto B6885e1;
case 0x6885e2:c.instructions+=3;goto B6885e2;
case 0x6885e5:c.instructions+=2;goto B6885e5;
case 0x6885e6:c.instructions+=1;goto B6885e6;
case 0x6885eb:goto L6885eb;
case 0x6885ee:c.instructions+=3;goto B6885ee;
case 0x6885f1:c.instructions+=2;goto B6885f1;
case 0x6885f3:c.instructions+=1;goto B6885f3;
case 0x6885f5:goto L6885f5;
case 0x6885f8:c.instructions+=3;goto B6885f8;
case 0x6885fa:c.instructions+=2;goto B6885fa;
case 0x6885fc:c.instructions+=1;goto B6885fc;
case 0x6885fe:goto L6885fe;
case 0x688600:c.instructions+=1;goto B688600;
case 0x688603:goto L688603;
case 0x688606:c.instructions+=1;goto B688606;
case 0x688608:goto L688608;
case 0x68860a:c.instructions+=1;goto B68860a;
case 0x68860f:goto L68860f;
case 0x688611:c.instructions+=2;goto B688611;
case 0x688613:c.instructions+=1;goto B688613;
case 0x688615:goto L688615;
case 0x688619:c.instructions+=1;goto B688619;
case 0x68861b:goto L68861b;
case 0x68861d:c.instructions+=1;goto B68861d;
case 0x688622:goto L688622;
case 0x688624:c.instructions+=2;goto B688624;
case 0x688626:c.instructions+=1;goto B688626;
case 0x688628:goto L688628;
case 0x68862d:c.instructions+=2;goto B68862d;
case 0x68862f:c.instructions+=1;goto B68862f;
case 0x688634:goto L688634;
case 0x688636:c.instructions+=2;goto B688636;
case 0x688638:c.instructions+=1;goto B688638;
case 0x68863a:goto L68863a;
case 0x68863d:c.instructions+=3;goto B68863d;
case 0x68863e:c.instructions+=2;goto B68863e;
case 0x688640:c.instructions+=1;goto B688640;
case 0x688645:goto L688645;
case 0x688647:c.instructions+=2;goto B688647;
case 0x688649:c.instructions+=1;goto B688649;
case 0x68864b:goto L68864b;
case 0x68864e:c.instructions+=2;goto B68864e;
case 0x688650:c.instructions+=1;goto B688650;
case 0x688652:goto L688652;
case 0x688654:c.instructions+=2;goto B688654;
case 0x688655:c.instructions+=1;goto B688655;
case 0x688658:goto L688658;
case 0x68865a:c.instructions+=2;goto B68865a;
case 0x68865c:c.instructions+=1;goto B68865c;
case 0x68865e:goto L68865e;
case 0x688660:c.instructions+=1;goto B688660;
case 0x688665:goto L688665;
case 0x688667:c.instructions+=1;goto B688667;
case 0x68866d:goto L68866d;
case 0x688670:c.instructions+=2;goto B688670;
case 0x688672:c.instructions+=1;goto B688672;
case 0x688677:goto L688677;
case 0x688679:c.instructions+=2;goto B688679;
case 0x68867b:c.instructions+=1;goto B68867b;
case 0x68867d:goto L68867d;
case 0x688684:c.instructions+=1;goto B688684;
case 0x688686:goto L688686;
case 0x688688:goto L688688;
case 0x68868b:c.instructions+=2;goto B68868b;
case 0x68868d:c.instructions+=1;goto B68868d;
case 0x68868f:goto L68868f;
case 0x688691:c.instructions+=2;goto B688691;
case 0x688692:c.instructions+=1;goto B688692;
case 0x688695:goto L688695;
case 0x688698:goto L688698;
case 0x68869b:c.instructions+=1;goto B68869b;
case 0x6886a0:goto L6886a0;
case 0x6886a2:goto L6886a2;
case 0x6886a3:goto L6886a3;
case 0x6886a4:goto L6886a4;
case 0x6886a5:c.instructions+=2;goto B6886a5;
case 0x6886a6:c.instructions+=1;goto B6886a6;
case 0x6886a9:goto L6886a9;
case 0x6886ab:c.instructions+=9;goto B6886ab;
case 0x6886ac:c.instructions+=8;goto B6886ac;
case 0x6886ae:c.instructions+=7;goto B6886ae;
case 0x6886b0:c.instructions+=6;goto B6886b0;
case 0x6886b3:c.instructions+=5;goto B6886b3;
case 0x6886b5:c.instructions+=4;goto B6886b5;
case 0x6886b8:c.instructions+=3;goto B6886b8;
case 0x6886bb:c.instructions+=2;goto B6886bb;
case 0x6886bc:c.instructions+=1;goto B6886bc;
case 0x6886bf:goto L6886bf;
case 0x6886c1:c.instructions+=8;goto B6886c1;
case 0x6886c2:c.instructions+=7;goto B6886c2;
case 0x6886c4:c.instructions+=6;goto B6886c4;
case 0x6886c5:c.instructions+=5;goto B6886c5;
case 0x6886c6:c.instructions+=4;goto B6886c6;
case 0x6886c7:c.instructions+=3;goto B6886c7;
case 0x6886ca:c.instructions+=2;goto B6886ca;
case 0x6886cc:c.instructions+=1;goto B6886cc;
case 0x6886ce:goto L6886ce;
case 0x6886d1:goto L6886d1;
case 0x6886d4:c.instructions+=3;goto B6886d4;
case 0x6886d7:c.instructions+=2;goto B6886d7;
case 0x6886da:c.instructions+=1;goto B6886da;
case 0x6886dc:goto L6886dc;
case 0x6886df:c.instructions+=4;goto B6886df;
case 0x6886e1:c.instructions+=3;goto B6886e1;
case 0x6886e2:c.instructions+=2;goto B6886e2;
case 0x6886e4:c.instructions+=1;goto B6886e4;
case 0x6886e6:goto L6886e6;
case 0x6886e8:c.instructions+=1;goto B6886e8;
case 0x6886ea:goto L6886ea;
case 0x6886ed:c.instructions+=1;goto B6886ed;
case 0x6886ef:goto L6886ef;
case 0x6886f2:c.instructions+=4;goto B6886f2;
case 0x6886f5:c.instructions+=3;goto B6886f5;
case 0x6886f7:c.instructions+=2;goto B6886f7;
case 0x6886fa:c.instructions+=1;goto B6886fa;
case 0x6886fc:goto L6886fc;
case 0x6886ff:c.instructions+=1;goto B6886ff;
case 0x688701:goto L688701;
case 0x688704:c.instructions+=1;goto B688704;
case 0x688706:goto L688706;
case 0x688708:c.instructions+=1;goto B688708;
case 0x68870a:goto L68870a;
case 0x68870d:c.instructions+=3;goto B68870d;
case 0x68870f:c.instructions+=2;goto B68870f;
case 0x688712:c.instructions+=1;goto B688712;
case 0x688714:goto L688714;
case 0x688717:c.instructions+=1;goto B688717;
case 0x688719:goto L688719;
case 0x68871a:c.instructions+=4;goto B68871a;
case 0x68871d:c.instructions+=3;goto B68871d;
case 0x68871e:c.instructions+=2;goto B68871e;
case 0x688721:c.instructions+=1;goto B688721;
case 0x688726:goto L688726;
case 0x688728:c.instructions+=1;goto B688728;
case 0x68872a:goto L68872a;
case 0x68872d:c.instructions+=2;goto B68872d;
case 0x688730:c.instructions+=1;goto B688730;
case 0x688732:goto L688732;
case 0x688735:c.instructions+=1;goto B688735;
case 0x688737:goto L688737;
case 0x68873a:c.instructions+=2;goto B68873a;
case 0x68873d:c.instructions+=1;goto B68873d;
case 0x688740:goto L688740;
case 0x688743:c.instructions+=7;goto B688743;
case 0x688746:c.instructions+=6;goto B688746;
case 0x688749:c.instructions+=5;goto B688749;
case 0x68874a:c.instructions+=4;goto B68874a;
case 0x68874d:c.instructions+=3;goto B68874d;
case 0x68874e:c.instructions+=2;goto B68874e;
case 0x688751:c.instructions+=1;goto B688751;
case 0x688756:goto L688756;
case 0x688758:c.instructions+=1;goto B688758;
case 0x68875a:goto L68875a;
case 0x68875d:c.instructions+=4;goto B68875d;
case 0x68875f:c.instructions+=3;goto B68875f;
case 0x688761:c.instructions+=2;goto B688761;
case 0x688764:c.instructions+=1;goto B688764;
case 0x688766:goto L688766;
case 0x688769:goto L688769;
case 0x68876b:c.instructions+=3;goto B68876b;
case 0x68876e:c.instructions+=2;goto B68876e;
case 0x688770:c.instructions+=1;goto B688770;
case 0x688772:goto L688772;
case 0x688774:c.instructions+=1;goto B688774;
case 0x688776:goto L688776;
case 0x68877b:goto L68877b;
case 0x68877c:c.instructions+=4;goto B68877c;
case 0x68877d:c.instructions+=3;goto B68877d;
case 0x68877e:c.instructions+=2;goto B68877e;
case 0x68877f:c.instructions+=1;goto B68877f;
case 0x688782:goto L688782;
case 0x688784:c.instructions+=11;goto B688784;
case 0x688785:c.instructions+=10;goto B688785;
case 0x688787:c.instructions+=9;goto B688787;
case 0x68878a:c.instructions+=8;goto B68878a;
case 0x68878b:c.instructions+=7;goto B68878b;
case 0x68878c:c.instructions+=6;goto B68878c;
case 0x68878f:c.instructions+=5;goto B68878f;
case 0x688790:c.instructions+=4;goto B688790;
case 0x688792:c.instructions+=3;goto B688792;
case 0x688794:c.instructions+=2;goto B688794;
case 0x688795:c.instructions+=1;goto B688795;
case 0x688798:goto L688798;
case 0x68879a:goto L68879a;
case 0x68879d:c.instructions+=16;goto B68879d;
case 0x68879f:c.instructions+=15;goto B68879f;
case 0x6887a2:c.instructions+=14;goto B6887a2;
case 0x6887a4:c.instructions+=13;goto B6887a4;
case 0x6887a5:c.instructions+=12;goto B6887a5;
case 0x6887a8:c.instructions+=11;goto B6887a8;
case 0x6887ab:c.instructions+=10;goto B6887ab;
case 0x6887ac:c.instructions+=9;goto B6887ac;
case 0x6887ae:c.instructions+=8;goto B6887ae;
case 0x6887b1:c.instructions+=7;goto B6887b1;
case 0x6887b4:c.instructions+=6;goto B6887b4;
case 0x6887b5:c.instructions+=5;goto B6887b5;
case 0x6887b6:c.instructions+=4;goto B6887b6;
case 0x6887b7:c.instructions+=3;goto B6887b7;
case 0x6887b9:c.instructions+=2;goto B6887b9;
case 0x6887c0:c.instructions+=1;goto B6887c0;
case 0x6887c5:goto L6887c5;
case 0x6887c7:c.instructions+=1;goto B6887c7;
case 0x6887c9:goto L6887c9;
case 0x6887cc:c.instructions+=1;goto B6887cc;
case 0x6887ce:goto L6887ce;
case 0x6887d0:goto L6887d0;
case 0x6887d1:c.instructions+=4;goto B6887d1;
case 0x6887d2:c.instructions+=3;goto B6887d2;
case 0x6887d3:c.instructions+=2;goto B6887d3;
case 0x6887d4:c.instructions+=1;goto B6887d4;
case 0x6887d7:goto L6887d7;
case 0x6887da:c.instructions+=5;goto B6887da;
case 0x6887dd:c.instructions+=4;goto B6887dd;
case 0x6887de:c.instructions+=3;goto B6887de;
case 0x6887df:c.instructions+=2;goto B6887df;
case 0x6887e2:c.instructions+=1;goto B6887e2;
case 0x6887e7:goto L6887e7;
case 0x6887e9:c.instructions+=1;goto B6887e9;
case 0x6887eb:goto L6887eb;
case 0x6887ee:c.instructions+=3;goto B6887ee;
case 0x6887f3:c.instructions+=2;goto B6887f3;
case 0x6887f6:c.instructions+=1;goto B6887f6;
case 0x6887f8:goto L6887f8;
case 0x6887fb:c.instructions+=1;goto B6887fb;
case 0x6887fd:goto L6887fd;
case 0x688800:c.instructions+=3;goto B688800;
case 0x688803:c.instructions+=2;goto B688803;
case 0x688807:c.instructions+=1;goto B688807;
case 0x688809:goto L688809;
case 0x68880c:c.instructions+=1;goto B68880c;
case 0x68880e:goto L68880e;
case 0x688811:c.instructions+=1;goto B688811;
case 0x688813:goto L688813;
case 0x688814:c.instructions+=3;goto B688814;
case 0x688819:c.instructions+=2;goto B688819;
case 0x68881e:c.instructions+=1;goto B68881e;
case 0x688820:goto L688820;
case 0x688823:c.instructions+=3;goto B688823;
case 0x688828:c.instructions+=2;goto B688828;
case 0x68882b:c.instructions+=1;goto B68882b;
case 0x68882d:goto L68882d;
case 0x688830:c.instructions+=1;goto B688830;
case 0x688832:goto L688832;
case 0x688835:c.instructions+=3;goto B688835;
case 0x688838:c.instructions+=2;goto B688838;
case 0x68883c:c.instructions+=1;goto B68883c;
case 0x68883e:goto L68883e;
case 0x688842:c.instructions+=1;goto B688842;
case 0x688844:goto L688844;
case 0x688848:c.instructions+=1;goto B688848;
case 0x68884a:goto L68884a;
case 0x68884e:c.instructions+=1;goto B68884e;
case 0x688854:goto L688854;
case 0x688855:c.instructions+=2;goto B688855;
case 0x68885a:c.instructions+=1;goto B68885a;
case 0x68885f:goto L68885f;
case 0x688861:c.instructions+=5;goto B688861;
case 0x688864:c.instructions+=4;goto B688864;
case 0x688867:c.instructions+=3;goto B688867;
case 0x68886a:c.instructions+=2;goto B68886a;
case 0x68886b:c.instructions+=1;goto B68886b;
case 0x688870:goto L688870;
case 0x688873:c.instructions+=2;goto B688873;
case 0x688878:c.instructions+=1;goto B688878;
case 0x68887d:goto L68887d;
case 0x68887f:c.instructions+=9;goto B68887f;
case 0x688880:c.instructions+=8;goto B688880;
case 0x688882:c.instructions+=7;goto B688882;
case 0x688883:c.instructions+=6;goto B688883;
case 0x688886:c.instructions+=5;goto B688886;
case 0x688887:c.instructions+=4;goto B688887;
case 0x688889:c.instructions+=3;goto B688889;
case 0x68888d:c.instructions+=2;goto B68888d;
case 0x688890:c.instructions+=1;goto B688890;
case 0x688896:goto L688896;
case 0x688897:c.instructions+=3;goto B688897;
case 0x68889a:c.instructions+=2;goto B68889a;
case 0x68889e:c.instructions+=1;goto B68889e;
case 0x6888a4:goto L6888a4;
case 0x6888a5:c.instructions+=4;goto B6888a5;
case 0x6888a8:c.instructions+=3;goto B6888a8;
case 0x6888ab:c.instructions+=2;goto B6888ab;
case 0x6888ac:c.instructions+=1;goto B6888ac;
case 0x6888b1:goto L6888b1;
case 0x6888b3:c.instructions+=4;goto B6888b3;
case 0x6888b5:c.instructions+=3;goto B6888b5;
case 0x6888b6:c.instructions+=2;goto B6888b6;
case 0x6888b9:c.instructions+=1;goto B6888b9;
case 0x6888bb:goto L6888bb;
case 0x6888c0:c.instructions+=1;goto B6888c0;
case 0x6888c2:goto L6888c2;
case 0x6888c4:c.instructions+=3;goto B6888c4;
case 0x6888c6:c.instructions+=2;goto B6888c6;
case 0x6888c9:c.instructions+=1;goto B6888c9;
case 0x6888cb:goto L6888cb;
case 0x6888cd:goto L6888cd;
case 0x6888cf:c.instructions+=1;goto B6888cf;
case 0x6888d2:goto L6888d2;
case 0x6888d4:goto L6888d4;
case 0x6888d7:c.instructions+=2;goto B6888d7;
case 0x6888d9:c.instructions+=1;goto B6888d9;
case 0x6888db:goto L6888db;
case 0x6888de:c.instructions+=2;goto B6888de;
case 0x6888e1:c.instructions+=1;goto B6888e1;
case 0x6888e4:goto L6888e4;
case 0x6888e7:c.instructions+=2;goto B6888e7;
case 0x6888e9:c.instructions+=1;goto B6888e9;
case 0x6888eb:goto L6888eb;
case 0x6888ee:goto L6888ee;
case 0x6888f1:c.instructions+=3;goto B6888f1;
case 0x6888f4:c.instructions+=2;goto B6888f4;
case 0x6888f7:c.instructions+=1;goto B6888f7;
case 0x6888f9:goto L6888f9;
case 0x6888fc:c.instructions+=2;goto B6888fc;
case 0x6888fe:c.instructions+=1;goto B6888fe;
case 0x688900:goto L688900;
case 0x688903:c.instructions+=1;goto B688903;
case 0x688905:goto L688905;
case 0x688908:c.instructions+=3;goto B688908;
case 0x68890b:c.instructions+=2;goto B68890b;
case 0x68890c:c.instructions+=1;goto B68890c;
case 0x68890e:goto L68890e;
case 0x688912:c.instructions+=2;goto B688912;
case 0x688915:c.instructions+=1;goto B688915;
case 0x688917:goto L688917;
case 0x68891a:c.instructions+=5;goto B68891a;
case 0x68891d:c.instructions+=4;goto B68891d;
case 0x68891f:c.instructions+=3;goto B68891f;
case 0x688920:c.instructions+=2;goto B688920;
case 0x688923:c.instructions+=1;goto B688923;
case 0x688928:goto L688928;
case 0x68892a:goto L68892a;
case 0x68892b:goto L68892b;
case 0x68892e:c.instructions+=1;goto B68892e;
case 0x688933:goto L688933;
case 0x688934:c.instructions+=3;goto B688934;
case 0x688936:c.instructions+=2;goto B688936;
case 0x688937:c.instructions+=1;goto B688937;
case 0x688939:goto L688939;
case 0x68893b:goto L68893b;
case 0x68893c:c.instructions+=2;goto B68893c;
case 0x68893d:c.instructions+=1;goto B68893d;
case 0x688940:goto L688940;
case 0x688942:c.instructions+=8;goto B688942;
case 0x688943:c.instructions+=7;goto B688943;
case 0x688945:c.instructions+=6;goto B688945;
case 0x688946:c.instructions+=5;goto B688946;
case 0x688947:c.instructions+=4;goto B688947;
case 0x68894a:c.instructions+=3;goto B68894a;
case 0x68894d:c.instructions+=2;goto B68894d;
case 0x68894e:c.instructions+=1;goto B68894e;
case 0x688953:goto L688953;
case 0x688955:c.instructions+=3;goto B688955;
case 0x688957:c.instructions+=2;goto B688957;
case 0x688958:c.instructions+=1;goto B688958;
case 0x68895a:goto L68895a;
case 0x68895f:c.instructions+=1;goto B68895f;
case 0x688961:goto L688961;
case 0x688962:c.instructions+=6;goto B688962;
case 0x688965:c.instructions+=5;goto B688965;
case 0x688967:c.instructions+=4;goto B688967;
case 0x688969:c.instructions+=3;goto B688969;
case 0x68896c:c.instructions+=2;goto B68896c;
case 0x68896e:c.instructions+=1;goto B68896e;
case 0x688970:goto L688970;
case 0x688972:goto L688972;
case 0x688974:c.instructions+=3;goto B688974;
case 0x688976:c.instructions+=2;goto B688976;
case 0x688979:c.instructions+=1;goto B688979;
case 0x68897a:goto L68897a;
case 0x68897c:goto L68897c;
case 0x68897f:c.instructions+=2;goto B68897f;
case 0x688980:c.instructions+=1;goto B688980;
case 0x688985:goto L688985;
case 0x688987:c.instructions+=1;goto B688987;
case 0x688988:goto L688988;
case 0x688989:c.instructions+=1;goto B688989;
case 0x68898e:goto L68898e;
case 0x68898f:c.instructions+=5;goto B68898f;
case 0x688991:c.instructions+=4;goto B688991;
case 0x688992:c.instructions+=3;goto B688992;
case 0x688993:c.instructions+=2;goto B688993;
case 0x688994:c.instructions+=1;goto B688994;
case 0x688997:goto L688997;
case 0x688999:c.instructions+=15;goto B688999;
case 0x68899a:c.instructions+=14;goto B68899a;
case 0x68899c:c.instructions+=13;goto B68899c;
case 0x68899f:c.instructions+=12;goto B68899f;
case 0x6889a3:c.instructions+=11;goto B6889a3;
case 0x6889a4:c.instructions+=10;goto B6889a4;
case 0x6889a5:c.instructions+=9;goto B6889a5;
case 0x6889aa:c.instructions+=8;goto B6889aa;
case 0x6889ad:c.instructions+=7;goto B6889ad;
case 0x6889ae:c.instructions+=6;goto B6889ae;
case 0x6889b1:c.instructions+=5;goto B6889b1;
case 0x6889b3:c.instructions+=4;goto B6889b3;
case 0x6889b6:c.instructions+=3;goto B6889b6;
case 0x6889b9:c.instructions+=2;goto B6889b9;
case 0x6889bc:c.instructions+=1;goto B6889bc;
case 0x6889be:goto L6889be;
case 0x6889c3:c.instructions+=3;goto B6889c3;
case 0x6889c6:c.instructions+=2;goto B6889c6;
case 0x6889c9:c.instructions+=1;goto B6889c9;
case 0x6889cb:goto L6889cb;
case 0x6889d0:c.instructions+=3;goto B6889d0;
case 0x6889d3:c.instructions+=2;goto B6889d3;
case 0x6889d6:c.instructions+=1;goto B6889d6;
case 0x6889d8:goto L6889d8;
case 0x6889dd:c.instructions+=3;goto B6889dd;
case 0x6889e0:c.instructions+=2;goto B6889e0;
case 0x6889e3:c.instructions+=1;goto B6889e3;
case 0x6889e5:goto L6889e5;
case 0x6889e8:c.instructions+=17;goto B6889e8;
case 0x6889eb:c.instructions+=16;goto B6889eb;
case 0x6889ee:c.instructions+=15;goto B6889ee;
case 0x6889ef:c.instructions+=14;goto B6889ef;
case 0x6889f1:c.instructions+=13;goto B6889f1;
case 0x6889f3:c.instructions+=12;goto B6889f3;
case 0x6889f4:c.instructions+=11;goto B6889f4;
case 0x6889f6:c.instructions+=10;goto B6889f6;
case 0x6889f9:c.instructions+=9;goto B6889f9;
case 0x6889fa:c.instructions+=8;goto B6889fa;
case 0x6889fe:c.instructions+=7;goto B6889fe;
case 0x688a04:c.instructions+=6;goto B688a04;
case 0x688a08:c.instructions+=5;goto B688a08;
case 0x688a0e:c.instructions+=4;goto B688a0e;
case 0x688a12:c.instructions+=3;goto B688a12;
case 0x688a16:c.instructions+=2;goto B688a16;
case 0x688a19:c.instructions+=1;goto B688a19;
case 0x688a1e:goto L688a1e;
case 0x688a20:c.instructions+=1;goto B688a20;
case 0x688a26:goto L688a26;
case 0x688a29:c.instructions+=1;goto B688a29;
case 0x688a2e:goto L688a2e;
case 0x688a2f:c.instructions+=17;goto B688a2f;
case 0x688a32:c.instructions+=16;goto B688a32;
case 0x688a35:c.instructions+=15;goto B688a35;
case 0x688a38:c.instructions+=14;goto B688a38;
case 0x688a3b:c.instructions+=13;goto B688a3b;
case 0x688a3c:c.instructions+=12;goto B688a3c;
case 0x688a3e:c.instructions+=11;goto B688a3e;
case 0x688a41:c.instructions+=10;goto B688a41;
case 0x688a43:c.instructions+=9;goto B688a43;
case 0x688a44:c.instructions+=8;goto B688a44;
case 0x688a45:c.instructions+=7;goto B688a45;
case 0x688a48:c.instructions+=6;goto B688a48;
case 0x688a49:c.instructions+=5;goto B688a49;
case 0x688a4b:c.instructions+=4;goto B688a4b;
case 0x688a52:c.instructions+=3;goto B688a52;
case 0x688a55:c.instructions+=2;goto B688a55;
case 0x688a58:c.instructions+=1;goto B688a58;
case 0x688a5d:goto L688a5d;
case 0x688a60:c.instructions+=6;goto B688a60;
case 0x688a61:c.instructions+=5;goto B688a61;
case 0x688a64:c.instructions+=4;goto B688a64;
case 0x688a65:c.instructions+=3;goto B688a65;
case 0x688a68:c.instructions+=2;goto B688a68;
case 0x688a6b:c.instructions+=1;goto B688a6b;
case 0x688a70:goto L688a70;
case 0x688a72:c.instructions+=1;goto B688a72;
case 0x688a78:goto L688a78;
case 0x688a7b:c.instructions+=3;goto B688a7b;
case 0x688a7e:c.instructions+=2;goto B688a7e;
case 0x688a81:c.instructions+=1;goto B688a81;
case 0x688a87:goto L688a87;
case 0x688a8a:c.instructions+=6;goto B688a8a;
case 0x688a8c:c.instructions+=5;goto B688a8c;
case 0x688a8f:c.instructions+=4;goto B688a8f;
case 0x688a92:c.instructions+=3;goto B688a92;
case 0x688a95:c.instructions+=2;goto B688a95;
case 0x688a98:c.instructions+=1;goto B688a98;
case 0x688a9e:goto L688a9e;
case 0x688aa1:c.instructions+=3;goto B688aa1;
case 0x688aa4:c.instructions+=2;goto B688aa4;
case 0x688aa8:c.instructions+=1;goto B688aa8;
case 0x688aae:goto L688aae;
case 0x688ab1:c.instructions+=2;goto B688ab1;
case 0x688ab3:c.instructions+=1;goto B688ab3;
case 0x688ab5:goto L688ab5;
case 0x688ab7:c.instructions+=1;goto B688ab7;
case 0x688ab9:goto L688ab9;
case 0x688abc:goto L688abc;
case 0x688abf:c.instructions+=2;goto B688abf;
case 0x688ac1:c.instructions+=1;goto B688ac1;
case 0x688ac3:goto L688ac3;
case 0x688ac5:c.instructions+=1;goto B688ac5;
case 0x688ac7:goto L688ac7;
case 0x688aca:goto L688aca;
case 0x688acc:c.instructions+=1;goto B688acc;
case 0x688ace:goto L688ace;
case 0x688ad1:c.instructions+=4;goto B688ad1;
case 0x688ad2:c.instructions+=3;goto B688ad2;
case 0x688ad3:c.instructions+=2;goto B688ad3;
case 0x688ad4:c.instructions+=1;goto B688ad4;
case 0x688ad9:goto L688ad9;
case 0x688adb:c.instructions+=1;goto B688adb;
case 0x688add:goto L688add;
case 0x688adf:c.instructions+=1;goto B688adf;
case 0x688ae1:goto L688ae1;
case 0x688ae4:c.instructions+=2;goto B688ae4;
case 0x688ae5:c.instructions+=1;goto B688ae5;
case 0x688aea:goto L688aea;
case 0x688aeb:c.instructions+=4;goto B688aeb;
case 0x688aee:c.instructions+=3;goto B688aee;
case 0x688af1:c.instructions+=2;goto B688af1;
case 0x688af3:c.instructions+=1;goto B688af3;
case 0x688af5:goto L688af5;
case 0x688af8:c.instructions+=2;goto B688af8;
case 0x688afb:c.instructions+=1;goto B688afb;
case 0x688afd:goto L688afd;
case 0x688b00:c.instructions+=1;goto B688b00;
case 0x688b02:goto L688b02;
case 0x688b04:c.instructions+=3;goto B688b04;
case 0x688b07:c.instructions+=2;goto B688b07;
case 0x688b0d:c.instructions+=1;goto B688b0d;
case 0x688b0f:goto L688b0f;
case 0x688b13:c.instructions+=1;goto B688b13;
case 0x688b15:goto L688b15;
case 0x688b18:c.instructions+=1;goto B688b18;
case 0x688b1a:goto L688b1a;
case 0x688b1c:c.instructions+=1;goto B688b1c;
case 0x688b1e:goto L688b1e;
case 0x688b21:c.instructions+=2;goto B688b21;
case 0x688b22:c.instructions+=1;goto B688b22;
case 0x688b27:goto L688b27;
case 0x688b28:c.instructions+=4;goto B688b28;
case 0x688b2b:c.instructions+=3;goto B688b2b;
case 0x688b2e:c.instructions+=2;goto B688b2e;
case 0x688b30:c.instructions+=1;goto B688b30;
case 0x688b32:goto L688b32;
case 0x688b35:goto L688b35;
case 0x688b38:c.instructions+=4;goto B688b38;
case 0x688b3b:c.instructions+=3;goto B688b3b;
case 0x688b3d:c.instructions+=2;goto B688b3d;
case 0x688b40:c.instructions+=1;goto B688b40;
case 0x688b46:goto L688b46;
case 0x688b49:c.instructions+=2;goto B688b49;
case 0x688b4c:c.instructions+=1;goto B688b4c;
case 0x688b4e:goto L688b4e;
case 0x688b51:c.instructions+=3;goto B688b51;
case 0x688b53:c.instructions+=2;goto B688b53;
case 0x688b56:c.instructions+=1;goto B688b56;
case 0x688b58:goto L688b58;
case 0x688b5b:c.instructions+=3;goto B688b5b;
case 0x688b5d:c.instructions+=2;goto B688b5d;
case 0x688b60:c.instructions+=1;goto B688b60;
case 0x688b66:goto L688b66;
case 0x688b69:c.instructions+=3;goto B688b69;
case 0x688b6c:c.instructions+=2;goto B688b6c;
case 0x688b6d:c.instructions+=1;goto B688b6d;
case 0x688b72:goto L688b72;
case 0x688b73:c.instructions+=3;goto B688b73;
case 0x688b76:c.instructions+=2;goto B688b76;
case 0x688b78:c.instructions+=1;goto B688b78;
case 0x688b7a:goto L688b7a;
case 0x688b7d:c.instructions+=5;goto B688b7d;
case 0x688b80:c.instructions+=4;goto B688b80;
case 0x688b83:c.instructions+=3;goto B688b83;
case 0x688b86:c.instructions+=2;goto B688b86;
case 0x688b87:c.instructions+=1;goto B688b87;
case 0x688b8c:goto L688b8c;
case 0x688b8e:c.instructions+=2;goto B688b8e;
case 0x688b8f:c.instructions+=1;goto B688b8f;
case 0x688b91:goto L688b91;
case 0x688b94:c.instructions+=1;goto B688b94;
case 0x688b96:goto L688b96;
case 0x688b97:goto L688b97;
case 0x688b9a:c.instructions+=2;goto B688b9a;
case 0x688b9b:c.instructions+=1;goto B688b9b;
case 0x688ba0:goto L688ba0;
case 0x688ba2:c.instructions+=2;goto B688ba2;
case 0x688ba3:c.instructions+=1;goto B688ba3;
case 0x688ba5:goto L688ba5;
case 0x688ba7:c.instructions+=1;goto B688ba7;
case 0x688ba9:goto L688ba9;
case 0x688bac:c.instructions+=1;goto B688bac;
case 0x688bb1:goto L688bb1;
case 0x688bb6:c.instructions+=2;goto B688bb6;
case 0x688bb7:c.instructions+=1;goto B688bb7;
case 0x688bb9:goto L688bb9;
case 0x688bba:c.instructions+=10;goto B688bba;
case 0x688bbd:c.instructions+=9;goto B688bbd;
case 0x688bc0:c.instructions+=8;goto B688bc0;
case 0x688bc2:c.instructions+=7;goto B688bc2;
case 0x688bc5:c.instructions+=6;goto B688bc5;
case 0x688bca:c.instructions+=5;goto B688bca;
case 0x688bcf:c.instructions+=4;goto B688bcf;
case 0x688bd2:c.instructions+=3;goto B688bd2;
case 0x688bd3:c.instructions+=2;goto B688bd3;
case 0x688bd4:c.instructions+=1;goto B688bd4;
case 0x688bd9:goto L688bd9;
case 0x688bdc:goto L688bdc;
case 0x688be1:c.instructions+=1;goto B688be1;
case 0x688be6:goto L688be6;
case 0x688be9:c.instructions+=2;goto B688be9;
case 0x688bec:c.instructions+=1;goto B688bec;
case 0x688bf0:goto L688bf0;
case 0x688bf3:c.instructions+=2;goto B688bf3;
case 0x688bf7:c.instructions+=1;goto B688bf7;
case 0x688bf9:goto L688bf9;
case 0x688bfd:goto L688bfd;
case 0x688c00:c.instructions+=2;goto B688c00;
case 0x688c02:c.instructions+=1;goto B688c02;
case 0x688c04:goto L688c04;
case 0x688c07:c.instructions+=1;goto B688c07;
case 0x688c09:goto L688c09;
case 0x688c0d:c.instructions+=1;goto B688c0d;
case 0x688c0f:goto L688c0f;
case 0x688c12:c.instructions+=4;goto B688c12;
case 0x688c13:c.instructions+=3;goto B688c13;
case 0x688c16:c.instructions+=2;goto B688c16;
case 0x688c19:c.instructions+=1;goto B688c19;
case 0x688c1e:goto L688c1e;
case 0x688c20:c.instructions+=1;goto B688c20;
case 0x688c26:goto L688c26;
case 0x688c29:c.instructions+=3;goto B688c29;
case 0x688c2c:c.instructions+=2;goto B688c2c;
case 0x688c30:c.instructions+=1;goto B688c30;
case 0x688c32:goto L688c32;
case 0x688c36:c.instructions+=1;goto B688c36;
case 0x688c38:goto L688c38;
case 0x688c3b:c.instructions+=9;goto B688c3b;
case 0x688c3e:c.instructions+=8;goto B688c3e;
case 0x688c40:c.instructions+=7;goto B688c40;
case 0x688c43:c.instructions+=6;goto B688c43;
case 0x688c48:c.instructions+=5;goto B688c48;
case 0x688c4d:c.instructions+=4;goto B688c4d;
case 0x688c50:c.instructions+=3;goto B688c50;
case 0x688c51:c.instructions+=2;goto B688c51;
case 0x688c52:c.instructions+=1;goto B688c52;
case 0x688c57:goto L688c57;
case 0x688c5a:c.instructions+=1;goto B688c5a;
case 0x688c5c:goto L688c5c;
case 0x688c5e:c.instructions+=1;goto B688c5e;
case 0x688c60:goto L688c60;
case 0x688c63:goto L688c63;
case 0x688c66:c.instructions+=6;goto B688c66;
case 0x688c67:c.instructions+=5;goto B688c67;
case 0x688c68:c.instructions+=4;goto B688c68;
case 0x688c6b:c.instructions+=3;goto B688c6b;
case 0x688c6e:c.instructions+=2;goto B688c6e;
case 0x688c71:c.instructions+=1;goto B688c71;
case 0x688c76:goto L688c76;
case 0x688c78:goto L688c78;
case 0x688c7b:c.instructions+=6;goto B688c7b;
case 0x688c7c:c.instructions+=5;goto B688c7c;
case 0x688c7d:c.instructions+=4;goto B688c7d;
case 0x688c7f:c.instructions+=3;goto B688c7f;
case 0x688c82:c.instructions+=2;goto B688c82;
case 0x688c85:c.instructions+=1;goto B688c85;
case 0x688c8a:goto L688c8a;
case 0x688c8c:c.instructions+=1;goto B688c8c;
case 0x688c8e:goto L688c8e;
case 0x688c91:c.instructions+=6;goto B688c91;
case 0x688c94:c.instructions+=5;goto B688c94;
case 0x688c95:c.instructions+=4;goto B688c95;
case 0x688c97:c.instructions+=3;goto B688c97;
case 0x688c99:c.instructions+=2;goto B688c99;
case 0x688c9a:c.instructions+=1;goto B688c9a;
case 0x688c9f:goto L688c9f;
case 0x688ca1:c.instructions+=1;goto B688ca1;
case 0x688ca3:goto L688ca3;
case 0x688ca8:c.instructions+=3;goto B688ca8;
case 0x688cab:c.instructions+=2;goto B688cab;
case 0x688cae:c.instructions+=1;goto B688cae;
case 0x688cb0:goto L688cb0;
case 0x688cb4:c.instructions+=1;goto B688cb4;
case 0x688cb6:goto L688cb6;
case 0x688cbb:c.instructions+=6;goto B688cbb;
case 0x688cbe:c.instructions+=5;goto B688cbe;
case 0x688cc0:c.instructions+=4;goto B688cc0;
case 0x688cc3:c.instructions+=3;goto B688cc3;
case 0x688cc6:c.instructions+=2;goto B688cc6;
case 0x688cc7:c.instructions+=1;goto B688cc7;
case 0x688ccb:goto L688ccb;
case 0x688ccf:c.instructions+=3;goto B688ccf;
case 0x688cd3:c.instructions+=2;goto B688cd3;
case 0x688cd7:c.instructions+=1;goto B688cd7;
case 0x688cdb:goto L688cdb;
case 0x688cdc:c.instructions+=4;goto B688cdc;
case 0x688cdd:c.instructions+=3;goto B688cdd;
case 0x688cde:c.instructions+=2;goto B688cde;
case 0x688cdf:c.instructions+=1;goto B688cdf;
case 0x688ce2:goto L688ce2;
case 0x688ce4:c.instructions+=8;goto B688ce4;
case 0x688ce5:c.instructions+=7;goto B688ce5;
case 0x688ce7:c.instructions+=6;goto B688ce7;
case 0x688cea:c.instructions+=5;goto B688cea;
case 0x688cec:c.instructions+=4;goto B688cec;
case 0x688cef:c.instructions+=3;goto B688cef;
case 0x688cf1:c.instructions+=2;goto B688cf1;
case 0x688cf2:c.instructions+=1;goto B688cf2;
case 0x688cf4:goto L688cf4;
case 0x688cf6:c.instructions+=1;goto B688cf6;
case 0x688cf8:goto L688cf8;
case 0x688cfb:c.instructions+=6;goto B688cfb;
case 0x688cfd:c.instructions+=5;goto B688cfd;
case 0x688d00:c.instructions+=4;goto B688d00;
case 0x688d01:c.instructions+=3;goto B688d01;
case 0x688d04:c.instructions+=2;goto B688d04;
case 0x688d08:c.instructions+=1;goto B688d08;
case 0x688d0a:goto L688d0a;
case 0x688d0c:c.instructions+=1;goto B688d0c;
case 0x688d0e:goto L688d0e;
case 0x688d0f:c.instructions+=3;goto B688d0f;
case 0x688d13:c.instructions+=2;goto B688d13;
case 0x688d15:c.instructions+=1;goto B688d15;
case 0x688d17:goto L688d17;
case 0x688d19:goto L688d19;
case 0x688d1a:goto L688d1a;
case 0x688d1d:c.instructions+=2;goto B688d1d;
case 0x688d1e:c.instructions+=1;goto B688d1e;
case 0x688d23:goto L688d23;
case 0x688d26:c.instructions+=3;goto B688d26;
case 0x688d28:c.instructions+=2;goto B688d28;
case 0x688d29:c.instructions+=1;goto B688d29;
case 0x688d2c:goto L688d2c;
case 0x688d2e:c.instructions+=8;goto B688d2e;
case 0x688d2f:c.instructions+=7;goto B688d2f;
case 0x688d31:c.instructions+=6;goto B688d31;
case 0x688d32:c.instructions+=5;goto B688d32;
case 0x688d34:c.instructions+=4;goto B688d34;
case 0x688d37:c.instructions+=3;goto B688d37;
case 0x688d38:c.instructions+=2;goto B688d38;
case 0x688d39:c.instructions+=1;goto B688d39;
case 0x688d3b:goto L688d3b;
case 0x688d3e:goto L688d3e;
case 0x688d40:c.instructions+=5;goto B688d40;
case 0x688d42:c.instructions+=4;goto B688d42;
case 0x688d45:c.instructions+=3;goto B688d45;
case 0x688d47:c.instructions+=2;goto B688d47;
case 0x688d49:c.instructions+=1;goto B688d49;
case 0x688d4b:goto L688d4b;
case 0x688d4d:c.instructions+=2;goto B688d4d;
case 0x688d4f:c.instructions+=1;goto B688d4f;
case 0x688d51:goto L688d51;
case 0x688d53:c.instructions+=5;goto B688d53;
case 0x688d55:c.instructions+=4;goto B688d55;
case 0x688d58:c.instructions+=3;goto B688d58;
case 0x688d5b:c.instructions+=2;goto B688d5b;
case 0x688d5d:c.instructions+=1;goto B688d5d;
case 0x688d5f:goto L688d5f;
case 0x688d60:c.instructions+=2;goto B688d60;
case 0x688d62:c.instructions+=1;goto B688d62;
case 0x688d64:goto L688d64;
case 0x688d66:c.instructions+=5;goto B688d66;
case 0x688d68:c.instructions+=4;goto B688d68;
case 0x688d6b:c.instructions+=3;goto B688d6b;
case 0x688d6d:c.instructions+=2;goto B688d6d;
case 0x688d6f:c.instructions+=1;goto B688d6f;
case 0x688d71:goto L688d71;
case 0x688d74:c.instructions+=1;goto B688d74;
case 0x688d76:goto L688d76;
case 0x688d77:c.instructions+=2;goto B688d77;
case 0x688d7a:c.instructions+=1;goto B688d7a;
case 0x688d7c:goto L688d7c;
case 0x688d7e:goto L688d7e;
case 0x688d7f:c.instructions+=4;goto B688d7f;
case 0x688d80:c.instructions+=3;goto B688d80;
case 0x688d81:c.instructions+=2;goto B688d81;
case 0x688d82:c.instructions+=1;goto B688d82;
case 0x688d85:goto L688d85;
case 0x688d8a:c.instructions+=1;goto B688d8a;
case 0x688d8c:goto L688d8c;
case 0x688d8e:c.instructions+=9;goto B688d8e;
case 0x688d8f:c.instructions+=8;goto B688d8f;
case 0x688d91:c.instructions+=7;goto B688d91;
case 0x688d94:c.instructions+=6;goto B688d94;
case 0x688d96:c.instructions+=5;goto B688d96;
case 0x688d98:c.instructions+=4;goto B688d98;
case 0x688d9b:c.instructions+=3;goto B688d9b;
case 0x688d9d:c.instructions+=2;goto B688d9d;
case 0x688d9f:c.instructions+=1;goto B688d9f;
case 0x688da1:goto L688da1;
case 0x688da6:c.instructions+=1;goto B688da6;
case 0x688da8:goto L688da8;
case 0x688daa:c.instructions+=4;goto B688daa;
case 0x688dad:c.instructions+=3;goto B688dad;
case 0x688db0:c.instructions+=2;goto B688db0;
case 0x688db2:c.instructions+=1;goto B688db2;
case 0x688db4:goto L688db4;
case 0x688db7:c.instructions+=1;goto B688db7;
case 0x688db9:goto L688db9;
case 0x688dbc:c.instructions+=1;goto B688dbc;
case 0x688dbe:goto L688dbe;
case 0x688dc1:c.instructions+=1;goto B688dc1;
case 0x688dc3:goto L688dc3;
case 0x688dc5:goto L688dc5;
case 0x688dc6:c.instructions+=1;goto B688dc6;
case 0x688dc9:goto L688dc9;
case 0x688dcb:c.instructions+=9;goto B688dcb;
case 0x688dcc:c.instructions+=8;goto B688dcc;
case 0x688dce:c.instructions+=7;goto B688dce;
case 0x688dcf:c.instructions+=6;goto B688dcf;
case 0x688dd0:c.instructions+=5;goto B688dd0;
case 0x688dd3:c.instructions+=4;goto B688dd3;
case 0x688dd5:c.instructions+=3;goto B688dd5;
case 0x688dda:c.instructions+=2;goto B688dda;
case 0x688ddb:c.instructions+=1;goto B688ddb;
case 0x688de1:goto L688de1;
case 0x688de6:c.instructions+=1;goto B688de6;
case 0x688de8:goto L688de8;
case 0x688ded:c.instructions+=1;goto B688ded;
case 0x688def:goto L688def;
case 0x688df2:c.instructions+=5;goto B688df2;
case 0x688df4:c.instructions+=4;goto B688df4;
case 0x688df5:c.instructions+=3;goto B688df5;
case 0x688dfa:c.instructions+=2;goto B688dfa;
case 0x688dfb:c.instructions+=1;goto B688dfb;
case 0x688e00:goto L688e00;
case 0x688e02:c.instructions+=1;goto B688e02;
case 0x688e04:goto L688e04;
case 0x688e07:c.instructions+=1;goto B688e07;
case 0x688e09:goto L688e09;
case 0x688e0c:c.instructions+=5;goto B688e0c;
case 0x688e0e:c.instructions+=4;goto B688e0e;
case 0x688e0f:c.instructions+=3;goto B688e0f;
case 0x688e14:c.instructions+=2;goto B688e14;
case 0x688e15:c.instructions+=1;goto B688e15;
case 0x688e1a:goto L688e1a;
case 0x688e1c:c.instructions+=1;goto B688e1c;
case 0x688e1e:goto L688e1e;
case 0x688e21:c.instructions+=1;goto B688e21;
case 0x688e23:goto L688e23;
case 0x688e25:c.instructions+=2;goto B688e25;
case 0x688e27:c.instructions+=1;goto B688e27;
case 0x688e29:goto L688e29;
case 0x688e2c:c.instructions+=1;goto B688e2c;
case 0x688e2e:goto L688e2e;
case 0x688e30:c.instructions+=4;goto B688e30;
case 0x688e33:c.instructions+=3;goto B688e33;
case 0x688e35:c.instructions+=2;goto B688e35;
case 0x688e37:c.instructions+=1;goto B688e37;
case 0x688e39:goto L688e39;
case 0x688e3b:goto L688e3b;
case 0x688e3e:goto L688e3e;
case 0x688e41:c.instructions+=7;goto B688e41;
case 0x688e43:c.instructions+=6;goto B688e43;
case 0x688e46:c.instructions+=5;goto B688e46;
case 0x688e49:c.instructions+=4;goto B688e49;
case 0x688e4c:c.instructions+=3;goto B688e4c;
case 0x688e4d:c.instructions+=2;goto B688e4d;
case 0x688e4e:c.instructions+=1;goto B688e4e;
case 0x688e53:goto L688e53;
case 0x688e55:c.instructions+=1;goto B688e55;
case 0x688e57:goto L688e57;
case 0x688e5a:c.instructions+=2;goto B688e5a;
case 0x688e5b:c.instructions+=1;goto B688e5b;
case 0x688e60:goto L688e60;
case 0x688e62:c.instructions+=1;goto B688e62;
case 0x688e64:goto L688e64;
case 0x688e65:c.instructions+=2;goto B688e65;
case 0x688e67:c.instructions+=1;goto B688e67;
case 0x688e69:goto L688e69;
case 0x688e6b:c.instructions+=1;goto B688e6b;
case 0x688e6d:goto L688e6d;
case 0x688e72:goto L688e72;
case 0x688e73:c.instructions+=4;goto B688e73;
case 0x688e74:c.instructions+=3;goto B688e74;
case 0x688e75:c.instructions+=2;goto B688e75;
case 0x688e76:c.instructions+=1;goto B688e76;
case 0x688e79:goto L688e79;
case 0x688e7b:c.instructions+=13;goto B688e7b;
case 0x688e7c:c.instructions+=12;goto B688e7c;
case 0x688e7e:c.instructions+=11;goto B688e7e;
case 0x688e84:c.instructions+=10;goto B688e84;
case 0x688e87:c.instructions+=9;goto B688e87;
case 0x688e89:c.instructions+=8;goto B688e89;
case 0x688e8c:c.instructions+=7;goto B688e8c;
case 0x688e90:c.instructions+=6;goto B688e90;
case 0x688e93:c.instructions+=5;goto B688e93;
case 0x688e95:c.instructions+=4;goto B688e95;
case 0x688e98:c.instructions+=3;goto B688e98;
case 0x688e9a:c.instructions+=2;goto B688e9a;
case 0x688e9d:c.instructions+=1;goto B688e9d;
case 0x688ea3:goto L688ea3;
case 0x688ea4:c.instructions+=3;goto B688ea4;
case 0x688ea5:c.instructions+=2;goto B688ea5;
case 0x688ea6:c.instructions+=1;goto B688ea6;
case 0x688ea8:goto L688ea8;
case 0x688eab:goto L688eab;
case 0x688ead:c.instructions+=9;goto B688ead;
case 0x688eb0:c.instructions+=8;goto B688eb0;
case 0x688eb2:c.instructions+=7;goto B688eb2;
case 0x688eb5:c.instructions+=6;goto B688eb5;
case 0x688eb8:c.instructions+=5;goto B688eb8;
case 0x688ebe:c.instructions+=4;goto B688ebe;
case 0x688ec0:c.instructions+=3;goto B688ec0;
case 0x688ec2:c.instructions+=2;goto B688ec2;
case 0x688ec5:c.instructions+=1;goto B688ec5;
case 0x688ecb:goto L688ecb;
case 0x688ecd:c.instructions+=4;goto B688ecd;
case 0x688ed0:c.instructions+=3;goto B688ed0;
case 0x688ed2:c.instructions+=2;goto B688ed2;
case 0x688ed4:c.instructions+=1;goto B688ed4;
case 0x688eda:goto L688eda;
case 0x688edd:goto L688edd;
case 0x688edf:c.instructions+=7;goto B688edf;
case 0x688ee2:c.instructions+=6;goto B688ee2;
case 0x688ee4:c.instructions+=5;goto B688ee4;
case 0x688ee7:c.instructions+=4;goto B688ee7;
case 0x688eea:c.instructions+=3;goto B688eea;
case 0x688eed:c.instructions+=2;goto B688eed;
case 0x688ef0:c.instructions+=1;goto B688ef0;
case 0x688ef2:goto L688ef2;
case 0x688ef7:c.instructions+=2;goto B688ef7;
case 0x688efe:c.instructions+=1;goto B688efe;
case 0x688f03:goto L688f03;
case 0x688f06:goto L688f06;
case 0x688f09:c.instructions+=1;goto B688f09;
case 0x688f0b:goto L688f0b;
case 0x688f0d:c.instructions+=4;goto B688f0d;
case 0x688f10:c.instructions+=3;goto B688f10;
case 0x688f13:c.instructions+=2;goto B688f13;
case 0x688f17:c.instructions+=1;goto B688f17;
case 0x688f19:goto L688f19;
case 0x688f1c:c.instructions+=1;goto B688f1c;
case 0x688f1e:goto L688f1e;
case 0x688f21:c.instructions+=2;goto B688f21;
case 0x688f24:c.instructions+=1;goto B688f24;
case 0x688f26:goto L688f26;
case 0x688f29:c.instructions+=1;goto B688f29;
case 0x688f2b:goto L688f2b;
case 0x688f2e:c.instructions+=2;goto B688f2e;
case 0x688f31:c.instructions+=1;goto B688f31;
case 0x688f33:goto L688f33;
case 0x688f36:c.instructions+=1;goto B688f36;
case 0x688f38:goto L688f38;
case 0x688f3b:c.instructions+=2;goto B688f3b;
case 0x688f3e:c.instructions+=1;goto B688f3e;
case 0x688f40:goto L688f40;
case 0x688f43:c.instructions+=1;goto B688f43;
case 0x688f45:goto L688f45;
case 0x688f48:c.instructions+=2;goto B688f48;
case 0x688f4b:c.instructions+=1;goto B688f4b;
case 0x688f4d:goto L688f4d;
case 0x688f50:c.instructions+=1;goto B688f50;
case 0x688f52:goto L688f52;
case 0x688f55:c.instructions+=1;goto B688f55;
case 0x688f58:goto L688f58;
case 0x688f5b:goto L688f5b;
case 0x688f60:goto L688f60;
case 0x688f63:goto L688f63;
case 0x688f66:c.instructions+=1;goto B688f66;
case 0x688f6c:goto L688f6c;
case 0x688f6e:c.instructions+=7;goto B688f6e;
case 0x688f71:c.instructions+=6;goto B688f71;
case 0x688f73:c.instructions+=5;goto B688f73;
case 0x688f76:c.instructions+=4;goto B688f76;
case 0x688f79:c.instructions+=3;goto B688f79;
case 0x688f7c:c.instructions+=2;goto B688f7c;
case 0x688f7f:c.instructions+=1;goto B688f7f;
case 0x688f81:goto L688f81;
case 0x688f86:c.instructions+=2;goto B688f86;
case 0x688f8d:c.instructions+=1;goto B688f8d;
case 0x688f8f:goto L688f8f;
case 0x688f92:c.instructions+=1;goto B688f92;
case 0x688f94:goto L688f94;
case 0x688f97:c.instructions+=2;goto B688f97;
case 0x688f9a:c.instructions+=1;goto B688f9a;
case 0x688f9c:goto L688f9c;
case 0x688f9f:c.instructions+=1;goto B688f9f;
case 0x688fa1:goto L688fa1;
case 0x688fa4:c.instructions+=2;goto B688fa4;
case 0x688fa7:c.instructions+=1;goto B688fa7;
case 0x688fa9:goto L688fa9;
case 0x688fac:c.instructions+=1;goto B688fac;
case 0x688fae:goto L688fae;
case 0x688fb0:c.instructions+=5;goto B688fb0;
case 0x688fb3:c.instructions+=4;goto B688fb3;
case 0x688fb6:c.instructions+=3;goto B688fb6;
case 0x688fba:c.instructions+=2;goto B688fba;
case 0x688fbd:c.instructions+=1;goto B688fbd;
case 0x688fbf:goto L688fbf;
case 0x688fc2:c.instructions+=1;goto B688fc2;
case 0x688fc4:goto L688fc4;
case 0x688fc7:c.instructions+=3;goto B688fc7;
case 0x688fca:c.instructions+=2;goto B688fca;
case 0x688fcd:c.instructions+=1;goto B688fcd;
case 0x688fcf:goto L688fcf;
case 0x688fd2:c.instructions+=1;goto B688fd2;
case 0x688fd4:goto L688fd4;
case 0x688fd7:c.instructions+=2;goto B688fd7;
case 0x688fda:c.instructions+=1;goto B688fda;
case 0x688fdc:goto L688fdc;
case 0x688fdf:c.instructions+=1;goto B688fdf;
case 0x688fe1:goto L688fe1;
case 0x688fe4:c.instructions+=2;goto B688fe4;
case 0x688fe7:c.instructions+=1;goto B688fe7;
case 0x688fe9:goto L688fe9;
case 0x688fec:c.instructions+=1;goto B688fec;
case 0x688fee:goto L688fee;
case 0x688ff1:c.instructions+=1;goto B688ff1;
case 0x688ff4:goto L688ff4;
case 0x688ff7:goto L688ff7;
case 0x688ffe:goto L688ffe;
case 0x688fff:c.instructions+=1;goto B688fff;
default:missing_instruction(c.pc);}
B688004:L688004:{c.instructions+=1;NFSU2_TR(0x688004);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6880e0;}}
}
B68800a:L68800a:{c.instructions+=6;NFSU2_TR(0x68800a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68800b:{NFSU2_TR(0x68800b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68800c:{NFSU2_TR(0x68800c);
__builtin_memmove(gp(0x8a68cc),(R+0),4);
}
B688011:{NFSU2_TR(0x688011);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+0)),r2(U+0));
}
B688014:{NFSU2_TR(0x688014);
__builtin_memmove((R+0),gp(0x8a68c4),4);
}
B688019:{NFSU2_TR(0x688019);
{goto L6880be;}
}
B68801e:L68801e:{c.instructions+=2;NFSU2_TR(0x68801e);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a68d4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688025:{NFSU2_TR(0x688025);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688044;}}
}
B688027:L688027:{c.instructions+=3;NFSU2_TR(0x688027);
u8 U[4];
w4(U+0,u32(0x7ab74cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68802c:{NFSU2_TR(0x68802c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a68e0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688032:{NFSU2_TR(0x688032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688037ull));
TAIL_STATIC(0x684ffdu,684);
}
B688037:L688037:{c.instructions+=4;NFSU2_TR(0x688037);
s4(0x8a68d8,u32(u32(m4(0x8a68d8))+u32(u32(0x1ull))));
}
B68803d:{NFSU2_TR(0x68803d);
__builtin_memmove((R+0),gp(0x8a68d0),4);
}
B688042:{NFSU2_TR(0x688042);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688043:{NFSU2_TR(0x688043);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688044:L688044:{c.instructions+=4;NFSU2_TR(0x688044);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688046:{NFSU2_TR(0x688046);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688047:{NFSU2_TR(0x688047);
u8 U[8];
__builtin_memmove((U+0),gp(0x8a68d4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68804d:{NFSU2_TR(0x68804d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6880d7;}}
}
B688053:L688053:{c.instructions+=3;NFSU2_TR(0x688053);
__builtin_memmove(gp(0x8a68d4),(R+4),4);
}
B688059:{NFSU2_TR(0x688059);
__builtin_memmove((R+4),gp(0x8a68cc),4);
}
B68805f:{NFSU2_TR(0x68805f);
w4(R+8,u32(0x100ull));
}
B688064:L688064:{c.instructions+=4;NFSU2_TR(0x688064);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+0,u32(s32(s16(r2(U+0)))));
}
B688067:{NFSU2_TR(0x688067);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x80a3c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(s32(s16(r2(U+8)))));
}
B68806f:{NFSU2_TR(0x68806f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688071:{NFSU2_TR(0x688071);
if(r1(R+518)){{goto L688085;}}
}
B688073:L688073:{c.instructions+=2;NFSU2_TR(0x688073);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B688075:{NFSU2_TR(0x688075);
if(r1(R+519)){{goto L688085;}}
}
B688077:L688077:{c.instructions+=2;NFSU2_TR(0x688077);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688079:{NFSU2_TR(0x688079);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L688085;}}
}
B68807b:L68807b:{c.instructions+=2;NFSU2_TR(0x68807b);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x80a860ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((U+10),(U+8),2);
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+8))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
}
B688083:{NFSU2_TR(0x688083);
if(r1(R+518)){{goto L68809e;}}
}
B688085:L688085:{c.instructions+=2;NFSU2_TR(0x688085);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8a64d8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8a64d8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68808b:{NFSU2_TR(0x68808b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6880f2;}}
}
B68808d:L68808d:{c.instructions+=5;NFSU2_TR(0x68808d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B68808e:{NFSU2_TR(0x68808e);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B68808f:{NFSU2_TR(0x68808f);
s4(0x8a68c8,u32(u32(m4(0x8a68c8))-u32(u32(0x4ull))));
}
B688096:{NFSU2_TR(0x688096);
__builtin_memmove(gp(0x8a68cc),(R+4),4);
}
B68809c:{NFSU2_TR(0x68809c);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688064u);}goto L688064;}
}
B68809e:L68809e:{c.instructions+=2;NFSU2_TR(0x68809e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8a68beull))));
}
B6880a4:{NFSU2_TR(0x6880a4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6880e0;}}
}
B6880a6:L6880a6:{c.instructions+=6;NFSU2_TR(0x6880a6);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x80a610ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B6880ae:{NFSU2_TR(0x6880ae);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6880af:{NFSU2_TR(0x6880af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6880b0:{NFSU2_TR(0x6880b0);
__builtin_memmove(gp(0x8a68cc),(R+4),4);
}
B6880b6:{NFSU2_TR(0x6880b6);
u8 U[2];
__builtin_memmove((U+0),(R+24),2);
s2(u32(r4(R+4)),r2(U+0));
}
B6880b9:{NFSU2_TR(0x6880b9);
__builtin_memmove((R+0),gp(0x8a68c0),4);
}
B6880be:L6880be:{c.instructions+=5;NFSU2_TR(0x6880be);
s4(0x8a68c8,u32(u32(m4(0x8a68c8))+u32(u32(0x4ull))));
}
B6880c5:{NFSU2_TR(0x6880c5);
__builtin_memmove((R+4),gp(0x8a68c8),4);
}
B6880cb:{NFSU2_TR(0x6880cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6880cd:{NFSU2_TR(0x6880cd);
__builtin_memmove((R+0),gp(0x8a68d0),4);
}
B6880d2:{NFSU2_TR(0x6880d2);
TAIL_STATIC(0x687c40u,687);
}
B6880d7:L6880d7:{c.instructions+=2;NFSU2_TR(0x6880d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6880d9:{NFSU2_TR(0x6880d9);
if(r1(R+518)){{goto L6880f2;}}
}
B6880db:L6880db:{c.instructions+=1;NFSU2_TR(0x6880db);
TAIL_STATIC(0x687c38u,687);
}
B6880e0:L6880e0:{c.instructions+=3;NFSU2_TR(0x6880e0);
u8 U[4];
w4(U+0,u32(0x7abb00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6880e5:{NFSU2_TR(0x6880e5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8a68e0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6880eb:{NFSU2_TR(0x6880eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6880f0ull));
TAIL_STATIC(0x684ffdu,684);
}
B6880f0:L6880f0:{c.instructions+=2;NFSU2_TR(0x6880f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6880f1:{NFSU2_TR(0x6880f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6880f2:L6880f2:{c.instructions+=6;NFSU2_TR(0x6880f2);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6880f4:{NFSU2_TR(0x6880f4);
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
B6880f5:{NFSU2_TR(0x6880f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6880f6:{NFSU2_TR(0x6880f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6880f7:{NFSU2_TR(0x6880f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6880f8:{NFSU2_TR(0x6880f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6881f1:L6881f1:{c.instructions+=8;NFSU2_TR(0x6881f1);
__builtin_memmove((R+28),(R+28),4);
}
B6881f3:{NFSU2_TR(0x6881f3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6881f4:{NFSU2_TR(0x6881f4);
__builtin_memmove((R+20),(R+16),4);
}
B6881f6:{NFSU2_TR(0x6881f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6881f9:{NFSU2_TR(0x6881f9);
u8 U[18];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(u32(0xffffff3cull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B688200:{NFSU2_TR(0x688200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688201:{NFSU2_TR(0x688201);
__builtin_memmove((R+24),(R+4),4);
}
B688203:{NFSU2_TR(0x688203);
if(r1(R+518)){{goto L68820f;}}
}
B688205:L688205:{c.instructions+=2;NFSU2_TR(0x688205);
w4(R+0,u32(0x8876086cull));
}
B68820a:{NFSU2_TR(0x68820a);
{goto L6886a4;}
}
B68820f:L68820f:{c.instructions+=5;NFSU2_TR(0x68820f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688212:{NFSU2_TR(0x688212);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688213:{NFSU2_TR(0x688213);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B688215:{NFSU2_TR(0x688215);
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
B688217:{NFSU2_TR(0x688217);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688223;}}
}
B688219:L688219:{c.instructions+=2;NFSU2_TR(0x688219);
w4(R+0,u32(0x8876086cull));
}
B68821e:{NFSU2_TR(0x68821e);
{goto L6886a3;}
}
B688223:L688223:{c.instructions+=3;NFSU2_TR(0x688223);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B688225:{NFSU2_TR(0x688225);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688228:{NFSU2_TR(0x688228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68822dull));
TAIL_STATIC(0x575630u,575);
}
B68822d:L68822d:{c.instructions+=4;NFSU2_TR(0x68822d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68822e:{NFSU2_TR(0x68822e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688231:{NFSU2_TR(0x688231);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688233:{NFSU2_TR(0x688233);
if(r1(R+518)){{goto L68823c;}}
}
B688235:L688235:{c.instructions+=2;NFSU2_TR(0x688235);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688237:{NFSU2_TR(0x688237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68823cull));
TAIL_STATIC(0x686fdeu,686);
}
B68823c:L68823c:{c.instructions+=28;NFSU2_TR(0x68823c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68823f:{NFSU2_TR(0x68823f);
__builtin_memmove(gp(0x8a68e0),(R+24),4);
}
B688245:{NFSU2_TR(0x688245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B688249:{NFSU2_TR(0x688249);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68824c:{NFSU2_TR(0x68824c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B68824e:{NFSU2_TR(0x68824e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688251:{NFSU2_TR(0x688251);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688252:{NFSU2_TR(0x688252);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688255:{NFSU2_TR(0x688255);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688256:{NFSU2_TR(0x688256);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B688259:{NFSU2_TR(0x688259);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((R+28),(U+0),4);
}
B68825c:{NFSU2_TR(0x68825c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68825d:{NFSU2_TR(0x68825d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688260:{NFSU2_TR(0x688260);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688263:{NFSU2_TR(0x688263);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688266:{NFSU2_TR(0x688266);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688269:{NFSU2_TR(0x688269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68826c:{NFSU2_TR(0x68826c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68826f:{NFSU2_TR(0x68826f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688272:{NFSU2_TR(0x688272);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688275:{NFSU2_TR(0x688275);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688278:{NFSU2_TR(0x688278);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68827b:{NFSU2_TR(0x68827b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68827e:{NFSU2_TR(0x68827e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688281:{NFSU2_TR(0x688281);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B688283:{NFSU2_TR(0x688283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688286:{NFSU2_TR(0x688286);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688289:{NFSU2_TR(0x688289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68828eull));
TAIL_STATIC(0x644181u,644);
}
B68828e:L68828e:{c.instructions+=2;NFSU2_TR(0x68828e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688291:{NFSU2_TR(0x688291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6882a0;}}
}
B688293:L688293:{c.instructions+=5;NFSU2_TR(0x688293);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688296:{NFSU2_TR(0x688296);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688299:{NFSU2_TR(0x688299);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68829a:{NFSU2_TR(0x68829a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68829b:{NFSU2_TR(0x68829b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6882a0ull));
TAIL_STATIC(0x6441b0u,644);
}
B6882a0:L6882a0:{c.instructions+=3;NFSU2_TR(0x6882a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6882a3:{NFSU2_TR(0x6882a3);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6882a5:{NFSU2_TR(0x6882a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6882aaull));
TAIL_STATIC(0x64413du,644);
}
B6882aa:L6882aa:{c.instructions+=2;NFSU2_TR(0x6882aa);
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
B6882ac:{NFSU2_TR(0x6882ac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6886a2;}}
}
B6882b2:L6882b2:{c.instructions+=2;NFSU2_TR(0x6882b2);
__builtin_memmove((R+4),(R+24),4);
}
B6882b4:{NFSU2_TR(0x6882b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6882b9ull));
TAIL_STATIC(0x686fffu,686);
}
B6882b9:L6882b9:{c.instructions+=2;NFSU2_TR(0x6882b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6882bd:{NFSU2_TR(0x6882bd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6882da;}}
}
B6882bf:L6882bf:{c.instructions+=5;NFSU2_TR(0x6882bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6882c2:{NFSU2_TR(0x6882c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6882c3:{NFSU2_TR(0x6882c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6882c5:{NFSU2_TR(0x6882c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6882c8:{NFSU2_TR(0x6882c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6882cdull));
TAIL_STATIC(0x672277u,672);
}
B6882cd:L6882cd:{c.instructions+=2;NFSU2_TR(0x6882cd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6882cf:{NFSU2_TR(0x6882cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6882da;}}
}
B6882d1:L6882d1:{c.instructions+=3;NFSU2_TR(0x6882d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6882d4:{NFSU2_TR(0x6882d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6882d7:{NFSU2_TR(0x6882d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6882da:L6882da:{c.instructions+=2;NFSU2_TR(0x6882da);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6882dd:{NFSU2_TR(0x6882dd);
if(r1(R+518)){{goto L688301;}}
}
B6882df:L6882df:{c.instructions+=2;NFSU2_TR(0x6882df);
u8 U[4];
w4(U+0,u32(0x7ba904ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6882e4:{NFSU2_TR(0x6882e4);
u8 U[4];
w4(U+0,u32(0x7d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6882e9:L6882e9:{c.instructions+=4;NFSU2_TR(0x6882e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6882ec:{NFSU2_TR(0x6882ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6882ed:{NFSU2_TR(0x6882ed);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6882ef:{NFSU2_TR(0x6882ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6882f4ull));
TAIL_STATIC(0x64307cu,643);
}
B6882f4:L6882f4:{c.instructions+=1;NFSU2_TR(0x6882f4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6882f7:L6882f7:{c.instructions+=2;NFSU2_TR(0x6882f7);
w4(R+28,u32(0x88760b59ull));
}
B6882fc:{NFSU2_TR(0x6882fc);
{goto L68867d;}
}
B688301:L688301:{c.instructions+=3;NFSU2_TR(0x688301);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xfffe0100ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688308:{NFSU2_TR(0x688308);
w4(R+28,u32(0x7dfull));
}
B68830d:{NFSU2_TR(0x68830d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68832a;}}
}
B68830f:L68830f:{c.instructions+=6;NFSU2_TR(0x68830f);
u8 U[4];
w4(U+0,u32(0x7b7d28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688314:{NFSU2_TR(0x688314);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688315:{NFSU2_TR(0x688315);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688318:{NFSU2_TR(0x688318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688319:{NFSU2_TR(0x688319);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68831b:{NFSU2_TR(0x68831b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688320ull));
TAIL_STATIC(0x643143u,643);
}
B688320:L688320:{c.instructions+=2;NFSU2_TR(0x688320);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B688323:{NFSU2_TR(0x688323);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xfffe0101ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68832a:L68832a:{c.instructions+=2;NFSU2_TR(0x68832a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffff0100ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688331:{NFSU2_TR(0x688331);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68834e;}}
}
B688333:L688333:{c.instructions+=6;NFSU2_TR(0x688333);
u8 U[4];
w4(U+0,u32(0x7b7cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688338:{NFSU2_TR(0x688338);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688339:{NFSU2_TR(0x688339);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68833c:{NFSU2_TR(0x68833c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68833d:{NFSU2_TR(0x68833d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B68833f:{NFSU2_TR(0x68833f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688344ull));
TAIL_STATIC(0x643143u,643);
}
B688344:L688344:{c.instructions+=2;NFSU2_TR(0x688344);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B688347:{NFSU2_TR(0x688347);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0xffff0101ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68834e:L68834e:{c.instructions+=3;NFSU2_TR(0x68834e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffff0202ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688355:{NFSU2_TR(0x688355);
w4(R+28,u32(0xffff0201ull));
}
B68835a:{NFSU2_TR(0x68835a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68835f;}}
}
B68835c:L68835c:{c.instructions+=1;NFSU2_TR(0x68835c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68835f:L68835f:{c.instructions+=3;NFSU2_TR(0x68835f);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B688363:{NFSU2_TR(0x688363);
w4(R+0,u32(0xffff0000ull));
}
B688368:{NFSU2_TR(0x688368);
if(r1(R+518)){{goto L688377;}}
}
B68836a:L68836a:{c.instructions+=4;NFSU2_TR(0x68836a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68836d:{NFSU2_TR(0x68836d);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B68836f:{NFSU2_TR(0x68836f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffe0000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688375:{NFSU2_TR(0x688375);
if(r1(R+518)){{goto L688386;}}
}
B688377:L688377:{c.instructions+=2;NFSU2_TR(0x688377);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B68837b:{NFSU2_TR(0x68837b);
if(r1(R+518)){{goto L68838a;}}
}
B68837d:L68837d:{c.instructions+=4;NFSU2_TR(0x68837d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688380:{NFSU2_TR(0x688380);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B688382:{NFSU2_TR(0x688382);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688384:{NFSU2_TR(0x688384);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68838a;}}
}
B688386:L688386:{c.instructions+=1;NFSU2_TR(0x688386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B68838a:L68838a:{c.instructions+=4;NFSU2_TR(0x68838a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68838d:{NFSU2_TR(0x68838d);
w4(R+4,u32(0xffff0102ull));
}
B688392:{NFSU2_TR(0x688392);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688394:{NFSU2_TR(0x688394);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L68842e;}}
}
B68839a:L68839a:{c.instructions+=1;NFSU2_TR(0x68839a);
if(r1(R+518)){{goto L688425;}}
}
B6883a0:L6883a0:{c.instructions+=2;NFSU2_TR(0x6883a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883a5:{NFSU2_TR(0x6883a5);
if(r1(R+518)){{goto L68841d;}}
}
B6883a7:L6883a7:{c.instructions+=2;NFSU2_TR(0x6883a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883ac:{NFSU2_TR(0x6883ac);
if(r1(R+518)){{goto L688411;}}
}
B6883ae:L6883ae:{c.instructions+=2;NFSU2_TR(0x6883ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0201ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883b3:{NFSU2_TR(0x6883b3);
if(r1(R+518)){{goto L688405;}}
}
B6883b5:L6883b5:{c.instructions+=2;NFSU2_TR(0x6883b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe02ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883ba:{NFSU2_TR(0x6883ba);
if(r1(R+518)){{goto L6883f9;}}
}
B6883bc:L6883bc:{c.instructions+=2;NFSU2_TR(0x6883bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe0300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883c1:{NFSU2_TR(0x6883c1);
if(r1(R+518)){{goto L6883ed;}}
}
B6883c3:L6883c3:{c.instructions+=2;NFSU2_TR(0x6883c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfffe03ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883c8:{NFSU2_TR(0x6883c8);
if(r1(R+518)){{goto L6883e1;}}
}
B6883ca:L6883ca:{c.instructions+=2;NFSU2_TR(0x6883ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6883cf:{NFSU2_TR(0x6883cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68845c;}}
}
B6883d5:L6883d5:{c.instructions+=2;NFSU2_TR(0x6883d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6883dc:{NFSU2_TR(0x6883dc);
{goto L6884a8;}
}
B6883e1:L6883e1:{c.instructions+=2;NFSU2_TR(0x6883e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6883e8:{NFSU2_TR(0x6883e8);
{goto L6884a8;}
}
B6883ed:L6883ed:{c.instructions+=2;NFSU2_TR(0x6883ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6883f4:{NFSU2_TR(0x6883f4);
{goto L6884a8;}
}
B6883f9:L6883f9:{c.instructions+=2;NFSU2_TR(0x6883f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B688400:{NFSU2_TR(0x688400);
{goto L6884a8;}
}
B688405:L688405:{c.instructions+=2;NFSU2_TR(0x688405);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68840c:{NFSU2_TR(0x68840c);
{goto L6884a8;}
}
B688411:L688411:{c.instructions+=2;NFSU2_TR(0x688411);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B688418:{NFSU2_TR(0x688418);
{goto L6884a8;}
}
B68841d:L68841d:{c.instructions+=2;NFSU2_TR(0x68841d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688420:{NFSU2_TR(0x688420);
{goto L6884a8;}
}
B688425:L688425:{c.instructions+=2;NFSU2_TR(0x688425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68842c:{NFSU2_TR(0x68842c);
{goto L6884a8;}
}
B68842e:L68842e:{c.instructions+=2;NFSU2_TR(0x68842e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0103ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688433:{NFSU2_TR(0x688433);
if(r1(R+518)){{goto L6884a1;}}
}
B688435:L688435:{c.instructions+=2;NFSU2_TR(0x688435);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68843a:{NFSU2_TR(0x68843a);
if(r1(R+518)){{goto L688498;}}
}
B68843c:L68843c:{c.instructions+=2;NFSU2_TR(0x68843c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688441:{NFSU2_TR(0x688441);
if(r1(R+518)){{goto L68848f;}}
}
B688443:L688443:{c.instructions+=2;NFSU2_TR(0x688443);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688445:{NFSU2_TR(0x688445);
if(r1(R+518)){{goto L688486;}}
}
B688447:L688447:{c.instructions+=2;NFSU2_TR(0x688447);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff02ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68844c:{NFSU2_TR(0x68844c);
if(r1(R+518)){{goto L68847d;}}
}
B68844e:L68844e:{c.instructions+=2;NFSU2_TR(0x68844e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff0300ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688453:{NFSU2_TR(0x688453);
if(r1(R+518)){{goto L688474;}}
}
B688455:L688455:{c.instructions+=2;NFSU2_TR(0x688455);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffff03ffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68845a:{NFSU2_TR(0x68845a);
if(r1(R+518)){{goto L68846b;}}
}
B68845c:L68845c:{c.instructions+=3;NFSU2_TR(0x68845c);
u8 U[4];
w4(U+0,u32(0x7ba8e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688461:{NFSU2_TR(0x688461);
u8 U[4];
w4(U+0,u32(0x7d2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688466:{NFSU2_TR(0x688466);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6882e9u);}goto L6882e9;}
}
B68846b:L68846b:{c.instructions+=2;NFSU2_TR(0x68846b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B688472:{NFSU2_TR(0x688472);
{goto L6884a8;}
}
B688474:L688474:{c.instructions+=2;NFSU2_TR(0x688474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B68847b:{NFSU2_TR(0x68847b);
{goto L6884a8;}
}
B68847d:L68847d:{c.instructions+=2;NFSU2_TR(0x68847d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B688484:{NFSU2_TR(0x688484);
{goto L6884a8;}
}
B688486:L688486:{c.instructions+=2;NFSU2_TR(0x688486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B68848d:{NFSU2_TR(0x68848d);
{goto L6884a8;}
}
B68848f:L68848f:{c.instructions+=2;NFSU2_TR(0x68848f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B688496:{NFSU2_TR(0x688496);
{goto L6884a8;}
}
B688498:L688498:{c.instructions+=2;NFSU2_TR(0x688498);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B68849f:{NFSU2_TR(0x68849f);
{goto L6884a8;}
}
B6884a1:L6884a1:{c.instructions+=1;NFSU2_TR(0x6884a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6884a8:L6884a8:{c.instructions+=3;NFSU2_TR(0x6884a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6884ab:{NFSU2_TR(0x6884ab);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6884ad:{NFSU2_TR(0x6884ad);
if(r1(R+518)){{goto L68853d;}}
}
B6884b3:L6884b3:{c.instructions+=4;NFSU2_TR(0x6884b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x2ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6884b7:{NFSU2_TR(0x6884b7);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6884bc:{NFSU2_TR(0x6884bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6884bf:{NFSU2_TR(0x6884bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6884c4ull));
TAIL_STATIC(0x575620u,575);
}
B6884c4:L6884c4:{c.instructions+=3;NFSU2_TR(0x6884c4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6884c6:{NFSU2_TR(0x6884c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6884c7:{NFSU2_TR(0x6884c7);
if(r1(R+518)){{goto L6884d5;}}
}
B6884c9:L6884c9:{c.instructions+=3;NFSU2_TR(0x6884c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6884cc:{NFSU2_TR(0x6884cc);
__builtin_memmove((R+4),(R+0),4);
}
B6884ce:{NFSU2_TR(0x6884ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6884d3ull));
TAIL_STATIC(0x686bb0u,686);
}
B6884d3:L6884d3:{c.instructions+=1;NFSU2_TR(0x6884d3);
{goto L6884d7;}
}
B6884d5:L6884d5:{c.instructions+=1;NFSU2_TR(0x6884d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6884d7:L6884d7:{c.instructions+=3;NFSU2_TR(0x6884d7);
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
B6884d9:{NFSU2_TR(0x6884d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6884dc:{NFSU2_TR(0x6884dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6884e8;}}
}
B6884de:L6884de:{c.instructions+=2;NFSU2_TR(0x6884de);
w4(R+0,u32(0x8007000eull));
}
B6884e3:{NFSU2_TR(0x6884e3);
{goto L6886a2;}
}
B6884e8:L6884e8:{c.instructions+=3;NFSU2_TR(0x6884e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6884eb:{NFSU2_TR(0x6884eb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6884ed:{NFSU2_TR(0x6884ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688510;}}
}
B6884ef:L6884ef:{c.instructions+=2;NFSU2_TR(0x6884ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6884f2:{NFSU2_TR(0x6884f2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L688510;}}
}
B6884f4:L6884f4:{c.instructions+=2;NFSU2_TR(0x6884f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6884f8:{NFSU2_TR(0x6884f8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7ffe00ull))));
}
B6884fd:L6884fd:{c.instructions+=6;NFSU2_TR(0x6884fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688500:{NFSU2_TR(0x688500);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B688503:{NFSU2_TR(0x688503);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B688509:{NFSU2_TR(0x688509);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B68850b:{NFSU2_TR(0x68850b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68850e:{NFSU2_TR(0x68850e);
{goto L68853d;}
}
B688510:L688510:{c.instructions+=2;NFSU2_TR(0x688510);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B688513:{NFSU2_TR(0x688513);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688525;}}
}
B688515:L688515:{c.instructions+=2;NFSU2_TR(0x688515);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688518:{NFSU2_TR(0x688518);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L688525;}}
}
B68851a:L68851a:{c.instructions+=3;NFSU2_TR(0x68851a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B68851e:{NFSU2_TR(0x68851e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x7fff00ull))));
}
B688523:{NFSU2_TR(0x688523);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6884fdu);}goto L6884fd;}
}
B688525:L688525:{c.instructions+=6;NFSU2_TR(0x688525);
u8 U[4];
w4(U+0,u32(0x7ba880ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68852a:{NFSU2_TR(0x68852a);
u8 U[4];
w4(U+0,u32(0x7d1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68852f:{NFSU2_TR(0x68852f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688532:{NFSU2_TR(0x688532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688533:{NFSU2_TR(0x688533);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B688535:{NFSU2_TR(0x688535);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68853aull));
TAIL_STATIC(0x64307cu,643);
}
B68853a:L68853a:{c.instructions+=1;NFSU2_TR(0x68853a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B68853d:L68853d:{c.instructions+=2;NFSU2_TR(0x68853d);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B688541:{NFSU2_TR(0x688541);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68858e;}}
}
B688543:L688543:{c.instructions+=3;NFSU2_TR(0x688543);
w4(R+28,u32(0x7b72a4ull));
}
B688548:{NFSU2_TR(0x688548);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688549:{NFSU2_TR(0x688549);
u8 U[4];
__builtin_memmove((U+0),gp(0x783138),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68854full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B68854f:L68854f:{c.instructions+=2;NFSU2_TR(0x68854f);
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
B688551:{NFSU2_TR(0x688551);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68855e;}}
}
B688553:L688553:{c.instructions+=2;NFSU2_TR(0x688553);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688554:{NFSU2_TR(0x688554);
u8 U[4];
__builtin_memmove((U+0),gp(0x783198),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68855aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B68855a:L68855a:{c.instructions+=2;NFSU2_TR(0x68855a);
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
B68855c:{NFSU2_TR(0x68855c);
if(r1(R+518)){{goto L68858e;}}
}
B68855e:L68855e:{c.instructions+=3;NFSU2_TR(0x68855e);
u8 U[4];
w4(U+0,u32(0x7ba85cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688563:{NFSU2_TR(0x688563);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688564:{NFSU2_TR(0x688564);
u8 U[4];
__builtin_memmove((U+0),gp(0x783194),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68856aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B68856a:L68856a:{c.instructions+=2;NFSU2_TR(0x68856a);
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
B68856c:{NFSU2_TR(0x68856c);
if(r1(R+518)){{goto L68858e;}}
}
B68856e:L68856e:{c.instructions+=1;NFSU2_TR(0x68856e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688570ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B688570:L688570:{c.instructions+=3;NFSU2_TR(0x688570);
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
B688572:{NFSU2_TR(0x688572);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688575:{NFSU2_TR(0x688575);
if(r1(R+518)){{goto L68858e;}}
}
B688577:L688577:{c.instructions+=6;NFSU2_TR(0x688577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688579:{NFSU2_TR(0x688579);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68857a:{NFSU2_TR(0x68857a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68857b:{NFSU2_TR(0x68857b);
u8 U[4];
w4(U+0,u32(0x6850bdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688580:{NFSU2_TR(0x688580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688581:{NFSU2_TR(0x688581);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688584ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B688584:L688584:{c.instructions+=3;NFSU2_TR(0x688584);
__builtin_memmove((R+28),(R+0),4);
}
B688586:{NFSU2_TR(0x688586);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B688588:{NFSU2_TR(0x688588);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B68858e:L68858e:{c.instructions+=3;NFSU2_TR(0x68858e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688591:{NFSU2_TR(0x688591);
__builtin_memmove((R+4),(R+24),4);
}
B688593:{NFSU2_TR(0x688593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688598ull));
TAIL_STATIC(0x685c9du,685);
}
B688598:L688598:{c.instructions+=3;NFSU2_TR(0x688598);
__builtin_memmove((R+28),(R+0),4);
}
B68859a:{NFSU2_TR(0x68859a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68859c:{NFSU2_TR(0x68859c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B6885a2:L6885a2:{c.instructions+=4;NFSU2_TR(0x6885a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6885a5:{NFSU2_TR(0x6885a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6885a6:{NFSU2_TR(0x6885a6);
__builtin_memmove((R+4),(R+24),4);
}
B6885a8:{NFSU2_TR(0x6885a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6885adull));
TAIL_STATIC(0x685bb7u,685);
}
B6885ad:L6885ad:{c.instructions+=3;NFSU2_TR(0x6885ad);
__builtin_memmove((R+28),(R+0),4);
}
B6885af:{NFSU2_TR(0x6885af);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6885b1:{NFSU2_TR(0x6885b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B6885b7:L6885b7:{c.instructions+=2;NFSU2_TR(0x6885b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6885ba:{NFSU2_TR(0x6885ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6882f7u);}goto L6882f7;}}
}
B6885c0:L6885c0:{c.instructions+=1;NFSU2_TR(0x6885c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6885c5ull));
TAIL_STATIC(0x687c0au,687);
}
B6885c5:L6885c5:{c.instructions+=2;NFSU2_TR(0x6885c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6885c7:{NFSU2_TR(0x6885c7);
if(r1(R+518)){{goto L6885d0;}}
}
B6885c9:L6885c9:{c.instructions+=1;NFSU2_TR(0x6885c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6885d0:L6885d0:{c.instructions+=2;NFSU2_TR(0x6885d0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6885d3:{NFSU2_TR(0x6885d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6882f7u);}goto L6882f7;}}
}
B6885d9:L6885d9:{c.instructions+=2;NFSU2_TR(0x6885d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6885dc:{NFSU2_TR(0x6885dc);
if(r1(R+518)){{goto L688603;}}
}
B6885de:L6885de:{c.instructions+=5;NFSU2_TR(0x6885de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6885e1:{NFSU2_TR(0x6885e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6885e2:{NFSU2_TR(0x6885e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6885e5:{NFSU2_TR(0x6885e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6885e6:{NFSU2_TR(0x6885e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6885ebull));
TAIL_STATIC(0x6441b0u,644);
}
B6885eb:L6885eb:{c.instructions+=4;NFSU2_TR(0x6885eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6885ee:{NFSU2_TR(0x6885ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6885f1:{NFSU2_TR(0x6885f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6885f3:{NFSU2_TR(0x6885f3);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L688603;}}
}
B6885f5:L6885f5:{c.instructions+=4;NFSU2_TR(0x6885f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6885f8:{NFSU2_TR(0x6885f8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6885fa:{NFSU2_TR(0x6885fa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6885fc:{NFSU2_TR(0x6885fc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688603;}}
}
B6885fe:L6885fe:{c.instructions+=2;NFSU2_TR(0x6885fe);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B688600:{NFSU2_TR(0x688600);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688603:L688603:{c.instructions+=2;NFSU2_TR(0x688603);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688606:{NFSU2_TR(0x688606);
if(r1(R+518)){{goto L688615;}}
}
B688608:L688608:{c.instructions+=2;NFSU2_TR(0x688608);
__builtin_memmove((R+4),(R+24),4);
}
B68860a:{NFSU2_TR(0x68860a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68860full));
TAIL_STATIC(0x686509u,686);
}
B68860f:L68860f:{c.instructions+=3;NFSU2_TR(0x68860f);
__builtin_memmove((R+28),(R+0),4);
}
B688611:{NFSU2_TR(0x688611);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B688613:{NFSU2_TR(0x688613);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B688615:L688615:{c.instructions+=2;NFSU2_TR(0x688615);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B688619:{NFSU2_TR(0x688619);
if(r1(R+518)){{goto L688628;}}
}
B68861b:L68861b:{c.instructions+=2;NFSU2_TR(0x68861b);
__builtin_memmove((R+4),(R+24),4);
}
B68861d:{NFSU2_TR(0x68861d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688622ull));
TAIL_STATIC(0x6867a1u,686);
}
B688622:L688622:{c.instructions+=3;NFSU2_TR(0x688622);
__builtin_memmove((R+28),(R+0),4);
}
B688624:{NFSU2_TR(0x688624);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B688626:{NFSU2_TR(0x688626);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B688628:L688628:{c.instructions+=3;NFSU2_TR(0x688628);
u8 U[4];
w4(U+0,u32(0xffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68862d:{NFSU2_TR(0x68862d);
__builtin_memmove((R+4),(R+24),4);
}
B68862f:{NFSU2_TR(0x68862f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688634ull));
TAIL_STATIC(0x685c9du,685);
}
B688634:L688634:{c.instructions+=3;NFSU2_TR(0x688634);
__builtin_memmove((R+28),(R+0),4);
}
B688636:{NFSU2_TR(0x688636);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B688638:{NFSU2_TR(0x688638);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B68863a:L68863a:{c.instructions+=4;NFSU2_TR(0x68863a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B68863d:{NFSU2_TR(0x68863d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68863e:{NFSU2_TR(0x68863e);
__builtin_memmove((R+4),(R+24),4);
}
B688640:{NFSU2_TR(0x688640);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688645ull));
TAIL_STATIC(0x685bb7u,685);
}
B688645:L688645:{c.instructions+=3;NFSU2_TR(0x688645);
__builtin_memmove((R+28),(R+0),4);
}
B688647:{NFSU2_TR(0x688647);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B688649:{NFSU2_TR(0x688649);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B68864b:L68864b:{c.instructions+=3;NFSU2_TR(0x68864b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68864e:{NFSU2_TR(0x68864e);
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
B688650:{NFSU2_TR(0x688650);
if(r1(R+518)){{goto L68865e;}}
}
B688652:L688652:{c.instructions+=3;NFSU2_TR(0x688652);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688654:{NFSU2_TR(0x688654);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688655:{NFSU2_TR(0x688655);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688658ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B688658:L688658:{c.instructions+=3;NFSU2_TR(0x688658);
__builtin_memmove((R+28),(R+0),4);
}
B68865a:{NFSU2_TR(0x68865a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B68865c:{NFSU2_TR(0x68865c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68867d;}}
}
B68865e:L68865e:{c.instructions+=2;NFSU2_TR(0x68865e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688660:{NFSU2_TR(0x688660);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688665ull));
TAIL_STATIC(0x642b3fu,642);
}
B688665:L688665:{c.instructions+=2;NFSU2_TR(0x688665);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688667:{NFSU2_TR(0x688667);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6882f7u);}goto L6882f7;}}
}
B68866d:L68866d:{c.instructions+=3;NFSU2_TR(0x68866d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688670:{NFSU2_TR(0x688670);
__builtin_memmove((R+4),(R+24),4);
}
B688672:{NFSU2_TR(0x688672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688677ull));
TAIL_STATIC(0x686ac7u,686);
}
B688677:L688677:{c.instructions+=3;NFSU2_TR(0x688677);
__builtin_memmove((R+28),(R+0),4);
}
B688679:{NFSU2_TR(0x688679);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B68867b:{NFSU2_TR(0x68867b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L688686;}}
}
B68867d:L68867d:{c.instructions+=2;NFSU2_TR(0x68867d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B688684:{NFSU2_TR(0x688684);
{goto L688688;}
}
B688686:L688686:{c.instructions+=1;NFSU2_TR(0x688686);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B688688:L688688:{c.instructions+=3;NFSU2_TR(0x688688);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68868b:{NFSU2_TR(0x68868b);
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
B68868d:{NFSU2_TR(0x68868d);
if(r1(R+518)){{goto L688698;}}
}
B68868f:L68868f:{c.instructions+=3;NFSU2_TR(0x68868f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688691:{NFSU2_TR(0x688691);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688692:{NFSU2_TR(0x688692);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688695ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B688695:L688695:{c.instructions+=1;NFSU2_TR(0x688695);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688698:L688698:{c.instructions+=2;NFSU2_TR(0x688698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68869b:{NFSU2_TR(0x68869b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6886a0ull));
TAIL_STATIC(0x6475e7u,647);
}
B6886a0:L6886a0:{c.instructions+=1;NFSU2_TR(0x6886a0);
__builtin_memmove((R+0),(R+28),4);
}
B6886a2:L6886a2:{c.instructions+=1;NFSU2_TR(0x6886a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6886a3:L6886a3:{c.instructions+=1;NFSU2_TR(0x6886a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6886a4:L6886a4:{c.instructions+=3;NFSU2_TR(0x6886a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6886a5:{NFSU2_TR(0x6886a5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6886a6:{NFSU2_TR(0x6886a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6886a9:L6886a9:{c.instructions+=10;NFSU2_TR(0x6886a9);
__builtin_memmove((R+28),(R+28),4);
}
B6886ab:{NFSU2_TR(0x6886ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6886ac:{NFSU2_TR(0x6886ac);
__builtin_memmove((R+20),(R+16),4);
}
B6886ae:{NFSU2_TR(0x6886ae);
__builtin_memmove((R+0),(R+4),4);
}
B6886b0:{NFSU2_TR(0x6886b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6886b3:{NFSU2_TR(0x6886b3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6886b5:{NFSU2_TR(0x6886b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6886b8:{NFSU2_TR(0x6886b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6886bb:{NFSU2_TR(0x6886bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6886bc:{NFSU2_TR(0x6886bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6886bf:L6886bf:{c.instructions+=9;NFSU2_TR(0x6886bf);
__builtin_memmove((R+28),(R+28),4);
}
B6886c1:{NFSU2_TR(0x6886c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6886c2:{NFSU2_TR(0x6886c2);
__builtin_memmove((R+20),(R+16),4);
}
B6886c4:{NFSU2_TR(0x6886c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6886c5:{NFSU2_TR(0x6886c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6886c6:{NFSU2_TR(0x6886c6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6886c7:{NFSU2_TR(0x6886c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6886ca:{NFSU2_TR(0x6886ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6886cc:{NFSU2_TR(0x6886cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6886d1;}}
}
B6886ce:L6886ce:{c.instructions+=1;NFSU2_TR(0x6886ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6886d1:L6886d1:{c.instructions+=4;NFSU2_TR(0x6886d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6886d4:{NFSU2_TR(0x6886d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6886d7:{NFSU2_TR(0x6886d7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6886da:{NFSU2_TR(0x6886da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688714;}}
}
B6886dc:L6886dc:{c.instructions+=5;NFSU2_TR(0x6886dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6886df:{NFSU2_TR(0x6886df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6886e1:{NFSU2_TR(0x6886e1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6886e2:{NFSU2_TR(0x6886e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6886e4:{NFSU2_TR(0x6886e4);
if(r1(R+518)){{goto L68870a;}}
}
B6886e6:L6886e6:{c.instructions+=2;NFSU2_TR(0x6886e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6886e8:{NFSU2_TR(0x6886e8);
if(r1(R+518)){{goto L68870a;}}
}
B6886ea:L6886ea:{c.instructions+=2;NFSU2_TR(0x6886ea);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6886ed:{NFSU2_TR(0x6886ed);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6886fc;}}
}
B6886ef:L6886ef:{c.instructions+=5;NFSU2_TR(0x6886ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6886f2:{NFSU2_TR(0x6886f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6886f5:{NFSU2_TR(0x6886f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6886f7:{NFSU2_TR(0x6886f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6886fa:{NFSU2_TR(0x6886fa);
{goto L688706;}
}
B6886fc:L6886fc:{c.instructions+=2;NFSU2_TR(0x6886fc);
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
B6886ff:{NFSU2_TR(0x6886ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688776;}}
}
B688701:L688701:{c.instructions+=2;NFSU2_TR(0x688701);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688704:{NFSU2_TR(0x688704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B688706:L688706:{c.instructions+=2;NFSU2_TR(0x688706);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B688708:{NFSU2_TR(0x688708);
{goto L688772;}
}
B68870a:L68870a:{c.instructions+=4;NFSU2_TR(0x68870a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68870d:{NFSU2_TR(0x68870d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B68870f:{NFSU2_TR(0x68870f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688712:{NFSU2_TR(0x688712);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688706u);}goto L688706;}
}
B688714:L688714:{c.instructions+=2;NFSU2_TR(0x688714);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688717:{NFSU2_TR(0x688717);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688732;}}
}
B688719:L688719:{c.instructions+=5;NFSU2_TR(0x688719);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68871a:{NFSU2_TR(0x68871a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68871d:{NFSU2_TR(0x68871d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68871e:{NFSU2_TR(0x68871e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688721:{NFSU2_TR(0x688721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688726ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6886bfu);}goto L6886bf;}
}
B688726:L688726:{c.instructions+=2;NFSU2_TR(0x688726);
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
B688728:{NFSU2_TR(0x688728);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68877b;}}
}
B68872a:L68872a:{c.instructions+=3;NFSU2_TR(0x68872a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68872d:{NFSU2_TR(0x68872d);
u8 U[28];
w8(U+4,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w8(U+12,u64(s64(s32(r4(U+0)))));
w8(U+20,u64(u64(r8(U+4))*u64(r8(U+12))));
w4(R+0,u32(r8(U+20)));
}
B688730:{NFSU2_TR(0x688730);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688706u);}goto L688706;}
}
B688732:L688732:{c.instructions+=2;NFSU2_TR(0x688732);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688735:{NFSU2_TR(0x688735);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688776;}}
}
B688737:L688737:{c.instructions+=3;NFSU2_TR(0x688737);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B68873a:{NFSU2_TR(0x68873a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B68873d:{NFSU2_TR(0x68873d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B688740:L688740:{c.instructions+=8;NFSU2_TR(0x688740);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688743:{NFSU2_TR(0x688743);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688746:{NFSU2_TR(0x688746);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B688749:{NFSU2_TR(0x688749);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68874a:{NFSU2_TR(0x68874a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68874d:{NFSU2_TR(0x68874d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68874e:{NFSU2_TR(0x68874e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688751:{NFSU2_TR(0x688751);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688756ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6886bfu);}goto L6886bf;}
}
B688756:L688756:{c.instructions+=2;NFSU2_TR(0x688756);
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
B688758:{NFSU2_TR(0x688758);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L68877b;}}
}
B68875a:L68875a:{c.instructions+=5;NFSU2_TR(0x68875a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68875d:{NFSU2_TR(0x68875d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B68875f:{NFSU2_TR(0x68875f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688761:{NFSU2_TR(0x688761);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688764:{NFSU2_TR(0x688764);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688769;}}
}
B688766:L688766:{c.instructions+=1;NFSU2_TR(0x688766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688769:L688769:{c.instructions+=4;NFSU2_TR(0x688769);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B68876b:{NFSU2_TR(0x68876b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68876e:{NFSU2_TR(0x68876e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688770:{NFSU2_TR(0x688770);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688740u);}goto L688740;}}
}
B688772:L688772:{c.instructions+=2;NFSU2_TR(0x688772);
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
B688774:{NFSU2_TR(0x688774);
{goto L68877b;}
}
B688776:L688776:{c.instructions+=1;NFSU2_TR(0x688776);
w4(R+0,u32(0x80004005ull));
}
B68877b:L68877b:{c.instructions+=5;NFSU2_TR(0x68877b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68877c:{NFSU2_TR(0x68877c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68877d:{NFSU2_TR(0x68877d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68877e:{NFSU2_TR(0x68877e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68877f:{NFSU2_TR(0x68877f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688782:L688782:{c.instructions+=12;NFSU2_TR(0x688782);
__builtin_memmove((R+28),(R+28),4);
}
B688784:{NFSU2_TR(0x688784);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688785:{NFSU2_TR(0x688785);
__builtin_memmove((R+20),(R+16),4);
}
B688787:{NFSU2_TR(0x688787);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B68878a:{NFSU2_TR(0x68878a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68878b:{NFSU2_TR(0x68878b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68878c:{NFSU2_TR(0x68878c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68878f:{NFSU2_TR(0x68878f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688790:{NFSU2_TR(0x688790);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688792:{NFSU2_TR(0x688792);
__builtin_memmove((R+12),(R+4),4);
}
B688794:{NFSU2_TR(0x688794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688795:{NFSU2_TR(0x688795);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B688798:L688798:{c.instructions+=1;NFSU2_TR(0x688798);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L68879a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688798u);}goto L688798;}
}
B68879a:L68879a:{c.instructions+=17;NFSU2_TR(0x68879a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68879d:{NFSU2_TR(0x68879d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B68879f:{NFSU2_TR(0x68879f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6887a2:{NFSU2_TR(0x6887a2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6887a4:{NFSU2_TR(0x6887a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887a5:{NFSU2_TR(0x6887a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6887a8:{NFSU2_TR(0x6887a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6887ab:{NFSU2_TR(0x6887ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887ac:{NFSU2_TR(0x6887ac);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887ae:{NFSU2_TR(0x6887ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6887b1:{NFSU2_TR(0x6887b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6887b4:{NFSU2_TR(0x6887b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887b5:{NFSU2_TR(0x6887b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887b6:{NFSU2_TR(0x6887b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887b7:{NFSU2_TR(0x6887b7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887b9:{NFSU2_TR(0x6887b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6887c0:{NFSU2_TR(0x6887c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6887c5ull));
TAIL_STATIC(0x6540dfu,654);
}
B6887c5:L6887c5:{c.instructions+=2;NFSU2_TR(0x6887c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6887c7:{NFSU2_TR(0x6887c7);
if(r1(R+518)){{goto L6887d7;}}
}
B6887c9:L6887c9:{c.instructions+=2;NFSU2_TR(0x6887c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6887cc:{NFSU2_TR(0x6887cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6887ce:L6887ce:{c.instructions+=1;NFSU2_TR(0x6887ce);
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
B6887d0:L6887d0:{c.instructions+=5;NFSU2_TR(0x6887d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6887d1:{NFSU2_TR(0x6887d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6887d2:{NFSU2_TR(0x6887d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6887d3:{NFSU2_TR(0x6887d3);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6887d4:{NFSU2_TR(0x6887d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6887d7:L6887d7:{c.instructions+=6;NFSU2_TR(0x6887d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6887da:{NFSU2_TR(0x6887da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6887dd:{NFSU2_TR(0x6887dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887de:{NFSU2_TR(0x6887de);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6887df:{NFSU2_TR(0x6887df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6887e2:{NFSU2_TR(0x6887e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6887e7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6886bfu);}goto L6886bf;}
}
B6887e7:L6887e7:{c.instructions+=2;NFSU2_TR(0x6887e7);
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
B6887e9:{NFSU2_TR(0x6887e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6887d0u);}goto L6887d0;}}
}
B6887eb:L6887eb:{c.instructions+=4;NFSU2_TR(0x6887eb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B6887ee:{NFSU2_TR(0x6887ee);
w4(R+0,u32(0x7ba434ull));
}
B6887f3:{NFSU2_TR(0x6887f3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6887f6:{NFSU2_TR(0x6887f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688820;}}
}
B6887f8:L6887f8:{c.instructions+=2;NFSU2_TR(0x6887f8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6887fb:{NFSU2_TR(0x6887fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688813;}}
}
B6887fd:L6887fd:{c.instructions+=4;NFSU2_TR(0x6887fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688800:{NFSU2_TR(0x688800);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688803:{NFSU2_TR(0x688803);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688807:{NFSU2_TR(0x688807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688813;}}
}
B688809:L688809:{c.instructions+=2;NFSU2_TR(0x688809);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68880c:{NFSU2_TR(0x68880c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688813;}}
}
B68880e:L68880e:{c.instructions+=2;NFSU2_TR(0x68880e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688811:{NFSU2_TR(0x688811);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6887ceu);}goto L6887ce;}}
}
B688813:L688813:{c.instructions+=4;NFSU2_TR(0x688813);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688814:{NFSU2_TR(0x688814);
u8 U[4];
w4(U+0,u32(0x7ba978ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688819:{NFSU2_TR(0x688819);
u8 U[4];
w4(U+0,u32(0xb54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68881e:{NFSU2_TR(0x68881e);
{goto L68885f;}
}
B688820:L688820:{c.instructions+=4;NFSU2_TR(0x688820);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+4),(U+0),2);
}
B688823:{NFSU2_TR(0x688823);
w4(R+0,u32(0x7ba430ull));
}
B688828:{NFSU2_TR(0x688828);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B68882b:{NFSU2_TR(0x68882b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6887ceu);}goto L6887ce;}}
}
B68882d:L68882d:{c.instructions+=2;NFSU2_TR(0x68882d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B688830:{NFSU2_TR(0x688830);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688854;}}
}
B688832:L688832:{c.instructions+=4;NFSU2_TR(0x688832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688835:{NFSU2_TR(0x688835);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688838:{NFSU2_TR(0x688838);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68883c:{NFSU2_TR(0x68883c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688854;}}
}
B68883e:L68883e:{c.instructions+=2;NFSU2_TR(0x68883e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688842:{NFSU2_TR(0x688842);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688854;}}
}
B688844:L688844:{c.instructions+=2;NFSU2_TR(0x688844);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688848:{NFSU2_TR(0x688848);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688854;}}
}
B68884a:L68884a:{c.instructions+=2;NFSU2_TR(0x68884a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
}
B68884e:{NFSU2_TR(0x68884e);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6887ceu);}goto L6887ce;}}
}
B688854:L688854:{c.instructions+=3;NFSU2_TR(0x688854);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688855:{NFSU2_TR(0x688855);
u8 U[4];
w4(U+0,u32(0x7ba920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68885a:{NFSU2_TR(0x68885a);
u8 U[4];
w4(U+0,u32(0xb55ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68885f:L68885f:{c.instructions+=6;NFSU2_TR(0x68885f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688861:{NFSU2_TR(0x688861);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688864:{NFSU2_TR(0x688864);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688867:{NFSU2_TR(0x688867);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B68886a:{NFSU2_TR(0x68886a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68886b:{NFSU2_TR(0x68886b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688870ull));
TAIL_STATIC(0x64307cu,643);
}
B688870:L688870:{c.instructions+=3;NFSU2_TR(0x688870);
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
B688873:{NFSU2_TR(0x688873);
w4(R+0,u32(0x80004005ull));
}
B688878:{NFSU2_TR(0x688878);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6887d0u);}goto L6887d0;}
}
B68887d:L68887d:{c.instructions+=10;NFSU2_TR(0x68887d);
__builtin_memmove((R+28),(R+28),4);
}
B68887f:{NFSU2_TR(0x68887f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688880:{NFSU2_TR(0x688880);
__builtin_memmove((R+20),(R+16),4);
}
B688882:{NFSU2_TR(0x688882);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688883:{NFSU2_TR(0x688883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688886:{NFSU2_TR(0x688886);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688887:{NFSU2_TR(0x688887);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B688889:{NFSU2_TR(0x688889);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68888d:{NFSU2_TR(0x68888d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688890:{NFSU2_TR(0x688890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688939;}}
}
B688896:L688896:{c.instructions+=4;NFSU2_TR(0x688896);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688897:{NFSU2_TR(0x688897);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68889a:{NFSU2_TR(0x68889a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B68889e:{NFSU2_TR(0x68889e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68892b;}}
}
B6888a4:L6888a4:{c.instructions+=5;NFSU2_TR(0x6888a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6888a5:{NFSU2_TR(0x6888a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6888a8:{NFSU2_TR(0x6888a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6888ab:{NFSU2_TR(0x6888ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6888ac:{NFSU2_TR(0x6888ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6888b1ull));
TAIL_STATIC(0x575620u,575);
}
B6888b1:L6888b1:{c.instructions+=5;NFSU2_TR(0x6888b1);
__builtin_memmove((R+28),(R+0),4);
}
B6888b3:{NFSU2_TR(0x6888b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6888b5:{NFSU2_TR(0x6888b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6888b6:{NFSU2_TR(0x6888b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6888b9:{NFSU2_TR(0x6888b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6888c2;}}
}
B6888bb:L6888bb:{c.instructions+=2;NFSU2_TR(0x6888bb);
w4(R+28,u32(0x8007000eull));
}
B6888c0:{NFSU2_TR(0x6888c0);
{goto L68892a;}
}
B6888c2:L6888c2:{c.instructions+=4;NFSU2_TR(0x6888c2);
__builtin_memmove((R+4),(R+12),4);
}
B6888c4:{NFSU2_TR(0x6888c4);
__builtin_memmove((R+8),(R+4),4);
}
B6888c6:{NFSU2_TR(0x6888c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6888c9:{NFSU2_TR(0x6888c9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6888cb:L6888cb:{c.instructions+=1;NFSU2_TR(0x6888cb);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6888cd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6888cbu);}goto L6888cb;}
}
B6888cd:L6888cd:{c.instructions+=2;NFSU2_TR(0x6888cd);
__builtin_memmove((R+4),(R+8),4);
}
B6888cf:{NFSU2_TR(0x6888cf);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6888d2:L6888d2:{c.instructions+=1;NFSU2_TR(0x6888d2);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6888d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6888d2u);}goto L6888d2;}
}
B6888d4:L6888d4:{c.instructions+=3;NFSU2_TR(0x6888d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6888d7:{NFSU2_TR(0x6888d7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6888d9:{NFSU2_TR(0x6888d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688917;}}
}
B6888db:L6888db:{c.instructions+=3;NFSU2_TR(0x6888db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6888de:{NFSU2_TR(0x6888de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6888e1:{NFSU2_TR(0x6888e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6888e4:L6888e4:{c.instructions+=3;NFSU2_TR(0x6888e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6888e7:{NFSU2_TR(0x6888e7);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6888e9:{NFSU2_TR(0x6888e9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68890e;}}
}
B6888eb:L6888eb:{c.instructions+=1;NFSU2_TR(0x6888eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6888ee:L6888ee:{c.instructions+=4;NFSU2_TR(0x6888ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6888f1:{NFSU2_TR(0x6888f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6888f4:{NFSU2_TR(0x6888f4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6888f7:{NFSU2_TR(0x6888f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688900;}}
}
B6888f9:L6888f9:{c.instructions+=3;NFSU2_TR(0x6888f9);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6888fc:{NFSU2_TR(0x6888fc);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6888fe:{NFSU2_TR(0x6888fe);
{goto L688905;}
}
B688900:L688900:{c.instructions+=2;NFSU2_TR(0x688900);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688903:{NFSU2_TR(0x688903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B688905:L688905:{c.instructions+=4;NFSU2_TR(0x688905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B688908:{NFSU2_TR(0x688908);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B68890b:{NFSU2_TR(0x68890b);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B68890c:{NFSU2_TR(0x68890c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6888eeu);}goto L6888ee;}}
}
B68890e:L68890e:{c.instructions+=3;NFSU2_TR(0x68890e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B688912:{NFSU2_TR(0x688912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688915:{NFSU2_TR(0x688915);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6888e4u);}goto L6888e4;}}
}
B688917:L688917:{c.instructions+=6;NFSU2_TR(0x688917);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68891a:{NFSU2_TR(0x68891a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68891d:{NFSU2_TR(0x68891d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68891f:{NFSU2_TR(0x68891f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688920:{NFSU2_TR(0x688920);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688923:{NFSU2_TR(0x688923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688928ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B688928:L688928:{c.instructions+=1;NFSU2_TR(0x688928);
__builtin_memmove((R+28),(R+0),4);
}
B68892a:L68892a:{c.instructions+=1;NFSU2_TR(0x68892a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68892b:L68892b:{c.instructions+=2;NFSU2_TR(0x68892b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68892e:{NFSU2_TR(0x68892e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688933ull));
TAIL_STATIC(0x575630u,575);
}
B688933:L688933:{c.instructions+=4;NFSU2_TR(0x688933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688934:{NFSU2_TR(0x688934);
__builtin_memmove((R+0),(R+28),4);
}
B688936:{NFSU2_TR(0x688936);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B688937:{NFSU2_TR(0x688937);
{goto L68893b;}
}
B688939:L688939:{c.instructions+=1;NFSU2_TR(0x688939);
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
B68893b:L68893b:{c.instructions+=3;NFSU2_TR(0x68893b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68893c:{NFSU2_TR(0x68893c);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68893d:{NFSU2_TR(0x68893d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688940:L688940:{c.instructions+=9;NFSU2_TR(0x688940);
__builtin_memmove((R+28),(R+28),4);
}
B688942:{NFSU2_TR(0x688942);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688943:{NFSU2_TR(0x688943);
__builtin_memmove((R+20),(R+16),4);
}
B688945:{NFSU2_TR(0x688945);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688946:{NFSU2_TR(0x688946);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688947:{NFSU2_TR(0x688947);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68894a:{NFSU2_TR(0x68894a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B68894d:{NFSU2_TR(0x68894d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68894e:{NFSU2_TR(0x68894e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688953ull));
TAIL_STATIC(0x575620u,575);
}
B688953:L688953:{c.instructions+=4;NFSU2_TR(0x688953);
__builtin_memmove((R+12),(R+0),4);
}
B688955:{NFSU2_TR(0x688955);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688957:{NFSU2_TR(0x688957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688958:{NFSU2_TR(0x688958);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688961;}}
}
B68895a:L68895a:{c.instructions+=2;NFSU2_TR(0x68895a);
w4(R+24,u32(0x8007000eull));
}
B68895f:{NFSU2_TR(0x68895f);
{goto L688988;}
}
B688961:L688961:{c.instructions+=7;NFSU2_TR(0x688961);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688962:{NFSU2_TR(0x688962);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688965:{NFSU2_TR(0x688965);
__builtin_memmove((R+4),(R+24),4);
}
B688967:{NFSU2_TR(0x688967);
__builtin_memmove((R+8),(R+4),4);
}
B688969:{NFSU2_TR(0x688969);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B68896c:{NFSU2_TR(0x68896c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B68896e:{NFSU2_TR(0x68896e);
__builtin_memmove((R+28),(R+12),4);
}
B688970:L688970:{c.instructions+=1;NFSU2_TR(0x688970);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L688972;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688970u);}goto L688970;}
}
B688972:L688972:{c.instructions+=4;NFSU2_TR(0x688972);
__builtin_memmove((R+4),(R+8),4);
}
B688974:{NFSU2_TR(0x688974);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688976:{NFSU2_TR(0x688976);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B688979:{NFSU2_TR(0x688979);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68897a:L68897a:{c.instructions+=1;NFSU2_TR(0x68897a);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L68897c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68897au);}goto L68897a;}
}
B68897c:L68897c:{c.instructions+=3;NFSU2_TR(0x68897c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68897f:{NFSU2_TR(0x68897f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688980:{NFSU2_TR(0x688980);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688985ull));
TAIL_STATIC(0x6c140eu,6c1);
}
B688985:L688985:{c.instructions+=2;NFSU2_TR(0x688985);
__builtin_memmove((R+24),(R+0),4);
}
B688987:{NFSU2_TR(0x688987);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B688988:L688988:{c.instructions+=2;NFSU2_TR(0x688988);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688989:{NFSU2_TR(0x688989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68898eull));
TAIL_STATIC(0x575630u,575);
}
B68898e:L68898e:{c.instructions+=6;NFSU2_TR(0x68898e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68898f:{NFSU2_TR(0x68898f);
__builtin_memmove((R+0),(R+24),4);
}
B688991:{NFSU2_TR(0x688991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B688992:{NFSU2_TR(0x688992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B688993:{NFSU2_TR(0x688993);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B688994:{NFSU2_TR(0x688994);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688997:L688997:{c.instructions+=16;NFSU2_TR(0x688997);
__builtin_memmove((R+28),(R+28),4);
}
B688999:{NFSU2_TR(0x688999);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68899a:{NFSU2_TR(0x68899a);
__builtin_memmove((R+20),(R+16),4);
}
B68899c:{NFSU2_TR(0x68899c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x5cull))));
}
B68899f:{NFSU2_TR(0x68899f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6889a3:{NFSU2_TR(0x6889a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889a4:{NFSU2_TR(0x6889a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889a5:{NFSU2_TR(0x6889a5);
w4(R+0,u32(0x7ba438ull));
}
B6889aa:{NFSU2_TR(0x6889aa);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6889ad:{NFSU2_TR(0x6889ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889ae:{NFSU2_TR(0x6889ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6889b1:{NFSU2_TR(0x6889b1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6889b3:{NFSU2_TR(0x6889b3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+0))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6889b6:{NFSU2_TR(0x6889b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6889b9:{NFSU2_TR(0x6889b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6889bc:{NFSU2_TR(0x6889bc);
if(r1(R+518)){{goto L688a2e;}}
}
B6889be:L6889be:{c.instructions+=4;NFSU2_TR(0x6889be);
w4(R+0,u32(0x7ba434ull));
}
B6889c3:{NFSU2_TR(0x6889c3);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6889c6:{NFSU2_TR(0x6889c6);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+0))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6889c9:{NFSU2_TR(0x6889c9);
if(r1(R+518)){{goto L688a2e;}}
}
B6889cb:L6889cb:{c.instructions+=4;NFSU2_TR(0x6889cb);
w4(R+0,u32(0x7ba430ull));
}
B6889d0:{NFSU2_TR(0x6889d0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6889d3:{NFSU2_TR(0x6889d3);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+0))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6889d6:{NFSU2_TR(0x6889d6);
if(r1(R+518)){{goto L688a2e;}}
}
B6889d8:L6889d8:{c.instructions+=4;NFSU2_TR(0x6889d8);
w4(R+0,u32(0x7ba42cull));
}
B6889dd:{NFSU2_TR(0x6889dd);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6889e0:{NFSU2_TR(0x6889e0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(R+0))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B6889e3:{NFSU2_TR(0x6889e3);
if(r1(R+518)){{goto L688a2e;}}
}
B6889e5:L6889e5:{c.instructions+=18;NFSU2_TR(0x6889e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6889e8:{NFSU2_TR(0x6889e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6889eb:{NFSU2_TR(0x6889eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6889ee:{NFSU2_TR(0x6889ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889ef:{NFSU2_TR(0x6889ef);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889f1:{NFSU2_TR(0x6889f1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6889f3:{NFSU2_TR(0x6889f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6889f4:{NFSU2_TR(0x6889f4);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889f6:{NFSU2_TR(0x6889f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6889f9:{NFSU2_TR(0x6889f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6889fa:{NFSU2_TR(0x6889fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B6889fe:{NFSU2_TR(0x6889fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc6ull))));
w2(U+4,u16(0x3ull));
s2(u32(r4(U+0)),r2(U+4));
}
B688a04:{NFSU2_TR(0x688a04);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688a08:{NFSU2_TR(0x688a08);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffcaull))));
w2(U+4,u16(0x4ull));
s2(u32(r4(U+0)),r2(U+4));
}
B688a0e:{NFSU2_TR(0x688a0e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688a12:{NFSU2_TR(0x688a12);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffceull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688a16:{NFSU2_TR(0x688a16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a19:{NFSU2_TR(0x688a19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688a1eull));
TAIL_STATIC(0x6c140eu,6c1);
}
B688a1e:L688a1e:{c.instructions+=2;NFSU2_TR(0x688a1e);
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
B688a20:{NFSU2_TR(0x688a20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688cdb;}}
}
B688a26:L688a26:{c.instructions+=2;NFSU2_TR(0x688a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a29:{NFSU2_TR(0x688a29);
{goto L688c8e;}
}
B688a2e:L688a2e:{c.instructions+=18;NFSU2_TR(0x688a2e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a2f:{NFSU2_TR(0x688a2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688a32:{NFSU2_TR(0x688a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a35:{NFSU2_TR(0x688a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a38:{NFSU2_TR(0x688a38);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B688a3b:{NFSU2_TR(0x688a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a3c:{NFSU2_TR(0x688a3c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a3e:{NFSU2_TR(0x688a3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688a41:{NFSU2_TR(0x688a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688a43:{NFSU2_TR(0x688a43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a44:{NFSU2_TR(0x688a44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a45:{NFSU2_TR(0x688a45);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688a48:{NFSU2_TR(0x688a48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a49:{NFSU2_TR(0x688a49);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a4b:{NFSU2_TR(0x688a4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B688a52:{NFSU2_TR(0x688a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a55:{NFSU2_TR(0x688a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a58:{NFSU2_TR(0x688a58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688a5dull));
TAIL_STATIC(0x6540dfu,654);
}
B688a5d:L688a5d:{c.instructions+=7;NFSU2_TR(0x688a5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688a60:{NFSU2_TR(0x688a60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a61:{NFSU2_TR(0x688a61);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688a64:{NFSU2_TR(0x688a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688a65:{NFSU2_TR(0x688a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688a68:{NFSU2_TR(0x688a68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688a6b:{NFSU2_TR(0x688a6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688a70ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6886bfu);}goto L6886bf;}
}
B688a70:L688a70:{c.instructions+=2;NFSU2_TR(0x688a70);
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
B688a72:{NFSU2_TR(0x688a72);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688cdb;}}
}
B688a78:L688a78:{c.instructions+=4;NFSU2_TR(0x688a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688a7b:{NFSU2_TR(0x688a7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688a7e:{NFSU2_TR(0x688a7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B688a81:{NFSU2_TR(0x688a81);
if(r1(R+518)){{goto L688bf0;}}
}
B688a87:L688a87:{c.instructions+=7;NFSU2_TR(0x688a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688a8a:{NFSU2_TR(0x688a8a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688a8c:{NFSU2_TR(0x688a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a8f:{NFSU2_TR(0x688a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a92:{NFSU2_TR(0x688a92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a95:{NFSU2_TR(0x688a95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688a98:{NFSU2_TR(0x688a98);
if(r1(R+518)){{goto L688b4e;}}
}
B688a9e:L688a9e:{c.instructions+=4;NFSU2_TR(0x688a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688aa1:{NFSU2_TR(0x688aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688aa4:{NFSU2_TR(0x688aa4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688aa8:{NFSU2_TR(0x688aa8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b35;}}
}
B688aae:L688aae:{c.instructions+=3;NFSU2_TR(0x688aae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688ab1:{NFSU2_TR(0x688ab1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688ab3:{NFSU2_TR(0x688ab3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688ab9;}}
}
B688ab5:L688ab5:{c.instructions+=2;NFSU2_TR(0x688ab5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B688ab7:{NFSU2_TR(0x688ab7);
{goto L688abc;}
}
B688ab9:L688ab9:{c.instructions+=1;NFSU2_TR(0x688ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688abc:L688abc:{c.instructions+=3;NFSU2_TR(0x688abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688abf:{NFSU2_TR(0x688abf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688ac1:{NFSU2_TR(0x688ac1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688ac7;}}
}
B688ac3:L688ac3:{c.instructions+=2;NFSU2_TR(0x688ac3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B688ac5:{NFSU2_TR(0x688ac5);
{goto L688aca;}
}
B688ac7:L688ac7:{c.instructions+=1;NFSU2_TR(0x688ac7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B688aca:L688aca:{c.instructions+=2;NFSU2_TR(0x688aca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688acc:{NFSU2_TR(0x688acc);
if(r1(R+518)){{goto L688b1a;}}
}
B688ace:L688ace:{c.instructions+=5;NFSU2_TR(0x688ace);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688ad1:{NFSU2_TR(0x688ad1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ad2:{NFSU2_TR(0x688ad2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ad3:{NFSU2_TR(0x688ad3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ad4:{NFSU2_TR(0x688ad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688ad9ull));
TAIL_STATIC(0x672277u,672);
}
B688ad9:L688ad9:{c.instructions+=2;NFSU2_TR(0x688ad9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B688adb:{NFSU2_TR(0x688adb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688b35;}}
}
B688add:L688add:{c.instructions+=2;NFSU2_TR(0x688add);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B688adf:{NFSU2_TR(0x688adf);
if(r1(R+518)){{goto L688b35;}}
}
B688ae1:L688ae1:{c.instructions+=3;NFSU2_TR(0x688ae1);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B688ae4:{NFSU2_TR(0x688ae4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ae5:{NFSU2_TR(0x688ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688aeaull));
TAIL_STATIC(0x75ded8u,75d);
}
B688aea:L688aea:{c.instructions+=5;NFSU2_TR(0x688aea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688aeb:{NFSU2_TR(0x688aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688aee:{NFSU2_TR(0x688aee);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B688af1:{NFSU2_TR(0x688af1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688af3:{NFSU2_TR(0x688af3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b35;}}
}
B688af5:L688af5:{c.instructions+=3;NFSU2_TR(0x688af5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688af8:{NFSU2_TR(0x688af8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688afb:{NFSU2_TR(0x688afb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b02;}}
}
B688afd:L688afd:{c.instructions+=2;NFSU2_TR(0x688afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b00:{NFSU2_TR(0x688b00);
{goto L688b35;}
}
B688b02:L688b02:{c.instructions+=4;NFSU2_TR(0x688b02);
__builtin_memmove((R+4),(R+0),4);
}
B688b04:{NFSU2_TR(0x688b04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(U+4))));
}
B688b07:{NFSU2_TR(0x688b07);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffff0000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688b0d:{NFSU2_TR(0x688b0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b35;}}
}
B688b0f:L688b0f:{c.instructions+=2;NFSU2_TR(0x688b0f);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))&u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B688b13:{NFSU2_TR(0x688b13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b35;}}
}
B688b15:L688b15:{c.instructions+=2;NFSU2_TR(0x688b15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b18:{NFSU2_TR(0x688b18);
{goto L688b35;}
}
B688b1a:L688b1a:{c.instructions+=2;NFSU2_TR(0x688b1a);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B688b1c:{NFSU2_TR(0x688b1c);
if(r1(R+518)){{goto L688b35;}}
}
B688b1e:L688b1e:{c.instructions+=3;NFSU2_TR(0x688b1e);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B688b21:{NFSU2_TR(0x688b21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688b22:{NFSU2_TR(0x688b22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688b27ull));
TAIL_STATIC(0x75ded8u,75d);
}
B688b27:L688b27:{c.instructions+=5;NFSU2_TR(0x688b27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688b28:{NFSU2_TR(0x688b28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688b2b:{NFSU2_TR(0x688b2b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B688b2e:{NFSU2_TR(0x688b2e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688b30:{NFSU2_TR(0x688b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b35;}}
}
B688b32:L688b32:{c.instructions+=1;NFSU2_TR(0x688b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b35:L688b35:{c.instructions+=5;NFSU2_TR(0x688b35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688b38:{NFSU2_TR(0x688b38);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688b3b:{NFSU2_TR(0x688b3b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688b3d:{NFSU2_TR(0x688b3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b40:{NFSU2_TR(0x688b40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688a9eu);}goto L688a9e;}}
}
B688b46:L688b46:{c.instructions+=3;NFSU2_TR(0x688b46);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B688b49:{NFSU2_TR(0x688b49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B688b4c:{NFSU2_TR(0x688b4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b66;}}
}
B688b4e:L688b4e:{c.instructions+=4;NFSU2_TR(0x688b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688b51:{NFSU2_TR(0x688b51);
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
B688b53:{NFSU2_TR(0x688b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b56:{NFSU2_TR(0x688b56);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688b66;}}
}
B688b58:L688b58:{c.instructions+=4;NFSU2_TR(0x688b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688b5b:{NFSU2_TR(0x688b5b);
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
B688b5d:{NFSU2_TR(0x688b5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b60:{NFSU2_TR(0x688b60);
if(r1(R+518)){{goto L688bf0;}}
}
B688b66:L688b66:{c.instructions+=4;NFSU2_TR(0x688b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688b69:{NFSU2_TR(0x688b69);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B688b6c:{NFSU2_TR(0x688b6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688b6d:{NFSU2_TR(0x688b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688b72ull));
TAIL_STATIC(0x75ded8u,75d);
}
B688b72:L688b72:{c.instructions+=4;NFSU2_TR(0x688b72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688b73:{NFSU2_TR(0x688b73);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+4,u32(s32(s8(r1(U+0)))));
}
B688b76:{NFSU2_TR(0x688b76);
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
B688b78:{NFSU2_TR(0x688b78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688bf0;}}
}
B688b7a:L688b7a:{c.instructions+=6;NFSU2_TR(0x688b7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B688b7d:{NFSU2_TR(0x688b7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688b80:{NFSU2_TR(0x688b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688b83:{NFSU2_TR(0x688b83);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B688b86:{NFSU2_TR(0x688b86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688b87:{NFSU2_TR(0x688b87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688b8cull));
TAIL_STATIC(0x75df39u,75d);
}
B688b8c:L688b8c:{c.instructions+=3;NFSU2_TR(0x688b8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688b8e:{NFSU2_TR(0x688b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688b8f:{NFSU2_TR(0x688b8f);
if(r1(R+518)){{goto L688bf0;}}
}
B688b91:L688b91:{c.instructions+=2;NFSU2_TR(0x688b91);
u8 U[6];
w1(R+512,carry<u32>(r4(R+28),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+28),u32(0x2ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688b94:{NFSU2_TR(0x688b94);
{goto L688b97;}
}
B688b96:L688b96:{c.instructions+=1;NFSU2_TR(0x688b96);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688b97:L688b97:{c.instructions+=3;NFSU2_TR(0x688b97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B688b9a:{NFSU2_TR(0x688b9a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688b9b:{NFSU2_TR(0x688b9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688ba0ull));
TAIL_STATIC(0x75df39u,75d);
}
B688ba0:L688ba0:{c.instructions+=3;NFSU2_TR(0x688ba0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688ba2:{NFSU2_TR(0x688ba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688ba3:{NFSU2_TR(0x688ba3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688b96u);}goto L688b96;}}
}
B688ba5:L688ba5:{c.instructions+=2;NFSU2_TR(0x688ba5);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((U+4),(U+0),1);
w1(R+512,u8((r1(U+4))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+4),r1(R+12)));
w1(U+5,u8(u32(r1(U+4))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+5))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
w1(U+1,u8(u32(r1(U+5))&u32(u8(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r1(U+1)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B688ba7:{NFSU2_TR(0x688ba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688bf0;}}
}
B688ba9:L688ba9:{c.instructions+=2;NFSU2_TR(0x688ba9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688bac:{NFSU2_TR(0x688bac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688bb1ull));
TAIL_STATIC(0x75d65bu,75d);
}
B688bb1:L688bb1:{c.instructions+=3;NFSU2_TR(0x688bb1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x1fffull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1fffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688bb6:{NFSU2_TR(0x688bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688bb7:{NFSU2_TR(0x688bb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688be6;}}
}
B688bb9:L688bb9:{c.instructions+=11;NFSU2_TR(0x688bb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688bba:{NFSU2_TR(0x688bba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688bbd:{NFSU2_TR(0x688bbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688bc0:{NFSU2_TR(0x688bc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688bc2:{NFSU2_TR(0x688bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688bc5:{NFSU2_TR(0x688bc5);
u8 U[4];
w4(U+0,u32(0x7baa38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688bca:{NFSU2_TR(0x688bca);
u8 U[4];
w4(U+0,u32(0xb56ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688bcf:{NFSU2_TR(0x688bcf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B688bd2:{NFSU2_TR(0x688bd2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688bd3:{NFSU2_TR(0x688bd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688bd4:{NFSU2_TR(0x688bd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688bd9ull));
TAIL_STATIC(0x64307cu,643);
}
B688bd9:L688bd9:{c.instructions+=1;NFSU2_TR(0x688bd9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688bdc:L688bdc:{c.instructions+=2;NFSU2_TR(0x688bdc);
w4(R+0,u32(0x80004005ull));
}
B688be1:{NFSU2_TR(0x688be1);
{goto L688cdb;}
}
B688be6:L688be6:{c.instructions+=3;NFSU2_TR(0x688be6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B688be9:{NFSU2_TR(0x688be9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x2ull))));
}
B688bec:{NFSU2_TR(0x688bec);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))|u32(r2(R+0))));
s2(u32(r4(U+0)),r2(U+4));
}
B688bf0:L688bf0:{c.instructions+=3;NFSU2_TR(0x688bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688bf3:{NFSU2_TR(0x688bf3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B688bf7:{NFSU2_TR(0x688bf7);
if(r1(R+518)){{goto L688bfd;}}
}
B688bf9:L688bf9:{c.instructions+=1;NFSU2_TR(0x688bf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B688bfd:L688bfd:{c.instructions+=3;NFSU2_TR(0x688bfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688c00:{NFSU2_TR(0x688c00);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688c02:{NFSU2_TR(0x688c02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688c63;}}
}
B688c04:L688c04:{c.instructions+=2;NFSU2_TR(0x688c04);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688c07:{NFSU2_TR(0x688c07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688c5c;}}
}
B688c09:L688c09:{c.instructions+=2;NFSU2_TR(0x688c09);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B688c0d:{NFSU2_TR(0x688c0d);
if(r1(R+518)){{goto L688c26;}}
}
B688c0f:L688c0f:{c.instructions+=5;NFSU2_TR(0x688c0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688c12:{NFSU2_TR(0x688c12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c13:{NFSU2_TR(0x688c13);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c16:{NFSU2_TR(0x688c16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c19:{NFSU2_TR(0x688c19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688c1eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688940u);}goto L688940;}
}
B688c1e:L688c1e:{c.instructions+=2;NFSU2_TR(0x688c1e);
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
B688c20:{NFSU2_TR(0x688c20);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688cdb;}}
}
B688c26:L688c26:{c.instructions+=4;NFSU2_TR(0x688c26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688c29:{NFSU2_TR(0x688c29);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688c2c:{NFSU2_TR(0x688c2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688c30:{NFSU2_TR(0x688c30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688c78;}}
}
B688c32:L688c32:{c.instructions+=2;NFSU2_TR(0x688c32);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688c36:{NFSU2_TR(0x688c36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688c78;}}
}
B688c38:L688c38:{c.instructions+=10;NFSU2_TR(0x688c38);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c3b:{NFSU2_TR(0x688c3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688c3e:{NFSU2_TR(0x688c3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688c40:{NFSU2_TR(0x688c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688c43:{NFSU2_TR(0x688c43);
u8 U[4];
w4(U+0,u32(0x7ba9c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c48:{NFSU2_TR(0x688c48);
u8 U[4];
w4(U+0,u32(0xb59ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c4d:{NFSU2_TR(0x688c4d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
}
B688c50:{NFSU2_TR(0x688c50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c51:{NFSU2_TR(0x688c51);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c52:{NFSU2_TR(0x688c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688c57ull));
TAIL_STATIC(0x64307cu,643);
}
B688c57:L688c57:{c.instructions+=2;NFSU2_TR(0x688c57);
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
B688c5a:{NFSU2_TR(0x688c5a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688bdcu);}goto L688bdc;}
}
B688c5c:L688c5c:{c.instructions+=2;NFSU2_TR(0x688c5c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688c5e:{NFSU2_TR(0x688c5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688c63;}}
}
B688c60:L688c60:{c.instructions+=1;NFSU2_TR(0x688c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688c63:L688c63:{c.instructions+=7;NFSU2_TR(0x688c63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688c66:{NFSU2_TR(0x688c66);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c67:{NFSU2_TR(0x688c67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c68:{NFSU2_TR(0x688c68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c6b:{NFSU2_TR(0x688c6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c6e:{NFSU2_TR(0x688c6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c71:{NFSU2_TR(0x688c71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688c76ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68887du);}goto L68887d;}
}
B688c76:L688c76:{c.instructions+=1;NFSU2_TR(0x688c76);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688c1eu);}goto L688c1e;}
}
B688c78:L688c78:{c.instructions+=7;NFSU2_TR(0x688c78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B688c7b:{NFSU2_TR(0x688c7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c7c:{NFSU2_TR(0x688c7c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c7d:{NFSU2_TR(0x688c7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c7f:{NFSU2_TR(0x688c7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c82:{NFSU2_TR(0x688c82);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B688c85:{NFSU2_TR(0x688c85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688c8aull));
TAIL_STATIC(0x6cbe4cu,6cb);
}
B688c8a:L688c8a:{c.instructions+=2;NFSU2_TR(0x688c8a);
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
B688c8c:{NFSU2_TR(0x688c8c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688cdb;}}
}
B688c8e:L688c8e:{c.instructions+=7;NFSU2_TR(0x688c8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B688c91:{NFSU2_TR(0x688c91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688c94:{NFSU2_TR(0x688c94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c95:{NFSU2_TR(0x688c95);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c97:{NFSU2_TR(0x688c97);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c99:{NFSU2_TR(0x688c99);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688c9a:{NFSU2_TR(0x688c9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688c9full));
TAIL_STATIC(0x6c140eu,6c1);
}
B688c9f:L688c9f:{c.instructions+=2;NFSU2_TR(0x688c9f);
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
B688ca1:{NFSU2_TR(0x688ca1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688cdb;}}
}
B688ca3:L688ca3:{c.instructions+=4;NFSU2_TR(0x688ca3);
w4(R+4,u32(0x7ba434ull));
}
B688ca8:{NFSU2_TR(0x688ca8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B688cab:{NFSU2_TR(0x688cab);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+6),(U+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+6))));
w1(R+523,sborrow<u16>(r2(R+4),r2(U+6)));
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+519,u8(s16(r2(U+8))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
w2(U+2,u16(u32(r2(U+8))&u32(u16(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r2(U+2)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688cae:{NFSU2_TR(0x688cae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688cb6;}}
}
B688cb0:L688cb0:{c.instructions+=2;NFSU2_TR(0x688cb0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688cb4:{NFSU2_TR(0x688cb4);
{goto L688ccb;}
}
B688cb6:L688cb6:{c.instructions+=7;NFSU2_TR(0x688cb6);
w4(R+4,u32(0x7ba430ull));
}
B688cbb:{NFSU2_TR(0x688cbb);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+4),(U+0),2);
}
B688cbe:{NFSU2_TR(0x688cbe);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B688cc0:{NFSU2_TR(0x688cc0);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((U+2),(U+0),2);
w1(R+512,u8((r2(R+4))<(r2(U+2))));
w2(U+4,u16(u32(r2(R+4))-u32(r2(U+2))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B688cc3:{NFSU2_TR(0x688cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B688cc6:{NFSU2_TR(0x688cc6);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688cc7:{NFSU2_TR(0x688cc7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688ccb:L688ccb:{c.instructions+=4;NFSU2_TR(0x688ccb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B688ccf:{NFSU2_TR(0x688ccf);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688cd3:{NFSU2_TR(0x688cd3);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B688cd7:{NFSU2_TR(0x688cd7);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B688cdb:L688cdb:{c.instructions+=5;NFSU2_TR(0x688cdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B688cdc:{NFSU2_TR(0x688cdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B688cdd:{NFSU2_TR(0x688cdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B688cde:{NFSU2_TR(0x688cde);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B688cdf:{NFSU2_TR(0x688cdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688ce2:L688ce2:{c.instructions+=9;NFSU2_TR(0x688ce2);
__builtin_memmove((R+28),(R+28),4);
}
B688ce4:{NFSU2_TR(0x688ce4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ce5:{NFSU2_TR(0x688ce5);
__builtin_memmove((R+20),(R+16),4);
}
B688ce7:{NFSU2_TR(0x688ce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B688cea:{NFSU2_TR(0x688cea);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B688cec:{NFSU2_TR(0x688cec);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688cef:{NFSU2_TR(0x688cef);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688cf1:{NFSU2_TR(0x688cf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B688cf2:{NFSU2_TR(0x688cf2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688d0e;}}
}
B688cf4:L688cf4:{c.instructions+=2;NFSU2_TR(0x688cf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B688cf6:{NFSU2_TR(0x688cf6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L688d1a;}}
}
B688cf8:L688cf8:{c.instructions+=7;NFSU2_TR(0x688cf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B688cfb:{NFSU2_TR(0x688cfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B688cfd:{NFSU2_TR(0x688cfd);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+8));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B688d00:{NFSU2_TR(0x688d00);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B688d01:{NFSU2_TR(0x688d01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B688d04:{NFSU2_TR(0x688d04);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B688d08:{NFSU2_TR(0x688d08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688cf4u);}goto L688cf4;}}
}
B688d0a:L688d0a:{c.instructions+=2;NFSU2_TR(0x688d0a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B688d0c:{NFSU2_TR(0x688d0c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L688d1a;}}
}
B688d0e:L688d0e:{c.instructions+=4;NFSU2_TR(0x688d0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d0f:{NFSU2_TR(0x688d0f);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B688d13:{NFSU2_TR(0x688d13);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B688d15:{NFSU2_TR(0x688d15);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B688d17:L688d17:{c.instructions+=1;NFSU2_TR(0x688d17);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L688d19;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688d17u);}goto L688d17;}
}
B688d19:L688d19:{c.instructions+=1;NFSU2_TR(0x688d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B688d1a:L688d1a:{c.instructions+=3;NFSU2_TR(0x688d1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688d1d:{NFSU2_TR(0x688d1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d1e:{NFSU2_TR(0x688d1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688d23ull));
TAIL_STATIC(0x63f2b5u,63f);
}
B688d23:L688d23:{c.instructions+=4;NFSU2_TR(0x688d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688d26:{NFSU2_TR(0x688d26);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B688d28:{NFSU2_TR(0x688d28);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B688d29:{NFSU2_TR(0x688d29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688d2c:L688d2c:{c.instructions+=9;NFSU2_TR(0x688d2c);
__builtin_memmove((R+28),(R+28),4);
}
B688d2e:{NFSU2_TR(0x688d2e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d2f:{NFSU2_TR(0x688d2f);
__builtin_memmove((R+20),(R+16),4);
}
B688d31:{NFSU2_TR(0x688d31);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d32:{NFSU2_TR(0x688d32);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B688d34:{NFSU2_TR(0x688d34);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B688d37:{NFSU2_TR(0x688d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d38:{NFSU2_TR(0x688d38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d39:{NFSU2_TR(0x688d39);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688d7c;}}
}
B688d3b:L688d3b:{c.instructions+=1;NFSU2_TR(0x688d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688d3e:L688d3e:{c.instructions+=6;NFSU2_TR(0x688d3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688d40:{NFSU2_TR(0x688d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B688d42:{NFSU2_TR(0x688d42);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B688d45:{NFSU2_TR(0x688d45);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688d47:{NFSU2_TR(0x688d47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B688d49:{NFSU2_TR(0x688d49);
if(r1(R+518)){{goto L688d64;}}
}
B688d4b:L688d4b:{c.instructions+=3;NFSU2_TR(0x688d4b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B688d4d:{NFSU2_TR(0x688d4d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688d4f:{NFSU2_TR(0x688d4f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688d64;}}
}
B688d51:L688d51:{c.instructions+=6;NFSU2_TR(0x688d51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688d53:{NFSU2_TR(0x688d53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B688d55:{NFSU2_TR(0x688d55);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B688d58:{NFSU2_TR(0x688d58);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688d5b:{NFSU2_TR(0x688d5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B688d5d:{NFSU2_TR(0x688d5d);
if(r1(R+518)){{goto L688d85;}}
}
B688d5f:L688d5f:{c.instructions+=3;NFSU2_TR(0x688d5f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B688d60:{NFSU2_TR(0x688d60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B688d62:{NFSU2_TR(0x688d62);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688d51u);}goto L688d51;}}
}
B688d64:L688d64:{c.instructions+=6;NFSU2_TR(0x688d64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688d66:{NFSU2_TR(0x688d66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B688d68:{NFSU2_TR(0x688d68);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B688d6b:{NFSU2_TR(0x688d6b);
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
B688d6d:{NFSU2_TR(0x688d6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B688d6f:{NFSU2_TR(0x688d6f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688d85;}}
}
B688d71:L688d71:{c.instructions+=2;NFSU2_TR(0x688d71);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688d74:{NFSU2_TR(0x688d74);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L688d85;}}
}
B688d76:L688d76:{c.instructions+=3;NFSU2_TR(0x688d76);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B688d77:{NFSU2_TR(0x688d77);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B688d7a:{NFSU2_TR(0x688d7a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688d3eu);}goto L688d3e;}}
}
B688d7c:L688d7c:{c.instructions+=1;NFSU2_TR(0x688d7c);
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
B688d7e:L688d7e:{c.instructions+=5;NFSU2_TR(0x688d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B688d7f:{NFSU2_TR(0x688d7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B688d80:{NFSU2_TR(0x688d80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B688d81:{NFSU2_TR(0x688d81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B688d82:{NFSU2_TR(0x688d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688d85:L688d85:{c.instructions+=2;NFSU2_TR(0x688d85);
w4(R+0,u32(0x80004005ull));
}
B688d8a:{NFSU2_TR(0x688d8a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688d7eu);}goto L688d7e;}
}
B688d8c:L688d8c:{c.instructions+=10;NFSU2_TR(0x688d8c);
__builtin_memmove((R+28),(R+28),4);
}
B688d8e:{NFSU2_TR(0x688d8e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688d8f:{NFSU2_TR(0x688d8f);
__builtin_memmove((R+20),(R+16),4);
}
B688d91:{NFSU2_TR(0x688d91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688d94:{NFSU2_TR(0x688d94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688d96:{NFSU2_TR(0x688d96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B688d98:{NFSU2_TR(0x688d98);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B688d9b:{NFSU2_TR(0x688d9b);
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
B688d9d:{NFSU2_TR(0x688d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B688d9f:{NFSU2_TR(0x688d9f);
if(r1(R+518)){{goto L688da8;}}
}
B688da1:L688da1:{c.instructions+=2;NFSU2_TR(0x688da1);
w4(R+0,u32(0x80004005ull));
}
B688da6:{NFSU2_TR(0x688da6);
{goto L688dc5;}
}
B688da8:L688da8:{c.instructions+=5;NFSU2_TR(0x688da8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B688daa:{NFSU2_TR(0x688daa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B688dad:{NFSU2_TR(0x688dad);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688db0:{NFSU2_TR(0x688db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B688db2:{NFSU2_TR(0x688db2);
if(r1(R+518)){{goto L688dc3;}}
}
B688db4:L688db4:{c.instructions+=2;NFSU2_TR(0x688db4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688db7:{NFSU2_TR(0x688db7);
if(r1(R+518)){{goto L688dc3;}}
}
B688db9:L688db9:{c.instructions+=2;NFSU2_TR(0x688db9);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688dbc:{NFSU2_TR(0x688dbc);
if(r1(R+518)){{goto L688dc3;}}
}
B688dbe:L688dbe:{c.instructions+=2;NFSU2_TR(0x688dbe);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B688dc1:{NFSU2_TR(0x688dc1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688da1u);}goto L688da1;}}
}
B688dc3:L688dc3:{c.instructions+=1;NFSU2_TR(0x688dc3);
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
B688dc5:L688dc5:{c.instructions+=2;NFSU2_TR(0x688dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B688dc6:{NFSU2_TR(0x688dc6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688dc9:L688dc9:{c.instructions+=10;NFSU2_TR(0x688dc9);
__builtin_memmove((R+28),(R+28),4);
}
B688dcb:{NFSU2_TR(0x688dcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688dcc:{NFSU2_TR(0x688dcc);
__builtin_memmove((R+20),(R+16),4);
}
B688dce:{NFSU2_TR(0x688dce);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688dcf:{NFSU2_TR(0x688dcf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688dd0:{NFSU2_TR(0x688dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B688dd3:{NFSU2_TR(0x688dd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688dd5:{NFSU2_TR(0x688dd5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x46580200ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x46580200ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x46580200ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688dda:{NFSU2_TR(0x688dda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ddb:{NFSU2_TR(0x688ddb);
if(r1(R+512)){{goto L688e6d;}}
}
B688de1:L688de1:{c.instructions+=2;NFSU2_TR(0x688de1);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x46580201ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x46580201ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688de6:{NFSU2_TR(0x688de6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688def;}}
}
B688de8:L688de8:{c.instructions+=2;NFSU2_TR(0x688de8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x54580100ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x54580100ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x54580100ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688ded:{NFSU2_TR(0x688ded);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688e6d;}}
}
B688def:L688def:{c.instructions+=6;NFSU2_TR(0x688def);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B688df2:{NFSU2_TR(0x688df2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688df4:{NFSU2_TR(0x688df4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688df5:{NFSU2_TR(0x688df5);
u8 U[4];
w4(U+0,u32(0x434c5846ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688dfa:{NFSU2_TR(0x688dfa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688dfb:{NFSU2_TR(0x688dfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688e00ull));
TAIL_STATIC(0x671db5u,671);
}
B688e00:L688e00:{c.instructions+=2;NFSU2_TR(0x688e00);
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
B688e02:{NFSU2_TR(0x688e02);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688e6d;}}
}
B688e04:L688e04:{c.instructions+=2;NFSU2_TR(0x688e04);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688e07:{NFSU2_TR(0x688e07);
if(r1(R+518)){{goto L688e6d;}}
}
B688e09:L688e09:{c.instructions+=6;NFSU2_TR(0x688e09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B688e0c:{NFSU2_TR(0x688e0c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e0e:{NFSU2_TR(0x688e0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e0f:{NFSU2_TR(0x688e0f);
u8 U[4];
w4(U+0,u32(0x54494c43ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e14:{NFSU2_TR(0x688e14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e15:{NFSU2_TR(0x688e15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688e1aull));
TAIL_STATIC(0x671db5u,671);
}
B688e1a:L688e1a:{c.instructions+=2;NFSU2_TR(0x688e1a);
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
B688e1c:{NFSU2_TR(0x688e1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688e6d;}}
}
B688e1e:L688e1e:{c.instructions+=2;NFSU2_TR(0x688e1e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B688e21:{NFSU2_TR(0x688e21);
if(r1(R+518)){{goto L688e6d;}}
}
B688e23:L688e23:{c.instructions+=3;NFSU2_TR(0x688e23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688e25:{NFSU2_TR(0x688e25);
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
B688e27:{NFSU2_TR(0x688e27);
if(r1(R+518)){{goto L688e6d;}}
}
B688e29:L688e29:{c.instructions+=2;NFSU2_TR(0x688e29);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
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
B688e2c:{NFSU2_TR(0x688e2c);
if(r1(R+518)){{goto L688e6d;}}
}
B688e2e:L688e2e:{c.instructions+=5;NFSU2_TR(0x688e2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B688e30:{NFSU2_TR(0x688e30);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B688e33:{NFSU2_TR(0x688e33);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B688e35:{NFSU2_TR(0x688e35);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688e37:{NFSU2_TR(0x688e37);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688e69;}}
}
B688e39:L688e39:{c.instructions+=1;NFSU2_TR(0x688e39);
{goto L688e3e;}
}
B688e3b:L688e3b:{c.instructions+=1;NFSU2_TR(0x688e3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688e3e:L688e3e:{c.instructions+=8;NFSU2_TR(0x688e3e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B688e41:{NFSU2_TR(0x688e41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688e43:{NFSU2_TR(0x688e43);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B688e46:{NFSU2_TR(0x688e46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688e49:{NFSU2_TR(0x688e49);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688e4c:{NFSU2_TR(0x688e4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e4d:{NFSU2_TR(0x688e4d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e4e:{NFSU2_TR(0x688e4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688e53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688d2cu);}goto L688d2c;}
}
B688e53:L688e53:{c.instructions+=2;NFSU2_TR(0x688e53);
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
B688e55:{NFSU2_TR(0x688e55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688e72;}}
}
B688e57:L688e57:{c.instructions+=3;NFSU2_TR(0x688e57);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B688e5a:{NFSU2_TR(0x688e5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e5b:{NFSU2_TR(0x688e5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688e60ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688d8cu);}goto L688d8c;}
}
B688e60:L688e60:{c.instructions+=2;NFSU2_TR(0x688e60);
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
B688e62:{NFSU2_TR(0x688e62);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L688e72;}}
}
B688e64:L688e64:{c.instructions+=3;NFSU2_TR(0x688e64);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B688e65:{NFSU2_TR(0x688e65);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B688e67:{NFSU2_TR(0x688e67);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688e3bu);}goto L688e3b;}}
}
B688e69:L688e69:{c.instructions+=2;NFSU2_TR(0x688e69);
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
B688e6b:{NFSU2_TR(0x688e6b);
{goto L688e72;}
}
B688e6d:L688e6d:{c.instructions+=1;NFSU2_TR(0x688e6d);
w4(R+0,u32(0x80004005ull));
}
B688e72:L688e72:{c.instructions+=5;NFSU2_TR(0x688e72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B688e73:{NFSU2_TR(0x688e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B688e74:{NFSU2_TR(0x688e74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B688e75:{NFSU2_TR(0x688e75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B688e76:{NFSU2_TR(0x688e76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B688e79:L688e79:{c.instructions+=14;NFSU2_TR(0x688e79);
__builtin_memmove((R+28),(R+28),4);
}
B688e7b:{NFSU2_TR(0x688e7b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688e7c:{NFSU2_TR(0x688e7c);
__builtin_memmove((R+20),(R+16),4);
}
B688e7e:{NFSU2_TR(0x688e7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc1cull))));
}
B688e84:{NFSU2_TR(0x688e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688e87:{NFSU2_TR(0x688e87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688e89:{NFSU2_TR(0x688e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B688e8c:{NFSU2_TR(0x688e8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B688e90:{NFSU2_TR(0x688e90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688e93:{NFSU2_TR(0x688e93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688e95:{NFSU2_TR(0x688e95);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688e98:{NFSU2_TR(0x688e98);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688e9a:{NFSU2_TR(0x688e9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688e9d:{NFSU2_TR(0x688e9d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x689787u,689);}
}
B688ea3:L688ea3:{c.instructions+=4;NFSU2_TR(0x688ea3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ea4:{NFSU2_TR(0x688ea4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ea5:{NFSU2_TR(0x688ea5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B688ea6:{NFSU2_TR(0x688ea6);
{goto L688eab;}
}
B688ea8:L688ea8:{c.instructions+=1;NFSU2_TR(0x688ea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B688eab:L688eab:{c.instructions+=10;NFSU2_TR(0x688eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B688ead:{NFSU2_TR(0x688ead);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688eb0:{NFSU2_TR(0x688eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B688eb2:{NFSU2_TR(0x688eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688eb5:{NFSU2_TR(0x688eb5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688eb8:{NFSU2_TR(0x688eb8);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
}
B688ebe:{NFSU2_TR(0x688ebe);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B688ec0:{NFSU2_TR(0x688ec0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688ec2:{NFSU2_TR(0x688ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688ec5:{NFSU2_TR(0x688ec5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x689008u,689);}
}
B688ecb:L688ecb:{c.instructions+=5;NFSU2_TR(0x688ecb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688ecd:{NFSU2_TR(0x688ecd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688ed0:{NFSU2_TR(0x688ed0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B688ed2:{NFSU2_TR(0x688ed2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B688ed4:{NFSU2_TR(0x688ed4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L688f6c;}}
}
B688eda:L688eda:{c.instructions+=1;NFSU2_TR(0x688eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688edd:L688edd:{c.instructions+=8;NFSU2_TR(0x688edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B688edf:{NFSU2_TR(0x688edf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688ee2:{NFSU2_TR(0x688ee2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688ee4:{NFSU2_TR(0x688ee4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688ee7:{NFSU2_TR(0x688ee7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688eea:{NFSU2_TR(0x688eea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B688eed:{NFSU2_TR(0x688eed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688ef0:{NFSU2_TR(0x688ef0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f06;}}
}
B688ef2:L688ef2:{c.instructions+=3;NFSU2_TR(0x688ef2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B688ef7:{NFSU2_TR(0x688ef7);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+20)+u32(4294964196u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B688efe:{NFSU2_TR(0x688efe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688f03ull));
TAIL_STATIC(0x75dd28u,75d);
}
B688f03:L688f03:{c.instructions+=1;NFSU2_TR(0x688f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B688f06:L688f06:{c.instructions+=2;NFSU2_TR(0x688f06);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f09:{NFSU2_TR(0x688f09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f19;}}
}
B688f0b:L688f0b:{c.instructions+=5;NFSU2_TR(0x688f0b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B688f0d:{NFSU2_TR(0x688f0d);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x688f0d);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x688f0d);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B688f10:{NFSU2_TR(0x688f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688f13:{NFSU2_TR(0x688f13);
{u32 ea_=u32((r4(R+8)*8u)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B688f17:{NFSU2_TR(0x688f17);
{goto L688f5b;}
}
B688f19:L688f19:{c.instructions+=2;NFSU2_TR(0x688f19);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f1c:{NFSU2_TR(0x688f1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f26;}}
}
B688f1e:L688f1e:{c.instructions+=3;NFSU2_TR(0x688f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688f21:{NFSU2_TR(0x688f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688f24:{NFSU2_TR(0x688f24);
{goto L688f58;}
}
B688f26:L688f26:{c.instructions+=2;NFSU2_TR(0x688f26);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f29:{NFSU2_TR(0x688f29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f33;}}
}
B688f2b:L688f2b:{c.instructions+=3;NFSU2_TR(0x688f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688f2e:{NFSU2_TR(0x688f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688f31:{NFSU2_TR(0x688f31);
{goto L688f58;}
}
B688f33:L688f33:{c.instructions+=2;NFSU2_TR(0x688f33);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f36:{NFSU2_TR(0x688f36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f40;}}
}
B688f38:L688f38:{c.instructions+=3;NFSU2_TR(0x688f38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688f3b:{NFSU2_TR(0x688f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688f3e:{NFSU2_TR(0x688f3e);
{goto L688f58;}
}
B688f40:L688f40:{c.instructions+=2;NFSU2_TR(0x688f40);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f43:{NFSU2_TR(0x688f43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f4d;}}
}
B688f45:L688f45:{c.instructions+=3;NFSU2_TR(0x688f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688f48:{NFSU2_TR(0x688f48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688f4b:{NFSU2_TR(0x688f4b);
{goto L688f58;}
}
B688f4d:L688f4d:{c.instructions+=2;NFSU2_TR(0x688f4d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f50:{NFSU2_TR(0x688f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f63;}}
}
B688f52:L688f52:{c.instructions+=2;NFSU2_TR(0x688f52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688f55:{NFSU2_TR(0x688f55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688f58:L688f58:{c.instructions+=1;NFSU2_TR(0x688f58);
{u32 ea_=u32((r4(R+0)*8u)+r4(R+4));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B688f5b:L688f5b:{c.instructions+=1;NFSU2_TR(0x688f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x688f60ull));
TAIL_STATIC(0x75dd28u,75d);
}
B688f60:L688f60:{c.instructions+=1;NFSU2_TR(0x688f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B688f63:L688f63:{c.instructions+=2;NFSU2_TR(0x688f63);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f66:{NFSU2_TR(0x688f66);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x688eddu);}goto L688edd;}}
}
B688f6c:L688f6c:{c.instructions+=8;NFSU2_TR(0x688f6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B688f6e:{NFSU2_TR(0x688f6e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688f71:{NFSU2_TR(0x688f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B688f73:{NFSU2_TR(0x688f73);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B688f76:{NFSU2_TR(0x688f76);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f79:{NFSU2_TR(0x688f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B688f7c:{NFSU2_TR(0x688f7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B688f7f:{NFSU2_TR(0x688f7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f8f;}}
}
B688f81:L688f81:{c.instructions+=3;NFSU2_TR(0x688f81);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B688f86:{NFSU2_TR(0x688f86);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffff3e4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B688f8d:{NFSU2_TR(0x688f8d);
{goto L688ff7;}
}
B688f8f:L688f8f:{c.instructions+=2;NFSU2_TR(0x688f8f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f92:{NFSU2_TR(0x688f92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688f9c;}}
}
B688f94:L688f94:{c.instructions+=3;NFSU2_TR(0x688f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688f97:{NFSU2_TR(0x688f97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688f9a:{NFSU2_TR(0x688f9a);
{goto L688ff4;}
}
B688f9c:L688f9c:{c.instructions+=2;NFSU2_TR(0x688f9c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688f9f:{NFSU2_TR(0x688f9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688fa9;}}
}
B688fa1:L688fa1:{c.instructions+=3;NFSU2_TR(0x688fa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688fa4:{NFSU2_TR(0x688fa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688fa7:{NFSU2_TR(0x688fa7);
{goto L688ff4;}
}
B688fa9:L688fa9:{c.instructions+=2;NFSU2_TR(0x688fa9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688fac:{NFSU2_TR(0x688fac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688fbf;}}
}
B688fae:L688fae:{c.instructions+=6;NFSU2_TR(0x688fae);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B688fb0:{NFSU2_TR(0x688fb0);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x688fb0);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x688fb0);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B688fb3:{NFSU2_TR(0x688fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B688fb6:{NFSU2_TR(0x688fb6);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B688fba:{NFSU2_TR(0x688fba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B688fbd:{NFSU2_TR(0x688fbd);
{goto L688ff7;}
}
B688fbf:L688fbf:{c.instructions+=2;NFSU2_TR(0x688fbf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688fc2:{NFSU2_TR(0x688fc2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688fcf;}}
}
B688fc4:L688fc4:{c.instructions+=4;NFSU2_TR(0x688fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688fc7:{NFSU2_TR(0x688fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688fca:{NFSU2_TR(0x688fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B688fcd:{NFSU2_TR(0x688fcd);
{goto L688ff7;}
}
B688fcf:L688fcf:{c.instructions+=2;NFSU2_TR(0x688fcf);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688fd2:{NFSU2_TR(0x688fd2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688fdc;}}
}
B688fd4:L688fd4:{c.instructions+=3;NFSU2_TR(0x688fd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688fd7:{NFSU2_TR(0x688fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688fda:{NFSU2_TR(0x688fda);
{goto L688ff4;}
}
B688fdc:L688fdc:{c.instructions+=2;NFSU2_TR(0x688fdc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688fdf:{NFSU2_TR(0x688fdf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688fe9;}}
}
B688fe1:L688fe1:{c.instructions+=3;NFSU2_TR(0x688fe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688fe4:{NFSU2_TR(0x688fe4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688fe7:{NFSU2_TR(0x688fe7);
{goto L688ff4;}
}
B688fe9:L688fe9:{c.instructions+=2;NFSU2_TR(0x688fe9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B688fec:{NFSU2_TR(0x688fec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L688ffe;}}
}
B688fee:L688fee:{c.instructions+=2;NFSU2_TR(0x688fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(U+4))));
}
B688ff1:{NFSU2_TR(0x688ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B688ff4:L688ff4:{c.instructions+=1;NFSU2_TR(0x688ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B688ff7:L688ff7:{c.instructions+=1;NFSU2_TR(0x688ff7);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffbe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B688ffe:L688ffe:{c.instructions+=2;NFSU2_TR(0x688ffe);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B688fff:{NFSU2_TR(0x688fff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
TAIL_STATIC(0x689002u,689);
}
XIT:NFSU2_TR_EXIT(0x688,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
