#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_694(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x693,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x693,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_693(u8* __restrict R,Cpu& c);
u32 page_693(Cpu& c){return body_693(c.regs.data(),c);}
__attribute__((noinline)) u32 body_693(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x693001:goto L693001;
case 0x693004:c.instructions+=105;goto B693004;
case 0x693007:c.instructions+=104;goto B693007;
case 0x69300a:c.instructions+=103;goto B69300a;
case 0x69300f:c.instructions+=102;goto B69300f;
case 0x693013:c.instructions+=101;goto B693013;
case 0x693017:c.instructions+=100;goto B693017;
case 0x69301b:c.instructions+=99;goto B69301b;
case 0x69301f:c.instructions+=98;goto B69301f;
case 0x693024:c.instructions+=97;goto B693024;
case 0x693027:c.instructions+=96;goto B693027;
case 0x69302a:c.instructions+=95;goto B69302a;
case 0x69302d:c.instructions+=94;goto B69302d;
case 0x693030:c.instructions+=93;goto B693030;
case 0x693033:c.instructions+=92;goto B693033;
case 0x693038:c.instructions+=91;goto B693038;
case 0x69303c:c.instructions+=90;goto B69303c;
case 0x693041:c.instructions+=89;goto B693041;
case 0x693045:c.instructions+=88;goto B693045;
case 0x693049:c.instructions+=87;goto B693049;
case 0x69304e:c.instructions+=86;goto B69304e;
case 0x693051:c.instructions+=85;goto B693051;
case 0x693054:c.instructions+=84;goto B693054;
case 0x693058:c.instructions+=83;goto B693058;
case 0x69305d:c.instructions+=82;goto B69305d;
case 0x693061:c.instructions+=81;goto B693061;
case 0x693066:c.instructions+=80;goto B693066;
case 0x69306a:c.instructions+=79;goto B69306a;
case 0x69306e:c.instructions+=78;goto B69306e;
case 0x693073:c.instructions+=77;goto B693073;
case 0x693077:c.instructions+=76;goto B693077;
case 0x69307b:c.instructions+=75;goto B69307b;
case 0x69307f:c.instructions+=74;goto B69307f;
case 0x693083:c.instructions+=73;goto B693083;
case 0x693087:c.instructions+=72;goto B693087;
case 0x69308b:c.instructions+=71;goto B69308b;
case 0x69308f:c.instructions+=70;goto B69308f;
case 0x693093:c.instructions+=69;goto B693093;
case 0x693097:c.instructions+=68;goto B693097;
case 0x69309b:c.instructions+=67;goto B69309b;
case 0x69309f:c.instructions+=66;goto B69309f;
case 0x6930a3:c.instructions+=65;goto B6930a3;
case 0x6930a7:c.instructions+=64;goto B6930a7;
case 0x6930ab:c.instructions+=63;goto B6930ab;
case 0x6930af:c.instructions+=62;goto B6930af;
case 0x6930b3:c.instructions+=61;goto B6930b3;
case 0x6930b7:c.instructions+=60;goto B6930b7;
case 0x6930bb:c.instructions+=59;goto B6930bb;
case 0x6930be:c.instructions+=58;goto B6930be;
case 0x6930c1:c.instructions+=57;goto B6930c1;
case 0x6930c5:c.instructions+=56;goto B6930c5;
case 0x6930c8:c.instructions+=55;goto B6930c8;
case 0x6930cb:c.instructions+=54;goto B6930cb;
case 0x6930ce:c.instructions+=53;goto B6930ce;
case 0x6930d1:c.instructions+=52;goto B6930d1;
case 0x6930d6:c.instructions+=51;goto B6930d6;
case 0x6930da:c.instructions+=50;goto B6930da;
case 0x6930de:c.instructions+=49;goto B6930de;
case 0x6930e2:c.instructions+=48;goto B6930e2;
case 0x6930e6:c.instructions+=47;goto B6930e6;
case 0x6930ea:c.instructions+=46;goto B6930ea;
case 0x6930ed:c.instructions+=45;goto B6930ed;
case 0x6930f0:c.instructions+=44;goto B6930f0;
case 0x6930f3:c.instructions+=43;goto B6930f3;
case 0x6930f6:c.instructions+=42;goto B6930f6;
case 0x6930f9:c.instructions+=41;goto B6930f9;
case 0x6930fc:c.instructions+=40;goto B6930fc;
case 0x693100:c.instructions+=39;goto B693100;
case 0x693104:c.instructions+=38;goto B693104;
case 0x693108:c.instructions+=37;goto B693108;
case 0x69310c:c.instructions+=36;goto B69310c;
case 0x693110:c.instructions+=35;goto B693110;
case 0x693115:c.instructions+=34;goto B693115;
case 0x693118:c.instructions+=33;goto B693118;
case 0x69311b:c.instructions+=32;goto B69311b;
case 0x69311e:c.instructions+=31;goto B69311e;
case 0x693121:c.instructions+=30;goto B693121;
case 0x693124:c.instructions+=29;goto B693124;
case 0x693127:c.instructions+=28;goto B693127;
case 0x69312b:c.instructions+=27;goto B69312b;
case 0x69312f:c.instructions+=26;goto B69312f;
case 0x693134:c.instructions+=25;goto B693134;
case 0x693138:c.instructions+=24;goto B693138;
case 0x69313c:c.instructions+=23;goto B69313c;
case 0x693141:c.instructions+=22;goto B693141;
case 0x693144:c.instructions+=21;goto B693144;
case 0x693147:c.instructions+=20;goto B693147;
case 0x69314b:c.instructions+=19;goto B69314b;
case 0x693150:c.instructions+=18;goto B693150;
case 0x693154:c.instructions+=17;goto B693154;
case 0x693158:c.instructions+=16;goto B693158;
case 0x69315c:c.instructions+=15;goto B69315c;
case 0x693161:c.instructions+=14;goto B693161;
case 0x693164:c.instructions+=13;goto B693164;
case 0x693167:c.instructions+=12;goto B693167;
case 0x69316a:c.instructions+=11;goto B69316a;
case 0x69316e:c.instructions+=10;goto B69316e;
case 0x693172:c.instructions+=9;goto B693172;
case 0x693177:c.instructions+=8;goto B693177;
case 0x69317b:c.instructions+=7;goto B69317b;
case 0x69317f:c.instructions+=6;goto B69317f;
case 0x693183:c.instructions+=5;goto B693183;
case 0x693187:c.instructions+=4;goto B693187;
case 0x69318b:c.instructions+=3;goto B69318b;
case 0x69318d:c.instructions+=2;goto B69318d;
case 0x693190:c.instructions+=1;goto B693190;
case 0x693192:goto L693192;
case 0x693195:goto L693195;
case 0x693199:c.instructions+=10;goto B693199;
case 0x69319c:c.instructions+=9;goto B69319c;
case 0x69319f:c.instructions+=8;goto B69319f;
case 0x6931a3:c.instructions+=7;goto B6931a3;
case 0x6931a7:c.instructions+=6;goto B6931a7;
case 0x6931ab:c.instructions+=5;goto B6931ab;
case 0x6931ae:c.instructions+=4;goto B6931ae;
case 0x6931b6:c.instructions+=3;goto B6931b6;
case 0x6931b8:c.instructions+=2;goto B6931b8;
case 0x6931bc:c.instructions+=1;goto B6931bc;
case 0x6931c2:goto L6931c2;
case 0x6931c6:c.instructions+=36;goto B6931c6;
case 0x6931ca:c.instructions+=35;goto B6931ca;
case 0x6931cf:c.instructions+=34;goto B6931cf;
case 0x6931d4:c.instructions+=33;goto B6931d4;
case 0x6931d9:c.instructions+=32;goto B6931d9;
case 0x6931dd:c.instructions+=31;goto B6931dd;
case 0x6931e1:c.instructions+=30;goto B6931e1;
case 0x6931e5:c.instructions+=29;goto B6931e5;
case 0x6931e9:c.instructions+=28;goto B6931e9;
case 0x6931ec:c.instructions+=27;goto B6931ec;
case 0x6931ef:c.instructions+=26;goto B6931ef;
case 0x6931f2:c.instructions+=25;goto B6931f2;
case 0x6931f5:c.instructions+=24;goto B6931f5;
case 0x6931f8:c.instructions+=23;goto B6931f8;
case 0x6931fb:c.instructions+=22;goto B6931fb;
case 0x6931fe:c.instructions+=21;goto B6931fe;
case 0x693202:c.instructions+=20;goto B693202;
case 0x693206:c.instructions+=19;goto B693206;
case 0x69320a:c.instructions+=18;goto B69320a;
case 0x69320f:c.instructions+=17;goto B69320f;
case 0x693214:c.instructions+=16;goto B693214;
case 0x693219:c.instructions+=15;goto B693219;
case 0x69321e:c.instructions+=14;goto B69321e;
case 0x693222:c.instructions+=13;goto B693222;
case 0x693226:c.instructions+=12;goto B693226;
case 0x69322a:c.instructions+=11;goto B69322a;
case 0x69322e:c.instructions+=10;goto B69322e;
case 0x693231:c.instructions+=9;goto B693231;
case 0x693234:c.instructions+=8;goto B693234;
case 0x693237:c.instructions+=7;goto B693237;
case 0x69323a:c.instructions+=6;goto B69323a;
case 0x69323d:c.instructions+=5;goto B69323d;
case 0x693240:c.instructions+=4;goto B693240;
case 0x693244:c.instructions+=3;goto B693244;
case 0x693248:c.instructions+=2;goto B693248;
case 0x69324c:c.instructions+=1;goto B69324c;
case 0x693250:goto L693250;
case 0x693252:c.instructions+=2;goto B693252;
case 0x693255:c.instructions+=1;goto B693255;
case 0x693258:goto L693258;
case 0x69325a:c.instructions+=36;goto B69325a;
case 0x69325d:c.instructions+=35;goto B69325d;
case 0x693261:c.instructions+=34;goto B693261;
case 0x693265:c.instructions+=33;goto B693265;
case 0x693267:c.instructions+=32;goto B693267;
case 0x69326a:c.instructions+=31;goto B69326a;
case 0x69326d:c.instructions+=30;goto B69326d;
case 0x693271:c.instructions+=29;goto B693271;
case 0x693275:c.instructions+=28;goto B693275;
case 0x693279:c.instructions+=27;goto B693279;
case 0x69327c:c.instructions+=26;goto B69327c;
case 0x69327f:c.instructions+=25;goto B69327f;
case 0x693282:c.instructions+=24;goto B693282;
case 0x693285:c.instructions+=23;goto B693285;
case 0x693289:c.instructions+=22;goto B693289;
case 0x69328e:c.instructions+=21;goto B69328e;
case 0x693292:c.instructions+=20;goto B693292;
case 0x693295:c.instructions+=19;goto B693295;
case 0x693299:c.instructions+=18;goto B693299;
case 0x69329d:c.instructions+=17;goto B69329d;
case 0x6932a0:c.instructions+=16;goto B6932a0;
case 0x6932a3:c.instructions+=15;goto B6932a3;
case 0x6932a8:c.instructions+=14;goto B6932a8;
case 0x6932ad:c.instructions+=13;goto B6932ad;
case 0x6932b0:c.instructions+=12;goto B6932b0;
case 0x6932b3:c.instructions+=11;goto B6932b3;
case 0x6932b6:c.instructions+=10;goto B6932b6;
case 0x6932ba:c.instructions+=9;goto B6932ba;
case 0x6932bd:c.instructions+=8;goto B6932bd;
case 0x6932c0:c.instructions+=7;goto B6932c0;
case 0x6932c5:c.instructions+=6;goto B6932c5;
case 0x6932c8:c.instructions+=5;goto B6932c8;
case 0x6932cb:c.instructions+=4;goto B6932cb;
case 0x6932d0:c.instructions+=3;goto B6932d0;
case 0x6932d5:c.instructions+=2;goto B6932d5;
case 0x6932da:c.instructions+=1;goto B6932da;
case 0x6932e0:goto L6932e0;
case 0x6932e3:c.instructions+=101;goto B6932e3;
case 0x6932e7:c.instructions+=100;goto B6932e7;
case 0x6932ec:c.instructions+=99;goto B6932ec;
case 0x6932ef:c.instructions+=98;goto B6932ef;
case 0x6932f2:c.instructions+=97;goto B6932f2;
case 0x6932f5:c.instructions+=96;goto B6932f5;
case 0x6932f8:c.instructions+=95;goto B6932f8;
case 0x6932fc:c.instructions+=94;goto B6932fc;
case 0x693301:c.instructions+=93;goto B693301;
case 0x693304:c.instructions+=92;goto B693304;
case 0x693307:c.instructions+=91;goto B693307;
case 0x69330c:c.instructions+=90;goto B69330c;
case 0x693311:c.instructions+=89;goto B693311;
case 0x693316:c.instructions+=88;goto B693316;
case 0x69331b:c.instructions+=87;goto B69331b;
case 0x693320:c.instructions+=86;goto B693320;
case 0x693325:c.instructions+=85;goto B693325;
case 0x693329:c.instructions+=84;goto B693329;
case 0x69332d:c.instructions+=83;goto B69332d;
case 0x693331:c.instructions+=82;goto B693331;
case 0x693335:c.instructions+=81;goto B693335;
case 0x693339:c.instructions+=80;goto B693339;
case 0x69333d:c.instructions+=79;goto B69333d;
case 0x693340:c.instructions+=78;goto B693340;
case 0x693344:c.instructions+=77;goto B693344;
case 0x693349:c.instructions+=76;goto B693349;
case 0x69334e:c.instructions+=75;goto B69334e;
case 0x693351:c.instructions+=74;goto B693351;
case 0x693354:c.instructions+=73;goto B693354;
case 0x693357:c.instructions+=72;goto B693357;
case 0x69335a:c.instructions+=71;goto B69335a;
case 0x69335e:c.instructions+=70;goto B69335e;
case 0x693363:c.instructions+=69;goto B693363;
case 0x693366:c.instructions+=68;goto B693366;
case 0x693369:c.instructions+=67;goto B693369;
case 0x69336e:c.instructions+=66;goto B69336e;
case 0x693373:c.instructions+=65;goto B693373;
case 0x693378:c.instructions+=64;goto B693378;
case 0x69337d:c.instructions+=63;goto B69337d;
case 0x693382:c.instructions+=62;goto B693382;
case 0x693387:c.instructions+=61;goto B693387;
case 0x69338b:c.instructions+=60;goto B69338b;
case 0x69338f:c.instructions+=59;goto B69338f;
case 0x693393:c.instructions+=58;goto B693393;
case 0x693397:c.instructions+=57;goto B693397;
case 0x69339b:c.instructions+=56;goto B69339b;
case 0x69339f:c.instructions+=55;goto B69339f;
case 0x6933a3:c.instructions+=54;goto B6933a3;
case 0x6933a7:c.instructions+=53;goto B6933a7;
case 0x6933ac:c.instructions+=52;goto B6933ac;
case 0x6933b1:c.instructions+=51;goto B6933b1;
case 0x6933b4:c.instructions+=50;goto B6933b4;
case 0x6933b7:c.instructions+=49;goto B6933b7;
case 0x6933ba:c.instructions+=48;goto B6933ba;
case 0x6933bd:c.instructions+=47;goto B6933bd;
case 0x6933c1:c.instructions+=46;goto B6933c1;
case 0x6933c6:c.instructions+=45;goto B6933c6;
case 0x6933c9:c.instructions+=44;goto B6933c9;
case 0x6933cc:c.instructions+=43;goto B6933cc;
case 0x6933d1:c.instructions+=42;goto B6933d1;
case 0x6933d6:c.instructions+=41;goto B6933d6;
case 0x6933db:c.instructions+=40;goto B6933db;
case 0x6933e0:c.instructions+=39;goto B6933e0;
case 0x6933e5:c.instructions+=38;goto B6933e5;
case 0x6933ea:c.instructions+=37;goto B6933ea;
case 0x6933ee:c.instructions+=36;goto B6933ee;
case 0x6933f2:c.instructions+=35;goto B6933f2;
case 0x6933f6:c.instructions+=34;goto B6933f6;
case 0x6933fa:c.instructions+=33;goto B6933fa;
case 0x6933fe:c.instructions+=32;goto B6933fe;
case 0x693402:c.instructions+=31;goto B693402;
case 0x693406:c.instructions+=30;goto B693406;
case 0x69340a:c.instructions+=29;goto B69340a;
case 0x69340f:c.instructions+=28;goto B69340f;
case 0x693414:c.instructions+=27;goto B693414;
case 0x693417:c.instructions+=26;goto B693417;
case 0x69341a:c.instructions+=25;goto B69341a;
case 0x69341d:c.instructions+=24;goto B69341d;
case 0x693420:c.instructions+=23;goto B693420;
case 0x693424:c.instructions+=22;goto B693424;
case 0x693429:c.instructions+=21;goto B693429;
case 0x69342c:c.instructions+=20;goto B69342c;
case 0x69342f:c.instructions+=19;goto B69342f;
case 0x693434:c.instructions+=18;goto B693434;
case 0x693439:c.instructions+=17;goto B693439;
case 0x69343e:c.instructions+=16;goto B69343e;
case 0x693443:c.instructions+=15;goto B693443;
case 0x693448:c.instructions+=14;goto B693448;
case 0x69344d:c.instructions+=13;goto B69344d;
case 0x693451:c.instructions+=12;goto B693451;
case 0x693455:c.instructions+=11;goto B693455;
case 0x693459:c.instructions+=10;goto B693459;
case 0x69345d:c.instructions+=9;goto B69345d;
case 0x693461:c.instructions+=8;goto B693461;
case 0x693465:c.instructions+=7;goto B693465;
case 0x693469:c.instructions+=6;goto B693469;
case 0x69346d:c.instructions+=5;goto B69346d;
case 0x69346f:c.instructions+=4;goto B69346f;
case 0x693473:c.instructions+=3;goto B693473;
case 0x693476:c.instructions+=2;goto B693476;
case 0x693478:c.instructions+=1;goto B693478;
case 0x69347b:goto L69347b;
case 0x69347e:c.instructions+=113;goto B69347e;
case 0x693482:c.instructions+=112;goto B693482;
case 0x693487:c.instructions+=111;goto B693487;
case 0x69348a:c.instructions+=110;goto B69348a;
case 0x69348d:c.instructions+=109;goto B69348d;
case 0x693490:c.instructions+=108;goto B693490;
case 0x693493:c.instructions+=107;goto B693493;
case 0x693497:c.instructions+=106;goto B693497;
case 0x69349c:c.instructions+=105;goto B69349c;
case 0x69349f:c.instructions+=104;goto B69349f;
case 0x6934a2:c.instructions+=103;goto B6934a2;
case 0x6934a7:c.instructions+=102;goto B6934a7;
case 0x6934ac:c.instructions+=101;goto B6934ac;
case 0x6934b1:c.instructions+=100;goto B6934b1;
case 0x6934b6:c.instructions+=99;goto B6934b6;
case 0x6934bb:c.instructions+=98;goto B6934bb;
case 0x6934c0:c.instructions+=97;goto B6934c0;
case 0x6934c4:c.instructions+=96;goto B6934c4;
case 0x6934c8:c.instructions+=95;goto B6934c8;
case 0x6934cc:c.instructions+=94;goto B6934cc;
case 0x6934d0:c.instructions+=93;goto B6934d0;
case 0x6934d4:c.instructions+=92;goto B6934d4;
case 0x6934d8:c.instructions+=91;goto B6934d8;
case 0x6934dc:c.instructions+=90;goto B6934dc;
case 0x6934e1:c.instructions+=89;goto B6934e1;
case 0x6934e6:c.instructions+=88;goto B6934e6;
case 0x6934eb:c.instructions+=87;goto B6934eb;
case 0x6934ee:c.instructions+=86;goto B6934ee;
case 0x6934f1:c.instructions+=85;goto B6934f1;
case 0x6934f4:c.instructions+=84;goto B6934f4;
case 0x6934f7:c.instructions+=83;goto B6934f7;
case 0x6934fb:c.instructions+=82;goto B6934fb;
case 0x693500:c.instructions+=81;goto B693500;
case 0x693503:c.instructions+=80;goto B693503;
case 0x693506:c.instructions+=79;goto B693506;
case 0x69350b:c.instructions+=78;goto B69350b;
case 0x693510:c.instructions+=77;goto B693510;
case 0x693515:c.instructions+=76;goto B693515;
case 0x69351a:c.instructions+=75;goto B69351a;
case 0x69351f:c.instructions+=74;goto B69351f;
case 0x693524:c.instructions+=73;goto B693524;
case 0x693528:c.instructions+=72;goto B693528;
case 0x69352c:c.instructions+=71;goto B69352c;
case 0x693530:c.instructions+=70;goto B693530;
case 0x693534:c.instructions+=69;goto B693534;
case 0x693538:c.instructions+=68;goto B693538;
case 0x69353c:c.instructions+=67;goto B69353c;
case 0x693541:c.instructions+=66;goto B693541;
case 0x693546:c.instructions+=65;goto B693546;
case 0x69354b:c.instructions+=64;goto B69354b;
case 0x693550:c.instructions+=63;goto B693550;
case 0x693553:c.instructions+=62;goto B693553;
case 0x693556:c.instructions+=61;goto B693556;
case 0x693559:c.instructions+=60;goto B693559;
case 0x69355c:c.instructions+=59;goto B69355c;
case 0x693560:c.instructions+=58;goto B693560;
case 0x693565:c.instructions+=57;goto B693565;
case 0x693568:c.instructions+=56;goto B693568;
case 0x69356b:c.instructions+=55;goto B69356b;
case 0x693570:c.instructions+=54;goto B693570;
case 0x693575:c.instructions+=53;goto B693575;
case 0x69357a:c.instructions+=52;goto B69357a;
case 0x69357f:c.instructions+=51;goto B69357f;
case 0x693584:c.instructions+=50;goto B693584;
case 0x693589:c.instructions+=49;goto B693589;
case 0x69358d:c.instructions+=48;goto B69358d;
case 0x693591:c.instructions+=47;goto B693591;
case 0x693595:c.instructions+=46;goto B693595;
case 0x693599:c.instructions+=45;goto B693599;
case 0x69359d:c.instructions+=44;goto B69359d;
case 0x6935a1:c.instructions+=43;goto B6935a1;
case 0x6935a6:c.instructions+=42;goto B6935a6;
case 0x6935ab:c.instructions+=41;goto B6935ab;
case 0x6935b0:c.instructions+=40;goto B6935b0;
case 0x6935b5:c.instructions+=39;goto B6935b5;
case 0x6935b8:c.instructions+=38;goto B6935b8;
case 0x6935bb:c.instructions+=37;goto B6935bb;
case 0x6935be:c.instructions+=36;goto B6935be;
case 0x6935c1:c.instructions+=35;goto B6935c1;
case 0x6935c5:c.instructions+=34;goto B6935c5;
case 0x6935ca:c.instructions+=33;goto B6935ca;
case 0x6935cd:c.instructions+=32;goto B6935cd;
case 0x6935d0:c.instructions+=31;goto B6935d0;
case 0x6935d5:c.instructions+=30;goto B6935d5;
case 0x6935da:c.instructions+=29;goto B6935da;
case 0x6935df:c.instructions+=28;goto B6935df;
case 0x6935e4:c.instructions+=27;goto B6935e4;
case 0x6935e9:c.instructions+=26;goto B6935e9;
case 0x6935ee:c.instructions+=25;goto B6935ee;
case 0x6935f2:c.instructions+=24;goto B6935f2;
case 0x6935f6:c.instructions+=23;goto B6935f6;
case 0x6935fa:c.instructions+=22;goto B6935fa;
case 0x6935fe:c.instructions+=21;goto B6935fe;
case 0x693602:c.instructions+=20;goto B693602;
case 0x693606:c.instructions+=19;goto B693606;
case 0x69360a:c.instructions+=18;goto B69360a;
case 0x69360e:c.instructions+=17;goto B69360e;
case 0x693612:c.instructions+=16;goto B693612;
case 0x693617:c.instructions+=15;goto B693617;
case 0x69361c:c.instructions+=14;goto B69361c;
case 0x693621:c.instructions+=13;goto B693621;
case 0x693626:c.instructions+=12;goto B693626;
case 0x69362b:c.instructions+=11;goto B69362b;
case 0x69362e:c.instructions+=10;goto B69362e;
case 0x693632:c.instructions+=9;goto B693632;
case 0x693636:c.instructions+=8;goto B693636;
case 0x69363a:c.instructions+=7;goto B69363a;
case 0x69363e:c.instructions+=6;goto B69363e;
case 0x693642:c.instructions+=5;goto B693642;
case 0x693644:c.instructions+=4;goto B693644;
case 0x693648:c.instructions+=3;goto B693648;
case 0x69364b:c.instructions+=2;goto B69364b;
case 0x69364d:c.instructions+=1;goto B69364d;
case 0x693650:goto L693650;
case 0x693652:c.instructions+=175;goto B693652;
case 0x693653:c.instructions+=174;goto B693653;
case 0x693655:c.instructions+=173;goto B693655;
case 0x693658:c.instructions+=172;goto B693658;
case 0x69365b:c.instructions+=171;goto B69365b;
case 0x69365e:c.instructions+=170;goto B69365e;
case 0x693662:c.instructions+=169;goto B693662;
case 0x693666:c.instructions+=168;goto B693666;
case 0x693669:c.instructions+=167;goto B693669;
case 0x69366c:c.instructions+=166;goto B69366c;
case 0x69366f:c.instructions+=165;goto B69366f;
case 0x693672:c.instructions+=164;goto B693672;
case 0x693675:c.instructions+=163;goto B693675;
case 0x693678:c.instructions+=162;goto B693678;
case 0x69367b:c.instructions+=161;goto B69367b;
case 0x69367e:c.instructions+=160;goto B69367e;
case 0x693682:c.instructions+=159;goto B693682;
case 0x693686:c.instructions+=158;goto B693686;
case 0x69368a:c.instructions+=157;goto B69368a;
case 0x69368d:c.instructions+=156;goto B69368d;
case 0x693691:c.instructions+=155;goto B693691;
case 0x693694:c.instructions+=154;goto B693694;
case 0x693697:c.instructions+=153;goto B693697;
case 0x69369a:c.instructions+=152;goto B69369a;
case 0x69369d:c.instructions+=151;goto B69369d;
case 0x6936a0:c.instructions+=150;goto B6936a0;
case 0x6936a3:c.instructions+=149;goto B6936a3;
case 0x6936a6:c.instructions+=148;goto B6936a6;
case 0x6936a9:c.instructions+=147;goto B6936a9;
case 0x6936ad:c.instructions+=146;goto B6936ad;
case 0x6936b0:c.instructions+=145;goto B6936b0;
case 0x6936b4:c.instructions+=144;goto B6936b4;
case 0x6936b7:c.instructions+=143;goto B6936b7;
case 0x6936bb:c.instructions+=142;goto B6936bb;
case 0x6936bf:c.instructions+=141;goto B6936bf;
case 0x6936c3:c.instructions+=140;goto B6936c3;
case 0x6936c7:c.instructions+=139;goto B6936c7;
case 0x6936cb:c.instructions+=138;goto B6936cb;
case 0x6936ce:c.instructions+=137;goto B6936ce;
case 0x6936d1:c.instructions+=136;goto B6936d1;
case 0x6936d5:c.instructions+=135;goto B6936d5;
case 0x6936d8:c.instructions+=134;goto B6936d8;
case 0x6936db:c.instructions+=133;goto B6936db;
case 0x6936de:c.instructions+=132;goto B6936de;
case 0x6936e2:c.instructions+=131;goto B6936e2;
case 0x6936e5:c.instructions+=130;goto B6936e5;
case 0x6936ea:c.instructions+=129;goto B6936ea;
case 0x6936ee:c.instructions+=128;goto B6936ee;
case 0x6936f2:c.instructions+=127;goto B6936f2;
case 0x6936f5:c.instructions+=126;goto B6936f5;
case 0x6936f9:c.instructions+=125;goto B6936f9;
case 0x6936fc:c.instructions+=124;goto B6936fc;
case 0x6936ff:c.instructions+=123;goto B6936ff;
case 0x693703:c.instructions+=122;goto B693703;
case 0x693706:c.instructions+=121;goto B693706;
case 0x693709:c.instructions+=120;goto B693709;
case 0x69370c:c.instructions+=119;goto B69370c;
case 0x693711:c.instructions+=118;goto B693711;
case 0x693715:c.instructions+=117;goto B693715;
case 0x693719:c.instructions+=116;goto B693719;
case 0x69371d:c.instructions+=115;goto B69371d;
case 0x693721:c.instructions+=114;goto B693721;
case 0x693725:c.instructions+=113;goto B693725;
case 0x693728:c.instructions+=112;goto B693728;
case 0x69372b:c.instructions+=111;goto B69372b;
case 0x69372e:c.instructions+=110;goto B69372e;
case 0x693731:c.instructions+=109;goto B693731;
case 0x693734:c.instructions+=108;goto B693734;
case 0x693739:c.instructions+=107;goto B693739;
case 0x69373d:c.instructions+=106;goto B69373d;
case 0x693742:c.instructions+=105;goto B693742;
case 0x693746:c.instructions+=104;goto B693746;
case 0x69374a:c.instructions+=103;goto B69374a;
case 0x69374e:c.instructions+=102;goto B69374e;
case 0x693751:c.instructions+=101;goto B693751;
case 0x693754:c.instructions+=100;goto B693754;
case 0x693758:c.instructions+=99;goto B693758;
case 0x69375d:c.instructions+=98;goto B69375d;
case 0x693762:c.instructions+=97;goto B693762;
case 0x693766:c.instructions+=96;goto B693766;
case 0x69376a:c.instructions+=95;goto B69376a;
case 0x69376e:c.instructions+=94;goto B69376e;
case 0x693772:c.instructions+=93;goto B693772;
case 0x693776:c.instructions+=92;goto B693776;
case 0x69377a:c.instructions+=91;goto B69377a;
case 0x69377d:c.instructions+=90;goto B69377d;
case 0x693780:c.instructions+=89;goto B693780;
case 0x693783:c.instructions+=88;goto B693783;
case 0x693786:c.instructions+=87;goto B693786;
case 0x693789:c.instructions+=86;goto B693789;
case 0x69378c:c.instructions+=85;goto B69378c;
case 0x69378f:c.instructions+=84;goto B69378f;
case 0x693792:c.instructions+=83;goto B693792;
case 0x693796:c.instructions+=82;goto B693796;
case 0x69379a:c.instructions+=81;goto B69379a;
case 0x69379e:c.instructions+=80;goto B69379e;
case 0x6937a1:c.instructions+=79;goto B6937a1;
case 0x6937a5:c.instructions+=78;goto B6937a5;
case 0x6937a8:c.instructions+=77;goto B6937a8;
case 0x6937ab:c.instructions+=76;goto B6937ab;
case 0x6937ae:c.instructions+=75;goto B6937ae;
case 0x6937b1:c.instructions+=74;goto B6937b1;
case 0x6937b4:c.instructions+=73;goto B6937b4;
case 0x6937b7:c.instructions+=72;goto B6937b7;
case 0x6937ba:c.instructions+=71;goto B6937ba;
case 0x6937bd:c.instructions+=70;goto B6937bd;
case 0x6937c1:c.instructions+=69;goto B6937c1;
case 0x6937c4:c.instructions+=68;goto B6937c4;
case 0x6937c8:c.instructions+=67;goto B6937c8;
case 0x6937cb:c.instructions+=66;goto B6937cb;
case 0x6937cf:c.instructions+=65;goto B6937cf;
case 0x6937d3:c.instructions+=64;goto B6937d3;
case 0x6937d7:c.instructions+=63;goto B6937d7;
case 0x6937db:c.instructions+=62;goto B6937db;
case 0x6937df:c.instructions+=61;goto B6937df;
case 0x6937e2:c.instructions+=60;goto B6937e2;
case 0x6937e5:c.instructions+=59;goto B6937e5;
case 0x6937e9:c.instructions+=58;goto B6937e9;
case 0x6937ec:c.instructions+=57;goto B6937ec;
case 0x6937ef:c.instructions+=56;goto B6937ef;
case 0x6937f2:c.instructions+=55;goto B6937f2;
case 0x6937f5:c.instructions+=54;goto B6937f5;
case 0x6937fa:c.instructions+=53;goto B6937fa;
case 0x6937fe:c.instructions+=52;goto B6937fe;
case 0x693802:c.instructions+=51;goto B693802;
case 0x693806:c.instructions+=50;goto B693806;
case 0x69380a:c.instructions+=49;goto B69380a;
case 0x69380e:c.instructions+=48;goto B69380e;
case 0x693811:c.instructions+=47;goto B693811;
case 0x693814:c.instructions+=46;goto B693814;
case 0x693817:c.instructions+=45;goto B693817;
case 0x69381a:c.instructions+=44;goto B69381a;
case 0x69381d:c.instructions+=43;goto B69381d;
case 0x693820:c.instructions+=42;goto B693820;
case 0x693824:c.instructions+=41;goto B693824;
case 0x693828:c.instructions+=40;goto B693828;
case 0x69382c:c.instructions+=39;goto B69382c;
case 0x693830:c.instructions+=38;goto B693830;
case 0x693834:c.instructions+=37;goto B693834;
case 0x693838:c.instructions+=36;goto B693838;
case 0x69383b:c.instructions+=35;goto B69383b;
case 0x69383e:c.instructions+=34;goto B69383e;
case 0x693841:c.instructions+=33;goto B693841;
case 0x693844:c.instructions+=32;goto B693844;
case 0x693847:c.instructions+=31;goto B693847;
case 0x69384a:c.instructions+=30;goto B69384a;
case 0x69384e:c.instructions+=29;goto B69384e;
case 0x693852:c.instructions+=28;goto B693852;
case 0x693857:c.instructions+=27;goto B693857;
case 0x69385b:c.instructions+=26;goto B69385b;
case 0x69385f:c.instructions+=25;goto B69385f;
case 0x693863:c.instructions+=24;goto B693863;
case 0x693866:c.instructions+=23;goto B693866;
case 0x693869:c.instructions+=22;goto B693869;
case 0x69386d:c.instructions+=21;goto B69386d;
case 0x693872:c.instructions+=20;goto B693872;
case 0x693876:c.instructions+=19;goto B693876;
case 0x69387a:c.instructions+=18;goto B69387a;
case 0x69387e:c.instructions+=17;goto B69387e;
case 0x693882:c.instructions+=16;goto B693882;
case 0x693885:c.instructions+=15;goto B693885;
case 0x693888:c.instructions+=14;goto B693888;
case 0x69388b:c.instructions+=13;goto B69388b;
case 0x693893:c.instructions+=12;goto B693893;
case 0x693897:c.instructions+=11;goto B693897;
case 0x69389b:c.instructions+=10;goto B69389b;
case 0x69389f:c.instructions+=9;goto B69389f;
case 0x6938a7:c.instructions+=8;goto B6938a7;
case 0x6938ab:c.instructions+=7;goto B6938ab;
case 0x6938af:c.instructions+=6;goto B6938af;
case 0x6938b3:c.instructions+=5;goto B6938b3;
case 0x6938b6:c.instructions+=4;goto B6938b6;
case 0x6938ba:c.instructions+=3;goto B6938ba;
case 0x6938bc:c.instructions+=2;goto B6938bc;
case 0x6938bf:c.instructions+=1;goto B6938bf;
case 0x6938c1:goto L6938c1;
case 0x6938c4:goto L6938c4;
case 0x6938c8:c.instructions+=12;goto B6938c8;
case 0x6938cb:c.instructions+=11;goto B6938cb;
case 0x6938ce:c.instructions+=10;goto B6938ce;
case 0x6938d2:c.instructions+=9;goto B6938d2;
case 0x6938d6:c.instructions+=8;goto B6938d6;
case 0x6938da:c.instructions+=7;goto B6938da;
case 0x6938dd:c.instructions+=6;goto B6938dd;
case 0x6938e5:c.instructions+=5;goto B6938e5;
case 0x6938e7:c.instructions+=4;goto B6938e7;
case 0x6938ea:c.instructions+=3;goto B6938ea;
case 0x6938ed:c.instructions+=2;goto B6938ed;
case 0x6938f0:c.instructions+=1;goto B6938f0;
case 0x6938f6:goto L6938f6;
case 0x6938f9:c.instructions+=36;goto B6938f9;
case 0x6938fd:c.instructions+=35;goto B6938fd;
case 0x693901:c.instructions+=34;goto B693901;
case 0x693905:c.instructions+=33;goto B693905;
case 0x693909:c.instructions+=32;goto B693909;
case 0x69390d:c.instructions+=31;goto B69390d;
case 0x693911:c.instructions+=30;goto B693911;
case 0x693915:c.instructions+=29;goto B693915;
case 0x693919:c.instructions+=28;goto B693919;
case 0x69391c:c.instructions+=27;goto B69391c;
case 0x69391f:c.instructions+=26;goto B69391f;
case 0x693922:c.instructions+=25;goto B693922;
case 0x693925:c.instructions+=24;goto B693925;
case 0x693928:c.instructions+=23;goto B693928;
case 0x69392b:c.instructions+=22;goto B69392b;
case 0x69392e:c.instructions+=21;goto B69392e;
case 0x693932:c.instructions+=20;goto B693932;
case 0x693936:c.instructions+=19;goto B693936;
case 0x69393a:c.instructions+=18;goto B69393a;
case 0x69393e:c.instructions+=17;goto B69393e;
case 0x693942:c.instructions+=16;goto B693942;
case 0x693946:c.instructions+=15;goto B693946;
case 0x69394a:c.instructions+=14;goto B69394a;
case 0x69394e:c.instructions+=13;goto B69394e;
case 0x693952:c.instructions+=12;goto B693952;
case 0x693956:c.instructions+=11;goto B693956;
case 0x69395a:c.instructions+=10;goto B69395a;
case 0x69395d:c.instructions+=9;goto B69395d;
case 0x693960:c.instructions+=8;goto B693960;
case 0x693963:c.instructions+=7;goto B693963;
case 0x693966:c.instructions+=6;goto B693966;
case 0x693969:c.instructions+=5;goto B693969;
case 0x69396c:c.instructions+=4;goto B69396c;
case 0x693970:c.instructions+=3;goto B693970;
case 0x693974:c.instructions+=2;goto B693974;
case 0x693978:c.instructions+=1;goto B693978;
case 0x69397c:goto L69397c;
case 0x69397f:c.instructions+=3;goto B69397f;
case 0x693982:c.instructions+=2;goto B693982;
case 0x693983:c.instructions+=1;goto B693983;
case 0x693986:goto L693986;
case 0x693988:c.instructions+=7;goto B693988;
case 0x693989:c.instructions+=6;goto B693989;
case 0x69398b:c.instructions+=5;goto B69398b;
case 0x69398d:c.instructions+=4;goto B69398d;
case 0x693990:c.instructions+=3;goto B693990;
case 0x693993:c.instructions+=2;goto B693993;
case 0x693996:c.instructions+=1;goto B693996;
case 0x69399b:goto L69399b;
case 0x69399d:c.instructions+=3;goto B69399d;
case 0x6939a0:c.instructions+=2;goto B6939a0;
case 0x6939a1:c.instructions+=1;goto B6939a1;
case 0x6939a4:goto L6939a4;
case 0x6939a6:c.instructions+=33;goto B6939a6;
case 0x6939a7:c.instructions+=32;goto B6939a7;
case 0x6939a9:c.instructions+=31;goto B6939a9;
case 0x6939ab:c.instructions+=30;goto B6939ab;
case 0x6939ae:c.instructions+=29;goto B6939ae;
case 0x6939b1:c.instructions+=28;goto B6939b1;
case 0x6939b4:c.instructions+=27;goto B6939b4;
case 0x6939b7:c.instructions+=26;goto B6939b7;
case 0x6939ba:c.instructions+=25;goto B6939ba;
case 0x6939bd:c.instructions+=24;goto B6939bd;
case 0x6939c0:c.instructions+=23;goto B6939c0;
case 0x6939c4:c.instructions+=22;goto B6939c4;
case 0x6939c7:c.instructions+=21;goto B6939c7;
case 0x6939ca:c.instructions+=20;goto B6939ca;
case 0x6939ce:c.instructions+=19;goto B6939ce;
case 0x6939d1:c.instructions+=18;goto B6939d1;
case 0x6939d6:c.instructions+=17;goto B6939d6;
case 0x6939d9:c.instructions+=16;goto B6939d9;
case 0x6939de:c.instructions+=15;goto B6939de;
case 0x6939e3:c.instructions+=14;goto B6939e3;
case 0x6939e8:c.instructions+=13;goto B6939e8;
case 0x6939ec:c.instructions+=12;goto B6939ec;
case 0x6939f1:c.instructions+=11;goto B6939f1;
case 0x6939f6:c.instructions+=10;goto B6939f6;
case 0x6939fb:c.instructions+=9;goto B6939fb;
case 0x6939ff:c.instructions+=8;goto B6939ff;
case 0x693a03:c.instructions+=7;goto B693a03;
case 0x693a07:c.instructions+=6;goto B693a07;
case 0x693a0a:c.instructions+=5;goto B693a0a;
case 0x693a0e:c.instructions+=4;goto B693a0e;
case 0x693a10:c.instructions+=3;goto B693a10;
case 0x693a13:c.instructions+=2;goto B693a13;
case 0x693a14:c.instructions+=1;goto B693a14;
case 0x693a17:goto L693a17;
case 0x693a19:c.instructions+=31;goto B693a19;
case 0x693a1a:c.instructions+=30;goto B693a1a;
case 0x693a1c:c.instructions+=29;goto B693a1c;
case 0x693a1e:c.instructions+=28;goto B693a1e;
case 0x693a21:c.instructions+=27;goto B693a21;
case 0x693a24:c.instructions+=26;goto B693a24;
case 0x693a27:c.instructions+=25;goto B693a27;
case 0x693a2a:c.instructions+=24;goto B693a2a;
case 0x693a2d:c.instructions+=23;goto B693a2d;
case 0x693a30:c.instructions+=22;goto B693a30;
case 0x693a33:c.instructions+=21;goto B693a33;
case 0x693a37:c.instructions+=20;goto B693a37;
case 0x693a3a:c.instructions+=19;goto B693a3a;
case 0x693a3d:c.instructions+=18;goto B693a3d;
case 0x693a41:c.instructions+=17;goto B693a41;
case 0x693a44:c.instructions+=16;goto B693a44;
case 0x693a49:c.instructions+=15;goto B693a49;
case 0x693a4c:c.instructions+=14;goto B693a4c;
case 0x693a51:c.instructions+=13;goto B693a51;
case 0x693a56:c.instructions+=12;goto B693a56;
case 0x693a5a:c.instructions+=11;goto B693a5a;
case 0x693a5f:c.instructions+=10;goto B693a5f;
case 0x693a64:c.instructions+=9;goto B693a64;
case 0x693a68:c.instructions+=8;goto B693a68;
case 0x693a6c:c.instructions+=7;goto B693a6c;
case 0x693a70:c.instructions+=6;goto B693a70;
case 0x693a73:c.instructions+=5;goto B693a73;
case 0x693a77:c.instructions+=4;goto B693a77;
case 0x693a79:c.instructions+=3;goto B693a79;
case 0x693a7c:c.instructions+=2;goto B693a7c;
case 0x693a7d:c.instructions+=1;goto B693a7d;
case 0x693a80:goto L693a80;
case 0x693a82:c.instructions+=25;goto B693a82;
case 0x693a86:c.instructions+=24;goto B693a86;
case 0x693a89:c.instructions+=23;goto B693a89;
case 0x693a8c:c.instructions+=22;goto B693a8c;
case 0x693a90:c.instructions+=21;goto B693a90;
case 0x693a93:c.instructions+=20;goto B693a93;
case 0x693a97:c.instructions+=19;goto B693a97;
case 0x693a9b:c.instructions+=18;goto B693a9b;
case 0x693a9f:c.instructions+=17;goto B693a9f;
case 0x693aa3:c.instructions+=16;goto B693aa3;
case 0x693aa6:c.instructions+=15;goto B693aa6;
case 0x693aaa:c.instructions+=14;goto B693aaa;
case 0x693ab2:c.instructions+=13;goto B693ab2;
case 0x693ab5:c.instructions+=12;goto B693ab5;
case 0x693ab9:c.instructions+=11;goto B693ab9;
case 0x693abd:c.instructions+=10;goto B693abd;
case 0x693ac1:c.instructions+=9;goto B693ac1;
case 0x693ac4:c.instructions+=8;goto B693ac4;
case 0x693ac7:c.instructions+=7;goto B693ac7;
case 0x693acb:c.instructions+=6;goto B693acb;
case 0x693acf:c.instructions+=5;goto B693acf;
case 0x693ad3:c.instructions+=4;goto B693ad3;
case 0x693ad6:c.instructions+=3;goto B693ad6;
case 0x693ada:c.instructions+=2;goto B693ada;
case 0x693adc:c.instructions+=1;goto B693adc;
case 0x693adf:goto L693adf;
case 0x693ae3:c.instructions+=29;goto B693ae3;
case 0x693ae7:c.instructions+=28;goto B693ae7;
case 0x693aeb:c.instructions+=27;goto B693aeb;
case 0x693aee:c.instructions+=26;goto B693aee;
case 0x693af1:c.instructions+=25;goto B693af1;
case 0x693af6:c.instructions+=24;goto B693af6;
case 0x693afa:c.instructions+=23;goto B693afa;
case 0x693afd:c.instructions+=22;goto B693afd;
case 0x693b01:c.instructions+=21;goto B693b01;
case 0x693b05:c.instructions+=20;goto B693b05;
case 0x693b09:c.instructions+=19;goto B693b09;
case 0x693b0e:c.instructions+=18;goto B693b0e;
case 0x693b12:c.instructions+=17;goto B693b12;
case 0x693b16:c.instructions+=16;goto B693b16;
case 0x693b1a:c.instructions+=15;goto B693b1a;
case 0x693b1d:c.instructions+=14;goto B693b1d;
case 0x693b21:c.instructions+=13;goto B693b21;
case 0x693b25:c.instructions+=12;goto B693b25;
case 0x693b28:c.instructions+=11;goto B693b28;
case 0x693b2c:c.instructions+=10;goto B693b2c;
case 0x693b30:c.instructions+=9;goto B693b30;
case 0x693b34:c.instructions+=8;goto B693b34;
case 0x693b38:c.instructions+=7;goto B693b38;
case 0x693b3c:c.instructions+=6;goto B693b3c;
case 0x693b40:c.instructions+=5;goto B693b40;
case 0x693b44:c.instructions+=4;goto B693b44;
case 0x693b47:c.instructions+=3;goto B693b47;
case 0x693b4b:c.instructions+=2;goto B693b4b;
case 0x693b4d:c.instructions+=1;goto B693b4d;
case 0x693b50:goto L693b50;
case 0x693b52:c.instructions+=54;goto B693b52;
case 0x693b57:c.instructions+=53;goto B693b57;
case 0x693b5a:c.instructions+=52;goto B693b5a;
case 0x693b5e:c.instructions+=51;goto B693b5e;
case 0x693b61:c.instructions+=50;goto B693b61;
case 0x693b65:c.instructions+=49;goto B693b65;
case 0x693b6c:c.instructions+=48;goto B693b6c;
case 0x693b6f:c.instructions+=47;goto B693b6f;
case 0x693b72:c.instructions+=46;goto B693b72;
case 0x693b76:c.instructions+=45;goto B693b76;
case 0x693b7a:c.instructions+=44;goto B693b7a;
case 0x693b7d:c.instructions+=43;goto B693b7d;
case 0x693b85:c.instructions+=42;goto B693b85;
case 0x693b89:c.instructions+=41;goto B693b89;
case 0x693b8d:c.instructions+=40;goto B693b8d;
case 0x693b90:c.instructions+=39;goto B693b90;
case 0x693b94:c.instructions+=38;goto B693b94;
case 0x693b98:c.instructions+=37;goto B693b98;
case 0x693b9c:c.instructions+=36;goto B693b9c;
case 0x693ba4:c.instructions+=35;goto B693ba4;
case 0x693ba8:c.instructions+=34;goto B693ba8;
case 0x693bac:c.instructions+=33;goto B693bac;
case 0x693bb0:c.instructions+=32;goto B693bb0;
case 0x693bb3:c.instructions+=31;goto B693bb3;
case 0x693bb6:c.instructions+=30;goto B693bb6;
case 0x693bb9:c.instructions+=29;goto B693bb9;
case 0x693bbc:c.instructions+=28;goto B693bbc;
case 0x693bbf:c.instructions+=27;goto B693bbf;
case 0x693bc3:c.instructions+=26;goto B693bc3;
case 0x693bc6:c.instructions+=25;goto B693bc6;
case 0x693bca:c.instructions+=24;goto B693bca;
case 0x693bce:c.instructions+=23;goto B693bce;
case 0x693bd2:c.instructions+=22;goto B693bd2;
case 0x693bd6:c.instructions+=21;goto B693bd6;
case 0x693bda:c.instructions+=20;goto B693bda;
case 0x693bde:c.instructions+=19;goto B693bde;
case 0x693be2:c.instructions+=18;goto B693be2;
case 0x693be5:c.instructions+=17;goto B693be5;
case 0x693be9:c.instructions+=16;goto B693be9;
case 0x693bec:c.instructions+=15;goto B693bec;
case 0x693bf0:c.instructions+=14;goto B693bf0;
case 0x693bf4:c.instructions+=13;goto B693bf4;
case 0x693bf8:c.instructions+=12;goto B693bf8;
case 0x693bfc:c.instructions+=11;goto B693bfc;
case 0x693c00:c.instructions+=10;goto B693c00;
case 0x693c04:c.instructions+=9;goto B693c04;
case 0x693c08:c.instructions+=8;goto B693c08;
case 0x693c0c:c.instructions+=7;goto B693c0c;
case 0x693c10:c.instructions+=6;goto B693c10;
case 0x693c14:c.instructions+=5;goto B693c14;
case 0x693c18:c.instructions+=4;goto B693c18;
case 0x693c1b:c.instructions+=3;goto B693c1b;
case 0x693c1f:c.instructions+=2;goto B693c1f;
case 0x693c21:c.instructions+=1;goto B693c21;
case 0x693c24:goto L693c24;
case 0x693c29:c.instructions+=60;goto B693c29;
case 0x693c2d:c.instructions+=59;goto B693c2d;
case 0x693c30:c.instructions+=58;goto B693c30;
case 0x693c33:c.instructions+=57;goto B693c33;
case 0x693c37:c.instructions+=56;goto B693c37;
case 0x693c3e:c.instructions+=55;goto B693c3e;
case 0x693c42:c.instructions+=54;goto B693c42;
case 0x693c45:c.instructions+=53;goto B693c45;
case 0x693c49:c.instructions+=52;goto B693c49;
case 0x693c4c:c.instructions+=51;goto B693c4c;
case 0x693c50:c.instructions+=50;goto B693c50;
case 0x693c53:c.instructions+=49;goto B693c53;
case 0x693c56:c.instructions+=48;goto B693c56;
case 0x693c59:c.instructions+=47;goto B693c59;
case 0x693c61:c.instructions+=46;goto B693c61;
case 0x693c64:c.instructions+=45;goto B693c64;
case 0x693c67:c.instructions+=44;goto B693c67;
case 0x693c6e:c.instructions+=43;goto B693c6e;
case 0x693c71:c.instructions+=42;goto B693c71;
case 0x693c75:c.instructions+=41;goto B693c75;
case 0x693c79:c.instructions+=40;goto B693c79;
case 0x693c7d:c.instructions+=39;goto B693c7d;
case 0x693c81:c.instructions+=38;goto B693c81;
case 0x693c84:c.instructions+=37;goto B693c84;
case 0x693c87:c.instructions+=36;goto B693c87;
case 0x693c8a:c.instructions+=35;goto B693c8a;
case 0x693c8d:c.instructions+=34;goto B693c8d;
case 0x693c91:c.instructions+=33;goto B693c91;
case 0x693c94:c.instructions+=32;goto B693c94;
case 0x693c98:c.instructions+=31;goto B693c98;
case 0x693c9b:c.instructions+=30;goto B693c9b;
case 0x693c9f:c.instructions+=29;goto B693c9f;
case 0x693ca2:c.instructions+=28;goto B693ca2;
case 0x693ca5:c.instructions+=27;goto B693ca5;
case 0x693ca9:c.instructions+=26;goto B693ca9;
case 0x693cac:c.instructions+=25;goto B693cac;
case 0x693cb0:c.instructions+=24;goto B693cb0;
case 0x693cb4:c.instructions+=23;goto B693cb4;
case 0x693cb8:c.instructions+=22;goto B693cb8;
case 0x693cbc:c.instructions+=21;goto B693cbc;
case 0x693cc0:c.instructions+=20;goto B693cc0;
case 0x693cc4:c.instructions+=19;goto B693cc4;
case 0x693cc8:c.instructions+=18;goto B693cc8;
case 0x693ccc:c.instructions+=17;goto B693ccc;
case 0x693cd0:c.instructions+=16;goto B693cd0;
case 0x693cd4:c.instructions+=15;goto B693cd4;
case 0x693cd7:c.instructions+=14;goto B693cd7;
case 0x693cdb:c.instructions+=13;goto B693cdb;
case 0x693cdf:c.instructions+=12;goto B693cdf;
case 0x693ce3:c.instructions+=11;goto B693ce3;
case 0x693cea:c.instructions+=10;goto B693cea;
case 0x693cee:c.instructions+=9;goto B693cee;
case 0x693cf2:c.instructions+=8;goto B693cf2;
case 0x693cf6:c.instructions+=7;goto B693cf6;
case 0x693cfa:c.instructions+=6;goto B693cfa;
case 0x693cfe:c.instructions+=5;goto B693cfe;
case 0x693d01:c.instructions+=4;goto B693d01;
case 0x693d05:c.instructions+=3;goto B693d05;
case 0x693d09:c.instructions+=2;goto B693d09;
case 0x693d0b:c.instructions+=1;goto B693d0b;
case 0x693d0e:goto L693d0e;
case 0x693d10:c.instructions+=40;goto B693d10;
case 0x693d11:c.instructions+=39;goto B693d11;
case 0x693d13:c.instructions+=38;goto B693d13;
case 0x693d15:c.instructions+=37;goto B693d15;
case 0x693d18:c.instructions+=36;goto B693d18;
case 0x693d1b:c.instructions+=35;goto B693d1b;
case 0x693d1e:c.instructions+=34;goto B693d1e;
case 0x693d21:c.instructions+=33;goto B693d21;
case 0x693d24:c.instructions+=32;goto B693d24;
case 0x693d27:c.instructions+=31;goto B693d27;
case 0x693d2a:c.instructions+=30;goto B693d2a;
case 0x693d2e:c.instructions+=29;goto B693d2e;
case 0x693d31:c.instructions+=28;goto B693d31;
case 0x693d34:c.instructions+=27;goto B693d34;
case 0x693d38:c.instructions+=26;goto B693d38;
case 0x693d3b:c.instructions+=25;goto B693d3b;
case 0x693d40:c.instructions+=24;goto B693d40;
case 0x693d43:c.instructions+=23;goto B693d43;
case 0x693d48:c.instructions+=22;goto B693d48;
case 0x693d4d:c.instructions+=21;goto B693d4d;
case 0x693d52:c.instructions+=20;goto B693d52;
case 0x693d56:c.instructions+=19;goto B693d56;
case 0x693d5b:c.instructions+=18;goto B693d5b;
case 0x693d60:c.instructions+=17;goto B693d60;
case 0x693d65:c.instructions+=16;goto B693d65;
case 0x693d69:c.instructions+=15;goto B693d69;
case 0x693d6d:c.instructions+=14;goto B693d6d;
case 0x693d71:c.instructions+=13;goto B693d71;
case 0x693d74:c.instructions+=12;goto B693d74;
case 0x693d77:c.instructions+=11;goto B693d77;
case 0x693d7b:c.instructions+=10;goto B693d7b;
case 0x693d7f:c.instructions+=9;goto B693d7f;
case 0x693d83:c.instructions+=8;goto B693d83;
case 0x693d87:c.instructions+=7;goto B693d87;
case 0x693d8b:c.instructions+=6;goto B693d8b;
case 0x693d8e:c.instructions+=5;goto B693d8e;
case 0x693d92:c.instructions+=4;goto B693d92;
case 0x693d94:c.instructions+=3;goto B693d94;
case 0x693d97:c.instructions+=2;goto B693d97;
case 0x693d98:c.instructions+=1;goto B693d98;
case 0x693d9b:goto L693d9b;
case 0x693d9d:c.instructions+=121;goto B693d9d;
case 0x693d9e:c.instructions+=120;goto B693d9e;
case 0x693da0:c.instructions+=119;goto B693da0;
case 0x693da3:c.instructions+=118;goto B693da3;
case 0x693da6:c.instructions+=117;goto B693da6;
case 0x693da9:c.instructions+=116;goto B693da9;
case 0x693dac:c.instructions+=115;goto B693dac;
case 0x693db0:c.instructions+=114;goto B693db0;
case 0x693db3:c.instructions+=113;goto B693db3;
case 0x693db6:c.instructions+=112;goto B693db6;
case 0x693dba:c.instructions+=111;goto B693dba;
case 0x693dbd:c.instructions+=110;goto B693dbd;
case 0x693dc1:c.instructions+=109;goto B693dc1;
case 0x693dc4:c.instructions+=108;goto B693dc4;
case 0x693dc7:c.instructions+=107;goto B693dc7;
case 0x693dcb:c.instructions+=106;goto B693dcb;
case 0x693dce:c.instructions+=105;goto B693dce;
case 0x693dd3:c.instructions+=104;goto B693dd3;
case 0x693dd7:c.instructions+=103;goto B693dd7;
case 0x693ddb:c.instructions+=102;goto B693ddb;
case 0x693dde:c.instructions+=101;goto B693dde;
case 0x693de3:c.instructions+=100;goto B693de3;
case 0x693de7:c.instructions+=99;goto B693de7;
case 0x693deb:c.instructions+=98;goto B693deb;
case 0x693def:c.instructions+=97;goto B693def;
case 0x693df4:c.instructions+=96;goto B693df4;
case 0x693df8:c.instructions+=95;goto B693df8;
case 0x693dfc:c.instructions+=94;goto B693dfc;
case 0x693e00:c.instructions+=93;goto B693e00;
case 0x693e05:c.instructions+=92;goto B693e05;
case 0x693e09:c.instructions+=91;goto B693e09;
case 0x693e0d:c.instructions+=90;goto B693e0d;
case 0x693e11:c.instructions+=89;goto B693e11;
case 0x693e15:c.instructions+=88;goto B693e15;
case 0x693e18:c.instructions+=87;goto B693e18;
case 0x693e1b:c.instructions+=86;goto B693e1b;
case 0x693e1f:c.instructions+=85;goto B693e1f;
case 0x693e22:c.instructions+=84;goto B693e22;
case 0x693e26:c.instructions+=83;goto B693e26;
case 0x693e29:c.instructions+=82;goto B693e29;
case 0x693e2d:c.instructions+=81;goto B693e2d;
case 0x693e30:c.instructions+=80;goto B693e30;
case 0x693e33:c.instructions+=79;goto B693e33;
case 0x693e37:c.instructions+=78;goto B693e37;
case 0x693e3a:c.instructions+=77;goto B693e3a;
case 0x693e3f:c.instructions+=76;goto B693e3f;
case 0x693e43:c.instructions+=75;goto B693e43;
case 0x693e47:c.instructions+=74;goto B693e47;
case 0x693e4a:c.instructions+=73;goto B693e4a;
case 0x693e4f:c.instructions+=72;goto B693e4f;
case 0x693e53:c.instructions+=71;goto B693e53;
case 0x693e57:c.instructions+=70;goto B693e57;
case 0x693e5b:c.instructions+=69;goto B693e5b;
case 0x693e60:c.instructions+=68;goto B693e60;
case 0x693e64:c.instructions+=67;goto B693e64;
case 0x693e68:c.instructions+=66;goto B693e68;
case 0x693e6c:c.instructions+=65;goto B693e6c;
case 0x693e71:c.instructions+=64;goto B693e71;
case 0x693e75:c.instructions+=63;goto B693e75;
case 0x693e79:c.instructions+=62;goto B693e79;
case 0x693e7d:c.instructions+=61;goto B693e7d;
case 0x693e81:c.instructions+=60;goto B693e81;
case 0x693e85:c.instructions+=59;goto B693e85;
case 0x693e88:c.instructions+=58;goto B693e88;
case 0x693e8c:c.instructions+=57;goto B693e8c;
case 0x693e8f:c.instructions+=56;goto B693e8f;
case 0x693e93:c.instructions+=55;goto B693e93;
case 0x693e96:c.instructions+=54;goto B693e96;
case 0x693e9a:c.instructions+=53;goto B693e9a;
case 0x693e9d:c.instructions+=52;goto B693e9d;
case 0x693ea0:c.instructions+=51;goto B693ea0;
case 0x693ea4:c.instructions+=50;goto B693ea4;
case 0x693ea7:c.instructions+=49;goto B693ea7;
case 0x693eac:c.instructions+=48;goto B693eac;
case 0x693eb0:c.instructions+=47;goto B693eb0;
case 0x693eb4:c.instructions+=46;goto B693eb4;
case 0x693eb7:c.instructions+=45;goto B693eb7;
case 0x693ebc:c.instructions+=44;goto B693ebc;
case 0x693ec0:c.instructions+=43;goto B693ec0;
case 0x693ec4:c.instructions+=42;goto B693ec4;
case 0x693ec8:c.instructions+=41;goto B693ec8;
case 0x693ecd:c.instructions+=40;goto B693ecd;
case 0x693ed1:c.instructions+=39;goto B693ed1;
case 0x693ed5:c.instructions+=38;goto B693ed5;
case 0x693ed9:c.instructions+=37;goto B693ed9;
case 0x693ede:c.instructions+=36;goto B693ede;
case 0x693ee2:c.instructions+=35;goto B693ee2;
case 0x693ee6:c.instructions+=34;goto B693ee6;
case 0x693eea:c.instructions+=33;goto B693eea;
case 0x693eee:c.instructions+=32;goto B693eee;
case 0x693ef2:c.instructions+=31;goto B693ef2;
case 0x693ef5:c.instructions+=30;goto B693ef5;
case 0x693ef9:c.instructions+=29;goto B693ef9;
case 0x693efc:c.instructions+=28;goto B693efc;
case 0x693f00:c.instructions+=27;goto B693f00;
case 0x693f03:c.instructions+=26;goto B693f03;
case 0x693f07:c.instructions+=25;goto B693f07;
case 0x693f0a:c.instructions+=24;goto B693f0a;
case 0x693f0d:c.instructions+=23;goto B693f0d;
case 0x693f11:c.instructions+=22;goto B693f11;
case 0x693f14:c.instructions+=21;goto B693f14;
case 0x693f19:c.instructions+=20;goto B693f19;
case 0x693f1d:c.instructions+=19;goto B693f1d;
case 0x693f21:c.instructions+=18;goto B693f21;
case 0x693f24:c.instructions+=17;goto B693f24;
case 0x693f29:c.instructions+=16;goto B693f29;
case 0x693f2d:c.instructions+=15;goto B693f2d;
case 0x693f31:c.instructions+=14;goto B693f31;
case 0x693f35:c.instructions+=13;goto B693f35;
case 0x693f3a:c.instructions+=12;goto B693f3a;
case 0x693f3e:c.instructions+=11;goto B693f3e;
case 0x693f42:c.instructions+=10;goto B693f42;
case 0x693f46:c.instructions+=9;goto B693f46;
case 0x693f4b:c.instructions+=8;goto B693f4b;
case 0x693f4f:c.instructions+=7;goto B693f4f;
case 0x693f53:c.instructions+=6;goto B693f53;
case 0x693f57:c.instructions+=5;goto B693f57;
case 0x693f5b:c.instructions+=4;goto B693f5b;
case 0x693f5d:c.instructions+=3;goto B693f5d;
case 0x693f60:c.instructions+=2;goto B693f60;
case 0x693f61:c.instructions+=1;goto B693f61;
case 0x693f64:goto L693f64;
case 0x693f66:c.instructions+=4;goto B693f66;
case 0x693f67:c.instructions+=3;goto B693f67;
case 0x693f69:c.instructions+=2;goto B693f69;
case 0x693f6a:c.instructions+=1;goto B693f6a;
case 0x693f6f:goto L693f6f;
case 0x693f71:c.instructions+=23;goto B693f71;
case 0x693f72:c.instructions+=22;goto B693f72;
case 0x693f74:c.instructions+=21;goto B693f74;
case 0x693f77:c.instructions+=20;goto B693f77;
case 0x693f79:c.instructions+=19;goto B693f79;
case 0x693f7a:c.instructions+=18;goto B693f7a;
case 0x693f7b:c.instructions+=17;goto B693f7b;
case 0x693f7e:c.instructions+=16;goto B693f7e;
case 0x693f80:c.instructions+=15;goto B693f80;
case 0x693f83:c.instructions+=14;goto B693f83;
case 0x693f85:c.instructions+=13;goto B693f85;
case 0x693f88:c.instructions+=12;goto B693f88;
case 0x693f8a:c.instructions+=11;goto B693f8a;
case 0x693f8d:c.instructions+=10;goto B693f8d;
case 0x693f90:c.instructions+=9;goto B693f90;
case 0x693f92:c.instructions+=8;goto B693f92;
case 0x693f94:c.instructions+=7;goto B693f94;
case 0x693f97:c.instructions+=6;goto B693f97;
case 0x693f99:c.instructions+=5;goto B693f99;
case 0x693f9b:c.instructions+=4;goto B693f9b;
case 0x693f9e:c.instructions+=3;goto B693f9e;
case 0x693fa0:c.instructions+=2;goto B693fa0;
case 0x693fa3:c.instructions+=1;goto B693fa3;
case 0x693fa9:goto L693fa9;
case 0x693fb0:goto L693fb0;
case 0x693fb2:c.instructions+=31;goto B693fb2;
case 0x693fb5:c.instructions+=30;goto B693fb5;
case 0x693fb7:c.instructions+=29;goto B693fb7;
case 0x693fba:c.instructions+=28;goto B693fba;
case 0x693fbc:c.instructions+=27;goto B693fbc;
case 0x693fbf:c.instructions+=26;goto B693fbf;
case 0x693fc1:c.instructions+=25;goto B693fc1;
case 0x693fc4:c.instructions+=24;goto B693fc4;
case 0x693fc6:c.instructions+=23;goto B693fc6;
case 0x693fc9:c.instructions+=22;goto B693fc9;
case 0x693fcb:c.instructions+=21;goto B693fcb;
case 0x693fce:c.instructions+=20;goto B693fce;
case 0x693fd0:c.instructions+=19;goto B693fd0;
case 0x693fd3:c.instructions+=18;goto B693fd3;
case 0x693fd5:c.instructions+=17;goto B693fd5;
case 0x693fd8:c.instructions+=16;goto B693fd8;
case 0x693fda:c.instructions+=15;goto B693fda;
case 0x693fdd:c.instructions+=14;goto B693fdd;
case 0x693fdf:c.instructions+=13;goto B693fdf;
case 0x693fe2:c.instructions+=12;goto B693fe2;
case 0x693fe4:c.instructions+=11;goto B693fe4;
case 0x693fe7:c.instructions+=10;goto B693fe7;
case 0x693fe9:c.instructions+=9;goto B693fe9;
case 0x693fec:c.instructions+=8;goto B693fec;
case 0x693fee:c.instructions+=7;goto B693fee;
case 0x693ff1:c.instructions+=6;goto B693ff1;
case 0x693ff3:c.instructions+=5;goto B693ff3;
case 0x693ff6:c.instructions+=4;goto B693ff6;
case 0x693ff8:c.instructions+=3;goto B693ff8;
case 0x693ffb:c.instructions+=2;goto B693ffb;
case 0x693ffd:c.instructions+=1;goto B693ffd;
default:missing_instruction(c.pc);}
B693001:L693001:{c.instructions+=106;NFSU2_TR(0x693001);
__builtin_memmove((R+4384),(R+4432),8);
}
B693004:{NFSU2_TR(0x693004);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693007:{NFSU2_TR(0x693007);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69300a:{NFSU2_TR(0x69300a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B69300f:{NFSU2_TR(0x69300f);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693013:{NFSU2_TR(0x693013);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693017:{NFSU2_TR(0x693017);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B69301b:{NFSU2_TR(0x69301b);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B69301f:{NFSU2_TR(0x69301f);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693024:{NFSU2_TR(0x693024);
__builtin_memmove((R+4384),(R+4432),8);
}
B693027:{NFSU2_TR(0x693027);
__builtin_memmove((R+4400),(R+4448),8);
}
B69302a:{NFSU2_TR(0x69302a);
__builtin_memmove((R+4372),(R+4368),4);
}
B69302d:{NFSU2_TR(0x69302d);
__builtin_memmove((R+4388),(R+4384),4);
}
B693030:{NFSU2_TR(0x693030);
__builtin_memmove((R+4404),(R+4400),4);
}
B693033:{NFSU2_TR(0x693033);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693038:{NFSU2_TR(0x693038);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69303c:{NFSU2_TR(0x69303c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693041:{NFSU2_TR(0x693041);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693045:{NFSU2_TR(0x693045);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693049:{NFSU2_TR(0x693049);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69304e:{NFSU2_TR(0x69304e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693051:{NFSU2_TR(0x693051);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693054:{NFSU2_TR(0x693054);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B693058:{NFSU2_TR(0x693058);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69305d:{NFSU2_TR(0x69305d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693061:{NFSU2_TR(0x693061);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693066:{NFSU2_TR(0x693066);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B69306a:{NFSU2_TR(0x69306a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69306e:{NFSU2_TR(0x69306e);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693073:{NFSU2_TR(0x693073);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693077:{NFSU2_TR(0x693077);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69307b:{NFSU2_TR(0x69307b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69307f:{NFSU2_TR(0x69307f);
{wv<8>((R+4432),uo::pswapd<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B693083:{NFSU2_TR(0x693083);
{wv<8>((R+4416),uo::pswapd<8>(rv<8>((R+4416)),rv<8>((R+4384))));}
}
B693087:{NFSU2_TR(0x693087);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4352))));}
}
B69308b:{NFSU2_TR(0x69308b);
{wv<8>((R+4448),uo::pswapd<8>(rv<8>((R+4448)),rv<8>((R+4400))));}
}
B69308f:{NFSU2_TR(0x69308f);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693093:{NFSU2_TR(0x693093);
{wv<8>((R+4464),uo::pswapd<8>(rv<8>((R+4464)),rv<8>((R+4384))));}
}
B693097:{NFSU2_TR(0x693097);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69309b:{NFSU2_TR(0x69309b);
{wv<8>((R+4352),uo::pswapd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69309f:{NFSU2_TR(0x69309f);
{wv<8>((R+4432),uo::pfnacc<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6930a3:{NFSU2_TR(0x6930a3);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B6930a7:{NFSU2_TR(0x6930a7);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6930ab:{NFSU2_TR(0x6930ab);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6930af:{NFSU2_TR(0x6930af);
{wv<8>((R+4448),uo::pfnacc<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B6930b3:{NFSU2_TR(0x6930b3);
{wv<8>((R+4368),uo::pfnacc<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6930b7:{NFSU2_TR(0x6930b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6930bb:{NFSU2_TR(0x6930bb);
__builtin_memmove((R+4416),(R+4368),8);
}
B6930be:{NFSU2_TR(0x6930be);
__builtin_memmove((R+4400),(R+4368),8);
}
B6930c1:{NFSU2_TR(0x6930c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6930c5:{NFSU2_TR(0x6930c5);
__builtin_memmove((R+4384),(R+4448),8);
}
B6930c8:{NFSU2_TR(0x6930c8);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6930cb:{NFSU2_TR(0x6930cb);
__builtin_memmove((R+4404),(R+4400),4);
}
B6930ce:{NFSU2_TR(0x6930ce);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6930d1:{NFSU2_TR(0x6930d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6930d6:{NFSU2_TR(0x6930d6);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6930da:{NFSU2_TR(0x6930da);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B6930de:{NFSU2_TR(0x6930de);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B6930e2:{NFSU2_TR(0x6930e2);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6930e6:{NFSU2_TR(0x6930e6);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B6930ea:{NFSU2_TR(0x6930ea);
__builtin_memmove((R+4400),(R+4368),8);
}
B6930ed:{NFSU2_TR(0x6930ed);
__builtin_memmove((R+4416),(R+4448),8);
}
B6930f0:{NFSU2_TR(0x6930f0);
__builtin_memmove((R+4384),(R+4432),8);
}
B6930f3:{NFSU2_TR(0x6930f3);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6930f6:{NFSU2_TR(0x6930f6);
__builtin_memmove((R+4420),(R+4416),4);
}
B6930f9:{NFSU2_TR(0x6930f9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6930fc:{NFSU2_TR(0x6930fc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B693100:{NFSU2_TR(0x693100);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693104:{NFSU2_TR(0x693104);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693108:{NFSU2_TR(0x693108);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B69310c:{NFSU2_TR(0x69310c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693110:{NFSU2_TR(0x693110);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693115:{NFSU2_TR(0x693115);
__builtin_memmove((R+4416),(R+4352),8);
}
B693118:{NFSU2_TR(0x693118);
__builtin_memmove((R+4384),(R+4432),8);
}
B69311b:{NFSU2_TR(0x69311b);
__builtin_memmove((R+4400),(R+4448),8);
}
B69311e:{NFSU2_TR(0x69311e);
__builtin_memmove((R+4372),(R+4368),4);
}
B693121:{NFSU2_TR(0x693121);
__builtin_memmove((R+4388),(R+4384),4);
}
B693124:{NFSU2_TR(0x693124);
__builtin_memmove((R+4404),(R+4400),4);
}
B693127:{NFSU2_TR(0x693127);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B69312b:{NFSU2_TR(0x69312b);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69312f:{NFSU2_TR(0x69312f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693134:{NFSU2_TR(0x693134);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693138:{NFSU2_TR(0x693138);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69313c:{NFSU2_TR(0x69313c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693141:{NFSU2_TR(0x693141);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693144:{NFSU2_TR(0x693144);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693147:{NFSU2_TR(0x693147);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B69314b:{NFSU2_TR(0x69314b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693150:{NFSU2_TR(0x693150);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B693154:{NFSU2_TR(0x693154);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B693158:{NFSU2_TR(0x693158);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69315c:{NFSU2_TR(0x69315c);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693161:{NFSU2_TR(0x693161);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4388),4);
}
B693164:{NFSU2_TR(0x693164);
__builtin_memmove((R+4468),(R+4416),4);
}
B693167:{NFSU2_TR(0x693167);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B69316a:{NFSU2_TR(0x69316a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4368),(U+0),8);
}
B69316e:{NFSU2_TR(0x69316e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4404),(U+4),4);
}
B693172:{NFSU2_TR(0x693172);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4368),(R+4372),4);
w4(U+8,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4372),(U+4),4);
}
B693177:{NFSU2_TR(0x693177);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B69317b:{NFSU2_TR(0x69317b);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B69317f:{NFSU2_TR(0x69317f);
{wv<8>((R+4352),uo::pfnacc<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693183:{NFSU2_TR(0x693183);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693187:{NFSU2_TR(0x693187);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B69318b:{NFSU2_TR(0x69318b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69318d:{NFSU2_TR(0x69318d);
__builtin_memmove((R+4416),(R+4352),8);
}
B693190:{NFSU2_TR(0x693190);
if(r1(R+518)){{goto L693195;}}
}
B693192:L693192:{c.instructions+=1;NFSU2_TR(0x693192);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+0)),r4(U+0));
}
B693195:L693195:{c.instructions+=11;NFSU2_TR(0x693195);
{SPILL();c.pc=0x693195u;V r_=user_op(c,524532,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B693199:{NFSU2_TR(0x693199);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B69319c:{NFSU2_TR(0x69319c);
__builtin_memmove((R+4356),(R+4352),4);
}
B69319f:{NFSU2_TR(0x69319f);
{wv<8>((R+4400),uo::pfcmpeq<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6931a3:{NFSU2_TR(0x6931a3);
{SPILL();c.pc=0x6931a3u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL();wv<8>((R+4352),r_);}
}
B6931a7:{NFSU2_TR(0x6931a7);
{SPILL();c.pc=0x6931a7u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL();wv<8>((R+4352),r_);}
}
B6931ab:{NFSU2_TR(0x6931ab);
w4(R+0,u32(r8(R+4400)));
}
B6931ae:{NFSU2_TR(0x6931ae);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7148))));}
}
B6931b6:{NFSU2_TR(0x6931b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6931b8:{NFSU2_TR(0x6931b8);
{wv<8>((R+4368),uo::pswapd<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6931bc:{NFSU2_TR(0x6931bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L693250;}}
}
B6931c2:L6931c2:{c.instructions+=37;NFSU2_TR(0x6931c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6931c6:{NFSU2_TR(0x6931c6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B6931ca:{NFSU2_TR(0x6931ca);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B6931cf:{NFSU2_TR(0x6931cf);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B6931d4:{NFSU2_TR(0x6931d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B6931d9:{NFSU2_TR(0x6931d9);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B6931dd:{NFSU2_TR(0x6931dd);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B6931e1:{NFSU2_TR(0x6931e1);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B6931e5:{NFSU2_TR(0x6931e5);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6931e9:{NFSU2_TR(0x6931e9);
__builtin_memmove((R+4416),(R+4384),8);
}
B6931ec:{NFSU2_TR(0x6931ec);
__builtin_memmove((R+4464),(R+4432),8);
}
B6931ef:{NFSU2_TR(0x6931ef);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B6931f2:{NFSU2_TR(0x6931f2);
__builtin_memmove((R+4420),(R+4400),4);
}
B6931f5:{NFSU2_TR(0x6931f5);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B6931f8:{NFSU2_TR(0x6931f8);
__builtin_memmove((R+4468),(R+4448),4);
}
B6931fb:{NFSU2_TR(0x6931fb);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B6931fe:{NFSU2_TR(0x6931fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693202:{NFSU2_TR(0x693202);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693206:{NFSU2_TR(0x693206);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69320a:{NFSU2_TR(0x69320a);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69320f:{NFSU2_TR(0x69320f);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693214:{NFSU2_TR(0x693214);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693219:{NFSU2_TR(0x693219);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69321e:{NFSU2_TR(0x69321e);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693222:{NFSU2_TR(0x693222);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693226:{NFSU2_TR(0x693226);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B69322a:{NFSU2_TR(0x69322a);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69322e:{NFSU2_TR(0x69322e);
__builtin_memmove((R+4416),(R+4384),8);
}
B693231:{NFSU2_TR(0x693231);
__builtin_memmove((R+4464),(R+4432),8);
}
B693234:{NFSU2_TR(0x693234);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B693237:{NFSU2_TR(0x693237);
__builtin_memmove((R+4420),(R+4400),4);
}
B69323a:{NFSU2_TR(0x69323a);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B69323d:{NFSU2_TR(0x69323d);
__builtin_memmove((R+4468),(R+4448),4);
}
B693240:{NFSU2_TR(0x693240);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693244:{NFSU2_TR(0x693244);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693248:{NFSU2_TR(0x693248);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69324c:{NFSU2_TR(0x69324c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693250:L693250:{c.instructions+=3;NFSU2_TR(0x693250);
w2(R+4260,0xffffu);
}
B693252:{NFSU2_TR(0x693252);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B693255:{NFSU2_TR(0x693255);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693258:L693258:{c.instructions+=37;NFSU2_TR(0x693258);
w2(R+4260,0xffffu);
}
B69325a:{NFSU2_TR(0x69325a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B69325d:{NFSU2_TR(0x69325d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693261:{NFSU2_TR(0x693261);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B693265:{NFSU2_TR(0x693265);
__builtin_memmove((R+20),(R+16),4);
}
B693267:{NFSU2_TR(0x693267);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B69326a:{NFSU2_TR(0x69326a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69326d:{NFSU2_TR(0x69326d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693271:{NFSU2_TR(0x693271);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693275:{NFSU2_TR(0x693275);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B693279:{NFSU2_TR(0x693279);
__builtin_memmove((R+4384),(R+4352),8);
}
B69327c:{NFSU2_TR(0x69327c);
__builtin_memmove((R+4356),(R+4368),4);
}
B69327f:{NFSU2_TR(0x69327f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4372),4);
}
B693282:{NFSU2_TR(0x693282);
__builtin_memmove((R+4432),(R+4400),8);
}
B693285:{NFSU2_TR(0x693285);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B693289:{NFSU2_TR(0x693289);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69328e:{NFSU2_TR(0x69328e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693292:{NFSU2_TR(0x693292);
__builtin_memmove((R+4404),(R+4416),4);
}
B693295:{NFSU2_TR(0x693295);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693299:{NFSU2_TR(0x693299);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69329d:{NFSU2_TR(0x69329d);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4420),4);
}
B6932a0:{NFSU2_TR(0x6932a0);
__builtin_memmove((R+4368),(R+4448),8);
}
B6932a3:{NFSU2_TR(0x6932a3);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932a8:{NFSU2_TR(0x6932a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932ad:{NFSU2_TR(0x6932ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6932b0:{NFSU2_TR(0x6932b0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6932b3:{NFSU2_TR(0x6932b3);
__builtin_memmove((R+4452),(R+4464),4);
}
B6932b6:{NFSU2_TR(0x6932b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B6932ba:{NFSU2_TR(0x6932ba);
__builtin_memmove((R+4384),(R+4352),8);
}
B6932bd:{NFSU2_TR(0x6932bd);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4468),4);
}
B6932c0:{NFSU2_TR(0x6932c0);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4448),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932c5:{NFSU2_TR(0x6932c5);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B6932c8:{NFSU2_TR(0x6932c8);
__builtin_memmove((R+4388),(R+4416),4);
}
B6932cb:{NFSU2_TR(0x6932cb);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932d0:{NFSU2_TR(0x6932d0);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932d5:{NFSU2_TR(0x6932d5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6932da:{NFSU2_TR(0x6932da);
if(r1(R+518)){{goto L69347b;}}
}
B6932e0:L6932e0:{c.instructions+=102;NFSU2_TR(0x6932e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6932e3:{NFSU2_TR(0x6932e3);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6932e7:{NFSU2_TR(0x6932e7);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6932ec:{NFSU2_TR(0x6932ec);
__builtin_memmove((R+4384),(R+4352),8);
}
B6932ef:{NFSU2_TR(0x6932ef);
__builtin_memmove((R+4400),(R+4368),8);
}
B6932f2:{NFSU2_TR(0x6932f2);
__builtin_memmove((R+4416),(R+4352),8);
}
B6932f5:{NFSU2_TR(0x6932f5);
__builtin_memmove((R+4432),(R+4368),8);
}
B6932f8:{NFSU2_TR(0x6932f8);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6932fc:{NFSU2_TR(0x6932fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693301:{NFSU2_TR(0x693301);
__builtin_memmove((R+4448),(R+4384),8);
}
B693304:{NFSU2_TR(0x693304);
__builtin_memmove((R+4464),(R+4400),8);
}
B693307:{NFSU2_TR(0x693307);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69330c:{NFSU2_TR(0x69330c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693311:{NFSU2_TR(0x693311);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693316:{NFSU2_TR(0x693316);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69331b:{NFSU2_TR(0x69331b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693320:{NFSU2_TR(0x693320);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693325:{NFSU2_TR(0x693325);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693329:{NFSU2_TR(0x693329);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B69332d:{NFSU2_TR(0x69332d);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693331:{NFSU2_TR(0x693331);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693335:{NFSU2_TR(0x693335);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693339:{NFSU2_TR(0x693339);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B69333d:{NFSU2_TR(0x69333d);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B693340:{NFSU2_TR(0x693340);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693344:{NFSU2_TR(0x693344);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693349:{NFSU2_TR(0x693349);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B69334e:{NFSU2_TR(0x69334e);
__builtin_memmove((R+4384),(R+4352),8);
}
B693351:{NFSU2_TR(0x693351);
__builtin_memmove((R+4400),(R+4368),8);
}
B693354:{NFSU2_TR(0x693354);
__builtin_memmove((R+4416),(R+4352),8);
}
B693357:{NFSU2_TR(0x693357);
__builtin_memmove((R+4432),(R+4368),8);
}
B69335a:{NFSU2_TR(0x69335a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B69335e:{NFSU2_TR(0x69335e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693363:{NFSU2_TR(0x693363);
__builtin_memmove((R+4448),(R+4384),8);
}
B693366:{NFSU2_TR(0x693366);
__builtin_memmove((R+4464),(R+4400),8);
}
B693369:{NFSU2_TR(0x693369);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69336e:{NFSU2_TR(0x69336e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693373:{NFSU2_TR(0x693373);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693378:{NFSU2_TR(0x693378);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69337d:{NFSU2_TR(0x69337d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693382:{NFSU2_TR(0x693382);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693387:{NFSU2_TR(0x693387);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69338b:{NFSU2_TR(0x69338b);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B69338f:{NFSU2_TR(0x69338f);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693393:{NFSU2_TR(0x693393);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693397:{NFSU2_TR(0x693397);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69339b:{NFSU2_TR(0x69339b);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B69339f:{NFSU2_TR(0x69339f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6933a3:{NFSU2_TR(0x6933a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6933a7:{NFSU2_TR(0x6933a7);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6933ac:{NFSU2_TR(0x6933ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6933b1:{NFSU2_TR(0x6933b1);
__builtin_memmove((R+4384),(R+4352),8);
}
B6933b4:{NFSU2_TR(0x6933b4);
__builtin_memmove((R+4400),(R+4368),8);
}
B6933b7:{NFSU2_TR(0x6933b7);
__builtin_memmove((R+4416),(R+4352),8);
}
B6933ba:{NFSU2_TR(0x6933ba);
__builtin_memmove((R+4432),(R+4368),8);
}
B6933bd:{NFSU2_TR(0x6933bd);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6933c1:{NFSU2_TR(0x6933c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6933c6:{NFSU2_TR(0x6933c6);
__builtin_memmove((R+4448),(R+4384),8);
}
B6933c9:{NFSU2_TR(0x6933c9);
__builtin_memmove((R+4464),(R+4400),8);
}
B6933cc:{NFSU2_TR(0x6933cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6933d1:{NFSU2_TR(0x6933d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6933d6:{NFSU2_TR(0x6933d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6933db:{NFSU2_TR(0x6933db);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6933e0:{NFSU2_TR(0x6933e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B6933e5:{NFSU2_TR(0x6933e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B6933ea:{NFSU2_TR(0x6933ea);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6933ee:{NFSU2_TR(0x6933ee);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6933f2:{NFSU2_TR(0x6933f2);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6933f6:{NFSU2_TR(0x6933f6);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6933fa:{NFSU2_TR(0x6933fa);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6933fe:{NFSU2_TR(0x6933fe);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693402:{NFSU2_TR(0x693402);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693406:{NFSU2_TR(0x693406);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69340a:{NFSU2_TR(0x69340a);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69340f:{NFSU2_TR(0x69340f);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693414:{NFSU2_TR(0x693414);
__builtin_memmove((R+4384),(R+4352),8);
}
B693417:{NFSU2_TR(0x693417);
__builtin_memmove((R+4400),(R+4368),8);
}
B69341a:{NFSU2_TR(0x69341a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69341d:{NFSU2_TR(0x69341d);
__builtin_memmove((R+4432),(R+4368),8);
}
B693420:{NFSU2_TR(0x693420);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693424:{NFSU2_TR(0x693424);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693429:{NFSU2_TR(0x693429);
__builtin_memmove((R+4448),(R+4384),8);
}
B69342c:{NFSU2_TR(0x69342c);
__builtin_memmove((R+4464),(R+4400),8);
}
B69342f:{NFSU2_TR(0x69342f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693434:{NFSU2_TR(0x693434);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693439:{NFSU2_TR(0x693439);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B69343e:{NFSU2_TR(0x69343e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693443:{NFSU2_TR(0x693443);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693448:{NFSU2_TR(0x693448);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B69344d:{NFSU2_TR(0x69344d);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693451:{NFSU2_TR(0x693451);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693455:{NFSU2_TR(0x693455);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693459:{NFSU2_TR(0x693459);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B69345d:{NFSU2_TR(0x69345d);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693461:{NFSU2_TR(0x693461);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693465:{NFSU2_TR(0x693465);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693469:{NFSU2_TR(0x693469);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69346d:{NFSU2_TR(0x69346d);
__builtin_memmove((R+16),(R+20),4);
}
B69346f:{NFSU2_TR(0x69346f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B693473:{NFSU2_TR(0x693473);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B693476:{NFSU2_TR(0x693476);
w2(R+4260,0xffffu);
}
B693478:{NFSU2_TR(0x693478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69347b:L69347b:{c.instructions+=114;NFSU2_TR(0x69347b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69347e:{NFSU2_TR(0x69347e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693482:{NFSU2_TR(0x693482);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693487:{NFSU2_TR(0x693487);
__builtin_memmove((R+4384),(R+4352),8);
}
B69348a:{NFSU2_TR(0x69348a);
__builtin_memmove((R+4400),(R+4368),8);
}
B69348d:{NFSU2_TR(0x69348d);
__builtin_memmove((R+4416),(R+4352),8);
}
B693490:{NFSU2_TR(0x693490);
__builtin_memmove((R+4432),(R+4368),8);
}
B693493:{NFSU2_TR(0x693493);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693497:{NFSU2_TR(0x693497);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B69349c:{NFSU2_TR(0x69349c);
__builtin_memmove((R+4448),(R+4384),8);
}
B69349f:{NFSU2_TR(0x69349f);
__builtin_memmove((R+4464),(R+4400),8);
}
B6934a2:{NFSU2_TR(0x6934a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6934a7:{NFSU2_TR(0x6934a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6934ac:{NFSU2_TR(0x6934ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6934b1:{NFSU2_TR(0x6934b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6934b6:{NFSU2_TR(0x6934b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B6934bb:{NFSU2_TR(0x6934bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B6934c0:{NFSU2_TR(0x6934c0);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6934c4:{NFSU2_TR(0x6934c4);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6934c8:{NFSU2_TR(0x6934c8);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6934cc:{NFSU2_TR(0x6934cc);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6934d0:{NFSU2_TR(0x6934d0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6934d4:{NFSU2_TR(0x6934d4);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6934d8:{NFSU2_TR(0x6934d8);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B6934dc:{NFSU2_TR(0x6934dc);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6934e1:{NFSU2_TR(0x6934e1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6934e6:{NFSU2_TR(0x6934e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6934eb:{NFSU2_TR(0x6934eb);
__builtin_memmove((R+4384),(R+4352),8);
}
B6934ee:{NFSU2_TR(0x6934ee);
__builtin_memmove((R+4400),(R+4368),8);
}
B6934f1:{NFSU2_TR(0x6934f1);
__builtin_memmove((R+4416),(R+4352),8);
}
B6934f4:{NFSU2_TR(0x6934f4);
__builtin_memmove((R+4432),(R+4368),8);
}
B6934f7:{NFSU2_TR(0x6934f7);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6934fb:{NFSU2_TR(0x6934fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693500:{NFSU2_TR(0x693500);
__builtin_memmove((R+4448),(R+4384),8);
}
B693503:{NFSU2_TR(0x693503);
__builtin_memmove((R+4464),(R+4400),8);
}
B693506:{NFSU2_TR(0x693506);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B69350b:{NFSU2_TR(0x69350b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693510:{NFSU2_TR(0x693510);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693515:{NFSU2_TR(0x693515);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69351a:{NFSU2_TR(0x69351a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B69351f:{NFSU2_TR(0x69351f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693524:{NFSU2_TR(0x693524);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693528:{NFSU2_TR(0x693528);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B69352c:{NFSU2_TR(0x69352c);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693530:{NFSU2_TR(0x693530);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693534:{NFSU2_TR(0x693534);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693538:{NFSU2_TR(0x693538);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B69353c:{NFSU2_TR(0x69353c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693541:{NFSU2_TR(0x693541);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693546:{NFSU2_TR(0x693546);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B69354b:{NFSU2_TR(0x69354b);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693550:{NFSU2_TR(0x693550);
__builtin_memmove((R+4384),(R+4352),8);
}
B693553:{NFSU2_TR(0x693553);
__builtin_memmove((R+4400),(R+4368),8);
}
B693556:{NFSU2_TR(0x693556);
__builtin_memmove((R+4416),(R+4352),8);
}
B693559:{NFSU2_TR(0x693559);
__builtin_memmove((R+4432),(R+4368),8);
}
B69355c:{NFSU2_TR(0x69355c);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693560:{NFSU2_TR(0x693560);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693565:{NFSU2_TR(0x693565);
__builtin_memmove((R+4448),(R+4384),8);
}
B693568:{NFSU2_TR(0x693568);
__builtin_memmove((R+4464),(R+4400),8);
}
B69356b:{NFSU2_TR(0x69356b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693570:{NFSU2_TR(0x693570);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693575:{NFSU2_TR(0x693575);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B69357a:{NFSU2_TR(0x69357a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69357f:{NFSU2_TR(0x69357f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693584:{NFSU2_TR(0x693584);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B693589:{NFSU2_TR(0x693589);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69358d:{NFSU2_TR(0x69358d);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693591:{NFSU2_TR(0x693591);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693595:{NFSU2_TR(0x693595);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693599:{NFSU2_TR(0x693599);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69359d:{NFSU2_TR(0x69359d);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B6935a1:{NFSU2_TR(0x6935a1);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6935a6:{NFSU2_TR(0x6935a6);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B6935ab:{NFSU2_TR(0x6935ab);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6935b0:{NFSU2_TR(0x6935b0);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B6935b5:{NFSU2_TR(0x6935b5);
__builtin_memmove((R+4384),(R+4352),8);
}
B6935b8:{NFSU2_TR(0x6935b8);
__builtin_memmove((R+4400),(R+4368),8);
}
B6935bb:{NFSU2_TR(0x6935bb);
__builtin_memmove((R+4416),(R+4352),8);
}
B6935be:{NFSU2_TR(0x6935be);
__builtin_memmove((R+4432),(R+4368),8);
}
B6935c1:{NFSU2_TR(0x6935c1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6935c5:{NFSU2_TR(0x6935c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6935ca:{NFSU2_TR(0x6935ca);
__builtin_memmove((R+4448),(R+4384),8);
}
B6935cd:{NFSU2_TR(0x6935cd);
__builtin_memmove((R+4464),(R+4400),8);
}
B6935d0:{NFSU2_TR(0x6935d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6935d5:{NFSU2_TR(0x6935d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6935da:{NFSU2_TR(0x6935da);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6935df:{NFSU2_TR(0x6935df);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6935e4:{NFSU2_TR(0x6935e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B6935e9:{NFSU2_TR(0x6935e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+4))));}
}
B6935ee:{NFSU2_TR(0x6935ee);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B6935f2:{NFSU2_TR(0x6935f2);
{wv<8>((R+4368),uo::pfacc<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B6935f6:{NFSU2_TR(0x6935f6);
{wv<8>((R+4416),uo::pfacc<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B6935fa:{NFSU2_TR(0x6935fa);
{wv<8>((R+4432),uo::pfacc<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B6935fe:{NFSU2_TR(0x6935fe);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693602:{NFSU2_TR(0x693602);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693606:{NFSU2_TR(0x693606);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69360a:{NFSU2_TR(0x69360a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69360e:{NFSU2_TR(0x69360e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693612:{NFSU2_TR(0x693612);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693617:{NFSU2_TR(0x693617);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69361c:{NFSU2_TR(0x69361c);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693621:{NFSU2_TR(0x693621);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4416),(U+4),8);
}
B693626:{NFSU2_TR(0x693626);
u8 U[12];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B69362b:{NFSU2_TR(0x69362b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69362e:{NFSU2_TR(0x69362e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4368),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693632:{NFSU2_TR(0x693632);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693636:{NFSU2_TR(0x693636);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69363a:{NFSU2_TR(0x69363a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69363e:{NFSU2_TR(0x69363e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693642:{NFSU2_TR(0x693642);
__builtin_memmove((R+16),(R+20),4);
}
B693644:{NFSU2_TR(0x693644);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B693648:{NFSU2_TR(0x693648);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69364b:{NFSU2_TR(0x69364b);
w2(R+4260,0xffffu);
}
B69364d:{NFSU2_TR(0x69364d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693650:L693650:{c.instructions+=176;NFSU2_TR(0x693650);
__builtin_memmove((R+28),(R+28),4);
}
B693652:{NFSU2_TR(0x693652);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693653:{NFSU2_TR(0x693653);
__builtin_memmove((R+20),(R+16),4);
}
B693655:{NFSU2_TR(0x693655);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B693658:{NFSU2_TR(0x693658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69365b:{NFSU2_TR(0x69365b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B69365e:{NFSU2_TR(0x69365e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693662:{NFSU2_TR(0x693662);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B693666:{NFSU2_TR(0x693666);
__builtin_memmove((R+4416),(R+4352),8);
}
B693669:{NFSU2_TR(0x693669);
__builtin_memmove((R+4432),(R+4352),8);
}
B69366c:{NFSU2_TR(0x69366c);
__builtin_memmove((R+4448),(R+4368),8);
}
B69366f:{NFSU2_TR(0x69366f);
__builtin_memmove((R+4464),(R+4368),8);
}
B693672:{NFSU2_TR(0x693672);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B693675:{NFSU2_TR(0x693675);
__builtin_memmove((R+4452),(R+4384),4);
}
B693678:{NFSU2_TR(0x693678);
__builtin_memmove((R+4436),(R+4432),4);
}
B69367b:{NFSU2_TR(0x69367b);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4388),4);
}
B69367e:{NFSU2_TR(0x69367e);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693682:{NFSU2_TR(0x693682);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693686:{NFSU2_TR(0x693686);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69368a:{NFSU2_TR(0x69368a);
__builtin_memmove((R+4464),(R+4352),8);
}
B69368d:{NFSU2_TR(0x69368d);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693691:{NFSU2_TR(0x693691);
__builtin_memmove((R+4356),(R+4368),4);
}
B693694:{NFSU2_TR(0x693694);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B693697:{NFSU2_TR(0x693697);
__builtin_memmove((R+4448),(R+4400),8);
}
B69369a:{NFSU2_TR(0x69369a);
__builtin_memmove((R+4416),(R+4400),8);
}
B69369d:{NFSU2_TR(0x69369d);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6936a0:{NFSU2_TR(0x6936a0);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4388),4);
}
B6936a3:{NFSU2_TR(0x6936a3);
__builtin_memmove((R+4420),(R+4384),4);
}
B6936a6:{NFSU2_TR(0x6936a6);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B6936a9:{NFSU2_TR(0x6936a9);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6936ad:{NFSU2_TR(0x6936ad);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B6936b0:{NFSU2_TR(0x6936b0);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B6936b4:{NFSU2_TR(0x6936b4);
__builtin_memmove((R+4420),(R+4416),4);
}
B6936b7:{NFSU2_TR(0x6936b7);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6936bb:{NFSU2_TR(0x6936bb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6936bf:{NFSU2_TR(0x6936bf);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B6936c3:{NFSU2_TR(0x6936c3);
{wv<8>((R+4368),uo::pfsubr<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6936c7:{NFSU2_TR(0x6936c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6936cb:{NFSU2_TR(0x6936cb);
__builtin_memmove((R+4384),(R+4448),8);
}
B6936ce:{NFSU2_TR(0x6936ce);
__builtin_memmove((R+4416),(R+4368),8);
}
B6936d1:{NFSU2_TR(0x6936d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6936d5:{NFSU2_TR(0x6936d5);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6936d8:{NFSU2_TR(0x6936d8);
__builtin_memmove((R+4400),(R+4368),8);
}
B6936db:{NFSU2_TR(0x6936db);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6936de:{NFSU2_TR(0x6936de);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6936e2:{NFSU2_TR(0x6936e2);
__builtin_memmove((R+4404),(R+4400),4);
}
B6936e5:{NFSU2_TR(0x6936e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6936ea:{NFSU2_TR(0x6936ea);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B6936ee:{NFSU2_TR(0x6936ee);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B6936f2:{NFSU2_TR(0x6936f2);
__builtin_memmove((R+4416),(R+4448),8);
}
B6936f5:{NFSU2_TR(0x6936f5);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B6936f9:{NFSU2_TR(0x6936f9);
__builtin_memmove((R+4400),(R+4368),8);
}
B6936fc:{NFSU2_TR(0x6936fc);
__builtin_memmove((R+4420),(R+4416),4);
}
B6936ff:{NFSU2_TR(0x6936ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693703:{NFSU2_TR(0x693703);
__builtin_memmove((R+4384),(R+4432),8);
}
B693706:{NFSU2_TR(0x693706);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693709:{NFSU2_TR(0x693709);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B69370c:{NFSU2_TR(0x69370c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693711:{NFSU2_TR(0x693711);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693715:{NFSU2_TR(0x693715);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693719:{NFSU2_TR(0x693719);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B69371d:{NFSU2_TR(0x69371d);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693721:{NFSU2_TR(0x693721);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693725:{NFSU2_TR(0x693725);
__builtin_memmove((R+4384),(R+4432),8);
}
B693728:{NFSU2_TR(0x693728);
__builtin_memmove((R+4400),(R+4448),8);
}
B69372b:{NFSU2_TR(0x69372b);
__builtin_memmove((R+4372),(R+4368),4);
}
B69372e:{NFSU2_TR(0x69372e);
__builtin_memmove((R+4388),(R+4384),4);
}
B693731:{NFSU2_TR(0x693731);
__builtin_memmove((R+4404),(R+4400),4);
}
B693734:{NFSU2_TR(0x693734);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693739:{NFSU2_TR(0x693739);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B69373d:{NFSU2_TR(0x69373d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693742:{NFSU2_TR(0x693742);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693746:{NFSU2_TR(0x693746);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69374a:{NFSU2_TR(0x69374a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69374e:{NFSU2_TR(0x69374e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693751:{NFSU2_TR(0x693751);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693754:{NFSU2_TR(0x693754);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B693758:{NFSU2_TR(0x693758);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B69375d:{NFSU2_TR(0x69375d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+4))));}
}
B693762:{NFSU2_TR(0x693762);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B693766:{NFSU2_TR(0x693766);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69376a:{NFSU2_TR(0x69376a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69376e:{NFSU2_TR(0x69376e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693772:{NFSU2_TR(0x693772);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693776:{NFSU2_TR(0x693776);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69377a:{NFSU2_TR(0x69377a);
__builtin_memmove((R+4416),(R+4352),8);
}
B69377d:{NFSU2_TR(0x69377d);
__builtin_memmove((R+4432),(R+4352),8);
}
B693780:{NFSU2_TR(0x693780);
__builtin_memmove((R+4448),(R+4368),8);
}
B693783:{NFSU2_TR(0x693783);
__builtin_memmove((R+4464),(R+4368),8);
}
B693786:{NFSU2_TR(0x693786);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B693789:{NFSU2_TR(0x693789);
__builtin_memmove((R+4452),(R+4384),4);
}
B69378c:{NFSU2_TR(0x69378c);
__builtin_memmove((R+4436),(R+4432),4);
}
B69378f:{NFSU2_TR(0x69378f);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4388),4);
}
B693792:{NFSU2_TR(0x693792);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693796:{NFSU2_TR(0x693796);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B69379a:{NFSU2_TR(0x69379a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B69379e:{NFSU2_TR(0x69379e);
__builtin_memmove((R+4464),(R+4352),8);
}
B6937a1:{NFSU2_TR(0x6937a1);
{wv<8>((R+4432),uo::pfsub<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B6937a5:{NFSU2_TR(0x6937a5);
__builtin_memmove((R+4356),(R+4368),4);
}
B6937a8:{NFSU2_TR(0x6937a8);
__builtin_memmove((R+4464),(R+4468),4);
__builtin_memmove((R+4468),(R+4372),4);
}
B6937ab:{NFSU2_TR(0x6937ab);
__builtin_memmove((R+4448),(R+4400),8);
}
B6937ae:{NFSU2_TR(0x6937ae);
__builtin_memmove((R+4416),(R+4400),8);
}
B6937b1:{NFSU2_TR(0x6937b1);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B6937b4:{NFSU2_TR(0x6937b4);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4388),4);
}
B6937b7:{NFSU2_TR(0x6937b7);
__builtin_memmove((R+4420),(R+4384),4);
}
B6937ba:{NFSU2_TR(0x6937ba);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B6937bd:{NFSU2_TR(0x6937bd);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B6937c1:{NFSU2_TR(0x6937c1);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4420),4);
}
B6937c4:{NFSU2_TR(0x6937c4);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4416))));}
}
B6937c8:{NFSU2_TR(0x6937c8);
__builtin_memmove((R+4420),(R+4416),4);
}
B6937cb:{NFSU2_TR(0x6937cb);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6937cf:{NFSU2_TR(0x6937cf);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4416))));}
}
B6937d3:{NFSU2_TR(0x6937d3);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B6937d7:{NFSU2_TR(0x6937d7);
{wv<8>((R+4368),uo::pfsubr<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B6937db:{NFSU2_TR(0x6937db);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B6937df:{NFSU2_TR(0x6937df);
__builtin_memmove((R+4416),(R+4368),8);
}
B6937e2:{NFSU2_TR(0x6937e2);
__builtin_memmove((R+4400),(R+4368),8);
}
B6937e5:{NFSU2_TR(0x6937e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B6937e9:{NFSU2_TR(0x6937e9);
__builtin_memmove((R+4384),(R+4448),8);
}
B6937ec:{NFSU2_TR(0x6937ec);
__builtin_memmove((R+4416),(R+4420),4);
__builtin_memmove((R+4420),(R+4420),4);
}
B6937ef:{NFSU2_TR(0x6937ef);
__builtin_memmove((R+4404),(R+4400),4);
}
B6937f2:{NFSU2_TR(0x6937f2);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B6937f5:{NFSU2_TR(0x6937f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6937fa:{NFSU2_TR(0x6937fa);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B6937fe:{NFSU2_TR(0x6937fe);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B693802:{NFSU2_TR(0x693802);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693806:{NFSU2_TR(0x693806);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B69380a:{NFSU2_TR(0x69380a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69380e:{NFSU2_TR(0x69380e);
__builtin_memmove((R+4400),(R+4368),8);
}
B693811:{NFSU2_TR(0x693811);
__builtin_memmove((R+4416),(R+4448),8);
}
B693814:{NFSU2_TR(0x693814);
__builtin_memmove((R+4384),(R+4432),8);
}
B693817:{NFSU2_TR(0x693817);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B69381a:{NFSU2_TR(0x69381a);
__builtin_memmove((R+4420),(R+4416),4);
}
B69381d:{NFSU2_TR(0x69381d);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693820:{NFSU2_TR(0x693820);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B693824:{NFSU2_TR(0x693824);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693828:{NFSU2_TR(0x693828);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B69382c:{NFSU2_TR(0x69382c);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693830:{NFSU2_TR(0x693830);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693834:{NFSU2_TR(0x693834);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693838:{NFSU2_TR(0x693838);
__builtin_memmove((R+4416),(R+4352),8);
}
B69383b:{NFSU2_TR(0x69383b);
__builtin_memmove((R+4384),(R+4432),8);
}
B69383e:{NFSU2_TR(0x69383e);
__builtin_memmove((R+4400),(R+4448),8);
}
B693841:{NFSU2_TR(0x693841);
__builtin_memmove((R+4372),(R+4368),4);
}
B693844:{NFSU2_TR(0x693844);
__builtin_memmove((R+4388),(R+4384),4);
}
B693847:{NFSU2_TR(0x693847);
__builtin_memmove((R+4404),(R+4400),4);
}
B69384a:{NFSU2_TR(0x69384a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B69384e:{NFSU2_TR(0x69384e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693852:{NFSU2_TR(0x693852);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693857:{NFSU2_TR(0x693857);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B69385b:{NFSU2_TR(0x69385b);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B69385f:{NFSU2_TR(0x69385f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4352),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693863:{NFSU2_TR(0x693863);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693866:{NFSU2_TR(0x693866);
__builtin_memmove((R+4448),(R+4452),4);
__builtin_memmove((R+4452),(R+4452),4);
}
B693869:{NFSU2_TR(0x693869);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B69386d:{NFSU2_TR(0x69386d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693872:{NFSU2_TR(0x693872);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B693876:{NFSU2_TR(0x693876);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B69387a:{NFSU2_TR(0x69387a);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B69387e:{NFSU2_TR(0x69387e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693882:{NFSU2_TR(0x693882);
__builtin_memmove((R+4468),(R+4416),4);
}
B693885:{NFSU2_TR(0x693885);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4400),(U+0),8);
}
B693888:{NFSU2_TR(0x693888);
__builtin_memmove((R+4352),(R+4356),4);
__builtin_memmove((R+4356),(R+4388),4);
}
B69388b:{NFSU2_TR(0x69388b);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>(gp(0x7b7148))));}
}
B693893:{NFSU2_TR(0x693893);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693897:{NFSU2_TR(0x693897);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4404),(U+4),4);
}
B69389b:{NFSU2_TR(0x69389b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4368),(R+4372),4);
w4(U+8,u32(u32(r4(U+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4372),(U+4),4);
}
B69389f:{NFSU2_TR(0x69389f);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>(gp(0x7b7148))));}
}
B6938a7:{NFSU2_TR(0x6938a7);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4464))));}
}
B6938ab:{NFSU2_TR(0x6938ab);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4368))));}
}
B6938af:{NFSU2_TR(0x6938af);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B6938b3:{NFSU2_TR(0x6938b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6938b6:{NFSU2_TR(0x6938b6);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B6938ba:{NFSU2_TR(0x6938ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6938bc:{NFSU2_TR(0x6938bc);
__builtin_memmove((R+4416),(R+4352),8);
}
B6938bf:{NFSU2_TR(0x6938bf);
if(r1(R+518)){{goto L6938c4;}}
}
B6938c1:L6938c1:{c.instructions+=1;NFSU2_TR(0x6938c1);
u8 U[4];
w4(U+0,u32(r8(R+4352)));
s4(u32(r4(R+0)),r4(U+0));
}
B6938c4:L6938c4:{c.instructions+=13;NFSU2_TR(0x6938c4);
{SPILL();c.pc=0x6938c4u;V r_=user_op(c,524532,{rv<8>((R+4368)),rv<8>((R+4352))});SPILL();wv<8>((R+4368),r_);}
}
B6938c8:{NFSU2_TR(0x6938c8);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B6938cb:{NFSU2_TR(0x6938cb);
__builtin_memmove((R+4356),(R+4352),4);
}
B6938ce:{NFSU2_TR(0x6938ce);
{wv<8>((R+4400),uo::pfcmpeq<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B6938d2:{NFSU2_TR(0x6938d2);
{SPILL();c.pc=0x6938d2u;V r_=user_op(c,524534,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL();wv<8>((R+4352),r_);}
}
B6938d6:{NFSU2_TR(0x6938d6);
{SPILL();c.pc=0x6938d6u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4368))});SPILL();wv<8>((R+4352),r_);}
}
B6938da:{NFSU2_TR(0x6938da);
w4(R+0,u32(r8(R+4400)));
}
B6938dd:{NFSU2_TR(0x6938dd);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7148))));}
}
B6938e5:{NFSU2_TR(0x6938e5);
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
B6938e7:{NFSU2_TR(0x6938e7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6938ea:{NFSU2_TR(0x6938ea);
__builtin_memmove((R+4388),(R+4368),4);
}
B6938ed:{NFSU2_TR(0x6938ed);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4388),4);
}
B6938f0:{NFSU2_TR(0x6938f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69397c;}}
}
B6938f6:L6938f6:{c.instructions+=37;NFSU2_TR(0x6938f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6938f9:{NFSU2_TR(0x6938f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B6938fd:{NFSU2_TR(0x6938fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693901:{NFSU2_TR(0x693901);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693905:{NFSU2_TR(0x693905);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693909:{NFSU2_TR(0x693909);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69390d:{NFSU2_TR(0x69390d);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693911:{NFSU2_TR(0x693911);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B693915:{NFSU2_TR(0x693915);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B693919:{NFSU2_TR(0x693919);
__builtin_memmove((R+4416),(R+4384),8);
}
B69391c:{NFSU2_TR(0x69391c);
__builtin_memmove((R+4464),(R+4432),8);
}
B69391f:{NFSU2_TR(0x69391f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B693922:{NFSU2_TR(0x693922);
__builtin_memmove((R+4420),(R+4400),4);
}
B693925:{NFSU2_TR(0x693925);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B693928:{NFSU2_TR(0x693928);
__builtin_memmove((R+4468),(R+4448),4);
}
B69392b:{NFSU2_TR(0x69392b);
u8 U[8];
__builtin_memmove((U+0),(R+4384),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B69392e:{NFSU2_TR(0x69392e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693932:{NFSU2_TR(0x693932);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693936:{NFSU2_TR(0x693936);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69393a:{NFSU2_TR(0x69393a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4384),(U+4),8);
}
B69393e:{NFSU2_TR(0x69393e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693942:{NFSU2_TR(0x693942);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4400),(U+4),8);
}
B693946:{NFSU2_TR(0x693946);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B69394a:{NFSU2_TR(0x69394a);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B69394e:{NFSU2_TR(0x69394e);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693952:{NFSU2_TR(0x693952);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4368))));}
}
B693956:{NFSU2_TR(0x693956);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B69395a:{NFSU2_TR(0x69395a);
__builtin_memmove((R+4416),(R+4384),8);
}
B69395d:{NFSU2_TR(0x69395d);
__builtin_memmove((R+4464),(R+4432),8);
}
B693960:{NFSU2_TR(0x693960);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4404),4);
}
B693963:{NFSU2_TR(0x693963);
__builtin_memmove((R+4420),(R+4400),4);
}
B693966:{NFSU2_TR(0x693966);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4452),4);
}
B693969:{NFSU2_TR(0x693969);
__builtin_memmove((R+4468),(R+4448),4);
}
B69396c:{NFSU2_TR(0x69396c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4384),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693970:{NFSU2_TR(0x693970);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4416),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693974:{NFSU2_TR(0x693974);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4432),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693978:{NFSU2_TR(0x693978);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B69397c:L69397c:{c.instructions+=4;NFSU2_TR(0x69397c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69397f:{NFSU2_TR(0x69397f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693982:{NFSU2_TR(0x693982);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B693983:{NFSU2_TR(0x693983);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693986:L693986:{c.instructions+=8;NFSU2_TR(0x693986);
__builtin_memmove((R+28),(R+28),4);
}
B693988:{NFSU2_TR(0x693988);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693989:{NFSU2_TR(0x693989);
__builtin_memmove((R+20),(R+16),4);
}
B69398b:{NFSU2_TR(0x69398b);
w2(R+4260,0xffffu);
}
B69398d:{NFSU2_TR(0x69398d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B693990:{NFSU2_TR(0x693990);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B693993:{NFSU2_TR(0x693993);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B693996:{NFSU2_TR(0x693996);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69399bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x693650u);}goto L693650;}
}
B69399b:L69399b:{c.instructions+=4;NFSU2_TR(0x69399b);
w2(R+4260,0xffffu);
}
B69399d:{NFSU2_TR(0x69399d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6939a0:{NFSU2_TR(0x6939a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6939a1:{NFSU2_TR(0x6939a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6939a4:L6939a4:{c.instructions+=34;NFSU2_TR(0x6939a4);
__builtin_memmove((R+28),(R+28),4);
}
B6939a6:{NFSU2_TR(0x6939a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6939a7:{NFSU2_TR(0x6939a7);
__builtin_memmove((R+20),(R+16),4);
}
B6939a9:{NFSU2_TR(0x6939a9);
w2(R+4260,0xffffu);
}
B6939ab:{NFSU2_TR(0x6939ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6939ae:{NFSU2_TR(0x6939ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6939b1:{NFSU2_TR(0x6939b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6939b4:{NFSU2_TR(0x6939b4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B6939b7:{NFSU2_TR(0x6939b7);
__builtin_memmove((R+4368),(R+4352),8);
}
B6939ba:{NFSU2_TR(0x6939ba);
__builtin_memmove((R+4356),(R+4352),4);
}
B6939bd:{NFSU2_TR(0x6939bd);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B6939c0:{NFSU2_TR(0x6939c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B6939c4:{NFSU2_TR(0x6939c4);
__builtin_memmove((R+4388),(R+4384),4);
}
B6939c7:{NFSU2_TR(0x6939c7);
__builtin_memmove((R+4400),(R+4352),8);
}
B6939ca:{NFSU2_TR(0x6939ca);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B6939ce:{NFSU2_TR(0x6939ce);
__builtin_memmove((R+4416),(R+4368),8);
}
B6939d1:{NFSU2_TR(0x6939d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B6939d6:{NFSU2_TR(0x6939d6);
__builtin_memmove((R+4432),(R+4384),8);
}
B6939d9:{NFSU2_TR(0x6939d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B6939de:{NFSU2_TR(0x6939de);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B6939e3:{NFSU2_TR(0x6939e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6939e8:{NFSU2_TR(0x6939e8);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B6939ec:{NFSU2_TR(0x6939ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B6939f1:{NFSU2_TR(0x6939f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B6939f6:{NFSU2_TR(0x6939f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B6939fb:{NFSU2_TR(0x6939fb);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B6939ff:{NFSU2_TR(0x6939ff);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693a03:{NFSU2_TR(0x693a03);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693a07:{NFSU2_TR(0x693a07);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B693a0a:{NFSU2_TR(0x693a0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693a0e:{NFSU2_TR(0x693a0e);
w2(R+4260,0xffffu);
}
B693a10:{NFSU2_TR(0x693a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693a13:{NFSU2_TR(0x693a13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693a14:{NFSU2_TR(0x693a14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693a17:L693a17:{c.instructions+=32;NFSU2_TR(0x693a17);
__builtin_memmove((R+28),(R+28),4);
}
B693a19:{NFSU2_TR(0x693a19);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693a1a:{NFSU2_TR(0x693a1a);
__builtin_memmove((R+20),(R+16),4);
}
B693a1c:{NFSU2_TR(0x693a1c);
w2(R+4260,0xffffu);
}
B693a1e:{NFSU2_TR(0x693a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693a21:{NFSU2_TR(0x693a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693a24:{NFSU2_TR(0x693a24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693a27:{NFSU2_TR(0x693a27);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693a2a:{NFSU2_TR(0x693a2a);
__builtin_memmove((R+4368),(R+4352),8);
}
B693a2d:{NFSU2_TR(0x693a2d);
__builtin_memmove((R+4356),(R+4352),4);
}
B693a30:{NFSU2_TR(0x693a30);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B693a33:{NFSU2_TR(0x693a33);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B693a37:{NFSU2_TR(0x693a37);
__builtin_memmove((R+4388),(R+4384),4);
}
B693a3a:{NFSU2_TR(0x693a3a);
__builtin_memmove((R+4400),(R+4352),8);
}
B693a3d:{NFSU2_TR(0x693a3d);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693a41:{NFSU2_TR(0x693a41);
__builtin_memmove((R+4416),(R+4368),8);
}
B693a44:{NFSU2_TR(0x693a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693a49:{NFSU2_TR(0x693a49);
__builtin_memmove((R+4432),(R+4384),8);
}
B693a4c:{NFSU2_TR(0x693a4c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693a51:{NFSU2_TR(0x693a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693a56:{NFSU2_TR(0x693a56);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693a5a:{NFSU2_TR(0x693a5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693a5f:{NFSU2_TR(0x693a5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693a64:{NFSU2_TR(0x693a64);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693a68:{NFSU2_TR(0x693a68);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693a6c:{NFSU2_TR(0x693a6c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693a70:{NFSU2_TR(0x693a70);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B693a73:{NFSU2_TR(0x693a73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B693a77:{NFSU2_TR(0x693a77);
w2(R+4260,0xffffu);
}
B693a79:{NFSU2_TR(0x693a79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693a7c:{NFSU2_TR(0x693a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693a7d:{NFSU2_TR(0x693a7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693a80:L693a80:{c.instructions+=26;NFSU2_TR(0x693a80);
w2(R+4260,0xffffu);
}
B693a82:{NFSU2_TR(0x693a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693a86:{NFSU2_TR(0x693a86);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693a89:{NFSU2_TR(0x693a89);
__builtin_memmove((R+4368),(R+4352),8);
}
B693a8c:{NFSU2_TR(0x693a8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B693a90:{NFSU2_TR(0x693a90);
__builtin_memmove((R+4400),(R+4384),8);
}
B693a93:{NFSU2_TR(0x693a93);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B693a97:{NFSU2_TR(0x693a97);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4384))));}
}
B693a9b:{NFSU2_TR(0x693a9b);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693a9f:{NFSU2_TR(0x693a9f);
{wv<8>((R+4352),uo::pfacc<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B693aa3:{NFSU2_TR(0x693aa3);
__builtin_memmove((R+4432),(R+4352),8);
}
B693aa6:{NFSU2_TR(0x693aa6);
{SPILL();c.pc=0x693aa6u;V r_=user_op(c,524533,{rv<8>((R+4416)),rv<8>((R+4352))});SPILL();wv<8>((R+4416),r_);}
}
B693aaa:{NFSU2_TR(0x693aaa);
{wv<8>((R+4432),uo::pfcmpgt<8>(rv<8>((R+4432)),rv<8>(gp(0x7b71c8))));}
}
B693ab2:{NFSU2_TR(0x693ab2);
__builtin_memmove((R+4384),(R+4416),8);
}
B693ab5:{NFSU2_TR(0x693ab5);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693ab9:{NFSU2_TR(0x693ab9);
{SPILL();c.pc=0x693ab9u;V r_=user_op(c,524535,{rv<8>((R+4352)),rv<8>((R+4384))});SPILL();wv<8>((R+4352),r_);}
}
B693abd:{NFSU2_TR(0x693abd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693ac1:{NFSU2_TR(0x693ac1);
w8(R+4368,u64(u64(r8(R+4368))&u64(r8(R+4432))));
}
B693ac4:{NFSU2_TR(0x693ac4);
w8(R+4400,u64(u64(r8(R+4400))&u64(r8(R+4432))));
}
B693ac7:{NFSU2_TR(0x693ac7);
{SPILL();c.pc=0x693ac7u;V r_=user_op(c,524536,{rv<8>((R+4352)),rv<8>((R+4416))});SPILL();wv<8>((R+4352),r_);}
}
B693acb:{NFSU2_TR(0x693acb);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B693acf:{NFSU2_TR(0x693acf);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4352))));}
}
B693ad3:{NFSU2_TR(0x693ad3);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B693ad6:{NFSU2_TR(0x693ad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B693ada:{NFSU2_TR(0x693ada);
w2(R+4260,0xffffu);
}
B693adc:{NFSU2_TR(0x693adc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693adf:L693adf:{c.instructions+=30;NFSU2_TR(0x693adf);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693ae3:{NFSU2_TR(0x693ae3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693ae7:{NFSU2_TR(0x693ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693aeb:{NFSU2_TR(0x693aeb);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693aee:{NFSU2_TR(0x693aee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693af1:{NFSU2_TR(0x693af1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4448,u64(r4(U+4)));
}
B693af6:{NFSU2_TR(0x693af6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4368,u64(r4(U+4)));
}
B693afa:{NFSU2_TR(0x693afa);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4384),(U+0),8);
}
B693afd:{NFSU2_TR(0x693afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B693b01:{NFSU2_TR(0x693b01);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B693b05:{NFSU2_TR(0x693b05);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B693b09:{NFSU2_TR(0x693b09);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693b0e:{NFSU2_TR(0x693b0e);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B693b12:{NFSU2_TR(0x693b12);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693b16:{NFSU2_TR(0x693b16);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4416))));}
}
B693b1a:{NFSU2_TR(0x693b1a);
__builtin_memmove((R+4452),(R+4448),4);
}
B693b1d:{NFSU2_TR(0x693b1d);
{wv<8>((R+4400),uo::pfsub<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B693b21:{NFSU2_TR(0x693b21);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4448))));}
}
B693b25:{NFSU2_TR(0x693b25);
__builtin_memmove((R+4468),(R+4464),4);
}
B693b28:{NFSU2_TR(0x693b28);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4448))));}
}
B693b2c:{NFSU2_TR(0x693b2c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4416))));}
}
B693b30:{NFSU2_TR(0x693b30);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4464))));}
}
B693b34:{NFSU2_TR(0x693b34);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4432))));}
}
B693b38:{NFSU2_TR(0x693b38);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4464))));}
}
B693b3c:{NFSU2_TR(0x693b3c);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693b40:{NFSU2_TR(0x693b40);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693b44:{NFSU2_TR(0x693b44);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B693b47:{NFSU2_TR(0x693b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4368)));
s4(u32(r4(U+0)),r4(U+4));
}
B693b4b:{NFSU2_TR(0x693b4b);
w2(R+4260,0xffffu);
}
B693b4d:{NFSU2_TR(0x693b4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693b50:L693b50:{c.instructions+=55;NFSU2_TR(0x693b50);
w2(R+4260,0xffffu);
}
B693b52:{NFSU2_TR(0x693b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B693b57:{NFSU2_TR(0x693b57);
__builtin_memmove((R+4368),(R+4352),8);
}
B693b5a:{NFSU2_TR(0x693b5a);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B693b5e:{NFSU2_TR(0x693b5e);
__builtin_memmove((R+4384),(R+4368),8);
}
B693b61:{NFSU2_TR(0x693b61);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693b65:{NFSU2_TR(0x693b65);
__builtin_memmove((R+4400),gp(0x7b71f0),8);
}
B693b6c:{NFSU2_TR(0x693b6c);
__builtin_memmove((R+4416),(R+4368),8);
}
B693b6f:{NFSU2_TR(0x693b6f);
__builtin_memmove((R+4464),(R+4384),8);
}
B693b72:{NFSU2_TR(0x693b72);
{wv<8>((R+4464),uo::pfsub<8>(rv<8>((R+4464)),rv<8>((R+4368))));}
}
B693b76:{NFSU2_TR(0x693b76);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4400))));}
}
B693b7a:{NFSU2_TR(0x693b7a);
__builtin_memmove((R+4448),(R+4384),8);
}
B693b7d:{NFSU2_TR(0x693b7d);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>(gp(0x7b71f8))));}
}
B693b85:{NFSU2_TR(0x693b85);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((R+4400))));}
}
B693b89:{NFSU2_TR(0x693b89);
{wv<8>((R+4448),uo::pfsub<8>(rv<8>((R+4448)),rv<8>((R+4416))));}
}
B693b8d:{NFSU2_TR(0x693b8d);
__builtin_memmove((R+4432),(R+4368),8);
}
B693b90:{NFSU2_TR(0x693b90);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693b94:{NFSU2_TR(0x693b94);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4352))));}
}
B693b98:{NFSU2_TR(0x693b98);
{wv<8>((R+4384),uo::pfsub<8>(rv<8>((R+4384)),rv<8>((R+4432))));}
}
B693b9c:{NFSU2_TR(0x693b9c);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>(gp(0x7b71e0))));}
}
B693ba4:{NFSU2_TR(0x693ba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693ba8:{NFSU2_TR(0x693ba8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693bac:{NFSU2_TR(0x693bac);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693bb0:{NFSU2_TR(0x693bb0);
__builtin_memmove((R+4468),(R+4464),4);
}
B693bb3:{NFSU2_TR(0x693bb3);
__builtin_memmove((R+4372),(R+4368),4);
}
B693bb6:{NFSU2_TR(0x693bb6);
__builtin_memmove((R+4452),(R+4448),4);
}
B693bb9:{NFSU2_TR(0x693bb9);
__builtin_memmove((R+4388),(R+4384),4);
}
B693bbc:{NFSU2_TR(0x693bbc);
__builtin_memmove((R+4432),(R+4464),8);
}
B693bbf:{NFSU2_TR(0x693bbf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((U+0))));}
}
B693bc3:{NFSU2_TR(0x693bc3);
__builtin_memmove((R+4352),(R+4368),8);
}
B693bc6:{NFSU2_TR(0x693bc6);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B693bca:{NFSU2_TR(0x693bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4416,u64(r4(U+4)));
}
B693bce:{NFSU2_TR(0x693bce);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693bd2:{NFSU2_TR(0x693bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4400,u64(r4(U+4)));
}
B693bd6:{NFSU2_TR(0x693bd6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693bda:{NFSU2_TR(0x693bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693bde:{NFSU2_TR(0x693bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693be2:{NFSU2_TR(0x693be2);
__builtin_memmove((R+4416),(R+4448),8);
}
B693be5:{NFSU2_TR(0x693be5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((U+0))));}
}
B693be9:{NFSU2_TR(0x693be9);
__builtin_memmove((R+4400),(R+4384),8);
}
B693bec:{NFSU2_TR(0x693bec);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4464))));}
}
B693bf0:{NFSU2_TR(0x693bf0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B693bf4:{NFSU2_TR(0x693bf4);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B693bf8:{NFSU2_TR(0x693bf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693bfc:{NFSU2_TR(0x693bfc);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693c00:{NFSU2_TR(0x693c00);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B693c04:{NFSU2_TR(0x693c04);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B693c08:{NFSU2_TR(0x693c08);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4448))));}
}
B693c0c:{NFSU2_TR(0x693c0c);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693c10:{NFSU2_TR(0x693c10);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693c14:{NFSU2_TR(0x693c14);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693c18:{NFSU2_TR(0x693c18);
u8 U[8];
__builtin_memmove((U+0),(R+4368),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B693c1b:{NFSU2_TR(0x693c1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4352)));
s4(u32(r4(U+0)),r4(U+4));
}
B693c1f:{NFSU2_TR(0x693c1f);
w2(R+4260,0xffffu);
}
B693c21:{NFSU2_TR(0x693c21);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693c24:L693c24:{c.instructions+=61;NFSU2_TR(0x693c24);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4352,u64(r4(U+4)));
}
B693c29:{NFSU2_TR(0x693c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693c2d:{NFSU2_TR(0x693c2d);
__builtin_memmove((R+4368),(R+4352),8);
}
B693c30:{NFSU2_TR(0x693c30);
__builtin_memmove((R+4356),(R+4352),4);
}
B693c33:{NFSU2_TR(0x693c33);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4352))));}
}
B693c37:{NFSU2_TR(0x693c37);
__builtin_memmove((R+4372),gp(0x7b7158),4);
}
B693c3e:{NFSU2_TR(0x693c3e);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693c42:{NFSU2_TR(0x693c42);
__builtin_memmove((R+4400),(R+4368),8);
}
B693c45:{NFSU2_TR(0x693c45);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((R+4368))));}
}
B693c49:{NFSU2_TR(0x693c49);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B693c4c:{NFSU2_TR(0x693c4c);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693c50:{NFSU2_TR(0x693c50);
__builtin_memmove((R+4372),(R+4368),4);
}
B693c53:{NFSU2_TR(0x693c53);
__builtin_memmove((R+4416),(R+4352),8);
}
B693c56:{NFSU2_TR(0x693c56);
__builtin_memmove((R+4404),(R+4400),4);
}
B693c59:{NFSU2_TR(0x693c59);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>(gp(0x7b7168))));}
}
B693c61:{NFSU2_TR(0x693c61);
__builtin_memmove((R+4432),(R+4352),8);
}
B693c64:{NFSU2_TR(0x693c64);
__builtin_memmove((R+4356),(R+4416),4);
}
B693c67:{NFSU2_TR(0x693c67);
w8(R+4400,u64(u64(r8(R+4400))^u64(m8(0x7b7178))));
}
B693c6e:{NFSU2_TR(0x693c6e);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4468),4);
}
B693c71:{NFSU2_TR(0x693c71);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4400))));}
}
B693c75:{NFSU2_TR(0x693c75);
{wv<8>((R+4368),uo::pfsub<8>(rv<8>((R+4368)),rv<8>((R+4352))));}
}
B693c79:{NFSU2_TR(0x693c79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693c7d:{NFSU2_TR(0x693c7d);
{wv<8>((R+4352),uo::pfsub<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B693c81:{NFSU2_TR(0x693c81);
__builtin_memmove((R+4384),(R+4368),8);
}
B693c84:{NFSU2_TR(0x693c84);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B693c87:{NFSU2_TR(0x693c87);
__builtin_memmove((R+4400),(R+4352),8);
}
B693c8a:{NFSU2_TR(0x693c8a);
__builtin_memmove((R+4356),(R+4352),4);
}
B693c8d:{NFSU2_TR(0x693c8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693c91:{NFSU2_TR(0x693c91);
__builtin_memmove((R+4388),(R+4384),4);
}
B693c94:{NFSU2_TR(0x693c94);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693c98:{NFSU2_TR(0x693c98);
__builtin_memmove((R+4416),(R+4368),8);
}
B693c9b:{NFSU2_TR(0x693c9b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+0))));}
}
B693c9f:{NFSU2_TR(0x693c9f);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693ca2:{NFSU2_TR(0x693ca2);
__builtin_memmove((R+4432),(R+4352),8);
}
B693ca5:{NFSU2_TR(0x693ca5);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693ca9:{NFSU2_TR(0x693ca9);
__builtin_memmove((R+4448),(R+4384),8);
}
B693cac:{NFSU2_TR(0x693cac);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+0))));}
}
B693cb0:{NFSU2_TR(0x693cb0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693cb4:{NFSU2_TR(0x693cb4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693cb8:{NFSU2_TR(0x693cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693cbc:{NFSU2_TR(0x693cbc);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4464))));}
}
B693cc0:{NFSU2_TR(0x693cc0);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693cc4:{NFSU2_TR(0x693cc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4464,u64(r4(U+4)));
}
B693cc8:{NFSU2_TR(0x693cc8);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4464))));}
}
B693ccc:{NFSU2_TR(0x693ccc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693cd0:{NFSU2_TR(0x693cd0);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693cd4:{NFSU2_TR(0x693cd4);
__builtin_memmove((R+4464),(R+4400),8);
}
B693cd7:{NFSU2_TR(0x693cd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4432,u64(r4(U+4)));
}
B693cdb:{NFSU2_TR(0x693cdb);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4384))));}
}
B693cdf:{NFSU2_TR(0x693cdf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+0))));}
}
B693ce3:{NFSU2_TR(0x693ce3);
__builtin_memmove((R+4368),gp(0x7b71c0),8);
}
B693cea:{NFSU2_TR(0x693cea);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4400))));}
}
B693cee:{NFSU2_TR(0x693cee);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4432))));}
}
B693cf2:{NFSU2_TR(0x693cf2);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4448))));}
}
B693cf6:{NFSU2_TR(0x693cf6);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693cfa:{NFSU2_TR(0x693cfa);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4464))));}
}
B693cfe:{NFSU2_TR(0x693cfe);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B693d01:{NFSU2_TR(0x693d01);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4368))));}
}
B693d05:{NFSU2_TR(0x693d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4416)));
s4(u32(r4(U+0)),r4(U+4));
}
B693d09:{NFSU2_TR(0x693d09);
w2(R+4260,0xffffu);
}
B693d0b:{NFSU2_TR(0x693d0b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693d0e:L693d0e:{c.instructions+=41;NFSU2_TR(0x693d0e);
__builtin_memmove((R+28),(R+28),4);
}
B693d10:{NFSU2_TR(0x693d10);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693d11:{NFSU2_TR(0x693d11);
__builtin_memmove((R+20),(R+16),4);
}
B693d13:{NFSU2_TR(0x693d13);
w2(R+4260,0xffffu);
}
B693d15:{NFSU2_TR(0x693d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693d18:{NFSU2_TR(0x693d18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693d1b:{NFSU2_TR(0x693d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693d1e:{NFSU2_TR(0x693d1e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693d21:{NFSU2_TR(0x693d21);
__builtin_memmove((R+4368),(R+4352),8);
}
B693d24:{NFSU2_TR(0x693d24);
__builtin_memmove((R+4356),(R+4352),4);
}
B693d27:{NFSU2_TR(0x693d27);
__builtin_memmove((R+4368),(R+4372),4);
__builtin_memmove((R+4372),(R+4372),4);
}
B693d2a:{NFSU2_TR(0x693d2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(R+4384,u64(r4(U+4)));
}
B693d2e:{NFSU2_TR(0x693d2e);
__builtin_memmove((R+4388),(R+4384),4);
}
B693d31:{NFSU2_TR(0x693d31);
__builtin_memmove((R+4400),(R+4352),8);
}
B693d34:{NFSU2_TR(0x693d34);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+0))));}
}
B693d38:{NFSU2_TR(0x693d38);
__builtin_memmove((R+4416),(R+4368),8);
}
B693d3b:{NFSU2_TR(0x693d3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693d40:{NFSU2_TR(0x693d40);
__builtin_memmove((R+4432),(R+4384),8);
}
B693d43:{NFSU2_TR(0x693d43);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693d48:{NFSU2_TR(0x693d48);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693d4d:{NFSU2_TR(0x693d4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693d52:{NFSU2_TR(0x693d52);
{wv<8>((R+4368),uo::pfadd<8>(rv<8>((R+4368)),rv<8>((R+4384))));}
}
B693d56:{NFSU2_TR(0x693d56);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((U+4))));}
}
B693d5b:{NFSU2_TR(0x693d5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((U+4))));}
}
B693d60:{NFSU2_TR(0x693d60);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693d65:{NFSU2_TR(0x693d65);
{wv<8>((R+4352),uo::pfadd<8>(rv<8>((R+4352)),rv<8>((R+4368))));}
}
B693d69:{NFSU2_TR(0x693d69);
{wv<8>((R+4416),uo::pfadd<8>(rv<8>((R+4416)),rv<8>((R+4432))));}
}
B693d6d:{NFSU2_TR(0x693d6d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4416))));}
}
B693d71:{NFSU2_TR(0x693d71);
__builtin_memmove((R+4432),(R+4400),8);
}
B693d74:{NFSU2_TR(0x693d74);
__builtin_memmove((R+4432),(R+4436),4);
__builtin_memmove((R+4436),(R+4436),4);
}
B693d77:{NFSU2_TR(0x693d77);
{SPILL();c.pc=0x693d77u;V r_=user_op(c,524532,{rv<8>((R+4416)),rv<8>((R+4432))});SPILL();wv<8>((R+4416),r_);}
}
B693d7b:{NFSU2_TR(0x693d7b);
{SPILL();c.pc=0x693d7bu;V r_=user_op(c,524534,{rv<8>((R+4432)),rv<8>((R+4416))});SPILL();wv<8>((R+4432),r_);}
}
B693d7f:{NFSU2_TR(0x693d7f);
{SPILL();c.pc=0x693d7fu;V r_=user_op(c,524536,{rv<8>((R+4432)),rv<8>((R+4416))});SPILL();wv<8>((R+4432),r_);}
}
B693d83:{NFSU2_TR(0x693d83);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((R+4432))));}
}
B693d87:{NFSU2_TR(0x693d87);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((R+4432))));}
}
B693d8b:{NFSU2_TR(0x693d8b);
u8 U[8];
__builtin_memmove((U+0),(R+4352),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B693d8e:{NFSU2_TR(0x693d8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
w4(U+4,u32(r8(R+4400)));
s4(u32(r4(U+0)),r4(U+4));
}
B693d92:{NFSU2_TR(0x693d92);
w2(R+4260,0xffffu);
}
B693d94:{NFSU2_TR(0x693d94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693d97:{NFSU2_TR(0x693d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693d98:{NFSU2_TR(0x693d98);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693d9b:L693d9b:{c.instructions+=122;NFSU2_TR(0x693d9b);
__builtin_memmove((R+28),(R+28),4);
}
B693d9d:{NFSU2_TR(0x693d9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693d9e:{NFSU2_TR(0x693d9e);
__builtin_memmove((R+20),(R+16),4);
}
B693da0:{NFSU2_TR(0x693da0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693da3:{NFSU2_TR(0x693da3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B693da6:{NFSU2_TR(0x693da6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693da9:{NFSU2_TR(0x693da9);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B693dac:{NFSU2_TR(0x693dac);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693db0:{NFSU2_TR(0x693db0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693db3:{NFSU2_TR(0x693db3);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693db6:{NFSU2_TR(0x693db6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693dba:{NFSU2_TR(0x693dba);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693dbd:{NFSU2_TR(0x693dbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693dc1:{NFSU2_TR(0x693dc1);
__builtin_memmove((R+4356),(R+4352),4);
}
B693dc4:{NFSU2_TR(0x693dc4);
__builtin_memmove((R+4372),(R+4368),4);
}
B693dc7:{NFSU2_TR(0x693dc7);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693dcb:{NFSU2_TR(0x693dcb);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693dce:{NFSU2_TR(0x693dce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693dd3:{NFSU2_TR(0x693dd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693dd7:{NFSU2_TR(0x693dd7);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693ddb:{NFSU2_TR(0x693ddb);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693dde:{NFSU2_TR(0x693dde);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693de3:{NFSU2_TR(0x693de3);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693de7:{NFSU2_TR(0x693de7);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693deb:{NFSU2_TR(0x693deb);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693def:{NFSU2_TR(0x693def);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693df4:{NFSU2_TR(0x693df4);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693df8:{NFSU2_TR(0x693df8);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693dfc:{NFSU2_TR(0x693dfc);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693e00:{NFSU2_TR(0x693e00);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693e05:{NFSU2_TR(0x693e05);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693e09:{NFSU2_TR(0x693e09);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693e0d:{NFSU2_TR(0x693e0d);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693e11:{NFSU2_TR(0x693e11);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693e15:{NFSU2_TR(0x693e15);
u8 U[8];
__builtin_memmove((U+0),(R+4464),8);
s8_(u32(r4(R+0)),r8(U+0));
}
B693e18:{NFSU2_TR(0x693e18);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693e1b:{NFSU2_TR(0x693e1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693e1f:{NFSU2_TR(0x693e1f);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693e22:{NFSU2_TR(0x693e22);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693e26:{NFSU2_TR(0x693e26);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693e29:{NFSU2_TR(0x693e29);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693e2d:{NFSU2_TR(0x693e2d);
__builtin_memmove((R+4356),(R+4352),4);
}
B693e30:{NFSU2_TR(0x693e30);
__builtin_memmove((R+4372),(R+4368),4);
}
B693e33:{NFSU2_TR(0x693e33);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693e37:{NFSU2_TR(0x693e37);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693e3a:{NFSU2_TR(0x693e3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693e3f:{NFSU2_TR(0x693e3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693e43:{NFSU2_TR(0x693e43);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693e47:{NFSU2_TR(0x693e47);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693e4a:{NFSU2_TR(0x693e4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693e4f:{NFSU2_TR(0x693e4f);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693e53:{NFSU2_TR(0x693e53);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693e57:{NFSU2_TR(0x693e57);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693e5b:{NFSU2_TR(0x693e5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693e60:{NFSU2_TR(0x693e60);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693e64:{NFSU2_TR(0x693e64);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693e68:{NFSU2_TR(0x693e68);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693e6c:{NFSU2_TR(0x693e6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693e71:{NFSU2_TR(0x693e71);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693e75:{NFSU2_TR(0x693e75);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693e79:{NFSU2_TR(0x693e79);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693e7d:{NFSU2_TR(0x693e7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693e81:{NFSU2_TR(0x693e81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693e85:{NFSU2_TR(0x693e85);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693e88:{NFSU2_TR(0x693e88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693e8c:{NFSU2_TR(0x693e8c);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693e8f:{NFSU2_TR(0x693e8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693e93:{NFSU2_TR(0x693e93);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693e96:{NFSU2_TR(0x693e96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693e9a:{NFSU2_TR(0x693e9a);
__builtin_memmove((R+4356),(R+4352),4);
}
B693e9d:{NFSU2_TR(0x693e9d);
__builtin_memmove((R+4372),(R+4368),4);
}
B693ea0:{NFSU2_TR(0x693ea0);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693ea4:{NFSU2_TR(0x693ea4);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693ea7:{NFSU2_TR(0x693ea7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693eac:{NFSU2_TR(0x693eac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693eb0:{NFSU2_TR(0x693eb0);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693eb4:{NFSU2_TR(0x693eb4);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693eb7:{NFSU2_TR(0x693eb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693ebc:{NFSU2_TR(0x693ebc);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693ec0:{NFSU2_TR(0x693ec0);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693ec4:{NFSU2_TR(0x693ec4);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693ec8:{NFSU2_TR(0x693ec8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693ecd:{NFSU2_TR(0x693ecd);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693ed1:{NFSU2_TR(0x693ed1);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693ed5:{NFSU2_TR(0x693ed5);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693ed9:{NFSU2_TR(0x693ed9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693ede:{NFSU2_TR(0x693ede);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693ee2:{NFSU2_TR(0x693ee2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4352),(U+4),8);
}
B693ee6:{NFSU2_TR(0x693ee6);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693eea:{NFSU2_TR(0x693eea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B693eee:{NFSU2_TR(0x693eee);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693ef2:{NFSU2_TR(0x693ef2);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),8);
__builtin_memmove((R+4416),(U+0),8);
}
B693ef5:{NFSU2_TR(0x693ef5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693ef9:{NFSU2_TR(0x693ef9);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4356),4);
}
B693efc:{NFSU2_TR(0x693efc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4432),(U+4),8);
}
B693f00:{NFSU2_TR(0x693f00);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4372),4);
}
B693f03:{NFSU2_TR(0x693f03);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4448),(U+4),8);
}
B693f07:{NFSU2_TR(0x693f07);
__builtin_memmove((R+4356),(R+4352),4);
}
B693f0a:{NFSU2_TR(0x693f0a);
__builtin_memmove((R+4372),(R+4368),4);
}
B693f0d:{NFSU2_TR(0x693f0d);
{wv<8>((R+4416),uo::pfmul<8>(rv<8>((R+4416)),rv<8>((R+4352))));}
}
B693f11:{NFSU2_TR(0x693f11);
__builtin_memmove((R+4384),(R+4388),4);
__builtin_memmove((R+4388),(R+4388),4);
}
B693f14:{NFSU2_TR(0x693f14);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4352),uo::pfmul<8>(rv<8>((R+4352)),rv<8>((U+4))));}
}
B693f19:{NFSU2_TR(0x693f19);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4464),(U+4),8);
}
B693f1d:{NFSU2_TR(0x693f1d);
{wv<8>((R+4432),uo::pfmul<8>(rv<8>((R+4432)),rv<8>((R+4384))));}
}
B693f21:{NFSU2_TR(0x693f21);
__builtin_memmove((R+4400),(R+4404),4);
__builtin_memmove((R+4404),(R+4404),4);
}
B693f24:{NFSU2_TR(0x693f24);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4384),uo::pfmul<8>(rv<8>((R+4384)),rv<8>((U+4))));}
}
B693f29:{NFSU2_TR(0x693f29);
{wv<8>((R+4432),uo::pfadd<8>(rv<8>((R+4432)),rv<8>((R+4416))));}
}
B693f2d:{NFSU2_TR(0x693f2d);
{wv<8>((R+4448),uo::pfmul<8>(rv<8>((R+4448)),rv<8>((R+4368))));}
}
B693f31:{NFSU2_TR(0x693f31);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4352))));}
}
B693f35:{NFSU2_TR(0x693f35);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4368),uo::pfmul<8>(rv<8>((R+4368)),rv<8>((U+4))));}
}
B693f3a:{NFSU2_TR(0x693f3a);
{wv<8>((R+4448),uo::pfadd<8>(rv<8>((R+4448)),rv<8>((R+4432))));}
}
B693f3e:{NFSU2_TR(0x693f3e);
{wv<8>((R+4464),uo::pfmul<8>(rv<8>((R+4464)),rv<8>((R+4400))));}
}
B693f42:{NFSU2_TR(0x693f42);
{wv<8>((R+4384),uo::pfadd<8>(rv<8>((R+4384)),rv<8>((R+4368))));}
}
B693f46:{NFSU2_TR(0x693f46);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
{wv<8>((R+4400),uo::pfmul<8>(rv<8>((R+4400)),rv<8>((U+4))));}
}
B693f4b:{NFSU2_TR(0x693f4b);
{wv<8>((R+4464),uo::pfadd<8>(rv<8>((R+4464)),rv<8>((R+4448))));}
}
B693f4f:{NFSU2_TR(0x693f4f);
{wv<8>((R+4400),uo::pfadd<8>(rv<8>((R+4400)),rv<8>((R+4384))));}
}
B693f53:{NFSU2_TR(0x693f53);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4464),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693f57:{NFSU2_TR(0x693f57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B693f5b:{NFSU2_TR(0x693f5b);
w2(R+4260,0xffffu);
}
B693f5d:{NFSU2_TR(0x693f5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B693f60:{NFSU2_TR(0x693f60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693f61:{NFSU2_TR(0x693f61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B693f64:L693f64:{c.instructions+=5;NFSU2_TR(0x693f64);
__builtin_memmove((R+28),(R+28),4);
}
B693f66:{NFSU2_TR(0x693f66);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693f67:{NFSU2_TR(0x693f67);
__builtin_memmove((R+20),(R+16),4);
}
B693f69:{NFSU2_TR(0x693f69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B693f6a:{NFSU2_TR(0x693f6a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x693d0eu);}goto L693d0e;}
}
B693f6f:L693f6f:{c.instructions+=24;NFSU2_TR(0x693f6f);
__builtin_memmove((R+28),(R+28),4);
}
B693f71:{NFSU2_TR(0x693f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693f72:{NFSU2_TR(0x693f72);
__builtin_memmove((R+20),(R+16),4);
}
B693f74:{NFSU2_TR(0x693f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B693f77:{NFSU2_TR(0x693f77);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B693f79:{NFSU2_TR(0x693f79);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693f7a:{NFSU2_TR(0x693f7a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B693f7b:{NFSU2_TR(0x693f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B693f7e:{NFSU2_TR(0x693f7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B693f80:{NFSU2_TR(0x693f80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B693f83:{NFSU2_TR(0x693f83);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B693f85:{NFSU2_TR(0x693f85);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+24),(U+0),4);
}
B693f88:{NFSU2_TR(0x693f88);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B693f8a:{NFSU2_TR(0x693f8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B693f8d:{NFSU2_TR(0x693f8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B693f90:{NFSU2_TR(0x693f90);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B693f92:{NFSU2_TR(0x693f92);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B693f94:{NFSU2_TR(0x693f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B693f97:{NFSU2_TR(0x693f97);
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
}
B693f99:{NFSU2_TR(0x693f99);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B693f9b:{NFSU2_TR(0x693f9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B693f9e:{NFSU2_TR(0x693f9e);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+8))));
}
B693fa0:{NFSU2_TR(0x693fa0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B693fa3:{NFSU2_TR(0x693fa3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x694064u,694);}
}
B693fa9:L693fa9:{c.instructions+=1;NFSU2_TR(0x693fa9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6940dbull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B693fb0:L693fb0:{c.instructions+=32;NFSU2_TR(0x693fb0);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fb2:{NFSU2_TR(0x693fb2);
{u32 ea_=u32(r4(R+20)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fb5:{NFSU2_TR(0x693fb5);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fb7:{NFSU2_TR(0x693fb7);
{u32 ea_=u32(r4(R+20)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fba:{NFSU2_TR(0x693fba);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fbc:{NFSU2_TR(0x693fbc);
{u32 ea_=u32(r4(R+20)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fbf:{NFSU2_TR(0x693fbf);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fc1:{NFSU2_TR(0x693fc1);
{u32 ea_=u32(r4(R+20)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fc4:{NFSU2_TR(0x693fc4);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fc6:{NFSU2_TR(0x693fc6);
{u32 ea_=u32(r4(R+20)+u32(4294967268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fc9:{NFSU2_TR(0x693fc9);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fcb:{NFSU2_TR(0x693fcb);
{u32 ea_=u32(r4(R+20)+u32(4294967264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fce:{NFSU2_TR(0x693fce);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fd0:{NFSU2_TR(0x693fd0);
{u32 ea_=u32(r4(R+20)+u32(4294967260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fd3:{NFSU2_TR(0x693fd3);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fd5:{NFSU2_TR(0x693fd5);
{u32 ea_=u32(r4(R+20)+u32(4294967256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fd8:{NFSU2_TR(0x693fd8);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fda:{NFSU2_TR(0x693fda);
{u32 ea_=u32(r4(R+20)+u32(4294967248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fdd:{NFSU2_TR(0x693fdd);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fdf:{NFSU2_TR(0x693fdf);
{u32 ea_=u32(r4(R+20)+u32(4294967244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fe2:{NFSU2_TR(0x693fe2);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fe4:{NFSU2_TR(0x693fe4);
{u32 ea_=u32(r4(R+20)+u32(4294967240u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fe7:{NFSU2_TR(0x693fe7);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B693fe9:{NFSU2_TR(0x693fe9);
{u32 ea_=u32(r4(R+20)+u32(4294967236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693fec:{NFSU2_TR(0x693fec);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B693fee:{NFSU2_TR(0x693fee);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693ff1:{NFSU2_TR(0x693ff1);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B693ff3:{NFSU2_TR(0x693ff3);
{u32 ea_=u32(r4(R+20)+u32(4294967272u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693ff6:{NFSU2_TR(0x693ff6);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B693ff8:{NFSU2_TR(0x693ff8);
{u32 ea_=u32(r4(R+20)+u32(4294967252u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B693ffb:{NFSU2_TR(0x693ffb);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B693ffd:{NFSU2_TR(0x693ffd);
{u32 ea_=u32(r4(R+20)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
TAIL_STATIC(0x694000u,694);
}
XIT:NFSU2_TR_EXIT(0x693,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
