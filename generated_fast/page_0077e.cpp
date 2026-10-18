#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_44f(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_598(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5c8(u8* __restrict R,Cpu& c);
u32 body_5d7(u8* __restrict R,Cpu& c);
u32 body_5de(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e3(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f9(u8* __restrict R,Cpu& c);
u32 body_60b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_77f(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x77e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x77e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_77e(u8* __restrict R,Cpu& c);
u32 page_77e(Cpu& c){return body_77e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_77e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x77e000:goto L77e000;
case 0x77e00a:c.instructions+=6;goto B77e00a;
case 0x77e014:c.instructions+=5;goto B77e014;
case 0x77e01e:c.instructions+=4;goto B77e01e;
case 0x77e028:c.instructions+=3;goto B77e028;
case 0x77e032:c.instructions+=2;goto B77e032;
case 0x77e03c:c.instructions+=1;goto B77e03c;
case 0x77e040:goto L77e040;
case 0x77e04a:c.instructions+=14;goto B77e04a;
case 0x77e054:c.instructions+=13;goto B77e054;
case 0x77e05e:c.instructions+=12;goto B77e05e;
case 0x77e068:c.instructions+=11;goto B77e068;
case 0x77e072:c.instructions+=10;goto B77e072;
case 0x77e07c:c.instructions+=9;goto B77e07c;
case 0x77e086:c.instructions+=8;goto B77e086;
case 0x77e090:c.instructions+=7;goto B77e090;
case 0x77e09a:c.instructions+=6;goto B77e09a;
case 0x77e0a4:c.instructions+=5;goto B77e0a4;
case 0x77e0ae:c.instructions+=4;goto B77e0ae;
case 0x77e0b8:c.instructions+=3;goto B77e0b8;
case 0x77e0c2:c.instructions+=2;goto B77e0c2;
case 0x77e0cc:c.instructions+=1;goto B77e0cc;
case 0x77e0d0:goto L77e0d0;
case 0x77e0da:c.instructions+=2;goto B77e0da;
case 0x77e0e4:c.instructions+=1;goto B77e0e4;
case 0x77e0f0:goto L77e0f0;
case 0x77e0fa:c.instructions+=2;goto B77e0fa;
case 0x77e104:c.instructions+=1;goto B77e104;
case 0x77e110:goto L77e110;
case 0x77e115:c.instructions+=1;goto B77e115;
case 0x77e120:goto L77e120;
case 0x77e12a:c.instructions+=1;goto B77e12a;
case 0x77e130:goto L77e130;
case 0x77e135:c.instructions+=5;goto B77e135;
case 0x77e13a:c.instructions+=4;goto B77e13a;
case 0x77e140:c.instructions+=3;goto B77e140;
case 0x77e146:c.instructions+=2;goto B77e146;
case 0x77e14c:c.instructions+=1;goto B77e14c;
case 0x77e150:goto L77e150;
case 0x77e155:c.instructions+=1;goto B77e155;
case 0x77e15a:goto L77e15a;
case 0x77e15f:c.instructions+=1;goto B77e15f;
case 0x77e164:goto L77e164;
case 0x77e165:c.instructions+=1;goto B77e165;
case 0x77e170:goto L77e170;
case 0x77e175:c.instructions+=1;goto B77e175;
case 0x77e17a:goto L77e17a;
case 0x77e17f:c.instructions+=1;goto B77e17f;
case 0x77e184:goto L77e184;
case 0x77e185:c.instructions+=1;goto B77e185;
case 0x77e190:goto L77e190;
case 0x77e195:c.instructions+=4;goto B77e195;
case 0x77e19a:c.instructions+=3;goto B77e19a;
case 0x77e19f:c.instructions+=2;goto B77e19f;
case 0x77e1a4:c.instructions+=1;goto B77e1a4;
case 0x77e1a9:goto L77e1a9;
case 0x77e1b0:goto L77e1b0;
case 0x77e1b5:c.instructions+=4;goto B77e1b5;
case 0x77e1ba:c.instructions+=3;goto B77e1ba;
case 0x77e1bf:c.instructions+=2;goto B77e1bf;
case 0x77e1c4:c.instructions+=1;goto B77e1c4;
case 0x77e1c9:goto L77e1c9;
case 0x77e1d0:goto L77e1d0;
case 0x77e1d6:c.instructions+=3;goto B77e1d6;
case 0x77e1dc:c.instructions+=2;goto B77e1dc;
case 0x77e1e2:c.instructions+=1;goto B77e1e2;
case 0x77e1f0:goto L77e1f0;
case 0x77e1f5:c.instructions+=5;goto B77e1f5;
case 0x77e1fa:c.instructions+=4;goto B77e1fa;
case 0x77e1fc:c.instructions+=3;goto B77e1fc;
case 0x77e201:c.instructions+=2;goto B77e201;
case 0x77e206:c.instructions+=1;goto B77e206;
case 0x77e20b:goto L77e20b;
case 0x77e210:c.instructions+=1;goto B77e210;
case 0x77e215:goto L77e215;
case 0x77e216:c.instructions+=1;goto B77e216;
case 0x77e220:goto L77e220;
case 0x77e225:c.instructions+=1;goto B77e225;
case 0x77e22a:goto L77e22a;
case 0x77e22f:c.instructions+=1;goto B77e22f;
case 0x77e234:goto L77e234;
case 0x77e235:c.instructions+=1;goto B77e235;
case 0x77e240:goto L77e240;
case 0x77e245:c.instructions+=1;goto B77e245;
case 0x77e24a:goto L77e24a;
case 0x77e24f:c.instructions+=1;goto B77e24f;
case 0x77e254:goto L77e254;
case 0x77e255:c.instructions+=1;goto B77e255;
case 0x77e260:goto L77e260;
case 0x77e265:c.instructions+=1;goto B77e265;
case 0x77e270:goto L77e270;
case 0x77e275:c.instructions+=1;goto B77e275;
case 0x77e280:goto L77e280;
case 0x77e285:c.instructions+=1;goto B77e285;
case 0x77e290:goto L77e290;
case 0x77e295:c.instructions+=1;goto B77e295;
case 0x77e2a0:goto L77e2a0;
case 0x77e2a5:c.instructions+=1;goto B77e2a5;
case 0x77e2b0:goto L77e2b0;
case 0x77e2b1:c.instructions+=4;goto B77e2b1;
case 0x77e2b2:c.instructions+=3;goto B77e2b2;
case 0x77e2b7:c.instructions+=2;goto B77e2b7;
case 0x77e2bc:c.instructions+=1;goto B77e2bc;
case 0x77e2c0:goto L77e2c0;
case 0x77e2c2:c.instructions+=1;goto B77e2c2;
case 0x77e2c7:goto L77e2c7;
case 0x77e2cd:c.instructions+=2;goto B77e2cd;
case 0x77e2ce:c.instructions+=1;goto B77e2ce;
case 0x77e2d0:goto L77e2d0;
case 0x77e2d1:c.instructions+=2;goto B77e2d1;
case 0x77e2d2:c.instructions+=1;goto B77e2d2;
case 0x77e2e0:goto L77e2e0;
case 0x77e2e9:c.instructions+=1;goto B77e2e9;
case 0x77e2f0:goto L77e2f0;
case 0x77e2f6:c.instructions+=81;goto B77e2f6;
case 0x77e2fc:c.instructions+=80;goto B77e2fc;
case 0x77e302:c.instructions+=79;goto B77e302;
case 0x77e304:c.instructions+=78;goto B77e304;
case 0x77e30a:c.instructions+=77;goto B77e30a;
case 0x77e310:c.instructions+=76;goto B77e310;
case 0x77e312:c.instructions+=75;goto B77e312;
case 0x77e318:c.instructions+=74;goto B77e318;
case 0x77e31e:c.instructions+=73;goto B77e31e;
case 0x77e320:c.instructions+=72;goto B77e320;
case 0x77e326:c.instructions+=71;goto B77e326;
case 0x77e32c:c.instructions+=70;goto B77e32c;
case 0x77e32e:c.instructions+=69;goto B77e32e;
case 0x77e334:c.instructions+=68;goto B77e334;
case 0x77e33a:c.instructions+=67;goto B77e33a;
case 0x77e33c:c.instructions+=66;goto B77e33c;
case 0x77e342:c.instructions+=65;goto B77e342;
case 0x77e348:c.instructions+=64;goto B77e348;
case 0x77e34a:c.instructions+=63;goto B77e34a;
case 0x77e350:c.instructions+=62;goto B77e350;
case 0x77e356:c.instructions+=61;goto B77e356;
case 0x77e358:c.instructions+=60;goto B77e358;
case 0x77e35e:c.instructions+=59;goto B77e35e;
case 0x77e364:c.instructions+=58;goto B77e364;
case 0x77e366:c.instructions+=57;goto B77e366;
case 0x77e36c:c.instructions+=56;goto B77e36c;
case 0x77e372:c.instructions+=55;goto B77e372;
case 0x77e374:c.instructions+=54;goto B77e374;
case 0x77e37a:c.instructions+=53;goto B77e37a;
case 0x77e380:c.instructions+=52;goto B77e380;
case 0x77e382:c.instructions+=51;goto B77e382;
case 0x77e388:c.instructions+=50;goto B77e388;
case 0x77e38e:c.instructions+=49;goto B77e38e;
case 0x77e390:c.instructions+=48;goto B77e390;
case 0x77e396:c.instructions+=47;goto B77e396;
case 0x77e39c:c.instructions+=46;goto B77e39c;
case 0x77e39e:c.instructions+=45;goto B77e39e;
case 0x77e3a4:c.instructions+=44;goto B77e3a4;
case 0x77e3aa:c.instructions+=43;goto B77e3aa;
case 0x77e3ac:c.instructions+=42;goto B77e3ac;
case 0x77e3b2:c.instructions+=41;goto B77e3b2;
case 0x77e3b8:c.instructions+=40;goto B77e3b8;
case 0x77e3ba:c.instructions+=39;goto B77e3ba;
case 0x77e3c0:c.instructions+=38;goto B77e3c0;
case 0x77e3c6:c.instructions+=37;goto B77e3c6;
case 0x77e3c8:c.instructions+=36;goto B77e3c8;
case 0x77e3ce:c.instructions+=35;goto B77e3ce;
case 0x77e3d4:c.instructions+=34;goto B77e3d4;
case 0x77e3d6:c.instructions+=33;goto B77e3d6;
case 0x77e3dc:c.instructions+=32;goto B77e3dc;
case 0x77e3e2:c.instructions+=31;goto B77e3e2;
case 0x77e3e4:c.instructions+=30;goto B77e3e4;
case 0x77e3ea:c.instructions+=29;goto B77e3ea;
case 0x77e3ec:c.instructions+=28;goto B77e3ec;
case 0x77e3f2:c.instructions+=27;goto B77e3f2;
case 0x77e3f8:c.instructions+=26;goto B77e3f8;
case 0x77e3fa:c.instructions+=25;goto B77e3fa;
case 0x77e400:c.instructions+=24;goto B77e400;
case 0x77e406:c.instructions+=23;goto B77e406;
case 0x77e408:c.instructions+=22;goto B77e408;
case 0x77e40e:c.instructions+=21;goto B77e40e;
case 0x77e414:c.instructions+=20;goto B77e414;
case 0x77e41a:c.instructions+=19;goto B77e41a;
case 0x77e420:c.instructions+=18;goto B77e420;
case 0x77e422:c.instructions+=17;goto B77e422;
case 0x77e428:c.instructions+=16;goto B77e428;
case 0x77e42a:c.instructions+=15;goto B77e42a;
case 0x77e430:c.instructions+=14;goto B77e430;
case 0x77e436:c.instructions+=13;goto B77e436;
case 0x77e438:c.instructions+=12;goto B77e438;
case 0x77e43a:c.instructions+=11;goto B77e43a;
case 0x77e440:c.instructions+=10;goto B77e440;
case 0x77e442:c.instructions+=9;goto B77e442;
case 0x77e448:c.instructions+=8;goto B77e448;
case 0x77e44a:c.instructions+=7;goto B77e44a;
case 0x77e450:c.instructions+=6;goto B77e450;
case 0x77e452:c.instructions+=5;goto B77e452;
case 0x77e458:c.instructions+=4;goto B77e458;
case 0x77e45a:c.instructions+=3;goto B77e45a;
case 0x77e460:c.instructions+=2;goto B77e460;
case 0x77e466:c.instructions+=1;goto B77e466;
case 0x77e470:goto L77e470;
case 0x77e475:c.instructions+=1;goto B77e475;
case 0x77e47a:goto L77e47a;
case 0x77e47b:c.instructions+=1;goto B77e47b;
case 0x77e480:goto L77e480;
case 0x77e485:c.instructions+=1;goto B77e485;
case 0x77e48a:goto L77e48a;
case 0x77e48f:c.instructions+=1;goto B77e48f;
case 0x77e494:goto L77e494;
case 0x77e495:c.instructions+=1;goto B77e495;
case 0x77e4a0:goto L77e4a0;
case 0x77e4a5:c.instructions+=1;goto B77e4a5;
case 0x77e4aa:goto L77e4aa;
case 0x77e4af:c.instructions+=1;goto B77e4af;
case 0x77e4b4:goto L77e4b4;
case 0x77e4b5:c.instructions+=1;goto B77e4b5;
case 0x77e4c0:goto L77e4c0;
case 0x77e4c5:c.instructions+=1;goto B77e4c5;
case 0x77e4ca:goto L77e4ca;
case 0x77e4cf:c.instructions+=1;goto B77e4cf;
case 0x77e4d4:goto L77e4d4;
case 0x77e4d5:c.instructions+=1;goto B77e4d5;
case 0x77e4e0:goto L77e4e0;
case 0x77e4e5:c.instructions+=1;goto B77e4e5;
case 0x77e4ea:goto L77e4ea;
case 0x77e4ed:c.instructions+=2;goto B77e4ed;
case 0x77e4f2:c.instructions+=1;goto B77e4f2;
case 0x77e500:goto L77e500;
case 0x77e505:c.instructions+=1;goto B77e505;
case 0x77e50a:goto L77e50a;
case 0x77e50d:c.instructions+=2;goto B77e50d;
case 0x77e512:c.instructions+=1;goto B77e512;
case 0x77e520:goto L77e520;
case 0x77e525:c.instructions+=5;goto B77e525;
case 0x77e52a:c.instructions+=4;goto B77e52a;
case 0x77e52c:c.instructions+=3;goto B77e52c;
case 0x77e531:c.instructions+=2;goto B77e531;
case 0x77e536:c.instructions+=1;goto B77e536;
case 0x77e53b:goto L77e53b;
case 0x77e540:c.instructions+=1;goto B77e540;
case 0x77e545:goto L77e545;
case 0x77e546:c.instructions+=1;goto B77e546;
case 0x77e550:goto L77e550;
case 0x77e555:c.instructions+=1;goto B77e555;
case 0x77e560:goto L77e560;
case 0x77e565:c.instructions+=1;goto B77e565;
case 0x77e570:goto L77e570;
case 0x77e575:c.instructions+=1;goto B77e575;
case 0x77e57a:goto L77e57a;
case 0x77e57b:c.instructions+=1;goto B77e57b;
case 0x77e580:goto L77e580;
case 0x77e585:c.instructions+=1;goto B77e585;
case 0x77e58a:goto L77e58a;
case 0x77e58f:c.instructions+=1;goto B77e58f;
case 0x77e594:goto L77e594;
case 0x77e595:c.instructions+=1;goto B77e595;
case 0x77e5a0:goto L77e5a0;
case 0x77e5a5:c.instructions+=1;goto B77e5a5;
case 0x77e5aa:goto L77e5aa;
case 0x77e5af:c.instructions+=1;goto B77e5af;
case 0x77e5b4:goto L77e5b4;
case 0x77e5b5:c.instructions+=1;goto B77e5b5;
case 0x77e5c0:goto L77e5c0;
case 0x77e5c6:c.instructions+=3;goto B77e5c6;
case 0x77e5cc:c.instructions+=2;goto B77e5cc;
case 0x77e5d2:c.instructions+=1;goto B77e5d2;
case 0x77e5e0:goto L77e5e0;
case 0x77e5e5:c.instructions+=1;goto B77e5e5;
case 0x77e5ea:goto L77e5ea;
case 0x77e5ef:c.instructions+=1;goto B77e5ef;
case 0x77e5f4:goto L77e5f4;
case 0x77e5f5:c.instructions+=1;goto B77e5f5;
case 0x77e600:goto L77e600;
case 0x77e605:c.instructions+=1;goto B77e605;
case 0x77e60a:goto L77e60a;
case 0x77e60f:c.instructions+=1;goto B77e60f;
case 0x77e614:goto L77e614;
case 0x77e615:c.instructions+=1;goto B77e615;
case 0x77e620:goto L77e620;
case 0x77e625:c.instructions+=1;goto B77e625;
case 0x77e62a:goto L77e62a;
case 0x77e62f:c.instructions+=1;goto B77e62f;
case 0x77e634:goto L77e634;
case 0x77e635:c.instructions+=1;goto B77e635;
case 0x77e640:goto L77e640;
case 0x77e645:c.instructions+=1;goto B77e645;
case 0x77e64a:goto L77e64a;
case 0x77e64f:c.instructions+=1;goto B77e64f;
case 0x77e654:goto L77e654;
case 0x77e655:c.instructions+=1;goto B77e655;
case 0x77e660:goto L77e660;
case 0x77e665:c.instructions+=1;goto B77e665;
case 0x77e66a:goto L77e66a;
case 0x77e66f:c.instructions+=1;goto B77e66f;
case 0x77e674:goto L77e674;
case 0x77e675:c.instructions+=1;goto B77e675;
case 0x77e680:goto L77e680;
case 0x77e685:c.instructions+=1;goto B77e685;
case 0x77e68a:goto L77e68a;
case 0x77e68f:c.instructions+=1;goto B77e68f;
case 0x77e694:goto L77e694;
case 0x77e695:c.instructions+=1;goto B77e695;
case 0x77e6a0:goto L77e6a0;
case 0x77e6a5:c.instructions+=1;goto B77e6a5;
case 0x77e6aa:goto L77e6aa;
case 0x77e6af:c.instructions+=1;goto B77e6af;
case 0x77e6b4:goto L77e6b4;
case 0x77e6b5:c.instructions+=1;goto B77e6b5;
case 0x77e6c0:goto L77e6c0;
case 0x77e6c5:c.instructions+=4;goto B77e6c5;
case 0x77e6ca:c.instructions+=3;goto B77e6ca;
case 0x77e6cf:c.instructions+=2;goto B77e6cf;
case 0x77e6d4:c.instructions+=1;goto B77e6d4;
case 0x77e6d9:goto L77e6d9;
case 0x77e6e0:goto L77e6e0;
case 0x77e6e5:c.instructions+=4;goto B77e6e5;
case 0x77e6ea:c.instructions+=3;goto B77e6ea;
case 0x77e6ef:c.instructions+=2;goto B77e6ef;
case 0x77e6f4:c.instructions+=1;goto B77e6f4;
case 0x77e6f9:goto L77e6f9;
case 0x77e700:goto L77e700;
case 0x77e705:c.instructions+=1;goto B77e705;
case 0x77e70a:goto L77e70a;
case 0x77e70f:c.instructions+=1;goto B77e70f;
case 0x77e714:goto L77e714;
case 0x77e715:c.instructions+=1;goto B77e715;
case 0x77e720:goto L77e720;
case 0x77e725:c.instructions+=4;goto B77e725;
case 0x77e72a:c.instructions+=3;goto B77e72a;
case 0x77e72f:c.instructions+=2;goto B77e72f;
case 0x77e734:c.instructions+=1;goto B77e734;
case 0x77e739:goto L77e739;
case 0x77e740:goto L77e740;
case 0x77e745:c.instructions+=4;goto B77e745;
case 0x77e74a:c.instructions+=3;goto B77e74a;
case 0x77e74f:c.instructions+=2;goto B77e74f;
case 0x77e754:c.instructions+=1;goto B77e754;
case 0x77e759:goto L77e759;
case 0x77e760:goto L77e760;
case 0x77e765:c.instructions+=1;goto B77e765;
case 0x77e76a:goto L77e76a;
case 0x77e76f:c.instructions+=1;goto B77e76f;
case 0x77e774:goto L77e774;
case 0x77e775:c.instructions+=1;goto B77e775;
case 0x77e780:goto L77e780;
case 0x77e785:c.instructions+=1;goto B77e785;
case 0x77e78a:goto L77e78a;
case 0x77e78f:c.instructions+=1;goto B77e78f;
case 0x77e794:goto L77e794;
case 0x77e795:c.instructions+=1;goto B77e795;
case 0x77e7a0:goto L77e7a0;
case 0x77e7a5:c.instructions+=4;goto B77e7a5;
case 0x77e7aa:c.instructions+=3;goto B77e7aa;
case 0x77e7af:c.instructions+=2;goto B77e7af;
case 0x77e7b4:c.instructions+=1;goto B77e7b4;
case 0x77e7b9:goto L77e7b9;
case 0x77e7c0:goto L77e7c0;
case 0x77e7c5:c.instructions+=1;goto B77e7c5;
case 0x77e7d0:goto L77e7d0;
case 0x77e7d5:c.instructions+=4;goto B77e7d5;
case 0x77e7da:c.instructions+=3;goto B77e7da;
case 0x77e7df:c.instructions+=2;goto B77e7df;
case 0x77e7e4:c.instructions+=1;goto B77e7e4;
case 0x77e7e9:goto L77e7e9;
case 0x77e7f0:goto L77e7f0;
case 0x77e7f5:c.instructions+=4;goto B77e7f5;
case 0x77e7fa:c.instructions+=3;goto B77e7fa;
case 0x77e7ff:c.instructions+=2;goto B77e7ff;
case 0x77e804:c.instructions+=1;goto B77e804;
case 0x77e809:goto L77e809;
case 0x77e810:goto L77e810;
case 0x77e815:c.instructions+=4;goto B77e815;
case 0x77e81a:c.instructions+=3;goto B77e81a;
case 0x77e81f:c.instructions+=2;goto B77e81f;
case 0x77e824:c.instructions+=1;goto B77e824;
case 0x77e829:goto L77e829;
case 0x77e830:goto L77e830;
case 0x77e835:c.instructions+=4;goto B77e835;
case 0x77e83a:c.instructions+=3;goto B77e83a;
case 0x77e83f:c.instructions+=2;goto B77e83f;
case 0x77e844:c.instructions+=1;goto B77e844;
case 0x77e849:goto L77e849;
case 0x77e850:goto L77e850;
case 0x77e855:c.instructions+=1;goto B77e855;
case 0x77e85a:goto L77e85a;
case 0x77e85f:c.instructions+=1;goto B77e85f;
case 0x77e864:goto L77e864;
case 0x77e865:c.instructions+=1;goto B77e865;
case 0x77e870:goto L77e870;
case 0x77e875:c.instructions+=1;goto B77e875;
case 0x77e87a:goto L77e87a;
case 0x77e87f:c.instructions+=1;goto B77e87f;
case 0x77e884:goto L77e884;
case 0x77e885:c.instructions+=1;goto B77e885;
case 0x77e890:goto L77e890;
case 0x77e895:c.instructions+=4;goto B77e895;
case 0x77e89a:c.instructions+=3;goto B77e89a;
case 0x77e89f:c.instructions+=2;goto B77e89f;
case 0x77e8a4:c.instructions+=1;goto B77e8a4;
case 0x77e8a9:goto L77e8a9;
case 0x77e8b0:goto L77e8b0;
case 0x77e8b5:c.instructions+=4;goto B77e8b5;
case 0x77e8ba:c.instructions+=3;goto B77e8ba;
case 0x77e8bf:c.instructions+=2;goto B77e8bf;
case 0x77e8c4:c.instructions+=1;goto B77e8c4;
case 0x77e8c9:goto L77e8c9;
case 0x77e8d0:goto L77e8d0;
case 0x77e8d5:c.instructions+=4;goto B77e8d5;
case 0x77e8da:c.instructions+=3;goto B77e8da;
case 0x77e8df:c.instructions+=2;goto B77e8df;
case 0x77e8e4:c.instructions+=1;goto B77e8e4;
case 0x77e8e9:goto L77e8e9;
case 0x77e8f0:goto L77e8f0;
case 0x77e8f5:c.instructions+=1;goto B77e8f5;
case 0x77e8fa:goto L77e8fa;
case 0x77e8ff:c.instructions+=1;goto B77e8ff;
case 0x77e904:goto L77e904;
case 0x77e905:c.instructions+=1;goto B77e905;
case 0x77e910:goto L77e910;
case 0x77e915:c.instructions+=5;goto B77e915;
case 0x77e91a:c.instructions+=4;goto B77e91a;
case 0x77e91c:c.instructions+=3;goto B77e91c;
case 0x77e91e:c.instructions+=2;goto B77e91e;
case 0x77e923:c.instructions+=1;goto B77e923;
case 0x77e928:goto L77e928;
case 0x77e92d:c.instructions+=1;goto B77e92d;
case 0x77e932:goto L77e932;
case 0x77e933:c.instructions+=1;goto B77e933;
case 0x77e940:goto L77e940;
case 0x77e945:c.instructions+=2;goto B77e945;
case 0x77e94a:c.instructions+=1;goto B77e94a;
case 0x77e94f:goto L77e94f;
case 0x77e954:c.instructions+=2;goto B77e954;
case 0x77e959:c.instructions+=1;goto B77e959;
case 0x77e95e:goto L77e95e;
case 0x77e963:c.instructions+=1;goto B77e963;
case 0x77e968:goto L77e968;
case 0x77e969:c.instructions+=1;goto B77e969;
case 0x77e970:goto L77e970;
case 0x77e975:c.instructions+=2;goto B77e975;
case 0x77e97a:c.instructions+=1;goto B77e97a;
case 0x77e97f:goto L77e97f;
case 0x77e984:c.instructions+=2;goto B77e984;
case 0x77e989:c.instructions+=1;goto B77e989;
case 0x77e98e:goto L77e98e;
case 0x77e993:c.instructions+=1;goto B77e993;
case 0x77e998:goto L77e998;
case 0x77e999:c.instructions+=1;goto B77e999;
case 0x77e9a0:goto L77e9a0;
case 0x77e9a5:c.instructions+=2;goto B77e9a5;
case 0x77e9aa:c.instructions+=1;goto B77e9aa;
case 0x77e9af:goto L77e9af;
case 0x77e9b4:c.instructions+=2;goto B77e9b4;
case 0x77e9b9:c.instructions+=1;goto B77e9b9;
case 0x77e9be:goto L77e9be;
case 0x77e9c3:c.instructions+=1;goto B77e9c3;
case 0x77e9c8:goto L77e9c8;
case 0x77e9c9:c.instructions+=1;goto B77e9c9;
case 0x77e9d0:goto L77e9d0;
case 0x77e9d5:c.instructions+=1;goto B77e9d5;
case 0x77e9da:goto L77e9da;
case 0x77e9df:c.instructions+=1;goto B77e9df;
case 0x77e9e4:goto L77e9e4;
case 0x77e9e5:c.instructions+=1;goto B77e9e5;
case 0x77e9f0:goto L77e9f0;
case 0x77e9f5:c.instructions+=1;goto B77e9f5;
case 0x77e9fa:goto L77e9fa;
case 0x77e9ff:c.instructions+=1;goto B77e9ff;
case 0x77ea04:goto L77ea04;
case 0x77ea05:c.instructions+=1;goto B77ea05;
case 0x77ea10:goto L77ea10;
case 0x77ea15:c.instructions+=1;goto B77ea15;
case 0x77ea1a:goto L77ea1a;
case 0x77ea1f:c.instructions+=1;goto B77ea1f;
case 0x77ea24:goto L77ea24;
case 0x77ea25:c.instructions+=1;goto B77ea25;
case 0x77ea30:goto L77ea30;
case 0x77ea35:c.instructions+=1;goto B77ea35;
case 0x77ea3a:goto L77ea3a;
case 0x77ea3f:c.instructions+=1;goto B77ea3f;
case 0x77ea44:goto L77ea44;
case 0x77ea45:c.instructions+=1;goto B77ea45;
case 0x77ea50:goto L77ea50;
case 0x77ea55:c.instructions+=1;goto B77ea55;
case 0x77ea60:goto L77ea60;
case 0x77ea65:c.instructions+=1;goto B77ea65;
case 0x77ea6a:goto L77ea6a;
case 0x77ea6f:c.instructions+=1;goto B77ea6f;
case 0x77ea74:goto L77ea74;
case 0x77ea75:c.instructions+=1;goto B77ea75;
case 0x77ea80:goto L77ea80;
case 0x77ea85:c.instructions+=1;goto B77ea85;
case 0x77ea8a:goto L77ea8a;
case 0x77ea8f:c.instructions+=1;goto B77ea8f;
case 0x77ea94:goto L77ea94;
case 0x77ea95:c.instructions+=1;goto B77ea95;
case 0x77eaa0:goto L77eaa0;
case 0x77eaa5:c.instructions+=1;goto B77eaa5;
case 0x77eaaa:goto L77eaaa;
case 0x77eaaf:c.instructions+=1;goto B77eaaf;
case 0x77eab4:goto L77eab4;
case 0x77eab5:c.instructions+=1;goto B77eab5;
case 0x77eac0:goto L77eac0;
case 0x77eac5:c.instructions+=13;goto B77eac5;
case 0x77eacb:c.instructions+=12;goto B77eacb;
case 0x77eacd:c.instructions+=11;goto B77eacd;
case 0x77eacf:c.instructions+=10;goto B77eacf;
case 0x77ead1:c.instructions+=9;goto B77ead1;
case 0x77ead7:c.instructions+=8;goto B77ead7;
case 0x77eadd:c.instructions+=7;goto B77eadd;
case 0x77eae2:c.instructions+=6;goto B77eae2;
case 0x77eae8:c.instructions+=5;goto B77eae8;
case 0x77eaee:c.instructions+=4;goto B77eaee;
case 0x77eaf4:c.instructions+=3;goto B77eaf4;
case 0x77eafa:c.instructions+=2;goto B77eafa;
case 0x77eaff:c.instructions+=1;goto B77eaff;
case 0x77eb00:goto L77eb00;
case 0x77eb06:c.instructions+=3;goto B77eb06;
case 0x77eb0c:c.instructions+=2;goto B77eb0c;
case 0x77eb12:c.instructions+=1;goto B77eb12;
case 0x77eb20:goto L77eb20;
case 0x77eb25:c.instructions+=12;goto B77eb25;
case 0x77eb2b:c.instructions+=11;goto B77eb2b;
case 0x77eb2d:c.instructions+=10;goto B77eb2d;
case 0x77eb33:c.instructions+=9;goto B77eb33;
case 0x77eb39:c.instructions+=8;goto B77eb39;
case 0x77eb3e:c.instructions+=7;goto B77eb3e;
case 0x77eb40:c.instructions+=6;goto B77eb40;
case 0x77eb46:c.instructions+=5;goto B77eb46;
case 0x77eb48:c.instructions+=4;goto B77eb48;
case 0x77eb4d:c.instructions+=3;goto B77eb4d;
case 0x77eb53:c.instructions+=2;goto B77eb53;
case 0x77eb59:c.instructions+=1;goto B77eb59;
case 0x77eb60:goto L77eb60;
case 0x77eb65:c.instructions+=1;goto B77eb65;
case 0x77eb6a:goto L77eb6a;
case 0x77eb6d:c.instructions+=2;goto B77eb6d;
case 0x77eb72:c.instructions+=1;goto B77eb72;
case 0x77eb80:goto L77eb80;
case 0x77eb85:c.instructions+=1;goto B77eb85;
case 0x77eb8a:goto L77eb8a;
case 0x77eb8d:c.instructions+=2;goto B77eb8d;
case 0x77eb92:c.instructions+=1;goto B77eb92;
case 0x77eba0:goto L77eba0;
case 0x77eba5:c.instructions+=1;goto B77eba5;
case 0x77ebaa:goto L77ebaa;
case 0x77ebad:c.instructions+=2;goto B77ebad;
case 0x77ebb2:c.instructions+=1;goto B77ebb2;
case 0x77ebc0:goto L77ebc0;
case 0x77ebc5:c.instructions+=1;goto B77ebc5;
case 0x77ebca:goto L77ebca;
case 0x77ebcd:c.instructions+=2;goto B77ebcd;
case 0x77ebd2:c.instructions+=1;goto B77ebd2;
case 0x77ebe0:goto L77ebe0;
case 0x77ebe5:c.instructions+=1;goto B77ebe5;
case 0x77ebea:goto L77ebea;
case 0x77ebed:c.instructions+=2;goto B77ebed;
case 0x77ebf2:c.instructions+=1;goto B77ebf2;
case 0x77ec00:goto L77ec00;
case 0x77ec05:c.instructions+=1;goto B77ec05;
case 0x77ec0a:goto L77ec0a;
case 0x77ec0d:c.instructions+=2;goto B77ec0d;
case 0x77ec12:c.instructions+=1;goto B77ec12;
case 0x77ec20:goto L77ec20;
case 0x77ec25:c.instructions+=1;goto B77ec25;
case 0x77ec2a:goto L77ec2a;
case 0x77ec2d:c.instructions+=2;goto B77ec2d;
case 0x77ec32:c.instructions+=1;goto B77ec32;
case 0x77ec40:goto L77ec40;
case 0x77ec45:c.instructions+=1;goto B77ec45;
case 0x77ec4a:goto L77ec4a;
case 0x77ec4d:c.instructions+=2;goto B77ec4d;
case 0x77ec52:c.instructions+=1;goto B77ec52;
case 0x77ec60:goto L77ec60;
case 0x77ec65:c.instructions+=1;goto B77ec65;
case 0x77ec6a:goto L77ec6a;
case 0x77ec6d:c.instructions+=2;goto B77ec6d;
case 0x77ec72:c.instructions+=1;goto B77ec72;
case 0x77ec80:goto L77ec80;
case 0x77ec82:c.instructions+=3;goto B77ec82;
case 0x77ec87:c.instructions+=2;goto B77ec87;
case 0x77ec8c:c.instructions+=1;goto B77ec8c;
case 0x77ec91:goto L77ec91;
case 0x77eca0:goto L77eca0;
case 0x77eca2:c.instructions+=3;goto B77eca2;
case 0x77eca7:c.instructions+=2;goto B77eca7;
case 0x77ecac:c.instructions+=1;goto B77ecac;
case 0x77ecb1:goto L77ecb1;
case 0x77ecc0:goto L77ecc0;
case 0x77ecc2:c.instructions+=3;goto B77ecc2;
case 0x77ecc7:c.instructions+=2;goto B77ecc7;
case 0x77eccc:c.instructions+=1;goto B77eccc;
case 0x77ecd1:goto L77ecd1;
case 0x77ece0:goto L77ece0;
case 0x77ece2:c.instructions+=3;goto B77ece2;
case 0x77ece7:c.instructions+=2;goto B77ece7;
case 0x77ecec:c.instructions+=1;goto B77ecec;
case 0x77ecf1:goto L77ecf1;
case 0x77ed00:goto L77ed00;
case 0x77ed02:c.instructions+=3;goto B77ed02;
case 0x77ed07:c.instructions+=2;goto B77ed07;
case 0x77ed0c:c.instructions+=1;goto B77ed0c;
case 0x77ed11:goto L77ed11;
case 0x77ed20:goto L77ed20;
case 0x77ed22:c.instructions+=3;goto B77ed22;
case 0x77ed27:c.instructions+=2;goto B77ed27;
case 0x77ed2c:c.instructions+=1;goto B77ed2c;
case 0x77ed31:goto L77ed31;
case 0x77ed40:goto L77ed40;
case 0x77ed42:c.instructions+=3;goto B77ed42;
case 0x77ed47:c.instructions+=2;goto B77ed47;
case 0x77ed4c:c.instructions+=1;goto B77ed4c;
case 0x77ed51:goto L77ed51;
case 0x77ed60:goto L77ed60;
case 0x77ed62:c.instructions+=3;goto B77ed62;
case 0x77ed67:c.instructions+=2;goto B77ed67;
case 0x77ed6c:c.instructions+=1;goto B77ed6c;
case 0x77ed71:goto L77ed71;
case 0x77ed80:goto L77ed80;
case 0x77ed82:c.instructions+=3;goto B77ed82;
case 0x77ed87:c.instructions+=2;goto B77ed87;
case 0x77ed8c:c.instructions+=1;goto B77ed8c;
case 0x77ed91:goto L77ed91;
case 0x77eda0:goto L77eda0;
case 0x77eda5:c.instructions+=1;goto B77eda5;
case 0x77edb0:goto L77edb0;
case 0x77edb5:c.instructions+=5;goto B77edb5;
case 0x77edba:c.instructions+=4;goto B77edba;
case 0x77edbc:c.instructions+=3;goto B77edbc;
case 0x77edc1:c.instructions+=2;goto B77edc1;
case 0x77edc6:c.instructions+=1;goto B77edc6;
case 0x77edcb:goto L77edcb;
case 0x77edd0:c.instructions+=1;goto B77edd0;
case 0x77edd5:goto L77edd5;
case 0x77edd6:c.instructions+=1;goto B77edd6;
case 0x77ede0:goto L77ede0;
case 0x77ede5:c.instructions+=1;goto B77ede5;
case 0x77edea:goto L77edea;
case 0x77edef:c.instructions+=1;goto B77edef;
case 0x77edf4:goto L77edf4;
case 0x77edf5:c.instructions+=1;goto B77edf5;
case 0x77ee00:goto L77ee00;
case 0x77ee05:c.instructions+=1;goto B77ee05;
case 0x77ee0a:goto L77ee0a;
case 0x77ee0f:c.instructions+=1;goto B77ee0f;
case 0x77ee14:goto L77ee14;
case 0x77ee15:c.instructions+=1;goto B77ee15;
case 0x77ee20:goto L77ee20;
case 0x77ee26:c.instructions+=3;goto B77ee26;
case 0x77ee2c:c.instructions+=2;goto B77ee2c;
case 0x77ee32:c.instructions+=1;goto B77ee32;
case 0x77ee40:goto L77ee40;
case 0x77ee46:c.instructions+=3;goto B77ee46;
case 0x77ee48:c.instructions+=2;goto B77ee48;
case 0x77ee4e:c.instructions+=1;goto B77ee4e;
case 0x77ee50:goto L77ee50;
case 0x77ee56:c.instructions+=3;goto B77ee56;
case 0x77ee5c:c.instructions+=2;goto B77ee5c;
case 0x77ee62:c.instructions+=1;goto B77ee62;
case 0x77ee70:goto L77ee70;
case 0x77ee76:c.instructions+=3;goto B77ee76;
case 0x77ee78:c.instructions+=2;goto B77ee78;
case 0x77ee7e:c.instructions+=1;goto B77ee7e;
case 0x77ee80:goto L77ee80;
case 0x77ee86:c.instructions+=3;goto B77ee86;
case 0x77ee8c:c.instructions+=2;goto B77ee8c;
case 0x77ee92:c.instructions+=1;goto B77ee92;
case 0x77eea0:goto L77eea0;
case 0x77eea5:c.instructions+=1;goto B77eea5;
case 0x77eeaa:goto L77eeaa;
case 0x77eead:c.instructions+=2;goto B77eead;
case 0x77eeb2:c.instructions+=1;goto B77eeb2;
case 0x77eec0:goto L77eec0;
case 0x77eec5:c.instructions+=1;goto B77eec5;
case 0x77eeca:goto L77eeca;
case 0x77eecd:c.instructions+=2;goto B77eecd;
case 0x77eed2:c.instructions+=1;goto B77eed2;
case 0x77eee0:goto L77eee0;
case 0x77eee5:c.instructions+=1;goto B77eee5;
case 0x77eeea:goto L77eeea;
case 0x77eeed:c.instructions+=2;goto B77eeed;
case 0x77eef2:c.instructions+=1;goto B77eef2;
case 0x77ef00:goto L77ef00;
case 0x77ef05:c.instructions+=1;goto B77ef05;
case 0x77ef0a:goto L77ef0a;
case 0x77ef0f:c.instructions+=1;goto B77ef0f;
case 0x77ef14:goto L77ef14;
case 0x77ef15:c.instructions+=1;goto B77ef15;
case 0x77ef20:goto L77ef20;
case 0x77ef25:c.instructions+=1;goto B77ef25;
case 0x77ef2a:goto L77ef2a;
case 0x77ef2f:c.instructions+=2;goto B77ef2f;
case 0x77ef34:c.instructions+=1;goto B77ef34;
case 0x77ef39:goto L77ef39;
case 0x77ef3e:c.instructions+=2;goto B77ef3e;
case 0x77ef43:c.instructions+=1;goto B77ef43;
case 0x77ef48:goto L77ef48;
case 0x77ef4d:c.instructions+=2;goto B77ef4d;
case 0x77ef52:c.instructions+=1;goto B77ef52;
case 0x77ef57:goto L77ef57;
case 0x77ef5c:c.instructions+=2;goto B77ef5c;
case 0x77ef61:c.instructions+=1;goto B77ef61;
case 0x77ef66:goto L77ef66;
case 0x77ef6b:c.instructions+=2;goto B77ef6b;
case 0x77ef70:c.instructions+=1;goto B77ef70;
case 0x77ef75:goto L77ef75;
case 0x77ef7a:c.instructions+=2;goto B77ef7a;
case 0x77ef7f:c.instructions+=1;goto B77ef7f;
case 0x77ef84:goto L77ef84;
case 0x77ef89:c.instructions+=2;goto B77ef89;
case 0x77ef8e:c.instructions+=1;goto B77ef8e;
case 0x77ef93:goto L77ef93;
case 0x77ef98:c.instructions+=2;goto B77ef98;
case 0x77ef9d:c.instructions+=1;goto B77ef9d;
case 0x77efa2:goto L77efa2;
case 0x77efa7:c.instructions+=2;goto B77efa7;
case 0x77efac:c.instructions+=1;goto B77efac;
case 0x77efb1:goto L77efb1;
case 0x77efb6:c.instructions+=2;goto B77efb6;
case 0x77efbb:c.instructions+=1;goto B77efbb;
case 0x77efc0:goto L77efc0;
case 0x77efc5:c.instructions+=2;goto B77efc5;
case 0x77efca:c.instructions+=1;goto B77efca;
case 0x77efcf:goto L77efcf;
case 0x77efd4:c.instructions+=2;goto B77efd4;
case 0x77efd9:c.instructions+=1;goto B77efd9;
case 0x77efde:goto L77efde;
case 0x77efe3:c.instructions+=2;goto B77efe3;
case 0x77efe8:c.instructions+=1;goto B77efe8;
case 0x77efed:goto L77efed;
case 0x77eff2:c.instructions+=2;goto B77eff2;
case 0x77eff7:c.instructions+=1;goto B77eff7;
case 0x77effc:goto L77effc;
default:missing_instruction(c.pc);}
B77e000:L77e000:{c.instructions+=7;NFSU2_TR(0x77e000);
s4(0x86b608,u32(0x3f860a92ull));
}
B77e00a:{NFSU2_TR(0x77e00a);
s4(0x86b60c,u32(0x3f733333ull));
}
B77e014:{NFSU2_TR(0x77e014);
s4(0x86b610,u32(0x3fc6d3f2ull));
}
B77e01e:{NFSU2_TR(0x77e01e);
s4(0x86b614,u32(0x3f933333ull));
}
B77e028:{NFSU2_TR(0x77e028);
s4(0x86b618,u32(0x3fc90fdbull));
}
B77e032:{NFSU2_TR(0x77e032);
s4(0x86b61c,u32(0x3f800000ull));
}
B77e03c:{NFSU2_TR(0x77e03c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e040:L77e040:{c.instructions+=15;NFSU2_TR(0x77e040);
s4(0x86b5b0,u32(0x0ull));
}
B77e04a:{NFSU2_TR(0x77e04a);
s4(0x86b5b4,u32(0x0ull));
}
B77e054:{NFSU2_TR(0x77e054);
s4(0x86b5b8,u32(0x3e860a92ull));
}
B77e05e:{NFSU2_TR(0x77e05e);
s4(0x86b5bc,u32(0x3dcccccdull));
}
B77e068:{NFSU2_TR(0x77e068);
s4(0x86b5c0,u32(0x3f060a92ull));
}
B77e072:{NFSU2_TR(0x77e072);
s4(0x86b5c4,u32(0x3ee66666ull));
}
B77e07c:{NFSU2_TR(0x77e07c);
s4(0x86b5c8,u32(0x3f490fdbull));
}
B77e086:{NFSU2_TR(0x77e086);
s4(0x86b5cc,u32(0x3f59999aull));
}
B77e090:{NFSU2_TR(0x77e090);
s4(0x86b5d0,u32(0x3f860a92ull));
}
B77e09a:{NFSU2_TR(0x77e09a);
s4(0x86b5d4,u32(0x3f733333ull));
}
B77e0a4:{NFSU2_TR(0x77e0a4);
s4(0x86b5d8,u32(0x3fc6d3f2ull));
}
B77e0ae:{NFSU2_TR(0x77e0ae);
s4(0x86b5dc,u32(0x3f933333ull));
}
B77e0b8:{NFSU2_TR(0x77e0b8);
s4(0x86b5e0,u32(0x3fc90fdbull));
}
B77e0c2:{NFSU2_TR(0x77e0c2);
s4(0x86b5e4,u32(0x0ull));
}
B77e0cc:{NFSU2_TR(0x77e0cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e0d0:L77e0d0:{c.instructions+=3;NFSU2_TR(0x77e0d0);
s4(0x86b570,u32(0x86b5e8ull));
}
B77e0da:{NFSU2_TR(0x77e0da);
s4(0x86b574,u32(0x7ull));
}
B77e0e4:{NFSU2_TR(0x77e0e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e0f0:L77e0f0:{c.instructions+=3;NFSU2_TR(0x77e0f0);
s4(0x86b3c8,u32(0x86b5b0ull));
}
B77e0fa:{NFSU2_TR(0x77e0fa);
s4(0x86b3cc,u32(0x7ull));
}
B77e104:{NFSU2_TR(0x77e104);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e110:L77e110:{c.instructions+=2;NFSU2_TR(0x77e110);
w4(R+4,u32(0x86b3d0ull));
}
B77e115:{NFSU2_TR(0x77e115);
TAIL_STATIC(0x5911c0u,591);
}
B77e120:L77e120:{c.instructions+=2;NFSU2_TR(0x77e120);
s4(0x86b510,u32(0x3e64c388ull));
}
B77e12a:{NFSU2_TR(0x77e12a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e130:L77e130:{c.instructions+=6;NFSU2_TR(0x77e130);
__builtin_memmove((R+0),gp(0x86b510),4);
}
B77e135:{NFSU2_TR(0x77e135);
__builtin_memmove(gp(0x7fc95c),(R+0),4);
}
B77e13a:{NFSU2_TR(0x77e13a);
{u32 ea_=u32(u32(8374620u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e140:{NFSU2_TR(0x77e140);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B77e146:{NFSU2_TR(0x77e146);
{u32 ea_=u32(u32(8374624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e14c:{NFSU2_TR(0x77e14c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e150:L77e150:{c.instructions+=2;NFSU2_TR(0x77e150);
w4(R+4,u32(0x86b5a8ull));
}
B77e155:{NFSU2_TR(0x77e155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e15aull));
TAIL_STATIC(0x598750u,598);
}
B77e15a:L77e15a:{c.instructions+=2;NFSU2_TR(0x77e15a);
u8 U[4];
w4(U+0,u32(0x782430ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e15f:{NFSU2_TR(0x77e15f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e164ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e164:L77e164:{c.instructions+=2;NFSU2_TR(0x77e164);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e165:{NFSU2_TR(0x77e165);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e170:L77e170:{c.instructions+=2;NFSU2_TR(0x77e170);
w4(R+4,u32(0x86b4c0ull));
}
B77e175:{NFSU2_TR(0x77e175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e17aull));
TAIL_STATIC(0x598750u,598);
}
B77e17a:L77e17a:{c.instructions+=2;NFSU2_TR(0x77e17a);
u8 U[4];
w4(U+0,u32(0x782420ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e17f:{NFSU2_TR(0x77e17f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e184ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e184:L77e184:{c.instructions+=2;NFSU2_TR(0x77e184);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e185:{NFSU2_TR(0x77e185);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e190:L77e190:{c.instructions+=5;NFSU2_TR(0x77e190);
u8 U[4];
w4(U+0,u32(0x5a8bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e195:{NFSU2_TR(0x77e195);
u8 U[4];
w4(U+0,u32(0x5b0e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e19a:{NFSU2_TR(0x77e19a);
u8 U[4];
w4(U+0,u32(0x34026ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e19f:{NFSU2_TR(0x77e19f);
w4(R+4,u32(0x86b580ull));
}
B77e1a4:{NFSU2_TR(0x77e1a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e1a9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e1a9:L77e1a9:{c.instructions+=1;NFSU2_TR(0x77e1a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e1b0:L77e1b0:{c.instructions+=5;NFSU2_TR(0x77e1b0);
u8 U[4];
w4(U+0,u32(0x5a8bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e1b5:{NFSU2_TR(0x77e1b5);
u8 U[4];
w4(U+0,u32(0x5b0e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e1ba:{NFSU2_TR(0x77e1ba);
u8 U[4];
w4(U+0,u32(0x34027ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e1bf:{NFSU2_TR(0x77e1bf);
w4(R+4,u32(0x86b4acull));
}
B77e1c4:{NFSU2_TR(0x77e1c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e1c9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e1c9:L77e1c9:{c.instructions+=1;NFSU2_TR(0x77e1c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e1d0:L77e1d0:{c.instructions+=4;NFSU2_TR(0x77e1d0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e1d6:{NFSU2_TR(0x77e1d6);
{u32 ea_=u32(u32(8005524u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77e1dc:{NFSU2_TR(0x77e1dc);
{u32 ea_=u32(u32(8858432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e1e2:{NFSU2_TR(0x77e1e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e1f0:L77e1f0:{c.instructions+=6;NFSU2_TR(0x77e1f0);
u8 U[4];
w4(U+0,u32(0x5b8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e1f5:{NFSU2_TR(0x77e1f5);
u8 U[4];
w4(U+0,u32(0x5c1020ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e1fa:{NFSU2_TR(0x77e1fa);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e1fc:{NFSU2_TR(0x77e1fc);
u8 U[4];
w4(U+0,u32(0x370ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e201:{NFSU2_TR(0x77e201);
u8 U[4];
w4(U+0,u32(0x874c40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e206:{NFSU2_TR(0x77e206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e20bull));
TAIL_STATIC(0x75c461u,75c);
}
B77e20b:L77e20b:{c.instructions+=2;NFSU2_TR(0x77e20b);
u8 U[4];
w4(U+0,u32(0x782470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e210:{NFSU2_TR(0x77e210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e215ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e215:L77e215:{c.instructions+=2;NFSU2_TR(0x77e215);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e216:{NFSU2_TR(0x77e216);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e220:L77e220:{c.instructions+=2;NFSU2_TR(0x77e220);
w4(R+4,u32(0x872b4cull));
}
B77e225:{NFSU2_TR(0x77e225);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e22aull));
TAIL_STATIC(0x598750u,598);
}
B77e22a:L77e22a:{c.instructions+=2;NFSU2_TR(0x77e22a);
u8 U[4];
w4(U+0,u32(0x7824a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e22f:{NFSU2_TR(0x77e22f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e234ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e234:L77e234:{c.instructions+=2;NFSU2_TR(0x77e234);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e235:{NFSU2_TR(0x77e235);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e240:L77e240:{c.instructions+=2;NFSU2_TR(0x77e240);
w4(R+4,u32(0x8763b0ull));
}
B77e245:{NFSU2_TR(0x77e245);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e24aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77e24a:L77e24a:{c.instructions+=2;NFSU2_TR(0x77e24a);
u8 U[4];
w4(U+0,u32(0x7824b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e24f:{NFSU2_TR(0x77e24f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e254ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e254:L77e254:{c.instructions+=2;NFSU2_TR(0x77e254);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e255:{NFSU2_TR(0x77e255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e260:L77e260:{c.instructions+=2;NFSU2_TR(0x77e260);
w4(R+4,u32(0x872c00ull));
}
B77e265:{NFSU2_TR(0x77e265);
TAIL_STATIC(0x44f5a0u,44f);
}
B77e270:L77e270:{c.instructions+=2;NFSU2_TR(0x77e270);
w4(R+4,u32(0x8760e0ull));
}
B77e275:{NFSU2_TR(0x77e275);
TAIL_STATIC(0x44f5a0u,44f);
}
B77e280:L77e280:{c.instructions+=2;NFSU2_TR(0x77e280);
w4(R+4,u32(0x872f20ull));
}
B77e285:{NFSU2_TR(0x77e285);
TAIL_STATIC(0x44f5a0u,44f);
}
B77e290:L77e290:{c.instructions+=2;NFSU2_TR(0x77e290);
w4(R+4,u32(0x8718c0ull));
}
B77e295:{NFSU2_TR(0x77e295);
TAIL_STATIC(0x44f5a0u,44f);
}
B77e2a0:L77e2a0:{c.instructions+=2;NFSU2_TR(0x77e2a0);
w4(R+4,u32(0x870a20ull));
}
B77e2a5:{NFSU2_TR(0x77e2a5);
TAIL_STATIC(0x44f5a0u,44f);
}
B77e2b0:L77e2b0:{c.instructions+=5;NFSU2_TR(0x77e2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e2b1:{NFSU2_TR(0x77e2b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e2b2:{NFSU2_TR(0x77e2b2);
w4(R+24,u32(0x871be0ull));
}
B77e2b7:{NFSU2_TR(0x77e2b7);
w4(R+28,u32(0x6ull));
}
B77e2bc:{NFSU2_TR(0x77e2bc);
__builtin_memmove((R+16),(R+16),4);
}
B77e2c0:L77e2c0:{c.instructions+=2;NFSU2_TR(0x77e2c0);
__builtin_memmove((R+4),(R+24),4);
}
B77e2c2:{NFSU2_TR(0x77e2c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e2c7ull));
TAIL_STATIC(0x44f5a0u,44f);
}
B77e2c7:L77e2c7:{c.instructions+=3;NFSU2_TR(0x77e2c7);
w1(R+512,carry<u32>(r4(R+24),u32(0x290ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x290ull))));
}
B77e2cd:{NFSU2_TR(0x77e2cd);
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
B77e2ce:{NFSU2_TR(0x77e2ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x77e2c0u);}goto L77e2c0;}}
}
B77e2d0:L77e2d0:{c.instructions+=3;NFSU2_TR(0x77e2d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B77e2d1:{NFSU2_TR(0x77e2d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B77e2d2:{NFSU2_TR(0x77e2d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e2e0:L77e2e0:{c.instructions+=2;NFSU2_TR(0x77e2e0);
s2(0x871b90,u16(0x4000ull));
}
B77e2e9:{NFSU2_TR(0x77e2e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e2f0:L77e2f0:{c.instructions+=82;NFSU2_TR(0x77e2f0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e2f6:{NFSU2_TR(0x77e2f6);
{u32 ea_=u32(u32(8005576u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77e2fc:{NFSU2_TR(0x77e2fc);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e302:{NFSU2_TR(0x77e302);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e304:{NFSU2_TR(0x77e304);
{u32 ea_=u32(u32(8873280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e30a:{NFSU2_TR(0x77e30a);
{u32 ea_=u32(u32(8004480u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e310:{NFSU2_TR(0x77e310);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e312:{NFSU2_TR(0x77e312);
{u32 ea_=u32(u32(8873284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e318:{NFSU2_TR(0x77e318);
{u32 ea_=u32(u32(7897628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e31e:{NFSU2_TR(0x77e31e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e320:{NFSU2_TR(0x77e320);
{u32 ea_=u32(u32(8873288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e326:{NFSU2_TR(0x77e326);
{u32 ea_=u32(u32(7897596u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e32c:{NFSU2_TR(0x77e32c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e32e:{NFSU2_TR(0x77e32e);
{u32 ea_=u32(u32(8873292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e334:{NFSU2_TR(0x77e334);
{u32 ea_=u32(u32(8013296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e33a:{NFSU2_TR(0x77e33a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e33c:{NFSU2_TR(0x77e33c);
{u32 ea_=u32(u32(8873296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e342:{NFSU2_TR(0x77e342);
{u32 ea_=u32(u32(7895796u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e348:{NFSU2_TR(0x77e348);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e34a:{NFSU2_TR(0x77e34a);
{u32 ea_=u32(u32(8873300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e350:{NFSU2_TR(0x77e350);
{u32 ea_=u32(u32(7980676u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e356:{NFSU2_TR(0x77e356);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e358:{NFSU2_TR(0x77e358);
{u32 ea_=u32(u32(8873304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e35e:{NFSU2_TR(0x77e35e);
{u32 ea_=u32(u32(8013292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e364:{NFSU2_TR(0x77e364);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e366:{NFSU2_TR(0x77e366);
{u32 ea_=u32(u32(8873308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e36c:{NFSU2_TR(0x77e36c);
{u32 ea_=u32(u32(7928284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e372:{NFSU2_TR(0x77e372);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e374:{NFSU2_TR(0x77e374);
{u32 ea_=u32(u32(8873312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e37a:{NFSU2_TR(0x77e37a);
{u32 ea_=u32(u32(8013288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e380:{NFSU2_TR(0x77e380);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e382:{NFSU2_TR(0x77e382);
{u32 ea_=u32(u32(8873316u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e388:{NFSU2_TR(0x77e388);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e38e:{NFSU2_TR(0x77e38e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e390:{NFSU2_TR(0x77e390);
{u32 ea_=u32(u32(8873320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e396:{NFSU2_TR(0x77e396);
{u32 ea_=u32(u32(8013284u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e39c:{NFSU2_TR(0x77e39c);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e39e:{NFSU2_TR(0x77e39e);
{u32 ea_=u32(u32(8873324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e3a4:{NFSU2_TR(0x77e3a4);
{u32 ea_=u32(u32(7897592u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e3aa:{NFSU2_TR(0x77e3aa);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e3ac:{NFSU2_TR(0x77e3ac);
{u32 ea_=u32(u32(8873328u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e3b2:{NFSU2_TR(0x77e3b2);
{u32 ea_=u32(u32(7881952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e3b8:{NFSU2_TR(0x77e3b8);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e3ba:{NFSU2_TR(0x77e3ba);
{u32 ea_=u32(u32(8873332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e3c0:{NFSU2_TR(0x77e3c0);
{u32 ea_=u32(u32(7897584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e3c6:{NFSU2_TR(0x77e3c6);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e3c8:{NFSU2_TR(0x77e3c8);
{u32 ea_=u32(u32(8873336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e3ce:{NFSU2_TR(0x77e3ce);
{u32 ea_=u32(u32(7909400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e3d4:{NFSU2_TR(0x77e3d4);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e3d6:{NFSU2_TR(0x77e3d6);
{u32 ea_=u32(u32(8873340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e3dc:{NFSU2_TR(0x77e3dc);
{u32 ea_=u32(u32(7881704u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e3e2:{NFSU2_TR(0x77e3e2);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e3e4:{NFSU2_TR(0x77e3e4);
{u32 ea_=u32(u32(8873344u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77e3ea:{NFSU2_TR(0x77e3ea);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B77e3ec:{NFSU2_TR(0x77e3ec);
{u32 ea_=u32(u32(7887312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77e3f2:{NFSU2_TR(0x77e3f2);
{u32 ea_=u32(u32(8873348u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e3f8:{NFSU2_TR(0x77e3f8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B77e3fa:{NFSU2_TR(0x77e3fa);
{u32 ea_=u32(u32(7897632u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77e400:{NFSU2_TR(0x77e400);
{u32 ea_=u32(u32(8873352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e406:{NFSU2_TR(0x77e406);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B77e408:{NFSU2_TR(0x77e408);
{u32 ea_=u32(u32(7897588u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77e40e:{NFSU2_TR(0x77e40e);
{u32 ea_=u32(u32(8873356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e414:{NFSU2_TR(0x77e414);
{u32 ea_=u32(u32(8873360u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e41a:{NFSU2_TR(0x77e41a);
{u32 ea_=u32(u32(7881976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e420:{NFSU2_TR(0x77e420);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B77e422:{NFSU2_TR(0x77e422);
{u32 ea_=u32(u32(8873364u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77e428:{NFSU2_TR(0x77e428);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B77e42a:{NFSU2_TR(0x77e42a);
{u32 ea_=u32(u32(7895772u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77e430:{NFSU2_TR(0x77e430);
{u32 ea_=u32(u32(8873368u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77e436:{NFSU2_TR(0x77e436);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B77e438:{NFSU2_TR(0x77e438);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77e43a:{NFSU2_TR(0x77e43a);
{u32 ea_=u32(u32(8873372u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77e440:{NFSU2_TR(0x77e440);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B77e442:{NFSU2_TR(0x77e442);
{u32 ea_=u32(u32(8873376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e448:{NFSU2_TR(0x77e448);
__asm__ volatile(".byte 0xd9,0xcb":::"memory");
}
B77e44a:{NFSU2_TR(0x77e44a);
{u32 ea_=u32(u32(8873380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e450:{NFSU2_TR(0x77e450);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B77e452:{NFSU2_TR(0x77e452);
{u32 ea_=u32(u32(8873384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e458:{NFSU2_TR(0x77e458);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B77e45a:{NFSU2_TR(0x77e45a);
{u32 ea_=u32(u32(8873388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e460:{NFSU2_TR(0x77e460);
{u32 ea_=u32(u32(8873392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e466:{NFSU2_TR(0x77e466);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e470:L77e470:{c.instructions+=2;NFSU2_TR(0x77e470);
u8 U[4];
w4(U+0,u32(0x782440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e475:{NFSU2_TR(0x77e475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e47aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e47a:L77e47a:{c.instructions+=2;NFSU2_TR(0x77e47a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e47b:{NFSU2_TR(0x77e47b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e480:L77e480:{c.instructions+=2;NFSU2_TR(0x77e480);
w4(R+4,u32(0x872ed0ull));
}
B77e485:{NFSU2_TR(0x77e485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e48aull));
TAIL_STATIC(0x598750u,598);
}
B77e48a:L77e48a:{c.instructions+=2;NFSU2_TR(0x77e48a);
u8 U[4];
w4(U+0,u32(0x7824c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e48f:{NFSU2_TR(0x77e48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e494ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e494:L77e494:{c.instructions+=2;NFSU2_TR(0x77e494);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e495:{NFSU2_TR(0x77e495);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e4a0:L77e4a0:{c.instructions+=2;NFSU2_TR(0x77e4a0);
w4(R+4,u32(0x872b44ull));
}
B77e4a5:{NFSU2_TR(0x77e4a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e4aaull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77e4aa:L77e4aa:{c.instructions+=2;NFSU2_TR(0x77e4aa);
u8 U[4];
w4(U+0,u32(0x7824d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e4af:{NFSU2_TR(0x77e4af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e4b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e4b4:L77e4b4:{c.instructions+=2;NFSU2_TR(0x77e4b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e4b5:{NFSU2_TR(0x77e4b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e4c0:L77e4c0:{c.instructions+=2;NFSU2_TR(0x77e4c0);
w4(R+4,u32(0x870d28ull));
}
B77e4c5:{NFSU2_TR(0x77e4c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e4caull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77e4ca:L77e4ca:{c.instructions+=2;NFSU2_TR(0x77e4ca);
u8 U[4];
w4(U+0,u32(0x7824e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e4cf:{NFSU2_TR(0x77e4cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e4d4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e4d4:L77e4d4:{c.instructions+=2;NFSU2_TR(0x77e4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e4d5:{NFSU2_TR(0x77e4d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e4e0:L77e4e0:{c.instructions+=2;NFSU2_TR(0x77e4e0);
u8 U[4];
w4(U+0,u32(0x7a45f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e4e5:{NFSU2_TR(0x77e4e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e4eaull));
TAIL_STATIC(0x43db50u,43d);
}
B77e4ea:L77e4ea:{c.instructions+=3;NFSU2_TR(0x77e4ea);
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
B77e4ed:{NFSU2_TR(0x77e4ed);
__builtin_memmove(gp(0x870a18),(R+0),4);
}
B77e4f2:{NFSU2_TR(0x77e4f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e500:L77e500:{c.instructions+=2;NFSU2_TR(0x77e500);
u8 U[4];
w4(U+0,u32(0x7a4604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e505:{NFSU2_TR(0x77e505);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e50aull));
TAIL_STATIC(0x43db50u,43d);
}
B77e50a:L77e50a:{c.instructions+=3;NFSU2_TR(0x77e50a);
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
B77e50d:{NFSU2_TR(0x77e50d);
__builtin_memmove(gp(0x8764c0),(R+0),4);
}
B77e512:{NFSU2_TR(0x77e512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e520:L77e520:{c.instructions+=6;NFSU2_TR(0x77e520);
u8 U[4];
w4(U+0,u32(0x5cf410ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e525:{NFSU2_TR(0x77e525);
u8 U[4];
w4(U+0,u32(0x5cf3f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e52a:{NFSU2_TR(0x77e52a);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e52c:{NFSU2_TR(0x77e52c);
u8 U[4];
w4(U+0,u32(0xb8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e531:{NFSU2_TR(0x77e531);
u8 U[4];
w4(U+0,u32(0x870d30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e536:{NFSU2_TR(0x77e536);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e53bull));
TAIL_STATIC(0x75c461u,75c);
}
B77e53b:L77e53b:{c.instructions+=2;NFSU2_TR(0x77e53b);
u8 U[4];
w4(U+0,u32(0x7824f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e540:{NFSU2_TR(0x77e540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e545ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e545:L77e545:{c.instructions+=2;NFSU2_TR(0x77e545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e546:{NFSU2_TR(0x77e546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e550:L77e550:{c.instructions+=2;NFSU2_TR(0x77e550);
w4(R+4,u32(0x870cb0ull));
}
B77e555:{NFSU2_TR(0x77e555);
TAIL_STATIC(0x5b7600u,5b7);
}
B77e560:L77e560:{c.instructions+=2;NFSU2_TR(0x77e560);
w4(R+4,u32(0x8764c8ull));
}
B77e565:{NFSU2_TR(0x77e565);
TAIL_STATIC(0x5b7600u,5b7);
}
B77e570:L77e570:{c.instructions+=2;NFSU2_TR(0x77e570);
u8 U[4];
w4(U+0,u32(0x782450ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e575:{NFSU2_TR(0x77e575);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e57aull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e57a:L77e57a:{c.instructions+=2;NFSU2_TR(0x77e57a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e57b:{NFSU2_TR(0x77e57b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e580:L77e580:{c.instructions+=2;NFSU2_TR(0x77e580);
w4(R+4,u32(0x8763d0ull));
}
B77e585:{NFSU2_TR(0x77e585);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e58aull));
TAIL_STATIC(0x5c8600u,5c8);
}
B77e58a:L77e58a:{c.instructions+=2;NFSU2_TR(0x77e58a);
u8 U[4];
w4(U+0,u32(0x782460ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e58f:{NFSU2_TR(0x77e58f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e594ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e594:L77e594:{c.instructions+=2;NFSU2_TR(0x77e594);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e595:{NFSU2_TR(0x77e595);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e5a0:L77e5a0:{c.instructions+=2;NFSU2_TR(0x77e5a0);
w4(R+4,u32(0x871b94ull));
}
B77e5a5:{NFSU2_TR(0x77e5a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e5aaull));
TAIL_STATIC(0x48b790u,48b);
}
B77e5aa:L77e5aa:{c.instructions+=2;NFSU2_TR(0x77e5aa);
u8 U[4];
w4(U+0,u32(0x782490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e5af:{NFSU2_TR(0x77e5af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e5b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e5b4:L77e5b4:{c.instructions+=2;NFSU2_TR(0x77e5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e5b5:{NFSU2_TR(0x77e5b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e5c0:L77e5c0:{c.instructions+=4;NFSU2_TR(0x77e5c0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77e5c6:{NFSU2_TR(0x77e5c6);
{u32 ea_=u32(u32(8013344u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77e5cc:{NFSU2_TR(0x77e5cc);
{u32 ea_=u32(u32(8972912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77e5d2:{NFSU2_TR(0x77e5d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e5e0:L77e5e0:{c.instructions+=2;NFSU2_TR(0x77e5e0);
w4(R+4,u32(0x88ea68ull));
}
B77e5e5:{NFSU2_TR(0x77e5e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e5eaull));
TAIL_STATIC(0x598750u,598);
}
B77e5ea:L77e5ea:{c.instructions+=2;NFSU2_TR(0x77e5ea);
u8 U[4];
w4(U+0,u32(0x782580ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e5ef:{NFSU2_TR(0x77e5ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e5f4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e5f4:L77e5f4:{c.instructions+=2;NFSU2_TR(0x77e5f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e5f5:{NFSU2_TR(0x77e5f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e600:L77e600:{c.instructions+=2;NFSU2_TR(0x77e600);
w4(R+4,u32(0x88ff98ull));
}
B77e605:{NFSU2_TR(0x77e605);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e60aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77e60a:L77e60a:{c.instructions+=2;NFSU2_TR(0x77e60a);
u8 U[4];
w4(U+0,u32(0x782600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e60f:{NFSU2_TR(0x77e60f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e614ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e614:L77e614:{c.instructions+=2;NFSU2_TR(0x77e614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e615:{NFSU2_TR(0x77e615);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e620:L77e620:{c.instructions+=2;NFSU2_TR(0x77e620);
w4(R+4,u32(0x88f270ull));
}
B77e625:{NFSU2_TR(0x77e625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e62aull));
TAIL_STATIC(0x598750u,598);
}
B77e62a:L77e62a:{c.instructions+=2;NFSU2_TR(0x77e62a);
u8 U[4];
w4(U+0,u32(0x782610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e62f:{NFSU2_TR(0x77e62f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e634ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e634:L77e634:{c.instructions+=2;NFSU2_TR(0x77e634);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e635:{NFSU2_TR(0x77e635);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e640:L77e640:{c.instructions+=2;NFSU2_TR(0x77e640);
w4(R+4,u32(0x88f1bcull));
}
B77e645:{NFSU2_TR(0x77e645);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e64aull));
TAIL_STATIC(0x598750u,598);
}
B77e64a:L77e64a:{c.instructions+=2;NFSU2_TR(0x77e64a);
u8 U[4];
w4(U+0,u32(0x782690ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e64f:{NFSU2_TR(0x77e64f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e654ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e654:L77e654:{c.instructions+=2;NFSU2_TR(0x77e654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e655:{NFSU2_TR(0x77e655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e660:L77e660:{c.instructions+=2;NFSU2_TR(0x77e660);
w4(R+4,u32(0x88f748ull));
}
B77e665:{NFSU2_TR(0x77e665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e66aull));
TAIL_STATIC(0x57bcd0u,57b);
}
B77e66a:L77e66a:{c.instructions+=2;NFSU2_TR(0x77e66a);
u8 U[4];
w4(U+0,u32(0x782510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e66f:{NFSU2_TR(0x77e66f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e674ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e674:L77e674:{c.instructions+=2;NFSU2_TR(0x77e674);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e675:{NFSU2_TR(0x77e675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e680:L77e680:{c.instructions+=2;NFSU2_TR(0x77e680);
w4(R+4,u32(0x88ea8cull));
}
B77e685:{NFSU2_TR(0x77e685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e68aull));
TAIL_STATIC(0x598750u,598);
}
B77e68a:L77e68a:{c.instructions+=2;NFSU2_TR(0x77e68a);
u8 U[4];
w4(U+0,u32(0x782590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e68f:{NFSU2_TR(0x77e68f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e694ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e694:L77e694:{c.instructions+=2;NFSU2_TR(0x77e694);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e695:{NFSU2_TR(0x77e695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e6a0:L77e6a0:{c.instructions+=2;NFSU2_TR(0x77e6a0);
w4(R+4,u32(0x88f768ull));
}
B77e6a5:{NFSU2_TR(0x77e6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e6aaull));
TAIL_STATIC(0x5e81d0u,5e8);
}
B77e6aa:L77e6aa:{c.instructions+=2;NFSU2_TR(0x77e6aa);
u8 U[4];
w4(U+0,u32(0x7826c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6af:{NFSU2_TR(0x77e6af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e6b4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e6b4:L77e6b4:{c.instructions+=2;NFSU2_TR(0x77e6b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e6b5:{NFSU2_TR(0x77e6b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e6c0:L77e6c0:{c.instructions+=5;NFSU2_TR(0x77e6c0);
u8 U[4];
w4(U+0,u32(0x5e8660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6c5:{NFSU2_TR(0x77e6c5);
u8 U[4];
w4(U+0,u32(0x5e81c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6ca:{NFSU2_TR(0x77e6ca);
u8 U[4];
w4(U+0,u32(0x80034130ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6cf:{NFSU2_TR(0x77e6cf);
w4(R+4,u32(0x88a2acull));
}
B77e6d4:{NFSU2_TR(0x77e6d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e6d9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e6d9:L77e6d9:{c.instructions+=1;NFSU2_TR(0x77e6d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e6e0:L77e6e0:{c.instructions+=5;NFSU2_TR(0x77e6e0);
u8 U[4];
w4(U+0,u32(0x5e8660ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6e5:{NFSU2_TR(0x77e6e5);
u8 U[4];
w4(U+0,u32(0x5e81c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6ea:{NFSU2_TR(0x77e6ea);
u8 U[4];
w4(U+0,u32(0x3412full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e6ef:{NFSU2_TR(0x77e6ef);
w4(R+4,u32(0x88e9ecull));
}
B77e6f4:{NFSU2_TR(0x77e6f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e6f9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e6f9:L77e6f9:{c.instructions+=1;NFSU2_TR(0x77e6f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e700:L77e700:{c.instructions+=2;NFSU2_TR(0x77e700);
w4(R+4,u32(0x88f740ull));
}
B77e705:{NFSU2_TR(0x77e705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e70aull));
TAIL_STATIC(0x598750u,598);
}
B77e70a:L77e70a:{c.instructions+=2;NFSU2_TR(0x77e70a);
u8 U[4];
w4(U+0,u32(0x782620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e70f:{NFSU2_TR(0x77e70f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e714ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e714:L77e714:{c.instructions+=2;NFSU2_TR(0x77e714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e715:{NFSU2_TR(0x77e715);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e720:L77e720:{c.instructions+=5;NFSU2_TR(0x77e720);
u8 U[4];
w4(U+0,u32(0x5d84d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e725:{NFSU2_TR(0x77e725);
u8 U[4];
w4(U+0,u32(0x5d8470ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e72a:{NFSU2_TR(0x77e72a);
u8 U[4];
w4(U+0,u32(0x34146ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e72f:{NFSU2_TR(0x77e72f);
w4(R+4,u32(0x88eac4ull));
}
B77e734:{NFSU2_TR(0x77e734);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e739ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e739:L77e739:{c.instructions+=1;NFSU2_TR(0x77e739);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e740:L77e740:{c.instructions+=5;NFSU2_TR(0x77e740);
u8 U[4];
w4(U+0,u32(0x5d3ef0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e745:{NFSU2_TR(0x77e745);
u8 U[4];
w4(U+0,u32(0x5d3eb0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e74a:{NFSU2_TR(0x77e74a);
u8 U[4];
w4(U+0,u32(0x34201ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e74f:{NFSU2_TR(0x77e74f);
w4(R+4,u32(0x88f750ull));
}
B77e754:{NFSU2_TR(0x77e754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e759ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e759:L77e759:{c.instructions+=1;NFSU2_TR(0x77e759);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e760:L77e760:{c.instructions+=2;NFSU2_TR(0x77e760);
w4(R+4,u32(0x88a320ull));
}
B77e765:{NFSU2_TR(0x77e765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e76aull));
TAIL_STATIC(0x5e3f90u,5e3);
}
B77e76a:L77e76a:{c.instructions+=2;NFSU2_TR(0x77e76a);
u8 U[4];
w4(U+0,u32(0x7826a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e76f:{NFSU2_TR(0x77e76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e774ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e774:L77e774:{c.instructions+=2;NFSU2_TR(0x77e774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e775:{NFSU2_TR(0x77e775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e780:L77e780:{c.instructions+=2;NFSU2_TR(0x77e780);
w4(R+4,u32(0x88f298ull));
}
B77e785:{NFSU2_TR(0x77e785);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e78aull));
TAIL_STATIC(0x5e08b0u,5e0);
}
B77e78a:L77e78a:{c.instructions+=2;NFSU2_TR(0x77e78a);
u8 U[4];
w4(U+0,u32(0x782630ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e78f:{NFSU2_TR(0x77e78f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e794ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e794:L77e794:{c.instructions+=2;NFSU2_TR(0x77e794);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e795:{NFSU2_TR(0x77e795);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e7a0:L77e7a0:{c.instructions+=5;NFSU2_TR(0x77e7a0);
u8 U[4];
w4(U+0,u32(0x5dee00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7a5:{NFSU2_TR(0x77e7a5);
u8 U[4];
w4(U+0,u32(0x5da490ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7aa:{NFSU2_TR(0x77e7aa);
u8 U[4];
w4(U+0,u32(0x80034147ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7af:{NFSU2_TR(0x77e7af);
w4(R+4,u32(0x88e9ccull));
}
B77e7b4:{NFSU2_TR(0x77e7b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e7b9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e7b9:L77e7b9:{c.instructions+=1;NFSU2_TR(0x77e7b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e7c0:L77e7c0:{c.instructions+=2;NFSU2_TR(0x77e7c0);
w4(R+4,u32(0x88eb00ull));
}
B77e7c5:{NFSU2_TR(0x77e7c5);
TAIL_STATIC(0x5def40u,5de);
}
B77e7d0:L77e7d0:{c.instructions+=5;NFSU2_TR(0x77e7d0);
u8 U[4];
w4(U+0,u32(0x5e4e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7d5:{NFSU2_TR(0x77e7d5);
u8 U[4];
w4(U+0,u32(0x5def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7da:{NFSU2_TR(0x77e7da);
u8 U[4];
w4(U+0,u32(0x34110ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7df:{NFSU2_TR(0x77e7df);
w4(R+4,u32(0x88eab4ull));
}
B77e7e4:{NFSU2_TR(0x77e7e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e7e9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e7e9:L77e7e9:{c.instructions+=1;NFSU2_TR(0x77e7e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e7f0:L77e7f0:{c.instructions+=5;NFSU2_TR(0x77e7f0);
u8 U[4];
w4(U+0,u32(0x5e4e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7f5:{NFSU2_TR(0x77e7f5);
u8 U[4];
w4(U+0,u32(0x5def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7fa:{NFSU2_TR(0x77e7fa);
u8 U[4];
w4(U+0,u32(0x34113ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e7ff:{NFSU2_TR(0x77e7ff);
w4(R+4,u32(0x88e9dcull));
}
B77e804:{NFSU2_TR(0x77e804);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e809ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e809:L77e809:{c.instructions+=1;NFSU2_TR(0x77e809);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e810:L77e810:{c.instructions+=5;NFSU2_TR(0x77e810);
u8 U[4];
w4(U+0,u32(0x5e4e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e815:{NFSU2_TR(0x77e815);
u8 U[4];
w4(U+0,u32(0x5def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e81a:{NFSU2_TR(0x77e81a);
u8 U[4];
w4(U+0,u32(0x34111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e81f:{NFSU2_TR(0x77e81f);
w4(R+4,u32(0x88f27cull));
}
B77e824:{NFSU2_TR(0x77e824);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e829ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e829:L77e829:{c.instructions+=1;NFSU2_TR(0x77e829);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e830:L77e830:{c.instructions+=5;NFSU2_TR(0x77e830);
u8 U[4];
w4(U+0,u32(0x5e4e60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e835:{NFSU2_TR(0x77e835);
u8 U[4];
w4(U+0,u32(0x5def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e83a:{NFSU2_TR(0x77e83a);
u8 U[4];
w4(U+0,u32(0x34112ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e83f:{NFSU2_TR(0x77e83f);
w4(R+4,u32(0x88ea74ull));
}
B77e844:{NFSU2_TR(0x77e844);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e849ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e849:L77e849:{c.instructions+=1;NFSU2_TR(0x77e849);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e850:L77e850:{c.instructions+=2;NFSU2_TR(0x77e850);
w4(R+4,u32(0x88ead4ull));
}
B77e855:{NFSU2_TR(0x77e855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e85aull));
TAIL_STATIC(0x598750u,598);
}
B77e85a:L77e85a:{c.instructions+=2;NFSU2_TR(0x77e85a);
u8 U[4];
w4(U+0,u32(0x782640ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e85f:{NFSU2_TR(0x77e85f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e864ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e864:L77e864:{c.instructions+=2;NFSU2_TR(0x77e864);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e865:{NFSU2_TR(0x77e865);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e870:L77e870:{c.instructions+=2;NFSU2_TR(0x77e870);
w4(R+4,u32(0x88f760ull));
}
B77e875:{NFSU2_TR(0x77e875);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e87aull));
TAIL_STATIC(0x598750u,598);
}
B77e87a:L77e87a:{c.instructions+=2;NFSU2_TR(0x77e87a);
u8 U[4];
w4(U+0,u32(0x7825d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e87f:{NFSU2_TR(0x77e87f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e884ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e884:L77e884:{c.instructions+=2;NFSU2_TR(0x77e884);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e885:{NFSU2_TR(0x77e885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e890:L77e890:{c.instructions+=5;NFSU2_TR(0x77e890);
u8 U[4];
w4(U+0,u32(0x5d6440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e895:{NFSU2_TR(0x77e895);
u8 U[4];
w4(U+0,u32(0x5db2e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e89a:{NFSU2_TR(0x77e89a);
u8 U[4];
w4(U+0,u32(0x34108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e89f:{NFSU2_TR(0x77e89f);
w4(R+4,u32(0x88eaa4ull));
}
B77e8a4:{NFSU2_TR(0x77e8a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e8a9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e8a9:L77e8a9:{c.instructions+=1;NFSU2_TR(0x77e8a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e8b0:L77e8b0:{c.instructions+=5;NFSU2_TR(0x77e8b0);
u8 U[4];
w4(U+0,u32(0x5dfba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8b5:{NFSU2_TR(0x77e8b5);
u8 U[4];
w4(U+0,u32(0x5df8a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8ba:{NFSU2_TR(0x77e8ba);
u8 U[4];
w4(U+0,u32(0x80034100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8bf:{NFSU2_TR(0x77e8bf);
w4(R+4,u32(0x88e9b4ull));
}
B77e8c4:{NFSU2_TR(0x77e8c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e8c9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e8c9:L77e8c9:{c.instructions+=1;NFSU2_TR(0x77e8c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e8d0:L77e8d0:{c.instructions+=5;NFSU2_TR(0x77e8d0);
u8 U[4];
w4(U+0,u32(0x5dfba0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8d5:{NFSU2_TR(0x77e8d5);
u8 U[4];
w4(U+0,u32(0x5df8a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8da:{NFSU2_TR(0x77e8da);
u8 U[4];
w4(U+0,u32(0x34107ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8df:{NFSU2_TR(0x77e8df);
w4(R+4,u32(0x88ea94ull));
}
B77e8e4:{NFSU2_TR(0x77e8e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e8e9ull));
TAIL_STATIC(0x43c0b0u,43c);
}
B77e8e9:L77e8e9:{c.instructions+=1;NFSU2_TR(0x77e8e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e8f0:L77e8f0:{c.instructions+=2;NFSU2_TR(0x77e8f0);
w4(R+4,u32(0x883e70ull));
}
B77e8f5:{NFSU2_TR(0x77e8f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e8faull));
TAIL_STATIC(0x5e6360u,5e6);
}
B77e8fa:L77e8fa:{c.instructions+=2;NFSU2_TR(0x77e8fa);
u8 U[4];
w4(U+0,u32(0x7826b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e8ff:{NFSU2_TR(0x77e8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e904ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e904:L77e904:{c.instructions+=2;NFSU2_TR(0x77e904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e905:{NFSU2_TR(0x77e905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e910:L77e910:{c.instructions+=6;NFSU2_TR(0x77e910);
u8 U[4];
w4(U+0,u32(0x4def30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e915:{NFSU2_TR(0x77e915);
u8 U[4];
w4(U+0,u32(0x598750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e91a:{NFSU2_TR(0x77e91a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e91c:{NFSU2_TR(0x77e91c);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e91e:{NFSU2_TR(0x77e91e);
u8 U[4];
w4(U+0,u32(0x88f1c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e923:{NFSU2_TR(0x77e923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e928ull));
TAIL_STATIC(0x75c461u,75c);
}
B77e928:L77e928:{c.instructions+=2;NFSU2_TR(0x77e928);
u8 U[4];
w4(U+0,u32(0x782650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e92d:{NFSU2_TR(0x77e92d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e932ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e932:L77e932:{c.instructions+=2;NFSU2_TR(0x77e932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e933:{NFSU2_TR(0x77e933);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e940:L77e940:{c.instructions+=3;NFSU2_TR(0x77e940);
u8 U[4];
w4(U+0,u32(0x7a534cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e945:{NFSU2_TR(0x77e945);
w4(R+4,u32(0x88a2c0ull));
}
B77e94a:{NFSU2_TR(0x77e94a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e94full));
TAIL_STATIC(0x60b7e0u,60b);
}
B77e94f:L77e94f:{c.instructions+=3;NFSU2_TR(0x77e94f);
u8 U[4];
w4(U+0,u32(0x7a534cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e954:{NFSU2_TR(0x77e954);
w4(R+4,u32(0x88a2f0ull));
}
B77e959:{NFSU2_TR(0x77e959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e95eull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77e95e:L77e95e:{c.instructions+=2;NFSU2_TR(0x77e95e);
u8 U[4];
w4(U+0,u32(0x782520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e963:{NFSU2_TR(0x77e963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e968ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e968:L77e968:{c.instructions+=2;NFSU2_TR(0x77e968);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e969:{NFSU2_TR(0x77e969);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e970:L77e970:{c.instructions+=3;NFSU2_TR(0x77e970);
u8 U[4];
w4(U+0,u32(0x7a5364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e975:{NFSU2_TR(0x77e975);
w4(R+4,u32(0x88ea08ull));
}
B77e97a:{NFSU2_TR(0x77e97a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e97full));
TAIL_STATIC(0x60b7e0u,60b);
}
B77e97f:L77e97f:{c.instructions+=3;NFSU2_TR(0x77e97f);
u8 U[4];
w4(U+0,u32(0x7a5364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e984:{NFSU2_TR(0x77e984);
w4(R+4,u32(0x88ea38ull));
}
B77e989:{NFSU2_TR(0x77e989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e98eull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77e98e:L77e98e:{c.instructions+=2;NFSU2_TR(0x77e98e);
u8 U[4];
w4(U+0,u32(0x782540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e993:{NFSU2_TR(0x77e993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e998ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e998:L77e998:{c.instructions+=2;NFSU2_TR(0x77e998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e999:{NFSU2_TR(0x77e999);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e9a0:L77e9a0:{c.instructions+=3;NFSU2_TR(0x77e9a0);
u8 U[4];
w4(U+0,u32(0x7a5378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e9a5:{NFSU2_TR(0x77e9a5);
w4(R+4,u32(0x88f210ull));
}
B77e9aa:{NFSU2_TR(0x77e9aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e9afull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77e9af:L77e9af:{c.instructions+=3;NFSU2_TR(0x77e9af);
u8 U[4];
w4(U+0,u32(0x7a5378ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e9b4:{NFSU2_TR(0x77e9b4);
w4(R+4,u32(0x88f240ull));
}
B77e9b9:{NFSU2_TR(0x77e9b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e9beull));
TAIL_STATIC(0x60b7e0u,60b);
}
B77e9be:L77e9be:{c.instructions+=2;NFSU2_TR(0x77e9be);
u8 U[4];
w4(U+0,u32(0x782560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e9c3:{NFSU2_TR(0x77e9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e9c8ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e9c8:L77e9c8:{c.instructions+=2;NFSU2_TR(0x77e9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e9c9:{NFSU2_TR(0x77e9c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e9d0:L77e9d0:{c.instructions+=2;NFSU2_TR(0x77e9d0);
w4(R+4,u32(0x88f28cull));
}
B77e9d5:{NFSU2_TR(0x77e9d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e9daull));
TAIL_STATIC(0x598750u,598);
}
B77e9da:L77e9da:{c.instructions+=2;NFSU2_TR(0x77e9da);
u8 U[4];
w4(U+0,u32(0x782670ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e9df:{NFSU2_TR(0x77e9df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e9e4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77e9e4:L77e9e4:{c.instructions+=2;NFSU2_TR(0x77e9e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77e9e5:{NFSU2_TR(0x77e9e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77e9f0:L77e9f0:{c.instructions+=2;NFSU2_TR(0x77e9f0);
w4(R+4,u32(0x88ffa0ull));
}
B77e9f5:{NFSU2_TR(0x77e9f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77e9faull));
TAIL_STATIC(0x598750u,598);
}
B77e9fa:L77e9fa:{c.instructions+=2;NFSU2_TR(0x77e9fa);
u8 U[4];
w4(U+0,u32(0x782680ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77e9ff:{NFSU2_TR(0x77e9ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea04ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ea04:L77ea04:{c.instructions+=2;NFSU2_TR(0x77ea04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ea05:{NFSU2_TR(0x77ea05);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ea10:L77ea10:{c.instructions+=2;NFSU2_TR(0x77ea10);
w4(R+4,u32(0x88e9c4ull));
}
B77ea15:{NFSU2_TR(0x77ea15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea1aull));
TAIL_STATIC(0x598750u,598);
}
B77ea1a:L77ea1a:{c.instructions+=2;NFSU2_TR(0x77ea1a);
u8 U[4];
w4(U+0,u32(0x7825e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ea1f:{NFSU2_TR(0x77ea1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea24ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ea24:L77ea24:{c.instructions+=2;NFSU2_TR(0x77ea24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ea25:{NFSU2_TR(0x77ea25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ea30:L77ea30:{c.instructions+=2;NFSU2_TR(0x77ea30);
w4(R+4,u32(0x88f208ull));
}
B77ea35:{NFSU2_TR(0x77ea35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea3aull));
TAIL_STATIC(0x598750u,598);
}
B77ea3a:L77ea3a:{c.instructions+=2;NFSU2_TR(0x77ea3a);
u8 U[4];
w4(U+0,u32(0x7825f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ea3f:{NFSU2_TR(0x77ea3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea44ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ea44:L77ea44:{c.instructions+=2;NFSU2_TR(0x77ea44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ea45:{NFSU2_TR(0x77ea45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ea50:L77ea50:{c.instructions+=2;NFSU2_TR(0x77ea50);
w4(R+4,u32(0x88f278ull));
}
B77ea55:{NFSU2_TR(0x77ea55);
TAIL_STATIC(0x5d7b80u,5d7);
}
B77ea60:L77ea60:{c.instructions+=2;NFSU2_TR(0x77ea60);
w4(R+4,u32(0x88e9fcull));
}
B77ea65:{NFSU2_TR(0x77ea65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea6aull));
TAIL_STATIC(0x598750u,598);
}
B77ea6a:L77ea6a:{c.instructions+=2;NFSU2_TR(0x77ea6a);
u8 U[4];
w4(U+0,u32(0x7825a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ea6f:{NFSU2_TR(0x77ea6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea74ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ea74:L77ea74:{c.instructions+=2;NFSU2_TR(0x77ea74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ea75:{NFSU2_TR(0x77ea75);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ea80:L77ea80:{c.instructions+=2;NFSU2_TR(0x77ea80);
w4(R+4,u32(0x88ea84ull));
}
B77ea85:{NFSU2_TR(0x77ea85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea8aull));
TAIL_STATIC(0x598750u,598);
}
B77ea8a:L77ea8a:{c.instructions+=2;NFSU2_TR(0x77ea8a);
u8 U[4];
w4(U+0,u32(0x7825b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ea8f:{NFSU2_TR(0x77ea8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ea94ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ea94:L77ea94:{c.instructions+=2;NFSU2_TR(0x77ea94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ea95:{NFSU2_TR(0x77ea95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eaa0:L77eaa0:{c.instructions+=2;NFSU2_TR(0x77eaa0);
w4(R+4,u32(0x88eadcull));
}
B77eaa5:{NFSU2_TR(0x77eaa5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eaaaull));
TAIL_STATIC(0x598750u,598);
}
B77eaaa:L77eaaa:{c.instructions+=2;NFSU2_TR(0x77eaaa);
u8 U[4];
w4(U+0,u32(0x7825c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eaaf:{NFSU2_TR(0x77eaaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eab4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77eab4:L77eab4:{c.instructions+=2;NFSU2_TR(0x77eab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77eab5:{NFSU2_TR(0x77eab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eac0:L77eac0:{c.instructions+=14;NFSU2_TR(0x77eac0);
__builtin_memmove((R+0),gp(0x7a481c),4);
}
B77eac5:{NFSU2_TR(0x77eac5);
{u32 ea_=u32(u32(8013852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77eacb:{NFSU2_TR(0x77eacb);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B77eacd:{NFSU2_TR(0x77eacd);
__builtin_memmove((R+4),(R+0),4);
}
B77eacf:{NFSU2_TR(0x77eacf);
__builtin_memmove((R+8),(R+0),4);
}
B77ead1:{NFSU2_TR(0x77ead1);
{u32 ea_=u32(u32(8978360u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77ead7:{NFSU2_TR(0x77ead7);
{u32 ea_=u32(u32(8978368u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77eadd:{NFSU2_TR(0x77eadd);
__builtin_memmove(gp(0x88ffb0),(R+0),4);
}
B77eae2:{NFSU2_TR(0x77eae2);
{u32 ea_=u32(u32(8978372u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B77eae8:{NFSU2_TR(0x77eae8);
__builtin_memmove(gp(0x88ffb4),(R+4),4);
}
B77eaee:{NFSU2_TR(0x77eaee);
{u32 ea_=u32(u32(8978380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77eaf4:{NFSU2_TR(0x77eaf4);
__builtin_memmove(gp(0x88ffbc),(R+8),4);
}
B77eafa:{NFSU2_TR(0x77eafa);
__builtin_memmove(gp(0x88ffc8),(R+0),4);
}
B77eaff:{NFSU2_TR(0x77eaff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eb00:L77eb00:{c.instructions+=4;NFSU2_TR(0x77eb00);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77eb06:{NFSU2_TR(0x77eb06);
{u32 ea_=u32(u32(8017008u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77eb0c:{NFSU2_TR(0x77eb0c);
{u32 ea_=u32(u32(9031432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77eb12:{NFSU2_TR(0x77eb12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eb20:L77eb20:{c.instructions+=13;NFSU2_TR(0x77eb20);
__builtin_memmove((R+0),gp(0x7a5488),4);
}
B77eb25:{NFSU2_TR(0x77eb25);
__builtin_memmove((R+8),gp(0x7a5480),4);
}
B77eb2b:{NFSU2_TR(0x77eb2b);
__builtin_memmove((R+4),(R+0),4);
}
B77eb2d:{NFSU2_TR(0x77eb2d);
__builtin_memmove(gp(0x8025e4),(R+4),4);
}
B77eb33:{NFSU2_TR(0x77eb33);
__builtin_memmove((R+4),gp(0x7a5484),4);
}
B77eb39:{NFSU2_TR(0x77eb39);
__builtin_memmove(gp(0x8025e0),(R+0),4);
}
B77eb3e:{NFSU2_TR(0x77eb3e);
__builtin_memmove((R+0),(R+8),4);
}
B77eb40:{NFSU2_TR(0x77eb40);
__builtin_memmove(gp(0x802618),(R+8),4);
}
B77eb46:{NFSU2_TR(0x77eb46);
__builtin_memmove((R+8),(R+4),4);
}
B77eb48:{NFSU2_TR(0x77eb48);
__builtin_memmove(gp(0x80261c),(R+0),4);
}
B77eb4d:{NFSU2_TR(0x77eb4d);
__builtin_memmove(gp(0x802620),(R+4),4);
}
B77eb53:{NFSU2_TR(0x77eb53);
__builtin_memmove(gp(0x802624),(R+8),4);
}
B77eb59:{NFSU2_TR(0x77eb59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eb60:L77eb60:{c.instructions+=2;NFSU2_TR(0x77eb60);
u8 U[4];
w4(U+0,u32(0x7864e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eb65:{NFSU2_TR(0x77eb65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eb6aull));
TAIL_STATIC(0x43db50u,43d);
}
B77eb6a:L77eb6a:{c.instructions+=3;NFSU2_TR(0x77eb6a);
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
B77eb6d:{NFSU2_TR(0x77eb6d);
__builtin_memmove(gp(0x89cf2c),(R+0),4);
}
B77eb72:{NFSU2_TR(0x77eb72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eb80:L77eb80:{c.instructions+=2;NFSU2_TR(0x77eb80);
u8 U[4];
w4(U+0,u32(0x7864fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eb85:{NFSU2_TR(0x77eb85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eb8aull));
TAIL_STATIC(0x43db50u,43d);
}
B77eb8a:L77eb8a:{c.instructions+=3;NFSU2_TR(0x77eb8a);
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
B77eb8d:{NFSU2_TR(0x77eb8d);
__builtin_memmove(gp(0x89ccec),(R+0),4);
}
B77eb92:{NFSU2_TR(0x77eb92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eba0:L77eba0:{c.instructions+=2;NFSU2_TR(0x77eba0);
u8 U[4];
w4(U+0,u32(0x786510ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eba5:{NFSU2_TR(0x77eba5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ebaaull));
TAIL_STATIC(0x43db50u,43d);
}
B77ebaa:L77ebaa:{c.instructions+=3;NFSU2_TR(0x77ebaa);
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
B77ebad:{NFSU2_TR(0x77ebad);
__builtin_memmove(gp(0x89ccf0),(R+0),4);
}
B77ebb2:{NFSU2_TR(0x77ebb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ebc0:L77ebc0:{c.instructions+=2;NFSU2_TR(0x77ebc0);
u8 U[4];
w4(U+0,u32(0x786520ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ebc5:{NFSU2_TR(0x77ebc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ebcaull));
TAIL_STATIC(0x43db50u,43d);
}
B77ebca:L77ebca:{c.instructions+=3;NFSU2_TR(0x77ebca);
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
B77ebcd:{NFSU2_TR(0x77ebcd);
__builtin_memmove(gp(0x89cce0),(R+0),4);
}
B77ebd2:{NFSU2_TR(0x77ebd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ebe0:L77ebe0:{c.instructions+=2;NFSU2_TR(0x77ebe0);
u8 U[4];
w4(U+0,u32(0x786530ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ebe5:{NFSU2_TR(0x77ebe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ebeaull));
TAIL_STATIC(0x43db50u,43d);
}
B77ebea:L77ebea:{c.instructions+=3;NFSU2_TR(0x77ebea);
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
B77ebed:{NFSU2_TR(0x77ebed);
__builtin_memmove(gp(0x89e78c),(R+0),4);
}
B77ebf2:{NFSU2_TR(0x77ebf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ec00:L77ec00:{c.instructions+=2;NFSU2_TR(0x77ec00);
u8 U[4];
w4(U+0,u32(0x786548ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ec05:{NFSU2_TR(0x77ec05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ec0aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ec0a:L77ec0a:{c.instructions+=3;NFSU2_TR(0x77ec0a);
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
B77ec0d:{NFSU2_TR(0x77ec0d);
__builtin_memmove(gp(0x89cf20),(R+0),4);
}
B77ec12:{NFSU2_TR(0x77ec12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ec20:L77ec20:{c.instructions+=2;NFSU2_TR(0x77ec20);
u8 U[4];
w4(U+0,u32(0x786560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ec25:{NFSU2_TR(0x77ec25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ec2aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ec2a:L77ec2a:{c.instructions+=3;NFSU2_TR(0x77ec2a);
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
B77ec2d:{NFSU2_TR(0x77ec2d);
__builtin_memmove(gp(0x890158),(R+0),4);
}
B77ec32:{NFSU2_TR(0x77ec32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ec40:L77ec40:{c.instructions+=2;NFSU2_TR(0x77ec40);
u8 U[4];
w4(U+0,u32(0x78657cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ec45:{NFSU2_TR(0x77ec45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ec4aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ec4a:L77ec4a:{c.instructions+=3;NFSU2_TR(0x77ec4a);
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
B77ec4d:{NFSU2_TR(0x77ec4d);
__builtin_memmove(gp(0x89e820),(R+0),4);
}
B77ec52:{NFSU2_TR(0x77ec52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ec60:L77ec60:{c.instructions+=2;NFSU2_TR(0x77ec60);
u8 U[4];
w4(U+0,u32(0x786598ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ec65:{NFSU2_TR(0x77ec65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ec6aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ec6a:L77ec6a:{c.instructions+=3;NFSU2_TR(0x77ec6a);
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
B77ec6d:{NFSU2_TR(0x77ec6d);
__builtin_memmove(gp(0x89cf14),(R+0),4);
}
B77ec72:{NFSU2_TR(0x77ec72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ec80:L77ec80:{c.instructions+=4;NFSU2_TR(0x77ec80);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ec82:{NFSU2_TR(0x77ec82);
u8 U[4];
w4(U+0,u32(0x8023a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ec87:{NFSU2_TR(0x77ec87);
w4(R+4,u32(0x89cf24ull));
}
B77ec8c:{NFSU2_TR(0x77ec8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ec91ull));
TAIL_STATIC(0x576770u,576);
}
B77ec91:L77ec91:{c.instructions+=1;NFSU2_TR(0x77ec91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eca0:L77eca0:{c.instructions+=4;NFSU2_TR(0x77eca0);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eca2:{NFSU2_TR(0x77eca2);
u8 U[4];
w4(U+0,u32(0x8023d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eca7:{NFSU2_TR(0x77eca7);
w4(R+4,u32(0x89cf30ull));
}
B77ecac:{NFSU2_TR(0x77ecac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ecb1ull));
TAIL_STATIC(0x576770u,576);
}
B77ecb1:L77ecb1:{c.instructions+=1;NFSU2_TR(0x77ecb1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ecc0:L77ecc0:{c.instructions+=4;NFSU2_TR(0x77ecc0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ecc2:{NFSU2_TR(0x77ecc2);
u8 U[4];
w4(U+0,u32(0x802404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ecc7:{NFSU2_TR(0x77ecc7);
w4(R+4,u32(0x89e790ull));
}
B77eccc:{NFSU2_TR(0x77eccc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ecd1ull));
TAIL_STATIC(0x576770u,576);
}
B77ecd1:L77ecd1:{c.instructions+=1;NFSU2_TR(0x77ecd1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ece0:L77ece0:{c.instructions+=4;NFSU2_TR(0x77ece0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ece2:{NFSU2_TR(0x77ece2);
u8 U[4];
w4(U+0,u32(0x802414ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ece7:{NFSU2_TR(0x77ece7);
w4(R+4,u32(0x89e824ull));
}
B77ecec:{NFSU2_TR(0x77ecec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ecf1ull));
TAIL_STATIC(0x576770u,576);
}
B77ecf1:L77ecf1:{c.instructions+=1;NFSU2_TR(0x77ecf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ed00:L77ed00:{c.instructions+=4;NFSU2_TR(0x77ed00);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed02:{NFSU2_TR(0x77ed02);
u8 U[4];
w4(U+0,u32(0x802424ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed07:{NFSU2_TR(0x77ed07);
w4(R+4,u32(0x89cf18ull));
}
B77ed0c:{NFSU2_TR(0x77ed0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ed11ull));
TAIL_STATIC(0x576770u,576);
}
B77ed11:L77ed11:{c.instructions+=1;NFSU2_TR(0x77ed11);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ed20:L77ed20:{c.instructions+=4;NFSU2_TR(0x77ed20);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed22:{NFSU2_TR(0x77ed22);
u8 U[4];
w4(U+0,u32(0x802434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed27:{NFSU2_TR(0x77ed27);
w4(R+4,u32(0x890150ull));
}
B77ed2c:{NFSU2_TR(0x77ed2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ed31ull));
TAIL_STATIC(0x576770u,576);
}
B77ed31:L77ed31:{c.instructions+=1;NFSU2_TR(0x77ed31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ed40:L77ed40:{c.instructions+=4;NFSU2_TR(0x77ed40);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed42:{NFSU2_TR(0x77ed42);
u8 U[4];
w4(U+0,u32(0x802444ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed47:{NFSU2_TR(0x77ed47);
w4(R+4,u32(0x89e798ull));
}
B77ed4c:{NFSU2_TR(0x77ed4c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ed51ull));
TAIL_STATIC(0x576770u,576);
}
B77ed51:L77ed51:{c.instructions+=1;NFSU2_TR(0x77ed51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ed60:L77ed60:{c.instructions+=4;NFSU2_TR(0x77ed60);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed62:{NFSU2_TR(0x77ed62);
u8 U[4];
w4(U+0,u32(0x802570ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed67:{NFSU2_TR(0x77ed67);
w4(R+4,u32(0x89cce4ull));
}
B77ed6c:{NFSU2_TR(0x77ed6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ed71ull));
TAIL_STATIC(0x576770u,576);
}
B77ed71:L77ed71:{c.instructions+=1;NFSU2_TR(0x77ed71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ed80:L77ed80:{c.instructions+=4;NFSU2_TR(0x77ed80);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed82:{NFSU2_TR(0x77ed82);
u8 U[4];
w4(U+0,u32(0x802590ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ed87:{NFSU2_TR(0x77ed87);
w4(R+4,u32(0x89cf0cull));
}
B77ed8c:{NFSU2_TR(0x77ed8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ed91ull));
TAIL_STATIC(0x576770u,576);
}
B77ed91:L77ed91:{c.instructions+=1;NFSU2_TR(0x77ed91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eda0:L77eda0:{c.instructions+=2;NFSU2_TR(0x77eda0);
w4(R+4,u32(0x89e7a0ull));
}
B77eda5:{NFSU2_TR(0x77eda5);
TAIL_STATIC(0x5ed5f0u,5ed);
}
B77edb0:L77edb0:{c.instructions+=6;NFSU2_TR(0x77edb0);
u8 U[4];
w4(U+0,u32(0x50f7d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edb5:{NFSU2_TR(0x77edb5);
u8 U[4];
w4(U+0,u32(0x5f0d00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edba:{NFSU2_TR(0x77edba);
u8 U[4];
w4(U+0,u32(0x16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edbc:{NFSU2_TR(0x77edbc);
u8 U[4];
w4(U+0,u32(0x940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edc1:{NFSU2_TR(0x77edc1);
u8 U[4];
w4(U+0,u32(0x890160ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edc6:{NFSU2_TR(0x77edc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77edcbull));
TAIL_STATIC(0x75c461u,75c);
}
B77edcb:L77edcb:{c.instructions+=2;NFSU2_TR(0x77edcb);
u8 U[4];
w4(U+0,u32(0x7826d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edd0:{NFSU2_TR(0x77edd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77edd5ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77edd5:L77edd5:{c.instructions+=2;NFSU2_TR(0x77edd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77edd6:{NFSU2_TR(0x77edd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ede0:L77ede0:{c.instructions+=2;NFSU2_TR(0x77ede0);
w4(R+4,u32(0x89cf48ull));
}
B77ede5:{NFSU2_TR(0x77ede5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77edeaull));
TAIL_STATIC(0x5f9050u,5f9);
}
B77edea:L77edea:{c.instructions+=2;NFSU2_TR(0x77edea);
u8 U[4];
w4(U+0,u32(0x7826f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77edef:{NFSU2_TR(0x77edef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77edf4ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77edf4:L77edf4:{c.instructions+=2;NFSU2_TR(0x77edf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77edf5:{NFSU2_TR(0x77edf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ee00:L77ee00:{c.instructions+=2;NFSU2_TR(0x77ee00);
w4(R+4,u32(0x8a2b50ull));
}
B77ee05:{NFSU2_TR(0x77ee05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ee0aull));
TAIL_STATIC(0x598750u,598);
}
B77ee0a:L77ee0a:{c.instructions+=2;NFSU2_TR(0x77ee0a);
u8 U[4];
w4(U+0,u32(0x782840ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ee0f:{NFSU2_TR(0x77ee0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ee14ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ee14:L77ee14:{c.instructions+=2;NFSU2_TR(0x77ee14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ee15:{NFSU2_TR(0x77ee15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ee20:L77ee20:{c.instructions+=4;NFSU2_TR(0x77ee20);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ee26:{NFSU2_TR(0x77ee26);
{u32 ea_=u32(u32(8021448u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B77ee2c:{NFSU2_TR(0x77ee2c);
{u32 ea_=u32(u32(9055456u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ee32:{NFSU2_TR(0x77ee32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ee40:L77ee40:{c.instructions+=4;NFSU2_TR(0x77ee40);
{u32 ea_=u32(u32(8021452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ee46:{NFSU2_TR(0x77ee46);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ee48:{NFSU2_TR(0x77ee48);
{u32 ea_=u32(u32(9056608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ee4e:{NFSU2_TR(0x77ee4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ee50:L77ee50:{c.instructions+=4;NFSU2_TR(0x77ee50);
{u32 ea_=u32(u32(8021452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B77ee56:{NFSU2_TR(0x77ee56);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B77ee5c:{NFSU2_TR(0x77ee5c);
{u32 ea_=u32(u32(9056612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B77ee62:{NFSU2_TR(0x77ee62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ee70:L77ee70:{c.instructions+=4;NFSU2_TR(0x77ee70);
{u32 ea_=u32(u32(8021456u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77ee76:{NFSU2_TR(0x77ee76);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B77ee78:{NFSU2_TR(0x77ee78);
{u32 ea_=u32(u32(9056600u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ee7e:{NFSU2_TR(0x77ee7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ee80:L77ee80:{c.instructions+=4;NFSU2_TR(0x77ee80);
{u32 ea_=u32(u32(8021456u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B77ee86:{NFSU2_TR(0x77ee86);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B77ee8c:{NFSU2_TR(0x77ee8c);
{u32 ea_=u32(u32(9056592u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B77ee92:{NFSU2_TR(0x77ee92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eea0:L77eea0:{c.instructions+=2;NFSU2_TR(0x77eea0);
u8 U[4];
w4(U+0,u32(0x7a8da8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eea5:{NFSU2_TR(0x77eea5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eeaaull));
TAIL_STATIC(0x43db50u,43d);
}
B77eeaa:L77eeaa:{c.instructions+=3;NFSU2_TR(0x77eeaa);
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
B77eead:{NFSU2_TR(0x77eead);
__builtin_memmove(gp(0x8a31e0),(R+0),4);
}
B77eeb2:{NFSU2_TR(0x77eeb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eec0:L77eec0:{c.instructions+=2;NFSU2_TR(0x77eec0);
u8 U[4];
w4(U+0,u32(0x7a8db8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eec5:{NFSU2_TR(0x77eec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eecaull));
TAIL_STATIC(0x43db50u,43d);
}
B77eeca:L77eeca:{c.instructions+=3;NFSU2_TR(0x77eeca);
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
B77eecd:{NFSU2_TR(0x77eecd);
__builtin_memmove(gp(0x8a3b00),(R+0),4);
}
B77eed2:{NFSU2_TR(0x77eed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77eee0:L77eee0:{c.instructions+=2;NFSU2_TR(0x77eee0);
u8 U[4];
w4(U+0,u32(0x7a8dc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eee5:{NFSU2_TR(0x77eee5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77eeeaull));
TAIL_STATIC(0x43db50u,43d);
}
B77eeea:L77eeea:{c.instructions+=3;NFSU2_TR(0x77eeea);
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
B77eeed:{NFSU2_TR(0x77eeed);
__builtin_memmove(gp(0x8a1d90),(R+0),4);
}
B77eef2:{NFSU2_TR(0x77eef2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ef00:L77ef00:{c.instructions+=2;NFSU2_TR(0x77ef00);
w4(R+4,u32(0x8a2ca4ull));
}
B77ef05:{NFSU2_TR(0x77ef05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef0aull));
TAIL_STATIC(0x598750u,598);
}
B77ef0a:L77ef0a:{c.instructions+=2;NFSU2_TR(0x77ef0a);
u8 U[4];
w4(U+0,u32(0x7828a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef0f:{NFSU2_TR(0x77ef0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef14ull));
TAIL_STATIC(0x75c5edu,75c);
}
B77ef14:L77ef14:{c.instructions+=2;NFSU2_TR(0x77ef14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B77ef15:{NFSU2_TR(0x77ef15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B77ef20:L77ef20:{c.instructions+=2;NFSU2_TR(0x77ef20);
u8 U[4];
w4(U+0,u32(0x7a9114ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef25:{NFSU2_TR(0x77ef25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef2aull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef2a:L77ef2a:{c.instructions+=3;NFSU2_TR(0x77ef2a);
u8 U[4];
w4(U+0,u32(0x7a9100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef2f:{NFSU2_TR(0x77ef2f);
__builtin_memmove(gp(0x8a4358),(R+0),4);
}
B77ef34:{NFSU2_TR(0x77ef34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef39ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef39:L77ef39:{c.instructions+=3;NFSU2_TR(0x77ef39);
u8 U[4];
w4(U+0,u32(0x7a90ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef3e:{NFSU2_TR(0x77ef3e);
__builtin_memmove(gp(0x8a435c),(R+0),4);
}
B77ef43:{NFSU2_TR(0x77ef43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef48ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef48:L77ef48:{c.instructions+=3;NFSU2_TR(0x77ef48);
u8 U[4];
w4(U+0,u32(0x7a90e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef4d:{NFSU2_TR(0x77ef4d);
__builtin_memmove(gp(0x8a4360),(R+0),4);
}
B77ef52:{NFSU2_TR(0x77ef52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef57ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef57:L77ef57:{c.instructions+=3;NFSU2_TR(0x77ef57);
u8 U[4];
w4(U+0,u32(0x7a90d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef5c:{NFSU2_TR(0x77ef5c);
__builtin_memmove(gp(0x8a4364),(R+0),4);
}
B77ef61:{NFSU2_TR(0x77ef61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef66ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef66:L77ef66:{c.instructions+=3;NFSU2_TR(0x77ef66);
u8 U[4];
w4(U+0,u32(0x7a90c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef6b:{NFSU2_TR(0x77ef6b);
__builtin_memmove(gp(0x8a4368),(R+0),4);
}
B77ef70:{NFSU2_TR(0x77ef70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef75ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef75:L77ef75:{c.instructions+=3;NFSU2_TR(0x77ef75);
u8 U[4];
w4(U+0,u32(0x7a90acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef7a:{NFSU2_TR(0x77ef7a);
__builtin_memmove(gp(0x8a436c),(R+0),4);
}
B77ef7f:{NFSU2_TR(0x77ef7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef84ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef84:L77ef84:{c.instructions+=3;NFSU2_TR(0x77ef84);
u8 U[4];
w4(U+0,u32(0x7a909cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef89:{NFSU2_TR(0x77ef89);
__builtin_memmove(gp(0x8a4370),(R+0),4);
}
B77ef8e:{NFSU2_TR(0x77ef8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77ef93ull));
TAIL_STATIC(0x43db50u,43d);
}
B77ef93:L77ef93:{c.instructions+=3;NFSU2_TR(0x77ef93);
u8 U[4];
w4(U+0,u32(0x7a9088ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77ef98:{NFSU2_TR(0x77ef98);
__builtin_memmove(gp(0x8a4374),(R+0),4);
}
B77ef9d:{NFSU2_TR(0x77ef9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77efa2ull));
TAIL_STATIC(0x43db50u,43d);
}
B77efa2:L77efa2:{c.instructions+=3;NFSU2_TR(0x77efa2);
u8 U[4];
w4(U+0,u32(0x7a9074ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77efa7:{NFSU2_TR(0x77efa7);
__builtin_memmove(gp(0x8a4378),(R+0),4);
}
B77efac:{NFSU2_TR(0x77efac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77efb1ull));
TAIL_STATIC(0x43db50u,43d);
}
B77efb1:L77efb1:{c.instructions+=3;NFSU2_TR(0x77efb1);
u8 U[4];
w4(U+0,u32(0x7a905cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77efb6:{NFSU2_TR(0x77efb6);
__builtin_memmove(gp(0x8a437c),(R+0),4);
}
B77efbb:{NFSU2_TR(0x77efbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77efc0ull));
TAIL_STATIC(0x43db50u,43d);
}
B77efc0:L77efc0:{c.instructions+=3;NFSU2_TR(0x77efc0);
u8 U[4];
w4(U+0,u32(0x7a9048ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77efc5:{NFSU2_TR(0x77efc5);
__builtin_memmove(gp(0x8a4380),(R+0),4);
}
B77efca:{NFSU2_TR(0x77efca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77efcfull));
TAIL_STATIC(0x43db50u,43d);
}
B77efcf:L77efcf:{c.instructions+=3;NFSU2_TR(0x77efcf);
u8 U[4];
w4(U+0,u32(0x7a9034ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77efd4:{NFSU2_TR(0x77efd4);
__builtin_memmove(gp(0x8a4384),(R+0),4);
}
B77efd9:{NFSU2_TR(0x77efd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77efdeull));
TAIL_STATIC(0x43db50u,43d);
}
B77efde:L77efde:{c.instructions+=3;NFSU2_TR(0x77efde);
u8 U[4];
w4(U+0,u32(0x7a9028ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77efe3:{NFSU2_TR(0x77efe3);
__builtin_memmove(gp(0x8a4388),(R+0),4);
}
B77efe8:{NFSU2_TR(0x77efe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77efedull));
TAIL_STATIC(0x43db50u,43d);
}
B77efed:L77efed:{c.instructions+=3;NFSU2_TR(0x77efed);
u8 U[4];
w4(U+0,u32(0x7a9010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B77eff2:{NFSU2_TR(0x77eff2);
__builtin_memmove(gp(0x8a438c),(R+0),4);
}
B77eff7:{NFSU2_TR(0x77eff7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x77effcull));
TAIL_STATIC(0x43db50u,43d);
}
B77effc:L77effc:{c.instructions+=1;NFSU2_TR(0x77effc);
u8 U[4];
w4(U+0,u32(0x7a8ffcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x77f001u,77f);
}
XIT:NFSU2_TR_EXIT(0x77e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
