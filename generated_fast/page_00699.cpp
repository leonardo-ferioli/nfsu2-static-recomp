#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_6d4(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x699,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x699,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_699(u8* __restrict R,Cpu& c);
u32 page_699(Cpu& c){return body_699(c.regs.data(),c);}
__attribute__((noinline)) u32 body_699(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x699001:goto L699001;
case 0x699003:goto L699003;
case 0x699008:c.instructions+=1;goto B699008;
case 0x69900a:goto L69900a;
case 0x69900f:c.instructions+=1;goto B69900f;
case 0x699011:goto L699011;
case 0x699016:c.instructions+=1;goto B699016;
case 0x699018:goto L699018;
case 0x69901d:c.instructions+=1;goto B69901d;
case 0x69901f:goto L69901f;
case 0x699024:goto L699024;
case 0x699026:goto L699026;
case 0x699028:c.instructions+=1;goto B699028;
case 0x699029:goto L699029;
case 0x69902b:c.instructions+=2;goto B69902b;
case 0x69902c:c.instructions+=1;goto B69902c;
case 0x69902d:goto L69902d;
case 0x69902f:c.instructions+=4;goto B69902f;
case 0x699034:c.instructions+=3;goto B699034;
case 0x699039:c.instructions+=2;goto B699039;
case 0x69903b:c.instructions+=1;goto B69903b;
case 0x69903d:goto L69903d;
case 0x69903f:goto L69903f;
case 0x699044:c.instructions+=2;goto B699044;
case 0x699046:c.instructions+=1;goto B699046;
case 0x699048:goto L699048;
case 0x69904a:goto L69904a;
case 0x69904f:c.instructions+=1;goto B69904f;
case 0x699051:goto L699051;
case 0x699056:c.instructions+=1;goto B699056;
case 0x699058:goto L699058;
case 0x69905d:c.instructions+=1;goto B69905d;
case 0x69905f:goto L69905f;
case 0x699064:c.instructions+=1;goto B699064;
case 0x699066:goto L699066;
case 0x69906b:c.instructions+=1;goto B69906b;
case 0x69906d:goto L69906d;
case 0x699072:c.instructions+=1;goto B699072;
case 0x699074:goto L699074;
case 0x699079:c.instructions+=1;goto B699079;
case 0x69907b:goto L69907b;
case 0x699080:c.instructions+=1;goto B699080;
case 0x699082:goto L699082;
case 0x699087:c.instructions+=1;goto B699087;
case 0x699089:goto L699089;
case 0x69908e:c.instructions+=1;goto B69908e;
case 0x699090:goto L699090;
case 0x699095:c.instructions+=1;goto B699095;
case 0x699097:goto L699097;
case 0x69909c:c.instructions+=1;goto B69909c;
case 0x69909e:goto L69909e;
case 0x6990a3:c.instructions+=1;goto B6990a3;
case 0x6990a5:goto L6990a5;
case 0x6990aa:goto L6990aa;
case 0x6990ac:goto L6990ac;
case 0x6990ae:c.instructions+=1;goto B6990ae;
case 0x6990af:goto L6990af;
case 0x6990b1:c.instructions+=2;goto B6990b1;
case 0x6990b2:c.instructions+=1;goto B6990b2;
case 0x6990b3:goto L6990b3;
case 0x6990b5:c.instructions+=3;goto B6990b5;
case 0x6990ba:c.instructions+=2;goto B6990ba;
case 0x6990bf:c.instructions+=1;goto B6990bf;
case 0x6990c1:goto L6990c1;
case 0x6990c6:c.instructions+=1;goto B6990c6;
case 0x6990c8:goto L6990c8;
case 0x6990cd:c.instructions+=1;goto B6990cd;
case 0x6990cf:goto L6990cf;
case 0x6990d4:c.instructions+=1;goto B6990d4;
case 0x6990d6:goto L6990d6;
case 0x6990db:c.instructions+=1;goto B6990db;
case 0x6990dd:goto L6990dd;
case 0x6990e2:c.instructions+=1;goto B6990e2;
case 0x6990e4:goto L6990e4;
case 0x6990e6:c.instructions+=1;goto B6990e6;
case 0x6990e7:goto L6990e7;
case 0x6990e9:c.instructions+=2;goto B6990e9;
case 0x6990ea:c.instructions+=1;goto B6990ea;
case 0x6990eb:goto L6990eb;
case 0x6990ed:c.instructions+=3;goto B6990ed;
case 0x6990f2:c.instructions+=2;goto B6990f2;
case 0x6990f7:c.instructions+=1;goto B6990f7;
case 0x6990f9:goto L6990f9;
case 0x6990fe:c.instructions+=1;goto B6990fe;
case 0x699100:goto L699100;
case 0x699102:c.instructions+=1;goto B699102;
case 0x699103:goto L699103;
case 0x699105:c.instructions+=2;goto B699105;
case 0x699106:c.instructions+=1;goto B699106;
case 0x699107:goto L699107;
case 0x699109:c.instructions+=4;goto B699109;
case 0x69910e:c.instructions+=3;goto B69910e;
case 0x699113:c.instructions+=2;goto B699113;
case 0x699115:c.instructions+=1;goto B699115;
case 0x69911b:goto L69911b;
case 0x699121:goto L699121;
case 0x699126:c.instructions+=2;goto B699126;
case 0x699128:c.instructions+=1;goto B699128;
case 0x69912a:goto L69912a;
case 0x699130:goto L699130;
case 0x699135:c.instructions+=2;goto B699135;
case 0x699137:c.instructions+=1;goto B699137;
case 0x699139:goto L699139;
case 0x69913f:goto L69913f;
case 0x699144:c.instructions+=1;goto B699144;
case 0x69914a:goto L69914a;
case 0x69914f:c.instructions+=1;goto B69914f;
case 0x699155:goto L699155;
case 0x69915a:c.instructions+=1;goto B69915a;
case 0x699160:goto L699160;
case 0x699165:c.instructions+=1;goto B699165;
case 0x69916a:goto L69916a;
case 0x69916f:c.instructions+=1;goto B69916f;
case 0x699175:goto L699175;
case 0x69917a:c.instructions+=1;goto B69917a;
case 0x699180:goto L699180;
case 0x699185:c.instructions+=1;goto B699185;
case 0x69918a:goto L69918a;
case 0x69918f:c.instructions+=2;goto B69918f;
case 0x699191:c.instructions+=1;goto B699191;
case 0x699193:goto L699193;
case 0x699199:goto L699199;
case 0x69919e:c.instructions+=1;goto B69919e;
case 0x6991a4:goto L6991a4;
case 0x6991a9:c.instructions+=1;goto B6991a9;
case 0x6991af:goto L6991af;
case 0x6991b4:c.instructions+=1;goto B6991b4;
case 0x6991ba:goto L6991ba;
case 0x6991bf:c.instructions+=1;goto B6991bf;
case 0x6991c4:goto L6991c4;
case 0x6991c9:c.instructions+=1;goto B6991c9;
case 0x6991cf:goto L6991cf;
case 0x6991d4:c.instructions+=1;goto B6991d4;
case 0x6991da:goto L6991da;
case 0x6991df:c.instructions+=1;goto B6991df;
case 0x6991e4:goto L6991e4;
case 0x6991e9:c.instructions+=2;goto B6991e9;
case 0x6991eb:c.instructions+=1;goto B6991eb;
case 0x6991ed:goto L6991ed;
case 0x6991ef:goto L6991ef;
case 0x6991f4:c.instructions+=2;goto B6991f4;
case 0x6991f6:c.instructions+=1;goto B6991f6;
case 0x6991f8:goto L6991f8;
case 0x6991fa:goto L6991fa;
case 0x6991ff:c.instructions+=1;goto B6991ff;
case 0x699201:goto L699201;
case 0x699206:c.instructions+=1;goto B699206;
case 0x699208:goto L699208;
case 0x69920d:c.instructions+=1;goto B69920d;
case 0x69920f:goto L69920f;
case 0x699214:c.instructions+=1;goto B699214;
case 0x699216:goto L699216;
case 0x69921b:c.instructions+=1;goto B69921b;
case 0x69921d:goto L69921d;
case 0x699222:c.instructions+=1;goto B699222;
case 0x699224:goto L699224;
case 0x699229:c.instructions+=1;goto B699229;
case 0x69922b:goto L69922b;
case 0x699230:c.instructions+=2;goto B699230;
case 0x699232:c.instructions+=1;goto B699232;
case 0x699234:goto L699234;
case 0x699236:goto L699236;
case 0x69923b:c.instructions+=1;goto B69923b;
case 0x69923d:goto L69923d;
case 0x699242:c.instructions+=1;goto B699242;
case 0x699244:goto L699244;
case 0x699249:c.instructions+=1;goto B699249;
case 0x69924b:goto L69924b;
case 0x699250:c.instructions+=1;goto B699250;
case 0x699252:goto L699252;
case 0x699257:c.instructions+=1;goto B699257;
case 0x699259:goto L699259;
case 0x69925e:c.instructions+=1;goto B69925e;
case 0x699260:goto L699260;
case 0x699265:goto L699265;
case 0x699267:goto L699267;
case 0x699269:c.instructions+=1;goto B699269;
case 0x69926a:goto L69926a;
case 0x69926c:c.instructions+=2;goto B69926c;
case 0x69926d:c.instructions+=1;goto B69926d;
case 0x69926e:goto L69926e;
case 0x699270:c.instructions+=4;goto B699270;
case 0x699275:c.instructions+=3;goto B699275;
case 0x69927a:c.instructions+=2;goto B69927a;
case 0x69927c:c.instructions+=1;goto B69927c;
case 0x69927e:goto L69927e;
case 0x699280:goto L699280;
case 0x699285:c.instructions+=1;goto B699285;
case 0x699287:goto L699287;
case 0x69928c:c.instructions+=1;goto B69928c;
case 0x69928e:goto L69928e;
case 0x699293:c.instructions+=1;goto B699293;
case 0x699295:goto L699295;
case 0x69929a:c.instructions+=1;goto B69929a;
case 0x69929c:goto L69929c;
case 0x6992a1:c.instructions+=1;goto B6992a1;
case 0x6992a3:goto L6992a3;
case 0x6992a8:c.instructions+=1;goto B6992a8;
case 0x6992aa:goto L6992aa;
case 0x6992af:c.instructions+=1;goto B6992af;
case 0x6992b1:goto L6992b1;
case 0x6992b6:c.instructions+=1;goto B6992b6;
case 0x6992b8:goto L6992b8;
case 0x6992bd:c.instructions+=1;goto B6992bd;
case 0x6992bf:goto L6992bf;
case 0x6992c4:c.instructions+=1;goto B6992c4;
case 0x6992c6:goto L6992c6;
case 0x6992cb:c.instructions+=1;goto B6992cb;
case 0x6992cd:goto L6992cd;
case 0x6992d2:c.instructions+=1;goto B6992d2;
case 0x6992d4:goto L6992d4;
case 0x6992d9:goto L6992d9;
case 0x6992db:goto L6992db;
case 0x6992dd:c.instructions+=1;goto B6992dd;
case 0x6992de:goto L6992de;
case 0x6992e0:c.instructions+=2;goto B6992e0;
case 0x6992e1:c.instructions+=1;goto B6992e1;
case 0x6992e2:goto L6992e2;
case 0x6992e4:c.instructions+=7;goto B6992e4;
case 0x6992e5:c.instructions+=6;goto B6992e5;
case 0x6992e7:c.instructions+=5;goto B6992e7;
case 0x6992ea:c.instructions+=4;goto B6992ea;
case 0x6992f1:c.instructions+=3;goto B6992f1;
case 0x6992f6:c.instructions+=2;goto B6992f6;
case 0x6992f7:c.instructions+=1;goto B6992f7;
case 0x6992fa:goto L6992fa;
case 0x6992fc:c.instructions+=8;goto B6992fc;
case 0x6992fd:c.instructions+=7;goto B6992fd;
case 0x6992ff:c.instructions+=6;goto B6992ff;
case 0x699302:c.instructions+=5;goto B699302;
case 0x699308:c.instructions+=4;goto B699308;
case 0x69930a:c.instructions+=3;goto B69930a;
case 0x69930d:c.instructions+=2;goto B69930d;
case 0x69930e:c.instructions+=1;goto B69930e;
case 0x699313:goto L699313;
case 0x699314:c.instructions+=1;goto B699314;
case 0x699317:goto L699317;
case 0x699319:c.instructions+=5;goto B699319;
case 0x69931a:c.instructions+=4;goto B69931a;
case 0x69931c:c.instructions+=3;goto B69931c;
case 0x699321:c.instructions+=2;goto B699321;
case 0x699323:c.instructions+=1;goto B699323;
case 0x699325:goto L699325;
case 0x699328:c.instructions+=2;goto B699328;
case 0x69932e:c.instructions+=1;goto B69932e;
case 0x699330:goto L699330;
case 0x699336:c.instructions+=3;goto B699336;
case 0x699338:c.instructions+=2;goto B699338;
case 0x69933b:c.instructions+=1;goto B69933b;
case 0x699340:goto L699340;
case 0x699341:c.instructions+=1;goto B699341;
case 0x699344:goto L699344;
case 0x699346:c.instructions+=5;goto B699346;
case 0x699347:c.instructions+=4;goto B699347;
case 0x699349:c.instructions+=3;goto B699349;
case 0x69934c:c.instructions+=2;goto B69934c;
case 0x69934e:c.instructions+=1;goto B69934e;
case 0x699350:goto L699350;
case 0x699356:c.instructions+=2;goto B699356;
case 0x699359:c.instructions+=1;goto B699359;
case 0x69935e:goto L69935e;
case 0x69935f:c.instructions+=1;goto B69935f;
case 0x699362:goto L699362;
case 0x699364:c.instructions+=17;goto B699364;
case 0x699365:c.instructions+=16;goto B699365;
case 0x699367:c.instructions+=15;goto B699367;
case 0x69936a:c.instructions+=14;goto B69936a;
case 0x69936b:c.instructions+=13;goto B69936b;
case 0x69936c:c.instructions+=12;goto B69936c;
case 0x69936e:c.instructions+=11;goto B69936e;
case 0x699371:c.instructions+=10;goto B699371;
case 0x699373:c.instructions+=9;goto B699373;
case 0x699374:c.instructions+=8;goto B699374;
case 0x699377:c.instructions+=7;goto B699377;
case 0x699379:c.instructions+=6;goto B699379;
case 0x69937e:c.instructions+=5;goto B69937e;
case 0x699381:c.instructions+=4;goto B699381;
case 0x699383:c.instructions+=3;goto B699383;
case 0x699386:c.instructions+=2;goto B699386;
case 0x699389:c.instructions+=1;goto B699389;
case 0x69938f:goto L69938f;
case 0x699391:c.instructions+=2;goto B699391;
case 0x699397:c.instructions+=1;goto B699397;
case 0x69939d:goto L69939d;
case 0x6993a3:c.instructions+=1;goto B6993a3;
case 0x6993a9:goto L6993a9;
case 0x6993af:c.instructions+=1;goto B6993af;
case 0x6993b5:goto L6993b5;
case 0x6993bb:c.instructions+=1;goto B6993bb;
case 0x6993c1:goto L6993c1;
case 0x6993c7:c.instructions+=1;goto B6993c7;
case 0x6993cd:goto L6993cd;
case 0x6993d3:c.instructions+=1;goto B6993d3;
case 0x6993d9:goto L6993d9;
case 0x6993de:c.instructions+=2;goto B6993de;
case 0x6993e0:c.instructions+=1;goto B6993e0;
case 0x6993e6:goto L6993e6;
case 0x6993ec:c.instructions+=3;goto B6993ec;
case 0x6993f1:c.instructions+=2;goto B6993f1;
case 0x6993f3:c.instructions+=1;goto B6993f3;
case 0x6993f5:goto L6993f5;
case 0x6993f7:goto L6993f7;
case 0x6993fc:c.instructions+=2;goto B6993fc;
case 0x6993fe:c.instructions+=1;goto B6993fe;
case 0x699400:goto L699400;
case 0x699402:goto L699402;
case 0x699404:c.instructions+=1;goto B699404;
case 0x699406:goto L699406;
case 0x69940c:c.instructions+=1;goto B69940c;
case 0x69940e:goto L69940e;
case 0x699414:c.instructions+=1;goto B699414;
case 0x699416:goto L699416;
case 0x69941c:c.instructions+=1;goto B69941c;
case 0x69941e:goto L69941e;
case 0x699424:goto L699424;
case 0x69942a:goto L69942a;
case 0x69942c:c.instructions+=1;goto B69942c;
case 0x69942e:goto L69942e;
case 0x699430:c.instructions+=3;goto B699430;
case 0x699431:c.instructions+=2;goto B699431;
case 0x699433:c.instructions+=1;goto B699433;
case 0x699438:goto L699438;
case 0x69943e:c.instructions+=1;goto B69943e;
case 0x699440:goto L699440;
case 0x699446:c.instructions+=1;goto B699446;
case 0x699448:goto L699448;
case 0x69944e:c.instructions+=1;goto B69944e;
case 0x699450:goto L699450;
case 0x699456:c.instructions+=1;goto B699456;
case 0x699458:goto L699458;
case 0x69945a:c.instructions+=1;goto B69945a;
case 0x69945c:goto L69945c;
case 0x699461:c.instructions+=2;goto B699461;
case 0x699463:c.instructions+=1;goto B699463;
case 0x699465:goto L699465;
case 0x699467:goto L699467;
case 0x69946d:c.instructions+=1;goto B69946d;
case 0x69946f:goto L69946f;
case 0x699475:c.instructions+=1;goto B699475;
case 0x699477:goto L699477;
case 0x69947d:c.instructions+=1;goto B69947d;
case 0x69947f:goto L69947f;
case 0x699485:c.instructions+=1;goto B699485;
case 0x699487:goto L699487;
case 0x69948d:c.instructions+=1;goto B69948d;
case 0x69948f:goto L69948f;
case 0x699495:c.instructions+=1;goto B699495;
case 0x699497:goto L699497;
case 0x69949d:c.instructions+=1;goto B69949d;
case 0x69949f:goto L69949f;
case 0x6994a5:c.instructions+=1;goto B6994a5;
case 0x6994aa:goto L6994aa;
case 0x6994ac:goto L6994ac;
case 0x6994ad:c.instructions+=3;goto B6994ad;
case 0x6994af:c.instructions+=2;goto B6994af;
case 0x6994b0:c.instructions+=1;goto B6994b0;
case 0x6994b2:goto L6994b2;
case 0x6994b8:c.instructions+=2;goto B6994b8;
case 0x6994be:c.instructions+=1;goto B6994be;
case 0x6994c0:goto L6994c0;
case 0x6994c6:c.instructions+=1;goto B6994c6;
case 0x6994c8:goto L6994c8;
case 0x6994ce:c.instructions+=1;goto B6994ce;
case 0x6994d0:goto L6994d0;
case 0x6994d6:c.instructions+=1;goto B6994d6;
case 0x6994d8:goto L6994d8;
case 0x6994da:goto L6994da;
case 0x6994dc:c.instructions+=1;goto B6994dc;
case 0x6994de:goto L6994de;
case 0x6994e0:c.instructions+=1;goto B6994e0;
case 0x6994e2:goto L6994e2;
case 0x6994e5:c.instructions+=2;goto B6994e5;
case 0x6994e8:c.instructions+=1;goto B6994e8;
case 0x6994ea:goto L6994ea;
case 0x6994ec:c.instructions+=2;goto B6994ec;
case 0x6994ed:c.instructions+=1;goto B6994ed;
case 0x6994ef:goto L6994ef;
case 0x6994f1:c.instructions+=2;goto B6994f1;
case 0x6994f4:c.instructions+=1;goto B6994f4;
case 0x6994f6:goto L6994f6;
case 0x6994f9:c.instructions+=1;goto B6994f9;
case 0x6994fb:goto L6994fb;
case 0x6994fe:c.instructions+=1;goto B6994fe;
case 0x699500:goto L699500;
case 0x699502:c.instructions+=1;goto B699502;
case 0x699504:goto L699504;
case 0x699507:c.instructions+=2;goto B699507;
case 0x69950a:c.instructions+=1;goto B69950a;
case 0x69950c:goto L69950c;
case 0x69950f:goto L69950f;
case 0x699512:c.instructions+=1;goto B699512;
case 0x699514:goto L699514;
case 0x699517:goto L699517;
case 0x69951a:c.instructions+=2;goto B69951a;
case 0x69951c:c.instructions+=1;goto B69951c;
case 0x69951e:goto L69951e;
case 0x699521:c.instructions+=2;goto B699521;
case 0x699523:c.instructions+=1;goto B699523;
case 0x699525:goto L699525;
case 0x699527:c.instructions+=1;goto B699527;
case 0x699529:goto L699529;
case 0x69952b:c.instructions+=1;goto B69952b;
case 0x69952d:goto L69952d;
case 0x699532:c.instructions+=1;goto B699532;
case 0x699534:goto L699534;
case 0x699536:goto L699536;
case 0x699539:c.instructions+=2;goto B699539;
case 0x69953c:c.instructions+=1;goto B69953c;
case 0x69953e:goto L69953e;
case 0x699541:c.instructions+=2;goto B699541;
case 0x699544:c.instructions+=1;goto B699544;
case 0x699546:goto L699546;
case 0x699547:c.instructions+=1;goto B699547;
case 0x69954c:goto L69954c;
case 0x69954e:c.instructions+=2;goto B69954e;
case 0x699551:c.instructions+=1;goto B699551;
case 0x699553:goto L699553;
case 0x699556:c.instructions+=2;goto B699556;
case 0x699559:c.instructions+=1;goto B699559;
case 0x69955b:goto L69955b;
case 0x69955e:c.instructions+=1;goto B69955e;
case 0x699561:goto L699561;
case 0x699564:c.instructions+=5;goto B699564;
case 0x699567:c.instructions+=4;goto B699567;
case 0x69956a:c.instructions+=3;goto B69956a;
case 0x69956c:c.instructions+=2;goto B69956c;
case 0x69956f:c.instructions+=1;goto B69956f;
case 0x699572:goto L699572;
case 0x699574:goto L699574;
case 0x699576:c.instructions+=1;goto B699576;
case 0x699579:goto L699579;
case 0x69957b:goto L69957b;
case 0x69957e:c.instructions+=5;goto B69957e;
case 0x699581:c.instructions+=4;goto B699581;
case 0x699584:c.instructions+=3;goto B699584;
case 0x699586:c.instructions+=2;goto B699586;
case 0x699589:c.instructions+=1;goto B699589;
case 0x69958c:goto L69958c;
case 0x69958e:goto L69958e;
case 0x699590:c.instructions+=1;goto B699590;
case 0x699593:goto L699593;
case 0x699595:goto L699595;
case 0x699598:c.instructions+=5;goto B699598;
case 0x69959b:c.instructions+=4;goto B69959b;
case 0x69959e:c.instructions+=3;goto B69959e;
case 0x6995a1:c.instructions+=2;goto B6995a1;
case 0x6995a4:c.instructions+=1;goto B6995a4;
case 0x6995a6:goto L6995a6;
case 0x6995a7:c.instructions+=4;goto B6995a7;
case 0x6995a8:c.instructions+=3;goto B6995a8;
case 0x6995a9:c.instructions+=2;goto B6995a9;
case 0x6995aa:c.instructions+=1;goto B6995aa;
case 0x6995ad:goto L6995ad;
case 0x6995ae:c.instructions+=1;goto B6995ae;
case 0x6995b3:goto L6995b3;
case 0x6995b5:c.instructions+=2;goto B6995b5;
case 0x6995b8:c.instructions+=1;goto B6995b8;
case 0x6995ba:goto L6995ba;
case 0x6995bf:c.instructions+=1;goto B6995bf;
case 0x6995c1:goto L6995c1;
case 0x6995c3:c.instructions+=7;goto B6995c3;
case 0x6995c4:c.instructions+=6;goto B6995c4;
case 0x6995c6:c.instructions+=5;goto B6995c6;
case 0x6995c9:c.instructions+=4;goto B6995c9;
case 0x6995cb:c.instructions+=3;goto B6995cb;
case 0x6995cc:c.instructions+=2;goto B6995cc;
case 0x6995ce:c.instructions+=1;goto B6995ce;
case 0x6995d0:goto L6995d0;
case 0x6995d5:c.instructions+=1;goto B6995d5;
case 0x6995da:goto L6995da;
case 0x6995dc:c.instructions+=4;goto B6995dc;
case 0x6995de:c.instructions+=3;goto B6995de;
case 0x6995e1:c.instructions+=2;goto B6995e1;
case 0x6995e4:c.instructions+=1;goto B6995e4;
case 0x6995e6:goto L6995e6;
case 0x6995e9:c.instructions+=1;goto B6995e9;
case 0x6995eb:goto L6995eb;
case 0x6995ee:c.instructions+=2;goto B6995ee;
case 0x6995f1:c.instructions+=1;goto B6995f1;
case 0x6995f3:goto L6995f3;
case 0x6995f4:c.instructions+=1;goto B6995f4;
case 0x6995f9:goto L6995f9;
case 0x6995fb:c.instructions+=2;goto B6995fb;
case 0x6995fe:c.instructions+=1;goto B6995fe;
case 0x699600:goto L699600;
case 0x699605:c.instructions+=1;goto B699605;
case 0x699607:goto L699607;
case 0x69960a:goto L69960a;
case 0x69960d:c.instructions+=5;goto B69960d;
case 0x69960e:c.instructions+=4;goto B69960e;
case 0x699611:c.instructions+=3;goto B699611;
case 0x699614:c.instructions+=2;goto B699614;
case 0x699615:c.instructions+=1;goto B699615;
case 0x699618:goto L699618;
case 0x69961a:goto L69961a;
case 0x69961d:c.instructions+=2;goto B69961d;
case 0x699620:c.instructions+=1;goto B699620;
case 0x699622:goto L699622;
case 0x699625:c.instructions+=1;goto B699625;
case 0x699627:goto L699627;
case 0x69962a:c.instructions+=2;goto B69962a;
case 0x69962d:c.instructions+=1;goto B69962d;
case 0x69962f:goto L69962f;
case 0x699630:c.instructions+=1;goto B699630;
case 0x699635:goto L699635;
case 0x699637:c.instructions+=2;goto B699637;
case 0x69963a:c.instructions+=1;goto B69963a;
case 0x69963c:goto L69963c;
case 0x699641:c.instructions+=1;goto B699641;
case 0x699643:goto L699643;
case 0x699646:goto L699646;
case 0x699649:c.instructions+=3;goto B699649;
case 0x69964c:c.instructions+=2;goto B69964c;
case 0x69964f:c.instructions+=1;goto B69964f;
case 0x699652:goto L699652;
case 0x699654:goto L699654;
case 0x699657:c.instructions+=8;goto B699657;
case 0x69965a:c.instructions+=7;goto B69965a;
case 0x69965d:c.instructions+=6;goto B69965d;
case 0x699660:c.instructions+=5;goto B699660;
case 0x699663:c.instructions+=4;goto B699663;
case 0x699666:c.instructions+=3;goto B699666;
case 0x699669:c.instructions+=2;goto B699669;
case 0x69966c:c.instructions+=1;goto B69966c;
case 0x69966e:goto L69966e;
case 0x69966f:c.instructions+=1;goto B69966f;
case 0x699670:goto L699670;
case 0x699671:c.instructions+=2;goto B699671;
case 0x699672:c.instructions+=1;goto B699672;
case 0x699675:goto L699675;
case 0x699677:c.instructions+=6;goto B699677;
case 0x699678:c.instructions+=5;goto B699678;
case 0x69967a:c.instructions+=4;goto B69967a;
case 0x69967c:c.instructions+=3;goto B69967c;
case 0x69967e:c.instructions+=2;goto B69967e;
case 0x699683:c.instructions+=1;goto B699683;
case 0x699685:goto L699685;
case 0x69968a:c.instructions+=1;goto B69968a;
case 0x69968c:goto L69968c;
case 0x699691:c.instructions+=1;goto B699691;
case 0x699693:goto L699693;
case 0x699698:c.instructions+=1;goto B699698;
case 0x69969a:goto L69969a;
case 0x69969c:c.instructions+=3;goto B69969c;
case 0x6996a1:c.instructions+=2;goto B6996a1;
case 0x6996a6:c.instructions+=1;goto B6996a6;
case 0x6996a8:goto L6996a8;
case 0x6996aa:c.instructions+=2;goto B6996aa;
case 0x6996ab:c.instructions+=1;goto B6996ab;
case 0x6996ad:goto L6996ad;
case 0x6996b3:c.instructions+=2;goto B6996b3;
case 0x6996b5:c.instructions+=1;goto B6996b5;
case 0x6996b7:goto L6996b7;
case 0x6996b9:c.instructions+=2;goto B6996b9;
case 0x6996ba:c.instructions+=1;goto B6996ba;
case 0x6996bc:goto L6996bc;
case 0x6996bf:c.instructions+=1;goto B6996bf;
case 0x6996c1:goto L6996c1;
case 0x6996c3:goto L6996c3;
case 0x6996c5:c.instructions+=5;goto B6996c5;
case 0x6996c9:c.instructions+=4;goto B6996c9;
case 0x6996ca:c.instructions+=3;goto B6996ca;
case 0x6996cd:c.instructions+=2;goto B6996cd;
case 0x6996d0:c.instructions+=1;goto B6996d0;
case 0x6996d2:goto L6996d2;
case 0x6996d5:c.instructions+=2;goto B6996d5;
case 0x6996d7:c.instructions+=1;goto B6996d7;
case 0x6996d9:goto L6996d9;
case 0x6996dc:goto L6996dc;
case 0x6996de:c.instructions+=1;goto B6996de;
case 0x6996e0:goto L6996e0;
case 0x6996e3:c.instructions+=2;goto B6996e3;
case 0x6996e5:c.instructions+=1;goto B6996e5;
case 0x6996e7:goto L6996e7;
case 0x6996ea:c.instructions+=2;goto B6996ea;
case 0x6996ed:c.instructions+=1;goto B6996ed;
case 0x6996ef:goto L6996ef;
case 0x6996f0:c.instructions+=2;goto B6996f0;
case 0x6996f1:c.instructions+=1;goto B6996f1;
case 0x6996f4:goto L6996f4;
case 0x6996f5:goto L6996f5;
case 0x6996f7:c.instructions+=38;goto B6996f7;
case 0x6996f8:c.instructions+=37;goto B6996f8;
case 0x6996fa:c.instructions+=36;goto B6996fa;
case 0x6996fd:c.instructions+=35;goto B6996fd;
case 0x699700:c.instructions+=34;goto B699700;
case 0x699703:c.instructions+=33;goto B699703;
case 0x699706:c.instructions+=32;goto B699706;
case 0x699709:c.instructions+=31;goto B699709;
case 0x69970c:c.instructions+=30;goto B69970c;
case 0x69970f:c.instructions+=29;goto B69970f;
case 0x699712:c.instructions+=28;goto B699712;
case 0x699715:c.instructions+=27;goto B699715;
case 0x699718:c.instructions+=26;goto B699718;
case 0x69971a:c.instructions+=25;goto B69971a;
case 0x69971d:c.instructions+=24;goto B69971d;
case 0x699720:c.instructions+=23;goto B699720;
case 0x699723:c.instructions+=22;goto B699723;
case 0x699726:c.instructions+=21;goto B699726;
case 0x699729:c.instructions+=20;goto B699729;
case 0x69972c:c.instructions+=19;goto B69972c;
case 0x69972f:c.instructions+=18;goto B69972f;
case 0x699732:c.instructions+=17;goto B699732;
case 0x699735:c.instructions+=16;goto B699735;
case 0x699738:c.instructions+=15;goto B699738;
case 0x69973b:c.instructions+=14;goto B69973b;
case 0x69973e:c.instructions+=13;goto B69973e;
case 0x699741:c.instructions+=12;goto B699741;
case 0x699744:c.instructions+=11;goto B699744;
case 0x69974b:c.instructions+=10;goto B69974b;
case 0x69974d:c.instructions+=9;goto B69974d;
case 0x699750:c.instructions+=8;goto B699750;
case 0x699753:c.instructions+=7;goto B699753;
case 0x699756:c.instructions+=6;goto B699756;
case 0x699759:c.instructions+=5;goto B699759;
case 0x69975c:c.instructions+=4;goto B69975c;
case 0x69975f:c.instructions+=3;goto B69975f;
case 0x699761:c.instructions+=2;goto B699761;
case 0x699762:c.instructions+=1;goto B699762;
case 0x699765:goto L699765;
case 0x699767:c.instructions+=5;goto B699767;
case 0x699768:c.instructions+=4;goto B699768;
case 0x69976a:c.instructions+=3;goto B69976a;
case 0x69976d:c.instructions+=2;goto B69976d;
case 0x69976f:c.instructions+=1;goto B69976f;
case 0x699771:goto L699771;
case 0x699776:c.instructions+=1;goto B699776;
case 0x69977b:goto L69977b;
case 0x69977e:c.instructions+=54;goto B69977e;
case 0x699781:c.instructions+=53;goto B699781;
case 0x699784:c.instructions+=52;goto B699784;
case 0x699787:c.instructions+=51;goto B699787;
case 0x69978a:c.instructions+=50;goto B69978a;
case 0x69978d:c.instructions+=49;goto B69978d;
case 0x699790:c.instructions+=48;goto B699790;
case 0x699793:c.instructions+=47;goto B699793;
case 0x699796:c.instructions+=46;goto B699796;
case 0x699799:c.instructions+=45;goto B699799;
case 0x69979c:c.instructions+=44;goto B69979c;
case 0x69979f:c.instructions+=43;goto B69979f;
case 0x6997a2:c.instructions+=42;goto B6997a2;
case 0x6997a5:c.instructions+=41;goto B6997a5;
case 0x6997a8:c.instructions+=40;goto B6997a8;
case 0x6997ab:c.instructions+=39;goto B6997ab;
case 0x6997ad:c.instructions+=38;goto B6997ad;
case 0x6997af:c.instructions+=37;goto B6997af;
case 0x6997b2:c.instructions+=36;goto B6997b2;
case 0x6997b5:c.instructions+=35;goto B6997b5;
case 0x6997b8:c.instructions+=34;goto B6997b8;
case 0x6997bb:c.instructions+=33;goto B6997bb;
case 0x6997be:c.instructions+=32;goto B6997be;
case 0x6997c1:c.instructions+=31;goto B6997c1;
case 0x6997c4:c.instructions+=30;goto B6997c4;
case 0x6997c7:c.instructions+=29;goto B6997c7;
case 0x6997ca:c.instructions+=28;goto B6997ca;
case 0x6997cd:c.instructions+=27;goto B6997cd;
case 0x6997d0:c.instructions+=26;goto B6997d0;
case 0x6997d3:c.instructions+=25;goto B6997d3;
case 0x6997d6:c.instructions+=24;goto B6997d6;
case 0x6997d9:c.instructions+=23;goto B6997d9;
case 0x6997dc:c.instructions+=22;goto B6997dc;
case 0x6997df:c.instructions+=21;goto B6997df;
case 0x6997e2:c.instructions+=20;goto B6997e2;
case 0x6997e5:c.instructions+=19;goto B6997e5;
case 0x6997e8:c.instructions+=18;goto B6997e8;
case 0x6997eb:c.instructions+=17;goto B6997eb;
case 0x6997ee:c.instructions+=16;goto B6997ee;
case 0x6997f1:c.instructions+=15;goto B6997f1;
case 0x6997f4:c.instructions+=14;goto B6997f4;
case 0x6997f7:c.instructions+=13;goto B6997f7;
case 0x6997fa:c.instructions+=12;goto B6997fa;
case 0x6997fd:c.instructions+=11;goto B6997fd;
case 0x699800:c.instructions+=10;goto B699800;
case 0x699803:c.instructions+=9;goto B699803;
case 0x699806:c.instructions+=8;goto B699806;
case 0x699809:c.instructions+=7;goto B699809;
case 0x69980c:c.instructions+=6;goto B69980c;
case 0x69980f:c.instructions+=5;goto B69980f;
case 0x699812:c.instructions+=4;goto B699812;
case 0x699815:c.instructions+=3;goto B699815;
case 0x699818:c.instructions+=2;goto B699818;
case 0x69981b:c.instructions+=1;goto B69981b;
case 0x69981d:goto L69981d;
case 0x69981e:c.instructions+=1;goto B69981e;
case 0x699821:goto L699821;
case 0x699823:c.instructions+=5;goto B699823;
case 0x699824:c.instructions+=4;goto B699824;
case 0x699826:c.instructions+=3;goto B699826;
case 0x699829:c.instructions+=2;goto B699829;
case 0x69982b:c.instructions+=1;goto B69982b;
case 0x69982d:goto L69982d;
case 0x699832:c.instructions+=1;goto B699832;
case 0x699834:goto L699834;
case 0x699837:c.instructions+=12;goto B699837;
case 0x69983a:c.instructions+=11;goto B69983a;
case 0x69983d:c.instructions+=10;goto B69983d;
case 0x699840:c.instructions+=9;goto B699840;
case 0x699843:c.instructions+=8;goto B699843;
case 0x699846:c.instructions+=7;goto B699846;
case 0x699849:c.instructions+=6;goto B699849;
case 0x69984c:c.instructions+=5;goto B69984c;
case 0x69984f:c.instructions+=4;goto B69984f;
case 0x699852:c.instructions+=3;goto B699852;
case 0x699855:c.instructions+=2;goto B699855;
case 0x699858:c.instructions+=1;goto B699858;
case 0x69985a:goto L69985a;
case 0x69985b:c.instructions+=1;goto B69985b;
case 0x69985e:goto L69985e;
case 0x699860:c.instructions+=7;goto B699860;
case 0x699861:c.instructions+=6;goto B699861;
case 0x699863:c.instructions+=5;goto B699863;
case 0x699866:c.instructions+=4;goto B699866;
case 0x69986d:c.instructions+=3;goto B69986d;
case 0x699872:c.instructions+=2;goto B699872;
case 0x699873:c.instructions+=1;goto B699873;
case 0x699876:goto L699876;
case 0x699878:c.instructions+=5;goto B699878;
case 0x699879:c.instructions+=4;goto B699879;
case 0x69987b:c.instructions+=3;goto B69987b;
case 0x699880:c.instructions+=2;goto B699880;
case 0x699882:c.instructions+=1;goto B699882;
case 0x699884:goto L699884;
case 0x699887:c.instructions+=2;goto B699887;
case 0x69988d:c.instructions+=1;goto B69988d;
case 0x69988f:goto L69988f;
case 0x699895:c.instructions+=3;goto B699895;
case 0x699897:c.instructions+=2;goto B699897;
case 0x69989a:c.instructions+=1;goto B69989a;
case 0x69989f:goto L69989f;
case 0x6998a0:c.instructions+=1;goto B6998a0;
case 0x6998a3:goto L6998a3;
case 0x6998a5:c.instructions+=5;goto B6998a5;
case 0x6998a6:c.instructions+=4;goto B6998a6;
case 0x6998a8:c.instructions+=3;goto B6998a8;
case 0x6998ab:c.instructions+=2;goto B6998ab;
case 0x6998ad:c.instructions+=1;goto B6998ad;
case 0x6998af:goto L6998af;
case 0x6998b5:c.instructions+=2;goto B6998b5;
case 0x6998b8:c.instructions+=1;goto B6998b8;
case 0x6998bd:goto L6998bd;
case 0x6998be:c.instructions+=1;goto B6998be;
case 0x6998c1:goto L6998c1;
case 0x6998c3:c.instructions+=12;goto B6998c3;
case 0x6998c5:c.instructions+=11;goto B6998c5;
case 0x6998cb:c.instructions+=10;goto B6998cb;
case 0x6998ce:c.instructions+=9;goto B6998ce;
case 0x6998d1:c.instructions+=8;goto B6998d1;
case 0x6998d4:c.instructions+=7;goto B6998d4;
case 0x6998d7:c.instructions+=6;goto B6998d7;
case 0x6998da:c.instructions+=5;goto B6998da;
case 0x6998dd:c.instructions+=4;goto B6998dd;
case 0x6998e0:c.instructions+=3;goto B6998e0;
case 0x6998e3:c.instructions+=2;goto B6998e3;
case 0x6998e6:c.instructions+=1;goto B6998e6;
case 0x6998e7:goto L6998e7;
case 0x6998e9:c.instructions+=5;goto B6998e9;
case 0x6998ea:c.instructions+=4;goto B6998ea;
case 0x6998ec:c.instructions+=3;goto B6998ec;
case 0x6998ed:c.instructions+=2;goto B6998ed;
case 0x6998ef:c.instructions+=1;goto B6998ef;
case 0x6998f4:goto L6998f4;
case 0x6998f8:c.instructions+=1;goto B6998f8;
case 0x6998fa:goto L6998fa;
case 0x6998fb:c.instructions+=1;goto B6998fb;
case 0x699900:goto L699900;
case 0x699901:goto L699901;
case 0x699903:c.instructions+=3;goto B699903;
case 0x699904:c.instructions+=2;goto B699904;
case 0x699905:c.instructions+=1;goto B699905;
case 0x699908:goto L699908;
case 0x69990a:c.instructions+=9;goto B69990a;
case 0x69990b:c.instructions+=8;goto B69990b;
case 0x69990d:c.instructions+=7;goto B69990d;
case 0x69990e:c.instructions+=6;goto B69990e;
case 0x69990f:c.instructions+=5;goto B69990f;
case 0x699910:c.instructions+=4;goto B699910;
case 0x699912:c.instructions+=3;goto B699912;
case 0x699915:c.instructions+=2;goto B699915;
case 0x699918:c.instructions+=1;goto B699918;
case 0x69991e:goto L69991e;
case 0x699920:c.instructions+=1;goto B699920;
case 0x699922:goto L699922;
case 0x699924:c.instructions+=2;goto B699924;
case 0x699927:c.instructions+=1;goto B699927;
case 0x699929:goto L699929;
case 0x699930:goto L699930;
case 0x699933:c.instructions+=3;goto B699933;
case 0x699936:c.instructions+=2;goto B699936;
case 0x699937:c.instructions+=1;goto B699937;
case 0x69993c:goto L69993c;
case 0x69993e:c.instructions+=4;goto B69993e;
case 0x699940:c.instructions+=3;goto B699940;
case 0x699941:c.instructions+=2;goto B699941;
case 0x699944:c.instructions+=1;goto B699944;
case 0x699946:goto L699946;
case 0x699949:c.instructions+=2;goto B699949;
case 0x69994b:c.instructions+=1;goto B69994b;
case 0x69994d:goto L69994d;
case 0x69994f:c.instructions+=1;goto B69994f;
case 0x699954:goto L699954;
case 0x699957:c.instructions+=1;goto B699957;
case 0x699959:goto L699959;
case 0x69995c:c.instructions+=7;goto B69995c;
case 0x69995f:c.instructions+=6;goto B69995f;
case 0x699961:c.instructions+=5;goto B699961;
case 0x699964:c.instructions+=4;goto B699964;
case 0x699965:c.instructions+=3;goto B699965;
case 0x699968:c.instructions+=2;goto B699968;
case 0x699969:c.instructions+=1;goto B699969;
case 0x69996b:goto L69996b;
case 0x69996d:goto L69996d;
case 0x69996f:c.instructions+=1;goto B69996f;
case 0x699972:goto L699972;
case 0x699974:goto L699974;
case 0x699977:c.instructions+=8;goto B699977;
case 0x69997a:c.instructions+=7;goto B69997a;
case 0x69997c:c.instructions+=6;goto B69997c;
case 0x69997e:c.instructions+=5;goto B69997e;
case 0x699981:c.instructions+=4;goto B699981;
case 0x699984:c.instructions+=3;goto B699984;
case 0x699986:c.instructions+=2;goto B699986;
case 0x699989:c.instructions+=1;goto B699989;
case 0x69998b:goto L69998b;
case 0x69998d:goto L69998d;
case 0x69998f:c.instructions+=1;goto B69998f;
case 0x699992:goto L699992;
case 0x699994:goto L699994;
case 0x699997:c.instructions+=1;goto B699997;
case 0x69999c:goto L69999c;
case 0x69999f:c.instructions+=5;goto B69999f;
case 0x6999a0:c.instructions+=4;goto B6999a0;
case 0x6999a1:c.instructions+=3;goto B6999a1;
case 0x6999a4:c.instructions+=2;goto B6999a4;
case 0x6999a7:c.instructions+=1;goto B6999a7;
case 0x6999a8:goto L6999a8;
case 0x6999ab:c.instructions+=6;goto B6999ab;
case 0x6999ae:c.instructions+=5;goto B6999ae;
case 0x6999b1:c.instructions+=4;goto B6999b1;
case 0x6999b4:c.instructions+=3;goto B6999b4;
case 0x6999b7:c.instructions+=2;goto B6999b7;
case 0x6999ba:c.instructions+=1;goto B6999ba;
case 0x6999bd:goto L6999bd;
case 0x6999be:c.instructions+=2;goto B6999be;
case 0x6999bf:c.instructions+=1;goto B6999bf;
case 0x6999c2:goto L6999c2;
case 0x6999c4:c.instructions+=10;goto B6999c4;
case 0x6999c5:c.instructions+=9;goto B6999c5;
case 0x6999c7:c.instructions+=8;goto B6999c7;
case 0x6999c8:c.instructions+=7;goto B6999c8;
case 0x6999c9:c.instructions+=6;goto B6999c9;
case 0x6999ca:c.instructions+=5;goto B6999ca;
case 0x6999cc:c.instructions+=4;goto B6999cc;
case 0x6999cf:c.instructions+=3;goto B6999cf;
case 0x6999d2:c.instructions+=2;goto B6999d2;
case 0x6999d3:c.instructions+=1;goto B6999d3;
case 0x6999d9:goto L6999d9;
case 0x6999db:c.instructions+=1;goto B6999db;
case 0x6999dd:goto L6999dd;
case 0x6999df:c.instructions+=2;goto B6999df;
case 0x6999e2:c.instructions+=1;goto B6999e2;
case 0x6999e4:goto L6999e4;
case 0x6999eb:goto L6999eb;
case 0x6999ee:c.instructions+=3;goto B6999ee;
case 0x6999f1:c.instructions+=2;goto B6999f1;
case 0x6999f2:c.instructions+=1;goto B6999f2;
case 0x6999f7:goto L6999f7;
case 0x6999f9:c.instructions+=4;goto B6999f9;
case 0x6999fb:c.instructions+=3;goto B6999fb;
case 0x6999fc:c.instructions+=2;goto B6999fc;
case 0x6999ff:c.instructions+=1;goto B6999ff;
case 0x699a01:goto L699a01;
case 0x699a04:c.instructions+=2;goto B699a04;
case 0x699a06:c.instructions+=1;goto B699a06;
case 0x699a08:goto L699a08;
case 0x699a0a:c.instructions+=1;goto B699a0a;
case 0x699a0f:goto L699a0f;
case 0x699a12:c.instructions+=1;goto B699a12;
case 0x699a17:goto L699a17;
case 0x699a1a:c.instructions+=6;goto B699a1a;
case 0x699a1d:c.instructions+=5;goto B699a1d;
case 0x699a20:c.instructions+=4;goto B699a20;
case 0x699a22:c.instructions+=3;goto B699a22;
case 0x699a25:c.instructions+=2;goto B699a25;
case 0x699a26:c.instructions+=1;goto B699a26;
case 0x699a28:goto L699a28;
case 0x699a2a:goto L699a2a;
case 0x699a2c:c.instructions+=1;goto B699a2c;
case 0x699a2f:goto L699a2f;
case 0x699a31:goto L699a31;
case 0x699a34:c.instructions+=8;goto B699a34;
case 0x699a37:c.instructions+=7;goto B699a37;
case 0x699a39:c.instructions+=6;goto B699a39;
case 0x699a3b:c.instructions+=5;goto B699a3b;
case 0x699a3e:c.instructions+=4;goto B699a3e;
case 0x699a41:c.instructions+=3;goto B699a41;
case 0x699a43:c.instructions+=2;goto B699a43;
case 0x699a46:c.instructions+=1;goto B699a46;
case 0x699a48:goto L699a48;
case 0x699a4a:goto L699a4a;
case 0x699a4c:c.instructions+=1;goto B699a4c;
case 0x699a4f:goto L699a4f;
case 0x699a51:goto L699a51;
case 0x699a54:c.instructions+=1;goto B699a54;
case 0x699a59:goto L699a59;
case 0x699a5c:c.instructions+=4;goto B699a5c;
case 0x699a5d:c.instructions+=3;goto B699a5d;
case 0x699a60:c.instructions+=2;goto B699a60;
case 0x699a63:c.instructions+=1;goto B699a63;
case 0x699a64:goto L699a64;
case 0x699a67:c.instructions+=2;goto B699a67;
case 0x699a69:c.instructions+=1;goto B699a69;
case 0x699a6f:goto L699a6f;
case 0x699a72:c.instructions+=4;goto B699a72;
case 0x699a75:c.instructions+=3;goto B699a75;
case 0x699a78:c.instructions+=2;goto B699a78;
case 0x699a7c:c.instructions+=1;goto B699a7c;
case 0x699a82:goto L699a82;
case 0x699a86:c.instructions+=1;goto B699a86;
case 0x699a8c:goto L699a8c;
case 0x699a92:c.instructions+=8;goto B699a92;
case 0x699a95:c.instructions+=7;goto B699a95;
case 0x699a98:c.instructions+=6;goto B699a98;
case 0x699a9a:c.instructions+=5;goto B699a9a;
case 0x699a9c:c.instructions+=4;goto B699a9c;
case 0x699a9e:c.instructions+=3;goto B699a9e;
case 0x699aa0:c.instructions+=2;goto B699aa0;
case 0x699aa3:c.instructions+=1;goto B699aa3;
case 0x699aa5:goto L699aa5;
case 0x699aa8:c.instructions+=5;goto B699aa8;
case 0x699aae:c.instructions+=4;goto B699aae;
case 0x699ab0:c.instructions+=3;goto B699ab0;
case 0x699ab2:c.instructions+=2;goto B699ab2;
case 0x699ab5:c.instructions+=1;goto B699ab5;
case 0x699ab7:goto L699ab7;
case 0x699aba:c.instructions+=1;goto B699aba;
case 0x699abc:goto L699abc;
case 0x699abf:c.instructions+=1;goto B699abf;
case 0x699ac4:goto L699ac4;
case 0x699ac7:c.instructions+=7;goto B699ac7;
case 0x699aca:c.instructions+=6;goto B699aca;
case 0x699acd:c.instructions+=5;goto B699acd;
case 0x699acf:c.instructions+=4;goto B699acf;
case 0x699ad5:c.instructions+=3;goto B699ad5;
case 0x699ad7:c.instructions+=2;goto B699ad7;
case 0x699ada:c.instructions+=1;goto B699ada;
case 0x699adc:goto L699adc;
case 0x699adf:goto L699adf;
case 0x699ae2:c.instructions+=3;goto B699ae2;
case 0x699ae4:c.instructions+=2;goto B699ae4;
case 0x699ae7:c.instructions+=1;goto B699ae7;
case 0x699ae9:goto L699ae9;
case 0x699aec:goto L699aec;
case 0x699aef:c.instructions+=3;goto B699aef;
case 0x699af1:c.instructions+=2;goto B699af1;
case 0x699af4:c.instructions+=1;goto B699af4;
case 0x699af6:goto L699af6;
case 0x699af9:goto L699af9;
case 0x699afc:c.instructions+=5;goto B699afc;
case 0x699afe:c.instructions+=4;goto B699afe;
case 0x699b04:c.instructions+=3;goto B699b04;
case 0x699b06:c.instructions+=2;goto B699b06;
case 0x699b09:c.instructions+=1;goto B699b09;
case 0x699b0b:goto L699b0b;
case 0x699b0e:goto L699b0e;
case 0x699b11:c.instructions+=5;goto B699b11;
case 0x699b14:c.instructions+=4;goto B699b14;
case 0x699b17:c.instructions+=3;goto B699b17;
case 0x699b1a:c.instructions+=2;goto B699b1a;
case 0x699b1d:c.instructions+=1;goto B699b1d;
case 0x699b20:goto L699b20;
case 0x699b21:c.instructions+=3;goto B699b21;
case 0x699b22:c.instructions+=2;goto B699b22;
case 0x699b23:c.instructions+=1;goto B699b23;
case 0x699b26:goto L699b26;
case 0x699b28:c.instructions+=9;goto B699b28;
case 0x699b29:c.instructions+=8;goto B699b29;
case 0x699b2b:c.instructions+=7;goto B699b2b;
case 0x699b2c:c.instructions+=6;goto B699b2c;
case 0x699b2d:c.instructions+=5;goto B699b2d;
case 0x699b2e:c.instructions+=4;goto B699b2e;
case 0x699b30:c.instructions+=3;goto B699b30;
case 0x699b33:c.instructions+=2;goto B699b33;
case 0x699b36:c.instructions+=1;goto B699b36;
case 0x699b3c:goto L699b3c;
case 0x699b3e:c.instructions+=1;goto B699b3e;
case 0x699b40:goto L699b40;
case 0x699b42:c.instructions+=2;goto B699b42;
case 0x699b45:c.instructions+=1;goto B699b45;
case 0x699b47:goto L699b47;
case 0x699b4e:goto L699b4e;
case 0x699b51:c.instructions+=3;goto B699b51;
case 0x699b54:c.instructions+=2;goto B699b54;
case 0x699b55:c.instructions+=1;goto B699b55;
case 0x699b5a:goto L699b5a;
case 0x699b5c:c.instructions+=4;goto B699b5c;
case 0x699b5e:c.instructions+=3;goto B699b5e;
case 0x699b5f:c.instructions+=2;goto B699b5f;
case 0x699b62:c.instructions+=1;goto B699b62;
case 0x699b64:goto L699b64;
case 0x699b67:c.instructions+=2;goto B699b67;
case 0x699b69:c.instructions+=1;goto B699b69;
case 0x699b6b:goto L699b6b;
case 0x699b6d:c.instructions+=1;goto B699b6d;
case 0x699b72:goto L699b72;
case 0x699b75:c.instructions+=1;goto B699b75;
case 0x699b77:goto L699b77;
case 0x699b7a:c.instructions+=7;goto B699b7a;
case 0x699b7d:c.instructions+=6;goto B699b7d;
case 0x699b7f:c.instructions+=5;goto B699b7f;
case 0x699b82:c.instructions+=4;goto B699b82;
case 0x699b83:c.instructions+=3;goto B699b83;
case 0x699b86:c.instructions+=2;goto B699b86;
case 0x699b87:c.instructions+=1;goto B699b87;
case 0x699b89:goto L699b89;
case 0x699b8b:goto L699b8b;
case 0x699b8d:c.instructions+=1;goto B699b8d;
case 0x699b90:goto L699b90;
case 0x699b92:goto L699b92;
case 0x699b95:c.instructions+=8;goto B699b95;
case 0x699b98:c.instructions+=7;goto B699b98;
case 0x699b9a:c.instructions+=6;goto B699b9a;
case 0x699b9c:c.instructions+=5;goto B699b9c;
case 0x699b9f:c.instructions+=4;goto B699b9f;
case 0x699ba2:c.instructions+=3;goto B699ba2;
case 0x699ba4:c.instructions+=2;goto B699ba4;
case 0x699ba7:c.instructions+=1;goto B699ba7;
case 0x699ba9:goto L699ba9;
case 0x699bab:goto L699bab;
case 0x699bad:c.instructions+=1;goto B699bad;
case 0x699bb0:goto L699bb0;
case 0x699bb2:goto L699bb2;
case 0x699bb5:c.instructions+=1;goto B699bb5;
case 0x699bba:goto L699bba;
case 0x699bbd:c.instructions+=5;goto B699bbd;
case 0x699bbe:c.instructions+=4;goto B699bbe;
case 0x699bbf:c.instructions+=3;goto B699bbf;
case 0x699bc2:c.instructions+=2;goto B699bc2;
case 0x699bc5:c.instructions+=1;goto B699bc5;
case 0x699bc6:goto L699bc6;
case 0x699bc9:c.instructions+=6;goto B699bc9;
case 0x699bcc:c.instructions+=5;goto B699bcc;
case 0x699bcf:c.instructions+=4;goto B699bcf;
case 0x699bd2:c.instructions+=3;goto B699bd2;
case 0x699bd5:c.instructions+=2;goto B699bd5;
case 0x699bd8:c.instructions+=1;goto B699bd8;
case 0x699bdb:goto L699bdb;
case 0x699bdc:c.instructions+=2;goto B699bdc;
case 0x699bdd:c.instructions+=1;goto B699bdd;
case 0x699be0:goto L699be0;
case 0x699be2:c.instructions+=7;goto B699be2;
case 0x699be3:c.instructions+=6;goto B699be3;
case 0x699be5:c.instructions+=5;goto B699be5;
case 0x699be6:c.instructions+=4;goto B699be6;
case 0x699be7:c.instructions+=3;goto B699be7;
case 0x699be9:c.instructions+=2;goto B699be9;
case 0x699beb:c.instructions+=1;goto B699beb;
case 0x699bf0:goto L699bf0;
case 0x699bf2:c.instructions+=2;goto B699bf2;
case 0x699bf3:c.instructions+=1;goto B699bf3;
case 0x699bf5:goto L699bf5;
case 0x699bf7:c.instructions+=1;goto B699bf7;
case 0x699bfc:goto L699bfc;
case 0x699bfe:c.instructions+=1;goto B699bfe;
case 0x699c00:goto L699c00;
case 0x699c02:goto L699c02;
case 0x699c04:c.instructions+=1;goto B699c04;
case 0x699c06:goto L699c06;
case 0x699c09:c.instructions+=5;goto B699c09;
case 0x699c0b:c.instructions+=4;goto B699c0b;
case 0x699c0e:c.instructions+=3;goto B699c0e;
case 0x699c11:c.instructions+=2;goto B699c11;
case 0x699c14:c.instructions+=1;goto B699c14;
case 0x699c19:goto L699c19;
case 0x699c1b:c.instructions+=1;goto B699c1b;
case 0x699c1d:goto L699c1d;
case 0x699c1f:c.instructions+=2;goto B699c1f;
case 0x699c21:c.instructions+=1;goto B699c21;
case 0x699c26:goto L699c26;
case 0x699c29:c.instructions+=1;goto B699c29;
case 0x699c2b:goto L699c2b;
case 0x699c2c:c.instructions+=2;goto B699c2c;
case 0x699c2e:c.instructions+=1;goto B699c2e;
case 0x699c33:goto L699c33;
case 0x699c34:c.instructions+=3;goto B699c34;
case 0x699c35:c.instructions+=2;goto B699c35;
case 0x699c36:c.instructions+=1;goto B699c36;
case 0x699c39:goto L699c39;
case 0x699c3b:c.instructions+=7;goto B699c3b;
case 0x699c3c:c.instructions+=6;goto B699c3c;
case 0x699c3e:c.instructions+=5;goto B699c3e;
case 0x699c3f:c.instructions+=4;goto B699c3f;
case 0x699c40:c.instructions+=3;goto B699c40;
case 0x699c45:c.instructions+=2;goto B699c45;
case 0x699c47:c.instructions+=1;goto B699c47;
case 0x699c4c:goto L699c4c;
case 0x699c4e:c.instructions+=1;goto B699c4e;
case 0x699c50:goto L699c50;
case 0x699c52:c.instructions+=1;goto B699c52;
case 0x699c57:goto L699c57;
case 0x699c59:c.instructions+=1;goto B699c59;
case 0x699c5b:goto L699c5b;
case 0x699c5d:goto L699c5d;
case 0x699c5f:c.instructions+=1;goto B699c5f;
case 0x699c61:goto L699c61;
case 0x699c64:c.instructions+=8;goto B699c64;
case 0x699c65:c.instructions+=7;goto B699c65;
case 0x699c66:c.instructions+=6;goto B699c66;
case 0x699c69:c.instructions+=5;goto B699c69;
case 0x699c6c:c.instructions+=4;goto B699c6c;
case 0x699c6e:c.instructions+=3;goto B699c6e;
case 0x699c71:c.instructions+=2;goto B699c71;
case 0x699c74:c.instructions+=1;goto B699c74;
case 0x699c79:goto L699c79;
case 0x699c7b:c.instructions+=1;goto B699c7b;
case 0x699c7d:goto L699c7d;
case 0x699c7f:c.instructions+=2;goto B699c7f;
case 0x699c81:c.instructions+=1;goto B699c81;
case 0x699c86:goto L699c86;
case 0x699c89:c.instructions+=1;goto B699c89;
case 0x699c8b:goto L699c8b;
case 0x699c8c:c.instructions+=2;goto B699c8c;
case 0x699c8e:c.instructions+=1;goto B699c8e;
case 0x699c93:goto L699c93;
case 0x699c94:c.instructions+=3;goto B699c94;
case 0x699c95:c.instructions+=2;goto B699c95;
case 0x699c96:c.instructions+=1;goto B699c96;
case 0x699c99:goto L699c99;
case 0x699c9b:c.instructions+=7;goto B699c9b;
case 0x699c9c:c.instructions+=6;goto B699c9c;
case 0x699c9e:c.instructions+=5;goto B699c9e;
case 0x699c9f:c.instructions+=4;goto B699c9f;
case 0x699ca0:c.instructions+=3;goto B699ca0;
case 0x699ca2:c.instructions+=2;goto B699ca2;
case 0x699ca4:c.instructions+=1;goto B699ca4;
case 0x699ca9:goto L699ca9;
case 0x699cab:c.instructions+=1;goto B699cab;
case 0x699cad:goto L699cad;
case 0x699caf:c.instructions+=1;goto B699caf;
case 0x699cb4:goto L699cb4;
case 0x699cb6:c.instructions+=1;goto B699cb6;
case 0x699cb8:goto L699cb8;
case 0x699cba:goto L699cba;
case 0x699cbc:c.instructions+=1;goto B699cbc;
case 0x699cbe:goto L699cbe;
case 0x699cc0:c.instructions+=5;goto B699cc0;
case 0x699cc3:c.instructions+=4;goto B699cc3;
case 0x699cc5:c.instructions+=3;goto B699cc5;
case 0x699cc8:c.instructions+=2;goto B699cc8;
case 0x699ccb:c.instructions+=1;goto B699ccb;
case 0x699cd0:goto L699cd0;
case 0x699cd2:c.instructions+=1;goto B699cd2;
case 0x699cd4:goto L699cd4;
case 0x699cd6:c.instructions+=2;goto B699cd6;
case 0x699cd8:c.instructions+=1;goto B699cd8;
case 0x699cdd:goto L699cdd;
case 0x699ce0:c.instructions+=1;goto B699ce0;
case 0x699ce2:goto L699ce2;
case 0x699ce3:c.instructions+=2;goto B699ce3;
case 0x699ce5:c.instructions+=1;goto B699ce5;
case 0x699cea:goto L699cea;
case 0x699ceb:c.instructions+=3;goto B699ceb;
case 0x699cec:c.instructions+=2;goto B699cec;
case 0x699ced:c.instructions+=1;goto B699ced;
case 0x699cf0:goto L699cf0;
case 0x699cf2:c.instructions+=7;goto B699cf2;
case 0x699cf3:c.instructions+=6;goto B699cf3;
case 0x699cf5:c.instructions+=5;goto B699cf5;
case 0x699cf6:c.instructions+=4;goto B699cf6;
case 0x699cf7:c.instructions+=3;goto B699cf7;
case 0x699cf9:c.instructions+=2;goto B699cf9;
case 0x699cfb:c.instructions+=1;goto B699cfb;
case 0x699d00:goto L699d00;
case 0x699d02:c.instructions+=2;goto B699d02;
case 0x699d03:c.instructions+=1;goto B699d03;
case 0x699d05:goto L699d05;
case 0x699d07:c.instructions+=1;goto B699d07;
case 0x699d0c:goto L699d0c;
case 0x699d0e:c.instructions+=1;goto B699d0e;
case 0x699d10:goto L699d10;
case 0x699d12:goto L699d12;
case 0x699d14:c.instructions+=1;goto B699d14;
case 0x699d16:goto L699d16;
case 0x699d19:c.instructions+=2;goto B699d19;
case 0x699d1b:c.instructions+=1;goto B699d1b;
case 0x699d20:goto L699d20;
case 0x699d22:c.instructions+=1;goto B699d22;
case 0x699d24:goto L699d24;
case 0x699d26:c.instructions+=2;goto B699d26;
case 0x699d28:c.instructions+=1;goto B699d28;
case 0x699d2d:goto L699d2d;
case 0x699d30:c.instructions+=1;goto B699d30;
case 0x699d32:goto L699d32;
case 0x699d33:c.instructions+=2;goto B699d33;
case 0x699d35:c.instructions+=1;goto B699d35;
case 0x699d3a:goto L699d3a;
case 0x699d3b:c.instructions+=3;goto B699d3b;
case 0x699d3c:c.instructions+=2;goto B699d3c;
case 0x699d3d:c.instructions+=1;goto B699d3d;
case 0x699d40:goto L699d40;
case 0x699d42:c.instructions+=7;goto B699d42;
case 0x699d43:c.instructions+=6;goto B699d43;
case 0x699d45:c.instructions+=5;goto B699d45;
case 0x699d46:c.instructions+=4;goto B699d46;
case 0x699d47:c.instructions+=3;goto B699d47;
case 0x699d4c:c.instructions+=2;goto B699d4c;
case 0x699d4e:c.instructions+=1;goto B699d4e;
case 0x699d53:goto L699d53;
case 0x699d55:c.instructions+=1;goto B699d55;
case 0x699d57:goto L699d57;
case 0x699d59:c.instructions+=1;goto B699d59;
case 0x699d5e:goto L699d5e;
case 0x699d60:c.instructions+=1;goto B699d60;
case 0x699d62:goto L699d62;
case 0x699d64:goto L699d64;
case 0x699d66:c.instructions+=1;goto B699d66;
case 0x699d68:goto L699d68;
case 0x699d6b:c.instructions+=2;goto B699d6b;
case 0x699d6d:c.instructions+=1;goto B699d6d;
case 0x699d72:goto L699d72;
case 0x699d74:c.instructions+=1;goto B699d74;
case 0x699d76:goto L699d76;
case 0x699d78:c.instructions+=2;goto B699d78;
case 0x699d7a:c.instructions+=1;goto B699d7a;
case 0x699d7f:goto L699d7f;
case 0x699d82:c.instructions+=1;goto B699d82;
case 0x699d84:goto L699d84;
case 0x699d85:c.instructions+=2;goto B699d85;
case 0x699d87:c.instructions+=1;goto B699d87;
case 0x699d8c:goto L699d8c;
case 0x699d8d:c.instructions+=3;goto B699d8d;
case 0x699d8e:c.instructions+=2;goto B699d8e;
case 0x699d8f:c.instructions+=1;goto B699d8f;
case 0x699d92:goto L699d92;
case 0x699d94:c.instructions+=7;goto B699d94;
case 0x699d95:c.instructions+=6;goto B699d95;
case 0x699d97:c.instructions+=5;goto B699d97;
case 0x699d98:c.instructions+=4;goto B699d98;
case 0x699d99:c.instructions+=3;goto B699d99;
case 0x699d9b:c.instructions+=2;goto B699d9b;
case 0x699d9d:c.instructions+=1;goto B699d9d;
case 0x699da2:goto L699da2;
case 0x699da4:c.instructions+=1;goto B699da4;
case 0x699da6:goto L699da6;
case 0x699da8:c.instructions+=1;goto B699da8;
case 0x699dad:goto L699dad;
case 0x699daf:c.instructions+=1;goto B699daf;
case 0x699db1:goto L699db1;
case 0x699db3:goto L699db3;
case 0x699db5:c.instructions+=1;goto B699db5;
case 0x699db7:goto L699db7;
case 0x699dba:c.instructions+=2;goto B699dba;
case 0x699dbc:c.instructions+=1;goto B699dbc;
case 0x699dc1:goto L699dc1;
case 0x699dc3:c.instructions+=1;goto B699dc3;
case 0x699dc5:goto L699dc5;
case 0x699dc7:c.instructions+=2;goto B699dc7;
case 0x699dc9:c.instructions+=1;goto B699dc9;
case 0x699dce:goto L699dce;
case 0x699dd1:c.instructions+=1;goto B699dd1;
case 0x699dd3:goto L699dd3;
case 0x699dd4:c.instructions+=2;goto B699dd4;
case 0x699dd6:c.instructions+=1;goto B699dd6;
case 0x699ddb:goto L699ddb;
case 0x699ddc:c.instructions+=3;goto B699ddc;
case 0x699ddd:c.instructions+=2;goto B699ddd;
case 0x699dde:c.instructions+=1;goto B699dde;
case 0x699de1:goto L699de1;
case 0x699de3:c.instructions+=9;goto B699de3;
case 0x699de4:c.instructions+=8;goto B699de4;
case 0x699de6:c.instructions+=7;goto B699de6;
case 0x699de9:c.instructions+=6;goto B699de9;
case 0x699dec:c.instructions+=5;goto B699dec;
case 0x699def:c.instructions+=4;goto B699def;
case 0x699df2:c.instructions+=3;goto B699df2;
case 0x699df6:c.instructions+=2;goto B699df6;
case 0x699dfb:c.instructions+=1;goto B699dfb;
case 0x699dfd:goto L699dfd;
case 0x699e02:goto L699e02;
case 0x699e03:c.instructions+=1;goto B699e03;
case 0x699e06:goto L699e06;
case 0x699e08:c.instructions+=8;goto B699e08;
case 0x699e09:c.instructions+=7;goto B699e09;
case 0x699e0a:c.instructions+=6;goto B699e0a;
case 0x699e0c:c.instructions+=5;goto B699e0c;
case 0x699e0e:c.instructions+=4;goto B699e0e;
case 0x699e11:c.instructions+=3;goto B699e11;
case 0x699e12:c.instructions+=2;goto B699e12;
case 0x699e18:c.instructions+=1;goto B699e18;
case 0x699e1a:goto L699e1a;
case 0x699e1c:c.instructions+=2;goto B699e1c;
case 0x699e1f:c.instructions+=1;goto B699e1f;
case 0x699e21:goto L699e21;
case 0x699e24:c.instructions+=3;goto B699e24;
case 0x699e27:c.instructions+=2;goto B699e27;
case 0x699e29:c.instructions+=1;goto B699e29;
case 0x699e2b:goto L699e2b;
case 0x699e2d:c.instructions+=1;goto B699e2d;
case 0x699e32:goto L699e32;
case 0x699e33:c.instructions+=2;goto B699e33;
case 0x699e36:c.instructions+=1;goto B699e36;
case 0x699e38:goto L699e38;
case 0x699e3b:c.instructions+=1;goto B699e3b;
case 0x699e40:goto L699e40;
case 0x699e41:goto L699e41;
case 0x699e44:c.instructions+=1;goto B699e44;
case 0x699e46:goto L699e46;
case 0x699e48:c.instructions+=2;goto B699e48;
case 0x699e4b:c.instructions+=1;goto B699e4b;
case 0x699e4d:goto L699e4d;
case 0x699e50:c.instructions+=3;goto B699e50;
case 0x699e53:c.instructions+=2;goto B699e53;
case 0x699e55:c.instructions+=1;goto B699e55;
case 0x699e57:goto L699e57;
case 0x699e59:c.instructions+=1;goto B699e59;
case 0x699e5e:goto L699e5e;
case 0x699e5f:c.instructions+=2;goto B699e5f;
case 0x699e62:c.instructions+=1;goto B699e62;
case 0x699e64:goto L699e64;
case 0x699e67:c.instructions+=1;goto B699e67;
case 0x699e6c:goto L699e6c;
case 0x699e6d:goto L699e6d;
case 0x699e70:c.instructions+=1;goto B699e70;
case 0x699e72:goto L699e72;
case 0x699e74:c.instructions+=2;goto B699e74;
case 0x699e77:c.instructions+=1;goto B699e77;
case 0x699e79:goto L699e79;
case 0x699e7c:c.instructions+=3;goto B699e7c;
case 0x699e7f:c.instructions+=2;goto B699e7f;
case 0x699e81:c.instructions+=1;goto B699e81;
case 0x699e83:goto L699e83;
case 0x699e85:c.instructions+=1;goto B699e85;
case 0x699e8a:goto L699e8a;
case 0x699e8b:c.instructions+=2;goto B699e8b;
case 0x699e8e:c.instructions+=1;goto B699e8e;
case 0x699e90:goto L699e90;
case 0x699e93:c.instructions+=1;goto B699e93;
case 0x699e98:goto L699e98;
case 0x699e99:goto L699e99;
case 0x699e9a:c.instructions+=3;goto B699e9a;
case 0x699e9b:c.instructions+=2;goto B699e9b;
case 0x699e9c:c.instructions+=1;goto B699e9c;
case 0x699e9d:goto L699e9d;
case 0x699e9f:c.instructions+=14;goto B699e9f;
case 0x699ea0:c.instructions+=13;goto B699ea0;
case 0x699ea2:c.instructions+=12;goto B699ea2;
case 0x699ea3:c.instructions+=11;goto B699ea3;
case 0x699ea4:c.instructions+=10;goto B699ea4;
case 0x699ea6:c.instructions+=9;goto B699ea6;
case 0x699ea7:c.instructions+=8;goto B699ea7;
case 0x699eaa:c.instructions+=7;goto B699eaa;
case 0x699eac:c.instructions+=6;goto B699eac;
case 0x699eaf:c.instructions+=5;goto B699eaf;
case 0x699eb2:c.instructions+=4;goto B699eb2;
case 0x699eb5:c.instructions+=3;goto B699eb5;
case 0x699eb8:c.instructions+=2;goto B699eb8;
case 0x699eb9:c.instructions+=1;goto B699eb9;
case 0x699ebe:goto L699ebe;
case 0x699ec0:c.instructions+=3;goto B699ec0;
case 0x699ec1:c.instructions+=2;goto B699ec1;
case 0x699ec4:c.instructions+=1;goto B699ec4;
case 0x699eca:goto L699eca;
case 0x699ecd:c.instructions+=1;goto B699ecd;
case 0x699ecf:goto L699ecf;
case 0x699ed2:c.instructions+=3;goto B699ed2;
case 0x699ed5:c.instructions+=2;goto B699ed5;
case 0x699ed7:c.instructions+=1;goto B699ed7;
case 0x699edc:goto L699edc;
case 0x699edf:c.instructions+=1;goto B699edf;
case 0x699ee5:goto L699ee5;
case 0x699ee6:c.instructions+=2;goto B699ee6;
case 0x699ee9:c.instructions+=1;goto B699ee9;
case 0x699eeb:goto L699eeb;
case 0x699eef:c.instructions+=5;goto B699eef;
case 0x699ef2:c.instructions+=4;goto B699ef2;
case 0x699ef5:c.instructions+=3;goto B699ef5;
case 0x699ef8:c.instructions+=2;goto B699ef8;
case 0x699ef9:c.instructions+=1;goto B699ef9;
case 0x699efe:goto L699efe;
case 0x699f00:c.instructions+=4;goto B699f00;
case 0x699f02:c.instructions+=3;goto B699f02;
case 0x699f03:c.instructions+=2;goto B699f03;
case 0x699f06:c.instructions+=1;goto B699f06;
case 0x699f08:goto L699f08;
case 0x699f0b:c.instructions+=1;goto B699f0b;
case 0x699f0d:goto L699f0d;
case 0x699f10:c.instructions+=3;goto B699f10;
case 0x699f13:c.instructions+=2;goto B699f13;
case 0x699f15:c.instructions+=1;goto B699f15;
case 0x699f1a:goto L699f1a;
case 0x699f1d:c.instructions+=1;goto B699f1d;
case 0x699f1f:goto L699f1f;
case 0x699f20:c.instructions+=2;goto B699f20;
case 0x699f23:c.instructions+=1;goto B699f23;
case 0x699f25:goto L699f25;
case 0x699f29:c.instructions+=5;goto B699f29;
case 0x699f2c:c.instructions+=4;goto B699f2c;
case 0x699f2f:c.instructions+=3;goto B699f2f;
case 0x699f32:c.instructions+=2;goto B699f32;
case 0x699f33:c.instructions+=1;goto B699f33;
case 0x699f38:goto L699f38;
case 0x699f3a:c.instructions+=4;goto B699f3a;
case 0x699f3c:c.instructions+=3;goto B699f3c;
case 0x699f3d:c.instructions+=2;goto B699f3d;
case 0x699f40:c.instructions+=1;goto B699f40;
case 0x699f42:goto L699f42;
case 0x699f45:c.instructions+=1;goto B699f45;
case 0x699f47:goto L699f47;
case 0x699f4a:c.instructions+=3;goto B699f4a;
case 0x699f4d:c.instructions+=2;goto B699f4d;
case 0x699f4f:c.instructions+=1;goto B699f4f;
case 0x699f54:goto L699f54;
case 0x699f57:c.instructions+=1;goto B699f57;
case 0x699f59:goto L699f59;
case 0x699f5a:c.instructions+=2;goto B699f5a;
case 0x699f5d:c.instructions+=1;goto B699f5d;
case 0x699f5f:goto L699f5f;
case 0x699f61:goto L699f61;
case 0x699f62:c.instructions+=4;goto B699f62;
case 0x699f63:c.instructions+=3;goto B699f63;
case 0x699f64:c.instructions+=2;goto B699f64;
case 0x699f65:c.instructions+=1;goto B699f65;
case 0x699f68:goto L699f68;
case 0x699f6d:c.instructions+=1;goto B699f6d;
case 0x699f6f:goto L699f6f;
case 0x699f71:c.instructions+=13;goto B699f71;
case 0x699f72:c.instructions+=12;goto B699f72;
case 0x699f74:c.instructions+=11;goto B699f74;
case 0x699f77:c.instructions+=10;goto B699f77;
case 0x699f78:c.instructions+=9;goto B699f78;
case 0x699f7b:c.instructions+=8;goto B699f7b;
case 0x699f7e:c.instructions+=7;goto B699f7e;
case 0x699f7f:c.instructions+=6;goto B699f7f;
case 0x699f81:c.instructions+=5;goto B699f81;
case 0x699f84:c.instructions+=4;goto B699f84;
case 0x699f87:c.instructions+=3;goto B699f87;
case 0x699f88:c.instructions+=2;goto B699f88;
case 0x699f8a:c.instructions+=1;goto B699f8a;
case 0x699f8f:goto L699f8f;
case 0x699f92:c.instructions+=6;goto B699f92;
case 0x699f95:c.instructions+=5;goto B699f95;
case 0x699f96:c.instructions+=4;goto B699f96;
case 0x699f97:c.instructions+=3;goto B699f97;
case 0x699f99:c.instructions+=2;goto B699f99;
case 0x699f9d:c.instructions+=1;goto B699f9d;
case 0x699fa2:goto L699fa2;
case 0x699fa5:c.instructions+=6;goto B699fa5;
case 0x699fa8:c.instructions+=5;goto B699fa8;
case 0x699fa9:c.instructions+=4;goto B699fa9;
case 0x699fae:c.instructions+=3;goto B699fae;
case 0x699faf:c.instructions+=2;goto B699faf;
case 0x699fb0:c.instructions+=1;goto B699fb0;
case 0x699fb5:goto L699fb5;
case 0x699fb8:c.instructions+=6;goto B699fb8;
case 0x699fbd:c.instructions+=5;goto B699fbd;
case 0x699fbe:c.instructions+=4;goto B699fbe;
case 0x699fc0:c.instructions+=3;goto B699fc0;
case 0x699fc1:c.instructions+=2;goto B699fc1;
case 0x699fc2:c.instructions+=1;goto B699fc2;
case 0x699fc5:goto L699fc5;
case 0x699fc7:c.instructions+=5;goto B699fc7;
case 0x699fc8:c.instructions+=4;goto B699fc8;
case 0x699fca:c.instructions+=3;goto B699fca;
case 0x699fcb:c.instructions+=2;goto B699fcb;
case 0x699fcd:c.instructions+=1;goto B699fcd;
case 0x699fd2:goto L699fd2;
case 0x699fd6:c.instructions+=1;goto B699fd6;
case 0x699fd8:goto L699fd8;
case 0x699fd9:c.instructions+=1;goto B699fd9;
case 0x699fde:goto L699fde;
case 0x699fdf:goto L699fdf;
case 0x699fe1:c.instructions+=3;goto B699fe1;
case 0x699fe2:c.instructions+=2;goto B699fe2;
case 0x699fe3:c.instructions+=1;goto B699fe3;
case 0x699fe6:goto L699fe6;
case 0x699fe8:c.instructions+=9;goto B699fe8;
case 0x699fe9:c.instructions+=8;goto B699fe9;
case 0x699feb:c.instructions+=7;goto B699feb;
case 0x699fee:c.instructions+=6;goto B699fee;
case 0x699ff1:c.instructions+=5;goto B699ff1;
case 0x699ff4:c.instructions+=4;goto B699ff4;
case 0x699ff7:c.instructions+=3;goto B699ff7;
case 0x699ffa:c.instructions+=2;goto B699ffa;
case 0x699ffd:c.instructions+=1;goto B699ffd;
default:missing_instruction(c.pc);}
B699001:L699001:{c.instructions+=1;NFSU2_TR(0x699001);
if(r1(R+518)){{goto L699029;}}
}
B699003:L699003:{c.instructions+=2;NFSU2_TR(0x699003);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699008:{NFSU2_TR(0x699008);
{goto L699024;}
}
B69900a:L69900a:{c.instructions+=2;NFSU2_TR(0x69900a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69900f:{NFSU2_TR(0x69900f);
if(r1(R+518)){{goto L699029;}}
}
B699011:L699011:{c.instructions+=2;NFSU2_TR(0x699011);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699016:{NFSU2_TR(0x699016);
if(r1(R+518)){{goto L699029;}}
}
B699018:L699018:{c.instructions+=2;NFSU2_TR(0x699018);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69901d:{NFSU2_TR(0x69901d);
if(r1(R+518)){{goto L699029;}}
}
B69901f:L69901f:{c.instructions+=1;NFSU2_TR(0x69901f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x71000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699024:L699024:{c.instructions+=1;NFSU2_TR(0x699024);
if(r1(R+518)){{goto L699029;}}
}
B699026:L699026:{c.instructions+=2;NFSU2_TR(0x699026);
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
B699028:{NFSU2_TR(0x699028);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699029:L699029:{c.instructions+=3;NFSU2_TR(0x699029);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69902b:{NFSU2_TR(0x69902b);
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
B69902c:{NFSU2_TR(0x69902c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69902d:L69902d:{c.instructions+=5;NFSU2_TR(0x69902d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B69902f:{NFSU2_TR(0x69902f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B699034:{NFSU2_TR(0x699034);
w4(R+4,u32(0x74200000ull));
}
B699039:{NFSU2_TR(0x699039);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69903b:{NFSU2_TR(0x69903b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69907b;}}
}
B69903d:L69903d:{c.instructions+=1;NFSU2_TR(0x69903d);
if(r1(R+518)){{goto L6990af;}}
}
B69903f:L69903f:{c.instructions+=3;NFSU2_TR(0x69903f);
w4(R+4,u32(0x11500000ull));
}
B699044:{NFSU2_TR(0x699044);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699046:{NFSU2_TR(0x699046);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L699066;}}
}
B699048:L699048:{c.instructions+=1;NFSU2_TR(0x699048);
if(r1(R+518)){{goto L6990af;}}
}
B69904a:L69904a:{c.instructions+=2;NFSU2_TR(0x69904a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69904f:{NFSU2_TR(0x69904f);
if(r1(R+518)){{goto L6990af;}}
}
B699051:L699051:{c.instructions+=2;NFSU2_TR(0x699051);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699056:{NFSU2_TR(0x699056);
if(r1(R+518)){{goto L6990af;}}
}
B699058:L699058:{c.instructions+=2;NFSU2_TR(0x699058);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69905d:{NFSU2_TR(0x69905d);
if(r1(R+518)){{goto L6990af;}}
}
B69905f:L69905f:{c.instructions+=2;NFSU2_TR(0x69905f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699064:{NFSU2_TR(0x699064);
{goto L6990aa;}
}
B699066:L699066:{c.instructions+=2;NFSU2_TR(0x699066);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69906b:{NFSU2_TR(0x69906b);
if(r1(R+518)){{goto L6990af;}}
}
B69906d:L69906d:{c.instructions+=2;NFSU2_TR(0x69906d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699072:{NFSU2_TR(0x699072);
if(r1(R+518)){{goto L6990af;}}
}
B699074:L699074:{c.instructions+=2;NFSU2_TR(0x699074);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699079:{NFSU2_TR(0x699079);
{goto L6990aa;}
}
B69907b:L69907b:{c.instructions+=2;NFSU2_TR(0x69907b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699080:{NFSU2_TR(0x699080);
if(r1(R+518)){{goto L6990af;}}
}
B699082:L699082:{c.instructions+=2;NFSU2_TR(0x699082);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699087:{NFSU2_TR(0x699087);
if(r1(R+518)){{goto L6990af;}}
}
B699089:L699089:{c.instructions+=2;NFSU2_TR(0x699089);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69908e:{NFSU2_TR(0x69908e);
if(r1(R+518)){{goto L6990af;}}
}
B699090:L699090:{c.instructions+=2;NFSU2_TR(0x699090);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699095:{NFSU2_TR(0x699095);
if(r1(R+518)){{goto L6990af;}}
}
B699097:L699097:{c.instructions+=2;NFSU2_TR(0x699097);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69909c:{NFSU2_TR(0x69909c);
if(r1(R+518)){{goto L6990af;}}
}
B69909e:L69909e:{c.instructions+=2;NFSU2_TR(0x69909e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990a3:{NFSU2_TR(0x6990a3);
if(r1(R+518)){{goto L6990af;}}
}
B6990a5:L6990a5:{c.instructions+=1;NFSU2_TR(0x6990a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990aa:L6990aa:{c.instructions+=1;NFSU2_TR(0x6990aa);
if(r1(R+518)){{goto L6990af;}}
}
B6990ac:L6990ac:{c.instructions+=2;NFSU2_TR(0x6990ac);
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
B6990ae:{NFSU2_TR(0x6990ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6990af:L6990af:{c.instructions+=3;NFSU2_TR(0x6990af);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6990b1:{NFSU2_TR(0x6990b1);
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
B6990b2:{NFSU2_TR(0x6990b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6990b3:L6990b3:{c.instructions+=4;NFSU2_TR(0x6990b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6990b5:{NFSU2_TR(0x6990b5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6990ba:{NFSU2_TR(0x6990ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990bf:{NFSU2_TR(0x6990bf);
if(r1(R+518)){{goto L6990e7;}}
}
B6990c1:L6990c1:{c.instructions+=2;NFSU2_TR(0x6990c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990c6:{NFSU2_TR(0x6990c6);
if(r1(R+518)){{goto L6990e7;}}
}
B6990c8:L6990c8:{c.instructions+=2;NFSU2_TR(0x6990c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990cd:{NFSU2_TR(0x6990cd);
if(r1(R+518)){{goto L6990e7;}}
}
B6990cf:L6990cf:{c.instructions+=2;NFSU2_TR(0x6990cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990d4:{NFSU2_TR(0x6990d4);
if(r1(R+518)){{goto L6990e7;}}
}
B6990d6:L6990d6:{c.instructions+=2;NFSU2_TR(0x6990d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990db:{NFSU2_TR(0x6990db);
if(r1(R+518)){{goto L6990e7;}}
}
B6990dd:L6990dd:{c.instructions+=2;NFSU2_TR(0x6990dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990e2:{NFSU2_TR(0x6990e2);
if(r1(R+518)){{goto L6990e7;}}
}
B6990e4:L6990e4:{c.instructions+=2;NFSU2_TR(0x6990e4);
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
B6990e6:{NFSU2_TR(0x6990e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6990e7:L6990e7:{c.instructions+=3;NFSU2_TR(0x6990e7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6990e9:{NFSU2_TR(0x6990e9);
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
B6990ea:{NFSU2_TR(0x6990ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6990eb:L6990eb:{c.instructions+=4;NFSU2_TR(0x6990eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6990ed:{NFSU2_TR(0x6990ed);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6990f2:{NFSU2_TR(0x6990f2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990f7:{NFSU2_TR(0x6990f7);
if(r1(R+518)){{goto L699103;}}
}
B6990f9:L6990f9:{c.instructions+=2;NFSU2_TR(0x6990f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6990fe:{NFSU2_TR(0x6990fe);
if(r1(R+518)){{goto L699103;}}
}
B699100:L699100:{c.instructions+=2;NFSU2_TR(0x699100);
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
B699102:{NFSU2_TR(0x699102);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699103:L699103:{c.instructions+=3;NFSU2_TR(0x699103);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B699105:{NFSU2_TR(0x699105);
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
B699106:{NFSU2_TR(0x699106);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699107:L699107:{c.instructions+=5;NFSU2_TR(0x699107);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B699109:{NFSU2_TR(0x699109);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B69910e:{NFSU2_TR(0x69910e);
w4(R+4,u32(0x73800000ull));
}
B699113:{NFSU2_TR(0x699113);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699115:{NFSU2_TR(0x699115);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6991e4;}}
}
B69911b:L69911b:{c.instructions+=1;NFSU2_TR(0x69911b);
if(r1(R+518)){{goto L69926a;}}
}
B699121:L699121:{c.instructions+=3;NFSU2_TR(0x699121);
w4(R+4,u32(0x20900000ull));
}
B699126:{NFSU2_TR(0x699126);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699128:{NFSU2_TR(0x699128);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69918a;}}
}
B69912a:L69912a:{c.instructions+=1;NFSU2_TR(0x69912a);
if(r1(R+518)){{goto L69926a;}}
}
B699130:L699130:{c.instructions+=3;NFSU2_TR(0x699130);
w4(R+4,u32(0x11400000ull));
}
B699135:{NFSU2_TR(0x699135);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699137:{NFSU2_TR(0x699137);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69916a;}}
}
B699139:L699139:{c.instructions+=1;NFSU2_TR(0x699139);
if(r1(R+518)){{goto L69926a;}}
}
B69913f:L69913f:{c.instructions+=2;NFSU2_TR(0x69913f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699144:{NFSU2_TR(0x699144);
if(r1(R+518)){{goto L69926a;}}
}
B69914a:L69914a:{c.instructions+=2;NFSU2_TR(0x69914a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69914f:{NFSU2_TR(0x69914f);
if(r1(R+518)){{goto L69926a;}}
}
B699155:L699155:{c.instructions+=2;NFSU2_TR(0x699155);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69915a:{NFSU2_TR(0x69915a);
if(r1(R+518)){{goto L69926a;}}
}
B699160:L699160:{c.instructions+=2;NFSU2_TR(0x699160);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699165:{NFSU2_TR(0x699165);
{goto L699265;}
}
B69916a:L69916a:{c.instructions+=2;NFSU2_TR(0x69916a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69916f:{NFSU2_TR(0x69916f);
if(r1(R+518)){{goto L69926a;}}
}
B699175:L699175:{c.instructions+=2;NFSU2_TR(0x699175);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69917a:{NFSU2_TR(0x69917a);
if(r1(R+518)){{goto L69926a;}}
}
B699180:L699180:{c.instructions+=2;NFSU2_TR(0x699180);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699185:{NFSU2_TR(0x699185);
{goto L699265;}
}
B69918a:L69918a:{c.instructions+=3;NFSU2_TR(0x69918a);
w4(R+4,u32(0x73400000ull));
}
B69918f:{NFSU2_TR(0x69918f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699191:{NFSU2_TR(0x699191);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6991c4;}}
}
B699193:L699193:{c.instructions+=1;NFSU2_TR(0x699193);
if(r1(R+518)){{goto L69926a;}}
}
B699199:L699199:{c.instructions+=2;NFSU2_TR(0x699199);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69919e:{NFSU2_TR(0x69919e);
if(r1(R+518)){{goto L69926a;}}
}
B6991a4:L6991a4:{c.instructions+=2;NFSU2_TR(0x6991a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991a9:{NFSU2_TR(0x6991a9);
if(r1(R+518)){{goto L69926a;}}
}
B6991af:L6991af:{c.instructions+=2;NFSU2_TR(0x6991af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991b4:{NFSU2_TR(0x6991b4);
if(r1(R+518)){{goto L69926a;}}
}
B6991ba:L6991ba:{c.instructions+=2;NFSU2_TR(0x6991ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991bf:{NFSU2_TR(0x6991bf);
{goto L699265;}
}
B6991c4:L6991c4:{c.instructions+=2;NFSU2_TR(0x6991c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991c9:{NFSU2_TR(0x6991c9);
if(r1(R+518)){{goto L69926a;}}
}
B6991cf:L6991cf:{c.instructions+=2;NFSU2_TR(0x6991cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991d4:{NFSU2_TR(0x6991d4);
if(r1(R+518)){{goto L69926a;}}
}
B6991da:L6991da:{c.instructions+=2;NFSU2_TR(0x6991da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991df:{NFSU2_TR(0x6991df);
{goto L699265;}
}
B6991e4:L6991e4:{c.instructions+=3;NFSU2_TR(0x6991e4);
w4(R+4,u32(0x74100000ull));
}
B6991e9:{NFSU2_TR(0x6991e9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6991eb:{NFSU2_TR(0x6991eb);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69922b;}}
}
B6991ed:L6991ed:{c.instructions+=1;NFSU2_TR(0x6991ed);
if(r1(R+518)){{goto L69926a;}}
}
B6991ef:L6991ef:{c.instructions+=3;NFSU2_TR(0x6991ef);
w4(R+4,u32(0x73d00000ull));
}
B6991f4:{NFSU2_TR(0x6991f4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6991f6:{NFSU2_TR(0x6991f6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L699216;}}
}
B6991f8:L6991f8:{c.instructions+=1;NFSU2_TR(0x6991f8);
if(r1(R+518)){{goto L69926a;}}
}
B6991fa:L6991fa:{c.instructions+=2;NFSU2_TR(0x6991fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73900000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6991ff:{NFSU2_TR(0x6991ff);
if(r1(R+518)){{goto L69926a;}}
}
B699201:L699201:{c.instructions+=2;NFSU2_TR(0x699201);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699206:{NFSU2_TR(0x699206);
if(r1(R+518)){{goto L69926a;}}
}
B699208:L699208:{c.instructions+=2;NFSU2_TR(0x699208);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69920d:{NFSU2_TR(0x69920d);
if(r1(R+518)){{goto L69926a;}}
}
B69920f:L69920f:{c.instructions+=2;NFSU2_TR(0x69920f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699214:{NFSU2_TR(0x699214);
{goto L699265;}
}
B699216:L699216:{c.instructions+=2;NFSU2_TR(0x699216);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69921b:{NFSU2_TR(0x69921b);
if(r1(R+518)){{goto L69926a;}}
}
B69921d:L69921d:{c.instructions+=2;NFSU2_TR(0x69921d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699222:{NFSU2_TR(0x699222);
if(r1(R+518)){{goto L69926a;}}
}
B699224:L699224:{c.instructions+=2;NFSU2_TR(0x699224);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699229:{NFSU2_TR(0x699229);
{goto L699265;}
}
B69922b:L69922b:{c.instructions+=3;NFSU2_TR(0x69922b);
w4(R+4,u32(0x74600000ull));
}
B699230:{NFSU2_TR(0x699230);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699232:{NFSU2_TR(0x699232);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L699252;}}
}
B699234:L699234:{c.instructions+=1;NFSU2_TR(0x699234);
if(r1(R+518)){{goto L69926a;}}
}
B699236:L699236:{c.instructions+=2;NFSU2_TR(0x699236);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69923b:{NFSU2_TR(0x69923b);
if(r1(R+518)){{goto L69926a;}}
}
B69923d:L69923d:{c.instructions+=2;NFSU2_TR(0x69923d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699242:{NFSU2_TR(0x699242);
if(r1(R+518)){{goto L69926a;}}
}
B699244:L699244:{c.instructions+=2;NFSU2_TR(0x699244);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699249:{NFSU2_TR(0x699249);
if(r1(R+518)){{goto L69926a;}}
}
B69924b:L69924b:{c.instructions+=2;NFSU2_TR(0x69924b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699250:{NFSU2_TR(0x699250);
{goto L699265;}
}
B699252:L699252:{c.instructions+=2;NFSU2_TR(0x699252);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699257:{NFSU2_TR(0x699257);
if(r1(R+518)){{goto L69926a;}}
}
B699259:L699259:{c.instructions+=2;NFSU2_TR(0x699259);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69925e:{NFSU2_TR(0x69925e);
if(r1(R+518)){{goto L69926a;}}
}
B699260:L699260:{c.instructions+=1;NFSU2_TR(0x699260);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x74b00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699265:L699265:{c.instructions+=1;NFSU2_TR(0x699265);
if(r1(R+518)){{goto L69926a;}}
}
B699267:L699267:{c.instructions+=2;NFSU2_TR(0x699267);
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
B699269:{NFSU2_TR(0x699269);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69926a:L69926a:{c.instructions+=3;NFSU2_TR(0x69926a);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69926c:{NFSU2_TR(0x69926c);
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
B69926d:{NFSU2_TR(0x69926d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69926e:L69926e:{c.instructions+=5;NFSU2_TR(0x69926e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B699270:{NFSU2_TR(0x699270);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B699275:{NFSU2_TR(0x699275);
w4(R+4,u32(0x60800000ull));
}
B69927a:{NFSU2_TR(0x69927a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69927c:{NFSU2_TR(0x69927c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6992b1;}}
}
B69927e:L69927e:{c.instructions+=1;NFSU2_TR(0x69927e);
if(r1(R+518)){{goto L6992de;}}
}
B699280:L699280:{c.instructions+=2;NFSU2_TR(0x699280);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699285:{NFSU2_TR(0x699285);
if(r1(R+518)){{goto L6992de;}}
}
B699287:L699287:{c.instructions+=2;NFSU2_TR(0x699287);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69928c:{NFSU2_TR(0x69928c);
if(r1(R+518)){{goto L6992de;}}
}
B69928e:L69928e:{c.instructions+=2;NFSU2_TR(0x69928e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699293:{NFSU2_TR(0x699293);
if(r1(R+518)){{goto L6992de;}}
}
B699295:L699295:{c.instructions+=2;NFSU2_TR(0x699295);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69929a:{NFSU2_TR(0x69929a);
if(r1(R+518)){{goto L6992de;}}
}
B69929c:L69929c:{c.instructions+=2;NFSU2_TR(0x69929c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992a1:{NFSU2_TR(0x6992a1);
if(r1(R+518)){{goto L6992de;}}
}
B6992a3:L6992a3:{c.instructions+=2;NFSU2_TR(0x6992a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992a8:{NFSU2_TR(0x6992a8);
if(r1(R+518)){{goto L6992de;}}
}
B6992aa:L6992aa:{c.instructions+=2;NFSU2_TR(0x6992aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992af:{NFSU2_TR(0x6992af);
{goto L6992d9;}
}
B6992b1:L6992b1:{c.instructions+=2;NFSU2_TR(0x6992b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992b6:{NFSU2_TR(0x6992b6);
if(r1(R+518)){{goto L6992de;}}
}
B6992b8:L6992b8:{c.instructions+=2;NFSU2_TR(0x6992b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60c00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992bd:{NFSU2_TR(0x6992bd);
if(r1(R+518)){{goto L6992de;}}
}
B6992bf:L6992bf:{c.instructions+=2;NFSU2_TR(0x6992bf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992c4:{NFSU2_TR(0x6992c4);
if(r1(R+518)){{goto L6992de;}}
}
B6992c6:L6992c6:{c.instructions+=2;NFSU2_TR(0x6992c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992cb:{NFSU2_TR(0x6992cb);
if(r1(R+518)){{goto L6992de;}}
}
B6992cd:L6992cd:{c.instructions+=2;NFSU2_TR(0x6992cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992d2:{NFSU2_TR(0x6992d2);
if(r1(R+518)){{goto L6992de;}}
}
B6992d4:L6992d4:{c.instructions+=1;NFSU2_TR(0x6992d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6992d9:L6992d9:{c.instructions+=1;NFSU2_TR(0x6992d9);
if(r1(R+518)){{goto L6992de;}}
}
B6992db:L6992db:{c.instructions+=2;NFSU2_TR(0x6992db);
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
B6992dd:{NFSU2_TR(0x6992dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6992de:L6992de:{c.instructions+=3;NFSU2_TR(0x6992de);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6992e0:{NFSU2_TR(0x6992e0);
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
B6992e1:{NFSU2_TR(0x6992e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6992e2:L6992e2:{c.instructions+=8;NFSU2_TR(0x6992e2);
__builtin_memmove((R+28),(R+28),4);
}
B6992e4:{NFSU2_TR(0x6992e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6992e5:{NFSU2_TR(0x6992e5);
__builtin_memmove((R+20),(R+16),4);
}
B6992e7:{NFSU2_TR(0x6992e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6992ea:{NFSU2_TR(0x6992ea);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8a68e8,u32(u32(m4(0x8a68e8))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8a68e8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a68e8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a68e8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6992f1:{NFSU2_TR(0x6992f1);
__builtin_memmove(gp(0x8a68ec),(R+0),4);
}
B6992f6:{NFSU2_TR(0x6992f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6992f7:{NFSU2_TR(0x6992f7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6992fa:L6992fa:{c.instructions+=9;NFSU2_TR(0x6992fa);
__builtin_memmove((R+28),(R+28),4);
}
B6992fc:{NFSU2_TR(0x6992fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6992fd:{NFSU2_TR(0x6992fd);
__builtin_memmove((R+20),(R+16),4);
}
B6992ff:{NFSU2_TR(0x6992ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699302:{NFSU2_TR(0x699302);
__builtin_memmove((R+4),gp(0x8a68ec),4);
}
B699308:{NFSU2_TR(0x699308);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69930a:{NFSU2_TR(0x69930a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B69930d:{NFSU2_TR(0x69930d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69930e:{NFSU2_TR(0x69930e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699313ull));
TAIL_STATIC(0x671ccbu,671);
}
B699313:L699313:{c.instructions+=2;NFSU2_TR(0x699313);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699314:{NFSU2_TR(0x699314);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699317:L699317:{c.instructions+=6;NFSU2_TR(0x699317);
__builtin_memmove((R+28),(R+28),4);
}
B699319:{NFSU2_TR(0x699319);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69931a:{NFSU2_TR(0x69931a);
__builtin_memmove((R+20),(R+16),4);
}
B69931c:{NFSU2_TR(0x69931c);
__builtin_memmove((R+0),gp(0x8a68e8),4);
}
B699321:{NFSU2_TR(0x699321);
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
B699323:{NFSU2_TR(0x699323);
if(r1(R+518)){{goto L699330;}}
}
B699325:L699325:{c.instructions+=3;NFSU2_TR(0x699325);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699328:{NFSU2_TR(0x699328);
__builtin_memmove(gp(0x8a68e8),(R+4),4);
}
B69932e:{NFSU2_TR(0x69932e);
{goto L699340;}
}
B699330:L699330:{c.instructions+=4;NFSU2_TR(0x699330);
__builtin_memmove((R+4),gp(0x8a68ec),4);
}
B699336:{NFSU2_TR(0x699336);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699338:{NFSU2_TR(0x699338);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69933b:{NFSU2_TR(0x69933b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699340ull));
TAIL_STATIC(0x671ccbu,671);
}
B699340:L699340:{c.instructions+=2;NFSU2_TR(0x699340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699341:{NFSU2_TR(0x699341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699344:L699344:{c.instructions+=6;NFSU2_TR(0x699344);
__builtin_memmove((R+28),(R+28),4);
}
B699346:{NFSU2_TR(0x699346);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699347:{NFSU2_TR(0x699347);
__builtin_memmove((R+20),(R+16),4);
}
B699349:{NFSU2_TR(0x699349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69934c:{NFSU2_TR(0x69934c);
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
B69934e:{NFSU2_TR(0x69934e);
if(r1(R+518)){{goto L69935e;}}
}
B699350:L699350:{c.instructions+=3;NFSU2_TR(0x699350);
__builtin_memmove((R+4),gp(0x8a68e8),4);
}
B699356:{NFSU2_TR(0x699356);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699359:{NFSU2_TR(0x699359);
__builtin_memmove(gp(0x8a68e8),(R+0),4);
}
B69935e:L69935e:{c.instructions+=2;NFSU2_TR(0x69935e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69935f:{NFSU2_TR(0x69935f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699362:L699362:{c.instructions+=18;NFSU2_TR(0x699362);
__builtin_memmove((R+28),(R+28),4);
}
B699364:{NFSU2_TR(0x699364);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699365:{NFSU2_TR(0x699365);
__builtin_memmove((R+20),(R+16),4);
}
B699367:{NFSU2_TR(0x699367);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69936a:{NFSU2_TR(0x69936a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69936b:{NFSU2_TR(0x69936b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69936c:{NFSU2_TR(0x69936c);
__builtin_memmove((R+24),(R+4),4);
}
B69936e:{NFSU2_TR(0x69936e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699371:{NFSU2_TR(0x699371);
__builtin_memmove((R+0),(R+8),4);
}
B699373:{NFSU2_TR(0x699373);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699374:{NFSU2_TR(0x699374);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699377:{NFSU2_TR(0x699377);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B699379:{NFSU2_TR(0x699379);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B69937e:{NFSU2_TR(0x69937e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699381:{NFSU2_TR(0x699381);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B699383:{NFSU2_TR(0x699383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699386:{NFSU2_TR(0x699386);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699389:{NFSU2_TR(0x699389);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699536;}}
}
B69938f:L69938f:{c.instructions+=3;NFSU2_TR(0x69938f);
__builtin_memmove((R+12),(R+8),4);
}
B699391:{NFSU2_TR(0x699391);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xf0000000ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B699397:{NFSU2_TR(0x699397);
if(r1(R+518)){{goto L699500;}}
}
B69939d:L69939d:{c.instructions+=2;NFSU2_TR(0x69939d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993a3:{NFSU2_TR(0x6993a3);
if(r1(R+518)){{goto L6994d8;}}
}
B6993a9:L6993a9:{c.instructions+=2;NFSU2_TR(0x6993a9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993af:{NFSU2_TR(0x6993af);
if(r1(R+518)){{goto L6994fb;}}
}
B6993b5:L6993b5:{c.instructions+=2;NFSU2_TR(0x6993b5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993bb:{NFSU2_TR(0x6993bb);
if(r1(R+518)){{goto L6994f6;}}
}
B6993c1:L6993c1:{c.instructions+=2;NFSU2_TR(0x6993c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993c7:{NFSU2_TR(0x6993c7);
if(r1(R+518)){{goto L6994ef;}}
}
B6993cd:L6993cd:{c.instructions+=2;NFSU2_TR(0x6993cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993d3:{NFSU2_TR(0x6993d3);
if(r1(R+518)){{goto L6994b2;}}
}
B6993d9:L6993d9:{c.instructions+=3;NFSU2_TR(0x6993d9);
w4(R+0,u32(0x60000000ull));
}
B6993de:{NFSU2_TR(0x6993de);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993e0:{NFSU2_TR(0x6993e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699504;}}
}
B6993e6:L6993e6:{c.instructions+=4;NFSU2_TR(0x6993e6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6993ec:{NFSU2_TR(0x6993ec);
w4(R+12,u32(0x60a00000ull));
}
B6993f1:{NFSU2_TR(0x6993f1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993f3:{NFSU2_TR(0x6993f3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69945c;}}
}
B6993f5:L6993f5:{c.instructions+=1;NFSU2_TR(0x6993f5);
if(r1(R+518)){{goto L699458;}}
}
B6993f7:L6993f7:{c.instructions+=3;NFSU2_TR(0x6993f7);
w4(R+12,u32(0x60500000ull));
}
B6993fc:{NFSU2_TR(0x6993fc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6993fe:{NFSU2_TR(0x6993fe);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L699438;}}
}
B699400:L699400:{c.instructions+=1;NFSU2_TR(0x699400);
if(r1(R+518)){{goto L69942e;}}
}
B699402:L699402:{c.instructions+=2;NFSU2_TR(0x699402);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699404:{NFSU2_TR(0x699404);
if(r1(R+518)){{goto L69942e;}}
}
B699406:L699406:{c.instructions+=2;NFSU2_TR(0x699406);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69940c:{NFSU2_TR(0x69940c);
if(r1(R+518)){{goto L69942a;}}
}
B69940e:L69940e:{c.instructions+=2;NFSU2_TR(0x69940e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699414:{NFSU2_TR(0x699414);
if(r1(R+518)){{goto L69942a;}}
}
B699416:L699416:{c.instructions+=2;NFSU2_TR(0x699416);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69941c:{NFSU2_TR(0x69941c);
if(r1(R+518)){{goto L69942a;}}
}
B69941e:L69941e:{c.instructions+=1;NFSU2_TR(0x69941e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699424:L699424:{c.instructions+=1;NFSU2_TR(0x699424);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699504;}}
}
B69942a:L69942a:{c.instructions+=2;NFSU2_TR(0x69942a);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69942c:{NFSU2_TR(0x69942c);
{goto L6994ac;}
}
B69942e:L69942e:{c.instructions+=4;NFSU2_TR(0x69942e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699430:{NFSU2_TR(0x699430);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699431:{NFSU2_TR(0x699431);
__builtin_memmove((R+4),(R+28),4);
}
B699433:{NFSU2_TR(0x699433);
{goto L699504;}
}
B699438:L699438:{c.instructions+=2;NFSU2_TR(0x699438);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69943e:{NFSU2_TR(0x69943e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B699440:L699440:{c.instructions+=2;NFSU2_TR(0x699440);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699446:{NFSU2_TR(0x699446);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B699448:L699448:{c.instructions+=2;NFSU2_TR(0x699448);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69944e:{NFSU2_TR(0x69944e);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B699450:L699450:{c.instructions+=2;NFSU2_TR(0x699450);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699456:{NFSU2_TR(0x699456);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699424u);}goto L699424;}
}
B699458:L699458:{c.instructions+=2;NFSU2_TR(0x699458);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69945a:{NFSU2_TR(0x69945a);
{goto L6994ac;}
}
B69945c:L69945c:{c.instructions+=3;NFSU2_TR(0x69945c);
w4(R+0,u32(0x60f00000ull));
}
B699461:{NFSU2_TR(0x699461);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699463:{NFSU2_TR(0x699463);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L699487;}}
}
B699465:L699465:{c.instructions+=1;NFSU2_TR(0x699465);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699458u);}goto L699458;}}
}
B699467:L699467:{c.instructions+=2;NFSU2_TR(0x699467);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60b00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69946d:{NFSU2_TR(0x69946d);
if(r1(R+518)){{goto L6994aa;}}
}
B69946f:L69946f:{c.instructions+=2;NFSU2_TR(0x69946f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60c00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699475:{NFSU2_TR(0x699475);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B699477:L699477:{c.instructions+=2;NFSU2_TR(0x699477);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60d00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69947d:{NFSU2_TR(0x69947d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B69947f:L69947f:{c.instructions+=2;NFSU2_TR(0x69947f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60e00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699485:{NFSU2_TR(0x699485);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699424u);}goto L699424;}
}
B699487:L699487:{c.instructions+=2;NFSU2_TR(0x699487);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69948d:{NFSU2_TR(0x69948d);
if(r1(R+518)){{goto L6994aa;}}
}
B69948f:L69948f:{c.instructions+=2;NFSU2_TR(0x69948f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699495:{NFSU2_TR(0x699495);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B699497:L699497:{c.instructions+=2;NFSU2_TR(0x699497);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69949d:{NFSU2_TR(0x69949d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69942au);}goto L69942a;}}
}
B69949f:L69949f:{c.instructions+=2;NFSU2_TR(0x69949f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6994a5:{NFSU2_TR(0x6994a5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699424u);}goto L699424;}
}
B6994aa:L6994aa:{c.instructions+=1;NFSU2_TR(0x6994aa);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6994ac:L6994ac:{c.instructions+=4;NFSU2_TR(0x6994ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6994ad:{NFSU2_TR(0x6994ad);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6994af:{NFSU2_TR(0x6994af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6994b0:{NFSU2_TR(0x6994b0);
{goto L699504;}
}
B6994b2:L6994b2:{c.instructions+=3;NFSU2_TR(0x6994b2);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6994b8:{NFSU2_TR(0x6994b8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6994be:{NFSU2_TR(0x6994be);
if(r1(R+518)){{goto L6994e2;}}
}
B6994c0:L6994c0:{c.instructions+=2;NFSU2_TR(0x6994c0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6994c6:{NFSU2_TR(0x6994c6);
if(r1(R+518)){{goto L6994d8;}}
}
B6994c8:L6994c8:{c.instructions+=2;NFSU2_TR(0x6994c8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6994ce:{NFSU2_TR(0x6994ce);
if(r1(R+518)){{goto L6994de;}}
}
B6994d0:L6994d0:{c.instructions+=2;NFSU2_TR(0x6994d0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6994d6:{NFSU2_TR(0x6994d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699504;}}
}
B6994d8:L6994d8:{c.instructions+=1;NFSU2_TR(0x6994d8);
__builtin_memmove((R+4),(R+0),4);
}
B6994da:L6994da:{c.instructions+=2;NFSU2_TR(0x6994da);
__builtin_memmove((R+28),(R+0),4);
}
B6994dc:{NFSU2_TR(0x6994dc);
{goto L699504;}
}
B6994de:L6994de:{c.instructions+=2;NFSU2_TR(0x6994de);
__builtin_memmove((R+4),(R+0),4);
}
B6994e0:{NFSU2_TR(0x6994e0);
{goto L6994ea;}
}
B6994e2:L6994e2:{c.instructions+=3;NFSU2_TR(0x6994e2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6994e5:{NFSU2_TR(0x6994e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6994e8:{NFSU2_TR(0x6994e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699504;}}
}
B6994ea:L6994ea:{c.instructions+=3;NFSU2_TR(0x6994ea);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6994ec:{NFSU2_TR(0x6994ec);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6994ed:{NFSU2_TR(0x6994ed);
{goto L699504;}
}
B6994ef:L6994ef:{c.instructions+=3;NFSU2_TR(0x6994ef);
__builtin_memmove((R+4),(R+0),4);
}
B6994f1:{NFSU2_TR(0x6994f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6994f4:{NFSU2_TR(0x6994f4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6994dau);}goto L6994da;}
}
B6994f6:L6994f6:{c.instructions+=2;NFSU2_TR(0x6994f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6994f9:{NFSU2_TR(0x6994f9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6994dau);}goto L6994da;}
}
B6994fb:L6994fb:{c.instructions+=2;NFSU2_TR(0x6994fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6994fe:{NFSU2_TR(0x6994fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6994dau);}goto L6994da;}
}
B699500:L699500:{c.instructions+=2;NFSU2_TR(0x699500);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B699502:{NFSU2_TR(0x699502);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B699504:L699504:{c.instructions+=3;NFSU2_TR(0x699504);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B699507:{NFSU2_TR(0x699507);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B69950a:{NFSU2_TR(0x69950a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69950f;}}
}
B69950c:L69950c:{c.instructions+=1;NFSU2_TR(0x69950c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69950f:L69950f:{c.instructions+=2;NFSU2_TR(0x69950f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699512:{NFSU2_TR(0x699512);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699517;}}
}
B699514:L699514:{c.instructions+=1;NFSU2_TR(0x699514);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699517:L699517:{c.instructions+=3;NFSU2_TR(0x699517);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69951a:{NFSU2_TR(0x69951a);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69951c:{NFSU2_TR(0x69951c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69952d;}}
}
B69951e:L69951e:{c.instructions+=3;NFSU2_TR(0x69951e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699521:{NFSU2_TR(0x699521);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B699523:{NFSU2_TR(0x699523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69952d;}}
}
B699525:L699525:{c.instructions+=2;NFSU2_TR(0x699525);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B699527:{NFSU2_TR(0x699527);
if(r1(R+518)){{goto L69952d;}}
}
B699529:L699529:{c.instructions+=2;NFSU2_TR(0x699529);
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
B69952b:{NFSU2_TR(0x69952b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699534;}}
}
B69952d:L69952d:{c.instructions+=2;NFSU2_TR(0x69952d);
w4(R+0,u32(0x80004005ull));
}
B699532:{NFSU2_TR(0x699532);
{goto L6995a6;}
}
B699534:L699534:{c.instructions+=1;NFSU2_TR(0x699534);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B699536:L699536:{c.instructions+=3;NFSU2_TR(0x699536);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699539:{NFSU2_TR(0x699539);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B69953c:{NFSU2_TR(0x69953c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L699546;}}
}
B69953e:L69953e:{c.instructions+=3;NFSU2_TR(0x69953e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B699541:{NFSU2_TR(0x699541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699544:{NFSU2_TR(0x699544);
{goto L699553;}
}
B699546:L699546:{c.instructions+=2;NFSU2_TR(0x699546);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699547:{NFSU2_TR(0x699547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69954cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6992fau);}goto L6992fa;}
}
B69954c:L69954c:{c.instructions+=3;NFSU2_TR(0x69954c);
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
B69954e:{NFSU2_TR(0x69954e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699551:{NFSU2_TR(0x699551);
if(r1(R+518)){{goto L6995ba;}}
}
B699553:L699553:{c.instructions+=3;NFSU2_TR(0x699553);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699556:{NFSU2_TR(0x699556);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699559:{NFSU2_TR(0x699559);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6995ad;}}
}
B69955b:L69955b:{c.instructions+=2;NFSU2_TR(0x69955b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+0),(U+0),4);
}
B69955e:{NFSU2_TR(0x69955e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699561:L699561:{c.instructions+=6;NFSU2_TR(0x699561);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699564:{NFSU2_TR(0x699564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699567:{NFSU2_TR(0x699567);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69956a:{NFSU2_TR(0x69956a);
__builtin_memmove((R+8),(R+4),4);
}
B69956c:{NFSU2_TR(0x69956c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B69956f:{NFSU2_TR(0x69956f);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B699572:L699572:{c.instructions+=1;NFSU2_TR(0x699572);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L699574;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699572u);}goto L699572;}
}
B699574:L699574:{c.instructions+=2;NFSU2_TR(0x699574);
__builtin_memmove((R+4),(R+8),4);
}
B699576:{NFSU2_TR(0x699576);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699579:L699579:{c.instructions+=1;NFSU2_TR(0x699579);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L69957b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699579u);}goto L699579;}
}
B69957b:L69957b:{c.instructions+=6;NFSU2_TR(0x69957b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69957e:{NFSU2_TR(0x69957e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699581:{NFSU2_TR(0x699581);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B699584:{NFSU2_TR(0x699584);
__builtin_memmove((R+8),(R+4),4);
}
B699586:{NFSU2_TR(0x699586);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699589:{NFSU2_TR(0x699589);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B69958c:L69958c:{c.instructions+=1;NFSU2_TR(0x69958c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69958e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69958cu);}goto L69958c;}
}
B69958e:L69958e:{c.instructions+=2;NFSU2_TR(0x69958e);
__builtin_memmove((R+4),(R+8),4);
}
B699590:{NFSU2_TR(0x699590);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699593:L699593:{c.instructions+=1;NFSU2_TR(0x699593);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L699595;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699593u);}goto L699593;}
}
B699595:L699595:{c.instructions+=6;NFSU2_TR(0x699595);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699598:{NFSU2_TR(0x699598);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69959b:{NFSU2_TR(0x69959b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69959e:{NFSU2_TR(0x69959e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6995a1:{NFSU2_TR(0x6995a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6995a4:{NFSU2_TR(0x6995a4);
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
B6995a6:L6995a6:{c.instructions+=5;NFSU2_TR(0x6995a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6995a7:{NFSU2_TR(0x6995a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6995a8:{NFSU2_TR(0x6995a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6995a9:{NFSU2_TR(0x6995a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6995aa:{NFSU2_TR(0x6995aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6995ad:L6995ad:{c.instructions+=2;NFSU2_TR(0x6995ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6995ae:{NFSU2_TR(0x6995ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6995b3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6992fau);}goto L6992fa;}
}
B6995b3:L6995b3:{c.instructions+=3;NFSU2_TR(0x6995b3);
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
B6995b5:{NFSU2_TR(0x6995b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6995b8:{NFSU2_TR(0x6995b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699561u);}goto L699561;}}
}
B6995ba:L6995ba:{c.instructions+=2;NFSU2_TR(0x6995ba);
w4(R+0,u32(0x8007000eull));
}
B6995bf:{NFSU2_TR(0x6995bf);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6995a6u);}goto L6995a6;}
}
B6995c1:L6995c1:{c.instructions+=8;NFSU2_TR(0x6995c1);
__builtin_memmove((R+28),(R+28),4);
}
B6995c3:{NFSU2_TR(0x6995c3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6995c4:{NFSU2_TR(0x6995c4);
__builtin_memmove((R+20),(R+16),4);
}
B6995c6:{NFSU2_TR(0x6995c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6995c9:{NFSU2_TR(0x6995c9);
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
B6995cb:{NFSU2_TR(0x6995cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6995cc:{NFSU2_TR(0x6995cc);
__builtin_memmove((R+12),(R+4),4);
}
B6995ce:{NFSU2_TR(0x6995ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6995da;}}
}
B6995d0:L6995d0:{c.instructions+=2;NFSU2_TR(0x6995d0);
w4(R+0,u32(0x80004005ull));
}
B6995d5:{NFSU2_TR(0x6995d5);
{goto L699670;}
}
B6995da:L6995da:{c.instructions+=5;NFSU2_TR(0x6995da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6995dc:{NFSU2_TR(0x6995dc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6995de:{NFSU2_TR(0x6995de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6995e1:{NFSU2_TR(0x6995e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6995e4:{NFSU2_TR(0x6995e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L69960a;}}
}
B6995e6:L6995e6:{c.instructions+=2;NFSU2_TR(0x6995e6);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6995e9:{NFSU2_TR(0x6995e9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6995f3;}}
}
B6995eb:L6995eb:{c.instructions+=3;NFSU2_TR(0x6995eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6995ee:{NFSU2_TR(0x6995ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6995f1:{NFSU2_TR(0x6995f1);
{goto L69960a;}
}
B6995f3:L6995f3:{c.instructions+=2;NFSU2_TR(0x6995f3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6995f4:{NFSU2_TR(0x6995f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6995f9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6992fau);}goto L6992fa;}
}
B6995f9:L6995f9:{c.instructions+=3;NFSU2_TR(0x6995f9);
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
B6995fb:{NFSU2_TR(0x6995fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6995fe:{NFSU2_TR(0x6995fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699607;}}
}
B699600:L699600:{c.instructions+=2;NFSU2_TR(0x699600);
w4(R+0,u32(0x8007000eull));
}
B699605:{NFSU2_TR(0x699605);
{goto L699670;}
}
B699607:L699607:{c.instructions+=1;NFSU2_TR(0x699607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69960a:L69960a:{c.instructions+=6;NFSU2_TR(0x69960a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69960d:{NFSU2_TR(0x69960d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69960e:{NFSU2_TR(0x69960e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699611:{NFSU2_TR(0x699611);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699614:{NFSU2_TR(0x699614);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699615:{NFSU2_TR(0x699615);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699618:L699618:{c.instructions+=1;NFSU2_TR(0x699618);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69961a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699618u);}goto L699618;}
}
B69961a:L69961a:{c.instructions+=3;NFSU2_TR(0x69961a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69961d:{NFSU2_TR(0x69961d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699620:{NFSU2_TR(0x699620);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699646;}}
}
B699622:L699622:{c.instructions+=2;NFSU2_TR(0x699622);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B699625:{NFSU2_TR(0x699625);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L69962f;}}
}
B699627:L699627:{c.instructions+=3;NFSU2_TR(0x699627);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B69962a:{NFSU2_TR(0x69962a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69962d:{NFSU2_TR(0x69962d);
{goto L699646;}
}
B69962f:L69962f:{c.instructions+=2;NFSU2_TR(0x69962f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699630:{NFSU2_TR(0x699630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699635ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6992fau);}goto L6992fa;}
}
B699635:L699635:{c.instructions+=3;NFSU2_TR(0x699635);
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
B699637:{NFSU2_TR(0x699637);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69963a:{NFSU2_TR(0x69963a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699643;}}
}
B69963c:L69963c:{c.instructions+=2;NFSU2_TR(0x69963c);
w4(R+0,u32(0x8007000eull));
}
B699641:{NFSU2_TR(0x699641);
{goto L69966e;}
}
B699643:L699643:{c.instructions+=1;NFSU2_TR(0x699643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699646:L699646:{c.instructions+=4;NFSU2_TR(0x699646);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699649:{NFSU2_TR(0x699649);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B69964c:{NFSU2_TR(0x69964c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69964f:{NFSU2_TR(0x69964f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699652:L699652:{c.instructions+=1;NFSU2_TR(0x699652);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L699654;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699652u);}goto L699652;}
}
B699654:L699654:{c.instructions+=9;NFSU2_TR(0x699654);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699657:{NFSU2_TR(0x699657);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69965a:{NFSU2_TR(0x69965a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69965d:{NFSU2_TR(0x69965d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699660:{NFSU2_TR(0x699660);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699663:{NFSU2_TR(0x699663);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699666:{NFSU2_TR(0x699666);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699669:{NFSU2_TR(0x699669);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69966c:{NFSU2_TR(0x69966c);
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
B69966e:L69966e:{c.instructions+=2;NFSU2_TR(0x69966e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B69966f:{NFSU2_TR(0x69966f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699670:L699670:{c.instructions+=3;NFSU2_TR(0x699670);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B699671:{NFSU2_TR(0x699671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699672:{NFSU2_TR(0x699672);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699675:L699675:{c.instructions+=7;NFSU2_TR(0x699675);
__builtin_memmove((R+28),(R+28),4);
}
B699677:{NFSU2_TR(0x699677);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699678:{NFSU2_TR(0x699678);
__builtin_memmove((R+20),(R+16),4);
}
B69967a:{NFSU2_TR(0x69967a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B69967c:{NFSU2_TR(0x69967c);
__builtin_memmove((R+0),(R+8),4);
}
B69967e:{NFSU2_TR(0x69967e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B699683:{NFSU2_TR(0x699683);
if(r1(R+518)){{goto L6996c1;}}
}
B699685:L699685:{c.instructions+=2;NFSU2_TR(0x699685);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B69968a:{NFSU2_TR(0x69968a);
if(r1(R+518)){{goto L6996bc;}}
}
B69968c:L69968c:{c.instructions+=2;NFSU2_TR(0x69968c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699691:{NFSU2_TR(0x699691);
if(r1(R+518)){{goto L6996b7;}}
}
B699693:L699693:{c.instructions+=2;NFSU2_TR(0x699693);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699698:{NFSU2_TR(0x699698);
if(r1(R+518)){{goto L6996bc;}}
}
B69969a:L69969a:{c.instructions+=4;NFSU2_TR(0x69969a);
__builtin_memmove((R+0),(R+8),4);
}
B69969c:{NFSU2_TR(0x69969c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000000ull))));
}
B6996a1:{NFSU2_TR(0x6996a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6996a6:{NFSU2_TR(0x6996a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6996ad;}}
}
B6996a8:L6996a8:{c.instructions+=3;NFSU2_TR(0x6996a8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6996aa:{NFSU2_TR(0x6996aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6996ab:{NFSU2_TR(0x6996ab);
{goto L6996c3;}
}
B6996ad:L6996ad:{c.instructions+=3;NFSU2_TR(0x6996ad);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffull))));
}
B6996b3:{NFSU2_TR(0x6996b3);
__builtin_memmove((R+0),(R+8),4);
}
B6996b5:{NFSU2_TR(0x6996b5);
{goto L6996c3;}
}
B6996b7:L6996b7:{c.instructions+=3;NFSU2_TR(0x6996b7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6996b9:{NFSU2_TR(0x6996b9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6996ba:{NFSU2_TR(0x6996ba);
{goto L6996c3;}
}
B6996bc:L6996bc:{c.instructions+=2;NFSU2_TR(0x6996bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6996bf:{NFSU2_TR(0x6996bf);
{goto L6996c3;}
}
B6996c1:L6996c1:{c.instructions+=1;NFSU2_TR(0x6996c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6996c3:L6996c3:{c.instructions+=6;NFSU2_TR(0x6996c3);
__builtin_memmove((R+8),(R+0),4);
}
B6996c5:{NFSU2_TR(0x6996c5);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B6996c9:{NFSU2_TR(0x6996c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6996ca:{NFSU2_TR(0x6996ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6996cd:{NFSU2_TR(0x6996cd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6996d0:{NFSU2_TR(0x6996d0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6996e0;}}
}
B6996d2:L6996d2:{c.instructions+=3;NFSU2_TR(0x6996d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6996d5:{NFSU2_TR(0x6996d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6996d7:{NFSU2_TR(0x6996d7);
if(r1(R+518)){{goto L6996dc;}}
}
B6996d9:L6996d9:{c.instructions+=1;NFSU2_TR(0x6996d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6996dc:L6996dc:{c.instructions+=2;NFSU2_TR(0x6996dc);
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
B6996de:{NFSU2_TR(0x6996de);
{goto L6996ef;}
}
B6996e0:L6996e0:{c.instructions+=3;NFSU2_TR(0x6996e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6996e3:{NFSU2_TR(0x6996e3);
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
B6996e5:{NFSU2_TR(0x6996e5);
if(r1(R+518)){{goto L6996ef;}}
}
B6996e7:L6996e7:{c.instructions+=3;NFSU2_TR(0x6996e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6996ea:{NFSU2_TR(0x6996ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6996ed:{NFSU2_TR(0x6996ed);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6996ef:L6996ef:{c.instructions+=3;NFSU2_TR(0x6996ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6996f0:{NFSU2_TR(0x6996f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6996f1:{NFSU2_TR(0x6996f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6996f4:L6996f4:{c.instructions+=1;NFSU2_TR(0x6996f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6996f5:L6996f5:{c.instructions+=39;NFSU2_TR(0x6996f5);
__builtin_memmove((R+28),(R+28),4);
}
B6996f7:{NFSU2_TR(0x6996f7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6996f8:{NFSU2_TR(0x6996f8);
__builtin_memmove((R+20),(R+16),4);
}
B6996fa:{NFSU2_TR(0x6996fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6996fd:{NFSU2_TR(0x6996fd);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699700:{NFSU2_TR(0x699700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699703:{NFSU2_TR(0x699703);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x10"::"a"(ea_):"memory");}
}
B699706:{NFSU2_TR(0x699706);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699709:{NFSU2_TR(0x699709);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B69970c:{NFSU2_TR(0x69970c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69970f:{NFSU2_TR(0x69970f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699712:{NFSU2_TR(0x699712);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B699715:{NFSU2_TR(0x699715);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699718:{NFSU2_TR(0x699718);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B69971a:{NFSU2_TR(0x69971a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69971d:{NFSU2_TR(0x69971d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699720:{NFSU2_TR(0x699720);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699723:{NFSU2_TR(0x699723);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699726:{NFSU2_TR(0x699726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699729:{NFSU2_TR(0x699729);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69972c:{NFSU2_TR(0x69972c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69972f:{NFSU2_TR(0x69972f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699732:{NFSU2_TR(0x699732);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699735:{NFSU2_TR(0x699735);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699738:{NFSU2_TR(0x699738);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69973b:{NFSU2_TR(0x69973b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69973e:{NFSU2_TR(0x69973e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699741:{NFSU2_TR(0x699741);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699744:{NFSU2_TR(0x699744);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B69974b:{NFSU2_TR(0x69974b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B69974d:{NFSU2_TR(0x69974d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699750:{NFSU2_TR(0x699750);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699753:{NFSU2_TR(0x699753);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699756:{NFSU2_TR(0x699756);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699759:{NFSU2_TR(0x699759);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69975c:{NFSU2_TR(0x69975c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69975f:{NFSU2_TR(0x69975f);
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
B699761:{NFSU2_TR(0x699761);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699762:{NFSU2_TR(0x699762);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699765:L699765:{c.instructions+=6;NFSU2_TR(0x699765);
__builtin_memmove((R+28),(R+28),4);
}
B699767:{NFSU2_TR(0x699767);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699768:{NFSU2_TR(0x699768);
__builtin_memmove((R+20),(R+16),4);
}
B69976a:{NFSU2_TR(0x69976a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69976d:{NFSU2_TR(0x69976d);
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
B69976f:{NFSU2_TR(0x69976f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L69977b;}}
}
B699771:L699771:{c.instructions+=2;NFSU2_TR(0x699771);
w4(R+0,u32(0x80004005ull));
}
B699776:{NFSU2_TR(0x699776);
{goto L69981d;}
}
B69977b:L69977b:{c.instructions+=55;NFSU2_TR(0x69977b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69977e:{NFSU2_TR(0x69977e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699781:{NFSU2_TR(0x699781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699784:{NFSU2_TR(0x699784);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699787:{NFSU2_TR(0x699787);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69978a:{NFSU2_TR(0x69978a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69978d:{NFSU2_TR(0x69978d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699790:{NFSU2_TR(0x699790);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699793:{NFSU2_TR(0x699793);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699796:{NFSU2_TR(0x699796);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699799:{NFSU2_TR(0x699799);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69979c:{NFSU2_TR(0x69979c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69979f:{NFSU2_TR(0x69979f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6997a2:{NFSU2_TR(0x6997a2);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6997a5:{NFSU2_TR(0x6997a5);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6997a8:{NFSU2_TR(0x6997a8);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6997ab:{NFSU2_TR(0x6997ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6997ad:{NFSU2_TR(0x6997ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6997af:{NFSU2_TR(0x6997af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997b2:{NFSU2_TR(0x6997b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997b5:{NFSU2_TR(0x6997b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997b8:{NFSU2_TR(0x6997b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997bb:{NFSU2_TR(0x6997bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997be:{NFSU2_TR(0x6997be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997c1:{NFSU2_TR(0x6997c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997c4:{NFSU2_TR(0x6997c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997c7:{NFSU2_TR(0x6997c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997ca:{NFSU2_TR(0x6997ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997cd:{NFSU2_TR(0x6997cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997d0:{NFSU2_TR(0x6997d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997d3:{NFSU2_TR(0x6997d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997d6:{NFSU2_TR(0x6997d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997d9:{NFSU2_TR(0x6997d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997dc:{NFSU2_TR(0x6997dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997df:{NFSU2_TR(0x6997df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997e2:{NFSU2_TR(0x6997e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997e5:{NFSU2_TR(0x6997e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997e8:{NFSU2_TR(0x6997e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997eb:{NFSU2_TR(0x6997eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997ee:{NFSU2_TR(0x6997ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997f1:{NFSU2_TR(0x6997f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997f4:{NFSU2_TR(0x6997f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997f7:{NFSU2_TR(0x6997f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6997fa:{NFSU2_TR(0x6997fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6997fd:{NFSU2_TR(0x6997fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699800:{NFSU2_TR(0x699800);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699803:{NFSU2_TR(0x699803);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699806:{NFSU2_TR(0x699806);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699809:{NFSU2_TR(0x699809);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69980c:{NFSU2_TR(0x69980c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69980f:{NFSU2_TR(0x69980f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699812:{NFSU2_TR(0x699812);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699815:{NFSU2_TR(0x699815);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699818:{NFSU2_TR(0x699818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69981b:{NFSU2_TR(0x69981b);
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
B69981d:L69981d:{c.instructions+=2;NFSU2_TR(0x69981d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69981e:{NFSU2_TR(0x69981e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699821:L699821:{c.instructions+=6;NFSU2_TR(0x699821);
__builtin_memmove((R+28),(R+28),4);
}
B699823:{NFSU2_TR(0x699823);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699824:{NFSU2_TR(0x699824);
__builtin_memmove((R+20),(R+16),4);
}
B699826:{NFSU2_TR(0x699826);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699829:{NFSU2_TR(0x699829);
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
B69982b:{NFSU2_TR(0x69982b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699834;}}
}
B69982d:L69982d:{c.instructions+=2;NFSU2_TR(0x69982d);
w4(R+0,u32(0x80004005ull));
}
B699832:{NFSU2_TR(0x699832);
{goto L69985a;}
}
B699834:L699834:{c.instructions+=13;NFSU2_TR(0x699834);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699837:{NFSU2_TR(0x699837);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69983a:{NFSU2_TR(0x69983a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69983d:{NFSU2_TR(0x69983d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699840:{NFSU2_TR(0x699840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699843:{NFSU2_TR(0x699843);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699846:{NFSU2_TR(0x699846);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699849:{NFSU2_TR(0x699849);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B69984c:{NFSU2_TR(0x69984c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B69984f:{NFSU2_TR(0x69984f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699852:{NFSU2_TR(0x699852);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699855:{NFSU2_TR(0x699855);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699858:{NFSU2_TR(0x699858);
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
B69985a:L69985a:{c.instructions+=2;NFSU2_TR(0x69985a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B69985b:{NFSU2_TR(0x69985b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B69985e:L69985e:{c.instructions+=8;NFSU2_TR(0x69985e);
__builtin_memmove((R+28),(R+28),4);
}
B699860:{NFSU2_TR(0x699860);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699861:{NFSU2_TR(0x699861);
__builtin_memmove((R+20),(R+16),4);
}
B699863:{NFSU2_TR(0x699863);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699866:{NFSU2_TR(0x699866);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x8a68f0,u32(u32(m4(0x8a68f0))&u32(u32(0x0ull))));
w1(R+519,u8(s32(m4(0x8a68f0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a68f0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a68f0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B69986d:{NFSU2_TR(0x69986d);
__builtin_memmove(gp(0x8a68f4),(R+0),4);
}
B699872:{NFSU2_TR(0x699872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699873:{NFSU2_TR(0x699873);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699876:L699876:{c.instructions+=6;NFSU2_TR(0x699876);
__builtin_memmove((R+28),(R+28),4);
}
B699878:{NFSU2_TR(0x699878);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699879:{NFSU2_TR(0x699879);
__builtin_memmove((R+20),(R+16),4);
}
B69987b:{NFSU2_TR(0x69987b);
__builtin_memmove((R+0),gp(0x8a68f0),4);
}
B699880:{NFSU2_TR(0x699880);
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
B699882:{NFSU2_TR(0x699882);
if(r1(R+518)){{goto L69988f;}}
}
B699884:L699884:{c.instructions+=3;NFSU2_TR(0x699884);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699887:{NFSU2_TR(0x699887);
__builtin_memmove(gp(0x8a68f0),(R+4),4);
}
B69988d:{NFSU2_TR(0x69988d);
{goto L69989f;}
}
B69988f:L69988f:{c.instructions+=4;NFSU2_TR(0x69988f);
__builtin_memmove((R+4),gp(0x8a68f4),4);
}
B699895:{NFSU2_TR(0x699895);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699897:{NFSU2_TR(0x699897);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B69989a:{NFSU2_TR(0x69989a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69989full));
TAIL_STATIC(0x671ccbu,671);
}
B69989f:L69989f:{c.instructions+=2;NFSU2_TR(0x69989f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6998a0:{NFSU2_TR(0x6998a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6998a3:L6998a3:{c.instructions+=6;NFSU2_TR(0x6998a3);
__builtin_memmove((R+28),(R+28),4);
}
B6998a5:{NFSU2_TR(0x6998a5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6998a6:{NFSU2_TR(0x6998a6);
__builtin_memmove((R+20),(R+16),4);
}
B6998a8:{NFSU2_TR(0x6998a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6998ab:{NFSU2_TR(0x6998ab);
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
B6998ad:{NFSU2_TR(0x6998ad);
if(r1(R+518)){{goto L6998bd;}}
}
B6998af:L6998af:{c.instructions+=3;NFSU2_TR(0x6998af);
__builtin_memmove((R+4),gp(0x8a68f0),4);
}
B6998b5:{NFSU2_TR(0x6998b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998b8:{NFSU2_TR(0x6998b8);
__builtin_memmove(gp(0x8a68f0),(R+0),4);
}
B6998bd:L6998bd:{c.instructions+=2;NFSU2_TR(0x6998bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6998be:{NFSU2_TR(0x6998be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6998c1:L6998c1:{c.instructions+=13;NFSU2_TR(0x6998c1);
__builtin_memmove((R+0),(R+4),4);
}
B6998c3:{NFSU2_TR(0x6998c3);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6998c5:{NFSU2_TR(0x6998c5);
u8 U[4];
w4(U+0,u32(0x7babe4ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6998cb:{NFSU2_TR(0x6998cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998ce:{NFSU2_TR(0x6998ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998d1:{NFSU2_TR(0x6998d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998d4:{NFSU2_TR(0x6998d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998d7:{NFSU2_TR(0x6998d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998da:{NFSU2_TR(0x6998da);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998dd:{NFSU2_TR(0x6998dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998e0:{NFSU2_TR(0x6998e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998e3:{NFSU2_TR(0x6998e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6998e6:{NFSU2_TR(0x6998e6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6998e7:L6998e7:{c.instructions+=6;NFSU2_TR(0x6998e7);
__builtin_memmove((R+28),(R+28),4);
}
B6998e9:{NFSU2_TR(0x6998e9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6998ea:{NFSU2_TR(0x6998ea);
__builtin_memmove((R+20),(R+16),4);
}
B6998ec:{NFSU2_TR(0x6998ec);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6998ed:{NFSU2_TR(0x6998ed);
__builtin_memmove((R+24),(R+4),4);
}
B6998ef:{NFSU2_TR(0x6998ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6998f4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6996f4u);}goto L6996f4;}
}
B6998f4:L6998f4:{c.instructions+=2;NFSU2_TR(0x6998f4);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B6998f8:{NFSU2_TR(0x6998f8);
if(r1(R+518)){{goto L699901;}}
}
B6998fa:L6998fa:{c.instructions+=2;NFSU2_TR(0x6998fa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6998fb:{NFSU2_TR(0x6998fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699900ull));
TAIL_STATIC(0x575630u,575);
}
B699900:L699900:{c.instructions+=1;NFSU2_TR(0x699900);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699901:L699901:{c.instructions+=4;NFSU2_TR(0x699901);
__builtin_memmove((R+0),(R+24),4);
}
B699903:{NFSU2_TR(0x699903);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699904:{NFSU2_TR(0x699904);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699905:{NFSU2_TR(0x699905);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699908:L699908:{c.instructions+=10;NFSU2_TR(0x699908);
__builtin_memmove((R+28),(R+28),4);
}
B69990a:{NFSU2_TR(0x69990a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69990b:{NFSU2_TR(0x69990b);
__builtin_memmove((R+20),(R+16),4);
}
B69990d:{NFSU2_TR(0x69990d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69990e:{NFSU2_TR(0x69990e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69990f:{NFSU2_TR(0x69990f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699910:{NFSU2_TR(0x699910);
__builtin_memmove((R+12),(R+4),4);
}
B699912:{NFSU2_TR(0x699912);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699915:{NFSU2_TR(0x699915);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B699918:{NFSU2_TR(0x699918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6999a8;}}
}
B69991e:L69991e:{c.instructions+=2;NFSU2_TR(0x69991e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699920:{NFSU2_TR(0x699920);
if(r1(R+518)){{goto L699929;}}
}
B699922:L699922:{c.instructions+=3;NFSU2_TR(0x699922);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B699924:{NFSU2_TR(0x699924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699927:{NFSU2_TR(0x699927);
{goto L699930;}
}
B699929:L699929:{c.instructions+=1;NFSU2_TR(0x699929);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B699930:L699930:{c.instructions+=4;NFSU2_TR(0x699930);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699933:{NFSU2_TR(0x699933);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B699936:{NFSU2_TR(0x699936);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699937:{NFSU2_TR(0x699937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69993cull));
TAIL_STATIC(0x575620u,575);
}
B69993c:L69993c:{c.instructions+=5;NFSU2_TR(0x69993c);
__builtin_memmove((R+8),(R+0),4);
}
B69993e:{NFSU2_TR(0x69993e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699940:{NFSU2_TR(0x699940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699941:{NFSU2_TR(0x699941);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699944:{NFSU2_TR(0x699944);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699959;}}
}
B699946:L699946:{c.instructions+=3;NFSU2_TR(0x699946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699949:{NFSU2_TR(0x699949);
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
B69994b:{NFSU2_TR(0x69994b);
if(r1(R+518)){{goto L699954;}}
}
B69994d:L69994d:{c.instructions+=2;NFSU2_TR(0x69994d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B69994f:{NFSU2_TR(0x69994f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699954ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6998e7u);}goto L6998e7;}
}
B699954:L699954:{c.instructions+=2;NFSU2_TR(0x699954);
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
B699957:{NFSU2_TR(0x699957);
{goto L6999bd;}
}
B699959:L699959:{c.instructions+=8;NFSU2_TR(0x699959);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B69995c:{NFSU2_TR(0x69995c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B69995f:{NFSU2_TR(0x69995f);
__builtin_memmove((R+0),(R+4),4);
}
B699961:{NFSU2_TR(0x699961);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699964:{NFSU2_TR(0x699964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699965:{NFSU2_TR(0x699965);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699968:{NFSU2_TR(0x699968);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699969:{NFSU2_TR(0x699969);
__builtin_memmove((R+28),(R+8),4);
}
B69996b:L69996b:{c.instructions+=1;NFSU2_TR(0x69996b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L69996d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69996bu);}goto L69996b;}
}
B69996d:L69996d:{c.instructions+=2;NFSU2_TR(0x69996d);
__builtin_memmove((R+4),(R+0),4);
}
B69996f:{NFSU2_TR(0x69996f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699972:L699972:{c.instructions+=1;NFSU2_TR(0x699972);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L699974;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699972u);}goto L699972;}
}
B699974:L699974:{c.instructions+=9;NFSU2_TR(0x699974);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699977:{NFSU2_TR(0x699977);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B69997a:{NFSU2_TR(0x69997a);
__builtin_memmove((R+4),(R+24),4);
}
B69997c:{NFSU2_TR(0x69997c);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B69997e:{NFSU2_TR(0x69997e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B699981:{NFSU2_TR(0x699981);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B699984:{NFSU2_TR(0x699984);
__builtin_memmove((R+8),(R+4),4);
}
B699986:{NFSU2_TR(0x699986);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699989:{NFSU2_TR(0x699989);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B69998b:L69998b:{c.instructions+=1;NFSU2_TR(0x69998b);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L69998d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x69998bu);}goto L69998b;}
}
B69998d:L69998d:{c.instructions+=2;NFSU2_TR(0x69998d);
__builtin_memmove((R+4),(R+8),4);
}
B69998f:{NFSU2_TR(0x69998f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699992:L699992:{c.instructions+=1;NFSU2_TR(0x699992);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L699994;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699992u);}goto L699992;}
}
B699994:L699994:{c.instructions+=2;NFSU2_TR(0x699994);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699997:{NFSU2_TR(0x699997);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x69999cull));
TAIL_STATIC(0x575630u,575);
}
B69999c:L69999c:{c.instructions+=6;NFSU2_TR(0x69999c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B69999f:{NFSU2_TR(0x69999f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6999a0:{NFSU2_TR(0x6999a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6999a1:{NFSU2_TR(0x6999a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6999a4:{NFSU2_TR(0x6999a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6999a7:{NFSU2_TR(0x6999a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6999a8:L6999a8:{c.instructions+=7;NFSU2_TR(0x6999a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6999ab:{NFSU2_TR(0x6999ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6999ae:{NFSU2_TR(0x6999ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6999b1:{NFSU2_TR(0x6999b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6999b4:{NFSU2_TR(0x6999b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6999b7:{NFSU2_TR(0x6999b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6999ba:{NFSU2_TR(0x6999ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6999bd:L6999bd:{c.instructions+=3;NFSU2_TR(0x6999bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6999be:{NFSU2_TR(0x6999be);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6999bf:{NFSU2_TR(0x6999bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6999c2:L6999c2:{c.instructions+=11;NFSU2_TR(0x6999c2);
__builtin_memmove((R+28),(R+28),4);
}
B6999c4:{NFSU2_TR(0x6999c4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6999c5:{NFSU2_TR(0x6999c5);
__builtin_memmove((R+20),(R+16),4);
}
B6999c7:{NFSU2_TR(0x6999c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6999c8:{NFSU2_TR(0x6999c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6999c9:{NFSU2_TR(0x6999c9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6999ca:{NFSU2_TR(0x6999ca);
__builtin_memmove((R+12),(R+4),4);
}
B6999cc:{NFSU2_TR(0x6999cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6999cf:{NFSU2_TR(0x6999cf);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6999d2:{NFSU2_TR(0x6999d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6999d3:{NFSU2_TR(0x6999d3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699a64;}}
}
B6999d9:L6999d9:{c.instructions+=2;NFSU2_TR(0x6999d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6999db:{NFSU2_TR(0x6999db);
if(r1(R+518)){{goto L6999e4;}}
}
B6999dd:L6999dd:{c.instructions+=3;NFSU2_TR(0x6999dd);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B6999df:{NFSU2_TR(0x6999df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6999e2:{NFSU2_TR(0x6999e2);
{goto L6999eb;}
}
B6999e4:L6999e4:{c.instructions+=1;NFSU2_TR(0x6999e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x400ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6999eb:L6999eb:{c.instructions+=4;NFSU2_TR(0x6999eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6999ee:{NFSU2_TR(0x6999ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6999f1:{NFSU2_TR(0x6999f1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6999f2:{NFSU2_TR(0x6999f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6999f7ull));
TAIL_STATIC(0x575620u,575);
}
B6999f7:L6999f7:{c.instructions+=5;NFSU2_TR(0x6999f7);
__builtin_memmove((R+8),(R+0),4);
}
B6999f9:{NFSU2_TR(0x6999f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6999fb:{NFSU2_TR(0x6999fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6999fc:{NFSU2_TR(0x6999fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6999ff:{NFSU2_TR(0x6999ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699a17;}}
}
B699a01:L699a01:{c.instructions+=3;NFSU2_TR(0x699a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699a04:{NFSU2_TR(0x699a04);
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
B699a06:{NFSU2_TR(0x699a06);
if(r1(R+518)){{goto L699a0f;}}
}
B699a08:L699a08:{c.instructions+=2;NFSU2_TR(0x699a08);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699a0a:{NFSU2_TR(0x699a0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699a0full));
TAIL_STATIC(0x6750fbu,675);
}
B699a0f:L699a0f:{c.instructions+=2;NFSU2_TR(0x699a0f);
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
B699a12:{NFSU2_TR(0x699a12);
{goto L699b20;}
}
B699a17:L699a17:{c.instructions+=7;NFSU2_TR(0x699a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699a1a:{NFSU2_TR(0x699a1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699a1d:{NFSU2_TR(0x699a1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B699a20:{NFSU2_TR(0x699a20);
__builtin_memmove((R+0),(R+4),4);
}
B699a22:{NFSU2_TR(0x699a22);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699a25:{NFSU2_TR(0x699a25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699a26:{NFSU2_TR(0x699a26);
__builtin_memmove((R+28),(R+8),4);
}
B699a28:L699a28:{c.instructions+=1;NFSU2_TR(0x699a28);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L699a2a;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699a28u);}goto L699a28;}
}
B699a2a:L699a2a:{c.instructions+=2;NFSU2_TR(0x699a2a);
__builtin_memmove((R+4),(R+0),4);
}
B699a2c:{NFSU2_TR(0x699a2c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699a2f:L699a2f:{c.instructions+=1;NFSU2_TR(0x699a2f);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L699a31;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699a2fu);}goto L699a2f;}
}
B699a31:L699a31:{c.instructions+=9;NFSU2_TR(0x699a31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699a34:{NFSU2_TR(0x699a34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699a37:{NFSU2_TR(0x699a37);
__builtin_memmove((R+4),(R+24),4);
}
B699a39:{NFSU2_TR(0x699a39);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B699a3b:{NFSU2_TR(0x699a3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B699a3e:{NFSU2_TR(0x699a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B699a41:{NFSU2_TR(0x699a41);
__builtin_memmove((R+8),(R+4),4);
}
B699a43:{NFSU2_TR(0x699a43);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699a46:{NFSU2_TR(0x699a46);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B699a48:L699a48:{c.instructions+=1;NFSU2_TR(0x699a48);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L699a4a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699a48u);}goto L699a48;}
}
B699a4a:L699a4a:{c.instructions+=2;NFSU2_TR(0x699a4a);
__builtin_memmove((R+4),(R+8),4);
}
B699a4c:{NFSU2_TR(0x699a4c);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699a4f:L699a4f:{c.instructions+=1;NFSU2_TR(0x699a4f);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L699a51;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699a4fu);}goto L699a4f;}
}
B699a51:L699a51:{c.instructions+=2;NFSU2_TR(0x699a51);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699a54:{NFSU2_TR(0x699a54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699a59ull));
TAIL_STATIC(0x575630u,575);
}
B699a59:L699a59:{c.instructions+=5;NFSU2_TR(0x699a59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699a5c:{NFSU2_TR(0x699a5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699a5d:{NFSU2_TR(0x699a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699a60:{NFSU2_TR(0x699a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699a63:{NFSU2_TR(0x699a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699a64:L699a64:{c.instructions+=3;NFSU2_TR(0x699a64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699a67:{NFSU2_TR(0x699a67);
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
B699a69:{NFSU2_TR(0x699a69);
if(r1(R+518)){{goto L699b0e;}}
}
B699a6f:L699a6f:{c.instructions+=5;NFSU2_TR(0x699a6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699a72:{NFSU2_TR(0x699a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699a75:{NFSU2_TR(0x699a75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B699a78:{NFSU2_TR(0x699a78);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
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
B699a7c:{NFSU2_TR(0x699a7c);
if(r1(R+518)){{goto L699b0e;}}
}
B699a82:L699a82:{c.instructions+=2;NFSU2_TR(0x699a82);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B699a86:{NFSU2_TR(0x699a86);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699b0e;}}
}
B699a8c:L699a8c:{c.instructions+=9;NFSU2_TR(0x699a8c);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699a92:{NFSU2_TR(0x699a92);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w1(U+0,u8(u32(r1(U+0))|u32(u8(0x80ull))));
s1(u32(r4(R+24)),r1(U+0));
}
B699a95:{NFSU2_TR(0x699a95);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699a98:{NFSU2_TR(0x699a98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B699a9a:{NFSU2_TR(0x699a9a);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B699a9c:{NFSU2_TR(0x699a9c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B699a9e:{NFSU2_TR(0x699a9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B699aa0:{NFSU2_TR(0x699aa0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B699aa3:{NFSU2_TR(0x699aa3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L699ab7;}}
}
B699aa5:L699aa5:{c.instructions+=6;NFSU2_TR(0x699aa5);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699aa8:{NFSU2_TR(0x699aa8);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699aae:{NFSU2_TR(0x699aae);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B699ab0:{NFSU2_TR(0x699ab0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B699ab2:{NFSU2_TR(0x699ab2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B699ab5:{NFSU2_TR(0x699ab5);
if(r1(R+514)){{goto L699abc;}}
}
B699ab7:L699ab7:{c.instructions+=2;NFSU2_TR(0x699ab7);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1ull))));
}
B699aba:{NFSU2_TR(0x699aba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B699abc:L699abc:{c.instructions+=2;NFSU2_TR(0x699abc);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699abf:{NFSU2_TR(0x699abf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699ac4ull));
TAIL_STATIC(0x75dd28u,75d);
}
B699ac4:L699ac4:{c.instructions+=8;NFSU2_TR(0x699ac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699ac7:{NFSU2_TR(0x699ac7);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B699aca:{NFSU2_TR(0x699aca);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x28"::"a"(ea_):"memory");}
}
B699acd:{NFSU2_TR(0x699acd);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B699acf:{NFSU2_TR(0x699acf);
{u32 ea_=u32(u32(7889632u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B699ad5:{NFSU2_TR(0x699ad5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B699ad7:{NFSU2_TR(0x699ad7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B699ada:{NFSU2_TR(0x699ada);
if(r1(R+514)){{goto L699adf;}}
}
B699adc:L699adc:{c.instructions+=1;NFSU2_TR(0x699adc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x2ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B699adf:L699adf:{c.instructions+=4;NFSU2_TR(0x699adf);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x10"::"a"(ea_):"memory");}
}
B699ae2:{NFSU2_TR(0x699ae2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B699ae4:{NFSU2_TR(0x699ae4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B699ae7:{NFSU2_TR(0x699ae7);
if(r1(R+514)){{goto L699aec;}}
}
B699ae9:L699ae9:{c.instructions+=1;NFSU2_TR(0x699ae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x4ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B699aec:L699aec:{c.instructions+=4;NFSU2_TR(0x699aec);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B699aef:{NFSU2_TR(0x699aef);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B699af1:{NFSU2_TR(0x699af1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B699af4:{NFSU2_TR(0x699af4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699af9;}}
}
B699af6:L699af6:{c.instructions+=1;NFSU2_TR(0x699af6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x8ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B699af9:L699af9:{c.instructions+=6;NFSU2_TR(0x699af9);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699afc:{NFSU2_TR(0x699afc);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B699afe:{NFSU2_TR(0x699afe);
{u32 ea_=u32(u32(7892584u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B699b04:{NFSU2_TR(0x699b04);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B699b06:{NFSU2_TR(0x699b06);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B699b09:{NFSU2_TR(0x699b09);
if(r1(R+514)){{goto L699b0e;}}
}
B699b0b:L699b0b:{c.instructions+=1;NFSU2_TR(0x699b0b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x10ull))));
s4(u32(r4(R+24)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B699b0e:L699b0e:{c.instructions+=6;NFSU2_TR(0x699b0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699b11:{NFSU2_TR(0x699b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699b14:{NFSU2_TR(0x699b14);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+24),4);
s4(u32(r4(U+4)),r4(U+8));
}
B699b17:{NFSU2_TR(0x699b17);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699b1a:{NFSU2_TR(0x699b1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699b1d:{NFSU2_TR(0x699b1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699b20:L699b20:{c.instructions+=4;NFSU2_TR(0x699b20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699b21:{NFSU2_TR(0x699b21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B699b22:{NFSU2_TR(0x699b22);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B699b23:{NFSU2_TR(0x699b23);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699b26:L699b26:{c.instructions+=10;NFSU2_TR(0x699b26);
__builtin_memmove((R+28),(R+28),4);
}
B699b28:{NFSU2_TR(0x699b28);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b29:{NFSU2_TR(0x699b29);
__builtin_memmove((R+20),(R+16),4);
}
B699b2b:{NFSU2_TR(0x699b2b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b2c:{NFSU2_TR(0x699b2c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b2d:{NFSU2_TR(0x699b2d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b2e:{NFSU2_TR(0x699b2e);
__builtin_memmove((R+12),(R+4),4);
}
B699b30:{NFSU2_TR(0x699b30);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699b33:{NFSU2_TR(0x699b33);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B699b36:{NFSU2_TR(0x699b36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699bc6;}}
}
B699b3c:L699b3c:{c.instructions+=2;NFSU2_TR(0x699b3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699b3e:{NFSU2_TR(0x699b3e);
if(r1(R+518)){{goto L699b47;}}
}
B699b40:L699b40:{c.instructions+=3;NFSU2_TR(0x699b40);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B699b42:{NFSU2_TR(0x699b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699b45:{NFSU2_TR(0x699b45);
{goto L699b4e;}
}
B699b47:L699b47:{c.instructions+=1;NFSU2_TR(0x699b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x100ull));
s4(u32(r4(U+0)),r4(U+4));
}
B699b4e:L699b4e:{c.instructions+=4;NFSU2_TR(0x699b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699b51:{NFSU2_TR(0x699b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B699b54:{NFSU2_TR(0x699b54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b55:{NFSU2_TR(0x699b55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699b5aull));
TAIL_STATIC(0x575620u,575);
}
B699b5a:L699b5a:{c.instructions+=5;NFSU2_TR(0x699b5a);
__builtin_memmove((R+8),(R+0),4);
}
B699b5c:{NFSU2_TR(0x699b5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699b5e:{NFSU2_TR(0x699b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699b5f:{NFSU2_TR(0x699b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699b62:{NFSU2_TR(0x699b62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L699b77;}}
}
B699b64:L699b64:{c.instructions+=3;NFSU2_TR(0x699b64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699b67:{NFSU2_TR(0x699b67);
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
B699b69:{NFSU2_TR(0x699b69);
if(r1(R+518)){{goto L699b72;}}
}
B699b6b:L699b6b:{c.instructions+=2;NFSU2_TR(0x699b6b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b6d:{NFSU2_TR(0x699b6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699b72ull));
TAIL_STATIC(0x6739efu,673);
}
B699b72:L699b72:{c.instructions+=2;NFSU2_TR(0x699b72);
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
B699b75:{NFSU2_TR(0x699b75);
{goto L699bdb;}
}
B699b77:L699b77:{c.instructions+=8;NFSU2_TR(0x699b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699b7a:{NFSU2_TR(0x699b7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B699b7d:{NFSU2_TR(0x699b7d);
__builtin_memmove((R+0),(R+4),4);
}
B699b7f:{NFSU2_TR(0x699b7f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699b82:{NFSU2_TR(0x699b82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b83:{NFSU2_TR(0x699b83);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699b86:{NFSU2_TR(0x699b86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699b87:{NFSU2_TR(0x699b87);
__builtin_memmove((R+28),(R+8),4);
}
B699b89:L699b89:{c.instructions+=1;NFSU2_TR(0x699b89);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L699b8b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699b89u);}goto L699b89;}
}
B699b8b:L699b8b:{c.instructions+=2;NFSU2_TR(0x699b8b);
__builtin_memmove((R+4),(R+0),4);
}
B699b8d:{NFSU2_TR(0x699b8d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699b90:L699b90:{c.instructions+=1;NFSU2_TR(0x699b90);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L699b92;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699b90u);}goto L699b90;}
}
B699b92:L699b92:{c.instructions+=9;NFSU2_TR(0x699b92);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699b95:{NFSU2_TR(0x699b95);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699b98:{NFSU2_TR(0x699b98);
__builtin_memmove((R+4),(R+24),4);
}
B699b9a:{NFSU2_TR(0x699b9a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B699b9c:{NFSU2_TR(0x699b9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B699b9f:{NFSU2_TR(0x699b9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B699ba2:{NFSU2_TR(0x699ba2);
__builtin_memmove((R+8),(R+4),4);
}
B699ba4:{NFSU2_TR(0x699ba4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B699ba7:{NFSU2_TR(0x699ba7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B699ba9:L699ba9:{c.instructions+=1;NFSU2_TR(0x699ba9);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L699bab;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699ba9u);}goto L699ba9;}
}
B699bab:L699bab:{c.instructions+=2;NFSU2_TR(0x699bab);
__builtin_memmove((R+4),(R+8),4);
}
B699bad:{NFSU2_TR(0x699bad);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B699bb0:L699bb0:{c.instructions+=1;NFSU2_TR(0x699bb0);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L699bb2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699bb0u);}goto L699bb0;}
}
B699bb2:L699bb2:{c.instructions+=2;NFSU2_TR(0x699bb2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699bb5:{NFSU2_TR(0x699bb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699bbaull));
TAIL_STATIC(0x575630u,575);
}
B699bba:L699bba:{c.instructions+=6;NFSU2_TR(0x699bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699bbd:{NFSU2_TR(0x699bbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699bbe:{NFSU2_TR(0x699bbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699bbf:{NFSU2_TR(0x699bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699bc2:{NFSU2_TR(0x699bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699bc5:{NFSU2_TR(0x699bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699bc6:L699bc6:{c.instructions+=7;NFSU2_TR(0x699bc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699bc9:{NFSU2_TR(0x699bc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699bcc:{NFSU2_TR(0x699bcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699bcf:{NFSU2_TR(0x699bcf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B699bd2:{NFSU2_TR(0x699bd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699bd5:{NFSU2_TR(0x699bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699bd8:{NFSU2_TR(0x699bd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699bdb:L699bdb:{c.instructions+=3;NFSU2_TR(0x699bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B699bdc:{NFSU2_TR(0x699bdc);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B699bdd:{NFSU2_TR(0x699bdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699be0:L699be0:{c.instructions+=8;NFSU2_TR(0x699be0);
__builtin_memmove((R+28),(R+28),4);
}
B699be2:{NFSU2_TR(0x699be2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699be3:{NFSU2_TR(0x699be3);
__builtin_memmove((R+20),(R+16),4);
}
B699be5:{NFSU2_TR(0x699be5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699be6:{NFSU2_TR(0x699be6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699be7:{NFSU2_TR(0x699be7);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699be9:{NFSU2_TR(0x699be9);
__builtin_memmove((R+28),(R+4),4);
}
B699beb:{NFSU2_TR(0x699beb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699bf0ull));
TAIL_STATIC(0x575620u,575);
}
B699bf0:L699bf0:{c.instructions+=3;NFSU2_TR(0x699bf0);
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
B699bf2:{NFSU2_TR(0x699bf2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699bf3:{NFSU2_TR(0x699bf3);
if(r1(R+518)){{goto L699c00;}}
}
B699bf5:L699bf5:{c.instructions+=2;NFSU2_TR(0x699bf5);
__builtin_memmove((R+4),(R+0),4);
}
B699bf7:{NFSU2_TR(0x699bf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699bfcull));
TAIL_STATIC(0x6d4918u,6d4);
}
B699bfc:L699bfc:{c.instructions+=2;NFSU2_TR(0x699bfc);
__builtin_memmove((R+24),(R+0),4);
}
B699bfe:{NFSU2_TR(0x699bfe);
{goto L699c02;}
}
B699c00:L699c00:{c.instructions+=1;NFSU2_TR(0x699c00);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B699c02:L699c02:{c.instructions+=2;NFSU2_TR(0x699c02);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699c04:{NFSU2_TR(0x699c04);
if(r1(R+518)){{goto L699c26;}}
}
B699c06:L699c06:{c.instructions+=6;NFSU2_TR(0x699c06);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c09:{NFSU2_TR(0x699c09);
__builtin_memmove((R+4),(R+24),4);
}
B699c0b:{NFSU2_TR(0x699c0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c0e:{NFSU2_TR(0x699c0e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c11:{NFSU2_TR(0x699c11);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c14:{NFSU2_TR(0x699c14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c19ull));
TAIL_STATIC(0x6d491bu,6d4);
}
B699c19:L699c19:{c.instructions+=2;NFSU2_TR(0x699c19);
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
B699c1b:{NFSU2_TR(0x699c1b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L699c2b;}}
}
B699c1d:L699c1d:{c.instructions+=3;NFSU2_TR(0x699c1d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c1f:{NFSU2_TR(0x699c1f);
__builtin_memmove((R+4),(R+24),4);
}
B699c21:{NFSU2_TR(0x699c21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c26ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6998e7u);}goto L6998e7;}
}
B699c26:L699c26:{c.instructions+=2;NFSU2_TR(0x699c26);
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
B699c29:{NFSU2_TR(0x699c29);
{goto L699c33;}
}
B699c2b:L699c2b:{c.instructions+=3;NFSU2_TR(0x699c2b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c2c:{NFSU2_TR(0x699c2c);
__builtin_memmove((R+4),(R+28),4);
}
B699c2e:{NFSU2_TR(0x699c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c33ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699908u);}goto L699908;}
}
B699c33:L699c33:{c.instructions+=4;NFSU2_TR(0x699c33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699c34:{NFSU2_TR(0x699c34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699c35:{NFSU2_TR(0x699c35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699c36:{NFSU2_TR(0x699c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699c39:L699c39:{c.instructions+=8;NFSU2_TR(0x699c39);
__builtin_memmove((R+28),(R+28),4);
}
B699c3b:{NFSU2_TR(0x699c3b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c3c:{NFSU2_TR(0x699c3c);
__builtin_memmove((R+20),(R+16),4);
}
B699c3e:{NFSU2_TR(0x699c3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c3f:{NFSU2_TR(0x699c3f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c40:{NFSU2_TR(0x699c40);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c45:{NFSU2_TR(0x699c45);
__builtin_memmove((R+28),(R+4),4);
}
B699c47:{NFSU2_TR(0x699c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c4cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699876u);}goto L699876;}
}
B699c4c:L699c4c:{c.instructions+=2;NFSU2_TR(0x699c4c);
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
B699c4e:{NFSU2_TR(0x699c4e);
if(r1(R+518)){{goto L699c5b;}}
}
B699c50:L699c50:{c.instructions+=2;NFSU2_TR(0x699c50);
__builtin_memmove((R+4),(R+0),4);
}
B699c52:{NFSU2_TR(0x699c52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c57ull));
TAIL_STATIC(0x6d4918u,6d4);
}
B699c57:L699c57:{c.instructions+=2;NFSU2_TR(0x699c57);
__builtin_memmove((R+24),(R+0),4);
}
B699c59:{NFSU2_TR(0x699c59);
{goto L699c5d;}
}
B699c5b:L699c5b:{c.instructions+=1;NFSU2_TR(0x699c5b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B699c5d:L699c5d:{c.instructions+=2;NFSU2_TR(0x699c5d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699c5f:{NFSU2_TR(0x699c5f);
if(r1(R+518)){{goto L699c86;}}
}
B699c61:L699c61:{c.instructions+=9;NFSU2_TR(0x699c61);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B699c64:{NFSU2_TR(0x699c64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c65:{NFSU2_TR(0x699c65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c66:{NFSU2_TR(0x699c66);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B699c69:{NFSU2_TR(0x699c69);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c6c:{NFSU2_TR(0x699c6c);
__builtin_memmove((R+4),(R+24),4);
}
B699c6e:{NFSU2_TR(0x699c6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c71:{NFSU2_TR(0x699c71);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699c74:{NFSU2_TR(0x699c74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c79ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6996f5u);}goto L6996f5;}
}
B699c79:L699c79:{c.instructions+=2;NFSU2_TR(0x699c79);
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
B699c7b:{NFSU2_TR(0x699c7b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L699c8b;}}
}
B699c7d:L699c7d:{c.instructions+=3;NFSU2_TR(0x699c7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c7f:{NFSU2_TR(0x699c7f);
__builtin_memmove((R+4),(R+24),4);
}
B699c81:{NFSU2_TR(0x699c81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c86ull));
TAIL_STATIC(0x6750fbu,675);
}
B699c86:L699c86:{c.instructions+=2;NFSU2_TR(0x699c86);
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
B699c89:{NFSU2_TR(0x699c89);
{goto L699c93;}
}
B699c8b:L699c8b:{c.instructions+=3;NFSU2_TR(0x699c8b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c8c:{NFSU2_TR(0x699c8c);
__builtin_memmove((R+4),(R+28),4);
}
B699c8e:{NFSU2_TR(0x699c8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699c93ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6999c2u);}goto L6999c2;}
}
B699c93:L699c93:{c.instructions+=4;NFSU2_TR(0x699c93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699c94:{NFSU2_TR(0x699c94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699c95:{NFSU2_TR(0x699c95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699c96:{NFSU2_TR(0x699c96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699c99:L699c99:{c.instructions+=8;NFSU2_TR(0x699c99);
__builtin_memmove((R+28),(R+28),4);
}
B699c9b:{NFSU2_TR(0x699c9b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c9c:{NFSU2_TR(0x699c9c);
__builtin_memmove((R+20),(R+16),4);
}
B699c9e:{NFSU2_TR(0x699c9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699c9f:{NFSU2_TR(0x699c9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ca0:{NFSU2_TR(0x699ca0);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ca2:{NFSU2_TR(0x699ca2);
__builtin_memmove((R+28),(R+4),4);
}
B699ca4:{NFSU2_TR(0x699ca4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699ca9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699317u);}goto L699317;}
}
B699ca9:L699ca9:{c.instructions+=2;NFSU2_TR(0x699ca9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699cab:{NFSU2_TR(0x699cab);
if(r1(R+518)){{goto L699cb8;}}
}
B699cad:L699cad:{c.instructions+=2;NFSU2_TR(0x699cad);
__builtin_memmove((R+4),(R+0),4);
}
B699caf:{NFSU2_TR(0x699caf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699cb4ull));
TAIL_STATIC(0x698e7du,698);
}
B699cb4:L699cb4:{c.instructions+=2;NFSU2_TR(0x699cb4);
__builtin_memmove((R+24),(R+0),4);
}
B699cb6:{NFSU2_TR(0x699cb6);
{goto L699cba;}
}
B699cb8:L699cb8:{c.instructions+=1;NFSU2_TR(0x699cb8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B699cba:L699cba:{c.instructions+=2;NFSU2_TR(0x699cba);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699cbc:{NFSU2_TR(0x699cbc);
if(r1(R+518)){{goto L699cdd;}}
}
B699cbe:L699cbe:{c.instructions+=6;NFSU2_TR(0x699cbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699cc0:{NFSU2_TR(0x699cc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699cc3:{NFSU2_TR(0x699cc3);
__builtin_memmove((R+4),(R+24),4);
}
B699cc5:{NFSU2_TR(0x699cc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699cc8:{NFSU2_TR(0x699cc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699ccb:{NFSU2_TR(0x699ccb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699cd0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699362u);}goto L699362;}
}
B699cd0:L699cd0:{c.instructions+=2;NFSU2_TR(0x699cd0);
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
B699cd2:{NFSU2_TR(0x699cd2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L699ce2;}}
}
B699cd4:L699cd4:{c.instructions+=3;NFSU2_TR(0x699cd4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699cd6:{NFSU2_TR(0x699cd6);
__builtin_memmove((R+4),(R+24),4);
}
B699cd8:{NFSU2_TR(0x699cd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699cddull));
TAIL_STATIC(0x6739efu,673);
}
B699cdd:L699cdd:{c.instructions+=2;NFSU2_TR(0x699cdd);
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
B699ce0:{NFSU2_TR(0x699ce0);
{goto L699cea;}
}
B699ce2:L699ce2:{c.instructions+=3;NFSU2_TR(0x699ce2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ce3:{NFSU2_TR(0x699ce3);
__builtin_memmove((R+4),(R+28),4);
}
B699ce5:{NFSU2_TR(0x699ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699ceaull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699b26u);}goto L699b26;}
}
B699cea:L699cea:{c.instructions+=4;NFSU2_TR(0x699cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699ceb:{NFSU2_TR(0x699ceb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699cec:{NFSU2_TR(0x699cec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699ced:{NFSU2_TR(0x699ced);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699cf0:L699cf0:{c.instructions+=8;NFSU2_TR(0x699cf0);
__builtin_memmove((R+28),(R+28),4);
}
B699cf2:{NFSU2_TR(0x699cf2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699cf3:{NFSU2_TR(0x699cf3);
__builtin_memmove((R+20),(R+16),4);
}
B699cf5:{NFSU2_TR(0x699cf5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699cf6:{NFSU2_TR(0x699cf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699cf7:{NFSU2_TR(0x699cf7);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699cf9:{NFSU2_TR(0x699cf9);
__builtin_memmove((R+28),(R+4),4);
}
B699cfb:{NFSU2_TR(0x699cfb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d00ull));
TAIL_STATIC(0x575620u,575);
}
B699d00:L699d00:{c.instructions+=3;NFSU2_TR(0x699d00);
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
B699d02:{NFSU2_TR(0x699d02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699d03:{NFSU2_TR(0x699d03);
if(r1(R+518)){{goto L699d10;}}
}
B699d05:L699d05:{c.instructions+=2;NFSU2_TR(0x699d05);
__builtin_memmove((R+4),(R+0),4);
}
B699d07:{NFSU2_TR(0x699d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d0cull));
TAIL_STATIC(0x6d4918u,6d4);
}
B699d0c:L699d0c:{c.instructions+=2;NFSU2_TR(0x699d0c);
__builtin_memmove((R+24),(R+0),4);
}
B699d0e:{NFSU2_TR(0x699d0e);
{goto L699d12;}
}
B699d10:L699d10:{c.instructions+=1;NFSU2_TR(0x699d10);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B699d12:L699d12:{c.instructions+=2;NFSU2_TR(0x699d12);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699d14:{NFSU2_TR(0x699d14);
if(r1(R+518)){{goto L699d2d;}}
}
B699d16:L699d16:{c.instructions+=3;NFSU2_TR(0x699d16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699d19:{NFSU2_TR(0x699d19);
__builtin_memmove((R+4),(R+24),4);
}
B699d1b:{NFSU2_TR(0x699d1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d20ull));
TAIL_STATIC(0x6d4963u,6d4);
}
B699d20:L699d20:{c.instructions+=2;NFSU2_TR(0x699d20);
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
B699d22:{NFSU2_TR(0x699d22);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L699d32;}}
}
B699d24:L699d24:{c.instructions+=3;NFSU2_TR(0x699d24);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d26:{NFSU2_TR(0x699d26);
__builtin_memmove((R+4),(R+24),4);
}
B699d28:{NFSU2_TR(0x699d28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d2dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6998e7u);}goto L6998e7;}
}
B699d2d:L699d2d:{c.instructions+=2;NFSU2_TR(0x699d2d);
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
B699d30:{NFSU2_TR(0x699d30);
{goto L699d3a;}
}
B699d32:L699d32:{c.instructions+=3;NFSU2_TR(0x699d32);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d33:{NFSU2_TR(0x699d33);
__builtin_memmove((R+4),(R+28),4);
}
B699d35:{NFSU2_TR(0x699d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d3aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699908u);}goto L699908;}
}
B699d3a:L699d3a:{c.instructions+=4;NFSU2_TR(0x699d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699d3b:{NFSU2_TR(0x699d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699d3c:{NFSU2_TR(0x699d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699d3d:{NFSU2_TR(0x699d3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699d40:L699d40:{c.instructions+=8;NFSU2_TR(0x699d40);
__builtin_memmove((R+28),(R+28),4);
}
B699d42:{NFSU2_TR(0x699d42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d43:{NFSU2_TR(0x699d43);
__builtin_memmove((R+20),(R+16),4);
}
B699d45:{NFSU2_TR(0x699d45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d46:{NFSU2_TR(0x699d46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d47:{NFSU2_TR(0x699d47);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d4c:{NFSU2_TR(0x699d4c);
__builtin_memmove((R+28),(R+4),4);
}
B699d4e:{NFSU2_TR(0x699d4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d53ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699876u);}goto L699876;}
}
B699d53:L699d53:{c.instructions+=2;NFSU2_TR(0x699d53);
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
B699d55:{NFSU2_TR(0x699d55);
if(r1(R+518)){{goto L699d62;}}
}
B699d57:L699d57:{c.instructions+=2;NFSU2_TR(0x699d57);
__builtin_memmove((R+4),(R+0),4);
}
B699d59:{NFSU2_TR(0x699d59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d5eull));
TAIL_STATIC(0x6d4918u,6d4);
}
B699d5e:L699d5e:{c.instructions+=2;NFSU2_TR(0x699d5e);
__builtin_memmove((R+24),(R+0),4);
}
B699d60:{NFSU2_TR(0x699d60);
{goto L699d64;}
}
B699d62:L699d62:{c.instructions+=1;NFSU2_TR(0x699d62);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B699d64:L699d64:{c.instructions+=2;NFSU2_TR(0x699d64);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699d66:{NFSU2_TR(0x699d66);
if(r1(R+518)){{goto L699d7f;}}
}
B699d68:L699d68:{c.instructions+=3;NFSU2_TR(0x699d68);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699d6b:{NFSU2_TR(0x699d6b);
__builtin_memmove((R+4),(R+24),4);
}
B699d6d:{NFSU2_TR(0x699d6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d72ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699765u);}goto L699765;}
}
B699d72:L699d72:{c.instructions+=2;NFSU2_TR(0x699d72);
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
B699d74:{NFSU2_TR(0x699d74);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L699d84;}}
}
B699d76:L699d76:{c.instructions+=3;NFSU2_TR(0x699d76);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d78:{NFSU2_TR(0x699d78);
__builtin_memmove((R+4),(R+24),4);
}
B699d7a:{NFSU2_TR(0x699d7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d7full));
TAIL_STATIC(0x6750fbu,675);
}
B699d7f:L699d7f:{c.instructions+=2;NFSU2_TR(0x699d7f);
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
B699d82:{NFSU2_TR(0x699d82);
{goto L699d8c;}
}
B699d84:L699d84:{c.instructions+=3;NFSU2_TR(0x699d84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d85:{NFSU2_TR(0x699d85);
__builtin_memmove((R+4),(R+28),4);
}
B699d87:{NFSU2_TR(0x699d87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699d8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6999c2u);}goto L6999c2;}
}
B699d8c:L699d8c:{c.instructions+=4;NFSU2_TR(0x699d8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699d8d:{NFSU2_TR(0x699d8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699d8e:{NFSU2_TR(0x699d8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699d8f:{NFSU2_TR(0x699d8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699d92:L699d92:{c.instructions+=8;NFSU2_TR(0x699d92);
__builtin_memmove((R+28),(R+28),4);
}
B699d94:{NFSU2_TR(0x699d94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d95:{NFSU2_TR(0x699d95);
__builtin_memmove((R+20),(R+16),4);
}
B699d97:{NFSU2_TR(0x699d97);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d98:{NFSU2_TR(0x699d98);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d99:{NFSU2_TR(0x699d99);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699d9b:{NFSU2_TR(0x699d9b);
__builtin_memmove((R+28),(R+4),4);
}
B699d9d:{NFSU2_TR(0x699d9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699da2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699317u);}goto L699317;}
}
B699da2:L699da2:{c.instructions+=2;NFSU2_TR(0x699da2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699da4:{NFSU2_TR(0x699da4);
if(r1(R+518)){{goto L699db1;}}
}
B699da6:L699da6:{c.instructions+=2;NFSU2_TR(0x699da6);
__builtin_memmove((R+4),(R+0),4);
}
B699da8:{NFSU2_TR(0x699da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699dadull));
TAIL_STATIC(0x698e7du,698);
}
B699dad:L699dad:{c.instructions+=2;NFSU2_TR(0x699dad);
__builtin_memmove((R+24),(R+0),4);
}
B699daf:{NFSU2_TR(0x699daf);
{goto L699db3;}
}
B699db1:L699db1:{c.instructions+=1;NFSU2_TR(0x699db1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B699db3:L699db3:{c.instructions+=2;NFSU2_TR(0x699db3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B699db5:{NFSU2_TR(0x699db5);
if(r1(R+518)){{goto L699dce;}}
}
B699db7:L699db7:{c.instructions+=3;NFSU2_TR(0x699db7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699dba:{NFSU2_TR(0x699dba);
__builtin_memmove((R+4),(R+24),4);
}
B699dbc:{NFSU2_TR(0x699dbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699dc1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6995c1u);}goto L6995c1;}
}
B699dc1:L699dc1:{c.instructions+=2;NFSU2_TR(0x699dc1);
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
B699dc3:{NFSU2_TR(0x699dc3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L699dd3;}}
}
B699dc5:L699dc5:{c.instructions+=3;NFSU2_TR(0x699dc5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699dc7:{NFSU2_TR(0x699dc7);
__builtin_memmove((R+4),(R+24),4);
}
B699dc9:{NFSU2_TR(0x699dc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699dceull));
TAIL_STATIC(0x6739efu,673);
}
B699dce:L699dce:{c.instructions+=2;NFSU2_TR(0x699dce);
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
B699dd1:{NFSU2_TR(0x699dd1);
{goto L699ddb;}
}
B699dd3:L699dd3:{c.instructions+=3;NFSU2_TR(0x699dd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699dd4:{NFSU2_TR(0x699dd4);
__builtin_memmove((R+4),(R+28),4);
}
B699dd6:{NFSU2_TR(0x699dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699ddbull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699b26u);}goto L699b26;}
}
B699ddb:L699ddb:{c.instructions+=4;NFSU2_TR(0x699ddb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699ddc:{NFSU2_TR(0x699ddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699ddd:{NFSU2_TR(0x699ddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699dde:{NFSU2_TR(0x699dde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699de1:L699de1:{c.instructions+=10;NFSU2_TR(0x699de1);
__builtin_memmove((R+28),(R+28),4);
}
B699de3:{NFSU2_TR(0x699de3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699de4:{NFSU2_TR(0x699de4);
__builtin_memmove((R+20),(R+16),4);
}
B699de6:{NFSU2_TR(0x699de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699de9:{NFSU2_TR(0x699de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699dec:{NFSU2_TR(0x699dec);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699def:{NFSU2_TR(0x699def);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B699df2:{NFSU2_TR(0x699df2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B699df6:{NFSU2_TR(0x699df6);
w4(R+0,u32(0x7babf0ull));
}
B699dfb:{NFSU2_TR(0x699dfb);
if(r1(R+518)){{goto L699e02;}}
}
B699dfd:L699dfd:{c.instructions+=1;NFSU2_TR(0x699dfd);
w4(R+0,u32(0x7babe8ull));
}
B699e02:L699e02:{c.instructions+=2;NFSU2_TR(0x699e02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699e03:{NFSU2_TR(0x699e03);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699e06:L699e06:{c.instructions+=9;NFSU2_TR(0x699e06);
__builtin_memmove((R+28),(R+28),4);
}
B699e08:{NFSU2_TR(0x699e08);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699e09:{NFSU2_TR(0x699e09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699e0a:{NFSU2_TR(0x699e0a);
__builtin_memmove((R+24),(R+4),4);
}
B699e0c:{NFSU2_TR(0x699e0c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B699e0e:{NFSU2_TR(0x699e0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699e11:{NFSU2_TR(0x699e11);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699e12:{NFSU2_TR(0x699e12);
u8 U[4];
w4(U+0,u32(0x7babe4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B699e18:{NFSU2_TR(0x699e18);
if(r1(R+518)){{goto L699e41;}}
}
B699e1a:L699e1a:{c.instructions+=3;NFSU2_TR(0x699e1a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B699e1c:{NFSU2_TR(0x699e1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699e1f:{NFSU2_TR(0x699e1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699e38;}}
}
B699e21:L699e21:{c.instructions+=4;NFSU2_TR(0x699e21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699e24:{NFSU2_TR(0x699e24);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B699e27:{NFSU2_TR(0x699e27);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B699e29:{NFSU2_TR(0x699e29);
if(r1(R+518)){{goto L699e32;}}
}
B699e2b:L699e2b:{c.instructions+=2;NFSU2_TR(0x699e2b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699e2d:{NFSU2_TR(0x699e2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699e32ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6998e7u);}goto L6998e7;}
}
B699e32:L699e32:{c.instructions+=3;NFSU2_TR(0x699e32);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B699e33:{NFSU2_TR(0x699e33);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B699e36:{NFSU2_TR(0x699e36);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699e21u);}goto L699e21;}}
}
B699e38:L699e38:{c.instructions+=2;NFSU2_TR(0x699e38);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699e3b:{NFSU2_TR(0x699e3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699e40ull));
TAIL_STATIC(0x575630u,575);
}
B699e40:L699e40:{c.instructions+=1;NFSU2_TR(0x699e40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699e41:L699e41:{c.instructions+=2;NFSU2_TR(0x699e41);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699e44:{NFSU2_TR(0x699e44);
if(r1(R+518)){{goto L699e6d;}}
}
B699e46:L699e46:{c.instructions+=3;NFSU2_TR(0x699e46);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B699e48:{NFSU2_TR(0x699e48);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699e4b:{NFSU2_TR(0x699e4b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699e64;}}
}
B699e4d:L699e4d:{c.instructions+=4;NFSU2_TR(0x699e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699e50:{NFSU2_TR(0x699e50);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B699e53:{NFSU2_TR(0x699e53);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B699e55:{NFSU2_TR(0x699e55);
if(r1(R+518)){{goto L699e5e;}}
}
B699e57:L699e57:{c.instructions+=2;NFSU2_TR(0x699e57);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699e59:{NFSU2_TR(0x699e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699e5eull));
TAIL_STATIC(0x6750fbu,675);
}
B699e5e:L699e5e:{c.instructions+=3;NFSU2_TR(0x699e5e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B699e5f:{NFSU2_TR(0x699e5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B699e62:{NFSU2_TR(0x699e62);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699e4du);}goto L699e4d;}}
}
B699e64:L699e64:{c.instructions+=2;NFSU2_TR(0x699e64);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699e67:{NFSU2_TR(0x699e67);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699e6cull));
TAIL_STATIC(0x575630u,575);
}
B699e6c:L699e6c:{c.instructions+=1;NFSU2_TR(0x699e6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699e6d:L699e6d:{c.instructions+=2;NFSU2_TR(0x699e6d);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
B699e70:{NFSU2_TR(0x699e70);
if(r1(R+518)){{goto L699e99;}}
}
B699e72:L699e72:{c.instructions+=3;NFSU2_TR(0x699e72);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B699e74:{NFSU2_TR(0x699e74);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699e77:{NFSU2_TR(0x699e77);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699e90;}}
}
B699e79:L699e79:{c.instructions+=4;NFSU2_TR(0x699e79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699e7c:{NFSU2_TR(0x699e7c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B699e7f:{NFSU2_TR(0x699e7f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B699e81:{NFSU2_TR(0x699e81);
if(r1(R+518)){{goto L699e8a;}}
}
B699e83:L699e83:{c.instructions+=2;NFSU2_TR(0x699e83);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699e85:{NFSU2_TR(0x699e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699e8aull));
TAIL_STATIC(0x6739efu,673);
}
B699e8a:L699e8a:{c.instructions+=3;NFSU2_TR(0x699e8a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B699e8b:{NFSU2_TR(0x699e8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B699e8e:{NFSU2_TR(0x699e8e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699e79u);}goto L699e79;}}
}
B699e90:L699e90:{c.instructions+=2;NFSU2_TR(0x699e90);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699e93:{NFSU2_TR(0x699e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699e98ull));
TAIL_STATIC(0x575630u,575);
}
B699e98:L699e98:{c.instructions+=1;NFSU2_TR(0x699e98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699e99:L699e99:{c.instructions+=4;NFSU2_TR(0x699e99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699e9a:{NFSU2_TR(0x699e9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699e9b:{NFSU2_TR(0x699e9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B699e9c:{NFSU2_TR(0x699e9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699e9d:L699e9d:{c.instructions+=15;NFSU2_TR(0x699e9d);
__builtin_memmove((R+28),(R+28),4);
}
B699e9f:{NFSU2_TR(0x699e9f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ea0:{NFSU2_TR(0x699ea0);
__builtin_memmove((R+20),(R+16),4);
}
B699ea2:{NFSU2_TR(0x699ea2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ea3:{NFSU2_TR(0x699ea3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ea4:{NFSU2_TR(0x699ea4);
__builtin_memmove((R+24),(R+4),4);
}
B699ea6:{NFSU2_TR(0x699ea6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ea7:{NFSU2_TR(0x699ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699eaa:{NFSU2_TR(0x699eaa);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B699eac:{NFSU2_TR(0x699eac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699eaf:{NFSU2_TR(0x699eaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699eb2:{NFSU2_TR(0x699eb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699eb5:{NFSU2_TR(0x699eb5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B699eb8:{NFSU2_TR(0x699eb8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699eb9:{NFSU2_TR(0x699eb9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699ebeull));
TAIL_STATIC(0x575620u,575);
}
B699ebe:L699ebe:{c.instructions+=4;NFSU2_TR(0x699ebe);
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
B699ec0:{NFSU2_TR(0x699ec0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699ec1:{NFSU2_TR(0x699ec1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699ec4:{NFSU2_TR(0x699ec4);
if(r1(R+518)){{goto L699f68;}}
}
B699eca:L699eca:{c.instructions+=2;NFSU2_TR(0x699eca);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699ecd:{NFSU2_TR(0x699ecd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699eeb;}}
}
B699ecf:L699ecf:{c.instructions+=4;NFSU2_TR(0x699ecf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699ed2:{NFSU2_TR(0x699ed2);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B699ed5:{NFSU2_TR(0x699ed5);
__builtin_memmove((R+4),(R+24),4);
}
B699ed7:{NFSU2_TR(0x699ed7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699edcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699cf0u);}goto L699cf0;}
}
B699edc:L699edc:{c.instructions+=2;NFSU2_TR(0x699edc);
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
B699edf:{NFSU2_TR(0x699edf);
if(r1(R+518)){{goto L699f68;}}
}
B699ee5:L699ee5:{c.instructions+=3;NFSU2_TR(0x699ee5);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B699ee6:{NFSU2_TR(0x699ee6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B699ee9:{NFSU2_TR(0x699ee9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699ecfu);}goto L699ecf;}}
}
B699eeb:L699eeb:{c.instructions+=6;NFSU2_TR(0x699eeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B699eef:{NFSU2_TR(0x699eef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699ef2:{NFSU2_TR(0x699ef2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699ef5:{NFSU2_TR(0x699ef5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B699ef8:{NFSU2_TR(0x699ef8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699ef9:{NFSU2_TR(0x699ef9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699efeull));
TAIL_STATIC(0x575620u,575);
}
B699efe:L699efe:{c.instructions+=5;NFSU2_TR(0x699efe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B699f00:{NFSU2_TR(0x699f00);
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
B699f02:{NFSU2_TR(0x699f02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699f03:{NFSU2_TR(0x699f03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699f06:{NFSU2_TR(0x699f06);
if(r1(R+518)){{goto L699f68;}}
}
B699f08:L699f08:{c.instructions+=2;NFSU2_TR(0x699f08);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699f0b:{NFSU2_TR(0x699f0b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699f25;}}
}
B699f0d:L699f0d:{c.instructions+=4;NFSU2_TR(0x699f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699f10:{NFSU2_TR(0x699f10);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B699f13:{NFSU2_TR(0x699f13);
__builtin_memmove((R+4),(R+24),4);
}
B699f15:{NFSU2_TR(0x699f15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699f1aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699d40u);}goto L699d40;}
}
B699f1a:L699f1a:{c.instructions+=2;NFSU2_TR(0x699f1a);
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
B699f1d:{NFSU2_TR(0x699f1d);
if(r1(R+518)){{goto L699f68;}}
}
B699f1f:L699f1f:{c.instructions+=3;NFSU2_TR(0x699f1f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B699f20:{NFSU2_TR(0x699f20);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B699f23:{NFSU2_TR(0x699f23);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699f0du);}goto L699f0d;}}
}
B699f25:L699f25:{c.instructions+=6;NFSU2_TR(0x699f25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B699f29:{NFSU2_TR(0x699f29);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699f2c:{NFSU2_TR(0x699f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699f2f:{NFSU2_TR(0x699f2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B699f32:{NFSU2_TR(0x699f32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f33:{NFSU2_TR(0x699f33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699f38ull));
TAIL_STATIC(0x575620u,575);
}
B699f38:L699f38:{c.instructions+=5;NFSU2_TR(0x699f38);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B699f3a:{NFSU2_TR(0x699f3a);
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
B699f3c:{NFSU2_TR(0x699f3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699f3d:{NFSU2_TR(0x699f3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B699f40:{NFSU2_TR(0x699f40);
if(r1(R+518)){{goto L699f68;}}
}
B699f42:L699f42:{c.instructions+=2;NFSU2_TR(0x699f42);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B699f45:{NFSU2_TR(0x699f45);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L699f5f;}}
}
B699f47:L699f47:{c.instructions+=4;NFSU2_TR(0x699f47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699f4a:{NFSU2_TR(0x699f4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B699f4d:{NFSU2_TR(0x699f4d);
__builtin_memmove((R+4),(R+24),4);
}
B699f4f:{NFSU2_TR(0x699f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699f54ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699d92u);}goto L699d92;}
}
B699f54:L699f54:{c.instructions+=2;NFSU2_TR(0x699f54);
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
B699f57:{NFSU2_TR(0x699f57);
if(r1(R+518)){{goto L699f68;}}
}
B699f59:L699f59:{c.instructions+=3;NFSU2_TR(0x699f59);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B699f5a:{NFSU2_TR(0x699f5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B699f5d:{NFSU2_TR(0x699f5d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699f47u);}goto L699f47;}}
}
B699f5f:L699f5f:{c.instructions+=1;NFSU2_TR(0x699f5f);
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
B699f61:L699f61:{c.instructions+=5;NFSU2_TR(0x699f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699f62:{NFSU2_TR(0x699f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699f63:{NFSU2_TR(0x699f63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B699f64:{NFSU2_TR(0x699f64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699f65:{NFSU2_TR(0x699f65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699f68:L699f68:{c.instructions+=2;NFSU2_TR(0x699f68);
w4(R+0,u32(0x8007000eull));
}
B699f6d:{NFSU2_TR(0x699f6d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699f61u);}goto L699f61;}
}
B699f6f:L699f6f:{c.instructions+=14;NFSU2_TR(0x699f6f);
__builtin_memmove((R+28),(R+28),4);
}
B699f71:{NFSU2_TR(0x699f71);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f72:{NFSU2_TR(0x699f72);
__builtin_memmove((R+20),(R+16),4);
}
B699f74:{NFSU2_TR(0x699f74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B699f77:{NFSU2_TR(0x699f77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f78:{NFSU2_TR(0x699f78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699f7b:{NFSU2_TR(0x699f7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699f7e:{NFSU2_TR(0x699f7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f7f:{NFSU2_TR(0x699f7f);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f81:{NFSU2_TR(0x699f81);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B699f84:{NFSU2_TR(0x699f84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B699f87:{NFSU2_TR(0x699f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f88:{NFSU2_TR(0x699f88);
__builtin_memmove((R+28),(R+4),4);
}
B699f8a:{NFSU2_TR(0x699f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699f8full));
TAIL_STATIC(0x75c840u,75c);
}
B699f8f:L699f8f:{c.instructions+=7;NFSU2_TR(0x699f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B699f92:{NFSU2_TR(0x699f92);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B699f95:{NFSU2_TR(0x699f95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f96:{NFSU2_TR(0x699f96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699f97:{NFSU2_TR(0x699f97);
__builtin_memmove((R+4),(R+28),4);
}
B699f99:{NFSU2_TR(0x699f99);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B699f9d:{NFSU2_TR(0x699f9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699fa2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699de1u);}goto L699de1;}
}
B699fa2:L699fa2:{c.instructions+=7;NFSU2_TR(0x699fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B699fa5:{NFSU2_TR(0x699fa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B699fa8:{NFSU2_TR(0x699fa8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fa9:{NFSU2_TR(0x699fa9);
u8 U[4];
w4(U+0,u32(0x7babf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fae:{NFSU2_TR(0x699fae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699faf:{NFSU2_TR(0x699faf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fb0:{NFSU2_TR(0x699fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699fb5ull));
TAIL_STATIC(0x75e081u,75e);
}
B699fb5:L699fb5:{c.instructions+=7;NFSU2_TR(0x699fb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B699fb8:{NFSU2_TR(0x699fb8);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B699fbd:{NFSU2_TR(0x699fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B699fbe:{NFSU2_TR(0x699fbe);
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
B699fc0:{NFSU2_TR(0x699fc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699fc1:{NFSU2_TR(0x699fc1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B699fc2:{NFSU2_TR(0x699fc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699fc5:L699fc5:{c.instructions+=6;NFSU2_TR(0x699fc5);
__builtin_memmove((R+28),(R+28),4);
}
B699fc7:{NFSU2_TR(0x699fc7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fc8:{NFSU2_TR(0x699fc8);
__builtin_memmove((R+20),(R+16),4);
}
B699fca:{NFSU2_TR(0x699fca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fcb:{NFSU2_TR(0x699fcb);
__builtin_memmove((R+24),(R+4),4);
}
B699fcd:{NFSU2_TR(0x699fcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699fd2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x699e06u);}goto L699e06;}
}
B699fd2:L699fd2:{c.instructions+=2;NFSU2_TR(0x699fd2);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B699fd6:{NFSU2_TR(0x699fd6);
if(r1(R+518)){{goto L699fdf;}}
}
B699fd8:L699fd8:{c.instructions+=2;NFSU2_TR(0x699fd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fd9:{NFSU2_TR(0x699fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x699fdeull));
TAIL_STATIC(0x575630u,575);
}
B699fde:L699fde:{c.instructions+=1;NFSU2_TR(0x699fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B699fdf:L699fdf:{c.instructions+=4;NFSU2_TR(0x699fdf);
__builtin_memmove((R+0),(R+24),4);
}
B699fe1:{NFSU2_TR(0x699fe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B699fe2:{NFSU2_TR(0x699fe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B699fe3:{NFSU2_TR(0x699fe3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B699fe6:L699fe6:{c.instructions+=10;NFSU2_TR(0x699fe6);
__builtin_memmove((R+28),(R+28),4);
}
B699fe8:{NFSU2_TR(0x699fe8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B699fe9:{NFSU2_TR(0x699fe9);
__builtin_memmove((R+20),(R+16),4);
}
B699feb:{NFSU2_TR(0x699feb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699fee:{NFSU2_TR(0x699fee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B699ff1:{NFSU2_TR(0x699ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B699ff4:{NFSU2_TR(0x699ff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B699ff7:{NFSU2_TR(0x699ff7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B699ffa:{NFSU2_TR(0x699ffa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B699ffd:{NFSU2_TR(0x699ffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x69a000u,69a);
}
XIT:NFSU2_TR_EXIT(0x699,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
