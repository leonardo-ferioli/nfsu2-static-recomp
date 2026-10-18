#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6db(u8* __restrict R,Cpu& c);
u32 body_6dd(u8* __restrict R,Cpu& c);
u32 body_6de(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_781(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x780,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x780,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_780(u8* __restrict R,Cpu& c);
u32 page_780(Cpu& c){return body_780(c.regs.data(),c);}
__attribute__((noinline)) u32 body_780(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x780000:goto L780000;
case 0x780006:c.instructions+=3;goto B780006;
case 0x780008:c.instructions+=2;goto B780008;
case 0x78000e:c.instructions+=1;goto B78000e;
case 0x780010:goto L780010;
case 0x780016:c.instructions+=3;goto B780016;
case 0x78001c:c.instructions+=2;goto B78001c;
case 0x780022:c.instructions+=1;goto B780022;
case 0x780028:goto L780028;
case 0x780029:c.instructions+=9;goto B780029;
case 0x78002a:c.instructions+=8;goto B78002a;
case 0x78002b:c.instructions+=7;goto B78002b;
case 0x78002c:c.instructions+=6;goto B78002c;
case 0x78002d:c.instructions+=5;goto B78002d;
case 0x78002e:c.instructions+=4;goto B78002e;
case 0x78002f:c.instructions+=3;goto B78002f;
case 0x780030:c.instructions+=2;goto B780030;
case 0x780035:c.instructions+=1;goto B780035;
case 0x78003a:goto L78003a;
case 0x78003f:c.instructions+=1;goto B78003f;
case 0x780044:goto L780044;
case 0x780045:c.instructions+=1;goto B780045;
case 0x780050:goto L780050;
case 0x780055:c.instructions+=1;goto B780055;
case 0x78005a:goto L78005a;
case 0x78005f:c.instructions+=1;goto B78005f;
case 0x780064:goto L780064;
case 0x780065:c.instructions+=1;goto B780065;
case 0x780070:goto L780070;
case 0x780076:c.instructions+=3;goto B780076;
case 0x780078:c.instructions+=2;goto B780078;
case 0x78007e:c.instructions+=1;goto B78007e;
case 0x780080:goto L780080;
case 0x780086:c.instructions+=3;goto B780086;
case 0x78008c:c.instructions+=2;goto B78008c;
case 0x780092:c.instructions+=1;goto B780092;
case 0x7800a0:goto L7800a0;
case 0x7800a6:c.instructions+=3;goto B7800a6;
case 0x7800a8:c.instructions+=2;goto B7800a8;
case 0x7800ae:c.instructions+=1;goto B7800ae;
case 0x7800b0:goto L7800b0;
case 0x7800b6:c.instructions+=3;goto B7800b6;
case 0x7800bc:c.instructions+=2;goto B7800bc;
case 0x7800c2:c.instructions+=1;goto B7800c2;
case 0x7800d0:goto L7800d0;
case 0x7800d6:c.instructions+=3;goto B7800d6;
case 0x7800d8:c.instructions+=2;goto B7800d8;
case 0x7800de:c.instructions+=1;goto B7800de;
case 0x7800e0:goto L7800e0;
case 0x7800e6:c.instructions+=3;goto B7800e6;
case 0x7800ec:c.instructions+=2;goto B7800ec;
case 0x7800f2:c.instructions+=1;goto B7800f2;
case 0x780100:goto L780100;
case 0x780106:c.instructions+=3;goto B780106;
case 0x780108:c.instructions+=2;goto B780108;
case 0x78010e:c.instructions+=1;goto B78010e;
case 0x780110:goto L780110;
case 0x780116:c.instructions+=3;goto B780116;
case 0x78011c:c.instructions+=2;goto B78011c;
case 0x780122:c.instructions+=1;goto B780122;
case 0x780130:goto L780130;
case 0x780136:c.instructions+=3;goto B780136;
case 0x780138:c.instructions+=2;goto B780138;
case 0x78013e:c.instructions+=1;goto B78013e;
case 0x780140:goto L780140;
case 0x780146:c.instructions+=3;goto B780146;
case 0x78014c:c.instructions+=2;goto B78014c;
case 0x780152:c.instructions+=1;goto B780152;
case 0x780160:goto L780160;
case 0x780166:c.instructions+=3;goto B780166;
case 0x780168:c.instructions+=2;goto B780168;
case 0x78016e:c.instructions+=1;goto B78016e;
case 0x780170:goto L780170;
case 0x780176:c.instructions+=3;goto B780176;
case 0x78017c:c.instructions+=2;goto B78017c;
case 0x780182:c.instructions+=1;goto B780182;
case 0x780190:goto L780190;
case 0x780196:c.instructions+=3;goto B780196;
case 0x780198:c.instructions+=2;goto B780198;
case 0x78019e:c.instructions+=1;goto B78019e;
case 0x7801a0:goto L7801a0;
case 0x7801a6:c.instructions+=3;goto B7801a6;
case 0x7801ac:c.instructions+=2;goto B7801ac;
case 0x7801b2:c.instructions+=1;goto B7801b2;
case 0x7801c0:goto L7801c0;
case 0x7801c6:c.instructions+=3;goto B7801c6;
case 0x7801c8:c.instructions+=2;goto B7801c8;
case 0x7801ce:c.instructions+=1;goto B7801ce;
case 0x7801d0:goto L7801d0;
case 0x7801d6:c.instructions+=3;goto B7801d6;
case 0x7801dc:c.instructions+=2;goto B7801dc;
case 0x7801e2:c.instructions+=1;goto B7801e2;
case 0x7801f0:goto L7801f0;
case 0x7801f5:c.instructions+=1;goto B7801f5;
case 0x7801fa:goto L7801fa;
case 0x7801ff:c.instructions+=1;goto B7801ff;
case 0x780204:goto L780204;
case 0x780205:c.instructions+=1;goto B780205;
case 0x780210:goto L780210;
case 0x780216:c.instructions+=3;goto B780216;
case 0x780218:c.instructions+=2;goto B780218;
case 0x78021e:c.instructions+=1;goto B78021e;
case 0x780220:goto L780220;
case 0x780226:c.instructions+=3;goto B780226;
case 0x78022c:c.instructions+=2;goto B78022c;
case 0x780232:c.instructions+=1;goto B780232;
case 0x780240:goto L780240;
case 0x780246:c.instructions+=3;goto B780246;
case 0x780248:c.instructions+=2;goto B780248;
case 0x78024e:c.instructions+=1;goto B78024e;
case 0x780250:goto L780250;
case 0x780256:c.instructions+=3;goto B780256;
case 0x78025c:c.instructions+=2;goto B78025c;
case 0x780262:c.instructions+=1;goto B780262;
case 0x780270:goto L780270;
case 0x780275:c.instructions+=3;goto B780275;
case 0x78027a:c.instructions+=2;goto B78027a;
case 0x78027f:c.instructions+=1;goto B78027f;
case 0x780284:goto L780284;
case 0x780289:c.instructions+=1;goto B780289;
case 0x78028e:goto L78028e;
case 0x78028f:c.instructions+=1;goto B78028f;
case 0x780290:goto L780290;
case 0x780295:c.instructions+=3;goto B780295;
case 0x78029a:c.instructions+=2;goto B78029a;
case 0x78029f:c.instructions+=1;goto B78029f;
case 0x7802a4:goto L7802a4;
case 0x7802a9:c.instructions+=1;goto B7802a9;
case 0x7802ae:goto L7802ae;
case 0x7802af:c.instructions+=1;goto B7802af;
case 0x7802b0:goto L7802b0;
case 0x7802b5:c.instructions+=2;goto B7802b5;
case 0x7802bf:c.instructions+=1;goto B7802bf;
case 0x7802c4:goto L7802c4;
case 0x7802c9:c.instructions+=1;goto B7802c9;
case 0x7802ce:goto L7802ce;
case 0x7802cf:c.instructions+=1;goto B7802cf;
case 0x7802d0:goto L7802d0;
case 0x7802d6:c.instructions+=3;goto B7802d6;
case 0x7802d8:c.instructions+=2;goto B7802d8;
case 0x7802de:c.instructions+=1;goto B7802de;
case 0x7802e0:goto L7802e0;
case 0x7802e6:c.instructions+=3;goto B7802e6;
case 0x7802ec:c.instructions+=2;goto B7802ec;
case 0x7802f2:c.instructions+=1;goto B7802f2;
case 0x780300:goto L780300;
case 0x780306:c.instructions+=3;goto B780306;
case 0x780308:c.instructions+=2;goto B780308;
case 0x78030e:c.instructions+=1;goto B78030e;
case 0x780310:goto L780310;
case 0x780316:c.instructions+=3;goto B780316;
case 0x78031c:c.instructions+=2;goto B78031c;
case 0x780322:c.instructions+=1;goto B780322;
case 0x780330:goto L780330;
case 0x780335:c.instructions+=1;goto B780335;
case 0x78033a:goto L78033a;
case 0x78033f:c.instructions+=1;goto B78033f;
case 0x780344:goto L780344;
case 0x780345:c.instructions+=1;goto B780345;
case 0x780350:goto L780350;
case 0x780356:c.instructions+=3;goto B780356;
case 0x780358:c.instructions+=2;goto B780358;
case 0x78035e:c.instructions+=1;goto B78035e;
case 0x780360:goto L780360;
case 0x780366:c.instructions+=3;goto B780366;
case 0x78036c:c.instructions+=2;goto B78036c;
case 0x780372:c.instructions+=1;goto B780372;
case 0x780380:goto L780380;
case 0x780386:c.instructions+=3;goto B780386;
case 0x780388:c.instructions+=2;goto B780388;
case 0x78038e:c.instructions+=1;goto B78038e;
case 0x780390:goto L780390;
case 0x780396:c.instructions+=3;goto B780396;
case 0x78039c:c.instructions+=2;goto B78039c;
case 0x7803a2:c.instructions+=1;goto B7803a2;
case 0x7803b0:goto L7803b0;
case 0x7803b6:c.instructions+=3;goto B7803b6;
case 0x7803b8:c.instructions+=2;goto B7803b8;
case 0x7803be:c.instructions+=1;goto B7803be;
case 0x7803c0:goto L7803c0;
case 0x7803c6:c.instructions+=3;goto B7803c6;
case 0x7803cc:c.instructions+=2;goto B7803cc;
case 0x7803d2:c.instructions+=1;goto B7803d2;
case 0x7803e0:goto L7803e0;
case 0x7803e6:c.instructions+=3;goto B7803e6;
case 0x7803e8:c.instructions+=2;goto B7803e8;
case 0x7803ee:c.instructions+=1;goto B7803ee;
case 0x7803f0:goto L7803f0;
case 0x7803f6:c.instructions+=3;goto B7803f6;
case 0x7803fc:c.instructions+=2;goto B7803fc;
case 0x780402:c.instructions+=1;goto B780402;
case 0x780410:goto L780410;
case 0x780416:c.instructions+=3;goto B780416;
case 0x780418:c.instructions+=2;goto B780418;
case 0x78041e:c.instructions+=1;goto B78041e;
case 0x780420:goto L780420;
case 0x780426:c.instructions+=3;goto B780426;
case 0x78042c:c.instructions+=2;goto B78042c;
case 0x780432:c.instructions+=1;goto B780432;
case 0x780440:goto L780440;
case 0x780446:c.instructions+=3;goto B780446;
case 0x780448:c.instructions+=2;goto B780448;
case 0x78044e:c.instructions+=1;goto B78044e;
case 0x780450:goto L780450;
case 0x780456:c.instructions+=3;goto B780456;
case 0x78045c:c.instructions+=2;goto B78045c;
case 0x780462:c.instructions+=1;goto B780462;
case 0x780470:goto L780470;
case 0x780476:c.instructions+=3;goto B780476;
case 0x780478:c.instructions+=2;goto B780478;
case 0x78047e:c.instructions+=1;goto B78047e;
case 0x780480:goto L780480;
case 0x780486:c.instructions+=3;goto B780486;
case 0x78048c:c.instructions+=2;goto B78048c;
case 0x780492:c.instructions+=1;goto B780492;
case 0x7804a0:goto L7804a0;
case 0x7804a6:c.instructions+=3;goto B7804a6;
case 0x7804a8:c.instructions+=2;goto B7804a8;
case 0x7804ae:c.instructions+=1;goto B7804ae;
case 0x7804b0:goto L7804b0;
case 0x7804b6:c.instructions+=3;goto B7804b6;
case 0x7804bc:c.instructions+=2;goto B7804bc;
case 0x7804c2:c.instructions+=1;goto B7804c2;
case 0x7804d0:goto L7804d0;
case 0x7804d6:c.instructions+=3;goto B7804d6;
case 0x7804d8:c.instructions+=2;goto B7804d8;
case 0x7804de:c.instructions+=1;goto B7804de;
case 0x7804e0:goto L7804e0;
case 0x7804e6:c.instructions+=3;goto B7804e6;
case 0x7804ec:c.instructions+=2;goto B7804ec;
case 0x7804f2:c.instructions+=1;goto B7804f2;
case 0x780500:goto L780500;
case 0x780506:c.instructions+=3;goto B780506;
case 0x780508:c.instructions+=2;goto B780508;
case 0x78050e:c.instructions+=1;goto B78050e;
case 0x780510:goto L780510;
case 0x780516:c.instructions+=3;goto B780516;
case 0x78051c:c.instructions+=2;goto B78051c;
case 0x780522:c.instructions+=1;goto B780522;
case 0x780530:goto L780530;
case 0x780536:c.instructions+=3;goto B780536;
case 0x780538:c.instructions+=2;goto B780538;
case 0x78053e:c.instructions+=1;goto B78053e;
case 0x780540:goto L780540;
case 0x780546:c.instructions+=3;goto B780546;
case 0x78054c:c.instructions+=2;goto B78054c;
case 0x780552:c.instructions+=1;goto B780552;
case 0x780560:goto L780560;
case 0x780566:c.instructions+=3;goto B780566;
case 0x780568:c.instructions+=2;goto B780568;
case 0x78056e:c.instructions+=1;goto B78056e;
case 0x780570:goto L780570;
case 0x780576:c.instructions+=3;goto B780576;
case 0x78057c:c.instructions+=2;goto B78057c;
case 0x780582:c.instructions+=1;goto B780582;
case 0x780590:goto L780590;
case 0x780596:c.instructions+=3;goto B780596;
case 0x780598:c.instructions+=2;goto B780598;
case 0x78059e:c.instructions+=1;goto B78059e;
case 0x7805a0:goto L7805a0;
case 0x7805a6:c.instructions+=3;goto B7805a6;
case 0x7805ac:c.instructions+=2;goto B7805ac;
case 0x7805b2:c.instructions+=1;goto B7805b2;
case 0x7805c0:goto L7805c0;
case 0x7805c6:c.instructions+=3;goto B7805c6;
case 0x7805c8:c.instructions+=2;goto B7805c8;
case 0x7805ce:c.instructions+=1;goto B7805ce;
case 0x7805d0:goto L7805d0;
case 0x7805d6:c.instructions+=3;goto B7805d6;
case 0x7805dc:c.instructions+=2;goto B7805dc;
case 0x7805e2:c.instructions+=1;goto B7805e2;
case 0x7805f0:goto L7805f0;
case 0x7805f6:c.instructions+=3;goto B7805f6;
case 0x7805fc:c.instructions+=2;goto B7805fc;
case 0x780602:c.instructions+=1;goto B780602;
case 0x780610:goto L780610;
case 0x780616:c.instructions+=3;goto B780616;
case 0x780618:c.instructions+=2;goto B780618;
case 0x78061e:c.instructions+=1;goto B78061e;
case 0x780620:goto L780620;
case 0x780626:c.instructions+=3;goto B780626;
case 0x780628:c.instructions+=2;goto B780628;
case 0x78062e:c.instructions+=1;goto B78062e;
case 0x780630:goto L780630;
case 0x780636:c.instructions+=3;goto B780636;
case 0x780638:c.instructions+=2;goto B780638;
case 0x78063e:c.instructions+=1;goto B78063e;
case 0x780640:goto L780640;
case 0x780646:c.instructions+=3;goto B780646;
case 0x780648:c.instructions+=2;goto B780648;
case 0x78064e:c.instructions+=1;goto B78064e;
case 0x780650:goto L780650;
case 0x780656:c.instructions+=3;goto B780656;
case 0x78065c:c.instructions+=2;goto B78065c;
case 0x780662:c.instructions+=1;goto B780662;
case 0x780670:goto L780670;
case 0x780676:c.instructions+=3;goto B780676;
case 0x780678:c.instructions+=2;goto B780678;
case 0x78067e:c.instructions+=1;goto B78067e;
case 0x780680:goto L780680;
case 0x780686:c.instructions+=3;goto B780686;
case 0x78068c:c.instructions+=2;goto B78068c;
case 0x780692:c.instructions+=1;goto B780692;
case 0x7806a0:goto L7806a0;
case 0x7806a6:c.instructions+=3;goto B7806a6;
case 0x7806a8:c.instructions+=2;goto B7806a8;
case 0x7806ae:c.instructions+=1;goto B7806ae;
case 0x7806b0:goto L7806b0;
case 0x7806b6:c.instructions+=3;goto B7806b6;
case 0x7806bc:c.instructions+=2;goto B7806bc;
case 0x7806c2:c.instructions+=1;goto B7806c2;
case 0x7806d0:goto L7806d0;
case 0x7806d6:c.instructions+=3;goto B7806d6;
case 0x7806d8:c.instructions+=2;goto B7806d8;
case 0x7806de:c.instructions+=1;goto B7806de;
case 0x7806e0:goto L7806e0;
case 0x7806e6:c.instructions+=3;goto B7806e6;
case 0x7806ec:c.instructions+=2;goto B7806ec;
case 0x7806f2:c.instructions+=1;goto B7806f2;
case 0x780700:goto L780700;
case 0x780706:c.instructions+=3;goto B780706;
case 0x780708:c.instructions+=2;goto B780708;
case 0x78070e:c.instructions+=1;goto B78070e;
case 0x780710:goto L780710;
case 0x780716:c.instructions+=3;goto B780716;
case 0x78071c:c.instructions+=2;goto B78071c;
case 0x780722:c.instructions+=1;goto B780722;
case 0x780730:goto L780730;
case 0x780736:c.instructions+=3;goto B780736;
case 0x780738:c.instructions+=2;goto B780738;
case 0x78073e:c.instructions+=1;goto B78073e;
case 0x780740:goto L780740;
case 0x780746:c.instructions+=3;goto B780746;
case 0x78074c:c.instructions+=2;goto B78074c;
case 0x780752:c.instructions+=1;goto B780752;
case 0x780760:goto L780760;
case 0x780766:c.instructions+=3;goto B780766;
case 0x780768:c.instructions+=2;goto B780768;
case 0x78076e:c.instructions+=1;goto B78076e;
case 0x780770:goto L780770;
case 0x780776:c.instructions+=3;goto B780776;
case 0x78077c:c.instructions+=2;goto B78077c;
case 0x780782:c.instructions+=1;goto B780782;
case 0x780790:goto L780790;
case 0x780796:c.instructions+=3;goto B780796;
case 0x780798:c.instructions+=2;goto B780798;
case 0x78079e:c.instructions+=1;goto B78079e;
case 0x7807a0:goto L7807a0;
case 0x7807a6:c.instructions+=3;goto B7807a6;
case 0x7807ac:c.instructions+=2;goto B7807ac;
case 0x7807b2:c.instructions+=1;goto B7807b2;
case 0x7807c0:goto L7807c0;
case 0x7807c5:c.instructions+=3;goto B7807c5;
case 0x7807ca:c.instructions+=2;goto B7807ca;
case 0x7807cc:c.instructions+=1;goto B7807cc;
case 0x7807d0:goto L7807d0;
case 0x7807d3:c.instructions+=5;goto B7807d3;
case 0x7807d6:c.instructions+=4;goto B7807d6;
case 0x7807d8:c.instructions+=3;goto B7807d8;
case 0x7807db:c.instructions+=2;goto B7807db;
case 0x7807dc:c.instructions+=1;goto B7807dc;
case 0x7807de:goto L7807de;
case 0x7807e0:goto L7807e0;
case 0x7807e6:c.instructions+=3;goto B7807e6;
case 0x7807e8:c.instructions+=2;goto B7807e8;
case 0x7807ee:c.instructions+=1;goto B7807ee;
case 0x7807f0:goto L7807f0;
case 0x7807f6:c.instructions+=3;goto B7807f6;
case 0x7807fc:c.instructions+=2;goto B7807fc;
case 0x780802:c.instructions+=1;goto B780802;
case 0x780810:goto L780810;
case 0x780816:c.instructions+=3;goto B780816;
case 0x780818:c.instructions+=2;goto B780818;
case 0x78081e:c.instructions+=1;goto B78081e;
case 0x780820:goto L780820;
case 0x780826:c.instructions+=3;goto B780826;
case 0x78082c:c.instructions+=2;goto B78082c;
case 0x780832:c.instructions+=1;goto B780832;
case 0x780840:goto L780840;
case 0x780846:c.instructions+=3;goto B780846;
case 0x780848:c.instructions+=2;goto B780848;
case 0x78084e:c.instructions+=1;goto B78084e;
case 0x780850:goto L780850;
case 0x780856:c.instructions+=3;goto B780856;
case 0x78085c:c.instructions+=2;goto B78085c;
case 0x780862:c.instructions+=1;goto B780862;
case 0x780870:goto L780870;
case 0x780876:c.instructions+=3;goto B780876;
case 0x780878:c.instructions+=2;goto B780878;
case 0x78087e:c.instructions+=1;goto B78087e;
case 0x780880:goto L780880;
case 0x780886:c.instructions+=3;goto B780886;
case 0x78088c:c.instructions+=2;goto B78088c;
case 0x780892:c.instructions+=1;goto B780892;
case 0x7808a0:goto L7808a0;
case 0x7808a6:c.instructions+=3;goto B7808a6;
case 0x7808a8:c.instructions+=2;goto B7808a8;
case 0x7808ae:c.instructions+=1;goto B7808ae;
case 0x7808b0:goto L7808b0;
case 0x7808b6:c.instructions+=3;goto B7808b6;
case 0x7808bc:c.instructions+=2;goto B7808bc;
case 0x7808c2:c.instructions+=1;goto B7808c2;
case 0x7808d0:goto L7808d0;
case 0x7808d6:c.instructions+=3;goto B7808d6;
case 0x7808d8:c.instructions+=2;goto B7808d8;
case 0x7808de:c.instructions+=1;goto B7808de;
case 0x7808e0:goto L7808e0;
case 0x7808e6:c.instructions+=3;goto B7808e6;
case 0x7808ec:c.instructions+=2;goto B7808ec;
case 0x7808f2:c.instructions+=1;goto B7808f2;
case 0x780900:goto L780900;
case 0x780906:c.instructions+=3;goto B780906;
case 0x780908:c.instructions+=2;goto B780908;
case 0x78090e:c.instructions+=1;goto B78090e;
case 0x780910:goto L780910;
case 0x780916:c.instructions+=3;goto B780916;
case 0x78091c:c.instructions+=2;goto B78091c;
case 0x780922:c.instructions+=1;goto B780922;
case 0x780930:goto L780930;
case 0x780936:c.instructions+=3;goto B780936;
case 0x780938:c.instructions+=2;goto B780938;
case 0x78093e:c.instructions+=1;goto B78093e;
case 0x780940:goto L780940;
case 0x780946:c.instructions+=3;goto B780946;
case 0x78094c:c.instructions+=2;goto B78094c;
case 0x780952:c.instructions+=1;goto B780952;
case 0x780960:goto L780960;
case 0x780966:c.instructions+=3;goto B780966;
case 0x780968:c.instructions+=2;goto B780968;
case 0x78096e:c.instructions+=1;goto B78096e;
case 0x780970:goto L780970;
case 0x780976:c.instructions+=3;goto B780976;
case 0x78097c:c.instructions+=2;goto B78097c;
case 0x780982:c.instructions+=1;goto B780982;
case 0x780990:goto L780990;
case 0x780996:c.instructions+=3;goto B780996;
case 0x780998:c.instructions+=2;goto B780998;
case 0x78099e:c.instructions+=1;goto B78099e;
case 0x7809a0:goto L7809a0;
case 0x7809a6:c.instructions+=3;goto B7809a6;
case 0x7809ac:c.instructions+=2;goto B7809ac;
case 0x7809b2:c.instructions+=1;goto B7809b2;
case 0x7809c0:goto L7809c0;
case 0x7809c6:c.instructions+=3;goto B7809c6;
case 0x7809c8:c.instructions+=2;goto B7809c8;
case 0x7809ce:c.instructions+=1;goto B7809ce;
case 0x7809d0:goto L7809d0;
case 0x7809d6:c.instructions+=3;goto B7809d6;
case 0x7809dc:c.instructions+=2;goto B7809dc;
case 0x7809e2:c.instructions+=1;goto B7809e2;
case 0x7809f0:goto L7809f0;
case 0x7809f6:c.instructions+=3;goto B7809f6;
case 0x7809f8:c.instructions+=2;goto B7809f8;
case 0x7809fe:c.instructions+=1;goto B7809fe;
case 0x780a00:goto L780a00;
case 0x780a06:c.instructions+=3;goto B780a06;
case 0x780a0c:c.instructions+=2;goto B780a0c;
case 0x780a12:c.instructions+=1;goto B780a12;
case 0x780a20:goto L780a20;
case 0x780a26:c.instructions+=3;goto B780a26;
case 0x780a28:c.instructions+=2;goto B780a28;
case 0x780a2e:c.instructions+=1;goto B780a2e;
case 0x780a30:goto L780a30;
case 0x780a36:c.instructions+=3;goto B780a36;
case 0x780a3c:c.instructions+=2;goto B780a3c;
case 0x780a42:c.instructions+=1;goto B780a42;
case 0x780a50:goto L780a50;
case 0x780a56:c.instructions+=3;goto B780a56;
case 0x780a58:c.instructions+=2;goto B780a58;
case 0x780a5e:c.instructions+=1;goto B780a5e;
case 0x780a60:goto L780a60;
case 0x780a66:c.instructions+=3;goto B780a66;
case 0x780a6c:c.instructions+=2;goto B780a6c;
case 0x780a72:c.instructions+=1;goto B780a72;
case 0x780a80:goto L780a80;
case 0x780a86:c.instructions+=3;goto B780a86;
case 0x780a88:c.instructions+=2;goto B780a88;
case 0x780a8e:c.instructions+=1;goto B780a8e;
case 0x780a90:goto L780a90;
case 0x780a96:c.instructions+=3;goto B780a96;
case 0x780a9c:c.instructions+=2;goto B780a9c;
case 0x780aa2:c.instructions+=1;goto B780aa2;
case 0x780ab0:goto L780ab0;
case 0x780ab6:c.instructions+=3;goto B780ab6;
case 0x780ab8:c.instructions+=2;goto B780ab8;
case 0x780abe:c.instructions+=1;goto B780abe;
case 0x780ac0:goto L780ac0;
case 0x780ac6:c.instructions+=3;goto B780ac6;
case 0x780acc:c.instructions+=2;goto B780acc;
case 0x780ad2:c.instructions+=1;goto B780ad2;
case 0x780ae0:goto L780ae0;
case 0x780ae6:c.instructions+=3;goto B780ae6;
case 0x780ae8:c.instructions+=2;goto B780ae8;
case 0x780aee:c.instructions+=1;goto B780aee;
case 0x780af0:goto L780af0;
case 0x780af6:c.instructions+=3;goto B780af6;
case 0x780afc:c.instructions+=2;goto B780afc;
case 0x780b02:c.instructions+=1;goto B780b02;
case 0x780b10:goto L780b10;
case 0x780b16:c.instructions+=3;goto B780b16;
case 0x780b18:c.instructions+=2;goto B780b18;
case 0x780b1e:c.instructions+=1;goto B780b1e;
case 0x780b20:goto L780b20;
case 0x780b26:c.instructions+=3;goto B780b26;
case 0x780b2c:c.instructions+=2;goto B780b2c;
case 0x780b32:c.instructions+=1;goto B780b32;
case 0x780b40:goto L780b40;
case 0x780b46:c.instructions+=3;goto B780b46;
case 0x780b48:c.instructions+=2;goto B780b48;
case 0x780b4e:c.instructions+=1;goto B780b4e;
case 0x780b50:goto L780b50;
case 0x780b56:c.instructions+=3;goto B780b56;
case 0x780b5c:c.instructions+=2;goto B780b5c;
case 0x780b62:c.instructions+=1;goto B780b62;
case 0x780b70:goto L780b70;
case 0x780b76:c.instructions+=3;goto B780b76;
case 0x780b78:c.instructions+=2;goto B780b78;
case 0x780b7e:c.instructions+=1;goto B780b7e;
case 0x780b80:goto L780b80;
case 0x780b86:c.instructions+=3;goto B780b86;
case 0x780b8c:c.instructions+=2;goto B780b8c;
case 0x780b92:c.instructions+=1;goto B780b92;
case 0x780ba0:goto L780ba0;
case 0x780ba6:c.instructions+=3;goto B780ba6;
case 0x780ba8:c.instructions+=2;goto B780ba8;
case 0x780bae:c.instructions+=1;goto B780bae;
case 0x780bb0:goto L780bb0;
case 0x780bb6:c.instructions+=3;goto B780bb6;
case 0x780bbc:c.instructions+=2;goto B780bbc;
case 0x780bc2:c.instructions+=1;goto B780bc2;
case 0x780bd0:goto L780bd0;
case 0x780bd6:c.instructions+=3;goto B780bd6;
case 0x780bd8:c.instructions+=2;goto B780bd8;
case 0x780bde:c.instructions+=1;goto B780bde;
case 0x780be0:goto L780be0;
case 0x780be6:c.instructions+=3;goto B780be6;
case 0x780bec:c.instructions+=2;goto B780bec;
case 0x780bf2:c.instructions+=1;goto B780bf2;
case 0x780c00:goto L780c00;
case 0x780c06:c.instructions+=3;goto B780c06;
case 0x780c08:c.instructions+=2;goto B780c08;
case 0x780c0e:c.instructions+=1;goto B780c0e;
case 0x780c10:goto L780c10;
case 0x780c16:c.instructions+=3;goto B780c16;
case 0x780c1c:c.instructions+=2;goto B780c1c;
case 0x780c22:c.instructions+=1;goto B780c22;
case 0x780c30:goto L780c30;
case 0x780c36:c.instructions+=3;goto B780c36;
case 0x780c38:c.instructions+=2;goto B780c38;
case 0x780c3e:c.instructions+=1;goto B780c3e;
case 0x780c40:goto L780c40;
case 0x780c46:c.instructions+=3;goto B780c46;
case 0x780c4c:c.instructions+=2;goto B780c4c;
case 0x780c52:c.instructions+=1;goto B780c52;
case 0x780c60:goto L780c60;
case 0x780c66:c.instructions+=3;goto B780c66;
case 0x780c68:c.instructions+=2;goto B780c68;
case 0x780c6e:c.instructions+=1;goto B780c6e;
case 0x780c70:goto L780c70;
case 0x780c76:c.instructions+=3;goto B780c76;
case 0x780c7c:c.instructions+=2;goto B780c7c;
case 0x780c82:c.instructions+=1;goto B780c82;
case 0x780c90:goto L780c90;
case 0x780c96:c.instructions+=3;goto B780c96;
case 0x780c98:c.instructions+=2;goto B780c98;
case 0x780c9e:c.instructions+=1;goto B780c9e;
case 0x780ca0:goto L780ca0;
case 0x780ca6:c.instructions+=3;goto B780ca6;
case 0x780cac:c.instructions+=2;goto B780cac;
case 0x780cb2:c.instructions+=1;goto B780cb2;
case 0x780cc0:goto L780cc0;
case 0x780cc6:c.instructions+=3;goto B780cc6;
case 0x780cc8:c.instructions+=2;goto B780cc8;
case 0x780cce:c.instructions+=1;goto B780cce;
case 0x780cd0:goto L780cd0;
case 0x780cd6:c.instructions+=3;goto B780cd6;
case 0x780cdc:c.instructions+=2;goto B780cdc;
case 0x780ce2:c.instructions+=1;goto B780ce2;
case 0x780cf0:goto L780cf0;
case 0x780cf6:c.instructions+=3;goto B780cf6;
case 0x780cf8:c.instructions+=2;goto B780cf8;
case 0x780cfe:c.instructions+=1;goto B780cfe;
case 0x780d00:goto L780d00;
case 0x780d06:c.instructions+=3;goto B780d06;
case 0x780d0c:c.instructions+=2;goto B780d0c;
case 0x780d12:c.instructions+=1;goto B780d12;
case 0x780d20:goto L780d20;
case 0x780d26:c.instructions+=3;goto B780d26;
case 0x780d28:c.instructions+=2;goto B780d28;
case 0x780d2e:c.instructions+=1;goto B780d2e;
case 0x780d30:goto L780d30;
case 0x780d36:c.instructions+=3;goto B780d36;
case 0x780d3c:c.instructions+=2;goto B780d3c;
case 0x780d42:c.instructions+=1;goto B780d42;
case 0x780d50:goto L780d50;
case 0x780d56:c.instructions+=3;goto B780d56;
case 0x780d58:c.instructions+=2;goto B780d58;
case 0x780d5e:c.instructions+=1;goto B780d5e;
case 0x780d60:goto L780d60;
case 0x780d66:c.instructions+=3;goto B780d66;
case 0x780d6c:c.instructions+=2;goto B780d6c;
case 0x780d72:c.instructions+=1;goto B780d72;
case 0x780d80:goto L780d80;
case 0x780d86:c.instructions+=3;goto B780d86;
case 0x780d88:c.instructions+=2;goto B780d88;
case 0x780d8e:c.instructions+=1;goto B780d8e;
case 0x780d90:goto L780d90;
case 0x780d96:c.instructions+=3;goto B780d96;
case 0x780d9c:c.instructions+=2;goto B780d9c;
case 0x780da2:c.instructions+=1;goto B780da2;
case 0x780db0:goto L780db0;
case 0x780db6:c.instructions+=3;goto B780db6;
case 0x780db8:c.instructions+=2;goto B780db8;
case 0x780dbe:c.instructions+=1;goto B780dbe;
case 0x780dc0:goto L780dc0;
case 0x780dc6:c.instructions+=3;goto B780dc6;
case 0x780dcc:c.instructions+=2;goto B780dcc;
case 0x780dd2:c.instructions+=1;goto B780dd2;
case 0x780de0:goto L780de0;
case 0x780de6:c.instructions+=3;goto B780de6;
case 0x780dec:c.instructions+=2;goto B780dec;
case 0x780df2:c.instructions+=1;goto B780df2;
case 0x780e00:goto L780e00;
case 0x780e06:c.instructions+=3;goto B780e06;
case 0x780e08:c.instructions+=2;goto B780e08;
case 0x780e0e:c.instructions+=1;goto B780e0e;
case 0x780e10:goto L780e10;
case 0x780e16:c.instructions+=3;goto B780e16;
case 0x780e1c:c.instructions+=2;goto B780e1c;
case 0x780e22:c.instructions+=1;goto B780e22;
case 0x780e30:goto L780e30;
case 0x780e36:c.instructions+=3;goto B780e36;
case 0x780e38:c.instructions+=2;goto B780e38;
case 0x780e3e:c.instructions+=1;goto B780e3e;
case 0x780e40:goto L780e40;
case 0x780e46:c.instructions+=3;goto B780e46;
case 0x780e4c:c.instructions+=2;goto B780e4c;
case 0x780e52:c.instructions+=1;goto B780e52;
case 0x780e60:goto L780e60;
case 0x780e66:c.instructions+=3;goto B780e66;
case 0x780e6c:c.instructions+=2;goto B780e6c;
case 0x780e72:c.instructions+=1;goto B780e72;
case 0x780e80:goto L780e80;
case 0x780e86:c.instructions+=3;goto B780e86;
case 0x780e88:c.instructions+=2;goto B780e88;
case 0x780e8e:c.instructions+=1;goto B780e8e;
case 0x780e90:goto L780e90;
case 0x780e96:c.instructions+=3;goto B780e96;
case 0x780e98:c.instructions+=2;goto B780e98;
case 0x780e9e:c.instructions+=1;goto B780e9e;
case 0x780ea0:goto L780ea0;
case 0x780ea6:c.instructions+=3;goto B780ea6;
case 0x780ea8:c.instructions+=2;goto B780ea8;
case 0x780eae:c.instructions+=1;goto B780eae;
case 0x780eb0:goto L780eb0;
case 0x780eb6:c.instructions+=3;goto B780eb6;
case 0x780eb8:c.instructions+=2;goto B780eb8;
case 0x780ebe:c.instructions+=1;goto B780ebe;
case 0x780ec0:goto L780ec0;
case 0x780ec6:c.instructions+=3;goto B780ec6;
case 0x780ecc:c.instructions+=2;goto B780ecc;
case 0x780ed2:c.instructions+=1;goto B780ed2;
case 0x780ee0:goto L780ee0;
case 0x780ee6:c.instructions+=3;goto B780ee6;
case 0x780ee8:c.instructions+=2;goto B780ee8;
case 0x780eee:c.instructions+=1;goto B780eee;
case 0x780ef0:goto L780ef0;
case 0x780ef6:c.instructions+=3;goto B780ef6;
case 0x780efc:c.instructions+=2;goto B780efc;
case 0x780f02:c.instructions+=1;goto B780f02;
case 0x780f10:goto L780f10;
case 0x780f16:c.instructions+=3;goto B780f16;
case 0x780f1c:c.instructions+=2;goto B780f1c;
case 0x780f22:c.instructions+=1;goto B780f22;
case 0x780f30:goto L780f30;
case 0x780f36:c.instructions+=3;goto B780f36;
case 0x780f38:c.instructions+=2;goto B780f38;
case 0x780f3e:c.instructions+=1;goto B780f3e;
case 0x780f40:goto L780f40;
case 0x780f46:c.instructions+=3;goto B780f46;
case 0x780f4c:c.instructions+=2;goto B780f4c;
case 0x780f52:c.instructions+=1;goto B780f52;
case 0x780f60:goto L780f60;
case 0x780f66:c.instructions+=3;goto B780f66;
case 0x780f68:c.instructions+=2;goto B780f68;
case 0x780f6e:c.instructions+=1;goto B780f6e;
case 0x780f70:goto L780f70;
case 0x780f76:c.instructions+=3;goto B780f76;
case 0x780f7c:c.instructions+=2;goto B780f7c;
case 0x780f82:c.instructions+=1;goto B780f82;
case 0x780f90:goto L780f90;
case 0x780f96:c.instructions+=3;goto B780f96;
case 0x780f9c:c.instructions+=2;goto B780f9c;
case 0x780fa2:c.instructions+=1;goto B780fa2;
case 0x780fb0:goto L780fb0;
case 0x780fb6:c.instructions+=3;goto B780fb6;
case 0x780fb8:c.instructions+=2;goto B780fb8;
case 0x780fbe:c.instructions+=1;goto B780fbe;
case 0x780fc0:goto L780fc0;
case 0x780fc6:c.instructions+=3;goto B780fc6;
case 0x780fcc:c.instructions+=2;goto B780fcc;
case 0x780fd2:c.instructions+=1;goto B780fd2;
case 0x780fe0:goto L780fe0;
case 0x780fe6:c.instructions+=3;goto B780fe6;
case 0x780fe8:c.instructions+=2;goto B780fe8;
case 0x780fee:c.instructions+=1;goto B780fee;
case 0x780ff0:goto L780ff0;
case 0x780ff6:c.instructions+=2;goto B780ff6;
case 0x780ffc:c.instructions+=1;goto B780ffc;
default:missing_instruction(c.pc);}
B780000:L780000:{c.instructions+=4;NFSU2_TR(0x780000);
{u32 ea_=u32(u32(8129832u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780006:{NFSU2_TR(0x780006);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780008:{NFSU2_TR(0x780008);
{u32 ea_=u32(u32(9076264u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78000e:{NFSU2_TR(0x78000e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780010:L780010:{c.instructions+=4;NFSU2_TR(0x780010);
{u32 ea_=u32(u32(8129832u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780016:{NFSU2_TR(0x780016);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78001c:{NFSU2_TR(0x78001c);
{u32 ea_=u32(u32(9076256u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780022:{NFSU2_TR(0x780022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780028:L780028:{c.instructions+=10;NFSU2_TR(0x780028);
}
B780029:{NFSU2_TR(0x780029);
}
B78002a:{NFSU2_TR(0x78002a);
}
B78002b:{NFSU2_TR(0x78002b);
}
B78002c:{NFSU2_TR(0x78002c);
}
B78002d:{NFSU2_TR(0x78002d);
}
B78002e:{NFSU2_TR(0x78002e);
}
B78002f:{NFSU2_TR(0x78002f);
}
B780030:{NFSU2_TR(0x780030);
w4(R+4,u32(0x8a7bf8ull));
}
B780035:{NFSU2_TR(0x780035);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78003aull));
TAIL_STATIC(0x6dd240u,6dd);
}
B78003a:L78003a:{c.instructions+=2;NFSU2_TR(0x78003a);
u8 U[4];
w4(U+0,u32(0x782900ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78003f:{NFSU2_TR(0x78003f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x780044ull));
TAIL_STATIC(0x75c5edu,75c);
}
B780044:L780044:{c.instructions+=2;NFSU2_TR(0x780044);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B780045:{NFSU2_TR(0x780045);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780050:L780050:{c.instructions+=2;NFSU2_TR(0x780050);
w4(R+4,u32(0x8a7e38ull));
}
B780055:{NFSU2_TR(0x780055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78005aull));
TAIL_STATIC(0x6dd240u,6dd);
}
B78005a:L78005a:{c.instructions+=2;NFSU2_TR(0x78005a);
u8 U[4];
w4(U+0,u32(0x782910ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78005f:{NFSU2_TR(0x78005f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x780064ull));
TAIL_STATIC(0x75c5edu,75c);
}
B780064:L780064:{c.instructions+=2;NFSU2_TR(0x780064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B780065:{NFSU2_TR(0x780065);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780070:L780070:{c.instructions+=4;NFSU2_TR(0x780070);
{u32 ea_=u32(u32(8130112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780076:{NFSU2_TR(0x780076);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780078:{NFSU2_TR(0x780078);
{u32 ea_=u32(u32(9076972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78007e:{NFSU2_TR(0x78007e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780080:L780080:{c.instructions+=4;NFSU2_TR(0x780080);
{u32 ea_=u32(u32(8130112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780086:{NFSU2_TR(0x780086);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78008c:{NFSU2_TR(0x78008c);
{u32 ea_=u32(u32(9076968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780092:{NFSU2_TR(0x780092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7800a0:L7800a0:{c.instructions+=4;NFSU2_TR(0x7800a0);
{u32 ea_=u32(u32(8130120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7800a6:{NFSU2_TR(0x7800a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7800a8:{NFSU2_TR(0x7800a8);
{u32 ea_=u32(u32(9076960u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7800ae:{NFSU2_TR(0x7800ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7800b0:L7800b0:{c.instructions+=4;NFSU2_TR(0x7800b0);
{u32 ea_=u32(u32(8130120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7800b6:{NFSU2_TR(0x7800b6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7800bc:{NFSU2_TR(0x7800bc);
{u32 ea_=u32(u32(9076952u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7800c2:{NFSU2_TR(0x7800c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7800d0:L7800d0:{c.instructions+=4;NFSU2_TR(0x7800d0);
{u32 ea_=u32(u32(8130128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7800d6:{NFSU2_TR(0x7800d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7800d8:{NFSU2_TR(0x7800d8);
{u32 ea_=u32(u32(9077036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7800de:{NFSU2_TR(0x7800de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7800e0:L7800e0:{c.instructions+=4;NFSU2_TR(0x7800e0);
{u32 ea_=u32(u32(8130128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7800e6:{NFSU2_TR(0x7800e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7800ec:{NFSU2_TR(0x7800ec);
{u32 ea_=u32(u32(9077032u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7800f2:{NFSU2_TR(0x7800f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780100:L780100:{c.instructions+=4;NFSU2_TR(0x780100);
{u32 ea_=u32(u32(8130136u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780106:{NFSU2_TR(0x780106);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780108:{NFSU2_TR(0x780108);
{u32 ea_=u32(u32(9077024u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78010e:{NFSU2_TR(0x78010e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780110:L780110:{c.instructions+=4;NFSU2_TR(0x780110);
{u32 ea_=u32(u32(8130136u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780116:{NFSU2_TR(0x780116);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78011c:{NFSU2_TR(0x78011c);
{u32 ea_=u32(u32(9077016u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780122:{NFSU2_TR(0x780122);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780130:L780130:{c.instructions+=4;NFSU2_TR(0x780130);
{u32 ea_=u32(u32(8130160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780136:{NFSU2_TR(0x780136);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780138:{NFSU2_TR(0x780138);
{u32 ea_=u32(u32(9077068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78013e:{NFSU2_TR(0x78013e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780140:L780140:{c.instructions+=4;NFSU2_TR(0x780140);
{u32 ea_=u32(u32(8130160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780146:{NFSU2_TR(0x780146);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78014c:{NFSU2_TR(0x78014c);
{u32 ea_=u32(u32(9077064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780152:{NFSU2_TR(0x780152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780160:L780160:{c.instructions+=4;NFSU2_TR(0x780160);
{u32 ea_=u32(u32(8130168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780166:{NFSU2_TR(0x780166);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780168:{NFSU2_TR(0x780168);
{u32 ea_=u32(u32(9077056u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78016e:{NFSU2_TR(0x78016e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780170:L780170:{c.instructions+=4;NFSU2_TR(0x780170);
{u32 ea_=u32(u32(8130168u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780176:{NFSU2_TR(0x780176);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78017c:{NFSU2_TR(0x78017c);
{u32 ea_=u32(u32(9077048u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780182:{NFSU2_TR(0x780182);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780190:L780190:{c.instructions+=4;NFSU2_TR(0x780190);
{u32 ea_=u32(u32(8130184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780196:{NFSU2_TR(0x780196);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780198:{NFSU2_TR(0x780198);
{u32 ea_=u32(u32(9077644u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78019e:{NFSU2_TR(0x78019e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7801a0:L7801a0:{c.instructions+=4;NFSU2_TR(0x7801a0);
{u32 ea_=u32(u32(8130184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7801a6:{NFSU2_TR(0x7801a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7801ac:{NFSU2_TR(0x7801ac);
{u32 ea_=u32(u32(9077640u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7801b2:{NFSU2_TR(0x7801b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7801c0:L7801c0:{c.instructions+=4;NFSU2_TR(0x7801c0);
{u32 ea_=u32(u32(8130192u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7801c6:{NFSU2_TR(0x7801c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7801c8:{NFSU2_TR(0x7801c8);
{u32 ea_=u32(u32(9077632u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7801ce:{NFSU2_TR(0x7801ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7801d0:L7801d0:{c.instructions+=4;NFSU2_TR(0x7801d0);
{u32 ea_=u32(u32(8130192u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7801d6:{NFSU2_TR(0x7801d6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7801dc:{NFSU2_TR(0x7801dc);
{u32 ea_=u32(u32(9077624u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7801e2:{NFSU2_TR(0x7801e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7801f0:L7801f0:{c.instructions+=2;NFSU2_TR(0x7801f0);
w4(R+4,u32(0x8a8390ull));
}
B7801f5:{NFSU2_TR(0x7801f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7801faull));
TAIL_STATIC(0x6dd240u,6dd);
}
B7801fa:L7801fa:{c.instructions+=2;NFSU2_TR(0x7801fa);
u8 U[4];
w4(U+0,u32(0x782920ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7801ff:{NFSU2_TR(0x7801ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x780204ull));
TAIL_STATIC(0x75c5edu,75c);
}
B780204:L780204:{c.instructions+=2;NFSU2_TR(0x780204);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B780205:{NFSU2_TR(0x780205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780210:L780210:{c.instructions+=4;NFSU2_TR(0x780210);
{u32 ea_=u32(u32(8130200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780216:{NFSU2_TR(0x780216);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780218:{NFSU2_TR(0x780218);
{u32 ea_=u32(u32(9078576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78021e:{NFSU2_TR(0x78021e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780220:L780220:{c.instructions+=4;NFSU2_TR(0x780220);
{u32 ea_=u32(u32(8130200u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780226:{NFSU2_TR(0x780226);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78022c:{NFSU2_TR(0x78022c);
{u32 ea_=u32(u32(9078572u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780232:{NFSU2_TR(0x780232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780240:L780240:{c.instructions+=4;NFSU2_TR(0x780240);
{u32 ea_=u32(u32(8130208u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780246:{NFSU2_TR(0x780246);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780248:{NFSU2_TR(0x780248);
{u32 ea_=u32(u32(9078248u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78024e:{NFSU2_TR(0x78024e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780250:L780250:{c.instructions+=4;NFSU2_TR(0x780250);
{u32 ea_=u32(u32(8130208u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780256:{NFSU2_TR(0x780256);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78025c:{NFSU2_TR(0x78025c);
{u32 ea_=u32(u32(9078240u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780262:{NFSU2_TR(0x780262);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780270:L780270:{c.instructions+=4;NFSU2_TR(0x780270);
u8 U[4];
w4(U+0,u32(0xff00aaaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B780275:{NFSU2_TR(0x780275);
u8 U[4];
w4(U+0,u32(0x7c0fdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78027a:{NFSU2_TR(0x78027a);
w4(R+4,u32(0x8a85f0ull));
}
B78027f:{NFSU2_TR(0x78027f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x780284ull));
TAIL_STATIC(0x6de3f0u,6de);
}
B780284:L780284:{c.instructions+=2;NFSU2_TR(0x780284);
u8 U[4];
w4(U+0,u32(0x782930ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B780289:{NFSU2_TR(0x780289);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78028eull));
TAIL_STATIC(0x75c5edu,75c);
}
B78028e:L78028e:{c.instructions+=2;NFSU2_TR(0x78028e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B78028f:{NFSU2_TR(0x78028f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780290:L780290:{c.instructions+=4;NFSU2_TR(0x780290);
u8 U[4];
w4(U+0,u32(0xffffff50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B780295:{NFSU2_TR(0x780295);
u8 U[4];
w4(U+0,u32(0x7c0fe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78029a:{NFSU2_TR(0x78029a);
w4(R+4,u32(0x8a8738ull));
}
B78029f:{NFSU2_TR(0x78029f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7802a4ull));
TAIL_STATIC(0x6de3f0u,6de);
}
B7802a4:L7802a4:{c.instructions+=2;NFSU2_TR(0x7802a4);
u8 U[4];
w4(U+0,u32(0x782940ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7802a9:{NFSU2_TR(0x7802a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7802aeull));
TAIL_STATIC(0x75c5edu,75c);
}
B7802ae:L7802ae:{c.instructions+=2;NFSU2_TR(0x7802ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7802af:{NFSU2_TR(0x7802af);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7802b0:L7802b0:{c.instructions+=3;NFSU2_TR(0x7802b0);
w4(R+4,u32(0x8a8718ull));
}
B7802b5:{NFSU2_TR(0x7802b5);
s4(0x8a8718,u32(0x8a8738ull));
}
B7802bf:{NFSU2_TR(0x7802bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7802c4ull));
TAIL_STATIC(0x6de6b0u,6de);
}
B7802c4:L7802c4:{c.instructions+=2;NFSU2_TR(0x7802c4);
u8 U[4];
w4(U+0,u32(0x782950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B7802c9:{NFSU2_TR(0x7802c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x7802ceull));
TAIL_STATIC(0x75c5edu,75c);
}
B7802ce:L7802ce:{c.instructions+=2;NFSU2_TR(0x7802ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B7802cf:{NFSU2_TR(0x7802cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7802d0:L7802d0:{c.instructions+=4;NFSU2_TR(0x7802d0);
{u32 ea_=u32(u32(8130552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7802d6:{NFSU2_TR(0x7802d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7802d8:{NFSU2_TR(0x7802d8);
{u32 ea_=u32(u32(9087700u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7802de:{NFSU2_TR(0x7802de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7802e0:L7802e0:{c.instructions+=4;NFSU2_TR(0x7802e0);
{u32 ea_=u32(u32(8130552u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7802e6:{NFSU2_TR(0x7802e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7802ec:{NFSU2_TR(0x7802ec);
{u32 ea_=u32(u32(9087696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7802f2:{NFSU2_TR(0x7802f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780300:L780300:{c.instructions+=4;NFSU2_TR(0x780300);
{u32 ea_=u32(u32(8130560u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780306:{NFSU2_TR(0x780306);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780308:{NFSU2_TR(0x780308);
{u32 ea_=u32(u32(9087688u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78030e:{NFSU2_TR(0x78030e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780310:L780310:{c.instructions+=4;NFSU2_TR(0x780310);
{u32 ea_=u32(u32(8130560u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780316:{NFSU2_TR(0x780316);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78031c:{NFSU2_TR(0x78031c);
{u32 ea_=u32(u32(9087680u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780322:{NFSU2_TR(0x780322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780330:L780330:{c.instructions+=2;NFSU2_TR(0x780330);
w4(R+4,u32(0x8aaad8ull));
}
B780335:{NFSU2_TR(0x780335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x78033aull));
TAIL_STATIC(0x6db740u,6db);
}
B78033a:L78033a:{c.instructions+=2;NFSU2_TR(0x78033a);
u8 U[4];
w4(U+0,u32(0x782960ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B78033f:{NFSU2_TR(0x78033f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x780344ull));
TAIL_STATIC(0x75c5edu,75c);
}
B780344:L780344:{c.instructions+=2;NFSU2_TR(0x780344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B780345:{NFSU2_TR(0x780345);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780350:L780350:{c.instructions+=4;NFSU2_TR(0x780350);
{u32 ea_=u32(u32(8130832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780356:{NFSU2_TR(0x780356);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780358:{NFSU2_TR(0x780358);
{u32 ea_=u32(u32(9088188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78035e:{NFSU2_TR(0x78035e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780360:L780360:{c.instructions+=4;NFSU2_TR(0x780360);
{u32 ea_=u32(u32(8130832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780366:{NFSU2_TR(0x780366);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78036c:{NFSU2_TR(0x78036c);
{u32 ea_=u32(u32(9088184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780372:{NFSU2_TR(0x780372);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780380:L780380:{c.instructions+=4;NFSU2_TR(0x780380);
{u32 ea_=u32(u32(8130840u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780386:{NFSU2_TR(0x780386);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780388:{NFSU2_TR(0x780388);
{u32 ea_=u32(u32(9088176u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78038e:{NFSU2_TR(0x78038e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780390:L780390:{c.instructions+=4;NFSU2_TR(0x780390);
{u32 ea_=u32(u32(8130840u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780396:{NFSU2_TR(0x780396);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78039c:{NFSU2_TR(0x78039c);
{u32 ea_=u32(u32(9088168u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7803a2:{NFSU2_TR(0x7803a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7803b0:L7803b0:{c.instructions+=4;NFSU2_TR(0x7803b0);
{u32 ea_=u32(u32(8131112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7803b6:{NFSU2_TR(0x7803b6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7803b8:{NFSU2_TR(0x7803b8);
{u32 ea_=u32(u32(9088428u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7803be:{NFSU2_TR(0x7803be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7803c0:L7803c0:{c.instructions+=4;NFSU2_TR(0x7803c0);
{u32 ea_=u32(u32(8131112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7803c6:{NFSU2_TR(0x7803c6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7803cc:{NFSU2_TR(0x7803cc);
{u32 ea_=u32(u32(9088424u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7803d2:{NFSU2_TR(0x7803d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7803e0:L7803e0:{c.instructions+=4;NFSU2_TR(0x7803e0);
{u32 ea_=u32(u32(8131120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7803e6:{NFSU2_TR(0x7803e6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7803e8:{NFSU2_TR(0x7803e8);
{u32 ea_=u32(u32(9088416u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7803ee:{NFSU2_TR(0x7803ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7803f0:L7803f0:{c.instructions+=4;NFSU2_TR(0x7803f0);
{u32 ea_=u32(u32(8131120u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7803f6:{NFSU2_TR(0x7803f6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7803fc:{NFSU2_TR(0x7803fc);
{u32 ea_=u32(u32(9088408u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780402:{NFSU2_TR(0x780402);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780410:L780410:{c.instructions+=4;NFSU2_TR(0x780410);
{u32 ea_=u32(u32(8131384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780416:{NFSU2_TR(0x780416);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780418:{NFSU2_TR(0x780418);
{u32 ea_=u32(u32(9088452u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78041e:{NFSU2_TR(0x78041e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780420:L780420:{c.instructions+=4;NFSU2_TR(0x780420);
{u32 ea_=u32(u32(8131384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780426:{NFSU2_TR(0x780426);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78042c:{NFSU2_TR(0x78042c);
{u32 ea_=u32(u32(9088448u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780432:{NFSU2_TR(0x780432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780440:L780440:{c.instructions+=4;NFSU2_TR(0x780440);
{u32 ea_=u32(u32(8131392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780446:{NFSU2_TR(0x780446);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780448:{NFSU2_TR(0x780448);
{u32 ea_=u32(u32(9088440u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78044e:{NFSU2_TR(0x78044e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780450:L780450:{c.instructions+=4;NFSU2_TR(0x780450);
{u32 ea_=u32(u32(8131392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780456:{NFSU2_TR(0x780456);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78045c:{NFSU2_TR(0x78045c);
{u32 ea_=u32(u32(9088432u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780462:{NFSU2_TR(0x780462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780470:L780470:{c.instructions+=4;NFSU2_TR(0x780470);
{u32 ea_=u32(u32(8131400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780476:{NFSU2_TR(0x780476);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780478:{NFSU2_TR(0x780478);
{u32 ea_=u32(u32(9088476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78047e:{NFSU2_TR(0x78047e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780480:L780480:{c.instructions+=4;NFSU2_TR(0x780480);
{u32 ea_=u32(u32(8131400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780486:{NFSU2_TR(0x780486);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78048c:{NFSU2_TR(0x78048c);
{u32 ea_=u32(u32(9088472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780492:{NFSU2_TR(0x780492);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7804a0:L7804a0:{c.instructions+=4;NFSU2_TR(0x7804a0);
{u32 ea_=u32(u32(8131408u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7804a6:{NFSU2_TR(0x7804a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7804a8:{NFSU2_TR(0x7804a8);
{u32 ea_=u32(u32(9088464u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7804ae:{NFSU2_TR(0x7804ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7804b0:L7804b0:{c.instructions+=4;NFSU2_TR(0x7804b0);
{u32 ea_=u32(u32(8131408u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7804b6:{NFSU2_TR(0x7804b6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7804bc:{NFSU2_TR(0x7804bc);
{u32 ea_=u32(u32(9088456u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7804c2:{NFSU2_TR(0x7804c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7804d0:L7804d0:{c.instructions+=4;NFSU2_TR(0x7804d0);
{u32 ea_=u32(u32(8131416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7804d6:{NFSU2_TR(0x7804d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7804d8:{NFSU2_TR(0x7804d8);
{u32 ea_=u32(u32(9088500u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7804de:{NFSU2_TR(0x7804de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7804e0:L7804e0:{c.instructions+=4;NFSU2_TR(0x7804e0);
{u32 ea_=u32(u32(8131416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7804e6:{NFSU2_TR(0x7804e6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7804ec:{NFSU2_TR(0x7804ec);
{u32 ea_=u32(u32(9088496u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7804f2:{NFSU2_TR(0x7804f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780500:L780500:{c.instructions+=4;NFSU2_TR(0x780500);
{u32 ea_=u32(u32(8131424u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780506:{NFSU2_TR(0x780506);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780508:{NFSU2_TR(0x780508);
{u32 ea_=u32(u32(9088488u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78050e:{NFSU2_TR(0x78050e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780510:L780510:{c.instructions+=4;NFSU2_TR(0x780510);
{u32 ea_=u32(u32(8131424u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780516:{NFSU2_TR(0x780516);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78051c:{NFSU2_TR(0x78051c);
{u32 ea_=u32(u32(9088480u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780522:{NFSU2_TR(0x780522);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780530:L780530:{c.instructions+=4;NFSU2_TR(0x780530);
{u32 ea_=u32(u32(8131688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780536:{NFSU2_TR(0x780536);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780538:{NFSU2_TR(0x780538);
{u32 ea_=u32(u32(9088524u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78053e:{NFSU2_TR(0x78053e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780540:L780540:{c.instructions+=4;NFSU2_TR(0x780540);
{u32 ea_=u32(u32(8131688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780546:{NFSU2_TR(0x780546);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78054c:{NFSU2_TR(0x78054c);
{u32 ea_=u32(u32(9088520u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780552:{NFSU2_TR(0x780552);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780560:L780560:{c.instructions+=4;NFSU2_TR(0x780560);
{u32 ea_=u32(u32(8131696u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780566:{NFSU2_TR(0x780566);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780568:{NFSU2_TR(0x780568);
{u32 ea_=u32(u32(9088512u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78056e:{NFSU2_TR(0x78056e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780570:L780570:{c.instructions+=4;NFSU2_TR(0x780570);
{u32 ea_=u32(u32(8131696u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780576:{NFSU2_TR(0x780576);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78057c:{NFSU2_TR(0x78057c);
{u32 ea_=u32(u32(9088504u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780582:{NFSU2_TR(0x780582);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780590:L780590:{c.instructions+=4;NFSU2_TR(0x780590);
{u32 ea_=u32(u32(8131768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780596:{NFSU2_TR(0x780596);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780598:{NFSU2_TR(0x780598);
{u32 ea_=u32(u32(9089724u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78059e:{NFSU2_TR(0x78059e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7805a0:L7805a0:{c.instructions+=4;NFSU2_TR(0x7805a0);
{u32 ea_=u32(u32(8131768u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7805a6:{NFSU2_TR(0x7805a6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7805ac:{NFSU2_TR(0x7805ac);
{u32 ea_=u32(u32(9089720u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7805b2:{NFSU2_TR(0x7805b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7805c0:L7805c0:{c.instructions+=4;NFSU2_TR(0x7805c0);
{u32 ea_=u32(u32(8131776u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7805c6:{NFSU2_TR(0x7805c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7805c8:{NFSU2_TR(0x7805c8);
{u32 ea_=u32(u32(9089712u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7805ce:{NFSU2_TR(0x7805ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7805d0:L7805d0:{c.instructions+=4;NFSU2_TR(0x7805d0);
{u32 ea_=u32(u32(8131776u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7805d6:{NFSU2_TR(0x7805d6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7805dc:{NFSU2_TR(0x7805dc);
{u32 ea_=u32(u32(9089704u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7805e2:{NFSU2_TR(0x7805e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7805f0:L7805f0:{c.instructions+=4;NFSU2_TR(0x7805f0);
{u32 ea_=u32(u32(8131812u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7805f6:{NFSU2_TR(0x7805f6);
{u32 ea_=u32(u32(8131808u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B7805fc:{NFSU2_TR(0x7805fc);
{u32 ea_=u32(u32(9089692u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780602:{NFSU2_TR(0x780602);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780610:L780610:{c.instructions+=4;NFSU2_TR(0x780610);
{u32 ea_=u32(u32(8131804u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780616:{NFSU2_TR(0x780616);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780618:{NFSU2_TR(0x780618);
{u32 ea_=u32(u32(9089696u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78061e:{NFSU2_TR(0x78061e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780620:L780620:{c.instructions+=4;NFSU2_TR(0x780620);
{u32 ea_=u32(u32(8131792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780626:{NFSU2_TR(0x780626);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780628:{NFSU2_TR(0x780628);
{u32 ea_=u32(u32(9089728u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78062e:{NFSU2_TR(0x78062e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780630:L780630:{c.instructions+=4;NFSU2_TR(0x780630);
{u32 ea_=u32(u32(8131800u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780636:{NFSU2_TR(0x780636);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780638:{NFSU2_TR(0x780638);
{u32 ea_=u32(u32(9089688u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78063e:{NFSU2_TR(0x78063e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780640:L780640:{c.instructions+=4;NFSU2_TR(0x780640);
{u32 ea_=u32(u32(8133360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780646:{NFSU2_TR(0x780646);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780648:{NFSU2_TR(0x780648);
{u32 ea_=u32(u32(9089756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78064e:{NFSU2_TR(0x78064e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780650:L780650:{c.instructions+=4;NFSU2_TR(0x780650);
{u32 ea_=u32(u32(8133360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780656:{NFSU2_TR(0x780656);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78065c:{NFSU2_TR(0x78065c);
{u32 ea_=u32(u32(9089752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780662:{NFSU2_TR(0x780662);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780670:L780670:{c.instructions+=4;NFSU2_TR(0x780670);
{u32 ea_=u32(u32(8133368u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780676:{NFSU2_TR(0x780676);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780678:{NFSU2_TR(0x780678);
{u32 ea_=u32(u32(9089744u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78067e:{NFSU2_TR(0x78067e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780680:L780680:{c.instructions+=4;NFSU2_TR(0x780680);
{u32 ea_=u32(u32(8133368u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780686:{NFSU2_TR(0x780686);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78068c:{NFSU2_TR(0x78068c);
{u32 ea_=u32(u32(9089736u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780692:{NFSU2_TR(0x780692);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7806a0:L7806a0:{c.instructions+=4;NFSU2_TR(0x7806a0);
{u32 ea_=u32(u32(8133384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7806a6:{NFSU2_TR(0x7806a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7806a8:{NFSU2_TR(0x7806a8);
{u32 ea_=u32(u32(9089780u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7806ae:{NFSU2_TR(0x7806ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7806b0:L7806b0:{c.instructions+=4;NFSU2_TR(0x7806b0);
{u32 ea_=u32(u32(8133384u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7806b6:{NFSU2_TR(0x7806b6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7806bc:{NFSU2_TR(0x7806bc);
{u32 ea_=u32(u32(9089776u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7806c2:{NFSU2_TR(0x7806c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7806d0:L7806d0:{c.instructions+=4;NFSU2_TR(0x7806d0);
{u32 ea_=u32(u32(8133392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7806d6:{NFSU2_TR(0x7806d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7806d8:{NFSU2_TR(0x7806d8);
{u32 ea_=u32(u32(9089768u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7806de:{NFSU2_TR(0x7806de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7806e0:L7806e0:{c.instructions+=4;NFSU2_TR(0x7806e0);
{u32 ea_=u32(u32(8133392u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7806e6:{NFSU2_TR(0x7806e6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7806ec:{NFSU2_TR(0x7806ec);
{u32 ea_=u32(u32(9089760u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7806f2:{NFSU2_TR(0x7806f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780700:L780700:{c.instructions+=4;NFSU2_TR(0x780700);
{u32 ea_=u32(u32(8133408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780706:{NFSU2_TR(0x780706);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780708:{NFSU2_TR(0x780708);
{u32 ea_=u32(u32(9089812u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78070e:{NFSU2_TR(0x78070e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780710:L780710:{c.instructions+=4;NFSU2_TR(0x780710);
{u32 ea_=u32(u32(8133408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780716:{NFSU2_TR(0x780716);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78071c:{NFSU2_TR(0x78071c);
{u32 ea_=u32(u32(9089808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780722:{NFSU2_TR(0x780722);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780730:L780730:{c.instructions+=4;NFSU2_TR(0x780730);
{u32 ea_=u32(u32(8133416u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780736:{NFSU2_TR(0x780736);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780738:{NFSU2_TR(0x780738);
{u32 ea_=u32(u32(9089800u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78073e:{NFSU2_TR(0x78073e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780740:L780740:{c.instructions+=4;NFSU2_TR(0x780740);
{u32 ea_=u32(u32(8133416u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780746:{NFSU2_TR(0x780746);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78074c:{NFSU2_TR(0x78074c);
{u32 ea_=u32(u32(9089792u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780752:{NFSU2_TR(0x780752);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780760:L780760:{c.instructions+=4;NFSU2_TR(0x780760);
{u32 ea_=u32(u32(8133424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780766:{NFSU2_TR(0x780766);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780768:{NFSU2_TR(0x780768);
{u32 ea_=u32(u32(9089876u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78076e:{NFSU2_TR(0x78076e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780770:L780770:{c.instructions+=4;NFSU2_TR(0x780770);
{u32 ea_=u32(u32(8133424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780776:{NFSU2_TR(0x780776);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78077c:{NFSU2_TR(0x78077c);
{u32 ea_=u32(u32(9089872u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780782:{NFSU2_TR(0x780782);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780790:L780790:{c.instructions+=4;NFSU2_TR(0x780790);
{u32 ea_=u32(u32(8133432u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780796:{NFSU2_TR(0x780796);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780798:{NFSU2_TR(0x780798);
{u32 ea_=u32(u32(9089864u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78079e:{NFSU2_TR(0x78079e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7807a0:L7807a0:{c.instructions+=4;NFSU2_TR(0x7807a0);
{u32 ea_=u32(u32(8133432u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7807a6:{NFSU2_TR(0x7807a6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7807ac:{NFSU2_TR(0x7807ac);
{u32 ea_=u32(u32(9089856u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7807b2:{NFSU2_TR(0x7807b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7807c0:L7807c0:{c.instructions+=4;NFSU2_TR(0x7807c0);
w4(R+0,u32(0x8ab320ull));
}
B7807c5:{NFSU2_TR(0x7807c5);
w4(R+4,u32(0x3ull));
}
B7807ca:{NFSU2_TR(0x7807ca);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B7807cc:{NFSU2_TR(0x7807cc);
__builtin_memmove((R+16),(R+16),4);
}
B7807d0:L7807d0:{c.instructions+=6;NFSU2_TR(0x7807d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7807d3:{NFSU2_TR(0x7807d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B7807d6:{NFSU2_TR(0x7807d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B7807d8:{NFSU2_TR(0x7807d8);
w1(R+512,carry<u32>(r4(R+0),u32(0xcull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B7807db:{NFSU2_TR(0x7807db);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B7807dc:{NFSU2_TR(0x7807dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x7807d0u);}goto L7807d0;}}
}
B7807de:L7807de:{c.instructions+=1;NFSU2_TR(0x7807de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7807e0:L7807e0:{c.instructions+=4;NFSU2_TR(0x7807e0);
{u32 ea_=u32(u32(8133440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7807e6:{NFSU2_TR(0x7807e6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7807e8:{NFSU2_TR(0x7807e8);
{u32 ea_=u32(u32(9089900u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7807ee:{NFSU2_TR(0x7807ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7807f0:L7807f0:{c.instructions+=4;NFSU2_TR(0x7807f0);
{u32 ea_=u32(u32(8133440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7807f6:{NFSU2_TR(0x7807f6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7807fc:{NFSU2_TR(0x7807fc);
{u32 ea_=u32(u32(9089896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780802:{NFSU2_TR(0x780802);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780810:L780810:{c.instructions+=4;NFSU2_TR(0x780810);
{u32 ea_=u32(u32(8133448u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780816:{NFSU2_TR(0x780816);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780818:{NFSU2_TR(0x780818);
{u32 ea_=u32(u32(9089888u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78081e:{NFSU2_TR(0x78081e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780820:L780820:{c.instructions+=4;NFSU2_TR(0x780820);
{u32 ea_=u32(u32(8133448u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780826:{NFSU2_TR(0x780826);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78082c:{NFSU2_TR(0x78082c);
{u32 ea_=u32(u32(9089880u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780832:{NFSU2_TR(0x780832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780840:L780840:{c.instructions+=4;NFSU2_TR(0x780840);
{u32 ea_=u32(u32(8133456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780846:{NFSU2_TR(0x780846);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780848:{NFSU2_TR(0x780848);
{u32 ea_=u32(u32(9089924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78084e:{NFSU2_TR(0x78084e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780850:L780850:{c.instructions+=4;NFSU2_TR(0x780850);
{u32 ea_=u32(u32(8133456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780856:{NFSU2_TR(0x780856);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78085c:{NFSU2_TR(0x78085c);
{u32 ea_=u32(u32(9089920u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780862:{NFSU2_TR(0x780862);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780870:L780870:{c.instructions+=4;NFSU2_TR(0x780870);
{u32 ea_=u32(u32(8133464u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780876:{NFSU2_TR(0x780876);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780878:{NFSU2_TR(0x780878);
{u32 ea_=u32(u32(9089912u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78087e:{NFSU2_TR(0x78087e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780880:L780880:{c.instructions+=4;NFSU2_TR(0x780880);
{u32 ea_=u32(u32(8133464u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780886:{NFSU2_TR(0x780886);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78088c:{NFSU2_TR(0x78088c);
{u32 ea_=u32(u32(9089904u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780892:{NFSU2_TR(0x780892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7808a0:L7808a0:{c.instructions+=4;NFSU2_TR(0x7808a0);
{u32 ea_=u32(u32(8133560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7808a6:{NFSU2_TR(0x7808a6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7808a8:{NFSU2_TR(0x7808a8);
{u32 ea_=u32(u32(9089948u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7808ae:{NFSU2_TR(0x7808ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7808b0:L7808b0:{c.instructions+=4;NFSU2_TR(0x7808b0);
{u32 ea_=u32(u32(8133560u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7808b6:{NFSU2_TR(0x7808b6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7808bc:{NFSU2_TR(0x7808bc);
{u32 ea_=u32(u32(9089944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7808c2:{NFSU2_TR(0x7808c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7808d0:L7808d0:{c.instructions+=4;NFSU2_TR(0x7808d0);
{u32 ea_=u32(u32(8133568u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7808d6:{NFSU2_TR(0x7808d6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7808d8:{NFSU2_TR(0x7808d8);
{u32 ea_=u32(u32(9089936u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7808de:{NFSU2_TR(0x7808de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7808e0:L7808e0:{c.instructions+=4;NFSU2_TR(0x7808e0);
{u32 ea_=u32(u32(8133568u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7808e6:{NFSU2_TR(0x7808e6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7808ec:{NFSU2_TR(0x7808ec);
{u32 ea_=u32(u32(9089928u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7808f2:{NFSU2_TR(0x7808f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780900:L780900:{c.instructions+=4;NFSU2_TR(0x780900);
{u32 ea_=u32(u32(8133584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780906:{NFSU2_TR(0x780906);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780908:{NFSU2_TR(0x780908);
{u32 ea_=u32(u32(9089972u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78090e:{NFSU2_TR(0x78090e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780910:L780910:{c.instructions+=4;NFSU2_TR(0x780910);
{u32 ea_=u32(u32(8133584u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780916:{NFSU2_TR(0x780916);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78091c:{NFSU2_TR(0x78091c);
{u32 ea_=u32(u32(9089968u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780922:{NFSU2_TR(0x780922);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780930:L780930:{c.instructions+=4;NFSU2_TR(0x780930);
{u32 ea_=u32(u32(8133592u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780936:{NFSU2_TR(0x780936);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780938:{NFSU2_TR(0x780938);
{u32 ea_=u32(u32(9089960u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78093e:{NFSU2_TR(0x78093e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780940:L780940:{c.instructions+=4;NFSU2_TR(0x780940);
{u32 ea_=u32(u32(8133592u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780946:{NFSU2_TR(0x780946);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B78094c:{NFSU2_TR(0x78094c);
{u32 ea_=u32(u32(9089952u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780952:{NFSU2_TR(0x780952);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780960:L780960:{c.instructions+=4;NFSU2_TR(0x780960);
{u32 ea_=u32(u32(8133600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780966:{NFSU2_TR(0x780966);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780968:{NFSU2_TR(0x780968);
{u32 ea_=u32(u32(9089996u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B78096e:{NFSU2_TR(0x78096e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780970:L780970:{c.instructions+=4;NFSU2_TR(0x780970);
{u32 ea_=u32(u32(8133600u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780976:{NFSU2_TR(0x780976);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B78097c:{NFSU2_TR(0x78097c);
{u32 ea_=u32(u32(9089992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780982:{NFSU2_TR(0x780982);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780990:L780990:{c.instructions+=4;NFSU2_TR(0x780990);
{u32 ea_=u32(u32(8133608u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780996:{NFSU2_TR(0x780996);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780998:{NFSU2_TR(0x780998);
{u32 ea_=u32(u32(9089984u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B78099e:{NFSU2_TR(0x78099e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7809a0:L7809a0:{c.instructions+=4;NFSU2_TR(0x7809a0);
{u32 ea_=u32(u32(8133608u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7809a6:{NFSU2_TR(0x7809a6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B7809ac:{NFSU2_TR(0x7809ac);
{u32 ea_=u32(u32(9089976u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7809b2:{NFSU2_TR(0x7809b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7809c0:L7809c0:{c.instructions+=4;NFSU2_TR(0x7809c0);
{u32 ea_=u32(u32(8133624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7809c6:{NFSU2_TR(0x7809c6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7809c8:{NFSU2_TR(0x7809c8);
{u32 ea_=u32(u32(9090020u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7809ce:{NFSU2_TR(0x7809ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7809d0:L7809d0:{c.instructions+=4;NFSU2_TR(0x7809d0);
{u32 ea_=u32(u32(8133624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B7809d6:{NFSU2_TR(0x7809d6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B7809dc:{NFSU2_TR(0x7809dc);
{u32 ea_=u32(u32(9090016u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B7809e2:{NFSU2_TR(0x7809e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B7809f0:L7809f0:{c.instructions+=4;NFSU2_TR(0x7809f0);
{u32 ea_=u32(u32(8133632u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B7809f6:{NFSU2_TR(0x7809f6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B7809f8:{NFSU2_TR(0x7809f8);
{u32 ea_=u32(u32(9090008u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B7809fe:{NFSU2_TR(0x7809fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a00:L780a00:{c.instructions+=4;NFSU2_TR(0x780a00);
{u32 ea_=u32(u32(8133632u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780a06:{NFSU2_TR(0x780a06);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780a0c:{NFSU2_TR(0x780a0c);
{u32 ea_=u32(u32(9090000u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780a12:{NFSU2_TR(0x780a12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a20:L780a20:{c.instructions+=4;NFSU2_TR(0x780a20);
{u32 ea_=u32(u32(8133648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780a26:{NFSU2_TR(0x780a26);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780a28:{NFSU2_TR(0x780a28);
{u32 ea_=u32(u32(9090044u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780a2e:{NFSU2_TR(0x780a2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a30:L780a30:{c.instructions+=4;NFSU2_TR(0x780a30);
{u32 ea_=u32(u32(8133648u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780a36:{NFSU2_TR(0x780a36);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780a3c:{NFSU2_TR(0x780a3c);
{u32 ea_=u32(u32(9090040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780a42:{NFSU2_TR(0x780a42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a50:L780a50:{c.instructions+=4;NFSU2_TR(0x780a50);
{u32 ea_=u32(u32(8133656u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780a56:{NFSU2_TR(0x780a56);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780a58:{NFSU2_TR(0x780a58);
{u32 ea_=u32(u32(9090032u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780a5e:{NFSU2_TR(0x780a5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a60:L780a60:{c.instructions+=4;NFSU2_TR(0x780a60);
{u32 ea_=u32(u32(8133656u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780a66:{NFSU2_TR(0x780a66);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780a6c:{NFSU2_TR(0x780a6c);
{u32 ea_=u32(u32(9090024u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780a72:{NFSU2_TR(0x780a72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a80:L780a80:{c.instructions+=4;NFSU2_TR(0x780a80);
{u32 ea_=u32(u32(8133672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780a86:{NFSU2_TR(0x780a86);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780a88:{NFSU2_TR(0x780a88);
{u32 ea_=u32(u32(9090068u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780a8e:{NFSU2_TR(0x780a8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780a90:L780a90:{c.instructions+=4;NFSU2_TR(0x780a90);
{u32 ea_=u32(u32(8133672u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780a96:{NFSU2_TR(0x780a96);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780a9c:{NFSU2_TR(0x780a9c);
{u32 ea_=u32(u32(9090064u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780aa2:{NFSU2_TR(0x780aa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ab0:L780ab0:{c.instructions+=4;NFSU2_TR(0x780ab0);
{u32 ea_=u32(u32(8133680u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780ab6:{NFSU2_TR(0x780ab6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780ab8:{NFSU2_TR(0x780ab8);
{u32 ea_=u32(u32(9090056u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780abe:{NFSU2_TR(0x780abe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ac0:L780ac0:{c.instructions+=4;NFSU2_TR(0x780ac0);
{u32 ea_=u32(u32(8133680u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780ac6:{NFSU2_TR(0x780ac6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780acc:{NFSU2_TR(0x780acc);
{u32 ea_=u32(u32(9090048u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780ad2:{NFSU2_TR(0x780ad2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ae0:L780ae0:{c.instructions+=4;NFSU2_TR(0x780ae0);
{u32 ea_=u32(u32(8133688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780ae6:{NFSU2_TR(0x780ae6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780ae8:{NFSU2_TR(0x780ae8);
{u32 ea_=u32(u32(9090092u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780aee:{NFSU2_TR(0x780aee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780af0:L780af0:{c.instructions+=4;NFSU2_TR(0x780af0);
{u32 ea_=u32(u32(8133688u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780af6:{NFSU2_TR(0x780af6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780afc:{NFSU2_TR(0x780afc);
{u32 ea_=u32(u32(9090088u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780b02:{NFSU2_TR(0x780b02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780b10:L780b10:{c.instructions+=4;NFSU2_TR(0x780b10);
{u32 ea_=u32(u32(8133696u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780b16:{NFSU2_TR(0x780b16);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780b18:{NFSU2_TR(0x780b18);
{u32 ea_=u32(u32(9090080u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780b1e:{NFSU2_TR(0x780b1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780b20:L780b20:{c.instructions+=4;NFSU2_TR(0x780b20);
{u32 ea_=u32(u32(8133696u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780b26:{NFSU2_TR(0x780b26);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780b2c:{NFSU2_TR(0x780b2c);
{u32 ea_=u32(u32(9090072u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780b32:{NFSU2_TR(0x780b32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780b40:L780b40:{c.instructions+=4;NFSU2_TR(0x780b40);
{u32 ea_=u32(u32(8133712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780b46:{NFSU2_TR(0x780b46);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780b48:{NFSU2_TR(0x780b48);
{u32 ea_=u32(u32(9090116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780b4e:{NFSU2_TR(0x780b4e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780b50:L780b50:{c.instructions+=4;NFSU2_TR(0x780b50);
{u32 ea_=u32(u32(8133712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780b56:{NFSU2_TR(0x780b56);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780b5c:{NFSU2_TR(0x780b5c);
{u32 ea_=u32(u32(9090112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780b62:{NFSU2_TR(0x780b62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780b70:L780b70:{c.instructions+=4;NFSU2_TR(0x780b70);
{u32 ea_=u32(u32(8133720u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780b76:{NFSU2_TR(0x780b76);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780b78:{NFSU2_TR(0x780b78);
{u32 ea_=u32(u32(9090104u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780b7e:{NFSU2_TR(0x780b7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780b80:L780b80:{c.instructions+=4;NFSU2_TR(0x780b80);
{u32 ea_=u32(u32(8133720u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780b86:{NFSU2_TR(0x780b86);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780b8c:{NFSU2_TR(0x780b8c);
{u32 ea_=u32(u32(9090096u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780b92:{NFSU2_TR(0x780b92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ba0:L780ba0:{c.instructions+=4;NFSU2_TR(0x780ba0);
{u32 ea_=u32(u32(8133736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780ba6:{NFSU2_TR(0x780ba6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780ba8:{NFSU2_TR(0x780ba8);
{u32 ea_=u32(u32(9090140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780bae:{NFSU2_TR(0x780bae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780bb0:L780bb0:{c.instructions+=4;NFSU2_TR(0x780bb0);
{u32 ea_=u32(u32(8133736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780bb6:{NFSU2_TR(0x780bb6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780bbc:{NFSU2_TR(0x780bbc);
{u32 ea_=u32(u32(9090136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780bc2:{NFSU2_TR(0x780bc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780bd0:L780bd0:{c.instructions+=4;NFSU2_TR(0x780bd0);
{u32 ea_=u32(u32(8133744u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780bd6:{NFSU2_TR(0x780bd6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780bd8:{NFSU2_TR(0x780bd8);
{u32 ea_=u32(u32(9090128u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780bde:{NFSU2_TR(0x780bde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780be0:L780be0:{c.instructions+=4;NFSU2_TR(0x780be0);
{u32 ea_=u32(u32(8133744u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780be6:{NFSU2_TR(0x780be6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780bec:{NFSU2_TR(0x780bec);
{u32 ea_=u32(u32(9090120u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780bf2:{NFSU2_TR(0x780bf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c00:L780c00:{c.instructions+=4;NFSU2_TR(0x780c00);
{u32 ea_=u32(u32(8133760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780c06:{NFSU2_TR(0x780c06);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780c08:{NFSU2_TR(0x780c08);
{u32 ea_=u32(u32(9090164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780c0e:{NFSU2_TR(0x780c0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c10:L780c10:{c.instructions+=4;NFSU2_TR(0x780c10);
{u32 ea_=u32(u32(8133760u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780c16:{NFSU2_TR(0x780c16);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780c1c:{NFSU2_TR(0x780c1c);
{u32 ea_=u32(u32(9090160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780c22:{NFSU2_TR(0x780c22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c30:L780c30:{c.instructions+=4;NFSU2_TR(0x780c30);
{u32 ea_=u32(u32(8133768u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780c36:{NFSU2_TR(0x780c36);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780c38:{NFSU2_TR(0x780c38);
{u32 ea_=u32(u32(9090152u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780c3e:{NFSU2_TR(0x780c3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c40:L780c40:{c.instructions+=4;NFSU2_TR(0x780c40);
{u32 ea_=u32(u32(8133768u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780c46:{NFSU2_TR(0x780c46);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780c4c:{NFSU2_TR(0x780c4c);
{u32 ea_=u32(u32(9090144u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780c52:{NFSU2_TR(0x780c52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c60:L780c60:{c.instructions+=4;NFSU2_TR(0x780c60);
{u32 ea_=u32(u32(8133784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780c66:{NFSU2_TR(0x780c66);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780c68:{NFSU2_TR(0x780c68);
{u32 ea_=u32(u32(9090188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780c6e:{NFSU2_TR(0x780c6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c70:L780c70:{c.instructions+=4;NFSU2_TR(0x780c70);
{u32 ea_=u32(u32(8133784u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780c76:{NFSU2_TR(0x780c76);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780c7c:{NFSU2_TR(0x780c7c);
{u32 ea_=u32(u32(9090184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780c82:{NFSU2_TR(0x780c82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780c90:L780c90:{c.instructions+=4;NFSU2_TR(0x780c90);
{u32 ea_=u32(u32(8133792u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780c96:{NFSU2_TR(0x780c96);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780c98:{NFSU2_TR(0x780c98);
{u32 ea_=u32(u32(9090176u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780c9e:{NFSU2_TR(0x780c9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ca0:L780ca0:{c.instructions+=4;NFSU2_TR(0x780ca0);
{u32 ea_=u32(u32(8133792u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780ca6:{NFSU2_TR(0x780ca6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780cac:{NFSU2_TR(0x780cac);
{u32 ea_=u32(u32(9090168u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780cb2:{NFSU2_TR(0x780cb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780cc0:L780cc0:{c.instructions+=4;NFSU2_TR(0x780cc0);
{u32 ea_=u32(u32(8133808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780cc6:{NFSU2_TR(0x780cc6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780cc8:{NFSU2_TR(0x780cc8);
{u32 ea_=u32(u32(9090212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780cce:{NFSU2_TR(0x780cce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780cd0:L780cd0:{c.instructions+=4;NFSU2_TR(0x780cd0);
{u32 ea_=u32(u32(8133808u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780cd6:{NFSU2_TR(0x780cd6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780cdc:{NFSU2_TR(0x780cdc);
{u32 ea_=u32(u32(9090208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780ce2:{NFSU2_TR(0x780ce2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780cf0:L780cf0:{c.instructions+=4;NFSU2_TR(0x780cf0);
{u32 ea_=u32(u32(8133816u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780cf6:{NFSU2_TR(0x780cf6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780cf8:{NFSU2_TR(0x780cf8);
{u32 ea_=u32(u32(9090200u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780cfe:{NFSU2_TR(0x780cfe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d00:L780d00:{c.instructions+=4;NFSU2_TR(0x780d00);
{u32 ea_=u32(u32(8133816u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780d06:{NFSU2_TR(0x780d06);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780d0c:{NFSU2_TR(0x780d0c);
{u32 ea_=u32(u32(9090192u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780d12:{NFSU2_TR(0x780d12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d20:L780d20:{c.instructions+=4;NFSU2_TR(0x780d20);
{u32 ea_=u32(u32(8133832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780d26:{NFSU2_TR(0x780d26);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780d28:{NFSU2_TR(0x780d28);
{u32 ea_=u32(u32(9090268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780d2e:{NFSU2_TR(0x780d2e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d30:L780d30:{c.instructions+=4;NFSU2_TR(0x780d30);
{u32 ea_=u32(u32(8133832u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780d36:{NFSU2_TR(0x780d36);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780d3c:{NFSU2_TR(0x780d3c);
{u32 ea_=u32(u32(9090264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780d42:{NFSU2_TR(0x780d42);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d50:L780d50:{c.instructions+=4;NFSU2_TR(0x780d50);
{u32 ea_=u32(u32(8133840u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780d56:{NFSU2_TR(0x780d56);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780d58:{NFSU2_TR(0x780d58);
{u32 ea_=u32(u32(9090256u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780d5e:{NFSU2_TR(0x780d5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d60:L780d60:{c.instructions+=4;NFSU2_TR(0x780d60);
{u32 ea_=u32(u32(8133840u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780d66:{NFSU2_TR(0x780d66);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780d6c:{NFSU2_TR(0x780d6c);
{u32 ea_=u32(u32(9090248u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780d72:{NFSU2_TR(0x780d72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d80:L780d80:{c.instructions+=4;NFSU2_TR(0x780d80);
{u32 ea_=u32(u32(8133880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780d86:{NFSU2_TR(0x780d86);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780d88:{NFSU2_TR(0x780d88);
{u32 ea_=u32(u32(9090300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780d8e:{NFSU2_TR(0x780d8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780d90:L780d90:{c.instructions+=4;NFSU2_TR(0x780d90);
{u32 ea_=u32(u32(8133880u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780d96:{NFSU2_TR(0x780d96);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780d9c:{NFSU2_TR(0x780d9c);
{u32 ea_=u32(u32(9090296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780da2:{NFSU2_TR(0x780da2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780db0:L780db0:{c.instructions+=4;NFSU2_TR(0x780db0);
{u32 ea_=u32(u32(8133888u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780db6:{NFSU2_TR(0x780db6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780db8:{NFSU2_TR(0x780db8);
{u32 ea_=u32(u32(9090288u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780dbe:{NFSU2_TR(0x780dbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780dc0:L780dc0:{c.instructions+=4;NFSU2_TR(0x780dc0);
{u32 ea_=u32(u32(8133888u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780dc6:{NFSU2_TR(0x780dc6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780dcc:{NFSU2_TR(0x780dcc);
{u32 ea_=u32(u32(9090280u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780dd2:{NFSU2_TR(0x780dd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780de0:L780de0:{c.instructions+=4;NFSU2_TR(0x780de0);
{u32 ea_=u32(u32(8133924u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780de6:{NFSU2_TR(0x780de6);
{u32 ea_=u32(u32(8133920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B780dec:{NFSU2_TR(0x780dec);
{u32 ea_=u32(u32(9090272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780df2:{NFSU2_TR(0x780df2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e00:L780e00:{c.instructions+=4;NFSU2_TR(0x780e00);
{u32 ea_=u32(u32(8134016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780e06:{NFSU2_TR(0x780e06);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780e08:{NFSU2_TR(0x780e08);
{u32 ea_=u32(u32(9090340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780e0e:{NFSU2_TR(0x780e0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e10:L780e10:{c.instructions+=4;NFSU2_TR(0x780e10);
{u32 ea_=u32(u32(8134016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780e16:{NFSU2_TR(0x780e16);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780e1c:{NFSU2_TR(0x780e1c);
{u32 ea_=u32(u32(9090336u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780e22:{NFSU2_TR(0x780e22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e30:L780e30:{c.instructions+=4;NFSU2_TR(0x780e30);
{u32 ea_=u32(u32(8134024u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780e36:{NFSU2_TR(0x780e36);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780e38:{NFSU2_TR(0x780e38);
{u32 ea_=u32(u32(9090328u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780e3e:{NFSU2_TR(0x780e3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e40:L780e40:{c.instructions+=4;NFSU2_TR(0x780e40);
{u32 ea_=u32(u32(8134024u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780e46:{NFSU2_TR(0x780e46);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780e4c:{NFSU2_TR(0x780e4c);
{u32 ea_=u32(u32(9090320u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780e52:{NFSU2_TR(0x780e52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e60:L780e60:{c.instructions+=4;NFSU2_TR(0x780e60);
{u32 ea_=u32(u32(8134060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780e66:{NFSU2_TR(0x780e66);
{u32 ea_=u32(u32(8134056u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B780e6c:{NFSU2_TR(0x780e6c);
{u32 ea_=u32(u32(9090308u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780e72:{NFSU2_TR(0x780e72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e80:L780e80:{c.instructions+=4;NFSU2_TR(0x780e80);
{u32 ea_=u32(u32(8134052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780e86:{NFSU2_TR(0x780e86);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780e88:{NFSU2_TR(0x780e88);
{u32 ea_=u32(u32(9090312u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780e8e:{NFSU2_TR(0x780e8e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780e90:L780e90:{c.instructions+=4;NFSU2_TR(0x780e90);
{u32 ea_=u32(u32(8134040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780e96:{NFSU2_TR(0x780e96);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780e98:{NFSU2_TR(0x780e98);
{u32 ea_=u32(u32(9090344u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780e9e:{NFSU2_TR(0x780e9e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ea0:L780ea0:{c.instructions+=4;NFSU2_TR(0x780ea0);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780ea6:{NFSU2_TR(0x780ea6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780ea8:{NFSU2_TR(0x780ea8);
{u32 ea_=u32(u32(9090304u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780eae:{NFSU2_TR(0x780eae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780eb0:L780eb0:{c.instructions+=4;NFSU2_TR(0x780eb0);
{u32 ea_=u32(u32(8134152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780eb6:{NFSU2_TR(0x780eb6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780eb8:{NFSU2_TR(0x780eb8);
{u32 ea_=u32(u32(9090380u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780ebe:{NFSU2_TR(0x780ebe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ec0:L780ec0:{c.instructions+=4;NFSU2_TR(0x780ec0);
{u32 ea_=u32(u32(8134152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780ec6:{NFSU2_TR(0x780ec6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780ecc:{NFSU2_TR(0x780ecc);
{u32 ea_=u32(u32(9090376u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780ed2:{NFSU2_TR(0x780ed2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ee0:L780ee0:{c.instructions+=4;NFSU2_TR(0x780ee0);
{u32 ea_=u32(u32(8134160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780ee6:{NFSU2_TR(0x780ee6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780ee8:{NFSU2_TR(0x780ee8);
{u32 ea_=u32(u32(9090368u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780eee:{NFSU2_TR(0x780eee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ef0:L780ef0:{c.instructions+=4;NFSU2_TR(0x780ef0);
{u32 ea_=u32(u32(8134160u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780ef6:{NFSU2_TR(0x780ef6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780efc:{NFSU2_TR(0x780efc);
{u32 ea_=u32(u32(9090360u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780f02:{NFSU2_TR(0x780f02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780f10:L780f10:{c.instructions+=4;NFSU2_TR(0x780f10);
{u32 ea_=u32(u32(8134196u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780f16:{NFSU2_TR(0x780f16);
{u32 ea_=u32(u32(8134192u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B780f1c:{NFSU2_TR(0x780f1c);
{u32 ea_=u32(u32(9090352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780f22:{NFSU2_TR(0x780f22);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780f30:L780f30:{c.instructions+=4;NFSU2_TR(0x780f30);
{u32 ea_=u32(u32(8134288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780f36:{NFSU2_TR(0x780f36);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780f38:{NFSU2_TR(0x780f38);
{u32 ea_=u32(u32(9090412u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780f3e:{NFSU2_TR(0x780f3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780f40:L780f40:{c.instructions+=4;NFSU2_TR(0x780f40);
{u32 ea_=u32(u32(8134288u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780f46:{NFSU2_TR(0x780f46);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780f4c:{NFSU2_TR(0x780f4c);
{u32 ea_=u32(u32(9090408u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780f52:{NFSU2_TR(0x780f52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780f60:L780f60:{c.instructions+=4;NFSU2_TR(0x780f60);
{u32 ea_=u32(u32(8134296u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780f66:{NFSU2_TR(0x780f66);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780f68:{NFSU2_TR(0x780f68);
{u32 ea_=u32(u32(9090400u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780f6e:{NFSU2_TR(0x780f6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780f70:L780f70:{c.instructions+=4;NFSU2_TR(0x780f70);
{u32 ea_=u32(u32(8134296u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780f76:{NFSU2_TR(0x780f76);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780f7c:{NFSU2_TR(0x780f7c);
{u32 ea_=u32(u32(9090392u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780f82:{NFSU2_TR(0x780f82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780f90:L780f90:{c.instructions+=4;NFSU2_TR(0x780f90);
{u32 ea_=u32(u32(8134332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780f96:{NFSU2_TR(0x780f96);
{u32 ea_=u32(u32(8134328u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B780f9c:{NFSU2_TR(0x780f9c);
{u32 ea_=u32(u32(9090384u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780fa2:{NFSU2_TR(0x780fa2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780fb0:L780fb0:{c.instructions+=4;NFSU2_TR(0x780fb0);
{u32 ea_=u32(u32(8134440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780fb6:{NFSU2_TR(0x780fb6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780fb8:{NFSU2_TR(0x780fb8);
{u32 ea_=u32(u32(9090436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780fbe:{NFSU2_TR(0x780fbe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780fc0:L780fc0:{c.instructions+=4;NFSU2_TR(0x780fc0);
{u32 ea_=u32(u32(8134440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B780fc6:{NFSU2_TR(0x780fc6);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B780fcc:{NFSU2_TR(0x780fcc);
{u32 ea_=u32(u32(9090432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B780fd2:{NFSU2_TR(0x780fd2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780fe0:L780fe0:{c.instructions+=4;NFSU2_TR(0x780fe0);
{u32 ea_=u32(u32(8134448u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780fe6:{NFSU2_TR(0x780fe6);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B780fe8:{NFSU2_TR(0x780fe8);
{u32 ea_=u32(u32(9090424u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B780fee:{NFSU2_TR(0x780fee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B780ff0:L780ff0:{c.instructions+=3;NFSU2_TR(0x780ff0);
{u32 ea_=u32(u32(8134448u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B780ff6:{NFSU2_TR(0x780ff6);
{u32 ea_=u32(u32(7890144u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B780ffc:{NFSU2_TR(0x780ffc);
{u32 ea_=u32(u32(9090416u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x781002u,781);
}
XIT:NFSU2_TR_EXIT(0x780,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
