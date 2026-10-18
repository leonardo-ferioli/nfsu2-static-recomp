#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_45a(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46c(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_739(u8* __restrict R,Cpu& c);
u32 body_73a(u8* __restrict R,Cpu& c);
u32 body_73c(u8* __restrict R,Cpu& c);
u32 body_73d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x73b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x73b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_73b(u8* __restrict R,Cpu& c);
u32 page_73b(Cpu& c){return body_73b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_73b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x73b001:goto L73b001;
case 0x73b006:c.instructions+=1;goto B73b006;
case 0x73b008:goto L73b008;
case 0x73b00b:goto L73b00b;
case 0x73b00f:c.instructions+=5;goto B73b00f;
case 0x73b013:c.instructions+=4;goto B73b013;
case 0x73b014:c.instructions+=3;goto B73b014;
case 0x73b015:c.instructions+=2;goto B73b015;
case 0x73b016:c.instructions+=1;goto B73b016;
case 0x73b01b:goto L73b01b;
case 0x73b01e:c.instructions+=3;goto B73b01e;
case 0x73b028:c.instructions+=2;goto B73b028;
case 0x73b032:c.instructions+=1;goto B73b032;
case 0x73b2c0:goto L73b2c0;
case 0x73b300:goto L73b300;
case 0x73b304:c.instructions+=11;goto B73b304;
case 0x73b305:c.instructions+=10;goto B73b305;
case 0x73b306:c.instructions+=9;goto B73b306;
case 0x73b307:c.instructions+=8;goto B73b307;
case 0x73b308:c.instructions+=7;goto B73b308;
case 0x73b30a:c.instructions+=6;goto B73b30a;
case 0x73b30c:c.instructions+=5;goto B73b30c;
case 0x73b312:c.instructions+=4;goto B73b312;
case 0x73b318:c.instructions+=3;goto B73b318;
case 0x73b31d:c.instructions+=2;goto B73b31d;
case 0x73b31f:c.instructions+=1;goto B73b31f;
case 0x73b321:goto L73b321;
case 0x73b327:c.instructions+=3;goto B73b327;
case 0x73b329:c.instructions+=2;goto B73b329;
case 0x73b32f:c.instructions+=1;goto B73b32f;
case 0x73b331:goto L73b331;
case 0x73b333:c.instructions+=1;goto B73b333;
case 0x73b335:goto L73b335;
case 0x73b337:c.instructions+=1;goto B73b337;
case 0x73b339:goto L73b339;
case 0x73b33b:c.instructions+=1;goto B73b33b;
case 0x73b340:goto L73b340;
case 0x73b345:c.instructions+=3;goto B73b345;
case 0x73b347:c.instructions+=2;goto B73b347;
case 0x73b349:c.instructions+=1;goto B73b349;
case 0x73b34b:goto L73b34b;
case 0x73b34c:c.instructions+=2;goto B73b34c;
case 0x73b34f:c.instructions+=1;goto B73b34f;
case 0x73b351:goto L73b351;
case 0x73b357:c.instructions+=3;goto B73b357;
case 0x73b358:c.instructions+=2;goto B73b358;
case 0x73b35e:c.instructions+=1;goto B73b35e;
case 0x73b360:goto L73b360;
case 0x73b361:c.instructions+=5;goto B73b361;
case 0x73b362:c.instructions+=4;goto B73b362;
case 0x73b363:c.instructions+=3;goto B73b363;
case 0x73b365:c.instructions+=2;goto B73b365;
case 0x73b366:c.instructions+=1;goto B73b366;
case 0x73b367:goto L73b367;
case 0x73b36d:c.instructions+=7;goto B73b36d;
case 0x73b36f:c.instructions+=6;goto B73b36f;
case 0x73b376:c.instructions+=5;goto B73b376;
case 0x73b377:c.instructions+=4;goto B73b377;
case 0x73b378:c.instructions+=3;goto B73b378;
case 0x73b379:c.instructions+=2;goto B73b379;
case 0x73b37a:c.instructions+=1;goto B73b37a;
case 0x73b400:goto L73b400;
case 0x73b405:c.instructions+=10;goto B73b405;
case 0x73b406:c.instructions+=9;goto B73b406;
case 0x73b407:c.instructions+=8;goto B73b407;
case 0x73b40e:c.instructions+=7;goto B73b40e;
case 0x73b40f:c.instructions+=6;goto B73b40f;
case 0x73b415:c.instructions+=5;goto B73b415;
case 0x73b41c:c.instructions+=4;goto B73b41c;
case 0x73b421:c.instructions+=3;goto B73b421;
case 0x73b424:c.instructions+=2;goto B73b424;
case 0x73b429:c.instructions+=1;goto B73b429;
case 0x73b430:goto L73b430;
case 0x73b433:c.instructions+=2;goto B73b433;
case 0x73b435:c.instructions+=1;goto B73b435;
case 0x73b437:goto L73b437;
case 0x73b43a:c.instructions+=2;goto B73b43a;
case 0x73b43c:c.instructions+=1;goto B73b43c;
case 0x73b43e:goto L73b43e;
case 0x73b441:c.instructions+=1;goto B73b441;
case 0x73b443:goto L73b443;
case 0x73b446:c.instructions+=2;goto B73b446;
case 0x73b448:c.instructions+=1;goto B73b448;
case 0x73b44a:goto L73b44a;
case 0x73b44d:c.instructions+=2;goto B73b44d;
case 0x73b450:c.instructions+=1;goto B73b450;
case 0x73b452:goto L73b452;
case 0x73b454:c.instructions+=6;goto B73b454;
case 0x73b457:c.instructions+=5;goto B73b457;
case 0x73b45a:c.instructions+=4;goto B73b45a;
case 0x73b45d:c.instructions+=3;goto B73b45d;
case 0x73b460:c.instructions+=2;goto B73b460;
case 0x73b462:c.instructions+=1;goto B73b462;
case 0x73b465:goto L73b465;
case 0x73b467:c.instructions+=2;goto B73b467;
case 0x73b469:c.instructions+=1;goto B73b469;
case 0x73b46b:goto L73b46b;
case 0x73b46e:c.instructions+=2;goto B73b46e;
case 0x73b470:c.instructions+=1;goto B73b470;
case 0x73b472:goto L73b472;
case 0x73b475:c.instructions+=1;goto B73b475;
case 0x73b477:goto L73b477;
case 0x73b47a:c.instructions+=2;goto B73b47a;
case 0x73b47c:c.instructions+=1;goto B73b47c;
case 0x73b47e:goto L73b47e;
case 0x73b481:c.instructions+=2;goto B73b481;
case 0x73b484:c.instructions+=1;goto B73b484;
case 0x73b486:goto L73b486;
case 0x73b488:c.instructions+=6;goto B73b488;
case 0x73b48b:c.instructions+=5;goto B73b48b;
case 0x73b48e:c.instructions+=4;goto B73b48e;
case 0x73b491:c.instructions+=3;goto B73b491;
case 0x73b494:c.instructions+=2;goto B73b494;
case 0x73b496:c.instructions+=1;goto B73b496;
case 0x73b499:goto L73b499;
case 0x73b49c:c.instructions+=2;goto B73b49c;
case 0x73b49e:c.instructions+=1;goto B73b49e;
case 0x73b4a0:goto L73b4a0;
case 0x73b4a3:c.instructions+=2;goto B73b4a3;
case 0x73b4a5:c.instructions+=1;goto B73b4a5;
case 0x73b4a7:goto L73b4a7;
case 0x73b4aa:c.instructions+=1;goto B73b4aa;
case 0x73b4ac:goto L73b4ac;
case 0x73b4af:c.instructions+=2;goto B73b4af;
case 0x73b4b1:c.instructions+=1;goto B73b4b1;
case 0x73b4b3:goto L73b4b3;
case 0x73b4b6:c.instructions+=2;goto B73b4b6;
case 0x73b4b9:c.instructions+=1;goto B73b4b9;
case 0x73b4bb:goto L73b4bb;
case 0x73b4be:c.instructions+=5;goto B73b4be;
case 0x73b4c0:c.instructions+=4;goto B73b4c0;
case 0x73b4c3:c.instructions+=3;goto B73b4c3;
case 0x73b4c6:c.instructions+=2;goto B73b4c6;
case 0x73b4c8:c.instructions+=1;goto B73b4c8;
case 0x73b4cb:goto L73b4cb;
case 0x73b4ce:c.instructions+=2;goto B73b4ce;
case 0x73b4d0:c.instructions+=1;goto B73b4d0;
case 0x73b4d2:goto L73b4d2;
case 0x73b4d5:c.instructions+=2;goto B73b4d5;
case 0x73b4d7:c.instructions+=1;goto B73b4d7;
case 0x73b4d9:goto L73b4d9;
case 0x73b4dc:c.instructions+=1;goto B73b4dc;
case 0x73b4de:goto L73b4de;
case 0x73b4e1:c.instructions+=2;goto B73b4e1;
case 0x73b4e3:c.instructions+=1;goto B73b4e3;
case 0x73b4e5:goto L73b4e5;
case 0x73b4e8:c.instructions+=2;goto B73b4e8;
case 0x73b4eb:c.instructions+=1;goto B73b4eb;
case 0x73b4ed:goto L73b4ed;
case 0x73b4ef:c.instructions+=6;goto B73b4ef;
case 0x73b4f2:c.instructions+=5;goto B73b4f2;
case 0x73b4f5:c.instructions+=4;goto B73b4f5;
case 0x73b4f8:c.instructions+=3;goto B73b4f8;
case 0x73b4fb:c.instructions+=2;goto B73b4fb;
case 0x73b4fd:c.instructions+=1;goto B73b4fd;
case 0x73b500:goto L73b500;
case 0x73b503:c.instructions+=4;goto B73b503;
case 0x73b506:c.instructions+=3;goto B73b506;
case 0x73b509:c.instructions+=2;goto B73b509;
case 0x73b50c:c.instructions+=1;goto B73b50c;
case 0x73b512:goto L73b512;
case 0x73b513:c.instructions+=3;goto B73b513;
case 0x73b514:c.instructions+=2;goto B73b514;
case 0x73b515:c.instructions+=1;goto B73b515;
case 0x73b520:goto L73b520;
case 0x73b521:c.instructions+=7;goto B73b521;
case 0x73b525:c.instructions+=6;goto B73b525;
case 0x73b526:c.instructions+=5;goto B73b526;
case 0x73b527:c.instructions+=4;goto B73b527;
case 0x73b529:c.instructions+=3;goto B73b529;
case 0x73b52a:c.instructions+=2;goto B73b52a;
case 0x73b52c:c.instructions+=1;goto B73b52c;
case 0x73b531:goto L73b531;
case 0x73b536:c.instructions+=3;goto B73b536;
case 0x73b538:c.instructions+=2;goto B73b538;
case 0x73b53a:c.instructions+=1;goto B73b53a;
case 0x73b53c:goto L73b53c;
case 0x73b53f:c.instructions+=2;goto B73b53f;
case 0x73b541:c.instructions+=1;goto B73b541;
case 0x73b543:goto L73b543;
case 0x73b545:c.instructions+=2;goto B73b545;
case 0x73b54a:c.instructions+=1;goto B73b54a;
case 0x73b550:goto L73b550;
case 0x73b553:c.instructions+=2;goto B73b553;
case 0x73b555:c.instructions+=1;goto B73b555;
case 0x73b557:goto L73b557;
case 0x73b558:goto L73b558;
case 0x73b55b:c.instructions+=1;goto B73b55b;
case 0x73b55d:goto L73b55d;
case 0x73b55e:goto L73b55e;
case 0x73b561:c.instructions+=2;goto B73b561;
case 0x73b563:c.instructions+=1;goto B73b563;
case 0x73b565:goto L73b565;
case 0x73b566:goto L73b566;
case 0x73b569:c.instructions+=2;goto B73b569;
case 0x73b56b:c.instructions+=1;goto B73b56b;
case 0x73b56d:goto L73b56d;
case 0x73b56e:goto L73b56e;
case 0x73b571:c.instructions+=2;goto B73b571;
case 0x73b573:c.instructions+=1;goto B73b573;
case 0x73b575:goto L73b575;
case 0x73b576:goto L73b576;
case 0x73b579:c.instructions+=2;goto B73b579;
case 0x73b57b:c.instructions+=1;goto B73b57b;
case 0x73b57d:goto L73b57d;
case 0x73b57e:goto L73b57e;
case 0x73b581:c.instructions+=2;goto B73b581;
case 0x73b583:c.instructions+=1;goto B73b583;
case 0x73b585:goto L73b585;
case 0x73b586:goto L73b586;
case 0x73b589:c.instructions+=2;goto B73b589;
case 0x73b58b:c.instructions+=1;goto B73b58b;
case 0x73b58d:goto L73b58d;
case 0x73b58e:goto L73b58e;
case 0x73b591:c.instructions+=2;goto B73b591;
case 0x73b592:c.instructions+=1;goto B73b592;
case 0x73b594:goto L73b594;
case 0x73b59a:c.instructions+=3;goto B73b59a;
case 0x73b59b:c.instructions+=2;goto B73b59b;
case 0x73b5a1:c.instructions+=1;goto B73b5a1;
case 0x73b5a3:goto L73b5a3;
case 0x73b5a4:c.instructions+=4;goto B73b5a4;
case 0x73b5a5:c.instructions+=3;goto B73b5a5;
case 0x73b5a6:c.instructions+=2;goto B73b5a6;
case 0x73b5a7:c.instructions+=1;goto B73b5a7;
case 0x73b620:goto L73b620;
case 0x73b625:c.instructions+=2;goto B73b625;
case 0x73b627:c.instructions+=1;goto B73b627;
case 0x73b629:goto L73b629;
case 0x73b62c:c.instructions+=1;goto B73b62c;
case 0x73b631:goto L73b631;
case 0x73b635:c.instructions+=2;goto B73b635;
case 0x73b637:c.instructions+=1;goto B73b637;
case 0x73b639:goto L73b639;
case 0x73b63c:c.instructions+=1;goto B73b63c;
case 0x73b63e:goto L73b63e;
case 0x73b640:c.instructions+=6;goto B73b640;
case 0x73b646:c.instructions+=5;goto B73b646;
case 0x73b647:c.instructions+=4;goto B73b647;
case 0x73b64d:c.instructions+=3;goto B73b64d;
case 0x73b64f:c.instructions+=2;goto B73b64f;
case 0x73b650:c.instructions+=1;goto B73b650;
case 0x73b652:goto L73b652;
case 0x73b658:c.instructions+=4;goto B73b658;
case 0x73b65e:c.instructions+=3;goto B73b65e;
case 0x73b664:c.instructions+=2;goto B73b664;
case 0x73b669:c.instructions+=1;goto B73b669;
case 0x73b66a:goto L73b66a;
case 0x73b66d:c.instructions+=1;goto B73b66d;
case 0x73b66f:goto L73b66f;
case 0x73b671:c.instructions+=1;goto B73b671;
case 0x73b676:goto L73b676;
case 0x73b680:goto L73b680;
case 0x73b684:c.instructions+=4;goto B73b684;
case 0x73b686:c.instructions+=3;goto B73b686;
case 0x73b68b:c.instructions+=2;goto B73b68b;
case 0x73b68c:c.instructions+=1;goto B73b68c;
case 0x73b690:goto L73b690;
case 0x73b693:c.instructions+=2;goto B73b693;
case 0x73b695:c.instructions+=1;goto B73b695;
case 0x73b697:goto L73b697;
case 0x73b699:c.instructions+=1;goto B73b699;
case 0x73b69b:goto L73b69b;
case 0x73b6a0:c.instructions+=3;goto B73b6a0;
case 0x73b6a1:c.instructions+=2;goto B73b6a1;
case 0x73b6a6:c.instructions+=1;goto B73b6a6;
case 0x73b6a8:goto L73b6a8;
case 0x73b6aa:c.instructions+=2;goto B73b6aa;
case 0x73b6ab:c.instructions+=1;goto B73b6ab;
case 0x73b6ac:goto L73b6ac;
case 0x73b6ad:c.instructions+=2;goto B73b6ad;
case 0x73b6b1:c.instructions+=1;goto B73b6b1;
case 0x73b6c0:goto L73b6c0;
case 0x73b6c1:c.instructions+=9;goto B73b6c1;
case 0x73b6c3:c.instructions+=8;goto B73b6c3;
case 0x73b6c6:c.instructions+=7;goto B73b6c6;
case 0x73b6cc:c.instructions+=6;goto B73b6cc;
case 0x73b6cd:c.instructions+=5;goto B73b6cd;
case 0x73b6ce:c.instructions+=4;goto B73b6ce;
case 0x73b6cf:c.instructions+=3;goto B73b6cf;
case 0x73b6d1:c.instructions+=2;goto B73b6d1;
case 0x73b6d2:c.instructions+=1;goto B73b6d2;
case 0x73b6d4:goto L73b6d4;
case 0x73b6da:c.instructions+=2;goto B73b6da;
case 0x73b6dc:c.instructions+=1;goto B73b6dc;
case 0x73b6de:goto L73b6de;
case 0x73b6e1:c.instructions+=2;goto B73b6e1;
case 0x73b6e4:c.instructions+=1;goto B73b6e4;
case 0x73b6e6:goto L73b6e6;
case 0x73b6ec:c.instructions+=1;goto B73b6ec;
case 0x73b6f0:goto L73b6f0;
case 0x73b6f3:c.instructions+=2;goto B73b6f3;
case 0x73b6f5:c.instructions+=1;goto B73b6f5;
case 0x73b6f7:goto L73b6f7;
case 0x73b6fd:c.instructions+=2;goto B73b6fd;
case 0x73b700:c.instructions+=1;goto B73b700;
case 0x73b702:goto L73b702;
case 0x73b708:c.instructions+=3;goto B73b708;
case 0x73b70d:c.instructions+=2;goto B73b70d;
case 0x73b70f:c.instructions+=1;goto B73b70f;
case 0x73b713:goto L73b713;
case 0x73b715:goto L73b715;
case 0x73b71a:c.instructions+=2;goto B73b71a;
case 0x73b71c:c.instructions+=1;goto B73b71c;
case 0x73b71e:goto L73b71e;
case 0x73b720:goto L73b720;
case 0x73b725:c.instructions+=2;goto B73b725;
case 0x73b729:c.instructions+=1;goto B73b729;
case 0x73b72b:goto L73b72b;
case 0x73b72d:goto L73b72d;
case 0x73b732:c.instructions+=2;goto B73b732;
case 0x73b737:c.instructions+=1;goto B73b737;
case 0x73b739:goto L73b739;
case 0x73b73f:c.instructions+=3;goto B73b73f;
case 0x73b740:c.instructions+=2;goto B73b740;
case 0x73b746:c.instructions+=1;goto B73b746;
case 0x73b748:goto L73b748;
case 0x73b749:c.instructions+=6;goto B73b749;
case 0x73b74a:c.instructions+=5;goto B73b74a;
case 0x73b74b:c.instructions+=4;goto B73b74b;
case 0x73b74c:c.instructions+=3;goto B73b74c;
case 0x73b74e:c.instructions+=2;goto B73b74e;
case 0x73b74f:c.instructions+=1;goto B73b74f;
case 0x73b750:goto L73b750;
case 0x73b753:c.instructions+=5;goto B73b753;
case 0x73b75a:c.instructions+=4;goto B73b75a;
case 0x73b75d:c.instructions+=3;goto B73b75d;
case 0x73b75f:c.instructions+=2;goto B73b75f;
case 0x73b763:c.instructions+=1;goto B73b763;
case 0x73b765:goto L73b765;
case 0x73b76a:c.instructions+=3;goto B73b76a;
case 0x73b76d:c.instructions+=2;goto B73b76d;
case 0x73b771:c.instructions+=1;goto B73b771;
case 0x73b773:goto L73b773;
case 0x73b779:c.instructions+=3;goto B73b779;
case 0x73b77c:c.instructions+=2;goto B73b77c;
case 0x73b780:c.instructions+=1;goto B73b780;
case 0x73b785:goto L73b785;
case 0x73b786:c.instructions+=6;goto B73b786;
case 0x73b787:c.instructions+=5;goto B73b787;
case 0x73b788:c.instructions+=4;goto B73b788;
case 0x73b789:c.instructions+=3;goto B73b789;
case 0x73b791:c.instructions+=2;goto B73b791;
case 0x73b796:c.instructions+=1;goto B73b796;
case 0x73b7a0:goto L73b7a0;
case 0x73b7a6:c.instructions+=3;goto B73b7a6;
case 0x73b7a9:c.instructions+=2;goto B73b7a9;
case 0x73b7ab:c.instructions+=1;goto B73b7ab;
case 0x73b7b1:goto L73b7b1;
case 0x73b7b4:c.instructions+=2;goto B73b7b4;
case 0x73b7b6:c.instructions+=1;goto B73b7b6;
case 0x73b7bc:goto L73b7bc;
case 0x73b7bf:c.instructions+=5;goto B73b7bf;
case 0x73b7c5:c.instructions+=4;goto B73b7c5;
case 0x73b7c8:c.instructions+=3;goto B73b7c8;
case 0x73b7ca:c.instructions+=2;goto B73b7ca;
case 0x73b7cf:c.instructions+=1;goto B73b7cf;
case 0x73b7d5:goto L73b7d5;
case 0x73b7d8:c.instructions+=2;goto B73b7d8;
case 0x73b7da:c.instructions+=1;goto B73b7da;
case 0x73b7e0:goto L73b7e0;
case 0x73b7e3:c.instructions+=3;goto B73b7e3;
case 0x73b7e5:c.instructions+=2;goto B73b7e5;
case 0x73b7e7:c.instructions+=1;goto B73b7e7;
case 0x73b7e9:goto L73b7e9;
case 0x73b7ea:c.instructions+=1;goto B73b7ea;
case 0x73b7ef:goto L73b7ef;
case 0x73b7f2:goto L73b7f2;
case 0x73b7f5:c.instructions+=2;goto B73b7f5;
case 0x73b7f7:c.instructions+=1;goto B73b7f7;
case 0x73b7f9:goto L73b7f9;
case 0x73b7fa:c.instructions+=1;goto B73b7fa;
case 0x73b7ff:goto L73b7ff;
case 0x73b802:goto L73b802;
case 0x73b805:c.instructions+=2;goto B73b805;
case 0x73b807:c.instructions+=1;goto B73b807;
case 0x73b809:goto L73b809;
case 0x73b80a:c.instructions+=1;goto B73b80a;
case 0x73b80f:goto L73b80f;
case 0x73b812:goto L73b812;
case 0x73b817:c.instructions+=8;goto B73b817;
case 0x73b819:c.instructions+=7;goto B73b819;
case 0x73b81c:c.instructions+=6;goto B73b81c;
case 0x73b81e:c.instructions+=5;goto B73b81e;
case 0x73b820:c.instructions+=4;goto B73b820;
case 0x73b822:c.instructions+=3;goto B73b822;
case 0x73b824:c.instructions+=2;goto B73b824;
case 0x73b826:c.instructions+=1;goto B73b826;
case 0x73b82c:goto L73b82c;
case 0x73b82e:c.instructions+=1;goto B73b82e;
case 0x73b834:goto L73b834;
case 0x73b837:c.instructions+=2;goto B73b837;
case 0x73b839:c.instructions+=1;goto B73b839;
case 0x73b83b:goto L73b83b;
case 0x73b83f:c.instructions+=5;goto B73b83f;
case 0x73b845:c.instructions+=4;goto B73b845;
case 0x73b847:c.instructions+=3;goto B73b847;
case 0x73b849:c.instructions+=2;goto B73b849;
case 0x73b84b:c.instructions+=1;goto B73b84b;
case 0x73b84d:goto L73b84d;
case 0x73b850:c.instructions+=3;goto B73b850;
case 0x73b852:c.instructions+=2;goto B73b852;
case 0x73b853:c.instructions+=1;goto B73b853;
case 0x73b858:goto L73b858;
case 0x73b85b:c.instructions+=2;goto B73b85b;
case 0x73b862:c.instructions+=1;goto B73b862;
case 0x73b864:goto L73b864;
case 0x73b866:c.instructions+=1;goto B73b866;
case 0x73b868:goto L73b868;
case 0x73b86b:c.instructions+=2;goto B73b86b;
case 0x73b86c:c.instructions+=1;goto B73b86c;
case 0x73b871:goto L73b871;
case 0x73b874:c.instructions+=2;goto B73b874;
case 0x73b876:c.instructions+=1;goto B73b876;
case 0x73b878:goto L73b878;
case 0x73b879:c.instructions+=1;goto B73b879;
case 0x73b87e:goto L73b87e;
case 0x73b881:c.instructions+=3;goto B73b881;
case 0x73b884:c.instructions+=2;goto B73b884;
case 0x73b886:c.instructions+=1;goto B73b886;
case 0x73b888:goto L73b888;
case 0x73b88c:c.instructions+=3;goto B73b88c;
case 0x73b88e:c.instructions+=2;goto B73b88e;
case 0x73b890:c.instructions+=1;goto B73b890;
case 0x73b892:goto L73b892;
case 0x73b894:goto L73b894;
case 0x73b897:c.instructions+=1;goto B73b897;
case 0x73b899:goto L73b899;
case 0x73b89c:c.instructions+=2;goto B73b89c;
case 0x73b89e:c.instructions+=1;goto B73b89e;
case 0x73b8a0:goto L73b8a0;
case 0x73b8a3:c.instructions+=2;goto B73b8a3;
case 0x73b8a4:c.instructions+=1;goto B73b8a4;
case 0x73b8a9:goto L73b8a9;
case 0x73b8ac:c.instructions+=2;goto B73b8ac;
case 0x73b8ae:c.instructions+=1;goto B73b8ae;
case 0x73b8b0:goto L73b8b0;
case 0x73b8b7:goto L73b8b7;
case 0x73b8bb:c.instructions+=2;goto B73b8bb;
case 0x73b8bc:c.instructions+=1;goto B73b8bc;
case 0x73b8c1:goto L73b8c1;
case 0x73b8c4:goto L73b8c4;
case 0x73b8c8:c.instructions+=5;goto B73b8c8;
case 0x73b8c9:c.instructions+=4;goto B73b8c9;
case 0x73b8cc:c.instructions+=3;goto B73b8cc;
case 0x73b8d2:c.instructions+=2;goto B73b8d2;
case 0x73b8d6:c.instructions+=1;goto B73b8d6;
case 0x73b8dc:goto L73b8dc;
case 0x73b8e0:goto L73b8e0;
case 0x73b8e2:c.instructions+=1;goto B73b8e2;
case 0x73b8e4:goto L73b8e4;
case 0x73b8e9:goto L73b8e9;
case 0x73b8eb:c.instructions+=1;goto B73b8eb;
case 0x73b8ed:goto L73b8ed;
case 0x73b8ee:c.instructions+=5;goto B73b8ee;
case 0x73b8ef:c.instructions+=4;goto B73b8ef;
case 0x73b8f0:c.instructions+=3;goto B73b8f0;
case 0x73b8f1:c.instructions+=2;goto B73b8f1;
case 0x73b8f4:c.instructions+=1;goto B73b8f4;
case 0x73b900:goto L73b900;
case 0x73b905:c.instructions+=2;goto B73b905;
case 0x73b907:c.instructions+=1;goto B73b907;
case 0x73b90d:goto L73b90d;
case 0x73b912:c.instructions+=2;goto B73b912;
case 0x73b914:c.instructions+=1;goto B73b914;
case 0x73b91a:goto L73b91a;
case 0x73b91f:c.instructions+=2;goto B73b91f;
case 0x73b921:c.instructions+=1;goto B73b921;
case 0x73b927:goto L73b927;
case 0x73b92b:c.instructions+=6;goto B73b92b;
case 0x73b92c:c.instructions+=5;goto B73b92c;
case 0x73b92d:c.instructions+=4;goto B73b92d;
case 0x73b92e:c.instructions+=3;goto B73b92e;
case 0x73b938:c.instructions+=2;goto B73b938;
case 0x73b93d:c.instructions+=1;goto B73b93d;
case 0x73b942:goto L73b942;
case 0x73b944:c.instructions+=2;goto B73b944;
case 0x73b949:c.instructions+=1;goto B73b949;
case 0x73b94e:goto L73b94e;
case 0x73b951:c.instructions+=4;goto B73b951;
case 0x73b953:c.instructions+=3;goto B73b953;
case 0x73b958:c.instructions+=2;goto B73b958;
case 0x73b95d:c.instructions+=1;goto B73b95d;
case 0x73b960:goto L73b960;
case 0x73b963:c.instructions+=1;goto B73b963;
case 0x73b965:goto L73b965;
case 0x73b966:c.instructions+=1;goto B73b966;
case 0x73b96b:goto L73b96b;
case 0x73b96e:c.instructions+=2;goto B73b96e;
case 0x73b970:c.instructions+=1;goto B73b970;
case 0x73b972:goto L73b972;
case 0x73b977:goto L73b977;
case 0x73b97c:goto L73b97c;
case 0x73b97d:c.instructions+=3;goto B73b97d;
case 0x73b983:c.instructions+=2;goto B73b983;
case 0x73b984:c.instructions+=1;goto B73b984;
case 0x73b986:goto L73b986;
case 0x73b988:c.instructions+=1;goto B73b988;
case 0x73b98d:goto L73b98d;
case 0x73b990:c.instructions+=5;goto B73b990;
case 0x73b991:c.instructions+=4;goto B73b991;
case 0x73b992:c.instructions+=3;goto B73b992;
case 0x73b99c:c.instructions+=2;goto B73b99c;
case 0x73b9a6:c.instructions+=1;goto B73b9a6;
case 0x73b9a7:goto L73b9a7;
case 0x73b9b0:goto L73b9b0;
case 0x73b9b2:c.instructions+=1;goto B73b9b2;
case 0x73b9b7:goto L73b9b7;
case 0x73b9b8:c.instructions+=1;goto B73b9b8;
case 0x73b9c0:goto L73b9c0;
case 0x73b9c2:c.instructions+=1;goto B73b9c2;
case 0x73b9c7:goto L73b9c7;
case 0x73b9c8:c.instructions+=1;goto B73b9c8;
case 0x73b9d0:goto L73b9d0;
case 0x73b9d4:c.instructions+=25;goto B73b9d4;
case 0x73b9d7:c.instructions+=24;goto B73b9d7;
case 0x73b9db:c.instructions+=23;goto B73b9db;
case 0x73b9dc:c.instructions+=22;goto B73b9dc;
case 0x73b9de:c.instructions+=21;goto B73b9de;
case 0x73b9e1:c.instructions+=20;goto B73b9e1;
case 0x73b9e2:c.instructions+=19;goto B73b9e2;
case 0x73b9e5:c.instructions+=18;goto B73b9e5;
case 0x73b9e7:c.instructions+=17;goto B73b9e7;
case 0x73b9e9:c.instructions+=16;goto B73b9e9;
case 0x73b9ec:c.instructions+=15;goto B73b9ec;
case 0x73b9ef:c.instructions+=14;goto B73b9ef;
case 0x73b9f2:c.instructions+=13;goto B73b9f2;
case 0x73b9f5:c.instructions+=12;goto B73b9f5;
case 0x73b9f8:c.instructions+=11;goto B73b9f8;
case 0x73b9fb:c.instructions+=10;goto B73b9fb;
case 0x73b9fe:c.instructions+=9;goto B73b9fe;
case 0x73ba00:c.instructions+=8;goto B73ba00;
case 0x73ba06:c.instructions+=7;goto B73ba06;
case 0x73ba0c:c.instructions+=6;goto B73ba0c;
case 0x73ba0e:c.instructions+=5;goto B73ba0e;
case 0x73ba14:c.instructions+=4;goto B73ba14;
case 0x73ba16:c.instructions+=3;goto B73ba16;
case 0x73ba19:c.instructions+=2;goto B73ba19;
case 0x73ba1a:c.instructions+=1;goto B73ba1a;
case 0x73ba20:goto L73ba20;
case 0x73ba24:c.instructions+=7;goto B73ba24;
case 0x73ba25:c.instructions+=6;goto B73ba25;
case 0x73ba26:c.instructions+=5;goto B73ba26;
case 0x73ba2a:c.instructions+=4;goto B73ba2a;
case 0x73ba2d:c.instructions+=3;goto B73ba2d;
case 0x73ba2f:c.instructions+=2;goto B73ba2f;
case 0x73ba31:c.instructions+=1;goto B73ba31;
case 0x73ba33:goto L73ba33;
case 0x73ba37:goto L73ba37;
case 0x73ba39:c.instructions+=1;goto B73ba39;
case 0x73ba3b:goto L73ba3b;
case 0x73ba3f:c.instructions+=1;goto B73ba3f;
case 0x73ba41:goto L73ba41;
case 0x73ba44:c.instructions+=4;goto B73ba44;
case 0x73ba47:c.instructions+=3;goto B73ba47;
case 0x73ba4a:c.instructions+=2;goto B73ba4a;
case 0x73ba4d:c.instructions+=1;goto B73ba4d;
case 0x73ba4f:goto L73ba4f;
case 0x73ba50:c.instructions+=1;goto B73ba50;
case 0x73ba52:goto L73ba52;
case 0x73ba55:c.instructions+=1;goto B73ba55;
case 0x73ba57:goto L73ba57;
case 0x73ba5a:c.instructions+=1;goto B73ba5a;
case 0x73ba5c:goto L73ba5c;
case 0x73ba5e:c.instructions+=3;goto B73ba5e;
case 0x73ba5f:c.instructions+=2;goto B73ba5f;
case 0x73ba61:c.instructions+=1;goto B73ba61;
case 0x73ba63:goto L73ba63;
case 0x73ba64:goto L73ba64;
case 0x73ba66:c.instructions+=1;goto B73ba66;
case 0x73ba68:goto L73ba68;
case 0x73ba6f:goto L73ba6f;
case 0x73ba72:c.instructions+=2;goto B73ba72;
case 0x73ba74:c.instructions+=1;goto B73ba74;
case 0x73ba76:goto L73ba76;
case 0x73ba77:c.instructions+=2;goto B73ba77;
case 0x73ba78:c.instructions+=1;goto B73ba78;
case 0x73ba80:goto L73ba80;
case 0x73ba84:c.instructions+=4;goto B73ba84;
case 0x73ba88:c.instructions+=3;goto B73ba88;
case 0x73ba8b:c.instructions+=2;goto B73ba8b;
case 0x73ba8d:c.instructions+=1;goto B73ba8d;
case 0x73ba8f:goto L73ba8f;
case 0x73ba94:goto L73ba94;
case 0x73ba98:c.instructions+=1;goto B73ba98;
case 0x73ba9a:goto L73ba9a;
case 0x73ba9d:c.instructions+=3;goto B73ba9d;
case 0x73baa0:c.instructions+=2;goto B73baa0;
case 0x73baa2:c.instructions+=1;goto B73baa2;
case 0x73baa4:goto L73baa4;
case 0x73bad0:goto L73bad0;
case 0x73bad3:c.instructions+=4;goto B73bad3;
case 0x73bad4:c.instructions+=3;goto B73bad4;
case 0x73bad8:c.instructions+=2;goto B73bad8;
case 0x73bada:c.instructions+=1;goto B73bada;
case 0x73badc:goto L73badc;
case 0x73bae1:c.instructions+=3;goto B73bae1;
case 0x73bae2:c.instructions+=2;goto B73bae2;
case 0x73bae5:c.instructions+=1;goto B73bae5;
case 0x73bae6:goto L73bae6;
case 0x73bae9:c.instructions+=3;goto B73bae9;
case 0x73baeb:c.instructions+=2;goto B73baeb;
case 0x73baf5:c.instructions+=1;goto B73baf5;
case 0x73baf7:goto L73baf7;
case 0x73bafd:c.instructions+=6;goto B73bafd;
case 0x73baff:c.instructions+=5;goto B73baff;
case 0x73bb02:c.instructions+=4;goto B73bb02;
case 0x73bb08:c.instructions+=3;goto B73bb08;
case 0x73bb09:c.instructions+=2;goto B73bb09;
case 0x73bb0c:c.instructions+=1;goto B73bb0c;
case 0x73bb0d:goto L73bb0d;
case 0x73bb14:c.instructions+=1;goto B73bb14;
case 0x73bb16:goto L73bb16;
case 0x73bb1a:c.instructions+=4;goto B73bb1a;
case 0x73bb1b:c.instructions+=3;goto B73bb1b;
case 0x73bb1c:c.instructions+=2;goto B73bb1c;
case 0x73bb26:c.instructions+=1;goto B73bb26;
case 0x73bb2b:goto L73bb2b;
case 0x73bb2e:c.instructions+=2;goto B73bb2e;
case 0x73bb30:c.instructions+=1;goto B73bb30;
case 0x73bb32:goto L73bb32;
case 0x73bb38:c.instructions+=6;goto B73bb38;
case 0x73bb3b:c.instructions+=5;goto B73bb3b;
case 0x73bb3e:c.instructions+=4;goto B73bb3e;
case 0x73bb42:c.instructions+=3;goto B73bb42;
case 0x73bb44:c.instructions+=2;goto B73bb44;
case 0x73bb46:c.instructions+=1;goto B73bb46;
case 0x73bb48:goto L73bb48;
case 0x73bb52:goto L73bb52;
case 0x73bb58:c.instructions+=3;goto B73bb58;
case 0x73bb59:c.instructions+=2;goto B73bb59;
case 0x73bb5c:c.instructions+=1;goto B73bb5c;
case 0x73bb60:goto L73bb60;
case 0x73bb61:c.instructions+=21;goto B73bb61;
case 0x73bb63:c.instructions+=20;goto B73bb63;
case 0x73bb66:c.instructions+=19;goto B73bb66;
case 0x73bb6c:c.instructions+=18;goto B73bb6c;
case 0x73bb72:c.instructions+=17;goto B73bb72;
case 0x73bb78:c.instructions+=16;goto B73bb78;
case 0x73bb79:c.instructions+=15;goto B73bb79;
case 0x73bb7c:c.instructions+=14;goto B73bb7c;
case 0x73bb7f:c.instructions+=13;goto B73bb7f;
case 0x73bb83:c.instructions+=12;goto B73bb83;
case 0x73bb85:c.instructions+=11;goto B73bb85;
case 0x73bb86:c.instructions+=10;goto B73bb86;
case 0x73bb87:c.instructions+=9;goto B73bb87;
case 0x73bb8b:c.instructions+=8;goto B73bb8b;
case 0x73bb8f:c.instructions+=7;goto B73bb8f;
case 0x73bb93:c.instructions+=6;goto B73bb93;
case 0x73bb97:c.instructions+=5;goto B73bb97;
case 0x73bb9c:c.instructions+=4;goto B73bb9c;
case 0x73bb9e:c.instructions+=3;goto B73bb9e;
case 0x73bba0:c.instructions+=2;goto B73bba0;
case 0x73bba2:c.instructions+=1;goto B73bba2;
case 0x73bba8:goto L73bba8;
case 0x73bbad:c.instructions+=6;goto B73bbad;
case 0x73bbb0:c.instructions+=5;goto B73bbb0;
case 0x73bbb2:c.instructions+=4;goto B73bbb2;
case 0x73bbb7:c.instructions+=3;goto B73bbb7;
case 0x73bbb9:c.instructions+=2;goto B73bbb9;
case 0x73bbba:c.instructions+=1;goto B73bbba;
case 0x73bbbf:goto L73bbbf;
case 0x73bbc1:c.instructions+=4;goto B73bbc1;
case 0x73bbc4:c.instructions+=3;goto B73bbc4;
case 0x73bbc6:c.instructions+=2;goto B73bbc6;
case 0x73bbca:c.instructions+=1;goto B73bbca;
case 0x73bbd0:goto L73bbd0;
case 0x73bbd4:c.instructions+=3;goto B73bbd4;
case 0x73bbd5:c.instructions+=2;goto B73bbd5;
case 0x73bbd8:c.instructions+=1;goto B73bbd8;
case 0x73bbde:goto L73bbde;
case 0x73bbe5:goto L73bbe5;
case 0x73bbe8:c.instructions+=6;goto B73bbe8;
case 0x73bbee:c.instructions+=5;goto B73bbee;
case 0x73bbf1:c.instructions+=4;goto B73bbf1;
case 0x73bbf5:c.instructions+=3;goto B73bbf5;
case 0x73bbf7:c.instructions+=2;goto B73bbf7;
case 0x73bbf9:c.instructions+=1;goto B73bbf9;
case 0x73bbff:goto L73bbff;
case 0x73bc04:goto L73bc04;
case 0x73bc07:c.instructions+=2;goto B73bc07;
case 0x73bc08:c.instructions+=1;goto B73bc08;
case 0x73bc0d:goto L73bc0d;
case 0x73bc11:c.instructions+=3;goto B73bc11;
case 0x73bc12:c.instructions+=2;goto B73bc12;
case 0x73bc13:c.instructions+=1;goto B73bc13;
case 0x73bc18:goto L73bc18;
case 0x73bc1b:c.instructions+=2;goto B73bc1b;
case 0x73bc1d:c.instructions+=1;goto B73bc1d;
case 0x73bc23:goto L73bc23;
case 0x73bc26:c.instructions+=5;goto B73bc26;
case 0x73bc29:c.instructions+=4;goto B73bc29;
case 0x73bc2c:c.instructions+=3;goto B73bc2c;
case 0x73bc2f:c.instructions+=2;goto B73bc2f;
case 0x73bc33:c.instructions+=1;goto B73bc33;
case 0x73bc39:goto L73bc39;
case 0x73bc40:goto L73bc40;
case 0x73bc44:c.instructions+=2;goto B73bc44;
case 0x73bc47:c.instructions+=1;goto B73bc47;
case 0x73bc4c:goto L73bc4c;
case 0x73bc50:c.instructions+=2;goto B73bc50;
case 0x73bc53:c.instructions+=1;goto B73bc53;
case 0x73bc58:goto L73bc58;
case 0x73bc5c:c.instructions+=2;goto B73bc5c;
case 0x73bc5f:c.instructions+=1;goto B73bc5f;
case 0x73bc64:goto L73bc64;
case 0x73bc69:c.instructions+=8;goto B73bc69;
case 0x73bc6c:c.instructions+=7;goto B73bc6c;
case 0x73bc70:c.instructions+=6;goto B73bc70;
case 0x73bc74:c.instructions+=5;goto B73bc74;
case 0x73bc77:c.instructions+=4;goto B73bc77;
case 0x73bc7a:c.instructions+=3;goto B73bc7a;
case 0x73bc7d:c.instructions+=2;goto B73bc7d;
case 0x73bc7f:c.instructions+=1;goto B73bc7f;
case 0x73bc81:goto L73bc81;
case 0x73bc84:c.instructions+=6;goto B73bc84;
case 0x73bc8a:c.instructions+=5;goto B73bc8a;
case 0x73bc90:c.instructions+=4;goto B73bc90;
case 0x73bc93:c.instructions+=3;goto B73bc93;
case 0x73bc98:c.instructions+=2;goto B73bc98;
case 0x73bc9a:c.instructions+=1;goto B73bc9a;
case 0x73bc9d:goto L73bc9d;
case 0x73bca0:c.instructions+=6;goto B73bca0;
case 0x73bca3:c.instructions+=5;goto B73bca3;
case 0x73bca6:c.instructions+=4;goto B73bca6;
case 0x73bcab:c.instructions+=3;goto B73bcab;
case 0x73bcb1:c.instructions+=2;goto B73bcb1;
case 0x73bcb3:c.instructions+=1;goto B73bcb3;
case 0x73bcb5:goto L73bcb5;
case 0x73bcb9:c.instructions+=6;goto B73bcb9;
case 0x73bcbe:c.instructions+=5;goto B73bcbe;
case 0x73bcc1:c.instructions+=4;goto B73bcc1;
case 0x73bcc4:c.instructions+=3;goto B73bcc4;
case 0x73bcc8:c.instructions+=2;goto B73bcc8;
case 0x73bccb:c.instructions+=1;goto B73bccb;
case 0x73bcd0:goto L73bcd0;
case 0x73bcd4:c.instructions+=1;goto B73bcd4;
case 0x73bcd9:goto L73bcd9;
case 0x73bcdd:c.instructions+=4;goto B73bcdd;
case 0x73bce2:c.instructions+=3;goto B73bce2;
case 0x73bce7:c.instructions+=2;goto B73bce7;
case 0x73bce9:c.instructions+=1;goto B73bce9;
case 0x73bced:goto L73bced;
case 0x73bcef:goto L73bcef;
case 0x73bcf3:c.instructions+=5;goto B73bcf3;
case 0x73bcf6:c.instructions+=4;goto B73bcf6;
case 0x73bcf9:c.instructions+=3;goto B73bcf9;
case 0x73bcfc:c.instructions+=2;goto B73bcfc;
case 0x73bcff:c.instructions+=1;goto B73bcff;
case 0x73bd01:goto L73bd01;
case 0x73bd04:c.instructions+=1;goto B73bd04;
case 0x73bd06:goto L73bd06;
case 0x73bd08:c.instructions+=2;goto B73bd08;
case 0x73bd0b:c.instructions+=1;goto B73bd0b;
case 0x73bd13:goto L73bd13;
case 0x73bd16:c.instructions+=1;goto B73bd16;
case 0x73bd18:goto L73bd18;
case 0x73bd1b:c.instructions+=1;goto B73bd1b;
case 0x73bd1d:goto L73bd1d;
case 0x73bd1f:c.instructions+=2;goto B73bd1f;
case 0x73bd22:c.instructions+=1;goto B73bd22;
case 0x73bd2a:goto L73bd2a;
case 0x73bd2c:c.instructions+=1;goto B73bd2c;
case 0x73bd2e:goto L73bd2e;
case 0x73bd31:c.instructions+=3;goto B73bd31;
case 0x73bd35:c.instructions+=2;goto B73bd35;
case 0x73bd37:c.instructions+=1;goto B73bd37;
case 0x73bd39:goto L73bd39;
case 0x73bd3c:c.instructions+=1;goto B73bd3c;
case 0x73bd3e:goto L73bd3e;
case 0x73bd42:c.instructions+=1;goto B73bd42;
case 0x73bd44:goto L73bd44;
case 0x73bd47:c.instructions+=1;goto B73bd47;
case 0x73bd49:goto L73bd49;
case 0x73bd4c:c.instructions+=1;goto B73bd4c;
case 0x73bd4e:goto L73bd4e;
case 0x73bd55:c.instructions+=1;goto B73bd55;
case 0x73bd57:goto L73bd57;
case 0x73bd58:c.instructions+=2;goto B73bd58;
case 0x73bd5d:c.instructions+=1;goto B73bd5d;
case 0x73bd62:goto L73bd62;
case 0x73bd67:c.instructions+=1;goto B73bd67;
case 0x73bd6a:goto L73bd6a;
case 0x73bd6d:goto L73bd6d;
case 0x73bd6f:c.instructions+=1;goto B73bd6f;
case 0x73bd71:goto L73bd71;
case 0x73bd74:c.instructions+=7;goto B73bd74;
case 0x73bd78:c.instructions+=6;goto B73bd78;
case 0x73bd7a:c.instructions+=5;goto B73bd7a;
case 0x73bd7c:c.instructions+=4;goto B73bd7c;
case 0x73bd80:c.instructions+=3;goto B73bd80;
case 0x73bd84:c.instructions+=2;goto B73bd84;
case 0x73bd88:c.instructions+=1;goto B73bd88;
case 0x73bd8a:goto L73bd8a;
case 0x73bd90:c.instructions+=2;goto B73bd90;
case 0x73bd93:c.instructions+=1;goto B73bd93;
case 0x73bd95:goto L73bd95;
case 0x73bd99:c.instructions+=1;goto B73bd99;
case 0x73bda0:goto L73bda0;
case 0x73bda3:c.instructions+=6;goto B73bda3;
case 0x73bda6:c.instructions+=5;goto B73bda6;
case 0x73bda8:c.instructions+=4;goto B73bda8;
case 0x73bdab:c.instructions+=3;goto B73bdab;
case 0x73bdae:c.instructions+=2;goto B73bdae;
case 0x73bdb0:c.instructions+=1;goto B73bdb0;
case 0x73bdb2:goto L73bdb2;
case 0x73bdb6:c.instructions+=1;goto B73bdb6;
case 0x73bdb8:goto L73bdb8;
case 0x73bdb9:c.instructions+=1;goto B73bdb9;
case 0x73bdbb:goto L73bdbb;
case 0x73bdbf:c.instructions+=6;goto B73bdbf;
case 0x73bdc3:c.instructions+=5;goto B73bdc3;
case 0x73bdc4:c.instructions+=4;goto B73bdc4;
case 0x73bdc7:c.instructions+=3;goto B73bdc7;
case 0x73bdc9:c.instructions+=2;goto B73bdc9;
case 0x73bdcd:c.instructions+=1;goto B73bdcd;
case 0x73bdcf:goto L73bdcf;
case 0x73bdd1:goto L73bdd1;
case 0x73bdd5:c.instructions+=1;goto B73bdd5;
case 0x73bdd7:goto L73bdd7;
case 0x73bddb:c.instructions+=1;goto B73bddb;
case 0x73bddd:goto L73bddd;
case 0x73bde0:goto L73bde0;
case 0x73bde4:c.instructions+=4;goto B73bde4;
case 0x73bde8:c.instructions+=3;goto B73bde8;
case 0x73bdec:c.instructions+=2;goto B73bdec;
case 0x73bdf4:c.instructions+=1;goto B73bdf4;
case 0x73bdf6:goto L73bdf6;
case 0x73bdf8:c.instructions+=3;goto B73bdf8;
case 0x73bdfb:c.instructions+=2;goto B73bdfb;
case 0x73bdfc:c.instructions+=1;goto B73bdfc;
case 0x73be01:goto L73be01;
case 0x73be04:goto L73be04;
case 0x73be08:c.instructions+=2;goto B73be08;
case 0x73be0d:c.instructions+=1;goto B73be0d;
case 0x73be0f:goto L73be0f;
case 0x73be13:c.instructions+=6;goto B73be13;
case 0x73be17:c.instructions+=5;goto B73be17;
case 0x73be1b:c.instructions+=4;goto B73be1b;
case 0x73be1c:c.instructions+=3;goto B73be1c;
case 0x73be1d:c.instructions+=2;goto B73be1d;
case 0x73be1e:c.instructions+=1;goto B73be1e;
case 0x73be23:goto L73be23;
case 0x73be24:c.instructions+=2;goto B73be24;
case 0x73be28:c.instructions+=1;goto B73be28;
case 0x73be2d:goto L73be2d;
case 0x73be30:c.instructions+=1;goto B73be30;
case 0x73be34:goto L73be34;
case 0x73be36:c.instructions+=1;goto B73be36;
case 0x73be3c:goto L73be3c;
case 0x73be41:c.instructions+=1;goto B73be41;
case 0x73be47:goto L73be47;
case 0x73be4b:c.instructions+=5;goto B73be4b;
case 0x73be51:c.instructions+=4;goto B73be51;
case 0x73be55:c.instructions+=3;goto B73be55;
case 0x73be5b:c.instructions+=2;goto B73be5b;
case 0x73be60:c.instructions+=1;goto B73be60;
case 0x73be64:goto L73be64;
case 0x73be66:goto L73be66;
case 0x73be6b:goto L73be6b;
case 0x73be6e:c.instructions+=2;goto B73be6e;
case 0x73be70:c.instructions+=1;goto B73be70;
case 0x73be72:goto L73be72;
case 0x73be76:c.instructions+=3;goto B73be76;
case 0x73be79:c.instructions+=2;goto B73be79;
case 0x73be7b:c.instructions+=1;goto B73be7b;
case 0x73be7d:goto L73be7d;
case 0x73be7f:c.instructions+=2;goto B73be7f;
case 0x73be80:c.instructions+=1;goto B73be80;
case 0x73be85:goto L73be85;
case 0x73be8b:c.instructions+=3;goto B73be8b;
case 0x73be8e:c.instructions+=2;goto B73be8e;
case 0x73be91:c.instructions+=1;goto B73be91;
case 0x73be97:goto L73be97;
case 0x73be9a:c.instructions+=1;goto B73be9a;
case 0x73bea0:goto L73bea0;
case 0x73bea8:c.instructions+=1;goto B73bea8;
case 0x73bead:goto L73bead;
case 0x73beb1:c.instructions+=5;goto B73beb1;
case 0x73beb4:c.instructions+=4;goto B73beb4;
case 0x73beb7:c.instructions+=3;goto B73beb7;
case 0x73beb8:c.instructions+=2;goto B73beb8;
case 0x73beb9:c.instructions+=1;goto B73beb9;
case 0x73bebe:goto L73bebe;
case 0x73bec2:c.instructions+=4;goto B73bec2;
case 0x73bec5:c.instructions+=3;goto B73bec5;
case 0x73bec8:c.instructions+=2;goto B73bec8;
case 0x73becb:c.instructions+=1;goto B73becb;
case 0x73bed0:goto L73bed0;
case 0x73bed4:c.instructions+=13;goto B73bed4;
case 0x73beda:c.instructions+=12;goto B73beda;
case 0x73bedc:c.instructions+=11;goto B73bedc;
case 0x73bedf:c.instructions+=10;goto B73bedf;
case 0x73bee2:c.instructions+=9;goto B73bee2;
case 0x73bee3:c.instructions+=8;goto B73bee3;
case 0x73bee6:c.instructions+=7;goto B73bee6;
case 0x73bee9:c.instructions+=6;goto B73bee9;
case 0x73beeb:c.instructions+=5;goto B73beeb;
case 0x73beec:c.instructions+=4;goto B73beec;
case 0x73beef:c.instructions+=3;goto B73beef;
case 0x73bef0:c.instructions+=2;goto B73bef0;
case 0x73bef3:c.instructions+=1;goto B73bef3;
case 0x73bef8:goto L73bef8;
case 0x73befd:goto L73befd;
case 0x73bf01:c.instructions+=13;goto B73bf01;
case 0x73bf07:c.instructions+=12;goto B73bf07;
case 0x73bf09:c.instructions+=11;goto B73bf09;
case 0x73bf0c:c.instructions+=10;goto B73bf0c;
case 0x73bf0e:c.instructions+=9;goto B73bf0e;
case 0x73bf11:c.instructions+=8;goto B73bf11;
case 0x73bf14:c.instructions+=7;goto B73bf14;
case 0x73bf15:c.instructions+=6;goto B73bf15;
case 0x73bf16:c.instructions+=5;goto B73bf16;
case 0x73bf19:c.instructions+=4;goto B73bf19;
case 0x73bf1c:c.instructions+=3;goto B73bf1c;
case 0x73bf1d:c.instructions+=2;goto B73bf1d;
case 0x73bf20:c.instructions+=1;goto B73bf20;
case 0x73bf25:goto L73bf25;
case 0x73bf2a:goto L73bf2a;
case 0x73bf2e:c.instructions+=13;goto B73bf2e;
case 0x73bf34:c.instructions+=12;goto B73bf34;
case 0x73bf36:c.instructions+=11;goto B73bf36;
case 0x73bf39:c.instructions+=10;goto B73bf39;
case 0x73bf3c:c.instructions+=9;goto B73bf3c;
case 0x73bf3e:c.instructions+=8;goto B73bf3e;
case 0x73bf41:c.instructions+=7;goto B73bf41;
case 0x73bf44:c.instructions+=6;goto B73bf44;
case 0x73bf47:c.instructions+=5;goto B73bf47;
case 0x73bf4a:c.instructions+=4;goto B73bf4a;
case 0x73bf4b:c.instructions+=3;goto B73bf4b;
case 0x73bf4c:c.instructions+=2;goto B73bf4c;
case 0x73bf4d:c.instructions+=1;goto B73bf4d;
case 0x73bf52:goto L73bf52;
case 0x73bf57:goto L73bf57;
case 0x73bf5b:c.instructions+=9;goto B73bf5b;
case 0x73bf5d:c.instructions+=8;goto B73bf5d;
case 0x73bf60:c.instructions+=7;goto B73bf60;
case 0x73bf63:c.instructions+=6;goto B73bf63;
case 0x73bf66:c.instructions+=5;goto B73bf66;
case 0x73bf69:c.instructions+=4;goto B73bf69;
case 0x73bf6a:c.instructions+=3;goto B73bf6a;
case 0x73bf6b:c.instructions+=2;goto B73bf6b;
case 0x73bf6c:c.instructions+=1;goto B73bf6c;
case 0x73bf71:goto L73bf71;
case 0x73bf76:goto L73bf76;
case 0x73bf7b:c.instructions+=4;goto B73bf7b;
case 0x73bf7e:c.instructions+=3;goto B73bf7e;
case 0x73bf7f:c.instructions+=2;goto B73bf7f;
case 0x73bf80:c.instructions+=1;goto B73bf80;
case 0x73bf85:goto L73bf85;
case 0x73bf88:c.instructions+=1;goto B73bf88;
case 0x73bf8d:goto L73bf8d;
case 0x73bf92:c.instructions+=7;goto B73bf92;
case 0x73bf95:c.instructions+=6;goto B73bf95;
case 0x73bf9a:c.instructions+=5;goto B73bf9a;
case 0x73bf9e:c.instructions+=4;goto B73bf9e;
case 0x73bfa1:c.instructions+=3;goto B73bfa1;
case 0x73bfa4:c.instructions+=2;goto B73bfa4;
case 0x73bfa5:c.instructions+=1;goto B73bfa5;
case 0x73bfaa:goto L73bfaa;
case 0x73bfab:c.instructions+=4;goto B73bfab;
case 0x73bfb0:c.instructions+=3;goto B73bfb0;
case 0x73bfb3:c.instructions+=2;goto B73bfb3;
case 0x73bfb4:c.instructions+=1;goto B73bfb4;
case 0x73bfb9:goto L73bfb9;
case 0x73bfbe:goto L73bfbe;
case 0x73bfc2:c.instructions+=2;goto B73bfc2;
case 0x73bfc4:c.instructions+=1;goto B73bfc4;
case 0x73bfc6:goto L73bfc6;
case 0x73bfcb:goto L73bfcb;
case 0x73bfd0:goto L73bfd0;
case 0x73bfd2:c.instructions+=11;goto B73bfd2;
case 0x73bfd5:c.instructions+=10;goto B73bfd5;
case 0x73bfd8:c.instructions+=9;goto B73bfd8;
case 0x73bfdb:c.instructions+=8;goto B73bfdb;
case 0x73bfe0:c.instructions+=7;goto B73bfe0;
case 0x73bfe1:c.instructions+=6;goto B73bfe1;
case 0x73bfe4:c.instructions+=5;goto B73bfe4;
case 0x73bfe8:c.instructions+=4;goto B73bfe8;
case 0x73bfeb:c.instructions+=3;goto B73bfeb;
case 0x73bfee:c.instructions+=2;goto B73bfee;
case 0x73bfef:c.instructions+=1;goto B73bfef;
case 0x73bff4:goto L73bff4;
case 0x73bff7:c.instructions+=1;goto B73bff7;
case 0x73bffc:goto L73bffc;
default:missing_instruction(c.pc);}
B73b001:L73b001:{c.instructions+=2;NFSU2_TR(0x73b001);
w4(R+0,u32(0xfffffff8ull));
}
B73b006:{NFSU2_TR(0x73b006);
{goto L73b00b;}
}
B73b008:L73b008:{c.instructions+=1;NFSU2_TR(0x73b008);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b00b:L73b00b:{c.instructions+=6;NFSU2_TR(0x73b00b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b00f:{NFSU2_TR(0x73b00f);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b013:{NFSU2_TR(0x73b013);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b014:{NFSU2_TR(0x73b014);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b015:{NFSU2_TR(0x73b015);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b016:{NFSU2_TR(0x73b016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b01bull));
TAIL_STATIC(0x45a410u,45a);
}
B73b01b:L73b01b:{c.instructions+=4;NFSU2_TR(0x73b01b);
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
B73b01e:{NFSU2_TR(0x73b01e);
s4(0x8b7bc0,u32(0x0ull));
}
B73b028:{NFSU2_TR(0x73b028);
s4(0x8b7bb0,u32(0x0ull));
}
B73b032:{NFSU2_TR(0x73b032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b2c0:L73b2c0:{c.instructions+=1;NFSU2_TR(0x73b2c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b300:L73b300:{c.instructions+=12;NFSU2_TR(0x73b300);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b304:{NFSU2_TR(0x73b304);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b305:{NFSU2_TR(0x73b305);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b306:{NFSU2_TR(0x73b306);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b307:{NFSU2_TR(0x73b307);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b308:{NFSU2_TR(0x73b308);
__builtin_memmove((R+28),(R+0),4);
}
B73b30a:{NFSU2_TR(0x73b30a);
__builtin_memmove((R+12),(R+0),4);
}
B73b30c:{NFSU2_TR(0x73b30c);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xf0000000ull))));
}
B73b312:{NFSU2_TR(0x73b312);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xf000000ull))));
}
B73b318:{NFSU2_TR(0x73b318);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B73b31d:{NFSU2_TR(0x73b31d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73b31f:{NFSU2_TR(0x73b31f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73b321:L73b321:{c.instructions+=4;NFSU2_TR(0x73b321);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b5744ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b327:{NFSU2_TR(0x73b327);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b329:{NFSU2_TR(0x73b329);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8b5740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b32f:{NFSU2_TR(0x73b32f);
if(r1(R+518)){{goto L73b351;}}
}
B73b331:L73b331:{c.instructions+=2;NFSU2_TR(0x73b331);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b333:{NFSU2_TR(0x73b333);
if(r1(R+518)){{goto L73b351;}}
}
B73b335:L73b335:{c.instructions+=2;NFSU2_TR(0x73b335);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b337:{NFSU2_TR(0x73b337);
if(r1(R+518)){{goto L73b351;}}
}
B73b339:L73b339:{c.instructions+=2;NFSU2_TR(0x73b339);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73b33b:{NFSU2_TR(0x73b33b);
{goto L73b340;}
}
B73b340:L73b340:{c.instructions+=4;NFSU2_TR(0x73b340);
w4(R+20,u32(0x1ull));
}
B73b345:{NFSU2_TR(0x73b345);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B73b347:{NFSU2_TR(0x73b347);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b349:{NFSU2_TR(0x73b349);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b367;}}
}
B73b34b:L73b34b:{c.instructions+=3;NFSU2_TR(0x73b34b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73b34c:{NFSU2_TR(0x73b34c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B73b34f:{NFSU2_TR(0x73b34f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b340u);}goto L73b340;}}
}
B73b351:L73b351:{c.instructions+=4;NFSU2_TR(0x73b351);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x928ull))));
}
B73b357:{NFSU2_TR(0x73b357);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73b358:{NFSU2_TR(0x73b358);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x24a0ull))));
}
B73b35e:{NFSU2_TR(0x73b35e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b321u);}goto L73b321;}}
}
B73b360:L73b360:{c.instructions+=6;NFSU2_TR(0x73b360);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b361:{NFSU2_TR(0x73b361);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b362:{NFSU2_TR(0x73b362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b363:{NFSU2_TR(0x73b363);
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
B73b365:{NFSU2_TR(0x73b365);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73b366:{NFSU2_TR(0x73b366);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b367:L73b367:{c.instructions+=8;NFSU2_TR(0x73b367);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x24aull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B73b36d:{NFSU2_TR(0x73b36d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+24),r4(R+4)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73b36f:{NFSU2_TR(0x73b36f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8b5768ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B73b376:{NFSU2_TR(0x73b376);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b377:{NFSU2_TR(0x73b377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b378:{NFSU2_TR(0x73b378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b379:{NFSU2_TR(0x73b379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73b37a:{NFSU2_TR(0x73b37a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b400:L73b400:{c.instructions+=11;NFSU2_TR(0x73b400);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73b405:{NFSU2_TR(0x73b405);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b406:{NFSU2_TR(0x73b406);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b407:{NFSU2_TR(0x73b407);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73b40e:{NFSU2_TR(0x73b40e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b40f:{NFSU2_TR(0x73b40f);
u8 U[4];
w4(U+0,u32(0xffffffffull));
s4(u32(r4(R+0)),r4(U+0));
}
B73b415:{NFSU2_TR(0x73b415);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73b41c:{NFSU2_TR(0x73b41c);
w4(R+24,u32(0x2ull));
}
B73b421:{NFSU2_TR(0x73b421);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b424:{NFSU2_TR(0x73b424);
w4(R+20,u32(0xffff0000ull));
}
B73b429:{NFSU2_TR(0x73b429);
__builtin_memmove((R+16),(R+16),4);
}
B73b430:L73b430:{c.instructions+=3;NFSU2_TR(0x73b430);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b433:{NFSU2_TR(0x73b433);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b435:{NFSU2_TR(0x73b435);
if(r1(R+518)){{goto L73b465;}}
}
B73b437:L73b437:{c.instructions+=3;NFSU2_TR(0x73b437);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73b43a:{NFSU2_TR(0x73b43a);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b43c:{NFSU2_TR(0x73b43c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b465;}}
}
B73b43e:L73b43e:{c.instructions+=2;NFSU2_TR(0x73b43e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B73b441:{NFSU2_TR(0x73b441);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b465;}}
}
B73b443:L73b443:{c.instructions+=3;NFSU2_TR(0x73b443);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b446:{NFSU2_TR(0x73b446);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b448:{NFSU2_TR(0x73b448);
if(r1(R+518)){{goto L73b465;}}
}
B73b44a:L73b44a:{c.instructions+=3;NFSU2_TR(0x73b44a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b44d:{NFSU2_TR(0x73b44d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B73b450:{NFSU2_TR(0x73b450);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73b465;}}
}
B73b452:L73b452:{c.instructions+=7;NFSU2_TR(0x73b452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73b454:{NFSU2_TR(0x73b454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b457:{NFSU2_TR(0x73b457);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73b45a:{NFSU2_TR(0x73b45a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b45d:{NFSU2_TR(0x73b45d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B73b460:{NFSU2_TR(0x73b460);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B73b462:{NFSU2_TR(0x73b462);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b465:L73b465:{c.instructions+=3;NFSU2_TR(0x73b465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73b467:{NFSU2_TR(0x73b467);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b469:{NFSU2_TR(0x73b469);
if(r1(R+518)){{goto L73b499;}}
}
B73b46b:L73b46b:{c.instructions+=3;NFSU2_TR(0x73b46b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73b46e:{NFSU2_TR(0x73b46e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b470:{NFSU2_TR(0x73b470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b499;}}
}
B73b472:L73b472:{c.instructions+=2;NFSU2_TR(0x73b472);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B73b475:{NFSU2_TR(0x73b475);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b499;}}
}
B73b477:L73b477:{c.instructions+=3;NFSU2_TR(0x73b477);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b47a:{NFSU2_TR(0x73b47a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b47c:{NFSU2_TR(0x73b47c);
if(r1(R+518)){{goto L73b499;}}
}
B73b47e:L73b47e:{c.instructions+=3;NFSU2_TR(0x73b47e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b481:{NFSU2_TR(0x73b481);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B73b484:{NFSU2_TR(0x73b484);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73b499;}}
}
B73b486:L73b486:{c.instructions+=7;NFSU2_TR(0x73b486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73b488:{NFSU2_TR(0x73b488);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b48b:{NFSU2_TR(0x73b48b);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73b48e:{NFSU2_TR(0x73b48e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b491:{NFSU2_TR(0x73b491);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B73b494:{NFSU2_TR(0x73b494);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B73b496:{NFSU2_TR(0x73b496);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b499:L73b499:{c.instructions+=3;NFSU2_TR(0x73b499);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b49c:{NFSU2_TR(0x73b49c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b49e:{NFSU2_TR(0x73b49e);
if(r1(R+518)){{goto L73b4cb;}}
}
B73b4a0:L73b4a0:{c.instructions+=3;NFSU2_TR(0x73b4a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73b4a3:{NFSU2_TR(0x73b4a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b4a5:{NFSU2_TR(0x73b4a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b4cb;}}
}
B73b4a7:L73b4a7:{c.instructions+=2;NFSU2_TR(0x73b4a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B73b4aa:{NFSU2_TR(0x73b4aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b4cb;}}
}
B73b4ac:L73b4ac:{c.instructions+=3;NFSU2_TR(0x73b4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b4af:{NFSU2_TR(0x73b4af);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b4b1:{NFSU2_TR(0x73b4b1);
if(r1(R+518)){{goto L73b4cb;}}
}
B73b4b3:L73b4b3:{c.instructions+=3;NFSU2_TR(0x73b4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b4b6:{NFSU2_TR(0x73b4b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B73b4b9:{NFSU2_TR(0x73b4b9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73b4cb;}}
}
B73b4bb:L73b4bb:{c.instructions+=6;NFSU2_TR(0x73b4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b4be:{NFSU2_TR(0x73b4be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73b4c0:{NFSU2_TR(0x73b4c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B73b4c3:{NFSU2_TR(0x73b4c3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73b4c6:{NFSU2_TR(0x73b4c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B73b4c8:{NFSU2_TR(0x73b4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b4cb:L73b4cb:{c.instructions+=3;NFSU2_TR(0x73b4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b4ce:{NFSU2_TR(0x73b4ce);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b4d0:{NFSU2_TR(0x73b4d0);
if(r1(R+518)){{goto L73b500;}}
}
B73b4d2:L73b4d2:{c.instructions+=3;NFSU2_TR(0x73b4d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73b4d5:{NFSU2_TR(0x73b4d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b4d7:{NFSU2_TR(0x73b4d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b500;}}
}
B73b4d9:L73b4d9:{c.instructions+=2;NFSU2_TR(0x73b4d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B73b4dc:{NFSU2_TR(0x73b4dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b500;}}
}
B73b4de:L73b4de:{c.instructions+=3;NFSU2_TR(0x73b4de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b4e1:{NFSU2_TR(0x73b4e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b4e3:{NFSU2_TR(0x73b4e3);
if(r1(R+518)){{goto L73b500;}}
}
B73b4e5:L73b4e5:{c.instructions+=3;NFSU2_TR(0x73b4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b4e8:{NFSU2_TR(0x73b4e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B73b4eb:{NFSU2_TR(0x73b4eb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L73b500;}}
}
B73b4ed:L73b4ed:{c.instructions+=7;NFSU2_TR(0x73b4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73b4ef:{NFSU2_TR(0x73b4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b4f2:{NFSU2_TR(0x73b4f2);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73b4f5:{NFSU2_TR(0x73b4f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b4f8:{NFSU2_TR(0x73b4f8);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B73b4fb:{NFSU2_TR(0x73b4fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B73b4fd:{NFSU2_TR(0x73b4fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b500:L73b500:{c.instructions+=5;NFSU2_TR(0x73b500);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B73b503:{NFSU2_TR(0x73b503);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b506:{NFSU2_TR(0x73b506);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B73b509:{NFSU2_TR(0x73b509);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x18ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x18ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73b50c:{NFSU2_TR(0x73b50c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b430u);}goto L73b430;}}
}
B73b512:L73b512:{c.instructions+=4;NFSU2_TR(0x73b512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b513:{NFSU2_TR(0x73b513);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b514:{NFSU2_TR(0x73b514);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b515:{NFSU2_TR(0x73b515);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b520:L73b520:{c.instructions+=8;NFSU2_TR(0x73b520);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b521:{NFSU2_TR(0x73b521);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73b525:{NFSU2_TR(0x73b525);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b526:{NFSU2_TR(0x73b526);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b527:{NFSU2_TR(0x73b527);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73b529:{NFSU2_TR(0x73b529);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b52a:{NFSU2_TR(0x73b52a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73b52c:{NFSU2_TR(0x73b52c);
w4(R+24,u32(0x8b576cull));
}
B73b531:L73b531:{c.instructions+=4;NFSU2_TR(0x73b531);
w4(R+8,u32(0x1000000ull));
}
B73b536:{NFSU2_TR(0x73b536);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B73b538:{NFSU2_TR(0x73b538);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b53a:{NFSU2_TR(0x73b53a);
if(r1(R+518)){{goto L73b594;}}
}
B73b53c:L73b53c:{c.instructions+=3;NFSU2_TR(0x73b53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b53f:{NFSU2_TR(0x73b53f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b541:{NFSU2_TR(0x73b541);
if(r1(R+518)){{goto L73b594;}}
}
B73b543:L73b543:{c.instructions+=3;NFSU2_TR(0x73b543);
__builtin_memmove((R+8),(R+24),4);
}
B73b545:{NFSU2_TR(0x73b545);
w4(R+28,u32(0x3ull));
}
B73b54a:{NFSU2_TR(0x73b54a);
__builtin_memmove((R+12),(R+12),4);
}
B73b550:L73b550:{c.instructions+=3;NFSU2_TR(0x73b550);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b553:{NFSU2_TR(0x73b553);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b555:{NFSU2_TR(0x73b555);
if(r1(R+518)){{goto L73b558;}}
}
B73b557:L73b557:{c.instructions+=1;NFSU2_TR(0x73b557);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b558:L73b558:{c.instructions+=2;NFSU2_TR(0x73b558);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73b55b:{NFSU2_TR(0x73b55b);
if(r1(R+518)){{goto L73b55e;}}
}
B73b55d:L73b55d:{c.instructions+=1;NFSU2_TR(0x73b55d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b55e:L73b55e:{c.instructions+=3;NFSU2_TR(0x73b55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b561:{NFSU2_TR(0x73b561);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b563:{NFSU2_TR(0x73b563);
if(r1(R+518)){{goto L73b566;}}
}
B73b565:L73b565:{c.instructions+=1;NFSU2_TR(0x73b565);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b566:L73b566:{c.instructions+=3;NFSU2_TR(0x73b566);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b569:{NFSU2_TR(0x73b569);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b56b:{NFSU2_TR(0x73b56b);
if(r1(R+518)){{goto L73b56e;}}
}
B73b56d:L73b56d:{c.instructions+=1;NFSU2_TR(0x73b56d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b56e:L73b56e:{c.instructions+=3;NFSU2_TR(0x73b56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b571:{NFSU2_TR(0x73b571);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b573:{NFSU2_TR(0x73b573);
if(r1(R+518)){{goto L73b576;}}
}
B73b575:L73b575:{c.instructions+=1;NFSU2_TR(0x73b575);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b576:L73b576:{c.instructions+=3;NFSU2_TR(0x73b576);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b579:{NFSU2_TR(0x73b579);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b57b:{NFSU2_TR(0x73b57b);
if(r1(R+518)){{goto L73b57e;}}
}
B73b57d:L73b57d:{c.instructions+=1;NFSU2_TR(0x73b57d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b57e:L73b57e:{c.instructions+=3;NFSU2_TR(0x73b57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b581:{NFSU2_TR(0x73b581);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b583:{NFSU2_TR(0x73b583);
if(r1(R+518)){{goto L73b586;}}
}
B73b585:L73b585:{c.instructions+=1;NFSU2_TR(0x73b585);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b586:L73b586:{c.instructions+=3;NFSU2_TR(0x73b586);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B73b589:{NFSU2_TR(0x73b589);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b58b:{NFSU2_TR(0x73b58b);
if(r1(R+518)){{goto L73b58e;}}
}
B73b58d:L73b58d:{c.instructions+=1;NFSU2_TR(0x73b58d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B73b58e:L73b58e:{c.instructions+=3;NFSU2_TR(0x73b58e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B73b591:{NFSU2_TR(0x73b591);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B73b592:{NFSU2_TR(0x73b592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b550u);}goto L73b550;}}
}
B73b594:L73b594:{c.instructions+=4;NFSU2_TR(0x73b594);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x928ull))));
}
B73b59a:{NFSU2_TR(0x73b59a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73b59b:{NFSU2_TR(0x73b59b);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b7c0cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b7c0cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b7c0cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73b5a1:{NFSU2_TR(0x73b5a1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b531u);}goto L73b531;}}
}
B73b5a3:L73b5a3:{c.instructions+=5;NFSU2_TR(0x73b5a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b5a4:{NFSU2_TR(0x73b5a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b5a5:{NFSU2_TR(0x73b5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b5a6:{NFSU2_TR(0x73b5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73b5a7:{NFSU2_TR(0x73b5a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b620:L73b620:{c.instructions+=3;NFSU2_TR(0x73b620);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73b625:{NFSU2_TR(0x73b625);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b627:{NFSU2_TR(0x73b627);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b631;}}
}
B73b629:L73b629:{c.instructions+=2;NFSU2_TR(0x73b629);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B73b62c:{NFSU2_TR(0x73b62c);
__builtin_memmove(gp(0x8b7bc0),(R+0),4);
}
B73b631:L73b631:{c.instructions+=3;NFSU2_TR(0x73b631);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b635:{NFSU2_TR(0x73b635);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73b637:{NFSU2_TR(0x73b637);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b66a;}}
}
B73b639:L73b639:{c.instructions+=2;NFSU2_TR(0x73b639);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73b63c:{NFSU2_TR(0x73b63c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73b66a;}}
}
B73b63e:L73b63e:{c.instructions+=7;NFSU2_TR(0x73b63e);
__builtin_memmove((R+4),(R+8),4);
}
B73b640:{NFSU2_TR(0x73b640);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x928ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B73b646:{NFSU2_TR(0x73b646);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b647:{NFSU2_TR(0x73b647);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b5744ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73b64d:{NFSU2_TR(0x73b64d);
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
B73b64f:{NFSU2_TR(0x73b64f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b650:{NFSU2_TR(0x73b650);
if(r1(R+518)){{goto L73b66a;}}
}
B73b652:L73b652:{c.instructions+=5;NFSU2_TR(0x73b652);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b5740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b658:{NFSU2_TR(0x73b658);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8b5710ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b65e:{NFSU2_TR(0x73b65e);
__builtin_memmove(gp(0x8b7bb0),(R+4),4);
}
B73b664:{NFSU2_TR(0x73b664);
__builtin_memmove(gp(0x8b7bc0),(R+0),4);
}
B73b669:{NFSU2_TR(0x73b669);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b66a:L73b66a:{c.instructions+=2;NFSU2_TR(0x73b66a);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B73b66d:{NFSU2_TR(0x73b66d);
if(r1(R+518)){{goto L73b676;}}
}
B73b66f:L73b66f:{c.instructions+=2;NFSU2_TR(0x73b66f);
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
B73b671:{NFSU2_TR(0x73b671);
__builtin_memmove(gp(0x8b7bc0),(R+0),4);
}
B73b676:L73b676:{c.instructions+=1;NFSU2_TR(0x73b676);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b680:L73b680:{c.instructions+=5;NFSU2_TR(0x73b680);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b684:{NFSU2_TR(0x73b684);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B73b686:{NFSU2_TR(0x73b686);
w4(R+0,u32(0x8b5740ull));
}
B73b68b:{NFSU2_TR(0x73b68b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b68c:{NFSU2_TR(0x73b68c);
__builtin_memmove((R+16),(R+16),4);
}
B73b690:L73b690:{c.instructions+=3;NFSU2_TR(0x73b690);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73b693:{NFSU2_TR(0x73b693);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b695:{NFSU2_TR(0x73b695);
if(r1(R+518)){{goto L73b69b;}}
}
B73b697:L73b697:{c.instructions+=2;NFSU2_TR(0x73b697);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73b699:{NFSU2_TR(0x73b699);
if(r1(R+518)){{goto L73b6ac;}}
}
B73b69b:L73b69b:{c.instructions+=4;NFSU2_TR(0x73b69b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x928ull))));
}
B73b6a0:{NFSU2_TR(0x73b6a0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73b6a1:{NFSU2_TR(0x73b6a1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b7be0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b7be0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73b6a6:{NFSU2_TR(0x73b6a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b690u);}goto L73b690;}}
}
B73b6a8:L73b6a8:{c.instructions+=3;NFSU2_TR(0x73b6a8);
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
B73b6aa:{NFSU2_TR(0x73b6aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b6ab:{NFSU2_TR(0x73b6ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b6ac:L73b6ac:{c.instructions+=3;NFSU2_TR(0x73b6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b6ad:{NFSU2_TR(0x73b6ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b6b1:{NFSU2_TR(0x73b6b1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b620u);}goto L73b620;}
}
B73b6c0:L73b6c0:{c.instructions+=10;NFSU2_TR(0x73b6c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b6c1:{NFSU2_TR(0x73b6c1);
__builtin_memmove((R+20),(R+16),4);
}
B73b6c3:{NFSU2_TR(0x73b6c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B73b6c6:{NFSU2_TR(0x73b6c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x928ull))));
}
B73b6cc:{NFSU2_TR(0x73b6cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b6cd:{NFSU2_TR(0x73b6cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b6ce:{NFSU2_TR(0x73b6ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b6cf:{NFSU2_TR(0x73b6cf);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B73b6d1:{NFSU2_TR(0x73b6d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b6d2:{NFSU2_TR(0x73b6d2);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B73b6d4:L73b6d4:{c.instructions+=3;NFSU2_TR(0x73b6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8b5744ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b6da:{NFSU2_TR(0x73b6da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b6dc:{NFSU2_TR(0x73b6dc);
if(r1(R+518)){{goto L73b739;}}
}
B73b6de:L73b6de:{c.instructions+=3;NFSU2_TR(0x73b6de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73b6e1:{NFSU2_TR(0x73b6e1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B73b6e4:{NFSU2_TR(0x73b6e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L73b739;}}
}
B73b6e6:L73b6e6:{c.instructions+=2;NFSU2_TR(0x73b6e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8b6038ull))));
__builtin_memmove((R+0),(U+0),4);
}
B73b6ec:{NFSU2_TR(0x73b6ec);
__builtin_memmove((R+16),(R+16),4);
}
B73b6f0:L73b6f0:{c.instructions+=3;NFSU2_TR(0x73b6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b6f3:{NFSU2_TR(0x73b6f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b6f5:{NFSU2_TR(0x73b6f5);
if(r1(R+518)){{goto L73b72d;}}
}
B73b6f7:L73b6f7:{c.instructions+=3;NFSU2_TR(0x73b6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8b5740ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b6fd:{NFSU2_TR(0x73b6fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73b700:{NFSU2_TR(0x73b700);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73b72d;}}
}
B73b702:L73b702:{c.instructions+=4;NFSU2_TR(0x73b702);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8b5710ull))));
__builtin_memmove((R+8),(U+0),4);
}
B73b708:{NFSU2_TR(0x73b708);
w4(R+4,u32(0x24aull));
}
B73b70d:{NFSU2_TR(0x73b70d);
__builtin_memmove((R+24),(R+8),4);
}
B73b70f:{NFSU2_TR(0x73b70f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B73b713:L73b713:{c.instructions+=1;NFSU2_TR(0x73b713);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73b715;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b713u);}goto L73b713;}
}
B73b715:L73b715:{c.instructions+=3;NFSU2_TR(0x73b715);
w4(R+4,u32(0x24aull));
}
B73b71a:{NFSU2_TR(0x73b71a);
__builtin_memmove((R+24),(R+0),4);
}
B73b71c:{NFSU2_TR(0x73b71c);
__builtin_memmove((R+28),(R+8),4);
}
B73b71e:L73b71e:{c.instructions+=1;NFSU2_TR(0x73b71e);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73b720;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b71eu);}goto L73b71e;}
}
B73b720:L73b720:{c.instructions+=3;NFSU2_TR(0x73b720);
w4(R+4,u32(0x24aull));
}
B73b725:{NFSU2_TR(0x73b725);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B73b729:{NFSU2_TR(0x73b729);
__builtin_memmove((R+28),(R+0),4);
}
B73b72b:L73b72b:{c.instructions+=1;NFSU2_TR(0x73b72b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73b72d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b72bu);}goto L73b72b;}
}
B73b72d:L73b72d:{c.instructions+=3;NFSU2_TR(0x73b72d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x928ull))));
}
B73b732:{NFSU2_TR(0x73b732);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8b7bb0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b7bb0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73b737:{NFSU2_TR(0x73b737);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b6f0u);}goto L73b6f0;}}
}
B73b739:L73b739:{c.instructions+=4;NFSU2_TR(0x73b739);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x928ull))));
}
B73b73f:{NFSU2_TR(0x73b73f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B73b740:{NFSU2_TR(0x73b740);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0x24a0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x24a0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x24a0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73b746:{NFSU2_TR(0x73b746);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b6d4u);}goto L73b6d4;}}
}
B73b748:L73b748:{c.instructions+=7;NFSU2_TR(0x73b748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b749:{NFSU2_TR(0x73b749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b74a:{NFSU2_TR(0x73b74a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b74b:{NFSU2_TR(0x73b74b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73b74c:{NFSU2_TR(0x73b74c);
__builtin_memmove((R+16),(R+20),4);
}
B73b74e:{NFSU2_TR(0x73b74e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b74f:{NFSU2_TR(0x73b74f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b750:L73b750:{c.instructions+=6;NFSU2_TR(0x73b750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B73b753:{NFSU2_TR(0x73b753);
u8 U[2];
__builtin_memmove((U+0),gp(0x819b09),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x42ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B73b75a:{NFSU2_TR(0x73b75a);
__builtin_memmove((R+0),(R+518),1);
}
B73b75d:{NFSU2_TR(0x73b75d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b75f:{NFSU2_TR(0x73b75f);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73b763:{NFSU2_TR(0x73b763);
if(r1(R+518)){{goto L73b773;}}
}
B73b765:L73b765:{c.instructions+=4;NFSU2_TR(0x73b765);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73b76a:{NFSU2_TR(0x73b76a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b76d:{NFSU2_TR(0x73b76d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b771:{NFSU2_TR(0x73b771);
{goto L73b785;}
}
B73b773:L73b773:{c.instructions+=4;NFSU2_TR(0x73b773);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73b779:{NFSU2_TR(0x73b779);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b77c:{NFSU2_TR(0x73b77c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b780:{NFSU2_TR(0x73b780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b785ull));
TAIL_STATIC(0x739930u,739);
}
B73b785:L73b785:{c.instructions+=7;NFSU2_TR(0x73b785);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b786:{NFSU2_TR(0x73b786);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b787:{NFSU2_TR(0x73b787);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b788:{NFSU2_TR(0x73b788);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b789:{NFSU2_TR(0x73b789);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73b791:{NFSU2_TR(0x73b791);
w4(R+20,u32(0x58ull));
}
B73b796:{NFSU2_TR(0x73b796);
{goto L73b7a0;}
}
B73b7a0:L73b7a0:{c.instructions+=4;NFSU2_TR(0x73b7a0);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73b7a6:{NFSU2_TR(0x73b7a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B73b7a9:{NFSU2_TR(0x73b7a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b7ab:{NFSU2_TR(0x73b7ab);
if(r1(R+518)){{goto L73b8c4;}}
}
B73b7b1:L73b7b1:{c.instructions+=3;NFSU2_TR(0x73b7b1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b7b4:{NFSU2_TR(0x73b7b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b7b6:{NFSU2_TR(0x73b7b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b8c4;}}
}
B73b7bc:L73b7bc:{c.instructions+=6;NFSU2_TR(0x73b7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73b7bf:{NFSU2_TR(0x73b7bf);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B73b7c5:{NFSU2_TR(0x73b7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b7c8:{NFSU2_TR(0x73b7c8);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B73b7ca:{NFSU2_TR(0x73b7ca);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffff0000ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73b7cf:{NFSU2_TR(0x73b7cf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b864;}}
}
B73b7d5:L73b7d5:{c.instructions+=3;NFSU2_TR(0x73b7d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b7d8:{NFSU2_TR(0x73b7d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b7da:{NFSU2_TR(0x73b7da);
if(r1(R+518)){{goto L73b864;}}
}
B73b7e0:L73b7e0:{c.instructions+=4;NFSU2_TR(0x73b7e0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b7e3:{NFSU2_TR(0x73b7e3);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73b7e5:{NFSU2_TR(0x73b7e5);
w1(R+12,u8(0x1ull));
}
B73b7e7:{NFSU2_TR(0x73b7e7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b7f2;}}
}
B73b7e9:L73b7e9:{c.instructions+=2;NFSU2_TR(0x73b7e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b7ea:{NFSU2_TR(0x73b7ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b7efull));
TAIL_STATIC(0x739f10u,739);
}
B73b7ef:L73b7ef:{c.instructions+=1;NFSU2_TR(0x73b7ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b7f2:L73b7f2:{c.instructions+=3;NFSU2_TR(0x73b7f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b7f5:{NFSU2_TR(0x73b7f5);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73b7f7:{NFSU2_TR(0x73b7f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b802;}}
}
B73b7f9:L73b7f9:{c.instructions+=2;NFSU2_TR(0x73b7f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b7fa:{NFSU2_TR(0x73b7fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b7ffull));
TAIL_STATIC(0x73a0d0u,73a);
}
B73b7ff:L73b7ff:{c.instructions+=1;NFSU2_TR(0x73b7ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b802:L73b802:{c.instructions+=3;NFSU2_TR(0x73b802);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b805:{NFSU2_TR(0x73b805);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B73b807:{NFSU2_TR(0x73b807);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73b812;}}
}
B73b809:L73b809:{c.instructions+=2;NFSU2_TR(0x73b809);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b80a:{NFSU2_TR(0x73b80a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b80full));
TAIL_STATIC(0x73a290u,73a);
}
B73b80f:L73b80f:{c.instructions+=1;NFSU2_TR(0x73b80f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b812:L73b812:{c.instructions+=9;NFSU2_TR(0x73b812);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B73b817:{NFSU2_TR(0x73b817);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73b819:{NFSU2_TR(0x73b819);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b81c:{NFSU2_TR(0x73b81c);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B73b81e:{NFSU2_TR(0x73b81e);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+0))));
}
B73b820:{NFSU2_TR(0x73b820);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73b822:{NFSU2_TR(0x73b822);
w4(R+0,u32(0-u32(r4(R+0))));
}
B73b824:{NFSU2_TR(0x73b824);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73b826:{NFSU2_TR(0x73b826);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b8c4;}}
}
B73b82c:L73b82c:{c.instructions+=2;NFSU2_TR(0x73b82c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b82e:{NFSU2_TR(0x73b82e);
if(r1(R+518)){{goto L73b8c4;}}
}
B73b834:L73b834:{c.instructions+=3;NFSU2_TR(0x73b834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b837:{NFSU2_TR(0x73b837);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b839:{NFSU2_TR(0x73b839);
if(r1(R+518)){{goto L73b868;}}
}
B73b83b:L73b83b:{c.instructions+=6;NFSU2_TR(0x73b83b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b83f:{NFSU2_TR(0x73b83f);
__builtin_memmove((R+28),gp(0x8b7bc4),4);
}
B73b845:{NFSU2_TR(0x73b845);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B73b847:{NFSU2_TR(0x73b847);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B73b849:{NFSU2_TR(0x73b849);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73b84b:{NFSU2_TR(0x73b84b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73b8c4;}}
}
B73b84d:L73b84d:{c.instructions+=4;NFSU2_TR(0x73b84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b850:{NFSU2_TR(0x73b850);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b852:{NFSU2_TR(0x73b852);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b853:{NFSU2_TR(0x73b853);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b858ull));
TAIL_STATIC(0x46be50u,46b);
}
B73b858:L73b858:{c.instructions+=3;NFSU2_TR(0x73b858);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73b85b:{NFSU2_TR(0x73b85b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73b862:{NFSU2_TR(0x73b862);
{goto L73b8c4;}
}
B73b864:L73b864:{c.instructions+=2;NFSU2_TR(0x73b864);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B73b866:{NFSU2_TR(0x73b866);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b812u);}goto L73b812;}
}
B73b868:L73b868:{c.instructions+=3;NFSU2_TR(0x73b868);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b86b:{NFSU2_TR(0x73b86b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b86c:{NFSU2_TR(0x73b86c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b871ull));
TAIL_STATIC(0x47b7e0u,47b);
}
B73b871:L73b871:{c.instructions+=3;NFSU2_TR(0x73b871);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b874:{NFSU2_TR(0x73b874);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b876:{NFSU2_TR(0x73b876);
if(r1(R+518)){{goto L73b8c4;}}
}
B73b878:L73b878:{c.instructions+=2;NFSU2_TR(0x73b878);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b879:{NFSU2_TR(0x73b879);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b87eull));
TAIL_STATIC(0x73c9b0u,73c);
}
B73b87e:L73b87e:{c.instructions+=4;NFSU2_TR(0x73b87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b881:{NFSU2_TR(0x73b881);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b884:{NFSU2_TR(0x73b884);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b886:{NFSU2_TR(0x73b886);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73b894;}}
}
B73b888:L73b888:{c.instructions+=4;NFSU2_TR(0x73b888);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b88c:{NFSU2_TR(0x73b88c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B73b88e:{NFSU2_TR(0x73b88e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73b890:{NFSU2_TR(0x73b890);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73b8c4;}}
}
B73b892:L73b892:{c.instructions+=1;NFSU2_TR(0x73b892);
{goto L73b899;}
}
B73b894:L73b894:{c.instructions+=2;NFSU2_TR(0x73b894);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B73b897:{NFSU2_TR(0x73b897);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73b8c4;}}
}
B73b899:L73b899:{c.instructions+=3;NFSU2_TR(0x73b899);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b89c:{NFSU2_TR(0x73b89c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b89e:{NFSU2_TR(0x73b89e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b8b7;}}
}
B73b8a0:L73b8a0:{c.instructions+=3;NFSU2_TR(0x73b8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b8a3:{NFSU2_TR(0x73b8a3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b8a4:{NFSU2_TR(0x73b8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b8a9ull));
TAIL_STATIC(0x46c430u,46c);
}
B73b8a9:L73b8a9:{c.instructions+=3;NFSU2_TR(0x73b8a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b8ac:{NFSU2_TR(0x73b8ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b8ae:{NFSU2_TR(0x73b8ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b8b7;}}
}
B73b8b0:L73b8b0:{c.instructions+=1;NFSU2_TR(0x73b8b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xff0000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73b8b7:L73b8b7:{c.instructions+=3;NFSU2_TR(0x73b8b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b8bb:{NFSU2_TR(0x73b8bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b8bc:{NFSU2_TR(0x73b8bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b8c1ull));
TAIL_STATIC(0x73d410u,73d);
}
B73b8c1:L73b8c1:{c.instructions+=1;NFSU2_TR(0x73b8c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b8c4:L73b8c4:{c.instructions+=6;NFSU2_TR(0x73b8c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b8c8:{NFSU2_TR(0x73b8c8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73b8c9:{NFSU2_TR(0x73b8c9);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B73b8cc:{NFSU2_TR(0x73b8cc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w1(R+512,u8((r4(U+0))<(u32(0xb8ull))));
}
B73b8d2:{NFSU2_TR(0x73b8d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b8d6:{NFSU2_TR(0x73b8d6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b7a0u);}goto L73b7a0;}}
}
B73b8dc:L73b8dc:{c.instructions+=1;NFSU2_TR(0x73b8dc);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B73b8e0:L73b8e0:{c.instructions+=2;NFSU2_TR(0x73b8e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73b8e2:{NFSU2_TR(0x73b8e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b8ed;}}
}
B73b8e4:L73b8e4:{c.instructions+=1;NFSU2_TR(0x73b8e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b8e9ull));
TAIL_STATIC(0x739930u,739);
}
B73b8e9:L73b8e9:{c.instructions+=2;NFSU2_TR(0x73b8e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b8eb:{NFSU2_TR(0x73b8eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b8e0u);}goto L73b8e0;}}
}
B73b8ed:L73b8ed:{c.instructions+=6;NFSU2_TR(0x73b8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b8ee:{NFSU2_TR(0x73b8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b8ef:{NFSU2_TR(0x73b8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b8f0:{NFSU2_TR(0x73b8f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B73b8f1:{NFSU2_TR(0x73b8f1);
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
B73b8f4:{NFSU2_TR(0x73b8f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b900:L73b900:{c.instructions+=3;NFSU2_TR(0x73b900);
__builtin_memmove((R+0),gp(0x8b7bbd),1);
}
B73b905:{NFSU2_TR(0x73b905);
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
B73b907:{NFSU2_TR(0x73b907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b9a7;}}
}
B73b90d:L73b90d:{c.instructions+=3;NFSU2_TR(0x73b90d);
__builtin_memmove((R+0),gp(0x8b7bbc),1);
}
B73b912:{NFSU2_TR(0x73b912);
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
B73b914:{NFSU2_TR(0x73b914);
if(r1(R+518)){{goto L73b9a7;}}
}
B73b91a:L73b91a:{c.instructions+=3;NFSU2_TR(0x73b91a);
__builtin_memmove((R+0),gp(0x8b7bc0),4);
}
B73b91f:{NFSU2_TR(0x73b91f);
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
B73b921:{NFSU2_TR(0x73b921);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73b9a7;}}
}
B73b927:L73b927:{c.instructions+=7;NFSU2_TR(0x73b927);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73b92b:{NFSU2_TR(0x73b92b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b92c:{NFSU2_TR(0x73b92c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b92d:{NFSU2_TR(0x73b92d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b92e:{NFSU2_TR(0x73b92e);
s4(0x8b7bc0,u32(0xffffffffull));
}
B73b938:{NFSU2_TR(0x73b938);
__builtin_memmove(gp(0x819b09),(R+0),1);
}
B73b93d:{NFSU2_TR(0x73b93d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b942ull));
TAIL_STATIC(0x45a460u,45a);
}
B73b942:L73b942:{c.instructions+=3;NFSU2_TR(0x73b942);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b944:{NFSU2_TR(0x73b944);
__builtin_memmove(gp(0x8b7bc4),(R+0),4);
}
B73b949:{NFSU2_TR(0x73b949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b94eull));
TAIL_STATIC(0x46c130u,46c);
}
B73b94e:L73b94e:{c.instructions+=5;NFSU2_TR(0x73b94e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b951:{NFSU2_TR(0x73b951);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B73b953:{NFSU2_TR(0x73b953);
w4(R+24,u32(0x8b5744ull));
}
B73b958:{NFSU2_TR(0x73b958);
w4(R+20,u32(0x4ull));
}
B73b95d:{NFSU2_TR(0x73b95d);
__builtin_memmove((R+4),(R+4),4);
}
B73b960:L73b960:{c.instructions+=2;NFSU2_TR(0x73b960);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73b963:{NFSU2_TR(0x73b963);
if(r1(R+518)){{goto L73b97c;}}
}
B73b965:L73b965:{c.instructions+=2;NFSU2_TR(0x73b965);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b966:{NFSU2_TR(0x73b966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b96bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b620u);}goto L73b620;}
}
B73b96b:L73b96b:{c.instructions+=3;NFSU2_TR(0x73b96b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73b96e:{NFSU2_TR(0x73b96e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73b970:{NFSU2_TR(0x73b970);
if(r1(R+518)){{goto L73b97c;}}
}
B73b972:L73b972:{c.instructions+=1;NFSU2_TR(0x73b972);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b977ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b400u);}goto L73b400;}
}
B73b977:L73b977:{c.instructions+=1;NFSU2_TR(0x73b977);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b97cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b750u);}goto L73b750;}
}
B73b97c:L73b97c:{c.instructions+=4;NFSU2_TR(0x73b97c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B73b97d:{NFSU2_TR(0x73b97d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x928ull))));
}
B73b983:{NFSU2_TR(0x73b983);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B73b984:{NFSU2_TR(0x73b984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b960u);}goto L73b960;}}
}
B73b986:L73b986:{c.instructions+=2;NFSU2_TR(0x73b986);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b988:{NFSU2_TR(0x73b988);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b98dull));
TAIL_STATIC(0x46c130u,46c);
}
B73b98d:L73b98d:{c.instructions+=6;NFSU2_TR(0x73b98d);
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
B73b990:{NFSU2_TR(0x73b990);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73b991:{NFSU2_TR(0x73b991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73b992:{NFSU2_TR(0x73b992);
s4(0x8b7bc0,u32(0x0ull));
}
B73b99c:{NFSU2_TR(0x73b99c);
s4(0x8b7bb0,u32(0x0ull));
}
B73b9a6:{NFSU2_TR(0x73b9a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B73b9a7:L73b9a7:{c.instructions+=1;NFSU2_TR(0x73b9a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b9b0:L73b9b0:{c.instructions+=2;NFSU2_TR(0x73b9b0);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b9b2:{NFSU2_TR(0x73b9b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b9b7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b900u);}goto L73b900;}
}
B73b9b7:L73b9b7:{c.instructions+=2;NFSU2_TR(0x73b9b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b9b8:{NFSU2_TR(0x73b9b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b9c0:L73b9c0:{c.instructions+=2;NFSU2_TR(0x73b9c0);
u8 U[4];
w4(U+0,u32(0x42ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b9c2:{NFSU2_TR(0x73b9c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73b9c7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b900u);}goto L73b900;}
}
B73b9c7:L73b9c7:{c.instructions+=2;NFSU2_TR(0x73b9c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B73b9c8:{NFSU2_TR(0x73b9c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73b9d0:L73b9d0:{c.instructions+=26;NFSU2_TR(0x73b9d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73b9d4:{NFSU2_TR(0x73b9d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B73b9d7:{NFSU2_TR(0x73b9d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b9db:{NFSU2_TR(0x73b9db);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73b9dc:{NFSU2_TR(0x73b9dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B73b9de:{NFSU2_TR(0x73b9de);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3full))));
}
B73b9e1:{NFSU2_TR(0x73b9e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B73b9e2:{NFSU2_TR(0x73b9e2);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73b9e5:{NFSU2_TR(0x73b9e5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B73b9e7:{NFSU2_TR(0x73b9e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B73b9e9:{NFSU2_TR(0x73b9e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73b9ec:{NFSU2_TR(0x73b9ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b9ef:{NFSU2_TR(0x73b9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73b9f2:{NFSU2_TR(0x73b9f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73b9f5:{NFSU2_TR(0x73b9f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b9f8:{NFSU2_TR(0x73b9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73b9fb:{NFSU2_TR(0x73b9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73b9fe:{NFSU2_TR(0x73b9fe);
__builtin_memmove((R+8),(R+4),4);
}
B73ba00:{NFSU2_TR(0x73ba00);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff0000ull))));
}
B73ba06:{NFSU2_TR(0x73ba06);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10000ull))));
}
B73ba0c:{NFSU2_TR(0x73ba0c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
}
B73ba0e:{NFSU2_TR(0x73ba0e);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3f0000ull))));
}
B73ba14:{NFSU2_TR(0x73ba14);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73ba16:{NFSU2_TR(0x73ba16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73ba19:{NFSU2_TR(0x73ba19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ba1a:{NFSU2_TR(0x73ba1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ba20:L73ba20:{c.instructions+=8;NFSU2_TR(0x73ba20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ba24:{NFSU2_TR(0x73ba24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ba25:{NFSU2_TR(0x73ba25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73ba26:{NFSU2_TR(0x73ba26);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73ba2a:{NFSU2_TR(0x73ba2a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B73ba2d:{NFSU2_TR(0x73ba2d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B73ba2f:{NFSU2_TR(0x73ba2f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B73ba31:{NFSU2_TR(0x73ba31);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73ba76;}}
}
B73ba33:L73ba33:{c.instructions+=1;NFSU2_TR(0x73ba33);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73ba37:L73ba37:{c.instructions+=2;NFSU2_TR(0x73ba37);
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
B73ba39:{NFSU2_TR(0x73ba39);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73ba76;}}
}
B73ba3b:L73ba3b:{c.instructions+=2;NFSU2_TR(0x73ba3b);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B73ba3f:{NFSU2_TR(0x73ba3f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ba64;}}
}
B73ba41:L73ba41:{c.instructions+=5;NFSU2_TR(0x73ba41);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ba44:{NFSU2_TR(0x73ba44);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73ba47:{NFSU2_TR(0x73ba47);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3ull))));
}
B73ba4a:{NFSU2_TR(0x73ba4a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ba4d:{NFSU2_TR(0x73ba4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ba52;}}
}
B73ba4f:L73ba4f:{c.instructions+=2;NFSU2_TR(0x73ba4f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B73ba50:{NFSU2_TR(0x73ba50);
{goto L73ba64;}
}
B73ba52:L73ba52:{c.instructions+=2;NFSU2_TR(0x73ba52);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ba55:{NFSU2_TR(0x73ba55);
if(r1(R+518)){{goto L73ba5c;}}
}
B73ba57:L73ba57:{c.instructions+=2;NFSU2_TR(0x73ba57);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73ba5a:{NFSU2_TR(0x73ba5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73ba64;}}
}
B73ba5c:L73ba5c:{c.instructions+=4;NFSU2_TR(0x73ba5c);
__builtin_memmove((R+0),(R+24),4);
}
B73ba5e:{NFSU2_TR(0x73ba5e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
}
B73ba5f:{NFSU2_TR(0x73ba5f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ba61:{NFSU2_TR(0x73ba61);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73ba64;}}
}
B73ba63:L73ba63:{c.instructions+=1;NFSU2_TR(0x73ba63);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B73ba64:L73ba64:{c.instructions+=2;NFSU2_TR(0x73ba64);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73ba66:{NFSU2_TR(0x73ba66);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73ba6f;}}
}
B73ba68:L73ba68:{c.instructions+=1;NFSU2_TR(0x73ba68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x4000000ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B73ba6f:L73ba6f:{c.instructions+=3;NFSU2_TR(0x73ba6f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B73ba72:{NFSU2_TR(0x73ba72);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B73ba74:{NFSU2_TR(0x73ba74);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ba37u);}goto L73ba37;}}
}
B73ba76:L73ba76:{c.instructions+=3;NFSU2_TR(0x73ba76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B73ba77:{NFSU2_TR(0x73ba77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73ba78:{NFSU2_TR(0x73ba78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73ba80:L73ba80:{c.instructions+=5;NFSU2_TR(0x73ba80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73ba84:{NFSU2_TR(0x73ba84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73ba88:{NFSU2_TR(0x73ba88);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B73ba8b:{NFSU2_TR(0x73ba8b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B73ba8d:{NFSU2_TR(0x73ba8d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73baa4;}}
}
B73ba8f:L73ba8f:{c.instructions+=1;NFSU2_TR(0x73ba8f);
w4(R+8,u32(0x4000000ull));
}
B73ba94:L73ba94:{c.instructions+=2;NFSU2_TR(0x73ba94);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B73ba98:{NFSU2_TR(0x73ba98);
if(r1(R+518)){{goto L73baa4;}}
}
B73ba9a:L73ba9a:{c.instructions+=4;NFSU2_TR(0x73ba9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B73ba9d:{NFSU2_TR(0x73ba9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B73baa0:{NFSU2_TR(0x73baa0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B73baa2:{NFSU2_TR(0x73baa2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73ba94u);}goto L73ba94;}}
}
B73baa4:L73baa4:{c.instructions+=1;NFSU2_TR(0x73baa4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73bad0:L73bad0:{c.instructions+=5;NFSU2_TR(0x73bad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B73bad3:{NFSU2_TR(0x73bad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bad4:{NFSU2_TR(0x73bad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73bad8:{NFSU2_TR(0x73bad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73bada:{NFSU2_TR(0x73bada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bae6;}}
}
B73badc:L73badc:{c.instructions+=4;NFSU2_TR(0x73badc);
w4(R+0,u32(0x1ull));
}
B73bae1:{NFSU2_TR(0x73bae1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73bae2:{NFSU2_TR(0x73bae2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73bae5:{NFSU2_TR(0x73bae5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73bae6:L73bae6:{c.instructions+=4;NFSU2_TR(0x73bae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bae9:{NFSU2_TR(0x73bae9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73baeb:{NFSU2_TR(0x73baeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73baf5:{NFSU2_TR(0x73baf5);
if(r1(R+518)){{goto L73bb0d;}}
}
B73baf7:L73baf7:{c.instructions+=7;NFSU2_TR(0x73baf7);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b7bc4),4);
w1(R+512,u8((r4(U+0))<(r4(R+0))));
}
B73bafd:{NFSU2_TR(0x73bafd);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B73baff:{NFSU2_TR(0x73baff);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B73bb02:{NFSU2_TR(0x73bb02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bb08:{NFSU2_TR(0x73bb08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73bb09:{NFSU2_TR(0x73bb09);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73bb0c:{NFSU2_TR(0x73bb0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73bb0d:L73bb0d:{c.instructions+=2;NFSU2_TR(0x73bb0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffff0000ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B73bb14:{NFSU2_TR(0x73bb14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73bb52;}}
}
B73bb16:L73bb16:{c.instructions+=5;NFSU2_TR(0x73bb16);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73bb1a:{NFSU2_TR(0x73bb1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bb1b:{NFSU2_TR(0x73bb1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bb1c:{NFSU2_TR(0x73bb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73bb26:{NFSU2_TR(0x73bb26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bb2bull));
TAIL_STATIC(0x73c6b0u,73c);
}
B73bb2b:L73bb2b:{c.instructions+=3;NFSU2_TR(0x73bb2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73bb2e:{NFSU2_TR(0x73bb2e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73bb30:{NFSU2_TR(0x73bb30);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73bb52;}}
}
B73bb32:L73bb32:{c.instructions+=7;NFSU2_TR(0x73bb32);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73bb38:{NFSU2_TR(0x73bb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bb3b:{NFSU2_TR(0x73bb3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bb3e:{NFSU2_TR(0x73bb3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bb42:{NFSU2_TR(0x73bb42);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B73bb44:{NFSU2_TR(0x73bb44);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bb46:{NFSU2_TR(0x73bb46);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L73bb52;}}
}
B73bb48:L73bb48:{c.instructions+=1;NFSU2_TR(0x73bb48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73bb52:L73bb52:{c.instructions+=4;NFSU2_TR(0x73bb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bb58:{NFSU2_TR(0x73bb58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B73bb59:{NFSU2_TR(0x73bb59);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73bb5c:{NFSU2_TR(0x73bb5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B73bb60:L73bb60:{c.instructions+=22;NFSU2_TR(0x73bb60);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bb61:{NFSU2_TR(0x73bb61);
__builtin_memmove((R+20),(R+16),4);
}
B73bb63:{NFSU2_TR(0x73bb63);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B73bb66:{NFSU2_TR(0x73bb66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14cull))));
}
B73bb6c:{NFSU2_TR(0x73bb6c);
__builtin_memmove((R+4),gp(0x8b7bb0),4);
}
B73bb72:{NFSU2_TR(0x73bb72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x91cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bb78:{NFSU2_TR(0x73bb78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bb79:{NFSU2_TR(0x73bb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B73bb7c:{NFSU2_TR(0x73bb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bb7f:{NFSU2_TR(0x73bb7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bb83:{NFSU2_TR(0x73bb83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B73bb85:{NFSU2_TR(0x73bb85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bb86:{NFSU2_TR(0x73bb86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bb87:{NFSU2_TR(0x73bb87);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bb8b:{NFSU2_TR(0x73bb8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bb8f:{NFSU2_TR(0x73bb8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bb93:{NFSU2_TR(0x73bb93);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bb97:{NFSU2_TR(0x73bb97);
w4(R+8,u32(0x1ull));
}
B73bb9c:{NFSU2_TR(0x73bb9c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B73bb9e:{NFSU2_TR(0x73bb9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B73bba0:{NFSU2_TR(0x73bba0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73bba2:{NFSU2_TR(0x73bba2);
if(r1(R+518)){TAIL_STATIC(0x73c538u,73c);}
}
B73bba8:L73bba8:{c.instructions+=7;NFSU2_TR(0x73bba8);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bbad:{NFSU2_TR(0x73bbad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bbb0:{NFSU2_TR(0x73bbb0);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B73bbb2:{NFSU2_TR(0x73bbb2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000000ull))));
}
B73bbb7:{NFSU2_TR(0x73bbb7);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B73bbb9:{NFSU2_TR(0x73bbb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bbba:{NFSU2_TR(0x73bbba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bbbfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b300u);}goto L73b300;}
}
B73bbbf:L73bbbf:{c.instructions+=5;NFSU2_TR(0x73bbbf);
__builtin_memmove((R+28),(R+0),4);
}
B73bbc1:{NFSU2_TR(0x73bbc1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73bbc4:{NFSU2_TR(0x73bbc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73bbc6:{NFSU2_TR(0x73bbc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bbca:{NFSU2_TR(0x73bbca);
if(r1(R+518)){TAIL_STATIC(0x73c538u,73c);}
}
B73bbd0:L73bbd0:{c.instructions+=4;NFSU2_TR(0x73bbd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B73bbd4:{NFSU2_TR(0x73bbd4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B73bbd5:{NFSU2_TR(0x73bbd5);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B73bbd8:{NFSU2_TR(0x73bbd8);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x73c531u,73c);}
}
B73bbde:L73bbde:{c.instructions+=1;NFSU2_TR(0x73bbde);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c55cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73bbe5:L73bbe5:{c.instructions+=7;NFSU2_TR(0x73bbe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bbe8:{NFSU2_TR(0x73bbe8);
__builtin_memmove((R+4),gp(0x8b7bc4),4);
}
B73bbee:{NFSU2_TR(0x73bbee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73bbf1:{NFSU2_TR(0x73bbf1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bbf5:{NFSU2_TR(0x73bbf5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B73bbf7:{NFSU2_TR(0x73bbf7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bbf9:{NFSU2_TR(0x73bbf9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x73c538u,73c);}
}
B73bbff:L73bbff:{c.instructions+=1;NFSU2_TR(0x73bbff);
TAIL_STATIC(0x73c531u,73c);
}
B73bc04:L73bc04:{c.instructions+=3;NFSU2_TR(0x73bc04);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bc07:{NFSU2_TR(0x73bc07);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bc08:{NFSU2_TR(0x73bc08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bc0dull));
TAIL_STATIC(0x45a440u,45a);
}
B73bc0d:L73bc0d:{c.instructions+=4;NFSU2_TR(0x73bc0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B73bc11:{NFSU2_TR(0x73bc11);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bc12:{NFSU2_TR(0x73bc12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bc13:{NFSU2_TR(0x73bc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bc18ull));
TAIL_STATIC(0x73c6b0u,73c);
}
B73bc18:L73bc18:{c.instructions+=3;NFSU2_TR(0x73bc18);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B73bc1b:{NFSU2_TR(0x73bc1b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73bc1d:{NFSU2_TR(0x73bc1d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x73c538u,73c);}
}
B73bc23:L73bc23:{c.instructions+=6;NFSU2_TR(0x73bc23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bc26:{NFSU2_TR(0x73bc26);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73bc29:{NFSU2_TR(0x73bc29);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfull))));
}
B73bc2c:{NFSU2_TR(0x73bc2c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B73bc2f:{NFSU2_TR(0x73bc2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73bc33:{NFSU2_TR(0x73bc33);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x73c538u,73c);}
}
B73bc39:L73bc39:{c.instructions+=1;NFSU2_TR(0x73bc39);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x73c59cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B73bc40:L73bc40:{c.instructions+=3;NFSU2_TR(0x73bc40);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bc44:{NFSU2_TR(0x73bc44);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bc47:{NFSU2_TR(0x73bc47);
TAIL_STATIC(0x73c538u,73c);
}
B73bc4c:L73bc4c:{c.instructions+=3;NFSU2_TR(0x73bc4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bc50:{NFSU2_TR(0x73bc50);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bc53:{NFSU2_TR(0x73bc53);
TAIL_STATIC(0x73c538u,73c);
}
B73bc58:L73bc58:{c.instructions+=3;NFSU2_TR(0x73bc58);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bc5c:{NFSU2_TR(0x73bc5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bc5f:{NFSU2_TR(0x73bc5f);
TAIL_STATIC(0x73c538u,73c);
}
B73bc64:L73bc64:{c.instructions+=9;NFSU2_TR(0x73bc64);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bc69:{NFSU2_TR(0x73bc69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bc6c:{NFSU2_TR(0x73bc6c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B73bc70:{NFSU2_TR(0x73bc70);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(s32(s16(r2(U+8)))));
}
B73bc74:{NFSU2_TR(0x73bc74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bc77:{NFSU2_TR(0x73bc77);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B73bc7a:{NFSU2_TR(0x73bc7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bc7d:{NFSU2_TR(0x73bc7d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73bc7f:{NFSU2_TR(0x73bc7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bc9d;}}
}
B73bc81:L73bc81:{c.instructions+=7;NFSU2_TR(0x73bc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bc84:{NFSU2_TR(0x73bc84);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff001ffull))));
}
B73bc8a:{NFSU2_TR(0x73bc8a);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x100ull))));
}
B73bc90:{NFSU2_TR(0x73bc90);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73bc93:{NFSU2_TR(0x73bc93);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xff000ff1ull))));
}
B73bc98:{NFSU2_TR(0x73bc98);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+0))));
}
B73bc9a:{NFSU2_TR(0x73bc9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bc9d:L73bc9d:{c.instructions+=7;NFSU2_TR(0x73bc9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bca0:{NFSU2_TR(0x73bca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bca3:{NFSU2_TR(0x73bca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B73bca6:{NFSU2_TR(0x73bca6);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff000ull))));
}
B73bcab:{NFSU2_TR(0x73bcab);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff000ull))));
}
B73bcb1:{NFSU2_TR(0x73bcb1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bcb3:{NFSU2_TR(0x73bcb3);
if(r1(R+518)){{goto L73bcd0;}}
}
B73bcb5:L73bcb5:{c.instructions+=7;NFSU2_TR(0x73bcb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bcb9:{NFSU2_TR(0x73bcb9);
__builtin_memmove((R+0),gp(0x8b7bc4),4);
}
B73bcbe:{NFSU2_TR(0x73bcbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bcc1:{NFSU2_TR(0x73bcc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bcc4:{NFSU2_TR(0x73bcc4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73bcc8:{NFSU2_TR(0x73bcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bccb:{NFSU2_TR(0x73bccb);
TAIL_STATIC(0x73c538u,73c);
}
B73bcd0:L73bcd0:{c.instructions+=2;NFSU2_TR(0x73bcd0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9ull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B73bcd4:{NFSU2_TR(0x73bcd4);
TAIL_STATIC(0x73c538u,73c);
}
B73bcd9:L73bcd9:{c.instructions+=5;NFSU2_TR(0x73bcd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bcdd:{NFSU2_TR(0x73bcdd);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bce2:{NFSU2_TR(0x73bce2);
w4(R+4,u32(0x44ull));
}
B73bce7:{NFSU2_TR(0x73bce7);
__builtin_memmove((R+24),(R+8),4);
}
B73bce9:{NFSU2_TR(0x73bce9);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B73bced:L73bced:{c.instructions+=1;NFSU2_TR(0x73bced);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73bcef;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73bcedu);}goto L73bced;}
}
B73bcef:L73bcef:{c.instructions+=6;NFSU2_TR(0x73bcef);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73bcf3:{NFSU2_TR(0x73bcf3);
w4(R+28,u32(s32(s16(r2(R+24)))));
}
B73bcf6:{NFSU2_TR(0x73bcf6);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B73bcf9:{NFSU2_TR(0x73bcf9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B73bcfc:{NFSU2_TR(0x73bcfc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffff0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bcff:{NFSU2_TR(0x73bcff);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73bd13;}}
}
B73bd01:L73bd01:{c.instructions+=2;NFSU2_TR(0x73bd01);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffe0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffe0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bd04:{NFSU2_TR(0x73bd04);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73bd13;}}
}
B73bd06:L73bd06:{c.instructions+=3;NFSU2_TR(0x73bd06);
w4(R+28,u32(0-u32(r4(R+28))));
}
B73bd08:{NFSU2_TR(0x73bd08);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfull))));
}
B73bd0b:{NFSU2_TR(0x73bd0b);
u8 U[14];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+28,u32(s32(s16(r2(U+12)))));
}
B73bd13:L73bd13:{c.instructions+=2;NFSU2_TR(0x73bd13);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfffffff0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bd16:{NFSU2_TR(0x73bd16);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73bd2a;}}
}
B73bd18:L73bd18:{c.instructions+=2;NFSU2_TR(0x73bd18);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffe0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffe0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bd1b:{NFSU2_TR(0x73bd1b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L73bd2a;}}
}
B73bd1d:L73bd1d:{c.instructions+=3;NFSU2_TR(0x73bd1d);
w4(R+24,u32(0-u32(r4(R+24))));
}
B73bd1f:{NFSU2_TR(0x73bd1f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfull))));
}
B73bd22:{NFSU2_TR(0x73bd22);
u8 U[14];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+24,u32(s32(s16(r2(U+12)))));
}
B73bd2a:L73bd2a:{c.instructions+=2;NFSU2_TR(0x73bd2a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73bd2c:{NFSU2_TR(0x73bd2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73bd4e;}}
}
B73bd2e:L73bd2e:{c.instructions+=4;NFSU2_TR(0x73bd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bd31:{NFSU2_TR(0x73bd31);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73bd35:{NFSU2_TR(0x73bd35);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bd37:{NFSU2_TR(0x73bd37);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L73bd4e;}}
}
B73bd39:L73bd39:{c.instructions+=2;NFSU2_TR(0x73bd39);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffdfull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bd3c:{NFSU2_TR(0x73bd3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bd44;}}
}
B73bd3e:L73bd3e:{c.instructions+=2;NFSU2_TR(0x73bd3e);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(s32(s16(r2(U+4)))));
}
B73bd42:{NFSU2_TR(0x73bd42);
{goto L73bd6d;}
}
B73bd44:L73bd44:{c.instructions+=2;NFSU2_TR(0x73bd44);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffe0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bd47:{NFSU2_TR(0x73bd47);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bd6d;}}
}
B73bd49:L73bd49:{c.instructions+=2;NFSU2_TR(0x73bd49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73bd4c:{NFSU2_TR(0x73bd4c);
{goto L73bd6d;}
}
B73bd4e:L73bd4e:{c.instructions+=2;NFSU2_TR(0x73bd4e);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(m1(0x819b0c))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B73bd55:{NFSU2_TR(0x73bd55);
if(r1(R+518)){{goto L73bd6a;}}
}
B73bd57:L73bd57:{c.instructions+=3;NFSU2_TR(0x73bd57);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bd58:{NFSU2_TR(0x73bd58);
u8 U[4];
w4(U+0,u32(0x7d1fa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bd5d:{NFSU2_TR(0x73bd5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bd62ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73b2c0u);}goto L73b2c0;}
}
B73bd62:L73bd62:{c.instructions+=2;NFSU2_TR(0x73bd62);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bd67:{NFSU2_TR(0x73bd67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73bd6a:L73bd6a:{c.instructions+=1;NFSU2_TR(0x73bd6a);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B73bd6d:L73bd6d:{c.instructions+=2;NFSU2_TR(0x73bd6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73bd6f:{NFSU2_TR(0x73bd6f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L73bde0;}}
}
B73bd71:L73bd71:{c.instructions+=8;NFSU2_TR(0x73bd71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bd74:{NFSU2_TR(0x73bd74);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B73bd78:{NFSU2_TR(0x73bd78);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B73bd7a:{NFSU2_TR(0x73bd7a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73bd7c:{NFSU2_TR(0x73bd7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bd80:{NFSU2_TR(0x73bd80);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bd84:{NFSU2_TR(0x73bd84);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bd88:{NFSU2_TR(0x73bd88);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L73bdd7;}}
}
B73bd8a:L73bd8a:{c.instructions+=3;NFSU2_TR(0x73bd8a);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73bd90:{NFSU2_TR(0x73bd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bd93:{NFSU2_TR(0x73bd93);
{goto L73bda0;}
}
B73bd95:L73bd95:{c.instructions+=2;NFSU2_TR(0x73bd95);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bd99:{NFSU2_TR(0x73bd99);
__builtin_memmove((R+16),(R+16),4);
}
B73bda0:L73bda0:{c.instructions+=7;NFSU2_TR(0x73bda0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B73bda3:{NFSU2_TR(0x73bda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73bda6:{NFSU2_TR(0x73bda6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B73bda8:{NFSU2_TR(0x73bda8);
u8 U[4];
w4(U+0,u32(u32(u32(0x15ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B73bdab:{NFSU2_TR(0x73bdab);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x3full))));
}
B73bdae:{NFSU2_TR(0x73bdae);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73bdb0:{NFSU2_TR(0x73bdb0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bdbb;}}
}
B73bdb2:L73bdb2:{c.instructions+=2;NFSU2_TR(0x73bdb2);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B73bdb6:{NFSU2_TR(0x73bdb6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bdbb;}}
}
B73bdb8:L73bdb8:{c.instructions+=2;NFSU2_TR(0x73bdb8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B73bdb9:{NFSU2_TR(0x73bdb9);
if(r1(R+518)){{goto L73bdd1;}}
}
B73bdbb:L73bdbb:{c.instructions+=7;NFSU2_TR(0x73bdbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bdbf:{NFSU2_TR(0x73bdbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bdc3:{NFSU2_TR(0x73bdc3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B73bdc4:{NFSU2_TR(0x73bdc4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B73bdc7:{NFSU2_TR(0x73bdc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B73bdc9:{NFSU2_TR(0x73bdc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bdcd:{NFSU2_TR(0x73bdcd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73bd95u);}goto L73bd95;}}
}
B73bdcf:L73bdcf:{c.instructions+=1;NFSU2_TR(0x73bdcf);
{goto L73bdd7;}
}
B73bdd1:L73bdd1:{c.instructions+=2;NFSU2_TR(0x73bdd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bdd5:{NFSU2_TR(0x73bdd5);
__builtin_memmove((R+28),(R+8),4);
}
B73bdd7:L73bdd7:{c.instructions+=2;NFSU2_TR(0x73bdd7);
u8 U[12];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B73bddb:{NFSU2_TR(0x73bddb);
if(r1(R+512)){{goto L73bde0;}}
}
B73bddd:L73bddd:{c.instructions+=1;NFSU2_TR(0x73bddd);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B73bde0:L73bde0:{c.instructions+=5;NFSU2_TR(0x73bde0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bde4:{NFSU2_TR(0x73bde4);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x36ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B73bde8:{NFSU2_TR(0x73bde8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bdec:{NFSU2_TR(0x73bdec);
u8 U[12];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x1000000ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B73bdf4:{NFSU2_TR(0x73bdf4);
if(r1(R+518)){{goto L73be6b;}}
}
B73bdf6:L73bdf6:{c.instructions+=4;NFSU2_TR(0x73bdf6);
__builtin_memmove((R+8),(R+0),4);
}
B73bdf8:{NFSU2_TR(0x73bdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bdfb:{NFSU2_TR(0x73bdfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bdfc:{NFSU2_TR(0x73bdfc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73be01ull));
TAIL_STATIC(0x46c690u,46c);
}
B73be01:L73be01:{c.instructions+=1;NFSU2_TR(0x73be01);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73be04:L73be04:{c.instructions+=3;NFSU2_TR(0x73be04);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73be08:{NFSU2_TR(0x73be08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73be0d:{NFSU2_TR(0x73be0d);
if(r1(R+518)){{goto L73be34;}}
}
B73be0f:L73be0f:{c.instructions+=7;NFSU2_TR(0x73be0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B73be13:{NFSU2_TR(0x73be13);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B73be17:{NFSU2_TR(0x73be17);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73be1b:{NFSU2_TR(0x73be1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73be1c:{NFSU2_TR(0x73be1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73be1d:{NFSU2_TR(0x73be1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73be1e:{NFSU2_TR(0x73be1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73be23ull));
TAIL_STATIC(0x73d1b0u,73d);
}
B73be23:L73be23:{c.instructions+=3;NFSU2_TR(0x73be23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73be24:{NFSU2_TR(0x73be24);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B73be28:{NFSU2_TR(0x73be28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73be2dull));
TAIL_STATIC(0x73ccc0u,73c);
}
B73be2d:L73be2d:{c.instructions+=2;NFSU2_TR(0x73be2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B73be30:{NFSU2_TR(0x73be30);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73be34:L73be34:{c.instructions+=2;NFSU2_TR(0x73be34);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B73be36:{NFSU2_TR(0x73be36);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x73c531u,73c);}
}
B73be3c:L73be3c:{c.instructions+=2;NFSU2_TR(0x73be3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffd8f1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73be41:{NFSU2_TR(0x73be41);
if(r1(R+518)){TAIL_STATIC(0x73c538u,73c);}
}
B73be47:L73be47:{c.instructions+=6;NFSU2_TR(0x73be47);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73be4b:{NFSU2_TR(0x73be4b);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73be51:{NFSU2_TR(0x73be51);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B73be55:{NFSU2_TR(0x73be55);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73be5b:{NFSU2_TR(0x73be5b);
w4(R+4,u32(0x44ull));
}
B73be60:{NFSU2_TR(0x73be60);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B73be64:L73be64:{c.instructions+=1;NFSU2_TR(0x73be64);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L73be66;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73be64u);}goto L73be64;}
}
B73be66:L73be66:{c.instructions+=1;NFSU2_TR(0x73be66);
TAIL_STATIC(0x73c538u,73c);
}
B73be6b:L73be6b:{c.instructions+=3;NFSU2_TR(0x73be6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73be6e:{NFSU2_TR(0x73be6e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B73be70:{NFSU2_TR(0x73be70);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73be04u);}goto L73be04;}}
}
B73be72:L73be72:{c.instructions+=4;NFSU2_TR(0x73be72);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73be76:{NFSU2_TR(0x73be76);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B73be79:{NFSU2_TR(0x73be79);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73be7b:{NFSU2_TR(0x73be7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73be04u);}goto L73be04;}}
}
B73be7d:L73be7d:{c.instructions+=3;NFSU2_TR(0x73be7d);
__builtin_memmove((R+24),(R+4),4);
}
B73be7f:{NFSU2_TR(0x73be7f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73be80:{NFSU2_TR(0x73be80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73be85ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73bad0u);}goto L73bad0;}
}
B73be85:L73be85:{c.instructions+=4;NFSU2_TR(0x73be85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73be8b:{NFSU2_TR(0x73be8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B73be8e:{NFSU2_TR(0x73be8e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73be91:{NFSU2_TR(0x73be91);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73be04u);}goto L73be04;}}
}
B73be97:L73be97:{c.instructions+=2;NFSU2_TR(0x73be97);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B73be9a:{NFSU2_TR(0x73be9a);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x73be04u);}goto L73be04;}}
}
B73bea0:L73bea0:{c.instructions+=2;NFSU2_TR(0x73bea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffd8f1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B73bea8:{NFSU2_TR(0x73bea8);
TAIL_STATIC(0x73c538u,73c);
}
B73bead:L73bead:{c.instructions+=6;NFSU2_TR(0x73bead);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73beb1:{NFSU2_TR(0x73beb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73beb4:{NFSU2_TR(0x73beb4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B73beb7:{NFSU2_TR(0x73beb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73beb8:{NFSU2_TR(0x73beb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73beb9:{NFSU2_TR(0x73beb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bebeull));
TAIL_STATIC(0x46c600u,46c);
}
B73bebe:L73bebe:{c.instructions+=5;NFSU2_TR(0x73bebe);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B73bec2:{NFSU2_TR(0x73bec2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73bec5:{NFSU2_TR(0x73bec5);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0x1ull))));
}
B73bec8:{NFSU2_TR(0x73bec8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B73becb:{NFSU2_TR(0x73becb);
TAIL_STATIC(0x73c531u,73c);
}
B73bed0:L73bed0:{c.instructions+=14;NFSU2_TR(0x73bed0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bed4:{NFSU2_TR(0x73bed4);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73beda:{NFSU2_TR(0x73beda);
__builtin_memmove((R+0),(R+4),4);
}
B73bedc:{NFSU2_TR(0x73bedc);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73bedf:{NFSU2_TR(0x73bedf);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73bee2:{NFSU2_TR(0x73bee2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bee3:{NFSU2_TR(0x73bee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bee6:{NFSU2_TR(0x73bee6);
w4(R+0,u32(s32(s8(r1(R+4)))));
}
B73bee9:{NFSU2_TR(0x73bee9);
__builtin_memmove((R+24),(R+4),4);
}
B73beeb:{NFSU2_TR(0x73beeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73beec:{NFSU2_TR(0x73beec);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73beef:{NFSU2_TR(0x73beef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bef0:{NFSU2_TR(0x73bef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bef3:{NFSU2_TR(0x73bef3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bef8ull));
TAIL_STATIC(0x739e80u,739);
}
B73bef8:L73bef8:{c.instructions+=1;NFSU2_TR(0x73bef8);
TAIL_STATIC(0x73c52eu,73c);
}
B73befd:L73befd:{c.instructions+=14;NFSU2_TR(0x73befd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bf01:{NFSU2_TR(0x73bf01);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73bf07:{NFSU2_TR(0x73bf07);
__builtin_memmove((R+0),(R+4),4);
}
B73bf09:{NFSU2_TR(0x73bf09);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73bf0c:{NFSU2_TR(0x73bf0c);
__builtin_memmove((R+24),(R+4),4);
}
B73bf0e:{NFSU2_TR(0x73bf0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73bf11:{NFSU2_TR(0x73bf11);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B73bf14:{NFSU2_TR(0x73bf14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf15:{NFSU2_TR(0x73bf15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf16:{NFSU2_TR(0x73bf16);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73bf19:{NFSU2_TR(0x73bf19);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bf1c:{NFSU2_TR(0x73bf1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf1d:{NFSU2_TR(0x73bf1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bf20:{NFSU2_TR(0x73bf20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bf25ull));
TAIL_STATIC(0x739eb0u,739);
}
B73bf25:L73bf25:{c.instructions+=1;NFSU2_TR(0x73bf25);
TAIL_STATIC(0x73c52eu,73c);
}
B73bf2a:L73bf2a:{c.instructions+=14;NFSU2_TR(0x73bf2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bf2e:{NFSU2_TR(0x73bf2e);
__builtin_memmove((R+8),gp(0x8b7bb0),4);
}
B73bf34:{NFSU2_TR(0x73bf34);
__builtin_memmove((R+0),(R+4),4);
}
B73bf36:{NFSU2_TR(0x73bf36);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B73bf39:{NFSU2_TR(0x73bf39);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B73bf3c:{NFSU2_TR(0x73bf3c);
__builtin_memmove((R+24),(R+4),4);
}
B73bf3e:{NFSU2_TR(0x73bf3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bf41:{NFSU2_TR(0x73bf41);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+0))));
}
B73bf44:{NFSU2_TR(0x73bf44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B73bf47:{NFSU2_TR(0x73bf47);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B73bf4a:{NFSU2_TR(0x73bf4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf4b:{NFSU2_TR(0x73bf4b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf4c:{NFSU2_TR(0x73bf4c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf4d:{NFSU2_TR(0x73bf4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bf52ull));
TAIL_STATIC(0x739ee0u,739);
}
B73bf52:L73bf52:{c.instructions+=1;NFSU2_TR(0x73bf52);
TAIL_STATIC(0x73c52eu,73c);
}
B73bf57:L73bf57:{c.instructions+=10;NFSU2_TR(0x73bf57);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bf5b:{NFSU2_TR(0x73bf5b);
__builtin_memmove((R+4),(R+0),4);
}
B73bf5d:{NFSU2_TR(0x73bf5d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B73bf60:{NFSU2_TR(0x73bf60);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B73bf63:{NFSU2_TR(0x73bf63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bf66:{NFSU2_TR(0x73bf66);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B73bf69:{NFSU2_TR(0x73bf69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf6a:{NFSU2_TR(0x73bf6a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf6b:{NFSU2_TR(0x73bf6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf6c:{NFSU2_TR(0x73bf6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bf71ull));
TAIL_STATIC(0x46c470u,46c);
}
B73bf71:L73bf71:{c.instructions+=1;NFSU2_TR(0x73bf71);
TAIL_STATIC(0x73c52eu,73c);
}
B73bf76:L73bf76:{c.instructions+=5;NFSU2_TR(0x73bf76);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B73bf7b:{NFSU2_TR(0x73bf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bf7e:{NFSU2_TR(0x73bf7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf7f:{NFSU2_TR(0x73bf7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bf80:{NFSU2_TR(0x73bf80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bf85ull));
TAIL_STATIC(0x46c500u,46c);
}
B73bf85:L73bf85:{c.instructions+=2;NFSU2_TR(0x73bf85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73bf88:{NFSU2_TR(0x73bf88);
TAIL_STATIC(0x73c531u,73c);
}
B73bf8d:L73bf8d:{c.instructions+=8;NFSU2_TR(0x73bf8d);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bf92:{NFSU2_TR(0x73bf92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bf95:{NFSU2_TR(0x73bf95);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B73bf9a:{NFSU2_TR(0x73bf9a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73bf9e:{NFSU2_TR(0x73bf9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bfa1:{NFSU2_TR(0x73bfa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73bfa4:{NFSU2_TR(0x73bfa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bfa5:{NFSU2_TR(0x73bfa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bfaaull));
TAIL_STATIC(0x739540u,739);
}
B73bfaa:L73bfaa:{c.instructions+=5;NFSU2_TR(0x73bfaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bfab:{NFSU2_TR(0x73bfab);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bfb0:{NFSU2_TR(0x73bfb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B73bfb3:{NFSU2_TR(0x73bfb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bfb4:{NFSU2_TR(0x73bfb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bfb9ull));
TAIL_STATIC(0x7393d0u,739);
}
B73bfb9:L73bfb9:{c.instructions+=1;NFSU2_TR(0x73bfb9);
TAIL_STATIC(0x73c52eu,73c);
}
B73bfbe:L73bfbe:{c.instructions+=3;NFSU2_TR(0x73bfbe);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B73bfc2:{NFSU2_TR(0x73bfc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0xffull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B73bfc4:{NFSU2_TR(0x73bfc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L73bfd0;}}
}
B73bfc6:L73bfc6:{c.instructions+=1;NFSU2_TR(0x73bfc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bfcbull));
TAIL_STATIC(0x739830u,739);
}
B73bfcb:L73bfcb:{c.instructions+=1;NFSU2_TR(0x73bfcb);
TAIL_STATIC(0x73c531u,73c);
}
B73bfd0:L73bfd0:{c.instructions+=12;NFSU2_TR(0x73bfd0);
__builtin_memmove((R+8),(R+0),4);
}
B73bfd2:{NFSU2_TR(0x73bfd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B73bfd5:{NFSU2_TR(0x73bfd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B73bfd8:{NFSU2_TR(0x73bfd8);
w4(R+4,u32(s32(s8(r1(R+0)))));
}
B73bfdb:{NFSU2_TR(0x73bfdb);
__builtin_memmove((R+0),gp(0x8b7bb0),4);
}
B73bfe0:{NFSU2_TR(0x73bfe0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bfe1:{NFSU2_TR(0x73bfe1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bfe4:{NFSU2_TR(0x73bfe4);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(s32(s16(r2(U+8)))));
}
B73bfe8:{NFSU2_TR(0x73bfe8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B73bfeb:{NFSU2_TR(0x73bfeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B73bfee:{NFSU2_TR(0x73bfee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B73bfef:{NFSU2_TR(0x73bfef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x73bff4ull));
TAIL_STATIC(0x7397f0u,739);
}
B73bff4:L73bff4:{c.instructions+=2;NFSU2_TR(0x73bff4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B73bff7:{NFSU2_TR(0x73bff7);
TAIL_STATIC(0x73c531u,73c);
}
B73bffc:L73bffc:{c.instructions+=1;NFSU2_TR(0x73bffc);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
TAIL_STATIC(0x73c000u,73c);
}
XIT:NFSU2_TR_EXIT(0x73b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
