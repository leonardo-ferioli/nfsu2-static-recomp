#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_405(u8* __restrict R,Cpu& c);
u32 body_40a(u8* __restrict R,Cpu& c);
u32 body_411(u8* __restrict R,Cpu& c);
u32 body_412(u8* __restrict R,Cpu& c);
u32 body_418(u8* __restrict R,Cpu& c);
u32 body_41a(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_574(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x419,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x419,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_419(u8* __restrict R,Cpu& c);
u32 page_419(Cpu& c){return body_419(c.regs.data(),c);}
__attribute__((noinline)) u32 body_419(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x419000:goto L419000;
case 0x419001:c.instructions+=12;goto B419001;
case 0x419003:c.instructions+=11;goto B419003;
case 0x419006:c.instructions+=10;goto B419006;
case 0x41900c:c.instructions+=9;goto B41900c;
case 0x41900f:c.instructions+=8;goto B41900f;
case 0x419010:c.instructions+=7;goto B419010;
case 0x419012:c.instructions+=6;goto B419012;
case 0x419015:c.instructions+=5;goto B419015;
case 0x419016:c.instructions+=4;goto B419016;
case 0x419017:c.instructions+=3;goto B419017;
case 0x41901a:c.instructions+=2;goto B41901a;
case 0x41901e:c.instructions+=1;goto B41901e;
case 0x419023:goto L419023;
case 0x419026:c.instructions+=32;goto B419026;
case 0x419028:c.instructions+=31;goto B419028;
case 0x41902b:c.instructions+=30;goto B41902b;
case 0x41902e:c.instructions+=29;goto B41902e;
case 0x419030:c.instructions+=28;goto B419030;
case 0x419033:c.instructions+=27;goto B419033;
case 0x41903a:c.instructions+=26;goto B41903a;
case 0x419041:c.instructions+=25;goto B419041;
case 0x419043:c.instructions+=24;goto B419043;
case 0x41904a:c.instructions+=23;goto B41904a;
case 0x419050:c.instructions+=22;goto B419050;
case 0x419054:c.instructions+=21;goto B419054;
case 0x41905b:c.instructions+=20;goto B41905b;
case 0x41905d:c.instructions+=19;goto B41905d;
case 0x419064:c.instructions+=18;goto B419064;
case 0x41906b:c.instructions+=17;goto B41906b;
case 0x419072:c.instructions+=16;goto B419072;
case 0x419078:c.instructions+=15;goto B419078;
case 0x41907b:c.instructions+=14;goto B41907b;
case 0x41907e:c.instructions+=13;goto B41907e;
case 0x419081:c.instructions+=12;goto B419081;
case 0x419085:c.instructions+=11;goto B419085;
case 0x419089:c.instructions+=10;goto B419089;
case 0x41908c:c.instructions+=9;goto B41908c;
case 0x419093:c.instructions+=8;goto B419093;
case 0x41909a:c.instructions+=7;goto B41909a;
case 0x41909c:c.instructions+=6;goto B41909c;
case 0x4190a3:c.instructions+=5;goto B4190a3;
case 0x4190a9:c.instructions+=4;goto B4190a9;
case 0x4190af:c.instructions+=3;goto B4190af;
case 0x4190b1:c.instructions+=2;goto B4190b1;
case 0x4190b4:c.instructions+=1;goto B4190b4;
case 0x4190b6:goto L4190b6;
case 0x4190b8:c.instructions+=1;goto B4190b8;
case 0x4190be:goto L4190be;
case 0x4190c4:c.instructions+=22;goto B4190c4;
case 0x4190c8:c.instructions+=21;goto B4190c8;
case 0x4190cc:c.instructions+=20;goto B4190cc;
case 0x4190d3:c.instructions+=19;goto B4190d3;
case 0x4190d9:c.instructions+=18;goto B4190d9;
case 0x4190df:c.instructions+=17;goto B4190df;
case 0x4190e6:c.instructions+=16;goto B4190e6;
case 0x4190ec:c.instructions+=15;goto B4190ec;
case 0x4190f0:c.instructions+=14;goto B4190f0;
case 0x4190f7:c.instructions+=13;goto B4190f7;
case 0x4190fe:c.instructions+=12;goto B4190fe;
case 0x419105:c.instructions+=11;goto B419105;
case 0x419109:c.instructions+=10;goto B419109;
case 0x41910b:c.instructions+=9;goto B41910b;
case 0x419112:c.instructions+=8;goto B419112;
case 0x419116:c.instructions+=7;goto B419116;
case 0x41911d:c.instructions+=6;goto B41911d;
case 0x419124:c.instructions+=5;goto B419124;
case 0x41912a:c.instructions+=4;goto B41912a;
case 0x419130:c.instructions+=3;goto B419130;
case 0x419132:c.instructions+=2;goto B419132;
case 0x419135:c.instructions+=1;goto B419135;
case 0x419137:goto L419137;
case 0x419139:c.instructions+=1;goto B419139;
case 0x41913f:goto L41913f;
case 0x419145:c.instructions+=22;goto B419145;
case 0x419149:c.instructions+=21;goto B419149;
case 0x41914d:c.instructions+=20;goto B41914d;
case 0x419154:c.instructions+=19;goto B419154;
case 0x41915a:c.instructions+=18;goto B41915a;
case 0x419160:c.instructions+=17;goto B419160;
case 0x419167:c.instructions+=16;goto B419167;
case 0x41916d:c.instructions+=15;goto B41916d;
case 0x419171:c.instructions+=14;goto B419171;
case 0x419178:c.instructions+=13;goto B419178;
case 0x41917f:c.instructions+=12;goto B41917f;
case 0x419186:c.instructions+=11;goto B419186;
case 0x41918a:c.instructions+=10;goto B41918a;
case 0x419191:c.instructions+=9;goto B419191;
case 0x419198:c.instructions+=8;goto B419198;
case 0x41919c:c.instructions+=7;goto B41919c;
case 0x4191a3:c.instructions+=6;goto B4191a3;
case 0x4191aa:c.instructions+=5;goto B4191aa;
case 0x4191b0:c.instructions+=4;goto B4191b0;
case 0x4191b6:c.instructions+=3;goto B4191b6;
case 0x4191b8:c.instructions+=2;goto B4191b8;
case 0x4191bb:c.instructions+=1;goto B4191bb;
case 0x4191bd:goto L4191bd;
case 0x4191bf:c.instructions+=1;goto B4191bf;
case 0x4191c5:goto L4191c5;
case 0x4191cb:c.instructions+=22;goto B4191cb;
case 0x4191cf:c.instructions+=21;goto B4191cf;
case 0x4191d3:c.instructions+=20;goto B4191d3;
case 0x4191da:c.instructions+=19;goto B4191da;
case 0x4191e0:c.instructions+=18;goto B4191e0;
case 0x4191e6:c.instructions+=17;goto B4191e6;
case 0x4191ed:c.instructions+=16;goto B4191ed;
case 0x4191f3:c.instructions+=15;goto B4191f3;
case 0x4191fa:c.instructions+=14;goto B4191fa;
case 0x4191fe:c.instructions+=13;goto B4191fe;
case 0x419205:c.instructions+=12;goto B419205;
case 0x419209:c.instructions+=11;goto B419209;
case 0x419210:c.instructions+=10;goto B419210;
case 0x419217:c.instructions+=9;goto B419217;
case 0x41921b:c.instructions+=8;goto B41921b;
case 0x419222:c.instructions+=7;goto B419222;
case 0x419229:c.instructions+=6;goto B419229;
case 0x419230:c.instructions+=5;goto B419230;
case 0x419236:c.instructions+=4;goto B419236;
case 0x41923c:c.instructions+=3;goto B41923c;
case 0x41923e:c.instructions+=2;goto B41923e;
case 0x419241:c.instructions+=1;goto B419241;
case 0x419243:goto L419243;
case 0x419245:c.instructions+=1;goto B419245;
case 0x41924b:goto L41924b;
case 0x41924f:c.instructions+=8;goto B41924f;
case 0x419253:c.instructions+=7;goto B419253;
case 0x419259:c.instructions+=6;goto B419259;
case 0x41925b:c.instructions+=5;goto B41925b;
case 0x41925f:c.instructions+=4;goto B41925f;
case 0x419263:c.instructions+=3;goto B419263;
case 0x419269:c.instructions+=2;goto B419269;
case 0x41926d:c.instructions+=1;goto B41926d;
case 0x419270:goto L419270;
case 0x419274:c.instructions+=11;goto B419274;
case 0x419276:c.instructions+=10;goto B419276;
case 0x41927d:c.instructions+=9;goto B41927d;
case 0x419281:c.instructions+=8;goto B419281;
case 0x419282:c.instructions+=7;goto B419282;
case 0x419283:c.instructions+=6;goto B419283;
case 0x419285:c.instructions+=5;goto B419285;
case 0x419286:c.instructions+=4;goto B419286;
case 0x41928a:c.instructions+=3;goto B41928a;
case 0x41928e:c.instructions+=2;goto B41928e;
case 0x419295:c.instructions+=1;goto B419295;
case 0x41929a:goto L41929a;
case 0x41929d:c.instructions+=4;goto B41929d;
case 0x4192a0:c.instructions+=3;goto B4192a0;
case 0x4192a3:c.instructions+=2;goto B4192a3;
case 0x4192a6:c.instructions+=1;goto B4192a6;
case 0x4192a8:goto L4192a8;
case 0x4192ac:c.instructions+=9;goto B4192ac;
case 0x4192af:c.instructions+=8;goto B4192af;
case 0x4192b1:c.instructions+=7;goto B4192b1;
case 0x4192b3:c.instructions+=6;goto B4192b3;
case 0x4192b6:c.instructions+=5;goto B4192b6;
case 0x4192b9:c.instructions+=4;goto B4192b9;
case 0x4192ba:c.instructions+=3;goto B4192ba;
case 0x4192bc:c.instructions+=2;goto B4192bc;
case 0x4192be:c.instructions+=1;goto B4192be;
case 0x4192c0:goto L4192c0;
case 0x4192c2:goto L4192c2;
case 0x4192c4:c.instructions+=1;goto B4192c4;
case 0x4192c6:goto L4192c6;
case 0x4192ca:c.instructions+=9;goto B4192ca;
case 0x4192cd:c.instructions+=8;goto B4192cd;
case 0x4192cf:c.instructions+=7;goto B4192cf;
case 0x4192d1:c.instructions+=6;goto B4192d1;
case 0x4192d2:c.instructions+=5;goto B4192d2;
case 0x4192d6:c.instructions+=4;goto B4192d6;
case 0x4192d9:c.instructions+=3;goto B4192d9;
case 0x4192da:c.instructions+=2;goto B4192da;
case 0x4192dc:c.instructions+=1;goto B4192dc;
case 0x4192e1:goto L4192e1;
case 0x4192e5:c.instructions+=5;goto B4192e5;
case 0x4192e9:c.instructions+=4;goto B4192e9;
case 0x4192ed:c.instructions+=3;goto B4192ed;
case 0x4192f4:c.instructions+=2;goto B4192f4;
case 0x4192f8:c.instructions+=1;goto B4192f8;
case 0x4192fa:goto L4192fa;
case 0x4192fe:c.instructions+=3;goto B4192fe;
case 0x419302:c.instructions+=2;goto B419302;
case 0x419306:c.instructions+=1;goto B419306;
case 0x419308:goto L419308;
case 0x41930c:c.instructions+=2;goto B41930c;
case 0x419310:c.instructions+=1;goto B419310;
case 0x419312:goto L419312;
case 0x419315:c.instructions+=2;goto B419315;
case 0x419317:c.instructions+=1;goto B419317;
case 0x419319:goto L419319;
case 0x419320:c.instructions+=1;goto B419320;
case 0x419322:goto L419322;
case 0x419324:goto L419324;
case 0x419327:c.instructions+=4;goto B419327;
case 0x41932a:c.instructions+=3;goto B41932a;
case 0x419331:c.instructions+=2;goto B419331;
case 0x419333:c.instructions+=1;goto B419333;
case 0x419335:goto L419335;
case 0x419337:c.instructions+=5;goto B419337;
case 0x419338:c.instructions+=4;goto B419338;
case 0x41933c:c.instructions+=3;goto B41933c;
case 0x41933d:c.instructions+=2;goto B41933d;
case 0x41933f:c.instructions+=1;goto B41933f;
case 0x419342:goto L419342;
case 0x419346:c.instructions+=2;goto B419346;
case 0x41934a:c.instructions+=1;goto B41934a;
case 0x41934c:goto L41934c;
case 0x419352:c.instructions+=1;goto B419352;
case 0x419358:goto L419358;
case 0x41935a:c.instructions+=1;goto B41935a;
case 0x419361:goto L419361;
case 0x419365:c.instructions+=7;goto B419365;
case 0x41936c:c.instructions+=6;goto B41936c;
case 0x41936d:c.instructions+=5;goto B41936d;
case 0x419374:c.instructions+=4;goto B419374;
case 0x419375:c.instructions+=3;goto B419375;
case 0x41937c:c.instructions+=2;goto B41937c;
case 0x41937d:c.instructions+=1;goto B41937d;
case 0x419382:goto L419382;
case 0x419384:c.instructions+=22;goto B419384;
case 0x419387:c.instructions+=21;goto B419387;
case 0x41938c:c.instructions+=20;goto B41938c;
case 0x41938e:c.instructions+=19;goto B41938e;
case 0x419399:c.instructions+=18;goto B419399;
case 0x4193a4:c.instructions+=17;goto B4193a4;
case 0x4193af:c.instructions+=16;goto B4193af;
case 0x4193ba:c.instructions+=15;goto B4193ba;
case 0x4193c5:c.instructions+=14;goto B4193c5;
case 0x4193d0:c.instructions+=13;goto B4193d0;
case 0x4193d8:c.instructions+=12;goto B4193d8;
case 0x4193e0:c.instructions+=11;goto B4193e0;
case 0x4193e7:c.instructions+=10;goto B4193e7;
case 0x4193ee:c.instructions+=9;goto B4193ee;
case 0x4193f5:c.instructions+=8;goto B4193f5;
case 0x4193fc:c.instructions+=7;goto B4193fc;
case 0x419407:c.instructions+=6;goto B419407;
case 0x419412:c.instructions+=5;goto B419412;
case 0x41941a:c.instructions+=4;goto B41941a;
case 0x419422:c.instructions+=3;goto B419422;
case 0x419426:c.instructions+=2;goto B419426;
case 0x41942a:c.instructions+=1;goto B41942a;
case 0x419430:goto L419430;
case 0x419437:c.instructions+=6;goto B419437;
case 0x41943e:c.instructions+=5;goto B41943e;
case 0x419444:c.instructions+=4;goto B419444;
case 0x419448:c.instructions+=3;goto B419448;
case 0x41944a:c.instructions+=2;goto B41944a;
case 0x41944d:c.instructions+=1;goto B41944d;
case 0x419453:goto L419453;
case 0x419456:c.instructions+=9;goto B419456;
case 0x41945d:c.instructions+=8;goto B41945d;
case 0x41945f:c.instructions+=7;goto B41945f;
case 0x419460:c.instructions+=6;goto B419460;
case 0x419462:c.instructions+=5;goto B419462;
case 0x419465:c.instructions+=4;goto B419465;
case 0x419466:c.instructions+=3;goto B419466;
case 0x419468:c.instructions+=2;goto B419468;
case 0x41946a:c.instructions+=1;goto B41946a;
case 0x41946c:goto L41946c;
case 0x41946e:goto L41946e;
case 0x419470:c.instructions+=1;goto B419470;
case 0x419476:goto L419476;
case 0x41947a:c.instructions+=9;goto B41947a;
case 0x41947c:c.instructions+=8;goto B41947c;
case 0x419480:c.instructions+=7;goto B419480;
case 0x419482:c.instructions+=6;goto B419482;
case 0x419484:c.instructions+=5;goto B419484;
case 0x419487:c.instructions+=4;goto B419487;
case 0x419488:c.instructions+=3;goto B419488;
case 0x41948a:c.instructions+=2;goto B41948a;
case 0x41948c:c.instructions+=1;goto B41948c;
case 0x41948e:goto L41948e;
case 0x419490:goto L419490;
case 0x419492:c.instructions+=1;goto B419492;
case 0x419498:goto L419498;
case 0x41949a:c.instructions+=1;goto B41949a;
case 0x41949c:goto L41949c;
case 0x4194a0:c.instructions+=9;goto B4194a0;
case 0x4194a3:c.instructions+=8;goto B4194a3;
case 0x4194a5:c.instructions+=7;goto B4194a5;
case 0x4194a7:c.instructions+=6;goto B4194a7;
case 0x4194a8:c.instructions+=5;goto B4194a8;
case 0x4194af:c.instructions+=4;goto B4194af;
case 0x4194b2:c.instructions+=3;goto B4194b2;
case 0x4194b3:c.instructions+=2;goto B4194b3;
case 0x4194b5:c.instructions+=1;goto B4194b5;
case 0x4194ba:goto L4194ba;
case 0x4194c1:c.instructions+=9;goto B4194c1;
case 0x4194c8:c.instructions+=8;goto B4194c8;
case 0x4194cf:c.instructions+=7;goto B4194cf;
case 0x4194d6:c.instructions+=6;goto B4194d6;
case 0x4194d8:c.instructions+=5;goto B4194d8;
case 0x4194df:c.instructions+=4;goto B4194df;
case 0x4194e1:c.instructions+=3;goto B4194e1;
case 0x4194e8:c.instructions+=2;goto B4194e8;
case 0x4194ea:c.instructions+=1;goto B4194ea;
case 0x4194ec:goto L4194ec;
case 0x4194ef:c.instructions+=3;goto B4194ef;
case 0x4194f3:c.instructions+=2;goto B4194f3;
case 0x4194f7:c.instructions+=1;goto B4194f7;
case 0x4194f9:goto L4194f9;
case 0x4194fd:c.instructions+=2;goto B4194fd;
case 0x419501:c.instructions+=1;goto B419501;
case 0x419503:goto L419503;
case 0x419506:c.instructions+=2;goto B419506;
case 0x419508:c.instructions+=1;goto B419508;
case 0x41950a:goto L41950a;
case 0x419511:c.instructions+=1;goto B419511;
case 0x419513:goto L419513;
case 0x419515:goto L419515;
case 0x419518:c.instructions+=4;goto B419518;
case 0x41951b:c.instructions+=3;goto B41951b;
case 0x419522:c.instructions+=2;goto B419522;
case 0x419524:c.instructions+=1;goto B419524;
case 0x419526:goto L419526;
case 0x419528:c.instructions+=5;goto B419528;
case 0x419529:c.instructions+=4;goto B419529;
case 0x41952d:c.instructions+=3;goto B41952d;
case 0x41952e:c.instructions+=2;goto B41952e;
case 0x419530:c.instructions+=1;goto B419530;
case 0x419533:goto L419533;
case 0x419535:goto L419535;
case 0x41953d:c.instructions+=1;goto B41953d;
case 0x419545:goto L419545;
case 0x419549:c.instructions+=4;goto B419549;
case 0x41954d:c.instructions+=3;goto B41954d;
case 0x419554:c.instructions+=2;goto B419554;
case 0x41955b:c.instructions+=1;goto B41955b;
case 0x41955d:goto L41955d;
case 0x419561:c.instructions+=5;goto B419561;
case 0x419565:c.instructions+=4;goto B419565;
case 0x419566:c.instructions+=3;goto B419566;
case 0x419567:c.instructions+=2;goto B419567;
case 0x419568:c.instructions+=1;goto B419568;
case 0x41956d:goto L41956d;
case 0x419570:c.instructions+=4;goto B419570;
case 0x419577:c.instructions+=3;goto B419577;
case 0x419578:c.instructions+=2;goto B419578;
case 0x41957f:c.instructions+=1;goto B41957f;
case 0x419584:goto L419584;
case 0x419585:c.instructions+=2;goto B419585;
case 0x41958c:c.instructions+=1;goto B41958c;
case 0x419591:goto L419591;
case 0x419595:c.instructions+=3;goto B419595;
case 0x419596:c.instructions+=2;goto B419596;
case 0x41959d:c.instructions+=1;goto B41959d;
case 0x4195a2:goto L4195a2;
case 0x4195a9:c.instructions+=3;goto B4195a9;
case 0x4195aa:c.instructions+=2;goto B4195aa;
case 0x4195b1:c.instructions+=1;goto B4195b1;
case 0x4195b6:goto L4195b6;
case 0x4195bd:c.instructions+=1;goto B4195bd;
case 0x4195c2:goto L4195c2;
case 0x4195c9:c.instructions+=1;goto B4195c9;
case 0x4195ce:goto L4195ce;
case 0x4195d2:c.instructions+=2;goto B4195d2;
case 0x4195d4:c.instructions+=1;goto B4195d4;
case 0x4195d6:goto L4195d6;
case 0x4195da:c.instructions+=8;goto B4195da;
case 0x4195e0:c.instructions+=7;goto B4195e0;
case 0x4195e2:c.instructions+=6;goto B4195e2;
case 0x4195e4:c.instructions+=5;goto B4195e4;
case 0x4195e8:c.instructions+=4;goto B4195e8;
case 0x4195ea:c.instructions+=3;goto B4195ea;
case 0x4195ee:c.instructions+=2;goto B4195ee;
case 0x4195ef:c.instructions+=1;goto B4195ef;
case 0x4195f3:goto L4195f3;
case 0x4195f5:c.instructions+=10;goto B4195f5;
case 0x4195f8:c.instructions+=9;goto B4195f8;
case 0x4195fc:c.instructions+=8;goto B4195fc;
case 0x419603:c.instructions+=7;goto B419603;
case 0x419604:c.instructions+=6;goto B419604;
case 0x419608:c.instructions+=5;goto B419608;
case 0x41960c:c.instructions+=4;goto B41960c;
case 0x419613:c.instructions+=3;goto B419613;
case 0x419616:c.instructions+=2;goto B419616;
case 0x419617:c.instructions+=1;goto B419617;
case 0x41961c:goto L41961c;
case 0x41961e:c.instructions+=4;goto B41961e;
case 0x419622:c.instructions+=3;goto B419622;
case 0x419623:c.instructions+=2;goto B419623;
case 0x419625:c.instructions+=1;goto B419625;
case 0x41962a:goto L41962a;
case 0x41962d:c.instructions+=4;goto B41962d;
case 0x419630:c.instructions+=3;goto B419630;
case 0x419631:c.instructions+=2;goto B419631;
case 0x419634:c.instructions+=1;goto B419634;
case 0x419636:goto L419636;
case 0x41963a:goto L41963a;
case 0x41963e:goto L41963e;
case 0x419642:c.instructions+=6;goto B419642;
case 0x419645:c.instructions+=5;goto B419645;
case 0x419648:c.instructions+=4;goto B419648;
case 0x41964b:c.instructions+=3;goto B41964b;
case 0x41964f:c.instructions+=2;goto B41964f;
case 0x419653:c.instructions+=1;goto B419653;
case 0x419659:goto L419659;
case 0x41965a:c.instructions+=5;goto B41965a;
case 0x41965b:c.instructions+=4;goto B41965b;
case 0x41965c:c.instructions+=3;goto B41965c;
case 0x41965e:c.instructions+=2;goto B41965e;
case 0x41965f:c.instructions+=1;goto B41965f;
case 0x419670:goto L419670;
case 0x419673:c.instructions+=6;goto B419673;
case 0x419674:c.instructions+=5;goto B419674;
case 0x419678:c.instructions+=4;goto B419678;
case 0x419679:c.instructions+=3;goto B419679;
case 0x41967b:c.instructions+=2;goto B41967b;
case 0x41967e:c.instructions+=1;goto B41967e;
case 0x419684:goto L419684;
case 0x419686:c.instructions+=6;goto B419686;
case 0x41968a:c.instructions+=5;goto B41968a;
case 0x41968d:c.instructions+=4;goto B41968d;
case 0x41968e:c.instructions+=3;goto B41968e;
case 0x41968f:c.instructions+=2;goto B41968f;
case 0x419693:c.instructions+=1;goto B419693;
case 0x419695:goto L419695;
case 0x419698:c.instructions+=2;goto B419698;
case 0x41969a:c.instructions+=1;goto B41969a;
case 0x4196a0:goto L4196a0;
case 0x4196a2:c.instructions+=2;goto B4196a2;
case 0x4196a4:c.instructions+=1;goto B4196a4;
case 0x4196a6:goto L4196a6;
case 0x4196a8:c.instructions+=2;goto B4196a8;
case 0x4196aa:c.instructions+=1;goto B4196aa;
case 0x4196ac:goto L4196ac;
case 0x4196af:c.instructions+=2;goto B4196af;
case 0x4196b0:c.instructions+=1;goto B4196b0;
case 0x4196b2:goto L4196b2;
case 0x4196b5:c.instructions+=4;goto B4196b5;
case 0x4196b7:c.instructions+=3;goto B4196b7;
case 0x4196b9:c.instructions+=2;goto B4196b9;
case 0x4196bb:c.instructions+=1;goto B4196bb;
case 0x4196bd:goto L4196bd;
case 0x4196c0:c.instructions+=1;goto B4196c0;
case 0x4196c4:goto L4196c4;
case 0x4196c6:c.instructions+=11;goto B4196c6;
case 0x4196c8:c.instructions+=10;goto B4196c8;
case 0x4196cb:c.instructions+=9;goto B4196cb;
case 0x4196cf:c.instructions+=8;goto B4196cf;
case 0x4196d0:c.instructions+=7;goto B4196d0;
case 0x4196d3:c.instructions+=6;goto B4196d3;
case 0x4196d6:c.instructions+=5;goto B4196d6;
case 0x4196d9:c.instructions+=4;goto B4196d9;
case 0x4196dc:c.instructions+=3;goto B4196dc;
case 0x4196de:c.instructions+=2;goto B4196de;
case 0x4196e0:c.instructions+=1;goto B4196e0;
case 0x4196e2:goto L4196e2;
case 0x4196e5:c.instructions+=6;goto B4196e5;
case 0x4196e7:c.instructions+=5;goto B4196e7;
case 0x4196e9:c.instructions+=4;goto B4196e9;
case 0x4196eb:c.instructions+=3;goto B4196eb;
case 0x4196ed:c.instructions+=2;goto B4196ed;
case 0x4196f0:c.instructions+=1;goto B4196f0;
case 0x4196f2:goto L4196f2;
case 0x4196f5:c.instructions+=5;goto B4196f5;
case 0x4196f7:c.instructions+=4;goto B4196f7;
case 0x4196f8:c.instructions+=3;goto B4196f8;
case 0x4196fa:c.instructions+=2;goto B4196fa;
case 0x4196fe:c.instructions+=1;goto B4196fe;
case 0x419700:goto L419700;
case 0x419703:c.instructions+=2;goto B419703;
case 0x419705:c.instructions+=1;goto B419705;
case 0x41970b:goto L41970b;
case 0x41970e:c.instructions+=23;goto B41970e;
case 0x419714:c.instructions+=22;goto B419714;
case 0x41971b:c.instructions+=21;goto B41971b;
case 0x41971f:c.instructions+=20;goto B41971f;
case 0x419721:c.instructions+=19;goto B419721;
case 0x419723:c.instructions+=18;goto B419723;
case 0x419725:c.instructions+=17;goto B419725;
case 0x41972b:c.instructions+=16;goto B41972b;
case 0x41972e:c.instructions+=15;goto B41972e;
case 0x419734:c.instructions+=14;goto B419734;
case 0x419735:c.instructions+=13;goto B419735;
case 0x419737:c.instructions+=12;goto B419737;
case 0x41973e:c.instructions+=11;goto B41973e;
case 0x419744:c.instructions+=10;goto B419744;
case 0x419746:c.instructions+=9;goto B419746;
case 0x419748:c.instructions+=8;goto B419748;
case 0x41974a:c.instructions+=7;goto B41974a;
case 0x41974d:c.instructions+=6;goto B41974d;
case 0x41974e:c.instructions+=5;goto B41974e;
case 0x419750:c.instructions+=4;goto B419750;
case 0x419756:c.instructions+=3;goto B419756;
case 0x419758:c.instructions+=2;goto B419758;
case 0x41975b:c.instructions+=1;goto B41975b;
case 0x41975d:goto L41975d;
case 0x419767:goto L419767;
case 0x41976d:c.instructions+=2;goto B41976d;
case 0x419771:c.instructions+=1;goto B419771;
case 0x419777:goto L419777;
case 0x41977d:c.instructions+=1;goto B41977d;
case 0x41977f:goto L41977f;
case 0x419783:goto L419783;
case 0x419786:c.instructions+=8;goto B419786;
case 0x419789:c.instructions+=7;goto B419789;
case 0x41978d:c.instructions+=6;goto B41978d;
case 0x41978f:c.instructions+=5;goto B41978f;
case 0x419792:c.instructions+=4;goto B419792;
case 0x419795:c.instructions+=3;goto B419795;
case 0x419798:c.instructions+=2;goto B419798;
case 0x41979d:c.instructions+=1;goto B41979d;
case 0x4197a0:goto L4197a0;
case 0x4197a2:c.instructions+=5;goto B4197a2;
case 0x4197a5:c.instructions+=4;goto B4197a5;
case 0x4197a6:c.instructions+=3;goto B4197a6;
case 0x4197aa:c.instructions+=2;goto B4197aa;
case 0x4197ad:c.instructions+=1;goto B4197ad;
case 0x4197af:goto L4197af;
case 0x4197b2:c.instructions+=2;goto B4197b2;
case 0x4197ba:c.instructions+=1;goto B4197ba;
case 0x4197bc:goto L4197bc;
case 0x4197c0:goto L4197c0;
case 0x4197c3:c.instructions+=13;goto B4197c3;
case 0x4197c5:c.instructions+=12;goto B4197c5;
case 0x4197c9:c.instructions+=11;goto B4197c9;
case 0x4197cb:c.instructions+=10;goto B4197cb;
case 0x4197cd:c.instructions+=9;goto B4197cd;
case 0x4197d0:c.instructions+=8;goto B4197d0;
case 0x4197d2:c.instructions+=7;goto B4197d2;
case 0x4197d3:c.instructions+=6;goto B4197d3;
case 0x4197d5:c.instructions+=5;goto B4197d5;
case 0x4197d8:c.instructions+=4;goto B4197d8;
case 0x4197d9:c.instructions+=3;goto B4197d9;
case 0x4197db:c.instructions+=2;goto B4197db;
case 0x4197dd:c.instructions+=1;goto B4197dd;
case 0x4197df:goto L4197df;
case 0x4197e1:goto L4197e1;
case 0x4197e4:c.instructions+=10;goto B4197e4;
case 0x4197e7:c.instructions+=9;goto B4197e7;
case 0x4197ea:c.instructions+=8;goto B4197ea;
case 0x4197ec:c.instructions+=7;goto B4197ec;
case 0x4197ed:c.instructions+=6;goto B4197ed;
case 0x4197ef:c.instructions+=5;goto B4197ef;
case 0x4197f2:c.instructions+=4;goto B4197f2;
case 0x4197f3:c.instructions+=3;goto B4197f3;
case 0x4197f5:c.instructions+=2;goto B4197f5;
case 0x4197f7:c.instructions+=1;goto B4197f7;
case 0x4197f9:goto L4197f9;
case 0x4197fb:goto L4197fb;
case 0x4197fd:c.instructions+=5;goto B4197fd;
case 0x419801:c.instructions+=4;goto B419801;
case 0x419802:c.instructions+=3;goto B419802;
case 0x419803:c.instructions+=2;goto B419803;
case 0x419807:c.instructions+=1;goto B419807;
case 0x419809:goto L419809;
case 0x41980d:c.instructions+=6;goto B41980d;
case 0x419813:c.instructions+=5;goto B419813;
case 0x419814:c.instructions+=4;goto B419814;
case 0x41981a:c.instructions+=3;goto B41981a;
case 0x41981c:c.instructions+=2;goto B41981c;
case 0x419820:c.instructions+=1;goto B419820;
case 0x419826:goto L419826;
case 0x419828:c.instructions+=3;goto B419828;
case 0x41982a:c.instructions+=2;goto B41982a;
case 0x41982c:c.instructions+=1;goto B41982c;
case 0x419832:goto L419832;
case 0x419838:c.instructions+=2;goto B419838;
case 0x41983c:c.instructions+=1;goto B41983c;
case 0x419840:goto L419840;
case 0x419843:c.instructions+=2;goto B419843;
case 0x419845:c.instructions+=1;goto B419845;
case 0x419847:goto L419847;
case 0x41984d:c.instructions+=4;goto B41984d;
case 0x41984e:c.instructions+=3;goto B41984e;
case 0x419850:c.instructions+=2;goto B419850;
case 0x419852:c.instructions+=1;goto B419852;
case 0x419854:goto L419854;
case 0x41985a:c.instructions+=3;goto B41985a;
case 0x41985b:c.instructions+=2;goto B41985b;
case 0x41985d:c.instructions+=1;goto B41985d;
case 0x419862:goto L419862;
case 0x419868:c.instructions+=5;goto B419868;
case 0x419869:c.instructions+=4;goto B419869;
case 0x41986f:c.instructions+=3;goto B41986f;
case 0x419870:c.instructions+=2;goto B419870;
case 0x419872:c.instructions+=1;goto B419872;
case 0x419874:goto L419874;
case 0x419878:goto L419878;
case 0x41987e:c.instructions+=1;goto B41987e;
case 0x419880:goto L419880;
case 0x419881:c.instructions+=2;goto B419881;
case 0x419887:c.instructions+=1;goto B419887;
case 0x41988b:goto L41988b;
case 0x419891:c.instructions+=1;goto B419891;
case 0x419893:goto L419893;
case 0x419895:goto L419895;
case 0x419897:c.instructions+=3;goto B419897;
case 0x41989d:c.instructions+=2;goto B41989d;
case 0x4198a3:c.instructions+=1;goto B4198a3;
case 0x4198a9:goto L4198a9;
case 0x4198ad:c.instructions+=3;goto B4198ad;
case 0x4198ae:c.instructions+=2;goto B4198ae;
case 0x4198b0:c.instructions+=1;goto B4198b0;
case 0x4198b5:goto L4198b5;
case 0x4198b6:c.instructions+=1;goto B4198b6;
case 0x4198b7:goto L4198b7;
case 0x4198b8:c.instructions+=3;goto B4198b8;
case 0x4198b9:c.instructions+=2;goto B4198b9;
case 0x4198bc:c.instructions+=1;goto B4198bc;
case 0x4198c0:goto L4198c0;
case 0x4198c1:c.instructions+=13;goto B4198c1;
case 0x4198c3:c.instructions+=12;goto B4198c3;
case 0x4198c6:c.instructions+=11;goto B4198c6;
case 0x4198c9:c.instructions+=10;goto B4198c9;
case 0x4198ca:c.instructions+=9;goto B4198ca;
case 0x4198cb:c.instructions+=8;goto B4198cb;
case 0x4198cc:c.instructions+=7;goto B4198cc;
case 0x4198cf:c.instructions+=6;goto B4198cf;
case 0x4198d1:c.instructions+=5;goto B4198d1;
case 0x4198d4:c.instructions+=4;goto B4198d4;
case 0x4198d6:c.instructions+=3;goto B4198d6;
case 0x4198da:c.instructions+=2;goto B4198da;
case 0x4198e2:c.instructions+=1;goto B4198e2;
case 0x4198e4:goto L4198e4;
case 0x4198e6:goto L4198e6;
case 0x4198e9:c.instructions+=1;goto B4198e9;
case 0x4198ef:goto L4198ef;
case 0x4198f0:goto L4198f0;
case 0x4198f3:c.instructions+=10;goto B4198f3;
case 0x4198f7:c.instructions+=9;goto B4198f7;
case 0x4198fa:c.instructions+=8;goto B4198fa;
case 0x4198fb:c.instructions+=7;goto B4198fb;
case 0x4198fd:c.instructions+=6;goto B4198fd;
case 0x4198fe:c.instructions+=5;goto B4198fe;
case 0x419902:c.instructions+=4;goto B419902;
case 0x419905:c.instructions+=3;goto B419905;
case 0x419906:c.instructions+=2;goto B419906;
case 0x419908:c.instructions+=1;goto B419908;
case 0x41990d:goto L41990d;
case 0x419911:c.instructions+=18;goto B419911;
case 0x419914:c.instructions+=17;goto B419914;
case 0x419916:c.instructions+=16;goto B419916;
case 0x41991a:c.instructions+=15;goto B41991a;
case 0x41991e:c.instructions+=14;goto B41991e;
case 0x419922:c.instructions+=13;goto B419922;
case 0x419925:c.instructions+=12;goto B419925;
case 0x419927:c.instructions+=11;goto B419927;
case 0x419929:c.instructions+=10;goto B419929;
case 0x41992b:c.instructions+=9;goto B41992b;
case 0x41992d:c.instructions+=8;goto B41992d;
case 0x41992f:c.instructions+=7;goto B41992f;
case 0x419931:c.instructions+=6;goto B419931;
case 0x419933:c.instructions+=5;goto B419933;
case 0x419935:c.instructions+=4;goto B419935;
case 0x419937:c.instructions+=3;goto B419937;
case 0x419939:c.instructions+=2;goto B419939;
case 0x41993d:c.instructions+=1;goto B41993d;
case 0x41993f:goto L41993f;
case 0x419943:c.instructions+=2;goto B419943;
case 0x419947:c.instructions+=1;goto B419947;
case 0x419949:goto L419949;
case 0x41994c:c.instructions+=2;goto B41994c;
case 0x41994e:c.instructions+=1;goto B41994e;
case 0x419950:goto L419950;
case 0x419957:c.instructions+=4;goto B419957;
case 0x41995a:c.instructions+=3;goto B41995a;
case 0x41995d:c.instructions+=2;goto B41995d;
case 0x419964:c.instructions+=1;goto B419964;
case 0x419966:goto L419966;
case 0x419969:c.instructions+=4;goto B419969;
case 0x41996b:c.instructions+=3;goto B41996b;
case 0x41996e:c.instructions+=2;goto B41996e;
case 0x419975:c.instructions+=1;goto B419975;
case 0x419977:goto L419977;
case 0x419979:goto L419979;
case 0x41997d:c.instructions+=12;goto B41997d;
case 0x419980:c.instructions+=11;goto B419980;
case 0x419984:c.instructions+=10;goto B419984;
case 0x419988:c.instructions+=9;goto B419988;
case 0x41998e:c.instructions+=8;goto B41998e;
case 0x419991:c.instructions+=7;goto B419991;
case 0x419993:c.instructions+=6;goto B419993;
case 0x419997:c.instructions+=5;goto B419997;
case 0x41999b:c.instructions+=4;goto B41999b;
case 0x4199a1:c.instructions+=3;goto B4199a1;
case 0x4199a3:c.instructions+=2;goto B4199a3;
case 0x4199a6:c.instructions+=1;goto B4199a6;
case 0x4199a8:goto L4199a8;
case 0x4199ac:c.instructions+=5;goto B4199ac;
case 0x4199b2:c.instructions+=4;goto B4199b2;
case 0x4199b6:c.instructions+=3;goto B4199b6;
case 0x4199b8:c.instructions+=2;goto B4199b8;
case 0x4199bb:c.instructions+=1;goto B4199bb;
case 0x4199bd:goto L4199bd;
case 0x4199bf:c.instructions+=1;goto B4199bf;
case 0x4199c5:goto L4199c5;
case 0x4199cb:c.instructions+=6;goto B4199cb;
case 0x4199cf:c.instructions+=5;goto B4199cf;
case 0x4199d1:c.instructions+=4;goto B4199d1;
case 0x4199d5:c.instructions+=3;goto B4199d5;
case 0x4199d7:c.instructions+=2;goto B4199d7;
case 0x4199da:c.instructions+=1;goto B4199da;
case 0x4199dc:goto L4199dc;
case 0x4199df:c.instructions+=1;goto B4199df;
case 0x4199e1:goto L4199e1;
case 0x4199e5:c.instructions+=2;goto B4199e5;
case 0x4199e7:c.instructions+=1;goto B4199e7;
case 0x4199e9:goto L4199e9;
case 0x4199ef:c.instructions+=1;goto B4199ef;
case 0x4199f1:goto L4199f1;
case 0x4199f3:goto L4199f3;
case 0x4199f9:c.instructions+=1;goto B4199f9;
case 0x4199fe:goto L4199fe;
case 0x419a03:c.instructions+=11;goto B419a03;
case 0x419a05:c.instructions+=10;goto B419a05;
case 0x419a07:c.instructions+=9;goto B419a07;
case 0x419a09:c.instructions+=8;goto B419a09;
case 0x419a0c:c.instructions+=7;goto B419a0c;
case 0x419a0d:c.instructions+=6;goto B419a0d;
case 0x419a0f:c.instructions+=5;goto B419a0f;
case 0x419a13:c.instructions+=4;goto B419a13;
case 0x419a17:c.instructions+=3;goto B419a17;
case 0x419a1a:c.instructions+=2;goto B419a1a;
case 0x419a1c:c.instructions+=1;goto B419a1c;
case 0x419a22:goto L419a22;
case 0x419a25:c.instructions+=2;goto B419a25;
case 0x419a2a:c.instructions+=1;goto B419a2a;
case 0x419a30:goto L419a30;
case 0x419a34:goto L419a34;
case 0x419a38:c.instructions+=2;goto B419a38;
case 0x419a3a:c.instructions+=1;goto B419a3a;
case 0x419a40:goto L419a40;
case 0x419a42:c.instructions+=6;goto B419a42;
case 0x419a48:c.instructions+=5;goto B419a48;
case 0x419a4b:c.instructions+=4;goto B419a4b;
case 0x419a4f:c.instructions+=3;goto B419a4f;
case 0x419a53:c.instructions+=2;goto B419a53;
case 0x419a57:c.instructions+=1;goto B419a57;
case 0x419a59:goto L419a59;
case 0x419a5d:c.instructions+=2;goto B419a5d;
case 0x419a61:c.instructions+=1;goto B419a61;
case 0x419a63:goto L419a63;
case 0x419a66:c.instructions+=2;goto B419a66;
case 0x419a68:c.instructions+=1;goto B419a68;
case 0x419a6a:goto L419a6a;
case 0x419a71:c.instructions+=1;goto B419a71;
case 0x419a73:goto L419a73;
case 0x419a75:goto L419a75;
case 0x419a78:c.instructions+=4;goto B419a78;
case 0x419a7b:c.instructions+=3;goto B419a7b;
case 0x419a82:c.instructions+=2;goto B419a82;
case 0x419a84:c.instructions+=1;goto B419a84;
case 0x419a86:goto L419a86;
case 0x419a89:c.instructions+=6;goto B419a89;
case 0x419a8b:c.instructions+=5;goto B419a8b;
case 0x419a8d:c.instructions+=4;goto B419a8d;
case 0x419a8e:c.instructions+=3;goto B419a8e;
case 0x419a8f:c.instructions+=2;goto B419a8f;
case 0x419a91:c.instructions+=1;goto B419a91;
case 0x419a94:goto L419a94;
case 0x419a97:c.instructions+=3;goto B419a97;
case 0x419a9a:c.instructions+=2;goto B419a9a;
case 0x419a9e:c.instructions+=1;goto B419a9e;
case 0x419aa0:goto L419aa0;
case 0x419aa3:c.instructions+=2;goto B419aa3;
case 0x419aa6:c.instructions+=1;goto B419aa6;
case 0x419aa8:goto L419aa8;
case 0x419aac:c.instructions+=5;goto B419aac;
case 0x419aae:c.instructions+=4;goto B419aae;
case 0x419ab1:c.instructions+=3;goto B419ab1;
case 0x419ab3:c.instructions+=2;goto B419ab3;
case 0x419ab6:c.instructions+=1;goto B419ab6;
case 0x419ab8:goto L419ab8;
case 0x419ab9:c.instructions+=3;goto B419ab9;
case 0x419abb:c.instructions+=2;goto B419abb;
case 0x419abe:c.instructions+=1;goto B419abe;
case 0x419ac0:goto L419ac0;
case 0x419ac3:c.instructions+=1;goto B419ac3;
case 0x419ac5:goto L419ac5;
case 0x419ac9:c.instructions+=6;goto B419ac9;
case 0x419acb:c.instructions+=5;goto B419acb;
case 0x419ace:c.instructions+=4;goto B419ace;
case 0x419ad0:c.instructions+=3;goto B419ad0;
case 0x419ad2:c.instructions+=2;goto B419ad2;
case 0x419ad5:c.instructions+=1;goto B419ad5;
case 0x419ad7:goto L419ad7;
case 0x419ad8:c.instructions+=2;goto B419ad8;
case 0x419adb:c.instructions+=1;goto B419adb;
case 0x419add:goto L419add;
case 0x419adf:goto L419adf;
case 0x419ae4:goto L419ae4;
case 0x419ae7:c.instructions+=8;goto B419ae7;
case 0x419ae9:c.instructions+=7;goto B419ae9;
case 0x419aea:c.instructions+=6;goto B419aea;
case 0x419aec:c.instructions+=5;goto B419aec;
case 0x419aef:c.instructions+=4;goto B419aef;
case 0x419af0:c.instructions+=3;goto B419af0;
case 0x419af2:c.instructions+=2;goto B419af2;
case 0x419af4:c.instructions+=1;goto B419af4;
case 0x419af6:goto L419af6;
case 0x419af8:goto L419af8;
case 0x419afa:c.instructions+=1;goto B419afa;
case 0x419afc:goto L419afc;
case 0x419aff:c.instructions+=1;goto B419aff;
case 0x419b05:goto L419b05;
case 0x419b07:c.instructions+=6;goto B419b07;
case 0x419b08:c.instructions+=5;goto B419b08;
case 0x419b09:c.instructions+=4;goto B419b09;
case 0x419b0a:c.instructions+=3;goto B419b0a;
case 0x419b0c:c.instructions+=2;goto B419b0c;
case 0x419b0d:c.instructions+=1;goto B419b0d;
case 0x419b10:goto L419b10;
case 0x419b11:c.instructions+=6;goto B419b11;
case 0x419b12:c.instructions+=5;goto B419b12;
case 0x419b15:c.instructions+=4;goto B419b15;
case 0x419b16:c.instructions+=3;goto B419b16;
case 0x419b18:c.instructions+=2;goto B419b18;
case 0x419b19:c.instructions+=1;goto B419b19;
case 0x419b20:goto L419b20;
case 0x419b21:c.instructions+=4;goto B419b21;
case 0x419b23:c.instructions+=3;goto B419b23;
case 0x419b26:c.instructions+=2;goto B419b26;
case 0x419b28:c.instructions+=1;goto B419b28;
case 0x419b2a:goto L419b2a;
case 0x419b2e:c.instructions+=4;goto B419b2e;
case 0x419b32:c.instructions+=3;goto B419b32;
case 0x419b38:c.instructions+=2;goto B419b38;
case 0x419b3e:c.instructions+=1;goto B419b3e;
case 0x419b43:goto L419b43;
case 0x419b45:c.instructions+=2;goto B419b45;
case 0x419b46:c.instructions+=1;goto B419b46;
case 0x419b49:goto L419b49;
case 0x419b4a:c.instructions+=11;goto B419b4a;
case 0x419b4e:c.instructions+=10;goto B419b4e;
case 0x419b4f:c.instructions+=9;goto B419b4f;
case 0x419b53:c.instructions+=8;goto B419b53;
case 0x419b54:c.instructions+=7;goto B419b54;
case 0x419b56:c.instructions+=6;goto B419b56;
case 0x419b58:c.instructions+=5;goto B419b58;
case 0x419b59:c.instructions+=4;goto B419b59;
case 0x419b5b:c.instructions+=3;goto B419b5b;
case 0x419b5c:c.instructions+=2;goto B419b5c;
case 0x419b5e:c.instructions+=1;goto B419b5e;
case 0x419b63:goto L419b63;
case 0x419b65:c.instructions+=2;goto B419b65;
case 0x419b68:c.instructions+=1;goto B419b68;
case 0x419b6a:goto L419b6a;
case 0x419b6e:c.instructions+=3;goto B419b6e;
case 0x419b6f:c.instructions+=2;goto B419b6f;
case 0x419b71:c.instructions+=1;goto B419b71;
case 0x419b76:goto L419b76;
case 0x419b7a:c.instructions+=5;goto B419b7a;
case 0x419b7b:c.instructions+=4;goto B419b7b;
case 0x419b7d:c.instructions+=3;goto B419b7d;
case 0x419b7e:c.instructions+=2;goto B419b7e;
case 0x419b80:c.instructions+=1;goto B419b80;
case 0x419b85:goto L419b85;
case 0x419b89:c.instructions+=7;goto B419b89;
case 0x419b8b:c.instructions+=6;goto B419b8b;
case 0x419b8d:c.instructions+=5;goto B419b8d;
case 0x419b8e:c.instructions+=4;goto B419b8e;
case 0x419b8f:c.instructions+=3;goto B419b8f;
case 0x419b90:c.instructions+=2;goto B419b90;
case 0x419b91:c.instructions+=1;goto B419b91;
case 0x419b94:goto L419b94;
case 0x419b98:c.instructions+=9;goto B419b98;
case 0x419b9c:c.instructions+=8;goto B419b9c;
case 0x419b9e:c.instructions+=7;goto B419b9e;
case 0x419b9f:c.instructions+=6;goto B419b9f;
case 0x419ba0:c.instructions+=5;goto B419ba0;
case 0x419ba1:c.instructions+=4;goto B419ba1;
case 0x419ba7:c.instructions+=3;goto B419ba7;
case 0x419bad:c.instructions+=2;goto B419bad;
case 0x419bae:c.instructions+=1;goto B419bae;
case 0x419bc0:goto L419bc0;
case 0x419bc3:c.instructions+=12;goto B419bc3;
case 0x419bc7:c.instructions+=11;goto B419bc7;
case 0x419bc8:c.instructions+=10;goto B419bc8;
case 0x419bcc:c.instructions+=9;goto B419bcc;
case 0x419bcd:c.instructions+=8;goto B419bcd;
case 0x419bd1:c.instructions+=7;goto B419bd1;
case 0x419bd5:c.instructions+=6;goto B419bd5;
case 0x419bd6:c.instructions+=5;goto B419bd6;
case 0x419bd9:c.instructions+=4;goto B419bd9;
case 0x419bda:c.instructions+=3;goto B419bda;
case 0x419be2:c.instructions+=2;goto B419be2;
case 0x419bea:c.instructions+=1;goto B419bea;
case 0x419bef:goto L419bef;
case 0x419bf3:c.instructions+=7;goto B419bf3;
case 0x419bf7:c.instructions+=6;goto B419bf7;
case 0x419bfb:c.instructions+=5;goto B419bfb;
case 0x419bfd:c.instructions+=4;goto B419bfd;
case 0x419c01:c.instructions+=3;goto B419c01;
case 0x419c03:c.instructions+=2;goto B419c03;
case 0x419c06:c.instructions+=1;goto B419c06;
case 0x419c10:goto L419c10;
case 0x419c13:c.instructions+=12;goto B419c13;
case 0x419c17:c.instructions+=11;goto B419c17;
case 0x419c1b:c.instructions+=10;goto B419c1b;
case 0x419c1e:c.instructions+=9;goto B419c1e;
case 0x419c1f:c.instructions+=8;goto B419c1f;
case 0x419c23:c.instructions+=7;goto B419c23;
case 0x419c24:c.instructions+=6;goto B419c24;
case 0x419c28:c.instructions+=5;goto B419c28;
case 0x419c29:c.instructions+=4;goto B419c29;
case 0x419c2a:c.instructions+=3;goto B419c2a;
case 0x419c32:c.instructions+=2;goto B419c32;
case 0x419c3a:c.instructions+=1;goto B419c3a;
case 0x419c3f:goto L419c3f;
case 0x419c43:c.instructions+=7;goto B419c43;
case 0x419c47:c.instructions+=6;goto B419c47;
case 0x419c4b:c.instructions+=5;goto B419c4b;
case 0x419c4d:c.instructions+=4;goto B419c4d;
case 0x419c51:c.instructions+=3;goto B419c51;
case 0x419c53:c.instructions+=2;goto B419c53;
case 0x419c56:c.instructions+=1;goto B419c56;
case 0x419c60:goto L419c60;
case 0x419c61:c.instructions+=11;goto B419c61;
case 0x419c62:c.instructions+=10;goto B419c62;
case 0x419c63:c.instructions+=9;goto B419c63;
case 0x419c65:c.instructions+=8;goto B419c65;
case 0x419c69:c.instructions+=7;goto B419c69;
case 0x419c70:c.instructions+=6;goto B419c70;
case 0x419c73:c.instructions+=5;goto B419c73;
case 0x419c76:c.instructions+=4;goto B419c76;
case 0x419c77:c.instructions+=3;goto B419c77;
case 0x419c7f:c.instructions+=2;goto B419c7f;
case 0x419c81:c.instructions+=1;goto B419c81;
case 0x419c86:goto L419c86;
case 0x419c87:c.instructions+=2;goto B419c87;
case 0x419c89:c.instructions+=1;goto B419c89;
case 0x419c8e:goto L419c8e;
case 0x419c91:c.instructions+=1;goto B419c91;
case 0x419c93:goto L419c93;
case 0x419c97:c.instructions+=2;goto B419c97;
case 0x419c99:c.instructions+=1;goto B419c99;
case 0x419c9b:goto L419c9b;
case 0x419c9f:c.instructions+=4;goto B419c9f;
case 0x419ca0:c.instructions+=3;goto B419ca0;
case 0x419ca1:c.instructions+=2;goto B419ca1;
case 0x419ca3:c.instructions+=1;goto B419ca3;
case 0x419ca8:goto L419ca8;
case 0x419ca9:c.instructions+=3;goto B419ca9;
case 0x419caa:c.instructions+=2;goto B419caa;
case 0x419cab:c.instructions+=1;goto B419cab;
case 0x419cae:goto L419cae;
case 0x419cb2:c.instructions+=4;goto B419cb2;
case 0x419cb3:c.instructions+=3;goto B419cb3;
case 0x419cb4:c.instructions+=2;goto B419cb4;
case 0x419cb5:c.instructions+=1;goto B419cb5;
case 0x419cc0:goto L419cc0;
case 0x419cc1:c.instructions+=11;goto B419cc1;
case 0x419cc2:c.instructions+=10;goto B419cc2;
case 0x419cc3:c.instructions+=9;goto B419cc3;
case 0x419cc5:c.instructions+=8;goto B419cc5;
case 0x419cc9:c.instructions+=7;goto B419cc9;
case 0x419cd0:c.instructions+=6;goto B419cd0;
case 0x419cd3:c.instructions+=5;goto B419cd3;
case 0x419cd6:c.instructions+=4;goto B419cd6;
case 0x419cd7:c.instructions+=3;goto B419cd7;
case 0x419cdf:c.instructions+=2;goto B419cdf;
case 0x419ce1:c.instructions+=1;goto B419ce1;
case 0x419ce6:goto L419ce6;
case 0x419ce7:c.instructions+=2;goto B419ce7;
case 0x419ce9:c.instructions+=1;goto B419ce9;
case 0x419cee:goto L419cee;
case 0x419cf1:c.instructions+=1;goto B419cf1;
case 0x419cf3:goto L419cf3;
case 0x419cf7:c.instructions+=2;goto B419cf7;
case 0x419cf9:c.instructions+=1;goto B419cf9;
case 0x419cfb:goto L419cfb;
case 0x419cfc:c.instructions+=2;goto B419cfc;
case 0x419cfe:c.instructions+=1;goto B419cfe;
case 0x419d03:goto L419d03;
case 0x419d04:c.instructions+=3;goto B419d04;
case 0x419d05:c.instructions+=2;goto B419d05;
case 0x419d06:c.instructions+=1;goto B419d06;
case 0x419d09:goto L419d09;
case 0x419d0d:c.instructions+=4;goto B419d0d;
case 0x419d0e:c.instructions+=3;goto B419d0e;
case 0x419d0f:c.instructions+=2;goto B419d0f;
case 0x419d10:c.instructions+=1;goto B419d10;
case 0x419d20:goto L419d20;
case 0x419d21:c.instructions+=15;goto B419d21;
case 0x419d23:c.instructions+=14;goto B419d23;
case 0x419d26:c.instructions+=13;goto B419d26;
case 0x419d29:c.instructions+=12;goto B419d29;
case 0x419d2c:c.instructions+=11;goto B419d2c;
case 0x419d2d:c.instructions+=10;goto B419d2d;
case 0x419d2e:c.instructions+=9;goto B419d2e;
case 0x419d31:c.instructions+=8;goto B419d31;
case 0x419d32:c.instructions+=7;goto B419d32;
case 0x419d34:c.instructions+=6;goto B419d34;
case 0x419d35:c.instructions+=5;goto B419d35;
case 0x419d37:c.instructions+=4;goto B419d37;
case 0x419d38:c.instructions+=3;goto B419d38;
case 0x419d3a:c.instructions+=2;goto B419d3a;
case 0x419d3c:c.instructions+=1;goto B419d3c;
case 0x419d41:goto L419d41;
case 0x419d44:c.instructions+=1;goto B419d44;
case 0x419d4a:goto L419d4a;
case 0x419d4c:c.instructions+=1;goto B419d4c;
case 0x419d52:goto L419d52;
case 0x419d56:c.instructions+=11;goto B419d56;
case 0x419d5a:c.instructions+=10;goto B419d5a;
case 0x419d5d:c.instructions+=9;goto B419d5d;
case 0x419d60:c.instructions+=8;goto B419d60;
case 0x419d63:c.instructions+=7;goto B419d63;
case 0x419d64:c.instructions+=6;goto B419d64;
case 0x419d65:c.instructions+=5;goto B419d65;
case 0x419d66:c.instructions+=4;goto B419d66;
case 0x419d6a:c.instructions+=3;goto B419d6a;
case 0x419d6b:c.instructions+=2;goto B419d6b;
case 0x419d6d:c.instructions+=1;goto B419d6d;
case 0x419d72:goto L419d72;
case 0x419d75:c.instructions+=8;goto B419d75;
case 0x419d78:c.instructions+=7;goto B419d78;
case 0x419d79:c.instructions+=6;goto B419d79;
case 0x419d7a:c.instructions+=5;goto B419d7a;
case 0x419d7b:c.instructions+=4;goto B419d7b;
case 0x419d7f:c.instructions+=3;goto B419d7f;
case 0x419d80:c.instructions+=2;goto B419d80;
case 0x419d82:c.instructions+=1;goto B419d82;
case 0x419d87:goto L419d87;
case 0x419d8b:c.instructions+=22;goto B419d8b;
case 0x419d8f:c.instructions+=21;goto B419d8f;
case 0x419d92:c.instructions+=20;goto B419d92;
case 0x419d93:c.instructions+=19;goto B419d93;
case 0x419d97:c.instructions+=18;goto B419d97;
case 0x419d9b:c.instructions+=17;goto B419d9b;
case 0x419d9f:c.instructions+=16;goto B419d9f;
case 0x419da3:c.instructions+=15;goto B419da3;
case 0x419da7:c.instructions+=14;goto B419da7;
case 0x419dab:c.instructions+=13;goto B419dab;
case 0x419daf:c.instructions+=12;goto B419daf;
case 0x419db3:c.instructions+=11;goto B419db3;
case 0x419db7:c.instructions+=10;goto B419db7;
case 0x419dba:c.instructions+=9;goto B419dba;
case 0x419dbd:c.instructions+=8;goto B419dbd;
case 0x419dc0:c.instructions+=7;goto B419dc0;
case 0x419dc3:c.instructions+=6;goto B419dc3;
case 0x419dc5:c.instructions+=5;goto B419dc5;
case 0x419dc8:c.instructions+=4;goto B419dc8;
case 0x419dc9:c.instructions+=3;goto B419dc9;
case 0x419dca:c.instructions+=2;goto B419dca;
case 0x419dcb:c.instructions+=1;goto B419dcb;
case 0x419dd0:goto L419dd0;
case 0x419dd3:c.instructions+=7;goto B419dd3;
case 0x419dd5:c.instructions+=6;goto B419dd5;
case 0x419dd6:c.instructions+=5;goto B419dd6;
case 0x419dd7:c.instructions+=4;goto B419dd7;
case 0x419dd8:c.instructions+=3;goto B419dd8;
case 0x419dda:c.instructions+=2;goto B419dda;
case 0x419ddb:c.instructions+=1;goto B419ddb;
case 0x419dde:goto L419dde;
case 0x419de1:c.instructions+=8;goto B419de1;
case 0x419de4:c.instructions+=7;goto B419de4;
case 0x419de5:c.instructions+=6;goto B419de5;
case 0x419de8:c.instructions+=5;goto B419de8;
case 0x419de9:c.instructions+=4;goto B419de9;
case 0x419dea:c.instructions+=3;goto B419dea;
case 0x419deb:c.instructions+=2;goto B419deb;
case 0x419def:c.instructions+=1;goto B419def;
case 0x419df4:goto L419df4;
case 0x419df6:c.instructions+=6;goto B419df6;
case 0x419df7:c.instructions+=5;goto B419df7;
case 0x419df8:c.instructions+=4;goto B419df8;
case 0x419df9:c.instructions+=3;goto B419df9;
case 0x419dfb:c.instructions+=2;goto B419dfb;
case 0x419dfc:c.instructions+=1;goto B419dfc;
case 0x419dff:goto L419dff;
case 0x419e00:c.instructions+=6;goto B419e00;
case 0x419e01:c.instructions+=5;goto B419e01;
case 0x419e03:c.instructions+=4;goto B419e03;
case 0x419e04:c.instructions+=3;goto B419e04;
case 0x419e06:c.instructions+=2;goto B419e06;
case 0x419e07:c.instructions+=1;goto B419e07;
case 0x419e10:goto L419e10;
case 0x419e11:c.instructions+=9;goto B419e11;
case 0x419e13:c.instructions+=8;goto B419e13;
case 0x419e16:c.instructions+=7;goto B419e16;
case 0x419e1c:c.instructions+=6;goto B419e1c;
case 0x419e1d:c.instructions+=5;goto B419e1d;
case 0x419e1e:c.instructions+=4;goto B419e1e;
case 0x419e21:c.instructions+=3;goto B419e21;
case 0x419e23:c.instructions+=2;goto B419e23;
case 0x419e24:c.instructions+=1;goto B419e24;
case 0x419e2a:goto L419e2a;
case 0x419e2d:c.instructions+=5;goto B419e2d;
case 0x419e2f:c.instructions+=4;goto B419e2f;
case 0x419e31:c.instructions+=3;goto B419e31;
case 0x419e34:c.instructions+=2;goto B419e34;
case 0x419e38:c.instructions+=1;goto B419e38;
case 0x419e3e:goto L419e3e;
case 0x419e42:c.instructions+=10;goto B419e42;
case 0x419e45:c.instructions+=9;goto B419e45;
case 0x419e4b:c.instructions+=8;goto B419e4b;
case 0x419e4f:c.instructions+=7;goto B419e4f;
case 0x419e53:c.instructions+=6;goto B419e53;
case 0x419e56:c.instructions+=5;goto B419e56;
case 0x419e5a:c.instructions+=4;goto B419e5a;
case 0x419e5c:c.instructions+=3;goto B419e5c;
case 0x419e5f:c.instructions+=2;goto B419e5f;
case 0x419e62:c.instructions+=1;goto B419e62;
case 0x419e64:goto L419e64;
case 0x419e67:c.instructions+=5;goto B419e67;
case 0x419e69:c.instructions+=4;goto B419e69;
case 0x419e6b:c.instructions+=3;goto B419e6b;
case 0x419e71:c.instructions+=2;goto B419e71;
case 0x419e75:c.instructions+=1;goto B419e75;
case 0x419e77:goto L419e77;
case 0x419e79:c.instructions+=6;goto B419e79;
case 0x419e7c:c.instructions+=5;goto B419e7c;
case 0x419e80:c.instructions+=4;goto B419e80;
case 0x419e84:c.instructions+=3;goto B419e84;
case 0x419e86:c.instructions+=2;goto B419e86;
case 0x419e89:c.instructions+=1;goto B419e89;
case 0x419e8b:goto L419e8b;
case 0x419e8c:c.instructions+=3;goto B419e8c;
case 0x419e8f:c.instructions+=2;goto B419e8f;
case 0x419e91:c.instructions+=1;goto B419e91;
case 0x419e93:goto L419e93;
case 0x419e95:goto L419e95;
case 0x419e97:goto L419e97;
case 0x419e9a:c.instructions+=2;goto B419e9a;
case 0x419e9c:c.instructions+=1;goto B419e9c;
case 0x419e9e:goto L419e9e;
case 0x419ea2:goto L419ea2;
case 0x419ea4:c.instructions+=6;goto B419ea4;
case 0x419ea7:c.instructions+=5;goto B419ea7;
case 0x419eab:c.instructions+=4;goto B419eab;
case 0x419eae:c.instructions+=3;goto B419eae;
case 0x419eb0:c.instructions+=2;goto B419eb0;
case 0x419eb3:c.instructions+=1;goto B419eb3;
case 0x419eb5:goto L419eb5;
case 0x419eb6:c.instructions+=3;goto B419eb6;
case 0x419eb9:c.instructions+=2;goto B419eb9;
case 0x419ebb:c.instructions+=1;goto B419ebb;
case 0x419ebd:goto L419ebd;
case 0x419ebf:goto L419ebf;
case 0x419ec2:c.instructions+=1;goto B419ec2;
case 0x419ec4:goto L419ec4;
case 0x419ec8:c.instructions+=7;goto B419ec8;
case 0x419ec9:c.instructions+=6;goto B419ec9;
case 0x419ecb:c.instructions+=5;goto B419ecb;
case 0x419ecd:c.instructions+=4;goto B419ecd;
case 0x419ed0:c.instructions+=3;goto B419ed0;
case 0x419ed2:c.instructions+=2;goto B419ed2;
case 0x419ed4:c.instructions+=1;goto B419ed4;
case 0x419ed7:goto L419ed7;
case 0x419edb:c.instructions+=11;goto B419edb;
case 0x419edf:c.instructions+=10;goto B419edf;
case 0x419ee2:c.instructions+=9;goto B419ee2;
case 0x419ee6:c.instructions+=8;goto B419ee6;
case 0x419ee9:c.instructions+=7;goto B419ee9;
case 0x419eea:c.instructions+=6;goto B419eea;
case 0x419eec:c.instructions+=5;goto B419eec;
case 0x419eed:c.instructions+=4;goto B419eed;
case 0x419ef1:c.instructions+=3;goto B419ef1;
case 0x419ef4:c.instructions+=2;goto B419ef4;
case 0x419ef5:c.instructions+=1;goto B419ef5;
case 0x419efa:goto L419efa;
case 0x419efd:c.instructions+=10;goto B419efd;
case 0x419f01:c.instructions+=9;goto B419f01;
case 0x419f02:c.instructions+=8;goto B419f02;
case 0x419f04:c.instructions+=7;goto B419f04;
case 0x419f05:c.instructions+=6;goto B419f05;
case 0x419f09:c.instructions+=5;goto B419f09;
case 0x419f0c:c.instructions+=4;goto B419f0c;
case 0x419f0d:c.instructions+=3;goto B419f0d;
case 0x419f0f:c.instructions+=2;goto B419f0f;
case 0x419f13:c.instructions+=1;goto B419f13;
case 0x419f18:goto L419f18;
case 0x419f1b:c.instructions+=10;goto B419f1b;
case 0x419f1f:c.instructions+=9;goto B419f1f;
case 0x419f20:c.instructions+=8;goto B419f20;
case 0x419f22:c.instructions+=7;goto B419f22;
case 0x419f23:c.instructions+=6;goto B419f23;
case 0x419f2a:c.instructions+=5;goto B419f2a;
case 0x419f2d:c.instructions+=4;goto B419f2d;
case 0x419f2e:c.instructions+=3;goto B419f2e;
case 0x419f30:c.instructions+=2;goto B419f30;
case 0x419f34:c.instructions+=1;goto B419f34;
case 0x419f39:goto L419f39;
case 0x419f40:c.instructions+=18;goto B419f40;
case 0x419f44:c.instructions+=17;goto B419f44;
case 0x419f48:c.instructions+=16;goto B419f48;
case 0x419f4c:c.instructions+=15;goto B419f4c;
case 0x419f4d:c.instructions+=14;goto B419f4d;
case 0x419f51:c.instructions+=13;goto B419f51;
case 0x419f52:c.instructions+=12;goto B419f52;
case 0x419f56:c.instructions+=11;goto B419f56;
case 0x419f5a:c.instructions+=10;goto B419f5a;
case 0x419f5e:c.instructions+=9;goto B419f5e;
case 0x419f62:c.instructions+=8;goto B419f62;
case 0x419f66:c.instructions+=7;goto B419f66;
case 0x419f6d:c.instructions+=6;goto B419f6d;
case 0x419f71:c.instructions+=5;goto B419f71;
case 0x419f75:c.instructions+=4;goto B419f75;
case 0x419f77:c.instructions+=3;goto B419f77;
case 0x419f7b:c.instructions+=2;goto B419f7b;
case 0x419f7d:c.instructions+=1;goto B419f7d;
case 0x419f82:goto L419f82;
case 0x419f86:c.instructions+=4;goto B419f86;
case 0x419f87:c.instructions+=3;goto B419f87;
case 0x419f8b:c.instructions+=2;goto B419f8b;
case 0x419f8c:c.instructions+=1;goto B419f8c;
case 0x419f91:goto L419f91;
case 0x419f95:c.instructions+=16;goto B419f95;
case 0x419f99:c.instructions+=15;goto B419f99;
case 0x419f9d:c.instructions+=14;goto B419f9d;
case 0x419fa1:c.instructions+=13;goto B419fa1;
case 0x419fa5:c.instructions+=12;goto B419fa5;
case 0x419fa9:c.instructions+=11;goto B419fa9;
case 0x419fad:c.instructions+=10;goto B419fad;
case 0x419fb1:c.instructions+=9;goto B419fb1;
case 0x419fb2:c.instructions+=8;goto B419fb2;
case 0x419fb6:c.instructions+=7;goto B419fb6;
case 0x419fba:c.instructions+=6;goto B419fba;
case 0x419fbb:c.instructions+=5;goto B419fbb;
case 0x419fbf:c.instructions+=4;goto B419fbf;
case 0x419fca:c.instructions+=3;goto B419fca;
case 0x419fd2:c.instructions+=2;goto B419fd2;
case 0x419fd3:c.instructions+=1;goto B419fd3;
case 0x419fd8:goto L419fd8;
case 0x419fdc:c.instructions+=11;goto B419fdc;
case 0x419fe0:c.instructions+=10;goto B419fe0;
case 0x419fe3:c.instructions+=9;goto B419fe3;
case 0x419fe7:c.instructions+=8;goto B419fe7;
case 0x419feb:c.instructions+=7;goto B419feb;
case 0x419fed:c.instructions+=6;goto B419fed;
case 0x419ff1:c.instructions+=5;goto B419ff1;
case 0x419ff5:c.instructions+=4;goto B419ff5;
case 0x419ff7:c.instructions+=3;goto B419ff7;
case 0x419ff9:c.instructions+=2;goto B419ff9;
case 0x419ffd:c.instructions+=1;goto B419ffd;
default:missing_instruction(c.pc);}
B419000:L419000:{c.instructions+=13;NFSU2_TR(0x419000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419001:{NFSU2_TR(0x419001);
__builtin_memmove((R+20),(R+16),4);
}
B419003:{NFSU2_TR(0x419003);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B419006:{NFSU2_TR(0x419006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x174ull))));
}
B41900c:{NFSU2_TR(0x41900c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41900f:{NFSU2_TR(0x41900f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419010:{NFSU2_TR(0x419010);
__builtin_memmove((R+12),(R+4),4);
}
B419012:{NFSU2_TR(0x419012);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419015:{NFSU2_TR(0x419015);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419016:{NFSU2_TR(0x419016);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419017:{NFSU2_TR(0x419017);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B41901a:{NFSU2_TR(0x41901a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41901e:{NFSU2_TR(0x41901e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419023ull));
TAIL_STATIC(0x5b5330u,5b5);
}
B419023:L419023:{c.instructions+=33;NFSU2_TR(0x419023);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419026:{NFSU2_TR(0x419026);
__builtin_memmove((R+4),(R+0),4);
}
B419028:{NFSU2_TR(0x419028);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B41902b:{NFSU2_TR(0x41902b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B41902e:{NFSU2_TR(0x41902e);
__builtin_memmove((R+4),(R+0),4);
}
B419030:{NFSU2_TR(0x419030);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B419033:{NFSU2_TR(0x419033);
u8 U[16];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B41903a:{NFSU2_TR(0x41903a);
{u32 ea_=u32(r4(R+12)+r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419041:{NFSU2_TR(0x419041);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B419043:{NFSU2_TR(0x419043);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41904a:{NFSU2_TR(0x41904a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B419050:{NFSU2_TR(0x419050);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419054:{NFSU2_TR(0x419054);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x149ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B41905b:{NFSU2_TR(0x41905b);
__builtin_memmove((R+8),(R+0),4);
}
B41905d:{NFSU2_TR(0x41905d);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419064:{NFSU2_TR(0x419064);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B41906b:{NFSU2_TR(0x41906b);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419072:{NFSU2_TR(0x419072);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419078:{NFSU2_TR(0x419078);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B41907b:{NFSU2_TR(0x41907b);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B41907e:{NFSU2_TR(0x41907e);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B419081:{NFSU2_TR(0x419081);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419085:{NFSU2_TR(0x419085);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419089:{NFSU2_TR(0x419089);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B41908c:{NFSU2_TR(0x41908c);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(252u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419093:{NFSU2_TR(0x419093);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41909a:{NFSU2_TR(0x41909a);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41909c:{NFSU2_TR(0x41909c);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4190a3:{NFSU2_TR(0x4190a3);
{u32 ea_=u32(u32(7879824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4190a9:{NFSU2_TR(0x4190a9);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4190af:{NFSU2_TR(0x4190af);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4190b1:{NFSU2_TR(0x4190b1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4190b4:{NFSU2_TR(0x4190b4);
if(r1(R+518)){{goto L4190be;}}
}
B4190b6:L4190b6:{c.instructions+=2;NFSU2_TR(0x4190b6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4190b8:{NFSU2_TR(0x4190b8);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4190be:L4190be:{c.instructions+=23;NFSU2_TR(0x4190be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4190c4:{NFSU2_TR(0x4190c4);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4190c8:{NFSU2_TR(0x4190c8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4190cc:{NFSU2_TR(0x4190cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4190d3:{NFSU2_TR(0x4190d3);
{u32 ea_=u32(r4(R+4)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4190d9:{NFSU2_TR(0x4190d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4190df:{NFSU2_TR(0x4190df);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4190e6:{NFSU2_TR(0x4190e6);
{u32 ea_=u32(r4(R+4)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4190ec:{NFSU2_TR(0x4190ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4190f0:{NFSU2_TR(0x4190f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4190f7:{NFSU2_TR(0x4190f7);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4190fe:{NFSU2_TR(0x4190fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B419105:{NFSU2_TR(0x419105);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419109:{NFSU2_TR(0x419109);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41910b:{NFSU2_TR(0x41910b);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B419112:{NFSU2_TR(0x419112);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419116:{NFSU2_TR(0x419116);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(260u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B41911d:{NFSU2_TR(0x41911d);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B419124:{NFSU2_TR(0x419124);
{u32 ea_=u32(u32(7879824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41912a:{NFSU2_TR(0x41912a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B419130:{NFSU2_TR(0x419130);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419132:{NFSU2_TR(0x419132);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419135:{NFSU2_TR(0x419135);
if(r1(R+518)){{goto L41913f;}}
}
B419137:L419137:{c.instructions+=2;NFSU2_TR(0x419137);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419139:{NFSU2_TR(0x419139);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41913f:L41913f:{c.instructions+=23;NFSU2_TR(0x41913f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419145:{NFSU2_TR(0x419145);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B419149:{NFSU2_TR(0x419149);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41914d:{NFSU2_TR(0x41914d);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419154:{NFSU2_TR(0x419154);
{u32 ea_=u32(r4(R+4)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41915a:{NFSU2_TR(0x41915a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419160:{NFSU2_TR(0x419160);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419167:{NFSU2_TR(0x419167);
{u32 ea_=u32(r4(R+4)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41916d:{NFSU2_TR(0x41916d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419171:{NFSU2_TR(0x419171);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B419178:{NFSU2_TR(0x419178);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41917f:{NFSU2_TR(0x41917f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B419186:{NFSU2_TR(0x419186);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41918a:{NFSU2_TR(0x41918a);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(260u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419191:{NFSU2_TR(0x419191);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B419198:{NFSU2_TR(0x419198);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41919c:{NFSU2_TR(0x41919c);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(264u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4191a3:{NFSU2_TR(0x4191a3);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4191aa:{NFSU2_TR(0x4191aa);
{u32 ea_=u32(u32(7879824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4191b0:{NFSU2_TR(0x4191b0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4191b6:{NFSU2_TR(0x4191b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4191b8:{NFSU2_TR(0x4191b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4191bb:{NFSU2_TR(0x4191bb);
if(r1(R+518)){{goto L4191c5;}}
}
B4191bd:L4191bd:{c.instructions+=2;NFSU2_TR(0x4191bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4191bf:{NFSU2_TR(0x4191bf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4191c5:L4191c5:{c.instructions+=23;NFSU2_TR(0x4191c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4191cb:{NFSU2_TR(0x4191cb);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4191cf:{NFSU2_TR(0x4191cf);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4191d3:{NFSU2_TR(0x4191d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4191da:{NFSU2_TR(0x4191da);
{u32 ea_=u32(r4(R+4)+u32(240u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4191e0:{NFSU2_TR(0x4191e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4191e6:{NFSU2_TR(0x4191e6);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4191ed:{NFSU2_TR(0x4191ed);
{u32 ea_=u32(r4(R+4)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4191f3:{NFSU2_TR(0x4191f3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4191fa:{NFSU2_TR(0x4191fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4191fe:{NFSU2_TR(0x4191fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B419205:{NFSU2_TR(0x419205);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419209:{NFSU2_TR(0x419209);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419210:{NFSU2_TR(0x419210);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B419217:{NFSU2_TR(0x419217);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41921b:{NFSU2_TR(0x41921b);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+12)+u32(268u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B419222:{NFSU2_TR(0x419222);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419229:{NFSU2_TR(0x419229);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B419230:{NFSU2_TR(0x419230);
{u32 ea_=u32(u32(7879824u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B419236:{NFSU2_TR(0x419236);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B41923c:{NFSU2_TR(0x41923c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41923e:{NFSU2_TR(0x41923e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419241:{NFSU2_TR(0x419241);
if(r1(R+518)){{goto L41924b;}}
}
B419243:L419243:{c.instructions+=2;NFSU2_TR(0x419243);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419245:{NFSU2_TR(0x419245);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41924b:L41924b:{c.instructions+=9;NFSU2_TR(0x41924b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41924f:{NFSU2_TR(0x41924f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B419253:{NFSU2_TR(0x419253);
{u32 ea_=u32(u32(7879828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419259:{NFSU2_TR(0x419259);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B41925b:{NFSU2_TR(0x41925b);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41925f:{NFSU2_TR(0x41925f);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419263:{NFSU2_TR(0x419263);
{u32 ea_=u32(u32(7879828u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B419269:{NFSU2_TR(0x419269);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41926d:{NFSU2_TR(0x41926d);
__builtin_memmove((R+4),(R+4),4);
}
B419270:L419270:{c.instructions+=12;NFSU2_TR(0x419270);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419274:{NFSU2_TR(0x419274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B419276:{NFSU2_TR(0x419276);
u8 U[12];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41927d:{NFSU2_TR(0x41927d);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419281:{NFSU2_TR(0x419281);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419282:{NFSU2_TR(0x419282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419283:{NFSU2_TR(0x419283);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419285:{NFSU2_TR(0x419285);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419286:{NFSU2_TR(0x419286);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41928a:{NFSU2_TR(0x41928a);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41928e:{NFSU2_TR(0x41928e);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419295:{NFSU2_TR(0x419295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41929aull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41929a:L41929a:{c.instructions+=5;NFSU2_TR(0x41929a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B41929d:{NFSU2_TR(0x41929d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4192a0:{NFSU2_TR(0x4192a0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4192a3:{NFSU2_TR(0x4192a3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x18ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4192a6:{NFSU2_TR(0x4192a6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419270u);}goto L419270;}}
}
B4192a8:L4192a8:{c.instructions+=10;NFSU2_TR(0x4192a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4192ac:{NFSU2_TR(0x4192ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4192af:{NFSU2_TR(0x4192af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4192b1:{NFSU2_TR(0x4192b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4192b3:{NFSU2_TR(0x4192b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B4192b6:{NFSU2_TR(0x4192b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+24),(U+0),4);
}
B4192b9:{NFSU2_TR(0x4192b9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4192ba:{NFSU2_TR(0x4192ba);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B4192bc:{NFSU2_TR(0x4192bc);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4192be:{NFSU2_TR(0x4192be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4192c2;}}
}
B4192c0:L4192c0:{c.instructions+=1;NFSU2_TR(0x4192c0);
__builtin_memmove((R+4),(R+24),4);
}
B4192c2:L4192c2:{c.instructions+=2;NFSU2_TR(0x4192c2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4192c4:{NFSU2_TR(0x4192c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4192fa;}}
}
B4192c6:L4192c6:{c.instructions+=10;NFSU2_TR(0x4192c6);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B4192ca:{NFSU2_TR(0x4192ca);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4192cd:{NFSU2_TR(0x4192cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4192cf:{NFSU2_TR(0x4192cf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4192d1:{NFSU2_TR(0x4192d1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4192d2:{NFSU2_TR(0x4192d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4192d6:{NFSU2_TR(0x4192d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4192d9:{NFSU2_TR(0x4192d9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4192da:{NFSU2_TR(0x4192da);
__builtin_memmove((R+4),(R+0),4);
}
B4192dc:{NFSU2_TR(0x4192dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4192e1ull));
TAIL_STATIC(0x4122c0u,412);
}
B4192e1:L4192e1:{c.instructions+=6;NFSU2_TR(0x4192e1);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4192e5:{NFSU2_TR(0x4192e5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4192e9:{NFSU2_TR(0x4192e9);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4192ed:{NFSU2_TR(0x4192ed);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4192f4:{NFSU2_TR(0x4192f4);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4192f8:{NFSU2_TR(0x4192f8);
{goto L419361;}
}
B4192fa:L4192fa:{c.instructions+=4;NFSU2_TR(0x4192fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B4192fe:{NFSU2_TR(0x4192fe);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B419302:{NFSU2_TR(0x419302);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B419306:{NFSU2_TR(0x419306);
if(r1(R+518)){{goto L41934c;}}
}
B419308:L419308:{c.instructions+=3;NFSU2_TR(0x419308);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B41930c:{NFSU2_TR(0x41930c);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B419310:{NFSU2_TR(0x419310);
if(r1(R+518)){{goto L41934c;}}
}
B419312:L419312:{c.instructions+=3;NFSU2_TR(0x419312);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B419315:{NFSU2_TR(0x419315);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B419317:{NFSU2_TR(0x419317);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L419322;}}
}
B419319:L419319:{c.instructions+=2;NFSU2_TR(0x419319);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B419320:{NFSU2_TR(0x419320);
{goto L419324;}
}
B419322:L419322:{c.instructions+=1;NFSU2_TR(0x419322);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419324:L419324:{c.instructions+=5;NFSU2_TR(0x419324);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B419327:{NFSU2_TR(0x419327);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B41932a:{NFSU2_TR(0x41932a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B419331:{NFSU2_TR(0x419331);
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
B419333:{NFSU2_TR(0x419333);
if(r1(R+518)){{goto L41934c;}}
}
B419335:L419335:{c.instructions+=6;NFSU2_TR(0x419335);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B419337:{NFSU2_TR(0x419337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419338:{NFSU2_TR(0x419338);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41933c:{NFSU2_TR(0x41933c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41933d:{NFSU2_TR(0x41933d);
__builtin_memmove((R+4),(R+28),4);
}
B41933f:{NFSU2_TR(0x41933f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419342ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B419342:L419342:{c.instructions+=3;NFSU2_TR(0x419342);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419346:{NFSU2_TR(0x419346);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41934a:{NFSU2_TR(0x41934a);
{goto L419358;}
}
B41934c:L41934c:{c.instructions+=2;NFSU2_TR(0x41934c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419352:{NFSU2_TR(0x419352);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419358:L419358:{c.instructions+=2;NFSU2_TR(0x419358);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B41935a:{NFSU2_TR(0x41935a);
{u32 ea_=u32(r4(R+16)+u32(232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419361:L419361:{c.instructions+=8;NFSU2_TR(0x419361);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419365:{NFSU2_TR(0x419365);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41936c:{NFSU2_TR(0x41936c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41936d:{NFSU2_TR(0x41936d);
u8 U[4];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419374:{NFSU2_TR(0x419374);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419375:{NFSU2_TR(0x419375);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41937c:{NFSU2_TR(0x41937c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41937d:{NFSU2_TR(0x41937d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419382ull));
TAIL_STATIC(0x43ceb0u,43c);
}
B419382:L419382:{c.instructions+=23;NFSU2_TR(0x419382);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B419384:{NFSU2_TR(0x419384);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B419387:{NFSU2_TR(0x419387);
w4(R+0,u32(0x1ull));
}
B41938c:{NFSU2_TR(0x41938c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41938e:{NFSU2_TR(0x41938e);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419399:{NFSU2_TR(0x419399);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4193a4:{NFSU2_TR(0x4193a4);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4193af:{NFSU2_TR(0x4193af);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4193ba:{NFSU2_TR(0x4193ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x114ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4193c5:{NFSU2_TR(0x4193c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4193d0:{NFSU2_TR(0x4193d0);
u8 U[6];
w4(U+0,u32(u32(u32(0x11cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4193d8:{NFSU2_TR(0x4193d8);
u8 U[6];
w4(U+0,u32(u32(u32(0x11eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4193e0:{NFSU2_TR(0x4193e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4193e7:{NFSU2_TR(0x4193e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4193ee:{NFSU2_TR(0x4193ee);
u8 U[8];
w4(U+0,u32(u32(u32(0x128ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4193f5:{NFSU2_TR(0x4193f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4193fc:{NFSU2_TR(0x4193fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x144ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419407:{NFSU2_TR(0x419407);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419412:{NFSU2_TR(0x419412);
u8 U[6];
w4(U+0,u32(u32(u32(0x14cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),2);
s2(u32(r4(U+0)),r2(U+4));
}
B41941a:{NFSU2_TR(0x41941a);
u8 U[6];
w4(U+0,u32(u32(u32(0x14eull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B419422:{NFSU2_TR(0x419422);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419426:{NFSU2_TR(0x419426);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41942a:{NFSU2_TR(0x41942a);
__builtin_memmove((R+12),(R+12),4);
}
B419430:L419430:{c.instructions+=7;NFSU2_TR(0x419430);
{u32 ea_=u32(r4(R+8)+r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419437:{NFSU2_TR(0x419437);
u8 U[12];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B41943e:{NFSU2_TR(0x41943e);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419444:{NFSU2_TR(0x419444);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419448:{NFSU2_TR(0x419448);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B41944a:{NFSU2_TR(0x41944a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B41944d:{NFSU2_TR(0x41944d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41963e;}}
}
B419453:L419453:{c.instructions+=10;NFSU2_TR(0x419453);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419456:{NFSU2_TR(0x419456);
u8 U[16];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B41945d:{NFSU2_TR(0x41945d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B41945f:{NFSU2_TR(0x41945f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B419460:{NFSU2_TR(0x419460);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B419462:{NFSU2_TR(0x419462);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B419465:{NFSU2_TR(0x419465);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B419466:{NFSU2_TR(0x419466);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+24))));
}
B419468:{NFSU2_TR(0x419468);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41946a:{NFSU2_TR(0x41946a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L41946e;}}
}
B41946c:L41946c:{c.instructions+=1;NFSU2_TR(0x41946c);
__builtin_memmove((R+4),(R+0),4);
}
B41946e:L41946e:{c.instructions+=2;NFSU2_TR(0x41946e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B419470:{NFSU2_TR(0x419470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41963e;}}
}
B419476:L419476:{c.instructions+=10;NFSU2_TR(0x419476);
u8 U[12];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B41947a:{NFSU2_TR(0x41947a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B41947c:{NFSU2_TR(0x41947c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419480:{NFSU2_TR(0x419480);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B419482:{NFSU2_TR(0x419482);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B419484:{NFSU2_TR(0x419484);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B419487:{NFSU2_TR(0x419487);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B419488:{NFSU2_TR(0x419488);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B41948a:{NFSU2_TR(0x41948a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41948c:{NFSU2_TR(0x41948c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L419490;}}
}
B41948e:L41948e:{c.instructions+=1;NFSU2_TR(0x41948e);
__builtin_memmove((R+0),(R+8),4);
}
B419490:L419490:{c.instructions+=2;NFSU2_TR(0x419490);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B419492:{NFSU2_TR(0x419492);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L41963e;}}
}
B419498:L419498:{c.instructions+=2;NFSU2_TR(0x419498);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B41949a:{NFSU2_TR(0x41949a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4194ec;}}
}
B41949c:L41949c:{c.instructions+=10;NFSU2_TR(0x41949c);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B4194a0:{NFSU2_TR(0x4194a0);
{u32 ea_=u32(r4(R+12)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4194a3:{NFSU2_TR(0x4194a3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4194a5:{NFSU2_TR(0x4194a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4194a7:{NFSU2_TR(0x4194a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4194a8:{NFSU2_TR(0x4194a8);
u8 U[4];
w4(U+0,u32(u32(u32(0x15cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4194af:{NFSU2_TR(0x4194af);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4194b2:{NFSU2_TR(0x4194b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4194b3:{NFSU2_TR(0x4194b3);
__builtin_memmove((R+4),(R+12),4);
}
B4194b5:{NFSU2_TR(0x4194b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4194baull));
TAIL_STATIC(0x4122c0u,412);
}
B4194ba:L4194ba:{c.instructions+=10;NFSU2_TR(0x4194ba);
{u32 ea_=u32(r4(R+16)+u32(340u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4194c1:{NFSU2_TR(0x4194c1);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4194c8:{NFSU2_TR(0x4194c8);
u8 U[12];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4194cf:{NFSU2_TR(0x4194cf);
{u32 ea_=u32(r4(R+16)+u32(336u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4194d6:{NFSU2_TR(0x4194d6);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4194d8:{NFSU2_TR(0x4194d8);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4194df:{NFSU2_TR(0x4194df);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4194e1:{NFSU2_TR(0x4194e1);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4194e8:{NFSU2_TR(0x4194e8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4194ea:{NFSU2_TR(0x4194ea);
{goto L41955d;}
}
B4194ec:L4194ec:{c.instructions+=4;NFSU2_TR(0x4194ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4194ef:{NFSU2_TR(0x4194ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B4194f3:{NFSU2_TR(0x4194f3);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4194f7:{NFSU2_TR(0x4194f7);
if(r1(R+518)){{goto L419535;}}
}
B4194f9:L4194f9:{c.instructions+=3;NFSU2_TR(0x4194f9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B4194fd:{NFSU2_TR(0x4194fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B419501:{NFSU2_TR(0x419501);
if(r1(R+518)){{goto L419535;}}
}
B419503:L419503:{c.instructions+=3;NFSU2_TR(0x419503);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B419506:{NFSU2_TR(0x419506);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B419508:{NFSU2_TR(0x419508);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L419513;}}
}
B41950a:L41950a:{c.instructions+=2;NFSU2_TR(0x41950a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B419511:{NFSU2_TR(0x419511);
{goto L419515;}
}
B419513:L419513:{c.instructions+=1;NFSU2_TR(0x419513);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419515:L419515:{c.instructions+=5;NFSU2_TR(0x419515);
w4(R+8,u32(s32(s16(r2(R+4)))));
}
B419518:{NFSU2_TR(0x419518);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41951b:{NFSU2_TR(0x41951b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B419522:{NFSU2_TR(0x419522);
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
B419524:{NFSU2_TR(0x419524);
if(r1(R+518)){{goto L419535;}}
}
B419526:L419526:{c.instructions+=6;NFSU2_TR(0x419526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B419528:{NFSU2_TR(0x419528);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419529:{NFSU2_TR(0x419529);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B41952d:{NFSU2_TR(0x41952d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41952e:{NFSU2_TR(0x41952e);
__builtin_memmove((R+4),(R+12),4);
}
B419530:{NFSU2_TR(0x419530);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419533ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B419533:L419533:{c.instructions+=1;NFSU2_TR(0x419533);
{goto L419545;}
}
B419535:L419535:{c.instructions+=2;NFSU2_TR(0x419535);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B41953d:{NFSU2_TR(0x41953d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419545:L419545:{c.instructions+=5;NFSU2_TR(0x419545);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419549:{NFSU2_TR(0x419549);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41954d:{NFSU2_TR(0x41954d);
u8 U[12];
w4(U+0,u32(u32(u32(0x160ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B419554:{NFSU2_TR(0x419554);
{u32 ea_=u32(r4(R+28)+r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41955b:{NFSU2_TR(0x41955b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B41955d:L41955d:{c.instructions+=6;NFSU2_TR(0x41955d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419561:{NFSU2_TR(0x419561);
u8 U[16];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B419565:{NFSU2_TR(0x419565);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419566:{NFSU2_TR(0x419566);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419567:{NFSU2_TR(0x419567);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419568:{NFSU2_TR(0x419568);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41956dull));
TAIL_STATIC(0x43ceb0u,43c);
}
B41956d:L41956d:{c.instructions+=5;NFSU2_TR(0x41956d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B419570:{NFSU2_TR(0x419570);
u8 U[12];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B419577:{NFSU2_TR(0x419577);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419578:{NFSU2_TR(0x419578);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41957f:{NFSU2_TR(0x41957f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419584ull));
TAIL_STATIC(0x574b10u,574);
}
B419584:L419584:{c.instructions+=3;NFSU2_TR(0x419584);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419585:{NFSU2_TR(0x419585);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41958c:{NFSU2_TR(0x41958c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419591ull));
TAIL_STATIC(0x574b50u,574);
}
B419591:L419591:{c.instructions+=4;NFSU2_TR(0x419591);
u8 U[12];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B419595:{NFSU2_TR(0x419595);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419596:{NFSU2_TR(0x419596);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B41959d:{NFSU2_TR(0x41959d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4195a2ull));
TAIL_STATIC(0x574b90u,574);
}
B4195a2:L4195a2:{c.instructions+=4;NFSU2_TR(0x4195a2);
u8 U[12];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B4195a9:{NFSU2_TR(0x4195a9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4195aa:{NFSU2_TR(0x4195aa);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4195b1:{NFSU2_TR(0x4195b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4195b6ull));
TAIL_STATIC(0x574bd0u,574);
}
B4195b6:L4195b6:{c.instructions+=2;NFSU2_TR(0x4195b6);
u8 U[4];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4195bd:{NFSU2_TR(0x4195bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4195c2ull));
TAIL_STATIC(0x574830u,574);
}
B4195c2:L4195c2:{c.instructions+=2;NFSU2_TR(0x4195c2);
u8 U[4];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4195c9:{NFSU2_TR(0x4195c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4195ceull));
TAIL_STATIC(0x574830u,574);
}
B4195ce:L4195ce:{c.instructions+=3;NFSU2_TR(0x4195ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4195d2:{NFSU2_TR(0x4195d2);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+4)));
w4(U+8,u32(u32(r4(R+24))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B4195d4:{NFSU2_TR(0x4195d4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L41963a;}}
}
B4195d6:L4195d6:{c.instructions+=9;NFSU2_TR(0x4195d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4195da:{NFSU2_TR(0x4195da);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4195e0:{NFSU2_TR(0x4195e0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4195e2:{NFSU2_TR(0x4195e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4195e4:{NFSU2_TR(0x4195e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4195e8:{NFSU2_TR(0x4195e8);
w1(R+512,u8((r4(R+28))<(r4(R+24))));
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B4195ea:{NFSU2_TR(0x4195ea);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B4195ee:{NFSU2_TR(0x4195ee);
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
B4195ef:{NFSU2_TR(0x4195ef);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4195f3:L4195f3:{c.instructions+=11;NFSU2_TR(0x4195f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4195f5:{NFSU2_TR(0x4195f5);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4195f8:{NFSU2_TR(0x4195f8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4195fc:{NFSU2_TR(0x4195fc);
{u32 ea_=u32(r4(R+8)+r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419603:{NFSU2_TR(0x419603);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419604:{NFSU2_TR(0x419604);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419608:{NFSU2_TR(0x419608);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41960c:{NFSU2_TR(0x41960c);
u8 U[4];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419613:{NFSU2_TR(0x419613);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419616:{NFSU2_TR(0x419616);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419617:{NFSU2_TR(0x419617);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41961cull));
TAIL_STATIC(0x574c30u,574);
}
B41961c:L41961c:{c.instructions+=5;NFSU2_TR(0x41961c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41961e:{NFSU2_TR(0x41961e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419622:{NFSU2_TR(0x419622);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419623:{NFSU2_TR(0x419623);
__builtin_memmove((R+4),(R+24),4);
}
B419625:{NFSU2_TR(0x419625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41962aull));
TAIL_STATIC(0x4123c0u,412);
}
B41962a:L41962a:{c.instructions+=5;NFSU2_TR(0x41962a);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B41962d:{NFSU2_TR(0x41962d);
w1(R+512,carry<u32>(r4(R+12),u32(0x4ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B419630:{NFSU2_TR(0x419630);
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
B419631:{NFSU2_TR(0x419631);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419634:{NFSU2_TR(0x419634);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4195f3u);}goto L4195f3;}}
}
B419636:L419636:{c.instructions+=1;NFSU2_TR(0x419636);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B41963a:L41963a:{c.instructions+=1;NFSU2_TR(0x41963a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B41963e:L41963e:{c.instructions+=7;NFSU2_TR(0x41963e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419642:{NFSU2_TR(0x419642);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B419645:{NFSU2_TR(0x419645);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B419648:{NFSU2_TR(0x419648);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x20ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B41964b:{NFSU2_TR(0x41964b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41964f:{NFSU2_TR(0x41964f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419653:{NFSU2_TR(0x419653);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419430u);}goto L419430;}}
}
B419659:L419659:{c.instructions+=6;NFSU2_TR(0x419659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B41965a:{NFSU2_TR(0x41965a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B41965b:{NFSU2_TR(0x41965b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B41965c:{NFSU2_TR(0x41965c);
__builtin_memmove((R+16),(R+20),4);
}
B41965e:{NFSU2_TR(0x41965e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41965f:{NFSU2_TR(0x41965f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419670:L419670:{c.instructions+=7;NFSU2_TR(0x419670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B419673:{NFSU2_TR(0x419673);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419674:{NFSU2_TR(0x419674);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B419678:{NFSU2_TR(0x419678);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419679:{NFSU2_TR(0x419679);
__builtin_memmove((R+24),(R+4),4);
}
B41967b:{NFSU2_TR(0x41967b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+8)));
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B41967e:{NFSU2_TR(0x41967e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4198b7;}}
}
B419684:L419684:{c.instructions+=7;NFSU2_TR(0x419684);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B419686:{NFSU2_TR(0x419686);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B41968a:{NFSU2_TR(0x41968a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B41968d:{NFSU2_TR(0x41968d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41968e:{NFSU2_TR(0x41968e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41968f:{NFSU2_TR(0x41968f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419693:{NFSU2_TR(0x419693);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4196b2;}}
}
B419695:L419695:{c.instructions+=3;NFSU2_TR(0x419695);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419698:{NFSU2_TR(0x419698);
__builtin_memmove((R+20),(R+12),4);
}
B41969a:{NFSU2_TR(0x41969a);
__builtin_memmove((R+12),(R+12),4);
}
B4196a0:L4196a0:{c.instructions+=3;NFSU2_TR(0x4196a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4196a2:{NFSU2_TR(0x4196a2);
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
B4196a4:{NFSU2_TR(0x4196a4);
if(r1(R+518)){{goto L4196ac;}}
}
B4196a6:L4196a6:{c.instructions+=3;NFSU2_TR(0x4196a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4196a8:{NFSU2_TR(0x4196a8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4196aa:{NFSU2_TR(0x4196aa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4196acull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4196ac:L4196ac:{c.instructions+=3;NFSU2_TR(0x4196ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4196af:{NFSU2_TR(0x4196af);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4196b0:{NFSU2_TR(0x4196b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4196a0u);}goto L4196a0;}}
}
B4196b2:L4196b2:{c.instructions+=5;NFSU2_TR(0x4196b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4196b5:{NFSU2_TR(0x4196b5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B4196b7:{NFSU2_TR(0x4196b7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4196b9:{NFSU2_TR(0x4196b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4196bb:{NFSU2_TR(0x4196bb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4196e2;}}
}
B4196bd:L4196bd:{c.instructions+=2;NFSU2_TR(0x4196bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4196c0:{NFSU2_TR(0x4196c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B4196c4:L4196c4:{c.instructions+=12;NFSU2_TR(0x4196c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4196c6:{NFSU2_TR(0x4196c6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4196c8:{NFSU2_TR(0x4196c8);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4196cb:{NFSU2_TR(0x4196cb);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4196cf:{NFSU2_TR(0x4196cf);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4196d0:{NFSU2_TR(0x4196d0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B4196d3:{NFSU2_TR(0x4196d3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B4196d6:{NFSU2_TR(0x4196d6);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4196d9:{NFSU2_TR(0x4196d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4196dc:{NFSU2_TR(0x4196dc);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B4196de:{NFSU2_TR(0x4196de);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4196e0:{NFSU2_TR(0x4196e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4196c4u);}goto L4196c4;}}
}
B4196e2:L4196e2:{c.instructions+=7;NFSU2_TR(0x4196e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4196e5:{NFSU2_TR(0x4196e5);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B4196e7:{NFSU2_TR(0x4196e7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4196e9:{NFSU2_TR(0x4196e9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4196eb:{NFSU2_TR(0x4196eb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4196ed:{NFSU2_TR(0x4196ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4196f0:{NFSU2_TR(0x4196f0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L419700;}}
}
B4196f2:L4196f2:{c.instructions+=6;NFSU2_TR(0x4196f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4196f5:{NFSU2_TR(0x4196f5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B4196f7:{NFSU2_TR(0x4196f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4196f8:{NFSU2_TR(0x4196f8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4196fa:{NFSU2_TR(0x4196fa);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4196fe:{NFSU2_TR(0x4196fe);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4196f2u);}goto L4196f2;}}
}
B419700:L419700:{c.instructions+=3;NFSU2_TR(0x419700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419703:{NFSU2_TR(0x419703);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B419705:{NFSU2_TR(0x419705);
if(r1(R+518)){{goto L419895;}}
}
B41970b:L41970b:{c.instructions+=24;NFSU2_TR(0x41970b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41970e:{NFSU2_TR(0x41970e);
{u32 ea_=u32(r4(R+24)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419714:{NFSU2_TR(0x419714);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41971b:{NFSU2_TR(0x41971b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41971f:{NFSU2_TR(0x41971f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419721:{NFSU2_TR(0x419721);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B419723:{NFSU2_TR(0x419723);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B419725:{NFSU2_TR(0x419725);
{u32 ea_=u32(r4(R+24)+u32(852u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B41972b:{NFSU2_TR(0x41972b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B41972e:{NFSU2_TR(0x41972e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419734:{NFSU2_TR(0x419734);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B419735:{NFSU2_TR(0x419735);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B419737:{NFSU2_TR(0x419737);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B41973e:{NFSU2_TR(0x41973e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B419744:{NFSU2_TR(0x419744);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419746:{NFSU2_TR(0x419746);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B419748:{NFSU2_TR(0x419748);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41974a:{NFSU2_TR(0x41974a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B41974d:{NFSU2_TR(0x41974d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B41974e:{NFSU2_TR(0x41974e);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B419750:{NFSU2_TR(0x419750);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B419756:{NFSU2_TR(0x419756);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419758:{NFSU2_TR(0x419758);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B41975b:{NFSU2_TR(0x41975b);
if(r1(R+514)){{goto L419767;}}
}
B41975d:L41975d:{c.instructions+=1;NFSU2_TR(0x41975d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
w4(U+4,u32(0xc7c34f80ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419767:L419767:{c.instructions+=3;NFSU2_TR(0x419767);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B41976d:{NFSU2_TR(0x41976d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419771:{NFSU2_TR(0x419771);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4198a9;}}
}
B419777:L419777:{c.instructions+=2;NFSU2_TR(0x419777);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((R+20),(U+0),4);
}
B41977d:{NFSU2_TR(0x41977d);
{goto L419783;}
}
B41977f:L41977f:{c.instructions+=1;NFSU2_TR(0x41977f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B419783:L419783:{c.instructions+=9;NFSU2_TR(0x419783);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419786:{NFSU2_TR(0x419786);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B419789:{NFSU2_TR(0x419789);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B41978d:{NFSU2_TR(0x41978d);
w1(R+0,u8(u32(r1(R+0))-u32(r1(R+12))));
}
B41978f:{NFSU2_TR(0x41978f);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+20)),r1(U+0));
}
B419792:{NFSU2_TR(0x419792);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B419795:{NFSU2_TR(0x419795);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419798:{NFSU2_TR(0x419798);
w4(R+4,u32(0x5ull));
}
B41979d:{NFSU2_TR(0x41979d);
__builtin_memmove((R+4),(R+4),4);
}
B4197a0:L4197a0:{c.instructions+=6;NFSU2_TR(0x4197a0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4197a2:{NFSU2_TR(0x4197a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B4197a5:{NFSU2_TR(0x4197a5);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4197a6:{NFSU2_TR(0x4197a6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4197aa:{NFSU2_TR(0x4197aa);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4197ad:{NFSU2_TR(0x4197ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4197a0u);}goto L4197a0;}}
}
B4197af:L4197af:{c.instructions+=3;NFSU2_TR(0x4197af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4197b2:{NFSU2_TR(0x4197b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4197ba:{NFSU2_TR(0x4197ba);
{goto L4197c0;}
}
B4197bc:L4197bc:{c.instructions+=1;NFSU2_TR(0x4197bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4197c0:L4197c0:{c.instructions+=14;NFSU2_TR(0x4197c0);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))-u32(r1(R+12))));
s1(u32(r4(U+0)),r1(U+4));
}
B4197c3:{NFSU2_TR(0x4197c3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B4197c5:{NFSU2_TR(0x4197c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(s32(s8(r1(U+4)))));
}
B4197c9:{NFSU2_TR(0x4197c9);
w1(R+8,u8(u32(r1(R+8))-u32(r1(R+12))));
}
B4197cb:{NFSU2_TR(0x4197cb);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B4197cd:{NFSU2_TR(0x4197cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4197d0:{NFSU2_TR(0x4197d0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4197d2:{NFSU2_TR(0x4197d2);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4197d3:{NFSU2_TR(0x4197d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4197d5:{NFSU2_TR(0x4197d5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+12),(U+1),1);
}
B4197d8:{NFSU2_TR(0x4197d8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B4197d9:{NFSU2_TR(0x4197d9);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+12))));
}
B4197db:{NFSU2_TR(0x4197db);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4197dd:{NFSU2_TR(0x4197dd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4197e1;}}
}
B4197df:L4197df:{c.instructions+=1;NFSU2_TR(0x4197df);
__builtin_memmove((R+4),(R+28),4);
}
B4197e1:L4197e1:{c.instructions+=11;NFSU2_TR(0x4197e1);
w4(R+28,u32(s32(s8(r1(R+8)))));
}
B4197e4:{NFSU2_TR(0x4197e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4197e7:{NFSU2_TR(0x4197e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4197ea:{NFSU2_TR(0x4197ea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4197ec:{NFSU2_TR(0x4197ec);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4197ed:{NFSU2_TR(0x4197ed);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4197ef:{NFSU2_TR(0x4197ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+8),(U+1),1);
}
B4197f2:{NFSU2_TR(0x4197f2);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4197f3:{NFSU2_TR(0x4197f3);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+28))));
}
B4197f5:{NFSU2_TR(0x4197f5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4197f7:{NFSU2_TR(0x4197f7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4197fb;}}
}
B4197f9:L4197f9:{c.instructions+=1;NFSU2_TR(0x4197f9);
__builtin_memmove((R+4),(R+8),4);
}
B4197fb:L4197fb:{c.instructions+=6;NFSU2_TR(0x4197fb);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B4197fd:{NFSU2_TR(0x4197fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419801:{NFSU2_TR(0x419801);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B419802:{NFSU2_TR(0x419802);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B419803:{NFSU2_TR(0x419803);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419807:{NFSU2_TR(0x419807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4197bcu);}goto L4197bc;}}
}
B419809:L419809:{c.instructions+=7;NFSU2_TR(0x419809);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B41980d:{NFSU2_TR(0x41980d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419813:{NFSU2_TR(0x419813);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B419814:{NFSU2_TR(0x419814);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x80ull))));
}
B41981a:{NFSU2_TR(0x41981a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B41981c:{NFSU2_TR(0x41981c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419820:{NFSU2_TR(0x419820);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x41977fu);}goto L41977f;}}
}
B419826:L419826:{c.instructions+=4;NFSU2_TR(0x419826);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B419828:{NFSU2_TR(0x419828);
__builtin_memmove((R+0),(R+4),4);
}
B41982a:{NFSU2_TR(0x41982a);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B41982c:{NFSU2_TR(0x41982c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4198a9;}}
}
B419832:L419832:{c.instructions+=3;NFSU2_TR(0x419832);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419838:{NFSU2_TR(0x419838);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41983c:{NFSU2_TR(0x41983c);
__builtin_memmove((R+16),(R+16),4);
}
B419840:L419840:{c.instructions+=3;NFSU2_TR(0x419840);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B419843:{NFSU2_TR(0x419843);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B419845:{NFSU2_TR(0x419845);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L419880;}}
}
B419847:L419847:{c.instructions+=5;NFSU2_TR(0x419847);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B41984d:{NFSU2_TR(0x41984d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B41984e:{NFSU2_TR(0x41984e);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B419850:{NFSU2_TR(0x419850);
__builtin_memmove((R+12),(R+20),4);
}
B419852:{NFSU2_TR(0x419852);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L419878;}}
}
B419854:L419854:{c.instructions+=4;NFSU2_TR(0x419854);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x80ull))));
__builtin_memmove((R+0),(U+0),4);
}
B41985a:{NFSU2_TR(0x41985a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B41985b:{NFSU2_TR(0x41985b);
__builtin_memmove((R+4),(R+28),4);
}
B41985d:{NFSU2_TR(0x41985d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419862ull));
TAIL_STATIC(0x40a4d0u,40a);
}
B419862:L419862:{c.instructions+=6;NFSU2_TR(0x419862);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419868:{NFSU2_TR(0x419868);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B419869:{NFSU2_TR(0x419869);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x80ull))));
}
B41986f:{NFSU2_TR(0x41986f);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B419870:{NFSU2_TR(0x419870);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B419872:{NFSU2_TR(0x419872);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419854u);}goto L419854;}}
}
B419874:L419874:{c.instructions+=1;NFSU2_TR(0x419874);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B419878:L419878:{c.instructions+=2;NFSU2_TR(0x419878);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B41987e:{NFSU2_TR(0x41987e);
{goto L41988b;}
}
B419880:L419880:{c.instructions+=3;NFSU2_TR(0x419880);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B419881:{NFSU2_TR(0x419881);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x80ull))));
}
B419887:{NFSU2_TR(0x419887);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B41988b:L41988b:{c.instructions+=2;NFSU2_TR(0x41988b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B419891:{NFSU2_TR(0x419891);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419840u);}goto L419840;}}
}
B419893:L419893:{c.instructions+=1;NFSU2_TR(0x419893);
{goto L4198a9;}
}
B419895:L419895:{c.instructions+=4;NFSU2_TR(0x419895);
w1(R+0,u8(u32(r1(R+0))|u32(u8(0xffull))));
}
B419897:{NFSU2_TR(0x419897);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xadull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B41989d:{NFSU2_TR(0x41989d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaeull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4198a3:{NFSU2_TR(0x4198a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4198a9:L4198a9:{c.instructions+=4;NFSU2_TR(0x4198a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4198ad:{NFSU2_TR(0x4198ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198ae:{NFSU2_TR(0x4198ae);
__builtin_memmove((R+4),(R+24),4);
}
B4198b0:{NFSU2_TR(0x4198b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4198b5ull));
TAIL_STATIC(0x418ae0u,418);
}
B4198b5:L4198b5:{c.instructions+=2;NFSU2_TR(0x4198b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4198b6:{NFSU2_TR(0x4198b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4198b7:L4198b7:{c.instructions+=4;NFSU2_TR(0x4198b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4198b8:{NFSU2_TR(0x4198b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4198b9:{NFSU2_TR(0x4198b9);
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
B4198bc:{NFSU2_TR(0x4198bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4198c0:L4198c0:{c.instructions+=14;NFSU2_TR(0x4198c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198c1:{NFSU2_TR(0x4198c1);
__builtin_memmove((R+20),(R+16),4);
}
B4198c3:{NFSU2_TR(0x4198c3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4198c6:{NFSU2_TR(0x4198c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4198c9:{NFSU2_TR(0x4198c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198ca:{NFSU2_TR(0x4198ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198cb:{NFSU2_TR(0x4198cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198cc:{NFSU2_TR(0x4198cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4198cf:{NFSU2_TR(0x4198cf);
__builtin_memmove((R+8),(R+4),4);
}
B4198d1:{NFSU2_TR(0x4198d1);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B4198d4:{NFSU2_TR(0x4198d4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4198d6:{NFSU2_TR(0x4198d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4198da:{NFSU2_TR(0x4198da);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4198e2:{NFSU2_TR(0x4198e2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4198e6;}}
}
B4198e4:L4198e4:{c.instructions+=1;NFSU2_TR(0x4198e4);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4198e6:L4198e6:{c.instructions+=2;NFSU2_TR(0x4198e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B4198e9:{NFSU2_TR(0x4198e9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L419a22;}}
}
B4198ef:L4198ef:{c.instructions+=1;NFSU2_TR(0x4198ef);
}
B4198f0:L4198f0:{c.instructions+=11;NFSU2_TR(0x4198f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4198f3:{NFSU2_TR(0x4198f3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B4198f7:{NFSU2_TR(0x4198f7);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4198fa:{NFSU2_TR(0x4198fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198fb:{NFSU2_TR(0x4198fb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198fd:{NFSU2_TR(0x4198fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4198fe:{NFSU2_TR(0x4198fe);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419902:{NFSU2_TR(0x419902);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419905:{NFSU2_TR(0x419905);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419906:{NFSU2_TR(0x419906);
__builtin_memmove((R+4),(R+24),4);
}
B419908:{NFSU2_TR(0x419908);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x41990dull));
TAIL_STATIC(0x4122c0u,412);
}
B41990d:L41990d:{c.instructions+=19;NFSU2_TR(0x41990d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419911:{NFSU2_TR(0x419911);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419914:{NFSU2_TR(0x419914);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419916:{NFSU2_TR(0x419916);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B41991a:{NFSU2_TR(0x41991a);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B41991e:{NFSU2_TR(0x41991e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419922:{NFSU2_TR(0x419922);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419925:{NFSU2_TR(0x419925);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B419927:{NFSU2_TR(0x419927);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B419929:{NFSU2_TR(0x419929);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B41992b:{NFSU2_TR(0x41992b);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B41992d:{NFSU2_TR(0x41992d);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B41992f:{NFSU2_TR(0x41992f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B419931:{NFSU2_TR(0x419931);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B419933:{NFSU2_TR(0x419933);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B419935:{NFSU2_TR(0x419935);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419937:{NFSU2_TR(0x419937);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419939:{NFSU2_TR(0x419939);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B41993d:{NFSU2_TR(0x41993d);
if(r1(R+518)){{goto L419977;}}
}
B41993f:L41993f:{c.instructions+=3;NFSU2_TR(0x41993f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B419943:{NFSU2_TR(0x419943);
u8 U[4];
__builtin_memmove((U+0),(R+24),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B419947:{NFSU2_TR(0x419947);
if(r1(R+518)){{goto L419977;}}
}
B419949:L419949:{c.instructions+=3;NFSU2_TR(0x419949);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B41994c:{NFSU2_TR(0x41994c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B41994e:{NFSU2_TR(0x41994e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L419966;}}
}
B419950:L419950:{c.instructions+=5;NFSU2_TR(0x419950);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B419957:{NFSU2_TR(0x419957);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B41995a:{NFSU2_TR(0x41995a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41995d:{NFSU2_TR(0x41995d);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B419964:{NFSU2_TR(0x419964);
{goto L419979;}
}
B419966:L419966:{c.instructions+=5;NFSU2_TR(0x419966);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B419969:{NFSU2_TR(0x419969);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B41996b:{NFSU2_TR(0x41996b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B41996e:{NFSU2_TR(0x41996e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B419975:{NFSU2_TR(0x419975);
{goto L419979;}
}
B419977:L419977:{c.instructions+=1;NFSU2_TR(0x419977);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419979:L419979:{c.instructions+=13;NFSU2_TR(0x419979);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B41997d:{NFSU2_TR(0x41997d);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B419980:{NFSU2_TR(0x419980);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419984:{NFSU2_TR(0x419984);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B419988:{NFSU2_TR(0x419988);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B41998e:{NFSU2_TR(0x41998e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419991:{NFSU2_TR(0x419991);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B419993:{NFSU2_TR(0x419993);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419997:{NFSU2_TR(0x419997);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B41999b:{NFSU2_TR(0x41999b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4199a1:{NFSU2_TR(0x4199a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4199a3:{NFSU2_TR(0x4199a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4199a6:{NFSU2_TR(0x4199a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4199e9;}}
}
B4199a8:L4199a8:{c.instructions+=6;NFSU2_TR(0x4199a8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4199ac:{NFSU2_TR(0x4199ac);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4199b2:{NFSU2_TR(0x4199b2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4199b6:{NFSU2_TR(0x4199b6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4199b8:{NFSU2_TR(0x4199b8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4199bb:{NFSU2_TR(0x4199bb);
if(r1(R+514)){{goto L4199c5;}}
}
B4199bd:L4199bd:{c.instructions+=2;NFSU2_TR(0x4199bd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4199bf:{NFSU2_TR(0x4199bf);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4199c5:L4199c5:{c.instructions+=7;NFSU2_TR(0x4199c5);
{u32 ea_=u32(u32(7879876u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4199cb:{NFSU2_TR(0x4199cb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4199cf:{NFSU2_TR(0x4199cf);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B4199d1:{NFSU2_TR(0x4199d1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4199d5:{NFSU2_TR(0x4199d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4199d7:{NFSU2_TR(0x4199d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4199da:{NFSU2_TR(0x4199da);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4199e1;}}
}
B4199dc:L4199dc:{c.instructions+=2;NFSU2_TR(0x4199dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4199df:{NFSU2_TR(0x4199df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4199f1;}}
}
B4199e1:L4199e1:{c.instructions+=3;NFSU2_TR(0x4199e1);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4199e5:{NFSU2_TR(0x4199e5);
__builtin_memmove((R+12),(R+28),4);
}
B4199e7:{NFSU2_TR(0x4199e7);
{goto L4199f3;}
}
B4199e9:L4199e9:{c.instructions+=2;NFSU2_TR(0x4199e9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4199ef:{NFSU2_TR(0x4199ef);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4199c5u);}goto L4199c5;}
}
B4199f1:L4199f1:{c.instructions+=1;NFSU2_TR(0x4199f1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4199f3:L4199f3:{c.instructions+=2;NFSU2_TR(0x4199f3);
{u32 ea_=u32(u32(7885484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4199f9:{NFSU2_TR(0x4199f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4199feull));
TAIL_STATIC(0x75bed4u,75b);
}
B4199fe:L4199fe:{c.instructions+=12;NFSU2_TR(0x4199fe);
w4(R+4,u32(0xfffffffeull));
}
B419a03:{NFSU2_TR(0x419a03);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B419a05:{NFSU2_TR(0x419a05);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419a07:{NFSU2_TR(0x419a07);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B419a09:{NFSU2_TR(0x419a09);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+0),(U+1),1);
}
B419a0c:{NFSU2_TR(0x419a0c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B419a0d:{NFSU2_TR(0x419a0d);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B419a0f:{NFSU2_TR(0x419a0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419a13:{NFSU2_TR(0x419a13);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B419a17:{NFSU2_TR(0x419a17);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B419a1a:{NFSU2_TR(0x419a1a);
__builtin_memmove((R+8),(R+4),4);
}
B419a1c:{NFSU2_TR(0x419a1c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4198f0u);}goto L4198f0;}}
}
B419a22:L419a22:{c.instructions+=3;NFSU2_TR(0x419a22);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B419a25:{NFSU2_TR(0x419a25);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B419a2a:{NFSU2_TR(0x419a2a);
if(r1(R+518)){{goto L419b05;}}
}
B419a30:L419a30:{c.instructions+=1;NFSU2_TR(0x419a30);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B419a34:L419a34:{c.instructions+=3;NFSU2_TR(0x419a34);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B419a38:{NFSU2_TR(0x419a38);
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
B419a3a:{NFSU2_TR(0x419a3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L419b05;}}
}
B419a40:L419a40:{c.instructions+=7;NFSU2_TR(0x419a40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B419a42:{NFSU2_TR(0x419a42);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419a48:{NFSU2_TR(0x419a48);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419a4b:{NFSU2_TR(0x419a4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419a4f:{NFSU2_TR(0x419a4f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B419a53:{NFSU2_TR(0x419a53);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B419a57:{NFSU2_TR(0x419a57);
if(r1(R+518)){{goto L419aa0;}}
}
B419a59:L419a59:{c.instructions+=3;NFSU2_TR(0x419a59);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B419a5d:{NFSU2_TR(0x419a5d);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B419a61:{NFSU2_TR(0x419a61);
if(r1(R+518)){{goto L419aa0;}}
}
B419a63:L419a63:{c.instructions+=3;NFSU2_TR(0x419a63);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B419a66:{NFSU2_TR(0x419a66);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B419a68:{NFSU2_TR(0x419a68);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L419a73;}}
}
B419a6a:L419a6a:{c.instructions+=2;NFSU2_TR(0x419a6a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B419a71:{NFSU2_TR(0x419a71);
{goto L419a75;}
}
B419a73:L419a73:{c.instructions+=1;NFSU2_TR(0x419a73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B419a75:L419a75:{c.instructions+=5;NFSU2_TR(0x419a75);
w4(R+4,u32(s32(s16(r2(R+4)))));
}
B419a78:{NFSU2_TR(0x419a78);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B419a7b:{NFSU2_TR(0x419a7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B419a82:{NFSU2_TR(0x419a82);
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
B419a84:{NFSU2_TR(0x419a84);
if(r1(R+518)){{goto L419aa0;}}
}
B419a86:L419a86:{c.instructions+=7;NFSU2_TR(0x419a86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419a89:{NFSU2_TR(0x419a89);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419a8b:{NFSU2_TR(0x419a8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B419a8d:{NFSU2_TR(0x419a8d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419a8e:{NFSU2_TR(0x419a8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419a8f:{NFSU2_TR(0x419a8f);
__builtin_memmove((R+4),(R+24),4);
}
B419a91:{NFSU2_TR(0x419a91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419a94ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B419a94:L419a94:{c.instructions+=4;NFSU2_TR(0x419a94);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419a97:{NFSU2_TR(0x419a97);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419a9a:{NFSU2_TR(0x419a9a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419a9e:{NFSU2_TR(0x419a9e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B419aa0:L419aa0:{c.instructions+=3;NFSU2_TR(0x419aa0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B419aa3:{NFSU2_TR(0x419aa3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419aa6:{NFSU2_TR(0x419aa6);
if(r1(R+518)){{goto L419ac0;}}
}
B419aa8:L419aa8:{c.instructions+=6;NFSU2_TR(0x419aa8);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419aac:{NFSU2_TR(0x419aac);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B419aae:{NFSU2_TR(0x419aae);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419ab1:{NFSU2_TR(0x419ab1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419ab3:{NFSU2_TR(0x419ab3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B419ab6:{NFSU2_TR(0x419ab6);
if(r1(R+514)){{goto L419ac0;}}
}
B419ab8:L419ab8:{c.instructions+=4;NFSU2_TR(0x419ab8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B419ab9:{NFSU2_TR(0x419ab9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419abb:{NFSU2_TR(0x419abb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B419abe:{NFSU2_TR(0x419abe);
{goto L419ae4;}
}
B419ac0:L419ac0:{c.instructions+=2;NFSU2_TR(0x419ac0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419ac3:{NFSU2_TR(0x419ac3);
if(r1(R+518)){{goto L419add;}}
}
B419ac5:L419ac5:{c.instructions+=7;NFSU2_TR(0x419ac5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419ac9:{NFSU2_TR(0x419ac9);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B419acb:{NFSU2_TR(0x419acb);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419ace:{NFSU2_TR(0x419ace);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419ad0:{NFSU2_TR(0x419ad0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419ad2:{NFSU2_TR(0x419ad2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419ad5:{NFSU2_TR(0x419ad5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L419adf;}}
}
B419ad7:L419ad7:{c.instructions+=3;NFSU2_TR(0x419ad7);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B419ad8:{NFSU2_TR(0x419ad8);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x4ull))));
}
B419adb:{NFSU2_TR(0x419adb);
{goto L419ae4;}
}
B419add:L419add:{c.instructions+=1;NFSU2_TR(0x419add);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419adf:L419adf:{c.instructions+=1;NFSU2_TR(0x419adf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B419ae4:L419ae4:{c.instructions+=9;NFSU2_TR(0x419ae4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419ae7:{NFSU2_TR(0x419ae7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B419ae9:{NFSU2_TR(0x419ae9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B419aea:{NFSU2_TR(0x419aea);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B419aec:{NFSU2_TR(0x419aec);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B419aef:{NFSU2_TR(0x419aef);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B419af0:{NFSU2_TR(0x419af0);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B419af2:{NFSU2_TR(0x419af2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B419af4:{NFSU2_TR(0x419af4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L419af8;}}
}
B419af6:L419af6:{c.instructions+=1;NFSU2_TR(0x419af6);
__builtin_memmove((R+0),(R+4),4);
}
B419af8:L419af8:{c.instructions+=2;NFSU2_TR(0x419af8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B419afa:{NFSU2_TR(0x419afa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L419b10;}}
}
B419afc:L419afc:{c.instructions+=2;NFSU2_TR(0x419afc);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B419aff:{NFSU2_TR(0x419aff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419a34u);}goto L419a34;}}
}
B419b05:L419b05:{c.instructions+=7;NFSU2_TR(0x419b05);
__builtin_memmove((R+0),(R+12),4);
}
B419b07:{NFSU2_TR(0x419b07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419b08:{NFSU2_TR(0x419b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419b09:{NFSU2_TR(0x419b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419b0a:{NFSU2_TR(0x419b0a);
__builtin_memmove((R+16),(R+20),4);
}
B419b0c:{NFSU2_TR(0x419b0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419b0d:{NFSU2_TR(0x419b0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419b10:L419b10:{c.instructions+=7;NFSU2_TR(0x419b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419b11:{NFSU2_TR(0x419b11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419b12:{NFSU2_TR(0x419b12);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B419b15:{NFSU2_TR(0x419b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419b16:{NFSU2_TR(0x419b16);
__builtin_memmove((R+16),(R+20),4);
}
B419b18:{NFSU2_TR(0x419b18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419b19:{NFSU2_TR(0x419b19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419b20:L419b20:{c.instructions+=5;NFSU2_TR(0x419b20);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b21:{NFSU2_TR(0x419b21);
__builtin_memmove((R+28),(R+4),4);
}
B419b23:{NFSU2_TR(0x419b23);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419b26:{NFSU2_TR(0x419b26);
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
B419b28:{NFSU2_TR(0x419b28);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L419b49;}}
}
B419b2a:L419b2a:{c.instructions+=5;NFSU2_TR(0x419b2a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419b2e:{NFSU2_TR(0x419b2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419b32:{NFSU2_TR(0x419b32);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B419b38:{NFSU2_TR(0x419b38);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B419b3e:{NFSU2_TR(0x419b3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419b43ull));
TAIL_STATIC(0x43bd50u,43b);
}
B419b43:L419b43:{c.instructions+=3;NFSU2_TR(0x419b43);
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
B419b45:{NFSU2_TR(0x419b45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419b46:{NFSU2_TR(0x419b46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419b49:L419b49:{c.instructions+=12;NFSU2_TR(0x419b49);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b4a:{NFSU2_TR(0x419b4a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B419b4e:{NFSU2_TR(0x419b4e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b4f:{NFSU2_TR(0x419b4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B419b53:{NFSU2_TR(0x419b53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b54:{NFSU2_TR(0x419b54);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b56:{NFSU2_TR(0x419b56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b58:{NFSU2_TR(0x419b58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b59:{NFSU2_TR(0x419b59);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b5b:{NFSU2_TR(0x419b5b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b5c:{NFSU2_TR(0x419b5c);
__builtin_memmove((R+4),(R+28),4);
}
B419b5e:{NFSU2_TR(0x419b5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419b63ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4198c0u);}goto L4198c0;}
}
B419b63:L419b63:{c.instructions+=3;NFSU2_TR(0x419b63);
__builtin_memmove((R+24),(R+0),4);
}
B419b65:{NFSU2_TR(0x419b65);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B419b68:{NFSU2_TR(0x419b68);
if(r1(R+518)){{goto L419b94;}}
}
B419b6a:L419b6a:{c.instructions+=4;NFSU2_TR(0x419b6a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B419b6e:{NFSU2_TR(0x419b6e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b6f:{NFSU2_TR(0x419b6f);
__builtin_memmove((R+4),(R+28),4);
}
B419b71:{NFSU2_TR(0x419b71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419b76ull));
TAIL_STATIC(0x40ae30u,40a);
}
B419b76:L419b76:{c.instructions+=6;NFSU2_TR(0x419b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419b7a:{NFSU2_TR(0x419b7a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b7b:{NFSU2_TR(0x419b7b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419b7d:{NFSU2_TR(0x419b7d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419b7e:{NFSU2_TR(0x419b7e);
__builtin_memmove((R+4),(R+28),4);
}
B419b80:{NFSU2_TR(0x419b80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419b85ull));
TAIL_STATIC(0x4123c0u,412);
}
B419b85:L419b85:{c.instructions+=8;NFSU2_TR(0x419b85);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419b89:{NFSU2_TR(0x419b89);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419b8b:{NFSU2_TR(0x419b8b);
__builtin_memmove((R+0),(R+24),4);
}
B419b8d:{NFSU2_TR(0x419b8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419b8e:{NFSU2_TR(0x419b8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419b8f:{NFSU2_TR(0x419b8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419b90:{NFSU2_TR(0x419b90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419b91:{NFSU2_TR(0x419b91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419b94:L419b94:{c.instructions+=10;NFSU2_TR(0x419b94);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419b98:{NFSU2_TR(0x419b98);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419b9c:{NFSU2_TR(0x419b9c);
__builtin_memmove((R+0),(R+24),4);
}
B419b9e:{NFSU2_TR(0x419b9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419b9f:{NFSU2_TR(0x419b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419ba0:{NFSU2_TR(0x419ba0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419ba1:{NFSU2_TR(0x419ba1);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B419ba7:{NFSU2_TR(0x419ba7);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B419bad:{NFSU2_TR(0x419bad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419bae:{NFSU2_TR(0x419bae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419bc0:L419bc0:{c.instructions+=13;NFSU2_TR(0x419bc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B419bc3:{NFSU2_TR(0x419bc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419bc7:{NFSU2_TR(0x419bc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419bc8:{NFSU2_TR(0x419bc8);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419bcc:{NFSU2_TR(0x419bcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419bcd:{NFSU2_TR(0x419bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419bd1:{NFSU2_TR(0x419bd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419bd5:{NFSU2_TR(0x419bd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419bd6:{NFSU2_TR(0x419bd6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x60ull))));
}
B419bd9:{NFSU2_TR(0x419bd9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419bda:{NFSU2_TR(0x419bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419be2:{NFSU2_TR(0x419be2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419bea:{NFSU2_TR(0x419bea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419befull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419b20u);}goto L419b20;}
}
B419bef:L419bef:{c.instructions+=8;NFSU2_TR(0x419bef);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419bf3:{NFSU2_TR(0x419bf3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419bf7:{NFSU2_TR(0x419bf7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419bfb:{NFSU2_TR(0x419bfb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419bfd:{NFSU2_TR(0x419bfd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419c01:{NFSU2_TR(0x419c01);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419c03:{NFSU2_TR(0x419c03);
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
B419c06:{NFSU2_TR(0x419c06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419c10:L419c10:{c.instructions+=13;NFSU2_TR(0x419c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B419c13:{NFSU2_TR(0x419c13);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419c17:{NFSU2_TR(0x419c17);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419c1b:{NFSU2_TR(0x419c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419c1e:{NFSU2_TR(0x419c1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c1f:{NFSU2_TR(0x419c1f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419c23:{NFSU2_TR(0x419c23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c24:{NFSU2_TR(0x419c24);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419c28:{NFSU2_TR(0x419c28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c29:{NFSU2_TR(0x419c29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c2a:{NFSU2_TR(0x419c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419c32:{NFSU2_TR(0x419c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419c3a:{NFSU2_TR(0x419c3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419c3full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419b20u);}goto L419b20;}
}
B419c3f:L419c3f:{c.instructions+=8;NFSU2_TR(0x419c3f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419c43:{NFSU2_TR(0x419c43);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419c47:{NFSU2_TR(0x419c47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419c4b:{NFSU2_TR(0x419c4b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419c4d:{NFSU2_TR(0x419c4d);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419c51:{NFSU2_TR(0x419c51);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419c53:{NFSU2_TR(0x419c53);
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
B419c56:{NFSU2_TR(0x419c56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419c60:L419c60:{c.instructions+=12;NFSU2_TR(0x419c60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c61:{NFSU2_TR(0x419c61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c62:{NFSU2_TR(0x419c62);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c63:{NFSU2_TR(0x419c63);
__builtin_memmove((R+28),(R+4),4);
}
B419c65:{NFSU2_TR(0x419c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419c69:{NFSU2_TR(0x419c69);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B419c70:{NFSU2_TR(0x419c70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419c73:{NFSU2_TR(0x419c73);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B419c76:{NFSU2_TR(0x419c76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c77:{NFSU2_TR(0x419c77);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419c7f:{NFSU2_TR(0x419c7f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B419c81:{NFSU2_TR(0x419c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419c86ull));
TAIL_STATIC(0x4052c0u,405);
}
B419c86:L419c86:{c.instructions+=3;NFSU2_TR(0x419c86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419c87:{NFSU2_TR(0x419c87);
__builtin_memmove((R+4),(R+28),4);
}
B419c89:{NFSU2_TR(0x419c89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419c8eull));
TAIL_STATIC(0x411c80u,411);
}
B419c8e:L419c8e:{c.instructions+=2;NFSU2_TR(0x419c8e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B419c91:{NFSU2_TR(0x419c91);
if(r1(R+518)){{goto L419cae;}}
}
B419c93:L419c93:{c.instructions+=3;NFSU2_TR(0x419c93);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B419c97:{NFSU2_TR(0x419c97);
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
B419c99:{NFSU2_TR(0x419c99);
if(r1(R+518)){{goto L419cae;}}
}
B419c9b:L419c9b:{c.instructions+=5;NFSU2_TR(0x419c9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419c9f:{NFSU2_TR(0x419c9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419ca0:{NFSU2_TR(0x419ca0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419ca1:{NFSU2_TR(0x419ca1);
__builtin_memmove((R+4),(R+0),4);
}
B419ca3:{NFSU2_TR(0x419ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419ca8ull));
TAIL_STATIC(0x4123c0u,412);
}
B419ca8:L419ca8:{c.instructions+=4;NFSU2_TR(0x419ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419ca9:{NFSU2_TR(0x419ca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419caa:{NFSU2_TR(0x419caa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B419cab:{NFSU2_TR(0x419cab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419cae:L419cae:{c.instructions+=5;NFSU2_TR(0x419cae);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419cb2:{NFSU2_TR(0x419cb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419cb3:{NFSU2_TR(0x419cb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419cb4:{NFSU2_TR(0x419cb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B419cb5:{NFSU2_TR(0x419cb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419cc0:L419cc0:{c.instructions+=12;NFSU2_TR(0x419cc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419cc1:{NFSU2_TR(0x419cc1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419cc2:{NFSU2_TR(0x419cc2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419cc3:{NFSU2_TR(0x419cc3);
__builtin_memmove((R+28),(R+4),4);
}
B419cc5:{NFSU2_TR(0x419cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419cc9:{NFSU2_TR(0x419cc9);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B419cd0:{NFSU2_TR(0x419cd0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419cd3:{NFSU2_TR(0x419cd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B419cd6:{NFSU2_TR(0x419cd6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419cd7:{NFSU2_TR(0x419cd7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419cdf:{NFSU2_TR(0x419cdf);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B419ce1:{NFSU2_TR(0x419ce1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419ce6ull));
TAIL_STATIC(0x4052c0u,405);
}
B419ce6:L419ce6:{c.instructions+=3;NFSU2_TR(0x419ce6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419ce7:{NFSU2_TR(0x419ce7);
__builtin_memmove((R+4),(R+28),4);
}
B419ce9:{NFSU2_TR(0x419ce9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419ceeull));
TAIL_STATIC(0x411c80u,411);
}
B419cee:L419cee:{c.instructions+=2;NFSU2_TR(0x419cee);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B419cf1:{NFSU2_TR(0x419cf1);
if(r1(R+518)){{goto L419d09;}}
}
B419cf3:L419cf3:{c.instructions+=3;NFSU2_TR(0x419cf3);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B419cf7:{NFSU2_TR(0x419cf7);
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
B419cf9:{NFSU2_TR(0x419cf9);
if(r1(R+518)){{goto L419d09;}}
}
B419cfb:L419cfb:{c.instructions+=3;NFSU2_TR(0x419cfb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419cfc:{NFSU2_TR(0x419cfc);
__builtin_memmove((R+4),(R+0),4);
}
B419cfe:{NFSU2_TR(0x419cfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419d03ull));
TAIL_STATIC(0x40ae30u,40a);
}
B419d03:L419d03:{c.instructions+=4;NFSU2_TR(0x419d03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419d04:{NFSU2_TR(0x419d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419d05:{NFSU2_TR(0x419d05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B419d06:{NFSU2_TR(0x419d06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419d09:L419d09:{c.instructions+=5;NFSU2_TR(0x419d09);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419d0d:{NFSU2_TR(0x419d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419d0e:{NFSU2_TR(0x419d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419d0f:{NFSU2_TR(0x419d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B419d10:{NFSU2_TR(0x419d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419d20:L419d20:{c.instructions+=16;NFSU2_TR(0x419d20);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d21:{NFSU2_TR(0x419d21);
__builtin_memmove((R+20),(R+16),4);
}
B419d23:{NFSU2_TR(0x419d23);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B419d26:{NFSU2_TR(0x419d26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B419d29:{NFSU2_TR(0x419d29);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419d2c:{NFSU2_TR(0x419d2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d2d:{NFSU2_TR(0x419d2d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d2e:{NFSU2_TR(0x419d2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B419d31:{NFSU2_TR(0x419d31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d32:{NFSU2_TR(0x419d32);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d34:{NFSU2_TR(0x419d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d35:{NFSU2_TR(0x419d35);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d37:{NFSU2_TR(0x419d37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d38:{NFSU2_TR(0x419d38);
__builtin_memmove((R+28),(R+4),4);
}
B419d3a:{NFSU2_TR(0x419d3a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B419d3c:{NFSU2_TR(0x419d3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419d41ull));
TAIL_STATIC(0x40ab10u,40a);
}
B419d41:L419d41:{c.instructions+=2;NFSU2_TR(0x419d41);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B419d44:{NFSU2_TR(0x419d44);
if(r1(R+518)){{goto L419dff;}}
}
B419d4a:L419d4a:{c.instructions+=2;NFSU2_TR(0x419d4a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B419d4c:{NFSU2_TR(0x419d4c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L419dde;}}
}
B419d52:L419d52:{c.instructions+=12;NFSU2_TR(0x419d52);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B419d56:{NFSU2_TR(0x419d56);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B419d5a:{NFSU2_TR(0x419d5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B419d5d:{NFSU2_TR(0x419d5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419d60:{NFSU2_TR(0x419d60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419d63:{NFSU2_TR(0x419d63);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d64:{NFSU2_TR(0x419d64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d65:{NFSU2_TR(0x419d65);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d66:{NFSU2_TR(0x419d66);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419d6a:{NFSU2_TR(0x419d6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d6b:{NFSU2_TR(0x419d6b);
__builtin_memmove((R+4),(R+28),4);
}
B419d6d:{NFSU2_TR(0x419d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419d72ull));
TAIL_STATIC(0x4122c0u,412);
}
B419d72:L419d72:{c.instructions+=9;NFSU2_TR(0x419d72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419d75:{NFSU2_TR(0x419d75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419d78:{NFSU2_TR(0x419d78);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d79:{NFSU2_TR(0x419d79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d7a:{NFSU2_TR(0x419d7a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d7b:{NFSU2_TR(0x419d7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419d7f:{NFSU2_TR(0x419d7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d80:{NFSU2_TR(0x419d80);
__builtin_memmove((R+4),(R+24),4);
}
B419d82:{NFSU2_TR(0x419d82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419d87ull));
TAIL_STATIC(0x4122c0u,412);
}
B419d87:L419d87:{c.instructions+=23;NFSU2_TR(0x419d87);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419d8b:{NFSU2_TR(0x419d8b);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419d8f:{NFSU2_TR(0x419d8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419d92:{NFSU2_TR(0x419d92);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419d93:{NFSU2_TR(0x419d93);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419d97:{NFSU2_TR(0x419d97);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419d9b:{NFSU2_TR(0x419d9b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419d9f:{NFSU2_TR(0x419d9f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419da3:{NFSU2_TR(0x419da3);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419da7:{NFSU2_TR(0x419da7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419dab:{NFSU2_TR(0x419dab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419daf:{NFSU2_TR(0x419daf);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419db3:{NFSU2_TR(0x419db3);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419db7:{NFSU2_TR(0x419db7);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419dba:{NFSU2_TR(0x419dba);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419dbd:{NFSU2_TR(0x419dbd);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419dc0:{NFSU2_TR(0x419dc0);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419dc3:{NFSU2_TR(0x419dc3);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B419dc5:{NFSU2_TR(0x419dc5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419dc8:{NFSU2_TR(0x419dc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419dc9:{NFSU2_TR(0x419dc9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419dca:{NFSU2_TR(0x419dca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419dcb:{NFSU2_TR(0x419dcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419dd0ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B419dd0:L419dd0:{c.instructions+=8;NFSU2_TR(0x419dd0);
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
B419dd3:{NFSU2_TR(0x419dd3);
w1(R+0,u8(0x1ull));
}
B419dd5:{NFSU2_TR(0x419dd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419dd6:{NFSU2_TR(0x419dd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419dd7:{NFSU2_TR(0x419dd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419dd8:{NFSU2_TR(0x419dd8);
__builtin_memmove((R+16),(R+20),4);
}
B419dda:{NFSU2_TR(0x419dda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419ddb:{NFSU2_TR(0x419ddb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419dde:L419dde:{c.instructions+=9;NFSU2_TR(0x419dde);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419de1:{NFSU2_TR(0x419de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419de4:{NFSU2_TR(0x419de4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419de5:{NFSU2_TR(0x419de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419de8:{NFSU2_TR(0x419de8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419de9:{NFSU2_TR(0x419de9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419dea:{NFSU2_TR(0x419dea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419deb:{NFSU2_TR(0x419deb);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B419def:{NFSU2_TR(0x419def);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419df4ull));
TAIL_STATIC(0x4122c0u,412);
}
B419df4:L419df4:{c.instructions+=7;NFSU2_TR(0x419df4);
w1(R+0,u8(0x1ull));
}
B419df6:{NFSU2_TR(0x419df6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419df7:{NFSU2_TR(0x419df7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419df8:{NFSU2_TR(0x419df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419df9:{NFSU2_TR(0x419df9);
__builtin_memmove((R+16),(R+20),4);
}
B419dfb:{NFSU2_TR(0x419dfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419dfc:{NFSU2_TR(0x419dfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419dff:L419dff:{c.instructions+=7;NFSU2_TR(0x419dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B419e00:{NFSU2_TR(0x419e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B419e01:{NFSU2_TR(0x419e01);
__builtin_memmove((R+0),(R+12),1);
}
B419e03:{NFSU2_TR(0x419e03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B419e04:{NFSU2_TR(0x419e04);
__builtin_memmove((R+16),(R+20),4);
}
B419e06:{NFSU2_TR(0x419e06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B419e07:{NFSU2_TR(0x419e07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B419e10:L419e10:{c.instructions+=10;NFSU2_TR(0x419e10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419e11:{NFSU2_TR(0x419e11);
__builtin_memmove((R+20),(R+16),4);
}
B419e13:{NFSU2_TR(0x419e13);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B419e16:{NFSU2_TR(0x419e16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B419e1c:{NFSU2_TR(0x419e1c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419e1d:{NFSU2_TR(0x419e1d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419e1e:{NFSU2_TR(0x419e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B419e21:{NFSU2_TR(0x419e21);
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
B419e23:{NFSU2_TR(0x419e23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419e24:{NFSU2_TR(0x419e24);
if(r1(R+518)){TAIL_STATIC(0x41a015u,41a);}
}
B419e2a:L419e2a:{c.instructions+=6;NFSU2_TR(0x419e2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419e2d:{NFSU2_TR(0x419e2d);
__builtin_memmove((R+0),(R+24),4);
}
B419e2f:{NFSU2_TR(0x419e2f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B419e31:{NFSU2_TR(0x419e31);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B419e34:{NFSU2_TR(0x419e34);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419e38:{NFSU2_TR(0x419e38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x41a015u,41a);}
}
B419e3e:L419e3e:{c.instructions+=11;NFSU2_TR(0x419e3e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B419e42:{NFSU2_TR(0x419e42);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419e45:{NFSU2_TR(0x419e45);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419e4b:{NFSU2_TR(0x419e4b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B419e4f:{NFSU2_TR(0x419e4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419e53:{NFSU2_TR(0x419e53);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419e56:{NFSU2_TR(0x419e56);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419e5a:{NFSU2_TR(0x419e5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419e5c:{NFSU2_TR(0x419e5c);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B419e5f:{NFSU2_TR(0x419e5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419e62:{NFSU2_TR(0x419e62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L419ec4;}}
}
B419e64:L419e64:{c.instructions+=6;NFSU2_TR(0x419e64);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419e67:{NFSU2_TR(0x419e67);
__builtin_memmove((R+0),(R+8),4);
}
B419e69:{NFSU2_TR(0x419e69);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B419e6b:{NFSU2_TR(0x419e6b);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B419e71:{NFSU2_TR(0x419e71);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419e75:{NFSU2_TR(0x419e75);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L419e97;}}
}
B419e77:L419e77:{c.instructions+=7;NFSU2_TR(0x419e77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B419e79:{NFSU2_TR(0x419e79);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419e7c:{NFSU2_TR(0x419e7c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419e80:{NFSU2_TR(0x419e80);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419e84:{NFSU2_TR(0x419e84);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419e86:{NFSU2_TR(0x419e86);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419e89:{NFSU2_TR(0x419e89);
if(r1(R+518)){{goto L419e95;}}
}
B419e8b:L419e8b:{c.instructions+=4;NFSU2_TR(0x419e8b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B419e8c:{NFSU2_TR(0x419e8c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B419e8f:{NFSU2_TR(0x419e8f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B419e91:{NFSU2_TR(0x419e91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419e77u);}goto L419e77;}}
}
B419e93:L419e93:{c.instructions+=1;NFSU2_TR(0x419e93);
{goto L419e97;}
}
B419e95:L419e95:{c.instructions+=1;NFSU2_TR(0x419e95);
__builtin_memmove((R+28),(R+8),4);
}
B419e97:L419e97:{c.instructions+=3;NFSU2_TR(0x419e97);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B419e9a:{NFSU2_TR(0x419e9a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B419e9c:{NFSU2_TR(0x419e9c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L419ec4;}}
}
B419e9e:L419e9e:{c.instructions+=1;NFSU2_TR(0x419e9e);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B419ea2:L419ea2:{c.instructions+=7;NFSU2_TR(0x419ea2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B419ea4:{NFSU2_TR(0x419ea4);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419ea7:{NFSU2_TR(0x419ea7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419eab:{NFSU2_TR(0x419eab);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B419eae:{NFSU2_TR(0x419eae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B419eb0:{NFSU2_TR(0x419eb0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B419eb3:{NFSU2_TR(0x419eb3);
if(r1(R+518)){{goto L419ebf;}}
}
B419eb5:L419eb5:{c.instructions+=4;NFSU2_TR(0x419eb5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B419eb6:{NFSU2_TR(0x419eb6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B419eb9:{NFSU2_TR(0x419eb9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B419ebb:{NFSU2_TR(0x419ebb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x419ea2u);}goto L419ea2;}}
}
B419ebd:L419ebd:{c.instructions+=1;NFSU2_TR(0x419ebd);
{goto L419ec4;}
}
B419ebf:L419ebf:{c.instructions+=2;NFSU2_TR(0x419ebf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B419ec2:{NFSU2_TR(0x419ec2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L419ed7;}}
}
B419ec4:L419ec4:{c.instructions+=8;NFSU2_TR(0x419ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419ec8:{NFSU2_TR(0x419ec8);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B419ec9:{NFSU2_TR(0x419ec9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B419ecb:{NFSU2_TR(0x419ecb);
__builtin_memmove((R+28),(R+0),4);
}
B419ecd:{NFSU2_TR(0x419ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419ed0:{NFSU2_TR(0x419ed0);
w4(R+28,sar<u32>(r4(R+28),u64(u32(0x1ull))));
}
B419ed2:{NFSU2_TR(0x419ed2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B419ed4:{NFSU2_TR(0x419ed4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+8),(U+0),4);
}
B419ed7:L419ed7:{c.instructions+=12;NFSU2_TR(0x419ed7);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B419edb:{NFSU2_TR(0x419edb);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B419edf:{NFSU2_TR(0x419edf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B419ee2:{NFSU2_TR(0x419ee2);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419ee6:{NFSU2_TR(0x419ee6);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419ee9:{NFSU2_TR(0x419ee9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419eea:{NFSU2_TR(0x419eea);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419eec:{NFSU2_TR(0x419eec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419eed:{NFSU2_TR(0x419eed);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419ef1:{NFSU2_TR(0x419ef1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419ef4:{NFSU2_TR(0x419ef4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419ef5:{NFSU2_TR(0x419ef5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419efaull));
TAIL_STATIC(0x4122c0u,412);
}
B419efa:L419efa:{c.instructions+=11;NFSU2_TR(0x419efa);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419efd:{NFSU2_TR(0x419efd);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419f01:{NFSU2_TR(0x419f01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f02:{NFSU2_TR(0x419f02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f04:{NFSU2_TR(0x419f04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f05:{NFSU2_TR(0x419f05);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419f09:{NFSU2_TR(0x419f09);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419f0c:{NFSU2_TR(0x419f0c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f0d:{NFSU2_TR(0x419f0d);
__builtin_memmove((R+4),(R+24),4);
}
B419f0f:{NFSU2_TR(0x419f0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419f13:{NFSU2_TR(0x419f13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419f18ull));
TAIL_STATIC(0x4122c0u,412);
}
B419f18:L419f18:{c.instructions+=11;NFSU2_TR(0x419f18);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419f1b:{NFSU2_TR(0x419f1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419f1f:{NFSU2_TR(0x419f1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f20:{NFSU2_TR(0x419f20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f22:{NFSU2_TR(0x419f22);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f23:{NFSU2_TR(0x419f23);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419f2a:{NFSU2_TR(0x419f2a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419f2d:{NFSU2_TR(0x419f2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f2e:{NFSU2_TR(0x419f2e);
__builtin_memmove((R+4),(R+28),4);
}
B419f30:{NFSU2_TR(0x419f30);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419f34:{NFSU2_TR(0x419f34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419f39ull));
TAIL_STATIC(0x4122c0u,412);
}
B419f39:L419f39:{c.instructions+=19;NFSU2_TR(0x419f39);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419f40:{NFSU2_TR(0x419f40);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419f44:{NFSU2_TR(0x419f44);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419f48:{NFSU2_TR(0x419f48);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419f4c:{NFSU2_TR(0x419f4c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f4d:{NFSU2_TR(0x419f4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419f51:{NFSU2_TR(0x419f51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f52:{NFSU2_TR(0x419f52);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419f56:{NFSU2_TR(0x419f56);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419f5a:{NFSU2_TR(0x419f5a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419f5e:{NFSU2_TR(0x419f5e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419f62:{NFSU2_TR(0x419f62);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419f66:{NFSU2_TR(0x419f66);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B419f6d:{NFSU2_TR(0x419f6d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419f71:{NFSU2_TR(0x419f71);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419f75:{NFSU2_TR(0x419f75);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B419f77:{NFSU2_TR(0x419f77);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B419f7b:{NFSU2_TR(0x419f7b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B419f7d:{NFSU2_TR(0x419f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419f82ull));
TAIL_STATIC(0x43ce50u,43c);
}
B419f82:L419f82:{c.instructions+=5;NFSU2_TR(0x419f82);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419f86:{NFSU2_TR(0x419f86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f87:{NFSU2_TR(0x419f87);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419f8b:{NFSU2_TR(0x419f8b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419f8c:{NFSU2_TR(0x419f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419f91ull));
TAIL_STATIC(0x43ce50u,43c);
}
B419f91:L419f91:{c.instructions+=17;NFSU2_TR(0x419f91);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B419f95:{NFSU2_TR(0x419f95);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419f99:{NFSU2_TR(0x419f99);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B419f9d:{NFSU2_TR(0x419f9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419fa1:{NFSU2_TR(0x419fa1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B419fa5:{NFSU2_TR(0x419fa5);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419fa9:{NFSU2_TR(0x419fa9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B419fad:{NFSU2_TR(0x419fad);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419fb1:{NFSU2_TR(0x419fb1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419fb2:{NFSU2_TR(0x419fb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B419fb6:{NFSU2_TR(0x419fb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B419fba:{NFSU2_TR(0x419fba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419fbb:{NFSU2_TR(0x419fbb);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B419fbf:{NFSU2_TR(0x419fbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419fca:{NFSU2_TR(0x419fca);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B419fd2:{NFSU2_TR(0x419fd2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B419fd3:{NFSU2_TR(0x419fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x419fd8ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B419fd8:L419fd8:{c.instructions+=12;NFSU2_TR(0x419fd8);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419fdc:{NFSU2_TR(0x419fdc);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B419fe0:{NFSU2_TR(0x419fe0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B419fe3:{NFSU2_TR(0x419fe3);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419fe7:{NFSU2_TR(0x419fe7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B419feb:{NFSU2_TR(0x419feb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B419fed:{NFSU2_TR(0x419fed);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419ff1:{NFSU2_TR(0x419ff1);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B419ff5:{NFSU2_TR(0x419ff5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B419ff7:{NFSU2_TR(0x419ff7);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B419ff9:{NFSU2_TR(0x419ff9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B419ffd:{NFSU2_TR(0x419ffd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x41a003u,41a);
}
XIT:NFSU2_TR_EXIT(0x419,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
