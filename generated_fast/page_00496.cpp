#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_534(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_5b5(u8* __restrict R,Cpu& c);
u32 body_5b6(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x496,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x496,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_496(u8* __restrict R,Cpu& c);
u32 page_496(Cpu& c){return body_496(c.regs.data(),c);}
__attribute__((noinline)) u32 body_496(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x496001:goto L496001;
case 0x496003:c.instructions+=3;goto B496003;
case 0x496005:c.instructions+=2;goto B496005;
case 0x496007:c.instructions+=1;goto B496007;
case 0x496009:goto L496009;
case 0x496010:goto L496010;
case 0x496016:c.instructions+=2;goto B496016;
case 0x496018:c.instructions+=1;goto B496018;
case 0x49601a:goto L49601a;
case 0x496020:c.instructions+=2;goto B496020;
case 0x496022:c.instructions+=1;goto B496022;
case 0x496024:goto L496024;
case 0x496026:c.instructions+=1;goto B496026;
case 0x496028:goto L496028;
case 0x49602a:c.instructions+=1;goto B49602a;
case 0x49602c:goto L49602c;
case 0x49602d:c.instructions+=3;goto B49602d;
case 0x49602f:c.instructions+=2;goto B49602f;
case 0x496031:c.instructions+=1;goto B496031;
case 0x496036:goto L496036;
case 0x496037:c.instructions+=2;goto B496037;
case 0x496039:c.instructions+=1;goto B496039;
case 0x49603b:goto L49603b;
case 0x49603c:c.instructions+=5;goto B49603c;
case 0x49603d:c.instructions+=4;goto B49603d;
case 0x49603f:c.instructions+=3;goto B49603f;
case 0x496040:c.instructions+=2;goto B496040;
case 0x496041:c.instructions+=1;goto B496041;
case 0x496050:goto L496050;
case 0x496056:c.instructions+=2;goto B496056;
case 0x496058:c.instructions+=1;goto B496058;
case 0x49605a:goto L49605a;
case 0x49605d:c.instructions+=1;goto B49605d;
case 0x49605f:goto L49605f;
case 0x496065:c.instructions+=3;goto B496065;
case 0x49606a:c.instructions+=2;goto B49606a;
case 0x49606c:c.instructions+=1;goto B49606c;
case 0x496071:goto L496071;
case 0x496073:c.instructions+=2;goto B496073;
case 0x496075:c.instructions+=1;goto B496075;
case 0x496080:goto L496080;
case 0x496083:c.instructions+=7;goto B496083;
case 0x496084:c.instructions+=6;goto B496084;
case 0x496085:c.instructions+=5;goto B496085;
case 0x496087:c.instructions+=4;goto B496087;
case 0x49608d:c.instructions+=3;goto B49608d;
case 0x49608f:c.instructions+=2;goto B49608f;
case 0x496094:c.instructions+=1;goto B496094;
case 0x496098:goto L496098;
case 0x49609a:goto L49609a;
case 0x49609d:c.instructions+=14;goto B49609d;
case 0x4960a1:c.instructions+=13;goto B4960a1;
case 0x4960a7:c.instructions+=12;goto B4960a7;
case 0x4960a9:c.instructions+=11;goto B4960a9;
case 0x4960ad:c.instructions+=10;goto B4960ad;
case 0x4960ae:c.instructions+=9;goto B4960ae;
case 0x4960b6:c.instructions+=8;goto B4960b6;
case 0x4960be:c.instructions+=7;goto B4960be;
case 0x4960c6:c.instructions+=6;goto B4960c6;
case 0x4960ce:c.instructions+=5;goto B4960ce;
case 0x4960d6:c.instructions+=4;goto B4960d6;
case 0x4960de:c.instructions+=3;goto B4960de;
case 0x4960e6:c.instructions+=2;goto B4960e6;
case 0x4960ee:c.instructions+=1;goto B4960ee;
case 0x4960f1:goto L4960f1;
case 0x4960f7:c.instructions+=8;goto B4960f7;
case 0x4960fd:c.instructions+=7;goto B4960fd;
case 0x4960ff:c.instructions+=6;goto B4960ff;
case 0x496103:c.instructions+=5;goto B496103;
case 0x496104:c.instructions+=4;goto B496104;
case 0x49610c:c.instructions+=3;goto B49610c;
case 0x496114:c.instructions+=2;goto B496114;
case 0x49611c:c.instructions+=1;goto B49611c;
case 0x49611f:goto L49611f;
case 0x496125:c.instructions+=8;goto B496125;
case 0x49612b:c.instructions+=7;goto B49612b;
case 0x49612d:c.instructions+=6;goto B49612d;
case 0x496131:c.instructions+=5;goto B496131;
case 0x496132:c.instructions+=4;goto B496132;
case 0x49613a:c.instructions+=3;goto B49613a;
case 0x496142:c.instructions+=2;goto B496142;
case 0x49614a:c.instructions+=1;goto B49614a;
case 0x49614d:goto L49614d;
case 0x49614e:c.instructions+=3;goto B49614e;
case 0x49614f:c.instructions+=2;goto B49614f;
case 0x496152:c.instructions+=1;goto B496152;
case 0x496160:goto L496160;
case 0x496161:c.instructions+=4;goto B496161;
case 0x496163:c.instructions+=3;goto B496163;
case 0x496166:c.instructions+=2;goto B496166;
case 0x496167:c.instructions+=1;goto B496167;
case 0x49616c:goto L49616c;
case 0x49616f:c.instructions+=2;goto B49616f;
case 0x496175:c.instructions+=1;goto B496175;
case 0x49617a:goto L49617a;
case 0x49617b:c.instructions+=3;goto B49617b;
case 0x49617d:c.instructions+=2;goto B49617d;
case 0x496180:c.instructions+=1;goto B496180;
case 0x496185:goto L496185;
case 0x496187:c.instructions+=2;goto B496187;
case 0x496189:c.instructions+=1;goto B496189;
case 0x49618c:goto L49618c;
case 0x49618f:c.instructions+=1;goto B49618f;
case 0x496194:goto L496194;
case 0x496197:c.instructions+=2;goto B496197;
case 0x49619d:c.instructions+=1;goto B49619d;
case 0x4961a2:goto L4961a2;
case 0x4961a3:c.instructions+=3;goto B4961a3;
case 0x4961a5:c.instructions+=2;goto B4961a5;
case 0x4961a8:c.instructions+=1;goto B4961a8;
case 0x4961ad:goto L4961ad;
case 0x4961af:c.instructions+=2;goto B4961af;
case 0x4961b1:c.instructions+=1;goto B4961b1;
case 0x4961b4:goto L4961b4;
case 0x4961b7:c.instructions+=1;goto B4961b7;
case 0x4961bc:goto L4961bc;
case 0x4961bf:c.instructions+=2;goto B4961bf;
case 0x4961c5:c.instructions+=1;goto B4961c5;
case 0x4961ca:goto L4961ca;
case 0x4961cb:c.instructions+=3;goto B4961cb;
case 0x4961cd:c.instructions+=2;goto B4961cd;
case 0x4961d0:c.instructions+=1;goto B4961d0;
case 0x4961d5:goto L4961d5;
case 0x4961d7:c.instructions+=4;goto B4961d7;
case 0x4961d8:c.instructions+=3;goto B4961d8;
case 0x4961da:c.instructions+=2;goto B4961da;
case 0x4961db:c.instructions+=1;goto B4961db;
case 0x4961e0:goto L4961e0;
case 0x4961e4:c.instructions+=8;goto B4961e4;
case 0x4961e8:c.instructions+=7;goto B4961e8;
case 0x4961ee:c.instructions+=6;goto B4961ee;
case 0x4961f2:c.instructions+=5;goto B4961f2;
case 0x4961f8:c.instructions+=4;goto B4961f8;
case 0x4961fc:c.instructions+=3;goto B4961fc;
case 0x496202:c.instructions+=2;goto B496202;
case 0x496208:c.instructions+=1;goto B496208;
case 0x496210:goto L496210;
case 0x496213:c.instructions+=7;goto B496213;
case 0x496214:c.instructions+=6;goto B496214;
case 0x496215:c.instructions+=5;goto B496215;
case 0x496217:c.instructions+=4;goto B496217;
case 0x49621d:c.instructions+=3;goto B49621d;
case 0x49621f:c.instructions+=2;goto B49621f;
case 0x496224:c.instructions+=1;goto B496224;
case 0x496228:goto L496228;
case 0x49622a:goto L49622a;
case 0x49622d:c.instructions+=14;goto B49622d;
case 0x496231:c.instructions+=13;goto B496231;
case 0x496237:c.instructions+=12;goto B496237;
case 0x496239:c.instructions+=11;goto B496239;
case 0x49623d:c.instructions+=10;goto B49623d;
case 0x49623e:c.instructions+=9;goto B49623e;
case 0x496246:c.instructions+=8;goto B496246;
case 0x49624e:c.instructions+=7;goto B49624e;
case 0x496256:c.instructions+=6;goto B496256;
case 0x49625e:c.instructions+=5;goto B49625e;
case 0x496266:c.instructions+=4;goto B496266;
case 0x49626e:c.instructions+=3;goto B49626e;
case 0x496276:c.instructions+=2;goto B496276;
case 0x49627e:c.instructions+=1;goto B49627e;
case 0x496281:goto L496281;
case 0x496287:c.instructions+=8;goto B496287;
case 0x49628d:c.instructions+=7;goto B49628d;
case 0x49628f:c.instructions+=6;goto B49628f;
case 0x496293:c.instructions+=5;goto B496293;
case 0x496294:c.instructions+=4;goto B496294;
case 0x49629c:c.instructions+=3;goto B49629c;
case 0x4962a4:c.instructions+=2;goto B4962a4;
case 0x4962ac:c.instructions+=1;goto B4962ac;
case 0x4962af:goto L4962af;
case 0x4962b5:c.instructions+=8;goto B4962b5;
case 0x4962bb:c.instructions+=7;goto B4962bb;
case 0x4962bd:c.instructions+=6;goto B4962bd;
case 0x4962c1:c.instructions+=5;goto B4962c1;
case 0x4962c2:c.instructions+=4;goto B4962c2;
case 0x4962ca:c.instructions+=3;goto B4962ca;
case 0x4962d2:c.instructions+=2;goto B4962d2;
case 0x4962da:c.instructions+=1;goto B4962da;
case 0x4962dd:goto L4962dd;
case 0x4962de:c.instructions+=3;goto B4962de;
case 0x4962df:c.instructions+=2;goto B4962df;
case 0x4962e2:c.instructions+=1;goto B4962e2;
case 0x4962f0:goto L4962f0;
case 0x4962f1:c.instructions+=5;goto B4962f1;
case 0x4962f3:c.instructions+=4;goto B4962f3;
case 0x4962f6:c.instructions+=3;goto B4962f6;
case 0x4962fc:c.instructions+=2;goto B4962fc;
case 0x4962fe:c.instructions+=1;goto B4962fe;
case 0x496304:goto L496304;
case 0x49630a:c.instructions+=2;goto B49630a;
case 0x49630c:c.instructions+=1;goto B49630c;
case 0x49630e:goto L49630e;
case 0x49630f:c.instructions+=1;goto B49630f;
case 0x496314:goto L496314;
case 0x496317:c.instructions+=2;goto B496317;
case 0x49631d:c.instructions+=1;goto B49631d;
case 0x496322:goto L496322;
case 0x496323:c.instructions+=3;goto B496323;
case 0x496325:c.instructions+=2;goto B496325;
case 0x496328:c.instructions+=1;goto B496328;
case 0x49632d:goto L49632d;
case 0x49632f:c.instructions+=2;goto B49632f;
case 0x496331:c.instructions+=1;goto B496331;
case 0x496334:goto L496334;
case 0x496337:c.instructions+=1;goto B496337;
case 0x49633c:goto L49633c;
case 0x49633f:c.instructions+=2;goto B49633f;
case 0x496345:c.instructions+=1;goto B496345;
case 0x49634a:goto L49634a;
case 0x49634b:c.instructions+=3;goto B49634b;
case 0x49634d:c.instructions+=2;goto B49634d;
case 0x496350:c.instructions+=1;goto B496350;
case 0x496355:goto L496355;
case 0x496357:c.instructions+=2;goto B496357;
case 0x496359:c.instructions+=1;goto B496359;
case 0x49635c:goto L49635c;
case 0x49635f:c.instructions+=1;goto B49635f;
case 0x496364:goto L496364;
case 0x496367:c.instructions+=2;goto B496367;
case 0x49636d:c.instructions+=1;goto B49636d;
case 0x496372:goto L496372;
case 0x496373:c.instructions+=3;goto B496373;
case 0x496375:c.instructions+=2;goto B496375;
case 0x496378:c.instructions+=1;goto B496378;
case 0x49637d:goto L49637d;
case 0x49637f:c.instructions+=4;goto B49637f;
case 0x496380:c.instructions+=3;goto B496380;
case 0x496382:c.instructions+=2;goto B496382;
case 0x496383:c.instructions+=1;goto B496383;
case 0x496386:goto L496386;
case 0x496387:c.instructions+=1;goto B496387;
case 0x496390:goto L496390;
case 0x496391:c.instructions+=4;goto B496391;
case 0x496393:c.instructions+=3;goto B496393;
case 0x496396:c.instructions+=2;goto B496396;
case 0x496399:c.instructions+=1;goto B496399;
case 0x49639f:goto L49639f;
case 0x4963a6:goto L4963a6;
case 0x4963a9:c.instructions+=5;goto B4963a9;
case 0x4963ab:c.instructions+=4;goto B4963ab;
case 0x4963ae:c.instructions+=3;goto B4963ae;
case 0x4963b3:c.instructions+=2;goto B4963b3;
case 0x4963b4:c.instructions+=1;goto B4963b4;
case 0x4963b5:goto L4963b5;
case 0x4963b8:c.instructions+=5;goto B4963b8;
case 0x4963ba:c.instructions+=4;goto B4963ba;
case 0x4963bd:c.instructions+=3;goto B4963bd;
case 0x4963c3:c.instructions+=2;goto B4963c3;
case 0x4963c4:c.instructions+=1;goto B4963c4;
case 0x4963c5:goto L4963c5;
case 0x4963c8:c.instructions+=5;goto B4963c8;
case 0x4963ca:c.instructions+=4;goto B4963ca;
case 0x4963cd:c.instructions+=3;goto B4963cd;
case 0x4963d3:c.instructions+=2;goto B4963d3;
case 0x4963d4:c.instructions+=1;goto B4963d4;
case 0x4963d5:goto L4963d5;
case 0x4963d8:c.instructions+=5;goto B4963d8;
case 0x4963da:c.instructions+=4;goto B4963da;
case 0x4963dd:c.instructions+=3;goto B4963dd;
case 0x4963e2:c.instructions+=2;goto B4963e2;
case 0x4963e3:c.instructions+=1;goto B4963e3;
case 0x4963e4:goto L4963e4;
case 0x4963e7:c.instructions+=5;goto B4963e7;
case 0x4963e9:c.instructions+=4;goto B4963e9;
case 0x4963ec:c.instructions+=3;goto B4963ec;
case 0x4963f2:c.instructions+=2;goto B4963f2;
case 0x4963f3:c.instructions+=1;goto B4963f3;
case 0x4963f4:goto L4963f4;
case 0x4963f7:c.instructions+=5;goto B4963f7;
case 0x4963f9:c.instructions+=4;goto B4963f9;
case 0x4963fc:c.instructions+=3;goto B4963fc;
case 0x496402:c.instructions+=2;goto B496402;
case 0x496403:c.instructions+=1;goto B496403;
case 0x496404:goto L496404;
case 0x496407:c.instructions+=5;goto B496407;
case 0x496409:c.instructions+=4;goto B496409;
case 0x49640c:c.instructions+=3;goto B49640c;
case 0x496411:c.instructions+=2;goto B496411;
case 0x496412:c.instructions+=1;goto B496412;
case 0x496413:goto L496413;
case 0x496416:c.instructions+=5;goto B496416;
case 0x496418:c.instructions+=4;goto B496418;
case 0x49641b:c.instructions+=3;goto B49641b;
case 0x496421:c.instructions+=2;goto B496421;
case 0x496422:c.instructions+=1;goto B496422;
case 0x496423:goto L496423;
case 0x496426:c.instructions+=5;goto B496426;
case 0x496428:c.instructions+=4;goto B496428;
case 0x49642b:c.instructions+=3;goto B49642b;
case 0x496431:c.instructions+=2;goto B496431;
case 0x496432:c.instructions+=1;goto B496432;
case 0x496433:goto L496433;
case 0x496436:c.instructions+=5;goto B496436;
case 0x496438:c.instructions+=4;goto B496438;
case 0x49643b:c.instructions+=3;goto B49643b;
case 0x496440:c.instructions+=2;goto B496440;
case 0x496441:c.instructions+=1;goto B496441;
case 0x496442:goto L496442;
case 0x496445:c.instructions+=5;goto B496445;
case 0x496447:c.instructions+=4;goto B496447;
case 0x49644a:c.instructions+=3;goto B49644a;
case 0x496450:c.instructions+=2;goto B496450;
case 0x496451:c.instructions+=1;goto B496451;
case 0x496452:goto L496452;
case 0x496455:c.instructions+=5;goto B496455;
case 0x496457:c.instructions+=4;goto B496457;
case 0x49645a:c.instructions+=3;goto B49645a;
case 0x496460:c.instructions+=2;goto B496460;
case 0x496461:c.instructions+=1;goto B496461;
case 0x496462:goto L496462;
case 0x496465:c.instructions+=5;goto B496465;
case 0x496467:c.instructions+=4;goto B496467;
case 0x49646a:c.instructions+=3;goto B49646a;
case 0x49646f:c.instructions+=2;goto B49646f;
case 0x496470:c.instructions+=1;goto B496470;
case 0x496471:goto L496471;
case 0x496474:c.instructions+=5;goto B496474;
case 0x496476:c.instructions+=4;goto B496476;
case 0x496479:c.instructions+=3;goto B496479;
case 0x49647e:c.instructions+=2;goto B49647e;
case 0x496483:c.instructions+=1;goto B496483;
case 0x496488:goto L496488;
case 0x496489:c.instructions+=1;goto B496489;
case 0x4964d0:goto L4964d0;
case 0x4964d1:c.instructions+=4;goto B4964d1;
case 0x4964d3:c.instructions+=3;goto B4964d3;
case 0x4964d6:c.instructions+=2;goto B4964d6;
case 0x4964d9:c.instructions+=1;goto B4964d9;
case 0x4964df:goto L4964df;
case 0x4964e6:goto L4964e6;
case 0x4964ec:c.instructions+=5;goto B4964ec;
case 0x4964ee:c.instructions+=4;goto B4964ee;
case 0x4964f0:c.instructions+=3;goto B4964f0;
case 0x4964f3:c.instructions+=2;goto B4964f3;
case 0x4964f4:c.instructions+=1;goto B4964f4;
case 0x4964f5:goto L4964f5;
case 0x4964fb:c.instructions+=5;goto B4964fb;
case 0x4964fd:c.instructions+=4;goto B4964fd;
case 0x4964ff:c.instructions+=3;goto B4964ff;
case 0x496502:c.instructions+=2;goto B496502;
case 0x496503:c.instructions+=1;goto B496503;
case 0x496504:goto L496504;
case 0x49650a:c.instructions+=5;goto B49650a;
case 0x49650c:c.instructions+=4;goto B49650c;
case 0x49650e:c.instructions+=3;goto B49650e;
case 0x496511:c.instructions+=2;goto B496511;
case 0x496512:c.instructions+=1;goto B496512;
case 0x496513:goto L496513;
case 0x496519:c.instructions+=5;goto B496519;
case 0x49651b:c.instructions+=4;goto B49651b;
case 0x49651d:c.instructions+=3;goto B49651d;
case 0x496520:c.instructions+=2;goto B496520;
case 0x496521:c.instructions+=1;goto B496521;
case 0x496522:goto L496522;
case 0x496528:c.instructions+=5;goto B496528;
case 0x49652a:c.instructions+=4;goto B49652a;
case 0x49652c:c.instructions+=3;goto B49652c;
case 0x49652f:c.instructions+=2;goto B49652f;
case 0x496530:c.instructions+=1;goto B496530;
case 0x496531:goto L496531;
case 0x496537:c.instructions+=5;goto B496537;
case 0x496539:c.instructions+=4;goto B496539;
case 0x49653b:c.instructions+=3;goto B49653b;
case 0x49653e:c.instructions+=2;goto B49653e;
case 0x49653f:c.instructions+=1;goto B49653f;
case 0x496540:goto L496540;
case 0x496546:c.instructions+=5;goto B496546;
case 0x496548:c.instructions+=4;goto B496548;
case 0x49654a:c.instructions+=3;goto B49654a;
case 0x49654d:c.instructions+=2;goto B49654d;
case 0x49654e:c.instructions+=1;goto B49654e;
case 0x49654f:goto L49654f;
case 0x496555:c.instructions+=5;goto B496555;
case 0x496557:c.instructions+=4;goto B496557;
case 0x496559:c.instructions+=3;goto B496559;
case 0x49655c:c.instructions+=2;goto B49655c;
case 0x49655d:c.instructions+=1;goto B49655d;
case 0x49655e:goto L49655e;
case 0x496564:c.instructions+=5;goto B496564;
case 0x496566:c.instructions+=4;goto B496566;
case 0x496568:c.instructions+=3;goto B496568;
case 0x49656b:c.instructions+=2;goto B49656b;
case 0x49656c:c.instructions+=1;goto B49656c;
case 0x49656d:goto L49656d;
case 0x496573:c.instructions+=5;goto B496573;
case 0x496575:c.instructions+=4;goto B496575;
case 0x496577:c.instructions+=3;goto B496577;
case 0x49657a:c.instructions+=2;goto B49657a;
case 0x49657b:c.instructions+=1;goto B49657b;
case 0x49657c:goto L49657c;
case 0x496582:c.instructions+=5;goto B496582;
case 0x496584:c.instructions+=4;goto B496584;
case 0x496586:c.instructions+=3;goto B496586;
case 0x496589:c.instructions+=2;goto B496589;
case 0x49658a:c.instructions+=1;goto B49658a;
case 0x49658b:goto L49658b;
case 0x496591:c.instructions+=5;goto B496591;
case 0x496593:c.instructions+=4;goto B496593;
case 0x496595:c.instructions+=3;goto B496595;
case 0x496598:c.instructions+=2;goto B496598;
case 0x496599:c.instructions+=1;goto B496599;
case 0x49659a:goto L49659a;
case 0x4965a0:c.instructions+=5;goto B4965a0;
case 0x4965a2:c.instructions+=4;goto B4965a2;
case 0x4965a4:c.instructions+=3;goto B4965a4;
case 0x4965a7:c.instructions+=2;goto B4965a7;
case 0x4965a8:c.instructions+=1;goto B4965a8;
case 0x4965a9:goto L4965a9;
case 0x4965af:c.instructions+=3;goto B4965af;
case 0x4965b1:c.instructions+=2;goto B4965b1;
case 0x4965b3:c.instructions+=1;goto B4965b3;
case 0x4965b6:goto L4965b6;
case 0x4965b7:c.instructions+=1;goto B4965b7;
case 0x4965f0:goto L4965f0;
case 0x4965f4:c.instructions+=2;goto B4965f4;
case 0x4965f7:c.instructions+=1;goto B4965f7;
case 0x4965f9:goto L4965f9;
case 0x496600:goto L496600;
case 0x496602:c.instructions+=1;goto B496602;
case 0x496603:goto L496603;
case 0x496608:c.instructions+=1;goto B496608;
case 0x496609:goto L496609;
case 0x49660e:c.instructions+=1;goto B49660e;
case 0x49660f:goto L49660f;
case 0x496614:c.instructions+=1;goto B496614;
case 0x496615:goto L496615;
case 0x49661a:c.instructions+=1;goto B49661a;
case 0x49661b:goto L49661b;
case 0x496620:c.instructions+=1;goto B496620;
case 0x496621:goto L496621;
case 0x496626:c.instructions+=1;goto B496626;
case 0x496627:goto L496627;
case 0x49662c:c.instructions+=1;goto B49662c;
case 0x49662d:goto L49662d;
case 0x496632:c.instructions+=1;goto B496632;
case 0x496633:goto L496633;
case 0x496638:c.instructions+=1;goto B496638;
case 0x496639:goto L496639;
case 0x49663e:c.instructions+=1;goto B49663e;
case 0x49663f:goto L49663f;
case 0x496644:c.instructions+=1;goto B496644;
case 0x496645:goto L496645;
case 0x49664a:c.instructions+=1;goto B49664a;
case 0x49664b:goto L49664b;
case 0x496650:c.instructions+=1;goto B496650;
case 0x496651:goto L496651;
case 0x496654:c.instructions+=1;goto B496654;
case 0x4966a0:goto L4966a0;
case 0x4966a4:c.instructions+=2;goto B4966a4;
case 0x4966a7:c.instructions+=1;goto B4966a7;
case 0x4966a9:goto L4966a9;
case 0x4966b0:goto L4966b0;
case 0x4966b5:c.instructions+=1;goto B4966b5;
case 0x4966b6:goto L4966b6;
case 0x4966bb:c.instructions+=1;goto B4966bb;
case 0x4966bc:goto L4966bc;
case 0x4966c1:c.instructions+=1;goto B4966c1;
case 0x4966c2:goto L4966c2;
case 0x4966c7:c.instructions+=1;goto B4966c7;
case 0x4966c8:goto L4966c8;
case 0x4966cd:c.instructions+=1;goto B4966cd;
case 0x4966ce:goto L4966ce;
case 0x4966d3:c.instructions+=1;goto B4966d3;
case 0x4966d4:goto L4966d4;
case 0x4966d9:c.instructions+=1;goto B4966d9;
case 0x4966da:goto L4966da;
case 0x4966df:c.instructions+=1;goto B4966df;
case 0x4966e0:goto L4966e0;
case 0x4966e5:c.instructions+=1;goto B4966e5;
case 0x4966e6:goto L4966e6;
case 0x4966eb:c.instructions+=1;goto B4966eb;
case 0x4966ec:goto L4966ec;
case 0x4966f1:c.instructions+=1;goto B4966f1;
case 0x4966f2:goto L4966f2;
case 0x4966f7:c.instructions+=1;goto B4966f7;
case 0x4966f8:goto L4966f8;
case 0x4966fd:c.instructions+=1;goto B4966fd;
case 0x4966fe:goto L4966fe;
case 0x496703:c.instructions+=1;goto B496703;
case 0x496704:goto L496704;
case 0x49670c:c.instructions+=1;goto B49670c;
case 0x496711:goto L496711;
case 0x496714:c.instructions+=1;goto B496714;
case 0x496760:goto L496760;
case 0x496763:c.instructions+=10;goto B496763;
case 0x496764:c.instructions+=9;goto B496764;
case 0x496765:c.instructions+=8;goto B496765;
case 0x496769:c.instructions+=7;goto B496769;
case 0x49676d:c.instructions+=6;goto B49676d;
case 0x49676f:c.instructions+=5;goto B49676f;
case 0x496770:c.instructions+=4;goto B496770;
case 0x496774:c.instructions+=3;goto B496774;
case 0x496775:c.instructions+=2;goto B496775;
case 0x496776:c.instructions+=1;goto B496776;
case 0x49677b:goto L49677b;
case 0x49677f:c.instructions+=5;goto B49677f;
case 0x496780:c.instructions+=4;goto B496780;
case 0x496784:c.instructions+=3;goto B496784;
case 0x496785:c.instructions+=2;goto B496785;
case 0x496786:c.instructions+=1;goto B496786;
case 0x49678b:goto L49678b;
case 0x49678e:c.instructions+=6;goto B49678e;
case 0x496792:c.instructions+=5;goto B496792;
case 0x496793:c.instructions+=4;goto B496793;
case 0x496797:c.instructions+=3;goto B496797;
case 0x496798:c.instructions+=2;goto B496798;
case 0x496799:c.instructions+=1;goto B496799;
case 0x49679e:goto L49679e;
case 0x4967a2:c.instructions+=7;goto B4967a2;
case 0x4967a6:c.instructions+=6;goto B4967a6;
case 0x4967a9:c.instructions+=5;goto B4967a9;
case 0x4967aa:c.instructions+=4;goto B4967aa;
case 0x4967ab:c.instructions+=3;goto B4967ab;
case 0x4967ad:c.instructions+=2;goto B4967ad;
case 0x4967b0:c.instructions+=1;goto B4967b0;
case 0x4967b2:goto L4967b2;
case 0x4967b6:c.instructions+=4;goto B4967b6;
case 0x4967ba:c.instructions+=3;goto B4967ba;
case 0x4967bc:c.instructions+=2;goto B4967bc;
case 0x4967bf:c.instructions+=1;goto B4967bf;
case 0x4967c1:goto L4967c1;
case 0x4967c5:c.instructions+=4;goto B4967c5;
case 0x4967c9:c.instructions+=3;goto B4967c9;
case 0x4967cb:c.instructions+=2;goto B4967cb;
case 0x4967ce:c.instructions+=1;goto B4967ce;
case 0x4967d0:goto L4967d0;
case 0x4967d4:c.instructions+=4;goto B4967d4;
case 0x4967d8:c.instructions+=3;goto B4967d8;
case 0x4967da:c.instructions+=2;goto B4967da;
case 0x4967dd:c.instructions+=1;goto B4967dd;
case 0x4967df:goto L4967df;
case 0x4967e1:c.instructions+=2;goto B4967e1;
case 0x4967e4:c.instructions+=1;goto B4967e4;
case 0x4967e7:goto L4967e7;
case 0x4967e9:c.instructions+=2;goto B4967e9;
case 0x4967ec:c.instructions+=1;goto B4967ec;
case 0x4967f0:goto L4967f0;
case 0x4967f4:c.instructions+=7;goto B4967f4;
case 0x4967f5:c.instructions+=6;goto B4967f5;
case 0x4967f7:c.instructions+=5;goto B4967f7;
case 0x4967fa:c.instructions+=4;goto B4967fa;
case 0x4967fc:c.instructions+=3;goto B4967fc;
case 0x4967ff:c.instructions+=2;goto B4967ff;
case 0x496800:c.instructions+=1;goto B496800;
case 0x496802:goto L496802;
case 0x496807:goto L496807;
case 0x49680a:c.instructions+=8;goto B49680a;
case 0x49680d:c.instructions+=7;goto B49680d;
case 0x496810:c.instructions+=6;goto B496810;
case 0x496813:c.instructions+=5;goto B496813;
case 0x496816:c.instructions+=4;goto B496816;
case 0x496817:c.instructions+=3;goto B496817;
case 0x496818:c.instructions+=2;goto B496818;
case 0x496819:c.instructions+=1;goto B496819;
case 0x49681e:goto L49681e;
case 0x496821:c.instructions+=4;goto B496821;
case 0x496823:c.instructions+=3;goto B496823;
case 0x496828:c.instructions+=2;goto B496828;
case 0x496829:c.instructions+=1;goto B496829;
case 0x49682e:goto L49682e;
case 0x496831:c.instructions+=2;goto B496831;
case 0x496832:c.instructions+=1;goto B496832;
case 0x496835:goto L496835;
case 0x49683a:goto L49683a;
case 0x49683d:c.instructions+=2;goto B49683d;
case 0x49683e:c.instructions+=1;goto B49683e;
case 0x496850:goto L496850;
case 0x496852:c.instructions+=5;goto B496852;
case 0x496855:c.instructions+=4;goto B496855;
case 0x496859:c.instructions+=3;goto B496859;
case 0x49685c:c.instructions+=2;goto B49685c;
case 0x49685d:c.instructions+=1;goto B49685d;
case 0x496862:goto L496862;
case 0x496864:c.instructions+=2;goto B496864;
case 0x496867:c.instructions+=1;goto B496867;
case 0x496870:goto L496870;
case 0x496873:c.instructions+=6;goto B496873;
case 0x496874:c.instructions+=5;goto B496874;
case 0x496878:c.instructions+=4;goto B496878;
case 0x496879:c.instructions+=3;goto B496879;
case 0x49687a:c.instructions+=2;goto B49687a;
case 0x49687f:c.instructions+=1;goto B49687f;
case 0x496884:goto L496884;
case 0x496888:c.instructions+=3;goto B496888;
case 0x496889:c.instructions+=2;goto B496889;
case 0x49688a:c.instructions+=1;goto B49688a;
case 0x49688f:goto L49688f;
case 0x496890:c.instructions+=1;goto B496890;
case 0x496895:goto L496895;
case 0x496896:c.instructions+=2;goto B496896;
case 0x49689b:c.instructions+=1;goto B49689b;
case 0x4968a0:goto L4968a0;
case 0x4968a1:c.instructions+=2;goto B4968a1;
case 0x4968a2:c.instructions+=1;goto B4968a2;
case 0x4968a7:goto L4968a7;
case 0x4968a8:c.instructions+=1;goto B4968a8;
case 0x4968ad:goto L4968ad;
case 0x4968ae:c.instructions+=2;goto B4968ae;
case 0x4968b3:c.instructions+=1;goto B4968b3;
case 0x4968b8:goto L4968b8;
case 0x4968b9:c.instructions+=2;goto B4968b9;
case 0x4968ba:c.instructions+=1;goto B4968ba;
case 0x4968bf:goto L4968bf;
case 0x4968c0:c.instructions+=1;goto B4968c0;
case 0x4968c5:goto L4968c5;
case 0x4968c6:c.instructions+=2;goto B4968c6;
case 0x4968cb:c.instructions+=1;goto B4968cb;
case 0x4968d0:goto L4968d0;
case 0x4968d3:c.instructions+=3;goto B4968d3;
case 0x4968d4:c.instructions+=2;goto B4968d4;
case 0x4968d5:c.instructions+=1;goto B4968d5;
case 0x4968da:goto L4968da;
case 0x4968db:c.instructions+=1;goto B4968db;
case 0x4968e0:goto L4968e0;
case 0x4968e1:c.instructions+=5;goto B4968e1;
case 0x4968e6:c.instructions+=4;goto B4968e6;
case 0x4968ea:c.instructions+=3;goto B4968ea;
case 0x4968ec:c.instructions+=2;goto B4968ec;
case 0x4968ed:c.instructions+=1;goto B4968ed;
case 0x4968f2:goto L4968f2;
case 0x4968f5:c.instructions+=4;goto B4968f5;
case 0x4968f9:c.instructions+=3;goto B4968f9;
case 0x4968fb:c.instructions+=2;goto B4968fb;
case 0x4968fc:c.instructions+=1;goto B4968fc;
case 0x496901:goto L496901;
case 0x496904:c.instructions+=3;goto B496904;
case 0x496905:c.instructions+=2;goto B496905;
case 0x496906:c.instructions+=1;goto B496906;
case 0x49690b:goto L49690b;
case 0x49690e:c.instructions+=4;goto B49690e;
case 0x49690f:c.instructions+=3;goto B49690f;
case 0x496910:c.instructions+=2;goto B496910;
case 0x496913:c.instructions+=1;goto B496913;
case 0x496920:goto L496920;
case 0x496924:c.instructions+=7;goto B496924;
case 0x496927:c.instructions+=6;goto B496927;
case 0x496929:c.instructions+=5;goto B496929;
case 0x49692a:c.instructions+=4;goto B49692a;
case 0x49692c:c.instructions+=3;goto B49692c;
case 0x49692d:c.instructions+=2;goto B49692d;
case 0x496930:c.instructions+=1;goto B496930;
case 0x496936:goto L496936;
case 0x496939:c.instructions+=3;goto B496939;
case 0x49693e:c.instructions+=2;goto B49693e;
case 0x49693f:c.instructions+=1;goto B49693f;
case 0x496944:goto L496944;
case 0x496947:c.instructions+=4;goto B496947;
case 0x49694a:c.instructions+=3;goto B49694a;
case 0x49694b:c.instructions+=2;goto B49694b;
case 0x49694c:c.instructions+=1;goto B49694c;
case 0x496951:goto L496951;
case 0x496954:c.instructions+=3;goto B496954;
case 0x496957:c.instructions+=2;goto B496957;
case 0x496959:c.instructions+=1;goto B496959;
case 0x49695b:goto L49695b;
case 0x49695f:c.instructions+=3;goto B49695f;
case 0x496960:c.instructions+=2;goto B496960;
case 0x496961:c.instructions+=1;goto B496961;
case 0x496966:goto L496966;
case 0x496969:c.instructions+=2;goto B496969;
case 0x49696b:c.instructions+=1;goto B49696b;
case 0x496970:goto L496970;
case 0x496975:c.instructions+=4;goto B496975;
case 0x49697a:c.instructions+=3;goto B49697a;
case 0x49697b:c.instructions+=2;goto B49697b;
case 0x49697c:c.instructions+=1;goto B49697c;
case 0x496981:goto L496981;
case 0x496984:goto L496984;
case 0x496987:c.instructions+=2;goto B496987;
case 0x496989:c.instructions+=1;goto B496989;
case 0x49698f:goto L49698f;
case 0x496993:c.instructions+=3;goto B496993;
case 0x496994:c.instructions+=2;goto B496994;
case 0x496995:c.instructions+=1;goto B496995;
case 0x49699a:goto L49699a;
case 0x49699d:c.instructions+=2;goto B49699d;
case 0x49699f:c.instructions+=1;goto B49699f;
case 0x4969a4:goto L4969a4;
case 0x4969a9:c.instructions+=4;goto B4969a9;
case 0x4969ae:c.instructions+=3;goto B4969ae;
case 0x4969af:c.instructions+=2;goto B4969af;
case 0x4969b0:c.instructions+=1;goto B4969b0;
case 0x4969b5:goto L4969b5;
case 0x4969b8:c.instructions+=4;goto B4969b8;
case 0x4969b9:c.instructions+=3;goto B4969b9;
case 0x4969ba:c.instructions+=2;goto B4969ba;
case 0x4969bd:c.instructions+=1;goto B4969bd;
case 0x4969c0:goto L4969c0;
case 0x4969c3:c.instructions+=3;goto B4969c3;
case 0x4969c8:c.instructions+=2;goto B4969c8;
case 0x4969c9:c.instructions+=1;goto B4969c9;
case 0x4969ce:goto L4969ce;
case 0x4969d1:c.instructions+=4;goto B4969d1;
case 0x4969d4:c.instructions+=3;goto B4969d4;
case 0x4969d5:c.instructions+=2;goto B4969d5;
case 0x4969d6:c.instructions+=1;goto B4969d6;
case 0x4969db:goto L4969db;
case 0x4969de:c.instructions+=3;goto B4969de;
case 0x4969e1:c.instructions+=2;goto B4969e1;
case 0x4969e3:c.instructions+=1;goto B4969e3;
case 0x4969e5:goto L4969e5;
case 0x4969e9:c.instructions+=3;goto B4969e9;
case 0x4969ea:c.instructions+=2;goto B4969ea;
case 0x4969eb:c.instructions+=1;goto B4969eb;
case 0x4969f0:goto L4969f0;
case 0x4969f3:c.instructions+=2;goto B4969f3;
case 0x4969f5:c.instructions+=1;goto B4969f5;
case 0x4969fa:goto L4969fa;
case 0x4969ff:c.instructions+=3;goto B4969ff;
case 0x496a00:c.instructions+=2;goto B496a00;
case 0x496a01:c.instructions+=1;goto B496a01;
case 0x496a06:goto L496a06;
case 0x496a09:goto L496a09;
case 0x496a0c:c.instructions+=2;goto B496a0c;
case 0x496a0e:c.instructions+=1;goto B496a0e;
case 0x496a10:goto L496a10;
case 0x496a14:c.instructions+=3;goto B496a14;
case 0x496a15:c.instructions+=2;goto B496a15;
case 0x496a16:c.instructions+=1;goto B496a16;
case 0x496a1b:goto L496a1b;
case 0x496a1e:c.instructions+=2;goto B496a1e;
case 0x496a20:c.instructions+=1;goto B496a20;
case 0x496a25:goto L496a25;
case 0x496a2a:c.instructions+=3;goto B496a2a;
case 0x496a2b:c.instructions+=2;goto B496a2b;
case 0x496a2c:c.instructions+=1;goto B496a2c;
case 0x496a31:goto L496a31;
case 0x496a34:goto L496a34;
case 0x496a35:c.instructions+=3;goto B496a35;
case 0x496a36:c.instructions+=2;goto B496a36;
case 0x496a39:c.instructions+=1;goto B496a39;
case 0x496a40:goto L496a40;
case 0x496a43:c.instructions+=6;goto B496a43;
case 0x496a44:c.instructions+=5;goto B496a44;
case 0x496a45:c.instructions+=4;goto B496a45;
case 0x496a47:c.instructions+=3;goto B496a47;
case 0x496a4a:c.instructions+=2;goto B496a4a;
case 0x496a4b:c.instructions+=1;goto B496a4b;
case 0x496a50:goto L496a50;
case 0x496a53:c.instructions+=2;goto B496a53;
case 0x496a54:c.instructions+=1;goto B496a54;
case 0x496a59:goto L496a59;
case 0x496a5c:c.instructions+=2;goto B496a5c;
case 0x496a5d:c.instructions+=1;goto B496a5d;
case 0x496a62:goto L496a62;
case 0x496a65:c.instructions+=2;goto B496a65;
case 0x496a66:c.instructions+=1;goto B496a66;
case 0x496a6b:goto L496a6b;
case 0x496a6f:c.instructions+=4;goto B496a6f;
case 0x496a71:c.instructions+=3;goto B496a71;
case 0x496a74:c.instructions+=2;goto B496a74;
case 0x496a76:c.instructions+=1;goto B496a76;
case 0x496a78:goto L496a78;
case 0x496a7b:c.instructions+=2;goto B496a7b;
case 0x496a7d:c.instructions+=1;goto B496a7d;
case 0x496a7f:goto L496a7f;
case 0x496a83:c.instructions+=1;goto B496a83;
case 0x496a85:goto L496a85;
case 0x496a88:c.instructions+=3;goto B496a88;
case 0x496a89:c.instructions+=2;goto B496a89;
case 0x496a8a:c.instructions+=1;goto B496a8a;
case 0x496a8f:goto L496a8f;
case 0x496a92:c.instructions+=5;goto B496a92;
case 0x496a99:c.instructions+=4;goto B496a99;
case 0x496a9b:c.instructions+=3;goto B496a9b;
case 0x496a9c:c.instructions+=2;goto B496a9c;
case 0x496aa1:c.instructions+=1;goto B496aa1;
case 0x496aa6:goto L496aa6;
case 0x496aa9:c.instructions+=3;goto B496aa9;
case 0x496aaa:c.instructions+=2;goto B496aaa;
case 0x496aab:c.instructions+=1;goto B496aab;
case 0x496ab0:goto L496ab0;
case 0x496ab3:c.instructions+=4;goto B496ab3;
case 0x496ab8:c.instructions+=3;goto B496ab8;
case 0x496ab9:c.instructions+=2;goto B496ab9;
case 0x496abb:c.instructions+=1;goto B496abb;
case 0x496ac0:goto L496ac0;
case 0x496ac4:c.instructions+=3;goto B496ac4;
case 0x496ac5:c.instructions+=2;goto B496ac5;
case 0x496ac6:c.instructions+=1;goto B496ac6;
case 0x496acb:goto L496acb;
case 0x496ace:c.instructions+=2;goto B496ace;
case 0x496ad0:c.instructions+=1;goto B496ad0;
case 0x496ad5:goto L496ad5;
case 0x496ad8:c.instructions+=3;goto B496ad8;
case 0x496ad9:c.instructions+=2;goto B496ad9;
case 0x496ada:c.instructions+=1;goto B496ada;
case 0x496adf:goto L496adf;
case 0x496ae2:c.instructions+=1;goto B496ae2;
case 0x496ae3:goto L496ae3;
case 0x496ae5:c.instructions+=1;goto B496ae5;
case 0x496aea:goto L496aea;
case 0x496aeb:c.instructions+=1;goto B496aeb;
case 0x496af0:goto L496af0;
case 0x496af3:c.instructions+=3;goto B496af3;
case 0x496af4:c.instructions+=2;goto B496af4;
case 0x496af5:c.instructions+=1;goto B496af5;
case 0x496afa:goto L496afa;
case 0x496afd:c.instructions+=2;goto B496afd;
case 0x496afe:c.instructions+=1;goto B496afe;
case 0x496b03:goto L496b03;
case 0x496b06:c.instructions+=3;goto B496b06;
case 0x496b08:c.instructions+=2;goto B496b08;
case 0x496b09:c.instructions+=1;goto B496b09;
case 0x496b0e:goto L496b0e;
case 0x496b0f:c.instructions+=3;goto B496b0f;
case 0x496b10:c.instructions+=2;goto B496b10;
case 0x496b13:c.instructions+=1;goto B496b13;
case 0x496b20:goto L496b20;
case 0x496b23:c.instructions+=6;goto B496b23;
case 0x496b24:c.instructions+=5;goto B496b24;
case 0x496b26:c.instructions+=4;goto B496b26;
case 0x496b29:c.instructions+=3;goto B496b29;
case 0x496b2b:c.instructions+=2;goto B496b2b;
case 0x496b2c:c.instructions+=1;goto B496b2c;
case 0x496b32:goto L496b32;
case 0x496b35:c.instructions+=2;goto B496b35;
case 0x496b36:c.instructions+=1;goto B496b36;
case 0x496b3b:goto L496b3b;
case 0x496b3e:c.instructions+=6;goto B496b3e;
case 0x496b41:c.instructions+=5;goto B496b41;
case 0x496b42:c.instructions+=4;goto B496b42;
case 0x496b43:c.instructions+=3;goto B496b43;
case 0x496b45:c.instructions+=2;goto B496b45;
case 0x496b4a:c.instructions+=1;goto B496b4a;
case 0x496b4f:goto L496b4f;
case 0x496b52:c.instructions+=2;goto B496b52;
case 0x496b53:c.instructions+=1;goto B496b53;
case 0x496b58:goto L496b58;
case 0x496b5b:c.instructions+=3;goto B496b5b;
case 0x496b5e:c.instructions+=2;goto B496b5e;
case 0x496b60:c.instructions+=1;goto B496b60;
case 0x496b62:goto L496b62;
case 0x496b66:c.instructions+=3;goto B496b66;
case 0x496b67:c.instructions+=2;goto B496b67;
case 0x496b68:c.instructions+=1;goto B496b68;
case 0x496b6d:goto L496b6d;
case 0x496b70:c.instructions+=2;goto B496b70;
case 0x496b72:c.instructions+=1;goto B496b72;
case 0x496b77:goto L496b77;
case 0x496b7c:c.instructions+=3;goto B496b7c;
case 0x496b7d:c.instructions+=2;goto B496b7d;
case 0x496b7e:c.instructions+=1;goto B496b7e;
case 0x496b83:goto L496b83;
case 0x496b86:goto L496b86;
case 0x496b89:c.instructions+=2;goto B496b89;
case 0x496b8b:c.instructions+=1;goto B496b8b;
case 0x496b91:goto L496b91;
case 0x496b95:c.instructions+=3;goto B496b95;
case 0x496b96:c.instructions+=2;goto B496b96;
case 0x496b97:c.instructions+=1;goto B496b97;
case 0x496b9c:goto L496b9c;
case 0x496b9f:c.instructions+=2;goto B496b9f;
case 0x496ba1:c.instructions+=1;goto B496ba1;
case 0x496ba6:goto L496ba6;
case 0x496bab:c.instructions+=3;goto B496bab;
case 0x496bac:c.instructions+=2;goto B496bac;
case 0x496bad:c.instructions+=1;goto B496bad;
case 0x496bb2:goto L496bb2;
case 0x496bb5:c.instructions+=4;goto B496bb5;
case 0x496bb6:c.instructions+=3;goto B496bb6;
case 0x496bb7:c.instructions+=2;goto B496bb7;
case 0x496bba:c.instructions+=1;goto B496bba;
case 0x496bbb:goto L496bbb;
case 0x496bbe:c.instructions+=2;goto B496bbe;
case 0x496bbf:c.instructions+=1;goto B496bbf;
case 0x496bc4:goto L496bc4;
case 0x496bc7:c.instructions+=6;goto B496bc7;
case 0x496bca:c.instructions+=5;goto B496bca;
case 0x496bcb:c.instructions+=4;goto B496bcb;
case 0x496bcc:c.instructions+=3;goto B496bcc;
case 0x496bce:c.instructions+=2;goto B496bce;
case 0x496bd3:c.instructions+=1;goto B496bd3;
case 0x496bd8:goto L496bd8;
case 0x496bdb:c.instructions+=2;goto B496bdb;
case 0x496bdc:c.instructions+=1;goto B496bdc;
case 0x496be1:goto L496be1;
case 0x496be4:c.instructions+=3;goto B496be4;
case 0x496be7:c.instructions+=2;goto B496be7;
case 0x496be9:c.instructions+=1;goto B496be9;
case 0x496beb:goto L496beb;
case 0x496bef:c.instructions+=3;goto B496bef;
case 0x496bf0:c.instructions+=2;goto B496bf0;
case 0x496bf1:c.instructions+=1;goto B496bf1;
case 0x496bf6:goto L496bf6;
case 0x496bf9:c.instructions+=2;goto B496bf9;
case 0x496bfb:c.instructions+=1;goto B496bfb;
case 0x496c00:goto L496c00;
case 0x496c05:c.instructions+=4;goto B496c05;
case 0x496c0a:c.instructions+=3;goto B496c0a;
case 0x496c0b:c.instructions+=2;goto B496c0b;
case 0x496c0c:c.instructions+=1;goto B496c0c;
case 0x496c11:goto L496c11;
case 0x496c14:goto L496c14;
case 0x496c17:c.instructions+=2;goto B496c17;
case 0x496c19:c.instructions+=1;goto B496c19;
case 0x496c1b:goto L496c1b;
case 0x496c1f:c.instructions+=3;goto B496c1f;
case 0x496c20:c.instructions+=2;goto B496c20;
case 0x496c21:c.instructions+=1;goto B496c21;
case 0x496c26:goto L496c26;
case 0x496c29:c.instructions+=2;goto B496c29;
case 0x496c2b:c.instructions+=1;goto B496c2b;
case 0x496c30:goto L496c30;
case 0x496c35:c.instructions+=4;goto B496c35;
case 0x496c3a:c.instructions+=3;goto B496c3a;
case 0x496c3b:c.instructions+=2;goto B496c3b;
case 0x496c3c:c.instructions+=1;goto B496c3c;
case 0x496c41:goto L496c41;
case 0x496c44:goto L496c44;
case 0x496c45:c.instructions+=3;goto B496c45;
case 0x496c46:c.instructions+=2;goto B496c46;
case 0x496c49:c.instructions+=1;goto B496c49;
case 0x496c50:goto L496c50;
case 0x496c53:c.instructions+=6;goto B496c53;
case 0x496c54:c.instructions+=5;goto B496c54;
case 0x496c56:c.instructions+=4;goto B496c56;
case 0x496c59:c.instructions+=3;goto B496c59;
case 0x496c5a:c.instructions+=2;goto B496c5a;
case 0x496c5b:c.instructions+=1;goto B496c5b;
case 0x496c60:goto L496c60;
case 0x496c63:c.instructions+=6;goto B496c63;
case 0x496c66:c.instructions+=5;goto B496c66;
case 0x496c67:c.instructions+=4;goto B496c67;
case 0x496c68:c.instructions+=3;goto B496c68;
case 0x496c6a:c.instructions+=2;goto B496c6a;
case 0x496c6f:c.instructions+=1;goto B496c6f;
case 0x496c74:goto L496c74;
case 0x496c77:c.instructions+=2;goto B496c77;
case 0x496c78:c.instructions+=1;goto B496c78;
case 0x496c7d:goto L496c7d;
case 0x496c80:c.instructions+=3;goto B496c80;
case 0x496c83:c.instructions+=2;goto B496c83;
case 0x496c85:c.instructions+=1;goto B496c85;
case 0x496c87:goto L496c87;
case 0x496c8b:c.instructions+=3;goto B496c8b;
case 0x496c8c:c.instructions+=2;goto B496c8c;
case 0x496c8d:c.instructions+=1;goto B496c8d;
case 0x496c92:goto L496c92;
case 0x496c95:c.instructions+=2;goto B496c95;
case 0x496c97:c.instructions+=1;goto B496c97;
case 0x496c9c:goto L496c9c;
case 0x496ca1:c.instructions+=3;goto B496ca1;
case 0x496ca2:c.instructions+=2;goto B496ca2;
case 0x496ca3:c.instructions+=1;goto B496ca3;
case 0x496ca8:goto L496ca8;
case 0x496cab:goto L496cab;
case 0x496cae:c.instructions+=2;goto B496cae;
case 0x496cb0:c.instructions+=1;goto B496cb0;
case 0x496cb2:goto L496cb2;
case 0x496cb6:c.instructions+=3;goto B496cb6;
case 0x496cb7:c.instructions+=2;goto B496cb7;
case 0x496cb8:c.instructions+=1;goto B496cb8;
case 0x496cbd:goto L496cbd;
case 0x496cc0:c.instructions+=2;goto B496cc0;
case 0x496cc2:c.instructions+=1;goto B496cc2;
case 0x496cc7:goto L496cc7;
case 0x496ccc:c.instructions+=3;goto B496ccc;
case 0x496ccd:c.instructions+=2;goto B496ccd;
case 0x496cce:c.instructions+=1;goto B496cce;
case 0x496cd3:goto L496cd3;
case 0x496cd6:goto L496cd6;
case 0x496cd7:c.instructions+=3;goto B496cd7;
case 0x496cd8:c.instructions+=2;goto B496cd8;
case 0x496cdb:c.instructions+=1;goto B496cdb;
case 0x496ce0:goto L496ce0;
case 0x496ce1:c.instructions+=3;goto B496ce1;
case 0x496ce3:c.instructions+=2;goto B496ce3;
case 0x496ce8:c.instructions+=1;goto B496ce8;
case 0x496ced:goto L496ced;
case 0x496cf0:c.instructions+=6;goto B496cf0;
case 0x496cf3:c.instructions+=5;goto B496cf3;
case 0x496cf9:c.instructions+=4;goto B496cf9;
case 0x496cfa:c.instructions+=3;goto B496cfa;
case 0x496cfb:c.instructions+=2;goto B496cfb;
case 0x496d01:c.instructions+=1;goto B496d01;
case 0x496d06:goto L496d06;
case 0x496d07:c.instructions+=1;goto B496d07;
case 0x496d10:goto L496d10;
case 0x496d14:c.instructions+=2;goto B496d14;
case 0x496d17:c.instructions+=1;goto B496d17;
case 0x496d19:goto L496d19;
case 0x496d20:goto L496d20;
case 0x496d25:c.instructions+=1;goto B496d25;
case 0x496d26:goto L496d26;
case 0x496d2b:c.instructions+=1;goto B496d2b;
case 0x496d2c:goto L496d2c;
case 0x496d31:c.instructions+=1;goto B496d31;
case 0x496d32:goto L496d32;
case 0x496d37:c.instructions+=1;goto B496d37;
case 0x496d38:goto L496d38;
case 0x496d3d:c.instructions+=1;goto B496d3d;
case 0x496d3e:goto L496d3e;
case 0x496d46:c.instructions+=1;goto B496d46;
case 0x496d70:goto L496d70;
case 0x496d73:c.instructions+=9;goto B496d73;
case 0x496d74:c.instructions+=8;goto B496d74;
case 0x496d78:c.instructions+=7;goto B496d78;
case 0x496d7a:c.instructions+=6;goto B496d7a;
case 0x496d7b:c.instructions+=5;goto B496d7b;
case 0x496d7c:c.instructions+=4;goto B496d7c;
case 0x496d81:c.instructions+=3;goto B496d81;
case 0x496d82:c.instructions+=2;goto B496d82;
case 0x496d84:c.instructions+=1;goto B496d84;
case 0x496d89:goto L496d89;
case 0x496d8c:c.instructions+=4;goto B496d8c;
case 0x496d90:c.instructions+=3;goto B496d90;
case 0x496d93:c.instructions+=2;goto B496d93;
case 0x496d95:c.instructions+=1;goto B496d95;
case 0x496d97:goto L496d97;
case 0x496d99:c.instructions+=3;goto B496d99;
case 0x496d9e:c.instructions+=2;goto B496d9e;
case 0x496d9f:c.instructions+=1;goto B496d9f;
case 0x496da1:goto L496da1;
case 0x496da3:c.instructions+=2;goto B496da3;
case 0x496da8:c.instructions+=1;goto B496da8;
case 0x496da9:goto L496da9;
case 0x496dae:goto L496dae;
case 0x496db1:c.instructions+=4;goto B496db1;
case 0x496db4:c.instructions+=3;goto B496db4;
case 0x496db9:c.instructions+=2;goto B496db9;
case 0x496dba:c.instructions+=1;goto B496dba;
case 0x496dbf:goto L496dbf;
case 0x496dc2:c.instructions+=2;goto B496dc2;
case 0x496dc3:c.instructions+=1;goto B496dc3;
case 0x496dc8:goto L496dc8;
case 0x496dcb:c.instructions+=3;goto B496dcb;
case 0x496dcc:c.instructions+=2;goto B496dcc;
case 0x496dcd:c.instructions+=1;goto B496dcd;
case 0x496dd2:goto L496dd2;
case 0x496dd5:c.instructions+=3;goto B496dd5;
case 0x496dda:c.instructions+=2;goto B496dda;
case 0x496ddb:c.instructions+=1;goto B496ddb;
case 0x496de0:goto L496de0;
case 0x496de3:c.instructions+=7;goto B496de3;
case 0x496de9:c.instructions+=6;goto B496de9;
case 0x496dec:c.instructions+=5;goto B496dec;
case 0x496def:c.instructions+=4;goto B496def;
case 0x496df1:c.instructions+=3;goto B496df1;
case 0x496df4:c.instructions+=2;goto B496df4;
case 0x496df6:c.instructions+=1;goto B496df6;
case 0x496df8:goto L496df8;
case 0x496dfe:goto L496dfe;
case 0x496e00:c.instructions+=3;goto B496e00;
case 0x496e06:c.instructions+=2;goto B496e06;
case 0x496e0a:c.instructions+=1;goto B496e0a;
case 0x496e0c:goto L496e0c;
case 0x496e10:c.instructions+=2;goto B496e10;
case 0x496e16:c.instructions+=1;goto B496e16;
case 0x496e1a:goto L496e1a;
case 0x496e1c:c.instructions+=5;goto B496e1c;
case 0x496e1e:c.instructions+=4;goto B496e1e;
case 0x496e23:c.instructions+=3;goto B496e23;
case 0x496e28:c.instructions+=2;goto B496e28;
case 0x496e29:c.instructions+=1;goto B496e29;
case 0x496e2e:goto L496e2e;
case 0x496e32:c.instructions+=8;goto B496e32;
case 0x496e35:c.instructions+=7;goto B496e35;
case 0x496e38:c.instructions+=6;goto B496e38;
case 0x496e39:c.instructions+=5;goto B496e39;
case 0x496e3c:c.instructions+=4;goto B496e3c;
case 0x496e3f:c.instructions+=3;goto B496e3f;
case 0x496e44:c.instructions+=2;goto B496e44;
case 0x496e45:c.instructions+=1;goto B496e45;
case 0x496e4a:goto L496e4a;
case 0x496e4d:c.instructions+=3;goto B496e4d;
case 0x496e50:c.instructions+=2;goto B496e50;
case 0x496e53:c.instructions+=1;goto B496e53;
case 0x496e55:goto L496e55;
case 0x496e58:c.instructions+=3;goto B496e58;
case 0x496e5d:c.instructions+=2;goto B496e5d;
case 0x496e5e:c.instructions+=1;goto B496e5e;
case 0x496e63:goto L496e63;
case 0x496e66:c.instructions+=5;goto B496e66;
case 0x496e69:c.instructions+=4;goto B496e69;
case 0x496e6a:c.instructions+=3;goto B496e6a;
case 0x496e6f:c.instructions+=2;goto B496e6f;
case 0x496e70:c.instructions+=1;goto B496e70;
case 0x496e75:goto L496e75;
case 0x496e78:c.instructions+=1;goto B496e78;
case 0x496e7a:goto L496e7a;
case 0x496e7d:c.instructions+=1;goto B496e7d;
case 0x496e7f:goto L496e7f;
case 0x496e82:c.instructions+=1;goto B496e82;
case 0x496e84:goto L496e84;
case 0x496e87:c.instructions+=3;goto B496e87;
case 0x496e8c:c.instructions+=2;goto B496e8c;
case 0x496e8d:c.instructions+=1;goto B496e8d;
case 0x496e8f:goto L496e8f;
case 0x496e92:c.instructions+=2;goto B496e92;
case 0x496e97:c.instructions+=1;goto B496e97;
case 0x496e98:goto L496e98;
case 0x496e9d:goto L496e9d;
case 0x496ea0:c.instructions+=7;goto B496ea0;
case 0x496ea3:c.instructions+=6;goto B496ea3;
case 0x496ea5:c.instructions+=5;goto B496ea5;
case 0x496ea9:c.instructions+=4;goto B496ea9;
case 0x496eaa:c.instructions+=3;goto B496eaa;
case 0x496eae:c.instructions+=2;goto B496eae;
case 0x496eb2:c.instructions+=1;goto B496eb2;
case 0x496eb7:goto L496eb7;
case 0x496eba:c.instructions+=5;goto B496eba;
case 0x496ebe:c.instructions+=4;goto B496ebe;
case 0x496ebf:c.instructions+=3;goto B496ebf;
case 0x496ec4:c.instructions+=2;goto B496ec4;
case 0x496ec5:c.instructions+=1;goto B496ec5;
case 0x496eca:goto L496eca;
case 0x496ecd:goto L496ecd;
case 0x496ed0:c.instructions+=4;goto B496ed0;
case 0x496ed3:c.instructions+=3;goto B496ed3;
case 0x496ed4:c.instructions+=2;goto B496ed4;
case 0x496ed5:c.instructions+=1;goto B496ed5;
case 0x496eda:goto L496eda;
case 0x496edd:c.instructions+=5;goto B496edd;
case 0x496ede:c.instructions+=4;goto B496ede;
case 0x496edf:c.instructions+=3;goto B496edf;
case 0x496ee0:c.instructions+=2;goto B496ee0;
case 0x496ee3:c.instructions+=1;goto B496ee3;
case 0x496ef0:goto L496ef0;
case 0x496ef1:c.instructions+=8;goto B496ef1;
case 0x496ef2:c.instructions+=7;goto B496ef2;
case 0x496ef3:c.instructions+=6;goto B496ef3;
case 0x496ef7:c.instructions+=5;goto B496ef7;
case 0x496ef8:c.instructions+=4;goto B496ef8;
case 0x496efc:c.instructions+=3;goto B496efc;
case 0x496efe:c.instructions+=2;goto B496efe;
case 0x496f00:c.instructions+=1;goto B496f00;
case 0x496f05:goto L496f05;
case 0x496f08:c.instructions+=2;goto B496f08;
case 0x496f0a:c.instructions+=1;goto B496f0a;
case 0x496f0c:goto L496f0c;
case 0x496f11:c.instructions+=2;goto B496f11;
case 0x496f12:c.instructions+=1;goto B496f12;
case 0x496f17:goto L496f17;
case 0x496f1a:goto L496f1a;
case 0x496f1c:c.instructions+=2;goto B496f1c;
case 0x496f1e:c.instructions+=1;goto B496f1e;
case 0x496f20:goto L496f20;
case 0x496f25:c.instructions+=2;goto B496f25;
case 0x496f26:c.instructions+=1;goto B496f26;
case 0x496f2b:goto L496f2b;
case 0x496f2e:goto L496f2e;
case 0x496f31:c.instructions+=2;goto B496f31;
case 0x496f32:c.instructions+=1;goto B496f32;
case 0x496f34:goto L496f34;
case 0x496f37:c.instructions+=5;goto B496f37;
case 0x496f3b:c.instructions+=4;goto B496f3b;
case 0x496f3e:c.instructions+=3;goto B496f3e;
case 0x496f3f:c.instructions+=2;goto B496f3f;
case 0x496f40:c.instructions+=1;goto B496f40;
case 0x496f45:goto L496f45;
case 0x496f48:c.instructions+=5;goto B496f48;
case 0x496f49:c.instructions+=4;goto B496f49;
case 0x496f4a:c.instructions+=3;goto B496f4a;
case 0x496f4b:c.instructions+=2;goto B496f4b;
case 0x496f4c:c.instructions+=1;goto B496f4c;
case 0x496f50:goto L496f50;
case 0x496f51:c.instructions+=7;goto B496f51;
case 0x496f53:c.instructions+=6;goto B496f53;
case 0x496f56:c.instructions+=5;goto B496f56;
case 0x496f59:c.instructions+=4;goto B496f59;
case 0x496f5f:c.instructions+=3;goto B496f5f;
case 0x496f61:c.instructions+=2;goto B496f61;
case 0x496f63:c.instructions+=1;goto B496f63;
case 0x496f65:goto L496f65;
case 0x496f6b:c.instructions+=2;goto B496f6b;
case 0x496f6c:c.instructions+=1;goto B496f6c;
case 0x496f71:goto L496f71;
case 0x496f74:c.instructions+=1;goto B496f74;
case 0x496f76:goto L496f76;
case 0x496f7c:c.instructions+=4;goto B496f7c;
case 0x496f7e:c.instructions+=3;goto B496f7e;
case 0x496f83:c.instructions+=2;goto B496f83;
case 0x496f84:c.instructions+=1;goto B496f84;
case 0x496f89:goto L496f89;
case 0x496f8f:c.instructions+=2;goto B496f8f;
case 0x496f90:c.instructions+=1;goto B496f90;
case 0x496f95:goto L496f95;
case 0x496f98:goto L496f98;
case 0x496f9e:c.instructions+=2;goto B496f9e;
case 0x496fa0:c.instructions+=1;goto B496fa0;
case 0x496fa2:goto L496fa2;
case 0x496fa8:c.instructions+=2;goto B496fa8;
case 0x496fa9:c.instructions+=1;goto B496fa9;
case 0x496fae:goto L496fae;
case 0x496fb1:c.instructions+=2;goto B496fb1;
case 0x496fb2:c.instructions+=1;goto B496fb2;
case 0x496fb3:goto L496fb3;
case 0x496fb9:c.instructions+=4;goto B496fb9;
case 0x496fbb:c.instructions+=3;goto B496fbb;
case 0x496fc0:c.instructions+=2;goto B496fc0;
case 0x496fc1:c.instructions+=1;goto B496fc1;
case 0x496fc6:goto L496fc6;
case 0x496fcc:c.instructions+=2;goto B496fcc;
case 0x496fcd:c.instructions+=1;goto B496fcd;
case 0x496fd2:goto L496fd2;
case 0x496fd5:c.instructions+=2;goto B496fd5;
case 0x496fd6:c.instructions+=1;goto B496fd6;
case 0x496fe0:goto L496fe0;
case 0x496fe2:c.instructions+=9;goto B496fe2;
case 0x496fe7:c.instructions+=8;goto B496fe7;
case 0x496fed:c.instructions+=7;goto B496fed;
case 0x496fee:c.instructions+=6;goto B496fee;
case 0x496ff5:c.instructions+=5;goto B496ff5;
case 0x496ff6:c.instructions+=4;goto B496ff6;
case 0x496ff7:c.instructions+=3;goto B496ff7;
case 0x496ff9:c.instructions+=2;goto B496ff9;
case 0x496ffd:c.instructions+=1;goto B496ffd;
default:missing_instruction(c.pc);}
B496001:L496001:{c.instructions+=4;NFSU2_TR(0x496001);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B496003:{NFSU2_TR(0x496003);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B496005:{NFSU2_TR(0x496005);
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
B496007:{NFSU2_TR(0x496007);
if(r1(R+518)){{goto L49603b;}}
}
B496009:L496009:{c.instructions+=1;NFSU2_TR(0x496009);
__builtin_memmove((R+16),(R+16),4);
}
B496010:L496010:{c.instructions+=3;NFSU2_TR(0x496010);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B496016:{NFSU2_TR(0x496016);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496018:{NFSU2_TR(0x496018);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49602c;}}
}
B49601a:L49601a:{c.instructions+=3;NFSU2_TR(0x49601a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7f5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B496020:{NFSU2_TR(0x496020);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496022:{NFSU2_TR(0x496022);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49602c;}}
}
B496024:L496024:{c.instructions+=2;NFSU2_TR(0x496024);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496026:{NFSU2_TR(0x496026);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49602c;}}
}
B496028:L496028:{c.instructions+=2;NFSU2_TR(0x496028);
__builtin_memmove((R+20),(R+24),4);
}
B49602a:{NFSU2_TR(0x49602a);
w1(R+12,u8(0x1ull));
}
B49602c:L49602c:{c.instructions+=4;NFSU2_TR(0x49602c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49602d:{NFSU2_TR(0x49602d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49602f:{NFSU2_TR(0x49602f);
__builtin_memmove((R+4),(R+28),4);
}
B496031:{NFSU2_TR(0x496031);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496036ull));
TAIL_STATIC(0x5162d0u,516);
}
B496036:L496036:{c.instructions+=3;NFSU2_TR(0x496036);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B496037:{NFSU2_TR(0x496037);
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
B496039:{NFSU2_TR(0x496039);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496010u);}goto L496010;}}
}
B49603b:L49603b:{c.instructions+=6;NFSU2_TR(0x49603b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49603c:{NFSU2_TR(0x49603c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49603d:{NFSU2_TR(0x49603d);
__builtin_memmove((R+0),(R+20),4);
}
B49603f:{NFSU2_TR(0x49603f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496040:{NFSU2_TR(0x496040);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B496041:{NFSU2_TR(0x496041);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496050:L496050:{c.instructions+=3;NFSU2_TR(0x496050);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496056:{NFSU2_TR(0x496056);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B496058:{NFSU2_TR(0x496058);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L496071;}}
}
B49605a:L49605a:{c.instructions+=2;NFSU2_TR(0x49605a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B49605d:{NFSU2_TR(0x49605d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L496071;}}
}
B49605f:L49605f:{c.instructions+=4;NFSU2_TR(0x49605f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xab4cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B496065:{NFSU2_TR(0x496065);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x83ad90ull))));
}
B49606a:{NFSU2_TR(0x49606a);
__builtin_memmove((R+4),(R+0),4);
}
B49606c:{NFSU2_TR(0x49606c);
TAIL_STATIC(0x534950u,534);
}
B496071:L496071:{c.instructions+=3;NFSU2_TR(0x496071);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496073:{NFSU2_TR(0x496073);
__builtin_memmove((R+4),(R+0),4);
}
B496075:{NFSU2_TR(0x496075);
TAIL_STATIC(0x534950u,534);
}
B496080:L496080:{c.instructions+=8;NFSU2_TR(0x496080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B496083:{NFSU2_TR(0x496083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496084:{NFSU2_TR(0x496084);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496085:{NFSU2_TR(0x496085);
__builtin_memmove((R+24),(R+4),4);
}
B496087:{NFSU2_TR(0x496087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49608d:{NFSU2_TR(0x49608d);
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
B49608f:{NFSU2_TR(0x49608f);
w4(R+4,u32(0xcull));
}
B496094:{NFSU2_TR(0x496094);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B496098:L496098:{c.instructions+=1;NFSU2_TR(0x496098);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49609a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496098u);}goto L496098;}
}
B49609a:L49609a:{c.instructions+=15;NFSU2_TR(0x49609a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49609d:{NFSU2_TR(0x49609d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4960a1:{NFSU2_TR(0x4960a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4960a7:{NFSU2_TR(0x4960a7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4960a9:{NFSU2_TR(0x4960a9);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4960ad:{NFSU2_TR(0x4960ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4960ae:{NFSU2_TR(0x4960ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f6a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960b6:{NFSU2_TR(0x4960b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f694ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960be:{NFSU2_TR(0x4960be);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f688ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960c6:{NFSU2_TR(0x4960c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960ce:{NFSU2_TR(0x4960ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960d6:{NFSU2_TR(0x4960d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960de:{NFSU2_TR(0x4960de);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960e6:{NFSU2_TR(0x4960e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4960ee:{NFSU2_TR(0x4960ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4960f1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4960f1:L4960f1:{c.instructions+=9;NFSU2_TR(0x4960f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4960f7:{NFSU2_TR(0x4960f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4960fd:{NFSU2_TR(0x4960fd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4960ff:{NFSU2_TR(0x4960ff);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496103:{NFSU2_TR(0x496103);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496104:{NFSU2_TR(0x496104);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f674ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49610c:{NFSU2_TR(0x49610c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B496114:{NFSU2_TR(0x496114);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49611c:{NFSU2_TR(0x49611c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49611full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49611f:L49611f:{c.instructions+=9;NFSU2_TR(0x49611f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496125:{NFSU2_TR(0x496125);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49612b:{NFSU2_TR(0x49612b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49612d:{NFSU2_TR(0x49612d);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496131:{NFSU2_TR(0x496131);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496132:{NFSU2_TR(0x496132);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f63cull));
s4(u32(r4(U+0)),r4(U+4));
}
B49613a:{NFSU2_TR(0x49613a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f62cull));
s4(u32(r4(U+0)),r4(U+4));
}
B496142:{NFSU2_TR(0x496142);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f61cull));
s4(u32(r4(U+0)),r4(U+4));
}
B49614a:{NFSU2_TR(0x49614a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49614dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49614d:L49614d:{c.instructions+=4;NFSU2_TR(0x49614d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49614e:{NFSU2_TR(0x49614e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49614f:{NFSU2_TR(0x49614f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B496152:{NFSU2_TR(0x496152);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496160:L496160:{c.instructions+=5;NFSU2_TR(0x496160);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496161:{NFSU2_TR(0x496161);
__builtin_memmove((R+24),(R+4),4);
}
B496163:{NFSU2_TR(0x496163);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496166:{NFSU2_TR(0x496166);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496167:{NFSU2_TR(0x496167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49616cull));
TAIL_STATIC(0x511e00u,511);
}
B49616c:L49616c:{c.instructions+=3;NFSU2_TR(0x49616c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49616f:{NFSU2_TR(0x49616f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496175:{NFSU2_TR(0x496175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49617aull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B49617a:L49617a:{c.instructions+=4;NFSU2_TR(0x49617a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49617b:{NFSU2_TR(0x49617b);
__builtin_memmove((R+4),(R+28),4);
}
B49617d:{NFSU2_TR(0x49617d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B496180:{NFSU2_TR(0x496180);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496185ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B496185:L496185:{c.instructions+=3;NFSU2_TR(0x496185);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B496187:{NFSU2_TR(0x496187);
__builtin_memmove((R+4),(R+28),4);
}
B496189:{NFSU2_TR(0x496189);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49618cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49618c:L49618c:{c.instructions+=2;NFSU2_TR(0x49618c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49618f:{NFSU2_TR(0x49618f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496194ull));
TAIL_STATIC(0x511e00u,511);
}
B496194:L496194:{c.instructions+=3;NFSU2_TR(0x496194);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B496197:{NFSU2_TR(0x496197);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49619d:{NFSU2_TR(0x49619d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4961a2ull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B4961a2:L4961a2:{c.instructions+=4;NFSU2_TR(0x4961a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4961a3:{NFSU2_TR(0x4961a3);
__builtin_memmove((R+4),(R+28),4);
}
B4961a5:{NFSU2_TR(0x4961a5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4961a8:{NFSU2_TR(0x4961a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4961adull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4961ad:L4961ad:{c.instructions+=3;NFSU2_TR(0x4961ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4961af:{NFSU2_TR(0x4961af);
__builtin_memmove((R+4),(R+28),4);
}
B4961b1:{NFSU2_TR(0x4961b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4961b4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4961b4:L4961b4:{c.instructions+=2;NFSU2_TR(0x4961b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4961b7:{NFSU2_TR(0x4961b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4961bcull));
TAIL_STATIC(0x511e00u,511);
}
B4961bc:L4961bc:{c.instructions+=3;NFSU2_TR(0x4961bc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4961bf:{NFSU2_TR(0x4961bf);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x178ull))));
}
B4961c5:{NFSU2_TR(0x4961c5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4961caull));
TAIL_STATIC(0x5b5490u,5b5);
}
B4961ca:L4961ca:{c.instructions+=4;NFSU2_TR(0x4961ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4961cb:{NFSU2_TR(0x4961cb);
__builtin_memmove((R+4),(R+24),4);
}
B4961cd:{NFSU2_TR(0x4961cd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4961d0:{NFSU2_TR(0x4961d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4961d5ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B4961d5:L4961d5:{c.instructions+=5;NFSU2_TR(0x4961d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4961d7:{NFSU2_TR(0x4961d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4961d8:{NFSU2_TR(0x4961d8);
__builtin_memmove((R+4),(R+24),4);
}
B4961da:{NFSU2_TR(0x4961da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4961db:{NFSU2_TR(0x4961db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4961e0:L4961e0:{c.instructions+=9;NFSU2_TR(0x4961e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4961e4:{NFSU2_TR(0x4961e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4961e8:{NFSU2_TR(0x4961e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4961ee:{NFSU2_TR(0x4961ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4961f2:{NFSU2_TR(0x4961f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4961f8:{NFSU2_TR(0x4961f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4961fc:{NFSU2_TR(0x4961fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B496202:{NFSU2_TR(0x496202);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B496208:{NFSU2_TR(0x496208);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496210:L496210:{c.instructions+=8;NFSU2_TR(0x496210);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B496213:{NFSU2_TR(0x496213);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496214:{NFSU2_TR(0x496214);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496215:{NFSU2_TR(0x496215);
__builtin_memmove((R+24),(R+4),4);
}
B496217:{NFSU2_TR(0x496217);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49621d:{NFSU2_TR(0x49621d);
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
B49621f:{NFSU2_TR(0x49621f);
w4(R+4,u32(0xcull));
}
B496224:{NFSU2_TR(0x496224);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B496228:L496228:{c.instructions+=1;NFSU2_TR(0x496228);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L49622a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496228u);}goto L496228;}
}
B49622a:L49622a:{c.instructions+=15;NFSU2_TR(0x49622a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49622d:{NFSU2_TR(0x49622d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B496231:{NFSU2_TR(0x496231);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B496237:{NFSU2_TR(0x496237);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496239:{NFSU2_TR(0x496239);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49623d:{NFSU2_TR(0x49623d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49623e:{NFSU2_TR(0x49623e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f6a4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B496246:{NFSU2_TR(0x496246);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f694ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49624e:{NFSU2_TR(0x49624e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f688ull));
s4(u32(r4(U+0)),r4(U+4));
}
B496256:{NFSU2_TR(0x496256);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49625e:{NFSU2_TR(0x49625e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B496266:{NFSU2_TR(0x496266);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49626e:{NFSU2_TR(0x49626e);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B496276:{NFSU2_TR(0x496276);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x42380000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49627e:{NFSU2_TR(0x49627e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496281ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B496281:L496281:{c.instructions+=9;NFSU2_TR(0x496281);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496287:{NFSU2_TR(0x496287);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B49628d:{NFSU2_TR(0x49628d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49628f:{NFSU2_TR(0x49628f);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496293:{NFSU2_TR(0x496293);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496294:{NFSU2_TR(0x496294);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f674ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49629c:{NFSU2_TR(0x49629c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f660ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4962a4:{NFSU2_TR(0x4962a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f650ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4962ac:{NFSU2_TR(0x4962ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4962afull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4962af:L4962af:{c.instructions+=9;NFSU2_TR(0x4962af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4962b5:{NFSU2_TR(0x4962b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4962bb:{NFSU2_TR(0x4962bb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4962bd:{NFSU2_TR(0x4962bd);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4962c1:{NFSU2_TR(0x4962c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4962c2:{NFSU2_TR(0x4962c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f63cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4962ca:{NFSU2_TR(0x4962ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f62cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4962d2:{NFSU2_TR(0x4962d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f61cull));
s4(u32(r4(U+0)),r4(U+4));
}
B4962da:{NFSU2_TR(0x4962da);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4962ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4962dd:L4962dd:{c.instructions+=4;NFSU2_TR(0x4962dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4962de:{NFSU2_TR(0x4962de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4962df:{NFSU2_TR(0x4962df);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4962e2:{NFSU2_TR(0x4962e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4962f0:L4962f0:{c.instructions+=6;NFSU2_TR(0x4962f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4962f1:{NFSU2_TR(0x4962f1);
__builtin_memmove((R+24),(R+4),4);
}
B4962f3:{NFSU2_TR(0x4962f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4962f6:{NFSU2_TR(0x4962f6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x931ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4962fc:{NFSU2_TR(0x4962fc);
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
B4962fe:{NFSU2_TR(0x4962fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496386;}}
}
B496304:L496304:{c.instructions+=3;NFSU2_TR(0x496304);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B49630a:{NFSU2_TR(0x49630a);
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
B49630c:{NFSU2_TR(0x49630c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496386;}}
}
B49630e:L49630e:{c.instructions+=2;NFSU2_TR(0x49630e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49630f:{NFSU2_TR(0x49630f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496314ull));
TAIL_STATIC(0x511e00u,511);
}
B496314:L496314:{c.instructions+=3;NFSU2_TR(0x496314);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B496317:{NFSU2_TR(0x496317);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49631d:{NFSU2_TR(0x49631d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496322ull));
TAIL_STATIC(0x5b53a0u,5b5);
}
B496322:L496322:{c.instructions+=4;NFSU2_TR(0x496322);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496323:{NFSU2_TR(0x496323);
__builtin_memmove((R+4),(R+28),4);
}
B496325:{NFSU2_TR(0x496325);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B496328:{NFSU2_TR(0x496328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49632dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49632d:L49632d:{c.instructions+=3;NFSU2_TR(0x49632d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49632f:{NFSU2_TR(0x49632f);
__builtin_memmove((R+4),(R+28),4);
}
B496331:{NFSU2_TR(0x496331);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496334ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B496334:L496334:{c.instructions+=2;NFSU2_TR(0x496334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496337:{NFSU2_TR(0x496337);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49633cull));
TAIL_STATIC(0x511e00u,511);
}
B49633c:L49633c:{c.instructions+=3;NFSU2_TR(0x49633c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49633f:{NFSU2_TR(0x49633f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+28),(U+0),4);
}
B496345:{NFSU2_TR(0x496345);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49634aull));
TAIL_STATIC(0x5b6a20u,5b6);
}
B49634a:L49634a:{c.instructions+=4;NFSU2_TR(0x49634a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49634b:{NFSU2_TR(0x49634b);
__builtin_memmove((R+4),(R+28),4);
}
B49634d:{NFSU2_TR(0x49634d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B496350:{NFSU2_TR(0x496350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496355ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B496355:L496355:{c.instructions+=3;NFSU2_TR(0x496355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B496357:{NFSU2_TR(0x496357);
__builtin_memmove((R+4),(R+28),4);
}
B496359:{NFSU2_TR(0x496359);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49635cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49635c:L49635c:{c.instructions+=2;NFSU2_TR(0x49635c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49635f:{NFSU2_TR(0x49635f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496364ull));
TAIL_STATIC(0x511e00u,511);
}
B496364:L496364:{c.instructions+=3;NFSU2_TR(0x496364);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B496367:{NFSU2_TR(0x496367);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x150ull))));
}
B49636d:{NFSU2_TR(0x49636d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496372ull));
TAIL_STATIC(0x5b5490u,5b5);
}
B496372:L496372:{c.instructions+=4;NFSU2_TR(0x496372);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496373:{NFSU2_TR(0x496373);
__builtin_memmove((R+4),(R+24),4);
}
B496375:{NFSU2_TR(0x496375);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B496378:{NFSU2_TR(0x496378);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49637dull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49637d:L49637d:{c.instructions+=5;NFSU2_TR(0x49637d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49637f:{NFSU2_TR(0x49637f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496380:{NFSU2_TR(0x496380);
__builtin_memmove((R+4),(R+24),4);
}
B496382:{NFSU2_TR(0x496382);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496383:{NFSU2_TR(0x496383);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B496386:L496386:{c.instructions+=2;NFSU2_TR(0x496386);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496387:{NFSU2_TR(0x496387);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496390:L496390:{c.instructions+=5;NFSU2_TR(0x496390);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496391:{NFSU2_TR(0x496391);
__builtin_memmove((R+20),(R+16),4);
}
B496393:{NFSU2_TR(0x496393);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496396:{NFSU2_TR(0x496396);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B496399:{NFSU2_TR(0x496399);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L496488;}}
}
B49639f:L49639f:{c.instructions+=1;NFSU2_TR(0x49639f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x49648cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4963a6:L4963a6:{c.instructions+=6;NFSU2_TR(0x4963a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4963a9:{NFSU2_TR(0x4963a9);
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
B4963ab:{NFSU2_TR(0x4963ab);
__builtin_memmove((R+0),(R+518),1);
}
B4963ae:{NFSU2_TR(0x4963ae);
__builtin_memmove(gp(0x8635a9),(R+0),1);
}
B4963b3:{NFSU2_TR(0x4963b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4963b4:{NFSU2_TR(0x4963b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4963b5:L4963b5:{c.instructions+=6;NFSU2_TR(0x4963b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4963b8:{NFSU2_TR(0x4963b8);
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
B4963ba:{NFSU2_TR(0x4963ba);
__builtin_memmove((R+4),(R+518),1);
}
B4963bd:{NFSU2_TR(0x4963bd);
__builtin_memmove(gp(0x8635aa),(R+4),1);
}
B4963c3:{NFSU2_TR(0x4963c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4963c4:{NFSU2_TR(0x4963c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4963c5:L4963c5:{c.instructions+=6;NFSU2_TR(0x4963c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4963c8:{NFSU2_TR(0x4963c8);
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
B4963ca:{NFSU2_TR(0x4963ca);
__builtin_memmove((R+8),(R+518),1);
}
B4963cd:{NFSU2_TR(0x4963cd);
__builtin_memmove(gp(0x8635ab),(R+8),1);
}
B4963d3:{NFSU2_TR(0x4963d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4963d4:{NFSU2_TR(0x4963d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4963d5:L4963d5:{c.instructions+=6;NFSU2_TR(0x4963d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4963d8:{NFSU2_TR(0x4963d8);
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
B4963da:{NFSU2_TR(0x4963da);
__builtin_memmove((R+0),(R+518),1);
}
B4963dd:{NFSU2_TR(0x4963dd);
__builtin_memmove(gp(0x8635ac),(R+0),1);
}
B4963e2:{NFSU2_TR(0x4963e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4963e3:{NFSU2_TR(0x4963e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4963e4:L4963e4:{c.instructions+=6;NFSU2_TR(0x4963e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4963e7:{NFSU2_TR(0x4963e7);
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
B4963e9:{NFSU2_TR(0x4963e9);
__builtin_memmove((R+4),(R+518),1);
}
B4963ec:{NFSU2_TR(0x4963ec);
__builtin_memmove(gp(0x8635ad),(R+4),1);
}
B4963f2:{NFSU2_TR(0x4963f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4963f3:{NFSU2_TR(0x4963f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4963f4:L4963f4:{c.instructions+=6;NFSU2_TR(0x4963f4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4963f7:{NFSU2_TR(0x4963f7);
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
B4963f9:{NFSU2_TR(0x4963f9);
__builtin_memmove((R+8),(R+518),1);
}
B4963fc:{NFSU2_TR(0x4963fc);
__builtin_memmove(gp(0x8635ae),(R+8),1);
}
B496402:{NFSU2_TR(0x496402);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496403:{NFSU2_TR(0x496403);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496404:L496404:{c.instructions+=6;NFSU2_TR(0x496404);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496407:{NFSU2_TR(0x496407);
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
B496409:{NFSU2_TR(0x496409);
__builtin_memmove((R+0),(R+518),1);
}
B49640c:{NFSU2_TR(0x49640c);
__builtin_memmove(gp(0x8635b0),(R+0),1);
}
B496411:{NFSU2_TR(0x496411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496412:{NFSU2_TR(0x496412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496413:L496413:{c.instructions+=6;NFSU2_TR(0x496413);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496416:{NFSU2_TR(0x496416);
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
B496418:{NFSU2_TR(0x496418);
__builtin_memmove((R+4),(R+518),1);
}
B49641b:{NFSU2_TR(0x49641b);
__builtin_memmove(gp(0x8635b2),(R+4),1);
}
B496421:{NFSU2_TR(0x496421);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496422:{NFSU2_TR(0x496422);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496423:L496423:{c.instructions+=6;NFSU2_TR(0x496423);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496426:{NFSU2_TR(0x496426);
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
B496428:{NFSU2_TR(0x496428);
__builtin_memmove((R+8),(R+518),1);
}
B49642b:{NFSU2_TR(0x49642b);
__builtin_memmove(gp(0x8635b3),(R+8),1);
}
B496431:{NFSU2_TR(0x496431);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496432:{NFSU2_TR(0x496432);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496433:L496433:{c.instructions+=6;NFSU2_TR(0x496433);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496436:{NFSU2_TR(0x496436);
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
B496438:{NFSU2_TR(0x496438);
__builtin_memmove((R+0),(R+518),1);
}
B49643b:{NFSU2_TR(0x49643b);
__builtin_memmove(gp(0x8635b5),(R+0),1);
}
B496440:{NFSU2_TR(0x496440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496441:{NFSU2_TR(0x496441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496442:L496442:{c.instructions+=6;NFSU2_TR(0x496442);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496445:{NFSU2_TR(0x496445);
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
B496447:{NFSU2_TR(0x496447);
__builtin_memmove((R+4),(R+518),1);
}
B49644a:{NFSU2_TR(0x49644a);
__builtin_memmove(gp(0x8635b6),(R+4),1);
}
B496450:{NFSU2_TR(0x496450);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496451:{NFSU2_TR(0x496451);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496452:L496452:{c.instructions+=6;NFSU2_TR(0x496452);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496455:{NFSU2_TR(0x496455);
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
B496457:{NFSU2_TR(0x496457);
__builtin_memmove((R+8),(R+518),1);
}
B49645a:{NFSU2_TR(0x49645a);
__builtin_memmove(gp(0x8635b4),(R+8),1);
}
B496460:{NFSU2_TR(0x496460);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496461:{NFSU2_TR(0x496461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496462:L496462:{c.instructions+=6;NFSU2_TR(0x496462);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496465:{NFSU2_TR(0x496465);
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
B496467:{NFSU2_TR(0x496467);
__builtin_memmove((R+0),(R+518),1);
}
B49646a:{NFSU2_TR(0x49646a);
__builtin_memmove(gp(0x8635b7),(R+0),1);
}
B49646f:{NFSU2_TR(0x49646f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496470:{NFSU2_TR(0x496470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496471:L496471:{c.instructions+=6;NFSU2_TR(0x496471);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496474:{NFSU2_TR(0x496474);
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
B496476:{NFSU2_TR(0x496476);
__builtin_memmove((R+0),(R+518),1);
}
B496479:{NFSU2_TR(0x496479);
__builtin_memmove(gp(0x8635b8),(R+0),1);
}
B49647e:{NFSU2_TR(0x49647e);
__builtin_memmove(gp(0x8635af),(R+0),1);
}
B496483:{NFSU2_TR(0x496483);
__builtin_memmove(gp(0x8635b1),(R+0),1);
}
B496488:L496488:{c.instructions+=2;NFSU2_TR(0x496488);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496489:{NFSU2_TR(0x496489);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4964d0:L4964d0:{c.instructions+=5;NFSU2_TR(0x4964d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4964d1:{NFSU2_TR(0x4964d1);
__builtin_memmove((R+20),(R+16),4);
}
B4964d3:{NFSU2_TR(0x4964d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4964d6:{NFSU2_TR(0x4964d6);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xdull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4964d9:{NFSU2_TR(0x4964d9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4965b6;}}
}
B4964df:L4964df:{c.instructions+=1;NFSU2_TR(0x4964df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4965b8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4964e6:L4964e6:{c.instructions+=6;NFSU2_TR(0x4964e6);
__builtin_memmove((R+4),gp(0x8635a9),1);
}
B4964ec:{NFSU2_TR(0x4964ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4964ee:{NFSU2_TR(0x4964ee);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4964f0:{NFSU2_TR(0x4964f0);
__builtin_memmove((R+0),(R+518),1);
}
B4964f3:{NFSU2_TR(0x4964f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4964f4:{NFSU2_TR(0x4964f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4964f5:L4964f5:{c.instructions+=6;NFSU2_TR(0x4964f5);
__builtin_memmove((R+4),gp(0x8635aa),1);
}
B4964fb:{NFSU2_TR(0x4964fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4964fd:{NFSU2_TR(0x4964fd);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4964ff:{NFSU2_TR(0x4964ff);
__builtin_memmove((R+0),(R+518),1);
}
B496502:{NFSU2_TR(0x496502);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496503:{NFSU2_TR(0x496503);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496504:L496504:{c.instructions+=6;NFSU2_TR(0x496504);
__builtin_memmove((R+4),gp(0x8635ab),1);
}
B49650a:{NFSU2_TR(0x49650a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49650c:{NFSU2_TR(0x49650c);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49650e:{NFSU2_TR(0x49650e);
__builtin_memmove((R+0),(R+518),1);
}
B496511:{NFSU2_TR(0x496511);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496512:{NFSU2_TR(0x496512);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496513:L496513:{c.instructions+=6;NFSU2_TR(0x496513);
__builtin_memmove((R+4),gp(0x8635ac),1);
}
B496519:{NFSU2_TR(0x496519);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49651b:{NFSU2_TR(0x49651b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49651d:{NFSU2_TR(0x49651d);
__builtin_memmove((R+0),(R+518),1);
}
B496520:{NFSU2_TR(0x496520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496521:{NFSU2_TR(0x496521);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496522:L496522:{c.instructions+=6;NFSU2_TR(0x496522);
__builtin_memmove((R+4),gp(0x8635ad),1);
}
B496528:{NFSU2_TR(0x496528);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49652a:{NFSU2_TR(0x49652a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49652c:{NFSU2_TR(0x49652c);
__builtin_memmove((R+0),(R+518),1);
}
B49652f:{NFSU2_TR(0x49652f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496530:{NFSU2_TR(0x496530);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496531:L496531:{c.instructions+=6;NFSU2_TR(0x496531);
__builtin_memmove((R+4),gp(0x8635ae),1);
}
B496537:{NFSU2_TR(0x496537);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496539:{NFSU2_TR(0x496539);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49653b:{NFSU2_TR(0x49653b);
__builtin_memmove((R+0),(R+518),1);
}
B49653e:{NFSU2_TR(0x49653e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49653f:{NFSU2_TR(0x49653f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496540:L496540:{c.instructions+=6;NFSU2_TR(0x496540);
__builtin_memmove((R+4),gp(0x8635b0),1);
}
B496546:{NFSU2_TR(0x496546);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496548:{NFSU2_TR(0x496548);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49654a:{NFSU2_TR(0x49654a);
__builtin_memmove((R+0),(R+518),1);
}
B49654d:{NFSU2_TR(0x49654d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49654e:{NFSU2_TR(0x49654e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49654f:L49654f:{c.instructions+=6;NFSU2_TR(0x49654f);
__builtin_memmove((R+4),gp(0x8635b2),1);
}
B496555:{NFSU2_TR(0x496555);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496557:{NFSU2_TR(0x496557);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B496559:{NFSU2_TR(0x496559);
__builtin_memmove((R+0),(R+518),1);
}
B49655c:{NFSU2_TR(0x49655c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49655d:{NFSU2_TR(0x49655d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49655e:L49655e:{c.instructions+=6;NFSU2_TR(0x49655e);
__builtin_memmove((R+4),gp(0x8635b3),1);
}
B496564:{NFSU2_TR(0x496564);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496566:{NFSU2_TR(0x496566);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B496568:{NFSU2_TR(0x496568);
__builtin_memmove((R+0),(R+518),1);
}
B49656b:{NFSU2_TR(0x49656b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49656c:{NFSU2_TR(0x49656c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49656d:L49656d:{c.instructions+=6;NFSU2_TR(0x49656d);
__builtin_memmove((R+4),gp(0x8635b5),1);
}
B496573:{NFSU2_TR(0x496573);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496575:{NFSU2_TR(0x496575);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B496577:{NFSU2_TR(0x496577);
__builtin_memmove((R+0),(R+518),1);
}
B49657a:{NFSU2_TR(0x49657a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49657b:{NFSU2_TR(0x49657b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49657c:L49657c:{c.instructions+=6;NFSU2_TR(0x49657c);
__builtin_memmove((R+4),gp(0x8635b6),1);
}
B496582:{NFSU2_TR(0x496582);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496584:{NFSU2_TR(0x496584);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B496586:{NFSU2_TR(0x496586);
__builtin_memmove((R+0),(R+518),1);
}
B496589:{NFSU2_TR(0x496589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B49658a:{NFSU2_TR(0x49658a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49658b:L49658b:{c.instructions+=6;NFSU2_TR(0x49658b);
__builtin_memmove((R+4),gp(0x8635b4),1);
}
B496591:{NFSU2_TR(0x496591);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B496593:{NFSU2_TR(0x496593);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B496595:{NFSU2_TR(0x496595);
__builtin_memmove((R+0),(R+518),1);
}
B496598:{NFSU2_TR(0x496598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496599:{NFSU2_TR(0x496599);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49659a:L49659a:{c.instructions+=6;NFSU2_TR(0x49659a);
__builtin_memmove((R+4),gp(0x8635b7),1);
}
B4965a0:{NFSU2_TR(0x4965a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4965a2:{NFSU2_TR(0x4965a2);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4965a4:{NFSU2_TR(0x4965a4);
__builtin_memmove((R+0),(R+518),1);
}
B4965a7:{NFSU2_TR(0x4965a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4965a8:{NFSU2_TR(0x4965a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4965a9:L4965a9:{c.instructions+=4;NFSU2_TR(0x4965a9);
__builtin_memmove((R+4),gp(0x8635b8),1);
}
B4965af:{NFSU2_TR(0x4965af);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4965b1:{NFSU2_TR(0x4965b1);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4965b3:{NFSU2_TR(0x4965b3);
__builtin_memmove((R+0),(R+518),1);
}
B4965b6:L4965b6:{c.instructions+=2;NFSU2_TR(0x4965b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4965b7:{NFSU2_TR(0x4965b7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4965f0:L4965f0:{c.instructions+=3;NFSU2_TR(0x4965f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4965f4:{NFSU2_TR(0x4965f4);
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
B4965f7:{NFSU2_TR(0x4965f7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L496651;}}
}
B4965f9:L4965f9:{c.instructions+=1;NFSU2_TR(0x4965f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x496658ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B496600:L496600:{c.instructions+=2;NFSU2_TR(0x496600);
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
B496602:{NFSU2_TR(0x496602);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496603:L496603:{c.instructions+=2;NFSU2_TR(0x496603);
w4(R+0,u32(0x1ull));
}
B496608:{NFSU2_TR(0x496608);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496609:L496609:{c.instructions+=2;NFSU2_TR(0x496609);
w4(R+0,u32(0x2ull));
}
B49660e:{NFSU2_TR(0x49660e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49660f:L49660f:{c.instructions+=2;NFSU2_TR(0x49660f);
w4(R+0,u32(0x3ull));
}
B496614:{NFSU2_TR(0x496614);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496615:L496615:{c.instructions+=2;NFSU2_TR(0x496615);
w4(R+0,u32(0x4ull));
}
B49661a:{NFSU2_TR(0x49661a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49661b:L49661b:{c.instructions+=2;NFSU2_TR(0x49661b);
w4(R+0,u32(0x5ull));
}
B496620:{NFSU2_TR(0x496620);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496621:L496621:{c.instructions+=2;NFSU2_TR(0x496621);
w4(R+0,u32(0xdull));
}
B496626:{NFSU2_TR(0x496626);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496627:L496627:{c.instructions+=2;NFSU2_TR(0x496627);
w4(R+0,u32(0x6ull));
}
B49662c:{NFSU2_TR(0x49662c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49662d:L49662d:{c.instructions+=2;NFSU2_TR(0x49662d);
w4(R+0,u32(0x7ull));
}
B496632:{NFSU2_TR(0x496632);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496633:L496633:{c.instructions+=2;NFSU2_TR(0x496633);
w4(R+0,u32(0x8ull));
}
B496638:{NFSU2_TR(0x496638);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496639:L496639:{c.instructions+=2;NFSU2_TR(0x496639);
w4(R+0,u32(0xbull));
}
B49663e:{NFSU2_TR(0x49663e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49663f:L49663f:{c.instructions+=2;NFSU2_TR(0x49663f);
w4(R+0,u32(0x9ull));
}
B496644:{NFSU2_TR(0x496644);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496645:L496645:{c.instructions+=2;NFSU2_TR(0x496645);
w4(R+0,u32(0xaull));
}
B49664a:{NFSU2_TR(0x49664a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49664b:L49664b:{c.instructions+=2;NFSU2_TR(0x49664b);
w4(R+0,u32(0xcull));
}
B496650:{NFSU2_TR(0x496650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496651:L496651:{c.instructions+=2;NFSU2_TR(0x496651);
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
B496654:{NFSU2_TR(0x496654);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966a0:L4966a0:{c.instructions+=3;NFSU2_TR(0x4966a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4966a4:{NFSU2_TR(0x4966a4);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x10ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4966a7:{NFSU2_TR(0x4966a7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L496711;}}
}
B4966a9:L4966a9:{c.instructions+=1;NFSU2_TR(0x4966a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x496718ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4966b0:L4966b0:{c.instructions+=2;NFSU2_TR(0x4966b0);
w4(R+0,u32(0x268d063cull));
}
B4966b5:{NFSU2_TR(0x4966b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966b6:L4966b6:{c.instructions+=2;NFSU2_TR(0x4966b6);
w4(R+0,u32(0x40c91ba7ull));
}
B4966bb:{NFSU2_TR(0x4966bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966bc:L4966bc:{c.instructions+=2;NFSU2_TR(0x4966bc);
w4(R+0,u32(0xfda6758ull));
}
B4966c1:{NFSU2_TR(0x4966c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966c2:L4966c2:{c.instructions+=2;NFSU2_TR(0x4966c2);
w4(R+0,u32(0x59ecb2c2ull));
}
B4966c7:{NFSU2_TR(0x4966c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966c8:L4966c8:{c.instructions+=2;NFSU2_TR(0x4966c8);
w4(R+0,u32(0xba613729ull));
}
B4966cd:{NFSU2_TR(0x4966cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966ce:L4966ce:{c.instructions+=2;NFSU2_TR(0x4966ce);
w4(R+0,u32(0xb46377bcull));
}
B4966d3:{NFSU2_TR(0x4966d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966d4:L4966d4:{c.instructions+=2;NFSU2_TR(0x4966d4);
w4(R+0,u32(0x2e37e28bull));
}
B4966d9:{NFSU2_TR(0x4966d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966da:L4966da:{c.instructions+=2;NFSU2_TR(0x4966da);
w4(R+0,u32(0xb4636fa7ull));
}
B4966df:{NFSU2_TR(0x4966df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966e0:L4966e0:{c.instructions+=2;NFSU2_TR(0x4966e0);
w4(R+0,u32(0x373dad1aull));
}
B4966e5:{NFSU2_TR(0x4966e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966e6:L4966e6:{c.instructions+=2;NFSU2_TR(0x4966e6);
w4(R+0,u32(0x40c7f697ull));
}
B4966eb:{NFSU2_TR(0x4966eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966ec:L4966ec:{c.instructions+=2;NFSU2_TR(0x4966ec);
w4(R+0,u32(0xb46342baull));
}
B4966f1:{NFSU2_TR(0x4966f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966f2:L4966f2:{c.instructions+=2;NFSU2_TR(0x4966f2);
w4(R+0,u32(0xd6f5819bull));
}
B4966f7:{NFSU2_TR(0x4966f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966f8:L4966f8:{c.instructions+=2;NFSU2_TR(0x4966f8);
w4(R+0,u32(0x93ff4a6eull));
}
B4966fd:{NFSU2_TR(0x4966fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4966fe:L4966fe:{c.instructions+=2;NFSU2_TR(0x4966fe);
w4(R+0,u32(0x9d53bd10ull));
}
B496703:{NFSU2_TR(0x496703);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496704:L496704:{c.instructions+=2;NFSU2_TR(0x496704);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f6b4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49670c:{NFSU2_TR(0x49670c);
TAIL_STATIC(0x505450u,505);
}
B496711:L496711:{c.instructions+=2;NFSU2_TR(0x496711);
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
B496714:{NFSU2_TR(0x496714);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496760:L496760:{c.instructions+=11;NFSU2_TR(0x496760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x18ull))));
}
B496763:{NFSU2_TR(0x496763);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496764:{NFSU2_TR(0x496764);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496765:{NFSU2_TR(0x496765);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496769:{NFSU2_TR(0x496769);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49676d:{NFSU2_TR(0x49676d);
__builtin_memmove((R+24),(R+4),4);
}
B49676f:{NFSU2_TR(0x49676f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496770:{NFSU2_TR(0x496770);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B496774:{NFSU2_TR(0x496774);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496775:{NFSU2_TR(0x496775);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496776:{NFSU2_TR(0x496776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49677bull));
TAIL_STATIC(0x51d070u,51d);
}
B49677b:L49677b:{c.instructions+=6;NFSU2_TR(0x49677b);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B49677f:{NFSU2_TR(0x49677f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496780:{NFSU2_TR(0x496780);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496784:{NFSU2_TR(0x496784);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496785:{NFSU2_TR(0x496785);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496786:{NFSU2_TR(0x496786);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49678bull));
TAIL_STATIC(0x51d170u,51d);
}
B49678b:L49678b:{c.instructions+=7;NFSU2_TR(0x49678b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49678e:{NFSU2_TR(0x49678e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B496792:{NFSU2_TR(0x496792);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496793:{NFSU2_TR(0x496793);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B496797:{NFSU2_TR(0x496797);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496798:{NFSU2_TR(0x496798);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496799:{NFSU2_TR(0x496799);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49679eull));
TAIL_STATIC(0x51d620u,51d);
}
B49679e:L49679e:{c.instructions+=8;NFSU2_TR(0x49679e);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4967a2:{NFSU2_TR(0x4967a2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4967a6:{NFSU2_TR(0x4967a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4967a9:{NFSU2_TR(0x4967a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4967aa:{NFSU2_TR(0x4967aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4967ab:{NFSU2_TR(0x4967ab);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4967ad:{NFSU2_TR(0x4967ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4967b0:{NFSU2_TR(0x4967b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4967e7;}}
}
B4967b2:L4967b2:{c.instructions+=5;NFSU2_TR(0x4967b2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4967b6:{NFSU2_TR(0x4967b6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4967ba:{NFSU2_TR(0x4967ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4967bc:{NFSU2_TR(0x4967bc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4967bf:{NFSU2_TR(0x4967bf);
if(r1(R+514)){{goto L4967e7;}}
}
B4967c1:L4967c1:{c.instructions+=5;NFSU2_TR(0x4967c1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4967c5:{NFSU2_TR(0x4967c5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4967c9:{NFSU2_TR(0x4967c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4967cb:{NFSU2_TR(0x4967cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4967ce:{NFSU2_TR(0x4967ce);
if(r1(R+514)){{goto L4967e7;}}
}
B4967d0:L4967d0:{c.instructions+=5;NFSU2_TR(0x4967d0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4967d4:{NFSU2_TR(0x4967d4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4967d8:{NFSU2_TR(0x4967d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4967da:{NFSU2_TR(0x4967da);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4967dd:{NFSU2_TR(0x4967dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4967e7;}}
}
B4967df:L4967df:{c.instructions+=3;NFSU2_TR(0x4967df);
w1(R+0,u8(0x1ull));
}
B4967e1:{NFSU2_TR(0x4967e1);
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
B4967e4:{NFSU2_TR(0x4967e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4967e7:L4967e7:{c.instructions+=3;NFSU2_TR(0x4967e7);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B4967e9:{NFSU2_TR(0x4967e9);
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
B4967ec:{NFSU2_TR(0x4967ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4967f0:L4967f0:{c.instructions+=8;NFSU2_TR(0x4967f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4967f4:{NFSU2_TR(0x4967f4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4967f5:{NFSU2_TR(0x4967f5);
__builtin_memmove((R+24),(R+4),4);
}
B4967f7:{NFSU2_TR(0x4967f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4967fa:{NFSU2_TR(0x4967fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4967fc:{NFSU2_TR(0x4967fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4967ff:{NFSU2_TR(0x4967ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496800:{NFSU2_TR(0x496800);
if(r1(R+518)){{goto L496835;}}
}
B496802:L496802:{c.instructions+=1;NFSU2_TR(0x496802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496807ull));
TAIL_STATIC(0x50ca50u,50c);
}
B496807:L496807:{c.instructions+=9;NFSU2_TR(0x496807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49680a:{NFSU2_TR(0x49680a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49680d:{NFSU2_TR(0x49680d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496810:{NFSU2_TR(0x496810);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496813:{NFSU2_TR(0x496813);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496816:{NFSU2_TR(0x496816);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496817:{NFSU2_TR(0x496817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496818:{NFSU2_TR(0x496818);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496819:{NFSU2_TR(0x496819);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49681eull));
TAIL_STATIC(0x51d4d0u,51d);
}
B49681e:L49681e:{c.instructions+=5;NFSU2_TR(0x49681e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496821:{NFSU2_TR(0x496821);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496823:{NFSU2_TR(0x496823);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496828:{NFSU2_TR(0x496828);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496829:{NFSU2_TR(0x496829);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49682eull));
TAIL_STATIC(0x51cf70u,51c);
}
B49682e:L49682e:{c.instructions+=3;NFSU2_TR(0x49682e);
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
B496831:{NFSU2_TR(0x496831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496832:{NFSU2_TR(0x496832);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496835:L496835:{c.instructions+=1;NFSU2_TR(0x496835);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49683aull));
TAIL_STATIC(0x50ca00u,50c);
}
B49683a:L49683a:{c.instructions+=3;NFSU2_TR(0x49683a);
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
B49683d:{NFSU2_TR(0x49683d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49683e:{NFSU2_TR(0x49683e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496850:L496850:{c.instructions+=6;NFSU2_TR(0x496850);
__builtin_memmove((R+0),(R+4),4);
}
B496852:{NFSU2_TR(0x496852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496855:{NFSU2_TR(0x496855);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496859:{NFSU2_TR(0x496859);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49685c:{NFSU2_TR(0x49685c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49685d:{NFSU2_TR(0x49685d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496862ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496760u);}goto L496760;}
}
B496862:L496862:{c.instructions+=3;NFSU2_TR(0x496862);
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
B496864:{NFSU2_TR(0x496864);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B496867:{NFSU2_TR(0x496867);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496870:L496870:{c.instructions+=7;NFSU2_TR(0x496870);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B496873:{NFSU2_TR(0x496873);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496874:{NFSU2_TR(0x496874);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496878:{NFSU2_TR(0x496878);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496879:{NFSU2_TR(0x496879);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49687a:{NFSU2_TR(0x49687a);
u8 U[4];
w4(U+0,u32(0x78f6e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49687f:{NFSU2_TR(0x49687f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496884ull));
TAIL_STATIC(0x50b990u,50b);
}
B496884:L496884:{c.instructions+=4;NFSU2_TR(0x496884);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496888:{NFSU2_TR(0x496888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496889:{NFSU2_TR(0x496889);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49688a:{NFSU2_TR(0x49688a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49688full));
TAIL_STATIC(0x5379c0u,537);
}
B49688f:L49688f:{c.instructions+=2;NFSU2_TR(0x49688f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496890:{NFSU2_TR(0x496890);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496895ull));
TAIL_STATIC(0x50ca00u,50c);
}
B496895:L496895:{c.instructions+=3;NFSU2_TR(0x496895);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496896:{NFSU2_TR(0x496896);
u8 U[4];
w4(U+0,u32(0x78f6dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49689b:{NFSU2_TR(0x49689b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968a0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4968a0:L4968a0:{c.instructions+=3;NFSU2_TR(0x4968a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968a1:{NFSU2_TR(0x4968a1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968a2:{NFSU2_TR(0x4968a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968a7ull));
TAIL_STATIC(0x5379c0u,537);
}
B4968a7:L4968a7:{c.instructions+=2;NFSU2_TR(0x4968a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968a8:{NFSU2_TR(0x4968a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968adull));
TAIL_STATIC(0x50ca00u,50c);
}
B4968ad:L4968ad:{c.instructions+=3;NFSU2_TR(0x4968ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968ae:{NFSU2_TR(0x4968ae);
u8 U[4];
w4(U+0,u32(0x78f6d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968b3:{NFSU2_TR(0x4968b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968b8ull));
TAIL_STATIC(0x50b990u,50b);
}
B4968b8:L4968b8:{c.instructions+=3;NFSU2_TR(0x4968b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968b9:{NFSU2_TR(0x4968b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968ba:{NFSU2_TR(0x4968ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968bfull));
TAIL_STATIC(0x5379c0u,537);
}
B4968bf:L4968bf:{c.instructions+=2;NFSU2_TR(0x4968bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968c0:{NFSU2_TR(0x4968c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968c5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4968c5:L4968c5:{c.instructions+=3;NFSU2_TR(0x4968c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968c6:{NFSU2_TR(0x4968c6);
u8 U[4];
w4(U+0,u32(0x78f6c4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968cb:{NFSU2_TR(0x4968cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968d0ull));
TAIL_STATIC(0x50b990u,50b);
}
B4968d0:L4968d0:{c.instructions+=4;NFSU2_TR(0x4968d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
}
B4968d3:{NFSU2_TR(0x4968d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968d4:{NFSU2_TR(0x4968d4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968d5:{NFSU2_TR(0x4968d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968daull));
TAIL_STATIC(0x5379c0u,537);
}
B4968da:L4968da:{c.instructions+=2;NFSU2_TR(0x4968da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968db:{NFSU2_TR(0x4968db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968e0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4968e0:L4968e0:{c.instructions+=6;NFSU2_TR(0x4968e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968e1:{NFSU2_TR(0x4968e1);
u8 U[4];
w4(U+0,u32(0x78f6d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968e6:{NFSU2_TR(0x4968e6);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4968ea:{NFSU2_TR(0x4968ea);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968ec:{NFSU2_TR(0x4968ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968ed:{NFSU2_TR(0x4968ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4968f2ull));
TAIL_STATIC(0x50c960u,50c);
}
B4968f2:L4968f2:{c.instructions+=5;NFSU2_TR(0x4968f2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4968f5:{NFSU2_TR(0x4968f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4968f9:{NFSU2_TR(0x4968f9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968fb:{NFSU2_TR(0x4968fb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4968fc:{NFSU2_TR(0x4968fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496901ull));
TAIL_STATIC(0x505450u,505);
}
B496901:L496901:{c.instructions+=4;NFSU2_TR(0x496901);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496904:{NFSU2_TR(0x496904);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496905:{NFSU2_TR(0x496905);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496906:{NFSU2_TR(0x496906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49690bull));
TAIL_STATIC(0x51cda0u,51c);
}
B49690b:L49690b:{c.instructions+=5;NFSU2_TR(0x49690b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B49690e:{NFSU2_TR(0x49690e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49690f:{NFSU2_TR(0x49690f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496910:{NFSU2_TR(0x496910);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B496913:{NFSU2_TR(0x496913);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496920:L496920:{c.instructions+=8;NFSU2_TR(0x496920);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496924:{NFSU2_TR(0x496924);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B496927:{NFSU2_TR(0x496927);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496929:{NFSU2_TR(0x496929);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49692a:{NFSU2_TR(0x49692a);
__builtin_memmove((R+24),(R+4),4);
}
B49692c:{NFSU2_TR(0x49692c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49692d:{NFSU2_TR(0x49692d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B496930:{NFSU2_TR(0x496930);
if(r1(R+518)){{goto L4969c0;}}
}
B496936:L496936:{c.instructions+=4;NFSU2_TR(0x496936);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496939:{NFSU2_TR(0x496939);
u8 U[4];
w4(U+0,u32(0xb90f50bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49693e:{NFSU2_TR(0x49693e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49693f:{NFSU2_TR(0x49693f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496944ull));
TAIL_STATIC(0x50c990u,50c);
}
B496944:L496944:{c.instructions+=5;NFSU2_TR(0x496944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496947:{NFSU2_TR(0x496947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49694a:{NFSU2_TR(0x49694a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49694b:{NFSU2_TR(0x49694b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49694c:{NFSU2_TR(0x49694c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496951ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496951:L496951:{c.instructions+=4;NFSU2_TR(0x496951);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496954:{NFSU2_TR(0x496954);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496957:{NFSU2_TR(0x496957);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496959:{NFSU2_TR(0x496959);
if(r1(R+518)){{goto L496984;}}
}
B49695b:L49695b:{c.instructions+=4;NFSU2_TR(0x49695b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B49695f:{NFSU2_TR(0x49695f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496960:{NFSU2_TR(0x496960);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496961:{NFSU2_TR(0x496961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496966ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496966:L496966:{c.instructions+=3;NFSU2_TR(0x496966);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496969:{NFSU2_TR(0x496969);
__builtin_memmove((R+4),(R+0),4);
}
B49696b:{NFSU2_TR(0x49696b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496970ull));
TAIL_STATIC(0x5054d0u,505);
}
B496970:L496970:{c.instructions+=5;NFSU2_TR(0x496970);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B496975:{NFSU2_TR(0x496975);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x3c000000ull))));
}
B49697a:{NFSU2_TR(0x49697a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49697b:{NFSU2_TR(0x49697b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49697c:{NFSU2_TR(0x49697c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496981ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496981:L496981:{c.instructions+=1;NFSU2_TR(0x496981);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496984:L496984:{c.instructions+=3;NFSU2_TR(0x496984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496987:{NFSU2_TR(0x496987);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496989:{NFSU2_TR(0x496989);
if(r1(R+518)){{goto L496a34;}}
}
B49698f:L49698f:{c.instructions+=4;NFSU2_TR(0x49698f);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B496993:{NFSU2_TR(0x496993);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496994:{NFSU2_TR(0x496994);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496995:{NFSU2_TR(0x496995);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49699aull));
TAIL_STATIC(0x50ccc0u,50c);
}
B49699a:L49699a:{c.instructions+=3;NFSU2_TR(0x49699a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49699d:{NFSU2_TR(0x49699d);
__builtin_memmove((R+4),(R+0),4);
}
B49699f:{NFSU2_TR(0x49699f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4969a4ull));
TAIL_STATIC(0x5054d0u,505);
}
B4969a4:L4969a4:{c.instructions+=5;NFSU2_TR(0x4969a4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B4969a9:{NFSU2_TR(0x4969a9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x3c000000ull))));
}
B4969ae:{NFSU2_TR(0x4969ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969af:{NFSU2_TR(0x4969af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969b0:{NFSU2_TR(0x4969b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4969b5ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4969b5:L4969b5:{c.instructions+=5;NFSU2_TR(0x4969b5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4969b8:{NFSU2_TR(0x4969b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4969b9:{NFSU2_TR(0x4969b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4969ba:{NFSU2_TR(0x4969ba);
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
B4969bd:{NFSU2_TR(0x4969bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4969c0:L4969c0:{c.instructions+=4;NFSU2_TR(0x4969c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4969c3:{NFSU2_TR(0x4969c3);
u8 U[4];
w4(U+0,u32(0x62bc0dfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969c8:{NFSU2_TR(0x4969c8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969c9:{NFSU2_TR(0x4969c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4969ceull));
TAIL_STATIC(0x50c990u,50c);
}
B4969ce:L4969ce:{c.instructions+=5;NFSU2_TR(0x4969ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4969d1:{NFSU2_TR(0x4969d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4969d4:{NFSU2_TR(0x4969d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969d5:{NFSU2_TR(0x4969d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969d6:{NFSU2_TR(0x4969d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4969dbull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4969db:L4969db:{c.instructions+=4;NFSU2_TR(0x4969db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4969de:{NFSU2_TR(0x4969de);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4969e1:{NFSU2_TR(0x4969e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4969e3:{NFSU2_TR(0x4969e3);
if(r1(R+518)){{goto L496a09;}}
}
B4969e5:L4969e5:{c.instructions+=4;NFSU2_TR(0x4969e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4969e9:{NFSU2_TR(0x4969e9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969ea:{NFSU2_TR(0x4969ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4969eb:{NFSU2_TR(0x4969eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4969f0ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B4969f0:L4969f0:{c.instructions+=3;NFSU2_TR(0x4969f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4969f3:{NFSU2_TR(0x4969f3);
__builtin_memmove((R+4),(R+0),4);
}
B4969f5:{NFSU2_TR(0x4969f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4969faull));
TAIL_STATIC(0x5054d0u,505);
}
B4969fa:L4969fa:{c.instructions+=4;NFSU2_TR(0x4969fa);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff000000ull))));
}
B4969ff:{NFSU2_TR(0x4969ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a00:{NFSU2_TR(0x496a00);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a01:{NFSU2_TR(0x496a01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a06ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496a06:L496a06:{c.instructions+=1;NFSU2_TR(0x496a06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496a09:L496a09:{c.instructions+=3;NFSU2_TR(0x496a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496a0c:{NFSU2_TR(0x496a0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496a0e:{NFSU2_TR(0x496a0e);
if(r1(R+518)){{goto L496a34;}}
}
B496a10:L496a10:{c.instructions+=4;NFSU2_TR(0x496a10);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496a14:{NFSU2_TR(0x496a14);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a15:{NFSU2_TR(0x496a15);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a16:{NFSU2_TR(0x496a16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a1bull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496a1b:L496a1b:{c.instructions+=3;NFSU2_TR(0x496a1b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496a1e:{NFSU2_TR(0x496a1e);
__builtin_memmove((R+4),(R+0),4);
}
B496a20:{NFSU2_TR(0x496a20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a25ull));
TAIL_STATIC(0x5054d0u,505);
}
B496a25:L496a25:{c.instructions+=4;NFSU2_TR(0x496a25);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff000000ull))));
}
B496a2a:{NFSU2_TR(0x496a2a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a2b:{NFSU2_TR(0x496a2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a2c:{NFSU2_TR(0x496a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a31ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496a31:L496a31:{c.instructions+=1;NFSU2_TR(0x496a31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496a34:L496a34:{c.instructions+=4;NFSU2_TR(0x496a34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496a35:{NFSU2_TR(0x496a35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496a36:{NFSU2_TR(0x496a36);
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
B496a39:{NFSU2_TR(0x496a39);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496a40:L496a40:{c.instructions+=7;NFSU2_TR(0x496a40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B496a43:{NFSU2_TR(0x496a43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a44:{NFSU2_TR(0x496a44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a45:{NFSU2_TR(0x496a45);
__builtin_memmove((R+24),(R+4),4);
}
B496a47:{NFSU2_TR(0x496a47);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496a4a:{NFSU2_TR(0x496a4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a4b:{NFSU2_TR(0x496a4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a50ull));
TAIL_STATIC(0x50ca50u,50c);
}
B496a50:L496a50:{c.instructions+=3;NFSU2_TR(0x496a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496a53:{NFSU2_TR(0x496a53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a54:{NFSU2_TR(0x496a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a59ull));
TAIL_STATIC(0x50ca50u,50c);
}
B496a59:L496a59:{c.instructions+=3;NFSU2_TR(0x496a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496a5c:{NFSU2_TR(0x496a5c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a5d:{NFSU2_TR(0x496a5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a62ull));
TAIL_STATIC(0x50ca50u,50c);
}
B496a62:L496a62:{c.instructions+=3;NFSU2_TR(0x496a62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496a65:{NFSU2_TR(0x496a65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a66:{NFSU2_TR(0x496a66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a6bull));
TAIL_STATIC(0x50ca00u,50c);
}
B496a6b:L496a6b:{c.instructions+=5;NFSU2_TR(0x496a6b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B496a6f:{NFSU2_TR(0x496a6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B496a71:{NFSU2_TR(0x496a71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496a74:{NFSU2_TR(0x496a74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496a76:{NFSU2_TR(0x496a76);
if(r1(R+518)){{goto L496ae3;}}
}
B496a78:L496a78:{c.instructions+=3;NFSU2_TR(0x496a78);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496a7b:{NFSU2_TR(0x496a7b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496a7d:{NFSU2_TR(0x496a7d);
if(r1(R+518)){{goto L496ae3;}}
}
B496a7f:L496a7f:{c.instructions+=2;NFSU2_TR(0x496a7f);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B496a83:{NFSU2_TR(0x496a83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496ae3;}}
}
B496a85:L496a85:{c.instructions+=4;NFSU2_TR(0x496a85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496a88:{NFSU2_TR(0x496a88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a89:{NFSU2_TR(0x496a89);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a8a:{NFSU2_TR(0x496a8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496a8full));
TAIL_STATIC(0x50ca50u,50c);
}
B496a8f:L496a8f:{c.instructions+=6;NFSU2_TR(0x496a8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496a92:{NFSU2_TR(0x496a92);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4348ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B496a99:{NFSU2_TR(0x496a99);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a9b:{NFSU2_TR(0x496a9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496a9c:{NFSU2_TR(0x496a9c);
u8 U[4];
w4(U+0,u32(0x78f6f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496aa1:{NFSU2_TR(0x496aa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496aa6ull));
TAIL_STATIC(0x50b990u,50b);
}
B496aa6:L496aa6:{c.instructions+=4;NFSU2_TR(0x496aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496aa9:{NFSU2_TR(0x496aa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496aaa:{NFSU2_TR(0x496aaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496aab:{NFSU2_TR(0x496aab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496ab0ull));
TAIL_STATIC(0x537a60u,537);
}
B496ab0:L496ab0:{c.instructions+=5;NFSU2_TR(0x496ab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496ab3:{NFSU2_TR(0x496ab3);
u8 U[4];
w4(U+0,u32(0xb90f50bbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ab8:{NFSU2_TR(0x496ab8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ab9:{NFSU2_TR(0x496ab9);
__builtin_memmove((R+28),(R+0),4);
}
B496abb:{NFSU2_TR(0x496abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496ac0ull));
TAIL_STATIC(0x50c990u,50c);
}
B496ac0:L496ac0:{c.instructions+=4;NFSU2_TR(0x496ac0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496ac4:{NFSU2_TR(0x496ac4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ac5:{NFSU2_TR(0x496ac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ac6:{NFSU2_TR(0x496ac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496acbull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496acb:L496acb:{c.instructions+=3;NFSU2_TR(0x496acb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B496ace:{NFSU2_TR(0x496ace);
__builtin_memmove((R+4),(R+0),4);
}
B496ad0:{NFSU2_TR(0x496ad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496ad5ull));
TAIL_STATIC(0x5054d0u,505);
}
B496ad5:L496ad5:{c.instructions+=4;NFSU2_TR(0x496ad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496ad8:{NFSU2_TR(0x496ad8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ad9:{NFSU2_TR(0x496ad9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ada:{NFSU2_TR(0x496ada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496adfull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496adf:L496adf:{c.instructions+=2;NFSU2_TR(0x496adf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496ae2:{NFSU2_TR(0x496ae2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496ae3:L496ae3:{c.instructions+=2;NFSU2_TR(0x496ae3);
__builtin_memmove((R+4),(R+12),4);
}
B496ae5:{NFSU2_TR(0x496ae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496aeaull));
TAIL_STATIC(0x500de0u,500);
}
B496aea:L496aea:{c.instructions+=2;NFSU2_TR(0x496aea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496aeb:{NFSU2_TR(0x496aeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496af0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4966a0u);}goto L4966a0;}
}
B496af0:L496af0:{c.instructions+=4;NFSU2_TR(0x496af0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496af3:{NFSU2_TR(0x496af3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496af4:{NFSU2_TR(0x496af4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496af5:{NFSU2_TR(0x496af5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496afaull));
TAIL_STATIC(0x50c900u,50c);
}
B496afa:L496afa:{c.instructions+=3;NFSU2_TR(0x496afa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496afd:{NFSU2_TR(0x496afd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496afe:{NFSU2_TR(0x496afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b03ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4964d0u);}goto L4964d0;}
}
B496b03:L496b03:{c.instructions+=4;NFSU2_TR(0x496b03);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496b06:{NFSU2_TR(0x496b06);
__builtin_memmove((R+4),(R+24),4);
}
B496b08:{NFSU2_TR(0x496b08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b09:{NFSU2_TR(0x496b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496920u);}goto L496920;}
}
B496b0e:L496b0e:{c.instructions+=4;NFSU2_TR(0x496b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496b0f:{NFSU2_TR(0x496b0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B496b10:{NFSU2_TR(0x496b10);
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
B496b13:{NFSU2_TR(0x496b13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496b20:L496b20:{c.instructions+=7;NFSU2_TR(0x496b20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B496b23:{NFSU2_TR(0x496b23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b24:{NFSU2_TR(0x496b24);
__builtin_memmove((R+24),(R+4),4);
}
B496b26:{NFSU2_TR(0x496b26);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B496b29:{NFSU2_TR(0x496b29);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496b2b:{NFSU2_TR(0x496b2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b2c:{NFSU2_TR(0x496b2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496bbb;}}
}
B496b32:L496b32:{c.instructions+=3;NFSU2_TR(0x496b32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496b35:{NFSU2_TR(0x496b35);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b36:{NFSU2_TR(0x496b36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b3bull));
TAIL_STATIC(0x52cef0u,52c);
}
B496b3b:L496b3b:{c.instructions+=7;NFSU2_TR(0x496b3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496b3e:{NFSU2_TR(0x496b3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496b41:{NFSU2_TR(0x496b41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b42:{NFSU2_TR(0x496b42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b43:{NFSU2_TR(0x496b43);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b45:{NFSU2_TR(0x496b45);
u8 U[4];
w4(U+0,u32(0x78f70cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b4a:{NFSU2_TR(0x496b4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b4full));
TAIL_STATIC(0x505450u,505);
}
B496b4f:L496b4f:{c.instructions+=3;NFSU2_TR(0x496b4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496b52:{NFSU2_TR(0x496b52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b53:{NFSU2_TR(0x496b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b58ull));
TAIL_STATIC(0x51cdc0u,51c);
}
B496b58:L496b58:{c.instructions+=4;NFSU2_TR(0x496b58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496b5b:{NFSU2_TR(0x496b5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496b5e:{NFSU2_TR(0x496b5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496b60:{NFSU2_TR(0x496b60);
if(r1(R+518)){{goto L496b86;}}
}
B496b62:L496b62:{c.instructions+=4;NFSU2_TR(0x496b62);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B496b66:{NFSU2_TR(0x496b66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b67:{NFSU2_TR(0x496b67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b68:{NFSU2_TR(0x496b68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b6dull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496b6d:L496b6d:{c.instructions+=3;NFSU2_TR(0x496b6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496b70:{NFSU2_TR(0x496b70);
__builtin_memmove((R+4),(R+0),4);
}
B496b72:{NFSU2_TR(0x496b72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b77ull));
TAIL_STATIC(0x5054d0u,505);
}
B496b77:L496b77:{c.instructions+=4;NFSU2_TR(0x496b77);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff000000ull))));
}
B496b7c:{NFSU2_TR(0x496b7c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b7d:{NFSU2_TR(0x496b7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b7e:{NFSU2_TR(0x496b7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b83ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496b83:L496b83:{c.instructions+=1;NFSU2_TR(0x496b83);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496b86:L496b86:{c.instructions+=3;NFSU2_TR(0x496b86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496b89:{NFSU2_TR(0x496b89);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496b8b:{NFSU2_TR(0x496b8b);
if(r1(R+518)){{goto L496c44;}}
}
B496b91:L496b91:{c.instructions+=4;NFSU2_TR(0x496b91);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496b95:{NFSU2_TR(0x496b95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b96:{NFSU2_TR(0x496b96);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496b97:{NFSU2_TR(0x496b97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496b9cull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496b9c:L496b9c:{c.instructions+=3;NFSU2_TR(0x496b9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496b9f:{NFSU2_TR(0x496b9f);
__builtin_memmove((R+4),(R+0),4);
}
B496ba1:{NFSU2_TR(0x496ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496ba6ull));
TAIL_STATIC(0x5054d0u,505);
}
B496ba6:L496ba6:{c.instructions+=4;NFSU2_TR(0x496ba6);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff000000ull))));
}
B496bab:{NFSU2_TR(0x496bab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bac:{NFSU2_TR(0x496bac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bad:{NFSU2_TR(0x496bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496bb2ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496bb2:L496bb2:{c.instructions+=5;NFSU2_TR(0x496bb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496bb5:{NFSU2_TR(0x496bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496bb6:{NFSU2_TR(0x496bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496bb7:{NFSU2_TR(0x496bb7);
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
B496bba:{NFSU2_TR(0x496bba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496bbb:L496bbb:{c.instructions+=3;NFSU2_TR(0x496bbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496bbe:{NFSU2_TR(0x496bbe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bbf:{NFSU2_TR(0x496bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496bc4ull));
TAIL_STATIC(0x52cef0u,52c);
}
B496bc4:L496bc4:{c.instructions+=7;NFSU2_TR(0x496bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496bc7:{NFSU2_TR(0x496bc7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496bca:{NFSU2_TR(0x496bca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bcb:{NFSU2_TR(0x496bcb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bcc:{NFSU2_TR(0x496bcc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bce:{NFSU2_TR(0x496bce);
u8 U[4];
w4(U+0,u32(0x78f6fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bd3:{NFSU2_TR(0x496bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496bd8ull));
TAIL_STATIC(0x505450u,505);
}
B496bd8:L496bd8:{c.instructions+=3;NFSU2_TR(0x496bd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496bdb:{NFSU2_TR(0x496bdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bdc:{NFSU2_TR(0x496bdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496be1ull));
TAIL_STATIC(0x51cdc0u,51c);
}
B496be1:L496be1:{c.instructions+=4;NFSU2_TR(0x496be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496be4:{NFSU2_TR(0x496be4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496be7:{NFSU2_TR(0x496be7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496be9:{NFSU2_TR(0x496be9);
if(r1(R+518)){{goto L496c14;}}
}
B496beb:L496beb:{c.instructions+=4;NFSU2_TR(0x496beb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496bef:{NFSU2_TR(0x496bef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bf0:{NFSU2_TR(0x496bf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496bf1:{NFSU2_TR(0x496bf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496bf6ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496bf6:L496bf6:{c.instructions+=3;NFSU2_TR(0x496bf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496bf9:{NFSU2_TR(0x496bf9);
__builtin_memmove((R+4),(R+0),4);
}
B496bfb:{NFSU2_TR(0x496bfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c00ull));
TAIL_STATIC(0x5054d0u,505);
}
B496c00:L496c00:{c.instructions+=5;NFSU2_TR(0x496c00);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B496c05:{NFSU2_TR(0x496c05);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x3c000000ull))));
}
B496c0a:{NFSU2_TR(0x496c0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c0b:{NFSU2_TR(0x496c0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c0c:{NFSU2_TR(0x496c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c11ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496c11:L496c11:{c.instructions+=1;NFSU2_TR(0x496c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496c14:L496c14:{c.instructions+=3;NFSU2_TR(0x496c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496c17:{NFSU2_TR(0x496c17);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496c19:{NFSU2_TR(0x496c19);
if(r1(R+518)){{goto L496c44;}}
}
B496c1b:L496c1b:{c.instructions+=4;NFSU2_TR(0x496c1b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B496c1f:{NFSU2_TR(0x496c1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c20:{NFSU2_TR(0x496c20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c21:{NFSU2_TR(0x496c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c26ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496c26:L496c26:{c.instructions+=3;NFSU2_TR(0x496c26);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496c29:{NFSU2_TR(0x496c29);
__builtin_memmove((R+4),(R+0),4);
}
B496c2b:{NFSU2_TR(0x496c2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c30ull));
TAIL_STATIC(0x5054d0u,505);
}
B496c30:L496c30:{c.instructions+=5;NFSU2_TR(0x496c30);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffffull))));
}
B496c35:{NFSU2_TR(0x496c35);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x3c000000ull))));
}
B496c3a:{NFSU2_TR(0x496c3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c3b:{NFSU2_TR(0x496c3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c3c:{NFSU2_TR(0x496c3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c41ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496c41:L496c41:{c.instructions+=1;NFSU2_TR(0x496c41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496c44:L496c44:{c.instructions+=4;NFSU2_TR(0x496c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496c45:{NFSU2_TR(0x496c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496c46:{NFSU2_TR(0x496c46);
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
B496c49:{NFSU2_TR(0x496c49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496c50:L496c50:{c.instructions+=7;NFSU2_TR(0x496c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B496c53:{NFSU2_TR(0x496c53);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c54:{NFSU2_TR(0x496c54);
__builtin_memmove((R+24),(R+4),4);
}
B496c56:{NFSU2_TR(0x496c56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496c59:{NFSU2_TR(0x496c59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c5a:{NFSU2_TR(0x496c5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c5b:{NFSU2_TR(0x496c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c60ull));
TAIL_STATIC(0x52cef0u,52c);
}
B496c60:L496c60:{c.instructions+=7;NFSU2_TR(0x496c60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496c63:{NFSU2_TR(0x496c63);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496c66:{NFSU2_TR(0x496c66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c67:{NFSU2_TR(0x496c67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c68:{NFSU2_TR(0x496c68);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c6a:{NFSU2_TR(0x496c6a);
u8 U[4];
w4(U+0,u32(0x78f720ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c6f:{NFSU2_TR(0x496c6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c74ull));
TAIL_STATIC(0x505450u,505);
}
B496c74:L496c74:{c.instructions+=3;NFSU2_TR(0x496c74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496c77:{NFSU2_TR(0x496c77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c78:{NFSU2_TR(0x496c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c7dull));
TAIL_STATIC(0x51cdc0u,51c);
}
B496c7d:L496c7d:{c.instructions+=4;NFSU2_TR(0x496c7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496c80:{NFSU2_TR(0x496c80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496c83:{NFSU2_TR(0x496c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496c85:{NFSU2_TR(0x496c85);
if(r1(R+518)){{goto L496cab;}}
}
B496c87:L496c87:{c.instructions+=4;NFSU2_TR(0x496c87);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B496c8b:{NFSU2_TR(0x496c8b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c8c:{NFSU2_TR(0x496c8c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496c8d:{NFSU2_TR(0x496c8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c92ull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496c92:L496c92:{c.instructions+=3;NFSU2_TR(0x496c92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496c95:{NFSU2_TR(0x496c95);
__builtin_memmove((R+4),(R+0),4);
}
B496c97:{NFSU2_TR(0x496c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496c9cull));
TAIL_STATIC(0x5054d0u,505);
}
B496c9c:L496c9c:{c.instructions+=4;NFSU2_TR(0x496c9c);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff000000ull))));
}
B496ca1:{NFSU2_TR(0x496ca1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ca2:{NFSU2_TR(0x496ca2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ca3:{NFSU2_TR(0x496ca3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496ca8ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496ca8:L496ca8:{c.instructions+=1;NFSU2_TR(0x496ca8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496cab:L496cab:{c.instructions+=3;NFSU2_TR(0x496cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496cae:{NFSU2_TR(0x496cae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496cb0:{NFSU2_TR(0x496cb0);
if(r1(R+518)){{goto L496cd6;}}
}
B496cb2:L496cb2:{c.instructions+=4;NFSU2_TR(0x496cb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496cb6:{NFSU2_TR(0x496cb6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496cb7:{NFSU2_TR(0x496cb7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496cb8:{NFSU2_TR(0x496cb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496cbdull));
TAIL_STATIC(0x50ccc0u,50c);
}
B496cbd:L496cbd:{c.instructions+=3;NFSU2_TR(0x496cbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496cc0:{NFSU2_TR(0x496cc0);
__builtin_memmove((R+4),(R+0),4);
}
B496cc2:{NFSU2_TR(0x496cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496cc7ull));
TAIL_STATIC(0x5054d0u,505);
}
B496cc7:L496cc7:{c.instructions+=4;NFSU2_TR(0x496cc7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff000000ull))));
}
B496ccc:{NFSU2_TR(0x496ccc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ccd:{NFSU2_TR(0x496ccd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496cce:{NFSU2_TR(0x496cce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496cd3ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B496cd3:L496cd3:{c.instructions+=1;NFSU2_TR(0x496cd3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496cd6:L496cd6:{c.instructions+=4;NFSU2_TR(0x496cd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496cd7:{NFSU2_TR(0x496cd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496cd8:{NFSU2_TR(0x496cd8);
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
B496cdb:{NFSU2_TR(0x496cdb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496ce0:L496ce0:{c.instructions+=4;NFSU2_TR(0x496ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ce1:{NFSU2_TR(0x496ce1);
__builtin_memmove((R+24),(R+4),4);
}
B496ce3:{NFSU2_TR(0x496ce3);
w4(R+4,u32(0x838590ull));
}
B496ce8:{NFSU2_TR(0x496ce8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496cedull));
TAIL_STATIC(0x5010e0u,501);
}
B496ced:L496ced:{c.instructions+=7;NFSU2_TR(0x496ced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496cf0:{NFSU2_TR(0x496cf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496cf3:{NFSU2_TR(0x496cf3);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x10000000ull))));
}
B496cf9:{NFSU2_TR(0x496cf9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496cfa:{NFSU2_TR(0x496cfa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496cfb:{NFSU2_TR(0x496cfb);
__builtin_memmove((R+4),gp(0x8384d8),4);
}
B496d01:{NFSU2_TR(0x496d01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496d06ull));
TAIL_STATIC(0x54e6e0u,54e);
}
B496d06:L496d06:{c.instructions+=2;NFSU2_TR(0x496d06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496d07:{NFSU2_TR(0x496d07);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496d10:L496d10:{c.instructions+=3;NFSU2_TR(0x496d10);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496d14:{NFSU2_TR(0x496d14);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B496d17:{NFSU2_TR(0x496d17);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L496d3e;}}
}
B496d19:L496d19:{c.instructions+=1;NFSU2_TR(0x496d19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x496d4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B496d20:L496d20:{c.instructions+=2;NFSU2_TR(0x496d20);
w4(R+0,u32(0x268d063cull));
}
B496d25:{NFSU2_TR(0x496d25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496d26:L496d26:{c.instructions+=2;NFSU2_TR(0x496d26);
w4(R+0,u32(0xba613729ull));
}
B496d2b:{NFSU2_TR(0x496d2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496d2c:L496d2c:{c.instructions+=2;NFSU2_TR(0x496d2c);
w4(R+0,u32(0xfda6758ull));
}
B496d31:{NFSU2_TR(0x496d31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496d32:L496d32:{c.instructions+=2;NFSU2_TR(0x496d32);
w4(R+0,u32(0x40c91ba7ull));
}
B496d37:{NFSU2_TR(0x496d37);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496d38:L496d38:{c.instructions+=2;NFSU2_TR(0x496d38);
w4(R+0,u32(0x59ecb2c2ull));
}
B496d3d:{NFSU2_TR(0x496d3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496d3e:L496d3e:{c.instructions+=2;NFSU2_TR(0x496d3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x78f734ull));
s4(u32(r4(U+0)),r4(U+4));
}
B496d46:{NFSU2_TR(0x496d46);
TAIL_STATIC(0x505450u,505);
}
B496d70:L496d70:{c.instructions+=10;NFSU2_TR(0x496d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B496d73:{NFSU2_TR(0x496d73);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d74:{NFSU2_TR(0x496d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B496d78:{NFSU2_TR(0x496d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B496d7a:{NFSU2_TR(0x496d7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d7b:{NFSU2_TR(0x496d7b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d7c:{NFSU2_TR(0x496d7c);
u8 U[4];
w4(U+0,u32(0xed8ca191ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d81:{NFSU2_TR(0x496d81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d82:{NFSU2_TR(0x496d82);
__builtin_memmove((R+24),(R+4),4);
}
B496d84:{NFSU2_TR(0x496d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496d89ull));
TAIL_STATIC(0x50c900u,50c);
}
B496d89:L496d89:{c.instructions+=5;NFSU2_TR(0x496d89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496d8c:{NFSU2_TR(0x496d8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496d90:{NFSU2_TR(0x496d90);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496d93:{NFSU2_TR(0x496d93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496d95:{NFSU2_TR(0x496d95);
if(r1(R+518)){{goto L496da1;}}
}
B496d97:L496d97:{c.instructions+=4;NFSU2_TR(0x496d97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B496d99:{NFSU2_TR(0x496d99);
u8 U[4];
w4(U+0,u32(0xb1ee4ca9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d9e:{NFSU2_TR(0x496d9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496d9f:{NFSU2_TR(0x496d9f);
{goto L496da9;}
}
B496da1:L496da1:{c.instructions+=3;NFSU2_TR(0x496da1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B496da3:{NFSU2_TR(0x496da3);
u8 U[4];
w4(U+0,u32(0xd11ecd79ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496da8:{NFSU2_TR(0x496da8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496da9:L496da9:{c.instructions+=1;NFSU2_TR(0x496da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496daeull));
TAIL_STATIC(0x50c900u,50c);
}
B496dae:L496dae:{c.instructions+=5;NFSU2_TR(0x496dae);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496db1:{NFSU2_TR(0x496db1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496db4:{NFSU2_TR(0x496db4);
u8 U[4];
w4(U+0,u32(0x7f904ae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496db9:{NFSU2_TR(0x496db9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496dba:{NFSU2_TR(0x496dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496dbfull));
TAIL_STATIC(0x50c900u,50c);
}
B496dbf:L496dbf:{c.instructions+=3;NFSU2_TR(0x496dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496dc2:{NFSU2_TR(0x496dc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496dc3:{NFSU2_TR(0x496dc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496dc8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496d10u);}goto L496d10;}
}
B496dc8:L496dc8:{c.instructions+=4;NFSU2_TR(0x496dc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496dcb:{NFSU2_TR(0x496dcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496dcc:{NFSU2_TR(0x496dcc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496dcd:{NFSU2_TR(0x496dcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496dd2ull));
TAIL_STATIC(0x50c900u,50c);
}
B496dd2:L496dd2:{c.instructions+=4;NFSU2_TR(0x496dd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496dd5:{NFSU2_TR(0x496dd5);
u8 U[4];
w4(U+0,u32(0x7019add7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496dda:{NFSU2_TR(0x496dda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ddb:{NFSU2_TR(0x496ddb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496de0ull));
TAIL_STATIC(0x50c900u,50c);
}
B496de0:L496de0:{c.instructions+=8;NFSU2_TR(0x496de0);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B496de3:{NFSU2_TR(0x496de3);
__builtin_memmove((R+8),gp(0x83aa1a),1);
}
B496de9:{NFSU2_TR(0x496de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496dec:{NFSU2_TR(0x496dec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B496def:{NFSU2_TR(0x496def);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496df1:{NFSU2_TR(0x496df1);
__builtin_memmove((R+0),(R+518),1);
}
B496df4:{NFSU2_TR(0x496df4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B496df6:{NFSU2_TR(0x496df6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L496dfe;}}
}
B496df8:L496df8:{c.instructions+=1;NFSU2_TR(0x496df8);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B496dfe:L496dfe:{c.instructions+=4;NFSU2_TR(0x496dfe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B496e00:{NFSU2_TR(0x496e00);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B496e06:{NFSU2_TR(0x496e06);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B496e0a:{NFSU2_TR(0x496e0a);
if(r1(R+518)){{goto L496e1a;}}
}
B496e0c:L496e0c:{c.instructions+=3;NFSU2_TR(0x496e0c);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B496e10:{NFSU2_TR(0x496e10);
{u32 ea_=u32(u32(7927636u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B496e16:{NFSU2_TR(0x496e16);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B496e1a:L496e1a:{c.instructions+=6;NFSU2_TR(0x496e1a);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B496e1c:{NFSU2_TR(0x496e1c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B496e1e:{NFSU2_TR(0x496e1e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf6640e9bull))));
}
B496e23:{NFSU2_TR(0x496e23);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xb5d640b1ull))));
}
B496e28:{NFSU2_TR(0x496e28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e29:{NFSU2_TR(0x496e29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496e2eull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B496e2e:L496e2e:{c.instructions+=9;NFSU2_TR(0x496e2e);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B496e32:{NFSU2_TR(0x496e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496e35:{NFSU2_TR(0x496e35);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496e38:{NFSU2_TR(0x496e38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e39:{NFSU2_TR(0x496e39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B496e3c:{NFSU2_TR(0x496e3c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B496e3f:{NFSU2_TR(0x496e3f);
u8 U[4];
w4(U+0,u32(0x78f748ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e44:{NFSU2_TR(0x496e44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e45:{NFSU2_TR(0x496e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496e4aull));
TAIL_STATIC(0x537be0u,537);
}
B496e4a:L496e4a:{c.instructions+=4;NFSU2_TR(0x496e4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496e4d:{NFSU2_TR(0x496e4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B496e50:{NFSU2_TR(0x496e50);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B496e53:{NFSU2_TR(0x496e53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496e7a;}}
}
B496e55:L496e55:{c.instructions+=4;NFSU2_TR(0x496e55);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496e58:{NFSU2_TR(0x496e58);
u8 U[4];
w4(U+0,u32(0x4e0a36a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e5d:{NFSU2_TR(0x496e5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e5e:{NFSU2_TR(0x496e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496e63ull));
TAIL_STATIC(0x50c900u,50c);
}
B496e63:L496e63:{c.instructions+=6;NFSU2_TR(0x496e63);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496e66:{NFSU2_TR(0x496e66);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496e69:{NFSU2_TR(0x496e69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e6a:{NFSU2_TR(0x496e6a);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e6f:{NFSU2_TR(0x496e6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e70:{NFSU2_TR(0x496e70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496e75ull));
TAIL_STATIC(0x537be0u,537);
}
B496e75:L496e75:{c.instructions+=2;NFSU2_TR(0x496e75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B496e78:{NFSU2_TR(0x496e78);
{goto L496ecd;}
}
B496e7a:L496e7a:{c.instructions+=2;NFSU2_TR(0x496e7a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B496e7d:{NFSU2_TR(0x496e7d);
if(r1(R+518)){{goto L496e8f;}}
}
B496e7f:L496e7f:{c.instructions+=2;NFSU2_TR(0x496e7f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B496e82:{NFSU2_TR(0x496e82);
if(r1(R+518)){{goto L496e8f;}}
}
B496e84:L496e84:{c.instructions+=4;NFSU2_TR(0x496e84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496e87:{NFSU2_TR(0x496e87);
u8 U[4];
w4(U+0,u32(0x3b4a1ecbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e8c:{NFSU2_TR(0x496e8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e8d:{NFSU2_TR(0x496e8d);
{goto L496e98;}
}
B496e8f:L496e8f:{c.instructions+=3;NFSU2_TR(0x496e8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496e92:{NFSU2_TR(0x496e92);
u8 U[4];
w4(U+0,u32(0xdb0c5efdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e97:{NFSU2_TR(0x496e97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496e98:L496e98:{c.instructions+=1;NFSU2_TR(0x496e98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496e9dull));
TAIL_STATIC(0x50c900u,50c);
}
B496e9d:L496e9d:{c.instructions+=8;NFSU2_TR(0x496e9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496ea0:{NFSU2_TR(0x496ea0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496ea3:{NFSU2_TR(0x496ea3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ea5:{NFSU2_TR(0x496ea5);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B496ea9:{NFSU2_TR(0x496ea9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496eaa:{NFSU2_TR(0x496eaa);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B496eae:{NFSU2_TR(0x496eae);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B496eb2:{NFSU2_TR(0x496eb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496eb7ull));
TAIL_STATIC(0x577240u,577);
}
B496eb7:L496eb7:{c.instructions+=6;NFSU2_TR(0x496eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496eba:{NFSU2_TR(0x496eba);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B496ebe:{NFSU2_TR(0x496ebe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ebf:{NFSU2_TR(0x496ebf);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ec4:{NFSU2_TR(0x496ec4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ec5:{NFSU2_TR(0x496ec5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496ecaull));
TAIL_STATIC(0x537be0u,537);
}
B496eca:L496eca:{c.instructions+=1;NFSU2_TR(0x496eca);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B496ecd:L496ecd:{c.instructions+=5;NFSU2_TR(0x496ecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496ed0:{NFSU2_TR(0x496ed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496ed3:{NFSU2_TR(0x496ed3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ed4:{NFSU2_TR(0x496ed4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ed5:{NFSU2_TR(0x496ed5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496edaull));
TAIL_STATIC(0x50c900u,50c);
}
B496eda:L496eda:{c.instructions+=6;NFSU2_TR(0x496eda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496edd:{NFSU2_TR(0x496edd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496ede:{NFSU2_TR(0x496ede);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496edf:{NFSU2_TR(0x496edf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B496ee0:{NFSU2_TR(0x496ee0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B496ee3:{NFSU2_TR(0x496ee3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496ef0:L496ef0:{c.instructions+=9;NFSU2_TR(0x496ef0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ef1:{NFSU2_TR(0x496ef1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ef2:{NFSU2_TR(0x496ef2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ef3:{NFSU2_TR(0x496ef3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B496ef7:{NFSU2_TR(0x496ef7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ef8:{NFSU2_TR(0x496ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B496efc:{NFSU2_TR(0x496efc);
__builtin_memmove((R+20),(R+4),4);
}
B496efe:{NFSU2_TR(0x496efe);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B496f00:{NFSU2_TR(0x496f00);
w4(R+12,u32(0x5ull));
}
B496f05:L496f05:{c.instructions+=3;NFSU2_TR(0x496f05);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B496f08:{NFSU2_TR(0x496f08);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496f0a:{NFSU2_TR(0x496f0a);
if(r1(R+518)){{goto L496f1a;}}
}
B496f0c:L496f0c:{c.instructions+=3;NFSU2_TR(0x496f0c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f11:{NFSU2_TR(0x496f11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f12:{NFSU2_TR(0x496f12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496f17ull));
TAIL_STATIC(0x537be0u,537);
}
B496f17:L496f17:{c.instructions+=1;NFSU2_TR(0x496f17);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496f1a:L496f1a:{c.instructions+=3;NFSU2_TR(0x496f1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B496f1c:{NFSU2_TR(0x496f1c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496f1e:{NFSU2_TR(0x496f1e);
if(r1(R+518)){{goto L496f2e;}}
}
B496f20:L496f20:{c.instructions+=3;NFSU2_TR(0x496f20);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f25:{NFSU2_TR(0x496f25);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f26:{NFSU2_TR(0x496f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496f2bull));
TAIL_STATIC(0x537be0u,537);
}
B496f2b:L496f2b:{c.instructions+=1;NFSU2_TR(0x496f2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B496f2e:L496f2e:{c.instructions+=3;NFSU2_TR(0x496f2e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B496f31:{NFSU2_TR(0x496f31);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B496f32:{NFSU2_TR(0x496f32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x496f05u);}goto L496f05;}}
}
B496f34:L496f34:{c.instructions+=6;NFSU2_TR(0x496f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496f37:{NFSU2_TR(0x496f37);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496f3b:{NFSU2_TR(0x496f3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496f3e:{NFSU2_TR(0x496f3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f3f:{NFSU2_TR(0x496f3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f40:{NFSU2_TR(0x496f40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496f45ull));
TAIL_STATIC(0x50c900u,50c);
}
B496f45:L496f45:{c.instructions+=6;NFSU2_TR(0x496f45);
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
B496f48:{NFSU2_TR(0x496f48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B496f49:{NFSU2_TR(0x496f49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496f4a:{NFSU2_TR(0x496f4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B496f4b:{NFSU2_TR(0x496f4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B496f4c:{NFSU2_TR(0x496f4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496f50:L496f50:{c.instructions+=8;NFSU2_TR(0x496f50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f51:{NFSU2_TR(0x496f51);
__builtin_memmove((R+24),(R+4),4);
}
B496f53:{NFSU2_TR(0x496f53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496f56:{NFSU2_TR(0x496f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496f59:{NFSU2_TR(0x496f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496f5f:{NFSU2_TR(0x496f5f);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B496f61:{NFSU2_TR(0x496f61);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B496f63:{NFSU2_TR(0x496f63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496f76;}}
}
B496f65:L496f65:{c.instructions+=3;NFSU2_TR(0x496f65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496f6b:{NFSU2_TR(0x496f6b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f6c:{NFSU2_TR(0x496f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496f71ull));
TAIL_STATIC(0x50ca00u,50c);
}
B496f71:L496f71:{c.instructions+=2;NFSU2_TR(0x496f71);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B496f74:{NFSU2_TR(0x496f74);
{goto L496f98;}
}
B496f76:L496f76:{c.instructions+=5;NFSU2_TR(0x496f76);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496f7c:{NFSU2_TR(0x496f7c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f7e:{NFSU2_TR(0x496f7e);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f83:{NFSU2_TR(0x496f83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f84:{NFSU2_TR(0x496f84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496f89ull));
TAIL_STATIC(0x51cf70u,51c);
}
B496f89:L496f89:{c.instructions+=3;NFSU2_TR(0x496f89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496f8f:{NFSU2_TR(0x496f8f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496f90:{NFSU2_TR(0x496f90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496f95ull));
TAIL_STATIC(0x50ca50u,50c);
}
B496f95:L496f95:{c.instructions+=1;NFSU2_TR(0x496f95);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B496f98:L496f98:{c.instructions+=3;NFSU2_TR(0x496f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496f9e:{NFSU2_TR(0x496f9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B496fa0:{NFSU2_TR(0x496fa0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L496fb3;}}
}
B496fa2:L496fa2:{c.instructions+=3;NFSU2_TR(0x496fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B496fa8:{NFSU2_TR(0x496fa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fa9:{NFSU2_TR(0x496fa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496faeull));
TAIL_STATIC(0x50ca00u,50c);
}
B496fae:L496fae:{c.instructions+=3;NFSU2_TR(0x496fae);
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
B496fb1:{NFSU2_TR(0x496fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496fb2:{NFSU2_TR(0x496fb2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496fb3:L496fb3:{c.instructions+=5;NFSU2_TR(0x496fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B496fb9:{NFSU2_TR(0x496fb9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fbb:{NFSU2_TR(0x496fbb);
u8 U[4];
w4(U+0,u32(0x78f758ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fc0:{NFSU2_TR(0x496fc0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fc1:{NFSU2_TR(0x496fc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496fc6ull));
TAIL_STATIC(0x51cf70u,51c);
}
B496fc6:L496fc6:{c.instructions+=3;NFSU2_TR(0x496fc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496fcc:{NFSU2_TR(0x496fcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fcd:{NFSU2_TR(0x496fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x496fd2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B496fd2:L496fd2:{c.instructions+=3;NFSU2_TR(0x496fd2);
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
B496fd5:{NFSU2_TR(0x496fd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B496fd6:{NFSU2_TR(0x496fd6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B496fe0:L496fe0:{c.instructions+=10;NFSU2_TR(0x496fe0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fe2:{NFSU2_TR(0x496fe2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fe7:{NFSU2_TR(0x496fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B496fed:{NFSU2_TR(0x496fed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496fee:{NFSU2_TR(0x496fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B496ff5:{NFSU2_TR(0x496ff5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ff6:{NFSU2_TR(0x496ff6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B496ff7:{NFSU2_TR(0x496ff7);
__builtin_memmove((R+24),(R+4),4);
}
B496ff9:{NFSU2_TR(0x496ff9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B496ffd:{NFSU2_TR(0x496ffd);
u8 U[4];
w4(U+0,u32(0x78f760ull));
s4(u32(r4(R+24)),r4(U+0));
TAIL_STATIC(0x497003u,497);
}
XIT:NFSU2_TR_EXIT(0x496,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
